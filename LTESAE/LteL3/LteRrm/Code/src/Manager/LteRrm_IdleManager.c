Line 51: LteRrmIdle_GoToSleep, but cannot sleep(State:%s)
Line 76: MEAS is working, cannot sleep. IdleMeasSuspendForTx(%d)
Line 94: LteRrmIdle_InitMeasScheduler
Line 160: LteRrmIdle_ResetSfailStatus
Line 181: [DRX] CHECK LteRrm STATE (%s)
Line 187: [DRX] LteRrmIdle_Sleep No MEAS_IDLE
Line 191: [DRX] bDrxStopforReselection
Line 196: [DRX] bNrPbchDecodeOngoing
Line 201: [DRX] bSiStartReadReqFlag == TRUE
Line 268: Suspend reselection (Not paging done yet)
Line 282: reselection triggered: From(LTE/%d/%d) -> To(%d/%d/%d)
Line 286: reselection triggered
Line 291: Idle OOS triggered
Line 361: L2N reselection - SCS:%d smtc_included:%d periodicity:%d offset:%d duration:%d)
Line 387: LTE_CPHY_CELL_RESEL_EVAL_IND (SUCCESS) to RRC
Line 391: LTE_CPHY_CELL_RESEL_EVAL_IND (FAILURE) to RRC - reset CdmaSystemTimeFlag
Line 517: BarredCell is listed already(cell ID %d, earfcn %d)
Line 521: WARNING!! (duration == 0) in LteRrmIdle_AddCellToBarredList(cell ID %d, earfcn %d)
Line 540: pNewElem->time_offset:%d, IsBlackedCell:%d)
Line 556: ERROR: Elem of cellbarred list is not linked
Line 568: Cell ID in CellBarredList(%d, %d) in LteRrmIdle_ProcCellSelectReq()
Line 572: - time_offset(%d)
Line 587: ERROR in CellBarredList
Line 613: LteRrmIdle_DeleteBlackedCellFromBarredList
Line 686: cell (%d) in earfcn (%d) is barred (time:%d)
Line 720: [PPP] Test SIM: Don't check PPP
Line 727: [PPP] visitedCellList is NULL or empty
Line 737: [PPP] intra-freq case - no PPP
Line 748: [PPP] no 2nd candidated info - no PPP
Line 758: [PPP] there is no Freq(%d) in SIB5 - no PPP
Line 763: [PPP] Compare (%d-%d)(%d-%d)
Line 770: [PPP] Hit (target freq=%d, ori-priority(%d), fake-priority(%d), interval(%d_%d), PPThreshold(%d)
Line 786: [PPP] non-Hit (target freq=%d, interval(%d_%d), PPThreshold(%d)
Line 819: LteRrmIdle_DeleteCellFromBarredList Started: RAT Type(%d), Cell_ID(%d), EARFCN(%d)
Line 823:  CellBarredList is Empty!!
Line 841: The 1st cell deleted: BarredTimerUpdate!!
Line 861: LteRrmIdle_DeleteCellFromBarredList Finished
Line 905: InitSrchCanx: InfMode == LTERRM_INFDEFAULT
Line 912: InitSrchCanx: InfMode == LTERRM_INF1TOL1LC
Line 916: InitSrchCanx: Sync Ncell detected once again
Line 928: InitSrchCanx: InfMode == LTERRM_INF2TOL1LC
Line 933: InitSrchCanx: Wrong LTERRM->Set.InfMode
Line 938: InitSrchCanx: No INF-suspected cell exists
Line 988: Setting Dedicate priority is not acceptable in any cell state.
Line 994: return LteRrmIdle_SetDedicatedPriority(num_freq:%d)
Line 998: LteRrmIdle_SetDedicatedPriority(num_freq:%d)
Line 1003: > RAT(%d), earfcn(%d)
Line 1029: Invalid rat_type = %d
Line 1039: dedi_priority:earfcn(%d), priority(%d).(%d)
Line 1050: intra no_priority:earfcn(%d), priority(%d)
Line 1074: Setting Depriority is not acceptable in any cell state.
Line 1079: LteRrmIdle_SetDePriority(num_freq:%d, E:%d, N:%d)
Line 1155: de_priority:rat(%d), earfcn(%d), priority(%d)
Line 1160: Not Found(rat:%d, earfcn:%d) from DepriorityList(%d in %d)
Line 1186: Setting MBMS priority is not acceptable in any cell state.
Line 1190: LteRrmIdle_SetMbmsPriority(num_freq:%d)
Line 1194: return MbmsPriorityList(num_freq:%d)
Line 1209: mbms_priority:earfcn(%d), priority(%d)
Line 1216: MbmsPriorityList->num_freq(%d) is overflow
Line 1306: sorting inf cells with rsrp
Line 1324: Cells larger than (%d)-th place deleted
Line 1343: Mode change to LTERRM_INF1TOL1LC. Not overlapped. Timing diff(%d)
Line 1347: Mode change to LTERRM_INF2TOL1LC. Overlapped. Timing diff(%d)
Line 1355: Try InitSrchCanx -> Mode change to LTERRM_INF1TOL1LC
Line 1361: num_cell == out of range
Line 1437: cell (%d) in earfcn (%d) is NOT barred (time:%d)
Line 1469: pFreqInfo is NULL
Line 1480: UpdateReselPriority(Preserved): earfcn(%d) priority(%d).(%d)
Line 1492: UpdateReselPriority(CSG): earfcn(%d) priority(%d)
Line 1503: UpdateReselPriority(de_priority): earfcn(%d) priority(%d)
Line 1514: UpdateReselPriority(mbms): earfcn(%d) priority(%d)
Line 1526: UpdateReselPriority(Dedicated): earfcn(%d) priority(%d).(%d)
Line 1557: [EUCA] UpdateReselPriority(euca freq): earfcn(%d) priority(%d).(%d)
Line 1570: UpdateReselPriority(sib): earfcn(%d) priority(%d).(%d)
Line 1581: - ReselPriority changed: %d -> %d
Line 1759: Priority state error(%d)
Line 461: pInListElem(%d, %d, %d) to compare with new pNewElem(%d, %d, %d)
Line 466: pNewElem(%d, %d) added before existing element(%d, %d)
Line 488: pNewElem(%d, %d) added After existing element(%d, %d)
