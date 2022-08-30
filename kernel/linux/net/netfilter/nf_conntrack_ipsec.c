/*
<:copyright-gpl
 Copyright 2010 Broadcom Corp. All Rights Reserved.

 This program is free software; you can distribute it and/or modify it
 under the terms of the GNU General Public License (Version 2) as
 published by the Free Software Foundation.

 This program is distributed in the hope it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 for more details.

 You should have received a copy of the GNU General Public License along
 with this program; if not, write to the Free Software Foundation, Inc.,
 59 Temple Place - Suite 330, Boston MA 02111-1307, USA.
:> 
*/

#include <linux/module.h>
#include <linux/skbuff.h>
#include <linux/in.h>
#include <linux/tcp.h>
#include <linux/ip.h>

#include <net/netfilter/nf_conntrack.h>
#include <net/netfilter/nf_conntrack_core.h>
#include <net/netfilter/nf_conntrack_helper.h>
#include <net/udp.h>
#include <linux/netfilter/nf_conntrack_proto_esp.h>
#include <linux/netfilter/nf_conntrack_ipsec.h>

#ifdef CONFIG_NF_BL_EXT
#include <linux/netfilter.h>
#endif /* CONFIG_NF_BL_EXT */

MODULE_AUTHOR("Pavan Kumar <pavank@broadcom.com>");
MODULE_DESCRIPTION("Netfilter connection tracking module for ipsec");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ip_conntrack_ipsec");

static DEFINE_SPINLOCK(nf_ipsec_lock);

int
(*nf_nat_ipsec_hook_outbound)(struct sk_buff *skb,
      struct nf_conn *ct, enum ip_conntrack_info ctinfo) __read_mostly;
EXPORT_SYMBOL_GPL(nf_nat_ipsec_hook_outbound);

int
(*nf_nat_ipsec_hook_inbound)(struct sk_buff *skb,
      struct nf_conn *ct, enum ip_conntrack_info ctinfo, __be32 lan_ip) __read_mostly;
EXPORT_SYMBOL_GPL(nf_nat_ipsec_hook_inbound);

struct sk_buff nfskb_p;

#if 0
#include <net/inet_sock.h>
#define DEBUGP(format, args...)	printk(KERN_DEBUG "%s:%s: " format, __FILE__, __FUNCTION__, ## args)
#else
#define DEBUGP(format, args...)
#endif

#define REFRESH_TIMEOUT    (10 * HZ)
#define CT_REFRESH_TIMEOUT (13 * HZ)
#define CT_15MIN_TIME      (60 * HZ * 15)
#define MAX_TIMEOUT_COUNT  ((CT_15MIN_TIME)/REFRESH_TIMEOUT)

/* Internal table for ISAKMP */
struct _ipsec_table 
{
   u_int32_t initcookie;
   __be32 lan_ip;
   struct nf_conn *ct;
   struct timer_list refresh_timer;
   int pkt_rcvd;
   int ntimeouts;
   int inuse;
} ipsec_table[MAX_VPN_CONNECTION];

static void ipsec_free_entry(unsigned long index)
{
   if( ipsec_table[index].inuse ) 
   {
      del_timer(&ipsec_table[index].refresh_timer);
      memset(&ipsec_table[index], 0, sizeof(struct _ipsec_table));
   }

   DEBUGP("try to free ipsec_table[%ld] which is not in use\n", index);
}

static void ipsec_refresh_ct(unsigned long data)
{
   struct _ipsec_table *ipsec_entry = NULL;

   if( data > MAX_VPN_CONNECTION )
      return;

   ipsec_entry = &ipsec_table[data];

   DEBUGP( "ntimeouts %d pkt_rcvd %d entry %p data %lu ct %p\n",
          ipsec_entry->ntimeouts, ipsec_entry->pkt_rcvd, ipsec_entry, data,
          ipsec_entry->ct);

   if( ipsec_entry->pkt_rcvd ) 
   {
      ipsec_entry->pkt_rcvd = 0;
      ipsec_entry->ntimeouts = 0;
   } 
   else 
   {
      ipsec_entry->ntimeouts++;
      if( ipsec_entry->ntimeouts >= MAX_TIMEOUT_COUNT )
      {
         ipsec_free_entry(data);
         return;
      }
   }
   ipsec_entry->refresh_timer.expires = jiffies + REFRESH_TIMEOUT;
   nfskb_p.nfct = (struct nf_conntrack *)ipsec_entry->ct;
   nf_ct_refresh_acct(ipsec_entry->ct, 0, &nfskb_p, CT_REFRESH_TIMEOUT);
   add_timer(&ipsec_entry->refresh_timer);

}


