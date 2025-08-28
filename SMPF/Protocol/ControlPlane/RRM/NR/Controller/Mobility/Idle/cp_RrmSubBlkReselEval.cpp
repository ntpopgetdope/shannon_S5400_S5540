Line 54: RrmSubBlkReselEval::RrmSubBlkReselEval()
Line 61: RrmSubBlkReselEval::~RrmSubBlkReselEval()
Line 68: RrmSubBlkReselEval::Init
Line 86:    >>REMOVE ALL except nrFixedPcid:%d size:%d
Line 165:    >>bStopEvalIntra:(bool)%d bStopEvalNonIntraEqualLower:(bool)%d ModemStatus:%d - SintraSearchP:%d SintraSearchQ:%d SnonIntraSearchP:%d SnonIntraSearchQ:%d
Line 195:    >>RemoveCellsIfServAboveSearchThreshold - REMOVE NR Arfcn:%d CellId:%d
Line 199:    >>RemoveCellsIfServAboveSearchThreshold - REMOVE LTE Arfcn:%d CellId:%d
Line 246: RemoveCellsInBlackCellList - REMOVE %s Arfcn:%d CellId:%d - isBlackCell:(bool)%d 
Line 292: RemoveCellsInBarredList - REMOVE %s Arfcn:%d CellId:%d isBarred:(bool)%d
Line 330: 	>>RemoveCellOtherthanWhitecells - REMOVE %s Arfcn:%d CellId:%d - isWhiteCell:(bool)%d 
Line 362:    >>RemoveCellsToBeDropped - DROP NR Arfcn:%d CellId:%d
Line 419:    >>RemoveCellsOfEqualPriority - REMOVE NR Arfcn:%d CellId:%d
Line 423:    >>RemoveCellsOfEqualPriority - REMOVE LTE Arfcn:%d CellId:%d
Line 443:    >>CheckReselCriteriaEqual - bCheckReselCriteriaEqual:(bool)%d
Line 512:      ::Unexpected RatType:%s(%d)
Line 523:      ::>>REMOVE %s ARFCN:%d PCID:%d - Rcriterion:%d is out of RangeToBestCell(Min:%d Max:%d)
Line 545:      ::Discard margin of %s ARFCN:%d PCID:%d - pcell_Rcriterion:%d is out of RangeToBestCell(Min:%d Max:%d)
Line 555:      ::TRESEL START - %s CellId:%d Equal:(Srxlev(%d) > 0) AND (Squal(%d) > 0) AND (Rcriterion(%d) > pcell_Rcriterion(%d) + margin.Rank(%d))
Line 561:      ::TRESEL STOP - %s CellId:%d Equal:(Srxlev(%d) <= 0) OR (Squal(%d) <= 0) OR (Rcriterion(%d) <= pcell_Rcriterion(%d) + margin.Rank(%d))
Line 609:    >>pIntraFreq is nullptr or Failed GetSibCellReselectionServingFreqInfo
Line 653:      ::Unexpected RatType:%s(%d)
Line 670:      ::TRESEL START - %s CellId:%d HighQ:(Squal(%d) > threshX_HighQ(%d) + margin.Rsrq(%d))
Line 675:      ::TRESEL STOP - %s CellId:%d HighQ:(Squal(%d) <= threshX_HighQ(%d) + margin.Rsrq(%d))
Line 683:      ::TRESEL START - %s CellId:%d HighP:(Srxlev(%d) > threshX_HighP(%d) + margin.Rsrp(%d))
Line 688:      ::TRESEL STOP - %s CellId:%d HighP:(Srxlev(%d) <= threshX_HighP(%d) + margin.Rsrp(%d))
Line 702:      ::CheckReselCriteriaHigher done - %s cellList.size:%d
Line 708:      ::%s - Ranking for higher priority cells
Line 739:    >>pIntraFreq is nullptr or Failed GetSibCellReselectionServingFreqInfo
Line 785:      ::Unexpected RatType:%s(%d)
Line 805:      ::TRESEL START - %s CellId:%d LowQ(pcell_Squal(%d) < ThreshServingLowQ(%d)) AND (ncell_Squal(%d) > threshX_LowQ(%d) + margin.Rsrq(%d))
Line 811:      ::TRESEL STOP - %s CellId:%d LowQ:(pcell_Squal(%d) < ThreshServingLowQ(%d)) BUT (ncell_Squal(%d) <= threshX_LowQ(%d) + margin.Rsrq(%d))
Line 818:      ::TRESEL STOP - %s CellId:%d LowQ:(pcell_Squal(%d) >= ThreshServingLowQ(%d))
Line 829:      ::TRESEL START - %s CellId:%d LowP:(pcell_Srxlev(%d) < ThreshServingLowP(%d)) AND (ncell_Srxlev(%d) > threshX_LowP(%d) + margin.Rsrp(%d))
Line 835:      ::TRESEL STOP - %s CellId:%d LowP:(pcell_Srxlev(%d) < ThreshServingLowP(%d)) BUT (ncell_Srxlev(%d) <= threshX_LowP(%d) + margin.Rsrp(%d))
Line 842:      ::TRESEL STOP - %s CellId:%d LowP:(pcell_Srxlev(%d) >= ThreshServingLowP(%d))
Line 856:      ::CheckReselCriteriaLower done - %s cellList.size:%d
Line 862:      ::%s - Ranking for lower priority cells
Line 887:    >>pIntraFreq:nullptr
Line 893:    >>Failed GetSibCellReselectionInfoCommon
Line 916:    >>NRRRM.NR_RESEL_MARGIN : 0 => all margin value set to 0 !
Line 922:    >>pIntraFreq:nullptr
Line 1023:    >>rCell.Rat.NR.CellPtr is nullptr
Line 1035:    >>bStart:(bool)%d StartMs:%d[ms] curTimeMs:%d[ms] NumCandiCellForReSel Arfcn %d, CellId %d
Line 1039:    >>NumCandiCellForReSel IS NOT INIT. Arfcn %d, CellId %d
Line 1050:    >>rCell.Rat.LTE.CellPtr is nullptr
Line 1062:    >>bStart:(bool)%d StartMs:%d[ms] curTimeMs:%d[ms] TriggeredReselList Arfcn %d, CellId %d
Line 1065:    >>NumCandiCellForReSel IS NOT INIT. Arfcn %d, CellId %d
Line 1075:    >>Unexpected RatType:%s(%d)
Line 1089:    >>rCell.Rat.NR.CellPtr is nullptr
Line 1113:    >>rCell.Rat.LTE.CellPtr is nullptr
Line 1137:    >>Unexpected RatType:%s(%d)
Line 1156:    >>rCell.Rat.NR.CellPtr is nullptr
Line 1178:    >>rCell.Rat.LTE.CellPtr is nullptr
Line 1198:    >>Unexpected RatType:%s(%d)
Line 1208:      ::TRESEL EXPIRED - elapsed:%d[ms] >= tResel:%d[ms] (tResel:%d[s] SF:%d[percent])
Line 1214:      ::TRESEL NOT EXPIRED - elapsed:%d[ms] < tResel:%d[ms] (tResel:%d[s] SF:%d[percent])
Line 1233:    >>pServingCellInfo is nullptr
Line 1260:      ::SERV(PCID:%d) TreselCount - bExpired:(bool)%d bStart:(bool)%d StartMs:%d[ms] elapsedMs:%d[ms] oneSecondMs:%d[ms]
Line 1273:    >>pFreqInfo is nullptr
Line 1302:    >>MobilityStatus is not valid
Line 1318:    >>pFreqInfo is nullptr
Line 1346:    >>MobilityStatus is not valid
Line 1366:    >>NEXT CYCLE TRESEL EXPIRED - elapsed:%d[ms] >= tResel:%d[ms]
Line 1378:    >>Unexpected RatType:%s
