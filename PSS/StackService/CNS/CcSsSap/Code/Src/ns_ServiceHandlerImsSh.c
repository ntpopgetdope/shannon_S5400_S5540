Line 93: Error: Null Pointer
Line 99: Fail to get Tid
Line 127: Invalid TidData; Reg Status:%d, Ims Call:%d
Line 157: IMSSH_NS_CALL_SETUP_IND :: CallId=%d, NsStackState=%d, CallType = %d, RatChangeType = %d
Line 170: Error: Null Pointer
Line 221: Error: Null Pointer
Line 227: Error: Null Pointer
Line 234: New SID for IMS MT CALL SId=%d, TID=%d
Line 277: Received displayNameLen:%d
Line 286: verStat: %d
Line 290: isVCRTEnabled: %d, PQosTmrVal [%d]msec
Line 298: Received SdpLen:%d,SDP_Present=%d 
Line 317: [ns_Handle_Imssh_SetupInd] remoteSupportedMedia [%d], RatChangeType [%d]
Line 324: Setup IND AlertingPattern = %d ussdLanguagecode = %d Ussd_Len = %d serverInitiatedType = %d
Line 335: Error: Null Pointer
Line 340: [ns_Handle_Imssh_SetupInd] PrivacyHeader_Id [%d]
Line 345: TID is not allocated,So releasing the SId for the MT call now
Line 377: IMSSH_NS_MOCALL_SETUP_CNF :: CallId=%d, RatChangeType = %d
Line 383: Error: Null Pointer
Line 393: CallId =%d
Line 397: SId Not Found for TId %d
Line 405: Error: Null Pointer
Line 434: IMSSH_NS_MOCALL_SETUP_CNF :: Connected ID:
Line 449: [ns_Handle_Imssh_SetupCnf] remoteSupportedMedia [%d]
Line 457: SETUP CNF for Conf call with CallId =%d
Line 473: Tid= %d, userId=%d
Line 527: Error: Null Pointer
Line 529: IMSSH_NS_MOCALL_PROCEEDING_IND :: CallId/Tid [%d] CF Status [%d]
Line 540: SId Not Found for TId %d
Line 556: IMSSH_NS_MOCALL_PROCEEDING_IND : SIP Response[%d] No of ReasonHdr [%d]
Line 566: Error: Null Pointer
Line 575: Error: Null Pointer
Line 594: Error: Null Pointer
Line 643: Error: Null Pointer
Line 644: IMSSH_NS_MOCALL_ALERT_IND :: Tid/CallId=%d, MainCallType=%d
Line 655: SId Not Found for TId %d
Line 664: IMSSH_NS_MOCALL_ALERT_IND :: isCallWaiting [%d]
Line 697: Error: Null Pointer
Line 733: Error: Null Pointer
Line 739: [ns_Handle_Imssh_GeneralInfoInd] IMSSH_NS_GENERAL_INFO_IND :: CallID [%d]  Sid [%d] FeatType [%d] FeatLen[%d]
Line 744: [ns_Handle_Imssh_GeneralInfoInd] FeatType is NewAudioPath & Action is Init, CallId conversion not required
Line 751: SId Not Found for TId [%d]
Line 759: [ns_Handle_Imssh_GeneralInfoInd] IMSSH_NS_GENERAL_INFO_IND :: CallID [%d]  Sid [%d] FeatType [%d] FeatLen[%d]
Line 771: [ns_Handle_Imssh_GeneralInfoInd] Received Feat Len or Value is Invalid
Line 806: IMSSH_NS_MTCALL_CONNECT_CNF ::CallID = %d, MainCallType = %d
Line 812: Error: Null Pointer
Line 826: SId Not Found for TId %d
Line 835: UserId Not Found for TId %d
Line 844: Error: Null Pointer
Line 851: SId Not Found for TId %d
Line 871: Tid= %d, userId=%d
Line 904: IMSSH_NS_MTCALL_GUARDTMR_STATUS_IND :: CallId = %d, Status = %d
Line 916: Error: Null Pointer
Line 948: IMSSH_NS_CALL_REL_IND :: CallType = %d, CallId = %d, Cause = %d, EmcSubCatLen= %d,  RatChangeType = %d EmcContactNumLen = %d
Line 952: Error: Null Pointer
Line 955:  Handling IMSSH_NS_CALL_REL_IND for Conf call
Line 961:   NS_REL_IND for Conf call participant with TId = %d. CLear its context
Line 972: Participant CONF call Tid not deallocated::  tid= %d
Line 977: Participant CONF call Tid  deallocated success::  tid= %d
Line 982:  IMSSH_NS_CALL_REL_IND :: Participant = %d :: already in IDLE state. So No Change
Line 989:   NS_REL_IND No more Conf call participant from index = %d
Line 993:  Sending  NS_REL_IND for Conf call with TId = %d
Line 1002:  Check if current call with TId = %d is part of any CONFERENCE Call
Line 1003:  Current CONFERENCE call is, TId = %d
Line 1007: Error: Null Pointer
Line 1014: Current Call not CONFERENCE call 
Line 1027: IMS call count set to be zero !
Line 1033: Error: Null Pointer
Line 1071: Error: Null Pointer
Line 1082: Error: Null Pointer
Line 1101: Error: Null Pointer
Line 1175: IMSSH_NS_CALL_HOLD_CNF :: CallId=%d
Line 1178: Error: Null Pointer
Line 1186: SId Not Found for TId %d
Line 1194: IMSSH_NS_CALL_HOLD_CNF :: Result=%d
Line 1203: IMSSH_NS_CALL_HOLD_CNF Reject case result = IMS_CC_SERVICE_REJ, cause = %d
Line 1209: IMSSH_NS_CALL_HOLD_CNF Success case
Line 1213: IMSSH_NS_CALL_HOLD_CNF : SDP_Present = %d
Line 1217: IMSSH_NS_CALL_HOLD_CNF : SDP Length = %d
Line 1255: IMSSH_NS_CALL_UNHOLD_CNF :: CallId=%d
Line 1260: Error: Null Pointer
Line 1268: SId Not Found for TId %d
Line 1272: IMSSH_NS_CALL_UNHOLD_CNF :: Result=%d
Line 1278: IMSSH_NS_CALL_UNHOLD_CNF Reject case IMS_CC_SERVICE_REJ
Line 1284: IMSSH_NS_CALL_UNHOLD_CNF Success case
Line 1288: IMSSH_NS_CALL_UNHOLD_CNF : SDP_Present = %d
Line 1292: IMSSH_NS_CALL_UNHOLD_CNF : SDP Length = %d
Line 1323:  Handling IMSSH_NS_CALL_DISCONNECT_IND
Line 1324: CallId = %d
Line 1327: Error: Null Pointer
Line 1330:  Handling IMSSH_NS_CALL_DISCONNECT_IND for Conf call
Line 1336:   NS_DISC_IND for Conf call participant with TId = %d
Line 1346:  IMSSH_NS_CALL_DISCONNECT_IND :: Participant = %d :: already in IDLE state. So No Change
Line 1353:  Sending  NS_DISC_IND for Conf call  TId = %d
Line 1369: Error: Null Pointer
Line 1374: Error: Null Pointer
Line 1393: ns_Handle_Imssh_InitCnf =%d
Line 1409: DBG Inside ns_Handle_Imssh_NsStopCnf 
Line 1436: Error: Null Pointer
Line 1464: Error: Null Pointer
Line 1494: Error: Null Pointer
Line 1526: Error: Null Pointer
Line 1551: DBG Inside ns_Handle_Imssh_NsGpsSuplNiReadyRsp 
Line 1553: Error: Null Pointer
Line 1572: DBG Inside ns_Handle_Imssh_NsGpsSuplNiMsgInd 
Line 1574: Error: Null Pointer
Line 1598: SId not found for TId %d
Line 1606: Error: Null Pointer
Line 1632: ns_Handle_Imssh_MtHoldInd :: CallId = %d, DataPresent = %d, CallOnHoldInd = %d 
Line 1636: Error: Null Pointer
Line 1637: ns_Handle_Imssh_MtHoldInd :: SID = %d
Line 1648: ns_Handle_Imssh_MtHoldInd :: SDP_Present = %d SDP_Length = %d
Line 1684: SId not found for TId %d
Line 1692: Error: Null Pointer
Line 1714: Error: Null Pointer
Line 1716: IMSSH_NS_TEXT_EVENT_IND : Tid=%d
Line 1727: SId Not Found for TId %d
Line 1735: Error: Null Pointer
Line 1740: NS_AIMS_TEXT_EVENT_IND :: Sid=%d
Line 1748: Error: Null Pointer
Line 1752: MediaDir %x
Line 1760: ns_mapImsToCnsState CNS user status = %x
Line 1779: ns_mapImsToCnsState  NS state = %x
Line 1788: Error: Null Pointer
Line 1797:  ns_AIMSRemoveAndUpdateParticipatantList User found & removed at index: %d, call-id:%d
Line 1842: Received invalid params, ConerenceCallStatus:%d, mem_CallId:%d
Line 1855: Error: Null Pointer
Line 1859: Participant TID 	 State : 
Line 1868: %d 		 %d 

