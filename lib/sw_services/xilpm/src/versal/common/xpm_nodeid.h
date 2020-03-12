/******************************************************************************
*
* Copyright (C) 2019-2020 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*
*
*
******************************************************************************/

/*
 * This is an automatically generated file from script.
 * Please do not modify this!
 */
#ifndef XPM_NODEID_H_
#define XPM_NODEID_H_

/* Power Nodes */
#define PM_POWER_PMC				(0x4208001U)
#define PM_POWER_LPD				(0x4210002U)
#define PM_POWER_FPD				(0x420c003U)
#define PM_POWER_NOC				(0x4214004U)
#define PM_POWER_ME				(0x421c005U)
#define PM_POWER_PLD				(0x4220006U)
#define PM_POWER_CPM				(0x4218007U)
#define PM_POWER_PL_SYSMON			(0x4208008U)
#define PM_POWER_RPU0_0				(0x4104009U)
#define PM_POWER_GEM0				(0x410400aU)
#define PM_POWER_GEM1				(0x410400bU)
#define PM_POWER_OCM_0				(0x410400cU)
#define PM_POWER_OCM_1				(0x410400dU)
#define PM_POWER_OCM_2				(0x410400eU)
#define PM_POWER_OCM_3				(0x410400fU)
#define PM_POWER_TCM_0_A			(0x4104010U)
#define PM_POWER_TCM_0_B			(0x4104011U)
#define PM_POWER_TCM_1_A			(0x4104012U)
#define PM_POWER_TCM_1_B			(0x4104013U)
#define PM_POWER_ACPU_0				(0x4104014U)
#define PM_POWER_ACPU_1				(0x4104015U)
#define PM_POWER_L2_BANK_0			(0x4104016U)
#define PM_POWER_XRAM_0				(0x4124017U)
#define PM_POWER_XRAM_1				(0x4124018U)
#define PM_POWER_XRAM_2				(0x4124019U)
#define PM_POWER_XRAM_3				(0x412401aU)
#define PM_POWER_XRAM_4				(0x412401bU)
#define PM_POWER_XRAM_5				(0x412401cU)
#define PM_POWER_XRAM_6				(0x412401dU)
#define PM_POWER_XRAM_7				(0x412401eU)
#define PM_POWER_XRAM_8				(0x412401fU)
#define PM_POWER_XRAM_9				(0x4124020U)
#define PM_POWER_XRAM_10			(0x4124021U)
#define PM_POWER_XRAM_11			(0x4124022U)
#define PM_POWER_XRAM_12			(0x4124023U)
#define PM_POWER_XRAM_13			(0x4124024U)
#define PM_POWER_XRAM_14			(0x4124025U)
#define PM_POWER_XRAM_15			(0x4124026U)
#define PM_POWER_CPM5				(0x4218027U)

