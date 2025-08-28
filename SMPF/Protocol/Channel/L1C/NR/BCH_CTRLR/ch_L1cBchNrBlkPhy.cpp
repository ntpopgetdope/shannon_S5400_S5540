Line 76: ##[NR_CHANNEL] SchedBwpSwitchReqCb: cb_param(%d), on_going_proc(0x%x), ctrlr_state(%d)
Line 92: ##[NR_CHANNEL] SchedBwpSwitchReqCb: target scell index for BWP switching is not found
Line 109: ##[NR_CHANNEL] SchedBwpSwitchReqCb: Invalid cb_param(%d)
Line 130: ##[NR_CHANNEL] SchedPhyConfigRequestCb:: Serv_Arfcn(%d), Sib1Config(%d), SCellBitmask(0x%x) AddModSCellBitmask(0x%x), ScellRelBitMask(0x%x), cb_type(%d, 0:Normal/1:CDRX/2:DSDS/3:BPLMN)
Line 141: ##[NR_CHANNEL] Need to check: as_state(%d) and scell_bit(0x%x, 0x%x, 0x%x) -> force to set 0 in CA ScellBitMask
Line 189: ##[NR_CHANNEL] Invalid cb_param(%d)
Line 201: ##[NR_CHANNEL] SchedPhyConfigRequestCb:: Received UE_CAPA (%d, %d, %d, %d, %d)
Line 252: ##[NR_BCH] PHY_CFG_S:: adding scell_idx(%d) @ add_scell_idx_array[%d]
Line 260: ##[NR_CHANNEL] PHY_CFG_S:: m_BchDb->total_num_of_scell(%d), delta_num_of_scell(%d)
Line 267: ##[NR_CHANNEL] phy_cfg_update is for recovery type, sib1_flag(%d), cfg_status(%d), as_state(%d), conn_state(%d)
Line 302: ##[NR_CHANNEL] PHY_CONFIG_NR_CMD:: servArfcn(%d), phy_cfg_update(%d, 0:Normal/1:DRX/2:DSDS/3:MIB/4:SERV_RECOV), ul_freq_info(%d %d %d), bw(%d), num_rb(%d)
Line 306: ##[NR_CHANNEL] SchedPhyConfigRequestCb:: m_BchDb->on_going_proc (0x%x)
Line 344: ##[NR_CHANNEL][WARNING] Timer expired for PHY CONFIG NR CMD
Line 362: ##[NR_CHANNEL][WARNING] Invalid new_ul_bwp_idx during FDD scenario
Line 374: ##[NR_CHANNEL][WARNING] Abnormal SrcId(%d)
Line 379: ##[NR_CHANNEL] HAL->BCHCTRLR@NrPhyConfigCnfCb(%d, %d)
Line 385: ##[NR_CHANNEL] None of BWP info. exists
Line 427: ##[NR_CHANNEL] ProcessScellRelAndDeact: rel_scell_index(%d) is not found in serv_cell_info
Line 432: ##[NR_CHANNEL] ProcessScellRelAndDeact: Scell Rel/Deact for path cfg failure cell, scell(%d), bch_idx(%d)
Line 438: ##[NR_CHANNEL] ProcessScellRelAndDeact: Target Deact Scell (idx(%d), scc_cell_info_idx(%d))
Line 449: ##[NR_CHANNEL] ProcessScellRelAndDeact: Target Rel Scell List [%d] scell_idx(%d), scc_cell_info_idx(%d), rel_serv_cell_info_idx(%d))
Line 456: ##[NR_CHANNEL] ProcessScellRelAndDeact: Invalid num_of_rel_scell is detected. Ask this issue to RRC
Line 463: ##[NR_CHANNEL] ProcessScellRelAndDeact: num_of_rel_cell in PHY_CFG(%d), num_of_deact_cell(%d), m_BchDb->total_num_of_scell(%d)
Line 467: ##[NR_CHANNEL] ProcessScellRelAndDeact: ***** Previous Act Scell for Release scc_cell_info_idx(%d)
Line 473: ##[NR_CHANNEL] ProcessScellRelAndDeact: No need to send PathConfigReqForRel
Line 484: ##[NR_CHANNEL] ProcessScellRelAndDeact: PATH_REL for SCELL would be processed after SCELL Path Deact
Line 503: ##[NR_CHANNEL][ULCA] No need to check Pcell TX swap is need. (scell_ul_band: %d)
Line 508: ##[NR_CHANNEL] ProcessScellRelAndDeact: Sending SysParamChgReq with LCPU_PAUSE for Release SLO
Line 568: ##[NR_CHANNEL] PHY_CFG_SIB1::GetBwpInfoFromSibCfg()
Line 572: ##[NR_CHANNEL] PHY_CFG_SIB1::pCommonSib is NULL
Line 573: ##[NR_CHANNEL] PHY_CFG_SIB1::pMib is NULL
Line 583: ##[NR_CHANNEL] PHY_CFG_SIB1_DL::OFFSET_TO_POINT_A_MASK is absent.
Line 601: ##[NR_CHANNEL] PHY_CFG_SIB1_DL:: k_ssb(%d), freq_offset_to_pointA(%d), freq_offset_to_float_ssb(%d), freq_pointA(%d), PointA_ARFCN(%d), default_scs_val(%d), kssb_scs_val(%d)
Line 619: ##[NR_CHANNEL] PHY_CFG_SIB1_DL::[%d] band(%d), carr_scs(%d), offsetToCarrier(%d), offsetToCarrier_bwp(%d), carrierBandwidth(%d)
Line 627: ##[NR_CHANNEL] PHY_CFG_SIB1_DL::SCS_SPECIFIC_CARRIER_LIST_MASK is absent.
Line 634: ##[NR_BCH] PHY_CFG_SIB1_DL:: band is changed (%d, %d) -> (%d, %d)
Line 670: ##[NR_CHANNEL] PHY_CFG_SIB1_DL::LOCATION_AND_BANDWIDTH_MASK is absent.
Line 680: ##[NR_CHANNEL] PHY_CFG_SIB1_DL::SUBCARRIER_SPACING_MASK is absent.
Line 693: ##[NR_CHANNEL] PHY_CFG_SIB1_DL::GENERIC_PARAMETERS_MASK is absent.
Line 698: ##[NR_CHANNEL] PHY_CFG_SIB1_DL::PcchConfig is NULL
Line 709: ##[NR_CHANNEL] PHY_CFG_SIB1_DL::SIB DOWNLINK_CONFIG_COMMON_MASK is absent.
Line 718: ##[NR_CHANNEL] PHY_CFG_SIB1_DL:: Keep Current DL act_bwp_idx(%d)
Line 726: ##[NR_CHANNEL] PHY_CFG_SIB1_UL::ABSOLUTE_FREQUENCY_POINT_A_MASK is absent.
Line 733: ##[NR_CHANNEL] PHY_CFG_SIB1_UL:: UL PointA(%d)
Line 750: ##[NR_CHANNEL] PHY_CFG_SIB1_UL::[%d] band(%d), carr_scs(%d), offsetToCarrier(%d), offsetToCarrier_bwp(%d), carrierBandwidth(%d)
Line 753: ##[NR_CHANNEL] PHY_CFG_SIB1_UL::NumOfSpecificCarrier(%d)
Line 759: ##[NR_CHANNEL] PHY_CFG_SIB1_UL::SCS_SPECIFIC_CARRIER_LIST_MASK is absent.
Line 789: ##[NR_CHANNEL] PHY_CFG_SIB1_UL::LOCATION_AND_BANDWIDTH_MASK is absent.
Line 798: ##[NR_CHANNEL] PHY_CFG_SIB1_UL::SUBCARRIER_SPACING_MASK is absent.
Line 812: ##[NR_CHANNEL] PHY_CFG_SIB1_UL::GENERIC_PARAMETERS_MASK is absent.
Line 818: ##[NR_CHANNEL] PHY_CFG_SIB1_UL::SIB UPLINK_CONFIG_COMMON_MASK is absent.
Line 826: ##[NR_CHANNEL] PHY_CFG_SIB1_UL:: Keep Current UL act_bwp_idx(%d)
Line 830: ##[NR_CHANNEL] PHY_CFG_SIB1:: mismatch act_bwp_id (D%d, U%d)
Line 860: ##[NR_CHANNEL] GetBwpInfoFromSpcellCfg:: GetBwpDb from Cell_idx(%d)
Line 877: ##[NR_CHANNEL] PHY_CFG_P::SERVINGCELL_CONFIG_COMMON_MASK is absent.
Line 882: ##[NR_CHANNEL] PHY_CFG_P::RECONFIGWITH_SYNC_MASK is absent.
Line 896: ##[NR_CHANNEL] PHY_CFG_P::SPECLL_CONFIG_DEDICATED_MASK is absent.
Line 938: ##[NR_CHANNEL] PHY_CFG_P:: recv_max_srs_num(%d), [%d] num_port(%d)
Line 964: ##[NR_CHANNEL] PHY_CFG_P:: recv_max_srs_num(%d), [%d] num_port(%d)
Line 973: ##[NR_CHANNEL] GetMaxSrsPortNumFromBwp: bwp_id(%d), absent(%d), max_rank(%d)
Line 1007: ##[NR_CHANNEL] GetMaxPuschRankFromBwp: bwp_id(%d), absent(%d), max_rank(%d)
Line 1060: ##[NR_CHANNEL] PHY_CFG_P::DL_NumOfSpecificCarrier(%d)
Line 1066: ##[NR_CHANNEL] PHY_CFG_P::DL_SCS_SPECIFIC_CARRIER_LIST_MASK is absent.
Line 1071: ##[NR_CHANNEL] PHY_CFG_P::FREQUENCY_INFO_DL_MASK is absent.
Line 1116: ##[NR_CHANNEL] PHY_CFG_P::DL_GENERIC_PARAMETERS_MASK of InitBWP is absent.
Line 1122: ##[NR_CHANNEL] PHY_CFG_P::DOWNLINK_CONFIG_COMMON_MASK is absent.
Line 1158: ##[NR_CHANNEL] PHY_CFG_P::UL_NumOfSpecificCarrier(%d)
Line 1164: ##[NR_CHANNEL] PHY_CFG_P::UL_SCS_SPECIFIC_CARRIER_LIST_MASK is absent.
Line 1169: ##[NR_CHANNEL] PHY_CFG_P::FREQUENCY_INFO_UL_MASK is absent.
Line 1212: ##[NR_CHANNEL] PHY_CFG_P::UL_GENERIC_PARAMETERS_MASK of InitBWP is absent.
Line 1217: ##[NR_CHANNEL] PHY_CFG_P::INITIAL_UPLINK_BWP_MASK is absent.
Line 1251: ##[NR_CHANNEL] PHY_CFG_P: SpcellConfigDedicated(0x%x 0x%x)
Line 1273: ##[NR_CHANNEL] PHY_CFG_P: FIRST_ACTIVE_DOWNLINK_BWP_ID_MASK is absent.
Line 1284: ##[NR_CHANNEL] PHY_CFG_P: DEFAULT_DOWNLINK_BWP_ID is absent.
Line 1286: ##[NR_CHANNEL] PHY_CFG_P: nw_bwp_id_info{dl_act_bwp_id(%d) dl_default_bwp_id(%d)}, cur_dl_bwp_idx(%d)
Line 1298: ##[NR_CHANNEL] PHY_CFG_P: INITIAL_DOWNLINK_BWP_MASK is absent.
Line 1301: ##[NR_CHANNEL] PHY_CFG_P: BWP_DB[%d] dmrsAdditinalPosition(%d), IsUpdateDmrsAdditionalPosition(%d)
Line 1348: ##[NR_CHANNEL] PHY_CFG_P: BWP_DOWNLINK_DEDICATED_MASK is absent
Line 1351: ##[NR_CHANNEL] PHY_CFG_P: BWP_DB[%d] dmrsAdditinalPosition(%d), IsUpdateDmrsAdditionalPosition(%d)
Line 1354: ##[NR_CHANNEL] PHY_CFG_P: RCVD DL_INFO BWP_DB[%d] LocAndBand(%d)[Start=%d, Len = %d, Scs = %d]
Line 1362: ##[NR_CHANNEL] PHY_CFG_P: DOWNLINK_BWP_MASK is absent
Line 1370: ##[NR_CHANNEL] PHY_CFG_P: PDSCH_MAX_MIMO_LAYERS_MASK is absent, force to set nw_max_dl_layer(%d)
Line 1381: ##[NR_CHANNEL] PHY_CFG_P:: current max_layer_info(0x%8x) max_dl_rank_updated(%d)
Line 1382: ##[NR_CHANNEL] PHY_CFG_P: dl_num_of_bwp (%d)
Line 1403: ##[NR_CHANNEL] PHY_CFG_P: FIRST_ACTIVE_UPLINK_BWP_ID_MASK is absent.
Line 1410: ##[NR_CHANNEL] PHY_CFG_P: nw_bwp_id_info{ul_act_bwp_id(%d) ul_default_bwp_id(%d)}, cur_ul_act_bwp_idx(%d)
Line 1484: ##[NR_CHANNEL] PHY_CFG_P: UPLINK_BWP_LIST_MASK is absent
Line 1490: ##[NR_CHANNEL] PHY_CFG_P: ul_num_of_bwp(%d), ul_cfg_serv_cell_bitmap(0x%x), act_bwp_rank(%d), act_bwp_srs_num(%d)
Line 1494: ##[NR_CHANNEL] PHY_CFG_P: UPLINK_CONFIG_MASK is absent
Line 1513: ##[NR_CHANNEL] PHY_CFG_S:: GetBwpInfoFromScellCfg() scell_idx(%d)
Line 1517: ##[NR_CHANNEL] PHY_CFG_S::abnormal scell_idx : %d
Line 1525: ##[NR_CHANNEL] PHY_CFG_S:: Invalid scell_index(%d) @ ScellToAddMod
Line 1535: ##[NR_CHANNEL] PHY_CFG_S:: Invalid serv_cell_info_idx
Line 1542: ##[NR_CHANNEL] PHY_CFG_S::ScellConfigPresentBitmask is absent
Line 1549: ##[NR_CHANNEL] PHY_CFG_S::Invalid scell index is received (%d %d)
Line 1560: ##[NR_BCH] PHY_CFG_S::PHYS_CELL_ID_MASK is absent
Line 1566: ##[NR_CHANNEL] PHY_CFG_S::SCELL_CONFIG_COMMON_MASK is absent.
Line 1576: ##[NR_CHANNEL] PHY_CFG_S::SCELL_CONFIG_DEDI is absent.
Line 1612: ##[NR_BCH] PHY_CFG_S: PHYS_CELL_ID_MASK is absent
Line 1645: ##[NR_CHANNEL] PHY_CFG_S: DL_SCS_SPECIFIC_CARRIER_LIST_MASK is absent.
Line 1650: ##[NR_CHANNEL] PHY_CFG_S: DL_FREQUENCY_INFO_DL_MASK is absent.
Line 1694: ##[NR_CHANNEL] PHY_CFG_S: GENERIC_PARAMETERS_MASK of InitBWP is absent.
Line 1700: ##[NR_CHANNEL] PHY_CFG_S::DOWNLINK_CONFIG_COMMON_MASK is absent.
Line 1717: ##[NR_CHANNEL] PHY_CFG_S: CA Scell SSB_SCS is absent.
Line 1721: ##[NR_CHANNEL] PHY_CFG_S: DL_scell_idx(%d) -> ssb_freq_info(%d, %d, %d), ssb_scs(%d), NumOfSpecificCarrier(%d)
Line 1744: ##[NR_CHANNEL] PHY_CFG_S: UL_scell_idx(%d) -> NumOfSpecificCarrier(%d)
Line 1750: ##[NR_CHANNEL] PHY_CFG_S: UL_SCS_SPECIFIC_CARRIER_LIST_MASK is absent.
Line 1755: ##[NR_CHANNEL] PHY_CFG_S: FREQUENCY_INFO_UL_MASK is absent.
Line 1798: ##[NR_CHANNEL] PHY_CFG_S: UL_GENERIC_PARAMETERS_MASK of InitBWP is absent.
Line 1803: ##[NR_CHANNEL] PHY_CFG_S: INITIAL_UPLINK_BWP_MASK of InitBWP is absent.
Line 1839: ##[NR_CHANNEL] PHY_CFG_S: FIRST_ACTIVE_DOWNLINK_BWP_ID_MASK is absent.
Line 1853: ##[NR_CHANNEL] PHY_CFG_S: DL act_bwp_id(%d-> %d) default_bwp_id(%d)
Line 1861: ##[NR_CHANNEL] PHY_CFG_S: dl_dormant_bwp_idx(%d)
Line 1865: ##[NR_CHANNEL] PHY_CFG_S: ul_dormant_bwp_idx(%d)
Line 1870: ##[NR_CHANNEL] PHY_CFG_S: DORMANT_BWP_ID_MASK is absent.
Line 1878: ##[NR_CHANNEL] PHY_CFG_S: dl_within_active_bwp_idx(%d)
Line 1882: ##[NR_CHANNEL] PHY_CFG_S: ul_within_active_bwp_idx(%d)
Line 1887: ##[NR_CHANNEL] PHY_CFG_S: FIRST_WITHIN_ACTIVE_TIME_BWP_ID_MASK is absent.
Line 1892: ##[NR_CHANNEL] PHY_CFG_S: WITHIN_ACTIVE_TIME_CONFIG_MASK is absent.
Line 1900: ##[NR_CHANNEL] PHY_CFG_S: dl_outside_active_bwp_idx(%d)
Line 1904: ##[NR_CHANNEL] PHY_CFG_S: ul_outside_active_bwp_idx(%d)
Line 1909: ##[NR_CHANNEL] PHY_CFG_S: FIRST_OUTSIDE_ACTIVE_TIME_BWP_ID_MASK is absent.
Line 1914: ##[NR_CHANNEL] PHY_CFG_S: OUTSIDE_ACTIVE_TIME_CONFIG_MASK is absent.
Line 1919: ##[NR_CHANNEL] PHY_CFG_S: DORMANT_BWP_CONFIG_MASK is absent.
Line 1972: ##[NR_CHANNEL] PHY_CFG_S: BWP_DOWNLINK_DEDICATED_MASK is absent
Line 1975: ##[NR_CHANNEL] PHY_CFG_S: BWP_DB[%d] dmrsAdditinalPosition(%d), IsUpdateDmrsAdditionalPosition(%d)
Line 1988: ##[NR_CHANNEL] PHY_CFG_S: DOWNLINK_BWP_MASK is absent
Line 1995: ##[NR_CHANNEL] PHY_CFG_S: PDSCH_MAX_MIMO_LAYERS_MASK is absent, force to set nw_max_dl_layer(%d)
Line 2002: ##[NR_CHANNEL] PHY_CFG_S: current max_layer_info(0x%8x)
Line 2005: ##[NR_CHANNEL] PHY_CFG_S: DL_NumofBwp (%d)
Line 2017: ##[NR_CHANNEL] PHY_CFG_S: FIRST_ACTIVE_UPLINK_BWP_ID_MASK is absent.
Line 2029: ##[NR_CHANNEL] PHY_CFG_S: UL act_bwp_id(%d -> %d) default_bwp_id(%d)
Line 2103: ##[NR_CHANNEL] PHY_CFG_S::UPLINK_BWP_LIST_MASK is absent
Line 2107: ##[NR_CHANNEL] PHY_CFG_S::UL_NumofBwp(%d), ul_cfg_serv_cell_bitmap(0x%x), scell_act_bwp_rank(%d), scell_act_srs_num(%d)
Line 2123: ##[NR_CHANNEL] UPLINK_CONFIG_MASK is absent, current ul_serv_cell(0x%x)
Line 2140: ##[NR_CHANNEL] UpdateSpecificCarrInfo::scell_idx(%d), dl_ul_cfg(%d, D=0/U=1)
Line 2157: ##[NR_CHANNEL] DL_UpdateSpecificCarrInfo:: scell_idx(%d) SpecificCarrier[%d] SpecCarr PointA(%d) carrierBW(%d) OffsetToCarrier(%d) offsetToCarrier_bwp(%d) Scs(%d) Band(%d)
Line 2171: ##[NR_CHANNEL] BWP:: UL ABSOLUTE_FREQUENCY_POINTA_MASK is absent. Force to set value from DL Info
Line 2186: ##[NR_CHANNEL] BWP:: UL FREQUENCY_BAND_LIST_MASK is absent. Force to set value from DL Info
Line 2192: ##[NR_CHANNEL] UL_UpdateSpecificCarrInfo:: scell_idx(%d) SpecificCarrier[%d] SpecCarr PointA(%d) carrierBW(%d) OffsetToCarrier(%d) offsetToCarrier_bwp(%d) Scs(%d) Band(%d)
Line 2212: ##[NR_CHANNEL] UpdateBwpGenericInfo: =================> selected scell_idx(%d) DL BWP <=================
Line 2213: ##[NR_CHANNEL] UpdateBwpGenericInfo: =================> selected scell_idx(%d) UL BWP <=================
Line 2235: ##[NR_CHANNEL] BWP: num_of_specific_carr(0) for dl_ul_cfg(%d, 0=DL/1=UL)
Line 2242: ##[NR_CHANNEL] BWP: Invalid num_of_bwp(%d) for dl_ul_cfg(%d, 0=DL/1=UL)
Line 2248: ##[NR_CHANNEL] BWP: FreqOfPointA = %d for dl_ul_cfg(%d, 0=DL/1=UL)
Line 2257: ##[NR_CHANNEL] BWP: ABNL Cond. is detected, carr_idx(%d), carr_scs(%d), num_of_spec_carr(%d)
Line 2275: ##[NR_CHANNEL] BWP: FR1 table_idx is not found in SpecificCarrier info.
Line 2290: ##[NR_CHANNEL] BWP: table_idx of FR2 is not found in SpecificCarrier info.
Line 2319: ##[NR_CHANNEL] BWP: carr_idx[%d] carr_start_freq (%d) carr_center_freq (%d) table_idx(%d) prb0(%d) scs(%d) sys_bw(%d)
Line 2321: ##[NR_CHANNEL] BWP: ABNL Cond. is detected within carr_idx(%d), set all 0 into spec_carr_array
Line 2341: ##[NR_CHANNEL] BWP: ABNL Cond. as Target SCS is not found from BWP DB.
Line 2354: ##[NR_CHANNEL] BWP: Found iSpecificCarr(%d) FreqOfPrb_0(%d)KHz, BWP_Width(%d)KHz
Line 2369: ##[NR_CHANNEL] BWP: ABNL Cond. as BWP table_idx is not found from BWP DB.
Line 2386: ##[NR_CHANNEL] BWP: ABNL Cond. as BWP table_idx of mmWave is not found from BWP DB.
Line 2401: ##[NR_CHANNEL] BWP: ABNL Cond. is detected, so force to set 0 to bwp_info_array
Line 2435: ##[NR_CHANNEL] ProcessBwpSwitch: cause(%d), scell_idx(%d), target_bwp_id(0x%x), abort(%d), bwp_with_ssb(%d)
Line 2553: ##[NR_CHANNEL][BWP] Invalid serv_cell_info_idx(%d)
Line 2588: ##[NR_CHANNEL] No need to send path config for bwp switching
Line 2657: ##[NR_CHANNEL] ProcessBwpChangeByL3: chg_cause8/recov4(0x%x), cell_idx(%d), target_bwp_id(0x%x), demod_state(%d), m_BchDb->on_going_proc(0x%x), bwp_with_ssb(%d)
Line 2716: ##[NR_CHANNEL] ProcessBwpChangeByL3: demod_path_off is required with delay(%d)us
Line 2722: ##[NR_CHANNEL] ProcessBwpChangeByL3: SYS param Start sent with delay(%d)us
Line 2741: ##[NR_CHANNEL] ProcessBwpChangeByL3: path_config_required(DL:%d/UL:%d), recover_flag(%d), ul_rank_update_only(%d), chg_sys_param(%d), max_dl_rank_upd(%d), dmrs_add(%d)
Line 2781: ##[NR_CHANNEL] No need to send path_config_req as PATH_MODIFY: new_cell_add_mod(%d)
Line 2789: ##[NR_CHANNEL][RECOV] recovery_msg: pch_cfg(%d), drx_cfg(%d)
Line 2803: ##[NR_CHANNEL] No need to send sysparam_change ipc(CDRX_OPT)
Line 2805: ##[NR_CHANNEL] Invalid ProcessBwpChangeByL3 Cause(%d)
Line 2852: ##[NR_CHANNEL] No need to recover CA config, new_scell_added(%d)
Line 2892: ##[NR_CHANNEL] No need to send SCELL_CONFIG CMD (num_of_add_scell is 0)
Line 2930: ##[NR_CHANNEL][RECOV] Recovery_Param: pcch_ind(%d), drx_ind(%d), need_tx_resume(%d), num_of_cell(%d -> %d)
Line 2945: ##[NR_CHANNEL][RECOV] ABNL condition to create ScellCfgInfo: calc(%d), DB(%d)
Line 2956: ##[NR_CHANNEL] BWP ID only Changed Scenario is Done:: cause(%d)
Line 2997: ##[NR_CHANNEL] please check tdd bwp id scenario(%d, %d)
Line 3003: ##[NR_CHANNEL] Invalid target_bwp_id is received: dl(0x%x)/ ul(0x%x)
Line 3042: ##[NR_CHANNEL] CheckChangedSysParam: Invalid serv_cell_info_idx(cell_idx : %d)
Line 3063: ##[NR_CHANNEL] CheckChangedSysParam:: cause4/act4/scell_idx8(0x%x), target_bwp(id8/dl_scs4/dl_bw4)(0x%x), cur_bwp(id16/dl_bw4)(0x%x), freq(cur=%d, target=%d), bwp_with_ssb(%d)
Line 3064: ##[NR_CHANNEL] CheckChangedSysParam: UL freq(cur = %d, target = %d), bw(cur = %d, target = %d)
Line 3073: ##[NR_CHANNEL] The same bwp_id is received. Do nothing
Line 3091: ##[NR_CHANNEL] bwp_id switching procedure w/o changed sysparam
Line 3096: ##[NR_CHANNEL] 1st PCELL_PHY_CONFIG is received, prev_channel_bw(%d)
Line 3123: ##[NR_CHANNEL] act_bwp_id status dl(%d -> %d), ul(%d ->%d)
Line 3137: ##[NR_CHANNEL] Invalid CH_BW scs in BWP DB
Line 3145: ##[NR_CHANNEL] ChangedSysParam(%d - 1:BW,2:SCS,8:FREQ), spec_carr_array_idx(%d), act_bwp_idx(U%d, D%d)
Line 3161: ##[NR_CHANNEL] Invalid target_bwp_id is received.
Line 3169: ##[NR_CHANNEL] UpdateBwpIdInfo: scell_idx(%d), bwp_idx(0x%x, D4U4), chg_cause(%d)
Line 3232: ##[NR_CHANNEL][NR_TX] CheckUlBwChanged:: ret(%d), target_ul_bw(%d), cur_ul_bw(%d) [bwp_with_ssb(%d)/ul_bwp_id(%d)/scell_idx(%d)]
Line 3282: ##[NR_CHANNEL][NR_TX] GetUlRankUpdateRequired:: ret(%d), ul_max_rank(PRE/NEW)(1/1)(0x%x), cell_idx(%d), recovery_flag(%d), act_bwp_id(%d), is_ul_scell(%d), is_rank_change_by_mra(%d)
Line 3319: ##[NR_CHANNEL] PHY_CFG_P::DMRS_ADDITIONAL_POSITION_MASK is absent.
Line 3320: ##[NR_CHANNEL] PHY_CFG_S::DMRS_ADDITIONAL_POSITION_MASK is absent.
Line 3325: ##[NR_CHANNEL] PHY_CFG_P::DMRS_DOWNLINK_FOR_PDSCH_MAPPING_TYPEA_MASK is absent.
Line 3326: ##[NR_CHANNEL] PHY_CFG_S::DMRS_DOWNLINK_FOR_PDSCH_MAPPING_TYPEA_MASK is absent.
Line 3331: ##[NR_CHANNEL] PHY_CFG_P::PDSCH_CONFIG_MASK  is absent.
Line 3332: ##[NR_CHANNEL] PHY_CFG_S::PDSCH_CONFIG_MASK  is absent.
Line 3359: ##[NR_CHANNEL] CheckPathConfigRequired: result(%d), recover_flag(%d), chg_sys_param(%d), max_dl_rank_upd(%d), dmrs_add(%d)
Line 3379: ##[NR_CHANNEL][RECOV] prev_num_of_act_scell(%d)
Line 3401: ##[NR_CHANNEL] PHY_CFG: UE_SPECIFIC_CBW_DL{[%d] scs_idx(%d), scs_specific_carr_bmp(0x%x), offset_to_carr(%d), sys_scs(%d), carr_bw(%d)}
Line 3424: ##[NR_CHANNEL] PHY_CFG: UE_SPECIFIC_CBW_DL{scell_idx(%d), offset_to_carr(%d -> %d), carr_bw(%d -> %d), carr_scs(%d- > %d)}
Line 3429: ##[NR_CHANNEL] PHY_CFG_P: num of UE_SPECIFIC_CBW list is 0
Line 3453: ##[NR_CHANNEL] PHY_CFG: UE_SPECIFIC_CBW_UL{[%d] scs_idx(%d), scs_specific_carr_bmp(0x%x), offset_to_carr(%d), sys_scs(%d), carr_bw(%d)}
Line 3481: ##[NR_CHANNEL] PHY_CFG: UE_SPECIFIC_CBW_UL{scell_idx(%d) offset_to_carr(%d -> %d), carr_bw(%d -> %d), carr_scs(%d- > %d)}
Line 3486: ##[NR_CHANNEL] PHY_CFG_P: num of UE_SPECIFIC_CBW_UL list is 0
Line 3507: ##[NR_CHANNEL] PHY_CFG_S::INITIAL_DOWNLINK_BWP_MASK is absent.
Line 3510: ##[NR_CHANNEL] PHY_CFG_S::BWP_DB[%d] dmrsAdditinalPosition(%d), IsUpdateDmrsAdditionalPosition(%d)
Line 3524: ##[NR_CHANNEL] PHY_CFG_S: DEFAULT_DOWNLINK_BWP_ID is absent.
Line 3548: [NR_CHANNEL][TX] ProcessULRankChangebyMRA: scell_idx(%d), bwp_with_ssb(%d), bwp_id(DL:%d / UL:%d), ul_bw_changed(%d), ul_rank_changed(%d)
Line 3552: ##[NR_CHANNEL][TX] ProcessULRankChangebyMRA: No need to call MRA function for UL rank change
Line 3653: ##[NR_CHANNEL][TX] ProcessULRankChangebyMRA : forced tx path init, reset, ul_layer(%d)
Line 3660: ##[NR_CHANNEL][TX][ERROR] NrTxPathModifyPcell : Sub alloc fail
Line 3755: [NR_CHANNEL][TX] ProcessMcgUlRankChange: scell_idx(%d), bwp_with_ssb(%d), bwp_id(DL:%d / UL:%d), band(%d), num_ul_layer(PRE/NEW)(1/1)(0x%x)
Line 3771: ##[NR_CHANNEL] InitFlagChannelBWPerScsList
