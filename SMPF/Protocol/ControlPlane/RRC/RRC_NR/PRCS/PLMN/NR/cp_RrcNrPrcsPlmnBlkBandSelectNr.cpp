Line 92: [NRCELL][RSSI] MakeRssiBandList >> m_NumBand %d InputBand %d
Line 164: [NRCELL] MakeFullFrequencyBlock >> m_NumBand %d InputBand %d
Line 220: %s
Line 241: [NRCELL] Invalid ulAbsoluteFrequencyPointA(%d), dlCarrierBandwidth(%d), SCS(%d)
Line 250: [NRCELL] Band %d startFreq %d endFreq %d StartArfcn %d EndArfcn %d
Line 290: %s
Line 301: m_FreqSearchBlockList size %d
Line 307: rBlock Band(%d), StartArfcn(%d), EndArfcn(%d), SubCarrierSpacingSSB(%d), StepArfcn(%d)
Line 319: [NRBPLMN] Before m_FreqSearchBlockList Band(%d), StartArfcn(%d), EndArfcn(%d), SubCarrierSpacingSSB(%d), StepArfcn(%d)
Line 328: [NRBPLMN] Iter->EndArfcn %d, rBlock.StartArfcn %d, Iter->StartArfcn %d, rBlock.EndArfcn %d
Line 336: Start m_FreqSearchBlockList for loop
Line 346: [NRBPLMN] Compare m_FreqSearchBlockList Band(%d), StartArfcn(%d), EndArfcn(%d), SubCarrierSpacingSSB(%d), StepArfcn(%d)
Line 350: [NRBPLMN]Iter's StartArfcn is included
Line 356: [NRBPLMN]Iter is included
Line 365: [NRBPLMN]Iter's EndArfcn is included
Line 372: [NRBPLMN]rBlock is included in Iter
Line 441: [NRBPLMN]Add tempBlock Band(%d), StartArfcn(%d), EndArfcn(%d), SubCarrierSpacingSSB(%d), StepArfcn(%d)
Line 471: [NRBPLMN] Iter is Deleted. Band(%d), StartArfcn(%d), EndArfcn(%d), SubCarrierSpacingSSB(%d), StepArfcn(%d)
Line 477: [NRBPLMN] find next
Line 498: [NRBPLMN] After m_FreqSearchBlockList Band(%d), StartArfcn(%d), EndArfcn(%d), SubCarrierSpacingSSB(%d), StepArfcn(%d)
Line 512: %s
Line 551: [NRCELL] ===SmartBand=== enable=%d, PLMN search cause=%s
Line 569: BandList[%d] : %d BandMode[%d]
Line 580: BandList[%d] : %d is FR2 band
Line 602: BandList[%d] : %d is FR2 band. Exclude it from sbAccBandList
Line 620: GetValidMccForCertifiedBand MCC : %x %x %x
Line 635: [NRCELL] ===SmartBand=== MCC certified sbAccBandList[%d]=%d
Line 643: rDb.m_HplmnPrefBandSupport:%d
Line 648: rDb.m_NrRrcNumOfSupportedHplmnprefBand:%d
Line 661: m_NrRrcSupportedHplmnprefBand: %d
Line 667: MakeBandList >> rBandNum %d m_NumBand %d
Line 718: [NRCELL] MakeBandOrder >> m_BandList[%d] %d
Line 726: [MultiSIM OOS] Store PeerStack Band Info 
Line 751: MakeBandOrderSpecific
Line 756: %s
Line 769: SpType (%x) 
Line 777: [DbCellSel] Updated PlmnId MCC : %x %x %x
Line 778: [DbCellSel] Updated PlmnId MNC : %x %x %x
Line 825: %s
Line 840: MakeBandOrderDetected
Line 845: %s
Line 861: MakeBandOrderNeighbour >> [%d] Band %d
Line 903: MakeBandOrderLowerPrior >>...Band %d
Line 920: MakeBandOrderLowerPrior >>...Band %d
Line 969: [NRCELL] ===SmartBand=== Selected PLMN=%x%x%x-%x%x%x
Line 972: [NRCELL] ===SmartBand=== # of SelectedMcc = %d
Line 976:   [NRCELL] ===SmartBand=== SelectedMcc[%d] = %d
Line 979: [NRCELL] ===SmartBand=== # of ScannedMcc = %d
Line 983:   [NRCELL] ===SmartBand=== ScannedMcc[%d] = %d
Line 1025: [NRCELL] ===SmartBand=== Unknown PLMN search cause %d! Set band list to supported band list.
Line 1040: [NRCELL] ===SmartBand=== newNumBand=%d
Line 1044:   [NRCELL] ===SmartBand=== newBandList[%d]=%d
Line 1049: [NRCELL] ===SmartBand=== searchedNumBand=%d
Line 1053:   [NRCELL] ===SmartBand=== searchedBandList[%d]=%d
Line 1074: [NRCELL] ===SmartBand=== supportedNumBand=%d
Line 1079:   [NRCELL] ===SmartBand=== m_NrRrcSupportedBand[%d]=%d
Line 1082: [NRCELL] ===SmartBand=== Composing final band list...
Line 1097:   [NRCELL] ===SmartBand=== Band(%d) ADDED
Line 1107: [NRCELL] ===SmartBand=== There is no band information!!!
Line 1113: [NRCELL] ===SmartBand=== %d bands added to final band list
Line 1162: CellSelectionCause(%d) NeedBandOrder(%d)
Line 1271: [NRCELL][RSSI] RssiScanResult Band %d, NumValidRange %d, Completed %d
Line 1288: [NRCELL][RSSI] Band Full Arfcn Range %d - %d
Line 1347: [NRCELL][RSSI] ValidRssiScanBlock.ArfcnRange %d-%d
Line 1382: [NRCELL][RSSI] SetSearchList Frequency Block for freqscan Band[%d] StartArfcn[%d] EndArfcn[%d] SCS[%d] StepSize[%d] (%d) %s
Line 1396: [RRC][BandOrder] (from registry) numOfPlmn : %d
Line 1396: [RRC][BandOrder] (from registry) numOfPlmn : %d
Line 1426: [DbCellSel] CheckCarrierBandOrderRequired PlmnId MCC : %x %x %x
Line 1427: [DbCellSel] CheckCarrierBandOrderRequired PlmnId MNC : %x %x %x
Line 1444: %s
Line 1450: [NRCELL] End Arfcn is smaller than Start Arfcn
Line 1478: [NRCELL] AddBandBlockListWithMaxSizeWithGscn MaxSize:%d Count:%d Remain:%d
Line 1499: [NRCELL] Add GSCN Frequency Block Band:%d StartArfcn:%d EndArfcn %d SubCarrierSpacingSSB:%d StepArfcn:%d
Line 1514: %s
Line 1520: [NRCELL] End Arfcn is smaller than Start Arfcn
Line 1550: [NRCELL] AddBandBlockListWithMaxSize Count:%d Remain:%d
Line 1571: [NRCELL] Add Frequency Block Band:%d StartArfcn:%d EndArfcn %d SubCarrierSpacingSSB:%d StepArfcn:%d
Line 1604: %s
Line 1644: [NRCELL] AdjustGscnBandBlock Band Block is wrong...
Line 1650: [NRCELL] AdjustGscnBandBlock Band Block is wrong...
Line 1675: [NRCELL] AdjustGscnBandBlock Band Block is wrong...
Line 1682: [NRCELL] AdjustGscnBandBlock Band:%d StartArfcn:%d EndArfcn:%d DiscreteSearch:%d IsLteSubband:%d
Line 1693: %s
Line 1722: [NRCELL] AdjustBandBlock Band Block is wrong...
Line 1742: [NRCELL] AdjustBandBlock Band StartArfcn:%d EndArfcn:%d
Line 1751: %s
Line 1763: [NRCELL] Fixed applicable freqs
Line 1783: %s
Line 1885: %s
Line 1988: [NRCELL] Make Partial Block Band:%d StartArfcn:%d EndArfcn:%d
Line 2079: [NRCELL][RSSI] Make Rssi Band Block Band:%d StartArfcn:%d EndArfcn:%d for MccSubbandRestriction
Line 2083: [NRCELL][RSSI] Make Rssi Band Block Band:%d StartArfcn:%d EndArfcn:%d
Line 2100: [NRCELL] Prepare Partial Block Band:%d StartArfcn:%d EndArfcn:%d
Line 2137: %s
Line 2144: [NRCELL] Make Partial Block Band:%d StartArfcn:%d EndArfcn %d
Line 2171: [SharedHistory] Requested searched band[%u], arfcn_range[%u-%u]
Line 2286: [SkipOverlappingFreq] filtered_ratio[%d%%] on arfcn_range[%u-%u] of band[%u]: filtered/total[%d/%d]
Line 2306: [RRC][BandOrder] (from registry) numOfPlmn : %d
Line 2306: [RRC][BandOrder] (from registry) numOfPlmn : %d
Line 2310: [NRCELL] Preferred Band Order Sorting is not enabled !!!
Line 2317: [NRCELL] There is no band information!!!
Line 2336: [DbCellSel] Updated PlmnId MCC : %x %x %x
Line 2337: [DbCellSel] Updated PlmnId MNC : %x %x %x
Line 2346: [NRCELL] [Debug] OperBand (%d) FreqList Band (%d) Arfcn (%d)
Line 2350: [NRCELL] Sorted List Band (%d) Arfcn (%d)
Line 2360: [NRCELL] Sorted List Band (%d) Arfcn (%d)
Line 2384: %s
Line 2396: [MultiSIM OOS] PeerStackBandList.size : %d
Line 2399: [MultiSIM OOS] NrMultisimListInfo.size : %d
Line 2400: [MultiSIM OOS] m_NumBand: %d
Line 2404: [MultiSIM OOS] There is no band information!!!
Line 2420: [MultiSIM OOS] Band scanned in PeerStack: %d
Line 2449: [MultiSIM OOS] MakeBandOrderWithMultisimDbInfo >> m_BandList[%d] %d
Line 2471: Invalid argument! (pBandList: 0x%x, pSearchedBandList: 0x%x, bandListSize: %d, searchedBandListSize: %d)
Line 2475: [NRCELL] Removing searched bands...
Line 2488:   [NRCELL] Searched band (%d) REMOVED
