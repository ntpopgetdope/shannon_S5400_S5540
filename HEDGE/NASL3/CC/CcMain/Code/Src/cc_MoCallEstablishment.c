Line 86: cc_CheckEmergenyNum
Line 87: Emergency Number!!!  -> %x%x
Line 120: cc_ProcessUsatUsatCcCallCtrlCfmMsg
Line 130: USAT (Call Control) - Rejected the call
Line 199: USAT Call Control request is success- No change in params
Line 345: Rejecting User's Req in cc_CheckSetUpReqCanBeProcessed ! cc_FlightMode is On!!
Line 352: Saving Setup Req in cc_CheckSetUpReqCanBeProcessed ! RAT Change in progress !!
Line 362: Invalid CallType 
Line 373: CalledPartyNumberLength -> %d
Line 374: Called Party Number Ptr is NULL or Length is Invalid!!, Call Rejected in cc_CheckSetUpReqCanBeProcessed !
Line 381: Already call is in progess with this TID, Call Rejected in cc_CheckSetUpReqCanBeProcessed !
Line 394: AudioHoldOff()
Line 396: All Voice Calls are Held .....
Line 400: This is NOT a Multi Media Call .....
Line 404: This is a Multi Media Call .....
Line 429: Voice Calls are NOT Held...
Line 485: Entering cc_DecodeCcSetupReqMsg....[24.008] - 5.2.1...
Line 493: Setup Req is saved  ,Shall be retrieved after Redial timer expiry!
Line 512: This is the First Call ....
Line 519: Discarding Saved MmSyncIndMsg
Line 524: Call Accepted....
Line 539: New Allocated CallSessionNumber in cc_DecodeCcSetupReqMsg -> %d
Line 561: USAT Call control not enabled
Line 600: Insufficient resource , Call Rejected in cc_DecodeCcSetupReqMsg !
Line 639: Entering cc_DecodeCcBearerCapSetReqMsg function
Line 647: Handle CBST command
Line 655: Encode CBST success
Line 660: Encode CBST command fail
Line 669: Handle CTM command
Line 677: Invalid command received
Line 705: CBST Bearer Cap DataPresent  -> %s
Line 706: CBST Bearer Cap Length  -> %d
Line 707: CBST Bearer Cap Ptr  ->
Line 713: CBST Bearer Cap param are not set
Line 745: cc_PerformBearerService:CcCallType = %d
Line 753: CC RAT = %d
Line 768: pal_MemAllocWithCaller() failure
Line 780: CC Call type = CC_VOICE_CALL_TYPE or CC_EMERG_CALL_TYPE
Line 790: CC Call type = CC_VIDEO_CALL_TYPE
Line 810: CC Call type = CC_DATA_CALL_TYPE
Line 813: MO Call: Set Bearer Capabilities recieved through AT+CBST cmd
Line 821: MO Call: Set Default Bearer Capabilities
Line 840: Invalid call type received. So bearer capabilities IE is not filled
Line 854: Not able to retrieve Bearer Capability params
Line 865: Invalid Session
Line 890: CallType1 -> %s
Line 892: CallType2 -> %s
Line 895: Restriction Indicator -> %s
Line 898: Calling Party Sub Address ....->
Line 904: No Calling Party Sub Address Sent
Line 909: User To User Data ....->
Line 915: No User To User Data Sent
Line 918: Priority -> %d
Line 984: Entering cc_DecodeMmCmrqIndMsg Indicating that RR Connection is Established....
Line 988: TransactionId  -> %d
Line 1014: Message not expected in cc_DecodeMmCmrqIndMsg
Line 1022: CallSession %d is NOT Active,  in cc_DecodeMmCmrqIndMsg
Line 1028: No Session Found to contain the given TI in cc_DecodeMmCmrqIndMsg, Message Ignored.
Line 1050: Entering cc_DecodeMmEstCnfMsg Indicating that MM Connection is Established....
Line 1054: TransactionId -> %d
Line 1063: CC_RETRY_DELAY_TIMER stop timer
Line 1106: Message not expected in cc_DecodeMmEstCnfMsg
Line 1114: CallSession %d is NOT Active,  in cc_DecodeMmEstCnfMsg
Line 1120: No Session Found to contain the given TI in cc_DecodeMmEstCnfMsg, Message Ignored.
Line 1212: Invalid Rat Mode selcted to extract Sup Codec List from Regis: %d
Line 1232: 
-------------- Displaying Message Contents: %s
Line 1247: Fail to Encode the message and Call Rejected....
Line 1460: Invalid Rat Mode selcted to extract Sup Codec List from Regis: %d
Line 1582: CugReqDataPresent   = %d in cc_SendSetupReqMsg
Line 1612: Entering cc_SendSetupReqMsg....
Line 1680: Unable to Allocate Memory to Send %s Message in cc_SendSetupReqMsg
Line 1759: Unable to Allocate Memory for FacilityForwardCugInfoPtr in cc_HandleCugData
Line 1764: [OSS]: Oss Encoding Failed
Line 1769: [OSS]: Oss Encoding Failed
Line 1800: Bearer1CapabilitiesLength  -> %d
Line 1802: Bearer1CapabilitiesPtr  -> 
Line 1809: Bearer1CapabilitiesLength  -> %d
Line 1845: SupportedCodecListLength  -> %d
Line 1847: SupportedCodecListPtr  -> 
Line 1856: SupportedCodecListLength  -> %d
Line 1885: CLIdPresentationDataPresent  -> %s
Line 1887: CallingPartySubAddressLength  -> %d
Line 1889: CallingPartySubAddressPtr  -> 
Line 1896: CLIdPresentationDataPresent  -> %s
Line 1901: CalledPartyNumberDataPresent  -> %s
Line 1903: CalledPartyNumberLength  -> %d
Line 1907: CalledPartyNumberPtr  -> 
Line 1912: CalledPartySubAddressLength  -> %d
Line 1916: CalledPartySubAddressPtr  -> 
Line 1927: CalledPartyNumberDataPresent  -> %s
Line 1932: EmlppReqDataPresent  -> %s
Line 1934: EmlppPriorityLevel  -> %d
Line 1939: EmlppReqDataPresent  -> %s
Line 1944: CugReqDataPresent  -> %s
Line 1946: SuppressPreferentialIndicator  -> %d
Line 1947: CugIndex1                      -> %d
Line 1948: CugIndex2                      -> %d
Line 1949: SuppressOaIndicator            -> %d
Line 1954: CugReqDataPresent  -> %s
Line 1957: RestrictionIndicator  -> %d
Line 1988: Entering cc_DecodeProgressIndMsg [24.008] - 5.2.1.4.2....
Line 2001: TransactionId -> %d
Line 2090: Message not expected in cc_DecodeProgressIndMsg
Line 2117: CallSession %d is NOT Active,  in cc_DecodeProgressIndMsg
Line 2123: No Session Found to contain the given TI in cc_DecodeProgressIndMsg, Message Ignored.
Line 2181: Unable to Allocate Memory for ProgressIndicator in  %s Message in cc_SendCcProgressIndMsg
Line 2192: Displaying Message Contents: %s
Line 2196: Progress Indicator Byte 0 -> 0x%02X
Line 2202: No Progress Indicator Sent
Line 2210: Unable to Allocate Memory to Send %s Message in cc_SendCcProgressIndMsg
Line 2256: Entering cc_DecodeCallProceedingIndMsg....[24.008]-5.2.1.3
Line 2258: TransactionId -> %d
Line 2336: Network Supports Multi Call -> %s
Line 2349: No Bearer 1 Capabilities in cc_DecodeCallProceedingIndMsg
Line 2365: No Bearer 2 Capabilities in cc_DecodeCallProceedingIndMsg
Line 2379: No Repeat Indicator Available in cc_DecodeCallProceedingIndMsg
Line 2402: [OSS]: Oss Decoding Failed
Line 2407: CUG Data Not Available in cc_DecodeCallProceedingIndMsg
Line 2428: No Priority Given in cc_DecodeCallProceedingIndMsg
Line 2451:  Ignoring cc_DecodeCallProceedingInd message received in CC_Disconnect_requested State: call will be released
Line 2459: Message not expected in cc_DecodeCallProceedingIndMsg
Line 2486: SessionStatus is NOT active for this CallSessionNumber !! in cc_DecodeCallProceedingIndMsg
Line 2510: No Session Found to contain the given TI in cc_DecodeCallProceedingIndMsg, Message Ignored.
Line 2580: Unable to Allocate Memory for ProgressIndicator in  %s Message in cc_SendCcCallProcIndMsg
Line 2601: CUG Data Not Available in cc_SendCcCallProcIndMsg
Line 2621: WbAmrEnabled = %d
Line 2628: Unable to Allocate Memory to Send %s Message in cc_SendCcCallProcIndMsg
Line 2671: Entering cc_DecodeAlertIndMsg....[24.008]-5.2.1.5
Line 2673: TransactionId -> %d
Line 2746: Nothing needs to be done here
Line 2754:  For Data Calls, CC does not need to inform VCG or RABM
Line 2796: Internal Alerting -> %s
Line 2833: Session State  is NOT valid for this message !! in cc_DecodeAlertIndMsg
Line 2852: Message not expected in cc_DecodeAlertIndMsg
Line 2879: SessionStatus is NOT active for this CallSessionNumber !! in cc_DecodeAlertIndMsg
Line 2927: No Session Found to contain the given TI in cc_DecodeAlertIndMsg, Message Ignored.
Line 2975: Internal Alerting -> %s
Line 3005: Unable to Allocate Memory for ProgressIndicator in  %s Message in cc_SendCcCallProcIndMsg
Line 3021: Call Waiting Indication-> %s
Line 3030: CallForwardingStatus == %d
Line 3032: Call Divert Indication-> %s
Line 3039: Unable to Allocate Memory to Send %s Message in cc_SendCcAlertIndMsg
Line 3158: Session State  is NOT valid for this message !! in cc_DecodeConnectIndMsg
Line 3451: Entering cc_DecodeConnectIndMsg....[24.008]-5.2.1.6
Line 3453: TransactionId -> %d
Line 3509: Message ignored in cc_DecodeConnectIndMsg
Line 3535: SessionStatus is NOT active for this CallSessionNumber !! in cc_DecodeConnectIndMsg
Line 3588: No Session Found to contain the given TI in cc_DecodeConnectIndMsg, Message Ignored.
Line 3619: [OSS]: Oss Decoding got faield
Line 3661: TransactionId -> %d
Line 3668: Internal Alerting -> %s
Line 3675: RabId -> 0x%02X
Line 3705: Unable to Allocate Memory for ProgressIndicator in  %s Message in cc_SendCcSetupCnfMsg
Line 3770: Error In cc_AllocateMemoryForSeparateBuffer for ConnectedSubAddressPtr in cc_SendCcSetupCnfMsg
Line 3782: Unable to Allocate Memory for ConnectedLineIdPresentation in  %s Message in cc_SendCcSetupCnfMsg
Line 3816: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupCnfMsg
Line 3837: Entering cc_SendCcBearerCapSetRspMsg
Line 3851: BearerCommandType: %d
Line 3852: BearerType: %d
Line 3853: Result: %d
Line 3859: Unable to Allocate Memory to Send %s Message in cc_SendCcBearerCapSetRspMsg
Line 3890: Unable to Allocate Memory to Send %s Message in cc_SendConnAckReqMsg
Line 3913: Entering cc_DecodeCcModifyReqMsg....[24.008]-5.2.1.6
Line 3916: TransactionId -> %d
Line 3993: Unable to Allocate Memory to Send %s Message in cc_SendModifyReqMsg
Line 4027: Entering cc_DecodeModifyCompIndMsg Indicating that MM Connection is Established....
Line 4029: TransactionId -> %d
Line 4100: No Session Found to contain the given TI in cc_DecodeModifyCompIndMsg, Message Ignored.
Line 4133: Displaying Message Contents: %s
Line 4143: Unable to Allocate Memory to Send %s Message in cc_SendCcModifyCnfIndMsg
Line 4178: Entering cc_DecodeModifyRejIndMsg Indicating that MM Connection is Established....
Line 4180: TransactionId -> %d
Line 4214: CauseIe not available in cc_DecodeModifyRejIndMsg
Line 4273: No Session Found to contain the given TI in cc_DecodeModifyRejIndMsg, Message Ignored.
Line 4322: Displaying Modify Rej Ind Message Contents: %s
Line 4336: Unable to Allocate Memory to Send %s Message in cc_SendCcModifyRejIndMsg
Line 4370: Entering cc_DecodeModifyIndMsg Indicating that MM Connection is Established....
Line 4372: TransactionId -> %d
Line 4442: No Session Found to contain the given TI in cc_DecodeModifyIndMsg, Message Ignored.
Line 4477: Displaying Modify Ind Message Contents: %s
Line 4487: Unable to Allocate Memory to Send %s Message in cc_SendCcModifyIndMsg
Line 4512: Entering cc_DecodeCcModifyCompReqMsg....[24.008]-5.2.1.6
Line 4514: TransactionId -> %d
Line 4586: Unable to Allocate Memory to Send %s Message in cc_SendModifyCompReqMsg
Line 4626: Entering cc_DecodeCcModifyRejReqMsg....[24.008]-5.2.1.6
Line 4628: TransactionId -> %d
Line 4744: Unable to Allocate Memory to Send %s Message in cc_SendModifyRejReqMsg
Line 4767: Entering cc_DecodeCcNotifyReqMsg [24.008] - 5.2.1.4.2....
Line 4769: TransactionId -> %d
Line 4798: Notify lost in re-establish in cc_DecodeCcNotifyReqMsg
Line 4805: Message ignored in cc_DecodeCcNotifyReqMsg
Line 4814: No Session Found to contain the given TI in cc_DecodeCcNotifyReqMsg, Message Ignored.
Line 4901: cc_MapNsToCcCallState INVALID SRVCC NscallState =%d
Line 4929: Entering cc_DecodeCcSrvccHoCallSetupReqMsg
Line 4930: Number of Active Call Sessions =%d
Line 4942: Already call is in progess with this TID, Call Rejected in cc_DecodeCcSrvccHoCallSetupReqMsg !
Line 4962: Invalid CallType 
Line 4969: Call Accepted....
Line 4999: Call Rejected....
Line 5009: Insufficient resource , Call Rejected in cc_DecodeCcSrvccHoCallSetupReqMsg !
Line 5015: cc_SrvccCallCntxtSetupFinished ==%d
Line 5035: Entering cc_DecodeCcRetrieveSrvccHoCnfReqMsg
Line 5036: cc_SrvccCallCntxtSetupFinished ==%d,Number of Active Call Sessions =%d
Line 5049: cc_CheckMmSrvccHoCnfMsgSaveStatus is TRUE in cc_DecodeCcRetrieveSrvccHoCnfReqMsg !
Line 5115: cc_map_IMSSH_to_CC_CallState INVALID SRVCC NscallState =%d
Line 5144: Entering cc_DecodeCcAimsSrvccHoCallSetupIndMsg
Line 5145: [AIMS_SRVCC]<============================================
Line 5146: [AIMS_SRVCC]Number of Active Call Sessions =%d
Line 5160: [AIMS_SRVCC]Datas
Line 5161: [AIMS_SRVCC]From IMS got  %d calls
Line 5168: [AIMS_SRVCC][%d]CallType =%d ,CcTid=0x%x, ImsTid = 0x%x, CallState = %d 
Line 5172: Already call is in progess with this TID, Call Rejected in cc_DecodeCcAimsSrvccHoCallSetupIndMsg !
Line 5189: Invalid CallType 
Line 5196: Call Accepted....
Line 5214: Call Connect Status - from IMS : %d , In CC :  %d
Line 5220: Call Rejected....
Line 5229: Insufficient resource , Call Rejected in cc_DecodeCcAimsSrvccHoCallSetupIndMsg !
Line 5234: [AIMS_SRVCC][%d]CallType =%d ,CcTid=0x%x, ImsTid = 0x%x, CallState = %d 
Line 5240: cc_CheckMmSrvccHoCnfMsgSaveStatus ,  in cc_DecodeCcAimsSrvccHoCallSetupIndMsg !
Line 5244: gSrvcc_call_cntxt_setup_finished ==%d
Line 5245: [AIMS_SRVCC]============================================>
Line 5283: Unable to Allocate Memory to Send %s Message in cc_SendNotifyReqMsg
Line 5306: Other Calls Already Acitve
Line 5310: User Requests Multi Call
Line 5314: Mobile Supports Multi Call
Line 5318: Network Supports Multi Call
Line 5322: Unable To Find an Available Stream Identifier
Line 5331: Network Does NOT Supports Multi Call
Line 5336: Mobile Does NOT Supports Multi Call
Line 5341: User Does NOT Request Multi Call
Line 5631: Emergency Call Category -> %s
Line 5702: Progress Indicator -> %s
Line 5722: NORMAL Initialisation of <MO Call Establishment>
Line 5743: GSM to UMTS Initialisation of <MO Call Establishment>
Line 5749: UMTS to GSM Initialisation of <MO Call Establishment>
Line 5757: Unknown Initialisation Type (%d) in cc_InitialiseMoCallEstablishment
Line 1314: 
-------------- Displaying Message Contents: %s
Line 1329: Fail to Encode the message and Call Rejected....
Line 3061: MultiCallUsed -> TRUE
Line 3067: This is a Voice Call
Line 3071: VCG Cnf already received -> Accept Connect Ind Msg
Line 3076: Must Wait For VCG Cnf. This Msg is Saved Until then...
Line 3082: This is a Data Call
Line 3084: Sync Ind has arrived -> Accept Connect Ind Msg
Line 3090: In Multi Call, Every Call Must Have a Sync Ind. Wait Until Sync Ind Arrives. This Msg is Saved Until then...
Line 3096: MultiCallUsed -> FALSE
Line 3100: This is a Voice Call
Line 3104: Either Sync Ind has arrived or this is a second voice call and VCG already activated. VCG CNF already received -> Accept Connect Ind Msg
Line 3109: GCF test USAT 27.22.4.27.2
Line 3114: Must Wait Until Sync Ind &/or VCG Cnf Arrives. This Msg is Saved Until then...
Line 3120: This is a Data Call
Line 3124: Either Sync Ind has arrived or this is a second call. For a single bearer, no more Sync Ind will arrive -> Accept Connect Ind Msg
Line 3129: Must Wait Until Sync Ind Arrives. This Msg is Saved Until then...
Line 3247: Nothing needs to be done here
Line 3255:  For Data Calls, CC does not need to inform VCG or RABM
Line 3323: CMCC : Ignore Connected Number in cc_DecodeConnectIndMsg
Line 3356: No Valid  Connected Sub Address in cc_DecodeConnectIndMsg
Line 3362: No Valid  Connected Sub Address in cc_DecodeConnectIndMsg
Line 3368: No Valid Connected Number in cc_DecodeConnectIndMsg
Line 3374: No Valid Connected Number in cc_DecodeConnectIndMsg
