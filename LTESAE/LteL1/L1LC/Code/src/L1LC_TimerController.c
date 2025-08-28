Line 194: [DRX] Extend Timer %s by (%u)us, Current remain_time(%u)us
Line 233: TimeToExpiry(%u, (100us)) AbsTimeout(%x) pal_uptime(%x)! TimerState(%d)
Line 252: L1LC_ProcTimerExpired(%d)
Line 437: Invalid Timer(%d)
Line 460: L1LC_ProcTimerExpiredHisr!!, TimerID[%d]
Line 484: L1LC_ProcTimerExpiredDsHisr!!, TimerID[%d]
Line 580: Force Timer Expired!! because RF release or pause
Line 598: PBCH Timer expired !(%d)
Line 637: [DRX] L1LC_ForceTimerExpired: DisablePagingRcvIntr
Line 646: Stop Check Release Feasibility timer
Line 652: Stop Conn Conn RF timer for other stack
Line 658: Stop Conn Conn RF timer for current stack
Line 664: Stop Check meas elem timer for current stack
Line 683: Force Timer Expired SCG!! because RF release or pause
Line 688: [DRX] L1LC_ForceTimerExpired: DisablePagingRcvIntrSCG
Line 765: [LTE L1LC DSL1RC] DSDS RETRY TIMER EXPIRED!!!
Line 797: [LTE L1LC DSL1RC] Reinit DRX case. Update result as MEASUREMENT to prevent permanant REJECT
Line 801: UE state is INIT.
Line 806: [LTE L1LC DSL1RC] L1LC_DsdsRetryTimerExpired (req_reason: %d)
Line 814: [LTE L1LC DSL1RC] PAUSE_IND, Wait RESUME_IND from RRM.
Line 825: [DS_OPT] Ignore retry timer expired!
Line 901: ST%d L1LC_DsdsPagingReqTimerExpired!!
Line 908: [LTE L1LC DSL1RC] Wakelock, CPU/MIF clk set again for DRX wakeup due to PO skip
Line 947: L1LC DsdsConnSibTimerExpired!! Sib12_start[%d], OtherSib_start[%d]
Line 968: L1LC_DsdsReleaseAndReqTimerExpired!!
Line 991: L1LC_DsdsCheckReleaseFeasibilityTimerExpired!!
Line 1014: L1LC_ProcDsdsConnConnRfTimerExpired!!
Line 1034: L1LC_DrdsAbnormalCheckTimerExpired!!
Line 1054: L1LC_ModemOffAbnormalTimerExpired!!
Line 1075: L1LC_CheckWakeupAvailableTimerExpired!!
Line 1104: ST%d L1LC_DsdsWakeupIntrTimerExpired!!
Line 1112: [DSDS] HW wakeup intr was enabled, restart wakeup timer 500us (%d, %d, %d)
Line 1138: ARFC case So, DRDS is unavailable!!
Line 1177: ST%d L1LC_DsdsPagingRcvIntrTimerExpired(prepone %d)!!
Line 1202: ST%d L1LC_DsdsEarlyPauseTimerExpired!! RF Available[%d]
Line 1209: [4G_DRDS] EPT expired twice
Line 1226: [LTE_DSDS] Will Early return from EPTExpired. Send RF request as IsRfCauseUpdatePending is TRUE, RF Requet[%s]
Line 1239: [LTE_DSDS] EPTExpired during Reconfig. Send EPT skip.
Line 1249: No need early pause. Already paused/released
Line 1267: L1LC_ControlMifForHandOverTimerExpired!!
Line 1293: L1LC_CheckSadrMeasureTimerExpired!!
Line 1316: L1LC_TurnOnRxPathTimerExpired!!
Line 1324: Abnormal case!! Modem Power [%d], RF Available[%d]
Line 1335: L1LC_SocWarmupTimerExpired!!
Line 1352: gDrx_SocWarmupTimerState is FALSE, ignore it!!
Line 1364: L1LC_CheckLastPagingIntrTimerExpired!!
Line 1376: It seems that the interrupt for last paging is not coming. So, SW workaround operation for this abnormal operation will be performed.
Line 1380: Abnormal HALDRX_DisablePagingIntr
Line 1389: Abnormal L1LC_CheckLastPagingIntrTimerExpired!!
Line 1443: LTE%d Long Pause: Cell Search Ongoing. DSDSMASK[0x%x], curMode[%d] curIratMode[%d]
Line 1448: LTE%d Long Pause: MEAS Ongoing. DSDSMASK[0x%x], curMode[%d] curIratMode[%d]
Line 1453: LTE%d Long Pause: Unknown Reason DSDSMASK[0x%x]
Line 1467: L1LC_LongPauseCheckTimerExpired!!
Line 1492: L1LC_CheckMeasElemTimerExpired!!
Line 1513: L1LC_DsdsBplmnDurationTimerExpired!!
Line 1532: L1LC_SyncTimerExpired!!
Line 1556: L1LC_MeasTimerExpired!!
Line 1598: PBCH Timer expired !(%d)
Line 1622: pbchMaxCntForAfc(%d)[AFC diff:%d(%d, %d)]
Line 1629: HALSC_AfcStoredPdmValid is FALSE(%d) pbchMaxCntForAfc(%d)
Line 1640: pbchMaxCntForAfc(%d) gL1LC_PbchMode(%d)
Line 1649: pbchMaxCntForAfc(%d) gL1LC_PbchMode(%d)
Line 1668: [PbchTimerExpired] SetAfcPdm ==> HALSC_AfcPdmSrchFO:%d
Line 1675: [PbchTimerExpired] SetAfcPdm ==> HALSC_AfcPdmSrchFO:%d
Line 1693: [DRX] Extend gL1LC_DrdsAbnormalCheckTmr(+L1LC_PBCH_TIMER_V)
Line 1737: [DRX] Extend gL1LC_DrdsAbnormalCheckTmr(+L1LC_PBCH_TIMER_V)
Line 1767: PBCH HO Timer expired !(%d)
Line 1790: L1LC_PbchHoExpired, Applying HALSC_AfcPdmForHO and Re-trying PBCH Decoding !!
Line 1817: PBCH SI Update Timer expired !(%d)
Line 1869: L1LC_ProcIratMeasTimerExpired!!
Line 1894: L1LC_ProcAGapMibSibDecTimerExpired!!
Line 1904: L1LC_StopAGapMibSibDecTimer!!
Line 1925: L1LC_ProcMbsfnDrxTimerExpired!!
Line 1948: L1LC_ProcMbsfnDelayPauseTimerExpired!!
Line 1976: L1LC_RstdTimerExpired!! count(%d)
Line 2007: L1LC_RstdPeriodicTimerExpired!!
Line 2032: L1LC_ProcConnDrxBlockTimerExpired!!
Line 2057: [APETF] L1LC_ProcApeDelayTimerExpired
Line 2173: L1LC_IratMeasStopTimerExpired!!
Line 2183: L1LC_DrxRfInitDelayTimerExpired!!
Line 2211: [GNSS-PULSE] L1LC_GnssPulseTimerExpired!!
Line 2215: [GNSS-PULSE] sinr(%d) sinr_threshold(%d) pulse_sfn(%u)
Line 2221: [GNSS-PULSE] isFirstPulse(%d)
Line 2232: [GNSS-PULSE] isFirstPulse(%d) cell_idDb(%d) cell_id(%d) dl_earfcnDb(%u) dl_earfcn(%u) rtgOffsetDb(%u) rtgOffset(%u)
Line 2243: [GNSS-PULSE] Cell change Happened. Trigger pulse from %s
Line 2279: [GNSS-PULSE] TimeofLastPulseOnCell1(%u) TimeofFirstPulseOnCell2(%u) newRtgOffset(%u) TimeBaseShift(%u)
Line 2290: [GNSS-PULSE] Cell change Didnot Happened. Trigger pulse from %s
Line 2338: L1LC_GnssEventUpdatePulseTimerExpired!!
Line 2344: TimeShiftEventNum(%u) PulseStatusDb(%u)
Line 2349: [GNSS-PULSE] updated cell_idDb(%d) updated dl_earfcnDb(%u)
Line 2355: PulseStatusDb(%u)
Line 2377: L1LC_GnssFuncEndPulseTimerExpired!!
Line 2390: L1LC_DrxRvalueUpdateTimerExpired!!
Line 2541: WakeupEvt Timer(%I64i) RUN-ST!(%d.%d.%d)
Line 509: L1LC_TimerExpired!!, TimerID[%d]. coreId(%d) appTaskId(%d). It will be triggered at Core0 HISR
Line 519: L1LC_TimerExpired!!, TimerID[%d]. coreId(%d) appTaskId(%d).
Line 545: L1LC_TimerExpired_DS!!, TimerID[%d]. coreId(%d) appTaskId(%d). It will be triggered at Core0 HISR
Line 555: L1LC_TimerExpired_DS!!, TimerID[%d]. coreId(%d) appTaskId(%d)
