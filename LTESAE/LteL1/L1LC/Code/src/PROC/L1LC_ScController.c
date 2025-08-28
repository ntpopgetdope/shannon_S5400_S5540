Line 570: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 625: Dont update NRMeas state,wait for NR Suspend_cnf
Line 657: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 880: [TXSWAP] Need to update NR DacPath(%d -> %d) and gRF_tx_swap(0x%x -> 0x%x) for SUSPEND_NR_TX_PATH
Line 889: [NRDS] request NR to SUSPEND_NR_TX_PATH(Need to update Tx: 0x%x -> 0x%x
Line 901: [L1LC] Tune EARFCN : %d, Freq : %d, band : %d
Line 1016: [L1LC] Unknown SyncMode(%d)
Line 1024: [4GDRDS] Extend gL1LC_DrdsAbnormalCheckTmr (L1LC_SetSyncTimer)
Line 1053: [DS_OPT] NR search is ongoing. Wait response
Line 1107: [MDVFS] RT_DL is already enabled, HALMDVFS isn't set by 1
Line 1125: [L1LC][DCXO][DEBUG] DCXO FREQ OFFET(SCAN): hypoMode(%d)
Line 1140: [L1LC][DCXO][DEBUG] LTE OOS MAX FO RANGE 
Line 1166: [L1LC][DCXO][DEBUG] DCXO FREQ OFFET(SCAN): freq_offset_rangem(%d, %dHz), dcxo_current_freq_offset_idx(%d), dcxo_freq_offset_apm(%d), dcxo_freq_offset_step(%dHz), temp(%d)
Line 1233: [L1LC][DCXO][DEBUG] DCXO FREQ OFFET(SCAN): dcxo_freq_offset_range(%dHz), dcxo_current_freq_offset_idx(%d), current_freq_offset_by_temp(%d)
Line 1258: [L1LC][DCXO][DEBUG] DCXO FREQ OFFET(SCAN): idx(%d), energy(%d), dcxo_offset(%d), hypoCnt(%d)
Line 1273: [L1LC][DCXO][DEBUG] DCXO FREQ OFFET(SCAN): dcxo_freq_offset_range(%dHz), dcxo_current_freq_offset_idx(%d), next_freq_offset_by_temp(%d)
Line 1295: [L1LC][DCXO][DEBUG] DCXO FREQ OFFET(SCAN): dcxo_freq_offset_range(%dHz), dcxo_next_freq_offset_idx(%d), calculate_dmxr_freq_offset(%d), AfcPdmOffset(%d->%d)
Line 1334: [L1LC][DCXO][DEBUG] sorted psch list : idx(%d), energy(%d), offset(%d)
Line 1370: [L1LC] RSSISCAN RESULT: BAND(%d),EARFCN(%d),RXMODE(%d),RSSI_MAIN(%d)
Line 1379: [L1LC] RSSISCAN RESULT: BAND(%d),EARFCN(%d),RXMODE(%d),RSSI_SUB(%d)
Line 1390: [L1LC] RSSISCAN RESULT: BAND(%d),EARFCN(%d),RXMODE(%d),RSSI_MAIN(%d),RSSI_SUB(%d)
Line 1505: Invalid SrchMode:%d
Line 1571: SearchConfiguredflag(0x%x)!!!
Line 1578: Search Already Started by another Controller(SearchConfiguredflag:0x%02x)!!!
Line 1608: [MTM: AFC PDM CAL] Skip Sync timer setting
Line 1659: [MDVFS] RT_DL is already enabled, HALMDVFS isn't set by 1
Line 1706: [L1LC][DCXO][DEBUG] DCXO FREQ OFFET(SRCH): HALSC_AfcPdmStored(%d -> %d), dcxo_freq_offset[%d](%dHz), freq(%d), dcxo_freq_offset_apm(%d)
Line 1723: [MTM][DCXOHYPO] freq_offset_range(%d, %dHz), dcxo_freq_offset_step(%dHz)
Line 1726: [MTM][DCXOHYPO] HALSC_AfcPdmStored(%d -> %d), dcxo_freq_offset_apm(%d)
Line 1746: Disable Cdrx as handover is on-going
Line 1776: Invalid pMsg->srchMode:%d
Line 1938: (offset : %d serving_rtg_offset: %d, frame_position:%d)
Line 1971: (offset : %d serving_rtg_offset: %d, frame_position:%d)
Line 1993: L1LC_ProcRepeaterChange
Line 2008: (offset : %d str: %d, cinr:%d)
Line 2019: L1LC_ProcSyncDoneInd(no cell detection)
Line 2024: no cell detection
Line 2035:  SLAM DONE!!!(slam_cnt:%d str:%d)
Line 2045: L1LC_ProcSyncDoneInd(FS offset large)(offset : %d str: %d)
Line 2051:  repeater detection but serving not detected(init serving_m0m1_pwr:%d)
Line 2057:  repeater detection but srch_offset different(rpt_srch_diff:%d)
Line 2062:  repeater detection but repeater pwr lower(rpt_m0m1_pwr:%d serving_m0m1_pwr:%d)
Line 2067:  repeater detection but rpt_rtg_offset more than 4400(rpt_rtg_offset:%d)
Line 2073:  repeater detection(offset:%d rpt_detect_cnt:%d)(rpt_srch_diff:%d)(rpt_m0m1_pwr:%d serving_m0m1_pwr:%d)
Line 2084:  SLAM START!!!(rpt_detect_cnt:%d)(cinr:%d)(slam_time_offset:%d rpt_srch_pos:%d)
Line 2086: (offset:%d str:%d rpt_srch_pos:%d)(slam_cnt:%d)(repeater detection)
Line 2097: L1LC_ProcSyncDoneInd(FS offset small)(str: %d)
Line 2099: (offset:%d str:%d rpt_srch_pos:%d)(slam_cnt:%d)(repeater no detection)
Line 2110: L1LC_ProcSyncDoneInd(serving cell is not detected)
Line 2112: repeater&serving cell no detection
Line 2172: [L1LC][DEBUG] DCXO FREQ OFFET: srch_FO(%d), AfcPdmOffset(%d->%d), HALSC_AfcPdmStored(%d)
Line 2213: Invalid gL1LC_MeasInfo.curMode(%d)
Line 2237: Invalid syncResult.Num(%d)
Line 2292: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 2302: syncResult[%d] Num(%d)(%d)
Line 2310: measMode:%d
Line 2328: [PWR_OPT] LTERRM_MEASMODE_INTRA_SYNC triggered -> Do not off RF Rx path
Line 2402: Change gL1LC_MeasInfo.curMode (%d)
Line 2496: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 2526: L1LC_ProcSyncDone_SrchMode (syncMode:%d,pSyncResult:%d isDummySync:%d, stackID:%d)
Line 2702: L1LC_ProcSyncDone_MeasMode (syncMode:%d,pSyncResult:%d isDummySync:%d, stackID:%d)
Line 2707: SRCH DIV : ConnSrchCnt:%d
Line 2890: L1LC_ProcSyncDone_Default (syncMode:%d,pSyncResult:%d isDummySync:%d, stackID:%d)
Line 2894: Invalid mode(gL1LC_SrchMode:%d, gL1LC_MeasInfo.curMode:%d, HALSC_GetSyncMode()(%d)
Line 2935: SearchConfiguredflag(0x%02x)!!!
Line 2945: [RSTD] Ignore the Dummy Sync Results
Line 2956: search_result is NULL
Line 2962: Dummy Sync
Line 2972: [MTM][DCXOHYPO] DcxoGetEnableHypoDCXO (%d), m0_m1_pwr (%d), Cell_Id (%d)
Line 2975: [MTM][DCXOHYPO] LSYNC failed => Change Mixer PDM turn by turn
Line 3000: [MTM][DCXOHYPO] current_freq_offset_idx(%d), calculate_dmxr_freq_offset(%d), AfcPdmOffset(%d->%d)
Line 3015: [MTM: AFC PDM CAL] Skip ProcSyncDoneInd
Line 3032: [SyncDone] CheckSrchFoValidity(%d)
Line 3105: ProcSyncTimerExpired - gL1LC_SrchMode(%d), HALSC_SyncMode(%d), curMode(%d)
Line 3125: SearchConfiguredflag(0x%02x)!!!
Line 3134: L1LC_ProcSyncTimerExpired(Stop FS)
Line 3305: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 3311: Invalid gL1LC_MeasInfo.curMode(%d)
Line 3328: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 3516: Invalid mode(gL1LC_SrchMode:%d, gL1LC_MeasInfo.curMode:%d, HALSC_GetSyncMode()(%d)
Line 3558: RF unavailable. So, ignore CheckSaMeasureTimer
Line 3564: Ignore CheckSaMeasureTimer (state: %d)
Line 3572: Ignore CheckSaMeasureTimer (curMode: %d, curIratMode: %d)
Line 3622: [4G_DRDS] Avoid Retrigger wakeup as Saved message is HAL_L1LC_WAKEUP_START_IND
Line 3626: [4G_DRDS] Retrigger WakeupIntr which was ignored!
Line 3633: [4G_DRDS] Wakeup intr still running, retrigger after wakeupintr expiry
Line 3922: L1LC_TriggerMeas (enable: %d)
Line 3927: MeasureConfiguredflag(0x%02x)!!!
Line 3986: measCnt is 0 (earfcn:%d, numOfCell:%d)
Line 4012: L1LC_TriggerIratStopToTgtRat: gL1LC_IratNrMeasState(%d), gL1LC_IratUmtsMeasState(%d), gL1LC_IratGsmMeasState(%d), gL1LC_IratGsmVerifyState(%d)
Line 4052: [L1LC] L1LC_TriggerIratStopToTgtRat : IratNrMeasState(%d)
Line 4060: L1LC_TriggerIratStopToTgtRat: rf_path is wrong(%d)
Line 4129: Irat measure is ongoing(%d), prepared(%d) (IratMeasState: %d, %d, %d)
Line 4138: UMTS measure stop!
Line 4144: GSM measure stop!
Line 4165: Measure_Stop_Req is pending, wait measure result from other RAT
Line 4171: During Inter GAP, IratMeasState (%d, %d, %d)
Line 4202: L1LC_StopAll
Line 4224: L1LC_StopAll(Stop FS)
Line 4236: Stop gL1LC_CheckLastPagingIntrTmr if it is still running.
Line 4247: [DRX, 4GDS] AllStop case (reset IsDuringGsmMeas:%d)
Line 4321: Invalid NeighCellConfig(%d)
Line 4361: Meas Coscheduling possible with NR, IsCoschedulePossible= %d
Line 4412: L1LC_CheckNrRscFlag: mode(%d), is_allowed(%d), MeasureConfiguredflag(0x%x), SearchConfiguredflag(0x%x)
Line 4489: Invalid pMeasElem->mode(%d)
Line 4516: [PWR_OPT] SINR value (%d), SavedSINR(%d)
Line 4535: Invalid pMeasElem->mode(%d)
Line 4625: L1LC_StartMeasElemInIdleDrx: Start IntraMeas
Line 4662: L1LC_StartMeasElemInConnNormal gL1LC_MeasInfo.curMode(%d) gL1LC_MeasInfo.measElem[LTERRM_MEASMODE_INTRA_MEAS].isEnable(%d)
Line 4663: L1LC_StartMeasElemInConnNormal gL1LC_MeasInfo.measElem[LTERRM_MEASMODE_INTRA_MEAS].earfcn(%d), pMeasElem->earfcn(%d)
Line 4678: Pending IntraMeas till next trigger
Line 4923: Invalid pMeasElem->mode(%d)
Line 4957: L1LC_StartMeasElemInConnNormal gL1LC_MeasInfo.curMode(%d) gL1LC_MeasInfo.measElem[LTERRM_MEASMODE_INTRA_MEAS].isEnable(%d)
Line 4958: L1LC_StartMeasElemInConnNormal gL1LC_MeasInfo.measElem[LTERRM_MEASMODE_INTRA_MEAS].earfcn(%d), pMeasElem->earfcn(%d)
Line 4965: L1LC_StartMeasElemInConnDrx: Start IntraMeas
Line 4973: L1LC_StartMeasElemInConnDrx: MEASMODE not changed to LTERRM_MEASMODE_INTRA_BOTH
Line 4991: [PWR_OPT] SINR value (%d), SavedSINR (%d)
Line 5043: Pending IntraMeas till next trigger
Line 5050: IntraMeas was already started!
Line 5179: L1LC_StartMeasElemInConnDrx: MEASMODE not changed to LTERRM_MEASMODE_INTER_BOTH
Line 5233: L1LC_StartMeasElemInConnDrx: MEASMODE not changed to LTERRM_MEASMODE_INTER_BOTH
Line 5280: L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
Line 5349: Inter sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 5360: L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
Line 5402: L1LC_StartMeasElemInConnDrx: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
Line 5445: LTERRM_MEASMODE_UMTS_CGI_CELL_SEARCH is postponed because UMTS modem is ongoing!
Line 5490: Invalid pMeasElem->mode(%d)
Line 5609: L1LC_StartMeasElemInConnNormal: MEASMODE not changed to LTERRM_MEASMODE_INTRA_BOTH
Line 5631: L1LC_StartMeasElemInConnNormal gL1LC_MeasInfo.curMode(%d) gL1LC_MeasInfo.measElem[LTERRM_MEASMODE_INTRA_MEAS].isEnable(%d)
Line 5632: L1LC_StartMeasElemInConnNormal gL1LC_MeasInfo.measElem[LTERRM_MEASMODE_INTRA_MEAS].earfcn(%d), pMeasElem->earfcn(%d)
Line 5639: Start IntraMeas after STR stable duration
Line 5655: L1LC_StartMeasElemInConnNormal: MEASMODE not changed to LTERRM_MEASMODE_INTRA_BOTH
Line 5672: [PWR_OPT] SINR value (%d), SavedSINR (%d)
Line 5703: Do not start IntraMeas during STR stable duration
Line 5708: IntraMeas was already started!
Line 5714: L1LC_StartMeasElemInConnNormal: MEASMODE not changed to LTERRM_MEASMODE_INTRA_BOTH
Line 5857: L1LC_StartMeasElemInConnNormal: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
Line 5932: Start IntraMeas after STR stable duration
Line 5941: L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_INTRA_BOTH
Line 5957: [PWR_OPT] SINR value (%d), SavedSINR (%d)
Line 5990: nextGapBoundary(%d) is small. wait next time
Line 6021: gL1LC_MeasInfo.curMode(%d) is invalid!
Line 6029: Do not start IntraMeas during STR stable duration
Line 6035: L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_INTRA_BOTH
Line 6038: IntraMeas was already started!
Line 6094: Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 6119: L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_INTRA_BOTH
Line 6162: Inter-freq and IRAT can not be triggered concurrently, curMode(%d), curIratMode(%d), SearchConfiguredflag(0x%x), MeasureConfiguredflag(0x%x)
Line 6214: L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_INTER_BOTH
Line 6260: Inter-freq and IRAT can not be triggered concurrently, curMode(%d), curIratMode(%d), SearchConfiguredflag(0x%x), MeasureConfiguredflag(0x%x)
Line 6287: Inter sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 6310: L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_INTER_BOTH
Line 6364: L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
Line 6377: Irat meas is running, so SCell sync is delayed (curIratMode:%d)
Line 6404: L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
Line 6466: Inter sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 6477: L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
Line 6490: Irat meas is running, so SCell meas is delayed (curIratMode:%d)
Line 6537: Scell sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 6554: L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
Line 6699: [L2N_GAP] More margin needed inorder to trigger a L2N GAP, gapBoundary(%d)
Line 6749: Invalid pMeasElem->mode(%d)
Line 6844: RF available FALSE. So, NR can search/meas
Line 6865: LTE Inter sync/Meas[%d] can be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 6874: [SADS] LTE Inter sync/Meas cannot be scheduled even if nearby GAP. Due to SadrMeasState()= %d
Line 6986: [DEBUG] L1LC_ReleaseSearchMeasureResource: Search resource is under use by LTE for IRAT, Do not give resource to NR, SearchConfiguredflag(0x%x)
Line 7021: [DEBUG] L1LC_ReleaseSearchMeasureResource: Measure resource is under use by LTE for IRAT, Do not give resource to NR, MeasureConfiguredflag(0x%x)
Line 7080: [DEBUG] L1LC_ReleaseSearchMeasureResource: LTE search ongoing, Current Mode = %d
Line 7103: [DEBUG] L1LC_ReleaseSearchMeasureResource: LTE Meas ongoing, Current Mode = %d
Line 7116: [DEBUG] L1LC_ReleaseSearchMeasureResource: mode(%d), resource(%d), status(SearchConfiguredflag:0x%02x, MeasureConfiguredflag:0x%02x)
Line 7178: Add MeasElem(InQueue) (numOfCell#%d => measMode(%d) earfcn(%d) cell_Id(%d) framePos from Serving Cell Timing(%d))
Line 7198: Add MeasElem(InQueue) (numOfCell#%d => ssb_index(%d), timing_offset(%d), rxbeam_index(0x%x)), half_frame_num(%d)
Line 7234: Add MeasElem(InQueue) (measMode(%d), subcarrierSpacing(%d), periodicity(%d), smtc.duration(%d), smtc.offset(%d), smtc_included(%d))
Line 7237: Add MeasElem(InQueue) (NumSsbToMeasure(%d), SsbToMeasure(0x%x, 0x%x), measNrCnt(%d), measNrWrPtr(%d), measNrRdPtr(%d))
Line 7275: Add MeasElem(DeQueue) (measMode:%d, earfcn:%d, numOfCell:%d, gL1LC_IratNrMeasState:%d, measNrCnt:%d, measNrWrPtr:%d, measNrRdPtr:%d)
Line 7285: Add MeasElem(DeQueue) (measMode:%d, earfcn:%d, numOfCell:%d, gL1LC_IratNrMeasState:%d, measNrCnt:%d, measNrWrPtr:%d, measNrRdPtr:%d)
Line 7296: Add MeasElem(DeQueue) (measMode:%d, earfcn:%d, numOfCell:%d, gL1LC_IratNrMeasState:%d, measNrCnt:%d, measNrWrPtr:%d, measNrRdPtr:%d)
Line 7338: Update MeasElem[%d] (measMode:%d, earfcn:%d, rxbeam_index:0x%x)
Line 7375: Delete MeasElem[%d] (measMode:%d, earfcn:%d, numOfCell:%d)
Line 7408: measNrElem[%d] (isEnable:%d, mode:%d, earfcn:%d, rxbeam_index:0x%x)
Line 7460: During Measure element setting.
Line 7484: [DEBUG] L1LC_GetNextMeasElemFromResourceUpdateInd: DR-DSDS is active, hence SCG measurement is started
Line 7696: [DEBUG] L1LC_GetNextMeasElemFromResourceUpdateInd (mode:%d, numOfCell:%d, earfcn:%d)
Line 7733: [DEBUG] L1LC_GetNextMeasElemFromResourceUpdateInd IRAT(mode:%d, numOfCell:%d, earfcn:%d)
Line 7759: L1LC_GetNextMeasElemFromNrSCell - NrSCellPrio(%d) [0-NR, 1-SCell], gL1LC_WaitingIratMeasDone(%d) gL1LC_MeasSuspendForTxFlag(%d)
Line 7843: Gap is not finished (prevMeasMode:%d), curIratMode(%d)
Line 7859: Pick gap based L2N element from Meas_Done: isGap(%d), gL1LC_IratNrMeasState (%d), nextGapBoundary(%d)
Line 7868: NR IRAT measure can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 7882: IRAT measuure is ongoing, Do not start any measurement (prevMeasMode:%d, curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 8003: Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 8022: NR IRAT measure can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 8041: Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 8053: nextGapBoundary(%d) is small.. (curMode:%d, curIratMode:%d, GapStartFlag:%d)
Line 8065: nextGapBoundary(%d) is small.. (numOfCell:%d, curMode:%d, curIratMode:%d, GapStartFlag:%d)
Line 8174: Inter Meas is suspended (MeasMode:%d, gL1LC_WaitingInterMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 8193: Irat Meas is suspended (MeasMode:%d, gL1LC_WaitingIratMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 8208: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 8238: Gap is not finished (prevMeasMode:%d), curIratMode(%d)
Line 8249: Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 8293: measNrElem Queue (Debug) measConfig:%d, curIratMode:%d, prevMeasMode:%d, gL1LC_IratNrMeasState:%d, measNrCnt:%d, measNrWrPtr:%d, measNrRdPtr:%d)
Line 8360: During Measure element setting.
Line 8374: L1LC_GetNextMeasElemFromMeasDone(DEBUG) (prevMeasMode(%d), curMode(%d), measNrCnt(%d), measNrWrPtr(%d), measNrRdPtr(%d))
Line 8399: [DEBUG] L1LC_GetNextMeasElemFromMeasDone (mode:%d, numOfCell:%d, earfcn:%d)
Line 8408: [4G_DRDS] SCG cannot process next measelem (measmode : %d, PagingState : %d) RF will be requested at paging done
Line 8412: [4G_DRDS] SCG cannot process next measelem (measmode : %d, PagingState : %d) Request RF first
Line 8449: During Measure element setting.
Line 8462: Irat Meas is suspended (gL1LC_WaitingIratMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 8475: (gL1LC_IratUmtsMeasState(%d)
Line 8484: (L1LC_GetNextIratMeasElemFromInterSyncDone.PAUSE REQ pending. Do not start IRAT simultaneous process 
Line 8490: (GAP Intr was already set. Don't do SIMULTANEOUS PROCESS. (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 8493: IRAT SIMULTANEOUS PROCESS is possible(curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 8508: Gap is not finished (prevMeasMode:%d), curIratMode(%d)
Line 8536: NR IRAT measure can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 8578: During Measure element setting.
Line 8599: Inter Meas is suspended (gL1LC_WaitingInterMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 8623: (L1LC_GetNextMeasElemFromGapStart.PAUSE REQ pending. Do not start IRAT simultaneous process 
Line 8629: (GAP Intr was already set. Don't do SIMULTANEOUS PROCESS. (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 8633: IRAT SIMULTANEOUS PROCESS is possible(curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 8643: Inter sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 8671: NR IRAT measure can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 8700: Inter sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 8729: SCell sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 8789: [SADS] SA DR Meas State = %d. So, other SADR meas should wait saved SADR meas done.
Line 8818: During Measure element setting.
Line 8840: Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 8859: NR IRAT measure can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 8880: Scell sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 8920: During Measure element setting or Scell Sync Ongoing (curMode %d).
Line 8933: Irat Meas is suspended (gL1LC_WaitingIratMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 8946: (gL1LC_IratUmtsMeasState(%d)
Line 8955: (L1LC_GetNextIratMeasElemFromGapEnd.PAUSE REQ pending. Do not start IRAT simultaneous process 
Line 8961: (GAP Intr was already set. Don't do SIMULTANEOUS PROCESS. (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 8965: IRAT SIMULTANEOUS PROCESS is possible(curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 8984: Inter Synch is running (curMode:%d, curIratMode:%d)
Line 9014: NR IRAT measure can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 9049: During Measure element setting.
Line 9062: Irat Meas is suspended (gL1LC_WaitingIratMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 9127: During Measure element setting.
Line 9172: L1LC_GetElemFromMeasReq (measConfig : %d)
Line 9176: IRAT Measure/Sync is running (curMode:%d, curIratMode:%d, MeasConfig: %d)
Line 9194: nextDmtcBoundary not checked (meas_elem : %d, numOfCell:%d, curMode:%d, curIratMode:%d)
Line 9227: Inter Meas is suspended (MeasMode:%d, gL1LC_WaitingInterMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 9237: Irat Meas is suspended (MeasMode:%d, gL1LC_WaitingIratMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 9252: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 9323: nextDmtcBoundary not checked (meas_elem : %d, numOfCell:%d, curMode:%d, curIratMode:%d)
Line 9330: Scell sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 9337: NR wakeup or sleep ongoing. So, can't start scell measurement with GAP
Line 9342: Scell measurement can be done over gap. So it is treated as Inter freq (meas_elem : %d, numOfCell:%d, curMode:%d, curIratMode:%d, using Gap: %d)
Line 9364: nextGapBoundary(%d) is small.. (curMode:%d, curIratMode:%d)
Line 9376: nextGapBoundary(%d) is small.. (numOfCell:%d, curMode:%d, curIratMode:%d)
Line 9410: Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 9429: nextGapBoundary(%d) is small.. (curMode:%d, curIratMode:%d, GapStartFlag:%d)
Line 9440: nextGapBoundary(%d) is small.. (numOfCell:%d, curMode:%d, curIratMode:%d, GapStartFlag:%d)
Line 9475: NR IRAT measure can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 9513: L1LC_GetNextElemFromMeasReq_ConfigGap (nextGapBoundary : %d)
Line 9626: Inter Meas is suspended (gL1LC_WaitingInterMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 9638: (gL1LC_IratUmtsMeasState(%d)
Line 9647: (L1LC_GetNextMeasElemFromMeasReq.PAUSE REQ pending. Do not start IRAT simultaneous process 
Line 9653: (GAP Intr was already set. Don't do SIMULTANEOUS PROCESS. (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 9657: IRAT SIMULTANEOUS PROCESS is possible(curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 9669: Inter sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 9685: [RSTD] Gap Available Immediately (curMode:%d, earfcn:%d), pL1RstdDb->MeasTriggerOffset[%d]
Line 9768: Invalid gL1LC_MeasInfo.config(%d)
Line 9792: L1LC_RestorePrevMeasConfig
Line 9915: During Measure element setting.
Line 9940: [PWR_OPT] Current:%d, Intra_meas:Enabled, Is_Drx_Wakeup_ongoing:%d
Line 9944: No need to trigger next measurement because some measurement is ongoing (not a wakeup case), curMode(%d)
Line 9952: (L1LC_GetNextMeasElemFromMeasReq) Meas skip due to Short mode 
Line 9975: [PWR_OPT] Current:%d, Next:%d, Intra_meas:Enabled, Is_Drx_Wakeup_ongoing:%d
Line 9979: [PWR_OPT] No need to trigger next measurement because some measurement is ongoing (not a wakeup case)
Line 9990: [PWR_OPT] Next measure element(%d): INTRA_MEAS(9), INTRA_SYNC(8) (Wakeup case)
Line 9995: [PWR_OPT] No need to trigger another measurement(%d), except for INTRA_MEAS and INTRA_SYNC (Wakeup case). Set IsMeasReqPending TRUE
Line 10010: measNrElem Queue (Debug) measConfig:%d, curIratMode:%d, gL1LC_IratNrMeasState:%d, measNrCnt:%d, measNrWrPtr:%d, measNrRdPtr:%d)
Line 10053: L1LC_IsConflictPCHGap - Paging is (%d)ms before Gap
Line 10061: L1LC_IsConflictPCHGap - Gap is (%d)ms before Paging
Line 10067: L1LC_IsConflictPCHGap invalid check - GapEnable(%d) UeState(%d)
Line 10075: [DRX] Paging frame adjustment - new PF(%d) prev PF(%d)
Line 10114: RF is unavailable. Do not start L1LC_StartMeasElem
Line 10120: Waiting MEASURE GRANT. So, will perform again after MEASURE GRANT.
Line 10143: Measurement should wait for 2.8 ms after eDRDS end.
Line 10193: Gap is onoging or There are no measelem
Line 10200: [cDRX pre-Meas] CheckFeasibility is FALSE. Skip pre-Meas
Line 10208: [SADR] SADR Measure State (%d). Don't disable Meas Dsds Mask
Line 10216: [SADR] SADR Measure State (%d). But, can't start other reason
Line 10219: [SADR] NR not suspended yet(IratNrMeasState:%d). So, can't release measure resource.
Line 10228: [SADR] Other measure(%d) is ongoing. So, can't start this measure (%d) and skip measure release
Line 10237: [DS_OPT] Srch (%d)/Meas (%d) State. Don't disable Meas Dsds Mask
Line 10264: Set IsMeasReqPending = TRUE as CheckFeasibility failed, curMode(%d), curIratMode(%d), SearchConfiguredflag(0x%x), MeasureConfiguredflag(0x%x)
Line 10278: L1LC_StartMeasElem(measConfig:%d, mode:%d, measCnt:%d, nextMeasIndex:%d, SearchConfiguredflag:0x%x, MeasureConfiguredflag:0x%x)
Line 10284: L1LC_StartMeasElem => Skip to start NR measurement & return(measmode:%d)
Line 10314: Invalid gL1LC_MeasInfo.config(%d)
Line 10355: Release search & measure resource due to NR
Line 10516: Check Release search & measure >> curMode(%d) curIratMode(%d)  IsSearchNeed(%d) IsMeasureNeed(%d)
Line 10542: [4G_DRDS] (Check_Feasibility) During 4G_DRDS(eDV_active : %d, eDV_available : %d)
Line 10553: [4G_DRDS] (Check_Feasibility) During 4G_DRDS, MCG can't start meas!
Line 10560: [4G_DRDS] (Check_Feasibility) Meas (%d) of MCG Stack is not finished yet!!
Line 10565: [4G_DRDS] (Check_Feasibility) start intra meas! 
Line 10576: [4G_DRDS] (Check_Feasibility) Waiting for pagingrcvintr, SCG can't start non-intra meas!
Line 10624: [SADS] gap not configured. cannot do inter sync/meas
Line 10639: [SADS] SRL1RC sent MEASURE_PAUSE_REQ. So, don't Measure_Req
Line 10647: [SADS] Get_CA_Support to check 4rx release is needed for inter meas
Line 10651: [SADS] 4rx release is needed for inter meas
Line 10666: [SADS] SADR measure (%d)
Line 10670: [SADS] Can't this meas mode(earfcn: %d) during SADR
Line 10678: [SADS] Wait other measurement (%d) done. So, pending (%d) for SADR
Line 10684: [SADS] SA DR Meas State = %d. So, wait SADR meas response.
Line 10690: [SADS] mode (%d), can start measure
Line 10723: [LTE_DSDS] (Check_Feasibility)Initial Search/ measure hence not doing pause even Early timer expired
Line 10733: PauseFlag (%d),  IsWaitResponse (%d), pal HandoverStartSig (%d) L1LC HandoverStartSig(%d)
Line 10760: Pauseflag is set as TRUE, but Meas (%d) is ongoing, therefore, do not pend Meas
Line 10765: Do not start Meas (%d) due to PauseFlag (%d)/ IsWaitResponse(%d) 
Line 10795: Do not start Search (%d) due to PauseFlag (%d)/ IsWaitResponse(%d)
Line 10817: IRAT MeasMode(%d) feasibility will be checked later!
Line 10822: Unknown MeasMode(%d)
Line 10837: [LTE L1LC] Pause will be performed as part of EPT expiry handling
Line 10873: mode(%d), MeasureConfiguredflag(0x%x), SearchConfiguredflag(0x%x)
Line 10933: [DRX] Extend gL1LC_DrdsAbnormalCheckTmr + 300ms for NR search resource release
Line 11080: Unknown MeasMode(%d)
Line 11094: Do not start Sync related meas mode(%d) operation due to nearby e.p.t
Line 11103: Do not start Meas related meas mode(%d) operation due to nearby e.p.t
Line 11149: Do not start InterMeas due to nearby paging timing of current stack
Line 11171: Do not start InterSync due to nearby paging timing of current stack
Line 11222: [L1LC] Other stack BplmnDurationTimer should have expired
Line 11229: [L1LC] Other stack BplmnDurationTimer handler will conflict with gap, pending this meas operation
Line 11259: [DS_OPT] L1LC_CheckFeasibiltyWithMeasState = %d
Line 11289: Meas Coscheduling possible with NR, IsCoschedulePossible= %d
Line 11294: [DS_OPT] Other Stack/RAT Meas is ongoing. Wait response
Line 11325: [DS_OPT] Other Stack/RAT SRCH is ongoing. Wait response
Line 11348: [DS_OPT] Other RAT Meas is ongoing. Wait response
Line 11358: [DS_OPT] Other Stack/RAT SRCH is ongoing. Wait response
Line 11367: [DS_OPT] LTE can Meas(%d)/Search(%d)
Line 11447: (L1LC_CheckFeasibility) Don't trigger Intra meas because of gap
Line 11453: (L1LC_CheckFeasibility) Send Dummy Meas Cnf for SCG stack as DRDS is active and NR GAP is ongoing
Line 11469: Delete MeasElem (measMode:%d, earfcn:%d, measNum:%d)
Line 11500: Start MeasElem (%d) after resync
Line 11518: Delete MeasElem(measMode:%d, earfcn:%d, numOfCell:%d)
Line 11524: GAP Stop!! nextGapBoundary > GAP_READY_HW_OFFSET, curMode=%d
Line 11531: [SC] RSTD: PRS Measurement Ongoing, Delay CRS Measurement Request
Line 11539: GAP Stop!! nextGapBoundary > GAP_READY_HW_OFFSET, curMode=%d
Line 11632: Unknown pMeasElem->mode(%d)
Line 11662: [4G_DRDS] %s: - PendingFromMeasReq[%d]!!!
Line 11674: [4G_DRDS] !!! pNextMeasElem is NULL !!!
Line 11704: GapLevelState(%d) AgcOvrAnt0(%d) AgcOvrAnt1(%d) PschPwr0(%d) PschPwr1(%d) PschPwr2(%d), SrchResultValid(%d)
Line 11732: GapLevelState(%d) AgcOvrAnt0(%d) AgcOvrAnt1(%d) PschPwr0(%d) PschPwr1(%d) PschPwr2(%d), SrchResultValid(%d)
Line 11779: L1LC_ProcMeasureReq during power down state
Line 11824: Delete MeasElem (measMode:%d, earfcn:%d, measNum:%d)
Line 11894: Delete MeasElem (measMode:%d, earfcn:%d, measNum:%d)
Line 11943: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 11969: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 11975: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 11994: L1LC_ProcMeasureReq_UpdateMeasElemInfoDefault :Mode(%d), pNewMeasElem (%d)
Line 12030: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 12034: [PWR_OPT] LTERRM_MEASMODE_INTRA_SYNC triggered
Line 12225: [DMTC] Disable Current Measurement for DMTC measure: curr_measMode(%d)
Line 12235: [DMTC] Disable Current Search for DMTC measure: curr_measMode(%d)
Line 12327: Wrong numOfCell:(%d) -> Skip GSM ALL MEAS
Line 12369: Not expected measMode(%d) - Turn off ALL MEAS
Line 12427: gL1LC_DsdsCheckReleaseFeasibilityTmr Timer stop
Line 12449: [TMS] measMode(%d), CheckDualSIM(%d), CheckRegBand(%d), Check4rxBand(%d)
Line 12453: [TMS] ========= [4RX CONFIG] =========
Line 12456: [TMS] ========= [4RX ON] =========
Line 12460: [TMS] ========= ModuleSwapTriggered =========
Line 12472: pCurMeasElem is NULL (pMsg->measMode:%d)
Line 12498: (DEBUG) (pMsg->measMode(%d), gL1LC_MeasInfo.measElem[LTERRM_MEASMODE_NR_SYNC].isEnable(%d), gL1LC_MeasInfo.measElem[LTERRM_MEASMODE_NR_MEAS].isEnable(%d)
Line 12504: Same measInfo is already exist (curMode:%d, curIratMode:%d, measMode:%d, arfcn:%d)
Line 12556: Triggered measure needs [%d ms] - but DRX T[%d ms] duration is not enough
Line 12583: short of Sparetime(%d) - spareTime(:%d, withOffset -%d) < minTrigTime(:%d)
Line 12596: Trigger measMode(%d) for ALL MEAS - spareTime(:%d, withOffset -%d) > minTrigTime(:%d)
Line 12601: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d, dmtc:%d, laa:%d, csi-rs:%d)
Line 12617: [ProcMeasureReq] change BW for gap search BW(%d -> 0)
Line 12647: Add MeasElem (subcarrierSpacing(%d), periodicity(%d), smtc.duration(%d), smtc.offset(%d), smtc_included(%d))
Line 12650: Add MeasElem (NumSsbToMeasure(%d), SsbToMeasure(0x%x, 0x%x))
Line 12684: Add MeasElem (numOfCell#%d => measMode(%d) earfcn(%d) cell_Id(%d) framePos from Serving Cell Timing(%d))
Line 12724: Add MeasElem (numOfCell#%d => ssb_index(%d), timing_offset(%d), rxbeam_index(0x%03x)), half_frame_num(%d)
Line 12727: Add MeasElem (cell_Id(%d), bDropCnt(%d))
Line 12761: L1LC_ProcMeasureReq_CheckIntraInterMeasNumCell (isEnable:%d)
Line 12893: MeasureConfiguredflag(0x%02x)!!!
Line 12906: [TMS] ========= [4RX OFF] =========
Line 12914: [TMS] ========= [Call SWAP RF API] =========
Line 12920: [TMS] ModuleSwapStatus(%d), ModuleSwapResult(%d)
Line 12935: MeasDoneInd - gL1LC_MeasInfo.curMode(%d), curIratMode(%d)
Line 12939: Invalid gL1LC_MeasInfo.curMode(%d)
Line 12947: IRAT Measurement done
Line 13017: ProcMeasTimerExpired - curMode(%d)
Line 13033: MeasureConfiguredflag(0x%02x)!!!
Line 13062: Invalid gL1LC_MeasInfo.curMode(%d)
Line 13172: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 13177: IsDuringMeas is set as FALSE
Line 13185: [MTM] ProcMeasTimerExpired --> Skip sending Measure CNF!!!
Line 13298: ProcIratTimerExpired - curIratMode(%d)
Line 13332: ret_val!!
Line 13355: RF parameter not saved. Skip Return to LTE
Line 13367: [DRX, 4GDS] IratMeasTimer expired case (reset IsDuringGsmMeas:%d)
Line 13489: SCC configuration check for measure using GAP(%d) (earfcn:%d %d)
Line 13494: L1LC_CheckScellFeasibility: remaining Scell need to measure, Scell has been actived
Line 13512: L1LC_CheckScellFeasibility : RF path invalid case
Line 13525: GAP configured, SCC measure using GAP (earfcn:%d)
Line 13552: [L1LC_CheckScellFeasibility] cc(%d), earfcn(%d), scell_rf_support(%d)
Line 13603: Not supported band for SCC(earfcn:%d)
Line 13720: [cDRX pre-Meas] gDrx_isPreIntraMeasReq(0) gDrx_isPreIntraMeasDone(0) gDrx_WaitPreIntraMeasDone(0) gDrx_ignorePreIntraMeas(0)
Line 13771: NCELL PBCH decoding is NOT used ANYMORE!!!
Line 13781: Not found available CC for earfcn(%d)
Line 13817: [DRX] Extend gL1LC_DrdsAbnormalCheckTmr (+L1LC_PBCH_TIMER_V)
Line 13896: [A-GAP]: PBCH of CSG Cell Decoded Successfully
Line 14460: Because of NR gap ProcCellChangeReq is delayed.
Line 14477: Reset GNSS Time(H:%d, R:%d)
Line 14534: [RSTD] No Serving Cell Found in Assistance Data
Line 14549: Handover ul_freq(%d -> %d) time_diff(%d) beforeSFN(%d) afterSFN(%d)
Line 14573: Disable Cdrx as handover is on-going
Line 14617: [RSSISCAN][BPLMN]pHalSc_db->HALSC_CheckSavedAfcValueBplmn: %d)
Line 14621: (L1LC_ProcCellChangeReq)HALSC_SavedAfcValue:%d
Line 14663: Time diff(%d), old SFN(%d) restored SFN(%d)
Line 14703: RSRP(PC) = %d, gHALSC_PathLoss = %d
Line 14792: [RLM] OutSyncCnt (%d)
Line 14805: [LTE L1LC DSDS] RF Unavailable!!!!OOS Indication from L1 Ignored!!!
Line 14822: [RLM] InSyncCnt (%d)
Line 14829: [RLM] RLF Recovery
Line 14851: [RLM] RLMonitorCnt Reset
Line 14867: [RLM] RL result error
Line 15018: [LTE_L1LC] Already conn state. do not try remove DR band
Line 15049: [LTE_L1LC] RFBand of SCG STACK should be removed
Line 15083: Clear isNextPagingConflict
Line 15107: [RLM] N310(%d), N311(%d)
Line 15161: ERROR: curUeState(%d) invalid
Line 15202: [4G_DRDS] Already ConnDR_state: DR_ADDED
Line 15271: L1LC_ProcUeStateNtf(IPC_ACTION_ID_PHY_RX_SIB_PDSCH)Pb:%d
Line 15289: [RLM] N310(%d), N311(%d)
Line 15446: ERROR: Invalid UE State in NTF

Line 15491: L1LC_ProcL1txTxReq: TxReqType(%d), CurUeState(%d),CurMode(%d),CurIratMode(%d)
Line 15527: [IDLE state] curIratMode: IRAT(UMTS/GSM):Pending L1LC_L1TX_TX_CNF
Line 15534: [IDLE state] curMode: LTERRM_MEASMODE_NONE: 
Line 15557: [IDLE state] curMode:INIT Measure, BPLMN Measure or CGI Measure(CurMode:%d)
Line 15581: [IDLE state] curMode:INTRA Freq Srch/meas
Line 15606: [IDLE state] curMode: INTER:Pending L1LC_L1TX_TX_CNF
Line 15624: UnExpected gL1LC_MeasInfo.curMode(%D)
Line 15635: (CONN State) SONANR(CGI ongoing): Pending L1LC_L1TX_TX_CNF
Line 15651: (CONN state) curMode: IRAT(UMTS/GSM):Pending L1LC_L1TX_TX_CNF
Line 15703: (CONN state) RACH (curMode: LTERRM_MEASMODE_NONE)
Line 15726: (CONN state) curMode:NONE or NORMAL:Send L1LC_L1TX_TX_CNF directly without L1LC-RRM interface
Line 15768: (CONN state) curMode:NONE or NORMAL:Send L1LC_L1TX_TX_CNF directly without L1LC-RRM interface
Line 15797: (CONN state) curMode: INTER:Pending L1LC_L1TX_TX_CNF
Line 15817: UnExpected gL1LC_MeasInfo.curMode(%D)
Line 15838: SET gRand_Acc_Tx_Cnf_Nop to TRUE
Line 15846: (CONN State) SONANR(CGI ongoing): Pending L1LC_L1TX_TX_CNF
Line 15853: (TxType:SR) Send L1LC_SendL1txTxCnf to L1TX without any action
Line 15872: Invalid TxReqType:%d
Line 15893: L1LC_ProcL2txTxReq (bIsSidOnly:%d)
Line 15927: L1LC_ProcL2rxRxReq
Line 15980: Invalid Msg(L1TX_L1LC_DONE_IND)from L1TX(TxReqType:%d)
Line 16017: Invalid HalDspCmdInd Msg(%d)
Line 16076: No Need to update SI info again
Line 16087: L1LC_UpdateSibSchedulingInfo: valid[%d] sfn[%d] tti[%d] periodicity[%d] si_bitmap[0x%x -> 0x%x]
Line 16238: Timer started for SIB12:  Occassion[%d], Updated SIB Window [%d]
Line 16243: Timer started for other SIBs:  Occassion[%d], Updated SIB Window[%d]
Line 16249: Timer started for %d ms
Line 16254: SIB occassion is nearby, take immediate action
Line 16266: No SIB scheduled: Invalid scenario
Line 16302: Sib_index[%d] siPeriodicity[%d] current_sfn_tti[%d] sfn_tti[%d] siWindow[%d]
Line 16306: temp_sfn_tti[%d]
Line 16317: 1: Next SIB Occassion: Index : %d, Occassion: %d, Sib Window : %d 
Line 16333: 2: Next SIB Occassion: Index : %d, Occassion: %d, Sib Window : %d
Line 16358: Next SIB Occassion: Index : %d, Occassion: %d, Updated Sib Window : %d
Line 16429: is_filled[%d] siPeriodicity[%d] sibBitmap[0x%x]
Line 16545: SI update triggered by paging (ModPeriod: %d)
Line 16552: SI Update Timer Start (Current SFN : %d, si_update_sfn : %d, timer : %d)
Line 16568: Improper value of update_immediate
Line 16649: Improper value of update_immediate
Line 16737: Wakeup Modem and Execute L1LC_ProcSiReadReq
Line 16787: Process RRM_L1LC_MBSFN_SI_START_READ_REQ earfcn[%d] cc[%d]
Line 16791: Invalid cc[%d]
Line 16797: Wakeup Modem and Execute L1LC_ProcSiReadReq
Line 16872: Process RRM_L1LC_MBSFN_SI_STOP_READ_REQ earfcn[%d] cc[%d]
Line 16879: Invalid cc[%d]
Line 16913: ProcPendingForGap %d ms(offset:2 ms, preTimeInMs:%u ms)
Line 16914: L1LC pending <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
Line 16939: >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> L1LC resume
Line 16940: ProcPendingForGap finish(curTimeInMs:%u ms)
Line 16946: ProcPendingForGap IratMeasTmr %d ms delay
Line 16979: Invalid gL1lc_BarredList.numOfbarredCell(%d)
Line 16987: Match BarredCell[%d] earfcn:%d, cell id:%d
Line 16994: Invalid gL1lc_BarredList.numOfbarredFreq(%d)
Line 17002: Match BarredFreq[%d] earfcn:%d
Line 17010: Invalid gL1lc_BarredList.numOfUnsuitableFreq(%d)
Line 17018: Match Unsuitable Freq[%d] earfcn:%d
Line 17103: %dms(<10ms) left until wakeup, so will wait for wakeup intr
Line 17107: (CONN State) SONANR(CGI ongoing): Pending SleepAbort
Line 17111: Wakeup already started, avoid sleep-abort
Line 17119: Current State:DRX(Idle or Connected): Wakeup Modem and Send %s
Line 17121: SID only case, avoid sleep-abort
Line 17191: LteRrm_CheckSupportBand: NOT Supported DL_EARFCN %d!!!
Line 17239: LteRrm_CheckSupportBand: NOT Supported DL_EARFCN %d!!!
Line 17281: measMode(%d) is not related with the scheduling for LTE search!!!
Line 17312: measMode(%d) lastSrch(%d) HALSC_CurSrchCnt(%d)
Line 17338: 3G IRAT response awaited.(gL1LC_IratUmtsMeasState=%d)
Line 17355: 2G IRAT response awaited.(gL1LC_IratGsmMeasState=%d)
Line 17365: 2G IRAT response awaited.(gL1LC_IratGsmVerifyState=%d)
Line 17378: CDMA IRAT response awaited.(gL1LC_IratCdmaMeasState=%d)
Line 17423: LTE inter-Meas ongoing
Line 17453: LTE Scell-Meas ongoing
Line 17516: IDLE -> Conn
Line 17560: Idle -> UE_RACHING, Stop Measurement
Line 17576: Disable SIB-DRX when RACH procedure is started
Line 17682: L1LC_UpdateMeasElement(prevMode : %d curMode : %d)
Line 17709: Scell sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 17745: Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 17776: L1LC_CheckMeasEnable(mode:%d)
Line 17834: Invalid syncResult.Num(%d)
Line 17918: NR response awaited.(gL1LC_IratNrMeasState=%d)
Line 17945: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 18013: L1LC_CheckMeasPending[ST%d]: MeasMode(%d)
Line 18055: Tx Path Recovery ON(Count(%d))
Line 18133: ProcRxModeChange: rx_mode(%d),edr/subdr(%d,%d)
Line 18151: ProcRxModeChange: Change not possible. cc(%d), rx_mode(%x, %x)
Line 18159: ProcRxModeChange: Change not possible. cc(%d),TdpState(%d)
Line 18177: ProcRxModeChange: cc(%d), rx_mode(%x, %x)
Line 18194: L1LC_ProcSetSfninfoNtf: time(%d), Sfn(%d)
Line 18211: [L1LC] L1LC_ReturnToLteMeasStop
Line 18334: [SADR] invalid measmode (%d)
Line 18340: [LTE L1LC DSL1RC] Saved message for SADR meas [mode:%d, earfcn:%d, time:%d]
Line 18503: [SADR] Source band CC0: %d - %d
Line 18506: [SADR] Source band CC%d: %d - %d - %d
Line 18508: [SADR] Source band - numofcell = %d
Line 18530: [SADR] findccidx = %d
Line 18531: [SADR] ++ Num of Scell
Line 18533: [SADR] Source band CC0: %d - %d
Line 18536: [SADR] Source band CC%d: %d - %d - %d
Line 18538: [SADR] Source band - numofcell = %d
Line 18560: [SADR] Source band CC0: %d - %d
Line 18563: [SADR] Source band CC%d: %d - %d - %d
Line 18565: [SADR] Source band - numofcell = %d
Line 18575: [4G_DRDS] Remove Scell: dl_earfcn(%d)
Line 18593: [4G_DRDS] Remove Scell: dl_earfcn(%d)
Line 18614: [SADR] Source band CC0: %d - %d
Line 18617: [SADR] Source band CC%d: %d - %d - %d
Line 18619: [SADR] Source band - numofcell = %d
Line 18639: [SADR] L1LC_UpdateBandListForSadrMeas(%d) = %d
Line 18643: [SADR] Do pended UpdateBandList, So, changed scell configured. So, first RF bandlist update should start.
Line 18654: Not configured scell for SADR
Line 18690: [SADR] Band was added for SADR IRAT measure
Line 18722: Can't Start Measure/Sync. So, SADR Measure(%d) Release
Line 18988: [L1LC] L1LC_Config4RxMimoForNrRfPath : cc(%d) div_cc(%d) rf_path(%d) mimo(%d) slo_pair_num(%d) slo_pair(%x)
Line 18995: Current CC0 Measurement or SYNC ongoing with RX mode:%d
Line 19037: [L1LC] L1LC_Config4RxMimoForNrRfPath : cc(%d) slo_cc(%d) tdp_state(%d) mimo(%d) div_cc(%d) div_cc_type(%d)
Line 19106: [L1LC] tcxoFreqOffset(%d), refFreqOffset(%d)
Line 19214: [SC] NSA CC%d: earfcn(%d), resv(%d), type(%d), pair_cc(0x%04x), tdp_state(%d), rx_mode(%x)
Line 19315: Invalid measCnt(%d)
Line 19324: pCurMeasElem->measCnt:%d, pCurMeasElem->nextMeasIndex:%d, pCurMeasElem->numOfCell:%d
Line 19403: L1LC_ProcMeasDoneInd_NonIRAT_getNextElem: curMode= %d, curIratMode= %d
Line 19455: [DRX] Extend gL1LC_DrdsAbnormalCheckTmr + 100ms
Line 19457: MEAS_CNF is delayed because remaining Cells for inter frequency(%d) should be measured.
Line 19472: [SADR] NR not suspended yet(IratNrMeasState:%d). So, can't release measure resource.
Line 19665: [TMS] SwapMeasureResult[MODULE_SWAP] [%d -> %d]
Line 19669: [TMS] SwapMeasureResult[MODULE_HOLD]
Line 19673: [TMS] SwapResult is invalid !!!!!!!!
Line 19746: [TMS] Change the MeasureCnf to 2RX measurement and initialize DB => gL1Lc_ModuleSwapTriggered[%d], gL1LC_ModuleSwapResult[%d]
Line 19776: Invalid RSRQ(%d)
Line 19887: Invalid RSRP(%d,%d,%d,%d)
Line 19929: Set default value (earfcn:%d, Cell ID:%d, RSRP:-204dBm, RSRQ:-40dBm for sub-antenna) due to invalid sub antenna
Line 20067: [DMTC] CNT(%d) AGC0(%d) AGC1(%d)!!!
Line 20077: Measure[%4d]: cell id(%d) is removed!!!
Line 20094: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 20139: MeasureCnf (full stationary %d, reported sinr %d, current sinr %d)
Line 20152: Abnormal intra-measurement case (AGC: 127)
Line 20186: [cDRX pre-Meas] Send pre-intra-freq measurement result to RRM
Line 20187: [cDRX pre-Meas] gDrx_isPreIntraMeasReq(1->0) gDrx_isPreIntraMeasDone(0) gDrx_isIntraMeasReqRcvedBeforeResync(1->0)
Line 20208: [cDRX pre-Meas] Send pre-intra-freq measurement result to RRM
Line 20209: [cDRX pre-Meas] gDrx_isPreIntraMeasReq(1->0) gDrx_isPreIntraMeasDone(0) gDrx_isIntraMeasReqRcvedBeforeResync(0) gDrx_WaitPreIntraMeasDone(1->0)
Line 20215: [cDRX pre-Meas] gDrx_isPreIntraMeasReq(1) gDrx_isPreIntraMeasDone(1) gDrx_isIntraMeasReqRcvedBeforeResync(0) gDrx_WaitPreIntraMeasDone(0)
Line 20259: CheckMeasureStuck (type: %d)
Line 20375: search_result is NULL
Line 20379: L1LC_CheckSrchFoValidity (m0m1_pwr: %d, hidx_valid: %d)
Line 20422: [TMS] L1LC_CheckModuleSwapSupportedBand(result:%d)
Line 20436: [TMS][DEBUG] rsrp[0][0]: %d, rsrp[0][1]: %d
Line 20437: [TMS][DEBUG] rsrp[1][0]: %d, rsrp[1][1]: %d
Line 20438: [TMS][DEBUG] rsrp[2][0]: %d, rsrp[2][1]: %d
Line 20439: [TMS][DEBUG] rsrp[3][0]: %d, rsrp[3][1]: %d
Line 20444: [TMS] Swap condition is not met (m1_rsrp: %d, rsrp_threshold: %d)
Line 20451: [TMS] Swap condition is met (m2_rsrp - m1_rsrp >= %d dB)
Line 20456: [TMS] Swap condition is not met (m2_rsrp - m1_rsrp < %d dB)
Line 20459: [TMS] FinalSwapResult(m1_rsrp: %d, m2_rsrp: %d, swap_result: %d) 0:HOLD, 1:SWAP
Line 1862: [%4d] SRCH_RESULT[%d] Sl_id(%3d) M0M1[%3d %3d] (pos:%d) (cp:%d)
Line 1881: [%4d] SRCH_RESULT[%d] Sl_id(%3d) CFO[%d] (pos:%d) (cp:%d)
Line 1899: [%4d] SRCH_RESULT[%d] Cell_id(%3d) M0M1[%3d %3d] (pos:%d) (cp:%d) (freq_offset:%d)
Line 3772: Check! StartMeas without powering on CC
Line 3780: 4RX case, L1 should configure only 4cells
Line 3803: Do not set IsDuringMeas
Line 3808: IsDuringMeas is set as TRUE
Line 3817: IsDuringMeas is set as FALSE 
Line 3846: StartMeas with abnormal CC:%d
Line 3894: measCnt is 0 (mode:%d, earfcn:%d, numOfCell:%d, measCnt:%d, nextMeasIndex:%d) - Enable(%d)
