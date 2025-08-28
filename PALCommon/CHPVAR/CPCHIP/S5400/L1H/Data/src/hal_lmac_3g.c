Line 1581: Cipher DescriptorInfo(DCH): RbId %d, Num %d, ByteLength %d, Offset1 %d, AddrOffset %d, DmaCtrlLength(RD) %x, DmaCtrlLength(WR) %x
Line 1656: TX DCH Cipher Only: RbId %d, tx_fsm_status_cip_pack %x, tx_fsm_status_trs_harq %x, cip_info[0] %x, ciph_cnt[0] %x, countc[0] %i, ck_src_index[0] %x
Line 1767: Cipher DescriptorInfo(EDCH) :  RbId %d, Num %d, ByteLength %d, Offset1 %d, AddrOffset %d, DmaCtrlLength(RD) %x, DmaCtrlLength(WR) %x
Line 1841: TX EDCH Cipher Only: RbId %d, tx_fsm_status_cip_pack %x, tx_fsm_status_trs_harq %x, cip_info[0] %x, ciph_cnt[0] %x, countc[0] %i, ck_src_index[0] %x
Line 2030: EEdchTransfer: Num[%d] Read(Src 0x%x, Dst 0x%x, Length 0x%x), Write(Src 0x%x, Dst 0x%x, Length 0x%x)
Line 2096: LMAC Cmd Info: EEdchTransferOnly: LMAC Status %d, RbId %i, DDI %i, TSN %i, PaySize %i, Num %i, TotalPdu %d
Line 2131: Num of RB is Zero in EdchTransferOnly
Line 2178: EEdchSiOnlyTransfer: Num[0] Write(Src 0x%x, Dst 0x%x, Length 0x%x)
Line 2181: LMAC Cmd Info: EEdchSiOnlyTransfer: LMAC Status %d, SI Value 0x%x
Line 2267: NumRb %d MacEsHeaderInfo [TSN 0x%x N 0x%x DDI 0x%x]
Line 2424: EEdchTransferWithCipher: RbId %d, RlcH 0x%x, cip_info 0x%x, ciph_cnt 0x%x, ck_index 0x%x, tx_hsuconr 0x%x, cip_algo_dir 0x%x
Line 2432: ** Error : Num calculation in EEdchTransferWithCipher. Given up LMAC Command (TotalPdu %d, TotalCountC %d, TotalCk %d) **
Line 2470: Num of RB is Zero in EDCH TRANSFER WITH CIPHER
Line 3063: NumRb %d, MacHeader %x
Line 3121: EDataTransferOnly: Num[%d] Read(Src 0x%x, Dst 0x%x, Length 0x%x), Write(Src 0x%x, Dst 0x%x, Length 0x%x)
Line 3133: LMAC Cmd Info: EDataTransferOnly: Status %d, RbId %i, Num %i, RlcH 0x%x, dch_mac_h_info 0x%x, dch_ciph_info 0x%x
Line 3424: EDataTransferWithCipher: Num[%d] Read(Src 0x%x, Dst 0x%x, Length 0x%x), Write(Src 0x%x, Dst 0x%x, Length 0x%x)
Line 3437: LMAC Cmd Info: EDataTransferWithCipher: Status %d, Num %i, RbId %d, RlcH 0x%x, dch_mac_h_info 0x%x, dch_ciph_info 0x%x, dch_ciph_cnt 0x%x
Line 3443: ** Error : Num calculation in EDataTransferWithCipher. Given up LMAC Command (TotalPdu %d, TotalCountC %d, TotalCk %d) **
Line 436: [HALLMAC3G] %s: Wrong %s(%d)
Line 437: [HALLMAC3G] %s: Wrong %s(%d)
Line 463: [Warning] HW destination control(Configuration). BASE_ADDR 0x%x, SW_INIT_DST_ADDR 0x%x, END_ADDR 0x%x
Line 528:  MAC-HS. mem_ps_ctrl_qid_info 0x%x
Line 568: MAC-EHS. Mapping info... QueueID: %d, LchID: %d
Line 592: MAC-EHS. TSN14Bit_Mode: %d
Line 624: [HALLMAC3G] %s: Wrong %s(%d)
Line 625: [HALLMAC3G] %s: Wrong %s(%d)
Line 641: [PktProc] PktProc is busy! RbId %d, comStatus 0x%X, LmacLoopCnt %d
Line 646: [PktProc][ERROR] Decipher command discard! PktProc is busy!
Line 654: [PktProc] Decipher command start! NumOfPayload(%u)
Line 659: [PktProc] PktProcFreeQue(%u) < NumOfPayload(%u)
Line 685: [PktProc] Set descriptor of decipher: RbId(%d) PayloadLen(%d) LastSeg(%d)
Line 715: [PktProc] Decipher Start! RbId(%d) RxCountC0(%u) PayloadLength(%u)(bits) dl_dcp_info(0x%x) StartDesc(0x%x)
Line 750: Cipher key set! Direction(%d) CK_REG[0 ~ 3] : 0x%x 0x%x 0x%x 0x%x
Line 814: index is out of range %d
Line 882: index is out of range %d
Line 921: [PktProc] Init!
Line 925: [PktProc] SwReset! Not MBUS but CPCPU
Line 1032: [HALLMAC3G] %s: Wrong %s(%d)
Line 1033: [HALLMAC3G] %s: Wrong %s(%d)
Line 1041: LMAC mode is not 3G: RbId %d, LmacOperationMode %d (ETC_3G_MODEM_SELECT: %d, TTI_MODEM_SEL: %d)
Line 1061: RX LMAC busy: RbId %d, DelayedCnt %d, LmacOperationMode %d
Line 1068: Array index out of bound: RbId %d, totalPdu %d, LmacOperationMode %d
Line 1080: Exception! RX LMAC DMA only mode %d
Line 1092: [PktProc] EPktProcDecipherOnly cmd start! TotalPdus(%u) g_uRlcPktProcFreeQueNum(%u)
Line 1097: [PktProc] g_uRlcPktProcFreeQueNum(%u) < RxRlcDataConfig_ptr->RlcRxDataConfigInfo->TotalPdus
Line 1140: Set descriptor of decipher: RbId %d, Num %d, COUNTC %u, CK_Idx %d, BitLength %u, SrcAddr: 0x%X
Line 1171: [PktProc] Decipher Start! RbId(%d) Snow3g(%d) StartDesc(0x%x)
Line 1179: RX LMAC invalid operation mode %d
Line 1229: [HALLMAC3G] %s: Wrong %s(%d)
Line 1230: [HALLMAC3G] %s: Wrong %s(%d)
Line 1238: LMAC mode is not 3G: RbId %d, LmacOperationMode %d (ETC_3G_MODEM_SELECT: %d, TTI_MODEM_SEL: %d)
Line 1249: Array index out of bound: RbId %d, totalPdu %d, LmacOperationMode %d
Line 1271: RX SDU GEN I (Busy): RbId %d, rx_lmac_status 0x%X, LmacPollCnt %d, LmacOperationMode %d
Line 1296: SDUGEN descriptors info(RD): RbId %d, Num %d, ByteLength %d, SrcAddr %x, DstAddr %x, DmaCtrlLength %x
Line 1327: RX SDU GEN II (Busy): RbId %d, rx_lmac_status 0x%X, LmacPollCnt %d, LmacOperationMode %d
Line 1359: RX SUB data transfer is not finished: RbId %d, delayedCnt %d
Line 1373: RX LMAC invalid operation mode %d
Line 974: HSetDecipherParameter() Start!
Line 978: HSetDecipherParameter: Array index out of bound %d 
Line 991: Ngroup index Over NGROUP %d
Line 1005: HSetDecipherParameter(): RbId %d, NGROUP %d, CkIndex %d, CIPHER %d
Line 1397: [HALLMAC3G] %s: Wrong %s(%d)
Line 1862: [HALLMAC3G] %s: Wrong %s(%d)
Line 1863: [HALLMAC3G] %s: Wrong %s(%d)
Line 2501: [HALLMAC3G] %s: Wrong %s(%d)
Line 2502: [HALLMAC3G] %s: Wrong %s(%d)
Line 2509: EDCH LMAC Register is not updated
Line 2520: ** Error : EdchDataConfigInfo is NULL in case of new transmission. PointerIsNull Cnt: %d **
Line 2544: TrbkSize is Zero in LMAC EDCH-Command
Line 2575: txTTIBufData_EdchInfo[%d]: TotalByteLength %d, TransferAddr 0x%x, LmacDoneIndication %d
Line 2600: [HALLMAC3G] %s: Wrong %s(%d)
Line 2624: TXEdchProcessing is not finished: LmacPollCnt %d, pend_status %d
Line 2721: ETC_3G_MODEM_SELECT = %X
Line 2747: [HALLMAC3G] %s: Wrong %s(%d)
Line 2757: Many of total packet number: NumOfPacket_1 %d, NumOfPacket_2 %d
Line 2857: R8 PacketGen: tx_fsm_status_cip_pack %x, tx_fsm_status_trs_harq %x, SelectDualCell %x,NumOfPacket_1 %d, NumOfPacket_2 %d
Line 2862: TX LMAC invalid operation mode %d
Line 2889: [HALLMAC3G] %s: Wrong %s(%d)
Line 2951: [LMAC] TTI Buffer Setting. Modem Selection (0:HSPA)
Line 3502: [HALLMAC3G] %s: Wrong %s(%d)
Line 3503: [HALLMAC3G] %s: Wrong %s(%d)
Line 3510: LMAC mode is not 3G (ETC_3G_MODEM_SELECT: %d, TTI_MODEM_SEL: %d)
Line 3514: RX_STATUS: 0x%x, TX_FSM_STATUS_CIP_PACK: 0x%x, TX_FSM_STATUS_TRS_HARQ: 0x%x
Line 3541: Num of RB is Zero in EDataTransferOnly or EDataTransferWithCipher
Line 3565: [HALLMAC3G] %s: Wrong %s(%d)
Line 3616: [HALLMAC3G] %s: Wrong %s(%d)
Line 3659: [HALLMAC3G] %s: Wrong %s(%d)
Line 3679: NumOfPdu and NumOfLI should be same: RbId %d, NumOfPdu %d, NumOfLI %d
Line 3753: PduGen DescriptorInfo(EDCH): RbId %d, LiLength %d,DstAddr(Start) %x, AddrOffset %x, PduLength %d
Line 3786: TX EDCH PDU GEN (Flexible): RbId %d, NumOfPdu %d, NumOfLI %d, tx_fsm_status_cip_pack %x, tx_fsm_status_trs_harq %x
Line 3874: PduGenWithCipher(Flexible): RbId %d, Num %d, LiLength %d, PduAddr(start) %x, DstAddr %x, Size(LI+Payload) %d
Line 3985: PduGenWithCipher: RbId %d, tx_fsm_status_cip_pack %x, tx_fsm_status_trs_harq %x, cip_info[0] %x, ciph_cnt[0] %x, countc[0] %i, ck_src_index[0] %x
Line 4007: [DUMMY]PrintLmacRxCommonProcessorReg:
Line 4046: HW destination control. BASE_ADDR 0x%x, SW_INIT_DST_ADDR 0x%x, END_ADDR 0x%x
Line 4200: R99 Parsing in UMAC (LMAC busy): rx_cs_rcv_cctrch %d, rx_status 0x%X, LmacLoopCnt %d
Line 4257: [Warning, Wrong Register Setting for BCH LMAC] rx_bch_data_ctrl=0x%x, trch_info_bch_num_reg=0x%x, trch_info_bch_size_reg=0x%x
Line 4272: [Warning] R99 Parsing Cmd discard !!!!(rx_command_status: 0x%X)
Line 4318: activeStackId %d Store lmacConfigVal[activeStackId].REG_CK_REG0[%d] = 0x%x
Line 4322: activeStackId %d Store lmacConfigVal[activeStackId].REG_CK_REG1[%d] = 0x%x
Line 4328: activeStackId %d Store lmacConfigVal[activeStackId].RX_MODE_INDICATOR = 0x%x
Line 4332: activeStackId %d Store lmacConfigVal[activeStackId].TSN14Bit_Mode = 0x%x
Line 4369: activeStackId %d isResume %d isTDDActive %d HW destination control(3GRATSel)
Line 4380: activeStackId %d Restore lmacConfigVal[activeStackId].REG_CK_REG0[%d] = 0x%x
Line 4389: activeStackId %d Restore lmacConfigVal[activeStackId].REG_CK_REG1[%d] = 0x%x
Line 4512: GetRx3GDstAddrAndByteSize: Wrong inx (%d)
Line 4542: GetRxTrbkIndx: Wrong inx (%d)
Line 4574: GetRxMacehsErrStatus: Wrong inx (%d)
Line 4670: [Warning] Out-Of-Range. BASE_ADDR 0x%x, END_ADDR 0x%x, SW_INIT_DST_ADDR 0x%x, dest_addr 0x%x
Line 4674: [Warning] HW ADDR. rx_ps_3g_start_addr 0x%x, rx_ps_3g_end_addr 0x%x, rx_3g_sw_init_addr 0x%x
Line 4738: GetFirstMemPsMonTrbk: Wrong inx (%d)
Line 4768: GetLastMemPsMonTrbk: Wrong inx (%d)
Line 4798: GetTrbkPduTsnAndSi: Wrong inx (%d)
Line 4828: GetPsMonTrbkPdu: Wrong inx (%d)
Line 4858: GetTrbkPduLchidAndLength: Wrong inx (%d)
Line 4890: GetTrbkPduLchidAndLength: Wrong inx (%d)
