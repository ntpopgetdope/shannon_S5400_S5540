Line 591: HAL_LmacGet_PsOperationMode : dwPsOperationMode = %x
Line 677: [LMAC%d][MERGED_BUF][VERIFY] HW CUR[0x%x], HW WR[0x%x], HW FREE[0x%x]
Line 678: [LMAC%d][MERGED_BUF][VERIFY] SW CUR[0x%x], SW FREE[0x%x]
Line 680: [LMAC%d][MERGED_BUF][VERIFY][LmacBufferFullPrintDump] (4G) HW CUR[0x%x], HW WR[0x%x], HW FREE[0x%x]
Line 681: [LMAC%d][MERGED_BUF][VERIFY][LmacBufferFullPrintDump] (5G) HW CUR[0x%x], HW WR[0x%x], HW FREE[0x%x]
Line 691: [LMAC%d][MERGED_BUF][VERIFY] SUB 4G[%x/%x], 5G[%x/%x], MERGE_ON[%d], SUBBUF_ON[%d]
Line 776: [LMAC%d][MERGED_BUF][ADDR][FREE] : LatestCurAddr[%x], FREE_LTE/NR[%x/%x], RemainBufferSize[%x]
Line 974: [LMAC%d][MERGED_BUF][BLOCK][FAIL] : ALREADY BLOCKED, RAT[%d], RX_4G/5G_CUR_DATA_ADDR[%x/%x], RX_4G_SW_FREE_DATA_ADDR[%x/%x], ptrLmacCtrl->WriteAddr[%x]
Line 981: [LMAC%d][MERGED_BUF][BLOCK][FAIL] : ALREADY BLOCKED, eReqRat[%d], geBlockReqRat[%d], ReqCount[%d]
Line 1051: [LMAC%d][MERGED_BUF][BLOCK][SUCCESS] : INIT_DST_ADDR, RAT[%d], RX_4G/5G_CUR_DATA_ADDR[%x/%x/%x], RX_4G_SW_FREE_DATA_ADDR[%x/%x/%x]
Line 1067: [ERROR][LMAC%d][MERGED_BUF][STATUS] : CURBUF[%d] NrErrorStatusCb RX_4G5G_ERR_STATUS[%x] 
Line 1094: [LMAC%d][MERGED_BUF][ADDR][UPDATE][FORCED] : CurBuf[%d], dwCurAddr[%x]
Line 1131: [LMAC%d][MERGED_BUF][ADDR][UPDATE] : CurBuf[%d/%d], CurRat[%d][0=LTE,1=NR], dwNextAddr[%x], dwLatestCurAddr[%x], LTE/NR[%x/%x]
Line 1270: [LMAC][MERGED_BUF][ADDR][GET] : eCurBufType[%d], dwStartAddr[%x]
Line 1282: [LMAC][MERGED_BUF][ADDR][GET] : eCurBufType[%d], dwEndAddr[%x]
Line 1398: TX busy on wake-up, LMAC Busy(%d)
Line 2753: [HAL][LMAC%d] Abnormal SLP Header !!!
Line 2818: [HAL][LMAC%d][L2DEBUG] SIB: CCIdx[%d]/RxTTI[%d]/SIBRxTTI[%d]
Line 2838: [HAL][LMAC%d] MBMS received at the wrong CC[%d]!!!
Line 2907: [HAL][LMAC%d] Forced LmacFreeDataAddr
Line 2938: [HAL][LMAC%d] LMAC Data Size is 0 !!!
Line 3060: [WARN][LMAC%d] MODEM is not available : tti_modem_sel == 0
Line 3069: [WARN][HAL][LMAC%d][LMACDLDmaDone] dwRX_4G_CUR_DATA_ADDR == NULL 
Line 3081: [HAL][LMAC%d][LMACDLDmaDone] RX_4G_CUR_DESC_NUM[0x%x], CurrDescNum[0x%x], dwRX_4G_SW_FREE_DESC_NUM[0x%x] PrevDescNum[0x%x] dwRpdu_info/dwWpdu_info[%x/%x] 
Line 3085: [HAL][LMAC%d] RX_4G_SW_FREE_DESC_NUM/RX_4G_CUR_DESC_NUM[%d/%d] is zero !!!
Line 3093: [HAL][LMAC%d] RX_4G_CUR_DESC_NUM is not updated : RX_4G_CUR_DESC_NUM[0x%x]
Line 3101: [HAL][LMAC%d] LMAC Dummy Interrupt : RX_4G_CUR_DESC_NUM[0x%x]
Line 3111: [WARN][HAL][LMAC%d][LMACDLDmaDone] Forced Update PrevDescNumber[0]
Line 3135: [HAL][LMAC%d] HALLMAC_4G_ProcLMACDLDmaDone : ptrLmacCtrl->FullReset
Line 3151: [HAL][LMAC%d] pal_LmacDlHCB Activation : LmacPduQ[%d]
Line 3450: [INFO][HAL][LMAC] LMAC POLLING is already Active
Line 3633: Unicast RX Buffer Reset
Line 3644: Clear Security Blocked TX[%x],RX[%x] !!!!
Line 3688: [HAL][LMAC%d][S%x] L2BUF Not empty[%d], DescErrCnt[0x%x], SW_INIT_DST_ADDR[0x%x]/FAddr[0x%x]  W/RPduInfo[%d %d], SWINIT_COND[%d]
Line 3742: HALLMAC_4G_UpdatePduTable : RXFSM_SW_INIT
Line 3918: [HAL][LMAC%d] HALLMAC_4G_ProcLMACRxError : RXFSM_SW_INIT
Line 3945: [HAL][LMAC%d]LMAC HW INIT : ErrorStatus(%x), WAddr[SW:%x, HW:%x], RX HW Desc[%d]
Line 3953: [ERROR][HAL][LMAC%d] Full Reset LMAC
Line 4011: [ERROR][LMAC%d][MERGED_BUF][INIT] : LMACINIT ERROR dwLatestCurAddr==0, Forced Update[%x]
Line 4064: [LMAC%d][MERGED_BUF][INIT] : RX_4GPS_INIT_DST_ADDR HW[1]+SW[%d], RX_4G_SW_DESC_NUM/ADDR[%x/%x], RX_4G_SW_FREE_DESC_NUM[%x], RX_PS_OPERATION_MODE[%x], RX_xG_DATA_DMA_CTRL[%x], RX_4G_DESC_DMA_CTRL[%x]
Line 4097: [LMAC%d][MERGED_BUF][INIT] : RX_MERGE_INIT_DST_ADDR HW[1] SW[1], START[%x], FREE/WRITE[%x/%x/%x] CURADDR[%x], END[%x]
Line 4111: [ERROR][LMAC%d][MERGED_BUF][INIT] : RX_MERGE_INIT_DST_ADDR, START[%x/%x], FREE/WRITE[%x/%x/%x], END[%x/%x]
Line 4135: [WARN][LMAC%d][MERGED_BUF][ADDR][STAT] : Invalid RxCore
Line 4152: [LMAC%d][MERGED_BUF][ADDR][STAT] : dwNextWriteAddr:LTE/NR[%x/%x], dwSW_FREE_ADDR[%x/%x], RX_5G_SW_FREE_DATA_ADDR[%x]
Line 4622: [HAL][LMAC%d] MAC PDU Table FULL !!!
Line 4974: GET_LTE_LMAC_TEST_MODE : dwIdx[%d], ret[%d]
Line 5002: SET_LTE_LMAC_TEST_MODE : [%d,%d,%d,%d,%d,%d,%d]
Line 5013: SET_LTE_LMAC_TEST_MODE : [%d,%d,%d,%d,%d,%d,%d]
Line 2426: Illegal Modem Access on POWER OFF
Line 2435: TX_FSM0[%d], TX_FSM1[%d]
Line 3395: Abnormal LMAC TX intr[%d]
Line 3846: TX LMAC ERROR OCCURED, BUS_ERROR[%x] !!!
Line 3247: [ERROR][LMAC%d] RX_4G5G_ERR_STATUS[0x%x], 
Line 3254: [ERROR][LMAC%d] LMAC Invalid TrBK Error Triggered
Line 1376: Clear Security Blocked TX[%x],RX[%x] in Idle State !!!!
Line 1354: RX Security Blocked[%x] !!!!
Line 1712: [HAL][LMAC%d] HALLMAC_4G_InitLMACRXReg : RXFSM_HW_INIT
Line 3803: [HAL][LMAC%d] ErrorStatus(%x), WAddr[SW:%x, HW:%x], FAddr[HW:%x], RX Desc SR[%d]:SW[%d]:HC[%d]
Line 3804: [HAL][LMAC%d] RX_5G_SW_FREE_DATA_ADDR[%x], RX_5G_CUR_DATA_ADDR[%x]
Line 3808: [HAL][LMAC%d] SW Addr[W:%x, F:%x, HF:%x], RX Desc[W:%d, R:%d]
Line 2493: [TRSMGR][LTE] Used TRS TxInd(0) cwInfo(%d/%d)
Line 2511: [TRSMGR][LTE] Used TRS TxInd(1) cwInfo(%d/%d)
Line 3593: LMAC Lagging trigger RRE
Line 3602: Forced RRE (sleeping)
Line 2452: Illegal Modem Access on POWER OFF
Line 2461: TxInd[%d], TX_FSM0[%d], TX_FSM1[%d]
Line 2466: TxInd[%d], TX_FSM0[%d], TX_FSM1[%d]
Line 4195: [HAL][LMAC][InitLMACforDRX] REG_GET_RX_4G5G_ERR_STATUS C0[0x%x/0x%x] C1[0x%x/0x%x]
Line 2010: HALLMAC_4G_Set2TXTransfer : Desc num[%d] over !!!!
Line 2027: HALLMAC_4G_Set2TXTransfer : 2TX HID[%d] wrong!!!!
Line 2183: FSM Busy
Line 3754: LMAC RX Reset After RRE [%d]
Line 3761: Pendig LMAC RX Reset After RRE
Line 2957: LMAC Lagging trigger RRE with IDLE eMBMS
Line 3460: [INFO][HAL][LMAC] EnableLMACTestMode
Line 3467: [INFO][HAL][LMAC] EnableLMACTestMode_S:[%d]
