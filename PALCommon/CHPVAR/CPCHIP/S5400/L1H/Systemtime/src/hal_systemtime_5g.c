Line 311: ###[NR_SYSTIME_DEV] InitSystemTime: rtgCounter %d, m_GenCounter %d, initRtgOffset %d, m_InitRtgCompOffset %d, fr1On|fr2On(0x%x)
Line 354: ###[NR_SYSTIME_DEV] InitRfdSystemTime
Line 498: ###[NR_SYSTIME_DEV] SetSystemTimeInfo: (RxPath:%d) is out of range
Line 595: ###[NR_SYSTIME_DEV] %s(RfPath:%d) is out of range
Line 602: ###[NR_SYSTIME_DEV] %s abnormal bw value[%d]
Line 612: ###[NR_SYSTIME_DEV] SetSystemTimeInfo(RxPath:%d, RfPath:%d) : sysInfo(%08x -> %08x)
Line 632: ###[NR_SYSTIME_DEV] GetSystemTimeInfo(RTG:%d) is out of range
Line 653: ###[NR_SYSTIME_DEV] %s(bb_rtg:%d) is out of range
Line 671: ###[NR_SYSTIME_DEV] %s : bb_rtg(%d), sysInfo(0%08x), dl_bw(%d), cp_type(%d), duplex_mode(%d), numerology(%d)
Line 717: ###[NR_SYSTIME_DEV] SetRtgLoad for GTG (RTG%d): RFD(%d) offset(%d)
Line 731: ###[NR_SYSTIME_DEV] SetRtgLoad(RTG:%d) is out of range
Line 808: ###[NR_SYSTIME_DEV] SetRtgLoad(RTG%d): RTG(%x %x) diff(%d) bbRtg 0x%x, rfd 0x%x
Line 863: ###[NR_SYSTIME_DEV] SetRtgLoad(RTG%d): RFD(%d) RTG(%x %x) diff(%d) bbRtg 0x%x, rfdRtg 0x%x
Line 869: ###[NR_SYSTIME_DEV] SetRtgLoad(RTG%d): RFD(%d) offset(%d)
Line 893: ###[NR_SYSTIME_DEV] ConfigRtg(RTG:%d) is out of range
Line 923: ###[NR_SYSTIME_DEV] ConfigRtg(RTG:%d) is out of range
Line 946: ###[NR_SYSTIME_DEV] MarSync failed!!! cnt(%d), rtgCounter : 0x%x, rfmRtgCounter : 0x%x, rtgDiff : %d
Line 949: ###[NR_SYSTIME_DEV] rtgCounter : 0x%x, rfmRtgCounter : 0x%x, m_RfmTtiDiff : 0x%x
Line 956: ###[NR_SYSTIME_DEV] rtgValue : %d, timeOffset : %d
Line 991: ###[NR_SYSTIME_DEV] ConfigRtg#1(RTG%d) : rtgCounter(0x%x), genCounter(0x%x), generalSnap(0x%x), sfn(%d) timeOffset(%d)
Line 997: ###[NR_SYSTIME_DEV] ConfigRtg#2: offset(0x%x), copy(%d), bw(%d), diff(0x%x), rtg(0x%x->0x%x), period(%d)
Line 2955: ###[NR_SYSTIME_DEV] SetRfmMarSync: MARSYNC_CONFIG0(0x%x), cnt(%d)
Line 2971: ###[NR_SYSTIME_DEV] SetRfmMarSync: prevSfn(%d), curSfn(%d)
Line 3020: ###[NR_SYSTIME_DEV] GetRfmRtgCounter: failed!!! rfmRtg(%d), rtgCounter(%d)
Line 1174: ###[NR_SYSTIME_DEV] AlignRtg(RTG:%d, SRC:%d) is out of range
Line 1228: ###[NR_SYSTIME_DEV] AlignRtg(rfdRTG:%d, rfdSRC:%d) is out of range
Line 1235: ###[NR_SYSTIME_DEV] AlignRtg: BB(%d <- %d), RFD(%d <- %d)
Line 1256: ###[NR_SYSTIME_DEV] AlignRtg: BB(%d <- %d), RFD(%d <- %d)
Line 1276: ###[NR_SYSTIME_DEV] CopyRfdRtg(tar:%d, src:%d) is out of range
Line 1348: ###[NR_SYSTIME_DEV] CopyRfdRtg: (%d <- %d), systemInfo 0x%x
Line 1549: ###[NR_SYSTIME_DEV] GetRtgCounter(RTG:%d) is out of range
Line 1598: ###[NR_SYSTIME_DEV] GetGenCounter(RTG:%d) is out of range
Line 1604: ###[NR_SYSTIME_DEV] GetGenCounter(RTG:%d) : genCounter(%08x), latch(%d)
Line 1672: ###[NR_SYSTIME_DEV] EnableSystemTimeIntr(idx:%d) is out of range
Line 1676: ###[NR_SYSTIME_DEV] EnableSystemTimeIntr(idx:%d): mode(0x%x), time(0x%x)
Line 1702: ###[NR_SYSTIME_DEV] EnableSystemTimeIntr(idx:%d) is out of range
Line 1713: ###[NR_SYSTIME_DEV] EnableSystemTimeIntr(idx:%d) is out of range
Line 1741: ###[NR_SYSTIME_DEV] HALSYST_5G_CheckIntrStatus(idx:%d): int_cfg(0x%x), int_time(0x%x), slot_sel(0x%x), int_status(0x%x)
Line 1745: ###[NR_SYSTIME_DEV] HALSYST_5G_CheckIntrStatus(idx:%d) is out of range
Line 1944: ###[NR_SYSTIME_DEV] SetGapMode(idx:%d) is out of range
Line 2049: ###[NR_SYSTIME_DEV]  SetGapMode(path: %d): mode(%d), bw(%d), length(%d), sfn_tti(%d), offset(%d,%d)
Line 2916: ###[NR_SYSTIME_DEV] SetGapMode(path: %d): (0x%x -> 0x%x)
Line 2101: ###[NR_SYSTIME_DEV] SetUlSystemInfo(TX:%d) : bw(%d) , cpType(%d)
Line 2117: ###[NR_SYSTIME_DEV] SetSloDelay(rtg:%d) : invalid targBw(%d)
Line 2123: ###[NR_SYSTIME_DEV] SetSloDelay(rtg:%d) : prevBw(%d), targBw(%d), delay(%d)
Line 2142: ###[NR_SYSTIME_DEV] SetPathRxDelay(rtg:%d) : delay(%d)
Line 1380: ###[NR_SYSTIME_DEV] SetSfn(RTG:%d) is out of range
Line 1394: ###[NR_SYSTIME_DEV] SetSfn(rfdRtg:%d) is out of range
Line 1396: ###[NR_SYSTIME_DEV] SetSfn(RTG:%d, rfdRtg:%d) , sfn(%d)
Line 378: ###[NR_SYSTIME_DEV] %s, rxPath(%d), dig_on(%d)
Line 398: ###[NR_SYSTIME_DEV] %s, rtg(%d) is out of range
Line 440: ###[NR_SYSTIME_DEV] %s, m_DlBw[rtg](%d), systemInfo.numerology(%d), latch_time(%d)
Line 448: ###[NR_SYSTIME_DEV] abnormal rf index, rf(%d), rtg(%d), mmrf(%d)
Line 459: ###[NR_SYSTIME_DEV] %s, agcLatchTime.reg(0x%08x)
Line 471: ###[NR_SYSTIME_DEV] %s, agcLatchTime.reg(0x%08x)
Line 475: ###[NR_SYSTIME_DEV] abnormal rf index, rf(%d), rtg(%d)
Line 478: ###[NR_SYSTIME_DEV] %s, rf(%d), rtg(%d)
Line 2213: ###[NR_SYSTIME_DEV] SetPathEnableDiv: dcr(%d), mxr(%d), rfdRtg(%d), rtg(%d), mode(%d)
Line 2265: ###[NR_SYSTIME_DEV] SetPathEnable: dcr(%d), mxr(%d), rfdRtg(%d), rtg(%d), mode(%d)
Line 1430: ###[NR_SYSTIME_DEV] GetSfnLoadValue(RTG:%d) is out of range
Line 2404: ###[NR_SYSTIME_DEV] %s(RxPath:%d) is out of range
Line 2423: ###[NR_SYSTIME_DEV] SetCaMode(BB_RTG%d): on_off(%d), time(%d), onTime(0x%x), offTime(0x%x), scs(%d)
Line 2466: ###[NR_SYSTIME_DEV] SetDrxMode: rxPath(%d), rfPath(%d), drxOnOff(%d)
Line 2348: ###[NR_SYSTIME_DEV] PrintRTG(BB%d, RFD%d): SFN(%d), RTG(BB: %x, RFD: %x), Diff(%d), rtgOffset(%d)
Line 1149: ###[NR_SYSTIME_DEV] GetLteRtgCounter(RTG:%d) is out of range
Line 1152: ###[NR_SYSTIME_DEV] GetLteRtgCounter(RTG%d: %d)
Line 1631: ###[NR_SYSTIME_DEV] GetLteNrRtgDiff: lteRtgOffset(rtg%d 0x%x) nrRtgOffset(rtg%d 0x%x) RtgDiff(%d)
Line 2501: ###[NR_SYSTIME_DEV] SetQuickSleepOnOff: rtg(%d) is out of range
Line 2543: ###[NR_SYSTIME_DEV] SetQuickSleepOnOff: rtg(%d), demod_cc(%d), on_off(%d), scs(%d)
Line 2597: ###[NR_SYSTIME_DEV] SetLteSystimeRfdClock: RFD_CLK_ON(0x%x)
Line 2623: ###[NR_SYSTIME_DEV] SetLteRfdTddMode: rf(%d), duplex(%d), RFD_CC0_SYSTEM_INFO(0x%x)
Line 2673: ###[ULDL_DEBUG] CHIP_ID=0x%x([24:15]=>0:Rxmode,1:Txmode), GLOBAL_CONF=0x%x
Line 2681: ###[ULDL_DEBUG] BB path enable(0x%x, 0x%x), RFD path enable(0x%x, 0x%x), TRXSW_PATH_SEL_NR(0x%x), TRX_CON_SEL(0x%x), TRXSW_OVERRIDE_MODE_NR(0x%x)
Line 2687: ###[ULDL_DEBUG] RFD_CC%d_ULDL_CFG_NR(0x%x), RFD_CC%d_ULDL_CFG_OV_NR(0x%x)
Line 2694: ###[ULDL_DEBUG] RFD_RF_TRXSW%d_ON_CFG(0x%x), RFD_RF_TRXSW%d_OFF_CFG(0x%x)
Line 2701: ###[ULDL_DEBUG] BB ULDL_CFG[%d](0x%x), ULDL_CFG_OV[%d](0x%x)
Line 2644: ###[NR_SYSTIME_DEV] GetUlDlConfig: Wrong rtg index(%d), return 0x80000000
Line 2649: ###[NR_SYSTIME_DEV] GetUlDlConfig: rtg(%d), value(0x%x)
Line 2782: ###[NR_SYSTIME_DEV] SetTrxModeToDl: rf_path(%d), rat(%d)
Line 2816: ###[NR_SYSTIME_DEV] SetDrxStartPos: rtg(%d), mode(%d), time(0x%x)
Line 2859: ###[NR_SYSTIME_DEV] CompenRtgForQs: rtg(%d), compOffset(%d), prevOffset(%d) -> curOffset(%d)
Line 2893: ###[NR_SYSTIME_DEV] SetIratConfigUmtsStartSignal: sfn(%d), subframe(%d), offset(%d), mode(%d)
