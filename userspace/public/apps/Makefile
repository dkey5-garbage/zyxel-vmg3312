#***********************************************************************
#
#  Copyright (c) 2006  Broadcom Corporation
#  All Rights Reserved
#
# 
# 
# Unless you and Broadcom execute a separate written software license 
# agreement governing use of this software, this software is licensed 
# to you under the terms of the GNU General Public License version 2 
# (the "GPL"), available at http://www.broadcom.com/licenses/GPLv2.php, 
# with the following added to such license:
# 
#    As a special exception, the copyright holders of this software give 
#    you permission to link this software with independent modules, and 
#    to copy and distribute the resulting executable under terms of your 
#    choice, provided that you also meet, for each linked independent 
#    module, the terms and conditions of the license of that module. 
#    An independent module is a module which is not derived from this
#    software.  The special exception does not apply to any modifications 
#    of the software.  
# 
# Not withstanding the above, under no circumstances may you combine 
# this software in any way with any other Broadcom software provided 
# under a license other than the GPL, without Broadcom's express prior 
# written consent. 
#
#
#***********************************************************************/

#
# To add an app, add it to APP_DIRS, and write the target rule in the
# last section of this Makefile
#
APP_DIRS = dhcpv6 ppp ppp-2.4.4 sshd ipsec-tools ledctl dhrystone tcpdump sendpackets ppp/chat rpcapd ip6 faifa

#
# We need to declare these directory names as phony targets,
# otherwise make will think the directories themselves are
# the targets and will never execute the cmds.
# See GNU Make, 4.6 
#
.PHONY : $(APP_DIRS)


# Some apps have names that are different from their directory
# name, so need to list them explictly here.
all : $(APP_DIRS) pppd


#
# Cleaning rules
# See example in GNU Make, 4.6
# (ppp does not have a top level Makefile, so we can't just cd into
# and do a make clean.  Remove ppp from APP_DIRS and write out
# an explicit rule.)
#
clean: 
	for dir in $(subst ppp,,$(APP_DIRS)); do \
		$(MAKE) -C $$dir clean; \
	done
	$(MAKE) -C ppp/pppoe clean
ifneq ($(strip $(BUILD_TURKEY_RETAIL_PPTP_VPN)),)
	$(MAKE) -C ppp-2.4.4 clean
endif

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

ifneq ($(strip $(BUILD_VODSL)),)
include $(BUILD_DIR)/make.voice
endif

export BUILD_DIR
export CFLAGS


##############################################################
# 
# Rules for inidividual apps
# apps can be compiled or not depending on the profile (which
# is modified via make menuconfig)
#
##############################################################

ifneq ($(strip $(BUILD_SSHD)),)
sshd:
	(tar xkjf sshd.tar.bz2 2> /dev/null || true)
	$(MAKE) -C sshd
else
sshd:
	@echo "skipping sshd (not configured)"
endif

ifneq ($(strip $(BUILD_IPV6)),)
dhcpv6:
	(tar xkjf dhcpv6.tar.bz2 2> /dev/null || true)
	$(MAKE) -j1 -C dhcpv6
else
dhcpv6:
	@echo "skipping dhcpv6 (not configured)"
endif


ifneq ($(strip $(BUILD_PPPD)),)
pppd:
	$(MAKE) -C ppp/pppoe $(BUILD_PPPD)
else
pppd:
	@echo "skipping pppd (not configured)"
endif

ifneq ($(strip $(BUILD_TURKEY_RETAIL_PPTP_VPN)),)
ppp-2.4.4:
	$(MAKE) -C ppp-2.4.4
	$(MAKE) -C ppp-2.4.4 install
else
ppp-2.4.4:
	@echo "skipping ppp-2.4.4 (not configured)"
endif

# __MSTC__, Richard Huang, For WWAN
ifneq ($(strip $(BUILD_MSTC_CHAT)),)
ppp/chat: sanity_check
	$(MAKE) -C ppp/chat
else
ppp/chat: sanity_check
	@echo "skipping chat (not configured)"
endif

ifneq ($(strip $(BUILD_IPSEC_TOOLS)),)
ipsec-tools:
	(tar xkjf ipsec-tools.tar.bz2 2> /dev/null || true)
	$(MAKE) -j1 -C ipsec-tools $(BUILD_IPSEC_TOOLS)
else
ipsec-tools:
	@echo "skipping ipsec-tools (not configured)"
endif

ifneq ($(strip $(BUILD_LEDCTL)),)
ledctl:
	$(MAKE) -C $@
else
ledctl:
	@echo "skipping $@ (not configured)"
endif

ifneq ($(strip $(BENCHMARKS_SMP)),)
dhrystone:
	$(MAKE) -C $@
else
dhrystone:
	@echo "skipping dhrystone (not configured)"
endif

ifneq ($(strip $(BUILD_SENDPACKETS)),)
sendpackets:
	$(MAKE) -C sendpackets install
else
sendpackets:
	@echo "skipping sendpackets (not configured)"
endif

ifneq ($(strip $(BUILD_TCPDUMP)),)
tcpdump:
	ln -sf tcpdump tcpdump-4.1.1
	(tar xkz  -f tcpdump.tar.gz 2> /dev/null || true)
	rm -f tcpdump-4.1.1
	$(MAKE) -C tcpdump install
else
tcpdump:
	@echo "skipping tcpdump (not configured)"
endif

ifneq ($(strip $(BUILD_RPCAPD)),)
rpcapd:
	$(MAKE) -C rpcapd install
else
rpcapd:
	@echo "skipping rpcapd (not configured)"
endif
ifneq ($(strip $(BUILD_MSTC_RFC6204)),)
ip6:
	(tar xkjf ip6.tar.bz2 2> /dev/null || true)
	$(MAKE) -C ip6 
	$(MAKE) -C ip6 install
else
ip6:
	@echo "skipping ip6 (not configured)"
endif

ifneq ($(strip $(BUILD_MSTC_HOMEPLUG_DEVICE_DISCOVER)),)
faifa:
	@echo "build faifa"
	$(MAKE) -C $@ all
	$(MAKE) -C $@ mstc_install
	#cd faifa && ./configure --host= --target= --prefix=/usr - 
else
faifa:
	@echo "skipping faifa (not configured)"
endif
