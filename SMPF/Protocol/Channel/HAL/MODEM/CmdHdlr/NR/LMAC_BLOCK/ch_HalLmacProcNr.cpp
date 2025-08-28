Line 133: [HAL][LMAC] LmacInit() Start! bDmaInit(%d) bHwInit(%d)
Line 137: [HAL][LMAC] Forced Lmac HW init!
Line 150: [HAL][LMAC] IsSubBufOn(%d)
Line 188: [HAL][LMAC] EnableIsrHandlerTx() Start!
Line 206: [HAL][LMAC] EnableIsrHandlerRx() Start!
Line 232: [ERROR][HAL][LMAC] invalid operation mode! RX_PS_OPERATION_MODE = %u
Line 253: [HAL][LMAC][C0] NrLmacFree! Remain Lmac Buffer size : %u (KB), Remain Lmac Desc Cnt(%u) LMAC_BUFFER_LOW_LIMIT(%d) LMAC_DESC_LOW_LIMIT(%d)
Line 257: [WARNING][HAL][LMAC][C0] Insuf remain lmac buf! Trigger InsufLmacBufInd msg by ForceNrFree
Line 285: [HAL][LMAC] LmacInitMergedBuffer() Start!
Line 294: [HAL][LMAC][C0] Update! Remain Lmac Buffer size : %u (KB), Remain Lmac Desc Cnt(%u) LMAC_BUFFER_LOW_LIMIT(%d) LMAC_DESC_LOW_LIMIT(%d)
Line 305: [LMAC] InitLmacRxPollingTimer() Start!
Line 320: [LMAC][POLLING][WARNING] StartLmacRxPollingMode fail! MBUS power is off!
Line 326: [LMAC][POLLING] Lmac polling will not be started in UE_TEST_MODE
Line 337: [LMAC][POLLING] Lmac polling will not be started in CanUsePolling false state
Line 348: [LMAC][POLLING] Lmac polling is already trigger,do not trigger again,PollingSTATUS[%d]
Line 358: [LMAC][POLLING] StartLmacRxPollingMode()! eResult(%d)
Line 369: [LMAC][POLLING] Stop Lmac Polling in NR Modem not ACTIVE state!
Line 373: [LMAC][POLLING] Ignore stop polling timer while running polling start
Line 388: [LMAC][POLLING][WARNING] Polling soft stop is already on!
Line 393: [LMAC][POLLING] Polling soft stop on!
Line 400: [LMAC][POLLING] L2 Release case! Do not control LmacRx interrupt
Line 411: [LMAC][POLLING] Do not run soft stop
Line 417: [LMAC][POLLING] StopLmacRxPollingMode()! Lmac Polling soft stop mode!
Line 441: [HAL][LMAC][POLLING][WARNING] MBUS Power domain is off! Do not polling anymore!
Line 450: [HAL][LMAC][POLLING] Retry this timer again
Line 456: [HAL][LMAC][POLLING] OneMorePolling!
Line 461: [HAL][LMAC][POLLING] Modem is not wake up state! Do not polling anymore!
Line 480: [POLLING] RX_5G_CUR_DATA_ADDR(0x%x) RX_5G_SW_FREE_DATA_ADDR(0x%x) RX_5G_CUR_DESC_NUM(%d) RX_5G_SW_FREE_DESC_NUM(%d) RX_STATUS(0x%x) RX_4G5G_ERR_STATUS(%d)
Line 492: [ERROR][HAL][LMAC] invalid operation mode! RX_PS_OPERATION_MODE = %u
Line 510: [LMAC][POLLING] Stop lmac polling timer!
Line 542: [ERROR][HAL][LMAC] Wrong configState!
Line 554: [ERROR][HAL][LMAC] Wrong DomainType(%d)
Line 571: [ERROR][OTF] Wrong DomainType(%d)
Line 576: [ERROR][OTF] Wrong lcId(%d)
Line 596: [ERROR][OTF] Wrong RatType(%d)
Line 608: [OTF] windowIdx(%d) windowIdxKey(0x%x)
Line 663: [ERROR][HAL][LMAC] invalid operation mode! RX_PS_OPERATION_MODE = %u, LmacErrorCnt = %u
Line 705: [ERROR][HAL][LMAC] invalid operation mode! RX_PS_OPERATION_MODE.reg = %u, LmacErrorCnt = %u
Line 740: [ERROR][HAL][LMAC] PrevDescNum is 0! Something is wrong!
Line 759: [ERROR][HAL][LMAC] RX_4G5G_ERR_STATUS(%d) Invalid Trbk error!
Line 764: [ERROR][HAL][LMAC] RX_4G5G_ERR_STATUS(%d) is not 0. But ignore this err
Line 783: [HAL][LMAC] LmacResetInd is triggered. Skip LmacProc until LmacInit done.
Line 793: [WARNING][HAL][LMAC] RX_5G_CUR_DESC_NUM(%d)! Reset IgnoreDescNum(%d)!
Line 798: [WARNING][HAL][LMAC] Ignore RX_5G_CUR_DESC_NUM(%d)!
Line 804: [HAL][LMAC] This is normal RX_5G_CUR_DESC_NUM(%d)! Reset IgnoreDescNum(%d)!
Line 835: [HAL][LMAC][C%d] PrevDescNumber(%u) CurDescNumber(%u) FreeDescNumber(%u) WD(%d) RD(%d)
Line 838: [ERROR][HAL][LMAC] Invalid CurDescNumber(%d)
Line 860: [WARNING][HAL][LMAC] Invalid Lmac descriptor! Ignore it!
Line 883: [ERROR][HAL][LMAC] Stop Lmac descriptor processing!
Line 921: [ERROR][C%d] domainType(%d) is out of range!
Line 927: [L2DS][C%d] LastDomainType is changed! DomainType(%d -> %d) WD(%d) RD(%d)
Line 939: [HAL][LMAC][C%d] Remain Lmac Buffer size : %u (KB), Remain Lmac Desc Cnt(%u) LMAC_BUFFER_LOW_LIMIT(%d) LMAC_DESC_LOW_LIMIT(%d)
Line 945: [WARNING][HAL][LMAC][C%d] Insuf remain lmac buf! Trigger InsufLmacBufInd msg!
Line 951: [WARNING][HAL][LMAC][C%d] Insuf remain lmac buf! Skip sending msg
Line 975: [HAL][LMAC][C%d] Skip ConfirmExtCmd! Previous one is running
Line 1006: [ERROR][HAL][LMAC][C%d] !!! LMAC DUMP REGISTER! LmacErrorCnt(%u) index(%d)
Line 1034: [ERROR][HAL][LMAC][C%d] Invalid cellType(%u)! LmacErrorCnt(%u)
Line 1050: [ERROR][HAL][LMAC][C%d] MAC PDU Table FULL !!!
Line 1079: [ERROR][HAL][LMAC][C%d] !!! LMAC DUMP REGISTER! LmacErrorCnt(%u) index(%d) DomainType(%d) loopCnt(%d)
Line 1108: [WARNING][HAL][LMAC][C%d][PDCP parser] Discard desc start! index(%d) HdrSegIndex(%d) numOfPdu(%d) LmacErrorCnt(%d) loopCnt(%d)
Line 1192: [ERROR][HAL][LMAC][C%d] Invalid cellType(%u)! LmacErrorCnt(%u)
Line 1201: [HAL][LMAC][C%d] PduSize(%d) CC_index(%d) DCSCG_ind(%d) PduAddr(0x%x) DescAddr(0x%x) Status(%u) DCSCG_ind(%d)
Line 1202: [ERROR][HAL][LMAC][C%d] MAC PDU Table FULL !!!
Line 1218: [HAL][LMAC][C%d][WARNING] Too many MAC PDU! Skip print
Line 1222: [HAL][LMAC][C%d][MAC PDU] PduSize(%d) CC_index(%d) DCSCG_ind(%d) PduAddr(0x%x) DescAddr(0x%x) Status(%u) DataType(%d) domainType(%d)
Line 1229: [ERROR][HAL][LMAC][C%d] Too many MAC PDU! Discard rest of them
Line 1240: [ERROR][HAL][LMAC][C%d] status(%d) is invalid. This desc will be discarded! index(%d) PduSize(%d)
Line 1276: [ERROR][HAL][LMAC][C%d][index(%d)] Unknown DomainType(%d)
Line 1292: [ERROR][HAL][LMAC][C%d] Invalid cgType(%u)! LmacErrorCnt(%u)
Line 1318: [HAL][LMAC][C%d][Dump Reg] GetTrsCurAddrOfL2Buf(0x%x) pLmacCtrl->StartAddr(0x%x)
Line 1322: [HAL][LMAC][C%d][Dump Reg] GetParsSduPayload(0x%x) pLmacCtrl->StartAddr(0x%x)
Line 1327: [ERROR][HAL][LMAC][C%d] invalid operation mode! LmacOperMode = %u
Line 1332: [LMAC][Dump Desc] desc idx[%d] = 0x%x
Line 1345: [LmacState][NR1] RX_5G_CUR_DATA_ADDR(0x%x) RX_5G_SW_FREE_DATA_ADDR(0x%x) RX_5G_CUR_DESC_NUM(%d) RX_5G_SW_FREE_DESC_NUM(%d) RX_STATUS(0x%x) RX_4G5G_ERR_STATUS(%d)
Line 1346: [LmacState][NR2] PrevDescNum(%d) CurrDescNum(%d) RemainLmacBufSize(%d)(KB) RemainLmacDescCnt(%d) WriteAddr(0x%x) FreeAddr(0x%x) WD(%d) RD(%d)
Line 1347: [LmacState][LTE] RX_4G_CUR_DATA_ADDR(0x%x) RX_4G_SW_FREE_DATA_ADDR(0x%x) RX_4G_CUR_DESC_NUM(%d) RX_4G_SW_FREE_DESC_NUM(%d)
Line 1383: [ERROR][LMAC][C%d] EndAddr(0x%x) < StartAddr(0x%x)!
Line 1395: [ERROR][LMAC][C%d][BufCal] RealCurAddr(0x%x) is too high! 4G CUR(0x%x) 4G FREE(0x%x) 5G CUR(0x%x) 5G FREE(0x%x)
Line 1469: [WARNING][LMAC][C%d][BufCal] RemainLmacBufSize(%d) is too high! RealCurAddr(0x%x) 4G CUR(0x%x) 4G FREE(0x%x) 5G CUR(0x%x) 5G FREE(0x%x)
Line 1500: [LMAC][C%d][BufCal] First time CalRemainLmacBuf! 4G CUR(0x%x) 4G FREE(0x%x) 5G CUR(0x%x) 5G FREE(0x%x)
Line 1513: [LMAC][BufCal] Both Wrap case. RealCurAddr(0x%x) 5G CUR(0x%x) 4G CUR(0x%x)
Line 1519: [LMAC][BufCal] LTE Wrap case. RealCurAddr(0x%x) 5G CUR(0x%x) 4G CUR(0x%x)
Line 1524: [LMAC][BufCal] NR Wrap case. RealCurAddr(0x%x) 5G CUR(0x%x) 4G CUR(0x%x)
Line 1531: [LMAC][BufCal] Release NR/LTE Wrap around flag
Line 1537: [LMAC][BufCal] Release LTE Wrap around flag
Line 1547: [LMAC][BufCal] Release NR Wrap around flag
Line 1568: [ERROR][HAL][LMAC][C%d] LmacStartFullReset() Start! RX_4G5G_ERR_STATUS = %u, RX_STATUS(0x%x)
Line 1574: [HAL][LMAC][C%d] LmacResetInd is already triggered. Do not send Lmac Reset IND.
Line 1578: [HAL][LMAC][C%d] Lmac HW init case. Do not send Lmac Reset IND.
Line 1591: [HAL][LMAC] LmacRxRlcConfigSet() Start!
Line 1596: [ERROR][HAL][LMAC] Wrong DomainType(%d)
Line 1615: [HAL][LMAC][C%d] Send L2_HAL_LMAC_RESET_IND! to reset L2 layers. lastDomainType(%d) lastCgType(%d)
Line 1621: [HAL][LMAC] RX_5G_SW_FREE_DESC_NUM(%d) is initial value! Set desc num as 0!
Line 1629: [HAL][LMAC] CoreId(%d) NotFreeDescAddr(0x%x) swFreeDescNum(%d)
Line 1633: [ERROR][HAL][LMAC] SendMsgInterDomain fail
Line 1645: [HAL][LMAC][C%d] Send L2_HAL_INSUF_LMACBUF_IND! lastDomainType(%d) swFreeDescNum(%d)
Line 1651: [HAL][LMAC] RX_5G_SW_FREE_DESC_NUM(%d) is initial value!
Line 1660: [HAL][LMAC] Lmac Insuf buf. NotFreeDescAddr(0x%x)
Line 1665: [ERROR][HAL][LMAC][C%d] SendMsgInterDomain fail
Line 1689: [ERROR][HAL][LMAC] ConfirmExtCmd_LmacRx. Invalid coreId(%d)!
Line 1697: [ERROR][HAL][LMAC] pCmdReqHdr == nullptr!
Line 1708: [ERROR][HAL][LMAC] Lmac garbage detected! DiscardAll!
Line 1933: [ERROR][HAL][LMAC][TRSMGR] m_TxTrsCmdQueue is empty
Line 1946: [ERROR][HAL][LMAC][TRSMGR] m_TxTrsCmdQueue is empty
Line 1953: [ERROR][HAL][LMAC][TRSMGR] m_TxTrsCmdQueue front is not LTE
Line 1978: [HAL][LMAC] LmacTxTrsStart(NumDma: %d, Harq: %d) Start!
Line 2003: [ERROR][HAL][LMAC] Empty MacSduDescDmaList! idx(%d) NumDma(%d) HarqId(%d)
Line 2076: [HAL][LMAC][E] pFirstDmaDesc[0x0]
Line 2100: [ERROR][HAL][LMAC] LmacTx Busy! _TxFailCountNr[%d]
Line 2132: [HAL][LMAC] LmacTxTrsStart(NumDma: %d, CCIdx: %d, Harq: %d, TxIndex: %d) Start!
Line 2160: [ERROR][HAL][LMAC] Empty MacSduDescDmaList! idx(%d) NumDma(%d) HarqId(%d) TxInd(%d)
Line 2233: [HAL][LMAC][E] pFirstDmaDesc[0x0]
Line 2257: [HAL][LMAC][ERROR] LmacTx Busy! _TxFailCountNr[%d]
Line 2297: [HAL][LMAC] HARQ buffer status ind HID(%d), SlotInfo(%d)
Line 2336: [HAL][LMAC] HARQ buffer status ind TxIndex(%d) CC(%d) HID(%d) dwPuschSlot(%d) 
Line 2402: [ERROR][HAL][LMAC] Abnormal LMAC TX intr[%d]
Line 2434: [WARNING][HAL][LMAC] UlLmacDoneLisrNr:: No runnuing LMAC_TX_TRS_START_NR_CMD
Line 2488: [HAL][LMAC] LmacStartCipher(%d) End! TotalPdu(%d)
Line 2573: [HAL][LMAC] Error, pCmdReqHdr = nullptr !!!
