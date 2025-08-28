Line 115: ###[NR_MEAS][MONITOR_IND_IPC]: command(%d) demod_cc(%d)
Line 146: ###[NR_MEAS][MS_INFO_IPC]: Module(%d) RxBeam(0x%04x) Rsrp(%d, %d)
Line 172: ###[NR_MEAS] ProcMeasResultCompose++
Line 175: ###[NR_MEAS] ProcMeasResultCompose--
Line 197: ###[NR_MEAS] rxfilter's rx_mode is 0, skip measurement
Line 218: ###[NR_MEAS] Scheduled Time was delayed # RsType(%d) Current_Sfn(%d) Scheduled_Sfn(%d) Period(%d)
Line 223: ###[NR_MEAS] Recalculate Start SFN: Old(%d) --> New(%d)
Line 369: [PHY_MEAS_REQ] CSI-RS cell id(%d) measBW_startPrb(%d) measBW_nroPrb(%d) CsiRsDensity(%d)
Line 420: [PHY_MEAS_REQ] Density not configured, Row1 -> Density = d3
Line 437: [PHY_MEAS_REQ] Density not configured, Row2 -> Density = d1
Line 451: [PHY_MEAS_REQ] CSI-RS CsiRsSlotConfigOffset(%d) CsiRsSlotConfigPeriodicity(%d) firstOFDMSymbolInTimeDomain(%d) NrFreqDomainAllocRow(0x%x) CsiRsScramId(%d)
Line 480: [PHY_MEAS_REQ] Offset Bef Comp(%d) Offset Aft Comp(%d) RxDelay(%d)
Line 636: ###[NR_MEAS] SetMeasReq : CellId[%d], RxBeam[0x%x] timing[%d], offset[%d], Rs_Type[%d]  SSB_BITMAP[0x%X 0x%X]
Line 662: ###[NR_MEAS] Reschedule_mode(%d) MeasMode(%d) scell_enable(%d) MeasFreqType(%d) Freq_Range(%d)
Line 667: ###[NR_MEAS] Setting Done for MEAS_REQ
Line 671: ###[NR_MEAS](F) Delayed Setting Case.
Line 736: ###[NR_MEAS] CC(%d) Smtc_Period(%d) Offset(%d) FramePos(%d), HFI(%d), Sfn(%d) FirstTimingOffset(%d)
Line 787: ###[NR_MEAS] SetMeasReq : cc[%d], div_cc[%d], RxMode[0x%x], td_buf_idx[%x], td_buf_idx_div[%x], rfd_str_idx[%x], rfd_str_idx_div[%x]
Line 844: ###[NR_MEAS] SetMeasReq : Start_Meas_SFN[%u] period(%d) RxPath.cc[%d] dl_bw[%d] FftStartOffset[%d]
Line 851: ###[NR_MEAS] SetMeasReq : Meas_Duration[%d], scs[%d], meas_serv_bw[%d], rsrp_mode[%d], freq_range[%d], bd_4rx[%d]
Line 926: ###[NR_MEAS] SetMeasReq : CMD -> NumSsbToMeasure[%d], SsbToMeasure[0x%x, 0x%x], IPC -> FirstSsbIndex[%d]
Line 933: ###[NR_MEAS] SetMeasReq : MeasFreqType(%d) meas-mode(%d) Duplex_Mode[%d] CpType[%d] Demod_CC[%d] Freq_Range[%d]
Line 964: ###[NR_MEAS] there is no scell_demod_cc in hal_scell_bwp_info. demod_cc is copied from RxfPathInfo, domain(%d)
Line 981: ###[NR_MEAS] SetMeasResult : ServCellIndex(%d) arfcn(%d) demod_cc(%d)(%d)
Line 999: ###[NR_MEAS] Get Polarinfo : RxBeamIdx(0x%03x) (%d / %d)
Line 1062: ###[NR_MEAS] ValidAntIdx is updated! (%d) =====> (%d)
Line 1088: ###[NR_MEAS] SetMeasResult : CC_Copy is Done!!
Line 1173: ###[NR_MEAS] ProcMeasStop MeasMode(%d) is_timer_expired(%d)
Line 1212: ###[NR_MEAS] UpdateMeasPeriodLevel : domain_type(%d) period_level(%d) , Current-Status(%d/%d/%d/%d)
Line 1228: ###[NR_MEAS] UpdateCalOffset : (W)Invalid DEMOD_CC info
Line 1256: ###[NR_MEAS] IsValidMeasReq : Scheduled_Sfn(%d) Cur_Sfn(%d) Cur_subframe(%d) period(%d) smtc offset(%d)
Line 1278: ###[NR_MEAS] IsValidMeasReq : Delayed Case! Bye! Valid(%d) Scheduled_Sfn(%d) CurSfn(%d) CurSubFrame(%d), diff(%d)
Line 1294: ###[NR_MEAS] IsValidMeasReq : Valid(%d) CurSfn(%d) subframe(%d) Period(%d) Smtc_Offset(%d) remaining Time(%d)
Line 1320: ###[NR_MEAS] ReArrangeSsbBitMap:(W) Lmax(%d) iStart(%d), warning case. Stop this procedure
Line 1332: ###[NR_MEAS] ReArrangeSsbBitMap:[Off before SMTC] SsbPattern(%d) SsbBitmap(0x%x, 0x%x) SmtcStart(%d) SSBsBeforeSMTC(0x%x, 0x%x) Switch them off! 
Line 1347: ###[NR_MEAS] ReArrangeSsbBitMap:[Off before SMTC] SsbPattern(%d) SsbBitmap(0x%x, 0x%x) SmtcStart(%d) SSBsBeforeSMTC(0x%x, 0x0) Switch them off! 
Line 1369: ###[NR_MEAS] ReArrangeSsbBitMap:[Off after SMTC] SsbPattern(%d) SsbBitmap(0x%x, 0x%x) SmtcEnd(%d) SSBsAfterSMTC(0x0, 0x%x) Switch them off! 
Line 1384: ###[NR_MEAS] ReArrangeSsbBitMap:[Off after SMTC] SsbPattern(%d) SsbBitmap(0x%x, 0x%x) SmtcEnd(%d) SSBsAfterSMTC(0x%x, 0x%x) Switch them off! 
Line 1398: ###[NR_MEAS] ReArrangeSsbBitMap : [Warning] Bitmap changed to (0,0)! Skip the truncation!
Line 1403: ###[NR_MEAS] ReArrangeSsbBitMap : SSBBitmap Truncated from (0x%x, 0x%x) to (0x%x, 0x%x)
Line 1445: ###[NR_MEAS] RSBM : CTO : SSB[%d] = %d, SSB[%d] = %d, SSB[%d] = %d, SSB[%d] = %d
Line 1467: ###[NR_MEAS] RSBM : FramePos(%d), MeasPeriod(%d), StartSfn(%d), MeasStartGc(%d), MeasEndGc(%d), GapEndCutReqd(%d)
Line 1483: ###[NR_MEAS] RSBM(Forward) : SSB[%d] TO= %d, not within MeasWindow( %d, %d)
Line 1506: ###[NR_MEAS] RSBM(Backward) : SSB[%d] TO= %d, not within MeasWindow( %d, %d)
Line 1538: ###[NR_MEAS] RSBM(Forward) : SSB[%d] TO= %d, not within MeasWindow( %d, %d)
Line 1562: ###[NR_MEAS] RSBM(Backward) : SSB[%d] TO= %d, not within MeasWindow( %d, %d)
Line 1575: ###[NR_MEAS] RSBM : [Warning] Bitmap changed to (0,0)! Skip the truncation!
Line 1581: ###[NR_MEAS] RSBM : SSBBitmap Truncated from (0x%x, 0x%x) to (0x%x, 0x%x)
Line 1623: ###[NR_MEAS] GetRunningExtCmdReq fail [MEAS_NR_CMD]
Line 1629: ###[NR_MEAS] ProcMeasDmIsrDone! NumMeasCell(%d)
Line 1657: ###[NR_MEAS] GetRunningExtCmdReq fail [MEAS_NR_CMD]
Line 1667: ###[NR_MEAS] isAsSwitched(%d) MeasMode(%d) isMtm(%d) IsSortRequired(%d)
Line 1716: ###[NR_MEAS] RxMode during Meas Config(0x%x) --> Current RxMode(0x%x), Skip Measure results!
Line 1749: ###[NR_MEAS] MEASRESULT  CellID[%d] RxBeam[0x%03x] Rs_Index[%d] Rsrp[%d %d %d %d]
Line 1780: ###[NR_MEAS] GetRunningExtCmdReq fail [MEAS_NR_CMD]
Line 1801: ###[NR_MEAS] ProcMeasCompleteHisr! NumMeasCell(%d), scell_idx(%d), demod_cc(%d)
Line 1834: ###[NR_MEAS] ProcMeasCompleteHisr! servingSsbIdx(%d), multi_meas_idx(%d), dvga_offset_for_FR2(%d/%d/%d/%d)
Line 1842: ###[NR_MEAS] ProcMeasCompleteHisr! servingSsbIdx(%d)
Line 1850: ###[NR_MEAS] ProcMeasCompleteHisr! dvga_offset_for_FR2(%d/%d/%d/%d)
Line 1879: ###[NR_MEAS] ProcMeasCompleteHisr! ssbBitmap(0x%x), abbCompenEnable(%d)
Line 1894: ###[NR_MEAS] ProcMeasCompleteHisr! DVGA offset (ssbIdx=%d) = (%d/%d/%d/%d)
Line 1917: ###[NR_MEAS] ProcMeasCompleteHisr! PGC_gain (ssbIdx=%d) = (0x%X/0x%X/0x%X/0x%X)
Line 1920: ###[NR_MEAS] ProcMeasCompleteHisr! RSRP offset (ssbIdx=%d) = (%d/%d/%d/%d)
Line 1944: ###[NR_MEAS] ssbBitmap (0x%x), lmax (%d), ssbPattern(%d)
Line 1953: ###[NR_MEAS] targetSlotIdx (%d), ssbPositionBitmapInSlot[%d][%d] (0x%x), AsyncNrCcSpecific->dl_sym_bitmap[targetSlotIdx] (0x%x)
Line 1963: ###[NR_MEAS] SSB index %d is overlapped with U symbol!
Line 1975: ###[NR_MEAS] rsrp_offset[0] %d, rsrp_offset[1] %d
Line 2027: ###[NR_MEAS] RxMode during Meas Config(0x%x) --> Current RxMode(0x%x), Skip Measure results!
Line 2111: ###[NR_MEAS] MEASRESULT  CellID[%d] RxBeam[0x%03x] Rs_Index[%d] Rsrp[%d %d %d %d]
Line 2120: ###[NR_MEAS] SSB index %d is invalid SSB due to UL symbol
Line 2168: ##[NR_MEAS] Abnormal %s !!!, domain(%d) PowerOnFlag(%d) ModemState(%d)
Line 2194: ###[NR_MEAS] InitializeMeasHal: Done
