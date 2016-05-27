/*
 * Copyright 2016, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

#ifndef __PLAT_MACHINE_H
#define __PLAT_MACHINE_H

#include <arch/machine/gic_pl390.h>

#define N_INTERRUPTS 192

enum IRQConstants {
    INTERRUPT_SGI_0                 = 0,
    INTERRUPT_SGI_1                 = 1,
    INTERRUPT_SGI_2                 = 2,
    INTERRUPT_SGI_3                 = 3,
    INTERRUPT_SGI_4                 = 4,
    INTERRUPT_SGI_5                 = 5,
    INTERRUPT_SGI_6                 = 6,
    INTERRUPT_SGI_7                 = 7,
    INTERRUPT_SGI_8                 = 8,
    INTERRUPT_SGI_9                 = 9,
    INTERRUPT_SGI_10                = 10,
    INTERRUPT_SGI_11                = 11,
    INTERRUPT_SGI_12                = 12,
    INTERRUPT_SGI_13                = 13,
    INTERRUPT_SGI_14                = 14,
    INTERRUPT_SGI_15                = 15,
    INTERRUPT_PPI_0                 = 16,
    INTERRUPT_PPI_1                 = 17,
    INTERRUPT_PPI_2                 = 18,
    INTERRUPT_PPI_3                 = 19,
    INTERRUPT_PPI_4                 = 20,
    INTERRUPT_PPI_5                 = 21,
    INTERRUPT_PPI_6                 = 22,
    INTERRUPT_PPI_7                 = 23,
    INTERRUPT_PPI_8                 = 24,
    INTERRUPT_PPI_9                 = 25,
    INTERRUPT_PPI_10                = 26,
    INTERRUPT_PPI_11                = 27,
    INTERRUPT_PPI_12                = 28,
    INTERRUPT_PPI_13                = 29,
    INTERRUPT_PPI_14                = 30,
    INTERRUPT_PPI_15                = 31,
    INTERRUPT_TMR1                  = 32,
    INTERRUPT_TMR2                  = 33,
    INTERRUPT_RTC                   = 34,
    INTERRUPT_CEC                   = 35,
    INTERRUPT_SHR_SEM_INBOX_FULL    = 36,
    INTERRUPT_SHR_SEM_INBOX_EMPTY   = 37,
    INTERRUPT_SHR_SEM_OUTBOX_FULL   = 38,
    INTERRUPT_SHR_SEM_OUTBOX_EMPTY  = 39,
    INTERRUPT_VDE_UCQ               = 40,
    INTERRUPT_VDE_SYNC_TOKEN        = 41,
    INTERRUPT_VDE_BSEV              = 42,
    INTERRUPT_VDE_BSEA              = 43,
    INTERRUPT_VDE_SXE               = 44,
    INTERRUPT_SATA_RX_STAT          = 45,
    INTERRUPT_SDMMC1                = 46,
    INTERRUPT_SDMMC2                = 47,
//  RESERVED                        = 48,
    INTERRUPT_VDE                   = 49,
    INTERRUPT_AVP_UCQ               = 50,
    INTERRUPT_SDMMC3                = 51,
    INTERRUPT_USB                   = 52,
    INTERRUPT_KEYPAD                = 53,
    INTERRUPT_USB2                  = 54,
//  RESERVED                        = 55,
    INTERRUPT_SATA_CTL              = 56,
//  RESERVED                        = 57,
    INTERRUPT_VCP                   = 58,
    INTERRUPT_APB_DMA_CPU           = 59,
    INTERRUPT_AHB_DMA_CPU           = 60,
    INTERRUPT_ARB_SEM_GNT_CPU       = 61,
    INTERRUPT_OWR                   = 62,
    INTERRUPT_SDMMC4                = 63,
    INTERRUPT_GPIO1                 = 64,
    INTERRUPT_GPIO2                 = 65,
    INTERRUPT_GPIO3                 = 66,
    INTERRUPT_GPIO4                 = 67,
    INTERRUPT_UARTA                 = 68,
    INTERRUPT_UARTB                 = 69,
    INTERRUPT_I2C                   = 70,
    INTERRUPT_USB3_HOST             = 71,
    INTERRUPT_USB3_HOST_SMI         = 72,
    INTERRUPT_TMR3                  = 73,
    INTERRUPT_TMR4                  = 74,
    INTERRUPT_USB3_HOST_PME         = 75,
    INTERRUPT_USB3_DEV_HOST         = 76,
    INTERRUPT_ACTMON                = 77,
    INTERRUPT_UARTC                 = 78,
    INTERRUPT_HSI                   = 79,
    INTERRUPT_THERMAL               = 80,
    INTERRUPT_XUSB_PADCTL           = 81,
    INTERRUPT_TSEC                  = 82,
    INTERRUPT_EDP                   = 83,
    INTERRUPT_VFIR                  = 84,
    INTERRUPT_I2C5                  = 85,
    INTERRUPT_STAT_MON              = 86,
    INTERRUPT_GPIO5                 = 87,
    INTERRUPT_USB3_DEV_SMI          = 88,
    INTERRUPT_USB3_DEV_PME          = 89,
    INTERRUPT_SE                    = 90,
    INTERRUPT_SPI1                  = 91,
    INTERRUPT_APB_DMA_COP           = 92,
    INTERRUPT_AHB_DMA_COP           = 93,
    INTERRUPT_CLDVFS                = 94,
    INTERRUPT_I2C6                  = 95,
    INTERRUPT_HOST1X_SYNCPT_COP     = 96,
    INTERRUPT_HOST1X_SYNCPT_CPU     = 97,
    INTERRUPT_HOST1X_GEN_COP        = 98,
    INTERRUPT_HOST1X_GEN_CPU        = 99,
    INTERRUPT_MSENC                 = 100,
    INTERRUPT_VI                    = 101,
    INTERRUPT_ISPB                  = 102,
    INTERRUPT_ISP                   = 103,
    INTERRUPT_VIC                   = 104,
    INTERRUPT_DISPLAY               = 105,
    INTERRUPT_DISPLAYB              = 106,
    INTERRUPT_HDMI                  = 107,
    INTERRUPT_SOR                   = 108,
    INTERRUPT_MC                    = 109,
    INTERRUPT_EMC                   = 110,
    INTERRUPT_SPI6                  = 111,
//  RESERVED                        = 112,
    INTERRUPT_HDA                   = 113,
    INTERRUPT_SPI2                  = 114,
    INTERRUPT_SPI3                  = 115,
    INTERRUPT_I2C2                  = 116,
//  RESERVED                        = 117,
    INTERRUPT_PMU_EXT               = 118,
    INTERRUPT_GPIO6                 = 119,
//  RESERVED                        = 120,
    INTERRUPT_GPIO7                 = 121,
    INTERRUPT_UARTD                 = 122,
//  RESERVED                        = 123,
    INTERRUPT_I2C3                  = 124,
//  RESERVED                        = 125,
//  RESERVED                        = 126,
    INTERRUPT_SW                    = 127,
    INTERRUPT_SNOR                  = 128,
    INTERRUPT_USB3                  = 129,
    INTERRUPT_PCIE_INT              = 130,
    INTERRUPT_PCIE_MSI              = 131,
    INTERRUPT_PCIE_WAKE             = 132,
    INTERRUPT_AVP_CACHE             = 133,
//  RESERVED                        = 134,
    INTERRUPT_AUDIO_CLUSTER         = 135,
    INTERRUPT_APB_DMA_CH0           = 136,
    INTERRUPT_APB_DMA_CH1           = 137,
    INTERRUPT_APB_DMA_CH2           = 138,
    INTERRUPT_APB_DMA_CH3           = 139,
    INTERRUPT_APB_DMA_CH4           = 140,
    INTERRUPT_APB_DMA_CH5           = 141,
    INTERRUPT_APB_DMA_CH6           = 142,
    INTERRUPT_APB_DMA_CH7           = 143,
    INTERRUPT_APB_DMA_CH8           = 144,
    INTERRUPT_APB_DMA_CH9           = 145,
    INTERRUPT_APB_DMA_CH10          = 146,
    INTERRUPT_APB_DMA_CH11          = 147,
    INTERRUPT_APB_DMA_CH12          = 148,
    INTERRUPT_APB_DMA_CH13          = 149,
    INTERRUPT_APB_DMA_CH14          = 150,
    INTERRUPT_APB_DMA_CH15          = 151,
    INTERRUPT_I2C4                  = 152,
    INTERRUPT_TMR5                  = 153,
    INTERRUPT_HIER_GROUP1_COP       = 154,
    INTERRUPT_WDT_CPU               = 155,
    INTERRUPT_WDT_AVP               = 156,
    INTERRUPT_GPIO8                 = 157,
    INTERRUPT_CAR                   = 158,
    INTERRUPT_HIER_GROUP1_CPU       = 159,
    INTERRUPT_APB_DMA_CH16          = 160,
    INTERRUPT_APB_DMA_CH17          = 161,
    INTERRUPT_APB_DMA_CH18          = 162,
    INTERRUPT_APB_DMA_CH19          = 163,
    INTERRUPT_APB_DMA_CH20          = 164,
    INTERRUPT_APB_DMA_CH21          = 165,
    INTERRUPT_APB_DMA_CH22          = 166,
    INTERRUPT_APB_DMA_CH23          = 167,
    INTERRUPT_APB_DMA_CH24          = 168,
    INTERRUPT_APB_DMA_CH25          = 169,
    INTERRUPT_APB_DMA_CH26          = 170,
    INTERRUPT_APB_DMA_CH27          = 171,
    INTERRUPT_APB_DMA_CH28          = 172,
    INTERRUPT_APB_DMA_CH29          = 173,
    INTERRUPT_APB_DMA_CH30          = 174,
    INTERRUPT_APB_DMA_CH31          = 175,
    INTERRUPT_CPU0_PMU              = 176,
    INTERRUPT_CPU1_PMU              = 177,
    INTERRUPT_CPU2_PMU              = 178,
    INTERRUPT_CPU3_PMU              = 179,
    INTERRUPT_SDMMC1_SYS            = 180,
    INTERRUPT_SDMMC2_SYS            = 181,
    INTERRUPT_SDMMC3_SYS            = 182,
    INTERRUPT_SDMMC4_SYS            = 183,
    INTERRUPT_TMR6                  = 184,
    INTERRUPT_TMR7                  = 185,
    INTERRUPT_TMR8                  = 186,
    INTERRUPT_TMR9                  = 187,
    INTERRUPT_TMR0                  = 188,
    INTERRUPT_GPU                   = 189,
    INTERRUPT_GPU_NONSTALL          = 190,
    ARDPAUX                         = 191,
    maxIRQ                          = 192
} platform_interrupt_t;

#define INTERRUPT_VGIC_MAINTENANCE      INTERRUPT_PPI_9
#define INTERRUPT_S_PGPT                INTERRUPT_PPI_13
#define INTERRUPT_NS_PGPT               INTERRUPT_PPI_14
#define INTERRUPT_VGPT                  INTERRUPT_PPI_11
#define INTERRUPT_HGPT                  INTERRUPT_PPI_10
#define INTERRUPT_SMMU                  INTERRUPT_MC


/* the kernel runs in secure supervisor mode by default */

#ifdef ARM_HYP
#define KERNEL_TIMER_IRQ        INTERRUPT_HGPT
#else
#define KERNEL_TIMER_IRQ        INTERRUPT_S_PGPT
#endif

enum irqNumbers {
    irqInvalid = 255
};

#endif  /* ! __PLAT_MACHINE_H */
