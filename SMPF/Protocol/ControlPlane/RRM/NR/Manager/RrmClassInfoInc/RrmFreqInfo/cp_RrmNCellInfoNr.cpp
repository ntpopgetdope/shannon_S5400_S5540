Line 84: RrmNCellInfoNr::RrmNCellInfoNr()
Line 92: RrmNCellInfoNr::~RrmNCellInfoNr()
Line 99:    >>Initialize SsbNeighborCellSet and CsiNeighborCellSet
Line 128:    >>cell is NULL - SsbSetType:%s(%d)
Line 135:      ::CELL FOUND - CellId:%d SsbSetType:%s(%d) CellPtr:0x%08x
Line 154:      ::cell is NULL - CsiSetType:%s(%d)
Line 161:      ::CELL FOUND - CellId:%d CsiSetType:%s(%d) CellPtr:0x%08x
Line 172:      ::CELL NOT FOUND
Line 197:      ::cell is NULL - SsbSetType:%s(%d)
Line 204:      ::CELL FOUND - CellId:%d SsbSetType:%s(%d) CellPtr:0x%08x
Line 221:      ::cell is NULL - CsiSetType:%s(%d)
Line 228:      ::CELL FOUND - CellId:%d CsiSetType:%s(%d) CellPtr:0x%08x
Line 237:      ::CELL NOT FOUND
Line 249:    >>DeleteCellInfoFromNCI - pCellDelete is NULL
Line 255:        #DeleteCellInfoFromNCI - CellId:%d Ptr:0x%08x RsType:%s(%d)
Line 278:      ::DELETE Cell - not found
Line 286:      ::PRESERVE Cell - found and matched CellPtr:0x%08x
Line 291:      ::DELETE Cell - found but not matched CellPtr:0x%08x
Line 302:      ::DELETE CellPtr:0x%08x - CellId:%d RsType:%s(%d)
Line 323:    >>GetNextCellFromNCI - Given SetType:%s(%d) is invalid
Line 338:    >>GetNextCellFromNCI - rsType(%d) NeighborCellSet[%d] management error
Line 348:    >>GetNextCellFromNCI - Next CellID(%d) of given CellId(%d) found
Line 357:    >>GetNextCellFromNCI - given CellId(%d) found but no next CellInfoClsPtr found
Line 364:    >>GetNextCellFromNCI - Current CellId(%d) is last Cell of rsType(%d) NeighborCellSet[%d]
Line 370:    >>GetNextCellFromNCI - pMeasObject->rsType(%d) NeighborCellSet[SetType] is empty !!!!
Line 383:    >>AddCellToCandiDetectedCellSetForSsb(size:%d) - Arfcn:%d CellId:%d CorrEnergy:%d
Line 386:      ::SORT - CANDIDETECTED cellset with AscendingCompareCellCorrEnergy
Line 394:      ::COMPARE - LEAST(CellId:%d CorrEnergy:%d) and TARGET(CellId:%d CorrEnergy:%d)
Line 398:      ::REMOVE LEAST cell and PUSH TARGET cell
Line 409:      ::DO NOT ADD TARGET - LEAST cell is better than TARGET
Line 415:      ::REMOVE LEAST cell and PUSH TARGET cell - LEAST cell is NULL
Line 434:    >>AddCellToCandiDetectedCellSetForCsiRs(size:%d) - Arfcn:%d CellId:%d CorrEnergy:%d
Line 437:      ::SORT - CANDIDETECTED cellset with AscendingCompareCellCorrEnergy
Line 445:      ::COMPARE - LEAST(CellId:%d CorrEnergy:%d) and TARGET(CellId:%d CorrEnergy:%d)
Line 449:      ::REMOVE LEAST cell and PUSH TARGET cell
Line 460:      ::DO NOT ADD TARGET - LEAST cell is better than TARGET
Line 466:      ::REMOVE LEAST cell and PUSH TARGET cell - LEAST cell is NULL
Line 507:    >>ResizeIdDetectedCellSetFromNCI
Line 519: 	   ::No cell to remove
Line 524: 	   ::REMOVE cell in ID DETECTED for rsType:(enum)%d
Line 539:    >>RemoveCellFromNeighborCellSetForNCI - this CellInfoClsPtr in NULL or SetType:%s(%d) is invalid
Line 549:        #RemoveCellFromNeighborCellSetForNCI - SetType:%s(%d) Arfcn:%d CellId:%d rsType:%d
Line 558:        #RemoveCellFromNeighborCellSetForNCI - NeighborCellSet for SetType:%s(%d) is empty
Line 571:        #Delete Cell(Arfcn:%d CellId:%d) from CellSet(SetType:%s(%d) Size:%d rsType:%d)
Line 578:        #Remove Cell(Arfcn:%d CellId:%d) from CellSet(SetType:%s(%d) Size:%d rsType:%d)
Line 594:    >>RemoveDetectedOrMoveToUnidListedForNcellFromNCI - RsType:%s(%d) Arfcn:%d CellId:%d
Line 604:      ::REMOVE CELL - CurSetType:%s(%d)
Line 611:      ::FAILED
Line 621:      ::MOVE CELL - CurSetType:%s(%d) target_set_type:%s(%d)
Line 628:      ::FAILED
Line 633:      ::unexpected CurSetType:%s(%d)
Line 702:    >>MoveCellToOtherNeighborCellSetForSsbFromNCI - this pCellInfoCls in NULL
Line 721:      ::AddCellToNeighborCellSetForSsbFromNCI - this CellInfoClsPtr in NULL or SetType:%s(%d) is invalid
Line 728:        #AddCellToNeighborCellSetForSsbFromNCI - SetType:%s(%d), Arfcn(%d), SubCarrierSpacing(%d), CellId(%d)
Line 740:        #Cell(Arfcn %d, CellId %d) Added to SetType:%s(%d) NeighborCellSetList
Line 752:      ::MoveCellToOtherNeighborCellSetForCsiRsFromNCI - this pCellInfoCls in NULL
Line 771:      ::AddCellToNeighborCellSetForCsiRsFromNCI - this CellInfoClsPtr in NULL or SetType:%s(%d) is invalid
Line 778:        #AddCellToNeighborCellSetForCsiRsFromNCI - SetType:%s(%d), Arfcn(%d), SubCarrierSpacing(%d), CellId(%d)
Line 790:        #Cell(Arfcn %d, CellId %d) Added to SetType:%s(%d) NeighborCellSetList
Line 818:    >>GetNroNeighborCellSetFromNCI - SetType:%s(%d) is invalid
Line 823:    >>GetNroNeighborCellSetFromNCI - NeighborCellSet of SetType:%s(%d) is empty
Line 828:    >>GetNroNeighborCellSetFromNCI - The number of NeighborCellSet for SetType:%s(%d) is %d
Line 839:    >>GetFirstCellInfoClsPtrFromNeighborCellSetFromNCI - SetType:%s(%d) is invalid
Line 847:    >>GetFirstCellInfoClsPtrFromNeighborCellSetFromNCI - SetType:%s(%d) is empty (rsType:%d)
Line 864:    >>GetCellInfoClsPtrFromNeighborCellSetFromNCI - SetType:%s(%d) is invalid
Line 875:    >>GetCellInfoClsPtrFromNeighborCellSetFromNCI - NeighborCellSet for SetType:%s(%d) Management Error
Line 902:    >>GetCellInfoClsPtrFromAllNeighborCellSetFromNCI - NeighborCellSet for SetType:%s(%d) Management Error
Line 953:      ::DestroyRrmCellInfoList(bDelete:%d) - (pcid:%d arfcn:%d MO:%d) in cellset(rsType:%d setType:%d size:%d)
Line 973:    >>GetBestIdentifiedCellPtrFromNCI
Line 980:      ::SORT - IDLISTED IDDETECTED cellset with DescendingCompareCellSsbRSRP
Line 1013:      ::Best cell found in IDLISTED (CellId:%d Ptr:0x%08x) - IDLISTED.Rsrp:%d >= IDDETECTED.Rsrp:%d
Line 1019:      ::Best cell found in IDDETECTED (CellId:%d Ptr:0x%08x) - IDLISTED.Rsrp:%d < IDDETECTED.Rsrp:%d
Line 1025:      ::Best cell found in IDLISTED (CellId:%d Ptr:0x%08x)
Line 1030:      ::Best cell found in IDDETECTED (CellId:%d Ptr:0x%08x) 
Line 1035:      ::No Best cell found
Line 1042:      ::PrintAllCellSetCellsFromNCI
Line 1056:         #SSB - SetType:%s(%d) is empty
Line 1064:        #SSB - SetType:%s CellId:%d CellPtr:0x%08x RSRP:%d CorrEnergy:%d SsbIndex:%d SsbTimingOffset:%d
Line 1075:        #CSI - SetType:%s(%d) is empty
Line 1082:        #CSI - SetType:%s CellId:%d CellPtr:0x%08x RSRP:%d
Line 1089:    >>SetMeasObjectIdForAllNcells(MeasObjectId:%d)
Line 1116:      ::SetMeasObjectId(%d) for (pcid:%d arfcn:%d MeasObjectId:%d) in cellset(rsType:%d setType:%d)
Line 1142: GetOtherBestCell(%d) CellMeasResult.isValid %d, rsrp %d, rsrq %d sinr %d, Ptr 0x%08x
