#! /usr/bin/make

#BRCM begin
#EXT_FUNC+=802_3 nat arp arpreply ip standard log redirect vlan mark_m mark \
#          pkttype stp among limit
##__MSTC__, FuChia, QoS add arp policer mark_m Auto Priority Mapping
EXT_FUNC+=ip ip6 standard vlan mark_m mark time ftos arp policer AUTOMAP skiplog dhcpopt
EXT_TABLES+=filter nat broute

ifeq ($(strip $(WIRELESS)),1)
EXT_FUNC+=wmm_mark
endif

#BRCM end
EXT_OBJS+=$(foreach T,$(EXT_FUNC), extensions/ebt_$(T).o)
EXT_OBJS+=$(foreach T,$(EXT_TABLES), extensions/ebtable_$(T).o)

extensions/ebt_%.o: extensions/ebt_%.c include/ebtables_u.h
	$(CC) $(CFLAGS) $(PROGSPECS) -c -o $@ $< -I$(KERNEL_INCLUDES)

extensions/ebtable_%.o: extensions/ebtable_%.c
	$(CC) $(CFLAGS) $(PROGSPECS) -c -o $@ $< -I$(KERNEL_INCLUDES)

