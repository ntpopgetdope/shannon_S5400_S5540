Line 43: RrmMeasObjectInfoNr::RrmMeasObjectInfoNr()
Line 49: RrmMeasObjectInfoNr::~RrmMeasObjectInfoNr()
Line 87: GetMeasObjectPtr - MEAS_OBJECT_ID_NULL
Line 96: RrmMeasObjectInfoNr::GetMeasObjectPtr - MeasObjectList Management error
Line 118: RrmMeasObjectInfoNr::IsMeasObjectExistFromMOInfoNr - MeasObjectList Management error
Line 125: RrmMeasObjectInfoNr::IsMeasObjectExistFromMOInfoNr - MeasObjectId(%d) found
Line 164:    >>ConvertMockMeasObjectIdtoDeact(%d)
Line 173:    >>ConvertMockMeasObjectIdtoDeact(%d -> %d)
Line 178:    >>MeasObjectId(%d), iter_measobj(%d)
Line 184:    >>Only Mock  MeasObjectId is available in this function(%d)
Line 193:    >>RemoveDeactMeasObjectFromMOInfoNr
Line 217:    >>GetFirstMeasObjectId - m_MeasObjectList is empty. Return MEAS_OBJECT_ID_NULL
Line 221:    >>GetFirstMeasObjectId - MeasObjectList Management error
Line 242:    >>GetFirstMeasObjectId(eStatus:(enum)%d) - First MeasObjectId:%d
Line 255:    >>GetNextMeasObjectIdFromMOInfoNr - Given MeasObjectId(%d) is invalid, just return first ObjectId
Line 265:    >>GetNextMeasObjectIdFromMOInfoNr - MeasObjectList Management error
Line 279:    >>GetNextMeasObjectId - Next MeasObjectId(%d) of given MeasObjectID(%d) found
Line 284:    >>GetNextMeasObjectId - CurrMeasObjectId(%d) found but no next meas object found
Line 309:    >>GetNextMeasObjectIdFromMOInfoNr - m_MeasObjectList is empty !!!!
Line 320:    >>ClearRefFreqCsiRsPresent - MeasObjectId(%d) not found at this frequency
Line 332:    >>GetSsbConfigMobilityPresentForMeasObjectIdFromMOInfoNr - Given MeasObjectId(%d) is invalid(MEAS_OBJECT_ID_NULL). return FALSE
Line 350:    >>MeasObjectPtr == NULL
Line 364:    >>GetSsbConfigMobilityForMeasObjectIdFromMOInfoNr - Given MeasObjectId(%d) is invalid(MEAS_OBJECT_ID_NULL). return FALSE
Line 387:    >>GetSmtc1ConfigForMeasObjectIdFromMOInfoNr - Given MeasObjectId(%d) is invalid(MEAS_OBJECT_ID_NULL). return dummy smtc1 config
Line 394:    >>GetSmtc1ConfigForMeasObjectIdFromMOInfoNr - MeasObjectList Management error
Line 404:    >>GetSmtc1ConfigForMeasObjectIdFromMOInfoNr - SsbConfigMobilityPresent(FALSE) for this MeasObjectId(%d)
Line 418:    >>GetSmtc2ConfigForMeasObjectIdFromMOInfoNr - Given MeasObjectId(%d) is invalid(MEAS_OBJECT_ID_NULL). return dummy smtc2 config
Line 425:    >>GetSmtc2ConfigForMeasObjectIdFromMOInfoNr - MeasObjectList Management error
Line 435:    >>GetSmtc2ConfigForMeasObjectIdFromMOInfoNr - SsbConfigMobilityPresent(FALSE) for this MeasObjectId(%d)
Line 447:    >>FindCellInfoFromMOInfoNr - Given MeasObjectId(%d) is invalid(MEAS_OBJECT_ID_NULL). return dummy smtc2 config
Line 454:    >>FindCellInfoFromMOInfoNr - MeasObjectList Management error
Line 466:    >>ConfigMeasObjectNrFromMOInfoNr - given pNewMeasObjectNr(0X%x) or MeasObjectNrConfig(0X%x) is invalid
Line 472:    >>ConfigMeasObjectNrFromMOInfoNr - MeasObjectid(%d) is being configured
Line 475:        #FreqBandIndicatorNRV1530Present:(bool)%d
Line 480:        #FreqBandIndicatorNRV1530:%d(BandId:%d)
Line 485:        #FreqBandIndicatorNRV1530:absent(BandId:%d)
Line 503:    >>ReconfigBandIdFromMOInfoNr - given MeasObjectPtr(0X%x) or MeasObjectNrConfig(0X%x) is invalid
Line 507:    >>ReconfigBandIdFromMOInfoNr - MeasObjectid(%d) is being configured
Line 510:      ::FreqBandIndicatorNRV1530Present:(bool)%d
Line 515:      ::FreqBandIndicatorNRV1530:%d(BandId:%d)
Line 520:      ::FreqBandIndicatorNRV1530:absent(BandId:%d)
Line 534:    >>ReconfigMeasObjectNrSsbBlocksParamFromMOInfoNr - given MeasObjectPtr(0X%x) is invalid
Line 551:      ::CreateCellInfoFromMOInfoNr - CellId:%d RsType:%s(%d) MeasObjectId:%d
Line 570:        #ALLOC NEW CellPtr:0x%08x - CellId:%d RsType:%s(%d) MeasObjectId:%d
Line 576:        #COPY CellPtr:0x%08x - CellId:%d RsType:%s(%d) MeasObjectId:%d
Line 586:    >>DeleteCellInfoFromMOInfoNr - Given MeasObjectId(%d) is invalid(MEAS_OBJECT_ID_NULL). return dummy smtc2 config
Line 594:    >>DeleteCellInfoFromMOInfoNr - MeasObjectList Management error
Line 608:    >>GetNextCell - Given MeasObjectId(%d) is invalid(MEAS_OBJECT_ID_NULL). return dummy smtc2 config
Line 615:    >>GetNextCell - MeasObjectList Management error
Line 632:    >>AddMeasObjectFromMOInfoNr - this MeasObjectPtr in NULL
Line 654:    >>RemoveMeasObjectFromMeasObjectListFromMOInfoNr - MeasObjectId is Null
Line 662:    >>RemoveMeasObjectFromMeasObjectListFromMOInfoNr - MeasObjectList management error
Line 669:    >>RemoveMeasObjectFromMeasObjectListFromMOInfoNr - MeasObjectid(%d) is removed from MeasObjectList
Line 680:    >>ResizeIdDetectedCellSet
Line 705:      ::AddCellToNeighborCellSet - this CellInfoClsPtr in NULL or SetType:%s(%d) is invalid
Line 711:      ::AddCellToNeighborCellSet - MeasObjectId(%d), SetType:%s(%d), Arfcn(%d), SubCarrierSpacing(%d), CellId(%d)
Line 717:    >> MeasObjectList management error
Line 736:    >>AddCellToNeighborCellSetFromMOInfoNr - this CellInfoClsPtr in NULL or SetType:%s(%d) is invalid
Line 742:    >>AddCellToNeighborCellSetFromMOInfoNr - MeasObjectId(%d), SetType:%s(%d), Arfcn(%d), SubCarrierSpacing(%d), CellId(%d)
Line 748: 	 >> MeasObjectList management error
Line 768:        #RemoveCellFromNeighborCellSet - Given MeasObjectId(%d) or pCellInfoCls(0X%x) is invalid(MEAS_OBJECT_ID_NULL)
Line 775:        #RemoveCellFromNeighborCellSet - MeasObjectList Management error
Line 787:    >>RemoveCellFromNeighborCellSetFromMOInfoNr - Given MeasObjectId(%d) or pCellInfoCls(0X%x) is invalid(MEAS_OBJECT_ID_NULL)
Line 796:      ::RemoveDetectedOrMoveToUnidListedForNcellFromMOInfoNr - MeasObjectId:%d RsType:%s(%d) Arfcn:%d CellId:%d
Line 801:    >>RemoveDetectedOrMoveToUnidListedForNcellFromMOInfoNr - Given MeasObjectId(%d) is invalid(MEAS_OBJECT_ID_NULL)
Line 812:        #REMOVE CELL - CurSetType:%s(%d)
Line 819:      ::FAILED
Line 829:        #MOVE CELL - CurSetType:%s(%d) target_set_type:%s(%d)
Line 836:      ::FAILED
Line 841:      ::unexpected CurSetType:%s(%d)
Line 854:    >>this pMeasObjectNr is NULL or MeasObjectId is Null
Line 866:      ::MoveCellToOtherNeighborCellSet - this pCellInfoCls in NULL
Line 888:      ::GetNrofNeighborCellSet - Given MeasObjectId(%d) is invalid(MEAS_OBJECT_ID_NULL)
Line 898:      ::GetNrofNeighborCellSet - MeasObjectId(%d) or SetType:%s(%d) is invalid
Line 903:      ::GetNrofNeighborCellSet - The number of NeighborCellSet for SetType:%s(%d) is %d
Line 920:    >>GetFirstCellInfoClsPtrFromNeighborCellSet - SetType:%s(%d) is invalid
Line 941:      ::GetCellInfoClsPtrFromNeighborCellSet- MeasObjectId(%d) or SetType:%s(%d) is invalid
Line 962:    >>GetSsbFreqPresentFromMeasObjectFromMOInfoNr - MeasObjectId(%d) not found at this frequency
Line 974:    >>GetSsbFreqFromMeasObjectFromMOInfoNr - MeasObjectId(%d) not found at this frequency
Line 986:    >>GetRefFreqCsiRsPresentFromMeasObjectFromMOInfoNr - MeasObjectId(%d) not found at this frequency
Line 998:    >>GetRefFreqCsiRsFromMeasObjectFromMOInfoNr - MeasObjectId(%d) not found at this frequency
Line 1010:    >>GetAbsThreshSsBlocksConsolidationPresentFromMOInfoNr - MeasObjectId(%d) not found at this frequency
Line 1024:    >>GetAbsThreshSsBlocksConsolidationFromMOInfoNr - MeasObjectId(%d) not found at this frequency
Line 1036:    >>GetAbsThreshCsiRsConsolidationPresentFromMOInfoNr - MeasObjectId(%d) not found at this frequency
Line 1050:    >>GetAbsThreshCsiRsConsolidationFromMOInfoNr - MeasObjectId(%d) not found at this frequency
Line 1062:    >>GetCellInfoClsPtrFromAllNeighborCellSet - MeasObjectId not found at this frequency
Line 1091:    >>DestroyRrmCellInfoListFromMOInfoNr - given pMeasObjectNr is NULL or MeasObjectId is Null
Line 1121:    >>DeleteMeasObjectNrFromMOInfoNr - given pMeasObjectNr is NULL or MeasObjectId is Null
Line 1135:    >>DeleteMeasObjectNrFromMOInfoNr - MeasObjectid(%d) is deleted
Line 1157:    >>DeleteMeasObjectNrFromMOInfoNr - MeasObjectList management error
Line 1172:        #ChangeToMockMeasObjectFromMOInfoNr
Line 1177:        # Error: MeasObjectPtr for MeasObjectId(%d) is NULL
Line 1191:    >>GetNrofBlockAvgPresentFromMOInfoNr - MeasObjectPtr is NULL
Line 1204:    >>GetNrofBlockAvgFromMOInfoNr - MeasObjectPtr is NULL
Line 1217:    >>GetAbsThreshPresentFromMOInfoNr - MeasObjectPtr is NULL
Line 1234:    >>GetAbsThreshConsolidationFromMOInfoNr - MeasObjectPtr is NULL
Line 1260:    >>GetOffsetFreqFromMOInfoNr - MeasObjectPtr is NULL
Line 1283:    >>GetSsbFreqPresentFromMOInfoNr - MeasObject[%d]  is NULL
Line 1288:    >>GetSsbFreqPresentFromMOInfoNr [%d] 
Line 1300:    >>GetSmtc1PresentFromMOInfoNr - MeasObject[%d]  is NULL
Line 1312:    >>SetSmtc1Config - MeasObject[%d]  is NULL
Line 1327:    >>GetSmtc2PresentFromMOInfoNr - MeasObject[%d]  is NULL
Line 1342:    >>GetWhiteCellListIdxFromMOInfoNr
Line 1351:    >> MeasObjectId(%d) cannot be found
Line 1356:    >>MeasObjectId(%d) WhiteCellListIdx(0x%x)
Line 1364:    >>GetWhiteCellListFromMOInfoNr
Line 1372:    >> MeasObjectId(%d) cannot be found
Line 1377:    >> MeasObjectId(%d) WhiteCellList(0x%x)
Line 1385:    >>GetBlackCellListIdxFromMOInfoNr
Line 1393:    >> MeasObjectId(%d) cannot be found
Line 1398:    >> MeasObjectId(%d) WhiteCellListIdx(0x%x)
Line 1406:    >>GetBlackCellListFromMOInfoNr
Line 1414:    >> MeasObjectId(%d) cannot be found
Line 1419:    >> MeasObjectId(%d) BlackCellList(0x%x)
Line 1427: RrmMeasObjectInfoNr::CheckCellListFromMOInfoNr
Line 1434:    >> MeasObjectId(%d) cannot be found
Line 1445:    >>GetDeriveSsbIndexFromCellForObjectIdFromMOInfoNr
Line 1451:    >>GetSsbConfigMobilityPresentForMeasObjectIdFromMOInfoNr - Given MeasObjectId(%d) is invalid(MEAS_OBJECT_ID_NULL). return FALSE
Line 1466:    >>GetBestIdentifiedCellPtrFromMOInfoNr for MeasObjectId:%d
Line 1473:    >>pMeasObject is NULL for MeasObjectId:%d
Line 1485:    >>PrintAllCellSetCellsFromMOInfoNr::MeasObjectId(%d) not found at this frequency
Line 1495:    >>ChangeSCellMeasCycleFromMOInfoNr - targetMeasObjId %d scellMeasCycleType(enum) %d
Line 1500:    >>pMeasObjectNr is NULL for MeasObjectId:%d
Line 1514:    >>pMeasObjectNr is NULL for MeasObjectId:%d
Line 1520: RrmMeasObjectInfoNr::IsMeasObjectIeConfiguredFromMOInfoNr - MeasObjectId(%d) found - bIEconfigured:(bool)%d
Line 1530:    >>pMeasObjectNr is NULL for MeasObjectId:%d
Line 1536: RrmMeasObjectInfoNr::SetMeasObjectIeConfiguredFromMOInfoNr - MeasObjectId(%d) found - bIEconfigured:(bool)%d
Line 1546: RrmMeasObjectInfoNr::IsDifferentSsbMeasObjectExistFromMOInfoNr - MeasObjectList Management error
Line 1556: RrmMeasObjectInfoNr::IsDifferentSsbMeasObjectExistFromMOInfoNr - Given-MeasObjId(%d) vs Existed-SsbMeasObjectId(%d) found
