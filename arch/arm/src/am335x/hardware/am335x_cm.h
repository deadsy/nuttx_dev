/********************************************************************************************
 * arch/arm/src/am335x/hardware/am335x_cm.h
 *
 *   Copyright (C) 2019 Petro Karashchenko. All rights reserved.
 *   Author: Petro Karashchenko <petro.karashchenko@gmail.com>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ********************************************************************************************/

#ifndef __ARCH_ARM_SRC_AM335X_HARDWARE_AM335X_CM_H
#define __ARCH_ARM_SRC_AM335X_HARDWARE_AM335X_CM_H

/********************************************************************************************
 * Included Files
 ********************************************************************************************/

#include <nuttx/config.h>
#include <hardware/am335x_memorymap.h>

/********************************************************************************************
 * Pre-processor Definitions
 ********************************************************************************************/

/* Clock Module Register Offsets ************************************************************/

#define AM335X_CM_PER_L4LS_CLKSTCTRL_OFFSET             0x0000
#define AM335X_CM_PER_L3S_CLKSTCTRL_OFFSET              0x0004
#define AM335X_CM_PER_L3_CLKSTCTRL_OFFSET               0x000c
#define AM335X_CM_PER_CPGMAC0_CLKCTRL_OFFSET            0x0014
#define AM335X_CM_PER_LCDC_CLKCTRL_OFFSET               0x0018
#define AM335X_CM_PER_USB0_CLKCTRL_OFFSET               0x001c
#define AM335X_CM_PER_TPTC0_CLKCTRL_OFFSET              0x0024
#define AM335X_CM_PER_EMIF_CLKCTRL_OFFSET               0x0028
#define AM335X_CM_PER_OCMCRAM_CLKCTRL_OFFSET            0x002c
#define AM335X_CM_PER_GPMC_CLKCTRL_OFFSET               0x0030
#define AM335X_CM_PER_MCASP0_CLKCTRL_OFFSET             0x0034
#define AM335X_CM_PER_UART5_CLKCTRL_OFFSET              0x0038
#define AM335X_CM_PER_MMC0_CLKCTRL_OFFSET               0x003c
#define AM335X_CM_PER_ELM_CLKCTRL_OFFSET                0x0040
#define AM335X_CM_PER_I2C2_CLKCTRL_OFFSET               0x0044
#define AM335X_CM_PER_I2C1_CLKCTRL_OFFSET               0x0048
#define AM335X_CM_PER_SPI0_CLKCTRL_OFFSET               0x004c
#define AM335X_CM_PER_SPI1_CLKCTRL_OFFSET               0x0050
#define AM335X_CM_PER_L4LS_CLKCTRL_OFFSET               0x0060
#define AM335X_CM_PER_MCASP1_CLKCTRL_OFFSET             0x0068
#define AM335X_CM_PER_UART1_CLKCTRL_OFFSET              0x006c
#define AM335X_CM_PER_UART2_CLKCTRL_OFFSET              0x0070
#define AM335X_CM_PER_UART3_CLKCTRL_OFFSET              0x0074
#define AM335X_CM_PER_UART4_CLKCTRL_OFFSET              0x0078
#define AM335X_CM_PER_TIMER7_CLKCTRL_OFFSET             0x007c
#define AM335X_CM_PER_TIMER2_CLKCTRL_OFFSET             0x0080
#define AM335X_CM_PER_TIMER3_CLKCTRL_OFFSET             0x0084
#define AM335X_CM_PER_TIMER4_CLKCTRL_OFFSET             0x0088
#define AM335X_CM_PER_GPIO1_CLKCTRL_OFFSET              0x00ac
#define AM335X_CM_PER_GPIO2_CLKCTRL_OFFSET              0x00b0
#define AM335X_CM_PER_GPIO3_CLKCTRL_OFFSET              0x00b4
#define AM335X_CM_PER_TPCC_CLKCTRL_OFFSET               0x00bc
#define AM335X_CM_PER_DCAN0_CLKCTRL_OFFSET              0x00c0
#define AM335X_CM_PER_DCAN1_CLKCTRL_OFFSET              0x00c4
#define AM335X_CM_PER_EPWMSS1_CLKCTRL_OFFSET            0x00cc
#define AM335X_CM_PER_EPWMSS0_CLKCTRL_OFFSET            0x00d4
#define AM335X_CM_PER_EPWMSS2_CLKCTRL_OFFSET            0x00d8
#define AM335X_CM_PER_L3_INSTR_CLKCTRL_OFFSET           0x00dc
#define AM335X_CM_PER_L3_CLKCTRL_OFFSET                 0x00e0
#define AM335X_CM_PER_IEEE5000_CLKCTRL_OFFSET           0x00e4
#define AM335X_CM_PER_PRU_ICSS_CLKCTRL_OFFSET           0x00e8
#define AM335X_CM_PER_TIMER5_CLKCTRL_OFFSET             0x00ec
#define AM335X_CM_PER_TIMER6_CLKCTRL_OFFSET             0x00f0
#define AM335X_CM_PER_MMC1_CLKCTRL_OFFSET               0x00f4
#define AM335X_CM_PER_MMC2_CLKCTRL_OFFSET               0x00f8
#define AM335X_CM_PER_TPTC1_CLKCTRL_OFFSET              0x00fc
#define AM335X_CM_PER_TPTC2_CLKCTRL_OFFSET              0x0100
#define AM335X_CM_PER_SPINLOCK_CLKCTRL_OFFSET           0x010c
#define AM335X_CM_PER_MAILBOX0_CLKCTRL_OFFSET           0x0110
#define AM335X_CM_PER_L4HS_CLKSTCTRL_OFFSET             0x011c
#define AM335X_CM_PER_L4HS_CLKCTRL_OFFSET               0x0120
#define AM335X_CM_PER_OCPWP_L3_CLKSTCTRL_OFFSET         0x012c
#define AM335X_CM_PER_OCPWP_CLKCTRL_OFFSET              0x0130
#define AM335X_CM_PER_PRU_ICSS_CLKSTCTRL_OFFSET         0x0140
#define AM335X_CM_PER_CPSW_CLKSTCTRL_OFFSET             0x0144
#define AM335X_CM_PER_LCDC_CLKSTCTRL_OFFSET             0x0148
#define AM335X_CM_PER_CLKDIV32K_CLKCTRL_OFFSET          0x014c
#define AM335X_CM_PER_CLK_24MHZ_CLKSTCTRL_OFFSET        0x0150

