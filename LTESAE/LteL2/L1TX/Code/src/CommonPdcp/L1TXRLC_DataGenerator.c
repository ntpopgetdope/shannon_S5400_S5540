Line 155: LTERLC_Tx_GetSnMap return DummySnMap, RB_ID[%d], RLC_SN[%d] !!!
Line 388: [ERROR][RLCTX][ENTITY:%d] L2LTXRLC_ProcHighPriorityPktReq : (pNewDesc == NULL)
Line 399: [ERROR][RLCTX][ENTITY:%d] L2LTXRLC_ProcHighPriorityPktReq : (pSnMap == NULL)
Line 403: [RLCTX][ENTITY:%d] L2LTXRLC_ProcHighPriorityPktReq : pNewDesc[%x]
Line 478: Fail pal_Malloc and Fail Send LTE_CRLC_MAX_RETX_IND!!!
Line 502: [ERROR] RLC Max Retransmission !!!, eCause[%d], ErrStr:%s
Line 549: RB_ID[%d] L1TXRLC Ignore Poll Data Retx Not Active State [%d]
Line 556:  RB_ID[%d] L1TXRLC Ignore Poll VT_S[%d]==VT_A[%d]
Line 585: RB_ID[%d] PDCP Queue empty but NewDataSize is not empty
Line 611: RB_ID[%d] Insert Nack : No more Data For Poll ::TxNACKElemPool FULL !! Re-estabilish Trigger VT_S = %d, VT_A = %d 
Line 665: RB_ID[%d]Insert Nack : No more Data For Poll rlc_pdu_bo = %d, VT_S = %d, VT_A = %d Nack %d
Line 674: RB_ID[%d]RLC For Poll Data==>trigger regular BSR
Line 700: RB_ID[%d]NACK[%d]Rlc Poll Re-estabilish Trigger [%d] VT_S %d VT_A %d
Line 704: [RLC TX] RLC_16BIT_SN RLC Max Retransmission !!!
Line 790: [Pdcpdup][Status] RB_ID[%d] DRBID[%d] Discard already acked PDUs in RLC queue from %d till %d 
Line 810: [Pdcpdup][Status] RB_ID[%d] DRBID[%d] PDCP Count %d count %d discarded
Line 936: RB_ID[%d]RLC Status Gen==>trigger regular BSR
Line 1076: pSchInfo->SchedGrant[%d] < (pSchInfo->UsedGrant-pSchInfo->MacLFSize)[%d] !!!
Line 1081: pSchInfo->UsedGrant[%d] < pSchInfo->MacLFSize[%d] !!!
Line 1088: pSchInfo->SchedGrant[%d] < pSchInfo->UsedGrant[%d] !!!
Line 1192: PayloadSize <= 0 !!!
Line 1279: pSchInfo->RemainBo[%d] < PayloadSize[%d] !!!
Line 1291: pSchInfo->RemainNewData[%d] < PayloadSize[%d] !!!
Line 1299: pSchInfo->RemainNewData[%d] != 0!!!
Line 1320: pSchInfo->RemainRexData[%d] < PayloadSize[%d] !!!
Line 1336: pSchRltElem->CurPduType[%d] in invalid!!!
Line 1345: pSchInfo->SchedGrant[%d] < pSchInfo->UsedGrant[%d]!!!
Line 1358: pSchInfo->SchedGrant[%d] < pSchInfo->UsedGrant[%d] !!!
Line 1440: pStartDesc==NULL!!!
Line 1532: pStartDesc is NULL !!!
Line 2191: L2HRXRLC_GetStatusPduSnapshot : return L2HRXRLC_GetStatusPduLen : %d
Line 2203: L2HRXRLC_GetStatusPduSnapshot : RBID[%d], SnapshotIdx[%d]
Line 2214: [ERROR][RLCTX][ENTITY:%d] GetStatusPduSnapshot_ElemBufAlloc : no element, AckSN[%d->%d] <== NACK_PDU_SN[%d]
Line 2906: RBID[%d] pShedRlt:0x%x L2LTXRLC_CalculatePDUsize Wrong Argument !!
Line 2921: RBID[%d] L1TXRLC NOT ACTIVE[%d] ,No Data Schedule
Line 2942: RBID[%d] Pre Check Calcluate PDUSize CurIdx[%d], BO[%d]
Line 3467: RB_ID[%d]L1TX_GetDMADesc Fail !!
Line 3508: RB_ID[%d]L1TX_GetDMADesc Fail !!
Line 3904: NACK_CNT LCID[03~09] [%05d %05d %05d %05d %05d %05d %05d]
Line 3905: NACK_CNT LCID[13~19] [%05d %05d %05d %05d %05d %05d %05d]
Line 3911: RB_ID[%d]RLC TX Status NACK[%d] bReseg[%d] SO[%d],EO[%d]
Line 3922: RB_ID[%d]RLC TX Status ACK[%d] VR_MS %d,VR_R %d,VR_H %d

