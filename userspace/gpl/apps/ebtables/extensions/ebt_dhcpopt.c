/*
 *  ebtables ebt_dhcpopt: DHCP option module for userspace
 * 
 *  Authors:
 *   Julian Su <julian.su@zyxel.com.tw>
 *
 *  July, 2009
 *
 *  Changes:
 *    Support DHCP option classifier on bridge netfilter
 *    ZyXEL Communications Corp. <julian.su@zyxel.com.tw>
 *    July, 2009
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>
#include <netdb.h>
#include "../include/ebtables_u.h"
#include <linux/netfilter_bridge/ebt_ip.h>
#include <linux/netfilter_bridge/ebt_dhcpopt.h>
#if 0
#define printd(a) printf("\n\r ## %s %s %d printd:[%d] ## \n",__FILE__,__FUNCTION__,__LINE__,a);
#define printx(a) printf("\n\r ## %s %s %d printx:[%02x] ## \n",__FILE__,__FUNCTION__,__LINE__,a);
#define prints(a) printf("\n\r ## %s %s %d prints:[%s] ## \n",__FILE__,__FUNCTION__,__LINE__,a); 
#define printc(a) printf("\n\r ## %s %s %d printc:[%c] ## \n",__FILE__,__FUNCTION__,__LINE__,a); 
#else
#define printd(a) 
#define printx(a) 
#define prints(a) 
#define printc(a) 
#endif
#define IP_SOURCE '1'
#define IP_DEST   '2'
#define IP_myTOS  '3' /* include/bits/in.h seems to already define IP_TOS */
#define IP_PROTO  '4'
#define IP_SPORT  '5'
#define IP_DPORT  '6'
#define DHCP_OPTION '7'
#define OPT_SOURCE 0x01
#define OPT_DEST   0x02
#define OPT_TOS    0x04
#define OPT_PROTO  0x08
#define OPT_SPORT  0x10
#define OPT_DPORT  0x20
#define OPT_DHCP_OPTION  0x40

static struct option opts[] =
{
	{ "dhcp_option"           , required_argument, 0, DHCP_OPTION },
	{ 0 }
};

static void print_help()
{
	printf(
"DHCP options:\n"
"--dhcp_option    [!] address[/mask]: ip source specification\n");
}

static void init(struct ebt_entry_match *match)
{
	struct ebt_dhcpopt_info *dhcpoptinfo = (struct ebt_dhcpopt_info *)match->data;

	dhcpoptinfo->invflags = 0;
	dhcpoptinfo->bitmask = 0;
}

static int parse(int c, char **argv, int argc, const struct ebt_u_entry *entry,
   unsigned int *flags, struct ebt_entry_match **match)
{
	struct ebt_dhcpopt_info *dhcpoptinfo = (struct ebt_dhcpopt_info *)(*match)->data;
	char *end;
	long int i;

	switch (c) {
	case DHCP_OPTION:
		check_option(flags, OPT_DHCP_OPTION);
		dhcpoptinfo->bitmask |= EBT_DHCP_OPTION;
		if (check_inverse(optarg))
			dhcpoptinfo->invflags |= EBT_DHCP_OPTION;
		if (optind > argc)
			print_error("Missing DHCP_OPTION argument");
			strcpy(dhcpoptinfo->optionString,argv[optind - 1]);
		break;

	default:
		return 0;
	}
	return 1;
}

static void final_check(const struct ebt_u_entry *entry,
   const struct ebt_entry_match *match, const char *name,
   unsigned int hookmask, unsigned int time)
{
#if 0
 	struct ebt_dhcpopt_info *dhcpoptinfo = (struct ebt_dhcpopt_info *)match->data;
	if (entry->ethproto != ETH_P_IP || entry->invflags & EBT_IPROTO)
		print_error("For IP filtering the protocol must be "
		            "specified as IPv4");
#endif	
}

static void print(const struct ebt_u_entry *entry,
   const struct ebt_entry_match *match)
{
	struct ebt_dhcpopt_info *dhcpoptinfo = (struct ebt_dhcpopt_info *)match->data;

	if (dhcpoptinfo->bitmask & EBT_DHCP_OPTION) {
		printf("--dhcp_option ");
		if (dhcpoptinfo->invflags & EBT_DHCP_OPTION)
			printf("! ");

		printf("%s ", dhcpoptinfo->optionString);
	}
}

static int compare(const struct ebt_entry_match *m1,
   const struct ebt_entry_match *m2)
{
	struct ebt_ip_info *ipinfo1 = (struct ebt_ip_info *)m1->data;
	struct ebt_ip_info *ipinfo2 = (struct ebt_ip_info *)m2->data;

	if (ipinfo1->bitmask != ipinfo2->bitmask)
		return 0;
	if (ipinfo1->invflags != ipinfo2->invflags)
		return 0;
	if (ipinfo1->bitmask & EBT_IP_SOURCE) {
		if (ipinfo1->saddr != ipinfo2->saddr)
			return 0;
		if (ipinfo1->smsk != ipinfo2->smsk)
			return 0;
	}
	if (ipinfo1->bitmask & EBT_IP_DEST) {
		if (ipinfo1->daddr != ipinfo2->daddr)
			return 0;
		if (ipinfo1->dmsk != ipinfo2->dmsk)
			return 0;
	}
	if (ipinfo1->bitmask & EBT_IP_TOS) {
		if (ipinfo1->tos != ipinfo2->tos)
			return 0;
	}
	if (ipinfo1->bitmask & EBT_IP_PROTO) {
		if (ipinfo1->protocol != ipinfo2->protocol)
			return 0;
	}
	if (ipinfo1->bitmask & EBT_IP_SPORT) {
		if (ipinfo1->sport[0] != ipinfo2->sport[0] ||
		   ipinfo1->sport[1] != ipinfo2->sport[1])
			return 0;
	}
	if (ipinfo1->bitmask & EBT_IP_DPORT) {
		if (ipinfo1->dport[0] != ipinfo2->dport[0] ||
		   ipinfo1->dport[1] != ipinfo2->dport[1])
			return 0;
	}
	return 1;
}

static struct ebt_u_match dhcpopt_match =
{
	.name		= EBT_DHCPOPT_MATCH,
	.size		= sizeof(struct ebt_dhcpopt_info),
	.help		= print_help,
	.init		= init,
	.parse		= parse,
	.final_check	= final_check,
	.print		= print,
	.compare	= compare,
	.extra_ops	= opts,
};

static void _init(void) __attribute((constructor));
static void _init(void)
{
	register_match(&dhcpopt_match);
}
