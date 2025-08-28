Line 57: RrmSubBlkIratMeas::Init() - MsgGrpId(%d)
Line 66: RrmSubBlkIratMeas::GetUtraFreq
Line 74: pEutraFreqInfo is not found
Line 96:    >>CheckMeasCycle curTimeInMs (%d) Cur MeasCycle [%d] LastMeasTime [%d] ReScheduleMeas [%d]
Line 100:    >>CheckMeasCycleUtra ReSchedule is TRUE
Line 116:    >>CheckMeasCycle TimeDiff %d Result %d  
Line 129:    >>CheckSrchCycleUtra curTimeInMs (%d) Cur SrchCycle [%d] LastSrchTime [%d] ReScheduleSrch [%d]
Line 133:    >>CheckSrchCycleUtra ReSchedule is TRUE
Line 148:    >>CheckSrchCycleUtra TimeDiff %d Result %d  
Line 155:    >>ConfigureSrchReqUtra
Line 168:      ::Skip UTRA SRCH
Line 174:      ::[N2U][CONN] Find Initial UTRA FREQ %d, PrevObj %d, MeasObj %d
Line 186:      ::InitSrchMeasFlag for arfcn %d is FALSE
Line 193:      ::Expired SrchCycle
Line 199:      ::Other InitSrch except for %d is not yet finished
Line 204:      ::>>IRAT Frequency %d is already ONGOING. Try next Freq.
Line 211:      ::Changed Utra Frequency %d
Line 216:      ::Skip UTRA SRCH. There is no candidate UTRA FREQ
Line 222:      >> Configure IRAT UTRA Search
Line 252:    >>ConfigureMeasReqUtra
Line 264: Skip UTRA MEAS
Line 270:      ::[N2U][CONN] Find Initial UTRA FREQ %d, PrevObj %d, MeasObj %d
Line 284:      ::InitSrchMeasFlag for arfcn %d is FALSE
Line 291:      ::Expired MeasCycle
Line 297:      ::Other InitMeas except for %d is not yet finished
Line 302:      ::No cell in ID_LISTED_CELLSET on Utra Frequency %d
Line 307:      ::IRAT Frequency %d is already ONGOING. Try next Freq.
Line 314:      ::Changed Utra Frequency %d
Line 319:      ::Skip UTRA MEAS. There is no candidate UTRA FREQ
Line 325:      ::Configure IRAT UTRA Meas
Line 359:    >>UpdateUtraSrchResult NumResult %d
Line 365:      ::pUtraFreqInfo is not found
Line 381:      ::UpdateUtraSrchResult:: Update timing offset %d of CellId %d in ID LISTED
Line 386: UpdateUtraSrchResult:: CellId %d result is not valid
Line 398:      ::UpdateUtraSrchResult:: Update timing offset %d of CellId %d in UNID LISTED
Line 405:      ::Succeeded to move CellId(%d) from UNID LISTED to ID LISTED of measobject(%d)
Line 410:      ::Failed to move CellId(%d) from UNID LISTED to ID LISTED of measobject(%d)
Line 415:      ::CellId %d result is not valid
Line 420:      ::CellId %d is not in the Cell List
Line 430:    >>UpdateUtraMeasResult
Line 440:      ::pUtraFreqInfo is not found
Line 446:      ::MeasType(%d), Freq(%d), MeasObjectId(%d), NumUtraMeasResult(%d)
Line 458:      ::FOUND -CellId:%d ObjectId:%d is in ID LISTED
Line 466:      ::MOVE UTRA CELL(%d) to UNID LISTED SET due to invalid Result
Line 470:      ::FAIL to MOVE UTRA CELL(%d) to UNID LISTED SET due to invalid Result
Line 477:      ::UpdateUtraMeasResult:: CellId %d, Rscp %d, EcNo %d, Rssi %d, TimingOffset %d
Line 484:      ::CellId %d is not in the Cell List
Line 495:      ::[SLOTINFO][UTRA]There is no UTRA FREQ INFO. Skip Slot info
Line 510:      ::[SLOTINFO][UTRA] ObjectId %d removed
Line 515:      ::[SLOTINFO][UTRA] Not proper meas type between MeasScheduleInfo.LastMeasType (enum)%d CNF Meastype (enum)%d
Line 526:    >>UpdateInitialSrchMeasUtra
Line 535:      ::[INITSM_C] UpdateInitialSrchMeas UTRA %d Srch %d, Meas %d, AvailEval %d
Line 540:    >>CheckConditionOfInitSrchUtra
Line 550:      ::[INITSM_C] Free InitSrchMeasFlag for UTRA FREQ %d
Line 571:      ::AddNeighbourCellUtra Received FreqInfo is NULL
Line 585:      ::%d invalid MeasType
Line 607:      ::SetTypeIdx(%d) cellId(%d) CellIndex(%d) NumUtraMeasInput(%d) 
Line 613:      ::NumSsbMeasInput is excced MAX num of Cell (%d)
Line 622:      ::SetTypeIdx %d NumUtraMeasInput %d
Line 641:      ::Unexpected NextFreqInfo. Need to Check
Line 655:      ::Unexpected NextFreqInfo. Need to Check
Line 667:      ::GetInitialUtraFreq TargetObj %d
Line 688:      ::Fail to Find Matched FreqInfo with Previous UtraObjMeas Try to Set First FreqInfo
Line 695:      ::There is no Last Srch/Meas Info
Line 701:      ::Fail to Find Matched FreqInfo with Previous UtraObjMeas
Line 708:      ::Fisrt Srch/Meas
Line 718:    >>GetFirstUtraFreq %d
Line 723:    >>UTRA FREQ Info List is Empty
