Line 662: [RXF] Monitor path alloc: rf(%d), dcr_sel(%d), mxr(%d), rtg(%x), demod_sel(%x), output_sel(%x), tdbuf_sel(%x)
Line 709: [ClearCoreAllocation] Clear resv bit in N2L suspend in IRAT scenarios, outputPathBitmap(0x%x), tdbufIndexBitmap(0x%x)
Line 763: [CalculateCurrCoreAlloc DEBUG] CC%d, DemodCC(%d), invalid Demod CC index, skip DB update
Line 768: [SC] Rx Ratio CC(%d) MIMO(%d)
Line 783: [SC] Rx Ratio DIV(%d)
Line 793: [SC] LTE CC calculate to reduced mode, CC(%d), demodCC(%d)
Line 833: [SC] Rx Ratio2 debug cc_idx(%d), div_cc_idx(%d), outputPathBitmap(%x), numCCinCoreSum(%d)
Line 835: [SC] Rx Ratio2 debug cc_idx(%d), div_cc_idx(%d), outputPathBitmap(%x), numCCinCoreSum(%d)
Line 847: [SC] CoreAllocDb debug(Core/CC%x): processing_Sum(%d), buffer_Sum(%d), numCC/numDivCC(%x), outputPathBitmap(%x), demodPathBitmap(%x), tdbufIndexBitmap(%x)
Line 889: [Reduced Mode Debug] LTE Core0 buff(%d), proc(%d), Core1 buff(%d), proc(%d)
Line 899: [Reduced Mode Debug] NR Reduced mode REQ. Core(%d), proc_sum(%d), buffer_sum(%d)
Line 904: [Reduced Mode Debug] NR Reduced mode not needed
Line 923: [Reduced Mode Debug] idx(%d), temp_buffer_sum(%d), CoreAllocDb->buffer_Val(%d), cc_bit_map(0x%x)
Line 935: [Reduced Mode Debug] Newly allocated cc also should be in reduced mode, demodcc(%d), cc_bit_map(0x%x), temp_buffer_sum(%d)
Line 964: [Reduced Mode Debug] LTE Core0 buff(%d), proc(%d), Core1 buff(%d), proc(%d)
Line 987: [Reduced Mode Debug] LTE Core0 buff(%d), proc(%d), Core1 buff(%d), proc(%d)
Line 989: [Reduced Mode Debug] LTE Reduced mode not needed
Line 1012: [Reduced Mode Debug] NR Reduced mode REQ(LTE 4rx). LTE Core0 buff(%d), proc(%d), Core1 buff(%d), proc(%d)
Line 1021: [Reduced Mode Debug] NR Reduced mode not needed
Line 1027: [Reduced Mode Debug] Invalid Reduced mode(%d) 
Line 1061: [Release4rxForOutputPath] Core(%d) outputpath_cnt(%d), bitmap(%d)
Line 1073: [Release4rxForOutputPath] Selected CC(%d), DemodCC(%d), Type(%d)
Line 1077: [Release4rxForOutputPath] Release 4RX and update CC info in DB
Line 1199: [GNSS-PULSE] HALSCDbInit
Line 1216: [GNSS-PULSE] HALSC_GnssDbInit
Line 1410: Change cell ID : %d -> %d
Line 1419: Change Downlink BW : %d -> %d
Line 1422: [SC] SetDlSystemInfo: mode(%d), [CID, BW, CP]([%d, %d, %d] -> [%d, %d, %d])
Line 1626: [DS_OPT] null func pointer
Line 1668: [DS_OPT] null func pointer
Line 1715: [DS_OPT] null func pointer
Line 1985: HALSC_SetDlEarfcn : dl_earfcn(%d), rf_band(%d), dl_freq(%d)
Line 2029: HALSC_SetUlEarfcn : ul_earfcn(%d), ul_freq(%d)
Line 2117: HALSC_SetTdpState Modem(skip)
Line 2130: assert condition : Current state is wrong
Line 2138: HALSC_SetTdpState Early return, RF unavailable:%d(tdpstate: %d->%d)
Line 2144: HALSC_SetTdpState Early return, ScgStackId(eDV_Active: %d):(tdpstate: %d->%d)
Line 2171: [SC] SetTdpState(CC%d, Dup(%s)): state(%d->%d)
Line 2209: [SC] SetRxMode(CC%d): mode(%x)
Line 2289: [SC] SetFePathIdx(CC%d): Not supported path(%d)
Line 2294: [SC] SetFePathIdx(CC%d): path(%d), idx(%d)
Line 2363: [SC] CC Info(cc:%04x, band:%d, bw:%d, rx_mode:%d, earfcn:%d, freq:%d)
Line 2374: [SC] CC Info(cc:%04x, band:%d, bw:%d, rx_mode:%d, earfcn:%d, freq:%d)
Line 2726: [SetSCellNtf]pcell position (%d), scell position(%d), selected position(%d)
Line 2738: [SetSCellNtf]SetTdpState(CC%d):state(%d->%d)
Line 2828: HALSC_GetScellIdxFromMxrCC(CC%d):scell_idx: %d
Line 3089: [SC] HALSC_GetDemodCCList(0x%x)
Line 3466: HALSC_GetUlEarfcn: type(%d), halsc_cc_info[cc].ul_bw(%d), cc(%d), slo_cc(%d)
Line 3467: halsc_cc_info[slo_cc].ul_bw(%d), halsc_cc_info[cc].ul_earfcn(%d), halsc_cc_info[cc].ul_rf_earfcn(%d)
Line 3477: HALSC_GetUlEarfcn: halsc_cc_info[%d].slo_pair_num(%d)
Line 3555: HALSC_GetUlEarfcn: halsc_cc_info[%d].slo_pair_num(%d)
Line 3616: [SC] HALSC_GetUlBw: type(%d) cc(%d) ul_bw(%d)
Line 3629: [SC] HALSC_GetUlBw: type(%d) cc(%d) slo_pair_num(%d) dl_bw(%d)
Line 3639: [SC] HALSC_GetUlBw: type(%d) cc(%d) dl_bw(%d)
Line 3841: [SC] HALSC_GetRxMode: eDV_Active(%d) IsDuringSCGMeas(%d), refer to MCG halsc_cc_info
Line 3944: [SC] HALSC_GetRfRxMode : invalid cc index !!
Line 4684: [SC] IratInitFaInfo: AGC(%d, %d)
Line 4721: [SC] IratStoreFaInfo: AGC(%d, %d)
Line 4776: [SC] IratConfigGapInIdle: gDrx_ActiveRat(%d), PD_LTE_STATUS(%d)
Line 4780: [SC] (IRAT config) sfn(%d), tti(%d), offset(%d)
Line 4781: [SC] (IRAT gap_start) sfn(%d), tti(%d), offset(%d)
Line 4782: [SC] (IRAT gap_end) sfn(%d), tti(%d), offset(%d)
Line 4823: [SC] (IRAT gap_end PWR saving) gap_control  sfn(%d), tti(%d), length(%d)
Line 4934: [SC] (HALSC_IratNrSsbMargin) ssbPeriodicity(%d), ssbOffset(%d)
Line 4935: [SC] (HALSC_IratNrSsbMargin) Current sfn(%d), tti(%d), offset(%d)
Line 4936: [SC] (HALSC_IratNrSsbMargin) Ssb sfn(%d), tti(%d), Initial Diff(%d), diff(%d)
Line 5005: [SC] (HALSC_IratNrSsbMarginNoSmtc) ssbPeriodicity(%d), ssbOffset(%d)
Line 5006: [SC] (HALSC_IratNrSsbMarginNoSmtc) Current sfn(%d), tti(%d), offset(%d)
Line 5007: [SC] (HALSC_IratNrSsbMarginNoSmtc) timing_offset(%d), Ssb sfn(%d), tti(%d), Initial Diff(%d), diff(%d)
Line 5013: [SC] (HALSC_IratNrSsbMarginNoSmtc) Search case, return 9ms
Line 5059: [SC] (HALSC_IratNrSsbGetPremarginAndLength) ssbIndex(%d), scs(%d), preMargin(%d), length(%d)
Line 5101: [SC] IratConfigGapInSuspend: gDrx_ActiveRat(%d), PD_LTE_STATUS(%d)
Line 5105: [SC] (IRAT config) sfn(%d), tti(%d), offset(%d)
Line 5106: [SC] (IRAT gap_start) sfn(%d), tti(%d), offset(%d)
Line 5107: [SC] (IRAT gap_end) sfn(%d), tti(%d), offset(%d)
Line 5117: [SC] (current_time) sfn(%d) tti(%d) offset(%d)
Line 5118: [SC] (gap_pre) sfn(%d) tti(%d) offset(%d)
Line 5162: [SC] gHALSC_Srch_Meas_isvalid(%d)
Line 5254: [SC] IratConfigGapInConn
Line 5260: [SC] GAP is already in use. Need to check!!!
Line 5281: [SC] Gap timing(%d): sfn(%d), tti(%d), current time: sfn(%d), tti(%d), offset(%d)
Line 5289: [SC] Gap timing(MGTA): sfn(%d), tti(%d), length(%d)
Line 5441: [SC] Gap timing updated for NR interband Gap: SFN(%d), TTI(%d)
Line 5445: [SC] Gap timing is same as before: SFN(%d), TTI(%d)
Line 5457: [SC] HALSC_SendLcpuGapIPCForNrGap start_time(%d) length(%d) rtg_diff(%d), nrGapStartSfnTti(%d)
Line 5459: [SC] HALSC_SendLcpuGapIPCForNrGap NR start(%d) NR end(%d) LTE start(%d),  LTE End(%d)
Line 5500: [SC] IratConfigUmtsStartSignal: sfn(%d), tti(%d), offset(%d)
Line 5526: [SC] IratClearUmtsStartSignal: umtsStartSig(%d)
Line 5563: [SC] IratInitLteRF: earfcn(%d), rf_band(%d)
Line 5618: [SC] IratInitLteRFInGap: earfcn(%d), rf_band(%d), pdm(%d)
Line 5647: [SC] InitSync
Line 5684: [SC] SetServingCell: CID(%d), CP(%d), POS(%d)
Line 5834: [SC] MIB false alarm : All Zero
Line 5849: [SC] MIB(pbch_cc(%d):dl_bw(%d),sfn(%d)
Line 5875: [SC] Invalid SHM.cnt(%d)
Line 5883: [SC] MIB(pbch_cc(%d):dl_bw(%d),sfn(%d)
Line 5903: [SC] MIB false alarm : Ant num error(0x%x)
Line 5913: [SC] MIB false alarm : BW ERROR(%d)
Line 5963: [SC] Serv(CC%d) is enabled(tdp_state[%d]) Or is reserved(%d)
Line 5976: [SC] Serv(CC0) MIB(Previous Information): sfn[%d], dl_bw[%d], phich_duration[%d], phich_resource[%d], enb_ant_num[%d]
Line 6050: [SC] Serv(CC%d) MIB: bch_dec_idx[%d], pbch_trial_cnt[%d], idx+cnt[%d]
Line 6061: [SC] Serv(CC%d) MIB: DL_BW[%d], PHICH.Resource[%d], PHICH.Duration[%d], NG[%d], SFN[%d], AntNum[%d]
Line 6072: [%4d, %3d] MasterInformationBlock : dl-SystemBandwidth %d, phich-Duration %d, phich-Resource %d, systemFrameNumber 0x%02X, ant_num: %d
Line 6110: [SC] HeNB(CC%d) MIB: DL_BW[%d], PHICH.Resource[%d], PHICH.Duration[%d], NG[%d], SFN[%d], AntNum[%d]
Line 6142: [SC] ITF(CC%d) MIB: DL_BW[%d], PHICH.Resource[%d], PHICH.Duration[%d], NG[%d], SFN[%d], AntNum[%d]
Line 6184: [SC] D2D(CC%d) MIB: DL_BW[%d], SFN[%d], TTI[%d], SA[%d], IC[%d], RES[%d]
Line 6189: [SC] Invalid PBCH mode(%d)
Line 6391: dmxr %d freqOffset %d fePathIdx %d 
Line 6493: [SC] Run CL-AIT in weak signal! CA_AITen(%d)
Line 6552: [SC] prevLteBand[HALDSDS_STACK1] 0 -> %d
Line 6560: [SC] prevLteBand[HALDSDS_STACK2] 0 -> %d
Line 6612: [SC-GNSS] dl_earfcn: %d (skip updating earfcn until first measurement results are received)
Line 6620: [SC-GNSS] dl_earfcn: %d rf_band: %d rssi: %d tx_power: %d
Line 6623: [SC-GNSS] requestType: %d prevLteBand: %d requestCount: %d
Line 6701: HALSC_ProcSync10msHisr(LABS(afc_angle):%d cnt:%d afc_pdm:%d)
Line 6705: HALSC_ProcSync10msHisr(on holding)(LABS(afc_angle):%d cnt:%d afc_pdm:%d)
Line 6711: HALSC_ProcSync10msHisr(current_time.sfn:%d current_time.tti:%d)
Line 6717: HALSC_ProcSync10msHisr(After AFC HOLD STOP afc_pdm: %d)
Line 6718: [SC] (After AFC HOLD STOP afc_pdm: %d)
Line 6738: HALSC_ProcSync10msHisr(current_time.sfn:%d current_time.tti:%d)
Line 6739: HALSC_ProcSync10msHisr(AFC HOLD)afc_pdm: %d HALSC_FirstAfcPdmStored: %d HALSC_AfcPdmStored: %d)
Line 6740: [SC] (afc_pdm: %d HALSC_FirstAfcPdmStored: %d)
Line 6747: HALSC_ProcSync10msHisr(No Action due to any srchoffset but no pdmoffset) afc_pdm: %d HALSC_FirstAfcPdmStored: %d HALSC_AfcPdmStored: %d)
Line 6756: HALSC_ProcSync10msHisr(Start FastSrch) afc_pdm: %d HALSC_FirstAfcPdmStored: %d HALSC_AfcPdmStored: %d)
Line 6762: HALSC_ProcSync10msHisr(NO ACT due to ongoing FS)afc_pdm: %d HALSC_FirstAfcPdmStored: %d HALSC_AfcPdmStored: %d)
Line 7402: [SC] (SFN:%d) Out Sync Rate = %d (str:%d, thr:%d) rsrp(%d) rsrq(%d)
Line 7407: [SC] SINR(%d, %d)
Line 7414: [SC] In Sync Rate = %d (str:%d, thr:%d)
Line 7428: [SC] Out Sync Rate = %d (str:%d, thr:%d)
Line 7430: Out Sync Rate = %d (str:%d, thr:%d)
Line 7545: [SC] SetTdpBeforeInterHOStep1: AGC OFF(%d, %d), AFC HOLD(%d)
Line 7582: [SC] SetTdpBeforeInterHOStep2: AGC Index = (%d, %d)
Line 7619: [SC] SetTdpBeforeBlindHoSrch: Saved AFC value(%d)
Line 7707: [SC] SetTdpBeforeIntraHO: Saved AFC value(%d)
Line 7741: [SC] SetTdpAfterHOStep1: AGC gain(%d, %d)
Line 7794: [SC] rf_freq is 0.
Line 7797: [SC][HALSC_SetTdpAfterHOStep2][SAT] HALSC_AfcPdmHoSrchFO(%d, %dHz) HALSC_AfcPdmStored(%d) HALSC_AfcPdmCal(%d) freq(%d)
Line 7821: [SC] SetTdpAfterHOStep2: Restored AFC value(%d)
Line 7837: [SC] SetTdpAfterHOStep3
Line 7915: [SC] SetTdpBeforeBplmnScanStep2(InterANR): AGC(TD-ASYNC) ON
Line 7919: [SC] SetTdpBeforeBplmnScanStep2: AGC(TD-ASYNC) ON
Line 7954: [SC] HALSC_SetTdpBeforeRssiScan: targetBw(%d)
Line 7991: [PWR_OPT] Wakeup is not over yet, do not trigger Meas-schedule to RRM gDrxL1_Flag[%d]
Line 7998: CGI on-going, do not trigger Meas-Schedule to RRM
Line 8005: [4G_DRDS] eDV_AvailableforEPT. Don't send Meas schedule prior to EDV activation
Line 8024: [DRX] SINR is not updated yet
Line 8028: [DRX] SINR is not updated first
Line 8034: PrevSinr %d -> %d, CurrSinr %d
Line 8038: [DRX] SINR is updated for measschedule ind
Line 8286: [SC] ProcGapAHisr: Unknown GAP state(%d), mode(%d, %d)
Line 8318: [SC] ProcGapAHisr(end): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 8343: [SC] ProcGapBHisr(end): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 8351: [SC] InterFreq/IRAT GapA Time: %d [us], Inner Gap Time : %d [us], GapB Time : %d [us]
Line 8425: [SC] ProcGapBHisr(end): by gHALSC_NrProcessing, Gap was not done
Line 8486: [SC] --- Default Interrupt
Line 8505: [SC] --- Default DMTC Interrupt
Line 8521: [SC] ProcGapBHisr: Unknown GAP state(%d), mode(%d, %d)
Line 8655: [HALRXF] saved_iqc_coef_value(%d): I(%d), Q(%d)
Line 8698: [SC] LteMifFreq(%d)
Line 8819: rf_path is wrong(%d)
Line 8885: [SC] Don't update TDD band AGC before fixing scell meas result fluctuation
Line 8890: [SC] ProcGapCHisr: Unknown GAP state(%d), mode(%d, %d)
Line 8905: [SC] ProcGapCHisr(end): sfn(%d), tti(%d), offset(%d), mode(%d, %d), state(%d)
Line 8964: [SC] GetNextGapBoundary(%d): cur_sfn_tti(%d), gap_sfn_tti(%d)
Line 8968: [SC] GetNextGapBoundary(%d): Invalid!!! cur_sfn_tti(%d), gap_sfn_tti(%d) GapPeriod(%d)
Line 9001: [SC] UE state (%d), Gap Start Offset %d ms
Line 9008: [SC] UE state (%d), Gap Start Offset %d ms
Line 9022: [SC] GetNextGapBoundary(%d): cur_sfn_tti(%d), gap_sfn_tti(%d)
Line 9055: [SC] CheckNextGapBoundary: Gap is disabled
Line 9075: [SC] CheckNextGapBoundary(GAP,DMTC both configured margin + 4ms)(diffRTG:%d): Gap timing: sfn(%d), tti(%d), current time: sfn(%d), tti(%d), offset(%d)
Line 9079: [SC] CheckNextGapBoundary(diffRTG:%d): Gap timing: sfn(%d), tti(%d), current time: sfn(%d), tti(%d), offset(%d)
Line 9108: [SC] GetNextDmtcBoundary(%d): cur_sfn_tti(%d), dmtc_sfn_tti(%d)
Line 9113: [SC] GetNextGapBoundary(%d): Invalid!!! cur_sfn_tti(%d), dmtc_sfn_tti(%d) DmtcPeriod(%d)
Line 9173: [SC] ConfigGapInterrupt: earfcn(%d), bw(%d)
Line 9182: [SC] GapLevelState(%d), AgcOvr(%d, %d), PschPwr(%d, %d, %d), SrchResultValid(%d)
Line 9186: assert condition : fa_info is NULL
Line 9200: [SC] GAP is already in use. Need to check!!!
Line 9221: [SC] UE state (%d), Gap Start Offset %d ms
Line 9228: [SC] UE state (%d), Gap Start Offset %d ms
Line 9232: [SC] Gap timing(%d), lenght(%d): sfn(%d), tti(%d), current time: sfn(%d), tti(%d), offset(%d)
Line 9327: Turn On Rx Path Timer started with [%u]us!!!
Line 9387: ConfigDefaultGapInterrupt (GapConfigured: %d, DefaultIntrFlag: %d)
Line 9436: [DMTC] Disable Default GAPs : DefaultIntrState(%d)
Line 9467: ConfigDefaultDmtcInterrupt
Line 9485: MeasDurationInd - SGapB enabled (sfn:%d, tti%d)
Line 9544: [SC] Measurement Scheduling (meas_enable:%d, meas_period:%d, gap_enable:%d, dmtc_enable:%d)
Line 9561: [SC] GAP Scheduling Start, sfn = %d, tti = %d
Line 9572: [SC] GAP Scheduling Stop, sfn = %d, tti = %d
Line 9583: [SC] DMTC Scheduling Start, sfn = %d, tti = %d
Line 9592: [SC] DMTC Scheduling Stop, sfn = %d, tti = %d
Line 9618: [SC] Measurement Scheduling - no change in current GAP(%d) or DMTC(%d) config
Line 9624: [SC] GAP Scheduling Stop
Line 9694: [SC] Measurement Scheduling Stop
Line 9698: [SC] GAP Scheduling Stop
Line 9702: [SC] Dmtc Scheduling Stop
Line 9749: [SC] Do not disable Connected Schedule Interrupt
Line 9855: [SC][DCXO][DEBUG] HALSC_SetDcxoEnable : srch_mode(%d), dcxo_enable(%d)
Line 9875: [SC][DCXO][DEBUG] HALSC_GetDcxoEnable : enable(%d) 
Line 9948: [SC][DCXO] DCXO sinr(%d %d %d %d) afc ppm(%d) cell id/ue state/rat(%05d), temperature(%d)
Line 9967: [SC][DCXO] HALSC_SetAfcDcxoDiffDrx : Ignored , ModempowerON %d RFUnavailable %d
Line 9979: [SC][DCXO] HALSC_SetAfcDcxoDiffDrx : HALSC_AfcPdmStored(%d), Diff(%d), totalPdm(%d), temp(%d)
Line 10014: [SC][DCXO] HALSC_SetDcxoCheckPoint : ratId(%d), HALSC_AfcPdmStored(%d), temp(%d)
Line 10038: [SC][DCXO] HALSC_SetDcxoAfcPdmValue : HALSC_AfcPdmDefault(%d), HALSC_AfcPdmCal(%d)
Line 10059: [SC][TCXO] HALSC_SetTcxoAfcPdmValue : HALSC_AfcPdmDefault(%d), HALSC_AfcPdmCal(%d)
Line 10087: [SC] HALSC_InitFrontEnd : active(%d), IsHoSync(%d), IsWakeupOnGoing(%d), HALSC_AfcPdmStored(%d)
Line 10230: [SC] SetAntennaMode: op_mode(%d), rx_mode(%x -> %x)
Line 10287: [SC] ConfigAntenna: Not supported antenna config(%d)
Line 10357: [SC] InitCCInfo: Avoid SCC CC reset during CGI opeartion
Line 10396: [SC] InitCCInfo
Line 10437: [LTE_L1LC] CC info Clear for 4RX CC %d, tdp_state(%d)
Line 10443: [LTE_L1LC] CC info Clear for CC %d, tdp_state(%d)
Line 10457: [SC] HALSC_InitCCInfoParam
Line 10511: [SC] Skip DL_SYSINFO setting in N2L latch
Line 10589: [SC] InitforDRX
Line 10622: [SHADE] LMAC init and Pkt Proc Init is done as part of Core-1
Line 10686: [SC] ConfigRTG: time_offset(%d), RTG(%d, %d, %d, %d)
Line 10720: [SC] ConfigRTGforIRAT: meas_bw(%d), cell_id(%d), time_offset(%d)
Line 10892: [SC] SwReset
Line 10929: [SC] ReInitSync !!!
Line 10994: [SC] FaSelectReady: Invalid FA selection state(%d)
Line 11033: HALSC_CheckFeasibiltyWithSearchAccum (CurrentSyncMode : %d, result = %d)
Line 11055: [SC] HALSC_CheckFeasibiltyToAbortSrchMeas
Line 11070: [SC] Disable sync/Meas as SCG is stopping search/Meas
Line 11074: [SC] Do not disable Sync/Meas Intr as other stack is active or Irat ongoing on other stack
Line 11119: [SC] EnableSync: mode(%d), earfcn(%d)
Line 11135: Start srch timer for total srch/meas (%u) 
Line 11205: [SC] HALSC_FreqScanRssi(%d), rssi_th(%d), earfcn(%d)
Line 11368: [SC] EnableSync: Invalid cc(%d)
Line 11611: [SC] Invalid CC Idx for SCG stack (%d)
Line 11630: [SC] DRDS_DeepSrch should be done only for SCG stackID
Line 11666: [SAT] Enable search hypo under SatMode
Line 11820: [SC] EnablePbch: cc(%d), mode(%d)
Line 11850: [FEDV] Do not DisablePbch: pbch_mode(%d)
Line 11892: [SC] DisablePbch: cc(%d), mode(%d)
Line 11927: [SC] EnableMeas: Invalid measure cnt(%d)
Line 11934: [SC] EnableMeas: Invalid cc(%d)
Line 11943: [SC] RSTD: PRS Measurement Ongoing, Delay CRS Measurement Request(%d)
Line 11992: [SC] DMTC EnableMeas(CC%d): start(%d), end(%d), bw(%d), dmtc_config(%d)!
Line 12167: Start meas timer for total srch/meas (%u) 
Line 12179: [SC] EnableMeas(CC%d): mode(%d), cnt(%d), serv_bw(%d), start_tti(%d), end_tti(%d)!
Line 12260: [SC] DisableMeas
Line 12369: [DSDS] Modem is power down state, DsdsConnScheduleIntr handling is abnormal
Line 12373: [DSDS] Conn Schedule Interrupt [%d]
Line 12387: [DSDS] Conn Schedule Interrupt Invaild input
Line 12763: HALSC_DisableGapAIntr
Line 12803: HALSC_DisableGapBIntr
Line 12890: [DSDS] Do not disable GAP Intr as RF is with other stack(or X2L irat meas on other stack)
Line 12894: HALSC_DisableGapIntr
Line 12959: RF not available hence do not disable interrupt of other stack
Line 12963: Force disable Interrupt!! because RF release or pause
Line 12984: Force disable Interrupt SCG!!
Line 13052: [AIT] Intr_MtmSa1ms is enabled for Intr_AitDumpDone
Line 13080: [AIT] Intr_MtmSa1ms is disabled for Intr_AitDumpDone
Line 13237: HALSC_HoldTdpBlockDsdsPause
Line 13248: [SADS] skip due to NR path
Line 13274: [SC] HoldTdpBlock: PDM(%d), AGC(%d, %d) AGC_MODE(%d) 
Line 13311: HALSC_HoldTdpBlockDsdsPauseSCG
Line 13360: [SC] HoldTdpBlock: PDM(%d), AGC(%d, %d) AGC_MODE(%d) 
Line 13394: UE in DRX Sleep. Skipping TDP restore!!!
Line 13453: [DRX] [Before AGC start] Turned on Rx diversity paths according to the current Rx mode(%x)
Line 13458: [DRX] (Adaptation): Changed to 4Rx for monitoring
Line 13487: [DRX] AGC gain recovery(%d, %d)
Line 13496: [SC] RestoreTdpBlock: UeState(%d), PDM(%d), AGC(%d, %d) AGC MODE(%d)
Line 13554: [SC] HoldTdpBlock: PDM(%d), AGC(%d, %d)
Line 13619: [SC] RestoreTdpBlock: UeState(%d), PDM(%d), AGC(%d, %d)
Line 13635: [SC] RestoreLteCommonBlockAfterUmtsCgiAcq: start
Line 13653: [SC] RestoreLteCommonBlockAfterUmtsCgiAcq: finish
Line 14037: [SC] ProcSGapAIntr(start): gHALSC_NrProcessing, so don't start Gap
Line 14061: [SC] ProcSGapAIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 14533: [SC] SRCH AGC0[0-4]: %08x %08x %08x %08x %08x
Line 14534: [SC] SRCH AGC1[0-4]: %08x %08x %08x %08x %08x
Line 14535: [SC] SRCH AGC0[5-9]: %08x %08x %08x %08x %08x
Line 14536: [SC] SRCH AGC1[5-9]: %08x %08x %08x %08x %08x
Line 14569: [SC] [%d]SFN[%d], Cell ID[%d], CP Type[%d] UL BW[%d] Position[%d] 
Line 14602: [SC] rf_freq is 0.
Line 14614: [SC] control_per_pdm is 0.
Line 14618: [SC] HALSC_UpdateAfcPdmBySrchFO: HALSC_AfcPdmSrchFO(%d, %dHz) HALSC_AfcPdmStored(%d) HALSC_AfcPdmCal(%d) freq(%d)
Line 14658: HALSC_ResetAfcPdmValue(use cal data due to PowerON)(HALSC_AfcPdmStored:%d)
Line 14664: HALSC_ResetAfcPdmValue(return due to Modem PD)(HALSC_AfcPdmStored:%d)
Line 14673: HALSC_ResetAfcPdmValue(use HALSC_AfcPdmStored)(HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
Line 14702: HALSC_ResetAfcPdmValue(use HALSC_AfcPdmSrchFO)(HALSC_AfcPdmSrchFO:%d(%dHz) HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
Line 14705: HALSC_AfcPdmMode(%d))
Line 14712: HALSC_ResetAfcPdmValue(use HALSC_AfcPdmCal)(HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
Line 14722: HALSC_ResetAfcPdmValue(use HALSC_AfcPdmDefault)(HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
Line 14731: HALSC_ResetAfcPdmValue(use 4G CAL DATA)(4G:%d HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
Line 14740: HALSC_ResetAfcPdmValue(use default due to large pdm offset)(HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
Line 14747: HALSC_ResetAfcPdmValue(use HALSC_AfcPdmStored)(HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
Line 14755: HALSC_ResetAfcPdmValue(find Y value)(HALSC_AfcPdmStored:%d afc_pdm:%d pdm_offset[%d]:%d, gL1LC_pdm_control_value:%d)
Line 14758: HALSC_ResetAfcPdmValue(find Y value)(HALSC_AfcPdmStored:%d afc_pdm:%d pdm_offset[%d]:%d, gL1LC_pdm_control_value:%d)
Line 14824: HALSC_StoreAfcDefaultPdmValue(2G Cal update due to AFC HOLD)(HALSC_AfcPdmDefault:%d )
Line 14854: HALSC_StoreAfcDefaultPdmValue(2G Cal update due to limit)(HALSC_AfcPdmDefault:%d )
Line 14861: HALSC_StoreAfcDefaultPdmValue(normal update)(HALSC_AfcPdmDefault:%d )
Line 14902: HALSC_StoreAfcPdmValue(Not update SW PDM due to AFC HOLD)(current_AfcPdm:%d)
Line 14915: HALSC_StoreAfcPdmValue(force_update)(HALSC_AfcPdmStored:%d )
Line 14916: HALSC_StoreAfcPdmValue(force_update)(HALSC_AfcPdmStored:%d )
Line 14927: HALSC_StoreAfcPdmValue(due to limitation)(afc_pdm:%d HALSC_AfcPdmStored:%d LABS(afc_angle):%d)
Line 14934: Store HALSC_AfcPdmStored(%d)(%d) : %d
Line 14945: Not Store HALSC_AfcPdmStored During BPLMN or CGI: %d, PREV:%d (%d)
Line 14985: HALSC_GetAfcPdmValue(Not get SW PDM due to AFC HOLD)(afc_pdm:%d HALSC_AfcPdmStored:%d)
Line 14997: HALSC_GetAfcPdmValue(limit due to large offset(afc_pdm:%d HALSC_AfcPdmStored:%d LABS(afc_angle):%d)
Line 15004: [SC] GetAfcPdmValue: afc_pdm(%d), HALSC_AfcPdmStored(%d)
Line 15035: HALSC_UpdateAfcPdmValueInFlash(update Y value)(HALSC_AfcPdmStored:%d)
Line 15146: [SC] GetAfcPdmValueInFlash: AFC CAL DATA(%d)
Line 15176: HALSC_CheckAfcBypassmode(AFC HOLD STOP)(afc_pdm:%d HALSC_AfcPdmStored:%d)
Line 15180: HALSC_CheckAfcBypassmode(normal status)(afc_pdm:%d HALSC_AfcPdmStored:%d)
Line 15588: [SC][ST%d] HALSC_UpdateAitSinr: eDV_Active(%d) McgStackId(%d) ScgStackId(%d) cc(%d), div_cc(%d)
Line 15591: [SC] HALSC_UpdateAitSinr: SNR[0/1/2/3](%d/%d/%d/%d), ait_cc_index(%d), rxmode(%d)
Line 15623: [SC][ST%d] UpdateAitParamsForMpi: cc(%d), ait_cc_index(%d)
Line 15641: [SC][ST%d] UpdateAitRFBand: cc(%d), Rf_band(%d), ait_cc_index(%d)
Line 15660: [SC][ST%d] UpdateAitRxmode: cc(%d), rxmode(%d), ait_cc_index(%d)
Line 15688: [SC][ST%d] HALSC_UpdateAitPhr: PHR[0/1](%d/%d), cc(%d), gRF_UlCaStatus(%d)
Line 15708: [SC][ST%d] HALSC_UpdateAitCombinedSinr: cc(%d), combined_snr(%d)
Line 15829: [SC] SINR: CC0(%3d, %3d)
Line 15849: [SC] SINR: CC%d(%3d, %3d)
Line 15857: sinr0(%d)
Line 16130: [PHY] STAT-ERR(id,val): 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 16133: [PHY] STAT(mcs/rb/grant): %d, %d, %d, %d, %d, %d, %d
Line 16136: [PHY] STAT(rank4/256q/layer): %d, %d, %d, %d, %d, %d, %d
Line 16139: [PHY] STAT-HARQ(diffTbs/maxRetx/a2n): 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 16142: [PHY] STAT-TX(): 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 16145: [PHY] STAT-CYCLE: 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 16148: [PHY] STAT-CCH(): 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 16151: [PHY] STAT-DEMOD(dse/dop): %d, %d, %d, %d, %d, %d, %d
Line 16207: [SC] SetMeasInfoUpdate: Invalid meas mode(%d)
Line 16241: [SC] SetMeasInfoUpdate: Not found available CC for earfcn(%d)
Line 16336: [SC] SetMeasInfoUpdate(csi-rs): csi_rs_id(%d), scrambling_id(%d), resource_config(%d), subframe_offset(%d)
Line 16387: [SC] meas_pattern(%d):0x%x 
Line 16406: [SC] meas_pattern(%d):0x%x 
Line 16426: [SC] SetMeasInfoUpdate: earfcn(%d), cell_info(%d, %d, %d), cc(%d), frame_pos(%d), period(%d), dropCount(%d)
Line 18248: [SC] CheckGapSrchResultValid: EARFCN(%d), AgcValidCheck(TRUE), AGC(%d, %d)->(%d, %d)
Line 18253: [SC] CheckGapSrchResultValid: EARFCN(%d), AgcValidCheck(FALSE), AGC(%d, %d)->(%d, %d)
Line 18286: [SC] SetSFN: sfn(%d)
Line 18425: [SC] ProcMeasIntr!
Line 18426: [SC] ProcMeasIntr!
Line 18535: HALSC_DefaultIntrFlag(%d -> %d) 
Line 18603: State:%d, Gap start Sfn: %d, Tti: %d, Offset: %d 
Line 18604: Remaining time until Gap start (%ums)
Line 18609: Gap didn't configurate
Line 18611: Gap already started
Line 18655: Gap End Sfn: %d, Tti: %d, Offset: %d 
Line 18658: [SC] HALSC_GetGapEndRemainingTtiTime : gap state(%d) remaining_time(%d)
Line 18713: [SC] HALSC_IratLteTimingDifferenceRtg : startRtgUnit(%d) endRtgUnit(%d)
Line 18966: HALSC_IratCdmaTimingMoveByRtg : start is NULL
Line 19093: calculated sfn(%d), tti(%d), offset(%d)
Line 19190: [SC] IratGetLatchInfo: SFN(%d), TTI(%d), OFFSET(%d)
Line 19255: [SC] IRAT Timing(LTE): SFN(%d), TTI(%d), OFFSET(%d)
Line 19293: [SC] Post IRAT Reference Time(LTE): SFN(%d), TTI(%d), OFFSET(%d)
Line 19294: [SC] IRAT LTE Side Latch Reference Timing Update: deltaRtg(%d)
Line 19295: [SC] IRAT Timing(LTE): SFN(%d), TTI(%d), OFFSET(%d)
Line 19301: [SC] Post IRAT Reference Time(UMTS): SFN(%d), SLOT(%d), CHIP(%d)
Line 19302: [SC] IRAT Timing(UMTS): SFN(%d), SLOT(%d), CHIP(%d)
Line 19308: [SC] Post IRAT Reference Time(GSM): frameNumber(%d), Qb(%d)
Line 19309: [SC] IRAT Timing(GSM): frameNumber(%d), Qb(%d)
Line 19317: [SC] Post IRAT Reference Time(CDMA: RAT %d): systemTime(High: 0x%x  Low: 0x%x)
Line 19318: [SC] IRAT Timing(CDMA: RAT %d): systemTime(High: 0x%x  Low: 0x%x)
Line 19503: [SC] Error timeDiff(<=0): %d, 
Line 19571: [SC] abnormal bRefer_Next_Sfn : %d, 
Line 19585: [SC] HALSC_IratCdmaRefTimingUpdate: gSiWindowEnd_Info.sfn(%d), gSiWindowEnd_Info.tti(%d), gL1SiRcv_Info.sfn(%d), gL1SiRcv_Info.tti(%d), gL1SiRcv_Info.offset(%d)
Line 19587: [SC] cdmaSysTime(High: 0x%x  Low: 0x%x)
Line 19588: [SC] IRAT Timing(CDMA): Ref CDMASystemTime(High: 0x%x  Low: 0x%x)
Line 19590: [SC] updateCnt(%d), deltaRtg(%d)
Line 19591: [SC] IRAT Timing(LTE): SFN(%d), TTI(%d), OFFSET(%d)
Line 19592: [SC] IRAT Timing(UMTS): SFN(%d), SLOT(%d), CHIP(%d)
Line 19593: [SC] IRAT Timing(GSM): frameNumber(%d), Qb(%d)
Line 19620: [SC] HALSC_IratChangeUmtsOffsetToRefTime(umtsTime): SFN(%d), SLOT(%d), CHIP(%d)
Line 19621: [SC] HALSC_IratChangeUmtsOffsetToRefTime(umtsRefTime): SFN(%d), SLOT(%d), CHIP(%d)
Line 19622: [SC] HALSC_IratChangeUmtsOffsetToRefTime timeDiff: %d, newOffset: %d
Line 19650: [SC] HALSC_IratChangeUmtsOffsetToUmtsTime(umtsTime): SFN(%d), SLOT(%d), CHIP(%d)
Line 19651: [SC] HALSC_IratChangeUmtsOffsetToUmtsTime(umtsRefTime): SFN(%d), SLOT(%d), CHIP(%d)
Line 19652: [SC] HALSC_IratChangeUmtsOffsetToUmtsTime timeDiff: %d, newOffset: %d
Line 19721: [SC] MonitorTest: Current TDP state[%s]
Line 19725: [SC] MonitorTest: Invalid TDP state[%x]
Line 19759:  PaPb_update: %d, gPaPb_Control_dB: %d, gRSRP_Control_dB : %d
Line 19833: [SC] UpdateAgcRmsFromPaPb: Invalid PA, PB value(%d, %d)
Line 19873: [SC] UpdateAgcRmsFromPaPb: Invalid PA, PB value(%d, %d)
Line 19905: [SC] UpdateAgcRmsFromPaPb: Invalid PA, PB value(%d, %d)
Line 19914: [SC] Pa: %d, Pb : %d, Pa_dB: %d, Pb_dB : %d, Rho_a_rx: %d, Rho_b_rx : %d
Line 19982: HALSC_CheckSpiForAgc(%d, %d)
Line 19989: Please Check spi
Line 20025: [SC] SetSyncMode(%d -> %d)
Line 20059: [SC] SetMeasMode(%d -> %d)
Line 20149: [SC] SRCH AGC0[0-4]: %08x %08x %08x %08x %08x
Line 20150: [SC] SRCH AGC1[0-4]: %08x %08x %08x %08x %08x
Line 20151: [SC] SRCH AGC0[5-9]: %08x %08x %08x %08x %08x
Line 20152: [SC] SRCH AGC1[5-9]: %08x %08x %08x %08x %08x
Line 20194: [SC] gInit_agc_gain(%d)(%d) max_pos_tt(%d)
Line 20230: [SC] GetCellSearchResult: Activate CC index(%d) Cid(%d) Candi_id(%d)
Line 20235: [SC] GetCellSearchResult: Activate cell search done cc(%d)(%d) candi(%d)
Line 20247: [SC] GetCellSearchResult: DRS Position Calculate is Wrong DMTC(%d) CUR(%d)
Line 20263: [SC] SRCH AGC: GAIN(%d, %d) -> (%d, %d)
Line 20295: [SC] GetCellSearchResult: PSSS is not valid!!! num_candi(%d -> %d)
Line 20332: [SC] GetCellSearchResult: PSS is not valid!!! num_candi(%d -> %d)
Line 20399: [SC] SRCH AGC(from searcher) (%d, %d)
Line 20409: [SC] SRCH AGC: GAIN(%d, %d) -> (%d, %d)
Line 20469: [SC] SetMeasInputList: Not supported CC index(%d), earfcn(%d)
Line 20520: [SC] HALSC_SetAgcGainUpdateForMeas - skip. Frame position invalid
Line 20529: [SC] earfcn(%d), rsrp_temp_offset(%d), measBitShift(%d)
Line 20600: [SC] Not supported CC index(%d)
Line 20630: [SC] Not supported CC index(%d)
Line 20921: [SC] SetPCellInfo: [%4d] Cell ID[%d] CP[%d] POS[%d] RSRP[%d]
Line 20939: [SC] HALSC_UeState Change (%s) -> (%s)
Line 21036: [SC] MeasConfig(%d => %d)
Line 21045: [SC] PreMeasConfig (%d => %d)
Line 21059: [SC] PreMeasConfig (%d)
Line 21081: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 21115: [SC] HALSC_ReconfigureGapStartSfn (SFN:%d, TTI:%d, Period:%d)
Line 21130: [SC] HALSC_GetMeasConfig(%d)
Line 21194: [SC] ConfigAgapInterrupt: state(%d)
Line 21209: [SC] GAP is already in use. Need to check!!!
Line 21303: [SC] HALSC_ConfigAgapInterrupt: current Hw Time sfn[%d], tti[%d] offset[%d]!
Line 21304: [SC] HALSC_ConfigAgapInterrupt: GAP_SET configured at sfn[%d], tti[%d]! phich_ng:%d phich_duration:%d 
Line 21359: [SC] UpdateAgapInterrupt: state(%d)
Line 21443: [SC] UpdateAgapInterrupt: current Hw Time sfn[%d], tti[%d] offset[%d]!
Line 21444: [SC] UpdateAgapInterrupt: GAP_SET configured at sfn[%d], tti[%d]!
Line 21479: [SC] ConfigAgapMibDec: cell_id(%d), frame_position(%d)
Line 21524: [SC] ConfigAgapSibDec: cell_id(%d), bw(%d), frame_position(%d)
Line 21561: [SC] HALSC_ConfigAgap:  Error! Agap already active!
Line 21568: [SC] HALSC_ConfigAgap: Target Cell info: Cell_id [%d] Earfcn [%d], cp_type[%d], frame_Pos[%d]
Line 21569: [SC] HALSC_ConfigAgap: Serving Cell Info: Cell_id [%d] Earfcn [%d], cp_type[%d], frame_Pos[%d]
Line 21624: [SC] DisableAgap
Line 21665: [SC] StopAgap
Line 21966: [A-GAP] Timer expired! in dec_mode(%d): count(%d)
Line 22090: [ConfigSingleLO]SetTdpState(CC%d):state(%d->%d)
Line 22116: [SC] ConfigSingleLO(CC%d): cmd(0), rf(%d)
Line 22196: [SC] ConfigSingleLO: Not found available CC for earfcn(%d)
Line 22252: [SC] ConfigSingleLO(CC%d): cmd(1), rf(%d)
Line 22366: [SC] ConfigSingleLO(CC%d): cmd(%d), slo1(%d, %d) rf(%d)
Line 22564: [SC] ConfigSingleLO(CC%d %d): overlap_space(%d), bw_rate(%d), rf_earfcn(%d), rf_bw(%d)
Line 22575: [SC] ConfigSingleLO(CC%d): cmd(%d), slo1(%d, %d), rf(%d)
Line 22654: [SC] ConfigSingleLO(CC%d): Unknown command(%d)
Line 22661: [SC] ConfigSingleLO(CC%d): cmd(%d), SingleLO not configured!!
Line 22670: [SC] ConfigSingleLO(CC%d): cmd(%d), slo0(%d, %d)
Line 22697: [SC] HALSC_CheckMaxCaNum: cc_cnt(%d)
Line 22739: [SC] HALSC_CheckMaxEndcNum : nr_cc_cnt(%d), lte_cc_cnt(%d), endc_max(%d)
Line 22781: [SC] Config4RxMode: MTM running... so skip!!!
Line 22792: [SC] Config4RxMode: CGI Congoing. So skip CC0 4RX config!!!
Line 22810: [SC] Config4RxMode(cc%d,cmd=%d) Early return (dds(%d) != current(%d))
Line 22828: [SC] Config4RxMode: main CC and div CC's earfcn mismatch, reset invalid pair cc info(mainCC(%d) earfcn(%d), 4rxCC(%d) earfcn(%d)
Line 22836: [SC] Config4RxMode(CC%d): cmd(%d)
Line 22887: [RXF] Reset index in ccinfo when 4rx release: mCC(%d)[resv(%d),type(%d),pairCd(%d),rf(%d)]/ dCC(%d)[resv(%d),type(%d),pairCd(%d),rf(%d)] --Config4RxMode(rel)
Line 22893: [Config4RxMode]SetTdpState(CC%d):state(%d->%d)
Line 22904: [Config4RxMode] skip to set 4rx mode for case detection
Line 22910: [Config4RxMode] skip to set 4rx mode for case detection gL1LC_CA_MAX_CC_CASE_DETECTION
Line 22927: [SC] Config4RxMode(CC%d): cmd(%d)
Line 22932: [SC] Config4RxMode: CC(%d) is already paired with CC(%d), type(%d)
Line 22936: [SC] Config4RxMode: main CC and div CC's earfcn mismatch, reset invalid pair cc info(mainCC(%d) earfcn(%d), 4rxCC(%d) earfcn(%d)
Line 22945: [SC] Config4RxMode: Not supported RF band (earfcn: %d) for 4Rx
Line 22952: [SC] Config4RxMode: max layer ! Not supported 4Rx !
Line 22966: [SC] Config4RxMode: Not found available CC for 4Rx, cc(%d), div_cc(%d)
Line 22978: [SC] Config4RxMode: Do not ready 4Rx for scg_cc(%d)
Line 22988: [SC] Config4RxMode: Path allocation failed for CC%d 4rx path
Line 23012: [Config4RxMode]SetTdpState(CC%d):state(%d->%d)
Line 23045: [SC] Config4RxMode: Enable 4Rx for CC(%d), RF band(earfcn: %d)
Line 23050: [SC] Config4RxMode(CC%d): Unknown command(%d)
Line 23086: [SC] Update4RxMode (cmd:%d, ca_earfcn:%d)
Line 23090: [SC] HALSC_Update4RxMode: CGI Congoing. Skip 4RX Config!!!
Line 23101: [SC] Update4RxMode: Do not ready 4Rx for scg_cc(%d)
Line 23107: [SC] Update4RxMode: Do not ready 4Rx for Semi DRDS
Line 23117: [SC] Update4RxMode: Do not ready 4Rx for eDRDS start
Line 23139: [4G_DRDS] DRDS is impossible due to MIMO!!!
Line 23163: [SC] Update4RxMode: Do not ready 4Rx for scg_cc(%d)
Line 23197: [SC] Update4RxMode: earfcn mismatch between main CC%d(%d) with div CC%d(%d)
Line 23325: [SC] HALSC_SetPathInfoForSCC(cc=%d, slo=%d, slo_cc=%d):start
Line 23341: Not configure CC(%d) due to max layer !!
Line 23355: [SC] ConfigScc: CA_ACT [OOPS] Wrong rfpath(%d)
Line 23378: [SC]cc_info[CC%d.before]rf(%d),mxr(%d),rtg(%d),demod(%d),pgc(%d),dcr(%d)
Line 23384: [SC] HALSC_SetPathInfo failure cc %d @ eDV_Active / SCG_CC 
Line 23390: [SUBCORE ON] DEMOD PATH %d selected
Line 23399: [SC] HALSC_SetPathInfo failure cc %d
Line 23406: [SC]cc_info[CC%d.after]rf(%d),mxr(%d),rtg(%d),demod(%d),pgc(%d),dcr(%d)
Line 23471: [SC] ConfigScc(cc=%d, cmd=%d):start (prev_cmd:%d)
Line 23487: [SC] Stopped the Sync timer after disabling the Scell Search
Line 23531: [SC] Stopped the Meas timer after disabling the Scell Meas
Line 23549: [SC] Invalid RTG/DEMOD path index, ConfigScc(cc= %d, cmd= %d, result= %d, rtg= %d, demod= %d
Line 23560: [SC] ConfigScc(cc=%d, cmd=%d, result= %d):end
Line 23574: [SC] ConfigScc(CC%d): cmd(%d), act_time(%d, %d), current_time(%d, %d, %d)
Line 23583: [OL-AIT][ST%d] Skip OL-AIT for cc(%d) due to ClaitEnable(%d), cmd(prev,curr) = (%d, %d)
Line 23601: [SC] ConfigScc(cc=%d, cmd=%d):end
Line 23657: [SC] ConfigScc: SCC info is NULL
Line 23717: [SC] Debug: frame_position 1 is (%d).
Line 23719: [SC] Debug: frame_position 2 is (%d).
Line 23723: [SC] Debug: frame_position 3 is (%d). g_counter=%d, rtg_counter=%d
Line 24050: [RXF] Single LO configuration fail [WARNING]: abnormal bandwidth index (%d, %d)
Line 24138: [RXF] Reset index in ccinfo when Deact: CC%d
Line 24204: [SC] ConfigScc: SCC info is NULL
Line 24291: [SC] ConfigScc: CA_MEAS [OOPS] Wrong rfpath(%d)
Line 24311: [SC] ConfigScc: SCell Fixed rx_mode(%x)
Line 24335: [SC] HALSC_SetPathInfo failure for cc %d and return with initialization
Line 24465: [SC] ConfigScc: SCell Fixed rx_mode(%x)
Line 24484: [EDRDS] cc_info[%d]->rx_mode = %d
Line 24590: [4G_DRDS] RF_Update_DR_Band_info(%d, %d, %d, %d, %d)
Line 24595: [4G_DRDS] RF_Update_DR_Band_info(%d, %d, %d, %d, %d)
Line 24867: [SC] Wait %dus for UL SLO setting
Line 24871: [SC] ConfigScc(UL CA Setting): curr_time(%x), act_time(%d), target_tti(%d), diff_time(%d)
Line 24938: [SC] ConfigScc: SCC info is NULL
Line 25044: [SC] ConfigScc: SCC info is NULL
Line 25095: [SC] ConfigScc(CC%d): SL Meas at arfcn(%d), RF_path(%d)
Line 25114: [SC] ConfigScc(CC%d) for SL MEAS: rx_mode(%d), RF_PATH_IDX(%d), MXR_SEL_IDX(%d), RTG_SEL_IDX(%d)
Line 25122: [SC] ConfigScc(CC%d) for SL MEAS: PGC_SEL_IDX(%d), TDBUF_SEL_IDX(%d), OUTPUT_SEL_IDX(%d), dl_bw(%d)
Line 25180: [SC] ConfigScc(CC%d): Invalid cmd(%d)
Line 25342: [SC] request NR to change : 4rx -> 2rx for LTE MIMO 4Rx nr band(%d)
Line 25423: [SC] HALSC_CheckSccTdpState(CC%d)
Line 25427: [SC] HALSC_CheckSccTdpState:scc is deactived
Line 25496: [SC] SetSccRfForMeas: Early return (af=%d, dl_earfcn=%x)
Line 25547: [SC] SetSccRfForMeas: Early return -CC(%d) is already in use for earfcn(%d), type(%d)
Line 25559: [SC] SetSccRfForMeas: Early return -CC(%d) as CC value exceeds MAX_CC condition
Line 25576: [SC] SetSccRfForMeas(CC%d): status(%d), flag(%d), earfcn(%d), bw(%d)
Line 25699: [SADR] Need to add for scell
Line 25705: [SADR] N2LMeasDuringDR(%d) AddedN2Lband(%d) N2LMeasCC(%d)
Line 25713: [SC] SetSccRfForIratMeas: Not Support RF for earfcn(%d)
Line 25735: [SC] SetSccRfForIratMeas: Not found available CC for earfcn(%d)
Line 25758: [SC] SetSccRfForIratMeas: Invalid path allocation for CC(%d)
Line 25782: [SADR] CC is already set (CC%d)
Line 25802: [SC] SetSccRfForIratMeas: Not found available CC for earfcn(%d)
Line 25827: [SC] SetSccRfForIratMeas(CC%d): status(%d), flag(%d), earfcn(%d), bw(%d)
Line 25954: [SC] CheckUeAntennaConfig: test_mode(%x)
Line 25959: [SC] CheckUeAntennaConfig(CC%d): disable_1rx_mode(%x)
Line 25981: [SC] CheckUeAntennaConfig(skip): cc(%d), rx_mode(%x)
Line 25988: [SC] CheckUeAntennaConfig(CC%d): rx_mode(%x) not allowed. disable_1rx_mode(%d)
Line 26001: [SC] CheckUeAntennaConfig: SetTdpState(CC%d), state(%d->%d)
Line 26005: [SC] CheckUeAntennaConfig(skip): 4Rx is not supported on CC(%d)
Line 26011: [SC] IsRxPathOff (%d)
Line 26017: [SC] CheckUeAntennaConfig(CC%d): rx_mode(%x -> %x)
Line 26023: [SC] CheckUeAntennaConfig(skip), RF unavailable(%d)
Line 26029: [SC] CheckUeAntennaConfig(skip), During DRDS, ScgStackId
Line 26036: [SC] CheckUeAntennaConfig(CC%d): rx_mode(%x) backuped
Line 26072: [SC] SaveDcValue(CC%d)(rx0): UDPATE DC(%d,%d)
Line 26080: [SC] SaveDcValue(CC%d)(rx1): UDPATE DC(%d,%d)
Line 26493: [SC] ChangeUeAntennaConfig: changed cc_info->rx_mode(%x -> %x)
Line 26500: [SC] ChangeUeAntennaConfig: changed cc_info->rx_mode(%x -> %x)
Line 26533: [SC] ChangeUeAntennaConfig: SkipInit4Rx(%d) prev_ant(0x%x) cur_ant(0x%x)
Line 26539: [SC] ChangeUeAntennaConfig (test mode): prev_ant_bitmap(%d), ant_bitmap(%d) Changed 
Line 26605: [SC] ChangeUeAntennaConfig(CC%d): rx_mode(%x -> %x) after idle DRX wakeup
Line 26638: [SC] ChangeUeAntNum(skip): num_ant(%d), rx_mode(%x)
Line 26658: [SC] ChangeUeAntNum: Not supported UE antenna number(%d)
Line 26702: [SC] ChangeSCellTiming: Not found activated CC for earfcn(%d)
Line 26709: [SC] ChangeSCellTiming: Wrong cell_id(%d, %d)
Line 26732: [SC] ChangeSCellTiming: Time diff is too big!!! time_offset(%d, %d)
Line 26755: [SC] ChangeSCellTiming: dl_earfcn(%d), cell_id(%d), cp_type(%d), time_offset(%d, %d), gen_cntr(%d)
Line 26783: [SC] GetSCellTiming: cc(%d), frame_pos(%d), rtg_timing(%d)
Line 26917: [RSSISCAN][MAIN] dl_earfcn: %d, agc_db_power: %d, agc_gain: %d, cal_rsrp_offset: %d, rsrp_temp_offset: %d
Line 26933: [RSSISCAN][SUB] dl_earfcn: %d, agc_db_power: %d, agc_gain: %d, cal_rsrp_offset: %d, rsrp_temp_offset: %d
Line 26983: [SC] SetDmixerFreqOffset(%d) for SCG_CC(%d) during DRDS
Line 26991: [SC] SetDmixerFreqOffset(%d)
Line 27012: [SC] SetDmixerFreqOffset: cc(%d), temp_dmxr_freq_offset(%d)
Line 27058: [SC] EnableSlTimeTracking: Sync mode(%d) is not NONE!!!
Line 27164: [GNSS] 10ms sync[before]: sfn(%d) utc_H(%u) utc_L(%u) uptime_H(%u) uptime_L(%u)
Line 27185: [GNSS] 10ms sync[after]: curr_sfn(%d) curtime_H(%u) curtime_L(%u) timeDiff_H(%u) timeDiff_L(%u)
Line 27190: [GNSS] 10ms sync update skipped. time inversion case due to pre-update of @SIB8/16
Line 27207: [GNSS] 10ms sync[final]: sfn(%d:%d) utc_H(%u) utc_L(%u) utc_offset(%d) SFNsync(%d)
Line 27292: [GNSS] HALSC_ResetGnssTime
Line 27419: [GNSS] TimeAidingReq reset Info
Line 27481: [GNSS] TimeAidingReq: [before] SFN(%d) SibType(%d) UTC_H(%u) UTC_L(%u) Option(%d)
Line 27490: [GNSS] TimeAidingReq: curtime_H(%u) curtime_L(%u) timeDiff_H(%u) timeDiff_L(%u)
Line 27495: [GNSS] TimeAidingReq rejected. time inversion case due to pre-update of @SIB8/16
Line 27514: [GNSS] TimeAidingReq[&update]: current SFN(%d) TTI(%d) UTC_H(%u) UTC_L(%u) offset(%d)
Line 27536: [GNSS] TimeAidingReq rejected! SIBpreferred(%d) valid(%d) sync(%d)
Line 27555: [GNSS] TimeAidingResp: Tsync SFN(%d) UTC_H(%u) UTC_L(%u) WEEK(%u) TOW(%u) SFNsync(%d)
Line 27588: [GNSS] HALSC_GnssBandMonitor requestType(%d) requestId(%d) subBand(%d) pwrThreshold(%d)
Line 27615: [GNSS] Invalid requestId: %d
Line 27623: [GNSS] Invalid requestType: %d
Line 27681: [GNSS] UpdateGnssTime: SibType(%d) utc_sfn(%d) utc_tti(%d) UTC_H(%u) UTC_L(%u)
Line 27683: [GNSS] UpdateGnssTime: NowSFN(%d) NowTTI(%d) option(%d) WEEK(%u) TOW(%u)
Line 27735: [GNSS] SIB Time update: TTIdiff(%d) sib_rx_time_H(%u) sib_rx_time_L(%u)
Line 27737: [GNSS] SIB Time update: SFNdelay_flag=%d utc_start_time_H(%u) utc_start_time_L(%u)
Line 27748: [GNSS][debug] UpdateGnssTime: skip updating SIB16. endwindowSfn(%d) UTCdiff form SIB8(%d)
Line 27759: [GNSS] UpdateGnssTime: [wrong options] SibType(%d) option(%d)
Line 27807: [XCP_GPIO] GNSS_SYNC_IN not supported
Line 27811: [XCP_GPIO] GNSS_SYNC_IN MUX_FUNC_MODE enabled
Line 27831: [XCP_GPIO] GNSS_SYNC_IN not supported
Line 27836: [XCP_GPIO] GNSS_SYNC_IN MUX_GPIO_MODE enabled
Line 27890: [GNSS] TA = %d
Line 28003: [GNSS] Set TsyncPulse Start: SFN %d, tti %d, rtg %d
Line 28006: [GNSS] Set TsyncPulse End: SFN %d, tti %d, rtg %d
Line 28024: [GNSS-PULSE] TsyncPulse: rtgDiff_frompreviousPulse(%d)u32 rtgDiff_frompreviousPulse(0x%08X,%08X)u64 rtgDiff_frompreviousPulseinModulo(%d)u32 rtgDiff_frompreviousPulseinModulo(0x%08X,%08X)u64
Line 28030: [GNSS-PULSE] TsyncPulse: rtgDiff(%d)u32 rtgDiff(0x%08X,%08X)u64 usecDiff(%u)
Line 28034: [GNSS-PULSE] TsyncPulse: TimeofLastPulseOnCell(%u)
Line 28044: [GNSS-PULSE] TsyncPulse: TimeinFunc(%u)
Line 28081: [GNSS] TsyncPulse Cleared
Line 28103: [GNSS] HALSC_GnssPulseResetTimingAiding reset Info from %s
Line 28126: clearing pulse from %s
Line 28147: [GNSS-PULSE] HALSC_GnssPulseTimeAidingStartTimer from %s CheckGnssPulseTimeAiding(%d)
Line 28166: [GNSS-PULSE] PulseSfn(%d) currentsfn(%d) Pulsetti(%d) currenttti(%d) Pulseoffset(%u) currentoffset(%u)
Line 28167: [GNSS-PULSE] gaptoTimer(%d)u32 gaptoTimer(0x%08X,%08X)u64 gaptoTimerInusec(%d)
Line 28216: Do not set MinLockFreq due to ltePdcchOnlyState(%d)
Line 28222: [SC] Default Case: Owner(%d), scenario(%d), CPU(%d) MIF(%d)
Line 28227: [SC] HALSC_SetMifCpuClk: Owner(%d), Scenario(%d)
Line 28279: [SC] Default Case: Owner(%d) CPU(%d) MIF(%d)
Line 28284: [SC] HALSC_RemoveMifCpuClk: Owner(%d)
Line 28481: [SC] RestoreOnGapSrchDone: SyncMode(%d) MeasMode(%d) IdleGapOnGoing(%d) GapStartFlag(%d)
Line 28540: [SC] HALSC_SetNrBandList: CC%d is intra band with NR(LTE: %d, NR: %d)
Line 28977: [SC] Measure(CC%d): rx_mode/bw(%x), agc_gain(%d, %d, %d, %d), meas_asfn(%d)
Line 28981: [SC] [%4d] (%3d) M0 %6d %6d %6d %6d %6d %6d %6d
Line 28982: [SC] [%4d] (%3d) M1 %6d %6d %6d %6d %6d %6d %6d
Line 28983: [SC] [%4d] (%3d) M2 %6d %6d %6d %6d %6d %6d %6d
Line 28984: [SC] [%4d] (%3d) M3 %6d %6d %6d %6d %6d %6d %6d
Line 29035: [SC] HAL_GetIqcCoefValue(%d): TAP(0), I(%x), Q(%x)
Line 29036: [SC] HAL_GetIqcCoefValue(%d): TAP(1), I(%x), Q(%x)
Line 29037: [SC] HAL_GetIqcCoefValue(%d): TAP(2), I(%x), Q(%x)
Line 29183: [SC] HALSC_pendingMeasDoneInd(%d): HALSC_GapStartFlag(%d), HALSC_pendingMeasDoneInd(%d), dmtc_config(%d),Gap_Flag:%d,gap_state:%d
Line 29558: [SC] Reset Search Param
Line 29768: GetAfcPdmBySrchFO:%d
Line 29787: MeasPend Status:%d -> %d
Line 29814: [SC] EnableMeas: Measurement not scheduled
Line 29828: [SC] EnableMeas: Disable scell sync and meas in case of LAA
Line 29841: Trigger Meas expiry after gapb
Line 29975: [SC] cc_idx(%d) status(%d)
Line 30036: [SC] Normal.RfPgcPath cc(%d)(type%d, rf%d, pgc%d, mxr%d, rxmode%d, bw%d)
Line 30057: [SC] slo.RfPgcPath cc(%d)(type%d, rf%d, pgc%d, mxr%d, rxmode%d, bw%d)
Line 30125: [SC] SetQsBitmap : qs_debug_mode(%d), qs_debug_mode_rfd(%d), qs_debug_mode_cc(%d), ca_qs_debug_mode(%d), ca_qs_disable_bitmap(0x%X), disable_cc(%d), scell_bitmap(0x%X)
Line 30152: [SC] GnssMtplStatusInfo :%d -> %d
Line 13210: [SC] InitialSyncDone
Line 13729: [SC] ProcSync10msIntr: Skip Activating pal_Sync10msHCB HISR(gDrxShortModeFlag == TRUE)
Line 13736: [SC] ProcSync10msIntr: Skip Activating pal_Sync10msHCB HISR(gHALSC_IdleGapOnGoing == TRUE)
Line 13743: [SC] ProcSync10msIntr: Skip Activating pal_Sync10msHCB HISR(IsBeforeResync == TRUE)
Line 13828: [SC] ProcConnScheduleIntr: Invalid state(%d, %d)
Line 13856: [SC] Ignore ProcConnScheduleIntr: meas_mode(HALSC_MEAS_CONFIG_CONN_DRX) GapStartFlag(%d)
Line 13880: [SC] ProcConnScheduleIntr: effective_ready_sfn(%d), current_time.sfn(%d)tti(%d)
Line 13893: [SC] ProcConnScheduleIntr: New GapStartSfn(%d), effective_ready_sfn(%d)
Line 13897: [SC] ProcConnScheduleIntr: effective_ready_sfn(%d), current_time.sfn(%d)tti(%d)
Line 13923: [SC] ProcConnScheduleIntr(DMTC): effective_ready_sfn(%d), current_time.sfn(%d)tti(%d)
Line 13936: [SC] ProcConnScheduleIntr: New DmtcStartSfn(%d), effective_ready_sfn(%d)
Line 13946: [SC] ProcConnScheduleIntr: Updated GAP_SFN(%d), DMTC_SFN(%d)
Line 13953: [SC] (Scheduling request, DMTC configured: %d) sfn = %d, subframe num = %d, offset = %d
Line 13966: [SC] (Scheduling request, GAP configured: %d) sfn = %d, subframe num = %d, offset = %d
Line 13981: [SC] (RSTD Preponed Meas Schedule request, GAP configured: %d) sfn = %d, subframe num = %d, offset = %d
Line 13992: [SC] (Scheduling request) sfn = %d, subframe num = %d, offset = %d
Line 14108: [SC] ProcSGapBIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 14151: [SC] ProcSGapCIntr(start): gHALSC_NrProcessing, so don't start Gap
Line 14169: [SC] ProcSGapCIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d) gHALSC_HgapCHisrEnabled(%d)
Line 14213: [SC] ProcHGapAIntr(start): gHALSC_NrProcessing, so don't start Gap
Line 14233: [SC] ProcHGapAIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 14289: [SC] ProcHGapBIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 14339: [SC] ProcHGapCIntr(start): gHALSC_NrProcessing, so don't start Gap
Line 14349: [SC] ProcHGapCIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 14390: [SC] ProcSysTimeCommonIntr: status(0x%x)
Line 15090: HALSC_ConversionFrom2GCalValue(cal_voltage:%d afcPdmValue:%d Cal_slope:%d Cal_offset:%d range_idx:%d)
Line 15091: HALSC_ConversionFrom2GCalValue(recal_AFC_DAC:%d cal_voltage:%d DAC_slope:%d DAC_offset:%d range2_idx:%d)
Line 15096: HALSC_ConversionFrom2GCalValue(Use 2G cal recal_AFC_DAC:%d)
Line 16060: [SC] AFC: PDM(%4d), ANGLE(CC0:%d)
Line 16074: [SC] AFC: ANGLE(CC%d:%d)
Line 16553: [SC] NgapDurationStart(%d): AGC serving(%d, %d) -> target(%d, %d)
Line 17042: [SC] NgapDurationEnd(%d): AGC target(%d, %d) -> serving(%d, %d)
Line 17437: [SC] --- IRAT(LTE Sync) Start Interrupt
Line 17447: [SC] --- IRAT(LTE Meas) Start Interrupt
Line 17456: [SC] --- IRAT(LTE Sync GAP) Start Interrupt
Line 17498: [SC] --- IRAT(LTE Meas GAP) Start Interrupt
Line 17542: [SC] --- UMTS Sync/Meas Start Interrupt
Line 17553: [SC] --- TDSCDMA Sync/Meas Start Interrupt
Line 17563: [SC] --- GSM Sync/Meas Start Interrupt
Line 17573: [SC] --- UMTS SI ACQUISITION Start Interrupt
Line 17583: [SC] --- CDMA Meas Start Interrupt
Line 17594: [SC] --- NR Sync/Meas Start Interrupt
Line 17607: rf_path is wrong(%d)
Line 17617: [SC] --- Invalid GAP Start Interrupt
Line 4618: [SC] ActiveRat = (%d)
Line 4664: [SC] IratFreqChangeInGap: Earfcn(%d), AGC(%d, %d), BW(%d)
Line 17656: [SC] --- IRAT(LTE Sync) End Interrupt
Line 17666: [SC] --- IRAT(LTE Meas) End Interrupt
Line 17676: [SC] --- IRAT(LTE Sync GAP) End Interrupt
Line 17687: [SC] --- IRAT(LTE Meas GAP) End Interrupt
Line 17697: [SC] --- UMTS Sync/Meas End Interrupt
Line 17712: [SC] --- TDSCDMA Sync/Meas End Interrupt
Line 17727: [SC] --- GSM Sync/Meas End Interrupt
Line 17741: [SC] --- UMTS SI ACQUISITION End Interrupt
Line 17758: [SC] --- CDMA Meas End Interrupt
Line 17773: [SC] --- NR Sync/Meas End Interrupt
Line 17807: [SC] --- Invalid GAP End Interrupt
Line 17910: [SC] not update the agc because next measure elem are exist(%d , %d)
Line 17927: [SC] MEAS AGC: GAIN(%d, %d) -> (%d, %d), dBPow(%d, %d)
Line 18009: [DEBUG] max_pos_tti is lower then min_tti. min_tti(%d), max_pos(%d)
Line 18015: [DEBUG]  max_pos_tti is bigger then buf_length: buf_length(%d), max_pos(%d)
Line 18024: [DEBUG] Before update SRCH AGC: GAIN(%d, %d), max_pos(%d)
Line 18063: [SC] SRCH AGC ppos(%d), Srch start pos(%d), max_pos_tti(%d)
Line 18095: [SC] SRCH AGC: GAIN(%d, %d) -> (%d, %d), pos(%d, %d, %d)
Line 18110: [DEBUG] HALSC_GetAgcGainIdxForMeas: Mxr path(%d), Demod Path(%d)
Line 18118: [SC] DMTC AGC0[0-5]: %02x %02x %02x %02x %02x %02x
Line 18119: [SC] DMTC AGC1[0-5]: %02x %02x %02x %02x %02x %02x
Line 18142: [SC] SRCH AGC0[0-5]: %08x %08x %08x %08x %08x %08x
Line 18143: [SC] SRCH AGC1[0-5]: %08x %08x %08x %08x %08x %08x
Line 18147: [SC] SRCH AGC0[0-4]: %08x %08x %08x %08x %08x
Line 18148: [SC] SRCH AGC1[0-4]: %08x %08x %08x %08x %08x
Line 18149: [SC] SRCH AGC0[5-9]: %08x %08x %08x %08x %08x
Line 18150: [SC] SRCH AGC1[5-9]: %08x %08x %08x %08x %08x
Line 18354: [SC] ProcPbchDecIntr: Unknown interrupt!!!
Line 27333: [GNSS] Skip MIB rebase! new_sfn(%d) new_UTC(+%u=%u) curtime_H(%u) curtime_L(%u) timeDiff_L(%u)
Line 27343: [GNSS] HALSC_Gnss_SfnRebase: new_sfn(%d) new_UTC(+%u=%u) curtime_H(%u) curtime_L(%u) timeDiff_L(%u)
Line 19372: [SC] IRAT Timing Change: Count(%d), deltaRtg(%d)
Line 19373: [SC] IRAT Timing(LTE): SFN(%d), TTI(%d), OFFSET(%d)
Line 19374: [SC] IRAT Timing(UMTS): SFN(%d), SLOT(%d), CHIP(%d)
Line 19375: [SC] IRAT Timing(GSM): frameNumber(%d), Qb(%d)
Line 19376: [SC] IRAT Timing(CDMA): CDMASystemTime(High: 0x%x  Low: 0x%x)
Line 19405: [SC] Error sfn_gap(%d) tti_gap(%d), 
Line 19430: HALSC_CalDiffFL1RcvAndCdmaEndWindow : sfn_gap(%d), tti_gap(%d), bRefer_Next_Sfn(%d)
Line 15937: [SC] STR: %4d %6d (InSyncRate:%3d, OutSyncRate:%3d)
Line 15946: [SC] [%d]STR: %4d %6d
Line 15985: [SC] STR(offset): CC0(%d, %d), RND(%03x)
Line 15987: [SC] STR(power): CC0(%d, %d), RMS(%06x)
Line 16008: [SC] STR(offset): CC%d(%d, %d), RND(%03x)
Line 16009: [SC] STR(power): CC%d(%d, %d), RMS(%06x)
Line 18204: [SC] SetAgcGainUpdateForMeas: pos_diff(%d), start_time(%d, %d), margin(%d), intr(%d, %d, %d)
Line 21839: [SC] HALSC_AgapDurationStart: Enable HeNB MIB Decoding
Line 21848: [SC] HALSC_AgapDurationStart: Enable HeNB SIB1 Decoding
Line 21990: [SC] HENB SIB-1 Enabled
Line 21932: [SC] HALSC_AgapDurationEnd
Line 22007: [SC] HENB SIB-1 Disabled
Line 26340: [SC] ChangeUeAntennaConfig: rx_mode(0x%x -> 0x%x) 4RxD Status(0x%x) Changed 
Line 26347: [SC] ChangeUeAntennaConfig: rx_mode(0x%x -> 0x%x) 4RxD Status(0x%x) Changed 
Line 26353: [SC] ChangeUeAntennaConfig: rx_mode(0x%x -> 0x%x) 4RxD Status(0x%x) NOT Changed 
Line 26426: ChangeUeAntennaConfig(CC%d): rx_mode(%x -> %x)
Line 26428: [SC] ChangeUeAntennaConfig(CC%d): rx_mode(%x -> %x)
Line 26437: [ChangeUeAntennaConfig]SetTdpState(CC%d):state(%d->%d)
Line 27260: [GNSS] Saved SFN-UTC gap(%d)
Line 27268: [GNSS] Abnormal SIBtype(%d)
Line 27382: [GNSS] HALSC_compensate_uptime_per_sfn: prev %d, curr %d, new %d, tr_diff %d
Line 27388: [GNSS] HALSC_compensate_uptime_per_sfn: SFN mismatch!! %u(UTC_diff)+%d(cur_sfn(%d)-new_sfn(%d)), diff=%u.%u
Line 28698: [SC] [%4d] (%3d) MEASURE RESULT VALID (%d) - Found in search
Line 28703: [SC] MEASURE RESULT VALID CNT (%d -> %d)
Line 28714: PDM value periodic update(CONN)
Line 29342: [SC] DR SINR(%d): MCG(%3d, %3d), SCG(%3d, %3d)
Line 29313: [SC] DR BAND(count %d): %5d, %5d, %5d, %5d, %5d, %5d, %5d, %5d, %5d
Line 29405: [SC] SetSccRfForMeas: skip the srch/meas during deactivation cc(%d) earfcn(%d)
Line 29621: [SC] SetSccRfForMeas: Invalid path allocation for CC(%d)
Line 29660: [SC] SetSccRfForMeas: Single LO slave CC(%d) is already in use
Line 29671: [SC] SetSccRfForMeas: Invalid path allocation for CC(%d)
Line 29693: [DRX] SetSccRfForMeas: SccConfig Time(%d)
Line 29698: [DEBUG] SetSccRfForMeas: Mxr path(%d), Demod Path(%d)
Line 29748: [SC] SetSccRfForMeas(CC%d): Not supported HW state(%d)
Line 29863: [SC] HALSC_ProcDmForceRequestHisr
Line 29879: [SC] HALSC_ProcDsDmForceRequestHisr
Line 30133: [SC] SetNrProcessing(%d -> %d)
