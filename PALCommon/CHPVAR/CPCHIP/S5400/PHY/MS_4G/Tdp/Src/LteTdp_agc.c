Line 348: [FD_AGC][Initialze][DMOffset] CoreIdx(%d), PATH0DMADDROFFSET(0x%x), PATH0RSSIDMADDROFFSET(0x%x), LAADMADDROFFSET(0x%x), V2XDMADDROFFSET(0x%x), ITFDMADDROFFSET(0x%x)
Line 478: [Configuration skip]cg: %d, cck: %d, delayed_agc_set: 1, RTG: %d, ttim_current : %d , cur_tti: %d, rtg : %d, CfgBypass : 0x%x
Line 1248: [FDAGC/TDBUF](1) Trigger Reset (CC%d)
Line 1255: [FDAGC/TDBUF](2) Trigger Reset (CC%d) 
Line 1258: [FDAGC/TDBUF] SW_RESET Trigger Fail : Reason [%d] (CC%d)
Line 1263: [FDAGC/TDBUF] SW_RESET Trigger Fail : SCG on
Line 1285: [FdagcResetStateMachine][cc%d][FdagcResetCnt : %d][FdagcPathClearCnt : %d]
Line 1296: [FD_AGC_CLEAR]FDAGC_RESET_STATE1 : 0x%x cck : %d, cellType : %d
Line 1314: [FD_AGC_CLEAR]FDAGC_RESET_STATE2 : 0x%x cck: %d, cellType : %d
Line 1338: [FD_AGC_CLEAR][cc%d][FdagcPathClearCnt : %d]CORE0[%d] CORE1[%d] FdagcResetCheckFlag :0x%x, cell_group : %d
Line 1367: ResetStateMachine :cck %d, %d, %d 
Line 2144: [FD_AGC][ACS][CC%d][cc_rx_path%d][SLO_Pair_CC%d]RMS_BackOff_Val update : %d
Line 2223: [FD_AGC][NOTICE]cc(%d), adc_path(%d), fd_db_power(%d), zero_gain(0x%x)
Line 2257: [LAA_DEBUG][NOTICE]cc(%d), cc_rx_path(%d), adc_path(%d), Agc_error_out(%d), fd_db_power(%d), Modified_RMS(%d)
Line 2294: [FD_AGC_DEBUG][After] cck : %d, cc_rx_path : %d, adc_path : %d, set_tdp_param->Agc_loop_acc_out_mbsfn_temp : %d, Agc_error_out[rx_path] : %d, Err*En : %d
Line 2305: [FD_AGC_DEBUG][After] cck : %d, cc_rx_path : %d, adc_path : %d, set_tdp_param->Agc_loop_acc_out_agap_temp : %d, Agc_error_out[rx_path] : %d, Err*En : %d
Line 2309: [FD_AFC][CC : %d]SF_TYPE[%d : %d : %d] ==> there is no loop update in this tti!!!)
Line 2332: [FD_AGC][Current : AGAP][Next : MBSFN1][path : %d][BufIdx_Agc : %d][Cur Ctrl idx : %d][Saved value for next agap : %d, SF_TYPE[P : %d, C : %d, N : %d]
Line 2340: [FD_AGC][cc : %d]Next subframe is MBSFN1, but Agc is hold with current updated IDX ~~
Line 2372: [FD_AGC][Current : AGAP][Next : DL/SP][path : %d][BufIdx_Agc : %d][Cur Ctrl idx : %d][Saved value for next agap : %d, SF_TYPE[P : %d, C : %d, N : %d]
Line 2590: CE_Reset(CC%d, CC_RX_Path%d), cause: AGC gain change (diff=%d), limit:%d
Line 2596: CE_Reset(CC%d, CC_RX_Path%d), cause: AGC gain change (diff=%d), limit:%d
Line 3250: [LAA_DEBUG][StoreLaaDrsAGC](cc_idx(%d), rx_path(%d), adc_path(%d), atti(%d), fd_dB_power(%d), drs_fd_power(%d)
Line 3288: [LAA_DEBUG][RestoreLaaDrsAGC](cc_idx(%d), rx_path(%d), adc_path(%d), atti(%d), drs_gain_idx_backup_ind(%d), drs_fd_power(%d), fd_dB_power_backup(%d)
Line 3326: [LAA_DEBUG][RestoreLaaDrsAGC](cc_idx(%d), rx_path(%d), adc_path(%d), fd_dB_power_backup(%d), fd_dB_power : %d/%d)
Line 3475: (F)wrong FD-AGC path access cc[%d] td_buf_idx[%d] div[%d]
Line 3486: FD_AGC pathclear Done cc[%d] ant num[%d] td_buf_idx[%d] div[%d]
Line 3534: [FDAGC] AGC MODE(%d) AGC_IDX(%d) FD_PWR(%d) TD_PWR(%d) Mar TD_PWR(%d)
Line 690: Unknown sf type %d)
Line 709: Unknown sf type %d)
Line 730: [AGC][CCk : %d] prv : %d, current : %d, next : %d ==> next tti will be not configured to calculate the received power !!!)
Line 771: (F) abnromal allocation : coreIdx %d, available_cfg : %d
Line 784: [FD_AGC][CC%d]Core%d is inactive
Line 1480: [FD_AGC]rx_path_num is over !!!! [cc : %d][cc_rx_path : %d][adc_path : %d]
Line 1525: [FD_AGC_CHECK][cc%d][rx_path : %d][adc_path : %d][tx_port : %d][is_normal_state : %d][tti : %d][Linear_power : %d][Clear_cnt : %d][FdagcPhyresetCnt : %d]
Line 1639: [TDP_DEBUG][CC%d][rxf_path : %d][rx_path : %d]Calculated Power : %d / %d, AGCCFGREG[0x%x / 0x%x / 0x%x]
Line 1663: [FD_AGC][SKIP]cc(%d), adc_path(%d), cfg_idx(%d / %d), fdAgcPwrRx0Tx0(0x%x), fd_db_power(%d)
Line 1675: [LAA_DEBUG][Before][CC%d][rx_path : %d][rxf_path : %d] Update power is changed with RMS as invalid Rdy power(Rdy power : %d)(m_RMS : %d)
Line 1683: [LAA_DEBUG][After][CC%d][rx_path : %d][rxf_path : %d] Update power is changed with RMS as invalid Rdy power(Rdy power : %d)(m_RMS : %d)
Line 1711: [UNLICENSED_DEBUG](cc%d)[ADC/eCSAT[prv/cur]/LAA[prv/cur] : %5d]FD_linear : %d / %d[dB], upt : %d[dB], rdy : %d[dB], loop(pwr) : %d[dB]]
Line 3077: [FD_AGC][CC%d][Adcpath%d]Linear_value is error in dB converter [mode : %d][linear : %d] !!!)
Line 1785: [DMRS][warning][CC%d][rx_path : %d] dmrs_hys is invalid(0x%x))
Line 1849: [DMRS][3rd][CC%d][rx/rxf : %d] crs(%d[dB]), dmrs(%d[dB]), control(%d[dB], dmrs_crs_diff(%d[dB], TM Prv/Cur(0x%x/0x%x), dmrs_applied(0x%x), dmrs_hys(0x%x))
Line 2658: [Notice][cc(%d)/rxpath(%d)/dcrpath(%d)/rxfpath(%d)] control index is lower than AGC_INIT_VALUE_IN_TWOS(%d), it is replaced with AGC_INIT_VALUE_IN_TWOS
Line 2679: [FDAGC][BEFORE] LAA control on Bypass On mode : (CC%d, rxPath %6d), Ctrl(%d), read(%d), backOff_diff(%d), BackOff(cur %d / prv %d), comp_idx/prv(%d /%d), RADDR_RXF_AGCX_VALUE_OUT(0x%x)
Line 2696: [FDAGC][After] LAA control on Bypass On mode : (CC%d, rxPath %6d), Ctrl(%d), read(%d), diff(%d), BackOff(cur %d / prv %d), comp_idx/prv(%d /%d), backoff_val_diff(%d)
Line 2701: CE_Reset(CC%d, CC_RX_Path%d), cause: AGC gain change (diff=%d), limit:%d
Line 2706: Ignored - CE_Reset(CC%d), cause: AGC gain change (diff=%d), limit:%d
Line 2708: CE_Reset(CC%d, CC_RX_Path%d), cause: AGC gain change (diff=%d), limit:%d
Line 2781: [FD_AGC][PGC][After][cc%d][rx_path : %d][adc_path : %d][iqc_path : %d] TD_dB_Pwr_Rx : %d, Rxf_Pgc_Offset : %d, reg : 0x%x, TD_dB_Pwr_Rx_Temp : %d
Line 2785: [FD_AGC][PWR][SERV][Warning][cc%d][rx_path : %d][adc_path : %d]TD_dB_Pwr_Rx = %d
Line 2840: [FD_AGC][ACS][CC%d][rx_path %d][dcr %d][rxf %d] sum(%d), avg_length(%d), cur_cnt(%d), norm_size(%d), diff_mov_avg_temp(%d), avg(%d)
Line 2852: [FD_AGC][ACS]diff_pwr [9]%d, [8]%d, [7]%d, [6]%d, [5]%d, [4]%d, [3]%d, [2]%d, [1]%d, [0]%d,
Line 2950: [FD_AGC][ACS][CC%d][rx_path %d][dcr %d][rxf %d] TD_dB_Pwr_Rx/Meas_TD_Pwr(%d/%d), RMS(%d), BackOff(%d), Ind_256QAM(0x%x), 256QAM_offset(%d)
