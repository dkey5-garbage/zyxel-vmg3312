/*
 <:copyright-BRCM:2009:DUAL/GPL:standard
 
    Copyright (c) 2009 Broadcom Corporation
    All Rights Reserved
 
 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License, version 2, as published by
 the Free Software Foundation (the "GPL").
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 
 A copy of the GPL is available at http://www.broadcom.com/licenses/GPLv2.php, or by
 writing to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 Boston, MA 02111-1307, USA.
 
:>
*/
/*
 *******************************************************************************
 * File Name  : bcmPktDma.c
 *
 * Description: This file contains the Packet DMA initialization API.
 *
 *******************************************************************************
 */

#include <linux/module.h>
#include <linux/skbuff.h>

#include "bcmtypes.h"
#include <bcm_map_part.h>
#include "fap_task.h"
#include "bcmPktDma.h"
#include "bcmPktDmaHooks.h"

bcmPktDma_hostHooks_t bcmPktDma_hostHooks_g;
static RecycleFuncP   bcmPktDma_enet_recycle_hook = NULL;
static RecycleFuncP   bcmPktDma_xtm_fkb_recycle_hook = NULL;
static RecycleFuncP   bcmPktDma_xtm_skb_recycle_hook = NULL;

#if defined(CONFIG_BCM_FAP) || defined(CONFIG_BCM_FAP_MODULE)
#if (MAX_SWITCH_PORTS != 8)
#error "PKTDMA_ETH_PORT_TO_IUDMA does not match MAX_SWITCH_PORTS"
#endif
static uint8 g_Eth_rx_port_to_iudma[MAX_SWITCH_PORTS] =
{
    PKTDMA_ETH_PORT_TO_IUDMA  /* alls ports default to the US iuDMA channel */
};

void mapEthPortToRxIudma(uint8 port, uint8 iudma)
{
    if((port < MAX_SWITCH_PORTS) && (iudma < ENET_RX_CHANNELS_MAX))
    {
        g_Eth_rx_port_to_iudma[port] = iudma;
    }
    else
    {
        printk("%s : Invalid Argument: port <%d>, channel <%d>\n",
               __FUNCTION__, port, iudma);
    }
}

int getEthRxIudmaFromPort(int port)
{
#if defined(CONFIG_BCM963268) && (CONFIG_BCM_EXT_SWITCH)
    if(port >= MAX_SWITCH_PORTS + MAX_EXT_SWITCH_PORTS) {
        printk("%s : Invalid Argument: port <%d>\n", __FUNCTION__, port);
        return PKTDMA_ETH_US_IUDMA;
    }
    if (IsExternalSwitchPort(port))
    {
        port = BpGetPortConnectedToExtSwitch();
    } else {
        port = LOGICAL_PORT_TO_PHYSICAL_PORT(port);
    }
#endif

    if(port < MAX_SWITCH_PORTS)
    {
        return g_Eth_rx_port_to_iudma[port];
    }
    else
    {
        printk("%s : Invalid Argument: port <%d>\n", __FUNCTION__, port);

        return PKTDMA_ETH_US_IUDMA;
    }
}
#endif /* defined(CONFIG_BCM_FAP) || defined(CONFIG_BCM_FAP_MODULE) */

static void initHostHooks(void)
{
    memset(&bcmPktDma_hostHooks_g, 0, sizeof(bcmPktDma_hostHooks_t));
}

int bcmPktDma_bind(bcmPktDma_hostHooks_t *hostHooks)
{
    if(hostHooks->xmit2Fap == NULL ||
       /* FAP PSM Memory Allocation added Apr 2010 */
       hostHooks->psmAlloc == NULL ||
       hostHooks->dqmXmitMsgHost == NULL ||
       hostHooks->dqmRecvMsgHost == NULL ||
       hostHooks->dqmEnableHost == NULL ||
#if defined(CC_FAP4KE_TM)
       hostHooks->tmMasterConfig == NULL ||
       hostHooks->tmPortConfig == NULL ||
       hostHooks->tmPortMode == NULL ||
       hostHooks->tmPortApply == NULL
#endif
       )
    {
        return FAP_ERROR;
    }

    bcmPktDma_hostHooks_g = *hostHooks;

    printk("%s: FAP Driver binding successfull\n", __FUNCTION__);

    return FAP_SUCCESS;
}

void bcmPktDma_unbind(void)
{
    initHostHooks();
}

/* Add code for buffer quick free between enet and xtm - June 2010 */
void bcmPktDma_set_enet_recycle(RecycleFuncP enetRecycle)
{
    bcmPktDma_enet_recycle_hook = enetRecycle;
}

RecycleFuncP bcmPktDma_get_enet_recycle(void)
{
    return(bcmPktDma_enet_recycle_hook);
}

void bcmPktDma_set_xtm_recycle(RecycleFuncP fkbRecycleFunc, RecycleFuncP skbRecycleFunc)
{
    bcmPktDma_xtm_fkb_recycle_hook = fkbRecycleFunc;
    bcmPktDma_xtm_skb_recycle_hook = skbRecycleFunc;
}

RecycleFuncP bcmPktDma_get_xtm_fkb_recycle(void)
{
    return(bcmPktDma_xtm_fkb_recycle_hook);
}

RecycleFuncP bcmPktDma_get_xtm_skb_recycle(void)
{
    return(bcmPktDma_xtm_skb_recycle_hook);
}

int __init bcmPktDma_init(void)
{
    printk("%s: Broadcom Packet DMA Library initialized\n", __FUNCTION__);

    initHostHooks();

    return 0;
}

void __exit bcmPktDma_exit(void)
{
    printk("Broadcom Packet DMA Library exited");
}

module_init(bcmPktDma_init);
module_exit(bcmPktDma_exit);

#if defined(CONFIG_BCM_FAP) || defined(CONFIG_BCM_FAP_MODULE)
EXPORT_SYMBOL(mapEthPortToRxIudma);
EXPORT_SYMBOL(getEthRxIudmaFromPort);
#endif
EXPORT_SYMBOL(bcmPktDma_hostHooks_g);
EXPORT_SYMBOL(bcmPktDma_bind);
EXPORT_SYMBOL(bcmPktDma_unbind);
EXPORT_SYMBOL(bcmPktDma_set_enet_recycle);
EXPORT_SYMBOL(bcmPktDma_get_enet_recycle);
EXPORT_SYMBOL(bcmPktDma_set_xtm_recycle);
EXPORT_SYMBOL(bcmPktDma_get_xtm_fkb_recycle);
EXPORT_SYMBOL(bcmPktDma_get_xtm_skb_recycle);
