Line 60: rr_Init3gCipherFlag
Line 95: Mem Corruption possible UarfcnCount = %d
Line 107: RESELECTION (REDIRECTION) TO UTRAN - No of Uarfcn(%d), Uarfcn(%d), SCD(%d)
Line 129: QFR: RESELECTION TO UTRAN - TDD Uarfcn(%d), SCD(%d), Div(%d)
Line 147: QFR: RESELECTION TO UTRAN - Index:%d TDD Uarfcn:%d, NumberOfScd:%d, SCD:%d, Total:%d
Line 169: Mem Corruption possible UarfcnCount = %d
Line 184: RESELECTION (REDIRECTION) TO UTRAN - No of Uarfcn(%d), Uarfcn(%d), NumScd(%d) SCD(%d) SCD(%d) SCD(%d)
Line 214:  RESELECTION TO UTRAN - Uarfcn(%d), SCD(%d), Div(%d)
Line 248:  RESELECTION TO UTRAN - TDD Uarfcn(%d), SCD(%d), Div(%d)
Line 252: Unreachable Code : Fix for Prevent
Line 259: ERROR RtkGetMemory returned NULL
Line 286: [G2U] !!RESELECTION TO UTRAN FAILED!! - BarTimerValue(%d), Cause(%d)
Line 294: [G2U][TDD] !!RESELECTION TO UTRAN FAILED!! - 3G NCELL [%d][%d,%d] BarTimerValue(%d), Cause(%d)
Line 324: [G2U] !!RESELECTION TO UTRAN FAILED!! - 3G NCELL [%d][%d,%d] BarTimerValue(%d), Cause(%d)
Line 399: CELL CHANGE TO UTRAN - Uarfcn(%d), SCD(%d), Div(%d)
Line 410: CELL CHANGE TO UTRAN - TDD Uarfcn(%d), SCD(%d), Div(%d)
Line 414: ERROR: No 3G Target Cell Present
Line 420: ERROR RtkGetMemory returned NULL
Line 440: (CIQ)## rr_UrrcGrrCellReselectionToUtranComplete 
Line 471: (CIQ)## rr_UrrcGrrCellChangeToUtranComplete 
Line 482: !!----- MPH HANDOVER TO UTRAN COMPLETE ----- !!
Line 509: !!CELL CHANGE TO UTRAN FAILED!! - Cause(%d)
Line 513: Error Cause(%d)
Line 592: Save IRAT Param and Wait for SRRC grant
Line 603: rr_UrrcGrrCellReselectionToGsm:IsRedirectionToGSM (%d) , WaitTime(%d), NumOfGsmCell (%d)
Line 618: URRC->GRR Redirection List : Arfcn(%d),BandInd(%d),Bsic(%d)
Line 631: URRC->GRR Redirection List : Arfcn(%d),BandInd(%d),Bsic(%d)
Line 648: No Redirection Indication in URRC_GRR_CELL_RESELECTION_TO_GSM Message (%d) 
Line 669: ERROR RtkGetMemory returned NULL
Line 682: rr_UrrcGrrCellReselectionToGsm: Add Uarfcn(%d),SCD(%d),FddRscpThreshold(%d)
Line 692: rr_UrrcGrrCellReselectionToGsm: Update Uarfcn(%d),SCD(%d),FddRscpThreshold(%d)
Line 699: rr_UrrcGrrCellReselectionToGsm: Invalid Uarfcn(%d),SCD(%d),FddRscpThreshold(%d)
Line 711: URRC->GRR RESELECTION TO GSM: Arfcn(%d),BandInd(%d),Bsic(%d)
Line 722: Multiple or No GSM cell description for cell reselection from UTRAN is not supported: %d
Line 796: URRC->GRR RESELECTION TO GSM FAILED Cause %d BarTime%d
Line 802: ERROR RtkGetMemory returned NULL
Line 882: URRC->GRR NACC TO GSM: UrrcTimer(%d),Arfcn(%d),BandInd(%d),Bsic(%d)
Line 887: SYSTEM INFORMATION PRESENT In CELL CHANGE ORDER FROM UTRAN
Line 906: InValid GERAN Info From CELL CHANGE ORDER Of UTRAN
Line 930: NC Mode : (%d) [From CELL CHANGE ORDER Of UTRAN] 
Line 943: Error : Cell (%d) not present in sync list 
Line 960: Save IRAT Param and Wait for SRRC grant
Line 975: URRC->GRR CHANGE TO GSM: UrrcTimer(%d),Arfcn(%d),BandInd(%d),Bsic(%d),GeranSIPresent(%d)
Line 1018: (CIQ)## CCO from utran failure , in rr_SendGrrUrrcCellChangeToGsmFailed CAUSE : %d #### need more info here
Line 1034: URRC->GRR CHANGE TO GSM FAILED Cause %d BarTime%d
Line 1041: ERROR RtkGetMemory returned NULL
Line 1067: URRC->GRR READ PC CNF
Line 1089: URRC->GRR ABORT PC CNF
Line 1147: rr_EqPlmnList is NULL
Line 1162: Failed to Allocate Sub Block memory
Line 1179: GRR->URRC READ PC REQ
Line 1184: ERROR RtkGetMemory returned NULL
Line 1213: GRR->URRC HANDOVER_TO_GSM
Line 1219: Save IRAT Param and Wait for SRRC grant
Line 1225: 3gCiphFlag(%d)
Line 1281: Failed to Allocate Sub Block memory
Line 1299: !!!GRR->URRC HANDOVER_TO_GSM FAILED!!!
Line 1305: ERROR RtkGetMemory returned NULL
Line 1337: Failed to Allocate Sub Block memory
Line 1359: GRR->URRC HANDOVER_TO_UTRAN, 3gCiphFlag(%d)
Line 1365: ERROR RtkGetMemory returned NULL
Line 1385:  ---- HANDOVER_TO_UTRAN COMPLETE ----
Line 1420: !!! HANDOVER_TO_UTRAN FAILED !!!
Line 1570: ERROR RtkGetMemory returned NULL
Line 1591: GRR->URRC Msg Type(%x)
Line 1622: Reset 3G Redirection Param , WaitTimer (%d) Redirection10sec (%d) 
Line 1674: GRR_URRC_INTER_RAT_HANDOVER_INFO_REQ %d PlmnId(%x %x %x)
Line 1679: ERROR RtkGetMemory returned NULL
Line 1713: GRR_URRC_CHECK_CELL_SUITABLE_REQ UARFCN %d  SCD %d
Line 1720: ERROR RtkGetMemory returned NULL
Line 1745: Suitable CNF UARFCN %d SCD %d Bartime %d Cause %d
Line 1765: rr_UrrcGrrHandleIcsProcInd: IsIcsOngoing %d
Line 1799: URRC_GRR_INTER_RAT_HANDOVER_INFO_REQ: isFddSupported(%d) isTddSupported(%d) isEutraDisabled(%d)
Line 1845: Failed to Allocate ClassMark2 Sub Block memory
Line 1855: Failed to Allocate ClassMark3 Sub Block memory
Line 1861: ClassMark2.Length(%d) ClassMark3.Length(%d)
Line 1874: ERROR RtkGetMemory returned NULL
Line 745: GRR Prior to Redirection 
Line 746: rr_band_type:%s rr_BandInd:%d
Line 821: ERROR RtkGetMemory returned NULL
Line 834: rr_UpdateIratGsmData: Add Uarfcn(%d),SCD(%d),FddRscpThreshold(%d)
Line 843: rr_UpdateIratGsmData: Update Uarfcn(%d),SCD(%d),FddRscpThreshold(%d)
Line 849: rr_UrrcGrrCellReselectionToGsm: Invalid Uarfcn(%d) or SCD(%d) or FddRscpThreshold(%d)
Line 1519: !!! Wrong Message Type !!!
