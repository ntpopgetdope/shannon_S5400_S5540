Line 150: Warning! pCellInfo:NULL in NbRrm_IsSameAsServingCell
Line 184: NbRrm_SetLastNetwork(earfcn:%u, cell_id:%u)
Line 254: Warning!! NbRrm_AllocFreqInfo FULL
Line 285: [Alloc Freq_buffer] earfcn:%u (freq_num:%d, DB_idx:%d)
Line 326: [Free Freq] earfcn:%u --> freq_num:%d
Line 368: [Get Cell_buffer] earfcn:%u, cell_id:%u (DB_idx:%d)
Line 388: Warning!! NbRrm_AllocCellInfo FULL
Line 421: [Alloc Cell_buffer] earfcn:%u, cell_id:%u (cell_num:%d, DB_idx:%d)
Line 442: Warning! About to free, gNbRrm_CellInfoNum is already 0 --> Need to check handling this
Line 449: [Free Cell] earfcn:%u, cell_id:%u --> cell_num:%d
Line 483: Warning!! NbRrm_AllocSortedCellInfo FULL
Line 541: NbRrm_InitIdleReinitMngr
Line 556: num_inter_freq:0
Line 577: Warning! Current NBRRM->InterFreq.cnt(%d) --> No more than Max num(%d) in NbRrm_IncreaseNumInterFreq
Line 580: num_inter_freq:%d
Line 597: Warning! Keep NBRRM->InterFreq.cnt:0 --> No less than 0 in NbRrm_DecreaseNumInterFreq
Line 604: num_inter_freq:%d
Line 623: Warning! pFreqInfo: NULL in NbRrm_AddInterFreqToList
Line 650: Warning! pCellInfo:NULL in NbRrm_AdjustCellTimeOffset
Line 660: - Cell[%u](%u) pos change(sleep): %u -> %u
Line 684: Warning! pFreqInfo:NULL in NbRrm_AdjustFreqTimeOffset
Line 781: Warning! pFreqInfo: NULL in NbRrm_InitAllQoffset
Line 794: Init Qoffsets,n: 0 (earfcn:%u, cell_id:%u)
Line 861: Warning! pFreqInfo: NULL in NbRrm_InitAllSortedListOfFreq
Line 881: NbRrm_InitSupportBandList
Line 901: NbRrm_InitIntraFreq
Line 930: NbRrm_InitInterFreqList
Line 955: Warning! pServCellInfo:NULL in NbRrm_InformNl1cNrsrpResult
Line 1009: pFreqInfo: NULL in NbRrm_GetCntNrsrpSortedList
Line 1206: Warning! NBRRM->pServingCell: NULL in NbRrm_GetIntraCellCntToMeas
Line 1212: Warning! NBRRM->pIntraFreq: NULL in NbRrm_GetIntraCellCntToMeas
Line 1276: Warning! band(%d), earfcn(%u) NOT configured by upper layer
Line 1348: Cell(earfcn:%u, cell_id:%u) removed from set_type(%s)
Line 1383: Warning! pCellInfo: NULL in NbRrm_RemoveCellInfoFromSortedList
Line 1389: Warning! pFreqInfo: NULL in NbRrm_RemoveCellInfoFromSortedList
Line 1395: Warning! Wrong metric(%d) used in NbRrm_RemoveCellInfoFromSortedList
Line 1405: Warning! pFreqInfo->nrsrp_sorted_list: Not initialized in NbRrm_RemoveCellInfoFromSortedList
Line 1411: Cell(earfcn:%u, cell_id:%u) is not in NRSRP sorted list of freq buffer
Line 1419: Warning! pFreqInfo->nrsrq_sorted_list: Not initialized in NbRrm_RemoveCellInfoFromSortedList
Line 1425: Cell(earfcn:%u, cell_id:%u) is not in NRSRQ sorted list of freq buffer
Line 1433: Warning! pFreqInfo->nrssi_sorted_list: Not initialized in NbRrm_RemoveCellInfoFromSortedList
Line 1439: Cell(earfcn:%u, cell_id:%u) is not in NRSSI sorted list of freq buffer
Line 1471: Cell(earfcn:%u, cell_id:%u) removed from %s sorted list of freq buffer
Line 1476: Cell(earfcn:%u, cell_id:%u) is not in %s sorted list of freq buffer
Line 1502: Warning! pFreqInfo(0x%x) == iNextP(0x%x) --> cannot remove freq(%u) from List in NbRrm_RemoveFreqInfoFromList
Line 1508: NbRrm_RemoveFreqInfoFromList(earfcn:%d)
Line 1537: Warning! NBRRM->InterFreq.list: Not initialized in NbRrm_FreeAllFreqInfoFromInterList
Line 1569: NbRrm_ResetTreselFlagForAllCells(earfcn:%d)
Line 1620: Warning! pFreqInfo: NULL in NbRrm_AddCellInfoToSet
Line 1626: Warning! pCellInfo: NULL in NbRrm_AddCellInfoToSet
Line 1637: Warning! earfcn is different (freq:%u, cell:%u) in NbRrm_AddCellInfoToSet
Line 1646: - cell(%u/%u) added to set_type(%s)
Line 1791: Warning! earfcn is different (freq:%u, cell:%u) in NbRrm_MoveCellInfo
Line 1798: - cell(%u/%u) moved to set_type(%s)
Line 1840: Cell(earfcn:%d, PCID:%d, setType:%d) is moved to ID_DETECTED set
Line 1847: Cell(earfcn:%d, PCID:%d, setType:%d) is moved to CANDI_DETECTED set
Line 1889: Warning! pNewCellElem: NULL in NbRrm_AddCellToSortedList
Line 1895: Warning! pSortedList: NULL in NbRrm_AddCellToSortedList
Line 1901: Warning! pSortedList: Not initialized in NbRrm_AddCellToSortedList
Line 1907: Warning! Wrong metric(%d) used in NbRrm_AddCellToSortedList
Line 1982: Warning! NBRRM->pServingCell: NULL in NbRrm_AddServCellToLastOfReselList --> Serv.cell is not added to resel list
Line 2016: Warning! pFreqInfo == NULL in NbRrm_GetMatchedCellInfo
Line 2152: Warning! pCellInfo: NULL at NbRrm_SetServCell
Line 2160: Set NB-IoT Serving Cell (earfcn:%d, rasterOffset:%d, cell_id:%d)
Line 2181: Warning! pFreqInfo: NULL at NbRrm_SetIntraFreq
Line 2187: Set NB-IoT Intra-freq (earfcn:%d, rasterOffset:%d, num_cell:%d)
Line 2212: Warning! pFreqInfo:NULL in NbRrm_SetListedCell
Line 2216: Set Listed cell (earfcn:%u, cellId:%u)
Line 2232: Warning! configured LISTED CELL(earfcn:%u, cellId:%u) is in wrong set_type(%d) in NbRrm_SetListedCell
Line 2237: - set_type:%u, Qoffsets,n:%d
Line 2246: - set_type:%u, Qoffsets,n:%d
Line 2302: Warning! pFreqInfo: NULL at NbRrm_SetBlackList
Line 2313: Set blacklisted cell(pci:%d)
Line 2324: - Blacklist num_groups(%d)
Line 2329: Warning! Blacklist num_groups(%d) configured more than max(%d) at NbRrm_SetBlackList
Line 2352: Warning! pFreqInfo: NULL at NbRrm_IsBlackListedCell
Line 2358: Warning! pCellInfo: NULL at NbRrm_IsBlackListedCell
Line 2365: Warning! earfcn of pFreqInfo(%u), pCellInfo(%u) different at NbRrm_IsBlackListedCell
Line 2376: - Cell Blacklisted (EARFCN:%u, Cell_id:%u)
Line 2400: Warning! pCellInfo: NULL at NbRrm_SetCellAntNum
Line 2405: Set antNum:%d to cell(earfcn:%d, pci:%d)
Line 2425: Warning! pFreqInfo:NULL in NbRrm_SetTreselFreq
Line 2430: Set tResel:%d for earfcn:%u
Line 2449: Warning! pFreqInfo:NULL in NbRrm_SetFreqOffset
Line 2454: Set qOffsetFreq:%d for earfcn:%u
Line 2534: Warning! NBRRM->pServingCell: NULL at NbRrm_UpdateMibForConnRel
Line 2557: Warning! OperationMode(%d) wrong value in NbRrm_UpdateMibForConnRel
Line 2560: Set rasterOffset(%d)
Line 2564: Warning! NBRRM->pIntraFreq:NULL in NbRrm_UpdateMibForConnRel
Line 2597: Warning! NBRRM->pServingCell: NULL at NbRrm_UpdateMibForIdleMode
Line 2620: Warning! OperationMode(%d) wrong value in NbRrm_UpdateMibForIdleMode
Line 2623: Set rasterOffset(%d)
Line 2628: Warning! NBRRM->pIntraFreq:NULL in NbRrm_UpdateMibForIdleMode
Line 2665: Warning! NBRRM->pServingCell: NULL at NbRrm_UpdateSib1ForConnRel
Line 2676: - MFBI detected (earfcn changed: %d -> %d
Line 2700: Warning! NBRRM->pServingCell: NULL at NbRrm_UpdateSib1ForIdleMode
Line 2711: - MFBI detected (earfcn changed: %d -> %d
Line 2741: - Deactivate SC-PTM of freq(%u)
Line 2753: - Deactivate SC-PTM of freq(%u)
Line 2773: EARFCN(%u) from RRC
Line 2780: Warning!! earfcn(%d) not found from current intra/inter-freq
Line 2784: Warning!! Already activated for earfcn(%u)
Line 2789: - Activate SC-PTM of freq(%u)
Line 2798: Warning!! earfcn(%d) not found from current intra/inter-freq
Line 2802: Warning!! Already deactivated for earfcn(%u)
Line 2807: - Deactivate SC-PTM of freq(%u)
Line 2833: Warning! pFreqInfo: NULL in NbRrm_UpdateRasterOffsetToAllCells
Line 2837: NbRrm_UpdateRasterOffsetToAllCells(earfcn:%u, rasterOffset:%d)
Line 2882: Warning! pInterFreq:NULL in NbRrm_SetInterFreq
Line 2889: Warning! earfcn(%u) same as intRA but configured for intER-frequency 
Line 2898: [%d] Inter-freq (Earfcn:%u) ---
Line 2905: Warning! Intra-freq(earfcn:%u) configured for inter --> Skip
Line 2912: Warning! Removed pFreqInfo: NULL in NbRrm_SetReselParamToInterFreq
Line 2935: Warning! Allocated pFreqInfo: NULL in NbRrm_SetReselParamToInterFreq
Line 3004: Warning! no_of_bands == 0 --> No update of supported bands
Line 3013: Warning! no_of_bands(%d) larger than Max_Supported_Band(%d) --> Update bands up to Max index
Line 3017: Supported Band List ---
Line 3021: - Band %d
Line 3042: Warning! pCellInfo:NULL in NbRrm_SetAgcIdxToCell --> Skip AGC update
Line 3049: - Set agcUpdateIdx(%d) to cell(%u/%u)
Line 3068: Warning! pFreqInfo:NULL in NbRrm_SetAgcIdxToFreq --> Skip AGC update
Line 3074: - Set agcUpdateIdx(%d) to freq(%u)
Line 3093: Warning! pCellInfo:NULL in NbRrm_SetFreqOffsetToCell --> Skip freqOffset update
Line 3100: - Set freqOffset(%d) to cell(%u/%u)
Line 3119: Warning! pFreqInfo:NULL in NbRrm_SetFreqOffsetToFreq --> Skip freqOffset update
Line 3125: - Set freqOffset(%d) to freq(%u)
Line 3144: Warning! pCellInfo:NULL in NbRrm_SetSyncResult --> Skip processing search result
Line 3150: Warning! syncResult:NULL in NbRrm_SetSyncResult --> Skip processing search result
Line 3156: - cell_id(%d): time_offset(%d)
Line 3278: (Instant  CINR) [%u](%u) %6d %6d (sample_cnt:%d, timeDone:%d)
Line 3282: (Instant  MEAS)  [%u](%u) %6d %6d %6d %6d %6d
Line 3283:     (sample_cnt:%d, timeDone:%d)
Line 3308: Warning! pCellInfo == NULL in NbRrm_SetInstNschResult
Line 3329: (Instant  NSCH) [%u](%u) %6d (sample_cnt:%d, timeDone:%d)
Line 3422: Warning! pCellInfo == NULL in NbRrm_FilterNschResult
Line 3428: Warning! num_nsch_sample == 0 in NbRrm_FilterNschResult
Line 3473: (Filtered NSCH) [%u](%u) %6d (length:%d)
Line 3480: (Filtered NSCH) [%u](%u) --> filter_length:1
Line 3515: Warning! pCellInfo == NULL in NbRrm_FilterNrsResult
Line 3521: Warning! num_nrs_sample == 0 in NbRrm_FilterNrsResult
Line 3567: (Filtered MEAS)  [%u](%u) %6d %6d %6d (length:%d)
Line 3595: Warning! pCellInfo == NULL in NbRrm_FilterNrsCinrResult
Line 3601: Warning! num_nrs_cinr_sample == 0 in NbRrm_FilterNrsCinrResult
Line 3644: (Filtered CINR) [%u](%u) %6d (length:%d)
Line 3667: Set Barred freq(num:%d)
Line 3676: Warning!! num_barred_freq(%d) > (%d)
Line 3682: - earfcn:%u
Line 3686: Set Forbidden freq(num:%d)
Line 3695: Warning!! num_forbidden_freq(%d) > (%d)
Line 3701: - earfcn:%u
Line 3705: Set Barred cell(num:%d)
Line 3714: Warning!! num_barred_cell(%d) > (%d)
Line 3721: - earfcn:%u, pci:%d, raster_offset:%d
Line 3798: Warning! pCellInfo: NULL in NbRrm_IsCellBarred
Line 3810: - Cell Barred (EARFCN:%u, Cell_id:%u)
Line 4004: Warning! NBRRM->pIntraFreq:NULL in NbRrm_GetDmNeighCellCnt
Line 4036: Warning! NBRRM->pIntraFreq:NULL in NbRrm_GetDmNeighCellList
Line 4074: Warning! pCellInfo:NULL in NbRrm_SetDmNeighborList
Line 4150: Warning! pCellInfo:NULL in NbRrm_SetDmInitMeasCellList
Line 4232: Serving Cell[%4d_%3d], NRSRP:%d, NRSRQ:%d, SFN:%d, H-SFN:%d, FO:%d
Line 4241: Intra cell number = %d
Line 4266: Inter cell number = %d
Line 4270: numberOfNeibourCells = %d
Line 4277: Cannot Allocate Message buffer for NCell
Line 4299: Intra Cell Info[%d]: earfcn:%4d, PCID:%d, NRSRP:%d, NRSRQ:%d, FO:%d
Line 4339: Inter Cell Info[%d]: earfcn:%4d, PCID:%d, NRSRP:%d, NRSRQ:%d, FO:%d
Line 1183: Warning! earfcn(%u) NOT defined for NB-IoT Bands!!!
Line 1746: NbRrm_RemoveAllFreqFromScptmList
Line 1752: - remove earfcn(%u) from SC-PTM list
Line 1670: Warning!! Already freq(%u) Set in SC-PTM list
Line 1685: Warning!! SC-PTM freq list: FULL (EARFCN:%u not added) in NbRrm_AddFreqToScptmList
Line 1693: - Set SC-PTM freq(%u) to list (cnt:%d)
Line 1722: Warning!! Cannot find EARFCN:%u from SC-PTM list in NbRrm_RemoveFreqFromScptmList
Line 1729: - Remove SC-PTM freq(%u) from list (cnt:%d)
Line 2490: Set raster offset(%d) to earfcn(%u)
Line 2501: - update raster offset(%d) to cell(%u)
Line 3356: Warning! NBRRM->pServingCell:NULL in NbRrm_GetFilterWindowLengthInMs
Line 3379: Warning! num of inter-freq: 0 in NbRrm_FilterNrsResult --> Abort Filtering
Line 3390: Warning! proc(%d) not expected to perform filtering
