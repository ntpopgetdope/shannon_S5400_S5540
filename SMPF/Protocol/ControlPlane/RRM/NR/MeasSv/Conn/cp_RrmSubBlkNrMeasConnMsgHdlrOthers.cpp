Line 84: RrmSubBlkNrMeasConnMsgHdlrOthers::RrmSubBlkNrMeasConnMsgHdlrOthers()
Line 89: RrmSubBlkNrMeasConnMsgHdlrOthers::~RrmSubBlkNrMeasConnMsgHdlrOthers()
Line 94:    >>RRM_L1C_MEAS_CNF_Handler
Line 113:      ::[N2U] IsValid %d CellId %d, Rscp %d, EcNo %d, Rssi %d, TimingOffset %d
Line 122:      :: Result:(enum)%d ObjectId:%d RsType:%s(%d) MeasType:%s(%d) NumResult:%d
Line 147:    >>Need check CDRX duration
Line 169:    >>RRM_L1C_MEAS_SCHEDULE_IND_Handler- ModemStatus:%d DrxRemainTime:%d
Line 189:    >>Ignore SCHEDULE_IND(CdrxAvilableStatus:%d AllStopRunning:%d PbdPrepareIratChangeRunning:%d)
Line 211:    >>Skip due to DRX PBD ongoing
Line 239:    >>RRM_L1C_PBCH_DECODE_CNF_Handler: Result:%d RatType:%d
Line 244:      ::SsbFrequency:%d SubcarrierSpacing:%d
Line 278:      ::FOUND - PBCH DECODED CELL SetType:%s(%d)
Line 286:    >>No freq found in PBCH DECODE CNF
Line 294:      ::PCID(%d) SUCCESS result in RRM_L1C_PBCH_DECODE_CNF_Handler
Line 299:      ::BeamIndexLSB(%d), BeamIndex(%d)
Line 316:    >>No cellptr
Line 325:      ::PCID(%d) RecvMsg.Result == FAILURE
Line 335:      ::Cell removed in RRM_SET_TYPE_IDDETECTEDCELLSET
Line 348:      ::Cell moved to RRM_SET_TYPE_UNIDLISTEDCELLSET
Line 366:    >>No cellptr
Line 371:    >>PCID(%d) Wrong result:%d for FR2 PBCH decode cnf
Line 393:     >>MeasId(%d) ObjId(%d) for reportSFTD Found at MeasInfoList!!!!
Line 436: RrmSubBlkNrMeasConnMsgHdlrOthers::RRM_TIMER_MEAS_EVAL_IND_Handler
Line 455: RrmSubBlkNrMeasConnMsgHdlrOthers::RRM_TIMER_MEAS_SCHEDULE_IND_Handler
Line 461: RrmSubBlkNrMeasConnMsgHdlrOthers::RRM_TIMER_MR_INTERVAL_IND_Handler
Line 473: RrmNrMeasConn::RRM_LTERRM_LTE_MEAS_RESULT_IND_Handler(%d)
Line 488:    >>arfcn(%d) serving CellId(%d) Rsrp(%d) Rsrq(%d) Sinr(%d)
Line 496:    >>arfcn(%d) best neighbor CellId(%d) Rsrp(%d) Rsrq(%d) Sinr(%d)
Line 508: RrmNrMeasConn::RRM_LTERRM_LTE_OBJECT_CHECK_CNF_Handler(Earfcn:%d NumCell:%d)
Line 528:    >>N2L Scheduling is skipped.
Line 539:    >>N2L Scheduling is skipped.
Line 544:    >>MeasType error [%d]
Line 557: RrmSubBlkNrMeasConnMsgHdlrOthers::RRM_RRC_DELAY_REPORT_IND_Handler
Line 567: RrmSubBlkNrMeasConnMsgHdlrOthers::ProcConnMeasure 
Line 589: RrmSubBlkNrMeasConnMsgHdlrOthers::CheckRemainTime
Line 606:      ::PeriodicalReportInterval::reportTriggered is True::MeasID(%d), numberOfReportsSent(0)::_eval_
Line 611:      ::First send::MeasID(%d), PeriodicalReportInterval(%d)::_eval_
Line 617: PeriodicalReportInterval::reportTriggered is True::MeasID(%d)::_eval_[N2L]
Line 622: Report on Leave is true send event for MeasID(%d), PeriodicalReportInterval(%d)::_eval_
Line 628:      ::PeriodicalReportInterval::reportTriggered is True::MeasID(%d), TimeDiff(%d)::_eval_
Line 638:      ::PeriodicalReportInterval::reportTriggered is FALSE::MeasID(%d), TimeDiff(%d)::_eval_
Line 643:      ::RemainTime(%d)::_eval_
Line 654: RrmSubBlkNrMeasConnMsgHdlrOthers::CheckReportMode
Line 671:      ::>>UlDelayMR set report mode as SERVINGCELL ReportAmount:%d(enum) 
Line 680:    >>Invalid Periodical ReportAmount
Line 682:      ::ProcConnEvalReport::MeasID(%d), Periodical_ReportAmount(%d)::_eval_
Line 703:    >>Invalid Periodical ReportAmount
Line 705:      ::[N2L] ProcConnEvalReport MeasID(%d), Periodical_ReportAmount(%d)
Line 714:      ::ProcConnEvalReport::ReportMode(%d)::_eval_[N2L]
Line 720: RrmSubBlkNrMeasConnMsgHdlrOthers::ProcConnEvalReport
Line 741:    >>ProcConnEvalReport - ERROR) MeasID(%d)'s Varlist is abnormal state. So MR cannot be transmitted.
Line 752:      ::ProcConnEvalReport - MeasID(%d) is for UlDelayMR, Skip until RRC trigger UlDelayMR
Line 761:      ::ProcConnEvalReport - MeasID(%d) VarMeasReportList.reportTriggered(%d)[N2L]
Line 783:      ::ProcConnEvalReport - ReportAmount is exhausted. Sent all quantities::MeasID(%d) numberOfReportsSent(%D)::_eval_
Line 814: A2 Event captured!
Line 834:      ::ProcConnEvalReport - pRrcRrmMeasReportInd is NULL::_eval_
Line 843:      ::TimerMr will stop. because minRemainTime is not setting::_eval_
Line 848:      ::minRemainTime(%d)::_eval_
Line 855: RrmSubBlkNrMeasConnMsgHdlrOthers::ProcReSchedule
Line 879: 	>>Re-scheduled MO:%d
Line 891: 	>>Not Re-scheduled MO:%d
Line 896: 	>>Reschedule flag is not TRUE MO:%d
Line 912: 	>>Re-scheduled CSI MO:%d
Line 922: 	>>Not Re-scheduled CSI MO:%d
Line 927: 	>>CSI Reschedule flag is not TRUE MO:%d
Line 952:    >>Eutra Srch Re-scheduled MO:%d
Line 957:    >>Eutra Srch not Re-scheduled MO:%d
Line 972:    >>Eutra Meas Re-scheduled MO:%d
Line 977:    >>Eutra Meas not Re-scheduled MO:%d
Line 995:    >>Utra Re-scheduled MO:%d
Line 999:    >>Not Utra Re-scheduled MO:%d
Line 1020: RrmSubBlkNrMeasConnMsgHdlrOthers::ProcSchedule
Line 1074:    >>CSI Meas Object id :%d - MeasReq is not configured
Line 1092: RrmSubBlkNrMeasConnMsgHdlrOthers::ProcScheduleForCli
Line 1162: RrmSubBlkNrMeasConnMsgHdlrOthers::ProcMeasEval
Line 1179: 	>>Entering SMeasureCondition.
Line 1227:    >>ManageTimerMeasEval - minDurTttExpiry:%d MEAS_EVAL_TIME:%d
Line 1244: RrmSubBlkIratMeas::SendLteObjectCheckReq(earfcn:%d)
Line 1274:      ::tolerence(twoSsbSymbolLength):%d - (SCS:(enum)%d)
Line 1292:      ::CellId:%d TargetTimingOffset:%d 
Line 1319:        #PBCH DECODE CNF - SsbTimingOffset:%d diff:%d m_SsbTimingOffsetArray[%d]:%d ssbSampleMax:%d
Line 1327:        #INVALID - Difference:%d exceed Tolerence:%d remove targetCell:%d 
Line 1364:    >>SendFr2PbchDecodeReq - IsFr2:%d MeasPbchStatus:%d IsPbchAvailable:%d
Line 1370:      ::PbchScheduleData - ObjectId:%d CellId:%d SsbIndex:%d
Line 1388:      ::No Cell found to PBCH DECODE REQ
Line 1399:      ::No Cell exist in PbchScheduleData
Line 1404:      ::PBCH DECODE ONGOING
Line 1459:    >>LastHandShakeSkip:%d MeasReservedPrev:%d(enum) New:%d(enum) ScheduleRequirement:%d ReportNow:%d OnTTT:%d 
