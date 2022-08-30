/*
   Copyright (c) 2007-2012 Broadcom Corporation
   All Rights Reserved

<:label-BRCM:2007:proprietary:standard

 This program is the proprietary software of Broadcom Corporation and/or its
 licensors, and may only be used, duplicated, modified or distributed pursuant
 to the terms and conditions of a separate, written license agreement executed
 between you and Broadcom (an "Authorized License").  Except as set forth in
 an Authorized License, Broadcom grants no license (express or implied), right
 to use, or waiver of any kind with respect to the Software, and Broadcom
 expressly reserves all rights in and to the Software and all intellectual
 property rights therein.  IF YOU HAVE NO AUTHORIZED LICENSE, THEN YOU HAVE
 NO RIGHT TO USE THIS SOFTWARE IN ANY WAY, AND SHOULD IMMEDIATELY NOTIFY
 BROADCOM AND DISCONTINUE ALL USE OF THE SOFTWARE.

 Except as expressly set forth in the Authorized License,

 1. This program, including its structure, sequence and organization,
    constitutes the valuable trade secrets of Broadcom, and you shall use
    all reasonable efforts to protect the confidentiality thereof, and to
    use this information only in connection with your use of Broadcom
    integrated circuit products.

 2. TO THE MAXIMUM EXTENT PERMITTED BY LAW, THE SOFTWARE IS PROVIDED "AS IS"
    AND WITH ALL FAULTS AND BROADCOM MAKES NO PROMISES, REPRESENTATIONS OR
    WARRANTIES, EITHER EXPRESS, IMPLIED, STATUTORY, OR OTHERWISE, WITH
    RESPECT TO THE SOFTWARE.  BROADCOM SPECIFICALLY DISCLAIMS ANY AND
    ALL IMPLIED WARRANTIES OF TITLE, MERCHANTABILITY, NONINFRINGEMENT,
    FITNESS FOR A PARTICULAR PURPOSE, LACK OF VIRUSES, ACCURACY OR
    COMPLETENESS, QUIET ENJOYMENT, QUIET POSSESSION OR CORRESPONDENCE
    TO DESCRIPTION. YOU ASSUME THE ENTIRE RISK ARISING OUT OF USE OR
    PERFORMANCE OF THE SOFTWARE.

 3. TO THE MAXIMUM EXTENT PERMITTED BY LAW, IN NO EVENT SHALL BROADCOM OR
    ITS LICENSORS BE LIABLE FOR (i) CONSEQUENTIAL, INCIDENTAL, SPECIAL,
    INDIRECT, OR EXEMPLARY DAMAGES WHATSOEVER ARISING OUT OF OR IN ANY
    WAY RELATING TO YOUR USE OF OR INABILITY TO USE THE SOFTWARE EVEN
    IF BROADCOM HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES;
    OR (ii) ANY AMOUNT IN EXCESS OF THE AMOUNT ACTUALLY PAID FOR THE
    SOFTWARE ITSELF OR U.S. $1, WHICHEVER IS GREATER. THESE LIMITATIONS
    SHALL APPLY NOTWITHSTANDING ANY FAILURE OF ESSENTIAL PURPOSE OF ANY
    LIMITED REMEDY.
:>
*/
/***********************************************************************/
/*                                                                     */
/*   MODULE:  6362_map.h                                               */
/*   DATE:    05/30/08                                                 */
/*   PURPOSE: Define addresses of major hardware components of         */
/*            BCM6362                                                  */
/*                                                                     */
/***********************************************************************/
#ifndef __BCM6362_MAP_H
#define __BCM6362_MAP_H

