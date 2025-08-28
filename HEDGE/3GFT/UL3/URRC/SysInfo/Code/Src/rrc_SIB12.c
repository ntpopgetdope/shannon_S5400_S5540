Line 182: free: [rrc_SIB12] @ 0x%0.8x, RefCount = %d
Line 215: rrc_SIB12_SetupCellInfoLists: function called for %s
Line 217: rrc_SIB12_SetupCellInfoLists: isSIB11(%d) assocSIB11Ref(%d)
Line 222: rrc_SIB12_SetupCellInfoLists: no %s MeasControlSysInfo IE
Line 249: rrc_SIB12_SetupMeasQty: function called for %s
Line 254: rrc_SIB12_SetupMeasQty: no %s MeasControlSysInfo IE
Line 281: rrc_SIB12_SetupMeasInfoForStateCellDch: function called for %s
Line 286: rrc_SIB12_SetupMeasInfoForStateCellDch: no %s MeasControlSysInfo IE
Line 313: rrc_SIB12_SetupRepInfoForStateCellDch: function called for %s
Line 318: rrc_SIB12_SetupRepInfoForStateCellDch: no %s MeasControlSysInfo IE
Line 344: rrc_SIB12_SetupMeas: function called for %s
Line 349: rrc_SIB12_SetupMeas: no %s MeasControlSysInfo IE
Line 380: rrc_SIB12_SetupMeasReport: function called for %s
Line 385: rrc_SIB12_SetupMeasReport: no %s MeasControlSysInfo IE
Line 411: rrc_SIB12_SetupInterFreqCellSelReselInfo: function called for %s
Line 416: rrc_SIB12_SetupInterFreqCellSelReselInfo: no %s MeasControlSysInfo IE
Line 434: rrc_SIB12_SaveInterFreqCellInfoToSysInfoCache: function called for %s
Line 439: rrc_SIB12_SaveInterFreqCellInfoToSysInfoCache: no %s MeasControlSysInfo IE
Line 462: rrc_SIB12_SaveInterFreqToNeighborFreqSIBCache: function called for %s
Line 467: rrc_SIB12_SaveInterFreqToNeighborFreqSIBCache: no %s MeasControlSysInfo IE
Line 480: rrc_SIB12_SaveIntraFreqHcsPrioInfoToSysInfoCache: function called for %s
Line 485: rrc_SIB12_SaveIntraFreqHcsPrioInfoToSysInfoCache: no %s MeasControlSysInfo IE
Line 496: rrc_SIB12_SaveInterFreqHcsPrioInfoToSysInfoCache: function called for %s
Line 501: rrc_SIB12_SaveInterFreqHcsPrioInfoToSysInfoCache: no %s MeasControlSysInfo IE
Line 523: rrc_SIB12_SetupInterRatCellSelReselInfo: function called for %s
Line 528: rrc_SIB12_SetupInterRatCellSelReselInfo: no %s MeasControlSysInfo IE
Line 557: rrc_SIB12_SetupIntraFreqCellSelReselInfo: function called for %s
Line 562: rrc_SIB12_SetupIntraFreqCellSelReselInfo: no %s MeasControlSysInfo IE
Line 593: rrc_SIB12_GetIntraFMid: val = %d
Line 598: rrc_SIB12_GetIntraFMid: error, returned code = FAIL
Line 1003: rrc_SIB12_GetTrafficVolMeasValidity: validity = %d
Line 1008: rrc_SIB12_GetTrafficVolMeasValidity: error, returned code = FAIL
Line 1034: rrc_SIB12_GetTrafficVolMid: MID = %d
Line 1039: rrc_SIB12_GetTrafficVolMid: error, returned code = FAIL
Line 1077: rrc_SIB12_GetSelAndReselQualMeas: error - invalid SelAndReselQualMeas type in %s
Line 1084: rrc_SIB12_GetSelAndReselQualMeas: error - returned code is FAIL in %s
Line 1118: rrc_SIB12_GetFACHMeasOccasionInfoParams: no SIB11 or SIB12 FACHMeasOccasionInfo IE
Line 1124: rrc_SIB12_GetFACHMeasOccasionInfoParams: theInfo = NULL, no SIB11 or SIB12 FACHMeasOccasionInfo IE
Line 1135: rrc_SIB12_GetFACHMeasOccasionInfoParams: CoeffPresence = %d , FACH_meas_occasion_coeff = %d
Line 1141: rrc_SIB12_GetFACHMeasOccasionInfoParams: inter_freq_FDD_meas = %d
Line 1148: Asn_inter_RAT_meas_ind present
Line 1149: theInfo->inter_RAT_meas_ind : %x
Line 1153: Add %d at index %d
Line 1438: rrc_SIB12_vLocal_getMeasControlSysInfoPtr: error - AsnDecodedBuf = NULL
Line 1444: rrc_SIB12_vLocal_getMeasControlSysInfoPtr:using SIB 12 MeasControlSysInfo IE
Line 1473: rrc_SIB12_vLocal_getFachMeasOccasionInfoPtr: error - AsnDecodedBuf = NULL
Line 1479: rrc_SIB12_vLocal_getFachMeasOccasionInfoPtr: using SIB 12 FachMeasOccasionInfo IE
Line 1485: rrc_SIB12_vLocal_getFachMeasOccasionInfoPtr: no SIB12 FachMeasOccasionInfo IE
Line 1513: rrc_SIB12_vLocal_getIntraFDCHReportingPresence: no SIB12 MeasControlSysInfo IE
Line 1520: rrc_SIB12_vLocal_getIntraFDCHReportingPresence: error - no corresponding SIB11 instance
Line 1540: rrc_SIB12_vLocal_getIntraFDCHReportingPresence: using SIB12 RepInfoForStateCellDch IE
Line 1578: rrc_SIB12_vLocal_getIntraFMid: no SIB12 MeasControlSysInfo IE
Line 1586: rrc_SIB12_vLocal_getIntraFMid: [error] - SIB12 IntraFMid value not present
Line 1593: rrc_SIB12_vLocal_getIntraFMid: using SIB12 IntraFMid value
Line 1619: rrc_SIB12_vLocal_getTrafficVolMeasValidity: no SIB12 MeasControlSysInfo IE
Line 1632: rrc_SIB12_vLocal_getTrafficVolMeasValidity: error -SIB12 TrafficVolMeasValidity value not present
Line 1638: rrc_SIB12_vLocal_getTrafficVolMeasValidity: using SIB12 TrafficVolMeasValidity value
Line 1652: rrc_SIB12_vLocal_getTrafficVolMeasValidity: error - no corresponding SIB11 instance
Line 1679: rrc_SIB12_vLocal_getTrafficVolMid: no SIB12 MeasControlSysInfo IE
Line 1693: rrc_SIB12_vLocal_getTrafficVolMid: error - SIB12 TrafficVolMid value not present
Line 1699: rrc_SIB12_vLocal_getTrafficVolMid: using SIB12 TrafficVolMid value
Line 1711: rrc_SIB12_vLocal_getTrafficVolMid: error - no corresponding SIB11 instance
Line 1740: rrc_SIB12_GetIsHcsInUse: no SIB12 MeasControlSysInfo IE
Line 1770: rrc_SIB12_vLocal_getSelAndReselQualMeas: no SIB12 MeasControlSysInfo IE
Line 1801: rrc_SIB12_vLocal_getIntraFreqRepQuantityIE: no SIB12 MeasControlSysInfo IE
Line 1815: rrc_SIB12_vLocal_getIntraFreqRepQuantityIE: error - SIB12 IntraFreqRepQuantity IE not present
Line 1821: rrc_SIB12_vLocal_getIntraFreqRepQuantityIE: using SIB12 IntraFreqRepQuantity IE
Line 1832: rrc_SIB12_vLocal_getIntraFreqRepQuantityIE: error - no corresponding SIB11 instance
Line 1861: rrc_SIB12_vLocal_setupIntraFreqMeasSysInfoIE: using SIB12 IntraFreqMeasSysInfo IE
Line 1867: rrc_SIB12_vLocal_setupIntraFreqMeasSysInfoIE: error - no corresponding SIB11 instance
Line 1875: rrc_SIB12_vLocal_setupIntraFreqMeasSysInfoIE: can not use SIB11 IE with SIB12
Line 1908: rrc_SIB12_vLocal_setupTrfVolMeasSysInfoIE: using SIB12 TrfVolMeasSysInfo IE
Line 1914: rrc_SIB12_vLocal_setupTrfVolMeasSysInfoIE: error -no corresponding SIB11 instance
Line 1922: rrc_SIB12_vLocal_setupTrfVolMeasSysInfoIE: can not use SIB11 IE with SIB12
Line 1957: rrc_SIB12_vLocal_getSIB12_11FachMeasOccCoeff: no associated SIB11
Line 1975: rrc_SIB12_vLocal_getSIB12_11FachMeasOccCoeff: SIB12 coeff = %d
Line 1982: rrc_SIB12_vLocal_getSIB12_11FachMeasOccCoeff: no associated SIB11
Line 2026: rrc_SIB12_vLocal_getSIB12_11FachMeasOccasionInfoPtr: no SIB11 FachMeasOccasionInfo IE
Line 2131: rrc_SIB12_setAssociatedSib11Ref: setting SIB12's associated SIB11 reference
Line 2350: rrc_SIB12_vLocal_GetInterFRachReportingQuantity: No InterF RACH Reporting info available
Line 2388: rrc_SIB12_vLocal_GetInterFRachReportingQuantity: No FDD RACH Reporting Quantity available
Line 2510: [URRC IRATFDB] SIB12 GSM ARFCN(%d) 
Line 1334: rrc_priv_SIB12_msgIeCreate: %s msg protocol version: %s
Line 1342: rrc_priv_SIB12_msgIeCreate: %s MeasControlSysInfo IE already exists, reusing %s at %x
Line 1354: rrc_priv_SIB12_msgIeCreate: %s creates IEMeasControlSysInfo at: %x
Line 1366: rrc_priv_SIB12_msgIeCreate: %s creates IEFachMeasOccasionInfo at: %x
Line 2081: rrc_priv_SIB12_ResetUseSIB11IntraFreqMeasIe4SIB12Data: SIB12 IntraFreqMeasIE ptr = NULL, flag = false
Line 2107: rrc_priv_SIB12_ResetUseSIB11TrVolMeasIe4SIB12Data: SIB12 IntraFreqMeasIE ptr = NULL, flag = false
Line 2208: rrc_priv_SIB12_asn1CheckIes: error - Sib11/12 invalid, failure returned
Line 2283: rrc_priv_SIB12_iterate: unsupported iteration Func Req
Line 2309: rrc_priv_SIB12_iterate: error in the function
Line 2238: rrc_priv_SIB12_destroyIes: destroying the IEs of %s
Line 2052: rrc_priv_SIB12_HandleUseSIB11IesInsteadOfSIB12: no SIB12 MeasControlSysInfo IE
