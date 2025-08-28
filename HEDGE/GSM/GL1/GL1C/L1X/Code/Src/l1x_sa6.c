Line 629: PCH BLOCK ID: Paging Group match
Line 634: PCH BLOCK ID: No Paging Group match
Line 646: PCH BLOCK ID: Paging Group match mfrm %d tdma_fn %d br_no %d
Line 651: PCH BLOCK ID: No Paging Group match mfrm %d tdma_fn %d br_no %d
Line 657: PCH BLOCK ID: BS_PA_MFRMS 0
Line 664: PCH BLOCK ID: MARKING DISABLED
Line 700: Abn Fn %i Sec Scell Arrfcn %d Fn %d To %d Simno %d
Line 735: PCH BLOCK ID: Paging Group match
Line 740: PCH BLOCK ID: No Paging Group match
Line 751: PCH BLOCK ID: Paging Group match mfrm %d tdma_fn %d
Line 756: PCH BLOCK ID: No Paging Group match mfrm %d tdma_fn %d
Line 763: PCH BLOCK ID: BS_PA_MFRMS 0
Line 770: PCH BLOCK ID: MARKING DISABLED
Line 848: l1_Scell->Simno[%d] to be checked
Line 853: ERROR!!!- dscCallbactFct is NULL!!!!!!!!
Line 861: Send Pending MPH_ERROR_IND 
Line 870: Avoid MPH_ERROR_IND in RACH
Line 888: Requesting SIM ID wrong. Check!
Line 894: send MPH_ERROR_IND
Line 975: l1_Scell->Simno[%d] to be checked
Line 980: ERROR!!!- dscCallbactFct is NULL!!!!!!!!
Line 988: Send Pending MPH_ERROR_IND 
Line 1010: Requesting SIM ID wrong. Check!
Line 1015: send MPH_ERROR_IND to Sec Scell
Line 1051: l1x_report_rxlev_meas called
Line 1054: Measurement Done posted from Tch act seq
Line 1067: l1x_report_rxlev_meas: l1_mode = L1_DEDICATED_MODE
Line 1072: l1x_report_rxlev_meas: l1_mode = L1_IDLE_MODE
Line 1087: [GL1 Error] Invalid meas_type (%d) 
Line 1133: send MPH_CCCH_IDLE_CON {%i} l1c_Idle_con_pending %d
Line 1156: Issue in sending MPH_CCCH_IDLE_CON {%i} to BOTH SIMl1c_Idle_con_pending %d CHECK!
Line 1163: softsum: Arfcn:%d, IDLE sfotsum(%d)
Line 1180: Issue in sending MPH_CCCH_IDLE_CON {%i} to BOTH SIMl1c_Idle_con_pending %d CHECK!
Line 1187: MetricScale: Arfcn:%d, IDLE MetricScale(%d)
Line 1204: Issue in sending MPH_CCCH_IDLE_CON {%i} to BOTH SIMl1c_Idle_con_pending %d CHECK!
Line 1211: Issue in sending MPH_CCCH_IDLE_CON {%i} l1c_Idle_con_pending %d
Line 1321: CNF_IMMED_ASSIGN send to Sim %d
Line 1326: CNF_IMMED_ASSIGN send to Sim %d
Line 1331: SIM ID wrong. Check!
Line 1343: CNF_ASSIGN send to Sim %d
Line 1348: CNF_ASSIGN send to Sim %d
Line 1353: SIM ID wrong. Check!
Line 1367: CNF_ASYNC_HO send to Sim %d
Line 1372: CNF_ASYNC_HO send to Sim %d
Line 1377: SIM ID wrong. Check!
Line 1395: CNF_HO_FAIL send to Sim %d
Line 1400: CNF_HO_FAIL send to Sim %d
Line 1405: SIM ID wrong. Check!
Line 1452: MPH_SYNC_HO_CON send to Sim %d
Line 1457: MPH_SYNC_HO_CON send to Sim %d
Line 1462: SIM ID wrong. Check!
Line 1519: [GL1 Error] Invalid handoverID (%d) 
Line 1530: L1F_HO_COM ID=%d {%i}
Line 1656: Skip SACCH/FACCH/SDCCH Tx. Dsl1RC Pause
Line 1662: Channel Type: %d
Line 1689: TX DATA on SIM1 %d PtData %d
Line 1698: TX DATA on SIM2 %d PtData %d
Line 1702: l1x_write_block invalid simno,PtData not set
Line 1730: Wrong SIM ID Check! 
Line 1752: Wrong SIM ID Check! 
Line 1755: queue L2 message on SDCCH
Line 1792: TX DATA on SIM1 %d PtData(l2_AssocSapi0Buffer) %d
Line 1797: TX DATA on SIM2 %d PtData(ds_l2_AssocSapi0Buffer) %d
Line 1801: l1x_write_block invalid simno,PtData not set
Line 1806: send meas report
Line 1816: send dummy meas report
Line 1824: l1x_write_block: reporting txpwr %d on SACCH
Line 1833: ** Tx channel error %d:%d
Line 1841: [GL1 Error] p_l2_msg NULL (%d) 
Line 1848: Tx %x %x %x %x FN%8lu
Line 1863: l1x_send_TA_ind() TX PWR : (%d) TA:%d 
Line 1879: Wrong Sim ID Check! 
Line 1908: Avg softsum for MPH_DATA_IND %d
Line 1936: Avg CI metric for MPH_DATA_IND %d
Line 1983: Anr :    Avoid bcch_Read_reason Reset
Line 1988: BPLMN IND : bcch_Read_reason Reset
Line 1991: l1c_bcch_read_reason (%d) Acvreason(%d) arfcn(%d)
Line 2003: p_sync_info->RxLevel (%d)
Line 2028: RR_MSG_ENTITY %d 
Line 2033: DS_RR_MSG_ENTITY %d 
Line 2039: WRONG SIM ID.[%d] Check!! 
Line 2041: L1->RR:
Line 2097: [##DCXO_Recovery] ANR: Rxlev %d isRepeatBCHReqEnabled %d
Line 2110: Invalid sim no check!
Line 2113: MPH_NO_BCCH(%d) cause%d
Line 2191: >>>VAL pwr %d
Line 2231: >>>FULL softsum %d
Line 2253: >>>SUB softsum %d
Line 2318: [L1X_BurstUpdateTo]Accumulation[to_value = %d, to_count], timing_offset  = %d, weighting = %d
Line 2438: Rd%8x Wr %8x fct%8x
Line 2464: [CCH_result] chn type(%d), errorcnt(%d)
Line 2548: [GL1 Error] Invalid burst_no (%d) 
Line 2581: Rxlev reset in cch_burst_result_handler no use_power, ch_type %d
Line 2589: MMA METRICSCALE %d
Line 2596: MMA METRICSCALE %d
Line 2626: l1x_cch_burst_result_handler: Power:%d, Rxlev:%d (chan %d)
Line 2664: l1x_cch_burst_result_handler: skip (chan %d - PWRC %d hop %d ARFCN %d vs. BCCH Arfcn %d)
Line 2685: SCELL Rxlev Clr in cch_burst_result_handler , ch_type :%d
Line 2696: l1x_cch_burst_result_handler: Adding Rxlev :%d Burst_no :%d c_lev %d rxlev: %d 
Line 2763: BAD SBCCH (%d) l1x_scell_sysinfo_error_cnt(%d) l1c_paging_parameters.bs_pa_mfrms(%d)
Line 2796: SBCCH to SIM %d 
Line 2806: GOOD SBCCH (%d) - SI Type[%d] l1x_scell_sysinfo_error_cnt(%d) l1c_paging_parameters.bs_pa_mfrms(%d) 
Line 2829: ERROR SBCCH (%d) code %d
Line 2834: *** ERROR lost serving cell 
Line 2875: EXT PCH was scheduled 
Line 2887: GOOD CCCH_R arfcn:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 2910: BAD CCCH_R arfcn:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3072: l1x_hdl_pch: Sending PCH to both the SIM's as ccch_grp and pg_blk_idx matched
Line 3077: GOOD PCH_R dsc%d dsc_max%d Arfcn %d Fn %d TO %d SimNo %d
Line 3078: Prim ccch_type %d
Line 3092: BAD PCH_R arfcn:%d dsc:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3118: l1x_handle_pch grant_dsl1rc: %d
Line 3219: ERR: Sec SCELL update timer missed 
Line 3252: l1x_hdl_sec_pch: Sending PCH to both the SIM's as ccch_grp and pg_blk_idx matched
Line 3256: GOOD PCH_R l1x_dsc_sec_scell %d l1_dsc_max_sec_scell %d Arfcn %d Fn %d TO %d SimNo %d
Line 3257: Sec ccch_type %d
Line 3274: BAD PCH_R arfcn:%d l1x_dsc_sec_scell:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3311: SEC EXT PCH was scheduled 
Line 3357: GOOD EXT PCH_R l1x_dsc_sec_scell %d l1_dsc_max_sec_scell %d Arfcn %d Fn %d TO %d SimNo %d
Line 3358: Sec ccch_type %d
Line 3372: BAD PCH_R arfcn:%d l1x_dsc_sec_scell:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3424: GOOD CCCH_M arfcn:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3434: BAD CCCH_M arfcn:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3477: GOOD PCH_M dsc%d
Line 3489: BAD PCH_M arfcn:%d dsc:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3523: GOOD PCH_in52
Line 3537: BAD PCH_in52 arfcn:%d dsc:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3585: SACCH changed TA%1u P%2u {%8lu}
Line 3591: GOOD SACCH arfcn:%d rlc:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3596: GOOD SACCH(SDCCH) - NEW P:%d NEW TA:%d
Line 3612: l1x_handle_sacch: limited txpwr = %d, arfcn: %d
Line 3627: GOOD SACCH TA:%1u NEW P:%2d CUR P:%d
Line 3650: l1x_handle_sacch invalid simno, L1C_L2_PH_DATA_IND not sent
Line 3684: Requesting SIM ID wrong. Check!
Line 3696: BAD SACCH arfcn:%d rlc:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3739: BAD SDCCH arfcn:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3749: GOOD SDCCH arfcn:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3780: l1x_handle_sdcch invalid simno, L1C_L2_PH_DATA_IND not sent
Line 3848: Error in sending CBCH IND %d
Line 3877: Error in sending CBCH IND %d
Line 3882: GOOD CBCH on TC%d A[0]=%d
Line 3892: BAD CBCH arfcn:%d TC:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3965: Error in sending CBCH2 IND %d
Line 3994: Error in sending CBCH2 IND %d
Line 3999: GOOD CBCH2 on TC%d A[0]=%d
Line 4009: BAD CBCH2 arfcn:%d TC:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 4071: l1x_bch_burst_result_handler: Adding Rxlev :%d
Line 4080: SEC CELL MMA METRICSCALE %d
Line 4090: [GL1 Error] Invalid burst_no (%d) 
Line 4240: BAD NCELL SI data found in PTM
Line 4309: SI 13 not detected
Line 4318: Bad_SI_Cnt[%d] Good_Nbcch_Bad_Decode_Cnt[%d]
Line 4353: Lost BCCH on %d sendng MPH_NO_BCCH
Line 4379: [##DCXO_Recovery] Anr Background? (%d) l1c_bcch_read_reason %d isRepeatBCHReqEnabled %d
Line 4396: Wrong Sim ID Check!
Line 4465: *** ERROR RR not stopping SI reading
Line 4489: GOOD NBCCH (%d) Err Cnt %d (%d) - SI Type[%d] Requested Sim [%d]  l1x_si_received_status = %d
Line 4506: GOOD NBCCH Not sent as Sync entry is not present 
Line 4595: *** ERROR : 'nSynchGetEntryByArfcn()' function returns NULL
Line 4603: BCCH arfcn (%d) ncell_bcch_arfcn %d rxlev %d
Line 4607: **Dont process BCCH result
Line 4635: BAD NBCH arfcn:%d Extended ErrCnt:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 4651: ERROR NBCCH (%d) code %d
Line 4658: BAD NBCH arfcn:%d cause:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 4667: *** ERROR ncell not changed yet
Line 4672: *** ERROR lost near cell
Line 4752: EARLY PAUSE TIMER SENT: %d
Line 4764: L1F DSL1RC RESUME SENT: %d
Line 4790: l1x_report_rxlev_meas_second_scell 
Line 4795: l1x_report_rxlev_meas: l1_mode = L1_IDLE_MODE
Line 4801: [GL1 Error] l1x_report_rxlev_meas_second_scell: invalid meas_type (%d) 
Line 420: SDCCH: l1x_sdcch_restart_meas_period - Reporting started
Line 432: SDCCH: l1x_sdcch_restart_meas_period - First Report available
Line 446: SDCCH: l1x_sdcch_restart_meas_period - New Report available
Line 452: TCH: Reporting Period Time restart -- ERROR: Not Available
Line 458: l1x_tch_restart_meas_period -- ERROR: Suspended
Line 464: l1x_tch_restart_meas_period -- ERROR: Validity = %d
Line 228: l1x_handle_sbcch_radio_link_loss : l1x_scell_sysinfo_error_cnt(%d)
Line 244: l1x_scell_sysinfo_error_cnt is set to 0 - #1
Line 253: GOOD SBCCH - error_cnt(%d)
Line 264: l1x_scell_sysinfo_error_cnt is set to 0 - #2
Line 280: [##DCXO_Recovery] Lost BCCH on Cell %d send MPH_NO_BCCH...isRepeatBCHReqEnabled %d
Line 293: Requesting SIM ID wrong. Check!
Line 317: [##DCXO_Recovery]Lost BCCH on SCELL %d send MPH_NO_BCCH...isRepeatBCHReqEnabled %d
Line 323: SBCCH to SIM %d 
Line 338: Requesting SIM ID wrong. Check!
Line 341: l1x_scell_sysinfo_error_cnt is set to 0 - #3
Line 364: [##DCXO_Recovery] Lost BCCH on Cell %d send MPH_NO_BCCH...isRepeatBCHReqEnabled %d
Line 377: Requesting SIM ID wrong. Check!