#ifdef __cplusplus
extern "C" {
#endif


#include "bcmtypes.h"
#include "6362_common.h"
#include "6362_intr.h"

#if defined(__KERNEL__) && !defined(MODULE)
#error "PRIVATE FILE INCLUDED IN KERNEL"
#endif

/* macro to convert logical data addresses to physical */
/* DMA hardware must see physical address */
#define LtoP( x )       ( (uint32)x & 0x1fffffff )
#define PtoL( x )       ( LtoP(x) | 0xa0000000 )

typedef struct DDRPhyControl {
    uint32 REVISION;               /* 0x00 */
    uint32 CLK_PM_CTRL;            /* 0x04 */
    uint32 unused0[2];             /* 0x08-0x10 */
    uint32 PLL_STATUS;             /* 0x10 */
    uint32 PLL_CONFIG;             /* 0x14 */
    uint32 PLL_PRE_DIVIDER;        /* 0x18 */
    uint32 PLL_DIVIDER;            /* 0x1c */
    uint32 PLL_CONTROL1;           /* 0x20 */
    uint32 PLL_CONTROL2;           /* 0x24 */
    uint32 PLL_SS_EN;              /* 0x28 */
    uint32 PLL_SS_CFG;             /* 0x2c */
    uint32 STATIC_VDL_OVERRIDE;    /* 0x30 */
    uint32 DYNAMIC_VDL_OVERRIDE;   /* 0x34 */
    uint32 IDLE_PAD_CONTROL;       /* 0x38 */
    uint32 ZQ_PVT_COMP_CTL;        /* 0x3c */
    uint32 DRIVE_PAD_CTL;          /* 0x40 */
    uint32 CLOCK_REG_CONTROL;      /* 0x44 */
    uint32 unused1[46];
} DDRPhyControl;

typedef struct DDRPhyByteLaneControl {
    uint32 REVISION;                /* 0x00 */
    uint32 VDL_CALIBRATE;           /* 0x04 */
    uint32 VDL_STATUS;              /* 0x08 */
    uint32 unused;                  /* 0x0c */
    uint32 VDL_OVERRIDE_0;          /* 0x10 */
    uint32 VDL_OVERRIDE_1;          /* 0x14 */
    uint32 VDL_OVERRIDE_2;          /* 0x18 */
    uint32 VDL_OVERRIDE_3;          /* 0x1c */
    uint32 VDL_OVERRIDE_4;          /* 0x20 */
    uint32 VDL_OVERRIDE_5;          /* 0x24 */
    uint32 VDL_OVERRIDE_6;          /* 0x28 */
    uint32 VDL_OVERRIDE_7;          /* 0x2c */
    uint32 READ_CONTROL;            /* 0x30 */
    uint32 READ_FIFO_STATUS;        /* 0x34 */
    uint32 READ_FIFO_CLEAR;         /* 0x38 */
    uint32 IDLE_PAD_CONTROL;        /* 0x3c */
    uint32 DRIVE_PAD_CTL;           /* 0x40 */
    uint32 CLOCK_PAD_DISABLE;       /* 0x44 */
    uint32 WR_PREAMBLE_MODE;        /* 0x48 */
    uint32 CLOCK_REG_CONTROL;       /* 0x4C */
    uint32 unused0[44];
} DDRPhyByteLaneControl;

typedef struct DDRControl {
    uint32 CNFG;                            /* 0x000 */
    uint32 CSST;                            /* 0x004 */
    uint32 CSEND;                           /* 0x008 */
    uint32 unused;                          /* 0x00c */
    uint32 ROW00_0;                         /* 0x010 */
    uint32 ROW00_1;                         /* 0x014 */
    uint32 ROW01_0;                         /* 0x018 */
    uint32 ROW01_1;                         /* 0x01c */
    uint32 unused0[4];
    uint32 ROW20_0;                         /* 0x030 */
    uint32 ROW20_1;                         /* 0x034 */
    uint32 ROW21_0;                         /* 0x038 */
    uint32 ROW21_1;                         /* 0x03c */
    uint32 unused1[4];
    uint32 COL00_0;                         /* 0x050 */
    uint32 COL00_1;                         /* 0x054 */
    uint32 COL01_0;                         /* 0x058 */
    uint32 COL01_1;                         /* 0x05c */
    uint32 unused2[4];
    uint32 COL20_0;                         /* 0x070 */
    uint32 COL20_1;                         /* 0x074 */
    uint32 COL21_0;                         /* 0x078 */
    uint32 COL21_1;                         /* 0x07c */
    uint32 unused3[4];
    uint32 BNK10;                           /* 0x090 */
    uint32 BNK32;                           /* 0x094 */
    uint32 unused4[26];
    uint32 DCMD;                            /* 0x100 */
#define DCMD_CS1          (1 << 5)
#define DCMD_CS0          (1 << 4)
#define DCMD_SET_SREF     4
    uint32 DMODE_0;                         /* 0x104 */
    uint32 DMODE_1;                         /* 0x108 */
#define DMODE_1_DRAMSLEEP (1 << 11)
    uint32 CLKS;                            /* 0x10c */
    uint32 ODT;                             /* 0x110 */
    uint32 TIM1_0;                          /* 0x114 */
    uint32 TIM1_1;                          /* 0x118 */
    uint32 TIM2;                            /* 0x11c */
    uint32 CTL_CRC;                         /* 0x120 */
    uint32 DOUT_CRC;                        /* 0x124 */
    uint32 DIN_CRC;                         /* 0x128 */
    uint32 unused5[53];

    DDRPhyControl           PhyControl;             /* 0x200 */
    DDRPhyByteLaneControl   PhyByteLane0Control;    /* 0x300 */
    DDRPhyByteLaneControl   PhyByteLane1Control;    /* 0x400 */
    DDRPhyByteLaneControl   PhyByteLane2Control;    /* 0x500 */
    DDRPhyByteLaneControl   PhyByteLane3Control;    /* 0x600 */
    uint32 unused6[64];

    uint32 GCFG;                            /* 0x800 */
    uint32 LBIST_CFG;                       /* 0x804 */
    uint32 LBIST_SEED;                      /* 0x808 */
    uint32 ARB;                             /* 0x80c */
    uint32 PI_GCF;                          /* 0x810 */
    uint32 PI_UBUS_CTL;                     /* 0x814 */
    uint32 PI_MIPS_CTL;                     /* 0x818 */
    uint32 PI_DSL_MIPS_CTL;                 /* 0x81c */
    uint32 PI_DSL_PHY_CTL;                  /* 0x820 */
    uint32 PI_UBUS_ST;                      /* 0x824 */
    uint32 PI_MIPS_ST;                      /* 0x828 */
    uint32 PI_DSL_MIPS_ST;                  /* 0x82c */
    uint32 PI_DSL_PHY_ST;                   /* 0x830 */
    uint32 PI_UBUS_SMPL;                    /* 0x834 */
    uint32 TESTMODE;                        /* 0x838 */
    uint32 TEST_CFG1;                       /* 0x83c */
    uint32 TEST_PAT;                        /* 0x840 */
    uint32 TEST_COUNT;                      /* 0x844 */
    uint32 TEST_CURR_COUNT;                 /* 0x848 */
    uint32 TEST_ADDR_UPDT;                  /* 0x84c */
    uint32 TEST_ADDR;                       /* 0x850 */
    uint32 TEST_DATA0;                      /* 0x854 */
    uint32 TEST_DATA1;                      /* 0x858 */
    uint32 TEST_DATA2;                      /* 0x85c */
    uint32 TEST_DATA3;                      /* 0x860 */
} DDRControl;

#define DDR ((volatile DDRControl * const) DDR_BASE)

/*
** Peripheral Controller
*/

#define IRQ_BITS 64
typedef struct  {
    uint64        IrqMask;
    uint64        IrqStatus;
} IrqControl_t;

typedef struct  {
    uint32        IrqMaskHi;
    uint32        IrqMaskLo;
    uint32        IrqStatusHi;
    uint32        IrqStatusLo;
} IrqControl_32_t;

typedef struct PerfControl {
    uint32        RevID;             /* (00) word 0 */
#define CHIP_ID_SHIFT   16
#define CHIP_ID_MASK    (0xffff << CHIP_ID_SHIFT)
#define REV_ID_MASK     0xff

    uint32        blkEnables;        /* (04) word 1 */
#define NAND_CLK_EN      (1 << 20)
#define PHYMIPS_CLK_EN   (1 << 19)
#define FAP_CLK_EN       (1 << 18)
#define PCIE_CLK_EN      (1 << 17)
#define HS_SPI_CLK_EN    (1 << 16)
#define SPI_CLK_EN       (1 << 15)
#define IPSEC_CLK_EN     (1 << 14)
#define USBH_CLK_EN      (1 << 13)
#define USBD_CLK_EN      (1 << 12)
#define PCM_CLK_EN       (1 << 11)
#define ROBOSW_CLK_EN    (1 << 10)
#define SAR_CLK_EN       (1 << 9)
#define SWPKT_SAR_CLK_EN (1 << 8)
#define SWPKT_USB_CLK_EN (1 << 7)
#define WLAN_OCP_CLK_EN  (1 << 5)
#define MIPS_CLK_EN      (1 << 4)
#define ADSL_CLK_EN      (1 << 3)
#define ADSL_AFE_EN      (1 << 2)
#define ADSL_QPROC_EN    (1 << 1)
#define DISABLE_GLESS    (1 << 0)

    uint32        pll_control;       /* (08) word 2 */
#define SOFT_RESET              0x00000001      // 0

    uint32        deviceTimeoutEn;   /* (0c) word 3 */
    uint32        softResetB;        /* (10) word 4 */
#define SOFT_RST_WLAN_SHIM_UBUS (1 << 14)
#define SOFT_RST_FAP            (1 << 13)
#define SOFT_RST_DDR_PHY        (1 << 12)
#define SOFT_RST_WLAN_SHIM      (1 << 11)
#define SOFT_RST_PCIE_EXT       (1 << 10)
#define SOFT_RST_PCIE           (1 << 9)
#define SOFT_RST_PCIE_CORE      (1 << 8)
#define SOFT_RST_PCM            (1 << 7)
#define SOFT_RST_USBH           (1 << 6)
#define SOFT_RST_USBD           (1 << 5)
#define SOFT_RST_SWITCH         (1 << 4)
#define SOFT_RST_SAR            (1 << 3)
#define SOFT_RST_EPHY           (1 << 2)
#define SOFT_RST_IPSEC          (1 << 1)
#define SOFT_RST_SPI            (1 << 0)

    uint32        diagControl;        /* (14) word 5 */
    uint32        ExtIrqCfg;          /* (18) word 6 */
    uint32        unused1;            /* (1c) word 7 */
#define EI_SENSE_SHFT   0
#define EI_STATUS_SHFT  4
#define EI_CLEAR_SHFT   8
#define EI_MASK_SHFT    12
#define EI_INSENS_SHFT  16
#define EI_LEVEL_SHFT   20

    union {
         IrqControl_t     IrqControl[2];       /* (20) (30) */
         IrqControl_32_t  IrqControl32[2];     /* (20) (30) */
    };
} PerfControl;

#define PERF ((volatile PerfControl * const) PERF_BASE)

/*
** Timer
*/
typedef struct Timer {
    uint16        unused0;
    byte          TimerMask;
#define TIMER0EN        0x01
#define TIMER1EN        0x02
#define TIMER2EN        0x04
    byte          TimerInts;
#define TIMER0          0x01
#define TIMER1          0x02
#define TIMER2          0x04
#define WATCHDOG        0x08
    uint32        TimerCtl0;
    uint32        TimerCtl1;
    uint32        TimerCtl2;
#define TIMERENABLE     0x80000000
#define RSTCNTCLR       0x40000000
    uint32        TimerCnt0;
    uint32        TimerCnt1;
    uint32        TimerCnt2;
    uint32        WatchDogDefCount;

    /* Write 0xff00 0x00ff to Start timer
     * Write 0xee00 0x00ee to Stop and re-load default count
     * Read from this register returns current watch dog count
     */
    uint32        WatchDogCtl;

    /* Number of 50-MHz ticks for WD Reset pulse to last */
    uint32        WDResetCount;
} Timer;

#define TIMER ((volatile Timer * const) TIMR_BASE)

/*
** UART
*/
typedef struct UartChannel {
    byte          unused0;
    byte          control;
#define BRGEN           0x80    /* Control register bit defs */
#define TXEN            0x40
#define RXEN            0x20
#define LOOPBK          0x10
#define TXPARITYEN      0x08
#define TXPARITYEVEN    0x04
#define RXPARITYEN      0x02
#define RXPARITYEVEN    0x01

    byte          config;
#define XMITBREAK       0x40
#define BITS5SYM        0x00
#define BITS6SYM        0x10
#define BITS7SYM        0x20
#define BITS8SYM        0x30
#define ONESTOP         0x07
#define TWOSTOP         0x0f
    /* 4-LSBS represent STOP bits/char
     * in 1/8 bit-time intervals.  Zero
     * represents 1/8 stop bit interval.
     * Fifteen represents 2 stop bits.
     */
    byte          fifoctl;
#define RSTTXFIFOS      0x80
#define RSTRXFIFOS      0x40
    /* 5-bit TimeoutCnt is in low bits of this register.
     *  This count represents the number of characters
     *  idle times before setting receive Irq when below threshold
     */
    uint32        baudword;
    /* When divide SysClk/2/(1+baudword) we should get 32*bit-rate
     */

    byte          txf_levl;       /* Read-only fifo depth */
    byte          rxf_levl;       /* Read-only fifo depth */
    byte          fifocfg;        /* Upper 4-bits are TxThresh, Lower are
                                   *      RxThreshold.  Irq can be asserted
                                   *      when rx fifo> thresh, txfifo<thresh
                                   */
    byte          prog_out;       /* Set value of DTR (Bit0), RTS (Bit1)
                                   *  if these bits are also enabled to GPIO_o
                                   */
#define DTREN   0x01
#define RTSEN   0x02

    byte          unused1;
    byte          DeltaIPEdgeNoSense;     /* Low 4-bits, set corr bit to 1 to
                                           * detect irq on rising AND falling
                                           * edges for corresponding GPIO_i
                                           * if enabled (edge insensitive)
                                           */
    byte          DeltaIPConfig_Mask;     /* Upper 4 bits: 1 for posedge sense
                                           *      0 for negedge sense if
                                           *      not configured for edge
                                           *      insensitive (see above)
                                           * Lower 4 bits: Mask to enable change
                                           *  detection IRQ for corresponding
                                           *  GPIO_i
                                           */
    byte          DeltaIP_SyncIP;         /* Upper 4 bits show which bits
                                           *  have changed (may set IRQ).
                                           *  read automatically clears bit
                                           * Lower 4 bits are actual status
                                           */

    uint16        intMask;                /* Same Bit defs for Mask and status */
    uint16        intStatus;
#define DELTAIP         0x0001
#define TXUNDERR        0x0002
#define TXOVFERR        0x0004
#define TXFIFOTHOLD     0x0008
#define TXREADLATCH     0x0010
#define TXFIFOEMT       0x0020
#define RXUNDERR        0x0040
#define RXOVFERR        0x0080
#define RXTIMEOUT       0x0100
#define RXFIFOFULL      0x0200
#define RXFIFOTHOLD     0x0400
#define RXFIFONE        0x0800
#define RXFRAMERR       0x1000
#define RXPARERR        0x2000
#define RXBRK           0x4000

    uint16        unused2;
    uint16        Data;                   /* Write to TX, Read from RX */
                                          /* bits 11:8 are BRK,PAR,FRM errors */

    uint32        unused3;
    uint32        unused4;
} Uart;

#define UART ((volatile Uart * const) UART_BASE)

/*
** Gpio Controller
*/

typedef struct GpioControl {
    uint64      GPIODir;                    /* 0 */
    uint64      GPIOio;                     /* 8 */
    uint32      LEDCtrl;                    /* 10 */
    uint32      SpiSlaveCfg;                /* 14 */
    uint32      GPIOMode;                   /* 18 */
#define GPIO_MODE_EXT_IRQ3          (1<<27)
#define GPIO_MODE_EXT_IRQ2          (1<<26)
#define GPIO_MODE_EXT_IRQ1          (1<<25)
#define GPIO_MODE_EXT_IRQ0          (1<<24)
#define GPIO_MODE_EPHY3_LED         (1<<23)
#define GPIO_MODE_EPHY2_LED         (1<<22)
#define GPIO_MODE_EPHY1_LED         (1<<21)
#define GPIO_MODE_EPHY0_LED         (1<<20)
#define GPIO_MODE_ADSL_SPI_SSB      (1<<19)
#define GPIO_MODE_ADSL_SPI_CLK      (1<<18)
#define GPIO_MODE_ADSL_SPI_MOSI     (1<<17)
#define GPIO_MODE_ADSL_SPI_MISO     (1<<16)
#define GPIO_MODE_UART2_SDOUT       (1<<15)
#define GPIO_MODE_UART2_SDIN        (1<<14)
#define GPIO_MODE_UART2_SRTS        (1<<13)
#define GPIO_MODE_UART2_SCTS        (1<<12)
#define GPIO_MODE_NTR_PULSE         (1<<11)
#define GPIO_MODE_LS_SPIM_SSB3      (1<<10)
#define GPIO_MODE_LS_SPIM_SSB2      (1<<9)
#define GPIO_MODE_INET_LED          (1<<8)
#define GPIO_MODE_ROBOSW_LED1       (1<<7)
#define GPIO_MODE_ROBOSW_LED0       (1<<6)
#define GPIO_MODE_ROBOSW_LED_CLK    (1<<5)
#define GPIO_MODE_ROBOSW_LED_DATA   (1<<4)
#define GPIO_MODE_SERIAL_LED_DATA   (1<<3)
#define GPIO_MODE_SERIAL_LED_CLK    (1<<2)
#define GPIO_MODE_SYS_IRQ           (1<<1)
#define GPIO_MODE_USBD_LED          (1<<0)

    uint32      GPIOCtrl;                   /* 1C */
    uint32      unused3[2];                 /* 20 - 24*/
    uint32      TestControl;                /* 28 */
    uint32      OscControl;                 /* 2C */
    uint32      RoboSWLEDControl;           /* 30 */
    uint32      RoboSWLEDLSR;               /* 34 */
    uint32      GPIOBaseMode;               /* 38 */
#define NAND_GPIO_OVERRIDE      (1<<2)
    uint32      RoboswEphyCtrl;             /* 3C */
#define EPHY_PLL_LOCK           (1<<27)
#define EPHY_ATEST_25MHZ_EN     (1<<26)
#define EPHY_PWR_DOWN_DLL       (1<<25)
#define EPHY_PWR_DOWN_BIAS      (1<<24)
#define EPHY_PWR_DOWN_TX_4      (1<<23)
#define EPHY_PWR_DOWN_TX_3      (1<<22)
#define EPHY_PWR_DOWN_TX_2      (1<<21)
#define EPHY_PWR_DOWN_TX_1      (1<<20)
#define EPHY_PWR_DOWN_RX_4      (1<<19)
#define EPHY_PWR_DOWN_RX_3      (1<<18)
#define EPHY_PWR_DOWN_RX_2      (1<<17)
#define EPHY_PWR_DOWN_RX_1      (1<<16)
#define EPHY_PWR_DOWN_SD_4      (1<<15)
#define EPHY_PWR_DOWN_SD_3      (1<<14)
#define EPHY_PWR_DOWN_SD_2      (1<<13)
#define EPHY_PWR_DOWN_SD_1      (1<<12)
#define EPHY_PWR_DOWN_RD_4      (1<<11)
#define EPHY_PWR_DOWN_RD_3      (1<<10)
#define EPHY_PWR_DOWN_RD_2      (1<<9)
#define EPHY_PWR_DOWN_RD_1      (1<<8)
#define EPHY_PWR_DOWN_4         (1<<7)
#define EPHY_PWR_DOWN_3         (1<<6)
#define EPHY_PWR_DOWN_2         (1<<5)
#define EPHY_PWR_DOWN_1         (1<<4)
#define EPHY_RST_4              (1<<3)
#define EPHY_RST_3              (1<<2)
#define EPHY_RST_2              (1<<1)
#define EPHY_RST_1              (1<<0)
    uint32      RoboswSwitchCtrl;           /* 40 */
#define RSW_MII_2_IFC_EN        (1<<23)
#define RSW_MII_2_AMP_EN        (1<<22)
#define RSW_MII_2_SEL_SHIFT     20
#define RSW_MII_SEL_3P3V        0
#define RSW_MII_SEL_2P5V        1
#define RSW_MII_SEL_1P5V        2
#define RSW_MII_AMP_EN          (1<<18)
#define RSW_MII_SEL_SHIFT       16
#define RSW_SPI_MODE            (1<<11)
#define RSW_BC_SUPP_EN          (1<<10)
#define RSW_CLK_FREQ_MASK       (3<<8)
#define RSW_ENF_DFX_FLOW        (1<<7)
#define RSW_ENH_DFX_FLOW        (1<<6)
#define RSW_GRX_0_SETUP         (1<<5)
#define RSW_GTX_0_SETUP         (1<<4)
#define RSW_HW_FWDG_EN          (1<<3)
#define RSW_QOS_EN              (1<<2)
#define RSW_WD_CLR_EN           (1<<1)
#define RSW_MII_DUMB_FWDG_EN    (1<<0)

    uint32      RegFileTmCtl;               /* 44 */

    uint32      RingOscCtrl0;               /* 48 */
#define RING_OSC_256_CYCLES         8
#define RING_OSC_512_CYCLES         9
#define RING_OSC_1024_CYCLES        10

    uint32      RingOscCtrl1;               /* 4C */
#define RING_OSC_ENABLE_MASK        (0x0f<<24)
#define RING_OSC_ENABLE_SHIFT       24
#define RING_OSC_MAX                4
#define RING_OSC_COUNT_RESET        (0x1<<23)
#define RING_OSC_SELECT_MASK        (0x7<<20)
#define RING_OSC_SELECT_SHIFT       20
#define RING_OSC_IRQ                (0x1<<18)
#define RING_OSC_COUNTER_OVERFLOW   (0x1<<17)
#define RING_OSC_COUNTER_BUSY       (0x1<<16)
#define RING_OSC_COUNT_MASK         0x0000ffff

    uint32      unused4[6];                 /* 50 - 64 */
    uint32      DieRevID;                   /* 68 */
    uint32      unused5;                    /* 6c */
    uint32      DiagSelControl;             /* 70 */
    uint32      DiagReadBack;               /* 74 */
    uint32      DiagReadBackHi;             /* 78 */
    uint32      DiagMiscControl;            /* 7c */
} GpioControl;

#define GPIO ((volatile GpioControl * const) GPIO_BASE)

/* Number to mask conversion macro used for GPIODir and GPIOio */
#define GPIO_NUM_MAX                    48
#define GPIO_NUM_TO_MASK(X)             ( (((X) & BP_GPIO_NUM_MASK) < GPIO_NUM_MAX) ? ((uint64)1 << ((X) & BP_GPIO_NUM_MASK)) : (0) )

/*
** OTP
*/
typedef struct Otp {
    uint32      Config;                 /* 0x0 */
    uint32      Control;                /* 0x4 */
    uint32      Addr;                   /* 0x8 */
    uint32      WriteData;              /* 0xc */
    uint32      Status;                 /* 0x10 */
    uint32      DOut;                   /* 0x14 */
    uint32      UserBits[8];            /* 0x18 - 0x34 */
#define OTP_WLAN_DISABLE                34
#define OTP_SUPPORT_STBC                35
#define OTP_DECT_DISABLE                38
#define OTP_IPSED_DISABLE               39
    uint32      unused[2];              /* 0x38 - 0x3c */
    uint32      RAMRepair[16];          /* 0x40 - 0x7c */
} Otp;

#define OTP ((volatile Otp * const) OTP_BASE)

/* Word order is reversed for User OTP bits */
#define OTP_GET_USER_BIT(x)             ((OTP->UserBits[((sizeof(OTP->UserBits)/4) - (x)/32 - 1)] >> ((x) % 32)) & 1)

/*
** Spi Controller
*/

typedef struct SpiControl {
  uint16        spiMsgCtl;              /* (0x0) control byte */
#define FULL_DUPLEX_RW                  0
#define HALF_DUPLEX_W                   1
#define HALF_DUPLEX_R                   2
#define SPI_MSG_TYPE_SHIFT              14
#define SPI_BYTE_CNT_SHIFT              0
  byte          spiMsgData[0x21e];      /* (0x02 - 0x21f) msg data */
  byte          unused0[0x1e0];
  byte          spiRxDataFifo[0x220];   /* (0x400 - 0x61f) rx data */
  byte          unused1[0xe0];

  uint16        spiCmd;                 /* (0x700): SPI command */
#define SPI_CMD_NOOP                    0
#define SPI_CMD_SOFT_RESET              1
#define SPI_CMD_HARD_RESET              2
#define SPI_CMD_START_IMMEDIATE         3

#define SPI_CMD_COMMAND_SHIFT           0
#define SPI_CMD_COMMAND_MASK            0x000f

#define SPI_CMD_DEVICE_ID_SHIFT         4
#define SPI_CMD_PREPEND_BYTE_CNT_SHIFT  8
#define SPI_CMD_ONE_BYTE_SHIFT          11
#define SPI_CMD_ONE_WIRE_SHIFT          12
#define SPI_DEV_ID_0                    0
#define SPI_DEV_ID_1                    1
#define SPI_DEV_ID_2                    2
#define SPI_DEV_ID_3                    3

  byte          spiIntStatus;           /* (0x702): SPI interrupt status */
  byte          spiMaskIntStatus;       /* (0x703): SPI masked interrupt status */

  byte          spiIntMask;             /* (0x704): SPI interrupt mask */
#define SPI_INTR_CMD_DONE               0x01
#define SPI_INTR_RX_OVERFLOW            0x02
#define SPI_INTR_INTR_TX_UNDERFLOW      0x04
#define SPI_INTR_TX_OVERFLOW            0x08
#define SPI_INTR_RX_UNDERFLOW           0x10
#define SPI_INTR_CLEAR_ALL              0x1f

  byte          spiStatus;              /* (0x705): SPI status */
#define SPI_RX_EMPTY                    0x02
#define SPI_CMD_BUSY                    0x04
#define SPI_SERIAL_BUSY                 0x08

  byte          spiClkCfg;              /* (0x706): SPI clock configuration */
#define SPI_CLK_0_391MHZ                1
#define SPI_CLK_0_781MHZ                2 /* default */
#define SPI_CLK_1_563MHZ                3
#define SPI_CLK_3_125MHZ                4
#define SPI_CLK_6_250MHZ                5
#define SPI_CLK_12_50MHZ                6
#define SPI_CLK_MASK                    0x07
#define SPI_SSOFFTIME_MASK              0x38
#define SPI_SSOFFTIME_SHIFT             3
#define SPI_BYTE_SWAP                   0x80

  byte          spiFillByte;            /* (0x707): SPI fill byte */
  byte          unused2;
  byte          spiMsgTail;             /* (0x709): msgtail */
  byte          unused3;
  byte          spiRxTail;              /* (0x70B): rxtail */
} SpiControl;

#define SPI ((volatile SpiControl * const) SPI_BASE)


/*
** High-Speed SPI Controller
*/

#define __mask(end, start)      (((1 << ((end - start) + 1)) - 1) << start)
typedef struct HsSpiControl {

  uint32    hs_spiGlobalCtrl;   // 0x0000
#define HS_SPI_MOSI_IDLE        (1 << 18)
#define HS_SPI_CLK_POLARITY      (1 << 17)
#define HS_SPI_CLK_GATE_SSOFF       (1 << 16)
#define HS_SPI_PLL_CLK_CTRL     (8)
#define HS_SPI_PLL_CLK_CTRL_MASK    __mask(15, HS_SPI_PLL_CLK_CTRL)
#define HS_SPI_SS_POLARITY      (0)
#define HS_SPI_SS_POLARITY_MASK     __mask(7, HS_SPI_SS_POLARITY)

  uint32    hs_spiExtTrigCtrl;  // 0x0004
#define HS_SPI_TRIG_RAW_STATE   (24)
#define HS_SPI_TRIG_RAW_STATE_MASK  __mask(31, HS_SPI_TRIG_RAW_STATE)
#define HS_SPI_TRIG_LATCHED     (16)
#define HS_SPI_TRIG_LATCHED_MASK    __mask(23, HS_SPI_TRIG_LATCHED)
#define HS_SPI_TRIG_SENSE       (8)
#define HS_SPI_TRIG_SENSE_MASK      __mask(15, HS_SPI_TRIG_SENSE)
#define HS_SPI_TRIG_TYPE        (0)
#define HS_SPI_TRIG_TYPE_MASK       __mask(7, HS_SPI_TRIG_TYPE)
#define HS_SPI_TRIG_TYPE_EDGE       (0)
#define HS_SPI_TRIG_TYPE_LEVEL      (1)

  uint32    hs_spiIntStatus;    // 0x0008
#define HS_SPI_IRQ_PING1_USER       (28)
#define HS_SPI_IRQ_PING1_USER_MASK  __mask(31, HS_SPI_IRQ_PING1_USER)
#define HS_SPI_IRQ_PING0_USER       (24)
#define HS_SPI_IRQ_PING0_USER_MASK  __mask(27, HS_SPI_IRQ_PING0_USER)

#define HS_SPI_IRQ_PING1_CTRL_INV   (1 << 12)
#define HS_SPI_IRQ_PING1_POLL_TOUT  (1 << 11)
#define HS_SPI_IRQ_PING1_TX_UNDER   (1 << 10)
#define HS_SPI_IRQ_PING1_RX_OVER    (1 << 9)
#define HS_SPI_IRQ_PING1_CMD_DONE   (1 << 8)

#define HS_SPI_IRQ_PING0_CTRL_INV   (1 << 4)
#define HS_SPI_IRQ_PING0_POLL_TOUT  (1 << 3)
#define HS_SPI_IRQ_PING0_TX_UNDER   (1 << 2)
#define HS_SPI_IRQ_PING0_RX_OVER    (1 << 1)
#define HS_SPI_IRQ_PING0_CMD_DONE   (1 << 0)

  uint32    hs_spiIntStatusMasked;  // 0x000C
#define HS_SPI_IRQSM__PING1_USER    (28)
#define HS_SPI_IRQSM__PING1_USER_MASK   __mask(31, HS_SPI_IRQSM__PING1_USER)
#define HS_SPI_IRQSM__PING0_USER    (24)
#define HS_SPI_IRQSM__PING0_USER_MASK   __mask(27, HS_SPI_IRQSM__PING0_USER)

#define HS_SPI_IRQSM__PING1_CTRL_INV    (1 << 12)
#define HS_SPI_IRQSM__PING1_POLL_TOUT   (1 << 11)
#define HS_SPI_IRQSM__PING1_TX_UNDER    (1 << 10)
#define HS_SPI_IRQSM__PING1_RX_OVER (1 << 9)
#define HS_SPI_IRQSM__PING1_CMD_DONE    (1 << 8)

#define HS_SPI_IRQSM__PING0_CTRL_INV    (1 << 4)
#define HS_SPI_IRQSM__PING0_POLL_TOUT   (1 << 3)
#define HS_SPI_IRQSM__PING0_TX_UNDER    (1 << 2)
#define HS_SPI_IRQSM__PING0_RX_OVER     (1 << 1)
#define HS_SPI_IRQSM__PING0_CMD_DONE    (1 << 0)

  uint32    hs_spiIntMask;      // 0x0010
#define HS_SPI_IRQM_PING1_USER      (28)
#define HS_SPI_IRQM_PING1_USER_MASK __mask(31, HS_SPI_IRQM_PING1_USER)
#define HS_SPI_IRQM_PING0_USER      (24)
#define HS_SPI_IRQM_PING0_USER_MASK __mask(27, HS_SPI_IRQM_PING0_USER)

#define HS_SPI_IRQM_PING1_CTRL_INV  (1 << 12)
#define HS_SPI_IRQM_PING1_POLL_TOUT (1 << 11)
#define HS_SPI_IRQM_PING1_TX_UNDER  (1 << 10)
#define HS_SPI_IRQM_PING1_RX_OVER   (1 << 9)
#define HS_SPI_IRQM_PING1_CMD_DONE  (1 << 8)

#define HS_SPI_IRQM_PING0_CTRL_INV  (1 << 4)
#define HS_SPI_IRQM_PING0_POLL_TOUT (1 << 3)
#define HS_SPI_IRQM_PING0_TX_UNDER  (1 << 2)
#define HS_SPI_IRQM_PING0_RX_OVER   (1 << 1)
#define HS_SPI_IRQM_PING0_CMD_DONE  (1 << 0)

#define HS_SPI_INTR_CLEAR_ALL       (0xFF001F1F)

  uint32    hs_spiFlashCtrl;    // 0x0014
#define HS_SPI_FCTRL_MB_ENABLE      (23)
#define HS_SPI_FCTRL_SS_NUM         (20)
#define HS_SPI_FCTRL_SS_NUM_MASK    __mask(22, HS_SPI_FCTRL_SS_NUM)
#define HS_SPI_FCTRL_PROFILE_NUM    (16)
#define HS_SPI_FCTRL_PROFILE_NUM_MASK   __mask(18, HS_SPI_FCTRL_PROFILE_NUM)
#define HS_SPI_FCTRL_DUMMY_BYTES    (10)
#define HS_SPI_FCTRL_DUMMY_BYTES_MASK   __mask(11, HS_SPI_FCTRL_DUMMY_BYTES)
#define HS_SPI_FCTRL_ADDR_BYTES     (8)
#define HS_SPI_FCTRL_ADDR_BYTES_MASK    __mask(9, HS_SPI_FCTRL_ADDR_BYTES)
#define HS_SPI_FCTRL_ADDR_BYTES_2   (0)
#define HS_SPI_FCTRL_ADDR_BYTES_3   (1)
#define HS_SPI_FCTRL_ADDR_BYTES_4   (2)
#define HS_SPI_FCTRL_READ_OPCODE    (0)
#define HS_SPI_FCTRL_READ_OPCODE_MASK   __mask(7, HS_SPI_FCTRL_READ_OPCODE)

  uint32    hs_spiFlashAddrBase;    // 0x0018

  char      fill0[0x80 - 0x18];

  uint32    hs_spiPP_0_Cmd;     // 0x0080
#define HS_SPI_PP_SS_NUM        (12)
#define HS_SPI_PP_SS_NUM_MASK       __mask(14, HS_SPI_PP_SS_NUM)
#define HS_SPI_PP_PROFILE_NUM       (8)
#define HS_SPI_PP_PROFILE_NUM_MASK  __mask(10, HS_SPI_PP_PROFILE_NUM)

} HsSpiControl;

typedef struct HsSpiPingPong {

    uint32 command;
#define HS_SPI_SS_NUM (12)
#define HS_SPI_PROFILE_NUM (8)
#define HS_SPI_TRIGGER_NUM (4)
#define HS_SPI_COMMAND_VALUE (0)
    #define HS_SPI_COMMAND_NOOP (0)
    #define HS_SPI_COMMAND_START_NOW (1)
    #define HS_SPI_COMMAND_START_TRIGGER (2)
    #define HS_SPI_COMMAND_HALT (3)
    #define HS_SPI_COMMAND_FLUSH (4)

    uint32 status;
#define HS_SPI_ERROR_BYTE_OFFSET (16)
#define HS_SPI_WAIT_FOR_TRIGGER (2)
#define HS_SPI_SOURCE_BUSY (1)
#define HS_SPI_SOURCE_GNT (0)

    uint32 fifo_status;
    uint32 control;

} HsSpiPingPong;

typedef struct HsSpiProfile {

    uint32 clk_ctrl;
#define HS_SPI_ACCUM_RST_ON_LOOP (15)
#define HS_SPI_SPI_CLK_2X_SEL (14)
#define HS_SPI_FREQ_CTRL_WORD (0)
    
    uint32 signal_ctrl;
#define	HS_SPI_ASYNC_INPUT_PATH (1 << 16)
#define	HS_SPI_LAUNCH_RISING    (1 << 13)
#define	HS_SPI_LATCH_RISING     (1 << 12)

    uint32 mode_ctrl;
#define HS_SPI_PREPENDBYTE_CNT (24)
#define HS_SPI_MODE_ONE_WIRE (20)
#define HS_SPI_MULTIDATA_WR_SIZE (18)
#define HS_SPI_MULTIDATA_RD_SIZE (16)
#define HS_SPI_MULTIDATA_WR_STRT (12)
#define HS_SPI_MULTIDATA_RD_STRT (8)
#define HS_SPI_FILLBYTE (0)

    uint32 polling_config;
    uint32 polling_and_mask;
    uint32 polling_compare;
    uint32 polling_timeout;
    uint32 reserved;

} HsSpiProfile;

#define HS_SPI_OP_CODE 13
    #define HS_SPI_OP_SLEEP (0)
    #define HS_SPI_OP_READ_WRITE (1)
    #define HS_SPI_OP_WRITE (2)
    #define HS_SPI_OP_READ (3)
    #define HS_SPI_OP_SETIRQ (4)

#define HS_SPI ((volatile HsSpiControl * const) HSSPIM_BASE)
#define HS_SPI_PINGPONG0 ((volatile HsSpiPingPong * const) (HSSPIM_BASE+0x80))
#define HS_SPI_PINGPONG1 ((volatile HsSpiPingPong * const) (HSSPIM_BASE+0xc0))
#define HS_SPI_PROFILES ((volatile HsSpiProfile * const) (HSSPIM_BASE+0x100))
#define HS_SPI_FIFO0 ((volatile uint8 * const) (HSSPIM_BASE+0x200))
#define HS_SPI_FIFO1 ((volatile uint8 * const) (HSSPIM_BASE+0x400))


/*
** Misc Register Set Definitions.
*/

typedef struct Misc {
    uint32  unused1;                            /* 0x00 */
    uint32  miscSerdesCtrl;                     /* 0x04 */
#define SERDES_PCIE_ENABLE                      0x00000001
#define SERDES_PCIE_EXD_ENABLE                  (1<<15)
    
    uint32  miscSerdesSts;                      /* 0x08 */
    uint32  miscIrqOutMask;                     /* 0x0C */
#define MISC_PCIE_EP_IRQ_MASK0                  (1<<0)
#define MISC_PCIE_EP_IRQ_MASK1                  (1<<1)

    uint32  miscMemcControl;                    /* 0x10 */
#define MISC_MEMC_CONTROL_MC_UBUS_ASYNC_MODE    (1<<3)
#define MISC_MEMC_CONTROL_MC_LMB_ASYNC_MODE     (1<<2)
#define MISC_MEMC_CONTROL_DDR_TEST_DONE         (1<<1)
#define MISC_MEMC_CONTROL_DDR_TEST_DISABLE      (1<<0)

    uint32  miscStrapBus;                       /* 0x14 */
#define MISC_STRAP_BUS_RESET_CFG_DELAY          (1<<18)
#define MISC_STRAP_BUS_RESET_OUT_SHIFT          16
#define MISC_STRAP_BUS_RESET_OUT_MASK           (3<<MISC_STRAP_BUS_RESET_OUT_SHIFT)
#define MISC_STRAP_BUS_BOOT_SEL_SHIFT           15
#define MISC_STRAP_BUS_BOOT_SEL_MASK            (0x1<<MISC_STRAP_BUS_BOOT_SEL_SHIFT)
#define MISC_STRAP_BUS_BOOT_SERIAL              0x01
#define MISC_STRAP_BUS_BOOT_NAND                0x00
#define MISC_STRAP_BUS_HS_SPIM_24B_N_32B_ADDR   (1<<14)
#define MISC_STRAP_BUS_HS_SPIM_24B_N_32B_ADDR   (1<<14)
#define MISC_STRAP_BUS_HS_SPIM_CLK_SLOW_N_FAST  (1<<13)
#define MISC_STRAP_BUS_LS_SPIM_CLK_FAST_N_SLOW  (1<<12)
#define MISC_STRAP_BUS_LS_SPI_MASTER_N_SLAVE    (1<<11)
#define MISC_STRAP_BUS_PLL_USE_LOCK             (1<<10)
#define MISC_STRAP_BUS_PLL_MIPS_WAIT_FAST_N     (1<<9)
#define MISC_STRAP_BUS_ROBOSW_P4_MODE_SHIFT     7
#define MISC_STRAP_BUS_ROBOSW_P4_MODE_MASK      (3<<MISC_STRAP_BUS_ROBOSW_P4_MODE_SHIFT)
#define MISC_STRAP_BUS_HARD_RESET_DELAY         (1<<6)
#define MISC_STRAP_BUS_MIPS_PLL_FVCO_SHIFT      1
#define MISC_STRAP_BUS_MIPS_PLL_FVCO_MASK       (0x1F<<MISC_STRAP_BUS_MIPS_PLL_FVCO_SHIFT)
#define MISC_STRAP_BUS_PCIE_ROOT_COMPLEX        (1<<0)

    uint32  miscStrapOverride;              /* 0x18 */
    uint32  miscVregCtrl0;                  /* 0x1C */

    uint32  miscVregCtrl1;                  /* 0x20 */
#define VREG_VSEL1P2_SHIFT        0
#define VREG_VSEL1P2_MASK         0x1f
#define VREG_VSEL1P2_MIDDLE       0x0f

    uint32  miscVregCtrl2;                  /* 0x24 */
    uint32  miscExtra2ChipsIrqMask;         /* 0x28 */
    uint32  miscExtra2ChipsIrqSts;          /* 0x2C */
    uint32  miscExtra2ChipsIrqMask1;        /* 0x30 */
    uint32  miscExtra2ChipsIrqSts1;         /* 0x34 */
    uint32  miscFapIrqMask;                 /* 0x38 */
    uint32  miscExtraFapIrqMask;            /* 0x3C */
    uint32  miscExtra2FapIrqMask;           /* 0x40 */
    uint32  miscAdsl_clock_sample;          /* 0x44 */

    uint32  miscIddqCtrl;                   /* 0x48 */
#define MISC_IDDQ_CTRL_WLAN_PADS    (1<<13)
#define MISC_IDDQ_CTRL_PCIE         (1<<12)
#define MISC_IDDQ_CTRL_FAP          (1<<11)
#define MISC_IDDQ_CTRL_GMII_PADS    (1<<10)
#define MISC_IDDQ_CTRL_ADSL_PHY     (1<<9)
#define MISC_IDDQ_CTRL_PERIPH       (1<<8)
#define MISC_IDDQ_CTRL_PCM          (1<<7)
#define MISC_IDDQ_CTRL_ROBOSW       (1<<6)
#define MISC_IDDQ_CTRL_USBD         (1<<5)
#define MISC_IDDQ_CTRL_USBH         (1<<4)
#define MISC_IDDQ_CTRL_DECT         (1<<3)
#define MISC_IDDQ_CTRL_MIPS         (1<<2)
#define MISC_IDDQ_CTRL_IPSEC        (1<<1)
#define MISC_IDDQ_CTRL_SAR          (1<<0)

    uint32  miscSleep;                      /* 0x4C */
    uint32  miscRtc_enable;                 /* 0x50 */
    uint32  miscRtc_count_L;                /* 0x54 */
    uint32  miscRtc_count_H;                /* 0x58 */
    uint32  miscRtc_event;                  /* 0x5C */
    uint32  miscWakeup_mask;                /* 0x60 */
    uint32  miscWakeup_status;              /* 0x64 */
} Misc;

#define MISC ((volatile Misc * const) MISC_BASE)

/*
** LedControl Register Set Definitions.
*/

#pragma pack(push, 4)
typedef struct LedControl {
    uint32  ledInit;
#define LED_LED_TEST                (1 << 31)
#define LED_SHIFT_TEST              (1 << 30)
#define LED_SERIAL_LED_SHIFT_DIR    (1 << 16)
#define LED_SERIAL_LED_DATA_PPOL    (1 << 15)
#define LEDSERIAL_LED_CLK_NPOL      (1 << 14)
#define LED_SERIAL_LED_MUX_SEL      (1 << 13)
#define LED_SERIAL_LED_EN           (1 << 12)
#define LED_FAST_INTV_SHIFT         6
#define LED_FAST_INTV_MASK          (0x3F<<LED_FAST_INTV_SHIFT)
#define LED_SLOW_INTV_SHIFT         0
#define LED_SLOW_INTV_MASK          (0x3F<<LED_SLOW_INTV_SHIFT)
#define LED_INTERVAL_20MS           1

    uint64  ledMode;
#define LED_MODE_MASK               (uint64)0x3
#define LED_MODE_OFF                (uint64)0x0
#define LED_MODE_FLASH              (uint64)0x1
#define LED_MODE_BLINK              (uint64)0x2
#define LED_MODE_ON                 (uint64)0x3

    uint32  ledHWDis;
#define LED_USB_ACT                 0
#define LED_INET_ACT                1
#define LED_ENET0                   4
#define LED_ENET1                   5
#define LED_ENET2                   6
#define LED_ENET3                   7

    uint32  ledStrobe;
    uint32  ledLinkActSelHigh;
#define LED_4_ACT_SHIFT             0
#define LED_5_ACT_SHIFT             4
#define LED_6_ACT_SHIFT             8
#define LED_7_ACT_SHIFT             12
#define LED_4_LINK_SHIFT            16
#define LED_5_LINK_SHIFT            20
#define LED_6_LINK_SHIFT            24
#define LED_7_LINK_SHIFT            28
    uint32  ledLinkActSelLow;
#define LED_0_ACT_SHIFT             0
#define LED_1_ACT_SHIFT             4
#define LED_2_ACT_SHIFT             8
#define LED_3_ACT_SHIFT             12
#define LED_0_LINK_SHIFT            16
#define LED_1_LINK_SHIFT            20
#define LED_2_LINK_SHIFT            24
#define LED_3_LINK_SHIFT            28

    uint32  ledReadback;
    uint32  ledSerialMuxSelect;
} LedControl;
#pragma pack(pop)

#define LED ((volatile LedControl * const) LED_BASE)

#define GPIO_NUM_TO_LED_MODE_SHIFT(X) \
    ((((X) & BP_GPIO_NUM_MASK) < 8) ? (32 + (((X) & BP_GPIO_NUM_MASK) << 1)) : \
    (((X) & BP_GPIO_SERIAL) ? ((((X) & BP_GPIO_NUM_MASK) - 8) << 1) : \
    (((X) & BP_GPIO_NUM_MASK) < 16) ? (32 + ((((X) & BP_GPIO_NUM_MASK) - 8) << 1)) : \
    ((((X) & BP_GPIO_NUM_MASK) - 16) << 1)))

/*
** Pcm Controller
*/

typedef struct PcmControlRegisters
{
    uint32 pcm_ctrl;                            // 00 offset from PCM_BASE
#define  PCM_ENABLE              0x80000000     // PCM block master enable
#define  PCM_ENABLE_SHIFT        31
#define  PCM_SLAVE_SEL           0x40000000     // PCM TDM slave mode select (1 - TDM slave, 0 - TDM master)
#define  PCM_SLAVE_SEL_SHIFT     30
#define  PCM_CLOCK_INV           0x20000000     // PCM SCLK invert select (1 - invert, 0 - normal)
#define  PCM_CLOCK_INV_SHIFT     29
#define  PCM_FS_INVERT           0x10000000     // PCM FS invert select (1 - invert, 0 - normal)
#define  PCM_FS_INVERT_SHIFT     28
#define  PCM_FS_FREQ_16_8        0x08000000     // PCM FS 16/8 Khz select (1 - 16Khz, 0 - 8Khz)
#define  PCM_FS_FREQ_16_8_SHIFT  27
#define  PCM_FS_LONG             0x04000000     // PCM FS long/short select (1 - long FS, 0 - short FS)
#define  PCM_FS_LONG_SHIFT       26
#define  PCM_FS_TRIG             0x02000000     // PCM FS trigger (1 - falling edge, 0 - rising edge trigger)
#define  PCM_FS_TRIG_SHIFT       25
#define  PCM_DATA_OFF            0x01000000     // PCM data offset from FS (1 - one clock from FS, 0 - no offset)
#define  PCM_DATA_OFF_SHIFT      24
#define  PCM_DATA_16_8           0x00800000     // PCM data word length (1 - 16 bits, 0 - 8 bits)
#define  PCM_DATA_16_8_SHIFT     23
#define  PCM_CLOCK_SEL           0x00700000     // PCM SCLK freq select
#define  PCM_CLOCK_SEL_SHIFT     20
                                                  // 000 - 8192 Khz
                                                  // 001 - 4096 Khz
                                                  // 010 - 2048 Khz
                                                  // 011 - 1024 Khz
                                                  // 100 - 512 Khz
                                                  // 101 - 256 Khz
                                                  // 110 - 128 Khz
                                                  // 111 - reserved
#define  PCM_LSB_FIRST           0x00040000     // PCM shift direction (1 - LSBit first, 0 - MSBit first)
#define  PCM_LSB_FIRST_SHIFT     18
#define  PCM_LOOPBACK            0x00020000     // PCM diagnostic loobback enable
#define  PCM_LOOPBACK_SHIFT      17
#define  PCM_EXTCLK_SEL          0x00010000     // PCM external timing clock select -- Maybe removed in 6362
#define  PCM_EXTCLK_SEL_SHIFT    16
#define  PCM_NTR_ENABLE          0x00008000     // PCM NTR counter enable -- Nayve removed in 6362
#define  PCM_NTR_ENABLE_SHIFT    15
#define  PCM_BITS_PER_FRAME_1024 0x00000400     // 1024 - Max
#define  PCM_BITS_PER_FRAME_256  0x00000100     // 256
#define  PCM_BITS_PER_FRAME_8    0x00000008     // 8    - Min

    uint32 pcm_chan_ctrl;                       // 04
#define  PCM_TX0_EN              0x00000001     // PCM transmit channel 0 enable
#define  PCM_TX1_EN              0x00000002     // PCM transmit channel 1 enable
#define  PCM_TX2_EN              0x00000004     // PCM transmit channel 2 enable
#define  PCM_TX3_EN              0x00000008     // PCM transmit channel 3 enable
#define  PCM_TX4_EN              0x00000010     // PCM transmit channel 4 enable
#define  PCM_TX5_EN              0x00000020     // PCM transmit channel 5 enable
#define  PCM_TX6_EN              0x00000040     // PCM transmit channel 6 enable
#define  PCM_TX7_EN              0x00000080     // PCM transmit channel 7 enable
#define  PCM_RX0_EN              0x00000100     // PCM receive channel 0 enable
#define  PCM_RX1_EN              0x00000200     // PCM receive channel 1 enable
#define  PCM_RX2_EN              0x00000400     // PCM receive channel 2 enable
#define  PCM_RX3_EN              0x00000800     // PCM receive channel 3 enable
#define  PCM_RX4_EN              0x00001000     // PCM receive channel 4 enable
#define  PCM_RX5_EN              0x00002000     // PCM receive channel 5 enable
#define  PCM_RX6_EN              0x00004000     // PCM receive channel 6 enable
#define  PCM_RX7_EN              0x00008000     // PCM receive channel 7 enable
#define  PCM_RX_PACKET_SIZE      0x00ff0000     // PCM Rx DMA quasi-packet size
#define  PCM_RX_PACKET_SIZE_SHIFT  16

    uint32 pcm_int_pending;                     // 08
    uint32 pcm_int_mask;                        // 0c
#define  PCM_TX_UNDERFLOW        0x00000001     // PCM DMA receive overflow
#define  PCM_RX_OVERFLOW         0x00000002     // PCM DMA transmit underflow
#define  PCM_TDM_FRAME           0x00000004     // PCM frame boundary
#define  PCM_RX_IRQ              0x00000008     // IUDMA interrupts
#define  PCM_TX_IRQ              0x00000010

    uint32 pcm_pll_ctrl1;                       // 10
#define  PCM_PLL_PWRDN           0x80000000     // PLL PWRDN
#define  PCM_PLL_PWRDN_CH1       0x40000000     // PLL CH PWRDN
#define  PCM_PLL_REFCMP_PWRDN    0x20000000     // PLL REFCMP PWRDN
#define  PCM_CLK16_RESET         0x10000000     // 16.382 MHz PCM interface circuitry reset. 
#define  PCM_PLL_ARESET          0x08000000     // PLL Analog Reset
#define  PCM_PLL_DRESET          0x04000000     // PLL Digital Reset

    uint32 pcm_pll_ctrl2;                       // 14
    uint32 pcm_pll_ctrl3;                       // 18
    uint32 pcm_pll_ctrl4;                       // 1c

    uint32 pcm_pll_stat;                        // 20
#define  PCM_PLL_LOCK            0x00000001     // Asserted when PLL is locked to programmed frequency

    uint32 pcm_ntr_counter;                     // 24

    uint32 unused[6];
#define  PCM_MAX_TIMESLOT_REGS   16             // Number of PCM time slot registers in the table.
                                                // Each register provides the settings for 8 timeslots (4 bits per timeslot)
    uint32 pcm_slot_alloc_tbl[PCM_MAX_TIMESLOT_REGS];
#define  PCM_TS_VALID            0x8            // valid marker for TS alloc ram entry
    
    uint32 pcm_pll_ch2_ctrl;                    // +0xa080
    uint32 pcm_msif_intf;                       // +0xa084
} PcmControlRegisters;

#define PCM ((volatile PcmControlRegisters * const) PCM_BASE)


typedef struct PcmIudmaRegisters
{
    uint16 reserved0;
    uint16 ctrlConfig;
#define BCM6362_IUDMA_REGS_CTRLCONFIG_MASTER_EN        0x0001
#define BCM6362_IUDMA_REGS_CTRLCONFIG_FLOWC_CH1_EN     0x0002
#define BCM6362_IUDMA_REGS_CTRLCONFIG_FLOWC_CH3_EN     0x0004
#define BCM6362_IUDMA_REGS_CTRLCONFIG_FLOWC_CH5_EN     0x0008
#define BCM6362_IUDMA_REGS_CTRLCONFIG_FLOWC_CH7_EN     0x0010

    // Flow control Ch1
    uint16 reserved1;
    uint16 ch1_FC_Low_Thr;

    uint16 reserved2;
    uint16 ch1_FC_High_Thr;

    uint16 reserved3;
    uint16 ch1_Buff_Alloc;

    // Flow control Ch3
    uint16 reserved4;
    uint16 ch3_FC_Low_Thr;

    uint16 reserved5;
    uint16 ch3_FC_High_Thr;

    uint16 reserved6;
    uint16 ch3_Buff_Alloc;

    // Flow control Ch5
    uint16 reserved7;
    uint16 ch5_FC_Low_Thr;

    uint16 reserved8;
    uint16 ch5_FC_High_Thr;

    uint16 reserved9;
    uint16 ch5_Buff_Alloc;

    // Flow control Ch7
    uint16 reserved10;
    uint16 ch7_FC_Low_Thr;

    uint16 reserved11;
    uint16 ch7_FC_High_Thr;

    uint16 reserved12;
    uint16 ch7_Buff_Alloc;

    // Channel resets
    uint16 reserved13;
    uint16 channel_reset;
    
    uint16 reserved14;
    uint16 channel_debug;
    
    // Spare register
    uint32 dummy1;
    
    // Interrupt status registers
    uint16 reserved15;
    uint16 gbl_int_stat;
    
    // Interrupt mask registers
    uint16 reserved16;
    uint16 gbl_int_mask;
} PcmIudmaRegisters;


typedef struct PcmIudmaChannelCtrl
{
    uint16 reserved1;
    uint16 config;
#define BCM6362_IUDMA_CONFIG_ENDMA       0x0001
#define BCM6362_IUDMA_CONFIG_PKTHALT     0x0002
#define BCM6362_IUDMA_CONFIG_BURSTHALT   0x0004

    uint16 reserved2;
    uint16 intStat;
#define BCM6362_IUDMA_INTSTAT_BDONE   0x0001
#define BCM6362_IUDMA_INTSTAT_PDONE   0x0002
#define BCM6362_IUDMA_INTSTAT_NOTVLD  0x0004
#define BCM6362_IUDMA_INTSTAT_MASK    0x0007
#define BCM6362_IUDMA_INTSTAT_ALL     BCM6362_IUDMA_INTSTAT_MASK

    uint16 reserved3;
    uint16 intMask;
#define BCM6362_IUDMA_INTMASK_BDONE   0x0001
#define BCM6362_IUDMA_INTMASK_PDONE   0x0002
#define BCM6362_IUDMA_INTMASK_NOTVLD  0x0004

    uint32 maxBurst;
#define BCM6362_IUDMA_MAXBURST_SIZE 16 /* 32-bit words */

} PcmIudmaChannelCtrl;


typedef struct PcmIudmaStateRam
{
   uint32 baseDescPointer;                /* pointer to first buffer descriptor */

   uint32 stateBytesDoneRingOffset;       /* state info: how manu bytes done and the offset of the
                                             current descritor in process */
#define BCM6362_IUDMA_STRAM_DESC_RING_OFFSET 0x3fff


   uint32 flagsLengthStatus;              /* Length and status field of the current descriptor */

   uint32 currentBufferPointer;           /* pointer to the current descriptor */

} PcmIudmaStateRam;

#define BCM6362_MAX_PCM_DMA_CHANNELS 2

typedef struct PcmIudma
{
   PcmIudmaRegisters regs;                                        // 
   uint32 reserved1[110];                                         //            
   PcmIudmaChannelCtrl ctrl[BCM6362_MAX_PCM_DMA_CHANNELS];        //
   uint32 reserved2[120];                                         //
   PcmIudmaStateRam stram[BCM6362_MAX_PCM_DMA_CHANNELS];          //

} PcmIudma;

#define PCM_IUDMA ((volatile PcmIudma * const) PCM_DMA_BASE)


#define IUDMA_MAX_CHANNELS          32

/*
** DMA Channel Configuration (1 .. 32)
*/
typedef struct DmaChannelCfg {
  uint32        cfg;                    /* (00) assorted configuration */
#define         DMA_ENABLE      0x00000001  /* set to enable channel */
#define         DMA_PKT_HALT    0x00000002  /* idle after an EOP flag is detected */
#define         DMA_BURST_HALT  0x00000004  /* idle after finish current memory burst */
  uint32        intStat;                /* (04) interrupts control and status */
  uint32        intMask;                /* (08) interrupts mask */
#define         DMA_BUFF_DONE   0x00000001  /* buffer done */
#define         DMA_DONE        0x00000002  /* packet xfer complete */
#define         DMA_NO_DESC     0x00000004  /* no valid descriptors */
  uint32        maxBurst;               /* (0C) max burst length permitted */
#define         DMA_DESCSIZE_SEL 0x00040000  /* DMA Descriptor Size Selection */
} DmaChannelCfg;

/*
** DMA State RAM (1 .. 16)
*/
typedef struct DmaStateRam {
  uint32        baseDescPtr;            /* (00) descriptor ring start address */
  uint32        state_data;             /* (04) state/bytes done/ring offset */
  uint32        desc_len_status;        /* (08) buffer descriptor status and len */
  uint32        desc_base_bufptr;       /* (0C) buffer descrpitor current processing */
} DmaStateRam;


/*
** DMA Registers
*/
typedef struct DmaRegs {
    uint32 controller_cfg;              /* (00) controller configuration */
#define DMA_MASTER_EN           0x00000001
#define DMA_FLOWC_CH1_EN        0x00000002
#define DMA_FLOWC_CH3_EN        0x00000004

    // Flow control Ch1
    uint32 flowctl_ch1_thresh_lo;           /* 004 */
    uint32 flowctl_ch1_thresh_hi;           /* 008 */
    uint32 flowctl_ch1_alloc;               /* 00c */
#define DMA_BUF_ALLOC_FORCE     0x80000000

    // Flow control Ch3
    uint32 flowctl_ch3_thresh_lo;           /* 010 */
    uint32 flowctl_ch3_thresh_hi;           /* 014 */
    uint32 flowctl_ch3_alloc;               /* 018 */

    // Flow control Ch5
    uint32 flowctl_ch5_thresh_lo;           /* 01C */
    uint32 flowctl_ch5_thresh_hi;           /* 020 */
    uint32 flowctl_ch5_alloc;               /* 024 */

    // Flow control Ch7
    uint32 flowctl_ch7_thresh_lo;           /* 028 */
    uint32 flowctl_ch7_thresh_hi;           /* 02C */
    uint32 flowctl_ch7_alloc;               /* 030 */

    uint32 ctrl_channel_reset;              /* 034 */
    uint32 ctrl_channel_debug;              /* 038 */
    uint32 reserved1;                       /* 03C */
    uint32 ctrl_global_interrupt_status;    /* 040 */
    uint32 ctrl_global_interrupt_mask;      /* 044 */

    // Unused words
    uint8 reserved2[0x200-0x48];

    // Per channel registers/state ram
    DmaChannelCfg chcfg[IUDMA_MAX_CHANNELS];/* (200-3FF) Channel configuration */
    union {
        DmaStateRam     s[IUDMA_MAX_CHANNELS];
        uint32          u32[4 * IUDMA_MAX_CHANNELS];
    } stram;                                /* (400-5FF) state ram */
} DmaRegs;

#define SW_DMA ((volatile DmaRegs * const) SWITCH_DMA_BASE)

/*
** DMA Buffer
*/
typedef struct DmaDesc {
  union {
    struct {
        uint16        length;                   /* in bytes of data in buffer */
#define          DMA_DESC_USEFPM    0x8000
#define          DMA_DESC_MULTICAST 0x4000
#define          DMA_DESC_BUFLENGTH 0x0fff
        uint16        status;                   /* buffer status */
#define          DMA_OWN                0x8000  /* cleared by DMA, set by SW */
#define          DMA_EOP                0x4000  /* last buffer in packet */
#define          DMA_SOP                0x2000  /* first buffer in packet */
#define          DMA_WRAP               0x1000  /* */
#define          DMA_PRIO               0x0C00  /* Prio for Tx */
#define          DMA_APPEND_BRCM_TAG    0x0200
#define          DMA_APPEND_CRC         0x0100
#define          USB_ZERO_PKT           (1<< 0) // Set to send zero length packet
    };
    uint32      word0;
  };

  uint32        address;                /* address of data */
} DmaDesc;

/*
** 16 Byte DMA Buffer 
*/
typedef struct {
  union {
    struct {
        uint16        length;                   /* in bytes of data in buffer */
#define          DMA_DESC_USEFPM        0x8000
#define          DMA_DESC_MULTICAST     0x4000
#define          DMA_DESC_BUFLENGTH     0x0fff
        uint16        status;                   /* buffer status */
#define          DMA_OWN                0x8000  /* cleared by DMA, set by SW */
#define          DMA_EOP                0x4000  /* last buffer in packet */
#define          DMA_SOP                0x2000  /* first buffer in packet */
#define          DMA_WRAP               0x1000  /* */
#define          DMA_PRIO               0x0C00  /* Prio for Tx */
#define          DMA_APPEND_BRCM_TAG    0x0200
#define          DMA_APPEND_CRC         0x0100
#define          USB_ZERO_PKT           (1<< 0) // Set to send zero length packet
    };
    uint32      word0;
  };

  uint32        address;                 /* address of data */
  uint32        control;
#define         GEM_ID_MASK             0x001F
  uint32        reserved;
} DmaDesc16;


/*
** USB 2.0 Device Registers
*/
typedef struct UsbRegisters {
#define USBD_CONTROL_APP_DONECSR                0x0001
#define USBD_CONTROL_APP_RESUME                 0x0002
#define USBD_CONTROL_APP_RXFIFIO_INIT           0x0040
#define USBD_CONTROL_APP_TXFIFIO_INIT           0x0080
#define USBD_CONTROL_APP_FIFO_SEL_SHIFT         0x8
#define USBD_CONTROL_APP_FIFO_INIT_SEL(x)       (((x)&0x0f)<<USBD_CONTROL_APP_FIFO_SEL_SHIFT)
#define USBD_CONTROL_APP_AUTO_CSRS              0x2000
#define USBD_CONTROL_APP_AUTO_INS_ZERO_LEN_PKT  0x4000
#define EN_TXZLENINS                            (1<<14)
#define EN_RXZSCFG                              (1<<12)
#define APPSETUPERRLOCK                         (1<<5)
    uint32 usbd_control ;
#define USBD_STRAPS_APP_SELF_PWR                0x0400
#define USBD_STRAPS_APP_DEV_DISCON              0x0200
#define USBD_STRAPS_APP_CSRPRG_SUP              0x0100
#define USBD_STRAPS_APP_RAM_IF                  0x0080
#define USBD_STRAPS_APP_DEV_RMTWKUP             0x0040
#define USBD_STRAPS_APP_PHYIF_8BIT              0x0004
#define USBD_STRAPS_FULL_SPEED                  0x0003
#define USBD_STRAPS_LOW_SPEED                   0x0002
#define USBD_STRAPS_HIGH_SPEED                  0x0000
#define APPUTMIDIR(x)                           ((x&1)<<3)
#define UNIDIR                                  0
    uint32 usbd_straps;
#define USB_ENDPOINT_0                          0x01
    uint32 usbd_stall;
#define USBD_ENUM_SPEED_SHIFT                   12
#define USBD_ENUM_SPEED                         0x3000
#define UDC20_ALTINTF(x)                        ((x>>8)&0xf)
#define UDC20_INTF(x)                           ((x>>4)&0xf)
#define UDC20_CFG(x)                            ((x>>0)&0xf)
    uint32 usbd_status;
#define USBD_LINK                   (0x1<<10)
#define USBD_SET_CSRS                           0x40
#define USBD_SUSPEND                            0x20
#define USBD_EARLY_SUSPEND                      0x10
#define USBD_SOF                                0x08
#define USBD_ENUMON                             0x04
#define USBD_SETUP                              0x02
#define USBD_USBRESET                           0x01
    uint32 usbd_events;
    uint32 usbd_events_irq;
#define UPPER(x)                                (16+x)
#define ENABLE(x)                               (1<<x)
#define SWP_TXBSY                               (15)
#define SWP_RXBSY                               (14)
#define SETUP_ERR                               (13)
#define APPUDCSTALLCHG                          (12)
#define BUS_ERR                                 (11)
#define USB_LINK                                (10)
#define HST_SETCFG                              (9)
#define HST_SETINTF                             (8)
#define ERRATIC_ERR                             (7)
#define SET_CSRS                                (6)
#define SUSPEND                                 (5)
#define ERLY_SUSPEND                            (4)
#define SOF                                     (3)
#define ENUM_ON                                 (2)
#define SETUP                                   (1)
#define USB_RESET                               (0)
#define RISING(x)                               (0x0<<2*x)
#define FALLING(x)                              (0x1<<2*x)
#define USBD_IRQCFG_ENUM_ON_FALLING_EDGE        0x00000010
    uint32 usbd_irqcfg_hi ;
    uint32 usbd_irqcfg_lo ;
#define USBD_USB_RESET_IRQ                      0x00000001
#define USBD_USB_SETUP_IRQ                      0x00000002 // non-standard setup cmd rcvd
#define USBD_USB_ENUM_ON_IRQ                    0x00000004
#define USBD_USB_SOF_IRQ                        0x00000008
#define USBD_USB_EARLY_SUSPEND_IRQ              0x00000010
#define USBD_USB_SUSPEND_IRQ                    0x00000020 // non-standard setup cmd rcvd
#define USBD_USB_SET_CSRS_IRQ                   0x00000040
#define USBD_USB_ERRATIC_ERR_IRQ                0x00000080
#define USBD_USB_SETCFG_IRQ                     0x00000200
#define USBD_USB_LINK_IRQ                       0x00000400
    uint32 usbd_events_irq_mask;
    uint32 usbd_swcfg;
    uint32 usbd_swtxctl;
    uint32 usbd_swrxctl;
    uint32 usbd_txfifo_rwptr;
    uint32 usbd_rxfifo_rwptr;
    uint32 usbd_txfifo_st_rwptr;
    uint32 usbd_rxfifo_st_rwptr;
    uint32 usbd_txfifo_config ;
    uint32 usbd_rxfifo_config ;
    uint32 usbd_txfifo_epsize ;
    uint32 usbd_rxfifo_epsize ;
#define USBD_EPNUM_CTRL                         0x0
#define USBD_EPNUM_ISO                          0x1
#define USBD_EPNUM_BULK                         0x2
#define USBD_EPNUM_IRQ                          0x3
#define USBD_EPNUM_EPTYPE(x)                    (((x)&0x3)<<8)
#define USBD_EPNUM_EPDMACHMAP(x)                (((x)&0xf)<<0)
    uint32 usbd_epnum_typemap ;
    uint32 usbd_reserved [0xB] ;
    uint32 usbd_csr_setupaddr ;
#define USBD_EPNUM_MASK                         0xf
#define USBD_EPNUM(x)                           ((x&USBD_EPNUM_MASK)<<0)
#define USBD_EPDIR_IN                           (1<<4)
#define USBD_EPDIR_OUT                          (0<<4)
#define USBD_EPTYP_CTRL                         (USBD_EPNUM_CTRL<<5)
#define USBD_EPTYP_ISO                          (USBD_EPNUM_ISO<<5)
#define USBD_EPTYP_BULK                         (USBD_EPNUM_BULK<<5)
#define USBD_EPTYP_IRQ                          (USBD_EPNUM_IRQ<<5)
#define USBD_EPCFG_MASK                         0xf
#define USBD_EPCFG(x)                           ((x&USBD_EPCFG_MASK)<<7)
#define USBD_EPINTF_MASK                        0xf
#define USBD_EPINTF(x)                          ((x&USBD_EPINTF_MASK)<<11)
#define USBD_EPAINTF_MASK                       0xf
#define USBD_EPAINTF(x)                         ((x&USBD_EPAINTF_MASK)<<15)
#define USBD_EPMAXPKT_MSK                       0x7ff
#define USBD_EPMAXPKT(x)                        ((x&USBD_EPMAXPKT_MSK)<<19)
#define USBD_EPISOPID_MASK                      0x3
#define USBD_EPISOPID(x)                        ((x&USBD_ISOPID_MASK)<<30)
    uint32 usbd_csr_ep [5] ;
} UsbRegisters;

#define USB ((volatile UsbRegisters * const) USB_CTL_BASE)

typedef struct USBControl {
    uint32 BrtControl1;
    uint32 BrtControl2;
    uint32 BrtStatus1;
    uint32 BrtStatus2;
    uint32 UTMIControl1;
    uint32 TestPortControl;
    uint32 PllControl1;
    uint32 SwapControl;
#define USB_DEVICE_SEL          (1<<6)
#define EHCI_LOGICAL_ADDRESS_EN (1<<5)
#define EHCI_ENDIAN_SWAP        (1<<4)
#define EHCI_DATA_SWAP          (1<<3)
#define OHCI_LOGICAL_ADDRESS_EN (1<<2)
#define OHCI_ENDIAN_SWAP        (1<<1)
#define OHCI_DATA_SWAP          (1<<0)
    uint32 unused1;
    uint32 FrameAdjustValue;
    uint32 Setup;
#define USBH_IOC                (1<<4)
    uint32 MDIO;
    uint32 MDIO32;
    uint32 USBSimControl;
} USBControl;

#define USBH ((volatile USBControl * const) USBH_CFG_BASE)

typedef struct EthSwRegs{
    byte port_traffic_ctrl[9]; /* 0x00 - 0x08 */
    byte reserved1[2]; /* 0x09 - 0x0a */
    byte switch_mode; /* 0x0b */
    unsigned short pause_quanta; /*0x0c */
    byte imp_port_state; /*0x0e */
    byte led_refresh; /* 0x0f */
    unsigned short led_function[2]; /* 0x10 */
    unsigned short led_function_map; /* 0x14 */
    unsigned short led_enable_map; /* 0x16 */
    unsigned short led_mode_map0; /* 0x18 */
    unsigned short led_function_map1; /* 0x1a */
    byte reserved2[5]; /* 0x1b - 0x20 */
    byte port_forward_ctrl; /* 0x21 */ 
    byte reserved3[2]; /* 0x22 - 0x23 */
    unsigned short protected_port_selection; /* 0x24 */
    unsigned short wan_port_select; /* 0x26 */
    unsigned int pause_capability; /* 0x28 */
    byte reserved4[3]; /* 0x2c - 0x2e */
    byte reserved_multicast_control; /* 0x2f */
    byte reserved5; /* 0x30 */
    byte txq_flush_mode_control; /* 0x31 */
    unsigned short ulf_forward_map; /* 0x32 */
    unsigned short mlf_forward_map; /* 0x34 */
    unsigned short mlf_impc_forward_map; /* 0x36 */
    unsigned short pause_pass_through_for_rx; /* 0x38 */
    unsigned short pause_pass_through_for_tx; /* 0x3a */
    unsigned short disable_learning; /* 0x3c */
    byte reserved6[26]; /* 0x3e - 0x57 */
    byte port_state_override[8]; /* 0x58 - 0x5f */
    byte reserved7[4]; /* 0x60 - 0x63 */
    byte imp_rgmii_ctrl_p4; /* 0x64 */
    byte imp_rgmii_ctrl_p5; /* 0x65 */
    byte reserved8[6]; /* 0x66 - 0x6b */
    byte rgmii_timing_delay_p4; /* 0x6c */
    byte gmii_timing_delay_p5; /* 0x6d */
    byte reserved9[11]; /* 0x6e - 0x78 */
    byte software_reset; /* 0x79 */
    byte reserved13[6]; /* 0x7a - 0x7f */
    byte pause_frame_detection; /* 0x80 */
    byte reserved10[7]; /* 0x81 - 0x87 */
    byte fast_aging_ctrl; /* 0x88 */
    byte fast_aging_port; /* 0x89 */
    byte fast_aging_vid; /* 0x8a */
    byte reserved11[21]; /* 0x8b - 0x9f */
    unsigned int swpkt_ctrl_sar; /*0xa0 */
    unsigned int swpkt_ctrl_usb; /*0xa4 */
    unsigned int iudma_ctrl; /*0xa8 */
    unsigned int rxfilt_ctrl; /*0xac */
    unsigned int mdio_ctrl; /*0xb0 */
    unsigned int mdio_data; /*0xb4 */
    byte reserved12[42]; /* 0xb6 - 0xdf */
    unsigned int sw_mem_test; /*0xe0 */
} EthSwRegs;

#define ETHSWREG ((volatile EthSwRegs * const) SWITCH_BASE)

typedef struct EthSwMIBRegs {
    unsigned int TxOctetsLo;
    unsigned int TxOctetsHi;
    unsigned int TxDropPkts;
    unsigned int TxQoSPkts;
    unsigned int TxBroadcastPkts;
    unsigned int TxMulticastPkts;
    unsigned int TxUnicastPkts;
    unsigned int TxCol;
    unsigned int TxSingleCol;
    unsigned int TxMultipleCol;
    unsigned int TxDeferredTx;
    unsigned int TxLateCol;
    unsigned int TxExcessiveCol;
    unsigned int TxFrameInDisc;
    unsigned int TxPausePkts;
    unsigned int TxQoSOctetsLo;
    unsigned int TxQoSOctetsHi;
    unsigned int RxOctetsLo;
    unsigned int RxOctetsHi;
    unsigned int RxUndersizePkts;
    unsigned int RxPausePkts;
    unsigned int Pkts64Octets;
    unsigned int Pkts65to127Octets;
    unsigned int Pkts128to255Octets;
    unsigned int Pkts256to511Octets;
    unsigned int Pkts512to1023Octets;
    unsigned int Pkts1024to1522Octets;
    unsigned int RxOversizePkts;
    unsigned int RxJabbers;
    unsigned int RxAlignErrs;
    unsigned int RxFCSErrs;
    unsigned int RxGoodOctetsLo;
    unsigned int RxGoodOctetsHi;
    unsigned int RxDropPkts;
    unsigned int RxUnicastPkts;
    unsigned int RxMulticastPkts;
    unsigned int RxBroadcastPkts;
    unsigned int RxSAChanges;
    unsigned int RxFragments;
    unsigned int RxExcessSizeDisc;
    unsigned int RxSymbolError;
    unsigned int RxQoSPkts;
    unsigned int RxQoSOctetsLo;
    unsigned int RxQoSOctetsHi;
    unsigned int Pkts1523to2047;
    unsigned int Pkts2048to4095;
    unsigned int Pkts4096to8191;
    unsigned int Pkts8192to9728;
} EthSwMIBRegs;

#define ETHSWMIBREG ((volatile EthSwMIBRegs * const) (SWITCH_BASE + 0x2000))

/* Enet registers controlling rx iuDMA channel */
typedef struct EthSwQosIngressPortPriRegs{
    unsigned short pri_id_map[9];
} EthSwQosIngressPortPriRegs;

#define ETHSWQOSREG ((volatile EthSwQosIngressPortPriRegs * const) (SWITCH_BASE + 0x3050))

/* SAR registers controlling rx iuDMA channel */
typedef struct SarRxMuxRegs{
    unsigned int vcid0_qid;
    unsigned int vcid1_qid;
} SarRxMuxRegs;

#define SARRXMUXREG ((volatile SarRxMuxRegs * const) (SAR_BASE + 0x2304))

/*
** NAND Interrupt Controller Registers
*/
typedef struct NandIntrCtrlRegs {
    uint32 NandInterrupt;
#define NINT_ENABLE_MASK    0xffff0000
#define NINT_STS_MASK       0x00000fff
#define NINT_ECC_ERROR_CORR 0x00000080
#define NINT_ECC_ERROR_UNC  0x00000040
#define NINT_DEV_RBPIN      0x00000020
#define NINT_CTRL_READY     0x00000010
#define NINT_PAGE_PGM       0x00000008
#define NINT_COPY_BACK      0x00000004
#define NINT_BLOCK_ERASE    0x00000002
#define NINT_NP_READ        0x00000001

    uint32 NandBaseAddr0;   /* Default address when booting from NAND flash */
    uint32 reserved;
    uint32 NandBaseAddr1;   /* Secondary base address for NAND flash */
} NandIntrCtrlRegs;

#define NAND_INTR ((volatile NandIntrCtrlRegs * const) NAND_INTR_BASE)

/*
** NAND Controller Registers
*/
typedef struct NandCtrlRegs {
    uint32 NandRevision;            /* NAND Revision */
    uint32 NandCmdStart;            /* Nand Flash Command Start */
#define NCMD_MASK           0x0f000000
#define NCMD_BLK_LOCK_STS   0x0d000000
#define NCMD_BLK_UNLOCK     0x0c000000
#define NCMD_BLK_LOCK_DOWN  0x0b000000
#define NCMD_BLK_LOCK       0x0a000000
#define NCMD_FLASH_RESET    0x09000000
#define NCMD_BLOCK_ERASE    0x08000000
#define NCMD_DEV_ID_READ    0x07000000
#define NCMD_COPY_BACK      0x06000000
#define NCMD_PROGRAM_SPARE  0x05000000
#define NCMD_PROGRAM_PAGE   0x04000000
#define NCMD_STS_READ       0x03000000
#define NCMD_SPARE_READ     0x02000000
#define NCMD_PAGE_READ      0x01000000

    uint32 NandCmdExtAddr;          /* Nand Flash Command Extended Address */
    uint32 NandCmdAddr;             /* Nand Flash Command Address */
    uint32 NandCmdEndAddr;          /* Nand Flash Command End Address */
    uint32 NandNandBootConfig;      /* Nand Flash Boot Config */
#define NBC_CS_LOCK         0x80000000
#define NBC_AUTO_DEV_ID_CFG 0x40000000
#define NBC_WR_PROT_BLK0    0x10000000

    uint32 NandCsNandXor;           /* Nand Flash EBI CS Address XOR with */
                                    /*   1FC0 Control */
    uint32 NandReserved;
    uint32 NandSpareAreaReadOfs0;   /* Nand Flash Spare Area Read Bytes 0-3 */
    uint32 NandSpareAreaReadOfs4;   /* Nand Flash Spare Area Read Bytes 4-7 */
    uint32 NandSpareAreaReadOfs8;   /* Nand Flash Spare Area Read Bytes 8-11 */
    uint32 NandSpareAreaReadOfsC;   /* Nand Flash Spare Area Read Bytes 12-15*/
    uint32 NandSpareAreaWriteOfs0;  /* Nand Flash Spare Area Write Bytes 0-3 */
    uint32 NandSpareAreaWriteOfs4;  /* Nand Flash Spare Area Write Bytes 4-7 */
    uint32 NandSpareAreaWriteOfs8;  /* Nand Flash Spare Area Write Bytes 8-11*/
    uint32 NandSpareAreaWriteOfsC;  /* Nand Flash Spare Area Write Bytes12-15*/
    uint32 NandAccControl;          /* Nand Flash Access Control */
    uint32 NandConfig;              /* Nand Flash Config */
#define NC_CONFIG_LOCK      0x80000000
#define NC_PG_SIZE_MASK     0x00300000
#define NC_PG_SIZE_2K       0x00100000
#define NC_PG_SIZE_512B     0x00000000
#define NC_BLK_SIZE_MASK    0x30000000
#define NC_BLK_SIZE_512K    0x30000000
#define NC_BLK_SIZE_128K    0x10000000
#define NC_BLK_SIZE_16K     0x00000000
#define NC_BLK_SIZE_8K      0x20000000
#define NC_DEV_SIZE_MASK    0x0f000000
#define NC_DEV_SIZE_SHIFT   24
#define NC_DEV_WIDTH_MASK   0x00800000
#define NC_DEV_WIDTH_16     0x00800000
#define NC_DEV_WIDTH_8      0x00000000
#define NC_FUL_ADDR_MASK    0x00070000
#define NC_FUL_ADDR_SHIFT   16
#define NC_BLK_ADDR_MASK    0x00000700
#define NC_BLK_ADDR_SHIFT   8

    uint32 NandTiming1;             /* Nand Flash Timing Parameters 1 */
    uint32 NandTiming2;             /* Nand Flash Timing Parameters 2 */
    uint32 NandSemaphore;           /* Semaphore */
    uint32 NandFlashDeviceId;       /* Nand Flash Device ID */
    uint32 NandBlockLockStatus;     /* Nand Flash Block Lock Status */
    uint32 NandIntfcStatus;         /* Nand Flash Interface Status */
#define NIS_CTLR_READY      0x80000000
#define NIS_FLASH_READY     0x40000000
#define NIS_CACHE_VALID     0x20000000
#define NIS_SPARE_VALID     0x10000000
#define NIS_FLASH_STS_MASK  0x000000ff
#define NIS_WRITE_PROTECT   0x00000080
#define NIS_DEV_READY       0x00000040
#define NIS_PGM_ERASE_ERROR 0x00000001

    uint32 NandEccCorrExtAddr;      /* ECC Correctable Error Extended Address*/
    uint32 NandEccCorrAddr;         /* ECC Correctable Error Address */
    uint32 NandEccUncExtAddr;       /* ECC Uncorrectable Error Extended Addr */
    uint32 NandEccUncAddr;          /* ECC Uncorrectable Error Address */
    uint32 NandFlashReadExtAddr;    /* Flash Read Data Extended Address */
    uint32 NandFlashReadAddr;       /* Flash Read Data Address */
    uint32 NandProgramPageExtAddr;  /* Page Program Extended Address */
    uint32 NandProgramPageAddr;     /* Page Program Address */
    uint32 NandCopyBackExtAddr;     /* Copy Back Extended Address */
    uint32 NandCopyBackAddr;        /* Copy Back Address */
    uint32 NandBlockEraseExtAddr;   /* Block Erase Extended Address */
    uint32 NandBlockEraseAddr;      /* Block Erase Address */
    uint32 NandInvReadExtAddr;      /* Flash Invalid Data Extended Address */
    uint32 NandInvReadAddr;         /* Flash Invalid Data Address */
    uint32 NandBlkWrProtect;        /* Block Write Protect Enable and Size */
                                    /*   for EBI_CS0b */
} NandCtrlRegs;

#define NAND ((volatile NandCtrlRegs * const) NAND_REG_BASE)

#define NAND_CACHE ((volatile uint8 * const) NAND_CACHE_BASE)

/*
** PCI-E
*/
typedef struct PcieRegs{
  uint32 devVenID;
  uint16 command;
  uint16 status;
  uint32 revIdClassCode;
  uint32 headerTypeLatCacheLineSize;
  uint32 bar1;
  uint32 bar2;
  uint32 priSecBusNo;
#define PCIE_CFG_TYPE1_PRI_SEC_BUS_NO_SUB_BUS_NO_MASK              0x00ff0000
#define PCIE_CFG_TYPE1_PRI_SEC_BUS_NO_SUB_BUS_NO_SHIFT             16  
#define PCIE_CFG_TYPE1_PRI_SEC_BUS_NO_SEC_BUS_NO_MASK              0x0000ff00
#define PCIE_CFG_TYPE1_PRI_SEC_BUS_NO_SEC_BUS_NO_SHIFT             8
#define PCIE_CFG_TYPE1_PRI_SEC_BUS_NO_PRI_BUS_NO_MASK              0x000000ff

  uint32 ioBaseLimit;
  uint32 secStatus;
  uint32 rcMemBaseLimit;
  uint32 rcPrefBaseLimit;
  uint32 rcPrefBaseHi;
  uint32 rcPrefLimitHi;
  uint32 rcIoBaseLimit;
  uint32 capPointer;
  uint32 expRomBase;
  uint32 brdigeCtrlIntPinIntLine;
  uint32 bridgeCtrl;
  uint32 unused1[27];

  /* PcieExpressCtrlRegs */
  uint16 pciExpressCap;
  uint16 pcieCapabilitiy;
  uint32 deviceCapability;
  uint16 deviceControl;
  uint16 deviceStatus;
  uint32 linkCapability;
  uint16 linkControl;
  uint16 linkStatus;
  uint32 slotCapability;
  uint16 slotControl;
  uint16 slotStatus;
  uint16 rootControl;
  uint16 rootCap;
  uint32 rootStatus;
  uint32 deviceCapability2;
  uint16 deviceControl2;
  uint16 deviceStatus2;
  uint32 linkCapability2;
  uint16 linkControl2;
  uint16 linkStatus2;
  uint32 slotCapability2;
  uint16 slotControl2;
  uint16 slotStatus2;
  uint32 unused2[6];

  /* PcieErrorRegs */
  uint16 advErrCapId;
  uint16 advErrCapOff;
  uint32 ucErrStatus;
  uint32 ucorrErrMask;
  uint32 ucorrErrSevr;
  uint32 corrErrStatus;
  uint32 corrErrMask;
  uint32 advErrCapControl;
  uint32 headerLog1;
  uint32 headerLog2;
  uint32 headerLog3;
  uint32 headerLog4;
  uint32 rootErrorCommand;
  uint32 rootErrorStatus;
  uint32 rcCorrId;
  uint32 rcFatalNonfatalId;
  uint32 unused3[10];

  /* PcieVcRegs */
  uint16 vcCapId;
  uint16 vcCapOffset;
  uint32 prtVcCapability;
  uint32 portVcCapability2;
  uint16 portVcControl;
  uint16 portVcCtatus;
  uint32 portArbStatus;
  uint32 vcRsrcControl;
  uint32 vcRsrcStatus;
  uint32 unused4[1];

  /* PcieVendor */
  uint32 vendorCapability;
  uint32 vendorSpecificHdr;
} PcieRegs;

typedef struct PcieBlk404Regs{
  uint32 unused;          /* 0x404 */
  uint32 config2;         /* 0x408 */
#define PCIE_IP_BLK404_CONFIG_2_BAR1_SIZE_MASK         0x0000000f
#define PCIE_IP_BLK404_CONFIG_2_BAR1_DISABLE           0  
  uint32 config3;         /* 0x40c */
  uint32 pmDataA;         /* 0x410 */
  uint32 pmDataB;         /* 0x414 */
} PcieBlk404Regs;

typedef struct PcieBlk428Regs{
  uint32 vpdIntf;        /* 0x428 */
  uint16 unused_g;       /* 0x42c */
  uint16 vpdAddrFlag;    /* 0x42e */
  uint32 vpdData;        /* 0x430 */
  uint32 idVal1;         /* 0x434 */
  uint32 idVal2;         /* 0x438 */
  uint32 idVal3;         /* 0x43c */
#define PCIE_IP_BLK428_ID_VAL3_REVISION_ID_MASK                    0xff000000
#define PCIE_IP_BLK428_ID_VAL3_REVISION_ID_SHIFT                   24
#define PCIE_IP_BLK428_ID_VAL3_CLASS_CODE_MASK                     0x00ffffff
#define PCIE_IP_BLK428_ID_VAL3_CLASS_CODE_SHIFT                    16
#define PCIE_IP_BLK428_ID_VAL3_SUB_CLASS_CODE_SHIFT                 8

  uint32 idVal4;
  uint32 idVal5;
  uint32 unused_h;
  uint32 idVal6;
  uint32 msiData;
  uint32 msiAddr_h;
  uint32 msiAddr_l;
  uint32 msiMask;
  uint32 msiPend;
  uint32 pmData_c;
  uint32 msixControl;
  uint32 msixTblOffBir;
  uint32 msixPbaOffBit;
  uint32 unused_k;
  uint32 pcieCapability;
  uint32 deviceCapability;
  uint32 unused_l;
  uint32 linkCapability;
  uint32 bar2Config;
  uint32 pcieDeviceCapability2;
  uint32 pcieLinkCapability2;
  uint32 pcieLinkControl;
  uint32 pcieLinkCapabilityRc;
  uint32 bar3Config;
  uint32 rootCap;
  uint32 devSerNumCapId;
  uint32 lowerSerNum;
  uint32 upperSerNum;
  uint32 advErrCap;
  uint32 pwrBdgtData0;
  uint32 pwrBdgtData1;
  uint32 pwrBdgtData2;
  uint32 pwdBdgtData3;
  uint32 pwrBdgtData4;
  uint32 pwrBdgtData5;
  uint32 pwrBdgtData6;
  uint32 pwrBdgtData7;
  uint32 pwrBdgtCapability;
  uint32 vsecHdr;
  uint32 rcUserMemLo1;
  uint32 rcUserMemHi1;
  uint32 rcUserMemLo2;
  uint32 rcUserMemHi2;
}PcieBlk428Regs;

typedef struct PcieBlk800Regs{
#define NUM_PCIE_BLK_800_CTRL_REGS  6
  uint32 tlControl[NUM_PCIE_BLK_800_CTRL_REGS];
  uint32 tlCtlStat0;
  uint32 pmStatus0;
  uint32 pmStatus1;

#define NUM_PCIE_BLK_800_TAGS       32
  uint32 tlStatus[NUM_PCIE_BLK_800_TAGS];
  uint32 tlHdrFcStatus;
  uint32 tlDataFcStatus;
  uint32 tlHdrFcconStatus;
  uint32 tlDataFcconStatus;
  uint32 tlTargetCreditStatus;
  uint32 tlCreditAllocStatus;
  uint32 tlSmlogicStatus;
} PcieBlk800Regs;


typedef struct PcieBlk1000Regs{
#define NUM_PCIE_BLK_1000_PDL_CTRL_REGS  16
  uint32 pdlControl[NUM_PCIE_BLK_1000_PDL_CTRL_REGS];
  uint32 dlattnVec;
  uint32 dlAttnMask;
  uint32 dlStatus;        /* 0x1048 */
#define PCIE_IP_BLK1000_DL_STATUS_PHYLINKUP_MASK                   0x00002000
#define PCIE_IP_BLK1000_DL_STATUS_PHYLINKUP_SHIFT                  13   
  uint32 dlTxChecksum;
  uint32 dlForcedUpdateGen1;
  uint32 mdioAddr;
  uint32 mdioWrData;
  uint32 mdioRdData;
  uint32 dlRxPFcCl;
  uint32 dlRxCFcCl;
  uint32 dlRxAckNack;
  uint32 dlTxRxSeqnb;
  uint32 dlTxPFcAl;
  uint32 dlTxNpFcAl;
  uint32 regDlSpare;
  uint32 dlRegSpare;
  uint32 dlTxRxSeq;
  uint32 dlRxNpFcCl;
}PcieBlk1000Regs;

typedef struct PcieBlk1800Regs{
#define NUM_PCIE_BLK_1800_PHY_CTRL_REGS         5
  uint32 phyCtrl[NUM_PCIE_BLK_1800_PHY_CTRL_REGS];
#define REG_POWERDOWN_P1PLL_ENA                      (1<<12)
  uint32 phyErrorAttnVec;
  uint32 phyErrorAttnMask;
  uint32 phyReceivedMcpErrors;
  uint32 phyTransmittedMcpErrors;
  uint32 phyGenDebug;
  uint32 phyRecoveryHist;
#define NUM_PCIE_BLK_1800_PHY_LTSSM_HIST_REGS   3
  uint32 phyltssmHist[NUM_PCIE_BLK_1800_PHY_LTSSM_HIST_REGS];
#define NUM_PCIE_BLK_1800_PHY_DBG_REGS          11
  uint32 phyDbg[NUM_PCIE_BLK_1800_PHY_DBG_REGS];
} PcieBlk1800Regs;

typedef struct PcieBridgeRegs{
   uint32 bar1Remap;       /* 0x0818*/
#define PCIE_BRIDGE_BAR1_REMAP_addr_MASK                    0xffff0000
#define PCIE_BRIDGE_BAR1_REMAP_addr_MASK_SHIFT              16
#define PCIE_BRIDGE_BAR1_REMAP_remap_enable                 (1<<1)
#define PCIE_BRIDGE_BAR1_REMAP_swap_enable                  1
   
   uint32 bar2Remap;       /* 0x081c*/
#define PCIE_BRIDGE_BAR2_REMAP_addr_MASK                    0xffff0000
#define PCIE_BRIDGE_BAR2_REMAP_addr_MASK_SHIFT              16
#define PCIE_BRIDGE_BAR2_REMAP_remap_enable                 (1<<1)
#define PCIE_BRIDGE_BAR2_REMAP_swap_enable                  1
   
   uint32 bridgeOptReg1;   /* 0x0820*/
#define PCIE_BRIDGE_OPT_REG1_en_l1_int_status_mask_polarity  (1<<12)
#define PCIE_BRIDGE_OPT_REG1_en_pcie_bridge_hole_detection   (1<<11)
#define PCIE_BRIDGE_OPT_REG1_en_rd_reply_be_fix              (1<<9)
#define PCIE_BRIDGE_OPT_REG1_enable_rd_be_opt                (1<<7)
   
   uint32 bridgeOptReg2;    /* 0x0824*/
#define PCIE_BRIDGE_OPT_REG2_cfg_type1_func_no_MASK    0xe0000000
#define PCIE_BRIDGE_OPT_REG2_cfg_type1_func_no_SHIFT   29
#define PCIE_BRIDGE_OPT_REG2_cfg_type1_dev_no_MASK     0x1f000000
#define PCIE_BRIDGE_OPT_REG2_cfg_type1_dev_no_SHIFT    24
#define PCIE_BRIDGE_OPT_REG2_cfg_type1_bus_no_MASK     0x00ff0000
#define PCIE_BRIDGE_OPT_REG2_cfg_type1_bus_no_SHIFT    16
#define PCIE_BRIDGE_OPT_REG2_cfg_type1_bd_sel_MASK     0x00000080
#define PCIE_BRIDGE_OPT_REG2_cfg_type1_bd_sel_SHIFT    7
#define PCIE_BRIDGE_OPT_REG2_dis_pcie_timeout_MASK     0x00000040
#define PCIE_BRIDGE_OPT_REG2_dis_pcie_timeout_SHIFT    6
#define PCIE_BRIDGE_OPT_REG2_dis_pcie_abort_MASK       0x00000020
#define PCIE_BRIDGE_OPT_REG2_dis_pcie_abort_SHIFT      5
#define PCIE_BRIDGE_OPT_REG2_enable_tx_crd_chk_MASK    0x00000010
#define PCIE_BRIDGE_OPT_REG2_enable_tx_crd_chk_SHIFT   4
#define PCIE_BRIDGE_OPT_REG2_dis_ubus_ur_decode_MASK   0x00000004
#define PCIE_BRIDGE_OPT_REG2_dis_ubus_ur_decode_SHIFT  2
#define PCIE_BRIDGE_OPT_REG2_cfg_reserved_MASK         0x0000ff0b

   uint32 Ubus2PcieBar0BaseMask; /* 0x0828 */
#define PCIE_BRIDGE_BAR0_BASE_base_MASK                     0xfff00000
#define PCIE_BRIDGE_BAR0_BASE_base_MASK_SHIFT               20
#define PCIE_BRIDGE_BAR0_BASE_mask_MASK                     0x0000fff0
#define PCIE_BRIDGE_BAR0_BASE_mask_MASK_SHIFT               4
#define PCIE_BRIDGE_BAR0_BASE_swap_enable                   (1<<1)
#define PCIE_BRIDGE_BAR0_BASE_remap_enable                  1

   uint32 Ubus2PcieBar0RemapAdd; /* 0x082c */   
#define PCIE_BRIDGE_BAR0_REMAP_ADDR_addr_MASK               0xfff00000
#define PCIE_BRIDGE_BAR0_REMAP_ADDR_addr_SHIFT              20
   
   uint32 Ubus2PcieBar1BaseMask; /* 0x0830 */
#define PCIE_BRIDGE_BAR1_BASE_base_MASK                     0xfff00000
#define PCIE_BRIDGE_BAR1_BASE_base_MASK_SHIFT               20
#define PCIE_BRIDGE_BAR1_BASE_mask_MASK                     0x0000fff0
#define PCIE_BRIDGE_BAR1_BASE_mask_MASK_SHIFT               4
#define PCIE_BRIDGE_BAR1_BASE_swap_enable                   (1<<1)
#define PCIE_BRIDGE_BAR1_BASE_remap_enable                  1   
   
   uint32 Ubus2PcieBar1RemapAdd; /* 0x0834 */
#define PCIE_BRIDGE_BAR1_REMAP_ADDR_addr_MASK               0xfff00000
#define PCIE_BRIDGE_BAR1_REMAP_ADDR_addr_SHIFT              20
   
   uint32 bridgeErrStatus;       /* 0x0838 */
   uint32 bridgeErrMask;         /* 0x083c */   
   uint32 coreErrStatus2;        /* 0x0840 */
   uint32 coreErrMask2;          /* 0x0844 */
   uint32 coreErrStatus1;        /* 0x0848 */
   uint32 coreErrMask1;          /* 0x084c */
   uint32 rcInterruptStatus;     /* 0x0850 */
   uint32 rcInterruptMask;       /* 0x0854 */
#define PCIE_BRIDGE_INTERRUPT_MASK_int_a_MASK   (1<<0)
#define PCIE_BRIDGE_INTERRUPT_MASK_int_b_MASK   (1<<1)   
#define PCIE_BRIDGE_INTERRUPT_MASK_int_c_MASK   (1<<2)   
#define PCIE_BRIDGE_INTERRUPT_MASK_int_d_MASK   (1<<3)   
      
}PcieBridgeRegs;

#define PCIEH_DEV_OFFSET              0x8000
#define PCIEH                         ((volatile uint32 * const) PCIE_BASE)
#define PCIEH_REGS                    ((volatile PcieRegs * const) PCIE_BASE)

#define PCIEH_BLK_404_REGS            ((volatile PcieBlk404Regs * const) \
                                        (PCIE_BASE+0x404))
