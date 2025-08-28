Line 173: ###[NR_SLEEP] WakeupSysParamInit: PathIdx(%d), dl_bw(%d), cp_type(%d), duplex_mode(%d), numerology(%d)
Line 194: ###[NR_WAKEUP][WARNING] SysValidConfigProc: SysValidNrCmd isn't running
Line 201: ###[NR_WAKEUP] SysValidConfigProc:: DrxMode(%d), WakeupRejcet(%d)
Line 206: ###[NR_WAKEUP][ProcTime] Timing Compensation
Line 207: ###[NR_WAKEUP][ProcTime] Timing Compensation
Line 243: ###[NR_WAKEUP] LcpuInitCnf
Line 244: ###[NR_WAKEUP] LcpuInitCnf
Line 269: ###[NR_SLEEP][ProcTime] SleepProc Start:: DrxMode(%d)
Line 270: ###[NR_SLEEP][ProcTime] SleepProc Start:: DrxMode(%d)
Line 280: ###[NR_SLEEP][ProcTime] SleepStartAction
Line 286: ###[NR_SLEEP][ProcTime] SleepStartActionForSwSleep
Line 292: ###[NR_SLEEP][WARNING] ProcSleepConfigCmd: Wrong RatType(%d)
Line 350: ###[NR_SLEEP] ProcDrxConfigCmd : OnOff(%d) Init(%d) DrxCycle(%d, %d) SlowClkFreq(%d)
Line 369: ###[NR_SLEEP] ProcDrxMeasModeCmd:: DrxMeasMode(%d) demodCc(0x%x)
Line 387: ###[NR_SLEEP] ProcDrxMeasModeCnfIpc:: DrxMeasMode(%d)
Line 410: ###[NR_SLEEP] ProcWakeupTimeAcqCmd: timerType(%d), isIATOn(%d)
Line 431: ###[NR_SLEEP] ProcCdrxMacCmd : DrxCmdType(%d) domain_type(%d)
Line 458: ###[NR_SLEEP] ProcPhyResumeCmd: tx_resume(%d), demod_cc(%d), bwp_ctrl_on(%d)
Line 471: ###[NR_SLEEP] ProcPhyResumeCmd: pcell_demod_cc(%d), [%d : PCELL(1) / SCELL(0)]
Line 502: ###[NR_SLEEP] need to debug: update_tx_path(%d)
Line 510: ###[NR_SLEEP] skip to send PHY_RESUME_IND IPC
Line 531: ###[NR_SLEEP] ProcVoNrStatusInfoCmd:: VoNrEn(%d), modem_state(%d), domain_type(%d)
Line 555: ###[NR_SLEEP] InstallLisrHandler()
Line 583: ##[NR_SLEEP] SetLcpuState: State[prev(%d) -> curr(%d)], demod_cc(%d), 
Line 619: ##[NR_SLEEP] LcpuInit : A wrong cc index(%d)
Line 632: ##[NR_SLEEP] LcpuInit(demod_cc(%d), core(%d), cc_state(0x%x), lcpu_state(%d)) is not finished normally.
Line 659: ##[NR_WAKEUP] UpdateRtgOffsetDiff: WakeupRtgOffset(%d), RtgDiffBetwSleepWakeup(%d), FrameBoundary(%d)
Line 680: ##[NR_SLEEP] SetDemodCcState: cc(%d), state(%d->%d)
Line 718: ##[NR_SLEEP] GetDemodCcState: cc(%d), state(%d), demod(index:%d, state:%d), lcpu(index:%d, state:%d)
Line 790: ###[NR_SLEEP] CheckInitType(%d): ResumeType(%d) DrxMode(%d) LtePD(%d) LteStatus|LteSleepState(0x%02x) NrDr|IsPeerActive(0x%02x) DcModemState|DcRxfStatus(0x%02x)
Line 817: ###[NR_SLEEP] CheckTimeCompenMode: TimeCompenMode(%d, 0:RtgDiff 1:ClkEst 2:OV), DrxMode(%d)
Line 853: ###[NR_SLEEP] CheckRxRestoreValidity:: TimeDiff(%d), CurrSysTime(%d, %d, %d), wakeuptime(%d), domain_type(%d)
Line 897: ###[NR_SLEEP] TimingCompensationByClkEst: sleepTimeInModemClkDcxo(%d), sleepTimeInModemClkNsleep(%d), Diff(%d)
Line 917: ###[NR_SLEEP] TimingCompensationByClkEst: mode(%d), SleepMclk(%d), sleepTime(SFN %d, SubFrame %d, Offset %d), WakeupStrOffset(%d)
Line 920: ###[NR_SLEEP] TimingCompensationByClkEst: TotalSleepMclkCnt(%d), DrxStart_Ref_Cnt(0x%x), Xfr_ref_cnt(0x%x), rtg_diff(0x%x), SlpStart_Ref_Rtg(%d), SlpXfr_Ref_rtg(%d)
Line 947: ###[NR_SLEEP] RtgDiffBefSleep(%d) RtfDiffAftSleep(%d) RtgAlign(%d)
Line 973: ###[NR_SLEEP] CalculateSleepMclk: sleepCntSclk(%d), SceTotalModemClk(%d), sleepTimeInModemClk(%d)
Line 992: ###[NR_SLEEP][WARNING] CalculateSleepMclk: Abnormal sleepCntSclkLpm(%d > %d)
Line 999: ###[NR_SLEEP] CalculateSleepMclk: Set RatioAdjustFactor(%d) because of too long sleepCntSclk (%d > %d)
Line 1011: ###[NR_SLEEP][DCXO] CalculateSleepMclk: LpmCnt(0x%x -> 0x%x), sleepCntSclkLpm(%d), LpmCnt(%d), sleepCntSclk(%d), sleepCntSclkNormalMode(%d), sleepTimeInModemClk(%d)
Line 1015: ###[NR_SLEEP][WARNING] CalculateSleepMclk: Unexpected mode(%d)
Line 1065: ###[NR_SLEEP] CalcRemainingTimeToNextCycle: DrxCycle(%d), CurrOffset(%d), DrxStartOffset(%d), RemainingTime(%d ms)
Line 1129: ###[NR_SLEEP][WARNING] UpdateFeeRvalue:: Invalid Rvalue. BefSceModemClk(0x%x), SceModemClk(0x%x), FreqIntVal(%d), SceDiff(%d)
Line 1133: ###[NR_SLEEP] UpdateFeeRvalue:: FilterGain(%d)(Cnt%d), BefSceModemClk(0x%x), AftSceModemClk(0x%x), SceModemClk(0x%x), FreqIntVal(%d), SceDiff(%d)
Line 1177: ###[NR_SLEEP][DCXO] UpdateFeeRvalue:: CURR_NORMAL_FO(%d), FO_NORMAL_NV(%d), FO_LPM_NV(%d), CURR_LPM_FO(%d), MclkSclkRatio(%d.%d)
Line 1182: ###[NR_SLEEP][DCXO] UpdateFeeRvalue:: NormalRvalue(0x%x %08x), LpmRvalue(0x%x %08x), LpmDrxStatus(%d -> %d)
Line 1192: ###[NR_SLEEP][WARNING] SetDcxoLpmCntCb: SysValidNrCmd isn't running
Line 1207: ###[NR_WAKEUP] SetDcxoLpmCntCb : RetVal(%d), DomainType(%d)
Line 1228: ###[NR_WAKEUP][ProcTime] UpdateDcxoInfo Start
Line 1252: ###[NR_WAKEUP][ProcTime] UpdateDcxoInfo Done
Line 1273: ###[NR_SLEEP] ConfigFeeIntr:: reset(%d)
Line 1292: ###[NR_SLEEP][WARNING] ConfigFeeIntr:: sleepStatus(%d), sleepStatusCnt(%d)
Line 1351: ###[NR_SLEEP] SleepStartAction: domain_type(%d)
Line 1367: ###[NR_SLEEP] SleepStartAction: update SleepTime for RxModeChange(%d->%d), AdditionalMargin(%d), SleepTime(%d)
Line 1378: ###[NR_SLEEP] SleepStartAction: update SleepTime for 4RxPath (%d -> %d)
Line 1391: ###[NR_SLEEP] SleepStartAction: Set SleepTime(%d)us by lack of SleepProc Margin(%d) or DrxCycleUs(%d)
Line 1400: ###[NR_SLEEP] SleepStartAction: abnormal elapsedTimeUs(%d). Skip SleepTimeUs update
Line 1404: ###[NR_SLEEP] SleepStartAction: SleepTimeUs(%d -> %d) elapsedTimeUs(%d)(%d, %d)
Line 1406: ###[NR_SLEEP] SleepStartAction: SleepTimeUs(%d -> %d) elapsedTimeUs(%d)(%d, %d)
Line 1419: ###[NR_SLEEP] SleepStartAction: NR/LTE wakeupIntr overlapped. LTE_sleeptime(%d) NR_sleeptime(%d) diff(%d) sleepTime_SlowClk(%d -> %d)
Line 1485: ###[NR_SLEEP][WARNING] SleepStartActionForSwSleep:: Unexpected TimeCompenMode(%d)
Line 1538: ###[NR_SLEEP] UpdateWakeupStrOffset: NrWakeupStrOffset(%d) str_offset(%d)(%d, %d) RtgOffset(%d -> %d) NrRvalueUpdateCnt(%d)
Line 1543: ##[NR_WAKEUP] SleepStartAction: servRtgIdx(%d) CurRtgOffset(%d)
Line 1564: ##[NR_WAKEUP] WaitForCompenPreparationDone: trial(%d), WaitTime(%d)
Line 1601: ###[NR_SLEEP] GetRemainLteSleepTime: LteSleepState(%d), LteSleepTime(%d)
Line 1688: ###[NR_SLEEP] CheckClkEstNeed: DcxoSleepType(%d), isClkEstCmd(%d), reset(%d), LastEstElapsedTimeUs(%d), elapsedTimeUs(%d), result(%d, 0:NotSupport/1:Needed/2:NotNeeded/3:AlreadyCfg)
Line 1711: ###[NR_SLEEP] GetRemainSleepTime: ModemStatus(%d), NsleepState(%d), RemainTime(%d)
