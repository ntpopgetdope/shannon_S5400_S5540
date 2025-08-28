Line 374: LteRrmConn_InitMeasConfigList
Line 549: LteRrmConn_FreeMeasConfigList
Line 719: LteRrmConn_InitAllReportStatus
Line 752: LteRrmConn_InitMeasScheduler(keepSCellSched:%d)
Line 826: LteRrmConn_ForcedInterFreqSchedule - already done
Line 832: LteRrmConn_ForcedInterFreqSchedule - no Inter-Freq
Line 914: LteRrmConn_ForcedUtraFreqSchedule - no Utra-Freq
Line 920: LteRrmConn_ForcedUtraFreqSchedule
Line 938: - utraFreqSrchCycle(%d) utraFreqMeasCycle(%d) intraFreqSrchCycle(%d)
Line 945: - interFreqSrchCycle(%d) interFreqMeasCycle(%d)
Line 954: - ScellFreqSrchCycle(%d) ScellFreqMeasCycle(%d)
Line 963: - geranFreqMeasCycle(%d) geranFreqIdentifyCycle(%d) geranFreqVerifyCycle(%d)
Line 969: - cdmaFreqMeasCycle(%d)
Line 986: - nrFreq(%d) FreqSrchCycle(%d) FreqMeasCycle(%d)
Line 1011: LteRrmConn_RestoreMeasSchedule (bnewInterFreqFlag:%d bUtraForcedMeas:%d)
Line 1192: LteRrmConn_StartMeas(basicCycleCnt:%d)(isFirst:%d_%d)
Line 1196: Skip short measure cycle
Line 1205: Skip measure cycle due to Restore
Line 1232: ConnMeasSuspendForTx(%d), PBCH mode(%d), Stationary(%d). Only IntraF Meas can be started
Line 1239: Only IntraF Meas can be started after C-DRX wakeup
Line 1269: Skip all IRAT scheduling for ENDC(%d), DL(%d), UL(%d)
Line 1276: Do not skip IRAT scheduling for ENDC(%d), DL(%d), UL(%d)
Line 1284: Inter-RAT Measurement is skipped due to utra_SI_AcquisitionForHO(CgiState:%d, CgiMeasType:%d)
Line 1399: remove IRAT(%d) MID(%d)
Line 1411: object(arfcn:%d) is modified
Line 1465: remove Intra_MID(%d)
Line 1478: EUTRA object(earfcn:%d) is modified
Line 1490: Initialized Pcell IndOff (%d -> 0)
Line 1518: remove SCell_MID(%d)
Line 1533: SCell(ID:%d, earfcn=%d is added in ScellmeasList
Line 1545: remove InterMeas_MID(%d)
Line 1557: EUTRA object(earfcn:%d) is modified
Line 1569: Initialized Pcell IndOff (%d -> 0)
Line 1641: Remove exhausted MID(%d)
Line 1754: Cannot Allocate MeasList buffer
Line 1770: LteRrmConn_AddMeasList obj(%d) or rpt(%d) is NULL
Line 1794: LteRrmConn_RemoveMeasList pMeasList is NULL
Line 1836: - Timing info not sufficient --> SSTD report is pending
Line 1866: - Timing info not sufficient --> SSTD report is pending
Line 1895: - Timing info not sufficient --> SSTD report is pending
Line 1913: LteRrmConn_UpdateSstdState: Init reportSstd
Line 2502: invalid GAP pattern :%d
Line 2570: Invalid Gap Pattern(%d)
Line 2659: LteRrmConn_UpdateMeasScheduleVariable(DrxEnable:%d, DrxCycle:%d, N_freq:%d)
Line 2663: N_freq info. - ScellFreqNum:%d, InterFreqNum:%d, UtraFreqNum:%d, CdmaFreqNum:%d, NrFreqNum:%d, M_gsm:%d)
Line 2675: Conn DRX ignored : invalid DRX cycle (%d ms)
Line 2774: LteRrmConn_UpdateMeasConfig msg is NULL
Line 2798: [MEAS CONFIG PRE] Remove Exhausted MeasId
Line 2817: [MEAS CONFIG 1st] Remove MeasId
Line 2827: [MEAS CONFIG 2nd] Arrange MeasId (%d)
Line 2841: [MEAS CONFIG 3rd] Add MeasId (%d)
Line 2867: IntraFreq NULL
Line 2881: Number of carriers other than GSM: %d
Line 2902:  > rsrqOnAllSymbols-r12 (%d)
Line 2926:  > quantityConfigEUTRA - fc_rsrp:%d, fc_rsrq:%d, fc_rssinr:%d
Line 2936:  > quantityConfigUTRA - measQuantity:%d, fc:%d
Line 2946:  > quantityConfigGERAN - measQuantity:%d, fc:%d
Line 2954:  > quantityConfigCDMA - measQuantity:%d
Line 2972:  > measQuantityCellINR - FC_Rsrp:%d, FC_Rsrq:%d, FC_Sinr:%d
Line 2987:  > measQuantityRS-IndexNR - FC_Rsrp:%d, FC_Rsrq:%d, FC_Sinr:%d
Line 3069:  > sMeasure (%d)
Line 3080:  > speedDepParam received
Line 3082:    t_eval(%d) t_hyst(%d), nMed(%d), nHigh(%d)
Line 3123: ConnMeasConfig.sMeasure:%d, fc_rsrp:%d, filter_alpha_rsrp:%d
Line 3172: LteRrmConn_ProcMeasConfigReq msg is NULL
Line 3177: Receive LTE_CPHY_MEAS_CONF_REQ Msg(removeMID num:%d, addMID num:%d)
Line 3523: LteRrmConn_ProcCsgProximityMeasConfigReq msg is NULL
Line 3528: Receive LTE_CPHY_CSG_PROXIMITY_MEAS_REQ Msg
Line 3568: Mid:%d, ObjId:%d (RAT:%d, earfcn:%d), RptId:%d
Line 3599: Skip fast search
Line 3864: measTrig[%d] LastMeasTime:%d, curTimeInMs:%d, interval:%d, cycle:%d
Line 3887: SIM CHECKED : Don't Change Srch Cycle
Line 3897: srchCycle set to MIN_INTRA_SRCH_CYCLE(%d) (LteRrmConn_CheckPeriodicStrongestIntraFreqListInMeasConf is TRUE)
Line 3918: srchCycle set to MIN_INTRA_SRCH_CYCLE(%d) (max cinr:%d)
Line 3923: srchCycle change from %d to 200ms in Emergency Call
Line 3956: IntraMeasList(%d) is Empty
Line 3964: LteRrmConn_CheckIntraFreqMeas: CONN_ONLY_SERV(IntraFreq is NULL)
Line 3971: LteRrmConn_CheckIntraFreqMeas: PrimaryCell is NULL
Line 3983: LteRrmConn_CheckIntraFreqMeas: Result(%d)(sMeasure:%d, rsrp:%d)
Line 3993: - DMTC not occurred -> Trigger Serving Meas Only
Line 4013: VoLTE ACTIVE: Intrafrequency measCycle set from %dms to %dms (cinr:%d)
Line 4017: VoLTE ACTIVE: Intrafrequency measCycle is %dms (cinr:%d)
Line 4033: VoLTE ACTIVE: Intrafrequency srchCycle set from %dms to %dms (cinr:%d)
Line 4037: VoLTE ACTIVE: Intrafrequency srchCycle is %dms (cinr:%d)
Line 4044: CheckMeasCycle: IntraFreq Search
Line 4049: CheckMeasCycle: IntraFreq Measure
Line 4058: Triggered SRCH(%d) and MEAS(%d) due to ECID
Line 4064: Inter(%d)/SCell(%d) Freq Search is already exist!!!
Line 4071: Intra Freq Search is already exist!!!
Line 4077: Intra Freq Measure is already exist!!!
Line 4150: IC srchCycle set to MIN_INTRA_SRCH_CYCLE(%d) (LteRrmConn_CheckPeriodicStrongestIntraFreqListInMeasConf is TRUE)
Line 4171: srchCycle set to MIN_INTRA_SRCH_CYCLE(%d) (max cinr:%d)
Line 4176: CheckMeasCycle: IntraFreq IC-Search
Line 4185: Intra(%d)/Inter(%d)/SCell(%d) Freq Search is already exist!!!
Line 4220: LteRrmConn_CheckSCellMeas 1: CONN_NONE
Line 4224: LteRrmConn_CheckSCellMeas - no SCellMeasList but SCellFreqSet
Line 4233: LteRrmConn_CheckSCellMeas 2: CONN_NONE
Line 4237: LteRrmConn_CheckSCellMeas - SCellMeasList but no SCellFreqSet
Line 4245: LteRrmConn_CheckSCellMeas 4: CONN_NONE
Line 4253: LteRrmConn_CheckSCellMeas 3: CONN_NONE
Line 4258: LteRrmConn_CheckSCellMeas : Scell is not configured
Line 4266: Scell Fast Meas Required
Line 4272: Scell Fast Srch Required
Line 4332: CheckMeasCycle: Secondary Cell Freq Search
Line 4339: SCell search skip - Intra(%d)/Inter(%d)/Scell(%d) Freq Search already scheduled!!!
Line 4345: CheckMeasCycle: Secondary Cell Freq Measure
Line 4350: Secondary Cell Freq Measure is already exist!!!
Line 4403: LteRrmConn_CheckInterFreqMeas 1: noGAP & ScellScheduled
Line 4410: LteRrmConn_CheckInterFreqMeas 1: noGAP & ScellScheduled
Line 4415: LteRrmConn_CheckInterFreqMeas : noGAP & noScellScheduled
Line 4421: LteRrmConn_CheckInterFreqMeas 2: noGAP & InterFreqScheduled
Line 4426: LteRrmConn_CheckInterFreqMeas : noGAP & noInterFreqScheduled
Line 4436: DMTC meas scheduled -> Gap meas for inter-freq suspended
Line 4443: LteRrmConn_CheckInterFreqMeas : GAP & noScellScheduled
Line 4451: LteRrmConn_CheckInterFreqMeas 3: CONN_NONE
Line 4483: CheckMeasCycle: InterFreq Search(%d)
Line 4489: LteRrmConn_CheckInterFreqMeas : Search is already scheduled(%d/%d/%d)
Line 4495: CheckMeasCycle: InterFreq Measure(%d)
Line 4500: InterFreq Measure is already exist!!!
Line 4568: All SCC activated - Skip LAA inter meas
Line 4576: Scell srch(%d) meas(%d) already scheduled!!! - Skip LAA inter meas
Line 4585: Inter with SCC srch(%d) meas(%d) already scheduled!!! - Skip LAA inter meas
Line 4594: Intra(%d)/Inter(%d)/Scell(%d) Search already scheduled!!! - Skip LAA inter meas
Line 4656: CONN_NONE: gap(%d), conn drx(%d)
Line 4699: CheckMeasCycle: Utra Search
Line 4703: CheckMeasCycle: Utra Measure
Line 4708: Utra Search/Measure is already exist!!!
Line 4776: CONN_NONE: gap(%d), conn drx(%d)
Line 4825: CheckMeasCycle: Geran Identify
Line 4870: CheckMeasCycle: Geran Measure(cycle:%d, M_gsm:%d)
Line 4875: CheckMeasCycle: Geran Verify
Line 4880: Geran Measure is already exist!!!
Line 4886: Geran Verify is already exist!!!
Line 4941: CdmaSystemTimeFlag(%d) is not valid, Not schedule CDMA meas.
Line 4963: CONN_NONE: gap(%d), conn drx(%d)
Line 4974: CheckMeasCycle: Cdma Measure
Line 4979: Cdma Measure is already exist!!!
Line 5015: Conn Intra-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d)
Line 5118: Conn Intra(earfcn:%d) IC search starts
Line 5181: [SCELL]invalid MeasType(%d)
Line 5200: [SCELL]invalid MeasType(%d)
Line 5246: LteRrmConn_StartScellMeasOperation : Scell is NULL
Line 5254: LteRrmConn_StartScellMeasOperation : Scell(%d) has correct timing info(%d, CINR=%d)
Line 5260: LteRrmConn_MeasListFindEarfcn : ScellMeasList is NULL, pTempMeasFreq->earfcn(%d)
Line 5274: WARNING: NOT Supported DL_EARFCN %d!!!
Line 5322: Block Meas for U-band deactivated SCell (earfcn:%d, measDS_setup:0)
Line 5338: ConnSchedule.pCurSrchSCellFreq NULL
Line 5372: WARNING: NOT Supported DL_EARFCN %d!!!
Line 5376: WARNING: NO SCell found on EARFCN:%d
Line 5380: SCell Timing Not acquired yet(EARFCN:%d) -> Meas skip
Line 5410: Offer SCC meas opportunity to LAA scheduler
Line 5439: Block Meas for U-band deactivated SCell (earfcn:%d, measDS_setup:0)
Line 5455: ConnSchedule.pCurMeasSCellFreq NULL
Line 5582: Conn Scell-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d)
Line 5598: Start Measurement: Scell Frequency (earfcn:%d, mode:%d)
Line 5617: SCell(earfcn=%d) is activated then use SCC RF path (suspendforTx:%d)
Line 5621: SCell(earfcn=%d) is configured
Line 5642: SCell Fast Srch(%d)/Meas(%d) triggered
Line 5690: Warning!! SCellMeasList(0x%X) NULL or empty - LteRrmConn_StartLaaScellMeasOperation
Line 5694: Warning!! - no SCellMeasList but SCellFreqSet
Line 5702: Warning!! SCellFreqSet(0x%X) NULL or empty - LteRrmConn_StartLaaScellMeasOperation
Line 5706: Warning!! - no SCellFreqSet but SCellMeasList
Line 5716: no gap and ongoingSrchInterFlag(%d) or ongoingMeasInterFlag(%d)
Line 5721: Warning!! Scell is not configured
Line 5731: LAA SCell meas skip - Intra(%d)/Inter(%d)/Scell(%d) Search or SCell Meas(%d) already scheduled!!!
Line 5772: gLteRrm_ConnSchedule.laaScellFreqLastMeasTime:%d
Line 5785: CheckMeasCycle: LAA SCell Freq Search/Measure
Line 5794: Conn LAA Scell-SelectedMode(%d), Srch/Meas Cycle(%d)
Line 5813: WARNING: NOT Supported DL_EARFCN %d!!!
Line 5839: Warning!! DMTC is not set up for LAA SCell(%d)
Line 5849: ConnSchedule.pCurMeasLaaSCellFreq NULL
Line 5860: Start Measurement: LAA Scell Frequency (earfcn:%d, mode:%d)
Line 5869: SCell(earfcn=%d) is activated then use SCC RF path (suspendforTx:%d)
Line 5873: SCell(earfcn=%d) is configured
Line 5915: LAA SCell MeasType(%d)
Line 5925: ConnSchedule.laaScellFreqLastMeasTime:%d
Line 5947: [SCELL]invalid MeasType(%d)
Line 5974: this freq(earfcn:%d_%d) need GAP(%d) to search/meas. - skip
Line 5981: this freq(earfcn:%d_%d) need SCC path(%d) to search/meas. - skip
Line 5993: this freq(earfcn:%d_%d) need GAP to search/meas. - change MeasType(%d)
Line 5999: this freq(earfcn:%d_%d) need GAP(%d) to search/meas. - change
Line 6113: Conn Inter-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d)
Line 6129: WARNING: NOT Supported DL_EARFCN %d!!!
Line 6173: ConnSchedule.pCurSrchInterFreq NULL
Line 6197: WARNING: NOT Supported DL_EARFCN %d!!!
Line 6234: ConnSchedule.pCurMeasInterFreq NULL
Line 6294: Start Measurement: Inter Frequency (earfcn:%d, measmode:%d)
Line 6343: [INTER] invalid MeasType(%d)
Line 6434: Warning!! DMTC is not set up for B46 LAA inter-freq(%d)
Line 6444: ConnSchedule.pCurMeasLaaInterFreq NULL
Line 6452: CheckMeasCycle: LAA InterFreq Search
Line 6469: Start Measurement: LAA Inter Frequency (earfcn:%d, measmode:%d)
Line 6524: ConnSchedule.laaInterFreqLastMeasTime:%d
Line 6546: Warning! invalid measMode(%d)
Line 6590: Conn Utra-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d)
Line 6598: warring: ConnSchedule.pCurSrchUtraFreq NULL
Line 6626: ConnSchedule.pCurMeasUtraFreq NULL
Line 6638: warring: ConnSchedule.pCurSrchUtraFreq NULL
Line 6674: Start Measurement: Utra Frequency (earfcn:%d, mode:%d) - SrchCnt(%d)
Line 6748: Conn Geran-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d)
Line 6773: warring: ConnSchedule.pCurIdentifyGeranFreq NULL
Line 6805: ConnSchedule.pCurMeasGeranFreq NULL
Line 6846: ConnSchedule.pCurVerifyGeranFreq NULL
Line 6878: Start Measurement: Geran Frequency (earfcn:%d, mode:%d)
Line 6951: Conn CDMA-SelectedMode(%d), MeasCycle(%d)
Line 6974: ConnSchedule.pCurMeasCdmaFreq NULL
Line 6982: MeasMode is invalid(%d)
Line 6987: Start Measurement: Cdma Frequency (earfcn:%d, mode:%d)
Line 7071: LteRrmConn_GetTimeToTriggerListIndex pMeas(0x%X)/pCell(0x%X) is NULL
Line 7094: nCell(arfcn:%d, cell_id:%d) is not found in TimeToTriggerList(mID:%d).
Line 7121: LteRrmConn_AddTimeToTriggerList pMeas(0x%X)/pCell(0x%X) is NULL
Line 7137: TimeToTrigger Set(mID(%d), rID(%d), Arfcn(%d), Cell(%d)) start(%d)
Line 7144: Report status index is FULL!!!
Line 7179: alt_time_to_trigger(%d) is applied
Line 7203: Invalid mobility state(%d)
Line 7239: LteRrmConn_CheckTriggerTimerExpired pMeas is NULL
Line 7246: LteRrmConn_CheckTriggerTimerExpired pMeas->obj(mid:%d, objid:%d) is NULL
Line 7252: LteRrmConn_CheckTriggerTimerExpired: PrimaryCell is NULL
Line 7276: TimeToTrigger Expired(time_to_trigger:0)(mID(%d), rID(%d))
Line 7290: Fast MR(%d):Rsrq diff:%d(mID(%d), rID(%d))
Line 7307: Fast MR(%d):Rsrq:%d(mID(%d), rID(%d))
Line 7329: Fast MR(%d):Rsrq:%d_%d, CINR:%d, siAdvancedTimeToTrigger:(%d), siAdvancedTimeToTrigger_Inst:(%d), (mID(%d))
Line 7347: TimeToTrigger status(mID(%d), rID(%d)) start(%d) current(%d), timeDiff(%d), ScaledTTT(%d)
Line 7373: TimeToTrigger Expired(mID(%d), rID(%d)) start(%d) stop(%d) offset(%d)
Line 7405: LteRrmConn_CheckLeaveTimerExpired pMeas is NULL
Line 7440: LeaveTime Expired(mID(%d), rID(%d)) start(%d) stop(%d) offset(%d) scaledTTT(%d)
Line 7511: [%d] SCell(earfcn:%d, PCID:%d) is involved
Line 7516: SCell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
Line 7569: LteRrmConn_MakeUtraReportMsg pMeas is NULL
Line 7576: Serving Cell(%d) == LockPci(%d), No UMTS measurement report sent to network
Line 7651: fdd trigger(%d) - LTE_MEAS_UTRA_FDD_CPICH_BOTH
Line 7656: fdd trigger(%d), quantityUtra(%d)
Line 7666: Make UTRAN Meas. Report_Trigger type(%d)
Line 7687: Trigger value is strange
Line 7700: rat_type(%d), measured_rscp(%d), filtered_rsrp(%d), measured_EcNO(%d), filtered_rsrq(%d)
Line 7742: LteRrmConn_MakeUtraReportMsg: ID(%d) PCell_ID(%d) RSRP(%d) NumCell(%d) Sent(%d) removePeriodicMeas(%d)
Line 7750: Idx(%d) NCell_ID(%d) fdd_trigger(%d), measured_rscp(%d), measured_EcNO(%d), measured_tdd_rscp(%d)
Line 7780: LteRrmConn_MakeGeranReportMsg pMeas is NULL
Line 7787: Serving Cell(%d) == LockPci(%d), No GSM measurement report sent to network
Line 7846: [RRM] Forced Event B2 MR
Line 7903: LteRrmConn_MakeGeranReportMsg: ID(%d) PCell_ID(%d) RSRP(%d) NumCell(%d) Sent(%d) removePeriodicMeas(%d)
Line 7911: Idx(%d) geran_arfcn_value(%d) bandIndicator(%d), network_colour_code(%d), base_station_colour_code(%d), rssi(%d)
Line 7941: LteRrmConn_MakeCdmaReportMsg pMeas is NULL
Line 7948: Serving Cell(%d) == LockPci(%d), No CDMA measurement report sent to network
Line 8063: LteRrmConn_MakeCdmaReportMsg: ID(%d) PCell_ID(%d) RSRP(%d) NumCell(%d) Sent(%d) removePeriodicMeas(%d)
Line 8070: Idx(%d) NCell_ID(%d) pilot_Strength(%d), pilotPnPhase(%d)
Line 8107: LteRrmConn_CheckServingCellEventTrigger pMeas(%d) or pSCell(%d) is NULL or NOT FILTERED
Line 8125: block Event A1(mID:%d) for Scell(earfcn:%d, rsrp=%d, rsrq=%d) due to non-search result
Line 8277: SCell(earfcn:%d, PCID:%d) could not found
Line 8294: EVENT_A6(SCell_ID:%d, RSRP:%d, RSRQ:%d RSSINR:%d )(NCell_ID:%d)
Line 8335: [WARN] Check Event ID(%d) in LteRrmConn_CheckEventA3A6Trigger
Line 8361: EVENT_A%d : MnPlusOffset(%d), Ms(%d), Mn(%d)
Line 8371: Enter : NRsrp(%d) NRsrq(%d) NRssinr(%d) NFreqOff(%d) NIndOff(%d)
Line 8373: MnPlusOffset(%d) - Hys(%d)/2 > Ms(%d) + FreqOff(%d) + IndOff(%d) + A3Off(%d)/2 
Line 8381: Leave : NRsrp(%d) NRsrq(%d) NRssinr(%d) NFreqOff(%d) NIndOff(%d)
Line 8383: MnPlusOffset(%d) + Hys(%d)/2 < Ms(%d) + FreqOff(%d) + IndOff(%d) + A3Off(%d)/2 
Line 8390: Stay : NRsrp(%d) NRsrq(%d) NRssinr(%d) NFreqOff(%d) NIndOff(%d)
Line 8392: MnPlusOffset(%d) + Hys(%d)/2 ? Ms(%d) + FreqOff(%d) + IndOff(%d) + A3Off(%d)/2 
Line 8436: LteRrmConn_CheckNCellEventTrigger pMeas(%d) or pNCell(%d) is NULL
Line 8459: Event=SCell_Config(mID:%d, earfcn:%d)
Line 8475: block Event(%d, mID:%d) for Scell(earfcn:%d, rsrp=%d, rsrq=%d) due to non-search result
Line 8489: Event(%d) SCell(%d) would not be considered as Ncell
Line 8501: usePSCell(%d) -> use PSCell(%d,%d) instead of PCell
Line 8681: NCell_ID(%d) RSRP(%d) is discarded 
Line 8996: [RRM] Forced Event B2 Enter
Line 9071: CDMA_EventB1: Mn(%d), offsetFreq(%d), hysteresis(%d),threshold_cdma(%d)
Line 9096: CDMA_EventB2: Ms(%d), hysteresis(%d), b2_threshold1(%d), Mn(%d), offsetFreq(%d), b2_threshold2_cdma(%d)
Line 9161: LteRrmConn_CheckIratCellEventTrigger pMeas(%d) or pNCell(%d) is NULL
Line 9207: Warning! invalid RAT_type(%d)
Line 9239: LteRrmConn_CheckTimeToTrigger pMeas(0x%X)/pCell(0x%X) is NULL
Line 9251: (MID:%d, EARFCN:%d, PCID:%d) EVENT_A%d entering condition
Line 9285: LteRrmConn_CheckTimeToTrigger: Report status index is FULL!!!
Line 9292: (MID:%d, EARFCN:%d, PCID:%d) EVENT_A%d stay condition
Line 9318: (MID:%d, EARFCN:%d, PCID:%d) EVENT_A%d leaving condition
Line 9350: (MID:%d, EARFCN:%d, PCID:%d) PERIODIC REPORT entering condition
Line 9374: LteRrmConn_CheckTimeToTrigger: Report status index is FULL!!!
Line 9380: error in LteRrm_ProcServingMeasResult
Line 9393: (MID:%d, ARFCN:%d, PCID:%d) EVENT_%s entering condition

