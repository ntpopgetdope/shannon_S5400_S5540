Line 144: [RSM(SEIC),%s] : Delay RegisterRat[%s]
Line 148: [RSM(SEIC),%s] : RegisterRat. SubReic[%s]
Line 271: [RSM(SEIC),%s] : Start delayed RegisterRat[%s]
Line 414: [RSM(SEIC),%s] : UpdateMsdHold, GrantState[%s], HoldCause[%s], PrevHoldCause[%s], bIsMsdHold[%u]
Line 452: [RSM(SEIC),%s] : ST%u OperationMode[%s] MainReic[%s] SubReic[%s]
Line 497: [RSM(SEIC),%s] : (I) CheckResourceSched in PauseDoneWithRelease(%u)/HoldCause(%s) Trigger Hold, Request RAT(%s), Event(%s), GrantState(%s)
Line 539: [RSM(SEIC),%s] : CheckResourceSched. GrantState[%s] m_GrantState[%s]
Line 653: [RSM(SEIC),%s] : (I)(S) CheckResourceSchedInternal. Wakeup skip by peer stack wakeup(paging), RemainWakeupTime(%u) is lesser than Margin(%u)
Line 721: [RSM(SEIC),%s] : RequestStackHold[%s]
Line 751: [RSM(SEIC),%s] : Update PrevHoldCause, GrantState[%s], CurHoldCause[%s], PrevHoldCause[%s], ReqHoldCause[%s]
Line 794: [RSM(SEIC),%s] : HoldOrSleepDone. GrantState[%s], HoldCause[%s]
Line 852: [RSM(SEIC),%s] : (I) Request EarlyWakeup/Resume
Line 861: [RSM(SEIC),%s] : (I)(F) need to chk GrantState[%u].
Line 871: [RSM(SEIC),%s] : (I) Request EarlyWakeup/Resume
Line 876: [RSM(SEIC),%s] : (I)(F) need to chk GrantState[%u].
Line 882: [RSM(SEIC),%s] : AllRat no init but can't resume
Line 967: [RSM(SEIC),%s] : GrantState Error[%u].
Line 988: [RSM(SEIC),%s] : Not registered!!!
Line 995: [RSM(SEIC),%s] : SendPauseAckToRcif. HoldCause[%s]. MainReicRatState[%s]
Line 1005: [RSM(SEIC),%s] : HoldOrSleepDone. HoldDelayRunning MainReic[%d]
Line 1008: [RSM(SEIC),%s] : HoldOrSleepDone. HoldDelayRunning m_pSubReic[%d]
Line 1050: [RSM(SEIC),%s] : PauseDoneWithRelease. need to PAUSE_ACK_RELEASE, HoldCause[%s], MainReic[%s], SubReic[%s]
Line 1065: [RSM(SEIC),%s] : (F) HoldCause[%u] Error.
Line 1077: [RSM(SEIC),%s] : (I) StackOperationMode(%d) IsInConnected(%d) MainReicModemState(%s)
Line 1090: [RSM(SEIC),%s] : (I) Sending Release instead PauseDone as LTE-LTE is in CONN-CONN isRelRetryForLTEPSPS(%d)
Line 1101: [RSM(SEIC),%s] : (I) Sending Release instead of PauseDone as IsPSPSConnected(%d) mismatch with stack IsInConnected(%d): bIsRelRetryForPSPSUpdate(%d)
Line 1114: [RSM(SEIC),%s] : PauseDoneWithRelease. PauseAckReason[%u], MainReic[%u], SubReic[%u]
Line 1163: [RSM(SEIC),%s] : Starting Retry timer for to avoid stuck in LTE-LTE PS-PS
Line 1168: [RSM(SEIC),%s] : Starting Retry timer for to avoid stuck in PSPS interim update case
Line 1181: [RSM(SEIC),%s] : Grant request after PauseDoneWithRelease. StartRejectRetry. MainReic[%u, %u], SubReic[%u, %u]
Line 1261: [RSM(SEIC),%s] : bIsAllRatSleep[%s], PauseAckReason[%u], Main[%s]
Line 1300: [RSM(SEIC),%s] : (I)(S) RequestRatResume. Resume skip by peer stack wakeup(paging), RemainWakeupTime(%u) is lesser than Margin(%u). ResumeSkipCnt(%u)
Line 1322: [RSM(SEIC),%s] : (I)(S) RequestRatResume. Resume skip by HoldTmr
Line 1338: [RSM(SEIC),%s] : (I)(S) Resume Fail. GrantState change to %s, HoldCause change to %s
Line 1345: [RSM(SEIC),%s] : (I)(S) RequestRatResume. there is no ResumeReic Rat:%s
Line 1449: [RSM(SEIC),%s] : (F) m_pMainReic is nullptr
Line 1457: [RSM(SEIC),%s] : Skip, already Early Pause.
Line 1465: [RSM(SEIC),%s] : pause time is already passed. skip early pause. currentTime[%u] pauseTime[%u]
Line 1471: [RSM(RCIF)] : Skip StartPauseTmr
Line 1478: [RSM(SEIC),%s] : (F) Pause Timer is not created.
Line 1488: [RSM(SEIC),%s] : Do Early Pause. DurationUs:%u
Line 1496: [RSM(SEIC),%s] : StartPauseTmr CurTime:%u, DurationUs:%u
Line 1529: [RSM(SEIC),%s] : Stop Early Pause
Line 1540: [RSM(SEIC),%s] : LTE already auto pause done, need to resume LTE
Line 1557: [RSM(SEIC),%s] : check resume skip rat in StopEarlyPauseTmr
Line 1583: [RSM(SEIC),%s] : CancelEarlyPause, OpMode[%u], GrantState[%s], HoldCause[%s], PrevHoldCause[%s], ModemState[%s]
Line 1587: [RSM(SEIC),%s] : Only LTE(MainReic) support CancelEarlyPause
Line 1602: [RSM(SEIC),%s] : Main Reic's ModemState[%s] is no need cancel early pause
Line 1611: [RSM(SEIC),%s] : CancelEarlyPause, There is SRL1RC pause request. request rat hold again
Line 1727: [RSM(SEIC),%s] : SavedAutoPauseDone is skip. skip early pause timer CB and clear SavedAutoPauseDone
Line 1748: [RSM(SEIC),%s] : (I)(S) paging is remaining %ums, ignored early pause.
Line 1801: [RSM(SEIC),%s] : (F) Reject Retry Timer is not created.
Line 1818: [RSM(SEIC),%s] : Reject Retry can not start in FeDV
Line 1831: [RSM(SEIC),%s] : already running reject retry timer
Line 1838: [RSM(SEIC),%s] : Reject Retry is only supported SA mode.
Line 1897: [RSM(SEIC),%s] : (I)(S) RejectRetryTmrCb Expired. RetryEvent[%s], IsInConnected[%u], PspsMode[%u], PeerStackPs[%u]
Line 1910: [RSM(SEIC),%s] : (I) no event is hold. no more reject retry
Line 1938: [RSM(SEIC),%s] : (I) LTE-LTE CONN-CONN. change retry event id to highPriority
Line 1944: [RSM(SEIC),%s] : (I) LTE Event RSM_PS_DATA, change retry event id to highPriority
Line 1959: [RSM(SEIC),%s] : (I) NR Event RejectRetry during BPLMN Hold, change retry event id to highPriority
Line 1964: [RSM(SEIC),%s] : (I) NR Event RejectRetry during BPLMN Hold is due to DR change. no upgradation needed
Line 1974: [RSM(SEIC),%s] : Reject Retry get grant.
Line 1984: [RSM(SEIC),%s] : RejectRetry granted is error. %s
Line 2002: [RSM(SEIC),%s] : StoreDrInfo. IratBplmnSrcRat[%s]
Line 2007: [RSM(SEIC),%s] : RestoreDrInfo. IratBplmnSrcRat[%s]
Line 2084: [RSM(SEIC),%s] : HighestReic[%s], HighestPriority[%u]
Line 2103: [RSM(SEIC),%s] : SetIsIratHandOver[%u]->[%u]
Line 2121: [RSM(SEIC),%s] : SEIC <=== REIC[%s], %s
Line 2171: [RSM(SEIC),%s] : (I)(S) Resume skip by HoldTmr
Line 2191: [RSM(SEIC),%s] : (I)(S) Resume skip by HoldTmr
Line 2211: [RSM(SEIC),%s] : (I) IsLTEPSPSPeerStackInPausedState [%u] IsInConnected [%u]
Line 2221: [RSM(SEIC),%s] : (I) IsLTEPSPSPeerStackInPausedState GrantState[%s] Peer RatType [%s]
Line 2225: [RSM(SEIC),%s] : (I) IsLTEPSPSPeerStackInPausedState Peer Stack SEIC is NULL
Line 2239: [RSM(SEIC),%s] : (I) Sending Release for Paused stack as LTE-LTE/ENDC-LTE is in CONN-CONN
Line 2255: [RSM(SEIC),%s] : Main REIC is deregistered.
Line 2261: [RSM(SEIC),%s] : Hold Delay is running. Do not UpdateReason
Line 2267: [RSM(SEIC),%s] : GrantState is pause pending. no need update
Line 2272: [RSM(SEIC),%s] : LTE PS-PS Enabled after One stack Paused
Line 2289: [RSM(SEIC),%s] : Main REIC is deregistered.
Line 2295: [RSM(SEIC),%s] : Hold Delay is running. Do not UpdateReason
Line 2301: [RSM(SEIC),%s] : GrantState is pause pending. no need update
Line 2306: [RSM(SEIC),%s] : LTE PS-PS Enabled after One stack Paused
Line 2322: [RSM(SEIC),%s] : (I) UpdateReason Rat(%s) Highest(%s) Trigger(%s)
Line 2364: [RSM(SEIC),%s] : (I)(F) not registered. StId[%u], CurDomainType[%u]
Line 2372: [RSM(SEIC),%s] : (I)(F) no pSrif. MainRatType[%s]
Line 2378: [RSM(SEIC),%s] : (I) GetDrSimInfo. srif[0x%x] Rat[%s] SimInfo[%u](0:none, 1:main, 2:sub)
Line 2501: [RSM(SEIC),%s] : GetFedvStatus[%u]
Line 2514: [RSM(SEIC),%s] : IsFedvOosResume[%u]
