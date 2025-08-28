Line 107: In function IMSSH_RCSM_IntHandler
Line 114: Internal Handler Name	 
Line 119: Internal Handler Name	 
Line 120: [RCS-IMC] please resolve critical problem in here [%d]!
Line 150: In function IMSSH_RCSM_HandleRegInd: status = %d, AppId = %d
Line 153: Alert>[IMSSH_RCSM_HandleRegInd] Invalid APPID received..Ignoring RegInd
Line 173: Alert>[IMSSH_RCSM_HandleRegInd] No APPDB Available
Line 191: [PREFERRED SIP URI] is %x
Line 195: Alert>[IMSSH_RCSM_HandleRegInd]  P-Associated URI  is NULL...Take From RegDb
Line 199: Alert>[IMSSH_RCSM_HandleRegInd]  P-Associated URI  Allocation failed
Line 222: [IMSSH_RCSM_HandleRegInd] AppId mismatch...return FAIL
Line 229: [IMSSH_RCSM_HandleRegInd] cfgc indication
Line 230: [RCS SESSMGR STATUS IND] Status Indication to CFGC Status(%d)
Line 230: [RCS SESSMGR SESSION STATUS INDICATION] Sending INTMSG:[%d] to INTQ Failed
Line 230: [RCS SESSMGR SESSION STATUS INDICATION] MSG Allocation for INTQ Failed
Line 230: [RCS SESSMGR SESSION STATUS INDICATION] Failed to find Eventhandler for IMSCOMM_SESSION_CFGC , Session Status Indication Msg
Line 234: Alert>[IMSSH_RCSM_HandleRegInd] Already RCS APPDB is freed..
Line 248: Alert>]IMSSH_RCSM_HandleRegInd] APPID not matching with RCS APP...Ignoring DeREG IND from RegC
Line 290: In function IMSSH_RCSM_HandleDeRegInd: DeRegCause = %d, AppId = %d
Line 293: Alert>[IMSSH_RCSM_HandleDeRegInd] Invalid APPID received..Ignoring DeRegInd
Line 306: Alert>[IMSSH_RCSM_HandleDeRegInd]Received DEREG IND from REGC again..Force Close all APPL
Line 329: Alert>[IMSSH_RCSM_HandleDeRegInd] Received DEREG LOCAL again.Wait for Timer expiry or appl to close the session
Line 340: [RCS SESSMGR STATUS IND] Session ID(%d) Connection ID (%d) Session Status(%d), SessionState(%d)
Line 340: [RCS SESSMGR SESSION STATUS INDICATION] Sending INTMSG:[%d] to INTQ Failed
Line 340: [RCS SESSMGR SESSION STATUS INDICATION] MSG Allocation for INTQ Failed
Line 340: [RCS SESSMGR SESSION STATUS INDICATION] Failed to find Eventhandler for sessType(%d), Session Status Indication Msg
Line 343: [RCS SESSMGR STATUS IND] Status Indication to CFGC Status(%d)
Line 343: [RCS SESSMGR SESSION STATUS INDICATION] Sending INTMSG:[%d] to INTQ Failed
Line 343: [RCS SESSMGR SESSION STATUS INDICATION] MSG Allocation for INTQ Failed
Line 343: [RCS SESSMGR SESSION STATUS INDICATION] Failed to find Eventhandler for IMSCOMM_SESSION_CFGC , Session Status Indication Msg
Line 350: Alert>[IMSSH_RCSM_HandleDeRegInd] RCSAPPDB->APPID(%d) not matching with Received APPID(%d)
Line 352: Alert>]IMSSH_RCSM_HandleDeRegInd] APPID not matching with RCS APP...Ignoring DeREG IND from RegC
Line 367: Alert>[IMSSH_RCSM_HandleDeRegInd] APP Recovery Timer Status:(%d)
Line 371: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 402: In function IMSSH_RCSM_HandleAppRecoveryTmrExp: AppId = %d
Line 405: Alert>[IMSSH_RCSM_HandleAppRecoveryTmrExp] Invalid APPID received..Ignoring Request
Line 418: In function IMSSH_RCSM_HandleAppRecoveryTmrExp:Closing session ID(%d) forcefully
Line 420: [RCS SESSMGR STATUS IND] Session ID(%d) Connection ID (%d) Session Status(%d), SessionState(%d)
Line 420: [RCS SESSMGR SESSION STATUS INDICATION] Sending INTMSG:[%d] to INTQ Failed
Line 420: [RCS SESSMGR SESSION STATUS INDICATION] MSG Allocation for INTQ Failed
Line 420: [RCS SESSMGR SESSION STATUS INDICATION] Failed to find Eventhandler for sessType(%d), Session Status Indication Msg
Line 427: Alert>[IMSSH_RCSM_HandleAppRecoveryTmrExp] RCSAPPDB->APPID(%d) not matching with Received APPID(%d)
Line 429: Alert>]IMSSH_RCSM_HandleAppRecoveryTmrExp] APPID not matching with RCS APP...Ignoring Recovery TMR Event
Line 436: [IMSSH_RCSM_HandleAppRecoveryTmrExp] REG CONTROLLER will be waiting for the indication from RCSManager
Line 465: In function IMSSH_RCSM_HandleSessRecoveryTmrExp: SessionId = %d
Line 470: [RCS SESSMGR STATUS IND] Session ID(%d) Connection ID (%d) Session Status(%d), SessionState(%d)
Line 470: [RCS SESSMGR SESSION STATUS INDICATION] Sending INTMSG:[%d] to INTQ Failed
Line 470: [RCS SESSMGR SESSION STATUS INDICATION] MSG Allocation for INTQ Failed
Line 470: [RCS SESSMGR SESSION STATUS INDICATION] Failed to find Eventhandler for sessType(%d), Session Status Indication Msg
Line 498: In function IMSSH_RCSM_HandlePreCondWaitTmrExp: SessionId = %d
Line 505: [RCS SESSMGR STATUS IND] Session ID(%d) Connection ID (%d) Session Status(%d), SessionState(%d)
Line 505: [RCS SESSMGR SESSION STATUS INDICATION] Sending INTMSG:[%d] to INTQ Failed
Line 505: [RCS SESSMGR SESSION STATUS INDICATION] MSG Allocation for INTQ Failed
Line 505: [RCS SESSMGR SESSION STATUS INDICATION] Failed to find Eventhandler for sessType(%d), Session Status Indication Msg
Line 517: In function IMSSH_RCSM_HandlePreCondWaitTmrExp: Operator is ATT, Default bearer can be used for MSRP data
Line 542: In function IMSSH_RCSM_HandleByeReqTimeoutExp: SessionId = %d
Line 547: [RCS SESSMGR STATUS IND] Session ID(%d) Connection ID (%d) Session Status(%d), SessionState(%d)
Line 547: [RCS SESSMGR SESSION STATUS INDICATION] Sending INTMSG:[%d] to INTQ Failed
Line 547: [RCS SESSMGR SESSION STATUS INDICATION] MSG Allocation for INTQ Failed
Line 547: [RCS SESSMGR SESSION STATUS INDICATION] Failed to find Eventhandler for sessType(%d), Session Status Indication Msg
Line 575: In function IMSSH_RCSM_HandleTimerTCallExp: SessionId = %d
Line 580: [RCS SESSMGR STATUS IND] Session ID(%d) Connection ID (%d) Session Status(%d), SessionState(%d)
Line 580: [RCS SESSMGR SESSION STATUS INDICATION] Sending INTMSG:[%d] to INTQ Failed
Line 580: [RCS SESSMGR SESSION STATUS INDICATION] MSG Allocation for INTQ Failed
Line 580: [RCS SESSMGR SESSION STATUS INDICATION] Failed to find Eventhandler for sessType(%d), Session Status Indication Msg
Line 611: In function IMSSH_RCSM_HandleTimerSessionSetupExp: SessionId = %d
Line 617: [RCS SESSMGR STATUS IND] Session ID(%d) Connection ID (%d) Session Status(%d), SessionState(%d)
Line 617: [RCS SESSMGR SESSION STATUS INDICATION] Sending INTMSG:[%d] to INTQ Failed
Line 617: [RCS SESSMGR SESSION STATUS INDICATION] MSG Allocation for INTQ Failed
Line 617: [RCS SESSMGR SESSION STATUS INDICATION] Failed to find Eventhandler for sessType(%d), Session Status Indication Msg
Line 618: MSGTMR-STOP: %s SessId = %d, Status = %d [0:NULL, 2:RUNNING] -> NULL
Line 639: In function IMSSH_RCSM_HandleTimerRetryAfterExp: SessionId = %d
Line 646: MOSESSION RX INV ERROR RSP Code:[%d] Sid[%d]
Line 652: [RCS SESSMGR INVITE/NonINVITE RSP] Sending INTMSG:[%d] to INTQ Failed
Line 652: [RCS SESSMGR INVITE RSP] MSG Allocation for INTQ Failed
Line 684: In function IMSSH_RCSM_HandleTimerSessionRefreshExp: SessionId = %d
Line 693: IMSSH_RCSM_HandleTimerSessionRefreshExp: Send  SIT_RCS_IND_MSRP_SESSION_STATUS msg to AP
Line 695: [RCS SESSMGR SESSION CFM] Sending INTMSG:[%d] to INTQ Failed
Line 695: [RCS SESSMGR SESSION STATUS CFM] MSG Allocation for INTQ Failed
Line 699: Alert>[IMSSH_RCSM_HandleTimerSessionRefreshExp]  Failed to get Handler for ACK REQ
Line 738: In function IMSSH_RCSM_HandlePreConditionMetInd: SessionId = %d
Line 807: In function IMSSH_RCSM_HandleCfgInd: ContextId = %d, Status = %d
Line 810: [RCSSH_FILL_AND_SEND_CFGIND_EVENT_TO_CONTROLLER] Sending DSTMAILID:[%d] to INTQ Failed
Line 810: [RCSSH_FILL_AND_SEND_CFGIND_EVENT_TO_CONTROLLER] MSG Allocation for INTQ Failed
Line 843: [IMSSH_RCSM_Prepare_And_Send_RegReq] RegType:[%d] ContextID[%d]
Line 849: Alert>IMSSH_RCSM_Prepare_And_Send_RegReq] INVALID CONTEXT ID[%d]
Line 863: [IMSSH_RCSM_Prepare_And_Send_RegReq] SELF_CAPA is expected to perform Re-reg when valid AppDb is present
Line 876: [IMSSH_RCSM_Prepare_And_Send_RegReq] Read PCSCF-Port from Registry
Line 914: Alert>[IMSSH_RCSM_AllSessionClearInd] Invalid APPID received..Ignoring Request
Line 922: [IMSSH_RCSM_AllSessionClearInd] REG CONTROLLER will be waiting for the indication from RCSManager
Line 932: Alert>[IMSSH_RCSM_AllSessionClearInd] RCSAPPDB->APPID(%d) not matching with Received APPID(%d)
Line 934: Alert>]IMSSH_RCSM_AllSessionClearInd] APPID not matching with RCS APP...Ignoring ALLSessions Clear Event
Line 970: txMsg Memalloc fail
Line 1087: IMSSH_RCSM_SendIntRegcRefreshReq, appId = %d
