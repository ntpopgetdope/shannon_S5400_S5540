Line 173: TerminateMeasurement: MeasInstId is NULL
Line 189: [rrc_InterRMeasMapper_TerminateMeasurement]:InterRMeasMapper_p MID(%d) will be terminated
Line 190: [rrc_InterRMeasMapper_TerminateMeasurement]:InterRMeasMapper_p->ConfiguredMids = 0X%x
Line 195: [rrc_InterRMeasMapper_TerminateMeasurement]:InterRMeasMapper_p MID(%d) wasn't configured
Line 200: [rrc_InterRMeasMapper_TerminateMeasurement]:There is no MID to be terminated
Line 218: [rrc_InterRMeasMapper_TerminateMeasurement]:MID %d released at UPHY
Line 230: [rrc_InterRMeasMapper_TerminateMeasurement]: Remove TID Failed , TID = %d FirstConfMID = %d
Line 235: [rrc_InterRMeasMapper_TerminateMeasurement]: TID = 0 for FirstConfMID = %d
Line 256: [rrc_InterRMeasMapper_TerminateMeasurement]:First Configured MID Change [%d] -> [%d]
Line 264: [rrc_InterRMeasMapper_TerminateMeasurement]: No Cells to Config
Line 285: There is more MIDs(0x%X) left
Line 295: [rrc_InterRMeasMapper_TerminateMeasurement]: No Cells to Remove
Line 335: [rrc_InterRMeasMapper_DoMeasurement]: MID = %d 
Line 341: [rrc_InterRMeasMapper_DoMeasurement]:InterRMeasMapper_p MID(%d) will be modified
Line 347: [rrc_InterRMeasMapper_DoMeasurement]:InterRMeasMapper_p MID(%d) will be configured
Line 348: [rrc_InterRMeasMapper_DoMeasurement]:InterRMeasMapper_p->ConfiguredMids = 0X%x
Line 368:  FILTERED GSM REMOVE CELL[%d] = %d 
Line 387:  FILTERED GSM ADD CELL[%d] = %d 
Line 396: BSIC Verification is required from GSM MeasCtrl Modify
Line 401: BSIC Verification is still not required from GSM MeasCtrl Modify
Line 409: [Modify to Add] CellId[%d] ARFCN(%d), BSIC(Ncc: %d, Bcc: %d)
Line 414: [Modify to Remove] CellId[%d] ARFCN(%d), BSIC(Ncc: %d, Bcc: %d)
Line 451: [rrc_InterRMeasMapper_DoMeasurement]: No Cells to Config/Modify
Line 456: [rrc_InterRMeasMapper_DoMeasurement]: ERROR: MeasInst [MID %d] is NULL
Line 559: rrc_ss_AllocBuff failed for rrc_CUPHY_GsmMeasMod_REQ!!
Line 670: [rrc_InterRMeasMapper_NotifyReport]:MID(%d) is not existed, so removed from DB
Line 677: [rrc_InterRMeasMapper_NotifyReport][GSM_EVENT] Cell id %d Configured for MID %d
Line 685: MID[%d] Created InterRMeasInd(0x%X)
Line 715: rrc_InterRMeasMapper_NotifyReport : Inst Id is NULL !!
Line 761: [rrc_InterRMeasMapper_NotifyReport]:MID(%d) is not existed, so removed from DB
Line 768: [rrc_InterRMeasMapper_NotifyReport][GSM_PERIOD] Cell id %d Configured for MID %d
Line 777: MID[%d] Created InterRMeasInd(0x%X)
Line 811: rrc_InterReasMapper_NotifyReport : Inst Id is NULL !!
Line 903: rrc_InterRMeasMapper_ApplyUtranFilterCoeff : Inst Id is NULL !!
Line 1331: [rrc_InterRMeasMapper_GetAllPreviousCellInfoForMID]: MeasInstId is NULL
Line 1483: [rrc_InterRMeasMapper_InvalidateTid]: TID invalidate called for MID %d configured in UPHY
Line 1490: [rrc_InterRMeasMapper_InvalidateTid]: Remove TID Failed , TID = %d FirstConfMID = %d
Line 135: InterRMapper FREED
Line 478: rrc_ss_AllocBuff failed for rrc_CUPHY_GsmMeasConf_REQ
Line 581: [rrc_InterRMeasMapper_DoMeasurementConfig]:InterRMeasMapper_p MID(%d) will be FIRST configured
Line 585: [rrc_InterRMeasMapper_DoMeasurementConfig]: FIRST configured MID(%d), CURRENT Configuring MID(%d)
Line 627: rrc_ss_AllocBuff failed for rrc_CUPHY_GsmMeasConf_REQ
Line 848: rrc_InterRMeasMapper_ApplyGsmFilterCoeff : Inst Id is NULL !!
Line 1107: [rrc_InterRMeasMapper_AddCell]: Cell ID %d : FrequencyBand %d BcchArfcn %d already present : Appended MID %d : MidBitmap = 0X%x
Line 1113: [rrc_InterRMeasMapper_AddCell]: Cell ID %d : FrequencyBand %d BcchArfcn  %d No Previous MIDs Configured!!
Line 1120: [rrc_InterFMeasMapper_AddCell]: Cell ID %d :BcchArfcn MISMATCH !! DB FrequencyBand %d BcchArfcn  %d  CIL FrequencyBand %d BcchArfcn %d
Line 1133: [rrc_InterFMeasMapper_AddCell]: Cell ID %d : FrequencyBand %d BcchArfcn  %d newly added :  MidBitmap = 0X%x
Line 1139: [rrc_InterFMeasMapper_AddCell]: BcchArfcn	%d NOT added as Not found in CellInfo List
Line 1154: [rrc_InterRMeasMapper_RemoveCell]: MeasInstId is NULL
Line 1171: [rrc_InterRMeasMapper_RemoveCell]: FrequencyBand %d BcchArfcn %d still configured at UPHY:  MidBitmap = 0X%x
Line 1177: [rrc_InterRMeasMapper_RemoveCell]: FrequencyBand %d BcchArfcn %d is REMOVED from UPHY
Line 1197: [rrc_InterRMeasMapper_RemoveCell]:Cell Id %d -> Cell Id %d : FrequencyBand %d BcchArfcn %d is being REPLACED at UPHY
Line 1209: [rrc_InterRMeasMapper_RemoveCell]:Arcfn %d already Changed from Cell Id %d -> Cell Id %d
Line 1215: [rrc_InterRMeasMapper_RemoveCell]: BcchArfcn %d not Found in OLD Saved CIL 
Line 1219: [rrc_InterRMeasMapper_RemoveCell]: Cell Id %d : No Cell To Remove in DB/UPHY
Line 1224: [rrc_InterRMeasMapper_RemoveCell]: Cell Id %d : MISMATCH!! : DB FrequencyBand %d BcchArfcn %d , CIL FrequencyBand %d BcchArfcn %d
Line 1242: [rrc_InterRMeasMapper_RemoveCell]: FrequencyBand %d BcchArfcn %d is being replaced: REMOVE from UPHY
Line 1254: [rrc_InterRMeasMapper_RemoveCell]: Cell Id %d : No Cell To Remove in UPHY
Line 1259: [rrc_InterRMeasMapper_RemoveCell]: Cell Id %d : Cell Not Removed from UPHY : Old Cell already removed : DB(new) FrequencyBand %d BcchArfcn %d, CIL(old) FrequencyBand %d BcchArfcn %d
Line 1266: [rrc_InterRMeasMapper_RemoveCell]:  Cell Neither found in Cell Info List nor Measured for MID %d
Line 1279: [rrc_InterRMeasMapper_GetCellMidBitmap]: CellId %d MidBitmap = 0X%x
Line 1284: [rrc_InterRMeasMapper_GetCellMidBitmap]: Invalid CellNo %d
Line 1409: [rrc_InterRMeasMapper_UpdateCellInfoList] Measurement Instance for MID(%d) is NULL
Line 1431: [rrc_InterRMeasMapper_UpdateCellInfoList] CellId(%d) is found in CellsForMeas
Line 1438: [rrc_InterRMeasMapper_UpdateCellInfoList] CellId(%d) is not found in CellsForMeas
Line 1451: [rrc_InterRMeasMapper_UpdateCellInfoList] GsmCellId[%d] ARFCN(%d) BSIC(Ncc: %d, Bcc: %d) is already existed in InterRMeasMapperDB
Line 1458: [rrc_InterRMeasMapper_UpdateCellInfoList] updatedGsmCellsToAdd(%d) exceeded MAX(32)
Line 1471: [rrc_InterRMeasMapper_UpdateCellInfoList] GsmCellId[%d] ARFCN(%d) BSIC(Ncc: %d, Bcc: %d) is newly added
