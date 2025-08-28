Line 113: This PBD can't be run in ENDC mode
Line 128: foreground PLMN scan is already running. ignore new
Line 192: [NRCELL] rDb.m_bIsTargetRatRestore %d 
Line 196: RrcNrPrcdSaCellSel : m_CurService(%d) m_bRreFailKeepSvc(%d)
Line 220: [FEATURE_AP_BASED_EMC] m_ConfiguredStatus(%d)
Line 308: [NRCELL] Restart Cell Selection with cause %d
Line 321: %s
Line 333: [NRCELL] Trigger CellSelFinish. CellSelCause(%d)
Line 337: [NRCELL] m_ConfiguredStatus 0x%x 
Line 360: [NRCELL] Wait for ModemStopCnf
Line 393: [NRCELL] ConnRel with redirection
Line 426: [FEATURE_AP_BASED_EMC] LastApBasedEmcPlmnId Country Code(%d %d %d) Network code (%d %d %d)
Line 430: [FEATURE_AP_BASED_EMC] LastApBasedEmcPlmnId Country Code(%d %d %d) Network code (%d %d %d)
Line 438: [FEATURE_AP_BASED_EMC] LastPlmnSearchMode(%d) PlmnSrchCause (%d)
Line 474: %s
Line 484: %s
Line 494: %s
Line 509: %s
Line 564: [NRCELL] Freq Scan result:%d bBandSearchFlag: %d FreqScanState:%d
Line 574: [NRCELL] NONE_SCAN is invalid value, handle it like FAILURE case
Line 594: [NRCELL] UntilSsbFrequency %d NumFreq %d
Line 627: [RRC][NRCELL] NumFreq %d
Line 627: [RRC][NRCELL] NumFreq %d
Line 633: [NRCELL] UntilSsbFrequency %d
Line 692: [RRC][NRCELL][RSSI] NumBand %d
Line 692: [RRC][NRCELL][RSSI] NumBand %d
Line 702: [NRCELL][RSSI] LastBandId %d LastSweptInx %d stoppedFirstSubband %d
Line 723: [RRC][NRCELL][RSSI] m_RssiScanOrder %d NextFreqType:%d
Line 723: [RRC][NRCELL][RSSI] m_RssiScanOrder %d NextFreqType:%d
Line 741: [RRC][NRCELL] Error!! unknown FreqScanType %d
Line 741: [RRC][NRCELL] Error!! unknown FreqScanType %d
Line 746: [NRCELL] PbdState is PBD_STATE_ABORTING 
Line 759: [RRC][NRCELL] CELL_ACQ_REQ_Hdlr Band:%d Arfcn:%d CellID:%d RSRP:%d RSRQ:%d
Line 759: [RRC][NRCELL] CELL_ACQ_REQ_Hdlr Band:%d Arfcn:%d CellID:%d RSRP:%d RSRQ:%d
Line 782: %s
Line 785: [NRCELL] RRC_RRM_BCH_CONFIG_CNF result:%d
Line 790: [NRCELL]-->RRC_SEND_EXTMSG(RRM_RRC_CELL_STATUS_REQ)
Line 818: [NRCELL] RRC_RRC_SIB1_IND
Line 843: [NRCELL] Nas Selected Plmn info is missing...
Line 875: [RRC][NRCELL] RRC_RRC_SIB1_IND CellSelection Result :%d
Line 875: [RRC][NRCELL] RRC_RRC_SIB1_IND CellSelection Result :%d
Line 892: [NRCELL] RRC_TIMER_NR_TSIB1_EXPIRY_IND PBD state:%d
Line 912: [NRCELL] RRC_RRM_BCH_RELEASE_CNF result:%d m_ConfiguredStatus :%d
Line 918: [RRC][NRCELL] MCC Search Abort CurProcedure
Line 918: [RRC][NRCELL] MCC Search Abort CurProcedure
Line 936: [RRC][NRCELL] RRC_RRM_CELL_STATUS_CNF result:%d
Line 936: [RRC][NRCELL] RRC_RRM_CELL_STATUS_CNF result:%d
Line 945: [NRCELL] RRC_RRM_CELL_STATUS_CNF CellSelection Result :%d
Line 971: [RRC][NRCELL] RRC_RRM_CELL_CONFIG_CNF result:%d CellStatus:%d PlmnListSearch:%d
Line 971: [RRC][NRCELL] RRC_RRM_CELL_CONFIG_CNF result:%d CellStatus:%d PlmnListSearch:%d
Line 995: [NRCELL] Need to check why cell selection failed !!!
Line 1009: [NRCELL] PBD_STATE_ABORTING : no action
Line 1068: [NRCELL] SERVINGCELL_CONFIG_COMMON_SIB is included in new received SIB1, L2 Config is needed
Line 1072: [NRCELL] Don't need to send L2/PHY configuration. Just send result msg to MM
Line 1089: %s
Line 1112: [NRCELL] RRM RAT state : %d
Line 1116: [NRCELL] RRC RAT state : %d
Line 1130: [NRCELL] PBD_STATE_RUNNING : abnormal case 
Line 1134: [NRCELL] PbdState is PBD_STATE_ABORTING 
Line 1156: [NRCELL] There is no SIB1 for SCell. It is abnormal case. Need to check
Line 1251: [NRSIB] SIB1 : Send scheduled posSIB info to LBS
Line 1266: [NRSIB] SIB1 : L2_RRC_BCH_DUPLICATE_START_IND
Line 1275: %s
Line 1282: [NRCELL]Frequency list has been completed so do not send message
Line 1293: [NRCELL]-->RRC_SEND_EXTMSG(RRM_RRC_FREQ_SCAN_REQ)
Line 1301: %s
Line 1327: [NRCELL]Cell selection list has been completed so do not send message
Line 1333: [NRCELL]-->RRC_SEND_EXTMSG(RRM_RRC_CELL_CONFIG_REQ) %d
Line 1344: [NRCELL] RrcSteadyState %d, SuspendConfigPresent %d
Line 1359: %s
Line 1459: [L2N IRAT Resel]Add Barred Info
Line 1468: [L2N IRAT Resel] #%d Arfcn:%d 
Line 1480: [L2N IRAT Resel] #%d Arfcn:%d Cell id: %d 
Line 1552: [NRCELL] Please check Cell selection cause
Line 1595: [NRCELL] ===SmartBand=== enable=%d, PLMN search cause=%s
Line 1599: [NRCELL] ===SmartBand=== don't use Lassen band list
Line 1623: [NRCELL] Filtered Band List :%d
Line 1627: [NRCELL] BandSize:%d
Line 1727: %s
Line 1806: [NRCELL] FixedArfcn Search Rule m_SearchMode:%d, m_FreqType:%d, m_SortType:%d, m_FilterType:%d
Line 1818: [RRC][NRCELL] case : REDIRECTED
Line 1818: [RRC][NRCELL] case : REDIRECTED
Line 1824: [RRC][NRCELL] case : IRAT_REDIRECT
Line 1824: [RRC][NRCELL] case : IRAT_REDIRECT
Line 1851: [RRC][NRCELL] case : IRAT_RESEL
Line 1851: [RRC][NRCELL] case : IRAT_RESEL
Line 1873: [RRC][NRCELL] case : PLMN_SEARCH (stored search)
Line 1873: [RRC][NRCELL] case : PLMN_SEARCH (stored search)
Line 1878: [RRC][NRCELL] case : PLMN_SEARCH (Saved Search)
Line 1878: [RRC][NRCELL] case : PLMN_SEARCH (Saved Search)
Line 1888: [RRC][NRCELL] case : PLMN_SEARCH (full search)
Line 1888: [RRC][NRCELL] case : PLMN_SEARCH (full search)
Line 1896: [NRCELL] case : MCC(stored search)
Line 1901: [NRCELL] case : MCC(stored & full search)
Line 1907: [RRC][NRCELL] case : PLMN_LIST
Line 1907: [RRC][NRCELL] case : PLMN_LIST
Line 1964: [RRC][NRCELL] case : CONN_REL
Line 1964: [RRC][NRCELL] case : CONN_REL
Line 1983: [RRC][NRCELL] case : CONN_FAIL or ACC_FAIL
Line 1983: [RRC][NRCELL] case : CONN_FAIL or ACC_FAIL
Line 1998: [RRC][NRCELL] case : IDLE_OOS
Line 1998: [RRC][NRCELL] case : IDLE_OOS
Line 2019: [RRC][NRCELL] case : REESTABLISH %d
Line 2019: [RRC][NRCELL] case : REESTABLISH %d
Line 2083: [NRCELL] Please check Cell selection cause
Line 2110: [NRCELL] Search Rule m_SearchMode:%d, m_FreqType:%d, m_SortType:%d, m_FilterType:%d, m_FreqSrchOrder:%d, m_RssiScanOrder:%d, m_BandSearchType:%d, m_BandBlockMode:%d
Line 2122: [FEATURE_AP_BASED_EMC] CheckConfigAndSetupSearchList  CellSelComplete(%d) FreqScanComplete(%d)
Line 2164: [NRCELL] Search List m_SearchMode:%d, ListSize:%d, BlockSize:%d RssiScanBandSize:%d
Line 2188: [NRCELL] m_RetryCount %d
Line 2204: [NRCELL] ProcessNrCellSelStart RrcState %d StartCause %d IsRedirection %d RRM RAT state %d RRC RAT state %d RRM state %d
Line 2239: [NRCELL] There is no Freqlist, FreqBlock and RssiScanBand to search
Line 2259: [NRCELL] ProcessCellSelFinish Cause:%d RetryCount:%d ConfiguredStatus:%d
Line 2292: [FEATURE_AP_BASED_EMC] LastPlmnSearchMode (%d)
Line 2391: Not expected case, Do going to idle
Line 2448: [NRCELL] RRM RAT state : %d RRC RAT state : %d
Line 2462: [NRCELL] ProcessCellSelFinishWithAbort Cause:%d FailCause:%d
Line 2514: [NRCELL] RRM RAT state : %d RRC RAT state : %d
Line 2529: [NRCELL] No message to send. terminate current procedure 
Line 2595: [NRCELL] BestCellFromMeasuredList Band[%d] Arfcn[%d] Pcid [%d] Scs[%d] Rsrp[%d]
Line 2631: [NRCELL] ScannedFreqList Band[%d] Arfcn[%d] Scs[%d] MaxValue[%d]
Line 2674: [NRCELL] Release AsSig before starting full scan
Line 2707: [NRRRC] (registry update) rCnt %d -> MAX_HYPO_CNT : %d
Line 2749: %s
Line 2810: %s
Line 2812: m_CurService(%d)
Line 2843: %s
Line 2866: NeighbourFreqList - DbSib4 valid
Line 2879: NeighbourFreqList - Call CellSel again after REEST, Use saved info
Line 2900: [NRCELL] searchCurrentRAT : %d 
