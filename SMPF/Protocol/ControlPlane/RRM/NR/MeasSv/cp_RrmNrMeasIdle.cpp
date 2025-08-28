Line 86: RrmNrMeasIdle::entry
Line 91: RrmNrMeasIdle::exit
Line 105:      ::IsHigherPriorityMode() - There is no IntraFreq ptr
Line 111:      ::[OFF] HIGHER_PRIORITY_MODE, EM %d, ALL MEAS %d
Line 116:      ::[OFF] HIGHER_PRIORITY_MODE. INVALID ReselectionServingFreqInfo
Line 124:      ::[ON] HIGHER_PRIORITY_MODE. Srxlev %d, Squal %d, SnonIntraSearchP %d, SnonIntraSearchQ %d ModemStatus:%d
Line 130:      ::[OFF] HIGHER_PRIORITY_MODE. Srxlev %d, Squal %d, SnonIntraSearchP %d, SnonIntraSearchQ %d ModemStatus:%d
Line 141:    >>ProcReSchedule
Line 157:      ::CHECK MO(%d) RE-SCHEDULING. ReSchedule %d, SelectedMeasFreq %d
Line 172:      ::Re-scheduled MO:%d
Line 177: 	>>Not Re-scheduled MO:%d
Line 195:      ::Eutra Srch Re-scheduled MO:%d
Line 200:      ::Eutra Srch not Re-scheduled MO:%d
Line 212:    >>CHECK Re-scheduled procedure. CurrentMO:%d, NextMO:%d
Line 215:      ::CHECK NextMO(%d)
Line 233:    >>ProcSchedule
Line 290:    >>UE has not found any new suitable cell during 10 sec. Send OOS Message to change PLMN.
Line 302:    >>Fail to send OOS message. SMPF NEW is failed for RRC_RRM_OOS_IND 
Line 314: ========================<Start setup for Idle Scheduling>========================
Line 328: ========================<End setup for Idle Scheduling>========================
Line 338:    >>ProcIdleEval
Line 372:      ::There is NO candidate one for RESELECTON. ReselState %d
Line 380:      ::There is NO candidate one for RESELECTON.
Line 389:    >>RRM_L1C_MEAS_CNF_Handler
Line 405:      ::Result:(enum)%d ObjectId:%d RsType:%s(%d) MeasType:%s(%d) NumResult:%d
Line 440:    >>MEAS_REQ AGAIN SKIP due to All stop running :%d 
Line 452:      ::[IDLEEVAL] All Measurement is resolved. Do Evaluation.
Line 476:    >>RRM_L1C_MEAS_SCHEDULE_IND_Handler - CurrentMsTime %d, ModemStatus:%d, SfnSubFrame:%d, ServSinr:%d | %d
Line 483:      ::Ignore SCHEDULE_IND due to All stop running :%d 
Line 496:    >>Reselection is not avaliable. Send DRX STATUS_IND with TRUE
Line 505:    >>RRM_RRM_DS_MEAS_STATE_REQ_Handler
Line 522:    >>SendMeasState Result(%d) State(%d) bDS(%d)
Line 549:    >>ManageMeasState bDS(%d)
Line 595:    >>RRM_RRM_MEAS_STATE_REQ_Handler::Delete All MeasSchedule
Line 627:    >>RRM_RRM_MEAS_STATE_REQ_Handler::Delete All MeasSchedule
Line 654:    >>RecvMsg.State(%d) is invalid
Line 658:    >>NR_MEAS state change : from IDLE to %s (for MsgGrpId %d)
Line 663:    >>RRM_RRM_MEAS_STATE_REQ_Handler
Line 671:    >>RRM_TIMER_MEAS_EVAL_IND_Handler
Line 678:    >>RRM_TIMER_MEAS_SCHEDULE_IND_Handler
Line 690:    >>IDLE_INTER RRM_L1C_PBCH_DECODE_CNF_Handler: Result:%d RatType:%d
Line 691:      ::SsbFrequency:%d SubcarrierSpacing:%d
Line 724:      ::FOUND - PBCH DECODED CELL SetType:%s(%d)
Line 732:    >>No freq found in PBCH DECODE CNF
Line 740:      ::IDLE_PBCH PCID(%d) SUCCESS result in RRM_L1C_PBCH_DECODE_CNF_Handler
Line 744:      ::BeamIndexLSB(%d), BeamIndex(%d)
Line 760:    >>No cellptr
Line 768:      ::IDLE_PBCH PCID(%d) RecvMsg.Result == FAILURE
Line 777:      ::Cell removed in RRM_SET_TYPE_IDDETECTEDCELLSET
Line 790:      ::Cell moved to RRM_SET_TYPE_UNIDLISTEDCELLSET
Line 801:    >>No cellptr
Line 806:    >>PCID(%d) Wrong result:%d for FR2 PBCH decode cnf
Line 822:      ::[IDLEEVAL] All Measurement is resolved. Do Evaluation.
Line 891:      ::ScheduleAgainPerPriority:: AvailCountInter %d, CaseInter %d, CaseIratLte %d
Line 905:        #TRY SCHEDULING AGAIN(PRIORITY NR)ObjectId %d
Line 934:        #TRY SCHEDULING AGAIN(PRIORITY EUTRA) ObjectId %d
Line 959:      ::TRY SCHEDULING AGAIN(NEW DETECTED) ObjectId %d
Line 1001: 	>>Send PreDrxStatusInd. HandShakeSkip %d, MeasReserved %d
Line 1019:      ::tolerence(twoSsbSymbolLength):%d - (SCS:(enum)%d)
Line 1036:      ::CellId:%d TargetTimingOffset:%d 
Line 1062:        #PBCH DECODE CNF - SsbTimingOffset:%d diff:%d m_SsbTimingOffsetArray[%d]:%d ssbSampleMax:%d
Line 1070:        #INVALID - Difference:%d exceed Tolerence:%d remove targetCell:%d 
Line 1102:    >>SendFr2PbchDecodeReq - IsFr2:%d MeasPbchStatus:%d IsPbchAvailable:%d
Line 1108:      ::PbchScheduleData - ObjectId:%d CellId:%d SsbIndex:%d
Line 1127:      ::No Cell found to PBCH DECODE REQ
Line 1137:      ::No Cell exist in PbchScheduleData
Line 1142:      ::PBCH DECODE ONGOING
