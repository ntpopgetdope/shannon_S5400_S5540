Line 154: ##[NR_SCC] send LTE_REDUCED_MODE : lte_reduced_core_id(%d)
Line 160: ##[NR_SCC] Send_L1TUNNEL_L1C_4G_NR_INFO_REQ : resume_type(%d), OtherStackRAT(%d), NrDrSimInfo(%d), IsDrAvailable(%d) --> SA_LTE DS state
Line 171: ##[NR_SCC] Send_L1TUNNEL_L1C_4G_NR_INFO_REQ(occupied) : type(%d), UserType(%d), cc(0x%x), pair_path(0x%x), output(0x%x), tdbuf(0x%x), fr1_band_num(%d)
Line 176: ##[NR_SCC] Send_L1TUNNEL_L1C_4G_NR_INFO_REQ : num_needed_cc(%d), remain_fdbuf(%d), remain_ecb(%d), remain_mcw(%d)
Line 179: ##[NR_SCC] check band_info[0] %d, band_info[1] %d, band_info[2] %d, band_info[3] %d, band_info[4] %d, band_info[5] %d
Line 209: ##[NR_SCC] NR_INFO_REQ: SleepState(%d)
Line 218: ##[NR_SCC] UserException, pMsgBody->cc_occupied(%d)
Line 237: ##[NR_SCC] => Send_L1TUNNEL_L1C_NR_4G_INFO_CNF : type(%d), UserType(%d), NrBandInfo(%d), cc_occupied(0x%x), modem_state(%d)
Line 245: ##[NR_SCC] Send_L1TUNNEL_L1C_4G_NR_PATH_MODI_REQ
Line 258: ##[NR_SCC] StackId[%d] CellGrp(%d) NumChanged(%d)
Line 263: ##[NR_SCC] PathModi[%d] MainMxrIdx(%d)
Line 327: ##[NR_SCC] Send_L1TUNNEL_L1C_NR_INFO_UPDATE_IND : resume_type(%d), mode(%d), search_ongoing(%d), measure_ongoing(%d), iratmeas_ongoing(%d), cc_occupied(0x%x), pair_path_occupied(0x%x)
Line 329: ##[NR_SCC] Send_L1TUNNEL_L1C_NR_INFO_UPDATE_IND : remain_fdbuf(%d), remain_ecb(%d), remain_mcw(%d)
Line 356: ##[NR_SCC] scell_cc_occupied(%d), NrScellBandCnt(%d), ScellBandInfo(%d, %d) : Band(%d)  rf path(%d)
Line 364: ##[NR_SCC] path index check needed!! Scell_Idx(%d) Pri_path_idx(%d) RF_PATH_IDX(%d) slo_Check(%d)
Line 384: ##[NR_SCC] L1C_NR_INFO_UPDATE_IND core0(%d, %d), core1(%d, %d), occupied: cc(0x%x), output(0x%x), tdbuf(0x%x)
Line 408: ##[NR_SCC][ERROR] L1TUNNEL_L1C_NR_BAND_LIST_UPDATE_IND : NR BAND NUM is 0
Line 422: ##[NR_SCC] %s : NR RF band list update in ENDC. NR FR1 Band num(%d) 
Line 430: ##[NR_SCC] ->> send L1C_L1C_SCCCTRLR_RESOURCE_CNF : UserType(%d) Type(%d) result(%d)
Line 450: ##[NR_SCC][ERROR] %s : Error for Unprocessable Type(%d)
Line 463: ##[NR_SCC] Send_L1C_L1C_SCCCTRLR_PATH_CONFIG_CNF : path_req_type (%s), config_num (%d), release_num (%d), scc_gap_is_needed (%d) result (%d) cause(%d)
Line 492: ##[NR_SCC] PcellDemodChanged : AddPcellNum(%d) total_num_of_cnf(%d)
Line 504: ##[NR_SCC] PcellDemodChanged(%d) : cell_info_idx(%d)
Line 556: ##[NR_SCC][WARNING] Send_L1C_L1C_SCCCTRLR_PATH_CONFIG_CNF : abnormal mxr path idx(%d)
Line 568: ##[NR_SCC] cell_info_idx(%d), pri_path_idx(%d), CellInfo_ul_bw(%d)
Line 637: ##[NR_SCC] NULL pointer!!!
Line 707: ##[NR_SCC][WARNING] MODULE_ERROR
Line 783: ##[NR_SCC] ->> send L1C_L1C_SCCCTRLR_PATH_CONFIG_CNF to BCHCTRLR
Line 789: ##[NR_SCC] ->> send L1C_L1C_SCCCTRLR_PATH_CONFIG_CNF to SRCHRCTRLR
Line 795: ##[NR_SCC] ->> send L1C_L1C_SCCCTRLR_PATH_CONFIG_CNF to MEASCTRLR
Line 801: ##[NR_SCC] ->> send L1C_L1C_SCCCTRLR_PATH_CONFIG_CNF to POSCTRLR
Line 807: ##[NR_SCC] ->> send L1C_L1C_SCCCTRLR_PATH_CONFIG_CNF to CTRLR(%d)
Line 813: ##[NR_SCC] SendPathConfigCnfMsg CNF error: req_type(%d)
Line 858: ##[NR_SCC] CfgPurpose(%d), path_req_type(%s)
Line 924: ##[NR_SCC][PATH_INFO_MODI] num_of_modi_cell(%d), cell_info(%d), req_scell_idx(%d), rx_path_result(%d), tx_path_result(%d)
Line 929: ##[NR_SCC][PATH_INFO_MODI] alloc_demod_cc(%d), alloc_bw(%d), alloc_freq(%d)
Line 937: ##[NR_SCC][PATH_INFO_MODI] cc(%d), div_cc(%d), rx_mode(%d), size(%d), rfd_rtg_idx(%d), rfd_rtg_idx_div(%d)
Line 943: ##[NR_SCC][PATH_INFO_MODI] td_buf_idx(%d), td_buf_idx_div(%d), rxf_mixer_path(%d), rxf_agc_path(%d)
Line 948: ##[NR_SCC][PATH_INFO_MODI] nul_path(%d), sul_path(%d), alloc_bw(%d)
Line 950: ##[NR_SCC] ->> send L1C_L1C_SCCCTRLR_PATH_CONFIG_CNF to BCHCTRLR
Line 980: ##[NR_SCC][TX] Send_L1C_L1C_SCCCTRLR_TX_MODE_CHANGE_CNF : tx_mode (%d)
Line 1019: ##[NR_SCC][WARNING] module_op_cnf pri_path_idx %d rf_path_idx %d path_info_bitmask %d
Line 1028: ##[NR_SCC][WARNING] module_type error %d
Line 1043: ##[NR_SCC] CONFIG_NORMAL GetCaConfigInfo : ca_config_info(%d) rx_path_result(%d) module_path_idx (%d) module_reg_status (%d)
Line 1051: ##[NR_SCC] CONFIG_NORMAL GetCaConfigInfo : ca_config_info(%d) rx_path_result(%d) module_path_idx (%d)
Line 1059: ##[NR_SCC] CONFIG_MAX_CC GetCaConfigInfo : ca_config_info(%d) rx_path_result(%d) module_path_idx (%d)
Line 1101: ##[NR_SCC] CONFIG_MAX_CC path_info_idx %d
Line 1109: ##[NR_SCC] GetCaConfigInfo (%d), rx_path_result(%d) module_path_idx (%d) PriPathInfo->rx_mode (%d)
Line 1135: ##[NR_SCC] Send_L1C_L1C_TSICCTRLR_TSIC_NR_RELEASE_IND stack_id(%d)
Line 1155: ##[NR_SCC] Send_L1C_L1C_TSICCTRLR_TSIC_NR_CONFIG_IND stack_id(%d) L1C_AS_STATE(%d)
Line 1199: ##[NR_SCC] TSIC PATH INFO : scell_idx(%d) Band(%d) DlFreq(%d) UlFreq(%d) Rf_Ul_Freq(%d) bw(%09d)
Line 1209: ##[NR_SCC] TSIC PRI PATH INFO : RF(0x%02X) MXR(0x%02X) RTG(0x%02X) PGC(0x%02X) TDBUF(0x%02X) OUTPUT(0x%02X) DEMOD(0x%02X) SSB(0x%02X)
Line 1220: ##[NR_SCC] TSIC DIV PATH INFO : RF(0x%02X) MXR(0x%02X) RTG(0x%02X) PGC(0x%02X) TDBUF(0x%02X) OUTPUT(0x%02X) DEMOD(0x%02X) SSB(0x%02X)
