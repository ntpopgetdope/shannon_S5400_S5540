Line 190: TX_SWAP_IPC is not received yet. DSPTX_ULP_ISR_RF_Ctrl skip.
Line 213: (w) RF control disabled. ul_cc_idx : %d, idle_dtx_flag : %d
Line 249: pa_en_reg[0x%x][0x%x][0x%x][0x%x], pa_en_pwr_reg[0x%x][0x%x], pacdac_value[0x%x], sm_mode[0x%x]
Line 515: UL_PWR2=> pwr:%d, shift_gain_idx: %d, analog_pwr_idx: %d, TX_SPI[]:0x%x, comp_pwrx10:%d, et_en:%d, srs_on:%d, ul_cc_idx:%d
Line 603: [TX on]. TX_on_SPI[0x%x][0x%x][0x%x][0x%x][0x%x], hispd_tx_path_on_addr[0x%x][0x%x][0x%x], direct_spi_word_num[%d], ul_cc_idx[%d]
Line 853: [TX off]. tx_off_spi[0x%x][0x%x][0x%x][0x%x][0x%x], hispd_tx_path_addr[0x%x][0x%x][0x%x], direct_spi_word_num[%d], ul_cc_idx[%d]
Line 1030: (W) DSPTX_WriteSwMemMipi invalid num, mipiNum:%d ch:%d, word:0x%X
Line 1050: (W) DSPTX_WriteSwMemMipi Write fail! ch:%d, word:0x%X
Line 1159: DSPTX_WriteSwMipi: buffer_check(0x%x), buffer_check_cnt : %d
Line 1227: (Warning-RFCTRL) Mipi Read fail#0, mipiCh:%d
Line 1246: (Warning-RFCTRL) Mipi Read fail#1, mipiCh:%d
Line 1321: DSPTX_SetIratMeasureFlag[%d]
Line 1905: ULP status is released => return DSPTX_BlockRfTickSet
Line 1923: DSPTX_Block_Tick. tx_idx[%d]
Line 1947: LTE IRAT MEASURE => return DSPTX_SetTxOff
Line 1953: ULP status is released => return DSPTX_BlockRfTickSet
Line 2032: DSPTX_SetTxOff. RFD_TXF_EN[0x%x], DVALID/Valid(UL0/UL1)[0x%x][0x%x], MCW_CTRLS_0_UL_FIFO_EN_x(UL0/UL1)[0x%x][0x%x], MCW_CTRLS_0_UL_VALID_x(UL0/UL1)[0x%x][0x%x], rfd_init_flag[%d], noReset[%d]
Line 2132: [RF-CTRL][Rf_Debug_Log] sm_off_tr_num/sm_on_tr_num/pa_off_tr_num/pa_on_tr_num[%04d], pa_on_skip_tr_num/pa_off_skip_tr_num[%02d], sm_off_mipi_word[0x%x][0x%x][0x%x][0x%x][0x%x], sm_on_mipi_trig_en/sm_off_mipi_trig_en[%02d], tr_num_set3_cmd[%d], sm_mipi_trig_null_word_num[%d]
Line 2157: [RF-CTRL][Rf_Debug_Log] pa_off_tr_num/sm_off_tr_num/sm_on_tr_num/pa_on_tr_num[%04d], pa_on_skip_tr_num/pa_off_skip_tr_num[%02d], pa_off_mipi_word[0x%x][0x%x][0x%x][0x%x][0x%x], sm_on_mipi_trig_en/sm_off_mipi_trig_en[%02d], tr_num_set3_cmd[%d]
Line 2192: (W)[RF-CTRL] txCtl_src_mem_size and txCtl_src_onOff is '0'
Line 2260: [RF-CTRL][DSPTX_Set_Tx_Ctl_Arbit_Sel_Ctl] PA_CH/SM_CH/MIPI_CH/ul_cc_idx[%04d], tr_num_set[%04d], RFD_RFCTRL_MIPI_RFFE_TX_CTL_ARBIT_SEL0_CTL0[0x%x][0x%x][0x%x][0x%x], RFD_RFCTRL_MIPI_RFFE_TX_CTL_ARBIT_SEL0_CTL1[0x%x][0x%x][0x%x][0x%x]
Line 2272: [RF-CTRL][DSPTX_Set_Tx_Ctl_Arbit_Sel_Ctl] PA_CH/SM_CH/MIPI_CH/ul_cc_idx[%04d], tr_num_set[%04d], RFD_RFCTRL_MIPI_RFFE_TX_CTL_ARBIT_SEL0_CTL0[0x%x][0x%x][0x%x][0x%x], RFD_RFCTRL_MIPI_RFFE_TX_CTL_ARBIT_SEL0_CTL1[0x%x][0x%x][0x%x][0x%x]
Line 2379: (W)[RF-CTRL][DSPTX_Set_MIPI_Reg]. Remove_TtiConfig because MIPI is not set. cmd[%d], mipi_ch[%d], mipi_num[%d], trnum_set_sel[%d], TickCnt[%d], point_idx[%d], skip_tr_num[%d], cell_group[%d], ul_cc_idx[%d]
Line 2467: (W)[RF-CTRL][DSPTX_Store_MipiBuffer]. buf_idx[%d], cmd[%d], mipi_ch[%d], point_idx[%d], sample_cnt[%d], cell_group[%d], ul_cc_idx[%d]
Line 3225: [RF-CTRL][Rf_Debug_Log] idx[%d], FR1_HISPD_MASK_ENABLE_0/1/4[0x%x][0x%x][0x%x], FR1_HISPD0_ARB_ENABLE0/1[0x%x][0x%x], TICKGEN_TX_MAIN_CTL[0x%x][0x%x]
Line 3233: [RF-CTRL][Rf_Debug_Log] TICKGEN_TX_HISPD_CNT_P0~P2 => UL%d [0x%x][0x%x][0x%x], num_word_pa_dis_reg[%d], pa_dis_reg[0x%x], num_sm_mipi_off_word[%d], sm_ctrl_enable[%d], RF_PATH_SEL/RFD_RF_PATH_SEL[%02d]
Line 3243: [RF-CTRL][Rf_Debug_Log][MipiFrontEn] RFD_RFCTRL_MIPI_RFFE_TX_CTL_ARBIT_SEL0_CTL0[0x%x][0x%x][0x%x][0x%x], RFD_RFCTRL_MIPI_RFFE_TX_CTL_ARBIT_SEL0_CTL1[0x%x][0x%x][0x%x][0x%x], RFD_RFCTRL_TICKGEN_TX_MAIN_CTL[0x%x][0x%x]
Line 3250: [RF-CTRL][Rf_Debug_Log][MipiFrontEn] RFD_RFCTRL_TICKGEN_TX_P0~P5[0x%x][0x%x][0x%x][0x%x][0x%x][0x%x], RFD_RFCTRL_TICKGEN_TX_CTL_RD[0x%x], PA_CH[0x%x], SM_CH[0x%x]
Line 3255: [RF-CTRL][Rf_Debug_Log][MipiFrontEn] pa_en_reg[0x%x][0x%x][0x%x][0x%x], pa_en_pwr_reg[0x%x][0x%x], pacdac_value[0x%x], sm_mode[0x%x], ul_cc_idx[%d], RFD_RFCTRL_TICKGEN_TX_MASK_ENABLE[0x%x]
Line 3259: [RF-CTRL][Rf_Debug_Log][MipiFrontEn] log_sm_on_mipi_word[0x%x][0x%x][0x%x][0x%x][0x%x], log_sm_off_mipi_word[0x%x][0x%x][0x%x][0x%x][0x%x]
Line 3269: [RF-CTRL][Rf_Debug_Log] RFD_RFCTRL_MIPI_RFFE_TX_CTL_ARBIT_SEL0_CTL0[0x%x][0x%x][0x%x][0x%x], RFD_RFCTRL_MIPI_RFFE_TX_CTL_ARBIT_SEL0_CTL1[0x%x][0x%x][0x%x][0x%x], RFD_RFCTRL_TICKGEN_TX_MAIN_CTL[0x%x][0x%x]
Line 3276: [RF-CTRL][Rf_Debug_Log] RFD_RFCTRL_TICKGEN_TX_P0~P5[0x%x][0x%x][0x%x][0x%x][0x%x][0x%x], RFD_RFCTRL_TICKGEN_TX_CTL_RD[0x%x], PA_CH[0x%x], SM_CH[0x%x]
Line 3281: [RF-CTRL][Rf_Debug_Log] pa_en_reg[0x%x][0x%x][0x%x][0x%x], pa_en_pwr_reg[0x%x][0x%x], pacdac_value[0x%x], sm_mode[0x%x], ul_cc_idx[%d], RFD_RFCTRL_TICKGEN_TX_MASK_ENABLE[0x%x]
Line 3285: [RF-CTRL][Rf_Debug_Log] log_sm_on_mipi_word[0x%x][0x%x][0x%x][0x%x][0x%x], log_sm_off_mipi_word[0x%x][0x%x][0x%x][0x%x][0x%x]
