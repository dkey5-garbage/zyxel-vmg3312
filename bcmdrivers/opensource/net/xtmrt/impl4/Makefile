# File: bcmdrivers/opensource/net/xtmrt/Makefile
#
# Makefile for the BCM63xx bcmxtmrt driver.
#

obj-y := bcmxtmrt.o bcmxtmrtbond.o

EXTRA_CFLAGS += -I$(INC_BRCMDRIVER_PUB_PATH)/$(BRCM_BOARD) -I$(INC_BRCMSHARED_PUB_PATH)/$(BRCM_BOARD) -I$(INC_BRCMBOARDPARMS_PATH)/$(BRCM_BOARD) \
-I$(INC_BRCMSHARED_PRIV_PATH)/$(BRCM_BOARD) -I$(INC_BRCMDRIVER_PRIV_PATH)/$(BRCM_BOARD) -DDPERF_MON_BONDING_US -DDPTMBOND_US_PRIO_TRAFFIC_SPLIT
EXTRA_CFLAGS += -I$(BRCMDRIVERS_DIR)/opensource/net/enet/shared
EXTRA_CFLAGS += -I$(BRCMDRIVERS_DIR)/opensource/net/xtmrt/impl$(CONFIG_BCM_XTMRT_IMPL)
EXTRA_CFLAGS += -I$(BRCMDRIVERS_DIR)/broadcom/char/fap/impl$(CONFIG_BCM_FAP_IMPL)
EXTRA_CFLAGS += -I$(BRCMDRIVERS_DIR)/broadcom/char/fap/impl$(CONFIG_BCM_FAP_IMPL)/4ke
EXTRA_CFLAGS += -Werror -Wfatal-errors
ifeq "$(BRCM_PHY_LOOPBACK)" "y"
EXTRA_CFLAGS += -DPHY_LOOPBACK
endif
#__MSTC__, Richard Huang
ifeq ($(strip $(BUILD_BCM_SEPARATE_MAC_FOR_WAN_INTERFACES)),y)
EXTRA_CFLAGS += -DSEPARATE_MAC_FOR_WAN_INTERFACES
endif
ifeq ($(strip $(BUILD_MSTC_TTNET_DSLMAC)),y)
EXTRA_CFLAGS += -DMSTC_TTNET_DSLMAC
endif
#__MSTC__, Richard Huang
EXTRA_CFLAGS += -Werror -Wfatal-errors

clean:
	rm -f core *.o *.a *.s

