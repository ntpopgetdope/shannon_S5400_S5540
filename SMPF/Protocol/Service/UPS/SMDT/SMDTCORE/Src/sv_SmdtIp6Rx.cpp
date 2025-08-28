Line 74: Received invalid parameters..return

Line 85: Failed to get SmdtIp6Rx instance..return

Line 91: [HandleRxIp6Packet]  pPktHdr : 0x%x
Line 134: Version TrafficClass Flow : 0x%x
Line 135: Payload Len : %d
Line 136: Next Hdr : %d
Line 137: Hop Limit : %d
Line 138: SRC IP
Line 139: DST IP
Line 154: ValidateIp6Hdr() : Received NULL parameter
Line 159: ValidateIp6Hdr() : Received Wrong IP Version (%d)
Line 164: ValidateIp6Hdr() : Received Invalid Payload Length (%d)
Line 168: ValidateIp6Hdr() buf_len : %d, ip6->ip6_plen : %d
Line 170: ValidateIp6Hdr() : Received packet shorter than expected. Dropping packet
Line 175: ValidateIp6Hdr() : Bad scope
Line 181: ValidateIp6Hdr() : Bad scope; silently drop the packet
Line 188: ValidateIp6Hdr() : Received IPv4 Compatible Address..Drop Packet
Line 244: Entry() - initNxtHdrHandlers
Line 270: Entry : ProcessRxIp6Pkt() pPktHdr : %p, pBuff : %p, rBufLen : %d
Line 273: ProcessRxIp6Pkt() : Received Invalid Input..return
Line 283: ProcessRxIp6Pkt() : Received buffer size is less than IP6 Hdr Size..return
Line 307: ProcessRxIp6Pkt() : Ip6 Header validation failed..return
Line 316: ProcessRxIp6Pkt() : Received buffer size is more than IPv6 Header + Payload Size
Line 317: ProcessRxIp6Pkt() : Received rBufLen : %d, IP6 Hdr Size : %d, payloadLen : %d
Line 319: ProcessRxIp6Pkt() : Updated rBufLen : %d
Line 335: ProcessIncIp6Pkt() : Buffer allocation failure..Drop Packet
Line 353: ProcessIncIp6Pkt() : Protofactory instance failure..Drop Packet
Line 367: ProcessIncIp6Pkt() : Proto instance failure..Drop Packet
Line 405: Entry : ProcessFragHdr()
Line 408: Received Invalid Data
Line 418: [ProcessRxFragHdr] Packet header already has data buffer
Line 426: [ProcessRxFragHdr] fragLen : %d, offset : %d, dataLen : %d
Line 465: Failed to get ip6_rx_table
Line 506: [SmdtIp6Rx::ProcessRxFragHdr] pkt_hdr : 0x%x, pkt_hdr->fragTtl : %d
Line 512: Failed to insert fragment in fragment list..return
Line 522: ProcessFragHdr() : fragStatus : %d
Line 532: Wait for remaining fragments
Line 551: Unhandled Header - HOP-BY-HOP OPTIONS HDR : Skip to nxt hdr
Line 556: Received offset is greater than buffer total length..return
Line 566: [ProcessHopOptHdr] nxtHdr : %d, hdrLen : %d
Line 570: offset + curr hdr len is greater than buffer total length..return
Line 590: Unhandled Header - ROUTING HDR : Skip to nxt hdr
Line 595: Received offset is greater than buffer total length..return
Line 605: [ProcessRoutingHdr] nxtHdr : %d, hdrLen : %d
Line 609: offset + curr hdr len is greater than buffer total length..return
Line 629: Unhandled Header - DESTINATION OPTION HDR : Skip to nxt hdr
Line 634: Received offset is greater than buffer total length..return
Line 644: [ProcessDstOptHdr] nxtHdr : %d, hdrLen : %d
Line 648: offset + curr hdr len is greater than buffer total length..return
Line 668: Entry() - ProcessAuthHdr
Line 683: Entry() - ProcessEspHdr
Line 696: ProcessRxEspHdr() : Buffer allocation failure..Drop Packet
Line 734: Fragments in List for FragId : %0x
Line 737: No Fragments in List.
Line 742: Fragment(%d) - Offset Start : %d, Offest End : %d
Line 762: Received New Fragment - Offset Start : %d, moreFrag Flag : %d
Line 765: Received Atomic Fragment

Line 787: Next Hdr is IPv6 Ext Header(%d)
Line 793: ==== All IPv6 Extension Hdrs processed ====
Line 800: Next Hdr is Protocol Header(%d)
Line 805: Unsupported Next Header(%d)
Line 858: ~SmdtIp6Rx
Line 870: Delete m_pIp6Rx
