Line 75: RrmSubBlkScellMeas::Init() - MsgGrpId(%d)
Line 82:      ::ScheduleForScell
Line 103: 	     #Measurement for this freq, is ongoing
Line 107:        #ScheduleForScell - SCellFreq = (%d)
Line 157:      ::AddScellToMo for SsbAbsFreq %d SCS %d
Line 192:      ::SsbMeasInput is FULL(MAX_NUM_MEAS_CELL:%d)
Line 203:        #AddScellToMo amount (%d)
Line 207:      ::invalid pServCellGroupInfoNr
Line 225:      ::ObjectId %d removed
Line 230:      ::Not proper meas type between MeasScheduleInfo.LastMeasType (%d) CNF Meastype (%d)
Line 239:      ::ObjectId %d removed
Line 244:      ::Not proper meas type between MeasScheduleInfo.LastMeasType (enum)%d CNF Meastype (enum)%d
Line 258:      ::Invaild meas type occur in Both type MeasScheduleInfo.LastMeasType (%d) CNF Meastype (%d)
Line 278:      ::AddScellToMo for SsbAbsFreq %d SCS %d
Line 310:        #CellId %d BeamIndex %d BeamTimingOffset %d 
Line 316: 	    #SsbMeasInput is FULL(MAX_NUM_MEAS_CELL:%d)
Line 324:        #AddScellToMo amount (%d)
Line 328:        #invalid pServCellGroupInfoNr
Line 336:      ::SendL1cRrmTimingUpdateInd
Line 353:        #SendL1cRrmTimingUpdateInd::SCellIdx(%d) SsbIdx(%d) TimingOffsetUpdate(%d)
Line 377:      ::IsSCellSrchRequired pSCellPtr == NULL
Line 384:      ::scellStatus:%s srchDoneCnt:%d
Line 427:      ::RrmSubBlkScellMeas::ConfigureMeasReqForMockMeasObject
Line 428:        #SCell MeasObjId(%d). LastMeasType:(enum)[%d]
Line 464:      ::First SRCH for SCell
Line 484:      ::First MEAS for SCell
Line 516:        #No cell found in this SMTC meas time, Srch again.
Line 520:        #No cell found in this SMTC meas time, and Srch cycle not yet
Line 528:      ::Wrong scheduledMeasType [%d] or No Srch/Meas cycle - mock Scell
Line 533:      ::scheduledMeasType:%d will be scheduled - 7Both 8Srch 9Meas - mock Scell
Line 551:      ::ConfigureMeasReqForNormalMeasObject
Line 552:        #SCell MeasObjId(%d). LastMeasType:(enum)[%d]
Line 589:        #First SRCH for SCell
Line 607:        #First MEAS for SCell
Line 639:        #No cell found in this SMTC meas time, Srch again.
Line 643:        #No cell found in this SMTC meas time, and Srch cycle not yet
Line 671:        #ConfigureMeasReqForNormalMeasObject - No cell found in this SMTC meas time, Srch again.
Line 675:        #ConfigureMeasReqForNormalMeasObject - No cell found in this SMTC2 meas time, and Srch cycle not yet
Line 681:        #ConfigureMeasReqForNormalMeasObject - SMTC2 exist, changed periodicity from [%d] to [%d]
Line 689: 	  ::Wrong scheduledMeasType [%d] or No Srch/Meas cycle - Scell
Line 694: 	  ::scheduledMeasType:%d will be scheduled - 7Both 8Srch 9Meas - Scell
Line 711:      ::EncodeSCellSetInd
Line 731:      ::EncodeSCellSetInd - Error!!! there are no ServCellGroupInfoNr for MasterCellGroup
Line 741:        #ScellIdx[%d] Configuration Not Changed from previous! Do not include this SCell Info!!
Line 746:        #ScellIdx[%d] Configuration Unknown!!
Line 754:        #ScellIdx[%d] Configuration Not Found from SCell List
Line 760:        #Scell(Arfcn %d, SCS %d) is not found from SCellFreqList
Line 787: 	    #FatalError: PCellFreqPtr is NULL!!!
Line 804: 	    #Scell(Arfcn %d, SCS %d) is not found from SCellFreqList
Line 815:        #ScellIdx(%d) info set to ScellInfoList[%d]
Line 821:          *ScellInfoList[%d] ScellIndex(%d) act_deact(%d) SsbIndex(%d) 
Line 828:          *RxBeamIdx(%d) TimingOffset(%d -> 0x%x) target_slot(%d) AgcGain[0](%d) AgcGain[1](%d)
Line 840:          *numOfScellInfoList(%d), Crnti %d(0x%x), SCellActivationSlot(0x%xX)
Line 852:      ::CheckSCellActDeactType - ScellIdx(%d) SCellBitMask_Current(0x%x) SCellBitmask_New(0x%x)
Line 856:        #ScellIdx(%d) RRM_SCELL_STATUS_TYPE_NOCHANGE
Line 861:        #ScellIdx(%d) RRM_SCELL_STATUS_TYPE_ACT
Line 866:        #ScellIdx(%d) RRM_SCELL_STATUS_TYPE_DEACT
Line 871:        #Error!!!! RRM_SCELL_STATUS_TYPE_UNKNOWN
