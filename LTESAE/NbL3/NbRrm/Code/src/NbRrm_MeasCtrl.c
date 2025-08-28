Line 305: NbRrm_InitDediFreqOffset
Line 1566: Set Dedicated freq offset(QoffsetDedicatedfrequency:%d, t322:%d) -> T322 starts
Line 1582: Set Qoffsettemp(%u)
Line 1601: Enhanced coverage: NOT authorized --> Qoffset_authorization will be used
Line 1618: Set QoffsetSCPTM(%u)
Line 1635: Warning! pSib1:NULL in NbRrm_SetSparamSib1
Line 1664: Set S-parameter with SIB1-NB
Line 1666: - Qrxlevmin:%d[dBm] (<-- delta-RxLevMin:%d[dB], q-RxLevMin:%d[dB])
Line 1668: - Qoffauth:%d[dB], Pmax:%d[dBm], Poffset14dBm:%d[dB]
Line 1669: - Qqualmin:%d[dB]
Line 1688: Warning! pSib3:NULL in NbRrm_SetSparamSib3
Line 1731: Set S-parameter with SIB3-NB
Line 1736: - Qrxlevmin:%d[dBm] ( <-- 2*(q-RxLevMin(%d)+delta-RxLevMin(%d)) )
Line 1741: - Qrxlevmin:%d[dBm] ( <-- 2*q-RxLevMin(%d) )
Line 1745: - Qoffauth:%d[dB], Pmax:%d[dBm], Poffset14dBm:%d[dB]
Line 1749: - Qqualmin:%d[dB]
Line 1753: - Qqualmin:negative infinity (Not Present)
Line 1773: Warning! pSib5:NULL in NbRrm_SetSparamSib5
Line 1816: Set S-parameter with SIB5-NB
Line 1821: - Qrxlevmin:%d[dBm] ( <-- 2*(q-RxLevMin(%d)+delta-RxLevMin(%d)) )
Line 1826: - Qrxlevmin:%d[dBm] ( <-- 2*q-RxLevMin(%d) )
Line 1830: - Qoffauth:%d[dB], Pmax:%d[dBm], Poffset14dBm:%d[dB]
Line 1831: - Qqualmin:%d[dB]
Line 1865: Warning! NBRRM->pServingCell: NULL --> ServNschMeas aborted
Line 1887: Start serving NSCH measure
Line 2290: - Idle DRX cycle(%drf)
Line 2311: - Idle eDRX enabled (cycle: %d[H-SFN])
Line 2328: Set camp_on_time_ms(%d)
Line 2346: Set s_RxLevRef(%d)
Line 2363: - Connected DRX cycle(%dsf)
Line 2382: Warning! NBRRM->pServingCell: NULL in NbRrm_SubProcMibInfoUpdateCnfIdleMode
Line 2613: NbRrm_InitIdleScheduleInfoSingleDrx
Line 2710: NbRrm_InitConnMngr
Line 2801: Warning! pCellInfo:NULL in NbRrm_GetNumIdleFiltering
Line 2807: Warning! NBRRM->pServingCell:NULL in NbRrm_GetNumIdleFiltering
Line 2843: - Set gNbRrm_ConnMngr.conn_drx_enable(%d)
Line 2873: Warning! pMsg: NULL in NbRrm_SetReselCommonServ
Line 2880: Warning! Qhyst(%u) larger than Max value
Line 2891: Warning! S_NonIntra_Th(%u) larger than Max value
Line 2914: - Set q-Hyst:%d, s_IntraSearch:%d, s_NonIntraSearch:%d, s_SearchDeltaP:%d
Line 3270: Warning! mode(%u) != RRM_MEASMODE_INTRA_NSCH in NbRrm_ProcIntraNschResult
Line 3276: Warning! NBRRM->pServingCell: NULL in NbRrm_ProcIntraNschResult
Line 3283: Warning! earfcn(%u) for intra NSCH result not same as serving(%u)
Line 3310: Warning! No such cell(%d) found in intra freq buffer
Line 3530: Warning! pFreqInfo:NULL in NbRrm_ProcIdleSyncResult
Line 3536: Warning! pMsg:NULL in NbRrm_ProcIdleSyncResult
Line 3548: Search result (earfcn:%u, rasterOffset:%d, num_cell:%d) --
Line 3567: Warning! wrong pci from search(%d) --> skip processing
Line 3571: (%d) cell_id(%d): time_offset(%d)
Line 3595: Warning! pCellInfo: NULL at MemAlloc in NbRrm_ProcIdleSyncResult
Line 3638: Warning! pNewCell: NULL in NbRrm_IsCellAddedBeforeCurElemInReselList
Line 3644: Warning! pCurCell: NULL in NbRrm_IsCellAddedBeforeCurElemInReselList
Line 3656: Warning! pFreqInfo: NULL for newCell(earfcn:%u, pci:%u) in NbRrm_IsCellAddedBeforeCurElemInReselList
Line 3667: Warning! pFreqInfo: NULL for curElem(earfcn:%u, pci:%u) in NbRrm_IsCellAddedBeforeCurElemInReselList
Line 4156: Warning! drxMeasState(%d) not for Connected mode
Line 4162: Warning! NBRRM->pServingCell: NULL before serving cell meas
Line 4447: Warning! gNbRrm_IdleMngr.curDrxState(%d) NOT for idleMeasResult
Line 5047: Warning! drxMeasState(%d) NOT for idle mode
Line 5053: Warning! NBRRM->pServingCell: NULL before serving cell meas
Line 5067: earlyWakeupInfo (INTRA_MEAS:%d, INTRA_SYNC:%d)
Line 5071: Warning! Early wake-up but no any ind for intra MEAS or SYNC
Line 5118: Warning! Reinit trigger(%d) or wrong proc(%d) at NbRrm_SubProcCellChangeCnfOnReinit
Line 5124: Warning! NBRRM->pServingCell: NULL in NbRrm_SubProcCellChangeCnfOnReinit --> Skip Reinit
Line 5157: Channel cond improved: filtered_nrsrp(%d) mon_nrsrp(%d) mon_nrsrp_threshold(%d)
Line 5189: Channel cond sufficient: filtered_nrsrp(%d) mon_nrsrp(%d) mon_nrsrp_threshold(%d)
Line 5216: Warning! mode(%u) is not expected in current procState(%d)
Line 5231: Warning! Measure is not expected in current procState(%d)
Line 5249: Warning! NBRRM->pServingCell: NULL in NbRrm_ProcIdleReinitDrx
Line 5277: Warning! NBRRM->pServingCell: NULL in NbRrm_ProcReinitSearchCnf --> Skip Reinit
Line 5285: Warning!! earfcn(%u) in search_cnf Not same with serving earfcn(%u) --> Skip Reinit
Line 5293: Idle OOS !! (cnf->isSrchValidResult:%d, cnf->result.Num:%d)
Line 5305: - Update Serv.cell(%d): time_offset(%d)
Line 5314: Idle OOS !! (serv.cell Not found from search results)
Line 5350: Warning! RRM_NL1C_SEARCH_CNF is decoded at unexpected step
Line 5362: Warning! Reinit search triggered BUT NBRRM->Set.isReinitTriggered: FALSE in NbRrm_ProcReinitSearchCnf
Line 5384: Request LPP(ECID) Meas - response_time(%d)
Line 5532: isSigMonStart(%d), mon_cause(%d)
Line 5550: mon_nrsrp(%d) nrsrp_threshold(%d)
Line 5561: min_nrsrp(%d) min_nsinr(%d)
Line 5566: Invalid Mon_Cause(%d) from RRC
Line 5574: Error: Mon already ongoing, Existing Mon_Cause(%d)
Line 5580: Stop Monitoring Req Received from RRC
Line 282: Warning! Measure aborted <-- cell(earfcn:%u, cell_id:%d) NOT ready for Measure
Line 283: - rasterOffset(%d), time_offset(%u)
Line 620: Warning! NBRRM->pServingCell: NULL in NbRrm_GetServingSrxlev
Line 626: Warning! filtered_nrsrp of Serv.cell: invalid(0x8000) in NbRrm_GetServingSrxlev
Line 833: Warning! NbRrm_GetCoverage function NOT expected to be called in procState(%d)
Line 2734: Warning! NBRRM->pServingCell: NULL --> Coverage setting is aborted
Line 2740: No valid filtered values for CINR in NbRrm_SetCoverage
Line 2769: Warning! Setting coverage not expected in procState(%d)
Line 2775: [Normal Coverage] (CINR:%d)
Line 2779: [Enhanced Coverage] (CINR:%d)
Line 3903: Serv meas already ongoing: isServMeasScheduled(%d)
Line 3914: Check Serv meas timer
Line 255: - isExpired[%d]: interval(%u), cur_time_ms(%d), last_time_ms(%d), cycle_ms(%u)
Line 1329: - cdrx configured: meas_cycle(%dms)
Line 1335: - no cdrx: meas_cycle(%dms)
Line 1995: Warning! NBRRM->pServingCell: NULL --> ServNrsMeas aborted
Line 2015: Start serving-cell measure
Line 2030: [0] cell_id(%u), time_offset(%u), needCinr(%d)
Line 4314: Warning! NBRRM->pIntraFreq: NULL --> Skip result processing
Line 4362: Warning! Wrong mon_cause(%d)
Line 4369: Warning! Wrong mode(%u) --> result not processed
Line 1007: Warning! pFreqInfo: NULL in NbRrm_GetIdleNextMeasNcell
Line 1020: Warning! Invalid set_type:%d for pNextCellToMeas(cell_id:%u) in NbRrm_GetIdleNextMeasNcell
Line 2057: Start intra-freq measure
Line 2077: Warning! set_type:%d not expected for newly detected cell meas(cell_id:%u) in NbRrm_StartIntraMeas
Line 2086: [%d] cell_id(%u), time_offset(%u), needCinr(%d)
Line 2115: [0] cell_id(%u), time_offset(%u), needCinr(%d) - Serving cell
Line 2130: Warning! Invalid set_type:%d for Cell(cell_id:%u) in NbRrm_StartIntraMeas
Line 2139: [%d] cell_id(%u), time_offset(%u), needCinr(%d)
Line 1907: Warning! NBRRM->pServingCell: NULL --> IntraSearch aborted
Line 1913: Warning! NBRRM->pIntraFreq: NULL --> IntraSearch aborted
Line 1928: Start Intra-freq cell search (earfcn:%u rasterOffset:%d)
Line 3339: Warning! mode(%u) != RRM_MEASMODE_INTRA_MEAS in NbRrm_ProcIntraMeasResult
Line 3345: Warning! NBRRM->pServingCell: NULL in NbRrm_ProcIntraMeasResult
Line 3352: Warning! earfcn(%u) of meas result not same as serving cell(%u)
Line 3418: Warning! No such neighbor cell(%d) found in intra freq buffer
Line 3166: Warning! NBRRM->pServingCell: NULL in NbRrm_IsServCellEvaluationFail
Line 3170: Serving cell Evaluation
Line 3177: --> numSeqFailOfScond(%d), Nserv(%d)
Line 3182: All neighbour measure Triggered !!
Line 3188: - Check elapsed time of All Ncell Meas timer
Line 3191: Idle OOS !!! (Consecutive S-criteria failure)
Line 747: Warning! pCellInfo: NULL in NbRrm_IsScriteriaFulfilled
Line 753: Warning! pSparam: NULL in NbRrm_IsScriteriaFulfilled
Line 762: - Srxlev(%d) (EARFCN:%u, Cell_id:%u) <= 0
Line 767: - Squal(%d) (EARFCN:%u, Cell_id:%u) <= 0
Line 670: Warning! filtered_nrsrp of cell(earfcn:%u,pci:%u): invalid(0x8000) in NbRrm_GetNeighborSrxlev
Line 717: Warning! filtered_nrsrq of cell(earfcn:%u,pci:%u): invalid(0x8000) in NbRrm_GetNeighborSqual
Line 2939: Warning! Wrong drx_idx(%d) calculation in NbRrm_GetNserv
Line 3055: Reselection Evaluation --> Suspended (Tresel:0, nrsrp_diff:%d, timer:%u)
Line 3067: Reselection Evaluation --> Resumed
Line 3071: eval_suspend timer updated (%d)
Line 1187: Warning! pCellInfo: NULL in NbRrm_GetInstNrsrpDiff
Line 1131: Warning! Wrong idx(%d) calculation in NbRrm_GetIdleInterSyncCycle
Line 2546: Warning! pFreqInfo: NULL in NbRrm_SortMeasList
Line 2550: [Sorting Cells to Meas List]
Line 1410: Warning! pSortedList: Not initialized in NbRrm_AddCellToNrsrpSortedList
Line 1459: Cell(earfcn:%u, cell_id:%u) included in NRSRP sorted list
Line 2422: Warning! pFreqInfo: NULL in NbRrm_DropCellFromLists
Line 2428: Warning! pFreqInfo->nrsrp_sorted_list: Not initialized in NbRrm_DropCellFromLists
Line 2432: [Drop Cells from Lists]
Line 2448: Warning! pTempSortedInfo: NULL in NbRrm_DropCellFromLists
Line 2490: Cell(earfcn:%u, cell_id:%u, NRSRP: %d) is removed from set list.(best NRSRP:%d)
Line 2496: Cell(earfcn:%u, cell_id:%u) is removed from NRSRP sorted list.
Line 4429: Warning! Wrong mode(%u) --> result not processed
Line 506: Warning! NBRRM->pServingCell: NULL in NbRrm_MonitorCoverageMode
Line 518: Warning! current coverage: NBRRM_COV_TYPE_MAX
Line 523: ENHANCED COVERAGE (CINR:%d)
Line 527: NORMAL COVERAGE (CINR:%d)
Line 354: Warning! pCellInfo: NULL in NbRrm_MonitorCellFilterResult
Line 367: IDLE_S(%u/%u) NRSRP %d, NRSRQ %d, (time offset %u)
Line 374: CONN_S(%u/%u) NRSRP %d, NRSRQ %d, (time offset %u)
Line 382: -NCELL(%u/%u) NRSRP %d, NRSRQ %d, (time offset %u)
Line 403: Warning! pFreqInfo: NULL in NbRrm_MonitorFreqFilterResult
Line 409: Warning! pFreqInfo->nrsrp_sorted_list: Not initialized in NbRrm_MonitorFreqFilterResult
Line 4525: Warning! NBRRM->pServingCell:NULL in NbRrm_IsServNschNeededInNextDrx
Line 3833: Check Relaxed Monitoring Criterion (timediff:%d)
Line 3836: T_SearchDeltaP elapsed from camp-on time
Line 3843: Consecutive failure time check
Line 3850: 24 hour check from last ncell meas check
Line 3864: Criterion check (Ref_srxlev:%d, Cur_srxlev:%d, S_SearchDeltaP:%d[dB])
Line 3868: - Not fulfilled
Line 3877: --> Relaxed monitoring fulfilled
Line 4478: NbRrm_IsLargerThanSintrasearch --> TRUE
Line 4500: NbRrm_IsLargerThanSnonintrasearch --> TRUE
Line 3711: Warning! NBRRM->pIntraFreq:NULL in NbRrm_IsIdleIntraSyncNeeded
Line 3716: Check Intra Sync timer
Line 1075: Warning! Wrong drx_idx(%d) calculation in NbRrm_GetIdleIntraSyncCycle
Line 3739: Warning! Inter-freq List: Not initialized in NbRrm_IsIdleInterSyncNeeded
Line 3745: Warning! Inter-freq List: Empty in NbRrm_IsIdleInterSyncNeeded
Line 3756: Check Inter Sync timer
Line 870: Warning! pFreqList: NULL in NbRrm_GetIdleNextFreqFromList
Line 876: Warning! pFreqList: Not initialized in NbRrm_GetIdleNextFreqFromList
Line 882: Warning! pFreqList: Empty in NbRrm_GetIdleNextFreqFromList
Line 1965: Start Inter-freq cell search (earfcn:%u, rasterOffset:%d, agcUpdateIdx:%s)
Line 1970: Start Inter-freq cell search (earfcn:%u, rasterOffset:%d, agcUpdateIdx:%d)
Line 4052: No neighbor cell to measure in freq %u
Line 2203: Warning! NBRRM->pServingCell: NULL --> Inter-freq meas aborted
Line 2211: Start Inter-freq measure (earfcn:%u, rasterOffset:%d, agcUpdateIdx:%d)
Line 2233: Warning! Invalid set_type:%d for Cell(cell_id:%u) in NbRrm_StartInterMeas
Line 2247: [%d] cell_id(%u), time_offset(%u), needCinr(%d)
Line 5507: ECID measure is done before ECID timer expiry
Line 4778: Check 1 sec timer since camp-on
Line 4796: [Reselection Evaluation] ---
Line 4833: Reselection Triggered !!!
Line 3788: Check evaluation timer(%u ms) for zero Treselction config
Line 4618: Warning! NBRRM->pServingCell: NULL in NbRrm_IsFreqReselTriggered
Line 4624: Warning! filtered_nrsrp of Serv.cell: invalid in NbRrm_IsFreqReselTriggered
Line 4630: Warning! NBRRM->pIntraFreq: NULL in NbRrm_IsFreqReselTriggered
Line 4647: Rs:%d (serv.NRSRP:%d, q_Hyst:%d, scptmOffset:%d)
Line 4653: (EARFCN:%u, Tresel:%d sec) evaluation
Line 4685: [PCI:%u] Rn:%d (neighbor.NRSRP:%d, q_offset:%d, scptmOffset:%d)
Line 4694: --> Succeeded resel criteria(Treselection: 0)
Line 4704: - Treselection starts !! (cur_time_ms:%d)
Line 4710: --> Succeeded resel criteria !! (Treselection expired)
Line 4719: --> Failed resel criteria
Line 1254: Warning! NBRRM->pServingCell: NULL in NbRrm_GetQoffset
Line 4562: Warning! NBRRM->pServingCell:NULL in NbRrm_IsIntraSyncNeededInNextDrx
Line 4583: next_pf_ms:%d last_meas_ms:%d interval:%d
Line 3454: Warning! mode(%u) != RRM_MEASMODE_INTER_MEAS in NbRrm_ProcInterMeasResult
Line 3466: Warning! NBRRM->pServingCell: NULL in NbRrm_ProcInterMeasResult
Line 3473: Warning! earfcn(%u) of meas result same as serving cell(%u) --> Skip handling inter meas result
Line 3496: Warning! No such neighbor cell(%d) found in inter freq buffer
Line 4119: Warning! NBRRM->pServingCell: NULL in NbRrm_ProcConnMeasResult
Line 4132: Warning! mode(%u) unexpected in NbRrm_ProcConnMeasResult
