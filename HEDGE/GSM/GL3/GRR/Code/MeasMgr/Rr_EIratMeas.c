Line 182: Release All 3 Prio List 
Line 222:   4GHighPrioReselList (%d) 4GLowPrioReselList (%d) 4GReselGSMList(%d)
Line 256: ResetLteInfoOnScell
Line 280: DEL for EARFCN (%d) Cell ID  (%d)	
Line 296: Free ALL EARFCNS and corresponding PCIDS 
Line 304: DEL EARFCN (%d) 
Line 351: Update 4G Cell List -NbInst:%d
Line 391:  Total Earfcn Count from index: %d , From instance (%d)
Line 409: Index (%d) Earfcn (%d) measBW(%d) priority(%d) ThreshEUTRANHigh (%d) ThreshEUTRANLow (%d) ThreshEUTRANQRxlevMin (%d) 
Line 411:  Process Available Earfcn Information  
Line 440: Update 4G Not Allowed Cell List - NbSI2QInst:%d, Nbofjinstance:%d 
Line 457: Freq index count(%d) Freqindex(%d) Putting @ new Static index(%d) Earfcn(%d)
Line 463: Freqindex(%d)  Earfcn(%d) PCID(%d)
Line 478: EUTRAN Index obtained from NA structure is out of bound%d 
Line 487: No of EARFCN in not allowed list (%d)
Line 494: EARFCN (%d) PCID (%d) BitMapGroup (%d) IsNotAllowed?(%d)
Line 507: QRB: Pending to send NotAllowedCellList
Line 520: Total Number of EARFCN Sent as Not Allowed (%d) 
Line 527:  (%d) Not allowed EARFCN (%d) at index(%d)
Line 533:  For EARFCN (%d) : Not allowed PCID (%d)
Line 537:  For EARFCN (%d) : Count of not allowed cell (%d)
Line 541:  MPH_EUTRAN_NOT_ALLOWED_CELL_IND sent  
Line 551:  NO EARFN available in Not allowed list (%d) Or Not suitable state(%d) 
Line 578: ERROR  RtkGetMemory returned NULL  in rr_NewLteEarfcnElem
Line 598: NewLteEarfcnElem: Index (%d) Earfcn (%d) measBW(%d) priority(%d) 
Line 712: Deleting all Cells for EARFCN %d 
Line 743: Deleting  EARFCN ITSELF %d
Line 827: ERROR RtkGetMemory returned NULL
Line 887: Number of Earfcn to be deleted %d
Line 937: STOP Monitoring : Earfcn (%d) measBW(%d) PriHighOrLow(%d) 
Line 941:  GRR => MPH_EUTRAN_STOP_EARFCN_REQ for EARFCN 
Line 1090: rr_EutranMeasTrigger : rr_EutranMeasState = %d, rr_FDDLteSupported = %d
Line 1099: rr_EutranMeasTrigger : 4G measurement is disabled by LTE RAT
Line 1133: ERROR : Measurement not triggered in Dedi mode
Line 1155: ERROR : Measurement not triggered in NC2 mode
Line 1160: ERROR : Measurement not triggered in PTM mode
Line 1189: Stopping EIRAT measurements in rr_PlmnState: %d
Line 1196: Stopping EIRAT measurements in rr_InterRatStatus: %d
Line 1201: rr_FDDLteSupported  %d
Line 1238: rr_EarfcnScanlistGen : rr_FDDLteSupported (%d) , rr_EutranMeasState(%d) 
Line 1241:  ServCell RxLev (%d) , ThreshPrioritySearch(%d) IgnoreLowPriority(%d)
Line 1246: rr_EarfcnScanlistGen : FDDSupported (%d) , rr_EutranMeasState(%d) 
Line 1264: EARFCN (%d) is NOT barred
Line 1268: EARFCN (%d) is barred
Line 1274: EARFCN (%d) Skipped for SCAN as priority is invalid (%d) 
Line 1295: EARFCN (%d) Skipped for SCAN as Scan Status is (%d) 
Line 1317: EARFCN (%d) is NOT barred
Line 1321: EARFCN (%d) is barred
Line 1327: EARFCN (%d) Skipped for SCAN as priority is invalid (%d) 
Line 1394: Total no of EARFCN (%d) NoEarfcnToScan (%d)
Line 1402: EARFCN SCAN List not Gen as No EARFCNS avilable(%d)
Line 1427: Sending MPH_EUTRAN_MEAS_REQ %d
Line 1432: EUTRAN_MEAS_REQ_START
Line 1436: EUTRAN_MEAS_REQ_STOP
Line 1464: rr_RegistryItem.G2LPtmOn  (%d) 
Line 1475: State is not suitable for EARFCN SCAN in PTM [Access(%d) REORG_MODE(%d) GMMReady(%d) NC_Order(%d) RR State(%d) G2LPtmOn(%d)
Line 1486: State is not suitable for EARFCN SCAN [Access(%d) REORG_MODE(%d) GMMReady(%d) NC_Order(%d) RR State(%d)]
Line 1501: 4G EARFCN SCAN List##Total Number of EARFCN to SCAN (%d) 
Line 1506: Index (%d) : Earfcn (%d) Priority (%d)
Line 1562: EARFCN (%d) SCAN STATUS Changed to REQUESTED  (%d)
Line 1566: SCAN_EARFCN : Earfcn (%d) measBW(%d) priority(%d), searchOrder(%d)
Line 1570: GRR => MPH_EUTRAN_SCAN_EARFCN_REQ
Line 1578: QRB: rr_QrbEutranSacnStatus (%d)
Line 1582: No EARFCNS to SCAN (%d)
Line 1609: EARFCN (%d)  Scan Status is (%d) 
Line 1647: FATAL ERROR: Trying to add EARFCN for Unknown EARFCN %d
Line 1653: Finding Cell (%d) in EUTRAN LIST:
Line 1686: FATAL ERROR: Trying to add EARFCN for Unknown EARFCN %d
Line 1737: ERROR RtkGetMemory returned NULL
Line 1756:  Add Cell(%d)  in EUTRAN LIST: NewMeasRxd(%d) MeasAge(%d)
Line 1769: Cell(%d) Found in EUTRAN LIST: NewMeasRxd(%d) MeasAge(%d)
Line 1797: FATAL ERROR: Trying to DEL PCID  for Unknown EARFCN %d
Line 1812: DelCell(%d)From EARFCN Q List
Line 1859: FATAL ERROR: Trying to DEL Unknown EARFCN %d
Line 1871: Cell Not found in Meas Report , New Meas age (%d) for Cell (%d):
Line 1877: Cell to be deleted from List (%d):
Line 1885: Cell found in Q , New Meas age (%d) for Cell (%d):
Line 1901: Resetting NewMeas Flag for cell (%d):
Line 1936: [G2L][MEAS] From Meas Result EARFCN and No Of Cells , Earfcn (%d) NumOfCells(%d)
Line 1941: [G2L][MEAS] 4G NCELL [%d,%d] RSRP(%d) RSRQ(%d) NewMeas(%d)
Line 1989: MPH_EUTRAN_MEAS_REPORT_IND(NumOfEarfcns = %d)
Line 1997: EARFCN:%d found in measurement at Meas report 
Line 2015: [G2L][SCAN] Number of PCID reported is 0 for EARFCN:%d
Line 2031: [G2L][SCAN] 4G NCELL [%d,%d] RSRP(%d) RSRQ(%d)
Line 2039: AddCellCnt %d
Line 2047: ERROR! EARFCN:%d:received in Meas not in EutranInfo
Line 2051: EutranMeasData->NbMeas:%d
Line 2055: Total  NbMeas (%d) 
Line 2062: [G2L][MEAS] MeasIndex:%d FreqIndex:%d Earfcn:%d PCID:%d RSRP(%d) RSRQ(%d)
Line 2105: Finding  Freq and Cell in Prio IRAT  LIST: F(%d) Cell (%d)  Elem(%d)
Line 2110: Elem (%d) CellId (%d)  : F(%d) 
Line 2113: Address of Elem returned is (%d):
Line 2145: Adding  in Reselection Q Freq  (%d) Cell (%d)  Prio (%d) SNonServ(%d) 
Line 2165: Start list with  %d
Line 2232: ERROR RtkGetMemory returned NULL
Line 2249: Meas already in  Reselection Q Freq  (%d) Cell (%d)  Prio (%d) SNonServ(%d) 
Line 2259:   Reselection Q Freq  (%d) Cell (%d)  Prio (%d) SNonServ(%d) 
Line 2322: rr_sortQueueForG2LReselection: numEutranCell(%d)
Line 2344:  Before sorting 4G NCELL [%d,%d] [Priority(%d) SNONserving(%d)]
Line 2375:  After sorting on Priority 4G NCELL [%d,%d] [Priority(%d) SNONserving(%d)]
Line 2397:  After sorting on Snonserving 4G NCELL [%d,%d] [Priority(%d) SNONserving(%d)]
Line 2410: rr_sortQueueForG2LReselection: numEutranCell(%d)
Line 2431:  Before sorting 4G NCELL [%d,%d] [Priority(%d) SNONserving(%d)]
Line 2444:  After sorting on Snonserving 4G NCELL [%d,%d] [Priority(%d) SNONserving(%d)]
Line 2759: rr_Update4GReselCounter : Hprio EARFCN (%d)
Line 2763: [G2L][PRIO][EVAL] 2G SCELL [%d,%d] [C1:%d GERAN_PRIORITY:%d THRESH_GSM_low:%d H_PRIO:%d]
Line 2779:  Evaluating Earfcn (%d)  EARFCNPrio(%d)  Geran Prio (%d)
Line 2787: EARFCNPrio(%d) is invalid or duplicated with GERAN(%d) or UTRAN
Line 2797:  No Meas received for Earfcn (%d)  Prio(%d)
Line 2813: 4G NCELL [%d,%d] %s Priority:%d S_EUTRAN:%d RSRP:%d
Line 2816:  QRXLEVMIN:%d THRESH_EUTRAN_high:%d THRESH_EUTRAN_low:%d
Line 2843: [G2L][PRIO][EVAL] 4G NCELL [%d,%d] HIGH(%d) LOW(%d) GSM(%d) TRESEL(%d)
Line 2859: Num4GCellThreshEUTRANGSM %d Num4GCellThreshEUTRANHigh %d Num4GCellThreshEUTRANLow %d
Line 2865: LTE Cells available for Reselection in ThreshEUTRANHigh Q (%d)
Line 2875:  NO LTE Cells available  in ThreshEUTRANHigh Q (%d)
Line 2884: LTE Cells available for Reselection in ThreshEUTRANLow Q (%d)
Line 2896:  NO LTE Cells available  in ThreshEUTRANLow Q (%d)
Line 2903: LTE Cells available for Reselection in ThreshEUTRANGSM Q (%d)
Line 2914:  NO  LTE Cells available in ThreshEUTRANGSM Q (%d)
Line 2942: Find Suitable 4G Cell
Line 2957: LTE  Cell Suitable EARFCN %d PCID %d Priority %d SnonServ (%d) from Queue High
Line 2965: PRIO Element NULL: No Cell found in rr_4GHighPrioReselList
Line 3073: Sending : GRR_MM_CELL_RESELECTION_TO_EUTRAN
Line 3114: Sending : GRR_MM_CELL_RESELECTION_TO_EUTRAN
Line 3135: Filled Eutan Info for EARFCN(%d) Cell id(%d)
Line 3137: GRR => GRR_MM_CELL_RESELECTION_TO_EUTRAN
Line 3146: Number of Earfcns %d
Line 3149: Earfcns %d
Line 3176: Filled PCCO Eutan Info for EARFCN(%d) Cell id(%d) MeasBw(%d)
Line 3179: GRR PCCO => GRR_MM_CELL_CHANGE_TO_EUTRAN
Line 3183: CELL Change not enabled
Line 3196: GRR <= GRR_MM_CELL_RESELECTION_TO_EUTRAN_COMPLETE
Line 3255: ERROR RtkGetMemory returned NULL
Line 3260:  rr_Handicap4GEarfcn Update Earfcn (%d) and BarTimeValue(%d) 
Line 3297:  Invalid Cause (%d) 
Line 3318: RESELECTION TO EUTRAN FAILED:: Cause for Resel Failure is : %d BarTimerValue (%d) 
Line 3360: PCCO RESEL TO EUTRAN FAILED:: Cause for Resel Failure is : %d
Line 3376: CELL Change not enabled
Line 3410: Error possible: IndUtranParam is more than (%d)
Line 3419: 3G Individual Priority Parameters Description not Present 
Line 3443: Error possible: IndEutranparam is more than (%d)
Line 3452: E-UTRAN Individual Priority Parameters Description  not Present 
Line 3461: T3230 timeout value  not Present 
Line 3483: Error possible: max FDDArfcn in Utran cannot be more than (%d)
Line 3506: Error possible: max FDDArfcn in Eutran cannot be more than (%d)
Line 3541:  Converting RSRP into 6 bit Report Quant , RSRP(%d) RepQuant(%d)
Line 3564:  Converting RSRQ into 6 bit Report Quant , RSRQ(%d) RepQuant(%d)
Line 3595:  Check for 4G Cells with RSRP/RSRQ , RepQuant (%d) EutranMeasData->NbMeas:%d, NoOfCellsReqd:%d
Line 3603:   4G  Measurement EARFCN (%ld) discarded - LTE MRU
Line 3614:  Meas:%d FreqIndex:%d Earfcn:%d PCID:%d
Line 3642:   4G  Measurement discarded - Report below threshold
Line 3659:  Eutranfreqindex : %d reportquantity :%d, pcid : %d, fourgcell : %d, Noofmeas %d)
Line 3669:  Num 4G Cells selected for Measurement Report: %d in Type (%d)
Line 3715: EutranThreshold:%d Offset:%d EUTRANRepThresh2:%d ,ReportQuantity :%d, NonReportQuantity:%d
Line 3732: 	discarding this measurement, LteThresholdConversion[EutranThreshold]:%d ,ReportQuantity :%d, NonReportQuantity:%d, EUTRANRepThresh2:%d
Line 3740: LteOffsetConversion[Offset]:%d ,ReportQuantity :%d
Line 3762: QRB: QRB type (%d)
Line 3780: QRB: No valid 4G cell in the list %d
Line 3785: QRB: Gen Eutran Meas list - CurMesState: %d
Line 3795: QRB: index (%d) EARFCN (%d)
Line 3818: QRB: 4G EARFCN SCAN List##Total Number of EARFCN to SCAN (%d) 
Line 3830: QRB: EARFCN (%d) SearchOrder (%d) SCAN STAS Changed to REQUESTED  (%d)
Line 3833: QRB: rr_QrbEutranSacnStatus (%d)
Line 3834: GRR => MPH_EUTRAN_SCAN_EARFCN_REQ
Line 3849: -----> QRB -- SELECT 4G Cell <------
Line 3859: QRB: Invalid QRB type %d
Line 3886: QRB: MPH_EUTRAN_MEAS_REPORT_IND(NumOfEarfcns = %d)
Line 3895: QRB: EARFCN:%d found in measurement at Meas report 
Line 3913: QRB: Number of PCID reported is 0 for EARFCN:%d
Line 3926: QRB: EARFCN:%d:PCID:%d RSRP %d RSRQ %d
Line 3928: QRB: EutranToScanInfo->NbMeas:%d
Line 3934: QRB: ERROR! EARFCN:%d:received in Meas not in EutranInfo
Line 3949: [G2L][QRB] -----> SELECT 4G Cell <------
Line 3957: QRB: Wait for the next MeasReport
Line 3963: QRB: Wait for the next MeasReport - Scan for 1st MRU is not done %d
Line 3991: QRB: rr_EvaluateLteCellForReselDuringQrb
Line 4003: QRB: Check First Resel Criteria of QRB for EARFCN with PCID , E (%d) PCID (%d)
Line 4013: QRB: Candidate! For PCID (%d) - RSRP(%d) > Thr(%d), RSRQ(%d) > Thr(%d)
Line 4033: QRB: Found!! For PCID (%d) - RSRP(%d) RSRQ(%d)
Line 4047: QRB: Found!! For PCID (%d) - RSRP(%d) RSRQ(%d)
Line 4055: QRB: Found!! For PCID (%d) - RSRP(%d) RSRQ(%d)
Line 4069: QRB: Found!! For PCID (%d) - RSRP(%d) RSRQ(%d)
Line 4085: QRB: Found!! For PCID (%d) - RSRP(%d) RSRQ(%d)
Line 4116: QRB: bestIdx (%d)
Line 4148: QRB: STOP Monitoring : Earfcn (%d) measBW(%d) priority(%d) 
Line 4152: QRB: GRR => MPH_EUTRAN_STOP_EARFCN_REQ for EARFCN 
Line 4288: ERROR RtkGetMemory returned NULL
Line 4312: Sending : GRR_MM_CELL_RESELECTION_TO_NR
Line 4335: -----> QRB to NR <------
Line 4345: QRB: Invalid QRB type %d
Line 4373: RESELECTION TO NR FAILED:: Cause for Resel Failure is : %d
Line 4376: Back to 2G : QRB failure. Trigger G2L QRB
Line 4417: GRR <= GRR_MM_CELL_RESELECTION_TO_NR_COMPLETE
Line 168: Reset not allowed 4G Cell List
Line 661: LteElem found (0x%x) Earfcn (%d) Index (%d)
Line 679: MISMATCH in  INDEX . Earfcn (%d) Index (%d) NewIndex (%d)
Line 687: Queue Full. Earfcn (%d) Index (%d)
Line 975: GeranPriorityParaPresent=%d NoHprioEarfcn=%d IgnoreLowPriority=%d(ThreshPrioritySearch=%d RxLev=%d)
Line 986:  Since High priority EARFCN are there, Mode is set to EUTRAN_MEAS_REQ_START
Line 994:  Since no High priority EARFCN are there and IgnoreLowPriority is TRUE, Mode is set to EUTRAN_MEAS_REQ_STOP
Line 1000:  Since IgnoreLowPriority is FALSE, Mode is set to EUTRAN_MEAS_REQ_START
Line 1007:  Since GeranPriorityParam is not present, Mode is set to EUTRAN_MEAS_REQ_STOP
Line 1012:  Eutran Measurement Mode is MEAS_REQ_STOP %d
Line 2454:  Earfcn is High Priority EARFCN (%d) 
Line 2457:  Check First Resel Criteria for EARFCN with PCID , E (%d)	PCID (%d)
Line 2462: 4G NCELL [%d,%d] [%c][RSRP (%d) > THRESH_EUTRAN_high + EUTRAN_QRXLEVMIN (%d)]
Line 2470:  For PCID	(%d)  RSRP - Qrxlevmin (%d) >  ThreshEutranHigh(%d)
Line 2481: There is higher priority cell satisfying reselection criteria than Cell(%d,%d). Hold reselection!!
Line 2491: 	T_resel_High (%d) , Should be more than (%d) sec 
Line 2500: LTE Cell (%d)	Num4GCellThreshEUTRANHigh %d
Line 2511:  1st Resel Cond not satisfied (H), RSRP  - Qrxlevmin (%d) is less than  ThreshEUTRANHigh : (%d) 
Line 2521:  Check  2nd Criteria for EARFCN with PCID , E (%d)  PCID (%d)
Line 2529: 4G NCELL [%d,%d] [%c][RSRP (%d) > C1 + H_PRIO + QRXLEVMIN (%d)]
Line 2536:  For PCID	(%d)  S_EUTRAN , RSRP-Qrxlevmin = (%d)	 >	C1+H_PRIO=(%d) 
Line 2542: 	T_resel_GSM (%d) , Should be more than (%d) sec 
Line 2550: There is higher priority cell satisfying reselection criteria than Cell(%d,%d). Hold reselection!!
Line 2566: LTE Cell (%d)	Num4GCellThreshEUTRANHigh %d
Line 2576:  2nd	Resel Condition not satisfied (H) , RSRP - Qrxlevmin (%d) is less C1+HPRIO (%d) 
Line 2585: 4G NCELL [%d,%d] [X][SCELL+NCELL C1 < THRESH_GSM_low (%d)]
Line 2600:   Earfcn is Low  Priority EARFCN (%d)	
Line 2609: Check First Resel Criteria for LP EARFCN with PCID , E (%d)  PCID (%d)
Line 2614: 4G NCELL [%d,%d] [%c][RSRP (%d) > THRESH_EUTRAN_low + EUTRAN_QRXLEVMIN (%d)]
Line 2623: For PCID  (%d)  RSRP - Qrxlevmin (%d) >  ThreshEUTRANLow(%d) 
Line 2629: 	 T_resel_Low (%d) , Should be more than (%d) sec 
Line 2638: There is higher priority cell satisfying reselection criteria than Cell(%d,%d). Hold reselection!!
Line 2651: LTE Cell (%d)	Num4GCellThreshEUTRANLow %d
Line 2661:  1st Resel Condition not satisfied (L), RSRP (%d)  Qrxlevmin (%d) ThreshEUTRANLow(%d) 
Line 2669: 4G NCELL [%d,%d] [%c][RSRP (%d) > C1 + H_PRIO + QRXLEVMIN (%d)]
Line 2680: For PCID  (%d)  S_EUTRAN , RSRP-Qrxlevmin = (%d)	>  C1+H_PRIO=(%d)
Line 2686:  T_resel_GSM (%d) , Should be more than (%d) sec 
Line 2694: There is higher priority cell satisfying reselection criteria than Cell(%d,%d). Hold reselection!!
Line 2709:  LTE Cell (%d)  Num4GCellThreshEUTRANGSM %d
Line 2719:  2nd  Resel Condition not satisfied , RSRP - Qrxlevmin (%d) is less C1+HPRIO (%d)
Line 2726: 4G NCELL [%d,%d] [X][SCELL+NCELL C1 < THRESH_GSM_low (%d)]
Line 2980: rr_Is4GcellSuitableToReselect: fdd(%d) state(%d) Emrg(%d) 
Line 2987: [G2L][PRIO] 4G Cell Found but hold on
Line 2997: [G2L][PRIO] -----> SELECT 4G Cell <------
Line 3021: No Suitable 4G Cell
Line 4221: Skipped 4G MRU EARFCN %ld as already added to Scan List
Line 4245: Added 4G MRU EARFCN %ld to Scan List, Index (%d)
Line 4263:  LTE MRU Build List : numofEarfcn(%d)  rr_NumOfMRUEarfcn(%d)
