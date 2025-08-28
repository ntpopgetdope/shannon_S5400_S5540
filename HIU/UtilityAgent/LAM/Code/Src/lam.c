Line 99: [OEM][LAM] [REG] Load registry. stackId(%u), GFEATURE_LATENCY_MONITOR(%u), bDISCARD(%u), bAVG(%u), bTCP(%u), bFIRST(%u), bSend(%u), Settings(0x%x)
Line 140: [OEM][LAM] [CFG] Apply registry. stackId(%u), GFEATURE_LATENCY_MONITOR(%u), bDISCARD(%u), bAVG(%u), bTCP(%u), bFIRST(%u), bSend(%u), Settings(0x%x)
Line 143: [OEM][LAM] [CFG] Apply registry. stackId(%u), b_lam_dbg_mode(%u)
Line 151: [OEM][LAM] [INIT] LAM initializing... cause(%u)
Line 173: [OEM][LAM] [CMN] Init commonInfo
Line 181: [OEM][LAM] [CMN] Reset commonInfo
Line 190: [OEM][LAM] [AVG] Init avgPktLatencyInfo
Line 200: [OEM][LAM] [AVG] Reset avgPktLatencyInfo, stackId(%u)
Line 223: [OEM][LAM] [AVG] Update avgPktLatencyInfo. latencyMs(%u), bucketId(%u), latencyCount(%u), latencySum(%u), successCount(%u)
Line 233: [OEM][LAM_WARN] [AVG] Sending metrics... Cause: latencySum(%u) >= (%u), bucketId(%u), stackId(%u), pdcpOpMode(%u), bDISCARD(%u), bAVG(%u), bTCP(%u), bFIRST(%u), bSend(%u)
Line 246: [OEM][LAM_WARN] [AVG] Sending metrics... Cause: successCount(%u) >= (%u), bucketId(%u), stackId(%u), pdcpOpMode(%u), bDISCARD(%u), bAVG(%u), bTCP(%u), bFIRST(%u), bSend(%u)
Line 256: [OEM][LAM] [TCP] Init tcpInfo and tcpInfoPara
Line 268: [OEM][LAM] [TCP] Init tcpPktLatencyInfo
Line 276: [OEM][LAM] [TCP] Reset tcpPktLatencyInfo
Line 284: [OEM][LAM_WARN] [TCP][PARSE] Invalid packet, pData == 0
Line 301: [OEM][LAM_WARN] [DBG][TCP][PARSE] Invalid packet, dataLen %u < min IPv4Hdr %u + min tcpHdr %u
Line 307: [OEM][LAM] [DBG][TCP][PARSE] Large packet != TCP SYN or TCP ACK, dataLen %u > max IPv4Hdr %u + max tcpHdr %u
Line 328: [OEM][LAM] [TCP] Detect IPV4, isTcp(%u), ipPayloadLen(%u), qIdx(%u)
Line 332: [OEM][LAM] [TCP] ipSrcAddr(%u.%u.%u.%u), ipDstAddr(%u.%u.%u.%u)
Line 340: [OEM][LAM_WARN] [DBG][TCP][PARSE] Invalid packet, dataLen %u < IPv6Hdr %u + min tcpHdr %u
Line 346: [OEM][LAM] [DBG][TCP][PARSE] Large packet != TCP SYN or TCP ACK, dataLen %u > IPv6Hdr %u + max tcpHdr %u
Line 364: [OEM][LAM] [TCP] Detect IPV6, isTcp(%u), ipPayloadLen(%u), qIdx(%u)
Line 367: [OEM][LAM] [TCP] ipSrcAddr(X:X:%02x%02x:%02x%02x), ipDstAddr(X:X:%02x%02x:%02x%02x)
Line 372: [OEM][LAM_WARN] [TCP][PARSE] Invalid IP version, ipVer: %u, dataLen: %u, pData[0]: 0x%02x
Line 384: [OEM][LAM] [DBG][TCP][PARSE] Not TCP SYN or ACK, ipVer %u, ipPayloadLen %u> tcpHdrLen %u
Line 408: [OEM][LAM] [TCP][SYN] Detect TCP SYN, qIdx(%u), tcpSrcPort(%u), tcpDstPort(%u), tcpSn(%u), tcpInfoIdx(%u), currentTimeUs(%u)
Line 412: [OEM][LAM] [DBG][TCP][SYN] TCP SYN qIdx(%u) != 0
Line 433: [OEM][LAM_WARN] [TCP][SYN] tcpSyn is considered failure due to timeout(%u > %u ms)! Idx: %u, new tcpSn: %u old tcpSynSn: %u, tcpSynRetxCount: %u, N: %u, tcpSynTimeUs: %u
Line 442: [OEM][LAM_WARN] [TCP][SYN] Skip TcpSyn as tcpInfo is in use (%u ms)! Idx: %u, new tcpSn: %u old tcpSynSn: %u, N: %u, tcpSynTimeUs: %u
Line 454: [OEM][LAM_WARN] [TCP][SYN] tcpInfo retx (%u ms)! Idx: %u, tcpSn: %u tcpSynRetxCount: %u, N: %u, tcpSynTimeUs: %u
Line 468: [OEM][LAM] [TCP][SYN] TCP SYN stored! Idx: %u, tcpSynSn: %u, N: %u, tcpSynTimeUs: %u
Line 481: [OEM][LAM] [DBG][TCP][ACK] Detect TCP ACK but all tcpInfo are empty, tcpInfoPara.num == 0
Line 490: [OEM][LAM_WARN] [TCP][ACK] All tcpSyn are considered failure due to timeout, N(%u), timeElapsedMsFromLastTcpSyn(%u) > %u
Line 513: [OEM][LAM] [TCP][ACK] Detect TCP ACK, qIdx(%u), tcpSrcPort(%u), tcpDstPort(%u), tcpSn(%u), tcpInfoIdx(%u), currentTimeUs(%u)
Line 517: [OEM][LAM] [DBG][TCP][ACK] TCP ACK qIdx(%u) != 0
Line 537: [OEM][LAM] [TCP][ACK] TCP ACK-SYN matched! Idx: %u, latencyMs: %u, tcpSynSn: %u, N: %u, tcpSynTimeUs: %u
Line 552: [OEM][LAM_WARN] [TCP][ACK] TCP ACK-SYN not matched! Idx: %u, timeElapsedMs: %u, ACK-tcpSn: %u, tcpSynSn: %u, N: %u, tcpSynTimeUs: %u
Line 565: [OEM][LAM_WARN] [TCP][ACK] tcpSyn is considered failure due to timeout(%u > %u ms)! Idx: %u, ACK-tcpSn: %u tcpSynSn: %u, N: %u, tcpSynTimeUs: %u
Line 575: [OEM][LAM] [DBG][TCP][ACK] Detect TCP ACK but tcpInfo is empty, used == 0, Idx: %u, ACK-tcpSn: %u
Line 602: [OEM][LAM] [TCP] Update tcpPktLatencyInfo. latencyMs(%u), bucketId(%u), tcp_latencyCount(%u), tcp_latencySum(%u), tcp_successCount(%u), tcp_successWithSynRetxCount(%u)
Line 615: [OEM][LAM_WARN] [TCP] Sending metrics... Cause: latencySum(%u) >= (%u), bucketId(%u), stackId(%u), pdcpOpMode(%u), bDISCARD(%u), bAVG(%u), bTCP(%u), bFIRST(%u), bSend(%u)
Line 630: [OEM][LAM_WARN] [TCP] Sending metrics... Cause: successCount(%u) >= (%u), bucketId(%u), stackId(%u), pdcpOpMode(%u), bDISCARD(%u), bAVG(%u), bTCP(%u), bFIRST(%u), bSend(%u)
Line 652: [OEM][LAM] [TCP] Update tcpPktLatencyInfo: tcp_failureCount(%u), tcp_failureWithSynRetxCount(%u), LAM_TCPINFO_TIMER_MS(%u), cause(%u)
Line 672: [OEM][LAM] [FIRST] Init firstPktLatencyInfo
Line 683: [OEM][LAM] [FIRST] Reset firstPktLatencyInfo, stackId(%u)
Line 695: [OEM][LAM] [FIRST] Start tracking first packet. stackId(%u), pUbuf(%x)
Line 703: [OEM][LAM] [FIRST] Stop tracking first packet. stackId(%u), pUbuf(%x)
Line 724: [OEM][LAM] [FIRST] Update firstPktLatencyInfo. latencyMs=%u, bucketId=%u
Line 732: [OEM][LAM] [DSC] Init pktDiscardInfo
Line 742: [OEM][LAM] [DSC] Reset pktDiscardInfo, stackId(%u)
Line 758: [OEM][LAM] [DSC] Update pktDiscardInfo. pendingTimeMs=%u, discardCount(%u), pendingTimeSum(%u)
Line 768: [OEM][LAM_WARN] [DSC] Sending metrics... Cause: discardCount(%u) >= (%u), stackId(%u), pdcpOpMode(%u), bDISCARD(%u), bAVG(%u), bTCP(%u), bFIRST(%u), bSend(%u)
Line 824: [OEM][LAM_WARN] [BUCKET] Wrong bucketId(%u) >= bucketNum(%u), set to bucketNum-1! latencyMs: %u
Line 857: [OEM][LAM_WARN] [BUCKET] Wrong bucketId(%u) >= bucketNum(%u), set to bucketNum-1! latencyMs: %u, base: %u
Line 887: [OEM][LAM] [CFG] LAM_LATENCY_BASE: %u, LAM_PACKET_COUNT_TO_REPORT: %u, LAM_TCPINFO_NUM: %u, LAM_DBG_VER:%u
Line 893: [OEM][LAM] [DBG] num = %u, num
Line 921: [OEM][LAM] [DBG] Canceling sending metrics because count = 0
Line 931: [OEM][LAM] [DBG] Sending metrics to gems...
Line 941: [OEM][LAM_WARN] Metrics sent failed!
Line 950: [OEM][LAM_WARN] Metrics report not generated!
Line 972: [OEM][LAM_WARN] Metrics report not generated! report = NULL
Line 1002: [OEM][LAM] [KEY] Generating keys: hplmn(%u), serving_plmn(%u), carrier_id(%u), fold_status(%u), dsds(%u)
Line 1013: [OEM][LAM_WARN] Metrics report not generated! metric_dimension_ptr = NULL
Line 1023: [OEM][LAM] [DIM] Generating dims: pdcpOpMode(%u)
Line 1037: [OEM][LAM_WARN] Metrics Report not generated! metric_value_ptr = NULL
Line 1038: [OEM][LAM_WARN] MEM_FREE! dimension is allocated but metric_value_ptr = NULL
Line 1062: [OEM][LAM] [DSC] Generating %u metrics from %u to %u, value_count_max: %u
Line 1064: [OEM][LAM] [DSC] Generating values: discardCount(%u), pendingTimeSum(%u)
Line 1113: [OEM][LAM] [AVG] Generating %u metrics from %u to %u, value_count_max: %u
Line 1119: [OEM][LAM] [AVG] Generating values: successCount(%u), latencyCount(%u,%u,%u,%u,%u,%u,%u,%u,%u)
Line 1129: [OEM][LAM] [AVG] Generating values: latencySum/Count(%u,%u,%u,%u,%u,%u,%u,%u,%u)
Line 1187: [OEM][LAM] [TCP] Generating %u metrics from %u to %u, value_count_max: %u
Line 1197: [OEM][LAM] [TCP] Generating values: tcp_successCount(%u), tcp_latencyCount(%u,%u,%u,%u,%u,%u,%u,%u,%u)
Line 1208: [OEM][LAM] [TCP] Generating values: tcp_latencySum/Count(%u,%u,%u,%u,%u,%u,%u,%u,%u)
Line 1211: [OEM][LAM] [TCP] Generating values: tcp_successCount(%u), tcp_failureCount(%u), tcp_successWithSynRetxCount(%u), tcp_failureWithSynRetxCount(%u)
Line 1227: [OEM][LAM] [FIRST] Generating %u metrics from %u to %u, value_count_max: %u
Line 1229: [OEM][LAM] [FIRST] Generating values: latencyBucketId(%u), latency(%u)
Line 1251: [OEM][LAM_WARN] MEM_FREE! Metrics not sent! bSend(%u)
Line 1268: [OEM][LAM_WARN] Metrics Notify msg sent failed! report = NULL
Line 1278: [OEM][LAM_WARN] MEM_FREE! Metrics Notify msg sent failed! result = FALSE
