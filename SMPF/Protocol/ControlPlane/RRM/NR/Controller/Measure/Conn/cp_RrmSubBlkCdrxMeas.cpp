Line 81: RrmSubBlkCdrxMeas::Init - MsgGrpId(%d)
Line 88:    >>ManageTimerMrInterval - Start(%d) Duration(%d)
Line 93:      ::T_MR_INTERVAL is running with [%d]ms duration. [%d]ms remain until expired
Line 118:    >>ConfigureCdrxMsg
Line 132:      ::curTimeInMs:%d[ms] cdrxTimeStamp:%d[ms] RemaincdrxDuration:%d[ms] OriginalRemaincdrxDuration:%d[ms] 
Line 159:    >>NO CDRX - Prepare irat change runnging(%d) or IsPbchReadyToSleep(%d)
Line 167:    >>CDRX -> measurement requirement okay
Line 178:      ::CDRX -> MR is okay ( no pending MR at this moment) 
Line 183:        #CDRX -> TTT is okay
Line 188:          *CDRX -> pending MR is okay (CDRX TRUE)
Line 196:          *CDRX - CDRX_MR_PENDING (CDRX TRUE) - remainTime:%d
Line 205:        #NO CDRX - CDRX_TIMER_PENDING (TTT is not okay)
Line 224:      ::NO CDRX - MR sent (MR need to sent now)
Line 232:    >>NO CDRX - Measurement pending(Edge of Measurement requirement)
Line 240:    >>NO CDRX - IsOtherPendingForCdrx
Line 255:    >>UpdateTimingOffsetAfterCdrx - TimingOffset:%d
Line 276:      ::pFreqInfo is not found or pServCellGroupInfoNr is NULL
Line 287:      ::Pcell TO updating
Line 296:      ::Pcell is NULL
Line 307:      ::SCell TO updating
Line 316:      ::SCell is NULL
Line 341:      ::FOUND - SetType:%s(%d) ObjectId:%d
Line 362:        #SMTC2 Case - Change TargetSmtcPeriod from (enum):%d to (enum)%d 
Line 374:      #Unexcepted behavior detection.
Line 386:      ::Unexcepted behavior detection.
Line 395:    >>CheckMeasSchedule - sleepDurationinMs:%d[ms], curTimeInMs:%d[ms]
Line 440:      ::pFreqInfo is NULL
Line 487:      ::SCell(arfcn:%d, SCS:(enum)%d) is NULL
Line 496: 	  ::skip checking SCell Schedule(scellStatus:(enum)%d, isMeasInfoEmpty:(bool)%d, requirementupdated(bool):%d)
Line 561:      ::Before sorting remainTimeInMsForFreq[Intra]:%d [Inter]:%d [Scell]:%d [Eutra]:%d [Utra]:%d
Line 568:      ::After sorting remainTimeInMsForFreq[0]:%d [1]:%d [2]:%d [3]:%d [4]:%d
Line 578:    >>CheckEvalReportForCdrx
Line 601:      ::Entering SMeasureCondition, now check delete condition
Line 642:      ::No filtering and evaluation required
Line 652:      ::MR need to send now.
Line 657:      ::No MR required this time
Line 680:      ::PeriodicalReportInterval::reportTriggered is True::MeasID(%d), numberOfReportsSent(0)::_eval_
Line 685:      ::First send::MeasID(%d), PeriodicalReportInterval(%d)::_eval_
Line 691: PeriodicalReportInterval::reportTriggered is True::MeasID(%d)::_eval_
Line 695: Report on Leave is true send event for MeasID(%d), PeriodicalReportInterval(%d)::_eval_
Line 701:      ::PeriodicalReportInterval::reportTriggered is True::MeasID(%d), TimeDiff(%d)::_eval_
Line 711:      ::PeriodicalReportInterval::reportTriggered is false::MeasID(%d), TimeDiff(%d)::_eval_
Line 716:    >>GetReportTriggered::RemainTime(%d)::_eval_
Line 740: 	  ::>>UlDelayMR set report mode as SERVINGCELL ReportAmount:%d(enum) 
Line 749:      ::Invalid Periodical ReportAmount
Line 751:      ::ProcConnEvalReportForDrxCondition::MeasID(%d), Periodical_ReportAmount(%d)::_eval_
Line 772:      ::Invalid Periodical ReportAmount
Line 774:      ::[N2L] ProcConnEvalReportForDrxCondition MeasID(%d), Periodical_ReportAmount(%d)
Line 783: 	>>ProcConnEvalReportForDrxCondition::ReportMode(%d)::_eval_[N2L]
Line 811:    >>RrmSubBlkCdrxMeas::ProcConnEvalReportForDrxCondition
Line 832:    >>ProcConnEvalReportForDrxCondition - MeasID(%d) VarMeasReportList.reportTriggered(%d)
Line 862:      ::TimerMr will stop. because minRemainTime is not setting::_eval_
Line 867:      ::minRemainTime(%d)::_eval_
Line 875:    >>RrmSubBlkCdrxMeas::IsOtherPendingForCdrx
Line 888:      ::Need first srch/meas for Eutra EvalStatus:(enum)%d
Line 898:    >>CheckCdrxRequirementForIntra - CdrxCycle:%d[ms] sleepDurationinMs:%d[ms] curTimeInMs:%d[ms]
Line 935:      ::Unexceptional measState:(bool)%d type:(enum)%d
Line 946:      ::No scheduled srch/meas for intra freq:%d
Line 956:    >>CheckCdrxRequirementForInter - CdrxCycle:%d[ms] sleepDurationinMs:%d[ms] curTimeInMs:%d[ms]
Line 1000:      ::Unexceptional type:%d(enum)
Line 1010:      ::No scheduled srch/meas for inter freq:%d
Line 1019:    >>CheckCdrxRequirementForScell - CdrxCycle:%d[ms] sleepDurationinMs:%d[ms] curTimeInMs:%d[ms]
Line 1039:      ::Scell initial srch is ongoing)
Line 1069:      ::Unexceptional type:%d(enum)
Line 1080:      ::No scheduled srch/meas for SCELL freq:%d
Line 1089:    >>CheckCdrxRequirementForEutra - CdrxCycle:%d[ms] sleepDurationinMs:%d[ms] curTimeInMs:%d[ms] ModemStatus:%d
Line 1137:      ::Unexceptional type:%d(enum)
Line 1146:      ::No scheduled srch/meas for EUTRA ARFCN:%d
Line 1155:    >>CheckCdrxRequirementForUtra - CdrxCycle:%d[ms] sleepDurationinMs:%d[ms] curTimeInMs:%d[ms] ModemStatus: %d
Line 1194:      ::Unexceptional type:%d(enum)
Line 1203:      ::No scheduled srch/meas for UTRA ARFCN:%d
Line 1304:      ::EUTRA CdrxRequriement Srch %d, Meas %d, GapPeriod %d, CdrxCycle %d, CSSF_S %d, CSSF_M %d,
Line 1391:      ::UTRA CdrxRequriement Srch %d, Meas %d, GapPeriod %d, CdrxCycle %d, CSSF_S %d, CSSF_M %d,
