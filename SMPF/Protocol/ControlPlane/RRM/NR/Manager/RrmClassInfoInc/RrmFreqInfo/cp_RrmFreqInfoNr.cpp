Line 52: RrmFreqInfoNr::RrmFreqInfoNr()
Line 70: RrmFreqInfoNr::~RrmFreqInfoNr()
Line 266:      ::AddMeasObject - Add MeasObjectId(%d) To MeasObjectList
Line 458:        #UePowerClass:%d
Line 463:        #UePowerClassPresent:absent(Default UePowerClass set to NRRRCDB_UePowerClass_pc2)
Line 475: RrmFreqInfoNr::ReconfigMeasObjectNr
Line 483:    >> Error: given MeasObjectNrConfig(0X%x) is invalid
Line 491:    >> Error: Cannot find any MeasObject to Reconfigure!!!
Line 499:    >> Error: Cannot find same RefSignal MeasObject from Object List!!!
Line 516:    >> Error: Cannot find RRM Meas Object Pointer!!!
Line 525:        #DeactMeasObjectFromFreqInfo
Line 541:        #Deactivated(Converted) MeasObjectId: %d
Line 564:      ::ReArrangeCellListFromActivateToDeactivate
Line 572:    >> given MeasObjectId(%d) cannot be found!
Line 583:        # Succeeded to Move from IDLISTEDCELLSET to IDDETECTEDCELLSET!
Line 635:      ::ConfigMeasObjectNrCsiRs::MeasObjectId:%d CsiRsResourceConfigMobilityChoice:(enum)%d CsiRsResourceConfigMobilityPresent:(bool)%d
Line 648:      ::DisplayCsiRsResourceConfigMobility - MeasObjectId:%d
Line 656:        #RefServCellIndexPresent:%d RefServCellIndex:%d SubcarrierSpacing:%d CsiRsCellListMobilityCnt:%d
Line 664:          *CsiRsCell[%d] - CellId:%d CsiRsMeasBw.StartPRB:%d CsiRsMeasBw.NrOfPRBs:(enum)%d DensityPresent:(bool)%d Density:%d CsiRsResourceListMobilityCnt:%d
Line 672:          *CsiRsResource[%d] - CsiRsIndex:%d AssociatedSsbPresent:(bool)%d AssociatedSsbIndex:%d FreqDomain:(enum)%d FirstOfdmSymbol:%d Sequence:%d
Line 696:    >>UpdateCsiRsResourceConfigMobility - pMeasObjectNrConfig is NULL
Line 700:      ::FreqBandIndicatorNRV1530Present:(bool)%d
Line 719:      ::CsiRsResourceConfigMobility present but RefFreqCsiRs is absent, ignoring CsiRsResourceConfigMobility
Line 726:      ::BEFORE INIT CSI-RS CELLSET MO:%d
Line 732:      ::AFTER INIT CSI-RS CELLSET MO:%d
Line 766:        #ADD cell to CSI UNIDLISTED cellset - CellId:%d MeasObjectId:%d BandId:%d
Line 774:        #FAILED
Line 782:        #CsiRsCellListMobility is NULL
Line 785:      ::AFTER UPDATE CSI-RS CELLSET MO:%d
Line 802:    >>AddCell duplicated ptr:%d obj:%d pcid:%d - new(setType:%d) old(setType:%d)
Line 916:    >>SetAgcGain - Arfcn:%d [0]%d[1]%d prev:[0]%d[1]%d
Line 1000:        #IsAllowedDeriveSsbIndex - bAllowed:(bool)%d ARFCN:%d MeasObjectId:%d duplexMode:%s((enum)%d) bDeriveSsbIndexFromCell:%d
Line 1012:    >>[SET] RSRP:(bool)%d RSRQ:(bool)%d SINR:(bool)%d
Line 1020:    >>GetSibCarrierFreqInfo:NULL - Arfcn:%d
Line 1032:    >>SetSibCarrierFreqInfo - Arfcn:%d
Line 1041:    >>pCarrierFreqInfo is allocated - ptr:0x%08x
Line 1075:      ::CheckSibBlackCellList - FOUND, CellId:%d Start:%d Range:%d
Line 1082:    >>CheckSibBlackCellList - isBlackCell:(bool)%d Arfcn:%d CellId:%d
Line 1107:      ::CheckSibWhiteCellList - FOUND, CellId:%d Start:%d Range:%d
Line 1114:    >>CheckSibWhiteCellList - isWhiteCell:(bool)%d Arfcn:%d CellId:%d
Line 1129:    >>SetSibBlackCellList - Arfcn:%d NumBlackCellList:%d
Line 1133:      ::NumBlackCellList:%d exceed NRRRCDB_MAX_CELL_BLACK:%d
Line 1143: SetSibWhiteCellList - Arfcn:%d NumWhiteCellList:%d
Line 1147:    >>NumWhiteCellList:%d exceed NRRRCDB_MAX_CELL_WHITE:%d
Line 1164:      ::SetSibReselectionPriority - Arfcn:%d ReselectionPriority:%d
Line 1182:      ::[GET] RSRP:(bool)%d RSRQ:(bool)%d SINR:(bool)%d
Line 1187:      ::GetSibsfMedium - Arfcn:%d sfMedium:%d 
Line 1194:      ::GetSibsfHigh - Arfcn:%d sfHigh:%d 
Line 1201:      ::SetSibTreselection - Arfcn:%d Treselection:%d
Line 1210:      ::SetSibSpeedStateScaleFactors - Arfcn:%d sfMedium:%d sfHigh:%d
Line 1271:      ::ssbConfigMobility - bPresentSsbConfigMobility:(bool)%d SsbToMeasurePresent:(bool)%d SsbToMeasureChoice:(enum)%d SsRssiMeasurementPresent:(bool)%d
Line 1316:      ::pCarrierFreqInfo:NULL - set default Periodicity Smtc SsRssiMeasurement
Line 1328:      ::Delete m_SibFreqInfo.pCarrierFreqInfo:0x%08x
Line 1336:        #InitMeasScheduleInfo!
Line 1346:    >>GetCsiRsFreqInfo - m_pCsiRsFreqInfo is NULL!
Line 1382:      ::UpdateCsiRsFreqInfo - RefServCellIndex not present, set to 0
Line 1400:    >>GetMeasScheduleInfoForCsiRs - m_pCsiRsFreqInfo is NULL
Line 1412:    >>SetMeasScheduleInfoForCsiRs - m_pCsiRsFreqInfo is NULL
Line 1427:        #SetSsbPeriod - ARFCN:%d SsbPeriodicity(enum)(NEW:%d OLD:%d)
Line 1435:         #SetSibNCellPciList:%d exceed NRRRCDB_MAX_CELL_BLACK:%d
Line 1443:        #SetSibNCellPciList - Arfcn:%d rNumNCellList:%d, start %d, Range %d 
Line 1458: 		::CheckIdleMeasPciRange - FOUND, CellId:%d Start:%d Range:%d
Line 1483:       ::DELETE FREQ FOR EARLY MEASURE result %d, Arfcn %d, SIB_FREQ %d, EM_ISPERFORM %d 
Line 1539:      ::ChangeSCellMeasCycle - this object is not an SCellFreq! cannot change meas cycle for this freq!
Line 1548:        #ChangeToMockMeasObject(targetObjId(%d)mockObjId(%d)
Line 1571:        #ChangeFromMockMeasObject
Line 1578:        #MeasObjId set to %d from %d!
Line 1582:        #Cannot find MOCK_MEAS_OBJECT from this frequency!
Line 1618:    >>NR arfcn %d AddNumCandiCellForReSel Change to %d
Line 1624:    >>NR arfcn %d RemoveNumCandiCellForReSel Change to %d
Line 1629:    >>NR arfcn %d AddIsTReselExpiredCurrentCycle Change to %d
Line 1635:    >>NR arfcn %d RemoveIsTReselExpiredCurrentCycle Change to %d
