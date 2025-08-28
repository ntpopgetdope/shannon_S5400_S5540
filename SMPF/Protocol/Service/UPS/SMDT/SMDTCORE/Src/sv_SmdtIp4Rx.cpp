Line 62: DisplayIpv4AddrType() : Broadcast address
Line 64: DisplayIpv4AddrType() : Any address
Line 66: DisplayIpv4AddrType() : Global address
Line 90: Received invalid parameters..return

Line 99: Failed to get SmdtIp4Rx instance..return

Line 217: Delete m_pSmdtIp4RxTable
Line 253: remove_ip_pkt() res : %d

Line 284: No entry in table with this ip id

Line 338: ValidateIp4Hdr() : Received NULL pIpHdr..return
Line 352: ValidateIp4Hdr() : Bad checksum, dropping
Line 363: ValidateIp4Hdr() : Loopback address, discarding
Line 369: ValidateIp4Hdr() : Cannot forward datagrams on Linklocal address
Line 379: ValidateIp4Hdr() : Multicast address not supported
Line 403: ValidateRecvdBuff() : Received Invalid Input..return
Line 416: ValidateRecvdBuff() : Received Wrong IP Version (%x)
Line 422: ValidateRecvdBuff() : Received buffer size is less than minimum IP HDr Size..return
Line 428: ValidateRecvdBuff() : Received buffer size is less than IP HDr Size..return
Line 434: ValidateRecvdBuff() : Received buffer size is less than total expected length
Line 438: ValidateRecvdBuff() : Received buffer size is more than total packet size
Line 439: ValidateRecvdBuff() : Received buf_len : %d, total len : %d
Line 441: ValidateRecvdBuff() : Updated rBufLen : %d
Line 466: ProcessIp4Rx() : Buffer Validation failed
Line 475: ProcessIp4Rx() : IP Header Validation failed
Line 498: packet is fragement packet 
Line 500: waiting for more fragments.. 
Line 513: data buff allocation failure, not processing. 
Line 552: [SMDT] failed to get proto interface

Line 558:  domain not supported
Line 589: Failed to get Ip4RxTable
Line 622: [SmdtIp4Rx::ProcessFragments] pkt_hdr : 0x%x, pkt_hdr->fragTtl : %d
Line 649: Delete m_pSmdtIp4Rx
Line 690: In Received Fragment - Length more than max allowed length : %d
Line 718: [IPv4] First Fragment & Waiting for More fragments 

Line 725: Received Duplicate Fragment
Line 747: [IPv4] Waiting for More fragments
Line 785: [ProcessIp4SlowTmrExpry] Reassembly Timer expired for Ip4 Fragment packet with fragId : 0x%x
