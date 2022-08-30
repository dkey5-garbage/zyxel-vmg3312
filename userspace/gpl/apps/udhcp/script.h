#ifndef _SCRIPT_H
#define _SCRIPT_H

void run_script(struct dhcpMessage *packet, const char *name);

#endif
/* Merge option 121 from DSL-491HNU-B1B_V2_TTNET */
#ifdef MSTC_DHCP_121
struct dhcp_option121 {
	char option121_target[sizeof("255.255.255.255")];
	char option121_mask[sizeof("255.255.255.255")];
	char option121_gateway[sizeof("255.255.255.255")];
};
#endif
