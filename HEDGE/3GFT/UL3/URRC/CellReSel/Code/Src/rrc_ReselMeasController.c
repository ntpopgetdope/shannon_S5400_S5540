Line 196: ERROR creating TPendingOos Timer
Line 202: ERROR creating TReselHyst Timer
Line 256: ERROR deleting TPendingOos timer
Line 261: ERROR deleting TReselHyst timer
Line 340: SIntrasearch received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 356: SIntersearch received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 372: SSearchHcs received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 420: SSearchRATGsm received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 426: SSearchRATGsm received value: (%i) consider this value to be absent
Line 436: SLimit,SearchRATGsm received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 446: SHCS,RATGsm received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 1957: Clear ImmediateInterFReselMeas
Line 4215: [rrc_ReselMeasController_GetCurrentIratRealRule] Serving Cell not Suitable so Measurent Real Rule Is Measure ALL
Line 604: ERROR starting TReselHyst timer
Line 608: TReselHyst started (TmId=%d)
Line 503: SirBasedReselEnabled is disabled for CS
Line 525: Avoid this band (%d) if possible
Line 536: CSFB in progress: No ImmediateInterFReselMeas
Line 543: No FachMeasOccasion Available -> No ImmediateInterFReselMeas
Line 575: ERROR Illegal State
Line 1931: HsDsch-MeasurementOccasionAvailable
Line 737: [CsCallInProgress] Set pendingState to CellFach temporarily
Line 750: PendingOOS timer is 20secs due to CHubException
Line 763: ERROR starting TPendingOos timer
Line 771: ERROR Illegal State
Line 1356: Quick RB : Ignore TReselHyst
Line 1375: Quick RB : Ignore TReselHyst
Line 1398: LTE supported : Ignore TReselHyst
Line 1405: ImmediateInterFReselMeasRequired: Ignore TReselHyst
Line 1440: Not refreshing measurement rules yet - waiting for T Reselection Hysteresis timer (1 second) to expire
Line 1450: ImmediateInterFReselMeas Required: Intra-freq. cell reselection is not triggered while TReselHyst is running
Line 1060: Overriding cell CPICH code to (%d) - No more measurements for reselection 
Line 1729: Serving Cell is not suitable
Line 1730: ->IntraF Measurement rule is MeasureAll
Line 1731: ->InterF Measurement rule is MeasureAll
Line 1732: ->InterRat Measurement rule is MeasureAll
Line 1735: Reset CSG to non-CSG Reselection flag
Line 1747: ServingCell Not Suitable & ImmediateInterFReselMeas Required -> Clear ImmediateInterFReselMeas
Line 1761: RrcCnxReq in progress (newRule -> none, newPrioBaseRule -> PrioNone)
Line 1771: [InterRAT Measurement] new rule will be overriden by no FACH measurement occasion 
Line 1777: [InterF Measurement] newRule(%d) <-> currentRule(%d) 
Line 1781: [InterF Measurement] newPrioBaseRule(%d) <-> CurrentPrioBaseRule(%d) 
Line 1792: [InterRAT Measurement] newRule(%d) <-> currentRule(%d) 
Line 1807: [InterRAT Measurement] newPrioBaseRule(%d) <-> CurrentPrioBaseRule(%d) 
Line 1851: AvoidCsgtoNonCsgResel[%d]
Line 1867: [UpdateMeasurementRules] HCS shall not be used for Inter-F & Inter-Rat layers
Line 2934: InterFReselMeasIDPtr: NULL 
Line 2939: CurrentRule = %d, NewMeasRule = %d
Line 2959: GenMsg is NULL
Line 1624: Eutra Measurement rule is MeasureNone - Eutra disabled as MULTI_MODE_OPERATION Zero 
Line 1631: Eutra Measurement rule is MeasureNone - Eutra disabled as IsEutraDisabled TRUE 
Line 1637: CurrentRule = %d NewMeasRule = %d
Line 1657: GenMsg is NULL
Line 3067: InterRatMeasIDPtr: NULL 
Line 3075: GSM Measurement rule is MeasureNone - GSM disabled as MULTI_MODE_OPERATION Zero 
Line 3079: CurrentRule = %d, NewMeasRule = %d
Line 3099: GenMsg is NULL
Line 1592: ->InterRat Measurement rule is MeasureNone - GSM disabled
Line 1999: InterFReselMeas Not Active & ImmediateInterFReselMeas Required -> Clear ImmediateInterFReselMeas
Line 2055: SqualS (%i) > SIntrasearch (%i): ImmediateInterFReselMeas or PeriodicInterFReselMeas -> IntraFreq MeasureRule Changed to MeasureAll
Line 2065: SqualS (%i) > SIntrasearch (%i): found IntraF CSG Cell during ASF -> IntraFreq MeasureRule Changed to MeasureAll
Line 2074: SqualS (%i) > SIntrasearch (%i): IntraFreq MeasureRule Changed to MeasureServingCellOnly
Line 2093: SqualS (%i) <= SIntrasearch (%i): IntraFreq MeasRule Changed to MeasureAll
Line 2097: SqualS (%i) <= SIntrasearch (%i): IntraFreq MeasureRule Changed to MeasureServingCellOnly
Line 2120: SIntrasearch not received in Limited mode, Serving cell (SqualS:%d) is better than -10dB EcNo: Skip IntraFreq measurement Config
Line 2124: WARNING - SIntrasearch not received
Line 2132: -> IntraFreq MeasRule Changed to MeaureAll
Line 2136: IntraFreq MeasureRule Changed to MeasureServingCellOnly
Line 2355: SIntersearch not received in Limited mode, Serving cell(SqualS:%d) is better than -10dB EcNo: Skip InterFreq measurement Config
Line 2362: SIntersearch not received (MeasureAll)
Line 2374: SIntersearch not received & ImmediateInterFReselMeasRequired -> Clear ImmediateInterFReselMeas
Line 2382: -> InterFreq MeasureRule Changed to MeaureAll
Line 2386: -> InterFreq MeasureRule Changed to MeaureNone
Line 2397: [InterFreq Measurement] new rule will be overriden by no FACH measurement occasion 
Line 2398: [InterFreq Measurement] newRule(%d) <-> currentRule(%d) 
Line 2408: RrcCnxReq in progress (newRule -> none, newPrioBaseRule -> PrioNone)
Line 2424: oldRule !=newRule==MeasureNone & ImmediateInterFReselMeasRequired -> Clear ImmediateInterFReselMeas
Line 2446: -> IntraFreq MeasureRule Changed to MeasureAll Due to Immediate or PeriodicInterFReselMeas Configured
Line 2462: oldRule==newRule==MeasureNone & ImmediateInterFReselMeasRequired -> Clear ImmediateInterFReselMeas
Line 2471: oldRule==newRule==MeasureNone & PeriodicInterFReselMeasConfigured -> Clear PeriodicInterFReselMeas
Line 2175: SqualS (%i) > SIntersearch (%i): ImmediateInterFReselMeas Configured (MeasureAll)
Line 2181: -> InterFreq MeasureRule Changed to MeaureAll
Line 2192: SqualS (%i) > SIntersearch (%i): Start Sir-based Periodic IF Resel Meas (Count %d)
Line 2198: -> InterFreq MeasureRule Changed to MeaureAll
Line 2206: SqualS (%i) > SIntersearch (%i): PeriodicInterFReselMeas In Progress (MeasureAll, Count %d)
Line 2212: -> InterFreq MeasureRule Changed to MeaureAll
Line 2222: SqualS (%i) > SIntersearch (%i): found InterF CSG Cell during ASF -> InterFreq MeasureRule Changed to MeasureAll
Line 2232: SqualS (%i) > SIntersearch (%i): PeriodicInterFReselMeas Not Required -> InterFreq MeasureRule Changed to MeasureNone
Line 2241: SrxlevS (%i) > SSearchHcs (%i): InterFreq MeasureRule Changed to %d
Line 2245: SSearchHcs not received
Line 2257: SqualS (%i) <= SIntersearch (%i): PeriodicInterFReselMeasConfigured -> Hand the control over to CellReselecter (MeasureAll)
Line 2268: SqualS <= SIntersearch & ImmediateInterFReselMeasRequired -> Clear ImmediateInterFReselMeas
Line 2275: SqualS (%i) <= SIntersearch (%i) in Limited mode, Serving cell is better than -10dB EcNo: Skip InterFreq measurement Config
Line 2283: SqualS (%i) <= SIntersearch (%i): InterFreq MeasureRule Changed to MeasureAll
Line 2288: SqualS (%i) <= SIntersearch (%i): InterFreq MeasureRule Changed to MeasureNone
Line 2305: IsSSearchHcsValid & SrxlevS <= SSearchHcs & ImmediateInterFReselMeasRequired -> Clear ImmediateInterFReselMeas
Line 2310: SrxlevS (%i) <= SSearchHcs (%i): InterFreq MeasureRule Changed to MeasureAll
Line 2514: SqualS  (%i) > SSearchGsm (%i)
Line 2517: SrxlevS (%i) > SHcsGsm (%i)
Line 2521: SHcsGsm not received
Line 2524: ->InterRat Measurement rule is MeasureNone
Line 2535: SSearchGsm not received in Limited mode, Serving cell(SqualS: %d) is better than -10dB EcNo: Skip GSM Cell measurement Config
Line 2540: SqualS  (%i) <= SSearchGsm (%i)
Line 2543: ->InterRat Measurement rule is MeasureAll
Line 2547: ->InterRat Measurement rule is MeasureNone
Line 2558: SrxlevS (%i) <= SHcsGsm (%i)
Line 2559: ->InterRat Measurement rule is MeasureAll
Line 2568: SSearchGsm not received in Limited mode, Serving cell(%d) is better than -10dB EcNo: Skip GSM Cell measurement Config
Line 2577: SSearchGsm not received
Line 2580: ->InterRat Measurement rule is MeasureAll
Line 2584: ->InterRat Measurement rule is MeasureNone
Line 2595: [InterRAT Measurement] new rule will be overriden by no FACH measurement occasion 
Line 2596: [InterRAT Measurement] newRule(%d) <-> currentRule(%d) 
Line 2603: RrcCnxReq in progress (newRule -> none, newPrioBaseRule -> PrioNone)
Line 2612: [InterRAT Measurement] new rule(%d) will be overriden by ConfigIratMeasHyst 
Line 2615: [InterRAT Measurement] ConfigIratMeasHyst(%d) > ConfigIratMeasHystCounter(%d)
Line 2621: [InterRAT Measurement] new rule(%d) will be used
Line 2624: [InterRAT Measurement] ConfigIratMeasHyst(%d) =< ConfigIratMeasHystCounter(%d)
Line 2625: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 2634: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 3473:  NULL MeasIdPtr 
Line 3508: [InterFreq Measurement] new rule will be overriden by no FACH measurement occasion 
Line 3509: [InterFreq Measurement] newRule(%d) <-> currentRule(%d) 
Line 3515: RrcCnxReq in progress (newInterRule -> none)
Line 3524: Priority Based Cell Reselection in progress (newInterRule -> none)
Line 3151: SrxlevS (%i) <= SSearchHcs (%i)
Line 3155: SqualS  (%i) <= Sintersearch (%i)
Line 3159: ->IntraFreq Measurement rule is MeasureAll
Line 3163: ->InterFreq Measurement rule is MeasureAll
Line 3243: > [HCS] Apply IntraSearchHyst (%d dB):: Overwrite HcsGreaterThanSC to HcsGreaterThanOrEqualToSC
Line 3251: > [HCS] Apply IntraSearchHyst (%d dB):: Overwrite HcsGreaterThanSC to HcsGreaterThanOrEqualToSC
Line 3271: SqualS (%i) > SIntrasearch (%i): found IntraF CSG Cell during ASF -> IntraFreq MeasureRule Changed to MeasureAll
Line 3280: SqualS (%i) > SIntrasearch (%i): found InterF CSG Cell during ASF -> InterFreq MeasureRule Changed to MeasureAll
Line 3287: SqualS  (%i) > Sintrasearch (%i)
Line 3290: ->IntraFreq Measurement rule is MeasureHcsGreaterThanSC
Line 3294: ->InterFreq Measurement rule is MeasureHcsGreaterThanSC
Line 3328: > [HCS] Apply IntraSearchHyst (%d dB):: Overwrite HcsGreaterThanOrEqualToSC to HcsGreaterThanSC
Line 3336: > [HCS] Apply IntraSearchHyst (%d dB):: Overwrite HcsGreaterThanOrEqualToSC to HcsGreaterThanSC
Line 3346: > [HCS] Apply InterSearchHyst (%d dB):: OverwriteHcsGreaterThanOrEqualToSC to All
Line 3354: > [HCS] Apply InterSearchHyst (%d dB):: Overwrite HcsGreaterThanOrEqualToSC to All
Line 3363: SqualS  (%i) <= Sintrasearch (%i)
Line 3366: ->IntraFreq Measurement rule is MeasureHcsGreaterThanOrEqualToSC
Line 3370: ->InterFreq Measurement rule is MeasureHcsGreaterThanOrEqualToSC
Line 3387: Sintrasearch not sent
Line 3390: ->IntraFreq Measurement rule is Measure All
Line 3394: ->InterFreq Measurement rule is MeasureHcsGreaterThanSC
Line 3426: SsearchHCS not sent
Line 3430: Sintersearch not sent
Line 3434: ->IntraFreq Measurement rule is Measure All
Line 3438: ->InterFreq Measurement rule is Measure All
Line 3563:  NULL MeasIdPtr 
Line 3591: SsearchHCS not sent
Line 3595: SrxlevS (%i) <= SSearchHcs (%i)
Line 3600: Sintersearch not sent
Line 3604: SqualS  (%i) <= Sintersearch (%i)
Line 3609: ->IntraFreq Measurement rule is MeasureAll
Line 3613: ->InterFreq Measurement rule is MeasureAll
Line 3634: SqualS (%i) > SIntrasearch (%i): found IntraF CSG Cell during ASF -> IntraFreq MeasureRule Changed to MeasureAll
Line 3643: SqualS (%i) > SIntrasearch (%i): found InterF CSG Cell during ASF -> InterFreq MeasureRule Changed to MeasureAll
Line 3650: SrxlevS (%i) > SSearchHcs (%i)
Line 3651: SqualS  (%i) > Sintersearch (%i)
Line 3655: ->IntraFreq Measurement rule is MeasureHcsLessThanOrEqualToSC
Line 3659: ->InterFreq Measurement rule is MeasureHcsLessThanOrEqualToSC
Line 3672: [InterFreq Measurement] new rule will be overriden by no FACH measurement occasion 
Line 3673: [InterFreq Measurement] newRule(%d) <-> currentRule(%d) 
Line 3680: RrcCnxReq in progress (newInterRule -> none)
Line 3689: Priority Based Cell Reselection in progress (newInterRule -> none)
Line 3721: InterRatMeasIDPtr: NULL 
Line 3740: SrxlevS (%i) <= SHcsGsm (%i)
Line 3744: SqualS  (%i) <= SSearchGsm (%i)
Line 3747: ->IntrerRat Measurement rule is MeasureAll
Line 3760: SqualS (%i) > SLimitSearchGsm (%i)
Line 3761: ->InterRat Measurement rule is MeasureNone
Line 3772: SqualS (%i) <= SLimitSearchGsm (%i)
Line 3773: ->InterRat Measurement rule is MeasureHcsGreaterThanOrEqualToSC
Line 3784: SHcsGsm not sent
Line 3785: ->InterRat Measurement rule is MeasureAll
Line 3795: [InterRAT Measurement] new rule will be overriden by no FACH measurement occasion 
Line 3796: [InterRAT Measurement] newRule(%d) <-> currentRule(%d) 
Line 3803: RrcCnxReq in progress (newIratRule -> none)
Line 3812: [InterRAT Measurement] new rule(%d) will be overriden by ConfigIratMeasHyst 
Line 3815: [InterRAT Measurement] ConfigIratMeasHyst(%d) > ConfigIratMeasHystCounter(%d)
Line 3821: [InterRAT Measurement] new rule(%d) will be used
Line 3824: [InterRAT Measurement] ConfigIratMeasHyst(%d) =< ConfigIratMeasHystCounter(%d)
Line 3825: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 3834: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 4081:  NULL MeasIdPtr 
Line 4100: SHcsGsm not sent
Line 4104: SrxlevS (%i) <= SHcsGsm (%i)
Line 4109: IsSSearchGsmValid not sent
Line 4113: SqualS  (%i) <= SSearchGsm (%i)
Line 4116: ->InterRat Measurement rule is MeasureAll
Line 4126: SrxlevS (%i) > SHcsGsm (%i)
Line 4127: SqualS  (%i) > SSearchGsm (%i)
Line 4129: ->InterRat Measurement rule is MeasureHcsLessThanOrEqualToSC
Line 4139: [InterRAT Measurement] new rule will be overriden by no FACH measurement occasion 
Line 4140: [InterRAT Measurement] newRule(%d) <-> currentRule(%d) 
Line 4147: RrcCnxReq in progress (newIratRule -> none)
Line 4156: [InterRAT Measurement] new rule(%d) will be overriden by ConfigIratMeasHyst 
Line 4159: [InterRAT Measurement] ConfigIratMeasHyst(%d) > ConfigIratMeasHystCounter(%d)
Line 4165: [InterRAT Measurement] new rule(%d) will be used
Line 4168: [InterRAT Measurement] ConfigIratMeasHyst(%d) =< ConfigIratMeasHystCounter(%d)
Line 4169: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 4178: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 2825: [APBCR] UpdatePrioBaseMeasurementRules_UtraUsed: No FACH measurement occasion
Line 2834:  [APBCR] rrc_ReselMeasurement_GetIsActive_Utra (%d)
Line 2836:  [APBCR] rrc_IntraFReselMeas_GetOnlyServingCellMeasRecved (%d)
Line 2860:  NULL MeasIdPtr 
Line 2869: [APBCR] S_PrioritySearch1 (%d) S_PrioritySearch2 (%d)
Line 2871: [APBCR] SrxlevS (%i)  SqualS (%i)
Line 2875: [APBCR] SrxlevS (%i) > S_PrioritySearch1 (%i)
Line 2876: [APBCR] SqualS (%i) > S_PrioritySearch2 (%i)
Line 2881:  [APBCR] newPrioBaseMeasurementRule (%d) :: Measure Inter-frequencies with greater priority than SC
Line 2888: [APBCR] SrxlevS (%i) <= S_PrioritySearch1 (%i)
Line 2889: [APBCR] SqualS (%i) <= S_PrioritySearch2 (%i)
Line 2894: [APBCR] newPrioBaseMeasurementRule (%d) :: Measure ALL of Inter-frequencies
Line 2906: [APBCR] found InterF CSG Cell during ASF -> newPrioBaseMeasurementRule (%d) Changed to MeasureAll
Line 2915:  [APBCR_LOG]RrcCnxReq in progress (newPrioBaseRule -> PrioNone)
Line 2920:  [APBCR_LOG]newPrioBaseMeasurementRule = %d != currentPrioBaseMeasurementRule = %d
Line 2922:  [APBCR_LOG]Measurement Rule is changed so we will now Check for the Eutra Frequencies to be measured
Line 2794: [APBCR] UpdatePrioBaseMeasurementRules_EutraUsed : U2L reselection in CellFach is not suppoted
Line 2801: [APBCR] UpdatePrioBaseMeasurementRules_EutraUsed : No FACH measurement occasion
Line 2807:  rrc_ReselMeasurement_GetIsActive_Eutra (%d)
Line 2809:  rrc_IntraFReselMeas_GetOnlyServingCellMeasRecved (%d)
Line 3880:  NULL MeasIdPtr 
Line 3889:  S_PrioritySearch1 (%d) S_PrioritySearch2 (%d)
Line 3891: SrxlevS (%i)  SqualS (%i)
Line 3915: measInd->inter_RAT_len : %d
Line 3921: GSM measure enabled
Line 3932: FGI 3 is not supported
Line 3938: UpdateMeasurementRules_PrioBaseUsed_EutraIRAT called in CellFach
Line 3944: GSM measure not available
Line 3951: cellfachMeasIndExist is false
Line 3959: Sib19Id->FachAbsPriorityMeasInd is all_layers and FGI4 supported
Line 3967: Sib19Id->FachAbsPriorityMeasInd is high_priority_layers and Srxlev and SqualS satisfied
Line 3973: Sib19Id->FachAbsPriorityMeasInd is high_priority_layers and Srxlev and SqualS not satisfied.. No measure Eutra
Line 3980: Sib19Id->FachAbsPriorityMeasInd is invalid value
Line 3995: [U2L_CSG_ASF] Target CSG EutraFreq need to be measured in this source cell : newEutraIratRule (%d) MeasurePrioAllStart Eutra Measurements for For ALL
Line 4004: [QRB] MeasurePrioAll (CurrentRule %d vs NewRule %d)
Line 4008: SrxlevS (%i) > S_PrioritySearch1 (%i)
Line 4009: SqualS (%i) > S_PrioritySearch2 (%i)
Line 4016: newEutraIratRule (%d)  MeasurePrioGreaterThanSC Start Eutra Measurements for Greater than SC
Line 4023: SrxlevS (%i) <= S_PrioritySearch1 (%i)
Line 4024: SqualS (%i) <= S_PrioritySearch2 (%i)
Line 4031: newEutraIratRule (%d) MeasurePrioAllStart Eutra Measurements for For ALL
Line 4043: Eutra disabled -> Measurement rule is forced to be MeasurePrioNone
Line 4050: RrcCnxReq in progress (newPrioBaseRule -> PrioNone)
Line 4055: newEutraIratRule = %d != currentEutraIratRule = %d
Line 4057: Measurement Rule is changed so we will now Check for the Eutra Frequencies to be measured
Line 2972: [APBCR] UpdatePrioBaseMeasurementRules_GsmUsed: No FACH measurement occasion
Line 2980:  [APBCR] rrc_ReselMeasurement_GetIsActive_Gsm (%d)
Line 2982:  [APBCR] rrc_IntraFReselMeas_GetOnlyServingCellMeasRecved (%d)
Line 3000: UpdateMeasurementRules_PrioBaseUsed_Gsm
Line 3005: InterRatReselMeasIDPtr: NULL 
Line 3014: [APBCR] S_PrioritySearch1 (%d) S_PrioritySearch2 (%d)
Line 3016: [APBCR] SrxlevS (%i)  SqualS (%i)
Line 3020: [APBCR] SrxlevS (%i) > S_PrioritySearch1 (%i)
Line 3021: [APBCR] SqualS (%i) > S_PrioritySearch2 (%i)
Line 3026:  [APBCR] newPrioBaseMeasurementRule (%d) :: Measure Inter-frequencies with greater priority than SC
Line 3033: [APBCR] SrxlevS (%i) <= S_PrioritySearch1 (%i)
Line 3034: [APBCR] SqualS (%i) <= S_PrioritySearch2 (%i)
Line 3039: [APBCR] newPrioBaseMeasurementRule (%d) :: Measure ALL of Inter-frequencies
Line 3047: [APBCR] RrcCnxReq in progress (newPrioBaseRule -> PrioNone)
Line 3052: [APBCR] newPrioBaseMeasurementRule = %d != currentPrioBaseMeasurementRule = %d
Line 3054: [APBCR] Measurement Rule is changed so we will now Check for the GSM Frequencies to be measured
Line 4522: [DR Based] validateDRCellreselection Serving Not Suitable
Line 4527: [DR Based] RrcState||RrcPendingState is FACH
Line 4543: [DR Based] validateDRCellreselection Already in DR MODE
Line 4547: [DR Based]Change Peer stack Cell ReselMeasController_p->PeerStackUarfcn(%d), dlUarfcn (%d)
Line 4566: [DR Based] validateDRCellreselection(%d)
Line 2765: InterFReselMeasIDPtr: NULL 
Line 2771: [DR Based] CurrentRule = %d, NewMeasRule = %d
Line 2716:  [DR Based] rrc_ReselMeasurement_GetIsActive_Utra (%d)
Line 2718:  [DR Based] rrc_IntraFReselMeas_GetOnlyServingCellMeasRecved (%d)
Line 4464: AddMRUEutraFreqSelReselInfo
Line 810: ImmediateInterFReselMeas Required -> IsSirInterFReselMeasTriggered set to TRUE
Line 819: PeriodicInterFReselMeas Required -> IsSirInterFReselMeasTriggered set to TRUE
Line 823: PeriodicInterFReselMeas Required but PeriodicInterFReselMeas Not Configured
Line 849: No SirInterFReselCandidate Found
Line 858: ImmediateInterFReselMeas Configured & No SirInterFReselCandidate Found -> Clear ImmediateInterFReselMeas
Line 866: PeriodicInterFReselMeasCount is decreased to %d
Line 1159: Invalid BandId of TargetCell (%d)
Line 1168: NeighFreq %d, Sir %d (Sir + BandOffset(%d))
Line 1179: BestSirFreq %d, BestSir %d, CandicateCell %d
Line 1185: >> CHECK: Freq %d, NumCellsInSameFreq(%d) > 1 -> FAIL
Line 1196: >> Triggering Conditions for SirInterFResel (ServingFreq: %d, CandidateFreq: %d)
Line 1203: >> CHECK: BestRscp(%d) > BestRscpTh(%d) -> PASS
Line 1215: Invalid BandId of ServingCell (%d)
Line 1224: ServingFreq %d: SirMeasured %d (SirStored %d - BandOffset(%d))
Line 1229: >> CHECK: ServingCellSir(%d) < 10dB -> PASS
Line 1234: >> CHECK: ServingCellSir(%d) < 10dB -> FAIL
Line 1242: >> CHECK: CandidateEcNo(%d) > -13dB -> PASS
Line 1247: >> CHECK: CandidateEcNo(%d) > -13dB -> FAIL
Line 1261: >> VERDICT: Find Better SirInterFReselCandididate -> FOUND (CandidateFreq %d,  BestCell %d, CellId %d)
Line 1266: >> VERDICT: Find Better SirInterFReselCandididate -> NOT FOUND (BestSir %d > ServingFreqSir %d + ServingFreqHyst %d)
Line 1272: >> CHECK: BestRscp(%d) > BestRscpTh(%d) -> FAIL
Line 703: ERROR Illegal State
Line 918: RecvEutraMeasResult is ignored - Eutra disabled as IsEutraDisabled TRUE 
Line 1543: EutraMeasInterval Updated (%d)
Line 1551: EutraMeasInterval Not Updated (%d)
Line 1569: GenMsg is NULL
Line 665: ERROR stopping TPendingOos Timer
Line 680: ERROR Illegal State
Line 4272: SqualS  (%i) > SSearchGsm (%i)
Line 4275: SrxlevS (%i) > SHcsGsm (%i)
Line 4279: SHcsGsm not received
Line 4282: -> current InterRat Measurement real rule is MeasureNone
Line 4290: SqualS  (%i) <= SSearchGsm (%i)
Line 4291: ->current InterRat Measurement real rule is MeasureAll
Line 4298: SrxlevS (%i) <= SHcsGsm (%i)
Line 4299: ->current InterRat Measurement real rule is MeasureAll
Line 4307: SSearchGsm not received
Line 4308: ->InterRat Measurement rule is MeasureAll
Line 4336: SrxlevS (%i) <= SHcsGsm (%i)
Line 4340: SqualS  (%i) <= SSearchGsm (%i)
Line 4343: ->current InterRat Measurement real rule is MeasureAll
Line 4353: SqualS (%i) > SLimitSearchGsm (%i)
Line 4354: ->current InterRat Measurement real rule is MeasureNone
Line 4363: SqualS (%i) <= SLimitSearchGsm (%i)
Line 4364: ->current InterRat Measurement real rule is MeasureHcsGreaterThanOrEqualToSC
Line 4372: SHcsGsm not sent
Line 4373: ->current InterRat Measurement real rule is MeasureAll
Line 4401: SHcsGsm not sent
Line 4405: SrxlevS (%i) <= SHcsGsm (%i)
Line 4410: IsSSearchGsmValid not sent
Line 4414: SqualS  (%i) <= SSearchGsm (%i)
Line 4417: ->current InterRat Measurement real rule is MeasureAll
Line 4424: SrxlevS (%i) > SHcsGsm (%i)
Line 4425: SqualS  (%i) > SSearchGsm (%i)
Line 4427: ->current InterRat Measurement real rule is MeasureHcsLessThanOrEqualToSC
