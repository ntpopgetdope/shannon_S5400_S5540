Line 60:    >>ReverseBitOrderSsbBitmap : LenSsbBitmap (%d), SsbBitmap (0x%08X %08X), ReversedSsbBitmap (0x%08X %08X)
Line 101:      ::GetMaxNrOfSsbForArfcn : invalid ARFCN (%d)
Line 133:    >>ShortBitmap SsbBitmap:0x%08x %08x
Line 154:    >>MediumBitmap SsbBitmap:0x%08x	%08x
Line 178:    >>LongBitmap SsbBitmap:0x%08x %08x
Line 182: Convert_struct_SsbToMeasure - invalid Choice:(enum)%d
Line 191:    >>Reversed SsbBitmap:0x%08x %08x
Line 208:      :: Abort L1 filtering - SourceValue:(ptr)0x%08X, L1FilterLen:%d
Line 252:      :: Abort L1 filtering, There is no proper Min value in source array, return array[0] value(%d)
Line 304:      ::GetL1FilteredVal: LinearAvg[%d] --> Wrong value detected set LinearAvg as 0
Line 356:      ::GetL1FilteredVal: Abnormal data FirstStoredAvg %d FirstStep %d SecondStep %d
Line 639:    >>EventTriggerResult: %s (MeasId:%d CellId:%d Arfcn:%d Rat:%d Status:%d EventId:%d)
Line 644:      ::TimeToTriggerResult: %s (MeasId:%d CellId:%d Arfcn:%d Rat:%d Status:%d)
Line 652:      ::MeasScheduleInfo - ObjectId:%d LastMeas[0]:%d(ms) LastMeas[1]:%d(ms) LastSrch:%d(ms) MeasCycle[0]:%d(ms) MeasCycle[1]:%d(ms)
Line 656:      ::                   - SrchCycle:%d(ms) MeasRequirement0:%d(ms) MeasRequirement1:%d(ms) SrchRequirement:%d(ms) ScheduleOngoing:%d LastMeasType:%d PreSchedule:%d
Line 683:    >>GetCurStateId(%d) is not available
Line 687:    >>curMeasState(%d(%d))(%s), targetMeasState(%d)(%s)
Line 691:    >>Skip RRM_RRM_MEAS_STATE_REQ curMeasState(%d(%d))(%s), targetMeasState(%d)(%s)
Line 1315: Unexpected BandId:%d
Line 1319:      ::GetDuplexModeForBandId - BandId:%d duplexMode:%s((enum)%d)
Line 1327:    >>GetSymbolLength - SCS:(enum)%d
Line 1355:    >>Unexpected TargetSubCarrierSpacing:%d(enum) Set SymbolLength:%d
Line 1369:    >>GetDefaultSsbToMeasure - NumSsbToMeasure:%d
Line 1388:    >>Invalid NumSsbToMeasure:%d
Line 1397:      ::GetDefaultSsbToMeasure - NumSsbToMeasure:%d SsbToMeasure:0x%08x %08x
Line 1405:    >>ConvertSsbPositionsInBurst - InOneGroup:%d GroupPresence:%d NumSsbToMeasure:%d
Line 1414:    >>reversedInOneGroup:%d reversedGroupPresence:%d
Line 1421:      ::SSB_SHORT - SsbBitmap:0x%02X
Line 1426:      ::SSB_MEDIUM - SsbBitmap:0x%02X
Line 1442:    >>SSB_LONG - SsbBitmap:0x%08x %08x
Line 1447:    >>Invalid NumSsbToMeasure:%d
Line 1455:    >>converted ssbToMeasure:0x%08x %08x
Line 1533:      ::ConvertSsbPositionsInBurst - invalid Choice:(enum)%d
Line 1553:      ::ConvertSsbPositionsInBurst::bitmapLength:%d, SsbBitmap:0x%08x%08x, ConvertedSsbBitmap:0x%08x%08x
Line 1597: ConvertSmtc1 - invalid PeriodicityAndOffsetChoice:(enum)%d
Line 1626: ConvertSmtc1 - invalid Duration:(enum)%d
Line 1653:    >>BandId:%d SsbFrequency:%d SubcarrierSpacing:(enum)%d Periodicity:%d[ms]
Line 1656:    >>NumSsbToMeasure:%d SsbToMeasure:[1]0x%08x[0]0x%08x
Line 1659:    >>SmtcIncluded:(bool)%d Smtc.Offset:%d[ms] Smtc.Duration:%d[ms] SsRssiMeasurementIncluded:(bool)%d
Line 1701:    >>periodicityInMs:%d ePeriod:(NrRrcDb_PeriodicityAndOffset_Choice_e)%d
Line 1742:    >>periodicityInMs:%d ePeriod:(NrRrcDb_ServingCellConfigCommonSsbPeriodicityServingCell_e)%d
Line 1782:    >>periodicityInMs:%d ePeriod:(enum)%d
Line 1822:    >>ePeriod:(enum)%d => ePeriodServingCell:(enum)%d
Line 1852:      ::GetTimeDiff - CurTime:%d[ms] Target Time:%d[ms] TimeDiff:%d[ms] + AddExtra:%d[ms]
Line 1874: Invalid Access. Set Default Periodicity 80(ms)
Line 1940:      ::L1Searched beam - SSB ARFCN:%d CellId:%d Corr:%d BeamTimingOffset:%d RxBeamIdx:%d SortedIndex:%d
Line 1960:      ::L3Filtered beam - SSB Arfcn:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
Line 1981:      ::L3Filtered beam - CSI-RS MO:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
Line 2044:      ::L3Filtered cell - SSB RxAnt:%d Arfcn:%d CellId:%-3d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
Line 2065:      ::L3Filtered cell - CSI-RS RxAnt:%d MO:%d CellId:%-3d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
Line 2218: Invalid Periodicity %d. Set default sf20.
Line 2289:      ::MeasCycleSCellInMs:%d MeasCycleSCellEnum:(NrRrcDb_MeasCycleSCellV1530_e)%d
Line 2327:      ::SMTC2 periodicityInMs:%d ePeriod:(NrRrcDb_SsbMtc2_Periodicity_e)%d
Line 2365: 	>>Unexpected SsbPeriod:%d(enum) Set Default SsbSampleMax
Line 2369:      ::GetSsbSampleMax (enum to sample) SsbPeriod:%d(enum) SelectedSsbSampleMax:%d
Line 2407: 	>>Unexpected SsbPeriod:%d[ms] Set Default SsbSampleMax
Line 2411:      ::GetSsbSampleMax (ms to sample) - SsbPeriod:%d[ms] SelectedSsbSampleMax:%d
Line 2429: GetEutraRescheduleType - LastSrchTime:%d SrchDiff:%d LastMeasTime:%d MeasDiff:%d
Line 2458: 	>>Check LastMeasType:%d SrchDiff:%d MeasDiff:%d 
Line 2480: Wrong Enum value detected in ConvertEnumToValueForTTT function:%d(enum) set TTT ms as 320 to make default value
Line 2536: GetRsrpThreshForCellPruning::Invalid SubCarrierSpacing(%d)
Line 2622: Convert_enum_PciRange - invalid ePciRange:(enum)%d
Line 2651: NrCellSrchPbdDb_t::InitHypoFo
Line 2693:      ::GetSelectedHypoFoIndex(%d) - HypoFoListNum:%d, SelectedHypoFoIndex:%d, SelectedHypoFO:%d
Line 2700:      ::SetSelectedHypoFO - HypoFO:%d
Line 2712:      ::SetHypoFoListNum - HypoFoListNum:%d
Line 2727:      ::AddHypoFO - HypoFO:%d, SelectedHypoFO:%d, HypoFoListNum:%d
Line 2733:        #HypoFoList[%d] exists
Line 2744:      ::Add HypoFoList[%d] - HypoFO:%d, HypoFoListNum:%d
Line 2757:      ::SetNextSelectedHypoFO
Line 2785:        #HypoFoListIndex(%d) is the last - HypoFoListNum:%d
Line 2799:      ::ResultsSsbIndex[%d]
Line 2802:        #MeasResultServingCell.MeasResult.RsIndexResults.ResultsSsbIndex.SsbResultsPresent:%d, SsbIndex:%d
Line 2807:        #MeasResultServingCell.MeasResult.RsIndexResults.ResultsSsbIndex.SsbResults.RsrpPresent:%d, RsrqPresent:%d, SinrPresent:%d
Line 2812:        #MeasResultServingCell.MeasResult.RsIndexResults.ResultsSsbIndex.SsbResults.Rsrp:%d, Rsrq:%d, Sinr:%d
Line 2817:      ::ResultsCsiRsIndex[%d]
Line 2820:        #MeasResultServingCell.MeasResult.RsIndexResults.ResultsCsiRsIndex.CsiRsResultsPresent:%d, CsiRsIndex:%d
Line 2825:        #MeasResultServingCell.MeasResult.RsIndexResults.ResultsCsiRsIndex.CsiRsResults.RsrpPresent:%d, RsrqPresent:%d, SinrPresent:%d
Line 2830:        #MeasResultServingCell.MeasResult.RsIndexResults.ResultsCsiRsIndex.CsiRsResults.Rsrp:%d, Rsrq:%d, Sinr:%d
Line 2843:      ::ResultsSsbIndex[%d]
Line 2846:        #MeasResultBestNeighCell.MeasResult.RsIndexResults.ResultsSsbIndex.SsbResultsPresent:%d, SsbIndex:%d
Line 2851:        #MeasResultBestNeighCell.MeasResult.RsIndexResults.ResultsSsbIndex.SsbResults.RsrpPresent:%d, RsrqPresent:%d, SinrPresent:%d
Line 2856:        #MeasResultBestNeighCell.MeasResult.RsIndexResults.ResultsSsbIndex.SsbResults.Rsrp:%d, Rsrq:%d, Sinr:%d
Line 2861:      ::ResultsCsiRsIndex[%d]
Line 2864:        #MeasResultBestNeighCell.MeasResult.RsIndexResults.ResultsCsiRsIndex.CsiRsResultsPresent:%d, CsiRsIndex:%d
Line 2869:        #MeasResultBestNeighCell.MeasResult.RsIndexResults.ResultsCsiRsIndex.CsiRsResults.RsrpPresent:%d, RsrqPresent:%d, SinrPresent:%d
Line 2874:        #MeasResultBestNeighCell.MeasResult.RsIndexResults.ResultsCsiRsIndex.CsiRsResults.Rsrp:%d, Rsrq:%d, Sinr:%d
Line 2888:      ::ResultsSsbIndex[%d]
Line 2891:        #MeasResultNeighCells.MeasResult.RsIndexResults.ResultsSsbIndex.SsbResultsPresent:%d, SsbIndex:%d
Line 2896:        #MeasResultNeighCells.MeasResult.RsIndexResults.ResultsSsbIndex.SsbResults.RsrpPresent:%d, RsrqPresent:%d, SinrPresent:%d
Line 2901:        #MeasResultNeighCells.MeasResult.RsIndexResults.ResultsSsbIndex.SsbResults.Rsrp:%d, Rsrq:%d, Sinr:%d
Line 2906:      ::ResultsCsiRsIndex[%d]
Line 2909:        #MeasResultNeighCells.MeasResult.RsIndexResults.ResultsCsiRsIndex.CsiRsResultsPresent:%d, CsiRsIndex:%d
Line 2914:        #MeasResultNeighCells.MeasResult.RsIndexResults.ResultsCsiRsIndex.CsiRsResults.RsrpPresent:%d, RsrqPresent:%d, SinrPresent:%d
Line 2919:        #MeasResultNeighCells.MeasResult.RsIndexResults.ResultsCsiRsIndex.CsiRsResults.Rsrp:%d, Rsrq:%d, Sinr:%d
