Line 194: withSIB1: %d, num: %d, imme: %d
Line 205: SI update after SI modification timer expired
Line 224: LteRrm_AllocCellInfoBuf: TargetCell
Line 231: please check: TargetCell(0x%X) or PrimaryCell(0x%X) is NULL!!
Line 354: SI READ SUCCESS
Line 372: LteRrmIdle_GoToSleep() due to SI_READ_SUCCESS
Line 378: Skip LteRrmIdle_GoToSleep() due to SI modification
Line 391: ESS SI READ FAIL
Line 437: ConnToIdleLastCell: TRUE to FALSE
Line 443: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 459: Try Cell selection to next cell (idx:%d)
Line 477: ESS SI READ FAIL when IdleProc, LTERRM_PLMN_SCAN
Line 483: SI READ stop already(%s)
Line 490: ESS SI READ FAIL when IdleProc==LTERRM_IDLE (SI update?)
Line 498: LTE_CPHY_CELL_RESEL_EVAL_IND with FAIL
Line 505: LteRrm_ProcSiStopReadReq - Invalid IdleProc(%d)
Line 653: SIB3 received:ReselPriorityOfPCell(%d).(%d)
Line 665: speed_dep_resel_present received - t_eval(%d) t_hyst(%d), nMed(%d), nHigh(%d)
Line 688: SameCellSelect:%d
Line 792: SIB3: q_QualPresent=(%d), q_QualMin=(%d), q_Qualminoffset=(%d), q_QualMinWBPresent=(%d), q_QualMinAllSymbolPresent=(%d)
Line 896: SIB update ignored by Reselection triggered
Line 923: SIB3,4,5 received before SIB2
Line 964: IntraFreq NULL
Line 974: SIB4 received
Line 990: SIB5 received (PPP: %d)
Line 996: SIB5 received
Line 1168: Invalid SYNC/ASYNC SYSTEM TIME[0:SYNC/1:ASYNC], received(%d), noupdate
Line 1181: cdma_EUTRA_Synchronisation(%d), [0:SYNC/1:ASYNC](%d), system_time(0x%x%08x), LTE End sfn(%d)
Line 1189: systemTimeInfoCDMAPresent in SIB8 is FALSE, no update
Line 1476: ERROR: Invalid Ns(%d) and i_s(%d)

Line 1482: LteRrm_ConfigPch - Invalid PO - Ns(%d), is(%d)
Line 1520: LteRrm_ConfigSCellPch i_s(%d), N(%d), Ns(%d) , index (%d), isServingCell(%d)
Line 1538: ERROR: Invalid Ns(%d) and i_s(%d)

