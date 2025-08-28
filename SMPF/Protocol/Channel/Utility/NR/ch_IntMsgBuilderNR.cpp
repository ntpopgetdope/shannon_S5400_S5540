Line 109: [L1C] L1C_RRM_BCH_CONFIG_REQ NeededSibBitmap(%d) IsForOsi(%d) Band(%d) Arfcn(%d) Sib1Bandwidth(%d) SubCarrierSpacingCommon(%d) NeededPosSibBitmap(%d)
Line 115: [L1C] L1C_RRM_BCH_RELEASE_REQ IsForOsi(%d) IsSib1ForEtwsAndCmas(%d)
Line 160: [L1C] L1C_RRM_GAP_CONFIG_REQ GAP config(%d) Type(%d) gapOffset(%d) NsaConfig(%d) GapConfigPresentBitMask(0x%x)
Line 206: [L1C] L1C_RRM_INIT_MEAS_REQ Band(%d) Arfcn(%d) NumCell(%d) SCSSSB(%d) AgcGain(%d/%d) InitAttach(%d)
Line 219: ##[NR_MEAS] INIT_MEAS_REQ CellID(%d), SsbIndex(%d), RxBeamIdx(%d), TimingOffset(%d), lowEngCell(%d)
Line 225: ##[NR_MEAS] xPhy Test Case! gUseNrDigitalIq[%d]
Line 254: ##[NR_SRCH][AR][%d] band=%d, arfcn=%d, mu=%d
Line 262: ##[NR_SRCH][FS][ERR] IslinearStepSize(%d) rInt.StartArfcn(%d)
Line 268: ##[NR_SRCH][FS][ERR] IslinearStepSize(%d) IsBand_12_OR_70(%d), rInt.StartArfcn(%d<=20)
Line 274: ##[NR_SRCH][FS][ERR] rInt.StartArfcn(%d) > rInt.EndArfcn(%d)
Line 280: ##[NR_SRCH][FS][ERR] rInt.StartArfcn(%d) < rInt.EndArfcn(%d): rInt.StepArfcn(%d)
Line 294: ##[NR_SRCH][INT][LIN] num=%d, arfcn[0]=%d, arfcn[%d]=%d
Line 332: ##[NR_SRCH][FS][LimitedSet] band=%d, num=%d, arfcn[0]=%d, arfcn[%d]=%d
Line 350: ##[NR_SRCH][INT][N12orN70] num=%d, arfcn[0]=%d
Line 358: ##[NR_SRCH][INT][NL] num=%d, arfcn[0]=%d, arfcn[1]=%d, arfcn[2]=%d
Line 378: ##[NR_SRCH][DEBUG] ===> BlackFreq#%2d=%d
Line 428: [L1C] L1C_RRM_FREQ_SCAN_REQ(RS) NumBand=%d
Line 449: [L1C] L1C_RRM_FREQ_SCAN_REQ arrType(%d), numFreq=%d
Line 458: [L1C] L1C_RRM_FREQ_SCAN_REQ intType(%d), band=%d, SCS=%d, arfcn:start=%d, step=%d, end=%d
Line 483: FreqListType is not defined...
Line 494: ##[NR_SRCH][INT] Final num=%d, band=%d, scs=%d, arfcn[0]=%d, arfcn[%d]=%d
Line 519: [L1C] L1C_RRM_INIT_SEARCH_REQ Band(%d) Arfcn(%d) Freq(%d) Numerology(%d)
Line 551: [NR_SRCH] %s, Receive: INIT_SEARCH_REQ from RRM, Period=%d (%d), Cgi=%d
Line 562: [L1C] L1C_RRM_MEAS_REQ MeasRatType(%d) MeasType(%d) PreScheduled(%d)
Line 601: ##[NR_MEAS][SMTC][ERR] SmtcOffset(%d) periodicity(%d) => updated SmtcOffset(%d)
Line 624: ##[NR_MEAS] MEAS_REQ from RRM, MeasMode(%d), NumMeasInput(%d), Arfcn(%d), Band(%d), Freq(%d), SubcarrierSpacing(%d), RsType(%d)
Line 631: ##[NR_MEAS] MEAS_REQ from RRM, SsbConfig => MAX_L(%d) SsbBitmap([%d]/[%d]) SsbPattern(%d), DeriveSsb(%d), RxBeamIdx(0x%x)
Line 684: ##[NR_MEAS] MEAS_REQ from RRM, MeasMode(%d), NumMeasInput(%d), Arfcn(%d), Band(%d), Freq(%d), SubcarrierSpacing(%d), RsType(%d)
Line 733: ##[NR_MEAS] MEAS_REQ from RRM, MeasMode(%d), NumMeasInput(%d), refServCellIndex(%d), refBwp(%d), SubcarrierSpacing(%d), RsType(%d)
Line 761: ##[NR_MEAS] MEAS_REQ from RRM, MeasMode(%d), NumMeasInput(%d), refServCellIndex(%d), SubcarrierSpacing(%d), RsType(%d)
Line 766: ##[NR_MEAS] Abnormal case..Please check RsType(%d)!!
Line 781: ##[NR_MEAS] IRAT MEAS REQ MeasMode(%d) ObjectId(%d) NumLteMeasInput(%d) AgcGain[0](%d) AgcGain[1](%d) CarrierFreq(%d) AllowedMeasBandwidth(%d)
Line 790: ##[NR_MEAS] IRAT MEAS REQ [%d] CpType(%d) CellIndexEutra(%d) PhysCellId(%d) CellIndividualOffset(%d) TimingOffset(%d)
Line 800: ##[NR_MEAS] IRAT MEAS REQ MeasMode(%d) ObjectId(%d) CarrierFreq(%d) NumUtraMeasInput(%d)
Line 807: ##[NR_MEAS] IRAT MEAS REQ [%d] CellIndex(%d) PhysCellId(%d) TimingOffset(%d)
Line 812: Wrong Rat Type
Line 851: [NR_BCH] Build SERVING_CELL_CHANGE_REQ , BandId was 0 from RRM, Set it to %d
Line 872: [L1C] L1C_RRM_SERVING_CELL_CHANGE_REQ CellChangeType(%d) Band(%d) Arfcn(%d)
Line 874: RrmInterfaceCtrlr::L1C_RRM_SERVING_CELL_CHANGE_REQ_Handler(band(%d), arfcn(%d), scs(%d), period(%d), cellId(%d), ssbIndex(%d), timingOffset(%d)
Line 882: [L1C] L1C_RRM_SCELL_STATUS_IND numOfScellInfoList(%d)
Line 899: RrmInterfaceCtrlr:: ***** [%d] act_deact(%d), scell_idx(%d), ssb_idx_2/rx_beam_idx_4(0x%06x), agc_gain(0x%04x), ssb_timing_offset(%d), scell_target_slot(%d)
Line 909: [L1C] L1C_L1C_TIMING_UPDATE_IND: SCellIdx(%d), SsbIdx(%d), TimingOffsetUpdate(%d) 
Line 941: [NR_BCH] Build PBCH DECODE REQ , BandId was 0 from RRM, Set it to %d
Line 967: [L1C] L1C_RRM_PHY_RELEASE_REQ Result(%d)
