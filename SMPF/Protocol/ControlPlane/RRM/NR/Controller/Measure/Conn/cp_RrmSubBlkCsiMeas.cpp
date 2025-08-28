Line 72: RrmSubBlkCsiMeas::Init() - MsgGrpId(%d)
Line 79:    >>UpdateCsiConfig - MeasObjectId:%d
Line 90:    >>Failed to GetCsiRsFreqInfo for MeasObjectId:%d
Line 95:      ::BandId:%d RefFreqCsiRs:%d SubCarrierSpacingCsiRs:(enum)%d RefServCellIndex:%d
Line 141:    >>pServCell is nullptr
Line 181: RrmSubBlkCsiMeas::UpdateMeasSlotInfoForCsiRs - ObjectId:%d
Line 185:    >>ObjectId:%d 
Line 205:    >>Failed to GetMeasScheduleInfoForCsiRs
Line 210:    >>No CsiRsFreqInfo present
Line 215:    >>pFreqInfoNr is nullptr
Line 223:    >>Loop Break Warning rMsg.Msg.Nr.ObjectId:%d is not matched with ObjectId:%d
Line 240:    >>UpdateMeasResultForCsiRs - MeasType:%s(%d) MeasObjectId:%d NumResult:%d
Line 259:    >>pFreqInfo is not found or result is failed
Line 268:      ::numCellResult:%d - Msg.NR.NumResult:%d MAX_NUM_MEAS_CELL:%d
Line 284:      ::CsiMeasResult[%d] - Find CellId:%d from DB
Line 299:    >>FOUND - PCELL
Line 331:    >>NOT FOUND - PCELL
Line 357:      ::FOUND - SCELL (CellId:%d MeasObjectId:%d)
Line 376:    >>Failed to GetServCellGroupInfoNr
Line 386:    >>NOT FOUND - SCELL
Line 406:      ::NOT FOUND - NEIGHBOUR CSI-RS SetType:%s(%d) ObjectId:%d
Line 411:      ::FOUND - NEIGHBOUR CSI-RS SetType:%s(%d) ObjectId:%d
Line 416:      ::MOVE CELL - CSI-RS set_type_index:%s(%d) target:%s(enum)%d
Line 420:        #MOVED
Line 425:        #FAILED
Line 437:      ::CSI-RS ncell(ObjectId:%d PCID:%d SetType:%s(%d)) - sizeOfMeasResultList:%d
Line 454:    >>CheckMeasRequiredForCsiRs - ScheduleOngoing:(bool)%d MeasCycle:%d LastMeasTimeInMs:%d CurTimeInMs:%d
Line 474:      ::bMeasRequired:(bool)%d - ScheduleOngoing:(bool)%d timeDiff:%d[ms]
Line 482:    >>UpdateCsiMeasInput - CellId:%d MeasObjectId:%d
Line 497:    >>Failed to GetCsiRsCellInfo for CellId:%d
Line 550:      ::CellInfo.CsiRsResource[%d] - CsiRsIndex:%d AssociatedSsbIndex:%d - AssociatedSsb found, update CsiMeasInput.CsiRsResource[%d]
Line 562:      ::CellInfo.CsiRsResource[%d] - CsiRsIndex:%d AssociatedSsbIndex:%d - AssociatedSsb not found
Line 577:      ::bValid:(bool)%d - CsiMeasInput.CsiRsResourceListMobilityCnt:%d
Line 588: 	>>UpdateCsiMeasReq - ObjectId:%d
Line 603:    >>pFreq is nullptr - measObjectId:%d
Line 611:      ::CsiConfig - BandId:%d RefFreqCsiRs:%d SubcarrierSpacing:%d
Line 613:      ::CsiConfig - AssociatedSsbFrequency:%d AssociatedSsbSubcarrierSpacing:%d AssociatedSsbPeriodicity:%d
Line 615:      ::CsiConfig - RefServCellSsbFrequency:%d RefServCellSsbSubcarrierSpacing:%d RefServCellSsbPeriodicity:%d
Line 619:    >>Failed to UpdateCsiConfig
Line 650:        #CsiMeasInput[%d] - CellId:%d CsiRsResourceListMobilityCnt:%d
Line 656:    >>Failed to AllocMsgBodyElem
Line 661:    >>Failed to UpdateCsiMeasInput
Line 679:      ::bValid:(bool)%d NumCsiMeasInput:%d
