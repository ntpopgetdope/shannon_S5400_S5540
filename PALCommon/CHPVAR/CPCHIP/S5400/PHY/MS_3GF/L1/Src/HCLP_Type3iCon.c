Line 319: HCLP_Type3iCon_Lockdisable1[ce_idx 0x%x][lockedPwrSum %d][serving_ce_index %d][serving_pwrSum %d][sce_type3i_dsp_aided_release_cnt %d]
Line 479: HCLP_Type3iCon_GetCellInfo[fa1_cell_pn[0]: 0x%x][hclp_fa1_cell_pn_pack[0]:0x%x][fa1_cell_pn[1]:0x%x][hclp_fa1_cell_pn_pack[1]:0x%x][fa1_cell_pn[2]:0x%x][hclp_fa1_cell_pn_pack[2]:0x%x]
Line 725: HCLP_Type3iCon_EquInitCheck[fa_idx: %d][j: %d][equ_init_current: 0x%x][o_equ_init_indicator: 0x%x][p_type3icon->cellindex_to_searcherinfo[fa_idx][j-1]: %d][p_type3icon->type3i_psc[fa_idx][j-1]: %d]
Line 804: hCLP_Type3iCon_CellReleaseReplace[fa_idx %d][j %d][own_pwrSum %d]
Line 830: hCLP_Type3iCon_CellReleaseReplace[other_cell %d][fa_idx %d][SCE_idx %d]
Line 835: hCLP_Type3iCon_EquInitCheck[replacement: %d][equ_init_current: 0x%x][o_equ_init_indicator: 0x%x][p_type3icon->cellindex_to_searcherinfo[fa_idx][j-1]: %d][p_type3icon->type3i_psc[fa_idx][j-1]: %d]
Line 1134: hCLP_Type3iCon_HWRegisterGen_SRELMSCOMMON_CECluster, o_SRELMS_SRE_CLUST_CTRL = 0x%x
Line 1170: hCLP_Type3iCon_HWRegisterGen_SRELMSCOMMON_LMSCluster, o_SRELMS_LMS_CLUST_CTRL = 0x%x, o_SRELMS_LMS_CLUST_CTRL1= 0x%x
Line 1387: hCLP_Type3iCon_HWRegisterGen_SRELMSCluster_Cluster, i= %d, lms_map_info[i].bit.lms_sre_map_info= 0x%x, lms_map_info[i].lms_errcal_rxd_ind= 0x%x, lms_map_info[i].lms_d_est_bitsel = 0x%x
Line 1399: hCLP_Type3iCon_HWRegisterGen_SRELMSCluster_Cluster, i = %d, o_LMS_MAP_INFO[i] = 0x%x, o_LMS_MTG_INFO[i] = 0x%x
Line 1515: hCLP_Type3iCon_HWRegisterGen_HICCOMMON_Cluster, i = %d, (p_hclp_aux_ipc_control->config_ce_clusters[i].cell_idx)-1 = %d, (p_type3icon->fa0_cell_searcher[p_type3icon->cellindex_to_searcherinfo[0][(p_hclp_aux_ipc_control->config_ce_clusters[i].cell_idx)-1]].PscrCode) = %d, hic_ce_schic_con[i].bit.hic_ce_scram_code_group = %d
Line 1950: HCLP_Type3iCon_Get_Ref_Position, i = %d, j = %d, hCLP_SW_TT_RefPos_Align(j)= %d, serving_cell_position = %d, hic_cell_offset_con[i].bit.hic_cell_offset.reg = 0x%x
Line 1957: HCLP_Type3iCon_Get_Ref_Position, i = %d, j = %d, CE_init_enable=0x%x, p_type3icon->type3i_hic_iir_clear[i]=%d
Line 2008: hCLP_Type3iCon_HWRegisterGen, i = %d, o_HIC_P_MAP[i]=0x%x, o_HIC_P_CONFIG[i]=0x%x, p_type3icon->o_HIC_P_SCR_PN_STATE[i]=0x%x, o_HIC_P_4RX_MAP[i]=0x%x, o_HIC_P_WGT_MAP[i]=0x%x, p_type3icon->o_HIC_P_CPI_DM_ADDR[i]=0x%x
Line 2039: hCLP_Type3iCon_HWRegisterGen_HICProcess_HicProcessLast, i = %d, o_HIC_P_CONFIG[i] = 0x%x
Line 2082: hCLP_Type3iCon_HWRegisterGen_SRELMSCluster_LmsWgtAdjLambdaSel, lms_idx = %d, o_LMS_WGT_ADJ_LAMBDA_SEL[lms_idx] = 0x%x
Line 2165: hCLP_Type3iCon_HWRegisterGen, ic_proc_idx_early = %d, config_hic_clusters = 0x%x, HIC_init_enable=0x%x
Line 2170: hCLP_Type3iCon_HWRegisterGen, HIC_index = %d
Line 2214: hCLP_Type3iCon_HWRegisterGen, CE_init_enable = 0x%x, LMS_init_enable = 0x%x
Line 2219: hCLP_Type3iCon_HWRegisterGen, i = %d, config_ce_clusters = 0x%x, config_lms_clusters = 0x%x, config_hic_clusters = 0x%x
Line 2312: hCLP_Type3iCon_HWEquInitEnable(WA1), equ_init_enable= 0x%x, type3i_remained_equ_init= 0x%x
Line 2359: HCLP_Type3iCon_HWEquInitEnable(after), ant_sel= 0x%x, fb_sel= 0x%x, carrier_mode= 0x%x, rx_div_mode= 0x%x, sce_on_flag= 0x%x
Line 2527: hCLP_Type3iCon_CellReleaseCheck2[other_cell %d][fa_idx %d][SCE_idx %d]
Line 2553: hCLP_Type3iCon_CellReleaseCheck(writeSceOn=1)[i %d][j %d][slot_idx %d][config_ce_clusters[i] 0x%x][o_HIC_P_CELL_OFFSET_CON[j] 0x%x]
Line 2579: hCLP_Type3iCon_CellReleaseCheck(writeSceOn=2)[i %d][j %d][config_ce_clusters[i] 0x%x][o_HIC_P_CONFIG[j] 0x%x]
Line 2629: hCLP_Type3iCon_HICModeChange_Release, slot_idx %d, release_status 0x%x, HIC_init_enable 0x%x
Line 2651: hCLP_Type3iCon_HICModeChange_Release slot 12, i= %d, o_HIC_P_CONFIG 0x%x, o_HIC_P_CELL_OFFSET_CON 0x%x
Line 2674: hCLP_Type3iCon_HICModeChange_Release slot 13, i= %d, o_HIC_P_CONFIG 0x%x
Line 2696: hCLP_Type3iCon_HICModeChange_Release slot 14, i= %d, o_HIC_P_CONFIG 0x%x
Line 2734: hCLP_Type3iCon_Control(WA)[equ_init_enable:0x%x][type3i_remained_equ_init:0x%x]
Line 2750: HCLP_Type3iCon_Control1[equ_init_indicator: 0x%x]
Line 2757: hCLP_Type3iCon_Control2[equ_init_indicator:0x%x]
Line 2767: hCLP_Type3iCon_Control3[equ_init_enable:0x%x][hic_intra_and_type3i_flag:0x%x]