#define PCIEH_BLK_428_REGS            ((volatile PcieBlk428Regs * const) \
                                        (PCIE_BASE+0x428))
#define PCIEH_BLK_800_REGS            ((volatile PcieBlk800Regs * const) \
                                        (PCIE_BASE+0x800))
#define PCIEH_BLK_1000_REGS           ((volatile PcieBlk1000Regs * const) \
                                        (PCIE_BASE+0x1000))
#define PCIEH_BLK_1800_REGS           ((volatile PcieBlk1800Regs * const) \
                                        (PCIE_BASE+0x1800))
#define PCIEH_BRIDGE_REGS             ((volatile PcieBridgeRegs * const)  \
                                        (PCIE_BASE+0x2818))

typedef struct WlanShimRegs {
    uint32 ShimMisc;                            /* SHIM control registers */
#define WLAN_SHIM_FORCE_CLOCKS_ON   (1 << 2)
#define WLAN_SHIM_MACRO_DISABLE     (1 << 1)
#define WLAN_SHIM_MACRO_SOFT_RESET  (1 << 0)

    uint32 ShimStatus;                          /* SHIM status */       

    uint32 CcControl;                           /* CC control */
#define SICF_WOC_CORE_RESET         0x10000    
#define SICF_BIST_EN                0x8000
#define SICF_PME_EN                 0x4000      
#define SICF_CORE_BITS              0x3ffc      
#define SICF_FGC                    0x0002      
#define SICF_CLOCK_EN               0x0001      

    uint32 CcStatus;                            /* CC status */
#define SISF_BIST_DONE              0x8000      
#define SISF_BIST_ERROR             0x4000      
#define SISF_GATED_CLK              0x2000      
#define SISF_DMA64                  0x1000      
#define SISF_CORE_BITS              0x0fff      

    uint32 MacControl;                          /* MAC control */
    uint32 MacStatus;                           /* MAC status */

    uint32 CcIdA;                               /* CC desc A */
    uint32 CcIdB;                               /* CC desc B */
    uint32 CcAddr;                              /* CC base addr */
    uint32 MacIdA;                              /* MAC desc A */
    uint32 MacIdB;                              /* MAC desc B */
    uint32 MacAddr;                             /* MAC base addr */
    uint32 ShimIdA;                             /* SHIM desc A */
    uint32 ShimIdB;                             /* SHIM desc B */
    uint32 ShimAddr;                            /* SHIM addr */
    uint32 ShimEot;                             /* EOT */                                                                                                                                            
}WlanShimRegs;

