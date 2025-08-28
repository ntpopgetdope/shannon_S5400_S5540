Line 610: gTx_swap=%d 

Line 618: PaBias[%d] %d, bandInfo%d
Line 621: PaBias %d, bandInfo%d , paHighGain %d
Line 624: DacCtrlVal %d, bandInfo%d , freqInfo %d
Line 675: data[%d] 0x%x pattern_ptr[%d] 0x%x 
Line 702: Rscp %d RAKE_RSCP_OFFSET %d
Line 713: uhal_ReceiveData cctrch_index %d lmac_int_src %d test_info[0].counter %d
Line 718: uhal_ReceiveData cctrch_index %d lmac_int_src %d
Line 742: uhal_ReceiveData:Array index out of bound num_trch=%d 
Line 829: FAIL!!!! EHalDataCctrchDecodedInfoCmd  
Line 843: registrationUhalWithMiniRouter excuted 
Line 850: uhal_TmpDataHandler0 is called 
Line 859: uhal_TmpDataHandler1 is called 
Line 868: uhal_TmpDataHandler2 is called 
Line 877: uhal_TmpDataHandler3 is called 
Line 886: uhal_TmpDataHandler4 is called 
Line 895: uhal_TmpDataHandler5 is called 
Line 903: uhal_CHmcp_GetAtiPhycTest_sendMsg2Ati: val2 = %d
Line 976: uhal_MtmHandler_LMTResponse LMT_Uarfcn %d LMT_RSSI %d LMT_RSCP %d LMT_BER %d
Line 977: uhal_MtmHandler_LMTResponse msg %d antPathSelection %d
Line 992: msg memory allocation fail!!!!! 

Line 1013: FingerInfo Failed

Line 1025: GetRxRscpDRX - Finger 0 in state %d position %d raw=%d EcIo=%d RSSI=%d RSCP=%d
Line 1037: WARNING LMT Timeout:: LMTDebug State %d
Line 1067: LMTToken state %d Sync num %d freq %d numOfZeroState %d antPathSelection %d
Line 1077: Sync Failure
Line 1089: LMTToken state %d Sync Wait & TxStart num %d freq %d
Line 1092: reSyncUarfcn %d syncWaitCounter %d
Line 1095: Sync Failure try again
Line 1123: LMTToken state %d Measure RSSI & RSCP num %d freq %d
Line 1134: LMT_RSSI[%d] %d LMT_RSCP[%d] %d 
Line 1143: LMTToken state %d start to measure BER num %d freq %d
Line 1161: LMTToken state %d under measuring BER num %d freq %d
Line 1168: LMTToken state %d Done LMT_currentBER %d num %d freq %d
Line 1171: LMT_BER[%d ] %d
Line 1192: LMTToken state %d finish
Line 1219: LMTToken FSM Finished::: So do nothing go happily :-)
Line 1255: EHalDlRlConfigCmd: Error %d, Additional Error %d

Line 1276: EHalDlFingerConfigCmd: Error %d, Additional Error %d

Line 1359: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s

Line 1362: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command

Line 1367: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s

Line 1374: uhal_MtmHandler_fakeCellSync: sendResponseToUphyToken did not get time to run, so clear it
Line 1395: EHalRfRxUarfcnCmd: success rxUarfcn =%d

Line 1401: EHalRfRxUarfcnCmd: Error %d, Additional Error %d

Line 1409: FAIL: uhal_MtmHandler_fakeSyncSetRl 

Line 1432: [MTM_3G_CAL][c] getfbrx[%d] : msrdFBRX_Avg[%d]
Line 1456: [MTM_3G_CAL][c] getfbrx[%d] : Init Val[%d] Updated Val[%d] msrdFBRX[%d]
Line 1464: [MTM_3G_CAL][c] GET_FBRX_VAL_FAIL : msrdFBRx[%d]
Line 1489: uhal_MtmHandler_Set_dsp_mipi_control on_off %d
Line 1794: RealCellSync rxUarfcn %d searcherPathOffset %d 
Line 1802: RealCellSync state %d
Line 1836: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s

Line 1839: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command

Line 1844: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s

Line 1851: uhal_MtmHandler_RealCellSync: sendResponseToUphyToken did not get time to run, so clear it
Line 1873: EHalRfRxUarfcnCmd: Error %d, Additional Error %d

Line 1902: RealCellSync state %d print rake state
Line 1924: FSM Finished::: So do nothing go happily :-)
Line 1939: [DCXO]%s: temp=%d  freqOffset=%d  freqOffsetRange=%d
Line 1959: EHalDlPhychReleaseCmd: Error %d, Additional Error %d

Line 1970: EHalDlRlReleaseCmd: Error %d, Additional Error %d

Line 2033: Clear Searcher & Rake Cmd
Line 2055: SearcherStep1 
Line 2072: EHalRfOnCmd exec() failed errCode %d addErrCode %d
Line 2076: uhal_MtmHandler_dummyCallback 

Line 2108: SearcherComplete 
Line 2177: DoneCnt %d HwScrCode %d scCodeEng %d scrCodeFb %d
Line 2192: DoneCnt %d FoundPathCnt %d EcIo %d Rscp %d
Line 2198: pathNumber %d Offset %d Eng %d
Line 2226: uhal_MtmHandler_Searcher_Check_Result Cmd %d Clear Executed num_paths %d FoundPathCnt %d

Line 2234: uhal_MtmHandler_Searcher_Check_Result: Error %d, Additional Error %d

