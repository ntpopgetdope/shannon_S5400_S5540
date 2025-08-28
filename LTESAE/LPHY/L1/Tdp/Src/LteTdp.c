Line 518: DEMOD_SUB disabled - waiting DEMOD_CORE
Line 825: [CDRX_QS][interrupt][before] quick_sleep_status(0x%x), sync_int_time_18(0x%x)
Line 858: [CDRX_QS][Debug] decinfo_dm(0x%x),dci_obuf_0_dm(0x%x),decinfo.reg(0x%x),obuf0(0x%x)
Line 868: [CDRX_QS] PHY CDRX handler has sent higher layer the CDRX sleep IPC for fast sleep !!!
Line 871: [CDRX_QS][Debug] PHY CDRX Gtti(%d),dcidm_sfn.tti_idx(%d), decinfo(0x%x), obuf0(0x%x), ulflag(%d)
Line 885: [CDRX_QS][interrupt][after] quick_sleep_status(0x%x), sync_int_time_27(0x%x)
Line 943: D2dSync_Isr:%d
Line 1204: IPC: IPC_ACTION_ID_TDP_CONFIG(Message) : coreID[0x%x], currentReadIndex[0x%x], dataSize[0x%x], cell_group[0x%x], cc[0x%x], scell_index[0x%x]
Line 1215: IPC: IPC_ACTION_ID_TDP_CONFIG(Message) : Agc[Valid/En/Path](0x%x/0x%x/0x%x), Afc[Valid/En](0x%x/0x%x), Str[Valid/En](0x%x/0x%x), Ca_Act0x%x), Cc_Idx(0x%x) 
Line 1220: IPC: IPC_ACTION_ID_TDP_CONFIG : SCell Enable(w/ Activation) -> Cc_Idx(%d)
Line 1234: IPC: IPC_ACTION_ID_TDP_CONFIG : SCell Disable(w/o DeActivation) -> Cc_Idx(%d)
Line 1282: IPC: IPC_ACTION_ID_TDP_CONFIG [Act CC Num : %d] [AGC][CC0] : %d
Line 1337: IPC: IPC_ACTION_ID_TDP_CONFIG [Act CC Num : %d] [AFC][CC0] : %d
Line 1367: IPC: IPC_ACTION_ID_TDP_CONFIG [Act CC Num : %d] [STR][CC0] : %d
Line 1407: PCH CONFIG by TDP IPC : pch_valid_flag %d,drx_T(%d),pf(%d),po(%d),nB(%d),ue_state(%d)
Line 1488: IPC: IPC_ACTION_ID_SET_DMXR_FREQ_INIT [BEFORE], ind_type[%d], pair_num[%d], cc[%d][%d][%d][%d], dmxr_freq_value[%d][%d][%d][%d]
Line 1500: IPC: IPC_ACTION_ID_SET_DMXR_FREQ_INIT [BEFORE], ind_type[%d], pair_num[%d], cc[%d][%d][%d][%d], changed_ind[%d][%d][%d][%d]
Line 1695: (F)IPC: IPC_ACTION_ID_SET_DMXR_FREQ_INIT -> Invalid SLO config indication [%d] !!!
Line 1732: IPC: IPC_ACTION_ID_SET_DMXR_FREQ_INIT [AFTER], ind_type[%d], pair_num[%d], cc[%d][%d][%d][%d], dmxr_freq_value[%d][%d][%d][%d]
Line 1744: IPC: IPC_ACTION_ID_SET_DMXR_FREQ_INIT [AFTER], ind_type[%d], pair_num[%d], cc[%d][%d][%d][%d], changed_ind[%d][%d][%d][%d]
Line 1795: Invalid PA,PB value[%d](%d, %d)[%d]
Line 1819: Invalid PA,PB value[%d](%d, %d)[%d]
Line 1835: Invalid PA,PB value[%d](%d, %d)[%d]
Line 1872: [LTEPHY][CC : %d]Pa: %d, Pb : %d, n_antP : %d, flag_mode : 0x%x
Line 1873: [LTEPHY][CC : %d]Pa_dB: %d, Pb_dB : %d, n_antP : %d
Line 1874: [LTEPHY][CC : %d]Rho_a_rx: %d, Rho_b_rx : %d, n_antP : %d
Line 1876: [LTEPHY][CC : %d]pa(%d), pb(%d), enbant(%d), RMS[Ctrl_dB : %d](RMS : %d, Pa_offset : %d)
Line 2006: [FD_AGC][PATH_INFO](0/1/2/3) : %08d, (4/5/6/7) : %08d, (8/9/10/11) : %08d, [Pa/Pb/TxAnt] : (CC0/1/2) : %09d, (3/4) : %09d, eCSAT/LAA[0x%08x]
Line 2023: [FD_AGC][LAA][En|Ind|Prv|Cur|AgcBy|AfcBy] 0x%6x, 0x%6x, 0x%6x, 0x%6x, 0x%6x, 0x%5x, 0x%5x [SLO pair : CC0~CC4] : 0x%x [CompT] : 0x%x
Line 2100: [FD_AGC][IDX/FD/TD/MarTD](0-9) : (0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x)
Line 2131: [FD_AGC][IDX/FD/TD/MarTD](10-19) : (0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x)
Line 2156: [FD_AGC][IDX/FD/TD/MarTD](20-29) : (0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x)
Line 2172: [FD_AGC][IDX/FD/TD/MarTD](30-39) : (0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x)
Line 2227: [FD_AGC][RMS](CC0-3) : 0x%08x, (CC4-7) : 0x%08x, [QS](CC0-7) : 0x%08x, [FLAG] : (0x%08x), AGC_Cfg_Bypass : 0x%08x, fr2_rf_onoff : %d, fdagcpath0tx0rx0(0x%x) core1(0x%x)
Line 2338: [FD_AFC][AngleDiff](CC0-3) : (%d, %d, %d, %d), [Mxr(DL)](CC0-3) : (%d, %d, %d, %d), [AngleOut](0/1) : %08d, (2/3) : %08d
Line 2362: [FD_AFC][Mxr(UL)] : (%d, %d), [UL_FREQ] : (%d, %d), [MPLL/FPLL/MWPLL(delta)] : (%d/%d/%d), [TCXO_FREQ_OFFSET] : %d, [RF_FREQ] : %d
Line 2376: [FD_AFC][Real](CC0-3) : (%d, %d, %d, %d) [Imag](CC0-3) : (%d, %d, %d, %d)
Line 2430: [FD_AFC][AngleDiff](CC4-7) : (%d, %d, %d, %d), [Mxr(DL)](CC4-7) : (%d, %d, %d, %d), [AngleOut](4/5) : %08d, (6/7) : %08d
Line 2455: [FD_AFC][Real](CC4-7) : (%d, %d, %d, %d), [Imag](CC4-7) : (%d, %d, %d, %d)
Line 2686: [AGAP : Pre]gapRrcState : %d, gap_in : %d, RXF_FREQ_x_VALUE : 0x%x
Line 3009: [FD_AFC][CC%d][SLO][Afc_Upt_En]:%d, [Afc_Ctrl_En]:%d, [slo_afc_upt]:%d
Line 3069: [FD_AGC] cck(%d), AGC Hold by QS(%d)
Line 3117: [FDAGC][Block Configuration][exception] cell gourp[%d],ccNum[%d] FdagcResetCheckFlag[0x%x]isOver[%d]
Line 3145: [FDAGC][Block Configuration] cell gourp[%d],ccNum[%d] FdagcResetCheckFlag[0x%x]hit_condition[%d]
Line 3338: CC%d:: [cc_rx_path %d][Adc_Path : %d]FD_AGC gain change %d[LoopFilterOut] with %d[Current read], Comp_Idx : %d
Line 3360: initialize compen previous value when agc gain changed  cc:%d tti:%d rxk:%d 
Line 3548: [FD_AFC] AdcPath is not valid [cc : %d][adc_path : %d]
Line 3572: [FD_AFC][CC%d][BEFORE]p_AFC_data->InOrder_BufIdx_Afc: %d
Line 3594: [FD_AFC][CC%d][BEFORE]TimeCorr_LOG :: Register value : %d, loop value(loop only + bw_norm) : %d, SLO_offset : %d, bw_norm : %d, mixer_init_value : %d
Line 3621: [FD_AFC][CC%d][AFTER]TimeCorr_LOG :: Register value : %d, loop value(loop only + bw_norm) : %d, SLO_offset : %d, bw_norm : %d, mixer_init_value : %d
Line 3643: [FD_AFC][CC%d][BEFORE]TimeCorr_LOG :: Register value : %d, loop value(loop only + bw_norm) : %d, SLO_offset : %d, bw_norm : %d, mixer_init_value : %d, Config_Ind(%d)
Line 3672: [DEBUG] RXF_MIX_RAT_SAMPLING_MODE : %d, ADC_PATH : %d, SLO_SCALE : %d, SAMPLING_FREQ_DL : %d, mixer_init_value : %d
Line 3699: [FD_AFC][CC%d][AFTER]TimeCorr_LOG :: Register value : %d, loop value(loop only + bw_norm) : %d, SLO_offset : %d, bw_norm : %d, mixer_init_value : %d, Config_Ind(%d), SloPairNum(%d), Upt/Ctrl(%d/%d)
Line 3714: [FD_AFC][CC%d][AFTER]p_AFC_data->InOrder_BufIdx_Afc: %d
Line 3724: (E)[FD_AFC][CC%d] NO MIXER CHANGE, SLO CONFIG IND(%D)
Line 3727: [SLO CHECK] AFC_MIXER_CUR value : %d, lv_RXF_MIXER_FREQ_VALUE[cck] 
Line 3750: [FD_AFC][CC%d] Afc_En : %d, Afc_ctrl_En : %d, Register value : %d, Cotrol value : %d, loop_mem(w/o scale) : %d, mixer_init_value : %d 
Line 3779: [FD_AFC][CC%d] gapRunState : %d, gapRrcState : %d, first_ind_agap : %d, mixer_init_value_agap : %d, dl_dmxr_scale : %d
Line 3786: [FD_AFC] Invalid AFC Mode : %d
Line 3998: [LTETDP_Laa_Dci_Detection] wrong Cck!
Line 4016: [LTETDP_Laa_1st_Dci_Detection][Before]CC(%d)_LAA_SLEEP_STATE(0x%x), current_dci_result(%d), Ind : %d
Line 4019: [LTETDP_Laa_1st_Dci_Detection][After]CC(%d)_LAA_SLEEP_STATE(0x%x), current_dci_result(%d), Ind : %d
Line 4113: [TDP][LAA][CC%d][CG : %d] Current subframe is end one of this burst !!! => sf_type[TTI_PRV2] : %d, sf_type[TTI_PRV1] : %d, sf_type[TTI_CUR] : %d, sf_type[TTI_NXT] : %d
Line 4135: [TDP][LAA][CC%d] Init. subframe detection is running  !!!
Line 4143: [TDP][LAA][CC%d]Init. subframe detection success, Normal TDP operation is going to run at next suframe !!!
Line 4147: [TDP][LAA][CC%d] Init. subframe detection is running  !!!
Line 4451: [DVFS_CPU_LOG] [DeMod Sub][0x%x][Thr : 61439][current_rtg]cg: %d, CcNum : %d, cur_tti: %d, current_time_in_tti : %d