#define WLAN_SHIM                   ((volatile WlanShimRegs * const)WLAN_SHIM_BASE)

/*
** DECT IP Device Registers
*/
typedef enum  DECT_SHM_ENABLE_BITS
{
   DECT_SHM_IRQ_DSP_INT,
   DECT_SHM_IRQ_DSP_IRQ_OUT,
   DECT_SHM_IRQ_DIP_INT,
   DECT_SHM_H2D_BUS_ERR,
   DECT_SHM_IRQ_TX_DMA_DONE,                 
   DECT_SHM_IRQ_RX_DMA_DONE,
   DECT_SHM_IRQ_PLL_PHASE_LOCK = DECT_SHM_IRQ_RX_DMA_DONE + 2, /* Skip reserved bit */
   DECT_SHM_REG_DSP_BREAK,
   DECT_SHM_REG_DIP_BREAK,
   DECT_SHM_REG_IRQ_TO_IP = DECT_SHM_REG_DIP_BREAK + 2, /* Skip reserved bit */
   DECT_SHM_TX_DMA_DONE_TO_IP,
   DECT_SHM_RX_DMA_DONE_TO_IP, 
} DECT_SHM_ENABLE_BITS;

typedef struct DECTShimControl 
{
   uint32 dect_shm_ctrl;                     /*  0xb000b000  DECT shim control registers                    */
#define APB_SWAP_MASK             0x0000C000
#define APB_SWAP_16_BIT           0x00000000
#define APB_SWAP_8_BIT            0x00004000
#define AHB_SWAP_MASK             0x00003000
#define AHB_SWAP_16_BIT           0x00003000
#define AHB_SWAP_8_BIT            0x00002000
#define AHB_SWAP_ACCESS           0x00001000
#define AHB_SWAP_NONE             0x00000000
#define DECT_PULSE_COUNT_ENABLE   0x00000200
#define PCM_PULSE_COUNT_ENABLE    0x00000100
#define DECT_SOFT_RESET           0x00000010
#define PHCNT_CLK_SRC_PLL         0x00000008
#define PHCNT_CLK_SRC_XTAL        0x00000000
#define DECT_CLK_OUT_PLL          0x00000004
#define DECT_CLK_OUT_XTAL         0x00000000
#define DECT_CLK_CORE_PCM         0x00000002
#define DECT_CLK_CORE_DECT        0x00000000
#define DECT_PLL_REF_PCM          0x00000001
#define DECT_PLL_REF_DECT         0x00000000

   uint32 dect_shm_pcm_clk_cntr;             /*  0xb000b004  PCM clock counter                              */
   uint32 dect_shm_dect_clk_cntr;            /*  0xb000b008  DECT clock counter                             */
   uint32 dect_shm_dect_clk_cntr_sh;         /*  0xb000b00c  DECT clock counter snapshot                    */
   uint32 dect_shm_irq_enable;               /*  0xb000b010  DECT interrupt enable register                 */
   uint32 dect_shm_irq_status;               /*  0xb000b014  DECT Interrupt status register                 */
   uint32 dect_shm_irq_trig;                 /*  0xb000b018  DECT DSP ext IRQ trigger and IRQ test register */
   uint32 dect_shm_dma_status;               /*  0xb000b01c  DECT DMA STATUS register                       */
   uint32 dect_shm_xtal_ctrl;                /*  0xb000b020  DECT analog tunable XTAL control register      */
   uint32 dect_shm_bandgap_ctrl;             /*  0xb000b024  DECT analog bandgap control register           */
   uint32 dect_shm_afe_tx_ctrl;              /*  0xb000b028  DECT analog TX DAC control register            */
   uint32 dect_shm_afe_test_ctrl;            /*  0xb000b02c  DECT analog test control register              */
   uint32 dect_shm_pll_reg_0;                /*  0xb000b030  DECT PLL configuration register 0              */
   uint32 dect_shm_pll_reg_1;                /*  0xb000b034  DECT PLL configuration register 1              */
#define  PLL_PWRDWN                          0x01000000   
#define  PLL_REFCOMP_PWRDOWN                 0x02000000
#define  PLL_NDIV_PWRDOWN                    0x04000000
#define  PLL_CH1_PWRDOWN                     0x08000000
#define  PLL_CH2_PWRDOWN                     0x10000000
#define  PLL_CH3_PWRDOWN                     0x20000000
#define  PLL_DRESET                          0x40000000
#define  PLL_ARESET                          0x80000000

   uint32 dect_shm_pll_reg_2;                /*  0xb000b038  DECT PLL Ndiv configuration register           */
   uint32 dect_shm_pll_reg_3;                /*  0xb000b03c  DECT PLL Pdiv and Mdiv configuration register  */
} DECTShimControl;

