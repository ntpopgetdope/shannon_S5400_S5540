Line 63: ##[NR_CHANNEL] Create L1cBchNrBlkFunc
Line 80: ##[NR_CHANNEL] L1cBchNrBlkFunc: Init()
Line 82:    ##[NR_CHANNEL] dci_bwp_switching_tmr is NULL
Line 105:    ##[NR_CHANNEL] *********************** StartBwpDciSwitchingTimer: DCI Switching Timer(%d)ms is started
Line 110: ##[NR_CHANNEL] dci_bwp_switching_tmr is NULL
Line 116:    ##[NR_CHANNEL] **************************** StopBwpDciSwitchingTimer: DCI Switching Timer is stopped
Line 118:      ##[NR_CHANNEL] dci_bwp_switching_tmr is NULL
Line 140:    ##[NR_CHANNEL] RECV_MSG(CNF_INFO) [%d] alloc_res(DL = %d, UL = %d)
Line 146:    ##[NR_CHANNEL] ====> cell_info_idx(%d), req_scell_idx(0x%x), alloc_rx_path(%d), alloc_demod_cc(%d), alloc_dl_freq(%d), alloc_bw(0x%02x, D8U8), alloc_tx_path(0x%02x, N8S8)
Line 154:    ##[NR_CHANNEL] [MSG_CNF_INFO] Rel Scell Idx(%d)
Line 180:      ##[NR_CHANNEL] Invalid Cfg(%d)/ Rel(%d) path_cfg_result is sent from SCC
Line 194:      ##[NR_CHANNEL] Target scell index is not found in BchPathCfg (%d)
Line 201:      ##[NR_CHANNEL] Invalid scell_idx for PATH_REL (%d)
Line 206: ##[NR_CHANNEL] PATH_CONFIG_CNF(PBCH/SERV) for (%d) out of (%d) Release, scell_idx(%d), bch_path_cfg_idx(%d)
Line 252:    ##[NR_CHANNEL] SetDrBandInfo([0]%d, [1]%d, [2]%d, [3]%d, [4]%d)
Line 253:    ##[NR_CHANNEL] SetDrBandInfo([5]%d, [6]%d, [7]%d, [8]%d, [9]%d)
Line 257:      ##[NR_CHANNEL] Do nothing due to Ncell Pbch Decoding (%d)
Line 280:    ##[NR_CHANNEL] NrScellConfigCnfCb is not called yet(%d, %d)
Line 309:    ##[NR_CHANNEL] Need to process path_config information
Line 344: ##[NR_CHANNEL] Need to check on_going_proc(0x%x)
Line 356:      ##[NR_CHANNEL] Invalid cfg(%d)/rel(%d)/alloc_res(%d) path_cfg_result is sent from SCC
Line 381: ##[NR_CHANNEL] ProcessSibDecStopReq: ctrlr_state(%d), on_going_proc(0x%x), osi_flag(%d)
Line 428:    ##[NR_CHANNEL] CalcCenterFreqInfoWithSsb : target_freq(%d), target_rb_num(%d), target_scs(%d)
Line 452:    ##[NR_CHANNEL] CalcCenterFreqInfoWithSsb:: SSB(Start = %d, End = %d), Target(Start = %d, End = %d), calc_freq = %d, needed_bw = %d KHz
Line 472: ##[NR_CHANNEL] ServCellInfoInit:: scell_idx(%d), domain_type(%d)
Line 479:      ##[NR_CHANNEL] scell_idx(%d) is not found @ ServCellInfo
Line 557: ##[NR_CHANNEL] BCHCTRLR@%s
Line 606: ##[NR_CHANNEL] BCHCTRLR@%s arfcn: %d, SysBw %d, PbchSubType %d, UseSpcellConfig %d
Line 798:      ##[NR_CHANNEL] recv_sib1_msg is NULL: End event sysinfo schedule
Line 807: ##[NR_CHANNEL] SchedSysInfoRequestCb():: recv_info {sib1_freq(%d), sib1_rb_num(%d), sib1_scs(%d)}, pcell_path_idx(%d), pcell_demod_cc(%d), IsSib1ForEtwsAndCmas|UseAutonomousGaps(0x%x), startSlot(%d)
Line 854: ##[NR_CHANNEL] FftStartOffsetSc for SIB1 is Odd(%d), scc_req_freq(%d)->(%d)
Line 890: ##[NR_CHANNEL] bw_idx for SIB 1 is not found.
Line 951:    ##[NR_CHANNEL] Adding delay for LCPU_PAUSE @ (%d) us
Line 964: ##[NR_CHANNEL] SchedSysInfoRequestCb():: ssb_scs(%d), sib1_scs(%d)
Line 970: ##[NR_CHANNEL] SchedSysInfoRequestCb::SIB1_SSB{sib1_ssb_freq(%d), sib1_ssb_bw(%d), sib1_scs(%d)}, CUR{freq(%d), bw(%d), scs(%d)}, chg_sys_param4/sysinfo_in_servcell4(0x%x)
Line 1008: ##[NR_CHANNEL] SIB1_CONFIG: pcell_path_idx(%d), is_ds_recovery(%d), m_BchDb->on_going_proc(0x%x), sib1_offset(%d)
Line 1031: ##[NR_CHANNEL] OSI_CONFIG (sib bit map 0x%x) pcell_path_idx(%d), is_ds_recovery(%d), m_BchDb->on_going_proc(0x%x)
Line 1062: ##[NR_CHANNEL] FftStartOffsetSc for SIB1 is Odd(%d), scc_req_freq(%d)
Line 1097: ##[NR_CHANNEL] bw_idx for SIB 1 is not found.
Line 1137: ##[NR_CHANNEL] ProcessAgapBchConfig: pathIdx(%d), m_BchDb->on_going_proc(0x%x), sib1_offset(%d), isFirstAgap(%d)
Line 1151: ##[NR_CHANNEL] SchedSibReleaseCb: m_BchDb->recv_sib1_msg is NULL
Line 1187: ##[NR_CHANNEL][RECOV] Restored nr_serv_cell_info[%d] {scell_idx(%d) scc_cell(%d) cfg_status(%d)}
Line 1210: ##[NR_CHANNEL][RECOV] num_of_restored_cell(%d), pcell_freq (%d), sib1(4)/dsds(4)/max_ul(4)(0x%4x), scell_bit_mask(0x%x), delta_scell_bit_mask(0x%x), pch(4)/drx_ind(4)(0x%2x), spcell_idx(%d)
Line 1290: ##[NR_CHANNEL] SchedServCellRecoveryCb, on_going_proc(0x%x)
Line 1306: ##[NR_CHANNEL] SchedPhyReleaseCb, ctrlr_proc_state(0x%x)
Line 1351: ##[NR_BCH] UpdateDmActCellInfo:: abnormal ResumeType(%d hence do not update DM)
Line 1356: ##[NR_BCH] UpdateDmActCellInfo:: abnormal ResumeType(%d)
Line 1430: ##[NR_BCH] UpdateDmActCellInfo_DL: [%d] %d(ScellIndex*10000 + phyCellId), %d, %d, %d, 0x%x(scs4/rxmode4), %d
Line 1450: ##[NR_BCH] UpdateDmActCellInfo_UL: [%d] %d(ScellIndex*10000 + phyCellId), %d, %d, %d, %d, %d
Line 1488: ##[NR_CHANNEL] UpdateDmActCellInfo: total_num_scell(%d), act_dl_scell_cnt(%d), act_ul_scell_cnt(%d), stack_id(%d) ResumeType(%d)
Line 1489: ##[NR_CHANNEL] UpdateDmActCellInfo: num_cell(%d), cell_info.dl_band(%d, %d, %d, %d, %d, %d)
Line 1507: [NR_CHANNEL] CreatePathCfgReqForActDeactScell: num_of_act_deact_scell(%d)
Line 1519:      ##[NR_CHANNEL] CreatePathCfgReqForActDeactScell:: scell_index(%d) is not found in serv_cell_info
Line 1530: ##[NR_CHANNEL] CreatePathCfgReqForActDeactScell:: Deact Scell List [(%d] scc_cell_info_idx(%d))
Line 1604: ##[NR_CHANNEL] CreatePathCfgReqForActDeactScell:: Act Scell List [%d] DL{freq(%d), band(%d), dl_bw(%d)}, UL{freq(%d), ul_bw(%d)}, req_scell_idx4/dl_layer4(0x%x), frame_boundary_offset(%d)
Line 1609: ##[NR_CHANNEL] CreatePathCfgReqForActDeactScell:: num_of_act_scell(%d), num_of_deact_scell(%d)
Line 1630: ##[NR_CHANNEL] Send SendPathRelForServCellRelMsg(%d), RelPurpose(%d)
Line 1686:    ##[NR_CHANNEL] DciBwpSwitchExpiredCb, ctrlr_proc_state(0x%x)
Line 1714: ##[NR_CHANNEL] HAL->BCHCTRLR@%s, ctrlr_state(%d), PbchSubType(%d)
Line 1717:      ##[NR_CHANNEL] %s during L1C_SUSPEND
Line 1763:      ##[NR_CHANNEL] PBCH decoding expired(NR_PBCH_DECODE)
Line 1783:      ##[NR_CHANNEL] ctrlr_state(%d) is L1C_SUSPEND or BCH_PROC_SERV_RECOVERY is on_going_proc(%d)
Line 1786:      ##[NR_CHANNEL] PBCH decoding expired(NR_SERVING_CELL_CHAGE)
Line 1801:      ##[NR_CHANNEL] PBCH decoding expired(NR_IRAT_PBCH)
Line 1827: ##[NR_CHANNEL] PBCH decoding fail,  NrPbchCrcReport : %d
Line 1880: ##[NR_CHANNEL] BchConfigCb: recovery(%d), on_going_proc(0x%x)
Line 1889:    ##[NR_CHANNEL] BchConfigCb : skip cnf to RRM
Line 1908: ##[NR_CHANNEL] BchReleaseCb: ctrlr_state(%d), on_going_proc(0x%x)
Line 1930: ##[NR_CHANNEL] BchReleaseCb: Agap case
Line 1951: ##{NR_CHANNEL] HAL->BCHCTRLR@NrCellTimeChangeCnfCb: ctrlr_state(%d)
Line 2009: ##[NR_CHANNEL] ProcessPhyRelease():: m_BchDb->ctrlr_state(%d), m_BchDb->on_going_proc(0x%x), lcpu_res_rel_flag(%d)
Line 2083:      ##[NR_CHANNEL] ProcessServCellChange(%d), Invalid num_of_cfg_cell
Line 2092: ##[NR_CHANNEL] ProcessServCellChange::idx(%d) cell_info_idx(%d), req_scell_idx(%d), alloc_demod_cc(%d), alloc_bw(%d), alloc_freq(%d)
Line 2134:    ##[NR_CHANNEL] L1C_L1C_PBCH_REQ#1(cellId(%d), cur_freq_info(%d %d %d), ssb_freq(%d), SsbIndex(%d), rx_path_idx(%d))
Line 2136:    ##[NR_CHANNEL] L1C_L1C_PBCH_REQ#2(scs(%d), timeOffset(%d), subType(%d), Period(%d), demod_cc(%d), agcGain[0](%d), agcGain[1](%d))
Line 2138:    ##[NR_CHANNEL] L1C_L1C_PBCH_REQ#3(maxSsbNum(%d), NumHF(%d), SsbDemapSeedIndex(%d), MibInfoIncluded(%d)
Line 2151: ##[NR_CHANNEL] UpdateSibSched:: type(%d), wakeupTime(%d)
Line 2196:    ##[NR_CHANNEL][WARNING] UpdateSibSched::Unexpected SibSchedType(%d)
Line 2209: ##[NR_BCH] SchedOhcModeCb ctrlr_state(%d), on_going_proc(0x%x)
Line 2258: ##[NR_CHANNEL] ProcessPathCfgFailure: on_going_proc(0x%x), ssb_arfcn(%d), pbch_sub_type(%d), ctrlr_state(%d)
Line 2298:      ##[NR_CHANNEL] Invalid path cnf result. Need to check with SCC
Line 2309:      ##[NR_CHANNEL] Please check bch_path_cfg_info(%d)
Line 2334:      ##[NR_CHANNEL] Invalid PathCfgFailure Scenario
Line 2385: ##[NR_CHANNEL] next_path_cfg_idx is (%d) for SCELL
Line 2394:      ##[NR_CHANNEL] Invalid req_type in current BCH function flow
Line 2406:      ##[NR_CHANNEL] Invalid serv_cell_info_idx in current BCH function flow
Line 2435:      ##[NR_CHANNEL] Invalid serv_cell_info_idx in current BCH function flow
Line 2446:    ##[NR_CHANNEL] [%d/%d] UpdateBchPathCfgInfo : req_scell_idx(0x%3x, new_cell4/scell_idx8) ==> bch_path_cfg[%d], next_cfg_idx(%d), num_of_cfg_cell(%d)
Line 2455:      ##[NR_CHANNEL] Invalid serv_cell_info_idx in current BCH function flow
Line 2467:    ##[NR_CHANNEL] [%d/%d] UpdateBchPathCfgInfo : req_scell_idx(0x%3x, new_cell4/scell_idx8) ==> bch_path_cfg[%d], next_cfg_idx(%d), num_of_cfg_cell(%d)
Line 2476: ##[NR_CHANNEL] PATH_CONFIG_CNF(PBCH/SERV_CELL) for PCELL, num_of_bch_cfg_cell(%d) next_path_cfg_idx(%d)
Line 2514:    ##[NR_CHANNEL] L1C_L1C_PBCH_REQ#1(cellId(%d), cur_freq_info(%d %d %d), ssb_freq(%d), SsbIndex(%d), rx_path_idx(%d))
Line 2516:    ##[NR_CHANNEL] L1C_L1C_PBCH_REQ#2(scs(%d), timeOffset(%d), subType(%d), Period(%d), demod_cc(%d), agcGain[0](%d), agcGain[1](%d))
Line 2518:    ##[NR_CHANNEL] L1C_L1C_PBCH_REQ#3(maxSsbNum(%d), NumHF(%d), SsbDemapSeedIndex(%d), MibInfoIncluded(%d), center_sc_offset(%d)
Line 2542: ##[NR_CHANNEL] PATH_CONFIG_CNF(SERV_CELL) for SCELL, num_of_bch_cfg_cell(%d)
Line 2549:    ##[NR_CHANNEL][RECOV] Path Alloc is done, Trigger SCELL_CONFIG CMD: add(%d){%d, %d, %d, %d}, rel(%d)
Line 2565:    ##[NR_CHANNEL] Pending Scell Activation Recovery until Sending SERV_CELL_CHANGE_CNF Msg
Line 2573: ##[NR_CHANNEL] Please check bch_path_cfg_info(%d)
Line 2582:      ##[NR_CHANNEL] Invalid num_of_add_scell value
Line 2591: ##[NR_CHANNEL] Please check bch_path_cfg_info(%d)
Line 2610: ##[NR_CHANNEL][RECOV] PathCfgRecovery is done, trigger HAL Recovery: on_going_proc(0x%x), num_backup_scell(%d)
Line 2615: ##[NR_CHANNEL] Invalid function in current BCH Ctrlr flow(%d)
Line 2656:    ##[NR_CHANNEL] PATH_CONFIG_CNF(MODIFY) for PCELL, on_going_proc(0x%x), req_type(0x%x), scell_idx(%d), demod_cc(%d), prev_bw(%d), prev_freq(%d), timing_offset(%d)
Line 2662:    ##[NR_CHANNEL][BCH_PATH_CNF_INFO] num_of_bch_cfg_cell[%d] cell_info_idx(%d), req_scell_idx(%d), alloc_demod_cc(%d), alloc_bw(%d), alloc_freq(%d)
Line 2677: ##[NR_CHANNEL][BWP][NR_TX] Skip Update TxPathInfo. ch_NrDbSetTxPathInfo is already done before sending PATH_CONFIG_REQ(MODIFY) for PCELL.
Line 2777:      ##[NR_CHANNEL] SIB1_PATH_CFG: rx_path(%d), alloc_info(freq = %d, bw = %d, sib1_freq = %d, sib1_rb = %d, sib1_scs = %d, cur_scs = %d)
Line 2784:    ##[NR_CHANNEL] Adding 1 slot delay for LCPU_PAUSE @ (%d) us
Line 2832: ##[NR_CHANNEL] ProcessPathModifyForPcell: next_step_is_ca(%d), pcell_chg_param(0x%x)
Line 2862:    ##[NR_CHANNEL] Cdrx Config Info. does not exist
Line 2908:      ##[NR_CHANNEL] Need to check on_going_proc(0x%x)
Line 2989: ##[NR_CHANNEL] PATH_CONFIG_CNF(MODIFY) for (%d) out of (%d) SCELL Act
Line 2995:      ##[NR_CHANNEL] Target scell index is not found in BchPathCfg
Line 3005:    ##[NR_CHANNEL] [BCH_PATH_CNF_INFO] [%d] cell_info_idx(%d), req_scell_idx(%d), alloc_demod_cc(%d), alloc_bw(%d), alloc_freq(%d)
Line 3025:    ##[NR_CHANNEL] PATH_CONFIG_CNF(MODIFY) for (%d) out of (%d) SCELL DEACT
Line 3030: ##[NR_CHANNEL] ProcessScellRelAndDeact:: PATH_REL for SCELL would be sent during PATH_CFG(SERV) with added SCELL together
Line 3037: ##[NR_CHANNEL] ProcessScellRelAndDeact:: Continue PATH_REL for SCELL after SCELL Deactivation(%d)
Line 3056: ##[NR_CHANNEL][ULCA] ProcessScellRelAndDeact:: No need to check Pcell TX swap is need. (scell_ul_band: %d)
Line 3080:    ##[NR_CHANNEL] ProcessScellRelAndDeact:: ****** [%d] target release scc_cell_info_idx(%d)
Line 3090:    ##[NR_CHANNEL] ProcessScellRelAndDeact:: No need to process PATH_REL for SCELL
Line 3116:    ##{NR_CHANNEL] CheckScellRelAndAdd4TheSameIdx: scell_idx(%d), addmod(0x%x), rel(0x%x), res(%d)
Line 3148: ##[OHC] nr_serv_cell_info[0].scell_cfg_status(%d)
Line 3158: ##[OHC] Target scell index is not found in BchPathCfg (%d)
Line 3176: ##[OHC] index(%d), scell_cfg_status(%d), deact_demod_cc_array[%d](%d), deact_scell_idx_array[%d](%d)
Line 3177: ##[OHC] sch_sinr_rx0_array[%d](%d), sch_sinr_rx1_array[%d](%d)
Line 3190: ##[OHC] Send_OHC_SCC_CQI0_NR_CMD: num_to_be_deact(%d)
Line 3236: ##[NR_BCH] SCC DEACT CQI0 CMD:: CMD_RESULT is CMD_RET_FAIL.
Line 3240: ##[NR_BCH] SCC DEACT CQI0 CMD:: CMD_RESULT is CMD_RET_TIMEREXPIRED.
Line 3277: ##[OHC] nr_serv_cell_info[0].scell_cfg_status(%d)
Line 3288: ##[OHC] Target scell index is not found in BchPathCfg (%d)
Line 3307: ##[OHC] index(%d), scell_cfg_status(%d), deact_demod_cc_array[%d](%d), deact_scell_idx_array[%d](%d)
Line 3308: ##[OHC] sch_sinr_rx0_array[%d](%d), sch_sinr_rx1_array[%d](%d) path_idx(%d)
Line 3317: ##[OHC] NumActivatedCc(%d), NumRedCc(%d) Method(%d)
Line 3328: ##[OHC] Send_OHC_SCC_CQI0_NR_CMD: num_to_be_deact(%d)
Line 3368: ##[OHC] STOP_PDCCH_MONITORING_EN(%d) PLMN_OVERRIDE(%d)
Line 3394: ##[NR_BCH] SCC DEACT CQI0 CMD:: CMD_RESULT is CMD_RET_FAIL.
Line 3398: ##[NR_BCH] SCC DEACT CQI0 CMD:: CMD_RESULT is CMD_RET_TIMEREXPIRED.
Line 3408: ##[NR_BCH] CPU_DVFS_EN(%d) NumRedCc(%d) band(%d)
Line 3413: ##[NR_BCH] Thermal Clock Control Enabled
Line 3430: [L1C] Send_L1C_L1C_SCELL_STATUS_IND SCellActivationCMD(0x%x)
Line 3463: ##[OHC] PrecessNormalCQI : nr_serv_cell_info[0].scell_cfg_status(%d)
Line 3473: ##[OHC] Target scell index is not found in BchPathCfg (%d)
Line 3492: ##[OHC] index(%d), scell_cfg_status(%d), deact_demod_cc_array[%d](%d), deact_scell_idx_array[%d](%d)
Line 3493: ##[OHC] sch_sinr_rx0_array[%d](%d), sch_sinr_rx1_array[%d](%d)
Line 3502: ##[OHC] Send_OHC_SCC_CQI0_NR_CMD: num_to_be_stop(%d)
Line 3524: ##[NR_BCH] SCC DEACT CQI0 CMD:: CMD_RESULT is CMD_RET_FAIL.
Line 3528: ##[NR_BCH] SCC DEACT CQI0 CMD:: CMD_RESULT is CMD_RET_TIMEREXPIRED.
Line 3549:    ##[NR_CHANNEL] CheckBwpChgSupport: Switching between different bwp scs is not supported(% d-> %d)
Line 3557:    ##[NR_CHANNEL] CheckBwpChgSupport: modem(%d), scell_idx(%d), bwp_idx(0x%x, D4U4), on_going_proc(0x%x), num_of_scell(%d), support_res(%d)
Line 3566:    ##[NR_CHANNEL] AbortBwpswitchingProc(%d)
Line 3577:      ##[NR_CHANNEL] Not expected bch_path_cfg_idx(%d) for PCELL
Line 3595: ##[NR_CHANNEL][NR_TX] GetUlReallocRequiredForScgResume: ret(%d), spcell_idx(%d), tx_num(%d), domain_type(%d), mod_idx[%d,%d]
Line 3607: ##[NR_CHANNEL][NR_TX] GetUlReallocRequiredForScgSuspend: ret(%d), spcell_idx(%d), tx_num(%d), domain_type(%d), mod_idx[%d,%d]
Line 3634: ##[NR_CHANNEL] CalculateAgapTiming: Numerology(%d) gapStart(%d), startSlot(%d), targetOffset(%d), servOffset(%d), curSfnSubframe(%d), period(%d)
Line 3652:      ##[NR_CHANNEL]Fail to Send GAP_CONFIG_NR_CMD
Line 3670:    ##[NR_CHANNEL] UpdateDiffScsCcInfo: Target scell index is not found in BchPathCfg (%d)
Line 3683:    ##[NR_CHANNEL] UpdateDiffScsCcInfo: scell_idx(%d), demod_cc(%d), ssb_scs(%d), data_scs(%d)
Line 3716: ##[NR_CHANNEL] ProcessDemodCcSwitch: switchType(%d), currentDemodCc(%d), targetDemodCc(%d)
Line 3735: ##[NR_CHANNEL] DemodCcSwitchCb: cmd_res(%d)
Line 3745: 	  ##[NR_CHANNEL] UpdatePcellInfo4MRA: ABNL condition -> Update4MRA: freq_info(%d, %d, %d), bw(%d)
Line 3753: 	  ##[NR_CHANNEL] UpdatePcellInfo4MRA: mra_based_dr_ca_en(%d)
Line 3775: ##[NR_CHANNEL] UpdatePcellInfo4MRA: scs(%d), mra_freq_info(freq=%d, band=%d, bw=%d), dl_layer_info(nw=%d, ue=%d)
Line 3779: ##[NR_CHANNEL] UpdatePcellInfo4MRA: domain(%d), update_type(%d, 1=add/0=rel), dr_possible(%d)
Line 3796: ##[NR_CHANNEL] UpdateCAScellInfo4MRA: mra_based_dr_ca_en(%d)
Line 3805: 	  ##[NR_CHANNEL] UpdateCAScellInfo4MRA: PATHMNGR_NUM_CELL is already full(%d)
Line 3819: 	  ##[NR_CHANNEL] UpdateCAScellInfo4MRA: Target scell_idx(%d) is not found
Line 3835: ##[NR_CHANNEL] UpdateCAScellInfo4MRA:[%d] sys_scs(%d), mra_freq_info(freq=%d, band=%d, bw=%d), dl_layer_info(nw=%d, ue=%d)
Line 3841: ##[NR_CHANNEL] UpdateCAScellInfo4MRA: domain(%d), update_type(%d, 1=add/0=rel), dr_possible(%d)
