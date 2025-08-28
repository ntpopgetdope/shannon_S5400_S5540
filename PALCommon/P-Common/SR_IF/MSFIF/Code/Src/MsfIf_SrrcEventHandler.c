Line 527: [MSFIF][MSG_LOG] MSF ===> PRECEDING_ACTION_REQ_IND [PeerClient=%s][Action=%d][Client=%s]
Line 590: [MSFIF][D]Updating NSA mode (NSA_NSA_LPM mode is disabled) : RatId : %s , Value = %d 
Line 620: [MSFIF]DDS Change event (NSA_NSA_LPM mode is disabled) : %d -> %d
Line 670: [MSFIF][D]REGI_REQ state, Send SRRC DEREGISTRATION(%s)
Line 672: [MSFIF][W]Non REGI_DONE state, Discard SRRC DEREGISTRATION(%s)
Line 713: [MSFIF][D]Trigger event in Non-Idle MsaState [Service=%s][MsaState=%d][Client=%s]
Line 717: [MSFIF][W]Higher priority serivce is active, Client should use UPDATE_PROCEDURE interface
Line 728: [MSFIF]SRRC_REQUEST_IN_PREV_SERVICE_RUNNING, %s -> %s [Client=%s]
Line 738: [MSFIF][W]Not define previous action in TriggerEvent : %s(%d)
Line 767: [MSFIF][W]Not define post action in TriggerEvent : %s(%d)
Line 802: [MSFIF][W]Invalid UpdateEvent : %s, %s, %s
Line 853: [MSFIF][D]UpdateProcedureEvent : Cancel Grant Request (TRIGGER state), MsSvc(%s)
Line 874: [MSFIF][W]UpdateProcedureEvent :No previous Svc infomation, TriggerSvc(%s), UpdatingMsSvc(%s)
Line 878: [MSFIF][W]UpdateProcedureEvent : Ignore event, PrevMsSvc(INVALID), UpdatingMsSvc(%s)
Line 885: [MSFIF][W]Not-Support UpdateProcedureEvent : %s, %s
Line 913: [MSFIF][D]AbortAckEvent : Fallback to %s
Line 946: [MSFIF][W]%s Client to use UPDATE ILM To SRRC
Line 950: [MSFIF][W]%s Client to use REQUEST ILM To SRRC
Line 966: [MSFIF][D]Fallback to RUN_HOLD directly because previous service is IDLE by MSFIF
Line 971: [MSFIF][W]%s Client Previous Service(%s) State(%s) abnormal
Line 987: [MSFIF][W]Not-Support state for FallbackEvent: %s, %s
Line 1030: [MSFIF][MSG_LOG] MSF ===> GRANT_HOLD_IND [Cause=%d][Client=%s]
Line 1055: [MSFIF][MSG_LOG] MSF ===> GRANT_RELEASE_IND [Cause=%d][Client=%s]
Line 1074: [MSFIF][MSG_LOG] MSF ===> CLIENT_ACION_CNF [Client=%s]
Line 1115: [MSFIF]ClientActionReq for %s Rat [Action=%d][Client=%s]
Line 1122: [MSFIF][W]ClientActionReq for Not supported Rat, Send dummy confirm [Action=%d][Client=%s]
Line 1200: [MSFIF][W]TriggerCnf in invalid MsaState [Service=%s][MsaState=%d][Client=%s]
Line 1205: [MSFIF][W]TriggerCnf event in IDLE state : %s, %s
Line 1217: [MSFIF][W]Not-Support TriggerCnf : %s, %s
Line 1314: [MSFIF][W]Not-Support TriggerRej : %s, %s
Line 1358: [MSFIF][W]TriggerHold event in IDLE state : %s, %s
Line 1380: [MSFIF][W]Not-Support TriggerHold : %s, %s
Line 1433: [MSFIF][W]Invalid SWITCH REQ Command : %s, %s, %s
Line 1442: [MSFIF][W]Not-Support SwitchReq : %s, %s, %s
Line 1520: [MSFIF][W]Invalid PeerProcCausingPause, replace Srrc_As_Singaling
Line 1536: [MSFIF][D]Invalid RUN_HOLD Command, State mismatch(MSFIF<->MSD) : %s, %s, %s , Discard Command
Line 1542: [MSFIF][D]Invalid RUN_HOLD Command, State mismatch(MSFIF<->MSD) : %s, %s, %s , Send RUN_HOLD status to MSD
Line 1548: [MSFIF][W]Invalid RUN_HOLD Command : %s, %s, %s
Line 1558: [MSFIF][D]Not-Support RUN_HOLD : %s, %s, %s
Line 1622: [MSFIF][D]Not-Support RUN_ABORT : %s, %s, %s
Line 1679: [MSFIF][W]Ignore RESUME Command : %s, %s, %s, Wait TRIGGER_CNF
Line 1685: [MSFIF][W]Invalid RESUME Command : %s, %s, %s
Line 1699: [MSFIF][D]Not-Support RESUME : %s, %s, %s
Line 91: [MSFIF][W]Invalid MsgType(%d)
Line 483: [MSFIF][W]Passive Scan Registration Failure for Client %s, Already requested by Client %s
Line 490: [MSFIF][D]Passive Scan Registration Success for Client %s 
Line 500: [MSFIF][D]Passive Scan is not allow, Start SRRC_REGI_RETRY_TIMER (RetryCount:%d)
Line 508: [MSFIF][D]Passive Scan is not allow, Send Registration failure response
Line 423: [MSFIF][D]%s : %s
Line 212: [MSFIF][W]Not Support MsaState : PrevMsaState(%s), NextMsaState(%s)
Line 228: [MSFIF][MSG_LOG] MSF ===> SERVICE_INFO_CHANGE [Service=%s][MSDState=%s][Client=%s]
Line 231: [MSFIF][MSG_LOG] [NextService=%s][NextMSDState=%s]
Line 129: [MSFIF][MSG_LOG] MSF ===> TRIGGER_REQ [Service=%s][Cause=%d][Client=%s]
Line 170: [MSFIF][MSG_LOG] MSF ===> STATUS_UPDATE_IND [Service=%s][MSDState=%s][Client=%s]
Line 268: [MSFIF]SRRC_NS_UNRECOVER_IND is detected on STACK1 for SRRC cause (%d), %s
Line 270: [MSFIF]SRRC_NS_UNRECOVER_IND is detected on STACK2 for SRRC cause (%d), %s
Line 396: [MSFIF][D]%s : %s
Line 1471: [MSFIF][D]Bplmn RUN_HOLD for Active 4G(%s) and Abort Req for Passive 2G(%s) if PeerClient is 2G(%s)
