Line 105: EUTRAN_LCS_Initialise()
Line 124: EUTRAN_LCS_ProcessMessage()
Line 128: EUTRAN_LCS_ProcessMessage() - data length is wrong
Line 138: ERROR!!! NOT Supplementary Services Protocol discriminator(0x0B) (0x%x)
Line 155: EUTRAN_LCS_ProcessMessage() - Undefined Message Type
Line 974: EUTRAN_LCS_EncodeLCS_Msg()
Line 1317: lcsm_GetRrcAsstIndex() - Index value exceeded, index = %x
Line 1440: lcsm_GetRrAsstIndex() - Index value exceeded, index = %x
Line 1563: lcsm_StoreSI15Data() - Index Value%d is exceeding
Line 1638: lcsm_StoreSI15_1Data() - Index Value %d  exceeding 
Line 1687: lcsm_StoreSI15_2Data() - Index Value %d exceeding
Line 1742: lcsm_StoreSI15_3Data() - Index Value %d exceeding
Line 1847: lcsm_ExtractAlmanacData() - Index Value %d exceeding
Line 1852: lcsm_ExtractAlmanacData() - Extracting Almanac Data
Line 1919: lcsm_ExtractDgpsData() - Index Value %d is exceeding 
Line 1924: lcsm_ExtractDgpsData() - Extracting DGPS Data
Line 1931: LCSM Stop Timer = %x
Line 2005: LCSM Start Timer = %x
Line 2010: lcsm_ExtractDgpsData() - MALLOC FAIL!!!
Line 2019: lcsm_ExtractDgpsData() - LBS ==> SMS: LBS_SMSCB_ASSIST_DATA_CHK_IND
Line 2055: lcsm_ExtractEphemerisData() - Index Value %d exceeding
Line 2060: lcsm_ExtractEphemerisData() - Extracting Ephemeris Data
Line 2207: lcsm_ResetSIInfo() - RESETTING SI Asst data
Line 2229: lcsm_ValidateCipherKey() - LBS ==> SS: LBS_SS_DECIPHER_KEY_REQ
Line 2366: lcsm_ProcessSsLcsmDecipherKeyInd()
Line 2384: RXed SI15-3 data
Line 2393: Decoding of SI15-3 failed
Line 2409: RXed SI15-2 data
Line 2419: Decoding of SI15-2 failed
Line 2435: RXed SI15-1 data
Line 2445: Decoding of SI15-1 failed
Line 2490: lcsm_ProcessCbch()
Line 2511: No decipher keys available
Line 2533: CBCH data to be extracted = %x
Line 2549: Wrong valid_data(0x%x)
Line 2952: lcsm_ProcessSIData()
Line 3361: <<--------------------------------
Line 3362: | ++ MOLRArg
Line 3366: EUTRAN_LCS_ConvertLCS_MOLRReq() - NULL Pointer!!!
Line 3367: >>--------------------------------
Line 3399: | molr_Type(%d)
Line 3414: <<--------------------------------
Line 3415: | ++ lcs_QoS
Line 3420: >>--------------------------------
Line 3425: <<--------------------------------
Line 3426: | ++ lcsClientExternalID
Line 3438: | externalAddress.value(0x%02x %02x %02x %02x ...)
Line 3439: >>--------------------------------
Line 3444: <<--------------------------------
Line 3445: | ++ mlc_Number
Line 3454: | value(0x%02x %02x %02x %02x ...)
Line 3455: >>--------------------------------
Line 3472: <<--------------------------------
Line 3473: | ++ supportedGADShapes
Line 3480: EUTRAN_LCS_ConvertLCS_MOLRReq() - MALLOC FAIL!!!
Line 3488: >>--------------------------------
Line 3501: | lcsServiceTypeID(%d)
Line 3519: | ageOfLocationInfo(%d)
Line 3530: <<--------------------------------
Line 3531: | ++ locationType
Line 3537: >>--------------------------------
Line 3543: | EUTRAN_LCS_pseudonymIndicator_present
Line 3551: >>--------------------------------
Line 3592: <<--------------------------------
Line 3593: | ++ LocationNotificationArg
Line 3607: | notificationType(%d)
Line 3625: | locationType.locationEstimateType(%d)
Line 3641: | locationType.deferredLocationEventType.length(%d)
Line 3644: | locationType.deferredLocationEventType.value(0x%02x %02x)
Line 3685: | lcsClientExternalID.externalAddress.length(%d)
Line 3690: | lcsClientExternalID.externalAddress.value(0x%02x %02x %02x %02x)
Line 3695: | lcsClientExternalID.externalAddress.value(0x%02x %02x %02x %02x)
Line 3697: | lcsClientExternalID.externalAddress.value(0x%02x)
Line 3731: | lcsClientName.dataCodingScheme.length(%d)
Line 3733: | lcsClientName.dataCodingScheme.value(0x%02x)
Line 3738: | lcsClientName.nameString.length(%d)
Line 3743: | lcsClientName.nameString.value(0x%02x %02x %02x %02x ...)
Line 3763: | lcsClientName.lcs_FormatIndicator(%d)
Line 3784: | lcsRequestorID.dataCodingScheme.length(%d)
Line 3786: | lcsRequestorID.dataCodingScheme.value(0x%02x)
Line 3791: | lcsRequestorID.requestorIDString.length(%d)
Line 3796: | lcsRequestorID.requestorIDString.value(0x%02x %02x %02x %02x ...)
Line 3816: | lcsRequestorID.lcs_FormatIndicator(%d)
Line 3836: | lcsCodeword.dataCodingScheme.length(%d)
Line 3838: | lcsCodeword.dataCodingScheme.value(0x%02x)
Line 3843: | lcsCodeword.lcsCodewordString.length(%d)
Line 3848: | lcsCodeword.lcsCodewordString.value(0x%02x %02x %02x %02x ...)
Line 3862: | lcsCodeword.lcsServiceTypeID(%d)
Line 3866: >>--------------------------------
Line 4063: <<--------------------------------
Line 4064: | ++ MOLRRes
Line 4074: | locationEstimate.length(%d)
Line 4079: | locationEstimate.value(0x%02x %02x %02x %02x ...)
Line 4098: | add_LocationEstimate.length(%d)
Line 4103: | add_LocationEstimate.value(0x%02x %02x %02x %02x ...)
Line 4115: | velocityEstimate.length(%d)
Line 4120: | velocityEstimate.value(0x%02x %02x %02x %02x ...)
Line 4149: >>--------------------------------
Line 4188: | networkResource(%d)
Line 4213: | networkResource(%d)
Line 4242: | additionalNetworkResource(%d)
Line 4253: | failureCauseParam(%d)
Line 4430: | positionMethodFailure_Diagnostic(%d)
Line 789: EUTRAN_LCS_DecodeReleaseCompleteMsg()
Line 793: EUTRAN_LCS_DecodeReleaseCompleteMsg() - data length is wrong
Line 816: EUTRAN_LCS_DecodeReleaseCompleteMsg() - data length is wrong
Line 698: EUTRAN_LCS_DecodeFacilityInformationElement() - Index : %d
Line 702: EUTRAN_LCS_DecodeFacilityInformationElement() - Invalid Index!!
Line 706: COMPONENT_TYPE : %d
Line 710: EUTRAN_LCS_DecodeFacilityInformationElement() - data length is wrong
Line 392: EUTRAN_LCS_DecodeInvokeComponent()
Line 396: EUTRAN_LCS_DecodeInvokeComponent() - data length is wrong
Line 189: EUTRAN_LCS_DecodeOperation()
Line 190: operationCode : %d operationLength : %d 
Line 193: EUTRAN_LCS_DecodeOperation() - MALLOC FAIL!!!
Line 465: EUTRAN_LCS_DecodeReturnResultComponent()
Line 466: ComponentID : %d
Line 470: EUTRAN_LCS_DecodeReturnResultComponent() - data length is wrong
Line 535: EUTRAN_LCS_DecodeReturnErrorComponent()
Line 539: EUTRAN_LCS_DecodeReturnErrorComponent() - data length is wrong
Line 271: EUTRAN_LCS_DecodeError()
Line 275: EUTRAN_LCS_DecodeError() - MALLOC FAIL!!!
Line 599: EUTRAN_LCS_DecodeRejectComponent()
Line 603: EUTRAN_LCS_DecodeRejectComponent() - data length is wrong
Line 870: EUTRAN_LCS_DecodeFacilityMsg()
Line 874: EUTRAN_LCS_DecodeFacilityMsg() - data length is wrong
Line 920: EUTRAN_LCS_DecodeRegisterMsg()
Line 924: EUTRAN_LCS_DecodeRegisterMsg() - data length is wrong
Line 936: IE : %d
Line 2599: RXed SI15 data
Line 2612: lcsm_Process_SI15_Data() - Create UMTS Message FAIL!!!
Line 2618: lcsm_Process_SI15_Data() - LBS ==> URRC: LBS_URRC_SIB_DECODE_ERROR_REQ
Line 2790: RXed SI15-1 data
Line 2801: RXed SI15-2 data
Line 2812: RXed SI15-3 data
Line 2825: RXed SI15-1 data
Line 2835: RXed SI15-2 data
Line 2845: RXed SI15-3 data
Line 2859: Decoding of SI failed
Line 2883: lcsm_Process_SI15_123_Data() - Create UMTS Message FAIL!!!
Line 2889: lcsm_Process_SI15_123_Data() - LBS ==> URRC: LBS_URRC_SIB_DECODE_ERROR_REQ
Line 3008: | horizontal_accuracy.value(0x%02x)
Line 3014: | EUTRAN_LCS_verticalCoordinateRequest_present
Line 3030: | vertical_accuracy.value(0x%02x)
Line 3060: | responseTime.responseTimeCategory(%d)
Line 3066: | EUTRAN_LCS_velocityRequest_present
Line 3128: | value(0x%02x)
Line 3193: | locationEstimateType(%d)
Line 3216: EUTRAN_LCS_ConvertLocationType() - MALLOC FAIL!!!
Line 3248: | deferredLocationEventType.value(0x%02x)
