/*
 *  ebt_dhcpopt
 *
 *	Authors:
 *	Julian Su <julian.su@zyxel.com.tw>
 *
 *  July, 2009
 *
 *  Changes:
 *    Support DHCP option classifier on bridge netfilter
 *    ZyXEL Communications Corp. <julian.su@zyxel.com.tw>
 *    July, 2009
 */

#ifndef __LINUX_BRIDGE_EBT_DHCPOPT_H
#define __LINUX_BRIDGE_EBT_DHCPOPT_H

#define EBT_DHCP_OPTION 0x01

#define EBT_DHCP_OPTION_MASK (EBT_DHCP_OPTION /* |*/)
#define EBT_DHCPOPT_MATCH "dhcpopt"

/* the same values are used for the invflags */
struct ebt_dhcpopt_info
{
	uint8_t optionNum;
	uint8_t  bitmask;
	uint8_t  invflags;
	char optionString[256];
};

#endif

