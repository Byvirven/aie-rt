/******************************************************************************
* Copyright (C) 2021 - 2022 Xilinx, Inc.  All rights reserved.
* SPDX-License-Identifier: MIT
******************************************************************************/


/*****************************************************************************/
/**
* @file xaie_lite_regdef_aieml.h
* @{
*
* This header file defines register offsets for lightweight version for AIE ML
* APIs.
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver   Who     Date     Changes
* ----- ------  -------- -----------------------------------------------------
* 1.0   Nishad  08/30/2021  Initial creation
* </pre>
*
******************************************************************************/
#ifndef XAIE_LITE_REGDEF_AIEML_H
#define XAIE_LITE_REGDEF_AIEML_H

/***************************** Include Files *********************************/
#include "xaiemlgbl_params.h"

/************************** Constant Definitions *****************************/
#define XAIE_EVENT_MASK					0x7F

#define XAIE_NOC_MOD_INTR_L2_ENABLE			XAIEMLGBL_NOC_MODULE_INTERRUPT_CONTROLLER_2ND_LEVEL_ENABLE
#define XAIE_NOC_MOD_INTR_L2_DISABLE			XAIEMLGBL_NOC_MODULE_INTERRUPT_CONTROLLER_2ND_LEVEL_DISABLE
#define XAIE_NOC_MOD_INTR_L2_MASK			XAIEMLGBL_NOC_MODULE_INTERRUPT_CONTROLLER_2ND_LEVEL_MASK
#define XAIE_NOC_MOD_INTR_L2_STATUS			XAIEMLGBL_NOC_MODULE_INTERRUPT_CONTROLLER_2ND_LEVEL_STATUS
#define XAIE_NOC_MOD_INTR_L2_IRQ			XAIEMLGBL_NOC_MODULE_INTERRUPT_CONTROLLER_2ND_LEVEL_INTERRUPT

#define XAIE_PL_MOD_INTR_L1_SW_REGOFF			0x30U
#define XAIE_PL_MOD_INTR_L1_STATUS			XAIEMLGBL_PL_MODULE_INTERRUPT_CONTROLLER_1ST_LEVEL_STATUS_A
#define XAIE_PL_MOD_INTR_L1_IRQ_EVENTA			XAIEMLGBL_PL_MODULE_INTERRUPT_CONTROLLER_1ST_LEVEL_IRQ_EVENT_A

#define XAIE_PL_MOD_EVENT_GROUP_ERROR0			64
#define XAIE_PL_MOD_EVENT_BROADCAST0			110

#define XAIE_PL_MOD_BASE_EVENT_STATUS			XAIEMLGBL_PL_MODULE_EVENT_STATUS0
#define XAIE_PL_MOD_GROUP_ERROR0_ENABLE			XAIEMLGBL_PL_MODULE_EVENT_GROUP_ERRORS_ENABLE
#define XAIE_PL_MOD_COL_RST_REGOFF			XAIEMLGBL_PL_MODULE_COLUMN_RESET_CONTROL
#define XAIE_PL_MOD_COL_RST_LSB				XAIEMLGBL_PL_MODULE_COLUMN_RESET_CONTROL_RESET_LSB
#define XAIE_PL_MOD_COL_RST_MASK			XAIEMLGBL_PL_MODULE_COLUMN_RESET_CONTROL_RESET_MASK

#define XAIE_PL_MOD_COL_CLKCNTR_REGOFF			XAIEMLGBL_PL_MODULE_COLUMN_CLOCK_CONTROL
#define XAIE_PL_MOD_COL_CLKCNTR_CLKBUF_ENABLE_LSB	XAIEMLGBL_PL_MODULE_COLUMN_CLOCK_CONTROL_CLOCK_BUFFER_ENABLE_LSB
#define XAIE_PL_MOD_COL_CLKCNTR_CLKBUF_ENABLE_MASK	XAIEMLGBL_PL_MODULE_COLUMN_CLOCK_CONTROL_CLOCK_BUFFER_ENABLE_MASK

