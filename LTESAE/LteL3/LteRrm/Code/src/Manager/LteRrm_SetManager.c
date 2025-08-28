Line 867: LteRrm_AllocFreqInfoBuf - alloc fail
Line 873: ALLOC:LteRrm_AllocFreqInfoBuf(%d, 0x%x)
Line 1058: Free:LteRrm_FreeFreqInfoBuf(%d, RAT:%d, Freq:%d, Addr:0x%x)
Line 1091: LteRrm_AllocCellInfoBuf_Debug - alloc fail
Line 1129: LteRrm_AllocCellInfoBuf_Debug - nr_meas_rslt alloc fail
Line 1172: ALLOC: CellInfoBufNum(%d)
Line 1361: FREE: CellInfoBufNum(%d), earfcn(%d), cell_id(%d)
Line 1441: Warning!! UTRAN FreqInfo NUM(%d) > (%d)
Line 1506: GERAN FreqInfo NUM(%d)
Line 1528: LteRrm_AddCdmaFreqInfoToList
Line 1532: FreqInfo is Null(%d, %d)
Line 1578: CDMA FreqInfo NUM(%d)
Line 1605: LteRrm_AddFreqInfoToList : pNewElem NULL
Line 1611: AddFreqInfoToList - pFreqList is empty : Add pNewElem as the Last element 
Line 1631: AddFreqInfoToList - pFreqList isn't empty : Sorting InterFreq
Line 1689: LteRrm_SortInterFreqInfoList
Line 1693: pInterFreq is empty
Line 1697: pInterFreq isn't empty : Sorting InterFreq Based on Power Levels
Line 1791: LteRrm_RemoveFreqInfoFromList(RAT_type:%d, earfcn:%d)
Line 1808:   >> InterFreqNum:%d, InterFreqCellNum:%d
Line 1816:   >> UtraFreqNum:%d
Line 1823:   >> GeranFreqNum:%d
Line 1831:   >> CdmaFreqNum:%d
Line 1839:   >> NrFreqNum:%d
Line 1883: Wrong input: RAT_type(%d) is not for LteRrm_RemoveFreqInfoFromScellList
Line 1889: LteRrm_RemoveFreqInfoFromScellList(earfcn:%d)
Line 1895: Scell freq(%d) is removed.(ScellFreqNum:%d)
Line 2010: Warning!! pFreqInfo is NULL in LteRrm_AddUnidListedCellToList
Line 2017: Warning!! pListedCell is NULL
Line 2027: Add Unid-Listed cell (PCID:%d, earfcn:%d, RAT_type:LTE)
Line 2053: Remove Unid-Listed cell(earfcn:%d, cell_ID:%d) from list
Line 2087: LteRrm_RemoveCellInfoFromSet - empty set (%d)
Line 2186: Scell(%d, %d) is not removed
Line 2304: LTE cell(earfcn:%d, PCID:%d, setType:%d,) is modified in listed set.
Line 2314: Scell(earfcn:%d, PCID:%d, setType:%d) is not removed
Line 2321: LTE cell(earfcn:%d, PCID:%d, setType:%d) is moved to ID_DETECTED set
Line 2328: LTE cell(earfcn:%d, PCID:%d, setType:%d) is moved to CANDI_DETECTED set
Line 2411: UMTS cell(arfcn:%d, scrCode:%d, setType:%d,) is modified in listed set.
Line 2494: GSM cell(arfcn:%d, setType:%d,) is modified in listed set.
Line 2555: Scell(%d, %d) is not removed
Line 2593: Warning! pFreqInfo NULL in LteRrm_GetMatchedUnidListedCell
Line 2599: Warning! RAT_type(%d) not expected in LteRrm_GetMatchedUnidListedCell
Line 2605: Warning! CellId:%d in LteRrm_GetMatchedUnidListedCell
Line 2685: pMatchedFreqInfo is NULL (pFreqList:0x%x, pFreqInfo:0x%x
Line 2769: No UTRA Freq Info so far
Line 2827: No GERAN Freq Info so far
Line 2873: LteRrm_GetMatchedGeranCellInfo : Cell %d is empty in the set %d freq %d
Line 2946: No CDMA Freq Info so far
Line 2990: pNewServingCellInfo->cell_ID != LTERRM->Set.pPrimaryCell->cell_ID
Line 3041: Intra-Freq blind HO
Line 3079: Inter-frequency cell
Line 3172: Inter-Freq blind HO
Line 3197: IntraFreq NULL
Line 3209: LteRrm_ChangeServingCellInfo - invalid State (%d)
Line 3271: pNewServingCellInfo is NULL
Line 3280: SameCellRevisit:%d
Line 3288: prevServCellId:%d, newServCellId:%d
Line 3291: SameCellRevisit:%d
Line 3310: IRAT HO ServingCellInfo Update
Line 3337: IntraFreq NULL
Line 3344: PrimaryCell NULL
Line 3363: IntraFreq NULL
Line 3396: Pcell Qoffset (%d -> %d)
Line 3402: Pcell IndOff (%d -> %d)
Line 3440: Listed cell (PCID:%d, Qoffset/IndOff:%d, set_type:%d)
Line 3511: Listed cell (PCID:%d, Qoffset/IndOff:%d, set_type:%d)
Line 3536: Listed cell (PCID:%d, Qoffset/IndOff:%d, set_type:%d)
Line 3541: Cell info is NULL
Line 3624: Blacklisted cell detected (earfcn : %d, cell ID : %d)
Line 3669: ServCellID but different CP => Ignore search_result->Candidate[%d] (Cell(%d), CP(%d))
Line 3697: Invalid set_type(%d) : cell ID=%d, cp=%d
Line 3754: Warning! CellInfo NULL in LteRrm_UpdateDetectedNeighborCellInfo
Line 3776: Unid-Listed cell --> buffer ALLOC. Added to CANDI_LISTED set (PCID:%d, earfcn:%d, RAT_type:LTE)
Line 3785: Unid-Listed cell detected but ignore it(%d, type:%d),[%d, %d], %d
Line 3844: pWeakestCell m0(%d), m1(%d), m0_m1(%d)  earfcn=%d, cell ID=%d
Line 3916: PrimaryCell=0x%x, IntraFreq=0x%x
Line 3927: EARFCN : %d, (max_m0 = %d, max_m1 = %d),(MaxM0 : %d, MaxM1 : %d)
Line 3937: SRCH Result[%d]: Cell_Id(%d) CpType(%d) frame_position(%d) CurPcellPos(%d) Fo(%d)
Line 3956: [TDD only] primary cell(%d), neighbor cell(%d) - removed
Line 3975: SCell time offset Not Update(Primary:%d, Old:%d, New:%d, Diff:%d)
Line 3990: [CHECK] LteRrm_UpdateDetectedCellInfo_Scell is NULL(earfcn=%d, index:%d)
Line 4018: SCell time offset Update(Primary:%d, Old:%d, New:%d, Diff:%d)
Line 4032: pFreqInfo is NULL
Line 4043: EARFCN : %d, (max_m0 = %d, max_m1 = %d),(MaxM0 : %d, MaxM1 : %d)
Line 4088: Warning! BlackList includes SCell(earfcn:%d, pci:%d) --> Not removed from cell buffer
Line 4109: LteRrm_UpdateBlackList - check black_list(%d)
Line 4136: LteRrm_UpdateAltTttCellList
Line 4150: - %d. cellIndex(%d) startPCI(%d) rangePCI(%d)
Line 4157: LteRrm_UpdateAltTttCellList - check altTTT_list(%d)
Line 4162: alt-TTT cellList numGroup(%d) numTotalCells(%d)
Line 4298: Blacklisted cell ignored (earfcn : %d, cell ID : %d)
Line 4331: alternative-TTT cell detected (earfcn(%d) cell ID(%d) cellIndex(%d))
Line 4365: [EUCA] Warning!! EUCA configured freq same as Intra Freq
Line 4380: [EUCA] Cell_Id(%d), cell_type(%d)
Line 4384: [EUCA] 1. Possible duplicate cell in EUCA config
Line 4401: [EUCA] EUCA Listed cell (PCID:%d, set_type:%d)
Line 4411: [EUCA] Cell_Id(%d) present for both
Line 4415: [EUCA] 2. Possible duplicate cell in EUCA config
Line 4418: [EUCA] EUCA Listed cell Present in UnidListedList (PCID:%d), cell_type(%d)
Line 4431: [EUCA] EUCA Listed cell_id(%d) added to UnidListedList, cell_type(%d)
Line 4510: This is CSG Reserved List Cell (EARFCN : %d, Cell ID : %d)
Line 4544: LteRrm_UpdateCsgCellList(), EARFCN:%d
Line 4548: LteRrm_UpdateCsgCellList - cell num(%d) -> MAX
Line 4556: LteRrm_UpdateCsgCellList - alloc fail
Line 4596: LteRrm_UpdateCsgProximityCellList(), EARFCN:%d
Line 4600: LteRrm_UpdateCsgProximityCellList - cell num(%d) -> MAX
Line 4608: LteRrm_UpdateCsgProximityCellList - alloc fail
Line 4656: LteRrm_UpdateCsgProximityUtraCellList(), UARFCN:%d
Line 4660: LteRrm_UpdateCsgProximityUtraCellList - cell num(%d) -> MAX
Line 4668: LteRrm_UpdateCsgProximityUtraCellList - alloc fail
Line 4718: This is CSG Cell (EARFCN : %d, Cell ID : %d)
Line 4743: LteRrm_ResetCsgCellList(), EARFCN:%d
Line 4753: LteRrm_ResetCsgCellList - abnormal num_csg_cells
Line 4763: LteRrm_ResetCsgCellList - abnormal csg_cell_list
Line 4797: This is CSG Cell (EARFCN : %d, Cell ID : %d)
Line 4822: LteRrm_RemoveCsgMeasList
Line 4831: Remove CSG Meas Request Intra EARFCN : %d
Line 4843: Remove CSG Meas Request Inter EARFCN : %d
Line 4867: Remove CSG Meas(ONLY) Request Inter EARFCN : %d
Line 4897: LteRrm_RemoveCsgUtraMeasList
Line 4907: Remove CSG Meas Request UARFCN : %d
Line 4932: Remove CSG Meas(ONLY) Request UARFCN : %d
Line 4961: LteRrm_UpdateCSGBarredList: EUTRA_List(%d),UTRA_List(%d), Restore List(%d)
Line 4975: LteRrm_UpdateCSGBarredList - abnormal eutra_list_size(%d) with no list
Line 4991: LteRrm_UpdateCSGBarredList - abnormal utra_list_size(%d) with no list
Line 5003: Restore cell list(i): RAT_Type(%d), (E)ARFCN(%d), Cell_ID(%d)
Line 5013: Unsupported RAT Type:(%d)
Line 5021: LteRrm_UpdateCSGBarredList - abnormal restore_cell_list_num(%d) with no list
Line 5050: Initialized Pcell Qoffset (%d -> 0)
Line 5060: num of intRA F n: %d
Line 5074: num of intRA F black: %d
Line 5091: Warning : pSIB4->csg_pci_range_present = %d
Line 5132: InterFreq: earfcn(%d) q_rxlevmin(%d) t_resel(%d) thresh_x_high(%d) thresh_x_low(%d) qoffset_freq(%d)
Line 5135: cell_resel_prio_present(%d) cell_resel_prio(%d) resel_sub_priority_present(%d) resel_sub_priority(%d)
Line 5139: q_qualmin_present(%d) q_qualmin(%d) thresh_x_Q_present(%d) thresh_x_Q(%d)
Line 5143: This Freq is not support(eNB error)(Earfcn:%d)
Line 5154: ERROR: Freq in SIB5 is same as Serv Freq (eNB error)
Line 5179: pFreqInfo NULL
Line 5261: SIB5: q_QualPresent=(%d), q_QualMin=(%d), q_Qualminoffset=(%d), q_QualMinWBPresent=(%d), q_QualMinAllSymbolPresent=(%d)
Line 5305: num of inter Freq : %d
Line 5319: num of inter Freq black : %d
Line 5350: Buffer overflow: TempNewNeighFreq buffer size is 8(LTE_RRC_MAX_FREQ)
Line 5385: Total EUTRAN Inter FreqInfo Num(%d)
Line 5413: SIB6 NTF: Start UTRA FDD Config
Line 5422: UtraFreq FDD: arfcn(%d) q_rxlevmin(%d) q_qualmin(%d) thresh_x_high(%d) thresh_x_low(%d) cell_resel_priority(%d)(present:%d)
Line 5425: qthresh_x_Q_present(%d) thresh_x_Q(%d)
Line 5450: Cannot Allocate FreqInfo buffer
Line 5519: UtraFreq TDD: arfcn(%d) q_rxlevmin(%d) thresh_x_high(%d) thresh_x_low(%d) cell_resel_priority(present:%d)(%d)
Line 5543: Cannot Allocate FreqInfo buffer
Line 5688: Arfcn(%d), Band_Indicator(%d), AccessTechIndex(%d), Band_Supported(%d)
Line 5713: UnSupported GSM Band(%d), Set Default Pmax(%d)
Line 5742: SIB7 NTF: Start GERAN Config
Line 5753: ( %d)[%s] SupportBand(%d), PowerClass(%d)
Line 5763: GeranFreq: band(%d) starting_arfcn(%d) num_of_arfcns(%d) q_rxlevmin(%d) thresh_x_high(%d) thresh_x_low(%d)
Line 5765: cell_resel_priority(present:%d)(%d)
Line 5791: Cannot Allocate FreqInfo buffer
Line 5876: pCellInfo is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 5936: Bandclass is empty(%d)
Line 5946: Cdma(HRPD) Freq: band(%d) arfcn(%d) thresh_x_high(%d) thresh_x_low(%d)
Line 5948: cell_resel_priority(present:%d)(%d)
Line 5975: Cannot Allocate FreqInfo buffer
Line 6023: num of CDMA HRPD neighbor: %d
Line 6070: Bandclass is empty(%d)
Line 6080: Cdma(1xRTT) Freq: band(%d) arfcn(%d) thresh_x_high(%d) thresh_x_low(%d)
Line 6082: cell_resel_priority(present:%d)(%d)
Line 6109: Cannot Allocate FreqInfo buffer
Line 6156: num of CDMA 1xRTT neighbor: %d
Line 6194: SIB8 NTF: Start CDMA HRPD Config
Line 6198: SIB8 Ptr is NULL
Line 6208: NULL HRPD info in SIB8
Line 6217: NULL 1xRTT info in SIB8
Line 6258: CSG Freq: earfcn(%d) cell_resel_prio(%d) q_rxlevmin(%d) q_qualmin(%d)
Line 6264: num of IntraFreq(earfcn:%d) CSG Cell: %d
Line 6301: num of InterFreq(earfcn:%d) CSG Cell: %d
Line 6340: pFreqInfo NULL
Line 6396: num of InterFreq(earfcn:%d) CSG Cell: %d
Line 6433: CSG Meas Req: Start CSG UTRA FDD Config
Line 6440: UtraFreq: arfcn(%d) cell_resel_priority(%d) q_rxlevmin(%d) q_QualMin(%d)
Line 6448: num of Utra Freq(uarfcn:%d) CSG Cell: %d
Line 6490: Cannot Allocate FreqInfo buffer
Line 6535: num of Utra Freq(uarfcn:%d) CSG Cell: %d
Line 6579: LteRrm_SortRsrpToList : pNewSortedCellInfo is NULL
Line 6668: LteRrm_SortRsrqToList : pNewSortedCellInfo is NULL
Line 6739: LteRrm_SortRssinrToList : pNewSortedCellInfo is NULL
Line 6802: LteRrm_SortRssiToList : pNewSortedCellInfo is NULL
Line 7019: Cell(Freq:%d, PCID:%d, L1_filter_length:%d) is not included in RSRP sorted list
Line 7033: Cell(Freq:%d, PCID:%d, L1_filter_length:%d) is not included in RSRQ sorted list
Line 7047: Cell(Freq:%d, PCID:%d, L1_filter_length:%d) is not included in RSSINR sorted list
Line 7164: NCC for GERAN cell(Arfcn:%d, BSIC:%d, RSSI:%d) is not permitted.(Set Freq:%d, ncc_permitted:0x%X)
Line 7175: CDMA Cell(Freq:%d, PCID:%d, RSRP:%d) is removed in RRM RSRP sorted list
Line 7186: 1xRTT Cell(Freq:%d, PCID:%d, RSRP:%d) is removed in RRM RSRP sorted list
Line 7199: Cell(PCID:%d, RSRP:%d) is removed in RRM RSRP sorted list.(Freq:%d, best RSRP:%d, RSRP_Threshold:%d))
Line 7218: NR Cell(PCID:%d, RSRP:%d) is removed in RRM RSRP sorted list.(Freq:%d, best RSRP:%d))
Line 7226: LteRrm_ArrangeSortedList - default RAT(%d)
Line 7284: Cell(PCID:%d, RSRP:%d) is removed in RRM RSRQ sorted list.(Freq:%d, best RSRP:%d, RSRP_Threshold:%d)
Line 7539: LteRrm_IsCandiAndIDSetsEmpty : NR LTERRM_CANDI_DETECTED has pbch decode done cell
Line 7587: IDLE_S(%d)(%d) %d , (%d %d), %d, (RSRQ: %d)
Line 7596: CONN_S(%d)(%d) %d , (%d %d), %d, (RSRQ: %d)
Line 7605: %s State (%d)(%d) %d , m0(%d), TO:%d, (RSRQ: %d)
Line 7659: (INTRA)(EARFCN:%d)(PCID:%d) (RSRP:%4d), to:%d, (RSRQ: %4d)
Line 7665: (INTER)(EARFCN:%d)(PCID:%d) (RSRP:%4d), to:%d, (RSRQ: %4d)
Line 7671: (UTRA_FDD)(UARFCN:%d)(PSC:%d) (RSCP:%4d), to:%d, (EcNo: %4d)
Line 7676: (UTRA_TDD)(UARFCN:%d)(PSC:%d) (RSCP:%4d), to:%d
Line 7682: (GERAN)(ARFCN:%d) (BI:%d) (BSIC:%d), (RSSI:%d), To:%d
Line 7688: (CDMA_HRPD)(BC:%d) (BSID:%d), (PN_Strength:%d), (PN_Phase:%d)
Line 7694: (CDMA_1x)(BC:%d) (BSID:%d), (PN_Strength:%d), (PN_Phase:%d)
Line 7700: (NR)(NR-ARFCN:%d)(PCID:%d) (RSRP:%4d), to:%d, (RSRQ: %4d)
Line 7941: EARFCN(%d) timing change(sleep) : %d
Line 7958: N pos change(sleep):(%d) %d -> %d
Line 7999: S pos change(sleep) : %d
Line 8008: PrimaryCell is NULL
Line 8175: Updated MRU(%d) : %d
Line 8188: Invalid EARFCN(0x%x) received, Don't update MRU table
Line 8260: LteRrm_GetDlBand: NOT Supported DL_EARFCN %d!!!
Line 8327: LteRrm_GetUlBand: NOT Supported UL_EARFCN %d!!!
Line 8388: LTE band[%d] not support due to hw limitation
Line 8420: SupportEarfcnList[%d] = %d
Line 8435: Common Support PCI(Lock) = %d
Line 8464: LteRrm_CheckSupportBand: NOT Supported DL_EARFCN %d!!!
Line 8488: HALEXP_CheckRFBandValid: NOT Supported DL_EARFCN %d(%d)!!!
Line 8505: gLteRrm_SupportEarfcnList: NOT Supported DL_EARFCN %d(%d)!!!
Line 8513: LteRrm_CheckSupportBand: NOT Supported DL_EARFCN %d(%d)!!!
Line 8540: PCID(%d) could not found in LteRrm_FindEutranSCellInfo
Line 8595: Cannot Allocate MeasList buffer
Line 8605: Cannot Allocate MeasList buffer
Line 8616: Cannot Allocate MeasList buffer
Line 8688: serving cell : earfcn(%d), band(%d), PCID(%d), DL(%d), UL(%d)
Line 8709: Eutran(intra:%d) : PCID(%d), RSRP(%d), RSRQ(%d)
Line 8759: Eutran(inter:%d) : earfcn(%d) PCID(%d), RSRP(%d), RSRQ(%d)
Line 8989: LteRrm_InitServCellInfo
Line 9010: ServCellInfo: bNormalCell(%d), earfcn(%d), pcid(%d)
Line 9032: Set ServCellInfo.startTime(%d) - mobility history Tmr START
Line 9055: Set ServCellInfo.lastTime(%d)
Line 9089: Set ServCellInfo.spentTime(%d) - bSpentTimeMax(%d)
Line 9118: Update plmn-id, cell-id in ServCellInfo
Line 9133: Monitor ServCellInfo
Line 9136: - CGI:%8x, MCC:%d, MNC:%d%x, EARFCN:%d
Line 9138: - pcid:%d, startTime:%d, lastTime:%d
Line 9170: NumVisitedCell would be %d > 16 (Max size)
Line 9176: - removed an oldest cell(earfcn:%d, pcid:%d)
Line 9180: NumVisitedCell(%d)
Line 9198: VisitedCellList is NULL
Line 9205: First camp-on: bFirstVisitedCell changes (1->0)
Line 9211: Last ServCellInfo is NULL, Do not add to Visited List
Line 9215: Add current cell to VisitedCellList
Line 9225: - added cell(earfcn:%d, pcid:%d)
Line 9226: - NumVisitedCell++: %d->%d
Line 9251: VisitedCellList(Num:%d) ---
Line 9260: %d. Earfcn:%d - cellId:%d, Mcc:%d, Mnc:%d%x
Line 9261: - GlobalCID:%8x, spentTime:%d
Line 9305: LteRrm_InitVisitedCellList
Line 9328: LteRrm_FreeVisitedCellList
Line 9401: bNormalCell(%d)
Line 9402: - NULL information is stored in ServCellInfo
Line 9453: Same cell revisit: no update for visitedCellList
Line 9476: LTERRM->Set.pVisitedCellList is NULL
Line 9505: Suspend cause(%d)
Line 9579: Warning! pFreqInfo is NULL
Line 9585: Warning! pci(%d) out of range
Line 9615: LteRrm_UpdateGapFaInfo : search_result is NULL
Line 9635: LteRrm_UpdateGapFaInfotoL1 : NULL
Line 9652: LteRrm_InitGapFaInfotoL1 : NULL
Line 9775: [RRM-MBSFN] LteRrm_GetMbsfnSubframePattern num_mbsfn_config(%d) duplex_mode[%d]
Line 9788: Period(%d) Offset(%d) choice(%d) allocation(0x%x)
Line 9810: [MBSFN] ERROR: Subframe Allocation value is not valid [%d]
Line 9832: [MBSFN] ERROR: Subframe Allocation value is not valid [%d]
Line 9884: [RRM-MBSFN] Invalid Number of Subframe Configuration[%d]
Line 9909: (MobState) LteRrm_SetMobilityState
Line 9910: - TempCRCnt(%d) NMed(%d) NHigh(%d)
Line 9917: - State: HIGH_MOBILITY_STATE
Line 9922: - State: MEDIUM_MOBILITY_STATE
Line 9943: - State: NORMAL_MOBILITY_STATE
Line 9963: bFirstMeasRemain: 0
