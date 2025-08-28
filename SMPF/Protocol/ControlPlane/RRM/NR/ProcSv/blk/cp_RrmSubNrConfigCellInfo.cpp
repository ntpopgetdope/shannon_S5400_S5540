Line 72:    >>CheckFixedCell - CellId(%d) Arfcn(%d)
Line 82:      ::rArfcn(%d) Arfcn(%d)
Line 85:      ::RegFIXEDCellId(%d) ConfigCellId(%d)
Line 88:      ::fail because different CellId
Line 93:      ::CheckFixedCell - CellId(%d) Arfcn(%d) success same CellId
Line 99:      ::unused CellId!
Line 105:      ::fail because different Arfcn rArfcn(%d) Arfcn(%d)
Line 112:      ::RegFIXEDCellId(%d) ConfigCellId(%d)
Line 115:      ::fail because different CellId
Line 120:      ::CheckFixedCell - CellId(%d) Arfcn(%d) success same CellId
Line 126:      ::unused CellId
Line 134:    >>CheckFixedFreq - Arfcn(%d)
Line 142:      ::CheckFixedFreq - rArfcn(%d) Arfcn(%d) Success!!!
Line 147:      ::fail because different Arfcn rArfcn(%d) Arfcn(%d)
Line 157:    >>IsBeamincludessbPositionsInBurst
Line 161:      ::true. ssbPositionsInBurstPresent is not present.
Line 166:      ::Is checking ssbPositionsInBurst - ssbPositionsInBurstPresent(%d) value_L(%d), ssbPositionsInBurst(0x%08X%08X), BeamIndex(%d)
Line 181:      ::ssbPositionsInBurst index(%d) ssbPositionsInBurst array(%d) remainder(%d) BeamIndex(%d)
Line 184:      ::true. There is a possibility that there is a target beam index in BeamIndex(%d) ssbPositionsInBurst.
Line 190:      ::false. There is not target beamindex in 64ea ssbPositionsInBurst. BeamIndex(%d)
Line 197:      ::true. There is target beamindex in 64ea ssbPositionsInBurst. _BeamIndex(%d)
Line 202:      ::false. There is not target beamindex in 64ea ssbPositionsInBurst. _BeamIndex(%d)
Line 211:      ::true. There is target beamindex in ssbPositionsInBurst.
Line 216:      ::false. There is not target beamindex in ssbPositionsInBurst.
Line 224:    >>IsCheckBeamResultincludessbPositionsInBurst
Line 228:      ::true. ssbPositionsInBurstPresent is not present.
Line 233:      ::Is checking ssbPositionsInBurst - ssbPositionsInBurstPresent(%d) value_L(%d), ssbPositionsInBurst(0x%08X%08X), BeamIndex(%d)
Line 237:      ::true. There is target beamindex in ssbPositionsInBurst. _BeamIndex(%d) NRRRM_BITMAP_CHECK_IDX_COMMON
Line 242:      ::false. There is not target beamindex in ssbPositionsInBurst. _BeamIndex(%d) NRRRM_BITMAP_CHECK_IDX_COMMON
Line 249:    >>GetCellResultInfo
Line 273: 	  ::can not select because FreqBarred
Line 283: 	  ::can not select BarredCell
Line 293: 	  ::can not select in CheckFixedCell
Line 317:      ::Get HypoFO(%d) TargetCellId(%d)
Line 327:    >> try for NextSelectedHypoFO on GetCellResultInfo
Line 340:    >>SetCellResultInfo
Line 370:      ::modify TargetCellId(%d) Info
Line 404:      ::set TargetCellId(%d)
Line 411:    >>GetFirstTargetCell
Line 432:      ::can not select because FreqBarred
Line 442:      ::can not select BarredCell cellid(%d)
Line 453:      ::can not select in CheckFixedCell
Line 480:      ::iterNrCellResultInfo->CellId(%d)
Line 489:    >>Empty CellInfo
Line 495:    >>GetNextTargetCell
Line 523:      ::can not select and init hypo list because FreqBarred(%d)
Line 534:      ::can not select BarredCell cellid(%d)
Line 545:      ::can not select in CheckFixedCell
Line 571:      ::iterNrCellResultInfo->CellId(%d)
Line 577:      ::No CellInfo
Line 584: 	  ::Empty CellInfo
Line 591:      ::GetSsbMeasResultInfo
Line 606:        #found TargetCellId(%d) Info
Line 615:      ::It is not finding TargetCellId(%d) Info
Line 627:        #Get Meas Result Info for BeamIndex(%d)
Line 632:      ::Empty SsbMeasResultInfo
Line 638:    >>SetSsbMeasResultInfo
Line 653:      ::find TargetCellId(%d) Info
Line 662:      ::It is not finding TargetCellId(%d) Info
Line 676:      ::modify BeamIndex(%d) Info
Line 686:      ::pSsbMeasResultNr is NULL
Line 691:      ::set BeamIndex(%d)
Line 699:    >>CheckBlindDetectionCellResultInfo
Line 714:      ::Blind detection done, CellId(%d)
Line 727:    >>GetSsbMeasResultInfo
Line 742:      ::find TargetCellId(%d) Info
Line 751:      ::It is not finding TargetCellId(%d) Info
Line 768:      ::Empty SsbMeasResultInfo
Line 775:    >>GetFirstSsbMeas
Line 790:      ::find TargetCellId(%d) Info
Line 799:      ::It is not finding TargetCellId(%d) Info
Line 807:      ::GetFirstSsbMeas(%d) Info
Line 815:    >>GetNextSsbMeas
Line 830:      ::find TargetCellId(%d) Info
Line 839:      ::It is not finding TargetCellId(%d) Info
Line 854:      ::GetNextSsbMeas(%d) Info
Line 859:      ::No SsbMeasInfo
Line 866: 	>>No SsbMeasInfo because end
Line 872:    >>GetNextSsbMeas
Line 887:      ::find TargetCellId(%d) Info
Line 896:      ::It is not finding TargetCellId(%d) Info
Line 912:      ::GetNextSsbMeas(%d) Info
Line 917:      ::No SsbMeasInfo because end
Line 923:    >>GetNextSsbMeas
Line 938:      ::find TargetCellId(%d) Info
Line 947:      ::It is not finding TargetCellId(%d) Info
Line 970:      ::GetNextSsbMeas(%d) Info
Line 976:      ::End SsbMeasInfo
Line 984:      ::No SsbMeasInfo because end
Line 991:    >>SortCellResult
Line 995:      ::NrCellSrchPbdDb.HypoFoListNum(%d)
Line 998:      ::[%d]HypoFO(%d)
Line 1014:    >>CheckValidHighestIntraNCell
Line 1026:      [AdaptiveIW]::TargetArfcn(%d) TargetCellId(%d) TargetScs(%d)
Line 1032: 	  [AdaptiveIW]::PrevServArfcn(%d) PrevServCellId(%d) PrevServScs(%d)
Line 1053: 	  [AdaptiveIW]::empty IntraFreqInfo
Line 1066: 	  [AdaptiveIW]::Intra-F NCell Found at IDLISTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 1078: 	  [AdaptiveIW]:Intra-F NCell Found at IDDETECTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 1095:      [AdaptiveIW]::Intra-F HO to Intra-F NCell is being progressed... Set isValidHighestIntraNCellRsrp to TRUE
Line 1104:      [AdaptiveIW]::Search in InterFreqInfo
Line 1117:      [AdaptiveIW]::IDLISTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 1120:      [AdaptiveIW]::Neighbor Cell exist at Target Frequency(Prev Inter-F Neighbor cell list (IDLISTEDCELLSET))
Line 1130:      [AdaptiveIW]::IDDETECTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 1133:      [AdaptiveIW]::Neighbor Cell exist at Target Frequency(Prev Inter-F Neighbor cell list (IDDETECTEDCELLSET))
Line 1154:      [AdaptiveIW]::Neighbor cell(%d) found from CellSrchPbdDb. Set isValidHighestIntraNCellRsrp to TRUE
Line 1167:      [AdaptiveIW]::There is no Neighbor intra-F cell. Set isValidHighestIntraNCellRsrp to FALSE
Line 1216:    >>GetSsbBitmap - ssbPositionsInBurstPresent:(bool)%d rNumSsbIndex:%d rSsbBitmap:0x%08X %08X
Line 1222:    >>GetBestResultPerBeamIndex
