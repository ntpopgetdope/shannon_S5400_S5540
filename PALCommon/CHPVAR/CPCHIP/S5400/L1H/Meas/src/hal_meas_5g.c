Line 662: ###[NR_MEAS] HALMEAS5G_ProcDMoverMeasIsr: [grpIdx: %u] DMover [Magic Num (prev: %d, cur: %d, isMnUpdated: %d), size: %d]
Line 678: ###[NR_MEAS] HALMEAS5G_ProcDMoverMeasIsr: [grpIdx: %u] meas_done_grp_num: %u, n_grp: %d ++
Line 683: ###[NR_MEAS] HALMEAS5G_ProcDMoverMeasIsr: [grpIdx: %u] meas_done_grp_num: %u, n_grp: %d --
Line 690: ###[NR_MEAS] (F) HALMEAS5G_ProcDMoverMeasIsr: remaining_cells(%d), remaining(%d)
Line 3780: ###[NR_MEAS] Deinitialize: Done
Line 3929: ###[NR_MEAS] DisableMeasDmover: Done
Line 1685: ###[NR_MEAS] (F) DeinitializeTDBuf: Invalid TdBuf index(%u) !!
Line 1702: ###[NR_MEAS] DeinitializeTDBuf: Done, td_buf_idx(%u)
Line 1709: ###[NR_MEAS] (F) DeinitializeTDBuf: Invalid TdBuf div index(%u) !!
Line 1726: ###[NR_MEAS] DeinitializeTDBuf: Done, td_buf_idx_div(%u)
Line 1748: ###[NR_MEAS] (F) DeinitializeTDBuf: Invalid TdBuf index(%u) !!
Line 1764: ###[NR_MEAS] DeinitializeTDBuf: Done, td_buf_idx(%u)
Line 5696: ###[NR_MEAS] MeasHwStateUpdate: for Meas HW Start
Line 5711: ###[NR_MEAS] MeasHwStateUpdate: bw:%d, numRx:%d, sameFFTcoreFlag:%d, numCell:%d
Line 5726: ###[NR_MEAS] MeasHwStateUpdate: bw:%d, numRx:%d, sameFFTcoreFlag:%d, numCell:%d
Line 5737: ###[NR_MEAS] MeasHwStateUpdate: for Meas HW Stop
Line 5742: ###[NR_MEAS] MeasHwStateUpdate: bw:%d, numRx:%d, sameFFTcoreFlag:%d, numCell:%d
Line 615: ###[NR_MEAS] (F) HALMEAS5G_SetMeasRequest: Wrong number of req cell(%d) !!
Line 626: ###[NR_MEAS] HALMEAS5G_SetMeasRequest: Done(%d), %s
Line 3837: ###[NR_MEAS] InitializeBuffers: Done, isInitCall: %d
Line 934: ###[NR_MEAS] SetCfgInfo: meas_mode(%d), meas_type(%d), start_sfn(%d), meas_dur(%d), meas_serv_bw(%d), n_cell(%d), rsrp_mode(%d)
Line 937: ###[NR_MEAS] SetCfgInfo: scs(%d), ssb_format(%d), ssb_period(%d), start_re(%d), freq_range(%d), L_Max(%d), rtg_cc(%d)
Line 941: ###[NR_MEAS] SetCfgInfo: rx_mode(0x%x), front_cc(%d, %d), td_buf_info(0x%x, 0x%x), ssb_bitmap0(0x%x), ssb_bitmap1(0x%x)
Line 943: ###[NR_MEAS] SetCfgInfo: hfi(%d), rsarp_mode(%d), bd_4rx(%d)
Line 953: ###[NR_MEAS] SetCfgInfo: num_ue_ant: %d
Line 1014: ###[NR_MEAS] SetCfgInfo: Total scheduled cell cnt: %d, num_ue_ant: %d, cell_cnt_except: %d
Line 1029: ###[NR_MEAS] SetCfgInfo: multi_freq_mode: %d
Line 1101: ###[NR_MEAS] SetCfgInfo: m_MeasSchedInfo.n_cell: %d init_meas_cnt: %d
Line 1182: ###[NR_MEAS] CSI RS[%d]: SlotOffset Correction: Periodicity(%d ms), StartSfnSlotOffset(%d), RsSlotOffset(%d) --> (%d)
Line 1335: ###[NR_MEAS] SetCfgInfo: CSI RS: WARNING: m_MeasSchedInfo.n_cell %d exceeds 16
Line 1338: ###[NR_MEAS] ===================================CSI RS Scheduling================================================
Line 1360: ###[NR_MEAS] CellIdx/SubCellIdx/CsiRsIdx(%09d) PCI(%d) FrameTime(%u) SlotOffset(%d) lo(%d) k0k1k2(0x%3x)
Line 1364: ###[NR_MEAS] ================================================================================================
Line 1424: ###[NR_MEAS] SetCfgInfo: SSB index detection schedule, CellIdx: %d, cid: %d, offset: %u, rs_type: %d, path_ind: %d, accum_cell_cnt: %d
Line 1429: ###[NR_MEAS] SetCfgInfo: SS-RSRP measure bit map not 0
Line 1498: ###[NR_MEAS] SetCfgInfo: SS-RSRP measure, CellIdx(%d), cid(%d), offset(%u), rs_type(%d), hfi(%d), accum_cell_cnt(%d), 4Rx_ind(%d)
Line 1500: ###[NR_MEAS] SetCfgInfo: SS-RSRP measure, isLowEngCell(%d), ssb_num(%d), blind_pbch_en(%d), rs_type_ssb(%d), sinrMode(%d), fdAvg(%d), path_ind(%d)
Line 1508: ###[NR_MEAS] SetCfgInfo: NrMeasScheInfo: n_cell %d, n_grp %d, rtg_idx(SystemTimeIdx) %d, td_buf_idx(tdBufCc) %d
Line 1533: ###[NR_MEAS] SetCfgInfo: Parameter (multi-freq, cellIdx:%d), mf_bw_idx: %d, mf_start_re: %d
Line 1545: ###[NR_MEAS] SetCfgInfo: Path info. (multi-freq, cellIdx:%d), mf_rtg_cc: %d, mf_rxf_out_idx: %d, mf_td_buf_idx: %d
Line 3744: ###[NR_MEAS] Initialize: Done
Line 3615: ###[NR_MEAS] ScheduleMeas: Cur Atti: %u, sched Start Atti: %u, End Atti: %u
Line 3631: ###[NR_MEAS] (F) ScheduleMeas: Measure schedule fail, Cur Atti: %u, Meas Start Atti: %u, diff: %d
Line 3686: ###[NR_MEAS] ScheduleMeas: rtg_cnt(0x%08x, sfn: %u, tti: %u, asfn: %u), current gen cnt(0x%08x, smp_cnt: %u fr_cnt: %u)
Line 3689: ###[NR_MEAS] ScheduleMeas: rtg(%d), fr_tick_val: %u, fr_diff: %d, cand_gen_fr_cnt: %u, sched_start_sfn: %u, sched_start_asfn: %u, sched_end_asfn: %u
Line 3692: ###[NR_MEAS] ScheduleMeas: (start_sfn =>) cand_gen_cnt(%u) = fr_tick_val(%u) + cand_gen_fr_cnt(%u) * 2457600
Line 2130: ###[NR_MEAS] CalcTiming: Update for HFI=1, isfn(%d)
Line 2169: ###[NR_MEAS] CalcTiming: 5ms L2N measure, _start_cand_fr_cnt: %d
Line 2181: ###[NR_MEAS] CalcTiming: idx: %d, (Target frame pos =>) cand_timing: %u, (Target SSB pos =>) cand_timing_req: %u
Line 2197: ###[NR_MEAS] CalcTiming: Exception 1, cur_gencnt_160ms: %u, tot_gen_cnt: %u
Line 2203: ###[NR_MEAS] CalcTiming: Exception 2, cur_gencnt_160ms: %u, tot_gen_cnt: %u
Line 2222: ###[NR_MEAS] CalcTiming: Exception 3, slot boundary check, cur_gencnt_160ms: %u, diff: %d, slotLenth: %u, tot_gen_cnt: %u
Line 2228: ###[NR_MEAS] CalcTiming: cell_cnt: %d, meas_time_unit: %u, tot_gen_cnt: %u, cand_gen_cnt: %u
Line 2346: ###[NR_MEAS] CalcTimingCsirs: cell_cnt: %d
Line 2349: ###[NR_MEAS] CalcTimingCsirs: Using SSB OFFSET csirs_offset: %u, tot_gen_cnt: %u, csirs_sym_offset: %u, gencnt_per_symb[p_cfg->scs]: %u, start_offset_csirs: %u
Line 2351: ###[NR_MEAS] CalcTimingCsirs: period_csirs:%d, first_sym_time_domain: %d, cur_fr_cnt: %u
Line 2366: ###[NR_MEAS] CalcTimingCsirs: tot_gen_cnt: %u, isfn: %u, islot: %d, isym: %d, start_offset_csirs: %u
Line 2478: ###[NR_MEAS] ConfigureTDBuf: grp_cnt: %d, cell_cnt: %d
Line 2408: ###[NR_MEAS] TurnTDBufClock: isOn: %u, RxSample Buffer Clock RT/NRT/245(0x%x, 0x%x, 0x%x)
Line 1789: ###[NR_MEAS] (F) MapTDBufCc: Invalid RTG index(%u) RxF Out index(%u) TdBuf index(%u) !!
Line 1816: ###[NR_MEAS] MapTDBufCc: SystemIdx/RxFOutIdx/TdBufIdx(%u, %u, %u)
Line 1823: ###[NR_MEAS] (F) MapTDBufCc: Invalid RxF Out div index(%u) TdBuf div index(%u) !!
Line 1828: ###[NR_MEAS] MapTDBufCc: RxFOutIdxDiv/TdBufIdxDiv(%u, %u)
Line 1841: ###[NR_MEAS] MapTDBufCc: Done
Line 1878: ###[NR_MEAS] (F) MapTDBufCcForMultiFreqMode: Invalid RTG index(%u) RxF Out index(%u) TdBuf index(%u) !!
Line 1882: ###[NR_MEAS] MapTDBufCcForMultiFreqMode: RtgIdx/RxFOutIdx/TdBufIdx(%u, %u, %u)
Line 1908: ###[NR_MEAS] MapTDBufCcForMultiFreqMode: Done
Line 1569: ###[NR_MEAS] (F) InitializeTDBuf: Invalid TdBuf index(%u) !!
Line 1590: ###[NR_MEAS] InitializeTDBuf: Done, serv_bw(%u), td_buf_idx(%u)
Line 1597: ###[NR_MEAS] (F) InitializeTDBuf: Invalid TdBuf div index(%u) !!
Line 1610: ###[NR_MEAS] InitializeTDBuf: Done, serv_bw(%u), td_buf_idx_div(%u)
Line 1638: ###[NR_MEAS] (F) InitializeTDBuf: Invalid TdBuf index(%u) !!
Line 1659: ###[NR_MEAS] InitializeTDBufForMultiFreqMode: Done, serv_bw(%u), td_buf_idx(%u)
Line 2594: ###[NR_MEAS] ConfigureTDBuf_CellConfig: _4Rx_ind: %d, path_ind: %d, td_buf_idx(%d, %d)
Line 2683: ###[NR_MEAS] ConfigureTDBuf: slotbitmap: 0x%x 0x%x, 0x%x, SCS: %d, smtcDurIdx: %d, n_slot: %d
Line 2688: ###[NR_MEAS] ConfigureTDBuf_RssiBitmap: symbitmap: 0x%x, slotbitmap: 0x%x 0x%x, 0x%x, n_slot: %d
Line 2749: ###[NR_MEAS] ConfigureTDBuf_Position: (LowEngCell) update tot_gen_cnt: %d -> %d
Line 2753: ###[NR_MEAS] ConfigureTDBuf_Position: update tot_gen_cnt: %d -> %d
Line 2763: ###[NR_MEAS] ConfigureTDBuf_Position: start_gen_cnt: %u, start_fr_cnt: %u
Line 2768: ###[NR_MEAS] ConfigureTDBuf_Position: measgrp_schedule0: 0x%x
Line 2784: ###[NR_MEAS] ConfigureTDBuf_Position: schedule1: 0x%x isfn: %d islot: %d isym: %d
Line 2808: ###[NR_MEAS] ConfigureTDBuf_Position: bitmap0Val: 0x%x, bitmap1Val: 0x%x
Line 2869: ###[NR_MEAS] ConfigureTDBuf_Position: CSI RS: MREG.pREG_RXSAMPLEBUF_RT_MEAS->TD_BUF_MEAS_NRNGRP0.CELL[cell_cnt].BITMAP[0] val: 0x%x, BITMAP[1] val: 0x%x
Line 2873: ###[NR_MEAS] ConfigureTDBuf_Position: CSI RS: MREG.pREG_RXSAMPLEBUF_RT_MEAS->TD_BUF_MEAS_NRNGRP1.CELL[cell_cnt].BITMAP[0] val: 0x%x, BITMAP[1] val: 0x%x
Line 3058: ###[NR_MEAS] ConfigureMeas: n_grp: %d, remaing: %d, n_cell: %d, n_cell_per_grp0:%d n_cell_per_grp1:%d, n_cell_per_sche: %d
Line 3081: ###[NR_MEAS] ConfigureMeas: SSB: cell_cnt  %d, grp_cnt %d
Line 3143: ###[NR_MEAS] ConfigureMeas: SSB: scs_ft_tb: %d, serv_bw_tb: %d, freq_range: %d, scs: %d, meas_serv_bw: %d
Line 3145: ###[NR_MEAS] ConfigureMeas: SSB: fft_size: %d, rb_num: %d, guard_size: %d, ssb_offset: %u, start_re: %d
Line 3169: ###[NR_MEAS] ConfigureMeas: DC offset reduction: cell_cnt(%d), dcIdx(%d) = guard(%d) + ssb offset(%d) + 120
Line 3185: ###[NR_MEAS] ConfigureMeas: CSI_RS: cell_cnt: %d, grp_cnt: %d
Line 3206: ###[NR_MEAS] ConfigureMeas: CSI_RS: MREG.pREG_DEMOD_5G_MEAS->MEASNRCELLCFG[%d] addr: 0x%x, val: 0x%x
Line 3260: ###[NR_MEAS] ConfigureMeas: CSI_RS: MREG.pREG_DEMOD_5G_MEAS->MEASNRCSIRSCELL%dSUB0CFG addr: 0x%x, val: 0x%x
Line 3267: ###[NR_MEAS] ConfigureMeas: CSI_RS: MREG.pREG_DEMOD_5G_MEAS->MEASNRCSIRSCELL%dSUB%dCFG addr: 0x%x, val: 0x%x
Line 3306: ###[NR_MEAS] ConfigureMeas: CSI_RS: freq_alloc_bitmap: %d, guard_size: %d
Line 3315: ###[NR_MEAS] ConfigureMeas: CSI_RS: csirs_meas_lowerlimit: %d, csirs_meas_upperlimit: %d, guard_size: %d, k_first: %d, k_last:%d
Line 3322: ###[NR_MEAS] ConfigureMeas: CSI_RS: MEASNRCSIRSCELL%dSUB0INBAND addr: 0x%x, val: 0x%x
Line 3331: ###[NR_MEAS] ConfigureMeas: CSI_RS: MEASNRCSIRSCELL%dSUB%dINBAND addr: 0x%x, val: 0x%x
Line 3348: ###[NR_MEAS] ConfigureMeas: CSI_RS: MEASNRCELL%dRS Xmask addr: 0x%x, val: 0x%x, Ymask addr: 0x%x, val: 0x%x
Line 3358: ###[NR_MEAS] ConfigureMeas: CSI_RS: MEASNRCSIRSCELL%dSUB%d Xmask addr: 0x%x, val: 0x%x, Ymask addr: 0x%x val: 0x%x
Line 3555: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 3557: ###[NR_MEAS] MeasGrpSwReset: Done, grpIdx: %u
Line 3429: ###[NR_MEAS] UpdateCfgInfo: grp_cnt: %d, n_cells_per_grp: %d
Line 3473: ###[NR_MEAS] UpdateCfgInfo: grp_cnt: %d, cell_cnt: %d, cid: %d, used_rxmode: 0x%X, shm_idx: %d, path_ind: %d
Line 3503: ###[NR_MEAS] UpdateCfgInfo: req n_cells(%d): n_grp(%d), n_cells_per_grp0(%d), n_cells_per_grp1(%d), n_cells_per_sche(%d), remaining_cells(%d)
Line 3896: ###[NR_MEAS] EnableMeasDmover: Not supported type(%d)
Line 3906: ###[NR_MEAS] EnableMeasDmover: imemBaseAddr(0x%X), m_MeasDmRes(0x%X), measDmResAddrOffset(0x%X)
Line 5768: ###[NR_MEAS] dump: ========== Normal dump ==========
Line 5770: ###[NR_MEAS] dump: ========== Abnormal dump ==========
Line 5775: ###[NR_MEAS] dump: [grpIdx: %u] DMover Magic Num prev: %d, cur: %d, isMnUpdated: %d, size: %d
Line 5781: ###[NR_MEAS] dump: ========== REG_RXSAMPLEBUF
Line 5782: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5783: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5785: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5786: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5787: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5789: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5790: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5792: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5793: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5794: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5795: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5796: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5797: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5804: ###[NR_MEAS] dump: serv_bw(%d), rtg_idx(%d), td_buf_idx(%d)
Line 5805: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5806: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5807: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5808: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5809: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5810: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5813: ###[NR_MEAS] dump: serv_bw(%d), td_buf_idx_div(%d)
Line 5814: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5815: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5816: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5817: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5818: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5819: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5831: ###[NR_MEAS] dump: serv_bw(%d), rtg_idx(%d), td_buf_idx(%d)
Line 5832: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5833: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5834: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5835: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5836: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5837: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5842: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5843: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5844: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5845: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5846: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5847: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5848: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5849: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5850: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5851: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5855: ###[NR_MEAS] dump: TD Buf grp_cnt: %d
Line 5858: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5860: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5866: ###[NR_MEAS] dump: TD Buf grp_cnt: %d, cell_cnt: %d
Line 5868: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5869: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5870: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5871: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5872: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5873: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5874: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5875: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5876: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5877: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5879: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5880: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5881: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5882: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5883: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5884: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5885: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5886: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5887: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5888: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5892: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5895: ###[NR_MEAS] dump: ========== REG_DEMOD_5G_MEAS
Line 5896: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5899: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5900: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5905: ###[NR_MEAS] dump: Meas grp_cnt: %d
Line 5906: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5907: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5908: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5909: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5910: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5915: ###[NR_MEAS] dump: Meas grp_cnt: %d, cell_cnt: %d
Line 5916: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5917: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 5918: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6072: ###[NR_MEAS] ========== DumpMeasCsiDatamoverReg ==========
Line 6076: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6077: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6078: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6079: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6080: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6081: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6084: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6085: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6086: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6087: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6123: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6124: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6127: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6129: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6130: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6131: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6132: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6133: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6134: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6135: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6136: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6137: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6142: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6143: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6144: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6145: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6146: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6147: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6148: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6149: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6150: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6151: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6152: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6153: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6156: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6157: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6158: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6159: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6160: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6161: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6162: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6163: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6176: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6178: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6215: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6216: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6219: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6221: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6222: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 6240: ###[NR_MEAS] dump: %s: addr/val(0x%08x/0x%08x)
Line 717: ###[NR_MEAS] HALMEAS5G_ProcComposeResult: n_grp(%d)
Line 5607: ###[NR_MEAS] ComposeResult: Done, grpIdx: %d
Line 3959: ###[NR_MEAS] (F) GetDataMoverMeasResult: Abnormal dmover size and additional 16 bytes info, idx: %d
Line 3961: ###[NR_MEAS] (F) GetDataMoverMeasResult: 0x%08X %08X %08X %08X
Line 3963: ###[NR_MEAS] (F) GetDataMoverMeasResult: 0x%08X %08X %08X %08X
Line 3965: ###[NR_MEAS] (F) GetDataMoverMeasResult: 0x%08X %08X %08X %08X
Line 3967: ###[NR_MEAS] (F) GetDataMoverMeasResult: 0x%08X %08X %08X %08X
Line 3977: ###[NR_MEAS] GetDataMoverMeasResult: CSIRS: m_MeasDmRes/CsiRsMeasData[dm_idx] addr: 0x%x/0x%x
Line 3980: ###[NR_MEAS] GetDataMoverMeasResult: SSB: m_MeasDmRes/SsbMeasData[dm_idx] addr: 0x%x/0x%x
Line 3984: ###[NR_MEAS] GetDataMoverMeasResult: grp_idx: %d, dm_idx: %d, n_cells_per_grp: %d
Line 3995: ###[NR_MEAS] GetDataMoverMeasResult: cell_cnt[%d], dm_address[%u], rs_type: %d, rs_type_ssb: %d, sinrMode: %d, fdAvg: %d, ssb_num: %d
Line 4049: ###[NR_MEAS] GetDataMoverMeasResult: ssb_cnt:%2u, gain_rsrp(Rx0/1):%7u, grp/cell/ssb:%4u, SSS(rsrp:%9u, rs_pwr:%9u), PBCH(rsrp:%9u, rs_pwr:%9u)
Line 4060: ###[NR_MEAS] GetDataMoverMeasResult: Abnormal H/W raw data!
Line 4102: ###[NR_MEAS] GetDataMoverMeasResult: grp/cell:%u, gain_rssi(Rx0/1):%7u, rssi:%9u
Line 4106: ###[NR_MEAS] GetDataMoverMeasResult: DumpMeasNrRptBufRData, invalidResultCnt:%d
Line 4120: ###[NR_MEAS] GetDataMoverMeasResult: rs_type: CSI_RS, cell_cnt : %d, csirs_num: %d,  dm_address: %d, Readaddress: 0x%x
Line 4160: ###[NR_MEAS] GetDataMoverMeasResult: dm_address: %d, noOfCsiRs: %d, meas_gain_rsrp: %d %d, meas_gain_rssi: %d %d
Line 4164: ###[NR_MEAS] GetDataMoverMeasResult: Readaddress: 0x%x, cell_idx:%d, grp_idx: %d, subcell_idx: %d
Line 4171: ###[NR_MEAS] GetDataMoverMeasResult: rsrp(%d %d), rssi(%d %d), rs_pwr(%d %d)
Line 4180: ###[NR_MEAS] GetDataMoverMeasResult: Dump, invalidResultCnt:%d
Line 5939: ###[NR_MEAS] ========== DumpMeasNrRptBufRData ==========
Line 5941: ###[NR_MEAS] DumpMeasNrRptBufRData: grpIdx: %d, baseAddr: %d, ssbNum: %d
Line 5958: ###[NR_MEAS] DumpMeasNrRptBufRData: ssbCnt[%02u] = 0x%08X
Line 5960: ###[NR_MEAS] DumpMeasNrRptBufRData: ssbCnt[%02u] = 0x%08X
Line 5962: ###[NR_MEAS] DumpMeasNrRptBufRData: ssbCnt[%02u] = 0x%08X
Line 5964: ###[NR_MEAS] DumpMeasNrRptBufRData: ssbCnt[%02u] = 0x%08X
Line 5966: ###[NR_MEAS] DumpMeasNrRptBufRData: ssbCnt[%02u] = 0x%08X
Line 5971: ###[NR_MEAS] DumpMeasNrRptBufRData: rssi = 0x%08X
Line 5973: ###[NR_MEAS] DumpMeasNrRptBufRData: rssi = 0x%08X
Line 4824: ###[NR_MEAS] ResultCompenForSSB: CellCnt[%d]: nsym: %d, nslot: %d, rssi_sym_norm_compen: %d, rssi_slot_norm_compen: %d, rssi_norm_compen: %d, rssi_norm_total_sym: %d
Line 4950: ###[NR_MEAS] ResultCompenForSSB: cell_cnt/ssb_cnt/ssb_idx:%5u, rsrp_sss(%d), rsrp_pbch(%d), res_diff_rsrp(%d)
Line 5525: ###[NR_MEAS] SortParsedDmResult: Done, cellCnt:%d, ssbNum:%d
Line 5099: ###[NR_MEAS] metricCalculation: (RSRP enhancement POST) cell_cnt[%d], ssb_cnt[%d], rxk[%d]: rsrp: %d -> %d, rs_sinr: %d -> %d
Line 5239: ###[NR_MEAS] ResultCompenForCSIRS: nre: %d, scs_dB_comp: %d, sys_bw_dB_comp: %d, cal_factor_rsrp: %d
Line 5296: ###[NR_MEAS] ResultCompenForCSIRS: nrb: %d meas bw : %d
Line 5338: ###[NR_MEAS] ResultCompenForCSIRS: Cell: %d, CSIRS IDX %d, RSSI(%d %d)
Line 5345: ###[NR_MEAS] ResultCompenForCSIRS: RSRP(%d %d), RSRQ(%d %d), RS-SINR(%d %d)
Line 4321: ###[NR_MEAS] UpdateResult: grp_idx: %d, n_cells_per_grp: %d, isValidResult: %d, isDmResultValid: %d
Line 4383: ###[NR_MEAS] UpdateResult: CellCnt[%d], SsbCnt[%03d]: total_cell_cnt: %d, _4rx_ind: %d, path_ind: %d
Line 4426: ###[NR_MEAS] UpdateResult: rx_cnt/update_path/ssbIdx:%05u, valid:%d, RSSI(%d), RSRP(%d), RSRQ(%d), RS_SINR(%d), MEAS_GAIN(%d)
Line 4478: ###[NR_MEAS] UpdateResult: rx_cnt/update_path/ssbIdx:%05u, valid:%d, RSSI(%d), RSRP(%d), RSRQ(%d), RS_SINR(%d), MEAS_GAIN(%d)
Line 4539: ###[NR_MEAS] UpdateResult: rx_cnt/path_offset/CsiRsIdx:%05u, valid:%d, RSSI(%d), RSRP(%d), RSRQ(%d), RS_SINR(%d), MEAS_GAIN(%d)
Line 5371: ###[NR_MEAS] PostProcOfMeasHwForRsarp: SSB: m_MeasDmRes/SsbMeasData[dm_idx] addr: 0x%x/0x%x
Line 5374: ###[NR_MEAS] PostProcOfMeasHwForRsarp: grp_idx: %d, dm_idx: %d, n_cells_per_grp: %d
Line 5384: ###[NR_MEAS] PostProcOfMeasHwForRsarp: cell_cnt[%d], dm_address[%u]
Line 5395: ###[NR_MEAS] PostProcOfMeasHwForRsarp: gain_rsrp(Rx0/1):%7u, grp/cell/ssb:%4u
Line 5428: ###[NR_MEAS] PostProcOfMeasHwForRsarp: smp_cnt:%2u, exp, mantissa_I/Q (%d, %d, %d), recovered_I/Q (%d, %d)
Line 5461: ###[NR_MEAS] PostProcOfMeasHwForRsarp: corr I/Q Rx0-%d (%d, %d)
Line 5492: ###[NR_MEAS] PostProcOfMeasHwForRsarp: rsarp_idx/ssbIdx:%05u, valid:%d, norm Q(%d), rsarp(%d)
Line 5497: ###[NR_MEAS] PostProcOfMeasHwForRsarp: Dump, invalidResultCnt:%d
Line 3396: ###[NR_MEAS] DeconfigureMeas: Done, grpIdx: %d
Line 2925: ###[NR_MEAS] DeconfigureTDBuf: Done, grpIdx: %d
Line 742: ###[NR_MEAS] HALMEAS5G_ProcMeasStop: Not scheduled
Line 764: ###[NR_MEAS] HALMEAS5G_ProcMeasStop: Done
Line 5634: ###[NR_MEAS] SetMeasStopCmd: Done, grpIdx: %d
