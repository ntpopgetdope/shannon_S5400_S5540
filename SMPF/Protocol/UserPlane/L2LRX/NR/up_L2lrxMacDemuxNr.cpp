Line 199: [ERROR] Wrong MacEntity(%d)
Line 212: [MCG][L2_MAC_PDU_TP] [%d]kbps, [L2_PADDING_TP] [%d]kbps, [L2_RLC_PDU_TP] [%d]kbps, [L2_MAC_PDU_NUM][%d], [L2_RLC_PDU_NUM][%d],[L2_PDCP_PDU_NUM][%d]
Line 212: [MCG][L2_MAC_PDU_TP] [%d]kbps, [L2_PADDING_TP] [%d]kbps, [L2_RLC_PDU_TP] [%d]kbps, [L2_MAC_PDU_NUM][%d], [L2_RLC_PDU_NUM][%d],[L2_PDCP_PDU_NUM][%d]
Line 214: [MCG][MAC][INVALID_LCID:%d][PARSING_FAIL:%d][DISCARD:%d] [RLC][DUP:%d][OOW:%d][BigGap:%d][StatusQFull:%d]
Line 214: [MCG][MAC][INVALID_LCID:%d][PARSING_FAIL:%d][DISCARD:%d] [RLC][DUP:%d][OOW:%d][BigGap:%d][StatusQFull:%d]
Line 216: [PDCP][PKTPROC_TP:%d(kbps)][DELIV:%d|%d][PKTPROC_START:%d][INVALID_PKT:%d]
Line 216: [PDCP][PKTPROC_TP:%d(kbps)][DELIV:%d|%d][PKTPROC_START:%d][INVALID_PKT:%d]
Line 221: [SCG][L2_MAC_PDU_TP] [%d]kbps, [L2_PADDING_TP] [%d]kbps, [L2_RLC_PDU_TP] [%d]kbps, [L2_MAC_PDU_NUM][%d], [L2_RLC_PDU_NUM][%d],[L2_PDCP_PDU_NUM][%d]
Line 221: [SCG][L2_MAC_PDU_TP] [%d]kbps, [L2_PADDING_TP] [%d]kbps, [L2_RLC_PDU_TP] [%d]kbps, [L2_MAC_PDU_NUM][%d], [L2_RLC_PDU_NUM][%d],[L2_PDCP_PDU_NUM][%d]
Line 223: [SCG][MAC][INVALID_LCID:%d][PARSING_FAIL:%d][DISCARD:%d] [RLC][DUP:%d][OOW:%d][BigGap:%d][StatusQFull:%d]
Line 223: [SCG][MAC][INVALID_LCID:%d][PARSING_FAIL:%d][DISCARD:%d] [RLC][DUP:%d][OOW:%d][BigGap:%d][StatusQFull:%d]
Line 239: [CPU_MIF] PhyMifBoost is On! Set MIF Mid
Line 244: [CPU_MIF] PhyMifBoost is On! Set MIF High
Line 311: L2_L2LMACRX_CLK_CHANGE_IND send fail
Line 352: Tp Timer start failed. MacEntity[%d]
Line 375: [ERROR] wrong input value range! DomainType(%d) CellGrpId(%d)
Line 386: [MCG][L2_MAC_PDU_TP] [%d]kbps, [L2_PADDING_TP] [%d]kbps, [L2_RLC_PDU_TP] [%d]kbps, [L2_MAC_PDU_NUM][%d], [L2_RLC_PDU_NUM][%d],[L2_PDCP_PDU_NUM][%d]
Line 388: [MCG][MAC][INVALID_LCID:%d][PARSING_FAIL:%d][DISCARD:%d] [RLC][DUP:%d][OOW:%d][BigGap:%d][StatusQFull:%d]
Line 393: [SCG][L2_MAC_PDU_TP] [%d]kbps, [L2_PADDING_TP] [%d]kbps, [L2_RLC_PDU_TP] [%d]kbps, [L2_MAC_PDU_NUM][%d], [L2_RLC_PDU_NUM][%d],[L2_PDCP_PDU_NUM][%d]
Line 395: [SCG][MAC][INVALID_LCID:%d][PARSING_FAIL:%d][DISCARD:%d] [RLC][DUP:%d][OOW:%d][BigGap:%d][StatusQFull:%d]
Line 402: [PDCP][PKTPROC_TP:%d(kbps)][DELIV:%d|%d][PKTPROC_START:%d][INVALID_PKT:%d]
Line 426: [MAC_DATA_INACT] MacEntity[%d] gMacDataInactivityCount[%d/%d] g_DtchDcchMacRxCount[%d] g_CcchMacRxCount[%d] g_DtchDcchMacTxCount[%d]
Line 441: L2_L2LMACRX_DATAINACTIVITY_TIMER_EXPIRY_IND send fail
Line 459: [BCCH] Start BCH DUPLICATE CHECK
Line 468: [BCCH] Stop BCH DUPLICATE CHECK
Line 487: L2LRXMAC_ReleaseRLCPDUDesc : nullptr == pRlcPduDesc
Line 519: L2LRXMAC_ReleaseRLCPDUDesc : nullptr pRlcPduDescStart(0x%X), pRlcPduDescEnd(0x%X)
Line 560:  InitRlcPduTable[%d/%d]
Line 565:  InitRlcPduTable[%d/%d] done
Line 609: Ta Timer created
Line 652: [ERROR] L2LRXMAC_ProcMACPDU : pMacPduInfo is NULL
Line 666: L2LRXMAC_ProcMACPDU : DSDS Pause[%d]
Line 685: [ERROR] L2LRXMAC_ProcMACPDU : pMacPduInfo->PduAddr is NULL
Line 729: [ERROR] invlid dataType(%u) received!
Line 757: [%02d][ERROR] sub-header's RR not zero
Line 798: [%02d][ERROR] Discard rest of this Mac Pdu! (Mac Sdu size(%d) is larger than Mac Pdu size(%d))
Line 821: [%02d][ERROR] lengthField=0
Line 837: [%02d][ERROR] lengthField=0
Line 933: [%02d][ERROR] lengthField=0
Line 949: [%02d][ERROR] Invalid LCID [%d]
Line 980: [%02d][ERROR] Invalid ccch length[%d]
Line 984: [%02d] CR success. Process CCCH MAC PDU
Line 992: [ERROR] AllocMsg fail!
Line 1007: [ERROR] AllocMsgBodyElem fail!
Line 1017: [%02d][CCCH] RbId(%d) Length(%u) pString(0x%x) First two bytes(0x%x 0x%x)
Line 1021: [ERROR] SendMsg fail!
Line 1033: [WARN] CR fail. MSG4 include CCCH MAC PDU and no include UE_CR_ID, Discard CCCH MAC PDU, RACH going on
Line 1045: L2LMACRACH_L2LMACRX_CR_IND send fail! contResolved(0)
Line 1051: [ERROR] CR fail. Discard CCCH MAC PDU
Line 1064: [%02d][ERROR] Invalid LCID RBID mapping! LCID[%d], RBID[%d]
Line 1103: [L2LRX][ERROR] L2NR_SendRxRlcSdu fail!
Line 1146: [%02d][ERROR] macSduLength[%d] is over max mac-ce length
Line 1156: [%02d][ERROR] m_bMacSduRcvd[%d], g_uMacCePduCount[%d]
Line 1169: [%02d][ERROR] Invalid Lcid:%d, g_uMacLcidInvalidPduCount[%d]
Line 1184: [%02d][ERROR] Rlc Pdu queue full! Discard this PDU. g_RlcPduTableWd(%d),  g_RlcPduTableRd(%d)
Line 1194: [ERROR] UF is already true! g_RlcPduTableWd(%d)
Line 1234: [ERROR] wrong CPT(%d)
Line 1254: [ERROR] Parse AMD fail!
Line 1276: [ERROR] Parse UMD fail!
Line 1289: [ERROR] Invalid RLC mode(%d)!
Line 1317: [ERROR] pRlcPdu is null
Line 1333: [ERROR] R-field != 0 (0x%02x)
Line 1364: [ERROR] wrong SnFieldLength(%u)
Line 1410: [ERROR] pRlcPdu is null
Line 1418: [ERROR] macSduLength = %d
Line 1452: [ERROR] wrong SnFieldLength(%u)
Line 1500: [%02d] Ignore Mac PDU
Line 1513: [%02d][ERROR] RLC descriptor full
Line 1521: [%02d][ERROR] PduAddr is null
Line 1624: [%2d][ERROR] SizeMismatch !! MacEntity:%d, PduSize:%d, headerSize:%d, payloadSize:%d
Line 1651: [%02d][ERROR] Wrong Rnti(%d)!
Line 1659: [%02d] RbId(%d) Length(%u) pString(0x%x) First two bytes(0x%x 0x%x)
Line 1664: [ERROR] Discard. PduSize(%d) is Invalid! m_DomainType(%d) DCSCG_ind(%d)
Line 1670: [%02d][BCCH] Checking Duplicated BCCH! m_LastRcvBchSize(%d) LastRcvPayload(0x%x 0x%x...)
Line 1674: [%02d][ERROR][BCCH] PduSize is too big!
Line 1680: [%02d][BCCH] Same SIB! Discard this msg!
Line 1695: [%02d][BCCH] Updated! m_LastRcvBchSize(%d) LastRcvPayload(0x%x 0x%x...)
Line 1701: [ERROR] Sending L2_L2LMACRX_DATA_IND Fail
Line 1737: [%02d][MSG2] ptr[0x%x], size[%d]
Line 1752: [%02d][MSG2] subheader : E[%d], T[%d], RAPID[%d]
Line 1756: [%02d][MSG2] RAPID matched!!! : Sent[%d], Received[%d]
Line 1756: [%02d][MSG2] RAPID matched!!! : Sent[%d], Received[%d]
Line 1778: [%02d][MSG2] PreambleDiff[%d] recalculated with NrRachNumCyclicShift[%d]
Line 1781: [%02d][MSG2] RAPID mis-matched!!! : Sent[%d], Received[%d], Diff[%d]
Line 1785: [%02d][MSG2][Not Handle] RAPID mis-matched!!! : Sent[%d], Received[%d], NumPreamble[%d] created by same root sequence
Line 1788: [%02d][MSG2] RAPID mis-matched!!! : Sent[%d], Received[%d], Diff[%d]
Line 1788: [%02d][MSG2] RAPID mis-matched!!! : Sent[%d], Received[%d], Diff[%d]
Line 1823: [%02d][MSG2] RAR forced accept !!!! : MismatchPattern[%d], MismatchCnt[%d]
Line 1823: [%02d][MSG2] RAR forced accept !!!! : MismatchPattern[%d], MismatchCnt[%d]
Line 1843: |UE <- gNB| MSG2 : RAR (m_DomainType[%d], MacEntity[%d], UlSync[%d], RAPID[%d], TA[%d], TC-RNTI[%d])
Line 1843: |UE <- gNB| MSG2 : RAR (m_DomainType[%d], MacEntity[%d], UlSync[%d], RAPID[%d], TA[%d], TC-RNTI[%d])
Line 1844: [MSG2] m3 grant : HopFlag[%d], FreqAlloc[%d], TimeAlloc[%d], Mcs[%d], Tpc[%d], CsiReq[%d]
Line 1848: |UE <- gNB| MSG2 : RAPID only (MacEntity[%d], UlSync[%d], RAPID[%d])
Line 1848: |UE <- gNB| MSG2 : RAPID only (MacEntity[%d], UlSync[%d], RAPID[%d])
Line 1870: [%02d][MSG2] subheader RR is not zero !! : E[%d], T[%d], RR[%d]
Line 1877: [%02d][MSG2] subheader : E[%d], T[%d], BI[%d]
Line 1877: [%02d][MSG2] subheader : E[%d], T[%d], BI[%d]
Line 1918: [%02d][MSG2] L2LMACRACH_L2LMACRX_RAR_IND send fail
Line 1961: [%02d][MSGB] ptr[0x%x], size[%d]
Line 1977: [%02d][MSGB fallback RAR] MAC PDU size up to this point: current[%d], total[%d]
Line 1981: [MSGB] RAPID matched!!! : Sent[%d], Received[%d]
Line 1981: [MSGB] RAPID matched!!! : Sent[%d], Received[%d]
Line 2003: [MSGB] PreambleDiff[%d] recalculated with NrRachNumCyclicShift[%d]
Line 2006: [%02d][MSGB] RAPID mis-matched!!! : Sent[%d], Received[%d], Diff[%d]
Line 2010: [%02d][MSGB][Not Handle] RAPID mis-matched!!! : Sent[%d], Received[%d], NumPreamble[%d] created by same root sequence
Line 2044: [MSGB] MSGB forced accept !!!! : MacEntity[%d], MismatchPattern[%d], MismatchCnt[%d]
Line 2061: |UE <- gNB| MSGB : Fallback RAR (DomainType[%d], MacEntity[%d], UlSync[%d], RAPID[%d], TA[%d], TC-RNTI[%d])
Line 2061: |UE <- gNB| MSGB : Fallback RAR (DomainType[%d], MacEntity[%d], UlSync[%d], RAPID[%d], TA[%d], TC-RNTI[%d])
Line 2062: [MSGB] m3 grant : HopFlag[%d], FreqAlloc[%d], TimeAlloc[%d], Mcs[%d], Tpc[%d], CsiReq[%d]
Line 2076: [MSGB success RAR] MAC PDU size up to this point: current[%d], total[%d]
Line 2081: [MSGB] subheader R is not zero !! : E[%d], T1[%d], T2[%d], S[%d], R4[%d]
Line 2106: [ERROR] CR FAIL(received UE CR ID 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X)!!!
Line 2122: [MSGB] successful RAR R is not zero!! : R[%d]
Line 2132: |UE <- gNB| MSGB : Success RAR (MacEntity[%d], UlSync[%d], TA[%d], C-RNTI[%d])
Line 2132: |UE <- gNB| MSGB : Success RAR (MacEntity[%d], UlSync[%d], TA[%d], C-RNTI[%d])
Line 2133: [MSGB] MSGB feedback : Channel access-CPext[%d], TPC[%d], HARQ time ind[%d], PUCCH resc ind[%d]
Line 2146: [MSGB BI] MAC PDU size up to this point: current[%d], total[%d]
Line 2150: [MSGB] subheader R is not zero !! : E[%d], T1[%d], T2[%d], R[%d]
Line 2156: [MSGB] subheader : E[%d], T1[%d], T2[%d], BI[%d]
Line 2156: [MSGB] subheader : E[%d], T1[%d], T2[%d], BI[%d]
Line 2204: [MSG2] L2LMACRACH_L2LMACRX_RAR_IND send fail
Line 2227: L2LMACRACH_L2LMACRX_CR_IND send fail! contResolved(%d)
Line 2235: [MSGB] S[%d] Remaining MAC sub-PDUs PduAddr[0x%x] size[%d]
Line 2275: RD reset by LmacInit!
Line 2335: MacEntity[%d] Lcid[%d] is over range
Line 2346: Set m_DomainType[%d], MacEntity[%d], LCID[%d], RBID[%d]
Line 2351: InitRBIDPerLCID MacEntity[%d]
Line 2392: [%02d] Ta Timer[%d] is expired, TagId[%d], Status[%d]!!!
Line 2401: [%02d] Ta Timer[%d] is extended, TagId[%d]
Line 2447: L2_L2LMACRX_PUCCH_SRS_RELEASE_IND send fail, Ta Timer[%d]
Line 2452: L2_L2LMACRX_PUCCH_SRS_RELEASE_IND send success, Ta Timer[%d]
Line 2479: L2_L2LMACRX_PUCCH_SRS_RELEASE_IND send fail, Ta Timer[%d]
Line 2484: L2_L2LMACRX_PUCCH_SRS_RELEASE_IND send success, Ta Timer[%d]
Line 2490: Unknown Ta Timer[%d]
Line 2509: [%02d][L2->PHY] PHY_L2_TA_TIMER_IND TagId[%d] TaTimerState(%d) CarrierBitmap(%d)
Line 2515: [%02d] Ignore PHY_L2_TA_TIMER_IND, TagId[%d] ServcellIndex[%d], ServcellBitmap[%d], ccBitmap[%d]
Line 2529: [ERROR][TaTimer] Invalid MacEntity[%d] TagId[%d]
Line 2539: [ERROR][TaTimer] Invalid MacEntity[%d] TagId[%d]
Line 2543: [%02d] Ta Timer[%d] is stopped.
Line 2550: [ERROR][TaTimer] Invalid MacEntity[%d] TagId[%d]
Line 2556: Ta Timer start failed. MacEntity[%d], TagId[%d], [%d]Millisec
Line 2562: Ta Timer[%d] is started. domainType[%d], MacEntity[%d], TagId[%d], [%d]Millisec
Line 2628: L2LMACRACH_L2LMACRX_SR_CHECK_IND send failed
Line 2631: L2LMACRACH_L2LMACRX_SR_CHECK_IND Success
Line 2661: Invalid Parameter, MacEntity[%d], tag_id[%d]
Line 2686: Invalid Parameter, MacEntity[%d]
Line 2711: Invalid Parameter, MacEntity[%d]
Line 2782: [ERROR] Received MSG4, No MSG3 was sent out
Line 2798: [MAC-CE][0x%x] received !! Please check
Line 2817: [MAC-CE][ERROR] MAC_RECOMMEND_BIT_RATE_ID Invalid R[%d]
Line 2828: [%02d][MAC-CE] MAC_RECOMMEND_BIT_RATE_ID Lcid[%d], Direction[%d], BitRate[%d/%d]
Line 2832: [MAC-CE] Sending L2_L2LMACRX_RECOMMENDED_BIT_RATE_IND Fail!
Line 2849: [%02d][MAC-CE][ERROR] MAC_SP_ZP_CSI_RS_ACT_DEACT_ID Invalid R[%d]
Line 2863: [%02d][MAC-CE] MAC_SP_ZP_CSI_RS_ACT_DEACT_ID AD[%d] ServCell[%d] Bwp[%d] SpZpCsiRsResourceSetId[%d]
Line 2887: [%02d][MAC-CE][ERROR] MAC_PUCCH_SPATIAL_ACT_DEACT_ID Invalid R1[%d] R2[%d]
Line 2901: [%02d][MAC-CE] MAC_PUCCH_SPATIAL_ACT_DEACT_ID ServCell[%d] Bwp[%d] PucchResourceId[%d] ADBit[0x%x]
Line 2921: [%02d][MAC-CE][ERROR] MAC_SP_SRS_ACT_DEACT_ID Invalid R[%d]
Line 2941: [MAC-CE] MAC_SP_SRS_ACT_DEACT_ID AD[%d] SrsResourceSetId[%d] SrsBwpId[%d] C[%d] Sul[%d] spSrsResourceSetId[%d] Slot[%d]
Line 2964: [%02d][MAC-CE] Index[%d] F[%d] ResourceId[%d] ResourceServCellId[%d] BwpId[%d]
Line 2982: [%02d][MAC-CE] Index[%d] F[%d] ResourceId[%d] ResourceServCellId[%d] BwpId[%d]
Line 3007: [%02d][MAC-CE][ERROR] MAC_SP_CSI_PUCCH_ACT_DEACT_ID Invalid R1[%d] R2[%d]
Line 3021: [%02d][MAC-CE] MAC_SP_CSI_PUCCH_ACT_DEACT_ID ServCell[%d] Bwp[%d] SpCsiReportConfig[%d] Slot[%d]
Line 3068: [%02d][MAC-CE] MAC_TCI_STATE_IND_PDCCH_ID ServCell[%d] CoresetId[%d] TciStateId[%d] SlotIdx[%d] gL2SpCellIndex[%d] IsScellFlag[%d]
Line 3086: [%02d][MAC-CE][ERROR] MAC_TCI_STATE_ACT_DEACT_PDSCH_ID Invalid R[%d]
Line 3104: [%02d][MAC-CE] Index[%d] ActTciState[%d]
Line 3127: [MAC-CE] MAC_TCI_STATE_ACT_DEACT_PDSCH_ID ServCell[%d] Bwp[%d] SlotIdx[%d] gL2SpCellIndex[%d] ccBitmap[%d]
Line 3146: [%02d][MAC-CE][ERROR] MAC_APERIODIC_CSI_ID Invalid R[%d]
Line 3157: [%02d][MAC-CE] MAC_APERIODIC_CSI_ID ServCell[%d] Bwp[%d]
Line 3166: [MAC-CE] Index[%d] CsiTriggerState[%d]
Line 3189: [%02d][MAC-CE][ERROR] MAC_SP_CSI_RS_CSI_IM_ACT_DEACT_ID Invalid R1[%d] R2[%d]
Line 3208: [%02d][MAC-CE] MAC_SP_CSI_RS_CSI_IM_ACT_DEACT_ID AD[%d] ServCell[%d] Bwp[%d] Im[%d] RsSetId[%d] ImSetId[%d]
Line 3219: [MAC-CE] Index[%d] TciStateId[%d]
Line 3241: [%02d][MAC-CE] MacEntity[%d] MAC_DUP_ACT_DEACT_ID[%d]
Line 3247: [MAC-CE] Sending L2HPDCPTX_L2LMACRX_PDCP_DUP_IND Fail!
Line 3262: [%02d][MAC-CE][ERROR] MAC_SC_ACT_DEACT_ID Invalid R[%d], MacEntity[%d]
Line 3294: [MAC-CE] Invalid MAC_SC_ACT_DEACT_ID bitmap 0x%x, MacEntity[%d], SlotIdx[%d]
Line 3307: [%02d][MAC-CE] MAC_SC_ACT_DEACT_ID bitmap 0x%x, MacEntity[%d], Crnti[%d], SlotIdx[%d]
Line 3311: [MAC-CE] Sending L2_L2LMACRX_SCELL_STATUS_IND Fail!
Line 3321: [%02d][MAC-CE] MAC_UE_CR_ID
Line 3349: [%02d][ERROR] CR FAIL(received UE CR ID 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X)!!!
Line 3364: L2LMACRACH_L2LMACRX_CR_IND send fail! contResolved(%d)
Line 3369: [%02d] Invalid MAC_UE_CR_ID : RachCause[%d]
Line 3387: MAC[%d]: TA MAC CE received at the UNSYNC State
Line 3393: [MAC-CE] MacEntity[%d] TagId[%d] is not configured
Line 3424: [%02d][MAC-CE] PHY_L2_TA_CONTROL_IND TagId[%d] Mode[%d] Ta[%d] Slot[%d] CarrierBitmap[%d]
Line 3434: [%02d][MAC-CE] MAC_DRX_CMD_ID[%d]
Line 3452: L2_L2LMACRX_DRX_CMD_IND send fail!
Line 3466: [CPU_MIF] MacEntity(%d) PHY MIF boost (MID) is already on! ignore this msg!
Line 3470: [CPU_MIF] MacEntity(%d) PHY MIF boost on! (MID)
Line 3478: [CPU_MIF] MacEntity(%d) PHY MIF boost (HIGH) is already on! ignore this msg!
Line 3482: [CPU_MIF] MacEntity(%d) PHY MIF boost on! (HIGH)
Line 3488: [CPU_MIF] MacEntity(%d) Not supported value! ignore this msg!
Line 3496: [ERROR] L2_L2LMACRX_CLK_CHANGE_IND send fail
Line 3511: [CPU_MIF] L2LRXMAC_SetPhyMifBoostVal! mifBoostVal(%d)
Line 3520: [WARN] CR fail. MSG4 include CCCH MAC PDU and no include UE_CR_ID, Discard CCCH MAC PDU, RACH going on
Line 3550: L2LMACRACH_L2LMACRX_CR_IND send fail! contResolved(0)
