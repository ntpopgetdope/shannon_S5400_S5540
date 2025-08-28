Line 85: LLC DataCnf, Nsapi=%d, Ref=%d
Line 120: Snp Data pkt recieved, Sapi %d,  Len %d
Line 126: SN-PDU failed basic checks
Line 136: F %d, T %d, M %d, Nsapi %01X, DCOMP %d, PCOMP %d, NPDU %d
Line 138: SNDCP RxSeqNum %d
Line 152: Invalid SN-PDU received Octet 1 %01X, TxMode %d, snp_CheckFlag %d
Line 183: Wrong Seq Num in RECOVERY State, Expected %d, received %d
Line 196: DCOMP or PCOMP received non-zero when compression disabled
Line 212: DCOMP or PCOMP received non-zero but no compression entity assigned
Line 227: Received NEXT data pkt in SNP_RX_FIRST state
Line 253: Received FIRST data pkt in SNP_RX_NEXT state
Line 266: Unknown receive state
Line 290: Unable to add data pkt to rx queue
Line 540: Snp Unitdata pkt recieved. Len %d
Line 546: Invalid SN-PDU received
Line 560: Invalid SN-PDU received
Line 575: RxSeqNum = %d RxSeqNumPkt = %d
Line 581: RxSeqNumInQ = %d RxSeqNumPkt = %d
Line 589: RxSeqNumPkt != RxSeqNumInQ, discarding old NPDU
Line 596: RxSeqNumPkt != RxSeqNumInQ, but not discarding old NPDU?? QIdx(%d)
Line 602: RxSeqNumInQ == SNP_MAX_UNACK_SEQ_INIT_VAL, empty queue, QIdx(%d)
Line 616: DCOMP or PCOMP received non-zero when compression disabled
Line 632: DCOMP or PCOMP received non-zero but no compression entity assigned
Line 656: QIdx(%d) maxUnitSeg %d
Line 660: QIdx(%d) unitSegCount %d SegNum %d
Line 671: Unable to add data pkt to rx queue
Line 725: LLC Ack flow on SAPI=%d
Line 750: LLC Unack flow on SAPI=%d
Line 790: snp_DecodePdhSnpDataMsg: Nsapi : %01X, Len: %d, UL:IP-ID: %02X %02X  
Line 791:  DataDump: %02X %02X %02X %02X
Line 795: Invalid:nasu Buffer is NULL
Line 812: PDH Data packet dropped, NSAPI=%d, Length= %d, State= %d, TxMode =%d, DropUlData = %d
Line 825: Unable to queue transmit packet
Line 838: Transmit packet queued Nsapi=%d, TxqEmpty=%d, TxEnableXid=%d, TxDisabled=%d
Line 844: snp_GmmReEstMsgSent = %d,SNP_NSAPI_RAT_WAIT = %d 
Line 849: Send GMMSN_REEST_REQ msg = %d
Line 933: UL Data:
Line 938: Sent LLC UnitDataReq, NSAPI=%d, SAPI=%d, Add %08X, Length=%d, Radio Priority=%d UL Count = %d
Line 946: [LLC STATUS = %d] NSAPI=%d, SAPI=%d Dl_Watch_TimerRunning = %d
Line 954: SNP_NO_PEER_RESPONE Clear
Line 955: Started DL WATCH TIMER, NSAPI=%d, SAPI=%d
Line 959: Started DL WATCH TIMER, Ul_Packets=%d,Dl_Packets=%d
Line 1012: Sent LLC DataReq, N-PDU=%d, NSAPI=%d, SAPI=%d, Ref=%d, LastSeg=%d, Length=%d, Radio Priority=%d
Line 1051: Sent PDH Data Msg, NSAPI=%d, Length=%d, IP-ID: %02X %02X DL Count %d 
Line 1052: %s
Line 1056: [SNDCP EXT FN]Calling nasu_UdhDlBufferSend
Line 1063: [PDH_DOWNLINK] DL IP-ID 0x%X %X
Line 1069: Unknown IP version: Did not Send to HostIf %x
Line 1077: pListData : NULL return
Line 1083: Found Cid(%d) from Nsapi(%d) in StackID(%d)
Line 1087: snp_SendSnpPdhDataMsg:sid %x is not valid
Line 1098: NSAPI=%d, Length=%d
Line 1111: Before : pStaticMacHeader(0x%X), pStaticMacHeader->pData(0x%X)
Line 1115: Before MUX_PacketFilterHedge NSAPI=%d, Length=%d
Line 1122: After MUX_PacketFilterHedge NSAPI=%d, Length=%d
Line 1131: pStaticMacHeader(0x%X), pStaticMacHeader->pData is NULL
Line 1136: After : pStaticMacHeader(0x%X), pStaticMacHeader->pData(0x%X)
Line 1143: uiIPVersion is wrong : %d
Line 1147: SendPsDownlinkData() : hostifSendDataPacket IPv4 send error
Line 1198: Set Local Pdp reset[0] %d
Line 364: DCOMP or PCOMP received non-zero when compression disabled
Line 380: DCOMP or PCOMP received non-zero but no compression entity assigned
Line 398: Received NEXT data pkt in SNP_RX_FIRST state, Address: %08X, Length %d, Data (inc LLC Hdr)
Line 431: Received FIRST data pkt in SNP_RX_NEXT state, Address: %08X, Length %d, Data (Including LLC header)
Line 457: Discarding Segment in DISCARD State
Line 470: Unknown receive state
Line 492: Unable to add data pkt to rx queue
