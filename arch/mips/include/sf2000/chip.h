/****************************************************************************
 * arch/mips/include/pic32mx/chip.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __ARCH_MIPS_INCLUDE_HC1512_CHIP_H
#define __ARCH_MIPS_INCLUDE_HC1512_CHIP_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Configuration ************************************************************/

#if defined(CONFIG_ARCH_CHIP_HC1512)
#  define CHIP_HC1512     1
#  define CHIP_NPINS        128 /* Package SOIC, SSOP, SPDIP, QFN */
#  define CHIP_MHZ          800 /* 800MHz maximum frequency */
#  define CHIP_BOOTFLASH_KB 16  /* 16Kb boot FLASH */
#  define CHIP_PROGFLASH_KB 16  /* 16Kb program FLASH */
#  define CHIP_DATAMEM_KB   16  /* 16Kb data memory */
#  undef  CHIP_CHE              /* No pre-fetch cache controller */
#  define CHIP_NPORTS       3   /* 3 ports (A, B, C) */
#  define CHIP_NTIMERS      8   /* 8 timers */
#  define CHIP_NIC          5   /* 5 input capture */
#  define CHIP_NOC          5   /* 5 output compare */
#  define CHIP_NDMACH       4   /* 4 programmable DMA channels */
#  define CHIP_NUSBDMACHAN  1   /* Has dedicated DMA channels */
#  define CHIP_CTMU         1   /* Has CTMU */
#  define CHIP_VRFSEL       1   /* Comparator voltage reference selection */
#  undef  CHIP_TRACE            /* No trace capability */
#  define CHIP_NUARTS       2   /* 2 UARTS */
#  define CHIP_UARTFIFOD    8   /* 8 level deep UART FIFOs */
#  define CHIP_NSPI         2   /* 2 SPI/I2S interfaces */
#  define CHIP_NI2C         3   /* 2 I2C interfaces */
#  define CHIP_NCAN         0   /* No CAN interface */
#  define CHIP_NADC10       10  /* 10 10-bit ADC channels */
#  define CHIP_NCM          3   /* 3 Analog comparators */
#  define CHIP_USBOTG       1   /* No USB OTG */
#  define CHIP_RTCC         1   /* Has RTCC */
#  define CHIP_PMP          1   /* Have parallel master port */
#  define CHIP_PSP          0   /* No parallel slave port (?) */
#  define CHIP_NETHERNET    0   /* No Ethernet */
#  define CHIP_JTAG         0   /* Has JTAG */
#  define CHIP_NI2C         2   /* 2 I2C interfaces */
#  define CHIP_NCAN         0   /* No CAN interface */
#  define CHIP_NADC10       1   /* 1 8-bit ADC channels */
#  define CHIP_NCM          3   /* 3 Analog comparators */
#  define CHIP_USBOTG       0   /* No USB OTG */
#  define CHIP_RTCC         1   /* Has RTCC */
#  define CHIP_PMP          1   /* Have parallel master port */
#  define CHIP_PSP          0   /* No parallel slave port (?) */
#  define CHIP_NETHERNET    0   /* No Ethernet */
#  define CHIP_JTAG         0   /* No JTAG */
#else
#  error "Unrecognized HC1512 device"
#endif

/* IPL priority levels ******************************************************/

/* These priorities will be used by the core to properly disable/mask
 * interrupts.
 */

#define CHIP_MIN_PRIORITY    1                       /* Minimum priority. */
#define CHIP_MAX_PRIORITY    7                       /* Maximum priority. */
#define CHIP_SW0_PRIORITY    (CHIP_MAX_PRIORITY - 1) /* SW0 priority. */

/****************************************************************************
 * Public Types
 ****************************************************************************/

#ifndef __ASSEMBLY__

/****************************************************************************
 * Inline Functions
 ****************************************************************************/

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

#ifdef __cplusplus
#define EXTERN extern "C"
extern "C"
{
#else
#define EXTERN extern
#endif

#undef EXTERN
#ifdef __cplusplus
}
#endif

#endif /* __ASSEMBLY__ */
#endif /* __ARCH_MIPS_INCLUDE_HC1512_CHIP_H */