/* Reset Nodes */
#define PM_RST_PMC_POR				(0xc30c001U)
#define PM_RST_PMC				(0xc410002U)
#define PM_RST_PS_POR				(0xc30c003U)
#define PM_RST_PL_POR				(0xc30c004U)
#define PM_RST_NOC_POR				(0xc30c005U)
#define PM_RST_FPD_POR				(0xc30c006U)
#define PM_RST_ACPU_0_POR			(0xc30c007U)
#define PM_RST_ACPU_1_POR			(0xc30c008U)
#define PM_RST_OCM2_POR				(0xc30c009U)
#define PM_RST_PS_SRST				(0xc41000aU)
#define PM_RST_PL_SRST				(0xc41000bU)
#define PM_RST_NOC				(0xc41000cU)
#define PM_RST_NPI				(0xc41000dU)
#define PM_RST_SYS_RST_1			(0xc41000eU)
#define PM_RST_SYS_RST_2			(0xc41000fU)
#define PM_RST_SYS_RST_3			(0xc410010U)
#define PM_RST_FPD				(0xc410011U)
#define PM_RST_PL0				(0xc410012U)
#define PM_RST_PL1				(0xc410013U)
#define PM_RST_PL2				(0xc410014U)
#define PM_RST_PL3				(0xc410015U)
#define PM_RST_APU				(0xc410016U)
#define PM_RST_ACPU_0				(0xc410017U)
#define PM_RST_ACPU_1				(0xc410018U)
#define PM_RST_ACPU_L2				(0xc410019U)
#define PM_RST_ACPU_GIC				(0xc41001aU)
#define PM_RST_RPU_ISLAND			(0xc41001bU)
#define PM_RST_RPU_AMBA				(0xc41001cU)
#define PM_RST_R5_0				(0xc41001dU)
#define PM_RST_R5_1				(0xc41001eU)
#define PM_RST_SYSMON_PMC_SEQ_RST		(0xc41001fU)
#define PM_RST_SYSMON_PMC_CFG_RST		(0xc410020U)
#define PM_RST_SYSMON_FPD_CFG_RST		(0xc410021U)
#define PM_RST_SYSMON_FPD_SEQ_RST		(0xc410022U)
#define PM_RST_SYSMON_LPD			(0xc410023U)
#define PM_RST_PDMA_RST1			(0xc410024U)
#define PM_RST_PDMA_RST0			(0xc410025U)
#define PM_RST_ADMA				(0xc410026U)
#define PM_RST_TIMESTAMP			(0xc410027U)
#define PM_RST_OCM				(0xc410028U)
#define PM_RST_OCM2_RST				(0xc410029U)
#define PM_RST_IPI				(0xc41002aU)
#define PM_RST_SBI				(0xc41002bU)
#define PM_RST_LPD				(0xc41002cU)
#define PM_RST_QSPI				(0xc10402dU)
#define PM_RST_OSPI				(0xc10402eU)
#define PM_RST_SDIO_0				(0xc10402fU)
#define PM_RST_SDIO_1				(0xc104030U)
#define PM_RST_I2C_PMC				(0xc104031U)
#define PM_RST_GPIO_PMC				(0xc104032U)
#define PM_RST_GEM_0				(0xc104033U)
#define PM_RST_GEM_1				(0xc104034U)
#define PM_RST_SPARE				(0xc104035U)
#define PM_RST_USB_0				(0xc104036U)
#define PM_RST_UART_0				(0xc104037U)
#define PM_RST_UART_1				(0xc104038U)
#define PM_RST_SPI_0				(0xc104039U)
#define PM_RST_SPI_1				(0xc10403aU)
#define PM_RST_CAN_FD_0				(0xc10403bU)
#define PM_RST_CAN_FD_1				(0xc10403cU)
#define PM_RST_I2C_0				(0xc10403dU)
#define PM_RST_I2C_1				(0xc10403eU)
#define PM_RST_GPIO_LPD				(0xc10403fU)
#define PM_RST_TTC_0				(0xc104040U)
#define PM_RST_TTC_1				(0xc104041U)
#define PM_RST_TTC_2				(0xc104042U)
#define PM_RST_TTC_3				(0xc104043U)
#define PM_RST_SWDT_FPD				(0xc104044U)
#define PM_RST_SWDT_LPD				(0xc104045U)
#define PM_RST_USB				(0xc104046U)
#define PM_RST_DPC				(0xc208047U)
#define PM_RST_PMCDBG				(0xc208048U)
#define PM_RST_DBG_TRACE			(0xc208049U)
#define PM_RST_DBG_FPD				(0xc20804aU)
#define PM_RST_DBG_TSTMP			(0xc20804bU)
#define PM_RST_RPU0_DBG				(0xc20804cU)
#define PM_RST_RPU1_DBG				(0xc20804dU)
#define PM_RST_HSDP				(0xc20804eU)
#define PM_RST_DBG_LPD				(0xc20804fU)
#define PM_RST_CPM_POR				(0xc30c050U)
#define PM_RST_CPM				(0xc410051U)
#define PM_RST_CPMDBG				(0xc208052U)
#define PM_RST_PCIE_CFG				(0xc410053U)
#define PM_RST_PCIE_CORE0			(0xc410054U)
#define PM_RST_PCIE_CORE1			(0xc410055U)
#define PM_RST_PCIE_DMA				(0xc410056U)
#define PM_RST_CMN				(0xc410057U)
#define PM_RST_L2_0				(0xc410058U)
#define PM_RST_L2_1				(0xc410059U)
#define PM_RST_ADDR_REMAP			(0xc41005aU)
#define PM_RST_CPI0				(0xc41005bU)
#define PM_RST_CPI1				(0xc41005cU)
#define PM_RST_XRAM				(0xc30c05dU)
#define PM_RST_AIE_ARRAY			(0xc10405eU)
#define PM_RST_AIE_SHIM				(0xc10405fU)