Line 4398: RBID[%d] grant_size:%d UsedGrant:%d HARQ_ID:%d L2LTXRLC_GenPDU Wrong Argument !!
Line 4406: RBID[%d] InvalidState[%d] !!
Line 4482: [OEM][PKTTa] [Stage:5A][Tag:%08X][dT:%u] PKT packed in LTE RLC AM PDU. pktid: 0x%x, rlcPduTime: %u
Line 4486: [OEM][PKTTa] [Stage:5B][Tag:%08X][dT:0] RB_ID: %d, rlcPduSn: %u, rlcPduSo: %d, rlcPduPayloadLen: %u, rlcHdrLen: %u, rlcSduCnt: %u, pdcpTxCount: %u
Line 4496: [OEM][PKTTa_WARN] [LTE-RLC-PDU] pUbuf != END but pUbuf->q_next == NULL! RB_ID[%d]
Line 4546: [OEM][PKTTa_WARN] [Event] PKT LTE RLC RETX
Line 4548: [OEM][PKTTa] [Stage:5R][Tag:%08X][dT:%u] PKT packed in LTE RLC AM PDU for RLC RETX. pktid: 0x%x, rlcPduTime: %u
Line 4552: [OEM][PKTTa] [Stage:5R][Tag:%08X][dT:0] RB_ID: %d, rlcPduSn: %u, rlcPduSo: %d, rlcPduPayloadLen: %u, rlcHdrLen: %u, rlcSduCnt: %u, pdcpTxCount: %u
Line 4562: [OEM][PKTTa_WARN] [LTE-RLC-PDU] pUbuf != END but pUbuf->q_next == NULL! RB_ID[%d]
Line 4579: RB_ID[%d] pPDU_Info->num_pdu[%d] > MAX_NUM_TXRLC_PDU_PER_ENTITY
Line 4586: RB_ID[%d] L2LTXRLC_GenPDU: DATA PDU(AM) NewDataSize[%d] TotalNew[%d] RemainNewData[%d]
Line 4588: RB_ID[%d] L2LTXRLC_GenPDU: RETX PDU(AM) ReTxDataSize[%d] TotalRex[%d] RemainRexData[%d]
Line 4590: RB_ID[%d] L2LTXRLC_GenPDU:  RlcPduBO[%d] RemainBo[%d] StatusGenSize[%d]
Line 4654: RB_ID[%d]Error RLC Mode[%d]
Line 4661: RB_ID[%d] RLC PDU Gen Result Error : rb_cnt[%d], NumRlcPDU[%d]
Line 4689: DMADescPool.NumFree == 0 !!!
Line 4759: L1TX_DMADescPoolInit Initialize...

Line 2782: RLC UM RemainBO is 0!!!
Line 2811: RBID[%d] NACKList is Empty !!
Line 2815: RBID[%d] RLBO[%d] < RemainNewData[%d] !!
Line 2819: RBID[%d] RlcTxQ.ReTxDataSize[%d] < RemainRexData[%d] !!
Line 2559: pRlcTxQ->RlcCurrentPtr==NULL!!!, pSchIf->RBID[%d]
Line 2565: RB_ID[%d]: Buffer Error!!! BO[%d], NewData[%d], RemainNewDat[%d]
Line 2593: RB_ID[%d]TX Winow overflow[%d %d]
Line 2599: RB_ID[%d] no RemainGrant
Line 2612: RB_ID[%d]TX No More data to schedule
Line 2666: pSchRltElem->End_SDUDesc_Ptr->q_next==NULL!!!
Line 2713: RB_ID[%d]TX Winow overflow[%d %d %d]
Line 2726: RB_ID[%d]TX No More data to schedule
Line 2345: L2LTXRLC_CalculateStatusSizeUseSnapshot : return L2LTXRLC_CalculateStatusSize
Line 2349: L2LTXRLC_CalculateStatusSizeUseSnapshot : RBID[%d], SnapshotIdx[%d]
Line 2390: dwCurElemIdx[%d] > dwElemCount[%d] !!!
Line 2061: tmptotalLen[%d] < pSchInfo->StatusGenSize[%d] !!!
Line 2070: pSchInfo->RemainBo[%d] < tmpUsedLen[%d] !!!
Line 2081: pSchInfo->SchedGrant[%d] < pSchInfo->UsedGrant[%d] !!!
Line 2295: tmptotalLen[%d] < pSchInfo->StatusGenSize[%d] !!!
Line 2304: pSchInfo->RemainBo[%d] < tmpUsedLen[%d] !!!
Line 2314: pL2RlcRxAmInfo->StatusPduSize[%d] < tmptotalLen[%d] !!!
Line 2323: pSchInfo->SchedGrant[%d] < pSchInfo->UsedGrant[%d] !!!
Line 1780: pSchInfo->pCurNackListElem==NULL!!!
Line 1581: RBID[%d] NACK_PDU_SN:%d L2LTXRLC_GetReTxFirstnLastSDUDesc Wrong Argument !!
Line 4166: L2LTXRLC_GenStatusPduUseSnapshot : return L2LTXRLC_GenStatusPDU
Line 4173: L2LTXRLC_GenStatusPduUseSnapshot : RBID[%d], SnapshotIdx[%d]
Line 4192: RB_ID[%d]Fail L1TX_GetDMADesc
Line 4325: RB_ID[%d]Fail L1TX_GetDMADesc
Line 3976: RB_ID[%d]Fail L1TX_GetDMADesc
Line 4109: RB_ID[%d]Fail L1TX_GetDMADesc
Line 3691: RB_ID[%d] UM Tx RLC Seq : %d, Num.of.SDU : %d, SI : %d
Line 3301: RB_ID[%d]Poll Bit Set : Poll_SN = %d, TxSN %d,VT_A %d, VT_S %d
Line 3341: RB_ID[%d]Fail L1TX_GetDMADesc
Line 3393: RB_ID[%d]Fail L1TX_GetDMADesc
Line 3428: RB_ID[%d]ReTx Not Resg: TxSN %d,VT_A %d, VT_S %d
Line 3433: RB_ID[%d]ReTx Resg: TxSN %d,SO %d,Len %d,Last %d,VT_A %d, VT_S %d
Line 3440: RB_ID[%d]Generation RlcHeaderLength[%d] over MAX_RLC_HEADER_SIZE