static struct _ipsec_table *ipsec_alloc_entry(int *index)
{
   int idx = 0;

   for( ; idx < MAX_VPN_CONNECTION; idx++ ) 
   {
      if( ipsec_table[idx].inuse )
         continue;
   
      *index = idx;
      memset(&ipsec_table[idx], 0, sizeof(struct _ipsec_table));
      init_timer( &ipsec_table[idx].refresh_timer );
      ipsec_table[idx].refresh_timer.expires = jiffies + REFRESH_TIMEOUT;
      ipsec_table[idx].refresh_timer.function = ipsec_refresh_ct;
      ipsec_table[idx].refresh_timer.data = (unsigned long)idx;
      add_timer( &ipsec_table[idx].refresh_timer );      

      return (&ipsec_table[idx]);
   }
   
   return NULL;
}

/*
 * Search an IPsec table entry by ct.
 */
struct _ipsec_table *search_ipsec_entry_by_ct(struct nf_conn *ct)
{
   int idx = 0;

   for( ; idx < MAX_VPN_CONNECTION; idx++)
   {
	  if (!ipsec_table[idx].inuse)
		 continue;

      pr_debug("Searching entry->ct(%p) <--> ct(%p)\n",
         ipsec_table[idx].ct, ct);

      /* check ct */
      if (ipsec_table[idx].ct == ct)
      {
         pr_debug("Found entry with ct(%p)\n", ct);

         return &ipsec_table[idx];
      }
   }
   pr_debug("No Entry for ct(%p)\n", ct);
   return NULL;
}

/*
 * Search an IPSEC table entry by the initiator cookie.
 */
struct _ipsec_table *
search_ipsec_entry_by_cookie(struct isakmp_pkt_hdr *isakmph)
{
   int idx = 0;
   struct _ipsec_table *ipsec_entry = ipsec_table;

   for( ; idx < MAX_VPN_CONNECTION; idx++ ) 
   {
	   DEBUGP("Searching initcookie %x <-> %x\n",
          ntohl(isakmph->initcookie), ntohl(ipsec_entry->initcookie));
      
      if( isakmph->initcookie == ipsec_entry->initcookie ) 
         return ipsec_entry;
      
      ipsec_entry++;
   }
   
   return NULL;
}

/*
 * Search an IPSEC table entry by the source IP address.
 */
struct _ipsec_table *
search_ipsec_entry_by_addr(const __be32 lan_ip, int *index)
{
   int idx = 0;
   struct _ipsec_table *ipsec_entry = ipsec_table;

   for( ; idx < MAX_VPN_CONNECTION; idx++ ) 
   {
	   DEBUGP("Looking up lan_ip=%pI4 table entry %pI4\n",
              &lan_ip, &ipsec_entry->lan_ip);

      if( ntohl(ipsec_entry->lan_ip) == ntohl(lan_ip) ) 
      {
    	  DEBUGP("Search by addr returning entry %p\n", ipsec_entry);

         *index = idx;
         return ipsec_entry;
      }
      ipsec_entry++;
   }
   
   return NULL;
}

static inline int
ipsec_inbound_pkt(struct sk_buff *skb, struct nf_conn *ct,
		  enum ip_conntrack_info ctinfo, __be32 lan_ip)
{
//   struct nf_ct_ipsec_master *info = &nfct_help(ct)->help.ct_ipsec_info;
   typeof(nf_nat_ipsec_hook_inbound) nf_nat_ipsec_inbound;

