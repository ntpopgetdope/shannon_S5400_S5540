Line 106: Allow NCell SI to be Read
Line 119: !!!SI Read In Action Doesn't Match!!!SIQ Freq(%d) Recv Freq(%d)
Line 124: SI for wrong cell
Line 133: PSI not SI expected
Line 163: Unsolicited SCell Read
Line 172: Unsolicited NCell Read
Line 177: Proceeding to read only NCell SI
Line 829: [##DCXO_Recovery] MPH_NO_BCCH - ARFCN:%d Cause:%d Background_Read : %d, Rxlev : %d, isRepeatBCHReqEnabled %d
Line 843: MPH_NO_BCCH - ARFCN:%d Cause:%d
Line 905: LTE_Meas Ongoing at GL1, Pend STOP_BCCH READ %d
Line 940: ARFCN: %d CONFLICT_PACCH_TX %d, retry BCCH_READ again
Line 966: LTE_Meas Ongoing at GL1, Pend SCELL BCCH READ for %d Seconds
Line 1019: BPLMN: Foreground NO_BCCH %d RXVD. BPLMN BCCH Can be resumed
Line 1025: BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
Line 1038: BPLMN: Foreground NO_BCCH %d RXVD. BPLMN RXLEV Can be resumed
Line 1410: Immediate Assigment Ext
Line 1414: Immediate Assigment Normal
Line 1421: Immediate Assigment Length Error %d
Line 1475: MPH_ERROR_IND(cause %d)
Line 1487: MPH_ERROR_IND received for wrong cell(ARFCN %d), rr_ServCell (%d)
Line 1508: Resel In Prog
Line 1535: !!! DSF during full CCCH listening: set rr_WaitIdleCnfForImmResel and triggered IDLE REQ to GL1 in 2G/2G
Line 1559: MPH_ERROR_IND with invalid cause %d
Line 1588:  Need SI1
Line 1643: rr_HandleIdleCnfPreEmption Error # Waiting for IDLE CNF 
Line 1677: SCell is Handicapped! Trigger Resel
Line 1773: rr_ReselHoldforIdleCnf - Start  RESEL
Line 1796: Resel or cell selection procedures is not ongoing
Line 1804: rr_WaitIdleCnfForImmResel %d - Start IMM RESEL
Line 1825: [NWEXCL_V] Try next available arfcn from LTE Redirection List
Line 1843:  Invalid rr_WaitIdleCnfForImmResel cause
Line 1912: Sent RR_LBS_CELL_CHANGE_IND to LBS
Line 1921:  LTE MRU Scan Supported : numofEarfcn(%d)	rr_NumOfMRUEarfcn(%d)
Line 1943: Index (%d) Earfcn (%d) measBW(%d) priority(%d) ThreshEUTRANHigh (%d) ThreshEUTRANLow (%d) ThreshEUTRANQRxlevMin (%d) 
Line 1945:  Process Available Earfcn Information	
Line 1962: L1 unable to process IDLE REQ
Line 1972: DL TBF is On, avoid sending IDLE REQ again
Line 1979: L1 reject IDLE REQ - Peer Stack ARFCN is same as requested ARFCN
Line 2005: MPH_START_NC_MEAS_REQ
Line 2031: RESEL from UTRAN Complete - IdleCnf
Line 2052: DTM: rr_SetDTMAccessStatusToRlc(T)
Line 2059: ACESS IND not sent (%d) (%d)
Line 2069: Needed PSI(0x%x)
Line 2074: No Needed PSI
Line 2182: GRR: MPH_[P]CCCH_IDLE_CNF
Line 2230: Idle Cnf received after PCCO Fail, Start RESEL to %d
Line 2246: MCC: %d
Line 2281: First Idle SCell
Line 2331: QRB: Start! RLC suspension is done and in IDLE
Line 2367: RLC is not resumed as GPRS is OFF
Line 2391: Calling Process Reselection after Dedicated state
Line 3003:  Clear N rr_BcchReadArfcn  (%d)
Line 3015:  Clear S rr_BcchReadArfcn  (%d)
Line 3054: Send Pening  CELL Ind to MM
Line 3061: CSend Pening  CELL Ind to MM ....... For CS Path
Line 3091: Earlier PendedMsgByLteMeas:%d BcchArfcn:%d StopBcchArfcn:%d
Line 3183: PendedMsgByLteMeas:%d BcchArfcn:%d StopBcchArfcn:%d
Line 3206: Rxd MPH_NO_BCCH
Line 3213: MPH_NO_BCCH - ARFCN:%d Cause:%d Bckgnd %d)
Line 3218: ANR: Rxlev %d
Line 3228: BPLMN: BPlmnResultToMmPending, ignoring Msg
Line 3235: BPLMN:Error: Rxd MPH_NO_BCCH in not IDLE state, stop BPlmn procedure
Line 3243: BPLMN:  L1_CAUSE_BPLMN_NOT_IN_IDLE_STATE: Stop BPLMN: L1 Cause:%d)
Line 3254: BPLMN:Error: BPLMN not Running, but got MPH_NO_BCCH!
Line 3264: BPLMN: Arfcn:%d was expected. Ignore NO_BCCH)
Line 3268: BPLMN: rr_BPowerMsg is NULL!)
Line 3281: BPLMN:Error: BCCH_READ for BPLMN failed L1_CAUSE_FN_OFFSET_CHANGE, send BCCH_READ again
Line 3300: BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
Line 3317: BPLMN:Error: BCCH_READ for BPLMN & PAGE READ conflict! Ignoring NO_BCCH, let BCCH_READ proceed 
Line 3333: BPLMN: Include Retrylist due to ARFCN %d! Rxlev %d in Thresh
Line 3337: BPLMN: Not retry due to ARFCN %d! Rxlev %d not in Thresh
Line 3354: BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
Line 3365: BPLMN:Error: Unexpected Error! 
Line 3387: ***ERROR*** Debug this: NO_BCCH in WIDLE_CNF
Line 3553: [Service Provider]:%s  [FCI]: %s [DtmSupport] : %d, [VamosSupported] : %d
Line 420: LTE_Meas Ongoing at GL1, Pend BCCH READ %d
Line 471:  !!!Wrong entry in SyncCellList
Line 541: DSDS L1 busy Avoid cell handicap  on Cell (%d)
Line 585: DSDS busy Avoid cell handicap and N2F  on Cell (%d)
Line 308: NO BCCH Recieved for wrong Cell (%d) , send BCCH again for (%d) sent (%d)
Line 320: DSDS busy Stop Cell Resel on Cell (%d)
Line 353: RLC is not resumed as GPRS is OFF
Line 616: Stop BCCH READ REQ timer for cell search if running
Line 630: MPH NO BCCH with DSDS error received for Arfcn (%d), Start timer to retry BCCH READ.
Line 635: NO BCCH with DSDS Error is discarded
Line 650: [##DCXO_Recovery] rr_SearchRedirectionFreq Called isRepeatBCHReqEnabled TRUE
Line 657: [##DCXO_Recovery] Else case isRepeatBCHReqEnabled FALSE
Line 684: [##DCXO_Recovery] L2G cell selec isRepeatBCHReqEnabled TRUE
Line 692: [##DCXO_Recovery] L2G cell selec isRepeatBCHReqEnabled FALSE
Line 703: [##DCXO_Recovery] cell selec ELSE CASE isRepeatBCHReqEnabled TRUE
Line 711: [##DCXO_Recovery] cell selec ELSE CASE isRepeatBCHReqEnabled FALSE
Line 734: !!! SyncErr %x on ServCell during NON DRX, set rr_WaitIdleCnfForImmResel and triggered IDLE REQ to GL1
Line 741: !!! SyncErr %x on ServCell : Immed Resel
Line 748: DSDS Error received: ServCell(%d), NeededSI(%x)
Line 760: MPH_NO_BCCH received: Cell(%d), cause(%x)
Line 766: !!! SyncErr %x on ServCell during rr_WaitSiAfterResel, SingleSim(%d)
Line 780: DSDS Error received: ServCell(%d), NeededSI(%x)
Line 790: DSDS Error received on Cell(%d), NeededSI(%x)
Line 800: !!! SyncErr %x on ServCell : Stay  on Scell
Line 1218:  Decode Error
Line 1240:  Extended, Request Reference 2
Line 1248:  Extended, Request Reference 1
Line 1257:  Normal, Request Reference 1
Line 1265:  After time Freq Hopping
Line 1275:  No after time CA FH failed
Line 1288:  No after time Freq lists FH failed
Line 1296:  After time Freq lists OK
Line 1315: IA_RO[0] %x Len %d
Line 1329: rr_use_compressed_IRAT_HO_INFO %d
Line 1333: IA_RO Absent
Line 1339: FreqLen: %d / IA_RO[%d]: %x 
Line 1341: rr_use_compressed_IRAT_HO_INFO %d
Line 1354:  BeforeTime FreqHop IA
Line 1360:  No BeforeTime FreqHop
Line 1071: Channel Count %d
Line 1076:  Hopping error - Number of Frequencies is 0
Line 1086: Channel List %d 
Line 1117:  AfterTimeHopStatus(0x%x), BeforeTimeHopStatus(0x%x)
Line 1145:  Storing default val ChInfo->ChanDescr for as 0xFF RequestRefNum (0x%x)
Line 1157:  Storing default val ChInfo->ChanDescrfor as 0xFF RequestRefNum (0x%x)
Line 1191:  ImmASS: MPH_IMMED_ASSIGN_REQ
Line 1197:  Hopping error
Line 2791: ## SICell ## %d
Line 2830: ## Ignore!! Sys Read Req for S cell Needed SI ## 0x%x
Line 2837: Status msg already in progresss
Line 2913: NCELL to be schd for BCCH %d bsic %d neededSI 0x%x
Line 2924: NCELL NOT schd for BCCH %d bsic %d neededSI 0x%x
Line 2943: #ACTUAL NCELL to be schd for BCCH %d bsic %d Rx level %d neededSI 0x%x
Line 2966: CCN has been initiated, no need of BcchReq
Line 2975: NO NCELLs to be schd for BCCH in PTM