#define AM335X_CM_WKUP_CLKSTCTRL_OFFSET                 0x0000
#define AM335X_CM_WKUP_CONTROL_CLKCTRL_OFFSET           0x0004
#define AM335X_CM_WKUP_GPIO0_CLKCTRL_OFFSET             0x0008
#define AM335X_CM_WKUP_L4WKUP_CLKCTRL_OFFSET            0x000c
#define AM335X_CM_WKUP_TIMER0_CLKCTRL_OFFSET            0x0010
#define AM335X_CM_WKUP_DEBUGSS_CLKCTRL_OFFSET           0x0014
#define AM335X_CM_WKUP_L3_AON_CLKSTCTRL_OFFSET          0x0018
#define AM335X_CM_WKUP_AUTOIDLE_DPLL_MPU_OFFSET         0x001c
#define AM335X_CM_WKUP_IDLEST_DPLL_MPU_OFFSET           0x0020
#define AM335X_CM_WKUP_SSC_DELTAMSTEP_DPLL_MPU_OFFSET   0x0024
#define AM335X_CM_WKUP_SSC_MODFREQDIV_DPLL_MPU_OFFSET   0x0028
#define AM335X_CM_WKUP_CLKSEL_DPLL_MPU_OFFSET           0x002c
#define AM335X_CM_WKUP_AUTOIDLE_DPLL_DDR_OFFSET         0x0030
#define AM335X_CM_WKUP_IDLEST_DPLL_DDR_OFFSET           0x0034
#define AM335X_CM_WKUP_SSC_DELTAMSTEP_DPLL_DDR_OFFSET   0x0038
#define AM335X_CM_WKUP_SSC_MODFREQDIV_DPLL_DDR_OFFSET   0x003c
#define AM335X_CM_WKUP_CLKSEL_DPLL_DDR_OFFSET           0x0040
#define AM335X_CM_WKUP_AUTOIDLE_DPLL_DISP_OFFSET        0x0044
#define AM335X_CM_WKUP_IDLEST_DPLL_DISP_OFFSET          0x0048
#define AM335X_CM_WKUP_SSC_DELTAMSTEP_DPLL_DISP_OFFSET  0x004c
#define AM335X_CM_WKUP_SSC_MODFREQDIV_DPLL_DISP_OFFSET  0x0050
#define AM335X_CM_WKUP_CLKSEL_DPLL_DISP_OFFSET          0x0054
#define AM335X_CM_WKUP_AUTOIDLE_DPLL_CORE_OFFSET        0x0058
#define AM335X_CM_WKUP_IDLEST_DPLL_CORE_OFFSET          0x005c
#define AM335X_CM_WKUP_SSC_DELTAMSTEP_DPLL_CORE_OFFSET  0x0060
#define AM335X_CM_WKUP_SSC_MODFREQDIV_DPLL_CORE_OFFSET  0x0064
#define AM335X_CM_WKUP_CLKSEL_DPLL_CORE_OFFSET          0x0068
#define AM335X_CM_WKUP_AUTOIDLE_DPLL_PER_OFFSET         0x006c
#define AM335X_CM_WKUP_IDLEST_DPLL_PER_OFFSET           0x0070
#define AM335X_CM_WKUP_SSC_DELTAMSTEP_DPLL_PER_OFFSET   0x0074
#define AM335X_CM_WKUP_SSC_MODFREQDIV_DPLL_PER_OFFSET   0x0078
#define AM335X_CM_WKUP_CLKDCOLDO_DPLL_PER_OFFSET        0x007c
#define AM335X_CM_WKUP_DIV_M4_DPLL_CORE_OFFSET          0x0080
#define AM335X_CM_WKUP_DIV_M5_DPLL_CORE_OFFSET          0x0084
#define AM335X_CM_WKUP_CLKMODE_DPLL_MPU_OFFSET          0x0088
#define AM335X_CM_WKUP_CLKMODE_DPLL_PER_OFFSET          0x008c
#define AM335X_CM_WKUP_CLKMODE_DPLL_CORE_OFFSET         0x0090
#define AM335X_CM_WKUP_CLKMODE_DPLL_DDR_OFFSET          0x0094
#define AM335X_CM_WKUP_CLKMODE_DPLL_DISP_OFFSET         0x0098
#define AM335X_CM_WKUP_CLKSEL_DPLL_PERIPH_OFFSET        0x009c
#define AM335X_CM_WKUP_DIV_M2_DPLL_DDR_OFFSET           0x00a0
#define AM335X_CM_WKUP_DIV_M2_DPLL_DISP_OFFSET          0x00a4
#define AM335X_CM_WKUP_DIV_M2_DPLL_MPU_OFFSET           0x00a8
#define AM335X_CM_WKUP_DIV_M2_DPLL_PER_OFFSET           0x00ac
#define AM335X_CM_WKUP_M3_CLKCTRL_OFFSET                0x00b0
#define AM335X_CM_WKUP_UART0_CLKCTRL_OFFSET             0x00b4
#define AM335X_CM_WKUP_I2C0_CLKCTRL_OFFSET              0x00b8
#define AM335X_CM_WKUP_ADC_TSC_CLKCTRL_OFFSET           0x00bc
#define AM335X_CM_WKUP_SMARTREFLEX0_CLKCTRL_OFFSET      0x00c0
#define AM335X_CM_WKUP_TIMER1_CLKCTRL_OFFSET            0x00c4
#define AM335X_CM_WKUP_SMARTREFLEX1_CLKCTRL_OFFSET      0x00c8
#define AM335X_CM_WKUP_L4WKUP_AON_CLKSTCTRL_OFFSET      0x00cc
#define AM335X_CM_WKUP_WDT1_CLKCTRL_OFFSET              0x00d4
#define AM335X_CM_WKUP_DIV_M6_DPLL_CORE_OFFSET          0x00d8

