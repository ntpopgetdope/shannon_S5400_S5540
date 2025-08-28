Line 72: LBS_Get_NR_Pos_Profile, ds_PSS.LBS.NR_Pos_Profile : 0x%x
Line 79: LBS_Get_NR_Pos_Profile, PSS.LBS.NR_Pos_Profile : 0x%x
Line 123: LBS_ConvertNRPosReqFromASN() - requestedLocationInformation (0x%x)
Line 132: LBS_ConvertNRPosReqFromASN() - MALLOC FAIL!!!
Line 144: LBS_ConvertNRPosReqFromASN() - MALLOC FAIL!!!
Line 165: LBS_ConvertNRPosReqFromASN() - MALLOC FAIL!!!
Line 185: LBS_ConvertNRPosReqFromASN() - MALLOC FAIL!!!
Line 206: LBS_ConvertNRPosReqFromASN() - MALLOC FAIL!!!
Line 246: <<--------------------------------
Line 247: | ++ NCGI
Line 250: | MCC
Line 254: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 255: >>--------------------------------
Line 260: | MNC
Line 264: !!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
Line 265: >>--------------------------------
Line 277: | cellIdentity.value(0x%02x %02x %02x %02x %02x)
Line 279: | nr-cellidentity.length(%d)
Line 280: >>--------------------------------
Line 303: <<--------------------------------
Line 304: | ++ NCGI
Line 311: LBS_CopyNCGI() - NULL Pointer!!!
Line 312: >>--------------------------------
Line 318: !!!!!!!!!! FAIL to copy MCC !!!!!!!!!!
Line 321: | MCC (%d %d %d)
Line 329: !!!!!!!!!! FAIL to copy MNC !!!!!!!!!!
Line 332: | MNC (%d %d %d)
Line 343: | cellidentity.value(0x%02x %02x %02x %02x %02x)
Line 346: | cellIdentity.length(%d)
Line 380: !!!!!!!!!! physCellID(%d) is out of range !!!!!!!!!!
Line 383: | physCellID(%d)
Line 387: | nr_ARFCN.choice(%d)
Line 395: !!!!!!!!!! ssb_ARFCN(%d) is out of range !!!!!!!!!!
Line 398: | nr_ARFCN.ssb_ARFCN(%d)
Line 406: !!!!!!!!!! csi_RS_pointA(%d) is out of range !!!!!!!!!!
Line 409: | nr_ARFCN.csi_RS_pointA(%d)
Line 419: | MCC
Line 423: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 427: | MNC
Line 431: !!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
Line 439: nr_CellGlobalID_r16.nr_cellidentity_r15.value is not NULL!!!
Line 451: | nrCellGlobalIdCellIdentity.value(0x%02x %02x %02x %02x %02x)
Line 454: | nrCellGlobalIdCellIdentity.length(%d)
Line 462: systemFrameNumber.value is not NULL!!!
Line 471: | systemFrameNumber.value(0x%02x %02x)
Line 474: | systemFrameNumber.length(%d)
Line 486: !!!!!!!!!! resultsSSB_Cell.rsrp-Result(%d) is out of range !!!!!!!!!!
Line 489: | resultsSSB_Cell.rsrp_Result(%d)
Line 495: !!!!!!!!!! resultsSSB_Cell.rsrq-Result(%d) is out of range !!!!!!!!!!
Line 498: | resultsSSB_Cell.rsrq_Result(%d)
Line 511: !!!!!!!!!! resultsCSI_RS_Cell.nr_RSRP(%d) is out of range !!!!!!!!!!
Line 514: | resultsCSI_RS_Cell.nr_RSRP(%d)
Line 520: !!!!!!!!!! resultsCSI_RS_Cell.nr_RSRQ(%d) is out of range !!!!!!!!!!
Line 523: | resultsCSI_RS_Cell.nr_RSRQ(%d)
Line 540: LBS_ConvertToNR_ECID_MeasuredResultsElement() - MALLOC FAIL!!!
Line 551: !!!!!!!!!! resultsSSB_Indexes[%d].ssb_Index(%d) is out of range !!!!!!!!!!
Line 555: | resultsSSB_Indexes[%d].ssb_Index(%d)
Line 563: !!!!!!!!!! resultsSSB_Indexes[%d].nr_RSRP(%d) is out of range !!!!!!!!!!
Line 567: | resultsSSB_Indexes[%d].nr_RSRP(%d)
Line 573: !!!!!!!!!! resultsSSB_Indexes[%d].nr_RSRQ(%d) is out of range !!!!!!!!!!
Line 577: | resultsSSB_Indexes[%d].nr_RSRQ(%d)
Line 598: LBS_ConvertToNR_ECID_MeasuredResultsElement() - MALLOC FAIL!!!
Line 609: !!!!!!!!!! resultsCSI_RS_Indexes[%d].csi_RS_Index(%d) is out of range !!!!!!!!!!
Line 613: | resultsCSI_RS_Indexes[%d].csi_RS_Index(%d)
Line 621: !!!!!!!!!! resultsCSI_RS_Indexes[%d].nr_RSRP(%d) is out of range !!!!!!!!!!
Line 625: | resultsCSI_RS_Indexes[%d].nr_RSRP(%d)
Line 631: !!!!!!!!!! resultsCSI_RS_Indexes[%d].nr_RSRQ(%d) is out of range !!!!!!!!!!
Line 635: | resultsCSI_RS_Indexes[%d].nr_RSRQ(%d)
Line 641: >>--------------------------------
Line 669: <<--------------------------------
Line 674: LBS_ConvertToNR_ECID_SignalMeasurementInformation() - NULL Pointer!!!
Line 679: | ++ PrimaryCellMeasuredResults
Line 688: <<--------------------------------
Line 689: | ++ MeasuredResultsList size(%d)
Line 707: LBS_ConvertToNR_ECID_SignalMeasurementInformation() - MALLOC FAIL!!!
Line 752: | ++ AdditionalPathList
Line 762: LBS_ConvertToNR_AdditionalPathList() - MALLOC FAIL!!!
Line 770: | relativeTimeDifference.choice(%d)
Line 775: | relativeTimeDifference.k0_r16(%d)
Line 779: | relativeTimeDifference.k1_r16(%d)
Line 783: | relativeTimeDifference.k2_r16(%d)
Line 787: | relativeTimeDifference.k3_r16(%d)
Line 791: | relativeTimeDifference.k4_r16(%d)
Line 795: | relativeTimeDifference.k5_r16(%d)
Line 808: | pathQuality timingQualityValue(%d), timingQualityResolution(%d)
Line 840: <<--------------------------------
Line 841: | ++ TimeStamp
Line 851: | dl_PRS_ID(%d)
Line 861: !!!!!!!!!! physCellID(%d) is out of range !!!!!!!!!!
Line 864: | physCellID(%d)
Line 871: | MCC
Line 875: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 879: | MNC
Line 883: !!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
Line 891: nr_CellGlobalID_r16.nr_cellidentity_r15.value is not NULL!!!
Line 903: | nrCellGlobalIdCellIdentity.value(0x%02x %02x %02x %02x %02x)
Line 906: | nrCellGlobalIdCellIdentity.length(%d)
Line 917: !!!!!!!!!! arfcn(%d) is out of range !!!!!!!!!!
Line 920: | nr_ARFCN(%d)
Line 928: !!!!!!!!!! sfn(%d) is out of range !!!!!!!!!!
Line 931: | nr_SFN(%d)
Line 935: | Slot.choice(%d)
Line 940: | Slot.scs15(%d)
Line 944: | Slot.scs30(%d)
Line 948: | Slot.scs60(%d)
Line 952: | Slot.scs120(%d)
Line 957: >>--------------------------------
Line 985: | ++ NR Multi-RTT AdditionalMeasurement
Line 997: LBS_ConvertToNR_Multi_RTT_AdditionalMeasurement() - MALLOC FAIL!!!
Line 1011: !!!!!!!!!! dl_PRS_ResourceID(%d) is out of range !!!!!!!!!!
Line 1015: | dl_PRS_ResourceID(%d)
Line 1026: !!!!!!!!!! dl_PRS_ResourceSetID(%d) is out of range !!!!!!!!!!
Line 1030: | dl_PRS_ResourceSetID(%d)
Line 1041: !!!!!!!!!! dl_PRS_RSRP_ResultDiff(%d) is out of range !!!!!!!!!!
Line 1045: | dl_PRS_RSRP_ResultDiff(%d)
Line 1050: | ue_RxTxTimeDiff.choice(%d)
Line 1055: | ue_RxTxTimeDiff.k0_r16(%d)
Line 1059: | ue_RxTxTimeDiff.k1_r16(%d)
Line 1063: | ue_RxTxTimeDiff.k2_r16(%d)
Line 1067: | ue_RxTxTimeDiff.k3_r16(%d)
Line 1071: | ue_RxTxTimeDiff.k4_r16(%d)
Line 1075: | ue_RxTxTimeDiff.k5_r16(%d)
Line 1085: | timingQuality Value(%d), Resolution(%d)
Line 1126: | ++ measList[%d] - bitmask(0x%x)
Line 1137: | dl_PRS_ID(%d)
Line 1147: !!!!!!!!!! physCellID(%d) is out of range !!!!!!!!!!
Line 1151: | physCellID(%d)
Line 1158: | MCC
Line 1162: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 1167: | MNC
Line 1171: !!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
Line 1180: nr_CellGlobalID_r16.nr_cellidentity_r15.value is not NULL!!!
Line 1192: | nrCellGlobalIdCellIdentity.value(0x%02x %02x %02x %02x %02x)
Line 1195: | nrCellGlobalIdCellIdentity.length(%d)
Line 1206: !!!!!!!!!! arfcn(%d) is out of range !!!!!!!!!!
Line 1210: | nr_ARFCN(%d)
Line 1221: !!!!!!!!!! dl_PRS_ResourceID(%d) is out of range !!!!!!!!!!
Line 1225: | dl_PRS_ResourceID(%d)
Line 1236: !!!!!!!!!! dl_PRS_ResourceSetID(%d) is out of range !!!!!!!!!!
Line 1240: | dl_PRS_ResourceSetID(%d)
Line 1245: | ue_RxTxTimeDiff.choice(%d)
Line 1250: | ue_RxTxTimeDiff.k0_r16(%d)
Line 1254: | ue_RxTxTimeDiff.k1_r16(%d)
Line 1258: | ue_RxTxTimeDiff.k2_r16(%d)
Line 1262: | ue_RxTxTimeDiff.k3_r16(%d)
Line 1266: | ue_RxTxTimeDiff.k4_r16(%d)
Line 1270: | ue_RxTxTimeDiff.k5_r16(%d)
Line 1291: | timeQuality Value(%d), Resolution(%d)
Line 1301: !!!!!!!!!! dl_PRS_RSRP_Result(%d) is out of range !!!!!!!!!!
Line 1305: | dl_PRS_RSRP_Result(%d)
Line 1319: >>--------------------------------
Line 1347: <<--------------------------------
Line 1357: | ++ NR_Multi_RTT_MeasList, size(%d)
Line 1371: LBS_ConvertToNR_Multi_RTT_SignalMeasurementInformation() - MALLOC FAIL!!!
Line 1376: >>--------------------------------
Line 1417: | ++ NR DL-AoD AdditionalMeasurement
Line 1429: LBS_ConvertToNR_DL_AoD_AdditionalMeasurements() - MALLOC FAIL!!!
Line 1443: !!!!!!!!!! dl_PRS_ResourceID(%d) is out of range !!!!!!!!!!
Line 1447: | dl_PRS_ResourceID(%d)
Line 1458: !!!!!!!!!! dl_PRS_ResourceSetID(%d) is out of range !!!!!!!!!!
Line 1462: | dl_PRS_ResourceSetID(%d)
Line 1470: | dl_PRS_RSRP_ResultDiff(%d)
Line 1477: | dl_PRS_RxBeamIndex(%d)
Line 1514: LBS_ConvertToNR_DL_AoD_SignalMeasurementInformation() - NULL Pointer!!!
Line 1518: <<--------------------------------
Line 1522: | ++ NR_DL_AoD_MeasList, size(%d)
Line 1535: LBS_ConvertToNR_DL_AoD_SignalMeasurementInformation() - MALLOC FAIL!!!
Line 1541: >>--------------------------------
Line 1552: | dl_PRS_ID(%d)
Line 1562: !!!!!!!!!! physCellID(%d) is out of range !!!!!!!!!!
Line 1566: | physCellID(%d)
Line 1573: | MCC
Line 1577: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 1582: | MNC
Line 1586: !!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
Line 1595: nr_CellGlobalID_r16.nr_cellidentity_r15.value is not NULL!!!
Line 1607: | nrCellGlobalIdCellIdentity.value(0x%02x %02x %02x %02x %02x)
Line 1610: | nrCellGlobalIdCellIdentity.length(%d)
Line 1621: !!!!!!!!!! arfcn(%d) is out of range !!!!!!!!!!
Line 1625: | nr_ARFCN(%d)
Line 1636: !!!!!!!!!! dl_PRS_ResourceID(%d) is out of range !!!!!!!!!!
Line 1640: | dl_PRS_ResourceID(%d)
Line 1651: !!!!!!!!!! dl_PRS_ResourceSetID(%d) is out of range !!!!!!!!!!
Line 1655: | dl_PRS_ResourceSetID(%d)
Line 1666: !!!!!!!!!! dl_PRS_RSRP_Result(%d) is out of range !!!!!!!!!!
Line 1670: | dl_PRS_RSRP_Result(%d)
Line 1681: !!!!!!!!!! dl_PRS_RxBeamIndex(%d) is out of range !!!!!!!!!!
Line 1685: | dl_PRS_RxBeamIndex(%d)
Line 1697: >>--------------------------------
Line 1730: | ++ NR DL PRS ReferenceInfo
Line 1740: | dl_PRS_ID(%d)
Line 1755: LBS_ConvertToNR_DL_PRS_ReferenceInfo() - MALLOC FAIL!!!
Line 1772: | dl_PRS_ResourceSetID(%d)
Line 1774: >>--------------------------------
Line 1802: | ++ NR DL-TDOA AdditionalMeasurement
Line 1814: LBS_ConvertToNR_DL_TDOA_AdditionalMeasurements() - MALLOC FAIL!!!
Line 1829: !!!!!!!!!! dl_PRS_ResourceID(%d) is out of range !!!!!!!!!!
Line 1833: | dl_PRS_ResourceID(%d)
Line 1844: !!!!!!!!!! dl_PRS_ResourceSetID(%d) is out of range !!!!!!!!!!
Line 1849: | dl_PRS_ResourceSetID(%d)
Line 1857: | rstd_ResultDiff.choice(%d)
Line 1862: | rstd_ResultDiff.k0_r16(%d)
Line 1866: | rstd_ResultDiff.k1_r16(%d)
Line 1870: | rstd_ResultDiff.k2_r16(%d)
Line 1874: | rstd_ResultDiff.k3_r16(%d)
Line 1878: | rstd_ResultDiff.k4_r16(%d)
Line 1882: | rstd_ResultDiff.k5_r16(%d)
Line 1892: | timingQuality Value(%d), Resolution(%d)
Line 1899: | dl_PRS_RSRP_ResultDiff(%d)
Line 1944: LBS_ConvertToNR_DL_TDOA_SignalMeasurementInformation() - NULL Pointer!!!
Line 1948: <<--------------------------------
Line 1955: | ++ NR_DL_TDOA_MeasList, size(%d)
Line 1968: LBS_ConvertToNR_DL_TDOA_SignalMeasurementInformation() - MALLOC FAIL!!!
Line 1974: >>--------------------------------
Line 1985: | dl_PRS_ID(%d)
Line 1995: !!!!!!!!!! physCellID(%d) is out of range !!!!!!!!!!
Line 1999: | physCellID(%d)
Line 2006: | MCC
Line 2010: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 2015: | MNC
Line 2019: !!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
Line 2028: nr_CellGlobalID_r16.nr_cellidentity_r15.value is not NULL!!!
Line 2040: | nrCellGlobalIdCellIdentity.value(0x%02x %02x %02x %02x %02x)
Line 2043: | nrCellGlobalIdCellIdentity.length(%d)
Line 2054: !!!!!!!!!! arfcn(%d) is out of range !!!!!!!!!!
Line 2058: | nr_ARFCN(%d)
Line 2069: !!!!!!!!!! dl_PRS_ResourceID(%d) is out of range !!!!!!!!!!
Line 2073: | dl_PRS_ResourceID(%d)
Line 2084: !!!!!!!!!! dl_PRS_ResourceSetID(%d) is out of range !!!!!!!!!!
Line 2088: | dl_PRS_ResourceSetID(%d)
Line 2102: !!!!!!!!!! dl_PRS_RSRP_Result(%d) is out of range !!!!!!!!!!
Line 2106: | dl_PRS_RSRP_Result(%d)
Line 2111: | rstd.choice(%d)
Line 2116: | rstd.k0_r16(%d)
Line 2120: | rstd.k1_r16(%d)
Line 2124: | rstd.k2_r16(%d)
Line 2128: | rstd.k3_r16(%d)
Line 2132: | rstd.k4_r16(%d)
Line 2136: | rstd.k5_r16(%d)
Line 2145: | timeQuality Value(%d), Resolution(%d)
Line 2164: >>--------------------------------
Line 4592: <<--------------------------------
Line 4593: | ++ NR_Multi_RTT_ProvideAssistanceData
Line 4597: LBS_CopyNR_MultiRTT_AssistanceData() - NULL Pointer!!!
Line 4598: >>--------------------------------
Line 4603: | bit_mask(0x%02x)
Line 4612: <<--------------------------------
Line 4613: | ++ NR_SelectedDL_PRS_IndexList
Line 4628: LPP_CopyNR_SelectedDL_PRS_IndexList() - MALLOC FAIL!!!
Line 4644: <<--------------------------------
Line 4645: | ++ NR_Multi_RTT_ProviceAssistanceData_Error
Line 4648: | choice(%d)
Line 4655: | locationServerErrorCauses.cause(%d)
Line 4661: | targetDeviceErrorCauses.cause(%d)
Line 4669: >>--------------------------------
Line 4694: <<--------------------------------
Line 4695: | ++ NR_DL_AoD_ProvideAssistanceData
Line 4699: LBS_CopyNR_DLAoD_AssistanceData() - NULL Pointer!!!
Line 4700: >>--------------------------------
Line 4705: | bit_mask(0x%02x)
Line 4714: <<--------------------------------
Line 4715: | ++ NR_SelectedDL_PRS_IndexList
Line 4730: LPP_CopyNR_SelectedDL_PRS_IndexList() - MALLOC FAIL!!!
Line 4751: <<--------------------------------
Line 4752: | ++ NR_DL_AoD_ProviceAssistanceData_Error
Line 4755: | choice(%d)
Line 4762: | locationServerErrorCauses.cause(%d)
Line 4768: | targetDeviceErrorCauses.cause(%d)
Line 4802: <<--------------------------------
Line 4803: | ++ NR_DL_TDOA_ProvideAssistanceData
Line 4807: LBS_CopyNR_DLTDOA_AssistanceData() - NULL Pointer!!!
Line 4808: >>--------------------------------
Line 4813: | bit_mask(0x%02x)
Line 4822: <<--------------------------------
Line 4823: | ++ NR_SelectedDL_PRS_IndexList
Line 4838: LPP_CopyNR_SelectedDL_PRS_IndexList() - MALLOC FAIL!!!
Line 4859: <<--------------------------------
Line 4860: | ++ NR_DL_TDOA_ProviceAssistanceData_Error
Line 4863: | choice(%d)
Line 4870: | locationServerErrorCauses.cause(%d)
Line 4876: | targetDeviceErrorCauses.cause(%d)
Line 4907: LBS_ConvertNR_DL_PRS_CombSizeN() - (%d)
Line 4938: LBS_ConvertNR_DL_PRS_ResourceRepetitionFactor() - (%d)
Line 4969: LBS_ConvertNR_DL_PRS_ResourceTimeGap() - (%d)
Line 4994: LBS_ConvertNR_DL_PRS_NumSymbols() - (%d)
Line 5019: LBS_ConvertNR_DL_PRS_MutingBitRepetitionFactor() - (%d)
Line 5453: LBS_ConvertNR_DL_PRS_AssistanceDataFromASN()
Line 5469: LBS_ConvertNR_DL_PRS_AssistanceDataFromASN() - dl_PRS_ResourceID_size(%d)
Line 6459: LBS_ConvertToNR_DL_PRS_ResourcesCapability() - numberOfSupportedBand(%d)
Line 6471: LBS_ConvertToNR_DL_PRS_ResourcesCapability() - MALLOC FAIL!!!
Line 6479: LBS_ConvertToNR_DL_PRS_ResourcesCapability() - MALLOC FAIL!!!
Line 6495: LBS_ConvertToNR_DL_PRS_ResourcesCapability() - MALLOC FAIL!!!
Line 6509: LBS_ConvertToNR_DL_PRS_ResourcesCapability() - [%d] freqBandIndicatorNR_r16(%d)
Line 6520: LBS_ConvertToNR_DL_PRS_ResourcesCapability() - Add(%d) to Fr2BandList
Line 6527: LBS_ConvertToNR_DL_PRS_ResourcesCapability() - Add(%d) to Fr1BandList
Line 6533: LBS_ConvertToNR_DL_PRS_ResourcesCapability() - [%d] freqBandIndicatorNR_r16(%d) INVALID!!!
Line 6549: LBS_ConvertToNR_DL_PRS_ResourcesCapability() - MALLOC FAIL!!!
Line 6560: LBS_ConvertToNR_DL_PRS_ResourcesCapability() - MALLOC FAIL!!!
Line 6600: LBS_ConvertToNR_DL_PRS_ResourcesCapability() - MALLOC FAIL!!!
Line 6611: LBS_ConvertToNR_DL_PRS_ResourcesCapability() - MALLOC FAIL!!!
Line 6672: LBS_ConvertNR_DL_PRS_QCL_ProcessingCapability() - numberOfSupportedBand(%d)
Line 6689: LBS_ConvertNR_DL_PRS_QCL_ProcessingCapability() - MALLOC FAIL!!!
Line 6706: LBS_ConvertNR_DL_PRS_QCL_ProcessingCapability() - [%d] freqBandIndicatorNR_r16(%d) INVALID!!!
Line 6739: LBS_ConvertNR_DL_PRS_ProcessingCapability() - numberOfSupportedBand(%d)
Line 6755: LBS_ConvertNR_DL_PRS_QCL_ProcessingCapability() - MALLOC FAIL!!!
Line 6810: LBS_ConvertNR_DL_PRS_ProcessingCapability() - [%d] freqBandIndicatorNR_r16(%d) INVALID!!!
Line 6835: LBS_ConvertNR_UL_SRS_Capability() - numberOfSupportedBand(%d)
Line 6840: LBS_ConvertNR_UL_SRS_Capability() - There is no supported NR BAND
Line 6854: LBS_ConvertNR_UL_SRS_Capability() - MALLOC FAIL!!!
Line 6907: LBS_ConvertNR_UL_SRS_Capability() - [%d] freqBandIndicatorNR_r16(%d) INVALID!!!
Line 7007: LBS_ConvertToNR_DL_AoD_MeasureCapability() - numberOfSupportedBand(%d)
Line 7024: LBS_ConvertToNR_DL_AoD_MeasureCapability() - MALLOC FAIL!!!
Line 7043: LBS_ConvertToNR_DL_AoD_MeasureCapability() - [%d] freqBandIndicatorNR_r16(%d) INVALID!!!
Line 7078: LBS_FillNR_Multi_RTT_MeasReq() - Multi_RTT_AssistanceData is NULL!!
Line 7123: LBS_FillNR_Multi_RTT_MeasReq() - MALLOC FAIL!!!
Line 7175: LBS_FillNR_DL_AoD_MeasReq()
Line 7180: LBS_FillNR_DL_AoD_MeasReq() - DL_AoD_AssistanceData is NULL!!
Line 7245: LBS_FillNR_DL_TDOA_MeasReq() - DL_TDOA_AssistanceData is NULL!!
Line 7352: LBS_FillNR_ECID_MeasReq() - MALLOC FAIL!!!
Line 7372: LBS_FillNR_SRS_PosResourcesPerBand() - numberOfSupportedBand(%d)
Line 7377: LBS_FillNR_SRS_PosResourcesPerBand() - There is no supported NR BAND
Line 7393: LBS_ConvertNR_UL_SRS_Capability() - MALLOC FAIL!!!
Line 7418: LBS_FillNR_SRS_PosResourcesPerBand() - [%d] freqBandIndicatorNR_r16(%d) INVALID!!!
Line 3396: <<--------------------------------
Line 3397: | ++ NR_DL_PRS_AssistanceData
Line 3400: | bit_mask(0x%02x)
Line 3405: !!!!!!!!!! FAIL to copy DL_PRS_ID_Info !!!!!!!!!!
Line 3412: !!!!!!!!!! FAIL to copy DL_PRS_AssistanceDataList !!!!!!!!!!
Line 3422: !!!!!!!!!! FAIL to copy NR_SSB_Config !!!!!!!!!!
Line 2195: <<--------------------------------
Line 2196: | ++ NR_DL_PRS_ID_Info
Line 2199: | bit_mask(0x%02x)
Line 2202: | dl_PRS_ID (%d)
Line 2210: <<--------------------------------
Line 2211: | ++ NR_DL_PRS_ResourceID_List
Line 2223: LBS_CopyNR_DL_PRS_ID_Info() - MALLOC FAIL!!!
Line 2230: | Resource_ID(%d)
Line 2244: <<--------------------------------
Line 2245: | ++ nr_DL_PRS_ResourceSetID(%d)
Line 3109: <<--------------------------------
Line 3110: | ++ NR_DL_PRS_AssistanceDataList
Line 3124: LBS_CopyNR_DL_PRS_AssistanceDataList() - MALLOC FAIL!!!
Line 3131: <<--------------------------------
Line 3132: | ++ NR_DL_PRS_PositioningFrequencyLayer
Line 3136: | ++ dl_PRS_SubcarrierSpacing_r16(%d)
Line 3140: | ++ dl_PRS_ResourceBandwidth(%d)
Line 3144: | ++ dl_PRS_StartPRB(%d)
Line 3148: | ++ dl_PRS_PointA(%d)
Line 3152: | ++ dl_PRS_CombSizeN_r16(%d)
Line 3156: | ++ dl_PRS_CyclicPrefix_r16(%d)
Line 3168: <<--------------------------------
Line 3169: | ++ NR_DL_PRS_AssistanceDataPerFreq
Line 3175: LBS_CopyNR_DL_PRS_AssistanceDataList() - MALLOC FAIL!!!
Line 3185: | bit_mask(0x%02x)
Line 3188: | dl_PRS_ID(%d)
Line 3194: | nr_PhysCellID(%d)
Line 3203: !!!!!!!!!! FAIL to copy NCGI !!!!!!!!!!
Line 3215: | NR_ARFCN(%d)
Line 3219: | sfn_Offset(%d)
Line 3222: | integerSubframeOffset(%d)
Line 3225: | nr_DL_PRS_ExpectedRSTD(%d)
Line 3228: | nr_DL_PRS_ExpectedRSTD_Uncertainty(%d)
Line 3233: !!!!!!!!!! FAIL to copy DL_PRS_Info !!!!!!!!!!
Line 3049: <<--------------------------------
Line 3050: | ++ NR_DL_PRS_Info
Line 3064: LBS_CopyNR_DL_PRS_Info() - MALLOC FAIL!!!
Line 3074: !!!!!!!!!! FAIL to copy DL_PRS_ResourceSet !!!!!!!!!!
Line 2936: <<--------------------------------
Line 2937: | ++ NR_DL_PRS_ResourceSet
Line 2940: | bit_mask(0x%02x)
Line 2943: | nr_DL_PRS_ResourceSetID(%d)
Line 2948: | dl_PRS_NumSymbols(%d)
Line 2951: | dl_PRS_ResourcePower(%d)
Line 2956: | dl_PRS_ResourceRepetitionFactor(%d)
Line 2971: | dl_PRS_ResourceTimeGap(%d)
Line 2990: <<--------------------------------
Line 2991: | ++ NR_DL_PRS_MutingOption2
Line 2995: <<--------------------------------
Line 2996: | ++ NR_DL_PRS_ResourceList
Line 3010: LBS_CopyNR_DL_PRS_ResourceSet() - MALLOC FAIL!!!
Line 2522: <<--------------------------------
Line 2523: | ++ NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset
Line 2526: | choice(%d)
Line 2532: | scs15_r16.choice(%d)
Line 2537: | scs15_r16.u.n4_r16(%d)
Line 2542: | scs15_r16.u.n5_r16(%d)
Line 2547: | scs15_r16.u.n8_r16(%d)
Line 2552: | scs15_r16.u.n10_r16(%d)
Line 2557: | scs15_r16.u.n16_r16(%d)
Line 2562: | scs15_r16.u.n20_r16(%d)
Line 2567: | scs15_r16.u.n32_r16(%d)
Line 2572: | scs15_r16.u.n40_r16(%d)
Line 2577: | scs15_r16.u.n64_r16(%d)
Line 2582: | scs15_r16.u.n80_r16(%d)
Line 2587: | scs15_r16.u.n160_r16(%d)
Line 2592: | scs15_r16.u.n320_r16(%d)
Line 2597: | scs15_r16.u.n640_r16(%d)
Line 2602: | scs15_r16.u.n1280_r16(%d)
Line 2607: | scs15_r16.u.n2560_r16(%d)
Line 2612: | scs15_r16.u.n5120_r16(%d)
Line 2617: | scs15_r16.u.n10240_r16(%d)
Line 2626: | scs30_r16.choice(%d)
Line 2631: | scs30_r16.u.n8_r16(%d)
Line 2636: | scs30_r16.u.n10_r16(%d)
Line 2641: | scs30_r16.u.n16_r16(%d)
Line 2646: | scs30_r16.u.n20_r16(%d)
Line 2651: | scs30_r16.u.n32_r16(%d)
Line 2656: | scs30_r16.u.n40_r16(%d)
Line 2661: | scs30_r16.u.n64_r16(%d)
Line 2666: | scs30_r16.u.n80_r16(%d)
Line 2671: | scs30_r16.u.n128_r16(%d)
Line 2676: | scs30_r16.u.n160_r16(%d)
Line 2681: | scs30_r16.u.n320_r16(%d)
Line 2686: | scs30_r16.u.n640_r16(%d)
Line 2691: | scs30_r16.u.n1280_r16(%d)
Line 2696: | scs30_r16.u.n2560_r16(%d)
Line 2701: | scs30_r16.u.n5120_r16(%d)
Line 2706: | scs30_r16.u.n10240_r16(%d)
Line 2711: | scs30_r16.u.n20480_r16(%d)
Line 2721: | scs60_r16.choice(%d)
Line 2726: | scs60_r16.u.n16_r16(%d)
Line 2731: | scs60_r16.u.n20_r16(%d)
Line 2736: | scs60_r16.u.n32_r16(%d)
Line 2741: | scs60_r16.u.n40_r16(%d)
Line 2746: | scs60_r16.u.n64_r16(%d)
Line 2751: | scs60_r16.u.n80_r16(%d)
Line 2756: | scs60_r16.u.n128_r16(%d)
Line 2761: | scs60_r16.u.n160_r16(%d)
Line 2766: | scs60_r16.u.n256_r16(%d)
Line 2771: | scs60_r16.u.n320_r16(%d)
Line 2776: | scs60_r16.u.n640_r16(%d)
Line 2781: | scs60_r16.u.n1280_r16(%d)
Line 2786: | scs60_r16.u.n2560_r16(%d)
Line 2791: | scs60_r16.u.n5120_r16(%d)
Line 2796: | scs60_r16.u.n10240_r16(%d)
Line 2801: | scs60_r16.u.n20480_r16(%d)
Line 2806: | scs60_r16.u.n40960_r16(%d)
Line 2816: | scs120_r16.choice(%d)
Line 2821: | scs120_r16.u.n32_r16(%d)
Line 2826: | scs120_r16.u.n40_r16(%d)
Line 2831: | scs120_r16.u.n64_r16(%d)
Line 2836: | scs120_r16.u.n80_r16(%d)
Line 2841: | scs120_r16.u.n128_r16(%d)
Line 2846: | scs120_r16.u.n160_r16(%d)
Line 2851: | scs120_r16.u.n256_r16(%d)
Line 2856: | scs120_r16.u.n320_r16(%d)
Line 2861: | scs120_r16.u.n512_r16(%d)
Line 2866: | scs120_r16.u.n640_r16(%d)
Line 2871: | scs120_r16.u.n1280_r16(%d)
Line 2876: | scs120_r16.u.n2560_r16(%d)
Line 2881: | scs120_r16.u.n5120_r16(%d)
Line 2886: | scs120_r16.u.n10240_r16(%d)
Line 2891: | scs120_r16.u.n20480_r16(%d)
Line 2896: | scs120_r16.u.n40960_r16(%d)
Line 2901: | scs120_r16.u.n81920_r16(%d)
Line 2355: <<--------------------------------
Line 2356: | ++ NR_DL_PRS_MutingOption1
Line 2359: | bit_mask(0x%02x)
Line 2365: | dl_prs_MutingBitRepetitionFactor(%d)
Line 2273: <<--------------------------------
Line 2274: | ++ NR_MutingPattern
Line 2277: | choice(%d)
Line 2286: | u.po2_r16.value(0x%02x)
Line 2294: | u.po4_r16.value(0x%02x)
Line 2302: | u.po6_r16.value(0x%02x)
Line 2310: | u.po8_r16.value(0x%02x)
Line 2318: | u.po16_r16.value(0x%02x %02x)
Line 2326: | u.po32_r16.value(0x%02x %02x)
Line 2446: <<--------------------------------
Line 2447: | ++ NR_DL_PRS_Resource
Line 2450: | bit_mask(0x%02x)
Line 2453: | nr_DL_PRS_ResourceID(%d)
Line 2456: | dl_PRS_SequenceID(%d)
Line 2459: | dl_PRS_ResourceSlotOffset(%d)
Line 2462: | dl_PRS_CombSizeN_AndReOffset.choice(%d)
Line 2468: | n2_r16(%d)
Line 2473: | n4_r16(%d)
Line 2478: | n6_r16(%d)
Line 2483: | n12_r16(%d)
Line 2491: | dl_PRS_ResourceSymbolOffset(%d)
Line 2393: | ++ DL_PRS_QCL_Info
Line 2395: | choice(%d)
Line 2401: | ssb.pci(%d)
Line 2404: | ssb.ssb_index(%d)
Line 2407: | ssb.rs_Type(%d)
Line 2412: | dl_PRS.qcl_DL_PRS_ResourceID(%d)
Line 2415: | dl_PRS.qcl_DL_PRS_ResourceSetID(%d)
Line 3277: <<--------------------------------
Line 3278: | ++ NR_SSB_Config
Line 3293: LBS_CopyNR_SSB_Config() - MALLOC FAIL!!!
Line 3301: | bit_mask(0x%02x)
Line 3304: | nr_PhysCellID(%d)
Line 3307: | nr_ARFCN(%d)
Line 3310: | ss_PBCH_BlockPower(%d)
Line 3313: | halfFrameIndex(%d)
Line 3316: | ssb_periodicity(%d)
Line 3319: | ssb_SubcarrierSpacing(%d)
Line 3322: | sfn_SSB_Offset(%d)
Line 3328: | ssb_PositionsInBurst.choice(%d)
Line 3337: | shortBitmap_r16.value(0x%02x)
Line 3346: | mediumBitmap_r16.value(0x%02x)
Line 3355: | longBitmap_r16.value(0x%02x)
Line 3364: <<--------------------------------
Line 3653: <<--------------------------------
Line 3654: | ++ NR_SelectedDL_PRS_PerFreq
Line 3657: | bit_mask(0x%02x)
Line 3660: | nr_SelectedDL_PRS_FrequencyLayerIndex(%d)
Line 3667: !!!!!!!!!! FAIL to copy NR_SelectedDL_PRS_IndexListPerFreq !!!!!!!!!!
Line 3592: <<--------------------------------
Line 3593: | ++ NR_SelectedDL_PRS_IndexListPerFreq
Line 3608: LBS_CopyNR_SelectedDL_PRS_IndexListPerFreq() - MALLOC FAIL!!!
Line 3617: !!!!!!!!!! FAIL to copy NR_SelectedDL_PRS_IndexListPerFreq !!!!!!!!!!
Line 3520: <<--------------------------------
Line 3521: | ++ NR_SelectedDL_PRS_IndexPerTRP
Line 3524: | bit_mask(0x%02x)
Line 3527: | nr_SelectedTRP_Index(%d)
Line 3545: LBS_CopyNR_SelectedDL_PRS_IndexPerTRP() - MALLOC FAIL!!!
Line 3554: !!!!!!!!!! FAIL to copy NR_SelectedDL_PRS_IndexPerTRP !!!!!!!!!!
Line 3454: <<--------------------------------
Line 3455: | ++ NR_DL_SelectedPRS_ResourceSetIndex
Line 3458: | bit_mask(0x%02x)
Line 3461: | nr_DL_SelectedPRS_ResourceSetIndex(%d)
Line 3468: | ++ NR_DL_SelectedPRS_ResourceIndexList
Line 3479: LBS_CopyNR_DL_SelectedPRS_ResourceSetIndex() - MALLOC FAIL!!!
Line 3486: | nr_DL_SelectedPRS_ResourceIdIndex(%d)
Line 4527: <<--------------------------------
Line 4528: | ++ NR_PositionCalculationAssistance
Line 4531: | bit_mask(0x%02x)
Line 4538: !!!!!!!!!! FAIL to copy NR_TRP_LocationInfo !!!!!!!!!!
Line 4549: !!!!!!!!!! FAIL to copy NR_DL_PRS_BeamInfo !!!!!!!!!!
Line 3944: <<--------------------------------
Line 3945: | ++ NR_TRP_LocationInfo
Line 3960: LBS_CopyNR_TRP_LocationInfo() - MALLOC FAIL!!!
Line 3970: | ++ referencePoint.choice
Line 3978: | ++ referencePoint.location3D.latitudeSign
Line 3983: | ++ referencePoint.location3D.degreesLatitude
Line 3988: | ++ referencePoint.location3D.degreesLongitude
Line 3993: | ++ referencePoint.location3D.altitudeDirection
Line 3998: | ++ referencePoint.location3D.altitude
Line 4003: | ++ referencePoint.location3D.uncertaintySemiMajor
Line 4008: | ++ referencePoint.location3D.uncertaintySemiMinor
Line 4013: | ++ referencePoint.location3D.orientationMajorAxis
Line 4018: | ++ referencePoint.location3D.uncertaintyAltitude
Line 4023: | ++ referencePoint.location3D.confidence
Line 4031: | ++ referencePoint.ha_location3D_r16.degreesLatitude_r15
Line 4036: | ++ referencePoint.ha_location3D_r16.degreesLongitude_r15
Line 4041: | ++ referencePoint.ha_location3D_r16.altitude_r15
Line 4046: | ++ referencePoint.ha_location3D_r16.uncertaintySemiMajor_r15
Line 4051: | ++ referencePoint.ha_location3D_r16.uncertaintySemiMinor_r15
Line 4056: | ++ referencePoint.ha_location3D_r16.orientationMajorAxis_r15
Line 4061: | ++ referencePoint.ha_location3D_r16.horizontalConfidence_r15
Line 4066: | ++ referencePoint.ha_location3D_r16.uncertaintyAltitude_r15
Line 4071: | ++ referencePoint.ha_location3D_r16.verticalConfidence_r15
Line 4093: LBS_CopyNR_TRP_LocationInfo() - MALLOC FAIL!!!
Line 4109: !!!!!!!!!! FAIL to copy NR_TRP_LocationInfoElement !!!!!!!!!!
Line 3866: <<--------------------------------
Line 3867: | ++ NR_TRP_LocationInfoElement
Line 3870: | bit_mask(0x%02x)
Line 3873: | dl_PRS_ID(%d)
Line 3878: | nr_PhysCellID(%d)
Line 3886: !!!!!!!!!! FAIL to copy NCGI !!!!!!!!!!
Line 3894: | nr_ARFCN(%d)
Line 3900: | associated_DL_PRS_ID(%d)
Line 3913: !!!!!!!!!! FAIL to copy TRP_DL_PRS_ResourceSet !!!!!!!!!!
Line 3696: <<--------------------------------
Line 3697: | ++ NR_RelativeLocation
Line 3700: | bit_mask(0x%02x)
Line 3703: | milli_arc_second_units(%d)
Line 3706: | height_units(%d)
Line 3710: | delta_latitude_r16.bit_mask(%d)
Line 3713: | delta_latitude_r16.delta_Latitude(%d)
Line 3718: | delta_latitude_r16.coarse_delta_Latitude(%d)
Line 3722: | delta_longitude_r16.bit_mask(%d)
Line 3725: | delta_longitude_r16.delta_Longitude(%d)
Line 3730: | delta_longitude_r16.coarse_delta_Longitude(%d)
Line 3734: | delta_height_r16.bit_mask(%d)
Line 3737: | delta_height_r16.delta_Height(%d)
Line 3742: | delta_height_r16.coarse_delta_Height(%d)
Line 3748: | locationUNC_r16.horizontalUncertainty(%d)
Line 3751: | locationUNC_r16.horizontalConfidence(%d)
Line 3754: | locationUNC_r16.verticalUncertainty(%d)
Line 3757: | locationUNC_r16.verticalConfidence(%d)
Line 3768: <<--------------------------------
Line 3769: | ++ NR_TRP_DL_PRS_ResourceSet
Line 3784: LBS_CopyNR_TRP_DL_PRS_ResourceSet() - MALLOC FAIL!!!
Line 3801: <<--------------------------------
Line 3802: | ++ NR_TRP_DL_PRS_Resource_ARP_List
Line 3814: LBS_CopyNR_TRP_DL_PRS_ResourceSet() - MALLOC FAIL!!!
Line 4351: <<--------------------------------
Line 4352: | ++ NR_DL_PRS_BeamInfo
Line 4367: LBS_CopyNR_DL_PRS_BeamInfo() - MALLOC FAIL!!!
Line 4386: LBS_CopyNR_DL_PRS_BeamInfo() - MALLOC FAIL!!!
Line 4396: !!!!!!!!!! FAIL to copy NR_DL_PRS_BeamInfoPerTRP !!!!!!!!!!
Line 4250: <<--------------------------------
Line 4251: | ++ NR_DL_PRS_BeamInfoPerTRP
Line 4254: | bit_mask(0x%02x)
Line 4257: | dl_PRS_ID(%d)
Line 4262: | nr_PhysCellID(%d)
Line 4273: | nr_ARFCN(%d)
Line 4279: | associated_DL_PRS_ID(%d)
Line 4285: | lcs_GCS_TranslationParameter.bit_mask(0x%02x)
Line 4288: | lcs_GCS_TranslationParameter.alpha_r16(%d)
Line 4293: | lcs_GCS_TranslationParameter.alpha_fine_r16(%d)
Line 4297: | lcs_GCS_TranslationParameter.beta_r16(%d)
Line 4302: | lcs_GCS_TranslationParameter.beta_fine_r16(%d)
Line 4306: | lcs_GCS_TranslationParameter.gamma_r16(%d)
Line 4311: | lcs_GCS_TranslationParameter.gamma_fine_r16(%d)
Line 4320: !!!!!!!!!! FAIL to copy NR_DL_PRS_BeamInfoSet !!!!!!!!!!
Line 4145: <<--------------------------------
Line 4146: | ++ NR_DL_PRS_BeamInfoSet
Line 4162: LBS_CopyNR_DL_PRS_BeamInfoSet() - MALLOC FAIL!!!
Line 4181: LBS_CopyNR_DL_PRS_BeamInfoSet() - MALLOC FAIL!!!
Line 4188: | ++ NR_DL_PRS_BeamInfoSetResourceSet
Line 4191: | bit_mask(0x%02x)
Line 4194: | dl_PRS_Azimuth(%d)
Line 4199: | dl_PRS_Azimuth_fine(%d)
Line 4205: | dl_PRS_Elevation(%d)
Line 4211: | dl_PRS_Elevation_fine(%d)
Line 4439: <<--------------------------------
Line 4440: | ++ NR_RTD_Info
Line 4442: | ++ referenceTRP_RTD_Info
Line 4445: | bit_mask(0x%02x)
Line 4448: | dl_PRS_ID_Ref(%d)
Line 4453: | nr_PhysCellID_Ref(%d)
Line 4464: | nr_ARFCN_Ref(%d)
Line 4468: | refTime_r16.choice(%d)
Line 4473: | refTime_r16.systemFrameNumber(%d)
Line 4478: | refTime_r16.utc.length(%d)
Line 4484: | refTime_r16.utc.value(%d)
Line 4495: | rtd_RefQuality_r16.timingQualityValue(%d)
Line 4498: | rtd_RefQuality_r16.timingQualityResolution(%d)
