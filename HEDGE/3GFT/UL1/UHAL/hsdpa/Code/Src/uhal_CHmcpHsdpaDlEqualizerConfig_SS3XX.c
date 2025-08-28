Line 97: uhal_CHmcpHsdpaDlEqualizerConfig_free: SettleTImeToken set to NULL
Line 171: HicDataDescrambler: scr_pn_state=0x%x, eq_sinr_bit_sel=0x%x, mjt_gain_comp_off=0x%x iai_scal_comp_off=0x%x cross_ant_ic=0x%x addback_bitsel=0x%x maj_tap_gain_shift=0x%x
Line 179: HicPNState: PriServingScrCodeGenInitState 0x%x SecServingScrCodeGenInitState 0x%x
Line 1012: activeStackId %d ##### HIC_enable %d #####
Line 1023: [EQconfig] RxDiv=%d TxDiv=%d Reconfig=%d eqMode=%d SCscr=%d hsdpaDlRlNr=%d PHY eq_init_flag=%d
Line 1058: activeStackId %d Adjust EQ position: eq_ref_postion = %d
Line 1066: activeStackId %d eq_init_flag=%d eqType=%d
Line 1076: [Type-3i] serving cell changed(prvServingCellScrCode=%d, servingCellScrCode=%d
Line 1088: ### HIC pri_scr_code_state %d pri_scr_code %d
Line 1098: pri_scr_code_state %d pri_scr_code %d sec_scr_code_state %d sec_scr_code %d
Line 1133: updateCnt=%d prvServingCellScrCode=%d servingCellScrCode=%d eq_init_flag=%d
Line 1288: [RxDiv][UHAL] RxDiv off ---->>>>> RxDiv on after RF Settle
Line 1313: activeStackId %d finger_update_flag = %d eq_init_flag %d So finger position is not transfered to DSP
Line 1386: fingersStr %d fingerInx=%d fingerEnergy=%d, fingerInfoPack=%d lockStatus=%d sceIdx=%d fingerPos=%d
Line 1829: activeStackId %d ServingScrCodeGenInitState %d, ServingScrCodeGroup[index %d] = 0x%x, psc code %d
Line 1877: ### HIC [index %d] ServingScrCodeGenInitState 0x%x, psc code %d, hclp_serving_pn_pack[%d] 0x%x,hclp_serving_pn_pack[%d] 0x%x 
Line 1888: activeStackId %d ### hclp_dc_div_config %d, hclp_4c_div_config %d, hclp_schic_config %d
Line 1933: [index %d, ordered index %d] txDivRscp=%d txDivMetric=%d tempCpichSchPwr %d
Line 1947: [To consider rollback procedure]  PrimaryEqualizerConfig_ptr 0x%x
Line 1961: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	f_execution =	%d
Line 1962: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	f_group =	%d
Line 2008: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	cpc_drx_tau_dpch	=	%d
Line 2009: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	hclp_eq_init_release	=	%d
Line 2010: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	hclp_dc_div_config	=	%d
Line 2015: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	hclp_serving_pn_pack[NUM_SERVING_PN]	=	%d
Line 2018: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	hclp_schic_config	=	%d
Line 2019: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	hclp_fa0_schic_measure	=	%d
Line 2020: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	hclp_fa1_schic_measure	=	%d
Line 2025: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	cqi_gamma	=	%d
Line 2026: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	loopbackMode	=	%d
Line 206: activeStackId %d [RxDiv][DSP] rxDivOn=%d preRxDiv=%d secondRfOffIndicator=0x%x
Line 212: activeStackId %d [RxDiv][DSP] Rx div off -> on secondRfOffIndicator=0x%x
Line 224: activeStackId %d [RxDiv][UHAL] Rf Settle Time Token start
Line 238: activeStackId %d [RxDiv][UHAL] Release in RF paused state, Don't launch RF settle Time Token
Line 247: activeStackId %d [RxDiv][DSP] Rx div on -> off secondRfOffIndicator=0x%x
Line 254: activeStackId %d [RxDiv][UHAL] RxDiv on ---->>>>> RxDiv off
Line 266: activeStackId %d [RxDiv][DSP] rxDivOn=%d preRxDiv=%d secondRfOffIndicator=0x%x
Line 272: activeStackId %d [RxDiv][DSP] Rx div off -> on secondRfOffIndicator=0x%x
Line 284: activeStackId %d [RxDiv][UHAL] Rf Settle Time Token start
Line 298: activeStackId %d [RxDiv][UHAL] Release in RF paused state, Don't launch RF settle Time Token
Line 308: activeStackId %d [RxDiv][DSP] Rx div on -> off secondRfOffIndicator=0x%x
Line 315: activeStackId %d [RxDiv][UHAL] RxDiv on ---->>>>> RxDiv off
Line 491: activeStackId %d [uhal_CHmcpHsdpaDlEqualizerConfig_request] fingersStr 0x%x, lockStatus 0x%x, UPHY eq_init_flag %d
Line 499: activeStackId %d [uhal_CHmcpHsdpaDlEqualizerConfig_request] fingersStr 0x%x, lockStatus 0x%x, UPHY eq_init_flag %d
Line 570: activeStackId %d [uhal_CHmcpHsdpaDlEqualizerConfig_request] rxDivEnable %d, only 2nd antenna fingers are locked : fingersStr 0x%x, lockStatus 0x%x
Line 664: Invalid Configuration with configuredEqNum = %d
Line 781: txDivRscp=%d txDivMetric=%d txDivRscpForDc=%d txDivMetricForDc=%d isSecondaryCell=%d
Line 794: FA2 SCH-IC is not yet measured: txDivRscp=%d txDivMetric=%d txDivRscpForDc=%d txDivMetricForDc=%d isSecondaryCell=%d
Line 804: txDivRscp=%d txDivMetric=%d txDivRscpForDc=%d txDivMetricForDc=%d isSecondaryCell=%d
Line 844: hsdpaEqualizerNr : %d, hclp_serving_pn_packp[%d]=0x%x, hclp_serving_pn_packp[%d]=0x%x 
Line 884: hclp_serving_pn_packp[0]=0x%x hclp_serving_pn_packp[1]=0x%x hclp_serving_pn_packp[2]=0x%x hclp_serving_pn_packp[3]=0x%x
Line 949: [IPC:IPC_CONSUMER_ACTION_ID_HS_DL_EQUALIZER_CONFIG_REQUEST] data[0]=%d
Line 959: prvServingCellScrCode=%d, servingCellScrCode=%d, eq_init_flag=%d, dpchFrameOffset (256 chipset unit) = %d
Line 1520: SetEqCellInfo:  %d, isValidCell=%d, PscrCode=%d, cpichRscp=%d
Line 1527: SetEqCellInfo:  %d, isValidOffset=%d, mpOffset=%d, mpEng=%d
Line 1601: SetEqCellInfo FA2:  %d, isValidCell=%d, PscrCode=%d, cpichRscp=%d
Line 1608: SetEqCellInfo FA2:  %d, isValidOffset=%d, mpOffset=%d, mpEng=%d
Line 1661: SetEqCellInfo FA3:  %d, isValidCell=%d, PscrCode=%d, cpichRscp=%d
Line 1668: SetEqCellInfo FA3:  %d, isValidOffset=%d, mpOffset=%d, mpEng=%d
