Line 83: RrmBlkConnUpdateHandler::UpdateMeasResult - MsgGrpId(%d)
Line 100:    >>RrmBlkConnUpdateHandler::UpdateMeasResult - MeasType:%s(%d) MeasObjectId:%d NumResult:%d
Line 122:    >>pFreqInfo is not found
Line 128:      ::Skip UpdateAgcGain in MEAS. AgcGain[0] : %d, AgcGain[1] : %d. 
Line 138:      ::numCellResult:%d - Msg.NR.NumResult:%d MAX_NUM_MEAS_CELL:%d
Line 146:        #SsbMeasResult[%d] - CellId:%d, lowEngCell:%d, isNotOverlappedSmtc:%d
Line 159:        #FOUND - PCELL
Line 175:        #NumSsbIndex:%d SsbBitmap:0x%08x %08x
Line 194:        #NOT FOUND - PCELL
Line 200:        #Update SCell Meas Result
Line 221:        #Update SCell MeasResults for [SsbAbsFreq %d SCS %d CellId(%d)] of SsbMeasResult(%d) is found in SCell with MeasObj(%d)
Line 231:        #NumSsbIndex:%d SsbBitmapFromServ:0x%08x %08x
Line 247:      ::StoreSsbMeasResult - SCell (UpdateTO(%d))
Line 254:        #Initial SCell Meas Result Updated!!!!
Line 264:        #pServCellGroupInfoNr is invalid!!!!
Line 275:        #CellId(%d) of SsbMeasResult(%d) is not found in Aset, SCellset. Find cell set also
Line 292:        #NOT FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 297:        #FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 319: RrmBlkConnUpdateHandler::UpdateMeasSlotInfo
Line 338:    >>ObjectId:%d 
Line 339:      ::MeasScheduleInfo.LastMeasType (enum)%d CNF Meastype (enum)%d
Line 367:    >>Abnormal ObjectId %d removed
Line 391: 	  ::rMsg.Msg.Nr.ObjectId:%d ObjectId:%d
Line 401:    >>Loop Break Warning rMsg.Msg.Nr.ObjectId:%d is not matched with ObjectId:%d
Line 416:    >>UpdateMeasResultNeighbour - Arfcn:%d CellId:%d SetType:%s(%d) ObjectId:%d
Line 436:      ::BLIND DETECTION RESULT - SsbIndex:%d
Line 447:      ::[DeriveSsbIndexFromCell] MEAS RESULT(ARFCN:%d PCID:%d) Failed verify SsbIndex
Line 454:      ::[DeriveSsbIndexFromCell] MEAS RESULT(ARFCN:%d PCID:%d) - ssbIndexDerived:%d
Line 463:      ::Invalid SsbIndex:%d maxNrOfRsIndex:%d
Line 480:      ::PBCH Needed or ongoing, Add info to PBCH LIST
Line 492:      ::MEASUREMENT RESULT - numSsbIndex:%d
Line 513:      ::MOVE CELL - current_set_type:%s(%d) target_set_type:%s(enum)%d
Line 525:      ::FAILED
Line 530:      ::current_set_type:%s(%d)
Line 536:      ::INVALID CASE
Line 546:      ::StoreSsbMeasResult - NEIGHBOUR
Line 557:      ::SSB ncell(ARFCN:%d PCID:%d SetType:%s(%d)) - sizeOfMeasResultList:%d
Line 571: RrmBlkConnUpdateHandler::UpdateNrObjectCheckCnf - Arfcn(%d) NrMeasType(%d) AgcGain(%d | %d)
Line 578: SendMsg is NULL
Line 608: RrmBlkConnUpdateHandler::UpdateNrObjectCheckCnf - [%d] CellId(%d) SsbTimeingOffset(%d) SsbCnt(%d) RSRP(%d) RSRQ(%d) SINR(%d)
Line 623: RrmBlkConnUpdateHandler::UpdateNrObjectCheckCnf - beamIndex(%d) RSRP(%d) RSRQ(%d) SINR(%d)
Line 632: RrmBlkConnUpdateHandler::UpdateSrchResult
Line 645: pFreqInfo is not found
Line 653: Skip UpdateAgcGain in SRCH. AgcGain[0] : %d, AgcGain[1] : %d. 
Line 693:      ::SsbSrchResult[%d] - Find CellId:%d from DB
Line 705:      ::NOT FOUND - PCELL
Line 723:      ::[DeriveSsbIndexFromCell] SRCH RESULT(ARFCN:%d PCID:%d) Failed derive SsbIndex
Line 730:      ::[DeriveSsbIndexFromCell] SRCH RESULT(ARFCN:%d PCID:%d) - ssbIndexDerived:%d
Line 746: RrmBlkConnMeasNr::UpdateSrchResult
Line 761: pFreqInfo or pServCellGroupInfoNr is not found
Line 810: 	  ::Initial SCell Search failed, set BeamTimingOffset as PCell based TimingOffset
Line 818: 	  ::SCell SsbRsIndex(%d) SsbTimingOffset(%d)
Line 825: 	  ::SCell SsbRsIndex(%d) SsbTimingOffset(%d)
Line 833:    >>SsbSrchResult[%d] - Find CellId:%d from DB
Line 836:      ::Update SCell SRCH Result
Line 844:      ::NOT FOUND - SCELL
Line 862:      ::[DeriveSsbIndexFromSCell] SRCH RESULT(ARFCN:%d PCID:%d) Failed derive SsbIndex
Line 869:      ::[DeriveSsbIndexFromCell] SRCH RESULT(ARFCN:%d PCID:%d) - ssbIndexDerived:%d
Line 887:      ::InitSrchMeasFlag.Srch = TRUE
Line 894:      ::DeriveSsbIndexUsingSrchResult - SrchResultSsbTimingOffset:%d
Line 912:      ::Invalid Ptr Received pServCellGroupInfoNr(0x%x)
Line 922:      ::Invalid Ptr Received pSCellInfo(0x%x)
Line 936:        #tolerence:%d - twoSsbSymbolLength:%d(SCS:(enum)%d) onePdschSymbolLength:%d(SCS:(enum)%d)
Line 938:        #(enum)FreqPeriodic %d, (enum)CellPeriodic %d, (enum)SelectedPeriodicity %d
Line 980:      ::NOT FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 985:      ::FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 993:        #UPDATE TIMING OFFSET DELTA with BEST
Line 999:        #SMTC2 Case - Change TargetSmtcPeriod from (enum):%d to (enum)%d 
Line 1009:        #JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
Line 1016:        #Update corr power with best
Line 1023:        #JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
Line 1037:      ::GetTODiffCause
Line 1044:      ::Error : pTargetCellInfoPtr or pPCellInfo is NULL
Line 1048:        #PCell-BandId : %d, TargetCell-BandId : %d 
Line 1053:        #PCell-SCS : %d, TargetCell-SCS : %d 
Line 1090:        #retTODiffCause : %d
Line 1098: RrmBlkConnUpdateHandler::UpdateSrchResultForScell
Line 1115:      ::Invalid Ptr Received pSCellFreqInfo(0x%x) pServCellGroupInfoNr(0x%x)
Line 1159:        #JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
Line 1164: 	    #Update MeasObjId %d SCell CellId %d - SsbTimingOffset %d CellCorrEngery %d SetType %d
Line 1171:        #No SCell available on this freq(SsbAbsFreq %d, Scs %d)
Line 1177:        #No SCell available on this freq(SsbAbsFreq %d, Scs %d)
Line 1200:    >>NEW CELL - NEIGHBOUR
Line 1206: Fail to allocate pCellInfo
Line 1225:      ::JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
Line 1232:      ::ADD CELL BandId:%d SsbAbsFreq:%d SCS:%d CellId:%d - target_set_type:%s ObjectId:%d
Line 1236:        #ADDED
Line 1240:        #FAILED
Line 1249:    >>FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 1258:      ::JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
Line 1264:      ::MOVE CELL - target_set_type:%s(%d) ObjectId:%d
Line 1271: 	  ::FAILED
Line 1305:    >>NEW CELL - NEIGHBOUR
Line 1311: Fail to allocate pCellInfo
Line 1329:    >>SMTC2 Case - Change period to (enum)%d and samplemax:%d OriTO:%d NewTO:%d 
Line 1343:      ::JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
Line 1350:      ::ADD CELL BandId:%d SsbAbsFreq:%d SCS:%d CellId:%d - target_set_type:%s ObjectId:%d
Line 1358: 	  ::FAILED
Line 1367:    >>FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 1376:      ::SMTC2 Case - Change period to (enum)%d and samplemax:%d OriTO:%d NewTO:%d 
Line 1389:      ::JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
Line 1395:      ::MOVE CELL - target_set_type:%s(%d) ObjectId:%d
Line 1402:      ::FAILED
Line 1433:        #FOUND - PCELL
Line 1440:        #JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
Line 1452:    >>DeriveSsbIndexUsingSrchResult - SrchResultSsbTimingOffset:%d
Line 1489:    >>pTargetCell is NULL or pServingCell is NULL
Line 1501:      ::tolerence:%d - twoSsbSymbolLength:%d(SCS:(enum)%d) onePdschSymbolLength:%d(SCS:(enum)%d)
Line 1503:      ::(enum)FreqPeriodic %d, (enum)CellPeriodic %d, (enum)SelectedPeriodicity %d
Line 1521:    >>DeriveSsbIndexUsingBdResult - ARFCN:%d PCID:%d BdResultSsbIndex:%d
Line 1527:      ::VERIFY ssbIndexDerived:%d(3bit:%d) with BdResultSsbIndex:%d(3bit:%d)
Line 1533:      ::VERIFIED - set ssbIndexDerived:%d
Line 1538:      ::NOT MATCHED - set RRM_UNKNOWN_RSINDEX:%d
Line 1544:      ::UNKNOWN - set BdResultSsbIndex:%d
Line 1560: RrmBlkConnUpdateHandler::PrintSrchResult
Line 1566: pFreqInfo is not found
Line 1572:    >>MeasType:%s(%d) SsbFreq:%d ObjectId:%d NumResult:%d
Line 1576:      ::[SCell-Srch] (SSBIDX, TimingOffsetFromPCell)
Line 1579:        #(0, %d) (1, %d) (2, %d) (3, %d) (4, %d) (5, %d) (6, %d) (7, %d)
Line 1582:        #(8, %d) (9, %d) (10, %d) (11, %d) (12, %d) (13, %d) (14, %d) (15, %d)
Line 1585:        #(16, %d) (17, %d) (18, %d) (19, %d) (20, %d) (21, %d) (22, %d) (23, %d)
Line 1588:        #(24, %d) (25, %d) (26, %d) (27, %d) (28, %d) (29, %d) (30, %d) (31, %d)
Line 1591:        #(32, %d) (33, %d) (34, %d) (35, %d) (36, %d) (37, %d) (38, %d) (39, %d)
Line 1594:        #(40, %d) (41, %d) (42, %d) (43, %d) (44, %d) (45, %d) (46, %d) (47, %d)
Line 1597:        #(48, %d) (49, %d) (50, %d) (51, %d) (52, %d) (53, %d) (54, %d) (55, %d)
Line 1600:        #(56, %d) (57, %d) (58, %d) (59, %d) (60, %d) (61, %d) (62, %d) (63, %d)
Line 1606:    >>FindSameCellCnt - StartIdx:%d
