#
# To add an app, add it to APP_DIRS, and write the target rule in the
# last section of this Makefile
#
APP_DIRS = atm2684 bridge-utils busybox sysstat dproxy-nexgen ebtables ftpd \
           iproute2 iptables radvd udhcp urlfilterd zebra \
           dynahelper mtd-utils ntfs-3g dnsmasq-2.78 samba ndisc6 iperf conntrack openl2tpd rng-tools-2 pptp-1.7.1 \
           jamvm-1.5.4 felix_framework oprofile mailsend wput wpa-supplicant inadyn ez-ipupdate lsusb usb-modeswitch-1.1.0 \
           miniupnpc-1.7.20120830

#
# We need to declare these directory names as phony targets,
# otherwise make will think the directories themselves are
# the targets and will never execute the cmds.
# See GNU Make, 4.6 
#
.PHONY : $(APP_DIRS)


# Some apps have names that are different from their directory
# name, so need to list them explictly here.
all : $(APP_DIRS) brctl dproxy


#
# Cleaning rules
# See example in GNU Make, 4.6
#
clean:
	for dir in $(APP_DIRS); do \
		if [ -d $$dir ] ; then \
			$(MAKE) -C $$dir clean; \
		fi \
	done


#
# Set our CommEngine directory (by splitting the pwd into two words
# at /userspace and taking the first word only).
# Then include the common defines under CommEngine.
# You do not need to modify this part.
#
CURR_DIR := $(shell pwd)
BUILD_DIR:=$(subst /userspace, /userspace,$(CURR_DIR))
BUILD_DIR:=$(word 1, $(BUILD_DIR))

include $(BUILD_DIR)/make.common

export BUILD_DIR



##############################################################
# 
# Rules for inidividual apps
# apps can be compiled or not depending on the profile (which
# is modified via make menuconfig)
#
##############################################################


ifneq ($(strip $(BUILD_BRCTL)),)
brctl: sanity_check
	mkdir -p $(INSTALL_DIR)/bin
	(tar xkfj bridge-utils.tar.bz2 2> /dev/null || true)
	$(MAKE) -C bridge-utils $(BUILD_BRCTL)
else
brctl: sanity_check
endif


ifeq ($(strip $(BRCM_IKOS)),y)
BUSYBOX_CONFIG=ikos.config
else
BUSYBOX_CONFIG=brcm.config
endif

ifneq ($(strip $(BUILD_BUSYBOX)),)
busybox: sanity_check
	mkdir -p $(INSTALL_DIR)/bin
	(tar xkfj busybox.tar.bz2 2> /dev/null || true)
	#cd busybox; cp -f .config .config.old; ./gendotconfig
	cd busybox; cp -f .config .config.old; ./WWANconfig
	$(MAKE) -C busybox include/autoconf.h
#__MSTC__, Dennis
ifneq ($(strip $(BUILD_MSTC_WGET)),)
	cd busybox; \
	echo "# CONFIG_FEATURE_WGET_STATUSBAR is not set" >> .config; \
	echo "# CONFIG_FEATURE_WGET_AUTHENTICATION is not set" >> .config; \
	echo "# CONFIG_FEATURE_WGET_IP6_LITERAL is not set" >> .config; \
	cd busybox; sed -i 's/# CONFIG_WGET is not set/CONFIG_WGET=y/' .config
else
	cd busybox;	 \
	echo "# CONFIG_FEATURE_WGET_STATUSBAR is not set" >> .config; \
	echo "# CONFIG_FEATURE_WGET_AUTHENTICATION is not set" >> .config; \
	echo "# CONFIG_FEATURE_WGET_IP6_LITERAL is not set" >> .config; \
	cd busybox; sed -i 's/CONFIG_WGET=y/# CONFIG_WGET is not set/' .config 
endif	
	$(MAKE) -C busybox install
else
busybox: sanity_check
	@echo "skipping busybox (not configured)"
endif

ifneq ($(strip $(BUILD_SYSSTAT)),)
sysstat: sanity_check
	mkdir -p $(INSTALL_DIR)/bin
	(tar xkfj sysstat.tar.bz2 2> /dev/null || true)
	cd sysstat
	$(MAKE) -C sysstat install
else
sysstat: sanity_check
	@echo "skipping sysstat (not configured)"
endif


