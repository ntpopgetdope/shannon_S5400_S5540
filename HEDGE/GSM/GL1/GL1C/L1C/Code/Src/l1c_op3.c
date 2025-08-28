Line 493: pch_tgl_conflict check %d
Line 518: PScell start_fn %d toggle_fn_51 %d status_flag %d
Line 554: schedule PCH2 1 frm before
Line 578: SScell start_fn %d toggle_fn_51 %d status_flag %d
Line 586: Recheck conflict: pch_tgl_conflict check %d
Line 611: PScell start_fn %d toggle_fn_51 %d status_flag %d
Line 672: TGL-CBCH 1 overlap detected 
Line 679: TGL-CBCH 1 overlap : CBCH1 not present 
Line 708: TGL-CBCH 2 overlap detected 
Line 716: TGL-CBCH2 overlap : CBCH2 not present 
Line 721: [#####Array] Size violation 
Line 789: pch_abs_fn %d scell_pch_fn51 %d
Line 833: abs_fn_scell_pch_wrt_primary %d sec_scell_pch_fn51 %d
Line 890: prim_scell_tc %d sec_scell_tc %d
Line 897: PCH RR same TC & MF
Line 906: PCH RR diff TC & same MF
Line 914: PCH RR same TC & MF
Line 922: l1c_prim_pg_fn51 %d  l1c_sec_pg_fn51 %d
Line 934: PCH RR Prim Before Sec
Line 948: PCH RR sec before prim
Line 962: PCH RR prm sec same fn
Line 977: PCH RR Prim Before Sec
Line 990: PCH RR Sec before Prim
Line 1009: pch_rr_required %d
Line 1120: scheduling PCH1 %d Simno %d pg_blk_tdma_fn %d
Line 1280: SEC SCELL PCH ABS FN %d , %d 
Line 1296: scheduling PCH2 %d %d pg_blk_tdma_fn %d page2_tdma_fn %d
Line 1301: SCELL2 not camped %d %d
Line 1415: scheduling PCH1 %d %d pg_blk_tdma_fn %d
Line 1422: Primary Scell Not present
Line 1527: DRX:Swap Secondary PCH Delayed: %d
Line 1563: SEC SCELL PCH ABS FN %d , %d 
Line 1577: scheduling PCH2 %d %d pg_blk_tdma_fn %d page2_tdma_fn %d
Line 1584: SCELL2 not camped %d %d
Line 1659: CBCH supported fn=%d
Line 1701: CBCH not supported d%d s%d
Line 1706:  CBCH1: Wrong primary serving cell simno %d
Line 1743: CBCH2 supported fn=%d TS= %d
Line 1785: CBCH2 not supported d%d s%d cbch2-ts%d
Line 1790:  CBCH2: Wrong secondary serving cell simno %d %d
Line 1856: l1c_listen_to_full_cch(%d)
Line 1864:  l1x_scell_sysinfo_error_cnt set to %d
Line 1925: l1c_listen_to_full_cch grant
Line 1930: l1c_listen_to_full_cch reject
Line 1992:   Same Cell :l1_Scell->arfcn %d  p_l1_passive_chn_data->cell_params[l1c_processing_sim].cell_desc.bcch_carrier %d
Line 2004:   New Cell :l1_scell.arfcn %d l1_scell.simno %d  p_l1_passive_chn_data->cell_params[%d].cell_desc.bcch_carrier %d  l1c_comm_controller->l1_new_scell.simno %d
Line 2068: l1c_restart_idle_task {%i}
Line 2229: l1c_camp_on_new_cell(%d) {%i}
Line 2251: S: RESEL :l1c_comm_controller->l1_new_scell.arfcn %d  l1c_comm_controller->l1_new_scell.Simno %d
Line 2253: Updated Synch repo Arfcn %3d Simno:%d
Line 2258: *** ERROR : 'nSynchGetEntryByArfcn()' function returns NULL
Line 2431: l1c_swap_on_new_cell  FROM:Arfcn(%d) Simno(%d) TO:Arfcn(%d) Simno(%d) Frame{%i}
Line 2523: l1c_idle_req_processing_sim ->%d
Line 2725: l1c_stop_si_reading {%i}
Line 2746:  is_page_params_valid[0] %d is_page_params_valid[1] %d index %d 
Line 2751: Restart periodic task for primary SIM 
Line 2755: periodic task  restart issue CHECK!  %d
Line 2881: l1c_stop_current_activity {%i}
Line 2948: Data ongoing Inc FB/SB interval
Line 3004: l1c_find_sb(%d) {%i}
Line 3024: SCELL Present
Line 3051: Toggle job found updated offset to %d
Line 3071: Frame offset %d gap_mfrm_offset %d
Line 3104: FB/SB sync already in queue
Line 3125: Synch Already present (%d) {%i}
Line 3132: SCELL Not present, FB/SB scheduled parallely %d
Line 3144: frame_offs %d l1c_51fn_after_toggle %d
Line 3161: Sync already happening
Line 3196: Add sync at offset %d l1f_cur_job_len %d
Line 3202: SCELL Not present
Line 3212: SCELL Not present: l1c_nsynch_cell.arfcn %d
Line 3229: l1c_find_sb_reject (requestreponse=%d) Insert l1x_dsl1rc_resource_request ofs(%d)
Line 3283: skip Initial FB/SB due to IRAT
Line 3310: l1c_find_sb_grant(requestreponse=%d) ofs(%d) nfrm(%d)
Line 3317: l1c_find_sb_grant(requestreponse=%d)
Line 3327: l1c_find_sb_grant(requestreponse=%d) frame_offs %d
Line 3333: l1c_find_sb_grant(requestreponse=%d) frame_offs %d
Line 3348: l1c_find_sb_reject (requestreponse=%d) Insert l1x_dsl1rc_resource_request ofs(%d)
Line 3420: l1c_find_sb_for_blind_ho(%d) {%i}
Line 3446: Adding Tcell into MMA list during blind HO (%d)
Line 3609: Ext Pg already in queue {%i}
Line 3612: l1c_read_ext_paging {%i}
Line 3662: l1c_job51_ext_pch_seq SKIP - l1c_specific_pag_mfrm (%d) tdma_fn(%d) pg_blk_tdma_fn(%d) l1x_toggle_pending(%d)
Line 3721: l1c_read_sec_ext_paging {%i}
Line 3746: DRX: EXT-PCH2 Secondary PCH Delayed: %d
Line 3790: EXT PCH2: scell_abs_fn %d frm_offs %d pch_abs_fn %d tdma_fn %d
Line 3811: l1c_job51_ext_pch2_seq SKIP - l1c_specific_pag_mfrm (%d) tdma_fn(%d) pg_blk_tdma_fn(%d) l1x_toggle_pending(%d)
Line 3885: l1c_check_nbcch_pg_conflict: Page_fn_204=%d ,SI3_fn_204=%d
Line 3918: l1c_check_nbcch_pg_conflict: SI requested:0x%x
Line 3953: PG conflict with SI 3
Line 3968: PG conflict with SI 4 (%x)
Line 3975: PG conflict with SI 78
Line 3982: PG conflict with SI 13
Line 3989: PG conflict with SI 13Ext
Line 3993: NO SI's conflict with PCH1 
Line 4046: Sec Scell Asn Fn=%d ,ncell_abs_fn=%d ncell_sec_scell_fn_offset %d
Line 4058: l1c_check_nbcch_pg_conflict: Page_fn_204=%d ,SI3_fn_204=%d SScell fn %d
Line 4097: l1c_check_nbcch_sec_pg_conflict: SI requested:0x%x
Line 4131: PG conflict with SI 3
Line 4146: PG conflict with SI 4 (%x)
Line 4153: PG conflict with SI 78
Line 4160: PG conflict with SI 13
Line 4167: PG conflict with SI 13Ext
Line 4171: NO SI's conflict with PCH2 
Line 4200: l1c_ncell_si_already_scheduled: Read NCell Arfcn:%d
Line 4203: l1c_bcch_ongoing_arfcn %d Active arfcn %d sim %d
Line 4209: Already BCCH ongoing on same ARFCN
Line 4230: cell(%d) to %d fo %d bsic %d
Line 4265: [GL1 Error] ERROR WRONG BCCH TYPE (%d)
Line 4272: NORMAL BCCH needed
Line 4278: EXTENDED BCCH needed
Line 4284: Old BCCH type %d not matching bcch_type %d
Line 4290:  l1x_bcch_controller->l1x_bcch_ncell_info.sync_info_required(%d)
Line 4324: Primary scell CONFLICT CHECK 
Line 4334: Secondary scell CONFLICT CHECK 
Line 4345: BPLMN NBCCH  CONFLICT CHECK with PCH1 & PCH2 
Line 4358: BPLMN NBCCH  CONFLICT CHECK : TRUE 
Line 4362: BPLMN NBCCH  CONFLICT CHECK : FALSE SIM1(%d) SIM2(%d)
Line 4410: l1c_read_ncell_si_cont: Read NCell Arfcn:%d
Line 4420: *** ERROR wrong NBCCH req
Line 4435: cell(%d) to %d fo %d bsic %d
Line 4445:  l1x_bcch_controller->l1x_bcch_ncell_info.sync_info_required(%d)
Line 4518: [GL1 Error] ERROR WRONG BCCH TYPE (%d)
Line 4528: Primary Paging Parameters: ag_blks:%d, pa_mfrm:%d, ccch_grp:%d, page_group:%d, page_block_index:%d
Line 4535: Secondary Paging Parameters: ag_blks:%d, pa_mfrm:%d, ccch_grp:%d, page_group:%d, page_block_index:%d
Line 4582: schedule NBCCH 1 frm before
Line 4595: l1c_bcch_type %d
Line 4652: toggle_fn %d toggle_offset_active_passive %d l1c_51fn_after_toggle %d
Line 4678: Parallel l1c_read_ncell_si_cont: Read NCell Arfcn:%d
Line 4691: *** ERROR wrong NBCCH req
Line 4704: cell(%d) to %d fo %d bsic %d
Line 4718: [GL1 Error] l1c_si_num_sch (%d) l1c_si_schedule.A[%d].bcch_type (%d)
Line 4737: Parallel Ncell: Paging Parameters: ag_blks:%d, pa_mfrm:%d, ccch_grp:%d, page_group:%d, page_block_index:%d
Line 4765: schedule NBCCH 1 frm before for Parallel Ncell
Line 4876: Multiple BCCH read requested in PTM [%d] %d
Line 4884: Multiple BCCH read requested in PTM [%d] %d
Line 4921: schedule NBCCH 1 frm before
Line 4952: si_abs_fn: %d qb_offset_bch_start: %d
Line 4960: l1c_read_si_in_ptm: Read Arfcn:%d
Line 4968: BCCH read cannot be done now %d
Line 5019: BCCH on sim %d not allowed as BCCH already happening on %d
Line 5097: l1c_read_scell_si_cont {%i}
Line 5117: *** ERROR bcch_read_reason(%d) for SCELL(%d)
Line 5126:  l1x_bcch_ncell_info.sync_info_required(%d)
Line 5135: l1c_si_num_sch %d bcch_type %d  bs_ag_blks_res %d
Line 5385: l1c_start_idle_mode(%d) {ARFCN: %d FN %i-> ARFCN: %d FN: %i}
Line 5399: PCCCH_TO_CCCH current scell(%d)->new scell(%d)
Line 5443: RESEL :l1c_comm_controller->l1_new_scell.arfcn %d  l1c_comm_controller->l1_new_scell.Simno %d
Line 5447: *** ERROR : 'nSynchGetEntryByArfcn()' function returns NULL
Line 5505: CELL_SWAP : l1c_comm_controller->l1_new_scell.arfcn %d  l1c_comm_controller->l1_new_scell.Simno %d
Line 5509: *** ERROR : 'nSynchGetEntryByArfcn()' function returns NULL
Line 5516: SWAP_SIM2_TO_SIM1 l1c_comm_controller->l1_new_scell.Simno %d
Line 5523: SWAP_SIM1_TO_SIM2 l1c_comm_controller->l1_new_scell.Simno %d
Line 5647: l1c_start_pg_reorg {%i}
Line 5772: l1c_update_ba_list(mode :%d) {%i}
Line 5777: Not yet camp on a cell
Line 5810: l1c_serve_cb
Line 5914: l1c_start_periodic_tasks(%d) {%i}
Line 6024: l1c_skip_cbch StopReq %d
Line 6056: CBCH prio changed
Line 6102: CBCH2 prio changed
Line 6123: Wrong Processing Sim: %d
Line 6181: CBCH slot not matching Byte Pos %d, bit Pos %d
Line 6187: [#####Array] Size violation l1c_processing_sim(%d), byte_pos(%d)
Line 6243: Next CBCH: After %d ms 
Line 6281: l1c_start_cbch_drx
Line 6318: Configuring DRX mode for Inactive 3G BPLMN scan 
Line 6386: MPH_BPLMN_SYNC_IND  %d   %d
Line 6419: BPLMN Stopped: Avoid SYNC_IND
Line 6450: ERR: Wrong SimNo
Line 6457: ERR: Wrong SimNo
Line 6486: BPLMN Stopped: Avoid SYNC_IND
Line 6551: MPH_SYNC_IND  Arfcn %d Status %d snr %d
Line 6577: Dummy MPH_SYNC_IND for fastSync %d %d
Line 6700: Data ongoing skip FB/SB here
Line 6705: Full Idle Static: skip FB/SB here
Line 6710: UMTS State:%d 
Line 6717: IRAT SCAN REQ in Queue. Restrict FB/SB
Line 6724: FB_SB going on for BCCH read ARFCN
Line 6753: l1c_schedule_bplmnsearch
Line 6761: l1c_read_ncell_si_cont_parallel_bplmnsearch: invalid Bplmn ncell
Line 6767: l1c_read_ncell_si_cont_parallel_bplmnsearch: NO Bplmn ncell SI to read
Line 6787: BPLMN ncell arfcn not there in nCellSynchRep table
Line 6799: Ongoing BPLMN FB/SB search ARFCN(%d) cleared
Line 6906: IDLE mode restart on new primary Scell %d
Line 6923: [GL1 Error] pause time:  %d Time32UsecRead: %d 
Line 6926: GL1_Pause_Duration %d otherclient_RequestReason is %d
Line 6937: [2G DVFS] In TRANSFER : currentState %d
Line 6966: RESUME RSSI SCAN : IS_cellsearch_PAUSE = FALSE
Line 6974: DSL1RC RESUME in DRX 
Line 6978: RESUME RSSI SCAN : IS_cellsearch_PAUSE = FALSE
Line 6985: DO NOTHING FOR DSL1RC RESUME
Line 7026: PAUSE already in queue
Line 7063: PAUSE TRANSFER STATE: %d
Line 7075: PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
Line 7092: PAUSE Done will be sent aft %d Frames
Line 7105: Skip sending pause_done as supend procedure ongoing 
Line 7160: PAUSE in WAIT State: FrmOff: %d
Line 7178: PAUSE Non DRX
Line 7189: PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
Line 7194: PAUSE DONE : G2U Irat measurement going on
Line 7206: PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
Line 7211: PAUSE RSSI SCAN : release already scheduled. Send PauseDone after frmOffset(%d)
Line 7230: PAUSE DRX %d
Line 7242: PAUSE in L1C_SINGLE_BLOCK_WAIT frmOffset %d
Line 7254: Default case PAUSE frmOffset %d
Line 7262: [2G DVFS Debug] In TRANSFER, DVFS Skip : currentState %d
Line 7314: PAUSE already in queue
Line 7354: PAUSE TRANSFER STATE frmOffset %d
Line 7376: PAUSE TRANSFER WAIT: %d
Line 7388: PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
Line 7417: Skip sending pause_done as supend procedure ongoing 
Line 7467: PAUSE in WAIT State: FrmOff: %d
Line 7483: PAUSE Non DRX
Line 7495: PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
Line 7501: PAUSE DONE : G2U Irat measurement going on
Line 7513: PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
Line 7532: PAUSE DRX %d
Line 7549: [2G DVFS Debug] In TRANSFER, DVFS Skip : currentState %d
Line 7569: SKIP AUTO_PAUSE
Line 7581: l1c_l1fSleepWakeup() sleep_wakeup=%d
Line 7602: Default_INIT_flag == TRUE : POWER ON
Line 7606: l1c_rfcal_running == TRUE : CAL MODE
Line 7662: [2G DVFS] Wrong message num
Line 7684: [GL1 Error] Pause time =%d currentTime =%d
Line 7730: GL1_DSL1RC: previous frame lost %d
Line 7736: Too Early to pause =%d
Line 7779: StartEarlyPauseTime timeduration=%d, currentTime=%d currentState %d Frames to Pause =%d
Line 7801: autopause_remaining_frames %d
Line 7836: IsPsPsEnabled = %d resume_ready_count = %d
Line 7902: [##DCXO_Recovery] Arfcn: %d DSDS Cause = %d isRepeatBCHReqEnabled %d simNum %d
Line 7915: Requesting SIM ID wrong. Check!
Line 8002: l1c_check_nbcch_pg_conflict: Page_fn_204=%d ,SI3_fn_204=%d
Line 8020: l1c_check_nbcch_pg_conflict: SI requested:0x%x
Line 8040: PG conflict with SI 3
Line 8048: PG conflict with SI 4 (%x)
Line 8052: NO SI's conflict with PCH1 
Line 8103: Sec Scell Asn Fn=%d ,ncell_abs_fn=%d ncell_sec_scell_fn_offset %d
Line 8115: l1c_check_nbcch_pg_conflict: Page_fn_204=%d ,SI3_fn_204=%d SScell fn %d
Line 8142: l1c_check_nbcch_sec_pg_conflict: SI requested:0x%x
Line 8162: PG conflict with SI 3
Line 8170: PG conflict with SI 4 (%x)
Line 8174: NO SI's conflict with PCH2 
Line 8192: Set l1c_rachPrepStatus %d
Line 413: l1c_set_bsic_acq_target: starting sync on ARFCN %d when acquiring sync for ARFCN %d
Line 2617: L1cAbortTransferAndRestartIdleTask(%d)
