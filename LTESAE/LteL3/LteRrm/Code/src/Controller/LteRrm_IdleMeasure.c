Line 564: HighPriority Cell(%d): HP_meas_cnt(%d) > 3+ Max_HP_MeasCnt(%d)=Treselection(%d)/IdleMeasPeriod(%d ms): Don't measure again
Line 590: HighPriority Cell(%d): Continuous_HP_meas_cnt(%d)<= 3+Max_HP_MeasCnt(%d) IsTreselectionTrig(%d)
Line 681: WARNING: NOT Supported DL_EARFCN %d!!!
Line 767: WARNING: NOT Supported DL_EARFCN %d!!!
Line 861: - threshSservingLow[%d] cinr[%d] AllowLowPrioMeasPoorSinr[%d]
Line 870: WARNING:NOT Supported DL_EARFCN %d!!!
Line 876: [EUCA] Avoid EUCA Freq(%d) Search/Meas scheduling: Freq_type(%d), bEucaMeasStart(%d)
Line 895: bTrigEqualLowPrioAllMeas[%d] bFirstCycle[%d] bFlagOn[%d]
Line 1011: measTrig[%d] LastMeasTime:%d, curTimeInMs:%d, interval:%d, cycle:%d
Line 1046: Intra-Freq Not Scheduled (ST:%d, %d, %d)
Line 1068: CheckMeasCycle: IntraFreq Search (%d)
Line 1085: srchCycle set to (%d) (max cinr:%d)
Line 1099: Diablo Deep Stationary Mode IntraFreq Search cycle (%d)
Line 1106: CheckMeasCycle: IntraFreq Measure
Line 1124: ALL MEAS cycle - Intra-Freq bFirstCycle(%d)
Line 1131: MeasOnly(%d) - cinr(%d) srchTriggered(%d)
Line 1137: SearchOnly(%d) - srchTriggered(%d), measTriggered(%d)
Line 1146: IntraFreq Measure will start after search
Line 1177: IntraFreqMeas(%d) Already triggered during current DRX cycle: Skip measurement
Line 1184: IntraFreqMeas(%d) for Reselection scheduled: LastMeasTime(%d), curTimeMs(%d)
Line 1190: Mode(%d) - srchTriggered(%d), measTriggered(%d)
Line 1216: InterFreq(HIGH) is Empty
Line 1223: High Priority InterFreq is Empty
Line 1228: CheckMeasCycle: High InterFreq Search
Line 1233: CheckMeasCycle: High InterFreq Measure
Line 1251: pCurInterFreq->earfcn(%d), SrchAllMeasDone(%d), MeasAllMeasDone(%d)
Line 1255: LTERRM->Meas.IdleScheduleInfo.pCurInterFreq == NULL
Line 1276: Skip IdleAllMeas in higher inter
Line 1280: ALL MEAS cycle - High-Inter(%d) bFirstCycle(%d)
Line 1285: High Inter Freq Measure will start after search
Line 1304: HighInterFreqMeas(%d) Already measured at current DRX cycle: Skip measurement
Line 1312: HighInterFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 1317: HighInterFreqMeas(%d) for Reselection scheduled: LastMeasTime(%d), curTimeMs(%d)
Line 1324: Mode(%d) - srchTriggered(%d), measTriggered(%d)
Line 1351: UtraFreq(HIGH) is Empty
Line 1358: High Priority Utra Freq is Empty
Line 1363: CheckMeasCycle: High Utra Search
Line 1368: CheckMeasCycle: High Utra Measure
Line 1386: pCurUtraFreq->earfcn(%d), SrchAllMeasDone(%d), MeasAllMeasDone(%d)
Line 1390: LTERRM->Meas.IdleScheduleInfo.pCurUtraFreq == NULL
Line 1411: Skip IdleAllMeas in higher UTRAN
Line 1415: ALL MEAS cycle - High-Utra(%d) bFirstCycle(%d)
Line 1420: High Utra Freq Measure will start after search
Line 1440: HighUtraFreqMeas(%d) Already triggered during current DRX cycle: Skip measurement
Line 1448: HighUtraFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 1453: HighUtraFreqMeas(%d) for Reselection scheduled: LastMeasTime(%d), curTimeMs(%d)
Line 1459: Mode(%d) - srchTriggered(%d), measTriggered(%d)
Line 1486: GeranFreq(HIGH) is Empty
Line 1515: CheckMeasCycle: High Geran Measure(cycle:%d, freqNum:%d, conversion_cycle:%d)
Line 1523: CheckMeasCycle: High Geran Verify(cycle:%d, freqNum:%d, conversion_cycle:%d)
Line 1541: pCurGeranFreq->earfcn(%d), MeasAllMeasDone(%d)
Line 1545: LTERRM->Meas.IdleScheduleInfo.pCurGeranFreq == NULL
Line 1560: Skip IdleAllMeas in higher GERAN
Line 1564: ALL MEAS cycle - High-Geran(%d) bFirstCycle(%d)
Line 1590: HighGeranFreqMeas(%d) Already triggered at current DRX cycle: Skip measurement
Line 1598: HighGeranFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 1603: HighGeranFreqMeas(%d) for Reselection scheduled: LastMeasTime(%d), curTimeMs(%d)
Line 1609: Mode(%d) - srchTriggered(%d), measTriggered(%d)
Line 1632: CdmaSystemTimeFlag(%d)0 is not valid, Not schedule CDMA meas.
Line 1645: CdmaFreq(HIGH) is Empty
Line 1659: High Priority Cdma Freq is Empty
Line 1664: CheckMeasCycle: High Cdma Measure
Line 1681: pCurCdmaFreq->earfcn(%d), MeasAllMeasDone(%d)
Line 1685: IdleScheduleInfo.pCurCdmaFreq == NULL
Line 1698: Skip IdleAllMeas in higher CDMA
Line 1702: ALL MEAS cycle - High-Cdma(%d) bFirstCycle(%d)
Line 1718: HighCdmaFreqMeas(%d) Already triggered during current DRX cycle: Skip measurement
Line 1726: HighCdmaFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 1731: HighCdmaFreqMeas(%d) for Reselection scheduled: LastMeasTime(%d), curTimeMs(%d)
Line 1737: Mode(%d) - measTriggered(%d)
Line 1810: NrFreq(LOW) is Empty
Line 1814: LteRrmIdle_CheckNrFreqMeas (%d)(%d)
Line 1824: CheckMeasCycle: NrFreq Search (current total count:%d) (%d)
Line 1863: Diablo Deep Stationary Mode NrFreq Search cycle (%d)
Line 1892: CheckMeasCycle: NrFreq Measure(current total count:%d)(measNum:%d)
Line 1923: Skip IdleAllMeas in NR
Line 1928: ALL MEAS cycle - NR-Freq(%d) bFirstCycle(%d) TrigEqualLowPrioAllMeas(%d) AllMeasDone(SRCH:%d,BD:%d,MEAS:%d)
Line 1933: Nr Freq Measure will start after search
Line 1968: NrFreqMeas(%d) Already triggered at current DRX cycle: Skip measurement
Line 1974: NrFreqMeas(%d) for Reselection scheduled: LastMeasTime(%d), curTimeMs(%d)
Line 1979: Mode(%d) - srchTriggered(%d), measTriggered(%d)
Line 2004: pNrFreq(HIGH) is Empty
Line 2011: High Priority NrFreq is Empty
Line 2016: CheckMeasCycle: High NrFreq Search(current total count:%d)
Line 2020: CheckMeasCycle: High NrFreq Measure(current total count:%d)
Line 2049: Skip IdleAllMeas in higher NR
Line 2053: ALL MEAS cycle - High-NR(%d) bFirstCycle(%d) AllMeasDone(SRCH:%d,BD:%d,MEAS:%d)
Line 2058: High Nr Freq Measure will start after search
Line 2083: HighNrFreqMeas(%d) Already measured at current DRX cycle: Skip measurement
Line 2089: HighNrFreqMeas(%d) for Reselection scheduled: LastMeasTime(%d), curTimeMs(%d)
Line 2094: Mode(%d) - srchTriggered(%d), measTriggered(%d)
Line 2122: InterFreq(LOW) is Empty
Line 2126: Highest Ranking Start
Line 2132: LteRrmIdle_CheckInterFreqMeas
Line 2141: CheckMeasCycle: InterFreq Search (%d)
Line 2148: srchCycle set to IdleMeasPeriod(%d)*2
Line 2162: Diablo Deep Stationary Mode InterFreq Search cycle(%d)
Line 2172: CheckMeasCycle: InterFreq Measure
Line 2193: pCurInterFreq->earfcn(%d), SrchAllMeasDone(%d), MeasAllMeasDone(%d)
Line 2197: IdleScheduleInfo.pCurInterFreq == NULL
Line 2218: Skip IdleAllMeas in inter
Line 2222: ALL MEAS cycle - Inter-Freq(%d) bFirstCycle(%d) TrigEqualLowPrioAllMeas(%d)
Line 2227: Inter Freq Measure will start after search
Line 2246: InterFreqMeas(%d) Already triggered at current DRX cycle: Skip measurement
Line 2254: InterFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 2259: InterFreqMeas(%d) for Reselection scheduled: LastMeasTime(%d), curTimeMs(%d)
Line 2266: Mode(%d) - srchTriggered(%d), measTriggered(%d)
Line 2294: UtraFreq(LOW) is Empty
Line 2298: LteRrmIdle_CheckUtraFreqMeas
Line 2312: CheckMeasCycle: Utra Search %d)
Line 2336: CheckMeasCycle: Utra Measure
Line 2357: pCurUtraFreq->earfcn(%d), SrchAllMeasDone(%d), MeasAllMeasDone(%d)
Line 2361: LTERRM->Meas.IdleScheduleInfo.pCurUtraFreq == NULL
Line 2382: Skip IdleAllMeas in UTRAN
Line 2386: ALL MEAS cycle - Utra-Freq(%d) bFirstCycle(%d) TrigEqualLowPrioAllMeas(%d)
Line 2391: Utra Freq Measure will start after search
Line 2410: UtraFreqMeas(%d) Already triggered during current DRX cycle: Skip measurement
Line 2418: UtraFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 2423: UtraFreqMeas(%d) for Reselection scheduled: LastMeasTime(%d), curTimeMs(%d)
Line 2430: Mode(%d) - srchTriggered(%d), measTriggered(%d)
Line 2457: GeranFreq(LOW) is Empty
Line 2461: LteRrmIdle_CheckGeranFreqMeas
Line 2492: CheckMeasCycle: Geran Measure(cycle:%d, freqNum:%d, conversion_cycle:%d)
Line 2499: CheckMeasCycle: Geran Verify(cycle:%d, freqNum:%d, conversion_cycle:%d)
Line 2518: pCurGeranFreq->earfcn(%d), MeasAllMeasDone(%d)
Line 2522: IdleSchedule.pCurGeranFreq == NULL
Line 2537: Skip IdleAllMeas in GERAN
Line 2541: ALL MEAS cycle - Geran-Freq(%d) bFirstCycle(%d) TrigEqualLowPrioAllMeas(%d)
Line 2565: GeranFreqMeas(%d) Already triggered during current DRX cycle: Skip measurement
Line 2573: GeranFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 2578: GeranFreqMeas(%d) for Reselection scheduled: LastMeasTime(%d), curTimeMs(%d)
Line 2585: Mode(%d) - Measure_Trig(%d), Verify_Trig(%d)
Line 2608: CdmaSystemTimeFlag(%d) is not valid, Not schedule CDMA meas.
Line 2617: CdmaFreq(LOW) is Empty
Line 2624: LteRrmIdle_CheckCdmaFreqMeas
Line 2632: CheckMeasCycle: Cdma Measure
Line 2651: pCurCdmaFreq->earfcn(%d), MeasAllMeasDone(%d)
Line 2655: IdleSchedule.pCurCdmaFreq == NULL
Line 2669: Skip IdleAllMeas in CDMA
Line 2673: ALL MEAS cycle - Cdma-Freq(%d) bFirstCycle(%d) TrigEqualLowPrioAllMeas(%d)
Line 2686: CdmaFreqMeas(%d) Already triggered during current DRX cycle: Skip measurement
Line 2694: CdmaFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 2699: CdmaFreqMeas(%d) for Reselection scheduled: LastMeasTime(%d), curTimeMs(%d)
Line 2706: Mode(%d) - measTriggered(%d)
Line 2941: MeasMode is invalid(%d)
Line 3512: MeasMode is invalid(%d)
Line 4354: [NR DRDS OPT] opposite stack(%s_%d) set ENDC/SCriteria(%x)(%d), TpClk(%d, %d)
Line 4367: No Evaluation: IdleProc(%s) cinr(%d)
Line 4768: Equal/Low priority All measure is suspended
Line 4824: Equal/Low priority All measure is suspended (Srxlev >= ThreshServLow)
Line 4860: [NR DRDS OPT2] CINR(%d) TpClk(%d, %d, %d, %d) - skip IRAT
Line 5183: LteRrmIdle_CheckNrMeasureBeforeReselection
Line 5189: pFreqInfo is NULL: return FALSE
Line 5212: - earfcn(%d) cell_id(%d) will be measured at the current DRX cycle before Reselection(MeasureRetried(%d)) 
Line 5230: Measurement for Reselection is not required. return FALSE
Line 5673: LteRrmIdle_ProcMeasResult:curMeasType(%s), isLastMeas(%d)
Line 5677: IdleMeasSuspendForTx is TRUE -> Idle Measurement is suspended
Line 5791: LteRrmIdle_ProcMeasSchedule
Line 5806: Meas Can't start: MeasType is not Idle(%s)
Line 5867: IdleSchedule.basicCycleCnt : %d
Line 5901: LteRrmIdle_StartNonIntraMeas
Line 5913: [NR DRDS OPT] opposite stack(%s_%d) set ENDC/SCriteria(%x)(%d), TpClk(%d, %d)
Line 5920: S_ServingCell > S_nonintrasearch: Only High priority search/measurement scheduled
Line 5965: TCS_FORCED_MIN_DRX_PERIOD(%d) -> 128
Line 6217: Invalid DrxConfig(%d)
Line 6231: highSpeedFlag(%d) or bHST_MeasFlag_R14(%d) is TRUE: Change intraFreqSrchCycle(%d), intraFreqMeasCycle(%d)
Line 6235: highSpeedFlag && HST_Meas flag are all FALSE
Line 6241: RrmIdleFilterLength(%d), IdleServL1FilterLength(%d)
Line 6298: LteRrmIdle_StopBplmnScan - pPrimaryCell NULL
Line 6306: LteRrm_AllocCellInfoBuf: TargetCell
Line 6310: TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 6354: BPLMN RSSI Scan suspend, Return ! (BplmnTargetEarfcn=%d)
Line 6374: BPLMN suspend, Return ! (earfcn=%d, cell id=%d, BplmnTargetEarfcn=%d)
Line 6379: BPLMN suspend, Return ! (BplmnTargetEarfcn=%d)
Line 6397: BPLMN stop, Return ! (earfcn=%d, cell id=%d, BplmnTargetEarfcn=%d)
Line 6402: BPLMN stop, Return ! (BplmnTargetEarfcn=%d)
Line 6431: LteRrmIdle_StartBplmnScan(IdleProc:%d, Hypo:%d, BWBW(%d)
Line 6468: Checking Idle All meas done in earfcn(%d)
Line 6475: - SrchAllMeasDone(%d), MeasAllMeasDone(%d): Need to run rest of First All Meas
Line 6482: - MeasAllMeasDone(%d): Need to run rest of First All Meas
Line 6487: - SrchAllMeasDone(%d), MeasAllMeasDone(%d): All-done
Line 6523: Trigger All Measure for Equal/Lower priority
Line 6549: Finish Equal/Lower priority All Measure
Line 6588: pFreqInfo==NULL in LteRrmIdle_CheckMeasureBeforeReselectionFromSortedList
Line 6611: - earfcn(%d) cell_id(%d) will be measured at the current DRX cycle before Reselection(MeasureRetried(%d)) 
Line 6629: - earfcn(%d) : Not required to measure at the current DRX cycle(Reset waitDrxForMeas = FALSE) 
Line 6653: LteRrmIdle_CheckMeasureBeforeReselection
Line 6657: pFreqList==NULL in LteRrmIdle_CheckMeasureBeforeReselection
Line 6665: High Priority InterFreq is Empty
Line 6689: pFreqInfo is NULL: return FALSE
Line 6713: - earfcn(%d) cell_id(%d) will be measured at the current DRX cycle before Reselection(MeasureRetried(%d)) 
Line 6736: pFreqInfo is Last: Measurement for Reselection is not required. return FALSE
Line 6754: pFreqList is empty: return FALSE
Line 391: LteRrmIdle_IsLowerThanSservingLow(Srxlev_Serv:%d.%ddB, Squal_Serv:%d.%ddB, ThreshServLow_P:%ddB, ThreshServLow_Q:%ddB, SServingLowOffset:%ddB)
Line 400: IsLowerThanSservingLow TRUE (%d, %d)
Line 239: S_IntraSearch value exists!  S_ServingCell > S_IntraSearch
Line 242: S_IntraSearchP_Ind(%d) Srxlev(%d.%ddB) S_IntraSearchP(%ddB)
Line 248: S_IntraSearchQ_Ind(%d) Squal(%d.%ddB) S_IntraSearchQ(%ddB)
Line 257: S_RSRP(%d.%ddB) S_RSRQ(%d.%ddB) q_RxlevMin(%ddB) q_QualMin(%ddB) pMax(%ddBm)
Line 262: Check Intra Search: run(%d) not-run(%d)
Line 2989: IdleScheduleInfo.pCurSrchHighInterFreq NULL
Line 3027: IdleSchedule.pCurMeasHighInterFreq NULL
Line 3069: Start Measurement: High Priority Inter Frequency (earfcn:%d, mode:%d)
Line 3631: pNrFreq(HIGH) is Empty(%d | %d) or scheduling count(%d)
Line 3638: NR Search/Measurement (earfcn:%d) is already in progress(srch|meas ongoing:%d|%d)
Line 3651: Idle High NR-Selected Mode(%d), SrchCycle(%d), MeasCycle(%d)
Line 3678: Start Measurement: High Priority NR Frequency (earfcn:%d, mode:%d)
Line 3125: IdleSchedule.pCurSrchHighUtraFreq NULL
Line 3164: IdleSchedule.pCurSrchHighUtraFreq NULL
Line 3199: Start Measurement: High Priority Utra Frequency (earfcn:%d, mode:%d)
Line 3218: MeasMode is invalid(%d)
Line 3256: [NR DSDS OPT] Skip GERAN schedule (%s, %d)
Line 3287: IdleSchedule.pCurMeasHighGeranFreq NULL
Line 3325: IdleSchedule.pCurVerifyHighGeranFreq NULL
Line 3353: Start Measurement: High Priority Geran Frequency (earfcn:%d, mode:%d)
Line 3372: MeasMode is invalid(%d)
Line 3450: IdleSchedule.pCurMeasHighCdmaFreq NULL
Line 3458: MeasMode is invalid(%d)
Line 3465: Start Measurement: High Priority Cdma Frequency (earfcn:%d, mode:%d)
Line 3474: MeasMode is invalid(%d)
Line 3746: IdleSchedule.pCurSrchInterFreq NULL
Line 3754: Highest Ranking NOT Start yet(First earfcn:%d)
Line 3759: Highest Ranking Start
Line 3763: Highest Ranking NOT Start yet(earfcn:%d)
Line 3794: IdleSchedule.pCurMeasInterFreq NULL
Line 3834: Start Measurement: Inter Frequency (earfcn:%d, mode:%d)
Line 3547: pNrFreq is Empty(%d | %d) or scheduling count(%d)
Line 3554: NR Search/Measurement (earfcn:%d) is already in progress(srch|meas ongoing:%d|%d)
Line 3566: Idle NR-Selected Mode(%d), SrchCycle(%d), MeasCycle(%d)
Line 3582: Start Measurement: NR Frequency (earfcn:%d, mode:%d)
Line 3907: IdleSchedule.pCurSrchUtraFreq NULL
Line 3941: IdleSchedule.pCurMeasUtraFreq NULL
Line 3974: Start Measurement: Utra Frequency (earfcn:%d, mode:%d)
Line 3995: MeasMode is invalid(%d)
Line 4032: [NR DSDS OPT] Skip GERAN schedule (%s, %d)
Line 4074: IdleSchedule.pCurMeasGeranFreq NULL
Line 4108: IdleSchedule.pCurVerifyGeranFreq NULL
Line 4135: Start Measurement: Geran Frequency (earfcn:%d, mode:%d)
Line 4154: MeasMode is invalid(%d)
Line 4225: IdleSchedule.pCurMeasCdmaFreq NULL
Line 4233: MeasMode is invalid(%d)
Line 4239: Start Measurement: Cdma Frequency (earfcn:%d, mode:%d)
Line 4248: MeasMode is invalid(%d)
Line 4608: -> All meas starts from intra srch
Line 4626: IdleSleepAfterIntraMeas is TRUE
Line 4635: IdleAllowNonIntraMeas is FALSE
Line 4646: S_ServingCell > S_nonintrasearch: Only High priority search/measurement scheduled
Line 4654: Equal/Low priority All measure is suspended
Line 4695: Equal/Low priority All measure is suspended (Srxlev >= ThreshServLow)
Line 4438: minSrchCycle:%d, srchCycleLevel:%d(%d), maxSrchCycleLevel:%d, prevPcellRsrp:%d, IdleMeasPeriod:%d
Line 4478: curContSfailDrxCnt(%d) >= Nserv(%d)
Line 4487: Serving Cell not Suitable(DRX cnt:%d, LV:%d)
Line 4493: Cell LOST !!!  <-  (noAnySuitCellDrxCnt(%d) > cntDrxForIdleOos(%d))
Line 4526: Low CINR -> start all meas.(%d)
Line 4293: LteRrmIdle_UpdateContSfailCnt - band7(manual) : Srxlev = %d (%d)
Line 4304: curContSfailDrxCnt: reset
Line 4319: curContSfailDrxCnt: %d
Line 2830: Start Measurement: Intra Frequency (earfcn:%d, mode:%d)
Line 2855: MeasMode is invalid(%d)
Line 2865: measMode=%d, num_of_meas_cell = %d
Line 2878: SCellFreq is NULL for MTM
Line 2890: SecondaryCell is NULL for MTM
Line 4932: -> All meas starts from intra srch
Line 4946: IdleSleepAfterIntraMeas is TRUE
Line 4955: IdleAllowNonIntraMeas is FALSE
Line 4990: [NR DRDS OPT] opposite stack(%s_%d) set ENDC(%d), TpClk(%d, %d)
Line 5003: bFirstCycle is TRUE and All High Inter Freq Meas completed
Line 5131: pFreqInfo NULL
Line 5263: [NR DRDS OPT] opposite stack(%s_%d) set ENDC(%d), TpClk(%d, %d)
Line 5331: [NR DRDS OPT] opposite stack(%s_%d) set ENDC(%d), TpClk(%d, %d)
Line 5430: [NR DRDS OPT] opposite stack(%s_%d) set ENDC(%d), TpClk(%d, %d)
Line 5443: bFirstCycle is TRUE and All Inter Freq Meas completed
Line 5468: [NR DRDS OPT2] CINR(%d) TpClk(%d, %d, %d, %d) - skip IRAT
Line 5067: pFreqInfo NULL
Line 5535: [NR DRDS OPT] opposite stack(%s_%d) set ENDC(%d), TpClk(%d, %d)
Line 5836: IdleAllowNonIntraMeas is FALSE
Line 2732: curMeasType is not idle. other measurement(%s) is running...
Line 2741: Start Measurement: Serving Freq (earfcn:%d)
Line 2763: SCellFreq is NULL for MTM
Line 2776: SecondaryCell is NULL for MTM
Line 294: Srxlev(%d.%ddB) S_NonIntraSearchP_Ind(%d) S_NonIntraSearchP(%ddB) LTERRM_S_NONINTRASEARCH_OFFSET(%ddB)
Line 306: Squal(%d.%ddB) S_NonIntraSearchQ_Ind(%d) S_NonIntraSearchQ(%ddB)
Line 317: S_NonIntraSearch value exists!  S_ServingCell > S_NonIntraSearch
Line 327: S_RSRP(%d.%ddB) S_RSRQ(%d.%ddB) q_RxlevMin(%ddB) q_QualMin(%ddB) pMax(%ddBm)
Line 332: However S_CINR(%d) is too low !! Try Inter/I-RAT measurement regardless of Snonintrasearch condition
Line 340: Check Non-intra search: run(%d) not-run(%d)
