/******************************************************************************
* Copyright (C) 2020 Xilinx, Inc.  All rights reserved.
* SPDX-License-Identifier: MIT
******************************************************************************/

/*****************************************************************************/
/**
*
* @file xdfemix_reg.h
* @addtogroup xdfemix_v1_0
* @{
*
* Contains the register definitions for dfemixer. This is
* created to be used initialy while waiting for IP.
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver   Who    Date     Changes
* ----- ---    -------- -----------------------------------------------
* 1.0   dc     07/22/20 Initial version
* </pre>
*
******************************************************************************/
#ifndef XDFEMIX_HW_H_
#define XDFEMIX_HW_H_

#ifdef __cplusplus
extern "C" {
#endif

/**************************** Definitions *******************************/
/* CORE functionality */
#define XDFEMIX_VERSION_OFFSET 0x00U /* Register offset */
#define XDFEMIX_VERSION_PATCH_WIDTH 8U
#define XDFEMIX_VERSION_PATCH_OFFSET 0U
#define XDFEMIX_VERSION_REVISION_WIDTH 8U
#define XDFEMIX_VERSION_REVISION_OFFSET 8U
#define XDFEMIX_VERSION_MINOR_WIDTH 8U
#define XDFEMIX_VERSION_MINOR_OFFSET 16U
#define XDFEMIX_VERSION_MAJOR_WIDTH 8U
#define XDFEMIX_VERSION_MAJOR_OFFSET 24U

#define XDFEMIX_RESET_OFFSET 0x04U /* Register offset */
#define XDFEMIX_RESET_OFF 0x00U
#define XDFEMIX_RESET_ON 0x01U
#define XDFEMIX_MODEL_PARAM_OFFSET 0x08U /* Register offset */
#define XDFEMIX_MODEL_PARAM_MODE_WIDTH 1U
#define XDFEMIX_MODEL_PARAM_MODE_OFFSET 0U
#define XDFEMIX_MODEL_PARAM_DOWNLINK 0U
#define XDFEMIX_MODEL_PARAM_UPLINK 1U
#define XDFEMIX_MODEL_PARAM_NUM_ANTENNA_WIDTH 4U
#define XDFEMIX_MODEL_PARAM_NUM_ANTENNA_OFFSET 4U
#define XDFEMIX_MODEL_PARAM_NUM_CC_PER_ANTENNA_WIDTH 4U
#define XDFEMIX_MODEL_PARAM_NUM_CC_PER_ANTENNA_OFFSET 8U
#define XDFEMIX_MODEL_PARAM_NUM_SLOT_CHANNELS_WIDTH 3U
#define XDFEMIX_MODEL_PARAM_NUM_SLOT_CHANNELS_OFFSET 12U
#define XDFEMIX_MODEL_PARAM_BYPASS_MIXER_WIDTH 1U
#define XDFEMIX_MODEL_PARAM_BYPASS_MIXER_OFFSET 16U
#define XDFEMIX_MODEL_PARAM_BYPASS_DUC_WIDTH 1U
#define XDFEMIX_MODEL_PARAM_BYPASS_DUC_OFFSET 20U
#define XDFEMIX_MODEL_PARAM_ENABLE_MIX_IF_WIDTH 1U
#define XDFEMIX_MODEL_PARAM_ENABLE_MIX_IF_OFFSET 24U

/* State */
#define XDFEMIX_STATE_OPERATIONAL_OFFSET 0x10U /* Register offset */
#define XDFEMIX_STATE_LOW_POWER_OFFSET 0x14U /* Register offset */

/* Triggers */
#define XDFEMIX_TRIGGERS_ACTIVATE_OFFSET 0x20U /* Register offset */
#define XDFEMIX_TRIGGERS_LOW_POWER_OFFSET 0x28U /* Register offset */
#define XDFEMIX_TRIGGERS_CC_UPDATE_OFFSET 0x2CU /* Register offset */
/* Bit fields */
#define XDFEMIX_TRIGGERS_ENABLE_WIDTH 1U
#define XDFEMIX_TRIGGERS_ENABLE_OFFSET 0U
#define XDFEMIX_TRIGGERS_ENABLE_DISABLED 0U
#define XDFEMIX_TRIGGERS_ENABLE_ENABLED 1U
#define XDFEMIX_TRIGGERS_SOURCE_WIDTH 2U
#define XDFEMIX_TRIGGERS_SOURCE_OFFSET 4U
#define XDFEMIX_TRIGGERS_SIGNAL_EDGE_WIDTH 2U
#define XDFEMIX_TRIGGERS_SIGNAL_EDGE_OFFSET 8U
#define XDFEMIX_TRIGGERS_ONE_SHOT_WIDTH 1U
#define XDFEMIX_TRIGGERS_ONE_SHOT_OFFSET 12U
#define XDFEMIX_TRIGGERS_ONE_SHOT_CONTINUOUS 0U
#define XDFEMIX_TRIGGERS_ONE_SHOT_ONESHOT 1U
#define XDFEMIX_TRIGGERS_TUSER_BIT_WIDTH 8U
#define XDFEMIX_TRIGGERS_TUSER_BIT_OFFSET 16U

/* IRQ status */
#define XDFEMIX_ISR 0x34U /* Register offset */
#define XDFEMIX_ISR_HAS_NOT_OCCURRED 0U
#define XDFEMIX_ISR_OCCURRED 1U
#define XDFEMIX_IER 0x38U /* Register offset */
#define XDFEMIX_IER_NO_CHANGE 0U
#define XDFEMIX_IER_SET_BIT 1U
#define XDFEMIX_IDR 0x3CU /* Register offset */
#define XDFEMIX_IDR_NO_CHANGE 0U
#define XDFEMIX_IDR_SET_BIT 1U
#define XDFEMIX_IMR 0x40U /* Register offset */
#define XDFEMIX_IMR_INTERRUPT 0U
#define XDFEMIX_IMR_NO_INTERRUPT 1U

#define XDFEMIX_DUC_DDC_OVERFLOW_WIDTH 1U
#define XDFEMIX_DUC_DDC_OVERFLOW_OFFSET 0U
#define XDFEMIX_MIXER_OVERFLOW_WIDTH 1U
#define XDFEMIX_MIXER_OVERFLOW_OFFSET 1U
#define XDFEMIX_CC_UPDATE_TRIGGERED_WIDTH 1U
#define XDFEMIX_CC_UPDATE_TRIGGERED_OFFSET 2U
#define XDFEMIX_CC_SEQUENCE_ERROR_WIDTH 1U
#define XDFEMIX_CC_SEQUENCE_ERROR_OFFSET 3U
#define XDFEMIX_IRQ_FLAGS_MASK 0xFU

/* CC_Configuration */
#define XDFEMIX_ANTENNA_GAIN_CURRENT 0x1000U /* Register offset */
#define XDFEMIX_ANTENNA_GAIN_NEXT 0x1004U /* Register offset */
#define XDFEMIX_ANTENNA_GAIN_WIDTH 8U
#define XDFEMIX_ANTENNA_GAIN_OFFSET 0U
#define XDFEMIX_ONE_ANTENNA_GAIN_WIDTH 1U
#define XDFEMIX_ONE_ANTENNA_GAIN_MINUS6DB 0U
#define XDFEMIX_ONE_ANTENNA_GAIN_ZERODB 1U

#define XDFEMIX_SEQUENCE_LENGTH_CURRENT 0x1010U /* Register offset */
#define XDFEMIX_SEQUENCE_LENGTH_NEXT 0x1014U /* Register offset */
#define XDFEMIX_SEQUENCE_LENGTH_WIDTH 4U
#define XDFEMIX_SEQUENCE_LENGTH_OFFSET 0U

#define XDFEMIX_CCID_SEQUENCE_CURRENT 0x1100U /* Register offset */
#define XDFEMIX_CCID_SEQUENCE_NEXT 0x1140U /* Register offset */
#define XDFEMIX_CCID_SEQUENCE_WIDTH 4U
#define XDFEMIX_CCID_SEQUENCE_OFFSET 0U
#define XDFEMIX_CCID_SEQUENCE_SIZE 16U

/* DUC - DDC configuration */
#define XDFEMIX_DUC_DDC_MAPPING_CURRENT 0x1200U /* Register offset */
#define XDFEMIX_DUC_DDC_MAPPING_NEXT 0x1240U /* Register offset */
#define XDFEMIX_DUC_DDC_MAPPING_SIZE 16U
#define XDFEMIX_DUC_DDC_MAPPING_NCO_WIDTH 3U
#define XDFEMIX_DUC_DDC_MAPPING_NCO_OFFSET 0U
#define XDFEMIX_DUC_DDC_MAPPING_RATE_WIDTH 3U
#define XDFEMIX_DUC_DDC_MAPPING_RATE_OFFSET 4U

/* DUC_DDC status */
#define XDFEMIX_DUC_DDC_STATUS 0x2000U /* Register offset */
#define XDFEMIX_DUC_DDC_STAGE_I_WIDTH 2U
#define XDFEMIX_DUC_DDC_STAGE_I_OFFSET 0U
#define XDFEMIX_DUC_DDC_STAGE_Q_WIDTH 2U
#define XDFEMIX_DUC_DDC_STAGE_Q_OFFSET 4U
#define XDFEMIX_DUC_DDC_ANTENNA_WIDTH 4U
#define XDFEMIX_DUC_DDC_ANTENNA_OFFSET 8U
#define XDFEMIX_DUC_DDC_CCID_WIDTH 4U
#define XDFEMIX_DUC_DDC_CCID_OFFSET 12U

/* Mixer configuration */
#define XDFEMIX_MIXER_PHASE_CAPTURE 0x3000U /* Register offset */
#define XDFEMIX_MIXER_PHASE_CAPTURE_ON 1U
/* Mixer Status */
#define XDFEMIX_OVERFLOW_STATUS 0x3004U /* Register offset */
#define XDFEMIX_OVERFLOW_ADDER_STAGE_WIDTH 1U
#define XDFEMIX_OVERFLOW_ADDER_STAGE_OFFSET 0U
#define XDFEMIX_OVERFLOW_ADDER_ANTENNA_WIDTH 4U
#define XDFEMIX_OVERFLOW_ADDER_ANTENNA_OFFSET 4U
#define XDFEMIX_OVERFLOW_MIX_ANTENNA_WIDTH 4U
#define XDFEMIX_OVERFLOW_MIX_ANTENNA_OFFSET 8U
#define XDFEMIX_OVERFLOW_MIX_CCID_WIDTH 4U
#define XDFEMIX_OVERFLOW_MIX_CCID_OFFSET 12U

/* PHAC configuration */
/* CURRENT */
#define XDFEMIX_FREQ_CONTROL_WORD_CURRENT 0x4000U /* Register offset */
#define XDFEMIX_FREQ_SINGLE_MOD_COUNT_CURRENT 0x4004U /* Register offset */
#define XDFEMIX_FREQ_DUAL_MOD_COUNT_CURRENT 0x4008U /* Register offset */
#define XDFEMIX_FREQ_PHASE_OFFSET_CURRENT 0x400CU /* Register offset */
#define XDFEMIX_PHASE_UPDATE_ACC_CURRENT 0x4010U /* Register offset */
#define XDFEMIX_PHASE_UPDATE_DUAL_MOD_COUNT_CURRENT                            \
	0x4014U /* Register offset */
#define XDFEMIX_PHASE_UPDATE_DUAL_MOD_SEL_CURRENT 0x4018U /* Register offset */
#define XDFEMIX_NCO_GAIN_CURRENT 0x401CU /* Register offset */
#define XDFEMIX_PHASE_CAPTURE_ACC_CURRENT 0x4020U /* Register offset */
#define XDFEMIX_PHASE_CAPTURE_DUAL_MOD_COUNT_CURRENT                           \
	0x4024U /* Register offset */
#define XDFEMIX_PHASE_CAPTURE_DUAL_MOD_SEL_CURRENT 0x4028U /* Register offset */
#define XDFEMIX_FREQ_UPDATE_CURRENT 0x402CU /* Register offset */
#define XDFEMIX_PHASE_UPDATE_CURRENT 0x4030U /* Register offset */
#define XDFEMIX_PHASE_RESET_CURRENT 0x4034U /* Register offset */
#define XDFEMIX_PHASE_ACC_ENABLE_CURRENT 0x4038U /* Register offset */

/* NEXT */
#define XDFEMIX_FREQ_CONTROL_WORD_NEXT 0x4400U /* Register offset */
#define XDFEMIX_FREQ_SINGLE_MOD_COUNT_NEXT 0x4404U /* Register offset */
#define XDFEMIX_FREQ_DUAL_MOD_COUNT_NEXT 0x4408U /* Register offset */
#define XDFEMIX_FREQ_PHASE_OFFSET_NEXT 0x440CU /* Register offset */
#define XDFEMIX_PHASE_UPDATE_ACC_NEXT 0x4410U /* Register offset */
#define XDFEMIX_PHASE_UPDATE_DUAL_MOD_COUNT_NEXT 0x4414U /* Register offset */
#define XDFEMIX_PHASE_UPDATE_DUAL_MOD_SEL_NEXT 0x4418U /* Register offset */
#define XDFEMIX_NCO_GAIN_NEXT 0x441CU /* Register offset */
#define XDFEMIX_PHASE_CAPTURE_ACC_NEXT 0x4420U /* Register offset */
#define XDFEMIX_PHASE_CAPTURE_DUAL_MOD_COUNT_NEXT 0x4424U /* Register offset */
#define XDFEMIX_PHASE_CAPTURE_DUAL_MOD_SEL_NEXT 0x4428U /* Register offset */
#define XDFEMIX_FREQ_UPDATE_NEXT 0x442CU /* Register offset */
#define XDFEMIX_PHASE_UPDATE_NEXT 0x4430U /* Register offset */
#define XDFEMIX_PHASE_RESET_NEXT 0x4434U /* Register offset */
#define XDFEMIX_PHASE_ACC_ENABLE_NEXT 0x4438U /* Register offset */

#define XDFEMIX_PHAC_CCID_ADDR_STEP 0x40U
#define XDFEMIX_NCO_GAIN_ZERODB 0U /* Apply 0dB gain */
#define XDFEMIX_NCO_GAIN_MINUS3DB 1U /* Apply 3dB gain */
#define XDFEMIX_NCO_GAIN_MINUS6DB 2U /* Apply 6dB gain */
#define XDFEMIX_NCO_GAIN_MINUS9DB 3U /* Apply 9dB gain */

#ifdef __cplusplus
}
#endif

#endif
/** @} */
