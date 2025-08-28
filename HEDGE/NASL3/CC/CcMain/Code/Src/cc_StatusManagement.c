Line 299: Displaying Send Status Req Message Contents: %s
Line 310: Unable to Allocate Memory to Send %s Message in cc_SendStatusReqMsg
Line 325: Entering cc_SendStatusEnqReqMsg
Line 339: Unable to Allocate Memory to Send %s Message in cc_SendStatusEnqReqMsg
Line 366: Entering cc_DecodeStatusEnqIndMsg
Line 380: TransactionId -> %d
Line 436: No Session Found to contain the given TI in cc_DecodeStatusEnqIndMsg, Message Ignored.
Line 556: NW cc state=%d
Line 583:  For Data Calls, CC does not need to inform VCG or RABM
Line 632: Start CONNECT_IND_WAIT_TIMER again(%d)
Line 641: VCG need to activated. Saved MM Sync Ind should be processed
Line 648: VCG need to activate for Voice call only
Line 721: No need to send CC_DISCONNECT_IND(Above layers doesn't have MT call ctxt)
Line 735: Save CallDrop: Type=%d, Cause=%d
Line 764: Retransmiting Connect as network state is ALERTING
Line 778: UE state already moved to another state!!
Line 805: Status state or CauseIe not found in cc_DecodeStatusIndMsg
Line 861: Entering cc_DecodeStatusIndMsg.... Network Detected an Error
Line 889: TransactionId -> %d
Line 918: CauseIe Length = %d in cc_DecodeStatusIndMsg
Line 947: Response to status enquiry. UE cc state=%d
Line 951: Not a Response to status enquiry
Line 955: cc_DecodeStatusIndMsg - invaild CcCauseLen = %d received
Line 968: cc_DecodeStatusIndMsg - msg ignored
Line 980: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 998: No need to send CC_DISCONNECT_IND(Above layers doesn't have MT call ctxt)
Line 1012: Save CallDrop: Type=%d, Cause=%d
Line 1024: No Session Found to contain the given TI in cc_DecodeStatusIndMsg, Message Ignored.
Line 1052: cc_DetermineAction - status : send Release Complete
Line 1062: cc_DetermineAction - status: ignored
Line 1073: cc_DetermineAction - status : incompatible state
Line 1077: cc_DetermineAction - status: compatible state
Line 1085: cc_DetermineAction - status: cause => disconnect
Line 1092: cc_DetermineAction - status: cause OK
Line 1123: Not GSM state in cc_ReadReceivedNetworkState
Line 1128: CallStateIe not found in cc_ReadReceivedNetworkState
Line 1156: Non GSM cause in cc_ReadCause
Line 1160: CauseIe not found in cc_ReadCause
Line 1204: Found Compatible State in cc_CheckEtsiStateCompatibility
Line 1213: Unable to Find NetworkState in cc_EtsiCompatibleStatesList, in cc_CheckEtsiStateCompatibility !!
Line 1234: Current State = %s, Equivalent Etsi State = %s in cc_ConvertToEtsiState
Line 1238: Attempting to Read cc_EtsiStateConversionList Using an Invalid State (0x%x) in cc_ConvertToEtsiState
Line 1275: NORMAL Initialisation of <Status Management>
Line 1280: GSM to UMTS Initialisation of <Status Management>
Line 1285: UMTS to GSM Initialisation of <Status Management>
Line 1292: Unknown Initialisation Type (%x) in cc_InitialiseStatusManagement
