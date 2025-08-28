Line 42:    ##[NR_CHANNEL][DB] Create L1cBchNrDb
Line 51:    ##[NR_CHANNEL][DB] L1cBchNrDb::Init
Line 99:    ##[NR_CHANNEL][DB] InitBchSib1PathCfgInfo()
Line 109:    ##[NR_CHANNEL][DB] InitBchPathCfgInfo()
Line 123:    ##[NR_CHANNEL][DB] InitBchNrDbCommonInfo()
Line 167:      ##[NR_CHANNEL][DB] FindBchPathCfgIdx:: scell_idx(%d) is not found in bch_path_cfg_info
Line 172: 	  ##[NR_CHANNEL][DB] FindBchPathCfgIdx:: scell_idx(%d) is found in bch_path_cfg_info[%d]
Line 198:    ##[NR_CHANNEL][DB] nr_serv_cell_info[%d] {scell_idx(%d) scc_cell(%d) cfg_status(%d), ssb_scs(%d), bwp_id(0x%4x, U8D8)}
Line 208:    ##[NR_CHANNEL][DB] FindServCellInfo:: need to alloc new index for scell_idx(%d)
Line 222:      ##[NR_CHANNEL][DB] FindServCellInfo:: scell_idx(%d) is not found.
Line 225:    ##[NR_CHANNEL][DB] FindServCellInfo:: scell_idx(%d) is found @ nr_serv_cell_info[%d]
Line 258:      ##[NR_CHANNEL][DB] GetDlBwpInfo:: nr_serv_cell_info for scell_idx(%d) is not found.
Line 286:    ##[NR_CHANNEL][DB] GetDlActiveBwpInfo: scell_idx(%d) w/ current bwp id(%d)
Line 319:      ##[NR_CHANNEL][DB] GetUlBwpInfo:: nr_serv_cell_info for scell_idx(%d) is not found.
Line 347:    ##[NR_CHANNEL][DB] GetUlActiveBwpInfo: scell_idx(%d) w/ current bwp id(%d)
Line 380:      ##[NR_CHANNEL][DB] GetServCellInfoIdx:: scell_idx(%d) is not found.
Line 400:    ##[NR_CHANNEL][DB] PrintBchPathCfgInfo: num_of_bch_cfg_cell(%d)
Line 406:    ##[NR_CHANNEL] ****[%d] scc_cell_idx8/scell_idx8(0x%04x), alloc_freq(%d), alloc_bw(%d), alloc_demod_cc(%d), div_cc(%d), rx_mode(0x%x)
Line 426:    ##[NR_CHANNEL] PrintBwpDbInfo:: scell_idx(%d)
Line 432:    ##[NR_CHANNEL] ******** DL BWP_DB [%d] RB(S=%d, Len=%d) Scs(%d) CenterArfcn/Freq(%d/ %d) Bw4/ActBwpIdx4(0x%x)
Line 434:    ##[NR_CHANNEL] ******** UL BWP_DB [%d] RB(S=%d, Len=%d) Scs(%d) CenterArfcn/Freq(%d/ %d) Bw4/ActBwpIdx4(0x%x)
Line 452:      ##[NR_CHANNEL][DB] SendL1ChannelDmInfo:: update skip. PTM is running
Line 460:      ##[NR_CHANNEL][DB] SendL1ChannelDmInfo:: abnormal cur_bwp_idx(%d)
Line 464:      ##[NR_CHANNEL][DB] SendL1ChannelDmInfo:: cell_idx(%d), cur_bwp_idx(%d), ResumeType(%d)
Line 485:      ##[NR_CHANNEL][DB] SendL1ChannelDmInfo:: abnormal ResumeType(%d)
Line 552:      ##[NR_CHANNEL][DB] SendL1ChannelDmInfo:: Abnormal drx_onDurationTimerChoiceValue milliSeconds(%d)
Line 558:      ##[NR_CHANNEL][DB] SendL1ChannelDmInfo:: Abnormal drx_onDurationTimerChoice value(%d)
Line 597: 	##[NR_CHANNEL][DB] SendL1ChannelDmInfo:: CurState(%d), BW(%d), BWPIndex(%d), SCS(%d), RxMode(0x%x), UlArfcn(%d), DlArfcn(%d)
Line 599: ##[NR_CHANNEL][DB] SendL1ChannelDmInfo:: DrxOn(%d), DrxOnDurationTimer(%d), DrxInactivityTimer(%d), SelectedDrxCycle(%d)
Line 601: 	##[NR_CHANNEL][DB] SendL1ChannelDmInfo:: DrxReTransmissionTimerDl(%d), DrxReTransmissionTimerUl(%d)
Line 603: 	##[NR_CHANNEL][DB] SendL1ChannelDmInfo:: LongDrxCycle(%d), LongDrxCycleOffset(%d)
Line 605: 	##[NR_CHANNEL][DB] SendL1ChannelDmInfo:: ShortDrxEnable(%d), ShortDrxCycle(%d), ShortCycleTimer(%d)
Line 642: ##[NR_CHANNEL] CheckBwpWithSsb: scell_idx(%d)
Line 653:      ##[NR_CHANNEL][DB] CheckBwpWithSsb: Invalid ssb_scs(%d)
Line 659:      ##[NR_CHANNEL][DB] CheckBwpWithSsb: Invalid bwp_id (%d)
Line 667:      ##[NR_CHANNEL][DB] CheckBwpWithSsb: bwp_bw(%d) is out of range(%d)
Line 675:    ##[NR_CHANNEL] CheckBwpWithSsb: target_bwp{freq(%d), bw(%d)MHz, (%d ~ %d)}, ssb_freq(%d ~ %d), dl_bwp_id4/ssb_scs4/res4(0x%8x)
Line 687:      ##[NR_CHANNEL][DB] CheckBwpWithinCurAllocPath: bwp_bw(%d) is out of range(%d)
Line 699:    ##[NR_CHANNEL] CheckBwpWithinCurAllocPath: target_bwp{freq(%d), bw(%d)MHz, (%d ~ %d)}, bch_path_freq(%d ~ %d), res(%d)
Line 761:    ##[NR_CHANNEL][DB] CheckScellRfParamUpdate:: scell_idx8/res4/bwp_with_ssb4(0x%4x), bch_path(dl_freq = %d, dl_bw = %d, ul_bw = %d), target(dl_freq = %d, dl_bw = %d, ul_bw = %d)
Line 780: ##[NR_CHANNEL][DB] ReleaseScellCfgList
Line 787:    ##[NR_CHANNEL][DB] scell_rel_list is NULL
Line 794:    ##[NR_CHANNEL][DB] scell_add_list is NULL
Line 823:    ##[NR_CHANNEL] SetBwpChangeInfo: chg_state(%d, 0=STOP/1=L2/2=PHY/3=DL/4=UL), new_scell_idx(%d), dl_bwp_id(%d), ul_bwp_id(%d)
Line 848:      ##[NR_CHANNEL] nr_bwp_chg_info is NULL
Line 850:    ##[NR_CHANNEL] GetBwpChangeInfo: recv_idx(%d), bwp_chg_info{chg_state(%d), scell_idx(%d), dl_id(%d), ul_id(%d)}
Line 909:      ##[NR_CHANNEL][DB] GetSpCellActiveBwpStartCrb: act_bwp_idx is INVALID
Line 921:      ##[NR_CHANNEL][DB] GetSpCellActiveBwpStartCrb: No match for active bwp scs in carrier list
Line 926:    ##[NR_CHANNEL][DB] iSpecificCarr(%d), act_bwp_idx(%d), offsetToCarrier(%d), start_crb(%d)
Line 938:      ##[NR_CHANNEL][DB] please check with SCC: bch_demod_cc(%d), default_cc(%d))
Line 946:    ##[NR_CHANNEL][DB] GetIsTxCell: scell_idx(%d), domain_type(%d)
Line 949:    ##[NR_CHANNEL][DB] GetIsTxCell: scell_idx(%d) nr_serv_cell_info[%d]
Line 953:      ##[NR_CHANNEL][DB] GetIsTxCell: scell_idx(%d) is not found in nr_serv_cell_info
Line 956:      ##[NR_CHANNEL][DB] GetIsTxCell: scell_idx(%d) is spcell_idx(%d). Need to set TX path info.
Line 967:    ##[NR_CHANNEL][DB] GetIsTxCell: scell_idx(%d) is spcell_idx(%d).
Line 974:    ##[NR_CHANNEL][DB] GetIsTxCell: found_idx(%d) is found in ul_cfg_serv_cell_bitmap(0x%x)
Line 979:    ##[NR_CHANNEL][DB] GetIsTxCell: found_idx(%d) is not found in ul_cfg_serv_cell_bitmap(0x%x)
Line 991:    ##[NR_CHANNEL][DB] InitPchDrxCfgInfo()
Line 1007:    ##[NR_CHANNEL] InitScellCfgList
Line 1030:    ##[NR_CHANNEL] BwpSwtchProcDelay: cur_step(%d, 0=trig/1=start/2~3=path_cfg/4=phy_ctrl/5=finish), total=(%d)us, step=(%d)us
