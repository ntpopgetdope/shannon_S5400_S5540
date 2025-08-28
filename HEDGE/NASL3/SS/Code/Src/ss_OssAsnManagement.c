Line 92: [OSS]:Oss Decoding Started
Line 97: length =%d
Line 98: FacilityIePtr Dump-->..........
Line 100: SS_ProAsnDecode: Input buffer: 
Line 106: SS_ProAsnDecode: Success
Line 109: SS_ProAsnDecode: SIZE_INVALID
Line 112: SS_ProAsnDecode: CHOICE_INVALID
Line 115: SS_ProAsnDecode: RANGE_INVALID
Line 118: SS_ProAsnDecode: UNSUPPORTED_PDU
Line 121: SS_ProAsnDecode: DECODER_LENGTH_EXCEED (InputLen(%d bits) < unpackedLen(%d bits))
Line 124: SS_ProAsnDecode: Misc error #: %d
Line 129: [ASN]: SS_ProAsnDecode FAIL, pdu(%d) ErrorCode(%d) ErrorStruct(%s)
Line 132: [ASN]: SS_ProAsnDecode Success, pdu(%d) unpackedLen(%d bits)
Line 153: [OSS]: Enter ss_OssEncodeMsg
Line 169: [OSS]: Invalid Type of service. Due to that OSS encoding failed
Line 177: SS_ProAsnEncode: Success
Line 180: SS_ProAsnEncode: SIZE_INVALID
Line 183: SS_ProAsnEncode: CHOICE_INVALID
Line 186: SS_ProAsnEncode: RANGE_INVALID
Line 189: SS_ProAsnEncode: UNSUPPORTED_PDU
Line 192: SS_ProAsnEncode: ENCODER_BUFSIZE_EXCEED
Line 195: SS_ProAsnEncode: Misc error #: %d
Line 201: [ASN]: SS_ProAsnEncode FAIL, pdu(%d) ErrorCode(%d) ErrorStruct(%s)
Line 204: [ASN]: SS_ProAsnEncode Success, pdu(%d) packedLen(%d bits)
Line 254: [SS_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
Line 257: [OSS]: Freed ss_OssDecodedMsg ptr
Line 331: [OSS]:[Testing]: Invalid Operation
Line 400: [OSS]:[Testing]: Invalid Operation
Line 409: [OSS]:[Testing]: PDU Number/Local Number = %d
Line 437: Memory Allocation failed!!!
Line 501: [OSS][Testing] :SetBasicServiceCode = %d, ServiceCode = %d
Line 504: [OSS][Testing] :Not Sending Basic Service Group
Line 511: [OSS][DBG] : getarg->bit_mask= %x
Line 516: Memory Allocation failed!!!
Line 555: [OSS][DBG] : LcsCommand= %d
Line 566: molr_Type = %d 
Line 599: [OSS][DBG] : molr_Type = %d 
Line 607: [OSS][DBG] : locationMethod = %d 
Line 627: gpsAssistDataLength = %d 
Line 636: [OSS][DBG] : molr_Type = %d 
Line 646: [OSS][DBG] : locationMethod = %d 
Line 660: [OSS][DBG] : referenceNumber,hGmlcAddressLength,hGmlcAddress = %d,%d,%s 
Line 678: Memory Allocation failed!!!
Line 715: [OSS][DBG] : VerificationRes= %d
Line 724: Memory Allocation failed!!!
Line 770: [OSS]: DataCodingSchemeIe = %d 
Line 775: [OSS]: ussd_DataCodingScheme = %d 
Line 783: [OSS]: ussd_String Length = %d 
Line 827: Memory Allocation failed!!!
Line 858: invarg.decoded
Line 864: [OSS]:[ss_CreateOssInvokeProcessUssdDataArg]: Memory Allocation failed for USSD
Line 902: [OSS]: [Testing]: Basic Service Code = %d
Line 913: [OSS]: TeleService Ie: ServiceCode = %d 
Line 918: [OSS]: BearerService Ie: ServiceCode = %d 
Line 931: [OSS]: BearerService Ie: NoReplyDurationIe = %d 
Line 941: [OSS]: Fwd To Number = %d
Line 949: [OSS]: nbrUser = %d 
Line 956: [OSS]: defaultPriority = %d 
Line 967: [OSS]: [ss_CreateOssInvokeRegisterSsArg]: GetArg Memory allocation failed
Line 989: Memory Allocation failed!!!
Line 1009: [OSS]:[Testing]: Invoke Id = %d
Line 1018: [OSS]: Local value = %d
Line 1060: [OSS]:[Testing]: Invalid Local Value = %d
Line 1105: invarg.decoded
Line 1112: Memory Allocation failed!!!
Line 1157: Memory Allocation failed!!!
Line 1179: Memory Allocation failed!!!
Line 1215: unstructuredSS-Notify: Return Result TRUE
Line 1238: [OSS]: [ss_CreateReturnResultMsg]:Invalid message or Implementation not done
Line 1268: Memory Allocation failed!!!
Line 1354: [OSS]:[Testing]: Invalid value 
Line 1362: Memory Allocation failed!!!
Line 1547: [OSS]:[Testing]:[ss_AnalyzeOssCfxSsInfoIe]: SS_SS_Info_forwardingInfo_chosen 
Line 1553: [OSS]:[Testing]: SS-Code is not present 
Line 1559: [OSS]:[Testing]:[ss_AnalyzeOssCfxSsInfoIe]: In For loop 
Line 1566: [OSS]:[Testing]: BasicServiceCode is not present 
Line 1573: [OSS]:[Testing]: Status is not present 
Line 1593: [OSS]:[Testing]: Telephone Number is not present 
Line 1608: OverallStatus - %d
Line 1609: No Of Bearer services - %d
Line 1611: [OSS]: SS_SS_Info_forwardingInfo_chosen is not Present
Line 1614: [OSS]: OssDecodedSsInfo is NULL
Line 1645: [OSS]:[Testing]: Interrogate SS: SS_InterrogateSS_Res: Choice Value = %d
Line 1651: [OSS]:[Testing]: SsStatus is present. OverallStatus= %d
Line 1665: [OSS]:[Testing]: Interrogate->Choice: SS_basicServiceGroupList_chosen
Line 1670: [OSS]:[Testing]:[ss_AnalyzeOssCfxInterrogateSsResIe]: SS_forwardingFeatureList_chosen 
Line 1676: [OSS]:[Testing]:[ss_AnalyzeOssCfxInterrogateSsResIe]: In For loop 
Line 1685: [OSS]:[Testing]: BasicServiceCode is not present 
Line 1691: [OSS]:[Testing]: Status is  present & Value = %d
Line 1694: [OSS]:[Testing]: Status param not present 
Line 1703: [OSS]:[Testing]: TelephoneNumberDigits are present: TelephoneNumberDigitsLength = %d 
Line 1709: [OSS]:[Testing]: longForwardedToNumber present 
Line 1716: [OSS]:[Testing]: Telephone Number not present 
Line 1733: OverallStatus - %d
Line 1738: [OSS]:[Testing]: Interrogate->Choice: SS_genericServiceInfo_chosen
Line 1744: [OSS]:[Testing]: No Info Present
Line 1846: [OSS]: SS_SS_Info_ss_Data_chosen param not present
Line 1849: [OSS]: OssDecodedReturnResult is NULL
Line 1852: [OSS]: OssDecodedMsgPtr is NULL
Line 1884: [OSS]:[Testing]: Interrogate SS: SS_InterrogateSS_Res: Choice Value = %d
Line 1889: [OSS]:[Testing]: SsStatus is present. OverallStatus= %d
Line 1931: [OSS]:[Testing]: Interrogate->Choice: SS_basicServiceGroupList_chosen: No Of BearerServices = %d 
Line 1934: [OSS]:[Testing]: ss_SsCwxSeq[%d].BasicServiceCode = %d 
Line 1940: [OSS]:[Testing]: Interrogate->Choice: SS_forwardingFeatureList_chosen-> Not Expected 
Line 1945: [OSS]:[Testing]: Interrogate->Choice: SS_genericServiceInfo_chosen
Line 1952: [OSS]:[Testing]: No Info Present
Line 1957: [OSS]: OssInterogateSsDecRetResult is NULL
Line 1991: [OSS]:[Testing]: SS_SS_Info_callBarringInfo_chosen 
Line 2005: [OSS]:[Testing]: BasicServiceCode not present 
Line 2009: [OSS]:[Testing]: SS_CallBarringFeature_ss_Status_present present 
Line 2017: Invalid Operation Type Rxed = %d
Line 2027: OverallStatus - %d
Line 2029: [OSS]:[Testing]: SS_SS_Info_ss_Data_chosen 
Line 2032: [OSS]:[Testing]: SS_SS_Data_ss_Code_present: Present = %d
Line 2037: [OSS]:[Testing]: SS_SS_Data_basicServiceGroupList_present 
Line 2050: [OSS]:[Testing]: SS_SS_Data_ss_Status_present: Present = %d
Line 2064: [OSS]:[Testing]: Invalid Operation type = %d 
Line 2072: [OSS]: IE  not present 
Line 2087: [OSS]:[Testing]: Invalid Operation Type = %d  
Line 2092: [OSS]: IE  not present 
Line 2107: [OSS]:[Testing]: Invalid Operation Type = %d  
Line 2140: [OSS]:[Testing]: Interrogate SS: SS_InterrogateSS_Res: Choice Value = %d
Line 2145: [OSS]:[Testing]: SsStatus is present. OverallStatus= %d
Line 2161: Invalid Operation Type Rxed = %d
Line 2165: [OSS]:[Testing]: Interrogate->Choice: SS_basicServiceGroupList_chosen
Line 2170: [OSS]:[Testing]: Interrogate->Choice: SS_forwardingFeatureList_chosen-> Not Expected 
Line 2175: [OSS]:[Testing]: Interrogate->Choice: SS_genericServiceInfo_chosen
Line 2183: [OSS]:[Testing]: No Info Present
Line 2188: [OSS]: OssInterogateSsDecRetResult is NULL
Line 2243: [OSS]:[Testing]:Validation Success: Send Call Barring Pwd Change Ind to GAPI 
Line 2246: [OSS]:[Testing]:Validation Failed: Send Call Barring Pwd Change Ind to GAPI 
Line 2274: LinkedIdIe -> 0x%02X, InvokeId -> 0x%02X
Line 2301: [OSS]: Interrogate SS: SS_InterrogateSS_Res: Choice Value = %d
Line 2304: [OSS]:SsStatus is present.
Line 2312: [OSS]:: Interrogate->Choice: SS_basicServiceGroupList_chosen: Not expceted for CLIP
Line 2317: [OSS]:: Interrogate->Choice: SS_forwardingFeatureList_chosen-> Not Expected 
Line 2322: [OSS]:: Interrogate->Choice: SS_genericServiceInfo_chosen
Line 2334: [OSS]: No Info Present
Line 2339: [OSS]: OssInterogateSsDecRetResult is NULL
Line 2426: ss_AnalyzeOssInvokeCompIe - ss_State = %s
Line 2430: InvokeId = %d
Line 2433: InvokeId not present
Line 2460: OperationCode -> SS_OP_CODE_NOTIFY_SS.... Do Nothing
Line 2465: OperationCode -> SS_OP_CODE_GET_PWD
Line 2472: OperationCode -> SS_OP_CODE_USS_REQUEST
Line 2498: Message received in illegal ussd state
Line 2523: OperationCode -> SS_OP_CODE_PROCESS_USS_REQUEST
Line 2536: Message received in illegal ussd state
Line 2562: OperationCode -> SS_OP_CODE_USS_NOTIFY
Line 2581: Message received in illegal ussd state
Line 2606: OperationCode -> SS_OP_CODE_LOCATION_NOTIFICATION
Line 2611: OperationCode -> SS_OP_CODE_LCS_AREA_REQ
Line 2617: OperationCode -> SS_OP_CODE_LCS_AREA_CANCEL
Line 2622: Invalid invoke received
Line 2669: [OSS][DBG] : Decoding Success
Line 2710: NotificationType = %d
  locationEstimateType = %d
	            deferredLocationEventType = %d
 dataCodingScheme = %d
 extAddressLength = %d
 nameStringLen = %d
Line 2716: [OSS]:Oss Decoding Failed
Line 2742: [OSS][DBG] : Decoding Success
Line 2779: [OSS]:Oss Decoding Failed
Line 2805: [OSS][DBG] : Decoding Success
Line 2827: [OSS]:Oss Decoding Failed
Line 2857: [OSS][DBG] : Decoding Success
Line 2865: [OSS][DBG] : locationEstimate.length = %d
Line 2871: [OSS][DBG] : Ext_GeographicalInformation
Line 2885: [OSS][DBG] : add_LocationEstimate.length = %d
Line 2891: [OSS][DBG] : Add_GeographicalInformation
Line 2906: [OSS][DBG] : velocityEstimate.length = %d
Line 2917: Velocity Estimate IE Len = %d 
Line 2926: [OSS][DBG] : referenceNumber.length = %d
Line 2928: Reference Number IE = %d 
Line 2939: [OSS][DBG] : h_gmlc_address.length = %d
Line 2942: [OSS][DBG] : GSN_Address
Line 2949: HGLMC IE Len = %d 
Line 2954: [OSS]:Oss Decoding Failed
Line 2986: [OSS]:Oss Decoding Failed
Line 3020: [OSS]: ComponentType = %d
Line 3023: [OSS]: Invoke received
Line 3031: [OSS]: Reject received
Line 3044: [OSS]: Return Error received
Line 3065: [OSS]: Return Result received
Line 3069: Received Invoke ID from NW = %d
Line 3071: Rx (Invoke ID=%d) (Orig ID=%d)
Line 3081: Result Returned Fail.
Line 3086: RX msg is missing an Invoke ID.
Line 3098: [OSS]: Invalid ComponentType = %d
Line 3103: [OSS]:Oss Decoding Failed
Line 3132: [OSS]: ComponentType = %d
Line 3140: [OSS]: InvokeId = %d
Line 3150: [OSS]: unstructuredSS-Request = %d
Line 3160: [OSS]: unstructuredSS-Notify = %d
Line 3185: HCOMMON.MM.LCS_VA_capability = %d
Line 3193: SS_OP_CODE_LOCATION_NOTIFICATION_NOT_SUPPORT
Line 3219: [OSS]: Invalid Local value received = %d
Line 3224: Message doesn't contain a valid InvokeID.
Line 3234: [OSS]: Return Result/Reject/Return Error received: Not Expected in this message
Line 3244: [OSS]: Invalid ComponentType = %d
Line 3249: [OSS]:Oss Decoding Failed
Line 3272: [OSS]: Invoke Received 
Line 3376: [OSS]: Retrun Error Received 
Line 3418: [OSS]: Return Result Received
Line 3432: [OSS]: Received Invoke ID from NW = %d
Line 3433: [OSS]: Rx (Invoke ID=%d) (Orig ID=%d)
Line 3440: [OSS]: Invoke Id not present.
Line 3509: Component Type -> %s
Line 3545: [OSS][DBG] : LocationType
Line 3573: [OSS][DBG] : LCSClientExternalID
Line 3609: [OSS][DBG] : LCSClientName
Line 3627: [OSS][DBG] : lcsClientName.lcs_FormatIndicator
Line 3629: lcsFormatInd = %d
Line 3659: [OSS][DBG] : LCSRequestorID
Line 3665: dataCodingScheme = %d 
Line 3666: requestorIDStringLen = %d, len =%d
Line 3683: [OSS][DBG] : lcsRequestorID.lcs_FormatIndicator
Line 3714: [OSS][DBG] : LCSCodeword
Line 3719: lcsCodewordStringLen = %d, len =%d
Line 3754: [OSS][DBG] : LCSServiceTypeID
Line 3758: lcsServiceTypeIDLen = %d, len =%d
