Line 151: LBS_TCS_Check_FCI_Info() - DS_TCS_Check_FCI_Info[%s] : %d
Line 158: LBS_TCS_Check_FCI_Info() -  TCS_Check_FCI_Info[%s] : %d
Line 173: LPP_Get_LPP_Profile, LPP.Profile_DS : 0x%x
Line 180: LPP_Get_LPP_Profile, LPP.Profile : 0x%x
Line 199: LPP_Get_LPP_Profile, PSS.LBS.NR_AGNSS_Profile : 0x%x
Line 204: LPP_Get_LPP_Profile, return result(0x%x) 
Line 248: LPP_AsnDecodeMsg() - NULL Pointer!!!
Line 256: LPP_ProAsnDecode: Input buffer: 
Line 261: LPP_ProAsnDecode: Success
Line 264: LPP_ProAsnDecode: SIZE_INVALID
Line 267: LPP_ProAsnDecode: CHOICE_INVALID
Line 270: LPP_ProAsnDecode: RANGE_INVALID
Line 273: LPP_ProAsnDecode: UNSUPPORTED_PDU
Line 276: LPP_ProAsnDecode: DECODER_LENGTH_EXCEED (InputLen(%d bits) < unpackedLen(%d bits))
Line 279: LPP_ProAsnDecode: Misc error #: %d
Line 286: [seqNum_de:%d] LPP_ProAsnDecode FAIL, pdu(%d) CodecReturnCode(%d) CodecErrorStruct(%s)
Line 292: [seqNum_de:%d] LPP_ProAsnDecode Success, pdu(%d) unpackedLen(%d bits)
Line 338: EUTRAN_LCS_AsnDecodeMsg() - NULL Pointer!!!
Line 346: EutranLcs_ProAsnDecode: Input buffer: 
Line 351: EutranLcs_ProAsnDecode: Success
Line 354: EutranLcs_ProAsnDecode: SIZE_INVALID
Line 357: EutranLcs_ProAsnDecode: CHOICE_INVALID
Line 360: EutranLcs_ProAsnDecode: RANGE_INVALID
Line 363: EutranLcs_ProAsnDecode: UNSUPPORTED_PDU
Line 366: EutranLcs_ProAsnDecode: DECODER_LENGTH_EXCEED (InputLen(%d bits) < unpackedLen(%d bits))
Line 369: EutranLcs_ProAsnDecode: Misc error #: %d
Line 376: [seqNum_de:%d] EutranLcs_ProAsnDecode FAIL, pdu(%d) CodecReturnCode(%d) CodecErrorStruct(%s)
Line 383: [seqNum_de:%d] EutranLcs_ProAsnDecode Success, pdu(%d) unpackedLen(%d bits)
Line 423: LPP_AsnEncodeMsg() - Invalid PDU Number!!! pduNum(%d)
Line 431: LPP_AsnEncodeMsg() - NULL Pointer!!!
Line 440: LPP_ProAsnEncode: Success
Line 443: LPP_ProAsnEncode: SIZE_INVALID
Line 446: LPP_ProAsnEncode: CHOICE_INVALID
Line 449: LPP_ProAsnEncode: RANGE_INVALID
Line 452: LPP_ProAsnEncode: UNSUPPORTED_PDU
Line 455: LPP_ProAsnEncode: ENCODER_BUFSIZE_EXCEED
Line 458: LPP_ProAsnEncode: Misc error #: %d
Line 465: [seqNum_en:%d] LPP_ProAsnEncode FAIL, pdu(%d) CodecReturnCode(%d) CodecErrorStruct(%s)
Line 472: [seqNum_en:%d] LPP_ProAsnEncode Success, pdu(%d) packedLen(%d bits)
Line 515: EUTRAN_LCS_AsnEncodeMsg() - Invalid PDU Number!!! pduNum(%d)
Line 523: EUTRAN_LCS_AsnEncodeMsg() - NULL Pointer!!!
Line 531: EutranLcs_ProAsnEncode: Success
Line 534: EutranLcs_ProAsnEncode: SIZE_INVALID
Line 537: EutranLcs_ProAsnEncode: CHOICE_INVALID
Line 540: EutranLcs_ProAsnEncode: RANGE_INVALID
Line 543: EutranLcs_ProAsnEncode: UNSUPPORTED_PDU
Line 546: EutranLcs_ProAsnEncode: ENCODER_BUFSIZE_EXCEED
Line 549: EutranLcs_ProAsnEncode: Misc error #: %d
Line 556: [seqNum_en:%d] EutranLcs_ProAsnEncode FAIL, pdu(%d) CodecReturnCode(%d) CodecErrorStruct(%s)
Line 562: [seqNum_en:%d] EutranLcs_ProAsnEncode Success, pdu(%d) packedLen(%d bits)
Line 586: [LPP_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
Line 608: [EutranLcs_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
Line 3494: <<--------------------------------
Line 3495: | ++ A_GNSS_ProvideCapabilities
Line 3499: LPP_ConvertA_GNSS_ProvideCapabilities() - NULL Pointer!!!
Line 3505: | bit_mask(0x%x)
Line 3521: LPP_ConvertA_GNSS_ProvideCapabilities() - numberOfGNSS_SupportList is ZERO!!!
Line 3528: <<--------------------------------
Line 3529: | ++ GNSS_SupportList [%d]
Line 3534: LPP_CopyA_GNSS_ProvideCapabilities() - MALLOC FAIL!!!
Line 3600: | adr_Support(%d)
Line 3606: | velocityMeasurementSupport(%d)
Line 3618: LPP_ConvertA_GNSS_ProvideCapabilities() - numberOfGNSS_GenericAssistanceDataSupport is ZERO!!!
Line 3630: <<--------------------------------
Line 3631: | ++ LocationCoordinateTypes
Line 3637: | ellipsoidPoint(%d)
Line 3643: | ellipsoidPointWithUncertaintyCircle(%d)
Line 3649: | ellipsoidPointWithUncertaintyEllipse(%d)
Line 3655: | polygon(%d)
Line 3661: | ellipsoidPointWithAltitude(%d)
Line 3667: | ellipsoidPointWithAltitudeAndUncertaintyEllipsoid(%d)
Line 3673: | ellipsoidArc(%d)
Line 3684: | ha_EllipsoidPointWithScalableUncertaintyEllipse_r16(%d)
Line 3695: | ha_EllipsoidPointWithAltitudeAndScalableUncertaintyEllipsoid_r16(%d)
Line 3706: | highAccuracyEllipsoidPointWithUncertaintyEllipse_r15(%d)
Line 3717: | highAccuracyEllipsoidPointWithAltitudeAndUncertaintyEllipsoid_r15(%d)
Line 3725: <<--------------------------------
Line 3726: | ++ VelocityTypes
Line 3732: | horizontalVelocity(%d)
Line 3738: | horizontalWithVerticalVelocity(%d)
Line 3744: | horizontalVelocityWithUncertainty(%d)
Line 3750: | horizontalWithVerticalVelocityAndUncertainty(%d)
Line 3754: >>--------------------------------
Line 4367: <<--------------------------------
Line 4368: | ++ GNSS_CommonAssistData
Line 4393: <<--------------------------------
Line 4394: | ++ GNSS_EarthOrientationParameters
Line 4398: | teop(%d)
Line 4402: | pmX(%d)
Line 4406: | pmXdot(%d)
Line 4410: | pmY(%d)
Line 4414: | pmYdot(%d)
Line 4418: | deltaUT1(%d)
Line 4422: | deltaUT1dot(%d)
Line 4425: >>--------------------------------
Line 7173: LPP_ConvertGNSS_GenericAssistData() - NULL Pointer!!!
Line 7174: >>--------------------------------
Line 7209: | ++ Discard Gailieo Assistdata..
Line 7229: <<--------------------------------
Line 7230: | ++ GNSS_GenericAssistData [%d]
Line 7330: >>--------------------------------
Line 7358: <<--------------------------------
Line 7359: | ++ ECGI
Line 7362: | MCC
Line 7366: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 7367: >>--------------------------------
Line 7372: | MNC
Line 7376: !!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
Line 7377: >>--------------------------------
Line 7388: | cellIdentity.value(0x%02x %02x %02x %02x)
Line 7390: | cellIdentity.length(%d)
Line 7391: >>--------------------------------
Line 7414: <<--------------------------------
Line 7415: | ++ ECGI
Line 7422: LPP_CopyECGI() - NULL Pointer!!!
Line 7423: >>--------------------------------
Line 7429: !!!!!!!!!! FAIL to copy MCC !!!!!!!!!!
Line 7432: | MCC (%d %d %d)
Line 7440: !!!!!!!!!! FAIL to copy MNC !!!!!!!!!!
Line 7443: | MNC (%d %d %d)
Line 7453: | cellidentity.value(0x%02x %02x %02x %02x)
Line 7456: | cellIdentity.length(%d)
Line 7843: <<--------------------------------
Line 7844: | ++ OTDOA_ProvideAssistanceData
Line 7848: LPP_CopyOTDOA_AssistanceData() - NULL Pointer!!!
Line 7849: >>--------------------------------
Line 7854: | bit_mask(0x%02x)
Line 7877: <<--------------------------------
Line 7878: | ++ otdoa_Error
Line 7881: | choice(%d)
Line 7888: | locationServerErrorCauses.cause(%d)
Line 7894: | targetDeviceErrorCauses.cause(%d)
Line 7902: >>--------------------------------
Line 8062: <<--------------------------------
Line 8063: | ++ CommonIEsRequestLocationInformation
Line 8074: | locationInformationType(%d)
Line 8080: <<--------------------------------
Line 8081: | ++ TriggeredReportingCriteria
Line 8085: | cellChange(%d)
Line 8089: | reportingDuration(%d)
Line 8090: >>--------------------------------
Line 8108: | additionalInformation(%d)
Line 8128: | environment(%d)
Line 8136: <<--------------------------------
Line 8137: | ++ LocationCoordinateTypes
Line 8143: | ellipsoidPoint(%d)
Line 8149: | ellipsoidPointWithUncertaintyCircle(%d)
Line 8155: | ellipsoidPointWithUncertaintyEllipse(%d)
Line 8161: | polygon(%d)
Line 8167: | ellipsoidPointWithAltitude(%d)
Line 8173: | ellipsoidPointWithAltitudeAndUncertaintyEllipsoid(%d)
Line 8179: | ellipsoidArc(%d)
Line 8188: | ha_EllipsoidPointWithScalableUncertaintyEllipse_r16(%d)
Line 8197: | ha_EllipsoidPointWithAltitudeAndScalableUncertaintyEllipsoid_r16(%d)
Line 8206: | highAccuracyEllipsoidPointWithUncertaintyEllipse_r15(%d)
Line 8215: | highAccuracyEllipsoidPointWithAltitudeAndUncertaintyEllipsoid_r15(%d)
Line 8219: >>--------------------------------
Line 8227: <<--------------------------------
Line 8228: | ++ VelocityTypes
Line 8234: | horizontalVelocity(%d)
Line 8240: | horizontalWithVerticalVelocity(%d)
Line 8246: | horizontalVelocityWithUncertainty(%d)
Line 8252: | horizontalWithVerticalVelocityAndUncertainty(%d)
Line 8254: >>--------------------------------
Line 8257: >>--------------------------------
Line 8584: <<--------------------------------
Line 8585: | ++ A_GNSS_RequestLocationInformation
Line 8587: <<--------------------------------
Line 8588: | ++ GNSS_PositioningInstructions
Line 8594: | fineTimeAssistanceMeasReq(%d)
Line 8599: | adrMeasReq(%d)
Line 8604: | multiFreqMeasReq(%d)
Line 8609: | assistanceAvailability(%d)
Line 8613: >>--------------------------------
Line 8615: >>--------------------------------
Line 10249: <<--------------------------------
Line 10250: | ++ CommonIEsProvideLocationInformation
Line 10284: <<--------------------------------
Line 10285: | ++ EarlyFixReport-r12
Line 11677: <<--------------------------------
Line 11678: | ++ A_GNSS_ProvideLocationInformation
Line 11737: | pSrc->gnss_Error.cause(0x%x)
Line 11740: >>--------------------------------
Line 12788: <<--------------------------------
Line 12789: | ++ A_GNSS_RequestAssistanceData
Line 12793: LPP_ConvertA_GNSS_RequestAssistanceData() - NULL Pointer!!!
Line 12794: >>--------------------------------
Line 12803: | gnss_CommonAssistDataReq.bit_mask(0x%x)
Line 12811: LPP_ConvertA_GNSS_RequestAssistanceData() :: ERROR!! No CommonAssistDataReq, but bitmask is Set!!!
Line 12824: LPP_ConvertA_GNSS_RequestAssistanceData() - numberOfGNSS_GenericAssistDataReq is ZERO!!!
Line 12829: <<--------------------------------
Line 12830: | ++ GNSS_GenericAssistDataReq [%d]
Line 12838: LPP_ConvertA_GNSS_RequestAssistanceData() - MALLOC FAIL!!!
Line 12839: >>--------------------------------
Line 12840: >>--------------------------------
Line 12858: >>--------------------------------
Line 12883: <<--------------------------------
Line 12884: | ++ UpdateLocationInformation
Line 12888: LPP_Convert_UpdateLocationInformation() - NULL Pointer!!!
Line 12889: >>--------------------------------
Line 12893: <<--------------------------------
Line 12894: | ++ EllipsoidPointWithAltitude
Line 12900: | latitudeSign(%d)
Line 12907: | degreesLatitude(%d)
Line 12914: | degreesLongitude(%d)
Line 12920: | altitudeDirection(%d)
Line 12926: | altitude(%d)
Line 12927: >>--------------------------------
Line 12929: <<--------------------------------
Line 12930: | ++ HorizontalVelocity
Line 12936: | bearing(%d)
Line 12942: | horizontalSpeed(%d)
Line 12943: >>--------------------------------
Line 12946: <<--------------------------------
Line 12952: | ++ gnss_TOD_msec(%d)
Line 12953: >>--------------------------------
Line 12954: >>--------------------------------
Line 12993: LPP_ConvertLocationInfo() - MALLOC FAIL!!!
Line 13018: LPP_ConvertLocationInfo() - ret(%d) len(%d)
Line 13109: LPP_ConvertLocationInfo() - ret(%d) len(%d)
Line 13143: LPP_ConvertLocationInfo() - ret(%d) len(%d)
Line 13157: <<--------------------------------
Line 13161: !!!!!!!!!! gnss_TOD_msec(%d) is out of range !!!!!!!!!!
Line 13162: >>--------------------------------
Line 13166: | gnss_TOD_msec(%d)
Line 13167: >>--------------------------------
Line 13212: LPP_ConvertLPP_DisplacementTimeStamp() - ret(%d) len(%d)
Line 13368: LPP_ConvertOTDOA_AssistanceDataFromASN() - PRS Info not Present
Line 13519: LPP_ConvertBIT1ToASN_U8() - MALLOC FAIL!!!
Line 13554: LPP_ConvertBIT1ToASN_U16() - MALLOC FAIL!!!
Line 13595: LPP_ConvertBIT1ToASN_U32() - MALLOC FAIL!!!
Line 13623: LPP_ConvertBIT1ToASN_U32() - MALLOC FAIL!!!
Line 13671: LPP_CopySeqof3() - pDst is not NULL!!!
Line 13682: LPP_CopySeqof3() - MALLOC FAIL!!!
Line 13728: LPP_ConvertSeqof3ToASN() - pDst is not NULL!!!
Line 13742: LPP_ConvertSeqof3ToASN() - out of range src[%d](%d)!!!
Line 13749: LPP_ConvertSeqof3ToASN() - MALLOC FAIL!!!
Line 13772: | %d %d
Line 13776: | %d %d %d
Line 13886: LPP_Copy_EPDU_Sequence() - Wrong EPDU Size from GNSS : (%d)
Line 13894: LPP_Copy_EPDU_Sequence() - MALLOC FAIL!!!
Line 13901: LPP_Copy_EPDU_Sequence() - MALLOC FAIL!!!
Line 13962: LBS_CheckGpsAvailable() - GNSSGpsLockStatus(%d), emdMode(%d), NfwStatus(%d)
Line 13968: LBS_CheckGpsAvailable() - EmergencyCallPresent(%d) => isGpsAvailable(%d)
Line 13990: Lbs.lbs_ActiveRat: %s -> %s
Line 14015: LBS_CheckMdtState() - LteState : %s, LBS_GetNrMdtState : %s, Old : %s, New : %s 
Line 14024: LBS_CheckMdtState() : Not need to update
Line 2617: <<--------------------------------
Line 2618: | ++ SBAS_IDs
Line 2630: LPP_ConvertSBAS_IDsToASN() - MALLOC FAIL!!!
Line 2651: | sbas_IDs(0x%02x)
Line 2680: <<--------------------------------
Line 2681: | ++ PositioningModes - src(%d)
Line 2692: LPP_ConvertPositioningModesToASN() - MALLOC FAIL!!!
Line 2712: | posModes(0x%02x)
Line 2713: >>--------------------------------
Line 2739: <<--------------------------------
Line 2740: | ++ AccessTypes [%d]
Line 2751: LPP_ConvertAccessTypesToASN() - MALLOC FAIL!!!
Line 2767: | accessTypes(0x%02x)
Line 3432: <<--------------------------------
Line 3433: | ++ AssistanceDataSupportList
Line 3443: <<--------------------------------
Line 3444: | ++ GNSS_GenericAssistanceDataSupport [%d]
Line 3453: LPP_ConvertAssistanceDataSupportList() - MALLOC FAIL!!!
Line 2844: <<--------------------------------
Line 2845: | ++ GNSS_CommonAssistanceDataSupport
Line 2852: <<--------------------------------
Line 2853: | ++ GNSS_ReferenceTimeSupport
Line 2881: <<--------------------------------
Line 2882: | ++ GNSS_ReferenceLocationSupport
Line 2903: <<--------------------------------
Line 2904: | ++ GNSS_EarthOrientationParametersSupport
Line 8508: <<--------------------------------
Line 8509: | ++ GNSS_ID_Bitmap
Line 8520: LPP_ConvertGNSS_ID_BitmapToASN() - MALLOC FAIL!!!
Line 8521: >>--------------------------------
Line 8528: LPP_ConvertGNSS_ID_BitmapToASN() - NULL Pointer!!!
Line 8529: >>--------------------------------
Line 8556: | gnss_ids.value(0x%02x %02x)
Line 8557: | gnss_ids.length(%d)
Line 8558: >>--------------------------------
Line 2793: <<--------------------------------
Line 2794: | ++ GNSS_IonosphericModelSupport
Line 2804: LPP_ConvertGNSS_IonosphericModelSupport() - MALLOC FAIL!!!
Line 2816: | ionoModel(0x%02x)
Line 2950: <<--------------------------------
Line 2951: | ++ GNSS_TimeModelsSupport
Line 2962: <<--------------------------------
Line 2963: | ++ GNSS_DifferentialCorrectionsSupport
Line 2973: | dgnss_ValidityTimeSup(%d)
Line 2993: <<--------------------------------
Line 2994: | ++ GNSS_RealTimeIntegritySupport
Line 3005: <<--------------------------------
Line 3006: | ++ GNSS_DataBitAssistanceSupport
Line 3051: <<--------------------------------
Line 3052: | ++ GNSS_AuxiliaryInformationSupport
Line 3063: <<--------------------------------
Line 3064: | ++ BDS_DifferentialCorrectionsSupport_r12
Line 3076: <<--------------------------------
Line 3077: | ++ BDS_GridModelSupport_r12
Line 8425: | sbas_id(%d)
Line 3110: <<--------------------------------
Line 3111: | ++ GNSS_NavigationModelSupport
Line 3128: LPP_ConvertGNSS_NavigationModelSupport() - MALLOC FAIL!!!
Line 3157: | clockModel(0x%02x)
Line 3173: LPP_ConvertGNSS_NavigationModelSupport() - MALLOC FAIL!!!
Line 3201: | orbitModel(0x%02x)
Line 3228: <<--------------------------------
Line 3229: | ++ GNSS_AcquisitionAssistanceSupport
Line 3236: | LPP_confidenceSupport_r10_present
Line 3243: | LPP_dopplerUncertaintyExtSupport_r10_present
Line 3270: <<--------------------------------
Line 3271: | ++ GNSS_AlmanacSupport
Line 3290: LPP_ConvertGNSS_AlmanacSupport() - MALLOC FAIL!!!
Line 3324: LPP_ConvertGNSS_AlmanacSupport() - Unsupported Almanac Model recieved [%d]
Line 3327: | almanacModel(0x%02x)
Line 3354: <<--------------------------------
Line 3355: | ++ GNSS_UTC_ModelSupport
Line 3372: LPP_ConvertGNSS_UTC_ModelSupport() - MALLOC FAIL!!!
Line 3399: LPP_ConvertGNSS_UTC_ModelSupport() - Unsupported UTC Model received [%d]
Line 3401: | utc_Model(0x%02x)
Line 4125: <<--------------------------------
Line 4126: | ++ GNSS_ReferenceTime
Line 4137: | referenceTimeUnc(%d)
Line 3835: <<--------------------------------
Line 3836: | ++ GNSS_SystemTime
Line 3845: | gnss_DayNumber(%d)
Line 3849: | gnss_TimeOfDay(%d)
Line 3854: | LPP_gnss_TimeOfDayFrac_msec_present
Line 3857: | gnss_TimeOfDayFrac_msec(%d)
Line 3863: | LPP_notificationOfLeapSecond_present
Line 3866: | notificationOfLeapSecond(0x%02x)
Line 3872: | LPP_gps_TOW_Assist_present
Line 3786: <<--------------------------------
Line 3787: | ++ GPS_TOW_AssistDst [%d]
Line 3791: | satelliteID(%d)
Line 3795: | tlmWord(%d)
Line 3799: | antiSpoof(%d)
Line 3803: | alert(%d)
Line 3807: | tlmRsvdBits(%d)
Line 4076: <<--------------------------------
Line 4077: | ++ GNSS_ReferenceTimeForCells [%d]
Line 4088: | referenceTimeUnc(%d)
Line 4095: | bsAlign(%d)
Line 3900: <<--------------------------------
Line 3901: | ++ NetworkTime
Line 3907: | secondsFromFrameStructureStart(%d)
Line 3911: | fractionalSecondsFromFrameStructureStart(%d)
Line 3916: | LPP_frameDrift_present
Line 3919: | frameDrift(%d)
Line 3927: <<--------------------------------
Line 3928: | ++ EUTRA
Line 3934: | physCellId(%d)
Line 3946: | earfcn(%d)
Line 3949: <<--------------------------------
Line 3950: | ++ UTRA
Line 3962: | fddPrimary_CPICH_Info(%d)
Line 3969: | tddCellParameters(%d)
Line 3973: !!!!!!!!!! mode.choice(%d) is wrong choice !!!!!!!!!!
Line 3986: | uarfcn(%d)
Line 3989: <<--------------------------------
Line 3990: | ++ GSM
Line 3996: | bcchCarrier(%d)
Line 4000: | bsic(%d)
Line 4011: | MCC(%d %d %d)
Line 4019: | MNC(%d %d %d)
Line 4028: | locationAreaCode(0x%02x %02x)
Line 4037: | cellIdentity(0x%02x %02x)
Line 4042: !!!!!!!!!! cellID.choice(%d) is wrong choice !!!!!!!!!!
Line 10321: <<--------------------------------
Line 10322: | ++ CellGlobalIdEUTRA_AndUTRA
Line 10326: | MCC(%d %d %d)
Line 10330: | MNC(%d %d %d)
Line 10345: | cellIdentity.u.eutra(0x%02x %02x %02x %02x)
Line 10357: | pDst->cellIdentity.u.utra(0x%02x %02x %02x %02x)
Line 10361: !!!!!!!!!! cellIdentity.choice(%d) is wrong choice !!!!!!!!!!
Line 10365: >>--------------------------------
Line 4169: <<--------------------------------
Line 4170: | ++ GNSS_ReferenceLocation
Line 4181: | latitudeSign(%d)
Line 4185: | degreesLatitude(%d)
Line 4189: | degreesLongitude(%d)
Line 4200: | altitudeDirection(%d)
Line 4204: | altitude(%d)
Line 4208: | uncertaintySemiMajor(%d)
Line 4212: | uncertaintySemiMinor(%d)
Line 4216: | orientationMajorAxis(%d)
Line 4220: | uncertaintyAltitude(%d)
Line 4224: | confidence(%d)
Line 4249: <<--------------------------------
Line 4250: | ++ GNSS_IonosphericModel
Line 4258: | dataID(0x%02x)
Line 4262: | alfa0(%d)
Line 4266: | alfa1(%d)
Line 4270: | alfa2(%d)
Line 4274: | alfa3(%d)
Line 4278: | beta0(%d)
Line 4282: | beta1(%d)
Line 4286: | beta2(%d)
Line 4290: | beta3(%d)
Line 4298: | ai0(%d)
Line 4302: | ai1(%d)
Line 4306: | ai2(%d)
Line 4312: | ionoStormFlag1(%d)
Line 4319: | ionoStormFlag2(%d)
Line 4326: | ionoStormFlag3(%d)
Line 4333: | ionoStormFlag4(%d)
Line 4340: | ionoStormFlag5(%d)
Line 4456: <<--------------------------------
Line 4457: | ++ GNSS_TimeModels [%d]
Line 4493: | gnss_TimeModelRefTime(%d)
Line 4497: | tA0(%d)
Line 4503: | tA1(%d)
Line 4510: | tA2(%d)
Line 4520: | weekNumber(%d)
Line 4527: | deltaT(%d)
Line 4556: <<--------------------------------
Line 4557: | ++ GNSS_DifferentialCorrections
Line 4575: LPP_ConvertGNSS_DifferentialCorrections() - MALLOC FAIL!!!
Line 4586: <<--------------------------------
Line 4587: | ++ DGNSS-SgnTypeList [%d]
Line 4593: | gnss_SignalID(%d)
Line 4599: | gnss_StatusHealth(%d)
Line 4613: LPP_ConvertGNSS_DifferentialCorrections() - MALLOC FAIL!!!
Line 4622: <<--------------------------------
Line 4623: | ++ DGNSS-SatList [%d]
Line 4630: | svID(%d)
Line 4637: | iod(0x%02x %02x)
Line 4642: | udre(%d)
Line 4647: | pseudoRangeCor(%d)
Line 4652: | rangeRateCor(%d)
Line 4659: | udreGrowthRate(%d)
Line 4667: | udreValidityTime(%d)
Line 5603: <<--------------------------------
Line 5604: | ++ GNSS_NavigationModel
Line 5608: | nonBroadcastIndFlag(%d)
Line 5621: LPP_ConvertGNSS_NavigationModel() - MALLOC FAIL!!!
Line 5630: <<--------------------------------
Line 5631: | ++ GNSS_SatelliteList [%d]
Line 5637: | svID.satellite_id(%d)
Line 5641: | svHealth(0x%02x)
Line 5648: | iod(0x%02x %02x)
Line 5685: !!!!!!!!!! gnss_OrbitModel.choice(%d) is wrong choice !!!!!!!!!!
Line 5693: | svHealthExt(0x%02x)
Line 4698: <<--------------------------------
Line 4699: | ++ GNSS_ClockModel
Line 4725: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 4729: >>--------------------------------
Line 4741: <<--------------------------------
Line 4742: | ++ StandardClockModelList [%d]
Line 4749: | stanClockToc(%d)
Line 4754: | stanClockAF2(%d)
Line 4759: | stanClockAF1(%d)
Line 4764: | stanClockAF0(%d)
Line 4771: | stanClockTgd(%d)
Line 4777: | sisa(%d)
Line 4784: | stanModelID(%d)
Line 4786: >>--------------------------------
Line 4795: <<--------------------------------
Line 4796: | ++ NAV_ClockModel
Line 4800: | navToc(%d)
Line 4804: | navaf2(%d)
Line 4808: | navaf1(%d)
Line 4812: | navaf0(%d)
Line 4816: | navTgd(%d)
Line 4817: >>--------------------------------
Line 4823: <<--------------------------------
Line 4824: | ++ CNAV_ClockModel
Line 4828: | cnavToc(%d)
Line 4832: | cnavTop(%d)
Line 4836: | cnavURA0(%d)
Line 4840: | cnavURA1(%d)
Line 4844: | cnavURA2(%d)
Line 4848: | cnavAf2(%d)
Line 4852: | cnavAf1(%d)
Line 4856: | cnavAf0(%d)
Line 4860: | cnavTgd(%d)
Line 4866: | cnavISCl1cp(%d)
Line 4872: | cnavISCl1cd(%d)
Line 4878: | cnavISCl1ca(%d)
Line 4884: | cnavISCl2c(%d)
Line 4890: | cnavISCl5i5(%d)
Line 4896: | cnavISCl5q5(%d)
Line 4898: >>--------------------------------
Line 4904: <<--------------------------------
Line 4905: | ++ GLONASS_ClockModel
Line 4909: | gloTau(%d)
Line 4913: | gloGamma(%d)
Line 4919: | gloDeltaTau(%d)
Line 4921: >>--------------------------------
Line 4926: <<--------------------------------
Line 4927: | ++ SBAS_ClockModel
Line 4931: | sbasTo(%d)
Line 4935: | sbasAgfo(%d)
Line 4939: | sbasAgf1(%d)
Line 4940: >>--------------------------------
Line 4945: <<--------------------------------
Line 4946: | ++ BDS_ClockModel_r12
Line 4950: | bdsAODC_r12(%d)
Line 4954: | bdsToc_r12(%d)
Line 4958: | bdsA0_r12(%d)
Line 4962: | bdsA1_r12(%d)
Line 4966: | bdsA2_r12(%d)
Line 4970: | bdsTgd1_r12(%d)
Line 4971: >>--------------------------------
Line 4995: <<--------------------------------
Line 4996: | ++ NavModelKeplerianSet
Line 5000: | keplerToe(%d)
Line 5004: | keplerW(%d)
Line 5008: | keplerDeltaN(%d)
Line 5012: | keplerM0(%d)
Line 5016: | keplerOmegaDot(%d)
Line 5020: | keplerE(%d)
Line 5024: | keplerIDot(%d)
Line 5028: | keplerAPowerHalf(%d)
Line 5032: | keplerI0(%d)
Line 5036: | keplerOmega0(%d)
Line 5040: | keplerCrs(%d)
Line 5044: | keplerCis(%d)
Line 5048: | keplerCus(%d)
Line 5052: | keplerCrc(%d)
Line 5056: | keplerCic(%d)
Line 5060: | keplerCuc(%d)
Line 5061: >>--------------------------------
Line 5085: <<--------------------------------
Line 5086: | ++ NavModelNAV_KeplerianSet
Line 5092: | navURA(%d)
Line 5096: | navFitFlag(%d)
Line 5100: | navToe(%d)
Line 5104: | navOmega(%d)
Line 5108: | navDeltaN(%d)
Line 5112: | navM0(%d)
Line 5116: | navOmegaADot(%d)
Line 5120: | navE(%d)
Line 5124: | navIDot(%d)
Line 5128: | navAPowerHalf(%d)
Line 5132: | navI0(%d)
Line 5136: | navOmegaA0(%d)
Line 5140: | navCrs(%d)
Line 5144: | navCis(%d)
Line 5148: | navCus(%d)
Line 5152: | navCrc(%d)
Line 5156: | navCic(%d)
Line 5160: | navCuc(%d)
Line 5165: | LPP_addNAVparam_present
Line 5169: | ephemCodeOnL2(%d)
Line 5173: | ephemL2Pflag(%d)
Line 5178: | ephemSF1Rsvd.reserved1(%d)
Line 5182: | ephemSF1Rsvd.reserved2(%d)
Line 5186: | ephemSF1Rsvd.reserved3(%d)
Line 5190: | ephemSF1Rsvd.reserved4(%d)
Line 5194: | ephemAODA(%d)
Line 5196: >>--------------------------------
Line 5222: <<--------------------------------
Line 5223: | ++ NavModelCNAV_KeplerianSet
Line 5227: | cnavTop(%d)
Line 5231: | cnavURAindex(%d)
Line 5235: | cnavDeltaA(%d)
Line 5239: | cnavAdot(%d)
Line 5243: | cnavDeltaNo(%d)
Line 5247: | cnavDeltaNoDot(%d)
Line 5256: | cnavMo(%ld)
Line 5265: | cnavE(%ld)
Line 5274: | cnavOmega(%ld)
Line 5283: | cnavOMEGA0(%ld)
Line 5287: | cnavDeltaOmegaDot(%d)
Line 5296: | cnavIo(%ld)
Line 5300: | cnavIoDot(%d)
Line 5304: | cnavCis(%d)
Line 5308: | cnavCic(%d)
Line 5312: | cnavCrs(%d)
Line 5316: | cnavCrc(%d)
Line 5320: | cnavCus(%d)
Line 5324: | cnavCuc(%d)
Line 5325: >>--------------------------------
Line 5349: <<--------------------------------
Line 5350: | ++ NavModel_GLONASS_ECEF
Line 5354: | gloEn(%d)
Line 5358: | gloP1(0x%02x)
Line 5362: | gloP2(%d)
Line 5366: | gloM(%d)
Line 5370: | gloX(%d)
Line 5374: | gloXdot(%d)
Line 5378: | gloXdotdot(%d)
Line 5382: | gloY(%d)
Line 5386: | gloYdot(%d)
Line 5390: | gloYdotdot(%d)
Line 5394: | gloZ(%d)
Line 5398: | gloZdot(%d)
Line 5402: | gloZdotdot(%d)
Line 5403: >>--------------------------------
Line 5427: <<--------------------------------
Line 5428: | ++ NavModel_SBAS_ECEF
Line 5436: | sbasTo(%d)
Line 5441: | sbasAccuracy(0x%02x)
Line 5445: | sbasXg(%d)
Line 5449: | sbasYg(%d)
Line 5453: | sbasZg(%d)
Line 5457: | sbasXgDot(%d)
Line 5461: | sbasYgDot(%d)
Line 5465: | sbasZgDot(%d)
Line 5469: | sbasXgDotDot(%d)
Line 5473: | sbagYgDotDot(%d)
Line 5477: | sbasZgDotDot(%d)
Line 5478: >>--------------------------------
Line 5502: <<--------------------------------
Line 5503: | ++ NavModel_BDS_KeplerianSet
Line 5507: | bdsAODE_r12(%d)
Line 5511: | bdsURAI_r12(%d)
Line 5515: | bdsToe_r12(%d)
Line 5519: | bdsAPowerHalf_r12(%d)
Line 5523: | bdsE_r12(%d)
Line 5527: | bdsW_r12(%d)
Line 5531: | bdsDeltaN_r12(%d)
Line 5535: | bdsM0_r12(%d)
Line 5539: | bdsOmega0_r12(%d)
Line 5543: | bdsOmegaDot_r12(%d)
Line 5547: | bdsI0_r12(%d)
Line 5551: | bdsIDot_r12(%d)
Line 5555: | bdsCuc_r12(%d)
Line 5559: | bdsCus_r12(%d)
Line 5563: | bdsCrc_r12(%d)
Line 5567: | bdsCrs_r12(%d)
Line 5571: | bdsCic_r12(%d)
Line 5575: | bdsCis_r12(%d)
Line 5576: >>--------------------------------
Line 5725: <<--------------------------------
Line 5726: | ++ GNSS_RealTimeIntegrity
Line 5733: <<--------------------------------
Line 5734: | ++ GNSS_BadSignalList [%d]
Line 5740: | badSVID(%d)
Line 11837: <<--------------------------------
Line 11838: | ++ GNSS_SignalIDs
Line 11855: | gnss_SignalIDs(0x%02x)
Line 11856: >>--------------------------------
Line 5780: <<--------------------------------
Line 5781: | ++ GNSS_DataBitAssistance
Line 5787: | gnss_TOD(%d)
Line 5793: | gnss_TODfrac(%d)
Line 5809: LPP_ConvertGNSS_DataBitAssistance() - MALLOC FAIL!!!
Line 5820: <<--------------------------------
Line 5821: | ++ GNSS_DataBitsSatList [%d]
Line 5825: | svID(%d)
Line 5839: LPP_ConvertGNSS_DataBitAssistance() - MALLOC FAIL!!!
Line 5850: <<--------------------------------
Line 5851: | ++ GNSS_DataBitsSgnList [%d]
Line 5857: | gnss_SignalType(%d)
Line 5871: | gnss_DataBits(0x%02x %02x %02x %02x ...)
Line 5906: <<--------------------------------
Line 5907: | ++ GNSS_AcquisitionAssistance
Line 5913: | gnss_SignalID(%d)
Line 5928: LPP_ConvertGNSS_AcquisitionAssistance() - MALLOC FAIL!!!
Line 5937: <<--------------------------------
Line 5938: | ++ GNSS_AcquisitionAssistList [%d]
Line 5944: | svID(%d)
Line 5948: | doppler0(%d)
Line 5952: | doppler1(%d)
Line 5956: | dopplerUncertainty(%d)
Line 5960: | codePhase(%d)
Line 5964: | intCodePhase(%d)
Line 5968: | codePhaseSearchWindow(%d)
Line 5972: | azimuth(%d)
Line 5976: | elevation(%d)
Line 5982: | codePhase1023(%d)
Line 6015: | dopplerUncertaintyExt_r10(%d)
Line 6025: | confidence_r10(%d)
Line 6569: <<--------------------------------
Line 6570: | ++ GNSS_Almanac
Line 6578: | weekNumber(%d)
Line 6585: | toa(%d)
Line 6592: | ioda(%d)
Line 6599: | ioda(%d)
Line 6606: | ioda(%d)
Line 6625: LPP_ConvertGNSS_Almanac() - MALLOC FAIL!!!
Line 6634: <<--------------------------------
Line 6635: | ++ GNSS_AlmanacList [%d]
Line 6678: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 6051: <<--------------------------------
Line 6052: | ++ AlmanacKeplerianSet
Line 6058: | svID(%d)
Line 6062: | kepAlmanacE(%d)
Line 6066: | kepAlmanacDeltaI(%d)
Line 6070: | kepAlmanacOmegaDot(%d)
Line 6074: | kepSV_StatusINAV(%d)
Line 6080: | kepSV_StatusFNAV(0x%02x)
Line 6085: | kepAlmanacAPowerHalf(%d)
Line 6089: | kepAlmanacOmega0(%d)
Line 6093: | kepAlmanacW(%d)
Line 6097: | kepAlmanacM0(%d)
Line 6101: | kepAlmanacAF0(%d)
Line 6105: | kepAlmanacAF1(%d)
Line 6106: >>--------------------------------
Line 6130: <<--------------------------------
Line 6131: | ++ AlmanacNAV_KeplerianSet
Line 6135: | svID(%d)
Line 6139: | navAlmE(%d)
Line 6143: | navAlmDeltaI(%d)
Line 6147: | navAlmOMEGADOT(%d)
Line 6151: | navAlmSVHealth(%d)
Line 6155: | navAlmSqrtA(%d)
Line 6159: | navAlmOMEGAo(%d)
Line 6163: | navAlmOmega(%d)
Line 6167: | navAlmMo(%d)
Line 6171: | navAlmaf0(%d)
Line 6175: | navAlmaf1(%d)
Line 6176: >>--------------------------------
Line 6200: <<--------------------------------
Line 6201: | ++ AlmanacReducedKeplerianSet
Line 6205: | svID(%d)
Line 6209: | redAlmDeltaA(%d)
Line 6213: | redAlmOmega0(%d)
Line 6217: | redAlmPhi0(%d)
Line 6221: | redAlmL1Health(%d)
Line 6225: | redAlmL2Health(%d)
Line 6229: | redAlmL5Health(%d)
Line 6230: >>--------------------------------
Line 6254: <<--------------------------------
Line 6255: | ++ AlmanacMidiAlmanacSet
Line 6259: | svID(%d)
Line 6263: | midiAlmE(%d)
Line 6267: | midiAlmDeltaI(%d)
Line 6271: | midiAlmOmegaDot(%d)
Line 6275: | midiAlmSqrtA(%d)
Line 6279: | midiAlmOmega0(%d)
Line 6283: | midiAlmOmega(%d)
Line 6287: | midiAlmMo(%d)
Line 6291: | midiAlmaf0(%d)
Line 6295: | midiAlmaf1(%d)
Line 6299: | midiAlmL1Health(%d)
Line 6303: | midiAlmL2Health(%d)
Line 6307: | midiAlmL5Health(%d)
Line 6308: >>--------------------------------
Line 6332: <<--------------------------------
Line 6333: | ++ AlmanacGLONASS_AlmanacSet
Line 6339: | gloAlm_NA(%d)
Line 6343: | gloAlmnA(%d)
Line 6347: | gloAlmHA(%d)
Line 6351: | gloAlmLambdaA(%d)
Line 6355: | gloAlmtlambdaA(%d)
Line 6359: | gloAlmDeltaIa(%d)
Line 6363: | gloAlmDeltaTA(%d)
Line 6367: | gloAlmDeltaTdotA(%d)
Line 6371: | gloAlmEpsilonA(%d)
Line 6375: | gloAlmOmegaA(%d)
Line 6379: | gloAlmTauA(%d)
Line 6383: | gloAlmCA(%d)
Line 6389: | gloAlmMA(0x%02x)
Line 6391: >>--------------------------------
Line 6415: <<--------------------------------
Line 6416: | ++ AlmanacECEF_SBAS_AlmanacSet
Line 6420: | sbasAlmDataID(%d)
Line 6424: | svID(%d)
Line 6428: | sbasAlmHealth(0x%02x)
Line 6432: | sbasAlmXg(%d)
Line 6436: | sbasAlmYg(%d)
Line 6440: | sbasAlmZg(%d)
Line 6444: | sbasAlmXgdot(%d)
Line 6448: | sbasAlmYgDot(%d)
Line 6452: | sbasAlmZgDot(%d)
Line 6456: | sbasAlmTo(%d)
Line 6457: >>--------------------------------
Line 6481: <<--------------------------------
Line 6482: | ++ AlmanacBDS_AlmanacSet_r12
Line 6488: | svID(%d)
Line 6494: | bdsAlmToa_r12(0x%02x)
Line 6499: | bdsAlmSqrtA_r12(%d)
Line 6503: | bdsAlmE_r12(%d)
Line 6507: | bdsAlmW_r12(%d)
Line 6511: | bdsAlmM0_r12(%d)
Line 6515: | bdsAlmOmega0_r12(%d)
Line 6519: | bdsAlmOmegaDot_r12(%d)
Line 6523: | bdsAlmDeltaI_r12(%d)
Line 6527: | bdsAlmA0_r12(%d)
Line 6531: | bdsAlmA1_r12(%d)
Line 6540: | bdsSvHealth_r12(0x%02x %02x)
Line 6542: >>--------------------------------
Line 6708: <<--------------------------------
Line 6709: | ++ GNSS_UTC_Model
Line 6720: | gnss_Utc_A1(%d)
Line 6724: | gnss_Utc_A0(%d)
Line 6728: | gnss_Utc_Tot(%d)
Line 6732: | gnss_Utc_WNt(%d)
Line 6736: | gnss_Utc_DeltaTls(%d)
Line 6740: | gnss_Utc_WNlsf(%d)
Line 6744: | gnss_Utc_DN(%d)
Line 6748: | gnss_Utc_DeltaTlsf(%d)
Line 6756: | utcA0(%d)
Line 6760: | utcA1(%d)
Line 6764: | utcA2(%d)
Line 6768: | utcDeltaTls(%d)
Line 6772: | utcTot(%d)
Line 6776: | utcWNot(%d)
Line 6780: | utcWNlsf(%d)
Line 6785: | utcDN(0x%02x)
Line 6789: | utcDeltaTlsf(%d)
Line 6798: | nA(%d)
Line 6802: | tauC(%d)
Line 6808: | b1(%d)
Line 6815: | b2(%d)
Line 6822: | kp(0x%02x)
Line 6830: | utcA1wnt(%d)
Line 6834: | utcA0wnt(%d)
Line 6838: | utcTot(%d)
Line 6842: | utcWNt(%d)
Line 6846: | utcDeltaTls(%d)
Line 6850: | utcWNlsf(%d)
Line 6854: | utcDN(%d)
Line 6858: | utcDeltaTlsf(%d)
Line 6862: | utcStandardID(%d)
Line 6870: | utcA0_r12(%d)
Line 6874: | utcA1_r12(%d)
Line 6878: | utcDeltaTls_r12(%d)
Line 6882: | utcWNlsf_r12(%d)
Line 6886: | utcDN_r12(%d)
Line 6890: | utcDeltaTlsf_r12(%d)
Line 6895: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 6926: <<--------------------------------
Line 6927: | ++ GNSS_AuxiliaryInformation
Line 6940: <<--------------------------------
Line 6941: | ++ GNSS_ID_GPS [%d]
Line 6945: | svID(%d)
Line 6962: <<--------------------------------
Line 6963: | ++ GNSS_ID_GLONASS [%d]
Line 6969: | svID(%d)
Line 6979: | channelNumber(%d)
Line 6988: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 7019: <<--------------------------------
Line 7020: | ++ BDS_DifferentialCorrections_r12
Line 7024: | dbds_RefTime_r12(%d)
Line 7033: <<--------------------------------
Line 7034: | ++ BDS_SgnTypeList_r12 [%d]
Line 7042: | gnss_SignalID(%d)
Line 7052: <<--------------------------------
Line 7053: | ++ DBDS_CorrectionList_r12 [%d]
Line 7057: | svID(%d)
Line 7061: | bds_UDREI_r12(%d)
Line 7065: | bds_RURAI_r12(%d)
Line 7069: | bds_ECC_DeltaT_r12(%d)
Line 7105: <<--------------------------------
Line 7106: | ++ BDS_GridModelParameter_r12
Line 7110: | bds_RefTime_r12(%d)
Line 7119: <<--------------------------------
Line 7120: | ++ GridIonList_r12 [%d]
Line 7124: | igp_ID_r12(%d)
Line 7128: | dt_r12(%d)
Line 7132: | givei_r12(%d)
Line 7568: <<--------------------------------
Line 7569: | ++ OTDOA_ReferenceCellInfo
Line 7572: | bit_mask(0x%02x)
Line 7576: | physCellId(%d)
Line 7587: !!!!!!!!!! FAIL to copy ECGI !!!!!!!!!!
Line 7597: | earfcnRef(%d)
Line 7603: | earfcnRef_v9a0(%d)
Line 7611: | antennaPortConfig(%d)
Line 7616: | cpLength(%d)
Line 7476: <<--------------------------------
Line 7477: | ++ PRS_Info
Line 7481: LPP_CopyPRS_Info() - NULL Pointer!!!
Line 7482: >>--------------------------------
Line 7487: | bit_mask(0x%02x)
Line 7490: | prs_Bandwidth(%d)
Line 7493: | prs_ConfigurationIndex(%d)
Line 7496: | numDL_Frames(%d)
Line 7501: | prs_MutingInfo_r9.choice(%d)
Line 7510: | prs_MutingInfo_r9.u.po2_r9.value(0x%02x)
Line 7518: | prs_MutingInfo_r9.u.po4_r9.value(0x%02x)
Line 7526: | prs_MutingInfo_r9.u.po8_r9.value(0x%02x)
Line 7536: | prs_MutingInfo_r9.u.po16_r9.value(0x%02x %02x)
Line 7663: <<--------------------------------
Line 7664: | ++ otdoa_NeighbourCellInfo
Line 7670: LPP_CopyOTDOA_NeighbourCellInfo() - MALLOC FAIL!!!
Line 7682: <<--------------------------------
Line 7683: | ++ otdoa_NeighbourCellFreqInfo
Line 7689: LPP_CopyOTDOA_NeighbourCellInfo() - MALLOC FAIL!!!
Line 7704: | bit_mask(0x%02x)
Line 7708: | physCellId(%d)
Line 7717: !!!!!!!!!! FAIL to copy ECGI !!!!!!!!!!
Line 7738: | earfcn(%d)
Line 7745: | earfcn_v9a0(%d)
Line 7754: | cpLength(%d)
Line 7772: | antennaPortConfig(%d)
Line 7782: | slotNumberOffset(%d)
Line 7792: | prs_SubframeOffset(%d)
Line 7799: | expectedRSTD(%d)
Line 7805: | expectedRSTD_Uncertainty(%d)
Line 7926: <<--------------------------------
Line 7927: | ++ PeriodicalReportingCriteria
Line 7950: | reportingAmount(%d)
Line 7969: | reportingInterval(%d)
Line 7971: >>--------------------------------
Line 7989: <<--------------------------------
Line 7990: | ++ QoS
Line 7998: | horizontalAccuracy.accuracy(%d)
Line 8000: | horizontalAccuracy.confidence(%d)
Line 8005: | verticalCoordinateRequest(%d)
Line 8011: | verticalAccuracy.accuracy(%d)
Line 8013: | verticalAccuracy.confidence(%d)
Line 8020: | responseTime.time(%d)
Line 8028: | responseTime.responseTimeEarlyFix_r12(%d)
Line 8035: | velocityRequest(%d)
Line 8038: >>--------------------------------
Line 8275: <<--------------------------------
Line 8276: | ++ GNSS_ID
Line 8303: | gnssID(%d)
Line 8337: | sbas_ID(%d)
Line 8355: <<--------------------------------
Line 8356: | ++ GNSS_ID
Line 8387: | gnss_id(%d)
Line 8449: <<--------------------------------
Line 8450: | ++ GNSS_ID_Bitmap
Line 8483: | gnss_ids(0x%02x %02x)
Line 8484: >>--------------------------------
Line 9768: <<--------------------------------
Line 9769: | ++ LocationCoordinates
Line 9773:  LPP_ConvertLocationCoordinates() - NULL Pointer!!!
Line 9774: >>--------------------------------
Line 9799: LPP_ConvertLocationCoordinates() - numberOfPolygonPoints is ZERO!!!
Line 9800: >>--------------------------------
Line 9834: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 9838: >>--------------------------------
Line 8639: <<--------------------------------
Line 8640: | ++ Ellipsoid_Point
Line 8648: !!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
Line 8649: >>--------------------------------
Line 8652: | latitudeSign(%d)
Line 8658: !!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
Line 8659: >>--------------------------------
Line 8663: | degreesLatitude(%d)
Line 8669: !!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
Line 8670: >>--------------------------------
Line 8674: | degreesLongitude(%d)
Line 8675: >>--------------------------------
Line 8701: <<--------------------------------
Line 8702: | ++ Ellipsoid_PointWithUncertaintyCircle
Line 8710: !!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
Line 8711: >>--------------------------------
Line 8714: | latitudeSign(%d)
Line 8720: !!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
Line 8721: >>--------------------------------
Line 8725: | degreesLatitude(%d)
Line 8731: !!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
Line 8732: >>--------------------------------
Line 8736: | degreesLongitude(%d)
Line 8742: !!!!!!!!!! uncertainty(%d) is out of range !!!!!!!!!!
Line 8743: >>--------------------------------
Line 8747: | uncertainty(%d)
Line 8748: >>--------------------------------
Line 8774: <<--------------------------------
Line 8775: | ++ EllipsoidPointWithUncertaintyEllipse
Line 8783: !!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
Line 8784: >>--------------------------------
Line 8787: | latitudeSign(%d)
Line 8793: !!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
Line 8794: >>--------------------------------
Line 8798: | degreesLatitude(%d)
Line 8804: !!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
Line 8805: >>--------------------------------
Line 8809: | degreesLongitude(%d)
Line 8815: !!!!!!!!!! uncertaintySemiMajor(%d) is out of range !!!!!!!!!!
Line 8816: >>--------------------------------
Line 8820: | uncertaintySemiMajor(%d)
Line 8826: !!!!!!!!!! uncertaintySemiMinor(%d) is out of range !!!!!!!!!!
Line 8827: >>--------------------------------
Line 8831: | uncertaintySemiMinor(%d)
Line 8837: !!!!!!!!!! orientationMajorAxis(%d) is out of range !!!!!!!!!!
Line 8838: >>--------------------------------
Line 8842: | orientationMajorAxis(%d)
Line 8848: !!!!!!!!!! confidence(%d) is out of range !!!!!!!!!!
Line 8849: >>--------------------------------
Line 8853: | confidence(%d)
Line 8854: >>--------------------------------
Line 8887: <<--------------------------------
Line 8888: | ++ Polygon [%d]
Line 8893: LPP_ConvertPolygon() - MALLOC FAIL!!!
Line 8894: >>--------------------------------
Line 8906: !!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
Line 8907: >>--------------------------------
Line 8912: | latitudeSign(%d)
Line 8918: !!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
Line 8919: >>--------------------------------
Line 8925: | degreesLatitude(%d)
Line 8931: !!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
Line 8932: >>--------------------------------
Line 8938: | degreesLongitude(%d)
Line 8939: >>--------------------------------
Line 8968: <<--------------------------------
Line 8969: | ++ EllipsoidPointWithAltitude
Line 8977: !!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
Line 8978: >>--------------------------------
Line 8981: | latitudeSign(%d)
Line 8987: !!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
Line 8988: >>--------------------------------
Line 8992: | degreesLatitude(%d)
Line 8998: !!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
Line 8999: >>--------------------------------
Line 9003: | degreesLongitude(%d)
Line 9011: !!!!!!!!!! altitudeDirection(%d) is out of range !!!!!!!!!!
Line 9012: >>--------------------------------
Line 9015: | altitudeDirection(%d)
Line 9021: !!!!!!!!!! altitude(%d) is out of range !!!!!!!!!!
Line 9022: >>--------------------------------
Line 9026: | altitude(%d)
Line 9027: >>--------------------------------
Line 9053: <<--------------------------------
Line 9054: | ++ EllipsoidPointWithAltitudeAndUncertaintyEllipsoid
Line 9062: !!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
Line 9063: >>--------------------------------
Line 9066: | latitudeSign(%d)
Line 9072: !!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
Line 9073: >>--------------------------------
Line 9077: | degreesLatitude(%d)
Line 9083: !!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
Line 9084: >>--------------------------------
Line 9088: | degreesLongitude(%d)
Line 9096: !!!!!!!!!! altitudeDirection(%d) is out of range !!!!!!!!!!
Line 9097: >>--------------------------------
Line 9100: | altitudeDirection(%d)
Line 9106: !!!!!!!!!! altitude(%d) is out of range !!!!!!!!!!
Line 9107: >>--------------------------------
Line 9111: | altitude(%d)
Line 9117: !!!!!!!!!! uncertaintySemiMajor(%d) is out of range !!!!!!!!!!
Line 9118: >>--------------------------------
Line 9122: | uncertaintySemiMajor(%d)
Line 9128: !!!!!!!!!! uncertaintySemiMinor(%d) is out of range !!!!!!!!!!
Line 9129: >>--------------------------------
Line 9133: | uncertaintySemiMinor(%d)
Line 9139: !!!!!!!!!! orientationMajorAxis(%d) is out of range !!!!!!!!!!
Line 9140: >>--------------------------------
Line 9144: | orientationMajorAxis(%d)
Line 9150: !!!!!!!!!! uncertaintyAltitude(%d) is out of range !!!!!!!!!!
Line 9151: >>--------------------------------
Line 9155: | uncertaintyAltitude(%d)
Line 9161: !!!!!!!!!! confidence(%d) is out of range !!!!!!!!!!
Line 9162: >>--------------------------------
Line 9166: | confidence(%d)
Line 9168: >>--------------------------------
Line 9194: <<--------------------------------
Line 9195: | ++ EllipsoidArc
Line 9203: !!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
Line 9204: >>--------------------------------
Line 9207: | latitudeSign(%d)
Line 9213: !!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
Line 9214: >>--------------------------------
Line 9218: | degreesLatitude(%d)
Line 9224: !!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
Line 9225: >>--------------------------------
Line 9229: | degreesLongitude(%d)
Line 9242: | innerRadius(%d)
Line 9248: !!!!!!!!!! uncertaintyRadius(%d) is out of range !!!!!!!!!!
Line 9249: >>--------------------------------
Line 9253: | uncertaintyRadius(%d)
Line 9259: !!!!!!!!!! offsetAngle(%d) is out of range !!!!!!!!!!
Line 9260: >>--------------------------------
Line 9264: | offsetAngle(%d)
Line 9270: !!!!!!!!!! includedAngle(%d) is out of range !!!!!!!!!!
Line 9271: >>--------------------------------
Line 9275: | includedAngle(%d)
Line 9281: !!!!!!!!!! confidence(%d) is out of range !!!!!!!!!!
Line 9282: >>--------------------------------
Line 9286: | confidence(%d)
Line 9288: >>--------------------------------
Line 9315: <<--------------------------------
Line 9316: | ++ HA_EllipsoidPointWithScalableUncertaintyEllipse
Line 9320: | degreesLatitude_r16(%d)
Line 9324: | degreesLongitude_r16(%d)
Line 9336: | uncertaintySemiMajor_r16(%d)
Line 9348: | uncertaintySemiMinor_r16(%d)
Line 9355: !!!!!!!!!! orientationMajorAxis_r16(%d) is out of range !!!!!!!!!!
Line 9356: >>--------------------------------
Line 9360: | orientationMajorAxis_r16(%d)
Line 9366: !!!!!!!!!! confidence_r16(%d) is out of range !!!!!!!!!!
Line 9367: >>--------------------------------
Line 9371: | confidence_r16(%d)
Line 9378: !!!!!!!!!! ha_ExtendedUncertaintyRangeUsed_r16(%d) is out of range !!!!!!!!!!
Line 9379: >>--------------------------------
Line 9383: | ha_ExtendedUncertaintyRangeUsed_r16(%d)
Line 9386: >>--------------------------------
Line 9413: <<--------------------------------
Line 9414: | ++ HA_EllipsoidPointWithAltitudeAndScalableUncertaintyEllipsoid_r16
Line 9419: | degreesLatitude_r16(%d)
Line 9423: | degreesLongitude_r16(%d)
Line 9431: !!!!!!!!!! altitude_r16(%d) is out of range !!!!!!!!!!
Line 9432: >>--------------------------------
Line 9436: | altitude_r16(%d)
Line 9449: | uncertaintySemiMajor_r16(%d)
Line 9461: | uncertaintySemiMinor_r16(%d)
Line 9468: !!!!!!!!!! orientationMajorAxis_r16(%d) is out of range !!!!!!!!!!
Line 9469: >>--------------------------------
Line 9473: | orientationMajorAxis_r16(%d)
Line 9479: !!!!!!!!!! horizontalConfidence_r16(%d) is out of range !!!!!!!!!!
Line 9480: >>--------------------------------
Line 9484: | horizontalConfidence_r16(%d)
Line 9497: | uncertaintyAltitude_r16(%d)
Line 9503: !!!!!!!!!! verticalConfidence_r16(%d) is out of range !!!!!!!!!!
Line 9504: >>--------------------------------
Line 9508: | verticalConfidence_r16(%d)
Line 9515: !!!!!!!!!! ha_HorizontalExtendedRangeUsed_r16(%d) is out of range !!!!!!!!!!
Line 9516: >>--------------------------------
Line 9520: | ha_HorizontalExtendedRangeUsed_r16(%d)
Line 9527: !!!!!!!!!! ha_VerticalExtendedRangeUsed_r16(%d) is out of range !!!!!!!!!!
Line 9528: >>--------------------------------
Line 9532: | ha_VerticalExtendedRangeUsed_r16(%d)
Line 9534: >>--------------------------------
Line 10156: <<--------------------------------
Line 10157: | ++ Velocity
Line 10184: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 10188: >>--------------------------------
Line 9915: <<--------------------------------
Line 9916: | ++ HorizontalWithVerticalVelocity
Line 9922: !!!!!!!!!! bearing(%d) is out of range !!!!!!!!!!
Line 9923: >>--------------------------------
Line 9927: | bearing(%d)
Line 9933: !!!!!!!!!! horizontalSpeed(%d) is out of range !!!!!!!!!!
Line 9934: >>--------------------------------
Line 9938: | horizontalSpeed(%d)
Line 9946: !!!!!!!!!! verticalDirection(%d) is out of range !!!!!!!!!!
Line 9947: >>--------------------------------
Line 9950: | verticalDirection(%d)
Line 9963: | verticalSpeed(%d)
Line 9964: >>--------------------------------
Line 9990: <<--------------------------------
Line 9991: | ++ HorizontalVelocityWithUncertainty
Line 9997: !!!!!!!!!! bearing(%d) is out of range !!!!!!!!!!
Line 9998: >>--------------------------------
Line 10002: | bearing(%d)
Line 10008: !!!!!!!!!! horizontalSpeed(%d) is out of range !!!!!!!!!!
Line 10009: >>--------------------------------
Line 10013: | horizontalSpeed(%d)
Line 10026: | uncertaintySpeed(%d)
Line 10027: >>--------------------------------
Line 10053: <<--------------------------------
Line 10054: | ++ HorizontalWithVerticalVelocityAndUncertainty
Line 10060: !!!!!!!!!! bearing(%d) is out of range !!!!!!!!!!
Line 10061: >>--------------------------------
Line 10065: | bearing(%d)
Line 10071: !!!!!!!!!! horizontalSpeed(%d) is out of range !!!!!!!!!!
Line 10072: >>--------------------------------
Line 10076: | horizontalSpeed(%d)
Line 10084: !!!!!!!!!! verticalDirection(%d) is out of range !!!!!!!!!!
Line 10085: >>--------------------------------
Line 10088: | verticalDirection(%d)
Line 10101: | verticalSpeed(%d)
Line 10114: | horizontalUncertaintySpeed(%d)
Line 10127: | verticalUncertaintySpeed(%d)
Line 10128: >>--------------------------------
Line 10214: <<--------------------------------
Line 10215: | ++ LocationError
Line 10223: >>--------------------------------
Line 11367: <<--------------------------------
Line 11368: | ++ GNSS_SignalMeasurementInformation
Line 11373: >>--------------------------------
Line 11379: LPP_ConvertGNSS_SignalMeasurementInformation() - numberOfGNSS_MeasurementList is ZERO!!!
Line 11380: >>--------------------------------
Line 11389: <<--------------------------------
Line 11390: | ++ GNSS_MeasurementList [%d]
Line 11395: LPP_ConvertGNSS_SignalMeasurementInformation() - MALLOC FAIL!!!
Line 11396: >>--------------------------------
Line 11397: >>--------------------------------
Line 11408: LPP_ConvertGNSS_SignalMeasurementInformation() - [%d].numberOfGNSS_SgnMeasList is ZERO!!!
Line 11409: >>--------------------------------
Line 11410: >>--------------------------------
Line 11424: >>--------------------------------
Line 11430: >>--------------------------------
Line 10849: <<--------------------------------
Line 10850: | ++ MeasurementReferenceTime
Line 10854: LPP_ConvertMeasurementReferenceTime() - NULL Pointer!!!
Line 10855: >>--------------------------------
Line 10865: !!!!!!!!!! gnss_TOD_msec(%d) is out of range !!!!!!!!!!
Line 10869: | gnss_TOD_msec(%d)
Line 10877: !!!!!!!!!! gnss_TOD_frac(%d) is out of range !!!!!!!!!!
Line 10881: | gnss_TOD_frac(%d)
Line 10890: !!!!!!!!!! gnss_TOD_unc(%d) is out of range !!!!!!!!!!
Line 10894: | gnss_TOD_unc(%d)
Line 10936: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 10580: <<--------------------------------
Line 10581: | ++ EUTRA
Line 10589: !!!!!!!!!! gnss_TOD_unc(%d) is out of range !!!!!!!!!!
Line 10593: | physCellId(%d)
Line 10612: LPP_ConvertNetworkTimeForEUTRA() - MALLOC FAIL!!!
Line 10621: | systemFrameNumber.value(0x%02x %02x)
Line 10623: | systemFrameNumber.length(%d)
Line 10391: <<--------------------------------
Line 10392: | ++ CellGlobalIdEUTRA_AndUTRA
Line 10395: | plmn_Identity.mcc
Line 10399: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 10400: >>--------------------------------
Line 10405: | plmn_Identity.mnc
Line 10409: !!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
Line 10410: >>--------------------------------
Line 10424: LPP_ConvertCellGlobalIdEUTRA_AndUTRA_ToASN() - MALLOC FAIL!!!
Line 10425: >>--------------------------------
Line 10436: | cellIdentity.u.eutra.value(0x%02x %02x %02x %02x)
Line 10438: | cellIdentity.u.eutra.length(%d)
Line 10446: LPP_ConvertCellGlobalIdEUTRA_AndUTRA_ToASN() - MALLOC FAIL!!!
Line 10447: >>--------------------------------
Line 10458: | cellIdentity.u.utra.value(0x%02x %02x %02x %02x)
Line 10460: | cellIdentity.u.eutra.length(%d)
Line 10464: !!!!!!!!!! cellIdentity.choice(%d) is wrong choice !!!!!!!!!!
Line 10468: >>--------------------------------
Line 10651: <<--------------------------------
Line 10652: | ++ UTRA
Line 10665: !!!!!!!!!! fddPrimary_CPICH_Info(%d) is out of range !!!!!!!!!!
Line 10671: | primary_CPICH_Info(%d)
Line 10678: !!!!!!!!!! cellParameters(%d) is out of range !!!!!!!!!!
Line 10684: | cellParameters(%d)
Line 10688: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 10707: !!!!!!!!!! referenceSystemFrameNumber(%d) is out of range !!!!!!!!!!
Line 10713: | referenceSystemFrameNumber(%d)
Line 10741: <<--------------------------------
Line 10742: | ++ GSM
Line 10750: !!!!!!!!!! bcchCarrier(%d) is out of range !!!!!!!!!!
Line 10755: | bcchCarrier(%d)
Line 10761: !!!!!!!!!! bsic(%d) is out of range !!!!!!!!!!
Line 10766: | bsic(%d)
Line 10793: | referenceFrame.referenceFN(%d)
Line 10801: !!!!!!!!!! referenceFrame.referenceFNMSB(%d) is out of range !!!!!!!!!!
Line 10806: | referenceFrame.referenceFNMSB(%d)
Line 10815: !!!!!!!!!! deltaGNSS_TOD(%d) is out of range !!!!!!!!!!
Line 10820: | deltaGNSS_TOD(%d)
Line 10496: <<--------------------------------
Line 10497: | ++ CellGlobalIdGERAN
Line 10500: | plmn_Identity.mcc
Line 10504: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 10505: >>--------------------------------
Line 10510: | plmn_Identity.mnc
Line 10514: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 10515: >>--------------------------------
Line 10524: LPP_ConvertCellGlobalIdGERAN() - MALLOC FAIL!!!
Line 10525: >>--------------------------------
Line 10532: | locationAreaCode.value(0x%02x %02x)
Line 10534: | locationAreaCode.length(%d)
Line 10541: LPP_ConvertCellGlobalIdGERAN() - MALLOC FAIL!!!
Line 10542: >>--------------------------------
Line 10549: | cellIdentity.value(0x%02x %02x)
Line 10550: | cellIdentity.length(%d)
Line 10552: >>--------------------------------
Line 11254: <<--------------------------------
Line 11255: | ++ GNSS_SgnMeasList[%d]
Line 11260: LPP_ConvertGNSS_SgnMeasList() - MALLOC FAIL!!!
Line 11261: >>--------------------------------
Line 11262: >>--------------------------------
Line 11263: >>--------------------------------
Line 11281: | gnss_SignalID.gnss_SignalID(%d)
Line 11289: !!!!!!!!!! gnss_CodePhaseAmbiguity(%d) is out of range (0..127) !!!!!!!!!!
Line 11290: >>--------------------------------
Line 11291: >>--------------------------------
Line 11292: >>--------------------------------
Line 11305: | gnss_CodePhaseAmbiguity(%d)
Line 11310: LPP_ConvertGNSS_SgnMeasList() - numberOfGNSS_SatMeasList is ZERO!!!
Line 11311: >>--------------------------------
Line 11312: >>--------------------------------
Line 11313: >>--------------------------------
Line 11328: >>--------------------------------
Line 11334: >>--------------------------------
Line 11099: <<--------------------------------
Line 11100: | ++ GNSS_SatMeasList[%d]
Line 11105: LPP_ConvertGNSS_SatMeasList() - MALLOC FAIL!!!
Line 11106: >>--------------------------------
Line 11107: >>--------------------------------
Line 11108: >>--------------------------------
Line 11109: >>--------------------------------
Line 11134: !!!!!!!!!! carrierQualityInd(%d) is out of range (0..3) !!!!!!!!!!
Line 11135: >>--------------------------------
Line 11136: >>--------------------------------
Line 11137: >>--------------------------------
Line 11138: >>--------------------------------
Line 11146: | carrierQualityInd(%d)
Line 11155: !!!!!!!!!! integerCodePhase(%d) is out of range (0..127) !!!!!!!!!!
Line 11156: >>--------------------------------
Line 11157: >>--------------------------------
Line 11158: >>--------------------------------
Line 11159: >>--------------------------------
Line 11167: | integerCodePhase(%d)
Line 11191: | doppler(%d)
Line 11200: !!!!!!!!!! adr(%d) is out of range (0..33554431) !!!!!!!!!!
Line 11201: >>--------------------------------
Line 11202: >>--------------------------------
Line 11203: >>--------------------------------
Line 11204: >>--------------------------------
Line 11212: | adr(%d)
Line 11215: >>--------------------------------
Line 10992: | svID.satellite_id(%d)
Line 10998: !!!!!!!!!! cNo(%d) is out of range (0..63) !!!!!!!!!!
Line 10999: >>--------------------------------
Line 11000: >>--------------------------------
Line 11001: >>--------------------------------
Line 11002: >>--------------------------------
Line 11007: | cNo(%d)
Line 11030: | mpathDet(%d)
Line 11036: !!!!!!!!!! codePhase(%d) is out of range (0..2097151) !!!!!!!!!!
Line 11037: >>--------------------------------
Line 11038: >>--------------------------------
Line 11039: >>--------------------------------
Line 11040: >>--------------------------------
Line 11045: | codePhase(%d)
Line 11051: !!!!!!!!!! codePhaseRMSError(%d) is out of range (0..63) !!!!!!!!!!
Line 11052: >>--------------------------------
Line 11053: >>--------------------------------
Line 11054: >>--------------------------------
Line 11055: >>--------------------------------
Line 11060: | codePhaseRMSError(%d)
Line 11458: <<--------------------------------
Line 11459: | ++ GNSS_LocationInformation
Line 11465: >>--------------------------------
Line 11473: >>--------------------------------
Line 11477: >>--------------------------------
Line 11880: <<--------------------------------
Line 11881: | ++ GNSS_SignalIDs
Line 11893: LPP_ConvertGNSS_SignalIDsToASN() - MALLOC FAIL!!!
Line 11905: | gnss_SignalIDs(0x%02x)
Line 12352: <<--------------------------------
Line 12353: | ++ GNSS_CommonAssistDataReq
Line 12363: LPP_ConvertGNSS_CommonAssistDataReq() - numberOfGNSS_TimeReqPrefList is ZERO!!!
Line 12374: <<--------------------------------
Line 12375: | ++ GNSS_ReferenceLocationReq
Line 12379: >>--------------------------------
Line 12385: <<--------------------------------
Line 12386: | ++ GNSS_IonosphericModelReq
Line 12398: LPP_ConvertGNSS_CommonAssistDataReq() - MALLOC FAIL!!!
Line 12399: >>--------------------------------
Line 12400: >>--------------------------------
Line 12406: | klobucharModelReq(0x%02x)
Line 12412: | neQuickModelReq_present
Line 12415: >>--------------------------------
Line 12421: <<--------------------------------
Line 12422: | ++ GNSS_EarthOrientationParametersReq
Line 12427: >>--------------------------------
Line 12429: >>--------------------------------
Line 11768: <<--------------------------------
Line 11769: | ++ GNSS_ReferenceTimeReq
Line 11778: <<--------------------------------
Line 11779: | ++ gnss_TimeReqPrefList [%d]
Line 11784: LPP_ConvertGNSS_ReferenceTimeReq() - MALLOC FAIL!!!
Line 11785: >>--------------------------------
Line 11786: >>--------------------------------
Line 11794: >>--------------------------------
Line 11803: | gps_TOW_assistReq(%d)
Line 11810: | notOfLeapSecReq(%d)
Line 11813: >>--------------------------------
Line 12648: LPP_ConvertGNSS_GenericAssistDataReqElement() - numberOfGNSS_TimeModelsReq is ZERO!!!
Line 12678: <<--------------------------------
Line 12679: | ++ GNSS_RealTimeIntegrityReq
Line 12684: >>--------------------------------
Line 12723: <<--------------------------------
Line 12724: | ++ GNSS_AuxiliaryInformationReq
Line 12729: >>--------------------------------
Line 12736: <<--------------------------------
Line 12737: | ++ BDS_DifferentialCorrectionsReq_r12
Line 12744: >>--------------------------------
Line 12751: <<--------------------------------
Line 12752: | ++ BDS_GridModelReq_r12
Line 12757: >>--------------------------------
Line 12760: >>--------------------------------
Line 12461: <<--------------------------------
Line 12462: | ++ GNSS_TimeModelsReq [%d]
Line 12468: LPP_ConvertGNSS_TimeModelsReq() - MALLOC FAIL!!!
Line 12469: >>--------------------------------
Line 12470: >>--------------------------------
Line 12471: >>--------------------------------
Line 12489: | gnss_TO_IDsReq(%d)
Line 12495: | deltaTreq(%d)
Line 12497: >>--------------------------------
Line 11929: <<--------------------------------
Line 11930: | ++ GNSS_DifferentialCorrectionsReq
Line 11937: | dgnss_ValidityTimeReq(%d)
Line 11938: >>--------------------------------
Line 11964: <<--------------------------------
Line 11965: | ++ GNSS_NavigationModelReq
Line 11979: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 11983: >>--------------------------------
Line 12093: <<--------------------------------
Line 12094: | ++ StoredNavListInfo
Line 12102: !!!!!!!!!! gnss_WeekOrDay(%d) is out of range (0..4095) !!!!!!!!!!
Line 12103: >>--------------------------------
Line 12104: >>--------------------------------
Line 12108: | gnss_WeekOrDay(%d)
Line 12122: | gnss_Toe(%d)
Line 12128: !!!!!!!!!! t_toeLimit(%d) is out of range (0..15) !!!!!!!!!!
Line 12129: >>--------------------------------
Line 12130: >>--------------------------------
Line 12134: | t_toeLimit(%d)
Line 12142: >>--------------------------------
Line 11994: LPP_ConvertGNSS_NavigationModelReq() - numberOfSatListRelatedDataList is ZERO!!!
Line 12001: <<--------------------------------
Line 12002: | ++ SatListRelatedDataList [%d]
Line 12008: LPP_ConvertGNSS_NavigationModelReq() - MALLOC FAIL!!!
Line 12009: >>--------------------------------
Line 12010: >>--------------------------------
Line 12011: >>--------------------------------
Line 12022: | svID.satellite_id(%d)
Line 12029: LPP_ConvertGNSS_NavigationModelReq() - MALLOC FAIL!!!
Line 12030: >>--------------------------------
Line 12031: >>--------------------------------
Line 12032: >>--------------------------------
Line 12043: | svID.iod(0x%02x %02x)
Line 12051: !!!!!!!!!! clockModelID(%d) is out of range (0..8) !!!!!!!!!!
Line 12052: >>--------------------------------
Line 12053: >>--------------------------------
Line 12054: >>--------------------------------
Line 12061: | clockModelID(%d)
Line 12070: !!!!!!!!!! orbitModelID(%d) is out of range (0..8) !!!!!!!!!!
Line 12071: >>--------------------------------
Line 12072: >>--------------------------------
Line 12073: >>--------------------------------
Line 12080: | orbitModelID(%d)
Line 12083: >>--------------------------------
Line 12148: <<--------------------------------
Line 12149: | ++ ReqNavListInfo
Line 12158: LPP_ConvertGNSS_NavigationModelReq() - MALLOC FAIL!!!
Line 12159: >>--------------------------------
Line 12160: >>--------------------------------
Line 12175: | svReqList(0x%02x %02x %02x %02x ...)
Line 12180: | svReqList(... 0x%02x %02x %02x %02x)
Line 12190: >>--------------------------------
Line 12191: >>--------------------------------
Line 12206: >>--------------------------------
Line 12207: >>--------------------------------
Line 12218: | addNavparamReq(%d)
Line 12221: >>--------------------------------
Line 13813: LPP_ConvertSeqof3withNumToASN() - pDst is not NULL!!!
Line 13822: LPP_ConvertSeqof3withNumToASN() - MALLOC FAIL!!!
Line 12245: <<--------------------------------
Line 12246: | ++ GNSS_DataBitAssistanceReq
Line 12254: !!!!!!!!!! gnss_TOD_Req(%d) is out of range (0..3599) !!!!!!!!!!
Line 12255: >>--------------------------------
Line 12259: | gnss_TOD_Req(%d)
Line 12267: !!!!!!!!!! gnss_TOD_FracReq(%d) is out of range (0..999) !!!!!!!!!!
Line 12268: >>--------------------------------
Line 12272: | gnss_TOD_FracReq(%d)
Line 12279: !!!!!!!!!! dataBitInterval(%d) is out of range (0..15) !!!!!!!!!!
Line 12280: >>--------------------------------
Line 12284: | dataBitInterval(%d)
Line 12298: LPP_ConvertGNSS_DataBitAssistanceReq() - numberOfGNSS_DataBitsReq is ZERO!!!
Line 12305: <<--------------------------------
Line 12306: | ++ GNSS_DataBitsReq [%d]
Line 12312: LPP_ConvertGNSS_DataBitAssistanceReq() - MALLOC FAIL!!!
Line 12313: >>--------------------------------
Line 12314: >>--------------------------------
Line 12321: | svID.satellite_id(%d)
Line 12322: >>--------------------------------
Line 12328: >>--------------------------------
Line 12527: <<--------------------------------
Line 12528: | ++ GNSS_AcquisitionAssistanceReq
Line 12534: | gnss_SignalID_Req.gnss_SignalID(%d)
Line 12541: | ERROR :: gnss_SignalID_Req.gnss_SignalID(%d). Value Discarded.
Line 12543: >>--------------------------------
Line 12566: <<--------------------------------
Line 12567: | ++ GNSS_AlmanacReq
Line 12572: | modelID(%d)
Line 12574: >>--------------------------------
Line 12597: <<--------------------------------
Line 12598: | ++ GNSS_UTCModelReq
Line 12603: | modelID(%d)
Line 12605: >>--------------------------------
Line 9864: <<--------------------------------
Line 9865: | ++ HorizontalVelocity
Line 9871: !!!!!!!!!! bearing(%d) is out of range !!!!!!!!!!
Line 9872: >>--------------------------------
Line 9876: | bearing(%d)
Line 9882: !!!!!!!!!! horizontalSpeed(%d) is out of range !!!!!!!!!!
Line 9883: >>--------------------------------
Line 9887: | horizontalSpeed(%d)
Line 9889: >>--------------------------------
