Line 542: LPP_ProcessNRPositioning_RequestLocationInformation() - NR Multi-RTT AssistanceData is NULL, nr_AssistanceAvailability_r16(%d)
Line 560: LPP_ProcessNRPositioning_RequestLocationInformation() - NR DL-AoD AssistanceData is NULL, nr_AssistanceAvailability_r16(%d)
Line 578: LPP_ProcessNRPositioning_RequestLocationInformation() - NR DL-TDOA AssistanceData is NULL, nr_AssistanceAvailability_r16(%d)
Line 586: LPP_ProcessNRPositioning_RequestLocationInformation() - assistanceDataTimeStamp(%d)
Line 600: LPP_ProcessNRPositioning_RequestLocationInformation() - errorBit contains nr_Multi_RTT_RequestAssistanceData_present
Line 615: LPP_ProcessNRPositioning_RequestLocationInformation() - errorBit contains nr_DL_AoD_RequestAssistanceData_present
Line 630: LPP_ProcessNRPositioning_RequestLocationInformation() - errorBit contains nr_DL_TDOA_RequestAssistanceData_present
Line 664: LPP_ProcessNRPositioning_RequestLocationInformation() - DO NOT send NR Positioning Measure Request
Line 1041: LPP_ProcessRequestLocationInformation()
Line 1046: LPP_ProcessRequestLocationInformation() - MALLOC FAIL!!!
Line 1049: .......... Initializing LocatioinInformationElement ..........
Line 1051: <<--------------------------------
Line 1052: | ++ LocatioinInformationElement
Line 1056: | sessionTableIndex(%d)
Line 1060: | transactionNumber(%d)
Line 1064: | requestedLocationInformation(%d)
Line 1068: | errorBitMask(0x%x)
Line 1074: LPP_ProcessRequestLocationInformation() - MALLOC FAIL!!!
Line 1080: >>--------------------------------
Line 1187: !!!!!!!!!! physCellIdNeighbour(%d) is out of range !!!!!!!!!!
Line 1194: | physCellIdNeighbour(%d)
Line 1201: | MCC
Line 1206: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 1213: | MNC
Line 1218: !!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
Line 1236: | earfcnNeighbour(%d)
Line 1242: | earfcnNeighbour_v9a0(%d)
Line 1249: !!!!!!!!!! rstd(%d) is out of range !!!!!!!!!!
Line 1255: | rstd(%d)
Line 1269: | error_Resolution(0x%02x)
Line 1280: | error_Value(0x%02x)
Line 1293: | error_NumSamples(0x%02x)
Line 1297: >>--------------------------------
Line 1334: LPP_ConvertToOTDOA_SignalMeasurementInformation() - NULL Pointer!!!
Line 1343: <<--------------------------------
Line 1344: | ++ referenceCell
Line 1352: | systemFrameNumber.value(0x%02x %02x)
Line 1354: | systemFrameNumber.length(%d)
Line 1361: !!!!!!!!!! physCellIdRef(%d) is out of range !!!!!!!!!!
Line 1365: | physCellIdRef(%d)
Line 1372: | MCC
Line 1376: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 1381: | MNC
Line 1385: !!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
Line 1399: | cellIdentity.value(0x%02x %02x %02x %02x)
Line 1402: | cellIdentity.length(%d)
Line 1409: | earfcnRef(%d)
Line 1415: | earfcnRef_v9a0(%d)
Line 1431: | error_Resolution(0x%02x)
Line 1441: | error_Value(0x%02x)
Line 1453: | error_NumSamples(0x%02x)
Line 1461: LPP_ConvertToOTDOA_SignalMeasurementInformation() - numberOfNeibourCells(%d)
Line 1466: <<--------------------------------
Line 1467: | ++ neibourCell[%d]
Line 1476: LPP_ConvertNeighbourMeasurementElement() - MALLOC FAIL!!!
Line 1496: !!!!!!!!!! neighbourMeasurementList is NULL !!!!!!!!!!
Line 1532: LPP_ProcessOTDOA_ProvideLocationInformation() - NULL Pointer!!!
Line 1540: LPP_ProcessOTDOA_ProvideLocationInformation() - NULL Pointer!!!
Line 1553: LPP_ProcessOTDOA_ProvideLocationInformation() - ValildMeas(%d)
Line 1622: LPP_OTDOA_ProvideLocationInformation_otdoa_Error_present is set to TRUE
Line 1858: <<--------------------------------
Line 1859: | ++ primaryCell
Line 1872: LPP_ConvertECID_ProvideLocationInformation() - numberOfNeibourCells(%d)
Line 1876: <<--------------------------------
Line 1877: | ++ neibourCell[%d]
Line 1882: LPP_ConvertECID_ProvideLocationInformation() - MALLOC FAIL!!!
Line 1913: measuredResultsList list is empty. Clear servingCellMeasuredResults.
Line 1919: <<--------------------------------
Line 1924: LPP_ConvertECID_ProvideLocationInformation() - MALLOC FAIL!!!
Line 1942: >>--------------------------------
Line 2613: LPP_ProcessProvideLocationInformation() - NULL Pointer!!!
Line 2627: LPP_ProcessProvideLocationInformation() - earlyFix is already transmitted to NW. Skip this result
Line 2663: LPP_ProcessProvideLocationInformation() - ret(0x%x) requestedLocationInformation(0x%x)
Line 2691: lcsm_InitiMeasVars() - Initialising Measurement Values
Line 2745: lcsm_FindFreeLocReqNode() - No free node in the list
Line 2753: index_number[gLBSCurrentStackId] : %d
Line 2769: lcsm_AddLocReqNode()
Line 2796: lcsm_DelLocReqNode()
Line 2800: lcsm_DelLocReqNode() - trying to Delete Invalid Index
Line 2872: lcsm_GetSessionId() - Invalid Session Type
Line 2888: lcsm_HandleSuspReq()
Line 2972: lcsm_HandleRRCStopReq()
Line 2997: LCSM_PERIODIC_TIMER is Stopped
Line 2999: LCSM Stop Timer = %x
Line 3012: lcsm_HandleRrlpRel7MsrPosReq()
Line 3019: Velocity Request Present
Line 3034: GPS positioning method is present
Line 3038: Gallileo positioning method is present
Line 3042: SBASS positioning method is present
Line 3047: Modernized GPS  positioning method is present
Line 3052: QZSS positioning method is present
Line 3056: Glonass positioning method is present
Line 3062: GANSS assist data is recieved in Pos Req
Line 3093: Additional GPS assist data to be processed later based on GPS chip support
Line 3121: lcsm_HandleRrlpMeasReq()
Line 3137: session_id = %d, reference_number = %d
Line 3140: Both present and commanded ref no are same: Ignore
Line 3158: loc_req_db_start = %d
Line 3170: Unable to get free Loc Req Node, Index %d
Line 3205: Adding free node , index = %d
Line 3210: Assistance Data in Msr Position Req 
Line 3217: Deleting node, index = %d  
Line 3223: No nodes init queue
Line 3247: Setting index %d
Line 3262: Rel5 Msr Pos extensions Present
Line 3302: lcsm_HandleRrcMeasCmd() -  methodType = %d, Hor_acc_present = %d, hor_Acc= %d, Ver_acc_present = %d,  Ver_Acc = %d
Line 3304: gps_TimingOfCellWanted = %d, addition_assistance_data_req = %d
Line 3322: lcsm_HandleRrcMeasCmd() - LBS ==>NS: LBS_NS_GPS_RELEASE
Line 3328: Periodic Reporting Timeout Value: %d
Line 3334: lcsm_HandleRrcMeasCmd() - GanssDataPresent = %d
Line 3342: LCSM_PERIODIC_TIMER value:%d
Line 3376: lcsm_SameReferenceNumber() - Same Ref Number Flag %d
Line 3395: lcsm_GetIndexOfSession() - index_number in GetIndexOfSession(loc_req_db_start[gLBSCurrentStackId]) %d
Line 3422: lcsm_HandleFixErrorInd()
Line 3439: lcsm_HandleFixErrorInd() - MALLOC FAIL!!!
Line 3463: lcsm_HandleFixErrorInd() - MALLOC FAIL!!!
Line 3480: lcsm_HandleFixErrorInd() - LBS ==> RR: LBS_RR_APDU_IND, RRLP_msrPositionRsp_chosen, Error Cause = %s
Line 3491: lcsm_HandleFixErrorInd() - Create UMTS Message FAIL!!!
Line 3525: lcsm_HandleFixErrorInd() - LBS ==> URRC:LBS_URRC_MEAS_ERROR_REQ
Line 3538: lcsm_HandleGanssFixErrorInd() - Create UMTS Message FAIL!!!
Line 3552: lcsm_HandleGanssFixErrorInd() - LBS ==> URRC:LBS_URRC_MEAS_ERROR_REQ, sending error_cause = %d
Line 3594: lcsm_ProcessRrApdu() - RRLP Component Choice %d
Line 3598: lcsm_ProcessRrApdu() - RRLP Assistance Data recieved %d
Line 3612: lcsm_ProcessRrApdu() - MALLOC FAIL!!!
Line 3638: lcsm_ProcessRrApdu() - LBS ==> RR: LBS_RR_APDU_IND, Ack
Line 3642: lcsm_ProcessRrApdu() - Pal Mem Free Failed
Line 3688: lcsm_ProcessRrApdu() - RRLP Msr Position Req Recieved
Line 3693: lcsm_ProcessRrApdu() - RRLP Protocol Error Recieved
Line 3699: lcsm_ProcessRrApdu() - RRLP Position capability Request Received
Line 3703: lcsm_ProcessRrApdu() - [Rrlp_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
Line 3724: lcsm_HandlePositionCapReq() - MALLOC FAIL!!!
Line 3732: lcsm_HandlePositionCapReq() - MALLOC FAIL!!!
Line 3738: lcsm_HandlePositionCapReq()
Line 3755: GANSS Position Methods Requested by nw
Line 3792: Assistance Needed requested by nw
Line 3797: Ganss Extension Container Requested by nw
Line 3842: lcsm_HandlePositionCapReq() - LBS ==> RR: LBS_RR_APDU_IND, RRLP_posCapabilityRsp_chosen
Line 3866: lcsm_HandleProtocolError()
Line 3871: lcsm_HandleProtocolError() - MALLOC FAIL!!!
Line 3882: lcsm_HandleProtocolError() - Error in lcsm_RrlpEncode
Line 3893: lcsm_HandleProtocolError() - LBS ==> RR:LBS_RR_APDU_IND, RRLP_protocolError_chosen, Error Cause = %s
Line 3915: Rrlp_ProAsnEncode: Success
Line 3918: Rrlp_ProAsnEncode: SIZE_INVALID
Line 3921: Rrlp_ProAsnEncode: CHOICE_INVALID
Line 3924: Rrlp_ProAsnEncode: RANGE_INVALID
Line 3927: Rrlp_ProAsnEncode: UNSUPPORTED_PDU
Line 3930: Rrlp_ProAsnEncode: ENCODER_BUFSIZE_EXCEED
Line 3933: Rrlp_ProAsnEncode: Misc error #: %d
Line 3940: Rrlp_ProAsnEncode FAIL, pdu(%d) ErrorCode(%d) ErrorStruct(%s)
Line 3953: Rrlp_ProAsnEncode Success, pdu(%d) packedLen(%d)
Line 3980: Rrlp_ProAsnDecode: Input buffer: 
Line 3985: Rrlp_ProAsnDecode: Success
Line 3988: Rrlp_ProAsnDecode: SIZE_INVALID
Line 3991: Rrlp_ProAsnDecode: CHOICE_INVALID
Line 3994: Rrlp_ProAsnDecode: RANGE_INVALID
Line 3997: Rrlp_ProAsnDecode: UNSUPPORTED_PDU
Line 4000: Rrlp_ProAsnDecode: DECODER_LENGTH_EXCEED (InputLen(%d bits) < unpackedLen(%d bits))
Line 4003: Rrlp_ProAsnDecode: Misc error #: %d
Line 4010: Rrlp_ProAsnDecode FAIL, pdu(%d) ErrorCode(%d) ErrorStruct(%s)
Line 4016: Rrlp_ProAsnDecode Success, pdu(%d) unpackedLen(%d)
Line 4046: lcsm_RrlpASNFree() - [Rrlp_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
Line 4080: lcsm_HandleProtocolErrorRsp()
Line 4084: lcsm_HandleProtocolErrorRsp() - [Error Code]: %s
Line 4089: lcsm_HandleProtocolErrorRsp() - [Protocol Error , Extension Conatiner Present]
Line 708: LPP_RequestLocationInformation_r9() - lppIsGpsAvailable is 0, but isEmcSession from GNSS is TRUE. change lppIsGpsAvailable to 0xff
Line 714: LPP_RequestLocationInformation_r9() - requestLocationInformation_r9.bit_mask(0x%x)
Line 731: LPP_RequestLocationInformation_r9() - responseTimeEarlyFix(%d)
Line 743: LPP_RequestLocationInformation_r9() - LPP_a_gnss_RequestLocationInformation_present
Line 783: LPP_RequestLocationInformation_r9() - LPP_epdu_RequestLocationInformation_present
Line 827: LPP_RequestLocationInformation_r9() - LPP_ecid_RequestLocationInformation_present
Line 874: LPP_RequestLocationInformation_r9() - LPP_otdoa_RequestLocationInformation_present
Line 917: LPP_RequestLocationInformation_r9() - LPP_nr_Multi_RTT_RequestLocationInformation_present
Line 932: LPP_RequestLocationInformation_r9() - LPP_nr_DL_AoD_RequestLocationInformation_present
Line 947: LPP_RequestLocationInformation_r9() - LPP_nr_DL_TDOA_RequestLocationInformation_present
Line 962: LPP_RequestLocationInformation_r9() - LPP_nr_ECID_RequestLocationInformation_present
Line 1005: LPP_RequestLocationInformation_r9() - NR Positioning requested but NOT available, nrPosProfile(%d)
Line 169: LPP_ProcessCommonIEsRequestLocationInformation() - LPP_commonIEsRequestLocationInformation_present
Line 174: LPP_ProcessCommonIEsRequestLocationInformation() - LPP_triggeredReporting_present
Line 176: LPP_ProcessCommonIEsRequestLocationInformation() - triggeredReporting.cellChange(%d)
Line 191: LPP_ProcessCommonIEsRequestLocationInformation() - LPP_qos_present
Line 196: LPP_ProcessCommonIEsRequestLocationInformation() - LPP_responseTime_present
Line 208: LPP_ProcessCommonIEsRequestLocationInformation() - responseTime(%d) seconds
Line 219: LPP_ProcessCommonIEsRequestLocationInformation() - responseTimeEarlyFix_r12(%d) seconds
Line 225: LPP_ProcessCommonIEsRequestLocationInformation() - Set C-Plane EarlyFixAbnormal to TRUE
Line 231: LPP_ProcessCommonIEsRequestLocationInformation() - responseTimeEarlyFix_r12(%d) is ignored because it is less than time(%d)
Line 245: LPP_ProcessCommonIEsRequestLocationInformation() - LPP_periodicalReporting_present
Line 260: LPP_ProcessCommonIEsRequestLocationInformation() - LPP_reportingAmount_present
Line 293: LPP_ProcessCommonIEsRequestLocationInformation() - periodicReportingAmount(%d)
Line 334: LPP_ProcessCommonIEsRequestLocationInformation() - periodicReportingInterval(%d)
Line 398: LPP_ProcessOTDOA_RequestLocationInformation() - assistanceDataTimeStamp(%d)
Line 412: LPP_ProcessOTDOA_RequestLocationInformation() - LPP_otdoa_RequestAssistanceData_present
Line 424: LPP_ProcessOTDOA_RequestLocationInformation() - servingCellId(0x%x) otdoa_ReferenceCellInfo.physCellId(0x%x)
Line 426: LPP_ProcessOTDOA_RequestLocationInformation() - Send OTDOA Reqeust
Line 428: LPP_ProcessOTDOA_RequestLocationInformation() - Send OTDOA Reqeust responseTimeEarlyFix (%d)
Line 444: LPP_ProcessOTDOA_RequestLocationInformation() - assistanceAvailability(%d)
Line 1685: LPP_ConvertToECID_MeasuredResultsElement() - NULL Pointer!!!
Line 1694: !!!!!!!!!! physCellId(%d) is out of range !!!!!!!!!!
Line 1697: | physCellId(%d)
Line 1703: | MCC
Line 1707: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 1711: | MNC
Line 1715: !!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
Line 1724: cellGlobalId.cellIdentity.u.eutra.value is not NULL!!!
Line 1735: | cellIdentity.value(0x%02x %02x %02x %02x)
Line 1738: | cellIdentity.length(%d)
Line 1747: | arfcnEUTRA_v9a0(%d)
Line 1752: | arfcnEUTRA(%d)
Line 1761: pDst->systemFrameNumber.value is not NULL!!!
Line 1769: | systemFrameNumber.value(0x%02x %02x)
Line 1772: | systemFrameNumber.length(%d)
Line 1782: !!!!!!!!!! rsrp-Result(%d) is out of range !!!!!!!!!!
Line 1785: | rsrp_Result(%d)
Line 1795: !!!!!!!!!! rsrq_Result(%d) is out of range !!!!!!!!!!
Line 1798: | rsrq_Result(%d)
Line 1808: !!!!!!!!!! ue_RxTxTimeDiff(%d) is out of range !!!!!!!!!!
Line 1811: | ue_RxTxTimeDiff(%d)
Line 2467: LPP_ProvideLocationInformation_r9() - pDst->bit_mask(0x%x) bitMask(0x%x)
Line 2484: LPP_ProvideLocationInformation_r9() - pLocationInformation->flag (0x%x)
Line 2502: LPP_ProvideLocationInformation_r9() - LPP_a_gnss_ProvideLocationInformation_present
Line 2512: TCSOptCarrierType : (%d)
Line 2526: LPP_ProvideLocationInformation_r9() - LPP_epdu_ProvideLocationInformation_present
Line 2544: LPP_ProvideLocationInformation_r9() - LPP_otdoa_ProvideLocationInformation_present
Line 2556: LPP_ProvideLocationInformation_r9() - LPP_ecid_ProvideLocationInformation_present
Line 2575: LPP_ProvideLocationInformation_r9() - errorBitMask(0x%x)
Line 1991: LPP_ProcessECID_ProvideLocationInformation() - ValildMeas(0x%x)
Line 2373: LBS_ProcessNRPositioning_ProvideLocationInformation() - pPosMeasRsp->bit_mask(0x%x)
Line 2378: LBS_ProcessNRPositioning_ProvideLocationInformation() - LBS_Pos_Meas_NRECID_present
Line 2388: LBS_ProcessNRPositioning_ProvideLocationInformation() - LBS_Pos_Meas_MultiRTT_present
Line 2401: LBS_ProcessNRPositioning_ProvideLocationInformation() - LBS_Pos_Meas_DLAoD_present
Line 2414: LBS_ProcessNRPositioning_ProvideLocationInformation() - LBS_Pos_Meas_DLTDOA_present
Line 2043: LBS_ProcessNR_ECID_ProvideLocationInformation() - ValildMeas(%d)
Line 2106: LBS_ProcessNR_Multi_RTT_ProvideLocationInformation() - ValildMeas(%d)
Line 2117: LBS_ProcessNR_Multi_RTT_ProvideLocationInformation() - Multi-RTT MeasurementList size is 0
Line 2191: LBS_ProcessNR_DL_AoD_ProvideLocationInformation() - ValildMeas(%d)
Line 2201: LBS_ProcessNR_DL_AoD_ProvideLocationInformation() - DL-AoD MeasurementList size is 0
Line 2277: LBS_ProcessNR_DL_TDOA_ProvideLocationInformation() - ValildMeas(%d)
Line 2287: LBS_ProcessNR_DL_TDOA_ProvideLocationInformation() - DL-TDOA MeasurementList size is 0
