Line 143: [N :NR,%d] Qmnr::Qmnr
Line 151: [W :NR,%d] 	 _NEW_ m_pQmNrExtAPI 0x%X
Line 159: [W :NR,%d] 	 m_pQmNrDbMgr 0x%x
Line 168: [W :NR,%d] m_pQmNrMsgLogger 0x%x
Line 177: [W :NR,%d] m_pQmNrTimerMngr 0x%x
Line 187: [W :NR,%d] m_pQmNrMsgHandler 0x%x
Line 198: [N :NR,%d] Qmnr::~Qmnr
Line 263: [W :SM,%d] %%#EM pMsgHdlr is null
Line 268: [W :NR,%d] QmNr: PreProcessMsg result : %d
Line 347: [N :NR,%d] m_pQmCommonDb = 0x%X, m_pQmNrDbMgr = 0x%X
Line 381: [D :NR,%d] %%#RB [QM NR] QM_L2HPDCPTX_RB_INFORM_IND_Handler cmd (%d) : SessionId(%d), RbId(%d), bDefaultRb(%d)
Line 382: [QM|%d,CP] %%#RB [QM NR] QM_L2HPDCPTX_RB_INFORM_IND_Handler cmd (%d) : SessionId(%d), RbId(%d), bDefaultRb(%d)
Line 387: [W :NR,%d] %%#EM [Check] QM_L2HPDCPTX_RB_INFORM_IND_Handler: Stack NOT Initialized!
Line 406: [W :NR,%d] [Check] QM_L2HPDCPTX_RB_INFORM_IND_Handler: Do Nothing, Check cmd!
Line 413: [W :NR,%d] [Check] QM_L2HPDCPTX_RB_INFORM_IND_Handler: No mappedQoS-Flows
Line 425: [W :NR,%d] %%#EM [Check] QM_L2HPDCPTX_RELEASE_IND_Handler: Stack NOT Initialized!
Line 442: [D :NR,%d] %%#ST QM_MM_REL_CNF_Handler: Result (%d)
Line 457: [D :NR,%d] %%#ST QM_MM_STATUS_IND_Handler: Status[%s], ImsCallTriggered(%d), EmcCall(%d)
Line 461: [W :NR,%d] %%#EM [Check] QM_MM_STATUS_IND_Handler: Stack NOT Initialized!
Line 485: [W :NR,%d] %%#EM [Check] QM_MM_STATUS_IND_Handler: NOT Handle this Status!
Line 495: [N :NR,%d] %%#ST QM_MM_STATUS_IND_Handler: IMS Call Start(%d)/End(%d) for SesId(%d), QmNrState[%s]
Line 499: [W :NR,%d] %%#EM [Check] --- No IMS Session Set
Line 510: [D :NR,%d] %%#ST [Check] --- EMC Call Start, Do Nothing but Waiting
Line 516: [W :NR,%d] %%#EM [Check] --- Cannot Trigger SR in Current QmNrState
Line 522: [W :NR,%d] %%#ST --- Already QM_STATE_ACTIVE
Line 528: [D :NR,%d] %%#ST [Check] --- SR is Currently On-Going for IMS Session
Line 542: [D :NR,%d] %%#ST --- EMC Call End
Line 549: [D :NR,%d] %%#DP --- ActualDataPended(%d) for SesId(%d)
Line 553: [D :NR,%d] %%#ST --- Forced Clear PendingDataSession
Line 563: [W :NR,%d] %%#EM [Check] --- Invalid MM RegStatus received
Line 580: [D :NR,%d] %%#ST QM_MM_EST_CNF_Handler: TrId(%d), ReqUlDataStatus(0x%4X), PduReactResult(0x%4X), NumOfRejCause(%d)
Line 600: [D :NR,%d] %%#ST QM_MM_EST_IND_Handler: ReqUlDataStatus(0x%4X), PduReactResult(0x%4X), NumOfRejCause(%d)
Line 617: [D :NR,%d] %%#ST QM_MM_EST_REJ_Handler: Sid(%u) / Cause [%s](%d)
Line 618: [QM|%d,CP] %%#ST QM_MM_EST_REJ_Handler: Sid(%u) / Cause [%s](%d)
Line 638: [OEM][DATA_STALL_DETECTION] EST_REJ Cause: %d. Data Call State SERVICE_DISABLED should be sent.
Line 663: [N :NR,%d] %%#DP QM_MM_IRAT_CHANGE_IND_Handler: TargetRat(%u), Type(%u), Status(%u), Result(%u)
Line 667: [W :NR,%d] %%#EM QM_MM_IRAT_CHANGE_IND_Handler: Stack NOT Initialized!
Line 688: [N :NR,%d] %%#SM [QM NR] QM_SMT_INFORM_IND_Handler : CmdType %s
Line 692: [W :NR,%d] %%#EM [Check] QM_SMT_INFORM_IND_Handler: Stack NOT Initialized!
Line 709: [N :NR,%d] %%#SM QM_SMT_INFORMATION_IND_Handler //rMsgBody.pCnCommonDb == nullptr
Line 734: [N :NR,%d] %%#SM 	 No.Of Session %d
Line 739: [N :NR,%d] %%#SM 	 Mm Rej cause=> %d
Line 771: [D :NR,%d] %%#EM [Check] QM_QM_T_BIDIR_CHECK_EXPIRY_IND_Handler: No Valid Session, return!
Line 804: [D :NR,%d] %%#DP CheckReleaseRequiredForDataStall: Sid(%u) Expired but not Trigger Release for - Current TP DL (%u)Kbps, UL (%u)Kbps
Line 813: [D :NR,%d] %%#SM CheckReleaseRequiredForDataStall: Sid(%u) Expired but Not Trigger Release since DATA_STALL_GUARD is Running
Line 821: [W :NR,%d] %%#EM [Check] CheckReleaseRequiredForDataStall: No StallInfo for Sid(%u)
Line 825: [D :NR,%d] %%#SM CheckReleaseRequiredForDataStall: Sid(%d): DnsQueryReqCnt(%d), DnsQueryRspCnt(%d)
Line 836: [W :NR,%d] %%#EM [Check] CheckReleaseRequiredForDataStall: No Session for Sid(%d)
Line 845: [D :NR,%d] %%#EM [Check] CheckReleaseRequiredForDataStall: Restart Timer since QmNrState[%s]
Line 858: [D :NR,%d] %%#ST CheckReleaseRequiredForDataStall: Restart Timer since ImsCallStartSes(%d)
Line 891: [D :NR,%d] %%#EM [Check] QM_QM_T_NR_CONN_RETRY_EXPIRY_IND_Handler: No Valid Session, return!
Line 902: [N :NR,%d] %%#EM QM_QM_T_NR_CONN_RETRY_EXPIRY_IND_Handler: pTimerContext is nullptr for Key (%d)
Line 910: [N :NR,%d] %%#TE QM_QM_T_NR_CONN_RETRY_EXPIRY_IND_Handler: Reach MaxRepeatCnt
Line 933: [D :NR,%d] %%#SM QM_QM_T_QFI_SETUP_EXPIRY_IND_Handler: Expired for SesId(%d)
Line 957: [D :NR,%d] %%#SM QM_QM_T_WDT_EXPIRY_IND_Handler: RB_WDT Expired for SesId(%d)
Line 966: [W :NR,%d] %%#ST [Check] QM_QM_T_WDT_EXPIRY_IND_Handler: RB Assigned Already, Do Nothing!
Line 974: [W :NR,%d] %%#EM [Check] QM_QM_T_WDT_EXPIRY_IND_Handler: pNrSmSessionDb = nullptr
Line 980: [W :NR,%d] %%#EM [Check] QM_QM_T_WDT_EXPIRY_IND_Handler: PDU Rel Req-ed from PM for SesId(%d) -> Flush PendingQ
Line 997: [D :NR,%d] %%#SM HandleSrErr: No Action Triggered, so Allow SR Re-triggering
Line 1017: [N :NR,%d] QM_PM_INFORM_IND_Handler 
Line 1045: [D :NR,%d] 	 Cid (%d) SessionId (%d) PdpType (%d)
Line 1049: [W :NR,%d] QM_PM_INFORM_IND_Handler: Alloc Fail
Line 1078: [N :NR,%d] 	Send Data===================== 
Line 1137: [D :NR,%d] %%#DP CalAllowableDataCnt: L2 DataVolume (%u) Not Changed, L2NotSchedPacketCnt(%u), L2SentPacketCnt(%u)
Line 1229: [OEM][ULPP] CalAllowableDataCnt gets NrPhyTp = %u, TempThreshold = %u, Final Threshold = %u
Line 1237: [D :NR,%d] %%#DP CalAllowableDataCnt: gNrBiDirectionalTpOn(%u), gNrDlNasuTp(%u), NrPhyUlTp(%u), gInstantaneousUlPaddingTp(%u), TH(%u), TH_Temp(%u)
Line 1242: [D :NR,%d] %%#DP CalAllowableDataCnt: TH(%u) - BO(%u) --> Cnt(%u)
Line 1247: [D :NR,%d] %%#DP CalAllowableDataCnt: TH(%u) < BO(%u) --> Cnt(0)
Line 1257: [W :NR,%d] [Check] ProcessQueue: Invalid m_pQmNrDbMgr(0x%X)
Line 1317: [D :NR,%d] ProcessQueue: L2NotSchedPacketCnt(%u), L2SentPacketCnt(%u)
Line 1346: [D :NR,%d] %%#DP ProcessQueue: SesId[%d] NormalQ: Polling(%d), AllowablePktCnt(%u), RemainedCnt(%u), Actual DeqCnt(%u)
Line 1350: [D :NR,%d] [Check] ProcessQueue: AllowablePktCnt < DeqCnt, Check Required!
Line 1519: [W :NR,%d] %%#EM [Check] CheckDataStallRx: pQmnrDb = nullptr for CID(%u)
Line 1574: [W :NR,%d] %%#DP [Check] QM_SendDataToL2TX: IsFakeTest (%d) / DataBlock (%d) / Stack (%d)
Line 1581: [W :NR,%d] %%#EM [Check] QmNrExternalAPI is nullptr for Stack (%u)
Line 1590: [W :NR,%d] %%#EM [Check] CnCommonDb = nullptr
Line 1597: [W :NR,%d] %%#EM [Check] QmCommonDb = nullptr
Line 1604: [W :NR,%d] %%#EM [Check] pQmDb = nullptr
Line 1611: [W :NR,%d] %%#EM [Check] NrSmSessionDb = nullptr
Line 1630: [W :NR,%d] %%#EM [Check] QM_SendDataToL2TX: return -1 / No Session for uiCID(%d), IpVer(%d)
Line 1640: [W :NR,%d] %%#EM [Check] QM_SendDataToL2TX: return -1 / pNrDb == nullptr, uiCID=%d
Line 1650: [D :NR,%d] %%#EM [Check] QM_SendDataToL2TX: return -1 / QmState [QM_STATE_NONE]
Line 1667: [D :NR,%d] %%#EM [Check] QM_SendDataToL2TX: return -1 / QmState [QM_STATE_FLUSH_NEEDED]
Line 1673: [D :NR,%d] %%#EM [Check] QM_SendDataToL2TX: return -1 / QmState [QM_STATE_FLUSH_NEEDED], Other ST Voice Calling
Line 1677: [D :NR,%d] %%#EM [Check] QM_SendDataToL2TX: return -1000 / QmState [QM_STATE_FLUSH_NEEDED], IMS or EMC PDU
Line 1687: [D :NR,%d] %%#EM [Check] QM_SendDataToL2TX: return -1 /NoOfData == 0
Line 1700: [D :NR,%d] %%#EM [PktProc Filter] QM_SendDataToL2TX: FilterResult(%u), QFI(%u), RBID(%u)
Line 1723: [DumpHex] QmNrDataDump: 
Line 1738: [D :NR,%d] %%#EM [PktProc Filter] QM_SendDataToL2TX: PktProc QFI(%u) vs. SW QFI(%u)
Line 1746: [W :NR,%d] %%#DP [Check] QM_SendDataToL2TX: return -1 / invalid QFI(%d) for uiCID(%d), SesId(%d)
Line 1756: [W :NR,%d] %%#DP [Check] QM_SendDataToL2TX: return -1 / Invalidated QFI(%u) for uiCID(%d), SesId(%d)
Line 1783: [D :NR,%d] %%#EM [PktProc Filter] QM_SendDataToL2TX: PktProc RBID(%u) vs. SW RBID(%u)
Line 1802: [OEM][PKTTa_WARN] [Stage:2P][Tag:%08X][dT:%u] PKT in UDH-NRQM, Enqueue: SA pending Q (invalid RBID!). priority: %u, last: %u, pktid: 0x%x, qmTime: %u
Line 1806: [OEM][PKTTa_WARN] NRQM state(%u) != QM_STATE_ACTIVE! trackNum: %u
Line 1830: [OEM][PKTTa] [Stage:2_][Tag:%08X][dT:%u] PKT in UDH-NRQM, Enqueue: SA high Q, Sent to: L2L3IF(SA). priority: %u, last: %u, pktid: 0x%x, qmTime: %u
Line 1834: [OEM][PKTTa_WARN] NRQM state(%u) != QM_STATE_ACTIVE! trackNum: %u
Line 1859: [OEM][PKTTa] [Stage:2_][Tag:%08X][dT:%u] PKT in UDH-NRQM, Enqueue: SA low Q, Sent to: L2L3IF(SA). priority: %u, last: %u, pktid: 0x%x, qmTime: %u
Line 1863: [OEM][PKTTa_WARN] NRQM state(%u) != QM_STATE_ACTIVE! trackNum: %u
Line 1878: [W :NR,%d] %%#DP [Check] QM_SendDataToL2TX: return -1000: Enqueue Fail
Line 1956: [W :NR,%d] %%#EM  QmCommonDb = nullptr
Line 1970: [W :NR,%d] %%#EM  pQmDb = nullptr
Line 2069: [OEM][DATA_STALL_DETECTION] MdhmData_SendNrDataCallState: No QmCommonDb instance
Line 2078: [OEM][DATA_STALL_DETECTION] MdhmData_SendNrDataCallState: No QmDb instance
Line 2094: [OEM][DATA_STALL_DETECTION] MdhmData_SendNrDataCallState: QmState is NONE
Line 2144: [OEM][ULPP] GetSaNormalQueueNum with invalid DomainNum(%u)
Line 2237: [OEM][ULPP] GetSaSdapInQSize with invalid m_DomainType(%u)
Line 2249: [OEM][ULPP] GetSaNormalQueueVolume with invalid DomainNum(%u)
