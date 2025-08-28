Line 371: ###[NR_SRCH_DEV] HALSRCH_5G_EnableSrchrDmover()::Enable PSS_DMA_DONE_LISR...
Line 385: ###[NR_SRCH_DEV] HALSRCH_5G_EnableSrchrDmover()::Enable SSS_DMA_DONE_LISR...
Line 418: ###[NR_SRCH_DEV] HALSRCH_5G_DisableSrchrDmover()::HwType(%d)
Line 655: ###[NR_SRCH_DEV] [ERR] Not supported iBuffLeng=%d in mu=%d
Line 662: ###[NR_SRCH_DEV] NumCandi.MaxHw= %d for BufferLength= %d
Line 761: ###[NR_SRCH_DEV] srch_req_mode error @ HALSRCH_5G_StartSrch
Line 782: ###[NR_SRCH_DEV] HALSRCH_5G_StopSrch()
Line 796: ###[NR_SRCH_DEV][SRCH_WA] Wait=%d until being stable... pssInt=%d, sssInt=%d
Line 805: ###[NR_SRCH_DEV] Reset Srch( mdm_pd= %d, sw_rst_l= 0x%8x, sw_rst_h=0x%08x)
Line 850: ###[NR_SRCH_DEV] No need to Clear SEARCHER!
Line 877: ###[NR_SRCH_DEV] HALSRCH_5G_DetectPss() - Mode= %d, SrchRetryCnt=%d
Line 881: ###[NR_SRCH_DEV] Reset Srch( mdm_pd= %d, sw_rst_l= 0x%8x, sw_rst_h=0x%08x)
Line 967: ###[NR_SRCH_DEV][ERR] HALSRCH_5G_DetectPss() MaxInt=0 !!!
Line 1007: ###[NR_SRCH_DEV] IntCnt::iBufLeng=%d, BufLeng=%d
Line 1036: ###[NR_SRCH_DEV] Dmover is disabled!!!
Line 1061: ###[NR_SRCH_DEV] IntCnt::Now=%d, EvalStart=%d, Max=%d, Interval=%d, #WinSamp=%d, iRxBeam=0x%x
Line 1079: ###[NR_SRCH_DEV] HALSRCH_5G_DetectSss(), iRxBeam=0x%x
Line 1129: ###[NR_SRCH_DEV] HALSRCH_5G_DetectSss()::[SETPOS=0] CurrGenCnt=0x%07x ; NR_BUF_SETPOS for next=0x%7x ; Margin=%d us, Margin::Final=%d, Init=%d
Line 1131: ###[NR_SRCH_DEV] HALSRCH_5G_DetectSss()::CurrPos(Resol1/TenMs2=%03d, Sample=%06d) ; NextPos(Resol1/TenMs2=%03d, Sample=%06d)
Line 1169: ###[NR_SRCH_DEV] HALSRCH_5G_DetectSss() - Why is NR_SETPOS_MODE one here?
Line 1391: ###[NR_SRCH_DEV] HALSRCH_5G_DetectSss()::Idx=%2d, NextPos(Resol1/TenMs2=%03d, Sample=%06d), Pid=%d, PathInx=%d, RegVal(NR_SSS_BUFF_POS)=0x%08x - Garbage
Line 1397: ###[NR_SRCH_DEV] HALSRCH_5G_DetectSss()::DirectRegReading[RightAfter]::Addr=0x%08x, Value=0x%08x
Line 1434: ###[NR_SRCH_DEV] HALSRCH_5G_DetectSss()::Idx=%2d, NextPos(Resol1/TenMs2=%03d, Sample=%06d), Pid=%d, PathInx=%d, RegVal(NR_SSS_BUFF_POS)=0x%08x
Line 1440: ###[NR_SRCH_DEV] HALSRCH_5G_DetectSss()::DirectRegReading[RightAfter]::Addr=0x%08x, Value=0x%08x, Eng=%04d, IsGenuine=%d
Line 1554: ###[NR_SRCH_DEV]HALSRCH_5G_DetectSss-4::[RegVal] NR_STATUS=0x%08x, NR_CLKCTRL=0x%08x, NR_CTRL_SET=0x%08x, NR_SRCH_PARAMETER=0x%08x, NR_BUF_LENGTH.reg=0x%08x
Line 1558: ###[NR_SRCH_DEV] NR_Srch_debug NR_PSS_CTRL 0x%x NR_SSS_CTRL 0x%x  NR_CE_INOUTSCALE 0x%x
Line 2018: ###[NR_SRCH_DEV] HALSRCH_5G_EnableIntr
Line 2036: ###[NR_SRCH_DEV] HALSRCH_5G_DisableIntr
Line 2171: ###[NR_SRCH_DEV] PSS RES(Var):: iPid1/iPath2/Pid1=%04d, Eng=%06d, rawPos261=%09d, pPos261=%09d, PwrDb33=%06d, HalfCorr0_33=%06d, HalfCorr1_33=%06d
Line 2221: ###[NR_SRCH_DEV] PSS RES:: i3/j1/k2=%06d, rawPos(Resol1/TenMs2/Samp6)=%09d, Eng=%05d, Agc3&3=%06d, Pwr3&3=%06d, HalfCorrp3&3=%06d, HalfCorrd3&3=%06d
Line 2371: ###[NR_SRCH_DEV] HALSRCH_5G_GetSssResult()::OriMem:: i3/j2/k1=%06d, Pid1/Sid3/CellId4=%08d, Eng=%05d, Afci3q3=%06d, Pwr33=%06d, pPos(Resol1/TenMs2=%03d, Sample=%06d)
Line 2386: ###[NR_SRCH_DEV] HALSRCH_5G_GetSssResult()::OriMem:: i3/j2/k1=%06d, Pid1/Sid3/CellId4=%08d, Eng=%05d, Afci3q3=%06d, Pwr33=%06d, pPos(Resol1/TenMs2=%03d, Sample=%06d)
Line 2436: ###[NR_SRCH_DEV] HALSRCH_5G_GetSssResult()::BestResult::SSS:: CellId=%d, Eng=%d, pPos(Resol1/TenMs2=%03d, Sample=%06d), iRxBeam=0x%x, #Elem4/AvgSssEng5=%09d, iSssPath=%09d
Line 2457: ###[NR_SRCH_DEV] Sorted:: i2/j2/k1=%05d, P1/S3/CellId4=%08d, Eng=%04d, Agc33=%06d, iB1/Pwr33=%07d, pPos(R1/T2/S6)=%09d, FrmPos=%06d
Line 2467: ###[NR_SRCH_DEV] Sorted:: CellId4/S3/P1/j1/k1=%010d, Eng=%05d, Agc33=%06d, iB1Pwr33=%07d, pPos(R1/T2=%03d, S=%06d), FrmPos=%06d
Line 2784: ##[NR_SRCH_DEV] HALSRCH_5G_CreatePssResList()::#%02d=> SssEng=%d, RawPwr=%3d, 133BP=%07d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 2790: ##[NR_SRCH_DEV] HALSRCH_5G_CreatePssResList()::#%02d=> PssEng=%d, iIntr=%03d, iPid=%d, iPath=%d
Line 2795: ###[NR_SRCH_DEV][ERR] iArchive=%d is not supported.
Line 2809: ###[NR_SRCH_DEV][ERR] %s is not supported
Line 2833: ###[NR_SRCH_DEV] HALSRCH_5G_KeepLatestSssRes(%d), MinPq.size=%d: Must be zero...
Line 3115: ###[NR_SRCH_DEV][minHeap] Clearing Mem.
Line 3130: ###[NR_SRCH_DEV] HALSRCH_5G_GetSssResult()::fClearSrchRes=%d <= 1, intMax=%d, candiSwMax=%d
Line 3137: ###[NR_SRCH_DEV] HALSRCH_5G_GetSssResult()::nSssInputPath=%d, EvalStart3To3Print3:Pss=%09d, Sss=%09d
Line 3156: ###[NR_SRCH_DEV] HALSRCH_5G_GetSssResult()::[SETPOS=%d] NR_GENCNTVAL=0x%08x, (Resol1/TenMs2=%03d, Sample=%06d)
Line 3193: ###[NR_SRCH_DEV] HALSRCH_5G_GetSssResult()::[SETPOS=%d] NR_GENCNTVAL=0x%08x, (Resol1/TenMs2=%03d, Sample=%06d)
Line 3242: ###[NR_SRCH_DEV][ERR]  intrInx is out of bound!!! iStart=%d:%d, iEnd=%d:%d
Line 3254: ###[NR_SRCH_DEV][ERR] intrInx is reversed!!! iStart=%d:%d, iEnd=%d:%d
Line 3262: ###[NR_SRCH_DEV][minHeap] CopySrchRes2Cache=%d, iStart=%d:%d, iEnd=%d:%d
Line 3275: ###[NR_SRCH_DEV][ERR] Wrong type=%d
Line 3279: ###[NR_SRCH_DEV][minHeap] CopySrchRes2Cache=%d, iStart=%d, iEnd=%d: Done.
Line 2126: ###[NR_SRCH_DEV] HALSRCH_5G_PrintScdStatus
Line 2065: ###[NR_SRCH_DEV] HALSRCH_5G_GetSrchMem()
Line 2092: ###[NR_SRCH_DEV] SRCHMEMCTRL(srch_info=0x%2x,Reg=0x%2x), mem_sel=0x%2x, mem_cnt=%d, mem_size=%d
Line 3486: ###[NR_SRCH_DEV] [ERROR] Src(%d) error in HALSRCH_5G_GetGenCntVal()
Line 3521: ###[NR_SRCH_DEV] HALSRCH_5G_GetPssResult()
Line 3531: ###[NR_SRCH_DEV] HALSRCH_5G_GetPssResult()::[SETPOS=%d] NR_GENCNTVAL=0x%08x, (Resol1/TenMs2=%03d, Sample=%06d)
Line 3576: ###[NR_SRCH_DEV] BestResult::PSS:: MAX(PID=%d, Eng=%6d), MIN(PID=%d, Eng=%d), iRxBeam=0x%x, Ratio*100=%d, Agc3&3=%06d
Line 1712: ###[NR_SRCH_DEV] HALSRCH_5G_ParsePssResult(From=%d, To=%d, NumCandi.MaxHw=%d)
Line 1776: ###[NR_SRCH_DEV] Stat::TotPssPathCnt= %03d, TotZeroPssEngCnt= %d
Line 1794: ###[NR_SRCH_DEV] HALSRCH_5G_SortPssResult
Line 1844: ###[NR_SRCH_DEV] HALSRCH_5G_SortSssResult(From=%d, To=%d, nSssInputPath=%d)
Line 1973: ###[NR_SRCH_DEV] DevSrchrScdNr()::[ERR]::srch_req_mode= %d
Line 1984: ###[NR_SRCH_DEV] IS Stat::TotEng= %010d, TotPathCnt= %03d, Normalized= %04d, TotZeroEngCnt= %d, TotOverEngCnt= %d
Line 1990: ###[NR_SRCH_DEV] CS Stat::TotEng= %010d, TotPathCnt= %03d, Normalized= %04d, TotZeroEngCnt= %d, TotOverEngCnt= %d
Line 1998: ###[NR_SRCH_DEV] ZP Stat::TotEng= %010d, TotPathCnt= %03d, Normalized= %04d, TotZeroEngCnt= %d, TotOverEngCnt= %d
Line 3367: ###[NR_SRCH_DEV] HALSRCH_5G_GetPssResFromReg(%d,%d)::PssIntCnt(Now=%d,Max=%d)
Line 3374: ###[NR_SRCH_DEV] Interrupt index is error!!!
Line 3418: ###[NR_SRCH_DEV] PSS RES ==> iPid=%d, iPath=%2d, PID=%d, Eng=%5d, pRawPos=%6d, PwrDbRx0=%d
Line 444: ###[NR_SRCH_INTR] HALSRCH_5G_ClearSrchStatus()::NR_STATUS=0x%08x - Cleared...
Line 448: ###[NR_SRCH_INTR] HALSRCH_5G_ClearSrchStatus()::NR_STATUS=0x%08x - Not cleared...
Line 484: ###[NR_SRCH_INTR] HALSRCH_5G_ClearSrchMode(%d) - Cleared
Line 488: ###[NR_SRCH_INTR] HALSRCH_5G_ClearSrchMode(%d) - Not Cleared
Line 1667: ###[NR_SRCH_DEV] EnableSrchClk=0x%x
Line 3677: ###[NR_SRCH_DEV][+] Error PosA.Resol=%d
Line 3682: ###[NR_SRCH_DEV][+] Error PosB.Resol=%d
Line 3737: ###[NR_SRCH_DEV][-] Error PosA.Resol=%d
Line 3742: ###[NR_SRCH_DEV][-] Error PosB.Resol=%d
Line 3827: ###[NR_SRCH_DEV][s] Error pPosA->Resol=%d
Line 3918: ###[NR_SRCH_DEV][HALSRCH_5G_ConvPos] Error in ConvPosType=%d
Line 3953: ###[NR_SRCH_DEV][ERR] HALSRCH_5G_GetSyncFreqVal(ArfcnDiffFromCenter=%d, Bw=%d)
Line 3960: ###[NR_SRCH_DEV] HALSRCH_5G_GetSyncFreqVal(ArfcnDiffFromCenter=%d, Bw=%d, SyncFreqVal=0x%08x=%d)
Line 3986: ###[NR_SRCH_DEV] Out of bound in iPeriod=%d
Line 4676: ###[NR_SRCH_DEV] [B estResult] %2d: GenCntOrReg (Resol=%d, TenMs=%02d, Sample=%06d): ElapTime=        us: Op= %s
Line 4710: ###[NR_SRCH_DEV] [B estResult] %2d: GenCntOrReg (Resol=%d, TenMs=%02d, Sample=%06d): ElapTime= %6d us: Op= %s
Line 4729: ###[NR_SRCH_DEV] [B estResult] Whole time for CellSearch= %3d ms + (160*N)
Line 4747: ###[NR_SRCH_DEV] IntCnt: mp3s3=%06d, (ine): Pss(%d,%d,%d), Sss(%d,%d,%d)
Line 4754: ###[NR_SRCH_DEV][RegVal] Point=%d, NR_STATUS=0x%08x, FrontRxClk_0=0x%08x
Line 4792: ###[NR_SRCH_DEV][RegVal] NR_STATUS=0x%08x, NR_CLKCTRL=0x%08x, NR_CTRL_SET=0x%08x, NR_SRCH_PARAMETER=0x%08x, NR_BUF_LENGTH.reg=0x%08x
Line 4816: ###[NR_SRCH_DEV][RegVal] NR_PSS_CTRL=0x%08x, NR_PSS_PHASEANGLE=0x%08x, NR_PSS_PWRTHR=0x%08x, NR_PSS_RSSI_CAL=0x%08x, NR_SSS_CTRL=0x%08x, NR_CE_INOUTSCALE=0x%08x
Line 4820: ###[NR_SRCH_DEV][RegVal] RXF_SYNC_4G=0x%08x, RXF_SYNC_FREQ_VALUE=0x%08x
Line 4829: ###[NR_SRCH_DEV][RegVal] NR_SSS_CTRL=0x%08x, NR_SSS_PWRTHR.reg=0x%08x, NR_SSS_PWRTHR.regFLGx[0].reg=0x%08x, NR_SSS_PWRTHR.regFLGx[1].reg=0x%08x
Line 4871: ###[NR_SRCH_DEV][m_SrchrSwDb] srch_mem_ctrl(Class=0x%x,Reg=0x%x), PssIntCnt_mine(%06d,%06d), SssIntCnt_mine(%06d,%06d)
Line 4016: ###[NR_SRCH_PROC] Fix the AGC gain: PRx(%d => %d), DRx(%d => %d)...
Line 4354: ###[NR_SRCH_DEV] Compare SSS Res for iIntr1=%d and iIntr2=%d
Line 4363: ###[NR_SRCH_DEV] [ERR] Diff in PathRes[%d][%d][%d].ENG: %d != %d
Line 4368: ###[NR_SRCH_DEV] [ERR] Diff in PathRes[%d][%d][%d].SID: %d != %d
Line 4373: ###[NR_SRCH_DEV] [ERR] Diff in PathRes[%d][%d][%d].AFC_VAL_Q: %d != %d
Line 4378: ###[NR_SRCH_DEV] [ERR] Diff in PathRes[%d][%d][%d].AFC_VAL_I: %d != %d
Line 4383: ###[NR_SRCH_DEV] [ERR] Diff in PathRes[%d][%d][%d].RX0_PWR_DB: %d != %d
Line 4388: ###[NR_SRCH_DEV] [ERR] Diff in PathRes[%d][%d][%d].RX1_PWR_DB: %d != %d
Line 4307: ###[NR_SRCH_DEV][ERR] Not supported srchCmdType=%d in HALSRCH_5G_initTargetMem()...
Line 4513: ###[NR_SRCH_DEV] handleAddiPcid[%d]: CellId=%4d, Eng=%4d, Pos=%8d, iRxBeam=0x%2x, AgcGain=%06d
Line 4519: ###[NR_SRCH_DEV][ERR] Not supported cmd(%d) in handleAddiPcid.
