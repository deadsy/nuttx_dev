/************************************************************************************
 * arch/arm/src/lpc17xx/chip/lpc176x_pinconfig.h
 *
 *   Copyright (C) 2009-2011, 2013 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
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
 ************************************************************************************/

#ifndef __ARCH_ARM_SRC_LPC17XX_CHIP_LPC176X_PINCONFIG_H
#define __ARCH_ARM_SRC_LPC17XX_CHIP_LPC176X_PINCONFIG_H

/************************************************************************************
 * Included Files
 ************************************************************************************/

#include <nuttx/config.h>

/************************************************************************************
 * Pre-processor Definitions
 ************************************************************************************/
/* GPIO pin definitions *************************************************************/
/* NOTE that functions have a alternate pins that can be selected.  These alternates
 * are identified with a numerica suffix like _1, _2, or _3.  Your board.h file
 * should select the correct alternative for your board by including definitions
 * such as:
 *
 * #define GPIO_UART1_RXD GPIO_UART1_RXD_1
 *
 * (without the suffix)
 */

#define GPIO_CAN1_RD_1     (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN0)
#define GPIO_UART3_TXD_1   (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN0)
#define GPIO_I2C1_SDA_1    (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN0)
#define GPIO_CAN1_TD_1     (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN1)
#define GPIO_UART3_RXD_1   (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN1)
#define GPIO_I2C1_SCL_1    (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN1)
#define GPIO_UART0_TXD     (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN2)
#define GPIO_AD0p7         (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN2)
#define GPIO_UART0_RXD     (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN3)
#define GPIO_AD0p6         (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN3)
#define GPIO_I2S_RXCLK_1   (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN4)
#define GPIO_CAN2_RD_1     (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN4)
#define GPIO_CAP2p0        (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN4)
#define GPIO_I2S_RXWS_1    (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN5)
#define GPIO_CAN2_TD_1     (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN5)
#define GPIO_CAP2p1        (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN5)
#define GPIO_I2S_RXSDA_1   (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN6)
#define GPIO_SSP1_SSEL     (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN6)
#define GPIO_MAT2p0_1      (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN6)
#define GPIO_I2S_TXCLK_1   (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN7)
#define GPIO_SSP1_SCK_1    (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN7)
#define GPIO_MAT2p1_1      (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN7)
#define GPIO_I2S_TXWS_1    (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN8)
#define GPIO_SSP1_MISO     (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN8)
#define GPIO_MAT2p2        (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN8)
#define GPIO_I2S_TXSDA_1   (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN9)
#define GPIO_SSP1_MOSI     (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN9)
#define GPIO_MAT2p3        (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN9)
#define GPIO_UART2_TXD_1   (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN10)
#define GPIO_I2C2_SDA      (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN10)
#define GPIO_MAT3p0        (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN10)
#define GPIO_UART2_RXD_1   (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN11)
#define GPIO_I2C2_SCL      (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN11)
#define GPIO_MAT3p1        (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN11)
#define GPIO_UART1_TXD_1   (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN15)
#define GPIO_SSP0_SCK_1    (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN15)
#define GPIO_SPI_SCK       (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN15)
#define GPIO_UART1_RXD_1   (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN16)
#define GPIO_SSP0_SSEL_1   (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN16)
#define GPIO_SPI_SSEL      (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN16)
#define GPIO_UART1_CTS_1   (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN17)
#define GPIO_SSP0_MISO_1   (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN17)
#define GPIO_SPI_MISO      (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN17)
#define GPIO_UART1_DCD_1   (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN18)
#define GPIO_SSP0_MOSI_1   (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN18)
#define GPIO_SPI_MOSI      (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN18)
#define GPIO_UART1_DSR_1   (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN19)
#define GPIO_I2C1_SDA_2    (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN19)
#define GPIO_UART1_DTR_1   (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN20)
#define GPIO_I2C1_SCL_2    (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN20)
#define GPIO_UART1_RI_1    (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN21)
#define GPIO_CAN1_RD_2     (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN21)
#define GPIO_UART1_RTS_1   (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN22)
#define GPIO_CAN1_TD_2     (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN22)
#define GPIO_AD0p0         (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN23)
#define GPIO_I2S_RXCLK_2   (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN23)
#define GPIO_CAP3p0        (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN23)
#define GPIO_AD0p1         (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN24)
#define GPIO_I2S_RXWS_2    (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN24)
#define GPIO_CAP3p1        (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN24)
#define GPIO_AD0p2         (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN25)
#define GPIO_I2S_RXSDA_2   (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN25)
#define GPIO_UART3_TXD_2   (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN25)
#define GPIO_AD0p3         (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN26)
#define GPIO_AOUT          (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN26)
#define GPIO_UART3_RXD_2   (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN26)
#define GPIO_I2C0_SDA      (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN27)
#define GPIO_USB_SDA       (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN27)
#define GPIO_I2C0_SCL      (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN28)
#define GPIO_USB_SCL       (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN28)
#define GPIO_USB_DP        (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN29)
#define GPIO_USB_DM        (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT0 | GPIO_PIN30)
#define GPIO_ENET_TXD0     (GPIO_ALT1 | GPIO_FLOAT  | GPIO_PORT1 | GPIO_PIN0)
#define GPIO_ENET_TXD1     (GPIO_ALT1 | GPIO_FLOAT  | GPIO_PORT1 | GPIO_PIN1)
#define GPIO_ENET_TXEN     (GPIO_ALT1 | GPIO_FLOAT  | GPIO_PORT1 | GPIO_PIN4)
#define GPIO_ENET_CRS      (GPIO_ALT1 | GPIO_FLOAT  | GPIO_PORT1 | GPIO_PIN8)
#define GPIO_ENET_RXD0     (GPIO_ALT1 | GPIO_FLOAT  | GPIO_PORT1 | GPIO_PIN9)
#define GPIO_ENET_RXD1     (GPIO_ALT1 | GPIO_FLOAT  | GPIO_PORT1 | GPIO_PIN10)
#define GPIO_ENET_RXER     (GPIO_ALT1 | GPIO_FLOAT  | GPIO_PORT1 | GPIO_PIN14)
#define GPIO_ENET_REFCLK   (GPIO_ALT1 | GPIO_FLOAT  | GPIO_PORT1 | GPIO_PIN15)
#define GPIO_ENET_MDC_1    (GPIO_ALT1 | GPIO_FLOAT  | GPIO_PORT1 | GPIO_PIN16)
#define GPIO_ENET_MDIO_1   (GPIO_ALT1 | GPIO_FLOAT  | GPIO_PORT1 | GPIO_PIN17)
#define GPIO_USB_UPLED     (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN18)
#define GPIO_PWM1p1_1      (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN18)
#define GPIO_CAP1p0        (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN18)
#define GPIO_MCPWM_MCOA0   (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN19)
#define GPIO_USB_PPWR      (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN19)
#define GPIO_CAP1p1        (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN19)
#define GPIO_MCPWM_MCI0    (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN20)
#define GPIO_PWM1p2_1      (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN20)
#define GPIO_SSP0_SCK_2    (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN20)
#define GPIO_MCPWM_MCABORT (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN21)
#define GPIO_PWM1p3_1      (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN21)
#define GPIO_SSP0_SSEL_2   (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN21)
#define GPIO_MCPWM_MCOB0   (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN22)
#define GPIO_USB_PWRD      (GPIO_ALT2 | GPIO_PULLDN | GPIO_PORT1 | GPIO_PIN22)
#define GPIO_MAT1p0        (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN22)
#define GPIO_MCPWM_MCI1    (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN23)
#define GPIO_PWM1p4_1      (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN23)
#define GPIO_SSP0_MISO_2   (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN23)
#define GPIO_MCPWM_MCI2    (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN24)
#define GPIO_PWM1p5_1      (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN24)
#define GPIO_SSP0_MOSI_2   (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN24)
#define GPIO_MCPWM_MCOA1   (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN25)
#define GPIO_MAT1p1        (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN25)
#define GPIO_MCPWM_MCOB1   (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN26)
#define GPIO_PWM1p6_1      (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN26)
#define GPIO_CAP0p0        (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN26)
#define GPIO_CLKOUT        (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN27)
#define GPIO_USB_OVRCR     (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN27)
#define GPIO_CAP0p1        (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN27)
#define GPIO_MCPWM_MCOA2   (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN28)
#define GPIO_PCAP1p0_1     (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN28)
#define GPIO_MAT0p0_1      (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN28)
#define GPIO_MCPWM_MCOB2   (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN29)
#define GPIO_PCAP1p1       (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN29)
#define GPIO_MAT0p1_1      (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN29)
#define GPIO_USB_VBUS      (GPIO_ALT2 | GPIO_FLOAT  | GPIO_PORT1 | GPIO_PIN30)
#define GPIO_AD0p4         (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN30)
#define GPIO_SSP1_SCK_2    (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN31)
#define GPIO_AD0p5         (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT1 | GPIO_PIN31)
#define GPIO_PWM1p1_2      (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN0)
#define GPIO_UART1_TXD_2   (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN0)
#define GPIO_PWM1p2_2      (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN1)
#define GPIO_UART1_RXD_2   (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN1)
#define GPIO_PWM1p3_2      (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN2)
#define GPIO_UART1_CTS_2   (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN2)
#define GPIO_PWM1p4_2      (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN3)
#define GPIO_UART1_DCD_2   (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN3)
#define GPIO_PWM1p5_2      (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN4)
#define GPIO_UART1_DSR_2   (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN4)
#define GPIO_PWM1p6_2      (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN5)
#define GPIO_UART1_DTR_2   (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN5)
#define GPIO_PCAP1p0_2     (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN6)
#define GPIO_UART1_RI_2    (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN6)
#define GPIO_CAN2_RD_2     (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN7)
#define GPIO_UART1_RTS_2   (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN7)
#define GPIO_CAN2_TD_2     (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN8)
#define GPIO_UART2_TXD_2   (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN8)
#define GPIO_ENET_MDC_2    (GPIO_ALT3 | GPIO_FLOAT  | GPIO_PORT2 | GPIO_PIN8)
#define GPIO_USB_CONNECT   (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN9)
#define GPIO_UART2_RXD_2   (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN9)
#define GPIO_ENET_MDIO_2   (GPIO_ALT3 | GPIO_FLOAT  | GPIO_PORT2 | GPIO_PIN9)
#define GPIO_EINT0         (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN10)
#define GPIO_NMI           (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN10)
#define GPIO_EINT1         (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN11)
#define GPIO_I2S_TXCLK_2   (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN11)
#define GPIO_PEINT2        (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN12)
#define GPIO_I2S_TXWS_2    (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN12)
#define GPIO_EINT3         (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN13)
#define GPIO_I2S_TXSDA_2   (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT2 | GPIO_PIN13)
#define GPIO_MAT0p0_2      (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT3 | GPIO_PIN25)
#define GPIO_PWM1p2_3      (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT3 | GPIO_PIN25)
#define GPIO_STCLK         (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT3 | GPIO_PIN26)
#define GPIO_MAT0p1_2      (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT3 | GPIO_PIN26)
#define GPIO_PWM1p3_3      (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT3 | GPIO_PIN26)
#define GPIO_RXMCLK        (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT4 | GPIO_PIN28)
#define GPIO_MAT2p0_2      (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT4 | GPIO_PIN28)
#define GPIO_UART3_TXD_3   (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT4 | GPIO_PIN28)
#define GPIO_TXMCLK        (GPIO_ALT1 | GPIO_PULLUP | GPIO_PORT4 | GPIO_PIN29)
#define GPIO_MAT2p1_2      (GPIO_ALT2 | GPIO_PULLUP | GPIO_PORT4 | GPIO_PIN29)
#define GPIO_UART3_RXD_3   (GPIO_ALT3 | GPIO_PULLUP | GPIO_PORT4 | GPIO_PIN29)

/************************************************************************************
 * Public Types
 ************************************************************************************/

/************************************************************************************
 * Public Data
 ************************************************************************************/

/************************************************************************************
 * Public Function Prototypes
 ************************************************************************************/

 #endif /* __ARCH_ARM_SRC_LPC17XX_CHIP_LPC176X_PINCONFIG_H */