ifneq ($(strip $(BUILD_DPROXY)),)
dproxy: sanity_check
	mkdir -p $(INSTALL_DIR)/bin
	(tar xkfj dproxy-nexgen.tar.bz2 2> /dev/null || true)
	$(MAKE) -C dproxy-nexgen $(BUILD_DPROXY)
else
dproxy: sanity_check
	@echo "skipping dproxy (not configured)"
endif

ifneq ($(strip $(BUILD_DNSMASQ)),)
export BUILD_MSTC_DNS_ROUTE
export BUILD_MSTC_DNS_ROUND_ROBIN
dnsmasq-2.78: sanity_check
	mkdir -p $(INSTALL_DIR)/bin
	$(MAKE) -C dnsmasq-2.78 $(BUILD_DNSMASQ)
else
dnsmasq-2.78: sanity_check
	@echo "skipping dnsmasq (not configured)"
endif

# in userapps->Dynamic ALG loader
ifneq ($(strip $(BUILD_DYNAHELPER)),)
dynahelper: sanity_check
	$(MAKE) -C dynahelper $(BUILD_DYNAHELPER)
else
dynahelper: sanity_check
	@echo "skipping dynahelper (not configured)"
endif


ifneq ($(strip $(BUILD_EBTABLES)),)
ebtables: sanity_check
	mkdir -p $(INSTALL_DIR)/bin
	(tar xkfj ebtables.tar.bz2 2> /dev/null || true)
	$(MAKE) -C ebtables $(BUILD_EBTABLES)
else
ebtables: sanity_check
	@echo "skipping ebtables (not configured)"
endif


# ftpd does sanity check in its own Makefile
ifneq ($(strip $(BUILD_FTPD)),)
ftpd:
	(tar xkfj ftpd.tar.bz2 2> /dev/null || true)
	$(MAKE) -C ftpd $(BUILD_FTPD)
else
ftpd:
	@echo "skipping ftpd (not configured)"
endif


# Build the iproute2 package whenever IPROUTE2, IPV6, or BRCM_KERNEL_NETQOS
# is defined.  In make menuconfig, "traffic control" enables BRCM_KERNEL_NETQOS
ifneq ($(strip $(BUILD_IPROUTE2)),)
DO_BUILD_IPROUTE2=y
endif

ifneq ($(strip $(BUILD_IPV6)),)
DO_BUILD_IPROUTE2=y
endif

ifneq ($(strip $(BRCM_KERNEL_NETQOS)),)
DO_BUILD_IPROUTE2=y
endif

ifneq ($(strip $(BUILD_GPONRG_OMCI_FULL)),)
DO_BUILD_IPROUTE2=y
endif

ifneq ($(strip $(DO_BUILD_IPROUTE2)),)
iproute2: sanity_check
	(tar xkfj iproute2.tar.bz2 2> /dev/null || true)
	$(MAKE) -C iproute2 install 
else
iproute2: sanity_check
	@echo "skipping iproute2 (not configured)"
endif


# iptables is dependent on kernel netfilter modules
ifneq ($(strip $(BRCM_KERNEL_NETFILTER)),)
ifneq ($(strip $(BUILD_IPTABLES)),)
iptables: sanity_check
	(tar xkfj iptables.tar.bz2 2> /dev/null || true)
	$(MAKE) -C iptables $(BUILD_IPTABLES)
else
iptables: sanity_check
	@echo "skipping iptables (not configured)"
endif
else
iptables: sanity_check
	@echo Warning: To use iptables, you need to enable netfilter in the kernel !!!!!
endif


ifneq ($(strip $(BUILD_IPTABLES)),)
ifneq ($(strip $(BUILD_URLFILTER)),)
urlfilterd: sanity_check
	$(MAKE) -C urlfilterd $(BUILD_URLFILTER)
else
urlfilterd: sanity_check
endif
else
urlfilterd: sanity_check
	@echo Warning: To use urlfilterd, you need to enable iptables!!!!!
endif



ifneq ($(strip $(BUILD_IPV6)),)
radvd: sanity_check
	(tar xkjf radvd.tar.bz2 2> /dev/null || true)
	$(MAKE) -C radvd
else
radvd: sanity_check
	@echo "skipping radvd (not configured)"
endif



ifneq ($(strip $(BUILD_UDHCP)),)
udhcp: sanity_check
	$(MAKE) -C udhcp $(BUILD_UDHCP)
else
udhcp: sanity_check
	@echo "skipping udhcp (not configured)"
endif


