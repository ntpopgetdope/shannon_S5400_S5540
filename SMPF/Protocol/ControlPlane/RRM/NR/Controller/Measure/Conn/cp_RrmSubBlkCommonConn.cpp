Line 78:      ::No update for SRCH(Meas reschedule case)
Line 91:      ::No update for Meas(Srch reschedule case)
Line 96:      ::ReviseDiffTimeForReSchedule Prev TimeDiff:%d(ms) New TimeDiff:%d(ms) MeasScheduleInfo.LastMeasType:%d(enum) IsSrch:%d SrchCycle:%d[ms] MeasCycle:%d[ms]
Line 103:      ::GetFreqInfoForConn MeasType(%d), MeasObjectId(%d)
Line 192:      ::RrmBlkConnMeasNr::GetFreqInfo - pServCellGroupInfoNr is invalid
Line 198:      ::RrmBlkConnMeasNr::GetFreqInfo - Unexpected MeasType(%d)
Line 203:      ::RrmBlkConnMeasNr::GetFreqInfo - MeasObjectId(%d) is not found
Line 230:      ::Abnormal PeriodicityAndOffsetChoice
Line 235:      ::SmtcPeriod:%d[ms] IsSearch:(bool)%d Selected margin:%d[ms]
Line 298:      ::Valid MeasCycleScell found(%d)ms
Line 302:      ::MeasCycleScell not found! Set to default value (%d)ms
Line 306:      ::M_pss_sss_sync_wo_gaps set to %d for Power Class(%d) of SCell Freq(%d)
Line 318:      ::SCell Srch Requirement:%d[ms] exclude Margin:%d[ms] - FR2, MeasCycleScell(%d ms) 
Line 326:      ::Under320 Srch Requirement:%d[ms] exclude Margin:%d[ms] - FR2 Exceptional case
Line 332:      ::Over 320 Srch Requirement:%d[ms] exclude Margin:%d[ms] - FR2 Exceptional case
Line 408:      ::Valid MeasCycleScell found(%d)
Line 412:      ::MeasCycleScell not found! Set to default value (%d)
Line 428:      ::SCell Srch Requirement:%d[ms] exclude Margin:%d[ms] - FR1, MeasCycleScell(%d ms) 
Line 452:      ::GetSrchRequirement - freqType:(enum)%d CdrxCycle:%d[ms] ModemStatus:%d 
Line 479:        #No SMTC information, set periodicity as SF5
Line 498: 		#It is Activated ScellFreq (Freq:%d Scell:%d - SrchRequirement)
Line 517:        #Exceptional CdrxCycle:%d[ms] set CdrxRequirement as CdrxCycle
Line 559:        #Srch requirement FR2:%d FreqType:(enum)%d Requirement:%d[ms] exclude Margin:%d[ms] ModemStatus:%d CssfSrch:%d RelaxedCdrxInfo.LowMobilityOn:%d
Line 625:      ::Valid MeasCycleScell found(%d)ms
Line 629:      ::MeasCycleScell not found! Set to default value (%d)ms
Line 633:      ::M_meas_period_wo_gaps set to %d for Power Class(%d) of SCell Freq(%d)
Line 645:      ::SCell Meas Requirement:%d[ms] exclude Margin:%d[ms] - FR2, MeasCycleScell(%d ms) 
Line 763:      ::Valid MeasCycleScell found(%d)
Line 767:      ::MeasCycleScell not found! Set to default value (%d)
Line 783:      ::SCell Meas Requirement:%d[ms] exclude Margin:%d[ms] - FR1, MeasCycleScell(%d ms) 
Line 791:      ::Under320 Meas Requirement:%d[ms] exclude Margin:%d[ms] - FR1 Exceptional case
Line 797:      ::Over 320 Meas Requirement:%d[ms] exclude Margin:%d[ms] - FR1 Exceptional case
Line 808:      ::GetMeasRequirement - freqType:(enum)%d CdrxCycle:%d[ms] ModemStatus:%d
Line 838:      ::>No SMTC information, set periodicity as SF5
Line 857: 		#It is Activated ScellFreq (Freq:%d Scell:%d - MeasRequirement)
Line 876:      ::Exceptional CdrxCycle:%d[ms] set CdrxRequirement as CdrxCycle
Line 914:      ::Meas requirement FR2:%d FreqType:(enum)%d Requirement:%d[ms] exclude Margin:%d[ms] ModemStatus:%d CssfMeas:%d RelaxedCdrxInfo.LowMobilityOn:%d
Line 923:      ::CheckMoIntegrity SlotObjectId(%d)
Line 948:      ::UpdateLastSrchTime
Line 969:        #Reschedule:%d or PreSchedule:%d for ObjectId:%d ( No update - LastSrchTime )
Line 979:      ::UpdateLastMeasTime
Line 1000:        #Reschedule:%d or PreSchedule:%d for ObjectId:%d ( No update - LastMeasTime )
Line 1019:      ::UpdateSsbConfigNrForConn
Line 1031:        #ServingPeriod:%d[ms] SmtcPeriod:%d[ms]
Line 1034:        #Change Periodicity from %d[ms] to %d[ms]
Line 1042:        #InRequestSsbToMeasure:[1]0x%08x[0]0x%08x SsbPositionInburst:[1]0x%08x[0]0x%08x
Line 1045:        #BandId:%d SsbFrequency:%d SubcarrierSpacing:(enum)%d Periodicity:%d[ms]
Line 1046:        #NumSsbToMeasure:%d SsbToMeasure:[1]0x%08x[0]0x%08x
Line 1047:        #SmtcIncluded:(bool)%d Smtc.Offset:%d[ms] Smtc.Duration:%d[ms] SsRssiMeasurementIncluded:(bool)%d
Line 1074:        #SsbMeasInputList - CellId:%d SsbRsIdx:%d RxBeamIdx:%d
Line 1080:          #SsbMeasInput is FULL(MAX_NUM_MEAS_CELL:%d)
Line 1088:        #AddAsetToMo amount (%d)
Line 1151:        #SsbMeasInputList - CellId:%d SetType:%s(%d) SsbRsrp:%d
Line 1156:        #This CellId:%d ObjectId:%d holding, because PBCH decode is not completed in this FR2
Line 1162:        #SsbMeasInputList - CellId:%d SetType:%s(%d) SsbRsrp:%d
Line 1179:        #SsbMeasInput[%d] - CellId:%d SetType:%s(%d) SsbRsrp:%d lowengcell:%d
Line 1189:        #AddNCellToMo amount (%d)
Line 1193:        #AddNCellToMo(SMTC2) amount (%d)
Line 1202:      ::CheckCdrxTimeDiff SrchRequirement:%d[ms] MeasRequirement:%d[ms] SrchTimeDiff:%d[ms] MeasTimeDiff:%d[ms] checkSrch:(bool)%d checkMeas:(bool)%d
Line 1210:        #Srch Requirement Okay
Line 1214:        #Srch Requirement not Okay
Line 1224:        #Meas Requirement Okay
Line 1228:        #Meas Requirement not Okay
Line 1242:    >>CheckMeasReservedFlag SrchRequirement:%d[ms] MeasRequirement:%d[ms] SrchTimeDiff:%d[ms] MeasTimeDiff:%d[ms] checkSrch:(bool)%d checkMeas:(bool)%d
Line 1250:      ::MeasReserved TRUE by SRCH
Line 1259:      ::MeasReserved TRUE by MEAS
Line 1272: 	  ::MeasReserved :%d(enum - NONE/SRCH/MEAS/BOTH 
Line 1296:      ::CheckMeasCycle
Line 1314:        #CheckMeasCycle curTimeInMs:%d[ms] MeasCycle:%d[ms] LastMeasTime:%d[ms] IsSmtc2:(bool)%d
Line 1333:        #CheckMeasCycle TimeDiff:%d[ms] Result:(bool)%d  
Line 1346:      ::CheckSrchCycle curTimeInMs:%d[ms] SrchCycle:%d[ms] LastSrchTime:%d[ms] 
Line 1364:        #CheckSrchCycle TimeDiff:%d[ms] Result:(bool)%d  
Line 1373:      ::CheckNewCellToSchedule
Line 1383:        #BD/First measure TargetCell:%d is in CandiListed cell set Freq:%d ObjectId:%d
Line 1391:        #BD/First measure TargetCell:%d is in CandiDetected cell set Freq:%d ObjectId:%d
Line 1401:      ::CheckNewCellToScheduleEutra
Line 1406:        #Eutra First measure TargetCell:%d is in CandiListed cell set Freq:%d
Line 1412:        #Eutra First measure TargetCell:%d is in CandiDetected cell set Freq:%d
Line 1452:      ::MakeConnFr2PbchDecodeReq
Line 1476:      ::No cell for PBCH DECODE REQ
