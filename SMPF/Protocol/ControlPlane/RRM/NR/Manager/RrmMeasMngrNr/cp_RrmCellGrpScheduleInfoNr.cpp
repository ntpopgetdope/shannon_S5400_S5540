Line 56: RrmCellGrpScheduleInfoNr::RrmCellGrpScheduleInfoNr
Line 71: RrmCellGrpScheduleInfoNr::~RrmCellGrpScheduleInfoNr
Line 76:      ::RrmCellGrpScheduleInfoNr::Init MsgGrpId %d
Line 109:      ::DeleteAllMeasSchedule
Line 116: RrmCellGrpScheduleInfoNr::DeleteEutraMeasScheduleUsingObjectId :%d
Line 136:    >>Found and change Eutra schedule data for ObjectId (%d)
Line 147: RrmMngrScheduleInfoNr::DeleteUtraMeasScheduleUsingObjectId :%d
Line 165:    >>Found and change Utra schedule data for ObjectId (%d)
Line 191:    >>Found ServingCell freqMeasObjectId %d matching
Line 195:    >>PCellFreqPtr is NULL
Line 215:    >> ObjectId (%d) found and changed schedule info
Line 286:    >>SetCdrxLastMeasReserved : prev:%d new:%d
Line 292:    >>SetCdrxLastHandShakeSkip : prev:%d new:%d
Line 315: Invalid DrxConfig (%d). Setup Search / Measure cycle with 320 forcibily.
Line 329:    >>(ServingCell MeasCycle %d[ms]), (Intra Srch %d[ms], Meas %d[ms]), (Inter Srch %d[ms], Meas %d[ms]) (Higher Priority Mode Srch %d[ms], Meas %d[ms])
Line 394: RrmNrIdle_DRXUpdateForHst - Invalid DrxCycleLength:%d[ms] - Set default(320ms)
Line 419:    >>DrxCycle:%d[ms]/COEF(2) - HstIntra Srch(%d):%d[ms] Meas(%d):%d[ms] Eval(%d):%d[ms]
Line 423:    >>DrxCycle:%d[ms]/COEF(2) - HstEutra Srch(%d):%d[ms] Meas(%d):%d[ms] Eval(%d):%d[ms]
Line 447:      ::CheckifMeasurePerformed
Line 464: 	     #Pre-Schedule is ongoing, skip count for IntraFreq schedule
Line 468: 	     #Reschedule is FALSE in List ObjectId:%d MeasFreqType:(enum)%d
Line 491:    >>CheckQuickCdrx
Line 509:    >>FALSE for quick CDRX cause m_SetEvalDone :%d(bool) or null for Serving or intrafreq
Line 618:    >>CheckQuickCdrx result:%d(bool)
Line 629:    >>SetEvalDone %d -> %d
Line 639:    >>QuickCdrx disabled by CellId:%d
Line 647:      ::AddMeasScheduleList:FreqType:%s ObjectId:%d
Line 660:      ::RemoveMeasScheduleList ObjectId:%d
Line 670:      ::Removed in List ObjectId:%d MeasFreqType:(enum)%d
Line 683:    >>CheckMeasScheduleList ObjectId:%d
Line 694:      ::Find in List ObjectId:%d MeasFreqType:(enum)%d
Line 712:    >>RrmCellGrpScheduleInfoNr::SetReScheduleForAll enable:%d
Line 729:      ::[ES] DO NOT Reschedule for MO:%d, NEXT_INTRA_MEASURE %d, NEXT_INTRA_SEARCH %d, m_ModemSleepStatus %d
Line 746:    >>Reschedule for CSI MO:%d
Line 750:    >>Schedule was not ongoing for CSI MO:%d
Line 756:    >>CSI Meas Schedule info Not Found for CSI MO:%d
Line 768:      ::Reschedule for MO:%d
Line 772: 	 ::PreSchedule is ongoing for MO:%d Or No Measurement ongoing
Line 806:      ::Reschedule for MO:%d, ReScheduleSrch %d, ReScheduleMeas %d
Line 818:      ::Reschedule for UTRA MO:%d
Line 868:    >>PrintMeasScheduleList#1: %d -> %d -> %d -> %d -> %d -> %d -> %d
Line 873:    >>PrintMeasScheduleList#2: %d -> %d -> %d -> %d -> %d -> %d -> %d
Line 962:    >> Error: Invalid(NULL) pointer
Line 974: First Scell Srch is not yet done. Need to reset LastMeasType (MEASTYPE_INIT)
Line 978: First Scell Srch is done. No need to reset LastMeasType
Line 1008:      ::RrmCellGrpScheduleInfoNr::CheckAvailableMeasSchedule Freq:(%s) 
Line 1055: 	   ::Error case for TargetMeasFreq:(%s)
Line 1116: 	   ::Error case for TargetMeasFreq:(%s)
Line 1119:        #RetValue:%d Intracnt:%d Intercnt:%d Scellcnt:%d Eutracnt:%d Utracnt:%d
Line 1120:    >>RetValue:%d IntraCSIcnt:%d InterCSIcnt:%d
Line 1133:    >>SetAllStopRunning Prev:%d(bool) New:%d(bool)
Line 1150:    >>CheckNewCellToSchedule
Line 1160:      ::BD/First measure TargetCell:%d is in CandiListed cell set Freq:%d ObjectId:%d
Line 1168:      ::BD/First measure TargetCell:%d is in CandiDetected cell set Freq:%d ObjectId:%d
Line 1178:    >>CheckNewCellToScheduleForEutra
Line 1186:      ::Need Eutra measure TargetCell:%d is in CandiListed cell set Freq:%d
Line 1194:      ::Need Eutra measure TargetCell:%d is in CandiDetected cell set Freq:%d ObjectId:%d
Line 1227:    >>Eutra ObjectId:%d ScheduleOngoing:%d LastMeasType:%d
Line 1265:    >>CheckRunningEutraSrchMeas retValue:%d SrchSchedule:%d MeasSchedule:%d
Line 1272:    >>RrmCellGrpScheduleInfoNr::DisableReScheduleForIdleEutra
Line 1299:    >>RrmCellGrpScheduleInfoNr::ResetAgcIfNoVaildEutraCell
Line 1313:    >>RrmCellGrpScheduleInfoNr::CheckEutraCellExist
Line 1344:    >>RrmMngrScheduleInfoNr::AddListPosMeasConfig - transactionNumber:%d, reportingAmount:%d reportingInterval:%d TimeEarlyFix:%d
Line 1351:    >>RrmMngrScheduleInfoNr::GetPosMeasConfig - transactionNumber:%d
Line 1363: 	 >>Found in List transactionNumber:%d ecidPresent:(enum)%d
Line 1370:    >>Not Found in List transactionNumber:%d
Line 1377:    >>RrmMngrScheduleInfoNr::GetPosMeasConfig - transactionNumber:%d
Line 1388:    >>Found and change transactionNumber:%d ecidPresent:(enum)%d ReportAmount:%d
Line 1415:    >>RrmCellGrpScheduleInfoNr::SetModemSleepStatus PREV:%d NEW:%d (0:DS / 1:DRX / 2:ACT) 
Line 1433:    >>RrmCellGrpScheduleInfoNr::IsPreScheduleInCheckIfMeas CurState:%d m_ModemSleepStatus:%d
Line 1440:      ::[ES] : DO NOT COUNT Measured. NextMeas_INTRA_SEARCH %d, NextMeas_INTRA_MEASURE %d, m_ModemSleepStatus %d
Line 1457:      ::Ignore count for CheckIfMeas
Line 1463:      ::Reset ConnPreSchedule Prev:%d to CDRX_NO_PRESCHEDULE by ds operation 
Line 1492:    >>RrmCellGrpScheduleInfoNr::AddPbchScheduleList - CellId:%d ObjectId:%d SsbIndex:%d
Line 1517:    >>Removed in List using only ObjectId:%d (CellId:%d)
Line 1526:    >>Removed in List ObjectId:%d CellId:%d
Line 1566:    >>No cell exist in freq ObjectId:%d CellId:%d
Line 1573:    >>No freq ObjectId:%d CellId:%d
Line 1586:    >>SetCdrxRemainTime Prev:%d -> New:%d
Line 1597:    >>RrmCellGrpScheduleInfoNr::SetConnIntraPreSchedule
Line 1605:    >>PreScheduleReg %d (0 == disable)
Line 1618:    >>OnGoing to NEED is not possible, no update ConnPreSchedule
Line 1622:    >>OnGoing PreSchedule, no update ConnPreSchedule
Line 1627:    >>SetConnIntraPreSchedule Prev:%d New:%d (0:No 1:Need 2:Ongoing)
Line 1634:    >>NO INTRA FREQ
Line 1657: RrmMngrScheduleInfoNr::RemovePosMeasConfigList transactionNumber:%d or deleteAll:(bool)%d
Line 1675: EcidTrasaction:%d
Line 1693: 	 >>Removed in List transactionNumber:%d ecidPresent:(enum)%d
Line 1717: 	 >>EcidMode (Prev)%d -> (New)%d
Line 1732:    >>Check to ResetLastSrchTimeForIntra (MsgGrpId:%d) 
Line 1740: 		 #Reset intraFreq lastsrchTime to trigger Ecid search (ObjectId:%d)
Line 1756:    >>Check to ResetLastSrchTimeForScell (MsgGrpId:%d) 
Line 1768: 		 #Reset ScellFreq lastsrchTime to trigger Ecid search (ObjectId:%d)
Line 1785:    >>Check to ResetLastSrchTimeForInter (MsgGrpId:%d) 
Line 1793: 		 #Reset InterFreq lastsrchTime to trigger Ecid search (ObjectId:%d)