Line 2261: SearcherBuffer 
Line 2300: SearcherStep3 
Line 2347: SearcherMP 
Line 2355: uhal_MtmHandler_RxDiversityControl: FA_Mode=%d
Line 2381: FingerInfo Failed

Line 2387: Finger 0 in state %d position %d raw=%d EcIo=%d RSCP=%ddBm isLocked %s isPowerLocked %s
Line 2400: uhal_MtmHandler_TxPerStart is_hsupa[%d]
Line 2428: ERROR: 3GTask_TxPerStart modemTestMode %d 
Line 2430: TestMode: call TX DC cal restore function..CurrentRfBandClass=%d

Line 2449: TestMode: ulChannel is created 

Line 2473: uhal_MtmHandler_hspaTmStart gpadc read en 
Line 2475: uhal_MtmHandlerConfigTM
Line 2486: uhal_sendMsg2AtiTask_withSubCmdId :  CMD ID %d SUB CMD ID %d
Line 2510: uhal_sendMsg2AtiTask:pal_MemAlloc fail

Line 2553: uhal_sendMsg2AtiTask:pal_MemAlloc fail

Line 2574: Inside uhal_MtmHandler_msrSensitivity()

Line 2669: DCH channel should have following charactersitics to decode properly

Line 2670: Chan Code:%d,Slot Format:EUmtsDlDpchSlotFormat_11,CRC:Asn_crc16,TTI:Asn_tti20

Line 2791: uhal_MtmHandler_PhychRlConfig: phych_nr %d ovsf %d multi_code_num=%d SF=%d Slot Format=%d

Line 2803: Phych config failed

Line 2827: uhal_MtmHandler_PhychRlConfig: offset_to_cpich=%d, sec_src_code_used=%d, scramblingCodeChange=%d 

Line 2842: uhal_MtmHandler_TrchConfig: trch_nr=%d,coding=%d,coding_rate=%d,crc_size=%d,rate_matching=%d,tti=%d,TF=%d 

Line 2855: Trch config failed 

Line 2881: uhal_MtmHandler_CctrchConfig: cctrch_nr=%d,dtx_pos_fixed=%d,cctrch_type=%d,btfd_active=%d,tfc_num=%d

Line 2987: TRCH%d:   Trbk Received: %d   Good CRC: %d  Bad CRC: %d 
Line 2989: TrBlk %d,Bad Crc %d
Line 2991:  bler %d TrBlk %d,Bad Crc %d
Line 2992: Bit error counter %d Total bit %d
Line 3001: BER percentage %d  %d (x1000)
Line 3123: uhal_MtmHandler_configAndStartDL and State=%d(FSM_DL_CONFIG)

Line 3130: Inside uhal_MtmHandler_configAndStartDL and State  (FSM_DL_START_0)

Line 3135: Wrong phych_nr value %d
Line 3145: uhal_Test_DL: RlInfo D failed RL#%d %d
Line 3150: current_sfn %d test_info[0].max_tti %d, sfn mod 4=%d sfn mod 2=%d
Line 3154: decodingPosition is %d 

Line 3186: FAIL!!! EHalDlCctrchEnableCmd
Line 3195: Started/Enabled Cctrch0

Line 3222: counter %d num_iterations %d data_received %d
Line 3235: Good CRC: %d, Bad CRC:%d Total Tr Blk:%d decodingPosition %d numOfDecodingPositionChange=%d

Line 3297: FSM Finished::: So do nothing go happily :-)
Line 3375: AT+SETMAXPOWERreceived: txPower %d maxPower %d
Line 3396: uhal_MtmHandlerSetDSPTPC %d
Line 3423: [MTM] %s : bias_index[%d] measuredPDADC[%d]
Line 3445: [MTM] %s : BAD PDADC, using unstable index
Line 3453: [MTM] %s : optimal_bias_index[%d] optimal_measuredPDADC[%d]
Line 3467: AT+SETMINPOWER received

Line 3485: SetTxpower Fail Warning !!!! paMode = 0x%x
Line 3495: SetTxpower Fail Warning !!!! point_APT_tx array index = 0x%x
Line 3510: Target : %d =>Band:%d, paMode: %d RFIC(idx) : %d, DGC(x10dB) : %d, Vcc : %d Bias : 0x%x
Line 3554: [MTM_3G_CAL][c] InternalRefPower : index[%d]
Line 3563: [MTM_3G_CAL][c] InternalRefPower : Mode[%d] index[%d] offset[%d] refPower[%d] msrdPower[%d]
Line 3580: [MTM_3G_CAL][c] InternalRefPower : Mode[%d] offset[%d] targetPower[%d] targetPwr_org[%d]
Line 3594: uhal_MtmHandler_txTransmissionSwitch
Line 3609: @@@@@@@@@@@@@@@@@@@@uhal_MtmHandler_SATxPowerCal:Timer not deleted last time 
Line 3618: uhal_MtmHandler_SATxPowerCal:Not able create tCalTimer timer
Line 3639: RF locked and Tx Started rx uarfcn %d tx uarfcn 
Line 3656: uhal_MtmHandler_SATxPowerCal:Tsetup must be 0
Line 3673: Slot time error!!! Tx power off

Line 3681: APT CAL4 : Target_Power_Start : %d,  Target_Power_Stop : %d 
Line 3695: uhal_MtmHandler_SATxPowerCalTimer::Channel deleted finished TX smart allignment

Line 3715: Flag : %d 
Line 3726: TxP_dbm : %d pos:%d, PD pts:%d, PDADC:%d 
Line 3747: uhal_MtmHandler_SATxFreqCal:Not able create tCalTimer timer
Line 3761: RF locked and Tx Started rx uarfcn %d tx uarfcn 
Line 3775: uhal_MtmHandler_SATxFreqCal 

