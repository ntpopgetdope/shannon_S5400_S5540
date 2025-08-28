Line 78:    >>UpdateMeasSlotInfo()
Line 93:    >>ObjectId:%d 
Line 131:      ::Abnormal ObjectId %d removed
Line 138:      ::[SLOTINFO] Need to Check. There is no matched FreqInfo with result
Line 151:    >>Loop Break Warning rMsg.Msg.Nr.ObjectId:%d is not matched with ObjectId:%d
Line 163:    >>ConfigureMeasReq
Line 175:    >>Fatal Error: pMeasReq or pConfigureMeasReq is NULL
Line 229:      ::INVALID SelectedMeasFreq %d
Line 237:      ::IDLE_IRAT REQUEST INFO MeasType:%s(%d), SsbFreq(%d), MeasObjectId(%d), NumLteMeasInput(%d)
Line 243:      ::IDLE_INTRA REQUEST INFO RatType : %d, MeasType:%s(%d), SsbFreq(%d), MeasObjectId(%d), NumSsbMeasInput(%d)
Line 249:      ::IDLE_INTER REQUEST INFO RatType : %d, MeasType:%s(%d), SsbFreq(%d), MeasObjectId(%d), NumSsbMeasInput(%d)
Line 262:    >>StoreMeasResult MeasType: %s(%d) rMsg.Result:(enum)%d
Line 333:    >>Skip UpdateMeasResult - rMsg.Result:(enum)%d
Line 353:      ::[IDLEEVAL] ServingCell measurement is ongoing. Skip Evaluation.
Line 365:      ::[IDLEEVAL] INTRA FREQUENCY measurement is ongoing. Skip Evaluation.
Line 377:      ::[IDLEEVAL] INTER FREQUENCY %d measurement is ongoing. Skip Evaluation.
Line 390:      ::[IDLEEVAL] IRAT FREQUENCY %d measurement is ongoing. Skip Evaluation.
Line 398:      ::[IDLEEVAL] RESEL is Triggered. Do not enter the SLEEP state
Line 404:      ::[IDLEEVAL] PBCH Ongoing. Do not enter the SLEEP state
Line 413:    >>UpdateTimingOffsetAfterdrx - TimingOffset:%d
Line 430:      ::pFreqInfo is not found
Line 441:      ::ServingCell TO updating
Line 449:      ::ServingCell is NULL
Line 474:      ::FOUND - SetType:%s(%d) ObjectId:%d
Line 494:      ::Unexcepted behavior detection.
Line 506:      ::Unexcepted behavior detection.
Line 511:      ::End of UpdateTimingOffsetAfterCdrx
Line 533:      ::[IDLEEVAL] INTER FREQUENCY %d Priority %d AvailEval FALSE.
Line 549:      ::[IDLEEVAL] EUTRA FREQUENCY %d Priority %d AvailEval FALSE.
Line 573:      ::[IDLEEVAL] Condition of INTRA FREQ %d
Line 589:      ::[IDLEEVAL] Condition of NR INTER FREQ HighP %d, EqualP %d, LowerP %d
Line 603:      ::[IDLEEVAL] Condition of EUTRA FREQ HighP %d, EqualP %d, LowerP %d
Line 644:    >>NRRRM.NR_IDLE_SLEEP_ENABLE %d Skip Sleep operation
Line 776:      ::Idle-LocalMeasScheduleList#1: %d -> %d -> %d -> %d -> %d -> %d -> %d
Line 781:      ::Idle-LocalMeasScheduleList#2: %d -> %d -> %d -> %d -> %d -> %d -> %d
Line 821:    >>ScheduleAgainForIntra()
Line 831:    >>STOP SCHEDULING AGAIN(INTRA) DUE TO SintraSearchP/Q
Line 840:      ::SET curTimeInMs %d, OnlyIntraMeas %d
Line 850:      ::STOP SCHEDULING NEXT MEAS(INTRA) DUE TO INVALID DRXCYCLE
Line 856:      ::STOP SCHEDULING AGAIN(INTRA) DUE TO pServingCellInfo is NULL
Line 861:      ::SET curTimeInMs %d, DrxCycle %d, NextMeasInMs %d
Line 877:      ::IDLE_INTRA TRY SCHEDULING AGAIN(INTRA - NEW DETECTED) RatType : %d, MeasType:%s(%d), SsbFreq(%d), MeasObjectId(%d), NumSsbMeasInput(%d), PreScheduled %d
Line 884:      ::IDLE_INTRA TRY SCHEDULING AGAIN(INTRA - NEXT MEAS) RatType : %d, MeasType:%s(%d), SsbFreq(%d), MeasObjectId(%d), NumSsbMeasInput(%d), PreScheduled %d
Line 896:    >>GetObjIDIntraFreqHasNewCell() CheckMeasSchedule.MeasureOngoing %d
Line 915:    >>CheckNextCycleMeasure::MeasReserved NO_RESERVED. pServ NULL
Line 917:    >>CheckNextCycleMeasure::MeasReserved NO_RESERVED. INVALID DRXCYCLE
Line 937: 	  ::MakeIdleFr2PbchDecodeReq
Line 961: 	  ::No cell for PBCH DECODE REQ