ifneq ($(strip $(BUILD_ZEBRA)),)
zebra: sanity_check
	(tar xkfj zebra.tar.bz2 2> /dev/null || true)
	$(MAKE) -C zebra $(BUILD_ZEBRA)
else
zebra: sanity_check
	@echo "skipping zebra (not configured)"
endif

ifneq ($(strip $(BUILD_MTDUTILS)),)
mtd-utils: sanity_check
	mkdir -p $(INSTALL_DIR)/bin
	(tar xkfz mtd-utils.tar.gz 2> /dev/null || true)
	(cd mtd-utils; $(MAKE) install)
else
mtd-utils: sanity_check
	@echo "skipping mtd-utils (not configured)"
endif

ifneq ($(strip $(BUILD_NTFS_3G)),)
ntfs-3g: sanity_check
	(tar xkfz ntfs-3g.tar.gz 2> /dev/null || true)
	$(MAKE) -C ./ntfs-3g 
	install -m 755 ./ntfs-3g/libntfs-3g/.libs/libntfs-3g.so $(INSTALL_DIR)/lib/libntfs-3g.so.83
	install -m 755 ./ntfs-3g/src/.libs/ntfs-3g  $(INSTALL_DIR)/bin/ntfs-3g	
else
ntfs-3g: sanity_check
	@echo "skipping $@ (not configured)"
endif

ifneq ($(strip $(BUILD_SAMBA)),)
samba: sanity_check
	(tar xkfz samba.tar.gz 2> /dev/null || true)
	$(MAKE) -C ./samba -j 1
else
samba: sanity_check 
	@echo "skipping $@ (not configured)"
endif

ifneq ($(strip $(BUILD_IPV6)),)
ndisc6: sanity_check
	(tar xkjf ndisc6.tar.bz2 2> /dev/null || true)
	$(MAKE) -C ndisc6
	install -m 755 ./ndisc6/src/ndisc6 $(INSTALL_DIR)/bin
	install -m 755 $(TOOLCHAIN_TOP)/lib/librt.so.0 $(INSTALL_DIR)/lib
	install -m 755 $(TOOLCHAIN_TOP)/lib/librt-0.9.29.so $(INSTALL_DIR)/lib
else
ndisc6: sanity_check 
	@echo "skipping $@ (not configured)"
endif

ifneq ($(strip $(BUILD_IPERF)),)
iperf: sanity_check
	$(MAKE) -C ./iperf -j 1
else
iperf: sanity_check
	@echo "skipping $@ (not configured)"
endif

ifneq ($(strip $(BUILD_L2TPAC)),)
openl2tpd: sanity_check
	(tar xkjf openl2tpd.tar.bz2 2> /dev/null || true)
	$(MAKE) -C openl2tpd
else
openl2tpd: sanity_check
	@echo "skipping openl2tpd (not configured)"
endif

ifneq ($(strip $(BUILD_RNGD)),)
rng-tools-2: sanity_check
	mkdir -p $(INSTALL_DIR)/bin
	(tar xkfz rng-tools-2.tar.gz 2> /dev/null || true)
	($(MAKE) -C rng-tools-2 $(BUILD_RNGD))
else
rngd: sanity_check
	@echo "skipping rng-tools-2 (not configured)"
endif

ifneq ($(strip $(BUILD_TURKEY_RETAIL_PPTP_VPN)),)
pptp-1.7.1: sanity_check
#	(tar xkjf pptp.tar.bz2 2> /dev/null || true)
	$(MAKE) -C pptp-1.7.1
	$(MAKE) -C pptp-1.7.1 install
else
pptp-1.7.1: sanity_check
	@echo "skipping pptp-1.7.1 (not configured)"
endif

ifneq ($(strip $(BUILD_CONNTRACK_TOOLS)),)
conntrack: sanity_check
	(tar xkfz conntrack.tar.gz 2> /dev/null || true)
	$(MAKE) -C ./conntrack
else
conntrack: sanity_check
	@echo "skipping $@ (not configured)"
endif
#__MSTC__, Dennis
ifneq ($(strip $(BUILD_MSTC_WPUT)),)
wput: sanity_check
	$(MAKE) -C ./wput all
	install -m 755 ./wput/wput $(INSTALL_DIR)/bin
else
wput: sanity_check
	@echo "skipping $@ (not configured)"
endif

