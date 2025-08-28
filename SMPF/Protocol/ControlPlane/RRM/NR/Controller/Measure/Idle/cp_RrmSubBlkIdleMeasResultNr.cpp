Line 95:    >>pFreqInfo is not found
Line 103:      ::Skip UpdateAgcGain in MEAS. AgcGain[0] : %d, AgcGain[1] : %d. 
Line 113:      ::numCellResult:%d - Msg.NR.NumResult:%d MAX_NUM_MEAS_CELL:%d
Line 123:      ::SsbMeasResult[%d] - CellId:%d, lowEngCell:%d, isNotOverlappedSmtc:%d
Line 137:        #FOUND - SERVING
Line 147:        #StoreSsbMeasResult - SERVING
Line 150:        #NumSsbIndex:%d SsbBitmap:0x%08x %08x
Line 171:      ::NOT FOUND - SERVING
Line 189:      ::NOT FOUND - pCellInfo is NULL. NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 194:      ::FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 217:    >>UpdateMeasResultNeighbour - Arfcn:%d CellId:%d SetType:%s(%d) ObjectId:%d
Line 237:      ::BLIND DETECTION RESULT - SsbIndex:%d
Line 248:        #[DeriveSsbIndexFromCell] MEAS RESULT(ARFCN:%d PCID:%d) Failed verify SsbIndex
Line 255:        #[DeriveSsbIndexFromCell] MEAS RESULT(ARFCN:%d PCID:%d) - ssbIndexDerived:%d
Line 264:      ::Invalid SsbIndex:%d maxNrOfRsIndex:%d
Line 281: 	>> PBCH Needed or ongoing, Add info to PBCH LIST
Line 290:      ::MEASUREMENT RESULT - numSsbIndex:%d
Line 311:      ::MOVE CELL - current_set_type:%s(%d) target_set_type:%s(enum)%d
Line 315:        #MOVED
Line 323:        #FAILED
Line 328:      ::current_set_type:%s(%d)
Line 334:      ::INVALID CASE
Line 345:      ::StoreSsbMeasResult - NEIGHBOUR
Line 347:      ::NumSsbIndex:%d SsbBitmap:0x%08x %08x
Line 358:        #SSB ncell(ARFCN:%d PCID:%d SetType:%s(%d)) - sizeOfMeasResultList:%d
Line 394:    >>pFreqInfo is not found
Line 405:      ::Skip UpdateAgcGain in SRCH. AgcGain[0] : %d, AgcGain[1] : %d. 
Line 423:      ::SsbSrchResult[%d] - Find CellId:%d from DB
Line 436:        #FOUND - SERVING
Line 447:        #JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
Line 461:        #NOT FOUND - SERVING
Line 467:        #FOUND - INVALID NEIGHBOUR(BLACKCELL) ObjectId:%d
Line 471:        #JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
Line 487:        #NOT FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 492:        #FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 500:        #UPDATE TIMING OFFSET DELTA with BEST
Line 510:        #JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
Line 517:        #Update corr power with best
Line 523:        #JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
Line 542:        #[DeriveSsbIndexFromCell] SRCH RESULT(ARFCN:%d PCID:%d) Failed derive SsbIndex
Line 549:        #[DeriveSsbIndexFromCell] SRCH RESULT(ARFCN:%d PCID:%d) - ssbIndexDerived:%d
Line 559:      ::NEW CELL - NEIGHBOUR
Line 567:      ::Fail to allocate pCellInfo
Line 585:        #JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
Line 592:        #ADD CELL BandId:%d SsbAbsFreq:%d SCS:%d CellId:%d - target_set_type:%s ObjectId:%d
Line 600:        #FAILED
Line 608:      ::FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 620:        #JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
Line 625:        #MOVE CELL - target_set_type:%s(%d) ObjectId:%d
Line 632:      ::FAILED
Line 642:    >>DeriveSsbIndexUsingBdResult - ARFCN:%d PCID:%d BdResultSsbIndex:%d
Line 648:      ::VERIFY ssbIndexDerived:%d(3bit:%d) with BdResultSsbIndex:%d(3bit:%d)
Line 654:      #VERIFIED - set ssbIndexDerived:%d
Line 659:      #NOT MATCHED - set RRM_UNKNOWN_RSINDEX:%d
Line 665:        #UNKNOWN - set BdResultSsbIndex:%d
Line 682:    >>DeriveSsbIndexUsingSrchResult - SrchResultSsbTimingOffset:%d
Line 718:    >>pTargetCell is NULL or pServingCell is NULL
Line 733:      ::tolerence:%d - twoSsbSymbolLength:%d(SCS:(enum)%d) onePdschSymbolLength:%d(SCS:(enum)%d)
Line 735:      ::FreqPeriodic %d, CellPeriodic %d, (enum)SelectedPeriodicity %d
Line 797:    >>pIntraFreqInfo::0x%08x or pServCellInfo::0x%08x is NULL
Line 836:    >>SetDoSrchLowSinrFlag TRUE
Line 850:    >>CheckConditionOfInitSrch FREQ %d, SRCH %d, MEAS %d, AVAIL %d
Line 855:    >>FREE INIT_SRCH_MEAS. FREQ %d
Line 871:    >>IDLE_INTRA Result MeasType:%s(%d) SsbFreq:%d ObjectId:%d NumResult:%d
Line 876:    >>IDLE_INTER Result MeasType:%s(%d) SsbFreq:%d ObjectId:%d NumResult:%d
Line 881:    >>IDLE_IRAT Result MeasType:%s(%d) SsbFreq:%d ObjectId:%d NumResult:%d
Line 886:    >>IDLE SRCH/MEAS Result MeasType:%s(%d) SsbFreq:%d ObjectId:%d NumResult:%d
