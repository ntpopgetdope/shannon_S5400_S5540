Line 92: [NbPhyCommonDbTxState] m_State is changed %u -> %u
Line 103: [RX_ERROR] RegisterTxBoundary already exist m_State:%d / BoundType:%d
Line 123: [RX_ERROR] TX_IND was late / sysPos(tti/slot): %d/%d, targetPos(tti/slot): %d/%d
Line 135: [NbPhyCommonDbTxState] RegisterTxBoundary valid(TxSt/TxEnd/RachEnd/NpuschDone)(1/1/1/1) %04d
Line 147: [RX_ERROR] NbPhyCommonDbTxState mState:%d
Line 159: [RX_ERROR] NbPhyCommonDbTxState mState:%d
Line 172: [RX_ERROR] NbPhyCommonDbTxState m_RachFlag was not read
Line 226: [NbPhyRxNpdschDb] FindByJobID Success / jobID:%u / Address:0x%X
Line 231: [NbPhyRxNpdschDb] FindByJobID Fail / jobId:%u / Address:0x0000
Line 243: [NbPhyRxNpdschDb] PushFront / JobID:%d / Address:0x%X / TotalCnt:%d
Line 260: [NbPhyRxNpdschDb] Delete Success / Cnt:%d / SibIdx:%d / jobID:%u / Address:0x%X
Line 269: [NbPhyRxNpdschDb] Delete Fail / Cnt:%d / SibIdx:%d / jobID:0 / Address:0x0000
Line 285: [NbPhyRxNpdschDb] Clear Error / mNpdschInfoCnt:%d / deleteCnt:%d
Line 289: [NbPhyRxNpdschDb] Clear Success / mNpdschInfoCnt:%d / deleteCnt:%d
Line 413: [COMMON_DB] mTxParam:[0]%d, [1]%d, [2]%d, [3]%d, [4]%d, [5]%d, [6]%d, [7]%d, [8]%d
Line 415: [COMMON_DB] mRxParam:[0]%d, [1]%d, [2]%d, [3]%d, [4]%d, [5]%d, [6]%d, [7]%d, [8]%d
Line 416: [COMMON_DB] mLowSinrThresh %d, mSkyloR8FadFlag %d, mSkyloR8FadNval %d
Line 490: [RX_ERROR] CountUsableDlSubfrmNum run again and again over %d times!!, numDlSubfrm(%d)
Line 738: [COMMON_DB] UpdateFrameInfo [carrIdx: %d] [SubfrmBitmap[0]: 0x%08X] [SubfrmBitmap[1] 0x%08X] [dlSubfrmNum40ms: %d]
Line 761: [COMMON_DB] UpdateFrameInfo(ANCHOR_CARRIER)
Line 763:  |-> [Sib1SchedBitmap[0]: 0x%08X] [Sib1SchedBitmap[1] 0x%08X]
Line 765:  |-> [sib1DlFrameBitmap[0]: 0x%08X] [sib1DlFrameBitmap[1] 0x%08X]
Line 766:  |-> [dlSubfrmNum640ms %d]
Line 791: [COMMON_DB] Update40msDlBitmap / pSubfrmBitmap[0]:%X / pSubfrmBitmap[1]:%X
Line 839: st SFN: %d, st Subfrm %d, end SFN: %d, end Subfrm %d, diffPos %d 
Line 852: 640ms quotient: %d, diffPos %d, Num640ms %d, count %d, st SFN: %d, st Subfrm %d
Line 886: 40ms quotient: %d, diffPos %d, Num40ms %d, count %d, st SFN: %d, st Subfrm %d
Line 896: final count %d 
Line 947: NL1C_SchedProc_CalcTargetAbPos [InputAbPos SFN: %d] [InputAbPos Subframe %d] [dlSubfrmOffset: %d] [carrIdx: %d] [preOffset %d]
Line 974: NL1C_SchedProc_CalcTargetAbPos 640ms [calcAbPos SFN: %d] [calcAbPos Subframe %d] [dlSubfrmOffset %d]!
Line 1010: NL1C_SchedProc_CalcTargetAbPos 40ms [calcAbPos SFN: %d] [calcAbPos Subframe %d] [dlSubfrmOffset %d]!
Line 1027: NL1C_SchedProc_CalcTargetAbPos [calcAbPos SFN: %d] [calcAbPos Subframe %d] [dlSubfrmOffset %d]!
Line 1080: [RX_ERROR] FindNearestDl run again and again over %d times!!
Line 1328: [COMMON_DB] SIB1 DB
Line 1334: 	|-> [%d] SiPeriodicity:%d / SiTbs:%d / SiRepPattern:%d
Line 1376: SiToSibMap ERROR
Line 1403: [COMMON_DB] SIB1 DB / HsfnMsb(RRC):%d / Pmax:%d
Line 1405:   | SiWindowLen:%d / SiRadioFrameOfs:%d / NumSchedInfoList:%d
Line 1411: 	|-> [%d] SiPeriodicity:%d / SiTbs:%d / SiRepPattern:%d
Line 1415: [COMMON_DB] SIB1 DB mapping
Line 1418: 	|-> [%d] SiMappingVal:%d
Line 1421: [COMMON_DB] NumFreqBandInfo:%d
Line 1424: [%d].AdditionalPmax:%d
Line 1425: [%d].AdditionalSpectrumEmission:%d
Line 1427: FreqBandIndicator:%d
Line 1482: [NbPhyCommonDb][StoreSib2Info] NpdschNrsPower:%d
Line 1483: [DEBUG][NbPhyCommonDb][StoreSib2Info] AddSpectrumEmission:%d
Line 1528: [NbPhyCommonDb][StoreSib31Info] kOffset:%d, rx_sfn:%d, kMac:%d, duplicated:%d, sfn:%d, subframe:%d, ntaCommon:%d/%d/%d
Line 1574: [NbPhyCommonDb][StoreNprachInfoSib2] coverageLevel(%d), Rmax(%d), startSF(%d), offset(%d), nprachPeriod(%d), nprachStartTime(%d), nprachSubCarrierOffset(%d), nprachNumSubCarrier(%d), numRepetitionPerPreambleAttempt(%d), crTimer/raWindow(%d)
Line 1584: [NbPhyCommonDb][StoreNprachInfoSib2] nprachCpLen:(%d), numCoverageLevel(%d), InitReceivedTargetPower(%d), powerRampingStep(%d)
Line 1639: [NbPhyCommonDb][StoreEdtInfoSib2] coverageLevel(%d), Rmax(%d), startSF(%d), offset(%d), nprachPeriod(%d), nprachStartTime(%d), nprachSubCarrierOffset(%d), nprachNumSubCarrier(%d), numRepetitionPerPreambleAttempt(%d)
Line 1715: [NbPhyCommonDb][StoreNpuschParam] ANRep[Cfg/M4/Result][%d/%d/%d], nPrachCovLevel[%d], AllSymbols[Inc/Val][%d/%d], GHDisabled[Inc/Val][%d/%d]
Line 1733: [NbPhyCommonDb][StoreUlpcParam] p0ueNpusch[%d]
Line 1847: [COMMON_DB] StoreDlBitmapParam[DLBitmap][0]=0x%X,[1]=0x%X
Line 1922: [NbPhyCommonDb]StoreNpdcchParam mode(%d) Rmax:(%d) startSF(%d) offset(%d)
Line 1957: [NbPhyCommonDb]DciSubfrmRepNum(%d), m_R_TypeTotalCnt(%d) m_R_TypeArray[0/1/2/3]:(%d/%d/%d/%d), m_R_TypeArray[0/1/2/3]:(%d/%d/%d/%d)
Line 1971: [NbPhyCommonDb]ResetNpdcchRepetCount
Line 1983: [NbPhyCommonDb] CheckNpdcchRepeatR8Only m_R_TypeArray[NB_R8]:%d, SkyloR8FadNval:%d, m_R_TypeTotalCnt:%d, mSkyloNotR8Th:%d
Line 1998: [COMMON_DB] StorePhyConfigDedi
Line 2144: [COMMON_DB] StoreAsIdxInfo RxAntIdx:%d, TxAntIdx:%d
Line 2160: [COMMON_DB] StoreTxAntIdx TxAntIdx:%d
Line 2176: [COMMON_DB] StoreAitParam AitDisable:%d
Line 2247: [NbPhyCommonDb][StoreTaReportVal] taReportVal:%d, TaAcc:%d
Line 2624: [RX_ERROR] LoadNpdcchParam MTCH_PROC is not implemented yet
Line 2632: LoadNpdcchParam - [mode: %d] [maxRepeatNum: %d] [startSF: %d] [offset: %d]!
Line 2893: [COMMON_DB] BasicCellInfoUpdateReq / cell_id:%d / Rf_Freq:%d
Line 2920: [COMMON_DB] MibInfoUpdateReq Sfn_msb(0x%x), Hsfn_Lsb(0x%x), SchedInfoSIb1 (0x%x), SysInfoValueTag(0x%x), Ab_Enabled(0x%x), OperationMode(0x%x), spare(0x%x)
Line 3083: [COMMON_DB] RrcInfoUpdateReq cmd:%u / cd:%u / ndd:%u / nud:%u
Line 3725: [NbPhyCommonDb][StoreNtnSarReport] SarReport:%d
Line 3751: [NbPhyCommonDb][GetLinearValueNtn] GetLinearValue Input(dBm):%d, Output(Linear):%d
Line 3766: [NbPhyCommonDb][StoreDiffKoffset] DiffKoffset:%d
Line 3891: [NbPhyCommonDb][CalcMaxPwr] pMax:%d, powerClass:%d, mpr:%d, ampr:%d, conductOfs:%d, sarLimit:%d, sarMode:%d
Line 3905: [NbPhyCommonDb][NbIoT_Calc_Ampr][debug] band:%d, nsVal %d
Line 3953: SiToSibMap ERROR
Line 3969: [NbPhyCommonDb][UpdateTxPowerMetric] txPower[%d]