ifneq ($(strip $(BUILD_OSGI_JVM)),)
jamvm-1.5.4: sanity_check
#	cd jamvm-1.5.4; ./configure --prefix=$(INSTALL_DIR)/usr/local/jamvm --host=mips-linux --target=mips-linux-uclibc --disable-dependency-tracking --disable-zip --with-classpath-install-dir=/usr/local/classpath
	(tar xkfz jamvm-1.5.4.tar.gz 2> /dev/null || true)
	cd jamvm-1.5.4/src; (ln -s arch/mips.h arch.h 2>/dev/null || true)
	$(MAKE) -C ./jamvm-1.5.4 install

felix_framework: sanity_check
	cd felix_framework; (tar xkfz ../felix.tar.gz 2> /dev/null || true)
	$(MAKE) -C ./felix_framework
#this bundle is used for debugging only.  Felix will run in the background, so this needs to be removed.
#	rm -f $(INSTALL_DIR)/usr/local/felix/bundle/org.apache.felix.gogo.shell-0.7.0-SNAPSHOT.jar

else
jamvm-1.5.4: sanity_check
	@echo "skipping $@ (not configured)"

felix_framework: sanity_check
	@echo "skipping $@ (not configured)"
endif

ifneq ($(strip $(BUILD_OPROFILE)),)
oprofile: sanity_check
	(tar xkjf oprofile.tar.bz2 2> /dev/null || true)
	mkdir -p ./oprofile/op_bin
	$(MAKE) -C ./oprofile
else
oprofile: sanity_check
	@echo "skipping $@ (not configured)"
endif

#__MSTC__, TengChang
ifneq ($(strip $(BUILD_MAILSEND)),)
mailsend: sanity_check
	(tar xkfz mailsend.tar.gz 2> /dev/null || true)
	$(MAKE) -C ./mailsend install
else
mailsend: sanity_check
	@echo "skipping mailsend (not configured)"
endif

#__MSTC__, Amy, 802.1x
ifneq ($(strip $(BUILD_MSTC_WAN_8021X)),)
wpa-supplicant:
	$(MAKE) -C ./wpa-supplicant install
	cp wpa_supplicant.conf $(INSTALL_DIR)/etc
else
wpa-supplicant:
endif
#__MSTC__, Amy, 802.1x

ifeq ($(strip $(MSTC_DDNS_INADYN)),y)
inadyn: sanity_check
	$(MAKE) -C inadyn	
else
inadyn: sanity_check
	@echo "skipping inadyn (not configured)"
endif

ifeq ($(strip $(MSTC_DDNS_EZ_IPUPDATE)),y)
ez-ipupdate: sanity_check
	(tar xkjf ez-ipupdate.tar.bz2 2> /dev/null || true)
	cd ez-ipupdate && ./configure --build=i686-linux --host=mips-linux --target=mips-linux-uclibc
	$(MAKE) -C ez-ipupdate
	install -m 755 ./ez-ipupdate/ez-ipupdate $(INSTALL_DIR)/bin
else
ez-ipupdate: sanity_check
	@echo "skipping ez-ipupdate (not configured)"
endif
#__ZyXEL__, I-Wei, support lsusb
ifneq ($(strip $(BUILD_LSUSB)),)
lsusb:
	$(MAKE) -C $@ all
	cd $@; cp -f lsusb $(INSTALL_DIR)/bin/lsusb
	cp -f $(LIBDIR)/librt-0.9.29.so $(INSTALL_DIR)/lib
	cp -f $(LIBDIR)/librt.so.0 $(INSTALL_DIR)/lib
else
lsusb:
	@echo "skipping lsusb (not configured)"
endif

#__ZyXEL__, I-Wei, support usb-modeswitch-1.1.0
ifneq ($(strip $(BUILD_USB_MODESWITCH)),)
usb-modeswitch-1.1.0:
	$(MAKE) -C $@ all
	cd $@; cp -f usb_modeswitch $(INSTALL_DIR)/bin/usb_modeswitch
	mkdir -p $(INSTALL_DIR)/etc/wwan
	cd $@; cp -a usb_modeswitch.d $(INSTALL_DIR)/etc/wwan/
	chmod -R 777 $(INSTALL_DIR)/etc/wwan/usb_modeswitch.d
else
usb-modeswitch-1.1.0:
	@echo "skipping usb-modeswitch-1.1.0 (not configured)"
endif

# Support UPNPC __MSTC__,Yic
miniupnpc-1.7.20120830: sanity_check
	$(MAKE) -C miniupnpc-1.7.20120830