Line 326: L2LTXRLC_Init
Line 400: [MULTICORE] L2LTXRLC_Init Highest_PriRB
Line 406: Dummy RLC print [%x][%x][%x]!
Line 856: RB_ID[%d] initialization before Chunk mode [%d]
Line 871: RB_ID[%d] RlcTxChunk alloc fail
Line 887: RB_ID[%d] RlcTxChunk alloc [%d]
Line 935: L2LTXRLC_SetupRlcEntity : LC_ID %d/%d, RB_ID %d, Type %d
Line 1019: RB_ID[%d]L1TXRLC Config AM timerPoll_retransmit %d,poll_byte %d,poll_PDU %d,max_retransmit_no %d, ExtLI[%d] ExtSN[%d]
Line 1030: RB_ID[%d]L1TXRLC Config UM sn_field_length %d
Line 1056: RB_ID[%d]Forced RLC AM Config to t_poll(45ms), max_retx(8)
Line 1072: LT12Report timer start [%d]
Line 1120: L2LTXRLC_ReleaseRlcEntity FAIL!! Invalid RB_ID[%d] 
Line 1124: RB_ID[%d]L2LTXRLC_ReleaseRlcEntity
Line 1166: RB_ID[%d] RlcTxChunk free [%d]
Line 1336: L2LTXRLC_ReleaseAll,Stack[%d], SCGEntity[%d]
Line 1395: RB_ID[%d] SNMAP free[%d]
Line 1415: LT12Report timer Stop
Line 1547: RB_ID[%d] SNMAP free[%d]
Line 1606: RB_ID[%d] SNMAP free[%d]
Line 1682: L2LTXRLC_SetupSplitRlcEntity LC_ID %d/%d, RB_ID %d, Type %d
Line 1689: L2LTXRLC_SetupSplitRlcEntity FAIL!! Invalid RB_ID[%d] LC_ID[%d]
Line 1695: RB_ID[%d]L2LTXRLC_SetupSplitRlcEntity Wrong RLC Mode[%d/%d]!!
Line 1778: RB_ID[%d] TX SNMAP chunk fail
Line 1794: RB_ID[%d] TX SNMAP alloc [%d]
Line 1804: RB_ID[%d] TX SNMAP chunk fail
Line 1820: RB_ID[%d] TX SNMAP alloc [%d]
Line 1831: RB_ID[%d]L1TXRLC Config AM timerPoll_retransmit %d,poll_byte %d,poll_PDU %d,max_retransmit_no %d,ExtLI[%d] ExtSN[%d]
Line 1835: SCG_RB_ID[%d]L1TXRLC Config AM timerPoll_retransmit %d,poll_byte %d,poll_PDU %d,max_retransmit_no %d,ExtLI[%d] ExtSN[%d]
Line 1905: L2LTXRLC_ModifyRlcEntity LC_ID %d/%d, RB_ID %d, Type %d, rlc_reest_v1510 %d bReqReleaseAndAdd %d
Line 1916: L2LTXRLC_ModifyRlcEntity FAIL!! Invalid RB_ID[%d] LC_ID[%d]
Line 1929: L2LTXRLC_ModifyRlcEntity : LCID/RBID[%d/%d], NRSTACK_NRPDCP_TO_LTESTACK_NRPDCP
Line 1972: L2LTXRLC_ModifyRlcEntity : LTE_L2HTX_L2LTX_RLC_REEST_NTF malloc fail
Line 2001: L2LTXRLC_ModifyDCSpecificDRB LC_ID %d/%d, RB_ID %d, Type %d
Line 2016: L2LTXRLC_ModifyDCSpecificDRB FAIL!! Invalid RB_ID[%d] LC_ID[%d]
Line 2118: [LTE_L2TX] Send NRPDCP_L2HTX_LTE_UL_RB_CHANGE_IND
Line 2235: [RLCTX][ENTITY:%d][%cRBID:%d] Free Ack received SDU#[%d] PDCP COUNT (%u..%u) Remain Q_Count[%d], elapsed[%u,%u]us
Line 2937: RB_ID[%d] RX RLC Status ACK[%d] VT_A[%d] VT_AH[%d] VT_S[%d]
Line 2959: RB_ID[%d] rlc_pdu_bo[%d] < OrgReTxDataSize[%d]
Line 3008: RB_ID[%d] RX RLC Status NACK[%d] SO[%d] EO[%d]
Line 3017: RB_ID[%d] endoffset[%d] < startoffset[%d]
Line 3033: RB_ID[%d] : L2LTXRLC_ParseStatusPDU fail by pSnMap NULL
Line 3045: RB_ID[%d] RX RLC Wrong Status Offest NACK[%d] SO[%d] EO[%d] PduLength[%d]
Line 3065: RB_ID[%d] RX RLC wrong order NACK(%d>=%d) offset(End>=start)
Line 3087: RB_ID[%d]RX RLC Status NACK[%d]
Line 3099: RB_ID[%d] RX RLC wrong order NACK(%d>=%d)
Line 3124: RB_ID[%d] PDULength[%d] < POffset_BYTE[%d]
Line 3139: RB_ID[%d] Ignore Rx Status
Line 3160: RB_ID[%d]Poll Timer Stop Poll_SN %d ACK %d VT_A %d VT_S %d
Line 3171: RB_ID[%d] NackList->pFirstElem==NULL!!!
Line 3189: [MULTICORE] RB_ID[%d]RLC Rx Status==>trigger regular BSR
Line 3211: RB_ID[%d]RLC Re-estabilish2 Trigger VT_S %d VT_A %d
Line 3331: [MULTICORE] L2LTXRLC_QueueParmeterInit
Line 3341: [MULTICORE] RB_ID[%d] L2LTXRLC_ProcPdcpResume
Line 3374: [MULTICORE] RB_ID[%d] Resume PDCP triggers regular BSR
Line 3380: [MULTICORE] RB_ID[%d] L2LTXRLC_ProcPdcpResume: pRlcTxQ head[0x%x], tail[0x%x], NewDataSize[%d], count[%d], RlcCurrentPtr[0x%x]
Line 3386: [MULTICORE] RB_ID[%d] L2LTXRLC_ProcDataRecovery
Line 3423: [MULTICORE] RB_ID[%d]Data Recovery PDCP triggers regular BSR
Line 3459: [MULTICORE] SCG_RB_ID[%d] L2LTXRLC_ProcDataRecovery: RlcTxScgQ head[0x%x], tail[0x%x], NewDataSize[%d], count[%d], RlcCurrentPtr[0x%x]
Line 3461: [MULTICORE] RB_ID[%d] L2LTXRLC_ProcDataRecovery: RlcTxMcgQ head[0x%x], tail[0x%x], NewDataSize[%d], count[%d], RlcCurrentPtr[0x%x]
Line 3463: [MULTICORE] RB_ID[%d] L2LTXRLC_ProcDataRecovery: RlcTxMcgQ BO[%d]
Line 3488: [MULTICORE] RB_ID[%d] L2LTXRLC_ReceiveData: pStartPtr[0x%x] pEndPtr[0x%x] count[%d]
Line 3502: [MULTICORE] RB_ID[%d] L2LTXRLC_ReceiveData: AddSize[%d] pRlcTxQ->NewDataSize[%d] ptrRlcBo->rlc_pdu_bo[%d] pRlcTxQ->RetxDataSize[%d]
Line 3609: [ERROR][RLCTX][ENTITY:%d] L2LTXRLC_ReceiveDataSMPF Fail !! : StackId[%d] pStartDesc[0x%x] pEndDesc[0x%x] DescCount[%d]
Line 3630: [WARN][RLCTX][ENTITY:%d][DRBID:_] LTE_L2LTX_SMPF_DATA_EVENT, RLC is not activated, Discard PDCP COUNT[%d..%d] PktCount[%d]
Line 3650: [RLCTX][ENTITY:%d] RlcTxQ : head[0x%X] tail[0x%X] count[%d] rlc_pdu_bo[%d] AddSize[%d]
Line 3672: [OEM][PKTTa] [Stage:4_][Tag:%08X][dT:%u] PKT in LTE RLC (SmpfPdcpToRlcQ -> LTE RlcTxQ). pdcpCount: %u, rlcSduLen: %u, rlcPduBo: %u, pktid: 0x%x, rlcTime: %u
Line 3682: [OEM][PKTTa_WARN] [LTE-RLC] pUbuf != END but pUbuf->q_next == NULL! RB_ID[%d]
Line 3713: [RLCTX][ENTITY:%d][%cRBID:%d] L2LTXRLC_SendMultiplePdcpPduToLteRlc Fail !! : StackId[%d] pStartDesc[0x%x] pEndDesc[0x%x] DescCount[%d]
Line 3725: [RLCTX][ENTITY:%d][%cRBID:%d] RLC TX REQ : PDCP COUNT (%u..%u) - Len (%u - %u)
Line 3758: [RLCTX][ENTITY:%d][%cRBID:%d] L2LTXRLC_SendPdcpPduToLteRlc Fail !! : StackId[%d] pPdcpPduDesc[0x%x]
Line 3768: [RLCTX][ENTITY:%d][%cRBID:%d] RLC TX REQ : PDCP COUNT (%u) - Len (%u)
Line 3790: [OEM][PKTTa] [Stage:3B][Tag:%08X][dT:%u] PKT to LTE RLC (NR pdcpTxDoneQ -> SmpfPdcpToRlcQ). pdcpTxCount: %u, pdcpPduLen: %u, pktid: 0x%x, pdcpTime: %u
Line 3845: RB_ID[%d] RlcTxQ is NULL. head[0x%x] RlcCurrentUsbDesc[0x%x]
Line 3857: RB_ID[%d] : Snmap==NULL !!!
Line 3880: RB_ID[%d] L2LTXRLC_ProcPdcpStatusPDU. UsbDesc[0x%x], FMC[%d] CtlPduSize[%d] RlcQ head[0x%x] tail[0x%x] count[%d]
Line 3883: RB_ID[%d] : UsbDesc==NULL !!!
Line 3892: RB_ID[%d] : UsbDesc==NULL !!!
Line 3900: RB_ID[%d] PDCP ACK Discard COUNT[%d] < FMC[%d]
Line 3927: RB_ID[%d] PDCP RX NACK %d
Line 3940: RB_ID[%d] PDCP Cnf bit Discard COUNT %d 
Line 3954: RB_ID[%d] RlcQ head[0x%x] tail[0x%x] RlcCurrentPtr[0x%x] count[%d]
Line 754: L2LTXRLC_SetupRlcEntity FAIL!! Invalid RB_ID[%d] LC_ID[%d]
Line 780: RB_ID[%d]L2LTXRLC_SetupRlcEntity FAIL!! SubState[%d]==RLC_NOT_ACTIVE
Line 787: RB_ID[%d]L2LTXRLC_SetupRlcEntity FAIL!! RlcMode[%d]!=parameters->ulConfig.ulInfo.mode[%d]
Line 796: RB_ID[%d]L2LTXRLC_SetupRlcEntity FAIL!! Wrong UM sn_field_length[%d][%d]
Line 806: RB_ID[%d]L2LTXRLC_SetupRlcEntity FAIL!! pL1RlcTx->SubState[%d]!=RLC_NOT_ACTIVE
Line 433: Invalid L2LTXRLC_TpollTmr_Cb Ignore!!! 
Line 438: RB_ID[%d]Poll Timer Expired !! Poll SN %d ,VT_S %d, VT_A %d
Line 443: RB_ID[%d]Fail pal_Malloc and Fail Send LTE_L2LTX_L2LTX_POLL_TMR_EX_IND!!! 
Line 213: L2LTXRLC_ResetPduTb
Line 1236: RB_ID[%d]L2LTXRLC_Reset
Line 2588: RB_ID[%d] : L2LTXRLC_ProcStatusPDU_Ext fail by pSnmap NULL
Line 2598: RB_ID[%d], AckSN[%d] pLastSegDesc==NULL !!!
Line 2624: [OEM][PKTTa] [Event] LTE RLC ACK received. RB_ID: %d, rlcAckSn: %u, rlcAckSo: %u, trackNum: %u
Line 2660: [WARN][L2 REVERT][RLCTX][ENTITY:%d] update remained pkt : pHeadDesc[%x], pTailDesc[%x], PDCP COUNT[--..--], NUM[%d]
Line 2670: [L2 REVERT][RLCTX][ENTITY:%d] update remained pkt : pHeadDesc[%x], pTailDesc[%x], PDCP COUNT[%d..%d], NUM[%d]
Line 2682: RB_ID[%] LTE_L2HTX_L2LTX_REVERT_DATA_IND malloc fail !!!
Line 2703: [L2 REVERT] Send LTE_L2HTX_L2LTX_REVERT_DATA_IND #FMT1 : RB_ID[%d] RLC(Head..VT_S-1)=[0x%x]..[0x%x]/count[%d], RLC(VT_S..End)=[0x%x]..[0x%x]/count[%d]
Line 2726: [L2 REVERT] Send LTE_L2HTX_L2LTX_REVERT_DATA_IND #FMT2 : RB_ID[%d] RLC(Head..VT_S-1)=[%d]..[%d]/count[%d], RLC(VT_S..End)=[%d]..[%d]/count[%d]
Line 2283: pSduDesc == NULL in L1TXRLC_FreeBuffer(), RB_ID[%d]
Line 2295: pSduDesc->q_next == NULL in L1TXRLC_FreeBuffer(), RB_ID[%d]
Line 2308: RB_ID[%d]MUI Confirm %d, pdcpTxCount %d, MUI %d

