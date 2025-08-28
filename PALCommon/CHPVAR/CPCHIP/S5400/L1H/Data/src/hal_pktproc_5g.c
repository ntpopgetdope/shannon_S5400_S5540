Line 501: [HAL][PktProc] InitPktProcReg
Line 593: [HAL][PktProc] IsInitDone=false (COM_DMA_INIT_DATA=%x)
Line 604: [HAL][PktProc] InitPktProcPktFilter(%d)
Line 685: [HAL][PktProc] InitPktProcPktFilterWithPrevInfo
Line 673: [HAL][PktProc] InitPktProcPktFilterHiddenAct
Line 740: [HAL][PktProc][ERROR] SetPktProcRouterDescAddr Invalid DescType=%d
Line 819: [HAL][PktProc][ERROR] SetPktProcRouterDescAddr unexpectedType(%d)
Line 838: [HAL][PktProc][ERROR] SetPktProcRigBufAddr unexpectedType(%d)
Line 895: [HAL][PktProc][ERROR] Invalid key index=%d
Line 1014: [HAL][PktProc] Invalid Ip Version for PktProc Filter (V/E field)
Line 1120: [HAL][PktProc] IPv4 Packet Filter (Offset:%d BitMask:0x%x Protocol:0x%x SrcIp:0x%x DstIp:0x%x Src/DstPort:0x%08x Icmp:0x%x)
Line 1230: [HAL][PktProc] IPv6 Packet Filter (Offset:%d BitMask:0x%x Protocol:0x%x SrcIp:0x%x DstIp:0x%x Src/DstPort:0x%x Icmp: 0x%x)
Line 1357: [HAL][PktProc] HiddenAct uses the default packet filter (Chid (%d),  PdnType (%d), IpType (%d), HiddenAct (%d))
Line 1371: [HAL][PktProc][WARNING] Hal_AddPktProcChIdFilter skip (PDNDB_CHECK_APROUTING fail, Chid (%d))
Line 1380: [HAL][PktProc][WARNING] Hal_AddPktProcChIdFilter skip (DIT disabled, Chid (%d))
Line 1430: [HAL][PktProc] Invalid PDN Type for PktProc
Line 1435: [HAL][PktProc] Hal_AddPktProcChIdFilter (Chid (%d), Offset (%d), PdnType (%d), IpType (%d), HiddenAct (%d))
Line 1458: [HAL][PktProc] Hal_DeletePktProcChIdFilter - Do not delete Hidden Act Filter (Chid (%d), IpType (%d))
Line 1464: [HAL][PktProc] Hal_DeletePktProcChIdFilter - Do not delete twice (Chid (%d), IpType (%d))
Line 1478: [HAL][PktProc] Invalid PDN's Ip Version for PktProc
Line 1486: [HAL][PktProc] Hal_DeletePktProcChIdFilter (Chid (%d), Offset (%d), IpType (%d))
Line 1521: [HAL][PktProc][WARNING] No filter(ipv4) config for chId=%d
Line 1525: [HAL][PktProc][WARNING] No filter(ipv6) config for chId=%d
Line 1542: [HAL][PktProc] EnableDitPktProcChIdFilterForChId currStack(%d) Chid(%d) EnableDit(%d) PDNDB_CHECK_APROUTING(%d) Offset(v4:%d,v6:%d) Cnt(%d)
Line 1560: [HAL][PktProc][DEBUG] HALPKTP_5G_GetPktProcFilterEndOffset iptype=%d OffsetFrom=%d
Line 1586: [HAL][PktProc][ERROR] Invalid IpType=%d
Line 1613: [HAL][PktProc] dbgDumpDesc
Line 1626: [HAL][PKTPROC] Ipv4 Chid:Offset(%d:%d, %d:%d, %d:%d, %d:%d)
Line 1635: [HAL][PKTPROC] Ipv6 Chid:Offset(%d:%d, %d:%d, %d:%d, %d:%d)
Line 1648: [HAL][PKTPROC] PktProcIpv4FilterSet[%02d] v:%d e:%d dstQ:%d bitMask:0x%x icmp:0x%x protocol:0x%x
Line 1650: [HAL][PKTPROC]                          srcAddr:0x%x srcPort:0x%x dstAddr:0x%x dstPort:0x%x
Line 1659: [HAL][PKTPROC] PktProcIpv6FilterSet[%02d] v:%d e:%d dstQ:%d bitMask:0x%x icmp:0x%x protocol:0x%x
Line 1661: [HAL][PKTPROC]                          srcAddr0:0x%x srcAddr1:0x%x srcAddr2:0x%x srcAddr3:0x%x srcPort:0x%x
Line 1663: [HAL][PKTPROC]                          dstAddr0:0x%x dstAddr1:0x%x dstAddr2:0x%x dstAddr3:0x%x dstPort:0x%x
Line 1675: [HAL][PKTPROC] HALPKTP_5G_PrintPktFilterOfChId ChId(%d) IpVer(%d) Offset(%d)
Line 1680: [HAL][PKTPROC] PktProcIpv4FilterSet[%02d] v:%d e:%d dstQ:%d bitMask:0x%x icmp:0x%x protocol:0x%x
Line 1682: [HAL][PKTPROC]						   srcAddr:0x%x srcPort:0x%x dstAddr:0x%x dstPort:0x%x
Line 1692: [HAL][PKTPROC] HALPKTP_5G_PrintPktFilterOfChId ChId(%d) IpVer(%d) Offset(%d)
Line 1697: [HAL][PKTPROC] PktProcIpv6FilterSet[%02d] v:%d e:%d dstQ:%d bitMask:0x%x icmp:0x%x protocol:0x%x
Line 1699: [HAL][PKTPROC]						   srcAddr0:0x%x srcAddr1:0x%x srcAddr2:0x%x srcAddr3:0x%x srcPort:0x%x
Line 1701: [HAL][PKTPROC]						   dstAddr0:0x%x dstAddr1:0x%x dstAddr2:0x%x dstAddr3:0x%x dstPort:0x%x
Line 1779: [HAL][PktProc] NUM_OF_CP_PKT TCP_IP(%d) IMS_CC(%d) L2(%d) LEGACY(%d) RESERVED(%d) LOOPBACK(%d) TCP_DUMP(%d) SDAP(%d)
Line 1801: [HAL][PktProc] Queue DstDesc (DstType=%d,StartIdx=%d,Num=%d)
Line 1900: [HAL][PktProc] Skip Itg fail of dummy RbId(%d)
Line 1904: [HAL][PktProc] DL_ITG_FAIL_RBID_SET (0x%08x 0x%08x)
Line 1938: [HAL][PktProc][WARN] GetPktProcPfResult failed (No CP_RESERVED, R:%d,W:%d)
Line 2047: [HAL][PktProc][WARNING] Invalid filterType=%d%d
Line 2330: [HAL][PktProc][ERROR] No StartFunction !
