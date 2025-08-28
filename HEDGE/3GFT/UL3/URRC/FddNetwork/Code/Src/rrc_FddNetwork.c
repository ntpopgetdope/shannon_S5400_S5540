Line 307: ERROR creating RetestUsedFreq Timer
Line 383: No Memory allocated for rrc_FddNetwork_init 
Line 429: ERROR deleting RetestUsedFreqTimer timer
Line 451: couldn't de-register Notification functions in CellReselecter for FddNetwork
Line 731: [FddNetwork] SetScanRequest: uarfcn %d, uarfcnSrchReqd %d 
Line 776: Populating FddNetwork instance from Sib11/12 neighbour info
Line 1002: [SharedHistory] Frequency invalid
Line 1008: [SharedHistory] Uarfcn[%hu] on band[%hu] converts to freq[%d]: additional[%d]
Line 1045: [FilteredScan] uarfcn[%u] is filtered
Line 1056: [FilteredScan] filtered_ratio[%d%%] on band[%d]: filtered/total[%d/%d]
Line 1239: SetScanRequiredBasedOn2GBplmnSearchInfo %d, 
Line 1828: FddNetwork_p is NULL
Line 1833: Detected Earfcn Info is NULL
Line 1838: Detected Earfcn Info is %d 
Line 1849: LTE Band %d, BandWidth %d, CenterFreq %d
Line 1866: LTE Band %d, BandWidth %d, CenterFreq %d, MappedUarfcn %d (isAdditional %d)
Line 1901:  %d <= Uarfcn <= %d  is overlapped with a earfcn on which ue camped. 
Line 1926: Detected Uarfcn %d is stored at %d
Line 1932:  DetectFreqNum >=  MAX_STORED_FREQ 
Line 1938:  Detected Uarfcn count (%d) 
Line 1966:  %d <= Uarfcn <= %d  is overlapped with a uarfcn on which ue camped. 
Line 1973: rrc_FddNetwork_SetScanRequiredBasedOnStoredSearchInfo %d, 
Line 6934: PLMN [0x%x][0x%x][0x%x] is not updated to BPLMN Handler
Line 11632: Adding Freq %d at index [%d]
Line 11636: Freq %d already present at index [%d]
Line 11642: Cannot have more than 30 freq in StoredNwPtr
Line 11647: StoredNetworkPointer is NULL
Line 11674: [AP_EMC]: Removing frequency: %i from FreqList
Line 11688: [AP_EMC]: FreqPtr is NULL
Line 11693: [AP_EMC]: Freq %d not present in FreqList!!
Line 11789: FddNetwork_AddFreqToIfSupportedFreq : MaxBandCnt:%d, Added DlUarfcn: %d, DetermindedBand: %d, SupportedBand : %d
Line 11798: DlUarfcn(%d) is not supported! UnSupportedBand(%d)
Line 11838: rrc_FddNetwork_IsSupportedBand : MaxBandCnt:%d, GivenBand: %d, SupportedBand : %d
Line 11846: BandId(%d) is not supported!
Line 12208: rrc_FddNetwork_AddCellTo failed. Invalid InterFreqCell frequency value (%i)
Line 12214: rrc_FddNetwork_AddCellTo failed. Invalid InterFreqCell frequency value (%i)
Line 12220: Invalid Cpich: %i for Uarfcn: %i - no entry added to stored network instance
Line 12393: rrc_FddNetwork_SetvariableAsPerBand: Unsupported BandId(%i)
Line 12582: isFirstBestCellTry %i
Line 12590: CellTypeFound %i
Line 12609: >>> StoredCells in FddNetwork <<<
Line 12613: StoredCell[%d] %d
Line 12618: No Freq in FddNetwork
Line 12644: Started  creating a stored network instance from USIM data
Line 12676: Invalid Freq(%d)/Cpich(%d) Info transfered from USIM EF_NETPAR
Line 12720: Invalid Freq(%d)/Cpich(%d) Info transfered from USIM EF_NETPAR
Line 12725: Finished creating a stored network instance from USIM data
Line 14470: Invalid Continent Info (%d)
Line 14474: MccContinentBasedExcusiveBand: Continent (%d), ExclusiveBandBitMask (0x%x)
Line 14797: Uarfcn %d at Target Band %d Frequency %d
Line 14803: Uarfcn %d at Target Band %d Frequency %d Additional %d
Line 3387: Wrong uarfcn. Or UE Currently Does not support this BAND
Line 3405: [AP_EMC]: Reset the FullBandScannedInfo.FreqList to default value !!
Line 3412: [AP_EMC]: Reset the FullBandScannedInfo.CellList to default value !!
Line 3464: pal_ERegId_FixedCpich: %d
Line 3468: Added Overrided Frequency: %i, Rssi: %i dBm to FddNetwork at index: %i
Line 3480: start BlindFreqScan
Line 3494: ERROR Illegal State
Line 3510: ERROR Illegal State
Line 3525: BlindFreqScanRequired is set but no Freq available to scan
Line 12866: UsedFreqId is NULL
Line 12887: FreqId is NULL
Line 10251: Shared PLMN is not selectable
Line 10255: Shared PLMN is Selectable, Hence Frequency can be camped on
Line 14383: uarfcn %d, SearchRequired %d
Line 13592: CellSelectionDone: FddNetwork_p->Sir_NumCells (%d), FddNetwork_p->EcNo_NumCells (%d)
Line 13604: Update Best RSCP - ServingFreq %d, Cpich %d, Rscp %d (%d dBm)
Line 13613: Update Best RSCP - InterFreq %d, Cpich %d, Rscp %d (%d dBm)
Line 13633: Update Best RSCP - ServingFreq %d, Cpich %d, Rscp %d (%d dBm)
Line 13642: Update Best RSCP - InterFreq %d, Cpich %d, Rscp %d (%d dBm)
Line 13654: CellSelectionDone: ERROR FddNetwork_p->Sir_NumCells (%d) > MAXCELLS
Line 13659: CellSelectionDone: ERROR FddNetwork_p->EcNo_NumCells (%d) > MAXCELLS
Line 13666: CellSelectionDone: BlindFreqScanUsed
Line 13672: FinishCellSelection: BlindFreqScan Not Used
Line 13689: CellSelectionDone: IsNotSelectable is not needed by Abort_Scan
Line 13695: CellSelectionDone: IsNotSelectable is not needed by Abort_Scan
Line 3873: ERROR Illegal State
Line 13320: End Retest Used Freq Cell
Line 12782: [StartBlindRSSIScan] rrc_Features.SuppTxFailParam %d, remove all barred cell with cause BaredRachFailure
Line 12800: [BPLMN]Start Scan for Band Id %d 
Line 12814: Start Scan for Band Id %d 
Line 12824: ERROR Illegal State
Line 3562: ERROR unable to register  for Cell Reselection Notification
Line 3651: start BlindFreqScan for Fetching MCC
Line 3657: ERROR Illegal State
Line 3595: ERROR unable to register  for Cell Reselection Notification
Line 3600: Backgnd Search : PlmnId Detection starting - %i Frequencies to examine
Line 3610: Backgnd Search : Blind Frequency Search initaited
Line 6682: Retry freq after resume
Line 6691: Removing frequency: %i from detected list
Line 6698: FreqId is NULL
Line 6795: Ptr: CurrentCell == NULL
Line 6807: Reading MCC Success
Line 6827: ERROR Illegal State
Line 6833: [FddNetwork] DetectedFreqIx %d, NumFreqs %d
Line 6855: ERROR Illegal State
Line 6862:  FddNetwork_p->DetectedFreqIx %d
Line 6863:  FddNetwork_p->NumFreqs %d
Line 6874: ERROR Illegal State
Line 6879: All frequencies in Band scanned.. exhausted
Line 6884: ERROR Illegal State
Line 6909: ERROR Illegal State
Line 14211: [URRC_ANR]: SibSubscriptionType set to %d Because rrc_FddNetwork UtraSiAcqForHoMode(%d) and si_requestForHO(%d)
Line 14219: [URRC_ANR]: rrc_FddNetwork NotActive_SubscribeSysInfoForAnr
Line 14245: [URRC_ANR]: ERROR Adding (%i,%i) to rrc_Frequency_AddCellTo
Line 14248: [URRC_ANR]: Adding (%i,%i) to Network in NotActive_SubscribeSysInfoForAnr
Line 14255: [URRC_ANR]: ERROR Illegal State in NotActive_SubscribeSysInfoForAnr
Line 14155: [URRC_ANR]: GenAnrInfoRead SUCCESS received
Line 14159: [URRC_ANR]: GenAnrInfoRead FAIL received
Line 14166: [URRC_ANR]: GenAnrInfoRead ABORTED received
Line 14170: [URRC_ANR]: GenAnrInfoRead NOT EXPECTED msg received
Line 8677: Foregnd Search : PlmnId Detection starting - %i Frequencies to examine
Line 8684: Serious Error: InitiateForegroundNwScanOn No Freqeuncies
Line 8700: Foregnd Search : PlmnId Detection starting - %i Frequencies to examine
Line 8707: Serious Error: InitiateForegroundNwScanOn No Freqeuncies
Line 8716: Backgnd Search : Blind Frequency Search initaited
Line 4776: start BlindFreqScan for UsedFreq
Line 4788: retest Next Used Freq
Line 4802: Used Freq Exhausted, Picking Next Freq
Line 4815: retest a barred cell freq (%d)
Line 4835: next RetestBarredCellFreq (%d)
Line 4852: next RetestBarredCellFreq (%d)
Line 4900: [BlindFreqScan FastRecovery] Fast Recovery from BlindFreqScan Established  
Line 13272: RetestUsedFreqTimer :UsedFreqScanInterval[%d]=%d MaxScanInterval[%d]
Line 13275: RetestUsedFreqTimer : CurNumberOfRepeat[%d] UsedFreqScanRepeatCnt[%d]
Line 13286: ERROR starting RetestUsedFreqTimer
Line 13290: RetestUsedFreqTimer started (TmId=%d)
Line 13293: Schedule Retest Used Freq for +%d
Line 13346: Time to Retest Used Frequency
Line 13388: Add LastUsedFreq
Line 13415: No Used Frequency Available
Line 10347: Shared PLMN is not selectable
Line 10351: Shared PLMN is Selectable, Hence Frequency can be camped on
Line 5033: Cannot find same RNC Cell anymore from SirCellList, Just select next best cell
Line 5044: Try to select next Same RNC cell from EcNoCellList : isSameRNCCellFound(%i)
Line 5049: Cannot find same RNC Cell anymore from EcNoCellList, Just select best cell
Line 5061: Normal CellSelection : FddNetwork try to get next candidate cell
Line 5088: [AP_EMC]: Added to StoredFreqScannedInfo [%d]: Freq: %d !!
Line 5092: [AP_EMC]: StoredFreqScannedInfo[%d] , Uarfcn: %d already searched !!
Line 5100: [AP_EMC]: Reset the FullBandScannedInfo.CellList to default value !!
Line 5111: [AP_EMC]: Uarfcn: %d, Indx: %d set to TRUE !!
Line 5117: [AP_EMC]: Uarfcn: %d, Indx: %d already set to TRUE !!
Line 5156: Fatal Error : Unknown CurrentSelectionType(%d)!!!!! 
Line 5172: FirstBestCellTry From EcNo_CellListPtr after exausting SirCellListPtr
Line 10858: FindBestSameLAICellWithSCellFromFddCellList : EcN0 Threshold %i
Line 10900: Error: Cannot find SIB1 from SCellSysInfoIdx(%i)
Line 10925: Sir_CellList[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnecteModeCell HcsPriority (%d), skip this cell list
Line 10937: Same LAI & RAI found at SirCellListPtr[%i](ARFCN%i/PSC%i)(SirCandidate LAC 0x%x, Current LAC 0x%x) (SirCandidate RAC 0x%x, Current RAC 0x%x)
Line 10945: Same LAI found at SirCellListPtr[%i](ARFCN%i/PSC%i)(SirCandidate LAC 0x%x, Current LAC 0x%x)
Line 10961: LAI / RAI Not matched at SirCellListPtr[%i](ARFCN%i/PSC%i)(SirCandidate LAC 0x%x, Current LAC 0x%x) (SirCandidate RAC 0x%x, Current RAC 0x%x)
Line 10968: LAI Not matched at SirCellListPtr[%i](ARFCN%i/PSC%i)(SirCandidate LAC 0x%x, Current LAC 0x%x)
Line 10977: SirCellListPtr[%i] EcN0[%i](%i dBm) < SameLAI_EcN0_Threshold_Value(%d)
Line 10984: SirCellListPtr[%i] EcN0[%i](%i dBm) Barred(%i)
Line 10990: SirCellListPtr[%i](UARFCN%d PSC%d) is not found from SysInfoCache
Line 11029: Error: Cannot find SIB1 from SCellSysInfoIdx(%i)
Line 11054: EcNoCellListPtr[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnectedModeCell HcsPriority (%d), skip this cell list
Line 11066: Same LAI & RAI found at EcNoCellListPtr[%i](ARFCN%i/PSC%i)(EcioCandidate LAC 0x%x, Current LAC 0x%x) (EcioCandidate RAC 0x%x, Current RAC 0x%x)
Line 11073: Same LAI found at EcNoCellListPtr[%i](ARFCN%i/PSC%i)(EcioCandidate LAC 0x%x, Current LAC 0x%x)
Line 11089: LAI / RAI Not matched at SirCellListPtr[%i](ARFCN%i/PSC%i)(EcioCandidate LAC 0x%x, Current LAC 0x%x) (EcioCandidate RAC 0x%x, Current RAC 0x%x)
Line 11096: LAI Not matched at CellListPtr[%i](ARFCN%i/PSC%i)(EcioCandidate LAC 0x%x, Current LAC 0x%x)
Line 11105: EcNoCellListPtr[%i] EcN0[%i](%i dBm) < SameLAI_EcN0_Threshold_Value(%d)
Line 11112: EcNoCellListPtr[%i] EcN0[%i](%i dBm) Barred(%i)
Line 11118: EcNoCellListPtr[%i](UARFCN%d PSC%d) is not found from SysInfoCache
Line 10689: isDcPreferredCellSelection is disabled for CS Only Stack
Line 10716: Sir_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
Line 10733: Sir_CellList[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnecteModeCell(UARFCN%i/PSC%i) HcsPriority (%d), skip this cell list
Line 10753: CurrentCellListIx %i (Sir_NumCells %i)
Line 10759: CurrentCellListIx %i (Sir_NumCells %i)
Line 10775: EcNo_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
Line 10792: EcNo_CellList[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnecteModeCell(UARFCN%i/PSC%i) HcsPriority (%d), skip this cell list
Line 10812: CurrentCellListIx %i (EcNo_NumCells %i)
Line 10818: CurrentCellListIx %i (EcNo_NumCells %i)
Line 10824: NO Selectable Cell Found in CellListPtr(Sir_NumCells %i, EcNo_NumCells %i)
Line 10504: Sir_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
Line 10521: Sir_CellList[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnecteModeCell(UARFCN%i/PSC%i) HcsPriority (%d), skip this cell list
Line 10545: [BlackList] Found DC FREQ but UARFCN%d is in BlackListed Frequency
Line 10552: Found DC SIR Cell @Index %i (Sir_NumCells %i)
Line 10559: First Non-DC SIR Cell @Index %i (Sir_NumCells %i)
Line 10563: CurrentCellListIx %i (Sir_NumCells %i)
Line 10582: EcNo_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
Line 10599: EcNo_CellList[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnecteModeCell(UARFCN%i/PSC%i) HcsPriority (%d), skip this cell list
Line 10625: [BlackList] Found DC FREQ but UARFCN%d is in BlackListed Frequency
Line 10629: EcNo Cell @CurrentCellListIx %i , EcNoDb [%d] 
Line 10635: Found DC EcNo Cell @Index %i
Line 10642: First Non-DC EcNo Cell @Index %i
Line 10646: urrentCellListIx %i (EcNo_NumCells %i)
Line 10661: NO Selectable Cell Found in CellListPtr(Sir_NumCells %i, EcNo_NumCells %i)
Line 11137: rrc_FddNetwork_FindBestSameRNCCellWithSCellFromFddCellList : EcN0 Threshold %i
Line 11149: Sir_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
Line 11162: RNCID matched at SirCellListPtr[%i](ARFCN%i/PSC%i)
Line 11170: SirCellListPtr[%i] EcN0[%i](%i dBm) < EcN0_Threshold_Value(%d)
Line 11177: SirCellListPtr[%i] EcN0[%i](%i dBm) Barred(%i)
Line 11181: This is not a SameRNCCell
Line 11194: Sir_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
Line 11205: Same RNCID found at EcNoCellListPtr[%i](ARFCN%i/PSC%i)
Line 11216: EcNoCellListPtr[%i] EcN0[%i](%i dBm) < EcN0_Threshold_Value(%d)
Line 11223: EcNoCellListPtr[%i] EcN0[%i](%i dBm) Barred(%i)
Line 11227: This is not a SameRNCCell
Line 975: GetFreqListIndex: Wrong Band Id %d
Line 12917: numDisFreqtosearch is ZERO
Line 12934: UsedFreqId is NULL
Line 12952: FreqId is NULL
Line 12957: Current Discrete Count = [%d]
Line 11496: ERROR [BlindFreqScan FastRecovery] the Uarfcn %d can not be found!
Line 11504: [BlindFreqScan FastRecovery] Found Uarfcn %d with %d Aset Cells  regardless BlindFreqScan result
Line 11523: [BlindFreqScan FastRecovery] Add Aset Cells PSC: %d 
Line 11536: [BlindFreqScan FastRecovery] Add Serving Cells PSC: %d 
Line 5245: Waiting For BlindFreqScanInd
Line 5249: ERROR Illegal State
Line 5259: ERROR Illegal State
Line 5264: Any Freq Instance and BlindFreqScan Instance exist
Line 10164: Retest Barred Cell on %d
Line 10179: RetestBarredCellFreq array is full
Line 10185: wrong Uarfcn (%d)
Line 5315: FirstBestCellTry From SirCellListPtr During EnterIdleFromConnected
Line 5335: FirstBestCellTry From EcNoCellListPtr During EnterIdleFromConnected
Line 5368: FirstBestCellTry From SirCellListPtr During EnteringToFachPchFromDch
Line 5382: FirstBestCellTry From EcNoCellListPtr During EnteringToFachPchFromDch
Line 5399: FirstBestCellTry From SirCellListPtr During Normal CellSelection
Line 5409: FirstBestCellTry From EcNoCellListPtr During Normal CellSelection
Line 5455: Blind Freq Scan - Full ACQ = FALSE
Line 5463: Retest Ongoing
Line 1626: Blind Used Freq Sacn for UsedFreq failed - ignoring results
Line 1641: Blind Freq Sacn for UsedFreq - Full ACQ : numOfFreq %d EcNoThreshold %d
Line 1657: >> Blind Freq Scan - Full ACQ : UARFCN %d, numOfCells %d
Line 1680: Blind Freq Scan - Full ACQ : ARFCN %d PSC %d EcN0 %d (%d dB) Rscp %d (%d dBm)
Line 1710: BlindFreqScan (SirBased) - UARFCN %d: BestEcNo %d (%d dB), BestRscp %d (%d dBm)
Line 1718: Blind Freq Scan error - no freq in FddNetwork's FreqList
Line 1724: >> NOTE: No Candidate Found on this Network
Line 1730: > Candidate Found on this Network (Sir_NumCells = %d, EcNo_NumCells = %d)
Line 1749: Retest - Blind Freq Scan - Full ACQ = FALSE: numOfFreq %d
Line 1763: [MRU Freq %d] RSSI Adjustment:: %d -> %d
Line 1791: updated Frequency: %i, Rssi: %i dBm to FddNetwork  at index: %i DualCarriePresent(%d)
Line 1796: updated Frequency: %i, Rssi: %i dBm to FddNetwork  at index: %i
Line 1801: Blind Freq Scan Ind error - no freq in FddNetwork's FreqList
Line 2792: isDcPreferredCellSelection is disabled for CS Only Stack
Line 2802: BuildFddCellListFromBlindFreqScanInd for UARFCN %i, numOfCells %i (IsSirBased %d)
Line 2862: AddGoodRscpToSirCellList & Sort_CellListSir :: Check Triggering Conditions for Sir-based Cell Selection
Line 2902: [AP_EMC]: - Cell Rejected (Uarfcn %d, Psc %d) already EMC searched cell !!
Line 2911: - Rejecting (Uarfcn %d, Psc %d) as SIR cell selection cause of BlackListed Cell
Line 2913: :: Sir %d (>%d), Rscp %d (>%d), EcNo %d (>%d)
Line 2917: - Cell Rejected (Uarfcn %d, Psc %d) cause of BlackListed Cell
Line 2922: - Add this Cell to EcN0CellListPtr
Line 2948: - Accepting (Uarfcn %d, Psc %d) as SIR cell selection conditions met
Line 2950: :: Sir %d (>%d), Rscp %d (>%d), EcNo %d (>%d)
Line 2986: - PSC %d: Band %d, DcStatus %d, give the same BandPrio as Band2
Line 3008: - Band %d: BandPrioritySir %d vs Sir %d
Line 3029: - Accepting (Uarfcn %d, Psc %d) as SIR cell selection conditions met
Line 3031: :: Sir %d (>%d), EcNo %d (>%d)
Line 3067: - Band %d: DcStatus %d, give the same BandPrio as Band2
Line 3088: - Band %d: BandPrioritySir %d vs Sir %d
Line 3105: - Rejecting (Uarfcn %d, Psc %d) as SIR cell selection conditions not met
Line 3107: :: Sir %d (>%d), Rscp %d (>%d), EcNo %d (>%d)
Line 3109: - Add this Cell to EcN0CellListPtr
Line 3138: >>> No Sir Candidate Found on Uarfcn %d
Line 3145: >>> Sort BandPrioSir
Line 3166: >>> Sort BandPrio
Line 3176: WARNING FddNetwork_p->Sir_NumCells(%d) > 32
Line 3181: >>> No EcN0 Candidate Found on Uarfcn %d
Line 3192: WARNING FddNetwork_p->EcNo_NumCells(%d) > 32
Line 2349: BuildFddCellListFromBlindFreqScanInd for UARFCN %i, numOfCells %i (IsSirBased %d)
Line 2440: AddGoodRscpToSirCellList & Sort_CellListSir :: Check Triggering Conditions for Sir-based Cell Selection
Line 2466: - Rejecting (Uarfcn %d, Psc %d) as SIR cause of BlackListedCell
Line 2468: :: Sir %d (>%d), Rscp %d (>%d), EcNo %d (>%d)
Line 2472: - Cell Rejected (Uarfcn %d, Psc %d) cause of BlackListed Cell
Line 2477: - Add this Cell to EcN0CellListPtr
Line 2503: - Accepting (Uarfcn %d, Psc %d): DcStatus[%d] as SIR cell selection conditions met or DC was configured
Line 2505: :: Sir %d (SirTh %d), Rscp %d (BestRscpTh %d), EcNo %d (EcNoDbTh %d)
Line 2511: At least One Cell has satisfied SIR Criteria
Line 2531: - Band %d: BandPrioritySir %d vs Sir %d
Line 2553: - Accepting (Uarfcn %d, Psc %d) as SIR cell selection conditions met
Line 2555: :: Sir %d (>%d), EcNo %d (>%d)
Line 2559: At least One Cell has satisfied SIR Criteria
Line 2576: - Band %d: BandPrioritySir %d vs Sir %d
Line 2593: - Rejecting (Uarfcn %d, Psc %d) as SIR cell selection conditions not met
Line 2595: :: Sir %d (>%d), Rscp %d (>%d), EcNo %d (>%d)
Line 2597: - Add this Cell to EcN0CellListPtr
Line 2630: >>> No Sir Candidate Found on Uarfcn %d
Line 2637: >>> Sort BandPrioSir
Line 2660: At least One Cell has satisfied SIR Criteria
Line 2664: >>> Sort BandPrio
Line 2674: WARNING FddNetwork_p->Sir_NumCells(%d) > 32
Line 2679: >>> No EcN0 Candidate Found on Uarfcn %d
Line 2690: WARNING FddNetwork_p->EcNo_NumCells(%d) > 32
Line 2706: - Band %d: DcStatus %d 
Line 11271: RNC ID: 0x%X (UC-ID : 0x%X)
Line 11276: Same RNCID matched (ARFCN%i/PSC%i RncId 0x%x) with TargetRncId 0x%x
Line 11283: Same RNCID not matched (ARFCN%i/PSC%i RncId 0x%x) with TargetRncId 0x%x
Line 11288: Error: Cannot find SIB3 from SCellSysInfoIdx(%i)
Line 11293: SysInfoCache for (ARFCN%i/PSC%i) is not available
Line 11302: Same RNCID returned for (ARFCN%i/PSC%i) which was active set
Line 3322: + Adding (Uarfcn %i, Psc %i) to Temporal CellList: Rscp %i dBm, EcNo %i dB, FreqSir %i dB, BandSelMetric %i dB
Line 3324: :: BandPrioSir %i dB, BandPrio %i, isSameRNCIDCell %i, PConflictPrio %i
Line 3332: AddGoodRscpToEcNoCellList - Rejected (Uarfcn %i, Psc %i) as a cell selection candidate due to low Cpich Rscp: %i dBm, isSameRNCIDCell %i
Line 3219: Overwriting existing cell entry
Line 2254: CapFreqSir: Uarfcn %d, FreqSir %d, SirCap %d
Line 2258: >> Capping FreqSir(%d) to %d
Line 3269: + Adding (Uarfcn %i, Psc %i) to SirCellList: Rscp %i dBm, EcNo %i dB, FreqSir %i dB, BandSelMetric %i dB
Line 3271: :: BandPrioSir %i dB, BandPrio %i, isSameRNCIDCell %i, PConflictPrio %i
Line 3279: - Rejected (Uarfcn %i, Psc %i) as a cell selection candidate due to low Cpich Rscp: %i dBm, isSameRNCIDCell %i
Line 3203: Overwriting existing cell entry
Line 2131: Sort_CellListSir: Rscp cmp_b(%d) > cmp_a(%d)
Line 2139: Sort_CellListSir: Rscp cmp_b(%d) < cmp_a(%d)
Line 2146: Sort_CellListSir: Rscp cmp_b(%d) == cmp_a(%d)
Line 2274: isDcPreferredCellSelection is disabled for CS Only Stack
Line 2322: >>> Sort BandPrio
Line 2330: No Cell Satisfied SIR Criteria, So, moving all DcPreferred Cells into ECNO Cell list
Line 2335: All DcPreferred Cells can not be placed into ECNO Cell list
Line 1335: >> FddNetwork Sir_CellList[%i] (Uarfcn %i, Psc %i) EcNo %i, Rscp %i, CappedFreqSir %i, BandSelMetric %i
Line 1339: >>>>>> BandPrioSir %i, BandPrio %i
Line 1340: >>>>>> PagingConflictPrio %i
Line 1355: >> FddNetwork EcNo_CellList[%i] (Uarfcn %i, Psc %i) EcNo %i, Rscp %i, CappedFreqSir %i, BandSelMetric %i
Line 1359: >>>>>> BandPrioSir %i, BandPrio %i
Line 1360: >>>>>> PagingConflictPrio %i
Line 1427: Blind Freq Sacn failed - ignoring results
Line 1442: Blind Freq Scan - Full ACQ : numOfFreq %d EcNoThreshold %d
Line 1458: >> Blind Freq Scan - Full ACQ : UARFCN %d, numOfCells %d
Line 1481: Blind Freq Scan - Full ACQ : ARFCN %d PSC %d EcN0 %d (%d dB) Rscp %d (%d dBm)
Line 1509: BlindFreqScan (SirBased) - UARFCN %d: BestEcNo %d (%d dB), BestRscp %d (%d dBm)
Line 1516: Blind Freq Scan error - no freq in FddNetwork's FreqList
Line 1522: >> NOTE: No Candidate Found on this Network
Line 1528: > Candidate Found on this Network (Sir_NumCells = %d, EcNo_NumCells = %d)
Line 1536: Blind Freq Scan - Full ACQ = FALSE: numOfFreq %d
Line 1561: [MRU Freq %d] RSSI Adjustment:: %d -> %d
Line 1590: updated Frequency: %i, Rssi: %i dBm to FddNetwork  at index: %i DualCarriePresent(%d)
Line 1595: updated Frequency: %i, Rssi: %i dBm to FddNetwork  at index: %i
Line 1600: Blind Freq Scan Ind error - no freq in FddNetwork's FreqList
Line 5497: [CheckingCellSuitability_CuphyBlindFreqScanCnf - Negative confirmation
Line 5518: CheckingCellSuitability_CuphyBlindFreqScanCnf - Positive confirmation
Line 8903: [URRC SR_IF DSDS]Sending Abort Req to Uphy
Line 8912: ERROR Illegal State
Line 3738: ERROR Illegal State
Line 1114: Blind Cell Search failed - ignoring results
Line 1137: [MRU Freq %d] RSSI Adjustment:: %d -> %d
Line 1162: [AP_EMC]: Freq %d is already searched - Skip !!
Line 1174: Frequency: %i, Rssi: %i dBm is increased due to Neighbour or Detected Freq.
Line 1182: Added Frequency: %i, Rssi: %i dBm to FddNetwork top of the Freqlist with NumFreqs = %i
Line 3764: BlindRssiScan: Negative Cnf
Line 3773: BlindRssiScan: Positive Cnf
Line 3802: [URRC SR_IF DSDS]Sending Abort Req to Uphy
Line 3810: ERROR Illegal State
Line 8838: [URRC SR_IF DSDS]Sending Abort Req to Uphy
Line 8847: ERROR Illegal State
Line 3935: For Serving Uarfcn = %d
Line 3950: ERROR Illegal State
Line 3959: ERROR Illegal State
Line 3973: ERROR Illegal State
Line 4003: ERROR Illegal State
Line 4028: [BPLMN] No Time to complete the BCCH read. Will be done in the next DRX
Line 4034: [BPLMN] No More cells found on Frequency: %i
Line 4042: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 4063: ERROR Illegal State
Line 4072: ERROR Illegal State
Line 4078: No cells found on Frequency: %i
Line 5851: [BPLMN] remaining Expiry Time: %dms
Line 5871: BPLMN ERROR : Wrong Request
Line 5877: [BPLMN] Error Querying the Timer for remaining time - Pal failure
Line 5882: [BPLMN] Error mapping the timer Handle at PAL and Timer ID at RRC 
Line 4662: ERROR Illegal State
Line 4119: Cell detection on the Freq %i failed
Line 4129: [BPLMN] No time for Cell serch, scheduled for next DRX time
Line 4132: ERROR Illegal State
Line 4162: ERROR Illegal State
Line 4169: [URRC SR_IF DSDS]Sending Abort Req to Uphy
Line 4182: ERROR Illegal State
Line 4208: ERROR Illegal State
Line 5687: [BPLMN] Wrong Band Id %d
Line 5700: [BPLMN] Frequencies scanned : %i Scanned till now PerBand : %i Total Scanned till now : %i
Line 5710: [BPLMN] Frequencies scanned %d are less than the total for FddNetwork_p band %d
Line 5722: [BPLMN] PlmnId Detection starting - Frequencies to search for Cells/Total freq detected = %i / %i
Line 5727: [BPLMN] starting the stored cell search after Blind Scan
Line 5735: [BPLMN] Not enough time now, hence shifting the stored cell search for the next cycle
Line 5743: [BPLMN] Starting Next Band Scan
Line 5777: [PLMN_LIST] Starting Next Band Scan
Line 5784: PlmnId Detection starting - %i Frequencies to examine
Line 5801: PlmnId Detection failed - no frequencies detected!
Line 5808: PlmnId Detection not possible as Cell Reselection is in progress
Line 13170: [BPLMN] Wrong Band Id %d
Line 13190: ERROR Illegal State
Line 5916: [URRC SR_IF DSDS]Sending Abort Req to Uphy
Line 5924: ERROR Illegal State
Line 5607: PlmnId Detection starting - %i Frequencies detected
Line 5615: PlmnId Detection failed - no Stored frequencies detected!
Line 1373: Blind Freq Sacn failed - ignoring results
Line 1388: Blind Freq Scan - MCC Detection : numOfFreq %d
Line 5566: [DetectionFreqSearch] CuphyBlindFreqScanCnf - Negative confirmation
Line 5575: [DetectionFreqSearch] CuphyBlindFreqScanCnf - Positive confirmation
Line 5942: ERROR Illegal State
Line 5949: [URRC SR_IF DSDS]Sending Abort Req to Uphy
Line 5962: ERROR Illegal State
Line 6989: ERROR Illegal State
Line 7001: ERROR Illegal State
Line 7011: [BPLMN] BPLMN search under progress
Line 7069: [BPLMN] HPLMN id found
Line 7076: ERROR Illegal State
Line 7082: [BPLMN] HPLMN id NOT found, checking Next Cell on same Frequency
Line 7095: ERROR Illegal State
Line 7100: [BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
Line 7103: ERROR Illegal State
Line 7111: [BPLMN] No cells found on Frequency: %i
Line 7118: [BPLMN] Cell Pointer should not be NULL here
Line 7123: [BPLMN] NO BPLMN search under progress
Line 7137: [BPLMN] No time for Cell serch, scheduled for next DRX time
Line 7140: ERROR Illegal State
Line 7174: [BPLMN] MIB reading Error on Cell : %i
Line 7182: [BPLMN] checking Next Cell  %i on same Frequency
Line 7191: ERROR Illegal State
Line 7197: [BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
Line 7200: ERROR Illegal State
Line 7208: [BPLMN] MIB reading Error , No cells found on Frequency: %i
Line 7222: [BPLMN] No time for Cell serch, scheduled for next DRX time
Line 7225: ERROR Illegal State
Line 7256: ERROR Illegal State
Line 7281: ERROR Illegal State
Line 9678: Message Generation Error
Line 9686: ERROR Illegal State
Line 9693: ERROR Illegal State
Line 4744: ERROR Illegal State
Line 6558: ERROR Illegal State
Line 6575: BlindRssiScan: Negative Cnf
Line 6584: BlindRssiScan: Positive Cnf
Line 6610: ERROR Illegal State
Line 6627: BlindFreqScan: Negative Cnf
Line 6638: BlindFreqSearch: Positive Cnf
Line 10104: [BPLMN] HPLMN updated
Line 10120: [BPLMN] HPLMN updated
Line 10133: ERROR Illegal State
Line 10138: [BPLMN] Cell Pointer should not be NULL here
Line 10143: [BPLMN] NO BPLMN search under progress
Line 10029: ERROR Illegal State
Line 6368: [DS_CELL_SEL] Ignore BlindCellSearchInd. CellDetection PAUSED by DSRC
Line 6383: [BPLMN] Frequencies scanned : %i Total Scanned till now : %i
Line 6401: BlindRssiScan: Negative Cnf
Line 6410: BlindRssiScan: Positive Cnf
Line 6220: [BPLMN] FddNetwork_p == NULL 
Line 6228: [BPLMN] Blind Scan earlier had failed. Remove the TIDs and Continue with Scan
Line 6267: BPLMN ERROR : Wrong Band Id %d
Line 6276: [BPLMN] Frequencies scanned %d are less than the total for FddNetwork_p band %d
Line 6278: Background : Frequencies scanned are less than the total for FddNetwork_p band %i
Line 6282: [BPLMN] PlmnId Detection starting - Frequencies to search for Cells/Total freq detected = %i / %i
Line 6294: [BPLMN] starting the stored cell search after Blind Scan
Line 6302: [BPLMN] Not enough time now, hence shifting the stored cell search for the next cycle
Line 6310: [BPLMN] Starting Next Band Scan
Line 6341: [BPLMN] Frequency Search Already Paused!!!
Line 6007: [BPLMN] FddNetwork_p == NULL 
Line 6015: [BPLMN] Blind Scan earlier had failed. Remove the TIDs and Continue with Scan
Line 6026: restart Fresh BlindFreqScan for Fetching MCC
Line 6032: ERROR Illegal State
Line 6045: PlmnId Detection failed - no Stored frequencies detected!
Line 6092: BPLMN ERROR : Wrong Band Id %d
Line 6101: [BPLMN]Frequencies scanned %d are less than the total for FddNetwork_p band %d
Line 6103: Background : Frequencies scanned are less than the total for FddNetwork_p band %i
Line 6108: [BPLMN] PlmnId Detection starting - Frequencies to search for Cells/Total freq detected = %i / %i
Line 6120: [BPLMN] starting the stored cell search after Blind Scan
Line 6128: [BPLMN] Not enough time now, hence shifting the stored cell search for the next cycle
Line 6136: [BPLMN] Starting Next Band Scan
Line 6167: [PLMN_LIST] Starting Next Band Scan
Line 6174: PlmnId Detection starting - %i Frequencies to examine
Line 6192: PlmnId Detection failed - no frequencies detected!
Line 6199: PlmnId Detection not possible as Cell Reselection is in progress
Line 6452: [BPLMN] FddNetwork_p == NULL 
Line 6459: BPLMN : Blind Search earlier had failed. Remove the TIDs and Continue with Scan
Line 6493: [DS_CELL_SEL] ERROR : Wrong Band Id %d
Line 6498: [DS_CELL_SEL] : Frequencies scanned %d are less than the total for FddNetwork_p band %d
Line 6500: [DS_CELL_SEL] : Frequencies scanned are less than the total for FddNetwork_p band %i
Line 6510: PlmnId Detection starting - %i Frequencies to examine
Line 6518: PlmnId Detection failed - no frequencies detected!
Line 6524: PlmnId Detection not possible as Cell Reselection is in progress
Line 4249: ERROR Illegal State
Line 4595: Aborted processed
Line 4453: ERROR Illegal State
Line 4462: ERROR Illegal State
Line 4475: ERROR Illegal State
Line 4501: [BPLMN] MIB Read requested on Cell %i
Line 4508: [BPLMN] ERROR Illegal State
Line 4532: [BPLMN] No More cells found on Frequency: %i
Line 4542: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 4549: [BPLMN] No Time to complete the BCCH read. Will be done in the next DRX
Line 4561: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 4583: [BPLMN] Cell Detection Already Paused!!!
Line 4284: ERROR Illegal State
Line 4295: ERROR Illegal State
Line 4311: ERROR Illegal State
Line 4338: [BPLMN] MIB Read requested on Cell %i
Line 4345: ERROR Illegal State
Line 4369: [BPLMN] No More cells found on Frequency: %i
Line 4379: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 4386: [BPLMN] No Time to complete the BCCH read. Will be done in the next DRX
Line 4414: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 4606: [DS_CELL_SEL] BPLMN: Cell Detection Already Paused !!!
Line 4634: [DS_CELL_SEL] Frequency: %d re-tried
Line 4638: ERROR Illegal State
Line 9888: ERROR Illegal State
Line 9911: PausedReadingPLMNIdonCell_Aborted called
Line 9823: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 9842: ERROR Illegal State
Line 9847: [BPLMN] No More cells found on Frequency: %i
Line 9856: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 9929: [BPLMN] MIB Read Already Paused!!!
Line 9748: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 9770: ERROR Illegal State
Line 9775: [BPLMN] No More cells found on Frequency: %i
Line 9786: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 9995: [DS_CELL_SEL] BPLMN: MIB Read Already Paused!!!
Line 9958: [DS_CELL_SEL] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 9972: ERROR Illegal State
Line 9977: [DS_CELL_SEL] No cells found on Frequency: %i
Line 13811: [URRC_ANR]: PausedReadingAnrInfo_Aborted called
Line 13815: [URRC_ANR]: ERROR Illegal State in PausedReadingAnrInfo_Aborted
Line 13844: [URRC_ANR]:ReadingAnrInfoOnCell_AnrInfoReadSuccess
Line 13892: ERROR Illegal State
Line 13920: [URRC_ANR]:ReadingAnrInfoOnCell_AnrInfoReadFailure
Line 13953: [URRC_ANR]: rrc_FddNetwork ReadingAnrInfoOnCell_AnrPause
Line 13962: [URRC_ANR]: Message Generation Error in ReadingAnrInfoOnCell_AnrPause
Line 13969: [URRC_ANR]: ERROR Illegal State in ReadingAnrInfoOnCell_AnrPause
Line 13988: [URRC_ANR]: rrc_FddNetwork ReadingAnrInfoOnCell_AnrAbort
Line 13997: [URRC_ANR]: Message Generation Error in ReadingAnrInfoOnCell_AnrAbort
Line 14002: [URRC_ANR]: ERROR Illegal State in ReadingAnrInfoOnCell_AnrAbort
Line 14040: [URRC_ANR]: PausedReadingAnrInfo_Aborted called
Line 14044: [URRC_ANR]: ERROR Illegal State in PausedReadingAnrInfo_Aborted
Line 14297: [URRC_ANR]:ERROR!! AnrHandlerPtr cannot be NULL
Line 14304: [URRC_ANR]: SibSubscriptionType set to %d Because rrc_FddNetwork UtraSiAcqForHoMode(%d) and si_requestForHO(%d)
Line 14307: [URRC_ANR]: PausedReadingAnrInfo_AnrResume called
Line 14311: [URRC_ANR]:ERROR!! ANR Resumed but DetectedCellPtr or AnrHandlerPtr cannot be NULL as this is the FddCellSelReselInfo Instance
Line 14322: [URRC_ANR]: ERROR!! PausedReadingAnrInfo_AnrResume	anr_Uarfcn:%d, fddCell_Uarfcn:%d, anr_Cpich:%d, fddCell_Cpich:%d 
Line 14326: [URRC_ANR]: ANR Resumed successfully PausedReadingAnrInfo_AnrResume
Line 14339: Message Generation Error
Line 14350: ERROR Illegal State
Line 14074: [URRC_ANR]: AbortingReadingAnrInfo_Aborted called
Line 14078: [URRC_ANR]: ERROR Illegal State in AbortingReadingAnrInfo_Aborted
Line 14101: [URRC_ANR]: AbortingReadingAnrInfo_Aborted called
Line 14105: [URRC_ANR]: ERROR Illegal State in AbortingReadingAnrInfo_Aborted
Line 7325: ERROR Illegal State
Line 7349: ERROR Illegal State
Line 7358: [BPLMN] BPLMN search under progress
Line 7445: [BPLMN] WhiteListed Csg id (%d) found
Line 7452: Backgnd Csg Search: checking Next Cell on same Frequency
Line 7464: ERROR Illegal State
Line 7469: [BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
Line 7472: ERROR Illegal State
Line 7480: No cells found on Frequency: %i
Line 7487: [BPLMN] Cell Pointer should not be NULL here
Line 7492: [BPLMN] NO BPLMN search under progress
Line 7506: [BPLMN] No time for Cell serch, scheduled for next DRX time
Line 7509: ERROR Illegal State
Line 7543: [BPLMN] SIB reading Error on Cell : %i
Line 7551: [BPLMN] checking Next Cell  %i on same Frequency
Line 7559: ERROR Illegal State
Line 7565: [BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
Line 7568: ERROR Illegal State
Line 7577: [BPLMN] MIB reading Error , No cells found on Frequency: %i
Line 7584: [BPLMN] SIB reading Error on Cell : %i
Line 7592: [BPLMN] checking Next Cell  %i on same Frequency
Line 7600: ERROR Illegal State
Line 7606: [BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
Line 7609: ERROR Illegal State
Line 7617: [BPLMN] MIB reading Error , No cells found on Frequency: %i
Line 7631: [BPLMN] No time for Cell serch, scheduled for next DRX time
Line 7634: ERROR Illegal State
Line 7664: ERROR Illegal State
Line 7689: ERROR Illegal State
Line 7716: Message Generation Error
Line 7723: ERROR Illegal State
Line 7747: ERROR Illegal State
Line 7763: PausedReadingPLMNIdonCell_Aborted called
Line 7779: [BPLMN] CSG SIB Read Already Paused!!!
Line 7804: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 7829: Message Generation Error
Line 7834: ERROR Illegal State
Line 7844: ERROR Illegal State
Line 7849: [BPLMN] No More cells found on Frequency: %i
Line 7858: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 7908: ERROR Illegal State
Line 7920: ERROR Illegal State
Line 7930: [BPLMN] BPLMN search under progress
Line 7969: [BPLMN] HPLMN updated
Line 7985: [BPLMN] HPLMN updated
Line 7993: [BPLMN] HPLMN id NOT found, checking Next Cell on same Frequency
Line 8006: ERROR Illegal State
Line 8012: [BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
Line 8015: ERROR Illegal State
Line 8023: [BPLMN] No cells found on Frequency: %i
Line 8029: [BPLMN] Cell Pointer should not be NULL here
Line 8034: [BPLMN] NO BPLMN search under progress
Line 8048: [BPLMN] No time for Cell serch, scheduled for next DRX time
Line 8051: ERROR Illegal State
Line 8086: [BPLMN] MIB reading Error on Cell : %i
Line 8094: [BPLMN] checking Next Cell  %i on same Frequency
Line 8103: ERROR Illegal State
Line 8109: [BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
Line 8112: ERROR Illegal State
Line 8120: [BPLMN] MIB reading Error , No cells found on Frequency: %i
Line 8134: [BPLMN] No time for Cell serch, scheduled for next DRX time
Line 8137: ERROR Illegal State
Line 8187: ERROR Illegal State
Line 8257: ERROR Illegal State
Line 8264: ERROR Illegal State
Line 8270: Message Generation Error
Line 8437: ERROR Illegal State
Line 8442: Message Generation Error
Line 8376: [BPLMN] HPLMN updated
Line 8392: [BPLMN] HPLMN updated
Line 8406: [BPLMN] Cell Pointer should not be NULL here
Line 8411: [BPLMN] NO BPLMN search under progress
Line 8294: ERROR Illegal State
Line 8310: PausedReadingPLMNIdonCell_Aborted called
Line 8605: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 8623: ERROR Illegal State
Line 8628: [BPLMN] No More cells found on Frequency: %i
Line 8637: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 8460: [BPLMN] CSG SIB Read Already Paused!!!
Line 8499: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 8526: Message Generation Error
Line 8531: ERROR Illegal State
Line 8552: ERROR Illegal State
Line 8557: [BPLMN] No More cells found on Frequency: %i
Line 8568: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 8815: [DS_CELL_SEL] BPLMN: MIB Read Already Paused!!!
Line 8744: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 8769: Message Generation Error
Line 8774: ERROR Illegal State
Line 8785: ERROR Illegal State
Line 8790: [BPLMN] No More cells found on Frequency: %i
Line 8799: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 4693: ERROR Illegal State
Line 4700: ERROR Illegal State
Line 4707: ERROR Illegal State
Line 4712: Improper state information
Line 9061: CellSelection Aborted
Line 8957: ERROR Illegal State
Line 8968: ERROR Illegal State
Line 8973: [DS_CELL_SEL] Serious Coding Error : BlindFreqScan (%d), NumFreqs (%d)
Line 8990: ERROR Illegal State
Line 8999: ERROR Illegal State
Line 9046: BCH is open, no action taken
Line 9569: ERROR Illegal State
Line 9581: ERROR Illegal State
Line 9588: ERROR Illegal State
Line 9494: BlindFreqSearch: Negative Cnf
Line 9504: ERROR Illegal State
Line 9516: ERROR Illegal State
Line 9523: ERROR Illegal State
Line 9531: BlindFreqSearch: Positive Cnf
Line 9124: CellSelection Aborted
Line 9132: ERROR Illegal State
Line 9138: ERROR Illegal State
Line 9145: ERROR Illegal State
Line 9152: ERROR Illegal State
Line 9159: ERROR Illegal State
Line 9281: ERROR Illegal State
Line 9293: ERROR Illegal State
Line 9323: FirstBestCellTry From SirCellListPtr
Line 9343: FirstBestCellTry From EcNoCellListPtr
Line 9374: FirstBestCellTry From SirCellListPtr During EnteringToFachPchFromDch
Line 9390: FirstBestCellTry From EcNoCellListPtr During EnteringToFachPchFromDch
Line 9409: FirstBestCellTry From SirCellListPtr During Normal CellSelection
Line 9419: FirstBestCellTry From EcNoCellListPtr During Normal CellSelection
Line 9435: Blind Freq Scan - Full ACQ = FALSE
Line 9440: Retest Ongoing
Line 9460: Before pausing Discrete Count = [%d]
Line 9462: After pausing Discrete Count = [%d]
Line 9467: ERROR Illegal State
Line 9201: [PausingCellSelection_CuphyBlindFreqScanCnf - Negative confirmation
Line 9208: ERROR Illegal State
Line 9215: ERROR Illegal State
Line 9226: Before pausing Discrete Count = [%d]
Line 9228: After pausing Discrete Count = [%d]
Line 9236: ERROR Illegal State
Line 9244: CheckingCellSuitability_CuphyBlindFreqScanCnf - Positive confirmation
Line 1986: FddNetwork: ResetFddCellList(SirCellListPtr,EcNoCellListPtr)
Line 9638: [BPLMN] BCH read Will Pause Now. Same Cell will be tried for BCH read on RESUME
Line 9646: [BPLMN] BCH read Will Pause Now. Will be reread when RESUME
Line 9651: [BPLMN] Cell Search will be initiated in the next DRX Cycle on RESUME
Line 11926: Adding Frequency: %i to head of the list
Line 11981: Removing Frequency: %i from tail of the list
Line 11987: LastFreqId is NULL
Line 12026: Adding Used Frequency: %i to head of the list
Line 12067: Removing Used Frequency: %i from tail of the list
Line 12073: LastUsedFreqId is NULL
Line 12142: rrc_FddNetwork_Priv_AddCellTo failed. Invalid InterFreqCell frequency value (%i) 
Line 12149: rrc_FddNetwork_Priv_AddCellTo failed. Invalid InterFreqCell frequency value (%i) 
Line 12155: Invalid Cpich: %i for Uarfcn: %i - no entry added to stored network instance
Line 12167: >> Adding Cell(%i,%i) to Frequency
Line 12258: rrc_FddNetwork_Priv_AddCellTo failed. Invalid InterFreqCell frequency value (%i) 
Line 12264: rrc_FddNetwork_Priv_AddCellTo failed. Invalid InterFreqCell frequency value (%i) 
Line 12270: Invalid Cpich: %i for Uarfcn: %i - no entry added to stored network instance
Line 14541: rrc_FddNetwork_update_uarfcn_search_details:uarfcn updated is %d, 
Line 14547: rrc_FddNetwork_update_uarfcn_search_details:Skipped As Additional Freq: UARFCN is %d, Total Freq %d
Line 14623: GetMaxFreqForBand:In valid band 
