/*
 *  arch/arm/mach-sunxi/arisc/include/arisc_cfgs.h
 *
 * Copyright (c) 2012 Allwinner.
 * 2012-05-01 Written by sunny (sunny@allwinnertech.com).
 * 2012-10-01 Written by superm (superm@allwinnertech.com).
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __ARISC_CFGS_H
#define __ARISC_CFGS_H

/* arisc software version number */
#if defined CONFIG_ARCH_SUN8IW1P1
#define ARISC_VERSIONS (100)
#elif defined CONFIG_ARCH_SUN8IW3P1
#define ARISC_VERSIONS (101)
#elif defined CONFIG_ARCH_SUN8IW5P1
#define ARISC_VERSIONS (102)
#elif defined CONFIG_ARCH_SUN8IW6P1
#define ARISC_VERSIONS (103)
#elif defined CONFIG_ARCH_SUN8IW7P1
#define ARISC_VERSIONS (104)
#elif defined CONFIG_ARCH_SUN8IW9P1
#define ARISC_VERSIONS (105)
#elif defined CONFIG_ARCH_SUN8IW12P1
#define ARISC_VERSIONS (106)
#elif defined CONFIG_ARCH_SUN8IW15P1
#define ARISC_VERSIONS (107)
#elif defined CONFIG_ARCH_SUN8IW17P1
#define ARISC_VERSIONS (117)
#elif defined CONFIG_ARCH_SUN50IW1P1
#define ARISC_VERSIONS (110)
#elif defined CONFIG_ARCH_SUN50IW2P1
#define ARISC_VERSIONS (120)
#elif defined CONFIG_ARCH_SUN50IW3P1
#define ARISC_VERSIONS (130)
#elif defined CONFIG_ARCH_SUN50IW6P1
#define ARISC_VERSIONS (160)
#elif defined CONFIG_ARCH_SUN9IW1P1
#define ARISC_VERSIONS (200)
#else
#error "please select a platform\n"
#endif

/* debugger system */
#define ARISC_DEBUG_ON
#define ARISC_DEBUG_LEVEL           (3) /* debug level */

#define ARISC_DEV_CLKSRC_NUM        (4)     /* the number of dev clocksource support */

/* the max number of cached message frame */
#define ARISC_MESSAGE_CACHED_MAX    (4)

/* the start address of message pool */
#if (defined CONFIG_ARCH_SUN8IW1P1) || (defined CONFIG_ARCH_SUN8IW3P1) || (defined CONFIG_ARCH_SUN8IW5P1) || \
    (defined CONFIG_ARCH_SUN8IW6P1) || (defined CONFIG_ARCH_SUN8IW9P1) || (defined CONFIG_ARCH_SUN8IW12P1)
	#define ARISC_MESSAGE_POOL_START    (0x13000)
	#define ARISC_MESSAGE_POOL_END      (0x14000)
	#define ARISC_PARA_ADDR_OFFSET      (arisc_cfg.space[0].size - 4 * 1024)
#elif (defined CONFIG_ARCH_SUN8IW7P1)
	#define ARISC_SECURE_PARAS_STORE    (0X43000000)
	#define ARISC_MESSAGE_POOL_START    (0x0B800)
	#define ARISC_MESSAGE_POOL_END      (0x0C000)
	#define ARISC_PARA_ADDR_OFFSET      (SUNXI_SRAM_A2_SIZE - 2 * 1024)
#elif defined CONFIG_ARCH_SUN9IW1P1
	#define ARISC_MESSAGE_POOL_START    (0x27000)
	#define ARISC_MESSAGE_POOL_END      (0x28000)
	#define ARISC_PARA_ADDR_OFFSET      (SUNXI_SRAM_A2_SIZE - 4 * 1024)
#endif

/* spinlock max timeout, base on ms */
#define ARISC_SPINLOCK_TIMEOUT      (100)

/* send message max timeout, base on ms */
#define ARISC_SEND_MSG_TIMEOUT      (4000)

/* hwmsgbox channels configure */
#define ARISC_HWMSGBOX_ARISC_ASYN_TX_CH (0)
#define ARISC_HWMSGBOX_ARISC_ASYN_RX_CH (1)
#define ARISC_HWMSGBOX_ARISC_SYN_TX_CH  (2)
#define ARISC_HWMSGBOX_ARISC_SYN_RX_CH  (3)
#define ARISC_HWMSGBOX_AC327_SYN_TX_CH  (4)
#define ARISC_HWMSGBOX_AC327_SYN_RX_CH  (5)

#define ARISC_DVFS_VF_TABLE_MAX         (16)
/* ir config */
#define ARISC_IR_KEY_SUP_NUM            (8)     /* the number of IR remote support */

#define ARISC_DEV_CLKSRC_NUM            (4)     /* the number of dev clocksource support */


#endif /* __ARISC_CFGS_H */
