Line 142: [N :SM,%d]     (fn) %s
Line 143: [D :SM,%d]       %s = %d(0x%X) in %s
Line 158: [N :SM,%d]     PduSessionType == NR_TYPE_IPv4v6
Line 162: [N :SM,%d]     PduSessionType == NR_TYPE_UNSTRUCTURED
Line 166: [N :SM,%d]     PduSessionType == NR_TYPE_ETHERNET
Line 170: [W :SM,%d]  %%@EM PduSessionType is invalid(%d)
Line 195: [N :SM,%d]     (fn) %s
Line 202: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 204: [N :SM,%d]     PduSessionType == NR_TYPE_IPv4
Line 244: [D :SM,%d]       IPV4 Hlen = %04x
Line 264: [D :SM,%d]       Processing IPV4 for protocol = %x
Line 268: [D :SM,%d]       fragmentInfo = %04x | packetId = %04x
Line 298: [D :SM,%d]       SecurityParamIdx = %08x 
Line 304: [N :SM,%d]     ProtocolId(%d)
Line 309: [D :SM,%d]       pPacketFilter->SingleRemotePort(%l), pPacketFilter->SingleLocalPort(%l)
Line 338: [N :SM,%d]     (fn) %s
Line 346: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 353: [D :SM,%d]       TosTrafficClass pData0(0x%X) pData1(0x%X) TOS(0x%X)
Line 367: [N :SM,%d]     PduSessionType == NR_TYPE_IPv6
Line 371: [N :SM,%d]     ProtocolId(%d)
Line 421: [D :SM,%d]       EXT_FRAGMENT > fragmentInfo = %04x | packetId = %04x
Line 428: [D :SM,%d]       Processing IPV6 for protocol = %x
Line 429: [D :SM,%d]       fragmentInfo = %04x | packetId = %04x
Line 462: [D :SM,%d]       SecurityParamIdx = %08x 
Line 505: [D :SM,%d]       pPacketFilter->SingleRemotePort(%04x), pPacketFilter->SingleLocalPort(%04x)
Line 534: [N :SM,%d]     (fn) %s
Line 537: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 541: [D :SM,%d]       fragmentInfo = %04x | packetId = %04x
Line 574: [D :SM,%d]       Processing the first fragment with packetId = %04x
Line 590: [D :SM,%d]       SingleLocalPort = %04x | SingleRemotePort = %04x
Line 596: [D :SM,%d]       SecurityParamIdx = %08x 
Line 607: [D :SM,%d]       Processing the non-first fragment with packetId = %04x
Line 623: [D :SM,%d]       Stored Entry Found srcport = %04x | dstport = %04x
Line 628: [D :SM,%d]       Stored Entry Found SecurityParamIdx %08x
Line 639: [D :SM,%d]       Discard fragment. Lifetime is over!! Time Diff in MS (%d)
Line 646: [D :SM,%d]       storedItemItr is null for packetId = %04x | SessionId = %04x
Line 652: [D :SM,%d]       Fragment Packet Not processed ! Invalid Case where fragment info value = %08x
Line 659: [N :SM,%d]     (fn) %s
Line 660: [W :SM,%d]  %%@EM return (void) %s = nullptr in %s
Line 665: [W :SM,%d]  %%@EM return (void) %s = nullptr in %s
Line 677: [W :SM,%d]  %%@EM Session type mis-match! tType(%d) PduSessionType(%d)
Line 691: [D :SM,%d]       QFI with match-all packet filter QFI(%d) QRI(%d) 
Line 699: [W :SM,%d]  %%@EM Error %s alloc failed in %s
Line 699: [W :SM,%d]  %%@EM (_new_) %s=0x%X in %s
Line 710: [D :SM,%d]       If Ul Packet is RA data, need to set default QFI(%d)
Line 711: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 724: [D :SM,%d]       Find QFI(%d)
Line 729: [D :SM,%d]       did not find QFI at the given UL packet data
Line 735: [D :SM,%d]       UL packet data not processed!
Line 738: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 745: [N :SM,%d]     (fn) FindQfiFromPacketFilterOnSid : PduSessionType(%d)
Line 748: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 767: [D :SM,%d]       Find QFI(%d) QRI(%d) type(%d)
Line 774: [D :SM,%d]       Can't find yet QFI, so store QFI with match-all packet filter QFI(%d) QRI(%d) 
Line 779: [D :SM,%d]       Can't find QFI...
Line 786: [N :SM,%d]     (fn) CheckPacketFilter QFI[%d]