/* Clock nodes */
#define PM_CLK_PMC_PLL				(0x8104001U)
#define PM_CLK_APU_PLL				(0x8104002U)
#define PM_CLK_RPU_PLL				(0x8104003U)
#define PM_CLK_CPM_PLL				(0x8104004U)
#define PM_CLK_NOC_PLL				(0x8104005U)
#define PM_CLK_PMC_PRESRC			(0x8208007U)
#define PM_CLK_PMC_POSTCLK			(0x8208008U)
#define PM_CLK_PMC_PLL_OUT			(0x8208009U)
#define PM_CLK_PPLL				(0x820800aU)
#define PM_CLK_NOC_PRESRC			(0x820800bU)
#define PM_CLK_NOC_POSTCLK			(0x820800cU)
#define PM_CLK_NOC_PLL_OUT			(0x820800dU)
#define PM_CLK_NPLL				(0x820800eU)
#define PM_CLK_APU_PRESRC			(0x820800fU)
#define PM_CLK_APU_POSTCLK			(0x8208010U)
#define PM_CLK_APU_PLL_OUT			(0x8208011U)
#define PM_CLK_APLL				(0x8208012U)
#define PM_CLK_RPU_PRESRC			(0x8208013U)
#define PM_CLK_RPU_POSTCLK			(0x8208014U)
#define PM_CLK_RPU_PLL_OUT			(0x8208015U)
#define PM_CLK_RPLL				(0x8208016U)
#define PM_CLK_CPM_PRESRC			(0x8208017U)
#define PM_CLK_CPM_POSTCLK			(0x8208018U)
#define PM_CLK_CPM_PLL_OUT			(0x8208019U)
#define PM_CLK_CPLL				(0x820801aU)
#define PM_CLK_PPLL_TO_XPD			(0x820801bU)
#define PM_CLK_NPLL_TO_XPD			(0x820801cU)
#define PM_CLK_APLL_TO_XPD			(0x820801dU)
#define PM_CLK_RPLL_TO_XPD			(0x820801eU)
#define PM_CLK_EFUSE_REF			(0x820801fU)
#define PM_CLK_SYSMON_REF			(0x8208020U)
#define PM_CLK_IRO_SUSPEND_REF			(0x8208021U)
#define PM_CLK_USB_SUSPEND			(0x8208022U)
#define PM_CLK_SWITCH_TIMEOUT			(0x8208023U)
#define PM_CLK_RCLK_PMC				(0x8208024U)
#define PM_CLK_RCLK_LPD				(0x8208025U)
#define PM_CLK_WDT				(0x8208026U)
#define PM_CLK_TTC0				(0x8208027U)
#define PM_CLK_TTC1				(0x8208028U)
#define PM_CLK_TTC2				(0x8208029U)
#define PM_CLK_TTC3				(0x820802aU)
#define PM_CLK_GEM_TSU				(0x820802bU)
#define PM_CLK_GEM_TSU_LB			(0x820802cU)
#define PM_CLK_MUXED_IRO_DIV2			(0x820802dU)
#define PM_CLK_MUXED_IRO_DIV4			(0x820802eU)
#define PM_CLK_PSM_REF				(0x820802fU)
#define PM_CLK_GEM0_RX				(0x8208030U)
#define PM_CLK_GEM0_TX				(0x8208031U)
#define PM_CLK_GEM1_RX				(0x8208032U)
#define PM_CLK_GEM1_TX				(0x8208033U)
#define PM_CLK_CPM_CORE_REF			(0x8208034U)
#define PM_CLK_CPM_LSBUS_REF			(0x8208035U)
#define PM_CLK_CPM_DBG_REF			(0x8208036U)
#define PM_CLK_CPM_AUX0_REF			(0x8208037U)
#define PM_CLK_CPM_AUX1_REF			(0x8208038U)
#define PM_CLK_QSPI_REF				(0x8208039U)
#define PM_CLK_OSPI_REF				(0x820803aU)
#define PM_CLK_SDIO0_REF			(0x820803bU)
#define PM_CLK_SDIO1_REF			(0x820803cU)
#define PM_CLK_PMC_LSBUS_REF			(0x820803dU)
#define PM_CLK_I2C_REF				(0x820803eU)
#define PM_CLK_TEST_PATTERN_REF			(0x820803fU)
#define PM_CLK_DFT_OSC_REF			(0x8208040U)
#define PM_CLK_PMC_PL0_REF			(0x8208041U)
#define PM_CLK_PMC_PL1_REF			(0x8208042U)
#define PM_CLK_PMC_PL2_REF			(0x8208043U)
#define PM_CLK_PMC_PL3_REF			(0x8208044U)
#define PM_CLK_CFU_REF				(0x8208045U)
#define PM_CLK_SPARE_REF			(0x8208046U)
#define PM_CLK_NPI_REF				(0x8208047U)
#define PM_CLK_HSM0_REF				(0x8208048U)
#define PM_CLK_HSM1_REF				(0x8208049U)
#define PM_CLK_SD_DLL_REF			(0x820804aU)
#define PM_CLK_FPD_TOP_SWITCH			(0x820804bU)
#define PM_CLK_FPD_LSBUS			(0x820804cU)
#define PM_CLK_ACPU				(0x820804dU)
#define PM_CLK_DBG_TRACE			(0x820804eU)
#define PM_CLK_DBG_FPD				(0x820804fU)
#define PM_CLK_LPD_TOP_SWITCH			(0x8208050U)
#define PM_CLK_ADMA				(0x8208051U)
#define PM_CLK_LPD_LSBUS			(0x8208052U)
#define PM_CLK_CPU_R5				(0x8208053U)
#define PM_CLK_CPU_R5_CORE			(0x8208054U)
#define PM_CLK_CPU_R5_OCM			(0x8208055U)
#define PM_CLK_CPU_R5_OCM2			(0x8208056U)
#define PM_CLK_IOU_SWITCH			(0x8208057U)
#define PM_CLK_GEM0_REF				(0x8208058U)
#define PM_CLK_GEM1_REF				(0x8208059U)
#define PM_CLK_GEM_TSU_REF			(0x820805aU)
#define PM_CLK_USB0_BUS_REF			(0x820805bU)
#define PM_CLK_UART0_REF			(0x820805cU)
#define PM_CLK_UART1_REF			(0x820805dU)
#define PM_CLK_SPI0_REF				(0x820805eU)
#define PM_CLK_SPI1_REF				(0x820805fU)
#define PM_CLK_CAN0_REF				(0x8208060U)
#define PM_CLK_CAN1_REF				(0x8208061U)
#define PM_CLK_I2C0_REF				(0x8208062U)
#define PM_CLK_I2C1_REF				(0x8208063U)
#define PM_CLK_DBG_LPD				(0x8208064U)
#define PM_CLK_TIMESTAMP_REF			(0x8208065U)
#define PM_CLK_DBG_TSTMP			(0x8208066U)
#define PM_CLK_CPM_TOPSW_REF			(0x8208067U)
#define PM_CLK_USB3_DUAL_REF			(0x8208068U)
#define PM_CLK_REF_CLK				(0x830c06aU)
#define PM_CLK_PL_ALT_REF_CLK			(0x830c06bU)
#define PM_CLK_MUXED_IRO			(0x830c06cU)
#define PM_CLK_PL_EXT				(0x830c06dU)
#define PM_CLK_PL_LB				(0x830c06eU)
#define PM_CLK_MIO_50_OR_51			(0x830c06fU)
#define PM_CLK_MIO_24_OR_25			(0x830c070U)
#define PM_CLK_EMIO				(0x830c071U)
#define PM_CLK_MIO				(0x830c072U)
#define PM_CLK_XRAM_MAIN_CLK			(0x8208074U)
#define PM_CLK_XRAM_APB				(0x8208075U)

