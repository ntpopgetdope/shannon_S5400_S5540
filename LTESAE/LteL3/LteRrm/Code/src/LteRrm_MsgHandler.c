Line 324: [RRC => RRM] Decode LTE_CPHY_FREQ_SCAN_REQ
Line 347: [RRC => RRM] Decode LTE_CPHY_CELL_SEL_REQ (TransactionId:%d)
Line 459: IRAT Resel & CCO: Both commands are activated
Line 484: [RRC => RRM] Decode LTE_CPHY_CELL_STATUS_NTF
Line 502: [RRC => RRM] Decode LTE_CPHY_CELL_RESEL_REQ
Line 520: [RRC => RRM] Decode LTE_CPHY_SIB_UPDATE_NTF(TransId:%d)
Line 540: [RRC => RRM] Decode LTE_CPHY_UE_STATE_NTF
Line 558: [RRC => RRM] Decode LTE_CPHY_FREQ_SCAN_DONE_NTF
Line 576: [RRC => RRM] Decode LTE_CPHY_SI_START_READ_REQ
Line 594: [RRC => RRM] Decode LTE_CPHY_SI_STOP_READ_REQ
Line 614: [RRC => RRM] Decode LTE_CPHY_SERV_CELL_SWITCH_REQ
Line 618: - scg_config_only(1): Waiting for LTE_CPHY_RRM_CONFIG_REQ from LteRRC
Line 645: [RRC => RRM] Decode LTE_CPHY_MEAS_CONF_REQ
Line 662: Cannot Allocate Message buffer
Line 668: save MeasCfgMsg
Line 693: [RRC => RRM] Decode LTE_CPHY_MEAS_CGI_REQ(reporting_conf_type:%d, is_si_request:%d, agaps_NR:%d)
Line 704: Strong Intra Ncell or Low CINR : change AGAP(%d -> 1)
Line 735: [RRC => RRM] Decode LTE_CPHY_STOP_MEAS_CGI_REQ
Line 761: [RRC => RRM] Decode LTE_CPHY_SIB_6_UPDATE_NTF(TransId:%d)
Line 781: [RRC => RRM] Decode LTE_CPHY_SIB_7_UPDATE_NTF(TransId:%d)
Line 801: [RRC => RRM] Decode LTE_CPHY_SIB_8_UPDATE_NTF(TransId:%d)
Line 822: [RRC => RRM] Decode LTE_CPHY_SIB_16_UPDATE_NTF(TransId:%d) (%d)
Line 846: [RRC => RRM] Decode LTE_CPHY_SIB_18_UPDATE_NTF(TransId:%d)
Line 867: [RRC => RRM] Decode LTE_CPHY_SIB_19_UPDATE_NTF(TransId:%d)
Line 915: [RRC => RRM] Decode LTE_CPHY_SIB_24_UPDATE_NTF(TransId:%d)
Line 939: [RRC => RRM] Decode LTE_CPHY_MODEM_STOP_REQ
Line 971: [RRC => RRM] Decode LTE_CPHY_SUSPEND_REQ (%d)
Line 1025: [RRC => RRM] Decode LTE_CPHY_MODEM_START_REQ
Line 1031: RrcPauseInd(0) due to LTE_CPHY_MODEM_START_REQ
Line 1051: [RRC => RRM] Decode LTE_CPHY_RESUME_REQ(cause:%d)
Line 1060: remove LTE_CPHY_RESUME_REQ in %s State
Line 1066: RrcPauseInd(0) due to LTE_CPHY_RESUME_REQ
Line 1102: [RRC => RRM] Decode LTE_CPHY_DRX_CONFIG_REQ
Line 1132: gLteRrm_ConnDrxCycle(short_drx_cycle:%d, long_drx_cycle:%d)
Line 1140: gLteRrm_ConnDrxCycle is only long_drx_cycle(%d)
Line 1178: [RRC => RRM] Decode LTE_CPHY_SIB_13_UPDATE_NTF(TransID:%d) [CC idx:%d]
Line 1202: [RRC => RRM] Decode LTE_CPHY_MCCH_CHANGE_NTF_REQ [C:%d, earfcn:%d]
Line 1228: [RRC => RRM] Decode LTE_CPHY_MCCH_CFG_REQ [earfcn:%d, added:%d]
Line 1261: [RRM-MBSFN] Scell Index[%d], ScellCount[%d]
Line 1272: [RRM-MBSFN] MbsfnScellAreaIdx [0x%x] pch_monitor_status[%d]
Line 1281: [RRM-MBSFN] SCellActivationCMD [0x%x] Activated State[%d]
Line 1325: [RRM-MBSFN] Invalid scellArrayIndex[%d] Scell Index[%d]
Line 1349: [RRC => RRM] Decode LTE_CPHY_MCCH_START_READ_REQ
Line 1362: [RRM-MBSFN] Scell Index[%d], ScellCount[%d] Activated State[%d]
Line 1379: [RRM-MBSFN] MbsfnScellAreaIdx [0x%x] pch_monitor_status[%d]
Line 1435: [RRM-MBSFN] Invalid scellArrayIndex[%d] Scell Index[%d]
Line 1469: [RRC => RRM] Decode LTE_CPHY_MCCH_SUSP_READ_REQ
Line 1479: [RRM-MBSFN] Scell Index[%d], ScellCount[%d]
Line 1484: [RRM-MBSFN] MbsfnScellAreaIdx [0x%x]
Line 1487: [RRM-MBSFN] MbsfnScellAreaIdx [0x%x] pch_monitor_status[%d]
Line 1518: [RRM-MBSFN] Invalid scellArrayIndex[%d] Scell Index[%d]
Line 1543: [RRC => RRM] Decode LTE_CPHY_MCCH_STOP_READ_REQ
Line 1560: [RRM-MBSFN] Scell Index[%d], ScellCount[%d]
Line 1580: [RRM-MBSFN] MbsfnScellAreaIdx [0x%x] pch_monitor_status[%d]
Line 1588: [RRM-MBSFN] SCellActivationCMD [0x%x] Activate State[%d]
Line 1645: [RRM-MBSFN] Invalid scellArrayIndex[%d] Scell Index[%d]
Line 1664: [RRC => RRM] Decode LTE_CPHY_PMCH_CFG_REQ
Line 1702: [RRC => RRM] Decode LTE_CPHY_AREA_SCHEDULE
Line 1719: [MBSFN] ERROR: Invalid Number of Subframe Configuration [%d]
Line 1735: [RRC => RRM] Decode LTE_CPHY_MBSFN_SIG_STRENGTH_REQ
Line 1757: [RRC => RRM] Decode LTE_CPHY_SET_FREQ_PRIORITY_REQ
Line 1802: [RRC => RRM] Decode L1RX_RRM_MSI_UPDATE_IND
Line 1824: [RRM-MBSFN] LteRrm_SetScellPchCommand scell_index[%d] isServing[%d] command[%d]
Line 1830: [RRM-MBSFN] MbsfnScellAreaIdx [0x%x] pch_monitor_status[%d] valid[%d]
Line 2052: [RRC => RRM] Decode LTE_CPHY_SCELL_MBSFN_GRANT_REQ
Line 2074: [RRC => RRM] Decode LTE_CPHY_MBSFN_SI_START_READ_REQ
Line 2080: [RRM-MBSFN] Scell Index[%d], ScellCount[%d]
Line 2085: [RRM-MBSFN] Activate SIB read for Scell Index[%d] Activated State[%d]
Line 2089: Scell is not activated !! Activate Scell for eMBMS 
Line 2117: [RRM-MBSFN] Invalid scellArrayIndex[%d] Scell Index[%d]
Line 2139: [RRM-MBSFN] Invalid Si read Path for CC0
Line 2159: [RRC => RRM] Decode LTE_CPHY_MBSFN_SI_STOP_READ_REQ
Line 2181: [RRM-MBSFN] Scell Index[%d], ScellCount[%d]
Line 2186: [RRM-MBSFN] De-Activate SIB read for Scell Index[%d] SCellActivationCMD[0x%x] Activated State[%d]
Line 2205: [RRM-MBSFN] Invalid Si read Path for CC0
Line 2218: [RRC => RRM] Decode LTE_CPHY_MBSFN_UE_STATE_NTF
Line 2241: [RRC => RRM] Decode LTE_CPHY_RLF_INFO_REQ
Line 2249: PCell(Cell ID:%d, RSRP=%d, RSRQ=%d, Type[All Symbols(%d)/Wide Band(%d)]
Line 2253: Ncell num(%d)
Line 2260: Cannot Allocate Memory buffer
Line 2291: [RRC => RRM] Decode LTE_CPHY_MOB_CMD_TO_IRAT_START_REQ(RAT:%d ENDC:%d)
Line 2313: NOT support LTE_CPHY_MOB_CMD_TO_IRAT_START_REQ(utraTypeForLastMR:%d)
Line 2331: NOT support LTE_CPHY_MOB_CMD_TO_IRAT_START_REQ(rat_type:%d)
Line 2367: [RRC => RRM] Decode LTE_CPHY_UPDATE_SUPPORTED_BAND_LIST_REQ
Line 2377: SupportBandList[%2d]=%d
Line 2404: [RRC => RRM] Decode LTE_CPHY_UPDATE_CSG_RESERVE_LIST_REQ
Line 2412: LteRrm_DecodeRrcUpdateCsgReservedListReq - invalid list size(%d), range list
Line 2429: [RRC => RRM] Decode LTE_CPHY_CSG_MEAS_REQ
Line 2447: [RRC => RRM] Decode LTE_CPHY_CSG_STOP_MEAS_REQ
Line 2467: [RRC => RRM] Decode LTE_CPHY_CSG_PROXIMITY_MEAS_REQ
Line 2485: [RRC => RRM] Decode LTE_CPHY_STOP_CSG_PROXIMITY_MEAS_REQ
Line 2505: [RRC => RRM] Decode LTE_CPHY_ECID_MEAS_REQ
Line 2521: [RRC => RRM] Decode LTE_CPHY_ECID_ABORT
Line 2539: [RRC => RRM] Decode LTE_CPHY_OTDOA_MEAS_REQ
Line 2555: [RRC => RRM] Decode LTE_CPHY_OTDOA_ABORT
Line 2573: [RRC => RRM] Decode LTE_CPHY_OTDOA_RESULT_REQ
Line 2591: [RRC => RRM] Decode LTE_CPHY_LOGGED_MEAS_REQ
Line 2605: req_type is invalid(%d)
Line 2626: [RRC => RRM] Decode LTE_CPHY_RRM_CONFIG_REQ
Line 2645: Cannot Allocate Message buffer
Line 2652: save RrmCfgMsg
Line 2678: [RRC => RRM] Decode LTE_CPHY_MOBILITY_HIST_REP_REQ
Line 2682: req_mobility_state(%d)
Line 2689: req_mobility_hist_report(%d)
Line 2714: [RRC => RRM] Decode LTERRC_RRM_IDLE_STATE_IND
Line 2720: Cannot Allocate Message buffer
Line 2744: [RRC => RRM] Decode LTERRC_RRM_OTHER_RAT_BPLMN_START_NTF
Line 2750: Cannot Allocate Message buffer
Line 2775: [RRC => RRM] Decode LTERRC_RRM_SIGNALLING_IND ([%d] HO:%d, CS:%d)
Line 2781: Cannot Allocate Message buffer
Line 2810: [RRM => RRC] Send LTE_CPHY_OTHER_RAT_BPLMN_IND
Line 2815: Cannot Allocate Message buffer
Line 2840: [RRC => RRM] Decode LTERRC_RRM_DSDS_PAUSE_IND
Line 2860: [RRC => RRM] Decode LTERRC_RRM_DSDS_RESUME_IND
Line 2996: [RRM => RRC] Send LTE_CPHY_SIB_UPDATE_CNF(%d)
Line 3002: Cannot Allocate Message buffer
Line 3029: [RRC => RRM] Decode LTERRC_RRM_UPDATE_CURR_MODE_IND(%d, %d)
Line 3035: Cannot Allocate Message buffer
Line 3061: [RRC => RRM] Decode LTERRC_RRM_SCONE_INFO_IND
Line 3064: [RRM scone] Mobility (%d), Wifi State (%d)
Line 3092: [RRC => RRM] Decode LTERRC_RRM_INIT_IND(%d)
Line 3115: [RRC => RRM] Decode LTE_CPHY_P_MAX_NTF(%d, Pmax : %d)
Line 3123: DO NOT handle PMAX change in this State
Line 3145: [RRM => RRC] Send LTE_CPHY_MCCH_CHANGE_NTF_IND
Line 3159: Cannot Allocate RRC Message buffer
Line 3175: [RRM-MBSFN] Send LTE_CPHY_MBSFN_SIG_STRENGTH_RSP to RRC
Line 3188: Cannot Allocate RRC Message buffer
Line 3205: [RRM-MBSFN] Send LTE_CPHY_SCELL_MBSFN_GRANT_RSP to RRC
Line 3217: Cannot Allocate RRC Message buffer
Line 3243: [RRM => RRC] Send LTE_CPHY_OUT_OF_SYNC_IND
Line 3249: Cannot Allocate Message buffer
Line 3285: [RRM => RRC] Send LTE_CPHY_IN_SYNC_IND
Line 3291: Cannot Allocate Message buffer
Line 3329: [RRM => RRC] Send LTE_CPHY_RLF_INFO_IND
Line 3335: Cannot Allocate Message buffer
Line 3361: [RRM => RRC] Send LTE_CPHY_MIB_INFO_IND
Line 3371: Cannot Allocate Message buffer
Line 3400: [RRM => RRC] Send LTE_CPHY_MOB_CMD_TO_IRAT_START_RSP
Line 3410: Cannot Allocate Message buffer
Line 3438: [RRM => RRC] Send LTE_CPHY_MODEM_STOP_CNF(cause:%d)
Line 3444: Cannot Allocate Message buffer
Line 3471: [RRM => RRC] Send LTE_CPHY_SUSPEND_CNF
Line 3484: Cannot Allocate Message buffer
Line 3511: [RRM => RRC] Send LTE_CPHY_MODEM_START_CNF(cause:%d)
Line 3517: Cannot Allocate Message buffer
Line 3543: [RRM => RRC] Send LTE_CPHY_RESUME_CNF
Line 3557: Cannot Allocate Message buffer
Line 3583: [RRM => RRC] Send LTE_CPHY_DRX_CONFIG_CNF(%d)
Line 3589: Cannot Allocate Message buffer
Line 3743: [RRM => RRC] Send LTE_CPHY_MOBILITY_HIST_REP_RSP
Line 3749: Cannot Allocate Message buffer
Line 3789: [L1RX => RRM] Decode L1RX_RRM_SCELL_INDEX_IND
Line 3812: [L1LC => RRM] Decode L1LC_RRM_SET_DL_FREQ_CNF
Line 3821: RfTuneCbFunc is NULL
Line 3838: [L1LC => RRM] Decode L1LC_RRM_SET_UL_FREQ_CNF
Line 3856: [L1LC => RRM] Decode L1LC_RRM_FREQ_SCAN_CNF (hypoCnt:%d)
Line 3860: [L1LC => RRM] Decode L1LC_RRM_FREQ_SCAN_CNF
Line 3879: [L1LC => RRM] Decode L1LC_RRM_SEARCH_CNF
Line 3907: [L1LC => RRM] Decode L1LC_RRM_MEASURE_CNF(%d)(%d)
Line 3953: [L1LC => RRM] Decode L1LC_RRM_PBCH_DECODE_CNF
Line 3976: Cannot Allocate Message buffer
Line 4035: [L1LC => RRM] Decode L1LC_RRM_MEASURE_STOP_CNF
Line 4053: [L1LC => RRM] Decode L1LC_RRM_ALL_STOP_CNF
Line 4065: srchMode(%d), target BW(%d))
Line 4174: [L1LC => RRM] Decode L1LC_RRM_MEAS_SCHEDULE_IND (SFN:%d, TTI:%d)(%d)(%d)(%d)
Line 4178: Ignore L1LC_RRM_MEAS_SCHEDULE_IND due to POWER OFF in %s State
Line 4183: L1LC_RRM_FORCE_WAKEUP_CNF is missed in %s State
Line 4196: [%s] measState:%d - ignore this schedule ind RACH ongoing(%d)
Line 4209: measState:%d, Resel:%d
Line 4212: bWaitDrxForMeas: %d -> 0
Line 4277: IdleMeasEnable is FALSE
Line 4295: ConnMeasEnable is FALSE
Line 4315: received L1lcMeasScheduleInd in invalid state(%s), SI(%d)
Line 4345: [L1LC => RRM] Decode L1LC_RRM_CELL_CHANGE_CNF(%d)
Line 4356: Duplicate CellChange Msg!!
Line 4375: [L1LC => RRM] Decode L1LC_RRM_OUT_OF_SYNC_IND (%d)
Line 4416: RLMonitor should be ON only in LTERRM_CONN_STATE
Line 4434: PCI(%d) == LockPci(%d), Cell Locking enable: No OOS Ind to RRC
Line 4443: no action in %s State
Line 4467: [L1LC => RRM] Decode L1LC_RRM_IN_SYNC_IND
Line 4476: RLMonitor should be ON only in LTERRM_CONN_STATE
Line 4494: [L1LC => RRM] Decode L1LC_RRM_IRAT_CDMA_INFO_IND
Line 4510: [L1LC => RRM] Decode L1LC_RRM_IRAT_CDMA_CS_STATE_IND
Line 4538: [L1LC => RRM] Decode L1LC_RRM_NCELL_TIMING_INFO_CNF(rat_type:%d, num_of_neigh_cells:%d)
Line 4551: NOT support rat_type!
Line 4623: ssb_index[%d] TO:%d rsrp(%6d) rsrq(%6d) rssinr(%6d) rssi(%6d)
Line 4642: NR Freq:%d PCID:%d total ssb count:%d agcGainIndex(%d, %d) half_frame_num:%d
Line 4671: BACKGROUND_START_IND is triggered(eCgiMeasType:%d, eCgiState:%d)
Line 4680: Unexpected condition in DecodeL1lcNcellTimingInfoCnf(bMobCmd:%d / eCgiMeasType:%d / eCgiState:%d)
Line 4697: [L1LC => RRM] Decode L1LC_RRM_SEARCH_REQUEST_IND
Line 4705: NOT support current State(%s)
Line 4728: [L1LC => RRM] Decode L1LC_RRM_NR_PBCH_DECODE_CNF(%d)
Line 4749: L1lcRrm_NrPbchDecodeCnf_t is NULL 
Line 4773: [RRC => RRM] Decode LTE_CPHY_LOW_PWR_MODE_NTF(%d, %d)
Line 4779: lte_cphy_low_pwr_mode_ntf_t is NULL 
Line 4801: [RRM => L1LC] Send RRM_L1LC_MCCH_START_READ_REQ scellArrayIndex[%d]
Line 4807: Cannot Allocate Message buffer
Line 4832: [RRM => L1LC] Send RRM_L1LC_MCCH_STOP_READ_REQ scellArrayIndex[%d]
Line 4838: Cannot Allocate Message buffer
Line 4863: [RRM => L1LC] Send RRM_L1LC_MCCH_SUSP_READ_REQ scellArrayIndex[%d]
Line 4869: Cannot Allocate Message buffer
Line 4895: [RRM => L1LC] Send RRM_L1LC_CONFIG_MCCH_CHANGE_NTF scellArrayIndex[%d]
Line 4901: Cannot Allocate Message buffer
Line 4926: [RRM => L1LC] Send RRM_L1LC_MCCH_CHANGE_NTF_REQ scellArrayIndex[%d] command[%d]
Line 4932: Cannot Allocate Message buffer
Line 4958: [RRM => L1LC] Send RRM_L1LC_MCCH_CFG_REQ scellArrayIndex[%d]
Line 4964: Cannot Allocate Message buffer
Line 4990: [RRM => L1LC] Send RRM_L1LC_PMCH_CFG_REQ scellArrayIndex[%d]
Line 4996: Cannot Allocate Message buffer
Line 5021: [RRM => L1LC] Send RRM_L1LC_AREA_SCHEDULE scellArrayIndex[%d]
Line 5027: Cannot Allocate Message buffer
Line 5052: [RRM => L1LC] Send RRM_L1LC_MBMS_SIG_STRENGTH_REQ
Line 5058: Cannot Allocate Message buffer
Line 5083: [RRM => L1LC] Send RRM_L1LC_MSI_UPDATE_IND scellArrayIndex[%d]
Line 5089: Cannot Allocate Message buffer
Line 5114: [RRM => L1LC] Send RRM_L1LC_MBSFN_SI_START_READ_REQ earfcn[%d]
Line 5120: Cannot Allocate Message buffer
Line 5144: [RRM => L1LC] Send RRM_L1LC_MBSFN_SI_STOP_READ_REQ earfcn[%d]
Line 5150: Cannot Allocate Message buffer
Line 5211: [L1LC => RRM] Decode L1LC_RRM_MCCH_CHANGE_IND
Line 5229: [L1LC => RRM] Decode L1LC_RRM_MBSFN_SIG_STRENGTH_RSP
Line 5253: [RRM => L1LC] Send RRM_L1LC_PCH_INFO_NTF for Scell with Command[%d]
Line 5259: Cannot Allocate Message buffer
Line 5288: [RRM => L1LC] Send RRM_L1LC_BARRED_LIST_CNF
Line 5294: Cannot Allocate Message buffer
Line 5317: [RRM => L1LC] Send RRM_L1LC_DSDS_PAUSE_IND
Line 5323: Cannot Allocate Message buffer
Line 5345: [RRM => L1LC] Send RRM_L1LC_DSDS_RESUME_IND
Line 5351: Cannot Allocate Message buffer
Line 5376: [L1LC => RRM] Decode L1LC_RRM_SUSPEND_CNF(%d, %d)
Line 5390: DSDSPauseFlag, RrcPauseInd due to L1LC_RRM_SUSPEND_CNF
Line 5460: [L1LC => RRM] Decode L1LC_RRM_RESUME_CNF(%d)
Line 5497: [ERR] RRC didn't request MODEM_START or RESUME to RRM.(Check the cause)
Line 5518: [L1LC => RRM] Decode L1LC_RRM_FORCE_WAKEUP_CNF(%s State)
Line 5545: [L1LC => RRM] Decode L1LC_RRM_WAKEUP_IND(%d)
Line 5576: UpdateMeasScheduleVariable(%d, %d)
Line 5610: [L1LC => RRM] Decode L1LC_RRM_BPLMN_CGI_START_IND(CurRrmState:%s, eCgiState:%d)
Line 5624: spare time completely elapsed
Line 5661: gbLteRrm_BplmnSync(FALSE, %d)
Line 5670: Invalid CurRrmState:%s
Line 5698: [L1LC => RRM] Decode L1LC_RRM_PAGING_DONE_IND
Line 5711: [PPM_active] Freq(%d), ori priority(%d), fake priority(%d)
Line 5739: [L1LC => RRM] Decode L1LC_RRM_REINIT_DRX_IND
Line 5755: PrimaryCell is NULL
Line 5761: L1LC_RRM_REINIT_DRX_IND triggered during Reselection: return to avoid exception
Line 5767: L1LC_RRM_REINIT_DRX_IND triggered by force wakeup(%d)(%d): IDLE OOS occurred
Line 5775: Reinit triggered while SI modification leads to Idle OOS !!
Line 5810: [L1LC => RRM] Decode L1LC_RRM_MEASURE_CONFIG_IND (%d)(%d)(%d)
Line 5824: Serving cell Time Updated
Line 5853: LteRrm_DecodeL1lcMeasConfigInd ignore: ConnMeasEnable is FALSE
Line 5876: [L1LC => RRM] Decode L1LC_RRM_BACKGROUND_START_IND(eCgiState:%d)
Line 5901: [L1LC => RRM] Decode L1LC_RRM_BACKGROUND_STOP_IND
Line 5922: [L1LC => RRM] Decode L1LC_RRM_BACKGROUND_START_LTE_ACTIVE_IND [%d]
Line 5945: [L1LC => RRM] Decode L1LC_RRM_BACKGROUND_STOP_LTE_ACTIVE_IND
Line 5966: [L1LC => RRM] Decode L1LC_RRM_MEASURE_SUSPEND_FOR_TX_REQ
Line 5971: Next Idle Measurement was Disabled
Line 5983: Next (Inter/IRAT) Conn Measurement was Disabled
Line 5987: Invalid State:%s State
Line 6004: [L1LC => RRM] Decode L1LC_RRM_MEASURE_RESUME_FOR_TX_IND(%s State)
Line 6025: [L1LC => RRM] Decode L1LC_RRM_SET_SIUPDATE_TMR_IND(%d)
Line 6034: ModPeriod==0: Anyway Decode PBCH
Line 6067: [L1LC => RRM] Decode L1LC_RRM_BARRED_LIST_REQ
Line 6091: [L1LC => RRM] Decode L1LC_RRM_OTDOA_MEAS_RESULT
Line 6109: [L1LC => RRM] Decode L1LC_RRM_RSTD_INTER_FREQ_MEAS_IND
Line 6127: [L1LC => RRM] Decode L1LC_RRM_CLK_EST_DONE_IND(%d)
Line 6195: [L1LC => RRM] Decode L1LC_RRM_PROC_PAUSE_IND(%d)
Line 6199: isEarlyPauseTimerExpiredDuringBPLMN is TRUE, BPLMN will be restarted when the Resume Msg Received
Line 6206: DSDSPauseFlag: TRUE
Line 6210: NOT Send LTE_CPHY_PROC_PAUSE_IND, RrcPauseInd(%d)
Line 6236: [L1LC => RRM] Decode L1LC_RRM_PROC_RESUME_IND
Line 6248: Cannot Allocate Message buffer
Line 6254: DSDSPauseFlag set to FALSE due to L1LC_RRM_PROC_RESUME_IND
Line 6260: [RRM => RRC] Send LTE_CPHY_PROC_RESUME_IND
Line 6267: skip LTE_CPHY_PROC_RESUME_IND message (RrcPauseInd:%d, DSDSPauseFlag:%d
Line 6286: [L1LC => RRM] Decode L1LC_RRM_DSDS_RELEASE_IND
Line 6293: Cannot Allocate Message buffer
Line 6300: DSDSPauseFlag set to FALSE due to L1LC_RRM_DSDS_RELEASE_IND
Line 6325: [L1LC => RRM] Decode L1LC_RRM_CGI_STOP_RSP
Line 6346: [L1LC => RRM] Decode L1LC_RRM_SCELL_DEACT_TIMER_EXPIRY_IND(%d)
Line 6367: [L1LC => RRM] Decode L1LC_RRM_UMTS_SFN_MIB_ACQUISITION_IND(isSuccess:%d)
Line 6396: [L1LC => RRM] Decode L1LC_RRM_SCELL_RTG_UPDATE_NTF(%d)
Line 6408: Scell(%d, %d) timing would be changed(%d -> %d)
Line 6414: LteRrm_DecodeL1lcSlMeasureCnf : CellInfo is NULL
Line 6419: LteRrm_DecodeL1lcSlMeasureCnf : FreqInfo is NULL
Line 6441: [L1LC => RRM] Decode L1LC_RRM_SSTD_INFO_CNF
Line 6462: [RRM => L1LC] Send RRM_L1LC_RESUME_REQ
Line 6468: Cannot Allocate Message buffer
Line 6495: [RRM => L1LC] Send RRM_L1LC_UPDATE_SUPPORTED_BAND_LIST_REQ
Line 6501: Cannot Allocate Message buffer
Line 6528: [RRM => L1LC] Send RRM_L1LC_MTM_STATE_SET_REQ
Line 6534: Cannot Allocate Message buffer
Line 6559: [RRC => RRM] Decode LTE_CPHY_TIME_AIDING_REQ
Line 6565: Cannot Allocate Message buffer
Line 6591: [RRC => RRM] Decode LTE_CPHY_VOLTE_STATUS_NTF(%d, %d)
Line 6601: Emergency call received, Diablo Stationary mode reset!
Line 6610: Cannot Allocate Message buffer
Line 6636: [NR => RRM] Decode LTERRM_NRRRM_NR_MEAS_RESULT_IND
Line 6644: EN-DC is deactivated
Line 6676: [NR => RRM] Decode LTERRM_NRRRM_NR_OBJECT_CHECK_CNF(Result :%d, NumCell :%d, MeasType :%d Cnt :%d)
Line 6695: [RRC => RRM] Decode LTE_CPHY_ENDC_STATUS_IND(BitMask:%d, EndcStatus:%d)
Line 6732: [RRM => L1LC] Send RRM_L1LC_ENDC_STATUS_IND(%d)
Line 6738: Cannot Allocate Message buffer
Line 6759: [NR => RRM] Decode LTERRM_NRRRM_LTE_OBJECT_CHECK_REQ(Earfcn:%d MeasType:%d)
Line 6798: LTE Ncell meas result(Cell ID:%d, RSRP=%d, RSRQ=%d RSSINR=%d)
Line 6835: [RRM => NR] Send NRRRM_LTERRM_LTE_OBJECT_CHECK_CNF(Earfcn:%d NumCell:%d)
Line 6840: Cannot Allocate Message buffer
Line 6866: [RRM => RRC] Send LTERRC_NR_MEASURE_RESULT_CNF
Line 6872: Cannot Allocate Message buffer
Line 6903: [RRC => RRM] Decode LTERRC_NR_MEASURE_RESULT_REQ
Line 6907: NR frequency num(%d)
Line 6914: Cannot Allocate Memory buffer
Line 6943: [RRC => RRM] Decode LTERRC_RRM_NR_SCG_REL_IND(%d)
Line 6946: NrScgReleaseInd(%d): bEndcActiveFlag(%d), bConnMeasEnable(%d) bConnMeasDisableForScgRel(%d)
Line 6957: Stop measurements, Scg Release Started
Line 6966: Skip handling NrScgRelease Start
Line 6981: Skip handling NrScgRelease Complete
Line 6986: ScgReleaseInd with incorrect status
Line 6991: Received NrScgReleaseInd in incorrect rrm state(%s)
Line 7080: [RRC => RRM] Decode LTERRC_RRM_SEC_ACT_IND
Line 7098: [RRC => RRM] Decode LTE_CPHY_IDLE_MEAS_CONF_NTF (%d)
Line 7109: [EUCA] req_type is invalid(%d)
Line 7128: [RRC => RRM] Decode LTERRC_RRM_T331_EXPIRY_IND (%d)
Line 7146: [RRM => RRC] Send LTE_CPHY_IDLE_MEAS_RESULTS_IND
Line 7152: Cannot Allocate Message buffer
Line 7182: [L1LC => RRM] Decode L1LC_RRM_RSSI_SCAN_CNF (%d)(BeforeAllStopCnf: %d)
Line 7187:  > Abnormal State(%s)(%d) - ignore RSSI_SCAN_CNF
Line 7198: RSSI SCAN RESULT_V] %2d, %d - (%d)
Line 7210: RSSI SCAN RESULT_I] %2d, %d - (%d)
Line 7217: RSSI SCAN END] s:%d, e:%d
Line 7222: > pRssiScanResult(%x) RssiScanNum(%d)
Line 7226:  sort mode(%d) - Num(%d)
Line 7264: No RSSI Scan Results available: SendRrcFreqScanCnf
Line 7278: No RSSI Scan Results available: StopBplmnScan
Line 7298: No RSSI Scan Results available: Stop FPLMN_SCAN_IRAT
Line 7343: Too short remain time (%d), Do not start Rssi Scan
Line 7351: RSSI SCAN RUN] s:%d, e:%d, BW:%d, OBW:%d
Line 7373: [L1LC => RRM] Decode L1LC_MTM_RRM_PROC_HANDL_REQ (init:%d, init_high:%d, meas_stop:%d, all_stop:%d)
Line 7421: [L1LC => RRM] Decode L1LC_MTM_RRM_NON_SIG_CA_PROC_HANDL_REQ (numCC:%d, cell_id:%d, ul_cp:%d, framePos:%d)
Line 7451: [MTM NONSIG] MTMCOMM_LteMtmCAConfig: Memory Allocation Fail (CellInfoBuf)
Line 7458: [MTM NONSIG] MTMCOMM_LteMtmCAConfig: Memory Allocation Fail (FreqInfoBuf)
Line 7482: [RRC => RRM] Decode LTERRC_RRM_SENSOR_STATUS_NTF(%d)
Line 7500: [RRC => RRM] Decode LTE_CPHY_SET_TIME_PULSE_REQ(%d)
Line 7517: [RRC => RRM] Decode LTE_CPHY_AAM_TIME_AIDING_PULSE_FORCE_WAKEUP_REQ
Line 7533: [L1LC => RRM] Decode L1LC_RRM_AAM_TIME_AIDING_PULSE_RSP(%d)
Line 7551: [RRC => RRM] Decode LTERRC_RRM_DROP_MEAS_REPORT_IND(MeasId:%d)
Line 3615: [RRM => RRC] Send LTE_CPHY_CSG_MEAS_CNF
Line 3621: Cannot Allocate Message buffer
Line 3646: [RRM => RRC] Send LTE_CPHY_CSG_STOP_MEAS_CNF
Line 3652: Cannot Allocate Message buffer
Line 3677: [RRM => RRC] Send LTE_CPHY_CSG_PROXIMITY_MEAS_CNF
Line 3683: Cannot Allocate Message buffer
Line 3708: [RRM => RRC] Send LTE_CPHY_STOP_CSG_PROXIMITY_MEAS_CNF
Line 3713: Cannot Allocate Message buffer
Line 6165: Cannot Allocate Message buffer
Line 6174: [RRM => RRC] Send LTE_CPHY_PROC_PAUSE_IND [%d]
