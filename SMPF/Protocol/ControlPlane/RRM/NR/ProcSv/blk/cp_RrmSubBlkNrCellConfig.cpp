Line 74:    >>CpyCellConfigInfo RRM_RRC_CELL_CONFIG_REQ_NR(MsgGrpId %d)
Line 118:      ::SPcellConfigStatus %d, Valid pSpcell.
Line 123:      ::SPcellConfigStatus %d, Invalid pSpcell.
Line 129:      ::SPcellConfigStatus %d, Invalid SPcellConfigStatus.
Line 134:      ::Cause:%d, Band:%d, CellId:%d, SsbFrequency:%d, SsbScs:(enum)%d, SsbPeriodicity:(enum)(%d)(%d[ms])
Line 139:    >>CphyCellConfigInfo RRM_RRC_CELL_CONFIG_REQ_NR (MsgGrpId %d)
Line 164:      ::TargetCell periodic(%d)
Line 169:      ::pFreq is NULL for objid(%d)
Line 185:    >> SPcellConfigStatus %d, Valid pSpcell.
Line 190:    >> SPcellConfigStatus %d, Invalid pSpcell.
Line 196:    >> SPcellConfigStatus %d, Invalid SPcellConfigStatus.
Line 201:    >> Cause:%d, Band:%d, CellId:%d, SsbFrequency:%d, SsbScs:(enum)%d, SsbPeriodicity:%d[ms])
Line 208:    >>[Check] Initial cell search FAIL. Send RRC_RRM_CELL_CONFIG_CNF with fail result
Line 215:    >>SendFailCNFMessage::REMOVE neighbor cell in ID CELL SET
Line 227:      ::BplmnRunState(%d) is not vaild.
Line 249:      ::SendFailCNFMessage::CanNot AllocMsg about RRC_RRM_CELL_CONFIG_CNF
Line 256:    >>CheckIfnotUsingAstunnel
Line 266:      ::RrmNrSm::RRC_RRM_CELL_CONFIG_CNF::Terminate Current Procedure(PrcdId(%d))
Line 270:      ::RrmNrSm::RRC_RRM_CELL_CONFIG_CNF:: Cannot Terminate Current Procedure(PrcdId(%d), PbdResult(%d))
Line 273:      ::CanNot send RRC_RRM_CELL_CONFIG_CNF. Because F_USING_ASTUNNEL was Enable
Line 281:    >>CheckIfDuplicateCellConfig
Line 295:      ::CheckIfDuplicateCellConfig:: pIntraFreqInfo is NULL
Line 302:      ::CheckIfDuplicateCellConfig:: ServCellInfo is NULL
Line 309:      ::CheckIfDuplicateCellConfig:: NEIGHBOR_FAIL
Line 330:      ::ServCellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 331:      ::RecvMsg BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 341:      ::CheckIfDuplicateCellConfig:: Invalid NeighborCell
Line 345:      ::CheckIfDuplicateCellConfig:: DUPLICELLCONFIG_(%d) Case, RrmState(%d) 
Line 352:    >>IsNeighborCellForReselection
Line 366:      ::pServCellInfo is NULL
Line 372:      ::Search in IntraFreqInfo
Line 377:      ::empty IntraFreqInfo
Line 388:      ::IDLISTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 409:      ::IDDETECTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 432:      ::Search in InterFreqInfo
Line 445:      ::IDLISTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 467:      ::IDDETECTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 495:    >>IsNeighborCell
Line 509:      ::ServingCell is not
Line 515:      ::Search in IntraFreqInfo
Line 520:      ::empty IntraFreqInfo
Line 531:      ::IDLISTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 552:      ::IDDETECTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 575:      ::Search in InterFreqInfo
Line 589:      ::IDLISTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 611:      ::IDDETECTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 635:      ::Search in SCellFreqInfo
Line 672:      ::IDLISTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 696:      ::IDDETECTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 727:    >>SetssbPositionsInBurst
Line 754:      ::RrmSubBlkNrCellConfig::SetssbPositionsInBurst - Invalid ssbPositionsInBurst.choice(%d)
Line 762:      ::ssbPositionsInBurst - value_L(%d), ssbPositionsInBurst(0x%08X%08X)
Line 766:      ::ssbPositionsInBurst is not present
Line 773:    >>SetCellResultInfo
Line 798:      ::iterCellResultNr->CellId(%d)
Line 806:      ::CellResultInfoList size(%d) is not init
Line 839:      ::select a beamindex(%d)
Line 848:      ::SsbTimingOffset(%d)
Line 853:      ::BeamTimingOffset(%d) BeamIndex(%d) NumHF(%d)
Line 878:      :: ANT[%d] Rsrp(%d) Rsrq(%d) Sinr(%d) Rssi(%d)
Line 885:        # AvgRsrp(%d) AvgRsrq(%d) AvgSinr(%d) AvgRssi(%d) n_Valid(%d)
Line 899:      :: select a beamindex(%d)
Line 908:      :: SsbTimingOffset(%d)
Line 912:      :: BeamTimingOffset(%d) BeamIndex(%d)
Line 937:      :: ANT[%d] Rsrp(%d) Rsrq(%d) Sinr(%d) Rssi(%d)
Line 944:         # AvgRsrp(%d) AvgRsrq(%d) AvgSinr(%d) AvgRssi(%d) n_Valid(%d)
Line 950:      ::can not select beamindex(%d) isValid(%d)
Line 955:      ::MAXNUM  numBeamMeasResult(%d)
Line 972:      ::iterCellResultNr->CellId(%d)
Line 980:      :: CellResultInfoList size(%d) is not init
Line 985:      ::CellInfo's beamindex is inValid
Line 1001:      ::RRM_SET_TYPE_IDLISTEDCELLSET:Band(%d) SsbFrequency(%d) SubcarrierSpacing(%d) CellId(%d) Periodicity(%d)
Line 1002:      ::RxBeamIdx(%d) AgcGainIdx0[%d], AgcGainIdx1[%d], NumHF(%d)
Line 1003:      ::BestRsrp(%d) BestRsrq(%d) BestRssi(%d) BestSinr(%d)
Line 1004:      ::numBeamMeasResult(%d)
Line 1012:    >>SelectFirstTagetCellInEqualPriorityList
Line 1020:      ::CHECK_m_pSelectedCellInfo CellId(%d) Arfcn(%d)
Line 1024:      ::CHECK_m_pSelectedCellInfo pSelectedCellInfo is NULL
Line 1038:      ::ReselectionList is empty
Line 1050:      ::can not select BarredCell
Line 1058:      ::can not select in CheckFixedCell
Line 1065:      ::select CellId(%d) Arfcn(%d)
Line 1072:      ::ReselectionList is empty
Line 1084:      ::DUPLICELLCONFIG_NEIGHBOR(%d)
Line 1093:      ::Invalid NeighborCell
Line 1109:      ::CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
Line 1122:      ::CanNot send L1C_RRM_INIT_MEAS_REQ beacause There is not BeamInfo
Line 1138:      ::CanNot send L1C_RRM_INIT_MEAS_REQ
Line 1157:      :: Invalid NeighborCell
Line 1165:      ::CHECK_m_pSelectedCellInfo CellId(%d) Arfcn(%d)
Line 1169:      ::CHECK_m_pSelectedCellInfo pSelectedCellInfo is NULL
Line 1176:    >>TryOtherCellForServingCellChange - FailureWithoutExecution(%d)
Line 1196:      ::[Check] No more candidate beam for in PBCH_DECODE.
Line 1218: RrmSubBlkNrCellConfig::RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr: SsbFrequency %d is barred, Avoid retrying next hypo for this freq.
Line 1224:    >> try for NextSelectedHypoFO
Line 1241:      ::next retransmission for L1C_RRM_SERVING_CELL_CHANGE_REQ
Line 1247:      ::try for NextSelectedHypoFO
Line 1263:      ::next retransmission for L1C_RRM_SERVING_CELL_CHANGE_REQ
Line 1271:      ::CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
Line 1278:      ::next retransmission for L1C_RRM_PBCH_DECODE_REQ_T
Line 1286:      ::CanNot send L1C_RRM_PBCH_DECODE_REQ
Line 1299:    >>TryOtherCellForCellAcqFail - CellConfigCause:(enum)%d
Line 1305:      ::Wait until get CGI_STOP_REQ
Line 1318:      ::Send CELL_CONFIG(FAILURE) - CellAcqFail for target cell:%d
Line 1325:      ::SelectTagetCellInEqualPriorityList on TryOtherCellForCellAcqFail
Line 1333:      ::GetNextTargetCell on TryOtherCellForCellAcqFail
Line 1342:    >>TryOtherCellForCellAcqFail -SSB Frequency %d is barred - Avoid retrying next hypo in this freq.
Line 1349:    >> try for NextSelectedHypoFO on TryOtherCellForCellAcqFail
Line 1358:    >>CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ. beacause targetcell info remove.
Line 1367:      ::FR1 - next retransmission for SERVING_CELL_CHANGE_REQ
Line 1375:      ::CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
Line 1382:      ::FR2 - next retransmission for PBCH_DECODE_REQ
Line 1390:      ::CanNot send L1C_RRM_PBCH_DECODE_REQ
Line 1401:      ::Unexpected CellConfigCause:(enum)%d on TryOtherCellForCellAcqFail
Line 1411: 	>>retransmission for L1C_RRM_SERVING_CELL_CHANGE_REQ
Line 1416:      ::CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ. beacause targetcell info remove.
Line 1423:      ::next retransmission for L1C_RRM_SERVING_CELL_CHANGE_REQ
Line 1431:      ::CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
Line 1438:      ::next retransmission for L1C_RRM_PBCH_DECODE_REQ_T
Line 1446:      ::CanNot send L1C_RRM_PBCH_DECODE_REQ
