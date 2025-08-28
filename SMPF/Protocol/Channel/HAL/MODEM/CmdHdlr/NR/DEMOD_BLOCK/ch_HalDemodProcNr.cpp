Line 149: ###[NR_DEMOD] InitDemodProcNr()
Line 217: ###[NR_DEMOD] InitScellShmArrayInfo
Line 236: ###[NR_DEMOD] InitScellShmArrayInfo scell_idx(%d) is found in SHM idx (%d)
Line 245: ###[NR_DEMOD] InitScellShmArrayInfo: Init SHM idx[%d]
Line 265: ###[NR_DEMOD] InitHalScellBwpInfo:: init_all_flag(%d)
Line 317: ###[NR_DEMOD] InitNumHalScellInfo:: prev(%d) -> curr(0)
Line 343: ###[NR_DEMOD] ProcPhyConfigReq phy_cfg_update(%d), max_ul_layer(%d), domain_type(%d), m_domainType(%d)
Line 359: ###[NR_DEMOD] ProcPhyConfigReq phy_cfg_update(%d), max_ul_layer(%d), demod_cc(%d), domain_type(%d) scell_idx(%d), m_domainType(%d)
Line 370: ###[NR_DEMOD] ProcPhyConfigReq:: Update Max UL Layer: Prev(%d) -> New(%d)
Line 394: ###[NR_DEMOD] RECV_DRX_INFO valid(%d), on_duration(%d), inact_tmr(%d), cycle(%d), short_drx(%d), slotoffset(%d), skip_tracking(%d)
Line 447: ###[NR_DEMOD] ProcSib1PhyConfigReq:: Invalid phy_cfg_update(%d)
Line 501: ###[NR_DEMOD] ProcSib1PhyConfigReq:: max_ul_layer(%d), domain_type(%d), m_domainType(%d)
Line 586: ###[NR_DEMOD] ProcSib1PhyConfigReq:: Invalid phy_cfg_update(%d)
Line 614: ###[NR_DEMOD] ProcPhyConfigDoneHisr
Line 615: ###[NR_DEMOD] ProcPhyConfigDoneHisr
Line 619: ###[NR_DEMOD] GetRunningExtCmdReq fail [PHY_CONFIG_NR_CMD]
Line 633: ###[NR_DEMOD] Invalid rx_path(%d), rf_path(%d) @ ProcPhyConfigDoneHisr
Line 640: ###[NR_DEMOD] ProcPhyConfigDoneHisr::Update Max UL Layer: Prev(%d) -> New(%d)
Line 652: ###[NR_DEMOD] ProcPhyConfigDoneHisr:: rf_ul_freq(%d)
Line 683: ###[NR_DEMOD] ProcCreateScellCfgReq SCellBitmask(0x%x), AddModSCellBitmask(0x%x), ReleaseSCellBitmask(0x%x), num_of_add_scell(%d), num_of_rel_scell(%d), domain_type(%d), m_domainType(%d)
Line 687: ###[NR_DEMOD] error!!! sPcellCfg is NULL
Line 692: ###[NR_DEMOD] error!!! num of add_scell && rel_scell is 0, total_num_of_scell(%d)
Line 704: ###[NR_DEMOD] Invalid total_num_of_scell is detected. Please ask RRC this issue
Line 723: ###[NR_DEMOD] ProcCreateScellCfgReq rel_scell_idx(%d) is found in SHM idx (%d)
Line 734: ###[NR_DEMOD] Release Scell List [%d] scell_idx(%d), rel_shm_idx(%d), total_num_of_scell(%d)
Line 737: ###[NR_DEMOD] ProcCreateScellCfgReq: Init SHM idx[%d]
Line 781: ###[NR_DEMOD] ProcCreateScellCfgReq:: IPC[%d] scell_idx(%d), cc_idx(%d), lcpu_array_idx(%d) bwp_id(D=0x%x, U=0x%x), FR/Duplex(0x%x)
Line 799: ###[NR_DEMOD] ProcCreateScellCfgReq: total_num_of_scell(%d), num_cc_with_ul(%d), num_cc_with_dl(%d)
Line 816: ###[NR_DEMOD] ProcCreateScellCfgReq:: Invalid ipc_array_idx
Line 841: ###[NR_DEMOD] SHM NrScellConfig Updated Info: scell_idx*10000 + phy_cell_id = [%d]%8d
Line 845: ###[NR_DEMOD] SHM NrScellConfig Info: [%d] written val(ssb_arfcn = %d, point_A = %d, num_of_scs_per_carrier = %d)
Line 849: ###[NR_DEMOD] SCELL_CONFIG_COMMON_MASK is absent
Line 860: ###[NR_DEMOD] SCELL_CONFIG_DEDI is absent
Line 873: ###[NR_DEMOD] SMTC_MASK is absent
Line 882: ###[NR_DEMOD] SHM NrScellConfig Final Info : scell_idx/phy_cell_id [%d]%8d)
Line 903: ###[NR_DEMOD] ProcScellCfgCnf: domain mismatch, SMPF(%d), RECV(%d)
Line 915: ###[NR_DEMOD] ProcScellCfgCnf:: Please check hal_scell_bwp_info (%d, %d)
Line 962: ###[NR_DEMOD] ProcScellCfgCnf: No need to send LCPU_RELEASE for scell_idx(%d), AddModSCellBitmask(0x%x)
Line 978: ###[NR_DEMOD] ProcScellCfgCnf_debug: ReleaseSCellBitmask(0x%x)
Line 984: ###[NR_DEMOD] ProcScellCfgCnf_debug: demod_cc(%d), hal_scell_bwp_info.scell_demod_cc(%d)
Line 1003: ###[NR_DEMOD] ProcScellCfgCnf:: Invalid phy_cfg_update(%d)
Line 1012: ###[NR_DEMOD] ProcScellCfgCnf: scell_cnf_type(%d), scell_cmd(%d), demod_cc(%d), cnf_cnt_recv4/target4(0x%x), num_scell_add4/rel4(0x%x), domain_type(%d)
Line 1098: ###[NR_DEMOD] Restored Conn Info: sib1_pcell_cfg_present_flag(0x%x), nr_ue_id(%d), ue_rnti(%d), common_ul_info(freq = %d, bw = %d)
Line 1117: ###[NR_DEMOD] Restored Conn Drx Info: valid(%d), on_duration(%d), inact_tmr(%d), cycle(%d), short_drx(%d), slotoffset(%d), skip_tracking(%d)
Line 1170: ###[NR_DEMOD] Restored Idle Info: sib1_cfg_present_flag(0x%x), nr_ue_identity(%d), pcch_present_flag(0x%x), paging_cycle(0x%x, D4S4)
Line 1197: ###[NR_DEMOD] RestoredCommonInfo: restore_info(%d), ipc_bitmap(0x%x), domain_type(%d), restored_ue_rnti(%d)
Line 1200: ###[NR_DEMOD] RestoredCommonInfo: UL_ACT_IND(carr_bw(%d), carr_freq(%d), num_tx_ant(%d), tx_path_idx(%d))
Line 1225: ###[NR_DEMOD] Skip sending STORE_PHY_CONFIG IPC
Line 1234: ###[NR_DEMOD] ProcLcpuStorePhyCfg: DrxType(%d), domain_type(%d), targetDemodCc(0x%x)
Line 1273: ###[NR_DEMOD] ForceSendingScellDeactIpc:: num_act_scell(%d), lcpu_act_deact_bitmap(0x%x), domain_type(%d), recovery_flag(%d), m_domainType(%d)
Line 1278: ###[NR_DEMOD] Invalid result of LCPU Scell Deact(0x%x)
Line 1280: ###[NR_DEMOD] Target scell to deact does not exist
Line 1301: ###[NR_DEMOD] Invalid lcpu_act_deact val in rxf info (0x%x)
Line 1306: ###[NR_DEMOD] CheckLcpuScellDeactDone:: 200_us_cnt(%d), rxf_bitmap(0x%x), lcpu_act_deact_bitmap(0x%x)
Line 1315: ###[NR_DEMOD] CheckLcpuScellDeactDone:: 200_us_cnt(%d), total_duration(%d), lcpu_act_deact_bitmap(0x%x), max_wait_time_us(%d)
Line 1358: ###[NR_DEMOD] ProcSysParamChange(PHY_REL): num_hal_scell_info(%d), domain_type(%d), event(%d), skip(%d)
Line 1403: ###[NR_DEMOD] ProcSysParamChange: num_of_hal_scell_info_backup(%d), SCellBitmask_backup(0x%x), AddModSCellBitmask_backup(0x%x), ReleaseSCellBitmask_backup(0x%x), ue_rnti_backup(%d)
Line 1468: ###[NR_DEMOD] ProcSysParamChange: cmd_info4/event4/rx_path8(0x%4x), dmxr_freq_slo(%d), band(%d), rx_dl_freq(%d), rf_dl_freq(%d), bwp_ctrl_on(%d), max_ul_layer(prev1/new1)(%d/%d)
Line 1508: ###[NR_DEMOD] ProcSysParamChange:: num_of_hal_scell_info(%d->%d), pcell_info(dl_offset(%d, %d)/ ul(%d, %d))
Line 1574: ###[NR_DEMOD] GetRunningExtCmdReq fail [SYS_PARAM_CHANGE_NR_CMD]
Line 1603: ###[NR_DEMOD] Sending SYS_PARAM_CHANGE_NR_CMD CB:: num_of_hal_scell(%d), rx_path(%d), cmd_info(%d), event(%d), sync_type(%d), sys_bw(%d), bwp_ctrl_on(%d)
Line 1679: ###[NR_DEMOD] ProcScellConfig:: SCellBitMask(0x%x), AddModSCellBitmask(0x%x), ReleaseSCellBitmask(0x%x), num_of_add_scell(%d), num_of_rel_scell(%d)
Line 1726: ###[NR_DEMOD] ProcScellConfig: demod_cc_bitmap(0x%x), rel_demod_cc_bitmap(0x%x)
Line 1761: ###[NR_DEMOD] No need to send SCELL_CONFIG IPC for Release to LCPU
Line 1774: ###[NR_DEMOD] Sending SCELL_CONFIG IPC for the left CA Scell list: Prev_Num_Scell(%d)
Line 1778: ###[NR_DEMOD] Prev_Sent_Ipc_Info(%d): scell_idx(%d), demod_cc(%d), array_idx(%d)
Line 1798: ###[NR_DEMOD] please check the ipc restore procedure: new_cnt(%d), num_of_scell(%d), rel_cnt(%d)
Line 1804: ###[NR_DEMOD] New_Sent_Ipc_Info(%d/%d): scell_idx(%d), demod_cc(%d), array_idx(%d)
Line 1839: ###[NR_DEMOD] DebugHalScellBwpInfo:: [%d] (scell_idx8/demod_cc8(0x%4x), scell_scs4/ssb_scs4(0x%x), scell_bwp_idx(0x%x, D4U4),dl_offset(%d, %d))
Line 1842: ###[NR_DEMOD] DebugHalScellBwpInfo:: [%d] scell_ul_freq_info(%d, %d), ul_bw(%d), scell_dl_freq_info(%d, %d), dl_bw(%d))
Line 1847: ###[NR_DEMOD][WARN] DebugHalScellBwpInfo:: num_of_hal_scell_info(%d), debug_num_of_cfg_scell(%d)
Line 1850: ###[NR_DEMOD] DebugHalScellBwpInfo:: num_of_hal_scell_info(%d)
Line 1879: ###[NR_DEMOD] SetHalScellBwpInfo:: num_of_hal_scell_info(%d -> %d)
Line 1912: ###[NR_DEMOD] GetHalScellBwpInfo:: scell_idx(%d), hal_scell_bwp_info[%d/%d]{demod_cc4/scs4(0x%x), bwp_idx(0x%4x, D8U8), dl_bwp_offset(ssboffset %d, fftoffset %d)}
Line 1916: ###[NR_DEMOD] GetHalScellBwpInfo:: dl_freq_info(%d, %d), dl_bw(%d), ul_freq_info(%d, %d), ul_bw(%d)
Line 1941: ###[NR_DEMOD] GetHalScellBwpArrayIdx:: scell_idx(%d) is not found in hal_scell_bwp_info
Line 1946: ###[NR_DEMOD] GetHalScellBwpArrayIdx:: scell_idx(%d) is found in hal_scell_bwp_info[%d]
Line 1987: ###[NR_DEMOD] RelHalScellBwpInfo: rel_hal_scell_idx(%d, %d, %d, %d, %d, %d, %d)
Line 1990: ###[NR_DEMOD] RelHalScellBwpInfo:: num_rel_scell(%d), num_of_hal_scell_info(%d)
Line 2032: ###[NR_DEMOD] scell_idx(%d) is not found in scell_shm_idx_array
Line 2045: ###[NR_DEMOD] FindScellShmIdx:: scell_idx(%d) is found in SHM idx (%d)
Line 2052: ##[NR_DEMOD] FindScellShmIdx:: need to alloc new index for scell_idx(%d)
Line 2058: ###[NR_DEMOD] FindScellShmIdx:: scell_idx(%d) alloc new SHM idx(%d)
Line 2065: ###[NR_DEMOD] FindScellShmIdx:: scell_idx(%d) alloc new SHM idx(%d)
Line 2075: ##[NR_DEMOD] FindScellShmIdx:: scell_idx(%d) is not found.
Line 2080: ##[NR_DEMOD] FindScellShmIdx:: scell_idx(%d) is found @ NrScellConfig[%d]
Line 2087: ###[NR_DEMOD] scell_idx(%d) is in scell_shm_idx_array[%d]
Line 2103: ###[NR_DEMOD] Invalid domain_type (%d, %d)
Line 2107: ###[NR_DEMOD] GetRunningExtCmdReq fail [LCPU_STORE_PHY_CFG_NR_CMD]
Line 2114: ###[NR_DEMOD] ProcLcpuStorePhyCfgCnf DrxType(%d)
Line 2158: ###[NR_DEMOD] No need to send SCELL_CONFIG_REQ IPC
Line 2164: ###[NR_DEMOD] ProcLcpuRestorePhyCfgCnf: recov_scell_found(%d), domain_type(%d), m_domainType(%d)
Line 2173: ###[NR_DEMOD] ProcBplmnCgiNrCmd:: status(%d), demod_cc(%d)
Line 2179: ###[NR_DEMOD] BplmnCgiNrCmdCnf
Line 2202: ###[NR_DEMOD] Restored config_info(0x%x), cmd_event_info(0x%x, cmd4/event4), chg_val(%d), ul_slo_info(0x%x, ul_flag4/ul_rf_bw4), ul_slo_offset(%d)KHz
Line 2221: ###[NR_DEMOD] ProcPhyChangeInfo: modi(%d), ue_id(%d), demod_cc(%d), domain_type(%d)
Line 2223: ###[NR_DEMOD] ProcPhyChangeInfo: modi_type(%d), modi_val(%d), event_en(%d), event_type(%d), event_on(%d)
Line 2230: ###[NR_DEMOD] ProcPhyChangeInfo: Update ue_rnti(%d)
Line 2244: ###[NR_DEMOD] ProcPhyChangeInfo: Invalid Event
Line 2262: ###[NR_DEMOD] RestoreHalScellBwpInfo:: num_of_hal_scell_info(%d), SCellBitmask(0x%x), AddModSCellBitmask(0x%x), ReleaseSCellBitmask(0x%x), ue_rnti(%d)
Line 2288: ###[NR_DEMOD] GetConfigDemodCcBmp:: demod_cc_bmp(0x%x)
Line 2297: ###[NR_DEMOD] ProcCqi0Ctrl:: demod_cc(%d) ohstatus(%d)
Line 2308: ###[NR_DEMOD] ProcRiCtrl:: controlOn(%d) RI(%d) GranularityCtrl(%d) CellBitmask(0x%x)
Line 2336: ###[NR_DEMOD] InitUrtgAndEncoder: demod_cc(%d), domain_type(%d)
Line 2353: ###[NR_DEMOD] ReconfigMcgUrtgAndEncoder: demod_cc(%d), domain_type(%d)
Line 2381: ###[NR_DEMOD] ProcDemodCcSwitch: switchType(%d), currentDemodCc(%d), targetDemodCc(%d), num_of_hal_scell_info(%d)
Line 2413: ###[NR_DEMOD] ProcStorePhyCfgForCcSwitch: targetDemodCc(%d)
Line 2430: ###[NR_DEMOD] ProcSysParamChangeForCcSwitch()
Line 2442: ###[NR_DEMOD] ProcLcpuReleaseForCcSwitch()
Line 2449: ###[NR_DEMOD] ProcLcpuInitForCcSwitch()
Line 2456: ###[NR_DEMOD] ProcLcpuInitCnf: switchType(%d)
Line 2511: ###[NR_DEMOD] GetMaxTxPower: resume_type(%d), lteBand(%d), nrBand(%d) max_pc(%d)
Line 2535: ###[NR_DEMOD] GetMaxTxPower: resume_type(%d), nrBand_0(%d), nrBand_1(%d) max_pc(%d)
Line 2554: ###[NR_DEMOD] GetMaxTxPower: resume_type(%d), lteBand(%d), nrBand(%d) max_pc(%d)
Line 2578: ###[NR_DEMOD] GetMaxTxPower: resume_type(%d), nrBand_0(%d), nrBand_1(%d) max_pc(%d)
Line 2587: ###[NR_DEMOD] SetCAScellActDeactInfo: demod_cc(%d), info(%d -> %d)
Line 2594: ###[NR_DEMOD] GetCAScellActDeactInfo: demod_cc(%d), val(%d)
Line 2602: ###[NR_DEMOD] InitCAScellActDeactInfo(0x%x)
Line 2610: ###[NR_DEMOD] Need2Wait4ActDeactCnfFromPhy: on_going(%d, cause = %d)
Line 2622: ###[NR_DEMOD] invalid demod_cc
Line 2626: ###[NR_DEMOD] GetUlScellFreqInfo: scell_idx(%d), freq(%d), bw(%d), band(%d)
