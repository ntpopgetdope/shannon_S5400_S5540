Line 105: [OEM][RELAY_METRICS] %s
Line 114: [OEM][RELAY_METRICS] OOS or flight mode set serv_cell as empty.
Line 138: [OEM][RELAY_METRICS] serv_cell.plmn = %u
Line 144: [OEM][RELAY_METRICS] serv_cell.rat = %d [0: Unknown, 3: GSM, 4: WCDMA, 7: LTE, 8: 5G_NSA, 9: 5G_SA]
Line 150: [OEM][RELAY_METRICS] serv_cell.band = %u
Line 159: [OEM][RELAY_METRICS] serv_cell.bandwidth = %d (kHz) <= %d (LTE enum/NR kHz)
Line 167: [OEM][RELAY_METRICS] serv_cell.rsrp = %d <= %d / 100
Line 175: [OEM][RELAY_METRICS] serv_cell.rssi = %d <= %d / 100
Line 189: [OEM][RELAY_METRICS] serv_cell.rsrq = %d <= %d / 100
Line 197: [OEM][RELAY_METRICS] serv_cell.sinr = %d <= %d / 100
Line 203: [OEM][RELAY_METRICS] serv_cell.rrc_state = %d [0: Unknown, 1: Idle, 2: Connected, 3: Inactive (SA only)]
Line 211: [OEM][RELAY_METRICS] %s
Line 220: [OEM][RELAY_METRICS] OOS or flight mode set serv_cell as empty.
Line 232: [OEM][RELAY_METRICS] serving_ps_cell.rat = %d [0: Unknown, 3: GSM, 4: WCDMA, 7: LTE, 8: 5G_NSA, 9: 5G_SA]
Line 238: [OEM][RELAY_METRICS] serving_ps_cell.band = %u
Line 247: [OEM][RELAY_METRICS] serving_ps_cell.bandwidth = %d (kHz) <= %d (LTE enum/NR MHz)
Line 255: [OEM][RELAY_METRICS] serving_ps_cell.rsrp = %d <= %d / 100
Line 263: [OEM][RELAY_METRICS] serving_ps_cell.rssi = %d <= %d / 100
Line 270: [OEM][RELAY_METRICS] serving_ps_cell.rsrq = %d <= %d / 100
Line 278: [OEM][RELAY_METRICS] serving_ps_cell.sinr = %d <= %d / 100
Line 284: [OEM][RELAY_METRICS] %s
Line 306: [OEM][RELAY_METRICS] cell_group = [%s].
Line 309: [OEM][RELAY_METRICS] cell_group: %d is not valid!!
Line 312: [OEM][RELAY_METRICS] cell_index = %u.
Line 318: [OEM][RELAY_METRICS] pusch_slot_count = %u, pdsch_slot_count = %u, pdcch_only_slot_count = %u.
Line 323: [OEM][RELAY_METRICS] tx_slot_count = %u, tx_slot_max_power_limit_count = %u.
Line 326: [OEM][RELAY_METRICS] rx4_slot_count = %u, rx2_slot_count = %u.
Line 332: [OEM][RELAY_METRICS] rx4_slot_duration_in_ms = %u, rx2_slot_duration_in_ms = %u, rx1_slot_duration_in_ms = %u.
Line 336: [OEM][RELAY_METRICS] tx_dft_slot_count = %u, tx_cp_slot_count = %u.
Line 339: [OEM][RELAY_METRICS] pucch_only_tti_count = %u.
Line 343: [OEM][RELAY_METRICS] pdsch_nack_count = %u, pdsch_total_bytes = %u.
Line 347: [OEM][RELAY_METRICS] pusch_nack_count = %u, pusch_total_bytes = %u.
Line 353: [OEM][RELAY_METRICS] last_scs_unit_in_khz = %u, last_bandwidth = %d, last_band = %u.
Line 357: [OEM][RELAY_METRICS] last_duplex = [%s].
Line 360: [OEM][RELAY_METRICS] last_duplex: %d is not valid!!
Line 363: [OEM][RELAY_METRICS] scs_bitmap = %u.
Line 380: [OEM][RELAY_METRICS] %s
Line 396: [OEM][RELAY_METRICS] [%s] rat = %d
Line 402: [OEM][RELAY_METRICS] [%s] rrc_idle_duration_in_ms = %u
Line 408: [OEM][RELAY_METRICS] [%s] rrc_inactive_duration_in_ms = %u
Line 413: [OEM][RELAY_METRICS] [%s] rrc_inactive_count = %u
Line 419: [OEM][RELAY_METRICS] [%s] rrc_connected_duration_in_ms = %u
Line 424: [OEM][RELAY_METRICS] [%s] rrc_connected_count = %u
Line 429: [OEM][RELAY_METRICS] [%s] cell_reselection_success_count = %u
Line 432: [OEM][RELAY_METRICS] [%s] cell_reselection_fail_count = %u
Line 438: [OEM][RELAY_METRICS] [%s] voice_duration_in_ms = %u
Line 443: [OEM][RELAY_METRICS] [%s] handover_success_count = %u
Line 446: [OEM][RELAY_METRICS] [%s] handover_fail_count = %u
Line 451: [OEM][RELAY_METRICS] [%s] mobility_update_count = %u
Line 458: [OEM][RELAY_METRICS] [%s] idle_rx4_slot_count = %u
Line 464: [OEM][RELAY_METRICS] [%s] idle_rx2_slot_count = %u
Line 470: [OEM][RELAY_METRICS] [%s] paging_wakeup_count = %u
Line 477: [OEM][RELAY_METRICS] [%s] idle_sleep_duration_in_ms = %u
Line 484: [OEM][RELAY_METRICS] [%s] connected_sleep_duration_in_ms = %u
Line 491: [OEM][RELAY_METRICS] [%s] idle_search_duration_in_ms = %u
Line 498: [OEM][RELAY_METRICS] [%s] idle_measurement_duration_in_ms = %u
Line 505: [OEM][RELAY_METRICS] [%s] connected_search_duration_in_ms = %u
Line 512: [OEM][RELAY_METRICS] [%s] connected_measurement_duration_in_ms = %u
Line 518: [OEM][RELAY_METRICS] [%s] idle_search_count = %u
Line 525: [OEM][RELAY_METRICS] [%s] idle_measurement_count = %u
Line 532: [OEM][RELAY_METRICS] [%s] connected_search_count = %u
Line 540: [OEM][RELAY_METRICS] [%s] connected_measurement_count = %u
Line 547: [OEM][RELAY_METRICS] [%s] total_pdcp_dl_bytes = %u
Line 554: [OEM][RELAY_METRICS] [%s] total_pdcp_ul_bytes = %u
Line 561: [OEM][RELAY_METRICS] [%s] pdcp_sn_not_received_count = %u
Line 568: [OEM][RELAY_METRICS] [%s] pdcp_reordering_expiry_count = %u
Line 575: [OEM][RELAY_METRICS] [%s] pdcp_pdu_discarded_count = %u
Line 582: [OEM][RELAY_METRICS] [%s] new_rach_count = %u
Line 589: [OEM][RELAY_METRICS] [%s] total_rach_count = %u
Line 596: [OEM][RELAY_METRICS] [%s] radio_link_failure_count = %u
Line 603: [OEM][RELAY_METRICS] [%s] mcg_last_call_configured_cc_count = %u
Line 610: [OEM][RELAY_METRICS] [%s] mcg_last_call_max_activated_cc_count = %u
Line 617: [OEM][RELAY_METRICS] [%s] scg_last_call_configured_cc_count = %u
Line 624: [OEM][RELAY_METRICS] [%s] scg_last_call_max_activated_cc_count = %u
Line 631: [OEM][RELAY_METRICS] [%s] mcg_last_call_ul_configured_cc_count = %u
Line 638: [OEM][RELAY_METRICS] [%s] mcg_last_call_max_ul_activated_cc_count = %u
Line 645: [OEM][RELAY_METRICS] [%s] scg_last_call_ul_configured_cc_count = %u
Line 652: [OEM][RELAY_METRICS] [%s] scg_last_call_max_ul_activated_cc_count = %u
Line 659: [OEM][RELAY_METRICS] [%s] page_tb_decode_success_count = %u
Line 666: [OEM][RELAY_METRICS] [%s] page_tb_decode_fail_count = %u
Line 673: [OEM][RELAY_METRICS] [%s] cell_selection_success_count = %u
Line 680: [OEM][RELAY_METRICS] [%s] cell_selection_fail_count = %u
Line 687: [OEM][RELAY_METRICS] [%s] rach_success_count = %u
Line 694: [OEM][RELAY_METRICS] [%s] rach_fail_count = %u
Line 701: [OEM][RELAY_METRICS] [%s] t300_expiry_count = %u
Line 708: [OEM][RELAY_METRICS] [%s] t301_expiry_count = %u
Line 715: [OEM][RELAY_METRICS] [%s] msg2_decode_success_count = %u
Line 722: [OEM][RELAY_METRICS] [%s] msg2_decode_fail_count = %u
Line 729: [OEM][RELAY_METRICS] [%s] msg4_decode_success_count = %u
Line 736: [OEM][RELAY_METRICS] [%s] msg4_decode_fail_count = %u
Line 743: [OEM][RELAY_METRICS] [%s] page_imsi_proc_match_count = %u
Line 750: [OEM][RELAY_METRICS] [%s] page_imsi_proc_no_match_count = %u
Line 757: [OEM][RELAY_METRICS] [%s] rrc_establish_idle_success_count = %u
Line 764: [OEM][RELAY_METRICS] [%s] rrc_establish_idle_fail_count = %u
Line 771: [OEM][RELAY_METRICS] [%s] rrc_establish_inactive_success_count = %u
Line 778: [OEM][RELAY_METRICS] [%s] rrc_establish_inactive_fail_count = %u
Line 785: [OEM][RELAY_METRICS] [%s] pdsch_crc_failure_in_idle_count = %u
Line 792: [OEM][RELAY_METRICS] [%s] radio_link_failure_during_voice_call_count = %u
Line 799: [OEM][RELAY_METRICS] [%s] configured_dc_duration_in_ms = %u
Line 850: [OEM][PROTOCOL_METRICS] [DDCM] [current_ncells]ncell_index=%d, rat=%d, arfcn=%u, rsrp=%u
Line 859: [OEM][RELAY_METRICS] %s
Line 895: [OEM][PROTOCOL_METRICS] [DDCM] [nr_sorted_neighbor]ncell_index=%d, rat=%d, arfcn=%u, rsrp=%u
Line 915: [OEM][PROTOCOL_METRICS] [DDCM] [lte_sorted_neighbor]ncell_index=%d, rat=%d, arfcn=%u, rsrp=%u
Line 946: [OEM][PROTOCOL_METRICS] [DDCM] [lte_sorted]ncell_index=%d, rat=%d, arfcn=%u, rsrp=%u
Line 954: [OEM][PROTOCOL_METRICS] [DDCM] [lte_neighbor]cell_count=%d, ncell_index=%d, rat=%d, arfcn=%u, rsrp=%u
Line 982: [OEM][PROTOCOL_METRICS] [DDCM] [nr_sorted]ncell_index=%d, rat=%d, arfcn=%u, rsrp=%u
Line 997: [OEM][PROTOCOL_METRICS] [DDCM] [nr_neighbor]cell_count=%d, ncell_index=%d, rat=%d, arfcn=%u, rsrp=%u
Line 1006: [OEM][RELAY_METRICS] %s
Line 1211: [OEM][RELAY_METRICS] %s: pull_timestamp(%u)
Line 1279: [OEM][RELAY_METRICS] %s: data_buffer addr (0x%x)
Line 1287: [OEM][RELAY_METRICS] Pull count since last reset (%u) [=0: Reset, >0: Accum]
Line 1291: [OEM][RELAY_METRICS] metrics pull_timestamp (%u)
Line 1301: [OEM][RELAY_METRICS] stack[%u] relay metrics => start_timestamp (%u)
Line 1306: [OEM][RELAY_METRICS] stack[%u] relay metrics => metric_duration_in_ms (pull - start = %u)
Line 1310: [OEM][RELAY_METRICS] stack[%u] relay metrics => stack_id (%u)
Line 1325: [OEM][RELAY_METRICS] stack[%u] relay metrics => no_service_duration_in_ms (%u)
Line 1329: [OEM][RELAY_METRICS] stack[%u] relay metrics => no_service_count (%u)
Line 1336: [OEM][RELAY_METRICS] stack[%u] relay metrics => limited_service_duration_in_ms (%u)
Line 1339: [OEM][RELAY_METRICS] stack[%u] relay metrics => limited_service_count (%u)
Line 1346: [OEM][RELAY_METRICS] stack[%u] relay metrics => gsm_umts_duration_in_ms (%u)
Line 1351: [OEM][RELAY_METRICS] stack[%u] relay metrics => rat_switch_count (%u)
Line 1357: [OEM][RELAY_METRICS] stack[%u] cp_cpu_sleep_count = %u
Line 1363: [OEM][RELAY_METRICS] stack[%u] cp_cpu_sleep_duration_in_ms = %u
Line 1370: [OEM][RELAY_METRICS] stack[%u] relay metrics => gnss_on_duration_in_ms (%u)
Line 1373: [OEM][RELAY_METRICS] stack[%u] relay metrics => gnss_on_count (%u)
Line 1383: [OEM][RELAY_METRICS] stack[%u] relay metrics => endc_disablement_duration_in_ms (%u)
Line 1386: [OEM][RELAY_METRICS] stack[%u] relay metrics => endc_disablement_count (%u)
Line 1393: [OEM][RELAY_METRICS] stack[%u] relay metrics => nrsa_disablement_duration_in_ms (%u)
Line 1396: [OEM][RELAY_METRICS] stack[%u] relay metrics => nrsa_disablement_count (%u)
