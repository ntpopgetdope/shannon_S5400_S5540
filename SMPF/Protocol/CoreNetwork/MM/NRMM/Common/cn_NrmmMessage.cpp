Line 121: [D :MM,%d]  Post Message Q is full, Process it firstly
Line 131: [N :MM,%d]  NrmmMessage::SendExtMsg : %s
Line 503: [N :MM,%d]  %%!EM Unexpected Msg ID
Line 535: [N :MM,%d]  NrmmMessage::SendEstCnfMsg, Source Task = %s, Mui = %x
Line 581: [DumpHex] QM_MM_EST_CNF : 
Line 602: [N :MM,%d]  %%!EM Unknown Source Task !!
Line 610: [N :MM,%d]  NrmmMessage::SendEstErrMsg, Source Task = %x, Mui = %x, Cause = %x
Line 668: [N :MM,%d]  %%!EM Unknown Source Task !!
Line 675: [N :MM,%d]  NrmmMessage::SendDataCnf, Source Task = %x, Mui = %x, Cause = %x
Line 735: [DumpHex] Sid :
Line 744: [N :MM,%d]  %%!EM Unknown Source Task !!
Line 807: [N :MM,%d]  NrmmMessage::SendMultiPayloadMsg
Line 823: [W :MM,%d]  ERROR : current length has excceeded total length
Line 823: [MM|%d,CP] ERROR : current length has excceeded total length
Line 834: [N :MM,%d]  MULTI PAYLOAD[%d] : Payload type = %d, Number Of Optional Ie = %d
Line 920: [W :MM,%d]  ERROR : invalid UPU Result = %d
Line 920: [MM|%d,CP] ERROR : invalid UPU Result = %d
Line 926: [N :MM,%d]  %%!EM Unknown Payload Type !!
Line 987: [N :MM,%d]  %%!EM Unknown type : %d
Line 1020: [N :MM,%d]  %%!EM Unknown type : %d
Line 1036: [DumpHex] Send N2L IRAT CHANGE CNF as failure : 
Line 1049: [DumpHex] Send X2N IRAT CHANGE CNF as failure : 
Line 1063: [N :MM,%d]  SendGrantTriggeredIndMsg : Mui %d SvcType %d
Line 1102: [DumpHex] Send GMC ESFB CNF : 
Line 1133: [DumpHex] Send RM TIMER STATUS IND : 
Line 1150: [N :MM,%d]  Get RRC NSSAI Info, Nssai Inclusion Mode : %x, MSG : %d, FullRegType : %d
Line 1159: [N :MM,%d]  Not provide NSSAI while EMC service is in progress
Line 1201: [A :MM,%d]  MEM COPY size over !! [Num = %d, MaxNum = %d]
Line 1201: [MM|%d,CP] MEM COPY size over !! [Num = %d, MaxNum = %d]
Line 1234: [N :MM,%d]  NSSAI Inclusion Mode is D, no NSSAI provided
Line 1243: [N :MM,%d]  NSSAI Inclusion Mode is NONE, no NSSAI provided
Line 1260: [A :MM,%d]  %%!EM ERROR: RRC_MM_EST_REQ alloc failed
Line 1260: [MM|%d,CP] %%!EM ERROR: RRC_MM_EST_REQ alloc failed
Line 1308: [N :MM,%d]  RRC EST REQ : RrcEstCause = %d, UAC ID = 0x%x, ACC CAT = 0x%x %x, SkipBarring = %d, MPSI_REDIRECTION = %d
Line 1316: [A :MM,%d]  MEM COPY size over !! [Num = %d, MaxNum = %d]
Line 1316: [MM|%d,CP] MEM COPY size over !! [Num = %d, MaxNum = %d]
Line 1328: [DumpHex] EST REQ : 
Line 1335: [A :MM,%d]  %%!EM No data in EST_REQ message
Line 1335: [MM|%d,CP] %%!EM No data in EST_REQ message
Line 1352: [A :MM,%d]  %%!EM ERROR: RRC_MM_DATA_REQ alloc failed
Line 1352: [MM|%d,CP] %%!EM ERROR: RRC_MM_DATA_REQ alloc failed
Line 1388: [N :MM,%d]  RRC DATA REQ : RrcEstCause = %d, UAC ID = 0x%x, ACC CAT = 0x%x %x, SkipBarring = %d, MPSI_REDIRECTION = %d
Line 1392: [N :MM,%d]  Send UL NAS COUNT to RRC for REG or SR REQ if NAS SMC is not completed yet : count = %d
Line 1401: [N :MM,%d]  Current UL NAS COUNT : count = %d
Line 1405: [N :MM,%d]  Don't need to increament UL Nas count for dummy message
Line 1414: [DumpHex] DATA REQ : 
Line 1461: [N :MM,%d]  Supported RAT : %x
Line 1587: [N :MM,%d]  NrmmMessage::SendIntMsg: Unexpected Msg ID
Line 1602: [A :MM,%d]  %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
Line 1602: [MM|%d,CP] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
Line 1674: [N :MM,%d]  MM_MM_NRMM_NSSAI_DELETE_REQ : Default Configured NSSAI 
Line 1710: [D :MM,%d]  Delete NSSAI Type : %d
Line 1714: [DumpHex] Send MM_MM_NRMM_NSSAI_DELETE_REQ_IND : 
Line 1735: [N :MM,%d]  ConstructSmtModeUpdateIndMsg MultiMode %d
Line 1745: [N :MM,%d]  Discard sending SMT_MM_REL_IND if NR RAT suspended
Line 1762: [N :MM,%d]  ConstructSmtReleaseIndMsg MSG_ID : %d , REREG_FLAG : %d
Line 1764: [N :MM,%d]  ConstructSmtReleaseIndMsg RelType [%d] ReRegRequired [%d]
Line 1807: [N :MM,%d]  Send SMT_MM_NW_SESSION_INFO_IND : PDU session = 0x%X, Cause = %d
Line 1830: [DumpHex] Send Msg DUMP : 
Line 1847: [N :MM,%d]  NrmmMessage::ConstructSmtIratChangeIndMsg : TargetRat = %d, Type = %d, Status = %d
Line 1859: [N :MM,%d]  ConstructSmtInitIndMsg pCnCommonDb 0x%x
Line 1888: [N :MM,%d]  SMT DATA IND : PDU Session ID = %d, PayLoad Length = %d
Line 1896: [A :MM,%d]  %%!EM PDU Session ID is not vaild !!
Line 1896: [MM|%d,CP] %%!EM PDU Session ID is not vaild !!
Line 1912: [N :MM,%d]  SMT DATA IND : Cause = %d
Line 1923: [N :MM,%d]  SMT DATA IND : Congestion timer value = %d
Line 1934: [A :MM,%d]  %%!EM ERROR : PduSessionId is not available even payload container has been loaded !!
Line 1934: [MM|%d,CP] %%!EM ERROR : PduSessionId is not available even payload container has been loaded !!
Line 1990: [N :MM,%d]  SMT_MM_STATUS_IND : RegType = %d, Status = %d, IwkN26 = %d, AsState = %d, Emc = %d
Line 1991: [N :MM,%d]  SMT_MM_STATUS_IND : VoNR = %d, T3502 = %d
Line 2013: [D :MM,%d]  SMT_MM_AUTH_PROCESS_CNF SessionId : %d
Line 2014: [DumpHex]  EAP_MSG : 
Line 2034: [N :MM,%d]  IsSIMvalid :%d
Line 2095: [A :MM,%d]  MEM COPY size over !! [Num = %d, MaxNum = %d]
Line 2095: [MM|%d,CP] MEM COPY size over !! [Num = %d, MaxNum = %d]
Line 2132: [DumpHex] Construct GMC_MM_PLMN_SEARCH_FAIL_IND : 
Line 2144: [N :MM,%d]  Send GMC_MM_PLMN_LIST_IND as failure
Line 2153: [A :MM,%d]  MEM COPY size over !! [Num = %d, MaxNum = %d]
Line 2153: [MM|%d,CP] MEM COPY size over !! [Num = %d, MaxNum = %d]
Line 2156: [DumpHex] Construct GMC_MM_PLMN_LIST_IND : 
Line 2164: [N :MM,%d]  trigger NrmmMessage:: ConstructGmcPlmnListAbortCnfMsg (%p)
Line 2167: [A :MM,%d]  %%!EM ERROR : ConstructGmcPlmnListAbortCnfMsg::pNrmmRcvMsgFromMm = nullptr
Line 2167: [MM|%d,CP] %%!EM ERROR : ConstructGmcPlmnListAbortCnfMsg::pNrmmRcvMsgFromMm = nullptr
Line 2177: [N :MM,%d]  NrmmMessage:: ConstructGmcPlmnListAbortCnfMsg Result(%d) Status(%d) NumPlmns(%d) FreqNum(%d)
Line 2182: [A :MM,%d]  MEM COPY size over !! [Num = %d, MaxNum = %d]
Line 2182: [MM|%d,CP] MEM COPY size over !! [Num = %d, MaxNum = %d]
Line 2198: [A :MM,%d]  %%!EM ERROR : MM rejecting to un-suitable state
Line 2198: [MM|%d,CP] %%!EM ERROR : MM rejecting to un-suitable state
Line 2209: [A :MM,%d]  MEM COPY size over !! [Num = %d, MaxNum = %d]
Line 2209: [MM|%d,CP] MEM COPY size over !! [Num = %d, MaxNum = %d]
Line 2211: [DumpHex] Construct GMC_MM_BPLMN_LIST_FAIL_IND : 
Line 2325: [DumpHex] Construct GMC_MM_N1_MODE_UPDATE_IND : 
Line 2337: [A :MM,%d]  %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
Line 2337: [MM|%d,CP] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
Line 2367: [A :MM,%d]  %%!EM IRAT Type is not correct!! : %d
Line 2367: [MM|%d,CP] %%!EM IRAT Type is not correct!! : %d
Line 2389: [DumpHex] Send GMC_MM_IRAT_CHANGE_REQ : 
Line 2422: [A :MM,%d]  %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
Line 2422: [MM|%d,CP] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
Line 2431: [N :MM,%d]  Recieved RRC_MM_IRAT_CHANGE_CNF : Type = %d
Line 2432: [DumpHex] Dump : 
Line 2444: [N :MM,%d]  [5GPM_SA][Metrics] MRU_L2N_SUCCESS_COUNT : 1
Line 2472: [N :MM,%d]  %%!EM Unknown Msg ID !!
Line 2488: [N :MM,%d]  RAT change needed without NR RAT search and when during re-enable of N1 mode GMC will search for all available PLMns
Line 2493: [N :MM,%d]  RAT change needed without NR RAT search
Line 2498: [N :MM,%d]  NRSA depriotized
Line 2509: [N :MM,%d]  PLMN PERFORM ACTION : T3247 Cause(%d)
Line 2516: [N :MM,%d]  PLMN_PERFORM_ACTION_Handler, Reject cause = %d
Line 2669: [N :MM,%d]  PLMN PERFORM ACTION : %d, cause : %d, EMC : %d, EMF : %d, VoPS : %d
Line 2670: [N :MM,%d]  PLMN PERFORM ACTION : EmergencyCallSupport %d IsNormalService %d
Line 2671: [N :MM,%d]  PLMN PERFORM ACTION : SOR RESULT %d
Line 2672: [DumpHex] Send Msg DUMP : 
Line 2749: [N :MM,%d]  Skip sending GMC_MM_EPLMN_LIST_UPD_IND during mode update
Line 2761: [N :MM,%d]  Equivalent PLMN list : %d
Line 2762: [DumpHex] HEX : 
Line 2835: [N :MM,%d]  IsSIMvalid :	%d
Line 2836: [DumpHex] GMC_INIT_CNF :
Line 2845: [A :MM,%d]  %%!EM ERROR : ConstructGmcMmcCnfMsg::m_pNrmmMessage->GetRcvMsgBodyPtr() = nullptr
Line 2845: [MM|%d,CP] %%!EM ERROR : ConstructGmcMmcCnfMsg::m_pNrmmMessage->GetRcvMsgBodyPtr() = nullptr
Line 2857: [DumpHex] GMC_MMC_CNF :
Line 2880: [DumpHex] GMC_MM_FORBIDDANCE_CONFIG_IND_T : 
Line 2900: [N :MM,%d]  Equivalent PLMN list : %d
Line 2901: [DumpHex] HEX : 
Line 2933: [A :MM,%d]  MEM COPY size over !! [Num = %d, MaxNum = %d]
Line 2933: [MM|%d,CP] MEM COPY size over !! [Num = %d, MaxNum = %d]
Line 2952: [E :MM,%d]  FTAI LIST size excceded!
Line 2965: [DumpHex] RRC_MM_UPDATE_FTAI_LIST_IND : 
Line 3025: [N :MM,%d]  No of HPLMN / EHPLMN list : %d
Line 3026: [DumpHex] HEX : 
Line 3031: [DumpHex] RRC_MM_INIT_REQ : 
Line 3040: [A :MM,%d]  %%!EM ERROR : ConstructRrcMccReqMsg::pNrmmRcvMsgFromMm = nullptr
Line 3040: [MM|%d,CP] %%!EM ERROR : ConstructRrcMccReqMsg::pNrmmRcvMsgFromMm = nullptr
Line 3048: [N :MM,%d]  RrcSearchMode %d
Line 3074: [D :MM,%d]  RRC_MM_CURR_MODE_UPDATE_IND : MultiMode = %d, N1 Mode = %d, S1 Mode = %d, VoiceSupportType = %d
Line 3087: [N :MM,%d]  NrmmMessageExtRrc::ConstructRrcTermReq, RRC_TERMINATE_REQ cause = %d
Line 3138: [N :MM,%d]  %%!EM Unknown Reject Cause !!
Line 3151: [N :MM,%d]  %%!EM In test case.  Do not send RRC_MM_PROC_STATUS_IND
Line 3170: [D :MM,%d]  RRC_MM_PROC_STATUS_IND : Result = %d Band = %d, Narfcn= %d, PhyCellId = %d
Line 3192: [DumpHex] Send Msg DUMP : 
Line 3210: [N :MM,%d]  Block to send PLMN SEARCH REQ, NRMM TH is activated
Line 3253: [DumpHex] Received MM_GMC_PLMN_SEARCH_REQ : 
Line 3285: [N :MM,%d]  Fill in %d SelectedMcc, %d ScannedMcc
Line 3295: [N :MM,%d]  SearchOnlyForImsSupportingCell : %d
Line 3296: [DumpHex] RRC_MM_PLMN_SEARCH_REQ : 
Line 3304: [A :MM,%d]  %%!EM ERROR : ConstructRrcPlmnListReqMsg::pNrmmRcvMsgFromMm = nullptr
Line 3304: [MM|%d,CP] %%!EM ERROR : ConstructRrcPlmnListReqMsg::pNrmmRcvMsgFromMm = nullptr
Line 3314: [DumpHex] RRC_MM_PLMN_LIST_REQ : 
Line 3380: [N :MM,%d]  %%!DD [BEGIN] SRNC_REGISTER [%s]
Line 3389: [N :MM,%d]  SendMsg IsFeDvOn: %d
Line 3424: [A :MM,%d]  %%!EM Already RRC SUSPEND IN PROGRESS. Do not send msg
Line 3424: [MM|%d,CP] %%!EM Already RRC SUSPEND IN PROGRESS. Do not send msg
Line 3439: [A :MM,%d]  %%!EM Already RRC SUSPEND IN PROGRESS. Do not send msg
Line 3439: [MM|%d,CP] %%!EM Already RRC SUSPEND IN PROGRESS. Do not send msg
Line 3454: [A :MM,%d]  %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
Line 3454: [MM|%d,CP] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
Line 3481: [A :MM,%d]  %%!EM IRAT Type is not correct!! : %d
Line 3481: [MM|%d,CP] %%!EM IRAT Type is not correct!! : %d
Line 3487: [DumpHex] Send RRC_MM_IRAT_CHANGE_REQ : 
Line 3510: [A :MM,%d]  %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
Line 3510: [MM|%d,CP] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
Line 3523: [N :MM,%d]  Received MM_GMC_IRAT_CHANGE_CNF : Type = %d
Line 3524: [DumpHex] Dump : 
Line 3560: [DumpHex] RRC_MM_IRAT_CHANGE_CNF : 
Line 3575: [A :MM,%d]  %%!EM ERROR : RRC_MM_SECURITY_CONTEXT_IND NasSecurityContext not activated
Line 3575: [MM|%d,CP] %%!EM ERROR : RRC_MM_SECURITY_CONTEXT_IND NasSecurityContext not activated
Line 3607: [A :MM,%d]  %%!EM ERROR : RRC_MM_FEDV_STATE_IND_T alloc failed
Line 3607: [MM|%d,CP] %%!EM ERROR : RRC_MM_FEDV_STATE_IND_T alloc failed
Line 3615: [N :MM,%d]  SendMsg IsFeDvOn: %d
Line 3627: [D :MM,%d]  RRC_MM_SPECIFIC_DRX_IND : DRX LENGTH = %d
Line 3643: [D :MM,%d]  RRC_MM_CAPA_UPDATE_IND : RACS Type = %d
Line 3655: [A :MM,%d]  %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
Line 3655: [MM|%d,CP] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
Line 3676: [DumpHex]  Send Pdata 
Line 3677: [DumpHex]  RRC_MM_TEST_CMD_IND: 
Line 3807: [N :MM,%d]  %%!EM Unknown Msg ID !!
Line 3836: [DumpHex]  RRC_MM_IMS_SERVICE_STATUS_IND: 
Line 3842: [A :MM,%d]  %%!EM ERROR : ConstructRrcImsServiceInd::IMS status = nullptr
Line 3842: [MM|%d,CP] %%!EM ERROR : ConstructRrcImsServiceInd::IMS status = nullptr
Line 3867: [DumpHex]  RRC_MM_SET_PREFERRED_CELL_IND: 
Line 3868: [N :MM,%d]  forbidDuration: %d, numOfPreferredCell: %d
Line 3869: [N :MM,%d]  thresholdRsrp: %d, thresholdRsrq: %d
Line 3870: [N :MM,%d]  thresholdServingCellDeltaRsrp: %d, thresholdSinr: %d
Line 3899: [D :MM,%d]  	RRC_MM_LOW_PWR_MODcn_NrmmMessageE_IND	: TempCtrl = %d, Cause = %d
Line 3929: [DumpHex]  RRC_MM_MANUAL_LIST_STATUS_IND_T: 
Line 3976: [D :MM,%d]  RM_MM_EMERGENCY_NUM_IND : Plmn Id %x %x %x, LocalNumPresent %d, ExtNumPresent %d, EENLV %d
Line 3977: [DumpHex] LocalNumList : 
Line 3978: [D :MM,%d]  ExtListNum %d 
Line 3982: [DumpHex] Ext Number : 
Line 3983: [DumpHex] SubService : 
Line 4001: [D :MM,%d]  BDA INTERNAL FAILURE CAUSE %d
Line 4018: [D :MM,%d]  NRMM REJ cause %d
Line 4034: [D :MM,%d]  Narfcn= %d, PhyCellId = %d
Line 4055: [D :MM,%d]  NWINIT_DEREG %d
Line 4069: [D :MM,%d]  UEINIT_PWR_DEREG %d
Line 4107: [D :MM,%d]  Procedure context %d
Line 4112: [DumpHex] RM_MM_REGISTRATION_STATUS_IND : 
Line 4191: [A :MM,%d]  %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
Line 4191: [MM|%d,CP] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
Line 4210: [N :MM,%d]  %%!EM Unknown Msg ID !!
Line 4278: [D :MM,%d]  RM_MM_CELL_INFO_IND : AccBarringForEmergency = %d, NARFCN(Earfcn) = %d
Line 4280: [D :MM,%d]  RM_MM_CELL_INFO_IND : BarringInfoForDelayTolerant : uacBarringFactor = %d, uacBarringTime = %d , uacBarringAccessIdentity = %d, IsBarred = %d
Line 4282: [D :MM,%d]  RM_MM_CELL_INFO_IND : BarringInfoForEmergency : uacBarringFactor = %d, uacBarringTime = %d , uacBarringAccessIdentity = %d, IsBarred = %d
Line 4284: [D :MM,%d]  RM_MM_CELL_INFO_IND : BarringInfoForMoSig : uacBarringFactor = %d, uacBarringTime = %d , uacBarringAccessIdentity = %d, IsBarred = %d
Line 4286: [D :MM,%d]  RM_MM_CELL_INFO_IND : BarringInfoForMoMMtelVoice : uacBarringFactor = %d, uacBarringTime = %d , uacBarringAccessIdentity = %d, IsBarred = %d
Line 4288: [D :MM,%d]  RM_MM_CELL_INFO_IND : BarringInfoForMoMMtelVideo : uacBarringFactor = %d, uacBarringTime = %d , uacBarringAccessIdentity = %d, IsBarred = %d
Line 4290: [D :MM,%d]  RM_MM_CELL_INFO_IND : BarringInfoForMoSms : uacBarringFactor = %d, uacBarringTime = %d , uacBarringAccessIdentity = %d, IsBarred = %d
Line 4292: [D :MM,%d]  RM_MM_CELL_INFO_IND : BarringInfoForMoData : uacBarringFactor = %d, uacBarringTime = %d , uacBarringAccessIdentity = %d, IsBarred = %d
Line 4294: [D :MM,%d]  RM_MM_CELL_INFO_IND : BarringInfoForImsReg : uacBarringFactor = %d, uacBarringTime = %d , uacBarringAccessIdentity = %d, IsBarred = %d
Line 4296: [DumpHex] RM_MM_CELL_INFO_IND : 
Line 4312: [A :MM,%d]  %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
Line 4312: [MM|%d,CP] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
Line 4328: [D :MM,%d]  ConstructRmStartImsTrafficCnfMsg ReceiveMsg %d
Line 4340: [D :MM,%d]  NRMM Can not handle IMS client's request on suspended state or PLMN search ongoing 
Line 4359: [D :MM,%d]  It's not IMS barring information, Don't need to send RM_MM_START_IMS_TRAFFIC_CNF
Line 4377: [D :MM,%d]  NAS could not send Service request for uplink IMS packet
Line 4391: [D :MM,%d]  RM_MM_START_IMS_TRAFFIC_CNF :eConnfailureInfo =%d
Line 4392: [D :MM,%d]  RM_MM_START_IMS_TRAFFIC_CNF : eImsTrafficType =%d BarredTime = %d Direction = %d
Line 4408: [A :MM,%d]  %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
Line 4408: [MM|%d,CP] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
Line 4516: [D :MM,%d]  RM_MM_IMS_CONNECTIONS_SETUP_IND : FailReason = %d, Cause = %d, waitTime = %d
Line 4542: [N :MM,%d]  Revert target RAT : NR as per IRAT change failed
Line 4591: [N :MM,%d]  RM_MM_PS_CALL_FAIL_IND : cause = %d
Line 4685: [DumpHex] RM_MM_NETSVC_DATA_IND : 
Line 4728: [D :MM,%d]  RM_MM_REG_RESULT_IND : Cause [%d] , RegResultType [%d] 
Line 4838: [A :MM,%d]  %%!EM ERROR : ConstructRmServingCellInfoInd::pRcvMsg = nullptr, m_pNrmmMessage->GetRcvMsgBodyPtr()(%p)
Line 4838: [MM|%d,CP] %%!EM ERROR : ConstructRmServingCellInfoInd::pRcvMsg = nullptr, m_pNrmmMessage->GetRcvMsgBodyPtr()(%p)
Line 4847: [N :MM,%d]  RM_MM_SERVING_CELL_INFO_IND : PCell_band(%X), PSCell_band(%X), rrc_state(%X), scg_state(%X),
Line 4881: [N :MM,%d]  RM_MM_ACTIVE_CIPHER_INTEGRITY_INFO_IND : Connected(%d), Source(%d), CipherAlgo(%d), IntegrityAlgo(%d),
Line 4929: [N :MM,%d]  RM_MM_DISCLOSED_NAS_MSG_IND : PlmnId(%x %x %x), IdType(%d), NasMsgType(%d), IsEmergency(%d),
Line 4958: [A :MM,%d]  %%!EM ERROR : ConstructRmNetworkTimeInd::pRcvMsg = nullptr, m_pNrmmMessage->GetRcvMsgBodyPtr()(%p)
Line 4958: [MM|%d,CP] %%!EM ERROR : ConstructRmNetworkTimeInd::pRcvMsg = nullptr, m_pNrmmMessage->GetRcvMsgBodyPtr()(%p)
Line 5011: [A :MM,%d]  %%!EM ERROR : ConstructRmServingCellInfoInd::pRcvMsg = nullptr, m_pNrmmMessage->GetRcvMsgBodyPtr()(%p)
Line 5011: [MM|%d,CP] %%!EM ERROR : ConstructRmServingCellInfoInd::pRcvMsg = nullptr, m_pNrmmMessage->GetRcvMsgBodyPtr()(%p)
Line 5019: [N :MM,%d]  RM_MM_UAC_BARRING_INFO_IND : AllevImsCategory(%X)
Line 5048: [N :MM,%d]  RM_MM_UAC_BARRING_INFO_IND : allevType(%d)
Line 5064: [DumpHex] RM_MM_CONGESTION_CONTROL_IND_T : 
Line 5082: [DumpHex] RM_MM_FORBIDDANCE_STATUS_IND_T : 
Line 5102: [N :MM,%d]  NrmmMessageExtSim::ConstructSimUpdateReqMsg : RequestorId(%2X), SimFile(%02X), 
Line 5103: [DumpHex] SimEFData
Line 5120: [N :MM,%d]  NrmmMessageExtSim::ConstructSimMultiReadReqMsg, [%d] : RequestorId(%2X), SimFile(%02X), 
Line 5156: [A :MM,%d]  %%!EM ERROR : Cannot find received RAND(%p) or AUTN(%p)
Line 5156: [MM|%d,CP] %%!EM ERROR : Cannot find received RAND(%p) or AUTN(%p)
Line 5175: [D :MM,%d]  Send Usim Auth Req : AuthContext[%d], TransactionId[%d]
Line 5176: [DumpHex] RAND : 
Line 5177: [DumpHex] AUTN : 
Line 5215: [DumpHex] QM_MM_EST_IND : 
Line 5243: [N :MM,%d]  NrmmMessageExtQm::ConstructQmIratChangeIndMsg : TargetRat = %d, Type = %d, Status = %d, Result = %d
Line 5265: [N :MM,%d]  %%!EM NrmmMessageExtQm::ConstructQmStatusIndMsg() MSG : %s
Line 5290: [N :MM,%d]  Don't need to receive EST_REQ on Emergency case
Line 5369: [A :MM,%d]  %%!EM ERROR : Message length limit to 1560 bytes. MsgLen : %d
Line 5369: [MM|%d,CP] %%!EM ERROR : Message length limit to 1560 bytes. MsgLen : %d
Line 5380: [A :MM,%d]  %%!EM ERROR : Payload data is not stored in procedure context
Line 5380: [MM|%d,CP] %%!EM ERROR : Payload data is not stored in procedure context
Line 5428: [W :MM,%d]  %%!EM data is NULL!!
Line 5428: [MM|%d,CP] %%!EM data is NULL!!
Line 5450: [W :MM,%d]  %%!EM data is NULL!!
Line 5450: [MM|%d,CP] %%!EM data is NULL!!
Line 5457: [A :MM,%d]  %%!EM ERROR : Unsupported payload type : %d
Line 5457: [MM|%d,CP] %%!EM ERROR : Unsupported payload type : %d
Line 5477: [A :MM,%d]  %%!EM ERROR : Payload data is not stored in procedure context
Line 5477: [MM|%d,CP] %%!EM ERROR : Payload data is not stored in procedure context
Line 5486: [A :MM,%d]  %%!EM ERROR : ConstructSmsEtwsPrimaryInd::pRcvMsg = nullptr, m_pNrmmMessage->GetRcvMsgBodyPtr()(%p)
Line 5486: [MM|%d,CP] %%!EM ERROR : ConstructSmsEtwsPrimaryInd::pRcvMsg = nullptr, m_pNrmmMessage->GetRcvMsgBodyPtr()(%p)
Line 5493: [A :MM,%d]  %%!EM ERROR : CNS_MM_SMS_ETWS_PRIMARY_IND_T alloc failed
Line 5493: [MM|%d,CP] %%!EM ERROR : CNS_MM_SMS_ETWS_PRIMARY_IND_T alloc failed
Line 5499: [N :MM,%d]  ETWS MsgId(%d) SN(%d) Type(0x%02x%02x) WarnSecuInfoSizeInByte(%d)
Line 5521: [A :MM,%d]  %%!EM ERROR : ConstructSmsEtwsSecondaryInd::pRcvMsg = nullptr, m_pNrmmMessage->GetRcvMsgBodyPtr()(%p)
Line 5521: [MM|%d,CP] %%!EM ERROR : ConstructSmsEtwsSecondaryInd::pRcvMsg = nullptr, m_pNrmmMessage->GetRcvMsgBodyPtr()(%p)
Line 5528: [A :MM,%d]  %%!EM ERROR : CNS_MM_SMS_ETWS_SECONDARY_IND_T alloc failed
Line 5528: [MM|%d,CP] %%!EM ERROR : CNS_MM_SMS_ETWS_SECONDARY_IND_T alloc failed
Line 5534: [N :MM,%d]  ETWS MsgId(%d) SN(%d) WarningMsgLen(%d) WarningMsg(%p) DataCodingScheme(%d)
Line 5557: [A :MM,%d]  %%!EM ERROR : ConstructSmsCmasInfoInd::pRcvMsg = nullptr, m_pNrmmMessage->GetRcvMsgBodyPtr()(%p)
Line 5557: [MM|%d,CP] %%!EM ERROR : ConstructSmsCmasInfoInd::pRcvMsg = nullptr, m_pNrmmMessage->GetRcvMsgBodyPtr()(%p)
Line 5564: [A :MM,%d]  %%!EM ERROR : CNS_MM_SMS_CMAS_INFO_IND_T alloc failed
Line 5564: [MM|%d,CP] %%!EM ERROR : CNS_MM_SMS_CMAS_INFO_IND_T alloc failed
Line 5570: [N :MM,%d]  CMAS MsgId(%d) SN(%d) WarningMsgLen(%d) WarningMsg(%p) DataCodingScheme(%d)
Line 5623: [N :MM,%d]  EMM REG INFO : T3247 Cause(%d)
Line 5653: [DumpHex] EMM_MM_REG_INFO_UPD_IND_T : 
Line 5663: [A :MM,%d]  %%!EM ERROR : ConstructEmmSecInfoUpdateInd::currentNSC is not activated
Line 5663: [MM|%d,CP] %%!EM ERROR : ConstructEmmSecInfoUpdateInd::currentNSC is not activated
Line 5698: [A :MM,%d]  EMM_MM_SEC_INFO_UPDATE_IND : ngKSI[%d] NrIntAlg[%d] EpsIntAlg[%d] EpsEncAlg[%d]
Line 5698: [MM|%d,CP] EMM_MM_SEC_INFO_UPDATE_IND : ngKSI[%d] NrIntAlg[%d] EpsIntAlg[%d] EpsEncAlg[%d]
Line 5699: [A :MM,%d]  EMM_MM_SEC_INFO_UPDATE_IND : UlCount[%d] DlCount[%d]
Line 5699: [MM|%d,CP] EMM_MM_SEC_INFO_UPDATE_IND : UlCount[%d] DlCount[%d]
Line 5700: [DumpHex] EMM_MM_REG_INFO_UPD_IND : K_AMF
Line 5701: [DumpHex] EMM_MM_REG_INFO_UPD_IND : K_INT_NR
Line 5715: [DumpHex] EMM_MM_LTE_NAS_MSG_REQ : 
Line 5744: [A :MM,%d]  %%!EM ERROR : Payload data is not stored in procedure context
Line 5744: [MM|%d,CP] %%!EM ERROR : Payload data is not stored in procedure context
Line 5793: [N :MM,%d]  Revert target RAT : NR as per IRAT change failed
Line 5816: [N :MM,%d]  MM_IMSCC_SERVICE_STATUS_IND : ImsServiceType(%d) Operation(%d)
Line 5824: [N :MM,%d]  MM_IMSAP_SERVICE_STATUS_IND : ImsServiceType(%d) Operation(%d)
Line 5834: [N :MM,%d]  MM_RM_START_IMS_TRAFFIC_REQ : Convert ImsServiceType(%d)
Line 5842: [N :MM,%d]  MM_RM_STOP_IMS_TRAFFIC_REQ : Convert ImsServiceType(%d)
Line 5847: [A :MM,%d]  %%!EM ERROR : ConstructUpmCallStatusInd::MsgId = Unexpected MSG!!
Line 5847: [MM|%d,CP] %%!EM ERROR : ConstructUpmCallStatusInd::MsgId = Unexpected MSG!!
Line 5869: [A :MM,%d]  UPM_MM_CALL_STATUS_IND : CallState[%d]
Line 5869: [MM|%d,CP] UPM_MM_CALL_STATUS_IND : CallState[%d]
Line 5875: [A :MM,%d]  %%!EM ERROR : ConstructUpmCallStatusInd::pRcvMsg = nullptr, m_pNrmmMessage->GetRcvMsgBodyPtr()(%p)
Line 5875: [MM|%d,CP] %%!EM ERROR : ConstructUpmCallStatusInd::pRcvMsg = nullptr, m_pNrmmMessage->GetRcvMsgBodyPtr()(%p)
Line 5894: [A :MM,%d]  %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
Line 5894: [MM|%d,CP] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
Line 5904: [A :MM,%d]  %%!EM ERROR : NasMsgLength is over than MAX_NR_TMC_MSG_PAYLOAD!!!
Line 5904: [MM|%d,CP] %%!EM ERROR : NasMsgLength is over than MAX_NR_TMC_MSG_PAYLOAD!!!
Line 5951: [N :MM,%d]  ConstructSatRegisterReq : update FileList fail.
Line 5957: [N :MM,%d]  ConstructSatRegisterReq FileList[%X]
Line 5959: [DumpHex] SAT_MM_REGISTER_REQ_T : 
Line 5974: [DumpHex] SAT_MM_FILE_CHANGE_CNF_T : 
Line 5994: [DumpHex] SAT_MM_SRVC_SLICE_RSP_T : 
Line 6019: [DumpHex] MM_HMM_SEC_INFO_UPD_IND_T : 
Line 6043: [N :MM,%d]  HMM REG INFO : T3247 PSCause(%d)
Line 6055: [DumpHex] HMM_MM_REG_INFO_UPD_IND_T : 
Line 6092: [A :MM,%d]  %%!EM ERROR : Payload data is not stored in procedure context
Line 6092: [MM|%d,CP] %%!EM ERROR : Payload data is not stored in procedure context
