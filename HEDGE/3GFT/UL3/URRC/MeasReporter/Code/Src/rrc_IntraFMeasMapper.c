Line 238: TerminateMeasurement: MeasInstId is NULL
Line 249: [rrc_IntraFMeasMapper_TerminateMeasurement]:This MID(%d) will be terminated
Line 250: [rrc_IntraFMeasMapper_TerminateMeasurement]:IntraFMeasMapper_p->configuredMid = 0X%x
Line 255: [rrc_IntraFMeasMapper_TerminateMeasurement]:This MID(%d) wasn't configured
Line 272: [rrc_IntraFMeasMapper_TerminateMeasurement]:There is no MID to be terminated
Line 300: [rrc_IntraFMeasMapper_TerminateMeasurement]:MID %d released at UPHY
Line 314: [rrc_IntraFMeasMapper_TerminateMeasurement]: Remove TID Failed , TID = %d FirstConfMID = %d
Line 319: [rrc_IntraFMeasMapper_TerminateMeasurement]: TID = 0 for FirstConfMID = %d
Line 342: [rrc_IntraFMeasMapper_TerminateMeasurement]:First Configured MID Change [%d] -> [%d]
Line 355: [rrc_IntraFMeasMapper_TerminateMeasurement]: No Cells to Add
Line 381: Internal Measurement is still running
Line 387: IntraFMeasMapper was not freed: configuredMid(0x%X), InterFE2DFMidBitmap(0x%X), InterRE3ABitMap(0x%X), EutraE3ABitMap(0x%X)
Line 394: There is more MIDs(0x%X) left
Line 673: rrc_IntraFMeasMapper_DoMeasurement: MID 0 is running, so it will be released
Line 679: rrc_IntraFMeasMapper_DoMeasurement: MID is 0, so this operation will be skipped
Line 694: [rrc_IntraFMeasMapper_DoMeasurement]:Filtering Starts
Line 706: Before Filtering: DETECTED SET TO REMOVE[%d] = PSC %d
Line 771: rrc_IntraFMeasMapper_DoMeasurement: RepInstId is NULL
Line 785: FILTERED DETECTED SET TO REMOVE[%d] = PSC %d
Line 792: Before Filtering: DETECTED SET TO ADD[%d] = PSC %d
Line 817: rrc_IntraFMeasMapper_DoMeasurement: Alloc failed!!
Line 830: rrc_IntraFMeasMapper_DoMeasurement[Cleared MID %d detected set]: IsDetectedSetQuantities(%d), theDetectedSet[NumCells(%d)]
Line 836: FILTERED DETECTED SET TO ADD[%d] = PSC %d
Line 838: [rrc_IntraFMeasMapper_DoMeasurement]:Filtering Ends
Line 867: [rrc_IntraFMeasMapper_DoMeasurement]: No compressed mode configured
Line 870: [rrc_IntraFMeasMapper_DoMeasurement]: No Cells to Modify
Line 888: [rrc_IntraFMeasMapper_DoMeasurement]: No Cells to Configure
Line 975: [rrc_IntraFMeasMapper_DoMeasurementModifyCMAlone] INFO.
Line 980: rrc_CUPHY_IntraFreq_MeasMod_REQ:ILM Alloc Failed!
Line 1085: rrc_IntraFMeasMapper_DoModifyMeasurementForIntraFHHO: Accumulator =NULL
Line 1623: [rrc_IntraFMeasMapper_DoMeasurementConfig]:This MID(%d) will be FIRST configured
Line 1627: [rrc_IntraFMeasMapper_DoMeasurementConfig]: FIRST configured MID(%d), CURRENT Configuring MID(%d)
Line 1633:  RepInstId == NULL  
Line 1674: rrc_CUPHY_IntraFreq_MeasMod_REQ:ILM Alloc Failed!
Line 1774: rrc_IntraFMeasMapper_NotifyReport : Inst Id is NULL !!
Line 1827: MID(%d) is not existed, so removed from DB
Line 1832: MID(%d) is OtherType(%d) not IntraFreqMeasType, so removed from DB
Line 1838: [rrc_IntraFMeasMapper_NotifyReport]: AS Cell %d :  Included in MID %d
Line 1848: MID[%d] Created IntraFreqMeasInd(0x%X)
Line 1898: MID(%d) is not existed, so removed from DB
Line 1903: MID(%d) is OtherType(%d) not IntraFreqMeasType, so removed from DB
Line 1909: [rrc_IntraFMeasMapper_NotifyReport]:	MS Cell %d :  Included in MID %d
Line 1919: MID[%d] Created IntraFreqMeasInd(0x%X)
Line 1974: [rrc_IntraFMeasMapper_NotifyReport]: MID(%d) is not existed, so removed from DB
Line 1979: MID(%d) is OtherType(%d) not IntraFreqMeasType, so removed from DB
Line 1985: [rrc_IntraFMeasMapper_NotifyReport]:	DS Cell %d :  Included in MID %d
Line 1996: MID[%d] Created IntraFreqMeasInd(0x%X)
Line 2020: Measured Dset Cells PSC =%d, Measured Dset MID=%d
Line 2045: rrc_IntraFMeasMapper_NotifyReport : Inst Id is NULL !!
Line 2062: [rrc_IntraFMeasMapper_NotifyReport] There is no configured IntraFreqMeas
Line 2095: [rrc_IntraFMeasMapper_NotifyReport] IntraFMeasMapper_p->InterFE2DFMidBitmap = 0X%x
Line 2119: MID(%d) is not existed, so removed from DB
Line 2124: MID(%d) is OtherType(%d) not InterFreqMeasType, so removed from DB
Line 2130: [rrc_IntraFMeasMapper_NotifyReport] [InterF E2DF] AS Cell %d :  Included in MID %d
Line 2139: MID[%d] Created InterFMeasInd(0x%X)
Line 2182: rrc_IntraFMeasMapper_NotifyReport : Inst Id is NULL !!
Line 2228: MID(%d) is not existed, so removed from DB
Line 2233: MID(%d) is OtherType(%d) not InterRatMeasType, so removed from DB
Line 2239: [rrc_IntraFMeasMapper_NotifyReport] [GSM E3A] AS Cell %d :  Included in MID %d
Line 2247: MID[%d] Created InterRMeasInd(0x%X)
Line 2273: rrc_IntraFMeasMapper_NotifyReport: umtsActiveSetCellResultsArray = NULL
Line 2287: rrc_IntraFMeasMapper_NotifyReport : Inst Id is NULL !!
Line 2335: MID(%d) is not existed, so removed from DB
Line 2340: MID(%d) is OtherType(%d) not EutraMeasType, so removed from DB
Line 2346: [rrc_IntraFMeasMapper_NotifyReport] [EUTRA E3A] AS Cell %d :	Included in MID %d
Line 2354: MID[%d] Created EutraMeasInd(0x%X)
Line 2380: rrc_IntraFMeasMapper_NotifyReport: umtsActiveSetCellResultsArray = NULL
Line 2395: rrc_IntraFMeasMapper_NotifyReport : Inst Id is NULL !!
Line 2443: rrc_IntraFMeasMapper_getTheAFilterCoefficient: Invalid FilterCoefficient(%d)
Line 2611: [rrc_IntraFMeasMapper_SetInterFE2DFBitMap]: MID %d set :	IntraFMeasMapper_p->InterFE2DFMidBitmap = 0X%x
Line 2624: [rrc_IntraFMeasMapper_ResetInterFE2DFBitMap]: MID %d reset :	this->InterFE2DFMidBitmap = 0X%x
Line 2634: Internal Measurement is still running
Line 2651: [rrc_IntraFMeasMapper_SetInterRE3ABitMap]: MID %d set :  IntraFMeasMapper_p->InterRE3ABitMap = 0X%x
Line 2664: [rrc_IntraFMeasMapper_ResetInterRE3ABitMap]: MID %d reset :  this->InterRE3ABitMap = 0X%x
Line 2674: Internal Measurement is still running
Line 2690: [rrc_IntraFMeasMapper_SetEutraE3ABitMap]: MID %d set :  IntraFMeasMapper_p->EutraE3ABitMap = 0X%x
Line 2703: [rrc_IntraFMeasMapper_ResetEutraE3ABitMap]: MID %d reset :  this->EutraE3ABitMap = 0X%x
Line 2713: Internal Measurement is still running
Line 3527: [rrc_IntraFMeasMapper_GetAllPreviousCellInfoForMID]: MeasInstId is NULL
Line 3662: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement]: ERROR: MID %d : MeasInst/RepInst = NULL
Line 3668: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement]:MID %d released at UPHY
Line 3683: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement]: Remove TID Failed , TID = %d MID = %d
Line 3688: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement]: TID = 0 for MID = %d
Line 3752: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement] - ActiveSetCpichCount exceeds the limit 
Line 3756: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement] - Active cell can not be found in CIL. Add ActiveSet to ActiveSetListToAdd list temporariliy
Line 3760: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement] - PSC %d added to ActiveSetList[%d]
Line 3787: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement]: No Cells to Add
Line 3805: [rrc_IntraFMeasMapper_ReleaseInternalIntraFMeasurement]:Internal IntraF MID 0 released at UPHY
Line 3822: [rrc_IntraFMeasMapper_ReleaseInternalIntraFMeasurement]: Remove TID Failed , TID = %d MID =0
Line 3827: [rrc_IntraFMeasMapper_ReleaseInternalIntraFMeasurement]: TID = 0 for MID = 0
Line 3839: [rrc_IntraFMeasMapper_ReleaseInternalIntraFMeasurement] ERROR - No RepInstId for MID 0
Line 3848: [rrc_IntraFMeasMapper_ReleaseInternalIntraFMeasurement]: ERROR: InternalMID MeasInst = NULL
Line 3876: [rrc_IntraFMeasMapper_CreateNewInternalIntraFMeasurement]: MID 0 Configured Newly
Line 3939: [rrc_IntraFMeasMapper_CreateNewInternalIntraFMeasurement]: No Active Cells to Add
Line 3993: [rrc_IntraFMeasMapper_InvalidateTid]: TID invalidate called for MID %d configured in UPHY
Line 4000: [rrc_IntraFMeasMapper_InvalidateTid]: Remove TID Failed , TID = %d FirstConfMID = %d
Line 4017: There is No Intra accumulatingInd
Line 4037: Copy result from Intra for 2D2F MID : %d
Line 192: IntraFMapper FREED
Line 436: [rrc_IntraFMeasMapper_DoMeasurement]:This MID(%d) will be modified
Line 443: [rrc_IntraFMeasMapper_DoMeasurement]:This MID(%d) will be configured
Line 444: [rrc_IntraFMeasMapper_DoMeasurement]:IntraFMeasMapper_p->configuredMid = 0X%x
Line 485: Before Filtering: ACTIVE SET TO REMOVE[%d] = PSC %d
Line 504: FILTERED ACTIVE SET TO REMOVE[%d] = PSC %d
Line 513: Before Filtering: MONITORED SET TO REMOVE[%d] = PSC %d
Line 531: FILTERED MONITORED SET TO REMOVE[%d] = PSC %d
Line 2987: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: MID(%d) MeasInstId is NULL
Line 3003: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: Monitored PSC %d still configured at UPHY:  MidBitmap = 0X%x
Line 3009: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: Monitored PSC %d is being REMOVED at UPHY
Line 3025: [rrc_IntraFMeasMapper_RemoveMonitoredCell]:Cell Id %d -> Cell Id %d : Monitored PSC %d is being REPLACED at UPHY
Line 3035: [rrc_IntraFMeasMapper_RemoveMonitoredCell]:Monitored PSC %d already Changed from Cell Id %d -> Cell Id %d
Line 3042: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: PSC %d not Found in OLD Saved CIL 
Line 3046: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: Cell Id %d : No Cell To Remove in DB/UPHY
Line 3051: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: Cell Id %d : PSC MISMATCH!! : Stored PSC %d Remove PSC %d
Line 3068: [rrc_IntraFMeasMapper_RemoveMonitoredCell]:Cell Id %d: Monitored PSC %d is being replaced: REMOVE from UPHY
Line 3078: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: Cell Id %d : No Cell To Remove in UPHY
Line 3083: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: Cell Id %d : Cell Not Removed from UPHY : OLD PSC already removed : New PSC %d Remove PSC %d
Line 3090: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: Monitored Cell Neither found in Cell Info List nor Measured for MID %d
Line 569: Before Filtering: ACTIVE SET TO ADD[%d] = PSC[FDD] %d CellParamId[TDD] %d
Line 587: FILTERED ACTIVE SET TO ADD[%d] = PSC[FDD] %d 
Line 595: Before Filtering: MONITORED SET TO ADD[%d] = PSC[FDD] %d
Line 613: FILTERED MONITORED SET TO ADD[%d] = PSC[FDD] %d 
Line 2785: [rrc_IntraFMeasMapper_AddActiveCell]: Active PSC	%d already present : Appended MID %d : MidBitmap = 0X%x
Line 2791: [rrc_IntraFMeasMapper_AddActiveCell]: Active PSC  %d NOT added DBCellID = %d AddedCell Id = %d
Line 2811: [rrc_IntraFMeasMapper_AddActiveCell]: Active PSC	%d newly added :  MidBitmap = 0X%x
Line 2812: [rrc_IntraFMeasMapper_AddActiveCell]: Active PSC	%d newly added
Line 2817: [rrc_IntraFMeasMapper_AddActiveCell]: TABLE FULL : Active PSC	%d NOT added
Line 2937: [rrc_IntraFMeasMapper_AddMonitoredCell]: Cell ID %d :Monitored PSC  %d already present : Appended MID %d : MidBitmap = 0X%x
Line 2942: [rrc_IntraFMeasMapper_AddMonitoredCell]: Cell ID %d : Monitored PSC  %d No Previous MIDs Configured!!
Line 2949: [rrc_IntraFMeasMapper_AddMonitoredCell]: Cell ID %d :PSC MISMATCH !! DB PSC  %d  CIL PSC %d
Line 2961: [rrc_IntraFMeasMapper_AddMonitoredCell]: Cell ID %d : Monitored PSC  %d newly added :  MidBitmap = 0X%x
Line 2967: [rrc_IntraFMeasMapper_AddMonitoredCell]: Monitored PSC  %d NOT added as Not found in CellInfo List
Line 943: [rrc_IntraFMeasMapper_DoMeasurementModify] INFO.
Line 947: rrc_IntraFMeasMapper_DoTddMeasurementModify:ILM Alloc Failed!
Line 1139: rrc_IntraFMeasMapper_DoModifyMeasforActiveSetUpdate : Inst Id is NULL !!
Line 1166: rrc_IntraFMeasMapper_DoModifyMeasurementForActiveSetUpdate: CellInfoPtr=NULL
Line 1301: [Cpich %d] Detected Set -> Active Set(CellInfo borrowed from ActSet)
Line 1326: No of cells from Detected -> Active exceeds MaxDetected Cells
Line 1331: ActiveSetCellInfo was NULL returned
Line 1337: [Cpich %d] Detected Set -> Active Set but No available Cell Info in Active Set
Line 1345: [Cpich %d] Detected Set -> Active Set (CellInfo borrowed from MonSet)
Line 1369: No of cells from Detected -> Active exceeds MaxDetected Cells
Line 1409: rrc_IntraFMeasMapper_DoModifyMeasforActiveSetUpdate : Inst Id is NULL !!
Line 1476: rrc_IntraFMeasMapper_DoModifyMeasforActiveSetUpdate : Inst Id is NULL !!
Line 1499: rrc_IntraFMeasMapper_DoModifyMeasurementForActiveSetUpdate: Alloc failed!!
Line 1511: rrc_IntraFMeasMapper_DoModifyMeasurementForActiveSetUpdate[Cleared MID %d Detected Set]: IsDetectedSetQuantities(%d), theDetectedSet[NumCells(%d)]
Line 2468: rrc_InterRMeasMapper_ApplyUtranFilterCoeff : Inst Id is NULL !!
Line 3116: [rrc_IntraFMeasMapper_AddDetectedCell]: Detected PSC	%d already present : Appended MID %d : MidBitmap = 0X%x
Line 3132: [rrc_IntraFMeasMapper_AddDetectedCell]: Detected PSC	%d newly added :  MidBitmap = 0X%x
Line 3133: [rrc_IntraFMeasMapper_AddDetectedCell]: Detected PSC	%d newly added
Line 3138: [rrc_IntraFMeasMapper_AddDetectedCell]: TABLE FULL : Detected PSC	%d NOT added
Line 3163: [rrc_IntraFMeasMapper_RemoveDetectedCell]: Detected PSC %d still configured at UPHY:	MidBitmap = 0X%x
Line 3169: [rrc_IntraFMeasMapper_RemoveDetectedCell]: Detected PSC %d is being REMOVED at UPHY
Line 3179: [rrc_IntraFMeasMapper_RemoveDetectedCell]: Detected PSC %d not configured in UPHY
Line 3196: [rrc_IntraFMeasMapper_GetActiveCellMidBitmapByCpich]: Active PSC %d MidBitmap = 0X%x
Line 3200: [rrc_IntraFMeasMapper_GetActiveCellMidBitmapByCpich]: Active PSC %d not configured in UPHY
Line 3219: [rrc_IntraFMeasMapper_GetMontoredCellMidBitmapByCpich]: Cell Id : %d Monitored PSC %d MidBitmap = 0X%x
Line 3226: [rrc_IntraFMeasMapper_GetMonitoredCellMidBitmapByCpich]: Cell Id %d : PSC %d Not found in DB
Line 3231: [rrc_IntraFMeasMapper_GetMonitoredCellMidBitmapByCpich]: Cell Id %d : PSC MISMATCH!! PSC in DB: %d PSC in CIL %d
Line 3238: [rrc_IntraFMeasMapper_GetMonitoredCellMidBitmapByCpich]: PSC %d Not found in CIL
Line 3256: [rrc_IntraFMeasMapper_GetDetectedCellMidBitmapByCpich]: Detected PSC %d MidBitmap = 0X%x
Line 3260: [rrc_IntraFMeasMapper_GetDetectedCellMidBitmapByCpich]: ERROR CellIdx %d OutOfBound
Line 3576: [rrc_IntraFMeasMapper_GetAllCellInfo]: PSC [%d] is not in CIL(Active)!!!
Line 3600: [rrc_IntraFMeasMapper_GetAllCellInfo]: PSC [%d] is not in CIL(Monitored)!!!
Line 2835: [rrc_IntraFMeasMapper_RemoveActiveCell]: MID(%d) MeasInstId is NULL
Line 2867: [rrc_IntraFMeasMapper_RemoveActiveCell]: Active PSC %d still configured at UPHY:	MidBitmap = 0X%x
Line 2873: [rrc_IntraFMeasMapper_RemoveActiveCell]: Active PSC %d is being REMOVED at UPHY
Line 2891: [rrc_IntraFMeasMapper_RemoveActiveCell]: Cell Id %d -> Cell Id %d : Active PSC %d is being REPLACED at UPHY
Line 2902: [rrc_IntraFMeasMapper_RemoveActiveCell]: ERROR: DB ActivePSC %d DBCellId = %d OldCellId = %d CurrentCellId = %d
Line 2908: [rrc_IntraFMeasMapper_RemoveActiveCell]: Active PSC %d not configured in UPHY
