Line 316: [DEBUG] HALTX_SleepOkFlag: SPS configured
Line 347: HALTX_SleepOkFlag: RdDoneIdx/RdIdx/MaxWdIdx/HisrRdIdx[%d/%d/%d/%d] LTEL2_GetRlcBo[%d] dwConvLcid/rlcbo[%d/%d] 
Line 458: ul_srs : srs_bandwidth = %d, freq_domin_position = %d, hopping_bw = %d, duration = %d, trans_comb = %d, cyclic_shift = %d, srs_Configuration_Index = %d
Line 463: srs config : Release
Line 768: cqi : reporting_mode_aperiodic = %x
Line 796: cqi : pdsch_offset = %d, cqi_reporting_periodic_enable = %d, cqi_PUCCH_Resource_Index = %d, cqi_Format_Indicator_type = %d, pmi_Config_Index = %d
Line 801: cqi : cqi_Format_Indicator_Periodic.wide_band_cqi = %d
Line 807: cqi : cqi_Format_Indicator_Periodic.subband_cqi = %d
Line 814: cqi : ri_Config_Index = %d
Line 819: cqi : simultaneous_AckNack_And_CQI = %d
Line 857: cqi config : Release
Line 884: PCELL cqi_report_config_v1310_setup:%d, cqi_report_aperiodic_v1310_setup:%d
Line 971: scheduling_req_config : sr_PUCCH_ResourceIndex = %d, sr_Configuration_Index = %d, dsr_trans_max = %d
Line 983: scheduling_req_config : Release
Line 991: scheduling_req_r10_config : sr_PUCCH_ResourceIndexP1 = %d
Line 1022: HALTX_SetULBandWidth(CC%d): gDrx_ActiveRat(%d)
Line 1047: Change UL BW : %d -> %d, Cell_info(%d, %d)
Line 1052: Change UL CP Type : %d -> %d, Cell_info(%d, %d)
Line 1162: assert condition : ph_ind is NULL
Line 1233: more than 2 UL grant, but at most 2 UL grants can be processed.
Line 1273: [ERROR] HALTX_ProcULGrantIntr : Invalid StackId[%d] !!!!
Line 1316: UL Grnat Error : num[%d], num_cell[%d], type1_ph_num[%d]
Line 1329: Pending GRANT [ID:%d, %d],[0x%X]%d/%d/%d/%d
Line 1337: Interrupt New UCI, before Complete Prev UCI, LMAC Busy(%d)
Line 1352: GRANT [ID:%d, %d],[0x%X]%d/%d (mode:%d, cg:%d)
Line 1495: HALTX_ProcDMADoneIntr : FeDV SCell wrong!!!!
Line 1515: HALTX_ProcDMADoneIntr : HID[%d], SWHarqBufStatus[A:%x/D:%x], AsyncSHM[%x]
Line 1583: ul_rs_sib : group_hopping_enable = %d, group_assign_pusch = %d, seq_hopping_enable = %d, cyclic_shift = %d
Line 1608: ul_pwr_ctrl : p0_nominal_pusch = %d, alpha = %d, p0_nominal_pucch = %d, ul_cyclic_prefix_length = %d
Line 1616: ul_pwr_ctrl : delta_tp_pucch = {%d, %d, %d, %d, %d}, delta_Preamble_Msg3 = %d
Line 1649: pucch_sib : delta_shift = %d, n_cqi_rb = %d, n_an_cs = %d, n1_pucch_an = %d
Line 1664: pusch_sib : n_SB = %d, hopping_mode = %d, pusch_Hopping_Offset = %d, enable_64_Qam = %d, enable_64_Qam_r12 = %d
Line 1680: ul_srs_sib : srs_bandwidth_config = %d, srs_subframe_config = %d, simultaneous_ack_srs = %d, srs_maxUpPts = %d
Line 1685: ul_srs_sib : NULL
Line 1736: ul_rs_sib : group_hopping_enable = %d, group_assign_pusch = %d, seq_hopping_enable = %d, cyclic_shift = %d
Line 1751: pusch_sib : n_SB = %d, hopping_mode = %d, pusch_Hopping_Offset = %d, enable_64_Qam = %d, enable_64_Qam_r12 = %d
Line 1765: sounding_rs_ul : srs_bandwidth_config = %d, srs_subframe_config = %d
Line 1770: sounding_rs_ul : simultaneous_ack_srs = %d, srs_maxUpPts = %d
Line 1775: ul_srs_sib : NULL
Line 1783: antenna_config : antenna_ports_count = %d
Line 1830: ul_pwr_ctrl : p0_nominal_pusch = %d, alpha = %d, p0_nominal_pucch = %d, ul_cyclic_prefix_length = %d
Line 1838: ul_pwr_ctrl : delta_tp_pucch = {%d, %d, %d, %d, %d}, delta_Preamble_Msg3 = %d
Line 1851: ul_pwr_ctrl_sib : NULL
Line 1884: pucch_config : delta_shift = %d, n_cqi_rb = %d, n_an_cs = %d, n1_pucch_an = %d
Line 1890: pucch_config : NULL
Line 1904: uplink_pwr_ctrl_common_v1310 : NULL
Line 1923: antenna_config : codebook_subset_restriction_type = %d, codebook_subset_restriction = 0x%X
Line 2181: hal_tx :pucch_formatR10.format3_enable = %d , dsp_pucch_r10->pucch_format3_setup = %d
Line 2474: hal_tx : dsp_pucch_r13->pucch_format3_setup = %d
Line 2503: hal_tx : dsp_pucch_r13->n1_pucch_an_cs_setup = %d
Line 2529: hal_tx : dsp_pucch_r13->pucch_format4_setup = %d
Line 2547: hal_tx : dsp_pucch_r13->pucch_format5_setup = %d
Line 2580: hal_tx : dsp_pucch_r13->pucch_r8.valid = %d
Line 2607: hal_tx : dsp_pucch_r13->pucch_r11.valid = %d
Line 2624: hal_tx : dsp_pucch_r13->pucch_r12.valid = %d
Line 2643: hal_tx : pucch_config_r13_setup = %d , dsp_pucch_r13->valid = %d
Line 2648: hal_tx : pucch_config_r13_setup = %d , dsp_pucch_r13->valid = %d
Line 2667: hal_tx : dsp_pucch_v1370->valid = %d
Line 2729: dsp_pusch_r14->valid:%d, enable_256qam_r14_setup:%d , enable_256qam_r14.choice:%d 
Line 2802: msg_ul_pwr_ctrl : p0_ue_pusch = %d
Line 2804: ul_pwr_ctrl : delta_mcs_enable = %d, accumulation_enable = %d
Line 2806: ul_pwr_ctrl : p0_ue_pucch = %d, p_srs_offset = %d, filter_coefficient = %d
Line 2811: ul_pwr_ctrl : NULL
Line 2825: pusch_config : deltaOffset_Ack_Index = %d, deltaOffset_RI_Index = %d, deltaOffset_CQI_Index = %d
Line 2831: pusch_config : NULL
Line 2873: antenna_config : transmission_mode = %d
Line 2878: antenna_config : NULL
Line 2922: pucch_config : tdd_AckNack_Feedback_Mode_present = %d, tddAckNackFeedbackMode = %d
Line 2924: pucch_config : enable_ack_Nack_repetition = %d, repetiton_factor = %d, n1PUCCH_AN_Rep = %d
Line 2930: pucch_config : NULL
Line 3151: hal_tx : dsp_pucch_r13.pucch_format3_setup = %d
Line 3180: hal_tx : dsp_pucch_r13.n1_pucch_an_cs_setup = %d
Line 3206: hal_tx : dsp_pucch_r13.pucch_format4_setup = %d
Line 3224: hal_tx : dsp_pucch_r13.pucch_format5_setup = %d
Line 3257: hal_tx : dsp_pucch_r13.pucch_r8.valid = %d
Line 3284: hal_tx : dsp_pucch_r13.pucch_r11.valid = %d
Line 3301: hal_tx : dsp_pucch_r13.pucch_r12.valid = %d
Line 3320: hal_tx : pucch_config_r13_setup = %d , dsp_pucch_r13.valid = %d
Line 3325: hal_tx : pucch_config_r13_setup = %d , dsp_pucch_r13.valid = %d
Line 3755: [RDBG] SCellIdx(%d), pmi_RI_Report_setup(%d)
Line 3879: scell info config : num_seccell = %d, num_dsp_scell = %d, NumofScellConfig = %d
Line 3915: hal_tx : dsp_pucch_v1370.valid = %d
Line 3949: SCELL Scell_TxDedi.pusch_r14.valid:%d, enable_256qam_r14.choice:%d
Line 4290: HALTX_IsMacTxBusy: RdDoneIdx/RdIdx/MaxWdIdx[%d/%d/%d] 
Line 4303: HALTX_UpdateRdDoneIdx: RdDoneIdx->RdIdx[%d->%d] 
Line 4309: [L2 DEBUG] HALTX_ProcDMADoneIntr : HALTX_ProcOneMoreULGrant!!!
Line 4326: HALTX_FlushMacTxUlGrant: MaxWdIdx[%d], HisrRdIdx[%d], RdIdx[%d], RdDoneIdx[%d]
Line 233: HALTX_ProcUlGrantHisr: Pending Grant!! MaxWdIdx/HisrRdIdx/RdIdx[%d/%d/%d]
