Line 107: RRC_MM_PLMN_LIST_REQ can't be handled in this state (ACC or CONN)
Line 112: RRC_MM_PLMN_LIST_REQ (N2N) can't be handled in RRC Suspended State
Line 118: RRC_MM_PLMN_LIST_REQ: SIB1 | OSI flag - Trigger Defer
Line 131: RrcNrPrcdNrBplmn::DecideDeferHdlr
Line 135: Message ID : ABORT_REQ
Line 138: CurState Hold -> Resume
Line 228: [BPLMN] already stopping
Line 250: [BPLMN] already suspending
Line 257: [BPLMN] RRM RAT state : %d RRC RAT state: %d
Line 281: [NRBPLMN] BPLMN START : type %d
Line 291: [NRBPLMN]PlmnReqForOldList - continue
Line 301: [NRBPLMN] There is no Freqlist and FreqBlock to search
Line 323: [NRBPLMN] NR_IRAT_TYPE_L2N : Block Service Registration
Line 348: [NRBPLMN] set NrOpMode = NRRRCDB_NROPMODE_NRSA
Line 353: [NRDSDS] MS Domain info update to SA
Line 365: [BPLMN] RRM RAT state : %d RRC RAT state: %d
Line 381: [BPLMN] RRM RAT state : %d
Line 396: [BPLMN] RRC RAT state : %d
Line 402: [NRBPLMN] Waiting for RRC_RRM_BPLMN_AVAILABLE_IND
Line 415: %s
Line 433: [NRBPLMN] BPLMN list search start
Line 453: [NRBPLMN] Result %d, FreqScanState %d UntilFreq %d NumFreq %d, m_bIsAvailable %d
Line 462: [NRBPLMN] NONE_SCAN is invalid value, handle it like FAILURE case
Line 471: [RRC][NRCELL][RSSI] NumBand %d
Line 471: [RRC][NRCELL][RSSI] NumBand %d
Line 482: [NRCELL][RSSI] LastBandId %d LastSweptInx %d stoppedFirstSubband %d
Line 500: Avoid nonvalid band Scan for Manual Plmn Search
Line 500: Avoid nonvalid band Scan for Manual Plmn Search
Line 504: [RRC][NRCELL][RSSI] m_BplmnRssiScanOrder %d NextFreqType:%d
Line 504: [RRC][NRCELL][RSSI] m_BplmnRssiScanOrder %d NextFreqType:%d
Line 540: Avoid nonvalid band Scan for Manual Plmn Search
Line 540: Avoid nonvalid band Scan for Manual Plmn Search
Line 557: [NRBPLMN] Freq scan stop, waiting for BPLMN_HOLD_IND
Line 600: [NRBPLMN] CELL_ACQ_REQ_Hdlr Band:%d Arfcn:%d CellID:%d RSRP:%d RSRQ:%d SINR:%d
Line 623: [NRBPLMN] BCH_CONFIG: FAILURE
Line 624: [NRBPLMN]-->RRC_SEND_EXTMSG(RRM_RRC_CELL_STATUS_REQ)
Line 632: [NRBPLMN] BCH_CONFIG: SUCCESS - waiting for SIB1_IND %d
Line 661: [NRBPLMN] RRC_RRC_SIB1_IND
Line 670: [NRBPLMN][BLIND] Camp ON Cell
Line 676: [NRBPLMN][BLIND] Nas Selected Plmn info is missing...
Line 696: [NRBPLMN] selected NR band is %d
Line 703: [NRBPLMN] TargetCell SetToBackgroundCell
Line 709: [NRBPLMN] No NR band was selected
Line 740: m_bDoStoredSearch %d, m_SearchMode %d
Line 797: [NRBPLMN] RRC_RRM_CELL_STATUS_CNF result:%d
Line 805: [NRBPLMN] RRC_RRM_CELL_STATUS_CNF CellSelection cause: %d
Line 830: [NRBPLMN] RRC_RRM_CELL_CONFIG_CNF Result %s Hold %d m_bIsAvailable %d
Line 841: [NRBPLMN] CELL_CONFIG : hold, waiting for BPLMN_HOLD_IND
Line 886: [BPLMN] RRM RAT state : %d
Line 891: [NRBPLMN] waiting for RRC_MMC_BPLMN_SRCH_START_IND
Line 908: [BPLMN] RRC RAT state : %d
Line 928: [NRBPLMN] Just wait for the end
Line 934: [NRBPLMN] waiting for RRC_RRM_BPLMN_AVAILABLE_IND
Line 965: [NRBPLMN] Just wait for the end
Line 1000: [BPLMN] ArbOptHandler_ExitLoop m_bExitArbLoopHdlr (%d)
Line 1010: [BPLMN] AbtOptHandler_CheckWaitStartCnf (%d)
Line 1104: [NRCELL] SearchRule SearchMode:%d FreqType:%d BandSearchType:%d BandBlockMode:%d
Line 1121: [NRBPLMN] SearchList ListSize:%d, BlockSize:%d RssiScanBandSize:%d m_BplmnRssiScanOrder:%d
Line 1130: Set m_bDoStoredSearch to true
Line 1186: [NETSCAN] BandSize:%d
Line 1208: [NRBPLMN] Filtered Band List :%d
Line 1212: [NRBPLMN] BandSize:%d
Line 1239: [NRBPLMN] CheckRevertSearchTarget - m_bSendFreqScan %d m_bSendCellConfig %d NeedRCellConfig %d
Line 1242: [NRBPLMN] Already reverted with HoldInd %d
Line 1253: [NRBPLMN] curTime %d BchConfigTime %d
Line 1257: [NRBPLMN] NotRetry
Line 1275: [NRBPLMN][FromLTE] CheckStopCond Status %d Arfcn %d Pcid %d Rsrp %d
Line 1303: [BPLMN] RRM RAT state : %d RRC RAT state : %d
Line 1309: %s
Line 1318: m_bDoStoredSearch is true. Stored search is done.
Line 1321: [NRBPLMN] CellConfigFreqList has been completed so do not send message
Line 1328: [NRBPLMN] -->RRC_SEND_EXTMSG(RRM_RRC_CELL_CONFIG_REQ)
Line 1339: %s
Line 1345: [NRBPLMN] Frequency list has been completed so do not send message
Line 1351: [NRBPLMN] -->RRC_SEND_EXTMSG(RRM_RRC_FREQ_SCAN_REQ)
Line 1386: [BPLMN] RRM RAT state : %d RRC RAT state : %d
Line 1480: [NRBPLMN] AddServingCellPlmnInfo
Line 1505: PLMN info %x%x%x %x%x%x
Line 1513: [NRBPLMN] AddServingCellPlmnInfo : ServingCell is nullptr
