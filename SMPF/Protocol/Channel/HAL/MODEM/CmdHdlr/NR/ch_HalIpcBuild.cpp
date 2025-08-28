Line 118:    ###[NR_IPC][BUILD] WAKEUP_INIT: mxr_path(%d, %d), rnti(%d) domain_type(%d)
Line 147:    ###[NR_IPC][BUILD] WAKEUP_INIT: cc(0x%4x, cc8/div_cc8), rfd(0x%4x, pri8/div8), rx_mode(0x%x), duplex(%d), cell_id(%d), dl_freq(%d), ssb(0x%4x, Idx8Scs4), band(%d)
Line 168:    ###[NR_IPC][BUILD] WAKEUP_INIT: ssb_start_offset(%d), ssb_subcarrierOffset(%d), scs_common_4/dmrs_typeA_4/HFI_4(0x%4x), k_ssb(%d), SFN(%d), minChBw(%d), FR(%d)
Line 179:    ###[NR_IPC][BUILD] BuildSysParamCfgInfo: cmd(%d), event(%d), lcpu_rel_flag(%d), rx_path(%d), bw(%d), bwp_with_ssb(%d)
Line 239:    ###[NR_IPC][BUILD] BuildSysParamCfgInfo: rx_path(%d), rxf_bw(%d), rx_mode(%d), ssb_sc_offset(%d), fft_sc_offset(%d), bwp_idx(0x%4x, U4D4), dl_freq(%d)
Line 245:    ###[NR_IPC][BUILD] BuildSysParamCfgInfo: ul_info_phy(%d, %d, %d), scell_ul_info(%d, %d, %d)
Line 249:    ###[NR_IPC][BUILD] BuildSysParamCfgInfo: rx_path_map{rx(0x%4x), rfd(0x%4x), td_buf(%d), td_buf_div(%d), rf(0x%4x), rtg(%d)}
Line 253:    ###[NR_IPC][BUILD] BuildSysParamCfgInfo: tx_path_map{core(%d), lmac_cmd(%d), enc(%d), enc_mem(0x%x), mod(0x%x), layer(%d)}
Line 276:    ###[NR_IPC][BUILD] BuildSloRfCtrlInfo(old interface) : recv_rx_path(%d), pcell4/master4(0x%x), slo_master{rx_path(0x%x), demod_cc(0x%x)}, domain_type(%d), rf_ctrl(%d)
Line 290:      ###[NR_IPC][BUILD] BuildSloRfCtrlInfo(new interface) : It does not need to change master demod cc(%d) => is_pcell(%d), pcell_path(%d)
Line 319:    ###[NR_IPC][BUILD] BuildSloRfCtrlInfo(new interface) : recv_rx_path(%d), slo_master_rtg(%d), cur_cc_type(%d), slo_master_demod_cc(%d)
Line 334:    ###[NR_IPC][BUILD] BuildSloRfCtrlInfo(new interface) : recv_rx_path(%d), is_scell_deact(%d), cc_en(%d), master_cc/rtg(%d, %d), is_pcell4/is_changed_slo_master4(0x%x), domain_type(%d)
Line 344:    ###[NR_IPC][BUILD] BuildSysParamSloInfo : path_info_idx(%d), rf_info_idx(%d), dmxr_freq_slo(%d), domain_type(%d)
Line 354:    ###[NR_IPC][BUILD] BuildSysParamSloInfo : rf_dl_freq(%d), rf_ul_freq(%d), rx_dl_band(%d)
Line 375:      ###[NR_IPC][BUILD] Need to check SLO RF Param: rf_ul_bw(%d), rf_dl_bw(%d)
Line 389:    ###[NR_IPC][BUILD] BuildSysParamSloInfo(DL SLO): dl_flag(%d), rf_dl_bw(%d), dl_slo_freq_offset(%d)KHz, dl_rf_center_freq(%d)
Line 391:    ###[NR_IPC][BUILD] BuildSysParamSloInfo(UL SLO): ul_flag(%d), rf_ul_bw(%d), phy_ul_bw(%d), ul_slo_freq_offset(%d)KHz
Line 415:    ###[NR_IPC][BUILD] BuildSysParamSysTimeInfo: dl_bw(%d), target_bw(%d), duplex_mode(%d), scs(%d), change_param(%d)
Line 436:    ###[NR_IPC][BUILD] BuildSysParamRxPathMap: rx_path(%d), path_map cc(0x%x, pri8/div8), rx_mode(%d), rfd_str_idx(0x%x, pri8/div8)
Line 451:    ###[NR_IPC][BUILD] BuildUlActInd: core_idx(%d), mod_idx[0](0x%x) mod_idx[1](0x%x) ul_freq(%d), ul_bw(%d)
Line 471:      ###[NR_IPC][BUILD] error!!! pMacCellGrp is NULL
Line 480:      ###[NR_IPC][BUILD] error!!! pPhyCellGrp is NULL
Line 497:      ###[NR_IPC][BUILD] error!!! sPcellCfg is NULL
Line 512:    ###[NR_IPC][BUILD] %s, SpcellConfigPresentBitmask 0x%x %x, rnti(%d), scell_idx(%d)
Line 519:    ###[NR_IPC][BUILD] ReconfigWithSyncPresentBitmask 0x%x %x
Line 527:      ###[NR_IPC][BUILD] SERVINGCELL_CONFIG_COMMON_MASK is absent
Line 531:    ###[NR_IPC][BUILD] use previous initBwpDlCommon configuration
Line 535:      ###[NR_IPC][BUILD] initBwpDlCommon is NULL
Line 566:      ###[NR_IPC][BUILD] error!!! abnormal ReconfigWithSyncRachConfigDedicated value
Line 577:    ###[NR_IPC][BUILD] ReconfigWithSyncStatus is %d
Line 582:      ###[NR_IPC][BUILD] RECONFIGWITH_SYNC_MASK is absent
Line 586:    ###[NR_IPC][BUILD] use previous initBwpDlCommon configuration
Line 590:      ###[NR_IPC][BUILD] initBwpDlCommon is NULL
Line 622:    ###[NR_IPC][BUILD] %s, ServingCellConfigCommonSIBPresentBitmask(0x%x %x), domain_type(%d)
Line 643:      ###[NR_IPC][BUILD] SpcellConfigDedicated INITIAL_DOWNLINK_BWP_MASK is absent
Line 653:      ###[NR_IPC][BUILD] pSpcell is NULL
Line 708:      ###[NR_IPC][BUILD] SpcellConfigDedicated INITIAL_UPLINK_BWP_MASK is absent
Line 718:      ###[NR_IPC][BUILD] uplinkConfig is NULL
Line 724:      ###[NR_IPC][BUILD] pSpcell is NULL
Line 773:      ###[NR_IPC][BUILD] TDD_ULDL_CONFIGURATION_COMMON_MASK is absent
Line 776: ###[TAS] [%d][%d] BuildSib1PcellCfgReq:: [FDD] Set TxDutyRatiox100 to 100
Line 791:    ###[NR_IPC][BUILD] Sib1PresentBitmask 0x%x %x
Line 803:      ###[NR_IPC][BUILD] SI_REQUEST_CONFIG_MASK is absent
Line 809:      ###[NR_IPC][BUILD] pSib1 is NULL
