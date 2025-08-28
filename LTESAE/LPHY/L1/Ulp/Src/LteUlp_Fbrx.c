Line 311: [PM_DEBUG] FbrxGainSet[ul_cc_idx:%d]=> power_val = %d, fbrxgain_wordidx = %d, fbrxgain_numWords = %d, fbrxgain_stage = %d, fbrxgain_addr = 0x%x, fbrxgain_data = 0x%x
Line 346: [PM_DEBUG] This FBRX already on. ul_cc_idx : %d, ltm_set_enable : %d
Line 362: PM_module[On](hispd_feedback_onoff_addr)=> spi write fail [0x%x]
Line 423: [PM_DEBUG][smdebug] START_TICK sent. wordNum : %d, addr : 0x%x, word : 0x%x, orig_addr : 0x%x, FBRX_START : [0x%x / 0x%x]
Line 428: PM_module[On](fbrx_tick_mode_word_num)=> spi write fail [0x%x]
Line 457: PM_Module On[ul_cc_idx:%d]=> fbrx_status = 0x%x, FBRX_START : [0x%x / 0x%x], a_b_set = %d, word_add = 0x%x, a_val = %d, b_val = 0x%x, word_on_num = %d
Line 466: PM_module[On]=> pm_module_set_fail. spi write fail [0x%x]
Line 524: PM_module[Off]=> spi write fail [0x%x]
Line 543: PM_Module off[ul_cc_idx:%d]=> word_off_num:%d, a_b_set:%d, fbrx_dcr_accum:0x%x, dcr_acc_adr:0x%x, dcr_acc_ov_adr:0x%x
Line 654: (W) PM_Module => FBRX disabled due to IDLE DTX. ul_cc_idx : %d
Line 699: [PM_DEBUG] FBRX read is skipped: %d
Line 763: [PM_DEBUG] continuous same FBRX result detected. ul_cc_idx : %d, pm_val : %d, cnt : %d
Line 770: PM_Module=> ul_cc_idx/dl_cc_idx:%02d, UL_CH:0x%x, scaledPwr:%d, PD:%d, PM_val = %d(FbrxGainConstant: %d), fbrx_priority/fbrx_own_cnt/nrOnStatus/fbrxReqByNR: 0x%x, gain_mode/gain_en(1/1): %d, clAit_status: %d, fbrxAbnormalCnt:%d
Line 774: PM_Module=> FBRX report skip / ul_cc_idx/dl_cc_idx:%02d, CL-AIT:%d, SKIP:%d
Line 786: PM_Module=> Tx TTI config was set, but FBRX Module is not ready (detect_ch : 0x%x, target Pwr : %d)
Line 1007: [PM_DEBUG] ul_tx_path : %d, ul_cc_idx : %d, ul_tti_config : 0x%x
Line 1022: [PM_DEBUG][MeasPM] Different with previous meas Tx path. ul_cc_idx:%d, latest_meas_tx_path:%d, ul_active_num:%d, pathSelDone:%d, two_ant_used:%d
Line 1031: [PM_DEBUG][MeasPM] Duplicated with previous meas Tx path. ul_cc_idx:%d, latest_meas_tx_path:%d, ul_active_num:%d, pathSelDone:%d, two_ant_used:%d
Line 1107: Reduced FBRX Meas => ReducedFbrxMeas_NV: %d, dbg_level: %d, fbrx_en: %d, ul_tti_config: 0x%x
Line 1114: [PM_DEBUG] FBRX read skipped. ul_cc_idx : %d, fbrxMeasRate is %d
Line 1124: [PM_DEBUG] FBRX read skipped. ul_cc_idx : %d, fbrxMeasRate_cnt : %d
Line 1150: FBRX read skipped. ul_cc_idx : %d, shm_ul_cc_idx : %d, skip_cnt : %d
Line 1197: [PM_DEBUG][FbrxShrCtrl][ST] tti_con:0x%x/0x%x, latest_meas_tx_path:%d, prev_prior : %d, fbrx_priority:%d, fbrx_own_cnt:%d, nrOnStatus:%d
Line 1244: [PM_DEBUG][OwnCheck][PRIOR_H] fbrxOwnerFlag:%d, fbrx_priority:%d, fbrx_en:%d
Line 1261: [PM_DEBUG][OwnCheck][PRIOR_L] prach_on:%d, fbrxOwnerFlag:%d, fbrxReqByNR:%d, nrOnStatue:%d
Line 1296: PM_Module=>[OwnChg][L->H] fbrxOwnerFlag:%d, prev_priority : %d, fbrx_priority:%d, fbrx_en:%d, fbrx_own_cnt:%d, nrOnStatus:%d, fbrxReqByNR:%d
Line 1344: PM_Module=>[OwnChg][N->H] fbrxOwnerFlag:%d, prev_priority : %d, fbrx_priority:%d, fbrx_en:%d, fbrx_own_cnt:%d, nrOnStatus:%d, fbrxReqByNR:%d
Line 1365: PM_Module=>[SkipMeas] fbrxOwnerFlag:%d, prev_priority : %d, fbrx_priority:%d, fbrx_en:%d, fbrx_own_cnt:%d, nrOnStatus:%d, fbrxReqByNR:%d
Line 1382: [PM_DEBUG][FbrxShrCtrl][ED] tti_con:0x%x/0x%x, latest_meas_tx_path:%d, fbrx_priority:%d, fbrx_own_cnt:%d, nrOnStatus:%d
Line 1408: [FBRX_CPL][on_word] (W) Number of word is not supported. word_num:%d
Line 1418: [FBRX_CPL] (W) Unsupported MIPI channel. onWord, shmIdx:%d, wordIdx:%d, fbrx_coupler_mipi_ch:%d
Line 1439: [FBRX_CPL][ON] ul_cc_idx/ant_idx : %d, word_num : %d, mipiCh : [%d/%d/%d/%d], word : 0x%x/0x%x/0x%x/0x%x
Line 1444: [FBRX_CPL][off_word] (W) Number of word is not supported. word_num:%d
Line 1454: [FBRX_CPL] (W) Unsupported MIPI channel. offWord, shmIdx:%d, wordIdx:%d, fbrx_coupler_mipi_ch:%d
Line 1475: [FBRX_CPL][OFF] ul_cc_idx/ant_idx : %d, word_num : %d, mipiCh : [%d/%d/%d/%d], word : 0x%x/0x%x/0x%x/0x%x
Line 1581: [PM_DEBUG][FBRX_CPL] Turn Off coupler for prev ON ant_idx before switching to new ant_idx. cmd : %d, fbrx_read_skip: %d
Line 1592: [PM_DEBUG][FBRX_CPL] CouplerCtrl ant index check => ul_cc_idx : %d, shm_ant_idx : %d, curr_ant_idx : %d, cmd: %d, prevOn_antidx: %d
Line 1646: [FBRX_CPL] Mipi config for AS => ul_cc_idx/ant_idx : %d, mipich: %d, cmdIdx: %d, wordIdx : %d, cpl_wordnum : [%d/%d], cpl_word : [0x%x][0x%x]
Line 1655: [FBRX_CPL] ant_idx: %d, mipiCh : %d, mipiWordNum : %d, word : [0x%x][0x%x][0x%x]
Line 1666: [PM_DEBUG] FBRX coupler set Error. result : %d
Line 1727: PM_Module=> FBRX is not configured. pd_type : %d, ul_cc_idx : %d
Line 1735: PM_Module=> FBRX is configured. pd_type : %d, ul_cc_idx : %d
Line 1751: [PM_DEBUG] FBRX control [LTE DSP => NR DSP] fbrxResumeReq : %d
Line 1776: [PM_DEBUG] FBRX control [LTE DSP => RF Drv] ul_cc_idx : %d, shm_ul_cc_idx : %d
Line 1804: [PM_DEBUG] FBRX control [RF Drv => LTE DSP] ul_cc_idx : %d, shm_ul_cc_idx : %d
Line 1822: [PM_DEBUG] FBRX On/Off blocked. ulp_rf_ctrl_en : %d
Line 1942: feedback_control[0x%x][0x%x], feedback_onoff_num[0x%x][0x%x], hispd_feedback_onoff_addr[0x%x][0x%x], feedback_onoff_data[0x%x][0x%x], fbrx_dcr_address[0x%x][0x%x]
Line 219: cell_group : %d, ul_cc_idx[control/shm] : 0x%x, cmd : %d, ltm_set_enable : %d, cl_ait_on : %d, clAit_non_sig_on : %d
Line 972: [PM_DEBUG] FBRX Status Check : 0x%x
Line 2029: [PM_DEBUG] DSPTX_FbrxAgc0Reset ul_cc_idx : %d, value : 0x%x, feedback_control:0x%x