   DEBUGP("inbound ISAKMP packet for LAN %pI4\n", &lan_ip);

   nf_nat_ipsec_inbound = rcu_dereference(nf_nat_ipsec_hook_inbound);
   if (nf_nat_ipsec_inbound && ct->status & IPS_NAT_MASK)
      return nf_nat_ipsec_inbound(skb, ct, ctinfo, lan_ip);
   
   return NF_ACCEPT;
}

/*
 * For outgoing ISAKMP packets, we need to make sure UDP ports=500
 */
static inline int
ipsec_outbound_pkt(struct sk_buff *skb,
                   struct nf_conn *ct, enum ip_conntrack_info ctinfo)
{
   typeof(nf_nat_ipsec_hook_outbound) nf_nat_ipsec_outbound;

   DEBUGP("outbound ISAKMP packet\n");

   nf_nat_ipsec_outbound = rcu_dereference(nf_nat_ipsec_hook_outbound);
   if( nf_nat_ipsec_outbound && ct->status & IPS_NAT_MASK )
      return nf_nat_ipsec_outbound(skb, ct, ctinfo);
   
   return NF_ACCEPT;
}

/* track cookies inside ISAKMP, call expect_related */
static int conntrack_ipsec_help(struct sk_buff *skb, unsigned int protoff,
                             struct nf_conn *ct, enum ip_conntrack_info ctinfo)
{
   int dir = CTINFO2DIR(ctinfo);
   struct nf_ct_ipsec_master *info = &nfct_help(ct)->help.ct_ipsec_info;
   
   struct isakmp_pkt_hdr _isakmph, *isakmph = NULL;
   struct _ipsec_table *ipsec_entry = ipsec_table;
   int ret, index=0;

   DEBUGP("skb(%p) skb->data(%p) ct(%p) protoff(%d) offset(%d)\n", skb, skb->data, ct, protoff, (int) (protoff + sizeof(struct udphdr)));

   isakmph = skb_header_pointer(skb, protoff + sizeof(struct udphdr), sizeof(_isakmph), &_isakmph);
   
if (isakmph == NULL)
   {
      DEBUGP("ERR: no full ISAKMP header, can't track. isakmph=[%p]\n", isakmph);
      return NF_ACCEPT;
   }

   if ( 0 == isakmph->initcookie )
   {
      DEBUGP("no full ISAKMP header, can't track\n");
      return NF_ACCEPT;
   }

   spin_lock_bh(&nf_ipsec_lock);

