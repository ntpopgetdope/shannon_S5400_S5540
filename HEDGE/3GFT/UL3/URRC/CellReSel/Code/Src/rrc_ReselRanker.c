Line 378: Reset PrioBaseRankingList from ReselRanker
Line 391: remove a PrioBaseReselCandidate from RankList (0x%x)
Line 411: [rrc_ReselRanker_RemovePrioBaseReselectionCandidate]ReselRanker_p->PrioBaseListCount(%d) > (Asn_maxNumEUTRAFreqs(%d) * MaxEutraCellsMeas(%d))
Line 420: remove a PrioBaseReselCandidate from QrbRankList (0x%x)
Line 749: Prio Base Ranked Cell : CellIdx[%d] = EARFCN[%d] PhyCellId[%d] Priority[%d]
Line 773: Utra Prio Base Ranked Cell : CellIdx[%d] = UARFCN[%d] Cpich[%d] CellId[%d] CellReselType[%d]
Line 939: CellIdx[%d] = Freq[%d] Cpich[%d] CellId[%d] CellReselType[%d]
Line 1399: ->Building Ranking list
Line 1447: SuitableFddCellPresent %d
Line 1456: Reselection candidate, rejected as Selection criteria not met
Line 1478: Inter-freq cell (%d,%d), IsMeasValid set to FALSE
Line 1485: GSM cell, IsMeasValid set to FALSE
Line 1532: ->Building PrioBase S Criteria Met List
Line 1566: Fast U2L threshold = %d dBm
Line 1570: Fast U2L criteria met: Rsrp=%d > FastU2LRscpTh=%d
Line 1585: Eutra Treselection %d, Overwrite it to a real eutra meas cycle (DrxCycle %d, NumEutraFreq %d)
Line 1589: New Eutra Treselection %d
Line 1596: Expand Treselection (%d) to above DRX
Line 1613: Remaining Time(%d) is within a Valid Range(%d)
Line 1618: Error Stopping PrioBaseTResel Timer  
Line 1641: Reselection candidate, Rejected as Selection criteria not met, 
Line 1652: Reselection candidate, rejected as Cell Barred in the Barred Cell List
Line 1682:   ->Keep Cells with Highest HCS priority that meet H Criteria
Line 1722:     %d Cells do not meet H Criteria
Line 1764:     %d Cells do not have Highest Priority (%d)
Line 1783: ->Filtering Ranking list
Line 1796: HCS in use: Clear SIR Ranking list
Line 1977: rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc CellReselType
Line 2010: rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc ScaleType
Line 2036: rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
Line 2042: rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
Line 2048: rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
Line 2056: rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc state
Line 2063: rrc_ReselRanker_ScaleTReselection: Treselection*1000(%d) ScaleFactor*1000(%d) Scaled Tresel*1000(%d)  
Line 2137: rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc CellReselType
Line 2170: rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc ScaleType
Line 2186: ScaleTReselection: (CellPch or UraPch) DrxCoeff %d, DrxCoeff2 %d
Line 2195: ScaleTReselection: (CellPch or UraPch) DrxCoeff2 set to default DrxCycleLenCoeff %d
Line 2203: ScaleTReselection: (CellPch or UraPch) DrxCoeff %d
Line 2218: ScaleTReselection: (Idle) DrxCoeff %d
Line 2224: rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
Line 2230: rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
Line 2236: rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
Line 2244: rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc state
Line 2294: Tresel: Invalid DrxCycleLenCoeff
Line 2300: ScaleTReselection: ScaledTResel (%d) before FLOORING with ValDrx (%i), DRXCycleLength (%d)
Line 2311: ScaleTReselection:  Inapplicable DRX cycle -> NO FLOORING TO DRX
Line 2316: ScaleTReselection: Unwanted TResel State or RRC State -> NO FLOORING TO DRX
Line 2324: rrc_ReselRanker_ScaleTReselection: Treselection*1000(%d) ScaleFactor*1000(%d) Scaled Tresel*1000(%d)  
Line 2343: ReselRanker: (Idle) DrxCoeff %d
Line 2353: ReselRanker: (CellPch or UraPch) DrxCoeff %d, DrxCoeff2 %d
Line 2362: ReselRanker: (CellPch or UraPch) DrxCoeff2 set to default DrxCycleCoeff %d
Line 2370: ReselRanker: (CellPch or UraPch) DrxCoeff %d
Line 2376: ReselRanker: (Current State %d) DrxCoeff Not Available
Line 2388: ReselRanker: Sim Not Valid, Overwrite DrxCoeff %d
Line 2415: ReselRanker: Invalid DrxCycleLenCoeff
Line 2426: ReselRanker: DrxCycle Not Available
Line 2495: SIR based reselection: BestRscp %d
Line 2509: =============== Cell Reselection Rscp Ranking list start
Line 2513: =============== Cell Reselection EcN0 Ranking list start
Line 2520: =============== Cell Reselection Rscp Ranking list end
Line 2524: =============== Cell Reselection EcN0 Ranking list end
Line 2614: ->Rank the remaining candidates
Line 2659: >> ServingCellOnlyMeas: SuitableFddCellPresent %d
Line 2680: Updating reselection criteria
Line 2685:   Built Ranking list has %d entries
Line 2693:   Filtered Ranking list has %d entries
Line 2701:   Ranked Ranking list has %d entries
Line 2722: Updating PrioBase Reselection criteria
Line 2727:   Built Ranking list %d, QrbRanking list %d
Line 2734: Start QRB Ranking based on RSRQ
Line 2740: Start QRB Ranking based on RSRP
Line 2751: Start Ranking based on RSRQ
Line 2757: Start Ranking based on RSRP
Line 3243: Only Intra Freq Meas allowed at this state
Line 3248: Quick Rollback is required
Line 3268: [CSG to non-CSG LTE Cell is ignored] Serving cell is best ranked cell 
Line 3279: CSG to non-CSG LTE Cell is ignored, as 3G CSG Cell is highest priority
Line 3285: TReselection is Zero OR Serving Cell Not suitable condition
Line 3309: Quick RB Criteria Met
Line 3321: TReselection Applies TReselection Done.. Ready for Eutra Reselection
Line 3328: No Eutra Cell Available
Line 3505: Found Candidate with stopped Tresel timer or rejected => EarlySibCandidateList Index (%d) removed
Line 3523: EarlySibListSize=%d
Line 3529: -------------------  Early SIB Reading Candidate List Start
Line 3543: ------------------- Early SIB Reading Candidate List End
Line 3591: WARNING Can't find the next candidate - EarlySibCandidateIdx(%d)
Line 3628: GetFirstSirReselectionCandidate: The best SirCell is the serving cell
Line 3698: GetNextReselectionCandidate: Only serving cell exists in the list - Wait for next measurements
Line 3717: BestRankedIx : %d
Line 4033: [APBCR] Updating UtraPriority-based Reselection Criteria
Line 4038: [APBCR] Built Ranking List %d
Line 4089: [APBCR] ->Building PrioBase S Criteria Met List
Line 4125: [APBCR]Remaining Time(%d) is within a Valid Range(%d)
Line 4129: Error Stopping UtraPrioBaseTResel Timer
Line 4152: [APBCR] Reselection candidate, Rejected as Selection criteria not met, 
Line 4158: [APBCR] Reselection candidate, rejected as Cell Barred in the Barred Cell List
Line 4186: =============== UtraPriority Based Rscp Ranking List Start
Line 4190: =============== UtraPriority Based EcN0 Ranking List Start
Line 4197: =============== UtraPriority Based Rscp Ranking List End
Line 4201: =============== UtraPriority Based EcN0 Ranking List End
Line 4291: CSG to non-CSG LTE Cell is ignored, as 3G CSG Cell is highest priority
Line 4297: [APBCR] TReselection is Zero OR Serving Cell Not suitable condition
Line 4309: [APBCR] TReselection Applies TReselection Done.. Ready for Priority Based InterF Reselection
Line 4315: [APBCR]No Priority Based InterF Cell Candidate Available
Line 4321: [APBCR] Updating GsmPriority-based Reselection Criteria
Line 4326: [APBCR] Built Ranking List %d
Line 4331: Start Ranking based on RSSI
Line 4350: [APBCR][PrivBuildGsmPrioBaseSCriteriaMetList] ->Building PrioBase S Criteria Met List
Line 4386: Remaining Time(%d) is within a Valid Range(%d)
Line 4391: Error Stopping GsmPrioBaseTResel Timer  
Line 4414: [APBCR] Reselection candidate, Rejected as Selection criteria not met, 
Line 4420: [APBCR] Reselection candidate, rejected as Cell Barred in the Barred Cell List
Line 4495: [APBCR] TReselection is Zero OR Serving Cell Not suitable condition
Line 4506: [APBCR] TReselection Applies TReselection Done.. Ready for Priority Based InterF Reselection
Line 4512: [APBCR]No Priority Based InterRat Cell Candidate Available
Line 4598: [DR Based] Updating DR-based Reselection Criteria
Line 4603: [DR Based] Built Ranking List %d
Line 4644: [DR Based] ->Building PrioBase S Criteria Met List
Line 4680: [DR Based]Remaining Time(%d) is within a Valid Range(%d)
Line 4684: Error Stopping DRBaseTResel Timer
Line 4707: [DR Based] Reselection candidate, Rejected as Selection criteria not met, 
Line 4713: [DR Based] Reselection candidate, rejected as Cell Barred in the Barred Cell List
Line 4765: =============== [DR Based] Based Rscp Ranking List Start
Line 4769: =============== [DR Based] Based EcN0 Ranking List Start
Line 4776: =============== [DR Based] Based Rscp Ranking List End
Line 4780: =============== [DR Based] Based EcN0 Ranking List End
Line 4899: CSG to non-CSG LTE Cell is ignored, as 3G CSG Cell is highest priority
Line 4905: [DR Based] TReselection is Zero OR Serving Cell Not suitable condition
Line 4917: [DR Based] TReselection Applies TReselection Done.. Ready for DR Based InterF Reselection
Line 4923: [DR Based]No Priority Based InterF Cell Candidate Available
Line 667: >> Skip GSM Cell: SuitableFddCellPresent %d
Line 676: Reselection candidate, accepted as Tresel Running and Seving Cell Not Suitable
Line 702: >> Skip GSM Cell: SuitableFddCellPresent %d
Line 716: >> Reselection candidate, rejected as on the best Sir-freq while PeriodicInterFReselMeas is configured (Squal > Sintersearch)
Line 523: ERROR Undefined Cell Info List
Line 1350: Could not refresh BSIC verification request
Line 1351: Could not refresh BSIC verification request
Line 975: ***Ranking List before prioritising Csg Cells***
Line 1045: ReselRanker moved the the CSG cell Freq[%d] Cpich[%d] CellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
Line 1057: This is TargetCSG Cell in neighbor cell list but This is not a best cell on ARFCN[%d] PhyCellId[%d] CellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
Line 1064: ***Ranking List after prioritising Csg Cells***
Line 823: Serving Cell is barred so not considered to be a reselection candidate
Line 829: cell id(%d) is higher rank than serving cell TReselection(%d)
Line 832: Reselection candidate 
Line 856: Use TReselection (%d) without Flooring
Line 865: Expand Treselection (%d) to above DRX
Line 876: NeighborCell(%d,%d) not yet verified to be better => TResel Not Started
Line 905: CandidateCell(%d,%d) not yet verified to be worse => TResel Not Stopped
Line 914: ReselRanker removed the last %i entries from the Ranking List
Line 1217: ***Prio Base Ranking List before prioritising Csg Cells***
Line 1287: ReselRanker moved the the CSG cell Arfcn[%d] PhyCellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
Line 1295: This is TargetCSG EUTRA Cell in neighbor cell list but This is not a best cell on ARFCN[%d] PhyCellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
Line 1302: ***Prio Base Ranking List after prioritising Csg Cells***
Line 3185: FLOORING: remainder (%d) < period(%d) * delta(%d/1000) -> Flooring To %d
Line 3192: FLOORING: remainder(%d) >= period(%d) * delta(%d), NearestFlooringDrx: %d -> Returning Original Value (%d))
Line 3341: Quick Rollback is required for CS Scnx :: Disable E-SIB
Line 3346: Quick Rollback is required for PS Scnx :: Disable E-SIB
Line 3775: PrivIsFddCandidate: Different LAI of CandidateCell(%d,%d) or Reject condition & BCH error -> Search for the next best cell
Line 3793: Reselection CandidateCell(UARFCN%d,PSC%d) has Not Selectable CSG ID %x -> Search for the next best cell
Line 3800: Reselection CandidateCell(UARFCN%d,PSC%d) has Selectable CSG ID %x
Line 3805: Reselection CandidateCell(UARFCN%d,PSC%d) has No CSG ID
Line 3820: PrivIsFddCandidate: ServingCell not suitable or zero TReselection-> Accept this candidate
Line 3829: PrivIsFddCandidate: Tresel timer expired for inter-freq CandidateCell(%d,%d)
Line 3840: Skip E-SIB reading due to Eutra meas
Line 3845: Skip E-SIB reading while BPLMN is running
Line 3853: Skip E-SIB reading while 2G BPLMN is running in peer SIM
Line 3860: Skip E-SIB reading due to DS
Line 3871: PrivIsFddCandidate: (E-SIB) Skip checking TResel of intra-freq CandidateCell(%d,%d)
Line 3882: PrivIsFddCandidate, (Normal Resel) Tresel timer expired for intra-freq CandidateCell(%d,%d)
Line 3890: PrivIsFddCandidate: CandidateCell(%d,%d) is barred or forbidden
Line 3911: PrivFddCandidate: ValidCandidate=TRUE (%d,%d) but, IsMeasValid=FALSE => Wait for new valid measurement
Line 3928: [PConflict] PrivFddCandidate: CandidateCell(%d,%d) is in paging conflict list
Line 3939: [PConflict] PrivFddCandidate: CandidateCell(%d,%d) is in paging conflict list
Line 3464: Found matched EarlySibCandidateIdx(%d)
Line 3470: WARNING No cell in EarlySibCandidateList is matched to current candidate
Line 3999: Reselection candidate, rejected as BSIC not verified
Line 1098: ***Prio Base Ranking List before prioritising Csg Cells***
Line 1168: ReselRanker moved the the CSG cell Arfcn[%d] PhyCellId[%d] CellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
Line 1176: This is TargetCSG UMTS Cell in neighbor cell list but This is not a best cell on ARFCN[%d] PhyCellId[%d] CellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
Line 1183: ***Prio Base Ranking List after prioritising Csg Cells***
Line 4218: ERROR HCS is in use for UtraPrio Cell Reslection (ivar=%d) -> CHECK THIS
Line 4810: ERROR HCS is in use for DR Based Cell Reslection (ivar=%d) -> CHECK THIS
