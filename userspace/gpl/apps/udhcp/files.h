/* files.h */
#ifndef _FILES_H
#define _FILES_H

int read_config(char *file);
void write_leases(int dummy);
void read_leases(char *file);
// BRCM
#ifdef MLD_GLOB_TTNET_FEATURE	/* __MSTC__, Linda, OPTION 125 means it is STB. */
void send_lease_info(UBOOL8 isDelete, const struct dhcpOfferedAddr *lease, UBOOL8 isOPT125);
#else
void send_lease_info(UBOOL8 isDelete, const struct dhcpOfferedAddr *lease);
#endif	/* __MSTC__, Linda, OPTION 125 means it is STB_END. */
int read_vendor_id_config(char *file);
void write_decline(void);
void write_viTable(int dummy);


#ifdef DHCP_RELAY
void set_relays(void);
#endif


#endif /* _FILES_H */
