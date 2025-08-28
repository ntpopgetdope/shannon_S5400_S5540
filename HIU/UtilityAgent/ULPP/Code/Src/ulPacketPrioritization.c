Line 147: [OEM][ULPP] Monitor protocol: %u, Sibling protocol: %u
Line 174: [OEM][ULPP] Monitor ports: target_srcport_count=%u, target_dstport_count=%u, source port=(%u,%u), destination port=(%u,%u)
Line 199: [OEM][ULPP] Control ports: target_srcport_count=%u, target_dstport_count=%u, source port=(%u,%u), destination port=(%u,%u)
Line 223: [OEM][ULPP] Sibling ports: target_srcport_count=%u, target_dstport_count=%u, source port=(%u,%u), destination port=(%u,%u)
Line 266: [OEM][ULPP] initial gvc monitor interval = [%u, %u, %u, %u, %u, %u]
Line 268: [OEM][ULPP] initial gvc monitor, consecutive duration: %u, rtcp valid period: %u, minimum interval: %u, banned interval: %u
Line 271: [OEM][ULPP] initial gvc packet count threshold = [%u, %u, %u, %u], ul throttling threshold = [%u, %u, %u]
Line 276: [OEM][ULPP] initial gvc temp threshold = [%u, %u, %u], gvc flush threshold = [%u, %u, %u], metrics report = [%u, %u]
Line 290: [OEM][ULPP] g_ulpp_enable=%u, rat=%u, IsGvcOngoing=%u, monitor count=(%u,%u), control count=(%u,%u), sibling count=(%u,%u)
Line 344: [OEM][ULPP] g_ulpp_enable=%u, rat=%u, IsGvcOngoing=%u, monitor count=(%u,%u), control count=(%u,%u), sibling count=(%u,%u)
Line 354: [OEM][ULPP] Monitor ports[%u]: source port=(%u,%u), destination port=(%u,%u)
Line 361: [OEM][ULPP] Control ports[%u]: source port=(%u,%u), destination port=(%u,%u)
Line 368: [OEM][ULPP] Sibling ports[%u]: source port=(%u,%u), destination port=(%u,%u)
Line 414: [OEM][ULPP] ULPP_Gvc_State_Turn_On and turn on IsGvcOngoing, activation_count=%u, ulpp_activation_tick=%u
Line 444: [OEM][ULPP] [Error] ULPP_Trigger_DB_Reset with CurrStack=%u and abnormal RAT=%u
Line 467: [OEM][ULPP] Turn off ULPP, activation duration = %u, activation_duration_bucket[%u] = %u
Line 471: [OEM][ULPP] Turn off ULPP, SampleUlThroughput = %u, UlThroughput_bucket[%u] = %u
Line 475: [OEM][ULPP] Turn off ULPP, SampleLowPriorityVolume = %u, LowPriorityVolume_bucket[%u] = %u
Line 484: [OEM][ULPP] Turn off ULPP, SampleHighPacketLatency = %u, SampleLowPacketLatency = %u, Latency_gain = %u, PacketLatencyGain_bucket[%u] = %u
Line 489: [OEM][ULPP] ULPP_Send_Metrics: activation_count = %u, rat = %u
Line 502: [OEM][ULPP] ULPP_Turn_Off_Handler with CurrStack = %u, activeRAT = %u, curr_tick = %u
Line 508: [OEM][ULPP] [Error] ULPP_Turn_Off_Handler with CurrStack=%u and abnormal RAT=%u
Line 542: [OEM][ULPP] ULPP_Check_Udp_PacketType, STUN unexpected message_length byte = %u, magic_cookie = %u
Line 548: [OEM][ULPP] ULPP_Check_Udp_PacketType, STUN unexpected case
Line 569: [OEM][ULPP] ULPP_Check_Udp_PacketType, RTP case since length (%u) longer than UdpPayloadLength (%u)
Line 586: [OEM][ULPP] ULPP_Check_Udp_PacketType, RTP/RTCP unexpected case
Line 649: [OEM][ULPP] ULPP_Check_Gvc_Call_Status, prioritize src_port = %u, dst_port = %u as control ports due to GvcOngoing
Line 657: [OEM][ULPP] ULPP_Check_Gvc_Call_Status, src_port = %u, dst_port = %u
Line 680: [OEM][ULPP] ULPP_Check_Gvc_Call_Status, not monitored, curr_tick = %u, last_ulpp_end_tick = %u, pass_tick = %u
Line 685: [OEM][ULPP] ULPP_Check_Gvc_Call_Status, return due to 1st packet, udp_type = %u, curr_tick = %u, last_ulpp_end_tick = %u
Line 704: [OEM][ULPP] [Err] ULPP_Check_Gvc_Call_Status, get unexpected long_interval_udp_count = 0, udp_type = %u, w_idx = %u, r_idx = %u
Line 729: [OEM][ULPP] ULPP_Check_Gvc_Call_Status, reset GVC info, udp_type %u long_interval_udp_count = %u and pass_tick = %u
Line 734: [OEM][ULPP] ULPP_Check_Gvc_Call_Status, add GVC info, udp_type %u long_interval_udp_count = %u and pass_tick = %u
Line 746: [OEM][ULPP] ULPP_Check_Gvc_Call_Status, curr_tick = %u, last RTCP tick = %u, rtcp_pass_tick = %u
Line 750: [OEM][ULPP] ULPP_Check_Gvc_Call_Status, reset RTCP count due to curr_tick = %u, last RTCP tick = %u, rtcp_pass_tick = %u
Line 781: [OEM][ULPP] ULPP_Check_Gvc_Call_Status, turn on IsGvcOngoing, curr_tick = %u, pass_tick = %u, last_ulpp_end_tick = %u, first_rtp_tick = %u, rtp_cons_tick = %u
Line 788: [OEM][ULPP] ULPP_Check_Gvc_Call_Status, monitoring RTP status, curr_tick = %u, pass_tick = %u, last_ulpp_end_tick = %u, first_rtp_tick = %u, rtp_cons_tick = %u
Line 794: [OEM][ULPP] ULPP_Check_Gvc_Call_Status, set HighPriority back to FALSE, src_port = %u, dst_port = %u, curr_tick = %u
Line 914: [OEM][ULPP] ULPP_Periodically_Check_Gvc_Data Metrics: UlThroughput100ms = %u, NasuUlThroughput = %u, LowPriorityDataVolume = %u, SampleUlThroughput = %u, SampleLowPriorityVolume = %u
Line 917: [OEM][ULPP] ULPP_Periodically_Check_Gvc_Data Metrics: HighPriorityDataVolume = %u, LowPriorityDataVolume = %u, UlThroughput100ms = %u
Line 933: [OEM][ULPP] ULPP_Periodically_Check_Gvc_Data Metrics: HighPriorityLatency = %u, LowPriorityLatency = %u, SampleHighPacketLatency = %u, SampleLowPacketLatency = %u
Line 958: [OEM][ULPP] ULPP_Periodically_Check_Gvc_Data, pass_tick_stun = %u, pass_tick_rtp = %u, pass_tick_rtcp = %u, count = [%u, %u, %u]
Line 965: [OEM][ULPP] long_interval_udp_count= %u, out_of_interval_udp_count= %u
Line 970: [OEM][ULPP] ULPP_Periodically_Check_Gvc_Data, turn off IsGvcOngoing, curr_tick = %u
Line 1019: [OEM][ULPP] Metrics report not generated! report = NULL
Line 1039: [OEM][ULPP] Generating keys: hplmn(%u), serving_plmn(%u), carrier_id(%u), dsds(%u), rat(%u)
Line 1048: [OEM][ULPP] Metrics report not generated! metric_dimension_ptr = NULL
Line 1071: [OEM][ULPP] Metrics Report not generated! metric_value_ptr = NULL
Line 1085: [OEM][ULPP] Generate values: activation_duration_bucket[%u] = %u
Line 1099: [OEM][ULPP] Generate values: PacketLatencyGain_bucket[%u] = %u
Line 1113: [OEM][ULPP] Generate values: UlThroughput_bucket[%u] = %u
Line 1127: [OEM][ULPP] Generate values: LowPriorityVolume_bucket[%u] = %u
Line 1138: [OEM][ULPP] MEM_FREE for metrics report as enable_metrics_report = FALSE, num_values = %u
Line 1155: [OEM][ULPP] Metrics Notify msg sent failed! report = NULL
Line 1171: [OEM][ULPP] MEM_FREE! Metrics Notify msg sent failed! result = FALSE
Line 1224: [OEM][ULPP] Send Metrics report failed!
Line 1229: [OEM][ULPP] Generate Metrics report failed!
