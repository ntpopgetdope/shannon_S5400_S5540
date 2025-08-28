Line 133:      ##[NR_CHANNEL] %s during L1C_SUSPEND
Line 138: ##[NR_CHANNEL] RECV_MSG(EVENTSCHEDINFOCTRLR_EXCEPTION_IND) EventId(%u), ExceptionCause(%u), m_BchDb->on_going_proc(0x%x), cb_param(%d), m_BchDb->ctrlr_state(%d)
Line 159:      ##[NR_CHANNEL] BCH RELEASE is already started before DSDS pause
Line 166:      ##[NR_CHANNEL] Defer processing of RSM_RUNNING_HOLD as BCH CONFIG is ongoing
Line 178: ##[NR_CHANNEL] Waiting for BchCfgCb (%d)us
Line 187: ##[NR_CHANNEL] Waiting for SysParamChangeCmdCb (%d)us
Line 221:    ##[NR_CHANNEL] Adding delay for SysInfoCb @ (%d) us
Line 256:    ##[NR_CHANNEL] Waiting for SysParamChangeCmdCb (%d)us
Line 293:    ##[NR_CHANNEL] RUNNING_HOLD is received for RSM_SYNC (0x%x)
Line 296:    ##[NR_CHANNEL] RUNNING_HOLD is received for HIGH_PRIO, so continue to wrap up procedure
Line 318:    ##[NR_CHANNEL] Adding delay for SchedPhyConfigRequestCb @ (%d) us
Line 333: ##[NR_CHANNEL] Nothing to do for RUNNING_RESUME
Line 370: ##[NR_CHANNEL] RECV_MSG(AS_STATE_IND) state(%d), m_BchDb->ctrlr_state(%d)
Line 396: ##[NR_CHANNEL] RECV_MSG(BCH_CONFIG_REQ): on_going_proc(0x%x), ctrlr_state(%d)
Line 429:    ##[NR_CHANNEL] OSI min_rf_use_time(%d, %d, %d)
Line 456: ##[NR_CHANNEL] RECV_MSG(SIB_DECODE_STOP_REQ) RoutingInfo[%d], ctrlr_state(%d), on_going_proc(0x%x)
Line 465: ##[NR_CHANNEL] RECV_MSG(SIB_DECODE_STOP_REQ) IsSib1ForEtwsAndCmas(%d)
Line 495: ##[NR_CHANNEL] RECV_MSG(SERVING_CELL_CHANGE_REQ): num_of_bch_cfg_cell(%d), ctrlr_state(%d), on_going_proc(0x%x), use_spcell_info(%d)
Line 524:    ##[NR_CHANNEL] SERVING_CELL_CHANGE_Param#1(cellId(%d), arfcn(%d), band(%d), freq(%d), ssbIndex(%d), scs(%d), timingOffset(%d) periodicity(%d))
Line 526:    ##[NR_CHANNEL] SERVING_CELL_CHANGE_Param#2(period(%d), CellChangeType(%d, 0=default/1=recov/2=AGap), MibInfoIncluded(%d), agc_gain(%d, %d)
Line 567:    ##[NR_CHANNEL] UseSpcell+Reconfig -> {serv_freq_info(%d, %d), dl_layer(%d), sys_bw(%d), scs(%d)}
Line 583:      ##[NR_CHANNEL] nr_serv_cell_info_backup is NULL
Line 598:    ##[NR_CHANNEL][RECOV] RecoveryInfo -> {serv_freq_info(%d, %d), dl_layer(%d), sys_bw(%d), scs(%d)}
Line 639: ##[NR_CHANNEL][RECOV] ServCell Recovery: HFI(%d), SFN(%d), pch_ind(%d), drx_ind(%d)
Line 666:      ##[NR_CHANNEL] %s during L1C_SUSPEND
Line 673: ##[NR_CHANNEL] RECV_MSG(CELL_TIME_RESTORE_CNF) ctrlr_state(%d), on_going_proc(0x%x), tx_capa(%d)
Line 681: ##[NR_CHANNEL][RECOV] Need to recover CA path cfg: backup_num_cell(%d), target_recov_num_scell(%d)
Line 694:      ##[NR_CHANNEL][RECOV] ABNL condition to recover CA path config!
Line 731: ##[NR_CHANNEL] RECV_MSG(RELEASE_ALL_REQ) modem_state(%d), ctrlr_state(%d), on_going_proc(0x%x), serv_freq_info(%d, %d, %d)
Line 835: ##[NR_CHANNEL] RECV_MSG(ALL_STOP_REQ): ctrlr_state(%d), on_going_proc(0x%x), serv_freq_info(%d, %d, %d)
Line 895: ##[NR_CHANNEL] RECV_MSG(PBCH_DECODE_REQ): ctrlr_state(%d), on_going_proc(0x%x)
Line 912: ##[NR_CHANNEL] L2N PBCH decoding triggered after NR cell config
Line 932: ##[NR_CHANNEL] PBCH_DECODE_REQ triggered in connected state : SsbIndex(%d), Band(%d), num_of_bch_cfg_cell(%d)
Line 973: ##[NR_CHANNEL] PBCH_DECODE_REQ: agcGain[0](%d), agcGain[1](%d)
Line 1003:      ##[NR_CHANNEL] abnormal srcRat %d
Line 1035:      ##[NR_CHANNEL] %s during L1C_SUSPEND
Line 1042: ##[NR_CHANNEL] RECV_MSG(PHY_CONFIG_REQ) on_going_proc(0x%4x), cell_group_id(%d), sib1_config_4/dsds_resume_4(0x%2x), UeCapa(Band=%d, UL4/BwpSwitch4=0x%4x)
Line 1089: ##[NR_CHANNEL] C-Rnti(%d, %d)
Line 1098:    ##[NR_CHANNEL] XPHY Mode is running
Line 1115: [GAP_INFO] L1C_L1C_BCHCTRLR_PHY_CONFIG_REQ_Handler:: GapInfoRequired(%d) NumRequestTargetBandFilterNR(%d)
Line 1144:    ##[NR_CHANNEL] Actual SSB Band is changed (%d -> %d)
Line 1162:      ##[NR_CHANNEL] BWP: FR1 table_idx is not found in SpecificCarrier info.
Line 1184: ##[NR_CHANNEL] SetIsInitRach(false), AddModSCellBitmask(0x%x)
Line 1194:    ##[NR_CHANNEL] Pending SetDrBandInfo after PATH CONFIG CNF
Line 1220:    ##[NR_CHANNEL] SetDrBandInfo([0]%d, [1]%d, [2]%d, [3]%d, [4]%d)
Line 1221:    ##[NR_CHANNEL] SetDrBandInfo([5]%d, [6]%d, [7]%d, [8]%d, [9]%d)
Line 1227:      ##[NR_CHANNEL][WARNING] Invalid msgSrcId : %d 
Line 1251: ##[NR_CHANNEL] RECV_MSG(RESTORE_REQ) spcell_idx(%d), on_going_proc(0x%4x), type(%d), alloc_freq(%d)
Line 1271:      ##[NR_CHANNEL][WARNING] Invalid dsds_resume(%d)
Line 1275:      ##[NR_CHANNEL][WARNING] None of phy config info. exists
Line 1297: ##[NR_CHANNEL] RECV_MSG(TX_ONOFF_CNF): result(%d)
Line 1333:      ##[NR_CHANNEL] %s during L1C_SUSPEND
Line 1348:    ##[NR_CHANNEL] BWP_CHANGE_REQ msg defer
Line 1354: ##[NR_CHANNEL] RECV_MSG(BWP_CHANGE_REQ) scell_idx(%d), bwp_idx(0x%x, D4U4), ctrlr_state(%d), on_going_proc(0x%x), modem_state(%d), support_res(%d)
Line 1422:      ##[NR_CHANNEL] %s during L1C_SUSPEND
Line 1430: ##[NR_CHANNEL] RECV_MSG(BWP_ID_UPD_IND)#1 demod_cc(%d), scell_idx(%d), DL(status = %d, id = %d), UL(status = %d, id = %d)
Line 1433: ##[NR_CHANNEL] RECV_MSG(BWP_ID_UPD_IND)#2 dormant_bwp_change_flag(%d), num_of_scell_idx(%d), BwpSwitchEvt(%d)
Line 1443: ##[NR_CHANNEL] RECV_MSG(BWP_ID_UPD_IND)#3 idx(%d): demod_cc(%d), scell_idx(%d), scell_dormant_bwp_flag(%d)