#define DECT_CTRL ((volatile DECTShimControl * const) DECT_SHIM_CTRL_BASE)

typedef struct DECTShimDmaControl 
{
   uint32 dect_shm_dma_ctrl;                 /*  0xb000b050  DECT DMA control register                      */
#define  DMA_CLEAR                           0x80000000
#define  DMA_SWAP_16_BIT                     0x03000000
#define  DMA_SWAP_8_BIT                      0x02000000
#define  DMA_SWAP_NONE                       0x01000000
#define  DMA_SUBWORD_SWAP_MASK               0x03000000
#define  TRIG_CNT_CLK_SEL_PCM                0x00800000
#define  TRIG_CNT_IRQ_EN                     0x00400000
#define  RX_CNT_TRIG_EN                      0x00200000   
#define  TX_CNT_TRIG_EN                      0x00100000 
#define  RX_INT_TRIG_EN                      0x00080000 	
#define  TX_INT_TRIG_EN                      0x00040000 	
#define  RX_REG_TRIG_EN                      0x00020000 	
#define  TX_REG_TRIG_EN                      0x00010000 
#define  RX_TRIG_FIRST                       0x00008000
#define  MAX_BURST_CYCLE_MASK                0x00001F00
#define  MAX_BURST_CYCLE_SHIFT               8
#define  RX_EN_3                             0x00000080   
#define  RX_EN_2                             0x00000040   
#define  RX_EN_1                             0x00000020   
#define  RX_EN_0                             0x00000010   
#define  TX_EN_3                             0x00000008   
#define  TX_EN_2                             0x00000004   
#define  TX_EN_1                             0x00000002   
#define  TX_EN_0                             0x00000001   
 
   uint32 dect_shm_dma_trig_cnt_preset;      /*  0xb000b054  DECT DMA trigger counter preset value                */
   uint32 dect_shm_dma_ddr_saddr_tx_s0;      /*  0xb000b058  DECT DMA DDR buffer starting address for TX slot 0   */
   uint32 dect_shm_dma_ddr_saddr_tx_s1;      /*  0xb000b05c  DECT DMA DDR buffer starting address for TX slot 1   */
   uint32 dect_shm_dma_ddr_saddr_tx_s2;      /*  0xb000b060  DECT DMA DDR buffer starting address for TX slot 2   */
   uint32 dect_shm_dma_ddr_saddr_tx_s3;      /*  0xb000b064  DECT DMA DDR buffer starting address for TX slot 3   */
   uint32 dect_shm_dma_ddr_saddr_rx_s0;      /*  0xb000b068  DECT DMA DDR buffer starting address for RX slot 0   */
   uint32 dect_shm_dma_ddr_saddr_rx_s1;      /*  0xb000b06c  DECT DMA DDR buffer starting address for RX slot 1   */
   uint32 dect_shm_dma_ddr_saddr_rx_s2;      /*  0xb000b070  DECT DMA DDR buffer starting address for RX slot 2   */
   uint32 dect_shm_dma_ddr_saddr_rx_s3;      /*  0xb000b074  DECT DMA DDR buffer starting address for RX slot 3   */
   uint32 dect_shm_dma_ahb_saddr_tx_s01;     /*  0xb000b078  DECT DMA AHB shared memory buffer starting address for TX slots 0 and 1  */
   uint32 dect_shm_dma_ahb_saddr_tx_s23;     /*  0xb000b07c  DECT DMA AHB shared memory buffer starting address for TX slots 2 and 3  */
   uint32 dect_shm_dma_ahb_saddr_rx_s01;     /*  0xb000b080  DECT DMA AHB shared memory buffer starting address for RX slots 0 and 1  */
   uint32 dect_shm_dma_ahb_saddr_rx_s23;     /*  0xb000b084  DECT DMA AHB shared memory buffer starting address for RX slots 2 and 3  */
   uint32 dect_shm_dma_xfer_size_tx;         /*  0xb000b088  DECT DMA TX slots transfer size of each trigger      */
   uint32 dect_shm_dma_xfer_size_rx;         /*  0xb000b08c  DECT DMA RX slots transfer size of each trigger      */
   uint32 dect_shm_dma_buf_size_tx;          /*  0xb000b090  DECT DMA TX slots memory buffer size                 */
   uint32 dect_shm_dma_buf_size_rx;          /*  0xb000b094  DECT DMA RX slots memory buffer size                 */
   uint32 dect_shm_dma_offset_addr_tx_s01;   /*  0xb000b098  DECT DMA access offset address for TX slots 0 and 1  */
   uint32 dect_shm_dma_offset_addr_tx_s23;   /*  0xb000b09c  DECT DMA access offset address for TX slots 2 and 3  */
   uint32 dect_shm_dma_offset_addr_rx_s01;   /*  0xb000b0a0  DECT DMA access offset address for RX slots 0 and 1  */
   uint32 dect_shm_dma_offset_addr_rx_s23;   /*  0xb000b0a4  DECT DMA access offset address for RX slots 2 and 3  */
   uint32 dect_shm_dma_xfer_cntr_tx;         /*  0xb000b0a8  DECT DMA transfer count per slot in number of DMA transfer size */
   uint32 dect_shm_dma_xfer_cntr_rx;         /*  0xb000b0a8  DECT DMA transfer count per slot in number of DMA transfer size */   
} DECTShimDmaControl;