#define AM335X_CM_DPLL_CLKSEL_TIMER7_CLK_OFFSET         0x0004
#define AM335X_CM_DPLL_CLKSEL_TIMER2_CLK_OFFSET         0x0008
#define AM335X_CM_DPLL_CLKSEL_TIMER3_CLK_OFFSET         0x000c
#define AM335X_CM_DPLL_CLKSEL_TIMER4_CLK_OFFSET         0x0010
#define AM335X_CM_DPLL_CLKSEL_MAC_CLK_OFFSET            0x0014
#define AM335X_CM_DPLL_CLKSEL_TIMER5_CLK_OFFSET         0x0018
#define AM335X_CM_DPLL_CLKSEL_TIMER6_CLK_OFFSET         0x001c
#define AM335X_CM_DPLL_CLKSEL_CPTS_RFT_CLK_OFFSET       0x0020
#define AM335X_CM_DPLL_CLKSEL_TIMER1MS_CLK_OFFSET       0x0028
#define AM335X_CM_DPLL_CLKSEL_GFX_FCLK_OFFSET           0x002c
#define AM335X_CM_DPLL_CLKSEL_PRU_ICSS_OCP_CLK_OFFSET   0x0030
#define AM335X_CM_DPLL_CLKSEL_LCDC_PIXEL_CLK_OFFSET     0x0034
#define AM335X_CM_DPLL_CLKSEL_WDT1_CLK_OFFSET           0x0038
#define AM335X_CM_DPLL_CLKSEL_GPIO0_DBCLK_OFFSET        0x003c

#define AM335X_CM_MPU_CLKSTCTRL_OFFSET                  0x0000
#define AM335X_CM_MPU_CLKCTRL_OFFSET                    0x0004

#define AM335X_CM_DEVICE_CLKOUT_CTRL_OFFSET             0x0000

#define AM335X_CM_RTC_CLKCTRL_OFFSET                    0x0000
#define AM335X_CM_RTC_CLKSTCTRL_OFFSET                  0x0004

#define AM335X_CM_GFX_L3_CLKSTCTRL_OFFSET               0x0000
#define AM335X_CM_GFX_CLKCTRL_OFFSET                    0x0004
#define AM335X_CM_GFX_L4LS_CLKSTCTRL_OFFSET             0x000c
#define AM335X_CM_GFX_MMUCFG_CLKCTRL_OFFSET             0x0010
#define AM335X_CM_GFX_MMUDATA_CLKCTRL_OFFSET            0x0014

#define AM335X_CM_CEFUSE_CLKSTCTRL_OFFSET               0x0000
#define AM335X_CM_CEFUSE_CLKCTRL_OFFSET                 0x0020

/* Clock Module Register Addresses **********************************************************/

