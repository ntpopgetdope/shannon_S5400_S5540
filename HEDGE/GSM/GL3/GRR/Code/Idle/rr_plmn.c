Line 203: Cell Selection can not be proceed
Line 255: rr_EndRegNOK: rr_RegRes_WaitPLMNSearch is Set 
Line 441: ERROR RtkGetMemory returned NULL
Line 448: NbFLAsForRoam %d
Line 707: <Selected LAI %x %x %x %x %x> 
Line 711:  <Current  LAI %x %x %x %x %x> 
Line 747: <Selected Plmn %x %x %x> - <Current  Plmn %x %x %x> 
Line 771: <Eq Plmn %x %x %x> - <Current  Plmn %x %x %x> 
Line 840: Forbidden LA for roaming!
Line 902: rr_GetRrDomainAvailable %d GprsSupport %d isEmergencySupported %d
Line 926: Cell LAI: %x %x %x %x %x, OldAvailStatus:%d NewAvailStatus:%d
Line 948: Latin
Line 969: Chn
Line 1008: Frequency Scan Mode (Bandmode : 850/900/1900)
Line 1013: Frequency Scan Mode (Bandmode : 850/900/1800)
Line 1137: MSIM OOS PlmnSearchConfig : %d 
Line 1151: [GRR][MultiSIM OOS] Smartband enabled = %d
Line 1153: [GRR][MultiSIM OOS] PLMN Search Type: %s
Line 1193: GRR_MM_PLMN_SEARCH_REQ: %x %x %x and HPLMN %x %x %x
Line 1228:  Sim Flag(1), ServThresh(%d)
Line 1232:  Sim Flag is Not Set
Line 1263:  Sim Flag G2T Set (%d)
Line 1269:  Sim Flag G2T Not Set (%d)
Line 1278: SIM Status(%d), AnyPlmn(%d)
Line 1306: Non Emerg PLMN requested without SIM
Line 1313: Dedicated mode - reject PLMN search req
Line 1320: RR_WPLMN_LIST - reject PLMN search req
Line 1330: CellLocking: Enabled
Line 1335: Network controlled system select: Enabled
Line 1344: [GRR] ===SmartBand=== Smartband search type: %s
Line 1380: rr_MMPlmnFreqSearchMode: RR_STORED_CELL_SEARCH
Line 1383: rr_MMPlmnFreqSearchMode: RR_SAVED_FREQ_SEARCH
Line 1386: rr_MMPlmnFreqSearchMode: RR_FULL_SCAN_EXCLUDING_STORED_CELL_SEARCH
Line 1389: rr_MMPlmnFreqSearchMode: RR_FULL_SCAN_SEARCH
Line 1399: [GRR] ===SmartBand=== Band list is empty, skip search!
Line 1410: rr_QuickSearch: ManualSelection
Line 1416: rr_QuickSearch %d: RR_STORED_CELL_SEARCH
Line 1422: %x %x %x %d
Line 1441: IRAT Resel In Progress - Wait for SUSP_CON before sending PLMN search Fail
Line 1511: No Cell Selection Grant for IDLE
Line 1543: GRR_MM_RESEL_HOLD_REQ
Line 1557: IRAT Resel In Progress - Wait for SUSP_CON before sending RESEL_HOLD_CNF
Line 1585: GRR_MM_RESEL_HOLD_CNF
Line 1614: GRR_MM_PLMN_LIST_REQ: Background PLMN Search
Line 1619: GRR_MM_PLMN_LIST_REQ: Foreground PLMN Search
Line 1652: IdleReq pending, stop the timer before FG MPLMN starts
Line 1664: Dedicated mode - reject PLMN list req
Line 1675: Ignore PLMN List Req while already doing one!!!
Line 1692: IRAT Resel In Progress - reject PLMN List req
Line 1738: RrIllegalEdgeBandConfig(%d) 
Line 1757: PLMN with  PLMN id (0x%x)
Line 1776: Hold PLMN LIST REQ: ABORT_LIST_REQ_AND_PLMN_REQ_DURING_WPOWER
Line 1811: GRR_MM_PLMN_LIST_ABORT_REQ, wait for Power Resp
Line 1821: GRR_MM_PLMN_LIST_ABORT_REQ, Move to Resume-Null
Line 1839: Invalid state - ignore PLMN list abort req
Line 1891: Add PLMN to PLMN list: %x %x %x, AvailStatus %d
Line 1950: Detected Band List %d %d
Line 1954: GRR_MM_PLMN_LIST_IND to MM
Line 1992: GRR_MM_PLMN_LIST_IND to MM during IRAT Proc
Line 2038: MSIM rr_MultiSimOosScannedBand :%d
Line 2042: GRR_MM_PLMN_SEARCH_FAIL_IND
Line 2079: RR_SAVED_FREQ: Remove Plmn ID %d %d %d from Saved Freq list
Line 2125: ListSize: %d
Line 2128: RequestedPlmnId: %x %x %x
Line 2132: GRR_MM_NO_CELL_IND
Line 2140: 2G Out of service event occurred
Line 2166: PlmnState %s->%s
Line 2172: SelectPlmn 0x%x 0x%x 0x%x
Line 2201: PLMN selection complete
Line 2237: CellSelec: SRCH CMPLTD
Line 2254: PLMN selection complete -> ON ANY
Line 2261: PLMN selection complete -> ON PLMN
Line 2304: BPLMN:Check ScellLai to rr_BPlmnListElem. PlmnElem(%x) 
Line 2311: BPLMN:Add ScellLai to rr_BPlmnListElem 
Line 2434: BPLMN DS: Skip 1800 band: ScellBand(%s), BandInd(%d)
Line 2439: BPLMN DS: Skip 1900 band: ScellBand(%s), BandInd(%d)
Line 2465: rr_BplmnBandScanStatus: 850:%d 900:%d 1800:%d 1900:%d Ongoing:%s
Line 2777: Detected Band List %d %d
Line 2785: Active Rat(%d),  InactiveRatDrxReceived(%d), Donot trigger HOLD IND.
Line 2794: GRR_MM_PLMN_LIST_IND to MM
Line 2842: ANR:MM_GRR_PREPARE_CGI_REQ from MM
Line 2846: Anr Error: in wrong state
Line 2861: CGI Parameters arfcn(%d) band_ind(%d) NCC (0x%x) BCC (0x%x) 
Line 2880: rr_band_type:%s rr_BandInd:%d
Line 2886: ANR:Error: Unexpected Error! 
Line 2933: rac present:%x, arfcn value:%d, band indicator:%x, 
Line 2934: ncc:%x, bcc:%x, rac:%x, 
Line 2935: lac:%x, cgi_cell_id:%x
Line 2936: plmnid[0]:%x, plmnid[1]:%x, plmnid[2]:%x, 
Line 2939: GRR_MM_CGI_INFO_IND to MM
Line 3064: BPLMN: Acquired PLMN ID!: %x %x %x
Line 3072: BPLMN: Comparing PLMN from LIST: %x %x %x
Line 3082: BPLMN: Requested BPLMN Id Found!: %x %x %x
Line 3136: BPLMN: Add PLMN to PLMN list: %x %x %x Arfcn:%d Rxlev:%d AvailStatus:%d
Line 3174: ERROR  RtkGetMemory returned NULL in rr_SetBplmnArfcnListToMM
Line 3185: Send Bplmn GSM cell to MM Count:%d, Arfcn %d, BandType %s
Line 3209: rr_InitBplmnArfcnListToMM
Line 3261: GRR_MM_NET_SCAN_IND to MM for PlmnId: %x %x %x
Line 3266: serving:%s lac:0x%x cid:0x%x rssi:%d
Line 3342: rr_UpdateBPlmnList, lac:0x%x cid:0x%x
Line 3345: BPLMN: Update PLMN to PLMN list: %x %x %x Arfcn:%d RxLev:%d
Line 3404: In BPlmnDb, ARFCN:%d, Is Arfcn-Bsic Entry Found:(%d)
Line 3423: In BPlmnDb, lac:0x%x cid:0x%x
Line 3548: BPlmnDb: Arfcn(%d) Bsic(%x) Age(%d) Plmn(%x %x %x) Band(%d)
Line 3641: BPLMN: GRR_MM_ABORT_BACKGND_PLMN_LIST_REQ
Line 3653: BPLMN: Inactive 2G Bplmn was Running. Stopping BPLMN ! 
Line 3684: BPLMN:Error: BPLMN not Running, but got ABORT!
Line 3716: BPLMN:Error: Unexpected Error! 
Line 3744: BPLMN: GRR_MM_ABORT_BACKGND_PLMN_LIST_CNF to MM
Line 3796: Stop BPLMN as Other stack is Busy
Line 3916: BPLMN:Error: Invalid state. Already state changed to other state when timer expired
Line 3921: BPLMN: Already Suspend or Stop Rx-lev Sent, ABORT Rxd:%d
Line 3966: BPLMN: Already Suspend Sent, ABORT Rxd:%d
Line 3977: BPLMN:Error:!Invalid BPLMN State
Line 4020: MissedBand: Scan Done rr_band_type=%s
Line 4029: BPLMN: 2G SingleRatSearch Done
Line 4166: rr_CbchState:%d
Line 4191: rr_CbchState:%d
Line 4203: CbchState:=> CBCH is STOPPED_DURING_BPLMN
Line 4229: BPLMN: SI 1 DecodedCellChnDesc
Line 4284: BPLMN: rr_SyncCellList.Lai(%x,%x,%x,%x,%x) Arfcn:%d
Line 4292: SyncCell Contains Same LAI as SCell:  0x%x 0x%x 0x%x
Line 4300: Arfcn:%d has Valid LAI, Remove from BPLMN Search
Line 4310: NCell Contains Invalid LAI:  0x%x 0x%x 0x%x
Line 4364: FPLMN: Invalid Valid Arfcn
Line 4402: BPLMN: %d) Req Channel %d
Line 4436: BPLMN: Valid Arfcn Added to List
Line 4478: FreqSearchMode = %d NetScanType = %d
Line 4496: BPLMN: BplmnListSize %d
Line 4504: BPLMN: Received PLMN from LIST: %x %x %x
Line 4520: [Smartband] ReqBandNum(%d) > 0, use ReqBandList from upper layer.
Line 4529: [Warning] ReqBandNum(%d) > RR_NUM_2G_BAND(%d), force set to %d
Line 4537: BPLMN: ReqBand %d: %s
Line 4559: BPLMN: BplmnListSize is ZERO
Line 4564: BPLMN: ReqBandNum %d
Line 4574: BPLMN: ReqBand %d: %s
Line 4585: BPLMN: ReqBand %d %d
Line 4737: FreqSearchMode = %d
Line 4754: FPLMN: NetScan Type:%s, ReqChannelNum:%d
Line 4759: BPLMN: ReqBandNum %d
Line 4785: BPLMN: ReqBand %d: %s
Line 4807: FPLMN: %d) Req Channel %d
Line 4828: FPLMN: Valid Arfcn Added to List
Line 4839: BPLMN: ReqBand %d %d
Line 4850: Existing HPLMN  0x%x 0x%x 0x%x
Line 4859: PLMN not valid 
Line 4864: New  HPLMN  0x%x 0x%x 0x%x
Line 4871: GRR_MM_UPDATE_ACTING_HPLMN_REQ : ActHplmnValid (%d) 
Line 4879: GRR_MM_UPDATE_ACTING_HPLMN_REQ : %x %x %x
Line 4887: Active HPLMN Param is absent  (%d) 
Line 4900: RrIllegalEdgeBandConfig(%d) 
Line 4916: MCC search: Stored Cell Search
Line 4945: Invalid FreqBand(%d) in function: rr_UpdateDetectedBandMask
Line 552: REG IND
Line 86: MM has registered on an EMERGENCY cell!!!
Line 90: SIM not read - IGNORE!!!
Line 1073: RrIllegalEdgeBandConfig(%d) 
Line 1093: rr_AbortSearchStatus(%d) 
Line 1098: Hold PLMN SEARCH: ABORT_LIST_REQ_AND_PLMN_REQ_DURING_WPOWER
Line 1103: Hold PLMN SEARCH: RR State is WPOWER
Line 2503: BPLMN:Error:NonDrx CsNonDrx (%d) PsNonDrx(%d) rr_NonDrxTimInProg(%d) GmmAttachInProg(%d) AccInProg(%d) DlTbfProc(%d)
Line 2517: rr_WaitIdleCnfForImmResel is TRUE, Donot handle PLMN LIST REQ
Line 2535: BPLMN: <LIST REQ from MM> BPlmnDb %d
Line 2537: BPLMN: rr_PlmnListReq: SearchType %d, SingleRatSearch %d, PlmnReqForOldList %d
Line 2545: RrIllegalEdgeBandConfig(%d) 
Line 2566: ReqBandNum = 0xFF send GRR_MM_PLMN_LIST_IND without search
Line 2593: WAIT for SRRC response
Line 2607: BPLMN Proc allowed
Line 2613: Bplmn request for Inactive rat, No DSRC grant required!!!
Line 2628: BPLMN:Error: Already BPLMN ongoing!!
Line 2684: rr_band_type:%s rr_BandInd:%d
Line 2692: BPLMN: Wait for IDLE_CNF (%d)
Line 2703: rr_NewIdleToL1 rr_IdleReqState:%d
Line 2723: BPLMN:Error: Unexpected Error! 
Line 2993: BPLMN:PlmnListInd.Cause(%d)!
Line 3005: GRR_MM_BACKGND_PLMN_LIST_FAIL_IND to MM
Line 3021: GSM_PLMN_list_count(%d) StartBPlmnlistValidTimer
Line 3592: BPLMN:Age of ARFCN(%d) Bsic(%d) Plmn(%x %x %x) expired
Line 3614: BPLMN DB has no more elements left
Line 3819: rr_StopBPlmnProcedure
Line 3829: BPLMN: Inactive 2G Bplmn was Running. Stopping BPLMN ! 
Line 3874: BPLMN:Error: Unexpected Error! 
Line 4068: BPLMN: rr_BPlmnResume
Line 4080: rr_band_type:%s rr_BandInd:%d
Line 4138: BPLMN:Error:  Unexpected
