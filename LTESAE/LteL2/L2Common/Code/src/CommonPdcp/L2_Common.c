Line 261: L2COMMON_PreProcConfigCheck - PDCP:ERROR Occurred !! rb_cnt/rbid/lcid/epsid[%d/%d/%d/%d]
Line 294: L2COMMON_PreProcConfigCheck - RLC UL:ERROR Occurred !! rb_cnt/rbid/lcid/epsid[%d/%d/%d/%d]
Line 327: L2COMMON_PreProcConfigCheck - RLC DL:ERROR Occurred !! rb_cnt/rbid/lcid/epsid[%d/%d/%d/%d]
Line 347: L2COMMON_PreProcConfigCheck : SrcLayer/rbCnt/CfgCnt/retVal[%d/%d/%d/%d]
Line 601: RB_ID[%d]Rx NACK So ADD Case : NACK %d F-SO %d F-EO %d S-SO %d S-EO %d
Line 638: pTmpElem==NULL !!
Line 880: [MULTICORE] RB_ID[%d] L2LRXRLC_EnqueNackElem_Modify: ret_val[%d]
Line 893: RB_ID[%d] Insert Nack ::TxNACKElemPool FULL !! Re-estabilish Trigger VT_S = %d, VT_A = %d 
Line 897: [MULTICORE] RB_ID[%d] L2LRXRLC_EnqueNackElem_Modify: L2LTXRLC_Send_RLC_MAX_RETX_IND[%d]
Line 908: [MULTICORE] RB_ID[%d] L2LRXRLC_EnqueNackElem_Modify: start_offset[%d] end_offset[%d] NackSN[%d]
Line 941: RB_ID[%d]Fail pal_Malloc and Fail Send LTE_PDCP_DATA_CNF!!!
Line 961: RB_ID[%d]Fail pal_Malloc and Fail Send LTE_PDCP_DATA_CNF!!!
Line 998: LTEL2Common_PutRemoveLink : Read/WriteIdx[%x/%x], NumFree[%x] > 100 
Line 1286: [WARN][PDCPRX] LTE_MoveSduDescToSplitDesc : Split RB Desc Alloc Failed
Line 1646: RB_ID[%d]Discard timeout DiscardSdu PdcpTxCount %d RxTm [0x%x] Cur Tm [0x%x] discardTime [%d] TmV [0x%x]
Line 1662: RB_ID[%d]Discard timeout Not Ative DiscardPendingSdu RxTm [0x%x] Cur Tm [0x%x] discard time[%d] TmV [0x%x]
Line 1698: [OEM][LAM_EVENT] [DSC] LTE PDCP Discard! StackId(%u), RB_ID(%u), timerMs(%u), bDISCARD(%u)
Line 1702: [OEM][LAM_WARN] [DSC] RB_ID <= SRB2_RBID! StackId(%u), RB_ID(%u)
Line 1744: RB_ID[%d] Error !!! Sidelink Support not enabled, isSLSdu(%d)
Line 1753: RB_ID[%d] DiscardNum and Discard Timer is 0 !!!
Line 1855: POPNUM:%d REQ:%d
Line 1924: TxSkip: TxTTI[%d]/AutoPause[%d]
Line 2010: [MULTICORE] RB_ID[%d] L2HTXPDCP_SendSRREQ
Line 2031: Fail pal_Malloc and Fail Send LTE_L2LTX_L2HTX_SRI_REQ!!! 
Line 2055: Fail pal_Malloc and Fail Send LTE_L2LTX_L2HTX_SRI_REQ!!! 
Line 2236: L2TXPDCP_GetLteThroughput10ms : BO/TPUT(ms) 10ms/50ms/100ms/200ms/500ms/1000ms[%d/%d/%d/%d/%d/%d]
Line 2283: Warning : Wrong Direction : RBId %d, Direction : %d
Line 2354: [MULTICORE] RB_ID[%d] L2LTXRLC_UpdateHighPriority: pPriorityElem  == NULL
Line 2362: [MULTICORE] RB_ID[%d] L2LTXRLC_UpdateHighPriority: SchedCfgInfo.LCG[%d] >= LCG_NUM[%d]
Line 2372: [MULTICORE] RB_ID[%d] L2LTXRLC_UpdateHighPriority: L1RlcTx.SubState[%d]
Line 2470: [MULTICORE] LTEL2Common_SetTaskAffinity: ERROR!! TaskId == NULL
Line 2478: [MULTICORE] LTEL2Common_SetTaskAffinity: Change core. TaskName[%s] CoreId[%d] 
Line 2488: [MULTICORE] LTEL2Common_UnSetTaskAffinity: ERROR!! TaskId == NULL
Line 2499: [MULTICORE] LTEL2Common_UnSetTaskAffinity: TaskName[%s]
Line 2643: L2COMMON_NoUlGrantCheck : dw10msNoBsrResponseCount[%d], Req/Done[%d/%d/%d], dwBsrTimeoutHistoryBitmap[%x] - 1
Line 2661: L2COMMON_NoUlGrantCheck : dw10msNoBsrResponseCount[%d], Req/Done[%d/%d/%d], dwBsrTimeoutHistoryBitmap[%x] - 2
Line 2670: L2COMMON_NoUlGrantCheck : Trigger RRE
Line 2774: [MACTX][EMTITY:_] : Change Retx BSR Timer VALUE[%d/%d][before/after], Configured Value[%d]
Line 2807: FORCED LMAC_DECIPHER_BLOCKFLAG_CLR - REQ-RAT(%d)
Line 2876: LTEL2COMMON_ChangeCore_LteHighTP : bLteTpHigh1Low0[%d]
Line 2881: LTEL2COMMON_ChangeCore_NrAddRemove : malloc fail
Line 2898: LTEL2COMMON_ChangeCore_NrAddRemove : set event fail
Line 2920: [ERROR] LTEL2COMMON_PrintRlcStatus : SplitDescCnt[%d]
Line 2938: LTEL2COMMON_PrintRlcStatus : Invalid rlc chunk
Line 2941: LTEL2COMMON_PrintRlcStatus : lcid[%d], VR_R[%d], VR_R_OFFSET[__], ResegStatus[__], VR_X[%d], VR_H[%d]
Line 2956: LTEL2COMMON_PrintRlcStatus : lcid[%d], VR_R[%d], VR_R_OFFSET[%d], ResegStatus[%d], VR_X[%d], VR_H[%d]
Line 2996: LTEL2CxD_ProcChangeCore : L2RX Core %d -> %d
Line 3009: LTEL2CxD_ProcChangeCore : set event fail - pEventGroup_WaitChangeAffinity_LTEL2HRx
Line 3015: LTEL2CxD_ProcChangeCore : set event fail - pEventGroup_WaitChangeAffinity_LTEL2LRx
Line 3049: LTEL2C0D_ChangeCoreReq : set event fail
Line 3073: LTEL2C0D_CheckPendingReq : malloc fail
Line 3088: LTEL2C0D_CheckPendingReq : set event fail
Line 3110: LTE_L2C0D_CHANGE_CORE_PEND_REQ : eState == LTEL2_COMMON_CORE_CHANGE_STATE_RUNNING
Line 3115: LTE_L2C0D_CHANGE_CORE_PEND_REQ : pend req list empty
Line 3312: pal_TaskEntry_LTEL2C1D : Ignore Request
Line 3322: pal_TaskEntry_LTEL2C1D : malloc fail
Line 3339: LTEL2COMMON_ChangeCore_NrAddRemove : set event fail
Line 3435: [L2 DATA] SetDataActivityStatus : IratDataActChange, bIratDataActiveFlag : %d
Line 3492: LTEL2COMMON_IsPdcpInternetPdn : RLC SubState == RLC_NOT_ACTIVE
Line 3498: LTEL2COMMON_IsPdcpInternetPdn : Invalid Stackid %d
Line 3504: LTEL2COMMON_IsPdcpInternetPdn : EpsId == 0
Line 3518: LTEL2COMMON_IsPdcpInternetPdn : uConvLCID[%d] uEPSID[%d] bResult[%d], dwLoc[%d]
Line 3542: LTEL2COMMON_IsNrPdcpInternetPdn : uStackId[%d] uConvLCID[%d] uEPSID[%d] Service_Type[%d] bResult[%d], dwLoc[%d]
Line 3558: LTEL2COMMON_UnRecoverableErrorNtf : uStackId[%d], eRecoveryType[%d]
Line 3566: LTEL2COMMON_UnRecoverableErrorNtf : uStackId[%d], Msg Block
Line 3579: LTEL2COMMON_UnRecoverableErrorNtf : uStackId[%d]
Line 3650: LTEL2COMMON_IncErrorCount : [%d/%d/%d][%d]
Line 3868: [PDCPTX][TIMER][CONTROL] dwStackActiveBitMask[%d]
Line 3882: [PDCPTX][TIMER][CONTROL] TPUT MEAS, Start
Line 3904: [PDCPTX][TIMER][CONTROL] TPUT MEAS, Stop
Line 3982: [MACTX] ExpectedBytes[%d] RLCBO[%d] ReqSize[%d]
Line 4001: [STAT][ENTITY:%d][DRBID:_] RlcTxQ Count: %d
Line 4047: [RLCRX][ENTITY:_][DRBID:_] : L2HRXRLC_Flush_InitSnInfo
Line 4095: [RLCRX][ENTITY:%d][DRBID:%d] : L2HRXRLC_Flush_Run, VRR/DISCARD/VRH[%d/%d/%d]
Line 4103: [RLCRX][ENTITY:%d][DRBID:%d] : L2HRXRLC_Flush_Run, C0_Read/Write[%d/%d] C1_Read/Write[%d/%d]
Line 4199: [MACTX][NackBsrBoosting][GET] : EnableMask[%08x] 
Line 4238: [RLCRX][ENTITY:%d][DRBID:%d][NackBsrBoosting][Disable] : EnableMask[%08x], LOC[%d]
Line 4258: [RLCRX][ENTITY:%d][DRBID:%d][NackBsrBoosting][Enable] : EnableMask[%08x]
Line 4273: [ERROR][RLCTX][ENTITY:%d][DRBID:%d][NackBsrBoosting][FAIL] : Fail pal_Malloc and Fail Send LTE_L2LTX_L2HTX_SRI_REQ!!! 
Line 4300: [Pdcpdup][Status][DRBID:0x%02x] RLC status report received till pdcp count %d
Line 4336: [ERROR][PDCPTX][CONFIG][EPSID:%d] malloc failed (bValid = %d) 
Line 4351: [ERROR][PDCPTX][CONFIG][QM_SCHED_INFO] malloc failed 
Line 4384: [MACTX][BSR][PING] Enable Ping Boosting
Line 4396: [MACTX][BSR][PING] Disable Ping Boosting
Line 4416: [MACTX][BSR][PING][RESET]
Line 4438: [MACTX][BSR][PING][TIMER][CB] PING BOOSTING, appTimerId=%d, StackId=%d
Line 4502: [MACTX][BSR][PING][UPDATEPKT] PING BOOSTING, dwCurIdx=%d, dwPrevPktTimeUs=%d, dwPktTimeUs=%d, dwPingPeriodUs=%d, dwUlGrantTime=%d, dwGrantDelay=%d, dwNextPingRemainTimeUs=%d, dwPingLatency=%d
Line 4609: [MACTX][VOLTE_DRX_SYNC] ullNonVolteTimeStampUs %08x %08x
Line 699: pLastTmpElem==NULL !!
Line 708: [MULTICORE] RB_ID[%d] L2LRXRLC_CheckMergedElem: TmpSN[%d] TmpSO[%d] TmpEO[%d] SOffset[%d] EOffset[%d]
Line 719: RB_ID[%d]Rx NACK Merge Case : NACK %d F-SO %d F-EO %d S-SO %d S-EO %d
