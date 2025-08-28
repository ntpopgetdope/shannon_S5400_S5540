Line 127: L1cSrchrNrBlkSrch::Connect()
Line 157: ##[NR_SRCH] %s() for the requested SrchType=%d
Line 191: ##[NR_SRCH] Srch is in idle... Let's move on...
Line 209: No pending cnf for SrchType= %d...
Line 227: ##[NR_SRCH] SRCHCTRLR->HAL@%s(SrchType= %d, Band=%d, Arfcn=%d, Scs=%d)
Line 292: ##[NR_SRCH] SRCHCTRLR->HAL@%s
Line 313: ##[NR_SRCH][WARNING] We would not stop srchHW since it is not triggered in this domain.
Line 324: ##[NR_SRCH] Send_RXF_CONFIG_NR_CMD for stopping RSSI
Line 348: ##[NR_SRCH] SRCHCTRLR->HAL@%s for OngoingSrchType=%d, ctrlr_state(%d)
Line 393: No pending cnf for SrchType= %d...
Line 414: ##[NR_SRCH] HAL->SRCHCTRLR@%s
Line 430: ##[NR_SRCH][ERR] Not supported SrchType(%d) in NrFreqSetCnfCb().
Line 451: ##[NR_SRCH] SRCHCTRLR->HAL@%s(SrchType=%d)
Line 491: ##[NR_SRCH][FH][ERR] FreqInfo Error: Freq4Dmxr=%d, SrchAutoDb->Dcxo.Info.FreqCenter=%d
Line 495: ##[NR_SRCH] DmxrFreqAfc(%d)
Line 513: ##[NR_SRCH] SRCHCTRLR->HAL@%s(SrchType=%d)
Line 523: ##[NR_SRCH][FS] Need to release path: band/mu:%d/%d => %d/%d
Line 551: ##[NR_SRCH][FH][ERR] FreqInfo Error: Freq4Dmxr=%d, SrchAutoDb->Dcxo.Info.FreqCenter=%d
Line 555: ##[NR_SRCH] DmxrFreqAfc(%d)
Line 573: ##[NR_SRCH] SRCHCTRLR->HAL@%s(SrchType=%d)
Line 612: ##[NR_SRCH] HAL->SRCHCTRLR@%s
Line 631: ##[NR_SRCH][ERR] Not supported SrchType(%d) in NrFreqSetCnfCb().
Line 652: ##[NR_SRCH] SRCHCTRLR->HAL@%s
Line 734: ##[NR_SRCH] m_InitSrchIndex= %d out of %d. [RETRY] Prepared for m_RfPathIdx=%d
Line 802: ##[NR_SRCH] m_InitSrchIndex= %d out of %d. [RETRY] Prepared for m_RfPathIdx=%d
Line 886: ##[NR_SRCH] HAL->SRCHCTRLR@%s
Line 894: ##[NR_SRCH][WARNING] Mismatch in L1Mode(%d) and HalMode(%d)
Line 912: ##[NR_SRCH][NOTE] srchCmdType: %d in L1C and %d in HAL
Line 944: ##[NR_SRCH][RETRY] Retrying for m_RfPathIdx=%d: bestSssEng=%d, %d times for now, and %d times for all
Line 949: ##[NR_SRCH][RETRY] No need to retry for m_RfPathIdx=%d: bestSssEng=%d, %d times for now, and %d times for all
Line 991: ##[NR_SRCH] ->> send L1C_L1C_SRCHRCTRLR_FREQ_SCAN_CNF
Line 1056: ##[SRCH_DEBUG] Dump starts for iModule=%d
Line 1087: ##[NR_SRCH][FH][CNF] FixedHypo(%d): Xo=%d
Line 1110: ##[NR_SRCH][FH] SrchrNr::Rank_%d::i_aPpmHypo=%d, XoOffsetRes=%d
Line 1132: ##[NR_SRCH] m_InitSrchIndex= %d out of %d
Line 1258: ##[NR_SRCH] RAT MODE ERROR in NrSearchScdCnfCb
Line 1312: ##[NR_SRCH] L1cSrchrNrBlkSrch::GetLatestRssiScanRes(RssiScan)::VaildSubBandIndex=%d, VaildRssiPwr=%d, IsLteSubBand=%d
Line 1365: ##peg[NR_SRCH] L1cSrchrNrBlkSrch::GetLatestRssiScanRes(RssiScan)::VaildSubBandIndex=%d, VaildRssiPwr=%d
Line 1415: ##[NR_SRCH] L1cSrchrNrBlkSrch::GetLatestRssiScanRes(RssiScan)::ScanState=%d, NumBand=%d, iCurrNode=%d, iCurrSubBand=%d, NumElem=%d, LastSweptBandId=%d, FreqScanState=%d
Line 1420: ##[NR_SRCH] L1cSrchrNrBlkSrch::GetLatestRssiScanRes(RssiScan)::Valid::Band=%d, Completed=%d, lastSweptInx=%d, NumValidRange=%d, Scs=%d
Line 1425: ##peg[NR_SRCH] L1cSrchrNrBlkSrch::GetLatestRssiScanRes(RssiScan)::Valid::Band=%d, Completed=%d, lastSweptInx=%d, NumValidRange=%d, Scs=%d
Line 1467: ##[NR_SRCH] L1cSrchrNrBlkSrch::GetLatestFreqScanRes(FreqScan)::No arfcn is swept
Line 1493: ##[NR_SRCH] L1cSrchrNrBlkSrch::GetLatestFreqScanRes(FreqScan)::#Total=%d, #Searched=%d, #Valid=%d: Started from %d
Line 1498: ##[NR_SRCH] L1cSrchrNrBlkSrch::GetLatestFreqScanRes(FreqScan)::Best::Arfcn=%d, Eng=%d, CellId=%d
Line 1503: ##[NR_SRCH] L1cSrchrNrBlkSrch::GetLatestFreqScanRes(FreqScan)::Inx=%d::Arfcn=%d, Eng=%d, CellId=%d
Line 1582: ##[NR_SRCH] L1cSrchrNrBlkSrch::MinValidPosDiff=%d
Line 1674: ##[NR_SRCH][RBS] Init::Final::Best iRfModule=%d (Max=%d), Best iRxBeam=0x%x, Composite=0x%x
Line 1700: ##[NR_SRCH][RBS] Init::Final::Best iRfModule=%d (Max=%d), Best iRxBeam=0x%x, Composite=0x%x
Line 1712: ##[NR_SRCH] GetSrchRes() Num candi %d from the found %d cells: MaxEng=%d, nSxP45=%09d, AgcGain=%06d, SrchThresh=%d, arfcn=%d
Line 1713: ##[NR_SRCH][RETRY] %d times for now, and %d times for all
Line 1720: ##[NR_SRCH] L1cSrchrNrBlkSrch::GetSrchRes() Not supported SrchType= %d
Line 1786: ##[NR_SRCH]DSIFP] %d: %u, %u, %u, %u
Line 1817: ##[NR_SRCH][RBS] Return iAccSrchRes=%d and resulting m_BitMap4AccSrchRes=%d.
Line 1825: ##[NR_SRCH][ERR] MeasSearch Error (%d)
Line 1858: ##[NR_SRCH][RBS] mSrch::Final::Best iRfModule=%d (Max=%d), Best iRxBeam=0x%x, Composite=0x%x
Line 1866: ##[NR_SRCH] GetSrchMeasRes() Num candi %d from the found %d cells: MaxEng=%d, nSxP45=%09d, AgcGain=%06d, SrchThresh=%d, arfcn=%d
Line 1867: ##[NR_SRCH][RETRY] %d times for now, and %d times for all
Line 1940: ##[NR_SRCH][ERR] L1cSrchrNrBlkSrch::SwitchRfModule() - Unknown SwitchType=%d
Line 1981: ##[NR_SRCH] ->> send L1C_L1C_SRCHRCTRLR_FREQ_SCAN_CNF(RS)
Line 2000: ##[NR_SRCH] need to check for every %d subBands: IsPeerStackReg(%d), iCurrSubBand(%d), numSubBands/toGo=%06d
Line 2038: ##[NR_SRCH] %s(%d)
Line 2091: ##[NR_SRCH][FH] The %d-th step is not supported in FreqHypoScanHandler().
Line 2137: ##[NR_SRCH] SrchrNr::GetSrchRes(FreqScan)::nValid5Inx5=%010d, Arfcn=%09d, Eng=%04d, CellId=%04d, i_aPpmHypo=%d
Line 2170: ##[NR_SRCH][FH] SrchrNr::iFreq=%2d, Arfcn=%d, Freq=%d
Line 2179: ##[NR_SRCH][FH] SrchrNr::iHypo=%2d: Xo=%10d, FH=%10d, Dmixer=%10d, freq=%d
Line 2210: ##[NR_SRCH][FH][CNF] FixedHypo(%d): Xo=%d
Line 2240: ##[NR_SRCH][FH] SrchrNr::Rank_%d::i_aPpmHypo=%d, Eng=%d, CellId=%d, XoOffsetRes=%d
Line 2256: ##[NR_SRCH][FH] SrchrNr::Best::iHypo=%2d: Xo=%10d, FH=%10d, Dmixer=%10d
Line 2288: ##[NR_SRCH] %s:: SRCH TYPE ERROR (%d)!!!
Line 2308: ##[NR_SRCH] %s(), SrchrNrTimer_Sync is expired @ SrchMode=%d...
Line 2331: ##[NR_SRCH] %s()...
Line 2370: ##[NR_SRCH] Call EventEndHandler when num_of_srch_cfg_cell is 0
Line 2374: ##[NR_SRCH] num_of_srch_cfg_cell in L1C_SRCH is 0
Line 2400: ##[NR_SRCH] %s()
Line 2425: ##[NR_SRCH] ArfcnDiffScan::m_InitSrchIndex= %d out of %d, ArfcnDiffScan::FiltCenter=%d, ScanCenter=%d, Limit=%d, Step=%d, Now=%d
Line 2443: ##[NR_SRCH] ArfcnDiffScan::m_InitSrchIndex= %d out of %d, m_ArfcnDiff(Step,Now)=(%d, %d)
Line 2490: ##[NR_SRCH] ArfcnDiffScan@FiltCenter=%d::Result::Ranking=%d, Arfcn= %d (Rem=%d), Eng= %d, CellId= %d
Line 2495: ##[NR_SRCH] ArfcnDiffScan@FiltCenter=%d::BestResult::Arfcn= %d (Rem=%d), Eng= %d, CellId= %d
Line 2522: ##[NR_SRCH][RBS] Get iAccSrchRes for MeasMode=%d, ObjectId=%d, RbsType= %d, BitMap=0x%x
Line 2541: ##[NR_SRCH][RBS][ERR] No available iAccSrchRes for MeasMode=%d, ObjectId=%d and BitMap=0x%x.  Entire info is as follows:
Line 2545: ##[NR_SRCH][RBS][ERR] m_AccSrchRes[%d]: MeasMode=%d, ObjectId= %d
Line 2571: ##[NR_SRCH][RBS] The iAccSrchRes=%d is pre-existing one for ObjectId=%d.
Line 2632: ##[NR_SRCH][RBS][ERR] No existing iAccSrchRes for MeasMode=%d and ObjectId=%d. Entire info is as follows:
Line 2636: ##[NR_SRCH][RBS][ERR] m_AccSrchRes[%d]: MeasMode=%d, ObjectId= %d
Line 2644: ##[NR_SRCH][RBS] Not supported RbsType=%d
Line 2648: ##[NR_SRCH][RBS] The resulting iAccSrchRes=%d and m_BitMap4AccSrchRes=%d.
Line 2678: ##[NR_SRCH] L1cSrchrNrBlkSrch::EventSchedHandler(EvSchedType=%d, CurrEvState=%d)
Line 2698: ##[NR_SRCH][ERR] L1cSrchrNrBlkSrch::EventSchedHandler(): Unexpected EvSchedType(%d)
Line 2719: ##[NR_SRCH] %s()
Line 2790: ##[NR_SRCH][RS] Not enough time(%d ms): iCurrSubBand=%d, numSubBandsToScan=%d @ band=%d
Line 2815: ##[NR_SRCH][RS] arfcn: Start=%d, End=%d, Size/toGo=%06d, RemHoldTime(0:noBplmn)=%d(ms) @ band=%d, mu=%d, iCurrSubBand= %d
Line 2900: ##[NR_SRCH][FH] FixedHypo: Xo=%d, Freq=%d: %d out of %d
Line 2910: ##[NR_SRCH][FH][TFH] resumeType=%d, everConn=%d
Line 2911: ##[NR_SRCH][FH] HypoSrch: arfcn=%d
Line 2926: ##[NR_SRCH] iPeriod = %d
Line 2937: ##[NR_SRCH] SetMeasSrchReqInitInfo: measMode=%d, ueState=%d
Line 2948: ##[NR_SRCH] measMode is hooked from %d to %d.
Line 2972: ##[NR_SRCH][WARNING] Why RbsType=%d in FR1? Set to NO_RXBEAM_SWEEP by force.
Line 3032: ##[NR_SRCH] [ERR] Wrong SmtcOffset %d  => Set to zero by force
Line 3144: ##[NR_SRCH] [ERR] Wrong SmtcOffset %d  => Set to zero by force
Line 3173: ##[NR_SRCH][ERR] Parm mismatch: No SMTC is given for L2N gap
Line 3213: ##[NR_SRCH] [PATH_CNF_INFO][REL] num_of_srch_cfg_cell(%d), num_of_rel_cell(%d), needToEndEvent(%d)
Line 3218: ##[NR_SRCH] [PATH_CNF_INFO][REL] Check out the release result: num_of_srch_cfg_cell(%d), num_of_rel_cell(%d), needToEndEvent(%d)
Line 3235: ##[NR_SRCH] Send PathConfigCnf::Release @ NR_SRCHTYPE_NONE with num_of_srch_cfg_cell=%d and cell_info_idx=%d
Line 3239: ##[NR_SRCH] Ignore PathConfigCnf @ NR_SRCHTYPE_NONE: num_of_srch_cfg_cell[%d]
Line 3254: ##[NR_SRCH] [PATH_CNF_INFO][CFG] cell_info_idx(%d), req_scell_idx(0x%x), req_type(%d), num_of_srch_cfg_cell(%d)
Line 3259: ##[NR_SRCH] [PATH_CNF_INFO] rx_path_result(%d), alloc_rx_path(%d), alloc_demod_cc(%d), alloc_bw(%d), alloc_freq(%d)
Line 3264: ##[NR_SRCH] PATH_CONFIG_CNF:::: srch_type(%d), num_of_srch_cfg_cell(%d), num_of_cfg_cell(%d) num_of_rel_cell(%d), path_type(%d)
Line 3293: ##[NR_SRCH] DmxrFreqAfc=%d at freq=%d
Line 3297: ##[NR_SRCH] GapInfoFromScc %d @ arfcn=%d
Line 3328: ##[NR_SRCH][FH] XoOffset=%d, DmixerVal=%d, FreqCenter=%d, MaxXoRangePpm=%d
Line 3347: ##[NR_SRCH][FH] XoOffset=%d, DmixerVal=%d, FreqCenter=%d, MaxXoRangePpm=%d
Line 3401: ##[NR_SRCH][ERR] Why here? Res=%d, path_type=%d
Line 3432: ##[NR_SRCH] [PATH_CNF_INFO][REL] num_of_srch_cfg_cell(%d), num_of_rel_cell(%d)
Line 3437: ##[NR_SRCH] [PATH_CNF_INFO][REL] Check out the release result: num_of_srch_cfg_cell(%d), num_of_rel_cell(%d)
Line 3448: ##[NR_SRCH] Send PathConfigCnf::Release @ NR_SRCHTYPE_NONE with num_of_srch_cfg_cell=%d and cell_info_idx=%d
Line 3452: ##[NR_SRCH] Ignore PathConfigCnf @ NR_SRCHTYPE_NONE: num_of_srch_cfg_cell[%d]
Line 3467: ##[NR_SRCH] [PATH_CNF_INFO][CFG] cell_info_idx(%d), req_scell_idx(0x%x), req_type(%d), num_of_srch_cfg_cell(%d)
Line 3472: ##[NR_SRCH] [PATH_CNF_INFO] rx_path_result(%d), alloc_rx_path(%d), alloc_demod_cc(%d), alloc_bw(%d), alloc_freq(%d)
Line 3477: ##[NR_SRCH] PATH_CONFIG_CNF:::: srch_type(%d), num_of_srch_cfg_cell(%d), num_of_cfg_cell(%d) num_of_rel_cell(%d), path_type(%d)
Line 3492: ##[NR_SRCH] DmxrFreqAfc=%d at freq=%d
Line 3496: ##[NR_SRCH] GapInfoFromScc %d @ arfcn=%d
Line 3526: ##[NR_SRCH][SetForRunningHold] IsGap=%d
Line 3651: ##[NR_SRCH][FS] Not supported fsNodeType(%d)
Line 3720: ##[NR_SRCH] num_of_srch_cfg_cell in L1C_SRCH is 0
Line 3724: ##[NR_SRCH][ERR] Not supported type(%d)
Line 3749: ##[NR_SRCH][RSSI][DR] iCurrNode=%d, band=%d, isException=%d, rsmDrRes=%d, GetNrNrMode=%d, DcResumeType=%d, scanType=%d is not support setting band
Line 3764: ##[NR_SRCH] ->> send L1C_L1C_SRCHRCTRLR_FREQ_SCAN_CNF(RS)
Line 3818: ##[NR_SRCH][DR] m_FreqScanIndex=%d, band=%d NOT_SUPPORT 
Line 3871: ##[NR_SRCH] %s()::m_PathIdx=%d
