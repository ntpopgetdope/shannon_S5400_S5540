Line 409: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_configMcwDvfs: Abnormal power domain, FRONT(%d) MARCONI(%d)
Line 415: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_configMcwDvfs: Unexpected call, Marconi owner(0x%08X) is gnss only
Line 559: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_configMcwDvfs: mcw_dvfs_sel(%d -> %d) has_cc[lte/nr](%d/%d) has_slo(%d)
Line 1435: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_Init: fr1_mcw_dvfs_registry[0x%08X] rf_bw_criteria(nv/db)[%d/%d]
Line 1440: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_Open
Line 1458: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_Close
Line 1048: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_getMcwDvfsLevel: lte_input_rate[table/conf](%d/%d) nr_input_rate[table/conf](%d/%d) nr_num_cc[1]/has_slo[1]/has_ud_bw[1]/is_nr_1rx[1](%04X) output_dfs_minlock[0=NM/1=UD/2=SUD](%d)
Line 1051: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_getMcwDvfsLevel: mcw_dvfs_sel(%d) nr_ud_minlock[1]/nr_rrc_state[1](%02X) modem_input_bw[total/lte/nr](%d/%d/%d) modem_output_bw[total/lte/nr](%d/%d/%d)
Line 744: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_getConfiguredModemInputBw: lte_configured_modem_input_bw(%d) nr_configured_modem_input_bw(%d) has_slo(%d) is_nr_1rx(%d)
Line 900: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_getModemOutputBw: rat(%d) sum_of_modem_output_bw(%d) rfd_dfs_minlock[0=NM/1=UD/2=SUD](%d)
Line 1389: [HALFRONT_PATHMNG][WARNING] _FuncHead!! r0[0x%08X] r1[0x%08X] r2[0x%08X] r3[0x%08X]
Line 1396: [HALFRONT_PATHMNG][WARNING] _FuncTail!! r0[0x%08X] r1[0x%08X] r2[0x%08X] r3[0x%08X]
Line 185: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_initTable: rat(%d) options(0x%02X)
Line 209: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_initRxTable: rat(%d) options(0x%02X)
Line 240: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_initTxTable: rat(%d) options(0x%02X)
Line 309: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_updateRxTable: rat(%d) rrc_state(%d) sum_of_modem_input_rate[rf/sys](%d/%d) has_slo(%d)
Line 313: [HALFRONT_PATHMNG][WARNING] HALFRONT_PATHMNG_updateRxTable: rx_path_info is null, rat(%d)
Line 318: [HALFRONT_PATHMNG][WARNING] HALFRONT_PATHMNG_updateRxTable: abnormal rat(%d)
Line 373: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_updateTxTable: rat(%d) allocated_tx_path(%d) sum_of_output_rate[rf/bb](%d/%d)
Line 377: [HALFRONT_PATHMNG][WARNING] HALFRONT_PATHMNG_updateTxTable: tx_path_info is null, rat(%d)
Line 384: [HALFRONT_PATHMNG][WARNING] HALFRONT_PATHMNG_updateTxTable: abnormal rat(%d)
Line 821: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_getModemInputBw: rat(%d) rrc_state(%d) rf_bw_criteria[table/conf](%d/%d) sum_of_modem_input_rate(%d) is_cal_mode(%d)
Line 1231: [HALFRONT_PATHMNG][WARNING] _HALFRONT_PATHMNG_calculateInputSystemBw: rf_bw(%d) is not expected value for slo case with calculating system bw, rat(%d)
Line 1241: [HALFRONT_PATHMNG][WARNING] _HALFRONT_PATHMNG_calculateInputSystemBw: system_bw(%d) is not expected value with calculating system bw, rat(%d)
Line 1303: [HALFRONT_PATHMNG][WARNING] _HALFRONT_PATHMNG_calculateInputRfBw: rf_bw(%d) is not expected value with calculating bwp, rat(%d)
Line 1091: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_printTable<DL>: rat[%d] rrc_state[%d] =======================================================
Line 1099: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_printTable<DL>: rf_bw(8bits, 5-0)[0x%08X][0x%08X][0x%08X][0x%08X][0x%08X][0x%08X]
Line 1107: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_printTable<DL>: sys_bw(8bits, 5-0)[0x%08X][0x%08X][0x%08X][0x%08X][0x%08X][0x%08X]
Line 1115: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_printTable<DL>: sys_bw_map(8bits, 5-0)[0x%08X][0x%08X][0x%08X][0x%08X][0x%08X][0x%08X]
Line 1123: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_printTable<DL>: sys_bw_slo(8bits, 5-0)[0x%08X][0x%08X][0x%08X][0x%08X][0x%08X][0x%08X]
Line 1131: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_printTable<UL>: rf_ul_bw(8bits, 5-0)[0x%08X][0x%08X][0x%08X][0x%08X][0x%08X][0x%08X]
Line 1139: [HALFRONT_PATHMNG] HALFRONT_PATHMNG_printTable<UL>: bb_ul_bw(8bits, 5-0)[0x%08X][0x%08X][0x%08X][0x%08X][0x%08X][0x%08X]
Line 1143: [HALFRONT_PATHMNG][WARNING] HALFRONT_PATHMNG_printTable: unexpected rat(%d)
Line 1382: [HALFRONT_PATHMNG][WARNING] _NullFunc!! r0[0x%08X] r1[0x%08X] r2[0x%08X] r3[0x%08X]
