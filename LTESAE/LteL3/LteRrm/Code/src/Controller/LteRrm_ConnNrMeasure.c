Line 380: MeasListSftd is invalid!!!
Line 386: LteRrmConn_CheckSftdCond - sftdMode:%d, EndcActiveFlag:%d, sftd_num:%d, earfcn:%d, subcarrier_spacing:%d, periodicity:%d)
Line 394: LteRrmConn_CheckSftdCond(SFTD_PSCELL) : pFreqInfo is NULL
Line 402: LteRrmConn_CheckSftdCond(SFTD_PSCELL) : pCellInfo is NULL
Line 422: LteRrmConn_CheckSftdCond(SFTD_NEIGHBOR) : pFreqInfo is NULL
Line 496: LteRrmConn_CheckPendingForSftd - sftdMode:%d, EndcActiveFlag:%d, sftd_num:%d, numOfCellsInRportList:%d)
Line 510:    >> CellsInRportList[%d] - arfcn:%d, cell_id:%d, isUpdateSftdResult:%d
Line 533:    >> CellsInRportList[%d] - arfcn:%d, cell_id:%d, isUpdateSftdResult:%d
Line 565:    >> CellsInRportList[%d] - arfcn:%d, cell_id:%d, isUpdateSftdResult:%d
Line 616: LteRrmConn_UpdateSftdState - report_sftd_meas(%d)
Line 637: LteRrmConn_UpdateSftdState: Init reportSftd
Line 728: Forced measTrig[TRUE] due to TimeToTrigger - RAT_type(%d), mID(%d), cell_id(%d), ScaledTTT(%d), timeDiff(%d), offset(%d)
Line 748: Forced measTrig[TRUE] due to LeaveTime - RAT_type(%d), mID(%d), cell_id(%d), TTT(%d), timeDiff(%d), offset(%d)
Line 795: LteRrmConn_CheckNrFreqMeas : pNrMeasList
Line 801: LteRrmConn_CheckNrFreqMeas : pNrFreq
Line 816:    >>newCellDetectedState:%d
Line 820: Skip to check NR search cycle, due to Forced NR Scheduling
Line 825: CheckMeasCycle: NR(%d) Search(current total count : %d)
Line 830: CheckMeasCycle: NR(%d) Measure(current total count : %d)
Line 885: subcarrier_spacing is invalid.
Line 934: periodicity is invalid.
Line 956: smtc duration is invalid.
Line 988: Skip NR search/measure due to bConnTempCtrl(%d)
Line 1000: NR srch/meas scheduling count is full(cnt:%d)
Line 1008: pNrFreq is Empty(%d | %d)
Line 1023: Skip FR1(arfcn:%d) measurement due to NR FR2 measurement
Line 1031: Skip FR1(arfcn:%d) measurement due to Prioritized NR measurement
Line 1045: Conn NR-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d), Prioritized FR2(%d)
Line 1052: NR Search/Measurement (earfcn:%d) is already in progress(srch|meas ongoing:%d|%d)
Line 1093: Start Measurement: NR Frequency (earfcn:%d, measmode:%d)
Line 1095: [EN-DC] NR Config(%d) arfcn(%d)
Line 1118: Start Measurement: NR Object Checking (SCS:%d ,PeriodicityAndOffsetChoice:%d, offset:%d, duration:%d)
Line 1167: NR MeasType is invalid(%d)
Line 1207: [EN-DC] NR Config(%d) MeasType(%d)
Line 1210: LteRrm_ProcNrObjectCheckCnf: pFreqFromNr is NULL
Line 1218: NR Search/Measurement (earfcn:%d) is already in progress
Line 1225: NR srch/meas scheduling count is full(cnt:%d)
Line 1270: NR MeasType is invalid(%d)
Line 1381: [QTM] Get offset[%d] for Cell Rat_type[%d], CellGroupID[%d], pci[%d], arfcn[%d], band[%d], gci[%d]
Line 1385: [QTM] NR Cell in QOS DB. Apply offset[%d], original RSRP[%d] RSRQ[%d]
Line 1388: [QTM]                                      new RSRP[%d], new RSRQ[%d]
Line 1404: NR_EventB1: Mn(%d), offsetFreq(%d), hysteresis(%d),threshold_nr(%d)
Line 1435: NR_EventB2: Ms(%d), hysteresis(%d), b2_threshold1(%d), Mn(%d), offsetFreq(%d), b2_threshold2_nr(%d)
Line 1525: pCurMeasList is NULL
Line 1530: NR pCurFreqInfo is NULL!!!
Line 1553: LteRrm_RemoveNrPbchCandiList pNrPbchCandiList is NULL
Line 1574: DeriveSsbIndexUsingBdResult - ARFCN:%d PCID:%d ssbIndexByBD:%d
Line 1577:    >>VERIFY ssbIndexDerived:%d(3bit:%d) with BdResultSsbIndex:%d(3bit:%d)
Line 1583:    >>VERIFIED - set ssbIndexDerived:%d
Line 1588:    >>NOT MATCHED - set RRM_UNKNOWN_RSINDEX:%d
Line 1594:    >>UNKNOWN - set BdResultSsbIndex:%d
Line 1655: pCellInfo->nr_meas_rslt: NULL
Line 1661: LteRrm_FilteringNrSsbMeasResult - L1_FilterLength:%d, Max_L1_FilterLength:%d
Line 1666:    >>Run L1 filtering
Line 1709:    >>(L1 filtered) RSSI : %d(A0:%d, A1:%d)[/100dBm]
Line 1711:    >>(L1 filtered) RSRP : %d(A0:%d, A1:%d)[/100dBm]
Line 1713:    >>(L1 filtered) RSRQ : %d(A0:%d, A1:%d)[/100dB]
Line 1715:    >>(L1 filtered) RSSINR : %d(A0:%d, A1:%d)[/100dB]
Line 1761:    >>Run L3 filtering
Line 1887:  	::(old L3 filtered) RSSI:%d(A0:%d, A1:%d)[/100dBm], L3_FilterAlpha_Rsrp(%d), alpha_rsrp(%d)
Line 1890:  	::(old L3 filtered) RSRP:%d(A0:%d, A1:%d)[/100dBm], L3_FilterAlpha_Rsrp(%d), alpha_rsrp(%d)
Line 1893:  	::(old L3 filtered) RSRQ:%d(A0:%d, A1:%d)[/100dB], L3_FilterAlpha_Rsrq(%d), alpha_rsrq(%d)
Line 1896:  	::(old L3 filtered) RSSINR:%d(A0:%d, A1:%d)[/100dB], L3_FilterAlpha_Rssinr(%d), alpha_Rssinr(%d)
Line 1922:    >>(L3 filtered SSB) RSSI : %d(A0:%d, A1:%d)[/100dBm]
Line 1924:    >>(L3 filtered SSB) RSRP : %d(A0:%d, A1:%d)[/100dBm]
Line 1926:    >>(L3 filtered SSB) RSRQ : %d(A0:%d, A1:%d)[/100dB]
Line 1928:    >>(L3 filtered SSB) RSSINR : %d(A0:%d, A1:%d)[/100dB]
Line 2146:    >>Run L3 filtering
Line 2169:  	::(old L3 filtered Cell) RSRP:%d[/100dBm], L3_FilterAlpha_Rsrp(%d), alpha_rsrp(%d)
Line 2171:  	::(old L3 filtered Cell) RSRQ:%d[/100dB], L3_FilterAlpha_Rsrq(%d), alpha_rsrq(%d)
Line 2173:  	::(old L3 filtered Cell) RSSINR:%d[/100dB], L3_FilterAlpha_Rssinr(%d), alpha_Rssinr(%d)
Line 2175:  	::(old L3 filtered Cell) RSSI:%d[/100dBm], L3_FilterAlpha_Rsrp(%d), alpha_rsrp(%d)
Line 2202:    >>(L3 filtered Cell) RSRP : %d[/100dBm] RSRQ : %d[/100dB] RSSINR : %d[/100dB] RSSI : %d[/100dBm]
Line 2269:  	::RSRP threshRS-Index:(%d)%d[/100dBm], rsrpThreshExceedCnt:%d
Line 2290:  	::RSRQ threshRS-Index:(%d)%d[/100dB], rsrqThreshExceedCnt:%d
Line 2311:  	::RSSINR threshRS-Index:(%d)%d[/100dB], rssinrThreshExceedCnt:%d, 
Line 2340: pCellInfo or pCellInfo->nr_meas_rslt : NULL
Line 2355: LteRrm_MakeNrCellMeasResult - arfcn:%d, SCS:(enum)%d, cell_id:%d, NrSsbNum:%d, max_rs_index_cell_qual:(bool)%d
Line 2387:    >>SortingResult[%d] - rsrp:%d[/100dBm], rsrq:%d[/100dB], sinr:%d[/100dB]
Line 2400:    >>threshRS-Index present - rsrp:%d, rsrq:%d, sinr:%d
Line 2413:    >>RSRP:%d[/100dBm], RSRQ:%d[/100dB], RSSINR:%d[/100dB], RSSI:%d[/100dBm]
Line 2455: Invalid Cell(cell_id:%d)
Line 2461: pCellInfo->nr_meas_rslt : NULL
Line 2492:    >>cell_id:%d bestRssinrIndex:%d bestAvgRssinr:%d
Line 2505:      ::nr affcn:%d isForcedNrSchedule:%d nrFreqSrchCycle_BU:%d nrFreqMeasCycle_BU:%d bNewInterFreqFlag:%d
Line 2530:  	  #Blind detection fails and cell(%d) is removed
Line 2542: [DeriveSsbIndexFromCell] MEAS RESULT(ARFCN:%d PCID:%d) Failed verify SsbIndex
Line 2552: [DeriveSsbIndexFromCell] MEAS RESULT(ARFCN:%d PCID:%d) - ssbIndexDerived:%d
Line 2566:  	  #[BD]ssb_index:%d, ssb_timing_offset:%d, half_frame_num:%d
Line 2640: LteRrm_ProcNrMeasResult - measMode:%d, band:%d, arfcn:%d, measured_cnt:%d, sCinr:%d[/100dB]
Line 2646: pFreqInfo(earfcn:%d) is NULL)
Line 2657:    >>[%d]MeasResult - cell_id:%d
Line 2665: Invalid Cell(cell_id:%d)
Line 2671: pCellInfo->nr_meas_rslt : NULL
Line 2687:      ::measuredSsbCount:%d
Line 2705:        #ssb_index:%d, ssb_timing_offset:%d   ssb_index:%d, ssb_timing_offset:%d
Line 2749: Invalid ssb_index(%d) >= L(%d)
Line 2760:      ::[%d]measuredSsb - ssb_index:%d, cur_meas_time:%d, last_meas_time:%d, time_diff:%d[us]
Line 2777:      ::[%d]Drop Ssb - ssb_index:%d, (Avg)Rssinr:%d, bestRssinrIndex:%d
Line 2802:        #measured RSSI(%d)(Prx:%d, A1:%d)
Line 2803:        #measured RSRP(%d)(Prx:%d, A1:%d)
Line 2804:        #measured RSRQ(%d)(Prx:%d, A1:%d)
Line 2805:        #measured RSSINR(%d)(Prx:%d, A1:%d)
Line 2869:        #Forced L2N measurement(%d) is triggered, due to blind detection done.
Line 2894: LteRrm_ProcNrPbchResult : result(%d) ssbFrequency(%d) cellId(%d) subcarrierSpacing(%d) periodicity(%d)
Line 2897: LteRrm_ProcNrPbchResult : beamIndex(%d) isPscell(%d) sfnOffset(%d) frameBoundaryOffset(%d)
Line 2903: pFreqInfo(narfcn:%d) is NULL
Line 2911: pCellInfo(narfcn:%d, PCID:%d) is NULL
Line 2951: mmWave PBCH decode result : ref_beam_index(%d) beamIndexLSB(%d) beamIndexMSB(%d)
Line 2960: mmWave PBCH decode result : #ssb_index:%d, ssb_timing_offset:%d	 ssb_index:%d, ssb_timing_offset:%d
Line 3086: LteRrm_UpdateNrMeasResultFreq : numFreq(%d)
Line 3097: LteRrm_UpdateNrMeasResultFreq : Arfcn(%d) NumCell(%d) AgcGain(%d | %d)
Line 3112: pFreqInfo is NULL as a result of LteRrm_AllocFreqInfoBuf()
Line 3146: LteRrm_UpdateNrMeasResultFreq: new Cell - CellId(%d) Offset(%d)
Line 3155: result of LteRrm_AllocCellInfoBuf() is NULL
Line 3165: last element in pNrMeasResultFreq is black list
Line 3178: LteRrm_UpdateNrMeasResultFreq: existing Cell - CellId(%d) Offset(%d)
Line 3189: CellResults: ServSinr(%d) rsrp(%d) rsrq(%d) rssinr(%d) rssi(%d), ResultsSsbCnt(%d)
Line 3207: ResultsSsbCnt(%d) is invalid
Line 3224: BeamResults(%d): beamIdx(%d) rsrp(%d) rsrq(%d) rssinr(%d) rssi(%d)
Line 3228: pCellInfo->nr_meas_rslt : NULL
Line 3284: Invalid NrMeasType(%d)
Line 3511: pFreqInfo(earfcn:%d) is NULL)
Line 3517: mismatched MEAS CNF msg
Line 3525: isSyncResult is FALSE (%d)
Line 3529:      ::nr arfcn:%d isForcedNrSchedule:%d bNewInterFreqFlag:%d
Line 3557:      ::nr arfcn:%d isForcedNrSchedule:%d syncNum:%d
Line 3587: pFreqInfo(earfcn:%d) is NULL)
Line 3593: mismatched MEAS CNF msg
Line 3601: isMeasResult is FALSE (%d)
Line 3642: MeasID(%d), ObjectID(%d), ReportId(%d), Choice(%d), Purpose(%d), ReportAmount(%d), Removed this periodic meas(%d)
Line 3644: LTERRM_REPORT_NR_STRONGEST_CELLS meas. config found
Line 3753: [DEBUG] %d, %d, RSRP(%d, %d)
Line 3769: LteRrmConn_NrSrchCycleFr1(GapPattern:%d, periodicity:%d) -> set default
Line 3782: LteRrmConn_NrMeasCycleFr1(GapPattern:%d, periodicity:%d) -> set default
Line 3796: LteRrmConn_NrSrchCycleFr2(GapPattern:%d, periodicity:%d) -> set default
Line 3810: LteRrmConn_NrMeasCycleFr2(GapPattern:%d, periodicity:%d) -> set default
Line 3880: pFreqInfo is NULL
Line 3886: pMeasResult is NULL
Line 3909: Ncell (Cell ID:%d, RSRP=%d, RSRQ=%d RSSINR=%d)
Line 3971: SSB index(%d|%d) measured_rsrp(%d) measured_rsrq(%d) measured_sinr(%d)
Line 4076: ucNrFreqNum[%d] arfcn:%d
Line 4106: NR NCELL[%d] arfcn:%d periodicity:%d cell_id:%d
Line 4115:  	  #ssb_index:%d, ssb_timing_offset:%d	#ssb_index:%d, ssb_timing_offset:%d
Line 4173: LTE_MEAS_NR: B1 threshold_type(%d) is invalid
Line 4182: LTE_MEAS_NR: B1 rat_type:%d, threshold type:%d, B1 threshold value:%d
Line 4203: LTERRM_EVENT_B2NR: threshold1_type(%d) is invalid
Line 4233: LTERRM_EVENT_B2NR: threshold2_type(%d) is invalid
Line 4244: LTE_MEAS_NR: B2 threshold1 type:%d, B2 threshold1 value:%d, B2 rat_type:%d, threshold2 type:%d, B2 threshold2 value:%d
Line 4265: LteRrmConn_CastReportPurposeV1430 rpt is NULL
Line 4278: UnKnown Cast Type(%d)
Line 4326: [ENDC_LOCAL_BARRED] >> CHECK NRCELL BARRED (Arfcn:%d, Pcid:%d, interval(ms):%d, duration(sec):%d)
Line 4333: [ENDC_LOCAL_BARRED] >> CHECK NRCELL BARRED EXPIRE (Arfcn:%d, Pcid:%d, interval(ms):%d, duration(sec):%d)
Line 4360: pCellInfo or pCellInfo->nr_meas_rslt : NULL
Line 4393: Update search result : earfcn(%d), cell ID(%d), new_offset(%d), delta(%d), search_position(%d), old_offset(%d)
Line 4401: No update search result(delta:%d) : earfcn(%d), cell ID(%d), time_offset(%d), search_frame_position(%d)
Line 4412: [ENDC_LOCAL_BARRED] >> INIT
Line 4437: [EN-DC] NR Config(%d) Purpos_v1430(%d)
Line 4460: TempCellInfo->nr_meas_rslt : NULL
Line 4474: [%d] EN-DC NR Serving Cell(earfcn:%d, PCID:%d) is involved
Line 4480: Result[%d] - PCID(%d), RSRP(%d), RSRQ(%d), RSSINR(%d)
Line 4527: rs_index Result[%d/%d]- RSRP(%d), RSRQ(%d), RSSINR(%d)
Line 4541: report_add_neigh_meas is started
Line 4558: report_add_neigh_meas is involved
Line 4563: NR ServingCell's Ncell Result[%d] - PCID(%d), RSRP(%d), RSRQ(%d) RSSINR(%d)
Line 4609: rs_index Result[%d/%d]- RSRP(%d), RSRQ(%d), RSSINR(%d)
Line 4625: report_add_neigh_meas is not involved
Line 4636: report_add_neigh_meas is not involved
Line 4730: LteRrmConn_MakeNrReportMsg pMeas is NULL
Line 4737: Serving Cell(%d) == LockPci(%d), No NR measurement report sent to network
Line 4834: LteRrmConn_MakeNRReportMsg: MeasID(%d) objID(%d) rptID(%d) removePeriodicMeas(%d)
Line 4838: Event ID(%s) PCell_ID(%d) PCell_RSRP(%d) NumCell(%d) Sent(%d) leave(%d)
Line 4847: Idx(%d) NCell_ID(%d) measured_rsrp(%d) measured_rsrq(%d) measured_rssinr(%d)
Line 4855: SFTD report num:%d
Line 4862:    >>[%d] pci:%d, sfn_offset_result:%d, frame_boundary_offset_result:%d, is_rsrp_present:%d, rsrp_result:%d
Line 4895: Make NR Meas. Cell Report_Trigger type(RSRP:%d, RSRQ :%d, SINR:%d)
Line 4902: Make NR Meas. Beam Report_Trigger type(report_rs_index_resultNr:%d, max_rs_index_report:%d, RSRP:%d, RSRQ :%d, SINR:%d)
Line 4908: cellsToReportList[i]->nr_meas_rslt : NULL
Line 4948:    >>threshRS-Index present - rsrp:%d, rsrq:%d, sinr:%d
Line 5113: SSB index(%d|%d) measured_rsrp(%d) measured_rsrq(%d) measured_sinr(%d)
Line 5128: NR measured_rsrp(%d) measured_rsrq(%d) measured_sinr(%d)
Line 5132: NR filtered_rsrp(%d) filtered_rsrq(%d) filtered_sinr(%d)
Line 5198: [%d] SCell(earfcn:%d, PCID:%d) is involved
Line 5202: SCell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
Line 5245: [ENDC_LOCAL_BARRED] >> SET Idx[%d] Arfcn:%d, Pcid:%d, Duration[sec]:%d, SetTime:%d
Line 5286: Cannot Allocate FreqInfo buffer(%d)
Line 5330: LteRrmConn_SetNrFreqObject : SCS %d smtc_included %d periodicity %d offset %d ssb_duration %d
Line 5365: sftd_num(%d) is more than LTE_MAX_CELL_SFTD(3)!!!
Line 5374: LteRrmConn_SetNrFreqObject : sftd_num %d cellsForWhichToReportSFTD %d
Line 5403:    >>SsbToMeasurePresent is present - NumSsbToMeasure:%d SsbToMeasure:[1]0x%08x[0]0x%08x
Line 5423:    >>SsbToMeasurePresent is not present - NumSsbToMeasure:%d SsbToMeasure:[1]0x%08x[0]0x%08x
Line 5460: LteRrmConn_SetNrScheduleInfoBU(%s)
Line 5474:      ::nr affcn:%d nrFreqSrchCycle(%d,Backup:%d) nrFreqMeasCycle(%d,Backup:%d)
Line 5610: LteRrm_GetSmtc2LpMeasType : smtc2_lp_present is presented.
Line 5621: LteRrm_GetSmtc2LpMeasType : Type(%d) PCID(%d) is checked.
Line 5656: LteRrm_SetNrOngoingFlag - pFreqInfo is NULL
Line 5664: LteRrm_SetNrOngoingFlag - NR Freq(%d) srch_ongoing(%d -> %d) meas_ongoing(%d -> %d)
Line 5670: LteRrm_SetNrOngoingFlag - NR Freq(%d) srch_ongoing(%d -> %d)
Line 5675: LteRrm_SetNrOngoingFlag - NR Freq(%d) meas_ongoing(%d -> %d)
Line 5696: NR Freq(%d) Search/Measure ongoing: %d / %d
Line 5719: NrPbchDecoding is ongoing
Line 5728: pFreqInfo(earfcn:%d) is NULL -> remove
Line 5770: Lower value TTT is ongoing(lower TTT MID:%d,TimeToTrigger:%d, Target MID:%d,TimeToTrigger:%d)
Line 5780: Lower meas ID TTT is ongoing(lower MID:%d,TimeToTrigger:%d, Target MID:%d,TimeToTrigger:%d)
Line 5840: timeToTriggered(MID:%d, arfcn:%d, cell_id:%d)
Line 5852: timeToTriggered(MID:%d, arfcn:%d, cell_id:%d)
Line 5916: TimeToTrigger Delayed due to FR2 MR(mID(%d), rID(%d)) start(%d) stop(%d) offset(%d)
Line 5922: TimeToTrigger Delayed due to Prioritized NR MR(mID(%d), rID(%d)) start(%d) stop(%d) offset(%d)
Line 5929: TimeToTrigger Delayed due to lower TTT MR(mID(%d), rID(%d)) start(%d) stop(%d) offset(%d)
Line 5934: TimeToTrigger Delayed due to lower meas ID MR(mID(%d), rID(%d)) start(%d) stop(%d) offset(%d)
Line 5939: TimeToTrigger Expired(mID(%d), rID(%d)) start(%d) stop(%d) offset(%d)
