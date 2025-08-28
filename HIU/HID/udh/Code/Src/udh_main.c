Line 178: [UDH] IPv6HeaderExt : Next header is Zero (%d)
Line 295: [UDH] UdhCheckDataBlock : Packet discard by invalid stack %d (SID=%d)
Line 301: [UDH] UdhCheckDataBlock : Packet discard by uiSID zero
Line 306: [UDH] UdhCheckDataBlock : Hidden act packet (SID=%d)
Line 312: [UDH] UdhCheckDataBlock : Loopback Packet (SID=%d)
Line 322: [UDH] Do not block UL data received from CP!!
Line 331: [UDH] UdhCheckDataBlock (SID=%d): IPv4 UL data blocked, but Ping Transfer (protocol=%d)
Line 335: [UDH] UdhCheckDataBlock (SID=%d): IPv4 UL data blocked, Packet Discard (protocol=%d)
Line 345: [UDH] Do not block DNS data received from CP!!
Line 352: [UDH] UdhCheckDataBlock : IPv4 UL DNS block prot (%d) port (%d)
Line 375: [UDH] Do not block UL data received from CP!!
Line 383: [UDH] UdhCheckDataBlock (SID=%d): IPv6 UL data blocked, but Ping Transfer (protocol=%d)
Line 387: [UDH] UdhCheckDataBlock (SID=%d): IPv6 UL data blocked, Packet Discard (protocol=%d)
Line 397: [UDH] Do not block DNS data received from CP!!
Line 404: [UDH] UdhCheckDataBlock : IPv6 UL DNS block prot (%d) port (%d)
Line 449: [UDH] UdhCheckTlpDataBlock() : Loopback Packet! TlpGet_CurState(%d) TLP_GET_LB_MODE(%d)
Line 455: [UDH] UdhCheckTlpDataBlock() : Packet discard due to TLP_GET_LB_MODE(%d) in LTE_TLP_ACTIVE
Line 464: [UDH] UdhCheckTlpDataBlock() : Packet discard due to TLP_GET_LB_MODE(%d) in LTE_TLP_ACTIVE [CPW]
Line 468: [UDH] UdhCheckDataBlock() : TLP_GET_LB_MODE(%d) in LTE_TLP_ACTIVE
Line 477: [UDH] UdhCheckTlpDataBlock() : Loopback Packet! TlpGet_CurState(%d) TLP_GET_LB_MODE(%d) TlpGet_NrSaMode(%d)
Line 483: [UDH] UdhCheckTlpDataBlock() : RS/RA(0x%X) Packet in LTE_TLP_INITIALIZED
Line 487: [UDH] UdhCheckTlpDataBlock() : Packet discard due to TLP_GET_LB_MODE(%d) in LTE_TLP_INITIALIZED
Line 504: [UDH] Invalid ucPacketStack=%d
Line 524: [UDH] Invalid ucPacketStack=%d
Line 559: [UDH] UdhSendUlDataToEDGE : Nsapi %01x, Size %d, IP-ID = %02X %02X, Buffer %08X, Free Buffer %d, SID %d
Line 665: [UDH] UdhSendUlDataToHSPA : Nsapi %01x, Size %d, IP-ID = %02X %02X, Buffer %08X, Free Buffer %d, SID %d
Line 719: [UDH] UdhSendUlDataToHSPA : NO VALID NSAPI !!
Line 734: [UDH] UdhSendUlDataToHSPA :Nasu buffer is empty and RABM is suspended
Line 738: [UDH] NO pending data (%d)
Line 777: [UDH] Invalid ucPacketStack
Line 788: [UDH] NS_RAT_GSM : snp_CheckBurstPktLimit() Error %d
Line 835: [UDH] NS_RAT_GSM : PacketStack(%d) Zero NSAPI
Line 866: [UDH] It is not IPv6 packets , RAT_UMTS (ucVersion : %x)
Line 871: [UDH] Invalid ucPacketStack
Line 878: [UDH] NS_RAT_UMTS : RabmAsNonUmtsRatMode (%d) received
Line 919: [UDH] NS_RAT_UMTS : ucPacketStack(%d) Zero NSAPI
Line 981: [OEM][PKTTa] [Stage:2_][Tag:%08X][dT:%u] PKT in UDH-SAEQM, Enqueue: NSA Q, Sent to: L2L3IF(LTE|NSA). priority: %u, last: %u, pktid: 0x%x, saeqmTime: %u
Line 1005: [OEM][PKTTa] [Stage:2A][Tag:%08X][dT:%u] PKT in UDH-SAEQM, Enqueue: LTE Q, Sent to: LTE-commonPDCP. priority: %u, last: %u, pktid: 0x%x, oem_rsv: 0x%x, saeqmTime: %u
Line 1163: [UDH] UdhIPv6UlSendforRSRA : IPv6 RS Packet Discard
Line 1169: [UDH] UdhIPv6UlSendforRSRA : Packet discard by TLP mode (Stack: %d, Sid: %d)
Line 1177: [UDH] Invalid ucPacketStack=%d
Line 1211: [UDH] Unknown RAT, packet discard
Line 1216: [UDH] Unknown RAT %d, pkt discard
Line 1223: [UDH] UdhIPv6UlSendforRSRA : Routing Fail(Rat: %d, Sid: %d, Result: %d)
Line 1241: [UDH] Invalid stack %d (SID=%d, Result: %d)
Line 1254: [UDH] Packet Discard %d
Line 1258: [UDH] Packet Discard Flow Control (packet count=%d), Flow control triggered
Line 1282: [UDH] Routing Fail(Sid: %d, Result: %d/%d)
Line 1288: [UDH] Routing Fail(Sid: %d, Result: %d/%d)
Line 1322: [UDH] Unknown IP Version, Packet Discard (%d,%d,%d)
Line 1361: [UDH] UdhMtiHighDataUlSend() : Retry Packet routing requested from TCPIP (0x%X)
Line 1369: [UDH] Unknown IP Version, Packet Discard (%d,%d,%d)
Line 1433: [UDH] Unknown IP Version, Packet Discard (%d,%d,%d)
Line 1500: [UDH] UdhMtiDataUlSendTestMode() : Retry Packet routing requested from TCPIP (0x%X)
Line 1509: [UDH] Unknown IP Version, Packet Discard (%d,%d,%d)
Line 1534: [UDH] UdhVtDataUlSend : Channel ID %d, RabID %d, Size %d
Line 1538: [UDH] Null Pointer, VT data discard Data : 0x%X, CID : %d
Line 1546: [UDH] nasu_SetDataSize failed, VT data discard!
Line 1552: [UDH] nasu_DataPtr failed!, VT data discard!
Line 1579: [UDH] UdhHandlePendingUlData : ST%d Pending (NS_RAT_CHANGE_PROGRESS)
Line 1624: [UDH] UdhSetPsRatDataFunc : ST%d PS RAT %s -> %s
Line 624: [UDH] UdhMessageSendToRABM : NO MEMORY !!
Line 640: [UDH] UdhMessageSendToRABM : Message sent failed!!
Line 1092: [UDH] UdhIpDataUlSend : Packet discard by invalid stack (Stack: %d, Sid: %d)
Line 1098: [UDH] UdhIpDataUlSend : Packet discard by uiSID zero
Line 1103: [UDH] UdhIpDataUlSend : Packet discard by TLP mode (Stack: %d, Sid: %d)
Line 1116: [UDH] UdhIpDataUlSend : IMS packet sending during Network Scan (ST1 %d, ST2 %d) (Sid: %d, QoS: %d)
Line 1120: [UDH] UdhIpDataUlSend : non-IMS packet sending during Network Scan for waiting packet in High Q(ST1 %d, ST2 %d) (Sid: %d, QoS: %d)
Line 1124: [UDH] UdhIpDataUlSend : Pending during Network Scan (ST1 %d, ST2 %d) (Sid: %d, QoS: %d)
Line 1132: [UDH] IPV4 IPID[0x%x], ipid[0x%x]
