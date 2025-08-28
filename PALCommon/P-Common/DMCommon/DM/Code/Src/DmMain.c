Line 347: [TRIG] DmParseRequest: 
Line 351: [TRIG] Error: CreateDmMsg
Line 357: [TRIG] DM Message Main 0x%x, Sub 0x%x, CmdType 0x%x, Len=0x%x
Line 363: [TRIG] parameter: 
Line 366: [TRIG] MsgSendTo
Line 367: [TRIG] MsgSendToParameter
Line 371: [TRIG] Error: DmParseRequest
Line 459: [DM] Total txQCount(%d) is larger than TX_Q_MIN. Don't skip flush
Line 512: [DM] Flush condition is set as Control Msg(%d) AboxLog(%d) TCPDump(%d). Don't skip flush
Line 533: [TRIG] Failed to read GFEATURE_DM_LEGACY_METRIC_COM_DDCM registry
Line 537: [TRIG] Failed to read GFEATURE_DM_LEGACY_METRIC_LTE_DDCM registry
Line 541: [TRIG] Failed to read GFEATURE_DM_LEGACY_METRIC_EDGE_DDCM registry
Line 545: [TRIG] Failed to read GFEATURE_DM_LEGACY_METRIC_HSPA_DDCM registry
Line 549: [TRIG] Failed to read GFEATURE_DM_LEGACY_METRIC_CDMA_DDCM registry
Line 643: [DM] TraceInfo = %x
Line 645: [DM] DM Symbol Table Info = %x
Line 681: [DM] error: pal_TmCreateTimer failed!
Line 702: [DM] error: pal_TmCreateTimer failed!
Line 716: [DM] error: pal_TmCreateTimer failed!
Line 738: [DM] Sending NS_DM_TIMER_CHANGE_REQ error %d
Line 749: [DM] error: pal_TmCreateTimer failed!
Line 1007: [DM] [DM_TX]Failed to pal_SmCreateEventGroup()
Line 1014: [DM] OS String [%s]
Line 1021: [DM] DM init fail: result: %x
Line 1150: [DM] RTKTimer %d
Line 1199: [DM] Skip flush as txQCount is under TX_Q_MIN or currCtrlListDesc[0] is null
Line 1210: [DM] bNeedtoFlush is true. Don't skip flush
Line 1226: [DM] TIMER_ID_RSC, dmRuntimeFlag =0x%x
Line 1230: [DM] TIMER_ID_RSC, stopped
Line 1237: [DM] RSCtest, dmRuntimeFlag =0x%x  RUNTIME_CPU_IDLE_MONITOR
Line 1242: [DM] RSCtest, dmRuntimeFlag =0x%x	RUNTIME_CPU_MONITOR
Line 1247: [DM] RSCtest, dmRuntimeFlag =0x%x  RUNTIME_DYNAMIC_MEMORY
Line 1252: [DM] RSCtest, dmRuntimeFlag =0x%x  RUNTIME_THREAD_MEMORY
Line 1373: [DM] DMObj.ReceivedObj.Message == NULL - pal_TaskEntry_DM
Line 1385: [DM] dmControlMsgHandler process error - %d
Line 1406: [DM] pal_TaskEntry_DM start
Line 1591: [DM] [DM:Err] hostifSendListData failed
Line 1630: [DM] hostifSendListData failed
Line 1727: [DM] [DM:Err] hostifSendListData failed
Line 1731: [DDCM] No ddcm data to send
Line 1736: [DM] [DDCM] DBG: dmFlushMetricLog(StartIdx: %d->%d, FlushIdx: %d->%d, SentMetric: %d)
Line 1741: [DM] [DDCM] DBG: Last 5 buffer in accumulate sent list: %d(%d)-%d(%d)-%d(%d)-%d(%d)-%d(%d)
Line 1746: [DM] [DDCM] DBG: Last 5 buffer in accumulate sent list: %d(%d)-%d(%d)-%d(%d)-%d(%d)-%d(%d)
Line 1755: [DM] pal_TaskEntry_DM_TX start
Line 1978: [DM] error : pDmHdlcMsg == NULL - 'dmControlMsgHandler'

Line 2000: [DM] Can not process dmControlMsgProc() - error: %d
Line 2282: [DM] SigRead Func Registration Fail
Line 2290: [DM] dmSetSibReadFunc len %d, type %d, rat %d
Line 2292: [DM] data
Line 2294: [DM] data
Line 2516: [DM] pal_MemAlloc failed
Line 2524: [DM] pal_MemAlloc failed
Line 2554: [DM] [DM] DM Ctrl msg, hostifSendListData failed
Line 2835: [DM] dmSendToNs TypeMsg %d, Length %d
Line 2952: [DM] [DM Statistic] Core [%d] Q Status - TxQ %d, FreeQ %d, MetricQ %d, Slipcount %d Flush Status - Succ %d, Fail %d SentByte %d
Line 2958: [DM] [DM Statistic] MissSeqNum(Trace: %d, Others: %d), TraceMsgPushPop  Status -FreeTxDesc %d GetTxDescFromFreeQueue %d, EnqueTxDescToDmTx %d
Line 2962: [DM] [DM Statistic] dmGetMetricState:%d, dmGetFeatureExMetricStatus: %d, dmGetExMetricState:%d, dmGetExMetricInternalState:%d, slipCount(%d)
Line 2963: [DM] [DMIMPR] DDCM Task Init: %d
Line 2982: [DM] [DM Statistic] DmState:%d, DmTraceState:%d, dspLoggingStatus:0x%x, debugLevel:%d profile %d(chg %d) metric (%x)
Line 2983: [DM] [DM Statistic] DmInitialCongestionControl - %d, MsgSeq %d - %d, TraceSeq %d - %d, SeqError %d
Line 2985: [DM] [DM Statistic] DDCM start idx %d Currnt idx %d
Line 2992: [DM] [DM Statistic] DmTxQ: %d, DmFreeQ: %d, SentBytes: %d, DmSlipCount: %u, WrongCntSmall: %u, WrongCntBig: %u
Line 2993: [DM] [DM Statistic] DmState:%d, DmTraceState:%d, dspLoggingStatus:0x%x, debugLevel:%d profile %d,  DmInitialCongestionControl - %d
Line 2998: [DM] [DM Statistic] DM Essential Level: 0x%X
Line 3068: [DM] dmConsoleMsgProc Msg Process
Line 3072: [DM] msg pointer is NULL - dmConsoleMsgProc
Line 3113: [DM] dmSendConsoleMsg Msg send %d
Line 3290: [DM] This is Dummy Task related CIQ Task
Line 3295: [DM] This is Dummy Task related CIQ_FE Task
Line 3345: [DM] Debug Level is LOW, so DSP log are not capured
Line 3348: [DM] Set DSP Logging Status : NV %d, LoggingStatus %d
Line 3355: [DM] [DM] Essential Mask ON, add DM_LOGGING_TRACE
Line 3431: [DM] update period change to %d, value 
Line 321: [TRIG] Error: Message allocation Failed
Line 333: [TRIG] Error: Message allocation Failed
Line 3042: [DM] dmProcSvcConsoleKeyCodeReq Msg Process
Line 3053: [DM] KeyCode = 0x%X, 0x%X
Line 3058: [DM] svcProcessKeyCodeSet ok
Line 3023: [DM] error: pDlData is NULL - dmProcSvcConsoleKeyCodeRsp
Line 3030: [DM] end dmProcSvcConsoleKeyCodeRsp Msg Process, keyCode=0x%X
