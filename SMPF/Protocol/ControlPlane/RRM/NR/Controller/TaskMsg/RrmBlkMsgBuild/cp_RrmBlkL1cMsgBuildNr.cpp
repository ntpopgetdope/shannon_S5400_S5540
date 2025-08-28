Line 65:    >>Build_L1C_RRM_ALL_STOP_REQ
Line 72:    >>pArg is nullptr
Line 80:    >>L1C_RRM_AS_STATE_IND - State:%d
Line 87:    >>pArg is nullptr
Line 97:    >>DstRat:%d, SrcRat:%d, avail_time:%d, start_time:%d
Line 103:    >>Build_L1C_RRM_BPLMN_STOP_REQ
Line 111:    >>pArg is nullptr
Line 124:    >>DstRat:%d, SrcRat:%d, avail_time:%d, StartTime:%d, CgiConfigNr:%d
Line 138:    >>pArg is nullptr
Line 147:    >>DrxAvailable:%d(bool), PendingCause:%d(enum) RemainTime:%d[ms], MeasReserved:%d
Line 155:    >>pArg is nullptr
Line 165:    >>IsFeDvOn:%d
Line 176:    >>pArg is nullptr
Line 188:    >>FreqScanReq Param: BAND - band:%d scs:%d
Line 197:    >>FreqScanReq Param: ARRAY - [%d] band:%d scs:%d freq:%d
Line 207:    >>FreqScanReq Param: INTERVAL - band:%d scs:%d freq(start:%d end:%d step%d) IslinearStepSize:(bool)%d
Line 213:    >>FreqScanReq Param: INVALID FreqListType(%d)
Line 218:    >>FreqScanReq Param: NumBlackFreq(%d)
Line 222:      ::FreqScanReq Param: BlackFreqList[%d](%d)
Line 237:    >>Build_L1C_RRM_IMS_SERVICE_STATUS_IND
Line 243: 	>>MsgGrpId(%d), NrImsStatus(%d), RxModeCtrl(%d)
Line 248:    >>Build_L1C_RRM_GAP_CONFIG_REQ
Line 269:    >> NumSsbIndex:%d(FR2)
Line 275:    >> NumSsbIndex:%d(FR1)
Line 368:    >>GapSetupReleaseChoice:(bool)%d NsaConfig:(bool)%d GapType:(enum):%d
Line 373:      ::NsaGap - NsaMeasGapPattern:%d GapOffset:(enum)%d Fr1Gap:(enum)%d Mgta:(enum)%d
Line 378:      ::NrGap - GapOffset:%d Mgl:(enum)%d Mgrp:(enum)%d Mgta:(enum)%d
Line 391:    >>pArg is nullptr
Line 401:    >> RAT:(enum)%d, Band:%d, SsbFrequency:%d, SsbPeriodicity:%d[ms], SsbScs:(enum)%d, NumSsbMeasInput:%d, RxBeamIdx(%d)
Line 403:    >> AgcGain0(%d), AgcGain1(%d), Lmax(%d)
Line 404:    >> ssbPositionsInBurst(0x%08X%08X)
Line 405:    >> HypoFO(%d), CgiConfigNr:(enum)%d, SaMcgWithSrch:%d
Line 409:      ::[%d]CellId:%d, BeamTimingOffset:%d, BeamIndex:%d
Line 418:    >>pArg is nullptr
Line 428:    >> RAT:(enum)%d, Band:%d, SsbFrequency:%d, SsbPeriodicity:%d[ms], SsbScs:(enum)%d, BlindHoSrchMode %d
Line 430:    >> EnableSpecificCellId:(bool)%d, SpecificCellId:%d, EnableSpecifiHypoFO:(bool)%d, SpecifiHypoFO:%d, CgiConfigNr:(enum)%d
Line 438:    >>pArg is nullptr
Line 454:      ::MeasType:%s(%d), ObjectId:%d, AgcGain:[0]%d[1]%d
Line 458:      ::EutraConfig - AllowedMeasBandwidth:(enum)mbw%d, CarrierFreq:%d
Line 460:      ::NumSsbMeasInput:%d
Line 469:        #EutraMeasInput[%d] - CpType:%d, CellIndexEutra:%d, PhysCellId:%d, CellIndividualOffset:%d, TimingOffset:%d
Line 475:      ::MeasType:%s(%d) ObjectId:%d CarrierFreq:%d
Line 477:      ::NumUtraMeasInput:%d
Line 484:        #UtraMeasInput[%d] - CellIndex:%d PhysCellId:%d TimingOffset:%d
Line 492:      ::MeasType:%s(%d), ObjectId:%d, RsType:%s(%d), AgcGain:[0]%d[1]%d
Line 501:      ::SsbConfig - BandId:%d, SsbFrequency:%d, SubcarrierSpacing:(enum)%d, Periodicity:%d[ms], DeriveSsbIdxFromPCell:(bool)%d
Line 506:      ::SsbConfig - NumSsbToMeasure:%d, SsbToMeasure:[1]0x%08x[0]0x%08x
Line 512:      ::SsbConfig - SmtcIncluded:(bool)%d, Smtc.Offset:%d[ms], Smtc.Duration:%d[ms], SsRssiMeasurementIncluded:(bool)%d
Line 514:      ::NumSsbMeasInput:%d, PreScheduled %d
Line 541:        #SsbMeasInput[%d] - CellId:%d, BeamIndex:%d, BeamTimingOffset:%d(original:%d), RxBeamIdx:%d, NumHF:%d
Line 562:      ::CsiConfig - BandId:%d RefFreqCsiRs:%d, SubcarrierSpacing:%d
Line 567:      ::CsiConfig - AssociatedSsbFrequency:%d, AssociatedSsbSubcarrierSpacing:%d, AssociatedSsbPeriodicity:%d
Line 572:      ::CsiConfig - RefServCellSsbFrequency:%d, RefServCellSsbSubcarrierSpacing:%d, RefServCellSsbPeriodicity:%d
Line 574:      ::NumCsiMeasInput:%d
Line 584:        #CsiMeasInput[%d] - CellId:%d, CsiRsMeasBw[StartPRB:%d, NrOfPRBs:%d], DensityPresent:(bool)%d, Density:%d, CsiRsResourceListMobilityCnt:%d
Line 595:          *CsiRsIndex:%d, AssociatedSsbIndex:%d, SsbTimingOffset:%d, SlotConfig:(enum)%d, FreqDomain:(enum)%d, FirstOfdmSymbol:%d, Sequence:%d
Line 609:    >>Unexpected RsType:%s(%d)
Line 614:    >>Unexpected MeasType:%s(%d)
Line 617:    >>Build Complete!!!! L1C_RRM_MEAS_REQ
Line 695: %s::Build_L1C_RRM_MEAS_RESULT_IND (NumCell:%d)
Line 703:    >>[AdaptiveIW](Arfcn:%d, CellId:%d) PrxBestSsb(Index:%d Rsrp:%d) AdaptiveIW(isValid:(bool)%d Rsrp:%d)
Line 722:    >>pArg is nullptr
Line 733:    >> PbchDecodeType:%d, Band:%d, SsbFrequency:%d, HypoFO:%d, CellId:%d
Line 735:    >> BeamIndex:%d, BeamTimingOffset:%d, SsbPeriodicity:%d[ms], SsbScs:(enum)%d, RxBeamIdx(%d), AgcGain(%d, %d)
Line 742:    >>pArg is nullptr
Line 758:    >>IsNrUeIdentityModified:(bool)%d NrUeIdentity:%d IsOverHeatStateModified:(bool):%d OverHeatState:%d IsNeedStopPhyTx:(bool)%d
Line 771:    >>pArg is nullptr
Line 820:    >>NrUeCapaInfo - Band:%d, MaxUlLayers:%d, isBwpSwitchingEnable:(bool)%d isVoNrEnabled:(bool)%d
Line 821:    >>reportUplinkTxDirectCurrentV1530:%d
Line 822:    >>IsCRntiValid:(bool)%d, cRnti:%d
Line 824:    >>SelectedPlmnId Status:(enum)%d, MCC:%x %x %x, MNC:%x %x %x
Line 826:    >>GapRequired[%d] - NumRequested:%d RequestedTargetBandFilterNR_r16:%d
Line 834:    >>pArg is nullptr
Line 844:    >>RatType:%d, NumOfNeighborCell:%d
Line 853:      ::IratChangeCellIndex:%d - Arfcn:%d, CellId:%d, CpType:%d, TimingOffset:%d
Line 862:    >>pArg is nullptr
Line 875:    >>TargetRat(%d),Type(%d),IsFeDvOn(%d),IsInitial(%d)
Line 876:    >>BplmnAvailTime(%d),BplmnAvailTime(%d)
Line 882:    >>CompliantType:%d
Line 887:    >>Compliant:NULL
Line 896:    >>pArg is nullptr
Line 905:    >>TargetRat(%d),Type(%d)
Line 913:    >>pArg is nullptr
Line 924:    >>SCellActivationSlot:0x%X
Line 927:    >>numOfScellInfoList:%d
Line 946:      ::ScellInfoList[%d] - act_deact:%d, ScellIndex:%d, SsbIndex:%d, TimingOffset:%d, RxBeamIdx:%d
Line 958:      ::				  target_slot:%d, AgcGain[0]:%d, AgcGain[1]:%d
Line 962:    >>Crnti: %d(0x%x)
Line 970:    >>pArg is nullptr
Line 1001:    >> Band:%d, SsbFrequency:%d, HypoFO:%d, CellId:%d, NumHF:%d
Line 1003:    >> BeamIndex:%d, BeamTimingOffset:%d, SsbPeriodicity:%d[ms], SsbScs:(enum)%d, RxBeamIdx(%d), AgcGain(%d, %d)
Line 1004:    >> CellChangeType:%d, MibInfoIncluded:%d, UseSpcellConfig %d, pScell %d 
Line 1012:    >>pArg is nullptr
Line 1027:    >> MeasRatType:%d, SCellIdx:%d, SsbIdx:%d, TimingOffset:%d
Line 1034:    >>pArg is nullptr
Line 1042:    >>rMsg.Cause:%d
Line 1050: pArg is nullptr
Line 1056:    >>rMsg.transactionNumber:%d
Line 1061: RrmBlkL1cMsgBuildNr::Build_L1C_RRM_POS_MEAS_STOP_IND
Line 1065: pArg is nullptr
Line 1071:    >>rMsg.transactionNumber:%d
Line 1079:    >>pArg is nullptr
Line 1086:    >>transactionNumber: %d reportingAmount: %d reportingInterval:%d responseTimeEarlyFix:%d bit_mask:%d
Line 1097:    >>pArg is nullptr
Line 1114:    >>Actual MeasReserved is TRUE but change it to FALSE because of HandShakeSkip is FALSE
Line 1117:    >>Send PRE DRX STATUS HandShakeSkip:%d(bool), MeasReserved:%d(enum)
