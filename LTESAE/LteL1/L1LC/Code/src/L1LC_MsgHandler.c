Line 458: ST%d DS BPLMN L1LC Evt(%d)
Line 548: L1LC_CheckMeasMode: mode(%d),curMode (%d)
Line 683: HandoverStartSig Set: %d => %d
Line 701: HandoverStartSig Get: %d
Line 766: Stop Conn Conn RF timer for current stack
Line 773: Stop Conn Conn RF timer for other stack
Line 807: Remove Scell(Inter-freq): dl_earfcn(%d), band(%d), rf_path(%d), cell_id(%d), activated(%d)
Line 838: [Bandlist] RF_Set_CA_Release : release_rf_path(%d, %d, %d, %d, %d, %d) release_rf_num(%d)
Line 842: scell_config_info.Num of Scell = [%d]
Line 860: [%d]Updated BandList (%d)
Line 865: [%d]Updated SCG BandList (%d)
Line 902: Cell List(sorted): idx(%d), freq(%d), band(%d), bw(%d), num_cell(%d)
Line 944: (%d)th Scell: This RF band(%d) is for DRDS.
Line 1004: [Bandlist] UpdateRfBandList: scg_band_list(%d) scg_num_band(%d)
Line 1009: [Bandlist] UpdateRfBandList: scg band not found on tail !!!!!!!
Line 1016: [Bandlist] UpdateRfBandList: scg_band_list(%d) scg_num_band(%d)
Line 1133: SADR Measure is ongoing using scell. So, UpdateRfBandList is pending
Line 1138: [Bandlist] L1LC_UpdateRfBandList:start::4ca
Line 1178: [Bandlist] UpdateRfBandList: band_list(%d) num_band(%d)
Line 1192: [Bandlist] UpdateRfBandList: Semi DRDS
Line 1236: [Bandlist] L1LC_UpdateRfBandList:start
Line 1302: UpdateRfBandList: SingleLO pair: Scell[%d]: earfcn(%d), Scell[%d]: earfcn(%d)
Line 1321: [4G_DRDS] UpdateRfBandList: Semi DRDS
Line 1372: [Bandlist] L1LC_UpdateRfBandList:finish
Line 1403: Updated LteBandListForNr : band_num(%d), band_list(%d)
Line 1442: Do not start SetDlFreqReq (mode: %d) due to nearby e.p.t
Line 1456: Do not start SetDlFreqReq (mode: %d) due to nearby e.p.t
Line 1504: [FEDV] Set IsSetSibUnknownOn as FALSE
Line 1537: [LTE_L1LC] RFBand of SCG STACK should be removed
Line 1550: L1LC_DecodeRrmSetDlFreqReq(RRM_L1LC_DL_TUNE_BPLMN_INIT)(Save HALSC_SavedAfcValueBplmn(%d))
Line 1553: L1LC_DecodeRrmSetDlFreqReq(pMsg->SearchRepeatMode:%d, pMsg->dl_mode:%d)
Line 1569: L1LC_DecodeRrmSetDlFreqReq(FH Test)(pMsg->SearchRepeatMode:%d FHCnt:%d pMsg->dl_mode:%d)
Line 1592: RF_Set_Module_Fix_init (rf_band:%d, SatModeEnable:%d)
Line 1699: L1LC_DecodeRrmSetUlFreqReq (mode:%d, cp type:%d, ul earfcn:%d, ul bw:%d)
Line 1760: UL CP type = %d
Line 1814: [DS_OPT] NR search is ongoing. Wait response
Line 1841: Do not start SearchReq (mode: %d) due to nearby e.p.t
Line 1863: [RRM => L1LC] Decode RRM_L1LC_SEARCH_REQ (earfcn: %d, srchMode:%d)
Line 1909: [NonSig][RRM => L1LC] Decode RRM_L1LC_MEASURE_REQ (mode:%d, earfcn: %d)
Line 1914: [NonSig: index %d] measReq = (void *)pMsg
Line 1918: [NonSig: cellidx %d] framePos %d, rtg0 %d, diff %d
Line 1927: [RRM => L1LC] Decode RRM_L1LC_MEASURE_REQ (mode:%d, earfcn: %d)
Line 1953: [NonSig: No earfcn!!!]
Line 1958: [RRM => L1LC] Decode RRM_L1LC_MEASURE_REQ (mode:%d, IsBeforeResync: %d)
Line 1969: [NRDS] Reset IsLteConnSleepPended - NrdsSleepState(%d)
Line 1983: [DRX] Meas_Done state receive Meas_req again)
Line 1990: [cDRX pre-Meas] isFullStationary %d
Line 1999: [cDRX pre-Meas] Save intra-freq measure info
Line 2000: [cDRX pre-Meas] isPreIntraMeasReq 0 isPreIntraMeasDone 0 WaitPreIntraMeasDone 0
Line 2005: [cDRX pre-Meas] isIntraMeasReqRcvedBeforeResync 1 isNonIntraMeasReqBeforeResync 0
Line 2010: [cDRX pre-Meas] isIntraMeasReqRcvedBeforeResync 0
Line 2022: [cDRX pre-Meas] numOfCell %d %d
Line 2026: [cDRX pre-Meas] Send pre-intraFreq measurement result to RRM
Line 2037: [cDRX pre-Meas] Wait for pre-intra-freq measurement
Line 2038: [cDRX pre-Meas] isPreIntraMeasReq 1 isPreIntraMeasDone 0 WaitPreIntraMeasDone 1
Line 2045: [cDRX pre-Meas] Stop Pre-Intra measurement (different numOfCell: %d)
Line 2062: [cDRX pre-Meas] NonintraFreq measurement received: measMode:%d IsBeforeResync:%d isNonIntraMeasReqBeforeResync:%d 
Line 2071: [cDRX pre-Meas] Ignore Pre-Intra measurement
Line 2077: [cDRX pre-Meas] Stop Pre-Intra measurement
Line 2107: [RRM => L1LC] Decode RRM_L1LC_PBCH_DECODE_REQ
Line 2145: [RRM => L1LC] Decode RRM_L1LC_PBCH_DECODE_STOP_NTF
Line 2183: [RRM => L1LC] Decode RRM_L1LC_SIB_CONTROL_NTF
Line 2210: Set IsSetSibUnknownOn as FALSE
Line 2242: Restore DRX Config
Line 2277: Block SIB RNTI (%d)
Line 2286: [LTE L1LC DSL1RC] SI Decoding completed!!!
Line 2299: UE is in sleep (%d) or Measurement (%d) or cell reselection (%d) or RACH (%d, %d) is on going, RETURN!!!
Line 2354: Do not consider Update Rf cause in SibCtrlNtf(Stop) as Pause Flag is set,PauseFlag(%d)
Line 2436: [RRM => L1LC] Decode RRM_L1LC_MEAS_CONFIG_NTF (meas_enable:%d)
Line 2581: Not found available CC for earfcn(%d)
Line 2630: [RRM => L1LC] Decode RRM_L1LC_MEAS_RESULT_NTF
Line 2640: [4G_DRDS] Serving cell is in weak signal area
Line 2651: [PathLoss] BothTRxAntSwitch(%d) ucCcIndex(%d) gHal_AsStatus(%d) - RSRP(S:%d/N:%d)
Line 2658: Not found SCell index for earfcn(%d)
Line 2664: updateDsp(SCell rsrp(%d), NCell rsrp(%d)
Line 2692: Max cc num is %d (CC = %d)
Line 2694: SCell(%d): RSRP(PC) = %d, PathLoss = %d
Line 2728: updateDsp(PCell rsrp(%d), NCell rsrp(%d)
Line 2741: PCell: RSRP(PC) = %d, PathLoss = %d
Line 2818: [RRM => L1LC] Decode RRM_L1LC_MEASURE_STOP_REQ
Line 2829: [DRX, 4GDS] MeasStop case (reset IsDuringGsmMeas:%d)
Line 2853: [L1LC] L1LC_IratProcLteMeasStopReq : IratNrMeasState(%d)
Line 2885: DsdsDB.IsWaitResponse (%d)
Line 2892: [L1LC] Waiting for L2N suspend cnf from other stack.
Line 2898: [L1LC] Waiting for L2N suspend cnf. MeasureStopCnf will be sent when L2N suspend cnf was received. Current NR state(%d), MeasStopCnfPending(%d)
Line 2925: [RRM => L1LC] Decode RRM_L1LC_ALL_STOP_REQ (bExpiry= %d)
Line 2937: [LTE_L1LC] gL1LC_AllstopMsgProcByRrmEvent = [%d] 
Line 2950: [LTE_DSDS] DRX spare timer expiry case. RRM saved message [%d] is freed!!(RF available[%d])
Line 2960: Ignore All stop if IRAT procedure is ongoing
Line 2982: [L1LC] L1LC_IratProcLteMeasStopReq : IratNrMeasState(%d)
Line 3034: signal mask is set, do not stop gL1LC_DsdsRetryTmr
Line 3039: All Stop case. RF response pending.Retry Timer stopped
Line 3048: No resource release during signaling (DsdsMask: 0x%x)
Line 3054: wakeup ongoing, not pause
Line 3093: All Stop case. RF response pending. Release RF to allow further RF request (Is_ResumeReq:%d)
Line 3101: Clear isNextPagingConflict
Line 3215: [RRM => L1LC] Decode RRM_L1LC_SET_TDP_STATE_NTF (mode:%d)
Line 3252: abnormal TDP state ntf mode
Line 3347: ST%d [RRM => L1LC] Decode RRM_L1LC_UE_STATE_NTF (%d -> %d)
Line 3391: Set IsSetSibUnknownOn as FALSE
Line 3445: Set pHalDsp_data->cur_pathloss = %d
Line 3479: L1LC_DecodeRrmUeStateNtf: (next state : CONN) -> Restart Thermal Restriction
Line 3502: Unknown NextUeState(%d)
Line 3576: [4GDS] Conn - Conn state is started!!
Line 3585: [LTE L1LC DSL1RC] Release RF by ST[%d] in case it has done pause done with release[NO] and both stack is in Conn-Conn state
Line 3631: [4GDS] Conn - Conn state is ended!!
Line 3637: Stop Conn Conn RF timer for other stack
Line 3643: Stop Conn Conn RF timer for current stack
Line 3686: RE-Invoke L1LC_ProcL1txTxReq For RAND_ACC and RESET gRand_Acc_Tx_Cnf_Nop to FALSE
Line 3747: [RRM => L1LC] Decode RRM_L1LC_RLM_INIT_NTF
Line 4073: [RRM => L1LC] Decode RRM_L1LC_CGI_START_NTF
Line 4112: [RRM => L1LC] Decode RRM_L1LC_AGAP_STOP_REQ
Line 4132: [RRM => L1LC] Decode RRM_L1LC_OTDOA_MEAS_REQ
Line 4150: [RRM => L1LC] Decode RRM_L1LC_OTDOA_ABORT
Line 4167: [RRM => L1LC] Decode RRM_L1LC_OTDOA_RESULT_REQ
Line 4189: [RRM => L1LC] Decode RRM_L1LC_INTER_FREQ_LIST : NumInterFreq[%d]
Line 4195: InterFreqList[%d] earfcn[%d] bw[%d]
Line 4239: [RRM => L1LC] Decode RRM_L1LC_PCH_INFO_NTF
Line 4285: [RRM => L1LC] Received RRM_L1LC_SCELL_PCH_INFO_NTF earfcn[%d] 
Line 4291: [HAL-MBSFN] Invalid CC
Line 4296: [MBSFN] PCH status on CC[%d] command[%d] drx_T[%d] PF[%d] PO[%d]
Line 4355: [RRM => L1LC] Decode RRM_L1LC_NCELL_TIMING_INFO_REQ : ratType[%d]
Line 4360: Cannot Allocate Message buffer
Line 4375: Waiting LATCH_CNF and send Latch request for HO after Latch Cnf
Line 4383: LATCH for L2U handover shall be pended(gL1LC_IratGsmMeasState:%d, gL1LC_IratGsmVerifyState:%d).
Line 4400: Do not stop IRAT Meas, gL1LC_IratUmtsMeasState(%d) 
Line 4419: Waiting LATCH_CNF
Line 4433: LATCH for L2G handover shall be pended(gL1LC_IratUmtsMeasState:%d).
Line 4458: [L2N] Current gL1LC_IratNrMeasState(%d), isENDC(%d) 
Line 4517: Not handled case for L2N ncell timing update, gL1LC_IratNrMeasState(%d)
Line 4526: NOT support RRM_L1LC_NCELL_TIMING_INFO_REQ(rat_type:%d)
Line 4547: [RRM => L1LC] Decode RRM_L1LC_STATIONARY_NTF
Line 4550: [cDRX pre-Meas] gDrx_isFullStationary(%d)
Line 4639: [RRM => L1LC] Decode RRM_L1LC_SUSPEND_REQ
Line 4648: [GNSS-PULSE] L1LC_DecodeRrmSuspendReq: TimeShiftEventNum(%u)
Line 4728: [4G_DRDS] %s
Line 4732: SET gL1lc DsdsDB_[%d].IsSuspend
Line 4748: [LTE_L1LC] gL1LC_SuspendMsgProcByRrmEvent = [%d], SearchConfiguredflag(0x%x), MeasureConfiguredflag(0x%x)
Line 4838: [LTE_L1LC] RFBand of SCG STACK should be removed
Line 4862: [4G_DRDS] restore Dynamic QS (4G_DRDS deact)
Line 4863: [4G_DRDS] DEACTIVATED From DR_State(%d) / Suspend SCG ===
Line 4872: [4G_DRDS] RF_Update_DR_Band_info(clear)
Line 4960: [4G_DRDS] Set gEarlyPauseFlag as FALSE
Line 4984: [LTE_L1LC] SUSPEND message saved in Other stack
Line 5074: LATCH is ongoing, RrmSuspendCnf message is pended.
Line 5087: [LTE_L1LC] Clear L2N timing latch for Handover flag since LTE received resume. gL1LC_NrTimingLatchForHO(%d)
Line 5174: [RRM => L1LC] Decode RRM_L1LC_RESUME_REQ(TimingLatch(%d, %d))
Line 5202: [DRX] Stop gL1LC_CheckWakeupAvailableTmr for ST: %d
Line 5212: [DRX] current_sleep_cnt(%d) , gsleepTime_inSlowClk_[OtherStackID] (%d)
Line 5223: [DRX] Lwakeup_Status(%d) Start Default Wakeup Timer for ST%d DsdsWakeupIntrTmr : [500us]
Line 5229: [Resume]Start wakeup procedure for the current stack immediately
Line 5236: [DRX] SleepAbort is Failed (Minimun Sleep Abort Allowable Time[ST:%d, %d, %d])
Line 5239: [DRX] Start Default Wakeup Timer for ST%d DsdsWakeupIntrTmr : [500us]
Line 5251: [DRX] Sleep Start Time : (Previous ST%d %dus) vs (Current ST%d %dus)
Line 5266: [DRX] Negative Time, Set Wakeup Timer for ST%d DsdsWakeupIntrTmr : [500us]
Line 5270: [DRX] (100us)hal_sleepTime(%d)
Line 5287: [DRX] Stop Soc Warmup timer of other stack(%d)
Line 5290: [DRX] Soc Warmup timer is started(%d ms) for resume_req
Line 5295: [DRX] Set DsdsWakeupIntr timer for other STACK (%d ms)
Line 5300: [DRX] Start Wakeup Timer for ST%d DsdsWakeupIntrTmr : [500us]
Line 5386: [DRX] Wait for WakeupIntr!(TimingLatch(%d, %d))
Line 5433: [RRM => L1LC] Decode RRM_L1LC_IDLE_SLEEP_REQ
Line 5446: Ignore IDLE_SLEEP_REQ during  BPLMN ongoing (Bplmn Enable is TRUE) 
Line 5452: [DRX] Don't Sleep due to force wakeup case
Line 5458: [DRX] Don't Sleep due to measure ongoing
Line 5474: [DRX] L1 can sleep because received sleep_req msg when Wakeup procedure is ongoing.
Line 5481: [4GDRDS] Ignore IDLE_SLEEP_REQ until PagingRcvIntrTmr expired or paging_done indication.
Line 5525: [DRX] Do not process IdleSleepReq as Slow Clock Estimation is running!
Line 5563: [RRM => L1LC] Decode RRM_L1LC_CONN_SLEEP_REQ
Line 5568: [DRX] Don't Sleep due to force wakeup case
Line 5574: [DRX] Don't Sleep due to measure ongoing
Line 5580: [DRX] Skip Sleep because Meas_Config_Ntf is not received
Line 5587: [DRX] L1 can sleep because received sleep_req msg when Wakeup procedure is ongoing.
Line 5635: Measure is running, Sleep pass.
Line 5637: [DRX] sleep_req msg will be pended after measure done because measure is ongoing.
Line 5664: (L1LC_DecodeRrmConnSleepReq) (R value no update for long time)
Line 5673: [cDRX pre-Meas] Stop Pre-Intra measurement start
Line 5675: [cDRX pre-Meas] Stop Pre-Intra measurement end
Line 5682: Measure is running, Sleep pass.
Line 5684: [DRX] sleep_req msg will be pended after measure done because measure is ongoing.
Line 5691: gL1LC_DrxControl->state = DRX_CLKEST, Sleep pass.
Line 5711: [DRX] Pend conn sleep request due to ongoing wakeup(gDrx_PendConnSleep:1)!!!
Line 5752: [RRM => L1LC] [GNSS-PULSE] Decode RRM_L1LC_TIMING_PULSE_REQ enable(%d)
Line 5777: clearing pulse from %s
Line 5801: [RRM => L1LC] [GNSS-PULSE] Decode RRM_L1LC_AAM_TIME_AIDING_PULSE_REQ PulsePeriod(%d)
Line 5808: [GNSS-PULSE] PulseStatus(%d)
Line 5845: [RRM => L1LC] Decode RRM_L1LC_FORCE_WAKEUP_REQ
Line 5908: L1LC_DecodeRrmForceWakeupReq(%d) assert
Line 5910: Forced Crash due to multiple FORCE_WAKEUP_REQ
Line 5935: [RRM => L1LC] Decode RRM_L1LC_CONN_DRX_INFO_NTF
Line 5961: 1LC_DecodeRrmTxPowerDownNtf(skip), RF unavailable
Line 5981: [SADS] Not Release UL >> MTM Mode
Line 6005: [RRM => L1LC] Decode RRM_L1LC_POWER_RESET_REQ
Line 6028: [RRM => L1LC] Decode RRM_L1LC_BPLMN_CGI_START_NTF
Line 6053: [L2N_ANR] L2N ANR triggered in ENDC scenario
Line 6081: [L2N_ANR] L2N ANR triggered for AGAP
Line 6112: [RRM => L1LC] Decode RRM_L1LC_BPLMN_CGI_STOP_NTF
Line 6118: [DRX] Stop Soc Warmup timer of CurrentStackID(%d)
Line 6130: [4G_DRDS] Reset PBCHforBPLMNreturn
Line 6162: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 6222: [RRM => L1LC] Decode RRM_L1LC_SI_READ_REQ
Line 6249: [RRM => L1LC] Decode RRM_L1LC_BPLMN_CGI_HOLD_NTF
Line 6274: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 6349: utra_SI_AcquisitionForHO is postponed because UMTS modem is ongoing!
Line 6381: gL1LC_SupportBandList[%d]= %d
Line 6484: Not found available CC for earfcn(%d)
Line 6500: this CC(%d) has already running with state %d
Line 6534: (CA activation) Skip checking TDD contiguous CA & setting SLO because this device can't support TDD SLO.
Line 6611: [SetSCellNtf] Early return due to invalid configscc(cc %d) procedure
Line 6625: [SUBCORE ON] DEMOD PATH %d selected
Line 6665: [4G_DRDS] Remove RFband of SCG from RFbandlist due to MIMO conflict
Line 6692: [L1LC] request NR to change : 4rx -> 2rx for LTE MIMO 4Rx nr band(%d)
Line 6698: MBSFN Config present in Scell(%d) NumMbsfnConfig[%d]
Line 6760: Not found activated CC for earfcn(%d)
Line 6842: [RRM => L1LC] Decode RRM_L1LC_SET_SCELL_NTF(%d)
Line 6881: Not supported band for SCC(earfcn:%d)
Line 6896: Instant SCell configuration&activation for MBSFN (TTI:%d)
Line 6940: [0]%s: start
Line 6959: [Bandlist] add scell : no need to remove DR band (band combination met)
Line 6961: [Bandlist] temporary remove DR band to add DR band tail
Line 6971: [Bandlist] ConnDR_State is reset!
Line 6975: [Bandlist] cannot add Interfreq due to DR band!
Line 6984: [Bandlist] add scell : no need to remove DR band (not actual scell added case)
Line 6992: %s: end
Line 7015: [1]%s: start
Line 7030: earfcn(%d) is already configured as Scell(%d)
Line 7049: Add Scell(Scell): cid(%d), dl_earfcn(%d), band(%d), ul_earfcn(%d), dl_bw(%d), ul_bw(%d)
Line 7062: Case detection: rf band(%d), rf band(%d), rf band(%d), rf band(%d)
Line 7068: Case detection success
Line 7076: Clear Case detection
Line 7084: gL1LC_CA_CASE_DETECTION_CA_NUM Case detection, numCC(%d)
Line 7089: gL1LC_CA_CASE_DETECTION_CA_NUM Case detection, numCC(%d)
Line 7094: gL1LC_CA_MAX_CC_CASE_DETECTION Case detection, numCC(%d)
Line 7100: Num of Scell: total(%d) = prev(%d, %d) + curr(%d)
Line 7104: [L1LC] Calling MCW API for SCell config Msg(CA), numCC(%d), num_scell_freq(%d)
Line 7132: skip checking StackOrder because no Scell update and SCG only removed state: Scell update flag(%d), SCG removed(%d)
Line 7150: (Scell configuration) Skip checking TDD contiguous CA & setting SLO because this device can't support TDD SLO.
Line 7247: %s : end
Line 7279: [Refarming] SCELL_CONFIG_NTF : NrBand[CC:%d] : %d), remove Inter-Freq BAND(same refarming band)
Line 7324: earfcn(%d) is need to using GAP for measurement
Line 7442: Not supported band list for target inter_freq(%d). Clear inter_freq list: Num of Scell (%d) -> (%d)
Line 7451: Not supported band list for target inter_freq(%d). cannot add this object
Line 7505: [2]%s : start
Line 7509: No available RF
Line 7552: Scell(Inter-Freq) CA not support flag(%d)
Line 7598: earfcn(%d) is already configured as Scell
Line 7612: [Refarming] Same NrBand exist!!(CC%d:%d). Gap measure for this Band(%d), earfcn(%d)
Line 7638: earfcn(%d) is already configured, update infomation to scell info
Line 7641: earfcn(%d) is already configured
Line 7658: Replace Freq: dl_earfcn(%d), meas_bw(%d)
Line 7668: Add Scell(Inter-freq): dl_earfcn(%d), meas_bw(%d)
Line 7675: num_scell_freq(%d) + num_inter_freq(%d) >= MAX_CA_SUPPORT_NUM(%d)
Line 7680: Num of Scell: total(%d) = prev(%d, %d) + curr(%d)
Line 7683: [L1LC] Calling MCW API for SCell config Msg(interfreq), numCC(%d), total(%d)
Line 7711: %s : end
Line 7735: [3]%s: start
Line 7739: [Bandlist] re-add DR band to add DR band tail
Line 7757: skip checking StackOrder because no Scell update and SCG only removed state: Scell update flag(%d), SCG removed(%d)
Line 7771: [Bandlist] DR band re-added (need check)
Line 7780: [4G_DRDS] Already ConnDR_state: DR_ADDED
Line 7805: [Bandlist] update_flag(%d), ConnDR_state_changed(%d)
Line 7831: [FEDV] Make eDV_Available as FALSE
Line 7841: %s : end
Line 7882: [RRM => L1LC] Decode RRM_L1LC_SCELL_CONFIG_NTF (bScell:%d, numCC:%d), ConnDR_State:%d
Line 7884: [Before SCI]num_of_scell(%d)
Line 7889: scell[%d]: cc(%d), cell_id(%d), rf_band(%d), dl_earfcn(%d), Is_scg_cc(%d)
Line 7891: -----------------
Line 7924: Skip SCell Config - all inter-freq bands already added
Line 7971: bScell %d, num_scell_freq/num_inter_freq [%d/%d], num_of_scell %d
Line 7994: Add Scell(Inter-freq) or Replace Freq / Add Scell(Scell) :: Done !!!
Line 7999: Inter-freq: already configured/ Same NrBand exist/ >= MAX_CA_SUPPORT_NUM
Line 8006: Inter-freq: CA Not Support
Line 8025: [After SCI]num_of_scell(%d)
Line 8030: scell[%d]: cc(%d), cell_id(%d), rf_band(%d), dl_earfcn(%d), Is_scg_cc(%d)
Line 8032: -----------------
Line 8052: [RRM => L1LC] ignore RRM_L1LC_DCXO_SIB1_NTF due to BPLMN and no RF
Line 8058: [RRM => L1LC] Decode RRM_L1LC_DCXO_SIB1_NTF
Line 8063: [RRM => L1LC] Abnormal msg Decode RRM_L1LC_DCXO_SIB1_NTF
Line 8092: [RSSISCAN]reg_threshold: %d, Rssi_Avg: %d
Line 8140: [RSSISCAN]agc_db_power[0]: %d, agc_gain[0]: %d, cal_rssi_offset_ant[0]: %d, cal_offset[0]: %d, rx_rssi[0]: %d
Line 8141: [RSSISCAN]agc_db_power[1]: %d, agc_gain[1]: %d, cal_rssi_offset_ant[1]: %d, cal_offset[1]: %d, rx_rssi[1]: %d
Line 8168: [RRM => L1LC] Decode RRM_L1LC_RSSI_SCAN_REQ
Line 8213: [RSSISCAN][BPLMN]UeState: %d, BplmnStartedFlag: %d, pHalSc_db->HALSC_CheckSavedAfcValueBplmn: %d)
Line 8218: [RSSISCAN][BPLMN]Save HALSC_SavedAfcValueBplmn(%d))
Line 8235: [RSSISCAN]L1LC_DecodeRrmRssiScanReq (start_earfcn : %d, end_earfcn : %d, center_earfcn : %d, dl_mode : %d)
Line 8294: [RSSISCAN]Enable SAT threshold for SpaceX
Line 8308: [RSSISCAN]RssiScanResult(start_earfcn : %d, end_earfcn : %d, center_earfcn : %d, RESULT: %d)
Line 8315: [RRM => L1LC] Abnormal msg Decode RRM_L1LC_RSSI_SCAN_REQ
Line 8336: [L1LC => RRM] Send L1LC_RRM_RSSI_CNF
Line 8343: Cannot Allocate Message buffer
Line 8351: [RSSISCAN][CNF] ScanResult : %d
Line 8374: [RRM => L1LC] Decode RRM_L1LC_SAT_MODE_NTF
Line 8397: [RRM => L1LC] Decode RRM_L1LC_SCELL_UPDATE_TIMEOFFSET_NTF
Line 8405: Ignore SCell TimeOffset !!!
Line 8566: [4G_DRDS] Already ConnDR_state: DR_ADDED
Line 8583: [FEDV] Make eDV_Available as FALSE
Line 8609: [L1LC] Calling MCW API for SCell release Msg, numCC(%d), num_scell_freq(%d)
Line 8644: [Bandlist] RF_Set_CA_Release : release_rf_path(%d, %d, %d, %d, %d, %d) release_rf_num(%d)
Line 8653: [Bandlist] re-add DR band after release scell
Line 8695: [Bandlist] temporary remove DR band for release scell
Line 8704: [Bandlist] even if DR_NONE state, scg_cc is exist
Line 8745: Remove Scell: cid(%d), dl_earfcn(%d)
Line 8785: [L1LC] clear scell.cc index in scell_config_info DB scell_idx(%d) dl_earfcn(%d) cc_idx(%d)
Line 8810: [L1LC] slo_num(%d->%d) cc_idx(%d) resv(%d)
Line 8827: [Bandlist](Scell) wrong RF path
Line 8917: [RRM => L1LC] Decode RRM_L1LC_RELEASE_SCELL_NTF (numCC:%d)
Line 8952: [Bandlist] num_scell_freq(%d) + num_inter_freq(%d) = total num_of_scell(%d)
Line 8958: Num of Scell: total(%d) = prev(%d, %d) - curr(%d)
Line 9021: [RRM => L1LC] Decode RRM_L1LC_EICIC_IC_NTF
Line 9058: [RRM => L1LC] Decode RRM_L1LC_FEICIC_NTF
Line 9098: [L1LC => RRM] Send L1LC_RRM_SCELL_DEACT_TIMER_EXPIRY_IND
Line 9103: Cannot Allocate Message buffer
Line 9131: [L1LC => RRM] Send L1LC_RRM_SCELL_RTG_UPDATE_NTF
Line 9136: Cannot Allocate Message buffer
Line 9163: L1LC_DecodeRrmEventA3Ntf(%d)
Line 9181: [RRM => L1LC] Decode RRM_L1LC_GPS_TIME_INFO_NTF
Line 9185: GSP info is absent
Line 9219: [MMC => L1LC] Decode MMC_LTEL1_WIFI_COEXIST_INFO_NTF (wifi_coexist_info: %d)
Line 9235: [MMC => L1LC] Decode MMC_LTEL1_FREQ_AID_REQ
Line 9256: ST%d [RRM => L1LC] Decode RRM_L1LC_VOLTE_STATUS_NTF (%d)
Line 9277: [RRM => L1LC] Decode RRM_L1LC_SET_SFNINFO_NTF
Line 9301: [RRM => L1LC] Decode RRM_L1LC_NR_PBCH_DECODE_REQ
Line 9320: NR PBCH decoding information : band(%d), ssbFrequency(%d), subcarrierSpacing(%d), periodicity(%d), cellId(%d), beamIndex(%d), beamTimingOffset(%d)
Line 9323: NR PBCH decoding information : RxBeamIdx(0x%x), agcGain(%d, %d)
Line 9346: [L1LC => RRM] Send L1LC_RRM_NR_PBCH_DECODE_CNF
Line 9351: Cannot Allocate Message buffer
Line 9376: [RRM => L1LC] Decode RRM_L1LC_NR_MEAS_RELEASE_NTF
Line 9406: [RRM => L1LC] Decode RRM_L1LC_ENDC_STATUS_IND(%d)
Line 9412: [CL-AIT] Disable CL-AIT due to RRM_L1LC_ENDC_STATUS_IND(%d)
Line 9445: [RRM => L1LC] Decode RRM_L1LC_MTM_STATE_SET_REQ (%d)
Line 9469: [RRM => L1LC] Decode RRM_L1LC_MTM_PROC_HANDL_CNF
Line 9476: [RRM => L1LC] Decode RRM_L1LC_MTM_PROC_NON_SIG_CA_HANDL_CNF
Line 9508: [L1LC => RRM] Send L1LC_RRM_SET_DL_FREQ_CNF
Line 9512: Do not send L1LC_RRM_SET_DL_FREQ_CNF during RSSI Scan
Line 9519: Cannot Allocate Message buffer
Line 9549: [L1LC => RRM] Send L1LC_RRM_FREQ_SCAN_CNF
Line 9554: Cannot Allocate Message buffer
Line 9608: [L1LC => RRM] Send L1LC_RRM_SEARCH_CNF
Line 9613: Cannot Allocate Message buffer
Line 9651: [L1LC => RRM] Send L1LC_RRM_MEASURE_CNF(isLastMeas:%d)
Line 9688: Cannot Allocate Message buffer
Line 9749: [L1LC => RRM] Send L1LC_RRM_PBCH_DECODE_CNF
Line 9759: Cannot Allocate Message buffer
Line 9830: [L1LC => RRM] Send L1LC_RRM_MEASURE_STOP_CNF
Line 9835: Cannot Allocate Message buffer
Line 9860: [L1LC => RRM] Send L1LC_RRM_ALL_STOP_CNF
Line 9865: Cannot Allocate Message buffer
Line 9915: Cannot Allocate Message buffer
Line 9969: MeasScheduleInd (full stationary %d, reported sinr %d, current sinr %d)
Line 10028: [L1LC => RRM] Send L1LC_RRM_MEAS_SCHEDULE_IND(%d) (measState:%d)
Line 10029: [L1LC => RRM] Send L1LC_RRM_MEAS_SCHEDULE_IND(%d) (measState:%d)
Line 10038: [L1_MTM => RRM] Send L1LC_MTM_RRM_PROC_HANDL_REQ
Line 10043: Cannot Allocate Message buffer
Line 10061: [L1_MTM => RRM] Send L1LC_MTM_RRM_NON_SIG_CA_PROC_HANDL_REQ
Line 10066: Cannot Allocate Message buffer
Line 10100: [L1LC => RRM] Send L1LC_RRM_CELL_CHANGE_CNF
Line 10107: Cannot Allocate Message buffer
Line 10138: [L1LC => RRM] Send L1LC_RRM_OUT_OF_SYNC_IND
Line 10143: Cannot Allocate Message buffer
Line 10150: pSendMsg->req.OutOfSyncInd.oosCause:%d
Line 10183: [L1LC => RRM] Send L1LC_RRM_IRAT_CDMA_INFO_IND
Line 10188: Cannot Allocate Message buffer
Line 10218: [L1LC => RRM] Send L1LC_RRM_IRAT_CDMA_CS_STATE_IND
Line 10223: Cannot Allocate Message buffer
Line 10249: [L1LC => RRM] Send L1LC_RRM_IN_SYNC_IND
Line 10254: Cannot Allocate Message buffer
Line 10282: [L1LC => RRM] Send L1LC_RRM_NCELL_TIMING_INFO_CNF
Line 10287: Cannot Allocate Message buffer
Line 10312: [L1LC => RRM] Send L1LC_RRM_SUSPEND_CNF
Line 10317: Cannot Allocate Message buffer
Line 10344: [L1LC => RRM] Send L1LC_RRM_OTDOA_MEASURE_RSP
Line 10349: [ERROR] L1LC_SendRrmOtdoaMeasureRsp :: Incoming OTDOA Response is NULL!!!
Line 10357: [ERROR] L1LC_SendRrmOtdoaMeasureRsp :: Cannot Allocate Message Buffer!!!
Line 10386: [L1LC => RRM] Send L1LC_RRM_RSTD_INTER_FREQ_MEAS_IND
Line 10391: [ERROR] L1LC_SendRrmRstdInterFreqMeasInd :: Cannot Allocate Message Buffer!!!
Line 10417: [L1LC => RRM] Send L1LC_RRM_RESUME_CNF
Line 10422: Cannot Allocate Message buffer
Line 10452: [L1LC => RRM] Send L1LC_RRM_FORCE_WAKEUP_CNF
Line 10457: Cannot Allocate Message buffer
Line 10488: [L1LC => RRM] Send L1LC_RRM_AAM_TIME_AIDING_PULSE_RSP
Line 10493: Cannot Allocate Message buffer
Line 10500: L1LC_SendRrmAamTimeAidingPulseRsp: Pulsestatus(%u)
Line 10520: [L1LC => RRM] Send L1LC_RRM_WAKEUP_IND
Line 10525: Cannot Allocate Message buffer
Line 10555: [L1LC => RRM] Send L1LC_RRM_BPLMN_CGI_START_IND
Line 10560: Cannot Allocate Message buffer
Line 10589: [L1LC => RRM] Send L1LC_RRM_PAGING_DONE_IND
Line 10594: Cannot Allocate Message buffer
Line 10629: [L1LC => RRM] Send L1LC_RRM_REINIT_DRX_IND
Line 10634: Cannot Allocate Message buffer
Line 10651: [L1LC_DisableDsdsMask] -> 0x00
Line 10694: [L1LC => RRM] Send L1LC_RRM_MEAS_CONFIG_IND
Line 10699: Cannot Allocate Message buffer
Line 10724: [L1LC => RRM] Send L1LC_RRM_MEASURE_SUSPEND_FOR_TX_REQ
Line 10729: Cannot Allocate Message buffer
Line 10752: [L1LC => RRM] Send L1LC_RRM_MEASURE_RESUME_FOR_TX_IND
Line 10757: Cannot Allocate Message buffer
Line 10785: [L1LC => RRM] Send L1LC_RRM_SET_SIUPDATE_TMR_IND
Line 10790: Cannot Allocate Message buffer
Line 10816: [L1LC => RRM] Send L1LC_RRM_BARRED_LIST_REQ
Line 10821: Cannot Allocate Message buffer
Line 10847: [L1LC => RRM] Send L1LC_RRM_CLK_EST_DONE_IND
Line 10852: Cannot Allocate Message buffer
Line 10878: [L1LC => RRM] Send L1LC_RRM_SEARCH_REQUEST_IND
Line 10883: Cannot Allocate Message buffer
Line 10906: [L1LC => RRM] Send L1LC_RRM_BACKGROUND_START_LTE_ACTIVE_IND, cause[%d]
Line 10911: Cannot Allocate Message buffer
Line 10937: [L1LC => RRM] Send L1LC_RRM_BACKGROUND_STOP_LTE_ACTIVE_IND
Line 10942: Cannot Allocate Message buffer
Line 10970: [L1LC => RRM] Send L1LC_RRM_BACKGROUND_START_IND(avail_time: %d)
Line 10974: Cannot Allocate Message buffer
Line 11001: [L1LC => RRM] Send L1LC_RRM_CGI_STOP_RSP
Line 11006: Cannot Allocate Message buffer
Line 11033: [L1LC => RRM] Send L1LC_RRM_UMTS_SFN_MIB_ACQUISITION_IND
Line 11038: Cannot Allocate Message buffer
Line 11070: Measure had been stopped. Ignore MMC_LTEL1_GSM_TIMING_LATCH_CNF.
Line 11079: [MMC => L1LC] Decode MMC_LTEL1_GSM_TIMING_LATCH_CNF
Line 11136: Measure had been stopped. Ignore MMC_LTEL1_GSM_RSSI_MEASURE_CNF.
Line 11140: [MMC => L1LC] Decode MMC_LTEL1_GSM_RSSI_MEASURE_CNF
Line 11172: Measure had been stopped. Ignore MMC_LTEL1_GSM_FCH_ACQ_CNF.
Line 11176: [MMC => L1LC] Decode MMC_LTEL1_GSM_FCH_ACQ_CNF
Line 11208: Measure had been stopped. Ignore MMC_LTEL1_GSM_SCH_ACQ_CNF.
Line 11212: [MMC => L1LC] Decode MMC_LTEL1_GSM_SCH_ACQ_CNF
Line 11249: Measure had been stopped. Ignore MMC_LTEL1_UMTS_TIMING_LATCH_CNF.
Line 11258: [MMC => L1LC] Decode MMC_LTEL1_UMTS_TIMING_LATCH_CNF
Line 11312: Measure had been stopped. Ignore MMC_LTEL1_UMTS_CELL_SEARCH_CNF.
Line 11316: [MMC => L1LC] Decode MMC_LTEL1_UMTS_CELL_SEARCH_CNF
Line 11326: [MMC => L1LC] Ignore Further proceesing as IRAT HO is in progress
Line 11353: Measure had been stopped. Ignore MMC_LTEL1_UMTS_PARTIAL_SEARCH_CNF.
Line 11357: [MMC => L1LC] Decode MMC_LTEL1_UMTS_PARTIAL_SEARCH_CNF
Line 11367: [MMC => L1LC] Ignore Further proceesing as IRAT HO is in progress
Line 11395: Measure had been stopped. Ignore MMC_LTEL1_UMTS_INIT_MEASURE_CNF.
Line 11399: [MMC => L1LC] Decode MMC_LTEL1_UMTS_INIT_MEASURE_CNF
Line 11409: [MMC => L1LC] Ignore Further proceesing as IRAT HO is in progress
Line 11437: Measure had been stopped. Ignore MMC_LTEL1_UMTS_MEASURE_CNF.
Line 11441: [MMC => L1LC] Decode MMC_LTEL1_UMTS_MEASURE_CNF
Line 11451: [MMC => L1LC] Ignore Further proceesing as IRAT HO is in progress
Line 11474: [MMC => L1LC] Decode MMC_LTEL1_UMTS_CGI_ACQUISITION_CNF
Line 11501: [MMC => L1LC] Decode MMC_LTEL1_LEGACY_MEASURE_CNF
Line 11532: [MMC => L1LC] Decode MMC_LTEL1_CDMA_TIMING_LATCH_CNF(rat_mode:%d)
Line 11582: [MMC => L1LC] Decode MMC_LTEL1_CDMA_MEAS_RESULT_IND(freq num : %d)
Line 11621: [MMC => L1LC] Decode MMC_LTEL1_LTE_TIMING_LATCH_REQ(src_rat=%d, cause=%d), DRX STATE(%d)
Line 11635: [SADS] Not enough time to N2L measure >> send TIMING_LATCH_CNF, gL1LC_DrxState = %d
Line 11641: [SADS] Other stack wakeup start >> send TIMING_LATCH_CNF
Line 11691: Clear TimingLatchForHO flag when CANCEL_HO is received.
Line 11697: gL1LC_DrxState(%d), prev_source_rat(%d), cur_source_rat(%d)
Line 11790: MMC MSG(L1LC_DecodeMmcLteAgcInitReq) from DRX_STATE_SUSPEND
Line 11794: [MMC => L1LC] Decode MMC_LTEL1_LTE_AGC_INIT_REQ
Line 11824: [MMC => L1LC] Decode MMC_LTEL1_LTE_CELL_SEARCH_REQ >> Discard Search for N2L HO
Line 11840: [SADS] N2L measure during SADR >> send CELL_SEARCH_CNF
Line 11851: MMC MSG(L1LC_DecodeMmcLteCellSearchReq) from DRX_STATE_SUSPEND
Line 11855: [MMC => L1LC] Decode MMC_LTEL1_LTE_CELL_SEARCH_REQ
Line 11921: [MMC => L1LC] Decode MMC_LTEL1_LTE_MEASURE_REQ >> Discard Measure for N2L HO
Line 11937: [SADS] N2L measure during SADR >> send MEASURE_CNF
Line 11948: MMC MSG(L1LC_DecodeMmcLteMeasureReq) from DRX_STATE_SUSPEND
Line 11952: [MMC => L1LC] Decode MMC_LTEL1_LTE_MEASURE_REQ
Line 12004: MMC MSG(L1LC_DecodeMmcLteSearchMeasureReq) from DRX_STATE_SUSPEND
Line 12013: [MMC => L1LC] Decode MMC_LTEL1_LTE_SEARCH_MEASURE_REQ
Line 12042: [L1LC => %s] Send LTEL1_MMC_LTE_MEAS_STOP_CNF
Line 12053: Release search & measure resource
Line 12059: Cannot Allocate Message buffer
Line 12104: MMC MSG(L1LC_DecodeMmcLteMeasStopReq) from DRX_STATE_SUSPEND
Line 12108: [MMC => L1LC] Decode MMC_LTEL1_LTE_MEAS_STOP_REQ
Line 12138: [MMC => L1LC] Decode MMC_LTEL1_HEDGEMODE_IND
Line 12158: [MMC => L1LC] Decode MMC_LTEL1_CDMACS_STATUS_IND
Line 12180: [MMC => L1LC] Decode MMC_LTEL1_START_DRX_INFOSHARE_IND(DrxState: %d, SrchOnRat: %d)
Line 12185: gL1LC_DrxState(%d) BplmnListCause (%d), Therefore L1LC send LTEL1_MMC_BACK_GND_PLMN_LIST_FAIL_IND to MMC
Line 12206: [MMC => L1LC] Decode MMC_LTEL1_BPLMN_SRCH_STOP_IND
Line 12246: [MMC => L1LC] Decode MMC_HEDGE_LTEL1_BPLMN_SRCH_START_IND gL1LC_DrxState[%d] avail_time[%d] start_time[%u]
Line 12261: DRX spare timer has already elapsed. elapsedTime=%d avail_time=%d
Line 12299: [DRX] Stop gL1LC_CheckWakeupAvailableTmr for ST: %d
Line 12309: [DRX] current_sleep_cnt(%d), gsleepTime_inSlowClk_[OtherStackID] (%d)
Line 12318: [DRX] Lwakeup_Status(%d) Start Default Wakeup Timer for ST%d DsdsWakeupIntrTmr : [500us]
Line 12324: [DRX] [BPLMN]Start wakeup procedure for the current stack immediately
Line 12332: [DRX] SleepAbort is Failed (Minimun Sleep Abort Allowable Time[ST:%d, %d, %d])
Line 12334: [DRX] Start Default Wakeup Timer for ST%d DsdsWakeupIntrTmr : [1000us]
Line 12342: [DRX] Sleep Start Time : (Previous ST%d %dus) vs (Current ST%d %dus)
Line 12353: [DRX] hal_sleepTime(%d (100us))
Line 12369: [DRX] Stop Soc Warmup timer of other stack(%d)
Line 12372: [DRX] Soc Warmup timer is started(%d ms) for Hedge BPLMN start Ind
Line 12377: [DRX] Set DsdsWakeupIntr timer for other STACK (%d ms)
Line 12382: [DRX] Start Wakeup Timer for ST%d DsdsWakeupIntrTmr : [500us]
Line 12402: [DRX] Avail_Time(%d (ms) is shorter than IDLE_BPLMN_MIN_TIME + gDrx_SysStableTime/10 - DRX_INFO_WARMUP_PERIOD)
Line 12409: [DRX] Don't need to turn on the modem!
Line 12426: [DRX] HW is not off actually
Line 12432: [DRX] pHALDRX_Db->gDrx_PowerOn_TimingLatch, Skip Modem/Dsp power on 
Line 12446: [DRX] gDrx_PowerOn_TimingLatch (Other ST: %d), Skip Modem/Dsp power on 
Line 12517: [DRX] Diff cellboundary is zero!
Line 12564: G2L search/measure is running, Pending BPLMN start avail_time(%d)
Line 12569: Current state is not suspend(%d)
Line 12576: [LTE_DSDS] RRM request [%d] is freed!!
Line 12600: [MMC => L1LC] Decode MMC_HEDGE_LTEL1_BPLMN_SRCH_HOLD_IND
Line 12620: [MMC => L1LC] Decode MMC_LTEL1_BPLMN_ABORT_DONE_IND
Line 12636: sleep abort at L1LC_DecodeMmcLteL1BplmnAbortDoneInd
Line 12670: [MMC => L1LC] Process MMC_LTEL1_GRIP_SENSOR_STATE_REQ (Feature: %d, Sensor status: 0x%X)
Line 12706: [AS] Proximity Backoff:OFF, Proximity Sensor status:%d
Line 12710: [AS] Force switch to down antenna
Line 12762: [MMC => L1LC] Decode MMC_LTEL1_AS_SWITCH_CONTROL_REQ (UseCase_Id: %d )
Line 12806: [ERROR] [AS] Wrong UseCase_Id: %d
Line 12856: [MMC => L1LC] Process MMC_LTEL1_ANT_SWITCH_INFO_REQ (AS INFO: 0x%X)
Line 12873: [MMC => L1LC] Process MMC_LTEL1_RX_MODE_SET_REQ (CC: %d, Ant Mode: 0x%X)
Line 12895: [L1LC => %s] Send LTEL1_MMC_RX_READ_RSP
Line 12896: [LTEL1_MMC_RX_READ_RSP] RSRP [%d, %d, %d, %d]
Line 12897: [LTEL1_MMC_RX_READ_RSP] SINR [%d, %d, %d, %d]
Line 12902: Cannot Allocate Message buffer
Line 12944: [MMC => L1LC] Process MMC_LTEL1_RX_READ_REQ (band : %d, ScellIdx : %d)
Line 12952: [L1LC_DecodeMmcLteL1RxReadReq] cc#%d MXR#%d valid : %d
Line 12960: [L1LC_DecodeMmcLteL1RxReadReq] earfcn : %d, ScellIdx : %d RSRP : %d SINR : %d
Line 13052: [MMC => L1LC] Process MMC_LTEL1_AIT_TESTMODE_REQ (CP EVENT INFO: 0x%X)
Line 13092: [MMC => L1LC] Decode MMC_LTEL1_SENSOR_STATE_REQ (Feature: 0x%x, Sensor status: 0x%x)
Line 13183: [MMC => L1LC] Decode MMC_LTEL1_CONN_PAGING_MONITORING_IND (status: %d)
Line 13217: [MMC => L1LC] Decode MMC_LTEL1_RESTRICTION_CTRL_REQ (Level: 0x%x, OneByOne: 0x%x, Restriction(%d), L0_Ctrl(0x%x), L0_CellBitmap(0x%x), L0_CellBitmapRx(0x%x)
Line 13267: [MMC => L1LC] Decode MMC_LTEL1_RESTRICTION_REL_REQ (Level: %d)
Line 13314: [L1LC => %s] Send LTEL1_MMC_FREQUENCY_AIDING_RSP
Line 13319: Cannot Allocate Message buffer
Line 13345: Send LTEL1_MMC_FREQUENCY_AIDING_RSP(RfstackId: %d status:%d, rat:%d, tcxo_type:%d, tcxo_drift:%d)
Line 13375: [MMC => L1LC] Decode MMC_LTEL1_FREQ_AID_REQ (start:%d rat:%d tcxo_type:%d), UE State: %d
Line 13383: gDrx_HoldFlag(current ST: %d, Other ST-2: %d)
Line 13391: Suspend came under FA Stop so Ignore MMC_LTEL1_FREQ_AID_REQ: LTE state(%d) status(%d)
Line 13396: Suspend came under FA Start so send response with service not available: LTE state(%d) status(%d)
Line 13401: RF Is avaiable on other stack, so Freq Aiding Cnf can be sent)
Line 13444: DRDS is active, so modem is also on, hence Freq aiding Rsp can be sent (start:%d rat:%d tcxo_type:%d)
Line 13450: gDrx_HoldFlag(current ST: %d, Other ST-2: %d)
Line 13519: [L1LC => %s] Send LTEL1_MMC_GSM_TIMING_LATCH_REQ
Line 13524: Cannot Allocate Message buffer
Line 13562: [L1LC => %s] Send LTEL1_MMC_GSM_RSSI_MEASURE_REQ
Line 13567: Cannot Allocate Message buffer
Line 13600: [L1LC => %s] Send LTEL1_MMC_GSM_FCH_ACQ_REQ
Line 13604: [L1LC => %s] Send LTEL1_MMC_GSM_POWER_DOWN_REQ
Line 13610: Cannot Allocate Message buffer
Line 13640: [L1LC => %s] Send LTEL1_MMC_GSM_SCH_ACQ_REQ
Line 13645: Cannot Allocate Message buffer
Line 13681: [L1LC => %s] Send LTEL1_MMC_UMTS_TIMING_LATCH_REQ
Line 13686: Cannot Allocate Message buffer
Line 13709: Start irat timer for total srch/meas (%u) 
Line 13734: [L1LC => %s] Send LTEL1_MMC_UMTS_CELL_SEARCH_REQ
Line 13739: Cannot Allocate Message buffer
Line 13769: [L1LC => %s] Send LTEL1_MMC_UMTS_PARTIAL_SEARCH_REQ
Line 13774: Cannot Allocate Message buffer
Line 13804: [L1LC => %s] Send LTEL1_MMC_UMTS_TDD_PARTIAL_SEARCH_REQ
Line 13809: Cannot Allocate Message buffer
Line 13840: [L1LC => %s] Send LTEL1_MMC_UMTS_INIT_MEASURE_REQ
Line 13845: Cannot Allocate Message buffer
Line 13876: [L1LC => %s] Send LTEL1_MMC_UMTS_MEASURE_REQ
Line 13881: Cannot Allocate Message buffer
Line 13914: [L1LC => %s] Send LTEL1_MMC_UMTS_CGI_ACQUISITION_REQ
Line 13919: Cannot Allocate Message buffer
Line 13949: [L1LC => %s] Send LTEL1_MMC_LEGACY_MEASURE_REQ
Line 13954: Cannot Allocate Message buffer
Line 13982: [L1LC => %s] Send LTEL1_MMC_LEGACY_MEAS_STOP_REQ
Line 13987: Cannot Allocate Message buffer
Line 14023: [L1LC => %s] Send LTEL1_MMC_CDMA_TIMING_LATCH_REQ
Line 14033: Cannot Allocate Message buffer
Line 14068: Start irat timer for total srch/meas (%u) 
Line 14091: [L1LC => MMC] Send LTEL1_MMC_CDMA_MEAS_REQ
Line 14096: Cannot Allocate Message buffer
Line 14127: [L1LC => %s] Send LTEL1_MMC_LTE_TIMING_LATCH_CNF
Line 14132: Cannot Allocate Message buffer
Line 14142: EmodemStatus %d
Line 14180: [L1LC => %s] Send LTEL1_MMC_LTE_AGC_INIT_CNF
Line 14186: Cannot Allocate Message buffer
Line 14216: [L1LC => %s] Send LTEL1_MMC_LTE_CELL_SEARCH_CNF
Line 14221: Cannot Allocate Message buffer
Line 14251: [L1LC => %s] Send LTEL1_MMC_LTE_MEASURE_CNF
Line 14256: Cannot Allocate Message buffer
Line 14275: [L1LC => %s] Send LTEL1_MMC_LTE_MEASURE_STOP_CNF
Line 14280: Release search & measure resource
Line 14287: Cannot Allocate Message buffer
Line 14314: [L1LC => %s] Send LTEL1_MMC_LTE_SEARCH_MEASURE_CNF
Line 14324: Cannot Allocate Message buffer
Line 14354: [L1LC => %s] Send LTEL1_MMC_LTE_MEAS_RESEL_CNF
Line 14359: Cannot Allocate Message buffer
Line 14390: [L1LC => %s] Send LTEL1_TO_2G3G_MMC_BPLMN_SRCH_START_IND (spare=%d)
Line 14425: Cannot Allocate Message buffer
Line 14462: [L1LC => %s] SKIP SENDING LTEL1_TO_2G3G_MMC_BPLMN_SRCH_HOLD_IND
Line 14466: [L1LC => %s] Send LTEL1_TO_2G3G_MMC_BPLMN_SRCH_HOLD_IND
Line 14473: Cannot Allocate Message buffer
Line 14540: [L1LC => %s] SKIP SENDING LTEL1_TO_NR_MMC_CGI_SRCH_HOLD_IND
Line 14544: [L1LC => %s] Send LTEL1_TO_NR_MMC_CGI_SRCH_HOLD_IND
Line 14551: Cannot Allocate Message buffer
Line 14614: [L1LC => MMC] Send LTEL1_MMC_BACK_GND_PLMN_LIST_FAIL_IND
Line 14619: Cannot Allocate Message buffer
Line 14651: [L1LC => MMC] Send LTEL1_MMC_TIMING_AIDING_RSP
Line 14656: Cannot Allocate Message buffer
Line 14697: [L1LC => L1TUNNEL][TSIC] Send L1TUNNEL_L1LC_LTE_TSIC_CONFIG_IND
Line 14702: Cannot Allocate Message buffer
Line 14743: Tsic LTE config cc(%d), band(%d) rf_path(%d,%d), dl/ul_bw(%d,%d), rf_dl_bw(%d)
Line 14751: Tsic LTE config cc(%d) dl/ul_freq(%d,%d), ul_rf_freq(%d), cell_num(%d)
Line 14788: [L1LC => L1TUNNEL][TSIC] Send L1TUNNEL_L1LC_LTE_TSIC_RELEASE_IND
Line 14793: Cannot Allocate Message buffer
Line 14820: [L1LC => L1TUNNEL][TSIC] Send L1TUNNEL_L1LC_LTE_TSIC_SLEEP_IND (ST#%d)
Line 14825: Cannot Allocate Message buffer
Line 14851: [L1LC => L1TUNNEL][TSIC] Send L1TUNNEL_L1LC_LTE_TSIC_WAKEUP_IND (ST#%d)
Line 14856: Cannot Allocate Message buffer
Line 14902: L1LC_DecodeL1lcTurnOnRxPathTimerExpired
Line 14921: L1LC_DecodeL1lcSadrMeasureTimerExpired
Line 15029: [L1LC => L1LC] Send L1LC_INT_SYNC_TIMER_EXPIRED
Line 15034: Cannot Allocate Message buffer
Line 15054: [L1LC => L1LC] Send L1LC_INT_MEAS_MICRO_END_EXPIRED
Line 15059: Cannot Allocate Message buffer
Line 15088: [L1LC => L1LC] Send L1LC_INT_TURN_ON_RX_PATH_TIMER_EXPIRED
Line 15093: Cannot Allocate Message buffer
Line 15118: [L1LC => L1LC] Send L1LC_INT_SADR_MEASURE_TIMER_EXPIRED
Line 15123: Cannot Allocate Message buffer
Line 15150: [L1LC => L1LC] Send L1LC_INT_SLEEP_RETRY_TIMER_EXPIRED
Line 15155: Cannot Allocate Message buffer
Line 15181: [L1LC=> L1LC] Send L1LC_INT_MEAS_TIMER_EXPIRED
Line 15186: Cannot Allocate Message buffer
Line 15213: [L1LC=> L1LC] Send L1LC_INT_IRAT_MEAS_TIMER_EXPIRED
Line 15218: Cannot Allocate Message buffer
Line 15245: [L1LC => L1LC] Send L1LC_INT_MBSFN_DRX_TIMER_EXPIRED
Line 15250: Cannot Allocate Message buffer
Line 15276: [L1LC => L1LC] Send L1LC_INT_MBSFN_DELAY_PAUSE_TIMER_EXPIRED
Line 15281: Cannot Allocate Message buffer
Line 15307: [L1LC => L1LC] [4G_DRDS] Send L1LC_INT_EDV_NTF
Line 15312: Cannot Allocate Message buffer
Line 15342: Cannot Allocate Message buffer
Line 15346: [L1LC => L1LC] [4G_DRDS] Send L1LC_INT_CHECK_MEAS_ELEM_TIMER_EXPIRED
Line 15369: [L1LC => L1LC] [SADS] Send L1LC_INT_DRIMPOSSIBLE(%d)
Line 15374: Cannot Allocate Message buffer
Line 15421: [SADS] Tx Direct Call >> TxGrant
Line 15425: [SADS] [SADS] Tx Direct Call >> Wait
Line 15442: [SADS] Tx Rsp Waiting >> Skip Tx Req to SRIF
Line 15448: NeedTxConfirm = 1
Line 15454: Cannot Allocate Message buffer
Line 15506: Cannot Allocate Message buffer
Line 15545: Cannot Allocate Message buffer
Line 15591: [SADS] Tx Rsp from SRIF is REJECT
Line 15599: IsTxReqSentBeforeReconfig = 0
Line 15626: [L1TUNNEL => L1LC]: Decode L1LC_L1TUNNEL_LTE_TX_GRANT_CNF [SADS] Tx >>  txRequestResponse(%d), retry_time(%d), IsTxWaitResponse(%d)
Line 15663: IsTxReqSentBeforeReconfig = 0
Line 15677: [SR-IF => L1LC]: Modem power down(%d) or TX unavailable(%d) or RF unavailebale(%d)
Line 15728: [L1TUNNEL => L1LC]: Decode L1LC_L1TUNNEL_LTE_TX_CHANGE_IND
Line 15737: Pend Tx Change Req because LTE gap is ongoing.
Line 15779: [SR-IF => L1LC]: Decode MMCIF_L1LC_DSL1C_IS_CONCON_IND(%d)
Line 15803: [L1LC => L1LC] [4G_DRDS] Decode L1LC_INT_EDV_NTF
Line 15807: [4G_DRDS] SCG got suspened, do not activate eDV. Reset will be done as part of Suspend procedure
Line 15828: [4G_DRDS] Start pended UpdateRfBandList.
Line 15858: [L1LC => L1LC] [4G_DRDS] Reset EDV variable and trigger recovery procedure
Line 15871: [Debug] Is_Drx_check_ind = %d
Line 15919: [L1LC => L1LC] [4G_DRDS] Decode L1LC_INT_CHECK_MEAS_ELEM_TIMER_EXPIRED (curMode: %d, curIratMode: %d)
Line 15922: SrchState: %d, MeasState: %d
Line 15931: SADR Measure is ongoing (%d)
Line 15933: [LTE DSDS] Start Check meas elem timer.(2 sec)
Line 15941: IRAT Measure is ongoing (%d)
Line 15943: [LTE DSDS] Start Check meas elem timer.(2 sec)
Line 15967: Measure Elem was changed
Line 15969: [LTE DSDS] Start Check meas elem timer.(2 sec)
Line 15976: Measure Elem is not existed
Line 15981: SrchState (%d), MeasState (%d)
Line 15989: Measure procedure is wrong. So, reset!!
Line 16012: [L1LC => L1LC] [4G_DRDS] Decode HAL_L1LC_EDV_SCG_IPC_IND
Line 16018: [4G_DRDS] Start pended UpdateRfBandList.
Line 16029: [4G_DRDS] CLR NeedResumeCnf
Line 16041: [Debug] Is_Drx_check_ind = %d
Line 16061: [L1LC => L1LC] [4G_DRDS] Decode HAL_L1LC_UPDATE_RFBAND_LIST_IND
Line 16065: [4G_DRDS] Do not update Rf bandlist in RF unavailable state
Line 16089: [4G_DRDS] Already updated Band List.
Line 16131: Ignore this SyncDoneInd message because already delete measmode
Line 16138: [HAL => L1LC] Decode HAL_L1LC_SYNC_DONE_IND
Line 16142: Current SyncMode is none(%d). Abnormal case
Line 16180: [HAL => L1LC] Decode HAL_L1LC_PBCH_DONE_IND
Line 16201: Ignore this MeasDoneInd message because already delete measmode
Line 16209: [HAL => L1LC] Decode HAL_L1LC_MEAS_DONE_IND
Line 16210: [HAL => L1LC] Decode HAL_L1LC_MEAS_DONE_IND
Line 16214: Current Measmode is none(%d). Abnormal case
Line 16247: [HAL => L1LC] Decode HAL_L1LC_MEAS_DURATION_IND
Line 16255: [4GDS] There is no RF resource
Line 16265: [HAL => L1LC] Decode HAL_L1LC_MEAS_DURATION_IND (LTERRM_L1LC_CMEAS_GAP)
Line 16274: DecodeHalMeasDurationInd - DmtcEnable(%d)
Line 16307: [HAL => L1LC] Decode HAL_L1LC_RLM_OUTOFSYNC_IND
Line 16326: [HAL => L1LC] Decode HAL_L1LC_RLM_INSYNC_IND
Line 16358: [HAL => L1LC] Decode HAL_L1LC_GAP_SCHEDULE_IND
Line 16363: [4GDS] There is no RF resource(%d) or GAP disabled(%d) or during HO(%d)
Line 16370: [RSTD] Skip GAP_SCHEDULE_IND (curMode:%d, curIratMode:%d)
Line 16374: GAP_SCHEDULE_IND Measure(curMode:%d, curIratMode:%d)
Line 16408: GAP_SCHEDULE_IND Measure(curMode:%d, curIratMode:%d)
Line 16460: [HAL => L1LC] Decode HAL_L1LC_GAP_END_IND
Line 16479: Other gap is configured
Line 16493: Tx Change Req was pended. Retrigger Tx Change Req.
Line 16503: L1LC_DecodeHalGapEndInd: MeasMode(%d), curMode(%d),  curIratMode(%d)
Line 16579: L1LC_DecodeHalGapEndInd:  [RSTD] Ignore the Dummy Sync Results
Line 16600: GapEnd_Intra_L1LC_StartMeas
Line 16606: GapEnd High Acc/Mid Acc search started, avoid simultaneous IRAT - GapPeriod(%d)
Line 16614: GapEnd_IRAT_L1LC_StartMeas
Line 16636: [HAL => L1LC] Decode HAL_L1LC_SCE_COMPLETE_IND
Line 16657: [HAL => L1LC] Decode HAL_L1LC_SHADE_WAKEUP_IND(%d)
Line 16719: [HAL => L1LC] Decode HAL_L1LC_WAKEUP_IND
Line 16728: [DRX OPT] No measurement element -> Meas done & DRX ready
Line 16780: pal_GPSClkOnOff - On
Line 16794: [DRX OPT] onDuration[%d] gDrxWakeTTI[%d]
Line 16867: [DRX-MBSFN] Sleep not triggered for MBSFN
Line 16878: [DRX-MBSFN] [Conn State] Wrap around Condition Current SFN[%d] Mbsfn_Start_info SFN[%d]
Line 16890: [DRX-MBSFN] Current Time SFN[%d] TTI[%d] offset[%d]
Line 16895: [DRX-MBSFN] Timer-2 Created = %d
Line 16919: [DRX] Trigger the pended conn sleep request(gDrx_PendConnSleep:1->0)!!!
Line 16925: [DRX] Trigger the pended idle sleep request(IsSleepReqBeforeWakeup:1->0)!!!
Line 16948: [HAL ==> L1LC] Decode HAL_L1LC_MEAS_TIMING_IND
Line 16952: Do not start measurement during reinit drx period
Line 16993: [DRX][RTG] Change LPM mode to Normal mode
Line 16997: [DRX][RTG] RTG Update current LPM(%d) RTC(%d)
Line 17013: [HAL ==> L1LC] Decode HAL_L1LC_PREPARE_WAKEUP_IND
Line 17099: [4G_DRDS] Reset HoldRrmMsgFlag, so as to request RF again
Line 17101: [4G_DRDS] Processing the Saved RRM message after PAGING_DONE, reset eDV_State(%d) 
Line 17132: [4G_DRDS] Update RF cause MEAS as ScgTxEvent is pending in SCG stack!
Line 17148: [4G_DRDS] Start the Pending MeasureReq[%d] in SCG stack
Line 17154: [4G_DRDS] Update RF cause as MeasureReq[%d] is pending in SCG stack!
Line 17164: [4G_DRDS] Update RF cause Result : %d !!!
Line 17178: [4G_DRDS] Deactivate 4G_DRDS as PauseInd is TRUE in SCG stack !
Line 17182: Stop DrdsAbnormalCheckTmr
Line 17240: [DRX-MBSFN] Sleep not triggered for MBSFN
Line 17247: [DRX-MBSFN] Paging Rcv Intr set at paging_frame(%d), paging_offset(%d), curTimeSFN(%d, %d)
Line 17257: [DRX-MBSFN] [Idle State] Wrap around Condition Current SFN[%d] Mbsfn_Start_info SFN[%d]
Line 17267: [DRX-MBSFN] Timer value is not sufficient, Default timer created[%d]
Line 17270: [DRX-MBSFN] Mbsfn_End_info.sfn[%d] Mbsfn_End_info.sfn[%d] time[%d]
Line 17272: [DRX-MBSFN] Current Time SFN[%d] TTI[%d] offset[%d]
Line 17277: [DRX-MBSFN] Timer-2 Created = %d
Line 17310: [HAL => L1LC] Decode HAL_L1LC_PAGING_DONE_IND gDrx_BplmnStarted(%d)
Line 17334: [DRX] PagingRcvIntr timer is running, ignore PAGING_DONE_IND
Line 17339: [DRX] Preponed PagingRcvIntr timer expiry yet to process, ignore PAGING_DONE_IND
Line 17406: Do not start measurement during reinit drx period(%d) or Reselection(%d)
Line 17420: Wakeup happened for SIB Send LTERRM_L1LC_IMEAS_INTRA_SLEEP to RRM
Line 17447: [HAL => L1LC] Decode HAL_L1LC_DRX_CHECK_IND
Line 17472: [HAL => L1LC] Decode HAL_L1LC_SLEEP_START_IND
Line 17476: [4G_DRDS] eDV is ongoing. So, Ignore MCG sleep_start_ind
Line 17494: Measure is running, Sleep pass.
Line 17511: Abnormal behavior, CurrMeasFlag(%d), ue_state(%d)
Line 17571: Skip TX path recovery at this time(due to GAP)(gHALSC_IdleGapOnGoing(%d) gHALSC_PrepareGapMeas(%d))
Line 17578: Skip TX path recovery at this time(due to TxSwap) gHal_IpcTxStatus(%d)
Line 17670: [NRINFO] Don't apply HAL_L1LC_PENDED_NRCONFIG_IND due to  NrPathConfigPending(%d)
Line 17780: [L1LC => RRM] Send L1LC_RRM_MCCH_CHANGE_IND
Line 17785: Cannot Allocate Message buffer
Line 17813: [L1LC => RRM] Send L1LC_RRM_MBSFN_SIG_STRENGTH_RSP
Line 17817: [L1LC] [%d]snr[%d] area_id[%d] eSnr[%d]
Line 17823: Cannot Allocate Message buffer
Line 17856: [HAL => L1LC] Decode HAL_L1LC_RRC_IDLE_IND  enable (%d)
Line 17869: Don't start sleep proedure for MCG stack due to DRDS is active
Line 17875: Modem is off. Don't decode HAL_L1LC_RRC_IDLE_IND
Line 17881: RF is not available. Don't decode HAL_L1LC_RRC_IDLE_IND
Line 17887: gL1LC_DsdsPagingRcvIntrTmr is not running. Don't decode HAL_L1LC_RRC_IDLE_IND
Line 17892: Rrc_Flag is FALSE. Don't decode HAL_L1LC_RRC_IDLE_IND
Line 17897: Rach is ongoing. Don't decode HAL_L1LC_RRC_IDLE_IND
Line 17902: IsCellResel is TRUE. Don't decode HAL_L1LC_RRC_IDLE_IND
Line 17908: RF is not available. Don't decode HAL_L1LC_RRC_IDLE_IND
Line 17914: Wakeup is ongoing. Don't decode HAL_L1LC_RRC_IDLE_IND
Line 17920: Don't decode HAL_L1LC_RRC_IDLE_IND as sleep state is [%d]
Line 17926: [DRX] Do not process IdleSleepReq as Slow Clock Estimation is running!
Line 17942: HAL_L1LC_RRC_IDLE_IND send Sleep_Req, gHalDrx_SleepState[%d]
Line 17947: Measure or paging ongoing, do not send Sleep_Req, gHalDrx_SleepState[%d]
Line 17986: [HAL => L1LC] Decode HAL_L1LC_RSTD_MEASURE_DONE_IND
Line 18003: [HAL => L1LC] Decode HAL_L1LC_RSTD_SCHEDULE_IND
Line 18020: [HAL => L1LC] Decode HAL_L1LC_AGAP_STOP_IND
Line 18038: DecodeHalSCellDeactCnfInd: Invalid CNF message type(%d)
Line 18215: Start DrdsAbnormalCheckTmr again (200ms)
Line 18233: [4G_DSDS] DRDS already deact
Line 18235: [4G_DSDS] RF unavailable! Skip DEACT in L1LC_DecodeHalSCellDeactCnfInd
Line 18301: DecodeHalSCellDeactCnfInd(%d) during no RF resource
Line 18385: slo_config_cc(%d), slo_cell_num (%d)
Line 18399: [RXF][case detection] Reset index in ccinfo when Deact: CC%d
Line 18436: [NSA CASE DETECT] LTE core0 buff(%d), proc_s(%d), core1 buff(%d), proc_s(%d) outputBitmap(0x%x), tdbufBitmap(0x%x)
Line 18463: L1LC_DecodeHalSCellDeactCnfInd : (CC:%d, msg_type:%d, SCG_CC:%d, RF_Available:%d, Pscellcnf : %d)
Line 18546: L1LC_DecodeHalRxModeReqInd: Skip as UE state(%d)
Line 18551: [HAL => L1LC] Decode HAL_L1LC_RXMODE_REQ_IND : cc(%d), rx_mode(%d), gDrxL1_Flag(%d), offset(%d)
Line 18559: Ignore L1LC_DecodeHalRxModeReqInd due to DSDS_RF_UNAVAILABLE
Line 18572: L1LC_DecodeHalRxModeReqInd: Skip due to GAP scheduled in %dms
Line 18577: L1LC_DecodeHalRxModeReqInd: CC check - measmode(%d) req_cc(%d), meas_cc(%d), srch_cc(%d)
Line 18617: [L1TX => L1LC] Decode L2LTX_L1LC_TX_REQ
Line 18635: [HAL => L1LC] Decode L2LTX_L1LC_TX_DONE_IND
Line 18657: [HAL => L1LC] Decode L2LTX_L1LC_HALDSP_CMD_IND (ST%d, Cmd= %d)
Line 18685: [L1LC => L1TX] Send L1LC_L1TX_TX_CNF:TxType(%d)
Line 18690: Cannot Allocate Message buffer
Line 18735: [L1RX => L1LC][PWR_OPT] Decode L2LRX_L1LC_IDLE_PAGING_DONE_IND
Line 18736: [L1RX => L1LC][PWR_OPT] Decode L2LRX_L1LC_IDLE_PAGING_DONE_IND
Line 18750: Ignore L2LRX_L1LC_IDLE_PAGING_DONE_IND during BPLMN search
Line 18756: Ignore L2LRX_L1LC_IDLE_PAGING_DONE_IND during 4GDRDS
Line 18762: Ignore L2LRX_L1LC_IDLE_PAGING_DONE_IND due not to HALSC_UE_STATE_IDLE (ue_state:%d)
Line 18768: Abnormal case!! Modem Power [%d], RF Available[%d]
Line 18774: [DRX][PWR_OPT] Last paging is not invoked yet!!!
Line 18787: Ignore L2LRX_L1LC_IDLE_PAGING_DONE_IND as PagingState is DRX_PAGING_DONE
Line 18796: [DRX] Saved AGC Index(%d, %d)
Line 18802: [DRX] ProcDrxPagingRcvHisr: gHalDrx_SleepState(%d), gHalDrx_NonPaging(%d)
Line 18819: [HAL => L1LC] Decode L2HTX_L1LC_TX_REQ
Line 18841: [L1LC => L2TX] Send L1LC_L2HTX_TX_CNF
Line 18846: Cannot Allocate Message buffer
Line 18881: [HAL => L1LC] Decode L2HRX_L1LC_RX_REQ
Line 18902: [L1LC => L2RX] Send L1LC_L2RX_RX_CNF
Line 18907: Cannot Allocate Message buffer
Line 18946: [LTE DSDS] assert condition : Message is NULL
Line 18960: [LTE DSDS] assert condition : Message Sending failed
Line 18999: [LTE DSDS] assert condition : Message is NULL
Line 19013: [LTE DSDS] assert condition : Message Sending failed
Line 19026: Unable to set  event to L1 event grou
Line 19139: [L1LC => L1TX] Send L1LC_L1TX_TX_RF_STATUS_IND
Line 19144: Cannot Allocate Message buffer
Line 19167: [L1LC => L1TX] Send L1LC_L1TX_TX_RF_RELEASE_IND
Line 19172: Cannot Allocate Message buffer
Line 19216: [L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_LTE_RF_GRANT_CNF [%s][%d],EarlyPauseDuration[%u],Early_time[%u], retry_time[%u]
Line 19220: [LTE L1LC DSL1RC] Ignore response due to wrong message number (Msg: %d,  LTE L1: %d) !!!
Line 19225: [LTE L1LC DSL1RC] Ignore response because didn't request RF GRANT !!!
Line 19256: Early Pause Timer stop
Line 19264: Ignore this response because RF requesting is before eDV Active
Line 19270: Ignore Early Pause Timer as eDV is active. Early Pause Time(%u)
Line 19280: Early Pause Time(%u) is too small - But UE is in DRX sleep. RF will be released
Line 19284: [LTE_DSDS] Wake up ongoing hence do not pause even when ept time is small
Line 19309: [4G_DRDS] eDV_AvailableforEPT(%d -> %d) ConnDR_State(%d) SemiDrds(%d)
Line 19318: [4G_DRDS] Don't do pause done ! EDV_Active [%u] EDV_State [%d]
Line 19330: Early Pause Time(%u) is too small - send PAUSE DONE CNF
Line 19351: [SADS]gL1lc DsdsDB.FakeWakeUpTime(%d) 
Line 19361: Early Pause Timer started with [%u]us!!!
Line 19375: early_pause_duration [%u]us/Early time is negative/Timer is already running!!!
Line 19384: Early pause duration is zero
Line 19418: [L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_LTE_RF_PAUSE_REQ
Line 19470: [L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_LTE_SADR_MEAS_RESUME_REQ with EarlyPauseDuration[%u],Early_time[%u]
Line 19474: [L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_LTE_RF_RESUME_REQ with EarlyPauseDuration[%u],Early_time[%u]
Line 19489: [LTE L1LC DSL1RC] Ignore RESUME. RF is already released. No Resume awaited at L1LC at this time!!!
Line 19500: [NRDS] NR EPT time updated (%d->%d)
Line 19507: Early Pause Timer stop
Line 19515: gL1LC_DsdsReleaseAndReqTmr Timer stop
Line 19523: Early Pause Timer started with [%u]us!!!
Line 19543: early_pause_duration [%u]us/Early time is negative/Timer is already running!!!
Line 19582: Early Pause Timer is already expired. So, skip.
Line 19602: [L1TUNNEL => L1LC]: Decode L1LC_L1TUNNEL_LTE_AUTO_PAUSE_UPDATE_IND with EarlyPauseDuration[%u],Early_time[%u]
Line 19612: Early Pause Timer stop
Line 19619: IsTxReqSentBeforeReconfig = %d
Line 19626: Early Pause Timer started with [%u]us!!!
Line 19634: [NRDS] Update NR EPT info also.(curProc:%d, ept:%d->%d)
Line 19663: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSetDlFreq!!!
Line 19672: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSearchReq!!!
Line 19692: early_pause_duration is 0!!
Line 19707: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSetDlFreq!!!
Line 19716: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSearchReq!!!
Line 19728: early_pause_duration [%u]us / Early time is negative!!
Line 19736: No need early_pause_time update. IsRfAvailable (%d), IsTxReqSentBeforeReconfig (%d)
Line 19756: [SR-IF => L1LC] Decode MMCIF_L1LC_DSL1C_STOP_TIMER_IND
Line 19762: Early Pause Timer stop
Line 19785: [SR-IF => L1LC] Decode MMCIF_L1LC_DSL1C_PSPS_IND. IsPsPsEnabled[%s]
Line 19792: [LTE PSPS] PSPS Scheme Started! Enable RF Protection during C-DRX Sleep
Line 19796: [LTE PSPS] PSPS Scheme stopped! Stop Early Pause Timer
Line 19809: [LTE PSPS] PSPS Scheme stopped during C-DRX and RF is not released
Line 19838: [SR-IF => L1LC] Decode MMCIF_L1LC_DSL1C_2G_CS_CALL_IND
Line 19850: [LTE L1LC DSL1RC] Suspend is expected for the Call on other stack..Restarted Protecting timer for 100ms!!!
Line 19871: [HAL => L1LC]: Decode HAL_L1LC_WAKEUP_START_IND
Line 19896: [L1LC => SR-IF] send LTE_L1LC_MMCIF_NS_UNRECOVER_IND
Line 19902: Cannot Allocate Message buffer
Line 19913: assert condition : Message Sending Failed
Line 19945: PAUSE due to SADR MEASURE
Line 19976: Cannot Allocate Message buffer
Line 20001: IsInConnected [%u], DutyCycle [%u]
Line 20105: Cannot Allocate Message buffer
Line 20134: IsInConnected [%u], NextEventPresent [%u], NextWakeupCause [%u], NextEventStartTime [%u], NextEventDuration [%u]
Line 20190: PAUSE due to SADR MEASURE
Line 20215: [L1LC => SRIF] skip LTE_L1LC_MMCIF_DSL1C_RSRC_REQ >> eDV Active && McgStack
Line 20235: L1LC_SendSrIfReq->Csfb(%d), Handover (%d)
Line 20242: L1LC_SendSrIfReq->RF status(%s), remaining Early pause time(%u)
Line 20247: RF Cause Update due to PBCH decoding for BPLMN return
Line 20254: [SADS] Always request RF as SA-DRDS mode is on
Line 20260: RF Cause Update Pending due to nearby Early pause time
Line 20268: RF Cause : Signalling. Do not check nearby Early pause time
Line 20283: Cannot Allocate Message buffer
Line 20315: IsInConnected [%u], DutyCycle [%u]
Line 20333: Early Pause Timer stop
Line 20368: LTE L1LC is already in deregistered state, do not send deregister again
Line 20374: LTE L1LC is already in registered state, do not send register again
Line 20387: Cannot Allocate Message buffer
Line 20398: gL1LC_IsBplmnOnOtherRat[%d] gL1LC_CgiInfo.isEnable[%d] L1LC_CgiMeasMode[%d]
Line 20471: Cannot Allocate Message buffer
Line 20514: Cannot Allocate Message buffer
Line 20563: [SADR] Don't measure release if pause flag is set for measure pause.
Line 20571: Cannot Allocate Message buffer
Line 20614: [L1LC => SR-IF] Decode LTE_L1LC_MMCIF_DSL1C_SADR_GAP_MEASURE_PAUSE_DONE_CNF
Line 20620: Cannot Allocate Message buffer
Line 20646: [SR-IF => L1LC] Decode MMCIF_L1LC_DSL1C_SADR_GAP_MEASURE_RESUME_IND
Line 20650: Abnormal procedure (%d)
Line 20676: [L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_LTE_SADR_MEAS_GRANT_CNF (%d, %d)
Line 20703: [L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_LTE_SADR_MEAS_PAUSE_REQ
Line 20710: Early return - @Exception(SADR unavailable or RF unavailable(%d)) or SADR meas state is none: %s()
Line 20724: L1LC_DecodeSrIfMeasurePauseReq: Meas Pause received when no measurments ongoing
Line 20748: [L1LC => RRM] Send L1LC_RRM_DSDS_RELEASE_IND
Line 20754: Cannot Allocate Message buffer
Line 20784: [L1LC => RRM] Send L1LC_RRM_PROC_PAUSE_IND [%d]
Line 20788: No Need to send L1LC_RRM_PROC_PAUSE_IND again as RRC is already in Paused State
Line 20798: Cannot Allocate Message buffer
Line 20831: [L1LC => RRM] Send L1LC_RRM_PROC_RESUME_IND 
Line 20837: Cannot Allocate Message buffer
Line 20868: ST%d [RRM => L1LC] Decode RRM_L1LC_SIGNALLING_IND [%d]
Line 20901: [RRM => L1LC] Decode RRM_L1LC_IDLE_STATE_IND
Line 20918: %s: RFRelease Check !
Line 20927: [DRX] Extend gL1LC_DrdsAbnormalCheckTmr (gDrxRrcFlag case)
Line 20945: [DRX] Don't release RF. Wait RRC_IDLE_IND.
Line 20973: [RRM => L1LC] Decode RRM_L1LC_OTHER_RAT_BPLMN_IND
Line 20983: gL1LC_OtherRatBplmnStart(%d), Therefore L1LC send LTEL1_MMC_BACK_GND_PLMN_LIST_FAIL_IND to MMC
Line 21009: [RRM => L1LC] Decode RRM_L1LC_HIGH_PRIORITY_IND [%d, %d]
Line 21062: [RRM => L1LC] Decode RRM_L1LC_DSDS_PAUSE_IND
Line 21113: [4G_DRDS] PauseInd received in ST[%u]. eDV_Active[%u], MeasMode[%u], IsPreponeSet[%u]
Line 21118: [4G_DRDS] Deactivate 4G_DRDS as PauseInd is received in SCG stack!
Line 21128: UE DRX State(%d), Wakeup or CLK EST Procedure is not completed. Hence do not send pause done yet!
Line 21173: Perform RF Release first because RF is unavailable
Line 21207: [RRM => L1LC] Decode RRM_L1LC_DSDS_RESUME_IND
Line 21214: DSDS_RESUME_IND received when RESUME_REQ msg is saved or IsRetryPending is true, ignore ModemPowerOn state check
Line 21220: Ignore RESUME_IND due to Modem Power Off
Line 21226: Wakeup procedure is not completed. Hence do not process Resume Ind!
Line 21256: Due to PAUSE_IND, retry timer was stopped. So, RF request again.
Line 21321: End of %s()
Line 21344: [RRM => L1LC] Decode RRM_L1LC_CELL_CHANGE_START_IND
Line 21468: [LTE_L1LC] RFBand of SCG STACK should be removed
Line 21479: [4G_DRDS] abnormal case!! Remove Scell: cid(%d), dl_earfcn(%d)
Line 21501: [4G_DRDS] For clearing abnormal case, RFBandlist is done
Line 21536: [L1LC => L1LC] Send L1LC_INT_EARLY_PAUSE_TIMER_EXPIRED
Line 21539: [LTE_DSDS] Search/Measure mode (HALSC_SyncMode: [%d], LTERRM_MEASMODE: [%d], curIratMode: [%d])
Line 21584: [FEDV] Ignore EPT
Line 21590: [LTE_DSDS] Ignore EPT
Line 21597: Cannot Allocate Message buffer
Line 21602: [4G_DRDS] Set gEarlyPauseFlag as TRUE
Line 21630: [L1LC => L1LC] Send L1LC_INT_ReleaseAndReqTimer_Expired
Line 21635: Cannot Allocate Message buffer
Line 21663: [L1LC => L1LC] Send L1LC_INT_CHECK_RELEASE_FEASIBILITY_TIMER_EXPIRED
Line 21668: Cannot Allocate Message buffer
Line 21695: [L1LC => L1LC] Send L1LC_INT_DSDS_CONN_CONN_RF_TIMER_EXPIRED
Line 21700: Cannot Allocate Message buffer
Line 21725: [L1LC => L1LC] Send L1LC_INT_DSDS_CONN_SIB_TIMER_EXPIRED
Line 21730: Cannot Allocate Message buffer
Line 21754: [L1LC => L1LC] Send L1LC_INT_DSDS_PBCH_TIMER_EXPIRY_ACTION
Line 21759: Cannot Allocate Message buffer
Line 21788: [L1LC => L1LC] Send L1LC_INT_DSDS_WAKEUP_INTR_TIMER_EXPIRY_ACTION
Line 21793: [L1LC => L1LC] Send L1LC_INT_DSDS_PAGING_REQUEST_TIMER_EXPIRY_ACTION
Line 21798: [L1LC => L1LC] Send L1LC_INT_DSDS_RETRY_TIMER_EXPIRY_ACTION
Line 21806: Cannot Allocate Message buffer
Line 21832: [L1LC => L1LC] Send L1LC_INT_DSDS_BPLMN_DURATION_TIMER_EXPIRED
Line 21837: Cannot Allocate Message buffer
Line 21869: [SADS] Skip earlyPauseTimer
Line 21875: [SADS] SADR case. start pended CauseUpdate. RF Requet[%s]
Line 21885: [SADS] SADR case. start pended SearchReq!!!
Line 21893: [SADS] SADR case. start pended SetDlFreq!!!
Line 21908: [NRDS] Ignore E.P.T because eDV is ongoing
Line 21993: Set IsMandatarySibsReadReq as FALSE.
Line 22049: [SADS]DRImpossible(%d)
Line 22078: [L1LC => MMC] send LTE_L1LC_MMCIF_DSL1C_PSUPDATE_TIME_IND [%d]
Line 22085: Cannot Allocate Message buffer
Line 22096: UpdateTime [%u], EventDuration [%u], Cause [%u]
Line 22128: Cannot Allocate Message buffer
Line 22137: %s: NULL bandlist[0]
Line 22174: [SADS] No need to RF Request(%d)
Line 22220: [L1LC => %s] Send LTEL1_MMC_UMTS_STOP_REQ
Line 22225: Cannot Allocate Message buffer
Line 22256: [L1LC => %s] Send LTEL1_MMC_GSM_STOP_REQ
Line 22261: Cannot Allocate Message buffer
Line 22285: [L1LC => %s] Send LTEL1_MMC_CDMA_STOP_REQ
Line 22305: [RRM => L1LC] Decode RRM_L1LC_SIB8_INFO_NTF
Line 22311: CMDA2000 info is absent
Line 22335: [HAL => L1LC] Decode HAL_L1LC_GNSS_TIME_AID_IND
Line 22353: [L1LC => %s] Send LTEL1_MMC_RESTRICTION_CTRL_RSP
Line 22358: Cannot Allocate Message buffer
Line 22405: [DRX] BPLMN is ongoing, avoid processing of RSRC_REQ_IND and do not send meas schedule to RRM
Line 22419: [LTE L1LC DSL1RC] RsrcReqInd
Line 22432: Early Pause Timer stop, remain time (%d)
Line 22440: [4G_DRDS] eDV_Active[%u] Don't do early pause for Active Idle-Idle case !
Line 22451: [DRX] L1LC_DecodeHalRsrcReqInd: PreponePagingRFReqTime(%d)
Line 22462: [DRX][Before] PreponePagingRFReqTime(%d), Current SfnTTI(%d), next_paging_SfnTTI(%d)
Line 22475: [DRX][After] PreponePagingRFReqTime(%d), Current SfnTTI(%d), next_paging_SfnTTI(%d)
Line 22479: [DRX] Preponed HALDRX_ProcPagingRcvIntr, paging_frame=%d, paging_offset=%d, IsRfAvailable(%d)
Line 22496: [DRX] Process PagingRcvIntr immediatly (time diff : %d)
Line 22505: [DRX] Saved AGC Index(%d, %d)
Line 22532: NR is not active, do not send L1LC_L1TUNNEL_NR_4G_INFO_REQ (IsEndcStatusInd:%d/IsEndc:%d)
Line 22539: IsEndcStack(%d)
Line 22545: don't send L1LC_L1TUNNEL_NR_4G_INFO_REQ - not ENDC and type(%d)
Line 22552: [L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_NR_4G_INFO_REQ(%d) share_information(%d)
Line 22559: Cannot Allocate Message buffer
Line 22580: [L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_4G_NR_INFO_CNF Failed response
Line 22585: Cannot Allocate Message buffer
Line 22602: [L1LC => L1TUNNEL] Failure response (type:%d, UserType:%d)
Line 22622: [L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_4G_NR_INFO_CNF
Line 22627: Cannot Allocate Message buffer
Line 22673: Do not update LTE state >> IsProcConflict(%d), IsStart(%d)
Line 22728: Cannot Allocate Message buffer
Line 22738: ST%d [L1LC => L1TUNNEL]  Send L1TUNNEL_L1LC_LTE_SLEEP_IND (IsStart:%d, IsModemOn:%d)
Line 22771: Cannot Allocate Message buffer
Line 22785: ST%d [L1LC => L1TUNNEL] Send L1TUNNEL_L1LC_LTE_WAKEUP_IND (IsStart:%d, IsModemOn:%d)
Line 22950: [L1TUNNEL => L1LC] L1LC_INT_L1TUNNEL_4G_NR_INFO_REQ (type:%d) will be processed after EDV end
Line 22962: [L1TUNNEL => L1LC] L1LC_INT_L1TUNNEL_4G_NR_INFO_REQ: LTE RAT is supended(type : %d)
Line 23008: [L1LC] Invalid Core ID(%d)
Line 23046: [NSA CA DEBUG] Case Detection, LTE activated numCC(%d)
Line 23055: [NSA CA DEBUG] Case Detection, LTE selected CC(%d)
Line 23058: [NSA CA DEBUG] Improper CC selected
Line 23078: [NSA CA DEBUG] LTE is not 20 Layer
Line 23113: [L1TUNNEL => L1LC] Decode L1LC_INT_L1TUNNEL_4G_NR_INFO_REQ (type:%d)
Line 23115: [Debug] type(%d) UserType(%d) remain_fdbuf(%d)
Line 23167: [NRDS] 4G_NR_INFO_REQ : Path REQ (NrBand : %d), remove DR BAND(FR2 case / MIPS issue)
Line 23189: [L1LC] 4G_NR_INFO_REQ : Path REQ, type(%d) //0:PCC, 1:SCC, used_cc_path(0x%x), using_dr_path(%d)
Line 23212: [L1LC] 4G_NR_INFO_REQ : PATH_MODIFY from NR(TBD)
Line 23217: [L1LC] 4G_NR_INFO_REQ (GAP_INFO) : GapEnable(%d) GapLen(%d) GapStart(%d)
Line 23221: [L1LC] 4G_NR_INFO_REQ : Send LCPU GAP IPC for NR interband gap
Line 23260: [L1LC] 4G_NR_INFO_REQ : NOT defined type, please check L1 tunnel message type(%d)
Line 23291: [L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_4G_INFO_CNF(type:%d)
Line 23297: [L1TUNNEL => L1LC] NR modem is NOT powered off!!!
Line 23320: [L1LC] SUSPEND_NR_TX_PATH (Type%d/WaitingNrTxSuspend%d) Done: Complete SetDlFreq(%d) TuneDLBand(B%d) for Earfcn(%d/%d)
Line 23328: [L1LC] Tune EARFCN : %d, Freq : %d, band : %d
Line 23409: [L1TUNNEL => L1LC] Decode L1LC_INT_L1TUNNEL_NR_INFO_UPDATE_IND (type:%d) search_ongoing(%d) measure_ongoing(%d) dummy(%d)
Line 23433: [MTPL] Updated MTPL for MAIN/SUB TX path change in ENDC done(%d), RsiMos(%d)
Line 23441: [AS] Consider SW Restriction for AS in ENDC(NR Band:%d -> %d) gSendAsInfoToENDC(%d)
Line 23475: [L1LC] CoreAllocDb from NR: processing_Sum0(%d), buffer_Sum0(%d), output_occupied(%x), tdbuf_occupied(%x), reducedModeStatusNr[0](%d)
Line 23481: [L1LC] CoreAllocDb from NR: processing_Sum1(%d), buffer_Sum1(%d), reducedModeStatusNr[1](%d)
Line 23489: [NRDS] gL1lc DsdsDB.NrBandNum : %d
Line 23491: [Debug] cc_occupied [%d], scell_cc_occupied [%d], NrScellBandCnt [%d] !!! 
Line 23501: NrScellBandInfo[] is smaller than NUM_CC_CHIP
Line 23527: [Debug] NR SLO CC (SCC occupied but no NR band info) !!! 
Line 23529: [Debug] cc_idx[%d], NrBandInfo [N%d] !!! 
Line 23544: [NRDS] NR_INFO_UPDATE_IND (resv) : NR band (CC%d: %d), num = %d, Nr4rxCc = %d
Line 23555: [NRDS] NR_INFO_UPDATE_IND (free) : NR band (CC%d: %d), num = %d, Nr4rxCc = %d
Line 23604: [NRDS] NR_INFO_UPDATE_IND : 4rx Path reordering is pended since RF is not available(div_path_release_cc(%d), resv(%d), Update4RxPended(%d)
Line 23638: [SC] NSA CC%d: earfcn(%d), resv(%d), type(%d), pair_cc(0x%04x), tdp_state(%d), rx_mode(0x%x)
Line 23644: [RFFE Debug][NR_INFO_UPDATE] NrBandListNum(%d -> %d) IsEndc(%d -> %d) cc_occupied(0x%x) gRF_UlCaStatus(%d) TxSwapDoneByEndc(%d)
Line 23651: [RF] Consider TX_SWAP in case of ENDC release (Band:B%d)
Line 23744: [L1LC] Set Update4RxPended (0x%x)
Line 23748: [L1LC] NR_INFO_UPDATE_IND : Path Release, cc_occupied(0x%x)
Line 23842: [L1LC] NR_INFO_UPDATE_IND : TYPE(%d)
Line 23844: [L1LC] CoreAllocDb from NR: processing_Sum0(%d), buffer_Sum0(%d), output_occupied(0x%x), tdbuf_occupied(0x%x), reducedModeStatusNr0(%d)
Line 23850: [L1LC] CoreAllocDb from NR: processing_Sum1(%d), buffer_Sum1(%d), reducedModeStatusNr1(%d)
Line 23863: [L1TUNNEL => L1LC] NR_INFO_UPDATE_IND : Please check Message type(%d)
Line 23868: [NRDS] prev_NrBandNum (%d), current (%d), consider add DR BAND
Line 23874: [NRDS] DR added check will be done after CDRX wakeup or RF GRANT
Line 23880: [NRDS] pLTE_OHE->eDV_Active [%d]. So, don't check CheckEdvStackOrder
Line 23898: [NRDS] ConnDR_State is not DR_NONE
Line 23960: [L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_NR_RESUME_SUSPEND_REQ(type:%d => [0]:suspend, [1]:resume, [2]:L2N meas config release)
Line 23965: Cannot Allocate Message buffer
Line 23981: [L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_NR_RESUME_SUSPEND_REQ(SkipPowerDown : (%d), [0]: powerDownNr, [1]: skipPowerDownNR for L2N HO, [2] skipPowerDownLDO for FR2)
Line 24006: [L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_RESUME_SUSPEND_CNF
Line 24050: [L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_NR_4G_MEAS_REQ(measMode:%d)
Line 24055: Cannot Allocate Message buffer
Line 24083: Start irat timer for total srch/meas (%u) 
Line 24088: [L1LC => L1TUNNEL] request information : Band(%d), SsbFreq(%d), NumOfCell(%d), Scs(%d), Period(%d), AgcGain(%d, %d)
Line 24091: [L1LC => L1TUNNEL] request information : IsGap?(%d), smtcIncluded(%d), smtc.offset(%d), smtc.duration(%d), NumSsbToMeasure(%d), SsbToMeasure(0x%x, 0x%x)
Line 24098: [L1LC => L1TUNNEL] request information : gap_info->gap_start_time(%u), length(%d)
Line 24118: L2N SRCH/MEAS/PBCH Type(%d)(0:scell, 1:gap), measMode:%d, Arfcn:%d, RxBeamIdx(0x%x)
Line 24141: [L1LC => L1TUNNEL] request information : #%d => CellId(%d), SsbIndex(%d), TimingOffset(%d -> %d), nrTimeOffset(%d), RxBeamIndex(0x%x),  half_frame_num(%d)
Line 24179: [L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_4G_MEAS_CNF(measMode:%d, isEnable:%d, curMode:%d, curIratMode:%d)
Line 24185: [L1LC] L2N result early before Gap Start, so call HALSC_ForcedDisableGapIntr(HALSC_GapStartFlag: %d)
Line 24189: [L1LC] L2N meas cnf was sent in between inner GAP, pending until gapEnd (HALSC_GapStartFlag: %d)
Line 24227: [L1LC] SrchResult(NR) : SsbArfcn(%d), NumOfCell(%d), TimerExpired(%d), AgcGain(%6d)
Line 24244: [L1LC] SrchResult(NR) : CellId(%d), TimingOffset(%d), Corr(%d), FreqOffset(%d), RxBeamIndex(0x%x)
Line 24292: [L1LC] MeasResult(NR) : Band(%d), SsbArfcn(%d), NumOfCell(%d), TimerExpired(%d), AgcGain(%6d)
Line 24335: [L1LC] MeasResult(NR) : CellId(%d), SsbIndex(%d), TimingOffset(%d), RxBeamIndex(0x%x), half_frame_num(%d)
Line 24343: [L1LC] MeasResult(NR) : Rssi(%d), Rsrp(%d) Rsrq(%d), Sinr(%d)
Line 24413: [L1LC] SFTDInfo LTE(mid): sfn(%d, %d, %d), offset(%d), NR: sfn(%d), offset(%d) Diff: sfn(%d) DiffOffset(%d)
Line 24437: [L1LC] SFTDInfo LTE: sfn(%d, %d, %d), offset(%d), NR: sfn(%d), offset(%d) Diff: sfn(%d) offset(%d)
Line 24450: [L1LC] PbchResult : 0(%d), 1(%d), 2(%d), 3(%d), 4(%d), 5(%d), 63(%d)
Line 24461: [L1LC] PbchResult : Result(%d), SsbArfcn(%d), Period(%d), CellId(%d), SsbIndex(%d), Scs(%d), kSsb(%d)
Line 24467: [L1LC] Unknown measMode:%d
Line 24483: [L1LC] Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 24493: [L1LC] Receive NR Meas CNF in NR Suspend or Resume state or None State. gL1LC_IratNrMeasState = %d, gL1LC_MeasStopCnfPending = %d
Line 24538: [L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_NR_MEASSTOP_IND
Line 24543: Cannot Allocate Message buffer
Line 24600: [HAL => L1LC] Decode HAL_L1LC_MEAS_START_IND msg
Line 24607: start intra_meas,intra_sync ongoing 
Line 24611: Already current measmode(%d) ongoing
Line 24616: Measurement is ongoing. Do not start the pending meas
Line 24625: Irat Measurement is ongoing(mode:%d). Do not start other Irat meas(mode:%d)
Line 24646: [HAL => L1LC] Decode HAL_L1LC_PROC_STORED_MSG_IND msg
Line 24670: [HAL => L1LC] Decode HAL_L1LC_NR_RESOURCE_FEAS_IND msg
Line 24687: [HAL => L1LC] Decode HAL_L1LC_DYNAMIC_QS_CONTROL_IND msg (%d)
Line 24710: [L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_AIT_INFO_REQ(%d, %d, %d, %d, %d)
Line 24739: [RRM => L1LC] Decode L1LC_DecodeDsdsSrLteStatusInd (SRLTE [%d])--Cnt(%d) 
Line 24763: [4G_DRDS] pLTE_OHE->eDV_Enable(%d -> %d) 
Line 24767: [4G_DRDS] Change in SrLteStatusHistory (%d -> %d) 
Line 24771: [4G_DRDS] LTE Suspended state. Do nothing more
Line 24833:  L1LC_ProcFixedRxModeSet (CC%d rx_mode: %d)
Line 24839: SCC not activated, TDP state CC%d: %d
Line 24851:  Update default RX mode 0 (Dynamic mode))
Line 24876: [NRDS] This is from this function
Line 24887: Cannot Allocate Message buffer
Line 24893: [L1LC => L1TUNNEL] Send L1TUNNEL_L1LC_NR_AUTO_PAUSE_UPDATE_IND (AutoPauseTime:%u)
Line 24915: ST%d [L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_SLEEP_IND (IsStart %d)
Line 24935: ST%d [L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_WAKEUP_IND (IsStart %d)
Line 24997: [HAL => L1LC] Decode HAL_L1LC_THERMAL_RESTRICT_CNF (result : %d, level: %d, release: %d)
Line 25054: [L1LC => L1LC] Send L1LC_INT_CHECK_WAKEUP_AVAILABLE_TIMER_EXPIRED
Line 25059: Cannot Allocate Message buffer
Line 25169: [MTPL][SAR][MMC => L1LC] Process MMC_LTEL1_REGISTER_L1_INFO_REQ (request_type:%d)
Line 25186: [MTPL][L1INFO][ST%d] gHal_TxPwrInfoInd(%d) gHal_MtplInfoInd(%d) gHal_TapcMode(%d) gHal_TxPwrThreshold(%d) gHal_ClaitInfoInd(%d)
Line 25188: [MTPL][L1INFO][ST%d] TxRbInfoInd(%d) TxRbThreshold(%d) BlerInfoInd(%d) UlBlerThreshold(%d) DlBlerThreshold(%d)
Line 25214: [AS] Antenna config %d given by MMC_LTEL1_SET_MTPL_INFO_REQ
Line 25249: [MMC => L1LC] Process MMC_LTEL1_REGISTER_L1_INFO_REQ (req_type:0x%x)
Line 25276: [MMC => L1LC] Decode MMC_LTEL1_SET_L1_INFO_REQ (RSI %d MOS %d HSI %d Antenna Config %d) in CurUeState(%d)
Line 25305: (HSI %d) Ignore HSI from MMC_LTEL1_SET_L1_INFO_REQ and apply previous gHal_Hsi(%x)
Line 25321: (RSI %d) Ignore RSI/MOS from MMC_LTEL1_SET_L1_INFO_REQ and apply previous gHal_RsiMos(%x)
Line 25326: [MMC => L1LC] Don't Process MMC_LTEL1_SET_L1_INFO_REQ in UeState(%d), Save parameters
Line 25342: Antenna config %d is out of range(0-4)
Line 25348: [AS] Fixed ANT due to TxAntSwitchFixedAntMode(%d) or AsOption(%d): Don't follow the Antenna config %d
Line 25389: [L1LC => MMC] Send LTEL1_MMC_REGISTER_L1_INFO_CNF
Line 25394: Cannot Allocate Message buffer
Line 25424: [L1LC => MMC] Send LTEL1_MMC_SET_L1_INFO_CNF (antenna_config:%d)
Line 25429: Cannot Allocate Message buffer
Line 25464: [L1LC => MMC] Send LTEL1_MMC_MTPL_INFO_IND
Line 25469: Cannot Allocate Message buffer
Line 25521: [L1LC => MMC] Send LTEL1_MMC_BLER_INFO_IND
Line 25526: Cannot Allocate Message buffer
Line 25566: [L1LC => MMC] Send LTEL1_MMC_TX_RB_INFO_IND
Line 25578: Cannot Allocate Message buffer
Line 25618: [L1LC => MMC] Send LTEL1_MMC_TX_PWR_INFO_IND
Line 25623: Cannot Allocate Message buffer
Line 25664: [L1LC => MMC] Send LTEL1_MMC_TEST_MAX_TX_PWR_CNF(tx_pwr:%d)
Line 25669: Cannot Allocate Message buffer
Line 25700: [L1LC => MMC] Send LTEL1_MMC_TEST_ANT_SELECTION_CNF
Line 25705: Cannot Allocate Message buffer
Line 25730: [L1LC => MMC] Send LTEL1_MMC_TEST_MAX_TX_PWR_START_CNF(Status:%d / StackId:%d)
Line 25735: Cannot Allocate Message buffer
Line 25755: [L1LC => MMC] Send LTEL1_MMC_TEST_MAX_TX_PWR_FINISH_CNF(Status:%d / StackId:%d)
Line 25760: Cannot Allocate Message buffer
Line 25826: [MMC => L1LC][TX_API] Decode MMC_LTEL1_TEST_MAX_TX_PWR_REQ (ST%d TargetRat %d) in CurUeState(%d)
Line 25830: [TX_API]MMC_LTEL1_TEST_MAX_TX_PWR_REQ should be sent after START_REQ(TxPcApiStarted:%d)
Line 25838: [TX_API] There's problem with target_rat(%d)/mcg_band(%d) in MMC_LTEL1_TEST_MAX_TX_PWR_REQ
Line 25871: [TX_API]TestTxPwrReqCmd: ENDC - Abnormal NR Band[%d]
Line 25898: [TX_API] Requested MaxTxPwr Info: band(LTE:%d/NR:%d) endc(%d) powerclass(%d) as_config(%d)
Line 25903: [TX_API] Module_control_list (mtpl%d / tas%d / temperature%d / dps%d / mcg_ul_mimo%d / scg_ul_mimo%d / network_control%d)
Line 25914: [TX_API] Update TAS info (tas_mode:%d / tx_duty_cycle:%d / remaining_sar_ratio:%d)
Line 25929: [TX_API] Update MTPL info (rsi:%d / mos:%d/ pLimitCheck:%d / resume_type:%d /nr_band:%d -> PresetMtplRsiMos:%x %x)
Line 25938: [TX_API] Update Network info (p_Max:%d / spectrumEmission:%d)
Line 25958: [TX_API] Update miscellaneous info (temperature:%d / MCC:%d / fake_mcg_power:%d)
Line 25984: [MMC => L1LC] Decode MMC_LTEL1_TEST_ANT_SELECTION_REQ (ST%d TargetRat %d) in CurUeState(%d)
Line 25994: [MMC => L1LC] Decode MMC_LTEL1_TEST_MAX_TX_PWR_START_REQ (ST%d TargetRat %d) in CurUeState(%d)
Line 26004: [MMC => L1LC] Decode MMC_LTEL1_TEST_MAX_TX_PWR_FINISH_REQ (ST%d TargetRat %d) in CurUeState(%d)
Line 26661: [L1LC => MMC] Send LTEL1_MMC_CLAIT_INFO_IND (ST%d)
Line 26666: Cannot Allocate Message buffer
Line 26684: LTEL1_MMC_CLAIT_INFO_IND sent(num_of_ant%d/ait_type%d/ant_num%d/band%d/sbi%d/index%d)
Line 26705: [L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_BAND_LIST_UPDATE_IND
Line 26727: [L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_LTE_BAND_LIST_UPDATE_IND
Line 26732: Cannot Allocate Message buffer
Line 26755: [HAL => L1LC] Decode HAL_L1LC_SYNC_10MS_IND
Line 26859: [L1LC => L1TUNNEL] Decode L1LC_L1TUNNEL_LTE_RSRC_EXCEPTION_IND (%d), IsN2LSrchMeasRrscPending(%d)
Line 26863: RF unavailable >> Do not request the meas/search rsrc
Line 26904: For MMC_LTEL1_LTE_SEARCH_MEASURE_REQ, both Srch and Meas grants are received (%d)
Line 26909: For MMC_LTEL1_LTE_MEASURE_REQ, Meas grant received (%d)
Line 26926: [DS_OPT] Search ongoing => Do not start measure
Line 26931: [DS_OPT] start meas: %d
Line 26937: Invaild Message. Meas/Srch_State (%d)
Line 26953: For MMC_LTEL1_LTE_SEARCH_MEASURE_REQ, both Srch and Meas grants are received (%d)
Line 26958: For MMC_LTEL1_LTE_CELL_SEARCH_REQ, both Srch and Meas grants are received (%d)
Line 26975: [DS_OPT] Measure ongoing => Do not start search
Line 26982: [DS_OPT] Start pended Freq Scan Req
Line 26988: [DS_OPT] Start pended Search Req
Line 26995: [DS_OPT] start srch: %d
Line 27002: Invaild Message. Meas/Srch_State (%d)
Line 27033: Cannot Allocate Message buffer
Line 27045: [L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_RF_REG_IND
Line 27050: [L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_RF_DEREG_IND
Line 27055: [L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_RF_GRANT_REQ [%s][%d]
Line 27060: [L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_EARLY_PAUSE_DONE_IND (%d)
Line 27068: [L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_SADR_MEAS_PAUSE_DONE_CNF
Line 27072: [L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_RF_PAUSE_CNF - RELEASE[%s], Register[%d]
Line 27078: [L1LC => L1TUNNEL] L1TUNNEL_L1LC_LTE_RF_RESUME_CNF
Line 27082: [L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_RF_RELEASE_IND [%s][%d]
Line 27088: [L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_UPDATE_TIME_IND time[%u] eventDuration[%u] isPreviousPagingGranted[%d]
Line 27092: [L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_PSUPDATE_TIME_IND [%d]
Line 27096: [L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_INFO_NTF
Line 27100: [L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_MEAS_GRANT_REQ
Line 27104: [L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_MEAS_RELEASE
Line 27108: [L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_TX_GRANT_REQ
Line 27112: [L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_TX_RELEASE
Line 27116: [L1LC => L1TUNNEL] send L1TUNNEL_L1LC_LTE_TX_CHANGE_DONE_IND
Line 27121: [L1LC => L1TUNNEL] L1TUNNEL_L1LC_LTE_TX_SWITCH_REQ
Line 27124: [L1LC => L1TUNNEL] L1TUNNEL_L1LC_LTE_TX_SWITCH_DONE_IND
Line 27127: [L1LC => L1TUNNEL] L1TUNNEL_L1LC_LTE_TX_GRANT_CONFIRM_IND
Line 27130: Invaild message id (%d)
Line 27168: Cannot Allocate Message buffer
Line 27195: Cannot Allocate Message buffer
Line 27226: [L1TUNNEL => L1LC]: Decode L1LC_L1TUNNEL_LTE_TX_SWITCH_CNF (PS_available:%d/TxOn:%d/ModemPowerOn:%d)
Line 27259: NeedTxConfirm = 0
Line 27283: [HAL => L1LC] Decode HAL_L1LC_CDRX_RESTORE_REQ
Line 27321: L1LC_ForceDeactSCC for cc %d, dl_earfcn %d
Line 27325: CC %d, TDP_STATE %d
Line 27330: Not found activated CC for earfcn(%d)
Line 27457: [L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_4G_NR_PATH_MODI_CNF
Line 27462: Cannot Allocate Message buffer
Line 27488: [L1TUNNEL => L1LC] Decode L1TUNNEL_L1LC_4G_NR_PATH_MODI_REQ
Line 27494: [LTE_PATH] 4gNrPathModiReq : invalid target MxrCC detected CC(%d)
Line 27522: [L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_NR_4G_PATH_MODI_REQ
Line 27527: Cannot Allocate Message buffer
Line 389: ST%d [%s => L1LC] Decode %s(ev= %d, %d) at %s()==
Line 396: ST%d [L1LC => %s] Send %s(ev= %d, %d) at %s()==
Line 439: ST%d DS RSRC_RF(%d)@%s()
Line 415: ST%d EPT time(%u)[us] at %s()==
Line 22862: [SADS] CC%d: earfcn(%d), resv(%d), type(%d), pair_cc(0x%04x), tdp_state(%d), rx_mode(%x)
Line 22883: [SADS] SA CC%d: band(%d), Nr4rxCc(%d)
Line 22894: [SADS] DS_SA_CONFIG type(%d) //0:PCC, 1:SCC, cc_occupied(0x%x)
