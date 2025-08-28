Line 172: ##[NR_POS] ECID only: Early Resp Timer Started %d ms
Line 177: ##[NR_POS] Early Resp Timer Started (%d)secs
Line 185: ##[NR_POS] ECID only: Reporting Interval Timer Started %d ms
Line 190: ##[NR_POS] Reporting Interval Timer Started (%d)secs
Line 221: ##[NR_POS] No need to sedn Path-Release, no path cfg info in MEAS.  cfg_num(%d) CurrStatus(%d)
Line 258: ##[NR_POS] CheckGapOccasion: NextSlotOccasion(%d slots), ResPer(%d slots),  GapStartSlotn(%d), GapEndSlotn(%d), GapPossible(%d)
Line 295: ##[NR_POS] CheckPrsOccasion: current_sfn(%d), MeasStartSlotn(%d),  MeasEndSlotn(%d), NextScheduleSlotn(%d), DoScheduling(%d)
Line 398: ##[NR_POS] CheckForRefScheduling: RefNumPrsRes(%d), LastMeasuredSFN(%d), MeasStartSfn(%d), IsMeasured|IsRefScheduled(%02d)
Line 401: ##[NR_POS] CheckForRefScheduling: RecentMeasRefResIdxBm(0x%08X%08X), PrsResIdxBm(0x%08X%08X)
Line 442: ##[NR_POS] MeasSet1++: CellIdx(%d), SlotIdx(%d),  PrsDesc(0x%08X), RepIdx(%d)
Line 459: ##[NR_POS] MeasSet1 Occupied: MeasSet2++: CellIdx(%d), SlotIdx(%d),  PrsDesc(0x%08X), RepIdx(%d)
Line 479: ##[NR_POS] MeasSet2++: CellIdx(%d), SlotIdx(%d),  PrsDesc(0x%08X), RepIdx(%d)
Line 502: ##[NR_POS] RSTD CMD++: [MeasSet%d CellIdx(%d), SlotIdx(%d)] --> CMD [CellCnt(0), SlotIdx(0), StartSlotIdx(%d)]
Line 525: ##[NR_POS] RSTD CMD++: [MeasSet%d CellIdx(%d), SlotIdx(%d)] --> CMD [CellCnt(%d), SlotIdx(%d), StartSlotIdx(%d)]
Line 551: ##[NR_POS] RSTD CMD++: [MeasSet%d CellIdx(%d), SlotIdx(%d)] --> CMD [CellCnt(%d), SlotIdx(0), StartSlotIdx(%d)]
Line 638: ##[NR_POS] ConfigureRstdHalCmd()
Line 672: ##[NR_POS] CheckMeasScheduleTime: CandidateRep(%d), pResSetCfg->RepetConfiguredBm(%d), pResCfg->Recent_RepetMeasuredBm(%d)
Line 705: ##[NR_POS] CheckMeasScheduleTime: Arfcn(%d), CellId(%d), PrsId | ResSetId |ResId(%09d), MeasStartSlotn(%d), MeasEndSlotn(%d)
Line 707: ##[NR_POS] CheckMeasScheduleTime: Period (%d)slots, ResSlotOff_ref (%d)slots, ResSlotOff_startSfn (%d)slots
Line 726: ##[NR_POS] CheckMeasScheduleTime: ResSlotOff_startSfn(%d) RepIdx(%d) ResTimeGap(%d) period_slots(%d), ResSlotOff_rep(%d) NextSlotOccasion(%d)
Line 744: ##[NR_POS] Precompute next occasion: NextToNextSlotOccasion(%d), Old:NextScheduleSlotn(%d), New:NextScheduleSlotn(%d)
Line 750: ##[NR_POS] ResId(%d) Muted due to opt1: PrsResSetRepIdx(%d) MutingOpt1Bitmap(0x%x) MutingOpt1RepFactor(%d) Mute1Sz(%d)
Line 775: ##[NR_POS] Precompute next occasion: NextToNextSlotOccasion(%d), Old:NextScheduleSlotn(%d), New:NextScheduleSlotn(%d)
Line 786: ##[NR_POS] Precompute next occasion: MeasStartSlotn(%d), NextSlotOccasion(%d), NextScheduleSlotn(%d)
Line 799: ##[NR_POS] Precompute next occasion: NextToNextSlotOccasion(%d), Old:NextScheduleSlotn(%d), New:NextScheduleSlotn(%d)
Line 817: ##[NR_POS] GroupScheduledResources: FreqLayer(%d)
Line 845: ##[NR_POS] GroupScheduledResources: Step1: MandatoryReference
Line 869: ##[NR_POS] GroupScheduledResources: Step2: SpCell Non Reference Resources (0x%08X%08X)
Line 892: ##[NR_POS] GroupScheduledResources: Step3: N-TRPs (0x%08X%08X)
Line 943: ##[NR_POS] GroupScheduledResources: Step4: Non Scheduled Reference Resources (0x%08X%08X)
Line 978: ##[NR_POS] Skip PrsScheduler: modem_state(%d)
Line 1052: ##[NR_POS] PRSMeas Schedule! Element(0x%x), MeasMode(%d) PrsFrequency(%d) ScheduleSFN(%d) gapStatus(%d)
Line 1072: ##[NR_POS] MeasRequest: Mode(%d) Arfcn(%d)
Line 1107: ##[NR_POS] %s, Send: GAP_CONFIG Command to HAL, mode: %d
Line 1112: ##[NR_POS] GAP_CONFIG_CMD is running. GapStateBitMap(0x%X)
Line 1120: ##[NR_POS] CMD_RET_FAIL
Line 1148: ##[NR_POS] %s, GAP_CONFIG CallBack from HAL, configType(%d)
Line 1168: ##[NR_POS] StartMeasElem()
Line 1173: ##[NR_POS] GAP is already in use. Skip GAP measurement!!!
Line 1219: ##[NR_POS] CheckDrdsInterFCondn: Mode(%d) sim_status(%d) Result(%d)
Line 1263: ##[NR_POS] SendNrRstdCmd1()
Line 1282: ##[NR_POS] NrRstdCnfCb()
Line 1303: ##[NR_POS] NrRstdCnfCb : RSTD Schedule Fail
Line 1311: ##[NR_POS] NrRstdCnfCb : RSTD Fail
Line 1333: ##[NR_POS] UpdatePrsMeasResult()
Line 1341: ##[NR_POS] [ERR] NumMeasured(%d) > MAX_PRS_CELL_CONFIG(%d)
Line 1344: ========================Results @ L1C ===========================================
Line 1347: ##[NR_POS] MeasMode(%d), SchedRefResIdxBm(0x%08x%08x), NumMeasured(%d), PrsResIdxBm(0x%08x%08x)
Line 1351: ##[NR_POS] >CellCnt[%d] : PrsSlotValidBm(0x%x)
Line 1358: ##[NR_POS] >>>SlotCnt[%d] : RstdValid(%d), FinalFap(%d), ErrorResolution(%d), ErrorValue(%d), ErrorNumSample(%d)
Line 1360: ##[NR_POS] >>>			  : PeakValue(%d), MaxPeak(%d), tsDelta(%d), NumSamples(%d), Rstd(%d), Value(%d)
Line 1363: ##[NR_POS] >>>            : RsrpValid/RxTxValid(%d), RsrpRx0(%d), RsrpRx1(%d), RsrpRx2(%d), RsrpRx3(%d), RxTxTimeDiff(%d)
Line 1364: ##[NR_POS] >>>            : TimingQuality(%d), TimingQualityRes[0.1/1/10/30](%d)
Line 1368: ========================Results @ L1C ===========================================
Line 1431: ##[NR_POS] REF:DL PRSID[%d] PrsDesc(0x%x): PosMeasRequestedBm(0x%x) MeasuredBm(0x%x) RstdValid(%d) RsrpValid(%d) RxTxValid(%d)
Line 1522: ##[NR_POS] NonREF: DL PRSID[%d] PrsDesc(0x%x): PosMeasRequestedBm(0x%x) MeasuredBm(0x%x) RstdValid(%d) RsrpValid(%d) RxTxValid(%d)
Line 1619: ##[NR_POS] Ref FapResult: Arfcn(%d), CellId(%d), PrsId | ResSetId |ResId(%09d), RefFap(%d), MeasSfn(%d), MeasSlotn(%d)
Line 1752: ##[NR_POS] FindNearestReference: RefPrsResIdxBm(0x%08X%08X), SelectedRefIdx(%d)
Line 1794: ##[NR_POS] RxTxResult: Arfcn(%d), CellId(%d), PrsId | ResSetId |ResId(%09d), Fap(%d), Ta(%d), RxTxTimeDiff(%d)
Line 1836: ##[NR_POS] RstdResult: Arfcn(%d), CellId(%d), PrsId | ResSetId |ResId(%09d), Fap(%d), RefFap(%d), Rstd(%d)
Line 1994: ##[NR_POS] RsrpResult: Arfcn(%d), CellId(%d), PrsId | ResSetId |ResId(%09d), ReportingRsrp(%d)
Line 1996: ##[NR_POS] RsrpResult [0x%x]: %d %d %d %d
Line 2007: ##[NR_POS] CompleteCurrentCycle() TrpCfgBm (0x%08x%08x) Recent_TrpMeasBm (0x%08x%08x)
Line 2050: ##[NR_POS] SendReport()
Line 2064: ##[NR_POS] Continue reporting : ReportedCnt(%d) < RepAmount(%d)
Line 2239: ##[NR_POS] PRS Result[%d]: PrsId(%d), Arfcn(%d), PCI(%d), MeasSfn(%d), MeasSlotn(%d), PosMethod(0x%x)
Line 2244: ##[NR_POS] PRS Result    : Rsrp/rstd/RxTxvalid(%d), RsrpDb(%d), RsrpReporting(%d), Rstd(%d), RstdReporting(%d), RxTx(%d), RxTxReporting(%d)
Line 2246: ##[NR_POS] PRS Result    : TimingQualVal(%d), TimingQualResol(%d)
Line 2253: ##[NR_POS] Populate_Report : MeasuredElement(0x%x)
Line 2282: ##[NR_POS] Populate_Report: None Measured!	FreqLayer[%d] :TrpConfiguredBm(0x%x) != TrpMeasuredBm(0x%x)
Line 2288: ##[NR_POS] Populate_Report: Partial Measured!	FreqLayer[%d] :TrpConfiguredBm(0x%x) != TrpMeasuredBm(0x%x)
Line 2370: ##[NR_POS] Config error! EarlyRespTime(%d s) >= ReportInterval (%d s)
Line 2488: ##[NR_POS] ProcMeasFailure()
Line 2504: ##[NR_POS] CleanUpPosMeasure : CleanUpCause(0x%x), StopCause(0x%x)
Line 2554: ##[NR_POS] CleanUpPrsMeasure : CleanUpCause(%d), MeasMode(%d), CurrentStatus(0x%x)
Line 2636: ##[NR_POS] Abnormal Schedule Info!MeasList(%d)
Line 2656: ##[NR_POS] NextReportRequired(%d)
Line 2680: ##[NR_POS] ClearScheduleQueue: ListSize(%d)
Line 2688: ##[NR_POS] NextReportRequired(%d)
Line 2709: ##[NR_POS] FreeMeasInfoElem: (0x%x)
