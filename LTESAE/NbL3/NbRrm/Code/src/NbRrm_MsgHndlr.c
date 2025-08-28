Line 198: [RRC => RRM] Decode RRM_RRC_FREQ_SCAN_REQ
Line 225: [RRM => NL1C] Send NL1C_RRM_FREQ_SCAN_REQ (earfcn:%u, rasterOffset:%s, afcMode:%s, ScanMode:%s)
Line 230: [RRM => NL1C] Send NL1C_RRM_FREQ_SCAN_REQ (earfcn:%u, rasterOffset:%d, afcMode:%s, ScanMode:%s)
Line 236: Cannot Allocate Message buffer
Line 262: [NL1C => RRM] Decode RRM_NL1C_FREQ_SCAN_CNF (isFreqValidResult:%d)
Line 283: [RRM => RRC] Send RRC_RRM_FREQ_SCAN_CNF
Line 288: Cannot Allocate Message buffer
Line 312: [RRM => RRC] Send RRC_RRM_CELL_SEL_CNF(outcome:%d, CellSelMode:%d)
Line 317: Cannot Allocate Message buffer
Line 344: [RRM => RRC] Send RRC_RRM_CELL_RESEL_CNF (Result:%d)
Line 349: Cannot Allocate Message buffer
Line 377: Warning!! pCellInfo: NULL in NbRrm_SendRrcAcqInd
Line 382: [RRM => RRC] Send RRC_RRM_CELL_ACQ_IND (earfcn:%u, cell_ID:%u, nrsrp:%d, nrsrq:%d, isIdleOos:%d)
Line 387: Cannot Allocate Message buffer
Line 418: [RRM => RRC] Send RRC_RRM_RESEL_EVAL_IND (Result: %d)
Line 423: Cannot Allocate Message buffer
Line 445: [RRC => RRM] Decode RRM_RRC_CELL_RESEL_REQ
Line 471: Warning!! unexpected CellSelMode(%d)
Line 476: [RRC => RRM] Decode RRM_RRC_CELL_SEL_REQ (CellSelMode:%s)
Line 493: [RRM => NL1C] Send NL1C_RRM_ALL_STOP_REQ
Line 498: Cannot Allocate Message buffer
Line 518: [NL1C => RRM] Decode RRM_NL1C_ALL_STOP_CNF
Line 534: [NL1C => RRM] Decode RRM_NL1C_MEASURE_STOP_CNF
Line 549: [NL1C => RRM] Decode RRM_NL1C_CELL_CHANGE_CNF
Line 565: [NL1C => RRM] Decode RRM_NL1C_REINIT_DRX_IND
Line 594: [RRM => NL1C] Send NL1C_RRM_UE_STATE_IND(IDLE)(intraCellCnt:%d)
Line 598: [RRM => NL1C] Send NL1C_RRM_UE_STATE_IND(%s)
Line 604: Cannot Allocate Message buffer
Line 632: [RRM => NL1C] Send NL1C_RRM_SEARCH_REQ (earfcn:%u, ScanMode:%s)
Line 637: Cannot Allocate Message buffer
Line 660: [NL1C => RRM] Decode RRM_NL1C_SEARCH_CNF (isSrchValidResult:%d)
Line 676: [NL1C => RRM] Decode RRM_NL1C_NPBCH_DECODE_IND
Line 694: [RRM => RRC] Send RRC_RRM_MIB_INFO_IND
Line 699: Cannot Allocate Message buffer
Line 723: [RRC => RRM] Decode RRM_RRC_MIB_INFO_UPDATE_REQ
Line 739: [RRM => NL1C] Send NL1C_RRM_MIB_INFO_UPDATE_REQ
Line 744: Cannot Allocate Message buffer
Line 766: [RRM => NL1C] Send NL1C_RRM_SIB1_INFO_UPDATE_REQ
Line 771: Cannot Allocate Message buffer
Line 795: [RRM => NL1C] Send NL1C_RRM_SI_INFO_UPDATE_REQ
Line 800: Cannot Allocate Message buffer
Line 830: [NL1C => RRM] Decode RRM_NL1C_SI_INFO_UPDATE_CNF(elapsedTime:%d)
Line 846: [RRM => RRC] Send RRC_RRM_SI_INFO_UPDATE_CNF
Line 851: Cannot Allocate Message buffer
Line 873: [NL1C => RRM] Decode RRM_NL1C_MIB_INFO_UPDATE_CNF
Line 890: [RRM => RRC] Send RRC_RRM_MIB_INFO_UPDATE_CNF
Line 895: Cannot Allocate Message buffer
Line 915: [NL1C => RRM] Decode RRM_NL1C_SIB1_INFO_UPDATE_CNF
Line 932: [RRM => RRC] Send RRC_RRM_SIB1_INFO_UPDATE_CNF
Line 937: Cannot Allocate Message buffer
Line 961: [RRM => RRC] Send RRC_RRM_CELL_INFO_IND
Line 966: Cannot Allocate Message buffer
Line 994: [RRC => RRM] Decode RRM_RRC_SIB1_INFO_UPDATE_REQ
Line 1010: [RRC => RRM] Decode RRM_RRC_SI_INFO_UPDATE_REQ (sib_bit_mask:0x%X)
Line 1026: [RRC => RRM] Decode RRM_RRC_BARRED_CELL_LIST_IND
Line 1042: [RRC => RRM] Decode RRM_RRC_IDLE_FROM_DEDICATED_PARAM_IND (redirect_carrier:%u)
Line 1066: [RRC => RRM] Decode RRM_RRC_SCPTM_FREQ_IND (cmd:%s)
Line 1070: [RRC => RRM] Decode RRM_RRC_SCPTM_FREQ_IND (cmd:%s, freq:%u)
Line 1075: Warning!! Wrong cmd(%d) received
Line 1096: [RRM => NL1C] Send NL1C_RRM_MEAS_RESULT_IND
Line 1101: Cannot Allocate Message buffer
Line 1132: [RRM => NL1C] Send NL1C_RRM_MEASURE_REQ(mode:%s, earfcn:%u, numOfCell:%d)
Line 1137: Cannot Allocate Message buffer
Line 1168: [NL1C => RRM] Decode RRM_NL1C_MEASURE_CNF(mode:%s, isValidResult:%d)
Line 1191: [RRC => RRM] Decode RRM_RRC_UE_STATE_IND(ue_state:%s)
Line 1207: [RRC => RRM] Decode RRM_RRC_CELL_SEL_STATUS_IND(NextAction:%d)
Line 1223: [RRC => RRM] Decode RRM_RRC_SUSPEND_REQ(cause:%d, sleepDuration:%u)
Line 1239: [RRC => RRM] Decode RRM_RRC_CDRX_CONFIG_REQ(drxConfSetup:%d)
Line 1255: [RRM => RRC] Send RRC_RRM_CDRX_CONFIG_CNF
Line 1260: Cannot Allocate Message buffer
Line 1283: [RRM => NL1C] Send NL1C_RRM_CONN_DRX_INFO_REQ
Line 1288: Cannot Allocate Message buffer
Line 1310: [NL1C => RRM] Decode RRM_NL1C_CONN_DRX_INFO_CNF
Line 1326: [RRM => NL1C] Send NL1C_RRM_SUSPEND_REQ
Line 1331: Cannot Allocate Message buffer
Line 1354: [RRM => RRC] Send RRC_RRM_SUSPEND_CNF
Line 1359: Cannot Allocate Message buffer
Line 1379: [NL1C => RRM] Decode RRM_NL1C_SUSPEND_CNF
Line 1401: [RRC => RRM] Decode RRM_RRC_RESUME_REQ(cause:%s)
Line 1417: [RRM => NL1C] Send NL1C_RRM_RESUME_REQ
Line 1422: Cannot Allocate Message buffer
Line 1446: [RRM => RRC] Send RRC_RRM_RESUME_CNF
Line 1451: Cannot Allocate Message buffer
Line 1473: [NL1C => RRM] Decode RRM_NL1C_RESUME_CNF(sleepduration:%d)
Line 1498: [NL1C => RRM] Decode RRM_NL1C_MEAS_SCHEDULE_IND (%s)
Line 1502: Warning! invalid drxMeasState(%d)
Line 1521: Warning! Meas Schedule ind received in unexpected procState(%d)
Line 1545: [RRM => NL1C] Send NL1C_RRM_MEAS_SCHEDULE_END_IND (servNsch:%d, intraSync:%d, intraCellCnt:%d)
Line 1550: Cannot Allocate Message buffer
Line 1575: [RRC => RRM] Decode RRM_RRC_SUPPORTED_BAND_LIST_IND(no_of_bands:%d)
Line 1595: Warning!! pCellInfo: NULL in NbRrm_SendNl1cCellChangeReq
Line 1600: [RRM => NL1C] Send NL1C_RRM_CELL_CHANGE_REQ (earfcn:%u, cell_ID:%u, rasterOffset:%d, freqOffset:%d)
Line 1605: Cannot Allocate Message buffer
Line 1635: [RRC => RRM] Decode RRM_RRC_ECID_REQ
Line 1655: [RRM => RRC] Send RRC_RRM_ECID_CNF
Line 1660: Cannot Allocate Message buffer
Line 1667: Warning! gpNbRrm_ServingCell is NULL
Line 1691: [RRC => RRM] Decode RRM_RRC_MEAS_RESULT_REQ
Line 1716: Warning! NBRRM->pServingCell: NULL in NbRrm_SendRrcMeasResultCnf
Line 1723: Cannot Allocate Message buffer
Line 1741: Serving Cell Meas Results[%4d_%3d], NRSRP:%d, NRSRQ:%d, NSINR:%d
Line 1749: Intra cell number = %d
Line 1774: Inter cell number = %d
Line 1780: numOfNbrCells = %d
Line 1785: Cannot Allocate Message buffer for nbrMeasResults
Line 1808: Intra NCell Info[%d]: earfcn:%4d, PCID:%d, NRSRP:%d, NRSRQ:%d, NSINR:%d
Line 1848: Inter Cell Info[%d]: earfcn:%4d, PCID:%d, NRSRP:%d, NRSRQ:%d, NSINR:%d
Line 1874: [RRM => RRC] Send RRC_RRM_MEAS_RESULT_CNF
Line 1892: [RRC => RRM] Decode RRM_RRC_MON_CHN_COND_IND
Line 1913: Cannot Allocate Message buffer
Line 1919: [RRM => RRC] Send RRC_RRM_CHN_COND_IMPV_IND
