Line 63:    >>m_RrmSubBlkCellAcqCellStatus::MakeCellAcqReq
Line 67:    >>MakeCellAcqReq Fail. It is empty NrCellResultInfo
Line 88:    >>RrmSubBlkCellAcqCellStatus::SetServingInfo
Line 114:      ::m_pSelectedCellInfo is NULL:Before
Line 157:      ::ServCellInfo is NULL
Line 162:      ::m_pSelectedCellInfo is NULL:After
Line 168:      ::RrmSubBlkCellAcqCellStatus::UpdateIntraFreq()
Line 223:      ::Fail. It is empty SelectedCellIdInfo
Line 233:      ::Fail. It is empty SsbMeasResultInfo
Line 287:      ::Cannot Create MeasObjectNR
Line 301:      ::Delete cell ptrs of (set:%d objid:%d)
Line 324:        #ADDED - previous intra neighbor cell(objid: %d, pcid:%d)
Line 328:        #FAILED - previous intra neighbor cell(objid: %d, pcid:%d)
Line 333:        #Remain cell ptrs of (set:%d objid:%d)
Line 337:        #DestroyRrmCellInfoList is done (objid: %d)
Line 365:        #Delete cell ptrs of (set:%d objid:%d)
Line 388:        #ADDED - previous inter neighbor cell(objid: %d, pcid:%d)
Line 392:        #FAILED - previous inter neighbor cell(objid: %d, pcid:%d)
Line 397:        #Remain cell ptrs of (set:%d objid:%d)
Line 402:        #DestroyRrmCellInfoList is done (objid: %d, freq: %d)
Line 427:      ::IntraFreqInfo - BandId:%d Arfcn:%d SsbAbsFreq:%d SubCarrierSpacing:%d objId:%d
Line 462:      ::ServingCellInfo - BandId:%d Arfcn:%d CellId:%d SsbRsIndex:%d SsbTimingOffset:%d
Line 471:      ::ServingCellInfo - SubCarrierSpacing:%d RxBeamIndex:%d NumHF:%d(MibInfo.halfFrameIndex:%d)
Line 483:      ::ssbPositionsInBurstPresent(%d) value_L(%d) ssbPositionsInBurst(0x%08X%08X)
Line 490:      ::In Sib1, ssbPositionsInBurstPresent(%d) value_L(%d) ssbPositionsInBurst(0x%08X%08X)
Line 494: RecvMsg is null
Line 498:      ::Freq_Range(%d)
Line 505:      ::only one numBeamMeasResult
Line 508:      ::[%d]BeamIndex(%d)
Line 514:      ::NumHF:%d SsbIndex:%d RxBeamIdx:%d TimingOffset:%d
Line 526:         #antenna_index(%d) Rsrp(%d) Rsrq(%d) Sinr(%d) Rssi(%d)
Line 537:      ::Fail. It is empty SsbMeasResult
Line 543:      ::[%d]BeamIndex(%d)
Line 549:      ::NumHF:%d SsbIndex:%d RxBeamIdx:%d TimingOffset:%d
Line 561:        #antenna_index(%d) Rsrp(%d) Rsrq(%d) Sinr(%d) Rssi(%d)
Line 566:      ::Fail. It is empty SsbMeasResult
Line 571:      ::Lvalue(%d)
Line 581: EvalCellSelection - QoffsetTemp:%d PPowerClass:%d IsHigherPrioSearch:(bool)%d
Line 599:      ::m_NrCellSrchPbdDb BestRsrp(%d) BestRsrq(%d)
Line 606:      ::ServingMeas is not valid
Line 611:      ::SelectedCellInfo BestRsrp(%d) BestRsrq(%d)
Line 617:      ::GET Cell Selection Criterion from SIB1
Line 620:      ::SIB1:NULL
Line 630:      ::For FR2, Pcompensation is set to 0
Line 682:      ::Srxlev:%d Squal:%d IsSFulfilled:(bool)%d QoffsetTemp:%d IsHigherPrioSearch:(bool)%d
Line 684:      ::BestRsrp:%d[/100dBm] QrxLevMin:%d[/100dB] QrxLevMinOffset:%d[/100dB] Pcompensation:%d[/100dB]=MAX((Pmax:%d - PPowerClass:%d),0)
Line 686:      ::BestRsrq:%d[/100dBm] QqualMin:%d[/100dB] QqualMinOffset:%d[/100dB]
Line 718: 	>>pCellInfoNr is nullptr and fail to allocate
Line 722: 	 >>pLastServingCellInfoNr - CellPtr:0x%08x
Line 766: 	>>Last ServingCellInfo - BandId:%d Arfcn:%d CellId:%d SsbRsIndex:%d SsbTimingOffset:%d SubCarrierSpacing:%d MeasObjectId:%d
Line 790: 	>>ADDED : last serving cell to ID DETECTED CELL SET.
Line 795: 	>>FAILED : last serving cell to ID DETECTED CELL SET.
Line 817: 	>>FAILED : new serving cell is not in CELL SET.
Line 841: 	>>ADDED : last serving cell to ID DETECTED CELL SET.
Line 846: 	>>FAILED : last serving cell to ID DETECTED CELL SET.
Line 869: 	>>FAILED : due to blind inter mobility
