Line 195: TerminateMeasurement: MeasInstId is NULL
Line 198: [rrc_InterFMeasMapper_TerminateMeasurement]:	MID %d
Line 217: [rrc_InterFMeasMapper_TerminateMeasurement]:InterFMeasMapper_p MID(%d) will be terminated
Line 218: [rrc_InterFMeasMapper_TerminateMeasurement]:InterFMeasMapper_p->ConfiguredMids = 0X%x
Line 221: [rrc_InterFMeasMapper_TerminateMeasurement]:InterFMeasMapper_p->ServingFreqMidBitmap = 0X%x
Line 227: [rrc_InterFMeasMapper_TerminateMeasurement]:InterFMeasMapper_p MID(%d) wasn't configured
Line 232: [rrc_InterFMeasMapper_TerminateMeasurement]:There is no MID to be terminated
Line 242: [rrc_InterFMeasMapper_TerminateMeasurement]:MID %d released at UPHY
Line 257: [rrc_InterFMeasMapper_TerminateMeasurement]: Remove TID Failed , TID = %d FirstConfMID = %d
Line 262: [rrc_InterFMeasMapper_TerminateMeasurement]: TID = 0 for FirstConfMID = %d
Line 284: [rrc_InterFMeasMapper_TerminateMeasurement]:First Configured MID Change [%d] -> [%d]
Line 319: DlUarfcn(%d) is not listed on add-array bacause the array is full
Line 331: [rrc_InterFMeasMapper_TerminateMeasurement]: No Cells to Config
Line 355: There is more MIDs(0x%X) left
Line 390: DlUarfcn(%d) is not listed on remove-array bacause the array is full
Line 401: [rrc_InterFMeasMapper_TerminateMeasurement]: No Cells to Remove
Line 451: [rrc_InterFMeasMapper_DoMeasurement]:  MID %d
Line 457: [rrc_InterFMeasMapper_DoMeasurement]:InterFMeasMapper_p MID(%d) will be modified
Line 463: [rrc_InterFMeasMapper_DoMeasurement]:InterFMeasMapper_p MID(%d) will be configured
Line 464: [rrc_InterFMeasMapper_DoMeasurement]:InterFMeasMapper_p->ConfiguredMids = 0X%x
Line 470: [rrc_InterFMeasMapper_DoMeasurement]:MID %d set, InterFMeasMapper_p->ServingFreqMidBitmap = 0X%x
Line 480: [rrc_InterFMeasMapper_DoMeasurement]:  Before Filtering: REMOVE: uarfcn [%d] = %d, Cell[%d] = %d, Cpich%d 
Line 513: [rrc_InterFMeasMapper_DoMeasurement]: FILTERED FREQ TO REMOVE [%d] = UARFCN %d
Line 516: ####[rrc_InterFMeasMapper_DoMeasurement]: FILTERED CELL TO REMOVE [%d] = PSC[FDD] %d 
Line 524: [rrc_InterFMeasMapper_DoMeasurement]:  Before Filtering: ADD: uarfcn [%d] = %d, Cell[%d] = %d,Cpich[FDD]%d 
Line 557: [rrc_InterFMeasMapper_DoMeasurement]: FILTERED FREQ TO ADD [%d] = UARFCN %d
Line 560: ####[rrc_InterFMeasMapper_DoMeasurement]: FILTERED CELL TO ADD [%d] = PSC %d
Line 584: [rrc_InterFMeasMapper_DoMeasurement]: No Cells to Modify
Line 589: [rrc_InterFMeasMapper_DoMeasurement]: ERROR: MeasInst [MID %d] is NULL
Line 614: [rrc_InterFMeasMapper_DoMeasurement]: No Cells to Config
Line 619: [rrc_InterFMeasMapper_DoMeasurement]: ERROR: MeasInst [MID %d] is NULL
Line 632: [rrc_InterFMeasMapper_DoMeasurementModifyCMAlone] INFO.
Line 637: rrc_CUPHY_InterFreq_MeasMod_REQ:ILM Alloc Failed!
Line 801: [rrc_InterFMeasMapper_NotifyReport]: UARFCN(%d) has no Cells
Line 823: [rrc_InterFMeasMapper_NotifyReport]: MID(%d) is not existed, so removed from DB
Line 830: [rrc_InterFMeasMapper_NotifyReport]:	UARFCN %d Cell %d :  Included in MID %d
Line 838: MID[%d] Created InterFMeasInd(0x%X)
Line 856: [rrc_InterFMeasMapper_NotifyReport]: interFreqResultsArray = NULL
Line 867: [rrc_InterFMeasMapper_NotifyReport]: cellResultsArray = NULL
Line 912: [rrc_InterFMeasMapper_NotifyReport]: WARNING!! NumOfCells exceeding the limit for UARFCN(%d)
Line 928: [rrc_InterFMeasMapper_NotifyReport]: cellResultsArray = NULL
Line 943: [rrc_InterFMeasMapper_NotifyReport]FreqInfo is NULL !!
Line 949: [rrc_InterFMeasMapper_NotifyReport]: WARNING!! NumOfFreqs exceeding the limit for MID %d
Line 992: [rrc_InterFMeasMapper_NotifyReport]: WARNING!! NumOfFreqs exceeding the limit for MID %d
Line 1005: rrc_InterFMeasMapper_NotifyReport : Inst Id is NULL !!
Line 1040: rrc_InterFMeasMapper_ApplyFilterCoeff:Instance is NULL !
Line 1067: [rrc_InterFMeasMapper_ApplyFilterCoeff] ERROR - Invalid InterFMeasQuantity type [%i].
Line 1510: [rrc_InterFMeasMapper_GetAllPreviousCellInfoForMID]: MeasInstId is NULL
Line 1572: [rrc_InterFMeasMapper_InvalidateTid]: TID invalidate called for MID %d configured in UPHY
Line 1579: [rrc_InterFMeasMapper_InvalidateTid]: Remove TID Failed , TID = %d FirstConfMID = %d
Line 143: InterFMapper FREED
Line 688: [rrc_InterFMeasMapper_DoMeasurementModify] INFO.
Line 692:  RepInstId == NULL 
Line 742: [rrc_InterFMeasMapper_DoMeasurementConfig]:InterFMeasMapper_p MID(%d) will be FIRST configured
Line 746: [rrc_InterFMeasMapper_DoMeasurementConfig]: FIRST configured MID(%d), CURRENT Configuring MID(%d)
Line 751: rrc_CUPHY_IntraFreq_MeasConf_REQ:ILM Alloc Failed!
Line 1280: [rrc_InterFMeasMapper_AddCell]: Cell ID %d : Uarfcn %d PSC  %d already present : Appended MID %d : MidBitmap = 0X%x
Line 1286: [rrc_InterFMeasMapper_AddCell]: Cell ID %d : Uarfcn %d PSC  %d No Previous MIDs Configured!!
Line 1293: [rrc_InterFMeasMapper_AddCell]: Cell ID %d :PSC MISMATCH !! DB Uarfcn %d PSC  %d  CIL Uarfcn %d PSC %d
Line 1305: [rrc_InterFMeasMapper_AddCell]: Cell ID %d : Uarfcn %d PSC  %d newly added :	MidBitmap = 0X%x
Line 1311: [rrc_InterFMeasMapper_AddCell]: PSC  %d NOT added as Not found in CellInfo List
Line 1325: rrc_MIDMapTable_GetMeasInstId is NULL returned
Line 1342: [rrc_InterFMeasMapper_RemoveCell]: Uarfcn %d PSC %d still configured at UPHY:  MidBitmap = 0X%x
Line 1348: [rrc_InterFMeasMapper_RemoveCell]: Uarfcn %d PSC %d is REMOVED from UPHY
Line 1365: [rrc_InterFMeasMapper_RemoveCell]:Cell Id %d -> Cell Id %d : Uarfcn %d PSC %d is being REPLACED at UPHY
Line 1374: [rrc_InterFMeasMapper_RemoveCell]:PSC %d already Changed from Cell Id %d -> Cell Id %d
Line 1380: [rrc_InterFMeasMapper_RemoveCell]: PSC %d not Found in OLD Saved CIL 
Line 1384: [rrc_InterFMeasMapper_RemoveCell]: Cell Id %d : No Cell To Remove in DB/UPHY
Line 1389: [rrc_InterFMeasMapper_RemoveCell]: Cell Id %d : PSC MISMATCH!! : DB Uarfcn %d PSC %d , CIL Uarfcn %d PSC %d
Line 1406: [rrc_InterFMeasMapper_RemoveCell]: Uarfcn %d PSC %d is being replaced: REMOVE from UPHY
Line 1417: [rrc_InterFMeasMapper_RemoveCell]: Cell Id %d : No Cell To Remove in UPHY
Line 1422: [rrc_InterFMeasMapper_RemoveCell]: Cell Id %d : Cell Not Removed from UPHY : Cell Already replaced: DB(new) Uarfcn %d PSC %d CIL(old) Uarfcn %d PSC %d
Line 1429: [rrc_InterFMeasMapper_RemoveCell]:  Cell Neither found in Cell Info List nor Measured for MID %d
Line 1448: [rrc_InterFMeasMapper_GetCellMidBitmap]: PSC %d MidBitmap = 0X%x
Line 1456: [rrc_InterFMeasMapper_GetCellMidBitmap]: Cell Id %d : PSC %d Not found in DB
Line 1461: [rrc_InterFMeasMapper_GetCellMidBitmap]: Cell Id %d : PSC MISMATCH!! DB: Uarfcn %d PSC %d, CIL Uarfcn %d PSC %d
Line 1468: [rrc_InterFMeasMapper_GetCellMidBitmap]: PSC %d Not found in CIL