#define DECT_DMA_CTRL ((volatile DECTShimDmaControl * const) DECT_SHIM_DMA_CTRL_BASE)


typedef struct ahbRegisters
{
   uint16 dsp_main_sync0;     /* 0xb0e57f80 DSP main counter outputs sel reg 0 */
   uint16 dsp_main_sync1;     /* 0xb0e57f82 DSP main counter outputs sel reg 1 */
   uint16 dsp_main_cnt;       /* 0xb0e57f84 DSP main counter reg */
   uint16 reserved1;          /* 0xb0e57f86 Reserved */
   uint16 reserved2;          /* 0xb0e57f88 Reserved */
   uint16 reserved3;          /* 0xb0e57f8a Reserved */
   uint16 reserved4;          /* 0xb0e57f8c Reserved */
   uint16 reserved5;          /* 0xb0e57f8e Reserved */
   uint16 reserved6;          /* 0xb0e57f90 Reserved */
   uint16 dsp_ram_out0;       /* 0xb0e57f92 DSP RAM output register 0 */
   uint16 dsp_ram_out1;       /* 0xb0e57f94 DSP RAM output register 1 */
   uint16 dsp_ram_out2;       /* 0xb0e57f96 DSP RAM output register 2 */
   uint16 dsp_ram_out3;       /* 0xb0e57f98 DSP RAM output register 3 */
   uint16 dsp_ram_in0;        /* 0xb0e57f9a DSP RAM input register 0 */
   uint16 dsp_ram_in1;        /* 0xb0e57f9c DSP RAM input register 1 */
   uint16 dsp_ram_in2;        /* 0xb0e57f9e DSP RAM input register 2 */
   uint16 dsp_ram_in3;        /* 0xb0e57fa0 DSP RAM input register 3 */
   uint16 dsp_zcross1_out;    /* 0xb0e57fa2 DSP RAM zero crossing 1 output reg */
   uint16 dsp_zcross2_out;    /* 0xb0e57fa4 DSP RAM zero crossing 2 output reg */
   uint16 reserved7;          /* 0xb0e57fa6 Reserved */
   uint16 reserved8;          /* 0xb0e57fa8 Reserved */
   uint16 reserved9;          /* 0xb0e57faa Reserved */
   uint16 reserved10;         /* 0xb0e57fac Reserved */
   uint16 reserved11;         /* 0xb0e57fae Reserved */
   uint16 reserved12;         /* 0xb0e57fb0 Reserved */
   uint16 reserved13;         /* 0xb0e57fb2 Reserved */
   uint16 reserved14;         /* 0xb0e57fb4 Reserved */
   uint16 reserved15;         /* 0xb0e57fb6 Reserved */
   uint16 reserved16;         /* 0xb0e57fb8 Reserved */
   uint16 reserved17;         /* 0xb0e57fba Reserved */
   uint16 dsp_main_ctrl;      /* 0xb0e57fbc DSP main counter control and preset reg */
   uint16 reserved18;         /* 0xb0e57fbe Reserved */
   uint16 reserved19;         /* 0xb0e57fc0 Reserved */
   uint16 reserved20;         /* 0xb0e57fc2 Reserved */
   uint16 reserved21;         /* 0xb0e57fc4 Reserved */
   uint16 reserved22;         /* 0xb0e57fc6 Reserved */
   uint16 reserved23;         /* 0xb0e57fc8 Reserved */
   uint16 reserved24;         /* 0xb0e57fca Reserved */
   uint16 reserved25;         /* 0xb0e57fce Reserved */
   uint16 dsp_ctrl;           /* 0xb0e57fd0 DSP control reg */
   uint16 dsp_pc;             /* 0xb0e57fd2 DSP program counter */
   uint16 dsp_pc_start;       /* 0xb0e57fd4 DSP program counter start */
   uint16 dsp_irq_start;      /* 0xb0e57fd6 DSP interrupt vector start */
   uint16 dsp_int;            /* 0xb0e57fd8 DSP to system bus interrupt vector */
   uint16 dsp_int_mask;       /* 0xb0e57fda DSP to system bus interrupt vector mask */
   uint16 dsp_int_prio1;      /* 0xb0e57fdc DSP interrupt mux 1 */
   uint16 dsp_int_prio2;      /* 0xb0e57fde DSP interrupt mux 2 */
   uint16 dsp_overflow;       /* 0xb0e57fe0 DSP to system bus interrupt overflow reg */
   uint16 dsp_jtbl_start;     /* 0xb0e57fe2 DSP jump table start address */
   uint16 reserved26;         /* 0xb0e57fe4 Reserved */
   uint16 reserved27;         /* 0xb0e57fe6 Reserved */
   uint16 reserved28;         /* 0xb0e57fe8 Reserved */
   uint16 reserved29;         /* 0xb0e57fea Reserved */
   uint16 reserved30;         /* 0xb0e57fec Reserved */
   uint16 reserved31;         /* 0xb0e57fee Reserved */
   uint16 dsp_debug_inst;     /* 0xb0e57ff0 DSP debug instruction register */
   uint16 reserved32;         /* 0xb0e57ff2 Reserved */
   uint16 dsp_debug_inout_l;  /* 0xb0e57ff4 DSP debug data (LSW) */
   uint16 dsp_debug_inout_h;  /* 0xb0e57ff6 DSP debug data (MSW) */
   uint16 reserved33;         /* 0xb0e57ff8 Reserved */
   uint16 reserved34;         /* 0xb0e57ffa Reserved */
   uint16 reserved35;         /* 0xb0e57ffc Reserved */
   uint16 reserved36;         /* 0xb0e57ffe Reserved */
} ahbRegisters;

