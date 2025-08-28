Line 202: rrc_Frequency_free : Frequency_p->CandCellPtr 0x%X 
Line 407: Created IntraFrequency (%d) instance from %d SibCellInfoList cells
Line 411: CellInfoPtr is NULL
Line 451: Created InterFrequency (%d) instance from %d SibCellInfoList cells
Line 544: BPLMN:  Cell %i is Serving, hence not Searched in Background
Line 701: [rrc_Frequency_GetBestSelectionCandidateOn] freq %d is barred
Line 843: Frequency_p->CurrentCellIx is %d  and it is > 32
Line 884: Cpich (%i) already in Frequency (%i)
Line 889: CellInfoPtr is NULL in rrc_Frequency_AddCellTo
Line 975: Shared PLMN is not selectable
Line 979: Shared PLMN is Selectable, Hence Frequency can be camped on
Line 1008: rrc_Frequency_isSelectableFreq - ARFCN %i FrequencySelected %i
Line 1201: Remove CellList[%d](ARFCN%i/PSC%i)
Line 1531: Frequency_p->NumCells is %d  and it is > 32
Line 1593: No Cell available
Line 1606: Invalid BandId of TargetCell (%d)
Line 1614: Uarfcn %d, Sir %d (Sir + BandOffset(%d))
Line 1618: Frequency_p->NumCells is %d  and it is > 32
Line 1652: Loaded Intrafrequency cell (URRC_CELLSEL, %i) into index %i of NetPar IntraFreq array
Line 1744: Loaded Interfrequency cell (URRC_CELLSEL, %i) into index %i of NetPar InterFreq array
Line 1817: [AP_EMC]: Reset the FullBandScannedInfo.CellList to default value !!
Line 1864: ERROR Illegal State
Line 1871: [Frequency] This frequency is already tested but no cell is found
Line 1872: [Frequency] No suitable candidate cell found on frequency: %i
Line 352: UmtsCellSelectionMeasConfig: Add cell: %s
Line 3130: ERROR Illegal State
Line 1779: Requested Freq Cell Search on frequency: %i
Line 1787: ERROR Illegal State
Line 1920: ERROR Scenario: UARFCN(%i) already searched and Number of Cells found was: %d
Line 1923: BPLMN Initiating Cell Search on : %i
Line 1930: ERROR Illegal State
Line 1935: No BPLMN activity
Line 1943: ERROR Illegal State
Line 1956: ERROR Illegal State
Line 1969: ERROR Illegal State
Line 1982: ERROR Illegal State
Line 2169: DefaultState_AbortFreqSearchOn : Abort Stored Cell Search Received in the Deafult State Sending Response
Line 2185: DefaultState_AbortCellSelectionOn : Abort Cell Selection Received in the Deafult State Sending Response
Line 1245: [BPLMN] Build Cell List
Line 1265: Frequency_p->NumCells is %d  and it is > 32
Line 1283: - Rejecting (Uarfcn %d, Cpich %d) Rscp %d cause of BlackList Cell)
Line 1298: [AP_EMC]: - Rejecting (Uarfcn %d, Cpich %d) Rscp %d already StoredFreqScannedInfo searched cell !!
Line 1314: [AP_EMC]: - Rejecting (Uarfcn %d, Cpich %d) Rscp %d already FullBandScannedInfo searched cell !!
Line 1382: Frequency_p->NumCells is %d  and it is > 32
Line 1175: Adding Cpich %i to Frequency %i Rscp: %i dBm, EcN0: %i dB
Line 1182: Rejected Frequency %i, Cpich %i as a cell selection candidate due to low Cpich EcIo: %i dBm
Line 1488: Based on LAC[%d] match, moved the cell : Freq[%d] Cpich[%d] from ListIdx[%d] to top[%d] of the Sorted Cell List
Line 1493: PriortizeSameLACCells: Different LA Cell not prioritized: Cell LAC[%d] Cell Freq[%d] Cell Cpich[%d]
Line 1426: Cell Available in SysInfoContainer, moved the cell : Freq[%d] Cpich[%d] from ListIdx[%d] to top[%d] of the Sorted Cell List
Line 1433: [PrioritizeSysInfoContainerCells] Freq[%d] Cpich[%d] not satisfying good signal strength
Line 2021: [rrc_Frequency::AwaitingFreqSearchInd_CuphyFreqCellSearchCnf] INFO - Negative confirmation
Line 2031: [rrc_Frequency::AwaitingFreqSearchInd_CuphyFreqCellSearchCnf] INFO - Positive confirmation
Line 2060: ERROR Illegal State
Line 1061: BuildCellListFromMeasInd[NON FATAL ERROR] Frequency_p->NumCells is greater than FREQUENCY_MAXCELLS
Line 1081: Setting measurements for (%i, %i): Rscp: %i = Rscp(%i) + delta Rscp(%i) dBm, EcN0: %i dB
Line 2234: [rrc_Frequency::AwaitingMeasurementInd_RecvCellSelMeasCnf] INFO - Negative confirmation
Line 2243: [rrc_Frequency::AwaitingMeasurementInd_RecvCellSelMeasCnf] INFO - Positive confirmation
Line 2088: ERROR Illegal State
Line 2419: [AP_EMC]: cell added to StoredFreqScannedInfo [%d]: Freq: %d, Cpich: %d !!
Line 2423: [AP_EMC]: StoredFreqScannedInfo[%d]: Freq: %d, Cpich: %d is already present in DB !!
Line 2443: [AP_EMC]: CellList[%d]: %d is added to DB !!
Line 2447: [AP_EMC]: CellList[%d]: %d is already present in DB !!
Line 2457: CheckingCellSuitability_IsNotSelectable:  Abort for New country case.
Line 2354: CheckingNextCandidate unexpected result %d 0x%X 
Line 2487: CheckingCellSuitability_AbortCellSelectionOn : PlmnSearchAbortCause(PlmnSearchAbortForTimeout)! So, wait for this suitability checking results
Line 2503: CheckingCellSuitability_AbortCellSelectionOn : Aborting CandCellPtr
Line 2509: ERROR Illegal State
Line 2772: CheckingCellSuitabilityOnMeasuredCells_IsNotSelectable:  Abort for New country case.
Line 3143: StoredCellSearch is in progress
Line 2882: ERROR Illegal State
Line 2888: No suitable cell selection candidates found on frequency: %i
Line 2910: [URRC SR_IF DSDS]Sending Abort Req to Uphy
Line 2916: ERROR Illegal State
Line 2965: ERROR Illegal State
Line 3004: [URRC SR_IF DSDS]Sending Abort Req to Uphy
Line 3010: ERROR Illegal State
Line 2115: Build Cell List
Line 2131: InitialCellSearch is completed
Line 2630: CheckingCellSuitability_AbortCellSelectionOn : Current Abort Cause - PlmnSearchAbortForTimeout. Wait for this results
Line 590: - Rejecting (Uarfcn %d, Cpich %d) is in BlackList
Line 635: %d PlmnIds will be updated from BarredList
Line 1030: Overwriting existing cell entry
Line 1045: UARFCN%i CellList (NumCells %d, InsertIx %d, CurrentCellIx %d)
Line 1150: Adding Cpich %i to Frequency %i Rscp: %i dBm, DeltaRscp: %i dBm, EcN0: %i dB
Line 1158: Rejected Frequency %i, Cpich %i as a cell selection candidate due to low Cpich Rscp: %i dBm, DeltaRscp: %i dBm, EcN0: %i dB (Idx: %d)
