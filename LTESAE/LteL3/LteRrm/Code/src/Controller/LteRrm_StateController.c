Line 168: CSFB is aborted -> bCsfbTrigInd(1->0)
Line 181: [MCD] RF Imbalance Check (%)
Line 208: SameCellSelect:%d
Line 214: IDLE -> Conn
Line 229: Free IntraFreq - Sorted cell when IDLE to CONN
Line 264: ERROR: INIT -> CONN
Line 278: CSFB is invoked -> bCsfbTrigInd(0->1)
Line 316: FAILURE : PrimaryCell->cell_ID = %d
Line 359: BPLMN target Camp On !, Wait CellStatusNtf
Line 387: SIUpdate is TRUE. But PrimaryCell is NULL
Line 394: TargetCell is NULL!
Line 406: SameCellSelect:%d
Line 417: TargetCell is NULL!
Line 431: PrimaryCell NULL
Line 468: UEState - deprio_type(%d), num_eutra_deprio_freq(%d), num_nr_deprio_arfcn(%d)
Line 645: Ignore UE STATE NTF(%d) when Category changed
Line 687: HST configure, HST setup = %d, HST Meas Flag = %d. HST Demod Flag = %d
Line 709: Idle -> UE_RACHING, Stop Measurement
Line 742: ERROR: Invalid UE State(%d) in NTF

Line 768: ERROR: Invalid UE State in IRAT HO

Line 775: UE STATE: INIT -> Conn, for IRAT HO
Line 882: LteRrm_ProcStopforAll in %s State
Line 973: (Stationary) LteRrm_InitStationaryState
Line 999: LteRrm_SwitchSpeedParam
Line 1007: - mode mismatch.. ConnMeasConfig.SpeedDepParamInd(0)
Line 1011: - Update conn speedDepParam -> idle speedDepResel
Line 1031: - mode mismatch.. Sib.Type3.SpeedDepReselInd(0)
Line 1035: - Update idle speedDepResel -> conn speedDepParam
Line 1053: wrong stateTrans(%d)
Line 1060: SameCellSelect:%d
Line 1103: (MobState) Mobility state update at Handover
Line 1113: (MobState) Mobility state update at Reselection
Line 1116: - CurrTime(%d)
Line 1117: - Teval(%d), NMed(%d), NHigh(%d), THystNormal(%d)
Line 1123: pNewElem is NULL
Line 1137: - Monitoring timestamps at cell change
Line 1143: - %d. List CRTime(%d)
Line 1157: - ERROR in Mobility.CRTimeList
Line 1165: - Start Tcrmax1 : No active previously (Teval: %d sec)
Line 1177: - Mobility.CRCnt(%d)
Line 1190: - ERROR: Elem of mob list is not linked
Line 1196: Skip Mob state check - SameCellSelect(%d), SameCellRevisit(%d)
Line 1233: Invalid mobility state(%d)
Line 1276: Invalid mobility state(%d)
Line 1320: Invalid mobility state(%d)
Line 1366: Invalid mobility state(%d)
Line 1434: BestNCellInfo: RAT(%d): EARFCN[%4d], PCID[%3d], RSRP_N[%4d]
Line 1505: LteRrm_UpdateMeanResult : %d, %d, %d
Line 1529: [Stationary Mean] RsPwr(%d, %d) Cnt(%d, %d)
Line 1548: [Stationary Mean] Rsrp(%d, %d) Cnt(%d, %d)
Line 1567: [Stationary Mean] Cinr(%d, %d) Cnt(%d, %d)
Line 1572: [Stationary Mean] RsPwr(%d, %d, %d, %d), Rsrp(%d, %d, %d, %d), Cinr(%d, %d, %d, %d)
Line 1607: [Stationary Variance] RsPwr(%d, %d) Cnt(%d)
Line 1619: [Stationary Variance] Rsrp(%d, %d) Cnt(%d)
Line 1631: [Stationary Variance] Cinr(%d, %d) Cnt(%d)
Line 1635: [Stationary Variance] RsPwr(%d, %d, %d), Rsrp(%d, %d, %d), Cinr(%d, %d, %d)
Line 1667: Update FALSE due to Cell2 NULL
Line 1676: Update FALSE due to Cell_ID condition. (%d_%d)!= (%d_%d), cell channged!
Line 1692: > L1filtered.RsPwr(%d), Rsrp(%d)
Line 1697: LteRrm_UpdateCellMeasResult - (%d, %d) MeasCnt(%d)
Line 1731: LteRrm_CheckServingCellStationaryCond - (%d)(%d, %d)/TH(%d)
Line 1744: LteRrm_CheckServingCellStationaryCond - periodic Eval
Line 1766: LteRrm_CheckNcellStationaryCond1 - (%d)(%d)/TH(%d)
Line 1777: LteRrm_CheckNcellStationaryCond1 - New Ncell - Intra(%d, %d)/Inter(%d, %d)
Line 1784: LteRrm_CheckNcellStationaryCond1 - Intra Ncell RsPwrVarCnt(%d)/TH(%d)
Line 1791: LteRrm_CheckNcellStationaryCond1 - Inter Ncell RsPwrVarCnt(%d)/TH(%d)
Line 1816: LteRrm_CheckNcellStationaryCond2 - PCell(%d, %d)/TH(%d)
Line 1827: LteRrm_CheckNcellStationaryCond2 - New Ncell - Intra(%d, %d)/Inter(%d, %d)
Line 1837: LteRrm_CheckNcellStationaryCond2 - IntraN(%d, %d)(%d, %d)/TH(%d)
Line 1847: LteRrm_CheckNcellStationaryCond2 - InterN(%d, %d)(%d, %d)/TH(%d)
Line 1850: LteRrm_CheckNcellStationaryCond2(%d)
Line 1862: stationaryIndex Increased(%d)
Line 1898: Index:%d, checkStationary:%d, State:%s, Sampling Duration:%d
Line 1906: Previous RSRP: [%d, %d, %d, %d, %d], Current RSRP[%d]
Line 1914: Previous CINR: [%d, %d, %d, %d, %d], Current CINR[%d]
Line 1919: <IntraFreq_BestCell> PCI:%d, RSRP:%d
Line 1924: <InterFreq_BestCell> Earfcn: %4d, PCI:%3d, RSRP:%d
Line 1938: Full stationary(%d)
Line 1943: High stationary(%d)
Line 1948: Normal stationary(%d)
Line 2014: LteRrm_CheckStationary ====================
Line 2024: [Stationary] Run Eval Stationary
Line 2110: LteRrm_CheckServingCellStationaryCond - Change to EVAL STATE
Line 2128: LteRrm_CheckNcellStationaryCond1 - Change to EVAL STATE
Line 2166: Diablo disabling Lassen's stationary mode by setting stationary state to NORMAL
Line 2240: bFirstCycle: 1->0
Line 2262: bFirstMeasRemain: 1
Line 2279: LteRrm_InitAllMeasSuspParam
Line 2300: LteRrm_InitUtraForcedMeasCsfb
