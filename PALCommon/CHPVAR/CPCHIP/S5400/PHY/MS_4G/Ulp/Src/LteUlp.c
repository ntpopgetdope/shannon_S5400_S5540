Line 3172: [FBRX ISR] LteUlpFbrxIsr
Line 3264: [ScgUlp_Isr] TX0_RX_TX_SAMPLE_CNT[0X%X] TX1_RX_TX_SAMPLE_CNT[0X%X], TX1_INT_N[0X%X], TX1_SYSTEM_INFO[0X%X]
Line 3763: LTE ULP Disabled : status : %d
Line 4039: (W) RF control disabled. shm_sm_mipi_enable:0x%x
Line 4138: [DVFS_CPU_LOG] UL0_TTI_CONFIG[0x%x], UL1_TTI_CONFIG[0x%x], rtg_cnt(DL/UL)[0x%x], rfd_rtg_cnt_TX0~1(DL/UL)[0x%x][0x%x], UL/DL_RTG_diff[%d], ULP_ISR_time[%d(us)], et_en/pre_rach_check[%05d], ulDigitalGainCompInfo[0x%x], RFD_GNSS_CTRL[0x%x]
Line 4143: UL0_TTI_CONFIG[0x%x], UL1_TTI_CONFIG[0x%x], rtg_cnt(DL/UL)[0x%x], rfd_rtg_cnt_TX0~1(DL/UL)[0x%x][0x%x], UL/DL_RTG_diff[%d], ULP_ISR_time[%d(us)], et_en/pre_rach_check[%05d], ulDigitalGainCompInfo[0x%x], RFD_GNSS_CTRL[0x%x]
Line 4256: (F) TX0_SYSTEM_INFO : 0x%x TX0_SYSTEM_INFO : 0x%x !!
Line 4358: DSPTX_ULP_ISR(Tx0)=> ul_sfn+ul_tti(%d), ta_acc=%d, cell_id:%d, ue_id:0x%x, tx_sys_info:0x%x, rtg_cnt(DL/UL):0x%x, TXF_MPR_AVG_ACC:0x%x, RFD_TXF_MPR_AVG_ACC:0x%x, lpm_status_G/S[%02d], spi_off_delay[%d]
Line 4372: DSPTX_ULP_ISR(Tx1)=> ul_sfn+ul_tti(%d), ta_acc_tx1=%d, cell_id:%d, rtg_cnt(DL/UL):0x%x, Tx1_diff:%d, RFD_CC0_SLO_MIXER_FREQ_OFFSET:0x%x, ul_cc_idx:%d, TX1_SYSTEM_INFO_BB[0x%x] TX1_SYSTEM_INFO_RFD[0x%x], spi_off_delay[%d]
Line 4399: UL_SFN Mismatch!!! (UL_TTI:%d, UL_SFN:%d, DL_SFN:%d, ul_cc_idx:%d, scg_ho_tsfn_clear:%d)
Line 4425: UL_SFN Mismatch!!! (UL_TTI:%d, UL_SFN:%d, DL_SFN:%d, ul_cc_idx:%d)
Line 4451: [fmt3_tpc]  tpc_acc_pusch:%d, tpc_acc_pucch:%d, fmt3_tpc_val:0x%x, dci_tpc_exist:0x%x, ul_cc_idx:%d
Line 4510: Set forced [Modify TA]. ul_cc_idx[%d]
Line 4516: [Modify TA] is delayed because Absolute TA is pending for next tti. modify_ta_timer[%d], ul_cc_idx[%d]
Line 4609: ul_cc_idx : %d, RAR Timer Expired
Line 4696: RACH=>t_tti:%d, tti_con:0x%x, DAC:%d, timer:%d, ra_sr:%d, ra_type:%d, ul_sfn:%d, ul_cc_idx:%d, cell_group:%d
Line 4806: DRX&CQI cqi_mask(%d), ODT_state(%d)
Line 4837: DRX&CQI return(%d), CC(%d)
Line 4999: pusch_cqi: conc/idx/cc/proc/set/rank(%d), len_r1/org(%d,%d), data(0x%x,0x%x,0x%x,0x%x)
Line 5025: CC(%d), ACQI=>t_tti:%d, request:%d, meas_set_r10:0x%x, cqi_size:%d, ri_size:%d, ri_on:%d
Line 5049: CQI_Err=>%d 
Line 5056: CC(%d), PCQI=>t_tti:%d, cqi_type:%d, dropped by ttiBundling
Line 5070: RI on Pusch, pusch_ri_size: %d, pusch_ri_info: %d, cqi_type: %d
Line 5078: CC(%d), PCQI=>t_tti:%d, cqi_type:%d, cqi_size:%d, cqi_info:0x%x, ri_on:%d
Line 5085: (f) false alarm for CQI size(%d)!!
Line 5091: (F) CQI_SIZE error: %d
Line 5189: (F) false ack size (%d)
Line 5507: (f) ul_cc_idx(%d) is INVALID for LMAC
Line 5521: (F) harq_buf.SWHarqBufAddress[0]:0x%x 
Line 5525: (f) tx_lte_trs_enc_ttibuf_set:0x%x
Line 5541: (f) tx_lte_trs_enc_ttibuf_set:0x%x
Line 5551: Zero-Padding PUSCH Skipped. cell_group:%d, ul_cc_idx:%d, ul_reg_index:%d, ul_h_id:%d
Line 5570: (F) discard PUSCH. sw_harq_buf_status:0x%x, ul_h_id:%d, ant_idx:%d, ul_trans_sfn_tti:%d, length_pusch:%d
Line 5667: PUCCH_rach Check %d, %d, 0x%x
Line 5829: ACK&SRI=>ACK[0x%x]Idx[Ant0:%d, 1:%d]SIZE[%d]
Line 5890: PUCCH_TPC=>t_tti:%d, TPC[0]:%d, TPC[1]:%d, TPC[4]:%d, TPC[5]:%d, TPC[6]:%d, TPC[9]:%d
Line 5954: [simul_pucch] PUCCH=>t_tti:%d, fmt:%d, tti_con:0x%x, ack_val:0x%x, rsc_idx:%d, an_cw:%d, ul_sfn:%d
Line 6047: SRI drop=>sri_trans_count:%d, cell_group: %d
Line 6214: ACK&SRI=>ACK[0x%x]Idx[Ant0:%d,1:%d]SIZE[%d] cell_group[%d]
Line 6237: CQI&ACK->Format_2B:ACK[0x%x]AckNum[%d] cell_group[%d]
Line 6302: PUCCH_TPC=>t_tti:%d, TPC[0/1]:%d, TPC[2/3]:%d, TPC[4/5]:%d, TPC[6/7]:%d, TPC[8/9]:%d
Line 6364: PUCCH=>cell_group/t_tti:%d, fmt:%d, tti_con:0x%x, ack_val:0x%x, rsc_idx:%d, an_size:%d, ul_sfn:%d
Line 6384: PUCCH=>cell_group/t_tti:%d, fmt:%d, tti_con:0x%x, ack_val:0x%x, an_size:%d, cqi_size:%d, rsc_idx2:%d
Line 6402: PUCCH=>format: %d, rsc index : %d, empty_on:%d, pucch_alloc(S1/S0):%d, pcc index:%d, ack_val:0x%x, org_ack_val:0x%x, ack_num:%d
Line 7522: IPC: IPC_ACTION_ID_TX_WAKEUP.
Line 10937: A-MPR=> A-MPR:%d, rf_band:%d, start_rb_slot0:%d, ns_val(ori/cvt):%d, ns15_1_en:%d, tx_freq_100khz:%d, ul_cc_idx/ul_bw:%02d
Line 13076: [CalMaxTxPwr] ul_cc_idx:%d, max_pwr_ue_spt:%d, c_max:%d, cd_ofs[non-ulca/ulca]:[%d/%d], boost:%d, max_pwr:%d, TxApi_dpsEnable %d, TxApi_fakePwr %d
Line 13258: (F) LTE Tx Seq Generation is not completed!
Line 13384: DSPTX_GenPseudoSeq. cell_id : %d, ue_id : %d, ul_cc_idx : %d, cell_group : %d, delta_ss : %d
Line 13490: DSPTX_GenPseudoVirtualCell. cell_id[0] : %d, dmrs_setup_r11 : %d, pusch_id : %d, csh_dmrs_id : %d, nPucch_param_r11_setup : %d, pucch_id : %d, ul_cc_idx : %d
Line 13991: (F) UL SIB IPC is received on SCG. but DRDV is not activated. DRDV Status[%d], cell_group[%d]
Line 14072: IPC:UL_SIB!! cell_group: %d, rs_sib.valid:%d, pwr_ctrl_sib.valid:%d, pwr_ctrl_r10_sib.valid:%d, pucch_sib.valid:%d, pusch_sib.valid/srs_sib.valid:%d, pucch_sib.n1_pucch_an:%d
Line 14108: Dedi para ul_pwr_ctrl.valid : 0x%x, pusch.valid : 0x%x, pucch.valid : 0x%x, cell_group : %d
Line 14117: TPC_PUSCH reset : tpc_acc : %d, p0_old : %d, p0_new : %d, cell_group : %d 
Line 14224: copy start msg_pucch.valid = %d
Line 14240: pucch_r10 valid  : %d format3 setup:%d pucch_format4_setup: %d, pucch_format5_setup:%d
Line 14251: copy start pucch_r11.valid = %d
Line 14296: pucch_r13 spatial bundling PUCCH : %d PUSCH:%d, format4 setup: %d, format5 setup: %d, format3 setup: %d, cs setup : %d 
Line 14338: 1370 copy start n3_pucch_an_list_cnt : %d, n3_pucch_an_list_p1_cnt : %d, n3_pucch_an_list[i_list] : %d %d %d %d
Line 14344: 1370 copy start n3_pucch_an_list_p1[i_list] : %d %d %d %d
Line 14435: UL_ERR=> SRI parameter error, sr_Configuration_Index : %d, cell_group 
Line 14479: IPC:UL_SR=>SrValid:%d SrRscIndex:%d, SrConfigIdx:%d, DsrMax:%d, P1valid:%d, rscindexP1:%d, cell_group:%d
Line 14494: UL=> sr_ProhibitTimer : %d, cell_group : %d
Line 14507: UL=> skip_zeropadding_pusch : %d, cell_group : %d
Line 14549: rach_sib : c_i:%d, r_i:%d, z_c:%d, h_f:%d, f_o:%d, cell_group:%d 
Line 14800: IPC:UL_SRS=>[0x%x] ConfigIdx:%d, srs_bandwidth:%d ul_srs_r10.valid:%d, ul_srs_ap_r10.valid:%d, cell_group: %d
Line 14837: ul_srs_req.valid %d, val: %d, cell_group: %d 
Line 14955: TX power time trigger => tx_level_num[%d], Period[%d] power_index0[0x%x] 1[0x%x] 2[0x%x] 3[0x%x] 4[0x%x]
Line 15045: IPC:UL_Common. msg_ul_bw.valid[%d], msg_ul_bw.ul_common_bw[%d], msg_ul_bw.ul_common_cp_type[%d], cell_group/dulplex[%02d]
Line 15078: IPC: SRI ON !!  ipc_sri_on : %d, SRI_INFO_arm.on_cnt : %d, cell_group: %d
Line 15088: DRX&SRI(%d)
Line 15133: [Modify TA] is delayed because Absolute TA is pending for next tti. modify_ta_timer[%d], ul_cc_idx[0]
Line 15175: [Modify TA] Skipped because Absolute TA was applied at last tti only
Line 15188: IPC:UL_TA0[M:%d, V:%d, acc:%d, ta_abs_set_on:%d, cc_bitmap:0x%x]
Line 15206: [Modify TA] is delayed because Absolute TA is pending for next tti. modify_ta_timer[%d], ul_cc_idx[1]
Line 15233: [Modify TA] Skipped because Absolute TA was applied at last tti only
Line 15237: IPC:UL_TA1[M:%d, V:%d, acc:%d, ta_abs_set_on:%d, cc_bitmap:0x%x]
Line 15256: [Modify TA] is delayed because Absolute TA is pending for next tti. modify_ta_timer[%d], ul_cc_idx[%d]
Line 15285: [Modify TA] Skipped because Absolute TA was applied at last tti only
Line 15289: IPC:UL_TA_PScell[M:%d, V:%d, acc:%d, ta_abs_set_on:%d, cc_bitmap:0x%x]
Line 15326: IPC: GAP info[en:%d, patern:%d, offset:%d, cell_group:%d]
Line 15409: IPC: HoTempSfn:%d, cell_id[UL_ANT0][UL_ANT1]:[%d][%d], Ul_ActiveCC:%d, cell_group:%d
Line 15430: IPC: ReleaseSrsCqi : Cell Group[%d]
Line 15485: IPC: ReleaseScellSrs !!  cc_bitmap : 0x%x, cell_group(%d)
Line 15549: IPC: PMax %d, num_cc,cc_idx %d TAS Enb,Status %d 
Line 15567: IPC: PMax %d, num_cc,cc_idx %d TAS Enb,Status %d 
Line 15611: Not applying IPC: PowerEMax[%d], power_c_max[%d], cell_group[%d], cc_idx[dl/ul:%d], ipcFirstCome:%d
Line 15636: IPC: PowerEMax[%d], power_c_max[%d], sarLimit[%d], cell_group[%d], cc_idx[dl/ul:%d], ipcFirstCome:%d, num_cc:%d, ipc_cc_idx:%d
Line 15687: IPC: PowerEMax[ul_cc_idx : %d] : %d, powerClass(ulca/nonUlCa) : %d, max_pwr_ue_support : %d, cd_ofs(PC3/PC2) : %d / %d, ltmSet : %d, cell_group: %d
Line 15695: (W) Invalid max power value [%d]
Line 15726: (f) [UL CA][UL DC] Invalid ul_cc_idx for RACH. cell_group:%d, scell_idx:%d
Line 15788: IPC:Rachinfo rar_t:%d, p_cnt:%d, p_id:%d, cmd:%d, ul_cc_idx:%d, m_id:%d, cell_group/ra_sr:%d
Line 15935: ULP_rec=> ul_tti0(%d), ul_sfn0:%d, han_ta_acc0=%d, ul_tti1(%d), ul_sfn1:%d, han_ta_acc1=%d
Line 16005: IPC: ChangeLTMode : LTM_MODE_ENABLE[SHM] : 0x%x, DSP_LTM_MODE_ENABLE : 0x%x, DSP_AFC_CAL_ENABLE : 0x%x, TX_SCC_MODE : 0x%x, CL_DELAY_CAL_MODE : 0x%x
Line 16696: IPC: IPC_LTM_SET - cell_group(%d)
Line 16701: IPC: LtmSet to Tx disable (ltm_set_enable : %d)
Line 16960: mipi_sm_trigger_delay[%d][%d]
Line 16964: MIPI_CH => PA[0x%x], SM[0x%x], AIT[0x%x]. DELAY => PA_ON[%d], PA_OFF[%d], PA_GAIN[%d], SM_ON[%d], SM_OFF[%d], SPI_ON[%d], SPI_OFF[%d]
Line 16968: MIPI_CH TX1 => PA[0x%x], SM[0x%x], AIT[0x%x]. DELAY => PA_ON[%d], PA_OFF[%d], PA_GAIN[%d], SM_ON[%d], SM_OFF[%d], SPI_ON[%d], SPI_OFF[%d]
Line 16998: IPC: LtmSet %d , tti_con %d, TX0_bw:%d, TX1_bw:%d, ltm_2tx_on:%d, ul_cc_idx:%d
Line 17071: in IPC Tx Freq = %d, shared = %d, tx_path_off_block : %d, ul_cc_idx:%d, cell_group:%d
Line 17099: IPC: GetHWVer   hw_version[0] : %d, hw_version[1] : %d, hw_version[2] : %d
Line 17189: ULP_MSG2=>r_tti:%d, sfn:%d, tti:%d, ul_delay:%d
Line 17216: ULP_MSG2_DLY=>add_s:%d, sfn:%d, sub_f:%d
Line 17704: gain_table_update_flag set. stop_ipc_timer[%d], ul_cc_idx[%d]
Line 17731: [Abnormal TX power] UL_CH[%d], Target_power[%d], PM_val[%d], sfn_tti[%d], ul_cc_idx[%d], stop_ipc_timer[%d]
Line 17742: [Abnormal TX power] UL_CH[%d], Target_power[%d], gpadc_value[%d], sfn_tti[%d], ul_cc_idx[%d], stop_ipc_timer[%d]
Line 17755: IPC: IPC_ACTION_ID_ABNORMAL_PWR
Line 17969: IPC:AIT MIPI[num:%d, [0]:0x%x, [1]:0x%x, [last]:0x%x, X-GND en:%d, type:%d, set_val:0x%x
Line 18042: out of range power : %d
Line 18518: [DSPTX_CheckULSingleLo]. ul_single_lo_scc_idx:%d, dl_cc_idx:%d, slo_cc_idx:%d, dmxr_freq_value:%d
Line 18832: num_ul_cc[MCG]:%d, num_ul_cc[SCG]:%d
Line 19094: Set [Modify TA] for ul_pcc_idx[%d]
Line 19201: [UL CA] DSPTX_SetScell. MIXER_FREQ_OFFSET CC0[0x%x] CC1[0x%x], diff_freqeuency1:%d, diff_freq2:%d, comp_100khz[%d], spl_rate[%d], O_frq:%d, O_frq2:%d single-LO/revers_flag:%02d, dl_cc_idx/rfd_path_idx[%02d]
Line 19232: [UL CA] IPC: DSPTX_GetIpcScell. srs_comm.valid:%d, pusch_comm.valid:%d, pusch_ulrs.valid:%d, prach_scell_setup:%d, pusch.valid:%d, srs.valid:%d, srs_ap.valid:%d
Line 19275: IPC: SCELL_TX_CONFIG Power: %d, cell_group : %d, cc_idx : %d
Line 19353: [UL CA] update Scell_TxComm. prach_comm_setup:%d, peamble_init_power:%d, power_ramp_step:%d, delta_preamble_Msg3:%d, idx:%d
Line 19360: [UL CA] updaete Scell_TxComm. root_seq_index:%d, prach_cfg_index:%d, high_speed_flag:%d, zero_correlation_zone_cfg:%d, prach_freq_offset:%d, tag_id:%d, ref_flag_for_stag:%d
Line 19476: [UL CA] updaete Scell_TxDedi. idx:%d, ul_cc_idx:%d, dl_cc_idx:%d, cell_group:%d, ul_srs_ap_r10_valid:%d, ul_srs_ap_r10_setup:%d, gDb[srs_req_on]:%d
Line 19593: [AS] Backup: ant_sw_en:%d, ant_sw_timer:%d, ant_sw_txpwr_en:%d, accumulated_BO:%d, rsrp_diff[0]:%d, gAntSWStop:%d
Line 19629: UL=>BackupTXdb. TA_ACC[%d, %d], PUCCH_TPC_ACC:%d, PUSCH_TPC_ACC[%d, %d], absolute_init_pwr[%d], tag_id[%03d]
Line 19660: Change Absolute TA value [%d] -> [%d]
Line 19721: [AS] Restore: ant_sw_en:%d, ant_sw_timer:%d, ant_sw_txpwr_en:%d, accumulated_BO:%d, rsrp_diff[0]:%d, gAntSWStop:%d
Line 19753: UL=>RestoreTXdb. TA_ACC[%d, %d], PUCCH_TPC_ACC:%d, PUSCH_TPC_ACC[%d, %d], tx_freq_100khz[%d], tag_id[%03d]
Line 19775: IPC: TXBackupCommand
Line 20015: PUCCH_TPC_CAL=>pucch_tpc_sum:%d, tpc_acc_pucch:%d, cell_group %d
Line 20089: ULP_MCW_UL_Mutex=> wait_cnt[%d], id[%d], set_enable[%d]
Line 20272: Init TX. rf_board_type:0x%x, ul_user_mpr_en:0x%x, mipi_FEMSIF_ch:0x%x, mipi_SM_ch:0x%x, mc_apt_only_en:0x%x, mipi_ait_ch:%d
Line 20323: enable stack1 %d Variable %d
Line 20329: enable stack2 %d Variable %d
Line 20403: IPC:IPC_ACTION_ID_LTE_DSP_UL_INIT. core_idx(CC0/1)[%d/%d], mod_idx(CC0/1)[%d/%d], txf_idx(CC0/1)[%d/%d], slca_idx(CC0/1)[%d/%d], txPath_idx(CC0/1)[%d/%d]
Line 20566: IPC TX Power Time Report => 0[%X] 1[%X] 2[%X] 3[%X] 4[%X]
Line 20638: IPC:TX_SWAP=> [TSIC] mode:%d, compress_en:%d
Line 20648: IPC:TX_SWAP=> swap_tx_path:0x%x, cell_group[%d]
Line 20709: [LTM][PowerClass decision] LTM_MODE : %d, gainShift : %d, PC : %d
Line 20726: Set TX_SWAP=> swap_tx_path:0x%x, rfic_tx_path_off[1/0]:0x%02x, cell_group[%d], ul_cc_cell_group[%d][%d]
Line 20769: IPC:TX_BLOCK - cause : %d
Line 20797: IPC:TX_BLOCK_DONE - cause : %d, txStatus : %d
Line 20837: IPC:IPC_TX_DB_UPDATE_NOTI - START : dbMask0x%x cell_group0x%x
Line 20849: IPC:IPC_TX_DB_UPDATE_NOTI : swap_tx_path[0x%x] LTECOMMON_CA_get_NumUlActiveCC[%d]
Line 20858: IPC:IPC_TX_DB_UPDATE_NOTI : ul_cc_idx[%d] mipi_SM_ch[%d] et_dac_idx[%d]
Line 20880: IPC:IPC_TX_DB_UPDATE_NOTI - updateMask : 0x%x
Line 20922: DSPTX_Gnss_GeneratePaenSig_Init. TICKGEN_MAIN_CTL[0x%x], TICKGEN_TX0_MAIN_CTL[0x%x], RF_MUX_CTL_GPS_STATE_RD(4th bit)[0x%x]
Line 21185: DSPTX_Gnss_GeneratePaenSig_Control. cp_type[%d], gnss_ctrl_en_ttim[%d], reg_ul_tti_config[0x%x], gnss_tick_cnt[0x%x][0x%x][0x%x][0x%x]
Line 21221: DSPTX_Gnss_GeneratePaenSig_SWmode. gps_pa_en[%d], RF_MUX_CTL_GPS_SEL[0x%x], RFD_GNSS_CTRL[0x%x]
Line 21281: DSPTX_Gnss_GeneratePaenSig_HWmode. RF_MUX_CTL_GPS_SEL[0x%x], TICKGEN_MAIN_CTL[0x%x], TICKGEN_TX0_MAIN_CTL[0x%x], ON0_CNT[0x%x], OFF0_CNT[0x%x], ON1_CNT[0x%x], OFF1_CNT[0x%x], RF_MUX_CTL_GPS_STATE_RD(4th bit)[0x%x]
Line 21333: [TAS_report] ul_reg_index : %d, numUlActiveCell : %d, txPowSumDbm : [%d / %d], txPowSum : [%d / %d]
Line 21338: [TAS_report] pointer : %d, dump :[%d, %d, %d, %d, %d]
Line 21892: [PowerClass] ulca_onoff : %d, powerClass : %d, max_pwr_ue_support : %d, non_ulCa_p_e_max : %d, p_e_max_scell : %d
Line 22046: S5520 [MARCONI_UL] LINK_INTR_STATUS[0x%x], FILT_STATUS_CH1~2[0x%x][0x%x], LINK_CH_INTR_STATUS[0x%x], EOT_ERROR_COUNT/CRC_ERROR_COUNT[0x%x], LINK_FILT_CH2_CONFIG[0x%x], VALID_MASK[%d], FIFO_EN/UL_VALID/DVALID/Valid(CC0/1)[0x%x][0x%x]
Line 22082: [RFD_MCMU] SW_RESETn0[0x%x], SW_RESETn1[0x%x], SW_RESETn2[0x%x], SW_CLK_ON0[0x%x], SW_CLK_ON1[0x%x], SW_CLK_ON2[0x%x], DYN_CLK_ON_EN0[0x%x], DYN_CLK_ON_EN1[0x%x], DYN_CLK_ON_EN2[0x%x], CLK_DIV_EN[0x%x]
Line 22092: [RFD_TXFilter] RFD_TXF_EN0[0x%x], RFD_TXF_SW_RESETN0[0x%x], RFD_TXF_SW_RESETN1[0x%x], RFD_TXF_SW_RESETN2[0x%x], RFD_TXF_SW_CLK_ON0[0x%x], RFD_TXF_SW_CLK_ON1[0x%x], RFD_TXF_SW_CLK_ON2[0x%x], RFD_TXF_DYN_CLK_ON_EN0[0x%x], RFD_TXF_DYN_CLK_ON_EN1[0x%x], RFD_TXF_DYN_CLK_ON_EN2[0x%x]
Line 22104: [RFD_TXFilter] RFD_CC0_TXF_CFG[0x%x], RFD_CC0_INTP_ON[0x%x], RFD_CC0_SLO_IN_REF_TIME[0x%x], RFD_CC0_SLO_MIXER_ON[0x%x], RFD_CC0_SLO_MIXER_RESET[0x%x], RFD_CC0_SLO_MIXER_FREQ_OFFSET[0x%x], RFD_CC0_SLO_MIXER_PHASE_OFFSET[0x%x], RFD_CC0_SLO_MIXER_UPDATE_VAL[0x%x], RFD_CC0_SLO_MIXER_DGAIN[0x%x], RFD_TXF_CLK_EN[0x%x]
Line 22117: [RFD_TXFilter] RFD_UL0_FRONT_CFG[0x%x], RFD_UL0_SLO_OUT[0x%x], RFD_UL0_CFR_CLIPPING_LIMT[0x%x], RFD_UL0_CFR[0x%x], RFD_UL0_CFR_UPDATE_VAL[0x%x], RFD_UL0_DPD_MODE[0x%x], RFD_UL0_DPD_SEL[0x%x], RFD_UL0_DPD_AMAM_GAIN[0x%x], RFD_UL0_DPD_UPDATE_VAL[0x%x], RFD_UL0_DMIXER_FREQ_OFFSET[0x%x]
Line 22130: [RFD_TXFilter] RFD_UL0_TX_CAL_UPDATE[0x%x], RFD_UL0_TX_IQC_A[0x%x], RFD_UL0_TX_IQ_MIS[0x%x], RFD_UL0_TX_DC_OFS[0x%x], RFD_ET0_IN_SEL[0x%x], RFD_ET0_SF[0x%x], RFD_ET0_SF_GAIN[0x%x], RFD_ET0_ADD_OFFSET[0x%x], RFD_UL0_DAC_CFG[0x%x], RFD_ET0_DAC_CFG[0x%x]
Line 22142: [RFD_TXFilter] RFD_TXF_MPR_EN[0x%x], RFD_TXF_MPR_CFG[0x%x], RFD_TXF_MPR_LEN[0x%x], RFD_TXF_MPR_DELAY_VAL[0x%x], RFD_TXF_OUT_SWAP[0x%x], RFD_TXF_DVALID_CLK0[0x%x], RFD_TXF_DVALID_CLK1[0x%x], RFD_LINK_CTRL[0x%x], RFD_RX_F_MARCONI_LINK_FILT_CH1_CONFIG[0x%x]
Line 22154: [RFD_DAC] RFD_DAC0_CTL[0x%x], RFD_DAC0_DIGI_IN[0x%x], RFD_DAC0_CM_CTRL[0x%x], RFD_DAC0_I_CTRL[0x%x], RFD_DAC0_Q_CTRL[0x%x], RFD_ETDAC0_CTL[0x%x], RFD_ETDAC0_DIGI_IN[0x%x], RFD_ETDAC0_CM_CTRL[0x%x], RFD_ETDAC0_CTRL[0x%x]
Line 22164: [TXFilter] TXF_LTE_WINDOW_MEM_ON[0x%x], UL_DIF_OUT_EN[0x%x], UL_TXF_CLK_REG_SLICE_OV[0x%x], UL_FILT_OUT_SEL[0x%x], UL0_VALID_CLK[0x%x], MCW_CTRLS_0_UL_FIFO_EN_0[0x%x], MCW_CTRLS_0_UL_VALID_0[0x%x]
Line 22172: [TXFilter] UL_TXF_CLK_FREE_CTRL[0x%x], TXF_MPR_EN[0x%x], TXF_MPR_CFG[0x%x], TXF_MPR_DELAY_VAL[0x%x], TXF_MPR_LEN[0x%x]
Line 22193: [TXSymProc] SP_CC_ENABLE[0x%x], SP_STATE_MON[0x%x], TTI_4GNR_CMDx_BUFINFO0/1[0x%x][0x%x], TX_SYMBPROC_LMACIF_3G_MODE_ENABLE[0x%x], TX_SYMBPROC_LMACIF_OUT_ENDIAN[0x%x], LMAC_SM_CTRL_STATE_4G[0x%x]
Line 22215: [Infra_Gen_FRONT_TX_M] MODEM_SEL[0x%x], SW_RESETN0/1[0x%x][0x%x], SW_CLK_ON0/1[0x%x][0x%x], DYN_CLK_ON_EN0/1[0x%x][0x%x]
Line 22674: (w) IPC: IPC_IDLE_DTX - ipc comes abnormal dl_cc_idx:%d, dtx_on_off:%d,
Line 22692: (w) IPC: IPC_IDLE_DTX - idle_dtx on already set. dl_cc_idx:%d, dtx_on_off:%d
Line 22716: IPC: IPC_IDLE_DTX - ul_cc_idx : %d, dl_cc_idx : %d, IPC_IDLE_DTX : %d, idle_dtx_status : %d
Line 22748: IDLE_DTX on - ul_cc_idx : %d, dl_cc_idx : %d, IPC_IDLE_DTX : %d, idle_dtx_status : %d
Line 22768: DSPTX_Trigger_forced_orderd_rach. trigger_type[%d]
Line 22825: REMOVE 'BLOCK RELATIVE TA'. rf_band[%d], cell_id[%d], str_accum[%d]
Line 22829: BLOCK RELATIVE TA. rf_band[%d], cell_id[%d]
Line 22911: [RF-CTRL][DSPTX_StoreShm2Global_rfdelay][ul_cc_idx %d] DELAY => PA_ON[%d], PA_OFF[%d], PA_GAIN[%d], SM_ON[%d], SM_OFF[%d], SM_GAIN[%d], SPI_ON[%d], SPI_OFF[%d]
Line 23039: IPC: IPC_BLOCK_TRX_SW - cell_group : %d, pcell_idx : %d, ul_active_num : %d
Line 23075: [LTE rffeOffset] ul_cc_idx : %d, rffeOffset : %d, pcell_ant_status : %d, scell_ant_status : %d, SLO_en : %d
Line 23295: [TSIC][GetInfo][TSIC_CFG_TXF_ONOFF] TsicLteTxfFlag : %d, TxfNum : %d, SmallRbSize : %d, PwrThreshold :%d, DmrsSymCtrlFlag : %d
Line 23299: [TSIC][GetInfo] Wrong IPC SetBit %d
Line 23429: [UL_DVFS] DVFS mode reset
Line 23440: [UL_DVFS] DVFS mode Off, ul_active_num:0x%x
Line 23456: [UL_DVFS] DVFS mode Off, PUSCH rb size:0x%x
Line 23472: [UL_DVFS] DVFS mode Off, SRS0 rb size:0x%x
Line 23488: [UL_DVFS] DVFS mode Off, SRS1 rb size:0x%x
Line 23503: [UL_DVFS] DVFS mode On
Line 23515: IPC TX API Initialise: %d
Line 23550: TXAPI Parameters update in PHY=> Band(%d), ulFreq(%d), bw(%d), nsVal(%d), pCMax(%d), rbSize(%d), rbOffset(%d), mcs(%d)
Line 23560: TXAPI Parameters from L1/SHM => Band(%d), ulFreq(%d), bw(%d), nsVal(%d), pCMax(%d), rbSize(%d), rbOffset(%d), mcs(%d)
Line 23596: IPC: IPC_LTE_TXPC_API_CNF => maxpower[%d], ampr[%d], mpr[%d], modorder[%d], cd_ofs[%d]
Line 23598: [TXAPI][CNF] Band(%d), ulFreq(%d), bw(%d), nsVal(%d), pCMax(%d), rbSize(%d), rbOffset(%d), modOrder(%d)
Line 3393: RACH triggered CellGrIdx: %d
Line 3466: DSPTX_ULP_ISR_LTM_OPERATION ltm_duty_cycle_enabled %d, ltm_duty_cycle_on_time %d, ltm_duty_cycle_sleep_time %d, tx_on_dur %d, tx_sleep_dur %d
Line 16135: TDD pusch_trans=> rb_size:%d, trans_tti:%d, duplex:%d sf_assign:%d, ul_dl :%d
Line 16196: WARNING REMOVAL TRACE : %d
Line 16197: WARNING REMOVAL TRACE : %d
Line 16236: LTM_PUSCH=> ltm_ch:%d, rb_size:%d, start_rb:%d, mcs:%d(1:QPSK, 2:16QAM), ul_bw:%d, ant_sel:%d, ltm_pwr_set_enable:%d
Line 16278: LTM_PRACH=> config_index:%d, offset:%d, ul_bw:%d
Line 16367: UL_LTM=> final_pwr:%d, rcv_pwr:%d, mpr_v:%d, max_power:%d
Line 16457: TDD pusch_trans=> rb_size:%d, trans_tti:%d, duplex:%d sf_assign:%d, ul_dl :%d
Line 16527: LTM_PUSCH=> ltm_ch:%d, rb_size:%d, start_rb:%d, mcs:%d(1:QPSK, 2:16QAM), ul_bw:%d, ant_sel:%d, ltm_pwr_set_enable:%d, pcell_uci_en:%d
Line 6646: ###[AS] RSRP[%d %d] offset[%d %d], Pwr(2),Meas_timer(3),skip_cnt(3) %d Pm_T1(3)Pm_T0(3) %d
Line 6655: ###[AS] C[TX]:%d %d C[RX]:%d %d H:%d %d TAS_enb,txpwr_en(%d)
Line 6682: [AS] D Higher Max Value, index(%d,%d) TxAnt %d ant_index %d rsrp %d index %d pmax %d C %d
Line 6696: [AS] Selected Max Value, index(%d,%d) TxAnt%d H %d
Line 6717: [AS] FET %d index(%d,%d) Enb %d
Line 6752: [AS] set_min %d, TAS_en,status %d %d ant_rsrp_en,selected %d %d cur_rxMode 0x%0x
Line 6766: [AS] FET %d index(%d,%d) Enb %d
Line 6791: [AS] Ant switching [Hard_AS Done]. TAS_status:%02d, tx_pwr:%d, txpwr_th[%d, %d], rsrp_diff:[%d, %d, %d, %d], rsrp_th[%d, %d]
Line 6798: [AS] Ant switching [Done]. TAS_status:%02d, tx_pwr:%d, txpwr_th[%d, %d], rsrp_diff:[%d, %d, %d, %d], rsrp_th[%d, %d]
Line 6823: [AS] Ant switching [Hard_AS Waiting]. <FORCED UL REMOVE!!> TAS_status:%d, tx_pwr:%d, txpwr_th[%d, %d], rsrp_diff:[%d, %d, %d, %d], hard_ant_sw_timer:%d, TAS_HardSw_Time:%d
Line 6830: [AS] Ant switching [Hard_AS Waiting]. TAS_status:%d, tx_pwr:%d, txpwr_th[%d, %d], rsrp_diff:[%d, %d, %d, %d], hard_ant_sw_timer:%d, TAS_HardSw_Time:%d
Line 6840: [AS] Ant switching [Hard_AS Checking]. TAS_status:%d, tx_pwr:%d, txpwr_th[%d, %d], rsrp_diff:[%d, %d, %d, %d], hard_ant_sw_timer:%d, TAS_HardSw_Time:%d
Line 6850: [AS] Ant switching [Waiting]. TAS_status:%d, tx_pwr:%d, txpwr_th[%d, %d], rsrp_diff:[%d, %d, %d, %d], rsrp_th[%d, %d]
Line 6863: [AS] Ant switching [N/A]. TAS_status:%d, tx_pwr:%d, txpwr_th[%d, %d], rsrp_diff:[%d, %d, %d, %d], rsrp_th[%d, %d]
Line 7002: [AIT_4x4MIMO] average pusch power(%d)
Line 13732: After init, No Absolute TA. Set forced Absolute TA. TA_Val[%d]
Line 13801: UL_TA=> TA_mode[%d], TA_val[%d], REG_TA_acc0~1[0x%x][0x%x], han_ta_acc[%d], ul_cc_idx[%d]
Line 13653: [Modify TA] Change Small TA value. ta_val[%d], ul_dl_timing_diff[%d], ul_rtg_cnt[0x%x], dl_rtg_cnt[0x%x], err_correct_drx[%d], modi_relative_ta_val[%d], ul_cc_idx[%d]
Line 13661: (W) [Modify TA] Out of small TA value range => Set Big TA. modi_relative_ta_val[%d], ul_dl_timing_diff[%d], ul_rtg_cnt[0x%x], dl_rtg_cnt[0x%x], ul_cc_idx[%d]
Line 13686: [RFD_Modify TA] Change Small TA value. ta_val[%d], ul_dl_timing_diff[%d], ul_rtg_cnt[0x%x], dl_rtg_cnt[0x%x], err_correct_drx[%d], modi_relative_ta_val[%d], ul_cc_idx[%d]
Line 13696: (W) [RFD_Modify TA] Out of small TA value range => Set Big TA. modi_relative_ta_val[%d], ul_dl_timing_diff[%d], ul_rtg_cnt[0x%x], dl_rtg_cnt[0x%x], ul_cc_idx[%d]
Line 13876: UL_STR=> err_corr[Ts]:%d, str_val:%d, str_accum[Ts]:%d, ul_sfn:%d, rx_cnt:%d, tx_cnt:%d, ul_cc_idx:%d
Line 13890: UL_STR=> [for MIMO, PUCCH diversity, SRS 2ports]. err_corr[Ts]:%d
Line 13904: UL_STR=> [for same TAG]. err_corr[Ts]:%d. ref_cell_ul_cc_idx:%d, set_ul_cc_idx:%d, tag_id:%d
Line 3530: IPC: IPC_ACTION_ID_RF_DUMP.
Line 3677: Re-init TX channel, absolute TA[%d] for DSDS.
Line 3687: Re-init TX channel, No absolute TA because absolute TA is ready
Line 4196: UL_TTI Mismatch!!! (UL_TTI:%d, DL_TTI:%d, ul_cc_idx:%d, cell_group:%d)
Line 4172: TX path is changed. Set tx_path_off flag. ul_cc_idx[%d]
Line 4779: UL=>DL/UL timing diff is negative, TA set zero : ul_cc_idx:%d, DL/UL RTG:0x%x
Line 7319: GAP UL remove, cell_group[%d]
Line 7333: Measurement GAP UL0 remove, flag:%d, cell_group:%d
Line 7346: Measurement GAP UL1 remove, flag:%d, cell_group:%d
Line 7354: TX Block UL remove, timer:%d, cell_group:%d
Line 7362: TX_SWAP_IPC is not received yet. UL remove. cell_group[%d]
Line 8415: [DPS] tx_ch : %d, nrOnStatus : %d, pwr_val : %d, ulDigitalGainCompInfo : %d, ulSarReportPDec : %d, non_ulCa_p_e_max : %d, rffeOffset : %d
Line 8435: IPC not sended stack1 valid:%d NR PCell CPU coreId:%d Pcell bitmap:0x%x stack2 valid:%d NR PCell CPU coreId:%d Pcell bitmap:0x%x
Line 8565: UL_PWR=>pwr:%d, tx_analog_gain:0x%x, ifft(/srs):0x%x, ul_cc_idx/pa gain(/srs):0x%x, rffe_offset:%d, rboff_comp_val:%d, pwr_detect_comp_val/Pcell_ant/scell_ant:%d, tx_gain_table_comp_val:%d, tx_gain_table_srs_comp_val:%d, addComp:%d
Line 7858: [PowerClass] et_en : %d, pwr_val : %d, pwr_indx : %d, srs_pwr_val : %d, srs_pwr_idx : %d, shift_gain_idx : %d, sum_comp_val: %d
Line 7874: DPD APT gain config => pwr_val: %d, sum_comp_val: %d, rffe_offset_dec: %d, total_TxPwr: %d, pwr_val_roundoff: %d, decimalOffset: %d, pwr_index_apt: %d, shift_gain_idx: %d 
Line 7902: DPD/ET=> et_en:%d, pwr_idx:%d, sum_comp_val(x10):%d, srs_et_en:%d, srs_pwr_idx:%d, srs_on:%d etIdxShift:%d, et_sapt_active: %d
Line 8016: [DPD][ET] sum_comp_val: %d, cfr_clipping_limit : 0x%x, RFD_REG_DPD_AMAM_GAIN [input 0x%x]/[Output 0x%x], RFD_REG_DPD_SEL : %d, RFD_REG_ET_SF_GAIN[input 0x%x]/[Output 0x%x], RFD_REG_ET_SF:0x%x
Line 8066: [DPD][APT] sum_comp_val[%d], mod_val[%d], setting_apt_cfr_clipping_limit[0x%x], apt_cfr_clipping_limit0~3[0x%x][0x%x][0x%x][0x%x]
Line 21625: [ET_DELAY] lpm_status : %d, final_delay : 0x%x
Line 12666: ca_ns_val:%d, rf_band:%d, Tx_pcc_scc:%d, max_pwr:%d, p_e_max_c:%d, mpr/a_mpr:%d, ca_user_mpr:%d, ul_ca_nctg_user_ampr_en:%d, rb1_rb1/mod_val/simul/revers/ctg_rb_alloc/nctg_flag:0x%x
Line 12787: Abnormal BW configuration. CA BW Class can not be A! (CC0/CC1 : %d/%d)
Line 12540: large_a has abnormal value. large_n_rb_alloc:%d, large_n_rb_agg:%d
Line 12614: large_a has abnormal value. large_n_rb_alloc:%d, large_n_rb_agg:%d
Line 14677: UL(F)=> Wrong srs_Configuration_Index : %d 
Line 14682: srs_periodicity:%d, srs_sub_offset:%d, ul_cc_idx:%d
Line 14761: UL(F)=> Wrong ap_srs_Configuration_Index : %d 
Line 20434: Data move dl_cc_idx:%d, tti:0x%x,_tti:0x%x, dl_ack_info:0x%x, dl_ack_info_next : %d
Line 17923: AIT=> Enable:%d, status:%d, ait_cnt:%d, pwr_threshold:%d, interval:%d, max_dump_num:%d, ait_end:%d pm_status:%d
Line 18450: Reduce PUSCH power : limit_pwr:[%d => %d], UL_ANT0[%d => %d => %d], UL_ANT1[%d => %d => %d]
Line 18492: Reduce SRS power   UL_ANT0[%d => %d], UL_ANT1[%d => %d], max_linear_val:%d, total_linear_val:%d
Line 18560: Single LO=> Scell TX[0x%x] is dropped because of Pcell PRACH
Line 18675: Single LO=> total_pwr:%d, single_lo_digital_gain_comp[0x%x, 0x%x], total_last_sym_pwr:%d, single_lo_last_sym_digital_gain_comp[0x%x, 0x%x]
Line 18765: Out of range!! gain_atten_val:%d
Line 19919: final_ul_64qam_enable:%d, enable_64_Qam:%d, enable_64_Qam_r12:%d, UECategory:%d, UECategory_UL:%d, UECategory_DL:%d, ul_cc_idx:%d
Line 19972: final_ul_256qam_enable:%d, enable_256_Qam_r14:%d, UECategory:%d, UECategory_UL:%d, UECategory_DL:%d, ul_cc_idx:%d
Line 21858: [PowerClass] activeCcNum : %d, powerClass : %d, p_e_max : %d, DSP_LTM_MODE_ENABLE : %d, max_pwr_ue_support : %d
Line 22228: (f) ul_cc_idx(%d) is INVALID
Line 23015: [RF-CTRL][DSPTX_StoreShm2Global] getType[%d], ant_idx[%d], shm_idx[%d], NumUlActiveCC[%d], mipi_sm_trigger_delay[%d], txgain_mem_addr[%d], txCtl_mem_base_addr[%d], txCtl_src_mem_size[%d], txCtl_src_onOff[%d]
Line 23018: [RF-CTRL][DSPTX_StoreShm2Global][TX0] MIPI_CH => PA[0x%x], SM[0x%x]. [TX1][active %d] MIPI_CH => PA[0x%x], SM[0x%x]
Line 23403: [TSIC] tsicEn : %d, ul_reg_index : %d, cur_tsicStatus : %d, cbFlag : 0x%x, RB[%d], PWR[CCH:%d / SCH:%d], txfNum:%d, tsic_out_ctrl:0x%x, tti_config:0x%x