#define XAIE_PL_MOD_TILE_CNTR_REGOFF			XAIEMLGBL_PL_MODULE_TILE_CONTROL
#define XAIE_PL_MOD_TILE_CNTR_ISOLATE_EAST_LSB		XAIEMLGBL_PL_MODULE_TILE_CONTROL_ISOLATE_FROM_EAST_LSB
#define XAIE_PL_MOD_TILE_CNTR_ISOLATE_EAST_MASK		XAIEMLGBL_PL_MODULE_TILE_CONTROL_ISOLATE_FROM_EAST_MASK
#define XAIE_PL_MOD_TILE_CNTR_ISOLATE_NORTH_LSB		XAIEMLGBL_PL_MODULE_TILE_CONTROL_ISOLATE_FROM_NORTH_LSB
#define XAIE_PL_MOD_TILE_CNTR_ISOLATE_NORTH_MASK	XAIEMLGBL_PL_MODULE_TILE_CONTROL_ISOLATE_FROM_NORTH_MASK
#define XAIE_PL_MOD_TILE_CNTR_ISOLATE_WEST_LSB		XAIEMLGBL_PL_MODULE_TILE_CONTROL_ISOLATE_FROM_WEST_LSB
#define XAIE_PL_MOD_TILE_CNTR_ISOLATE_WEST_MASK		XAIEMLGBL_PL_MODULE_TILE_CONTROL_ISOLATE_FROM_WEST_MASK
#define XAIE_PL_MOD_TILE_CNTR_ISOLATE_SOUTH_LSB		XAIEMLGBL_PL_MODULE_TILE_CONTROL_ISOLATE_FROM_SOUTH_LSB
#define XAIE_PL_MOD_TILE_CNTR_ISOLATE_SOUTH_MASK	XAIEMLGBL_PL_MODULE_TILE_CONTROL_ISOLATE_FROM_SOUTH_MASK

#define XAIE_NOC_AXIMM_CONF_REGOFF			XAIEMLGBL_NOC_MODULE_ME_AXIMM_CONFIG
#define XAIE_NOC_AXIMM_CONF_SLVERR_BLOCK_LSB		XAIEMLGBL_NOC_MODULE_ME_AXIMM_CONFIG_SLVERR_BLOCK_LSB
#define XAIE_NOC_AXIMM_CONF_SLVERR_BLOCK_MASK		XAIEMLGBL_NOC_MODULE_ME_AXIMM_CONFIG_SLVERR_BLOCK_MASK
#define XAIE_NOC_AXIMM_CONF_DECERR_BLOCK_LSB		XAIEMLGBL_NOC_MODULE_ME_AXIMM_CONFIG_DECERR_BLOCK_LSB
#define XAIE_NOC_AXIMM_CONF_DECERR_BLOCK_MASK		XAIEMLGBL_NOC_MODULE_ME_AXIMM_CONFIG_DECERR_BLOCK_MASK

#define XAIE_CORE_MOD_EVENT_GROUP_ERROR0		48
#define XAIE_CORE_MOD_EVENT_BROADCAST0			107

#define XAIE_CORE_MOD_BASE_EVENT_STATUS			XAIEMLGBL_CORE_MODULE_EVENT_STATUS0
#define XAIE_CORE_MOD_BASE_EVENT_BROADCAST		XAIEMLGBL_CORE_MODULE_EVENT_BROADCAST0
#define XAIE_CORE_MOD_GROUP_ERROR0_ENABLE		XAIEMLGBL_CORE_MODULE_EVENT_GROUP_ERRORS0_ENABLE