/* MIO nodes */
#define PM_STMIC_LMIO_0				(0x14104001U)
#define PM_STMIC_LMIO_1				(0x14104002U)
#define PM_STMIC_LMIO_2				(0x14104003U)
#define PM_STMIC_LMIO_3				(0x14104004U)
#define PM_STMIC_LMIO_4				(0x14104005U)
#define PM_STMIC_LMIO_5				(0x14104006U)
#define PM_STMIC_LMIO_6				(0x14104007U)
#define PM_STMIC_LMIO_7				(0x14104008U)
#define PM_STMIC_LMIO_8				(0x14104009U)
#define PM_STMIC_LMIO_9				(0x1410400aU)
#define PM_STMIC_LMIO_10			(0x1410400bU)
#define PM_STMIC_LMIO_11			(0x1410400cU)
#define PM_STMIC_LMIO_12			(0x1410400dU)
#define PM_STMIC_LMIO_13			(0x1410400eU)
#define PM_STMIC_LMIO_14			(0x1410400fU)
#define PM_STMIC_LMIO_15			(0x14104010U)
#define PM_STMIC_LMIO_16			(0x14104011U)
#define PM_STMIC_LMIO_17			(0x14104012U)
#define PM_STMIC_LMIO_18			(0x14104013U)
#define PM_STMIC_LMIO_19			(0x14104014U)
#define PM_STMIC_LMIO_20			(0x14104015U)
#define PM_STMIC_LMIO_21			(0x14104016U)
#define PM_STMIC_LMIO_22			(0x14104017U)
#define PM_STMIC_LMIO_23			(0x14104018U)
#define PM_STMIC_LMIO_24			(0x14104019U)
#define PM_STMIC_LMIO_25			(0x1410401aU)
#define PM_STMIC_PMIO_0				(0x1410801bU)
#define PM_STMIC_PMIO_1				(0x1410801cU)
#define PM_STMIC_PMIO_2				(0x1410801dU)
#define PM_STMIC_PMIO_3				(0x1410801eU)
#define PM_STMIC_PMIO_4				(0x1410801fU)
#define PM_STMIC_PMIO_5				(0x14108020U)
#define PM_STMIC_PMIO_6				(0x14108021U)
#define PM_STMIC_PMIO_7				(0x14108022U)
#define PM_STMIC_PMIO_8				(0x14108023U)
#define PM_STMIC_PMIO_9				(0x14108024U)
#define PM_STMIC_PMIO_10			(0x14108025U)
#define PM_STMIC_PMIO_11			(0x14108026U)
#define PM_STMIC_PMIO_12			(0x14108027U)
#define PM_STMIC_PMIO_13			(0x14108028U)
#define PM_STMIC_PMIO_14			(0x14108029U)
#define PM_STMIC_PMIO_15			(0x1410802aU)
#define PM_STMIC_PMIO_16			(0x1410802bU)
#define PM_STMIC_PMIO_17			(0x1410802cU)
#define PM_STMIC_PMIO_18			(0x1410802dU)
#define PM_STMIC_PMIO_19			(0x1410802eU)
#define PM_STMIC_PMIO_20			(0x1410802fU)
#define PM_STMIC_PMIO_21			(0x14108030U)
#define PM_STMIC_PMIO_22			(0x14108031U)
#define PM_STMIC_PMIO_23			(0x14108032U)
#define PM_STMIC_PMIO_24			(0x14108033U)
#define PM_STMIC_PMIO_25			(0x14108034U)
#define PM_STMIC_PMIO_26			(0x14108035U)
#define PM_STMIC_PMIO_27			(0x14108036U)
#define PM_STMIC_PMIO_28			(0x14108037U)
#define PM_STMIC_PMIO_29			(0x14108038U)
#define PM_STMIC_PMIO_30			(0x14108039U)
#define PM_STMIC_PMIO_31			(0x1410803aU)
#define PM_STMIC_PMIO_32			(0x1410803bU)
#define PM_STMIC_PMIO_33			(0x1410803cU)
#define PM_STMIC_PMIO_34			(0x1410803dU)
#define PM_STMIC_PMIO_35			(0x1410803eU)
#define PM_STMIC_PMIO_36			(0x1410803fU)
#define PM_STMIC_PMIO_37			(0x14108040U)
#define PM_STMIC_PMIO_38			(0x14108041U)
#define PM_STMIC_PMIO_39			(0x14108042U)
#define PM_STMIC_PMIO_40			(0x14108043U)
#define PM_STMIC_PMIO_41			(0x14108044U)
#define PM_STMIC_PMIO_42			(0x14108045U)
#define PM_STMIC_PMIO_43			(0x14108046U)
#define PM_STMIC_PMIO_44			(0x14108047U)
#define PM_STMIC_PMIO_45			(0x14108048U)
#define PM_STMIC_PMIO_46			(0x14108049U)
#define PM_STMIC_PMIO_47			(0x1410804aU)
#define PM_STMIC_PMIO_48			(0x1410804bU)
#define PM_STMIC_PMIO_49			(0x1410804cU)
#define PM_STMIC_PMIO_50			(0x1410804dU)
#define PM_STMIC_PMIO_51			(0x1410804eU)

