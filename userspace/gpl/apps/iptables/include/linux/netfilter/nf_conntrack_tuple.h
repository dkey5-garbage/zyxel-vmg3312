/*
 * Definitions and Declarations for tuple.
 *
 * 16 Dec 2003: Yasuyuki Kozakai @USAGI <yasuyuki.kozakai@toshiba.co.jp>
 *	- generalize L3 protocol dependent part.
 *
 * Derived from include/linux/netfiter_ipv4/ip_conntrack_tuple.h
 */

#ifndef _NF_CONNTRACK_TUPLE_H
#define _NF_CONNTRACK_TUPLE_H

#include <linux/netfilter/nf_conntrack_tuple_common.h>

/* A `tuple' is a structure containing the information to uniquely
  identify a connection.  ie. if two packets have the same tuple, they
  are in the same connection; if not, they are not.

  We divide the structure along "manipulatable" and
  "non-manipulatable" lines, for the benefit of the NAT code.
*/

#define NF_CT_TUPLE_L3SIZE	4

/* The l3 protocol-specific manipulable parts of the tuple: always in
   network order! */
union nf_conntrack_address {
	u_int32_t all[NF_CT_TUPLE_L3SIZE];
	__be32 ip;
	__be32 ip6[4];
};

/* The protocol-specific manipulable parts of the tuple: always in
   network order! */
union nf_conntrack_man_proto
{
	/* Add other protocols here. */
	u_int16_t all;

	struct {
		__be16 port;
	} tcp;
	struct {
		__be16 port;
	} udp;
	struct {
		__be16 id;
	} icmp;
	struct {
		__be16 port;
	} sctp;
	struct {
		__be16 key;	/* GRE key is 32bit, PPtP only uses 16bit */
	} gre;

/* _MSTC_, Linda, IPSEC ALG */
	struct {
		__be32 spi;
	} esp;
/* _MSTC_, Linda, IPSEC ALG_END */
};

/* The manipulable part of the tuple. */
struct nf_conntrack_man
{
	union nf_conntrack_address u3;
	union nf_conntrack_man_proto u;
	/* Layer 3 protocol */
	u_int16_t l3num;
};

/* This contains the information to distinguish a connection. */
struct nf_conntrack_tuple
{
	struct nf_conntrack_man src;

	/* These are the parts of the tuple which are fixed. */
	struct {
		union nf_conntrack_address u3;
		union {
			/* Add other protocols here. */
			u_int16_t all;

			struct {
				__be16 port;
			} tcp;
			struct {
				__be16 port;
			} udp;
			struct {
				u_int8_t type, code;
			} icmp;
			struct {
				__be16 port;
			} sctp;
			struct {
				__be16 key;
			} gre;
/* _MSTC_, Linda, IPSEC ALG */
			struct {
				__be32 spi;
			} esp;
/* _MSTC_, Linda, IPSEC ALG_END */
		} u;

		/* The protocol. */
		u_int8_t protonum;

		/* The direction (for tuplehash) */
		u_int8_t dir;
	} dst;
};

#endif /* _NF_CONNTRACK_TUPLE_H */
