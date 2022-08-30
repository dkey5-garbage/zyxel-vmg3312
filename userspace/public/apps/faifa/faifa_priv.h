/*
 *  Faifa library private interface
 *
 *  Copyright (C) 2007-2008 Xavier Carcelle <xavier.carcelle@gmail.com>
 *		    	    Florian Fainelli <florian@openwrt.org>
 *			    Nicolas Thill <nico@openwrt.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

/*
 *  In addition, as a special exception, the copyright holders give
 *  permission to link the code of portions of this program with the
 *  OpenSSL library under certain conditions as described in each
 *  individual source file, and distribute linked combinations
 *  including the two.
 *  You must obey the GNU General Public License in all respects
 *  for all of the code used other than OpenSSL.  If you modify
 *  file(s) with this exception, you may extend this exception to your
 *  version of the file(s), but you are not obligated to do so.  If you
 *  do not wish to do so, delete this exception statement from your
 *  version.  If you delete this exception statement from all source
 *  files in the program, then also delete it here.
 */

#ifndef __FAIFA_PRIV_H__
#define __FAIFA_PRIV_H__

#include <sys/socket.h>
#include <net/if.h>
#include <pcap.h>
#ifdef DARWIN
#include <sys/ioctl.h>
#include <net/bpf.h>
#endif

#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))

#ifndef UNUSED
# if defined(__GNUC__)
#  define UNUSED(x) UNUSED_ ## x __attribute__((unused))
# elif defined(__LCLINT__)
#  define UNUSED(x) /*@unused@*/ x
# else
#  define UNUSED(x) x
# endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

struct faifa {
	char ifname[IFNAMSIZ];
	pcap_t *pcap;
	char error[256];
	u_int8_t src_addr[ETHER_ADDR_LEN];
	u_int8_t dst_addr[ETHER_ADDR_LEN];
	pthread_t receive_thread;
	int verbose;
};
#ifdef MSTC_HOMEPLUG_DEVICE_DISCOVER
struct HPdump_t {
	char ifname[8];
	char hwaddr[32];
};
#endif
extern void faifa_set_error(faifa_t *faifa, char *format, ...);

#ifdef __cplusplus
}
#endif

#endif /* __FAIFA_PRIV_H__ */
