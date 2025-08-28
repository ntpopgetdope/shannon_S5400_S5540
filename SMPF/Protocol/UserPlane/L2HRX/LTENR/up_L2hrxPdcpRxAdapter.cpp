Line 157: [ADAPTER] Insufficient buffer - FlushRlcDescBuffer
Line 192: [ADAPTER][DRBID:%02d] Insufficient buffer - L2HRLCRX_L2HPDCPRX_REORD_EXPIRE_IND Lcid(%d,%d), RlcSnOfPdcpRxDeliv(%d,%d)
Line 194: [ERROR][ADAPTER] Sending L2HRLCRX_L2HPDCPRX_REORD_EXPIRE_IND Fail!
Line 211: [ADAPTER] L2_L2HPDCPRX_NR_DL_FLUSH_LTE_RLC_IND skip
Line 216: [ADAPTER] Insufficient buffer - L2_L2HPDCPRX_NR_DL_FLUSH_LTE_RLC_IND
Line 218: [ERROR][ADAPTER] Sending L2_L2HPDCPRX_NR_DL_FLUSH_LTE_RLC_IND Fail!
Line 231: [WARNING][ENTITY] pCurDesc(0x%x) pConvertDesc(0x%x) Count(%d) PdcpSn(%d)
Line 387: [ADAPTER] Insufficient buffer : Start Pdcp Insufficient State !!! - InsuffTimeDiffMs(%d)
Line 400: [ADAPTER] Insufficient buffer : Stop Pdcp Insufficient State !!! Insufficient Recover ElapsedTime(%d)
Line 492: [ADAPTER] Adaptive ReordTime=%d Oood=%d Bundling=%d IsHighTp=%d PdcpInsufficient=%d PduNumMs=%d PduNumCur=%d TargetDelayMs=%d WorkMon=%d
Line 508: [WARNING][ADAPTER][DRBID:%02d] t_ReorderingTimer : restart by decreasing AdaptiveReordTime(%d) OngoingReordTimeMs(%d) RemainReordTimeMs(%d)
Line 611: [ERROR][DRBID:%02d] L2_L2HPDCPRX_FAIL_IND - Trigger RRE by OOW fail %dms Rat(%d)
Line 643: [ERROR][SRBID:%02d] L2_L2HPDCPRX_FAIL_IND - Trigger RRE by SRB1 packet burst or stuck (%d/10) RatType(%d)
Line 666: [ERROR][DRBID:%02d] L2_L2HPDCPRX_FAIL_IND - Trigger RRE by InvalidPkt %dms InvalidPkt/TotalPkt(%d/%d) Rat(%d)
Line 723: [WARNING][ADAPTER][%cRBID:%02d] t_ReorderingTimer (%dms->%dms) by Carrier condition ReorderingUsed(%d)
Line 833: [ADAPTER][%cRBID:%02d] Forced Release by Insufficient buffer
Line 878: [WARNING][ADAPTER][%cRBID:%02d] t_ReorderingTimer : Adjust (Infinity->%dms) OutOfOrderDelivery
Line 900: [WARNING][ADAPTER][%cRBID:%02d] t_ReorderingTimer : Adjust (Infinity->%dms)
Line 919: [WARNING][ADAPTER][%cRBID:%02d] t_ReorderingTimer : Adjust (%dms->%dms) by Remain Desc/Buffer
Line 1210: [WARNING][%cRBID:%02d][CG:%d] Use RX_DELIV_VALID(%d) RX_DELIV(%d) RX_DELIV_CG(%d) WindowSize(0x%x) RxWindowExtend(%u)
Line 1239: [WARNING][%cRBID:%02d][CG:%d] Use RX_DELIV(%d) RX_DELIV_CG(%d) WindowSize(0x%x) RxWindowExtend(%u)
Line 1318: [WARNING][ADAPTER][DRBID:0x%02d] PDCP DISCARD !!! Skipped Num(%d) COUNT(%d - %d) MCG(0x%08x) SCG(0x%08x), LogPeriod(%d)
Line 1414: [HFN RCVRY] HfnRecovery Timer Expired !!!
Line 1423: [HFN RCVRY][ERROR] HfnRecovery : Create Fail !!!
Line 1429: [HFN RCVRY] Start HfnRecoveryTimer (%dms) DomainType(%d)
Line 1432: [ERROR][HFN RCVRY] Fail to start HfnRecoveryTimer !!!
Line 1443: [HFN RCVRY] Stop HfnRecoveryTimer
Line 1490: [HFN RCVRY][CG:%d] DoHfnRecovery Desc(%d) Count(%d) AdjustCount(%d) HfhAdj(%d) Pass Data : 0x%02x
Line 1503: [HFN RCVRY][CG:%d] DoHfnRecovery Desc(%d) Count(%d) AdjustCount(%d) HfhAdj(%d) Fail  Data : 0x%02x
Line 1511: [HFN RCVRY][CG:%d] DoHfnRecovery Failed HfnIdx(%d,%d) HfnAdj(%d,%d) Count(%d) 
Line 1529: [HFN RCVRY][DRBID:%02d][CG:%d] ApplyHfnRecovery Skip SampleNum(%d) ValidNum(%d) RecoveryBeforeDcpNum(%d)
Line 1546: [HFN RCVRY][CG:%d] ApplyHfnRecovery Hfn -3(%02d) -2(%02d) -1(%02d) 0(%02d) +1(%02d) +2(%02d) +3(%02d)
Line 1549: [HFN RCVRY][DRBID:%02d][CG:%d] ApplyHfnRecovery Not Found 
Line 1554: [HFN RCVRY][DRBID:%02d][CG:%d] ApplyHfnRecovery RecoveredRatio(%d)/Pass(%d) SampleNum(%d) RecoveryBeforeDcpNum(%d)
Line 1563: [HFN RCVRY][DRBID:%02d][CG:%d] ApplyHfnRecovery Failed(%d/%d)
Line 1574: [ERROR][HFN RCVRY][DRBID:%02d] L2_L2HPDCPRX_FAIL_IND - Trigger RRE by HFN Recovery fail %d Times Rat(%d)
Line 1584: [HFN RCVRY][DRBID:%02d] ApplyHfnRecovery Result - McgOffset(%d) ScgOffset(%d) -> NonZero(%d) bApply(%d)
Line 1637: [HFN RCVRY][DRBID:%02d] ApplyHfnRecovery - RxWindowExtend(%u) LastSubmitCount(%d/%d)
Line 1683: [HFN RCVRY] ApplyHfnRecovery Force(%d) RemainSample(%d)
