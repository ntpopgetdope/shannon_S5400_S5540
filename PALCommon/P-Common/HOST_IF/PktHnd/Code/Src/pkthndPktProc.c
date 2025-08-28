Line 138: [UL PKTPROC] pkthndSetTcpAckDiscardMode : %d -> %d
Line 187: [UL PKTPROC] pkthndIsTcpAck : Non-TcpAck (pData: 0x%08X, Protorocol %d, Ver %d, IpHeaderLen %d, TcpHeaderLen %d, PayloadLen %d, TcpFlag 0x%X)
Line 254: [UL PKTPROC] pkthndAllocTcpAckDb : tcpAckInfoDbIdx > %d
Line 362: [UL PKTPROC] pkthndOptimizeTcpAckProcess : Q[0][%d][%d] Keep non-TCP ACK (pDesc: 0x%08X, pData: 0x%08X/0x%08X)
Line 373: [UL PKTPROC] pkthndOptimizeTcpAckProcess : Q[0][%d][%d] Keep non-TCP ACK (pDesc: 0x%08X, pData: 0x%08X/0x%08X)
Line 382: [UL PKTPROC] pkthndOptimizeTcpAckProcess : Q[0][%d]: Drv %d, Rd %d (A: %d, D: %d, First Pkt Info C: 0x%04X, AckNum: %lld)
Line 401: [UL PKTPROC] pkthndOptimizeTcpAckQueue : HighQBuf 0x%08X, HighQLastBuf 0x%08X
Line 467: [UL PKTPROC] TCPACK : Process %d, Discard %d (Discard Ratio: %d, TP: %d/%d Kbps)
Line 520: [UL PKTPROC] Wrong Error Type = %d
Line 550: [UL PKTPROC] [RECOVERY] Discard(%d) pData:0x%08X (state:0x%X, LastLR:0x%08X, sid:%d) MaxIdx:0x%x, DcrdCnt:0x%x
Line 557: [UL PKTPROC] [RECOVERY] DiscardBufSet(StackId:0x%x) result: BufSet(0x%x), MaxIdx(0x%x), loop(0x%x), DscrdCnt(0x%x)
Line 610: [UL PKTPROC][RECOVERY] ST%d # %d packets discarded from PKTPROC Queue(%d)
Line 663: [PKTHND] [RECOVERY] UL Pktproc Buffer Check (cnt:%d)
Line 691: [PKTHND] [RECOVERY] HOSTIF_EVT_BUF_RELEASE_ST1 received
Line 764: [UL PKTPROC] Low Queue Data Pending
Line 795: [UL PKTPROC] PKTPROC Data Received from AP (Q[%d][%d]: In %d, PkthndRd %d)
Line 865: [OEM][LAM_EVENT] [DBG][UDA] PKT in PKTHND. QIDX: %d, QID: %d, DESCID: %d, CHID: %d, bTCP(%u)
Line 879: [OEM][PKTTa] [UDA] PKT arrival. Analyzing packets...
Line 887: [OEM][PKTTa] [Stage:1_][Tag:%08X][dT:0] PKT in PKTHND. QIDX: %d, QID: %d, DESCID: %d, CHID: %d
Line 894: [OEM][PKTTa] [Event] Set oem to CellHeaderForUlPktproc. oem_rsv.pktid: 0x%x, oem_rsv.oem32: 0x%x, oem: 0x%x
Line 905: [UL PKTPROC] [PCIE OPT] ICMP Req Detected...
Line 983: [UL PKTPROC] PKTPROC Data Pending (addr:0x%08X)
Line 1099: [UL PKTPROC] [Q %d][%d] DRV in:%d, PKTHND in:%d (Alloc:#%d = In Use:#%d + Free:#%d)
Line 1107: [UL PKTPROC] in:%d (cData:0x%08X, len:%d, sid:%d, alloc:0x%02X, rb_id:%d, me:0x%08X)
Line 1151: [UL PKTPROC] [Q %d] AllocBufQueue
Line 1171: [UL PKTPROC] [Q %d] FreeBufQueue 
Line 1176: [UL PKTPROC] PHTHND Pending:#%d(H:%d+L:%d), In Use:#%d(H:%d+L:%d)
Line 1221: [OEM][PKTTa_WARN] [PCIE OPT][PARSE] Invalid packet, pData == 0 or dataLen == 0
Line 1244: [UL PKTPROC] [PCIE OPT][PARSE] Ignoring IPv4 fragments..., Flags_FragOfs: 0x%x
Line 1252: [UL PKTPROC] [PCIE OPT][IPV4][ICMPV4-Ping] ICMP Echo Detected
Line 1274: [UL PKTPROC] [PCIE OPT][IPV6][ICMPV6-Ping] IcmpChecksum: 0x%04x, IcmpId: 0x%04x, IcmpSn: %d
