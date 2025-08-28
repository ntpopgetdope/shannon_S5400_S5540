Line 293: rrc_VisitedCsgList_IsEmpty
Line 325: [rrc_VisitedCsgList_AddCell] SrcRat(%d) Srcfreq(%d) SrcCpich(%d) SrcCellId(%d) for TgtFreq(%d) TgtCpich(%d) TgtCsgId(%d) is added in Visted CSG list
Line 367: rrc_VisitedCsgList_UpdateVisitedCsgList : update_type is RRC_UPDATE_RAT_CHANGE(%d)
Line 378: rrc_VisitedCsgList_UpdateVisitedCsgList : NumOfTargetCellInfo(%d)
Line 383: rrc_VisitedCsgList_UpdateVisitedCsgList : NumOfSourceCell[%d] for TargetCellIdx[%d]
Line 387: rrc_VisitedCsgList_UpdateVisitedCsgList : DetectedCsgList Update
Line 390: rrc_VisitedCsgList_UpdateVisitedCsgList : This is DetectedCsgList[%d] CSGID(%d) CsgCellType(%d)
Line 398: SourCell RAT(UMTS) SourCell PlmnId(%x%x%x), SourCell Uarfcn(%d), SourceCell Cpich(%d), SourCell CellId(%d) SourceCell Lac(%d)
Line 407: TargetCell RatType(%d) TargetCell PlmnId(%x%x%x), TargetCell Arfcn(%d), TargetCell PhyCellId(%d), TargetCell CellId(%d)
Line 433: rrc_VisitedCsgList_UpdateVisitedCsgList : SourceCellIdx[%d] for TargetCellIdx[%d]
Line 471: rrc_VisitedCsgList_UpdateVisitedCsgList : update_type is RRC_UPDATE_CSG_SCANNED_RESULT(%d) during Background CSG ID Scan
Line 473: rrc_VisitedCsgList_UpdateVisitedCsgList : NumOfTargetCellInfo(%d)
Line 489: rrc_VisitedCsgList_UpdateVisitedCsgList : NumOfSourceCell[%d] for TargetCellIdx[%d]
Line 498: rrc_VisitedCsgList_UpdateVisitedCsgList : This is DetectedCsgList[%d] CSGID(%d) CsgCellType(%d)
Line 500: SourCell RAT(UMTS) SourCell PlmnId(%x%x%x), SourCell Uarfcn(%d), SourceCell Cpich(%d), SourCell CellId(%d) SourceCell Lac(%d)
Line 509: TargetCell RatType(%d) TargetCell PlmnId(%x%x%x), TargetCell Arfcn(%d), TargetCell PhyCellId(%d), TargetCell CellId(%d)
Line 535: rrc_VisitedCsgList_UpdateVisitedCsgList : SourceCellIdx[%d] for TargetCellIdx[%d]
Line 562: rrc_VisitedCsgList_UpdateVisitedCsgList : update_type is RRC_UPDATE_CSG_SCANNED_RESULT(%d)
Line 564: rrc_VisitedCsgList_UpdateVisitedCsgList : NumOfTargetCellInfo(%d)
Line 569: rrc_VisitedCsgList_UpdateVisitedCsgList : NumOfSourceCell[%d] for TargetCellIdx[%d]
Line 574: rrc_VisitedCsgList_UpdateVisitedCsgList : This is DetectedCsgList
Line 602: rrc_VisitedCsgList_UpdateVisitedCsgList : SourceCellIdx[%d] for TargetCellIdx[%d]
Line 630: Invalid UpdateVisitedCsgList size(%d)
Line 644: [rrc_VisitedCsgList_UpdateLastSourceCellInfo]: LastSourceCellPresent %d (rat_type %d, arfcn %d phy_cell_id %d lac %d cell_id %d)
Line 674: [rrc_VisitedCsgList_RemoveCSGIDFromVisitedCsgList]: REMOVE CSG ID %d (Uarfcn %d, Cpich %d) from VistedCsgList
Line 756: !!!!!!!! Current Cell is Source Cell - Source PLMN ID (0x%02X, 0x%02X, 0x%02X) CurrPlmnId (0x%02X, 0x%02X, 0x%02X)
Line 758: !!!!!!!! ----------------------------- Source-CellID (%d) Curr-CellID (%d) Source-Lac(%d) Curr-Lac(%d)
Line 760: !!!!!!!! ----------------------------- Source RatType(%d) Target RatType(%d) CSGID (%d) E/U-arfcn(%d) PhyCellId-Cpich(%d)
Line 768: !!!!!!!! Current Cell is not a Source Cell - PLMN ID (0x%02X, 0x%02X, 0x%02X) CellID (%d) CurrLac (%d)
Line 865: rrc_VisitedCsgList_getTargetVisitedCsgCellInfo_UMTS - RatType(%d) Source PLMNID (0x%02X, 0x%02X, 0x%02X) Source CellID (%d)
Line 867: rrc_VisitedCsgList_getTargetVisitedCsgCellInfo_UMTS - CSGID (%d) - Target E/U-Arfcn(%d) Target PhyCellId/Cpich(%d)
Line 900: rrc_VisitedCsgList_getVisitedCsgCellList - RatType(%d) Source PLMNID (0x%02X, 0x%02X, 0x%02X) Source CellID (%d)
Line 902: rrc_VisitedCsgList_getVisitedCsgCellList - CSGID (%d) - Target E/U-Arfcn(%d) Target PhyCellId/Cpich(%d)
Line 931: rrc_VisitedCsgList_isTargetCsgCellInfoPresent - TargetRatType(%d) Target PLMNID (0x%02X, 0x%02X, 0x%02X)
Line 933: rrc_VisitedCsgList_isTargetCsgCellInfoPresent - CSGID (%d) - Target E/U-Arfcn(%d) Target PhyCellId/Cpich(%d)
Line 952: rrc_VisitedCsgList_isTargetCsgFreqInfoPresent - TargetRat (%d) - Target E/U-Arfcn(%d)
Line 961: rrc_VisitedCsgList_isTargetCsgFreqInfoPresent - TargetRatType(%d) Target PLMNID (0x%02X, 0x%02X, 0x%02X)
Line 963: rrc_VisitedCsgList_isTargetCsgFreqInfoPresent - CSGID (%d) - Target E/U-Arfcn(%d)
Line 995: S-CellId(%d) S-UARFCN %d S-Cpich %d >>>> T-UARFCN %d T-Cpich %d
Line 1055: rrc_VisitedCsgList_isAlreadyHaveVisitedCsgCellInfo - Same VisitedCsgList is already existS-CellID (%d) T-CellId(%d) T-Uarfcn(%d) T-Cpich (%d)
Line 1074: rrc_VisitedCsgList_isAlreadyHaveVisitedCsgCellInfo - Same VisitedCsgList is already existS-CellID (%d) T-CellId(%d) T-Uarfcn(%d) T-Cpich (%d)
Line 1085: rrc_VisitedCsgList_isAlreadyHaveVisitedCsgCellInfo - Unknown List Type
Line 1088: rrc_VisitedCsgList_isAlreadyHaveVisitedCsgCellInfo - Same VisitedCsgList is already exist
Line 1101: rrc_VisitedCsgList_PrintCurrentVisitedCsgCellInfo - S-PLMN ID (0x%02X, 0x%02X, 0x%02X) S-CellID (%d) S-Lac(%d) for CSGID (%d)
Line 1104: rrc_VisitedCsgList_PrintCurrentVisitedCsgCellInfo - T-PLMN ID (0x%02X, 0x%02X, 0x%02X) T-CellID (%d) T-Uarfcn(%d) T-Cpich(%d)
Line 1124: T-CellId[%d] with T-RatType(%d) U-arfcn(%d) T-Cpich(%d) present in VisitedCsgList with CSGID (%d) 
Line 1142:  Target CSG Cells found: U-arfcn(%d) CsgId(%d) 
Line 1148: No Target CSG Cells found 
Line 96: ERROR NewElement is NULL 
Line 256: PrivRemoveEntry: Curr is NULL