#define XAIE_CORE_MOD_TILE_CNTR_REGOFF			XAIEMLGBL_CORE_MODULE_TILE_CONTROL
#define XAIE_CORE_MOD_TILE_CNTR_ISOLATE_EAST_LSB	XAIEMLGBL_CORE_MODULE_TILE_CONTROL_ISOLATE_FROM_EAST_LSB
#define XAIE_CORE_MOD_TILE_CNTR_ISOLATE_EAST_MASK	XAIEMLGBL_CORE_MODULE_TILE_CONTROL_ISOLATE_FROM_EAST_MASK
#define XAIE_CORE_MOD_TILE_CNTR_ISOLATE_NORTH_LSB	XAIEMLGBL_CORE_MODULE_TILE_CONTROL_ISOLATE_FROM_NORTH_LSB
#define XAIE_CORE_MOD_TILE_CNTR_ISOLATE_NORTH_MASK	XAIEMLGBL_CORE_MODULE_TILE_CONTROL_ISOLATE_FROM_NORTH_MASK
#define XAIE_CORE_MOD_TILE_CNTR_ISOLATE_WEST_LSB	XAIEMLGBL_CORE_MODULE_TILE_CONTROL_ISOLATE_FROM_WEST_LSB
#define XAIE_CORE_MOD_TILE_CNTR_ISOLATE_WEST_MASK	XAIEMLGBL_CORE_MODULE_TILE_CONTROL_ISOLATE_FROM_WEST_MASK
#define XAIE_CORE_MOD_TILE_CNTR_ISOLATE_SOUTH_LSB	XAIEMLGBL_CORE_MODULE_TILE_CONTROL_ISOLATE_FROM_SOUTH_LSB
#define XAIE_CORE_MOD_TILE_CNTR_ISOLATE_SOUTH_MASK	XAIEMLGBL_CORE_MODULE_TILE_CONTROL_ISOLATE_FROM_SOUTH_MASK

#define XAIE_CORE_MOD_MEM_CNTR_REGOFF			XAIEMLGBL_CORE_MODULE_MEMORY_CONTROL
#define XAIE_CORE_MOD_MEM_CNTR_ZEROISATION_LSB		XAIEMLGBL_CORE_MODULE_MEMORY_CONTROL_MEMORY_ZEROISATION_LSB
#define XAIE_CORE_MOD_MEM_CNTR_ZEROISATION_MASK		XAIEMLGBL_CORE_MODULE_MEMORY_CONTROL_MEMORY_ZEROISATION_MASK

#define XAIE_MEM_MOD_EVENT_GROUP_ERROR0			87
#define XAIE_MEM_MOD_EVENT_BROADCAST0			107

#define XAIE_MEM_MOD_BASE_EVENT_STATUS			XAIEMLGBL_MEMORY_MODULE_EVENT_STATUS0
#define XAIE_MEM_MOD_BASE_EVENT_BROADCAST		XAIEMLGBL_MEMORY_MODULE_EVENT_BROADCAST0
#define XAIE_MEM_MOD_GROUP_ERROR0_ENABLE		XAIEMLGBL_MEMORY_MODULE_EVENT_GROUP_ERROR_ENABLE

#define XAIE_MEM_MOD_MEM_CNTR_REGOFF			XAIEMLGBL_MEMORY_MODULE_MEMORY_CONTROL
#define XAIE_MEM_MOD_MEM_CNTR_ZEROISATION_LSB		XAIEMLGBL_MEMORY_MODULE_MEMORY_CONTROL_MEMORY_ZEROISATION_LSB
#define XAIE_MEM_MOD_MEM_CNTR_ZEROISATION_MASK		XAIEMLGBL_MEMORY_MODULE_MEMORY_CONTROL_MEMORY_ZEROISATION_MASK

#define XAIE_MEM_TILE_EVENT_GROUP_ERROR0		129
#define XAIE_MEM_TILE_EVENT_BROADCAST0			142

#define XAIE_MEM_TILE_BASE_EVENT_STATUS			XAIEMLGBL_MEM_TILE_MODULE_EVENT_STATUS0
#define XAIE_MEM_TILE_BASE_EVENT_BROADCAST		XAIEMLGBL_MEM_TILE_MODULE_EVENT_BROADCAST0
#define XAIE_MEM_TILE_GROUP_ERROR0_ENABLE		XAIEMLGBL_MEM_TILE_MODULE_EVENT_GROUP_ERROR_ENABLE

