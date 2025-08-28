Line 94:    >>RrmNrPrcdPhyConfig::UpdateIntraFreq
Line 143:      ::[PHY_CONFIG] SpcellConfig.servCellIndex (%d)
Line 149:      ::[PHY_CONFIG] SpcellConfig.servCellIndex not present, set ServCellIndex to 0
Line 169:      ::UpdateScellInfo
Line 175:        #CellGroupId(%d) AddModSCellBitmask(0x%x), SCellBitmask(0x%x) ReleaseSCellBitmask(0x%x)
Line 181:    >> Error!!! there are no ServCellGroupInfoNr for CellGroup %d
Line 190: RrmNrPrcdPhyConfig::UpdateDrxInfo
Line 203:      ::[PHY_CONFIG]Set CDRX cycle:%d[ms]
Line 207:      ::[PHY_CONFIG]Wrong DrxLongCycleStartOffset.Choice:%d(enum)
Line 214: 	  ::[PHY_CONFIG]DRX config released, DrxConfig.Choice:%d(enum)
Line 224: 	  ::[PHY_CONFIG]DrxConfigStatus:%d(enum) DRX_CONFIG_MASK:%d(bool)
Line 228: 	  ::[PHY_CONFIG]pMacCellGrp is null!!!
Line 236: RrmNrPrcdPhyConfig::UpdateDownlinkBwpInfo
Line 240: pSpcell is nullptr
Line 247: pServingCellInfo is nullptr
Line 279:      ::[PHY_CONFIG]initialDownlinkBWP - SubcarrierSpacing:(enum)%d
Line 286:      ::[PHY_CONFIG]initialDownlinkBWP - SubcarrierSpacing is not present
Line 291:      ::[PHY_CONFIG]initialDownlinkBWP - genericParameters is not present
Line 297:      ::[PHY_CONFIG]downlinkConfigCommon is not present
Line 302:      ::[PHY_CONFIG]ServingCellConfigCommon is not present
Line 307:      ::[PHY_CONFIG]ReconfigWithSync is not present
Line 331:      ::[PHY_CONFIG]downlinkBwpList[%d] - SubcarrierSpacing:(enum)%d
Line 348:      ::[PHY_CONFIG]downlinkBwpList[%d] - SubcarrierSpacing is not present
Line 353:      ::[PHY_CONFIG]downlinkBwpList[%d] - genericParameters is not present
Line 358:      ::[PHY_CONFIG]downlinkBwpList[%d] is nullptr
Line 364:      ::[PHY_CONFIG]downlinkBwpList is not present
Line 369:      ::[PHY_CONFIG]SpcellConfigDedicated is not present
Line 376:      ::[PHY_CONFIG]MaxScsDownlinkBwp:(enum)%d
Line 393:      ::[PHY_CONFIG]ServCellConfigCommon.physCellId:%d
Line 408:      ::[PHY_CONFIG]ServCellConfigCommon..absoluteFrequencySsb:%d
Line 418:      ::[PHY_CONFIG]ServCellConfigCommon..frequencyInfoDL.frequencyBandList[0]:%d(BandId:%d)
Line 435:      ::[PHY_CONFIG]ServCellConfigCommon.ssbSubcarrierSpacing:%d
Line 453:      ::[PHY_CONFIG]ServCellConfigCommon.ssbPeriodicityServingCell:(enum)%d
Line 462:      ::[PHY_CONFIG]ServCellConfigCommon.ssbPositionsInBurst - choice:(enum)%d bitmap:0x%08x %08x
Line 470:      ::[PHY_CONFIG]ServCellConfigCommon...highSpeedMeasFlagR16:(bool)%d
Line 483: RrmNrPrcdPhyConfig::RRM_RRC_PHY_CONFIG_REQ_Hdlr
Line 488:    >>RRM_RRC_PHY_CONFIG_REQ_Hdlr:::Check Routing Info (%d)
Line 490:      ::Sib1ConfigFlag:(bool)%d
Line 498:    >>RecvMsg.pSpcell is nullptr
Line 510:      ::RecvMsg.ScellConfigStatus updated to %d
Line 517:      ::RecvMsg.ScellConfigStatus is %d
Line 534:    >>RrmNrPrcdPhyConfig::RRM_L1C_PHY_CONFIG_CNF_Hdlr - Result(%d)
Line 535:      ::Result(%d) reportUplinkTxDirectCurrentV1530(%d) pUplinkTxDirectCurrentList(%d)
Line 538:      ::Check Routing Info (%d)
Line 553: RrmNrPrcdPhyConfig::DirectSCellAct
Line 558:    >> Current SCellStatus(0x%x), New DirectSCellStatus(0x%x)
Line 569:    >> Need to compare m_SCellStatusBitMask(0x%x) and m_DirectSCellStatusBitMask(0x%x). No send L1C_RRM_SCELL_STATUS_IND
Line 584:    >>CurrentSCellStatus(0x%x) is same as m_DirectSCellStatusBitMask(0x%x). No send L1C_RRM_SCELL_STATUS_IND
