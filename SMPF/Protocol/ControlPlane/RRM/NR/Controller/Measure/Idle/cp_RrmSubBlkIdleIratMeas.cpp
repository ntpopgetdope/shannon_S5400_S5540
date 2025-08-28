Line 78:    >>PriorityEutraSrchMeas()
Line 90:    >>START Checking for EUTRA Frequency %d ScheduleOngoing %d ReSchedule:%d LastMeasType:%d
Line 108: 	>>Exceptional case during EUTRA Meas req with numcell 0
Line 116: 	>>Exceptional case during EUTRA Reschedule process
Line 142:    >>Exceptional case during EUTRA meas req
Line 149:      ::NOT YET TIME TO TRIGGER EUTRA %d ObjectId:%d
Line 184:    >>AddNeighbourCell Received FreqInfo is NULL
Line 209:      ::[ERROR] RrmSubBlkIdleIratMeas::NumSsbMeasInput is excced MAX num of Cell (%d)
Line 218:      ::[IDLEMEAS] CellInfo in Configured request. PhysCellId %d, CellIndexEutra %d, CellIndividualOffset %d
Line 250:    >>Update MeasScheduleInfo for IRAT-FREQ %d ScheduleOngoing %d ObjectId:%d
Line 259:    >>UpdateEutraConfig
Line 276:      ::Index:%d CarrierFreqInfo.AllowedMeasBandwidth:%d
Line 282:      ::Set CarrierFreq:%d AllowedMeasBandwidth:(enum)%d
Line 293:    >>[IDLEMEAS] RrmSubBlkIdleIratMeas::UpdateEutraMeasResult - MeasType:%s(%d) MeasObjectId:%d NumResult:%d
Line 308:      ::Received Eutra MEAS Index:%d CellId:%d isvalid:%d Rsrp:%d Rsrq:%d Sinr:%d TO:%d
Line 338:      ::REMOVE LTE CELL - current_set_type:%s(%d) due to invalid Result
Line 348:      ::MoveCellSet CANDILISTEDCELLSET to IDLISTEDCELLSET for CellId:%d
Line 352:      ::FAILED MoveCellSet CANDILISTEDCELLSET to IDLISTEDCELLSET for CellId:%d
Line 360:      ::MoveCellSet CANDIDETECTEDCELLSET to IDDETECTEDCELLSET for CellId:%d
Line 364:      ::FAILED MoveCellSet CANDIDETECTEDCELLSET to IDDETECTEDCELLSET for CellId:%d
Line 380:      ::Wrong Step CellId%d, Msg.CellId:%d, Isvalid:(bool)%d
Line 385:      ::Msg.CellId:%d is not exist in CellSet
Line 394:      ::ObjectId is not matched --- Freq:%d ScheduleInfo.ObjectId:%d Msg.ObjectId:%d
Line 405:    >>[SLOTINFO] There is no EUTRA Info
Line 418:      ::[SLOTINFO] EutraSrch ObjectId %d removed
Line 426:      ::[SLOTINFO] EutraMeas ObjectId %d removed
Line 431:      ::[SLOTINFO][EUTRA] Not proper meas type between MeasScheduleInfo.LastMeasType (enum)%d CNF Meastype (enum)%d
Line 443:      ::[SLOTINFO] EutraSrch ObjectId %d removed
Line 448:      ::[SLOTINFO][EUTRA] Not proper meas type between MeasScheduleInfo.LastMeasType (enum)%d CNF Meastype (enum)%d
Line 460:      ::[SLOTINFO] EutraMeas ObjectId %d removed
Line 465:      ::[SLOTINFO][EUTRA] Not proper meas type between MeasScheduleInfo.LastMeasType (enum)%d CNF Meastype (enum)%d
Line 524:      ::Change Candidate Eutra Srch PrevMo:%d(timeDiff:%d) NewMo:%d(By initsrchmeasflag:%d or DoSrchLowSinr:%d)
Line 539:      ::Change Candidate Eutra Srch PrevMo:%d(timeDiff:%d) NewMo:%d(timeDiff:%d)
Line 567:      ::Change Candidate Eutra Meas PrevMo:%d(timeDiff:%d) NewMo:%d(By initsrchmeasflag)
Line 573: Change Candidate Eutra Meas due to Reselection NumCandiCellForReSel %d, TReselExpiredCurrentCycle %d
Line 588:      ::Change Candidate Eutra Meas PrevMo:%d(timeDiff:%d) NewMo:%d(timeDiff:%d)
Line 608:    >>[IDLEMEAS] RrmSubBlkIdleIratMeas::UpdateEutraSrchResult - MeasType:%s(%d) ObjectId:%d NumResult:%d
Line 627:      ::Received Eutra SRCH Index:%d CellId:%d isvalid:%d TimingOffset:%d cptype:%d
Line 649:      ::FOUND - INVALID NEIGHBOUR(BLACKCELL) ObjectId:%d
Line 662:      ::UnIdListedCell:%d
Line 684:      ::CellId:%d Move UNIDLISTEDCELLSET to CANDILISTEDCELLSET
Line 688:      ::CellId:%d FAILED Move UNIDLISTEDCELLSET to CANDILISTEDCELLSET
Line 696:      ::Wrong Step CellId%d, Msg.CellId:%d, Isvalid:(bool)%d
Line 717:      ::AddCellSet RRM_SET_TYPE_CANDIDETECTEDCELLSET for CellId:%d
Line 721:      ::FAILED AddCellSet RRM_SET_TYPE_CANDIDETECTEDCELLSET for CellId:%d
Line 729:      ::ObjectId is not matched --- Freq:%d ScheduleInfo.ObjectId:%d Msg.ObjectId:%d
Line 744:    >>[INITSM] UpdateInitialSrchMeas EUTRA %d srch %d, Meas %d, AvailEval %d
Line 759:    >>[INITSM] Free InitSrchMeasFlag for EUTRA FREQ %d
Line 773:    >>Reschedule:%d InitSrch:%d InitMeas:%d
Line 806:    >>GetEutraFreq
Line 814:    >>pEutraFreqInfo is not found
Line 842: 	>>INVALID EARLY MEAS FREQ %d SIB_FREQ %d, EM_FREQ %d, EM_ISPERFORM %d
