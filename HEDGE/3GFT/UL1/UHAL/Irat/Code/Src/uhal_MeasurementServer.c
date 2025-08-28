Line 141: Invalid LatchReqest
Line 170: uhal_UmtsRssiMeasurementReq: measurement_server is NULL
Line 206: Invalid LatchReqest
Line 229: activeStackId %d measRequestRatInfo %d
Line 240: uhal_UmtsInitialRscpEcNoMeasurementReq: measurement_server is NULL
Line 287: Invalid LatchReqest
Line 310: activeStackId %d measRequestRatInfo %d
Line 321: uhal_UmtsRscpEcNoUpdateMeasurementReq: measurement_server is NULL
Line 362: Invalid LatchReqest
Line 391: uhal_UmtsCellSearchReq: measurement_server is NULL
Line 426: Invalid LatchReqest
Line 455: uhal_UmtsPartialSearchReq: measurement_server is NULL
Line 514: MMC -> UMTS RSSI measurement
Line 517: Invalid uhal_MmcUmtsRssiMeasurementReq
Line 529: rssi_req_ptr is NULL in  uhal_MmcUmtsRssiMeasurementReq
Line 539: rssi_req_ptr->frequencyList is NULL in  uhal_MmcUmtsRssiMeasurementReq
Line 557: UmtsMeasurementServerReset fail
Line 562:  MMC -> UMTS RSSI Measurement Request
Line 568: MmcUmtsRssiMeasurementReq Msg is null
Line 593: Invalid uhal_MmcUmtsInitialRscpEcNoMeasurementReq
Line 601: [IRAT L2U] UmtsInitialRscpEcNoMeasurementReq Msg is too late !!! 
Line 615: rscp_req_ptr is NULL in  uhal_MmcUmtsInitialRscpEcNoMeasurementReq
Line 623: rscp_req_ptr->measurementList is NULL in uhal_MmcUmtsInitialRscpEcNoMeasurementReq
Line 657: UmtsMeasurementServerReset fail
Line 660: MMC -> UMTS Initial RSCP/EcNo Measurement Request
Line 668: MmcUmtsInitialRscpEcNoMeasurementReq Msg is null
Line 695: Invalid uhal_MmcUmtsRscpEcNoUpdateMeasurementReq
Line 703: [IRAT L2U] UmtsRscpEcNoUpdateMeasurementReq Msg is too late !!! 
Line 716: rscp_req_ptr is NULL in  uhal_MmcUmtsRscpEcNoUpdateMeasurementReq
Line 723: rscp_req_ptr->measurementList is NULL in uhal_MmcUmtsInitialRscpEcNoMeasurementReq
Line 737: rscp_req_ptr->measurementList is NULL in  uhal_MmcUmtsRscpEcNoUpdateMeasurementReq
Line 764: UmtsMeasurementServerReset fail
Line 767: MMC -> UMTS RSCP/EcNo Update Measurement Request
Line 775: MmcUmtsRscpEcNoUpdateMeasurementReq Msg is null
Line 802: Invalid uhal_MmcUmtsCellSearchReq
Line 810: [IRAT L2U] UmtsCellSearchReq Msg is too late !!! 
Line 822: srch_req_ptr is NULL in  uhal_MmcUmtsCellSearchReq
Line 832: srch_req_ptr->frequencyList is NULL in  uhal_MmcUmtsCellSearchReq
Line 850: UmtsMeasurementServerReset fail
Line 853:  MMC -> UMTS Cell Search Request
Line 860: MmcUmtsCellSearchReq Msg is null
Line 876: Invalid uhal_MmcUmtsPartialSearchReq
Line 884: [IRAT L2U] UmtsPartialSearchReq Msg is too late !!! 
Line 896: srch_req_ptr is NULL in  UmtsPartialSearchReq
Line 906: srch_req_ptr->frequencyList is NULL in  uhal_MmcUmtsPartialSearchReq
Line 930: UmtsMeasurementServerReset fail
Line 933:  MMC -> UMTS Partial Search Request
Line 940: UmtsPartialSearchReq Msg is null
Line 1025: UHAL fails in making a MmcUmtsRssiMeasurementIndMsg
Line 1050: NumberOfFrequencies is out of range
Line 1057: UmtsRssiMeasurementInd Msg is NULL
Line 1062: UMTS -> MMC RSSI Measurement Indication
Line 1066: UHAL fails in sending a MmcUmtsRssiMeasurementIndMsg
Line 1069: UHAL fails in freeing MmcUmtsRssiMeasurementInd Msg.
Line 1096: Invalid LatchReqest
Line 1119: UHAL fails in making a MmcUmtsInitialRscpEcNoMeasurementIndMsg
Line 1153: NumberOfCells is out of range
Line 1160: NumberOfFrequencies is out of range
Line 1168: UmtsInitialRscpEcNoMeasurementIndMsg is NULL
Line 1186: UMTS -> MMC INIT Measurement Indication
Line 1190: UHAL fails in sending a MmcUmtsInitialRscpEcNoMeasurementIndMsg
Line 1193: UHAL fails in freeing a MmcUmtsInitialRscpEcNoMeasurementIndMsg
Line 1219: Invalid LatchReqest
Line 1240: UHAL fails in making a MmcUmtsRscpEcNoUpdateMeasurementIndMsg
Line 1276: NumberOfCells is out of range
Line 1283: NumberOfFrequencies is out of range
Line 1291: UmtsInitialRscpEcNoMeasurementIndMsg is NULL
Line 1309: UMTS -> MMC Measurement Indication
Line 1313: UHAL fails in sending a MmcUmtsRscpEcNoUpdateMeasurementIndMsg
Line 1316: UHAL fails in freeing a MmcUmtsRscpEcNoUpdateMeasurementIndMsg
Line 1341: Invalid LatchReqest
Line 1363: UHAL fails in making a MmcUmtsCellSearchIndMsg
Line 1396: NumberOfCells is out of range
Line 1403: NumberOfFrequencies is out of range
Line 1411: UmtsCellSearchIndMsg is NULL
Line 1429: UMTS -> MMC Cell Search Indication
Line 1433: UHAL fails in sending a MmcUmtsCellSearchIndMsg
Line 1436: UHAL fails in freeing a MmcUmtsCellSearchIndMsg
Line 1455: UHAL fails in making a MmcUmtsPartialSearchIndMsg
Line 1490: NumberOfCells is out of range
Line 1497: NumberOfFrequencies is out of range
Line 1511: UmtsPartialSearchIndMsg is NULL
Line 1530: UMTS -> MMC Partial Search Indication (numOfPathes=%d)
Line 1534: UHAL fails in sending a MmcUmtsPartialSearchIndMsg
Line 1537: UHAL fails in freeing a MmcUmtsPartialSearchIndMsg
Line 1562: Invalid LatchReqest
Line 1589: Invalid Ind
Line 1610: UHAL fails in making a MmcUmtsCellSearchIndMsg
Line 1636: NumberOfFrequencies is out of range
Line 1644: srch_req is NULL
Line 1649: UMTS -> MMC Cell Search Dummy Indication ************
Line 1653: UHAL fails in sending a MmcUmtsCellSearchDummyIndMsg
Line 1656: UHAL fails in freeing a MmcUmtsCellSearchDummyIndMsg
Line 1666: SKIP power off after dummy indication due to RAT is resumed
Line 1681: UHAL fails in making a MmcUmtsPartialSearchIndMsg
Line 1708: NumberOfFrequencies is out of range
Line 1721: srch_req is NULL
Line 1726: UMTS -> MMC Partial Search Dummy Indication ************
Line 1730: UHAL fails in sending a Mmc_UmtsPartialSearchCnf
Line 1733: UHAL fails in freeing a Mmc_UmtsPartialSearchCnf
Line 1743: SKIP power off after dummy indication due to RAT is resumed
Line 1759: UHAL fails in making a MmcUmtsInitialRscpEcNoMeasurementIndMsg
Line 1788: NumberOfFrequencies is out of range
Line 1795: rscp_req is NULL
Line 1800: UMTS -> MMC INIT Measurement Dummy Indication *********
Line 1804: UHAL fails in sending a MmcUmtsInitialRscpEcNoMeasurementDummyIndMsg
Line 1807: UHAL fails in freeing a MmcUmtsInitialRscpEcNoMeasurementDummyIndMsg
Line 1817: SKIP power off after dummy indication due to RAT is resumed
Line 1834: UHAL fails in making a MmcUmtsRscpEcNoUpdateMeasurementDummyIndMsg
Line 1861: NumberOfFrequencies is out of range
Line 1868: UmtsInitialRscpEcNoMeasurementDummyIndMsg is NULL
Line 1873: UMTS -> MMC Measurement Dummy Indication *********
Line 1877: UHAL fails in sending a MmcUmtsRscpEcNoUpdateMeasurementDummyIndMsg
Line 1880: UHAL fails in freeing a MmcUmtsRscpEcNoUpdateMeasurementDummyIndMsg
Line 1890: SKIP power off after dummy indication due to RAT is resumed
Line 1927: Irat measurement timeout before expected time, so force crash,pal time diff(msec) %x%x,palTimeBeforeTimer %x%x, palTimeAfterTimer %x%x
Line 1932: activeStackId %d uhal_IratMeasurement_Timeout not performed due to activeRat %d l2uHOStarted %d
Line 1936: activeStackId %d uhal_IratMeasurement_Timeout
Line 1958: uhal_IratMeasurement_Abort : send dummy indication(3G RAT is suspended)
Line 1963: measRequestRatInfo = %d
Line 2004: activeStackId %d uhal_HmcpHpcm_GetModemOnStatus(activeStackId) %d l2uHOStarted %d uhal_IratMeasurement_Timeout
Line 2012: activeStackId %d uhal_IratMeasurement_stop not performed due to activeRat %d
Line 2036: uhal_IratMeasurement_Abort : send dummy indication(3G RAT is suspended)
Line 2041: measRequestRatInfo = %d l2uHOStarted =%d
Line 2060: uhal_IratMeasurement_TimeoutStart: uhalIratMeasurementTimerCreated:%d  activeStackId: %d
Line 2065: uhalIratMeasurementTimer Created!  %d 
Line 2068: uhalIratMeasurementTimer Timing set OK!
Line 2073: uhalIratMeasurementTimer Timing set Failed!
Line 2079: uhalIratMeasurementTimer Creation Failed!
Line 2103: uhal_IratMeasurement_TimeoutCancel: uhalIratMeasurementTimerCreated:%d activestackId %d
Line 2131: activeStackId %d Invalid LatchReqest
Line 2137: activeStackId %d measurement_server pointer is null
Line 2165: Invalid LatchReqest
Line 2223: Gap0 Hisr: schedule StartSschSTF, currentRSN=%d, targetRSN=%d MeasureStart %d
Line 2228: cmsmt_server is NULL