#define XAIE_MEM_TILE_MOD_TILE_CNTR_REGOFF		XAIEMLGBL_MEM_TILE_MODULE_TILE_CONTROL
#define XAIE_MEM_TILE_MOD_TILE_CNTR_ISOLATE_EAST_LSB	XAIEMLGBL_MEM_TILE_MODULE_TILE_CONTROL_ISOLATE_FROM_EAST_LSB
#define XAIE_MEM_TILE_MOD_TILE_CNTR_ISOLATE_EAST_MASK	XAIEMLGBL_MEM_TILE_MODULE_TILE_CONTROL_ISOLATE_FROM_EAST_MASK
#define XAIE_MEM_TILE_MOD_TILE_CNTR_ISOLATE_NORTH_LSB	XAIEMLGBL_MEM_TILE_MODULE_TILE_CONTROL_ISOLATE_FROM_NORTH_LSB
#define XAIE_MEM_TILE_MOD_TILE_CNTR_ISOLATE_NORTH_MASK	XAIEMLGBL_MEM_TILE_MODULE_TILE_CONTROL_ISOLATE_FROM_NORTH_MASK
#define XAIE_MEM_TILE_MOD_TILE_CNTR_ISOLATE_WEST_LSB	XAIEMLGBL_MEM_TILE_MODULE_TILE_CONTROL_ISOLATE_FROM_WEST_LSB
#define XAIE_MEM_TILE_MOD_TILE_CNTR_ISOLATE_WEST_MASK	XAIEMLGBL_MEM_TILE_MODULE_TILE_CONTROL_ISOLATE_FROM_WEST_MASK
#define XAIE_MEM_TILE_MOD_TILE_CNTR_ISOLATE_SOUTH_LSB	XAIEMLGBL_MEM_TILE_MODULE_TILE_CONTROL_ISOLATE_FROM_SOUTH_LSB
#define XAIE_MEM_TILE_MOD_TILE_CNTR_ISOLATE_SOUTH_MASK	XAIEMLGBL_MEM_TILE_MODULE_TILE_CONTROL_ISOLATE_FROM_SOUTH_MASK

#define XAIE_MEM_TILE_MOD_MEM_CNTR_REGOFF		XAIEMLGBL_MEM_TILE_MODULE_MEMORY_CONTROL
#define XAIE_MEM_TILE_MEM_CNTR_ZEROISATION_LSB		XAIEMLGBL_MEM_TILE_MODULE_MEMORY_CONTROL_MEMORY_ZEROISATION_LSB
#define XAIE_MEM_TILE_MEM_CNTR_ZEROISATION_MASK		XAIEMLGBL_MEM_TILE_MODULE_MEMORY_CONTROL_MEMORY_ZEROISATION_MASK

/* Tile control isolation bits are the same across tiles */
#define XAIE_TILE_CNTR_ISOLATE_EAST_MASK		XAIE_CORE_MOD_TILE_CNTR_ISOLATE_EAST_MASK
#define XAIE_TILE_CNTR_ISOLATE_WEST_MASK		XAIE_CORE_MOD_TILE_CNTR_ISOLATE_WEST_MASK

/* DMA Status Registers */
#define XAIE_TILE_DMA_S2MM_CHANNEL_STATUS_REGOFF	XAIEMLGBL_MEMORY_MODULE_DMA_S2MM_STATUS_0
#define XAIE_TILE_DMA_S2MM_CHANNEL_STATUS_MASK		XAIEMLGBL_MEMORY_MODULE_DMA_S2MM_STATUS_0_STATUS_MASK
#define XAIE_TILE_DMA_MM2S_CHANNEL_STATUS_REGOFF	XAIEMLGBL_MEMORY_MODULE_DMA_MM2S_STATUS_0
#define XAIE_TILE_DMA_MM2S_CHANNEL_STATUS_MASK		XAIEMLGBL_MEMORY_MODULE_DMA_MM2S_STATUS_0_STATUS_MASK

#define XAIE_MEM_TILE_DMA_S2MM_CHANNEL_STATUS_REGOFF	XAIEMLGBL_MEM_TILE_MODULE_DMA_S2MM_STATUS_0
#define XAIE_MEM_TILE_DMA_S2MM_CHANNEL_STATUS_MASK	XAIEMLGBL_MEM_TILE_MODULE_DMA_S2MM_STATUS_0_STATUS_MASK
#define XAIE_MEM_TILE_DMA_MM2S_CHANNEL_STATUS_REGOFF	XAIEMLGBL_MEM_TILE_MODULE_DMA_MM2S_STATUS_0
#define XAIE_MEM_TILE_DMA_MM2S_CHANNEL_STATUS_MASK	XAIEMLGBL_MEM_TILE_MODULE_DMA_MM2S_STATUS_0_STATUS_MASK

