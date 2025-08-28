Line 116: urlc_EmRlcValid - U-RLC not valid
Line 137: Error detected: Malloc returned NULL for URLC_RbTableMemHandler
Line 245: Error detected: not support ConfigMode(%d)
Line 361: urlc_EmFlushSRB2() : Invalid RB
Line 369: urlc_EmFlushSRB2: Configuration check(RbId %d, Mode %d)
Line 375: urlc_EmFlushSRB2() : Flushing SRB2, SegmentationFlowCntrlFifoCnt %d
Line 381: FLUSH_SRB2 -mui=%d, SduSize=%d 
Line 388: urlc_EmFlushSRB2() :MUI %d , RbId %d
Line 462: Error detected: not support Mode(%d)
Line 491: ERROR:not supported Mode(%d)
Line 591: Discarded by SRNS Reloc : ReTxSrbSdu: Mui %d, ReTxSrbSdu %x->NULL
Line 599: UrlcReEst: RbId %d, IsRlcCheckReqd %d, DetectDlPduSize %d, DlPduSize(New)%d, DlPduSize(Old)%d SrncReloc:%d
Line 601: Old Pdu Size = %d, New Pdu Size = %d:, IsUlRlcCheckReqd = %d
Line 679: urlc_EmStopRbs(STATUS_STOPPED): RbId %d, Mode %d
Line 748: urlc_EmContinueRbs(STATUS_RUNNING): RbId %d, Mode %d
Line 1035: urlc_EmCounterCheck(): CcmVars - Error detected, NULL Pointer RbId %d
Line 1041: urlc_EmCounterCheck: RbId %d, DlPendingAHfn %d
Line 1046: urlc_EmCounterCheck: RbId %d, DlPendingHfn %d
Line 1074: urlc_EmCounterCheck: RbId %d, UlValid %d, DlValid %d, UL HFN %d, DL HFN %d
Line 1100: ArrayCount out of bound 
Line 1139: RbTableEntry debugging test
Line 1184: urlc_EmMaxCountC(DL): RbId %d, PduSn %d, DlActivePtr %d, HFN %d
Line 1189: urlc_EmMaxCountC(DL): RbId %d, PduSn %d, DlActiveEntry %d
Line 1239: urlc_EmMaxCountC(UL): RbId %d, UlActivationTime %d, HFN %d
Line 1266: urlc_EmMaxCountC() : CsMaxCountC %d, PsMaxCountC %d
Line 1319: Error detected: RbId %d Add TM Entity failed
Line 1833: AM [RbId=%d, BufferOccupancy=%d]
Line 1864: TM [RbId=%d, LogCh=%d, BufferOccupancy=%d]
Line 1873: UM [RbId=%d, LogCh=%d, BufferOccupancy=%d]
Line 1886: AM [RbId=%d, LogCh=%d, BufferOccupancy=%d]
Line 1891: urlc_EmDataQueuedForTx - RbId=%d Mode=None(U-MAC asking for data on a RB not configured in U-RLC)
Line 1895: urlc_EmDataQueuedForTx - RbId=%d Mode=Invalid RbId(U-MAC asking for data on an invalid RbId. Valid range -2 to 32)
Line 1899: urlc_EmDataQueuedForTx - RbId=%d Mode=All(Invalid - U-RLC configuration error)
Line 1903: urlc_EmDataQueuedForTx - RbId=%d Mode=Unknown(Invalid -U-RLC configuration error)
Line 1965: DataQueued(TxWinFull): RbId %d, DataSize(ReTx)%d, TimerPollExpired %d, TimerPollPeriodicExpired %d, PollForStatusRepTrigByPollProhExp %d
Line 1970: DataQueued(TxWinFull): RbId %d, TimerPollExpired %d, TimerPollPeriodicExpired %d, PollForStatusRepTrigByPollProhExp %d
Line 1974:  --- [Tokens] TimerPollToken %X, TimerPollExpiredToken %X, TimerPollProhibitToken %X, PduListRoot=%X
Line 1991: URLC State variables: RbId %d, SduBuffer %d, DataReady %d, VT_A %d, VT_S %d, VR_R %d, VR_H %d
Line 1997: URLC Statistics: [TX: SduRxed %d, PduTxed %d, ReTxed %d, StatusTxed %d], [RX: PduRxed %d, StatusRxed %d, SduCreated %d]
Line 2052: Buffer mismatch with ListRoot: RbId %d
Line 2071: Error detected: Unexpected error(MODE_TM): RbId %d, SduIdentifier %d
Line 2107: AM CSP detected during UM BO check RbId %d
Line 2144: !!! Sending only CSP PDUs even though RB2 stopped, handle Presync and Baton HO !!!
Line 2148: AM status is stopped: RbId %d
Line 2167: DO NOT SEND UL DATA(Reset Pending or SUSPEND state): RbId %d, DataSize %d, State %d
Line 2177: AM Reset Pending OR SECOND LOG CH [RbId=%d, State=%d, DataSize=%d, Rep=%d, MaxPdusAv=%d, LogCh=%d, PaddingAllowed=FALSE]
Line 2188: StatusPduProcessing: RbId %d, PbDataQueuedForTxWindow %d, NumTxReq %d, NumRetxReq %d, SDU Buffer(Remaining)%d
Line 2212: !!! Reporting only CSP Buffer for RB2 which is stopped !!!
Line 2219: AM [RbId=%d, DataSize=%d, Rep=%d, MaxPdusAv=%d, LogCh=%d, PaddingAllowed=%d]
Line 2228: urlc_EmDataQueuedForTx - RbId=%d Mode=None( U-MAC asking for data on a RB not configured in U-RLC)
Line 2232: urlc_EmDataQueuedForTx - RbId=%d Mode=Invalid RbId( U-MAC asking for data on an invalid RbId. Valid range -2 to 32)
Line 2236: urlc_EmDataQueuedForTx - RbId=%d Mode=All(Invalid - U-RLC configuration error)
Line 2240: urlc_EmDataQueuedForTx - RbId=%d Mode=Unknown(Invalid - U-RLC configuration error)
Line 2251: Err [RbId=%d, DataSize=%d, Rep=%d, MaxPdusAv=%d, LogCh=%d, PaddingAllowed=FALSE]
Line 2289: TM [RbId=%d, LogCh=%d, BufferOccupancy=%d]
Line 2300: UM [RbId=%d, LogCh=%d, BufferOccupancy=%d]
Line 2339: DO NOT SEND UL DATA(Reset Pending): RbId %d, DataSize %d
Line 2349: AM Reset Pending OR SECOND LOG CH [RbId=%d, State=%d, DataSize=%d, LogCh=%d, PaddingAllowed=FALSE]
Line 2361: StatusPduProcessing: RbId %d, PbDataQueuedForTxWindow %d, NumTxReq %d, NumRetxReq %d, SDU Buffer(Remaining)%d
Line 2388: AM [RbId=%d, DataSize=%d,  LogCh=%d, PaddingAllowed=%d]
Line 2396: urlc_EmDataQueuedForTx - RbId=%d Mode=None(U-MAC asking for data on a RB not configured in U-RLC)
Line 2400: urlc_EmDataQueuedForTx - RbId=%d Mode=Invalid RbId(U-MAC asking for data on an invalid RbId. Valid range -2 to 32)
Line 2404: urlc_EmDataQueuedForTx - RbId=%d Mode=All(Invalid - U-RLC configuration error)
Line 2408: urlc_EmDataQueuedForTx - RbId=%d Mode=Unknown(Invalid -U-RLC configuration error)
Line 2414: Err [RbId=%d, DataSize=%d, LogCh=%d, PaddingAllowed=FALSE]
Line 2474: urlc_EmIncAllHfns(): CcmVars - Error detected, NULL Pointer RbId %d
Line 2491: urlc_EmGetUlEis debugging test
Line 2499: ERROR: not supported mode!
Line 2514: not supported mode! need to check
Line 2538: urlc_EmReleaseAllRadioBearers
Line 2561: not supported mode! need to check
Line 2579: not supported mode! need to check
Line 2625: Loop back mode 1 start function called, RbId = %d
Line 2629: Loop back mode 1 not configured, RbId = %d doesn't exist
Line 2639: AM Mode loop back mode-I set on RbId=%d, LoopbackPduSize =%d
Line 2645: UM Mode loop back mode-I set on RbId=%d, LoopbackPduSize =%d
Line 2651: TM Mode loop back mode-I set on(UL)RbId=%d, LoopbackPduSize =%d
Line 2656: urlc_EmStartLoopback invalid UL EIS [RbId=%d]
Line 2662: TM Mode loop back mode-I set on(DL)RbId=%d, LoopbackPduSize =%d
Line 2666: ERROR:not supported Mode(%d)
Line 2686: Loop back mode 1 STOP function called
Line 2704: AM Mode loop back mode-I STOPPED on RbId=%d
Line 2709: UM Mode loop back mode-I STOPPED on RbId=%d
Line 2714: TM Mode loop back mode-I set on RbId=%d
Line 2718: ERROR:not supported Mode(%d)
Line 2775: ERROR:not supported Mode(%d)
Line 2894: [Stats] TimerToken is NULL: Cannot start timer
Line 2914: [Stats] TimerExpiry: TimerToken is NULL
Line 2921: [Stats] TimerExpiry: URLC_RbTable is NULL
Line 2968: [Stats] TimerExpiry: No Data RBs
Line 2998: Error Copy UL Statistics : TotalRbCnt %d > (DM_URLC_MAX * 2) %d 
Line 3013: URLC UL AM Statistics : RbId %d, UlByte %d, UlBlk %d, UlRetrBlk %d
Line 3030: URLC UL UM Statistics : RbId %d, UlByte %d, UlBlk %d, UlRetrBlk %d
Line 3046: URLC UL TM Statistics : RbId %d, UlByte %d, UlBlk %d, UlRetrBlk %d
Line 3056: Error detected: Unknown Mode %d, EIS %x, TotalRbCnt %d, RbId %d 
Line 3072: Error Copy DL Statistics: TotalRbCnt %d > (DM_URLC_MAX * 2) %d 
Line 3087: URLC DL AM Statistics : RbId %d, DlByte %d, DlBlk %d, DlRetrBlk %d
Line 3104: URLC DL UM Statistics : RbId %d, DlByte %d, DlBlk %d, DlRetrBlk %d
Line 3120: URLC DL TM Statistics : RbId %d, DlByte %d, DlBlk %d, DlRetrBlk %d
Line 3130: Error detected: Unknown Mode %d, EIS %x, TotalRbCnt %d, RbId %d 
Line 2796: RbTable is NULL but Rxed RBid= %d
Line 2805: Radio Bearer ID Invalid %d
Line 2829: Error detected: Malloc returned NULL for URLC_BcchTable
