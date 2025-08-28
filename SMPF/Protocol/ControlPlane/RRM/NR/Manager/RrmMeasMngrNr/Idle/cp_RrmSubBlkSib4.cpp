Line 36: RrmSubBlkSib4::RrmSubBlkSib4()
Line 41: RrmSubBlkSib4::~RrmSubBlkSib4()
Line 46:    >>DecodeSib4
Line 60:      ::interFreqCarrierFreqList[%d] - PresentBitmask:0x%08x %08x
Line 72:        #dl_CarrierFreq:%d
Line 76:        #dl_CarrierFreq:ABSENT
Line 85:        #ssbSubcarrierSpacing:(enum)%d
Line 89:        #ssbSubcarrierSpacing:ABSENT
Line 95:        #Skip interFreq - duplicated with intraFreq
Line 101:      ::interFreqCarrierFreqList[%d] - MeasObjectId:CR_INTER(%d) is assigned
Line 106:        #INTER FREQ:NULL
Line 110:      ::Sib4PresentBitmask (0x%08x %08x)
Line 122:      ::DecodeSib4_sub_InterFreqCarrierFreqInfo - MeasObjectId:%d
Line 136:        #GetSibCarrierFreqInfo for Inter freq : TRUE
Line 147:        #dl_CarrierFreq:%d
Line 151:        #dl_CarrierFreq:ABSENT
Line 160:        #ssbSubcarrierSpacing:(enum)%d
Line 164:        #ssbSubcarrierSpacing:ABSENT
Line 169:        #INTER FREQ(MeasObjectId:%d) - BAND:%d ARFCN:%d SCS:(enum)%d
Line 175:        #INTER FREQ(MeasObjectId:%d) - sibInterFreqInfo
Line 227:        #DeriveSsbIndexFromCell:(bool)%d
Line 233:        #DeriveSsbIndexFromCell:ABSENT((bool)%d)
Line 237:        #INTER FREQ(MeasObjectId:%d) - CELL LIST
Line 248:        #interFreqCarrierFreqList_v16xy.InterFreqCarrierFreqInfov16xyPresentBitmask (0x%08x %08x) 
Line 258:        #UPDATE INTER FREQ(MeasObjectId:%d) - carrierFreqInfo
Line 262:        #UPDATE INTER FREQ(MeasObjectId:%d) - reselectionPriority:%d(ReselectionPrioritySIB:%d ReselectionSubPrioritySIB:%d)
Line 265:        #UPDATE INTER FREQ - Treselection:%d
Line 270:        #TreselectionSfPresent is vaild
Line 276:        #TreselectionSfPresent is not vaild
Line 278:        #UPDATE INTER FREQ - sfMedium(%d) sfHigh(%d)
Line 286:      ::DecodeSib4_InterFreqBlackCellList
Line 321: DecodeSib4_InterFreqWhiteCellList
Line 355:      ::DecodeSib4_InterFreqNeighCellList - MeasObjectId:%d
Line 375:        #InterFreqNeighCellInfo[%d] - PresentBitmask:0x%08x %08x
Line 387:        #physCellId:%d
Line 391:        #physCellId:ABSENT
Line 430:        #ADD CELL to INTER FREQ - ObjectId:%d SetType:UNIDLISTED((enum)%d) SCS:(enum)%d BAND:%d
Line 434:        #ADDED
Line 438:        #FAILED
Line 448:        #MOVE CELL to CANDILISTEDCELLSET - ObjectId:%d, PhyCellId:%d
Line 452:        #FAILED
Line 457:        #MOVE CELL to IDLISTEDCELLSET - ObjectId:%d, PhyCellId:%d
Line 461:        #FAILED
Line 469:      ::interFreqNeighCellList:ABSENT
Line 477:      ::DecodeSib4_sub_InterFreqNeighCellInfo
Line 487:        #physCellId:%d
Line 491:        #physCellId:ABSENT
Line 500:        #QoffsetCell:(enum)%d(%d[/100dB])
Line 505:        #QoffsetCell:ABSENT,DEFAULT(%d[/100dB])
Line 514:        #QrxLevMinOffsetCell:%d(%d[/100dB])
Line 520:        #QrxLevMinOffsetCell:ABSENT,DEFAULT(%d[/100dB])
Line 530:        #QrxLevMinOffsetCellSUL:%d(%d[/100dB])
Line 537:        #QrxLevMinOffsetCellSUL:ABSENT,DEFAULT(%d[/100dB])
Line 546:        #QqualMinOffsetCell:%d(%d[/100dB])
Line 552:        #QrxLevMinOffsetCell:ABSENT,DEFAULT(%d[/100dB])
Line 555:      ::UPDATE INTER NCELL - neighCellInfo
Line 563:      ::DecodeSib4_sub_freqBandIndicatorNR
Line 575:        #NrMultiBandInfoPresentBitmask:0x%08x %08x
Line 583:        #freqBandIndicatorNR:%d
Line 588:        #rIE.frequencyBandList.frequencyBandList[0]:NULL
Line 594:        #freqBandIndicatorNR:%d is present in SIB4
Line 598:        #freqBandIndicatorNR:%d is not present in SIB4
Line 606:      ::DecodeSib4_sub_SsBlocksParameter
Line 616:        #nrofSS_BlocksToAverage:%d(NroSsBlocksToAvgPresent:(bool)%d NroSsBlocksToAvg:%d)
Line 624:        #nrofSS_BlocksToAverage:ABSENT(NroSsBlocksToAvgPresent:(bool)%d NroSsBlocksToAvg:%d)
Line 632:        #AbsThreshSsBlocksConsolidationPresent:(bool)%d
Line 640:          *ThresholdRsrp:%d(%d[/100dBm])
Line 646:          *ThresholdRsrp:ABSENT((bool)%d)
Line 655:          *ThresholdRsrq:%d(%d[/100dB])
Line 661:          *ThresholdRsrq:ABSENT((bool)%d)
Line 670:          *ThresholdSinr:%d(%d[/100dB])
Line 675:          *ThresholdSinr:ABSENT((bool)%d)
Line 681:        #AbsThreshSsBlocksConsolidationPresent:ABSENT(bool)%d
Line 689:      ::DecodeSib4_sub_Smtc
Line 703:        #SMTC - Periodicity:(enum)%d(%d[sf]) Offset:(enum)%d(%d[sf]) Duration:(enum)%d(%d[sf])
Line 710:        #SMTC - ABSENT((bool)%d) Periodicity:%d[sf]
Line 718:      ::DecodeSib4_sub_SsbToMeasure
Line 731:        #SsbToMeasure:present(SsbToMeasure:0x%08x %08x)
Line 739:        #SsbToMeasure:ABSENT,DEFAULT(SsbToMeasure:0x%08x %08x) NumSsbToMeasure:%d
Line 747:      ::DecodeSib4_sub_SsRssiMeasurement
Line 755:        #ss_RSSI_Measurement:present((bool)%d)
Line 760:        #ss_RSSI_Measurement:ABSENT((bool)%d)
Line 768:      ::DecodeSib4_sub_Pmax
Line 772:        #PPowerClass:%d[/100dBm]
Line 779:        #Pmax:%d(%d[/100dBm])
Line 785:        #Pmax:ABSENT,DEFAULT(%d[/100dBm])
Line 793:      ::DecodeSib4_sub_ThreshX
Line 801:        #ThreshX_HighP:%d(%d[/100dBm])
Line 807:        #ThreshX_HighP:ABSENT,DEFAULT(%d[/100dBm])
Line 816:        #threshX_LowP:%d(%d[/100dBm])
Line 822:        #ThreshX_LowP:ABSENT(%d[/100dBm])
Line 835:        #ThreshX_HighQ:%d(%d[/100dB]) threshX_LowQ:%d(%d[/100dB])
Line 844:        #ThreshX_HighQ:ABSENT((bool)%d) threshX_LowQ:ABSENT((bool)%d)
Line 852:      ::DecodeSib4_sub_Qparameter
Line 859:        #QrxLevMin:%d(%d[/100dBm])
Line 864:        #QrxLevMin:%d(%d[/100dBm])
Line 874:        #QrxLevMinSUL:%d((bool)%d %d[/100dBm])
Line 879:        #QrxLevMinSUL:ABSENT((bool)%d)
Line 887:        #QqualMin:%d(%d[/100dBm])
Line 892:        #QqualMin:ABSENT,DEFAULT(%d[/100dBm])
Line 900:        #QoffsetFreq:%d(%d[/100dB])
Line 905:    >>QoffsetFreq:ABSENT,DEFAULT(%d[/100dB])
Line 913:      ::DecodeSib4_sub_ReselectionPriority
Line 921:        #ReselectionPrioritySIB:%d(%d)
Line 927:        #ReselectionPrioritySIB:ABSENT,DEFAULT(%d)
Line 936:        #ReselectionSubPrioritySIB:(enum)%d(%d)
Line 942:        #ReselectionSubPrioritySIB:ABSENT,DEFAULT(%d)
Line 950:      ::DecodeSib4_sub_TreselectionNR
Line 957:        #TreselectionSIB:%d(%d[s])
Line 962:        #TreselectionSIB:ABSENT,DEFAULT(%d[s])
Line 975:        #TreselectionSf:PRESENT,(bool)%d High:(enum)%d(%d[%%]) Medium:(enum)%d(%d[%%])
Line 982:        #TreselectionSf:ABSENT,(bool)%d
Line 990:      ::DecodeSib4_sub_Smtc2Lp
Line 997:        #Smtc2LpIncluded:PRESENT((bool)%d)
Line 1002:        #Smtc2LpIncluded:ABSENT((bool)%d)
Line 1040:        #Freq %d Disable EARLY MEASURE
