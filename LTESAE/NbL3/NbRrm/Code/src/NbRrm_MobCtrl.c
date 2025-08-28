Line 122: Warning! CANDI_DETECTED set list: Not initialized in NbRrm_MoveAllCandiDetCellToIdDetSet
Line 126: Move all cells in CANDI_DETECTED set list to ID_DETECTED set temporarily
Line 179: Warning! Curr ProcState(%d) is not NB_RRM_CONN in NbRrm_ProcConnRelease
Line 185: Warning! NBRRM->pServingCell: NULL in NbRrm_ProcConnRelease
Line 207: NbRrm_InitCellSelMngr - RemainIntraFreq:%d
Line 253: NbRrm_InitReselMngr
Line 278: Warning! pCellInfo: NULL in NbRrm_AddReselCandiCell
Line 330: Warning! Freq Scan disabled(%d) or wrong proc(%d) at NbRrm_ProcBlindFreqScanLoop
Line 336: Warning! Freq Scan Loop called with curEarfcn(%d) out of range
Line 355: Warning! Cell sel disabled(%d) or wrong proc(%d) at NbRrm_ProcCellSelScanStep
Line 365: [%d] Scan Step (earfcn:%d, afcMode:%s)
Line 385: Warning! Cell sel disabled(%d) or wrong proc(%d) at NbRrm_ProcCellSelSyncStep
Line 392: Warning! Cell sel cur_freq(%d) exceeds num_freq(%d) at NbRrm_ProcCellSelSyncStep
Line 400: [%d] Sync Step (earfcn:%d, rasterOffset:%d)
Line 404: Warning! gNbRrm_CellSelMngr.freq[gNbRrm_CellSelMngr.cur_freq].pFreqInfo: NULL in NbRrm_ProcCellSelSyncStep
Line 427: Warning! Cell sel disabled(%d) or wrong proc(%d) at NbRrm_ProcCellSelMeasStep
Line 434: Warning! Cell sel cur_freq(%d) exceeds num_freq(%d) at NbRrm_ProcCellSelMeasStep
Line 442: Warning! pFreqInfo: NULL for cur_freq(%d) at NbRrm_ProcCellSelMeasStep
Line 455: [%d] Meas Step (earfcn:%d, rasterOffset:%d)
Line 463: Warning! CANDI_DETECTED set: NULL or empty at NbRrm_ProcCellSelMeasStep
Line 489: -%d. cell_Id:%d, time_offset:%d
Line 526: Warning! Cell sel disabled(%d) or wrong proc(%d) at NbRrm_ProcCellSelSortStep
Line 532: Warning! cur_freq pFreqInfo: NULL at Sort Step
Line 538: Warning! best_sorted_list == NULL at Sort Step
Line 544: Warning! nrsrp_sorted_list: NULL of target freq at Sort Step
Line 549: Warning! nrsrp_sorted_list: empty of target freq at Sort Step
Line 557: Warning! cur_freq nrsrp_sorted_list first entry: NULL at Sort Step
Line 563: Warning! Adding target cell to best sorted list failure at Sort Step
Line 595: Warning! Cell sel disabled(%d) or wrong proc(%d) at NbRrm_ProcCellSelCellLoop
Line 601: Warning! cur_cell or cur_cell->sorted_cell_ptr:NULL at NbRrm_ProcCellSelCellLoop
Line 612: [%d] Cell Loop Step (earfcn:%u, cell_id:%u, rasterOffset:%d, freqOffset:%d)
Line 638: Receive RRM_RRC_FREQ_SCAN_REQ message (start:%d, end:%d, afcMode:%d, ScanMode:%d)
Line 670: Warning! RRM_NL1C_FREQ_SCAN_CNF not expected in gNbRrm_ProcState(%d), gNbRrm_CellSelMngr.enable(%d)
Line 686: Warning! pFreqInfo: NULL at MemAlloc in NbRrm_ProcFreqScanCnf
Line 693: (earfcn:%d, rasterOffset:%d) Scan success --
Line 702: - Try next carrier (cnf->isFreqValidResult:0)
Line 713: Warning! RRM_NL1C_FREQ_SCAN_CNF not expected in NB_RRM_FREQ_SCAN proc, gNbRrm_FreqScanMngr.enable(%d)
Line 742: [Blind Scan] Remove Prev EARFCN: %d (index: %d, pschMaxEnergy: %d, rssi:%d, num_freq_in_list:%d)
Line 757: [Blind Scan] Add EARFCN: %d, pschMaxEnergy: %d, rssi:%d, rasterOffset:%d, accCnt:%d
Line 759: [Blind Scan] num_freq_in_list:%d
Line 781: Warning! RRM_NL1C_FREQ_SCAN_CNF not expected in gNbRrm_ProcState(%d)
Line 811: Warning! cur_freq(%d) pFreqInfo:NULL unexpected for init search
Line 820: - Try next carrier (cnf->isSrchValidResult:%d, cnf->result.Num:%d)
Line 833: Warning! unexpected earfcn(%d) from search (expected:%d)
Line 845: Warning! unexpected earfcn(%d) from search (expected:%d)
Line 857: Warning! CANDI_DETECTED set list: Not initialized before arranging init search result
Line 868: Search result(earfcn:%u, rasterOffset:%d, num_cell:%d) --
Line 880: Warning! wrong pci from search(%d) --> skip processing
Line 884: (%d) cell_id(%d): time_offset(%d)
Line 900: Warning! pCellInfo: NULL at MemAlloc in NbRrm_ProcInitSearchCnf
Line 948: Warning! gNbRrm_CellSelMngr disabled in NbRrm_SetCellAntNumForCellSel
Line 954: Warning! gNbRrm_CellSelMngr.cur_cell:NULL in NbRrm_SetCellAntNumForCellSel
Line 960: Set antNum:%d to (earfcn:%d, pci:%d)
Line 982: Warning! NBRRM->Set.reSelMngr.num_cell: 0 in NbRrm_SetCellAntNumForCellReSel
Line 989: Warning! NBRRM->Set.reSelMngr.enable: 0 in NbRrm_SetCellAntNumForCellReSel
Line 997: Warning! NBRRM->Set.reSelMngr.cur_cell->sorted_cell_ptr: NULL in NbRrm_SetCellAntNumForCellReSel
Line 1003: Set antNum:%d to (earfcn:%d, pci:%d)
Line 1021: Warning! gNbRrm_CellSelMngr disabled in NbRrm_UpdateMibForCellSel
Line 1027: Warning! cur_cell: NULL in NbRrm_UpdateMibForCellSel
Line 1050: Warning! OperationMode(%d) wrong value in NbRrm_UpdateMibForCellSel
Line 1053: Set rasterOffset(%d)
Line 1066: Warning! gNbRrm_CellSelMngr.freq[gNbRrm_CellSelMngr.cur_freq].pFreqInfo: NULL in NbRrm_UpdateMibForCellSel
Line 1091: Warning! NBRRM->Set.reSelMngr.num_cell: 0 in NbRrm_UpdateMibForCellReSel
Line 1098: Warning! NBRRM->Set.reSelMngr.enable: 0 in NbRrm_UpdateMibForCellReSel
Line 1106: Warning! NBRRM->Set.reSelMngr.cur_cell->sorted_cell_ptr: NULL in NbRrm_UpdateMibForCellReSel
Line 1129: Warning! OperationMode(%d) wrong value in NbRrm_UpdateMibForCellReSel
Line 1132: Set rasterOffset(%d)
Line 1137: Warning! Cannot find reselection target frequency in NbRrm_UpdateMibForCellReSel
Line 1164: Warning! gNbRrm_CellSelMngr.cur_cell: NULL in NbRrm_SubProcMibInfoUpdateCnfCellSel
Line 1170: Warning! gNbRrm_CellSelMngr.cur_cell->sorted_cell_ptr: NULL in NbRrm_SubProcMibInfoUpdateCnfCellSel
Line 1192: Warning! NBRRM->Set.reSelMngr.cur_cell: NULL in NbRrm_SubProcMibInfoUpdateCnfCellResel
Line 1198: Warning! NBRRM->Set.reSelMngr.cur_cell->sorted_cell_ptr: NULL in NbRrm_SubProcMibInfoUpdateCnfCellResel
Line 1220: Warning! NBRRM->pServingCell: NULL in NbRrm_SubProcMibInfoUpdateCnfConnRel
Line 1244: Warning! Cell sel enabled(%d) or wrong proc(%d) at NbRrm_SubProcCellChangeCnfOnCellSel
Line 1250: Warning! cur_cell or cur_cell->sorted_cell_ptr:NULL at NbRrm_SubProcCellChangeCnfOnCellSel
Line 1291: Warning! Cell resel enabled(%d) or wrong proc(%d) at NbRrm_SubProcCellChangeCnfOnCellResel
Line 1298: Warning! NBRRM->Set.reSelMngr.cur_cell->sorted_cell_ptr: NULL in NbRrm_SubProcCellChangeCnfOnCellResel
Line 1321: Warning! gNbRrm_CellSelMngr disabled in NbRrm_UpdateSib1ForCellSel
Line 1327: Warning! cur_cell: NULL in NbRrm_UpdateSib1ForCellSel
Line 1338: - MFBI detected (earfcn changed: %d -> %d
Line 1364: Warning! NBRRM->Set.reSelMngr.num_cell: 0 in NbRrm_UpdateSib1ForResel
Line 1371: Warning! NBRRM->Set.reSelMngr.enable: 0 in NbRrm_UpdateSib1ForResel
Line 1379: Warning! NBRRM->Set.reSelMngr.cur_cell->sorted_cell_ptr: NULL in NbRrm_UpdateSib1ForResel
Line 1391: - MFBI detected (earfcn changed: %d -> %d
Line 1417: Warning! cur_freq(%d) pFreqInfo:NULL unexpected for init meas
Line 1423: Warning! pFreqInfo->nrsrp_sorted_list: Not initialized in NbRrm_ProcInitNrsMeasCnf
Line 1456: Warning! unexpected earfcn(%d) received. <-- Expected(%d) for init meas
Line 1468: Warning! set[NBRRM_CANDI_DETECTED] Not initialized or Empty for cur_freq for init meas
Line 1479: Init meas result[%u] (cnt:%d, agcIdx:%d, freqOffset:%d)
Line 1496: Warning! cell(earfcn:%d, cell_id:%d) not found from cur_freq buffer
Line 1512: - %d. cell_ID:%d, nrsrp:%d
Line 1514:     nrsrq:%d, nrssi:%d, nrs_sinr:%d
Line 1538: Warning! no cell found found from cur_freq buffer
Line 1584: Warning! nrsrp_sorted_list: Not initialized at NbRrm_ProcCellSelListedPrio
Line 1585:  --> Try next freq
Line 1592: Warning! nrsrp_sorted_list: Empty at NbRrm_ProcCellSelListedPrio
Line 1593:  --> Try next freq
Line 1684: Warning! best_sorted_list: NULL at NbRrm_ProcCellSelBestPrio
Line 1691: best_sorted_list: Empty at NbRrm_ProcCellSelBestPrio
Line 1757: NbRrm_ProcCellSelBestPrio: can`t find any more candidate frequency
Line 1791: Warning!! Req: NULL in NbRrm_ProcCellSelection
Line 1797: Warning!! unexpected value in num_freq(%d) in NbRrm_ProcCellSelection
Line 1803: Warning! setState(%d) out of bound in NbRrm_SetProcState
Line 1808: - NumFreq:%d, AfcMode:%s (curr RRM proc:%s)
Line 1826: Requested Freq List --- 
Line 1831: - earfcn:%u, raster offset:%d 
Line 1842: Warning!! Malloc NULL for gNbRrm_CellSelMngr.best_sorted_list
Line 1900: - LAST_CELL_MODE --> Start RRC connection release
Line 1908: - NO_CELL_SEL_MODE --> go to Init state
Line 1940: Warning! gNbRrm_CellSelMngr.cur_cell->sorted_cell_ptr : NULL at NbRrm_FinishCellSelection
Line 1946: Warning! gNbRrm_CellSelMngr.freq[gNbRrm_CellSelMngr.cur_freq].pFreqInfo : NULL at NbRrm_FinishCellSelection
Line 1993: Warning! NBRRM->Set.reSelMngr.num_cell: 0 in NbRrm_FinishReselection
Line 2000: Warning! NBRRM->Set.reSelMngr.enable: 0 in NbRrm_FinishReselection
Line 2008: Warning! NBRRM->Set.reSelMngr.cur_cell->sorted_cell_ptr: NULL in NbRrm_FinishReselection
Line 2019: Warning! Cannot find reselection target frequency in NbRrm_FinishReselection
Line 2075: Warning! NBRRM->Set.reSelMngr.cur_cell->sorted_cell_ptr: NULL in NbRrm_ProcReselection
Line 2082: [Reselection Fail] Return to Serving-cell
Line 2118: Warning! invalid NextAction for NB_RRM_CELL_SEL proc state
Line 2124: Warning! Cell sel disabled (No info to proceed further cell selection
Line 2158: Warning! invalid NextAction for NB_RRM_CELL_RESEL proc state
Line 2164: Warning! Resel disabled in NbRrm_ProcNextStepCellResel
Line 2183: Warning! NBRRM->Set.reSelMngr.cur_cell: NULL in NbRrm_ProcNextStepCellResel
Line 2189: Warning! NBRRM->Set.reSelMngr.cur_cell->sorted_cell_ptr: NULL in NbRrm_ProcNextStepCellResel
Line 2251: Idle OOS !! <-- System Info decoding fails
Line 2270: Warning! NBRRM->Set.reSelMngr.num_cell: 0 in NbRrm_ProcCellReSelReq
Line 2277: Warning! NBRRM->Set.reSelMngr.enable: 0 in NbRrm_ProcCellReSelReq
Line 2284: Warning! NBRRM->Set.reSelMngr.cell_list: Not initialized in NbRrm_ProcCellReSelReq
Line 2291: Warning! NBRRM->Set.reSelMngr.cell_list: Empty in NbRrm_ProcCellReSelReq
Line 2301: Warning! NBRRM->Set.reSelMngr.cur_cell: NULL in NbRrm_ProcCellReSelReq
Line 2307: Warning! NBRRM->Set.reSelMngr.cur_cell->sorted_cell_ptr: NULL in NbRrm_ProcCellReSelReq
Line 2337: PrintFreqScanCnf - num_freq_in_list:%d
Line 2343:  >> [%d] earfcn:%d, rssi:%d, pschMax:%d, rasterOffset:(enum)%d
Line 2376: NbRrm_UpdateFreqListForBestPrio
Line 2403: Best priority SortedFreqList [%d]earfcn:(%d)
Line 2429: No candidate cell in best priority frequency lists