Line 3794: uhal_MtmHandler_SATxFreqCal:Tsetup must be 0
Line 3822: RXUARFCN=%d TXUARFCN=%d gTx_swap=%d RFBand=%d sm_path %d 

Line 3835: TestMode: ulChannel is created 

Line 3853: [MTM_3G_CAL][c] FakeSync+Tx Start : UARFCN[%d/%d] gTx_swap[%d] RFBand[%d] modemTestMode[%d] Band[%d]
Line 3907: Dgain offset = %d txGainIndex %d
Line 3923: Ati_SetAPTTxIndex Fail Warning !!!! paMode = 0x%x
Line 3937: Ati_SetAPTTxIndex Fail Warning !!!! point_APT_tx array index = 0x%x
Line 3942: uhal_MtmHandler_Ati_SetAPTTxIndex: APTCalPtsAt : %d APTCalStartPt : %d paMode:%d,
Line 3960: Target : %d =>Band:%d, paMode: %d RFIC idx : %d, DGC(x10)dB : %d, Vcc : %d Bias : %d 
Line 3995: APTCalStartPt : %d,APT_index:%d , Target_Pwr: %d Mesrd Pwr : %d Saved Pwr : %d
Line 4012: APT_index %d APTCalPt %d APTCAL_StartValue %d
Line 4020: gain mode  %d temp1 %d temp2 %d gap %d gapPALowGain %d
Line 4029: gainMode %d Measured power : %d Traget power :%d 
Line 4031: [%d] APTCAL_StartValue %d Now %d Msrd %d gap %d 
Line 4039: [%d] temp1 %d temp2 %d gap %d 
Line 4070: Received msg id is HSPA_CAL_SETPDPOWER Target_PDAGC : %d |Max_PDAGC : %d |TxP : %d | Stage : %d | R_flag : %d| wait : %d 

Line 4081: msg memory allocation fail!!!!! 

Line 4117: msg memory allocation fail!!!!! 

Line 4132: msg memory allocation fail!!!!! 

Line 4163: %s start
Line 4189: uhal_MtmHandler_MsrdInternalPDADC Stage : %d R: %d PDAGC : %d
Line 4217: uhal_MtmHandler_MsrdInternalPDADC Stage : %d R: %d DCCAL : %d
Line 4228: uhal_MtmHandler_MsrdInternalPDADC Stage : %d R: %d DCCAL : %d
Line 4240: uhal_MtmHandler_MsrdInternalPDADC ReadPDAGC : %d
Line 4245: %s Error - PDAGC Overflow : %d stage[%d]
Line 4250: %s END
Line 4368: uhal_MtmHandler_MsrdInternalPDADC Stage : %d R: %d DCCAL : %d
Line 4375: %s ERR : No Attenuation Calibration!!!
Line 4381: [MTM] %s : atten[%d] measuredPDAGC[%d]
Line 4405: @@@@@@@@@@@@@@@@@@@@uhal_MtmHandler_SATxPowerCal:Timer not deleted last time 
Line 4414: uhal_MtmHandler_SATxPowerCal:Not able create tCalTimer timer
Line 4459: Slot time error!!! Tx power off

Line 4491: PD measure error!!! Error code : %d off

Line 4515: uhal_MtmHandler_SATxRFICPDCalTimer : Target_Power : %d, R_flag = %d Stop_Power : %d 
Line 4529: uhal_MtmHandler_SATxRFICPDCalTimer::Channel deleted finished TX smart allignment

Line 4539: Received msg id is HSPA_CAL_HPDRETPWR

Line 4547: Received msg id is AT+HSETPDPOWER and Too many PD pts %d

Line 4592: [MTM_3G_CAL]#2 IIP2 CAL START!!
Line 4608: Received msg id is HSPA_CAL_IIP2CAL:Band Info=%d

Line 4623: Tx Uarfcn %d IIP2  calibration done

Line 4630: Return I_DAC %d , Q_DAC %d
Line 4651: Returnd Q *(u16 *)msg = %d, len = %d
Line 4660: [MTM_3G_CAL]#2 IIP2 CAL END!! Band[%d]
Line 4738: read I %d, Q %d   
Line 4752: Received msg id is HSPA_CAL_LMT_PRX
Line 4757: Received msg id is HSPA_CAL_LMT_DRX
Line 4763: Received msg id is HSPA_CAL_LMT_RUN
Line 4767: You can not be serious!!!Received msg id is unkown
Line 4780: UmodemStatus=%d

Line 4788: DSP Dead SO enable DSP!!!!!!!!!!  

Line 4801: Error: modem is turned off 

Line 4805: HSPATMSTART finish

Line 4818: LMT_antenna PRX+DRX
Line 4823: LMT_berMeasureTime %d
Line 4829: LMT_txMaxPower [%d] %d
Line 4833: LMT_numOfFreq %d
Line 4838: LMT_Uarfcn [%d] %d
Line 4912: Received msg id is AT+HRETPDSATABLE and Too many stage number %d

Line 4921: Received msg id is AT+HRETPDSATABLE and Too many index number %d

Line 4957: uhal_MtmHandler_AntSwSelect
Line 4997: uhal_MtmHandler_DynamicInternalPD : Target_Power : %d, R_flag = %d stage : %d TIA_R : %d num : %d GPADC : %d
Line 5019: [uhal_MtmHandler]#0 uhal_MtmHandler_Set_FBRX Start
Line 5037: [MTM_3G_CAL][c] FBRX_measure error!!
Line 5042: uhal_MtmHandler_InternalTxFBRXPower:: [%d/5] RFIC index %d Rxgain 0x%x Msrdvalue %d 

