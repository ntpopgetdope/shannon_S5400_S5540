Line 60: [IPC:IPC_CONSUMER_ACTION_ID_HSCLP_SET_LOOPBACK_MODE] data[0]=%d
Line 71: [IPC:IPC_CONSUMER_ACTION_ID_HSCLP_SET_LOOPBACK_MODE] data[0]=%d
Line 77: %s RbTestmode: %d, RbTest mode sent to DSP
Line 936: [IPC:IPC_CONSUMER_ACTION_ID_HS_SCCH_CONFIG_REQUEST] data[0]=%d
Line 984: activeStackId %d Warning :  Single carrier HS-SCCH number is %d and exceeds %d
Line 998: activeStackId %d Warning :  Primary carrier HS-SCCH number is %d and exceeds %d
Line 1012: activeStackId %d Warning : Primary, Second carrier HS-SCCH number is %d, %d and exceeds %d
Line 397: activeStackId %d HsScchConfig : Primary :uhal_CHmcpHsScchConfig - ded_h_rnti_0=%d, f_ue_id_valid=%d
Line 404: activeStackId %d HsScchConfig : Primary :uhal_CHmcpHsScchConfig - com_h_rnti=%d, f_ue_id_valid=%d
Line 410: activeStackId %d HsScchConfig : Primary :uhal_CHmcpHsScchConfig - ue_id_flag=%d, f_ue_id_valid=%d
Line 418: activeStackId %d HsScchConfig : Primary :uhal_CHmcpHsScchConfig - bcch_h_rnti=%d
Line 419: activeStackId %d E-FACH RRC state value passed to DSP =%d
Line 424: activeStackId %d E-FACH RRC state value passed to DSP =%d
Line 185: activeStackId %d [uhal_CHmcpHsScchConfig_HsScchNumCalc] HsScchIndex %d, LastHsScchNum %d, numOfHsScchCodes %d, ( HsScchConfigPtr[HsScchIndex]->chanCodeArray[i] ): %d, i: %d, result 0x%x 
Line 211: [uhal_CHmcpHsScchConfig_DspParamCalc]	HsScchIndex %d, isConfigured %d, LastHsScchNum %d, numOfHsScchCodes %d, hic_scch_ch_ovsf_id[0] 0x%x, hic_scch_ch_ovsf_id[1] 0x%x hic_scch_ch_ovsf_id[2] 0x%x 
Line 228: activeStackId %d [uhal_CHmcpHsScchConfig_HsScchNumCalc : Final Version] hic_scch_ch_en %d, hic_scch_fa_sel %d, hic_scch_ch0123_ovsf_id %d, hic_scch_ch4567_ovsf_id %d, hic_scch_ch891011_ovsf_id %d 
Line 280: [index %d] is64QamConfigured %d, hsdschRRCState %d, isMimoConfigured %d, isMacEhsConfigured %d, hsdschtablesize %d, isMacEhsConfigured %d 
Line 298: activeStackId %d [uhal_CHmcpHsScchConfig_HsScchNumCalc] dedicatedHrntiUsed %d, hsdschRRCState %d, ded_h_rnti0 0x%x, f_ue_id_valid %d 
Line 303: activeStackId %d [uhal_CHmcpHsScchConfig_HsScchNumCalc] H-RNTI DO NOT SET B.C dedicatedHrntiUsed %d, hsdschRRCState %d 
Line 82: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->f_execution = %d
Line 83: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->f_group = %d
Line 85: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->f_hs_scch_valid = %d
Line 86: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->f_ue_id_valid = %d
Line 87: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->f_ue_id_reserved	= %d
Line 88: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->rrc_state = %d
Line 89: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->hic_scch_ch_en = %d
Line 90: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->hic_scch_fa_sel = %d
Line 91: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->hic_scch_ch0123_ovsf_id = %d
Line 92: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->hic_scch_ch4567_ovsf_id = %d
Line 93: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->hic_scch_ch891011_ovsf_id = %d
Line 94: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_valid = %d
Line 95: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_CONFIG_SC1 = %d
Line 96: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_CONFIG_SC2 = %d
Line 97: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_CONFIG_SC3 = %d
Line 98: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_SEC_CELL_ENABLED	= %d
Line 99: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_CONFIG_NC = %d
Line 100: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_CONFIG_64QAM0 = %d
Line 101: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_CONFIG_64QAM1 = %d
Line 102: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_CONFIG_64QAM2 = %d
Line 103: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_CONFIG_64QAM3 = %d
Line 104: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_CONFIG_LESS = %d
Line 105: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_CONFIG_MIMO = %d
Line 106: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_CONFIG_DRX = %d
Line 107: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_CONFIG_DTX = %d
Line 108: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_MAC_HS_FLAG0	= %d
Line 109: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_MAC_HS_FLAG1	= %d
Line 110: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_MAC_HS_FLAG2	= %d
Line 111: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_MAC_HS_FLAG3	= %d
Line 112: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_TB_SIZE_FLAG0 = %d
Line 113: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_TB_SIZE_FLAG1 = %d
Line 114: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_TB_SIZE_FLAG2 = %d
Line 115: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_TB_SIZE_FLAG3 = %d
Line 116: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_CONFIG_4RX = %d
Line 117: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->config_mode_reserved = %d
Line 118: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->hs_scch_num_valid = %d
Line 119: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->hs_scch_num0	= %d
Line 120: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->hs_scch_num1	= %d
Line 121: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->hs_scch_num2	= %d
Line 122: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->hs_scch_num3	= %d
Line 124: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->ded_h_rnti0 = %d
Line 125: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->ded_h_rnti1 = %d
Line 126: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->ded_h_rnti2 = %d
Line 127: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->ded_h_rnti3 = %d
Line 128: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->com_h_rnti = %d
Line 129: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->nserv_h_rnti = %d
Line 130: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->bcch_h_rnti = %d
Line 131: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->f_mac_hs_reset = %d
Line 132: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->f_reserved = %d
Line 133: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->EDrxConfigFlag = %d
Line 134: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->H_RNTI = %d
Line 135: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->DRX_Cycle = %d
Line 136: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->inactivityDuration = %d
Line 137: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->rxBurstDuration = %d
Line 138: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->isEDrxEnabled = %d
Line 139: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->isHsScchReleased	= %d
Line 140: HsScchConfig	:uhal_CHmcpHsScchConfig	dspRegHsScchConfigReq->edrx_reserved = %d
Line 663: activeStackId %d uhal_CHmcpHsScchConfig_request: Dual Carrier configured but received Primary Carrier configuration
Line 695: activeStackId %d HsScchConfig : Primary :uhal_CHmcpHsScchConfig - ded_h_rnti_0=%d, f_ue_id_valid=%d
Line 702: activeStackId %d HsScchConfig : Primary :uhal_CHmcpHsScchConfig - com_h_rnti=%d, f_ue_id_valid=%d
Line 707: activeStackId %d HsScchConfig : Primary :uhal_CHmcpHsScchConfig - ue_id_flag=%d, f_ue_id_valid=%d
Line 713: activeStackId %d HsScchConfig : Primary :uhal_CHmcpHsScchConfig - bcch_h_rnti %d
Line 714: activeStackId %d E-FACH RRC state value passed to DSP =%d
Line 721: activeStackId %d E-FACH RRC state value passed to DSP =%d
Line 740: activeStackId %d HsScchConfig: Primary Carrier : numOfHsScchCodes is %d, hrnti is %d, harqFlush (URRC) is %d, harqFlushed (LMAC) is %d
Line 780: activeStackId %d E-FACH RRC state value passed to DSP =%d
Line 782: activeStackId %d HsScchConfig: Secondary Carrier : primary numOfHsScchCodes is %d, secondary numOfHsScchCodes is %d, primary hrnti is %d, secondary hrnti is %d
Line 787: HsScchConfig: is64QamConfigured %d, %d, isMacEhsConfigured = %d, %d, hsdschtablesize = %d, %d
Line 815: activeStackId %d HsScchConfig: Primary: Passing to ipc f_ue_id_valid = %d
Line 816: activeStackId %d HsScchConfig: Primary: uhal_CHmcpHsScchConfig dspRegHsScchConfigReq.com_h_rnti = %d
Line 817: activeStackId %d HsScchConfig: Primary: uhal_CHmcpHsScchConfig dspRegHsScchConfigReq.bcch_h_rnti = %d
Line 820: activeStackId %d E-FACH RRC state value passed to DSP =%d
Line 821: activeStackId %d HsScchConfig: Primary: uhal_CHmcpHsScchConfig dspRegHsScchConfigReq.f_ue_id_valid = %d
Line 822: activeStackId %d HsScchConfig: Primary: uhal_CHmcpHsScchConfig dspRegHsScchConfigReq.f_hs_scch_valid = %d
Line 823: activeStackId %d HsScchConfig: Primary: uhal_CHmcpHsScchConfig dspRegHsScchConfigReq.ded_h_rnti0 = %d
Line 824: activeStackId %d HsScchConfig: Primary: uhal_CHmcpHsScchConfig dspRegHsScchConfigReq.ded_h_rnti1 = %d
Line 825: activeStackId %d HsScchConfig: Primary: uhal_CHmcpHsScchConfig dspRegHsScchConfigReq.nserv_h_rnti = %d
Line 846: [IPC:IPC_CONSUMER_ACTION_ID_HS_SCCH_CONFIG_REQUEST] data[0]=%d
