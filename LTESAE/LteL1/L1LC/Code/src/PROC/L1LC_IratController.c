Line 473: [L1LC] GAP Time is too short. IRAT MEAS is not triggered
Line 477: [L1LC] IRAT MEAS SUCCESS: measure result - numOfCells:%d
Line 520: Update framepos [toMmcFramePos(%d), HALSC_IratMeasList.frame_position(%d)]
Line 533: CELL[%d] with rsrp[%d], rsrq[%d], best_rsrp[%d], rsrp_diff[%d] - removed...
Line 541: [IRAT] LTE Measure report : CELL[%d] - cell_id:%d, rsrp:%d, rsrq:%d, rs_sinr:%d(Only NR), framepos(%d)
Line 557: CELL[%d] with rsrp[%d], rsrq[%d], best_rsrp[%d], rsrp_diff[%d] - removed...
Line 565: [IRAT] LTE Measure report : CELL[%d] - cell_id:%d, rsrp:%d, rsrq:%d, rs_sinr:%d(Only NR), framepos(%d)
Line 625: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 666: IRAT CELL is not valid.
Line 670: GAP Time is too short. IRAT CELL Srch is not triggered.
Line 675: IRAT CELL SRCH SUCCESS
Line 684: search_result->Num ERROR (search_result->Num = %d)
Line 705: [IRAT] LTE Search Report : cell id(%d), earfcn(%d), m0m1_power(%d, %d), frame_position(%d), cp_type(%d)
Line 753: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 785: IRAT CELL SRCH SUCCESS
Line 825: [L1LC] L1LC_IratSrchReq (earfcn = %d)
Line 874: [L1LC] L1LC_IratMeasReq (earfcn = %d, measBw = %d)
Line 904: [L1LC] Invalid IRAT meas req
Line 928: [L1LC] L1LC_IratProcLteTimingLatchReq is skip
Line 937: [L1LC] LATCH~~!
Line 954: Skip GSM Timing Latch due to Emodem off
Line 957: gL1LC_IratlatchedTime sfn = %d, subframe num = %d, offset = %d
Line 989: [L1LC] L1LC_IratProcLteAgcInitReq is skip
Line 993: [L1LC] L1LC_IratProcLteAgcInitReq
Line 1037: [L1LC] L1LC_IratProcLteCellSearchReq is skip
Line 1051: Post AGC0 %d, AGC1 %d
Line 1062: [L1LC] L1LC_IratProcLteCellSearchReq(%d)
Line 1068: [SADR] pLTE_OHE->N2LMeasDuringDR = TRUE (%d)
Line 1105: [L1LC] This earfcn(%d) is not support
Line 1129: [L1LC] GAP Timing ERROR!!(Gap Start SFN:%d TTI:%d Offset:%d) (Cur SFN:%d TTI:%d Offset:%d)
Line 1172: [L1LC] L1LC_IratProcLteMeasReq is skip
Line 1179: Num Of Cell exceeds the Max Count
Line 1184: Num of Cell from source RAT is 0, LTE will send cnf to source rat(%d) and suspend.
Line 1198: Post AGC0 %d, AGC1 %d
Line 1205: [L1LC] L1LC_IratProcLteMeasReq(gL1LC_MeasInfo.curMode(%d), meas_bw(%d), AGC(%d,%d), numOfCell(%d)
Line 1239: [L1LC] This earfcn(%d) is not support
Line 1253: [SADR] pLTE_OHE->N2LMeasDuringDR = TRUE (%d)
Line 1261: failed to allocate N2L scell path for measure, LTE will send cnf to source rat(%d) and suspend.
Line 1315: [L1LC] GAP Timing ERROR!!(Gap Start SFN:%d TTI:%d Offset:%d) (Cur SFN:%d TTI:%d Offset:%d)
Line 1351: [L1LC] Freq is mismatched between before(%d) and after(%d)
Line 1358: [L1LC] Freq is mismatched between before(%d) and after(%d)
Line 1392: [L1LC] freq num is matched (matchcnt %d gL1LC_IratTotalNumOfFreqs %d)
Line 1397: [L1LC] Freq num is same but, List is changed (matchcnt %d gL1LC_IratTotalNumOfFreqs %d)
Line 1464: [L1LC] L1LC_IratProcLteSearchMeasureReq is skip by illegal EARFCN
Line 1473: gBplmStartPending is TRUE, so Don't suspend in srch/meas req
Line 1484: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 1512: [L1LC] previous LTE earfcn %d L1LC_IratDb->gL1LC_MeasuredCnt %d
Line 1516: [L1LC] SIB is changed or 1st time!!
Line 1526: [L1LC] 1st list is previous LTE earfcn %d
Line 1552: [L1LC] ==== Received IRAT Earfcn list ====
Line 1557: [L1LC] Earfcn[%d]: %d
Line 1560: [L1LC] ==========================
Line 1577: [L1LC] Already measured earfcn(%d): %d 
Line 1590: [L1LC] ====  IRAT Earfcn list to be measured soon ====
Line 1595: [L1LC] Earfcn[%d]: %d
Line 1598: [L1LC] ==========================
Line 1632: numOfFreqs is 0xff,  DrxState is: %d ! isabnormal (%d)
Line 1644: [L1LC] L1LC_IratProcLteSearchMeasureReq is skip
Line 1650: [L1LC] L1LC_IratProcLteSearchMeasureReq(Source RAT:%d) - numOfFreqs:(%d) gL1LC_IratNumOfFreqs (%d)
Line 1654: [L1LC] L1LC_IratProcLteSearchMeasureReq : Num Freq is Out of range (%d) 
Line 1666: [L1LC] gL1LC_IratTotalNumOfFreqs is zero : 1st try
Line 1708: [L1LC] gL1LC_IratSupportedBandSortedEarfcnCnt %d gL1LC_IratUnsupportedBandSortedEarfcnCnt %d req_count %d
Line 1723: gBplmStartPending is TRUE, so Don't suspend in srch/meas req
Line 1734: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 1833: [L1LC] L1LC_IratProcLteConMeasReq
Line 1904: [L1LC] L1LC_IratProcLteSrchResult(gL1LC_IratLteMeasState(%d))
Line 1913: IRAT CELL SRCH Failure(NO cell identified)
Line 1944: gBplmStartPending is TRUE, so Don't suspend in IratSrchResult
Line 1961: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 1978: search_result->Num ERROR (search_result->Num = %d)
Line 1995: [IRAT] LTE Search result : [cell id:%d]
Line 2065: IRAT CELL SRCH Failure(NO cell identified)(%d)
Line 2095: gBplmStartPending is TRUE, so Don't suspend in IratSrchResult
Line 2107: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 2142: [L1LC] L1LC_IratProcLteMeasResult(Num.MeasResult:%d)
Line 2158: [IRAT] LTE Measure result: cell id(%d), rsrp(%3d), rsrq(%3d), rs_sinr(%3d)(Only NR)
Line 2259: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 2272: gBplmStartPending is TRUE, so Don't suspend in IratMeasResult
Line 2283: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 2370: gBplmStartPending is TRUE, so Don't suspend in IratMeasResult
Line 2381: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 2410: L1LC_IratSortReselecCand ERROR (L1LC_IratDb->gL1LC_IratNumOfCell = %d)
Line 2505: [L1LC] L1LC_IratProcLteConEvalLegacy
Line 2514: Reselection cell info: earfcn:(%d), cell id(%d), rsrp(%d)> (%d)(resel Threshold)
Line 2562: Earfcn:(%d), Number of Cells:(%d)
Line 2583: Barred Cell:Earfcn:(%d), CellId:(%d)
Line 2607: [IRAT] LTE Measure report : earfcn(%d), cell id(%d), rsrp(%d), rsrq(%d), rs_sinr(%d)(Only NR)
Line 2623: [L1LC] LTEL1_MMC_LTE_SEARCH_MEASURE_CNF to MMC(rat:%d, cell num:%d, AGC(%d/%d))
Line 2639: gBplmnStartPendingStartTime: %d L1LC_IratDb->gBplmnStartPendingEndTime: %d time_diff: %d  gBplmnStartPendingRcvdAvailTime: %d
Line 2699: [L1LC] L1LC_IratProcLteMeasStopReq
Line 2703: [L1LC] L1LC_IratProcLteMeasStopReq : gL1LC_IratNrMeasState(%d)
Line 2733: NoNeedModemOff (%d)
Line 2738: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 2766: L1LC_IratNcellTimingInfoUpdate(ratType:%d, afcPdm:%d)
Line 2772: umts timing difference(delta_offset:%d) comparision with LTE umts ref. timing
Line 2780: UTRAN NCELL[%d] (time_offset:%d) -> (time_offset:%d)
Line 2787: gsm timing difference(delta_Qbit:0x%X) comparision with LTE gsm ref. timing
Line 2800: GERAN NCELL[%d] (frameNumber:%d, Qb:%d) -> (frameNumber:%d, Qb:%d)
Line 2820: NR NCELL_id[%d] ssb_cnt[%d] period[%d] (time_offset:%d) -> (time_offset:%d)
Line 2956: Current LTE Timing(SFN:%d, TTI:%d, Offset:%d), gap_lastEndTime:%d, gap_interval:%d, margin:%d
Line 2963: The difference between current time and paging timing is %dms by TTI unit
Line 2982: The timing for AGAP(SFN:%d, TTI:%d, Offset:%d) is calculated.
Line 3005: IRAT LATCH REQ(LTE Current Time): SFN(%d), TTI(%d), OFFSET(%d)
Line 3052: Latch Fail:diffRtg(%d) diffLatch(%d)
Line 3060: Latch fail#(%d) >= L1LC_MAX_LATCH_COUNT(%d), Send UMTS SrchMeasReq with Wrong timning latch info
Line 3065: Latch Success:diffRtg(%d) diffLatch(%d)
Line 3072: IRAT LATCH CNF(UMTS Side): SFN(%d), SLOT(%d), CHIP(%d)
Line 3140: IRAT latch response is received, send Latch request for HO
Line 3171: pLatchCbFuncPara is NULL
Line 3178: %d times Latch fail, Send UMTS Timing Latch Again!!! 
Line 3221: [L1LC] L1LC_IratUmtsCellSearchMeasureDone Called: Info.(Num of Freq:%d, Arfcn:%d, numOfRscpEcNoInfo:%d)
Line 3242: L2U measurement has been already stopped.
Line 3263: [L1LC] Num Freq = 0 :Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 3289: pMeasList[i].numOfRscpEcNoInfo(%d) > L1LC_RRM_MAX_MEAS_CNT
Line 3325: [IRAT] UMTS Measure result : index:%i, SRC code:%d, RSCP:%d, Ec/No:%d, RSSI:%d, FrameOffset:%d, newTimeOffset: %d
Line 3332: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 3415: LTEL1_MMC_UMTS_CELL_SEARCH_REQ(arfch:%d)
Line 3593: [L1LC] ProcUmtsPartialSearchReq(arfcn:%d, phase:%d)
Line 3616: pathList[%d] - offset(umts:%d, lte:%d)
Line 3718: [L1LC] L1LC_IratProcUmtsPartialSearchDone Called: Info.(phase:%d, numOfPathes:%d, numOfRscpEcNoInfo:%d)
Line 3732: pathList[%d] - offset(umts:%d, lte:%d)
Line 3737: UmtsPartialSearch phase0 fail!!!
Line 3757: the step value of Phase(%d) is wrong!!!
Line 3864: UMTS Measure Setting - earfcn:%d, numOfCell:%d
Line 4062: LTEL1_MMC_UMTS_MEASURE_REQ(arfch:%d)
Line 4113: UMTS Measure Setting - earfcn:%d, numOfCell:%d
Line 4116: UMTS MeasureList[%d]
Line 4126: UMTS Cell Timing Offset: %d(LTE Side) to %d(UMTS Side) cell ID:%d, TimingOffset(sfn:%d, slot:%d, chip:%d)
Line 4224: Base for UmtsSiAcq timing(SFN:%d, TTI:%d, Offset:%d), Current LTE Timing(SFN:%d, TTI:%d, Offset:%d)
Line 4227: gap_lastEndTime:%d, gap_interval:%d, margin:%d
Line 4232: The difference between current time and UmtsSiAcq timing is %dms by TTI unit(marginForlastGap:%d)
Line 4266: The difference between UmtsSiAcq timing and Paging timing is %dms by TTI unit
Line 4273: Timing for UmtsSiAcq(period:%dms) shall be updated, due to the collision with Paging(period:%dms).
Line 4284: UmtsSiAcq(period:%dms) will be tried instead of the reception for PAGING(period:%dms), due to the collision.
Line 4290: The timing for AGAP(SFN:%d, TTI:%d, Offset:%d) is calculated.
Line 4312: Proc SelectTargetSibTypeForUmtsCgiAcq(SIB1:%d, SIB3:%d)
Line 4321: Difference with current time(SIB1:%dms, SIB3:%dms)
Line 4330: UtranSiAcquisitionMode(%d) for SIB is selected.
Line 4354: L1LC_IratUpdateTimingForUmtsCgiAcq Called(PagingInfo(period:%d, PF:%d, PO%d), UtraSiAcquisitionMode:%d)
Line 4360: UMTS CGI Cell Timing Offset: %d(LTE Side) to %d(UMTS Side)
Line 4392: The update for UmtsSiAcq timing is finished.(UtraSiAcquisitionMode:%d - SFN:%d, TTI:%d, Offset:%d)
Line 4419: The timing for SIB has been not updated yet.
Line 4498: UmtsCgiAcqReq Setting - measMode:%d, cellTimingOffset:%d, gapDuration:%d
Line 4578: L1LC_IratProcUmtsCgiAcquisitionDone Called(measModeInCnfMessage:%d, currMeasMode:%d, isSuccess:%d)
Line 4586: LteTimingInfo in LATCH procedure - sfn:%d, tti:%d, offset:%d)
Line 4588: UmtsTimingInfo in LATCH procedure - sfn:%d, slot:%d, chip:%d)
Line 4592: UmtsCgiAcquisitionCnf Info. - neededDuration[0]:%d, period[0]:%d, UmtsTimingInfo[0](sfn:%d, slot:%d, chip:%d)
Line 4595: UmtsCgiAcquisitionCnf Info. - neededDuration[1]:%d, period[1]:%d, UmtsTimingInfo[1](sfn:%d, slot:%d, chip:%d)
Line 4611: NextUmtsCgiAcquisition information for MIB - delta_rtg:%d, LteTimingInfo(sfn:%d, tti:%d, offset:%d)
Line 4622: NextUmtsCgiAcquisition information for SIB1 - delta_rtg:%d, LteTimingInfo(sfn:%d, tti:%d, offset:%d)
Line 4636: NextUmtsCgiAcquisition information for SIB3 - delta_rtg:%d, LteTimingInfo(sfn:%d, tti:%d, offset:%d)
Line 4664: utran_SI_AcquisitionForHO is finished as a success.
Line 4680: utra_SI_AcquisitionForHO(measMode:%d) was failed and will be retried.
Line 4794: utra_SI_AcquisitionForHO operation has been stopped.
Line 4801: utra_SI_AcquisitionForHO is suspended(UtraSiAcquisitionMode:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 4825: utra_SI_AcquisitionForHO operation is started.
Line 4862: Invalid UMTS meas_state(%d)
Line 4956: [GSM SCH TIMING CHECK] Update and Check GSM(arfcn:%d) cell time position
Line 4966: Post GSM cell time position(FrameNum:%d, Qb:%d, NetFrameNum:%d, delta_Qbit:%d)
Line 4988: Update GSM cell time position(FrameNum:%d, Qb:%d, NetFrameNum:%d)
Line 4993: Remain GSM cell time position(FrameNum:%d, Qb:%d, NetFrameNum:%d)
Line 4996: Gap start position: frame(%d), Qb(%d)
Line 5006: Gap end position: frame(%d), Qb(%d)
Line 5010: (MATCH!!!) SCH_ACQ_REQ will be transmitted
Line 5017: (NO MATCH) SCH_ACQ_REQ is delayed.
Line 5068: Set ratMode(%d) is invalid!!!
Line 5079: Required PreTime is insufficient.(ratMode:%d, spare RTG:%d, required RTG:%d)
Line 5111: L1LC_IratCheckGsmCellForRssi - numOfCell(0), return(%d)
Line 5142: L1LC_IratCheckGsmCellForRssi - needRssiMeas:%d
Line 5174: [GSM_FCH_ACQ] start the GsmFchAcquisition(arfcn:%d, rssi:%d)
Line 5234: GsmPauseProcedure for other IRAT measurement
Line 5260: GsmPauseProcedure for Inter E-UTRA measurement or NR Measurement
Line 5312: [GSM_SCH_ACQ] NextSchFrameNum:%d, FrameNumForPreGAP:%d
Line 5318: [GSM_SCH_ACQ] NextSchFrameNum(%d) should be postponed to %d GSM Frame!!!
Line 5389: [%s] LTEL1_MMC_GSM_TIMING_LATCH_REQ LTE LATCH: SFN(%d), TTI(%d), OFFSET(%d)
Line 5397: Skip RF Power down
Line 5403: Start gsm timer for total srch/meas (%u) 
Line 5409: Start gsm timer for total srch (%u) 
Line 5468: Latch Fail:diffRtg(%d) diffLatch(%d)
Line 5476: Latch fail#(%d) >= L1LC_MAX_LATCH_COUNT(%d), Proceed GSM SrchMeas w/ wrong timning latch info
Line 5481: Latch Success:diffRtg(%d) diffLatch(%d)
Line 5487: IRAT LATCH(GSM): FRAME(%d), QBIT(%d)
Line 5578: Invalid IratGsmMeasState(%d)
Line 5594: GsmPauseProcedure for other IRAT measurement
Line 5627: Invalid IratGsmMeasState(%d)
Line 5673: [L1LC] L1LC_IratSendGsmMeasCnf: Arfcn(%d)
Line 5685: gL1LC GSM numOfCell > L1LC_MAX_MEAS_CNT
Line 5716: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 5771: Start next IRAT measurement after processing GERAN measurement
Line 5798: L1LC_IratReturnToLTE: L1LC task sleep time(%d)
Line 5868: L1LC_IratGsmMeasPostProcessing: IratGsmMeasState (%d) IratGsmVerifyState (%d)
Line 5908: [DRX, 4GDS] Set measconfig as HALSC_MEAS_CONFIG_CONN_DRX as FCH or SCH done (reset IsDuringGsmMeas:%d)
Line 5937: GSM_DONE msg came too early then gap. Disable gap and send meas_cnf
Line 5946: GSM_RSSI_MEAS_REQ or GSM_FCH_ACQ_REQ or GSM_SCH_ACQ_REQ was hold!!!
Line 5963: In GSM_RSSI_MEASURE_REQ, numOfFrequencies are abnormal!!!
Line 6051: LTEL1_MMC_GSM_RSSI_MEASURE_REQ(FreqNum:%d, start(frame:%d, Qb:%d), delta_rtg:%d)
Line 6196: (IRAT_GSM_bandIndicator:%d) LTEL1_MMC_GSM_RSSI_MEASURE_REQ(FreqNum:%d, start(frame:%d, Qb:%d), delta_rtg:%d)
Line 6254: gL1LC_GsmCellInfo.cell[%d].arfcn(%d) != pMsg->frequencyList[%d].arfcn(%d)
Line 6260: [IRAT] GSM Measure result : arfcn(%d), rssi(%d dBm)(level: %d)  GSM State: (%d
Line 6279: End gsm timer for total srch/meas (%u) 
Line 6361: LTEL1_MMC_GSM_FCH_ACQ_REQ(arfcn:%d, start(frame:%d, Qb:%d), ref(frame:%d, Qb:%d), delta_rtg:%d)
Line 6465: LTEL1_MMC_GSM_FCH_ACQ_REQ(FchAcqTryNum:%d, arfcn:%d, start(frame:%d, Qb:%d), ref(fram:%d, Qb:%d), delta_rtg:%d)
Line 6496: LTEL1_MMC_GSM_FCH_ACQ_REQ_FOR_POWER_DOWN
Line 6555: L1LC_IratProcGsmFchAcqDone: FCH ACQ SUCCESS (arfcn:%d, ref-frame((%d), timeOffset(%d)) (recv:%d))!!!
Line 6559: L1LC_IratProcGsmFchAcqDone: FCH ACQ FAIL (arfcn:%d maxFbAcqTryNum:%d)!!!
Line 6570: NONEXISTENT GSM FCH!!! (maxFbAcqTryNum:%d)
Line 6627: L1LC_IratProcPreSCHAcqReq: arfcn(%d) frame_number is for SCH position! (%d) => (%d)
Line 6640: L1LC_IratProcPreSCHAcqReq: arfcn(%d) frame_number is for FCH position! (%d) => (%d)
Line 6699: LteRrmIdle_ScheduleNextSchPos fail!!
Line 6759: LTEL1_MMC_GSM_SCH_ACQ_REQ(arfcn:%d, start(frame:%d, Qb:%d), ref(frame:%d, Qb:%d), delta_qbit:%d, delta_rtg:%d)
Line 6843: Gap Start Position Ref(frame:%d, Qb:%d)
Line 6850: Gap End Position Ref(frame:%d, Qb:%d) -> Sch Start Position Ref(frame:%d, Qb:%d)
Line 6901: GSM_SCH_ACQ_TIME: %d
Line 6922: LTEL1_MMC_GSM_SCH_ACQ_REQ(arfcn:%d, start(frame:%d, Qb:%d), ref(frame:%d, Qb:%d), delta_qbit:%d)
Line 6991: GsmSchAcqInd timingOffset(%d) is invalid!!!
Line 7049: L1LC_IratProcGsmSchAcqDone: SCH ACQ SUCCESS (BSIC:%d, timeOffset:%d(%d), frameNumber:%d(net:%d), arfcn:%d, count:%d)!!!
Line 7110: L1LC_IratProcGsmSchAcqDone: SCH ACQ FAIL (arfcn:%d)(count:%d)!!!
Line 7135: IRAT LATCH REQ(LTE Current Time): SFN(%d), TTI(%d), OFFSET(%d)
Line 7143: CDMA_TIMING_LATCH_REQ to EVDO
Line 7148: CDMA_TIMING_LATCH_REQ to 1xRTT
Line 7191: Latch Fail:diffRtg(%d) diffLatch(%d)
Line 7196: Latch Success:diffRtg(%d) diffLatch(%d)
Line 7204: IRAT LATCH CNF(EVDO Side): latched evdo rtg (High: 0x%x  Low: 0x%x)
Line 7213: IRAT LATCH CNF(1xRTT Side): latched 1xRTT rtg (High: 0x%x  Low: 0x%x)
Line 7320: [L1LC] L1LC_IratSendCdmaMeasReq (%s)
Line 7334: [L1LC]  msgToMmc.searchwindowSize is absent(set 15)
Line 7348: [L1LC] msgToMmc.neigh_cell_list[%d].phyCellIdCDMA2000[%d](%d)
Line 7351: [L1LC] bandClass(%d) arfcnCDMA2000(%d) numPhyCellIdCDMA2000(%d)
Line 7356: [L1LC][IDLE] gHAL_IratLatchTime.lteTime - current_time : deltaRtg(%d)
Line 7371: [L1LC] L1LC_IratSendCdmaMeasReq : deltaRtg(%d)
Line 7377: current sfn(%d), tti(%d), offset(%d) ipc delay(%d)
Line 7382: current sfn(%d), tti(%d), offset(%d) ipc delay(%d)
Line 7415: CDMA Gap Start time(IDLE): systemTime in chip high(0x%x) low(0x%x)
Line 7417: CDMA Gap duration time(IDLE): systemTime in chip high(0x%x) low(0x%x)
Line 7425: [L1LC] LTEL1_MMC_CDMA_MEAS_REQ to MMC(curIratMode:%d)
Line 7479: [L1LC] L1LC_IratSendCdmaMeasReqInConnGap (%s)
Line 7504: CDMA Measure Setting Cell list[%d] - bandClass:%d, arfcnCDMA2000:%d numPhyCellIdCDMA2000:%d
Line 7509: [CONN] phyCellIdCDMA2000[%d](%d)
Line 7533: [L1LC][CONN] gHAL_IratLatchTime.lteTime - HALSC_MeasSche.GapStartSfn/tti : deltaRtg(%d)
Line 7540: [L1LC] L1LC_IratSendCdmaMeasReqInConnGap : deltaRtg(%d)
Line 7556: CDMA Gap Start time(CONN): systemTime in chip high(0x%x) low(0x%x)
Line 7558: CDMA Gap duration time(CONN): systemTime in chip high(0x%x) low(0x%x)
Line 7634: L2D measurement has been already stopped.
Line 7660: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 7678: [L1LC][CDMA] Num Freq ==0 : Send RrmMesureCnf and Return with FAILED measResult
Line 7691: Support num freq is 1
Line 7697: pMeasList[i].numNeighCellInfo(%d) > MMC_MAX_CDMA_MEAS_CELL
Line 7713: [IRAT] CDMA Measure result : arfcn(%d), cell_id(%d), rsrp(%d), pnPhase(%d)
Line 7776: [L1LC] L1LC_IratSendNrResumeSusPendReq : abnormal type(%d)
Line 7787: IRAT NR RESUME/SUSPEND REQ: Type(%d), (LTE Current Time : SFN(%d), TTI(%d), OFFSET(%d))
Line 7813: IRAT LATCH(NR): latchTime(%d), sfn(%d), subframe(%d), offset(%d)
Line 7849: [L1LC] L1LC_IratProcNrResumeSuspendCnf: type(%d)/*0:suspend, 1:resume, 2:L2N meas config release*/, result(%d)
Line 7891: [L1LC] Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 7926: [L1LC] L1LC_IratProcNrResumeSuspendCnf: skip ResumeCnf procedure in gL1LC_IratNrMeasState(%d)
Line 7956: [L1LC] MeasStopCnf was pended because it was waiting for L2N suspend cnf. gL1LC_MeasStopCnfPending(%d) 
Line 8006: [NRDS] Reset RemoveDrBandDuringNrPbch
Line 8011: [L1LC] L1LC_IratProcNrResumeSuspendCnf: skip SuspendCnf procedure in gL1LC_IratNrMeasState(%d)
Line 8124: [L1LC] L1LC_IratSendNrSrchMeasPbchReq: measMode(%d)
Line 8139: [NRDS] Set RemoveDrBandDuringNrPbch
Line 8144: [NRDS] L1LC_IratSendNrSrchMeasPbchReq: Remove DR BAND! 
Line 8160: LTERRM_MEASMODE_NR_SYNC: Timer length=%d
Line 8175: [L1LC] L1LC_IratSendNrSrchMeasPbchReq : unexpected measMode(%d)
Line 8187: [L1LC] L1LC_IratSendNrSrchMeasPbchReq : L2N GAP search/measure was triggered
Line 8195: [L1LC] L1LC_IratSendNrSrchMeasPbchReq : L2N idle search/measure was triggered
Line 8200: [L1LC] L1LC_IratSendNrSrchMeasPbchReq : L2N Scell search/measure was triggered
Line 8237: [L2N] ForcedL2nGap is enabled by NV, L2N gap. rf_ca_check(%d)
Line 8243: [L2N] RF not support, L2N gap
Line 8269: [L2N] LTE is holding NR dedicated RF path as 4rx diversity path, so 4RX release is available for L2N scell measure
Line 8298: [L2N] MIXER not support, L2N gap
Line 8349: LTEL1_MMC_LEGACY_MEASURE_REQ(arfcn: %d)
Line 8375: [L1LC] L1LC_IratLegacyUmtsMeasureDone Called: Arfcn(%d)
Line 8392: pMeasList->NumOfCell(%d) > L1LC_RRM_MAX_MEAS_CNT
Line 8400: Max Neighbour cell number is over (%d)
Line 8422: [IRAT] UMTS Measure result : Arfcn(%d), Cell id(%d), ECNO:%d(%d), RSCP:%d(%d), RSSI:%d(%d)
Line 8429: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 8488: LTEL1_MMC_LEGACY_MEASURE_REQ(arfcn: %d)
Line 8514: [L1LC] L1LC_IratLegacyGsmMeasureDone Called: Arfcn(%d)
Line 8531: pMeasList->NumOfCell(%d) > L1LC_RRM_MAX_MEAS_CNT
Line 8539: Max Neighbour cell number is over (%d)
Line 8549: [IRAT] GSM Measure result : arfcn(%d), rssi(%d dBm)(level: %d)
Line 8556: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 8605: Not supported source RAT
Line 8634: [L1LC] L1LC_IratProcHedgeModeInd Invalid LTE MODE(%d)
Line 8683: L1LC_IratProcLteL1StartDrxInfoShareInd ====> pHALDRX_Db->gDrx_BplmnSrchStartLteActive = TRUE-> SrchOnRat == %s;
Line 8759: L1LC_IratProcHedgeLteL1BplmnSrchStartInd: bplmnDuration(%d), StartTime(%u), curTime(%u), elapsedTime(%d)
Line 8779: BPLMN Start (Don't Sleep)
Line 8862: Invalid UMTS meas_state(%d)
Line 8868: Invalid gL1LC_DualRat(%d)
Line 8918: Invalid UMTS meas_state(%d)
Line 8924: Invalid gL1LC_DualRat(%d)
Line 9015: Invalid GSM curMeasIdx(%d)
Line 9046: Invalid GSM meas_state(%d)
Line 9052: Invalid gL1LC_DualRat(%d)
Line 9100: GsmPauseProcedure for other IRAT measurement
Line 9168: Invalid GSM curMeasIdx(%d)
Line 9190: GsmPauseProcedure for other IRAT measurement
Line 9237: GsmPauseProcedure for other IRAT measurement
Line 9281: Invalid GSM meas_state(%d)
Line 9287: Invalid gL1LC_DualRat(%d)
Line 9338: Invalid GSM curMeasIdx(%d)
Line 9371: Invalid GSM meas_state(%d)gL1LC_MeasInfo.prevMode(%d)gL1LC_MeasInfo.curIratMode(%d) 
Line 9377: Invalid gL1LC_DualRat(%d)
Line 9425: GsmPauseProcedure_IRAT_L1LC_StartMeas
Line 9453: GsmResumeProcedure for FB/SB identity
Line 9471: GsmPauseProcedure for other IRAT measurement
Line 9486: Invalid GSM curMeasIdx(%d)
Line 9492: Invalid GSM meas_state(%d)
Line 9499: Invalid gL1LC_DualRat(%d)
Line 9547: Invalid CDMA meas_state(%d)
Line 9553: Invalid gL1LC_DualRat(%d)
Line 9573: L1LC_IratProcNrMeas: gL1LC_IratNrMeasState(%d)
Line 9595: Invalid NR meas_state(%d)
Line 9705: L1LC_IratProcIratSrchMeas(curMode:%d, curIratMode:%d, SearchConfiguredflag:0x%x, MeasureConfiguredflag:0x%x)
Line 9712: L1LC_IratProcIratSrchMeas( Invalid curIratMode:%d)
Line 9758: L1LC_IratProcIratSrchMeas( Invalid curIratMode:%d)
Line 9786: Do not select UMTS measurement object since the previous UMTS activity is not completed
Line 9811: Do not select GSM measurement object since the latch confirmation is pending from GSM
Line 9832:  Default handler Mode (%d)
Line 9856: Do not start IratGsmMeas due to PauseFlag
Line 9861: [LTE_DSDS] Set FchAcqTryNum as 0
Line 9867: Do not start IratGsmMeas since latch confirmation is pending from GSM
Line 9892: Do not start IratGsmMeas due to PauseFlag
Line 9897: Do not start IratGsmMeas since latch confirmation is pending from GSM
Line 9923: Do not start IratGsmMeas since latch confirmation is pending from GSM
Line 9948: Do not start IratCdmaMeas due to PauseFlag
Line 9972: Do not start IratNrMeas due to PauseFlag
Line 9995: meas_mode is invalid(%d)
Line 10019: Do not start IratUmtsMeas since latch confirmation is pending from UMTS
Line 10026: Do not start IratUmtsMeas due to PauseFlag
Line 10031: [LTE_DSDS] Do not select UMTS measurement object since the previous UMTS activity is not completed
Line 10067: L1LC_IratProcIratSrchMeas( Invalid curIratMode:%d)
Line 10073: L1LC_IratProcIratSrchMeas(Waiting RF grant(%d))
Line 10106: Dont release RF due to Page or Signaling mask set: %d
Line 10112: Previous UMTS activity is not completed, do not release RF
Line 10118: [LTE L1LC] Pause will be performed as part of EPT expiry handling
Line 10151: L1LC_IratProcIratSrchMeas(curMode:%d, curIratMode:%d, SearchConfiguredflag:0x%x, MeasureConfiguredflag:0x%x)
Line 10169: remain time to other stack WakeupIntrTimer (%d)
Line 10182: remain time to other stack PagingReqTimer (%d)
Line 10217: [LTE L1LC DSL1RC] [4G_DRDS] Remain time to other stack's paging timing (%d)
Line 10374: [LTE_DSDS] Set FchAcqTryNum as 0
Line 10416: [LTE_DSDS] %s(max_irat_meas_time %d)
Line 10460: meas_mode is invalid(%d)
Line 10687: meas_mode is invalid(%d)
Line 10724: [L2N_GAP] Gap time was updated cause GAP SFN TTI was past value. CurSFN/TTI(%d), GapSFN/TTI(%d)
Line 10764: function : %s : Mode (%d)
Line 10886: [IRAT] L1LC_IratSetNrMeasPara: mode(%d)
Line 10890: [IRAT] L1LC_IratSetNrMeasPara: mode(%d)
Line 10969: numOfCell is NULL
Line 11013: IratSetGsmMeas(Arfcn:%d, BSIC:%d, NetFrameNum:%d, RefFrameNum:%d, timingOffset:%d, GsmCellState:%d)
Line 11038: numOfCell is NULL
Line 11075: IratSetGsmVerify(Arfcn:%d, BSIC:%d, NetFrameNum:%d, RefFrameNum:%d, timingOffset:%d, GsmCellState:%d)
Line 11193: [LTE_DSDS] Do not start IRAT Meas mode: (%d) due to nearby e.p.t or nearby paging
Line 11209: L1LC_IratCheckGsmMeasFeasibility (meas_mode : %d)
Line 11219: Send GSM_MEAS_CNF as nothing is pending
Line 11231: Send GSM_MEAS_CNF as nothing is pending
Line 11243: Send GSM_MEAS_CNF as nothing is pending
Line 11249: gL1LC_IratGsmMeasState is invalid(%d)
Line 11269: L1LC_IratCheckGsmVerifyFeasibility (meas_mode : %d)
Line 11279: Send GSM_MEAS_CNF as nothing is pending
Line 11294: Send GSM_MEAS_CNF as nothing is pending
Line 11300: gL1LC_IratGsmMeasState is invalid(%d)
Line 11369: [LTE_DSDS] IratUmtsMeasState: %d, RAT_type: %d, MinRequiredTime: %d
Line 11420: [LTE_DSDS] IratGsmMeasState: %d, MinRequiredTime: %d
Line 11484: [L1LC] L1LC_ReturnToLtePartialSearchDone
Line 11596: Signalling grant required for other stack when current stack 2G measurements ongoing under signalling cause
Line 11601: [LTE_DSDS] Set FchAcqTryNum as 0
Line 11663: [DRX] Need to delay time for DSP power down (IRAT on/off time diff:%d(MicroSec)
Line 11710: [L1LC] Check NR GAP. isNRGapSet (%d), curpaltime (%u), NrGapStartPalTime (%u),time_to_gapstart (%u), NrGapLength (%d), margin (%dtti), state (%d)
Line 11751: [L1LC_ProcPendingForNRGap] Pending current task until end of NR gap (%dtti)
Line 1784: [L1LC] L1LC_IratProcLteSrchReq
Line 2458: [L1LC] L1LC_IratProcLteEvaluation
Line 2471: Reselection cell info: earfcn:(%d), cell id(%d), rsrp(%d)> (%d)(resel Threshold)
