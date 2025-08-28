Line 46: RrmBlkIdleEvalNr::RrmBlkIdleEvalNr()
Line 52: RrmBlkIdleEvalNr::~RrmBlkIdleEvalNr()
Line 59: RrmBlkIdleEvalNr::Init
Line 63: Clear ReselectionList
Line 69: RrmBlkIdleEvalNr::PerformEval - bReselEval:(bool)%d
Line 94:    >>Block N2L reselection NRRRM.NR_RESEL_EUTRA_DISABLE %d
Line 102:    ========================<Start setup for Idle Scheduling>========================
Line 105:    ========================<End setup for Idle Scheduling>========================
Line 130:    >>NR_FIXED_ARFCN Enable! All arfcn will be removed except Fixed arfcn : %d
Line 150:    >>ReselectionList.size:%d
Line 177:    >>pIntraFreq is nullptr - pIntraFreq:0x%08x
Line 210:    >>Unexpected RatType:%s(%d)
Line 293:    >>Unexpected type:%s(%d)
Line 361:    >>Unexpected RatType:%s(%d)
Line 393:    >>Unexpected RatType:%s(%d)
Line 413:    >>reselFreq_index:%d exceed NR_RESEL_FREQ_MAX_NUM:%d
Line 429:    >>RRC_RRM_RESEL_EVAL_IND - ReselFreq[%d] RatType:%s(%d) Arfcn:%d Priority:%d Scs:(enum)%d Pcid:%d
Line 435:    >>reselCell_index:%d exceed NR_RESEL_CELL_MAX_NUM:%d
Line 467:      ::GetPriorityFromReselList - FOUND NR Arfcn:%d CellId:%d Priority:%d
Line 480:      ::GetPriorityFromReselList - FOUND LTE Arfcn:%d CellId:%d Priority:%d
Line 487:      ::Unexpected RatType:%s(%d)
Line 504:    >>GetFirstNrCellEqualPriority - Priority is not found for NR Arfcn:%d
Line 517:      ::FOUND FIRST NR CELL - Arfcn:%d CellId:%d Priority:%d
Line 535:    >>GetNextNrCellEqualPriority - pCellNr is nullptr
Line 566:      ::FOUND NEXT NR CELL - Arfcn:%d CellId:%d Priority:%d
Line 598:    >>pServingCellInfo is nullptr
Line 608:      ::SERV(PCID:%d) TreselCount - bStart:(bool)%d StartMs:%d[ms] curTimeMs:%d[ms]
Line 617:    >>EncodeRrcRrmMeasResultCnf
Line 630: 	 >>SelectedType Set as MEAS_OBJECT_STATUS_ALL
Line 654: 	 >>MeasResultPerMoList[%d] SsbFreq:%d, PCellFreq
Line 702: 	 >>MeasResultPerMoList[%d] SsbFreq:%d
Line 751: 	 >>MeasResultPerMoListEutra[%d] CarrierFreq:%d
Line 790:    >>CheckCellOfCriterionS
Line 795:      ::CheckCellOfCriterionS - Start iteration, size:%d
Line 804: Erase abnormal cell in reselList  RatType:%s
Line 810: CellPtr - RatType:%s, ARFCN:%d PCID:%d
Line 830:    >>PerformEvalCellList - size:%d
Line 838:    >>Unexpected RatType:%s(%d)
Line 845:    >>PerformEvalFreqList - size:%d
Line 858:      ::Configure NR cellList with IDLISTED IDDETECTED cellset
Line 864:      ::Configure LTE cellList with IDLISTED IDDETECTED cellset
Line 870:      ::Unexpected RatType:%s(%d)
Line 879:    >>NO CELL SATISFIES CRITERIA. ONGOING OOS. _oos_
Line 884:    >>EXIST CELL SATISFIES CRITERA. STOP OOS _oos_
Line 891:    >>There is no candidateCell for checking OOS _oos_
Line 906:    >>CheckChangePLMN
Line 923:    >>CheckChangePLMN There is no Candidate FREQ for checking criteria. Trigger OOS for 10 sec. _oos_ 
Line 933: 	  ::(Not apply)TimerExpiredFor10Sec is Expired. _oos_
Line 942:    >>CheckServCriterionS
Line 951:      ::CheckTimerExpired::ServingCell has NULL ptr. Return false _oos_
Line 954:      ::CheckTimerExpired::SIB1 is invalid. Return false _oos_
Line 972:      ::(Expired OOS timer)ServingCell does not fulFil the Cell selection Criterion S during %d(DrxCycle %d, Nserv %d) ms _oos_
Line 977:      ::(Waiting OOS timer)ServingCell does not fulFil the Cell selection Criterion S Pcell_Squal: %d, Pcell_Srxlev : %d _oos_
Line 978:      ::Keep state untill TimerExpired
Line 986:      ::(Start OOS timer)ServingCell does not fulFil the Cell selection Criterion S Pcell_Squal: %d, Pcell_Srxlev : %d _oos_
Line 987:      ::Set current OOC Time %d
Line 994:      ::(Not Apply)ServingCell fulFil the Cell selection Criterion S Pcell_Squal: %d, Pcell_Srxlev : %d Release OOS time_oos_
Line 1025:      ::TravelListedCells:: pCellInfo == nullptr - try to find first Cellinfo in next MO
Line 1032:      ::TravelListedCells:: ProcCellCriteria #%d complete
Line 1036:      ::TravelListedCells:: try to find next Cellinfo
Line 1042:    >>ProcCellCriteriaEutra
Line 1053:      ::ProcCellCriteria - GetCellMeasResultNrL3Filtered
Line 1123:    >>REMOVE NR FREQ - Arfcn:%d Priority:%d
Line 1176: 	>>Change Freq:%d PBCH status as PBCH_NEED from complete
Line 1188: 	>>Found fullBeam cell:%d Sofartotal:%d
Line 1202: 	>>Found fullBeam cell:%d Sofartotal:%d
Line 1212: 	>>Change Freq:%d PBCH status as PBCH_NEED from complete (fullBeamCells 0)
