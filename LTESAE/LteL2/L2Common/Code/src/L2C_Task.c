Line 544: Fail to Send LTE_SendL2MsgToL2C[%x]
Line 1079: [L2C] L2C_FlushPendMsg_SendCnf : eCfgType[%d]
Line 1215: [Multicore][L2C] L2C TASK ENTRY
Line 1060: [L2C] RRC Msg storage is empty, Init RD, WR
Line 1116: [L2C] L2C_ProcRrcCfgReqQueue, ProcReqStatus[0x%x], bFlushPendMsg[%d]
Line 1117: [L2C] RD[0x%x] WR[0x%x]
Line 1120: [L2C] No new data in queue
Line 1121: [L2C] Queue RD_Idx = Queue WR_Idx = 0
Line 1132: [L2C] L2C_ProcRrcCfgReqQueue, lock ProcReqStatus[0x%x]
Line 1178: [L2C] RrcCfgType[0x%x], Wrong Req_Id [0x%x] 
Line 566: [L2C] L2C_ConfigRlcUl, CfgType[0x%x]
Line 572: [L2C] LTE_L2C_CONFIG_REQ
Line 577: [Multicore][L2C] L2C_ConfigRlcUl, failed to send internal msg
Line 647: [Multicore][L2C] L2C_ConfigPdcpUl, CfgType[0x%x]
Line 653: [L2C] L2C_ConfigPdcpUl, LTE_CPDCP_UL_CONFIG_REQ
Line 658: [L2C] L2C_ConfigPdcpUl, failed to send internal msg
Line 729: [L2C] L2C_ConfigMacUl, CfgType[0x%x]
Line 738: [L2C] L2C_ConfigMacUl, LTE_CMAC_UL_RESET_REQ
Line 742: [L2C] L2C_ConfigMacUl, LTE_CMAC_UL_CONFIG_REQ
Line 748: [L2C] L2C_ConfigMacUl, msg send fail
Line 756: [L2C] L2C_ConfigMacUl, Wrong CfgType[0x%x]
Line 827: [L2C] L2C_ConfigPhyUl, CfgType[0x%x]
Line 832: [L2C] L2C_ConfigPhyUl, LTE_CPHY_TX_CONFIG_REQ
Line 838: [L2C] L2C_ConfigPhyUl, LTE_CPHY_TX_SYNC_CONFIG_REQ
Line 842: [L2C] L2C_ConfigPhyUl, Wrong CfgType[0x%x]
Line 848: [L2C] L2C_ConfigPhyUl, failed to send internal msg
Line 606: [L2C] L2C_ConfigRlcDl, CfgType[0x%x]
Line 612: [L2C] L2C_ConfigRlcDl, LTE_CRLC_DL_CONFIG_REQ
Line 617: [L2C] L2C_ConfigRlcDl, failed to send internal msg
Line 688: [L2C] L2C_ConfigPdcpDl, CfgType[0x%x]
Line 694: [L2C] L2C_ConfigPdcpDl, LTE_CPDCP_DL_CONFIG_REQ
Line 699: [L2C] L2C_ConfigPdcpDl, failed to send internal msg
Line 778: [L2C] L2C_ConfigMacDl, CfgType[0x%x]
Line 787: [L2C] L2C_ConfigMacDl, LTE_CMAC_DL_RESET_REQ
Line 791: [L2C] L2C_ConfigMacDl, LTE_CMAC_DL_CONFIG_REQ
Line 797: [L2C] L2C_ConfigMacDl, failed to send internal msg
Line 805: [L2C] L2C_ConfigMacDl, Wrong CfgType[0x%x]
Line 870: [L2C] L2C_ConfigPhyDl, CfgType[0x%x]
Line 875: [L2C] L2C_ConfigPhyDl, LTE_CPHY_RX_CONFIG_REQ
Line 885: [L2C] L2C_ConfigPhyDl, failed to send internal msg
Line 1283: [L2C] L2C_ProcRrcMsg, Recv msg is NULL!
Line 1288: [L2C] L2C_ProcRrcMsg, req_id[0x%x]
Line 1370: [L2C] Invalid req_id[%d]
Line 1010: [L2C] Skip gRxL2CRecvRrcCfgReqQ FULL !!!!
Line 148: [L2C] Received msg from L1TX
Line 152: [L2C <= L1TX] LTE_CRLC_UL_CONFIG_CNF : Result [%d] 
Line 176: [L2C <= L1TX] LTE_CMAC_UL_CONFIG_CNF : Result [%d/%d] 
Line 197: [L2C <= L1TX] LTE_CPHY_TX_CONFIG_CNF : Result [%d] 
Line 216: [L2C <= L1TX] LTE_CPHY_TX_SYNC_CONFIG_CNF : Result [%d] 
Line 266: [L2C] Received msg from L1RX
Line 270: [L2C <= L1RX] LTE_CMAC_DL_CONFIG_CNF : Result [%d] 
Line 291: [L2C <= L1RX] LTE_CPHY_RX_CONFIG_CNF : Result [%d] 
Line 343: [L2C] Received msg from L2TX
Line 347: [L2C <= L2TX] LTE_CPDCP_UL_RESET_CNF : Result [%d] 
Line 366: [L2C <= L2TX] LTE_CPDCP_UL_CONFIG_CNF : Result [%d] 
Line 386: [L2C <= L2TX] LTE_CPDCP_UL_RELEASE_ALL_CNF
Line 423: [L2C] Received msg from L2RX
Line 427: [L2C <= L2RX] LTE_CPDCP_DL_RESET_CNF : Result [%d] 
Line 446: [L2C <= L2RX] LTE_CRLC_DL_CONFIG_CNF : Result [%d] 
Line 467: [L2C <= L2RX] LTE_CPDCP_DL_CONFIG_CNF : Result [%d] 
Line 1393: [L2C] LTE_ProcNBRrcMsg, Recv msg is NULL!
Line 1433: [NB-IoT] Send LTE_L2HTX_L2LTX_PDCP_TX_SUSPEND_REQ ReqType[%d]
Line 1455: [NB-IoT] Send LTE_L2HTX_L2LTX_PDCP_TX_SUSPEND_REQ ReqType[%d]
Line 1491: [NB-IoT] Send LTE_L2HTX_L2LTX_PDCP_TX_SUSPEND_REQ ReqType[%d]
Line 1544: [NB-IoT] Trigger RA-SR: gCurrentMACStatus(%d) after NTN UL sync restore
Line 1550: [L2C] Invalid NB req_id[%d]
