Line 183: [L2C] LTE_ProcL2HTxPdcpL2CMsg, pMsg is NULL
Line 196: Fail pal_Malloc and Fail Send NRPDCP_L2HTX_LTE_UL_CONFIG_REQ
Line 203: [LTE_L2TX] Send NRPDCP_L2HTX_LTE_UL_CONFIG_REQ
Line 208: [L2C] LTE_ProcL2HTxPdcpL2CMsg, Wrong req_id[0x%x]
Line 227: [MULTICORE] RB_ID[%d] L2HTXPDCP_ProcDiscardRRCQInd: pStartSduDesc[0x%x] pEndSduDesc[0x%x] SduCnt[%d]
Line 235: [MULTICORE] RB_ID[%d] L2HTXPDCP_ProcDiscardRRCQInd: Push to TxDiscardDataQ head[0x%x] tail[0x%x] Cnt[%d]
Line 260: [MULTICORE] RB_ID[%d] L2HTXPDCP_ProcDiscardQInd: pStartSduDesc[0x%x] pEndSduDesc[0x%x] SduCnt[%d] bSlSdu[%d]
Line 280: [MULTICORE] RB_ID[%d] L2HTXPDCP_ProcDiscardQInd: ERROR!! bSlSdu[%d]
Line 293: [MULTICORE] RB_ID[%d] L2HTXPDCP_ProcDiscardQInd: Push to TxDiscardDataQ head[0x%x] tail[0x%x] Cnt[%d]
Line 322: LTE_SendL2HTXMsgToL2LTX: msgId[%x]. pMsg[%x]
Line 345: Fail LTE_SendL2HTXMsgToL2LTX [%x]
Line 379: [LTE_L2TX] LTE_SendL2HTXMsgToSmpfPdcp Send Fail!! unknown msgId(%d)
Line 392: [LTE_L2TX] LTE_SendL2HTXMsgToSmpfPdcp Send Fail!! (rst=%d)
Line 405: [MULTICORE] RB_ID[%d]pal_Malloc Fail
Line 418: [MULTICORE] RB_ID[%d]pal_Malloc Fail
Line 427: [MULTICORE] RB_ID[%d] L2HTXPDCP_SendPdcpStatusToL2LTX: pCtlPdu[0x%x] CtlPduSize[%d] FMC[%d] PdcpSnSz[%d] 
Line 435: [MULTICORE] pal_Malloc fail L2HTXPDCP_SendRlcTxActiveInd
Line 444: [MULTICORE] RB_ID[%d] L2HTXPDCP_SendRlcTxActiveInd
Line 583: [L2C] RawData : 
Line 586: L2HTX_ReportL2CMetric : EPS[%d], RxByte[%llu]/TxByte[%llu], Dlduration[%d]/DlZeroduration[%d], ULduration[%d]/UlZeroduration[%d]
Line 643: L1TX_L2CTxUpdateTimerExpired : appTimerID[%d],EPSID[%d], dwTxByte[%d], qwTxByteCount[%lld]
Line 702: [PDCPTX][DRBID:%d][CONFIG] Rxed RBINFO, L2HTX_NRPDCP_LTE_RRE_REQ
Line 709: [PDCPTX][DRBID:%d][CONFIG] Rxed RBINFO, L2HTX_NRPDCP_LOCAL_RELEASE_REQ
Line 714: [PDCPTX][DRBID:%d][CONFIG] Rxed RBINFO, IsLteRrre[%d]
Line 728: [ERROR][PDCPTX][ENTITY:%d][CONTROL PDU] Inalid Entity ID
Line 735: [ERROR][PDCPTX][ENTITY:%d][CONTROL PDU] NRL2 MSG, malloc fail-1
Line 744: [ERROR][PDCPTX][ENTITY:%d][CONTROL PDU] NRL2 MSG, malloc fail-2
Line 758: [WARNING][PDCPTX][ENTITY:%d][CONTROL PDU] BitmapLen==0
Line 775: [PDCPTX][ENTITY:%d][CONTROL PDU] NRL2 MSG, FMC[%d] Size[%d] BIT-MAP[%08x_%08x]
Line 787: [LTE_L2TX] L2HTXPDCP_ReqeustLteMaxBsiByNR : StackId[%d] status[%d]
Line 818: send LTE_CPDCP_UL_ENDC_RESET_CNF
Line 827: Fail pal_Malloc and Fail Send LTE_CPDCP_UL_ENDC_RESET_CNF!!!
Line 1129: LTE_PDCP_UL_BEARER_RESUME_REQ : LTE_RB_SRB1
Line 1136: LTE_PDCP_UL_BEARER_RESUME_REQ : LTE_RB_OTHER
Line 1149: LTE_PDCP_UL_BEARER_RESUME_REQ : LTE_RB_HO_ALL
Line 1161: LTE_PDCP_UL_BEARER_RESUME_REQ : LTE_RB_SCG
Line 1930: Fail LTE_SendL2HTXMsgToL2 [%x]
Line 2095: Not Send L2HTX_L1LC_TX_REQ (WatiCmd %d/%d,CurCmd:%d, bIsSidOnly=%d)
Line 2106: [L2HTX => L1LC] Send L2TX_L1LC_TX_REQ (Cmd:%d, bIsSidOnly=%d)
Line 2114: Cannot Allocate Message buffer
Line 2292: [L2TX] LTE_ProcL2HTxResetQtmStats : Reset LTE Qtm Stats
Line 2311: [L2TX] LTE_ProcL2HTxResetQtmStats : Invalid SatckId:%d
Line 2329: [L2TX] L2HTX_GetLteQosAvgTxLatencyData : Invalid SatckId:%d
Line 2335: [L2TX] L2HTX_GetLteQosAvgTxLatencyData : Invalid Drb Id:%d
Line 2341: [L2TX] L2HTX_GetLteQosAvgTxLatencyData : Invalid latency type:%d
Line 2365: [L2TX] L2HTX_GetLteQosActiveDrbMask : Invalid SatckId:%d
Line 2376: [L2TX] L2HTX_SetLteQosTxLatencyData : Invalid SatckId:%d
Line 2382: [L2TX] L2HTX_SetLteQosTxLatencyData : Invalid Drb Id:%d
Line 2388: [L2TX] L2HTX_SetLteQosTxLatencyData : Invalid latency type:%d
Line 2408: [L2TX] L2HTX_SetLteQosActiveDrbMask : Invalid SatckId:%d
Line 528: Discard_PDCP ACKED PDU_Count[%d]
Line 617: Malloc Fail LTE_L2HTX_L2HTX_L2CTXTIMER_EXPIRED_IND
Line 1482: [LTE_L2TX] Receive L2HTX_NRPDCP_NR_COUNT_VALUE_CNF
Line 1489: [ERROR][PDCPTX] L2HTX_NRPDCP_NR_COUNT_VALUE_CNF : no_of_rbs[%d]
Line 1502: [L2 DEBUG] index(%d/%d) drb_identity(%d) ul_count(%d) dl_count(%d)
Line 1504: [LTE_L2TX] Send LTE_PDCP_COUNT_VALUE_RSP
Line 1508: [ERROR][LTE_L2TX] LTE_PDCP_COUNT_VALUE_RSP malloc Fail
Line 1518: [LTE_L2TX] Receive L2HTX_NRPDCP_NR_UL_BEARER_RESUME_CNF
Line 1523: [LTE_L2TX] Receive L2HTX_NRPDCP_NR_UL_CONFIG_CNF
Line 1528: [NB-IOT][LTE_L2TX] LTE_CPDCP_UL_CONFIG_CNF SKIP !!!
Line 1556: [LTE_L2TX] Send LTE_CPDCP_UL_CONFIG_CNF
Line 1561: [ERROR][LTE_L2TX] LTE_CPDCP_UL_CONFIG_CNF malloc Fail
Line 1568: [LTE_L2TX] Receive L2HTX_NRPDCP_NR_UL_RELEASE_CNF
Line 1576: RRC_PDCP_RELASE_CNF malloc fail
Line 1593: [LTE_L2TX] Send LTE_CPDCP_UL_RELEASE_ALL_CNF
Line 1598: [ERROR][LTE_L2TX] LTE_CPDCP_UL_RELEASE_ALL_CNF malloc Fail
Line 1605: [LTE_L2TX] Receive L2HTX_NRPDCP_NR_UL_RESET_CNF cause(%d)
Line 1613: RRC_MAC_RESET_CNF malloc fail
Line 1643: [LTE_L2TX] Send LTE_CPDCP_UL_RESET_CNF
Line 1656: [ERROR][LTE_L2TX] LTE_CPDCP_UL_RESET_CNF malloc Fail
Line 1672: [NB-IOT][LTE_L2TX] RRC_PDCP_SECURITY_CONFIG_CNF SKIP !!!
Line 1678: [LTE_L2TX] Receive L2HTX_NRPDCP_NR_UL_SECURITY_CONFIG_CNF
Line 1685: [LTE_L2TX] Send LTE_CPDCP_UL_SECURITY_CONFIG_CNF
Line 1690: [ERROR][LTE_L2TX] LTE_CPDCP_UL_SECURITY_CONFIG_CNF malloc Fail
Line 1698: [LTE_L2TX] Receive L2HTX_NRPDCP_NR_UL_SUSPEND_CNF
Line 1708: [LTE_L2TX] Send LTE_L2LTX_L2HTX_PDCP_TX_SUSPEND_CNF
Line 1713: [ERROR][LTE_L2TX] LTE_L2LTX_L2HTX_PDCP_TX_SUSPEND_CNF malloc fail
Line 1209: L2TX PDCP Rxed LTE_PDCP_COUNT_VALUE_REQ Msg
Line 1213: [LTE_L2TX] Send NRPDCP_L2HTX_LTE_COUNT_VALUE_REQ
Line 1222: Fail pal_Malloc and Fail Send NRPDCP_L2HTX_LTE_UL_SECURITY_CONFIG_REQ
Line 1229: [LTE_L2TX] Send NRPDCP_L2HTX_LTE_UL_SECURITY_CONFIG_REQ
Line 1247: [LTE_L2TX] Receive LTE_PDCP_DATA_REQ : usRbId[%d] usPacketLength[%d] bCnfRequired[%d] pdu_ack_id[%d] trigger_rach[%d]
Line 1288: RB_ID[%d]L2TX PDCP Rxed LTE_PDCP_SECURITY_DATA_REQ Msg
Line 1293: Fail pal_Malloc and Fail Send NRPDCP_L2HTX_LTE_SRB_DATA_REQ
Line 1320: Fail pal_Malloc and Fail Send NRPDCP_L2HTX_LTE_UL_BEARER_RESUME_REQ
Line 1326: [LTE_L2TX] Send NRPDCP_L2HTX_LTE_UL_BEARER_RESUME_REQ
Line 880: RB_ID[%d]L2TX PDCP Rxed LTE_PDCP_STATUS_PDU_IND Msg
Line 889: RB_ID[%d] Wrong LTE_PDCP_CTL_PDU_TYPE[%d]
Line 935: Fail pal_Malloc and Fail Send NRPDCP_L2HTX_LTE_UL_RESET_REQ
Line 941: [LTE_L2TX] Send NRPDCP_L2HTX_LTE_UL_RESET_REQ
Line 956: Conv LCID[%d] LTE_L2HTX_L2LTX_RLC_REEST_NTF : bIsReqRbReleaseAdd[%d]
Line 959: LCID[%d] RLC TX Activate due to LTE_L2HTX_L2LTX_RLC_REEST_NTF
Line 975: Fail pal_Malloc and Fail Send NRPDCP_L2HTX_LTE_UL_RELEASE_REQ
Line 981: [LTE_L2TX] Send NRPDCP_L2HTX_LTE_UL_RELEASE_REQ
Line 1004: Fail pal_Malloc and Fail Send NRPDCP_L2HTX_REVERT_DATA_IND
Line 1018: Send NRPDCP_L2HTX_REVERT_DATA_IND : StackId[%d] RB_ID[%d] DrbId[%d]
Line 1034: [MULTICORE] Receive LTE_L2HTX_L2LTX_PDCP_TX_SUSPEND_REQ : StackId[%d]
Line 1039: Fail pal_Malloc and Fail Send NRPDCP_L2HTX_LTE_UL_SUSPEND_REQ
Line 1050: Receive LTE_L2HTX_L2LTX_RB_PRIORITY_IND : StackId[%d] 
Line 1094: L2TX PDCP Rxed L2HTX_L1LC_TX_CNF
Line 1100: Fail pal_Malloc and Fail Send NRPDCP_L2HTX_L1LC_TX_CNF
