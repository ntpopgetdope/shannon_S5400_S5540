Line 1025: pTempRBSchedInfo==NULL !!!
Line 1031: LogCH using this LCID has been already setup !!!
Line 1099: pTempRBSchedInfo==NULL !!!
Line 1122: No RB with this LCID: %d
Line 1128: pal_ListIsEmpty !!!
Line 1267: RB Setup Info malloc failed !!!
Line 1310: [MULTICORE] L2LTXMAC_SetupRBSchedDB: pPriorityElem[0x%x]
Line 1694: MacEntity[%d]: PHR configured & triggered : Periodic PHR(%d), Prohibit PHR(%d), dl-pathloss(%d)
Line 1702: MacEntity[%d]: PHR released
Line 1742: MacEntity[%d]: DCPHR(%d), phrModeOtherCG(%d), endcState(%d), nrSpCellIndex(%d)
Line 1767: [L2 DATA] gL2DataInactivityEnable[%d] TestSim[%d] StackId[%d]
Line 1893: MacEntity[%d]: MAC Timer : PBSR(%d), RTBSR(%d), TATMR(%d)
Line 1932: MacEntity[%d]: EBSR(%d), EPHR(%d), sCellDeactivationTimer(%d), DataInact(%d)
Line 1946: L2LTXMAC_CfgScheduler_AfterCfgComplete : MacEntity(%d), DCPHR(%d), phrModeOtherCG(%d), endcState(%d), nrSpCellIndex(%d)
Line 1966: [MULTICORE] L2LTXMAC_ProcSRRequest
Line 1989: [MULTICORE] L2LTXMAC_ProcSRRequest: L2_GetSRTriggered[%d]
Line 1998: PUCCH SR cancelled(RACH is on-going)
Line 2004: [OEM][PKTTa_WARN] [Event] LTE RA is ongoing. Skip SR! trackNum: %u
Line 2013: PUCCH SR (sleeping)
Line 2019: [OEM][PKTTa_WARN] [Event] Modem sleeping! LTE SR is waiting. L1TX_L1LC_TX_REQ. trackNum: %u
Line 2028: PUCCH SR (awake)
Line 2034: [MULTICORE] L2LTXMAC_ProcSRRequest: Send LTE_L2LTX2_L2LTX_SRICMD_REQ_EVENT
Line 2043: [OEM][PKTTa] [Event] LTE SR REQ is sent by MAC (SRICMD_REQ_EVENT). trackNum: %u
Line 2062: [NB-IoT] RA-SR pending due to NTN UL sync lost
Line 2066: Trigger RA-SR: MacEntity[%d], gDSR_Configured(%d) gCurrentMACStatus(%d)
Line 2072: [OEM][PKTTa_WARN] [Event] LTE SR cannot be triggered. No SR resource or UL unsync. RA is triggered! trackNum: %u
Line 2084: SR triggered already!!: MacEntity[%d], gDSR_Configured(%d) gCurrentMACStatus(%d)
Line 2089: [OEM][PKTTa] [Event] Pending LTE SR, LTE SR REQ not sent. trackNum: %u
Line 2123: [MULTICORE] L2LTXMAC_ProcSRRequest: Send LTE_L2LTX2_L2LTX_SRICMD_REQ_EVENT
Line 2139: MacEntity[%d]: SR not triggered or SR config(%d)/UL sync status(%d) changed
Line 2148: MacEntity[%d]: SR canceled
Line 2153: MacEntity[%d]: L2LTXMAC_StartSR, SrTxCnfWait==FALSE
Line 3024: SPS Activation Confirm
Line 3040: TA Report MAC CE generated
Line 3166: gMsg3Info.size==0 at the L2LTXMAC_ScheduleCCCH !!!
Line 3191: [ERROR][MACTX][ENTITY:%d][ScheduleCCCH] remainGrantSize=%d < SchedDataSize=%d 
Line 3296: pTempRBSchedInfo==NULL!!!
Line 3323: last 1RB rescheduling. buffered RB does not exist!!!
Line 3332: gpSchedList[%d] is empty!!!
Line 3352: BSR cancellation for 1RB(unreserved, This RB is behind the last RB)
Line 3363: BSR not canceled (new last RB is scheduled, but bsrReservedSize is not used)
Line 3371: BSR not caceled (bsrReservedSize is used, but buffer is not empty)
Line 3382: change new last scheduled RB (grant reserve including LF)
Line 3388: keep last scheduled RB
Line 3394: change new last scheduled RB (grant reserve including BSR+LF)
Line 3410: BSR not caceled (reserved grant 0, given grant:%d, remained buffer:%d)
Line 3448: BSR not caceled (bsrReservedSize is not used, given grant:%d, remained buffer:%d)
Line 3454: BSR not caceled (buffer is not empty with bsrReservedSize)
Line 3489: reschedule for status pdu (reserved 1RB case)
Line 3509: BSR not caceled
Line 3627: pTempRBSchedInfo==NULL!!!
Line 3701: pTempRBSchedInfo==NULL!!!
Line 3950: reschedule for status pdu (more than 2 reserved RB)
Line 3963: BSR not caceled
Line 4779: pTempRBSchedInfo==NULL!!!
Line 4842: [MACTX][ENTITY:%d][STACK:%d] : PreULScheduling - TmGetmsTmrState[%d], gRetxBSRTimerValue[%d], GetgForcedBSRFlag[%d]
Line 4892: PHR triggered by PCell pathloss: current pathloss(%d[0.01dB]), reported pathloss(%d[0.01dB]), dl-PathlossChange(%d[0.01dB])
Line 4909: PHR triggered by an SCell pathloss (sCellIndex:%d): current pathloss(%d[0.01dB]), reported pathloss(%d[0.01dB]), dl-PathlossChange(%d[0.01dB])
Line 4927: PHR: Stack[%d], SCell pathloss change update (sCellIndex:%d) of pathloss:%d[0.01dB]
Line 4933: PHR: Stack[%d], PCell pathloss change update of pathloss:%d[0.01dB]
Line 5248: pTempRBSchedInfo==NULL!!!
Line 5323: grant size<MIN_UL_GRANT_SIZE !!!
Line 5328: msg3 grant_size>MAX_TB_SIZE !!!
Line 5333: Stack[%d], MacEntity[%d]: UL Grant, but UL UNSYNC!!!
Line 5341: MacEntity[%d]: L2LTXMAC_ULScheduling, but gL1TxRxCommonDB.RACause is %d
Line 5348: MacEntity[%d]: received NORMAL_GRANT, but gL1TxRxCommonDB.RACause is %d
Line 5355: MacEntity[%d]: received NORMAL_GRANT, but gL1TxRxCommonDB.RACause is %d
Line 5364: |UE -> eNB|  MSG3 Entity[%d] %d, %d, %d M3_GrantSize: %d
Line 5370: [OEM][PKTTa] [Event] LTE MSG3 grant received. grantSize: %u, trackNum: %u
Line 5388: [OEM][PKTTa] [Event] LTE normal grant received. Cellbitmap: %u, grantSize: %u, harqLte(p/s): %u/%u, trackNum: %u
Line 5942: Element==NULL !!
Line 5969: SCG Element==NULL !!
Line 6003: gpSchedList SCG Element==NULL !!
Line 6080: [MACTX] pTempRBSchedInfo==NULL !!
Line 6100: [MACTX] Retx BSR Timer expired & regular BSR triggered
Line 6121: [WARN][MACTX] Fail pal_Malloc and Fail Send LTE_L2LTX_L2HTX_SRI_REQ!!! 
Line 6158: [WARN][MACTX] LTE_L2LTX_L2LTX_RETXBSR_EX_TMR_IND: Fail to alloc mem
Line 6203: Periodic PHR Timer expired & Preiodic PHR triggered
Line 6228: Prohibit PHR Timer Expired
Line 6255: NB-IoT[%d] : Logical Channel SR Prohibit Timer[%d] Expired!!! (0:MCG, 1:SCG), gBSRTriggered[0x%x]
Line 6290: NB-IoT[%d] : DataInactivityTimerExpired[%d] Expired!!! (0:MCG, 1:SCG)
Line 6299: RRC_MAC_DATA_INACT_IND malloc fail
Line 6345: L2LTXMAC_VOICEBitRateQuery_ProhibitTimerExpired[%d] Expired!!!
Line 6367: StackId %d, L2LTXMAC_VIDEOBitRateQuery_ProhibitTimerExpired[%d] Expired!!!
Line 6437: gpSchedList[MCG_Entity]==NULL !!!
Line 6453: gpSchedList[MCG_Entity]==NULL !!!
Line 6470: gpSchedList[SCG_Entity]==NULL !!!
Line 6486: gpSchedList[SCG_Entity]==NULL !!!
Line 6576: L2LTXNB_ReTxBsrForceStop
Line 6597: L2LTXNB_ULTimerAdjust: RetxBSR Timer restart[%d]
Line 6608: L2LTXNB_ULTimerAdjust: RB_ID[%d] RLC Poll Timer restart[%d]
Line 6631: L2LTXMAC_DisplaySRRequestInfo : ST/ENTITY[%d/%d], gBSRTriggered[%d], gCurrentMACStatus[%d], SrTxCnfWait[%d], RACause[%d]
Line 988: RB_ID[%d]:BitRateQRYProhibitTimerPresent[%d]/Timer[%d], SRMask[%d], SRProhibit[%d]
Line 1363: RB Reconfig Info malloc failed !!!
Line 1366: [MULTICORE] L2LTXMAC_RecfgRBSchedDB
Line 1379: RB Reconfig Error: No RB has been established !!!
Line 1444: [MULTICORE] L2LTXMAC_RecfgRBSchedDB: pPriorityElem[0x%x] Highest_PriRB[StackId].priority[0x%x]
Line 1159: pTempRBSchedInfo==NULL !!!
Line 1184: pTempRBSchedInfo==NULL !!!
Line 1207: No RB with this LCID: %d
Line 1229: Searching Error in RB info DB !!!
Line 1472: [MULTICORE] L2LTXMAC_RelRBSchedDB
Line 1476: RB Release Error: No RB has been established !!!!
Line 1499: [MULTICORE] L2LTXMAC_RelRBSchedDB: Reset pPriorityElem, Highest_PriRB
Line 1521: pTempRBSchedInfo==NULL !!!
Line 1553: equalPriGroupInx error[%d] !!!
Line 1579: equalPriGroupInx error[%d] !!!
Line 1677: sTAG (ID:%d) is released, but sCell(s) (bitmap:%d) still belong to the sTAG!!! Their sTAG need to be handled properly if it is temporal situation.
Line 2620: info->bufferedRbCnt == 0!!!
Line 2635: info->lcgCnt == 0!!!
Line 850: Long BSR + RLC Status ACK Only Case
Line 865: Long BSR to Short BSR + RLC Status Report
Line 881: Long to Short BSR(Lcid[%d]: reserved grant:%d, remained buffer:%d)
Line 469: BSR cancellation for 2RB(both unreserved)
Line 506: BSR not caceled, #2 RB buffer is not empty(reserved grant:%d, remained buffer:%d)
Line 531: BSR not caceled, #1 RB[%d] buffer is not empty(reserved grant:%d, remained buffer:%d)
Line 571: BSR cancellation for 2RB(1 reserved, 1 unreserved)
Line 608: BSR not caceled, #2 RB[%d] buffer is not empty(reserved grant:%d, remained buffer:%d)
Line 638: BSR not caceled, #1 RB[%d] buffer is not empty(reserved grant:%d, remained buffer:%d)
Line 703: BSR cancellation for 2RB(1 unreserved, 1 reserved)
Line 742: BSR not caceled, #2 RB[%d] buffer is not empty(reserved grant:%d, remained buffer:%d)
Line 778: BSR not caceled, #1 RB[%d] buffer is not empty(reserved grant:%d, remained buffer:%d)
Line 2524: DL VOICE RECOM_BITRATE_QUERY_CE reserved
Line 2539: UL VOICE RECOM_BITRATE_QUERY_CE reserved
Line 2555: DL VIDEO RECOM_BITRATE_QUERY_CE reserved
Line 2570: UL VIDEO RECOM_BITRATE_QUERY_CE reserved
Line 4989: EDT M3 Grant[%d] too small
Line 4996: M3 Grant[%d] too small
Line 5019: Entity[%d]: init grant(%d), current grant(%d)
Line 5064: Entity[%d]: init grant(%d), current grant(%d)
Line 4062: BSR cancel for status pdu
Line 4072: BSR not caceled
Line 4150: schedResult.bufferSize[%d] < schedResult.remainedStatus[%d] 
Line 4163: tempBufferSize[%d] < schedResult.bufferSize[%d] 
Line 4206: RLC reserved 0, Received Grant(%d)
Line 4707: reschedAgain==TRUE!!!
Line 2301: MacEntity[%d]: BSR Reserved LONG -> SHORT due to Grant(%d)
Line 4348: pTempRBSchedInfo==NULL!!!
Line 4388: tempBufferSize[%d] < schedResult.bufferSize[%d]
Line 4423: pTempRBSchedInfo==NULL!!!
Line 4462: tempBufferSize[%d] < schedResult.bufferSize[%d] !!!
Line 4503: pTempRBSchedInfo==NULL!!!
Line 4529: schedResult.bufferSize < schedResult.remainedStatus[%d] !!!
Line 4565: pTempRBSchedInfo==NULL!!!
Line 5120: Entity[%d]: UL SPS grant configured, implicitReleaseAfter(%d))
Line 5132: Entity[%d]: skipUplinkTxSPS UL Grant
Line 5136: Entity[%d]: skipUplinkTxSPSConfigured but csi requested
Line 5157: Entity[%d]: skipUplinkTxDynamic UL Grant
