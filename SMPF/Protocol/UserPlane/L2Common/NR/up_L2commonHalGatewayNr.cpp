Line 211: [L2HAL_GATEWAY] AllocExtCmdMemoryManually() Start! extCmdId(%d)
Line 260: [L2HAL_GATEWAY] AllocExtCmdReq (LMAC_RX_TRS_DONE_NR_CMD)!
Line 274: [L2HAL_GATEWAY] AllocExtCmdReq (LMAC_RX_PARSER_DONE_NR_CMD)!
Line 288: [L2HAL_GATEWAY] AllocExtCmdReq (LMAC_RX_PARSER_DONE_C1_NR_CMD)!
Line 305: [ERROR][L2HAL_GATEWAY] unknown extCmdId(%d)
Line 315: [L2HAL_GATEWAY] RunExtCmd() Start! extCmdId(%d)
Line 325: [L2HAL_GATEWAY] SendExtCmd (LMAC_RX_TRS_DONE_NR_CMD)!
Line 337: [L2HAL_GATEWAY] SendExtCmd (LMAC_RX_PARSER_DONE_NR_CMD)!
Line 349: [L2HAL_GATEWAY] SendExtCmd (LMAC_RX_PARSER_DONE_C1_NR_CMD)!
Line 357: [ERROR][L2HAL_GATEWAY] unknown extCmdId(%d)
Line 367: [L2HAL_GATEWAY] FreeExtCmdMemoryManually() Start! extCmdId(%d)
Line 397: [L2HAL_GATEWAY] FreeExtCmdReq (LMAC_RX_TRS_DONE_NR_CMD)!
Line 407: [L2HAL_GATEWAY] FreeExtCmdReq (LMAC_RX_PARSER_DONE_NR_CMD)!
Line 417: [L2HAL_GATEWAY] FreeExtCmdReq (LMAC_RX_PARSER_DONE_C1_NR_CMD)!
Line 430: [ERROR][L2HAL_GATEWAY] unknown extCmdId(%d)
Line 496: [L2HAL_GATEWAY] Multiple DomainType processing (Rcv %d -> Cur %d)
Line 503: [ERROR][L2HAL_GATEWAY] Discard desc! CurDomainType(%d) DSDSPause(ST0:%d ST1:%d) bDiscardAll(%d) RD(%d) WD(%d)
Line 519: [ERROR] Too many MAC PDU at once!
Line 552: [L2HAL_GATEWAY][ERROR] Invalid LCID RBID mapping! LCID[%d]
Line 564: [L2HAL_GATEWAY][ERROR] L2NR_SendRxRlcSdu fail!
Line 579: RD reset by LmacInit!
Line 612: [L2HAL_GATEWAY] Set both DomainType Event! RD(%d) WD(%d)
Line 733:  Clear NotMemFree flag(%d) LCID(%d)
Line 748: [L2ExtCmd][ERROR] Add pending extCmdQ fail! CurDomainType(%d)
Line 754: [ERROR][L2ExtCmd] ExtCmdPendPool is full! discard this ExeCmd! extCmdId(%u)
Line 765: [ERROR][L2ExtCmd] Push ExtCmd pending queue fail! dataLength is over maximum size! dataLength(%u)
Line 784: [L2ExtCmd] Push ExtCmd pending queue! extCmdId(%u) _ExtCmdPendIndex(%u) dataLength(%d) CurDomainType(%d)
Line 794: [L2ExtCmd][ERROR] Flush ExtCmd pending Q fail! CurDomainType(%d)
Line 798: [L2ExtCmd] Flush ExtCmd pending queue! Q size(%u) CurDomainType(%d)
Line 807: [L2ExtCmd][ERROR] pendingItem is nullptr!
Line 861: [L2ExtCmd] Modem not active state! ExtCmd(%d) CurDomainType(%d) mbusState(%d)
Line 865: [L2ExtCmd] Pending CMD!
Line 870: [L2ExtCmd] Discard CMD!
Line 917: [L2ExtCmd] L2ExtCmdSend() Start! extCmdId(%u) dataLength(%d) CurDomainType(%d)
Line 961: [L2ExtCmd] LMAC_RX_RLCCONFIG_SET_NR_CMD! 
Line 977: [L2ExtCmd] LMAC_RX_OPER_MODE_SET_NR_CMD! 
Line 998: [L2ExtCmd] LMAC_INIT_NR_CMD!
Line 1009: [L2ExtCmd] LMAC_RX_POLLING_START_NR_CMD!
Line 1020: [L2ExtCmd] LMAC_RX_POLLING_STOP_NR_CMD!
Line 1040: [L2ExtCmd] LMAC_NRL2_CONFIG_STATE_NR_CMD! DomainType(%d) configState(%d)
Line 1058: [L2ExtCmd] LMAC_PDCP_CONFIG_NR_CMD! DomainType(%d) pdcpRbType(%d) lcId(%d) pdcpSnSize(0x%x) cellGroup(%d) sdapHdrUse(%d)
Line 1076: [L2ExtCmd] LMAC_PDCP_WINDOW_NR_CMD! DomainType(%d) RatType(%d) lcId(%d) pdcpSnSize(%d) cellGroup(%d) rxMinValue(%d)
Line 1091: [L2ExtCmd] LMAC_TTI_TX_MODE_NR_CMD! DomainType(%d) bFr2On(%d) bNrDc(%d)
Line 1098: [L2ExtCmd][ERROR] unknown extCmdId!
Line 1115: [L2ExtCmd][ERROR] SendExtCmd Fail! res = %d
Line 1137: [L2ExtCmd][LTE] L2ExtCmdSend() Start! extCmdId(%u) CurDomainType(%d)
Line 1150: [L2HAL][ERROR] Sending LMAC_TX_TRS_START_NR_CMD Fail! res = %d
Line 1162: [ERROR][L2IPC] domainType(%d) is out of range!
Line 1168: [ERROR][L2IPC] macEntity(%d) is out of range!
Line 1172: [L2IPC] FlushL2IpcPendQueue() queue size(%u) domainType(%d) macEntity(%d)
Line 1181: [L2IPC][ERROR] m_tL2IpcPendQueue.front() is nullptr!
Line 1216: [ERROR][L2IPC] CurDomainType(%d) is out of range! domainType(%d)
Line 1222: [ERROR][L2IPC] macEntity(%d) is out of range! CurDomainType(%d)
Line 1228: [L2IPC] LCPU power domain is off! Pending this IPC. cmdId(%d) ccBitmap(%d)
Line 1234: [L2IPC] Hpcm owner mask is not NR! Discard this IPC! cmdId(%d) ccBitmap(%d)
Line 1242: [ERROR][L2IPC] IpcPendPool is full! discard this IPC! cmdId(%u)
Line 1249: [ERROR][L2IPC] dataLength is over maximum size! dataLength(%u)
Line 1274: [L2IPC] Push IPC pending queue! cmdId(%u) ccBitmap(%u) dataLength(%u) _IpcPendCount(%u) CurDomainType(%d) macEntity(%d)
Line 1290: [L2IPC] L2IpcSendInternal() Start! cmdId(%u) ccBitmap(%u) CurDomainType(%u) macEntity(%u)
Line 1304: [L2IPC] Sending PHY_L2_SP_ZP_CSIRS_ACT_DEACT_IND
Line 1319: [L2IPC] Sending PHY_L2_PUCCH_SPATIAL_REL_ACT_DEACT_IND
Line 1334: [L2IPC] Sending PHY_L2_SP_SRS_ACT_DEACT_IND
Line 1349: [L2IPC] Sending PHY_L2_SP_CSI_RPT_PUCCH_ACT_DEACT_IND
Line 1364: [L2IPC] Sending PHY_L2_PDCCH_TCI_STATE_IND
Line 1379: [L2IPC] Sending PHY_L2_PDSCH_TCI_STATES_ACT_DEACT_IND
Line 1394: [L2IPC] Sending PHY_L2_A_CSI_TRG_SUBSET_SUBSEL_IND
Line 1409: [L2IPC] Sending PHY_L2_SP_CSIRS_CSIIM_ACT_DEACT_IND
Line 1424: [L2IPC] Sending PHY_L2_TA_CONTROL_IND
Line 1439: [L2IPC] Sending PHY_L2_TA_TIMER_IND
Line 1452: [L2IPC] Sending PHY_L2_MAC_RESET_IND
Line 1467: [L2IPC] Sending PHY_L2_RACH_MSG3_CONFIG_IND
Line 1483: [L2IPC] Sending PHY_L2_MAC_RACH_CONTROL_IND
Line 1499: [L2IPC] Sending PHY_L2_RNTI_CONTROL_IND
Line 1514: [L2IPC] Sending PHY_L2_SRI_ON_IND
Line 1529: [L2IPC] Sending PHY_L2_PUCCH_SRS_RELEASE_IND
Line 1544: [L2IPC] Sending PHY_L2_UE_BEAMLOCK_IND
Line 1551: [ERROR][L2IPC] invalid command [0x%x]
Line 1609: [CDRX] SetDrxSleepVariables! CurTime(%u) SleepDur(%d) DrxType(%d) TargetSubFrame(%d) MinTxSet(%d) DefaultBwpIatTime(%d)
Line 1610: [CDRX] SetDrxSleepVariables! m_uCdrxConfirmRetryCount(%u) DomainType(%d) CellGrpId(%d)
Line 1614: [CDRX] Create m_CdrxConfirmRetryTimer
Line 1629: [CDRX] L2 CDRX confirm is running! but receives another CDRX confirm ind!
Line 1650: [ERROR][CDRX] RetryTimer is running! something is wrong!
Line 1660: [CDRX] L2 is running! Start retry timer!
Line 1664: AllocTimerParam failed. CellGrpId(%d)
Line 1691: [CDRX] L2 is free! Sending L1C_L2_DRX_CONFIRM_IND! m_uCdrxVarCurTime(%u) m_uCdrxVarSleepDur(%u) m_uCdrxVarTargetSubFrame(%d) m_uCdrxVarDrxType(%u) m_uCdrxVarMinTxSet(%d) m_uCdrxVarDefaultBwpIatTime(%d)
Line 1692: [CDRX] L2 is free! Sending L1C_L2_DRX_CONFIRM_IND! L2ProcTime(%d) DomainType(%d) CellGrpId(%d)
Line 1696: [L2] Sending L1C_L2_DRX_CONFIRM_IND Fail!
Line 1730: [ERROR][CDRX] Wrong CurDomainType(%d)
Line 1736: [CDRX] Domain[%d] CellGrpId[%d] ModemReqOn is ongoing!
Line 1744: [CDRX] LMAC H/W is running!
Line 1749: [CDRX] LMAC_CIPHER is running!
Line 1756: [CDRX] Domain[%d] CellGrpId[%d] RACH is running!
Line 1764: [CDRX] Domain[%d] CellGrpId[%d] SR_TRIGGERED!
Line 1774: [CDRX] Lmac RX is running
Line 1784: [CDRX][C0] MAC RX is running! RD(%d) WD(%d)
Line 1812: [CDRX] RLC RX is running! index(%u)
Line 1818: [CDRX] RLC RX (Reassemble timer) is running! (%u/%u/%u)
Line 1833: [CDRX] PDCP RX (reordering timer) is running! index(%u)
Line 1842: [CDRX] PDCP RX is running! index(%u)
Line 1851: [CDRX] PDCP RX (LTE path) is running! index(%u)
Line 1867: [CDRX] Cancel CDRX Confirm procedure!
Line 1897: [CDRX] Cdrx Confirm timer expired! m_uCdrxConfirmRetryCount(%d) m_bCdrxConfirmRunning(%d) DomainType(%d) CellGrpId(%d)
Line 1903: [CDRX] Reaching maximum CDRX_CONFIRM retry count! Don't retry anymore
Line 1995: [PktProc][WARNING] Discard requested data (Already started)
Line 1999: [PktProc][WARNING] Discard requested data (DSDS PAUSE RAT(%d))
Line 2061: [ERROR] pSecurityDl is null during NrStartPktProc!
Line 2074: [L2OD] Send PrePktProc Event! GetDcpEnqueuedNum(%d)
Line 2077: [ERROR] SetEvent fail!
Line 2085: [PktProc][ERROR] Failed to acquire Cmd
