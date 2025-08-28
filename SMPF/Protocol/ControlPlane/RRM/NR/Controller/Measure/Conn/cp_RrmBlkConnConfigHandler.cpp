Line 102:    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
Line 103:    >>ConfigureMeasReq SelectedFreqType:%s, ObjectId:%d , Reschedule:(bool)%d
Line 110:    >>pMeasReq is NULL
Line 148:      ::Intra Scheduling is skipped.
Line 153:      ::Intra-F scheduled
Line 161:      ::Inter-F Meas Scheduling is skipped.
Line 166:      ::Inter-F Meas scheduled
Line 176:      ::SCell Scheduling is skipped.
Line 181:      ::SCell scheduled
Line 187:      ::SelectedFreqType:%d is full count:%d
Line 194:    >> MesaReq configured MeasType(%s), MeasObjectId(%d), NumSsbMeasInput(%d)
Line 195:    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
Line 207:    >>ConfigureMeasReqForEutra measType:%d
Line 212:    >>pMeasReq is NULL
Line 249:    >>RrmBlkConnConfigHandler::ConfigureMeasReqForUtra
Line 254:    >>pMeasReq is NULL
Line 284:    >>RrmBlkConnConfigHandler::ConfigureMeasReqForCli
Line 309:    >>RrmBlkConnConfigHandler::ConfigureIntraMeasReqForCsiRs
Line 329:    >>CSI-RS meas not configured - Failed to UpdateMeasReqForCsiRs
Line 334:    >>CSI-RS meas not configured - meas not required
Line 339:    >>CSI-RS meas not configured - CSI-RS MeasScheduleInfo is absent
Line 344:    >>CSI-RS meas not configured - Failed to GetPCellFreqPtr
Line 349:    >>UPDATE csiMeasScheduleInfo(MeasObjectId:%d)
Line 370:    >>bConfigured:(bool)%d
Line 383:    >>RrmBlkConnConfigHandler::ConfigureInterMeasReqForCsiRs
Line 404:    >>CSI-RS meas not configured - Failed to UpdateMeasReqForCsiRs
Line 409:    >>CSI-RS meas not configured - meas not required
Line 414:    >>CSI-RS meas not configured - CSI-RS MeasScheduleInfo is absent
Line 419:    >>CSI-RS meas not configured - pFreqInfo is NULL
Line 424:    >>UPDATE csiMeasScheduleInfo(MeasObjectId:%d)
Line 444:    >>bConfigured:(bool)%d
Line 452:    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
Line 453: RrmBlkConnConfigHandler::ConfigureMeasReqForCsiRs SelectedFreqType:(enum)%d, ObjectId:%d , Reschedule:(bool)%d
Line 460:    >>pMeasReq is NULL
Line 493: 	>>Intra Freq CSI Scheduling is skipped.
Line 498: 	>>Intra Freq CSI Scheduled
Line 509: 	>>Inter Freq CSI Scheduling is skipped.
Line 514: 	>>Inter Freq CSI Scheduled
Line 519:      ::SelectedFreqType:%d is full count:%d
Line 524:    >>MesaReq configured MeasType(%d), MeasObjectId(%d)
Line 525:    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
Line 532: RrmBlkConnMeasNr::ConfigureMeasResultInd (LTERRM_RRM_NR_MEAS_RESULT_IND_T)
Line 536: pMeasResultInd is NULL
Line 550: pServingCellInfo is NULL
Line 581: 	>> Cannot allocate memory for pMeasResultInd->req.measresult_ind.NumServingFreq(%d)
Line 608: pServingCellInfo is NULL
Line 620:    >>MeasResultCell[%d] pServingCell[%d,%d] servCellIndex(%d)
Line 645:    >>MeasResultCell[%d] pIdListedCell[%d,%d] servCellIndex(%d)
Line 659:    >>MeasResultCell[%d] pIdDetectedCell[%d,%d] servCellIndex(%d)
Line 697:    >>pServCellGroupInfoNr is NULL or NumServingFreq:%d is 0 or 1
Line 719:    >>ConfigureMeasResultIndForScellFreq::no SCell found at Arfcn %d SCS %d
Line 730:    >>MeasResultCell[%d] SCell[%d,%d] servCellIndex(%d)
Line 747:      ::MeasResultCell[%d] pIdListedCell[%d,%d] servCellIndex(%d)
Line 761:      ::MeasResultCell[%d] pIdDetectedCell[%d,%d] servCellIndex(%d)
Line 781:    >>ConfigureMeasResultCell (Lterrm_MeasResultCell_t)
Line 794:      ::ConfigureMeasResultCell PcellFreq ptr is NULL
Line 812:      ::MeasConfig is absent(measObjectId:%d) - Update RSRP and RSRQ only
