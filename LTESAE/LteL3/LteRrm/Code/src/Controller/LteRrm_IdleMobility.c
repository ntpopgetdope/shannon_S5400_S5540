Line 187: LteRrmIdle_UpdateReselPriorityForAllFreq
Line 215: freq_timer(T320):%d
Line 239: LteRrmIdle_DeleteDedicatedPriority
Line 278: LteRrmIdle_AddToDePriorityList(earfcn:%d, freq_timer:%d)
Line 297: same earfcn(%d, %d) is already in the DePriorityList(%d)
Line 313: DePriorityList.num_freq:%d) >= LTERRM_DEPRIORITY_LIST_SIZE
Line 317: DePriorityList.num_freq:%d All(E:%d, N:%d)
Line 319: freq_timer(T325):%d
Line 326: Depriority Request Received while T325Tmr Running
Line 348: LteRrmIdle_DeleteDePriority
Line 385: LteRrmIdle_AddToMbmsPriorityList(earfcn:%d)
Line 393: same earfcn is already in the MbmsPriorityList
Line 408: MbmsPriorityList.num_freq:%d) >= LTERRM_MBMS_PRIORITY_LIST_SIZE
Line 411: MbmsPriorityList.num_freq:%d)
Line 432: LteRrmIdle_DeleteMbmsPriority(earfcn:%d)
Line 437: MbmsPriorityList.num_freq(%d) is zero
Line 444: MbmsPriorityList.num_freq(%d) is overflow
Line 473: mbms_priority:earfcn(%d), priority(%d)
Line 492: Init Mobility Controller
Line 499: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 502: LteRrm_AllocCellInfoBuf: TargetCell
Line 506: TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 727: ListSearchEnable disable(%d)
Line 731: BplmnMruList.listNum(%d)
Line 766: [%d] EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 789: MRU EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 811: Remove EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 828: [%d] EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 834: removeCnt(%d)
Line 872: New Detected Earfcn:%d (index:%d)
Line 914: New Detected Earfcn:%d (index:%d)
Line 922: New Detected Earfcn:%d (index:%d)
Line 967: Max PSCH Energy Detected, FreqScanEnergyLevel = %d
Line 977: energy_window_cnt = %d, FreqScanEnergyLevel = %d
Line 984: Remove Detected Earfcn:%d (index:%d)
Line 1030: Remove Detected Earfcn:%d (index:%d)
Line 1040: (DETECT)EARFCN: %d  (Max: %d, PeakRate: %d, PowVal: %d, max_sum_value:%d), EnergyLevel = %d, WindowCnt = %d
Line 1054: (DROP)EARFCN: %d  (Max: %d, PeakRate: %d, PowVal: %d, max_sum_value:%d) EnergyLevel = %d, WindowCnt = %d
Line 1063: Reset Energy window
Line 1089: ACC_2 Scan Result(%d)
Line 1104: (ACC_2 DETECT)EARFCN: %d, max_energy: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1125: [%d](ACC_2 DETECT)EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1150: Remove EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1167: [%d](ACC_2 DETECT)EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1181: Invalid gLteRrmDB_FreqScanState (%d)
Line 1247:  - skip the freq(%d) in prev SIB BW(%d) [%d, %]  
Line 1270: [RSSI SCAN RANGE %2d] %d in [%d, %d]
Line 1278: [RSSI SCAN RANGE OUT %2d] %d in [%d, %d] step(%d), Cnt(%d)
Line 1321: FreqScanState ERROR (%d)
Line 1327: FreqScan.Cnt ERROR (FreqScan.Cnt = %d)
Line 1335: LteRrmIdle_ProcFullFreqScanResult(Cnt:%d)
Line 1375: Remove EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1417: LteRrm_SendMsgToRrc(LTE_CPHY_FREQ_SCAN_CNF)
Line 1426: [%d] EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1466: LteRrmIdle_ProcOneFreqScanResult, PSS invalid, peak_rate : %d
Line 1490: Too short remain time (%d), Just wait and Try at next time
Line 1495: Enough remain time (%d), Try cell change now
Line 1499: Start LTERRM_SRCHMODE_BPLMN_SRCH(earfcn:%d)
Line 1505: LteRrm_AllocCellInfoBuf: TargetCell
Line 1509: TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 1564: Invalid Bplmn State(%d)
Line 1579: ERROR: Invalid LteRrm idleproc(%s)
Line 1601: ERROR: Unexpected IdleProc(%d) in LteRrmIdle_EvalCarrierPschEnergy
Line 1611: CheckRcvdPwr success (Psch_max_energy = %d, peak_rate = %d)
Line 1617: LteRrm_AllocCellInfoBuf: TargetCell
Line 1620:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 1651: CheckRcvdPwr failure (Psch_max_energy = %d, Peak_rate = %d)
Line 1676: MTM 8960 - RSRP measure start
Line 1689: [MTM] MtmDelayTimer <Timer Start !!> - FA_SEL Delay : 100 ms
Line 1702: CheckRcvdPwr success
Line 1707: LteRrm_AllocCellInfoBuf: TargetCell
Line 1710: TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 1732: LteRrmIdle_EvalCarrierRSSI - invalid IdleProc(%d)
Line 1750: LteRrmIdle_BackupBplmnState
Line 1770: LteRrmIdle_ReStoreBplmnState
Line 1789:  Matched (%d, %d) in CheckBandHistory(%d)
Line 1816:  New band(not-Matched) (%d)(%d) in CheckBandHistory(%d)
Line 1833: Check RSSI Band History =====
Line 1837:  %2d] band(%d)
Line 1908: Check RSSI Result =====
Line 1913:  %2d] start(%d) rssi(%d)
Line 1922: [DEBUG-REMOVE] %d in %d
Line 1948: [DEBUG-MOVE] %2d] %d, %d
Line 1984:  > Manual:%d, Smode:%d, InvMode:%d
Line 1990: Send LTE_CPHY_FREQ_SCAN_CNF (no band history for BlindSearchMode(%d))
Line 1999: abnormal(LTE_RRC_STORED_SCAN) BPLMN continue -> Stop
Line 2005: Send LTE_CPHY_FREQ_SCAN_CNF (NOT support blind scan)
Line 2011: Send LTE_CPHY_FREQ_SCAN_CNF (NOT support this frequency)
Line 2018: scantype(%d) BplmnMruList.listNum is 0
Line 2024: Invalid Scan mode (%d)
Line 2060: SetFreqScanReq - disabled RSSI scan (%d)
Line 2065: SetFreqScanReq - use default RSSI scan as %d
Line 2070: BPLMN RESTART!! (%d) - mode(%d)
Line 2085: abnormal(SavedBplmnTargetEarfcn == NULL) BPLMN continue -> new
Line 2113: BplmnMruList.listNum:%d, BplmnScanType:%d
Line 2127: CSG Freq Scan Mode : %d
Line 2131: Freq Scan Mode : %d
Line 2149:  [%2d] SetRssiScanResult(%d, %d)
Line 2237: Send LTE_CPHY_FREQ_SCAN_CNF (BPLMN disable)
Line 2254: BPLMN SCAN REQ, BplmnTargetEarfcn = %d
Line 2290: Send LTE_CPHY_FREQ_SCAN_CNF (BPLMN disable)
Line 2338: Spare timer already running, start MRU & FullBand Scan : FreqScanMode(%d)
Line 2350: Invalid Scan mode (%d)
Line 2403: Send LTE_CPHY_FREQ_SCAN_CNF (BPLMN disable)
Line 2420: BPLMN SCAN REQ, BplmnTargetEarfcn = %d
Line 2426: Spare timer already running, start full band scan: FreqScanMode(%d)
Line 2453: Receive LTE_CPHY_FREQ_SCAN_REQ Req (blind scan from %d to %d)(mode:%d, type:%d, MRUlist:%d) - NV(%d)
Line 2474: Send LTE_CPHY_FREQ_SCAN_CNF (Discrete Scan Failure)
Line 2484: Changed FreqScan mode from LTE_FPLMN_SCAN to LTE_FPLMN_SCAN_IRAT for discrete scan mode (%d+20ms)
Line 2512: LTERRM_INIT_STATE(from %s)
Line 2536: SET RSSI SCAN Info - Start(%d), End(%d), BW(%d, %d), OBW(%d)
Line 2605: Received EARFCN in CellSelReq [%d]
Line 2618: Added EARFCN in CellSelReq [%d]
Line 2624: MRU EARFCN could not be added to CellSelInfo, CellSelInfo is already full (%d)
Line 2696: total black cell num [%d]
Line 2705: LteRrmIdle_ProcCellSelectReqInIdle - List should have been removed via reset_forbidden_list when ANY CS
Line 2749: LteRrmIdle_ProcCellSelectReqInIdle - Unsuitable category(%d)
Line 2760: No freq list in CS REQ !!
Line 2817: ERROR: BPLMN scan is not avail in CONN
Line 2853: [OsloPatch] debug print for CellSelReq with Acceptable
Line 2866: ERROR: Invalid category(%d)
Line 2896: ENDC capa Freq : %d
Line 2900: ENDC capa Freq : %d - removed
Line 2915: Power On Cell Selection Mode On(init:%d, oos:%d, Endc:%d->%d, th:%d, %d, DropOn:%d)
Line 2951: ENDC capa Freq : %d, NumOfCells[%d]
Line 2962: ENDC capa Earfcn[%d] & Cell[%d]
Line 2971: ENDC capa Freq : %d - Not part of CellSelReq cntr_earfcn list
Line 2998: Receive LTE_CPHY_CELL_SEL_REQ (category: %d, Tbarred: %d)
Line 3117: is_redirect_scan: TRUE
Line 3124: Unsuitable/Barred Freq(%d) Exist!
Line 3132: Unsuitable and Barred List Removed!
Line 3138: Reset forbidden list [%d]
Line 3143: Unsuitable category (%d)
Line 3169: Remove barred cells under CELL_SEL_REQ NumTempBarredCell(%d)
Line 3172: Remove barred PCI: %d for EARFCN: %d under CELL_SEL_REQ
Line 3206: Invalid LteRrm state(%s)
Line 3269: LteRrmIdle_CheckInfCellFromBarredList(earfcn:%d)-> exists
Line 3312: LteRrmIdle_AddInfCellFromBarredList - cellList NULL
Line 3319: Error!! NumSrchWithBarredCellCanx(%d)
Line 3328: Trial[%d] Perform normal cell search
Line 3343: Trial[%d].[%d] IC cell: Earfcn(%d) pci(%d) time_offset(%d)
Line 3367: Trial[%d]. Barred cell with earfcn(%d) is not found in barred-list!!
Line 3368: - Perform normal search
Line 3386: LteRrmIdle_DeleteAllFromBarredList Started
Line 3394: CellBarredList / FreqBarredList / UnsuitableList are Empty!!
Line 3409: CellBarredList deleted
Line 3436: FreqBarredList deleted
Line 3462: UnsuitableList deleted
Line 3542: BarredFreq is already listed (earfcn %d)
Line 3546: WARNING!! (duration == 0) in LteRrmIdle_AddFreqToBarredList(earfcn %d)
Line 3575: ERROR: Elem of Freqbarred list is not linked
Line 3587: EARFCN in FreqBarredList(%d) in LteRrmIdle_ProcCellSelectReq()
Line 3601: ERROR in FreqBarredList
Line 3645: TFreqBarrdDiff(%d), TFreqBarredDurationDiff(%d), IsReverted(%d)
Line 3649: New element added from Freq barred list
Line 3656: pNewElem becomes the first element among the FreqBarredList
Line 3727: This Freq is unsuitable already(earfcn %d)
Line 3731: WARNING!! (duration == 0) in LteRrmIdle_AddFreqToUnsuitableList(earfcn %d)
Line 3759: ERROR: Elem of Unsuitable list is not linked
Line 3771: EARFCN in UnsuitableList(%d) in LteRrmIdle_ProcCellSelectReq()
Line 3785: ERROR in UnsuitableList
Line 3829: TUnsuitableDiff(%d), TUnsuitableDurationDiff(%d), IsReverted(%d)
Line 3833: New element added from Unsuitable list
Line 3840: pNewElem becomes the first element among the UnsuitableList
Line 3884: Barred Cell[%d]: Earfcn(%d), Cell Id(%d)
Line 3908: Barred Freq[%d]: Earfcn(%d)
Line 3932: Unsuitable Freq[%d]: Earfcn(%d)
Line 3967: LteRrmIdle_GetPdm_step_value(step&value)carrier_freq:%d dl_earfcn:%d
Line 3969: LteRrmIdle_GetPdm_step_value(step&value)pdm_control_value:%d
Line 3971: LteRrmIdle_GetPdm_step_value(step&value)one_side_pdm_value:%d
Line 3973: LteRrmIdle_GetPdm_step_value(step&value)pdm_step_cnt:%d
Line 4023: [LCSBF] Camped Cell index: %d ,Time(%d) EARFCN(%d) PCI(%d) DL BW(%d) Antenna port(%d)
Line 4172: [LCSBF][Result_%2d][ENDC=%d][Earfcn=%5d_%3d][RSRP=%d][Gfeature BW=%d]
Line 4201: NEXT FREQ SELECT :  CellSelInfo.Idx = %d,  CellSelInfo.NumFreq = %d
Line 4207: BlindCellSel(%d) SearchRepeatMode(%d)  CellSelInfo.Idx(%d)
Line 4247: SearchRepeatMode(%d)  CellSelInfo.Idx(%d)
Line 4268: SearchRepeatMode(%d)  CellSelInfo.Idx(%d)
Line 4270: LteRrmIdle_ProcCellSelectionNextFreq(FH mode)SearchRepeatMode(%d) CellSelInfo.Idx(%d)
Line 4307: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 4311: LteRrm_AllocCellInfoBuf: TargetCell
Line 4315:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 4340: All Freq is Barred
Line 4348:  CellSelInfo.Idx(%d) >=  CellSelInfo.NumFreq(%d)
Line 4440: Sorting frequency based on measurement (ENDC:%d, TH:%d, %d)
Line 4465: [Pre_Result_%2d][Earfcn(%d) = %5d_%3d][RSRP=%d, RSRQ=%d]
Line 4471: [LCSBF] is_bw_priority = %d, camped_cell_db_num = %d
Line 4513: [Result_%2d][Earfcn=%5d_%3d][RSRP=%d]
Line 4529: == complete Freq. Selection based on measurement(FreqNum:%d->%d)
Line 4571: LteRrm_AllocCellInfoBuf: TargetCell
Line 4575:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 4580: NEXT CELL SELECT :  CellSelInfo.CellIdx = %d,  CellSelInfo.NumCell = %d
Line 4635: Try Cell selection to next hypo(idx:%d, earfcn:%d)
Line 4676: LTERRM_LAST_CELL_SELECT
Line 4694: LteRrm_AllocCellInfoBuf: TargetCell
Line 4699:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 4724: please check: PrimaryCell is NULL!!
Line 4759: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 4804: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 4809: LteRrm_AllocCellInfoBuf: TargetCell
Line 4813:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 4843: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 4867: LTERRM_SPECIFIC_CELL_SELECT:  TargetCell->earfcn=%d, TargetCell->cell_ID=%d
Line 4895: LteRrmIdle_ProcCellSelection(NextCandidate=(%d))
Line 4900: ERROR: Unsuitable IdleProc (%d)
Line 4975: LteRrmIdle_ProcCellSelection - invalid candidate(%d)
Line 5007: [OsloKPI] CellReselSuccess(%d) / CellReselFail(%d)
Line 5026: Receive LTE_CPHY_CELL_RESEL_REQ Msg (Blist:%d)
Line 5163: LteRrmIdle_ProcCellReselection from RRC
Line 5168: LteRrmIdle_ProcCellReselection - Invalid IdleProc(%d)
Line 5181: pSelectedCell is NULL
Line 5190: Try Reselection(next Ncell)
Line 5195: LteRrm_AllocCellInfoBuf: TargetCell
Line 5198: TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 5210: please check: PrimaryCell is NULL!!
Line 5265: Failure of returning back to the old serving cell
Line 5282: LteRrm_AllocCellInfoBuf: TargetCell
Line 5286:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 5304: please check: ServingCell is NULL!!
Line 5307: Try Reselection(Return to Pcell)
Line 5355: Stop Reselection
Line 5361: LTE_CPHY_CELL_RESEL_CNF with FAIL to RRC
Line 5367: NO REMAINING CANDIDATE CELL !!!
Line 5450: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 5479: Repeat reselection for IRAT( CellSelInfo.Idx :%d)
Line 5495: ConnToIdleLastCell: TRUE to FALSE
Line 5502: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 5512: InitSrchCanx fails
Line 5529: Try Cell selection to next cell (idx:%d)
Line 5539: LteRrmIdle_ProcCellSrchCnfInCellSelection - Invalid fali cause(%d)
Line 5560: ProcCellSrchCnf: IdleProc(%s), PCID(%d), earfcn(%d)
Line 5565: LteRrmIdle_ProcCellSrchCnf - Invalid State(%d)
Line 5572: bBackupCellStatusNtf
Line 5680: LteRrmIdle_ProcCellSrchCnf - Invalid fail cause(%d)
Line 5710: LteRrmIdle_ProcCellSrchCnf - Invalid IdleProc(%d)
Line 5735: ERROR: Invalid case
Line 5780: Simulate sending LTE_CPHY_ACQ_IND to RRC(MTM)
Line 5807: LteRrmIdle_ProcPbchDecDone - Invalid IdleProc(%d)
Line 5860: LteRrmIdle_EvalCellSelection - band7(manual): Srxlev=%d.%ddB, qRxLevMin=%ddBm
Line 5919: SrxLev = %d.%ddB, Squal = %d.%ddB, q_QualMin = %ddB
Line 5923: SrxLev <= 0 or Squal <= 0, S criteria fail.
Line 5994: ERROR: Invalid RAT_type(%d)
Line 6033: rat(%d), arfcn(%d), Pmax(SIB)(%d), Pmax(PowerClass)(%d), Pcompansation(%d)
Line 6046: CellID(%d):Srxlev Calculation: min_RSRP(%d)- qRxLevMin(%d)-PCompensation(%d) = Srxlev(%d)
Line 6051: CellID(%d):Srxlev Calculation: RSRP(%d)- qRxLevMin(%d)-PCompensation(%d) = Srxlev(%d)
Line 6098: Cell_ID(%d):Squal Calculation: min_RSRQ(%d)- qQualMin(%d)= Squal(%d)
Line 6103: Cell_ID(%d):Squal Calculation: RSRQ(%d)- qQualMin(%d)= Squal(%d)
Line 6166: Abnormal stack id: %d, cannot read L2NReselMarginEnable NV
Line 6170: LteRrmIdle_CheckThreshHigherInterFreq is called
Line 6187: CSG : RAT:%d, CellID:%d, RSRP:%d, q_RxlevMin:%d, q_QualMin:%d
Line 6191: CSG : Success reselection condition
Line 6196: CSG : Fail reselection condition(neighbor)
Line 6204: CSG : RAT:%d, CellID:%d, RSRP:%d, q_RxlevMin:%d
Line 6212: CSG : Success reselection condition : UTRA FDD
Line 6217: CSG : Fail reselection condition : UTRA FDD
Line 6224: CSG : Success reselection condition : EUTRA
Line 6230: CSG : Fail reselection condition(neighbor)
Line 6239: RAT:%d, RSRP:%d, q_RxlevMin:%d, thresh_X_high_P:%d, thresh_X_high_Q:%d, treselection(margin):%d
Line 6270: Success reselection condition : RAT type(%d), Freq(%d), PCI(%d)
Line 6275: Fail reselection condition(neighbor): RAT type(%d), Freq(%d), PCI(%d)
Line 6288: Success reselection condition : UTRA FDD
Line 6293: Fail reselection condition : UTRA FDD
Line 6300: Success reselection condition : RAT type(%d), Freq(%d), PCI(%d)
Line 6306: Fail reselection condition(neighbor): RAT type(%d), Freq(%d), PCI(%d)
Line 6316: CSG : Reselection is not supported for GERAN
Line 6324: RAT:%d, RSRP:%d, q_RxlevMin:%d, thresh_X_high:%d, RSRQ:%d, q_QualMin:%d
Line 6328: Success reselection condition : GSM(%d)
Line 6333: Fail reselection condition(neighbor) : GSM(%d)
Line 6342: CSG : Reselection is not supported for CDMA2000
Line 6348: RAT:%d, RSRP:%d, thresh_X_high:%d
Line 6352: Success reselection condition : CDMA(%d), Freq(%d)
Line 6357: Fail reselection condition(neighbor) : CDMA(%d), Freq(%d)
Line 6362: ERROR: Invalid RAT_type(%d)
Line 6380: CSG : Success reselection condition: RAT type(%d)
Line 6385: CSG : Fail reselection condition(neighbor)
Line 6393: CSG : RAT:%d, RSRP:%d, q_RxlevMin:%d, thresh_X_low_P:%d
Line 6401: CSG : Success reselection condition : UTRA FDD
Line 6406: CSG : Fail reselection condition : UTRA FDD
Line 6413: CSG : Success reselection condition : EUTRA
Line 6419: CSG : Fail reselection condition(neighbor)
Line 6446: Abnormal stack id: %d, cannot read L2NReselMarginEnable NV
Line 6477: Success reselection condition : RAT type(%d), Freq(%d), PCI(%d)
Line 6482: Fail reselection condition(neighbor): RAT type(%d), Freq(%d), PCI(%d)
Line 6490: RAT:%d, RSRP:%d, SIBx.q_RxlevMin:%d, SIBx.thresh_X_low_P:%d
Line 6502: Success reselection condition : UTRA FDD(%d)
Line 6507: Fail reselection condition : UTRA FDD(%d)
Line 6514: Success reselection condition : RAT type(%d), Freq(%d), PCI(%d)
Line 6520: Fail reselection condition(neighbor): RAT type(%d), Freq(%d), PCI(%d)
Line 6565: LteRrmIdle_CheckThreshLowerInterFreq(CSG Srxlev_Serv:%d, RAT_Type:%d, ThreshServLow_P:%ddB, ThreshServLow_Q:%ddB)
Line 6570: LteRrmIdle_CheckThreshLowerInterFreq(Srxlev_Serv:%d, RAT_Type:%d, SIB3.ThreshServLow_P:%ddB, SIB3.ThreshServLow_Q:%ddB)
Line 6589: CSG : RSRQ:%d, q_QualMin:%d, thresh_X_low_Q:%d
Line 6597: RSRQ:%d, SIBx.q_QualMin:%d, SIBx.thresh_X_low_Q:%d, treselection(margin):%d
Line 6606: CSG : Reselection is not supported for GERAN
Line 6613: RAT:%d, RSRP:%d, q_RxlevMin:%d, thresh_X_low_P:%d
Line 6621: Success reselection condition : GSM(%d)
Line 6626: Fail reselection condition(neighbor) : GSM(%d)
Line 6634: CSG : Reselection is not supported for CDMA2000
Line 6641: RAT:%d, RSRP:%d, thresh_X_low:%d
Line 6645: Success reselection condition : CDMA(%d), Freq(%d)
Line 6650: Fail reselection condition(neighbor) : CDMA(%d), Freq(%d)
Line 6655: ERROR: Invalid RAT_type
Line 6661: Fail reselection condition(serving)
Line 6696: PrimaryCell is gpHighestRankCell
Line 6702: PrimaryCell is NULL
Line 6725: Highest Ranked Cell is changed => Remove Cell/FreqBarredList
Line 6772: [NR DRDS OPT] TpClk(%d, %d) Qhyst = %d
Line 6787: [IF] NumCandidateCell:%d, ElapsedTimeInPCell:%d
Line 6800: [IF] Add New CellResel.ppCCellList[%d] Earfcn:%d, Cell id:%d
Line 6808: CellReselInfo.ppCCellList NULL
Line 6860: PrimaryCell is NULL
Line 6871: BARRED FREQ
Line 6962: RValueDiff(%d) = nRsrp(%d) - Qoffset(%d) - sRsrp(%d) - Qhyst(%d), RValueDiffMax(%d)
Line 6966: RsrqDiff(%d) = nRsrq(%d) - Qoffset(%d) - sRsrq(%d) - Qhyst(%d), ReturnRValueDiff(%d)
Line 6974: [IF] R value of Cell(%d) > 0 and Treselection Zero
Line 6983: Fast Reselection(cinr:%d, RValueDiffMax:%d), Treselection(%d)
Line 6993: [IF] R value of Cell(%d)(Freq:%d) > 0, Treselection started (TReselectionStart:%d)
Line 6999: IntraFreqCRTriggered++(%d)
Line 7004: Error: IsTreselectionTrig(%d) IntraFreqCRTriggered(%d)
Line 7032: [IF] R value of Cell(%d)(Freq:%d) > 0 and Treselection passed (CurrentTime:%d)
Line 7037: [IF] S value of Cell(%d)(Freq:%d) > 0 But Treselection failed (CellID(%d) != StrongestNcellID(%d))
Line 7043: [IF] R value of Cell(%d)(Freq:%d) > 0 but Treselection failed (CurrentTime:%d)
Line 7050: [IF] R value of Cell(%d)(Freq:%d) <= 0
Line 7061: IntraFreqCRTriggered--(%d)
Line 7104: LTERRM->Set.pHighestRankCell is NULL
Line 7110: PrimaryCell is NULL
Line 7130: Highest Ranked Cell is changed => Remove Cell/FreqBarredList
Line 7168: [%s] NumCandidateCell:%d, ElapsedTimeInPCell:%d
Line 7201: [%s] Add New CellResel.ppCCellList[%d] Earfcn:%d, Cell id:%d
Line 7210: CellReselInfo.ppCCellList NULL
Line 7266: BARRED FREQ
Line 7304: [DEBUG] T(%d), I(%d)
Line 7339: [HF] S value of Cell(%d)(Freq:%d) > threshold and Treselection Zero
Line 7349: [HF] S value of Cell(%d)(Freq:%d) > threshold, Treselection started, Eval Results:%d, TReselectionStart:%d
Line 7355: HigherPrioCRTriggered++(%d)
Line 7360: Error: IsTreselectionTrig(%d) HigherPrioCRTriggered(%d)
Line 7387: [HF] S value of Cell(%d)(Freq:%d) > threshold and Treselection passed (CurrentTime:%d)
Line 7392: [HF] S value of Cell(%d)(Freq:%d) > threshold But Treselection failed (CellID(%d) != StrongestNcellID(%d))
Line 7398: [HF] S value of Cell(%d)(Freq:%d) > threshold but Treselection not passed yet (CurrentTime:%d)
Line 7405: [HF] S value of Cell(%d)(Freq:%d) <= threshold
Line 7407: q_RxlevMin(%d), thresh_X_high(%d)
Line 7418: HigherPrioCRTriggered--(%d)
Line 7482: BARRED FREQ
Line 7528: [R value] Rs(%d) Rn(%d) Qhyst(%d) Qoffset(%d)
Line 7531: [R value_Inst] Rs(%d) Rn(%d) Qhyst(%d) Qoffset(%d)
Line 7559: [EF] R value of Cell(%d)(Freq:%d) > 0 and Treselection Zero
Line 7569: [EF] R value of Cell(%d)(Freq:%d) > 0, Treselection started (TReselectionStart:%d)
Line 7575: EqualPrioCRTriggered++(%d)
Line 7580: Error: IsTreselectionTrig(%d) EqualPrioCRTriggered(%d)
Line 7608: [EF] R value of Cell(%d)(Freq:%d) > 0 and Treselection passed (CurrentTime:%d)
Line 7613: [EF] R value of Cell(%d)(Freq:%d) > 0 But Treselection failed (CellID(%d) != StrongestNcellID(%d))
Line 7619: [EF] R value of Cell(%d)(Freq:%d) > 0 but Treselection failed (CurrentTime:%d)
Line 7626: [EF] R value of Cell(%d)(Freq:%d) <= 0
Line 7637: EqualPrioCRTriggered--(%d)
Line 7697: BARRED FREQ
Line 7703: LteRrmIdle_EvalLowerInterFreq: PrimaryCell is NULL
Line 7773: (RAT:%d, Earfcn:%d, PCI:%d) time_diff_meas(%d), time_diff_nonintra(%d)
Line 7778: No reselection candidate(RAT:%d, earfcn:%d, id:%d). Measurement and Evaluation didn't happen at the same DRX cycle
Line 7795: Fast Reselection(cinr:%d), Treselection(%d)
Line 7810: [LF] S value of Cell(%d)(Freq:%d)(Rat:%d) and Treselection Zero
Line 7815: [LF] S value of Cell(%d)(Freq:%d)(Rat:%d) and Treselection Zero
Line 7816: But Cell Reselection to IRAT lower-priority cell is suspended (other priority cell is waiting for CR).
Line 7818: - HigherPrioCRTriggered(%d) EqualPrioCRTriggered(%d) IntraFreqCRTriggered(%d)
Line 7820: - other low prio. cell (but higher than serv) triggered:(%d)
Line 7833: Earfcn(%d), CellID(%d), Set IsTreselectionTrig(%d)
Line 7838: Error: IsTreselectionTrig(%d)
Line 7843: [LF] S value of Cell(%d)(Freq:%d)(Rat:%d) > threshold, Treselection started (TReselectionStart:%d)
Line 7873: [LF] S value of Cell(%d)(Freq:%d)(Rat:%d) > threshold and Treselection passed (CurrentTime:%d)
Line 7878: [LF] S value of Cell(%d)(Freq:%d)(Rat:%d) > 0 But Treselection failed (CellID(%d) != StrongestNcellID(%d))
Line 7885: [LF] S value of Cell(%d)(Freq:%d)(Rat:%d) > threshold but Treselection passed (CurrentTime:%d)
Line 7887: But Cell Reselection to IRAT lower-priority cell is suspended (other priority cell is waiting for CR).
Line 7889: - HigherPrioCRTriggered(%d) EqualPrioCRTriggered(%d) IntraFreqCRTriggered(%d)
Line 7891: - other low prio. cell (but higher than serv) triggered:(%d)
Line 7896: [LF] S value of Cell(%d)(Freq:%d)(Rat:%d) > threshold but Treselection failed (CurrentTime:%d)
Line 7904: [LF] S value of Cell(%d)(Freq:%d)(Rat:%d) <= threshold
Line 7906: Srxlev_Serv(%d), ThreshServLow(%ddB), q_RxlevMin(%ddB), thresh_X_low(%ddB)
Line 7986: Resel Sorted List::
Line 7992: [%d] Earfcn:%d, Cell id:%d, PRIORITY:%d, RSRP:%d
Line 8035: [EUCA] No Eval(freq:%d) for only EUCA
Line 8106: [QTM] Get offset[%d] for Cell Rat_type[%d], CellGroupID[%d], pci[%d], arfcn[%d], band[%d], gci[%d]
Line 8111: [QTM] Cell found in QoS DB, apply offset (%d) to cell siginal RSRP(%d)/RSRQ(%d).
Line 8131: [Eval] freq (%d) Higher (%d).(%d)>(%d).(%d) or isCsgCell(%d)/CsgMeasReq(%d)
Line 8149: [Eval] freq (%d) Equal (%d).(%d)=(%d).(%d) or isCsgCell(%d)/CsgMeasReq(%d)
Line 8179: [Eval] freq (%d) Lower (%d).(%d)<(%d).(%d) or isCsgCell(%d)/CsgMeasReq(%d)
Line 8312: Proc CELL_RESELECTION_EVALUATION
Line 8372: UtraMeasCnt(%d) reset to 0
Line 8377: UtraMeasCnt(%d)
Line 8406: CellStatusNtf cell is selected
Line 8424: Simulate sending LTE_CPHY_CELL_SEL_CNF to RRC(MTM)
Line 8436: Camp-on success.
Line 8504: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 8514: InitSrchCanx fails
Line 8534: Try cell selection to next cell (idx:%d)
Line 8562: Try Cell selection to next cell (idx:%d)
Line 8572: ERROR: Invalid category
Line 8606: (CellReselInfo.ppCCellList == NULL) or CellReselInfo.NumCCell == 0
Line 8637: BARRED FREQ: No Cell to Reselect !!!
Line 8671: EARFCN(%d), isCsgCell(%d)
Line 8759: CellBarred CANCEL (%d, %d) in low RSRP(%d)
Line 8763:  TargetCell is NULL
Line 8771: Csr_Inf: LTE_CELL_BARRED
Line 8810: LTE_SELECT_NEW_SUIT_CELL
Line 8827: Unsuitable category !!!
Line 8832: LTE_SCAN_NEXT_FREQ with Category: %d
Line 8844: Unsuitable category !!!
Line 8848: LTE_STOP_SCAN with Category %d
Line 8870: q_RxLevmin=(%d), q_QualPresent=(%d), q_QualMin=(%d), q_Qualminoffset=(%d), q_QualMinWBPresent=(%d), q_QualMinAllSymbolPresent=(%d)
Line 8884: LteRrmIdle_EvalCellSelection FAIL!!(%d, %d)
Line 8897: ERROR: different category cell selection/reselection(%d, %d)
Line 8905: ERROR: Invalid category(%d)
Line 8920: CellStatusNtf cell is not selected
Line 8938: InitSrchCanx condition satisfied: RSRP(%d)>(%d), RSRQ(%d)>(%d)
Line 8946: InitSrchCanx condition not satisfied. RSRP(%d)<=(%d), RSRQ(%d)<=(%d)
Line 8951: out of range: num_cell is larger than 3. (%d)
Line 8956: Camp-on fails and no interference detected.
Line 8990: ERROR: invalid idlemode proc(%d)
Line 9024: LteRrm_AllocCellInfoBuf: TargetCell
Line 9028:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 9045: Copy TargetCell(%d), PrimaryCell is NULL
Line 9056: please check: PrimaryCell is NULL!!
Line 9061: INVALID TargetCell!!!!!!
Line 9079: SIB1: q_QualPresent=(%d), q_QualMin=(%d), q_Qualminoffset=(%d), q_QualMinWBPresent=(%d), q_QualMinAllSymbolPresent=(%d)
Line 9111: SI update error: S-criteria fail
Line 9149: [OsloPatch] debug print for Category change to suitable cell
Line 9150: Category change Acceptable to Suitable cell (%s State)
Line 9158: NULL ServCell when SI update or ConnRel or Category change to suitable cell(Please check primitive from other layer)
Line 9168: SameCellSelect:%d
Line 9238: BARRED FREQ: No Cell to Reselect !!!
Line 9302: SI update error: Invalid Category(%d)
Line 9314: LTE_CELL_BARRED or FREQ_BARRED: Stop measurement and Wait CellSelectReq from RRC
Line 9333: Cell selection to CMCC PLMN
Line 9391: LTE_CPHY_CELL_STATUS_NTF Msg is NULL(%s State)
Line 9397: MFBI Enabled(earfcn:%d)
Line 9416: PrimaryCell is NULL
Line 9420: please check: PrimaryCell is already NULL!!
Line 9433: IntraFreq is NULL
Line 9437: please check: IntraFreq is already NULL!!
Line 9469: Receive LTE_CPHY_CELL_STATUS_NTF Msg(categoty=%d in %s State)(TDD:%d)
Line 9489: GCID:%8x, TAC:%4x, MCC:%6d, MNC:%6d
Line 9493: GCID:%8x, TAC:%4x, MCC:%6d, MNC:%6d
Line 9527: LTE_CPHY_CELL_STATUS_NTF Msg for PMAX (%d)
Line 9564: No cell for barring cell of LTE_SELECT_NEW_SUIT_CELL
Line 9608: EARFCN(%d), isCsgCell(%d)
Line 9612: BPLMN target Camp On Complete !
Line 9619: ERROR: Invalid IdleProc(%d)
Line 9650: LTE_CONT_CURRENT_FREQ will be started at next sleep time
Line 9683: LteRrm_AllocCellInfoBuf: TargetCell
Line 9687:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 9745: LTE_CONT_CURRENT_FREQ will be started at next sleep time
Line 9791: Earfcn is last(%d)
Line 9816: MRU FreqScan Completed, Start FullBand Scan, FreqScanMode(%d)
Line 9821: Invalid Scan mode (%d)
Line 9841: LTE_STOP_BPLMN_SCAN: DrxSpareTmr is NOT running
Line 9843: Sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
Line 9855: Sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
Line 9935: LteRrmIdle_UpdateScanModeStopBplmn - INIT State
Line 9945: LTE_STOP_BPLMN_SCAN: DrxSpareTmr is NOT running
Line 9963: LteRrmIdle_UpdateScanModeStopBplmn - pPrimaryCell NULL (State : %d)
Line 9970: LteRrm_AllocCellInfoBuf: TargetCell
Line 9974: TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 9986: please check: PrimaryCell is NULL!!
Line 10050: LteRrm_SendMsgToRrc(LTE_CPHY_FREQ_SCAN_CNF)
Line 10075: Invalid LTE_STOP_SCANNING (%s State)
Line 10130: [%d] sibEarfcn[%d] sibBw[%d->%d]
Line 10140: LteRrmIdle_AddBplmnSibList(num:%d) : skip store result in SibList
Line 10149: [%d] sibEarfcn[%d] sibBw[%d]
Line 10192: LTE_SIB1_READ_FAIL & Spare timer expired: CellSel.CellIdx(%d)
Line 10203: skip LTE_CPHY_FREQ_SCAN_DONE_NTF(%d) in PLMN_SCAN_STOP state
Line 10215: LteRrmIdle_UpdateScanMode - Invalid mode(%d)
Line 10238: LteRrmIdle_ProcFreqScanDoneNtf(scan_update = %d, %d)
Line 10248: LteRrmIdle_ProcFreqScanDoneNtf(scan_update = %d)
Line 10280: Invalid gLteRrmDB_BplmnState = %d
Line 10334: [%d] EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 10403: Earfcn is last(%d)
Line 10426: Invalid Scan mode (%d)
Line 10448: LTE_STOP_BPLMN_SCAN: DrxSpareTmr is NOT running
Line 10450: Sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
Line 10462: Sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
Line 10478: BPLMN start (BplmnTargetEarfcn=%d)
Line 10495: Invalid BPLMN state (%d)
Line 10516: pFreqInfo==NULL in LteRrmIdle_ResetCrTrigFlag
Line 10531: - earfcn(%d) cell_id(%d): reset IsTreselectionTrig(%d)
Line 10541: - earfcn(%d) cell_id(%d): reset IsTReselStarted(%d), TReselectionStart(%d), MeasureRetriedBeforeReselection(%d)
Line 10569: pFreqList==NULL in LteRrmIdle_ResetFreqCrTrigFlag
Line 10607: LteRrmIdle_ResetHighEqualFreqCrTrigFlag
Line 10672: InitSrchCanx: (%d)Update cell: cp_type(%d), cell_id(%d), time_offset(%d)
Line 10675: - RSRP(%d), ant_num(%d), dl_bw(%d)
Line 10679:  TargetCell is NULL. No update for InitSrchCanx
Line 10712: Reset csr Inf_cell set for InitSrchCanx
Line 10741: Save Prev INF Info and Init InfCellset
Line 10778: LteRrmIdle_ResetTempQoffsetList
Line 10807: LteRrmIdle_StartTempQoffsetTimer
Line 10825: - No cells to run temp Qoffset timer
Line 10833: temporary Qoffset Tmr START(%d ms)
Line 10862: No running timer found for temp Qoffset -> Need to check
Line 10887: Temp Qoffset exist(%d)
Line 10894: - Temp Qoffset number error. pList == NULL -> Not applied
Line 10908: - %d. duration is too large(%d) -> Not applied
Line 10933: - LTE:rat(%d) earfcn(%d) pci(%d) qtemp_offset(%d) timestamp(%d ms) duration(%d s) -> expireTime(%d us)
Line 10940: - UMTS:rat(%d) arfcn(%d) pci(%d) qtemp_offset(%d) timestamp(%d ms) duration(%d s) -> expireTime(%d us)
Line 10948: - GSM:rat(%d) arfcn(%d) BSIC(%d) qtemp_offset(%d) timestamp(%d ms) duration(%d s) -> expireTime(%d us)
Line 10951: - rat(%d) out of range
Line 10962: Warning!! Temp Qoffset OffsetNum(%d) out of range -> Not applied
Line 11047: Applying temp Qoffset to earfcn(%d) pci(%d)
Line 11051: - TempQoffset(%d): Srxlev or RSRP (%d->%d)
Line 11057: - TempQoffset(%d): Squal or RSRQ (%d->%d)
Line 11086: - Dropped cell was in T_reselection
Line 11090: - HigherPrioCRTriggered-- (%d -> %d)
Line 11095: - IntraFreqCRTriggered-- (%d -> %d)
Line 11101: - EqualPrioCRTriggered-- (%d -> %d)
Line 11106: - LowPrioCRTriggered-- (-1)
Line 11136: ERROR: pTargetFreq == NULL
Line 11152: - Check Compared Freq (Earfcn(%d),Pci(%d) priority(%d), IsTreselectionTrig(%d)
Line 11155: - Check Target Freq (RAT Type:(%d), Earfcn(%d), priority(%d)
Line 11161: - Reselection to lower-prio. suspended (Earfcn(%d),Pci(%d) has higher priority(%d)>(%d))
Line 11199: ERROR: pTargetFreq == NULL
Line 11204: Monitor any cells under reselection (higher priority than earfcn:%d)
Line 11241: [PPP_restore] no matched (%d)
Line 11246: [PPP_restore] Freq(%d), ori priority(%d), fake priority(%d)