   if( dir == IP_CT_DIR_ORIGINAL )
   {
      int lan_ip = ct->tuplehash[dir].tuple.src.u3.ip;
      
      /* create one entry in the internal table if a new connection is found */
      if( (ipsec_entry = search_ipsec_entry_by_cookie(isakmph)) == NULL ) 
      {
         /* NOTE: cookies may be updated in the connection */
         if( (ipsec_entry = 
              search_ipsec_entry_by_addr(lan_ip, &index)) == NULL ) 
         {
            ipsec_entry = ipsec_alloc_entry(&index);
            if( ipsec_entry == NULL ) 
            {
               /* All entries are currently in use */
               DEBUGP("%s:%s Out of table entries\n", __FILE__, __FUNCTION__);
               spin_unlock_bh(&nf_ipsec_lock);
               return NF_DROP;
            }
            
            ipsec_entry->ct = ct; /* KT: Guess it should be here */
            ipsec_entry->initcookie = isakmph->initcookie; /* KT: Update our cookie information - moved to here */
            ipsec_entry->lan_ip = ct->tuplehash[dir].tuple.src.u3.ip;
            ipsec_entry->inuse = 1;

            DEBUGP("NEW ipsec_entry[%d] with ct=%p, lan_ip=%pI4, initcookie=%x\n",
				index, ipsec_entry->ct, &ipsec_entry->lan_ip,
				ntohl(ipsec_entry->initcookie) );
         } else {
             DEBUGP("EXISTING ipsec_entry[%d] with ct=%p, lan_ip=%pI4, initcookie=%x\n",
 				index, ipsec_entry->ct, &ipsec_entry->lan_ip,
 				ntohl(ipsec_entry->initcookie) );
         }
      }
      ipsec_entry->pkt_rcvd++;

      info->initcookie = isakmph->initcookie;
      info->lan_ip = ct->tuplehash[dir].tuple.src.u3.ip;

      DEBUGP("L->W: initcookie=%x, lan_ip=%pI4, dir[%d] src.u3.ip=%pI4, dst.u3.ip=%pI4\n",
              info->initcookie, &info->lan_ip,
              dir,
              &ct->tuplehash[dir].tuple.src.u3.ip,
              &ct->tuplehash[dir].tuple.dst.u3.ip);
      
      nf_ct_refresh_acct(ipsec_entry->ct, 0, skb, CT_REFRESH_TIMEOUT);

      ret = ipsec_outbound_pkt(skb, ct, ctinfo);
   }
   else
   {
	  DEBUGP("WAN->LAN ct=%p\n", ct);
      
      if( (ipsec_entry = search_ipsec_entry_by_cookie(isakmph)) != NULL )
      {
    	 nf_ct_refresh_acct(ipsec_entry->ct, 0, skb, CT_REFRESH_TIMEOUT);
         ipsec_entry->pkt_rcvd++;

         DEBUGP("W->L: initcookie=%x, lan_ip=%pI4, dir[%d] src.u3.ip=%pI4, dst.u3.ip=%pI4\n",
              info->initcookie, &info->lan_ip,
              dir,
              &ct->tuplehash[dir].tuple.src.u3.ip,
              &ct->tuplehash[dir].tuple.dst.u3.ip);

         ret = ipsec_inbound_pkt(skb, ct, ctinfo, ipsec_entry->lan_ip);
      }
      else
      {
    	 DEBUGP("WARNNING: client from WAN tries to connect to VPN server in the LAN. ipsec_entry=[%p]\n", ipsec_entry);
         ret = NF_ACCEPT;
      }
   }

   spin_unlock_bh(&nf_ipsec_lock);

   return ret;
}

/* Called when the connection is deleted. */
static void ipsec_destroy(struct nf_conn *ct)
{
	struct _ipsec_table *ipsec_entry = NULL;

	spin_lock_bh(&nf_ipsec_lock);
	DEBUGP("DEL IPsec entry ct(%p)\n", ct);
	if ((ipsec_entry = search_ipsec_entry_by_ct(ct))) {
		memset(ipsec_entry, 0, sizeof(struct _ipsec_table));
	} else {
		DEBUGP("DEL IPsec entry failed: ct(%p)\n", ct);
	}
	spin_unlock_bh(&nf_ipsec_lock);
}


static const struct nf_conntrack_expect_policy ipsec_exp_policy = {
	.max_expected	= 3,
	.timeout		= 300,
};

/* ISAKMP protocol helper */
static struct nf_conntrack_helper ipsec __read_mostly = {
   .name = "ipsec",
   .me = THIS_MODULE,
   .tuple.src.l3num = AF_INET,
   .tuple.dst.protonum = IPPROTO_UDP,
   .tuple.src.u.udp.port = __constant_htons(IPSEC_PORT),

   .help = conntrack_ipsec_help,
   .destroy = ipsec_destroy,
   .expect_policy		= &ipsec_exp_policy,
};

static int __init nf_conntrack_ipsec_init(void)
{
   return nf_conntrack_helper_register(&ipsec);
}

static void __exit nf_conntrack_ipsec_fini(void)
{
   int idx = 0;

   for( ; idx < MAX_VPN_CONNECTION; idx++ )
      if( ipsec_table[idx].inuse )
         del_timer(&ipsec_table[idx].refresh_timer);

   nf_conntrack_helper_unregister(&ipsec);
}

module_init(nf_conntrack_ipsec_init);
module_exit(nf_conntrack_ipsec_fini);
