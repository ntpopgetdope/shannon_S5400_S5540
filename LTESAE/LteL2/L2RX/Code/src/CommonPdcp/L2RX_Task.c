Line 222: [PDCPRX][DRBID:%d] Rxed RBINFO Cause=%d Recovery=%d
Line 229: [PDCPRX][DRBID:%d] Fail pal_Malloc and Fail Send LTE_PDCP_DORMANT_IND : StackId[%d]
Line 247: [PDCPRX][DRBID:%d] Fail pal_Malloc and Fail Send LTE_PDCP_DORMANT_IND : StackId[%d]
Line 261: [PDCPRX][DRBID:%d] Rxed RBINFO, 
Line 283: send LTE_CPDCP_DL_ENDC_RESET_CNF
Line 292: Fail pal_Malloc and Fail Send LTE_CPDCP_DL_ENDC_RESET_CNF!!!
Line 311: [RLCRX][ENTITY:_][DRBID:_][C%d] : L2HRXRLC_ProcFlushLteRlcReq Idx[%d/%d/%d]
Line 354: [RLCRX][ENTITY:%d][DRBID:_] : Current VR_R[%d], VR_MS[%d], VR_H[%d], dwDescSplitAllocCnt[%d] 
Line 362: [RLCRX][ENTITY:%d][DRBID:_] : L2HRXRLC_ProcFlushLteRlcReq, Forced update VR_R, VR_MS[%d] 
Line 386: [NB-IOT][LTE_L2RX] RRC_MAC_RESET_CNF SKIP !!!
Line 393: [LTE_L2RX] Send LTE_CPDCP_DL_RESET_CNF
Line 404: Fail pal_Malloc and Fail Send LTE_CPDCP_DL_RESET_CNF!!!
Line 426: [NB-IOT][LTE_L2RX] RRC_PDCP_RELASE_CNF SKIP !!!
Line 433: [LTE_L2RX] Send LTE_CPDCP_DL_RELEASE_ALL_CNF
Line 442: Fail pal_Malloc and Fail Send LTE_CPDCP_DL_RELEASE_ALL_CNF!!!
Line 468: send LTE_CPDCP_DL_RELEASE_SCG_CNF
Line 477: Fail pal_Malloc and Fail Send LTE_CPDCP_DL_RELEASE_SCG_CNF!!!
Line 505: [BEFORE] L2HRX_UpdtL2ResetInx L2RxResetWrInx[%d] PdcpRlcRxIfRD/WR[%d,%d] 
Line 527: [AFTER] L2HRX_UpdtL2ResetInx L2RxResetWrInx[%d] PdcpRlcRxIfRD/WR[%d,%d] 
Line 578: L2HRX_ResetAll : IsNextRelease %d, ScgReset[%d], RX SecurityBlockF[%d]
Line 646: L2HRX_Reset : RB_ID[%d] IsNextRelease[%d]
Line 677: L2HRX_ResetCCRb[%d]
Line 774: L2HRX_FreePdcpRlcDescIf START - RD/WR[%d, %d]
Line 803: L2HRX_FreePdcpRlcDescIf END - RD/WR[%d, %d]
Line 826: L2HRX_ReleaseAll
Line 859: RB_ID[%d] RlcTxChunk free [%d]
Line 883: L2HRX_ReleaseAll
Line 953: LTE_PDCP_DL_BEARER_RESUME_REQ : LTE_RB_SRB1
Line 959: LTE_PDCP_DL_BEARER_RESUME_REQ : LTE_RB_OTHER
Line 972: LTE_PDCP_DL_BEARER_RESUME_REQ : LTE_RB_HO_ALL
Line 984: LTE_PDCP_DL_BEARER_RESUME_REQ : LTE_RB_SCG
Line 1026: Fail pal_Malloc and Fail Send NRPDCP_L2HRX_LTE_DL_INTEGRITY_CHECK_REQ
Line 1032: [LTE_L2RX] Send NRPDCP_L2HRX_LTE_DL_INTEGRITY_CHECK_REQ
Line 1040: Fail pal_Malloc and Fail Send NRPDCP_L2HRX_LTE_DL_SECURITY_CONFIG_REQ
Line 1047: [LTE_L2RX] Send NRPDCP_L2HRX_LTE_DL_SECURITY_CONFIG_REQ
Line 1059: Fail pal_Malloc and Fail Send NRPDCP_L2HRX_LTE_DL_SECURITY_DATA_FAIL_IND
Line 1064: [LTE_L2RX] Send NRPDCP_L2HRX_LTE_DL_SECURITY_DATA_FAIL_IND
Line 1073: Fail pal_Malloc and Fail Send NRPDCP_L2HRX_LTE_DL_BEARER_RESUME_REQ
Line 1079: [LTE_L2RX] Send NRPDCP_L2HRX_LTE_DL_BEARER_RESUME_REQ
Line 1302: L2HRXRLC_ProcDataIndMsg : Inx/EndParam[%x/%x], Read/WriteIdx[%x/%x], NumTb[%x/%x/%x]
Line 1366: RB_ID[%d] L2PdcpRlcRxDataDescIf Full WD[%d], RD[%d]
Line 1377: RB_ID[%d]L2RXRLC TASK 1:NO ACTIVE[%d]
Line 1441: L2RXRLC_ForceStatusTriggerHisrCb
Line 1446: L2RXRLC_ForceStatusTriggerHisrCb : malloc fail
Line 1480: RB_ID[%d]L2HRXRLC_ProcForceStatusRptTrigger : VR_R[%d], VR_H[%d], Prohibit[%d], T1TMR[%d], StatusTriggered[%d], EN[%d]
Line 1519: RB_ID[%d]Fail pal_Malloc and Fail Send LTE_L2HRX_L2HRX_T1_TMR_EX_IND!!!
Line 2173: L2HRX_ForwardRrcMsg : pRRCmsg[%x], msgid[%x], trid[%x] 
Line 2178: LTE_PDCP_DATA_IND msg Send fail
Line 2195: L2HRXNB_ForwardRrcMsg : pRRCmsg[%x], msgid[%x], trid[%x] 
Line 2200: RRC_PDCP_DATA_IND msg Send fail
Line 2219: [L2C] LTE_ProcL2HRxRlcRrcMsg, pMsg is NULL
Line 2230: [L2C] LTE_ProcL2HRxRlcRrcMsg, Wrong req_id[0x%x]
Line 2244: [L2C] LTE_ProcL2HRxPdcpRrcMsg, pMsg is NULL
Line 2256: Fail pal_Malloc and Fail Send NRPDCP_L2HRX_LTE_DL_CONFIG_REQ
Line 2263: [LTE_L2RX] Send NRPDCP_L2HRX_LTE_DL_CONFIG_REQ
Line 2267: [L2C] LTE_ProcL2HRxPdcpRrcMsg, Wrong req_id[0x%x]
Line 2401: RB_ID[%d]LTE_L2HRX_L2HRX_STATUS_PROHIBIT_TMR_EX_IND
Line 2404: RB_ID[%d]L2RXRLC TASK 3 :NO ACTIVE[%d]
Line 2459: LTE_L2HRX_L2LRX_RESET_IND, invalid resetCause[%d]
Line 2472: Fail pal_Malloc and Fail Send NRPDCP_L2HRX_LTE_DL_RESET_REQ
Line 2478: [LTE_L2RX] Send NRPDCP_L2HRX_LTE_DL_RESET_REQ
Line 2502: Fail pal_Malloc and Fail Send NRPDCP_L2HRX_LTE_DL_RELEASE_REQ
Line 2508: [LTE_L2RX] Send NRPDCP_L2HRX_LTE_DL_RELEASE_REQ
Line 2873: LTE_SendL2HRXMsgToL2 Fail msgid[%x]!!!
Line 2943: LTE_SendL2HRXMsgToRRC : pal_MsgSendTo Fail msgid[%x] iNumMsg(%d)!!!
Line 2970: LTE_SendL2HRXMsgToRRC : pal_MsgSendTo Fail msgid[%x]!!!
Line 2984: LTE_SendL2HRXMsgToRRC : pal_SmSetEvents Fail msgid[%x]!!!
Line 3025: [LTE_L2RX] LTE_SendL2HRXMsgToSmpfPdcp Send Fail!! (rst=%d)
Line 3080: LTE_SendL2HRXMsgToL1LC Fail !!!
Line 3108: Not Send L2HRX_L1LC_RX_REQ (WatiCmd %d,CurCmd:%d)
Line 3113: [L2RX => L1LC] Send L2HRX_L1LC_RX_REQ (Cmd:%d)
Line 3120: Cannot Allocate L2HRX_L1LC_RX_REQ
Line 3302: LTE_ProcL2HRxWaitChangeCore : pal_SmRetrieveEvents Error
Line 1555: RB_ID[%d]L2HRXRLC_ProcT1TmrExIndMsg
Line 1571: RB_ID[%d]L2RXRLC TASK 2:NO ACTIVE[%d]
Line 1601: [NB-IoT] : RB_ID[%d] Skip RLC STATUS by enableStatusReportSNGap FALSE!
Line 1636: Fail pal_Malloc and Fail Send LTE_L2LTX_L2HTX_SRI_REQ!!! 
Line 708: L2HRX_ResetFullConfig(%d)
Line 917: L2HRX_DRBRelease
Line 1738: [RLCRX][ENTITY:_][DRBID:_] : Rxed L2HRX_NRPDCP_NR_DL_FLUSH_LTE_RLC_IND
Line 1754: [LTE_L2RX] Receive L2HRX_NRPDCP_RB_CHANGE_IND, StackId[%d]
Line 1758: Fail pal_Malloc and Fail Send L2HRX_NRPDCP_RB_CHANGE_IND!!!
Line 1772: [LTE_L2RX] Receive L2HRX_NRPDCP_NR_DL_BEARER_RESUME_CNF
Line 1785: RRC_PDCP_RESUME_CNF malloc fail
Line 1799: [LTE_L2RX] Receive L2HRX_NRPDCP_NR_DL_CONFIG_CNF
Line 1807: RRC_PDCP_CONFIG_CNF malloc fail
Line 1843: [LTE_L2RX] Send LTE_CPDCP_DL_CONFIG_CNF
Line 1848: [ERROR][LTE_L2RX] LTE_CPDCP_DL_CONFIG_CNF malloc Fail
Line 1855: [LTE_L2RX] Receive L2HRX_NRPDCP_NR_DL_RELEASE_CNF
Line 1861: [LTE_L2RX] Receive L2HRX_NRPDCP_NR_DL_RESET_CNF cause(%d)
Line 1866: [NB-IOT][LTE_L2RX] L2HRX_NRPDCP_NR_DL_RESET_CNF SKIP !!!
Line 1891: RRC_PDCP_SECURITY_CONFIG_CNF malloc fail
Line 1903: [LTE_L2RX] Receive L2HRX_NRPDCP_NR_DL_SECURITY_CONFIG_CNF
Line 1910: [LTE_L2RX] Send LTE_CPDCP_DL_SECURITY_CONFIG_CNF
Line 1915: [ERROR][LTE_L2RX] LTE_CPDCP_DL_SECURITY_CONFIG_CNF malloc Fail
Line 1934: RRC_PDCP_DATA_IND malloc fail
Line 1942: RRC_PDCP_DATA_IND Invalid Data
Line 1953: [NB-IoT] Send RRC_PDCP_DATA_IND! usRbId(%d) usPacketLength(%d) StackId(%d)
Line 1963: [LTE_L2RX] Receive L2HRX_NRPDCP_DL_DATA_IND usRbId(%d) StackId(%d)
Line 1967: [ERROR][LTE_L2RX] LTE_PDCP_DATA_IND malloc Fail
Line 1975: [ERROR][LTE_L2RX] LTE_PDCP_DATA_IND Invalid Data
Line 1986: [LTE_L2RX] Send LTE_PDCP_DATA_IND! usRbId(%d) usPacketLength(%d) StackId(%d)
Line 2007: RRC_PDCP_SECURITY_DATA_IND malloc fail
Line 2015: RRC_PDCP_SECURITY_DATA_IND Invalid Data
Line 2026: [NB-IoT] Send RRC_PDCP_SECURITY_DATA_IND! usRbId(%d) usPacketLength(%d) StackId(%d)
Line 2036: [LTE_L2RX] Receive L2HRX_NRPDCP_DL_SECURITY_DATA_IND
Line 2040: LTE_PDCP_SECURITY_DATA_IND malloc Fail
Line 2048: LTE_PDCP_SECURITY_DATA_IND Invalid Data
Line 2059: [LTE_L2RX] Send LTE_PDCP_SECURITY_DATA_IND! usRbId(%d) usPacketLength(%d) StackId(%d)
Line 2078: RRC_PDCP_INTEGRITY_CHECK_FAILED_IND malloc fail
Line 2084: [NB-IoT] Send RRC_PDCP_INTEGRITY_CHECK_FAILED_IND!
Line 2093: [LTE_L2RX] Receive L2HRX_NRPDCP_DL_INTEGRITY_CHECK_FAIL_IND
Line 2098: LTE_PDCP_INTEGRITY_CHECK_FAILED_IND malloc Fail
Line 2104: [LTE_L2RX] Send LTE_PDCP_INTEGRITY_CHECK_FAILED_IND
Line 2119: RRC_PDCP_INTEGRITY_CHECK_CNF malloc fail
Line 2126: [NB-IoT] Send RRC_PDCP_INTEGRITY_CHECK_CNF! result(%d)
Line 2135: [LTE_L2RX] Receive L2HRX_NRPDCP_DL_INTEGRITY_CHECK_CNF
Line 2140: LTE_PDCP_INTEGRITY_CHECK_FAILED_IND malloc Fail
Line 2147: [LTE_L2RX] Send LTE_CPDCP_INTEGRITY_CHECK_CNF! result(%d)
Line 1207: L2RX PDCP Rxed L2HRX_L1LC_RX_CNF
Line 1212: Fail pal_Malloc and Fail Send NRPDCP_L2HRX_L1LC_RX_CNF
Line 2282: LTE_ProcL2HTxMsg, pMsg is NULL
Line 2289: LTE_ProcL2HTxMsg, Wrong msg_id[0x%x]
