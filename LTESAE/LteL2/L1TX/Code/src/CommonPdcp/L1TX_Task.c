Line 499: LTE_SendL2LTXMsgToSmpfMac Send Fail!! (rst=%d)
Line 588: [L2C] LTE_ProcULRlcL2CMsg, pMsg is NULL
Line 607: Send LTE_L2HTX_L2LTX_PDCP_TX_SUSPEND_REQ ReqType[%d]
Line 613: [L2C] LTE_ProcULRlcL2CMsg, Wrong req_id[0x%x]
Line 633: [Multicore] LTE_ProcForwardTxMsg_N_Wait: pVoidMsg[0x%x] eMsgEntity[%d]
Line 644: LTE_ProcForwardTxMsg_N_Wait : msg send fail
Line 656: LTE_ProcForwardTxMsg_N_Wait : msg send fail
Line 665: LTE_ProcForwardTxMsg_N_Wait : set event fail
Line 677: LTE_ProcForwardTxMsg_N_Wait : pal_SmRetrieveEvents fail
Line 681: [Multicore] LTE_ProcForwardTxMsg_N_Wait: pal_SmRetrieveEvents ltel2ltx_run_wait_event_group
Line 763: UDC CheckSum Fail !! Rlc Q update : RB_ID[%d] RlcPduBo[%d] RemainNewData[%d] Size[%d] pStart/EndPtr[0x%x 0x%x] Count[%d]
Line 963: [ERROR] pal_Malloc Fail !!!!
Line 982: Send LTE_L2HTX_L2LTX_RB_PRIORITY_IND : MacEntity[%d] RbCnt[%d]
Line 995: RB_ID[%d]pal_Malloc Fail
Line 1012: [MULTICORE] Send LTE_L2HTX_L2LTX_DISCARD_Q_IND : RB_ID[%d] pStartDesc[0x%x], pEndDesc[0x%x], SduCnt[%d] bSlSdu[%d] bIsSRB[%d]
Line 1380: LTE_ProcULMacRrcMsg : set event fail
Line 1384: [MULTICORE] LTE_ProcULMacRrcMsg: Resume ltel2ltx_run_wait_event_group
Line 1413: [Multicore] LTE_ProcULMacRrcMsg_Internal: pMsg[0x%x] req_id[%d] 
Line 1421: [Multicore] LTE_ProcULMacRrcMsg_Internal: receive LTE_CMAC_RACH_START_REQ. RACause[%d]
Line 1435: [MULTICORE] LTE_ProcULMacRrcMsg_Internal: COMMON_BW_20
Line 1447: [MULTICORE] LTE_ProcULMacRrcMsg_Internal: (HALSC_GetDlBw(CC0, 0) != COMMON_BW_20)
Line 1472: [MULTICORE] Receive LTE_CMAC_RACH_STOP_REQ: End RACH Procedure
Line 1512: Send LTE_L2HTX_L2LTX_PDCP_TX_SUSPEND_REQ ReqType[%d]
Line 1621: Send LTE_L2HTX_L2LTX_PDCP_TX_SUSPEND_REQ ReqType[%d]
Line 1711: MAC reset(UL)-cause(%d)
Line 1772: Wrong LTE_CMAC_UL_RESET_REQ cause:%d
Line 2004: TX_CNF TYPE ERROR
Line 2747: MAC[%d]: Schduling skip by RF release
Line 2757: [MACTX][ENTITY:%d] Scheduling skip by mac_dl_reset
Line 2762: MAC[%d]: Schduling skip by UL GRANT STACK release
Line 2884: [MACTX]: PROC_UL_GRANT_FAIL_RRE
Line 2891: [MACTX]: PROC_UL_GRANT_FAIL
Line 2961: MAC[%d]: Schduling skip by RF release
Line 3010: [MACTX][UL GRANT 2nd] : PROC_UL_GRANT_FAIL
Line 3973: L2 METRICS ReportTimerExpired
Line 4374: return in  L1TX_SumbitLT12
Line 4377: L1TX_SumbitLT12
Line 4382: L2 L1TX_SumbitLT12, [%d, %d][%d, %d] 
Line 4392: LT12 PUSCH_Power[%d], Wb[%d], SB[%d]
Line 4547: Fail pal_Malloc and Fail Send LTE_L2LTX_L2LTX_POLL_TMR_EX_IND!!! 
Line 4611: LTE_InitL1TX
Line 4714: [DataMonitor] InitL2LTX (CommonPdcp)
Line 5075: LTE_SendL2LTXMsgToL12: msgId[%x]. pMsg[%x]
Line 5156: Fail LTE_SendL2LTXMsgToL12 [%x]
Line 5230: Fail LTE_SendL2LTXMsgToL1LC [%x], Stack[%d]
Line 5323: Fail LTE_SendL2LTXMsgToRRC [%x]
Line 5359: [L1TX => L1LC] Send L1TX_L1LC_TX_REQ (TYPE:%d)
Line 5364: Cannot Allocate L1TX_L1LC_TX_REQ
Line 5397: [L1TX => L1LC] Send L1TX_L1LC_TX_DONE_IND (TYPE:%d)
Line 5402: Cannot Allocate L1TX_L1LC_TX_DONE_IND
Line 5466: MAC_Release: Scell Tx Cmd[%d/%d]
Line 1345: NRMAC_L2HTX_LTE_HO_IND Send
Line 1350: NRMAC_L2HTX_LTE_HO_IND Send Fail!! (rst=%d)
Line 2553: valid grant cnt and grant_num are not the same (%d,%d)!!!
Line 2560: UL grant, but modem sleeping
Line 2631: [MACTX][ENTITY:%d] Scheduling Start[%x], GrantSize[%x/%x] SFN_TTI[%d] MaxWdIdx/HisrRdIdx/RdIdx[%d/%d/%d]
Line 2637: [MACTX] L2LTXMAC_ULScheduling Skip(index: %d) Stack[%d], MacEntity[%d] !!!
Line 2642: [MACTX] L2LTXMAC_ULScheduling Fail(index: %d) Stack[%d], MacEntity[%d] !!!
Line 2648: [MACTX] L2LTXMAC_GenerateMACPDU Fail(index: %d) Stack[%d], MacEntity[%d] !!!
Line 2923: [WARN][MACTX][STACK:%d] Trigger SRI by GrantFail
Line 4455: L1TX_LT12ReportTimerExpired
Line 4489: LT METRICS Timer[%d], DRX Cycyle[%d]
Line 4494: LT12ReportWaiting : modem down or CDRX
Line 4501: Restart LT12ReportTimerHdl next DRX cycle[%d]
Line 3044: L1TX_ForcedBSRTimerExpired
Line 1022: pal_Malloc Fail
Line 1030: [MULTICORE] L2LTX_SendDataMonTmrExpInd
Line 786: LTE_ProcForwardULPhyRrcMsg: pMsg[0x%x]
Line 768: LTE_ProcForwardULMacRrcMsg: pMsg[0x%x]
Line 1935: [MULTICORE] Receive LTE_L2LTX_DATA_MON_TMR_EXP_IND
Line 1943: [MULTICORE] LTE_L2LTX_L2LTX_START_RA_IND 
Line 1967: [Multicore] LTE_L2LTX_TA_TIMER_EXP_IND
Line 3071: L1TX_DataMonTmr_Expired ignored
Line 3075: [MULTICORE] L1TX_DataMonTmr_Expired. appTimerId[%d]
Line 2035: [L1LC => L1TX] L1LC_L1TX_TX_CNF (TYPE:%d)
Line 2049: Rxed L1LC_L1TX_TX_RF_STATUS_IND
Line 2057: TA Timer Restart at the RF_STATUS_IND !!!
Line 2072: Trigger SRI for DSDS
Line 2114: RB_ID[%d]Fail pal_Malloc and Fail Send LTE_L2HRX_L2HRX_T1_TMR_EX_IND!!!
Line 2131: [LTE_L1TX] Send NRMAC_L2LTX_TX_RESUME_REQ
Line 2137: Rxed L1LC_L1TX_TX_RF_RELEASE_IND
Line 2145: [LTE_L1TX] Send NRMAC_L2LTX_TX_PAUSE_REQ
Line 2236: PHR triggered by activation of an SCell(sCellIndex:%d) with configured uplink
Line 2292: [MACTX] bTxSuspend_Cause_RxReset=TRUE
Line 2397: RB_ID[%d] RLC_CTL_STATUS_PDU :: Not Active L1TX[%d]
Line 2401: RB_ID[%d] RLC_CTL_STATUS_PDU :: Free CtrlPdu[0x%x]
Line 2332: [WARN][MACTX][TASK][EVENT][BSR] bMacAvailable = FALSE
Line 1075: [Error] Received empty message
Line 1114: [WARN][RLCTX][ENTITY:%d][DRBID:_] LTE_L2LTX_L2HTX_DATA_IND, RLC is not activated, Discard PDCP COUNT[%d..%d] PktCount[%d]
Line 1120: [MULTICORE] RB_ID[%d] Receive LTE_L2LTX_L2HTX_DATA_IND. Reason[%d] pStartPtr[%x] pEndPtr[%x] Count[%d] AddSize[%d]
Line 1151: [Error] Invalid Reason[%d]
Line 1170: [MULTICORE] RB_ID[%d] ERROR! pCtlPdu == NULL
Line 1173: [MULTICORE] RB_ID[%d] Receive LTE_L2LTX_L2HTX_PDCP_STATUS_FREE_RLCQ_IND. pPdu[0x%x] Size[%d] StackId[%d]
Line 1182: Receive LTE_L2LTX_L2HTX_PDCP_TX_SUSPEND_CNF : StackId[%d] ReqType[%d]
Line 1225: [RLCTX] RB_ID[%d] Active SubState[%d -> %d]
Line 921: [MULTICORE] L2LTX_RlcStatusTrigger
Line 876: [Multicore] L2LTXMAC_ProcL2LTX2Msg, pMsg is NULL!
Line 883: [Multicore] L2LTXMAC_ProcL2LTX2Msg: pMsg[0x%x] msg_id[%d]
Line 885: [Multicore] L2LTXMAC_ProcL2LTX2Msg, rcv msg_id[%d]
Line 894: [Multicore] L2LTXMAC_Core0ProcMsg, Received > LTE_L2LTX_L2LTX2_SRRACH_REQ 
Line 900: [Multicore] L2LTXMAC_ProcL2LTX2Msg, invalid msg_id
Line 2183: [NBL1LC => L1TX] L2LTX_NL1C_TX_CNF : ReqType[%d]
Line 5884: IMS_L2LTX_RECOMMENDED_BIT_RATE_IND received: Type[%d]:Dir[%d]:Triggered[%d]
Line 5863: LCID[%d]/EPSID[%d],BitRate[%d]
Line 5959: gthermal: failed to allocate memory for restriction response message
Line 5969: [lte-throttling] LTE_ProcRestrictionMsg (msg=0x%x)
Line 5978: gthermal: failed to initialize BSR-throttling parameters.
Line 5995: gthermal: failed to send  MMCIF_NS_RESTRICTION_CTRL_RSP
Line 6008: gthermal: failed to send  MMCIF_NS_RESTRICTION_CTRL_RSP
Line 6021: gthermal: received unknown restriction message type %d
Line 1317: LTE_ProcULPhyRrcMsg : set event fail
Line 1321: [MULTICORE] LTE_ProcULPhyRrcMsg: Resume ltel2ltx_run_wait_event_group
Line 2480: IPC_ACTION_ID_RLF_SIGNAL
Line 810: [Multicore] LTE_ProcL2LTX2Msg, pMsg is NULL!
Line 813: [Multicore] LTE_ProcL2LTX2Msg: pMsg[0x%x]
Line 820: [MULTICORE] LTE_ProcL2LTX2Msg: invalid msg id
Line 831: [MULTICORE] Receive LTE_L2LTX2_L2LTX_SRICMD_REQ_EVENT : MacEntity[%d] StackId[%d]
Line 840: [MULTICORE] L2LTX2_ProcSriCmdReq: HALDSP_SetSRICmd!!
Line 847: [MULTICORE] L2LTX2_ProcSriCmdReq: Receive LTE_L2LTX2_L2LTX_SRICMD_REQ_EVENT, BUT L2_GetSRTriggered==TRUE
Line 5670: MAC_Reset: Scell Tx Cmd[%d/%d]
