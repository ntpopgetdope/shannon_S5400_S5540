Line 191: [%s][NbRrcInit_Init] ThresholdRsrp[%d] ThresholdSinr[%d] BlindScanDisable[%d] 
Line 451: [%s]Freq Sorting for Band
Line 466: [%s]RRM_RRC_CELL_SEL_REQ (Index %d Earfcn %d Offset %d Freq %d)
Line 518: [%s][GetCellSelMode] Try LISTED_PRIO_MODE after BEST_PRIO_MODE
Line 525: [%s][GetCellSelMode] CellSelType : SELECT_LAST_CONN_CELL - LAST_CELL_MODE
Line 531: [%s][GetCellSelMode] ONLY_USE_FIXED_EARFCN - BEST_PRIO_MODE
Line 538: [%s][GetCellSelMode] TryStoredSrchDuringBlindScan - LISTED_PRIO_MODE
Line 565: [%s][GetCellSelMode] LISTED_PRIO_MODE
Line 595: [%s][SendCellSelReq] No Stored Freq.
Line 604: [%s][METRIC] : CurrentModeState %d (SendCellSelReq - NBRRC_MODE_SEARCH)
Line 647: [%s][SendCellSelReq] CellSelMode[%d], ScanMode[%d].
Line 686: [%s]From EUTRA Redirection Fail
Line 751: [%s] RepeatInitCellSrchTime elpased(%d) Duration(%d)
Line 755: [%s]Try Cell srch again until Cell Search Time Duration
Line 785: [%s]Try Cell srch again until T311 Timer expiry
Line 833: [%s]CLEAR OPFLAG :(%s-%s)
Line 833: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 917: [%s]Remaining Stored Freq to srch (%d).. Continue Cell Selection for next Freq..
Line 934: [%s]Try cell selection again in weak mode.
Line 948: [%s]All Stored Freq Done... Blind Freq Scan is disabled(%d)/(%d)
Line 953: [%s]All Stored Freq Done... Start Blind Freq Scan...
Line 997: [%s]BLIND SCAN MODE / ALL_BAND_DONE
Line 1004: [%s]BLIND SCAN MODE / REMAIN_BAND_DONE
Line 1011: [%s]BLIND SCAN MODE / Last Scan Mode : %d
Line 1025: [%s]System Lost / FreqScanMode:%d, LastScanMode:%d
Line 1035: [%s]Try Weak Freq scan mode
Line 1116: [%s][StartStoredSearch] No Stored Freq. Start Blind Freq Scan.
Line 1147: [%s][StartStoredSearch] SendCellSelReq fail. Ret[%d]
Line 1243: [%s]SET OPFLAG :(%s-%s)
Line 1243: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1252: [%s][METRIC] : UpdateTime %d
Line 1259: [%s]SET OPFLAG :(%s-%s)
Line 1259: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1263: [%s]CLEAR OPFLAG :(%s-%s)
Line 1263: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1271: [%s]Reset Access Fail Count : %d
Line 1282: [%s]Freq List is recently updated (elapsed %dms). use it
Line 1315: [%s]Stored Freq Info Avail, Start Cell Selection for the Freqs..
Line 1449: [%s][InitReqHdlr] PreferredBand(%d), PlmnIdCheckDisable(%d)
Line 1557: [%s]EPLMN List updated and Tcell is unavail.. Need to Reacquisition the cell(%d)(%d)
Line 1596: [%s][CheckAndCampOn] pCellSibInfo is NULL.
Line 1605: [%s]Already Essential SIB Received
Line 1612: [%s]SIB2 is not sent yet to RRM.
Line 1628: [%s]Send CELL_IND after cell select for re-establish
Line 1658: [%s]CLEAR OPFLAG :(%s-%s)
Line 1658: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1678: [%s]Essential SIB is not Received
Line 1763: [%s]RRC Cnx Release Msg received while Re-establish.. Send Cell Select Cnf Fail to Acc Mgr
Line 1799: [%s]T311 Expired, Re-establish Fail.. Send Cell Select Cnf Fail to Acc Mgr
Line 1833: [%s]Suspend Requested Mode.. go to Suspend State..
Line 1857: [%s]Suspend Requested Re-establish Mode.. go to Acc State..
Line 1865: [%s]No Suspend Req msg is pending... Send Cell Select Cnf Fail to Acc Mgr
Line 1914: [%s]Proc No cell Request
Line 1952: [%s]Currently L1 does not support Auth fail case while cell selection.. Ignore it
Line 1976: [%s]Terminate Requested Re-establish Mode.. go to Acc State..
Line 1984: [%s]No Terminate Req msg is pending... Send Cell Select Cnf Fail to Acc Mgr
Line 2090: [%s]NO SUPPORTED BAND.. NO LTE SERVICE
Line 2105: [%s]Try Cell srch again until T311 Timer expiry
Line 2127: [%s]PLMN Srch Fail for PLMN(%06x)
Line 2136: [%s]CLEAR OPFLAG :(%s-%s)
Line 2136: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 2218: [%s]FreqScanCnf for Band(%d) band idx(%d)
Line 2220: [%s]MinNumOfAccumulations(%d) MinAccfreq(%d) / BestPschEnergy(%d) BestPschfreq(%d)
Line 2243: [%s](%d) Band Scan Done. made (%d) num freqs / FreqNum:%d
Line 2254: [%s]Freq Scan Result Available.. Start Cell Selection...
Line 2259: [%s]SET OPFLAG :(%s-%s)
Line 2295: [%s]Try Weak Freq scan mode
Line 2318: [%s]Band reamin to scan but Scan Result Available.. Start Cell Selection...
Line 2332: [%s]Start to Search next band ... 
Line 2369: [%s]Not Reestablish Mode, T311 expiry will be ignored. Mode(%d)
Line 2490: [%s]RRCConnectionRelease msg received in Invalid state
Line 2519: [%s]Acq Ind.. Earfcn[%d] Offset[%d] PCI[%d] nRSRP[%d] nRSRQ[%d]
Line 2648: [%s]RRC_RRM_CELL_SEL_CNF : CellSelMode %d, NumFreq %d
Line 2666: [%s]RRC_RRM_CELL_SEL_CNF : Try cell selection using the sorted freq list.
Line 2680: [%s]RRC_RRM_CELL_SEL_CNF : Fail to send a CellSelReq message.
Line 2688: [%s]RRC_RRM_CELL_SEL_CNF Impossible Outcome(%d)
Line 2704: [%s]No Available Cell (Unable to Decode MIB)
Line 2713: [%s]Still need to try SIB1 Reading.. Don't stop SIB1 timer here
Line 2754: [%s][WaitInitMibRecvMibHdlr] ProcMib fail.
Line 2832: [%s]<RecvMibHdlr> Not all received essential sib
Line 2846: [%s][METRIC] : MibReadSuccessCount %d
Line 2890: [%s]NBRRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 2896: [%s]NBRRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 2901: [%s]NBRRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 2916: [%s]<CellInfoInd> mode:%d, earfcn:%d, Pci:%d, Rsrp:%d, Rsrq:%d
Line 2985: [%s]SET OPFLAG :(%s-%s)
Line 2985: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3125: [%s]RRCConnectionRelease msg received in Invalid state
Line 3152: [%s]Acq ind is received while SIB1 reading..
Line 3176: [%s]Impossible Case: SystemInformation_NB received in NBRRCINIT_WAIT_INIT_SIB1
Line 3199: [%s]PLMN Search REQ is received while doing PLMN Srch Procedure.Ignore it
Line 3213: [%s]PLMN Search Req is Received After SIB1 recv.. Abort RRC Initiated srch
Line 3265: [%s]Unexpected Case: SystemInformation_NB received in NBRRCINIT_WAIT_INIT_CELL_SEL_CNF
Line 3385: [%s]RRCConnectionRelease msg received in Invalid state
Line 3545: [%s]PLMN Search REQ is received while doing PLMN Srch Procedure.Ignore it
Line 3550: [%s]PLMN Search Req is Received After SIB1 recv.. Abort RRC Initiated srch
Line 3653: [%s]Impossible case: NBRRC_INT_T_WAIT_SI_EXPIRY in NBRRCINIT_WAIT_INIT_SIB2
Line 3751: [%s]RRCConnectionRelease msg received in Invalid state
Line 3795: [%s][WaitInitSib2RecvSiHdlr] pSCellSibInfo is null
Line 3883: [%s]Not Reestablish Mode, T311 expiry will be ignored. Mode(%d)
Line 3954: [%s]Terminate Req while Re-establish proc..
Line 4043: [%s]RRCConnectionRelease msg received in Invalid state
Line 4079: [%s]NBRRC_EMM_RESUME_REQ :: ResumeCause(%d) 
Line 4146: [%s]Impossible!! T Blind Scan Limit Timer expired for Init PLMN Srch
Line 4256: [%s]Cell Sel Cnf Received while Blind PLMN Scan
Line 4302: [%s]Fail to Update Freq List. Report PLMN List.. 
Line 4335: [%s]PLMN Scan Aborting due to Suspend Req....
Line 4365: [%s]PLMN Scan Aborting due to Terminate Req....
Line 4404: [%s]NBRRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 4495: [%s]SIB1 Reception Fail for PLMN Scan.. Try Next Freq
Line 4584: [%s]PLMN Blind Scan done for Band %d
Line 4676: [%s]CLEAR OPFLAG :(%s-%s)
Line 4758: [%s]Transition Cause : %d
Line 4762: [%s]CLEAR OPFLAG :(%s-%s)
Line 4767: [%s]Reset Access Fail Count : %d
Line 4773: [%s]CLEAR OPFLAG :(%s-%s)
Line 4773: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4780: [%s]Freq List is recently updated (elapsed %dms). use it
Line 4814: [%s]Invalid Transition Cause(%d) FreqNum(%d)
Line 4983: [%s]NBRRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 5007: [%s]MEM ALLOC FAIL!!!
Line 5011: [%s]NBRRC_EMM_TERMINATE_IND(Auth fail)
Line 5062: [%s]PLMN Search REQ is received while doing PLMN Srch Procedure.Ignore it
Line 5080: [%s]PLMN Search Req is Received while RRC Initiated Cell Srch
Line 5098: [%s]PLMN Search Req is Received while Re-establish proc
Line 5105: [%s]PLMN Search Req is Received while Suspend proc
Line 5112: [%s]PLMN Search Req is Received while No cell Req proc
Line 5120: [%s]PLMN Search Req  is Received while Invalid proc..
Line 5145: [%s]No Pending PLMN LIST Req, just send cnf
Line 5167: [%s]Same PLMN Search REQ is received while doing PLMN Scan Procedure. Ignore It
Line 5192: [%s]PLMN List REQ is received while doing PLMN Srch Procedure.Abort Should come first. Send 0 Cnf
Line 5212: [%s]PLMN List Req is Received while RRC Initiated Cell Srch.. Pending this after cell srch
Line 5225: [%s]PLMN List Req is Received while Re-establish procedure.. send 0 cnf
Line 5248: [%s]PLMN List Req is Received while Suspending Procedure.. send 0 cnf
Line 5255: [%s]PLMN List Req is Received while Invalid proc.. send 0 cnf
Line 5282: [%s]Same PLMN LIST REQ is received while doing PLMN Scan Procedure. Send 0 Cnf
Line 5303: [%s]PLMN Srch Abort Req received while PLMN Scan.... Ignore it
Line 5327: [%s]PLMN Scan Aborting....
Line 5355: [%s]PLMN Srch Aborted....
Line 5365: [%s]PLMN Srch Abort req rxed while PLMN Srch in not triggered.. Ignore it
Line 5390: [%s]PLMN Srch Aborted....
Line 5397: [%s]PLMN Srch Abort req rxed while PLMN Srch in not triggered.. Ignore it
Line 5421: [%s]PLMN Srch Aborted....
Line 5428: [%s]PLMN Srch Abort req rxed while PLMN Srch in not triggered.. Ignore it
Line 6093: [%s]CLEAR OPFLAG :(%s-%s)
Line 5498: [%s]SET OPFLAG :(%s-%s)
Line 5498: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 5547: [%s]N/W Request redirection to EARFCN(%d) Rasteroffset(%d)
Line 5561: [%s]NB Redirect case, but NO RedirectInfo
Line 5648: [%s]Barring AuthFail Cell(PLMN: %06x)
Line 5656: [%s]AuthFailed Cell is different from last cell
Line 5732: [%s]Access Fail Info Tbarred[%d] MaxCount [%d]
Line 5742: [%s]Access Fail Count reset due to cell change[%d %d]=>[%d %d]
Line 5759: [%s]Access Fail Count(%d) FirstTimeDiff(%d)