#define AM335X_CM_PER_L4LS_CLKSTCTRL                    (AM335X_CM_PER_VADDR + AM335X_CM_PER_L4LS_CLKSTCTRL_OFFSET)
#define AM335X_CM_PER_L3S_CLKSTCTRL                     (AM335X_CM_PER_VADDR + AM335X_CM_PER_L3S_CLKSTCTRL_OFFSET)
#define AM335X_CM_PER_L3_CLKSTCTRL                      (AM335X_CM_PER_VADDR + AM335X_CM_PER_L3_CLKSTCTRL_OFFSET)
#define AM335X_CM_PER_CPGMAC0_CLKCTRL                   (AM335X_CM_PER_VADDR + AM335X_CM_PER_CPGMAC0_CLKCTRL_OFFSET)
#define AM335X_CM_PER_LCDC_CLKCTRL                      (AM335X_CM_PER_VADDR + AM335X_CM_PER_LCDC_CLKCTRL_OFFSET)
#define AM335X_CM_PER_USB0_CLKCTRL                      (AM335X_CM_PER_VADDR + AM335X_CM_PER_USB0_CLKCTRL_OFFSET)
#define AM335X_CM_PER_TPTC0_CLKCTRL                     (AM335X_CM_PER_VADDR + AM335X_CM_PER_TPTC0_CLKCTRL_OFFSET)
#define AM335X_CM_PER_EMIF_CLKCTRL                      (AM335X_CM_PER_VADDR + AM335X_CM_PER_EMIF_CLKCTRL_OFFSET)
#define AM335X_CM_PER_OCMCRAM_CLKCTRL                   (AM335X_CM_PER_VADDR + AM335X_CM_PER_OCMCRAM_CLKCTRL_OFFSET)
#define AM335X_CM_PER_GPMC_CLKCTRL                      (AM335X_CM_PER_VADDR + AM335X_CM_PER_GPMC_CLKCTRL_OFFSET)
#define AM335X_CM_PER_MCASP0_CLKCTRL                    (AM335X_CM_PER_VADDR + AM335X_CM_PER_MCASP0_CLKCTRL_OFFSET)
#define AM335X_CM_PER_UART5_CLKCTRL                     (AM335X_CM_PER_VADDR + AM335X_CM_PER_UART5_CLKCTRL_OFFSET)
#define AM335X_CM_PER_MMC0_CLKCTRL                      (AM335X_CM_PER_VADDR + AM335X_CM_PER_MMC0_CLKCTRL_OFFSET)
#define AM335X_CM_PER_ELM_CLKCTRL                       (AM335X_CM_PER_VADDR + AM335X_CM_PER_ELM_CLKCTRL_OFFSET)
#define AM335X_CM_PER_I2C2_CLKCTRL                      (AM335X_CM_PER_VADDR + AM335X_CM_PER_I2C2_CLKCTRL_OFFSET)
#define AM335X_CM_PER_I2C1_CLKCTRL                      (AM335X_CM_PER_VADDR + AM335X_CM_PER_I2C1_CLKCTRL_OFFSET)
#define AM335X_CM_PER_SPI0_CLKCTRL                      (AM335X_CM_PER_VADDR + AM335X_CM_PER_SPI0_CLKCTRL_OFFSET)
#define AM335X_CM_PER_SPI1_CLKCTRL                      (AM335X_CM_PER_VADDR + AM335X_CM_PER_SPI1_CLKCTRL_OFFSET)
#define AM335X_CM_PER_L4LS_CLKCTRL                      (AM335X_CM_PER_VADDR + AM335X_CM_PER_L4LS_CLKCTRL_OFFSET)
#define AM335X_CM_PER_MCASP1_CLKCTRL                    (AM335X_CM_PER_VADDR + AM335X_CM_PER_MCASP1_CLKCTRL_OFFSET)
#define AM335X_CM_PER_UART1_CLKCTRL                     (AM335X_CM_PER_VADDR + AM335X_CM_PER_UART1_CLKCTRL_OFFSET)
#define AM335X_CM_PER_UART2_CLKCTRL                     (AM335X_CM_PER_VADDR + AM335X_CM_PER_UART2_CLKCTRL_OFFSET)
#define AM335X_CM_PER_UART3_CLKCTRL                     (AM335X_CM_PER_VADDR + AM335X_CM_PER_UART3_CLKCTRL_OFFSET)
#define AM335X_CM_PER_UART4_CLKCTRL                     (AM335X_CM_PER_VADDR + AM335X_CM_PER_UART4_CLKCTRL_OFFSET)
#define AM335X_CM_PER_TIMER7_CLKCTRL                    (AM335X_CM_PER_VADDR + AM335X_CM_PER_TIMER7_CLKCTRL_OFFSET)
#define AM335X_CM_PER_TIMER2_CLKCTRL                    (AM335X_CM_PER_VADDR + AM335X_CM_PER_TIMER2_CLKCTRL_OFFSET)
#define AM335X_CM_PER_TIMER3_CLKCTRL                    (AM335X_CM_PER_VADDR + AM335X_CM_PER_TIMER3_CLKCTRL_OFFSET)
#define AM335X_CM_PER_TIMER4_CLKCTRL                    (AM335X_CM_PER_VADDR + AM335X_CM_PER_TIMER4_CLKCTRL_OFFSET)
#define AM335X_CM_PER_GPIO1_CLKCTRL                     (AM335X_CM_PER_VADDR + AM335X_CM_PER_GPIO1_CLKCTRL_OFFSET)
#define AM335X_CM_PER_GPIO2_CLKCTRL                     (AM335X_CM_PER_VADDR + AM335X_CM_PER_GPIO2_CLKCTRL_OFFSET)
#define AM335X_CM_PER_GPIO3_CLKCTRL                     (AM335X_CM_PER_VADDR + AM335X_CM_PER_GPIO3_CLKCTRL_OFFSET)
#define AM335X_CM_PER_TPCC_CLKCTRL                      (AM335X_CM_PER_VADDR + AM335X_CM_PER_TPCC_CLKCTRL_OFFSET)
#define AM335X_CM_PER_DCAN0_CLKCTRL                     (AM335X_CM_PER_VADDR + AM335X_CM_PER_DCAN0_CLKCTRL_OFFSET)
#define AM335X_CM_PER_DCAN1_CLKCTRL                     (AM335X_CM_PER_VADDR + AM335X_CM_PER_DCAN1_CLKCTRL_OFFSET)
#define AM335X_CM_PER_EPWMSS1_CLKCTRL                   (AM335X_CM_PER_VADDR + AM335X_CM_PER_EPWMSS1_CLKCTRL_OFFSET)
#define AM335X_CM_PER_EPWMSS0_CLKCTRL                   (AM335X_CM_PER_VADDR + AM335X_CM_PER_EPWMSS0_CLKCTRL_OFFSET)
#define AM335X_CM_PER_EPWMSS2_CLKCTRL                   (AM335X_CM_PER_VADDR + AM335X_CM_PER_EPWMSS2_CLKCTRL_OFFSET)
#define AM335X_CM_PER_L3_INSTR_CLKCTRL                  (AM335X_CM_PER_VADDR + AM335X_CM_PER_L3_INSTR_CLKCTRL_OFFSET)
#define AM335X_CM_PER_L3_CLKCTRL                        (AM335X_CM_PER_VADDR + AM335X_CM_PER_L3_CLKCTRL_OFFSET)
#define AM335X_CM_PER_IEEE5000_CLKCTRL                  (AM335X_CM_PER_VADDR + AM335X_CM_PER_IEEE5000_CLKCTRL_OFFSET)
#define AM335X_CM_PER_PRU_ICSS_CLKCTRL                  (AM335X_CM_PER_VADDR + AM335X_CM_PER_PRU_ICSS_CLKCTRL_OFFSET)
#define AM335X_CM_PER_TIMER5_CLKCTRL                    (AM335X_CM_PER_VADDR + AM335X_CM_PER_TIMER5_CLKCTRL_OFFSET)
#define AM335X_CM_PER_TIMER6_CLKCTRL                    (AM335X_CM_PER_VADDR + AM335X_CM_PER_TIMER6_CLKCTRL_OFFSET)
#define AM335X_CM_PER_MMC1_CLKCTRL                      (AM335X_CM_PER_VADDR + AM335X_CM_PER_MMC1_CLKCTRL_OFFSET)
#define AM335X_CM_PER_MMC2_CLKCTRL                      (AM335X_CM_PER_VADDR + AM335X_CM_PER_MMC2_CLKCTRL_OFFSET)
#define AM335X_CM_PER_TPTC1_CLKCTRL                     (AM335X_CM_PER_VADDR + AM335X_CM_PER_TPTC1_CLKCTRL_OFFSET)
#define AM335X_CM_PER_TPTC2_CLKCTRL                     (AM335X_CM_PER_VADDR + AM335X_CM_PER_TPTC2_CLKCTRL_OFFSET)
#define AM335X_CM_PER_SPINLOCK_CLKCTRL                  (AM335X_CM_PER_VADDR + AM335X_CM_PER_SPINLOCK_CLKCTRL_OFFSET)
#define AM335X_CM_PER_MAILBOX0_CLKCTRL                  (AM335X_CM_PER_VADDR + AM335X_CM_PER_MAILBOX0_CLKCTRL_OFFSET)
#define AM335X_CM_PER_L4HS_CLKSTCTRL                    (AM335X_CM_PER_VADDR + AM335X_CM_PER_L4HS_CLKSTCTRL_OFFSET)
#define AM335X_CM_PER_L4HS_CLKCTRL                      (AM335X_CM_PER_VADDR + AM335X_CM_PER_L4HS_CLKCTRL_OFFSET)
#define AM335X_CM_PER_OCPWP_L3_CLKSTCTRL                (AM335X_CM_PER_VADDR + AM335X_CM_PER_OCPWP_L3_CLKSTCTRL_OFFSET)
#define AM335X_CM_PER_OCPWP_CLKCTRL                     (AM335X_CM_PER_VADDR + AM335X_CM_PER_OCPWP_CLKCTRL_OFFSET)
#define AM335X_CM_PER_PRU_ICSS_CLKSTCTRL                (AM335X_CM_PER_VADDR + AM335X_CM_PER_PRU_ICSS_CLKSTCTRL_OFFSET)
#define AM335X_CM_PER_CPSW_CLKSTCTRL                    (AM335X_CM_PER_VADDR + AM335X_CM_PER_CPSW_CLKSTCTRL_OFFSET)
#define AM335X_CM_PER_LCDC_CLKSTCTRL                    (AM335X_CM_PER_VADDR + AM335X_CM_PER_LCDC_CLKSTCTRL_OFFSET)
#define AM335X_CM_PER_CLKDIV32K_CLKCTRL                 (AM335X_CM_PER_VADDR + AM335X_CM_PER_CLKDIV32K_CLKCTRL_OFFSET)
#define AM335X_CM_PER_CLK_24MHZ_CLKSTCTRL               (AM335X_CM_PER_VADDR + AM335X_CM_PER_CLK_24MHZ_CLKSTCTRL_OFFSET)

