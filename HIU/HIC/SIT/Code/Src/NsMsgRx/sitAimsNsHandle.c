Line 99: [SIT_1_AIMS] Convert ANONY_REGISTERED_E911 -> REGISTERED_E911
Line 99: [SIT_0_AIMS] Convert ANONY_REGISTERED_E911 -> REGISTERED_E911
Line 105: [SIT_1_AIMS] sitSetImsRegistarationStatus,Regstate=%d --> ImsRegStatus=%d, ImsOnlyRegStatus=%d
Line 105: [SIT_0_AIMS] sitSetImsRegistarationStatus,Regstate=%d --> ImsRegStatus=%d, ImsOnlyRegStatus=%d
Line 110: [SIT_1_AIMS] [5GPM_SA] To clear IMS client due to SA_CTL_CLIENT_IMS is de-reg
Line 110: [SIT_0_AIMS] [5GPM_SA] To clear IMS client due to SA_CTL_CLIENT_IMS is de-reg
Line 117: [SIT_1_AIMS] [5GPM_SA_Deprio] To clear IMS client due to IMS is de-reg
Line 117: [SIT_0_AIMS] [5GPM_SA_Deprio] To clear IMS client due to IMS is de-reg
Line 147: [SIT_1_AIMS] IMS de-registration done, can be trigger detach request
Line 147: [SIT_0_AIMS] IMS de-registration done, can be trigger detach request
Line 155: [SIT_1_AIMS] IMS de-registration is delayed because of ongoing call, wait for call termination, ims dereg
Line 155: [SIT_0_AIMS] IMS de-registration is delayed because of ongoing call, wait for call termination, ims dereg
Line 175: [SIT_1_AIMS] Rx NS_IMSSH_FRAMETIME_GET_RSP (call Id=%d)
Line 175: [SIT_0_AIMS] Rx NS_IMSSH_FRAMETIME_GET_RSP (call Id=%d)
Line 193: [SIT_1_AIMS] Rx NS_AIMS_FRAMETIME_NTF (operation=%d, channel=%d, RTPtime=%d, NTP_LS=%d, NTP_MS=%d)
Line 193: [SIT_0_AIMS] Rx NS_AIMS_FRAMETIME_NTF (operation=%d, channel=%d, RTPtime=%d, NTP_LS=%d, NTP_MS=%d)
Line 218: [SIT_1_AIMS] sitRxNsAimsRejectInd: ucCallIndex > SIT_AIMS_CALL_MAX_ACTIVE_CALLS = %d, Sid = %d
Line 218: [SIT_0_AIMS] sitRxNsAimsRejectInd: ucCallIndex > SIT_AIMS_CALL_MAX_ACTIVE_CALLS = %d, Sid = %d
Line 231: [SIT_1_AIMS] sitRxNsAimsRejectInd:Sid %d got CallIndex = %d, FailCause = %d
Line 231: [SIT_0_AIMS] sitRxNsAimsRejectInd:Sid %d got CallIndex = %d, FailCause = %d
Line 263: [SIT_1_AIMS] NS_AIMS_REJECT_IND received in wrong state %d
Line 263: [SIT_0_AIMS] NS_AIMS_REJECT_IND received in wrong state %d
Line 285: [SIT_1_CALL] [EMC] IMS Call Failure? Expecting CS Redial
Line 285: [SIT_0_CALL] [EMC] IMS Call Failure? Expecting CS Redial
Line 311: [SIT_1_CALL] [EMC] IMS Call Failure? Expecting CS Redial
Line 311: [SIT_0_CALL] [EMC] IMS Call Failure? Expecting CS Redial
Line 345: [SIT_1_AIMS] sitRxNsAimsAlertInd: SID = %d
Line 345: [SIT_0_AIMS] sitRxNsAimsAlertInd: SID = %d
Line 351: [SIT_1_AIMS] sitRxNsAimsAlertInd: ucCallIndex > SIT_AIMS_CALL_MAX_ACTIVE_CALLS = %d, Sid = %d
Line 351: [SIT_0_AIMS] sitRxNsAimsAlertInd: ucCallIndex > SIT_AIMS_CALL_MAX_ACTIVE_CALLS = %d, Sid = %d
Line 358: [SIT_1_AIMS] sitRxNsAimsAlertInd: Sid = %d CallId = %d CallState = %d isCallWaiting = %d
Line 358: [SIT_0_AIMS] sitRxNsAimsAlertInd: Sid = %d CallId = %d CallState = %d isCallWaiting = %d
Line 386: [SIT_1_AIMS] ALERT_IND in wrong state,current state:%s
Line 386: [SIT_0_AIMS] ALERT_IND in wrong state,current state:%s
Line 405: [SIT_1_AIMS] sitRxNsAimsGeneralInfoInd: NsFeatType[%d]  NsFeatValue[0] = %d, Sid = %d
Line 405: [SIT_0_AIMS] sitRxNsAimsGeneralInfoInd: NsFeatType[%d]  NsFeatValue[0] = %d, Sid = %d
Line 414: [SIT_1_AIMS] sitRxNsAimsGeneralInfoInd: FeatType is NEWAUDIOPATH, And Action is MediaInit, Send AppId [%d]
Line 414: [SIT_0_AIMS] sitRxNsAimsGeneralInfoInd: FeatType is NEWAUDIOPATH, And Action is MediaInit, Send AppId [%d]
Line 418: [SIT_1_AIMS] sitRxNsAimsGeneralInfoInd: FeatType & Action is Valid : [%d]
Line 418: [SIT_0_AIMS] sitRxNsAimsGeneralInfoInd: FeatType & Action is Valid : [%d]
Line 422: [SIT_1_AIMS] sitRxNsAimsGeneralInfoInd: Call Id [%d], Sid [%d]
Line 422: [SIT_0_AIMS] sitRxNsAimsGeneralInfoInd: Call Id [%d], Sid [%d]
Line 426: [SIT_1_AIMS] sitRxNsAimsGeneralInfoInd: ucCallIndex > SIT_AIMS_CALL_MAX_ACTIVE_CALLS = %d, Sid = %d
Line 426: [SIT_0_AIMS] sitRxNsAimsGeneralInfoInd: ucCallIndex > SIT_AIMS_CALL_MAX_ACTIVE_CALLS = %d, Sid = %d
Line 430: [SIT_1_AIMS] sitRxNsAimsGeneralInfoInd: FeatType [%d], FeatLen [%d]
Line 430: [SIT_0_AIMS] sitRxNsAimsGeneralInfoInd: FeatType [%d], FeatLen [%d]
Line 446: [SIT_1_AIMS] sitRxNsAimsLrtsInd: Local Ringtone Status = %d (0 : stop, 1 : start)
Line 446: [SIT_0_AIMS] sitRxNsAimsLrtsInd: Local Ringtone Status = %d (0 : stop, 1 : start)
Line 497: [SIT_1_AIMS] sitRxNsSetupCnf: ConnectedLineId = %d CallDivertInd = %d ProgressDescription = %d
Line 497: [SIT_0_AIMS] sitRxNsSetupCnf: ConnectedLineId = %d CallDivertInd = %d ProgressDescription = %d
Line 503: [SIT_1_AIMS] sitRxNsAimsSetupCnf: ucCallIndex > SIT_AIMS_CALL_MAX_ACTIVE_CALLS = %d, Sid = %d
Line 503: [SIT_0_AIMS] sitRxNsAimsSetupCnf: ucCallIndex > SIT_AIMS_CALL_MAX_ACTIVE_CALLS = %d, Sid = %d
Line 509: [SIT_1_AIMS] sitRxNsAimsSetupCnf: Callcontext[%d]Sid:%d,CurrentCallState[%s]
Line 509: [SIT_0_AIMS] sitRxNsAimsSetupCnf: Callcontext[%d]Sid:%d,CurrentCallState[%s]
Line 548: [SIT_1_AIMS] sitRxNsAimsSetupCnf,TIP NumberLen(%d)
Line 548: [SIT_0_AIMS] sitRxNsAimsSetupCnf,TIP NumberLen(%d)
Line 552: [SIT_1_AIMS] sitRxNsAimsSetupCnf: remoteSupportedMedia[%d]
Line 552: [SIT_0_AIMS] sitRxNsAimsSetupCnf: remoteSupportedMedia[%d]
Line 568: [SIT_1_AIMS] MT CONNECT_CNF received in wrong call state :%s
Line 568: [SIT_0_AIMS] MT CONNECT_CNF received in wrong call state :%s
Line 591: [SIT_1_AIMS] sitRxNsAimsConnectCnf: ucCallIndex > SIT_AIMS_CALL_MAX_ACTIVE_CALLS = %d, Sid = %d
Line 591: [SIT_0_AIMS] sitRxNsAimsConnectCnf: ucCallIndex > SIT_AIMS_CALL_MAX_ACTIVE_CALLS = %d, Sid = %d
Line 597: [SIT_1_AIMS] sitRxNsAimsConnectCnf: Sid = %d CallId = %d CallState = %d
Line 597: [SIT_0_AIMS] sitRxNsAimsConnectCnf: Sid = %d CallId = %d CallState = %d
Line 607: [SIT_1_AIMS] MT CONNECT_CNF received in wrong state %d
Line 607: [SIT_0_AIMS] MT CONNECT_CNF received in wrong state %d
Line 663: [SIT_1_AIMS] sitRxNsAimsCallProceedInd: SID = %d, CF Status = %d
Line 663: [SIT_0_AIMS] sitRxNsAimsCallProceedInd: SID = %d, CF Status = %d
Line 669: [SIT_1_AIMS] sitRxAimsNsCallProceedInd: ucCallIndex > SIT_AIMS_CALL_MAX_ACTIVE_CALLS = %d, Sid = %d
Line 669: [SIT_0_AIMS] sitRxAimsNsCallProceedInd: ucCallIndex > SIT_AIMS_CALL_MAX_ACTIVE_CALLS = %d, Sid = %d
Line 674: [SIT_1_AIMS] sitRxNsAimsCallProceedInd: Current Call State %d
Line 674: [SIT_0_AIMS] sitRxNsAimsCallProceedInd: Current Call State %d
Line 677: [SIT_1_AIMS] sitRxNsAimsCallProceedInd: CallId = %d CallState %s
Line 677: [SIT_0_AIMS] sitRxNsAimsCallProceedInd: CallId = %d CallState %s
Line 681: [SIT_1_AIMS] CALL_PROC_IND in wrong state %s
Line 681: [SIT_0_AIMS] CALL_PROC_IND in wrong state %s
Line 693: [SIT_1_AIMS] sitRxNsAimsCallProceedInd: SIP Response Code = %d, ReasonHdrNum = %d
Line 693: [SIT_0_AIMS] sitRxNsAimsCallProceedInd: SIP Response Code = %d, ReasonHdrNum = %d
Line 748: [SIT_1_AIMS] Ns Call Type:%d, SIT Call Type:0x%x
Line 748: [SIT_0_AIMS] Ns Call Type:%d, SIT Call Type:0x%x
Line 768: [SIT_1_AIMS] sitRxNsAimsSetupInd: Session ID = %d
Line 768: [SIT_0_AIMS] sitRxNsAimsSetupInd: Session ID = %d
Line 774: [SIT_1_AIMS] sitRxNsAimsSetupInd: Invalid SIT Call Index
Line 774: [SIT_0_AIMS] sitRxNsAimsSetupInd: Invalid SIT Call Index
Line 779: [SIT_1_AIMS] sitRxNsAimsSetupInd: Call ID = %d
Line 779: [SIT_0_AIMS] sitRxNsAimsSetupInd: Call ID = %d
Line 785: [SIT_1_AIMS] CallContext[%d], NsCallType:%d
Line 785: [SIT_0_AIMS] CallContext[%d], NsCallType:%d
Line 789: [SIT_1_AIMS] This is CUG call, CUG call index:%d
Line 789: [SIT_0_AIMS] This is CUG call, CUG call index:%d
Line 806: [SIT_1_AIMS] sitRxNsAimsSetupInd:displayNameLen = %d
Line 806: [SIT_0_AIMS] sitRxNsAimsSetupInd:displayNameLen = %d
Line 816: [SIT_1_AIMS] sitRxNsAimsSetupInd:NumberLen = %d
Line 816: [SIT_0_AIMS] sitRxNsAimsSetupInd:NumberLen = %d
Line 820: [SIT_1_AIMS] sitRxNsAimsSetupInd:Received SDP Data Len = %d
Line 820: [SIT_0_AIMS] sitRxNsAimsSetupInd:Received SDP Data Len = %d
Line 854: [SIT_1_AIMS] [SIT_AIMS] MT CONF CALL flag is set
Line 854: [SIT_0_AIMS] [SIT_AIMS] MT CONF CALL flag is set
Line 859: [SIT_1_AIMS] sitRxNsAimsSetupInd: remoteSupportedMedia[%d], VCRTEnabled [%d],  PQosTmrVal[%d]
Line 859: [SIT_0_AIMS] sitRxNsAimsSetupInd: remoteSupportedMedia[%d], VCRTEnabled [%d],  PQosTmrVal[%d]
Line 964: [SIT_1_AIMS] sitMapNsEccCategory:NsEccCat:%d,SitEccCat:%d
Line 964: [SIT_0_AIMS] sitMapNsEccCategory:NsEccCat:%d,SitEccCat:%d
Line 994: [SIT_1_AIMS] sitRxNsAimsReleaseInd: ucCallIndex > SIT_AIMS_CALL_MAX_ACTIVE_CALLS = %d, Sid = %d
Line 994: [SIT_0_AIMS] sitRxNsAimsReleaseInd: ucCallIndex > SIT_AIMS_CALL_MAX_ACTIVE_CALLS = %d, Sid = %d
Line 1000: [SIT_1_AIMS] sitRxNsReleaseInd: Sid :%d CallId :%d CallState:[%s], SipErrRespCode:[%d]
Line 1000: [SIT_0_AIMS] sitRxNsReleaseInd: Sid :%d CallId :%d CallState:[%s], SipErrRespCode:[%d]
Line 1005: [SIT_1_AIMS] Call Release Cause:%d
Line 1005: [SIT_0_AIMS] Call Release Cause:%d
Line 1009: [SIT_1_AIMS] sitRxNsReleaseInd: pNsRelInd->Cause.DataPresent is not present
Line 1009: [SIT_0_AIMS] sitRxNsReleaseInd: pNsRelInd->Cause.DataPresent is not present
Line 1044: [SIT_1_CALL] [EMC] Emergency IMS call is cleared
Line 1044: [SIT_0_CALL] [EMC] Emergency IMS call is cleared
Line 1048: [SIT_1_CALL] [EMC] IMS Emergency Call is ended. Enter ECBM
Line 1048: [SIT_0_CALL] [EMC] IMS Emergency Call is ended. Enter ECBM
Line 1056: [SIT_1_CALL] [EMC] Expecting Redial over CS
Line 1056: [SIT_0_CALL] [EMC] Expecting Redial over CS
Line 1062: [SIT_1_CALL] [EMC] IMS Emergency Call is ended. ECBM is not supported.
Line 1062: [SIT_0_CALL] [EMC] IMS Emergency Call is ended. ECBM is not supported.
Line 1068: [SIT_1_CALL] [EMC] IMS Emergency Call was not ACTIVE
Line 1068: [SIT_0_CALL] [EMC] IMS Emergency Call was not ACTIVE
Line 1073: [SIT_1_CALL] [EMC] Hang up the IMS Emergency Call.
Line 1073: [SIT_0_CALL] [EMC] Hang up the IMS Emergency Call.
Line 1079: [SIT_1_CALL] [EMC] IMS Call Emergency Call Failure. SIP Error code (0x%x)
Line 1079: [SIT_0_CALL] [EMC] IMS Call Emergency Call Failure. SIP Error code (0x%x)
Line 1080: [SIT_1_CALL] [EMC] Cross stack Expired Timer Type %d
Line 1080: [SIT_0_CALL] [EMC] Cross stack Expired Timer Type %d
Line 1087: [SIT_1_CALL] [EMC] IMS Call Emergency Call Failure. IMS Cause (0x%x)
Line 1087: [SIT_0_CALL] [EMC] IMS Call Emergency Call Failure. IMS Cause (0x%x)
Line 1097: [SIT_1_CALL] [EMC] Expecting Redial over CS
Line 1097: [SIT_0_CALL] [EMC] Expecting Redial over CS
Line 1108: [SIT_1_CALL] [EMC] Expecting Redial over IMS
Line 1108: [SIT_0_CALL] [EMC] Expecting Redial over IMS
Line 1114: [SIT_1_CALL] [EMC] Not Expecting Redial over CS/Silent Redial. Clears up EMC mode
Line 1114: [SIT_0_CALL] [EMC] Not Expecting Redial over CS/Silent Redial. Clears up EMC mode
Line 1125: [SIT_1_CALL] [EMC] IMS Call Emergency Call Failure. SIP Error code (0x%x)
Line 1125: [SIT_0_CALL] [EMC] IMS Call Emergency Call Failure. SIP Error code (0x%x)
Line 1126: [SIT_1_CALL] [EMC] Cross stack Expired Timer Type %d
Line 1126: [SIT_0_CALL] [EMC] Cross stack Expired Timer Type %d
Line 1147: [SIT_1_AIMS] Skip sending CALL_STATUS_NTF of participant call
Line 1147: [SIT_0_AIMS] Skip sending CALL_STATUS_NTF of participant call
Line 1164: [SIT_1_AIMS] [EMC] Invalid Emergency Subservice String Length (%d, 0x%x)
Line 1164: [SIT_0_AIMS] [EMC] Invalid Emergency Subservice String Length (%d, 0x%x)
Line 1174: [SIT_1_AIMS] [SIT_CallMetric] EmcLocationStatus [%d], Latency [%d]
Line 1174: [SIT_0_AIMS] [SIT_CallMetric] EmcLocationStatus [%d], Latency [%d]
Line 1177: [SIT_1_AIMS] [SIT_CallMetric] callMetric->TimerStatus[%d] = [%d]
Line 1177: [SIT_0_AIMS] [SIT_CallMetric] callMetric->TimerStatus[%d] = [%d]
Line 1190: [SIT_1_AIMS] sitRxNsAimsReleaseInd:NumberLen = %d
Line 1190: [SIT_0_AIMS] sitRxNsAimsReleaseInd:NumberLen = %d
Line 1267: [SIT_1_AIMS] Restart Network after IMS call release due to NS_REJECT_RESET_IND.
Line 1267: [SIT_0_AIMS] Restart Network after IMS call release due to NS_REJECT_RESET_IND.
Line 1303: [SIT_1_AIMS] sitRxNsAimsHoldRsp: CallId(%d) >= SIT_AIMS_CALL_MAX_ACTIVE_CALLS
Line 1303: [SIT_0_AIMS] sitRxNsAimsHoldRsp: CallId(%d) >= SIT_AIMS_CALL_MAX_ACTIVE_CALLS
Line 1308: [SIT_1_AIMS] NS_AIMS_HOLD_RSP, Sid:%d,Call ID: %d
Line 1308: [SIT_0_AIMS] NS_AIMS_HOLD_RSP, Sid:%d,Call ID: %d
Line 1316: [SIT_1_AIMS] AIMS_CALL_HOLD SUCCESS
Line 1316: [SIT_0_AIMS] AIMS_CALL_HOLD SUCCESS
Line 1323: [SIT_1_AIMS] NS_AIMS_HOLD_RSP,SdpLen:%d
Line 1323: [SIT_0_AIMS] NS_AIMS_HOLD_RSP,SdpLen:%d
Line 1334: [SIT_1_AIMS] NS_AIMS_HOLD_RSP received in wrong state:%d
Line 1334: [SIT_0_AIMS] NS_AIMS_HOLD_RSP received in wrong state:%d
Line 1341: [SIT_1_AIMS] AIMS_CALL_HOLD FAIL
Line 1341: [SIT_0_AIMS] AIMS_CALL_HOLD FAIL
Line 1364: [SIT_1_AIMS] NS_AIMS_RETRIEVE_RSP,NsSid:%d,CallId:%d
Line 1364: [SIT_0_AIMS] NS_AIMS_RETRIEVE_RSP,NsSid:%d,CallId:%d
Line 1368: [SIT_1_AIMS] sitRxNsAimsRetrieveRsp: CallIndex >= SIT_AIMS_CALL_MAX_ACTIVE_CALLS %d
Line 1368: [SIT_0_AIMS] sitRxNsAimsRetrieveRsp: CallIndex >= SIT_AIMS_CALL_MAX_ACTIVE_CALLS %d
Line 1382: [SIT_1_AIMS] AIMS_CALL_RETRIEVE SUCCESS,SdpLen:%d
Line 1382: [SIT_0_AIMS] AIMS_CALL_RETRIEVE SUCCESS,SdpLen:%d
Line 1395: [SIT_1_AIMS] NS_RETRIEVE_RSP received in wrong state:%s
Line 1395: [SIT_0_AIMS] NS_RETRIEVE_RSP received in wrong state:%s
Line 1402: [SIT_1_AIMS] RETRIEVE REJECT
Line 1402: [SIT_0_AIMS] RETRIEVE REJECT
Line 1422: [SIT_1_AIMS] sitRxNsAimsSsInd Call Id = %d, SID = %d
Line 1422: [SIT_0_AIMS] sitRxNsAimsSsInd Call Id = %d, SID = %d
Line 1426: [SIT_1_AIMS] sitRxNsAimsSsInd: CallIndex >= SIT_AIMS_CALL_MAX_ACTIVE_CALLS %d
Line 1426: [SIT_0_AIMS] sitRxNsAimsSsInd: CallIndex >= SIT_AIMS_CALL_MAX_ACTIVE_CALLS %d
Line 1432: [SIT_1_AIMS] sitRxNsAimsSsInd: Invalid Call Index = %d
Line 1432: [SIT_0_AIMS] sitRxNsAimsSsInd: Invalid Call Index = %d
Line 1438: [SIT_1_AIMS] sitRxNsAimsSsInd:Received SDP Data Len = %d
Line 1438: [SIT_0_AIMS] sitRxNsAimsSsInd:Received SDP Data Len = %d
Line 1446: [SIT_1_AIMS] Call Hold Notification
Line 1446: [SIT_0_AIMS] Call Hold Notification
Line 1460: [SIT_1_AIMS] Call Retrieve Notification
Line 1460: [SIT_0_AIMS] Call Retrieve Notification
Line 1489: [SIT_1_AIMS] sitRxNsStartAimsDtmfRsp: NS_SERVICE_ACK
Line 1489: [SIT_0_AIMS] sitRxNsStartAimsDtmfRsp: NS_SERVICE_ACK
Line 1494: [SIT_1_AIMS] sitRxNsStartAimsDtmfRsp: NS_SERVICE_REJ
Line 1494: [SIT_0_AIMS] sitRxNsStartAimsDtmfRsp: NS_SERVICE_REJ
Line 1514: [SIT_1_AIMS] sitRxNsAimsUSSDInfoInd Call Id = %d, SID = %d
Line 1514: [SIT_0_AIMS] sitRxNsAimsUSSDInfoInd Call Id = %d, SID = %d
Line 1518: [SIT_1_AIMS] sitRxNsAimsUSSDInfoInd: CallIndex >= SIT_AIMS_CALL_MAX_ACTIVE_CALLS %d
Line 1518: [SIT_0_AIMS] sitRxNsAimsUSSDInfoInd: CallIndex >= SIT_AIMS_CALL_MAX_ACTIVE_CALLS %d
Line 1524: [SIT_1_AIMS] sitRxNsAimsUSSDInfoInd: Invalid Call type %d Call Index: %d
Line 1524: [SIT_0_AIMS] sitRxNsAimsUSSDInfoInd: Invalid Call type %d Call Index: %d
Line 1528: [SIT_1_AIMS] sitRxNsAimsUSSDInfoInd:- Information Display
Line 1528: [SIT_0_AIMS] sitRxNsAimsUSSDInfoInd:- Information Display
Line 1545: [SIT_1_AIMS] sitRxNsAimsDtmfEventInd : Sid: 0x%x channel: 0x%x event: 0x%x volume: 0x%x duration: 0x%x endbit: 0x%x
Line 1545: [SIT_0_AIMS] sitRxNsAimsDtmfEventInd : Sid: 0x%x channel: 0x%x event: 0x%x volume: 0x%x duration: 0x%x endbit: 0x%x
Line 1692: [SIT_1_AIMS] sitRxNsAimsAddUserRsp,Invalid Sid(%d) from NS
Line 1692: [SIT_0_AIMS] sitRxNsAimsAddUserRsp,Invalid Sid(%d) from NS
Line 1700: [SIT_1_AIMS] sitRxNsAimsAddUserRsp,ConfOwnerCallId:%d,Sid:%d
Line 1700: [SIT_0_AIMS] sitRxNsAimsAddUserRsp,ConfOwnerCallId:%d,Sid:%d
Line 1712: [SIT_1_AIMS] sitRxNsAimsAddUserRsp:Result is NS_SERVICE_REJ
Line 1712: [SIT_0_AIMS] sitRxNsAimsAddUserRsp:Result is NS_SERVICE_REJ
Line 1718: [SIT_1_AIMS] Respone is for a NON-CONFERENCE call with Sid :%d and CallId:%d
Line 1718: [SIT_0_AIMS] Respone is for a NON-CONFERENCE call with Sid :%d and CallId:%d
Line 1738: [SIT_1_AIMS] sitRxNsAimsEnhancedConfRsp,Invalid Sid(%d) from NS
Line 1738: [SIT_0_AIMS] sitRxNsAimsEnhancedConfRsp,Invalid Sid(%d) from NS
Line 1746: [SIT_1_AIMS] sitRxNsAimsEnhancedConfRsp,ConfOwnerCallId:%d,Sid:%d
Line 1746: [SIT_0_AIMS] sitRxNsAimsEnhancedConfRsp,ConfOwnerCallId:%d,Sid:%d
Line 1758: [SIT_1_AIMS] sitRxNsAimsEnhancedConfRsp:Result is NS_SERVICE_REJ
Line 1758: [SIT_0_AIMS] sitRxNsAimsEnhancedConfRsp:Result is NS_SERVICE_REJ
Line 1764: [SIT_1_AIMS] Respone is for a NON-CONFERENCE call with Sid :%d and CallId:%d
Line 1764: [SIT_0_AIMS] Respone is for a NON-CONFERENCE call with Sid :%d and CallId:%d
Line 1784: [SIT_1_AIMS] sitRxNsAimsNotifyInd,Invalid Sid(%d) from NS
Line 1784: [SIT_0_AIMS] sitRxNsAimsNotifyInd,Invalid Sid(%d) from NS
Line 1791: [SIT_1_AIMS] sitRxNsAimsNotifyInd,ConfCallownerId:%d,Sid:%d
Line 1791: [SIT_0_AIMS] sitRxNsAimsNotifyInd,ConfCallownerId:%d,Sid:%d
Line 1794: [SIT_1_AIMS] sitRxNsAimsNotifyInd:Invalid Conference Call data from NS
Line 1794: [SIT_0_AIMS] sitRxNsAimsNotifyInd:Invalid Conference Call data from NS
Line 1801: [SIT_1_AIMS] Respone is for a NON-CONFERENCE call with Sid :%d and CallId:%d
Line 1801: [SIT_0_AIMS] Respone is for a NON-CONFERENCE call with Sid :%d and CallId:%d
Line 1821: [SIT_1_AIMS] sitRxNsAimsMultiPartyRsp:LastMptyCallCommand is NULL
Line 1821: [SIT_0_AIMS] sitRxNsAimsMultiPartyRsp:LastMptyCallCommand is NULL
Line 1828: [SIT_1_AIMS] sitRxNsAimsMultiPartyRsp:Invalid SId from NS,Sid:%d
Line 1828: [SIT_0_AIMS] sitRxNsAimsMultiPartyRsp:Invalid SId from NS,Sid:%d
Line 1846: [SIT_1_AIMS] sitRxNsAimsMultiPartyRsp:Build MPTY call
Line 1846: [SIT_0_AIMS] sitRxNsAimsMultiPartyRsp:Build MPTY call
Line 1853: [SIT_1_AIMS] sitRxNsAimsMultiPartyRsp:Build MPTY call,SdpLen:%d
Line 1853: [SIT_0_AIMS] sitRxNsAimsMultiPartyRsp:Build MPTY call,SdpLen:%d
Line 1864: [SIT_1_AIMS] sitRxNsAimsMultiPartyRsp:Hold MPTY call
Line 1864: [SIT_0_AIMS] sitRxNsAimsMultiPartyRsp:Hold MPTY call
Line 1885: [SIT_1_AIMS] sitRxNsAimsMultiPartyRsp:Retrieve MPTY call
Line 1885: [SIT_0_AIMS] sitRxNsAimsMultiPartyRsp:Retrieve MPTY call
Line 1907: [SIT_1_AIMS] Unsupported or Invalid MPTY call command(%d)
Line 1907: [SIT_0_AIMS] Unsupported or Invalid MPTY call command(%d)
Line 1916: [SIT_1_AIMS] Result(%d):NS_SERVICE_REJ
Line 1916: [SIT_0_AIMS] Result(%d):NS_SERVICE_REJ
Line 1929: [SIT_1_AIMS] Unsupported or Invalid MPTY call command(%d)
Line 1929: [SIT_0_AIMS] Unsupported or Invalid MPTY call command(%d)
Line 1946: [SIT_1_AIMS] Respone is for a NON-CONFERENCE call with Sid :%d and CallId:%d
Line 1946: [SIT_0_AIMS] Respone is for a NON-CONFERENCE call with Sid :%d and CallId:%d
Line 1966: [SIT_1_AIMS] sitRxNsAimsRemoveUserRsp,Invalid Sid(%d) from NS
Line 1966: [SIT_0_AIMS] sitRxNsAimsRemoveUserRsp,Invalid Sid(%d) from NS
Line 1974: [SIT_1_AIMS] sitRxNsAimsRemoveUserRsp,ConfOwnerCallId:%d,Sid:%d
Line 1974: [SIT_0_AIMS] sitRxNsAimsRemoveUserRsp,ConfOwnerCallId:%d,Sid:%d
Line 1986: [SIT_1_AIMS] sitRxNsAimsAddUserRsp:Result is NS_SERVICE_REJ
Line 1986: [SIT_0_AIMS] sitRxNsAimsAddUserRsp:Result is NS_SERVICE_REJ
Line 1992: [SIT_1_AIMS] Respone is for a NON-CONFERENCE call with Sid :%d and CallId:%d
Line 1992: [SIT_0_AIMS] Respone is for a NON-CONFERENCE call with Sid :%d and CallId:%d
Line 2029: [SIT_1_AIMS] sitPopulateAimsCallForwardStatus: CallerStatus %d, CallerStatusId %d TargetStatusId %d UserIdToCallerStatus %d
Line 2029: [SIT_0_AIMS] sitPopulateAimsCallForwardStatus: CallerStatus %d, CallerStatusId %d TargetStatusId %d UserIdToCallerStatus %d
Line 2032: [SIT_1_AIMS] CallForwardNumLength = %d
Line 2032: [SIT_0_AIMS] CallForwardNumLength = %d
Line 2033: [SIT_1_AIMS] [NS]CallForwardNum
Line 2033: [SIT_0_AIMS] [NS]CallForwardNum
Line 2038: [SIT_1_AIMS] [SIT]CallForwardNum
Line 2038: [SIT_0_AIMS] [SIT]CallForwardNum
Line 2041: [SIT_1_AIMS] sitPopulateAimsCallForwardStatus:Received  Start Hour %d, Start Minute  %d End Hour %d End Minute %d
Line 2041: [SIT_0_AIMS] sitPopulateAimsCallForwardStatus:Received  Start Hour %d, Start Minute  %d End Hour %d End Minute %d
Line 2050: [SIT_1_AIMS] sitPopulateAimsCallForwardStatus: Start Hour %d, Start Minute  %d End Hour %d End Minute %d
Line 2050: [SIT_0_AIMS] sitPopulateAimsCallForwardStatus: Start Hour %d, Start Minute  %d End Hour %d End Minute %d
Line 2087: [SIT_1_AIMS] sitRxNsAimsCallForwardStatusRsp:- CFU status
Line 2087: [SIT_0_AIMS] sitRxNsAimsCallForwardStatusRsp:- CFU status
Line 2091: [SIT_1_AIMS] sitRxNsAimsCallForwardStatusRsp:- CFB status
Line 2091: [SIT_0_AIMS] sitRxNsAimsCallForwardStatusRsp:- CFB status
Line 2095: [SIT_1_AIMS] sitRxNsAimsCallForwardStatusRsp:- CFNR status
Line 2095: [SIT_0_AIMS] sitRxNsAimsCallForwardStatusRsp:- CFNR status
Line 2099: [SIT_1_AIMS] sitRxNsAimsCallForwardStatusRsp:- CFNRc status
Line 2099: [SIT_0_AIMS] sitRxNsAimsCallForwardStatusRsp:- CFNRc status
Line 2103: [SIT_1_AIMS] sitRxNsAimsCallForwardStatusRsp:- CFNL status
Line 2103: [SIT_0_AIMS] sitRxNsAimsCallForwardStatusRsp:- CFNL status
Line 2181: [SIT_1_AIMS] ErrorCode:%d, retryTimerValue: %d
Line 2181: [SIT_0_AIMS] ErrorCode:%d, retryTimerValue: %d
Line 2187: [SIT_1_AIMS] Invalid error code received from stack: %d 
Line 2187: [SIT_0_AIMS] Invalid error code received from stack: %d 
Line 2238: [SIT_1_AIMS] Error code NS_FDN_CHECK_FAIL from stack: %d
Line 2238: [SIT_0_AIMS] Error code NS_FDN_CHECK_FAIL from stack: %d
Line 2243: [SIT_1_AIMS] Invalid error code received from stack: %d
Line 2243: [SIT_0_AIMS] Invalid error code received from stack: %d
Line 2266: [SIT_1_AIMS] Error code NS_FDN_CHECK_FAIL from stack: %d
Line 2266: [SIT_0_AIMS] Error code NS_FDN_CHECK_FAIL from stack: %d
Line 2271: [SIT_1_AIMS] Invalid error code received from stack: %d
Line 2271: [SIT_0_AIMS] Invalid error code received from stack: %d
Line 2301: [SIT_1_AIMS] NS_AIMS_CALL_WAITING_STATUS_RSP,No.of Call Waiting Records:%d
Line 2301: [SIT_0_AIMS] NS_AIMS_CALL_WAITING_STATUS_RSP,No.of Call Waiting Records:%d
Line 2305: [SIT_1_AIMS] ------------Record No:%d-----------
Line 2305: [SIT_0_AIMS] ------------Record No:%d-----------
Line 2313: [SIT_1_AIMS] Call Waiting is active for Service Class:%d
Line 2313: [SIT_0_AIMS] Call Waiting is active for Service Class:%d
Line 2320: [SIT_1_AIMS] Invalid Call Waiting Status
Line 2320: [SIT_0_AIMS] Invalid Call Waiting Status
Line 2343: [SIT_1_AIMS] Error code NS_FDN_CHECK_FAIL from stack: %d
Line 2343: [SIT_0_AIMS] Error code NS_FDN_CHECK_FAIL from stack: %d
Line 2348: [SIT_1_AIMS] Invalid error code received from stack: %d
Line 2348: [SIT_0_AIMS] Invalid error code received from stack: %d
Line 2371: [SIT_1_AIMS] Error code NS_FDN_CHECK_FAIL from stack: %d
Line 2371: [SIT_0_AIMS] Error code NS_FDN_CHECK_FAIL from stack: %d
Line 2376: [SIT_1_AIMS] Invalid error code received from stack: %d
Line 2376: [SIT_0_AIMS] Invalid error code received from stack: %d
Line 2399: [SIT_1_AIMS] Error code NS_FDN_CHECK_FAIL from stack: %d
Line 2399: [SIT_0_AIMS] Error code NS_FDN_CHECK_FAIL from stack: %d
Line 2404: [SIT_1_AIMS] Invalid error code received from stack: %d
Line 2404: [SIT_0_AIMS] Invalid error code received from stack: %d
Line 2497: [SIT_1_AIMS] Error code NS_FDN_CHECK_FAIL from stack: %d
Line 2497: [SIT_0_AIMS] Error code NS_FDN_CHECK_FAIL from stack: %d
Line 2502: [SIT_1_AIMS] Invalid error code received from stack: %d
Line 2502: [SIT_0_AIMS] Invalid error code received from stack: %d
Line 2525: [SIT_1_AIMS] Error code NS_FDN_CHECK_FAIL from stack: %d
Line 2525: [SIT_0_AIMS] Error code NS_FDN_CHECK_FAIL from stack: %d
Line 2530: [SIT_1_AIMS] Invalid error code received from stack: %d
Line 2530: [SIT_0_AIMS] Invalid error code received from stack: %d
Line 2553: [SIT_1_AIMS] Error code NS_FDN_CHECK_FAIL from stack: %d
Line 2553: [SIT_0_AIMS] Error code NS_FDN_CHECK_FAIL from stack: %d
Line 2558: [SIT_1_AIMS] Invalid error code received from stack: %d
Line 2558: [SIT_0_AIMS] Invalid error code received from stack: %d
Line 2595: [SIT_1_AIMS] Error code NS_FDN_CHECK_FAIL from stack: %d
Line 2595: [SIT_0_AIMS] Error code NS_FDN_CHECK_FAIL from stack: %d
Line 2600: [SIT_1_AIMS] Invalid error code received from stack: %d
Line 2600: [SIT_0_AIMS] Invalid error code received from stack: %d
Line 2618: [SIT_1_AIMS] sitRxNsAimsCLIStatusRsp:command:%d,Status:%d,ClirOption:%d,ColrOption:%d
Line 2618: [SIT_0_AIMS] sitRxNsAimsCLIStatusRsp:command:%d,Status:%d,ClirOption:%d,ColrOption:%d
Line 2636: [SIT_1_AIMS] sitRxNsAimsCLISetErr:Command:%d,ErrorCode:%d,TimerValue:%d
Line 2636: [SIT_0_AIMS] sitRxNsAimsCLISetErr:Command:%d,ErrorCode:%d,TimerValue:%d
Line 2653: [SIT_1_AIMS] sitRxNsAimsCLIGetErr:Command:%d,ErrorCode:%d,TimerValue:%d
Line 2653: [SIT_0_AIMS] sitRxNsAimsCLIGetErr:Command:%d,ErrorCode:%d,TimerValue:%d
Line 2686: [SIT_1_AIMS] sitRxNsAimsModifyInd,Sid:%d
Line 2686: [SIT_0_AIMS] sitRxNsAimsModifyInd,Sid:%d
Line 2690: [SIT_1_AIMS] sitRxNsAimsModifyInd: ucCallIndex > SIT_AIMS_CALL_MAX_ACTIVE_CALLS = %d, Sid = %d
Line 2690: [SIT_0_AIMS] sitRxNsAimsModifyInd: ucCallIndex > SIT_AIMS_CALL_MAX_ACTIVE_CALLS = %d, Sid = %d
Line 2720: [SIT_1_AIMS] sitRxNsAimsModifyConfirmInd, Sid:%d
Line 2720: [SIT_0_AIMS] sitRxNsAimsModifyConfirmInd, Sid:%d
Line 2725: [SIT_1_AIMS] sitRxNsAimsModifyConfirmInd: ucCallIndex > SIT_AIMS_CALL_MAX_ACTIVE_CALLS = %d, Sid = %d
Line 2725: [SIT_0_AIMS] sitRxNsAimsModifyConfirmInd: ucCallIndex > SIT_AIMS_CALL_MAX_ACTIVE_CALLS = %d, Sid = %d
Line 2755: [SIT_1_AIMS] sitRxNsAimsModifyRejectInd,Sid:%d
Line 2755: [SIT_0_AIMS] sitRxNsAimsModifyRejectInd,Sid:%d
Line 2760: [SIT_1_AIMS] sitRxNsAimsModifyConfirmInd: ucCallIndex > SIT_AIMS_CALL_MAX_ACTIVE_CALLS = %d, Sid = %d
Line 2760: [SIT_0_AIMS] sitRxNsAimsModifyConfirmInd: ucCallIndex > SIT_AIMS_CALL_MAX_ACTIVE_CALLS = %d, Sid = %d
Line 2854: [SIT_1_AIMS]  Hidden Menu Data is present at SIT. Sending Hidden menu to NS
Line 2854: [SIT_0_AIMS]  Hidden Menu Data is present at SIT. Sending Hidden menu to NS
Line 2859: [SIT_1_AIMS]  Hidden Menu Data is not present at SIT. Data will be sent when received from AP
Line 2859: [SIT_0_AIMS]  Hidden Menu Data is not present at SIT. Data will be sent when received from AP
Line 2875: [SIT_1_AIMS] sitRxNsMtCdmaSmsInd:Sid:%d,MsgType:%d,BearerDataLen:%d
Line 2875: [SIT_0_AIMS] sitRxNsMtCdmaSmsInd:Sid:%d,MsgType:%d,BearerDataLen:%d
Line 2879: [SIT_1_AIMS] Sid is already allocated,Received another sms before sending Ack of previous one!!
Line 2879: [SIT_0_AIMS] Sid is already allocated,Received another sms before sending Ack of previous one!!
Line 2898: [SIT_1_AIMS] sitRxNsCdmaSmsFailInd:Sid:%d
Line 2898: [SIT_0_AIMS] sitRxNsCdmaSmsFailInd:Sid:%d
Line 2916: [SIT_1_SMS] sitRxNsAimsCdmaSmsSendRsp (MsgRef(%d),ErrorClass(%d),CauseCode(%d)
Line 2916: [SIT_0_SMS] sitRxNsAimsCdmaSmsSendRsp (MsgRef(%d),ErrorClass(%d),CauseCode(%d)
Line 2935: [SIT_1_AIMS] sitRxAimsDialogInfoInd:dialogCount:%d
Line 2935: [SIT_0_AIMS] sitRxAimsDialogInfoInd:dialogCount:%d
Line 2953: [SIT_1_AIMS] sitRxNsAimsRcsCommonRsp:RCM Group Id:%d, Length:%d
Line 2953: [SIT_0_AIMS] sitRxNsAimsRcsCommonRsp:RCM Group Id:%d, Length:%d
Line 2996: [SIT_1_AIMS] Invalid RCM Group ID
Line 2996: [SIT_0_AIMS] Invalid RCM Group ID
Line 3013: [SIT_1_AIMS] sitRxNsAimsRcsCommonInd:RCM Group Id:%d, Length:%d
Line 3013: [SIT_0_AIMS] sitRxNsAimsRcsCommonInd:RCM Group Id:%d, Length:%d
Line 3056: [SIT_1_AIMS] Invalid RCM Group ID
Line 3056: [SIT_0_AIMS] Invalid RCM Group ID
Line 3076: [SIT_1_AIMS] sitRxAimsMWIInfoInd:msgLen:%d
Line 3076: [SIT_0_AIMS] sitRxAimsMWIInfoInd:msgLen:%d
Line 3094: [SIT_1_AIMS] sitRxAimsIsimFileChangeInd: fileBitmask: %x
Line 3094: [SIT_0_AIMS] sitRxAimsIsimFileChangeInd: fileBitmask: %x
Line 3111: [SIT_1_AIMS] sitRxNsAimsRttNewTextInd: Sid: %d, textDataLength: %d
Line 3111: [SIT_0_AIMS] sitRxNsAimsRttNewTextInd: Sid: %d, textDataLength: %d
Line 3123: [SIT_1_AIMS] sitRxNsAimsRttFailSendingTextInd: Sid: %d, Cause: %d
Line 3123: [SIT_0_AIMS] sitRxNsAimsRttFailSendingTextInd: Sid: %d, Cause: %d
Line 3163: [SIT_1_AIMS] Rx NS_AIMS_VOICE_RTP_QUALITY_IND (SID=%d, RTP inactivity detected=%d, Rx silence detected=%d, Tx silence detected=%d)
Line 3163: [SIT_0_AIMS] Rx NS_AIMS_VOICE_RTP_QUALITY_IND (SID=%d, RTP inactivity detected=%d, Rx silence detected=%d, Tx silence detected=%d)
Line 3167: [SIT_1_AIMS] Suppressed, Don't Send SIT_IND_AIMS_VOICE_RTP_QUALITY
Line 3167: [SIT_0_AIMS] Suppressed, Don't Send SIT_IND_AIMS_VOICE_RTP_QUALITY
Line 3202: [SIT_1_AIMS] Rx NS_AIMS_CODEC_INFO_NTF (Sid=%d, AudioCodec=%d)
Line 3202: [SIT_0_AIMS] Rx NS_AIMS_CODEC_INFO_NTF (Sid=%d, AudioCodec=%d)
Line 3230: [SIT_1_AIMS] Rx NS_AIMS_EXPIRE_INFO_IND (Type=%d(1:registration, 2:subscribe), Value=%d)
Line 3230: [SIT_0_AIMS] Rx NS_AIMS_EXPIRE_INFO_IND (Type=%d(1:registration, 2:subscribe), Value=%d)
Line 3234: [SIT_1_AIMS] Invalid expire type
Line 3234: [SIT_0_AIMS] Invalid expire type
Line 3389: [SIT_1_AIMS] sitRxNsAimsDroppedMtCallInd : callId: 0x%x CallEndBeforeRingReason: %d
Line 3389: [SIT_0_AIMS] sitRxNsAimsDroppedMtCallInd : callId: 0x%x CallEndBeforeRingReason: %d
Line 3413: [SIT_1_AIMS] Rx NS_AIMS_RTP_HEADER_EXTENSION_TYPE_IND (Sid=%d, Data cnt=%d)
Line 3413: [SIT_0_AIMS] Rx NS_AIMS_RTP_HEADER_EXTENSION_TYPE_IND (Sid=%d, Data cnt=%d)
Line 3422: [SIT_1_AIMS] ID=%d, Length=%d
Line 3422: [SIT_0_AIMS] ID=%d, Length=%d
Line 3423: [SIT_1_AIMS] Data
Line 3423: [SIT_0_AIMS] Data
Line 3445: [SIT_1_AIMS] Rx NS_AIMS_RTP_HEADER_EXTENSION_IND (Sid=%d, Data cnt=%d)
Line 3445: [SIT_0_AIMS] Rx NS_AIMS_RTP_HEADER_EXTENSION_IND (Sid=%d, Data cnt=%d)
Line 3454: [SIT_1_AIMS] ID=%d, Length=%d
Line 3454: [SIT_0_AIMS] ID=%d, Length=%d
Line 3455: [SIT_1_AIMS] Data
Line 3455: [SIT_0_AIMS] Data
Line 3491: [SIT_1_NET] [5GPM_SA_Deprio] LTEPREF_CTL_CLIENT_IMS request mode %d
Line 3491: [SIT_0_NET] [5GPM_SA_Deprio] LTEPREF_CTL_CLIENT_IMS request mode %d
Line 3496: [SIT_1_NET] [5GPM_SA_Deprio] Depriortize NR SA (%d)
Line 3496: [SIT_0_NET] [5GPM_SA_Deprio] Depriortize NR SA (%d)
Line 3502: [SIT_1_NET] Depriortize NR SA (%d)
Line 3502: [SIT_0_NET] Depriortize NR SA (%d)
Line 3527: [SIT_1_NET] [5GPM_SA] SA_CTL_CLIENT_IMS SA change request
Line 3527: [SIT_0_NET] [5GPM_SA] SA_CTL_CLIENT_IMS SA change request
Line 3530: [SIT_1_NET] [5GPM_SA] NR disable due to VOWIFI is started, Mode update triggered
Line 3530: [SIT_0_NET] [5GPM_SA] NR disable due to VOWIFI is started, Mode update triggered
Line 3533: [SIT_1_NET] [5GPM_SA][sitSaCtlClientUpdate] IMS disabled SA; Evaluate buffered request
Line 3533: [SIT_0_NET] [5GPM_SA][sitSaCtlClientUpdate] IMS disabled SA; Evaluate buffered request
Line 3546: [SIT_1_NET]  NR disable due to VOWIFI is started, Mode update triggered
Line 3546: [SIT_0_NET]  NR disable due to VOWIFI is started, Mode update triggered
Line 3564: [SIT_1_NET] [5GPM_SA] SA_CTL_CLIENT_IMS SA change request
Line 3564: [SIT_0_NET] [5GPM_SA] SA_CTL_CLIENT_IMS SA change request
Line 3567: [SIT_1_NET] [5GPM_SA] NR Enable due to VOWIFI is terminated, Mode update triggered
Line 3567: [SIT_0_NET] [5GPM_SA] NR Enable due to VOWIFI is terminated, Mode update triggered
Line 3576: [SIT_1_NET]  NR Enable due to VOWIFI is terminated, Mode update triggered
Line 3576: [SIT_0_NET]  NR Enable due to VOWIFI is terminated, Mode update triggered
Line 462: [SIT_1_AIMS] sitAimsCallUpdateSdpInfo, SdpLen:%d, call_id: %d
Line 462: [SIT_0_AIMS] sitAimsCallUpdateSdpInfo, SdpLen:%d, call_id: %d
Line 478: [SIT_1_AIMS] sitAimsCallUpdateSdpInfo, SdpLen(%d)>SIT_AIMS_CALL_SDP_LEN_MAX
Line 478: [SIT_0_AIMS] sitAimsCallUpdateSdpInfo, SdpLen(%d)>SIT_AIMS_CALL_SDP_LEN_MAX
Line 1637: [SIT_1_AIMS] sitAimsUpdateConfCallParticipantsContext:NoOfUsers:%d
Line 1637: [SIT_0_AIMS] sitAimsUpdateConfCallParticipantsContext:NoOfUsers:%d
Line 1643: [SIT_1_AIMS] NS Sid:%d,SIT CallId:%d
Line 1643: [SIT_0_AIMS] NS Sid:%d,SIT CallId:%d
Line 1667: [SIT_1_AIMS] Invalid Sid(%d) from NS
Line 1667: [SIT_0_AIMS] Invalid Sid(%d) from NS
Line 1615: [SIT_1_AIMS] sitMapNsCallStatetoSitCallState:NsCallState:%d,SITCallState:%d
Line 1615: [SIT_0_AIMS] sitMapNsCallStatetoSitCallState:NsCallState:%d,SITCallState:%d
Line 3298: [SIT_1_AIMS] Tx sitTxIndAimsDroppedMtInfo(CallType:%d,CallId:%d,NumLen:%d)
Line 3298: [SIT_0_AIMS] Tx sitTxIndAimsDroppedMtInfo(CallType:%d,CallId:%d,NumLen:%d)
Line 3302: [SIT_1_AIMS] sitTxIndAimsCallRing,pal_MemAlloc() failure
Line 3302: [SIT_0_AIMS] sitTxIndAimsCallRing,pal_MemAlloc() failure
Line 3318: [SIT_1_AIMS] Length is over MAX. Set to MAX(24) len
Line 3318: [SIT_0_AIMS] Length is over MAX. Set to MAX(24) len