#define XAIE_SHIM_DMA_S2MM_CHANNEL_STATUS_REGOFF	XAIEMLGBL_NOC_MODULE_DMA_S2MM_STATUS_0
#define XAIE_SHIM_DMA_S2MM_CHANNEL_STATUS_MASK		XAIEMLGBL_NOC_MODULE_DMA_S2MM_STATUS_0_STATUS_MASK
#define XAIE_SHIM_DMA_MM2S_CHANNEL_STATUS_REGOFF	XAIEMLGBL_NOC_MODULE_DMA_MM2S_STATUS_0
#define XAIE_SHIM_DMA_MM2S_CHANNEL_STATUS_MASK		XAIEMLGBL_NOC_MODULE_DMA_MM2S_STATUS_0_STATUS_MASK

/* Module reset control registers */
#define XAIE_AIE_TILE_MODULE_RESET_REGOFF		XAIEMLGBL_CORE_MODULE_MODULE_RESET_CONTROL
#define XAIE_AIE_TILE_CORE_MODULE_RESET_LSB		XAIEMLGBL_CORE_MODULE_MODULE_RESET_CONTROL_CORE_MODULE_RESET_LSB
#define XAIE_AIE_TILE_CORE_MODULE_RESET_MASK		XAIEMLGBL_CORE_MODULE_MODULE_RESET_CONTROL_CORE_MODULE_RESET_MASK
#define XAIE_AIE_TILE_MEM_MODULE_RESET_LSB		XAIEMLGBL_CORE_MODULE_MODULE_RESET_CONTROL_MEMORY_MODULE_RESET_LSB
#define XAIE_AIE_TILE_MEM_MODULE_RESET_MASK		XAIEMLGBL_CORE_MODULE_MODULE_RESET_CONTROL_MEMORY_MODULE_RESET_MASK

#define XAIE_MEM_TILE_MODULE_RESET_REGOFF		XAIEMLGBL_MEM_TILE_MODULE_MODULE_RESET_CONTROL
#define XAIE_MEM_TILE_MEM_MODULE_RESET_LSB		XAIEMLGBL_MEM_TILE_MODULE_MODULE_RESET_CONTROL_MEMORY_RESET_LSB
#define XAIE_MEM_TILE_MEM_MODULE_RESET_MASK		XAIEMLGBL_MEM_TILE_MODULE_MODULE_RESET_CONTROL_MEMORY_RESET_MASK

#define XAIE_SHIM_TILE_NOC_MODULE_RESET_REGOFF		XAIEMLGBL_PL_MODULE_MODULE_RESET_CONTROL_1
#define XAIE_SHIM_TILE_NOC_MODULE_RESET_LSB		XAIEMLGBL_PL_MODULE_MODULE_RESET_CONTROL_1_NOC_MODULE_RESET_LSB
#define XAIE_SHIM_TILE_NOC_MODULE_RESET_MASK		XAIEMLGBL_PL_MODULE_MODULE_RESET_CONTROL_1_NOC_MODULE_RESET_MASK

/* AIE Core Vector Registers */
#define XAIE_AIE_TILE_CORE_AMLL0_PART1_REGOFF		XAIEMLGBL_CORE_MODULE_CORE_AMLL0_PART1
#define XAIE_AIE_TILE_CORE_AMLL0_PART1_SIZE		0x480

#define XAIE_AIE_TILE_CORE_WL0_PART1_REGOFF		XAIEMLGBL_CORE_MODULE_CORE_WL0_PART1
#define XAIE_AIE_TILE_CORE_WL0_PART1_SIZE		0x300

#define XAIE_AIE_TILE_CORE_R0_REGOFF			XAIEMLGBL_CORE_MODULE_CORE_R0
#define XAIE_AIE_TILE_CORE_R0_COUNT			32
#define XAIE_AIE_TILE_CORE_R0_STEP_SIZE			0x10

/************************** Variable Definitions *****************************/
/************************** Function Prototypes  *****************************/

#endif		/* end of protection macro */

/** @} */