#define AM335X_CM_WKUP_CLKSTCTRL                        (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_CLKSTCTRL_OFFSET)
#define AM335X_CM_WKUP_CONTROL_CLKCTRL                  (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_CONTROL_CLKCTRL_OFFSET)
#define AM335X_CM_WKUP_GPIO0_CLKCTRL                    (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_GPIO0_CLKCTRL_OFFSET)
#define AM335X_CM_WKUP_L4WKUP_CLKCTRL                   (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_L4WKUP_CLKCTRL_OFFSET)
#define AM335X_CM_WKUP_TIMER0_CLKCTRL                   (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_TIMER0_CLKCTRL_OFFSET)
#define AM335X_CM_WKUP_DEBUGSS_CLKCTRL                  (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_DEBUGSS_CLKCTRL_OFFSET)
#define AM335X_CM_WKUP_L3_AON_CLKSTCTRL                 (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_L3_AON_CLKSTCTRL_OFFSET)
#define AM335X_CM_WKUP_AUTOIDLE_DPLL_MPU                (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_AUTOIDLE_DPLL_MPU_OFFSET)
#define AM335X_CM_WKUP_IDLEST_DPLL_MPU                  (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_IDLEST_DPLL_MPU_OFFSET)
#define AM335X_CM_WKUP_SSC_DELTAMSTEP_DPLL_MPU          (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_SSC_DELTAMSTEP_DPLL_MPU_OFFSET)
#define AM335X_CM-WKUP_SSC_MODFREQDIV_DPLL_MPU          (AM335X_CM_WKUP_VADDR + AM335X_CM-WKUP_SSC_MODFREQDIV_DPLL_MPU_OFFSET)
#define AM335X_CM_WKUP_CLKSEL_DPLL_MPU                  (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_CLKSEL_DPLL_MPU_OFFSET)
#define AM335X_CM_WKUP_AUTOIDLE_DPLL_DDR                (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_AUTOIDLE_DPLL_DDR_OFFSET)
#define AM335X_CM_WKUP_IDLEST_DPLL_DDR                  (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_IDLEST_DPLL_DDR_OFFSET)
#define AM335X_CM_WKUP_SSC_DELTAMSTEP_DPLL_DDR          (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_SSC_DELTAMSTEP_DPLL_DDR_OFFSET)
#define AM335X_CM_WKUP_SSC_MODFREQDIV_DPLL_DDR          (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_SSC_MODFREQDIV_DPLL_DDR_OFFSET)
#define AM335X_CM_WKUP_CLKSEL_DPLL_DDR                  (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_CLKSEL_DPLL_DDR_OFFSET)
#define AM335X_CM_WKUP_AUTOIDLE_DPLL_DISP               (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_AUTOIDLE_DPLL_DISP_OFFSET)
#define AM335X_CM_WKUP_IDLEST_DPLL_DISP                 (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_IDLEST_DPLL_DISP_OFFSET)
#define AM335X_CM_WKUP_SSC_DELTAMSTEP_DPLL_DISP         (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_SSC_DELTAMSTEP_DPLL_DISP_OFFSET)
#define AM335X_CM_WKUP_SSC_MODFREQDIV_DPLL_DISP         (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_SSC_MODFREQDIV_DPLL_DISP_OFFSET)
#define AM335X_CM_WKUP_CLKSEL_DPLL_DISP                 (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_CLKSEL_DPLL_DISP_OFFSET)
#define AM335X_CM_WKUP_AUTOIDLE_DPLL_CORE               (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_AUTOIDLE_DPLL_CORE_OFFSET)
#define AM335X_CM_WKUP_IDLEST_DPLL_CORE                 (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_IDLEST_DPLL_CORE_OFFSET)
#define AM335X_CM_WKUP_SSC_DELTAMSTEP_DPLL_CORE         (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_SSC_DELTAMSTEP_DPLL_CORE_OFFSET)
#define AM335X_CM_WKUP_SSC_MODFREQDIV_DPLL_CORE         (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_SSC_MODFREQDIV_DPLL_CORE_OFFSET)
#define AM335X_CM_WKUP_CLKSEL_DPLL_CORE                 (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_CLKSEL_DPLL_CORE_OFFSET)
#define AM335X_CM_WKUP_AUTOIDLE_DPLL_PER                (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_AUTOIDLE_DPLL_PER_OFFSET)
#define AM335X_CM_WKUP_IDLEST_DPLL_PER                  (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_IDLEST_DPLL_PER_OFFSET)
#define AM335X_CM_WKUP_SSC_DELTAMSTEP_DPLL_PER          (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_SSC_DELTAMSTEP_DPLL_PER_OFFSET)
#define AM335X_CM_WKUP_SSC_MODFREQDIV_DPLL_PER          (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_SSC_MODFREQDIV_DPLL_PER_OFFSET)
#define AM335X_CM_WKUP_CLKDCOLDO_DPLL_PER               (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_CLKDCOLDO_DPLL_PER_OFFSET)
#define AM335X_CM_WKUP_DIV_M4_DPLL_CORE                 (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_DIV_M4_DPLL_CORE_OFFSET)
#define AM335X_CM_WKUP_DIV_M5_DPLL_CORE                 (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_DIV_M5_DPLL_CORE_OFFSET)
#define AM335X_CM_WKUP_CLKMODE_DPLL_MPU                 (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_CLKMODE_DPLL_MPU_OFFSET)
#define AM335X_CM_WKUP_CLKMODE_DPLL_PER                 (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_CLKMODE_DPLL_PER_OFFSET)
#define AM335X_CM_WKUP_CLKMODE_DPLL_CORE                (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_CLKMODE_DPLL_CORE_OFFSET)
#define AM335X_CM_WKUP_CLKMODE_DPLL_DDR                 (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_CLKMODE_DPLL_DDR_OFFSET)
#define AM335X_CM_WKUP_CLKMODE_DPLL_DISP                (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_CLKMODE_DPLL_DISP_OFFSET)
#define AM335X_CM_WKUP_CLKSEL_DPLL_PERIPH               (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_CLKSEL_DPLL_PERIPH_OFFSET)
#define AM335X_CM_WKUP_DIV_M2_DPLL_DDR                  (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_DIV_M2_DPLL_DDR_OFFSET)
#define AM335X_CM_WKUP_DIV_M2_DPLL_DISP                 (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_DIV_M2_DPLL_DISP_OFFSET)
#define AM335X_CM_WKUP_DIV_M2_DPLL_MPU                  (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_DIV_M2_DPLL_MPU_OFFSET)
#define AM335X_CM_WKUP_DIV_M2_DPLL_PER                  (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_DIV_M2_DPLL_PER_OFFSET)
#define AM335X_CM_WKUP_WKUP_M3_CLKCTRL                  (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_M3_CLKCTRL_OFFSET)
#define AM335X_CM_WKUP_UART0_CLKCTRL                    (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_UART0_CLKCTRL_OFFSET)
#define AM335X_CM_WKUP_I2C0_CLKCTRL                     (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_I2C0_CLKCTRL_OFFSET)
#define AM335X_CM_WKUP_ADC_TSC_CLKCTRL                  (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_ADC_TSC_CLKCTRL_OFFSET)
#define AM335X_CM_WKUP_SMARTREFLEX0_CLKCTRL             (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_SMARTREFLEX0_CLKCTRL _OFFSET)
#define AM335X_CM_WKUP_TIMER1_CLKCTRL                   (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_TIMER1_CLKCTRL_OFFSET)
#define AM335X_CM_WKUP_SMARTREFLEX1_CLKCTRL             (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_SMARTREFLEX1_CLKCTRL_OFFSET)
#define AM335X_CM_WKUP_L4WKUP_AON_CLKSTCTRL             (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_L4WKUP_AON_CLKSTCTRL_OFFSET)
#define AM335X_CM_WKUP_WDT1_CLKCTRL                     (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_WDT1_CLKCTRL_OFFSET)
#define AM335X_CM_WKUP_DIV_M6_DPLL_CORE                 (AM335X_CM_WKUP_VADDR + AM335X_CM_WKUP_DIV_M6_DPLL_CORE_OFFSET)