Line 5072: [MTM_3G_CAL][c] Tx Cal Setup : Band[%d] Set Vcc[%d] Set Bias[%d/%d]
Line 5084: HSPA_CAL_GETFBRX : start!!!!
Line 5114: HSPA_CAL_MSRFBRX : MEM Alloc fail!!!!
Line 5132: fbrx_path %d HSPA_CAL_GETFBRX : end!!!!
Line 5188: [MTM_3G_CAL]#8 dpd_update_sel = MTM_CC0[0x%x] MTM_CC1[0x%x] 
Line 5256: [MTM_3G_CAL]#8 PA MODE[%s] BAND[%d]
Line 5273: [MTM_3G_CAL]#8 Searching NV_idx : nv_idx[%d], start_pwr[%d]
Line 5300: [MTM_3G_CAL]# MPM  : msrdTxp[%d] i[%d], [%d][%d]
Line 5312: [[MTM_3G_CAL]# HPM  : msrdTxp[%d] i[%d], [%d][%d]
Line 5319: [MTM_3G_CAL]#8 APT CAL : fbrx_gain[%d] cal_val_diff[%d]
Line 5353: [MTM_3G_CAL][c] Band[%d], Power[%d] : MPM_Vcc[%d] copy to LPM
Line 5360: [MTM_3G_CAL]#8 APT CAL Band[%d] DAC_POWER[%d] targetPower[%d]
Line 5361: [MTM_3G_CAL][c] gainRange[0][1] = %d, gainRange[1][0] = %d
Line 5369: [MTM_3G_CAL]#8 APT CAL error!!! Band[%d] CAL_DUMP start!
Line 5371: [MTM_3G_CAL]#8 APT CAL error!!! Band[%d] CAL_DUMP end!
Line 5418: [MTM_3G_CAL]#8 APT CAL : Set power is limited to %d to prevent PAM burnout at high power
Line 5434: [MTM_3G_CAL]#8 [i:%d] [trial : %d] Set power : %d PDAGC : %d Msrd Txp[%d] : %d wait : %d
Line 5449: MTM_3G_CAL][c] FBRX_measure error!!
Line 5459: [MTM_3G_CAL]#8 APT Found : Band[%d] PA Mode[%s] Pwr[%d dBm] Trial[%d] Set power[%d] Msrd Txp[%d] Pwr diff(x100) [%d]dBm
Line 5481: MTM_3G_CAL]#8 APT CAL : Band[%d] PA Mode[%s] Pwr[%d dBm] Trial[%d] Set power[%d] Msrd Txp[%d] offset(x100) [%d]dBm
Line 5523: [MTM_3G_CAL][c] set apt pwr : Target Pwr[%d] Set Pwr[%d] paMode[%d] RFIC Gain[%d], DGC(x10)dB[%d], Vcc[%d] Bias[%d] 
Line 5591: msg memory allocation fail!!!!! 

Line 5708: uhal_sendMsg2AtiTask:pal_MemAlloc fail

