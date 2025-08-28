Line 113: ##[NR_POS] Unsupported Method
Line 129: ##[NR_POS] Unsupported Method
Line 174: ##[NR_POS] Error Check Res Idx!
Line 194: ##[NR_POS] Error Check ResSet Idx!
Line 217: ##[NR_POS] Error Check Trp Idx!
Line 243: ##[NR_POS] Error Check Freq Idx!
Line 273: ##[NR_POS] Error SelectedPrsList absent for method(%x), No FreqLayer configured in AssistData!
Line 295: ##[NR_POS] RequestPrsMeasurement: PendingMeasure(0x%x)
Line 307: ##[NR_POS] MeasReqValidation: UnSupported RAT
Line 314: ##[NR_POS] MeasReqValidation: UnSupported Method
Line 360: ##[NR_POS] Ref validated : ResId(%d), ResIdx(%d)
Line 370: ##[NR_POS] AssistDataValidation: Ref PRS Resource Set missing in PRS AssistData
Line 390: ##[NR_POS] Ref validated : ResId(%d), ResIdx(%d)
Line 398: ##[NR_POS] AssistDataValidation: TRP Resource Set missing in PRS AssistData
Line 407: ##[NR_POS] AssistDataValidation: PRS Ref Config Missing(Cross validation fail)
Line 444: ##[NR_POS] Ref validated : ResId(%d), ResIdx(%d), RefResIdx(%d)
Line 452: ##[NR_POS] AssistDataValidation: Ref PRS missing in PRS AssistData
Line 477: ##[NR_POS] Ref validated : ResId(%d), ResIdx(%d), RefResIdx(%d)
Line 485: ##[NR_POS] AssistDataValidation: Ref PRS missing in PRS AssistData
Line 496: ##[NR_POS] AssistDataValidation: Ref PRS missing in PRS AssistData
Line 513: ##[NR_POS] Ref validated : RefFreqIdx(%d), RefTrpIdx(%d), RefResSetIdx(%d)
Line 542: ##[NR_POS] AssistDataValidation: Configured RefCell(%d, %d) != SpCell(%d, %d)
Line 567: ##[NR_POS] AssistDataValidation: SpCell(%d, %d) not having PRS Resource set in PRS AssistData
Line 576: ##[NR_POS] AssistDataValidation: SpCell missing in PRS AssistData
Line 775: ##[NR_POS] AssistDataValidation: PRS AssistData Missing
Line 839: ##[NR_POS] MutePatterns: PrsResourceSet_Id(%d): MutingOpt1Present(%d), MutingOpt1Bitmap(0x%x), MutingOpt2Present(%d), MutingOpt2Bitmap(0x%x),
Line 884: ##[NR_POS] ++Configured: FreqIdx(%d), TrpIdx(%d), ResSetIdx(%d) ResIdx(%d) PrsDesc(0x%08X)
Line 900: ==============================DL PRS ASSISTANCE DATA=================================
Line 903: ##[NR_POS] >> PosMethod(0x%x), RepAmount(%d), RepInterval(%d), EarlyRespTime(%d), RsType(%d), NumPosFreqLyr(%d) 
Line 907: ##[NR_POS] 		>> [REF] RefPrsId(%d), RefPrsResSetId(%d), RefNumPrsRes(%d), RefScs(%d)
Line 910: ##[NR_POS] 		>> [REF] RefPrsResIdBm(0x%08X%08X), RefPrsResIdxBm(0x%08X%08X) 
Line 915: ##[NR_POS] 	>>Freq: BandId(%d), Scs(%d), PointA(%d), StartPRB(%d), CombSizeN(%d), CyclicPrefix(%d)
Line 917: ##[NR_POS]	>>Freq: ResourceBandwidth(%d), NumTrps(%d)
Line 920: ##[NR_POS]	>>Freq: TrpConfiguredBm(0x%08X%08X), TrpMeasuredBm(0x%08X%08X)
Line 926: ##[NR_POS] 		>>Trp: PrsId(%d), CellId(%d), Arfcn(%d), Sfn0SfnOffset(%d)
Line 928: ##[NR_POS]		>>Trp: Sfn0SubFrameOffset(%d), ExpRstd(%d), ExpRstdUncertainity(%d), NumPrsResourceSet(%d)
Line 930: ##[NR_POS]		>>Trp: ResSetConfiguredBm(0x%X), ResSetMeasuredBm(0x%X)
Line 936: ##[NR_POS] 			>>ResSet: PrsResSetId(%d), Periodicity(%d), ResSetSlotOffset(%d), RepFactor(%d), ResTimeGap(%d), NumSymbols(%d)
Line 938: ##[NR_POS]			>>ResSet: MutingOpt1Present(%d), MutingOpt1RepFactor(%d), MutingOpt2Present(%d)
Line 940: ##[NR_POS]			>>ResSet: MutingOpt1Bitmap(0x%08X), MutingOpt2Bitmap(0x%08X)
Line 942: ##[NR_POS] 			>>ResSet: NumPrsRes(%d), ResConfiguredBm(0x%08X%08X)
Line 945: ##[NR_POS] 			>>ResSet: ResMeasuredBm(0x%08X%08X), RepetConfiguredBm(0x%08X%08X)
Line 951: ##[NR_POS] 				>>Res: PrsResId(%d), ScrambId(%d), CombSizeN(%d), ReOffset(%d), ResSlotOffset(%d), ResSymbOffset(%d)
Line 953: ##[NR_POS] 				>>Res: PosMethRequestedBm(0x%x), PosMeasRequestedBm(0x%x), PrsDescriptor(0x%08X), ResSlotOffset_ref(%d)
Line 955: ##[NR_POS] 				>>Res: RepetScheduledBm(0x%08X%08X)
Line 967: ##[NR_POS] MultiRtt: RequestedMeasBm(0x%x), AssistAvailable(%d), MaxDlPrsRxTxTimeDiffPerTrp(%d), TimingReportingGranularityFactor(%d), AdditionalPathRequested(%d)
Line 975: ##[NR_POS] DlAod: RequestedMeasBm(0x%x), AssistAvailable(%d), MaxDlPrsRsrpPerTrp(%d)
Line 984: ##[NR_POS] DlTdoa: RequestedMeasBm(0x%x), AssistAvailable(%d), MaxDlPrsRstdPerTrpPair(%d), TimingReportingGranularityFactor(%d), AdditionalPathRequested(%d)
Line 986: ==============================DL PRS ASSISTANCE DATA=================================
Line 1000: ##[NR_POS] DetermineOptimalGapPerFreqLayer: FreqIdx(%d), Arfcn(%d), CandidateMeasRep(%d ms)
Line 1044: ##[NR_POS] >> ResSlotoff_ref(%d), ResPer(%d), RepIdx(%d), ResTimeGap(%d), MinGapSlotOffset(%d), MaxGapSlotOffset(%d) 
Line 1065: ##[NR_POS] >> ResSlotoff_ref(%d), ResPer(%d), RepIdx(%d), ResTimeGap(%d), MinGapSlotOffset(%d), MaxGapSlotOffset(%d) 
Line 1066: ##[NR_POS] >> i(%d), ResSlotoff1(%d), Mgl(%d)
Line 1087: ##[NR_POS] DetermineOptimalGapPerFreqLayer: CandidateMeasRep(%d ms) Rejected
Line 1111: ##[NR_POS] Gap Propose: Arfcn(%d), MeasRep(%d ms),  MeasOffset(%d), MeasLength(%d)
Line 1146: ##[NR_POS] CheckGapDuration: ResSlotOff(%d slots), ResPer(%d slots),  GapStartSlotn(%d), GapEndSlotn(%d), GapPossible(%d)
Line 1160: ##[NR_POS] CheckGapSufficientPerFreqLayer: FreqIdx(%d) Arfcn(%d)
Line 1237: ##[NR_POS] GapCheck: No InterFreq Layer configured/To be measured, GAP not needed
Line 1267: ##[NR_POS] GapCheck: Configured GAP is sufficient
Line 1344: ##[NR_POS] Add Meas element >Freq: FreqLyrId(%d), Scs(%d), PointA(%d), StartPRB(%d), NumPRBs(%d), MeasBw(%d)
Line 1346: ##[NR_POS] Add Meas element >Freq: MeasElem_p(0x%x), CombSizeN(%d), CyclicPrefix(%d), ResourceBandwidth(%d), NumTrps(%d)
Line 1356: ##[NR_POS] Add Meas element 	>>Trp: PrsId(%d), Arfcn(%d), Pci(%d), Sfn0SfnOffset(%d) Sfn0SubFrameOffset(%d) NumPrsResourceSet(%d)
Line 1366: ##[NR_POS] Add Meas element 		>>>ResSet: PrsResSetId(%d), Periodicity(%d), ResSetSlotOffset(%d), RepFactor(%d) ResTimeGap(%d) NumSymbols(%d)
Line 1368: ##[NR_POS] Add Meas element 		>>>ResSet: MutingOpt1Bitmap(0x%08x), MutingOpt2Bitmap(0x%08x), NumPrsRes(%d)
Line 1378: ##[NR_POS] Add Meas element 		>>>>Res: PrsResId(%d), ScrambId(%d), CombSizeN(%d), ReOffset(%d) ResSlotOffset(%d) ResSymbOffset(%d)
Line 1380: ##[NR_POS] Add Meas element 		>>>>Res: PosMethRequestedBm(0x%x), PosMeasRequestedBm(0x%x), PrsDescriptor(0x%08x), ResSlotOffset_ref(%d)
Line 1409: Wrong Rat Type
Line 1432: ##[NR_POS] AddMeasInfo : ++NewElem(0x%x) -> NeighList : Size(%d)
Line 1460: ##[NR_POS] CalcPrsMeasBw PtA_arfcn(%u) PtA_Freq(%u) Prs_Scs(%d)
Line 1469: ##[NR_POS] CalcPrsMeasBw StartPRB(%u) nPRB(%u) FreqStart(%u) FreqEnd(%u)
Line 1473: ##[NR_POS] CalcPrsMeasBw INVALID!StartPRB(%u) ResBw(%u)
Line 1478: ##[NR_POS] CalcPrsMeasBw MeasBWFreqStart(%u) MeasBWFreqEnd(%u) BwInFreq(%u)
Line 1483: ##[NR_POS] CalcPrsMeasBw MeasBW_ceiled(%u) CenterFreq(%u) CenterArfcn(%u)
Line 1488: ##[NR_POS] Invalid PRS SCS (%d)
