Line 80:    >>pArg is nullptr
Line 91:    >>Band:%d, Arfcn:%d, CellId:%d, Ss_Rsrp:%d, Ss_Rsrq:%d, Ss_Sinr:%d, Rssi:%d
Line 92:    >>Sib1Bandwidth;%d, Sib1CenterArfcn:%d
Line 94:    >>========MIB info in Build_RRC_RRM_CELL_ACQ_REQ==========
Line 100:    >>SsbIndexEplicit:%d, halfFrameIndex:%d, systemFrameNum:%d %d, SubCarrierSpacingCommon:%d
Line 107:    >>kSsb(%d) SsbSubCarrierOffset(%d) PdcchConfigSib1(%d) NrRrcDb_CellBarred_e(%d) NrRrcDb_IntraFreqReselection_e(%d) DmrsTypeAPosition(%d)
Line 109:    >>MIB:0x%2X%2X%2X%2X[bit string])
Line 110:    >>===============================================
Line 120:    >>pArg is nullptr
Line 133:      ::RRC_RRM_CELL_CONFIG_CNF_T - Result:%d, IsNotSupportedBand (%d), Hold (%d)
Line 141:    >>pArg is nullptr
Line 152: RrmBlkRrcMsgBuildNr::Build_RRC_RRM_CELL_CONFIG_STOP_CNF - Result:%d
Line 159:    >>pArg is nullptr
Line 167:    >>Build_RRC_RRM_CELL_STATUS_CNF - Result:%d
Line 180:    >>pArg is nullptr
Line 194:      ::Band:%d, Arfcn:%d, CellId:%d, SCS:(enum)%d, Periodicity:(enum)%d
Line 202:    >>pArg is nullptr
Line 210:    >>Build_RRC_RRM_CGI_START_CNF - Result:%d
Line 225:    >>pArg is nullptr
Line 235: FreqScanCnf Param: Result(%d) FreqListType(%d) FreqScanState(%d) Num(%d)
Line 243: FreqScanCnf Param(RSSI)[%2d] : Band(%d) NumValidRange(%d) Step(%d) Complete(%d) LastIdx(%d)
Line 252: FreqScanCnf Param[%2d] : Band(%d) SCS(%d) narfcn(%d) MaxValue(%d)
Line 268:    >>pArg is nullptr
Line 281:    >>pArg is nullptr
Line 302:    >>========MEAS_REPORT info in Build_RRC_RRM_MEAS_REPORT_IND==========::_eval_
Line 304:    >>MeasId:%d, ServMoCnt:%d, NeighCellsCnt:%d, NeighCellsChoice:%d, IsCondEvent:%d, RemoveThisPeriodicMeas:%d NeedLocationReport:%d
Line 312:      ----------------------------------ServCellId[%d](%d)----------------------------------
Line 315:      ::MeasResultServingCell.PhysCellIdPresent:%d, MeasResultServingCell.PhysCellId:%d
Line 318:      ::MeasResultServingCell.MeasResult.RsIndexResultsPresent:%d
Line 322:      ::MeasResultServingCell.MeasResult.CellResults.ResultsSsbCellPresent:%d, ResultsCsiRsCellPresent:%d
Line 327:      ::MeasResultServingCell.MeasResult.CellResults.ResultsSsbCell.RsrpPresent:%d, RsrqPresent:%d, SinrPresent:%d
Line 332:      ::MeasResultServingCell.MeasResult.CellResults.ResultsSsbCell.Rsrp:%d, Rsrq:%d, Sinr:%d
Line 337:      ::MeasResultServingCell.MeasResult.CellResults.ResultsCsiRsCell.RsrpPresent:%d, RsrqPresent:%d, SinrPresent:%d
Line 342:      ::MeasResultServingCell.MeasResult.CellResults.ResultsCsiRsCell.Rsrp:%d, Rsrq:%d, Sinr:%d
Line 346:      ::MeasResultServingCell.MeasResult.RsIndexResults.ResultsSsbIndexCnt:%d, ResultsCsiRsIndexCnt:%d
Line 350:      ----------------------------------MeasResultBestNeighCellPresent:(bool)%d----------------------------------
Line 353:      ::MeasResultBestNeighCell.PhysCellIdPresent:%d, MeasResultBestNeighCell.PhysCellId:%d
Line 356:      ::MeasResultBestNeighCell.MeasResult.RsIndexResultsPresent:%d
Line 360:      ::MeasResultBestNeighCell.MeasResult.CellResults.ResultsSsbCellPresent:%d, ResultsCsiRsCellPresent:%d
Line 365:      ::MeasResultBestNeighCell.MeasResult.CellResults.ResultsSsbCell.RsrpPresent:%d, RsrqPresent:%d, SinrPresent:%d
Line 370:      ::MeasResultBestNeighCell.MeasResult.CellResults.ResultsSsbCell.Rsrp:%d, Rsrq:%d, Sinr:%d
Line 375:      ::MeasResultBestNeighCell.MeasResult.CellResults.ResultsCsiRsCell.RsrpPresent:%d, RsrqPresent:%d, SinrPresent:%d
Line 380:      ::MeasResultBestNeighCell.MeasResult.CellResults.ResultsCsiRsCell.Rsrp:%d, Rsrq:%d, Sinr:%d
Line 384:      ::MeasResultBestNeighCell.MeasResult.RsIndexResults.ResultsSsbIndexCnt:%d, ResultsCsiRsIndexCnt:%d
Line 396:      ----------------------------------MeasResultNeighCells.MeasResultNR[%d]----------------------------------
Line 399:      ::MeasResultNeighCells.PhysCellIdPresent:%d, MeasResultNeighCells.PhysCellId:%d
Line 402:      ::MeasResultNeighCells.MeasResult.RsIndexResultsPresent:%d
Line 406:      ::MeasResultNeighCells.MeasResult.CellResults.ResultsSsbCellPresent:%d, ResultsCsiRsCellPresent:%d
Line 411:      ::MeasResultNeighCells.MeasResult.CellResults.ResultsSsbCell.RsrpPresent:%d, RsrqPresent:%d, SinrPresent:%d
Line 416:      ::MeasResultNeighCells.MeasResult.CellResults.ResultsSsbCell.Rsrp:%d, Rsrq:%d, Sinr:%d
Line 421:      ::MeasResultNeighCells.MeasResult.CellResults.ResultsCsiRsCell.RsrpPresent:%d, RsrqPresent:%d, SinrPresent:%d
Line 426:      ::MeasResultNeighCells.MeasResult.CellResults.ResultsCsiRsCell.Rsrp:%d, Rsrq:%d, Sinr:%d
Line 430:      ::MeasResultNeighCells.MeasResult.RsIndexResults.ResultsSsbIndexCnt:%d, ResultsCsiRsIndexCnt:%d
Line 442:    >>[N2L] MeasResultNeighCells.MeasResultEUTRA[%d]
Line 444:      ::[N2L] MeasResultNeighCells.PhysCellId:%d
Line 452:      ::[N2L]MeasResultNeighCells.MeasResult.rsrpPresent:%d, rsrp:%d
Line 456:      ::[N2L]MeasResultNeighCells.MeasResult.rsrqPresent:%d, rsrq:%d
Line 459:      ::[N2L]MeasResultNeighCells.MeasResult.sinrPresent:%d, sinr:%d
Line 467:    >>[N2U] MeasResultNeighCells.MeasResultUTRA[%d]
Line 469:      ::[N2U] MeasResultNeighCells.PhysCellId(%d)
Line 473:      ::[N2U] MeasResultNeighCells.MeasResult.rscpPresent(%d), Rscp(%d)
Line 477:      ::[N2U] MeasResultNeighCells.MeasResult.EcNoPresent(%d), EcNo(%d)
Line 489:      ::CLI MeasId:%d SrsRsrp[%d](SrsResourceId:%d SrsRsrpResult:%d)
Line 496:      ::CLI MeasId:%d CliRssi[%d](rssiResourceId:%d CliRssiResult:%d)
Line 514:      ::[NEDC] MeasResult[%d]/[%d], Freq(%d), ServingPresent(%d) BestNeighPresent(%d)
Line 525:      ::[NEDC] eutra PScell(%d) rsrp(%d) rsrq(%d) sinr(%d) present(%d/%d/%d)
Line 537:      ::[NEDC] eutra bestNCell(%d) rsrp(%d) rsrq(%d) sinr(%d) present(%d/%d/%d)
Line 545:    ========================================================================
Line 555:    >>AllocMsgBodyElem for rMsg.MeasResultPerMoList[]
Line 588: 	RRM state is INIT
Line 605:    >>pArg is nullptr
Line 618:    >>pArg is nullptr
Line 626:    >>Msg:(enum)%d 0(OUT_OF_SYNC)/1(SERV_RETURN_FAIL)
Line 633:    >>pArg is nullptr
Line 643:      ::Result:(bool)%d
Line 652:    >>pArg is nullptr
Line 680:      ::Result:%d, reportUplinkTxDirectCurrentV1530:%d, pUplinkTxDirectCurrentList:%d, NumNeedForGapsIntra:%d, NumNeedForGapsInter:%d
Line 687:    >>pArg is nullptr
Line 697: 	  ::rMsg.Result:(enum)%d, arfcn:%d, cellid:%d
Line 704:    >>pArg is nullptr
Line 714:      ::Result:%d, RatType:%d, NumOfNeighborCell:%d
Line 723:        #IratChangeCellIndex:%d - Arfcn:%d, CellId:%d CpType:%d TimingOffset:%d
Line 731:    >>pArg is nullptr
Line 742:    >>NumReselFreq:%d
Line 752:      ::ReselFreq[%d] - RatType:(enum)%d, Arfcn:%d, Priority:%d, Scs:(enum)%d, NumPcid:%d
Line 757:        #PcidList[%d]:%d
Line 772:    >>pArg is nullptr
Line 777:    >>Result: %d transactionNumber: %d reason:%d
Line 787:    >>pArg is nullptr
Line 796:    >>Build_RRC_RRM_POS_MEAS_RESULT_IND
Line 808:    >>transactionNumber: %d bit_mask:%d receivedSFN:%d
Line 818:    >>ServingCell:%d SSB(RSRP :%d RSRQ :%d) CSI(RSRP :%d RSRQ :%d)
Line 826:      ::Index:%d SSB index:%d SSB RSRP:%d SSB RSRQ:%d
Line 834:      ::Index:%d CSI index:%d CSI RSRP :%d
Line 845:      ::Ncell Idx:%d CellId:%d SSB(RSRP:%d RSRQ:%d) CSI(RSRP :%d RSRQ :%d)
Line 853:        #[%d] SSB index:%d RSRP:%d RSRQ:%d
Line 861:        #[%d] CSI( index:%d RSRP:%d RSRQ:%d)
