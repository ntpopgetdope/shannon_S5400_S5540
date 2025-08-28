Line 65: %s(): Error - Incoming argument invalid
Line 80: %s():spi:0x%x sqnl:%d
Line 84: %s(): Error - No SA corresponding to SPI 0x%x !!
Line 94: %s(): ERROR - Handling incoming packet failure !!
Line 97: IPsec SPI match but ports match failure
Line 99: %s(): Handling incoming packet success !!
Line 102: %s(): Next Header:%d
Line 114: SmdtIpsec::%s(): Entry 
Line 115: %s(): SPD SZ:%d
Line 119: %s(): IN SAD SZ:%d
Line 123: %s(): OUT SAD SZ:%d
Line 138: %s(): #IPSEC# Entry - pkt:%p
Line 143: %s(): #IPSEC# pSock is NULL !!
Line 148: %s(): #IPSEC# pSock:%p, ipsecflag:%d 
Line 155: %s(): #IPSEC# IPSec flag not set on socket 
Line 158: %s(): #IPSEC# IPSecId:%d socket:%d 
Line 162: %s(): #IPSEC# IPSec DN
Line 170: %s(): #IPSEC# IPSec flag is already set on socket 
Line 173: %s(): #IPSEC# Exit - ret:%d
Line 188: %s(): #IPSEC# Entry - pkt:%p ipsecId:%d
Line 199: %s(): #IPSEC# IPSec SPD DN ipsecId:%d
Line 208: %s(): Sad found from map spi:0x%x
Line 212: %s(): Find and add sad to socket map
Line 223: %s():SPI:0x%x sadSrcPrt:%d sadDstPrt:%d pktSrcPrt:%d pktDstPrt:%d
Line 226: %s(): Found matching SAD entry !
Line 237: %s(): #IPSEC# IPSec SAD DN ipsecId:%d
Line 244: %s(): #IPSEC# Exit -ret:%d
Line 277: %s(): Error - No SPD with id:%d
Line 296: %s(): Error - No SPD with id:%d
Line 331: %s(): Acquire DB Lock
Line 342: %s(): Release DB Lock
Line 355: %s(): Entry pSad:%p pHdr:%p
Line 357: %s(): spdId:0x%x spiId:0x%x
Line 366: %s(): PktHdr invalid ip type:%d
Line 369: %s(): Exit - ret:%d
Line 389: %s(): Only one in dir sad entry for spi:0x%x
Line 410: %s(): Only one out dir sad entry for spi:0x%x
Line 471: %s(): #IPSEC# spdid:%d
Line 475: %s(): #IPSEC# - Exit - ret:%d
Line 553: %s(): Entry - extSpd:%p policyDir:%d
Line 555: %s(): Error Invalid arguments !
Line 570: %s(): ERROR Allocating spdid failure !!
Line 595: %s(): Source Low ip address is 0 - set same as high range
Line 617: %s(): Dest Low ip address is 0 - set same as high range
Line 628: %s(): Src port in spd is 0 - skip adding
Line 639: %s(): Dest port in spd is 0 - skip adding
Line 648: %s(): spdId:%d
Line 665: %s(): Entry - sad:%p, spdId:%d, dir:%d
Line 669: %s(): Error - Invalid argument!!
Line 727: %s(): Exit - ret:%d
Line 747: %s(): Exit - ret:%d
Line 766: %s(): Exit - ret:%d
Line 777: %s(): #IPSEC# Entry - pSad:%p
Line 780: :: #IPSEC# uSpi:0x%x nPolicy:%d nSecMode:%d nNatTReqd:%d
Line 782: :: #IPSEC# isIpv6:%d  uDIp:0x%x uSIp:0x%x uDPort:%d
Line 784: :: #IPSEC# uSPort:%d uProto:%d nSecProtoToUse:%d nAuthAlgoToUse:%d
Line 786: :: #IPSEC# uAuthKeyLen:%d nEncrAlgoToUse:%d uEncrKeyLen:%d uSaltLen:%d
Line 787: :: #IPSEC# lLifetime:%d 
Line 789: #IPSEC# DIPv6: 
Line 790: #IPSEC# SIPv6: 
Line 793: #IPSEC# aAuthKey: 
Line 794: #IPSEC# aEncrKey: 
Line 795: #IPSEC# aSalt: 
Line 807: %s(): #IPSEC# Entry - pSpd:%p
Line 809: %s(): #IPSEC# u1SAD_Index:%d
Line 812: %s(): %s: isipv6:%d u1Addr_type:%d u1Policy_Packet:%d pad:%d
Line 812: Range_lowIPv6: 
Line 812: Range_highIPv6: 
Line 812: %s(): %s: Range_lowIPv4:0x%x
Line 812: %s(): %s: Range_highIPv4:0x%x
Line 814: %s(): %s: isipv6:%d u1Addr_type:%d u1Policy_Packet:%d pad:%d
Line 814: Range_lowIPv6: 
Line 814: Range_highIPv6: 
Line 814: %s(): %s: Range_lowIPv4:0x%x
Line 814: %s(): %s: Range_highIPv4:0x%x
Line 816: %s(): #IPSEC# u1Transport_Protocol:%d u1Protocol_Policy_Packet%d
Line 818: %s(): #IPSEC# SrcPort.u2Port:%d SrcPort.u1Policy_Packet:%d
Line 820: %s(): #IPSEC# DestPort.u2Port:%d DestPort.u1Policy_Packet:%d
Line 823: %s(): #IPSEC# SPD_Policy: isipv6:%d u1IPSecPolicy:%d u1Mode:%d u1Protocol:%d
Line 825: %s(): #IPSEC# u1Seq_Number_flag:%d u1Replay_check_reqd:%d u1Manual_Keying:%d u1SN_Overflow_Enabled%d
Line 827: %s(): #IPSEC# u1SN_Overflow_Enabled:%d u1SPD_Bundle_Index:%d
Line 828: %s(): #IPSEC# SPD_Policy: spd_gw4:%d
Line 829: #IPSEC# spd_gw6: 
Line 890: %s() Entry spdId:%d
Line 898: %s(): Reset ipsec flag for sockId:%d
Line 901: %s(): No sock with sockId:%d
Line 914: %s(): Got IN SAD Entry with SPI:0x%x
Line 931: %s(): Got OUT SAD Entry with SPI:0x%x
Line 955: %s(): sad:%p dir:%d
Line 957: %s() Invalid parameters!
Line 962: %s(): ABSPI IN SAD SZ:%d
Line 965: %s(): ABSPI OUT SAD SZ:%d
Line 968: %s(): Check Dir: %d !
Line 971: %s(): Exit ret:%d
Line 982: %s(): Entry - spd:%p
Line 984: %s(): SPD SZ:%d
Line 999: %s(): Error - planText is null or sa is null
Line 1023: %s(): Removed entry from sockIdSadMap for sock_id :%d