Line 9423: LteRrmConn_CheckIratTimeToTrigger(%d): Report status index is FULL!!!
Line 9436: (MID:%d, ARFCN:%d, PCID:%d) EVENT_%s stay condition

Line 9468: (MID:%d, ARFCN:%d, PCID:%d) EVENT_%s leaving condition

Line 9507: (MID:%d, ARFCN:%d, PCID:%d) IRAT PERIODIC REPORT entering condition

Line 9529: LteRrmConn_CheckIratTimeToTrigger(%d): Report status index is FULL!!!
Line 9562: LteRrmConn_CheckIratTimeToTrigger pMeas(0x%X)/pCell(0x%X) is NULL
Line 9583: [NR_FIXED_ARFCN] NrFixedArfcn:%d
Line 9589: [NR_FIXED_PCID] NrFixedPcid:%d
Line 9608: [NR_FIXED] EventTriggered of Cell(arfcn:%d, pcid:%d) is set to %d!
Line 9637: error in LteRrm_ProcIterRatMeasResult
Line 9778: LteRrmConn_UpdateVarMeasurementReports pMeas is NULL
Line 9784: pMeas->varMeasurementReports.numOfCellsInRportList ERROR (numOfCellsInRportList = %d)
Line 9792: EVENT_A%d entering (mID:%d) (Cell ID:%d)
Line 9811: LTERRM_PERIODIC_EUTRA entering (mID:%d) (Cell ID:%d)
Line 9833: EVENT_A%d leaving (mID:%d) (Cell ID:%d)
Line 9870: LteRrmConn_UpdateIratVarMeasurementReports pMeas is NULL
Line 9877: pMeas->varMeasurementReports.numOfCellsInRportList ERROR (numOfCellsInRportList = %d)
Line 9886: EVENT_%s entering (mID:%d) (Cell ID:%d)
Line 9947: EVENT_%s leaving (mID:%d) (Cell ID:%d)
Line 10376: LteRrmConn_ProcServingMeasResult pMeas is NULL
Line 10382: RRC Security disabled(%d) - LteRrmConn_ProcServingMeasResult
Line 10389: LteRrmConn_ProcServingMeasResult(%d)
Line 10422: SCell(earfcn:%d, PCID:%d) could not found
Line 10449: unknown CC(%d)
Line 10454: Illegal Modem Access on POWER OFF
Line 10492: LteRrmConn_ProcEutraMeasResult pMeas is NULL
Line 10499: RRC Security disabled(%d) - LteRrmConn_ProcEutraMeasResult(freq:%d)
Line 10654: Illegal Modem Access on POWER OFF
Line 10689: LteRrmConn_ProcInterRatMeasResult pMeas is NULL
Line 10696: RRC Security disabled(%d) - LteRrmConn_ProcInterRatMeasResult(RAT:%d, freq:%d)
Line 10724: Event%s - Status:%d, Triggered:%d (0:None, 1:Enter, 2:Stay, 3:Leave, 4:Periodic)
Line 10796: timeToTriggered(MID:%d, arfcn:%d, cell_id:%d, timeDiff:%d, scaled TTT:%d)
Line 10842: timeToTriggered(MID:%d, arfcn:%d, cell_id:%d, timeDiff:%d, scaled TTT:%d)
Line 11002: Forced measTrig[TRUE] due to TimeToTrigger - RAT_type(%d), mID(%d), cell_id(%d), ScaledTTT(%d), timeDiff(%d), offset(%d)
Line 11022: Forced measTrig[TRUE] due to LeaveTime - RAT_type(%d), mID(%d), cell_id(%d), TTT(%d), timeDiff(%d), offset(%d)
Line 11057: LteRrmConn_CheckStrongIntraNcell: PrimaryCell is NULL
Line 11091: NCell_RSRP(%d) > PCell_RSRP(%d) or NCell_L3_RSRP(%d) > PCell_L3_RSRP(%d) or NCell_L3_RSRQ(%d)> PCell_L3_RSRQ(%d)
Line 11094: isStrongNcell Conn DRX will stop(offset L3:%d, L1:%d)
Line 11100: CINR low(%d) Conn DRX will stop
Line 11135: Continue SCell Fast scheduling
Line 11195: AvgMeasureTimeDuringConnDrx(%d ms)
Line 11198: MeasureTimeDuringConnDrx(%d ms)(%d, %d)
Line 11211: Conn Drx Skip(isLastMeas:%d, RT:%d, CDrxCycle:%d, CgiState:%d, TTT:%d)
Line 11214:    >>newCellDetectedState:%d
Line 11248: LteRrmConn_ProcProximityIntraMeasResult()
Line 11276: CSG Proximity Check ==> EARFCN:%d, CellID:%d, RSRP:%d, THRESHOLD:%d
Line 11287: CSG Proximity EventTriggered ==> EARFCN:%d, CellID:%d, RSRP:%d, THRESHOLD:%d
Line 11327: CSG Proximity Check ==> EARFCN:%d, CellID:%d, RSRQ:%d, THRESHOLD:%d
Line 11337: CSG Proximity EventTriggered ==> EARFCN:%d, CellID:%d, RSRQ:%d, THRESHOLD:%d
Line 11383: LteRrmConn_ProcProximtiyInterMeasResult()
Line 11420: CSG Proximity Check ==> EARFCN:%d, CellID:%d, RSRP:%d, THRESHOLD:%d
Line 11431: CSG Proximity EventTriggered ==> EARFCN:%d, CellID:%d, RSRP:%d, THRESHOLD:%d
Line 11470: CSG Proximity Check ==> EARFCN:%d, CellID:%d, RSRQ:%d, THRESHOLD:%d
Line 11480: CSG Proximity EventTriggered ==> EARFCN:%d, CellID:%d, RSRQ:%d, THRESHOLD:%d
Line 11539: LteRrmConn_ProcProximityUtraMeasResult()
Line 11578: CSG Proximity Utra Check ==> UARFCN:%d, CellID:%d, RSCP:%d, THRESHOLD:%d
Line 11590: CSG Proximity Utra EventTriggered ==> UARFCN:%d, CellID:%d, RSCP:%d, THRESHOLD:%d
Line 11630: CSG Proximity Utra Check ==> UARFCN:%d, CellID:%d, EcNO:%d, THRESHOLD:%d
Line 11641: CSG Proximity Utra EventTriggered ==> UARFCN:%d, CellID:%d, EcNO:%d, THRESHOLD:%d
Line 11702: LteRrmConn_ProcInterRatMeasResult(RAT:%d)
Line 11767: LTERRM->Set.pIntraMeasList is empty(meas mode:%d)
Line 11801: Set intraFreqLastIcSrchTime(%d) firstIntraSrchDone(1)
Line 11837: measmode(%d)-InterFreq Srch
Line 11848: measmode(%d)-Scell Srch
Line 11859: measmode(%d)-InterFreq Meas
Line 11870: measmode(%d)-Scell Meas
Line 11930: [CHECK] LteRrmConn_ProcMeasResult_Scell is NULL(earfcn=%d, index:%d)
Line 12001: measmode(%d)-InterFreq Srch
Line 12011: measmode(%d)-Scell Srch
Line 12022: measmode(%d)-InterFreq Meas
Line 12032: measmode(%d)-Scell Meas
Line 12045: earfcn(%d) measmode(%d)-invalid result
Line 12154: LteRrmConn_ProcMeasResult pMsg is NULL
Line 12158: LteRrmConn_ProcMeasResult:IsCellOnly(%d), IsLastMeas(%d)
Line 12162: LteRrmConn_ProcMeasResult is FAIL
Line 12268: CDMA Measure Result
Line 12326: DoSrchForCgi - Intra
Line 12335: DoSrchForCgi - Inter
Line 12342: DoSrchForCgi - Scell
Line 12363: LTERRM_SRCHMODE_CGI_CHANGE
Line 12368: LTERRM_SRCHMODE_CGI_SRCH
Line 12384: Cannot find freq, freq_found(%d), earfcn (%d)
Line 12390: DoSrchForCgi - from IRAT
Line 12422: CGI srch start (CGI Earfcn=%d)
Line 12429: saved serving BW(%d)
Line 12451: Invalid CgiMeasType(%d)
Line 12480: LteRrmConn_StopCgiSrch - pPrimaryCell NULL
Line 12497: LteRrm_AllocCellInfoBuf: TargetCell
Line 12501: TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 12513: please check: PrimaryCell is NULL!!
Line 12527: CGI stop, Return ! (earfcn=%d, cell id=%d, CGI Earfcn=%d)
Line 12532: CGI change State(%d -> LTERRM_CGI_RETURN)
Line 12598: CGI MeasResult Mid(%d) S_Rsrp(%d) S_Rsrq(%d) C_Rsrp(%d) C_Rsrq(%d)
Line 12625: LteRrmConn_UpdateMeasCgiConfig cgi_req is NULL
Line 12640: UMTS SI_AcquisitionForHO(MID:%d)
Line 12645: UMTS IRAT CGI is configured(MID:%d)
Line 12655: GSM IRAT CGI is configured(MID:%d)
Line 12665: CDMA IRAT CGI is configured(MID:%d)
Line 12678: NR autonomous gaps(MID:%d)
Line 12683: L2N CGI with EN-DC(MID:%d)
Line 12688: NR IRAT CGI is configured(MID:%d)
Line 12697: IRAT CGI MeasList NULL
Line 12710: CGI change State(%d -> LTERRM_CGI_SUSPENDED)
Line 12725: CGI change State(%d -> LTERRM_CGI_SUSPENDED)
Line 12749: CGI pCurElem NULL
Line 12753: LTE CGI is configured(MID:%d, CgiMeasType:%d)
Line 12760: CGI object match fail (L1:%d,RRC:%d)
Line 12766: CGI To report object configured(%d,%d)
Line 12775: CGI change State(%d -> LTERRM_CGI_SUSPENDED)
Line 12781: CGI pCurElem->obj NULL (0x%x)
Line 12803: LteRrmConn_ProcMeasCgiReq msg is NULL
Line 12807: Receive LTE_CPHY_MEAS_CGI_CONF_REQ Msg
Line 12847: CGI change State(%d -> LTERRM_CGI_UMTS_AGAP_SEARCHING)
Line 12879: CGI change State(%d -> LTERRM_CGI_DEACTIVE)
Line 12885: CGI from IRAT(CgiMeasType:%d) HOLD! change the state(%d -> LTERRM_CGI_RETRY)
Line 12967: remove CGI SCell_MID(%d)
Line 12982: SCell(ID:%d, earfcn=%d is added in ScellmeasList
Line 13000: remove Utra_MID(%d)
Line 13018: remove Geran_MID(%d)
Line 13037: remove NR_MID(%d)
Line 13061: CGI change State(%d -> LTERRM_CGI_DEACTIVE)
Line 13112: LteRrmConn_ProcStopMeasCgiReq msg is NULL
Line 13116: Receive LTE_CPHY_MEAS_CGI_STOP_REQ Msg(%d, %d)
Line 13128: IRAT CGI(CgiMeasType:%d) SUCCESS! change the state(%d -> LTERRM_CGI_REPORT)
Line 13137: IRAT CGI(CgiMeasType:%d) FAIL! change the state(%d -> LTERRM_CGI_REPORT)
Line 13141: CGI change State(%d -> LTERRM_CGI_REPORT)
Line 13147: CGI change State(%d -> LTERRM_CGI_STOP)
Line 13157: IRAT CGI(CgiMeasType:%d) HOLD! change the state(%d -> LTERRM_CGI_RETRY)
Line 13168: UTRA CGI using AGAP(CgiMeasType:%d) SUCCESS! change the state(%d -> LTERRM_CGI_REPORT)
Line 13175: UTRA CGI using AGAP(CgiMeasType:%d) FAIL! change the state(%d -> LTERRM_CGI_REPORT)
Line 13179: CGI change State(%d -> LTERRM_CGI_REPORT)
Line 13185: CGI change State(%d -> LTERRM_CGI_STOP)
Line 13193: Invalid irat_cgi_meas_result_state:%d, change the state(%d -> LTERRM_CGI_REPORT)
Line 13207: CGI change State(%d -> LTERRM_CGI_REPORT)
Line 13213: CGI change State(%d -> LTERRM_CGI_STOP)
Line 13230: CGI change State(%d -> LTERRM_CGI_REPORT)
Line 13236: CGI change State(%d -> LTERRM_CGI_STOP)
Line 13243: CGI change State(%d -> LTERRM_CGI_DEACTIVE)
Line 13265: CGI change State(%d -> LTERRM_CGI_WAITSIB1)
Line 13318: Invalid CGI State(%d -> LTERRM_CGI_DEACTIVE)
Line 13323: CGI change State(%d -> LTERRM_CGI_SEARCHING) - CgiMeasType:%d
Line 13333: Trigger NCELL TIMING INFO REQ for L2N AGAP CGI or EN-DC L2N CGI
Line 13377: Invalid CgiMeasType(%d)
Line 13379: CGI change State(%d ->LTERRM_CGI_DEACTIVE)
Line 13407: CgiFreqInfo is NULL
Line 13420: Start the procedure for utran CGI cell(Arfcn:%d, scrCode:%d) timing search
Line 13431: CGI change State(LTERRM_CGI_UMTS_AGAP_SEARCHING -> LTERRM_CGI_UMTS_AGAP_SFN_MIB)
Line 13439: CGI change State(LTERRM_CGI_UMTS_AGAP_SFN_MIB -> LTERRM_CGI_UMTS_AGAP_SIB)
Line 13456: Invalid CGI State(%d)
Line 13466: Invalid CGI Parameters(CgiMeasType:%d)
Line 13491: pFreqInfo is NULL
Line 13723: pFreqInfo is NULL
Line 13729: pMeasResult is NULL
Line 13751: Ncell (Cell ID:%d, RSRP=%d, RSRQ=%d RSSINR=%d)
Line 13795: pFreqInfo is NULL
Line 13801: pMeasResult is NULL
Line 13807: SetUtraNCellSortedList - RAT(%d) invalid
Line 13815: UTRAN RAT(%d List) enter!
Line 13838: RAT(UTRAN FDD. %d), Quantity(%d) is invalid
Line 13847: RAT(UTRAN TDD)
Line 13851: RAT(%d) is invalid
Line 13862: UTRAN Ncell (Cell ID:%d, RSCP=%d, EcNo=%d)
Line 13903: pFreqInfo is NULL
Line 13909: pMeasResult is NULL
Line 13915: GSM RAT(LTERRM_ID_LISTED) enter!
Line 13931: GERAN Ncell(ID List) arfcn:%d, RSSI=%d)
Line 13949: GSM RAT(LTERRM_CANDI_LISTED) enter!
Line 13965: GERAN Ncell(Candi List) arfcn:%d, RSSI=%d)
Line 13983: GSM RAT(LTERRM_UNID_LISTED) enter!
Line 13999: GERAN Ncell(UnID List) arfcn:%d, RSSI=%d)
Line 14017: GSM RAT(LTERRM_ID_DETECTED) enter!
Line 14033: GERAN Ncell(Detected List) arfcn:%d, RSSI=%d)
Line 14073: pFreqInfo is NULL
Line 14079: pMeasResult is NULL
Line 14331: UTRAN(%d) NumOfCell(%d)
Line 14396: GERAN NumOfCell(%d)
Line 14456: EHRPD NumOfCell(%d)
Line 14493: LteRrm_SetNCellAllFreqSortedList pResult is NULL
Line 14549: UTRA NCELL[%d] arfcn:%d, cell_id:%d, time_offset:%d
Line 14625: GERAN NCELL[%d] band_indicator:%d, arfcn:%d, bsic:%d frameNumber:%d, Qb:%d, net_frameNumber:%d
Line 14679: pNCellList is NULL
Line 14701: NOT support the handover using cell change corresponding to RAT type(%d)
Line 14729: LteRrmConn_ProcAgapMeasReq msg is NULL
Line 14736: newCGIstate(%d) is not NONE for AGAP
Line 14756: FreqInfo(%d) is not existed for AGAP
Line 14766: cellInfo is not existed for AGAP
Line 14816: LteRrmConn_ProcCgiRepStopReq msg is NULL
Line 14820: Receive LTE_CPHY_MEAS_CGI_STOP_REQ Msg
Line 14830:  > Remove Intra MID(%d) (%d, %d)
Line 14863:  > Remove Inter MID(%d) (%d, %d)
Line 14885:  > Remove SCell MID(%d) (%d, %d)
Line 14945: Scell(%d) is deactivated from timer
Line 15007: measmode(%d)-LAA InterFreq Srch
Line 15013: measmode(%d)-InterFreq Srch
Line 15019: measmode(%d)-Scell Srch
Line 15033: measmode(%d)-LAA InterFreq Meas
Line 15039: measmode(%d)-InterFreq Meas
Line 15045: measmode(%d)-Scell Meas
Line 15052: invalid measmode(%d)
Line 15076: LteRrm_RemoveMeasNeighPatternList NeighPatternList is NULL
Line 15166: Warning! pFreqInfo->measDS_setup == FALSE in LteRrmConn_IsDmtcOccurThisCycle
Line 15172: Warning!PcellCurSfnTti(0xFFFF) is not updated - Need to check in L1LC_RRM_MEAS_SCHEDULE_IND message
Line 15190: dmtc occur after %d[TTI] (curSfnTti:%d norm_curr_tti:%d dmtc_period_tti:%d dmtc_offset:%d)
Line 15214: Warning! pFreqInfo is NULL (in LteRrmConn_IsMeasTrigInDmtcConfig)
Line 15223: Dmtc is expected this cycle(earfcn:%d)
Line 15228: Dmtc configured but not expected this cycle(earfcn:%d)
Line 15265: Warning! LteRrmConn_ProcSstdCompute: LTERRM->Meas.ConnMeasConfig.pMeasListSstd NULL
Line 15271: Warning! LteRrmConn_ProcSstdCompute: report_sstd_meas:FALSE
Line 15278: Warning! LteRrmConn_ProcSstdCompute: pPrimaryCell(%d) or pPSCell(%d) is NULL
Line 15285: Warning! LteRrmConn_ProcSstdCompute: invalid time_offset PCell(%d),PSCell(%d)
Line 15323: Warning! unexpected frame difference (diff1:%d)
Line 15411: [MCD] Check RF imbalance(mode:%d) (m:%d, s:%d)
Line 15417: Cannot Allocate Message buffer
Line 15446: [RRM-VoLTE Status(%d), fRSRP(%d), RSRP(%d),RSSI(%d)]
Line 15455: [RRM-VoLTE Status(%d), PLMN(%d), fRSRP(%d), RSRP(%d)] - not enabled
Line 15518: Warning! pList: NULL in LteRrmConn_AddElemToFastSCellList
Line 15531: Warning! Wrong List in LteRrmConn_AddElemToFastSCellList
Line 15546: Warning! ScellFastSrchList already has SCell(%d)
Line 15550: Warning! ScellFastMeasList already has SCell(%d)
Line 15579: Added SCell(%d) to ScellFastSrchList
Line 15583: Added SCell(%d) to ScellFastMeasList
Line 15597: Warning! pList: NULL in LteRrmConn_RemoveElemFromFastSCellList
Line 15610: Warning! Wrong List in LteRrmConn_RemoveElemFromFastSCellList
Line 15627: Removed SCell(%d) from ScellFastSrchList
Line 15631: Removed SCell(%d) from ScellFastMeasList
Line 15660: Warning! pList: NULL in LteRrmConn_SetDoneInFastSCellList
Line 15673: Warning! Wrong List in LteRrmConn_SetDoneInFastSCellList
Line 15700: Removed SCell(%d) from ScellFastSrchList
Line 15706: Removed SCell(%d) from ScellFastMeasList
Line 15728: LteRrm_IsFastScellSrchDone(0)
Line 15742: LteRrm_IsFastScellMeasDone(0)
Line 15784: [NrCellBlock]Decrease the number of sent MR (%d) for NR_MID(%d) ReportInterval(%d)
Line 3445: Receive LteRrmConn_UpdateCsgProximityMeasConfig()
Line 3464: LteRrmConn_UpdateCsgProximityMeasConfig - eutra_meas_list NULL
Line 3492: LteRrmConn_UpdateCsgProximityMeasConfig - utra_meas_list NULL
Line 3232: Receive LteRrmConn_AddCsgProximityMeasList(), eutra_list_size:%d
Line 3239: EARFCN:%d, AntNum:%d, MeasBw:%d, CSG Cell Num:%d
Line 3246: num of IntraFreq(earfcn:%d) CSG Cell: %d
Line 3254: num of IntraFreq(earfcn:%d) CSG Cell: %d
Line 3272: num of InterFreq(earfcn:%d) CSG Cell: %d
Line 3280: num of InterFreq(earfcn:%d) CSG Cell: %d
Line 3297: pFreqInfo NULL
Line 3308: num of InterFreq(earfcn:%d) CSG Cell: %d
Line 3316: num of InterFreq(earfcn:%d) CSG Cell: %d
Line 3355: Receive LteRrmConn_AddCsgProximityUtraMeasList(), utra_list_size:%d
Line 3362: UARFCN:%d, CSG Cell Num:%d
Line 3371: num of Utra Freq(uarfcn:%d) CSG Cell: %d
Line 3379: num of Utra Freq(uarfcn:%d) CSG Cell: %d
Line 3393: Cannot Allocate FreqInfo buffer
Line 3405: num of Utra Freq(uarfcn:%d) CSG Cell: %d
Line 3413: num of Utra Freq(uarfcn:%d) CSG Cell: %d
Line 3768: LteRrmConn_CheckSMeasure: PrimaryCell is NULL
Line 3775: Skip s-Measure check <- bUtraForcedMeas(1)
Line 3798: LteRrmConn_CheckSMeasure: cinr(%d) < 0
Line 3803: LteRrmConn_CheckSMeasure: cinr(%d) < 5, rsrp < smeasure+10
Line 9666: LteRrmConn_CheckCSGProximityTimeToTrigger pFreqInfo is NULL
Line 9670: LteRrmConn_CheckCSGProximityTimeToTrigger(), EARFCN:%d, status:%d, eventTriggered:%d, 
Line 9705: LteRrmConn_CheckCSGProximityTimeToTrigger - invalid(%d)
Line 9751: LteRrmConn_CheckCSGProximityTimeToTrigger - invalid(%d)
Line 10302: LteRrmConn_UpdateCsgProximityMeasurementReports(), RAT:%d, EARFCN:%d, proximity_ind:%d
Line 10308: LteRrmConn_UpdateCsgProximityMeasurementReports - NULL Msg
Line 10328: ONLY CSG Proximity Measurement Report in LTE and UTRA. RAT:%d
