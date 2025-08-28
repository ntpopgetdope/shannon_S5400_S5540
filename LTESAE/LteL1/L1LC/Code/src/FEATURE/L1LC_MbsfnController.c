Line 90: L1LC_MbsfnInit re_init[%d], init_all[%d]
Line 130: MBSFN Reset for CC[%d]
Line 200: [L1LC-MBSFN] L1LC_ConfigMBSFN scellArrayIndex[%d] NumMbsfnConfig[%d]
Line 205: [L1LC-MBSFN] No MBSFN Subframe Configuration
Line 220: [HAL-MBSFN] Invalid CC
Line 243: [L1LC-MBSFN] L1LC_ProcessMcchChangeNtfConfig scellArrayIndex[%d]
Line 270: [L1LC-MBSFN] L1LC_ProcessMcchChangeNtfReq scellArrayIndex[%d] earfcn[%d]
Line 281: [HAL-MBSFN] Invalid CC
Line 288: [L1LC-MBSFN] Start MCCH Change Ntf Monitoring
Line 295: [L1LC-MBSFN] Stop MCCH Change Ntf Monitoring
Line 324: [L1LC-MBSFN] L1LC_ProcessMcchCfgReq on scellArrayIndex[%d]
Line 328: [L1LC-MBSFN] MCCH STOP ALL
Line 357: [L1LC-MBSFN] Area Index Mismatch Array Index [%d], Provided Area Index[%d], Stored Area Index[%d]
Line 411: [L1LC-MBSFN] L1LC_ProcessMcchStartReq on scellArrayIndex[%d]
Line 415: [L1LC-MBSFN] MCCH start Request for Index[%d]
Line 450: [L1LC-MBSFN] L1LC is already configured for area idx [%d]
Line 468: [L1LC-MBSFN] MCCH Start Monitoring Failure
Line 507: [HAL-MBSFN] Invalid CC[%d]
Line 512: [L1LC-MBSFN] L1LC_ProcessMcchStopReq on scellArrayIndex[%d]
Line 516: [L1LC-MBSFN] MCCH STOP ALL
Line 534: [L1LC-MBSFN] MCCH stop Request for Index[%d]
Line 553: [L1LC-MBSFN] L1 is not configured earlier for area idx [%d] on scellArrayIndex[%d]
Line 559: [L1LC-MBSFN] Array Index Mismatch Array Index [%d], Area Index[%d], scellArrayIndex[%d]
Line 575: [L1LC-MBSFN] Either all area's mcch monitoring is stopped or none of area idx matches with MCCH Configuration
Line 596: [L1LC-MBSFN] L1LC_ProcessMcchSuspReadReq scellArrayIndex[%d]
Line 632: [L1LC-MBSFN] L1LC_ProcessPmchCfgReq
Line 715: [L1LC-MBSFN] L1LC_ProcessAreaScheduleReq for Area Index[%d]
Line 746: [L1LC-MBSFN] AreaSchedBitCount = %d
Line 763: [L1LC-MBSFN] L1LC_ProcessMbmsSigStrengthReq
Line 781: [L1LC-MBSFN] L1LC_ProcessMsiInd scellArrayIndex[%d] earfcn[%d] 
Line 809: [L1LC-MBSFN] L1LC_CheckMbmsAction
Line 860: [DRX-MBSFN] scellArrayIndex[%d] or drx config is not active for MBSFN
Line 873: [DRX-MBSFN] scellArrayIndex[%d] Paging SFN[%d] Paging TTI[%d]
Line 879: [DRX-MBSFN] Paging Start Scheduled at SFN [%d] TTI[%d]
Line 924: [DRX-MBSFN] L1LC_MbsfnComputeDrxSleepTime scellArrayIndex[%d]
Line 967: [DRX-MBSFN] MCCH Notification Scheduled at SFN [%d] TTI[%d]
Line 981: [DRX-MBSFN] MCCH Notification Scheduled at SFN [%d] TTI[%d]
Line 1036: [DRX-MBSFN] MCCH Monitor Period[%d]
Line 1047: [DRX-MBSFN] first_mcch_tti [%d]
Line 1064: [DRX-MBSFN] MCCH Start Scheduled at SFN [%d]
Line 1081: [DRX-MBSFN] MCCH End Scheduled at SFN [%d]
Line 1171: [DRX-MBSFN] MSI Start Scheduled at SFN [%d] TTI[%d]
Line 1184: [DRX-MBSFN] MSI Start Scheduled at SFN [%d] TTI[%d]
Line 1210: [DRX-MBSFN] MSI End Scheduled at SFN [%d] TTI[%d]
Line 1223: [DRX-MBSFN] MSI End Scheduled at SFN[%d] TTI[%d]
Line 1231: [DRX-MBSFN] msi_sfn[%d] last_msi_sfn[%d]
Line 1259: [DRX-MBSFN] sfn_wrap_offset[%d] count_offset[%d] sfn_offset[%d]
Line 1260: [DRX-MBSFN] NumOfMTCH = %d
Line 1329: [DRX-MBSFN] Scount [%d] Ecount [%d]
Line 1363: [DRX-MBSFN] TTI before DRX start is MBMS, hence give delay of 1.5 ms to decode MBMS
Line 1411: [DRX-MBSFN] mtch_start_count[%d] mtch_end_count[%d]
Line 1419: [DRX-MBSFN] START MSI: pmch_sf_info [0x%x]
Line 1438: [DRX-MBSFN] MTCH start Scheduled at SFN [%d] TTI[%d]
Line 1467: [DRX-MBSFN] sfn_idx [%d] drx_start sfn[%d] drx_start tti[%d] msi_sfn[%d] count [%d] pmch_sf_info[%d]
Line 1473: [DRX-MBSFN] count value equals mtch_end_count, sfn_idx[%d] msp_count[%d]
Line 1480: [DRX-MBSFN] CSA Boundary reached sfn_idx[%d] csp_count[%d]
Line 1489: [DRX-MBSFN] Start MTCH is found
Line 1494: [DRX-MBSFN] (start) SFN idx[%d] TTI[%d] crosses DRX End SFN idx[%d] TTI[%d]
Line 1502: [DRX-MBSFN] LAST MSI: pmch_sf_info [0x%x]
Line 1522: [DRX-MBSFN] MTCH End Scheduled at SFN [%d] TTI[%d] count[%d]
Line 1533: [DRX-MBSFN] count value equals mtch_end_count, sfn_idx[%d] msp_count[%d]
Line 1541: [DRX-MBSFN] CSA Boundary reached sfn_idx[%d] csp_count[%d]
Line 1549: [DRX-MBSFN] (last) SFN idx[%d] TTI[%d] crosses DRX End SFN idx[%d] TTI[%d]
Line 1628: [DRX-MBSFN] drx_start SFN[%d] TTI[%d] drx End SFN[%d] TTI[%d]
Line 1640: [DRX-MBSFN] scellArrayIndex[%d] is not active for MBSFN
Line 1689: [DRX-MBSFN]  mbsfn_start[0].sfn [%d] mbsfn_start[0].tti [%d] mbsfn_start[1].sfn[%d] mbsfn_start[1].tti[%d]
Line 1690: [DRX-MBSFN] mbsfn_start[2].sfn [%d] mbsfn_start[2].tti [%d] mbsfn_start[3].sfn[%d] mbsfn_start[3].tti[%d]
Line 1692: [DRX-MBSFN] mbsfn_end[0].sfn [%d] mbsfn_end[0].tti [%d] mbsfn_end[1].sfn[%d] mbsfn_end[1].tti[%d]
Line 1693: [DRX-MBSFN] mbsfn_end[2].sfn [%d] mbsfn_end[2].tti [%d] mbsfn_end[3].sfn[%d] mbsfn_end[3].tti[%d]
Line 1718: [DRX-MBSFN] Modem is already Off, ignore the processing of the message
Line 1726: [DRX-MBSFN] L1LC_ProcMbsfnDrxTmrExpr
Line 1730: [DRX-MBSFN] [Timer Exp] Wrap around Condition Current SFN[%d] Mbsfn_End_info SFN[%d]
Line 1739: [DRX-MBSFN] Current Time(SFN[%d] TTI[%d] offset[%d]) DRX End SFN[%d] TTI[%d] Remaining Time[%d]
Line 1746: [MBSFN-DRX] Meas Done, gHalDrx_PagingState = DRX_PAGING_INIT
Line 1772: [DRX-MBSFN] Remaining sleep Time[%d]
Line 1786: [DRX-MBSFN] Measurement Ongoing Dont Sleep till DRX_CONN_MEAS_DONE state: %d
Line 1826: [DRX-MBSFN] L1LC_MbmsDrxReset
Line 1944: [L1LC_UpdateDrxSFNInfo] SFN: %d, TTI: %d
Line 1982: [Mbsfn_Start_info] SFN: %d, TTI: %d
Line 2020: [Mbsfn_End_info] SFN: %d, TTI: %d
Line 2059: [DRX-MBSFN] L1LC_GetMtchTti scellArrayIndex[%d] duplex_mode[%d]
