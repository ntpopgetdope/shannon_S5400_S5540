Line 49: RrmSubBlkL3Filter::RrmSubBlkL3Filter()
Line 55: RrmSubBlkL3Filter::~RrmSubBlkL3Filter()
Line 60: RrmSubBlkL3Filter::Init() - MsgGrpId(%d)
Line 69: #####ProcCellCriteria rsType:%s(%d) eFilterCellType:(enum)%d
Line 74:      ::Fatal Error - Invalid Ptr!!! pFreqInfo(0x%x) pCellInfo(0x%x)
Line 104:    >>measObjId:%d rsType:%s(%d) - AbsThreshPresent:(bool)%d NrofBlockAvgPresent:(bool)%d
Line 125:    >>filterCoefficient - RSRP:(enum)%d RSRQ:(enum)%d RSSINR:(enum)%d RSSI:(enum)%d)
Line 129:    >>Use default filterCoefficient ( not present )
Line 143:    >>dynamicFC_converted - RSRP:%d RSRQ:%d RSSINR:%d RSSI:%d)
Line 207:      ::Set highest Rsrp Prev:%d[/100 dBm] New:%d[/100 dBm]
Line 279:      ::filterCoefficient - RSRP:(enum)%d RSRQ:(enum)%d RSSINR:(enum)%d RSSI:(enum)%d
Line 283:      ::Default filterCoefficient ( No index )
Line 288:      ::Default filterCoefficient ( not present )
Line 302:      ::dynamicFC_converted - RSRP:%d RSRQ:%d RSSINR:%d RSSI:%d)
Line 379: 	>>Pcell part to get SsbPositionInBurst and check isIntraAndDerive
Line 396: 	>>Scell part  to get SsbPositionInBurst and check isIntraAndDerive
Line 412:      ::TravelListedBeams:: pCellInfo == nullptr - try to find first SSB Cellinfo in next MO
Line 422:      ::TravelListedBeams:: ProcBeamCriteria(SSB) #%d loop complete
Line 426: ECID mode no drop
Line 437:      ::TravelListedBeams:: try to find next SSB Cellinfo
Line 453:        #TravelListedBeams:: pCellInfo == nullptr - try to find first CSI-RS Cellinfo in next MO
Line 463:        #TravelListedBeams:: ProcBeamCriteria(CSI-RS) #%d loop complete
Line 467:        #TravelListedBeams:: try to find next CSI-RS Cellinfo
Line 490:      ::TravelListedCells:: pCellInfo == nullptr - try to find first Cellinfo in next MO
Line 496:      ::TravelListedCells:: ProcCellCriteria(RSTYPE_SSB) #%d complete
Line 499:      ::TravelListedCells:: try to find next SSB Cellinfo
Line 514:        #TravelListedCells:: pCellInfo == nullptr - try to find first Cellinfo in next MO
Line 522:        #TravelListedCells:: ProcCellCriteria(RSTYPE_CSIRS) #%d complete
Line 525:        #TravelListedCells:: try to find next CSI-RS Cellinfo
Line 533:    >>UpdateL3FilterAllBeams
Line 556:      ::SCellFreq[%d,%d] First ObjectId(%d)
Line 568:        #Please check Freq and MO
Line 577:        #SCellFreq[%d,%d] Next ObjectId(%d)
Line 581:      ::TravelListedBeams for SCellFreq complete
Line 586:      ::UpdateL3FilterAllBeams SCellFreq - No SCell freq
Line 591:      ::pServCellGroupInfoNr is nullptr!!!
Line 602:      ::UpdateL3FilterAllBeams intra
Line 608:      ::TravelListedBeams for intra complete
Line 612:      ::Please check Freq and MO
Line 617:      ::No Intra freq
Line 627:      ::UpdateL3FilterAllBeams inter
Line 639:      ::Please check Freq and MO
Line 651:      ::TravelListedBeams for Inter complete
Line 656:      ::No Inter freq
Line 666:    >>UpdateL3FilterServingCell
Line 675:    >>RrmSubBlkL3Filter::UpdateL3FilterPCell
Line 709:      ::UpdateL3FilterPCell:: ProcBeamCriteria for Serv(SSB) complete
Line 719:      ::UpdateL3FilterPCell:: ProcCellCriteria for Serv(SSB) complete
Line 729:      ::UpdateL3FilterPCell:: ProcBeamCriteria for Serv(CSI-RS) complete
Line 732:      ::UpdateL3FilterPCell:: ProcCellCriteria for Serv(CSI-RS) complete
Line 737:      ::UpdateL3FilterPCell :: Please check MO
Line 742:      ::UpdateL3FilterPCell :: Please NULL check of pIntraFreqInfo & pServingCell
Line 749:    >>UpdateL3FilterSCell
Line 788:      ::UpdateL3FilterSCell:: ProcBeamCriteria for Serv(SSB) complete
Line 796:      ::UpdateL3FilterSCell:: ProcCellCriteria for Serv(SSB) complete
Line 802: The CellPruning condition of SCell is satisfied
Line 811:      ::UpdateL3FilterSCell:: ProcBeamCriteria for Serv(CSI-RS) complete
Line 814:      ::UpdateL3FilterSCell:: ProcCellCriteria for Serv(CSI-RS) complete
Line 819:      ::UpdateL3FilterSCell :: Please check MO
Line 824:      ::UpdateL3FilterSCell :: Please NULL check of pSCellFreqInfo
Line 832:      ::UpdateL3FilterSCell :: Please NULL check of pServCellGroupInfoNr
Line 839:    >>UpdateL3FilterAllCells
Line 874:      ::UpdateL3FilterAllCells :: Please check SCellFreq and MO
Line 888:      ::UpdateL3FilterAllCells:: SCellFreq loop complete
Line 893:      ::UpdateL3FilterAllCells Inter - No SCell freq
Line 898:      ::UpdateL3FilterAllCells SCellFreq - No Master CellGroupInfo
Line 920:      ::UpdateL3FilterAllCells :: Please check Freq and MO
Line 927:      ::UpdateL3FilterAllCells intra - No Intra freq
Line 946:      ::UpdateL3FilterAllCells :: Please check Freq and MO
Line 963:      ::UpdateL3FilterAllCells:: InterFreq loop complete
Line 968:      ::UpdateL3FilterAllCells Inter - No Inter freq
Line 992:      ::UpdateL3FilterCli - MeasObjId:%d QuantityConfigCLI(present:(bool)%d fc_srs_rsrp:%d fc_cli_rssi:%d)
Line 1027:        #L3Filtered CLI-SRS-RSRP - ObjId:%d ResourceId:%-3d Rsrp:%d[/100dBm]
Line 1031:        #L3Filtered CLI-RSSI - ObjId:%d ResourceId:%-3d Rssi:%d[/100dBm]
Line 1074: #####UpdateIdDetectedCellSet - FreqType:%d[enum]
Line 1097:    >>BEFORE UpdateIdDetectedCellSet
Line 1104:    >>Please check Freq and MO
Line 1109:    >>AFTER UpdateIdDetectedCellSet
Line 1115:    >>intra - No Intra freq
Line 1143:    >>BEFORE UpdateIdDetectedCellSet
Line 1150:    >>Please check Freq and MO
Line 1155:    >>AFTER UpdateIdDetectedCellSet
Line 1167:    >>InterFreq loop complete
Line 1173:    >>Inter - No Inter freq
Line 1205:    >>BEFORE UpdateIdDetectedCellSet
Line 1212:    >>Please check Freq and MO
Line 1217:    >>AFTER UpdateIdDetectedCellSet
Line 1229:    >>ScellFreq loop complete
Line 1235:    >>Scell - No Scell freq
Line 1240:    >>No Master CellGroupInfo
Line 1245:    >>Invalid freq type:%d[enum]
Line 1279:    >>TravelListedCellsEutra:: pCellInfo == nullptr - try to find first Cellinfo in next MO
Line 1286:    >>TravelListedCellsEutra:: ProcCellCriteria #%d complete
Line 1290:    >>TravelListedCellsEutra:: try to find next Cellinfo
Line 1296:    >>ProcCellCriteriaEutra
Line 1309:      ::ProcCellCriteria - GetCellMeasResultNrL3Filtered
Line 1322:        #filterCoefficient updated for beam SSB_RSRP:(enum)%d, SSB_RSRQ:(enum)%d, SSB_RSSINR:(enum)%d, SSB_RSSI:(enum)%d)
Line 1326:        #Use default filterCoefficient ( not present )
Line 1337:        #ProcCellCriteria - cellResult.isValid is ture
Line 1344:        #ProcCellCriteria - cellResult.isValid is false
Line 1404:    >>TravelListedCellsUtra:: pCellInfo == nullptr - try to find first Cellinfo in next MO
Line 1411:    >>ProcCellCriteriaUtra:: ProcCellCriteria #%d complete
Line 1415: TravelListedCellsUtra:: try to find next Cellinfo
Line 1421:    >>ProcCellCriteriaUtra
Line 1434:      ::ProcCellCriteriaUtra - GetCellMeasResultNrL3Filtered
Line 1444:        #filterCoefficient updated for RSCP:(enum)%d, ECNO:(enum)%d
Line 1448:        #Use default filterCoefficient ( not present )
Line 1456:        #ProcCellCriteria - cellResult.isValid is ture
Line 1462:        #ProcCellCriteria - cellResult.isValid is false
Line 1490:      ::L3Filtered cell - UTRA Arfcn:%d CellId:%d Rscp:%d[/100dBm] EcNo:%d[/100dB] Rssi:%d[/100dB]
Line 1500:    >>QuantityConfigIndex:%d but to apply array, value -1 MeasObjectId:%d
Line 1505:    >>Error value of QuantityConfigIndex:%d forced set as 0 MeasObjectId:%d
Line 1546:    >>Change Freq:%d PBCH status as PBCH_NEED from complete
Line 1559:      ::Found fullBeam cell:%d Sofartotal:%d
Line 1574:      ::Found fullBeam cell:%d Sofartotal:%d
Line 1585:      ::Change Freq:%d PBCH status as PBCH_NEED from complete (fullBeamCells 0)
