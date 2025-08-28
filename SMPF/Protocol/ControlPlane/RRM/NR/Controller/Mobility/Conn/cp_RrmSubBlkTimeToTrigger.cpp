Line 48: RrmSubBlkTimeToTrigger::RrmSubBlkTimeToTrigger()
Line 54: RrmSubBlkTimeToTrigger::~RrmSubBlkTimeToTrigger()
Line 59: RrmSubBlkTimeToTrigger::Init() - MsgGrpId(%d)
Line 70: CheckTimeToTrigger - pMeas or pTargetCell NULL
Line 74:      ::CheckTimeToTrigger(MeasId:%d CellId:%d)
Line 88:      ::CheckTimeToTrigger:EventStatus:%s(%d)
Line 91:      ::unexpected EventStatus:%s(%d)
Line 109: CheckTimeToTriggerEutra - pMeas or pTargetCell NULL
Line 113:      ::CheckTimeToTriggerEutra(MeasId:%d CellId:%d), CurTime %d
Line 131:      ::unexpected EventStatus:%s(%d)
Line 146: CheckTimeToTriggerUtra - pMeas or pTargetCell NULL
Line 150:      ::CheckTimeToTriggerUtra(MeasId:%d CellId:%d), CurTime %d
Line 164:      ::unexpected EventStatus:%s(%d)
Line 178: CheckTimeToTriggerCli - pMeas is NULL
Line 182:      ::CheckTimeToTriggerCli(MeasId:%d ResourceId:%d), CurTime %d
Line 196:      ::unexpected EventStatus:%s(%d)
Line 215:      ::FOUND MeasId:%d TttList[%d](Arfcn:%d CellId:%d TimeFromEnter:%d StatePrev:%s(%d))
Line 249:      ::TimeToTrigger START %s(%d) (MeasId:%d CellId:%d) TimeFrom:%d
Line 252:      ::ADDED MeasId:%d TttList[%d](CellId:%d TimeFromEnter:%d DelayA3RsSinrAtEnter:%d StatePrev:%s(%d)) NumCell:%d
Line 256:      ::FAILED ADD (MeasId:%d CellId:%d) (numOfCellListTimeToTrigger:%d >= MAX_CELL:%d)
Line 262:      ::FAILED ADD (MeasId:%d CellId:%d) (unexpected Status:%s(%d) for StatePrev)
Line 284:      ::REMOVE MeasId:%d TttList[%d](CellId:%d TimeFromEnter:%d StatePrev:%s(%d)) NumCell:%d
Line 293:      ::FAILED REMOVE (MeasId:%d Cellid:%d) (unexpected index:%d numOfCellList:%d)
Line 348:    >>MeasId:%d - New(CellId:%d rsrp:%d sinr%d) is not much better than other(CellId:%d rsrp:%d sinr:%d)
Line 357:    >>MeasId:%d - Reset all TimeFromEnter(numCell:%d) for best new(Arfcn:%d CellId:%d rsrp:%d sinr:%d)
Line 385:      ::GetTimeToTriggerMs::TimeToTriggerMs[CondEventA3] (%d), contEventA3.TimeToTrigger enum (%d)::_eval_
Line 392:      ::GetTimeToTriggerMs::TimeToTriggerMs[contEventA5] (%d), contEventA5.TimeToTrigger enum (%d)::_eval_
Line 403:      ::EventA1 TimeToTrigger:%d[ms](enum)%d
Line 407:      ::EventA2 TimeToTrigger:%d[ms](enum)%d
Line 413:      ::A2 TimeToTrigger:%d EVAL_TIME:%d - A2_opt is enabled for MeasId:%d
Line 427:      ::EventA3 TimeToTrigger:%d[ms](enum)%d
Line 431:      ::EventA4 TimeToTrigger:%d[ms](enum)%d
Line 435:      ::EventA5 TimeToTrigger:%d[ms](enum)%d
Line 439:      ::EventA6 TimeToTrigger:%d[ms](enum)%d
Line 443:      ::Unexpected EventId:(enum)%d on GetTimeToTriggerMs(MeasId:%d MoId:%d RcId:%d)
Line 455:      ::EventI1 TimeToTrigger:%d[ms](enum)%d
Line 459:      ::Unexpected CliEventId:(enum)%d on GetTimeToTriggerMs(MeasId:%d MoId:%d RcId:%d)
Line 467:      ::Unexpected ReportConfigNR.Choice:(enum)%d on GetTimeToTriggerMs(MeasId:%d MoId:%d RcId:%d)
Line 480:      ::EventB1 TimeToTrigger:%d[ms](enum)%d
Line 484:      ::EventB2 TimeToTrigger:%d[ms](enum)%d
Line 488:      ::EventB1_Utra TimeToTrigger:%d[ms](enum)%d
Line 492:      ::EventB2_Utra TimeToTrigger:%d[ms](enum)%d
Line 497:      ::Unexpected EventIdInterRat:(enum)%d on GetTimeToTriggerMs(MeasId:%d MoId:%d RcId:%d)
Line 505:      ::Unexpected ReportConfigInterRAT.Choice:(enum)%d on GetTimeToTriggerMs(MeasId:%d MoId:%d RcId:%d)
Line 511:      ::Unexpected ReportConfig_Choice:(enum)%d on GetTimeToTriggerMs(MeasId:%d MoId:%d RcId:%d)
Line 518: ##########TimeToTriggerState
Line 528:    >>MeasID:%d numOfCellListTimeToTrigger:%d
Line 533:      ::CellId(%d) - TimeToTrigger ongoing and not expired yet
Line 617:    >>entry to enter - keep entry (MeasId:%d CellId:%d)
Line 625:    >>leaving to enter - stop leaving and start entry (MeasId:%d CellId:%d)
Line 635:    >>unexpected:Leaving  to enter - Add cell to TTT list fails (MeasId:%d CellId:%d Index:%d)
Line 646:    >>unexpected:%s(%d) to enter - remove and start entry (MeasId:%d CellId:%d)
Line 657:    >>none to enter - start entry (MeasId:%d CellId:%d)
Line 712:    >>entry to stay - keep entry (MeasId:%d CellId:%d)
Line 720:    >>leaving to stay - stop leaving (MeasId:%d CellId:%d)
Line 730:    >>unexpected:Leaving  to Stay - Add cell to TTT list fails (MeasId:%d CellId:%d Index:%d)
Line 739:    >>unexpected:%s(%d) to stay - remove (MeasId:%d CellId:%d)
Line 749:    >>none to stay - none (MeasId:%d CellId:%d)
Line 804: DELAY_A3 ABORT (MeasId:%d CellId:%d) due to EVENT_A3 leaving
Line 809:    >>entry(ongoing) to leaving - stop entry (MeasId:%d CellId:%d)
Line 815:    >>entry(expired) to leaving - stop entry and start leaving (MeasId:%d CellId:%d)
Line 826:    >>leaving to leaving - keep leaving (MeasId:%d CellId:%d)
Line 834:    >>unexpected:%s(%d) to leaving - remove (MeasId:%d CellId:%d)
Line 844:    >>none to leaving - none (MeasId:%d CellId:%d)
Line 858:    >>expired on leaving - remove (MeasId:%d CellId:%d)
Line 886:      ::TimeToTrigger already expired %s(%d) (MeasId:%d CellId:%d) (TimeFrom:%d TTT:%d offset:%d)
Line 897:      ::TimeToTrigger EXPIRED %s(%d) (MeasId:%d CellId:%d) (TimeFrom:%d TTT:%d offset:%d)
Line 898:      ::TimeToTrigger CurTime:%d, RealTimeDiff %d)
Line 904:      ::TimeToTrigger not expired %s(%d) (MeasId:%d CellId:%d) (TimeFrom:%d TTT:%d offset:%d)
Line 905:      ::TimeToTrigger CurTime:%d, RealTimeDiff %d)
Line 932: CheckConditionForDelayA3(DELAY_A3_RSRP_OFFSET:%d, DELAY_A3_SINR_OFFSET:%d, DELAY_A3_DETERIORATE_SINR_THRESH:%d, DELAY_A3_DETERIORATE_SINR_OFFSET:%d) - MeasId:%d, CellId:%d
Line 956:    >>DELAY_A3 condition:%s(%d), serving(rsrp:%d sinr:%d), ncell(rsrp:%d sinr:%d)
Line 1005: DELAY_A3 START (MeasId:%d CellId:%d) TimeDiff:%d extendedTTT:%d(original:%d)
Line 1012: DELAY_A3 EXPIRED (MeasId:%d CellId:%d) TimeDiff:%d extendedTTT:%d
Line 1024: DELAY_A3 STOP (MeasId:%d CellId:%d) TimeDiff:%d not expired but DELAY_A3 leaving
Line 1036: RrmSubBlkTimeToTrigger::GetMinimumDurationToExpiry
Line 1069:    >>minimumDuration:%d - remainDuration:%d (MeasId:%d CellId:%d) timeDiff:%d TTT:%d 