#define AM335X_CM_DPLL_CLKSEL_TIMER7_CLK                (AM335X_CM_DPLL_VADDR + AM335X_CM_DPLL_CLKSEL_TIMER7_CLK_OFFSET)
#define AM335X_CM_DPLL_CLKSEL_TIMER2_CLK                (AM335X_CM_DPLL_VADDR + AM335X_CM_DPLL_CLKSEL_TIMER2_CLK_OFFSET)
#define AM335X_CM_DPLL_CLKSEL_TIMER3_CLK                (AM335X_CM_DPLL_VADDR + AM335X_CM_DPLL_CLKSEL_TIMER3_CLK_OFFSET)
#define AM335X_CM_DPLL_CLKSEL_TIMER4_CLK                (AM335X_CM_DPLL_VADDR + AM335X_CM_DPLL_CLKSEL_TIMER4_CLK_OFFSET)
#define AM335X_CM_DPLL_CLKSEL_MAC_CLK                   (AM335X_CM_DPLL_VADDR + AM335X_CM_DPLL_CLKSEL_MAC_CLK_OFFSET)
#define AM335X_CM_DPLL_CLKSEL_TIMER5_CLK                (AM335X_CM_DPLL_VADDR + AM335X_CM_DPLL_CLKSEL_TIMER5_CLK_OFFSET)
#define AM335X_CM_DPLL_CLKSEL_TIMER6_CLK                (AM335X_CM_DPLL_VADDR + AM335X_CM_DPLL_CLKSEL_TIMER6_CLK_OFFSET)
#define AM335X_CM_DPLL_CLKSEL_CPTS_RFT_CLK              (AM335X_CM_DPLL_VADDR + AM335X_CM_DPLL_CLKSEL_CPTS_RFT_CLK_OFFSET)
#define AM335X_CM_DPLL_CLKSEL_TIMER1MS_CLK              (AM335X_CM_DPLL_VADDR + AM335X_CM_DPLL_CLKSEL_TIMER1MS_CLK_OFFSET)
#define AM335X_CM_DPLL_CLKSEL_GFX_FCLK                  (AM335X_CM_DPLL_VADDR + AM335X_CM_DPLL_CLKSEL_GFX_FCLK_OFFSET)
#define AM335X_CM_DPLL_CLKSEL_PRU_ICSS_OCP_CLK          (AM335X_CM_DPLL_VADDR + AM335X_CM_DPLL_CLKSEL_PRU_ICSS_OCP_CLK_OFFSET)
#define AM335X_CM_DPLL_CLKSEL_LCDC_PIXEL_CLK            (AM335X_CM_DPLL_VADDR + AM335X_CM_DPLL_CLKSEL_LCDC_PIXEL_CLK_OFFSET)
#define AM335X_CM_DPLL_CLKSEL_WDT1_CLK                  (AM335X_CM_DPLL_VADDR + AM335X_CM_DPLL_CLKSEL_WDT1_CLK_OFFSET)
#define AM335X_CM_DPLL_CLKSEL_GPIO0_DBCLK               (AM335X_CM_DPLL_VADDR + AM335X_CM_DPLL_CLKSEL_GPIO0_DBCLK_OFFSET)