/*
** FAP Control Registers
*/
typedef struct CoprocCtlRegs_S
{
  uint32    irq_4ke_mask;    /* 0x00 */
  uint32    irq_4ke_status;  /* 0x04 */
            #define IRQ_FAP_4KE_TIMER                           (1 << 0)
            #define IRQ_FAP_4KE_OUT_FIFO                        (1 << 1)
            #define IRQ_FAP_4KE_IN_FIFO                         (1 << 2)
            #define IRQ_FAP_4KE_DQM                             (1 << 3)
            #define IRQ_FAP_4KE_MBOX_IN                         (1 << 4)
            #define IRQ_FAP_4KE_MBOX_OUT                        (1 << 5)
            #define IRQ_FAP_4KE_GENERAL_PURPOSE_INPUT           (1 << 6)
            #define IRQ_FAP_4KE_ERROR_EB2UBUS_TIMEOUT           (1 << 7)
            #define IRQ_FAP_4KE_ERROR_UB_SLAVE_TIMEOUT          (1 << 8)
            #define IRQ_FAP_4KE_ERROR_UB_SLAVE                  (1 << 9)
            #define IRQ_FAP_4KE_ERROR_UB_MASTER                 (1 << 10)
            #define IRQ_FAP_4KE_ERROR_EB_DQM_OVERFLOW           (1 << 11)
            #define IRQ_FAP_4KE_ERROR_UB_DQM_OVERFLOW           (1 << 12)
            #define IRQ_FAP_4KE_ERROR_DMA0_RX_FIFO_NOT_EMPTY    (1 << 13)
            #define IRQ_FAP_4KE_ERROR_DMA0_TX_FIFO_NOT_EMPTY    (1 << 14)
            #define IRQ_FAP_4KE_ERROR_DMA1_RX_FIFO_NOT_EMPTY    (1 << 15)
            #define IRQ_FAP_4KE_ERROR_DMA1_TX_FIFO_NOT_EMPTY    (1 << 16)
            #define IRQ_FAP_4KE_TIMER_0                         (1 << 17)
            #define IRQ_FAP_4KE_TIMER_1                         (1 << 18)
            #define IRQ_FAP_4KE_TIMER_2                         (1 << 19)

  uint32    irq_mips_mask;   /* 0x08 */
  uint32    irq_mips_status; /* 0x0C */
            #define IRQ_FAP_HOST_TIMER                           (1 << 0)
            #define IRQ_FAP_HOST_DQM                             (1 << 3)
            #define IRQ_FAP_HOST_MBOX_IN                         (1 << 4)
            #define IRQ_FAP_HOST_MBOX_OUT                        (1 << 5)
            #define IRQ_FAP_HOST_GENERAL_PURPOSE_INPUT           (1 << 6)
            #define IRQ_FAP_HOST_ERROR_EB2UBUS_TIMEOUT           (1 << 7)
            #define IRQ_FAP_HOST_ERROR_UB_SLAVE_TIMEOUT          (1 << 8)
            #define IRQ_FAP_HOST_ERROR_UB_SLAVE                  (1 << 9)
            #define IRQ_FAP_HOST_ERROR_UB_MASTER                 (1 << 10)
            #define IRQ_FAP_HOST_ERROR_EB_DQM_OVERFLOW           (1 << 11)
            #define IRQ_FAP_HOST_ERROR_UB_DQM_OVERFLOW           (1 << 12)
            #define IRQ_FAP_HOST_ERROR_DMA0_RX_FIFO_NOT_EMPTY    (1 << 13)
            #define IRQ_FAP_HOST_ERROR_DMA0_TX_FIFO_NOT_EMPTY    (1 << 14)
            #define IRQ_FAP_HOST_ERROR_DMA1_RX_FIFO_NOT_EMPTY    (1 << 15)
            #define IRQ_FAP_HOST_ERROR_DMA1_TX_FIFO_NOT_EMPTY    (1 << 16)
            #define IRQ_FAP_HOST_TIMER_0                         (1 << 17)
            #define IRQ_FAP_HOST_TIMER_1                         (1 << 18)
            #define IRQ_FAP_HOST_TIMER_2                         (1 << 19)

  uint32    gp_mask;         /* 0x10 */
  uint32    gp_status;       /* 0x14 */
            #define IRQ_FAP_GP_TIMER_0                         (1 << 0)
            #define IRQ_FAP_GP_TIMER_1                         (1 << 1)
            #define IRQ_FAP_GP_MBOX_IN                         (1 << 2)
            #define IRQ_FAP_GP_MBOX_OUT                        (1 << 3)
            #define IRQ_FAP_GP_ERROR_EB2UBUS_TIMEOUT           (1 << 4)
            #define IRQ_FAP_GP_ERROR_UB_SLAVE_TIMEOUT          (1 << 5)
            #define IRQ_FAP_GP_ERROR_UB_SLAVE                  (1 << 6)
            #define IRQ_FAP_GP_ERROR_UB_MASTER                 (1 << 7)
            #define IRQ_FAP_GP_ERROR_EB_DQM_OVERFLOW           (1 << 8)
            #define IRQ_FAP_GP_ERROR_UB_DQM_OVERFLOW           (1 << 9)
            #define IRQ_FAP_GP_ERROR_DMA0_RX_FIFO_NOT_EMPTY    (1 << 10)
            #define IRQ_FAP_GP_ERROR_DMA0_TX_FIFO_NOT_EMPTY    (1 << 11)
            #define IRQ_FAP_GP_ERROR_DMA1_RX_FIFO_NOT_EMPTY    (1 << 12)
            #define IRQ_FAP_GP_ERROR_DMA1_TX_FIFO_NOT_EMPTY    (1 << 13)
            #define IRQ_FAP_GP_TIMER_2                         (1 << 14)

  uint32    gp_tmr0_ctl;     /* 0x18 */
            #define   TIMER_ENABLE                     0x80000000
            #define   TIMER_MODE_REPEAT                0x40000000
            #define   TIMER_COUNT_MASK                 0x3fffffff
  uint32    gp_tmr0_cnt;     /* 0x1C */
  uint32    gp_tmr1_ctl;     /* 0x20 */
  uint32    gp_tmr1_cnt;     /* 0x24 */
  uint32    host_mbox_in;    /* 0x28 */
  uint32    host_mbox_out;   /* 0x2C */
  uint32    gp_out;          /* 0x30 */
  uint32    gp_in;           /* 0x34 */
            #define GP_IN_TAM_IRQ_MASK                 0x80000000
            #define GP_IN_SEGDMA_IRQ_MASK              0x00000002
            #define GP_IN_USPP_BUSY_FLAG               0x00000001
  uint32    gp_in_irq_mask;  /* 0x38 */
            #define GP_IN_BASE4_IRQ_MASK               0x80000000
            #define GP_IN_BASE4_IRQ_SHIFT              31
  uint32    gp_in_irq_status;/* 0x3C */
            #define GP_IN_IRQ_STATUS_MASK              0x0000FFFF
            #define GP_IN_IRQ_STATUS_SHIFT             0
  uint32    dma_control;     /* 0x40 */
            #define DMA1_RESULT_FIFO_DEPTH_MASK        0x0000F000
            #define DMA1_RESULT_FIFO_DEPTH_SHIFT       12
            #define DMA1_CMD_FIFO_AVAIL_MASK           0x00000F00
            #define DMA1_CMD_FIFO_AVAIL_SHIFT          8
            #define DMA0_RESULT_FIFO_DEPTH_MASK        0x000000F0
            #define DMA0_RESULT_FIFO_DEPTH_SHIFT       4
            #define DMA0_CMD_FIFO_AVAIL_MASK           0x0000000F
            #define DMA0_CMD_FIFO_AVAIL_SHIFT          0
  uint32    dma_status;      /* 0x44 */
            #define DMA_STS_DMA1_RSLT_FULL_BIT         0x00000080
            #define DMA_STS_DMA1_RSLT_EMPTY_BIT        0x00000040
            #define DMA_STS_DMA1_CMD_FULL_BIT          0x00000020
            #define DMA_STS_DMA1_BUSY                  0x00000010
            #define DMA_STS_DMA1_SHIFT                 4
            #define DMA_STS_DMA0_RSLT_FULL_BIT         0x00000008
            #define DMA_STS_DMA0_RSLT_EMPTY_BIT        0x00000004
            #define DMA_STS_DMA0_CMD_FULL_BIT          0x00000002
            #define DMA_STS_DMA0_BUSY                  0x00000001
  uint32    dma0_3_fifo_status; /* 0x48 */
  uint32    dma4_7_fifo_status; /* 0x4C */
            #define DMA_FIFO_STS_DMAi_RSLT_DEPTH_MSK   0x000000F0
            #define DMA_FIFO_STS_DMAi_CMD_ROOM_MSK     0x0000000F
            #define DMA_FIFO_STS_DMAi_RSLT_DEPTH_SHIFT 4
  uint32    dma_irq_sts;        /* 0x50 */
  uint32    dma_4ke_irq_mask;   /* 0x54 */
  uint32    dma_host_irq_mask;  /* 0x58 */
  uint32    diag_cntrl;         /* 0x5C */
  uint32    diag_hi;            /* 0x60 */
  uint32    diag_lo;            /* 0x64 */
  uint32    bad_address;        /* 0x68 */
  uint32    addr1_mask;         /* 0x6C */
  uint32    addr1_base_in;      /* 0x70 */
  uint32    addr1_base_out;     /* 0x74 */
  uint32    addr2_mask;         /* 0x78 */
  uint32    addr2_base_in;      /* 0x7C */
  uint32    addr2_base_out;     /* 0x80 */
  uint32    scratch;            /* 0x84 */
  uint32    mbist_tm;           /* 0x88 */
  uint32    soft_resets;        /* 8C active high */
            #define SOFT_RESET_DMA                    0x00000004
            #define SOFT_RESET_BASE4                  0x00000002
            #define SOFT_RESET_4KE                    0x00000001
  uint32    eb2ubus_timeout;    /* 0x90 */
            #define EB2UBUS_TIMEOUT_EN                0x80000000 
            #define EB2UBUS_TIMEOUT_MASK              0x0000FFFF
            #define EB2UBUS_TIMEOUT_SHIFT             0
  uint32    m4ke_core_status;   /* 0x94 */
  uint32    gp_in_irq_sense;    /* 0x98 */
  uint32    ub_slave_timeout;   /* 0x9C */
            #define UB_SLAVE_TIMEOUT_EN               0x80000000 
            #define UB_SLAVE_TIMEOUT_MASK             0x0000FFFF
            #define UB_SLAVE_TIMEOUT_SHIFT            0
  uint32    diag_en;            /* 0xA0 */
  uint32    dev_timeout;        /* 0xA4 */
  uint32    ubus_error_out_mask;/* 0xA8 */
  uint32    diag_capt_stop_mask;/* 0xAC */
            #define BASE4_ERROR_MASK                  0x80000000 
  uint32    rev_id;             /* 0xB0 */
  uint32    gp_tmr2_ctl;        /* 0xB4 */
  uint32    gp_tmr2_cnt;        /* 0xB8 */


} CoprocCtlRegs_S;


/* Outgoing Message FIFO */
typedef struct OGMsgFifoRegs_S
{
  uint32    og_msg_ctl;
  uint32    og_msg_sts;
  uint32    resv[14];
  uint32    og_msg_data;
} OGMsgFifoRegs_S;


/* Incoming Message FIFO */
typedef struct INMsgFifoRegs_S
{
  uint32    in_msg_ctl;
/* Not documented            #define   NUM_MSG_IN_FIFO_MASK            0x001F0000 */
/* Not documented            #define   NUM_MSG_IN_FIFO_OFFSET          16 */
            #define   NOT_EMPTY_IRQ_STS_MASK          0x00008000
            #define   NOT_EMPTY_IRQ_STS_OFFSET        15
            #define   ERR_IRQ_STS_MASK                0x00004000
            #define   ERR_IRQ_STS_OFFSET              14
            #define   LOW_WTRMRK_IRQ_STS_MASK         0x00002000
            #define   LOW_WTRMRK_IRQ_MSK_OFFSET       13
            #define   MSG_RCVD_IRQ_STS_MASK           0x00001000
            #define   MSG_RCVD_IRQ_MSK_OFFSET         12
            #define   LOW_WATER_MARK_MASK             0x0000003F
            #define   LOW_WATER_MARK_SHIFT            0
            #define   AVAIL_FIFO_SPACE_MASK           0x0000003F
            #define   AVAIL_FIFO_SPACE_OFFSET         0
  uint32    in_msg_sts;
            #define INMSG_NOT_EMPTY_STS_BIT           0x80000000
            #define INMSG_NOT_EMPTY_STS_SHIFT         31
            #define INMSG_ERR_STS_BIT                 0x40000000
            #define INMSG_ERR_STS_SHIFT               30
            #define INMSG_LOW_WATER_STS_BIT           0x20000000
            #define INMSG_LOW_WATER_STS_SHIFT         29
            #define INMSG_MSG_RX_STS_BIT              0x10000000
            #define INMSG_MSG_RX_STS_SHIFT            28
            #define INMSG_RESERVED1_MASK              0x0fc00000
            #define INMSG_RESERVED1_SHIFT             22
            #define INMSG_NUM_MSGS_MASK               0x003F0000
            #define INMSG_NUM_MSGS_SHIFT              16
            #define INMSG_NOT_EMPTY_IRQ_STS_BIT       0x00008000
            #define INMSG_NOT_EMPTY_IRQ_STS_SHIFT     15
            #define INMSG_ERR_IRQ_STS_BIT             0x00004000
            #define INMSG_ERR_IRQ_STS_SHIFT           14
            #define INMSG_LOW_WATER_IRQ_STS_BIT       0x00002000
            #define INMSG_LOW_WATER_IRQ_STS_SHIFT     13
            #define INMSG_MSG_RX_IRQ_STS_BIT          0x00001000
            #define INMSG_MSG_RX_IRQ_STS_SHIFT        12
            #define INMSG_RESERVED2_MASK              0x00000fc0
            #define INMSG_RESERVED2_SHIFT             6
            #define INMSG_AVAIL_FIFO_SPACE_MASK       0x0000003f
            #define INMSG_AVAIL_FIFO_SPACE_SHIFT      0
  uint32    resv[13];
  uint32    in_msg_last;
  uint32    in_msg_data;
} INMsgFifoRegs_S;


/* DMA Registers */
typedef struct mDma_regs_S 
{
  uint32    dma_source;         /* 0x00 */
  uint32    dma_dest;           /* 0x04 */
  uint32    dma_cmd_list;       /* 0x08 */
            #define DMA_CMD_MEMSET                   0x08000000
            #define DMA_CMD_REPLACE_LENGTH           0x07000000
            #define DMA_CMD_INSERT_LENGTH            0x06000000
            #define DMA_CMD_CHECKSUM2                0x05000000
            #define DMA_CMD_CHECKSUM1                0x04000000
            #define DMA_CMD_DELETE                   0x03000000
            #define DMA_CMD_REPLACE                  0x02000000
            #define DMA_CMD_INSERT                   0x01000000
            #define DMA_CMD_OPCODE_MASK              0xFF000000
            #define DMA_CMD_OPCODE_SHIFT             24
            #define DMA_CMD_OFFSET_MASK              0x00FFFF00
            #define DMA_CMD_OFFSET_SHIFT             8
            #define DMA_CMD_LENGTH_MASK              0x000000FF
            #define DMA_CMD_LENGTH_SHIFT             0
  uint32    dma_len_ctl;        /* 0x0c */
            #define DMA_CTL_LEN_LENGTH_N_VALUE_MASK  0xFFFC0000
            #define DMA_CTL_LEN_LENGTH_N_VALUE_SHIFT 18
            #define DMA_CTL_LEN_WAIT_BIT             0x00020000 
            #define DMA_CTL_LEN_EXEC_CMD_LIST_BIT    0x00010000 
            #define DMA_CTL_LEN_DEST_ADDR_MASK       0x0000C000 
            #define DMA_CTL_LEN_DEST_IS_TOKEN_MASK   0x0000C000 
            #define DMA_CTL_LEN_DEST_IS_TOKEN_SHIFT  14 
            #define DMA_CTL_LEN_SRC_IS_TOKEN_BIT     0x00002000 
            #define DMA_CTL_LEN_CONTINUE_BIT         0x00001000
            #define DMA_CTL_LEN_LEN_MASK             0x00000FFF
  uint32    dma_rslt_source;    /* 0x10 */
  uint32    dma_rslt_dest;      /* 0x14 */
  uint32    dma_rslt_hcs;       /* 0x18 */
            #define DMA_RSLT_HCS_HCS0_MASK           0x0000FFFF
            #define DMA_RSLT_HCS_HCS0_SHIFT          0
            #define DMA_RSLT_HCS_HCS1_MASK           0xFFFF0000
            #define DMA_RSLT_HCS_HCS1_SHIFT          16
  uint32    dma_rslt_len_stat;  /* 0x1C */
            #define DMA_RSLT_ERROR_MASK              0x003FE000
            #define DMA_RSLT_NOT_END_CMDS            0x00200000
            #define DMA_RSLT_FLUSHED                 0x00100000
            #define DMA_RSLT_ABORTED                 0x00080000
            #define DMA_RSLT_ERR_CMD_FMT             0x00040000
            #define DMA_RSLT_ERR_DEST                0x00020000
            #define DMA_RSLT_ERR_SRC                 0x00010000
            #define DMA_RSLT_ERR_CMD_LIST            0x00008000
            #define DMA_RSLT_ERR_DEST_LEN            0x00004000
            #define DMA_RSLT_ERR_SRC_LEN             0x00002000
            #define DMA_RSLT_CONTINUE                0x00001000
            #define DMA_RSLT_DMA_LEN                 0x00000FFF
} mDma_regs_S;