/* Device Nodes */
#define PM_DEV_PLD_0				(0x18700000U)
#define PM_DEV_PMC_PROC				(0x18104001U)
#define PM_DEV_PSM_PROC				(0x18108002U)
#define PM_DEV_ACPU_0				(0x1810c003U)
#define PM_DEV_ACPU_1				(0x1810c004U)
#define PM_DEV_RPU0_0				(0x18110005U)
#define PM_DEV_RPU0_1				(0x18110006U)
#define PM_DEV_OCM_0				(0x18314007U)
#define PM_DEV_OCM_1				(0x18314008U)
#define PM_DEV_OCM_2				(0x18314009U)
#define PM_DEV_OCM_3				(0x1831400aU)
#define PM_DEV_TCM_0_A				(0x1831800bU)
#define PM_DEV_TCM_0_B				(0x1831800cU)
#define PM_DEV_TCM_1_A				(0x1831800dU)
#define PM_DEV_TCM_1_B				(0x1831800eU)
#define PM_DEV_L2_BANK_0			(0x1831c00fU)
#define PM_DEV_DDR_0				(0x18320010U)
#define PM_DEV_DDR_1				(0x18320011U)
#define PM_DEV_DDR_2				(0x18320012U)
#define PM_DEV_DDR_3				(0x18320013U)
#define PM_DEV_DDR_4				(0x18320014U)
#define PM_DEV_DDR_5				(0x18320015U)
#define PM_DEV_DDR_6				(0x18320016U)
#define PM_DEV_DDR_7				(0x18320017U)
#define PM_DEV_USB_0				(0x18224018U)
#define PM_DEV_GEM_0				(0x18224019U)
#define PM_DEV_GEM_1				(0x1822401aU)
#define PM_DEV_SPI_0				(0x1822401bU)
#define PM_DEV_SPI_1				(0x1822401cU)
#define PM_DEV_I2C_0				(0x1822401dU)
#define PM_DEV_I2C_1				(0x1822401eU)
#define PM_DEV_CAN_FD_0				(0x1822401fU)
#define PM_DEV_CAN_FD_1				(0x18224020U)
#define PM_DEV_UART_0				(0x18224021U)
#define PM_DEV_UART_1				(0x18224022U)
#define PM_DEV_GPIO				(0x18224023U)
#define PM_DEV_TTC_0				(0x18224024U)
#define PM_DEV_TTC_1				(0x18224025U)
#define PM_DEV_TTC_2				(0x18224026U)
#define PM_DEV_TTC_3				(0x18224027U)
#define PM_DEV_SWDT_LPD				(0x18224028U)
#define PM_DEV_SWDT_FPD				(0x18224029U)
#define PM_DEV_OSPI				(0x1822402aU)
#define PM_DEV_QSPI				(0x1822402bU)
#define PM_DEV_GPIO_PMC				(0x1822402cU)
#define PM_DEV_I2C_PMC				(0x1822402dU)
#define PM_DEV_SDIO_0				(0x1822402eU)
#define PM_DEV_SDIO_1				(0x1822402fU)
#define PM_DEV_PL_0				(0x18224030U)
#define PM_DEV_PL_1				(0x18224031U)
#define PM_DEV_PL_2				(0x18224032U)
#define PM_DEV_PL_3				(0x18224033U)
#define PM_DEV_RTC				(0x18224034U)
#define PM_DEV_ADMA_0				(0x18224035U)
#define PM_DEV_ADMA_1				(0x18224036U)
#define PM_DEV_ADMA_2				(0x18224037U)
#define PM_DEV_ADMA_3				(0x18224038U)
#define PM_DEV_ADMA_4				(0x18224039U)
#define PM_DEV_ADMA_5				(0x1822403aU)
#define PM_DEV_ADMA_6				(0x1822403bU)
#define PM_DEV_ADMA_7				(0x1822403cU)
#define PM_DEV_IPI_0				(0x1822403dU)
#define PM_DEV_IPI_1				(0x1822403eU)
#define PM_DEV_IPI_2				(0x1822403fU)
#define PM_DEV_IPI_3				(0x18224040U)
#define PM_DEV_IPI_4				(0x18224041U)
#define PM_DEV_IPI_5				(0x18224042U)
#define PM_DEV_IPI_6				(0x18224043U)
#define PM_DEV_SOC				(0x18428044U)
#define PM_DEV_DDRMC_0				(0x18520045U)
#define PM_DEV_DDRMC_1				(0x18520046U)
#define PM_DEV_DDRMC_2				(0x18520047U)
#define PM_DEV_DDRMC_3				(0x18520048U)
#define PM_DEV_GT_0				(0x1862c049U)
#define PM_DEV_GT_1				(0x1862c04aU)
#define PM_DEV_GT_2				(0x1862c04bU)
#define PM_DEV_GT_3				(0x1862c04cU)
#define PM_DEV_GT_4				(0x1862c04dU)
#define PM_DEV_GT_5				(0x1862c04eU)
#define PM_DEV_GT_6				(0x1862c04fU)
#define PM_DEV_GT_7				(0x1862c050U)
#define PM_DEV_GT_8				(0x1862c051U)
#define PM_DEV_GT_9				(0x1862c052U)
#define PM_DEV_GT_10				(0x1862c053U)
#define PM_DEV_EFUSE_CACHE			(0x18330054U)
#define PM_DEV_AMS_ROOT				(0x18224055U)
#define PM_DEV_XRAM_0				(0x18334056U)
#define PM_DEV_XRAM_1				(0x18334057U)
#define PM_DEV_XRAM_2				(0x18334058U)
#define PM_DEV_XRAM_3				(0x18334059U)
#define PM_DEV_XRAM_4				(0x1833405aU)
#define PM_DEV_XRAM_5				(0x1833405bU)
#define PM_DEV_XRAM_6				(0x1833405cU)
#define PM_DEV_XRAM_7				(0x1833405dU)
#define PM_DEV_XRAM_8				(0x1833405eU)
#define PM_DEV_XRAM_9				(0x1833405fU)
#define PM_DEV_XRAM_10				(0x18334060U)
#define PM_DEV_XRAM_11				(0x18334061U)
#define PM_DEV_XRAM_12				(0x18334062U)
#define PM_DEV_XRAM_13				(0x18334063U)
#define PM_DEV_XRAM_14				(0x18334064U)
#define PM_DEV_XRAM_15				(0x18334065U)
#define PM_DEV_GTM_0				(0x1862c066U)
#define PM_DEV_GTM_1				(0x1862c067U)
#define PM_DEV_GTM_2				(0x1862c068U)
#define PM_DEV_GTM_3				(0x1862c069U)
#define PM_DEV_GTM_4				(0x1862c06aU)
#define PM_DEV_GTYP_0				(0x1862c06bU)
#define PM_DEV_GTYP_1				(0x1862c06cU)
#define PM_DEV_GTYP_2				(0x1862c06dU)
#define PM_DEV_GTYP_CPM5_0			(0x1862c06eU)
#define PM_DEV_GTYP_CPM5_1			(0x1862c06fU)
#define PM_DEV_GTYP_CPM5_2			(0x1862c070U)
#define PM_DEV_GTYP_CPM5_3			(0x1862c071U)
#define PM_DEV_AIE				(0x18224072U)

