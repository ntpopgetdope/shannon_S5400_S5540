Line 59:      ::pServingCellInfo is nullptr
Line 67:      ::cellSelectionInfo is not present
Line 75:      ::cellMeasResult is invalid
Line 99: SERV(PCID:%d) Squal:%d[/100] = (Rsrq:%d - (QqualMin:%d) - QoffsetTemp:%d)[/100]
Line 120:      ::pServingCellInfo is nullptr
Line 127:      ::cellSelectionInfo or servingCellConfigCommonSIB is not present
Line 135:      ::cellMeasResult is invalid
Line 169: SERV(PCID:%d) Srxlev:%d[/100] = (Rsrp:%d - (QrxLevMin:%d + Pcompensation:%d) - QoffsetTemp:%d)[/100]
Line 192:      ::pIntraFreq:nullptr
Line 198:      ::pServingCellInfo:nullptr
Line 206:      ::failed to GetSibCellReselectionInfoCommon
Line 214:      ::cellMeasResult is invalid
Line 231:      ::SpeedStateReselectionParsPresent is not valid
Line 242:      ::SpeedStateReselectionParsPresent is not valid
Line 247:      ::MobilityStatus is not valid
Line 269:      ::SERV(PCID:%d) Rcriterion:%d[/100] = (Rsrp:%d + QhystSIB:%d + QhystSf:%d - QoffsetTemp:%d)[/100]
Line 289:      ::GetCellSqual - Unexpected RatType:%s(%d)
Line 309:      ::rCell.RatType is invalid
Line 316:      ::NR FreqPtr or CellPtr is nullptr - FreqPtr:0x%08x CellPtr:0x%08x
Line 337:      ::failed to GetSibServFreqInfo
Line 346:      ::failed to GetSibCarrierFreqInfo
Line 355:      ::cellMeasResult is invalid
Line 379:      ::NR(PCID:%d) Squal:%d[/100] = (Rsrq:%d - (QqualMin:%d + QqualMinOffset:%d) - QoffsetTemp:%d)[/100]
Line 394:      ::rCell.RatType is invalid
Line 401:      ::LTE FreqPtr or CellPtr is nullptr - FreqPtr:0x%08x CellPtr:0x%08x
Line 418:    >>failed to GetSibCarrierFreqInfo
Line 426:    >>cellMeasResult is invalid
Line 434:      ::LTE(PCID:%d) Squal:%d[/100] = (Rsrq:%d - (QqualMin:%d + QqualMinOffset:%d))[/100]
Line 451:      ::GetCellSrxlev - Unexpected RatType:%s(%d)
Line 471:      ::rCell.RatType is invalid
Line 478:      ::NR FreqPtr or CellPtr is nullptr - FreqPtr:0x%08x CellPtr:0x%08x
Line 497:      ::failed to GetSibIntraFreqCellReselectionInfo
Line 516:      ::failed to GetSibCarrierFreqInfo
Line 534:      ::cellMeasResult is invalid
Line 558:      ::NR(PCID:%d) Srxlev:%d[/100] = (Rsrp:%d - (QrxLevMin:%d + QrxLevMinOffset:%d + Pcompensation:%d) - QoffsetTemp:%d)[/100]
Line 573:      ::rCell.RatType is invalid
Line 580:      ::LTE FreqPtr or CellPtr is nullptr - FreqPtr:0x%08x CellPtr:0x%08x
Line 597:      ::failed to GetSibCarrierFreqInfo
Line 606:      ::cellMeasResult is invalid
Line 614:      ::LTE(PCID:%d) Srxlev:%d[/100] = (Rsrp:%d - (QrxLevMin:%d + QrxLevMinOffset:%d + Pcompensation:%d))[/100]
Line 634:      ::rCell.RatType is invalid
Line 641:      ::NR FreqPtr or CellPtr is nullptr - FreqPtr:0x%08x CellPtr:0x%08x
Line 664:      ::failed to GetSibCarrierFreqInfo
Line 674:      ::cellMeasResult is invalid
Line 696:      ::NR(PCID:%d) Rcriterion:%d[/100] = (Rsrp:%d - (qOffsetFreq:%d + qOffsetCell:%d) - QoffsetTemp:%d)[/100]
Line 711:      ::rCell.RatType is invalid
Line 718:      ::LTE FreqPtr or CellPtr is nullptr - FreqPtr:0x%08x CellPtr:0x%08x
Line 737:      ::cellMeasResult is invalid
Line 745:      ::LTE(PCID:%d) Rcriterion:%d[/100] = (Rsrp:%d - qOffsetCell:%d)[/100]
Line 760:      ::pIntraFreq is nullptr
Line 769:      ::failed to GetSibCellReselectionInfoCommon
Line 785:      ::failed to GetSibCarrierFreqInfo
Line 849:       ::GetMeasResultFreqWithBestRsrp::measObjectId %d
Line 874:        #ServCell - SsbFreq:%d PhysCellId:%d CellResults Rsrp:%d Rsrq:%d Sinr:%d
Line 880:        #SsbResults Cnt:%d - ResultsSsbIndex[0](SsbIndex:%d Rsrp:%d Rsrq:%d Sinr:%d)
Line 904:        #NeighCellList[%d] - SsbFreq:%d PhysCellId:%d CellResults Rsrp:%d Rsrq:%d Sinr:%d
Line 910:        #SsbResults Cnt:%d - ResultsSsbIndex[0](SsbIndex:%d Rsrp:%d Rsrq:%d Sinr:%d)
Line 921:        #INVALID NR FOR EARLY MEASURE REPORT. CellID %d
Line 971:        #NeighCellList[%d] - SsbFreq:%d PhysCellId:%d CellResults Rsrp:%d Rsrq:%d Sinr:%d
Line 977:        #SsbResults Cnt:%d - ResultsSsbIndex[0](SsbIndex:%d Rsrp:%d Rsrq:%d Sinr:%d)
Line 1026:      ::ADD CellId %d FOR EARLY MEASURE REPORT 
Line 1031:      ::ADD CellId %d FOR REPORT ReportType.IdleMeas %d
Line 1105: 	   ::measResultNeighCell[%d] - EutraFreq:%d PhysCellId:%d CellResults Rsrp:%d Rsrq:%d Sinr:%d
Line 1109: 	   ::INVALID EUTRA FOR EARLY MEASRUE MR. CellID %d
Line 1141:      ::INVALID CONDITION EUTRA-F CellId %d FOR EARLY MEASRUE MR.
Line 1146:      ::ADD CellId %d FOR EARLY MEASURE REPORT 
Line 1162:      ::INVALID EUTRA-F CellId %d FOR EARLY MEASRUE MR cellMeasResult.isValid %d
Line 1343:      ::LowPwrMode - Set lowest priority to trigger N2L reselection for NR ARFCN:%d
Line 1361:      ::IntraFreqPtr is nullptr
Line 1379:      ::AppendFreqListNr - Skip IntraFreq Arfcn:%d - Priority:%d is less than %d(LOWEST_PRIORITY)
Line 1407:      ::AppendFreqListNr - Skip InterFreq Arfcn:%d - Priority:%d is less than %d(LOWEST_PRIORITY)
Line 1420:      ::AppendFreqListNr - Unexpected eFreqType:%d(INTRA:%d INTER:%d)
Line 1433:      ::Unexpected rFreqResel.RatType:%s(%d)
Line 1439:      ::rFreqResel.FreqPtr is nullptr
Line 1489:      ::AppendFreqListEutra - Skip LTE Freq Arfcn:%d - Priority:%d is less than %d(LOWEST_PRIORITY)
Line 1509:      ::Unexpected rFreqResel.RatType:%s(%d)
Line 1515:      ::rFreqResel.Rat.LTE.FreqPtr is nullptr
Line 1553:      ::NR FREQ - Arfcn:%d Priority:%d
Line 1561:      ::LTE FREQ - Arfcn:%d Priority:%d
Line 1596:      ::NR CELL - Arfcn:%d CellId:%d Priority:%d bTreselStarted:(bool)%d TreselTimeStamp:%d elapsedMs:%d
Line 1613:      ::LTE CELL - Arfcn:%d CellId:%d Priority:%d bTreselStarted:(bool)%d TreselTimeStamp:%d elapsedMs:%d
Line 1633: 	  ::Freq is nullptr
Line 1682: 	  ::RrmFreqInfoEutra is nullptr
Line 1732: IsTreselectionAllFreq - IntraFreq is nullptr
Line 1738: IsTreselectionAllFreq - Found Tresel cell[Intra Freq]
Line 1749: IsTreselectionAllFreq - Found Tresel cell[Inter Freq]
Line 1763: IsTreselectionAllFreq - Found Tresel cell[Irat Eutra Freq]
