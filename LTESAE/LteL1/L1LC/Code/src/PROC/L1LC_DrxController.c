Line 248: Parameters related with Paging are incorrect!!!
Line 296: L1LC_UpdatePagingTimingInComparisionWithRef(Ref Timing - SFN:%d, TTI:%d) and update end timing(SFN:%d, TTI:%d)
Line 321: L1LC_DrxInit :: Reset gDrx_DSDSPagingRcvIntrSkip(%d)
Line 398: L1LC_DrxInitToReady(%d)
Line 415: Invalid ueState(%d)
Line 447: L1LC_ShadeInit
Line 528: Invalid state %d
Line 533: ST%d L1LC_DrxStateChange (%s -> %s(%d))
Line 535: ST%d L1LC_DrxStateChange (%s -> %s)
Line 600: [DRX] Is_Drx_Wakeup_ongoing : %d
Line 642: [DSDS] L1LC_CgiMeasMode(%d), L1LC_CgiOngoingFlag(%d), L1LC_IsReturnOngoing(%d) 
Line 670: L1LC_DrxStateShadeStart
Line 738: gDRXShort_Block=%d
Line 798: (L1LC_DrxUpdateConnDrxTime)(curTimeTti:%d ScaledTimeOffset=%d gDrxWakeSFN:%d gDrxWakeTTI:%d drx->curSleepTime:%d gDrxShortModeFlag:%d gDrxResync_cnt:%d)
Line 879: dsp_sleep_time=%d, rrm_sleep_time=%d, slink_slp_time=%d[ms]
Line 907: Invalid drx_T value is %d
Line 920: Change SleepTime : prev(%d), after(%d)!
Line 935: drx->curSleepTime = %u (IpcTimeInTTI: %u, SleepTimeInTTI: %u)
Line 946: SIB SFN_tti(%d, %d), Paging SFN_tti(%d, %d), Wakeup_Time_tti(%d)!
Line 947: sib_remain(%d), paging_remain(%d)
Line 957: time_diff(%d) ms between SIB and next Paging
Line 961: Paging occassion is just after SIB end!
Line 973: time_diff(%d) ms between Paging and next SIB
Line 977: SIB occassion is just after paging occassion! time_diff(%d) ms
Line 1008: [SADS]Fake wakeupTime(%u)
Line 1015: [SADS] curTime(%u)us
Line 1026: [SADS] Changed Fake wakeupTime(%u)us
Line 1030: [SADS]Fake paging_slp_time (%u)->(%u)
Line 1036: [SADS]sleep time is short then margin (%u), (%u)
Line 1043: [SADS]paging_slp_time (%u)->(%u)
Line 1049: [SADS]sleep time is short then margin (%u), (%u)
Line 1054: PF(%d)PO(%d)curTimeSFN(%d)curTimeTti(%d)reset_offset(%d)(%d)
Line 1056: sib_frame=%d, sib_offset=%d, pagingFrame=%d, paging_offset=%d, drx->state=%d, paging_slp_time=%u
Line 1070: drx->curSleepTime = %u, (%u, %u)
Line 1093: L1LC_DrxProcSlowClkEstComplete, state[%d][%d]
Line 1194: DRX spare timer start(%d), Curr=%d
Line 1199: DRX spare timer CANNOT start(bplmn_spare_tmr_duration = %d), Curr=%d
Line 1207: Remaining time for next paging occassion = %d
Line 1216: need more DRX spare time
Line 1242: [DRX] L1LC_DrxCheckIdleOOS
Line 1263: [DRX] [%d]RLF(peak_value(%d) < thresh(%d))
Line 1300: %s(RF:%d)
Line 1313: L1LC_DrxCheckSleepStart[comm](gL1lc DsdsDB.IsCellResel is TRUE)
Line 1325: L1LC_DrxCheckSleepStart[idle(reinit)](Invalid SFN)
Line 1351: L1LC_DrxCheckSleepStart[idle(reinit)](Serving timing abnormal)(filtered_rsrp:%d)
Line 1364: L1LC_DrxCheckSleepStart[idle](Serving timing abnormal)(filtered_rsrp:%d)
Line 1394: L1LC_DrxCheckSleepStart[idle(reinit)](PDM value abnormal)(gDrxPdmArray[0]:%d gDrxPdmArray[1]:%d)
Line 1410: L1LC_DrxCheckSleepStart_Idle: Abnormal Scenario, gDrxOOSArraySize(%d) exceeding 32
Line 1427: L1LC_DrxCheckSleepStart[idle(reinit)](OOS Event)
Line 1439: L1LC_DrxCheckSleepStart[idle](oos_result_cnt(%d) < gDrxOOSCriteria(%d))
Line 1463: L1LC_DrxCheckSleepStart[idle(reinit)](Ongoing ReInitDrx)
Line 1482: L1LC_DrxCheckSleepStart[idle](BPLMN Start)
Line 1490: Stop SlowClkEstForCFO due to BPLMN Start
Line 1514: L1LC_DrxCheckSleepStart[idle](HALDRX_CheckUpperLayerFlag)
Line 1529: IDLE DRX skip cus Meas ongoing.(curMode:%d, curIratMode:%d)
Line 1571: L1LC_DrxCheckSleepStart(NR SCG setup C-DRX skip)
Line 1579: L1LC_DrxCheckSleepStart(C-DRX(cycle:%d) skip on throughput(DL: %dMbps / UL: %dMbps)
Line 1589: (DSDS)L1LC_DrxCheckSleepStart[conn](LTE Paused)
Line 1600: (4G_DRDS)L1LC_DrxCheckSleepStart[conn](4G_DRDS Active)
Line 1647: L1LC_DrxCheckSleepStart[conn](OtherStWakeup nearby: %d(100us)
Line 1660: (DSDS)L1LC_DrxCheckSleepStart[conn](HO started)
Line 1670: L1LC_DrxCheckSleepStart[conn](HO started by RRC HO Flag)
Line 1684: L1LC_DrxCheckSleepStart[conn](Rrm Flag)
Line 1695: L1LC_DrxCheckSleepStart[conn](SIB modification)
Line 1709: L1LC_DrxCheckSleepStart[conn](RSTD Measurement)
Line 1723: L1LC_DrxCheckSleepStart[conn](OutOfSync is found)(Out Sync Rate:%d)
Line 1737: L1LC_DrxCheckSleepStart[conn](AFC hold mode-long sleep)(afc_hold_mode_check:%d)(gHALSC_fast_srch_flag:%d)(gHALSC_fast_srch_offset:%d)
Line 1750: [ERR]L1LC_DrxCheckSleepStart[conn](UNEXPECTED SLEEP_TIME)(gL1LC_DrxControl->curSleepTime(%d) > DrxMaxCycle(25600))
Line 1765: L1LC_DrxCheckSleepStart[conn](LMAC Working)(tx:%d, rx:%d, gSRTriggered:%d HALTX_SleepOkFlag:%d)
Line 1779: L1LC_DrxCheckSleepStart[conn](gHalDrx_ConnDrxState = DRX_CONN_INIT, wait DSP Done)
Line 1790: L1LC_DrxCheckSleepStart[conn](gHALEXP_SpecialModeStatus is On)
Line 1797: L1LC_DrxCheckSleepStart[conn](HALEXP_GetPingModeControl is On)
Line 1807: L1LC_DrxCheckSleepStart[conn](Waiting TX_BLOCK_DONE from PHY(gHal_IpcTxStatus:%d))
Line 1817: L1LC_DrxCheckSleepStart[conn](gHal_PendingAntSwitchInENDC = %d, wait L1LC_L1TUNNEL_NR_4G_INFO_CNF from NR)
Line 1818: L1LC_DrxCheckSleepStart[conn](gHal_PendingAntSwitchInENDC = %d, wait L1LC_L1TUNNEL_NR_4G_INFO_CNF from NR)
Line 1862: [DRX] MsgPendingNum = %d.
Line 1871: L1LC_DrxCheckSleepStart: Do not sleep during HO),gL1LC_LteTimingLatchForHO:%d,pal_Irat_GetHandoverStartSig:%d
Line 1877: L1LC_DrxCheckSleepStart[4GDS](NumOfQueueMsg[%d])
Line 1887: L1LC_DrxCheckSleepStart[4GDS](HoldRrmMsgFlag[%d])
Line 1900: L1LC_DrxCheckSleepStart[4GDS] - skip (cum_drx_time[%d], Conn-Conn state[%d], longDRXcycle[%d])
Line 1918: [STAT]Drx Skip(common):gDrxMbsfnSiCount[%d] gDrxVocoderCount[%d] gDrxStateErrCount[%d] gDrxVolteCount[%d] gDrxHoldCount[%d]
Line 1923: [STAT]IdleDrx Skip : gDrxBplmnCount[%d] gDrxFlagCount[%d]
Line 1925: [STAT]Resync[%d] : SfnCount[%d] WakeupTimeCount[%d] ServigTimeCount[%d] PdmCount[%d] CinrCount[%d]
Line 1930: [STAT]ConnDrx Skip:gDrxRstdMeasCount[%d] gDrxRlfCount[%d] gDrxRepeaterCount[%d] gDrxAbnormalTimeCount[%d] gDrxLMacCount[%d] gDrxWaitIpcCount[%d] gDrxSiModCount[%d]
Line 1956: L1LC_DrxCheckSleepStart[comm](MBSFN DRX check)
Line 1966: L1LC_DrxCheckSleepStart[comm](Serving Cell mismatch-no skip)(%d, %d)
Line 2002: L1LC_DrxCheckSleepStart[comm](VoLTE is working)
Line 2025: L1LC_DrxCheckSleepStart[comm](gDrx_HoldFlag is TRUE)
Line 2041: [GNSS-PULSE] L1LC_DrxCheckSleepStart[comm](PulseStatus is TRUE)
Line 2051: L1LC_DrxCheckSleepStart[comm](DRX is not ready)(gL1LC_DrxControl->state:%d)
Line 2070: L1LC_DrxCheckSleepStart[comm](GnssTimeAid is TRUE)
Line 2088: L1LC_DrxCheckSleepStart[comm](clait_state is TRUE)
Line 2097: L1LC_DrxCheckSleepStart[comm](Avoid MCG sleep in DRDS mode)
Line 2103: L1LC_DrxCheckSleepStart[comm](PBCH is being decoded, mode(%d))
Line 2122: L1LC_DrxCheckSleepStart[SADR](SA-LTE DR state transition, LTE skip the idle sleep due to the RF reject)
Line 2169: constMargin %d 								pConstMargin %d 								change %d 						adjust %d 
Line 2190: APActiveState(%d, %dms)
Line 2271: L1LC_DrxProcSleepStart
Line 2284: UNEXPECTED SLEEP_TIME(%u)!!!!!!!!!!!!!!!!! 
Line 2288: L1LC_DrxUpdateLongDrxTime!!!!!!!!!!!!!!!!! 
Line 2302: L1LC_DrxProcSleepStart: Add 6ms sleep margin in 4G/4G case
Line 2366: [DRX] DRX_SLEEP_MARGIN(idle) = %d, gDrx_SysStableTime = %d,  4RX_MARGIN = %d, drx_T = %d,
Line 2369: dmGetDmState = %d, gDrx_4GDSMargin = %d, pHALDRX_Db->gDrx_2RxMargin = %d pHALDRX_Db->gDrx_SleepTimeAdj %d
Line 2407: gL1LC_DrxControl->curSleepTime = %d, DRX_SLEEP_MARGIN = %d
Line 2428: [gL1LC_DrxControl->curSleepTime = %d, pLTE_OHE->SleepTime = %d/%d]
Line 2490: [DRX] L1LC_DrxProcSleepReq ue_state(%d), sleep_ready(%d), curstate(%d)
Line 2511: [DRX] L1LC_DrxProcSleepReq state=%s
Line 2512: [DRX] L1LC_DrxProcSleepReq state=%s
Line 2554: [DRX] UpdateRfCause to SysRead for SCG
Line 2567: [DRX] skip SI command: current(%d) sib_start(%d) sib_end(%d)
Line 2586: [DRX] UpdateRfCause to SysRead for SCG
Line 2652: [DRX] gDrx_HoldFlag(%d)
Line 2670: [DRX] PagingRcvIntr about to expire. Skip RF release!!
Line 2699: [DRX] Don't release RF. Wait RRC_IDLE_IND.
Line 2703: [DRX] Extend gL1LC_DrdsAbnormalCheckTmr (gDrxRrcFlag case)
Line 2742: [DRX] Meas Done, Don't Sleep, gHalDrx_PagingState = DRX_MEAS_DONE
Line 2765: [DRX] PAGING_DONE_IND still not processed, so just skip SLEEP_REQ
Line 2769: [DRX] Meas Done, Abnormal Case
Line 2869: [NRDS] Stop Conn DRX meas. (IsEndc : %d)
Line 2902: Conn DRX spare time(%d) is longer than Conn DRX cycle(%d)!!!
Line 2911: Conn DRX spare time(%d), MinRequiredTime=%d, cgi_returnTime=%d
Line 2916: need more Conn DRX spare time(%d), MinRequiredTime=%d, cgi_returnTime=%d
Line 2963: Change SleepTime : prev(%d), after(%d)!
Line 2975: remain time to paging(%d), MinRequiredTime(%d), ret_val(%d) 
Line 3102: LteMifFreq(%d) DrxLongSleepMargin(%d)
Line 3110: extend sleep margin(%d) for conn-conn state
Line 3146: L1LC_DrxProcConnSleepStart: Add 1ms sleep margin in 4G/4G case
Line 3207: [DRX] gDrxRemainTimeToODT %d(0x%x)
Line 3208: [DRX] gDrxRemainTimeToCQI %d(0x%x)
Line 3209: [DRX] gDrxRemainTimeToSRS %d(0x%x)
Line 3210: [DRX] gDrxRemainTimeToSIB %d(0x%x)
Line 3211: [DRX] gDrxRemainTimeToPO %d(0x%x)
Line 3263: [DRX] DRX_SLEEP_MARGIN(Conn) = %d, gDrx_SysStableTime = %d, DRX_TX_TIME_ALIGN = %d, HALDSP_GetVolteStatus() %d 4RX_MARGIN = %d,gDrx_SleepTimeAdj %d 
Line 3265: pHALDRX_Db->gDrx_ScellMargin = %d, dmGetDmState = %d, gDrx_4GDSMargin = %d, pHALDRX_Db->gDrx_2RxMargin = %d largestRemainTimeTo %d 
Line 3269: APActiveState(%d, %dms)
Line 3291: gL1LC_DrxControl->curSleepTime(%d) DRX_SLEEP_MARGIN(%d) DrxLongSleepMargin(%d) 
Line 3297: gL1LC_DrxControl->curSleepTime(%d) DRX_SLEEP_MARGIN(%d) DrxLongSleepMargin(%d) 
Line 3326: AFC hold mode...(short sleep) Sleep Pass...(afc_hold_mode_check:%d)(gHALSC_fast_srch_flag:%d)(gHALSC_fast_srch_offset:%d)
Line 3343: (L1LC_DrxProcConnShortSleepStart)(Sleep time is insufficient)(gL1LC_DrxControl->curSleepTime:%d pHALDRX_Db->gDrxShortStableTime(%d) DRX_SHORT_MODE_SLEEP_MARGIN(%d)
Line 3383: [DRX-MBSFN] L1LC_MbmsDrxCheck :: Mode (%s)  Start_Sfn = %d, Start_Tti = %d, End_sfn = %d, End_tti = %d
Line 3392: [DRX-MBSFN] mbsfn_sleep_time = %d, DRX_MARGIN = %d
Line 3411: Sleep time is insufficient : gDrxSleepTimeInTTI = %d
Line 3420: gL1LC_DrxControl->curSleepTime = %d, pHALDRX_Db->DRX_SLEEP_MARGIN = %d
Line 3430: [DRX-MBSFN] No Sleep for the whole DRX period
Line 3447: [DRX-MBSFN] Avoid Sleep Timer-1 Created = %d
Line 3502: [DRX-MBSFN] L1LC_DrxSleep,Sleep Mode = %s
Line 3527: [DRX] %s Soft SleepStart start!!!
Line 3529: [DRX] %s Sleep Start Time : (Previous %d.%d) vs (Current %d.%d) [100us]
Line 3547: [DRX] Set Current ST%d DsdsWakeupIntrTmr: %d, pLTE_OHE->SleepTime: %d, gDrx_WakeupSocTime: %d [100us]
Line 3581: [DRX] %s Soft SleepStart end!!!
Line 3598: [DRX] Other ST(%d)'s remaining time is %d (100us)
Line 3600: ApActiveMargin(%dms)
Line 3629: [DRX] %s Soft SleepStart start!!!
Line 3631: [DRX] %s Sleep Start Time : (Previous %d.%d) vs (Current %d.%d) [100us]
Line 3643: [DRX] Set Current ST%d DsdsWakeupIntrTmr : %d, pLTE_OHE->SleepTime: %d, pLTE_OHE->gDrx_WakeupSocTime: %d [100us]
Line 3677: [Debug] ConfigRxFilter - for fix
Line 3710: [DRX] %s Soft SleepStart end!!!
Line 3893: L1LC_DrxProcConnSleepReq :: DSP Status bitmap(Rach/ULG/SRI/CR(%x) RTT/RTX/IAT/ODT(%x) Paging/DediRach(%x)) gRACHflag(%d)
Line 3926: [DRX] Meas Done, Abnormal Case : gHalDrx_ConnDrxState = DRX_CONN_INIT
Line 3958: CGI Measure Start (Don't Sleep)
Line 3963: Stop SlowClkEstForCFO due to CGI Measure Start
Line 3986: CGI Measure didn't Start (need more spare time[%d] NrBandNum[%d] rfSupport[%d])
Line 4029: (L1LC_DrxProcConnSleepReq)(shortmode insufficient time case)(pHALDRX_Db->gDrxShortModeFlag:%d shortsleepflag:%d)
Line 4033: (L1LC_DrxProcConnSleepReq)(gDrxShortModeFlag:%d shortsleepflag:%d)
Line 4060: IRAT CGI Measure Starts (LTE Modem remains sleep)
Line 4078: IRAT CGI Measure didn't Start (need more spare time) or ENDC is active, so IRAT CGI cannot be triggered
Line 4103: [DRX] Meas Done, gHalDrx_ConnDrxState = DRX_CONN_MEAS_DONE, gHalDrx_SleepState = %d
Line 4109: [DRX] Don't Sleep, gHalDrx_ConnDrxState = %d, gHalDrx_SleepState = %d
Line 4168: (L1LC_ConnDrxUpdateDrxConfig)(CdrxConfig setup)
Line 4173: (L1LC_ConnDrxUpdateDrxConfig)(CdrxConfig diable)
Line 4214: HalDrxUpdate is maintained
Line 4232: L1LC_DrxUpdateDrxNewConfig (%d)
Line 4236: L1LC_DrxUpdateDrxConfig is maintained (%d)
Line 4261: (L1LC_ConnDrxUpdateDrxConfig)(onDurationTimer:%d drxInactivityTimer:%d drxRetransmissionTimer:%d)
Line 4262: (L1LC_ConnDrxUpdateDrxConfig)(longDRXCycle:%d longDRXCycle_offset:%d shortDRXCycle:%d drxShortCycleTimer:%d)
Line 4263: (L1LC_ConnDrxUpdateDrxConfig)(onDurationTimer:%d drxInactivityTimer:%d drxRetransmissionTimer:%d)
Line 4264: (L1LC_ConnDrxUpdateDrxConfig)(longDRXCycle:%d longDRXCycle_offset:%d shortDRXCycle:%d drxShortCycleTimer:%d)
Line 4277: L1LC_DrxConfig is Disabled
Line 4279: (L1LC_ConnDrxUpdateDrxConfig)(L1LC_DrxConfig is Disabled)
Line 4363: Diffent DRX !!!!!n PrevL1LC_DrxUpdatePagingConfig(drx_T:%d, PF:%d, PO:%d, nB:%d)
Line 4421: L1LC_DrxUpdatePagingConfig(drx_T:%d, PF:%d, PO:%d)
Line 4422: L1LC_DrxUpdatePagingConfig(drx_T:%d, PF:%d, PO:%d)
Line 4524: L1LC_DrxSuspendReq
Line 4548: MTM calibration is already working
Line 4555: LTE is already in test mode
Line 4562: L1 is already suspend mode(%d)
Line 4566: L1 is already power down
Line 4572: [L4GDS]Other LTE stack is not inactive
Line 4603: [L1LC_DrxSuspendReq] Do not clear IRAT Signal as response from UMTS is awaited
Line 4619: [4GDS] Conn - Conn state is ended!!
Line 4694: [LTE_L1LC] L1LC_ForceDeactSCC for CC %d
Line 4770: Other LTE stack is actived(%d)
Line 4797: [LTE_L1LC] L1LC_ForceDeactSCC for CC %d
Line 4887: End of %s(Did_X2L_Irat:[%d, %d])
Line 4916: L1LC_DrxResumeReq/pre_cellbound(%d, %d), OHE_State(%d, %d), Diff_cellbound(%d)
Line 4940: [L1LC_DrxResumeReq] Do not clear IRAT Signal as response from UMTS is awaited
Line 4951: OtherST(%d) Active and CurrentST(%d) Resume-Req: L2BlockStatus -> FALSE!
Line 4981: [DRX] HW is not off actually
Line 4987: [DRX] gDrx_PowerOn_TimingLatch, Skip Modem/Dsp power on 
Line 5004: [DRX] gDrx_PowerOn_TimingLatch (Other ST: %d), Skip Modem/Dsp power on 
Line 5088: [DRX] Diff cellboundary is zero!(%d)
Line 5091: [DRX] same pre_StackID(%d), Diff cellboundary Not change!(%d)
Line 5105: Single SIM?(%d)::OtherST%d OHE(INACTIVE)
Line 5114: << end @%s()
Line 5153: Paging Receive Intr is already set, Do not update again
Line 5190: Change SleepTime : prev(%d), after(%d)!
Line 5194: time_diff(%d)! IsConn(%d)
Line 5206: It seems that paging timing was passed already!
Line 5235: UNEXPECTED SLEEP_TIME(%u)!!!!!!!!!!!!!!!!! 
Line 5239: L1LC_DrxUpdateLongDrxTime!!!!!!!!!!!!!!!!! 
Line 5274: [DRX] Remaining Time for PagingRcvIntr is too small. Set PagingRcvIntr 1ms later
Line 5276: [DRX] Prepone not possible!!paging_frame=%d(%d), curTimeSFN=%d(%d)
Line 5282: [DRX] paging_frame=%d, paging_offset=%d, curTimeSFN=%d(%d)
Line 5320: [DRX] Don't release RF. Wait RRC_IDLE_IND.
Line 5324: [DRX] Extend gL1LC_DrdsAbnormalCheckTmr (gDrxRrcFlag case)
Line 5405: time_diff(%d, (100us))!
Line 5442: [4G_DRDS] SCG Paging Receive Intr is already set, Do not update again!
Line 5484: Change SleepTime : prev(%d), after(%d)!
Line 5488: time_diff(%d)!
Line 5526: UNEXPECTED SLEEP_TIME(%u)!!!!!!!!!!!!!!!!! 
Line 5530: L1LC_DrxUpdateLongDrxTime!!!!!!!!!!!!!!!!! 
Line 5560: [DRX] Remaining Time for PagingRcvIntr is too small. Set PagingRcvIntr 1ms later
Line 5563: [DRX] Prepone not possible!!paging_frame=%d(%d), curTimeSFN=%d(%d)
Line 5572: [DRX] paging_frame=%d, paging_offset=%d, curTimeSFN=%d(%d)
Line 5621: Remaining time for next paging occassion = %d
Line 5630: ALL MEAS cycle - Need more DRX spare time
Line 5658: [LTE_DSDS] HAL saved message [%d] is freed)
Line 5705: Current SFN and TTI = %d, Paging Frame and TTI = %d
Line 5729: L1LC_ProcCheckWakeupAvailableTimerExpired!!
Line 220: ST%d L1LC BPLMN Spare(%u)[ms] at %s()==
