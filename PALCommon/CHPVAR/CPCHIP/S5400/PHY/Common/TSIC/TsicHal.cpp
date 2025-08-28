Line 79: ###[TSIC][KER] ReleaseKernelGen:: swresetn_tsic_kergen245_funcclk(%d) swresetn_tsic_kergen491_funcclk(%d)
Line 113: ###[TSIC][RLS] ReleaseRls:: swresetn_tsic_rls_funcclk(%d) swresetn_tsic_rls_core_funcclk(%d)
Line 153: ###[TSIC][KER] ReleaseSync::
Line 384: ###[TSIC][KER] ConfigKernelGen:: up_spl_lvl(%d, %d) ul_valid_clk(0x%x) ker_gen_dcm_on(%d) vsm_symbol_bitmap(%d, %d) start_mode(%d)
Line 675: ###[TSIC][RLS] ConfigRls:: victim_bw(%d) rx_path(%d)
Line 754: ###[TSIC][SYNC] ConfigSync:: tsic_sync_max_wait_sample(%d) tsic_sync_start_mode(%d) is_time_corr(%d) tsic_sync_ker_data_bit_sel(0x%x) tsic_sync_corr_data_bit_sel(0x%x) rx_path(%d)
Line 913: ###[TSIC][RSLT] SetIcOnOff:: rx#_rls_ic_out_mux(%d,%d,%d,%d)
Line 932: ###[TSIC][MON] MonitorKernel:: ker_gen_general_cnt_read(%d) ker_gen_start_min_position(%d)
Line 955: ###[TSIC][MON] MonitorRls:: rfd_txf_en0(0x%x) rfd_txf_en1(0x%x) ul_user_ch_valid_clk_en(%d) rls_rmat_read_sel(0x%x)
Line 969: ###[TSIC][MON] MonitorRls:: ul0_valid_clk_sel(%d) ul1_valid_clk_sel(%d) ul2_valid_clk_sel(%d) ul3_valid_clk_sel(%d) ul4_valid_clk_sel(%d) ul5_valid_clk_sel(%d)
Line 971: ###[TSIC][MON] MonitorRls:: ul0_valid_clk_en(%d) ul1_valid_clk_en(%d) ul2_valid_clk_en(%d) ul3_valid_clk_en(%d) ul4_valid_clk_en(%d) ul5_valid_clk_en(%d)
Line 1003: ###[TSIC][MON] MonitorRls::(weigt_i/q) wgt0(0x%x) wgt1(0x%x) wgt2(0x%x) wgt3(0x%x) wgt4(0x%x) wgt5(0x%x)
Line 1035: ###[TSIC][MON] MonitorRls::(rmat_i/q) rmat0(0x%x) rmat1(0x%x) rmat2(0x%x) rmat3(0x%x) rmat4(0x%x) rmat5(0x%x)
Line 1067: ###[TSIC][MON] MonitorRls::(residual_i/q) resi0(0x%x) resi1(0x%x) resi2(0x%x) resi3(0x%x) resi4(0x%x) resi5(0x%x)
Line 1093: ###[TSIC][MON] MonitorTxf:: txf_tsic_out_ctrl_p0(0x%x) txf_tsic_out_ctrl_p1(0x%x) txf_tsic_sym_bnd_delay_p0(0x%x) txf_tsic_sym_bnd_delay_p1(0x%x)
Line 1115: ###[TSIC][MON] MonitorClkInfo::[TSIC] ul0_ker_gen_cc(0x%x) ul1_ker_gen_cc(0x%x) ker_gen_clk_sw_en_fre(0x%x) ker_gen_clk_sw_en_ov(0x%x) ker_gen_regslice_en(0x%x) tsic_clk_ctl(0x%x)
Line 1132: ###[TSIC][MON] MonitorClkInfo::[infra] sw_resetn0(0x%x) sw_resetn1(0x%x) sw_resetn2(0x%x) sw_clk_on0(0x%x) sw_clk_on1(0x%x) sw_clk_on2(0x%x)
Line 1134: ###[TSIC][MON] MonitorClkInfo::[infra] dyn_clk_on_en0(0x%x) dyn_clk_on_en1(0x%x) dyn_clk_on_en2(0x%x) ammpg_sel0(0x%x) ammpg_sel1(0x%x) ammpg_sel2(0x%x)
Line 1152: ###[TSIC][SYNC] MonitorSync:: tick(%d) ker_gen_general_cnt_read(%d)
Line 1220: ###[TSIC][SYNC] MonitorSync:: 0_corr_q(%d) 0_corr_i(%d) 1_corr_q(%d) 1_corr_i(%d) 2_corr_q(%d) 2_corr_i(%d) 3_corr_q(%d) 3_corr_i(%d) 4_corr_q(%d) 4_corr_i(%d)
Line 1239: ###[TSIC][SYNC] MonitorSync:: tsic_sync_rx_data_bit_sel(%d) tsic_sync_rx_data_rate_sel(%d) ker_out_bit_sel(%d) ker_norm_bit_sel(%d) corr_in_bit_sel(%d) corr_out_bit_sel(%d)
Line 1262: ###[TSIC][SYNC] MonitorSync:: tsic_sync_status(%d) tsic_sync_rx_data_rms(%d) tsic_sync_ker_data_rms(%d) tsic_sync_wait_result(%d) tsic_sync_tic_toc_en(%d) tsic_sync_toc(%d) tsic_sync_tic_toc_overflow(%d)
Line 1270: ###[TSIC][SYNC] MonitorSync:: <CORR> RX_path(%d) 0_idx(%d) 0_corr(%d) 1_idx(%d) 1_corr(%d) 2_idx(%d) 2_corr(%d)
Line 1274: ###[TSIC][SYNC] MonitorSync:: <CORR> RX_path(%d) 3_idx(%d) 3_corr(%d) 4_idx(%d) 4_corr(%d)
Line 1303: ###[TSIC][SYNC] DumpSyncMem:: mem_sel(%d) dump_size(%d)
Line 1320: ###[TSIC][SYNC] DumpSyncMem:: tsic_sync_mem(idx:%d~%d) %d/%d/%d/%d/%d/%d/%d/%d
Line 1373: ###[TSIC][SYNC] MonitorSyncCorrMem:: (idx:%d~%d) 0x%x / 0x%x / 0x%x / 0x%x / 0x%x / 0x%x / 0x%x / 0x%x
Line 1382: ###[TSIC][SYNC] MonitorSyncCorrMem:: <><><><><> (idx:%d) 0x%x <peak>
Line 1394: ###[TSIC][SYNC] MonitorSyncCorrMem:: (idx:%d~%d) 0x%x / 0x%x / 0x%x / 0x%x / 0x%x / 0x%x / 0x%x / 0x%x
Line 1428: ###[TSIC][SYNC] CalcISNR:: (idx:%d~%d) %d/%d/%d/%d/%d/%d/%d/%d
Line 1436: ###[TSIC][SYNC] CalcISNR:: <><><><><> (idx:%d) %d <peak>
Line 1447: ###[TSIC][SYNC] CalcISNR:: (idx:%d~%d) %d/%d/%d/%d/%d/%d/%d/%d
Line 1452: ###[TSIC][SYNC] MonitorSyncCorr:: m_ISNR(%d) m_BgIntf(%d) sum_mag(%d)
Line 1488: ###[TSIC][RSLT] [1TX RESULT] 0_corr(%d) 0_idx(%d) 1_corr(%d) 1_idx(%d) 2_corr(%d) 2_idx(%d) 3_corr(%d) 3_idx(%d) 4_corr(%d) 4_idx(%d)
Line 1509: ###[TSIC][RSLT] [1TX RESULT] tsic_sync_status(%d) ISNR(%d) tsic_sync_rx_data_rms(%d) tsic_sync_ker_data_rms(%d) tsic_sync_wait_result(%d) tsic_sync_toc(%d) tsic_sync_tic_toc_overflow(%d)
Line 1544: ###[TSIC][2TX] Monitor2TxParam:: maxPeakPos:%d maxPeak:%d RxRms:%d KerRms:%d 4_corr:%d
Line 1650: ###[TSIC] CalcKerGenCntStartPos::[INFRA] DYN_CLK_ON_EN0(0x%X) DYN_CLK_ON_EN1(0x%X) KER_GEN_CLK_SW_EN_FRE(0x%X) TSIC_CLK_CTL(0x%x)
Line 1652: ###[TSIC] CalcKerGenCntStartPos::[KER] KER_START_MODE(%d) ker_gen_gencnt_start_position(%d) waiting_time(%d) ker_gen_general_cnt_read(%d) ker_gen_start_min_position(%d)
Line 1677: ###[TSIC][RLS] SetRlsEn:: RLS_TSIC_EN(0xF) RLS_PHASE_EN(0x%x)
Line 1719: ###[TSIC][SYNC] ConfigSync:: ker_gen_general_cnt_read(%d) tsic_sync_start_position(%d) tick(%d) tsic_sync_start_mode(%d) tsic_clk_ctl(0x%x) rxf_tsic_set(0x%x)
Line 1777: ###[TSIC][TC] EnableTimeCorr:: ker_gen_general_cnt_read(%d) peak_pos(%d) rx_path(%d) tsic_sync_start_position(%d)
Line 1810: ###[TSIC][SYNC] ClearSyncEn:: ker_gen_general_cnt_read(%d) m_RecentSyncGenCnt(%d)
Line 1982: ###[TSIC] SetTsicModemIrq:: m_IrqEnable(%d)
Line 2006: ###[TSIC] DisableTsicModemIrq:: m_IrqEnable(%d)