Line 2328: RB_ID[%d]MUI Confirm %d, pdcpTxCount %d, MUI %d

Line 2391: [OEM][LAM_EVENT] [DBG] LTE RLC free Ubuffer! StackId(%u), RB_ID(%u), internetRbId(%u), IsRevert(%u), bAVG(%u), bFIRST(%u) b_firstPktTracking(%u)
Line 2399: [OEM][LAM_WARN] [AVG] RB_ID <= SRB2_RBID! StackId(%u), RB_ID(%u)
Line 2413: [OEM][LAM_EVENT] [DBG][FIRST] Receiving LTE RLC ACK, Comparing... firstPktUbuf(0x%X), pUbuf(0x%X)
Line 2432: [OEM][LAM_WARN] [LTE Ubuf-free] pUbuf != END but pUbuf->q_next == NULL! RB_ID[%d]
Line 2439: [OEM][LAM_WARN] [LTE Ubuf-free] pUbuf != END but pUbuf->q_next == pUbuf! RB_ID[%d]
Line 2469: [OEM][PKTTa] [Stage:6_][Tag:%08X][dT:%u][RTT:%ums] PKT sent to NW successfully! LTE RLC ACK received. PKT freed. pdcpTxCount: %u, pktid: 0x%x, rlcAckTime: %u
Line 2481: [OEM][PKTTa_WARN] [LTE Ubuf-free] pUbuf != END but pUbuf->q_next == NULL! RB_ID[%d]
Line 2498: [QTM][QOS] LTE Update RLC Tx Latency. RBID: %d
Line 2750: RB_ID[%d] RX RLC Wrong Status ACK[%d]<VT_A[%d] VT_S[%d]
Line 2767: RB_ID[%d] RX RLC Wrong Status ACK[%d] LAST NACK[%d] VT_A[%d] VT_AH[%d] VT_S[%d]
Line 2783: RB_ID[%d] NackList Empty : VT_A[%d], VT_AH[%d]
Line 2795: RB_ID[%d] RX RLC Wrong Status ACK[%d]>VT_S[%d] VT_A[%d]
Line 2809: RB_ID[%d] RX RLC Wrong Status ACK[%d]>VT_S[%d] VT_A[%d], ( dwDiff > 20 )
Line 2814: RB_ID[%d] STATUSRPT[%d] : %x %x %x %x %x
Line 2845: RB_ID[%d] RX RLC Wrong Status ACK/NACK[%d/%d] VT_A[%d] VT_S[%d] - W/A
Line 2853: RB_ID[%d] RX RLC Wrong Status ACK/NACK[%d/%d] VT_A[%d] VT_S[%d]
