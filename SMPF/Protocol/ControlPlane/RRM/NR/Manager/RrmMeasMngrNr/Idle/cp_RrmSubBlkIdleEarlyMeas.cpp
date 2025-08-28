Line 57: RrmSubBlkIdleEarlyMeas::Init
Line 62:    >>DecodeNrIdleMeas
Line 81:      ::CREATE NEW[%d] : FREQ %d FOR EARLY MEASURE ObjectId %d. START UPDATE
Line 86:      ::UPDATE EXIST[%d] : FREQ %d FOR EARLY MEASURE ObjectId %d. START UPDATE
Line 93:      ::INTER FREQ:NULL
Line 104:      ::Invalid FREQ MeasIdleCarrierNrBitMask %d, SSB_MEAS_CONFIG_MASK %d - NO SSB_MEAS, NO SIB4 INFO
Line 116:    >>END UPDATE NR EARLY MEASURE
Line 136:     :: MEAS_CELL_LIST_NR absent.
Line 146:      :: QUALITY_THRESHOLD absent.
Line 152:    >> ERROR!! NEED TO CHECK SIB DECODING 
Line 157:      :: START Candidate-F AS INTRA-F
Line 164:      :: EARLY MEASURE_ISPERFORM FALSE. DIFF WITH SIB2.
Line 170:      :: START Candidate-F AS INTER-F
Line 177:      :: EARLY MEASURE_ISPERFORM FALSE. DIFF WITH SIB4.
Line 201:      ::EARLY MEASURE EM_ISPERFORM %d, ReportQuantities %d, EM_FREQ %d, SIB_FREQ %d)
Line 224:      ::nrofSS_BlocksToAverage:%d(NroSsBlocksToAvgPresent:(bool)%d NroSsBlocksToAvg:%d)
Line 231:    >>AbsThreshSsBlocksConsolidationPresent:(bool)%d
Line 239:      ::AbsThresholdRsrp:%d(TOP:%d[/100dBm])
Line 245:      ::AbsThresholdRsrp:ABSENT((bool)%d)
Line 254:      ::AbsThresholdRsrq:%d(TOP:%d[/100dB])
Line 260:      ::AbsThresholdRsrq:ABSENT((bool)%d)
Line 269:      ::AbsThresholdSinr:%d(TOP:%d[/100dB])
Line 274:      ::AbsThresholdSinr:ABSENT((bool)%d)
Line 280:    >>AbsThreshSsBlocksConsolidationPresent:ABSENT(bool)%d
Line 290:      ::SMTC - Periodicity:%d[sf] Offset:%d[sf] Duration:%d[sf]
Line 296:      ::SsbToMeasure:present(SsbToMeasure:0x%08x %08x)
Line 320:       ::IdleRsrpThresholdNr:%d(%d[/100dBm])
Line 325:       ::IdleRsrpThresholdNr:ABSENT((bool)%d)
Line 333:       ::IdleRsrqThresholdNr:%d(%d[/100dBm])
Line 338:       ::IdleRsrqThresholdNr:ABSENT((bool)%d)
Line 354:      ::nrofSS_BlocksToAverage:%d(NroSsBlocksToAvgPresent:(bool)%d NroSsBlocksToAvg:%d)
Line 362:      ::nrofSS_BlocksToAverage:ABSENT(NroSsBlocksToAvgPresent:(bool)%d NroSsBlocksToAvg:%d)
Line 370:    >>AbsThreshSsBlocksConsolidationPresent:(bool)%d
Line 378:      ::AbsThresholdRsrp:%d(%d[/100dBm])
Line 384:      ::AbsThresholdRsrp:ABSENT((bool)%d)
Line 393:      ::AbsThresholdRsrq:%d(%d[/100dB])
Line 399:      ::AbsThresholdRsrq:ABSENT((bool)%d)
Line 408:      ::AbsThresholdSinr:%d(%d[/100dB])
Line 413:      ::AbsThresholdSinr:ABSENT((bool)%d)
Line 419:    >>AbsThreshSsBlocksConsolidationPresent:ABSENT(bool)%d
Line 449:       ::ss_RSSI_Measurement:present((bool)%d)
Line 456:    >>DecodeSsbToMeasure
Line 476:       ::SMTC - Periodicity:(enum)%d(%d[sf]) Offset:(%d[sf]) Duration:(enum)%d(%d[sf])
Line 490:      ::freqBandIndicatorNR:%d
Line 494:       ::rMsg.FrequencyBandList[0]:NULL
Line 511:       ::DecodeNeighCellList - [idnex] PCI RANGE Start %d, Range %d
Line 541:      ::CREATE NEW[%d] : EUTRA-F %d FOR EARLY MEASURE ObjectId %d. START UPDATE
Line 545:      ::UPDATE EXIST[%d] : EUTRA-F %d FOR EARLY MEASURE ObjectId %d. START UPDATE
Line 551:      ::EUTRA FREQ:NULL
Line 562:    >>END UPDATE EUTRA EARLY MEASURE
Line 569:    >>DecodeSib5_CarrierFreqEUTRA - MeasObjectId:%d
Line 594:      :: Do not EarlyMeas Diff with SIB Info. AllowedMeasBandwidth_IE %d Sib AllowedMeasBandwidth %d
Line 597:      :: IsPerformEarlyMeasEutra %d
Line 616:      :: MEAS_CELL_LIST_EUTRA absent.
Line 626:      :: QUALITY_THRESHOLD absent.
Line 646:       ::DecodeNeighCellListEutra - [idnex] PCI RANGE Start %d, Range %d
Line 667: 	   ::IdleRsrpThresholdNr:%d(%d[/100dBm])
Line 672: 	   ::IdleRsrpThresholdNr:ABSENT((bool)%d)
Line 680: 	   ::IdleRsrqThresholdNr:%d(%d[/100dBm])
Line 685: 	   ::IdleRsrqThresholdNr:ABSENT((bool)%d)
Line 730: 	 >>REMOVE InvalidFreq. NR Arfcn %d
Line 745: 	 >>REMOVE InvalidFreq. EUTRA Arfcn %d
Line 787:    >>SAVE EARLY MEASURE. NR Arfcn %d, CellId %d
Line 828:    >>SAVE EARLY MEASURE. EUTRA Arfcn %d, CellId %d
Line 849:      ::Found NR EARLY MEASURE RESULT Arfcn:%d CellId:%d - GetEarlyMeasResult RSRP %d RSRQ %d SINR %d TimingOffset %d
Line 860:      ::Not Found EARLY MEASURE RESULT
Line 875:    >>SIB2 doesn't received. Do performearlyMeas
Line 883:    >>Need to check that absent SIB info. Do performearlyMeas
Line 898:    >>FOUND DIFF EARLY MEASRUE - NrofSsBlocks %d, SIB:NrofSsBlocks %d)
Line 902:    >>NEED CHECK SIB:NrofSSBlocksToAveragePresent %d)
Line 916:    >>FOUND DIFF EARLY MEASRUE - ThresholdRsrqPresent %d ThresholdRsrq %d, SIB:ThresholdRsrqPresent %d ThresholdRsrq %d)
Line 920:    >>NEED CHECK ThresholdRsrpPresent %d SIB:ThresholdRsrpPresent %d)
Line 931:    >>FOUND DIFF EARLY MEASRUE - ThresholdRsrqPresent %d ThresholdRsrq %d, SIB:ThresholdRsrqPresent %d ThresholdRsrq %d)
Line 935:    >>NEED CHECK ThresholdRsrqPresent %d SIB:ThresholdRsrqPresent %d)
Line 946:    >>FOUND DIFF EARLY MEASRUE - ThresholdSinrPresent %d ThresholdSinr %d, SIB:ThresholdSinrPresent %d ThresholdSinr %d)
Line 950:    >>NEED CHECK ThresholdSinrPresent %d SIB:ThresholdSinrPresent %d)
Line 965:    >>FOUND DIFF EARLY MEASRUE - Periodicity %d Offset %d Duration %d, SIB:SmtcIncluded %d Periodicity %d, Offset %d, Duration %d)
Line 969:    >>NEED CHECK SIB:SmtcIncluded %d)
Line 979:    >>FOUND DIFF EARLY MEASRUE - ssbToMeasure[0] %d ssbToMeasure[1] %d DeriveSsbIndexFromCell %d, SIB:CarrierFreqInfo.SsbToMeasure[0] %d, SsbToMeasure[1] %d, DeriveSsbIndexFromCell %d)
Line 990:    >>CONFIG EARLY MEASURE %d
Line 1013:      ::Cell RSRP %d TH_RSRP %d Result %d EARLY MEASURE
Line 1022:      ::Cell RSRQ %d TH_RSRQ %d Result %d EARLY MEASURE
Line 1033:      ::Cell RSRP %d TH_RSRP %d Cell RSRQ %d TH_RSRQ %d Result %d EARLY MEASURE
Line 1051:      ::CheckPciRange_EarlyMeas - NR-F %d, CellId %d VALIDATION %d FOR PCI RANGE, EARLY MEASRUE_ISPERFORM %d.
Line 1067:      ::CheckEutraPciRange_EarlyMeas - EUTRA-F %d, CellId %d VALIDATION %d FOR PCI RANGE EARLY MEASRUE_ISPERFORM %d
Line 1086:      ::EUTRA Cell RSRP %d TH_RSRP %d Result %d EARLY MEASURE
Line 1095:      ::EUTRA Cell RSRQ %d TH_RSRQ %d Result %d EARLY MEASURE
Line 1106:      ::Cell RSRP %d TH_RSRP %d Cell RSRQ %d TH_RSRQ %d Result %d EARLY MEASURE
Line 1112:      ::VALID EUTRA CELL TO REPORT EARLY MEASURE
