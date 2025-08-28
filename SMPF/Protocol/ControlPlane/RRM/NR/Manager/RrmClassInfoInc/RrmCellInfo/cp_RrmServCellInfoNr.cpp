Line 48: RrmServCellInfoNr::RrmServCellInfoNr()
Line 58: RrmServCellInfoNr::~RrmServCellInfoNr()
Line 66: RrmServCellInfoNr::Initialize()
Line 150:    >>SetCellType - m_CellType set to %d
Line 167:      ::SetPresentServingCellConfigCommon(Arfcn:%d CellId:%d) - bPresent:(bool)%d
Line 174:      ::SetSsbPeriodicity - SsbPeriodicity set to %d
Line 185:      ::SetSsbPositionsInBurst - shortBitmap(0x%X)
Line 190:      ::SetSsbPositionsInBurst - mediumBitmap(0x%X)
Line 195:      ::SetSsbPositionsInBurst - longBitmap(0x%X%08X)
Line 200:      ::SetSsbPositionsInBurst - invalid ssbPositionsInBurst.ssbPositionsInBurst.choice(%d)
Line 219:      ::GetFirstValidScsSpecificCarrierList - Valid ScsSpecificCarrier found at %d
Line 224:      ::GetFirstValidScsSpecificCarrierList - Valid ScsSpecificCarrier not found!!!!
Line 241: RrmServCellInfoNr::SetCellSpecificInfo
Line 245:      ::SetCellSpecificInfo - pScellConfig is invalid
Line 253:      ::SCELL_INDEX_MASK(0x%08x) ScellConfigPresentBitmask(0x%08x %08x)
Line 258:        #ScellIndex set to %d
Line 262:        #SetCellSpecificInfo - SCELL_INDEX_MASK not present
Line 267:      ::SCELL_CONFIG_DEDI(0x%08x) ScellConfigPresentBitmask(0x%08x %08x)
Line 274:        #m_firstActiveDownlinkBwpId %d
Line 279:        #SetCellSpecificInfo - SCELL_CONFIG_DEDI not present
Line 284:      ::SCELL_CONFIG_COMMON_MASK(0x%08x) ScellConfigPresentBitmask(0x%08x %08x)
Line 290:      ::SCELL_CONFIG_DEDI(0x%08x) ScellConfigPresentBitmask(0x%08x %08x)
Line 297:      ::SERVINGCELLMO_MASK(0x%08x) ServingCellConfigPresentBitMask(0x%08x %08x)
Line 302:      ::pScellConfig->ScellConfigDedi.servingCellMo(%d)
Line 348:    >>[SET]MeasQuantityInfo RSRP:(bool)%d RSRQ:(bool)%d SINR:(bool)%d
Line 354:    >>[GET]MeasQuantityInfo RSRP:(bool)%d RSRQ:(bool)%d SINR:(bool)%d
Line 375:      ::InitSrchDoneCnt(m_SrchDoneCnt:%d->0)
Line 390:    >>IncSrchDoneCnt(m_SrchDoneCnt:%d)
Line 395: RrmServCellInfoNr::DeleteSibServCellInfo
Line 399:    >>Delete m_SibServCellInfo.pCellSelectionInfo
Line 406:    >>Delete m_SibServCellInfo.pServingCellConfigCommonSIB
Line 418:    >>pCellSelectionInfo:nullptr - Arfcn:%d CellId:%d
Line 430:    >>SetSibCellSelectionInfo - Arfcn:%d CellId:%d
Line 434:      ::TraceCellSelectionInfo - OLD
Line 439:      ::pCellSelectionInfo:nullptr - mem alloc
Line 445:    >>TraceCellSelectionInfo - NEW
Line 455:    >>pServingCellConfigCommonSIB:nullptr - Arfcn:%d CellId:%d
Line 467:    >>SetSibServingCellConfigCommonSIB - Arfcn:%d CellId:%d
Line 471:      ::TraceServingCellConfigCommonSIB - OLD
Line 476:      ::pServingCellConfigCommonSIB:nullptr - mem alloc
Line 484:    >>TraceServingCellConfigCommonSIB - NEW
Line 572:      ::ServingCellConfigCommon/SIB is absent - set default for Periodicity and SsbToMeasure
Line 596:      ::[AdaptiveIW]GetServingMeasResultInd: ServCellIdx(%d)Arfcn(%d)PhyCellId(%d)AdaptiveIW(isValid:(bool)%d Rsrp:%d)
Line 612:    >>Arfcn:%d CellId:%d ServCellIndex:%d antenna:%d - #%d SsbIndex:%d SsbRsrp:%d
Line 625:    >>CellSelectionInfo - QrxLevMin:%d[/100dBm] QrxLevMinSULPresent:(bool)%d QrxLevMinSUL:%d QrxLevMinOffset:%d[/100dB] QqualMin:%d[/100dB] QqualMinOffset:%d[/100dB]
Line 633:    >>ServingCellConfigCommonSIB - Pmax:%d[/100dBm] AdditionalPmaxPresent:(bool)%d AdditionalPmax:%d[/100dBm] DefaultDrxCycle:%d[ms]
Line 644:        #PHYS_CELL_ID_MASK(0x%08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
Line 649:          *PhyCellId(%d)
Line 653:          *SetCellSpecificInfo - PHYS_CELL_ID_MASK is not present
Line 658:        #DOWNLINK_CONFIG_COMMON_MASK(0x%08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
Line 664:          *ABSOLUTE_FREQUENCY_SSB_MASK(0x%08x) FrequencyInfoDlPresentBitmask(0x%08x %08x)
Line 672:          * Arfcn(%d), SsbAbsFreq(%d)
Line 678:          * SetCellSpecificInfo - ABSOLUTE_FREQUENCY_SSB_MASK is not present
Line 683:          *FREQUENCY_BAND_LIST_MASK(0x%08x) FrequencyInfoDlPresentBitmask(0x%08x %08x)
Line 690:          * BandId(%d)
Line 694:          * SetCellSpecificInfo - FREQUENCY_BAND_LIST_MASK is not present
Line 700: RrmServCellInfoNr::SetCellSpecificInfo - DOWNLINK_CONFIG_COMMON_MASK is not present
Line 705:        #FREQUENCY_INFO_UL_MASK(0x%08x) UplinkConfigCommonPresentBitmask(0x%08x %08x)
Line 712:          *SCS_SPECIFIC_CARRIER_LIST_MASK(0x%08x) UplinkConfigCommonPresentBitmask(0x%08x %08x)
Line 726:          * scsSpecificCarrierList[%d] isValid(%d), offsetToCarrier(%d), subCarrierSpacing(%d), carrierBandwidth(%d)
Line 731:          * SetCellSpecificInfo - SCS_SPECIFIC_CARRIER_LIST_MASK is not present
Line 737:          * SetCellSpecificInfo - FREQUENCY_INFO_UL_MASK is not present
Line 743:        #SSBSUBCARRIER_SPACING_MASK(0x%08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
Line 750:          * ssbSubcarrierSpacing(%d)
Line 754:          * SetCellSpecificInfo - SSBSUBCARRIER_SPACING_MASK is not present
Line 776:        #SSB_PERIODICITY_SERVINGCELL_MASK(0x%08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
Line 783:          * SsbPeriodicity(%d)
Line 787:          * SetCellSpecificInfo - SSB_PERIODICITY_SERVINGCELL_MASK is not present
Line 792:        #SSB_POSITION_IN_BURST_MASK(0x%08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
Line 799:          * ssbPositionsInBurst.choice(%d)
Line 803:          * SetCellSpecificInfo - SSB_POSITION_IN_BURST_MASK is not present
Line 809:          * SetCellSpecificInfo - SCELL_CONFIG_COMMON_MASK not present
Line 818: pServingCellConfigCommonSIB:nullptr - Arfcn:%d CellId:%d
