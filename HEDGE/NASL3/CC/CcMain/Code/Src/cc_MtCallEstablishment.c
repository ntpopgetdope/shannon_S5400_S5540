Line 170: No Bearer 2 Capabilities in cc_DecodeSetupIndMsg
Line 342: Network Supports Multi Calll -> %s
Line 475: Cause of No CLI -> %d
Line 501: No Valid Facility Message sent in cc_DecodeSetupIndMsg
Line 879: cc_ProcessSetupIndMsg.: Error. Gapi Data is NULL
Line 949: Entering cc_DecodeSetupIndMsg....[24.008] - 5.2.2...
Line 974: TransactionId -> %d
Line 991: Ti -> %d
Line 1146: Insufficient resource , Aborting Operations in cc_DecodeSetupIndMsg !
Line 1169: TransactionId already in use !
Line 1172: Invalid TransactionId Flag received from Network !
Line 1195: Unable to Allocate Memory to Send %s Message in cc_SendCcCallConfirmRspMsg
Line 1208: Entering cc_DecodeCallConfirmReqMsg....
Line 1237: Wrong State in cc_DecodeCallConfirmReqMsg !!!.
Line 1243: No Session is Assigned  in cc_DecodeCallConfirmReqMsg, Message Ignored.
Line 1247: No Session Found to contain the given TI in cc_DecodeCallConfirmReqMsg, Message Ignored.
Line 1269: Unable to Allocate Memory to Send %s Message in cc_SendCallListUpdateMsg
Line 1408: Facility : TotalLen %d
Line 1418: CompoCnt is larger than max
Line 1426: CompoCnt(%d) : FacilityPtr[%d] 0x%x is not expected value
Line 1440: LoopCount(%d) : Length Sum %d, CurrentLen[%d] %d
Line 1443: The sum of length (%d) is larger than total length (%d)
Line 1459: Memory Allocation Failed
Line 1467: Facility : LoopCount %d CurrentStartPos %d CurrLen %d
Line 1485: Facility : SS Code = %d, SS Notification = %d, CUG ind = %d, CNAP = %d
Line 1520: [OSS]: Invalid SscodeIE received
Line 1526: SS notification (0x%02X) and CallForwardingIndication (0x%02X) in cc_HandleFacilityIEInSetupInd
Line 1528: [CNAP]%d 
Line 1540: Memory Free : LoopCount %d
Line 1579: Entering cc_CheckBearerCompatibility function
Line 1590: pal_MemAllocWithCaller() failure
Line 1611: Invalid RAT Mode
Line 1614: CcRatMode = %d
Line 1620: Received InfoTransferCapabilty = %d
Line 1626: Updated InfoTransferCapabilty = %d
Line 1668: cc_CheckBearerCompatibility: Bearer capability 1 is not filled
Line 1973: CUG Data Not Available in cc_SendCcSetupIndMsg
Line 2213: WbAmrEnabled = %d
Line 2268: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 2370: cc_PerformBearerNegotiation
Line 2374: Unable to Allocate Memory
Line 2426: RetValue = %d
Line 2428: Received Null Bearer cap1 params
Line 2437: BC Reading Failed
Line 2492: BC1 Length -> %d
Line 2494: Session Not assigned
Line 2592: Bearer Capability 1 -->
Line 2606: Bearer Capability 2 -->
Line 2684: Invalid Rat Mode selcted to extract Sup Codec List from Regis: %d
Line 2694: Suported Codec List Not Available
Line 2743: Network Does Not Support Multi Call
Line 2769: Voice Call Already Present
Line 2826: Displaying Message Contents: %s
Line 2899: Unable to Allocate Memory to Send %s Message in cc_SendCallConfReqMsg
Line 2908: Session not assigned
Line 2950: Entering cc_DecodeCcRejReqMsg, GAPI Rejecting the MT Call......
Line 2964: TransactionId  -> %d
Line 3041: No need to send CC_REJECT_IND(Above layers doesn't have MT call ctxt)
Line 3070: No need to send CC_REJECT_IND(Above layers doesn't have MT call ctxt)
Line 3111: Message not expected OR Ignored in cc_DecodeCcRejReqMsg
Line 3118: CallSession %d is NOT Active in cc_DecodeCcRejReqMsg
Line 3122: No Session Found to contain the given TI in cc_DecodeCcRejReqMsg, Message Ignored.
Line 3144: Entering cc_SendAlertReqMsg 
Line 3146: TransactionId  -> %d
Line 3164: Unable to Allocate Memory to Send %s Message in cc_SendAlertReqMsg
Line 3175: Message not expected OR Ignored in cc_SendAlertReqMsg
Line 3182: Session Not Assigned in cc_SendAlertReqMsg, Message Ignored
Line 3218: Entering cc_DecodeCcConnectReqMsg....
Line 3226: TransactionId  -> %d
Line 3293: RatMode: %d, callType1: %d 
Line 3299: Determining VCG action for Early User Connection
Line 3313: CONN_CNF for CSVT
Line 3318: Early User Connection invalid for non voice calls
Line 3330: Message not expected OR Ignored in cc_DecodeCcConnectReqMsg
Line 3336: CallSession %d is NOT Active in cc_DecodeCcConnectReqMsg
Line 3340: No Session Found to contain the given TI in cc_DecodeCcConnectReqMsg, Message Ignored.
Line 3404: CugReqDataPresent   = %d in cc_SendConnectReqMsg
Line 3413: Displaying Message Contents: %s
Line 3420: Unable to Allocate Memory to Send %s Message in cc_SendConnectReqMsg
Line 3445: Entering cc_DecodeConnAckIndMsg....
Line 3463: TransactionId  -> %d
Line 3494: VCG need to activated. Saved MM Sync Ind should be processed
Line 3497: VCG need to activate for Voice call only
Line 3541: Connect_Ack_Ind received in unexpected State %d
Line 3554: CallSession %d is NOT Active in cc_DecodeConnAckIndMsg
Line 3558: No Session Found to contain the given TI in cc_DecodeConnAckIndMsg, Message Ignored.
Line 3590: Displaying Message Contents: %s
Line 3591: Ti     -> %d
Line 3592: RabId  -> 0x%02X
Line 3597: Unable to Allocate Memory to Send %s Message in cc_SendCcConnectCnfMsg
Line 3615: Network Transfer Capability Before -> %d
Line 3620: Updated Network Transfer Capability to -> %d
Line 3622: Network Transfer Capability After -> %d
Line 3651: cc_GetNsCallTypefromNtwkCallType(): Cannot bc_create_bearer
Line 3658: cc_GetNsCallTypefromNtwkCallType(): bc_put_bearer, BcStatus -> %d
Line 3663: cc_GetNsCallTypefromNtwkCallType(): Cannot bc_get_bearer_element
Line 3676: cc_GetNsCallTypefromNtwkCallType(): Cannot bc_get_bearer_element
Line 3752: NORMAL Initialisation of <MT Call Establishment>
Line 3760: GSM to UMTS Initialisation of <MT Call Establishment>
Line 3766: UMTS to GSM Initialisation of <MT Call Establishment>
Line 3774: Unknown Initialisation Type (%d) in cc_InitialiseMtCallEstablishment
Line 673: MT call released because CS call is blocked
Line 685: MT call released with cause User busy. Reason: CSVT call is in progress
Line 694: MT call released with cause User busy. Reason: cc_MtCallBlockStatus(%d)
Line 702: cc_CsvtCallSupport = %d, GapiData.CallType1 = %d
Line 706: MT VT call released with cause User busy. Reason: CS call is in progress
Line 715: MT call released with cause User busy. Reason: CS call is in progress
Line 729: 2nd MT call is disconnected with cause User busy. Reason: Call waiting is disabled in AP IMS
Line 743: Terminal Based Call Waiting Enabled is %d
Line 747: 2nd MT call is disconnected with cause User busy. Reason: Call waiting is disabled in IMS
Line 757: MT call released with cause User busy. Reason: MO call establishment is in progress
Line 776: Release previous MO call with cause Normal Clearing. Reason: MT call establishment is in progress and still MM connection is not established for MO call
Line 821: Accept MT call, Call Session Number -> %d
Line 831: Video Call is Allowed
Line 229: Low Layer Compatibility 1->
Line 233: No Low Layer Compatibility 1 in cc_DecodeSetupIndMsg
Line 243: Low Layer Compatibility 2->
Line 247: No Low Layer Compatibility 2 in cc_DecodeSetupIndMsg
Line 257: High Layer Compatibility 1->
Line 261: No High Layer Compatibility 1 in cc_DecodeSetupIndMsg
Line 271: High Layer Compatibility 2->
Line 275: No High Layer Compatibility 2 in cc_DecodeSetupIndMsg
Line 313: Signal Ind Present -> %s
Line 369: Calling Party Number ....->
Line 380: Calling Party Sub Address ....->
Line 387: No Valid Calling Party Sub address Given in cc_DecodeSetupIndMsg
Line 390: No Valid Calling Party Number in cc_DecodeSetupIndMsg
Line 420: Called Party Number ....->
Line 426: No Valid Called Party Number in cc_DecodeSetupIndMsg
Line 442: Called Party Sub Address ....->
Line 449: No Valid Called Party Sub address Given in cc_DecodeSetupIndMsg
Line 525: Number PLUS recieved from NW
Line 531: Redirecting Party Number ....->
Line 542: Redirecting Party Sub Address ....->
Line 549: No Valid Redirecting Party Sub Address Given in cc_SendCcSetupIndMsg
Line 557: No Valid Redirecting Party Number In cc_DecodeSetupIndMsg
Line 585: No Priority Given in cc_DecodeSetupIndMsg
Line 610: Progress Indicator ....->
Line 617: No Progress Indicator Given in cc_DecodeSetupIndMsg
Line 643: Alerting Pattern -> %d
Line 1754: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 1763: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 1768: No Valid Calling Party Number in cc_SendCcSetupIndMsg
Line 1824: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 1829: CalledPartyNumber is absent!!
Line 1861: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 2154: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 1913: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 1944: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 2016: Unable to Allocate Memory for ProgressIndicator in  %s Message in cc_SendCcSetupIndMsg
Line 2297: Bearer ID is negative
Line 2304:  pal_MemAllocWithCaller() failure
Line 2314: Bearer Capability Error
Line 2322: Bearer ID is negative
