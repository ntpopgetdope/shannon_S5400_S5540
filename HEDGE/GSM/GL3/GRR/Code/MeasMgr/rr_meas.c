Line 49: rr_NbNear(%d) rr_NbFar(%d)
Line 63: SERV_CELL 
Line 97: RRsync 
Line 103: --------------------------------
Line 544: NcellRxLevInd : No samples for NearCell(%d)
Line 596: Trigger PickNextBestCell after NCELL_RXLEV_IND Processing
Line 620: SoftSumVal(%d) Improved! Avoid ImmResel
Line 644: Resel in Progress (%d) || PostResel(%d): Cannot rr_CheckFor Resel due to softsum,
Line 651: Target Cell Bcch Read Already Ongoing on %d BcchReadCauseImmResel %d
Line 674: 1. SoftSum Bad in NON-DRX mode Go for Resel
Line 679: NON-DRX mode in BAD channel, No SuitableCell with RxLev>10
Line 691: 1.1 SoftSum in Danger Zone (less than 850) Check for BCCH read on Suitable Cell (%d) (%d)
Line 702: 1.2 SoftSum in Danger Zone (less than 850) :No Cell with Valid C1 C2 so Find one
Line 715: 1.3 Found N Cell ,Add rr_TargetCellForBcchRead CellToSIQHead (%d) Rxlev (%d)
Line 729: SoftSum is Bad (%d) (less than 900 but bigger than 850)  Tick (%d)
Line 744: 2 NON-DRX mode in BAD channel Go for Resel
Line 749: NON-DRX mode in BAD channel, No SuitableCell with RxLev>10
Line 759:  Two times  SoftSum in Danger Zone:Trigger Resel (less than 900 but bigger than 850) 
Line 761: 2.1 Check for BCCH read on Suitable Cell (%d) (%d)
Line 771: SoftSum in Danger Zone:Trigger Resel (less than 900 but bigger than 850) : No C1 C2 availableCells
Line 774: Check  If there is N Cell with Valid BSIC : BcchReadCause(%d)
Line 783: 2.3 Found N Cell ,Add rr_TargetCellForBcchRead CellToSIQHead (%d) Rxlev (%d)
Line 838: PCH BLER (%d) Improved! Avoid ImmResel
Line 856: Resel in Progress: Cannot rr_CheckForImmediateResel
Line 900: NON-DRX mode in BAD channel
Line 905: NON-DRX mode in BAD channel, No SuitableCell with RxLev>10
Line 915: PCH BLER in Danger Zone
Line 927: PCH BLER in Danger Zone: No avialble C1 C2 Cells
Line 928: Try to find valid BSIC cells
Line 937: AddCellToSIQHead Try BCCH_READ for (%d) Rxlev (%d)
Line 1245: rr_DetectAbnormalRRState: RR_RAT_RESUME_NULL and got SCELL_RXLEV_IND
Line 1248: State mismatch btw GRR and other stack
Line 1275: MPH_SCELL_RXLEV_IND
Line 1284: rr_ServCell is NULL! Ignore MPH_SCELL_RXLEV_IND
Line 1305: [G2U][PRIO] rr_ScellRxlevInd: IgnoreLowPriority:%d is changed(prev:%d) and NumLowPrioUarfcn:%d, Update3GScanAndMonitorList
Line 1335: (CIQ)## CIQ_REPORT in IDLE MODE State : %d , ARFCN :%d, CIQ_BSIC : %d, REAL_BSIC : 0x%x, BandIND : 0x%x
Line 1384: UpdatePccnMeas: Subst for NCell(%d)
Line 1398: SCell(%d) is out of band
Line 1448: rr_ServCell is NULL! Ignore MPH_NCELL_RXLEV_IND
Line 1454: MPH_NCELL_RXLEV_IND -> NoOfMeas(%d)
Line 1480: No measurement samples for ARFCN(%d)
Line 1535:  CIQ[53-Idle] ucNumGsmMeas(%d) ucNumInterRatMeas(%d) ucBandInd(%d)
Line 1540:  CIQ[53-GSMmeas] wArfcn(%d) ucBsic(%x) ucRxlev(%d)
Line 1545:  CIQ[53-InterRatmeas] wUarfcn(%d) wScramblingCode(%d) ucRssi(%d) ucEcN0(%d) ucRscp(%d)
Line 1799: IdleStatic: NCellAvg: Arfcn:%d RxLev:%d
Line 1828: IdleStatic: NCellRxLevChange:%d Avg:Arfcn:%d RxLev:%d Current:Arfcn:%d RxLev:%d
Line 1868: Keep RR_FULLY_STATIONARY, RxLev (%d) during LTE TP
Line 1887: IdleStatic:%d Stationary:%d TopNCell:(%d) (%d) 
Line 1893: IdleStatic: Decide FULLY_STATIONARY according to peer stack (3G : %d, 4G : %d) condition
Line 1899: LteDataOngoing
Line 991: Resel in Progress: Cannot rr_CheckForImmediateResel
Line 1001: SoftSum in Danger Zone (less than 850)
Line 1011: SoftSum in Danger Zone (less than 850) :  No C1 C2 availableCells
Line 1012: Try to find valid BSIC cells
Line 1020: AddCellToSIQHead Try BCCH_READ for (%d) Rxlev (%d)
Line 1038: Resel in Progress: Cannot rr_CheckForImmediateResel
Line 1047: PCH BLER in Danger Zone
Line 1056: PCH BLER in Danger Zone: No avialble C1 C2 Cells
Line 1057: Try to find valid BSIC cells
Line 1064: AddCellToSIQHead Try BCCH_READ for (%d) Rxlev (%d)
Line 1169: SCell RxL(%d) Bsic(0x%x)  SoftSum (%d)  PCH BLER (%d)
Line 1178: SOFTSUM (%d) is low on Scell (%d) Check for Imm Resel
Line 1193: Immedieate Resel trigger option : PCH BLER
Line 239: NoOfIdleMeas(%d)
Line 272: N->F:%d
Line 336: F->N:%d
Line 381: N->F:%d
Line 392: F->N:%d
Line 396: CtxCount  val(%d) > 65 , ERROR:%d
Line 414: CtxCnt(%d)
Line 443: PendedArfcnByLteMeas:%d
Line 472: Avoid SI read BCCH Read of NCell after Resel Failure in Progress
Line 149: Best Far Cell(%d), RxL(%d)
Line 1941: IdleStatic: Reset
