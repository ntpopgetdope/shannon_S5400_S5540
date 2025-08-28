Line 255: measurement_server is NULL !!!
Line 318: [L2U]MmcUmtsPowerReq
Line 359: Free up TokenUmtsReleaseL2USTF before issuing a new one
Line 381: SKIP power off due to RAT is resumed
Line 424: Memory Allocation Error
Line 462: uhal_CMeasurementServer_init
Line 539: uhal_CMeasurementServer_free
Line 608: activeStackId %d UMTS RSSI Measurement Request
Line 609: activeStackId %d   UARFCN = %d
Line 610: activeStackId %d   Duration = %d,%d,%d
Line 611: activeStackId %d ==================================================
Line 681: activeStackId %d UMTS Initial RSCP/EcNo Measurement Request (%d %d)
Line 683: activeStackId %d   UARFCN = %d
Line 684: activeStackId %d   Duration = %d,%d,%d
Line 685: activeStackId %d   numOfRscpEcNoInfo = %d
Line 686: activeStackId %d   numPathsToCorrelate = %d
Line 691: activeStackId %d INIT_RSCP_REQ: gap_length = %d slots
Line 718: activeStackId %d INIT_RSCP_REQ: numPathsToCorrelate = 0, using default %d
Line 730: Cell %d: SCR Code = %d, Tx Diversity = %d
Line 737: activeStackId %d ==================================================
Line 750: activeStackId %d INIT_RSCP_REQ: Invalid numOfRscpEcNoInfo %d, maximum cells is %d
Line 798: activeStackId %d UMTS RSCP/EcNo Update Measurement Request
Line 799: activeStackId %d   UARFCN = %d
Line 800: activeStackId %d   Duration = %d,%d,%d
Line 801: activeStackId %d   numOfRscpEcNoInfo = %d
Line 814: activeStackId %d RSCP_UPDATE_REQ: gap_length = %d slots
Line 838: activeStackId %d   Cell %d: SCR Code = %d ; Tx Diversity = %d ; Frame Offset = %d
Line 846: activeStackId %d ==================================================
Line 858: activeStackId %d RSCP_UPDATE_REQ: Invalid numOfRscpEcNoInfo %d, maximum cells is %d
Line 916: activeStackId %d Memory Allocation Error
Line 924: activeStackId %d UMTS ->2G RSSI Measurement  Aborted, dummy indication sent
Line 953: activeStackId %d UMTS RSSI Measurement Indication
Line 954: activeStackId %d   UARFCN = %d
Line 955: activeStackId %d   RSSI = %ddBm
Line 956: activeStackId %d ==================================================
Line 1040: activeStackId %d Memory Allocation Error
Line 1048: activeStackId %d UMTS ->2G INITIAL RSCP Measurement  Aborted, dummy indication sent
Line 1074: activeStackId %d UMTS Initial RSCP/EcNo Measurement Indication
Line 1075: activeStackId %d   UARFCN = %d
Line 1076: activeStackId %d   RSSI = %ddBm
Line 1178:   Cell %d: SCR Code = %d ; RSCP = %ddBm ; Ec/No = %ddB ; Frame Offset = %d
Line 1183: activeStackId %d   numOfRscpEcNoInfo = %d
Line 1255: Skip uhal_CHmcp_PgapRelease
Line 1284: activeStackId %d Memory Allocation Error
Line 1292: activeStackId %d UMTS ->2G Update RSCP Measurement  Aborted, dummy indication sent
Line 1319: activeStackId %d UMTS RSCP/EcNo Update Measurement Indication
Line 1320: activeStackId %d   UARFCN = %d
Line 1321: activeStackId %d   RSSI = %ddBm
Line 1322: activeStackId %d   numOfRscpEcNoInfo = %d
Line 1339: activeStackId %d !!! cell_valid is not TRUE !!!
Line 1384:   Cell %d: SCR Code = %d ; RSCP = %ddBm ; Ec/No = %ddB ; Frame Offset = %d
Line 1386: activeStackId %d ==================================================
Line 1441: activeStackId %d UMTS Cell Search Request
Line 1442: activeStackId %d   UARFCN = %d
Line 1443: activeStackId %d   Duration = %d,%d,%d
Line 1444: activeStackId %d ==================================================
Line 1460: CELL_SRCH_REQ: step1GapLength=%d slots, step2GapLength=%d slots, processingMargin=%d slots
Line 1467: activeStackId %d CELL_SRCH_REQ: gapLength %d should be longer than %d
Line 1537: activeStackId %d UMTS Partial Search Request (phase=%d)
Line 1538: activeStackId %d   UARFCN = %d
Line 1539: activeStackId %d   Duration = %d,%d,%d
Line 1540: activeStackId %d ==================================================
Line 1556: activeStackId %d PARTIAL_SRCH_REQ: gap_length = %d slots
Line 1602: activeStackId %d   pathIndex=%d: Path Offset (QC) = %d
Line 1605: activeStackId %d ==================================================
Line 1612: activeStackId %d PARTIAL_SRCH_REQ: Invalid numOfPathes=%d, max num of pathes is %d
Line 1694: activeStackId %d Memory Allocation Error
Line 1702: activeStackId %d UMTS ->Partial Search  Aborted, dummy indication sent
Line 1722: activeStackId %d UMTS Partial Search Indication
Line 1723: activeStackId %d   UARFCN = %d
Line 1724: activeStackId %d   PHASE = %d
Line 1725: activeStackId %d   RSSI = %ddBm
Line 1739: activeStackId %d   PATH INDEX = %d ; offset(QC) = %d
Line 1744: activeStackId %d   PATH NOT FOUND !!!
Line 1793:   SCR Code NOT FOUND ; RSCP = %ddBm ; Ec/No = %ddB
Line 1799:   SCR Code = %d ; RSCP = %ddBm ; Ec/No = %ddB ; Frame Offset = %d ; Tx Diversity = %d
Line 1803: activeStackId %d ==================================================
Line 1810: activeStackId %d srch_ind_fun is NULL !!!
Line 1818: activeStackId %d 3G modem OFF is skipped !!!
Line 1909: activeStackId %d Memory Allocation Error
Line 1917: activeStackId %d UMTS ->2G Cell Search  Aborted, dummy indication sent
Line 1943: activeStackId %d UMTS Cell Search Indication
Line 1944: activeStackId %d   UARFCN = %d
Line 1945: activeStackId %d   RSSI = %ddBm
Line 2002:   SCR Code NOT FOUND ; RSCP = %ddBm ; Ec/No = %ddB
Line 2008:   SCR Code = %d ; RSCP = %ddBm ; Ec/No = %ddB ; Frame Offset = %d ; Tx Diversity = %d
Line 2011: activeStackId %d ==================================================
Line 2047: UMTS Measurement Server Reset
Line 2048: ==================================================
Line 2335: uhal_CMeasurementServer_StopSschSTF: currentRSN=%d
Line 2357: measurement_server pointer is null
Line 2361: uhal_CMeasurementServer pendingPowerOff = %d, measRequestRatInfo = %d
Line 2365: T9 HISR but power off ind is pended
Line 3889: activeStackId %d uhal_CMeasurementServer_StartSsch: Step2 Search Gap Length (slots) = %d
Line 3895: activeStackId %d SSCH Error %d, Additional Error %d
Line 3902: activeStackId %d uhal_CMeasurementServer_StartSsch: currentRSN=%d
Line 3923: activeStackId %d uhal_CMeasurementServer_StartSsch: Schedule StopSschSTF, currentRSN=%d, targetpRSN=%d
Line 5250: activeStackId %d Reset step1 searcher: cmd_status should be idle but cmd_status=%d
Line 5265: activeStackId %d Reset step2 searcher: cmd_status should be idle but cmd_status=%d
Line 5283: activeStackId %d Reset step3 searcher: cmd_status should be idle but cmd_status=%d
Line 5301: activeStackId %d Reset multipath searcher: cmd_status should be idle but cmd_status=%d
Line 5319: activeStackId %d Reset buffering: cmd_status should be idle but cmd_status=%d
Line 5660: activeStackId %d RF settled for IRAT measurement
Line 5856: uhal_IratMeasurement_Abort : No IRAT O2U going ON
Line 5869: uhal_IratMeasurement_Abort : 3G modem is ON
Line 5881: uhal_IratMeasurement_Abort : send dummy indication(3G RAT is suspended)
Line 5889: uhal_IratMeasurement_Abort : 3G modem already switched OFF
Line 5901: activeStackId %d mismatching with callerStackId %d, 
Line 5961: uhal_IratRFParametersReset() getting called
Line 2187: IRAT MeasurementServer FSM: current_state=%u result=%d event=%d, next_state=%u
Line 2200: IRAT MeasurementServer FSM: current_state=%u result=%d event=%d, next_state=%u
Line 5028: freqIndex=%d, uarfcn=%d, isNewFrequency=%d
Line 5055: UARFCN %d is already configued but its cell array is NULL. Recreate it.
Line 5061: Memory Allocation Error
Line 5093: Memory Allocation Error
Line 5108: UARFCN %d is already configued but its cell array is NULL. Recreate it.
Line 5114: Memory Allocation Error
Line 5146: Memory Allocation Error
Line 5182: Memory Allocation Error
Line 5203: Invalid Request %d
Line 5211: Queue empty
Line 2088: uhal_CMeasurementServer_SetFreqIndex 	Array index out of bound %d 
Line 2124: IRAT MeasurementServer SetFreqIndex: index is larger than UHAL_IRAT_MAX_FREQUENCIES
Line 4631: Memory Allocation Error
Line 4684: INIT_RSCP_REQ: maxCellIndex=%d should be less than the allowed MAX CELL %d
Line 4706: INIT_RSCP_REQ: maxCellIndex=%d
Line 4767: RSCP_UPDATE_REQ: maxCellIndex=%d should be less than the allowed MAX CELL %d
Line 4778: RSCP_UPDATE_REQ: cellIndex=%d, SCR Code=%d
Line 4842: UARFCN %d is already configued but its cell array is NULL. Recreate it.
Line 4848: Memory Allocation Error
Line 4935: UARFCN %d is already configued but its cell array is NULL. Recreate it.
Line 4941: Memory Allocation Error
Line 5470: Memory Allocation Error
Line 5480: UMTS RSSI Measurement Error Indication
Line 5494: Memory Allocation Error
Line 5504: UMTS Initial RSCP/EcNo Measurement Error Indication
Line 5518: Memory Allocation Error
Line 5528: UMTS RSCP/EcNo Update Measurement Error Indication
Line 5542: Memory Allocation Error
Line 5552: UMTS Cell Search Error Indication
Line 5559: Invalid Request %d
Line 2423: uhal_CMeasurementServer isActiveRequestQueue = %d, t9HisrDoneStatus = %d
Line 2455: Que is empty but T9 HISR isn't generated
Line 2646: activeStackId %d Memory Allocation Error
Line 2677: activeStackId %d INIT_RSCP_REQ: Step1 found cells. Do the next step(step3 search)
Line 2685: activeStackId %d INIT_RSCP_REQ: Step1 found no cells. Send IND to GL1
Line 3997: IRAT request Cpich ScrCode: path_count=%d, cell_count=%d, cell_index=%d
Line 4015: activeStackId %d CPICH SCR Code - no cells to check
Line 4042: activeStackId %d Wrong ScrCode Index = %d 
Line 4119: IRAT request Cpich ScrCode. pathOffset %d ScrCode[%d]=%d
Line 4126: activeStackId %d CPICH SCR Code Error %d, Additional Error %d
Line 2753: Initial Scan: Buffering completed
Line 4274: activeStackId %d CPICH Multi-Path Error %d, Additional Error %d
Line 4350: activeStackId %d CPICH Multi-Path Error %d, Additional Error %d
Line 4563: uhal_CMeasurementServer_CellUpdated  magnitude = %d, num_paths = %d, isMpsRetried = %d
Line 3193: activeStackId %d Memory Allocation Error
Line 3237: activeStackId %d Invalid Request Type=%d
Line 3258: activeStackId %d Invalid Request Type=%d
Line 4186: activeStackId %d CPICH SCR Code Error %d, Additional Error %d
Line 3439: activeStackId %d uhal_CMeasurementServer_CellSearchProcessEvent: Request Step2 Search (Code Group ID = %d)
Line 3570: activeStackId %d Invalid Request Type=%d
Line 3718: activeStackId %d Starting RF: uarfcn %d: current state %d
Line 3745: activeStackId %d Buffering Error %d, Additional Error %d
Line 3770: activeStackId %d PSCH Error %d, Additional Error %d
Line 3793: activeStackId %d Buffering Error %d, Additional Error %d
Line 3802: activeStackId %d uhal_CMeasurementServer_StartPsch: No buffering (req_type=%d)
Line 3630: activeStackId %d [IRAT] RF Rx ON command exec failure Error %d, Additional Error %d
Line 3671: activeStackId %d RF UARFCN Error %d, Additional Error %d
Line 4474: activeStackId %d Starting RF: uarfcn %d: current state %d
Line 4497: activeStackId %d Buffering Error %d, Additional Error %d
Line 5757: uhal_CMeasurementServer_CheckRRM: uhal_CMeasurementServer_RRM_flag %d: firstScrCode = %d 
Line 5789: uhal_CMeasurementServer_CheckRRM: arrayIndx = %d, ScrCode = %d 
Line 5824: uhal_CMeasurementServer_CheckRRM: uhal_CMeasurementServer_RRM_flag %d
