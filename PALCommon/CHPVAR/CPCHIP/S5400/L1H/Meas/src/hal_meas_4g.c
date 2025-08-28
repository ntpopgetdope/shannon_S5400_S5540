Line 934: [MEAS] InitMeas
Line 961: [Meas] HALMEAS_ProcMeasDoneIntr
Line 987: [Meas] HALMEAS_ProcMeasDmaDoneIntr
Line 1039: [Meas] GetMeasResult: NOT SAME!! gHal_DrsPositionIdx(%d), max_idx(%d)
Line 1064: [Meas] GetHALMeasResult measured_cnt:%d,valid:%d, Stackid:%d
Line 1069: [Meas] GetHALMeasResult rssi:%d,agc_gain:%d
Line 1077: [Meas] GetHALMeasResult rsrp:%d,rsrq:%d,rs_sinr:%d,rs_pwr:%d
Line 1117: MeasDone TD_BUF_MEAS_STATUS 0x%x TD_BUF_MEAS_TESTOUTx 0x%x 0x%x MEAS_NRT_FFT1_STATUS 0x%x MEAS_NRT_FFT1_RX1STATUS 0x%x TD_BUF_NRT_MEAS_STATUS 0x%x MeasDebugcell0 0x%x
Line 1149: [Meas] HALSC_ProcMeasDoneHisr:Start
Line 1153: [Dmover_Debug] Dmoverhdr(Size:0x%x, magic_num:0x%x),CPU_INTx:0x%x,CPU_SUB_INT_ENx:0x%x,CPU_SUB_INT_PENDx:0x%x,CPU_SUB_INT_MASKx:0x%x
Line 1204: [Meas] HALSC_ProcMeasDoneHisr: End
Line 1260: [Meas] HALMEAS_toDbScale quota = %d, linear_raw = %d
Line 1267: [Meas] HALMEAS_toDbScale value_db:%d, quota = %d, linear_raw = %d, j = %d, dB_order2 = %d, error:%d
Line 2054: [Meas] HALMEAS_update_distance: CellIdx: %d, serv_rtg: %d, rev_serv_rtg: %d, srch_len: %d, temp: %d, th_sym: %d
Line 2062: [Meas] HALMEAS_update_distance: p_dsc->isfn: %d 
Line 2124: [Meas] HALMEAS_update_distance: CellIdx: %d, initial_isym: %d, th0: %d, th1: %d, th_sym: %d, tbmp: %d, crs_bitmap: 0x%x
Line 2216: [Meas] HALMEAS_fill_crs_bitmap: first_half_ind: %d, max_nsym: %d, crs_bitmap: 0x%x, isfn: %d
Line 2436: [Meas] s: MicroEnd expired but modem is powered off, don't process
Line 2440: [Meas] s: MicroEnd expired, stop and build new 
Line 2445: [Meas] Measurement is already stopped dont perform micro_end operations
Line 2450: MeasTimeout MeasDebugcell0 0x%x
Line 2482: [Meas] HALMEAS_do_meas_timeout
Line 2486: [Meas] HALMEAS_do_meas_timeout but modem is powered off, don't process
Line 2911: [Meas]Compose_neighbor_res MeasureB> db rx0: cid(%d), rssi(%d), rsrp(%d,%d), rsrq(%d,%d), gain:%06d
Line 2916: [Meas]Compose_neighbor_res MeasureB> db rx0: cid(%d), rs_sinr(%d,%d), rs_pwr(%d,%d), gain:%06d
Line 2922: [Meas]Compose_neighbor_res MeasureB> db rx1: cid(%d), rssi(%d), rsrp(%d,%d), rsrq(%d,%d), gain:%06d
Line 2927: [Meas]Compose_neighbor_res MeasureB> db rx1: cid(%d), rs_sinr(%d,%d), rs_pwr(%d,%d), gain:%06d
Line 2935: [Meas]Compose_neighbor_re sMeasureB> db rx2: cid(%d), rssi(%d), rsrp(%d,%d), rsrq(%d,%d), gain:%06d
Line 2940: [Meas]Compose_neighbor_re sMeasureB> db rx2: cid(%d), rs_sinr(%d,%d), rs_pwr(%d,%d), gain:%06d
Line 2946: [Meas]Compose_neighbor_res MeasureB> db rx3: cid(%d), rssi(%d), rsrp(%d,%d), rsrq(%d,%d), gain:%06d
Line 2951: [Meas]Compose_neighbor_res MeasureB> db rx3: cid(%d), rs_sinr(%d,%d), rs_pwr(%d,%d), gain:%06d
Line 3000: [Meas]Compose_neighbor_res report_bitmap:%d,report_path:%d
Line 3016: [Meas]Compose_neighbor_res report_bitmap1:%d,report_path:%d ,meas_path_cnt:%d
Line 3064: [Meas]Compose_neighbor_res valid:%d,rssi:%d,rsrp(%d %d),rsrq(%d %d), max_num_meas_cnt:%d
Line 3068: [Meas]Compose_neighbor_res valid:%d, rs_sinr(%d %d), rs_pwr(%d %d),max_num_meas_cnt:%d
Line 3164: HALMEAS_reset_MeasReg. TD_BUF_MEAS_STATUS 0x%x TD_BUF_MEAS_TESTOUTx 0x%x 0x%x MEAS_NRT_FFT1_STATUS 0x%x MEAS_NRT_FFT1_RX1STATUS 0x%x TD_BUF_NRT_MEAS_STATUS 0x%x
Line 3233: [Meas] [Start]: HALMEAS_stop_measure
Line 3267: [Meas] [End] HALMEAS_stop_measure
Line 3713: [Meas] HALMEAS_configure_fft: ic: %d, idx: %d, meas_type: %d, cp_type: %d, nsym: %d, start_sym_cnt: %d, end_sym_cnt: %d
Line 4344: [Meas] HALMEAS_sched: Incorrect meas schedule, dur_start:%d, srv_asfn:%d 
Line 4364: [Meas] HALMEAS_sched: sched>gc:%d, gc_incar:%d, TTI:%d, asfn:%d, rtg:%d, initcall:%d, gc_offset(%d) 
Line 4395: [Meas] HALMEAS_sched:pcell_time: 0x%x, srv_asfn:%d, srv_rtg:%d, diff:%d, gc_offset:%d, rest: %d
Line 4400: [Meas] HALMEAS_sched: no cell for MeasBlock, remain:%d,%d 
Line 4452: [Meas] HALMEAS_sched:Meas HW Configured: gen_cnt: %d, diff_gc:%d,MeasTime:%d
Line 4524: [Meas]: HALMEAS_RequestMeasurement: meas_type: %d, serv_offset: %d
Line 4534: [Meas]: Cell Info Indx[%d]: cellCnt: %d, CellId: %d, duplex: %d, cp_type: %d, meas_bw: %d
Line 4540: [Meas]: Cell Info Indx[%d]: offset: %d, indicator: %d, mbmp_len: %d
Line 4570: [Meas]: HALMEAS_FillCellInfoParams: Dominant Cell Configured: cellCnt: %d, cal_offset[0]: %d, cal_offset[1]: %d, cal_offset[3]: %d, cal_offset[4]: %d
Line 4634: [Meas]: HALMEAS_FillMeasReqParams: cell_group: %d, dur_start: %d, dur_end: %d, n_cells: %d,
Line 4640: [Meas]: HALMEAS_FillMeasReqParams: meas_serv_bw: %d,  td_buf_idx: 0x%x, td_buf_idx_div: 0x%x
Line 4674: [Meas] HALMEAS_getUeAnt: : CC: %d, rx_mode %d, ue_ant: %d
Line 4726: [Meas]: HALMEAS_RequestMeasurement: StackId: %d, meas_dur: 0x%x
Line 4738: [Meas]: Wrong Output Path,aborting Measurements,OutputPath:%d
Line 4765: [Meas] HALMEAS_RequestMeasurement: DMTC configured
Line 4830: [Meas] HALMEAS_RequestMeasurement: meas config, pre_cck: %d, pre_ue_ant[%d]: %d
Line 4845: [Meas] HALMEAS_RequestMeasurement: meas config, start(%d), end(%d), ncell:%d, nellement:%d, meas_serv_bw:%d, td_buf_idx: 0x%x, td_buf_idx_div: 0x%x
Line 4973: HALMEAS_RequestMeasurement: (I)replace meas bw:%d with serv_bw:%d
Line 4977: HALMEAS_RequestMeasurement: (I)wa_m1p4, replace meas bw:%d with serv_bw:%d
Line 5079: HALMEAS_RequestMeasurement distance:%d, cc_Index: %d
Line 5188: [Meas] HALMEAS_RequestMeasurement: patternR: 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, cid:%d, len:%d
Line 5230: [Meas] HALMEAS_RequestMeasurement: Inter/Irat measure meas_serv_bw: %d change to 20MHz
Line 5243: [Meas] HALMEAS_RequestMeasurement: Inter/Irat measure meas_serv_bw: %d change to 20MHz
Line 5281: HALMEAS_RequestMeasurement:Save agc in hold state cc:%d, agc_gain0: %d, agc_gain1: %d
Line 5709: [Meas]: HALMEAS_RSTD_Config_FFT: PRS Req ncell(%d) duplex(%d)
Line 5727: [Meas]: HALMEAS_RSTD_Config_FFT: PRS> idx:%d, gensnap:%d, cc:%d, i_prs/n_prs:%06d, cptype/n_txant:%02d, offset:%d, prs_bitmap:0x%x
Line 5762: [Meas]: HALMEAS_RSTD_Config_FFT: RSTD base sfn gencnt(%d):(0x%x,0x%x,0x%x,0x%x)
Line 5773: [Meas]: HALMEAS_RSTD_Config_FFT: no symbol allocated to RSTD
Line 5788: [Meas]: HALMEAS_RSTD_Config_FFT: RSTDEnd Timer:%d, goffset:%d
Line 5944: [MEAS] MeasBlockSwReset: Done
Line 5993: [Meas] HALMEAS_RxSamBufMemInit: RxSampleBuf(RxSBuf_MemInit): td_buf_cc0_band(0x%x),isServing: %d, td_buf_ant0001_meminit(0x%x), isMeasInput4Rx %d
Line 6044: RxSampleBuf(RxSBuf_MemDeInit): td_buf_meas_ant0001_meminit(0x%x),td_buf_meas_ant0203_meminit(0x%x) td_buf_meas_cc0disable(0x%x)
Line 6095: [Meas] HALMEAS_RxPathAllocForN2LIrat: RxSample buffer path allocation for N2L IRAT (To check more)
Line 6121: [Meas] Invalid scenario,no measure cells,measurement already aborted
Line 6129: [Meas] This is not Serving or Active Scell measurement
Line 6173: [Meas] HALMEAS_FillIPCMeasComplete: serving_meas: %d,serving_meas_rsrq: %d
Line 6204: [Meas] HALMEAS_FillIPCMeasComplete: strong neigh_meas[%d]: %d
Line 6208: [Meas] HALMEAS_FillIPCMeasComplete:cell_group: %d, cc_idx: %d, meas_type: %d,meas_rxmode: %d,active_neighCell_count: %d
Line 6268: [Meas] HALMEAS_MBSFN_GetPattern: pattern: %d, MbsfnSfAlloc.pattern: %d
Line 6271: [Meas] HALMEAS_MBSFN_GetPattern: RetVal: %d
Line 6277: [Meas] HALMEAS_MBSFN_GetPattern: CC Not mapped to scell:%d
Line 6336: [Meas] HALMEAS_MBSFN_GetState: state: %d
Line 6369: [Meas] MBSFN is released: CC: %d
Line 6377: [Meas] MBSFN Configured: CC: %d, ScellIdx: %d
Line 6483: [Meas] Cur TDAGC:(%d, %d), (%d, %d), (%d, %d)
Line 6553: REG :  MEAS_SW_CLK_ON [0x%x] MEAS4GEN [0x%x] MEASCELL0CFG_ADDR [0x%x] MEASCELLxDESCSLOTIDXSy[0][0]/[0][1] [0x%x][0x%x]MEASCELLxSLOTRSNUM[0] [0x%x] MEASCELL0CFG2_ADDR`0x%x]
Line 6565: REG : MEASRSRPMODE [0x%x] MEASCFG [0x%x] MEASSERVBW [0x%x] MEASBW [0x%x] MEAS4GDATAMOVERINFO [0x%x] MEAS4GDMEN [0x%x] MEASCELLNUM[0x%x]MEASDEBUGCELLx[0x%x]
Line 6593: REG : RxSampleBuf en[0x%x] MEAS TD_BUF_MEAS_CCx_INPUTSEL0[0x%x] TD_BUF_MEAS_INPUT_ANT_SELx0/1[0x%x][0x%x] TD_BUF_MEAS_CCxCONF0/1 [0x%x][0x%x] TD_BUF_MEAS_CCxDISABLE[0]/[1] [0x%x][0x%x]TD_BUF_MEAS_ANTxCONF[0]/[1] [0x%x][0x%x] 
Line 6605: TD_BUF_MEAS_CCx_BAND[0] [1] 0x%x 0x%x TD_BUF_MEAS_ANTx_MEMINIT[0] [1] 0x%x 0x%x,TD_BUF_MEAS_INPUT_CC_SEL1[0x%x] TD_BUF_MEAS_CCxINIT[0] [1] 0x%x 0x%x
Line 6618: REG :  TD_Buf_Meas_Ncell0Conf[0x%x] TD_Buf_Meas_NcellsCommon[0x%x] TD_BUF_MEAS_NCELL0SCHEDULE0[0x%x] TD_BUF_MEAS_NCELL0SYMBMPx[0x%x][0x%x][0x%x][0x%x]     TD_BUF_MEAS_NCELLxMAP0/1[0x%x][0x%x]
Line 6903: MEAS4GSTOPCMD 0x%x MEAS_4G_SW_RESETN 0x%x MEASRSRPMODE 0x%x MEASCFG 0x%x MEASSERVBW 0x%x MEASBW 0x%x
Line 6914: MEAS_SW_CLK_ON 0x%x RXSAMPLEBUF_MEAS_CLK_SW_CLK_ON 0x%x RXSAMPLEBUF_NRT_MEAS_CLK_SW_CLK_ON 0x%x MEAS4GDATAMOVERINFO 0x%x MEAS4GDMEN 0x%x TD_BUF_MEAS_CCxCONF[0][1] 0x%x 0x%x
Line 6924: TD_BUF_MEAS_CCx_INPUTSEL0 0x%x TD_BUF_MEAS_INPUT_ANT_SELx[0] 0x%x TD_BUF_MEAS_ANTxCONF[0][1] 0x%x 0x%x TD_BUF_MEAS_NCELLSCOMMON 0x%x TD_BUF_MEAS_AGCCOMP_NCELLEN 0x%x
Line 6935: TD_BUF_MEAS_CCxINIT[0] [1] 0x%x 0x%x TD_BUF_MEAS_EN 0x%x TD_BUF_NRT_MEAS_EN 0x%x MEASCELLNUM 0x%x MEAS4GEN 0x%x MEAS4GCMD 0x%x
Line 6945: TD_BUF_MEAS_SLEWEN 0x%x TD_BUF_MEAS_SLAMCONF 0x%x MEAS_FFT1_EN 0x%x MEAS_FFT_CONF 0x%x MEAS_NRT_FFT1_EN 0x%x MEAS_NRT_FFT1_RX1EN 0x%x
Line 6953: TD_BUF_MEAS_CCx_BAND[0] [1] 0x%x 0x%x TD_BUF_MEAS_ANTx_MEMINIT[0] [1] 0x%x 0x%x
Line 6975: [HALMEAS_4G][WARNING]NullFunc()!!
Line 3093: [Meas] HALMEAS_compose_meas_res
Line 3130: [Meas] HALMEAS_compose_meas_res: Stop MeasEndTmr
Line 6638: [Meas] HALMEAS_compose_laa_dmtc_res: Start
Line 6688: [Meas] HALMEAS_compose_laa_dmtc_res cell_idx: %d, tr_idx: %d, rx_idx: %d, ref_gain: %d %d
Line 6709: [Meas] HALMEAS_compose_laa_dmtc_res tr_idx: %d, rssi(linear): %d %d, rsrp(linear): %d %d %d %d
Line 6711: [Meas] HALMEAS_compose_laa_dmtc_res RS SINR: %d %d %d %d
Line 6800: [Meas] HALMEAS_compose_laa_dmtc_res MeasureB> db rx0: cc_idx/tr_idx(%d), rssi(%d), rsrp(%d,%d), rsrq(%d,%d), rs_pwr(%d,%d), gain:%06d
Line 6807: [Meas] HALMEAS_compose_laa_dmtc_res MeasureB> db rx1: cc_idx/tr_idx(%d), rssi(%d), rsrp(%d,%d), rsrq(%d,%d), rs_pwr(%d,%d), gain:%06d
Line 6820: [Meas] HALMEAS_compose_laa_dmtc_res update_idx : %d
Line 6846: [Meas] HALMEAS_compose_laa_dmtc_res rssi:%d,rsrp(%d %d),rsrq(%d %d),rs_sinr(%d,%d), rs_pwr(%d,%d), i_gain:%d
Line 2600: [Meas] HALMEAS_compose_neighbor_res: cnt: %d
Line 2643: [Meas] ir: %d, rx_idx: %d, rs_idx: %d, address: %d, rsrp: %d
Line 2714: [Meas]Compose_neighbor_res MeasBlock: rssi(%d, %d), rsrp((%d,%d), (%d,%d)), cc/cid/gain0/gain1:%010d
Line 2775: [Meas]Compose_neighbor_res RS_SINR(%d): Rx0Tx0:%d Rx0Tx1:%d Rx1Tx0:%d Rx1Tx1:%d
Line 2522: [Meas] Cur TDAGC_index, cc_idx:%d, igain(%d, %d)!
Line 2264: [Meas] HALMEAS_update_distance: serv_rtg %d gcnt_incar: %d, pcell_timing:  0x%x, rest: %d, initcall: %d this->remaining %d
Line 2296: [Meas] HALMEAS_update_distance: CellIdx: %d, rel_gc: %d, isfn: %d, n_rtg: %d, i_sym: %d,  p_req->offset =%d n_res %d
Line 2317: [Meas] HALMEAS_update_distance: rel_gc: %d, isfn: %d, n_rtg: %d
Line 2318: [Meas] HALMEAS_update_distance: n0_rtg: %d, i_sym: %d, initial_isym: %d, margin = %d
Line 2350: [Meas] HALMEAS_update_distance: CellIdx: %d, first_half_ind: %d, max_nsym: %d, crs_bitmap: 0x%x, isfn: %d
Line 2396: [Meas] HALMEAS_update_distance: CellIdx: %d, p_dsc->isym: %d, p_dsc->isfn: %d, p_dsc->islot: %d, n_rtg: %d, dist_rtg: %d, close_idx: %d, margin: %d
Line 2407: [Meas]update_distance> id:%d, dist:%d, crs_bitmap:0x%05x, close_idx:%d, close_dist:%d, nsym:%d
Line 2013: [Meas] find_gap_margin: psfn:%d, prtg:%d, diff:%d, margin:%d
Line 1961: [Meas](I) MeasPattern before, fn(%d), msf_pattern:0x%x, 0x%x,mbsfn_pattern:0x%x
Line 1974: [Meas](I) MeasPattern, fn(%d), msf_pattern:0x%x, 0x%x,mbsfn_pattern:0x%x,tdd_cfg_mask:0x%x
Line 1802: [Meas](I) HALMEAS_from_pattern, len(%d) ref %d, bit_start_in_word_from_msb %d, ptn_idx %d, total_bit_start_from_msb %d, bitmap0x%x
Line 1865: [Meas](F)ULDL config:%d
Line 1917: [Meas](I)from_config, nbr_cfg:%d, cc_idx:%d, meas_type:%d, base:0x%x, duplex:%d, tdd:%d
Line 1451: [Meas]: HALMEAS_setup_best_n: ncells: %d, srch_len = %d 
Line 1456: [Meas]: HALMEAS_setup_best_n: [CellIdx: %d] assign_count %d, crs_bitmap:0x%x
Line 1515: [Meas]: [CellIdx: %d]  nsym: %d,  islot: %d, isfn: %d, dist: %d, dist_end: %d
Line 1544: [Meas]: [Shortlisted List Idx: %d] [CellIdx: %d] plist->begin: %d,  plist->end =%d
Line 1548: [Meas]: nc > HALMEAS_NCELL_MAX
Line 1647: [Meas]: HALMEAS_setup_best_n: LAA DMTC type: nsfn %d
Line 1687: [Meas] HALMEAS_setup_best_n: best_n(%d)> cellId: %d, distance:%d, islot/isfn/isym:0x%x, nsfn/nsym:%d, cid:%d, crsbitmap:0x%x
Line 1690: [Meas]: HALMEAS_setup_best_n: plist->cnt: %d,sinr_rx0:%3d
Line 1359: [Meas] HALMEAS_add_to_list:begin:%d, end:%d, cnt:%d 
Line 1360: [Meas] HALMEAS_add_to_list:[0]=> dist:%d, dist_end:%d, icell_b3:%d, dsfn:%d 
Line 1361: [Meas] HALMEAS_add_to_list:[1]=> dist:%d, dist_end:%d, icell_b3:%d, dsfn:%d 
Line 1362: [Meas] HALMEAS_add_to_list:[2]=> dist:%d, dist_end:%d, icell_b3:%d, dsfn:%d  
Line 1325: [Meas] HALMEAS_remove_from_list:begin:%d, end:%d, cnt:%d 
Line 1326: [Meas] HALMEAS_remove_from_list:[0]=> dist:%d, dist_end:%d, icell_b3:%d, dsfn:%d 
Line 1327: [Meas] HALMEAS_remove_from_list:[1]=> dist:%d, dist_end:%d, icell_b3:%d, dsfn:%d 
Line 1328: [Meas] HALMEAS_remove_from_list:[2]=> dist:%d, dist_end:%d, icell_b3:%d, dsfn:%d  
Line 1401: [Meas] HALMEAS_get_ntrial:(I) crs_bitmap:0x%x, dis_idx:%d, srch_len:%d, ntrial:%d 
Line 3852: [Meas] HALMEAS_configure_fft: gencnt: %d, element_cnt: %d
Line 3914: [Meas] HALMEAS_configure_fft: ic: cc_idx:%d,Rxmode_tdbuf: %d, td_buf_idx: %d, td_buf_idx_div: %d, rx_mode: %d, RxPathBitMap: 0x%x, RxfPathBitMap: 0x%x
Line 3949: [Meas] Report_bitmap:  0x%x, ant_idx 0/1: 0x%x/0x%x, ant_idx 2/3: 0x%x/0x%x, td_buf_idx: 0x%x, td_buf_idx_div: 0x%x
Line 4042: [Meas] HALMEAS_configure_fft: ic: %d, idx: %d, cc_idx: %d, scellAct: %d, meas_type: %d, meas_dmtc_cfg: %d, cp_type: %d
Line 4044: [Meas] HALMEAS_configure_fft: ic: %d, idx: %d, gen_cnt: %d, distance: %d, cplen: %d, nsfn: %d, max_last_sym_gencnt: %d
Line 4060: [Meas] HALMEAS_configure_fft: ic: %d, idx: %d, laa_intra_cell_ind: %d, start_tti: %d, start_gen_cnt: %d, meas_asfn: %d
Line 4067: [Meas] Measurement_sfntti: %d
Line 4088: [Meas] HALMEAS_configure_fft: ic: %d, idx: %d, laa_intra_cell_ind: %d, start_tti: %d, start_gen_cnt: %d, meas_asfn: %d
Line 4114: [Meas] HALMEAS_configure_fft: path_ind: %d, report_bitmap: %d, ant_idx_intra[0]: %d, ant_idx_intra[1]: %d, ant_idx_intra[2]: %d, ant_idx_intra[3]: %d
Line 4150: [Meas] HALMEAS_configure_fft: _4Rx_ind: %d, ue_ant: %d, td_buf_ncell_map: %d, td_buf_ncell_conf: %d
Line 4206: [Meas] HALMEAS_configure_fft: NCELL_SCHEDULE0: 0x%x, NCELL_SYM_BITMAP0: 0x%x, NCELL_SYM_BITMAP1: 0x%x, NCELL_SYM_BITMAP2: 0x%x, NCELL_MAP: 0x%x, NCELL_CONF:  0x%x
Line 4209: [Meas] HALMEAS_configure_fft: AGC_UE_ANT_SEL_0 : 0x%x AGC_UE_ANT_SEL_1: 0x%x
Line 4225: [Meas] HALMEAS_configure_fft: td_buf_ncellscommon: %d
Line 4227: [Meas] HALMEAS_configure_fft: start gen cnt: %d %d %d %d %d %d %d
Line 4230: [Meas] HALMEAS_configure_fft: start_tti: %d %d %d %d %d %d %d
Line 4260: TD_BUF_NCELLSCOMMONl: 0x%x, TD_BUF_AGCCOMP_NCELLEN: 0x%x, td_buf_ncell_conf: 0x%x
Line 3319: [Meas] [Start]: HALMEAS_configure_mea: ncell: %d
Line 3399: (F)Scheduled symbol is wrong, n_sym: %d)
Line 3409: [Meas] HALMEAS_configure_meas: meas_cfg: %d
Line 3429: [Meas] HALMEAS_configure_meas: meas_descslotidxs0(0x%x), meas_descslotidxs1(0x%x), meas_slotrsnum(0x%x), MEASCELL2_CFG: 0x%x
Line 3430: [Meas] HALMEAS_configure_meas: Reg MEASCELLxCFG(0x%x), MEASCELLxCFG2(0x%x) 
Line 3476: [Dmover_Debug] Dmoverhdr(Size:0x%x, magic_num:0x%x),CPU_INTx:0x%x,CPU_SUB_INT_ENx:0x%x,CPU_SUB_INT_PENDx:0x%x,CPU_SUB_INT_MASKx:0x%x
Line 3490: [Meas]MeasCellCfg:(0x%x, 0x%x, 0x%x, 0x%x), cc_info:0x%x, MeasDebugcell0 0x%x
Line 3492: [Meas]RSRPMode(0x%x), ServBW(%d), MeasBW(0x%x), cell_bmp(0x%x), TD_CCIndex(0x%x), meas_cfg_common:0x%x
Line 5532: [Meas]: HALMEAS_configure_fft_rstd: ant_idx 0/1: 0x%x/0x%x
Line 5557: [Meas]: HALMEAS_configure_fft_rstd: NCELL_SCHEDULE0: 0x%x, NCELL_SYM_BITMAP0: 0x%x, NCELL_SYM_BITMAP1: 0x%x, NCELL_SYM_BITMAP2: 0x%x, NCELL_MAP: 0x%x, NCELL_CONF:  0x%x, n_ue_ant: %d
Line 5655: [Meas]: HALMEAS_configure_fft_rstd: TD_BUF_MEAS NCELLSCOMMON:0x%x CCxCONF[0]:0x%x CCx_INPUTSEL[0]:0x%x INPUT_ANT_SELx0/1:0x%x/0x%x CCxDISABLE[0]:0x%x
Line 5663: [Meas]: HALMEAS_configure_fft_rstd: TD_BUF_MEAS_ANT 0001_MEMINIT:0x%x, ANT0/1CONF:0x%x/0x%x, ANT2/3CONF:0x%x/0x%x
Line 5842: [Meas]: HALMEAS_Result_Initialize: cell_idx: %d, path_ind: %d