/* Subsystem Nodes */
#define PM_SUBSYS_DEFAULT			(0x1c000000U)
#define PM_SUBSYS_PMC				(0x1c000001U)

/* Isolation Nodes */
#define PM_ISO_FPD_PL_TEST			(0x20000000U)
#define PM_ISO_FPD_PL				(0x20000001U)
#define PM_ISO_FPD_SOC				(0x20000002U)
#define PM_ISO_LPD_CPM_DFX			(0x20000003U)
#define PM_ISO_LPD_CPM				(0x20000004U)
#define PM_ISO_LPD_PL_TEST			(0x20000005U)
#define PM_ISO_LPD_PL				(0x20000006U)
#define PM_ISO_LPD_SOC				(0x20000007U)
#define PM_ISO_PMC_LPD_DFX			(0x20000008U)
#define PM_ISO_PMC_LPD				(0x20000009U)
#define PM_ISO_PMC_PL_CFRAME			(0x2000000aU)
#define PM_ISO_PMC_PL_TEST			(0x2000000bU)
#define PM_ISO_PMC_PL				(0x2000000cU)
#define PM_ISO_PMC_SOC_NPI			(0x2000000dU)
#define PM_ISO_PMC_SOC				(0x2000000eU)
#define PM_ISO_PL_SOC				(0x2000000fU)
#define PM_ISO_VCCAUX_SOC			(0x20000010U)
#define PM_ISO_VCCRAM_SOC			(0x20000011U)
#define PM_ISO_VCCAUX_VCCRAM			(0x20000012U)
#define PM_ISO_PL_CPM_PCIEA0_ATTR		(0x20000013U)
#define PM_ISO_PL_CPM_PCIEA1_ATTR		(0x20000014U)
#define PM_ISO_PL_CPM_RST_CPI0			(0x20000015U)
#define PM_ISO_PL_CPM_RST_CPI1			(0x20000016U)
#define PM_ISO_GEM_TSU_CLK			(0x20000017U)
#define PM_ISO_GEM0_TXRX_CLK			(0x20000018U)
#define PM_ISO_GEM1_TXRX_CLK			(0x20000019U)
#define PM_ISO_CPM5_PL				(0x2000001aU)
#define PM_ISO_CPM5_PL_AXIMM			(0x2000001bU)
#define PM_ISO_CPM5_PL_CHI0			(0x2000001cU)
#define PM_ISO_CPM5_PL_CHI1			(0x2000001dU)
#define PM_ISO_CPM5_PL_TST			(0x2000001eU)
#define PM_ISO_CPM5_PL_PCIEA0_MPIO		(0x2000001fU)
#define PM_ISO_CPM5_PL_PCIEA1_MPIO		(0x20000020U)
#define PM_ISO_CPM5_RAM				(0x20000021U)
#define PM_ISO_LPD_CPM5				(0x20000022U)
#define PM_ISO_LPD_CPM5_DFX			(0x20000023U)
#define PM_ISO_XRAM_PL_AXI0			(0x20000024U)
#define PM_ISO_XRAM_PL_AXI1			(0x20000025U)
#define PM_ISO_XRAM_PL_AXI2			(0x20000026U)
#define PM_ISO_XRAM_PL_AXILITE			(0x20000027U)
#define PM_ISO_XRAM_PL_FABRIC			(0x20000028U)

#endif /* XPM_NODEID_H_ */