Line 1451:      ##[NR_CHANNEL] Ignore BWP_ID_UPD_IND since PAUSE/SLEEP is ongoing(%d)
Line 1465:      ##[NR_CHANNEL][DORMANT] scell_index(%d) is not found in serv_cell_info
Line 1479: ##[NR_CHANNEL][DORMANT] Change to Dormant BWP ID for DL: act_bwp_idx(%d), dormant_bwp_idx(%d)
Line 1488: ##[NR_CHANNEL][DORMANT] Change to Dormant BWP ID for UL: act_bwp_idx(%d), dormant_bwp_idx(%d)
Line 1501: ##[NR_CHANNEL][DORMANT] Change to Within Active BWP ID for DL: act_bwp_idx(%d), dormant_bwp_idx(%d), within_active_bwp_idx(%d)
Line 1510: ##[NR_CHANNEL][DORMANT] Change to Within Active BWP ID for UL: act_bwp_idx(%d), dormant_bwp_idx(%d), within_active_bwp_idx(%d)
Line 1521: ##[NR_CHANNEL][DORMANT] Change to Outside Active BWP ID for DL: act_bwp_idx(%d), dormant_bwp_idx(%d), outside_active_bwp_idx(%d)
Line 1530: ##[NR_CHANNEL][DORMANT] Change to Outside Active BWP ID for UL: act_bwp_idx(%d), dormant_bwp_idx(%d), outside_active_bwp_idx(%d)
Line 1540:      ##[NR_CHANNEL][DORMANT] Invalid BwpSwitchingType(%d)
Line 1552: ##[NR_CHANNEL][DORMANT] No need to send SYS_PARAM_CHANGE_NR_CMD for scell_idx(%d)
Line 1563:      ##[NR_CHANNEL][DORMANT] Target Scell(%d) BWP ID is not changed.
Line 1568:    ##[NR_CHANNEL][DORMANT] All Target Scell BWP ID is not changed.
Line 1576:      ##[NR_CHANNEL] recv_scell_idx(%d) is not found in serv_cell_info
Line 1595:      ##[NR_CHANNEL] DCI BWP Switching Val Error
Line 1621: ##[NR_CHANNEL] DCI BWP Switching Val: new_dl_bwp(%d), new_ul_bwp(%d), copy_bwp_id(%d)
Line 1652:    ##[NR_CHANNEL] CPU/MIF CLK Control is already done in IPC_RECV HDLR
Line 1666:    ##[NR_CHANNEL] Skip DCI BWP Switching Delay Opt
Line 1679:      ##[NR_CHANNEL] Unexpected Scenario during BWP Switching via DCI(%d)
Line 1756:      ##[NR_CHANNEL] %s during L1C_SUSPEND
Line 1765:    ##[NR_CHANNEL] %s: Defer the msg. modem_state(%d) is HOLD/HOLDSTART
Line 1770:    ##[NR_CHANNEL] %s: During SLEEP/SLEEPSTART state(%d), SCELL_STATUS_IND message cannot send to BCH. Need to check from SCC
Line 1776:    ##[NR_CHANNEL] %s: Defer the msg. PHY CONFIG is running.
Line 1780: ##[NR_CHANNEL] RECV_MSG(SCELL_STATUS_IND) num_of_scell(%d), ctrlr_state(%d), on_going_proc(0x%x)
Line 1784: ##[NR_CHANNEL] L1C_L1C_BCHCTRLR_SCELL_STATUS_IND_Handler Discard Overheating Status
Line 1793: ##[NR_CHANNEL] ***** [%d] scell_idx(%d), act_deact(%d), ssb_idx(0x%x)
Line 1816:      ##[NR_CHANNEL] %s during L1C_SUSPEND
Line 1822: ##[NR_CHANNEL] RECV_MSG(TIMING_UPDATE_IND) SCellIdx(%d), SsbIdx(%d), TimingOffsetUpdate(%d), m_BchDb->ctrlr_state(%d), m_BchDb->on_going_proc(0x%x)
Line 1830:      ##[NR_CHANNEL] %s :: scell_index(%d) is not found in serv_cell_info
Line 1842: ##[NR_CHANNEL] %s :: scell_idx(%d), FrameBoundaryOffset(%d), ssb_scs(%d)
Line 1862:      ##[NR_CHANNEL] %s during L1C_SUSPEND
Line 1870:    ##[NR_CHANNEL] RECV_MSG(PATH_CONFIG_CNF) req_type(%d), num_of_cfg_cell(%d), num_of_rel_cell(%d), m_BchDb->on_going_proc(0x%x), CfgPurpose(%d)
Line 1911:      ##[NR_CHANNEL] Invalid req_type(%d)
Line 1929:    ##[NR_CHANNEL][RECOV] prev_num_of_act_scell(%d)
Line 1955:      ##[NR_CHANNEL] %s during L1C_SUSPEND
Line 1960: ##[NR_CHANNEL] RECV_MSG(PATH_INFO_MODI_IND) : m_BchDb->ctrlr_state(%d), m_BchDb->on_going_proc(0x%x), num_of_modi_cell(%d)
Line 1968:      ##[NR_CHANNEL] L1C_L1C_SCCCTRLR_PATH_INFO_MODI_IND_Handler :: bch_path_cfg_idx(%d) is INVALID_VAL
Line 1973: ##[NR_CHANNEL] L1C_L1C_SCCCTRLR_PATH_INFO_MODI_IND_Handler :: Update bch_path_cfg_info[%d](cell_idx : %d)
Line 1994: ##[NR_CHANNEL] RECV_MSG(OVERHEATING_IND) : Mode(%d), ThermalLevel(%d) Temperature(%d)
Line 2020: ##[NR_CHANNEL] RECV_MSG(LPM_INFO_CNF) : Cause(%d)
Line 2081: ##[NR_CHANNEL] RECV_MSG(LOW_PWR_MODE_IND) : Cause(%d)
Line 2103: [L1C] L1C_L1C_BCHCTRLR_RESTRICTION_CONFIG_REQ_Handler Level(%d)
Line 2104: ##[NR_CHANNEL] RECV_MSG(RESTRICTION_CONFIG_REQ): Level(%d)
Line 2109: ##[OHC] This is left as TBD
Line 2125: ##[OHC] Wrong RAT value(%d)
Line 2145: ##[OHC] Wrong L4_NumRedMimo value(%d)
Line 2153: ##[OHC] Unexpected message Level value(%d). This message should be processed in RRC
Line 2165: ##[OHC] Wrong Level value(%d)
Line 2175: [L1C] L1C_L1C_BCHCTRLR_RESTRICTION_RELEASE_REQ_Handler Level(%d)
Line 2176: ##[NR_CHANNEL] RECV_MSG(RESTRICTION_RELEASE_REQ): Level(%d)
Line 2181: ##[OHC] This is left as TBD
Line 2201: ##[OHC] Unexpected message Level value(%d)
Line 2207: ##[NR_BCH] Thermal Clock Control Disabled
Line 2209: ##[OHC] RELEASE_REQ message Level value(%d)
Line 2213: ##[OHC] Wrong Level value(%d)
Line 2227:      ##[NR_CHANNEL] %s during L1C_SUSPEND
Line 2233: ##[NR_CHANNEL] RECV_MSG(SERVING_CELL_RELEASE_REQ) ctrlr_state(%d), on_going_proc(0x%x), total_num_of_scell(%d), rel_cause(%d)
Line 2272:      ##[NR_CHANNEL] pServCellPhyCfgBackUp is NULL
Line 2273:      ##[NR_CHANNEL] pServCellPhyCfgBackUp->pMib is NULL
Line 2312: ##[NR_CHANNEL] RECV_MSG(MEAS_STOP_CNF): spcell_idx(%d), on_going_proc(0x%x), trigger_meas_stop(%d), MeasStopType(%d), domain_type(%d)
Line 2322:      ##[NR_CHANNEL] No need to request RSM Event (RSM_HIGH_PRIORITY/TRIGGER_RESUME)
Line 2341: ##[NR_CHANNEL] RECV_MSG(MEAS_STOP_CNF) : nw_tx_num(%d), event_state(%d)
Line 2354: ##[NR_CHANNEL][SKIP] RECV_MSG(TX_PAUSE_CNF): Type(%d), domain_type(%d)
Line 2398:      ##[NR_CHANNEL] %s during L1C_SUSPEND
Line 2410: ##[NR_CHANNEL] RECV(PHY_CHANGE_INFO_REQ): rnti(modi=%d, id=%d), ohc(modi=%d, en=%d)
Line 2419:    ##[NR_CHANNEL] No need to send PHY CHANGE INFO IPC
Line 2462: ##[NR_CHANNEL] ProcDrxConfirmInd(BCH):: DRX_CONFIRM_IND Ignored 0x%x
Line 2468: ##[NR_CHANNEL] ProcDrxConfirmInd(BCH):: type(%d) sleepTime(%d)ms sleepAvailRange(%d)us SibSleepEnableReg(%d)
Line 2500: ##[NR_CHANNEL] RECV_MSG(SCG_RESUME_REQ) : spcell_idx(%d), nw_tx_num(%d), domain_type(%d), event_state(%d)
Line 2527: ##[NR_CHANNEL] RECV_MSG(SCG_SUSPEND_REQ) : spcell_idx(%d), tx_num(%d), domain_type(%d), event_state(%d)
Line 2540: ##[NR_CHANNEL][SKIP] RECV_MSG(TX_PAUSE_CNF): Type(%d), domain_type(%d)
Line 2567: ##[NR_CHANNEL] RECV_MSG(TX_PAUSE_CNF): Type(%d), domain_type(%d)
Line 2598: ##[NR_CHANNEL] RECV_MSG(TX_RESUME_CNF): Type(%d), domain_type(%d)
Line 2615: ##[NR_CHANNEL] RECV_MSG(PHY_CHG_INFO_CNF)
Line 2624: ##[NR_CHANNEL] RECV_MSG(RNTI_CONTROL_IND): ue_rnti(%d)
Line 2646: ##[NR_CHANNEL] HAL->BCHCTRLR@%s:: Result(%d)
Line 2665: ##[NR_CHANNEL] HAL->BCHCTRLR@%s:: Result(%d)
