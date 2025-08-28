Line 414: [DRX][LPM] Change DCXO mode to %u for debug
Line 417: [DRX][LPM]!!Fail!! Change DCXO mode to %u
Line 525: Set gDrxL1_Flag[%d](%d->%d)[%d, %d] @%s()
Line 754: HALDRX_DisablePagingIntr
Line 816: [DRX] curTimeSFN=%d, curTimeTti=%d, curTimeOffset=%d)
Line 825: [DRX] remain time is zero!!! ---> invoke pagingrcvintr 2ms later!!
Line 833: [DRX] EnablePagingRcvIntr : PagingRcvIntrTime (%d us)
Line 839: [DRX] HALDRX_EnablePagingRcvIntr: PreponePagingRFReqTime(%d)
Line 887: [DRX] curTimeSFN=%d, curTimeTti=%d, curTimeOffset=%d)
Line 897: [DRX] remain time is zero!!! ---> invoke pagingrcvintr 2ms later!!
Line 907: [DRX] remaining time for SCG pagingrcvIntr (%d) > invalid threshold (%d)
Line 908: [DRX] Invalid remaining time(%d)!!! ---> Skip PagingRcvIntr Enable(%d)
Line 914: [DRX] remaining time for SCG pagingrcvIntr (%d) > invalid threshold (%d)
Line 915: [DRX] Invalid remaining time(%d)!!! ---> invoke pagingrcvintr 2ms later!!
Line 925: [DRX] EnablePagingRcvIntrSCG : PagingRcvIntrTime (%d us)
Line 931: [DRX] HALDRX_EnablePagingRcvIntr: PreponePagingRFReqTime(%d)
Line 964: [DRX] DisablePagingRcvIntr, prepone(%d)
Line 1027: [DRX] Modem is off, so do not control CQI int regster
Line 1049: [DRX] Modem is off, so do not control CQI int regster
Line 1110: [DRX] ProcFreqErrIntr: FreqErrIntr Disable returns FALSE, Stop processing
Line 1119: ProcFreqErrIntr: diff(%d) freq_int_value(%d) gDrx_Pre_FreqIntVal(%d)
Line 1152: ProcFreqErrIntr: gDrx_Pre_FreqIntVal(%d),  gDrx_ChangeDrxCycle(%d), drx_T(%d) gDrxCycleChangeCnt(%d)
Line 1160: [DRX] ProcFreqErrIntr: gDrx_FreqIntVal(%d), FREQ_INT_VALUE(%d)
Line 1201: [DRX] ProcFreqErrIntr(freq_int_value:%d gSceTotalModemClk:%u gDrxErrAccPeriod:%d gDrx_Rvalue:%u)
Line 1226: [DRX] ProcSysValidIntr
Line 1310: [DRX] HALDRX_CheckWakeupStart(crSt(%d))
Line 1323: [4G_DRDS] Skip SCG wakeup intr, make SCG 1. IsRfAvailable(%d) and 2. gDrx_HW_PowerOn_flag(%d)
Line 1333: [4G_DRDS] 4G_DRDS will be activated after PBCH decoding
Line 1344: [NRDS] Other stack's IsLteWakeupPended(%d). Next Wakeup stack is other stack.
Line 1372: Warning Overflow!!! pLTE_OHE->SleepTime[HALDSDS_GetOtherStackID()] * 100 > S32_MAX : CpuHoldInfo.hold_time is set to %d 
Line 1383: [DRX] gL1LC_DsdsWakeupIntrTmr was expired
Line 1390: [DRX] Delay current stack wakeup procedure as other stack(ST%d) sleep is on-going
Line 1400: [DRX] Delay current stack wakeup procedure as its sleep is on-going
Line 1411: [DRX] Ignore ProcWakeupIntr as Suspend processing is in progress!!
Line 1459: [DRX] HALDRX_ProcDrxCpuMifClkRaiseHisr: nCC_4RX(%d) 
Line 1507: Wakeup LISR Fn(isIsr(%d),pvSt(%d),crSt(%d),wkSt(%d),aSrc(%d),IsWakeupResume[%d][%d])
Line 1524: [DRX] Force Wakeup
Line 1528: [DRX] Force Wakeup(IsForResume : %d)
Line 1532: [DRX] No SoC Warmup time
Line 1536: [DRX] wakeup from non-Hsleep
Line 1541: [DRX] set gDrx_SocWarmupCond(%d)
Line 1557: [DRX] set gDrx_SocWarmupCond(%d)
Line 1560: [DRX] Time diff(%d us), Elapsed SleepCnt(%d slp_clk), Expected SleepCnt(%d slp_clk), Soc Warmup time(%d us)
Line 1562: [DRX] Time diff(%d us), Elapsed SleepCnt(%d slp_clk), Expected SleepCnt(%d slp_clk), Soc Warmup time(%d us)
Line 1564: [DRX] Soc warmup NrPowerStatus(%d) NrSleepState(%d)
Line 1569: [DRX] Soc warmup finished too early. Keep sleep for (%d us)
Line 1577: [DRX] Soc warmup finished
Line 1582: [DRX] Soc warmup is skipped due to activated NR modem
Line 1587: [DRX] Soc warmup is not required
Line 1603: [4G_DRDS] Skip SCG wakeup intr, MIF setting is not needed for EDV_CDRX_IDLE and EDV_IDLE_IDLE
Line 1611: [DRX] request cpu/mif clock raise in ProcWakeupIntr
Line 1618: [DRX] request cpu/mif clock raise in ProcWakeupIntr
Line 1626: [DRX] request cpu/mif clock is ignored
Line 1631: [DRX] Already request cpu/mif clock raise
Line 1644: [4G_DRDS] the remaining will be handled in HISR
Line 1660: [NRDS] DRDS cannot be activated. But Nr2RxChanged is TRUE
Line 1674: [NRDS] request NR to change : 2rx -> 4rx
Line 1680: [DRX] Sleep Time : ST%d (Previous %d [100us])
Line 1682: [DRX] Sleep Time : ST%d (Current %d [100us])
Line 1686: [DRX] ProcWakeupIntr: MIF INTR Status ON
Line 1690: [SC] LteMifFreq(%d) 
Line 1691: [SC] LteMifFreq(%d) 
Line 1705: [DRX] DrxIntr(Intr_LWakeup) still ON under DSDS_EDVACT_INTR
Line 1714: [DRX] Current Stack %d // Current Stack gDsdsIsWakeupResume = %d // Other Stack gDsdsIsWakeupResume = %d
Line 1723: [SLEEP] DisableDrxIntr: intr(2)
Line 1753: [NRDS] reset ProcWakeupByMsg(0)
Line 1773: [DRX] ProcWakeupIntr: System Stable Start Time(%u)
Line 1774: [DRX] ProcWakeupIntr: System Stable Start Time(%u)
Line 1811: [HAL => L1LC] Decode HAL_L1LC_CDRX_RESTORE_REQ, but no IsRfAvailable
Line 1826: Update UL Timing before at least 2ms on-duration. (ta_acc:%d)
Line 1883: Avoid scell activation as IPC_ACTION_ID_RESET is pending 
Line 1927: [DRX] ProcReSyncIntr: sfn(%d), SWSFNload(%d)
Line 1944: [DRX] gDrxResync_cnt(%d)
Line 1961: [DRX] System stable end time(%d), stable time diff(%d)
Line 1962: [DRX] System stable end time(%d), stable time diff(%d)
Line 1967: [DRX] stable_time_diff = %d, gDrx_SysStableTime = %d, gDrx_ScellMargin = %d, 4RX_Margin = %d
Line 2031: [DRX] gL1LC_CheckLastPagingIntrTmr started for %d ms
Line 2048: [DRX] Expected First pagingintr(%d): sfn(%d), tti(%d), Expected sfn(%d), tti(%d)
Line 2049: [DRX] Expected First pagingintr(%d): sfn(%d), tti(%d), offset(%d), Expected sfn(%d), tti(%d)
Line 2112: [PWR_OPT]Start Intra Srch/Meas in Resync[%d]!!!
Line 2125: [PWR_OPT] !!! pNextMeasElem is NULL !!!
Line 2142: [cDRX pre-Meas] start: isPreIntraMeasReq(1) isPreIntraMeasDone(0)
Line 2156: [cDRX pre-Meas] Not started: isNonIntraMeasReqBeforeResync(%d) HALDRX_GetSleepReqBeforeWakeup(%d) IntraMeasReq.earfcn(%d) isFullStationary(%d) IntraMeasReq.numOfCell(%d)
Line 2192: HALDRX_ProcMODEMsetting
Line 2236: LMAC Init
Line 2267: DSP setting
Line 2352: Avoid scell activation as IPC_ACTION_ID_RESET is pending 
Line 2355: Update UL Timing at last paging interrupt. (ta_acc:%d)
Line 2359: End of %s
Line 2706: [PWR_OPT]Start Intra Srch/Meas in Resync[%d]!!!
Line 2712: [PWR_OPT] !!! pNextMeasElem is NULL !!!
Line 2723: Release LTE DRX cpu clock for volte
Line 2738: [DRX] Paging channel Rx : current sfn(%d,%d), current tti(%d), PF(%d), PO(%d)
Line 2740: [DRX] Paging channel Rx : current sfn(%d,%d), current tti(%d), PF(%d), PO(%d)
Line 2746: Set gDrxLmacReady(%d), dspWakeup(DSP_STATE_WAKEUP)
Line 2777: [DRX] Otherstack's CellBoundary: %d, Diff: %d
Line 2817: [PWR_OPT]Start Intra Srch/Meas in Resync[%d]!!!
Line 2823: [PWR_OPT] !!! pNextMeasElem is NULL !!!
Line 2923: [DRX] ProcPagingIntr(%d): sfn(%d), tti(%d), Expected sfn(%d), tti(%d)
Line 2925: [DRX] ProcPagingIntr(%d): sfn(%d), tti(%d), offset(%d), Expected sfn(%d), tti(%d)
Line 2930: [DRX] SFN is zero[%d,%d], Expected SFN_Tti[%d,%d], HWSFNload[%d], SWSFNload[%d]
Line 2935: [DRX] SFN is zero, Reinit due to abnormal
Line 3256: [DRX] HALDRX_ProcPagingRcvIntr, IsRfAvailable(%d) Preponed(%d)
Line 3257: [DRX] HALDRX_ProcPagingRcvIntr, IsRfAvailable(%d) Preponed(%d)
Line 3261: [DRX] Preponed HALDRX_ProcPagingRcvIntr: sfn(%d), tti(%d), Preponed(%d)
Line 3275: [DRX] Delayed wakeup, invoke Paging Rcv intr after last Paging gDrx_DSDSPagingRcvIntrSkip(0 -> 1)
Line 3285: [DRX] ProcPagingRcvIntr: sfn(%d), tti(%d)
Line 3298: [DRX] Saved AGC Index(%d, %d)
Line 3303: [DRX] Saved AGC Index(%d, %d)
Line 3334: [DRX] MCG Meas & Paging are completed, wait for SCG paging to complete!!
Line 3719: [DRX] rtg_counter_start(%d) rtg_counter_end(%d) time_offset_str(%d)
Line 3725: [DRX] AA gDrx_CfoValue(%u), gDrx_FreqIntVal(%u), gDrxErrAccPeriod(%u), gSceTotalModemClk(%u), gDrx_Rvalue(%u)
Line 3751: [DRX] Temperature big change : prev(%d) curr(%d) diff(%d)
Line 3762: [DRX] R value normal? %d
Line 3766: (Abnormal R value) gSceTotalModemClk = %u, gDrx_CfoValue = %u
Line 3774: [DRX] BB gSceTotalModemClk(%u), gDrx_CfoValue(%u), gDrx_StrOffsetVal(%d), rvalue_filter_gain(%d), pHALDRX_Db->gDrx_rvalue_filter_gain_cnt(%d)
Line 3776: [DRX] BB gSceTotalModemClk(%u), gDrx_CfoValue(%u), gDrx_StrOffsetVal(%d), rvalue_filter_gain(%d), pHALDRX_Db->gDrx_rvalue_filter_gain_cnt(%d)
Line 3784: [DRX] CC gDrx_StrOffsetVal(%d), time_offset_str(%d), CFO_STR_OFFSET_LOOP_GAIN(%d)
Line 3789: [DRX] gSceTotalModemClk(%u), time_offset_str(%d), prev_sleepTimeInSlowClk(%d)
Line 4310: [DRX] Wait for HPCM ON (%d)us
Line 4316: [DRX][Warning] HPCM ON is not finished in (%d)us
Line 4616: [DRX] IsRfInitDelayed = TRUE for wait_gap_end %dus
Line 4643: [DRX] HALDRX_InitRF (delayed init: %d)
Line 4661: [DRX] IsRfInitDelayed = TRUE for %dus
Line 4667: [DRX] Too short delay (%d), so RF init will be performed immediately. (IsRfInitDelayed = FALSE)
Line 5057: [DRX] SFN cal, Update and Interrupt Setting start
Line 5103: [DRX] curTimeSFN(%d), curTimeTti(%d), reset_offset(%d)
Line 5104: [DRX] time_diff(%d) drx_wakeup_time_tti(%d) drx_wakeup_time_mclk(%d) drx_tti_mclk(%d) gDrx_WakeupTimeforUpdate(%d), gDrx_WakeupStartTime(%d), gDrx_WakeupEndTime(%d)
Line 5108: [DRX] RTG update Check curTimeTti(%d), reset_offset(%d), gDrx_WakeupTimeforUpdate(%d), Mclk(%d)
Line 5115: [DRX] EnableSfnUpdateIntr: tti(%d), offset(%d), current_time(%d, %d, %d), pal_time(%d, %d)
Line 5123: [DRX] EnableSfnUpdateIntr: tti(%d), offset(%d), current_time(%d, %d, %d), pal_time(%d, %d)
Line 5155: [DRX] SFN_LOAD_VALUE(%d), SWSFNload(%d)
Line 5513: [DRX] UpdateBigDataPMLI
Line 5535: [DRX] drxType %d 	PrevSinr %d 			timeMargin2PO %d 				step %d 				gDrx_SleepTimeAdj %d 			diffPo %d 
Line 5537: [DRX] isFullStationary %d 					IsEndcStatusInd %d 			gVolteStatus %d 	NrPowerStatus %d numOfAbnormalDiffPo %d
Line 5600: [GNSS-PULSE] HALDRX_CalculateNextPulseTime: lastPulseInUs(%d), currTimeInUs(%d), period(%d), nextPulseGapInUs(%d), newRtgOffset(%d), RtgOffset(%d), periodicity(%d)
Line 5603: [GNSS-PULSE] HALDRX_CalculateNextPulseTime: TimeBaseShift(%d), tti(%d), offset(%d), nFrames(%d), currentSfn(%d), returnSfn(%d)
Line 5663: [GNSS-PULSE] HALDRX_CalculatePulseTimeAlignedtoPO: pfpo(%d), tempsfn (%d), reqdOffset(%d), currOffset(%d), currentSfn(%d), returnSfn(%d) periodicity(%d)
Line 6104: [4G_DRDS] %s (eDV_Active: %d, Semi_cc_info_save: %d)
Line 6106: [4G_DRDS] path: %d
Line 6116: [SC] pre_cc_info[CC%d.before]rf(%d),mxr(%d),rtg(%d),demod(%d),pgc(%d),dcr(%d) - semi DR
Line 6123: [SC] pre_cc_info[CC%d.after]rf(%d),mxr(%d),rtg(%d),demod(%d),pgc(%d),dcr(%d) - semi DR
Line 6128: [SUBCORE ON] DEMOD PATH %d selected - semi DR
Line 6172: [DRX] Cellboundary(SCG: %d): %d, Otherstack(MCG): %d, Diff: %d
Line 6207: [4G_DRDS] SCG: curTime(Sfn(%d),Tti(%d),Offset(%d))
Line 6208: [4G_DRDS] SCG: time_diff(%d) blackout_time_tti(%d) blackout_time_mclk(%d) blackout_tti_mclk(%d) Updated_tti(%d), RFReleasePalTime(%d), RFGrantPalTime(%d)
Line 6212: [DSDS] RTG update Check!!! curTimeTti(%d), curTimeOffset(%d), Updated_tti(%d), Mclk(%d)
Line 6248: [4G_DRDS] SCG: cali_delay(%d), caliTime(Sfn(%d),Tti(%d),Offset(%d)
Line 6252: [DRX]Reinit due to abnormal cali-delay(%d)
Line 6272: [4G_DRDS] Set IsBeforeScgRtgSetting(1->%d)
Line 6346: [DRX] paging_frame(%d), paging_offset(%d), curTimeSFN(%d, %d), HWSFNload(%d), SWSFNload(%d)
Line 6357: [DRX] RemainingTime to PagingRcvIntr(%d, %d, %d)
Line 6382: [DRX] paging_frame(%d), paging_offset(%d), curTimeSFN(%d, %d), SFNload(%d)
Line 6383: [DRX] Invalid paging_frame(%d)!!! ---> Skip PagingRcvIntr Enable(%d)
Line 6426: [DRX]HALDRX_SetPagingRcvIntrSCG: curTimeSFN(%d)
Line 6468: [DRX] SCG paging_frame(%d), paging_offset(%d), curTimeSFN(%d, %d), HWSFNload(%d), SWSFNload(%d)
Line 6492: [DRX] SCG paging_frame(%d), paging_offset(%d) time_Diff(%d)
Line 6512: [DRX] curTimeSFN (%d), curTimeTti(%d) remain_time(%d)
Line 6519: [DRX] SCG SI start SFN-TTI(%d, %d), SI End SFN-TTI(%d, %d)
Line 6524: [DRX] Skip setting Paging Rcv Intr and trigger Paging done from Last Paging Intr
Line 6836: [DRX] Soc Warmup timer start(%d us)
Line 6845: [DRX] Soc Warmup timer can't start(%d us)
Line 6869: [LTE L1LC DSL1RC] HALDRX_ReleaseDrxCpuMifClk
Line 6890: [LTE L1LC DSL1RC] Wakelock, CPU/MIF clk reset for DRX wakeup due to PO skip
Line 7063: [DRX] Init
Line 7132: [DRX] SysStableTime(%d), WakeupSocTime(%d)
Line 7136: [DRX] SysStableTime(%d), WakeupSocTime(%d), gDrx_Debug_Level_delay(%d)
Line 7188: [DRX][RTG] Save LPM cnt (%d), RTC cnt (%d)
Line 7195: [DRX][RTG] Initial temp_dmxr_regval(%d) gDrx_dmixer_AngleDiff(%d hz) sampling_rate(%d)
Line 7196: [DRX][RTG] Initial gDrx_dmixer_freq_offset(%d ppm) dl_freq(%d)
Line 7199: [DRX][PWR_OPT] RF adaptive ON/OFF disable
Line 7238: [DRX] StartSlowClkEst: freq_int_value(%d)
Line 7244: [DRX] StartSlowClkEst: 1st
Line 7246: [DRX] StartSlowClkEst: 2nd
Line 7248: [DRX] StartSlowClkEst: 3rd Drx_clk_est_temp(%d)
Line 7329: [DRX] StopSlowClkEstForCFO: drx_control_state(%d) gDrx_CfoEnable(%d)
Line 7475: [SHADE] DSP release (%d)
Line 7493: [DSDS] HALSHADE_PowerDownDSP: Do not release DSP again as it is already released
Line 7503: [SHADE] DSP release End
Line 7692: [DRX] WakeupSendIPCtoDSP start
Line 7836: [DRX] WakeupSendIPCtoDSP end
Line 7912: [DRX] WakeupSendIPCtoDSPforSCG
Line 7931: [4G_DRDS] Stop SCG ST(%d) Retry Timer !
Line 7943: [4G_DRDS] Stop SCG ST(%d) PagingRequestTimer !
Line 7956: [4G_DRDS] disable Dynamic QS (4G_DRDS act)
Line 7985: [DRDS] There is Num_scg in scellinfolist, Num_scg is %d
Line 7991: [DRDS] Don`t add scell as already have SCG in Scell list during EDV_IDLE_IDLE case
Line 8017: [4G_DRDS]Add Scell: cid(%d), band(%d), dl_earfcn(%d), ul_earfcn(%d), dl_bw(%d), ul_bw(%d)
Line 8040: Instant SCell configuration&activation for 4G_DRDS SCG (TTI:%d)
Line 8047: [4G_DRDS] SetTdpState(SCG:CC0):state(%d->%d)
Line 8050: [4G_DRDS] SetTdpState(MCG:CC%d):state(%d->%d)
Line 8086: [DRX] IPC for SCG end
Line 8125: ----- Start:_AddScellinfoForSCG
Line 8129: [4G_DRDS] Can't Add Scell due to Semi DRDS
Line 8134: [4G_DRDS] set Int lock for Add Scell
Line 8157: [4G_DRDS]Add Scell(DR): cid(%d), band(%d), dl_earfcn(%d), ul_earfcn(%d), dl_bw(%d), ul_bw(%d)
Line 8167: [4G_DRDS] reset Int lock for Add Scell
Line 8200: [Bandlist] HALDRX_RemoveScellinfoForSCG : wrong operation during DRDS!
Line 8204: ----- Start:_RemoveScellinfoForSCG
Line 8256: [4G_DRDS] set Int lock for Remove Scell
Line 8264: [4G_DRDS] Remove Scell(DR): cid(%d), dl_earfcn(%d)
Line 8284: [4G_DRDS] reset Int lock for Remove Scell
Line 8293: [4G_DRDS] abnormal case!! Remove Scell: cid(%d), dl_earfcn(%d)
Line 8321: [4G_DRDS] For clearing abnormal case, RFBandlist is done
Line 8328: ----- End:_RemoveScellinfoForSCG
Line 8351: ----- Pend:_AddRemoveSCellForSCG
Line 8355: ----- Start:_AddRemoveSCellForSCG
Line 8366: [4G_DRDS] Remove RFband of SCG from RFbandlist due to MIMO conflict
Line 8375: ----- End:_AddRemoveSCellForSCG
Line 8404: [4G_DRDS] ----- Start _SetSemiDrds (eDV_Active: %d, Semi_cc_info_save: %d)
Line 8418: [4G_DRDS] Can not enable 4G_DRDS because CC = (%d)
Line 8431: [SC] pre_cc_info[CC%d.before]rf(%d),mxr(%d),rtg(%d),demod(%d),pgc(%d),dcr(%d) - semi DR
Line 8437: [SC] pre_cc_info[CC%d.after]rf(%d),mxr(%d),rtg(%d),demod(%d),pgc(%d),dcr(%d) - semi DR
Line 8443: [4G_DRDS] Can't do semi DRDS. not enough path (demod/output/tdbuf)
Line 8455: [ckdgus] During HALDRX_SetSemiDrds, other stack wakeup and edv activated.
Line 8459: [4G_DRDS] eDV_AvailableforEPT(%d -> %d)
Line 8461: [4G_DRDS] set EptCheckForARFC(%d)
Line 8488: [ckdgus] Tune Semi DRDS band %d, dl_earfcn %d
Line 8494: [4G_DRDS] ----- End _SetSemiDrds
Line 8524: [4G_DRDS] ----- Start _ResetSemiDrds
Line 8531: [SC]cc_info[CC%d.before]rf(%d),mxr(%d),rtg(%d),demod(%d),pgc(%d),dcr(%d)
Line 8538: [4G_DRDS] pLTE_OHE->SemiDrds_Available (%d)
Line 8540: [4G_DRDS] End Semi Drds
Line 8542: [4G_DRDS] Tune Semi band %d, dl_earfcn %d
Line 8554: [4G_DRDS] Semi Drds End - restore CC0 end
Line 8556: [4G_DRDS] ----- Start _ResetSemiDrds (CA / 4rx)
Line 8581: [4G_DRDS] ----- End _ResetSemiDrds (CA / 4rx) end
Line 8585: [SC]cc_info[CC%d.after]rf(%d),mxr(%d),rtg(%d),demod(%d),pgc(%d),dcr(%d)
Line 8588: [4G_DRDS] ----- End _ResetSemiDrds
Line 8625: [4G_DRDS] Start of %s()
Line 8629: End of %s() : Semi DRDS disabled if not ENDC case
Line 8637: [4G_DRDS] End of %s() = (0), (MCG rf band == MCG Scell rfband == SCG rf band) case
Line 8701: [4G_DRDS] End of %s() = (%d)
Line 8740: HALDRX_CheckUpperLayerFlag(Idle DRX skip)(AlpssCfg->IdleDrx_en:%d gDrxEmm_Flag:%d gDrxEsm_Flag:%d gDrxRrc_Flag=%d gSecStateFlag:T%dR%d HALTX_SleepOkFlag:%d)
Line 8769: [DRX] PagingDone!! (gHalDrx_PagingState:%d)
Line 8770: [DRX] PagingDone!! (gHalDrx_PagingState:%d)
Line 8775: [DSP] HALDRX_PagingDone : gDrx_IsPagingDoneIndProcessed %d
Line 8781: [DRX] L1LC_DrxProcSleepReq sleepState(%d)
Line 8804: [DRX] DRX_PAGING_INIT
Line 8810: [DRX] DRX_WAIT_MEAS_PAGING -> DRX_PAGING_DONE
Line 8821: [DRX] Paging/meas Done, Sleep start, DRX_WAIT_MEAS_PAGING
Line 8827: [DRX] Paging Done Meas Done, but didn't meet sleep condition, DRX_MEAS_DONE->DRX_PAGING_INIT
Line 8852: [DRX] Extend gL1LC_DrdsAbnormalCheckTmr (gDrxRrcFlag case)
Line 8869: [DRX] Paging Done, Abnormal Case(%d) -> DRX_PAGING_INIT
Line 8922: [DRX] ResyncTime_SEF: SINR not updated yet
Line 8974: [DRX] ResyncTime_SEF(MBSFN config): cinr(%d, %d), gDrxResync_cnt(%d)  SavedSINR(%d)
Line 8978: [DRX] ResyncTime_SEF: cinr(%d, %d, %d), gDrxResync_cnt(%d) SavedSINR(%d)
Line 8979: [DRX] ResyncTime_SEF: cinr(%d, %d, %d), gDrxResync_cnt(%d) SavedSINR(%d)
Line 8992: (HALDRX_ResyncTime_SEF)(change to 1)((%d->%d) CINR:%d(%d))
Line 8997: (HALDRX_ResyncTime_SEF)(change to 2)((%d->%d) CINR:%d(%d))
Line 9004: (HALDRX_ResyncTime_SEF)(change to 2 due to MBSFN)((%d->%d) CINR:%d(%d))
Line 9011: (HALDRX_ResyncTime_SEF)(change to 2 due to CDRX)((%d->%d) CINR:%d(%d))
Line 9066: [DRX] (RxAdaptation): SINR(%d, %d, %d, %d), rx_mode(%x -> %x)
Line 9077: [DRX] (RxAdaptation): Skip Rx adaptation due to good SINR(%d)
Line 9084: [DRX] (RxAdaptation): CycleCnt(%d), MonPeriod(%d), Rx monitoring is triggered!
Line 9090: [DRX] (RxAdaptation): CycleCnt(%d), MonPeriod(%d)
Line 9116: [DRX] Sleep Time : ST%d (Previous %d [100us])
Line 9125: [DRX] Sleep Time : ST%d (Current %d [100us])
Line 9191: [DRX] Sleep time is small hal_sleepTime : (%d)
Line 9197: [DRX] ActiveStackID(%d), pLTE_OHE->SleepTime(%d), DRX_SLEEP_MARGIN+time_diff/100(%d), ApActiveMargin(%dms)
Line 9198: [DRX] ActiveStackID(%d), pLTE_OHE->SleepTime(%d), DRX_SLEEP_MARGIN+time_diff/100(%d), ApActiveMargin(%dms)
Line 9246: [DRX] State(%d) Error in Abort
Line 9268: [DRX] HALDRX_TriggerWakeup
Line 9295: [DRX] HALDRX_SleepAbort_4G4G
Line 9310: [DRX] Stop Current ST%d DsdsWakeupIntrTmr!
Line 9315: [DRX] Sleep Start Time : (Previous %d us) vs (Current %d us)
Line 9323: [DRX] Set Other ST%d DsdsWakeupIntrTmr[%d us]!
Line 9338: [DRX] %s: Wakeup interrupt is already raised, do nothing!!
Line 9347: [DRX] Other stack already doing sleep abort!
Line 9352: [DRX] Set Current ST%d DsdsWakeupIntrTmr[%d us]!
Line 9365: [DRX] Wakeup delayed/Soc Warmup Tmr running, do nothing!!
Line 9381: [DRX] %s: do nothing!!
Line 9421: [DRX] SleepAbort is already triggered
Line 9444: [DRX] Skip Stopping WakeupIntr timer!
Line 9452: [DRX] Stop ST%d DsdsWakeupIntrTmr before starting it again!
Line 9487: [DRX] 1-Set SleepAbortFlag as TRUE.
Line 9489: Set DSDSwakeupintr timer (1ms)!!
Line 9510: [DRX]2-Set SleepAbortFlag as TRUE.
Line 9514: [DRX] current stack wakeup procedure already started.so avoid dual wakeup.IsWaitResponse(%d)
Line 9527: [DRX] SocWarmupTimer of ST%d is running! Set DsdsWakeupintr timer in %d us later
Line 9532: [DRX] Current Stack %d // Current Stack gDsdsIsWakeupResume = %d // Other Stack gDsdsIsWakeupResume = %d
Line 9550: [DRX] SleepAbort is already tried
Line 9560: [DRX] SleepAbort is Failed (Modem is currently POWER ON)(%d, %d)
Line 9571: [DRX] 3-Set SleepAbortFlag as TRUE.
Line 9585: [DRX] SleepAbort is Failed (Minimun Sleep Abort Allowable Time[ST: %d, %d, %d])
Line 9590: [DRX] 4-Set SleepAbortFlag as TRUE.
Line 9596: [DRX] SleepAbort Failed due to not enough sleep abort allowable time (Minimun Sleep Abort Allowable Time[ST:%d, %d, %d])
Line 9601: [DRX] 5-Set SleepAbortFlag as TRUE.
Line 9610: [DRX] 6-Set SleepAbortFlag as TRUE.
Line 9620: [DRX] corner case, 4G + non-4G SW sleep state.
Line 9634: [DRX] SleepAbort (Early Wakeup Time is %d.%d ms)
Line 9635: [DRX] SleepAbort (Early Wakeup Time is %d.%d ms)
Line 9651: [DRX] SleepAbort_nosync
Line 9675: [DRX] DisableIntr_Suspend
Line 9687: [DRX] Reset CFO flag as Interrupt is disabled!
Line 9725: [DRX] HALDRX_DisableIntr_RFRelease
Line 9729: HALDRX_DisableIntr_RFRelease: Modem is not power on
Line 9751: [DRX] HALDRX_DisableIntr_RFRelease for SCG
Line 9755: HALDRX_DisableIntr_RFRelease: Modem is not power on
Line 9774: [DRX] HALDRX_SleepAbortOfSuspendNormal
Line 9805: [DRX] SleepAbort_suspend
Line 9812: [DRX] Disable FreqErrIntr when suspend DRX_CLKEST!
Line 9818: [DRX] Reset CFO flag and disable FreqErrIntr when suspend CfoEnable!
Line 9848: [DRX] Other ST(%d)'s remaining time is %d (100us)
Line 9886: [DRX][RTG] Save Dmixer FreqOffset before sleep temp_dmxr_regval(%d), dl_freq(%d), bw(%d) sampling_rate(%d)
Line 9887: [DRX][RTG] Save Dmixer FreqOffset before sleep gDrx_dmixer_AngleDiff(%d)(hz)
Line 9888: [DRX][RTG] Save Dmixer FreqOffset before sleep gDrx_dmixer_freq_offset(%d ppm)
Line 9889: [DRX][RTG] Save DCXO   FreqOffset before sleep gDrx_dcxo_freq_offset(%d ppm) temp(%d)
Line 9898: [DRX] Sleep Start Time : (Previous %u us) vs (Current %u us)
Line 9901: [DRX] Other ST(%d)'s remaining time is %d (100us)
Line 9907: [DRX] Stop Other ST%d DsdsWakeupIntrTmr!
Line 9917: [DRX] Set Other ST%d H/W Intr : %d Slp Cnt
Line 9929: [DRX] Do nothing!There is no enough sleep time! Other ST [%d]'s remaining sleep time is %d!
Line 9936: [DRX] Warning! MODEM OFF, Sleep Abort under L1LC_DSDS_WAKEUP_INTR_TIMER Running on OtherStack
Line 9942: [DRX] Do nothing!Timer is already expired! Other ST [%d] is waiting for GRANT!
Line 9946: [LTE DS]Start RetryTimer(ST: %d, %d ms)!!
Line 9956: [DRX] Stop Current ST%d DsdsWakeupIntrTmr!
Line 9968: [DRX] Stop Other ST%d DsdsWakeupIntrTmr!
Line 9974: [DRX] Add sleep Time (%d) for another ST: %d !
Line 9981: [DRX] Add Sleep Time is Failed (Minimun Sleep Abort Allowable Time[%d, %d])
Line 9990: [DRX] Set Other ST%d H/W Intr : %d [Slp Cnt]
Line 9997: [DRX] Do nothing!Waiting the expiry of DsdsWakeupIntrTmr (ST%d)
Line 10005: [DRX] Stop Current ST%d DsdsWakeupIntrTmr!
Line 10028: [DRX] Is_Drx_Wakeup_ongoing(%d). Update current stack's Pre CellBoundary first
Line 10055: [DRX] Change RTG for other STACK LTE
Line 10075: [DRX] Do nothing!Other STACK status is ACTIVE
Line 10084: [DRX] Do nothing!LTE of other STACK is turned on because of Latch!
Line 10144: [DRX] Sleep Abort - OTDOA Measurement Ongoing!!!
Line 10149: [DRX] SleepStart_A start!!! sfn(%d), tti(%d), offset(%d)
Line 10180: [HALSHADE_PowerDownModemSub] SleepStart_A start
Line 10199: [DRX] SLP CNT Start sleepTime(%d), PowerDown(%d)
Line 10221: [DRX] gDrx_SavedSFN(%d) gDrx_SavedTTI(%d)
Line 10235: [DRX] sleep start!!! sleepTime[%d:%d], margin:%d(%d), SleepStart_A end
Line 10298: [DRX] gDrx_PowerDown[%d][%d]
Line 10354: [DRX] ST%d Modem/HAL Parameter Saving
Line 10355: [DRX] ST%d Modem/HAL Parameter Saving
Line 10389: [DRX] (Before %s sleep start) Saved AGC Index(%d, %d)
Line 10465: [DRX] Subcore Debug, sleepType(%d),Ohe:eSleepType(%d)
Line 10513: [DRX] Reset CFO flag as Interrupt is disabled!
Line 10532: [DRX] SetTdpState(CC0): state(%d -> %d)
Line 10539: [DRX] gL1LC_CheckLastPagingIntrTmr is running, but sleep procedure is started
Line 10546: [DRX] UeState(%d) First Sleep Start
Line 10617: [4G_DRDS] ST%d Modem/HAL Parameter Saving, SCG CC(%d)
Line 10629: [DRX] Cell ID(%d), DL BW (%d), UL BW (%d), UL CP TYPE (%d)
Line 10980: [DRX] Release Resource during sleep
Line 11085: WaitForTTIBoundary %d sfn %d tti %d offset %d 
Line 11142: [DRX] Sleep Abort - OTDOA Measurement Ongoing!!!
Line 11152: [SADS] RfRequestForDR is TRUE when Sleep start
Line 11167: [DRX] Sleep : stored dc value (%d, %d)(%d, %d)
Line 11191: [DRX] %s Hard SleepStart start!!! sfn(%d), tti(%d), offset(%d)
Line 11253: [DRX][RTG] Save Dmixer FreqOffset before sleep temp_dmxr_regval(%d), dl_freq(%d), bw(%d) sampling_rate(%d)
Line 11254: [DRX][RTG] Save Dmixer FreqOffset before sleep gDrx_dmixer_AngleDiff(%d)(hz)
Line 11255: [DRX][RTG] Save Dmixer FreqOffset before sleep gDrx_dmixer_freq_offset(%d ppm)
Line 11256: [DRX][RTG] Save DCXO   FreqOffset before sleep gDrx_dcxo_freq_offset(%d ppm) temp(%d)
Line 11325: [DRX] gDrx_PowerDown(%d)
Line 11376: [DRX] %s Hard SleepStart end!!! NextWakeupStack(%d), sleepTime(%d(100us), %d(slowclk)), reaminslowclk(%d), margin(%d, %d, %d) WakeupSocTime(%d)
Line 11378: [DRX] %s Hard SleepStart end!!! NextWakeupStack(%d), sleepTime(%d(100us), %d(slowclk)), reaminslowclk(%d), margin(%d, %d, %d) WakeupSocTime(%d)
Line 11383: [DRX][RTG] LPM debug mode is %u
Line 11420: [DRX] ResetConnDrxParam
Line 11444: [DRX] PowerResetForReSync
Line 11474: [DRX]gDrx_ActiveRat_[0][1]=%d,%d (%d)
Line 11479: [DRX] Modem power is currently OFF (stackId: %d)
Line 11549: [DRX] HALDRX_SetModemPowerOnFlag Stack-1[%d], Stack-2[%d]
Line 11570: [DRX] HALDRX_SetModemPowerOnFlagSCG Stack-1[%d], Stack-2[%d]
Line 11590: [DRX] HALDRX_SetModemPowerOffFlag Stack-1[%d], Stack-2[%d]
Line 11633: [DRX] InitPowerUpModemHW start
Line 11642: [DRX] Skip Modem/Dsp power on
Line 11696: [DRX] InitPowerUpModemHW end
Line 11711: [DRX] PowerOnResume
Line 11746: [DRX] PowerDownSuspend
Line 11773: EPT time diff %d ms, IsEarlyPauseFlag
Line 11779: Before RF powerdown, check dualsim(%d), call(%d), rf(%d), earlypause(%d)
Line 11786: [DRX] Avoid RF power down.
Line 11819: [DRX] Modem is already off
Line 11871: [DRX] PowerOnIratMeas(%d) start
Line 11875: [DRX] PowerOnIratMeas: LTE power domain ON
Line 11954: [DRX] PowerOnIratMeas end
Line 11956: [DRX] LTE_InitLatchPowerUp
Line 11987: [DRX] PowerDownIratMeas(%d)
Line 12009: [DRX] Modem is already off, so do not power down
Line 12051: [DRX][RTG] Save Temp Diff(%d) PPM Diff(%d)
Line 12068: [DRX] Change HALDRX state(%d => %d)
Line 12136: [SHORTMODE] wakeup_time(%d, %d), gDrxShortStableTime(%d)
Line 12152: [SHORTMODE] GAP: sfn(%d) tti(%d) length(%d)
Line 12157: [SHORTMODE] GAP: sfn(%d) tti(%d) length(%d) is too short
Line 12333: [DRX] HALDRX_StoreSccInfo : [CC%d] frame_position = %d (gDrx_RtgDiff: %d, rtg0: %d, rtg1: %d)
Line 12337: [DRX] HALDRX_StoreSccInfo : frame_position change from %d to 0
Line 12371: [DRX] CC0 SLO disable on CGI, scell_config_info CC(%d) dl_earfcn(%d)
Line 12392: [DRX] StoreSccInfo: mode(%d), scc_cnt(%d)
Line 12462: [DRX] StoreSCGInfo: mode(%d)
Line 12492: [4G_DRDS] HALDRX_ClearSccForSemiDR
Line 12500: ---Release Scell RF path start@_HALDRX_ClearSccForSemiDR
Line 12506: cc(%d):release scell --
Line 12543: ---Release Scell RF path done@_HALDRX_ClearSccForSemiDR
Line 12547: [RF] Failed to get RF grant. Need to check!!!
Line 12573: [4G_DRDS] HALDRX_RestoreSccForSemiDR
Line 12581: cc(%d):restore scell --
Line 12765: [DRX] HALDRX_RestoreScc4Rx: CC(%d) rx_mode(0x%X)
Line 12769: [DRX] HALDRX_RestoreScc4Rx: CC(%d) illegal tdp_state(%d)
Line 12803: [DRX] HALDRX_RestoreSubcore return TRUE, so Demod subcore has turn on
Line 12873: [DRX] CC%d 's  frame position(%d) is too big(or negative), so make it as same as RTG(0)
Line 12925: [DRX] Warning! Invalid cc_info->frame_position 
Line 12929: [DRX] CC%d 's  frame position(%d) is too big(or negative), so make it as same as RTG(0)
Line 12934: [DRX] HALDRX_RestoreSccInfo : [CC%d] frame_position = %d (prev_frame_position: %d, gDrx_RtgDiff: %d)
Line 12973: [DRX] RestoreSccInfo: restore reduced mode(0x%x)
Line 13007: [NRDS] Reset RemoveDrBandDuringNrPbch
Line 13010: [DRX] RestoreSccInfo: mode(%d), scc_cnt(%d)
Line 13039: [DRX] UpdateIdleRxMode: mode(%d), 1RxOffFlag(%d, %d)
Line 13053: [DRX] UpdateIdleRxMode: RxAdaptMode(%x)
Line 13550: [DRX] HALSC_GetUeState() %d isPCHConfigable %d cause_PHY %d
Line 13554: [DRX] cause_PHY %d isPCHConfigable %d isWakeupOnGoing %d HALDRX_GetState %d HALSC_GetUeState %d
Line 13555: [DRX] isDrxInSIB %d IsRfReqReject %d eDV_Active %d 
Line 13611: [DRX] targetTime %d current_sfn_tti_PHY %d remainTime2Target %d  
Line 13612: [DRX] current_sfn_tti %d current_time.sfn %d current_time.tti_num %d 
Line 13613: [DRX] targetTimeDiff %d 
Line 13662: [DRX] DrxConfirmInd: current_sfn_tti_PHY(%d), sleep_time_tti_PHY(%d), cell_group(%d) cause_PHY %d
Line 13670: [DRX] DrxConfirmInd_SCG: current_sfn_tti_PHY(%d), sleep_time_tti_PHY(%d), cell_group(%d) cause_PHY %d
Line 13712: [DRX] DrxConfirmInd: wrong UE state(%d)
Line 13814: [DRX] gDrx_GnssWakeupTime(%u) curtime(%u) remaintime(%u)
Line 13848: [DRX] isLWakeupEnabled(%d) isLWakeupPended(%d) reqdSlpTime(%d) remainSlpCnt(%d) slpCnt(%d)
Line 13924: [DRX] CheckDRXinSIB (%d)
Line 13964: 4Rx mode case!
Line 13970: Not support HALDRX_ProcDrxRfRxPathOnOffCtrl
Line 13981: Abnormal case!! Modem Power [%d], RF Available[%d]
Line 13988: [DRX][PWR_OPT] HALDRX_ProcDrxRfRxPathOnOffCtrl(on/off:%d, backup:%d, sfn(%d), tti(%d), offset(%d))
Line 14017: [DRX][PWR_OPT] HALDRX_ProcDrxRfRxPathOff: backup#%d dm_update(%d)
Line 14021: [DRX][PWR_OPT] Skip HALDRX_ProcDrxRfRxPathOnOffCtrl: Force wakeup(%d) / RACH(%d) case
Line 14028: [DRX][PWR_OPT] Skip HALDRX_ProcDrxRfRxPathOnOffCtrl: SIB DRX(%d)
Line 14044: [DRX][PWR_OPT] HALDRX_ProcDrxRfRxPathOnOffCtrl: Store CC0 system parameter
Line 14060: [DRX][PWR_OPT] HALDRX_ProcDrxRfRxPathOnOffCtrl: CC#%d saved AGC(%d, %d)
Line 14119: [DRX][PWR_OPT] HALDRX_ProcDrxRfRxPathOn: backup#%d dm_update(%d)
Line 14212: [4G_DRDS] UE_STATE [cur(%d)other(%d)], OHE_STATE [cur(%d)other(%d)]
Line 14262: [4G_DRDS] 4G_DRDS state Check done: Possible state: %d
Line 14296: [4G_DRDS] UE_STATE [cur(%d)other(%d)], OHE_STATE [cur(%d)other(%d)]
Line 14340: [4G_DRDS] HALDRX_PerformEdvStateCheckBeforeSleep : SleepTime [cur(%d)other(%d)conflict(%d)], DRX_SLEEP_MARGIN[cur:(%d),other:(%d)]
Line 14366: [4G_DRDS] 4G_DRDS state Check done(before sleep) : Possible state: %d
Line 14413: [4G_DRDS] Semi_DRDS available
Line 14417: [4G_DRDS] 4G_DRDS band check status(%d)
Line 14517: [4G_DRDS] TargetStack(ST%d)::INACTIVE[%d][%d]! 4G_DRDS is impossible
Line 14522: [4G_DRDS] L1LC_GetStackDrxBplmnEnableFlag(source:%d)(target:%d)! 4G_DRDS is impossible
Line 14533: [4G_DRDS] RF path invalid case
Line 14554: [4G_DRDS] NR num CC is (%d) and LTE num CC is (%d). skip DRDS due to FR2 8CC
Line 14597: [4G_DRDS] DR_BE_REMOVED state! 4G_DRDS is impossible
Line 14604: [4G_DRDS] ConflictwithMIMO! 4G_DRDS is impossible
Line 14611: [4G_DRDS] DRDS_ENABLE Registry is FALSE
Line 14618: [4G_DRDS] Stack is inactive, UE states of Current stack (%d), Other Stack (%d)
Line 14625: [4G_DRDS] On Other stack MBMS is on-going, MBMS stack cannot be SCG
Line 14636: [4G_DRDS] Target Stack waits GRANT. if IsWaitResponse TRUE, SCG cannot proceed meas. Return here.
Line 14647: [4G_DRDS] TX_SWAP! 4G_DRDS is impossible
Line 14700: [4G_DRDS] HALDRX_CheckEdvStackOrder: LTE used over or equal 6 CC, try to release InterFreq Scells first
Line 14704: [4G_DRDS] HALDRX_CheckEdvStackOrder: num of scell (%d) -> (%d)
Line 14765: [4G_DRDS] HALDRX_CheckEdvStackOrder : %d. However, don't eDRDS because SCG is in weak signal area
Line 14775: [EDRDS] Can't eDRDS due to eDV_Enable = %d
Line 14783: [EDRDS] Can't eDRDS due to ARFC (ARFC: %d)
Line 14794: [EDRDS] Can't eDRDS due to MIMO!!(CC%d)
Line 14818: [4G_DRDS] HALDRX_CheckEdvStackOrder: DRDS -> eDRDS case
Line 14823: [4G_DRDS] Sub_DR = TRUE
Line 14840: [4G_DRDS] Sub_DR = TRUE
Line 14860: [EDRDS] can't special case due to AGC diff. eDV_Enable = %d
Line 14982: [4G_DRDS] pLTE_OHE->SemiDrds_Available (%d)
Line 15051: [4G_DRDS] HALDRX_CheckEdvStackOrder: Source_Band[%d]: rat(%d), band(%d), earfcn(%d), is_4rx_path(%d)
Line 15091: [4G_DRDS] HALDRX_CheckEdvStackOrder: CC%d is for SLO. don't add source list
Line 15108: [4G_DRDS] HALDRX_CheckEdvStackOrder: Source_Band[%d]: rat(%d), band(%d), earfcn(%d), is_4rx_path(%d)
Line 15146: [4G_DRDS] HALDRX_CheckEdvStackOrder: Source_Band[%d]: rat(%d), band(%d), earfcn(%d), is_4rx_path(%d)
Line 15224: [NRDS] HALDRX_CheckEdvStackOrder: CC[%d] Source_Band[%d]: rat(%d), band(%d), is_4rx_path(%d)
Line 15269: [NRDS] DRDS RF return value is RF_EDV_4RX_FAIL(4)
Line 15274: [NRDS] Due to NR 4Rx, DRDS unavailable state. set IsNr4RxBlockDrds TRUE
Line 15287: [NRDS] NR changed 4Rx -> 2Rx. eDRDS available state
Line 15296: [NRDS] DRDS is not blocked by Nr4Rx. reset IsNr4RxBlockDrds TRUE
Line 15567: [DRDS] num of scell(%d), NrBandNum(%d), dr_added_check(%d), ca_check_range(%d), ret_val(%d)
Line 15589: [4G_DRDS] HALDRX_CheckEdvStackOrder: Source_Band[0]: rat(%d), band(%d), earfcn(%d)
Line 15599: [NRDS] debuging : gL1lc_DsdsDB.IsEndc = %d
Line 15615: [4G_DRDS] (ST%d)Target_Band: band(%d), earfcn(%d), Num_CaConfig(%d), MCG_NumCA_Source(%d), MCG_NumCA_Target(%d)
Line 15621: [Bandlist] Is4RxReleaseNeededForDr : (%d) -> (%d)
Line 15645: [4G_DRDS] HALDRX_CheckEdvStackOrder : status (%d), special_case(%d), special case MCG_CC(%d)
Line 15662: [DRDS] num of scell = %d, NrBandNum = %d, dr_added_check = %d, total = %d, cannot do DRDS
Line 15666: [4G_DRDS] End of %s()
Line 15696: [4G_DRDS] HALDRX_CheckEdvStackOrder: source[%d], target[%d] (NumCA: %d, %d), (%d, %d)
Line 15761: [4G_DRDS] 4G_DRDS is feasible for state(%d)
Line 15770: [4G_DRDS] 4G_DRDS is not feasible
Line 15814: [4G_DRDS] RemainPreponePagingTime [%u] MBMSEndTime [%u]
Line 15819: [LTE L1LC DSL1RC] Cell change done for BPLMN return. SINR : %d
Line 15835: [LTE L1LC DSL1RC] 4G_DRDS will be trigger after PBCH decoding! PBCH Mode[%u] IsBplmnReturn[%u]
Line 15877: [4G_DRDS] HALDRX_InitEDV
Line 15888: [4G_DRDS] CLR NeedResumeCnf
Line 15903: [4G_DRDS] SCG_CC resereved status updated to FALSE
Line 15958: [4G_DRDS] HALDRX_ResetEDV under SemiDrds(True), eDV_Active(False), SemiDrds_MCG(ST%d)
Line 15968: [4G_DRDS] %s(eDV=%d,Semi=%d /(%d,%d,%d,%d))
Line 16026: [4G_DRDS] HALDRX_ResetEDV: Process pending INFO_REQ !!!
Line 16033: [4G_DRDS] Start pending procedure on other stack is case of suspend !!!
Line 16062: [LTE L1LC DSL1RC] Saved RRM Message, process that first
Line 16150: [4G_DRDS] On Other stack MBMS is on-going, MBMS stack cannot be SCG
Line 16158: [4G_DRDS] On Current stack MBMS is on-going, MBMS stack cannot be SCG
Line 16166: [4G_DRDS] Do not activate 4G_DRDS as Signaling is going to start on other stack gRspNeeded(0x%x)
Line 16174: [4G_DRDS] Do not activate 4G_DRDS as eDV_state[%d] and gDrxRrc_Flag [%d, %d]
Line 16182: [4G_DRDS] Do not activate 4G_DRDS as eDV_state[%d] and current or Other stack is in sleep state(%d, %d) or in measurement(curmode:(%d, %d) iratcurmode:(%d, %d) state
Line 16188: [4G_DRDS] 4G_DRDS is not activated while sleep abort case (ST%d: %d, ST%d: %d), HALDRX_GetState(%d), HALDRX_GetOtherStackState(%d)
Line 16194: [4G_DRDS] 4G_DRDS is not activated. IsForBplmn(%d), IsForResume(%d)
Line 16200: [4G_DRDS] 4G_DRDS is not activated. OtherStack(%d) sets PauseFlag(%d)
Line 16206: [4G_DRDS] 4G_DRDS is not activated. IsDuringScellConfig
Line 16212: [4G_DRDS] 4G_DRDS is not activated. OtherStackID is in L2X BPLMN state 
Line 16218: [4G_DRDS] 4G_DRDS is not activated. RACH is ongoing [%d][%d] Other Stack[%d] Curr Stack[%d] 
Line 16232: [4G_DRDS] 4G_DRDS is not activated. VoLTE is ongoing [current: %d][other: %d]
Line 16238: [4G_DRDS] 4G_DRDS is not activated. Current stack is in paused state
Line 16244: [4G_DRDS] 4G_DRDS is not activated. IsHoSync [%d][%d] 
Line 16250: [4G_DRDS] Do not activate 4G_DRDS as PBCH Decode on-going on conn stack. PBCH Mode(%d)
Line 16256: [4G_DRDS] 4G_DRDS is not activated. SCG stack HoldRrmMsgFlag[%d] or gL1LC_ReInitDrxTriggered  is set [%d][%d] 
Line 16262: [4G_DRDS] Do not activate 4G_DRDS as PBCH Decode on-going on conn stack. PBCH Mode(%d)
Line 16268: [4G_DRDS] RF release is ongoing. Don't activate DRDS [d][%d] 
Line 16274: [4G_DRDS] Conflict with eDV check and NR GAP
Line 16303: [EnableDsdsMask] -> 0x%x (0x%x)
Line 16335: [4G_DRDS] eDV_AvailableforEPT(%d -> %d)
Line 16350: [EnableDsdsMask] -> 0x%x (0x%x)
Line 16379: HALDRX_ProcEdvStateNone
Line 16403: [4G_DRDS] other stack's sleep time(%d)
Line 16420: [EDRDS] edrds_prev_rxmode[CC%d] = (%d)
Line 16440: [4G_DRDS] ACTIVATED (IDLE-IDLE [AIT stack:%d]) :: Mcg/Scg(St%d/St%d), pLTE_OHE->SCG_CC(%d), [4G_DR_STAT] ActiveCnt(%d), TrialCnt(%d) ===
Line 16471: Do not enable 4G_DRDS(Active-Idle-Idle) as BPLMN on-going(%d, %d)
Line 16505: [4G_DRDS] ACTIVATED (ACTIVE IDLE-IDLE [AIT stack:%d]) :: Mcg/Scg(St%d/St%d), pLTE_OHE->SCG_CC(%d), [4G_DR_STAT] ActiveCnt(%d), TrialCnt(%d) ===
Line 16536: [4G_DRDS] Can not enable 4G_DRDS(Conn -Idle) as RFband was not added in RFbandlist
Line 16547: [4G_DRDS] Can not enable 4G_DRDS because NoOfScell = (%d) ConnDR State (%d)
Line 16554: [4G_DRDS] no need re-alloc DR path for Semi DR
Line 16564: [4G_DRDS] Can not enable 4G_DRDS because CC = (%d)
Line 16583: [EDRDS] edrds_prev_rxmode[CC%d] = (%d)
Line 16594: [EDRDS] edrds_prev_rxmode[CC%d] = (%d)
Line 16616: [4G_DRDS] EPT was checked before, Set AIT to SCG : EptCheckForARFC(%d)
Line 16622: [4G_DRDS] ARFC(or Signalling) case, Set AIT to MCG : EptCheckForARFC(%d)
Line 16630: [4G_DRDS] ACTIVATED (CONN-IDLE [AIT stack:%d]) :: Mcg/Scg(St%d/St%d), pLTE_OHE->SCG_CC(%d), [4G_DR_STAT] ActiveCnt(%d), TrialCnt(%d) ===
Line 16661: [4G_DRDS] Can not enable 4G_DRDS because NoOfScell = (%d) ConnDR State (%d)
Line 16671: [4G_DRDS] Can not enable 4G_DRDS because CC = (%d)
Line 16688: [EDRDS] edrds_prev_rxmode[CC%d] = (%d)
Line 16699: [EDRDS] edrds_prev_rxmode[CC%d] = (%d)
Line 16726: [4G_DRDS] ACTIVATED (CDRX-IDLE [AIT stack:%d]) :: Mcg/Scg(St%d/St%d), pLTE_OHE->SCG_CC(%d), [4G_DR_STAT] ActiveCnt(%d), TrialCnt(%d) ===
Line 16756: [4G_DRDS] %s
Line 16767: [4G_DRDS] Register state [Other: %d][Curr: %d]
Line 16788: [4G_DRDS] Other stack is inactive, UE state of other stack (%d)
Line 16795: [4G_DRDS] Stack is in suspend state
Line 16802: [4G_DRDS] Waiting Resume_Ind from SRL1RC [%d][%d]
Line 16809: [4G_DRDS] Waiting RF GRANT CNF [%d][%d]
Line 16817: [4G_DRDS] DR path is unavailable
Line 16823: [4G_DRDS] eDV_Available (%d)
Line 16828: [4G_DRDS] DRDS unavailable : reset EptCheckForARFC(%d)
Line 16837: [4G_DR_STAT] Add only LteDrdsTrialCnt(%d), conflict(%d), eDV_state(%d)
Line 16839: [4G_DR_STAT] reset conflict(%d)
Line 16844: [4G_DR_STAT] Not Add LteDrdsTrialCnt(%d), conflict(%d), eDV_state(%d)
Line 16851: [4G_DR_STAT] Add only LteDrdsTrialCnt(%d), eDV_state(%d)
Line 16854: [4G_DR_STAT] Not Add LteDrdsTrialCnt(%d), eDV_state(%d)
Line 16858: [4G_DRDS] OHE Status : CurrentStack (%d) OtherStack (%d)
Line 16859: [4G_DRDS] UE State : CurrentStack (%d) OtherStack (%d)
Line 16863: [4G_DRDS] 4G_DRDS is already activated (%d)
Line 16973: HALDRX_ProcEdvDeactive
Line 16986: ST%d Is_Drx_Wakeup_ongoing = TRUE. So, last paging is first
Line 17022: [4G_DRDS] Modem is in power-on state
Line 17131: [4G_DRDS] DRDS _ProcEdvDeactive, fedv_rf_available(false)) in SCG UeState(init/idle)
Line 17140: [4G_DRDS] _ProcEdvDeactive in wrong SCG UeState(%d) 
Line 17158: [4G_DRDS] Modem is in power-down state. Clear Scell config
Line 17174: Remove Scell: cid(%d), dl_earfcn(%d)
Line 17313: ST%d [4G_DRDS] HALDRX_ClearEDVForMCG, EDV special case (%d) reset (%d),eDV_Active(%d), ConnDR_State(%d)
Line 17345: [4G_DRDS] restore Dynamic QS
Line 17346: [4G_DRDS] DEACTIVATED From DR_State(%d) /HALDRX_ClearEDVForMCG ===
Line 17350: Stop DrdsAbnormalCheckTmr
Line 17371: [4G_DRDS] RF_Update_DR_Band_info(clear)
Line 17427: [NRDS] request NR to change : 2rx -> 4rx
Line 17443: [EMCP_dbg(_ClearEDVForMCG)]McgSt(ST%d): num_of_scell(%d),Scell(%d),scg+inter(%d),ConnDR_State(%d)
Line 17528: [DRX] gL1LC_CheckLastPagingIntrTmr started for %d ms
Line 17542: [DRX] Expected First MCG pagingintr(%d): sfn(%d), tti(%d), Expected sfn(%d), tti(%d)
Line 17575: [DRX] Expected First SCG pagingintr(%d): sfn(%d), tti(%d), Expected sfn(%d), tti(%d)
Line 17603: [4G_DRDS] Already ConnDR_state: DR_ADDED
Line 17681: [OHE]ST-%d(%d) => OHE_StackStatus[0][1] (%d, %d)
Line 17710: [DRX] Expected First SCG pagingintr(%d): sfn(%d), tti(%d), Expected sfn(%d), tti(%d)
Line 17739: [4G_DRDS] conn-conn, other stack(NSA) can't wakeup due to short sleep time (%u)
Line 17776: [4G_DRDS] Proc HALDRX_CheckCdrxIdleEdvAvailable eDV_AvailableforEPT(%d)
Line 17810: [4G_DRDS](conflict) Current ST%d SleepTime(CONN) = %d . Other ST%d(IDLE) SleepTime = %d, current-other = %d, SLEEP_MARGIN+80 = %d
Line 17814: [4G_DRDS] 4G_DRDS (Cdrx - Idle) is not available. Go for 4G_DRDS (Conn - Idle)
Line 17824: [NRDS] NR alive and other stack will wakeup soon. Go for 4G_DRDS (Conn - Idle)
Line 17829: [4G_DRDS] (No conflict) Current ST%d SleepTime(CONN) = %d . Other ST%d(IDLE) SleepTime = %d, current-other = %d, SLEEP_MARGIN+80 = %d
Line 17868: [4G_DRDS] Proc HALDRX_CheckConnEdvAvailable, SleepTime: Current %d vs Other %d [100us](diff= %d)
Line 17884: [NRDS] set NRDS conflict case - CDRX/IDLE
Line 17890: [4G_DRDS] Available2(CASE1) Current IDLE ST%d SleepTime = %d . Other CONN ST%d() SleepTime = %d, other-current = %d, SLEEP_MARGIN+80 = %d
Line 17894: [4G_DRDS] Current ST%d SleepTime(IDLE) is Shorter but make Other ST%d(CONN) SleepTime shorter
Line 17897: [DRX] Stop Other ST%d DsdsWakeupIntrTmr and enable H/W wakeupintr for other ST%d 
Line 17907: [4G_DRDS] Set Other ST%d H/W Intr : %d [Slp Cnt], %d [100us]
Line 17910: [4G_DRDS] Set Current ST%d DsdsWakeupIntrTmr : %d [100us]
Line 17924: [4G_DR_STAT] set conflict(%d) - CDRX/IDLE
Line 17929: [4G_DRDS] Available2(CASE2) Current CONN ST%d SleepTime = %d . Other IDLE ST%d SleepTime = %d, current-other = %d, SLEEP_MARGIN+80 = %d
Line 17945: [4G_DRDS] Set Other ST%d H/W Intr : %d [Slp Cnt], %d [100us]
Line 17959: [NRDS] set NRDS debug - (%d),(%d),(%d),(%d)
Line 17985: [NRDS] set NRDS conflict case - CDRX/IDLE
Line 17991: [4G_DRDS] Available2(CASE3) Current CONN ST%d SleepTime = %d . Other IDLE ST%d SleepTime = %d, current-other = %d, SLEEP_MARGIN+80 = %d
Line 17995: [4G_DRDS] Other ST%d SleepTime(IDLE) is Shorter but make Current ST%d(CONN) SleepTime shorter
Line 18004: [4G_DRDS] Set Current ST%d H/W Intr : %d [Slp Cnt], %d [100us]
Line 18007: [4G_DRDS] Set Other ST%d DsdsWakeupIntrTmr : %d [100us]
Line 18020: [4G_DR_STAT] set conflict(%d) - CDRX/IDLE
Line 18026: [4G_DRDS] Available2(CASE4) Current IDLE ST%d SleepTime = %d . Other CONN ST%d SleepTime = %d, other-current = %d, SLEEP_MARGIN+80 = %d
Line 18037: [DRX] Stop Other ST%d DsdsWakeupIntrTmr and enable H/W wakeupintr for other ST%d 
Line 18047: [4G_DRDS] Set Other ST%d H/W Intr : %d [Slp Cnt], %d [100us]
Line 18050: [4G_DRDS] Set Current ST%d DsdsWakeupIntrTmr : %d [100us]
Line 18082: RTG(ST:%d) is saved: SFN(%d), TTI(%d) RTGoffset(%d), ReleasePalTime(%d)
Line 18089: [4G_DRDS] Clear Lte_OHE dm values
Line 18111: [4G_DRDS]%s(eDV_Active:%d)
Line 18115: [4G_DRDS] During Lisr, activate DrdsTmrIntrHCB
Line 18134: Start DrdsAbnormalCheckTmr (%d ms)
Line 18147: [DRX] During Lisr, deactivate ModemOffTmrHCB
Line 18156: [DRX] Stop ModemOffAbnormalTmr (ST:%d)
Line 18169: [DRX] During Lisr, activate ModemOffTmrHCB
Line 18180: Start ModemOffAbnormalTmr (ST:%d, %d ms)
Line 18207: BPLMN or resetection on-going. gDrx_BplmnStarted: %d, IsCellResel: %d
Line 18214: Reinit DRX on-going. gL1LC_PbchMode: %d, gL1LC_ReInitDrxTriggered: %d
Line 18220: BPLMN Return on-going. gL1lc DsdsDB.IsBplmnReturn: %d, gL1LC_PbchMode: %d
Line 18251: HALDRX_GetWakeupInitType - CurrntSt: OtherSt(%d): IsDrxSleep(%d) IsEndc(%d) / NR: NrSetupInfo(%d) NsleepState(%d)
Line 18255: [SADS]HALDRX_GetWakeupInitType - L1LC_GetSadrAvailable(%d)
Line 18271: HALDRX_GetWakeupInitType - CurrentStackSleepTime(%d) OtherStackSleepTime(%d)
Line 18291: HALDRX_GetWakeupInitType - Result = %d (1_full/2_partial)
Line 18389: [DrxTimeStamp] mode %d diff %5d.%-3d     timeElapsed %5d.%-3d     %s
Line 18417: [DRX] uncName = %s, ST[%d] Hold Type(%d), hold_count(%d), hold_time(%d)
Line 18452: [DRX] ST-%d gCpuPwrDownHoldInd(%d -> 0)
Line 18459: [DRX] funcName = %s : pal_PowerDownHoldingCntReset
Line 18507: [DRX] HALDRX_WaitForNrGapEnd : gap flag(%d), semiDR(%d)
Line 18513: [DRX] Wait for Nr Gap End (%d)us
Line 18519: [DRX][Warning] Nr Gap is not finished in (%d)us
Line 18557: [DRX] Check NR GAP. curpaltime %d , gapstart %d , gaplength %d gapend %d
Line 18581: [DRX] Wakeup delay due to NR GAP - curpaltime(%d), time_to_gapstart(%d), time_to_gapend(%d), wait_gap_end(%d)
Line 18587: [DRX] No Conflict with LTE Wakeup and NR GAP - curpaltime(%d), time_to_gapstart(%d), time_to_gapend(%d)
Line 18592: [DRX] NR Gap is not configured
Line 18620: [DRX]HALDRX_PostponeLteWakeupForNrGap : SemiDrCondition(%d), IsRfAvailable(%d),dsds_db->NrDsInfo.ProcWakeupByMsg(%d),dsds_db->IsEndc(%d), other_dsds_db->IsEndc(%d)
Line 18634: [DRX] Wakeup delay due to NR GAP - wait_time(%d) over
Line 18640: [DRX] Skip conflict check for NR GAP + LTE wakeup - RfAvailable(%d), ProcWakeupByMsg(%d), IsEndc(%d)
Line 18660: [DRX] reset gDrx_StrOffsetVal
Line 18681: [DRX] Set ST%d SleepAbortFlag(%d -> %d)
Line 18705: [DRX] Set gDrx_PreModemOn (%d -> %d)
Line 18727: [DRX] Set gDrx_PreModemOnStart (%d -> %d)
Line 18750: [DRX] Set gDrx_ParallelModemOn (%d -> %d)
Line 18793: [DRX] Set gDrx_MulticoreOpt (%d -> %d)
Line 18908: [DRX] GsmSleepState(%d) isHedge(%d) NsleepState(%d) NrPdState(%d) NR_RemainsleepTime(%d)
Line 18937: [DRX] HALDRX_CheckSubcore return %d
Line 2457: [DRX] ProcPagingIntr(%d): sfn(%d), tti(%d)
Line 2511: [DRX] Paging channel Rx
Line 2539: [DRX] Otherstack's CellBoundary: %d, Diff: %d
Line 2638: [4GDRDS] Skip pal_DrxPagingHCB 
Line 2998: HALDRX_ProcPagingIntr
Line 3376: [DRX] ProcSfnUpdateIntr
Line 3666: [DRX] No need to update Rvalue because it is PowerOff or SleepOnGoing or Suspend.
Line 3675: [DRX] Cancel Rvalue update!rtg counter did not start yet
Line 3459: DRX wakeup completed. So, CPU clock MIN lock released
Line 3597: [DRX] ProcDrxPagingRcvHisr: gHalDrx_SleepState(%d), gHalDrx_NonPaging(%d), PagingRcvIntrInvoked(TRUE)
Line 4185: [cDRX pre-Meas] Skip sending Meas_Schedule_Ind due to isFullStationary(1)
Line 4003: [DRX] Sleep Abort - OTDOA Measurement Ongoing!!!
Line 4010: [DRX] gL1LC_DrxControl->state = DRX_CLKEST
Line 4017: [DRX] gHalDrx_ConnDrxBlock is true
Line 4022: [DRX] ProcDrxConnSleepStartHisr: gHalDrx_ConnDrxState(%d)
Line 4030: [DRX] Don't Sleep before MEAS DONE, gHalDrx_ConnDrxState = DRX_CONN_DSP_DONE
Line 4042: [DRX, 4GDS] Don't Set measconfig as HALSC_MEAS_CONFIG_CONN_DRX now(IsDuringGsmMeas:%d)
Line 4052: [DRX, 4GDS] Don't Set measconfig as HALSC_MEAS_CONFIG_CONN_DRX now(L2N gap measurement is ongoing)
Line 4062: [DRX, 4GDS, NRDS] Don't Set measconfig as HALSC_MEAS_CONFIG_CONN_DRX now(IsEndc:%d)
Line 4065: [DRX, 4GDS] Set measconfig as HALSC_MEAS_CONFIG_CONN_DRX
Line 4082: [DRX] Pend conn sleep request due to ongoing wakeup(gDrx_PendConnSleep:1)!!!
Line 4094: [DRX] Abnormal Case(%d) : gHalDrx_ConnDrxState = DRX_CONN_INIT
Line 4117: [DRX] DSP done : gHalDrx_SleepState(%d)
Line 4351: [DRX] ProcDrxWakeupModemHisr is invoked(gDrx_PowerDown[%d][%d]/TimingLatch(%d, %d))
Line 4354: [DRX] Initialize pLTE_OHE->SleepType to H_SLEEP
Line 4374: [DRX] HW is not off actually
Line 4376: [DRX] Set pLTE_OHE->SleepType to S_SLEEP
Line 4382: [DRX] InitSystemTime at SW wakeup. NrFullResetInfo(1)
Line 4400: [DRX] Check-Point-3 (Rat(%d)/ TimingLatch[CurrStack: %d][OtherStack: %d]
Line 4492: [DRX] ProcDrxWakeupDSPHisr: Modem Stable Time(%d) NR modem status(OFF)
Line 4497: [DRX] ProcDrxWakeupDSPHisr: Modem Stable Time(%d) NR modem status(ON)
Line 4505: [DRX] ProcDrxWakeupDSPHisr: Modem Stable Time(%d) NR modem status(OFF)
Line 4510: [DRX] ProcDrxWakeupDSPHisr: Modem Stable Time(%d) NR modem status(ON)
Line 4518: [DRX] drx_demod_init_hold(%d)
Line 7302: [DRX] StartSlowClkEstForCFO (%dms)
Line 7312: [DRX] StartSlowClkEstForCFO: ERR_ACC_PERIOD(%d)
Line 4571: [DRX] ProcDrxWakeupRF1Hisr: Wakeupinit Stable Time(%d) 
Line 4576: [DRX] HALDRX_ProcDrxWakeupRF1Hisr: pal_GetCpuFreq(%d) pal_GetMifFreq(%d)
Line 4704: [DRX] ProcDrxWakeupInitHisr: DSP Stable Time(%d)
Line 4728: [DRX][PWR_OPT] RF adaptive ON/OFF enable
Line 4740: [DRX] before DrxSysValid, Saved AGC Index(%d, %d)
Line 4763: [DRX] RTG update start: sfn(%d), tti(%d), offset(%d)
Line 4786: [DRX][RTG] RTG Update gDrx_IsLpmCalDone(%d:CalVer/LpmCalDone/NormalCalDone)
Line 4794: [DRX][RTG] from wakeup_LPM_CNT to sleep_LPM_CNT
Line 4796: [DRX][RTG] fo_lpm(%d) fo_normal(%d) Tune(%d) fo_tune(%d)
Line 4797: [DRX][RTG] slpCntInSclk_normal(%d) = slpCntInSclk_total(%d) - slpCntInSclk_lpm(%d) transCnt_lpm(%d)
Line 4804: [DRX][RTG] Change rvalue_filter_gain(%d) to CFO_NORMAL_LOOP_GAIN(%d) in case pHALDRX_Db->gDrx_RvalFilterNormalGainCnt(%d)
Line 4809: [DRX][RTG] Change rvalue_filter_gain(%d) to CFO_MEDIUM_LOOP_GAIN(%d) in case pHALDRX_Db->gDrx_RvalFilterNormalGainCnt(%d)
Line 4814: [DRX][RTG] Change rvalue_filter_gain(%d) to CFO_FAST_LOOP_GAIN(%d) in else case
Line 4820: [DRX][RTG] gDrx_TotalDmixerppm = %d, gDrx_CfoValue = %d
Line 4826: [DRX][RTG] gDrx_TotalDmixerppm(%d), gDrx_dmixer_freq_offset(%d), gDrx_StrOffsetVal(%d), rvalue_filter_gain(%d), pHALDRX_Db->gDrx_rvalue_filter_gain_cnt(%d)
Line 4860: [DRX][RTG] M_last(%d) = M_total(%d) + refCntBeforeSleep(%d) + xfrCnt(%d) - gDrx_StrOffsetVal(%d) + Diff_cellboundary(%d)
Line 4867: [DRX] Do not update RTG, because HW is not sleep actually!
Line 4888: [DRX] RTG update start: sfn(%d), tti(%d), offset(%d)
Line 4931: [DRX] gSceTotalModemClk(%u): sleepCnt(%d), modemCnt(%d), sleepTime(%d, %d, %d), RC(0x%x)
Line 4933: [DRX] slp_ref_cnt(0x%x), xfr_ref_cnt(0x%x)
Line 4937: [DRX] Do not update RTG, because HW is not sleep actually!
Line 4944: [DRX] RTG update end: sfn(%d), tti(%d), offset(%d)
Line 4965: [DRX] NrFullReset RTG recovery case.(stack changed)
Line 4972: [DRX] Cellboundary: %d, Otherstack: %d, Diff: %d
Line 4981: [DRX] NrFullReset RTG recovery case.(same stack)
Line 4991: [DRX] gDrx_InvalidRvalueUpdate set to FALSE
Line 5719: [DRX] ProcDrxSysValidHisr: RF stable Time(%d)
Line 5721: [DRX] ProcDrxSysValidHisr: RF stable Time(%d)
Line 5754: [DRX] Otherstack's CellBoundary: %d, Diff: %d
Line 5782: [OHE]ST-%d(%d) => OHE_StackStatus[0][1] (%d, %d)
Line 5798: [DRX] AGC gain recovery(%d, %d)
Line 5815: [DRX] DCR OV(%d, %d) (%d, %d)
Line 5845: [DRX] (Adaptation): Changed to 4Rx for monitoring
Line 5876: [DRX] rtg_counter_start(%d)
Line 5880: [DRX] Rvalue will be updated 10ms later (waiting for STR stable) : NeedtoUpdateRvalue(1)
Line 5909: [DRX] current(sfn:%d, tti:%d, offset:%d), diff_onD:%d, gDrx_SleepTimeAdj:%d
Line 5915: [DRX] gDrxResync_cnt changed (%d -> %d)
Line 5920: [DRX] gDrxResync_cnt changed (%d -> %d)
Line 5929: [DRX] AGC/AFC/STR start(sfn:%d,tti:%d,offset:%d)
Line 5930: [DRX] AGC/AFC/STR start(sfn:%d,tti:%d,offset:%d)
Line 5932: [DRX] drx_demod_init_hold(%d) offset(%d) demod_isr(43008)
Line 5941: [DRX] IsRfReqReject = FALSE
Line 5962: [DRX] Resync Interrupt set
Line 5975: [DRX] EnableReSyncIntr: tti(%d), offset(%d), current_time(%d, %d, %d)
Line 5976: [DRX] EnableReSyncIntr: tti(%d), offset(%d), current_time(%d, %d, %d)
Line 5985: Set gDrxLmacReady(%d), dspWakeup(DSP_STATE_WAKEUP)
Line 5999: [DRX][PWR_OPT] Tigger intra-freq measure
Line 6003: [DRX] AlpssCfg->isForcedSearchByNv(%d)
Line 6013: [DRX][PWR_OPT] No needs to schedule Measurement as wakeup is happening for SIB-DRX
Line 6020: [DRX] ProcDrxSysValidHisr: Sys Valid Time(%d)
Line 5188: [DRX] RTG is recovered!(TimingLatch(%d, %d))
Line 5198: [Debug] Is_Drx_Wakeup_ongoing = %d
Line 5227: [DRX] Diff cellboundary is zero!
Line 5259: [DRX] Diff cellboundary is zero!
Line 5285: [DRX] drx_demod_init_hold(%d) - resume case
Line 5307: [DRX][PWR_OPT] RF CC0 Rx path ON
Line 5312: [DRX] [Before AGC start] Turned on Rx diversity paths according to the current Rx mode(%x)
Line 5330: [DRX] [Before AGC start] Turned on Rx diversity paths according to the current Rx mode(%x)
Line 3081: HALDRX_ProcDSDSIntrHisr gHALSC_dsdsIntrState(%d)
Line 3114: Unknown DSDS mode(%d)
Line 3142: HALDRX_ProcSCGDSDSIntrHisr gHALSC_dsdsIntrState(%d)
Line 3168: HALDRX_ProcDrdsTmrHisr, invoke set DrdsAbnormalTmr
Line 6659: Set CheckWakeupAvailable timer (1ms)!!
Line 6695: [DRX] ProcSfnUpdateHisr
Line 6700: [DRX] ProcSfnUpdateHisr: gDrx_WakeupStartTime(%d), gDrx_WakeupEndTime(%d)
Line 6705: [DRX] ProcSfnUpdateHisr: gDrx_WakeupStartTime(%d), gDrx_WakeupEndTime(%d)
Line 6709: [DRX] ProcSfnUpdateHisr: Current HW time SFN(%d), TTI(%d), offset(%d)
Line 6724: [DRX]ProcSfnUpdateHisr: SFN_LOAD_VALUE(%d)
Line 6799: [DRX] ProcDrxPagingRcvHisr: gHalDrx_SleepState(%d), gHalDrx_NonPaging(%d)
Line 3192: HALDRX_ProcModemOffTmrHisr, invoke set ModemOffAbnormalTmr
Line 4267: [DRX] HALDRX_ProcDrxPreModemOnHisr is invoked
Line 4285: [DRX] HALDRX_ProcDrxParallelModemOnHisr is invoked
Line 4204: [DRX] HALDRX_ProcDrxMultiCoreHisr Start
Line 4230: [DRX] HALDRX_ProcDrxMultiCoreHisr End
Line 4246: [DRX] HALDRX_ProcDrxPdSetHisr Start
Line 4248: [DRX] HALDRX_ProcDrxPdSetHisr End
Line 7873: [4G_DRDS] SCG TDP state was not HW_IDLE @ DRDS-Activated(%d)
Line 7875: [4G_DRDS] MCG SetTdpState(CC%d): state(%d -> %d)
Line 7648: [DRX] InitFromSleepIdle start
Line 7654: [DRX] Skip RF init during 2G call suspend
Line 7666: [DRX] InitFromSleepIdle end
Line 9152: [DRX] ActiveStackID(%d), hal_sleepTime(%d), gDrx_PowerDown(%d) gDrx_GnssWakeupTime(%d)
Line 7521: [DRX] RF_DSP_PowerDown start
Line 7585: [DRX] RF_DSP_PowerDown end
Line 7408: [DRX] RF_PowerDown start,NASU_MODE_SELECT(%d) 
Line 7426: [DRX] RF ClearHpcmOwnMask in BplmnSrchStartLteActive(%d)
Line 7450: [DRX] RF_PowerDown end
Line 10710: [DRX] Set Sleep
Line 10719: [DRX] Sleep Start Time : (Previous %d.%d) vs (Current %d.%d) [100us]
Line 10724: [DRX] ST%d DsdsWakeupIntr Timer is Running
Line 10734: [DRX] SleepTime : Current %d vs Other %d [100us](diff= %d)
Line 10752: [4G_DR_STAT] set conflict(%d) - IDLE/IDLE (diff=%d)
Line 10761: [DRX] Current ST%d SleepTime preponed by %d [100us]
Line 10774: [DRX] Other ST%d SleepTime preponed to %d [100us], MCG-SCG swap
Line 10794: [4G_DR_STAT] set conflict(%d) - IDLE/IDLE (diff=%d)
Line 10802: [DRX] Other ST%d SleepTime preponed by %d [100us]
Line 10818: [DRX] Current ST%d SleepTime preponed to %d [100us], MCG-SCG swap
Line 10827: [DRX] 4G_DRDS feasibility for IDLE-IDLE after wakeup(%d)
Line 10835: [DRX] Current ST%d SleepTime is Shorter
Line 10844: [DRX] Set Current ST%d H/W Intr : %d [Slp Cnt]
Line 10848: [DRX] Other ST%d SleepTime is Shorter
Line 10852: [DRX] Stop Other ST%d DsdsWakeupIntrTmr
Line 10860: [DRX] Set Other ST%d H/W Intr : %d [Slp Cnt]
Line 10863: [DRX] Set Current ST%d DsdsWakeupIntrTmr : %d, pLTE_OHE->SleepTime: %d, gDrx_WakeupSocTime: %d [100us]
Line 10869: [DRX] Current  ST%d Going to Sleep and Other ST%d wake timer expired 
Line 10873: [DRX] Set Current ST%d DsdsWakeupIntrTmr : %d, pLTE_OHE->SleepTime: %d, gDrx_WakeupSocTime: %d [100us]
Line 10889: [DRX] Set Current ST%d H/W Intr : %d [Slp Cnt]
Line 10902: [DRX][Single SIM] Set Current ST%d H/W Intr : %d [100us]
Line 10915: [DRX] Set Sleep Finish
Line 6581: [DRX] gDrx_SavedSFN(%d), gDrx_SavedTTI(%d), gDrx_SavedOffset(%d)
Line 13429: [DRX] Sleep Calculation Considering Next PRS Occassion :: CurSfnTti(%d), PrsOcc(%d), PrsSfnOffset(%d)
Line 13435: [DRX] Do not sleep, RSTD measurement needs to happen, sleep_time_tti_PHY(%d), prsSfnOffset(%d)
Line 13443: [DRX] Sleep Time Modified to Wakeup early to measure RSTD. Updated sleep_time_tti_PHY(%d)
Line 13346: [4G_DRDS] DrxConfirmInd: 4G_DRDS ongoing, Set CdrxRecoveryFlag(%d) pLTE_OHE->eDV_Active(%d) pLTE_OHE->eDV_AvailableforEPT(%d) 
Line 13352: [DRX][PWR_OPT] (SCG) DrxConfirmInd
Line 13355: [DRX] abnormal case: sleep_time_tti_PHY(%d)
Line 13149: [DRX] DrxConfirmInd: wrong DRX state(%d) gDrxRachStateFlag(%d) gHalDrx_State(%d)
Line 13151: [DRX] DrxConfirmInd: wrong DRX state(%d) gDrxRachStateFlag(%d) gHalDrx_State(%d)
Line 13157: [DRX] DrxConfirmInd: Sleep is already on going
Line 13163: [DRX][PWR_OPT] DrxConfirmInd: No P-RNTI, trigger sleep!!!
Line 13164: [DRX][PWR_OPT] DrxConfirmInd: No P-RNTI, trigger sleep!!!
Line 13167: [EDV] DrxConfirmInd: EDV ongoing
Line 13174: [DRX][PWR_OPT] Last paging is not invoked yet!!!
Line 13201: [DRX] Saved AGC Index(%d, %d)
Line 13207: [DRX] Wakeup is still ongoing, don't process PagingRcv yet!!!
Line 13208: [DRX] Wakeup is still ongoing, don't process PagingRcv yet!!!
Line 13213: [DRX] Paging Skip is set, don't process PagingRcv yet!!!
Line 13214: [DRX] Paging Skip is set,, don't process PagingRcv yet!!!
Line 13220: [DRX] DrxConfirmInd: gL1LC_DRXinSibFlag(%d)
Line 13221: [DRX] DrxConfirmInd: gL1LC_DRXinSibFlag(%d)
Line 13230: [DRX] DrxConfirmInd: Gap on-going, avoid DrxConfirmInd. Gap Status(%d, %d, %d)
Line 13250: [DRX] Saved AGC Index(%d, %d)
Line 13276: [DRX][PWR_OPT] DrxConfirmInd: UE state(%d) wrong sleep_time_tti_PHY(%d)
Line 13282: [DRX] DrxConfirmInd: Sleep is already on going
Line 13289: [DRX] Hand-over cell change is in progress, do not CDRX
Line 13310: [DRX] Is_Drx_Wakeup_ongoing = %d, gL1LC_CheckLastPagingIntrTmr = %d
Line 14449: [4G_DRDS] Can not enable 4G_DRDS because CC = (%d)
Line 14467: [SC] pre_cc_info[CC%d.before]rf(%d),mxr(%d),rtg(%d),demod(%d),pgc(%d),dcr(%d) - pre check DR
Line 14473: [SC] pre_cc_info[CC%d.after]rf(%d),mxr(%d),rtg(%d),demod(%d),pgc(%d),dcr(%d) - pre check DR
Line 14479: [4G_DRDS] Can't do DRDS. not enough path
