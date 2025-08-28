Line 237: [DRX] uncName = %s, ST[%d] Hold Type(%d), hold_count(%d), hold_time(%d)
Line 272: [DRX] ST-%d gCpuPwrDownHoldInd(%d -> 0)
Line 279: [DRX] funcName = %s : pal_PowerDownHoldingCntReset
Line 314: [DRX] Soc Warmup timer start(%d us)
Line 323: [DRX] Soc Warmup timer can't start(%d us)
Line 1099: [DRX] SFN cal, Update and Interrupt Setting start
Line 1147: [DRX] curTimeSFN(%d), curTimeTti(%d), reset_offset(%d)
Line 1148: [DRX] time_diff(%d) drx_wakeup_time_tti(%d) drx_wakeup_time_mclk(%d) drx_tti_mclk(%d) gDrx_WakeupTimeforUpdate(%d), gDrx_WakeupStartTime(%d), gDrx_WakeupEndTime(%d)
Line 1152: [DRX] RTG update Check curTimeTti(%d), reset_offset(%d), gDrx_WakeupTimeforUpdate(%d), Mclk(%d)
Line 1159: [DRX] EnableSfnUpdateIntr: tti(%d), offset(%d), current_time(%d, %d, %d), pal_time(%d, %d)
Line 1167: [DRX] EnableSfnUpdateIntr: tti(%d), offset(%d), current_time(%d, %d, %d), pal_time(%d, %d)
Line 1199: [DRX] SFN_LOAD_VALUE(%d), SWSFNload(%d)
Line 1243: [DRX] rtg_counter_start(%d) rtg_counter_end(%d) time_offset_str(%d)
Line 1249: [DRX] AA gDrx_CfoValue(%u), gDrx_FreqIntVal(%u), gDrxErrAccPeriod(%u), gSceTotalModemClk(%u), gDrx_Rvalue(%u)
Line 1270: (Abnormal R value) gSceTotalModemClk = %u, gDrx_CfoValue = %u
Line 1276: [DRX] BB gSceTotalModemClk(%u), gDrx_CfoValue(%u), gDrx_StrOffsetVal(%d), rvalue_filter_gain(%d), pHALDRX_Db->gDrx_rvalue_filter_gain_cnt(%d)
Line 1278: [DRX] BB gSceTotalModemClk(%u), gDrx_CfoValue(%u), gDrx_StrOffsetVal(%d), rvalue_filter_gain(%d), pHALDRX_Db->gDrx_rvalue_filter_gain_cnt(%d)
Line 1286: [DRX] CC gDrx_StrOffsetVal(%d), time_offset_str(%d), CFO_STR_OFFSET_LOOP_GAIN(%d)
Line 1291: [DRX] gSceTotalModemClk(%u), time_offset_str(%d), prev_sleepTimeInSlowClk(%d)
Line 1330: Wakeup LISR Fn(isIsr(%d),pvSt(%d),crSt(%d),wkSt(%d),aSrc(%d),IsWakeupResume[%d][%d])
Line 1348: [DRX] Force Wakeup
Line 1352: [DRX] Force Wakeup(IsForResume : %d)
Line 1356: [DRX] No SoC Warmup time
Line 1360: [DRX] wakeup from non-Hsleep
Line 1365: [DRX] set gDrx_SocWarmupCond(%d)
Line 1381: [DRX] set gDrx_SocWarmupCond(%d)
Line 1384: [DRX] Time diff(%d us), Elapsed SleepCnt(%d slp_clk), Expected SleepCnt(%d slp_clk), Soc Warmup time(%d us)
Line 1386: [DRX] Time diff(%d us), Elapsed SleepCnt(%d slp_clk), Expected SleepCnt(%d slp_clk), Soc Warmup time(%d us)
Line 1388: [DRX] Soc warmup NrPowerStatus(%d) NrSleepState(%d)
Line 1393: [DRX] Soc warmup finished too early. Keep sleep for (%d us)
Line 1401: [DRX] Soc warmup finished
Line 1406: [DRX] Soc warmup is skipped due to activated NR modem
Line 1411: [DRX] Soc warmup is not required
Line 1431: [DRX] request cpu/mif clock raise in ProcWakeupIntr
Line 1438: [DRX] request cpu/mif clock raise in ProcWakeupIntr
Line 1445: [DRX] request cpu/mif clock is ignored
Line 1450: [DRX] Already request cpu/mif clock raise
Line 1465: [4G_DRDS] the remaining will be handled in HISR
Line 1510: [DRX] Sleep Time : ST%d (Previous %d [100us])
Line 1512: [DRX] Sleep Time : ST%d (Current %d [100us])
Line 1516: [DRX] ProcWakeupIntr: MIF INTR Status ON
Line 1520: [SC] LteMifFreq(%d) 
Line 1521: [SC] LteMifFreq(%d) 
Line 1606: [DRX] ProcWakeupIntr: System Stable Start Time(%u)
Line 1607: [DRX] ProcWakeupIntr: System Stable Start Time(%u)
Line 2022: [DRX] ProcSysValidIntr
Line 2144: [DRX] ProcReSyncIntr: sfn(%d), SWSFNload(%d)
Line 2165: [DRX] gDrxResync_cnt(%d)
Line 2182: [DRX] System stable end time(%d), stable time diff(%d)
Line 2183: [DRX] System stable end time(%d), stable time diff(%d)
Line 2188: [DRX] stable_time_diff = %d, gDrx_SysStableTime = %d, 4RX_Margin = %d
Line 2275: [DRX] Expected Fisrt pagingintr(%d): sfn(%d), tti(%d), Expected sfn(%d), tti(%d)
Line 2276: [DRX] Expected Fisrt pagingintr(%d): sfn(%d), tti(%d), offset(%d), Expected sfn(%d), tti(%d)
Line 2396: [DRX] HALDRX_InitRF (delayed init: %d)
Line 2492: [DRX] InitFromSleepIdle start
Line 2512: [DRX] InitFromSleepIdle end
Line 2549: [DRX][RTG] Save Temp Diff(%d) PPM Diff(%d)
Line 2581: [DRX][RTG] Change LPM mode to Normal mode
Line 2585: [DRX][RTG] RTG Update current LPM(%d) RTC(%d)
Line 2633: [DRX] HALDRX_ProcDrxCpuMifClkRaiseHisr: nCC_4RX(%d) 
Line 2665: NBHAL_InitDrxDb
Line 2683: [DRX] Change HALDRX state(%d => %d)
Line 2738: [DRX] InitPowerUpModemHW start
Line 2747: [DRX] Skip Modem/Dsp power on
Line 2774: [DRX] gRF_1stInitFlag = %d
Line 2795: [DRX] InitPowerUpModemHW end
Line 2818: Set gDrxL1_Flag[%d](%d->%d)[%d, %d] @%s()
Line 2988: HALDRX_DisablePagingIntr
Line 3029: [DRX] curTimeSFN=%d, curTimeTti=%d, curTimeOffset=%d)
Line 3038: [DRX] remain time is zero!!! ---> invoke pagingrcvintr 2ms later!!
Line 3050: [DRX] EnablePagingRcvIntr : PagingRcvIntrTime (%d us)
Line 3056: [DRX] HALDRX_EnablePagingRcvIntr: PreponePagingRFReqTime(%d)
Line 3087: [DRX] DisablePagingRcvIntr, prepone(%d)
Line 3145: [DRX]gDrx_ActiveRat_[0][1]=%d,%d (%d)
Line 3148: [DRX] Modem power is currently OFF (stackId: %d)
Line 3186: [DRX] HALDRX_SetModemPowerOffFlag Stack-1[%d], Stack-2[%d]
Line 3203: [DRX] PowerOnResume
Line 3224: [DRX] NBHALDRX_SetModemPowerOnFlag Stack-1[%d], Stack-2[%d]
Line 3270: [DrxTimeStamp] mode(start_0/end_1)=%u stamp(us)=%10u diff(us)=%10u func=%s
Line 3271: [DrxTimeStamp] mode(start_0/end_1)=%u stamp(us)=%10u diff(us)=%10u func=%s
Line 3481: [DRX] SleepAbort is already tried
Line 3493: [DRX] SleepAbort is Failed (Modem is currently POWER ON)(%d)
Line 3573: [DRX] SleepAbort (Early Wakeup Time is %d.%d ms)
Line 3574: [DRX] SleepAbort (Early Wakeup Time is %d.%d ms)
Line 3590: [DRX] HALDRX_SleepAbortOfSuspendNormal
Line 3623: [DRX] SleepAbort_suspend
Line 3945: [SHADE] DSP release (%d)
Line 3955: [SHADE] DSP release End
Line 3985: [DRX] PowerDownSuspend
Line 4061: [DRX] Modem is already off
Line 4101: funcName = %s, Set ST-%d Is_Drx_Wakeup_ongoing to %d
Line 4109: [DRX] Is_Drx_Wakeup_ongoing : %d
Line 4132: [DRX] StartSlowClkEst: freq_int_value(%d)
Line 4138: [DRX] StartSlowClkEst: 1st
Line 4140: [DRX] StartSlowClkEst: 2nd
Line 4188: [DRX] StartSlowClkEstForCFO (%dms)
Line 4197: [DRX] StartSlowClkEstForCFO: ERR_ACC_PERIOD(%d)
Line 4236: [DRX] ProcFreqErrIntr: FreqErrIntr Disable returns FALSE, Stop processing
Line 4244: ProcFreqErrIntr: diff(%d) freq_int_value(%d) gDrx_Pre_FreqIntVal(%d)
Line 4277: ProcFreqErrIntr: gDrx_Pre_FreqIntVal(%d),  gDrx_ChangeDrxCycle(%d), drx_T(%d) gDrxCycleChangeCnt(%d)
Line 4285: [DRX] ProcFreqErrIntr: gDrx_FreqIntVal(%d), FREQ_INT_VALUE(%d)
Line 4328: [DRX] ProcFreqErrIntr(freq_int_value:%d gSceTotalModemClk:%u gDrxErrAccPeriod:%d gDrx_Rvalue:%u)
Line 4352: NBHALDRX_ProcReSyncIntr
Line 4397: NBHALDRX_ProcPagingIntr
Line 4476: [DRX] HALDRX_ProcPagingRcvIntr, IsRfAvailable(%d) Preponed(%d)
Line 4477: [DRX] HALDRX_ProcPagingRcvIntr, IsRfAvailable(%d) Preponed(%d)
Line 4481: [DRX] Preponed HALDRX_ProcPagingRcvIntr: sfn(%d), tti(%d), Preponed(%d)
Line 4510: [DRX] ProcPagingRcvIntr: sfn(%d), tti(%d)
Line 4525: [DRX] Saved AGC Index(%d, %d)
Line 4530: [DRX] Saved AGC Index(%d, %d)
Line 4603: [DRX] ProcSfnUpdateIntr
Line 4676: [DRX] Set gDrx_PreModemOn (%d -> %d)
Line 4698: [DRX] Set gDrx_ParallelModemOn (%d -> %d)
Line 4720: [DRX] Set gDrx_PreModemOnStart (%d -> %d)
Line 4742: [DRX] Set gDrx_MulticoreOpt (%d -> %d)
Line 4792: [DRX] Init
Line 4863: [DRX] SysStableTime(%d), WakeupSocTime(%d)
Line 4867: [DRX] SysStableTime(%d), WakeupSocTime(%d), gDrx_Debug_Level_delay(%d)
Line 4921: [DRX][RTG] Save LPM cnt (%d), RTC cnt (%d)
Line 4928: [DRX][RTG] Initial temp_dmxr_regval(%d) gDrx_dmixer_AngleDiff(%d hz) sampling_rate(%d)
Line 4929: [DRX][RTG] Initial gDrx_dmixer_freq_offset(%d ppm) dl_freq(%d)
Line 4932: [DRX][PWR_OPT] RF adaptive ON/OFF disable
Line 5051: [NB_HAL] ProcConnDrxInfoReq
Line 5070: [NB_HAL] ProcConnDrxInfoReq : onDurationTimer(%d), drxConfSetup(%d), drxInactivityTimer(%d), drxRetransTimer(%d), drxCycle(%d), drxStartOffset(%d), drxULRetransTimer(%d), drxCycleV1430(%d)
Line 5090: [NB_HAL] NBHALDRX_ProcDrxConfirmInd(ProcessingDrxCnfnd = %d, drx_type = %d, SleepTime = %d)
Line 5102: [NB_HAL] Skip handling DRX_CONFIRM_IND 
Line 5123: [NB_HAL] NBHALDRX_ProcStoreCnf
Line 5138: [DRX] NBHALDRX_ProcRestoreCnf
Line 5173: [DRX] ResyncTime_SEF: gDrxResync_cnt(%d), gDrx_1RxOffFlag(%d)
Line 5396: [DRX] gDrx_PowerDown[%d][%d]
Line 5469: [DRX] Sleep : stored dc value (%d, %d)(%d, %d)
Line 5495: [DRX] %s Hard SleepStart start!!! sfn(%d), tti(%d), offset(%d)
Line 5555: [DRX][RTG] Save Dmixer FreqOffset before sleep temp_dmxr_regval(%d), dl_freq(%d), bw(%d) sampling_rate(%d)
Line 5556: [DRX][RTG] Save Dmixer FreqOffset before sleep gDrx_dmixer_AngleDiff(%d)(hz)
Line 5557: [DRX][RTG] Save Dmixer FreqOffset before sleep gDrx_dmixer_freq_offset(%d ppm)
Line 5558: [DRX][RTG] Save DCXO   FreqOffset before sleep gDrx_dcxo_freq_offset(%d ppm) temp(%d)
Line 5632: [DRX] gDrx_PowerDown(%d)
Line 5692: [DRX] %s Hard SleepStart end!!! NextWakeupStack(%d), sleepTime(%d(100us), %d(slowclk)), reaminslowclk(%d), margin(%d, %d, %d) WakeupSocTime(%d)
Line 5694: [DRX] %s Hard SleepStart end!!! NextWakeupStack(%d), sleepTime(%d(100us), %d(slowclk)), reaminslowclk(%d), margin(%d, %d, %d) WakeupSocTime(%d)
Line 5699: [DRX][RTG] LPM debug mode is %u
Line 5762: [SHORTMODE] wakeup_time(%d, %d), gDrxShortStableTime(%d)
Line 5839: [DRX] ST%d Modem/HAL Parameter Saving
Line 5840: [DRX] ST%d Modem/HAL Parameter Saving
Line 5879: [DRX] (Before %s sleep start) Saved AGC Index(%d, %d)
Line 6007: [DRX] Reset CFO flag as Interrupt is disabled!
Line 6044: [DRX] UeState(%d) First Sleep Start
Line 6119: [DRX] Set Sleep
Line 6314: [DRX][Single SIM] Set Current ST%d H/W Intr : %d [100us]
Line 6329: [DRX] Set Sleep Finish
Line 6392: [DRX][LPM] Change DCXO mode to %u for debug
Line 6395: [DRX][LPM]!!Fail!! Change DCXO mode to %u
Line 6459: [DRX] Sleep time is small hal_sleepTime : (%d)
Line 6465: [DRX] ActiveStackID(%d), pLTE_OHE->SleepTime(%d), DRX_SLEEP_MARGIN+time_diff/100(%d), ApActiveMargin(%dms)
Line 6466: [DRX] ActiveStackID(%d), pLTE_OHE->SleepTime(%d), DRX_SLEEP_MARGIN+time_diff/100(%d), ApActiveMargin(%dms)
Line 6495: [DRX] ActiveStackID(%d), hal_sleepTime(%d), gDrx_PowerDown(%d) gDrx_GnssWakeupTime(%d)
Line 6516: [DRX] RF_DSP_PowerDown start
Line 6589: [DRX] RF_DSP_PowerDown end
Line 6616: [DRX] RF_PowerDown start,NASU_MODE_SELECT(%d) 
Line 6664: [DRX] RF_PowerDown end
Line 6713: [DRX] State(%d) Error in Abort
Line 6762: NBHALDRX_CheckUpperLayerFlag(Idle DRX skip)(AlpssCfg->IdleDrx_en:%d, gNbDrxRrc_Flag=%d, UeStateRaching(%d))
Line 6774: Skip sleep, NBHALDRX_CheckUpperLayerFlag(Idle DRX skip)(AlpssCfg->IdleDrx_en:%d, gNbDrxRrc_Flag=%d, UeStateRaching(%d))
Line 493: [DRX] Initialize pLTE_OHE->SleepType to H_SLEEP
Line 506: [DRX] HW is not off actually
Line 508: [DRX] Set pLTE_OHE->SleepType to S_SLEEP
Line 514: [DRX] InitSystemTime at SW wakeup. NrFullResetInfo(1)
Line 650: [DRX] drx_demod_init_hold(%d)
Line 376: [DRX] No need to update Rvalue because it is PowerOff or SleepOnGoing or Suspend.
Line 387: [DRX] Cancel Rvalue update!rtg counter did not start yet
Line 394: [DRX] Rvalue will be updated 5ms later (waiting for STR stable) : NeedtoUpdateRvalue(1)
Line 748: [DRX] ProcDrxWakeupInitHisr: DSP Stable Time(%d)
Line 784: [DRX] before DrxSysValid, Saved AGC Index(%d, %d)
Line 807: [DRX] RTG update start: sfn(%d), tti(%d), offset(%d)
Line 834: [DRX][RTG] RTG Update gDrx_IsLpmCalDone(%d:CalVer/LpmCalDone/NormalCalDone)
Line 842: [DRX][RTG] from wakeup_LPM_CNT to sleep_LPM_CNT
Line 844: [DRX][RTG] fo_lpm(%d) fo_normal(%d) Tune(%d) fo_tune(%d)
Line 845: [DRX][RTG] slpCntInSclk_normal(%d) = slpCntInSclk_total(%d) - slpCntInSclk_lpm(%d) transCnt_lpm(%d)
Line 852: [DRX][RTG] Change rvalue_filter_gain(%d) to CFO_NORMAL_LOOP_GAIN(%d) in case pHALDRX_Db->gDrx_RvalFilterNormalGainCnt(%d)
Line 857: [DRX][RTG] Change rvalue_filter_gain(%d) to CFO_MEDIUM_LOOP_GAIN(%d) in case pHALDRX_Db->gDrx_RvalFilterNormalGainCnt(%d)
Line 862: [DRX][RTG] Change rvalue_filter_gain(%d) to CFO_FAST_LOOP_GAIN(%d) in else case
Line 868: [DRX][RTG] gDrx_TotalDmixerppm = %d, gDrx_CfoValue = %d
Line 874: [DRX][RTG] gDrx_TotalDmixerppm(%d), gDrx_dmixer_freq_offset(%d), gDrx_StrOffsetVal(%d), rvalue_filter_gain(%d), pHALDRX_Db->gDrx_rvalue_filter_gain_cnt(%d)
Line 910: [DRX][RTG] M_last(%d) = M_total(%d) + refCntBeforeSleep(%d) + xfrCnt(%d) - gDrx_StrOffsetVal(%d) + Diff_cellboundary(%d)
Line 917: [DRX] Do not update RTG, because HW is not sleep actually!
Line 938: [DRX] RTG update start: sfn(%d), tti(%d), offset(%d)
Line 987: [DRX] gSceTotalModemClk(%u): sleepCnt(%d), modemCnt(%d), sleepTime(%d, %d, %d), RC(0x%x)
Line 989: [DRX] slp_ref_cnt(0x%x), xfr_ref_cnt(0x%x)
Line 993: [DRX] Do not update RTG, because HW is not sleep actually!
Line 1000: [DRX] RTG update end: sfn(%d), tti(%d), offset(%d)
Line 698: [DRX] ProcDrxWakeupRF1Hisr: Wakeupinit Stable Time(%d) 
Line 703: [DRX] HALDRX_ProcDrxWakeupRF1Hisr: pal_GetCpuFreq(%d) pal_GetMifFreq(%d)
Line 1677: [DRX] ProcDrxSysValidHisr: RF stable Time(%d)
Line 1759: [DRX] AGC gain recovery(%d, %d)
Line 1776: [DRX] DCR OV(%d, %d) (%d, %d)
Line 1822: [DRX] rtg_counter_start(%d)
Line 1862: [DRX] drx_demod_init_hold(%d) offset(%d) demod_isr(43008)
Line 1907: [DRX] Resync Interrupt set
Line 1920: [DRX] EnableReSyncIntr: tti(%d), offset(%d), current_time(%d, %d, %d)
Line 1921: [DRX] EnableReSyncIntr: tti(%d), offset(%d), current_time(%d, %d, %d)
Line 1945: [DRX][PWR_OPT] Tigger intra-freq measure
Line 1966: [DRX] ProcDrxSysValidHisr: Sys Valid Time(%d)
Line 6361: [DRX] gDrx_SavedSFN(%d), gDrx_SavedTTI(%d), gDrx_SavedOffset(%d)