Line 1878: Received invalid params, ConerenceCallStatus:%d
Line 1889: Error: Null Pointer
Line 1901: ns_AimsAddUserToConfCall User added at index: %d, call-id:%d
Line 1913: Received invalid params, ConerenceCallStatus:%d, mem_CallId:%d
Line 1931: NS_AIMS_MULTI_PARTY_REQ :: Participant call SId=%d, MPTY Command=%d, Conference SID = %d
Line 1946: ns_Handle_ns_AimsMultiPartyReq Failed to allocate TID for Conf call with SID
Line 1952: ns_Handle_ns_AimsMultiPartyReq TID not found for command
Line 1959: ns_Handle_ns_AimsMultiPartyReq: TID %d is avaible for received SIPC-ID %d
Line 1963: Error: Null Pointer
Line 1973: No TId for SId %d
Line 1979: Error: Null Pointer
Line 1997: In NS_BUILD_MULTI_PARTY_CALL case
Line 2008: In NS_HOLD_MULTI_PARTY_CALL case
Line 2021: In NS_RETRIEVE_MULTI_PARTY_CALL case
Line 2033: In NS_REMOVE_USER_FROM_MULTI_PARTY_CALL case :: This case is not handler anymore :: Separate Remove user message should come
Line 2039: Default case for Command.. do not send to IMSSH
Line 2076: MPTY_RSP :: call-ID = %d
Line 2081: MPTY_RSP Update Conference context SUCCESS for :: call-ID = %d
Line 2086: SId Not Found for Participant CallId %d :: And State is already IDLE. Hence Decrementing the user Count
Line 2088: New user Count
Line 2093: MPTY_RSP :: Participant not required to add in list: Continue.
Line 2098: SId Not Found for Participant CallId %d
Line 2104: result = %d and newState = %d
Line 2106: Participant SID=%d
Line 2119: MPTY_RSP Update Conference context failed for :: call-ID = %d
Line 2136: ns_Handle_Imssh_MultiPartyRsp Fail case for Command = %d
Line 2137: Clear Conf call status
Line 2141: Clear Conf call Success case
Line 2201: ns_Handle_Imssh_MultiPartyRsp WRONG STATE :: currentState = %d
Line 2206: SId Not Found for Participant CallId %d
Line 2211: Participant SID=%d
Line 2236: ns_Handle_Imssh_MultiPartyRsp Fail case for Command = %d
Line 2294: ns_Handle_Imssh_MultiPartyRsp WRONG STATE :: currentState = %d
Line 2299: SId Not Found for Participant CallId %d
Line 2304: Participant SID=%d
Line 2329: ns_Handle_Imssh_MultiPartyRsp Fail case for Command = %d
Line 2364: ns_Handle_Imssh_MultiPartyRsp Conference TID=%d, MPTY Command = %d Result = %d ErrorCODE = %d
Line 2365: IMSSH_NS_CALL_MULTIPARTY_CNF :: No of users = %d
Line 2374: Error: Null Pointer
Line 2384: SId Not Found for TId %d
Line 2391: Conference SID=%d
Line 2394: Error: Null Pointer
Line 2404: Conference CallType=%d[0-Audio,1-Video]
Line 2425: MPTY_RSP DEFAULT CASE Command = %d
Line 2431:  MULTI_PARTY_CALL Resp : Command = %d & SDP_Present = %d
Line 2435: MULTI_PARTY_CALL Resp : SDP Length = %d
Line 2448:  TID from IMSSH is not of Conf call recieved Tid = %d
Line 2468: NS_ADD_USER_REQ :: Conference SID = %d No Of Participants = %d
Line 2473: Req for new Conf call:: Allocate new TID for CONF CALL
Line 2477: ns_Handle_ns_ImsAddUserToConf Failed to allocate TID for Conf call with SID
Line 2483: Error: Null Pointer
Line 2490: Req for existing  Conf call:: TID for CONF CALL = %d
Line 2494: Error: Null Pointer
Line 2500: Error: Null Pointer
Line 2521: ns_Handle_ns_ImsAddUserToConf Failed to allocate TID for Conf call participant with SID
Line 2526: Participant at index = %d allocated TID = %d has num_len = %d
Line 2530: Req for Adding Participant at index = %d already existing; TID for Paticipant CALL = %d
Line 2579: ns_Handle_Imssh_AddUserRsp Conference TID=%d, MPTY Command = %d Result = %d ErrorCODE = %d
Line 2580: ns_Handle_Imssh_AddUserRsp :: No of users = %d
Line 2589: Error: Null Pointer
Line 2598: SId Not Found for TId %d
Line 2605: Conference SID=%d
Line 2608: Error: Null Pointer
Line 2618: Conference CallType=%d[0-Audio,1-Video]
Line 2631: ADD_USER_RSP :: call-ID = %d
Line 2636: ADD_USER_RSP Context update success:: call-ID = %d
Line 2639: SId Not Found for Participant CallId %d
Line 2644: Participant SID=%d
Line 2656: ADD_USER_RSP Context update FAIL:: call-ID = %d
Line 2679: ns_Handle_Imssh_AddUserRsp Fail case for Command = %d
Line 2692:  TID from IMSSH is not of Conf call recieved Tid = %d
Line 2709: ns_Handle_ns_AimsRemoveUserReq: Received Conference Call ID = %d, Number of Users To Remove = %d
Line 2714: ns_Handle_ns_AimsRemoveUserReq TID not found for Conference call SID = %d
Line 2716: Error: Null Pointer
Line 2728: ns_Handle_ns_AimsRemoveUserReq: TID %d is avaible for received Conference Call-ID %d
Line 2732: Error: Null Pointer
Line 2743: ns_Handle_ns_AimsRemoveUserReq TID not found for Participant call SID = %d
Line 2748: Error: Null Pointer
Line 2759: ns_Handle_ns_AimsRemoveUserReq: TID %d is avaible for received Participant Call-ID %d
Line 2794: ns_Handle_Imssh_RemoveUserRsp ConferenceTid = %d, Result = %d, NoOfUsers = %d and ErrorCode = %d
Line 2799: ns_Handle_Imssh_RemoveUserRsp:: DATA not found with Tid = %d
Line 2809: Error: Null Pointer
Line 2817: SId Not Found for TId %d
Line 2824: Conference SID=%d
Line 2827: Error: Null Pointer
Line 2837: Conference CallType=%d[0-Audio,1-Video]
Line 2845: SId Not Found for TId %d
Line 2853: SId = %d  Found for Tid %d
Line 2859: Received State = %d  NewState %d
Line 2867: UserStatus = %d
Line 2876: ClearConferenceParticipants CONF call Tid not deallocated:: conf tid= %d
Line 2885: ns_Handle_Imssh_RemoveUserRsp ::INVALID Status Received from SH
Line 2890: ns_Handle_Imssh_RemoveUserRsp :: Failed to finc current state for Participant CallId = %d
Line 2898: ns_Handle_Imssh_RemoveUserRsp :: Result = Fail case
Line 2909: ns_Handle_Imssh_RemoveUserRsp :: Invalid Conf call Id
Line 2920:  ns_UpdateCallContext :: ConfTId = %d & Conference status = %d
Line 2940: UpdateConferenceList Current State = %d NewState = %d for Participant = %d
Line 2952: UpdateConferenceList No MPTY state :: newState = %d for Participant CallID = %d 
Line 2953: No need to clear context wait for explicit DISC and Release
Line 2965: ClearConferenceCall For call with Tid = %d
Line 2981: ClearConferenceCall Fail to get current state for TID = %d
Line 3018: ns_Handle_ns_EnhanceConfCall :: Conference SID = %d No Of Participants = %d
Line 3024: ns_Handle_ns_EnhanceConfCall Failed to allocate TID for Conf call with SID
Line 3027: ns_Handle_ns_EnhanceConfCall :: Allocted TID = %d for Conf call %d
Line 3032: Error: Null Pointer
Line 3038: Error: Null Pointer
Line 3058: ns_Handle_ns_EnhanceConfCall Failed to allocate TID for Conf call participant with SID
Line 3059: Free previously allocated TIDs & allocated context
Line 3069: Participant at index = %d allocated TID = %d has num_len = %d
Line 3113: ns_Handle_Imssh_EnhancedConfRsp Conference TID=%d, No. of Participants = %d Result = %d ErrorCODE = %d
Line 3114: ns_Handle_Imssh_EnhancedConfRsp :: No of users = %d
Line 3123: Error: Null Pointer
Line 3132: SId Not Found for TId %d
Line 3138: IMSSH_NS_ENHANCED_CONF_RSP :: Conference SID=%d
Line 3141: Error: Null Pointer
Line 3151: Conference CallType=%d[0-Audio,1-Video]
Line 3155: IMSSH_NS_ENHANCED_CONF_RSP Success case 
Line 3162: IMSSH_NS_ENHANCED_CONF_RSP Fail case Clear Conf and participant context
Line 3170: IMSSH_NS_ENHANCED_CONF_RSP clear Conference call SUCCESS for : call-ID = %d
Line 3176: IMSSH_NS_ENHANCED_CONF_RSP clear Conference call FAIL : call-ID = %d
Line 3184: IMSSH_NS_ENHANCED_CONF_RSP clear Participants FAIL : Conf call-ID = %d
Line 3199:  Recieved TID = %d from IMSSH is not of Conf call 
Line 3224: Error: Null Pointer
Line 3231: SId Not Found for Conference TId %d
Line 3236: IMSSH_NS_CONF_NOTIFY_IND :: Conference SID=%d
Line 3239: Error: Null Pointer
Line 3247:  Recieved NoOfUsers = %d 
Line 3248:  Recieved ConerenceCallStatus = %d 
Line 3255: SId Not Found for Participant CallId %d
Line 3260: Participant SID=%d
Line 3275: IMSSH_NS_CONF_NOTIFY_IND :: pRxCcMsg->IMSSH_UserStatus[index].CallId = %d, ConfTidData->ParticipantTId[index] = %d
Line 3282: IMSSH_NS_CONF_NOTIFY_IND :: call-ID = %d
Line 3287: IMSSH_NS_CONF_NOTIFY_IND Context update success:: call-ID = %d
Line 3290: SId Not Found for Participant CallId %d
Line 3295: Participant SID=%d
Line 3309: IMSSH_NS_CONF_NOTIFY_IND Context update FAIL:: call-ID = %d
Line 3324:  Recieved TID = %d from IMSSH is not of Conf call 
Line 3327: IMSSH_NS_CONF_NOTIFY_IND :: Free prtNumber Memory
Line 3342: ClearConferenceParticipants For Conf call with Tid = %d
Line 3356: ClearConferenceParticipants CONF call Tid not deallocated:: conf tid= %d
Line 3363: ClearConferenceParticipants Fail to get current state for TID = %d
Line 3386: ns_Handle_Imssh_nsConfEventInd :: CallId = %d, result = %d, state = %d 
Line 3389: ns_Handle_Imssh_nsConfEventInd :: SID = %d
Line 3392: Error: Null Pointer
Line 3405: ns_Handle_Imssh_nsConfEventInd :: ConfEntity_Len = %d
Line 3413: ns_Handle_Imssh_nsConfEventInd :: conf_description.displayTextlen = %d
Line 3420: ns_Handle_Imssh_nsConfEventInd :: max_user_supported = %d
Line 3423: ns_Handle_Imssh_nsConfEventInd :: host_info.displayTextlen  = %d
Line 3432: ns_Handle_Imssh_nsConfEventInd :: Conf_state  = %d, conf_state.userCount = %d, users.user_count = %d
Line 3436: Error: Null Pointer
Line 3440: ns_Handle_Imssh_nsConfEventInd :: loopCount  = %d
Line 3449: ns_Handle_Imssh_nsConfEventInd :: nwc_state  = %d
Line 3459: ns_Handle_Imssh_nsConfEventInd :: endpoint_count  = %d
Line 3462: ns_Handle_Imssh_nsConfEventInd :: participant_index  = %d
Line 3466: ns_Handle_Imssh_nsConfEventInd :: SId not found for TId %d
Line 3471: Error: Null Pointer
Line 3476: ns_Handle_Imssh_nsConfEventInd :: localCount  = %d
Line 3478: ns_Handle_Imssh_nsConfEventInd :: displayTextlen  = %d
Line 3486: ns_Handle_Imssh_nsConfEventInd :: entityLen  = %d
Line 3494: ns_Handle_Imssh_nsConfEventInd :: endpoint_status  = %d
Line 3497: ns_Handle_Imssh_nsConfEventInd :: mediaLen  = %d
Line 3523: Error: Null Pointer
Line 3524: Error: Null Pointer
Line 3525: DBG Inside ns_ImsshSerialiseCalledPartyNumber 
Line 3559: MO call SId=%d, calltype:%d, EMC Category = %d
Line 3576: Error: Null Pointer
Line 3579: Error: Null Pointer
Line 3591: ns_Handle_ns_NsAimsSetupReq :: EMC category String Len = %d
Line 3603: ns_Handle_ns_NsAimsSetupReq :: DialogInfoId = %d isPulledCall = %d
Line 3605: ns_Handle_ns_NsAimsSetupReq :: videoPort = %d
Line 3608: SIP URI is Recevied
Line 3613: TEL URI is Recevied
Line 3622: Error: Null Pointer
Line 3634: ns_Handle_ns_NsAimsSetupReq :: USSD String Len = %d
Line 3649: ns_Handle_ns_NsAimsSetupReq :: EMC Call Over IMS = %d
Line 3664: send Ns Reject because call type is IMS and IMS is not registered
Line 3704: Error: Null Pointer
Line 3715: EMC Call triggered over Wifi
Line 3719: IMS Call triggered over Wifi
Line 3723: MO CALL blocked:  curStackState=%d, selectedMode=%d
Line 3737: Skip FDN Check (CallType: %d, EcallUI: %d)
Line 3762: MO CALL FAILED in FDN(Cause %d)
Line 3783: Call type IMS but IMS not registered, hence reject the Setup req
Line 3826: ns_Handle_ns_NsConnectReq:: Is IMS call = %d, Is IMS Registered = %d, Is IMS Registered for EMC = %d CHECK_IMS_REGISTERED_LIMITED %d
Line 3834: Error: Null Pointer
Line 3839: No TId for SId %d
Line 3843: ns_Handle_ns_NsConnectReq ::Call Type 1 = %d, Call Type 2 = %d, AIMS Call Type:%d, 
Line 3860: ClientNsId %d set for SId %d, TId %d, 
Line 3868: Error: Null Pointer
Line 3874: Tx MediaDirection = %x
Line 3877: ns_Handle_ns_NsAimsConnectReq :: videoPort = %d
Line 3895: IsIMSCall is true ::  CHECK_IMS_REGISTRATION_STATUS = %d, CHECK_IMS_REGISTERED_E911 = %d and CHECK_IMS_REGISTERED_LIMITED = %d
Line 3900: NS_AIMS_CONNECT_REQ :: however IMS not enabled IsIMSCall = %d
Line 3932: ns_Handle_ns_NsDiscReq :: IMS call = %d, IMS registered  = %d, Is IMS registered for EMC = %d CHECK_IMS_REGISTERED_LIMITED = %d
Line 3939: No TId for SId %d
Line 3945: IMS call State = %d 
Line 3951: Error: Null Pointer
Line 3963: No TId for SId %d
Line 3970: Error: Null Pointer
Line 3974: CallDeflectionIndication enabled. call type 1= %d, call type 2 = %d%d
Line 3979: Unexpected for SId %d
Line 3989: Error: Null Pointer
Line 3993: CallDeflectionIndication not enabled. call type 1= %d, call type 2 = %d%d
Line 3997: ns_Handle_ns_NsDiscReq :: Call Type 1 = %d, Call Type 2 = %d
Line 4007: ns_Handle_ns_NsDiscReq: SId=%d
Line 4034: ns_Handle_ns_NsDiscReq IMS state = %d, CallDeflectionInd = %d
Line 4037: IMSSH_STATE:Dialing/AlertingState
Line 4040: Build+Send:NS_IMSSH_CALL_REJ_REQ in ALert/Dialing state
Line 4043: Error: Null Pointer
Line 4062: Connected Call release, send NS_IMSSH_CALL_DISCONNECT_REQ
Line 4067: Build+send:NS_IMSSH_CALL_DISCONNECT_REQ
Line 4071: Error: Null Pointer
Line 4090: sending NS_AIMS_REL_IND to all clients
Line 4094: Error: Null Pointer
Line 4105: No TId for SId %d
Line 4112: Build+send:NS_IMSSH_CALL_DISCONNECT_REQ
Line 4116: Error: Null Pointer
Line 4134:  NS_DISC_REQ came for IMS CONF call, change state for participants also
Line 4139:  Change state for participant ID = %d
Line 4145:  NO participant present from index = %d
Line 4157: NS_AIMS_DISC_REQ :: however IMS not enabled IsIMSCall = %d
Line 4182: IsImsCall %d, IMS_REGISTRATION %d, SId %d
Line 4196: Error: Null Pointer
Line 4198: TidData CallType1 = %d, CallType2 = %d
Line 4206: Call Type IMS, trigger IMSSH start text request
Line 4209: Error: Null Pointer
Line 4219: Error: Null Pointer
Line 4230: No TId data present for TID %d
Line 4235: No TId for SId %d
Line 4240: IMS is not enabled(IsIMSCall %d)
Line 4249: Error: Null Pointer
Line 4280: IsImsCall %d, IMS_REGISTRATION %d, SId %d, Key %d
Line 4294: Error: Null Pointer
Line 4296: TidData CallType1 = %d, CallType2 = %d
Line 4304: Call Type IMS, trigger IMSSH start dtmf request
Line 4307: Error: Null Pointer
Line 4319: No TId data present for TID %d
Line 4324: No TId for SId %d
Line 4329: IMS is not enabled(IsIMSCall %d)
Line 4339: Error: Null Pointer
Line 4371: ns_Handle_ns_NsAimsHoldReq SID = %d
Line 4375: ns_Handle_ns_NsAimsHoldReq:: Is IMS call = %d, Is IMS Registered = %d
Line 4382: Error: Null Pointer
Line 4387: No TId for SId %d
Line 4395: Error: Null Pointer
Line 4405: NS_AIMS_HOLD_REQ :: ERROR:: IsIMSCall = %d, CHECK_IMS_REGISTRATION_STATUS=%d
Line 4429: ns_Handle_ns_NsAimsRetrieveReq SID = %d
Line 4432: ns_Handle_ns_NsAimsRetrieveReq:: Is IMS call = %d, Is IMS Registered = %d
Line 4440: Error: Null Pointer
Line 4445: No TId found for SId %d
Line 4454: Error: Null Pointer
Line 4463: NS_AIMS_RETRIEVE_REQ :: ERROR:: IsIMSCall = %d, CHECK_IMS_REGISTRATION_STATUS=%d
Line 4485: ns_Handle_ns_NsAimsRejReq for SID = %d
Line 4488: ns_Handle_ns_NsAimsRejReq:: Is IMS call = %d, Is IMS Registered = %d
Line 4495: No TId for SId %d
Line 4501: Error: Null Pointer
Line 4506: No TId allocated %d
Line 4509: ns_Handle_ns_NsAimsRejReq ::Call Type 1 = %d, Call Type 2 = %d
Line 4521: Error: Null Pointer
Line 4530: TId Not Found for SId %d
Line 4536: NS_AIMS_REJ_REQ :: ERROR:: IsIMSCall = %d, CHECK_IMS_REGISTRATION_STATUS=%d
Line 4585: Error: Null Pointer
Line 4614: Unexpected: Type=%d, Cause=%d -> converted to normal_clearing
Line 4622: Unexpected: Type=%d, Cause=%d -> converted to normal_clearing
Line 4637: REJ_IND is sent (Broadcast=%d, SId=%d, TId=%d, Cause=%d)
Line 4660: ns_SendRelInd :: Is Ims Call = %d, Ims Register = %d
Line 4666: Error: Null Pointer
Line 4670: No data found for TID = %d
Line 4676: TId Not Found for SId %d
Line 4686: Error: Null Pointer
Line 4696: NS_AIMS_REL_IND ::  IMS not enabled IsIMSCall = %d
Line 4730: Error: Null Pointer
Line 4736: Invalid Tid :: TID not FOUND 
Line 4763: Invalid TidData
Line 4780: Invalid Tid :: TID not found
Line 4785: Not IMS :: IsImsCall = %d, CHECK_IMS_REGISTRATION_STATUS = %d,  CHECK_IMS_REGISTERED_E911 = %d, CHECK_IMS_REGISTERED_LIMITED = %d
Line 4804: ns_Handle_ns_NsAimsGpsSuplNiReadyReq:: PORT= %d
Line 4807: Error: Null Pointer
Line 4829: ns_Handle_ns_NsAimsGpsSuplNiMsgCnf:: Result= %d, TID=%d
Line 4833: Error: Null Pointer
Line 4862: Sid=%d
Line 4873: Error: Null Pointer
Line 4884: Tx MediaDirection = %x
Line 4887: ns_Handle_ns_NsAimsModifyReq :: videoPort = %d
Line 4891: TId Not Found for SId %d
Line 4917: IMSSH_NS_CALL_MODIFY_CNF :: CallId=%d, SDP present=%d,SDP Length=%d, MainCallType=%d
Line 4921: SDP data:
Line 4931: Error: Null Pointer
Line 4954: SDP Length eceeds max limit
Line 4965: SId Not Found for TId %d
Line 4995: IMSSH_NS_MWI_INFO_IND :: msgLen = %d
Line 4999: Error: Null Pointer
Line 5030: IMSSH_NS_CALL_MODIFY_REJ :: CallId=%d, Cause=%d, MainCallType=%d
Line 5041: Error: Null Pointer
Line 5054: SId Not Found for TId %d
Line 5080: IMSSH_NS_CALL_TRANSFER_INFO_IND :: dialogCount = %d
Line 5084: Error: Null Pointer
Line 5099: SId Not Found for TId %d
Line 5120: Error: Null Pointer
Line 5154: IMSSH_NS_CALL_MODIFY_IND :: CallId=%d, CallType = %d, SDP present=%d,SDP Length=%d, isFocus = %d, MainCallType = %d
Line 5159: SDP data:
Line 5169: Error: Null Pointer
Line 5196: SDP Length eceeds max limit
Line 5207: SId Not Found for TId %d
Line 5249: Error: Null Pointer
Line 5258: Tx MediaDirection = %x
Line 5259: ns_Handle_ns_NsAimsModifyAccept :: videoPort = %d
Line 5263: TId Not Found for SId %d
Line 5293: NS_IMSSH_CALL_MODIFY_REJ:: SID=%d, Cause=%d
Line 5307: Error: Null Pointer
Line 5319: Tx MediaDirection = %x
Line 5320: ns_Handle_ns_NsAimsModifyRej :: videoPort = %d
Line 5325: TId Not Found for SId %d
Line 5346: ns_Free_SHConfEventInd UnAllocate conf_entity  fail
Line 5363: ns_Free_SHConfEventInd UnAllocate conf_description.display_text fail
Line 5380: ns_Free_SHConfEventInd UnAllocate host_info.display_text fail
Line 5403: ns_Free_SHConfEventInd UnAllocate payload_user[].Confentity_uri fail
Line 5416: ns_Free_SHConfEventInd UnAllocate payload_user[].display_text fail
Line 5435: ns_Free_SHConfEventInd UnAllocate ppayload_endpoint[].display_text fail
Line 5448: ns_Free_SHConfEventInd UnAllocate ppayload_endpoint[].entity fail
Line 5460: ns_Free_SHConfEventInd UnAllocate ppayload_endpoint[].media_type fail
Line 5473: ns_Free_SHConfEventInd UnAllocate ppayload_endpoint fail
Line 5487: Error: Null Pointer
Line 5489: ns_Free_SHConfEventInd ENTRY
Line 5517: ns_Free_SHConfEventInd UnAllocate payload_user  fail
Line 5520: ns_Free_SHConfEventInd EXIT
Line 5533: ns_Handle_ns_NsAimsUssdInfoRsp :: SId = %d, passwardLen=%d
Line 5541: Error: Null Pointer
Line 5548: ns_Handle_ns_NsAimsUssdInfoRsp Invalid Length is received length= %d
Line 5580: ns_Handle_Imssh_nsUssdInfoInd 
Line 5581: ns_Handle_Imssh_nsUssdInfoInd Received TID = %d
Line 5586: ns_Handle_Imssh_nsUssdInfoInd Invalid Length is received length= %d
Line 5591: Error: Null Pointer
Line 5611: ns_Handle_Imssh_nsUssdInfoInd SId  = %d and ussdLanguageCode = %d
Line 5612: ns_Handle_Imssh_nsUssdInfoInd ussdDataLength  = %d and alertingPattern = %d
Line 5613: ns_Handle_Imssh_nsUssdInfoInd serverInitiatedType  = %d
Line 5614: ns_Handle_Imssh_nsUssdInfoInd UssdErrorCode  = %d
Line 5626: Error: Null Pointer
Line 5628: apRegState:%d, featureSupp: %d, rcsCapabMask %d, statusCode:%d, uriLen: %d,reasonTextLen:%d
Line 5752: ns_ClearImsCalls Entry 
Line 5770: ns_ClearImsCalls Exit 
Line 5781: ns_Handle_ns_nsAims_MediaStateInd MediaState = %d & Sid = %d
Line 5795: Error: Null Pointer
Line 5805: ns_Handle_ns_nsAims_MediaStateInd Sending  NS_IMSSH_MEDIA_STATE_IND with Tid = %d & Media State = %d,Action : %d
Line 5807: ns_Handle_ns_nsAims_MediaStateInd Sending  NS_IMSSH_MEDIA_STATE_IND with RTPCntxtPresent = %x & RTPSSRC = %x,RTPTimeStamp : %x, RTPSeqNum : %x
Line 5813: ns_Handle_ns_nsAims_MediaStateInd Fail to Extract TID for Received SId = %d
Line 5828: Error: Null Pointer
Line 5845: ns_Handle_ns_NsAimsSelfCapability ENTRY
Line 5847: Error: Null Pointer
Line 5856: Received values are feature=%d, rcsCapabMask=%d, version=%d, extendedRcsCapabMask=%d, rcsDelegateCapabMask=%d, extendedRcsDelegateCapabMask=%d
Line 5857: ns_Handle_ns_NsAimsSelfCapability EXIT
Line 5867: ns_Handle_ns_NsAimsEmcState ENTRY
Line 5869: Error: Null Pointer
Line 5872: Received values are state=%d
Line 5873: ns_Handle_ns_NsAimsEmcState EXIT
Line 5894: Error: Null Pointer
Line 5895: IMSSH_NS_DTMF_EVENT_IND :: Tid/CallId=%d
Line 5905: SId Not Found for TId %d
Line 5917: IMSSH_NS_DTMF_EVENT_IND :: Sid=%d, channel = %d
Line 5918: IMSSH_NS_DTMF_EVENT_IND :: event=%d, volume = %d
Line 5919: IMSSH_NS_DTMF_EVENT_IND :: duration=%d, endbit = %d
Line 5939: Error: Null Pointer
Line 5963: Error: Null Pointer
Line 5998: Error: Null Pointer
Line 6013: SId Not Found for TId %d
Line 6036: MtCallBlockStatus = %d
Line 6039: Error: Null Pointer
Line 6060: ns_Handle_ns_NsAimsComposerMmTelReq
Line 6062: Error: Null Pointer
Line 6080: ns_Handle_ns_NsAimsComposerMmTelCancelReq
Line 6082: Error: Null Pointer
Line 6100: ns_Handle_Imssh_NsComposerMmTelInd
Line 6102: Error: Null Pointer
Line 6136: AimsRtpHeaderExtensionTypeSetReq
Line 6138: Error: Null Pointer
Line 6149: Error: Null Pointer
Line 6169: AimsRtpHeaderExtensionSendReq/ RxSId: %d
Line 6177: ns_Handle_ns_AimsRtpHeaderExtensionSendReq
Line 6179: Error: Null Pointer
Line 6189: Error: Null Pointer
Line 6194: No TId for SId %d
Line 6221: AimsRtpHeaderExtensionSendReq/ RxCallId: %d
Line 6230: Error: Null Pointer
Line 6241: Error: Null Pointer
Line 6246: SId Not Found for TId %d
Line 6271: NsRtpHeaderExtensionSendInd/ RxCallId: %d
Line 6280: Error: Null Pointer
Line 6289: Error: Null Pointer
Line 6294: SId Not Found for TId %d
Line 6313: ns_Handle_ns_nsImssh_HandoffFrom3gppToWlanReq ENTRY
Line 6315: Error: Null Pointer
Line 6319: PdnType = %d, Status:%d
Line 6320: ns_Handle_ns_nsImssh_HandoffFrom3gppToWlanReq EXIT
Line 6331: Error: Null Pointer
Line 6335: ns_Handle_ns_ImsshHandoffFromWlanCancelReq Sid = %d
Line 6336: ns_Handle_ns_ImsshHandoffFromWlanCancelReq ErrorCode = %d
Line 6390: Cleared all IMSSH db
Line 6398: Cleared all XCAPM db
Line 6408: GeoLocInfo_Len= %d
Line 6412: Error: Null Pointer
Line 6418: Sending  NS_IMSSH_GEO_LOC_INFO_REQ with Len = %d
Line 6446: Call Deflection Enable = [%d], Sid = [%d]
Line 6454: TId Not Found for SId %d
Line 6460: Error: Null Pointer
Line 6466: CalledPartyNumber  received at NS : 
Line 6479: Prefix (+) is present before dailed number
Line 6493: Truncate Max Num len to 82
Line 6510: CalledPartyNumber sent to IMSSH
Line 6529: Error: Null Pointer
Line 6555: SId Not Found for TId %d
Line 6575: Status received = %d
Line 6579: Error: Null Pointer
Line 6584: Sending  NS_IMSSH_PDN_EST_STATUS with Status = %d
Line 6616: Error: Null Pointer
Line 6627: RTP Packet loss CallId=%d, JitThres=%d Thres=%d, thres Inter=%d, HandoverNoRtpInterval=%d, InactivityInMs=%d, NotifyCurrentStatus=%d
Line 6631: TId Not Found for SId %d
Line 6664: Error: Null Pointer
Line 6672: RTP Packet loss Sid=%d, Event=%d, RtpJitter=%d, PacketLossRate=%d, InactivityTimeInMs=%d
Line 6676: SId Not Found for TId %d
Line 6701: Error: Null Pointer
Line 6708: ReqType=%d, Tag=%d
Line 6729: Error: Null Pointer
Line 6735: expireType=%d, expireValue=%d
Line 6761: NS_AIMS_CALL_TRANSFER_REQ :: ERROR:: IsIMSCall = %d, CHECK_IMS_REGISTRATION_STATUS=%d
Line 6769: TId Not Found for SId %d
Line 6779: TId Not Found for TargetCallId %d
Line 6783: NS_AIMS_CALL_TRANSFER_REQ :: TId = %d TargetCallTid = %d
Line 6786: Error: Null Pointer
Line 6825: NS_AIMS_CALL_TRANSFER_CANCEL_REQ :: ERROR:: IsIMSCall = %d, CHECK_IMS_REGISTRATION_STATUS=%d
Line 6833: TId Not Found for SId %d
Line 6838: Error: Null Pointer
Line 6874: SId Not Found for TId %d
Line 6879: Error: Null Pointer
Line 6913: SId Not Found for TId %d
Line 6918: Error: Null Pointer
Line 6952: SId Not Found for TId %d
Line 6957: Error: Null Pointer
Line 7122: Error: Null Pointer
Line 7124: Sending  USAT_IMS_REG_STATUS_IND
Line 7148: Error: Null Pointer
Line 7160: NS_AIMS_COMMON_SVC_INFO data[0]:%d, sid: %d
Line 7164: No TId for SId %d
Line 7168: NS_AIMS_COMMON_SVC_INFO data[0]:%d, Tid: %d
Line 7170: Send Type:%d, Len: %d
Line 7171: Val: 
Line 7191: NS ==> 0x%x (Mbx %d)
Line 7213: Error: Null Pointer
Line 7219: ns_Handle_NsAimsSipRegister sipStatusCode = %d
Line 7251: Error: Null Pointer
Line 7253: Error: Null Pointer
Line 7254: ns_Handle_NsAimsSendUlSipMsg dataLen = %d
Line 7274: Error: Null Pointer
Line 7276: Error: Null Pointer
Line 7277: ns_Handle_NsAimsDlSipMsgResult dataLen = %d
Line 7298: Error: Null Pointer
Line 7300: Error: Null Pointer
Line 7301: ns_Handle_Imssh_NsSipConfigInd dataLen = %d
Line 7322: Error: Null Pointer
Line 7324: Error: Null Pointer
Line 7325: ns_Handle_Imssh_NsDlSipMsgInd dataLen = %d
Line 7346: Error: Null Pointer
Line 7348: Error: Null Pointer
Line 7349: ns_Handle_Imssh_NsDlSipMsgInd dataLen = %d
Line 7372: Error: Null Pointer
Line 7374: Sending USAT_IMS_INCOMING_DATA_IND 
Line 7395: Error: Null Pointer
Line 7397: Sending USAT_IMS_OPEN_CHANNEL_RSP 
Line 7419: Error: Null Pointer
Line 7421: Sending USAT_IMS_DATA_AVAILABLE_IND 
Line 7442: Error: Null Pointer
Line 7444: Sending  USAT_IMS_DATA_READ_RSP
Line 7465: Error: Null Pointer
Line 7468: Sending  USAT_IMS_SEND_DATA_RSP
Line 7492: Error: Null Pointer
Line 7507: Received CallingPartyNumberLength:%d
Line 7563: Error: Null Pointer
Line 7591: Error: Null Pointer