Line 1544: LteRrm_ConfigSCellPch - Invalid PO - Ns(%d), is(%d)
Line 1554: [RRM-MBSFN] Serving Cell PCH Valid[%d]
Line 1567: LteRrm_ConfigSCell Pch drx_T(%d), PF(%d), PO(%d)
Line 1595: LteRrm_ProcUpdateCsgReservedListReq - pCsglist alloc fail
Line 1609: Update CSG Reserved List : %d
Line 1620:  [%d] EARFCN:%d, StartPCI:%d, RangePCI:%d
Line 1641: previously CsgMeasReq is already received (%d), stop previous CsgMeasReq
Line 1657: LteRrm_ProcCsgMeasReq - (%d) eutra_meas_list NULL
Line 1669: LteRrm_ProcCsgMeasReq - (%d) utra_list_size NULL
Line 1688: Stop CSG Meas(%d)
Line 1700: CSG Meas is Already Stopped (LTERRM_NO_CSG_MEAS)
Line 1718: Request CSG Proximity Meas
Line 1722: LteRrm_ProcCsgProximityMeasReq is reconfigured (%d)
Line 1742: LteRrm_ProcCsgProximityStopMeasReq()
Line 1792: (ignored)LPP(ECID) is already scheduled
Line 1806: LteRrm_ProcEcidMeasReq : reportingAmount[%d], reportingInterval[%d]
Line 1831: (ignored)LPP(ECID) is already aborted
Line 1868: (ignored)LPP(OTDOA) is already scheduled
Line 1884: LteRrm_ProcOtdoaMeasReq : RA[%d], RI[%d], EarlyFix{%d]
Line 1889: Reference cell Info in LPP(OTDOA) is different from serving cell
Line 1898: Replace optional field(Ref Cell earfcn) by serving cell earfcn
Line 1903: optional field(Ref Cell earfcn) = %d
Line 1985: (ignored)LPP(OTDOA) is already aborted
Line 2022: (ignored)LPP(OTDOA) is already aborted
Line 2127: Warning!! bScgConfigFlag(1) but PSCell remains configured --> process deact/release
Line 2132: Warning!! bScgConfigFlag(1) but SCG SCell remains configured --> process deact/release
Line 2450: LteRrm_ProcLoggedMeasEutranResult - eutra_meas_result_list2 alloc fail
Line 2459: MDT EUTRAN - no Ncell
Line 2470: LteRrm_ProcLoggedMeasEutranResult - eutra_meas_result_list2->eutra_freq_meas alloc fail
Line 2637: LteRrm_ProcLoggedMeasEutranResult - utra_meas_result_list2 alloc fail
Line 2646: MDT UTRAN - no Ncell
Line 2657: LteRrm_ProcLoggedMeasEutranResult - utra_meas_result_list2->utra_freq_meas alloc fail
Line 2703: MDT UTRAN RAT type(%d) is not valid -> FDD set
Line 2791: LteRrm_ProcLoggedMeasEutranResult - gsm_meas_result_list2 alloc fail
Line 2800: MDT GERAN - no Ncell
Line 2811: LteRrm_ProcLoggedMeasEutranResult - gsm_meas_result_list2->gsm_cell_meas_list alloc fail
Line 2815: MDT GERAN RAT - num(%d)t
Line 2836: LteRrm_ProcLoggedMeasEutranResult - gsm_cell_meas alloc fail
Line 2856: MDT GERAN RAT - (arfcn:%d, rssi:%d)
Line 2895: bImmediate1(%d), MDT.usMeasRat(0x%x)
Line 2909: bImmediate2(%d), MDT.usMeasRat(0x%x)
Line 2932: bImmediate3(%d), MDT.usMeasRat(0x%x)
Line 3019: LteRrm_InitPscellBlindSrchMngr
Line 3045: LteRrm_SaveRrmCfgMsgPSCell: pMsg is NULL
Line 3053: Warning! same RRM_CONFIG_REQ message already stored in LteRrm_SaveRrmCfgMsgPSCell
Line 3065: Cannot Allocate Message buffer
Line 3070: save pSaveRrmCfgMsgPSCell (rrm_config_flag:0x%x)
Line 3095: Warning!! NOT Supported DL_EARFCN %d!!! in LteRrm_StartBlindSrchPSCell
Line 3101: Warning!! pPSCellFreq: NULL in LteRrm_StartBlindSrchPSCell
Line 3126: Warning!! PSCell not found but pscellStatus:KNOWN_DETECTED in LteRrm_StartBlindSrchPSCell
Line 3140: Start Measurement: PSCell Frequency Blind search(earfcn:%d)
Line 3204: Warning! bSrchFlag: FALSE in LteRrm_ProcPSCellBlindSrchResult
Line 3211: Warning! pPSCellFreq: NULL in LteRrm_ProcPSCellBlindSrchResult
Line 3217: LteRrm_ProcPSCellBlindSrchResult (doneCnt:%d / maxCnt:%d)
Line 3259: Resume processing LTE_CPHY_RRM_CONFIG_REQ without SCG config
Line 3302: Warning!! pMeasCnf: NULL in LteRrm_ProcPSCellInitMeasResult
Line 3308: Warning!! pPSCell: NULL in LteRrm_ProcPSCellInitMeasResult
Line 3314: Warning!! pPSCellFreq: NULL in LteRrm_ProcPSCellInitMeasResult
Line 3321: Warning!! measResult->earfcn(%d) different to pPSCell->earfcn(%d) in LteRrm_ProcPSCellInitMeasResult
Line 3328: Warning!! pPSCellFreq->earfcn(%d) different to pPSCell->earfcn(%d) in LteRrm_ProcPSCellInitMeasResult
Line 3346: Resume processing LTE_CPHY_RRM_CONFIG_REQ without SCG config
Line 3361: Warning!! Unexpected meas result (cell_ID:%d)
Line 3370: PSCell - rsrp(%d)
Line 3378: Resume processing LTE_CPHY_RRM_CONFIG_REQ with measured PSCell
Line 3413: - pFreqInfo NULL
Line 3417: - PScell FreqInfo(earfcn=%d) is created newly
Line 3434: Warning!! LteRrm_StartBlindSrchPSCell: pFreqInfo not found --> check pscellStatus(%d)
Line 3542: Config - rrm_config_flag(%d)
Line 3543: - MCG SCell num_add(%d) num_rel(%d)
Line 3544: - meas_sf_pattern_pcell setup  (%d)
Line 3545: - crs_assistance_info   setup  (%d)
Line 3549: - SCG PSCell setup (%d)
Line 3550: - SCG SCell num_add(%d) num_rel(%d)
Line 3553: - EN-DC setup (%d)
Line 3568: [EN-DC CONFIG] Nr Serving Cell(%d) - ARFCN(%d) CellId(%d)
Line 3578: pFreqInfo is NULL as a result of LteRrm_AllocFreqInfoBuf()
Line 3596: pCellInfo is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 3627: measSubframePatternPcell: meas_mode(%d)
Line 3643: feICIC crs_assistance_info: Setup
Line 3647: - NeighCellsCRS-Info is setup again by RRC before release
Line 3652: - NeighCellsCRS-Info not configured, num_cell(%d)
Line 3657: - NeighCellsCRS-Info configured, num_cell(%d)
Line 3674: feICIC crs_assistance_info: Release
Line 3678: - num_cell from RRC is not 0 : need to check in RRC
Line 3693: - SCellIndex(%d) for PSCell: out of range
Line 3720: PSCell: setup (SCellIndex:%d)
Line 3760: PSCell: release
Line 3942: SCellActivationfromMAC = 0x%x, SCellActivationTTI = %d
Line 3980: UE has already full supported Scell(%d)
Line 3987: Support the activation for ONLY one SCell !!!(%d->%d)
Line 4041: LteRrm_ProcRemovePSCell
Line 4045: Warning! sCellIndex(%d)
Line 4051: Warning! PSCell(%x) or PSCellFreq(%x) is NULL
Line 4057: Warning! Received SCellIndex(%d) is not configured for PSCell
Line 4070: Deactivate PSCell (SCellIndex:%d, Earfcn:%d, CellID: %d) !!!
Line 4124: LteRrm_ProcRemoveSCell
Line 4180: LteRrm_ProcRemoveMcgScgSCell(cellGroup: %d)
Line 4193: Invalid cellGroup
Line 4321: Warning! SCG SCell not added <-- pPSCell(%d) pPSCellFreq(%d)
Line 4329: Wrong input in LteRrm_ProcAddSCellCellGroup. Check cellGroup(%d) rrm_config_flag(%d)
Line 4340: - SCellIndex(%d) is out of range - need to check (earfcn:%d, pcid:%d)
Line 4349: SCell Freq(%d) is abnormal -> discard.
Line 4435: MCG: num_seccell(%d), num_remove_seccell(%d)
Line 4448: SCG: num_seccell(%d), num_remove_seccell(%d)
Line 4467: - configured in SCG
Line 4492: LteRrm_ProcConfigSCellSetField(): SCell Index[%d](configured: %d) : PCI[%d] & DL EARFCN[%d]
Line 4503: Mismatch SCell Index[%d] : Cell ID[%d | %d] & DL EARFCN[%d | %d]
Line 4554: - LAA SCell configured
Line 4564: SCell(ID:%d, earfcn=%d is added in ScellmeasList
Line 4615: Wrong cellGroup(%d) value used -> SCell(index:%d) is not configured
Line 4635: Intra Freq Scell is not supported
Line 4639: InterFreq -> SCellFreq
Line 4652: Inter Freq does not have the measurement list!!!
Line 4659: previously the same earfcn(%d_%d) is configured as Scell(%d)
Line 4675: TempFreqInfo NULL
Line 4679: Scell FreqInfo(earfcn=%d) is created newly
Line 4717: Scell(%d_PCID:%d) is already configured - ignore
Line 4722: the same freq(%d) and index but diff cell ID (%d_%d) -> discard
Line 4728: the same freq(%d) but diff index(%d_%d) -> discard
Line 4734: there is no candidated cell(%d) with index(%d) -> discard
Line 4753: pTCellInfo NULL
Line 4765: Scell CellInfo(earfcn=%d, PCID=%d) is created newly
Line 4807: Warning!! pConfig(%x) in LteRrm_SetConfigKnownPSCell
Line 4813: Warning! pPrimaryCell : NULL in LteRrm_SetConfigKnownPSCell
Line 4817: LteRrm_SetConfigKnownPSCell
Line 4830: same cell with previous PSCell
Line 4835: Warning!! no matched pCellInfo
Line 4889: Mismatch SCell Index[%d] : Cell ID[%d | %d] & DL EARFCN[%d | %d]
Line 4968: Warning! LTERRM could not support SCell(%d) more than %d. CHECK!!!
Line 5029: - Warning! filtered_rsrp_pc: invalid for PSCell in LteRrm_SetConfigKnownPSCell
Line 5038: Activate PSCell (SCellIndex:%d, Earfcn:%d, CellID: %d) !!!
Line 5082: LTERRM could not support SCell(%d) more than %d. CHECK!!!
Line 5101: SecondaryCell could not found([%d] Cell ID:%d, earfcn:%d)
Line 5116: [%d] Freq(%d) Cell(%d) earfcn values are different
Line 5142: Wrong Scell info2(%x:%x)
Line 5160: SCellFreq NULL
Line 5239: SCell Activation : Cell ID[%d], DL EARFCN[%d]
Line 5244: Activate SCell (SCellIndex:%d, Earfcn:%d, CellID: %d) !!!
Line 5295: LTERRM could not find SCell(index:%d). CHECK!!!
Line 5298: config(%d), earfcn(%d), PCID(%d)
Line 5328: Deactivate Scell(%d) by Deactivation Timer expiry
Line 5331: Deactivate SCell (SCellIndex:%d, Earfcn:%d, CellID: %d) !!!
Line 5361: SCell is deactivated(SCellIndex: %d, CellID: %d, SCellActivationCMD: 0x%x)
Line 5363: Deactivate SCell (SCellIndex:%d, Earfcn:%d, CellID: %d) !!!
Line 5400: SCell Deactivation is ignored(index:%d(%d))
Line 5461: Scell(%d) configured but not found FreqInfo in gpLteRrm_SCellFreqList
Line 5473: Scell(%d) configured but not found CellInfo in SCellFreq
Line 5480: SCell Config is removed(SCellIndex: %d, CellID: %d)
Line 5496: SCell time_offset(%d) Invalid, Do not add Scell to InterFreq ID_Detected Set, move to UNID
Line 5508: SCellFreq -> InterFreq
Line 5527: SCell is not configured(%d)
Line 5578: LTE_REL12_DUALC is not defined but cellgroup(%d) is used -> changed to 0
Line 5584: All SCells(cellgroup:%d) are deactivated !!!
Line 5610: SCellConfig.SCellActivationCMD(%d)
Line 5614: All SCells are already deactivated !!!
Line 5663: LTE_REL12_DUALC is not defined but cellgroup(%d) is used -> changed to 0
Line 6100: LteRrm_CheckScellTiming (earfcn:%d, result:%d)
Line 6112: Scell list is Empty
Line 6124: Scell(%d) Doesn't have correct timing info
Line 6129: Scell(%d) has correct timing info
Line 6147: All Scells have correct timing info
Line 6259: - Warning! pFreqInfo is NULL
Line 6265: - Warning! PrimaryCell is NULL
Line 6275: - Warning! pci(%d) out of range
Line 6281: - Warning! PCell NOT expected in measSubframeCellList
Line 6284: - measSubframePattern for PCell already configured
Line 6295: - measSubframePatternPcell: meas_mode(%d)
Line 6302: -%d. pci(%d) configured
Line 6320: - earfcn(%d) meas_mode(%d) num_meas_pattern_ncell(%d)
Line 6341: NeighPatternList NULL(%d) or empty
Line 6350: Meas Neigh Pattern Update (earfcn:%d, meas_mode:%d)
Line 6382: Warning! pFreqInfo is NULL
Line 6388: Warning! LteRrm_RemoveMeasNeighPattern: NumOfNeighPatt is 0
Line 6403: Remove MeasNeighPattern(Freq:%d) from List(num:%d)
Line 6493: Cannot Allocate PatternList buffer
Line 6504: - new measSubframePatternNeigh (earfcn:%d, meas_mode:%d, num:%d)
Line 6538: Curr. feicic activation state
Line 6542: Error: gLteRrmDB_NeighborCrsInfo_r11.num_cell is out of range(%d)
Line 6551: - %d. FeicicActBitmap[%d]:%d (pci:%d)
Line 6604: crs_info: NULL in LteRrm_UpdateFeicicTmpCell
Line 6620: %d. Pci(%d) found in Sorted list
Line 6628: -- Out of bound: FeicicTmpCellList.num_cell(%d)
Line 6643: -- ant_num(%d), cp_type(%d)
Line 6658: -- mbsfn_valid(1), mbsfn_config_cnt(%d)
Line 6663: -- mbsfn_valid(0)
Line 6669: -> Crs-Assi cell(pci:%d) detected and selected as SIC candidate
Line 6674: -> Crs-Assi cell(pci:%d) detected BUT not satisfied with SIC conditions
Line 6692: -- No valid Ncell in Intra-freq Sorted-list
Line 6744: LteRrm_CheckFeicicCandiChange
Line 6751: - Error: Need to check crsAssistActivated change. FeicicActCellList.num_cell is (%d)
Line 6758: - no any target cell observed - Deactivates feicic
Line 6791: - no change in dominant candidate cell
Line 6828: feicic check: crsAssistConfigured(%d) crsAssistActivated(%d)
Line 6836: Activates feicic
Line 6845: Updates feicic
Line 6899: [TDD(%d)] PC3 (%d)
Line 6915: [WARN] Need to check PowerClass -> set PowerClass 3
Line 6948: [WARN] Need to check PowerClass -> set PowerClass 3
Line 6984: [EUCA] IdleMeasConfig received with out any freq info (%d)
Line 6990: [EUCA] IdleMeasConfig already started, again start is received from RRC
Line 7003: [EUCA] EUCA config after SIB5
Line 7008: [EUCA] No SIB5 before EUCA config, ucInterFreqNum(%d)
Line 7016: [EUCA] eutra_carrier_Freq(%d) num_meas_cell_list(%d)
Line 7021: [EUCA] This Freq is not supported(eNB error)(Earfcn:%d)
Line 7029: [EUCA] EUCA frequency already present in InterFreq List
Line 7033: [EUCA] ERROR: Freq in IdleMeasConfig is same as Serv Freq (eNB error)
Line 7048: [EUCA] ERROR: FreqInfo already present but Freq_type(%d) not SIB5
Line 7069: [EUCA] New EUCA Freq earfcn(%d), Freq_Type(%d)
Line 7073: [EUCA] pFreqInfo NULL
Line 7080: [EUCA] Before Mapping: threshold_type:%d, idle_rsrp_threshold:%d, idle_rsrq_threshold:%d
Line 7089: [EUCA] After Mapping: threshold_type:%d, idle_rsrp_threshold:%d, idle_rsrq_threshold:%d
Line 7123: [EUCA] No cells listed by NW in EUCA config
Line 7145: [EUCA] Buffer overflow: Maximum Allowed number of freq is 8
Line 7167: [EUCA] No freq configured for EUCA reporting (%d)
Line 7173: [EUCA] pPrimaryCell is NULL
Line 7185: [EUCA] no results to report to rrc (%d)
Line 7191: ==============[EUCA] FREQ: %d START========================
Line 7197: [EUCA] IdleMeasConfig Reporting: EARFCN(%d), CELL_ID(%d), RSRP(%d)
Line 7199: ==============[EUCA] FREQ: %d END========================
Line 7225: [EUCA] IsEucaConfiguredFreq: bEucaMeasStart(%d), Freq_type(%d)
Line 7289: [EUCA] Best Cell Rsrp(%d) of EUCA Earfcn(%d)
Line 7294: [EUCA] No suitable cells to report for euca in earfcn(%d)
Line 7311: [EUCA] LteRrm_CheckEucaThreshold: threshold_type(%d)
Line 7339: [EUCA] Invalid threshold_type
Line 7368: [EUCA] LteRrm_ProcIdleMeasConfigResults ()
Line 7389: [EUCA] Max EUCA frequencies reached: %d
Line 7408: [EUCA] No EUCA frequencies available
Line 7413: [EUCA] Num EUCA frequencies available(%d)
Line 7439: [EUCA] Serving Cell RRM L3 Filtered results: RSRP(%d), RSRQ(%d)
Line 7440: [EUCA] Serving Cell Meas Results to RRC: RSRP(%d), RSRQ(%d)
Line 7457: [EUCA] No EUCA listed cells, use sib5 listed and detected cells in sorted list
Line 7466: [EUCA] pCellInfo is NULL
Line 7474: [EUCA] sorted_cell_ptr->cell_type(%d)
Line 7494: [EUCA] num_meas_idle_eutra >= LTE_MAX_CELLMEAS_IDLE
Line 7509: [EUCA] pFreqInfo2 is NULL
Line 7518: [EUCA] Num of Cells listed(%d) for freq(%d)
Line 7524: [EUCA] pFreqInfo2 is NULL
Line 7528: [EUCA] pFreqInfo2->earfcn(%d)
Line 7538: [EUCA] pCellInfo is NULL
Line 7542: [EUCA] pCellInfo->cell_id(%d)
Line 7547: [EUCA] num_meas_idle_eutra(%d)
Line 7551: [EUCA] sorted_cell_ptr->cell_type(%d)
Line 7558: [EUCA] euca cell available: earfcn(%d), CellId(%d)
Line 7581: [EUCA] num_meas_idle_eutra >= LTE_MAX_CELLMEAS_IDLE
Line 7590: [EUCA] Increment num_meas_idle_result(%d)
Line 7603: [EUCA] pInterFreq set is empty
Line 3467: Warning! PSCell earfcn = PCell earfcn(%d) in LteRrm_GetPSCellStatus - Need to check in RRC
Line 3494: - PSCell: Unknown (no such pFreqInfo)
Line 3502: - PSCell: Known
Line 3514: - PSCell: Unknown (no such pCellInfo)
