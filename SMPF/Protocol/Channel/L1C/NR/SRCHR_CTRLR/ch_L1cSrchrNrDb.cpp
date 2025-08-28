Line 95: ##[NR_SRCH] %d::AgcGainIdx[0] is adjusted from %d to %d due to power diff (%d) and gain diff (%d)
Line 111: ##[NR_SRCH] %d::AgcGainIdx[1] is adjusted from %d to %d due to power diff (%d) and gain diff (%d)
Line 123: ##[NR_SRCH][AdjustAgcGain]::Out of bound error case:: BW=%d, BW_MAX=%d
Line 141: ##[NR_SRCH] %d::AgcGainIdx[0] is adjusted from %d to %d due to power diff (%d), deltaGain(%d), upperBound(%d) and Diff4SrchPow(%d)
Line 155: ##[NR_SRCH] %d::AgcGainIdx[1] is adjusted from %d to %d due to power diff (%d), deltaGain(%d), upperBound(%d) and Diff4SrchPow(%d)
Line 487: ##[NR_SRCH] Cannot add more cells. Total=%d, CurrPcid=%d
Line 516: ##[NR_SRCH] Found SSB info: CellId=%04d, FoundSsbCnt=%d, maxPos=%d, minPos=%d, posDiff= %2d.%d ms
Line 521: ##[NR_SRCH] Found SSB info: maxPosCellId=%04d, minPosCellId=%04d,  maxPos=%d, minPos=%d, posDiff= %2d.%d ms
Line 526: ##[NR_SRCH] Found SSB info: CellId=%04d, FoundSsbCnt=%d
Line 543: ##[NR_SRCH] Not supported ProcFoundSsb type=%d
Line 642: ##[NR_SRCH][RBS] UpdateRfModuleInfo: From %d(0x%X) To %d(0x%X) out of MaxCnt=%d, SrchCnt=%d.
Line 648: ##[SRCH_DEBUG] Dump starts for iModule=%d
Line 694: ##[NR_SRCH][RS]::CalculateStartEndArfcn(RssiScan)::IVaildBand=%d, IVaildSubBand=%d, centerArfcn=%d, centerFreq=%d, startArfcn=%d, endArfcn=%d
Line 743: ##[NR_SRCH][RS]::GetRssiRes(RssiScan)::PwrDb[%d][%d] = %d, total_num=%d
Line 754: ##[NR_SRCH][RS]::GetRssiRes(RssiScan)::Sorting Noise PwrDb[%d][%d]=%d, total_num=%d, NumLowRssi=%d
Line 770: ##[NR_SRCH][RS]::Out of bound error case::NextPeakIdx=%d, NumPwrDb=%d, PeakIdx=%d, NumSlot4FiveMs=%d
Line 777: ##[NR_SRCH][RS]::GetRssiRes(RssiScan)::isCommonBand=%d, PeakRssi=%d, PeakIdx=%d, NumPeak=%d
Line 805: ##[NR_SRCH][RS]::GetRssiRes(RssiScan)::RssiThresh=%d, PeakRssi=%d, PeakToNoise=%d @ iCurrSubBand=%d, NumAnt(0:prx/1:drx/2:noneValid)=%d centerArfcn=%d, band=%d
Line 845: ##[NR_SRCH][FS]::ValidCells=> Eng=%d, PssEng=%d, Arfcn=%d, AfcValueI=%d, AgcGainIdx=%06d, CellId=%4d, FramePos=%d
Line 851: ##[NR_SRCH][FS]::ValidCells=> rawPwr=%d, HalfCorrRx0: I=%3d, Q=%3d, HalfCorrRx1: I=%3d, Q=%3d
Line 862: ##[NR_SRCH][FS]::Discarded=> Eng=%d, PssEng=%d, rawPwr=%d, Arfcn=%d, AfcValueI=%d, AgcGainIdx=%06d, CellId=%4d
Line 875: ##[NR_SRCH][FS]::ValidCellsPss=> Eng=%d, Arfcn=%d, rawPwr=%d, PwrDb=%06d, CellId=%4d, cellIdMatchedInPssSss=%d
Line 881: ##[NR_SRCH][FS]::ValidCellsPss=> HalfCorrRx0: I=%3d, Q=%3d, HalfCorrRx1: I=%3d, Q=%3d, FramePos=%d
Line 909: ##[NR_SRCH] L1cSrchrNrBlkSrch::GetSrchRes(FreqScan)::nValid5Inx5=%010d, Arfcn=%09d, Eng=%04d, AgcGainIdx=%06d, CellId=%04d, FramePos=%08d
Line 1008: ##[NR_SRCH] iSrch::NotInAddiPcid::#%02d=> CellId=%4d. Less than halThresh or too many AddiPcidRes.
Line 1015: ##[NR_SRCH] iSrch::NoNeed::#%02d=> Eng=%d, CellId=%4d, FramePos=%d. Already in SssRes.
Line 1054: ##[NR_SRCH] Init::Heg::NoMoreRoom in LatestSrchRes::cntCell=%d
Line 1070: ##[NR_SRCH] iSrch::AddiPcidResBased::#%02d=> Eng=%d, CellId=%4d, FramePos=%d
Line 1091: ##[NR_SRCH] Init::Heg::Duplicate::#%02d=> Eng=%d, PosDiff=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 1103: ##[NR_SRCH] Init::Heg::NoMore::#%02d=> Eng=%d, PosDiff=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 1122: ##[NR_SRCH] Init::Heg::ValidCells::#%02d=> Eng=%d, RawPwr=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 1133: ##[NR_SRCH] Init::Heg::NoTarget::#%02d=> Eng=%d, RawPwr=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 1144: ##[NR_SRCH] Init::Heg::Cnt=%d, iFirstLeg=%d, nAddiPcid=%d, cntInOrdList=%d, finalHegCellCnt=%d
Line 1174: ##[NR_SRCH] Init::Leg::NoMoreRoom in LatestSrchRes::t_cntCell=%d
Line 1198: ##[NR_SRCH] Init::Leg::Duplicate::#%02d=> Eng=%d, PosDiff=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 1210: ##[NR_SRCH] Init::Leg::NoMore::#%02d=> Eng=%d, PosDiff=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 1228: ##[NR_SRCH] Init::Leg::ValidCells::#%02d=> Eng=%d, RelFac=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 1240: ##[NR_SRCH] Init::Leg::NoTarget::#%02d=> Eng=%d, RelFac=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 1255: ##[NR_SRCH] Init::Leg::Discard::#%02d=> Eng=%d, AfcIVal=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 1329: ##[NR_SRCH] msSrch::NotInAddiPcid::#%02d=> CellId=%4d. Less than halThresh or too many AddiPcidRes.
Line 1336: ##[NR_SRCH] msSrch::NoNeed::#%02d=> Eng=%d, CellId=%4d, FramePos=%d. Already in SssRes.
Line 1392: ##[NR_SRCH] Init::Heg::NoMoreRoom in LatestSrchRes::cntCell=%d
Line 1410: ##[NR_SRCH] msSrch::AddiPcidResBased::#%02d=> Eng=%d, CellId=%4d, FramePos=%d
Line 1430: ##[NR_SRCH] msSrch::Duplicate::#%02d=> Eng=%d, PosDiff=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 1443: ##[NR_SRCH] msSrch::NoMore::#%02d=> Eng=%d, PosDiff=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 1465: ##[NR_SRCH] msSrch::ValidCells::#%02d=> Eng=%d, RawPwr=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 1484: ##[NR_SRCH] msSrch::Discard::#%02d=> Eng=%d, AfcIVal=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 1535: ##peg[NR_SRCH] msSrch::Changed::#%02d=> Eng=%d, RawPwr=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 1545: ##[NR_SRCH]msSrch::Peg::NoMoreRoom in LatestSrchRes::cntCell=%d
Line 1569: peg##[NR_SRCH] msSrch::Duplicate::#%02d=> Eng=%d, PosDiff=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 1583: ##[NR_SRCH][ERR] Why iValid==NO_CELL_ID?
Line 1606: peg##[NR_SRCH] msSrch::ValidCells::#%02d=> Eng=%d, RawPwr=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 1624: ##[NR_SRCH] msSrch::Peg::midLowEngCellCnt=%d, pureLowEngCellCnt=%d, doCnt=%d, finalThresh=%d
Line 1651: ##[NR_SRCH] msSrch::FirstCell::#%02d=> Eng=%d, arfcn=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 2040: ##[NR_SRCH][RBS] Init::Final Module[%d]::RawPwr=%3d, PssEng=%04d, SssEng=%04d, CellId=%04d, iRxBeam=0x%x, FrmPos=%d
Line 2050: ##[NR_SRCH][RBS] Init::Final Module[%d]::No SSB is found on iRxBeam=0x%x
Line 2073: ##[NR_SRCH][RBS] Init::Final Module[%d]::Best iRxBeam=0x%x
Line 2095: ##[NR_SRCH][RBS] Init::Final::Best_iRfModule_PssRes: %d
Line 2123: ##[NR_SRCH][RBS] Init::Final::Best module is replaced: From %d => %d
Line 2128: ##[NR_SRCH][RBS] Init::Final::[ERR] No srch result for the best RF module in PSS=%d. Best in SSS=%d.
Line 2133: ##[NR_SRCH][RBS] Init::Final:: Best module info is matched in PSS and SSS.
Line 2138: ##[NR_SRCH][RBS] Init::Final:: Unreliable SssEng=%d.
Line 2143: ##[NR_SRCH][RBS] Init::Final:: Nonpositive PssMetric.
Line 2148: ##[NR_SRCH][RBS] Init::Final:: No cell is found.
Line 2162: ##[NR_SRCH][RBS] Init::Final Module[%d]::Ref=%3d, PssEng=%04d, SssEng=%04d, CellId=%04d, iRxBeam=0x%x, FrmPos=%d
Line 2238: ##[NR_SRCH][RBS][FS] RMS: SweepType=%d, SwitchType=%d, iModule=%d, SrchCnt=%d, MaxCnt=%d, RxBeamType=%d
Line 2301: ##[NR_SRCH][SRCH_DEBUG] Enable dump at srch failure.
Line 2311: ##[NR_SRCH][RBS][INIT] RMS: SweepType=%d, SwitchType=%d, iModule=%d, SrchCnt=%d, MaxCnt=%d, RxBeamType=%d
Line 2348: ##[NR_SRCH][L2N][RBS] RMS: SweepType=%d, SwitchType=%d, iModule=%d, SrchCnt=%d, MaxCnt=%d, RxBeamType=%d
Line 2739: ##[NR_SRCH][RBS] Init::Final:: Keep the best.
Line 2747: ##[NR_SRCH][RBS] Init::Final::Best cell is replaced: From %d => %d
Line 2752: ##[NR_SRCH][RBS] Init::Final:: All cells with the non-positive rawPwr.
Line 2776: ##[NR_SRCH] measMode is restored from %d to %d
Line 2862: ##[NR_SRCH][ERR] Not supported typeArg=%d
Line 2893: ##[NR_SRCH] Init::List::Heg::Valid::#%02d=> Eng=%d, RawPwr=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 2903: ##[NR_SRCH] Init::List::Heg::Duplicate::#%02d=> Eng=%d, PosDiff=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 2913: ##[NR_SRCH] Init::List::Heg::NoMore::#%02d=> Eng=%d, PosDiff=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 2923: ##[NR_SRCH] Init::List::Leg::Valid::#%02d=> Eng=%d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 2933: ##[NR_SRCH] Init::List::Leg::Duplicate::#%02d=> Eng=%d, PosDiff=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 2943: ##[NR_SRCH] Init::List::Leg::NoMore::#%02d=> Eng=%d, PosDiff=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 2954: ##[NR_SRCH] List::mSrch::Valid::#%02d=> Eng=%d, RawPwr=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 2964: ##[NR_SRCH] List::mSrch::Duplicate::#%02d=> Eng=%d, PosDiff=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 2974: ##[NR_SRCH] List::mSrch::NoMore::#%02d=> Eng=%d, PosDiff=%3d, 1133MBP=%08d, 33AgcGain=%06d, CellId=%4d, FramePos=%d
Line 2977: ##[NR_SRCH][ERR] ShowType Error: %d
Line 2987: ##[NR_SRCH][FS][ERR] IslinearStepSize(%d) rInt.StartArfcn(%d)
Line 2993: ##[NR_SRCH][FS][ERR] IslinearStepSize(%d) IsBand_12_OR_70(%d), rInt.StartArfcn(%d<=20)
Line 2999: ##[NR_SRCH][FS][ERR] rInt.StartArfcn(%d) > rInt.EndArfcn(%d)
Line 3005: ##[NR_SRCH][FS][ERR] rInt.StartArfcn(%d) < rInt.EndArfcn(%d): rInt.StepArfcn(%d)
Line 3025: ##[NR_SRCH][INT][LIN] num=%d, arfcn[0]=%d, arfcn[%d]=%d, endArfcn=%d
Line 3045: ##[NR_SRCH][INT][N12orN70] num=%d, arfcn[0]=%d
Line 3053: ##[NR_SRCH][INT][NL] num=%d, arfcn[0]=%d, arfcn[1]=%d, arfcn[2]=%d
Line 3063: ##[NR_SRCH][INT][NL] num=%d, arfcn[0]=%d, arfcn[%d]=%d, endArfcn=%d
Line 3088: ##[NR_SRCH][RS] NumSubband=%d, subBandArfcn=%d, startFreq=%d, endFreq=%d, distFreq=%d, startSubBandFreq=%d, endSubBandFreq=%d
Line 3134: ##[NR_SRCH][RS] Band[%d].info:: Band=%d, StartArfcn=%d, EndArfcn=%d is exception case
Line 3169: ##[NR_SRCH][RS] Band[%d].info:: Band=%d is exception case
Line 3187: ##[NR_SRCH][RS] Band info:: Band=%d, startInx=%d, stepArfcn=%d, bw=%d, numBands=%d, numSubBands=%d, scanType=%d
Line 3235: ##[NR_SRCH][FH][ERR] Freq=%d
Line 3308: ##[NR_SRCH][FH] SrchrNr::iHypo=%2d: Xo=%10d, FH=%10d, Dmixer=%10d
Line 3316: ##[NR_SRCH][FH] SrchrNr::CreateRange::Given: XoOffset=%d, MaxXoRangePpm=%d, DmixerVal=%d, FreqCenter=%d
Line 3321: ##[NR_SRCH][FH] SrchrNr::CreateRange::Making: NeedRunFH=%d, N_aPpmHypo=%d, PpmStep=%d, PpmCorr=%d
Line 3365: ##[NR_SRCH][FS][FH]::ValidCells=> Eng=%d, PssEng=%d, Arfcn=%d, FH=%10d, AfcValueI=%d, AgcGainIdx=%06d, CellId=%4d
Line 3372: ##[NR_SRCH][FS][FH]::ValidCells=> rawPwr=%d, HalfCorrRx0: I=%3d, Q=%3d, HalfCorrRx1: I=%3d, Q=%3d, AfcValueQ=%d
Line 3384: ##[NR_SRCH][FS][FH]::Discarded=> Eng=%d, PssEng=%d, rawPwr=%d, Arfcn=%d, FH=%d, AfcValueI=%d, AgcGainIdx=%06d
Line 3397: ##[NR_SRCH][FS][FH]::ValidCellsPss=> Eng=%d, Arfcn=%d, rawPwr=%d, PwrDb=%06d, CellId=%4d, cellIdMatchedInPssSss=%d
Line 3403: ##[NR_SRCH][FS][FH]::ValidCellsPss=> HalfCorrRx0: I=%3d, Q=%3d, HalfCorrRx1: I=%3d, Q=%3d, FramePos=%d
Line 3428: ##[NR_SRCH][FH] SrchrNr::nValid5Inx5=%010d, Arfcn=%09d, FH %d, Eng=%04d, AgcGainIdx=%06d, CellId=%04d, FramePos=%08d
Line 3459: ##[NR_SRCH][IS][FH]::ValidCells=> Eng=%d, PssEng=%d, Arfcn=%d, FH=%10d, AgcGainIdx=%06d, CellId=%4d
Line 3467: ##[NR_SRCH][IS][FH]::ValidCells=> rawPwr=%d, HalfCorrRx0: I=%3d, Q=%3d, HalfCorrRx1: I=%3d, Q=%3d, AfcValue: I=%d, Q=%d
Line 3478: ##[NR_SRCH][IS][FH]::Discarded=> Eng=%d, PssEng=%d, Arfcn=%d, FH=%10d, AgcGainIdx=%06d, CellId=%4d
Line 3486: ##[NR_SRCH][IS][FH]::Discarded=> rawPwr=%d, HalfCorrRx0: I=%3d, Q=%3d, HalfCorrRx1: I=%3d, Q=%3d, AfcValue: I=%d, Q=%d
Line 3498: ##[NR_SRCH][IS][FH]::ValidCellsPss=> Eng=%d, Arfcn=%d, rawPwr=%d, PwrDb=%06d, CellId=%4d, cellIdMatchedInPssSss=%d
Line 3504: ##[NR_SRCH][IS][FH]::ValidCellsPss=> HalfCorrRx0: I=%3d, Q=%3d, HalfCorrRx1: I=%3d, Q=%3d, FramePos=%d
Line 3529: ##[NR_SRCH][IS][FH]::nValid5Inx5=%010d, Arfcn=%09d, FH %d, Eng=%04d, AgcGainIdx=%06d, CellId=%04d, FramePos=%08d
Line 3559: ##[NR_SRCH][ERR]%s:: UpdateType(%d)!!!
Line 3565: ##[NR_SRCH][FH] UpdateDcxoHwInfo(Type=%d)::NewXoOffset(%d), NewDmixerVal(%d)
Line 3592: ##[NR_SRCH][FH] SrchrNr::Arfcn=%d, Freq4Dmxr=%d, Dmixer=%d
Line 3667: ##[NR_SRCH][RBS][INIT] RMS: L-Type(%d), SrchCnt=%d, MaxCnt=%d, PlaneCnt=%d, RxBeamCnt=%d, RxBeamType=%d
Line 3802: ##[NR_SRCH][DM_METRIC][ERROR] Don't need to update these information. UeState(%d)
Line 3806: ##[NR_SRCH][DM_METRIC] IsSrchOver(%d), UeState(%d), domainType(%d), StartTime(%d), EndTime(%d), SrchTime(%d) Count(%d)
Line 3896: ##[NR_SRCH] %s() to SrchMode=%d
