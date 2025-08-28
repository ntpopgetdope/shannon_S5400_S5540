Line 322: Failed to create T_DRinactive
Line 331: ERROR creating TPeriodicInterFResel
Line 338: ERROR registering for State Change notificationwith CnxMgr
Line 345: Failed to create T322
Line 399: ERROR deleting TPeriodicInterFResel
Line 404: ERROR deleting T_AutonomousCsgSearch
Line 408: ERROR deleting T_DRinactive
Line 625: U2L reselection not ongoing
Line 641: TPeriodicInterFResel Stopped (TmId=%d)
Line 645: ERROR stopping TPeriodicInterFResel
Line 803: NotifyRequestedInitiateMeasurementExist : RequestedInitiateMeasurementExist[%d] Set to [%d]
Line 3184: StopMruEutraMeas
Line 3654: GenMsg is NULL
Line 3661: CellReselecter: ERROR Illegal State
Line 3693: WARNING CandidateInEvalPtr is not NULL
Line 3698: Deactivation finished :: Retry with the previously received measurements
Line 3719: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 3725: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 3741: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 3749: Evaluation of EUTRA Candidate not allowed: IsUserDataRequested, IsReleasingProgress
Line 3761: Not Eutra Cell
Line 3778: [DR Based] InterF Reselection Measurements Received for DR Based Cell Reselection
Line 3785: [APBCR] WARNING No Feasible UtraPrio Candidate
Line 3798: [APBCR] ERROR Unknown type of CandidateCell : CellReselecter_p->CandidatePtr->type(%d)
Line 3815: [APBCR] WARNING No Feasible GsmPrio Candidate
Line 3826: [APBCR] ERROR Unknown type of CandidateCell : CellReselecter_p->CandidatePtr->type(%d)
Line 3850: Periodic: PeriodicInterFResel Enabled (Count: %d)
Line 3860: PeriodicInterFReselMeas Not Required Anymore -> Clear PeriodicIFReselEnabled
Line 3867: ServingCell is Femto -> Skip the procedure of finding the best SIR cell
Line 3876: Periodic: NormalCandidatePtr is NULL -> Find SirCandidate
Line 3897: WARNING Best CandidateCell has been changed during deactivation time: Previous(%d,%d) vs. Now(%d,%d)
Line 3910: GSM is measured. But Current IRAT Measurement rule is MeasureNone
Line 3966: (CheckingIntraF) Periodic: PeriodicInterFResel Enabled (Count: %d)
Line 3976: PeriodicInterFReselMeas Not Required Anymore -> Clear PeriodicIFReselEnabled
Line 3983: ServingCell is Femto -> Skip the procedure of finding the best SIR cell
Line 3993: (CheckingIntraF)  Normal InterF Candidate Found-> Find SirCandidate
Line 3999: Best Candidate Changed for InterFResel & SirCandidate Found-> To be Handled After Deactivation
Line 4001: Check if the best EcNo and Sir candidates are the same
Line 4012: No SirCandidate -> PeriodicInterFReselMeasCount is decreased to %d
Line 4030: (CheckingIntraF) Periodic: No Restrictions on PeriodicInterFResel  -> Find SirCandidate
Line 4045: No Other Restrictions & SirCandidateFound -> Trigger PeriodicInterFResel
Line 4056: No SirCandidate -> PeriodicInterFReselMeasCount is decreased to %d
Line 4101: Confirmed-Still checking on CandidateCell(%d,%d)
Line 4105: ERROR (CandidateCellPtr !=NULL)	CandidateInEvalPtr is NULL - return
Line 4120: Started deactivation on CandidateCell(%d,%d) being evaluated in CELL_FACH
Line 4126: ERROR CandidateCell is NOT active in CELL_FACH
Line 4146: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 4152: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 4175: EutraCell Found - Started deactivation on CandidateCell for U2L reselection
Line 4180: ERROR CandidateCell is NOT active
Line 4186: Not Eutra Cell
Line 4197: Different LAI of CandidateCell(%d,%d) & Call setup in progress =-> Reject this candidate
Line 4210: Different LAI of CandidateCell(%d,%d) & ServingCell >= -15 -> Reject this candidate
Line 4220: CandidateCell(%d,%d) came out of the reject condition
Line 4235: No candidate remaining in the early SIB ranking list
Line 4243: No change in the best cell - Keep attempting on current candidate(%d,%d)
Line 4248: Best cell has changed back to Serving Cell(%d,%d)
Line 4256: ServingCell energy is too low & CandidateCell(%d,%d) energy is not bad -> Keep attempting
Line 4264: Best neighbor changed, but within meas error margin -> Keep attempting on previous candidate(%d,%d)
Line 4269: ServingCell Not Suitable - Finish cell reselection asap on current candidate(%d,%d)
Line 4274: Best cell has changed to Non-Serving Cell(%d,%d)
Line 4294: Serving cell signal quality is too bad & now ready to camp on CellReselecter_p candidate cell
Line 4304: Started deactivation on CandidateCell(%d,%d) for candidate cell change
Line 4310: ERROR CandidateCell is NOT active
Line 4325: TResel expired or ignored & IsSelectable received for CandidateCell(%d,%d) -> Finish cell reselection
Line 4348: GenMsg is NULL
Line 4356: MUST NOT OCCUR - ERROR SavedTriggeringMsg is NULL
Line 4362: TResel expired or Serving cell not suitable, but still IsSelectable NOT received for CandidateCell(%d,%d) -> Wait!
Line 7570: Stop T_AutonomousCsgSearch
Line 7577: pal_ERegId_URRC_autonomous_csg_search_compensation_interval - %d sec
Line 7582: TimeInSec - %d sec
Line 7591: Successfully started T_AutonomousCsgSearch(%d sec)
Line 7595: Could not start T_AutonomousCsgSearch(%d sec)
Line 7600: Could not start T_AutonomousCsgSearch(%d sec)
Line 7849: MFBI Eutra frequency %d at Eutra Band %d Earfcn %d
Line 7856: MFBI Eutra frequency %d from Earfcn %d
Line 7871: MFBI Earfcn %d at Eutra Band %d Frequency %d
Line 7877: MFBI Earfcn invalid at Eutra Band %d from Eutra Frequency %d
Line 7899: [DR Based] SetDRBasedCellResel (%d)
Line 7959: Stop T_DRinactive
Line 7965: [DR Based]Successfully started T_DRinactive(%d sec)
Line 7969: Could not start T_DRinactive(%d sec)
Line 7974: Could not start T_DRinactive
Line 8015: Stop T_DRinactive
Line 8022: Could not start T_DRinactive, T_DRinactive is NULL
Line 2581: Classname:CellReselecter: ERROR Illegal State
Line 1205: Processing SIB11
Line 1213: Processing SIB11bis
Line 1223: Processing SIB11
Line 1231: Processing SIB11bis
Line 1239: Processing SIB12
Line 1263: WARNING - ServingCell not found in SIB11/12! Adding it.
Line 1282: ServingCell SibCellInfo Index %d
Line 1289: Stopped Tn timer for Serving Cell
Line 1092: Processing SIB19
Line 7462: CellReselecter: ERROR Illegal State
Line 6714: DefaultState_IratStatusInd - EutraDisabled set to %d
Line 6715: DefaultState_IratStatusInd - BlockU2LMeas set to %d
Line 6716: DefaultState_IratStatusInd - GsmDisabled set to %d
Line 2641: GenMsg is NULL
Line 2696: URRC is not in IDLE mode, start ASF Timer for %d sec 
Line 2701: URRC is not in IDLE mode, and ASF Timer is already running
Line 2715: ERROR stopping T_AutonomousCsgSearch
Line 2720: URRC is in IDLE mode, start ASF immediately
Line 2730: NumofTargetCsgCells(%d) Target-Rat(%d), so just ignore this target cell
Line 2736: ERROR stopping T_AutonomousCsgSearch
Line 2743: CellReselecter: This is not a source cell of FingerPrinted CSG Cell
Line 2749: ERROR stopping T_AutonomousCsgSearch
Line 2757: CellReselecter: ERROR Illegal State
Line 2763: SIB11_READ_DCHSPA_YES
Line 2768: SIB11_READ_DCHSPA_NO
Line 2086: Reset CSG to non-CSG Reselection flag 
Line 2125: CellReselecter_p->ReselMeasControllerPtr is NULL
Line 2248: ERROR Illegal State
Line 2260: GenMsg_1 is NULL 
Line 2271: GenMsg_2 is NULL 
Line 7208: Classname:CellReselecter: ERROR Illegal State
Line 7309: ServingCell will be notified after CandidateCell
Line 2882: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 2888: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 2904: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 2912: Evaluation of EUTRA Candidate not allowed: IsUserDataRequested, IsReleasingProgress
Line 2923: Not Eutra Cell
Line 2931: [DR Based] InterF Reselection Measurements Received for DR Based Cell Reselection
Line 2940: [APBCR] InterF Reselection Measurements Received for Utra Priority Based Cell Reselection
Line 2947: [APBCR] No Feasible UtraPrio Candidate
Line 2960: [APBCR] ERROR Unknown type of CandidateCell : CellReselecter_p->CandidatePtr->type(%d)
Line 2969: [APBCR] InterRat Reselection Measurements Received for GSM Priority Based Cell Reselection
Line 2977: [APBCR] No Feasible GsmPrio Candidate
Line 2988: [APBCR] ERROR Unknown type of CandidateCell : CellReselecter_p->CandidatePtr->type(%d)
Line 3010: Periodic: PeriodicInterFResel Enabled (Count: %d)
Line 3020: PeriodicInterFReselMeas Not Required Anymore -> Clear PeriodicIFReselEnabled
Line 3027: ServingCell is Femto -> Skip the procedure of finding the best SIR cell
Line 3035: Periodic: NormalCandidatePtr is NULL -> Find SirCandidate
Line 3060: >>> GSM is measured. But Current IRAT Measurement rule is MeasureNone <<<
Line 3247: Classname:CellReselecter: ERROR Illegal State
Line 3299: GenMsg is NULL
Line 3304: Classname:CellReselecter: ERROR Illegal State
Line 4867: CellReselecter: ERROR Illegal State
Line 3332: WaitingForCellReselMeasurements_PeriodicInterFReselAvailable
Line 3336: (PeriodicInterFReselAvailable) Ignore Periodic Inter-Freq Reselection
Line 3343: IgnoreCellReselection & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 3366: Call Setup In Progress: Block Periodic Inter-freq
Line 3372: PCH Config Response In Progress: Block Periodic Inter-freq
Line 3387: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 3395: Evaluation of EUTRA Candidate not allowed: IsUserDataRequested
Line 3403: Attempting Eutra Reselection (PeriodicInterFAvailable)
Line 3409: Not Eutra Cell
Line 3419: TReselDuration: %d msec
Line 3425: Invalid Scaled TReselDuration -> Set to %d msec
Line 3439: Attempting PeriodicInterFReselection on CandidateCell(%d,%d)
Line 3445: Not Inter-Freq Cell
Line 3455: ERROR starting TPeriodicInterFResel
Line 3460: TPeriodicInterFResel Started (TmId=%d) : %i msec
Line 3470: ERROR stopping TPeriodicInterFResel
Line 3478: SirCandidate Changed & TResel Running & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 3487: SirCandidate Changed & TResel Expired & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 3499: ERROR starting TPeriodicInterFResel
Line 3504: TPeriodicInterFResel Started (TmId=%d) : %i msec
Line 3514: Invalid CellId %d
Line 3089: WaitingForCellReselMeasurements_CellReselectionPrioBaseMeasurementsAvailable
Line 3147: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 3152: Evaluation of EUTRA Candidate not allowed BlockIratResel is TRUE!!
Line 3157: Skip Etura Meas: RRC Cnx in progress or User Data Requested
Line 7721: Targer csg cell with Uarfcn(%d) Cpich(%d) found using ASF on Source CellID(%d) Freq(%d)
Line 7723: Received RSCP from BplmnHandler : Rscp(%d) EcN0(%d)
Line 7734: CellReselecter_p->csgMeasRule[%d] Updated
Line 5633: [DSDS]: Dsrc grant received
Line 5655: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 5661: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 5667: [DSDS]: CandidateInEvalPtr is not NULL
Line 5683: [DSDS]: CandidatePtr is made NULL
Line 5690: Attempting InterFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 5708: Classname:CellReselecter: ERROR Illegal State
Line 5734: Attempting IntraFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 5745: [CurrentM] Set CellReselection
Line 5752: Classname:CellReselecter: ERROR Illegal State
Line 5758: [DSDS]: CandidatePtr NULL
Line 7248: ERROR GenMsg is NULL
Line 7157: IdleNRModeUpdateOperations :: ReselMeasControllerPtr is NULL
Line 7166: Classname:CellReselecter: ERROR Illegal State
Line 4391: MeasurementInd is ingored by Pending State - CellDch
Line 4483: CheckingIntraFreqReselCandidate_CommonChannelSetupComplete
Line 5387: IsSelectable Received
Line 5405: IsSelectble :: ServingCell NOT suitable for CandidateCell(%d,%d)-> Finish cell reselection
Line 5412: IsSelectable received for CandidateCell(%d,%d) :: Wait for next neighbor cell meas ind
Line 5432: GenMsg is NULL
Line 5444: IsSelectable: ERROR CandidateInEvalPtr == NULL
Line 5449: IsSelectable: ERROR CandidateCellPtr is NULL -> Abort Reselection
Line 5466: GenMsg is NULL
Line 5476: Classname:CellReselecter: ERROR Illegal State
Line 5499: IsNotSelectable Received
Line 5526: (E-SIB) IsRejectedForResel set to TRUE -> Wait for next measurements
Line 5551: GenMsg is NULL
Line 5566: Classname:CellReselecter: ERROR Illegal State
Line 1852: SirBasedReselEnabled is disabled for CS
Line 1860: CheckNextPrioCandidate
Line 1874: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 1880: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 1892: [APBCR] InterF Reselection Measurements Received for Utra Priority Based Cell Reselection
Line 1898: [APBCR] No Feasible UtraPrio Candidate
Line 1908: [APBCR] InterRat Reselection Measurements Received for GSM Priority Based Cell Reselection
Line 1915: [APBCR] No Feasible GsmPrio Candidate
Line 1921: Check normal next Candidate
Line 1940: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 1947: Evaluation of EUTRA Candidate not allowed: IsUserDataRequested
Line 1954: [APBCR] Checking InterF Reselection Measurements for Utra Priority Based Cell Reselection
Line 1960: [APBCR] No Feasible UtraPrio Candidate
Line 1973: [APBCR] No Feasible GsmPrio Candidate
Line 1977: Check normal next Candidate
Line 2010: Ignore Normal IF reselection: run SIR reselection (Freq %d, PSC %d, SIR %d)
Line 2016: Ignore Normal IF reselection & SIR reselection (ServingFreqSir %d, NeighFreqSir %d)
Line 2057: GenMsg is NULL
Line 2064: CellReselecter: ERROR Illegal State
Line 1695: SirBasedReselEnabled is disabled for CS
Line 1702: CheckNextCandidate
Line 1716: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 1722: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 1766: Ignore Normal IF reselection: run SIR reselection (Freq %d, PSC %d, SIR %d)
Line 1772: Ignore Normal IF reselection & SIR reselection (ServingFreqSir %d, NeighFreqSir %d)
Line 1781: [DR Based] InterF Reselection Measurements Received for DR Based Cell Reselection
Line 1815: GenMsg is NULL
Line 1822: CellReselecter: ERROR Illegal State
Line 5607: Classname:CellReselecter: ERROR Illegal State
Line 4828: Deactivate received for intra-freq CandidateCell(%d,%d) - DeactivateForOOS=TRUE
Line 4516: CheckingIntraFreqReselCandidate_PeriodicInterFReselAvailable
Line 4520: (PeriodicInterFReselAvailable) Ignore Periodic Inter-Freq Reselection
Line 4527: IgnoreCellReselection & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 4550: Call Setup In Progress: Block Periodic Inter-freq
Line 4556: PCH Config Response In Progress: Block Periodic Inter-freq
Line 4571: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 4579: Evaluation of EUTRA Candidate not allowed: IsUserDataRequested
Line 4594: EutraCell Found - Started deactivation on CandidateCell(%d,%d) for U2L reselection
Line 4600: ERROR CandidateCell is NOT active
Line 4608: Not Eutra Cell
Line 4616: TReselDuration: %d msec
Line 4644: Started deactivation on CandidateCell(%d,%d) for candidate cell change
Line 4650: ERROR CandidateCell is NOT active
Line 4657: Not Inter-Freq Cell
Line 4662: Too Low ServingEcNo (should not stop the on-going reselection) or ERROR No Matching SirCandidate
Line 4671: ERROR starting TPeriodicInterFResel
Line 4676: TPeriodicInterFResel Started (TmId=%d) : %i msec
Line 4686: ERROR stopping TPeriodicInterFResel
Line 4695: SirCandidate Changed & TResel Running & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 4705: SirCandidate Changed & TResel Expired & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 4717: ERROR stopping TPeriodicInterFResel
Line 4725: ERROR starting TPeriodicInterFResel
Line 4730: TPeriodicInterFResel Started (TmId=%d) : %i msec
Line 4740: Invalid CellId %d
Line 4764: CheckingIntraFreqReselCandidate_PrioBaseNeighbourCellSysInfoRecved
Line 4784: Currently checking intra-freq resel candidate -> Ignore the event PrioBaseNeighbourCellSysInfoRecved
Line 4954: CheckingIntraFreqReselCandidate_CellReselectionPrioBaseMeasurementsAvailable
Line 5015: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 5020: Evaluation of EUTRA Candidate not allowed BlockIratResel is TRUE
Line 5025: Skip Etura Meas: RRC Cnx in progress or User Data Requested
Line 4444: Abort Early SIB Reading received for CandidateCell(%d,%d)
Line 4461: CellReselecter: ERROR Illegal State
Line 5791: Classname:CellReselecter: ERROR Illegal State
Line 1358: Candidate rejected due to PlmnId not matchingSelected PlmnId
Line 5861: Classname:CellReselecter: ERROR Illegal State
Line 7485: ERROR GenMsg is NULL
Line 5929: Classname:CellReselecter: ERROR Illegal State
Line 5959: Attempting InterFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 5969: MemAllocFailed for Candidate cell
Line 5974: [CurrentM] Set CellReselection
Line 5979: Classname:CellReselecter: ERROR Illegal State
Line 6797: Classname:CellReselecter: ERROR Illegal State
Line 6014: CheckingInterFreqReselCandidate_IsNotSelectable
Line 6541: MemAllocFailed for Candidate cell
Line 6548: Classname:CellReselecter: ERROR Illegal State
Line 6117: Attempting InterRAT Cell Reselection to neighbour GSM Cell
Line 6120: [CurrentM] Set CellReselection
Line 6130: Classname:CellReselecter: ERROR Illegal State
Line 6230: Classname:CellReselecter: ERROR Illegal State
Line 6450: Wait for Signaling Grant to do Rollback
Line 6470: Classname:CellReselecter: ERROR Illegal State
Line 6378: Classname:CellReselecter: ERROR Illegal State
Line 6835: Classname:CellReselecter: ERROR Illegal State
Line 5199: NotifySelectionToGsmFailed:[NON FATAL ERROR]rrc_Class_CnxMgr_GenerateNewCellSelected returned NULL
Line 5209: NotifySelectionToGsmFailed:[NON FATAL ERROR]rrc_Class_MeasController_GenerateCellSelectionToGsmFailed returned NULL
Line 6758: RevertingToServingCell_IsNotSelectable:[NON FATAL ERROR]CellReselecter: ERROR Illegal State
Line 6771: RevertingToServingCell_IsNotSelectable:[NON FATAL ERROR]CellReselecter: ERROR Illegal State
Line 5096: uphy_SetCellReselection = TRUE
Line 5124: NotifySelectionNotMeasController: Msg is NULL cause of Suspending
Line 5128: NotifySelectionNotMeasController: Msg is NULL
Line 7079: CellReselecter: ERROR Illegal State: %d
Line 6169: Attempting Eutra RAT Cell Reselection to neighbour Eutra Cell
Line 6172: [CurrentM] Set CellReselection
Line 6186: Classname:CellReselecter: ERROR Illegal State
Line 6342: Classname:CellReselecter: ERROR Illegal State
Line 6272: Wait for Signaling Grant to do Rollback
Line 6291: Classname:CellReselecter: ERROR Illegal State
Line 6666: CheckingEutraRatReselCandidate_MmReselectionToEutraFailed Cause %d and Barred Time value %d
Line 6418: Classname:CellReselecter: ERROR Illegal State
Line 2141: RRC connection release in progress in FACH :: ignore reselection
Line 2147: ReleasingInitialAccessResource in progress :: ignore reselection
Line 2155: (CS call exist) && (RRC is in FACH) :: ignore reselection
Line 2163: (PCH Response in progress) && (RRC is in FACH) :: ignore reselection
Line 1631: EvaluateEutraCandidate: NasSignalling Pending state:ignore EUTRA reselection 
Line 1660: Classname:CellReselecter: ERROR Illegal State
Line 1422: DSDS: [BPLMN OPT] Serving cell (%d) meas better than -13dB, SqualS > 4 and BPLMN ongoing on same stack -> ignore cellreselection
Line 1427: DSDS: [BPLMN OPT] IsManualScan = %d
Line 1442: Camped on Acceptable Cell - Serving cell (%d) meas better than -13dB :: ignore reselection
Line 1450: DSDS: [BPLMN OPT] Serving cell (%d) measurments less than -15dB, Request cause set to Srrc_ImmediateResel
Line 1456: DSDS: [BPLMN OPT] Serving cell not suitable so, Request cause set to Srrc_ImmediateResel
Line 1465: DSDS: DSRC grant rejected (%d, %d)
Line 1472: DSDS: Waiting for DSRC response for CellReselection (%d, %d)
Line 1482: Attempting InterFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 1500: Classname:CellReselecter: ERROR Illegal State
Line 1525: Attempting IntraFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 1536: [CurrentM] Set CellReselection
Line 1541: Classname:CellReselecter: ERROR Illegal State
Line 1566: EvaluateGsmCandidate: NasSignalling Pending state:ignore GSM Reselection 
Line 1601: Classname:CellReselecter: ERROR Illegal State
Line 923: Periodic: NormalCandidatePtr is NULL -> Find SirCandidate
Line 938: No Normal Candidate & SirCandidate Found -> Trigger PeriodicInterFResel
Line 949: No SirCandidate -> PeriodicInterFReselMeasCount is decreased to %d
Line 983: Periodic: Normal InterF Candidate Found-> Find SirCandidate
Line 991: Normal IF resel candidate is replaced by the SirInterFResel candidate
Line 1002: No SirCandidate -> PeriodicInterFReselMeasCount is decreased to %d
Line 1020: Periodic: Normal IntraF Candidate Found-> Find SirCandidate
Line 1035: Normal IntraF Candidate & SirCandidate Found -> Trigger PeriodicInterFResel
Line 1046: No SirCandidate -> PeriodicInterFReselMeasCount is decreased to %d
Line 2322: SirBasedReselEnabled is disabled for CS
Line 2343: >> Triggering Conditions for SirInterFResel (ServingFreq: %d)
Line 2358: >> CHECK: Found SirCandidate in the SirRankingList? -> PASS (CandidateFreq: %d)
Line 2362: >> CHECK: Found SirCandidate in the SirRankingList? -> FAIL
Line 2372: >> CHECK: BestRscp(%d) > BestRscpTh(%d) -> PASS
Line 2377: >> CHECK: BestRscp(%d) > BestRscpTh(%d) -> FAIL
Line 2391: Invalid BandId of ServingCell (%d)
Line 2399: ServingFreq %d: SirMeasured %d (SirStored %d - BandOffset(%d))
Line 2404: >> CHECK: ServingCellSir(%d) < 10dB -> PASS
Line 2409: >> CHECK: ServingCellSir(%d) < 10dB -> FAIL
Line 2417: >> CHECK: CandidateEcNo(%d) > -13dB -> PASS
Line 2422: >> CHECK: CandidateEcNo(%d) > -13dB -> FAIL
Line 2430: >> CHECK: NumCellsInSameFreq(%d) > 1 -> PASS
Line 2435: >> CHECK: NumCellsInSameFreq(%d) > 1 -> FAIL
Line 2447: >> VERDICT: Found SirCandidate -> Ignore Normal IF reselection: run SIR reselection (Freq %d, PSC %d, SIR %d)
Line 2451: >> VERDICT: No SirCandidate Found
Line 5273: ERROR new CandidateCellPtr is NULL
Line 5283: Finishing cell reselection on CandidateCellPtr(%d,%d)
Line 5336:  FinishCellSelection Error Band Detection Error 
Line 5362: Classname:CellReselecter: ERROR Illegal State
Line 7057: ERROR Illegal State
Line 7542: ERROR GenMsg is NULL
Line 7550: CnxMgr indicates pending state transition to Cell_Dch
Line 7553: ERROR Unexpected State Change Notification
Line 7622: URRC is not in IDLE mode, start ASF Timer for %d sec 
Line 7627: URRC is not in IDLE mode, and ASF Timer is already running
Line 7667: URRC is in IDLE mode, start ASF immediately
Line 7676: NumofTargetCsgCells(%d) Target-Rat(%d), so just ignore this target cell
Line 7682: ERROR stopping T_AutonomousCsgSearch
Line 7689: CellReselecter: This is not a source cell of FingerPrinted CSG Cell
Line 7695: ERROR stopping T_AutonomousCsgSearch