#define AM335X_CM_MPU_CLKSTCTRL                         (AM335X_CM_MPU_VADDR + AM335X_CM_MPU_CLKSTCTRL_OFFSET)
#define AM335X_CM_MPU_CLKCTRL                           (AM335X_CM_MPU_VADDR + AM335X_CM_MPU_CLKCTRL_OFFSET)

#define AM335X_CM_DEVICE_CLKOUT_CTRL                    (AM335X_CM_DEVICE_VADDR + AM335X_CM_DEVICE_CLKOUT_CTRL_OFFSET)

#define AM335X_CM_RTC_CLKCTRL                           (AM335X_CM_RTC_VADDR + AM335X_CM_RTC_CLKCTRL_OFFSET)
#define AM335X_CM_RTC_CLKSTCTRL                         (AM335X_CM_RTC_VADDR + AM335X_CM_RTC_CLKSTCTRL_OFFSET)

#define AM335X_CM_GFX_L3_CLKSTCTRL                      (AM335X_CM_GFX_VADDR + AM335X_CM_GFX_L3_CLKSTCTRL_OFFSET)
#define AM335X_CM_GFX_CLKCTRL                           (AM335X_CM_GFX_VADDR + AM335X_CM_GFX_CLKCTRL_OFFSET)
#define AM335X_CM_GFX_L4LS_CLKSTCTRL                    (AM335X_CM_GFX_VADDR + AM335X_CM_GFX_L4LS_CLKSTCTRL_OFFSET)
#define AM335X_CM_GFX_MMUCFG_CLKCTRL                    (AM335X_CM_GFX_VADDR + AM335X_CM_GFX_MMUCFG_CLKCTRL_OFFSET)
#define AM335X_CM_GFX_MMUDATA_CLKCTRL                   (AM335X_CM_GFX_VADDR + AM335X_CM_GFX_MMUDATA_CLKCTRL_OFFSET)

