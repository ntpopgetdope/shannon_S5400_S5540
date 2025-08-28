Line 74: [N :SM,%d]     (fn) %s
Line 113: [D :SM,%d]       PreProcessMsg: SMT_MM_STATUS_IND 
Line 118: [W :SM,%d]  %%@EM PreProcessMsg: SMT_L2HPDCPTX_UPDATE_INFORMATION_IND 
Line 126: [D :SM,%d]       SMT_MM_DATA_IND w/ AirMsg(%s)
Line 129: [W :SM,%d]  %%@EM No need for the following procedure due to AirMsg(%s)
Line 142: [W :SM,%d]  %%@EM pSession == nullptr
Line 154: [N :SM,%d]     (fn) %s
Line 197: [W :SM,%d]  %%@EM Abnormal state and msg, so ignore %s/%s
Line 206: [W :SM,%d]  %%@EM PreProcessMsg: Duplicate Modify Request received. Ignore!!!
Line 213: [W :SM,%d]  %%@EM  SMT_QM_CMD_INFO_IND||rMsg.MsgId== SMT_PM_DISCONNECT_REQ
Line 216: [W :SM,%d]  %%@EM (DISC_TRIGGERED_BY_PM|DISC_TRIGGERED_BY_QM)
Line 245: [W :SM,%d]  %%@EM PreProcessMsg:NRSM_NEED_TO_CHECK_EST_CNF:(m_pSession == nullptr) [RX][DISCARD] %s
Line 260: [D :SM,%d]       OpCode=0x%X State(%s) in %s
Line 273: [D :SM,%d]       This PM_CONNECT_REQ needs to send CNF directly
Line 278: [D :SM,%d]       This PM_DISCONNECT_REQ needs to ignore without process
Line 298: [D :SM,%d]       This PM_CONNECT_REQ needs to send CNF directly
Line 312: [D :SM,%d]       This PM_CONNECT_REQ needs to ignore without process
Line 325: [D :SM,%d]       This PM_DISCONNECT_REQ needs to ignore without process
Line 332: [D :SM,%d]       This PM_DISCONNECT_REQ needs to abort previous procedure 
Line 345: [D :SM,%d]       This PM_DISCONNECT_REQ needs to send CNF directly
Line 357: [D :SM,%d]       This PM_CONNECT_REQ needs to ignore without process
Line 369: [D :SM,%d]       Result(%s) in %s
Line 403: [D :SM,%d]       GetSessionFromExtMsg:SMT_MM_DATA_REJ
Line 407: [D :SM,%d]       GetSessionFromExtMsg:SMT_MM_NW_SESSION_INFO_IND
Line 424: [W :SM,%d]  %%@EM pSession == nullptr
Line 436: [W :SM,%d]  %%@EM pSession == nullptr
Line 442: [W :SM,%d]  %%@EM pSession == nullptr
Line 448: [W :SM,%d]  %%@EM pSession == nullptr
Line 474: [D :SM,%d]       SessionId(%d) SDAP_Available(%d)
Line 504: [D :SM,%d]       already released session(%d)
Line 511: [W :SM,%d]  %%@EM This Msg(%s) is not handled. SessionId=%d
Line 531: [D :SM,%d]       This Msg(%s) is handled. SessionId=%d pFindSession=0x%X
Line 542: [N :SM,%d]     (fn) smt_GetSessionFromExtMsg_DataInd : DATA_IND SessionId %d
Line 549: [W :SM,%d]  %%@EM pFindSession=NULL, So make temparary pStatusSession
Line 558: [ME:SM,%d] %%@ME UE sends a STATUS due to invalid PDU session identity from %s
Line 565: [W :SM,%d]  %%@EM If SessionId(%d) is a reserved or unassigned value, the UE shall ignore the message 
Line 570: [D :SM,%d]       UE got a PTI 0xFF from NW
Line 576: [W :SM,%d]  %%@EM pFindSession != nullptr
Line 583: [ME:SM,%d] %%@ME UE sends a STATUS due to invalid PDU session identity from Payload container of %s
Line 594: [D :SM,%d]       return NULL due to smt_CheckCommandMatchToState=true
Line 603: [N :SM,%d]     (fn) %s
Line 614: [D :SM,%d]       SessionID %d Conn->sessionID(%d)
Line 619: [D :SM,%d]       If it is Handover case SM state will be change to INACTIVE
Line 638: [N :SM,%d]     (fn) %s
Line 649: [D :SM,%d]       Session has already been deleted from NW
Line 676: [D :SM,%d]       Available SessionId %d
Line 690: [W :SM,%d]  %%@EM Unexpected SmState(%d)..
Line 705: [N :SM,%d]     (fn) smt_CreateSession Available SessionId=%d
Line 709: [W :SM,%d]  %%@EM return %s = nullptr in %s
Line 712: [W :SM,%d]  %%@EM return %s = nullptr in %s
Line 715: [W :SM,%d]  %%@EM return %s = nullptr in %s
Line 740: [N :SM,%d]     (fn) %s
Line 788: [W :SM,%d]  %%@EM Unknown Air message received MsgId %d
Line 800: [N :SM,%d]     (fn) smt_SaveCurrQFIlistToSavedQFIlist requestedOp=0x%X (%s)
Line 815: [A :SM,%d] %%@EM NeedToSend RELESAE_REQ
Line 815: [SM|%d,CP] NeedToSend RELESAE_REQ
Line 830: [A :SM,%d] %%@EM NeedToSend MOD COMMAND REJECT
Line 830: [SM|%d,CP] NeedToSend MOD COMMAND REJECT
Line 865: [A :SM,%d] %%@EM NeedToSend RELEASE COMPLETE
Line 865: [SM|%d,CP] NeedToSend RELEASE COMPLETE
Line 897: [N :SM,%d]     (fn) %s
Line 900: [W :SM,%d]  %%@EM return (void) %s = nullptr in %s
Line 904: [W :SM,%d]  %%@EM return (void) %s = nullptr in %s
Line 927: [N :SM,%d]     (fn) smt_CreateQosFlowDesc EBId %d / IwkN26 %d
Line 939: [W :SM,%d]  %%@EM (_new_) %s=0x%X in %s
Line 966: [N :SM,%d]     (fn) smt_CreateMappedEps EBId %d / IsMappingDone %d
Line 970: [W :SM,%d]  %%@EM (_new_) %s=0x%X in %s
Line 990: [N :SM,%d]     (fn) smt_RemoveQosFlowAndMappedEps EBId %d
Line 993: [W :SM,%d]  %%@EM return (void) %s = nullptr in %s
Line 996: [W :SM,%d]  %%@EM return (void) %s = nullptr in %s
Line 1032: [N :SM,%d]     (fn) smt_SessionCreateWithPmSesssionId Available SessionId %d
Line 1048: [N :SM,%d]     (fn) %s
Line 1055: [N :SM,%d]     (fn) %s
Line 1076: [N :SM,%d]     AirMsg=0x%X(%s) Result=%d in %s
Line 1083: [N :SM,%d]     (fn) ControlSscMode : requestedOp=0x%X (%s)
Line 1089: [D :SM,%d]       ControlSscMode Type = %d
Line 1101: [D :SM,%d]       Cause  => %d
Line 1113: [N :SM,%d]     If SSC 3 is supported, needs adding procedure
Line 1126: [W :SM,%d]  %%@EM pSmContext==nullptr
Line 1250: [D :SM,%d]       (fn) smt_FindEstReqTypeCallTypeReqType CallType(%s) ReqType(%s) 
Line 1262: [N :SM,%d]     (fn) smt_CheckRegAndCallType : CallType (%d) EmerREG (%d) NormalREG (%d) MsgType (%d)
Line 1294: [N :SM,%d]     (fn) %s
Line 1300: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 1317: [N :SM,%d]     (fn) %s
Line 1320: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 1321: [N :SM,%d]     (set) %s = %d(0x%X)->%d(0x%X) (Changed) in %s
Line 1321: [N :SM,%d]     (set) %s = %d(0x%X) (Already) in %s
Line 1327: [N :SM,%d]     (fn) %s
Line 1330: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 1339: [W :SM,%d]  %%@EM 6.4.1.6-Collision of HO Est & Rel. NRSM_AIR_MSG_SESSION_REL_CMD && NRSM_PDU_ACTIVE_PENDING [%d] 
Line 1343: [W :SM,%d]  %%@EM NRSM_AIR_MSG_SESSION_REL_CMD && NRSM_PDU_ACTIVE_PENDING [%d] 
Line 1348: [W :SM,%d]  %%@EM NRSM_AIR_MSG_SESSION_REL_CMD && NRSM_PDU_ACTIVE_PENDING [%d] 
Line 1355: [W :SM,%d]  %%@EM NRSM_AIR_MSG_SESSION_AUTH_CMD && NRSM_PDU_INACTIVE_PENDING [%d] 
Line 1363: [W :SM,%d]  %%@EM NRSM_AIR_MSG_SESSION_MOD_CMD && !NRSM_PDU_ACTIVE [%d] 
Line 1371: [N :SM,%d]     (fn) %s
Line 1387: [N :SM,%d]     (fn) %s
Line 1388: [W :SM,%d]  %%@EM return (void) %s = nullptr in %s
Line 1392: [D :SM,%d]       PM_SMT_CONNECT_REJ case will be removed sessionId (%d)
Line 1415: [ME:SM,%d] %%@ME UE no need to sends a STATUS for NW msg 0x%X
Line 1419: [ME:SM,%d] %%@ME UE no need to sends a STATUS for NW msg 0x%X
Line 1443: [D :SM,%d]       Delete session(%d) SessionNeeded (%d)
Line 1445: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 1462: [D :SM,%d]       Available SessionId %d
Line 1493: [N :SM,%d]     (fn) %s
Line 1496: [W :SM,%d]  %%@EM return (void) %s = nullptr in %s
Line 1498: [W :SM,%d]  %%@EM return (void) %s = nullptr in %s
Line 1501: [W :SM,%d]  %%@EM return (void) %s = nullptr in %s
Line 1503: [W :SM,%d]  %%@EM return (void) %s = nullptr in %s
Line 1506: [W :SM,%d]  %%@EM return (void) %s = nullptr in %s
Line 1508: [W :SM,%d]  %%@EM return (void) %s = nullptr in %s