typedef struct DMARegs_S 
{
  mDma_regs_S    dma_ch[2];
} DMARegs_S;


/* Token Registers */
typedef struct TknIntfRegs_S /* 0x1400 */
{
  uint32    tok_buf_size;    /* 0x00 */
  uint32    tok_buf_base;    /* 0x04 */
  uint32    tok_idx2ptr_idx; /* 0x08 */
  uint32    tok_idx2ptr_ptr; /* 0x0c */
} TknIntfRegs_S;

/* Performance Measurement Registers on 4ke */
typedef struct PMRegs_S
{
  uint32        DCacheHit;      /* n/a  */
  uint32        DCacheMiss;     /* n/a  */
  uint32        ICacheHit;      /* 0x08 */
  uint32        ICacheMiss;     /* 0x0c */
  uint32        InstnComplete;  /* 0x10 */
  uint32        WTBMerge;       /* n/a  */
  uint32        WTBNoMerge;     /* n/a  */
} PMRegs_S;

/* MessageID Registers */
typedef struct MsgIdRegs_S
{
  uint32    msg_id[64];
} MsgIdRegs_S;


/* DQM Control Registers */
typedef struct DQMCtlRegs_S   /* 0x1800 */
{
  uint32        cfg;                        /* 0x00 */
                #define DQM_CFG_TOT_MEM_SZ_MASK      0xFFFF0000
                #define DQM_CFG_TOT_MEM_SZ_SHIFT     16
                #define DQM_CFG_START_ADDR_MASK      0x0000FFFF
                #define DQM_CFG_START_ADDR_SHIFT     0
  uint32        _4ke_low_wtmk_irq_msk;      /* 0x04 */
  uint32        mips_low_wtmk_irq_msk;      /* 0x08 */
  uint32        low_wtmk_irq_sts;           /* 0x0c */
  uint32        _4ke_not_empty_irq_msk;     /* 0x10 */
  uint32        mips_not_empty_irq_msk;     /* 0x14 */
  uint32        not_empty_irq_sts;          /* 0x18 */
  uint32        queue_rst;                  /* 0x1c */
  uint32        not_empty_sts;              /* 0x20 */
  uint32        next_avail_mask;            /* 0x24 */
  uint32        next_avail_queue;           /* 0x28 */
} DQMCtlRegs_S;

/* FAP_TBD: double check this too... */
/* DQM Queue Control */
typedef struct DQMQRegs_S
{
  uint32        size;   /* 0x00 */
                #define Q_HEAD_PTR_MASK                     0xFFFC0000
                #define Q_HEAD_PTR_SHIFT                    18
                #define Q_TAIL_PTR_MASK                     0x0003FFF0
                #define Q_TAIL_PTR_SHIFT                    4
                #define Q_TOKEN_SIZE_MASK                   0x00000003
                #define Q_TOKEN_SIZE_SHIFT                  0
  uint32        cfgA;   /* 0x04 */
                #define Q_SIZE_MASK                         0xffff0000
                #define Q_SIZE_SHIFT                        16
                #define Q_START_ADDR_MASK                   0x0000ffff
                #define Q_START_ADDR_SHIFT                  0
  uint32        cfgB;   /* 0x08 */
                #define Q_NUM_TKNS_MASK                     0x3fff0000
                #define Q_NUM_TKNS_SHIFT                    16
                #define Q_LOW_WATERMARK_MASK                0x00003fff
                #define Q_LOW_WATERMARK_SHIFT               0
  uint32        sts;    /* 0x0c */
                #define AVAIL_TOKEN_SPACE_MASK              0x00003FFF
} DQMQRegs_S;

typedef struct DQMQCntrlRegs_S
{
  DQMQRegs_S q[32];
} DQMQCntrlRegs_S;

/* DQM Queue Data */
typedef struct DQMQueueDataReg_S
{
  uint32        word0;   /* 0x00 */
  uint32        word1;   /* 0x04 */
  uint32        word2;   /* 0x08 */
  uint32        word3;   /* 0x0c */
} DQMQueueDataReg_S;

typedef struct DQMQDataRegs_S
{
  DQMQueueDataReg_S q[32];
} DQMQDataRegs_S;


/* DQM Queue MIB */
typedef struct DQMQMibRegs_S 
{
  uint32          MIB_NumFull[32];
  uint32          MIB_NumEmpty[32];
  uint32          MIB_TokensPushed[32];

} DQMQMibRegs_S;

/* DPE Basic Control Registers */
typedef struct DpeBasicRegs_S
{
  uint32        basic_ffe_cmd_word0;        /* 0x00 */
                #define DPE_CMD_WORD0_CMD_SHIFT           30
                #define DPE_CMD_WORD0_CMD_MASK            0xC0000000
                #define DPE_CMD_WORD0_PKT_MEM_SLOT_SHIFT  27
                #define DPE_CMD_WORD0_PKT_MEM_SLOT_MASK   0x38000000
                #define DPE_CMD_WORD0_NUG_MEM_SLOT_SHIFT  24
                #define DPE_CMD_WORD0_NUG_MEM_SLOT_MASK   0x07000000
                #define DPE_CMD_WORD0_BUF_LEN_SHIFT       15
                #define DPE_CMD_WORD0_BUF_LEN_MASK        0x00FF8000
                #define DPE_CMD_WORD0_FFE_PC_SHIFT        0
                #define DPE_CMD_WORD0_FFE_PC_MASK         0x00007FFF
  uint32        basic_ffe_cmd_word1;        /* 0x04 */
                #define DPE_CMD_WORD1_MPEG_CMD_SHIFT      31
                #define DPE_CMD_WORD1_MPEG_CMD_MASK       0x80000000
                #define DPE_CMD_WORD1_DMA_ADDR_SHIFT      0
                #define DPE_CMD_WORD1_DMA_ADDR_MASK       0x0000FFFF
  uint32        basic_ffe_sts_word0;      /* 0x08 */
                #define DPE_STS_WORD0_FIFO_DEPTH_SHIFT    27
                #define DPE_STS_WORD0_FIFO_DEPTH_MASK     0xF8000000
                #define DPE_STS_WORD0_DMA_XFER_ERR_SHIFT  26
                #define DPE_STS_WORD0_DMA_XFER_ERR_MASK   0x04000000
                #define DPE_STS_WORD0_PKT_MEM_SLOT_SHIFT  23
                #define DPE_STS_WORD0_PKT_MEM_SLOT_MASK   0x03800000
                #define DPE_STS_WORD0_NUG_MEM_SLOT_SHIFT  20
                #define DPE_STS_WORD0_NUG_MEM_SLOT_MASK   0x00700000
                #define DPE_STS_WORD0_FFE_RETURN_VALUE0_SHIFT       0
                #define DPE_STS_WORD0_FFE_RETURN_VALUE0_MASK        0x0000FFFF
  uint32        basic_ffe_sts_word1;      /* 0x0c */
                #define DPE_STS_WORD1_FFE_RETURN_VALUE1_SHIFT       0
                #define DPE_STS_WORD1_FFE_RETURN_VALUE1_MASK        0xFFFFFFFF
  uint32        basic_dpe_config;     /* 0x10 */
                #define DPE_CONFIG_MPEG_MODE_SHIFT                   2
                #define DPE_CONFIG_MPEG_MODE_MASK                    0x00000004
                #define DPE_CONFIG_ENALBE_FFE_COMMAND_SHIFT          1
                #define DPE_CONFIG_ENALBE_FFE_COMMAND_MASK           0x00000002
                #define DPE_CONFIG_FFE_RESET_N_SHIFT                 0
                #define DPE_CONFIG_FFE_RESET_N_MASK                  0x00000001
  uint32        basic_cmd_fifo_1_status;     /* 0x14 */
                #define DPE_FIFO_STS_FULL_SHIFT                      31
                #define DPE_FIFO_STS_FULL_MASK                       0x80000000
                #define DPE_FIFO_STS_NOT_EMPTY_SHIFT                 30
                #define DPE_FIFO_STS_NOT_EMPTY_MASK                  0x40000000
                #define DPE_FIFO_STS_UNDERRUN_SHIFT                  29
                #define DPE_FIFO_STS_UNDERRUN_MASK                   0x20000000
                #define DPE_FIFO_STS_OVERRUN_SHIFT                   28
                #define DPE_FIFO_STS_OVERRUN_MASK                    0x10000000
                #define DPE_FIFO_STS_WPTR_SHIFT                      16
                #define DPE_FIFO_STS_WPTR_MASK                       0x001F0000
                #define DPE_FIFO_STS_RPTR_SHIFT                      8
                #define DPE_FIFO_STS_RPTR_MASK                       0x00001F00
                #define DPE_FIFO_STS_DEPTH_SHIFT                     0
                #define DPE_FIFO_STS_DEPTH_MASK                      0x0000001F
  uint32        basic_cmd_fifo_2_status;          /* 0x18 */
  uint32        basic_sts_fifo_1_status;          /* 0x1c */
  uint32        basic_sts_fifo_2_status;          /* 0x20 */
  uint32        basic_dma_fifo_status;            /* 0x24 */
  uint32        basic_dma_ctrl_fifo_status;       /* 0x28 */
  uint32        basic_fifo_status;                /* 0x2c */
  uint32        basic_fifo_status_mask;           /* 0x30 */
                #define DPE_CMD_FIFO_1_FULL_MASK                     0x80000000
                #define DPE_CMD_FIFO_1_NOT_EMPTY_MASK                0x40000000
                #define DPE_CMD_FIFO_1_UNDERRUN_MASK                 0x20000000
                #define DPE_CMD_FIFO_1_OVERRUN_MASK                  0x10000000
                #define DPE_CMD_FIFO_2_FULL_MASK                     0x08000000
                #define DPE_CMD_FIFO_2_NOT_EMPTY_MASK                0x04000000
                #define DPE_CMD_FIFO_2_UNDERRUN_MASK                 0x02000000
                #define DPE_CMD_FIFO_2_OVERRUN_MASK                  0x01000000
                #define DPE_STS_FIFO_1_FULL_MASK                     0x00800000
                #define DPE_STS_FIFO_1_NOT_EMPTY_MASK                0x00400000
                #define DPE_STS_FIFO_1_UNDERRUN_MASK                 0x00200000
                #define DPE_STS_FIFO_1_OVERRUN_MASK                  0x0010000
                #define DPE_STS_FIFO_2_FULL_MASK                     0x00080000
                #define DPE_STS_FIFO_2_NOT_EMPTY_MASK                0x00040000
                #define DPE_STS_FIFO_2_UNDERRUN_MASK                 0x00020000
                #define DPE_STS_FIFO_2_OVERRUN_MASK                  0x00010000
                #define DPE_DMA_FIFO_1_FULL_MASK                     0x00008000
                #define DPE_DMA_FIFO_1_NOT_EMPTY_MASK                0x00004000
                #define DPE_DMA_FIFO_1_UNDERRUN_MASK                 0x00002000
                #define DPE_DMA_FIFO_1_OVERRUN_MASK                  0x00001000
                #define DPE_DMA_CTRL_FIFO_2_FULL_MASK                0x00000800
                #define DPE_DMA_CTRL_FIFO_2_NOT_EMPTY_MASK           0x00000400
                #define DPE_DMA_CTRL_FIFO_2_UNDERRUN_MASK            0x00000200
                #define DPE_DMA_CTRL_FIFO_2_OVERRUN_MASK             0x00000100
  uint32        basic_mpeg_fifo_status;     /* 0x34 */
  uint32        basic_mpeg_status;          /* 0x38 */
  uint32        basic_mpeg_status_mask;     /* 0x3c */
  uint32        basic_mpeg_timestamp;       /* 0x40 */
  uint32        basic_ffe_status;           /* 0x44 */
  uint32        basic_ffe_status_mask;      /* 0x48 */
                #define DPE_FFE_STATUS_UNSUP_CRC_TYPE_MASK           0x00000008
                #define DPE_FFE_STATUS_UNSUP_CRC_POLY_MASK           0x00000004
                #define DPE_FFE_STATUS_HALT_IN_ISR_MASK              0x00000002
                #define DPE_FFE_STATUS_INVALID_OPCODE_MASK           0x00000001
  uint32        basic_dpe_interrupt;        /* 0x4c */
                #define DPE_INTERRUPT_FFE_MASK                       0x00000004
                #define DPE_INTERRUPT_MPEG_MASK                      0x00000002
                #define DPE_INTERRUPT_BASIC_MASK                     0x00000001
  uint32        basic_dpe_debug_state_codes;/* 0x50 */
  uint32        basic_ffe_debug1;           /* 0x54 */
  uint32        basic_ffe_debug2;           /* 0x58 */
  uint32        basic_ffe_ctrl1;            /* 0x5c */
                #define DPE_BASIC_FFE_CTRL1_INT_DISABLE_MASK         0x00000001
  uint32        basic_ffe_ctrl2;            /* 0x60 */
  uint32        basic_diag_control;         /* 0x64 */
  uint32        basic_diag_out;             /* 0x68 */
  uint32        basic_dpe_revision;         /* 0x6c */
  uint32        basic_ffe_revision;         /* 0x70 */
} DpeBasicRegs_S;

typedef struct MiscIrqRegs_S
{
    uint32 extra2ChipIrqStatus; //2C
           #define IRQ_CHIP_ENETSW_TX_DMA_0     (1 << 0)
           #define IRQ_CHIP_ENETSW_TX_DMA_1     (1 << 1)
           #define IRQ_CHIP_ENETSW_TX_DMA_2     (1 << 2)
           #define IRQ_CHIP_ENETSW_TX_DMA_3     (1 << 3)
           #define IRQ_CHIP_SAR                 (1 << 4)
           #define IRQ_CHIP_RTC                 (1 << 5)
           #define IRQ_CHIP_ENETSW              (1 << 6)

    uint32 reserved1;  // 30
    uint32 reserved2;  // 34

    uint32 fapIrqMask;      // 38    /* 4ke IRQ mask bits for chipIrqStatus */
    uint32 extraFapIrqMask; // 3C    /* 4ke IRQ mask bits for extraChipIrqStatus*/
    uint32 extra2FapIrqMask;  // 40  /* 4ke IRQ mask bits for extra2ChipIrqStatus */
} MiscIrqRegs_S;

typedef struct ChipIrqStatusRegs_S   /* (0xB0000028) */
{
    uint32 extraChipIrqStatus;
           #define IRQ_CHIP_ENETSW_RX_DMA_0     (1 << 0)
           #define IRQ_CHIP_ENETSW_RX_DMA_1     (1 << 1)
           #define IRQ_CHIP_ENETSW_RX_DMA_2     (1 << 2)
           #define IRQ_CHIP_ENETSW_RX_DMA_3     (1 << 3)
           #define IRQ_CHIP_PCM_DMA_0           (1 << 4)
           #define IRQ_CHIP_PCM_DMA_1           (1 << 5)
           #define IRQ_CHIP_DECT_0              (1 << 6)
           #define IRQ_CHIP_DECT_1              (1 << 7)
           #define IRQ_CHIP_EXTERNAL_0          (1 << 8)
           #define IRQ_CHIP_EXTERNAL_1          (1 << 9)
           #define IRQ_CHIP_EXTERNAL_2          (1 << 10)
           #define IRQ_CHIP_EXTERNAL_3          (1 << 11)
           #define IRQ_CHIP_SAR_DMA_0           (1 << 12)
           #define IRQ_CHIP_SAR_DMA_1           (1 << 13)
           #define IRQ_CHIP_SAR_DMA_2           (1 << 14)
           #define IRQ_CHIP_SAR_DMA_3           (1 << 15)
           #define IRQ_CHIP_SAR_DMA_4           (1 << 16)
           #define IRQ_CHIP_SAR_DMA_5           (1 << 17)
           #define IRQ_CHIP_SAR_DMA_6           (1 << 18)
           #define IRQ_CHIP_SAR_DMA_7           (1 << 19)
           #define IRQ_CHIP_SAR_DMA_8           (1 << 20)
           #define IRQ_CHIP_SAR_DMA_9           (1 << 21)
           #define IRQ_CHIP_SAR_DMA_10          (1 << 22)
           #define IRQ_CHIP_SAR_DMA_11          (1 << 23)
           #define IRQ_CHIP_SAR_DMA_12          (1 << 24)
           #define IRQ_CHIP_SAR_DMA_13          (1 << 25)
           #define IRQ_CHIP_SAR_DMA_14          (1 << 26)
           #define IRQ_CHIP_SAR_DMA_15          (1 << 27)
           #define IRQ_CHIP_SAR_DMA_16          (1 << 28)
           #define IRQ_CHIP_SAR_DMA_17          (1 << 29)
           #define IRQ_CHIP_SAR_DMA_18          (1 << 30)
           #define IRQ_CHIP_SAR_DMA_19          (1 << 31)

    uint32 chipIrqStatus;
           #define IRQ_CHIP_TIMER               (1 << 0)
           #define IRQ_CHIP_RING_OSC            (1 << 1)
           #define IRQ_CHIP_LS_SPIM             (1 << 2)
           #define IRQ_CHIP_UART_0              (1 << 3)
           #define IRQ_CHIP_UART_1              (1 << 4)
           #define IRQ_CHIP_HS_SPIM             (1 << 5)
           #define IRQ_CHIP_WLAN_GPIO           (1 << 6)
           #define IRQ_CHIP_WLAN                (1 << 7)
           #define IRQ_CHIP_IPSEC               (1 << 8)
           #define IRQ_CHIP_USBH                (1 << 9)
           #define IRQ_CHIP_USBH20              (1 << 10)
           #define IRQ_CHIP_USBS                (1 << 11)
           #define IRQ_CHIP_NAND_FLASH          (1 << 12)
           #define IRQ_CHIP_PCM                 (1 << 13)
           #define IRQ_CHIP_EPHY                (1 << 14)
           #define IRQ_CHIP_DG                  (1 << 15)
           #define IRQ_CHIP_EPHY_ENERGY_0       (1 << 16)
           #define IRQ_CHIP_EPHY_ENERGY_1       (1 << 17)
           #define IRQ_CHIP_EPHY_ENERGY_2       (1 << 18)
           #define IRQ_CHIP_EPHY_ENERGY_3       (1 << 19)
           #define IRQ_CHIP_USB_CNTL_RX_DMA     (1 << 20)
           #define IRQ_CHIP_USB_CNTL_TX_DMA     (1 << 21)
           #define IRQ_CHIP_USB_BULK_RX_DMA     (1 << 22)
           #define IRQ_CHIP_USB_BULK_TX_DMA     (1 << 23)
           #define IRQ_CHIP_USB_ISO_RX_DMA      (1 << 24)
           #define IRQ_CHIP_USB_ISO_TX_DMA      (1 << 25)
           #define IRQ_CHIP_IPSEC_DMA_0         (1 << 26)
           #define IRQ_CHIP_IPSEC_DMA_1         (1 << 27)
           #define IRQ_CHIP_XDSL                (1 << 28)
           #define IRQ_CHIP_FAP                 (1 << 29)
           #define IRQ_CHIP_PCIE_RC             (1 << 30)
           #define IRQ_CHIP_PCIE_EP             (1 << 31)
} ChipIrqStatusRegs_S;


#define AHB_REGISTERS ((volatile ahbRegisters * const) DECT_AHB_REG_BASE)


#ifdef __cplusplus
}
#endif

#endif

