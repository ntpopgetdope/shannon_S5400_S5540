Line 181: ##[NR_SCC][Domain#%d] L1C_L1C_SCCCTRLR_PATH_CONFIG_REQ_Handler : current_sim_status(%d), req_type(%s), num_of_cfg_cell(%d), num_of_rel_cell(%d) GetCfgCellCnt(%d)
Line 187: ##[NR_SCC] L1C_L1C_SCCCTRLR_PATH_CONFIG_REQ_Handler : Already in progress!!! config_num(%d)
Line 193: ##[NR_SCC][WARNING] rReceiveMsg.num_of_cell values has some problem!
Line 200: ##[NR_SCC][WARNING] rReceiveMsg.num_of_rel_cell(%d) has some problem!
Line 207: ##[NR_SCC][WARNING] cell_info_idx(%d) already released, Not possible
Line 225: ##[NR_SCC] %s
Line 278: ##[NR_SCC][Domain#%d] L1C_L1C_SCCCTRLR_RESOURCE_REQ_Handler : UserType = %s,  mode = %s, measmode = %d
Line 282: ##[NR_SCC] CrmResult(%d)
Line 289: ##[NR_SCC] Invalid RsmRscId(%d)
Line 320: ##[NR_SCC][Domain#%d] L1C_L1TUNNEL_4G_NR_PATH_MODI_CNF_Handler : req_cnf_mode(%s), UserType(%s)
Line 332: ##[NR_SCC] Error: Invalid Type(%d)
Line 366: ##[NR_SCC][Domain#%d] L1C_L1TUNNEL_4G_NR_INFO_CNF_Handler : req_cnf_mode(%s), UserType(%s) PowerOnFlag(%d), ModuleOpState(%d), CellInfoDb(ConfigNum:%d, L2nSrchMeasStatus:%d))
Line 374: ##[NR_SCC][WARNING] L1C_L1TUNNEL_4G_NR_INFO_CNF_Handler : result(%d), 4G_NR_INFO_REQ rejected by LTE!!
Line 383: ##[NR_SCC] cell_info_idx(%d) is deleted from DB
Line 420: ##[NR_SCC][WARNING] L1C_L1TUNNEL_4G_NR_INFO_CNF_Handler (path config is already aborted), result(%d), Error!!
Line 438: ##[NR_SCC][WARNING] L1C_L1TUNNEL_4G_NR_INFO_CNF_Handler : GetPowerOnFlag(%d), result(%d), Error!!
Line 468: ##[NR_SCC] LTE_REDUCED_MODE cnf 
Line 486: ##[NR_SCC] SA_LTE DR sub, 4N_NR_INFO_CNF received --> jump PathConfigRecovery
Line 500: ##[NR_SCC] checking pcell path conflic, bPcellConflictPri(%d), bPcellConflictDiv(%d)
Line 522: ##[NR_SCC] Backup Data : Old_div_path(%d), div_rf_path_idx(%d), div_pgc_path_idx(%d), div_rx_mode(0x%x)
Line 542: ##[NR_SCC] Restore Data : New_div_path(%d), div_rf_path_idx(%d), div_pgc_path_idx(%d), div_rx_mode(0x%x)
Line 593: ##[NR_SCC][WARNING] L1C_L1TUNNEL_4G_NR_INFO_CNF_Handler: config_num(0) Error!!!
Line 602: ##[NR_SCC] Not supported RF band combination, band(%d)
Line 616: ##[NR_SCC] L1C_L1TUNNEL_4G_NR_INFO_CNF_Handler: SetDcxoInfo -> XoOffset(%d), DmixerVal(%d), FreqCenter(%d), MaxXoRangePpm(%d), XoOffsetRes(%d), DmixerValRes(%d)
Line 623: ##[NR_SCC] L1C_L1TUNNEL_4G_NR_INFO_CNF_Handler SCC_PATH case %d , module_op_state %d
Line 627: ##[NR_SCC][WARNING] L1C_L1TUNNEL_4G_NR_INFO_CNF_Handler: config_num(0) Error!!!
Line 636: ##[NR_SCC] L1C_L1TUNNEL_4G_NR_INFO_CNF_Handler DR_PATH case
Line 669: ##[NR_SCC] CheckToRequestInfoTo4G : mode(%d), type(%d), band[0](%d), band[1](%d), resume_type(%d)
Line 671: ##[NR_SCC] CheckToRequestInfoTo4G : DrSimInfo(%d), OtherStackRAT(%d), IsOtherRatActive(%d), BplmnSrchState(%d), BplmnSrchRat(%d)
Line 675: ##[NR_SCC] Skip send 4G_NR_INFO_REQ, SA/LTE DR state, LTE suspend case !!
Line 681: ##[NR_SCC] NORMAL 4G_INFO_REQ
Line 686: ##[NR_SCC] LTE_REDUCED_MODE req
Line 692: ##[NR_SCC] CheckToRequestInfoTo4G : resume_type(%d), OtherStackRAT(%d), NrDrSimInfo(%d), IsDrAvailable(%d) --> SA_LTE DS state
Line 697: ##[NR_SCC] 4G_INFO_REQ else case
Line 766: ##[NR_SCC] RELEASE_RESERV req from LTE, clear reserved cell info
Line 816: ##[NR_SCC][TX] L1C_L1C_SCCCTRLR_TX_MODE_CHANGE_REQ_Handler : req_tx_mode(%d)
Line 838: ##[NR_SCC][Domain#%d] L1C_L1TUNNEL_4G_BAND_LIST_UPDATE_IND_Handler : LTE band num(%d), NR band num(%d)
Line 849: ##[NR_SCC] L1C_L1TUNNEL_4G_BAND_LIST_UPDATE_IND_Handler: compare LTE band[%d](%d) with NR band[%d](%d)
Line 877: ##[NR_SCC][Domain#%d] L1C_L1C_IRATCFGCTRLR_RELEASE_ALL_REQ_Handler, modem_state(%d)
Line 895: ##[NR_SCC][Domain#%d] L1C_L1C_IRATCFGCTRLR_RELEASE_ALL_REQ_Handler, clear DrToDs(%d -> 0)
Line 915: ##[NR_SCC][Domain#%d] L1C_L1C_IRATCFGCTRLR_ALL_STOP_REQ_Handler
Line 980: ##[NR_SCC][Domain#%d] L1C_L1C_SCCCTRLR_RESOURCE_RELEASE_IND_Handler : req_cnf_mode(%s), UserType(%s), UeState(%d)
Line 999: ##[NR_SCC] Send Resource Release request to CRM resourceType(%d) mode(%d)
Line 1006: ##[NR_SCC] Invalid ResourceInfo mode(%d)
Line 1017: ##[NR_SCC][Domain#%d] L1C_L1C_SCCCTRLR_AS_STATE_IND_Handler (AS_STATE_IND) state(%d -> %d)
Line 1024: ##[NR_SCC] check (AS_STATE_IND) state(%d), rxd_test_mode(%d)
Line 1032: ##[NR_SCC] Pcell req_status(0x%x), pending to change test mode
Line 1078: ##[NR_SCC] OverHeat state : ReqRxMode(0xF -> 0x2)
Line 1093: ##[NR_SCC] Skip RxModeChange(%d):: cc(%d) rx_mode(%X) N2X IRAT GAP state(%d)
Line 1103: ##[NR_SCC] Skip RxModeChange(%d):: cell_idx(%d) demod_cc(%d) rx_mode(%X), PowerOnFlag(%d), ConfigNum(%d), modem_state(%d)
Line 1107: ##[NR_SCC][Domain#%d] L1C_PHY_RXMODE_CHANGE_IND_Handler : cell_info(%d), rx_mode(0x%x)
Line 1133: ##[NR_SCC][Domain#%d] L1C_L1C_DRXCTRLR_SLEEP_REQ_Handler:: req_type(%d), DrxMeasOnOff(%d)
Line 1137: ##[NR_SCC] L1C_L1C_DRXCTRLR_SLEEP_REQ_Handler : Defer Msg !!! req_type(%d), DrxMeasOnOff(%d)
Line 1146: ##[NR_SCC] DecodeSrchMeasPbchMsg : BackUp_IsPhyDrPeriod(%d), BackUp_DrAvailable(%d), BackUp_RxMode(%d)
Line 1174: ##[NR_SCC] Sleep request process while srch/meas ongoing
Line 1182: ##[NR_SCC] L1C_L1C_DRXCTRLR_SLEEP_REQ_Handler :: Sleep before L1C_L1TUNNEL_4G_NR_INFO_CNF, ConfigNum(%d)
Line 1210: ##[NR_SCC] SA-LTE DR to DS changed, RF release needed to allow LTE to get new RF for NR search
Line 1217: ##[NR_SCC] SA-SA DR to DS changed, RF release needed
Line 1238: ##[NR_SCC] L1C_L1C_DRXCTRLR_SLEEP_REQ_Handler : with rcvd info cell_idx(%d) rx_mode(%d -> %d)
Line 1273: ##[NR_SCC] L1C_L1C_DRXCTRLR_SLEEP_REQ_Handler : OtherStackRAT(%d), NrDrSimInfo(%d), IsDrAvailable(%d) --> Send UPDATE_IND to LTE (DS change)
Line 1307: ##[NR_SCC][Domain#%d] L1C_L1C_DRXCTRLR_RESTORE_REQ_Handler : type(%d), sim_status(%d), cell_type(%d)
Line 1309: ##[NR_SCC][Domain#%d] L1C_L1C_DRXCTRLR_RESTORE_REQ_Handler : type(%d), sim_status(%d), cell_type(%d)
Line 1324: ##[NR_SCC] Init SCC DB and Skip RESTORE procedure. type(%d)
Line 1345: ##[NR_SCC][DEBUG] L1C_L1C_DRXCTRLR_RESTORE_REQ_Handler : DrToDsChange(%d), DrDsRxMode(%d) triggerred, Recover Rf Path
Line 1357: ##[NR_SCC][DEBUG] L1C_L1C_DRXCTRLR_RESTORE_REQ_Handler : (BEFORE) Pri_RfPath(%d), OriginalRfPath(%d)
Line 1361: ##[NR_SCC] UpdateDrMimoMode : NrPathAlloc for div_path
Line 1374: ##[NR_SCC][DEBUG] L1C_L1C_DRXCTRLR_RESTORE_REQ_Handler : (AFTER) Pri_RfPath(%d), Div_RfPath(%d), OriginalRfPath(%d)
Line 1384: ##[NR_SCC] L1C_L1C_DRXCTRLR_RESTORE_REQ_Handler : DrdsRxMode(%s)
Line 1396: ##[NR_SCC] L1C_L1C_DRXCTRLR_RESTORE_REQ_Handler : DrRxModeChange[Idx %d] (before : 0x%x -> after : 0x%x)
Line 1408: ##[NR_SCC] L1C_L1C_DRXCTRLR_RESTORE_REQ_Handler : cell_info_idx(%d), div_path_idx(%d), DrdsRxMode(%s) --> dealloc div path
Line 1453: ##[NR_SCC] UpdateDvfs
Line 1462: ##[NR_SCC] PathConfigRecovery : SA_LTE DR sub state, Send 4G_NR_INFO_REQ
Line 1494: ##[NR_SCC] checking pcell path conflic, bPcellConflictPri(%d), bPcellConflictDiv(%d)
Line 1520: ##[NR_SCC] Backup Data : Old_div_path(%d), div_rf_path_idx(%d), div_pgc_path_idx(%d), div_rx_mode(0x%x)
Line 1544: ##[NR_SCC] Restore Data : New_div_path(%d), div_rf_path_idx(%d), div_pgc_path_idx(%d), div_rx_mode(0x%x)
Line 1582: ##[NR_SCC] L1C_L1C_DRXCTRLR_RESTORE_REQ_Handler : bIsChangeDsToDr(%d) --> Send UPDATE_IND to LTE (DR change)
Line 1615: ##[NR_SCC][Domain#%d] L1C_L1C_DRXCTRLR_DRX_MEASMODE_REQ_Handler : DrxMeasMode(%d) req_status(0x%x)
Line 1631: ##[NR_SCC] Delay measmode path[%d], slo[%d], rx_mode[%d]
Line 1638: ##[NR_SCC] Delay measmode waiting 4G_NR_INFO_CNF
Line 1666: ##[NR_SCC] skip PriPath Resume : Already turned on - PathInfoBitmask(%x)
Line 1687: ##[NR_SCC] Scell pri_path_idx(%d) RF_idx(%d) rfOnOffStatus(%d)
Line 1695: ##[NR_SCC] Scell div_path_idx(%d) RF_idx(%d) rfOnOffStatus(%d)
Line 1713: ##[NR_SCC] NsaPccPathAlloc
Line 1723: ##[NR_SCC][WARNING] Please check path index : pri_path_idx(%d), module_op_state(%d)
Line 1738: ##[NR_SCC] L1 Dmixer setting case dlFreq(%d), refFreqOffset(%d), dmxrFreqOffset(%d), rxf_mode (%d), rxf_mode_bitmask (0x%x)
Line 1763: ##[NR_SCC] NsaPccPathConfig
Line 1797: ##[NR_SCC] PATH_COPY : cell_info_idx(%d), pri_path_idx(%d), pcell_ssb_path_idx(%d)
Line 1808: ##[NR_SCC] RXF_L2N_MEASURE case
Line 1820: ##[NR_SCC] : path_alloc_serv, RX_MIMO_2RX_23, firstly config 4rx
Line 1848: ##[NR_SCC] send RXF_CONFIG_DIV_UPDATE cmd for 4RX path Hal db update.
Line 1864: ##[NR_SCC] NsaSccPathAlloc
Line 1895: ##[NR_SCC] cell_info_idx(%d), req_status(0x%x) --> InterFreq case
Line 1935: ##[NR_SCC] NSA - cell(%d) SetMeasPathState
Line 1963: ##[NR_SCC] NsaSccPathConfig
Line 1989: ##[NR_SCC][WARNING] NOT allocated pri_path_idx(%d), req_status(0x%x)
Line 2002: ##[NR_SCC] cell_info_idx(%d), req_status(0x%x), pri_path_idx(%d), dmxr_freq_slo(%d) --> condition(%d)
Line 2080: ##[NR_SCC] SortServPath, resume_type %d
Line 2092: ##[NR_SCC] cfg_cell_idx[%d], dl_bw %d, scs %d, cell_buffer_sum %d
Line 2115: ##[NR_SCC] scell_cfg_change
Line 2126: ##[NR_SCC] DrToDsChange : DomainType(%d) NrNrMode(%d) ModemState(%d)
Line 2135: ##[NR_SCC] DrToDsChange : SA-LTE DR to DS changed, RF release needed
Line 2141: ##[NR_SCC] DrToDsChange : modem_state(%d) --> Send UPDATE_IND to LTE (DS change)
Line 2156: ##[NR_SCC] DrToDsChange : SA-SA DR to DS changed, RF release needed
Line 2166: ##[NR_SCC] PathIdx(%d), band(%d), PrevRfPathIdx(%d)
Line 2188: ##[NR_SCC] ClearDrRfInfo : DomainType(%d) 
Line 2205: ##[NR_SCC] CheckDrRxMode : SaSaDrRxMode(%d) bDrAvailable(%d)
Line 2212: ##[NR_SCC] CheckDrRxMode : DrMimoModeStatus(%d), pcell.req_status(0x%x), gap_status(%d) --> result(%d)
Line 2216: ##[NR_SCC] CheckDrRxMode : GAP_CONFIG_CMD is running, skip.
Line 2243: ##[NR_SCC] CheckDrRxMode : band(%d) --> does not alloc 4rx path!!
Line 2249: ##[NR_SCC] CheckDrRxMode : DR_TYPE_RX01_TO_NORMAL case, Alloc 4rx path
Line 2264: ##[NR_SCC] CheckDrRxMode : DR_TYPE_NORMAL_TO_RX01 case, Dealloc 4rx path
Line 2294: ##[NR_SCC] DrReportStart : DomainType(%d) SaSaDrRxMode(%d) bIsPhyDrPeriod(%d) NrNrMode(%d) IsDrAvailable(%d)
Line 2301: ##[NR_SCC] DrReportStart : Backup DrReport, bIsPhyDrPeriod(%d), bDrAvailable(%d), DrRxMode(%d)
Line 2311: ##[NR_SCC] DrReportStart : DrReport Done, Clear all backup data
Line 2349: ##[NR_SCC] CheckDrMimoModeStatus : CurRxModeType(%d) ReqRxModeType(%d) --> Status(%d)
Line 2359: ##[NR_SCC] UpdateDrMimoMode : DrMimoModeStatus(%d)
Line 2365: ##[NR_SCC] UpdateDrMimoMode : No div_path_idx, reconfig 4rx path
Line 2373: ##[NR_SCC] UpdateDrMimoMode : DR_TYPE_NORMAL_TO_MIMO - 1. All of RF/RXF off
Line 2385: ##[NR_SCC] UpdateDrMimoMode : DR_TYPE_NORMAL_TO_MIMO - 2. RF/RXF on with swapping
Line 2387: ##[NR_SCC] UpdateDrMimoMode : (BEFORE) Pri_RfPath(%d), Div_RfPath(%d), OriginalRfPath(%d)
Line 2396: ##[NR_SCC] UpdateDrMimoMode : (AFTER) Pri_RfPath(%d), OriginalRfPath(%d)
Line 2401: ##[NR_SCC] UpdateDrMimoMode : DR_TYPE_NORMAL_TO_MIMO - 3. Only 4rx RF & main RXF path is on
Line 2417: ##[NR_SCC] UpdateDrMimoMode : DR_TYPE_MIMO_TO_NORMAL - 1. All of RF/RXF off
Line 2425: ##[NR_SCC] UpdateDrMimoMode : DR_TYPE_MIMO_TO_NORMAL - 2. RF/RXF on with swapping
Line 2427: ##[NR_SCC] UpdateDrMimoMode : (BEFORE) Pri_RfPath(%d), OriginalRfPath(%d)
Line 2431: ##[NR_SCC] UpdateDrMimoMode : NrPathAlloc for div_path
Line 2446: ##[NR_SCC] UpdateDrMimoMode : (AFTER) Pri_RfPath(%d), Div_RfPath(%d), OriginalRfPath(%d)
Line 2452: ##[NR_SCC] UpdateDrMimoMode : DR_TYPE_MIMO_TO_NORMAL - 3. RF/RXF path is on
Line 2470: ##[NR_SCC][TEST] UpdateDrMimoMode : New_DrMimoModeStatus(%d), backup_DrMimoModeStatus(%d)
Line 2488: ##[NR_SCC] UpdateDvfs
Line 2504: ##[NR_SCC] FR2 different band(%d, %d), gap case return true
Line 2509: ##[NR_SCC] FR2 different band(%d, %d) return false
Line 2525: ##[NR_SCC] ProcessPathConfigReq : current_sim_status(%d), req_type(%s), num_of_cfg_cell(%d), num_of_rel_cell(%d), CfgPurpose(%d)
Line 2566: ##[NR_SCC][WARNING] ProcessPathConfigReq FAIL : path_req_type(%s) CfgPurpose(%d)
Line 2603: ##[NR_SCC][WARNING] ProcessPathConfigReq FAIL : path_req_type(%s) CfgPurpose(%d)
Line 2629: ##[NR_SCC][WARNING] ProcessPathConfigReq FAIL : path_req_type(%s) CfgPurpose(%d)
Line 2635: ##[NR_SCC][WARNING] ProcessPathConfigReq : invalid path_req_type(%s)
Line 2658: ##[NR_SCC] PathIdx(%d) rx_mode(%d) Pcell RF keep on
Line 2663: ##[NR_SCC] CheckScellMeasOngoing(%d)
Line 2693: ##[NR_SCC] already release :: num_of_rel_cell(%d), cell_info_idx(%d), req_status(%d)
Line 2702: ##[NR_SCC] FR2 SCG was configured. FR2 release blocked
Line 2713: ##[NR_SCC] Invalid pri_path_idx, return
Line 2722: ##[NR_SCC] target_beam_idx (0x%x), num_of_rel_cell(%d), cell_info(%d), path_info(%d), req_status(%d)
Line 2739: ##[NR_SCC] cell_info_idx(%d), req_status(0x%x), RF pause during DRX meas mode
Line 2743: ##[NR_SCC] cell_info_idx(%d), req_status(0x%x), Do nothing
Line 2759: ##[NR_SCC] cell_info_idx(%d), req_status(0x%x), Rf Path off is needed
Line 2767: ##[NR_SCC] cell_info_idx(%d), req_status(0x%x), PCELL Rf Path off is needed
Line 2775: DRX_MEASMODE_ON , Pcell is already off
Line 2790: ##[NR_SCC] cell_info_idx(%d) m_IsSCGConfigured(%d), scell ca path srch_meas release case, skip path release if SCG not configured
Line 2805: ##[NR_SCC] cell_info_idx(%d), req_status(0x%x), Release cell_info
Line 2811: ##[NR_SCC] Pending test rx mode is 'true'
Line 2818: ##[NR_SCC] num of reserved cell over 6, dealloc all of reserved cell
Line 2846: ##[NR_SCC] target_beam_idx(0x%x), l2n_srchmeas(%d)
Line 2855: ##[NR_SCC] FR2 SCG was already configured. FR2 search/meas on MCG blocked by sending path failure
Line 2873: ##[NR_SCC] Prev FR(%d)->Cur FR(%d) case, l2n_srchmeas(%d), req_status(0x%x)
Line 2885: ##[NR_SCC] Pcell condition, cell_info(%d), req_status(0x%x), target_band(%d), target_freq(%d), target_bw(%dMhz)
Line 2891: ##[NR_SCC] Not supported RF band combination, band(%d)
Line 2932: ##[NR_SCC] L1 Dmixer setting case rxf_mode %d, rxf_mode_bitmask 0x%x
Line 2997: ##[NR_SCC] gap case
Line 3002: ##[NR_SCC] target_cover cell_info_idx (%d), cell_info_freq(%d), cell_info_bw(%d Mhz), target_freq(%d), target_bw(%d Mhz)
Line 3029: ##[NR_SCC] L1 Dmixer setting case rxf_mode %d, rxf_mode_bitmask 0x%x
Line 3035: ##[NR_SCC] ProcessTargetCover: gap PATH_ALLOC_PBCH
Line 3060: ##[NR_SCC] SendMsg to LTE for path allocation
Line 3079: ##[NR_SCC] DecodeSrchMeasPbchMsg : scc_path_cfg_req -> path_req_type : (%s), num_of_cfg_cell(%d), num_of_rel_cell(%d), gap_status(%d)
Line 3082: ##[NR_SCC] ReceiveDcxoMsg : dcxo_status(%d), XoOffset(%d), DmixerVal(%d), FreqCenter(%d), MaxXoRangePpm(%d), XoOffsetRes(%d), DmixerValRes(%d)
Line 3102: ##[NR_SCC][WARNING] L1C_L1C_DRXCTRLR_SLEEP_REQ is pended
Line 3121: ##[NR_SCC] DecodeSrchMeasPbchMsg : IsRelCell(%d), IsBackUpFlag(%d) --> result(%d)
Line 3126: ##[NR_SCC] DecodeSrchMeasPbchMsg : BackUp_IsPhyDrPeriod(%d), BackUp_DrAvailable(%d), BackUp_RxMode(%d)
Line 3138: ##[NR_SCC] ModuleControl meas_4rx %d
Line 3145: ##[NR_SCC] div_path_idx %d
Line 3149: ##[NR_SCC] fr1 module monitor fail, div path invalid
Line 3156: ##[NR_SCC] fr1 module monitor, mxr(%d), rx_mode(%d)
Line 3166: ##[NR_SCC] DecodeIratMeasMsg : scc_path_cfg_req -> path_req_type : (%s), num_of_cfg_cell(%d), num_of_rel_cell(%d)
Line 3182: ##[NR_SCC] req_status(0x%x), RF pause during DRX meas mode
Line 3190: ##[NR_SCC] req_status(0x%x), Do nothing
Line 3195: ##[NR_SCC] DecodeIratMeasMsg : IsBackUpFlag(%d)
Line 3200: ##[NR_SCC] DecodeIratMeasMsg : BackUp_IsPhyDrPeriod(%d), BackUp_DrAvailable(%d), BackUp_RxMode(%d)
Line 3213: ##[NR_SCC] GAP_CONFIG case, scc_gap_is_needed(%d)
Line 3219: ##[NR_SCC] DRX MEAS mode %d(1:on/0:off), keep RF on
Line 3249: ##[NR_SCC] ProcOverHeatControl CfgPurpose(%d) NR_AP_EVENT_OH(%d)
Line 3295: ##[NR_SCC] No change 4RX_CONFIG, due to DrRxMode(%d)
Line 3324: ##[NR_SCC] DecodePathModifyReqMsg scc_path_cfg_req -> path_req_type(%s), num_of_cfg_cell(%u), num_of_rel_cell(%u)
Line 3327: ##[NR_SCC] ReceiveDcxoMsg : dcxo_status(%d), XoOffset(%d), DmixerVal(%d), FreqCenter(%d), MaxXoRangePpm(%d), XoOffsetRes(%d), DmixerValRes(%d)
Line 3345: ##[NR_SCC][PATH MODIFY][WARNING] Invalid DL BW params(%d) : Path config fail
Line 3352: ##[NR_SCC] Not supported, Path already cleared
Line 3362: ##[NR_SCC] max_nw_dl_layer changed 2->4, 4rx path alloc
Line 3371: ##[NR_SCC] DecodePathModifyReqMsg : measmode(%d), req_status(0x%x)
Line 3404: ##[NR_SCC] wrong scell_idx(%d), cell_info_idx(%d) !!
Line 3471: ##[NR_SCC] ModifyCell : cell_type(%d)
Line 3482: ##[NR_SCC] ModifyCell: path_dir(%d) DL_Changed(%d) UL_Changed(%d)
Line 3492: ##[NR_SCC] ModifyPcell: PATH_MODIFY / PATH_DIR_TX but No UL value changed
Line 3522: ##[NR_SCC] PATH_DIR_TX update done with modify_status(%s)
Line 3534: ##[NR_SCC] %s condition, cell_info(%d), req_status(0x%x), target_band(%d), target_freq(%d), target_bw(%dMhz)
Line 3560: ##[NR_SCC] PATH_DIR_RX_TX update done with modify_status(%s)
Line 3564: ##[NR_SCC] ModifyPcell: Only dmrs changed, update MRA then return
Line 3571: ##[NR_SCC] ModifyPcell: Check Bch parameter! PATH_MODIFY but No DL value changed
Line 3612: ##[NR_SCC] forced 2RX
Line 3617: ##[NR_SCC] forced 4RX
Line 3628: ##[NR_SCC] wrong dmrs_config %d
Line 3660: ##[NR_SCC] Freq change: dmxr_freq_afc(%d), received freq(%d), pri freq(%d), div_path(%d))
Line 3689: ##[NR_SCC] cell_req_status(0x%x)
Line 3696: ##[NR_SCC] L1 Dmixer setting case rxf_mode %d, rxf_mode_bitmask 0x%x
Line 3751: ##[NR_SCC] is_diff_band(%d) need_config_cc(%d)
Line 3784: ##[NR_SCC] send RXF_CONFIG_DIV_UPDATE cmd for 4RX path Hal db update.
Line 3795: ##[NR_SCC] NrTxPathModifyPcell okay, send Cmd
Line 3805: ##[NR_SCC] CopyCell
Line 3815: ##[NR_SCC] forced 2RX
Line 3820: ##[NR_SCC] forced 4RX
Line 3831: ##[NR_SCC] wrong dmrs_config %d
Line 3849: ##[NR_SCC] ActScell : num_of_cfg_cell(%d)
Line 3863: ##[NR_SCC] module_exception_case : pri_path_idx (%d) module path(%d)
Line 3870: ##[NR_SCC] Ongoing Meas/Srch stop to ACT Scell
Line 3889: ##[NR_SCC] forced 2RX
Line 3894: ##[NR_SCC] forced 4RX
Line 3937: ##[NR_SCC] ACT Scell, cell_info(%d), path_info(%d)
Line 3952: ##[NR_SCC] DeactScell : num_of_rel_cell(%d)
Line 3960: ##[NR_SCC] Ongoing Meas/Srch stop to DEACT Scell
Line 3970: ##[NR_SCC] DeactScell : rel_cell_idx(%d), cell_info(%d), path_info(%d), cell_info.scell_idx(%d), rReceiveMsg.scell_idx(%d)
Line 4040: ##[NR_SCC][ERROR] ReleaseServPath NumCellTxRel(%d) >= MAX_CELL_INFO_IDX_NUM
Line 4064: ##[NR_SCC] release cell_info(%d), path_info(%d)
Line 4083: ##[NR_SCC] release cell_info(%d), pri_path_info(%d), div_path_info(%d)
Line 4108: ##[NR_SCC] DecodePathAllocServMsg : num_of_rel_cell(%d), num_of_cfg_cell(%d) IsBplmn(%d)
Line 4111: ##[NR_SCC] ReceiveDcxoMsg : dcxo_status(%d), XoOffset(%d), DmixerVal(%d), FreqCenter(%d), MaxXoRangePpm(%d), XoOffsetRes(%d), DmixerValRes(%d)
Line 4132: ##[NR_SCC] DecodePathAllocServMsg : measmode(%d)
Line 4144: ##[NR_SCC] release case, num_of_rel_cell(%d)
Line 4156: ##[NR_SCC][PATH MODIFY][WARNING] Invalid DL BW params(%d) : Path config fail
Line 4168: ##[NR_SCC] config case, num_of_cfg_cell(%d), scell_idx(%d) %s case
Line 4213: ##[NR_SCC] ERROR : Invalid max_nw_dl_layer received(%d)
Line 4230: ##[NR_SCC] pri_path_idx(%d), rxf_mode(%d), received agc_gain(%d, %d)
Line 4243: ##[NR_SCC]Find reserved cell, cell_info_idx(%d)
Line 4247: ##[NR_SCC][WARNING] Please check cell_info_idx(%d)
Line 4265: ##[NR_SCC] forced 2RX
Line 4270: ##[NR_SCC] forced 4RX
Line 4290: ##[NR_SCC] [%d]wrong dmrs_config %d
Line 4320: ##[NR_SCC] PATH_ALLOC_SERV need_pcell_pathinfo_allocation
Line 4325: ##[NR_SCC] PATH_ALLOC_SERV need_scell_pathinfo_allocation, cell_info_idx(%d)
Line 4332: ##[NR_SCC] cell_info(%d), req_status(%d), target_arfcn(%d), target_freq(%d), target_band(%d), target_bw_idx(%d), scell_idx(%d)
Line 4346: ##[NR_SCC] SendMsg to LTE for path allocation, cell_info(%d)
Line 4360: ##[NR_SCC] SendMsg to LTE for path allocation, mode(%d), cell_info(%d)
Line 4380: ##[NR_SCC] Pcell condition, cell_info(%d), req_status(0x%x), target_band(%d), target_freq(%d), target_bw(%d Mhz)
Line 4421: ##[NR_SCC] Pcell/Scell change condition, cell_info(%d), cell_dl_freq(%d), cell_dl_bw(%d Mhz), rReceiveMsg_cell_type[0] (%d)
Line 4429: ##[NR_SCC] L1 Dmixer setting case rxf_mode %d, rxf_mode_bitmask 0x%x
Line 4440: ##[NR_SCC] L1 Dmixer setting case rxf_mode %d, rxf_mode_bitmask 0x%x
Line 4483: ##[NR_SCC] module_exception_case : MODULE_CONFIG_MONITOR path full (%d)
Line 4503: ##[NR_SCC] Module monitor request : meas_4rx(%d), ModuleOpState(%d), selected_module(%d), module_op_type(%d)
Line 4515: ##[NR_SCC] FR1 module switch case, before =======> pcell_path_idx(%d), module_swap result(%d), rx_mode(%d), rf(0x%x, 0x%x, 0x%x)
Line 4525: ##[NR_SCC] FR1 module switch case, after =======> pcell_path_idx(%d), module_swap result(%d), rx_mode(%d), rf(0x%x, 0x%x, 0x%x)
Line 4541: ##[NR_SCC] FR1 module monitor finish case , pri_path_idx(%d), rx_mode(%d)
Line 4544: ##[NR_SCC] forced 2rx
Line 4550: ##[NR_SCC] normal case.
Line 4557: MODULE_MONITOR_END : already end, return
Line 4574: ##[NR_SCC] change module %d ===> %d GetTargetBeamIdx 0x%x 
Line 4588: ##[NR_SCC] rxf_mode(%d)
Line 4594: ##[NR_SCC] rxf_mode(%d)
Line 4638: ##[NR_SCC] MODULE_MONITOR, DRX_MEASMODE_ON case, change status to NEED_TO_MODIFY_RESUME
Line 4666: ##[NR_SCC] cell_info(%d), req_status(0x%x), RF on is not needed
Line 4672: ##[NR_SCC] cell_info(%d), req_status(0x%x), RF on is needed, check pcell is on(%d)
Line 4676: ##[NR_SCC] CASE : Scell Srch/Meas in measmode. Pcell Resume First before Scell resume
Line 4686: ##[NR_SCC] Pcell_band(%d), target_cell_band(%d), set RXF_L1_RF_LO_TRACKING_MODE_BITMASK
Line 4747: ##[NR_SCC] Configued scell srch/meas/pbch - cell(%d) req_status(%d) SetMeasPathState
Line 4752: ##[NR_SCC] target_cover == YES case : cell_info_idx(%d), rReceiveMsg.path_req_type(%d), CellInfo->req_status(0x%x), path_info(%d), dmxr_freq_afc(%d)
Line 4768: ##[NR_SCC] ProcessNotTargetCover: gap PATH_ALLOC_PBCH
Line 4791: ##[NR_SCC] ProcessNotTargetCover: QueryMeasType(%d), GetStackOperationMode(%d), Check_Scell(%d), req_status(%d), path_req_type(%d), FedvStatus(%d), DrChannelState(%d)
Line 4812: ##[NR_SCC] Scell Meas is impossible, request RSM GAP_CONFIG
Line 4819: ##[NR_SCC] MeasType response is (%d)
Line 4835: ##[NR_SCC] Query Response(%d) is abnormal
Line 4859: ##[NR_SCC] cell_info_idx(%d), req_status(CELL_ALLOC_NONE)
Line 4867: ##[NR_SCC][WARNING] Please check cell_info_idx(%d)
Line 4877: ##[NR_SCC] Pcell condition
Line 4911: ##[NR_SCC] Scell condition : pri_path_idx(%d), Already allocated path_idx IsSameBand(%d), ResereCellPathCover(%d)
Line 4929: ##[NR_SCC] Scell condition : gap_status(%d)
Line 4955: ##[NR_SCC] check scell search meas (%d, %d, %d, %d) skip => %d 
Line 4960: ##[NR_SCC] skip scell search meas path allocation
Line 4968: ##[NR_SCC] CASE : Scell Srch/Meas in measmode. Pcell Resume First before Scell resume
Line 4977: ##[NR_SCC] Scell Reconfiguration, cell_info_idx(%d), pri_path_idx(%d)
Line 4980: ##[NR_SCC] Not supported RF band combination, band(%d)
Line 5019: ##[NR_SCC] target_cover == NO case : cell_info(%d) allocated, req_status(0x%x), numerology(%d), arfcn(%d), freq(%d), band(%d), dl_bw(%d)
Line 5030: ##[NR_SCC] GAP_CONFIG case, scc_gap_is_needed(%d)
Line 5039: ##[NR_SCC][Domain#%d] SccGapConfig : No pcell info(req_status : 0x%x, pri_path_idx : %d, band : %d, dl_bw : %d), skip SccGapConfig
Line 5047: ##[NR_SCC] DRX MEAS mode %d(1:on/0:off), RF on, req_status(%d), path_req_type(%d)
Line 5088: ##[NR_SCC][Domain#%d] NrPathConfig : mode(%d), path_req_type(%d) 
Line 5101: ##[NR_SCC][Domain#%d] NrPathConfig : cnf_mode(%d), result(%d) 
Line 5115: ##[NR_SCC][WARNING] SaPccPathConfig : config_num(0)!!!
Line 5118: ##[NR_SCC] SaPccPathConfig PCC_PATH case
Line 5126: ##[NR_SCC][Domain#%d] SaPccPathConfig : NRDC Pcell config case, MCG_DomainTye(%d)
Line 5130: ##[NR_SCC][Domain#%d] SaPccPathConfig : MCG_DomainTye(%d), McgFreqOffset(%d)
Line 5136: ##[NR_SCC][Domain#%d] SaPccPathConfig : SetDcxoInfo -> XoOffset(%d), DmixerVal(%d), FreqCenter(%d), MaxXoRangePpm(%d), XoOffsetRes(%d), DmixerValRes(%d)
Line 5157: ##[NR_SCC] dlFreq(%d), refFreqOffset(%d), dmxrFreqOffset(%d)
Line 5167: ##[NR_SCC] L1 Dmixer setting case rxf_mode %d, rxf_mode_bitmask 0x%x
Line 5170: ##[NR_SCC][Domain#%d] SaPccPathConfig : dlFreq(%d), refFreqOffset(%d), dmxrFreqOffset(%d)
Line 5208: ##[NR_SCC] PATH_COPY : cell_info_idx(%d), pri_path_idx(%d), pcell_ssb_path_idx(%d), pcell_slo(%d)
Line 5233: ##[NR_SCC] send RXF_CONFIG_DIV_UPDATE cmd for 4RX path hal db update.
Line 5240: ##[NR_SCC] : path_alloc_serv, RX_MIMO_2RX_23, RF Swap is needed
Line 5245: ##[NR_SCC] : path_alloc_serv, RX_MIMO_2RX_01, 4rx path release is needed
Line 5267: ##[NR_SCC] SaSccPathConfig SCC_PATH case
Line 5271: ##[NR_SCC][WARNING] SaSccPathConfig : config_num(0)!!!
Line 5304: ##[NR_SCC] cell_info_idx(%d), req_status(0x%x) --> InterFreq case
Line 5335: ##[NR_SCC][WARNING] SaSccPathConfig : FailCount(%d)
Line 5344: ##[NR_SCC] SA - cell(%d) SetMeasPathState
Line 5377: ##[NR_SCC][WARNING] NOT allocated pri_path_idx(%d), req_status(0x%x)
Line 5388: ##[NR_SCC] cell_info_idx(%d), req_status(0x%x), pri_path_idx(%d), dmxr_freq_slo(%d) --> condition(%d)
Line 5405: ##[NR_SCC][WARNING] SaSccPathConfig : FailCount(%d)
Line 5438: ##[NR_SCC] InterFreqSrchMeasPbch case - #1. TDP enable with restoring DCR/IQC/AGC value, pcell_mxr(%d)
Line 5445: ##[NR_SCC] InterFreqSrchMeasPbch case - #1. Backup DCR/IQC/AGC value & TDP disable, pcell_mxr(%d)
Line 5463: ##[NR_SCC] ProcessRFSupportCheck : SLO available, cell_info_idx/band(%d/%d), band_list_idx/band(%d/%d)
Line 5472: ##[NR_SCC][TEST] Not supported RF band combination, Delete reserved cell first
Line 5481: ##[NR_SCC] Not supported RF band combination, band(%d)
Line 5487: ##[NR_SCC] Not supported RF band combination, band(%d)
Line 5521: ##[NR_SCC] ReconfigBandList : sim_status/cellType(0x%x), num_band(%d), band_list(%d, %d, %d, %d, %d)
Line 5553: ##[NR_SCC] ReconfigBandList : Abnormal pri_path_idx(%d)
Line 5567: ##[NR_SCC] ReconfigBandList : num_of_band(%d), cell_info_idx(%d), pri_path_idx(%d), band_cnt(%d), rf_path(%d)
Line 5578: ##[NR_SCC] ReconfigBandList(NeedToAddDivPath) : cell_info_idx(%d), band(%d), rf_path(%d)
Line 5586: ##[NR_SCC] Reset OriginalRfPath(%d -> INVALID_VAL)
Line 5592: ##[NR_SCC] skip path recovery, cell_info_idx[%d], req_status[%d], path_info_idx[%d]
Line 5594: ##[NR_SCC] ReconfigBandList(4rx realloc) : cell_info_idx(%d), band(%d), rf_path(%d)
Line 5638: ##[NR_SCC] ReconfigBandList, cell_info_idx(%d) pri_path_idx(%d) --> slo_path_list(%d, %d, %d, %d)
Line 5656: ##[NR_SCC] MainSimRfReconfig[SASA_DR_MAIN] : [SASA_DS > SASA_DR] RF path change
Line 5659: ##[NR_SCC] MainSimRfReconfig : RF init for SASA DR/DS
Line 5666: ##[NR_SCC] MainSimRfReconfig : RF init after BPLMN, OtherSimModemState(%d)
Line 5687: ##[NR_SCC] MainSimRfReconfig[SANSA_DS] : RF path change
Line 5708: ##[NR_SCC] MainSimRfReconfig : Set CA config for pcell, num_band(%d)
Line 5718: ##[NR_SCC] MainSimRfReconfig : RF_SIM_CHANGE_SUB_TO_MAIN rx_mode(%d), num_band(%d)
Line 5724: ##[NR_SCC] MainSimRfReconfig : Abnormal num_band(%d)
Line 5731: ##[NR_SCC] MainSimRfReconfig : RF init only in SA mode.
Line 5746: ##[NR_SCC] MainSimRfReconfig : RF init skipped
Line 5800: ##[NR_SCC] SubSimRfReconfig : RF init after BPLMN, OtherSimModemState(%d)
Line 5818: ##[NR_SCC] SubSimRfReconfig[SASA_DR_SUB] : [SASA_DS > SASA_DR] RF path change
Line 5847: ##[NR_SCC] ConfigRecovery : current_sim_status(%d), received_sim_status(%d) SASADrState(%d) IsNrNrMode(%d) IsDrAvailable(%d), cell_type(%d)
Line 5863: ##[NR_SCC] RF init only in SA mode.
Line 5885: ##[NR_SCC] RF init skipped in DR mode
Line 5888: ##[NR_SCC] Pcell already off, nothing to recover : pri_path_idx(%d), rx_mode(%d), DrSimInfo(%d), NrDbResumeType(%d), Band(%d)
Line 5901: ##[NR_SCC][DS-RESUME ongoing] Invalid pri_path_idx(%d),RF Init
Line 5916: ##[NR_SCC] skip path recovery, cell_info_idx[%d], req_status[%d], path_info_idx[%d]
Line 5955: ##[NR_SCC][WARNING] SA For RF Modem Init
Line 5960: ##[NR_SCC][WARNING] NSA or SA-LTE DR For rf band list Init
Line 6011: ##[NR_SCC] PathConfigRecovery : SASADrState(%d), OtherSim_ModemState(%d), OtherSim_IsDrToDs(%d) --> result(%d)
Line 6016: ##[NR_SCC] PathConfigRecovery : OtherSim_DrToDs flag clear
Line 6025: ##[NR_SCC] PathConfigRecovery : SASA DR, sub sim -> main sim DR config, other_sim(%d) OtherSim_DrState(%d)
Line 6092: ##[NR_SCC] ConfigCc : ClkCtrlEn(%d)
Line 6097: ##[NR_SCC] SetNrCpuMifClkLevel for mmWave : CurrCfgCellCnt(%d), nr_cpu_mif_clk_level(%d)
Line 6104: ##[NR_SCC] ConfigCc : fr1_band_update(%d), fr2_band_update(%d)
Line 6122: ##[NR_SCC] ReleaseCc : RelCellArray(%d, %d, %d, %d, %d, %d), RelCellNum(%d)
Line 6143: ##[NR_SCC] ReleaseCc : RelRfPath(%d, %d, %d, %d, %d, %d), RelRfPathCnt(%d)
Line 6170: ##[NR_SCC] ReleaseCc : ClkCtrlEn(%d)
Line 6175: ##[NR_SCC] SetNrCpuMifClkLevel for mmWave : CurrCfgCellCnt(%d), nr_cpu_mif_clk_level(%d)
Line 6178: ##[NR_SCC] ReleaseCc : fr1_band_update(%d), fr2_band_update(%d)
Line 6193: ##[NR_SCC] GetRFSupportBand : SASA_mode(DR mode), DrAvailable(true) -> skip GetRFSupportBand
Line 6203: ##[NR_SCC] GetRFSupportBand : BPLMN PCELL Path recovery case, return CA_SUPPORT
Line 6209: ##[NR_SCC] GetRFSupportBand : SA pcell case, return CA_SUPPORT
Line 6233: ##[NR_SCC] GetRFSupportBand : resume_type(%d), band(%d), rf_support(%d), mode(0x%x), result(%d)
Line 6252: ##[NR_SCC] FR2 RF NOT SUPPORT : FR2 band(%d), New FR2 band(%d)
Line 6262: ##[NR_SCC] FR2 RF NOT SUPPORT : freq(%d)khz, received freq(%d)khz, ABS(%d), LO threshold(%d)
Line 6283: ##[NR_SCC] GetRFCAConfigMode : release case, return CA_SUPPORT
Line 6290: ##[NR_SCC] GetRFCAConfigMode : SA pcell case, return CA_SUPPORT
Line 6324: ##[NR_SCC] GetRFCAConfigMode : prev_bandlist(%d, %d, %d, %d, %d, %d)
Line 6326: ##[NR_SCC] GetRFCAConfigMode : cfg_bandlist(%d, %d, %d, %d, %d, %d)
Line 6328: ##[NR_SCC] GetRFCAConfigMode : target_bandlist(%d, %d, %d, %d, %d, %d)
Line 6332: ##[NR_SCC] GetRFCAConfigMode : mode(0x%x), result(%d)
Line 6346: ##[NR_SCC] PrintModuleInfo : serv_beam_idx(0x%x), target_beam_idx(0x%x), serv_module(%d), target_module(%d), num_of_cfg_cell(%d), num_of_rel_cell(%d), module_op_type(%d)
Line 6364: ##[NR_SCC] NR REL CELL INFO : num_of_rel_cell(%d), idx(%d), path_req_type(%d), cell_info_idx(%d), skip_rf_path_off(%d), path_dir(%d)
Line 6386: ##[NR_SCC] NR CFG CELL INFO : num_of_cfg_cell(%d), idx(%d), path_req_type(%d), scell_idx(%d), rx_beam_idx(0x%03x), agc_gain(%d, %d)
Line 6396: ##[NR_SCC] NR CFG CELL INFO : dl_freq(%d, %d, %d, (ch)%d), bw(dl/ul/ch)(%09d), ul_freq(%d, %d), MaxNwDlLayer/dmrs/scs(%09d)
Line 6401: ##[NR_SCC] NR CFG CELL INFO : path_dir(%d), ul max_mimo_layer_nw(%d), ul max_mimo_layer_ue(%d)
Line 6454: ##[NR_SCC] SccInit : modem_state(%d), module_path_idx(%d), rx_mode(0x%x) check_check %d
Line 6461: ##[NR_SCC] SccInit : measmode(%d) Resume first then Init
Line 6494: ##[NR_SCC] SccInit : resume_type(%d) RSM.NrNrMode(%d), NRDB.GetNrNrMode(%d), IsNrNrMode(%d), modem_state(%d)
Line 6502: ##[NR_SCC] SccInit : NR release, RF backup data clear, CurrentModemState(%d)
Line 6570: ##[NR_SCC] Release All Sccinit : cell_info(%d), pri_path_info(%d), div_path_info(%d)
Line 6584: ##[NR_SCC] m_current_sim_status(%d), current_domain_type(%d), current_UeState(%d), other_domain_type(%d), other_UeState(%d)
Line 6632: ##[NR_SCC] SccInit : BackUp_IsPhyDrPeriod(%d), BackUp_DrAvailable(%d), BackUp_RxMode(%d)
Line 6658: ##[NR_SCC] OtherStackLteActive(%d), OtherStackNrActive(%d)
Line 6663: ##[NR_SCC] UpdateDvfs when SCC init, MRA_DL and MRA_UL
Line 6679: ##[NR_SCC] Sccinit : SASA DRDS case, remain IsDrToDs(%d)
Line 6690: ##[NR_SCC] ProcessAllStop
Line 6814: ##[NR_SCC] CheckPathInfo : cell_info_idx %d, pri_path_idx %d 
Line 6855: ##[NR_SCC] Erase reserved cell, cell_info_idx(%d), path_info_idx(%d)
Line 6894: ##[NR_SCC][Reserved Cell] target_cover cell_info_idx (%d), cell_info_freq(%d), cell_info_bw(%d Mhz), target_freq(%d)
Line 6904: ##[NR_SCC] PostProcNrPathConfig : PcellDemodChanged(%d) ScellDemodChanged(0x%x)
Line 6911: ##[NR_SCC] PcellDemodChanged : Path(%d) modify_statue(%d -> %d)
Line 6931: ##[NR_SCC] ScellDemodChanged : cell_info(%d), path_info(%d), cell_info.scell_idx(%d)
Line 6954: ##[NR_SCC] SetIsSkipGapConfig : m_IsSkipGapConfig(%d -> %d)
