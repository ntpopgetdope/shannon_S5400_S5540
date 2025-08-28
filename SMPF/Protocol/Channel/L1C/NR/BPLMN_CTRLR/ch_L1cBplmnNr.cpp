Line 127: [NR_BPLMN] L1C_L1C_BPLMNCTRLR_BPLMN_START_REQ_Handler:: DstRat(%d) SrcRat(%d) StartTime(%d) CurPalTime(%d) AvailTime(%d) CurPalTime(%d) PeerModemState(%d)
Line 156: [NR_BPLMN] L1C_L1C_BPLMNCTRLR_BPLMN_START_REQ_Handler:: ElapsedTime(%d) -> AvailTime(%d)
Line 160: [NR_BPLMN] L1C_L1C_BPLMNCTRLR_BPLMN_START_REQ_Handler:: AvailTime(%d) is smaller than BPLMN_X2N_MARGIN_TH_NR(%d).
Line 182: [NR_BPLMN] L1C_L1C_BPLMNCTRLR_BPLMN_START_REQ_Handler:: AvailTime(%d) CurPalTime(%d) EarlyPauseTime(%d) NearestTime(%d) AdjustedAvailTime(%d)
Line 191: [NR_BPLMN] L1C_L1C_BPLMNCTRLR_BPLMN_START_REQ_Handler:: AvailTime(%d) NearestTime(%d) AdjustedAvailTime(%d)
Line 225: [NR_BPLMN] L1C_L1C_BPLMNCTRLR_BPLMN_STOP_REQ_Handler
Line 234: [NR_BPLMN] L1C_L1C_BPLMNCTRLR_BPLMN_SRCH_HOLD_IND_Handler
Line 250: [NR_BPLMN] L1C_L1C_BPLMNCTRLR_CGI_SRCH_HOLD_IND_Handler:: BplmnSrchState(%d) IsComplete(%d)
Line 297: ##[NR_BPLMN] L1C_L1C_BPLMNCTRLR_CGI_START_REQ_Handler:: CurRat(%d) DstRat(%d) SrcRat(%d) StartTime(%d) AvailTime(%d) CurPalTime(%d)
Line 299: ##[NR_BPLMN] L1C_L1C_BPLMNCTRLR_CGI_START_REQ_Handler:: resume_type(%d) m_CgiConfigNr(%d) PeerModemState(%d)
Line 347: [NR_BPLMN] L1C_L1C_BPLMNCTRLR_CGI_START_REQ_Handler:: ElapsedTime(%d) -> AvailTime(%d)
Line 351: [NR_BPLMN] L1C_L1C_BPLMNCTRLR_CGI_START_REQ_Handler:: AvailTime(%d) is smaller than BPLMN_X2N_MARGIN_TH_NR(%d).
Line 379: [NR_BPLMN] L1C_L1C_BPLMNCTRLR_CGI_STOP_REQ_Handler:: m_CgiConfigNr(%d)
Line 406: ##[NR_BPLMN] L1C_L1C_EVENTSCHEDINFOCTRLR_EXCEPTION_IND_Handler:: EventId: %d, ExceptionCause: %d, m_CgiConfigNr: %d, StartTime: %d, CurPalTime: %d, AvailTime: %d, MsgType: %d
Line 410: ##[NR_BPLMN] L1C_L1C_EVENTSCHEDINFOCTRLR_EXCEPTION_IND_Handler during L1C_SUSPEND
Line 431: [NR_BPLMN] ElapsedTime(%d) -> AvailTime(%d)
Line 436: [NR_BPLMN] AvailTime(%d) is smaller than BPLMN_X2N_MARGIN_TH_NR(%d).
Line 536: ##[NR_BPLMN] Wrong ExceptionCause
Line 554: [NR_BPLMN] L1C_L1C_IRATCFGCTRLR_RELEASE_ALL_REQ_Handler:: Type(%d) BplmnSrchState(%d)
Line 582: [NR_BPLMN] L1C_L1C_IRATCFGCTRLR_ALL_STOP_REQ_Handler
Line 595: ##[NR_BPLMN] L1C_L1C_IRATCFGCTRLR_X2N_BPLMN_IND_Handler:: BplmnAvailTime(%d) MsgType(%d)
Line 622: ##[NR_BPLMN] L1C_L1C_BPLMNCTRLR_BPLMN_RESUME_IND_Handler:: AvailTime(%d) MsgType(%d) Result(%d) BplmnSrchState(%d)
Line 641: ##[NR_BPLMN] Wrong m_MsgType(%d)
Line 666: [NR_BPLMN] L1C_L1C_BPLMNCTRLR_RECOVERY_DONE_IND_Handler:: BplmnState(%d) bRecovery(%d) SrcRat(%d) DstRat(%d)
Line 696: [NR_BPLMN] L1C_L1C_BPLMNCTRLR_RECOVERY_START_IND_Handler:: BplmnState(%d) bRecovery(%d) MsgType(%d)
Line 724: [NR_BPLMN] L1C_L1C_BPLMNCTRLR_BPLMN_CGI_CLEAR_IND_Handler
Line 736: [NR_BPLMN] L1C_L1C_BCHCTRLR_SERVING_CELL_RELEASE_CNF_Handler:: MsgType(%d)
Line 761: ##[NR_BPLMN] L1C_L1TUNNEL_4G_NR_INFO_CNF_Handler, type(%d) result(%d) cgi_state(%d) BplmnSrchState(%d)
Line 788: ##[NR_BPLMN] Wrong cig state(%d)
Line 859: ##[NR_BPLMN] StartRestoreBeforeBplmnSrch:: BplmnState(%d)
Line 869: ##[NR_BPLMN] Wrong BPLMN flag(%d)
Line 884: ##[NR_BPLMN] StartStoreForBplmnSrchResume:: Event(%d) (1:INIT, 2:IDLE, 3:WAIT, 4:HOLD, 5:RUN)
Line 906: ##[NR_BPLMN] StartModemOff
Line 923: ##[NR_BPLMN] RrmInterfaceCtrlrNrBplmnStartCnf:: Result(%d)
Line 931: ##[NR_BPLMN] RrmInterfaceCtrlrNrBplmnStopCnf:: Result(%d)
Line 946: ##[NR_BPLMN] L1C_L1C_RRMINTERFACECTRLR_BPLMN_AVAIL_IND:: BplmnSrc(%d)
Line 964: ##[NR_BPLMN] RrmInterfaceCtrlrNrBplmnHoldInd:: Result(%d)
Line 972: ##[NR_BPLMN] RrmInterfaceCtrlrNrBypassBplmnHoldInd:: Result(%d)
Line 982: ##[NR_BPLMN] BplmnHoldExpiredCbFunc:: SrcRat(%d) DstRat(%d) CurRat(%d) BplmnSrchState(%d) modem_state(%d) Timer(%dms) was expired!!!!
Line 1015: ##[NR_BPLMN] StartBplmnHoldTimer:: Timer(%dms) was started!!!!
Line 1022: ##[NR_BPLMN] StopBplmnHoldTimer:: Timer(%dms) was stopped!!!!
Line 1029: ##[NR_BPLMN] ResumeBplmnIdle:: Triggered by IdleDrxCtrlr
Line 1041: ##[NR_BPLMN] RrmInterfaceCtrlrNrCgiStartCnf:: Result(%d)
Line 1051: ##[NR_BPLMN] RrmInterfaceCtrlrNrCgiStopCnf:: Result(%d)
Line 1068: ##[NR_BPLMN] RrmInterfaceCtrlrNrCgiSchedInd:: Result(%d) BplmnSrc(%d) CgiConfigNr(%d)
Line 1092: ##[NR_BPLMN] RrmInterfaceCtrlrNrCgiHoldInd:: Result(%d)
Line 1100: ##[NR_BPLMN] RrmInterfaceCtrlrNrBypassCgiHoldInd:: Result(%d)
Line 1111: ##[NR_BPLMN] RrmInterfaceCtrlrMeasScheduleInd
Line 1121: ##[NR_BPLMN] CgiHoldExpiredCbFunc:: DstRat(%d) SrcRat(%d) Timer(%dms) was expired!!!!
Line 1153: ##[NR_BPLMN] StartCgiHoldTimer:: Timer(%dms) was started!!!!
Line 1159: ##[NR_BPLMN] StopCgiHoldTimer:: Timer(%dms) was stopped!!!!
Line 1166: ##[NR_BPLMN] ResumeBplmnConnected:: Triggered by IdleDrxCtrlr
Line 1175: ##[NR_BPLMN] L2InterfaceCtrlrNrRecoveryDoneInd
Line 1183: ##[NR_BPLMN] L2InterfaceCtrlrCgiTxPauseReq
Line 1191: ##[NR_BPLMN] L2InterfaceCtrlrCgiTxResumeReq
Line 1200: ##[NR_BPLMN] L2InterfaceCtrlrCgiStatusInd:: status(%d)
Line 1207: ##[NR_BPLMN] SchedStartCb:: MsgType(%d)
Line 1218: ##[NR_BPLMN] IratCfgCtrlrReleaseAllCnf:: Result(%d)
Line 1226: ##[NR_BPLMN] IratCfgCtrlrAllStopCnf:: Result(%d)
Line 1235: ##[NR_BPLMN] BchCtrlrServCellReleaseReq:: 
Line 1246: ##[NR_BPLMN] MeasCtrlrMeasConfigInd
Line 1258: ##[NR_BPLMN] EndcCgiInfoReq : type(%d), cgi_target_band(%d), cgi_state(%d)
Line 1267: ##[NR_BPLMN] EndcCgiInfoUpdate : type(%d)
Line 1277: ##[NR_BPLMN] Start HOLD!! SrcRat(%d) DstRat(%d)
Line 1323: ##[NR_BPLMN] Start RESUME!! RemainAvailTime(%d) CurPalTime(%d) EarlyPauseTime(%d) NearestTime(%d)
Line 1362: ##[NR_BPLMN] SetAvailTime:: m_AvailTime(%d), CurPalTime(%d), m_EndAvailablePalTime(%d)
Line 1369: ##[NR_BPLMN] InitAvailTime
Line 1381: ##[NR_BPLMN] GetRemainAvailTime:: EndAvailPalTime(%d), CurPalTime(%d), Diff(%d), RemainAvailTime(%d)
