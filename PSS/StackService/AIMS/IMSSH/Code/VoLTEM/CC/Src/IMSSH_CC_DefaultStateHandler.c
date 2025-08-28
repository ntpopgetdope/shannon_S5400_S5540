Line 813: IMSSH_CC_RegInd_DefaultHdlr: status = %d, AppId = %d, CurrentRan = %d
Line 816: [ERR] 
Line 852: IMSSH_CC_CallDeflectionReq_DefaultHdlr
Line 863: [FAIL] IMSSH_FAIL in calldeflectionReq
Line 920: [ERR] 
Line 939: [IMSSH_CC_RedirectFail_Hdlr] AppId[%d], CallState[%d]
Line 955: [IMSSH_CC_RedirectFail_Hdlr] Invalid pCallParam or appId !!
Line 960: [IMSSH_CC_RedirectFail_Hdlr] Invalid CallId [%d] !!
Line 1025: [IMSSH_INT_CC_RatChange_DefaultHdlr] pCcDb->CurrentRan: [%d], appId: [%d], pRatChangeNtf->actRat: [%d], pRatChangeNtf->PrevactRat: [%d]
Line 1065: isHoReinviteSupported = %d
Line 1108: Invalid CallId!!!
Line 1160: CsCallStatus from NS : [%d]
Line 1166: RAT change ind received for HO to 3G/2G
Line 1174: RAT change ind received for HO to 3G/2G
Line 1224: Starting dedicated bearer wait timer for 1 sec,after the RAT change From NR to LTE 
Line 1259: In function IMSSH_CC_CallClearInd_DefaultHdlr: sessionId = %d, AppId = %d
Line 1311: [IMSSH_CC_CallClearInd_DefaultHdlr] Making isSendIndToRegc=TRUE, ReqResInfo [%d]
Line 1333: In function IMSSH_CC_IntGenInfoInd_DefaultHdlr: FeatType = %d, FeatValueLen = %d
Line 1340: [IMSSH_CC_IntGenInfoInd_DefaultHdlr] Failure to send Ind to AP
Line 1369: In function IMSSH_CC_RRCTimerExpiryEvent_DefaultHdlr: StackId = %d, TimerExpired = %d
Line 1409: In function IMSSH_CC_CallSetupTmrExpiry_defaultHdlr
Line 1411: [ERR] 
Line 1440: Another active call on hold. No need to initiate CSFB
Line 1469: [IMSSH_CC_B1CallSetupTmrExpiry_defaultHdlr] B1CallSetupTmrExpiry is expected in only Init state.
Line 1491: [IMSSH_CC_MtPrackWaitTmrExpiry_defaultHdlr] MtPrackWaitTmrExpiry is expected in only proceeding state.
Line 1517: In function IMSSH_CC_E3CallSetupTmrExpiry_defaultHdlr
Line 1519: [ERR] 
Line 1544: Need to send CANCEL with TMO specific Reason header.
Line 1562: Setting IsE3TimerExpired to TRUE.
Line 1581: In function IMSSH_CC_MTCallGuardTmrExpiry_defaultHdlr
Line 1598: In function IMSSH_CC_EmergencyCallTimerExpiry_defaultHdlr
Line 1615: In function IMSSH_CC_EmergencyCallAnswerTimerExpiry_defaultHdlr
Line 1639: [IMSSH_CC_PrackWaitTmrExpiry_defaultHdlr] PRACK timer expired in wrong state for the session ID = %d
Line 1664: [IMSSH_CC_RingingTmrExpiry_defaultHdlr] Ringing  timer expired in wrong state for the session ID = %d
Line 1682: In function IMSSH_CC_RefreshTmrExpiry_defaultHdlr
Line 1699: In function IMSSH_CC_HoldUnholdRetryTimerExpiry_defaultHdlr
Line 1716: In function IMSSH_CC_HoReinvRetryTimerExpiry_defaultHdlr
Line 1733: In function IMSSH_CC_UpgradeWaitTimerExpiry_defaultHdlr
Line 1754: In function IMSSH_CC_DisconnectRespTmrExpiry_DefaultHdlr
Line 1779: In function IMSSH_CC_DisconnectWaitTmrExpiry_DefaultHdlr
Line 1797: In function IMSSH_CC_RemoteDisconnectWaitTmrExpiry_DefaultHdlr
Line 1819: In function IMSSH_CC_InviteSilentRetryTmrExpiry_Defaulthdlr
Line 1835: [IMSSH_CC_InviteSilentRetryTmrExpiry_Defaulthdlr] Grant is Requested as Timer Expired
Line 1863: In function IMSSH_CC_UssdInactivityTmrExpiry_Defaulthdlr
Line 1893: In function IMSSH_CC_LocationWaitTmrExpiry_Defaulthdlr
Line 1923: In function IMSSH_CC_RetryAfterTmrExpiry_defaultHdlr
Line 1949: In function IMSSH_CC_UpgradeWaitTimerExpiry_defaultHdlr
Line 1966: In function IMSSH_CC_DowngradeRetryTimerExpiry_defaultHdlr
Line 1987: In function IMSSH_CC_CallWaitingStatusInd_DefaultHdlr
Line 2004: In function IMSSH_CC_RtpTimeout_DefaultHdlr
Line 2022: In function IMSSH_CC_RtpTimeoutClear_DefaultHdlr
Line 2040: In function IMSSH_CC_MoRequestTimeoutTmrExpiry_defaultHdlr
Line 2058: PDelayTmrExpiry is expected in only Alerting state.
Line 2076: PQosTmrExpiry is expected in only Alerting state.
Line 2094: In function IMSSH_CC_PreAlertingTmrExpiry_defaultHdlr
Line 2112: In function IMSSH_CC_RtcpTimeout_DefaultHdlr
Line 2130: In function IMSSH_CC_RtcpTimeoutClear_DefaultHdlr
Line 2148: In function IMSSH_CC_ReinvPendingWait_TmrExpiry_defaultHdlr, no Handling
Line 2170: In function IMSSH_CC_CallClearTimerBTmrExpiry_DefaultHdlr
Line 2172: [ERR] 
Line 2184: [IMSSH_CC_CallClearTimerBTmrExpiry_DefaultHdlr] The call has been cleared by AP already
Line 2196: [IMSSH_CC_CallClearTimerBTmrExpiry_DefaultHdlr] Call ID is not valid, call has been cleared already
Line 2221: In function IMSSH_CC_RecoveryTmrExpiry_defaultHdlr
Line 2223: [ERR] 
Line 2252: IsEPSSilentRetry registry value[%d]
Line 2255: FB to LTE triggered. After FB is success, trigger the Invite Silent Retry
Line 2325: In function IMSSH_INT_CC_RRCStateInd_DefaultHdlr
Line 2329: APP ID [%d], AS state [%d]
Line 2354: Pending req [%d], EPSFB state [%d]
Line 2407: In function IMSSH_INT_CC_EpsFbPdnInfoInd_DefaultHdlr
Line 2413: [IMSSH_INT_CC_EpsFbPdnInfoInd_DefaultHdlr] AppId : %d, Context Id : %d
Line 2418: Alert>Failed to fetch pAppDb for AppId [%d]
Line 2425: Alert>Failed to fetch pCcDb for AppId [%d]
Line 2443: callId : %d, ccCallState : %d
Line 2455: VoNR -> CSFB should be Retry!!!
Line 2516: Event Ind not sent to CNS
Line 2553: Invalid CCM state
Line 2590: In function IMSSH_INT_CC_EpsFbRsp_DefaultHdlr
Line 2594: APP ID [%d], Status [%d]
Line 2608: IMSSHEPSFBState : %d
Line 2631: IMSSHEPSFBState : %d, Wait For Del PDN
Line 2663: IMSSHEPSFBState : %d, Wait For Del PDN
Line 2712: In function IMSSH_INT_CC_EpsFb_RatChange_DefaultHdlr
Line 2716: APP ID [%d]
Line 2737: EPSFB rat change happend during WPS call. Continue WPS call as a normal call.
Line 2772: In function IMSSH_INT_CC_RRCConnectionInd_DefaultHdlr
Line 2868: In function IMSSH_INT_CC_StackStopReq_DefaultHdlr
Line 2872: pStateInd->State[%d]
Line 2898: Wrong callId %d
Line 2907: [SRVCC] SID[%d], Call State [%s], pCallParam->CallDirection[%d]
Line 2964: In function IMSSH_CC_InviteReqFail_DefaultHdlr
Line 2970: Invite Fail: Callid %d cause %d
Line 2976: Transpor error .Clear the Call locally 
Line 2982: Invite sent failed Clear the Call locally  
Line 3003: In function IMSSH_CC_CancelReqFail_DefaultHdlr
Line 3030: In function IMSSH_CC_UpdateReqFail_DefaultHdlr
Line 3049: Invite sent fail: Callid %d cause %d, clear the call locally
Line 3093: In function IMSSH_CC_ByeReqFail_DefaultHdlr
Line 3110: In function IMSSH_CC_AckReqFail_DefaultHdlr
Line 3134: In function IMSSH_CC_SubscribeReqFail_DefaultHdlr
Line 3158: In function IMSSH_CC_ReferReqFail_DefaultHdlr
Line 3183: In function IMSSH_CC_NotifyRespFail_DefaultHdlr
Line 3213: In function IMSSH_CC_InviteRespFail_DefaultHdlr
Line 3223: Invite Fail: Callid %d cause %d
Line 3232: Invalid CalllParam %d Or CCDB is NULL
Line 3240: Timeout error. Sending BYE
Line 3247: Invite sent failed Clear the Call locally  
Line 3262: Setting Cause value to IMSSH_CC_NO_MAPPED_EPID in CCDB
Line 3300: In function IMSSH_CC_PrackReqFail_DefaultHdlr
Line 3310: PRACK Fail: Callid %d cause %d 
Line 3322: Ignore the Prack transmission failure after call is connected
Line 3357: In function IMSSH_CC_InfoReqFail_DefaultHdlr
Line 3363: INFO sent fail: Callid %d cause %d, clear the call locally
Line 3395: [ERR] 
Line 3411: [conf]Refer Cseq[%d], CallId[%d],SID[%d],IsValidCseq[%d]
Line 3422: Method Sent is Received for Subscribe means for Event->Subscribe For conference
Line 3477: In function IMSSH_CC_RevokeProcedure_DefaultHdlr
Line 3486: In function IMSSH_CC_Subscribe_2to6xx_DefaultHdlr
Line 3501: In function IMSSH_CC_NotifyRsp_2xx_DefaultHdlr
Line 3526: In function IMSSH_CC_NotifyRsp_3to6xx_DefaultHdlr
Line 3562: In function IMSSH_CC_InfoRsp_2to6xx_DefaultHdlr, Response [%d]
Line 3609: In function IMSSH_CC_PublishRsp_DefaultHdlr, Response [%d]
Line 3618: [IMSSH_CC_PublishRsp_DefaultHdlr] Expires Values [%d], Updated Expires Values [%d]
Line 3628: [IMSSH_CC_PublishRsp_DefaultHdlr] Etag Received: 
Line 3640: [IMSSH_CC_PublishRsp_DefaultHdlr] Etag Updated: 
Line 3670: In function IMSSH_CC_DialogEvtInd_DefaultHdlr
Line 3675: pDialogEvtNotify NULL
Line 3685: pCcDb is NULL
Line 3702: Failed to create dialog Info DB
Line 3732: pCcDb->numOfLines: [%d]
Line 3738: Failed to update dialog Info DB
Line 3808: [IMSSH_CC_DedBearerWaitTmrExpiry_DefaultHdlr] CallState [%d]
Line 3856: Already another transaction is ongoing. Wait for it to be completed.
Line 3860: No pending request. Or, Non RTT upgrade request is ignored.
Line 459: [IMSSH_CC_HandleRegIndRegistered] pAppDb is NULL!!!
Line 466: Allocating memory for the CCMainDb of the AppId[%d]
Line 471: Alert>Failed to fetch CC DB for App id [%d]
Line 511: Alert>Failed to update pPrefId for App id [%d]
Line 533: Call end condition [%d],RTT Call end condition [%d]
Line 538: AP RTP Stack is Initilised
Line 543: AP RTP Stack is not Initilised
Line 552: Alert>Failed to fetch CC DB for App id [%d]
Line 587: IMSSH_CC_HandleRegIndRegistered: Video calls are supported
Line 591: IMSSH_CC_HandleRegIndRegistered: Video calls are not supported
Line 597: Call pulling/One Talk supported
Line 602: Call pulling/One Talk disabled
Line 607: Call pulling/One Talk not supported
Line 617: IMSSH_CC_HandleRegIndRegistered: CD Status [%d] CD targetNum [%s]
Line 649: IMSSH_CC_HandleRegIndRegistered: In case of Non VZW operator, UE does not SUBSCRIBE for dialog event.
Line 373: In function IMSSH_DerivePPrefIdentity
Line 378: Alert>Failed to fetch CC DB for App id [%d]
Line 383: IMSSH_DerivePPrefIdentity - SH_PREF_PASSOC_URI:[%d]
Line 389: [Uri and Registration Based PASSOCURI matched
Line 421: Alert>Failed to update pPrefURI
Line 161: In function IMSSH_GetPPrefIdentityForEmc
Line 186: Alert>Memory Allocation failed for P-PreferredId URI
Line 225: In function IMSSH_GetPPrefIdentityForEmc: Updating PreferredID from VoLTE subscription
Line 233: Alert>Memory Allocation failed for P-PreferredId URI
Line 266: In function IMSSH_GetPPrefIdentityForEmc: emcRegType : %d
Line 273: Alert>Memory Allocation failed for P-PreferredId URI
Line 284: In function IMSSH_CC_RegInd_DefaultHdlr: Updating PreferredID from VoLTE subscription
Line 292: Alert>Memory Allocation failed for P-PreferredId URI
Line 317: In function IMSSH_CC_RegInd_DefaultHdlr: Updating PreferredID from VoLTE subscription
Line 327: Alert>Memory Allocation failed for P-PreferredId URI
Line 98: Alert> pAppDb / PpreferredId NULL
Line 691: Not Registered AppId : %d
Line 720: Alert>Failed to fetch CC DB for App id [%d]
Line 734: [IMSSH_CC_HandleRegIndDeregistered] In case of Dereg, Send EC Status as FALSE, to Terminate Dialog Subscription
Line 775: Freeing the CCMainDb of the AppId[%d]