#define AM335X_CM_CEFUSE_CLKSTCTRL                      (AM335X_CM_CEFUSE_VADDR + AM335X_CM_CEFUSE_CLKSTCTRL_OFFSET)
#define AM335X_CM_CEFUSE_CLKCTRL                        (AM335X_CM_CEFUSE_VADDR + AM335X_CM_CEFUSE_CLKCTRL_OFFSET)

/* Clock Module Register Bit Definitions **************************************************/

#define CM_WKUP_CLKCTRL_MODULEMODE_SHIFT                (0) /* Bits 0-1: Control the way mandatory clocks are managed */
#define CM_WKUP_CLKCTRL_MODULEMODE_MASK                 (3 << CM_WKUP_CLKCTRL_MODULEMODE_SHIFT)
#  define CM_WKUP_CLKCTRL_MODULEMODE_DISABLE            (0 << CM_WKUP_CLKCTRL_MODULEMODE_SHIFT) /* Module is disable by SW */
#  define CM_WKUP_CLKCTRL_MODULEMODE_ENABLE             (2 << CM_WKUP_CLKCTRL_MODULEMODE_SHIFT) /* Module is explicitly enabled */
#define CM_WKUP_CLKCTRL_IDLEST_SHIFT                    (16) /* Bits 16-17: Module idle status. */
#define CM_WKUP_CLKCTRL_IDLEST_MASK                     (3 << CM_WKUP_CLKCTRL_IDLEST_SHIFT)
#  define CM_WKUP_CLKCTRL_IDLEST_FUNC                   (0 << CM_WKUP_CLKCTRL_IDLEST_SHIFT) /* Module is fully functional, including OCP */
#  define CM_WKUP_CLKCTRL_IDLEST_TRANS                  (1 << CM_WKUP_CLKCTRL_IDLEST_SHIFT) /* Module is performing transition: wakeup, or sleep, or sleep abortion */
#  define CM_WKUP_CLKCTRL_IDLEST_IDLE                   (2 << CM_WKUP_CLKCTRL_IDLEST_SHIFT) /* Module is in Idle mode (only OCP part) */
#  define CM_WKUP_CLKCTRL_IDLEST_DISABLED               (3 << CM_WKUP_CLKCTRL_IDLEST_SHIFT) /* Module is disabled and cannot be accessed */
#define CM_WKUP_CLKCTRL_STBYST                          (1 << 18) /* Bit 18: Module standby status. */

#define CM_DPLL_DMTIMER1MS_CLKSEL_SHIFT                 (0) /* Bits 0-2: Mux select line for DMTIMER_1MS clock */
#define CM_DPLL_DMTIMER1MS_CLKSEL_MASK                  (7 << CM_DPLL_DMTIMER1MS_CLKSEL_SHIFT)
#  define CM_DPLL_DMTIMER1_CLKSEL_CLK_M_OSC             (0 << CM_DPLL_DMTIMER1MS_CLKSEL_SHIFT) /* Select CLK_M_OSC clock */
#  define CM_DPLL_DMTIMER1_CLKSEL_CLK_32KHZ             (1 << CM_DPLL_DMTIMER1MS_CLKSEL_SHIFT) /* Select CLK_32KHZ clock */
#  define CM_DPLL_DMTIMER1_CLKSEL_TCLKIN                (2 << CM_DPLL_DMTIMER1MS_CLKSEL_SHIFT) /* Select TCLKIN clock */
#  define CM_DPLL_DMTIMER1_CLKSEL_CLK_RC32K             (3 << CM_DPLL_DMTIMER1MS_CLKSEL_SHIFT) /* Select CLK_RC32K clock */
#  define CM_DPLL_DMTIMER1_CLKSEL_CLK_32768             (4 << CM_DPLL_DMTIMER1MS_CLKSEL_SHIFT) /* Selects the CLK_32768 from 32KHz Crystal Osc */

#endif /* __ARCH_ARM_SRC_AM335X_HARDWARE_AM335X_CM_H */
