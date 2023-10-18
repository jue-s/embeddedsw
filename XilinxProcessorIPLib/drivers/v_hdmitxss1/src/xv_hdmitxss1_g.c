/******************************************************************************
* Copyright (C) 2018 – 2020 Xilinx, Inc.  All rights reserved.
* Copyright (C) 2023 Advanced Micro Devices, Inc. All Rights Reserved.
* SPDX-License-Identifier: MIT
******************************************************************************/


#ifndef SDT
#include "xparameters.h"
#endif
#include "xv_hdmitxss1.h"

/*
* List of Sub-cores included in the Subsystem for Device ID 0
* Sub-core device id will be set by its driver in xparameters.h
*/

#define XPAR_V_HDMI_TXSS1_V_AXI4S_VID_OUT_PRESENT	 1
#define XPAR_V_HDMI_TXSS1_V_AXI4S_VID_OUT_ABSOLUTE_BASEADDR	 (XPAR_V_HDMI_TXSS1_BASEADDR + XPAR_V_HDMI_TXSS1_V_AXI4S_VID_OUT_BASEADDR)

#define XPAR_V_HDMI_TXSS1_V_HDMI_TX_PRESENT	 1
#define XPAR_V_HDMI_TXSS1_V_HDMI_TX_ABSOLUTE_BASEADDR	 (XPAR_V_HDMI_TXSS1_BASEADDR + XPAR_V_HDMI_TXSS1_V_HDMI_TX_BASEADDR)

#define XPAR_V_HDMI_TXSS1_V_TC_PRESENT	 1
#define XPAR_V_HDMI_TXSS1_V_TC_ABSOLUTE_BASEADDR	 (XPAR_V_HDMI_TXSS1_BASEADDR + XPAR_V_HDMI_TXSS1_V_TC_BASEADDR)


/*
* List of Sub-cores excluded from the subsystem for Device ID 0
*   - Excluded sub-core device id is set to 255
*   - Excluded sub-core baseaddr is set to 0
*/

#define XPAR_V_HDMI_TXSS1_AXI_TIMER_PRESENT 0
#define XPAR_V_HDMI_TXSS1_AXI_TIMER_DEVICE_ID 255
#define XPAR_V_HDMI_TXSS1_AXI_TIMER_ABSOLUTE_BASEADDR 0

#define XPAR_V_HDMI_TXSS1_HDCP_1_4_PRESENT 0
#define XPAR_V_HDMI_TXSS1_HDCP_1_4_DEVICE_ID 255
#define XPAR_V_HDMI_TXSS1_HDCP_1_4_ABSOLUTE_BASEADDR 0

#define XPAR_V_HDMI_TXSS1_HDCP22_TX_SS_PRESENT 0
#define XPAR_V_HDMI_TXSS1_HDCP22_TX_SS_DEVICE_ID 255
#define XPAR_V_HDMI_TXSS1_HDCP22_TX_SS_ABSOLUTE_BASEADDR 0



XV_HdmiTxSs1_Config XV_HdmiTxSs1_ConfigTable[XPAR_XV_HDMITXSS1_NUM_INSTANCES] =
{
	{
		XPAR_V_HDMI_TXSS1_DEVICE_ID,
		XPAR_V_HDMI_TXSS1_BASEADDR,
		XPAR_V_HDMI_TXSS1_HIGHADDR,
		(XVidC_PixelsPerClock) XPAR_V_HDMI_TXSS1_INPUT_PIXELS_PER_CLOCK,
		XPAR_V_HDMI_TXSS1_MAX_BITS_PER_COMPONENT,
		XPAR_V_HDMI_TXSS1_INCLUDE_LOW_RESO_VID,
		XPAR_V_HDMI_TXSS1_INCLUDE_YUV420_SUP,
		XPAR_V_HDMI_TXSS1_MAX_FRL_RATE,
		XPAR_V_HDMI_TXSS1_DYNAMIC_HDR,
		XPAR_V_HDMI_TXSS1_AXI_LITE_FREQ_HZ,
		XPAR_V_HDMI_TXSS1_VID_INTERFACE,

		{
			XPAR_V_HDMI_TXSS1_AXI_TIMER_PRESENT,
			XPAR_V_HDMI_TXSS1_AXI_TIMER_DEVICE_ID,
			XPAR_V_HDMI_TXSS1_AXI_TIMER_ABSOLUTE_BASEADDR
		},
		{
			XPAR_V_HDMI_TXSS1_HDCP_1_4_PRESENT,
			XPAR_V_HDMI_TXSS1_HDCP_1_4_DEVICE_ID,
			XPAR_V_HDMI_TXSS1_HDCP_1_4_ABSOLUTE_BASEADDR
		},
		{
			XPAR_V_HDMI_TXSS1_HDCP22_TX_SS_PRESENT,
			XPAR_V_HDMI_TXSS1_HDCP22_TX_SS_DEVICE_ID,
			XPAR_V_HDMI_TXSS1_HDCP22_TX_SS_ABSOLUTE_BASEADDR
		},
		{
			XPAR_V_HDMI_TXSS1_V_HDMI_TX_PRESENT,
			XPAR_V_HDMI_TXSS1_V_HDMI_TX_DEVICE_ID,
			XPAR_V_HDMI_TXSS1_V_HDMI_TX_ABSOLUTE_BASEADDR
		},
		{
			XPAR_V_HDMI_TXSS1_V_TC_PRESENT,
			XPAR_V_HDMI_TXSS1_V_TC_DEVICE_ID,
			XPAR_V_HDMI_TXSS1_V_TC_ABSOLUTE_BASEADDR
		},
	}
};


