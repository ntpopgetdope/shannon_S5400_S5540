Line 43: RrmFreqInfoUtra::RrmFreqInfoUtra()
Line 49: ~RrmFreqInfoUtra::~RrmFreqInfoUtra()
Line 70: RrmFreqInfoUtra:: NeighborCellSet management error
Line 75:      ::RrmFreqInfoUtra:: Delete Cell[%d,%d] in CellSet[SET:%d/SIZE:%d]
Line 91: RrmFreqInfoUtra::InitMeasScheduleInfo!
Line 168:        #Set UtraQOffsetRangePresent %d, UtraFddQOffsetRangeR16 %d
Line 187:        #ConfigCellInfoUtra (CellListUtraIdx %x)
Line 212:          * Push Cell to NeighborCellSet[%d] : Uarfcn %d CellId %d CellIndex %d
Line 216:          * CellId %d on Arfcn %d is exist in UNIDLISTED cell set 
Line 228:        #PushCellToNeighborCellSet - Cell(Arfcn %d, CellId %d) Added to SetType(%d) NeighborCellSetList
Line 231:        #PushCellToNeighborCellSet - MeasObjectList management error
Line 237:      ::RemoveDetectedOrMoveToUnidListedForNcell - MeasObjectId:%d Arfcn:%d CellId:%d
Line 253:        #REMOVE CELL - CurSetType:%s(%d)
Line 260:        #RemoveDetectedOrMoveToUnidListedForNcell RRM_UTRA_SET_TYPE_IDDETECTEDCELLSET FAILED
Line 271:      ::MOVE CELL - CurSetType:%s(%d) target_set_type:%s(%d)
Line 278:        #RemoveDetectedOrMoveToUnidListedForNcell RRM_UTRA_SET_TYPE_IDLISTEDCELLSET FAILED
Line 283:      ::unexpected CurSetType:%s(%d)
Line 292:    >>RemoveDetectedOrMoveToUnidListedForAllNcells
Line 328: RrmFreqInfoUtra::DeleteNeighborCellSet - this freq is nullptr
Line 338: RrmFreqInfoUtra::DeleteNeighborCellSet - NeighborCellSet management error
Line 343:    >>RrmFreqInfoUtra::DeleteNeighborCellSet - Delete Cell[%d,%d] in CellSet[SET:%s/SIZE:%d]
Line 364: RrmFreqInfoUtra::DeleteNeighborCellSet - NeighborCellSet management error
Line 369:    >>RrmFreqInfoUtra::DeleteNeighborCellSet - Delete Cell[%d,%d] in CellSet[SET:%d/SIZE:%d]
Line 386:    >>RrmFreqInfoUtra::GetNrofNeighborCellSet - SetType:%s(%d) is invalid
Line 390:    >>RrmFreqInfoUtra::GetNrofNeighborCellSet - NeighborCellSet of SetType:%s(%d) is empty
Line 394:    >>RrmFreqInfoUtra::GetNrofNeighborCellSet - The number of NeighborCellSet for SetType:%s(%d) is %d
Line 406:    >>RrmFreqInfoUtra::GetFirstCellInfoClsPtrFromNeighborCellSet - SetType(%d) is empty
Line 425:    >>RrmFreqInfoUtra::GetNextCell - Given SetType(%d) is invalid
Line 438:      ::RrmFreqInfoUtra::GetNextCell - NeighborCellSet[%d] management error
Line 448:      ::RrmFreqInfoUtra::GetNextCell - Next CellID(%d) of given CellId(%d) found
Line 453:      ::RrmFreqInfoUtra::GetNextCell - given CellId(%d) found but no next CellInfoClsPtr found
Line 460:      ::RrmFreqInfoUtra::GetNextCell - Current CellId(%d) is last Cell of NeighborCellSet[%d]
Line 466:      ::RrmFreqInfoUtra::GetNextCell - pMeasObject->NeighborCellSet[SetType] is empty !!!!
Line 476:      ::RrmFreqInfoNr::GetCellInfoClsPtrFromNeighborCellSet - SetType(%d) is empty
Line 487:        #RrmFreqInfoNr::GetCellInfoClsPtrFromNeighborCellSet - NeighborCellSet for SetType(%d) Management Error
Line 510:      ::RrmFreqInfoUtra::AddCellToNeighborCellSet - this CellInfoClsPtr in nullptr or SetType(%d) is invalid
Line 515:        #RrmFreqInfoUtra::AddCellToNeighborCellSet - MeasObjectId(%d), SetType(%d), Arfcn(%d), CellId(%d)
Line 554:      ::Delete Cell(Arfcn:%d CellId:%d) from CellSet(SetType:%d Size:%d)
Line 561:      ::Remove Cell(Arfcn:%d CellId:%d) from CellSet(SetType:%d Size:%d)
Line 580:    >>RrmFreqInfoUtra::RemoveCellFromNeighborCellSet - this CellInfoClsPtr in nullptr or SetType(%d) is invalid
Line 585:      ::RrmFreqInfoUtra::RemoveCellFromNeighborCellSet - MeasObjectId(%d), SetType(%d), Arfcn(%d), CellId(%d)
Line 613:    >>RrmCellInfoUtra::MoveCellToOtherNeighborCellSet - this pCellInfoCls in nullptr
Line 628:      ::RrmFreqInfoUtra::ReArrangeCellListFromActivateToDeactivate
Line 648:    >>RrmFreqInfoUtra::ReArrangeCellListFromActivateToDeactivate - Moving fails
Line 659:        #RrmFreqInfoUtra::DeactMeasObjectFromUtraFreqInfo
Line 681:        #Deactivated(Converted) Utra MeasObjectId: %d
