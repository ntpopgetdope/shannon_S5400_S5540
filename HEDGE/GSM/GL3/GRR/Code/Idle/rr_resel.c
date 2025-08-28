Line 640: Delay Servng Cell To Reselect
Line 771: N Cell suitable IF(%d) rr_RegRes (%d):  Forbidden LA for roaming: But LAI same as SCell
Line 776: N Cell is NOT suitable: Forbidden LA for roaming
Line 783: C1(%d)CellPrio(%d)IF(%d)
Line 807: Arfcn(%d)
Line 817: PBCCH:Cell Not Suitable
Line 828: BCCH PMO:PCCO:Cell Not Suitable
Line 838: BCCH:Cell Not Suitable
Line 845: RecSysInfo(%d)
Line 852: !CellNotSuitable C1(%d)
Line 1091: NumCellWithC31GreaterThanOrEqualToZero %d
Line 1096:  Error Possible with no_of_elements :%d 
Line 1107: NumElemWithHighPrio(%d)
Line 1112: All NCell(%d)
Line 1118: No PSI : All NCell(%d)
Line 1132: Index %d: Arfcn(%d), PrioClass(%d), C31(%d), C32(%d), TriedForResel(%d)
Line 1167: ERROR: rr_SortForReselection: Invalid ReselAlgorithm(%d)
Line 1208: SCELL(%d) RxLev(%d) Bsic(%x) C2(%d) RA(%d) Lai[3,4](%x,%x)
Line 1214: NCELL(%d) RxLev(%d) Bsic(%x) C2(%d) RA(%d) Lai[3,4](%x,%x)
Line 1247: ERROR: rr_SortForReselection: Invalid ReselAlgorithm(%d)
Line 1285: Cell Count With Same LA RA(%d)
Line 1342: Candidate for re-establishment: Arfcn(%d), RxLev(%d)
Line 1359:  Re-establishment target cell Arfcn(%d), RxLev(%d)
Line 1364:  No target cell found for re-establishment
Line 1456: Convert GSM to GPRS resel param
Line 1496: GSM to GPRS Convert Cell %d (0x%x) Valid Params %d
Line 1589: Update Serving Cell GPRSParams NOT in BA list
Line 1599: GPC(%d),HcsThr(%d)
Line 1616: Update Serving Cell GPRSParams in BA list
Line 1626: GPC(%d),HcsThr(%d)
Line 1962: ### C2 changed to RXLEV for Cell(%d) Rxlev(%d) C2Org(%d)
Line 1973: ### C2 changed by linear equation for Cell(%d) C2(%d) C2Org(%d) RxLev(%d), S-RxLev(%d)
Line 2138: Arfcn(%d) C2GtrThanSrv(%d), attempt reading BCCH
Line 2145: Avoid BCCH read for resel candidate cell(%d) during PS Data
Line 2152: Cannot try BCCH read as the read for immediate reselection is going on
Line 2429: ### Store Resel Parameter for band(%d) from Cell(%d)
Line 2470: ### Copy Resel Parameter for Cell(%d) from band(%d)
Line 2478: ### Copy Resel Parameter for Cell(%d) from ServCell
Line 2636: CRO adjustment: org(%d), mod(%d) for ARFCN(%d)
Line 2715: ERROR: !!!Invalid reselection algorithm %d
Line 2758: GSM:rr_NbC1(%d)
Line 2787: C1value C1 value %d Threshold %d 
Line 2801: GSM:AUTO_RESEL_REASON(%d)
Line 2833: GPRS:rr_NbC1(%d)
Line 2841:  Error Possible with no_of_elements :%d 
Line 2861: RESEL Cell(%d) SCell_C32(%d) NCell_C32(%d)
Line 2867: RESEL Cell(%d) SCell_C32(%d) NCell_C32(%d)
Line 2883: GPRS:AUTO_RESEL C1_LESS_THAN_ZERO
Line 2888: GPRS:AUTO_RESEL BETTER_NEIGHBOUR
Line 2954: GetValidCellAfterReselFailure :rr_NbC1(%d)
Line 2964:  Check for Cell (%d) BSIC (%x) ReselTried (%d) Rxlev (%d) BarCount (%d) Handiacp(%d) Susp(%d)
Line 2993: GSM:Cell with BSIC (%d) wo Bsic (%d) Nbidle (%d)
Line 3004: Sorted Cell (%d) BSIC (%x) Rxlev (%d)
Line 3037:  Total Cells to be evaluated (%d) SyncCellWithoutBsicOnly (%d)
Line 3042: Sorted Cell (%d) BSIC (%x) Rxlev (%d)
Line 3080: rr_NbIdleIndex (%d) ARFCN  (%d)
Line 3102: rr_EvaluateCellBeforeSelection: SyncCellWithoutBsic (%d) NbIdle (%d) Try Sync for rr_NbIdleIndex (%d) ARFCN  (%d) 
Line 3135: [PRIO] rr_ProcessPriorityReselect: EutranResel[Type(%d) prio(%d) S(%d)] VS. UtranPrioResel[Type(%d) prio(%d) S(%d)]
Line 3140: [PRIO] IRAT resel already started, rr_InterRatStatus(%d)
Line 3146: [PRIO] GeranPriorityParam(%d) or 3GPriorityParam(%d) is not present
Line 3225: [G2U][PRIO] -----> SELECT 3G Cell <------
Line 3256: [G2L][PRIO] -----> SELECT 4G Cell <------
Line 3264: No target cell exist, skip Priority Based Reselection
Line 3322: Resel Reason not set! Setting to (%d)
Line 3333: Resel Failure : Evaluate cells before Cell Sel  rr_NbIdleIndex (%d)
Line 3383: No reselection - rr_PostCsNonDrxPeriod TRUE
Line 3389: RR_WIMASS RESEL PENDING
Line 3395: RESEL ALREADY PROGRESS
Line 3401: BCCH Read of NCell after Resel Failure in Progress
Line 3407: NC2 MODE ACTIVE
Line 3413: CCN MODE ACTIVE
Line 3420: U2G CCO is in progress
Line 3427: U2G RESEL is in progress
Line 3432: L2G RESEL is in progress
Line 3437: L2G Redir is in progress
Line 3442: L2G CCO is in progress
Line 3447: L2G Redir Cell Selec is in progress
Line 3452: Resel Hold Req from MM is in progress
Line 3459: BPLMN: Filtered Reselection as Manual Ongoing & C1:%d compared with %d, Softsum:%d compared with %d
Line 3464: Resel Cause: %d
Line 3468: rr_RegRes_WaitPLMNSearch is TRUE !! Do not trigger reseletion. Wait for PLMN LIST/SEARCH REQ event from NAS
Line 3475: MMS  is oning !! Do not trigger Better Neighbor reseletion
Line 3480: rr_MmRxvdPowerOffInd or rr_MmSuspendRatCnfPending is TRUE !! Do not trigger reseletion.
Line 4323: StopBetterNeighborReselection(%d)
Line 4403: BestNeigh:rr_NbC1(%d)
Line 4446: Suspended Cell with ARFCN %d not chosen for resel, try intermediate resel
Line 4452: SELECT BEST NEIGHBOUR (%d)
Line 4455: Reselection reason is (%d)
Line 4535: !!!Reselection Cell(%d) is out of band
Line 4563: START RESELECTION ON Arfcn:%d
Line 4570: ABNORMAL RESELECTION ON Arfcn:%d
Line 4575: NORMAL RESELECTION ON Arfcn:%d
Line 4595: Error!!!rr_ReselectionCell == NULL
Line 5088: !!! Reselection Cell NULL !!!
Line 5097: RR_NO_RESELECTION_STATE
Line 5102: RR_RESEL_READ_ALL_SI3478_STATE
Line 5107: RR_RESEL_WAIT_IDLE_CNF_STATE
Line 5112: RR_RESEL_STOP_TBF_STATE
Line 5117: RR_RESEL_READ_SI3_4_STATE
Line 5122: RR_RESEL_READ_SI1_13_STATE
Line 5130: RR_RESEL_CAMP_ON_STATE
Line 5140: !!! Wrong cell in CAMP_ON_STATE !!!
Line 5162: Wrong ReselectionState
Line 5256:  CCO fail going to target cell
Line 5291: NCCO Fail - NccoStatus(%d)  Cause (%d)
Line 5299:   Packet Access Reject
Line 5319:   Access failed
Line 5333:   Re-RACH
Line 5345:  PCCO fail going back to OLD cell
Line 5357: Resume RLC after fail to camp back to old cell post PCCO fail 
Line 5385:  Cell Change from UTRAN failed
Line 5415:  T309_EXPIRY: CCO: rr_SimFlag(%d) rr_State(%d)
Line 5427:  UL_ASS_CROSSOVER, Do not trigger IDLE REQ
Line 5448:  Cell Change from EUTRAN failed
Line 5467:  UL_ASS_CROSSOVER, Do not trigger IDLE REQ
Line 5488:  Cell Reselection from UTRAN failed
Line 5531:  Cell Reselection from LTE failed
Line 5634: #Pick Next Best Cell#
Line 5637:  RR_RESEL_READ_ALL_SI3478_STATE
Line 5653:  RR_RESEL_READ_SI3_4_STATE
Line 5683:  Reselection state %d
Line 5693:  Pick Next Best:Resel Reason(%d)
Line 5702: No GSM Cell  Left rr_NbIdleIndex (%d)
Line 5859: Avoid reading SI13 to handle pending MT CS EST faster
Line 5866: Cell Reselection to Different LAI STOPPED to answer paging
Line 5881: Cell Reselection STOPPED to answer paging, Different LAI
Line 5884: SCELL  LAI (%x %x %x %x %x) RA color %d 
Line 5887: NCELL  LAI (%x %x %x %x %x) RA color %d 
Line 5899: Avoid reading SI13 to handle pending CS EST faster
Line 5967: Ignore NCell(%d) CCN is Allowed, Not suitable for Delay EST_REQ
Line 5991: SCELL  LAI (%x %x) RA color (%d) RxL (%d) C2 (%d)
Line 5994: NCELL(%d)  LAI (%x %x) RA color (%d) RxL (%d) C2 (%d) C2GrServing (%d)
Line 6001: No Suitable NCell With Good C2 Greater Than Serving Present
Line 6052: EstReqCause:%d, Wait for Resel before handling EST_REQ
Line 6073: EstReqCause:%d, Wait for Resel to cell with same LAI, before handling EST_REQ
Line 6078: EstReqCause:%d, Dont Wait for Resel to cell with DIFF LAI, before handling EST_REQ
Line 6318: Found a Suitable Cell for Resel: Cell(%d) RxLev(%d)
Line 6323: Didn't Find a Suitable Cell for Resel
Line 6329: Didn't Find a Suitable Cell for Resel
Line 6340: rr_ResetImmCellStatusInSyncList
Line 6363: ERROR!!!!!!!!!!! SuitableCell=NULL!
Line 6373: Resel in Progress: Cannot Try rr_TargetCellForBcchRead:%d
Line 6380: Dont try TargetCellForBcchRead as C2GreaterThanServing:%d
Line 6392: Add rr_TargetCellForBcchRead CellToSIQHead %d
Line 6397: Not add rr_TargetCellForBcchRead ToSIQHead - %d %d %d
Line 6415: Schedule BCCH read on rr_TargetCellForBcchRead(%d) 
Line 322: Freq(%d):Bsic Not allowed
Line 333: Freq(%d):CCO:Bsic Not allowed
Line 338: CCO:Bsic allowed with no cause
Line 343: Freq(%d): Bsic (0xFF) Not allowed
Line 1030: !!! Wrong GPC !!!
Line 1402: ReselectionMode C31_C32
Line 1416: Non-PBCCH,ReselectionMode C31_C32
Line 1421: ReselectionMode C2
Line 1429: ReselectionMode C2
Line 1780: Skip NegC1
Line 1690: IdleStatic: SCell C2 (%d)
Line 1818: Skip increments for C1 lessthanzero counter
Line 477: TriedForReselection(%d) - !!!Freq(%d):Not Suitable!!!
Line 491:  !!!Freq(%d):Not Suitable!!!
Line 501: Freq(%d):Not Suitable for IMM RESEL=> status (%d)
Line 523: BPLMN: Reselection criteria allowed for %d with same RA_Color
Line 545: BPLMN: Reselection NOT allowed for %d with same RA_Color: Not suitable
Line 554: BPLMN: Reselection criteria allowed for %d with same RA_Color: Found in List
Line 568: BPLMN: Reselection not allowed for %d with different RA_Color: Found in List
Line 574: BPLMN: Reselection criteria allowed for %d with different RA_Color: No Suitable in List
Line 579: BPLMN: Reselection criteria during HPLMN 
Line 2378: ERROR: Invalid Resel Algo(%d)
Line 2337: !!InValid NCell Param Arfcn(%d)
Line 2577: Arfcn(%d) : C1(%d) : A = (RLA_C(%d) - RXLEV_ACCESS_MIN (%d) : CurBand(%d),MxTxpwr(%d)
Line 2589: Recalculated: Arfcn(%d) : C1_dBm(%d) : A_dBm = (RLA_C_dBm(%d) - RXLEV_ACCESS_MIN_dBm (%d)
Line 178: !!!Buffer overflow, array index of 'MaximumRFoutputPower_Table[]' may be out of bound ms_power_class is %d !!!
Line 223: C1 Calc: B(%d)=(PCL(%d)-P(%d)) : P class %d
Line 132: !!!Wrong Power Class(%d)!!!
Line 142: !!!GSM:Wrong PowerClass(%d)!!!
Line 442: Freq(%d):ReselSusTimerActive
Line 2914: UNSUCCESSFUL RESELECTION
Line 3598: QRB is running. Abort Resel to Better Cell
Line 3607: CellLocking: Abort Resel to Better Cell
Line 3614: rr_ProcessReselection
Line 3633: GMM signalling is in progress: Filtering Reselection
Line 3646: Peer Stack on data serv cell rxlev(%d) softsum (%d), avoid Better Ncell Resel to avoid TP issue
Line 3659: ACCESS_IN_PROGRESS, Set rr_ReselHoldforIdleCnf
Line 3664: Chn NW, Ignore reselection for C1< 0
Line 3668: Check SRRC state to know if Resel is possible 
Line 3674: Wait for SRRC grant
Line 3683: EST msg is pended. Abort Resel to Better Cell
Line 3729: #STARTED RESELECTION#
Line 3748: CCO IN PROGRESS NccoStatus(%d)
Line 4113: Immediate Reselection in Cell(%d)
Line 4119: PostCsNonDrxPeriod: %d -> %d
Line 4123: QRB is running. Abort IMMEDIATE RESELECTION
Line 4129: CellLocking: IMMEDIATE RESELECTION
Line 4140: Check SRRC state to know if Resel is possible 
Line 4146: Wait for SRRC grant, reselection_reason(%d)
Line 4158: ACCESS_IN_PROGRESS, Set rr_ReselHoldforIdleCnf
Line 4161: IMMEDIATE RESELECTION
Line 4184: RACH Failure
Line 4204: Simflag %d 
Line 4264: Reselect Imm - CCO failed
Line 4281: RACH Failure after IRAT procedure %d
Line 4829: Cell unsuitable for re-establishment C1:%d, RE:0x%x
Line 4859: Cell unsuitable for re-establishment C1:%d, RE:0x%x
Line 4875: Cell Is Not Suitable
Line 4880: Bsic Not Allowed
Line 4684: Idle Confirm from L1 pening in ReselCampon
Line 4723: rr_WaitSiAfterResel %d
Line 5191: StopCellResel: Cell(%d) ReselReason:%d
Line 3992: Try re-establishment on the SCell
Line 6140: EstReqCause:%d, Wait for Resel to cell with same LAI, before handling EST_REQ
Line 6145: EstReqCause:%d, Dont Wait for Resel to cell with DIFF LAI, before handling EST_REQ
Line 6160: Start EST_REQ waiting for Resel
