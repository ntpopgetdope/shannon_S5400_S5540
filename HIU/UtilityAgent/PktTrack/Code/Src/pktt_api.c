Line 191: [OEM][PKTTa] [REG] Read registry. stackid: %d, GFEATURE_PACKET_TRACK: %u, ICMP: %u, DNS: %u, DSTIPV4: %u.x.x.%u, DSTIPV6: %x:x:x:x:x:x:x:%x, Settings: 0x%x
Line 193: [OEM][PKTTa] [REG] Apply registry: PKTT. stackid: %d, pktt_on: %d
Line 199: [OEM][PKTTa] [REG] Apply registry: ICMP. stackid: %d, icmpv4/icmpv6: %d/%d, icmpv4_dstip_assigned: %u(%u.x.x.%u), icmpv6_dstip_assigned: %u(%x:x:x:x:x:x:x:%x)
Line 201: [OEM][PKTTa] [REG] Apply registry: DNS. stackid: %d, dnsv4/dnsv6: %d/%d
Line 206: [OEM][PKTTa] [REG] Apply registry: DSTIP. stackid: %d, dstipv4/dstipv6: %u(%u...)/%u(%x...), protocol_assigned: %u/%u, dstport_assigned: %u/%u
Line 210: [OEM][PKTTa] [REG] Apply registry: DSTIPV4. stackid: %d, dstipv4: %u(%u.x.x.%u), protocol_assigned: %u, dstport_assigned: %u
Line 214: [OEM][PKTTa] [REG] Apply registry: DSTIPV6. stackid: %d, dstipv6: %u(%x:x:x:x:x:x:x:%x), protocol_assigned: %u, dstport_assigned: %u
Line 220: [OEM][PKTTa] [REG] Apply registry: Settings. stackid: %d, b_on_init: %u, b_on_apm: %u, b_off_hif_tp: %u, b_off_hif_pktnum: %u, b_off_mac_tp: %u, b_pktt_light: %u, b_pktt_full: %u
Line 260: [OEM][PKTT] [PKTINFO-INIT][pType:%u] stackid: %u, trackN: %u/%u, Head: %u, Tail: %u, alocN: %u, freeN: %u
Line 300: [OEM][PKTTa] [Control] PKTT turn on, accepted. GFEATURE_PACKET_TRACK: %u, ICMP: %u, DNS: %u, pktt_on|icmpv4|icmpv6|dnsv4|dnsv6|dstipv4|dstipv6: %d|%d|%d|%d|%d|%d|%d
Line 314: [OEM][PKTTa] [Control] PKTT soft turn on, ignored. GFEATURE_PACKET_TRACK: %u, ICMP: %u, DNS: %u, pktt_on|icmpv4|icmpv6|dnsv4|dnsv6|dstipv4|dstipv6: %d|%d|%d|%d|%d|%d|%d
Line 335: [OEM][PKTTa] [Control] PKTT soft turn on, accepted. GFEATURE_PACKET_TRACK: %u, ICMP: %u, DNS: %u, pktt_on|icmpv4|icmpv6|dnsv4|dnsv6|dstipv4|dstipv6: %d|%d|%d|%d|%d|%d|%d
Line 354: [OEM][PKTTa] [Control] PKTT soft off, accepted. GFEATURE_PACKET_TRACK: %u, ICMP: %u, DNS: %u, pktt_on|icmpv4|icmpv6|dnsv4|dnsv6|dstipv4|dstipv6: %d|%d|%d|%d|%d|%d|%d
Line 368: [OEM][PKTTa] [Control] PKTT soft turn off, ignored. GFEATURE_PACKET_TRACK: %u, ICMP: %u, DNS: %u, pktt_on|icmpv4|icmpv6|dnsv4|dnsv6|dstipv4|dstipv6: %d|%d|%d|%d|%d|%d|%d
Line 384: [OEM][PKTTa] [Control] PKTT soft turn off, accepted. GFEATURE_PACKET_TRACK: %u, ICMP: %u, DNS: %u, pktt_on|icmpv4|icmpv6|dnsv4|dnsv6|dstipv4|dstipv6: %d|%d|%d|%d|%d|%d|%d
Line 395: [OEM][PKTTa] [CFG] PKTT_DBG disabled, PKTT_DBG_VER: %u
Line 401: [OEM][PKTTa] [CFG] PKTT_SUPPORT_DUAL_STACK disabled
Line 407: [OEM][PKTTa] [CFG] PKTT_SUPPORT_PAIRING disabled
Line 412: [OEM][PKTTa] [CFG][PKTINFO] icmpv4_num: %d, icmpv6_num: %d, dnsv4_num: %d, dnsv6_num: %d, dstipv4_num: %d, dstipv6_num: %d
Line 416: [OEM][PKTTa] [CFG]reset_timer: %ums, ul_tput_th1: %ukbps, ul_tput_th2: %ukbps, ul_pkt_count_th1: %u
Line 453: [OEM][PKTT] [TPUT] MAC_NEW_ULG(LTE|NR): %u|%u kbps
Line 457: [OEM][PKTTa] [TPUT] MAC_NEW_ULG(LTE|NR): %u|%u kbps > %u kbps
Line 465: [OEM][PKTTa] [TPUT] PKTT soft turn off! MAC_NEW_ULG(LTE|NR): %u|%u kbps > %u kbps
Line 507: [OEM][PKTTa_WARN] [PARSE] Invalid packet, pData == 0 or dataLen == 0
Line 541: [OEM][PKTT] [IPV4] IpHdrLen: %d(%d bytes), IpTotalLen: %d, IpId: 0x%04x, isIcmp|isUdp|isTCp|isIpsec: %d|%d|%d|%d, IpHdrChecksum: 0x%04x
Line 544: [OEM][PKTT] [IPV4] IpSrcAddr: %d.%d.%d.%d, IpDstAddr: %d.%d.%d.%d
Line 549: [OEM][PKTTa_WARN] [PARSE] Ignoring IPv4 fragments..., Flags_FragOfs: 0x%x
Line 580: [OEM][PKTT] [IPV4][ICMPV4-Ping] IcmpChecksum: 0x%04x, IcmpIdBE: %d, IcmpSnBE: %d, IcmpTimestamp: 0x%08x %08x
Line 605: [OEM][PKTT] [IPV4][ICMPV4-Ping][PKTINFO] pktid: 0x%x, stackid: %d, ptype: %d, pktinfo_idx: %d, head:%d, tail:%d
Line 608: [OEM][PKTTa] [Stage:0_][Tag:%08X] PKT is tracked. IPV4-ICMPV4-Ping(IpId|IcmpSnBE), IpTotalLen: %d, pktid: 0x%x, pkthndTime: %u
Line 619: [OEM][PKTT] [IPV4][ICMPV4-Ping][PKTINFO] pktid: 0x%x, stackid: %d, ptype: %d, pktinfo_idx: %d, head:%d, tail:%d
Line 622: [OEM][PKTTa] [Stage:0X][Tag:%08X][WARN] PKT cannot be tracked. IPV4-ICMPV4-Ping(IpId|IcmpSnBE), IpTotalLen: %d, pkthndTime: %u
Line 661: [OEM][PKTT] [IPV4][UDP] UdpSrcPort: %u, UdpDstPort: %u, UdpLen: %u, UdpChecksum: 0x%04x
Line 669: [OEM][PKTT] [IPV4][DNS-Query] DnsTransId: 0x%04x, DnsFlags: 0x%04x, DnsQueryName1-8: %c%c%c%c%c%c%c%c
Line 693: [OEM][PKTT] [IPV4][DNS-Query][PKTINFO] pktid: 0x%x, stackid: %d, ptype: %d, pktinfo_idx: %d, head:%d, tail:%d
Line 696: [OEM][PKTTa] [Stage:0_][Tag:%08X] PKT is tracked. IPV4-DNS-Query(IpId|DnsQueryName56), IpTotalLen: %d, pktid: 0x%x, pkthndTime: %u
Line 707: [OEM][PKTT] [IPV4][DNS-Query][PKTINFO] pktid: 0x%x, stackid: %d, ptype: %d, pktinfo_idx: %d, head:%d, tail:%d
Line 710: [OEM][PKTTa] [Stage:0X][Tag:%08X][WARN] PKT cannot be tracked. IPV4-DNS-Query(IpId|DnsQueryName56), IpTotalLen: %d, pkthndTime: %u
Line 787: [OEM][PKTT] [IPV4][DSTIPV4][PKTINFO] pktid: 0x%x, stackid: %d, ptype: %d, pktinfo_idx: %d, head:%d, tail:%d
Line 794: [OEM][PKTTa] [Stage:0_][Tag:%08X] PKT is tracked. IPV4-DSTIPV4(IpId|IpHdrChecksum), IpDstAddr1: %u, protocol_assigned: %u(%u), udp|tcp: %u|%u, dstport_assigned: %u(%u), IpTotalLen: %d, pkthndTime: %u
Line 805: [OEM][PKTT] [IPV4][DSTIPV4][PKTINFO] pktid: 0x%x, stackid: %d, ptype: %d, pktinfo_idx: %d, head:%d, tail:%d
Line 812: [OEM][PKTTa] [Stage:0X][Tag:%08X][WARN] PKT cannot be tracked. IPV4-DSTIPV4(IpId|IpHdrChecksum), IpDstAddr1: %u, protocol_assigned: %u(%u), udp|tcp: %u|%u, dstport_assigned: %u(%u), IpTotalLen: %d, pkthndTime: %u
Line 848: [OEM][PKTT] [IPV6] IpflowLabel20: 0x%06x, IpPayloadLen: %d, isIcmpv6|isUdp|isTcp: %d|%d|%d
Line 851: [OEM][PKTT] [IPV6] IpSrcAddr: %04x.%04x.%04x.%04x.%04x.%04x.%04x.%04x
Line 854: [OEM][PKTT] [IPV6] IpDstAddr: %04x.%04x.%04x.%04x.%04x.%04x.%04x.%04x
Line 886: [OEM][PKTT] [IPV6][ICMPV6-Ping] IcmpChecksum: 0x%04x, IcmpId: 0x%04x, IcmpSn: %d
Line 910: [OEM][PKTT] [IPV6][ICMPV6-Ping][PKTINFO] pktid: 0x%x, stackid: %d, ptype: %d, pktinfo_idx: %d, head:%d, tail:%d
Line 913: [OEM][PKTTa] [Stage:0_][Tag:%08X] PKT is tracked. IPV6-ICMPV6-Ping(IcmpChecksum|IcmpSn), Ipv6HdrLen: 40, IpPayloadLen: %d, pktid: 0x%x, pkthndTime: %u
Line 924: [OEM][PKTT] [IPV6][ICMPV6-Ping][PKTINFO] pktid: 0x%x, stackid: %d, ptype: %d, pktinfo_idx: %d, head:%d, tail:%d
Line 927: [OEM][PKTTa] [Stage:0X][Tag:%08X][WARN] PKT cannot be tracked. IPV6-ICMPV6-Ping(IcmpChecksum|IcmpSn), Ipv6HdrLen: 40, IpPayloadLen: %d, pkthndTime: %u
Line 969: [OEM][PKTT] [IPV6][UDP] UdpSrcPort: %u, UdpDstPort: %u, UdpLen: %u, UdpChecksum: 0x%04x
Line 977: [OEM][PKTT] [IPV6][DNS-Query] DnsTransId: 0x%04x, DnsFlags: 0x%04x, DnsQueryName1-8: %c%c%c%c%c%c%c%c
Line 1001: [OEM][PKTT] [IPV6][DNS-Query][PKTINFO] pktid: 0x%x, stackid: %d, ptype: %d, pktinfo_idx: %d, head:%d, tail:%d
Line 1004: [OEM][PKTTa] [Stage:0_][Tag:%08X] PKT is tracked. IPV6-DNS-Query(IpflowLabel16|DnsQueryName56), Ipv6HdrLen: 40, IpPayloadLen: %d, pktid: 0x%x, pkthndTime: %u
Line 1015: [OEM][PKTT] [IPV6][DNS-Query][PKTINFO] pktid: 0x%x, stackid: %d, ptype: %d, pktinfo_idx: %d, head:%d, tail:%d
Line 1018: [OEM][PKTTa] [Stage:0X][Tag:%08X][WARN] PKT cannot be tracked. IPV6-DNS-Query(IpflowLabel16|DnsQueryName56), Ipv6HdrLen: 40, IpPayloadLen: %d, pkthndTime: %u
Line 1099: [OEM][PKTT] [IPV6][DSTIPV6][PKTINFO] pktid: 0x%x, stackid: %d, ptype: %d, pktinfo_idx: %d, head:%d, tail:%d
Line 1106: [OEM][PKTTa] [Stage:0_][Tag:%08X] PKT is tracked. IPV6-DSTIPV6(IpflowLabel16|IpPayloadLen), IpDstAddr1: %x, protocol_assigned: %u(%u), udp|tcp: %u|%u, dstport_assigned: %u(%u), Ipv6HdrLen: 40, IpPayloadLen: %d, pkthndTime: %u
Line 1117: [OEM][PKTT] [IPV6][DSTIPV6][PKTINFO] pktid: 0x%x, stackid: %d, ptype: %d, pktinfo_idx: %d, head:%d, tail:%d
Line 1124: [OEM][PKTTa] [Stage:0X][Tag:%08X][WARN] PKT cannot be tracked. IPV6-DSTIPV6(IpflowLabel16|IpPayloadLen), IpDstAddr1: %u, protocol_assigned: %u(%u), udp|tcp: %u|%u, dstport_assigned: %u(%u), Ipv6HdrLen: 40, IpPayloadLen: %d, pkthndTime: %u
Line 1134: [OEM][PKTTa_WARN] [PARSE] Invalid IP version or dataLen < IP_HDR_LEN_MIN, IpVer: %d, dataLen: %d, pData[0]: 0x%02x
Line 1163: [OEM][PKTTa_WARN] %s: Invalid pktid: 0x%x
Line 1173: [OEM][PKTTa_WARN] %s: Invalid pktid: 0x%x with wrong ptype: %d
Line 1207: [OEM][PKTTa_WARN] [PKTINFO-FREE] Invalid pktid: 0x%x
Line 1217: [OEM][PKTTa_WARN] [PKTINFO-FREE] Invalid pktid: 0x%x with wrong ptype: %d
Line 1236: [OEM][PKTTa_WARN] [PKTINFO-FREE][pType:%u] trackN < 1! stackid: %u, trackN: %u/%u, Head: %u, Tail: %u, alocN: %u, freeN: %u
Line 1279: [OEM][PKTT] [PKTINFO-FREE][pType:%u] Free idx: %u, stackid: %u, trackN: %u/%u, Head->: %u, Tail: %u, alocN: %u, freeN: %u
Line 1281: [OEM][PKTTa] [Stage:END][Tag:%08X] pktinfo free, stackid: %d, ptype: %u, free_pktinfo_idx: %d, Head: %d, Tail: %d, pktid: 0x%x
