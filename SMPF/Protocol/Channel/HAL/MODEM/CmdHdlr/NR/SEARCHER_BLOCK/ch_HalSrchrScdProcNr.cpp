Line 152: ###[NR_SRCH_PROC] SrchType is Mismatched (%d VS %d)
Line 200: ###[NR_SRCH_PROC] SPECIAL_PURPOSE (BitMap= 0x%08x, iStart= %d, iEnd= %d)
Line 216: ###[NR_SRCH_PROC] Wrong BitMap...
Line 225: ###[NR_SRCH_PROC] SrchType is ERROR
Line 252: ###[NR_SRCH_PROC] EnableAgcGainDump: MODEM POWER OFF!!, return
Line 256: ###[NR_SRCH_PROC] EnableAgcGainDump(mode:%d)
Line 281: ###[NR_SRCH_PROC] fastagc_dumpcnt#%d => agc(%d, %d), rtg_counter(0x%x), sfn(%d), subframe_num(%d), offset(%d)
Line 328: ###[NR_SRCH_PROC] SrchrScdProcNr::rawPeriod=%d, iPeriod=%d, Arfcn=%d, dFromCenter=%d, needET=%d, varyAgcGain=%d, needLowEng=%d
Line 489: ###[NR_SRCH_PROC] SrchrScdProcNr::Legacy mode is used for IS retry. acc=%d, TargetPcid=%d
Line 567: ###[NR_SRCH_PROC][FIND_LOW_ENG_CELL] acc=%d, sum_corr_conn_low=%d, sort_conn_low=%d
Line 730: ###[NR_SRCH_PROC] SrchType(%d) Error in SrchrScdProcNr::EnableSync!!!
Line 737: ###[NR_SRCH_PROC] EnableSync @ %s Numerology %d  WindowLength %d 
Line 743: ###[NR_SRCH_PROC] SrchrScdProcNr::TargetPcid=%d, RbsType=%d, SrchCnt(mm2,Max2)=%04d, StartSfn=%d, Th(Wt3,Sort3)=%06d, RxBeam(0x%x, 0x%x)
Line 751: ###[NR_SRCH_PROC][SRCH_DEBUG] Combined mode => Legacy mode due to SmtcIncluded=%d, mu=%d and iPeriod=%d > 7
Line 766: ###[NR_SRCH_PROC] Can't start search because of insufficient margin for starting search. 
Line 853: ###[NR_SRCH_DEV][SMTC][NTC] Scell case? Given iRtg=%d, iPcellRtg=%d. We would use iPcellRtg.
Line 884: ###[NR_SRCH_PROC][SMTC][ERR] Stop Srch when Gap: Curr_ms=%d, NearestSmtc_ms=%d, Dist_ms=%d, StartSfn=%d, Offset=%d
Line 889: ###[NR_SRCH_PROC][SMTC][WARNING] Check out whether srch is inside the gap: Curr_ms=%d, NearestSmtc_ms=%d, Dist_ms=%d, StartSfn=%d, Offset=%d
Line 900: ###[NR_SRCH_PROC][SMTC] Try next smtc: Curr_ms=%d, NearestSmtc_ms=%d, Dist_ms=%d, Period_ms=%d, StartSfn=%d, Offset=%d, mustSrch=%d
Line 905: ###[NR_SRCH_PROC][SMTC][ERR] Stop Srch when NoneGap: Curr_ms=%d, NearestSmtc_ms=%d, Dist_ms=%d, StartSfn=%d, Offset=%d, mustSrch=%d
Line 913: ###[NR_SRCH_PROC][SMTC] SMTC is scheduled over period: Curr_ms=%d, NearestSmtc_ms=%d, Dist_ms=%d, Period_ms=%d, StartSfn=%d, Offset=%d, mustSrch=%d
Line 950: ###[NR_SRCH_PROC] [SMTC] Period=%d [ms], Offset=%d [ms], Duration=%d [us], StartSfn=%d, Dist_ms=%d, oriStartSfn=%d
Line 951: ###[NR_SRCH_PROC] [SMTC] G0=(%02d, %07d)=0x%08x
Line 952: ###[NR_SRCH_PROC] [SMTC] R0=(%02d, %02d, %07d)=0x%08x
Line 953: ###[NR_SRCH_PROC] [SMTC] R1: Curr_ms= %04d, NearestSmtc_ms=%04d
Line 954: ###[NR_SRCH_PROC] [SMTC] ORI_SET_POS=(%02d, %07d)
Line 955: ###[NR_SRCH_PROC] [SMTC] SET_POS=(%02d, %07d)=0x%08x
Line 960: ###[NR_SRCH_PROC][SMTC][ERR] The right time has passed just before...
Line 987: ###[NR_SRCH_PROC] [ERROR] Src(%d) error in GetGenCntVal()
Line 1215: ###[NR_SRCH_PROC] PrepareReSrch(%d), iRxBeam=0x%x
Line 1303: ###[NR_SRCH_PROC] [SMTC] Search failed. Try full search... WinLeng=%d
Line 1371: ###[NR_SRCH_PROC] [ERR] Not supported iBuffLeng=%d in mu=%d
Line 1470: ###[NR_SRCH_PROC] PrepareReSrch() - Why is NR_SETPOS_MODE one here?
Line 1558: ###[NR_SRCH_PROC][SRCH_DEBUG] Fix the AGC gain: PRx(%d => %d), DRx(%d => %d)...
Line 1684: ###[NR_SRCH_PROC] SrchrScdProcNr::ReInitSync(bw= %d, rx_path_idx= %d)
Line 1721: ###[NR_SRCH_PROC] Why PssDone? SrchrScdProcNr::ProcPssDoneHisr (srch_req_mode = %d), (mine)=(%d,%d,%d,%d)
Line 1729: ###[NR_SRCH_PROC] SrchrScdProcNr::ProcPssDoneHisr() - No more to evaluate...
Line 1738: ###[NR_SRCH_PROC] SRCH_MODE_FSCAN -> Sending SEARCHSCD_CMD_CB
Line 1753: ###[NR_SRCH_PROC] SrchrScdProcNr::ProcPssDoneHisr() sends SEARCHSCD_NR_CMD...
Line 1760: ###[NR_SRCH_PROC] SrchrScdProcNr::ProcPssDoneHisr() - All the PSS intr are invoked...
Line 1766: ###[NR_SRCH_PROC] SEARCHSCD_NR_CMD is NULL!!!
Line 1795: ###[NR_SRCH_PROC] SRCH_MODE_FACTORY -> Sending SEARCHSCD_CMD_CB %d %d
Line 1805: ###[NR_SRCH_PROC] SRCH_MODE_FACTORY BestResult::PSS:: MAX(PID=%d, Eng=%6d), MIN(PID=%d, Eng=%d)
Line 1821: ###[NR_SRCH_PROC] SrchMode is Error @ SrchrScdProcNr::ProcPssDoneHisr
Line 1866: ###[NR_SRCH_PROC] SrchrScdProcNr::ProcSssDoneHisr() - No more to evaluate.. (mine)=(%d,%d,%d,%d)
Line 1936: ###[NR_SRCH_PROC] SrchrScdProcNr::ERROR in PssIntCnt::(mine)=(%d,%d,%d,%d)
Line 2075: [%s] check agc j %d AgcGainIdx %d  RawAgcGainIdx %d  RawPwrDb %d  TargetRms %d
Line 2085: ###[NR_SRCH_PROC] SrchrScdProcNr::Send SEARCHSCD_NR_CMD::#FoundSSBs=%d, SrchThresh= %04d,
Line 2108: ###[NR_SRCH_PROC] SrchrScdProcNr::RxBeamSweep: %d out of %d or SrchRetryCnt= %d
Line 2136: ###[NR_SRCH_PROC] SEARCHSCD_NR_CMD is NULL @ SrchrScdProcNr::ProcSssDoneHisr
Line 2155: ###[NR_SRCH_PROC] SrchrScdProcNr::ProcSssDoneHisr4RunOnly
Line 2165: ###[NR_SRCH_PROC][ERR] SEARCHSCD_NR_CMD is NULL @ SrchrScdProcNr::ProcSssDoneHisr4RunOnly
Line 2339: ###[NR_SRCH] SrchrScdProcNr::DisableSrch()::No search to disable.
Line 2343: ###[NR_SRCH] SrchrScdProcNr::DisableSrch()
Line 2412: ###[NR_SRCH] SrchrScdProcNr::GetSrchPeriod(Raw= %d ms, inx=%d)
Line 2747: ###[RLM@PROC] SrchrScdProcNr::InitRlmStatus(iCg=%d) ,domain_type = %d
Line 2778: ###[RLM@PROC] SrchrScdProcNr::InitRlmInfo(iCg=%d, iRsType=%d, domain_type=%d)
Line 2820: ###[RLM@PROC] SrchrScdProcNr::EnableRlm(iCg=%d, iRsType=%d, domain=%d)
Line 2848: ###[RLM@PROC] SrchrScdProcNr::ProcSync10msHisr()::SFN=%d
Line 2881: ###[NR_SRCH_PROC] ProcRlmHisr: Invalid Demod CC
Line 2907: ###[RLM@PROC] No evaluation of RLM this time: SFN=%d
Line 2997: ###[RLM@PROC] (iCg1,iBitInfo1,iRlmRs1,RsType1,iReadMetric2)=%06d, IsMetricValid(In1,Out1)=%04d, AccIS_Metric=%d, AccOOS_Metric=%d, IS_Metric=%d, OOS_Metric=%d, Thresh(In4,Out4)=%08d
Line 3057: ###[RLM@PROC] [ERR] Why CurrL1cState=%d for iCg=%d?
Line 3076: ###[RLM@PROC] SFN=%d, iCg=%d, CurrL1cState=%d, prevSentSyncStatus=%d, SyncStatus=%d, NeedToSendSsInd=%d
Line 3102: ###[RLM@PROC] Confirm RLM_START_NR_CMD @ SFN=%d.
Line 3106: ###[RLM@PROC] RLM_START_NR_CMD is NULL at SFN=%d.
Line 3137: ###[RLM@DEV] GetIdleRlmOOSInfo():: Invalid Demod CC
Line 3145: ###[RLM@DEV] GetIdleRlmOOSInfo()::RawMetric=%d, Thresh=%d
Line 3171: ###[NR_SRCH_PROC] ProcRlmHisr: Invalid Demod CC
Line 3244: ###[RLM@DEV] GetMetric4Rlm()::iCg=%d, iBitInfo=%d, iRlmRs=%d, iWriteMetric=%d, RawMetric=%d, Thresh=%d, iRs=%d, iDemod=%d, domain_type=%d