Line 5738: downlinkRxCalPower %d  
Line 5799: Wrong state %d
Line 5818: Suhal_MtmHandler_Set_Tx Band[%d on_off[%d]
Line 5846: [uhal_MtmHandler_Set_Tx Band[%d] %d: dsp_control: %d, swap : %d, tx_path = %d
Line 5876: paMode : %d bandArea:%d registryOffset:%d txPowerCalPtsAt:%d 
Line 5922: APTCALPoint %d is wrong. Set max value 70
Line 5928: Num_PaBias %d is wrong. Set max value 2
Line 5932: PA mode : %d (0:Low 2: High)  Band : %d  Total index [APT: %d] 
Line 5952: TX AGC APT [2] targetPower %d
Line 5980: Target Power : %d Require Tx Power(with fixed Vcc) : %d j=%d [APT: %d]
Line 5990: PAM_Bias_SetValue[%d/%d] : %d, %d, 
Line 5993: Frist Target : %d RF gain : %d Vcc : %d
Line 6060: Measured TX Power(AT+HMSRDTXPOWER)= %d

Line 6082: Received TX uarfcn = %d

Line 6136: numOfTxFreqCal %d uarfcn %d txPower %d paMode %d
Line 6174: MTMCOMM_3GTask_PDADC : Tx power is unstable. Try again[%d/7] index%d tempPDADC : %d lastPDADC : %d gap : %d
Line 6228: numOfTxFreqCal %d 
Line 6348: uhal_MtmHandler_buildTxDcCalFinal::Wrong fci gain

Line 6350: Generated DC Cal value for gain(%d) = 0x%x(%d)

Line 6366: uhal_MtmHandler_txDcCalStart
Line 6405: [MTM_3G_CAL]#1 DC CAL BAND %d START!!
Line 6459: S955 TxDC_Cal index : BAND 2
Line 6477: S955 TxDC_Cal index : BAND 5
Line 6505: TX2 DC cal and IQ Imbalance calibration bandInfo%d Tx2bandInfo%d 

Line 6523: BAND %d DC cal and IQ Imbalance calibration done / Tx2bandInfo %d TX SWAP %d 

Line 6536: All BAND DC cal and IQ Imbalance calibration done

Line 6549: Before Changing digital gain original value is %d

Line 6550: After Changing digital gain original value is %d

Line 6552: [MTM_3G_CAL]#1 DC CAL END!! Band[%d]
Line 6577: [MTM_3G_CAL]#5 FBRX FREQ CAL WRITE : MsrdFBVal[%d] DAC_POWER[%d]
Line 6617: Slot time error!!! Tx power off

Line 6643: uhal_MtmHandler_InternalTxRFICTimer::Channel deleted finished TX smart allignment for gain sweep

Line 6659: Slot time error!!! Tx power off

Line 6705: uhal_MtmHandler_InternalTxPDPowerSetTimer : Target_Power : %d, Stop_Power : %d Stage %d
Line 6718: uhal_MtmHandler_InternalTxPDPowerSetTimer::Channel deleted finished TX smart allignment

Line 6734: Slot time error!!! Tx power off

Line 6757: PD measure error!!! Error code : %d off

Line 6776: uhal_MtmHandler_InternalTxPDPowerTimer : Target_Power : %d, R_flag = %d Stop_Power : %d 
Line 6788: uhal_MtmHandler_InternalTxPDPowerTimer::Channel deleted finished TX smart allignment

Line 6796: [MTM_3G_CAL]#5 FBRX FREQ TIMER : Tx Freq[%d] Freq Step[%d]
Line 6806: MTM_3G_CAL][c] Slot time error!!! Tx power off
Line 6850: [MTM_3G_CAL]#5 FBRX FREQ CAL error!!! Band[%d] CAL_DUMP start!
Line 6852: [MTM_3G_CAL]#5 FBRX FREQ CAL error!!! Band[%d] CAL_DUMP end!
Line 6885: [MTM_3G_CAL]#5 FBRX FREQ CAL END!! Band[%d]
Line 6902: [MTM_3G_CAL][c] Slot time error!!! Tx power off
Line 6912: [MTM_3G_CAL][c] FBRX_measure error!!
Line 6920: [MTM_3G_CAL]#4 InternalTxFBRXPower : Band[%d] [%d/5] RFIC index[%d] FBRX gain[0x%x] Msrdvalue[%d] StartOffset[%d]
Line 6921: [MTM_3G_CAL]#4 FBRX CAL Band[%d] DAC_POWER[%d] i[%d/5]
Line 6938: [MTM_3G_CAL]#4 FBRX CAL error!!! Band[%d] CAL_DUMP start!
Line 6940: [MTM_3G_CAL]#4 FBRX CAL error!!! Band[%d] CAL_DUMP end!
Line 6951: [MTM_3G_CAL]#4 FBRX GAIN CAL END!! Band[%d]
Line 7018: uhal_MtmHandler_TimerSet :: Timmer is already on!!
Line 7034: uhal_MtmHandler_TimerSet :: Timmer is already off!!
Line 7101: @@@@@@@@@@@@@@@@@@@@uhal_MtmHandler_SATxGainSweep:Timer not deleted last time 
Line 7110: uhal_MtmHandler_SATxGainSweep:Not able create tCalTimer timer
Line 7120: RF locked and Tx Started rx uarfcn %d tx uarfcn 
Line 7151: uhal_MtmHandler_SATxGainSweep:Tsetup must be 0
Line 7181: uhal_MtmHandler_SAPDCal:Timer not deleted last time 
Line 7190: uhal_MtmHandler_SAPDCal:Not able create tCalTimer timer
Line 7199: RF locked and Tx Started rx uarfcn %d tx uarfcn 
Line 7225: uhal_MtmHandler_SAPDCal:Wrong Input

Line 7282: @@@@@@@@@@@@@@@@@@@@uhal_MtmHandler_SATxGainFullSweep:Timer not deleted last time 
Line 7289: uhal_MtmHandler_SATxGainFullSweep:Not able create tCalTimer timer
Line 7302: gainModeNum %d is wrong. Set max value 3
Line 7362: AT+HSPITEST received.spiData=0x%x,M=%d,K=%d,N=%d,readAddr=0x%x,reg1=%d,reg2=%d,
Line 7371: Read Result(address 0x%x)=0x%x 
Line 7392: AT+HSPITEST:Error Counter=%d 
Line 7395: [%d]:InnerLoopIndex=%d OuterLoopIndex=%d
Line 7411: uhal_MtmHandler_ActiveOnly selectedAnt %d antPathSelection %d
Line 7420: Parameter value %d is invalid.(0~3) 
Line 7443: @@@@@@@@@@@@@@@@@@@@uhal_MtmHandler_SATxPowerCal:Timer not deleted last time 
Line 7452: uhal_MtmHandler_SATxPowerCal:Not able create tCalTimer timer
Line 7468: gainModeNum %d is wrong. Set max value 3
Line 7649: [MTM_3G_CAL][c] FBRX_measure error!!
Line 7677: [MTM_3G_CAL]#9 TxFreqCh[%d] Set power[%d] FBRX[%d] Msrd Txp(x10 dBm) [%d]
Line 7678: [MTM_3G_CAL]#9 TX FREQ CAL Band[%d] DAC_POWER[%d] freq[%d]
Line 7738: [ET_Cal] uhal_MtmHandler_InternalETCAL
Line 7739: [ET_Cal] bandInfo %d step %d  targetPower %d  
Line 7740: [ET_Cal] freqStart %d   freqStop %d   freqStep %d    
Line 7746: [ET_Cal] Load RFIC/Pgain Cal data
Line 7768: [ET_Cal] Applied frequency=%d 

Line 7782: [ET_Cal] Applied frequency=%d 

Line 7791: [ET_Cal] PDADC = %d 

Line 7795: [ET_Cal] Gpadc2Txp operation Fail :%d 

Line 7848: [ET_Cal] uhal_MtmHandler_InternalETCAL calTargetTxPower is not valid!! : %d 

Line 7853: [ET_Cal] uhal_MtmHandler_InternalETCAL calFreq is not valid!! : %d

Line 7858: [ET_Cal] uhal_MtmHandler_InternalETCAL RFComm_InternalPD_Gpadc2Txp Fail!! : %d

Line 7867: [ET_Cal] msrdTxp %d = %d + (%d - %d) 

Line 7878: [ET_Cal] Channel deleted finished TX smart allignmentfor frequency calibration

Line 7881: [ET_Cal] CH: %d, Powmeas:%d 

Line 7921: [ET_Cal] uhal_MtmHandler_InternalETCAL
Line 7922: [ET_Cal] bandInfo %d step %d  targetPower %d  
Line 7923: [ET_Cal] freqStart %d   freqStop %d   freqStep %d    
Line 7929: [ET_Cal] Load RFIC/Pgain Cal data
Line 7958: [ET_Cal] Applied frequency=%d 

Line 7971: [ET_Cal] Applied frequency=%d 

Line 7984: [ET_Cal] uhal_MtmHandler_FBRX_measure error
Line 7999: [ET_Cal] uhal_MtmHandler_InternalETCAL calFreq is not valid!! : %d

Line 8005: [ET_Cal] msrdTxp %d = %d + (%d - %d) 

Line 8014: [ET_Cal] Channel deleted finished TX smart allignmentfor frequency calibration

Line 8017: [ET_Cal] CH: %d, Powmeas:%d 

Line 8070: uhal_MtmHandler_InternalTxPDPowerReady[err %d]:: stage%d, GPADC %d, TIA_R %d
Line 8100: msg memory allocation fail!!!!! 

Line 8156: [MTM_3G_CAL]#4 BUILD FBRX TABLE START!!
Line 8189: HSPA_CAL_INBUILDRFIC::  Pa_mode=%d, Num_cal_pt=%d 

Line 8195: HSPA_CAL_INBUILDRFIC::	msrd_Pwr=%d 

Line 8203: HSPA_CAL_INBUILDRFIC::  HPM_Pwr=%d , offset[0] = %d

Line 8236: HSPA_CAL_HSaBuildAPTTable::  num_PAmode=%d Pa_mode=%d, Num_cal_pt=%d 

Line 8241: HSPA_CAL_HSaBuildAPTTable::  msrd_Pwr=%d 

Line 8272: HSPA_CAL_HSaBuildRFICTable::  Pa_mode=%d, Num_cal_pt=%d 

Line 8278: HSPA_CAL_HSaBuildRFICTable::  msrd_Pwr=%d 

Line 8310: HSPA_CAL_HSaBuildRFICFullTable::  Pa_mode=%d, Num_cal_pt=%d 

Line 8340: Received msg id is HSPA_CAL_BUILDFREQTX and Too many Cal Pointer %d

Line 8372: [SAPT_CAL] uhal_MtmHandler_InternalTxSAPTPower_FBRX
Line 8374: [SAPT_CAL] BandClass=%d wait=%d calPt=%d txUarfcn=%d
Line 8395: [SAPT_CAL] PA mode=%d(0:L,2:H) bandInfo=%d  aptCalPoint=%d StartPwr=%d StopPwr=%d calPt=%d
Line 8435: [SAPT_CAL] InternalTxSAPTPower :: PDAGC=%d targetTxp=%d msrdTxp=%d txRslt=%d wait=%d
Line 8482: [SAPT_CAL] uhal_MtmHandler_InternalTxSAPTPower_FBRX
Line 8484: [SAPT_CAL] BandClass=%d wait=%d calPt=%d txUarfcn=%d
Line 8511: [SAPT_CAL] PA mode=%d(0:L,2:H) bandInfo=%d  aptCalPoint=%d StartPwr=%d StopPwr=%d calPt=%d
Line 8547: [SAPT_CAL] InternalTxSAPTPower :: measure error
Line 8555: [SAPT_CAL] InternalTxSAPTPower :: targetTxp=%d msrdTxp=%d txplog=%d calvalue=%d
Line 8603: [SAPT_CAL] uhal_MtmHandler_InternalTxSAPTFreq
Line 8605: [SAPT_CAL] bandInfo=%d targetPower=%d freqStart=%d freqStop=%d
Line 8660: [SAPT_CAL] InternalTxSAPTFreq :: tempFreqCal=%d msrdTxp=%d calTxpower=%d convTxpower=%d
Line 8668: [SAPT_CAL] InternalTxSAPTFreq :: Uarfcn[%d] PDADC=%d targetPower=%d msrdTxp=%d wait=%d count=%d
Line 8710: [SAPT_CAL] uhal_MtmHandler_InternalTxSAPTFreq_FBRX
Line 8712: [SAPT_CAL] bandInfo=%d targetPower=%d freqStart=%d freqStop=%d
Line 8745: [SAPT_CAL] InternalTxSAPTFreq measure error
Line 8753: [SAPT_CAL] InternalTxSAPTFreq :: tempFreqCal=%d msrdTxp=%d txplog=%d calvalue=%d
Line 8774: [SAPT_CAL] InternalTxSAPTFreq :: calTxpower=%d convTxpower=%d
Line 8782: [SAPT_CAL] InternalTxSAPTFreq :: Uarfcn[%d] targetPower=%d msrdTxp=%d wait=%d count=%d
Line 8819: Received msg id is HSPA_CAL_MIPIREAD
 Path=%d USID=0x%x ADDR=0x%x 

Line 8832: msg memory allocation fail!!!!! 

Line 8856: Received msg id is HSPA_CAL_MIPIWRITE
 Path=%d USID=0x%x ADDR=0x%x data=0x%x

Line 8897: idx, numOfTxMultiChCal %d uarfcn %d txPower %d paMode %d
Line 8931: numOfTxFreqCal %d 
Line 8964: uhal_MtmHandler_SATxMultiChCal:Not able create tCalTimer timer
Line 8973: RF locked and Tx Started rx uarfcn %d tx uarfcn 
Line 8987: uhal_MtmHandler_SATxMultiChCal 

Line 9006: uhal_MtmHandler_SATxMultiChCal:Tsetup must be 0
Line 9034: Received msg id is HSPA_CAL_HTXAPTTUNE	DSP PD ctrl en state[%d]
Line 9061: [APTUNE] Cal Target power error !!
Line 9063: [APTUNE] RFComm_InternalPD_Gpadc2Txp error!! 

Line 9073: [APTUNE :: FreqCal] Index %d Freq %d PDval %d Msrd Txpower %d PD Tx Power %d PD comp offset %d
Line 9099: [MTM_3G_CAL][c] FBRX_measure error!!
Line 9108:  [APTUNE :: PowerSet] Power err %d Setpower %d Msrd Txp %d dbg info %d
Line 9191: uhal_MtmHandler_RFOn!

Line 9196: Rf Turning Onn
Line 9202: FSM_RAKE_FAKE_SYNC: Error %d, Additional Error %d

Line 9206: uhal_MtmHandler_RFOn Finished

Line 9221: Load cal data called 
Line 9260: CALTIMER_SA: timeRfSA_old %d slot_time %d
Line 9268: CALTIMER_SA: timeRfSA_new %d set_time %d
Line 9274: CALTIMER_SA: timeRfSA_new %d set_time2 %d
Line 9298: power_detector[%d] =  %d
Line 9307: power_detector#1 %d
Line 9313: power_detector#2 %d
Line 9367: [MTM_3G_CAL][c] Tx Cal Setup : Band[%d] Set Vcc[%d] Set Bias[%d/%d]
Line 9391: uhal_MtmHandler_StartTimer Timer : %d task : %d
Line 9469: [MTM_3G_CAL][c] find apt cal : PA mode[%s] Band[%d] Total index[%d]
Line 9522: EHalRfRxUarfcnCmd: Error %d, Additional Error %d

Line 9525: [MTM_3G_CAL][c] Set ul uarfcn[%d]
Line 9545: [MTM][RF ET][AT CMD]ET_cmd_Phase : ET_cmd->header.param_cnt=%d
Line 9546: [MTM][RF ET][AT CMD]ET_cmd_Phase : ET_cmd->header.cmd=%d
Line 9547: [MTM][RF ET][AT CMD]ET_cmd_Phase : ET_cmd->header.rat=%d
Line 9548: [MTM][RF ET][AT CMD]ET_cmd_Phase : ET_cmd->header.cc=%d
Line 9558: [MTM][RF ET][AT CMD] Check DPD CAL MODE
Line 9567: [MTM][RF ET][AT CMD] Set TX off command is received
Line 9572: [MTM][RF ET][AT CMD] HSUPA TXSTART command is received
Line 9577: [MTM][RF ET][AT CMD] HSPA TX PER START command is received
Line 9641: [ET_Cal] uhal_MtmHandler_TXETCAL_UpdateResult band %d, cal type %d, tx type %d
Line 9647: [ET_Cal] Freq cnt : %d
Line 9653: [ET_Cal] Index[%d] Meas Freq[%d] Power[%d]
Line 9711: uhal_MtmHandler_SetTxpower_FixedVcc Txp : %d, %d refoffset : %d, %d
Line 9726: uhal_MtmHandler_SetTxpower_FixedVcc target : %d, RFIC index : %d DGC : %ddB [0x%x], offset : %d
Line 9789: %s ERR : Undefined Band
Line 9794: %s ERR : No Attenuation Calibration!!!
Line 9816: [MTM] %s : bias_index[%d] measuredPDAGC[%d]
Line 9820: [MTM] %s : Overflowed!!!
Line 9829: [MTM] %s : exit by pdadc peak
Line 9838: [MTM] %s : exit by pdadc overflow
Line 9849: [MTM] %s : exit by pdadc peak
Line 9855: [MTM] %s : Cannot Saturate RFIC chip!!!
Line 9861: [MTM] %s : exit by using stable index
Line 9868: [MTM] %s : BAD PDADC, lock PD measure sequence
Line 9874: [MTM] %s : BAD PDADC, using unstable index
Line 9902: [MTM_3G_CAL]#3 RFIC GAIN CAL START!!
Line 9931: [MTM_3G_CAL]#3 RFIC GAIN CAL error!!! Band[%d] CAL_DUMP start!
Line 9933: [MTM_3G_CAL]#3 RFIC GAIN CAL error!!! Band[%d] CAL_DUMP end!
Line 9939: [MTM_3G_CAL]#3 RFIC GAIN CAL END!! Band[%d]
Line 9960: [MTM_3G_CAL]#3 band index[%d] Change lpm cal pts [%d]->[%d]
Line 9963: [MTM_3G_CAL]#3 LPM %d [Before]
Line 9967: [MTM_3G_CAL]#3 %d %d %d %d %d
Line 9979: [MTM_3G_CAL]#3 LPM %d [After]
Line 9983: [MTM_3G_CAL]#3 %d %d %d %d %d
Line 10032: [MTM_3G_CAL]#4 BuildFBRX[%d] : gap[%d] FBRXPower[%d] TxPower[%d] StartOffset[%d]
Line 10075: [MTM_3G_CAL]#4 BUILD FBRX TABLE END!! FBRxGain[%d] calvalue[%d]
Line 10102: paMode : %d bandArea:%d registryOffset:%d txPowerCalPtsAt:%d offset:%d 
Line 10131: uhal_MtmHandler_SAMsrdAPTTxPower : pa_Mode : %d Startpts %d APT_index %d Target Pwr %d txPower %d 
Line 10138: Flag : %d 
Line 10144: TxP_dbm : %d pos:%d, PD pts:%d
Line 10170: TxAPTBuild Fail Warning !!!! paMode = 0x%x
Line 10186: TX APT BUILD [2] targetPower %d
Line 10197: uhal_MtmHandler_TxAPTBuild LPM Target : %d
Line 10202: uhal_MtmHandler_TxAPTBuild LPM gap: %d 
Line 10211: uhal_MtmHandler_TxAPTBuild Gain : %d gap: %d 
Line 10229: uhal_MtmHandler_TxAPTBuild : TxP : %d, RF_Gain : %d  VCC : %d paMode %d
Line 10260:  txPowerCalPtsAt:%d 
Line 10302: [APTUNE] uhal_MtmHandler_TuneAPTPower Rfix idx %d, stage %d, DGC val %d
Line 10360: uhal_MtmHandler_hspaTmStart gpadc read en 
Line 10363: uhal_MtmHandlerConfigTM
Line 10390: UmodemStatus=%d

Line 10397: DSP Dead SO enable DSP!!!!!!!!!!  

Line 10405: ## Warning!! uhal_HmcpIpcGetDstStatus is False##
Line 10410: ul_ch_info 0 

Line 10420: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d

Line 10425: Antenna switched to UMTS

Line 10433: Error: modem is turned off 

Line 10457: Wrong rx frequency %d. couldn't convert right uarfcn. Return rxUarfcn %d
Line 10485: Wrong rx frequency %d. couldn't convert right uarfcn. Return rxUarfcn %d
Line 10494: NS_UMTS_RSSI_SCAN_REQ : HSPA_CAL_HSPATMSTART

Line 10515: HSPA_CAL_HSPATMSTART- DCXO initflag set : %d
Line 10611: Wrong txBand. couldn't find right uarfcn. default set to tx_uarfcn %d rx_uarfcn
Line 10690: Wrong uarfcn. couldn't find right frequency BAND. default set to high band rx_uarfcn %d
Line 10712: NS_UMTS_RSSI_SCAN_REQ:: UL channel exists so delete it... 

Line 10718: DSP AliveSo Disable it.!!!!!!!!!!!!!  

Line 10727: DSP Dead So Do nothing!!!!!!!!!!  

Line 10732: [process debug] NS_UMTS_RSSI_SCAN_REQ: 3G off

Line 10741: NS_UMTS_RSSI_SCAN_REQ - UmodemStatus is OFF so bypass

Line 10755: RF : uhal_MtmHandler_SendMsg2NS pal_MemAlloc fail

Line 10759: uhal_MtmHandler_SendMsg2NS length %d destType %d
Line 10781: NS_UMTS_RSSI_SCAN_REQ : uhal_MtmHandler_RssiScan_sendMsg2NS pal_MemAlloc fail

Line 10788: NS_UMTS_RSSI_SCAN_REQ : uhal_MtmHandler_sendMsg2NS length %d destType %d
Line 11008: [AIT] Delay_HSPA_NV_Write_Start
Line 11014: [AIT] Delay_HSPA NV_Write_End
Line 11019: [FBR] HSPA_MTM_FBR_PROCESS Start mode[%d] Parameter[%d]
Line 11028: [MTM] HSPA_MTM_FBR_PROCESS Msg ErrorCode[%d] Result(1)[%d] Result(2)[%d] Result(3)[%d]
Line 1515: RealCellSync state %d wating for rxlock and step1 start. antPathSelection %d
Line 1533: STEP1 fail

Line 1546: RealCellSync state %d waiting for step1 & buffering start
Line 1551: CheckSTEP1  fail

Line 1556: step1 successl
Line 1559: SearcherBuffer fail

Line 1577: RealCellSync state %d waiting for buffering and step3 start
Line 1582: CheckSearcherBuffer	fail

Line 1589: STEP3 fail

Line 1607: RealCellSync state %d wating for step3 & MP search start
Line 1612: CheckSTEP3  fail

Line 1619:  MultiPath fail

Line 1644: RealCellSync state %d waiting for MP searcher & finger start
Line 1649: MultiPath  fail

Line 1659:  Scr Code=%d

Line 1675: EHalSrchCpichCmd: Error %d, Additional Error %d

Line 1712:  Start RL 0
Line 1744: Finger %d position set to %d
Line 1751: FingerConfig Failed

Line 1757:  Start Finger %d
Line 2763: FAIL!!! uhal_MtmHandler_PhychRlConfig
Line 2772: FAIL!!! uhal_MtmHandler_TrchConfig
Line 2780: FAIL!!! uhal_MtmHandler_CctrchConfig
Line 5143: [MTM_3G_CAL]#8 Hysterisis range is wrong!!
Line 5158: [MTM_3G_CAL]#8 Hysteresis loading - [%d] : pwr_idx = %d, power = %d, LPM_idx = %d, cal_val = %d
Line 10948: [AIT] Delay RF bandindex: %d Channel:%d, delay_fwd: %d, delay_rev: %d 
