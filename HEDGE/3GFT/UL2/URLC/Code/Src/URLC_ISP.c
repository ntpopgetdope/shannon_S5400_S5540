Line 76: Status Report Invalid [RbId=%d, InvalidCnt =%d]
Line 79: URLC reset Proc initiated by UE Status Report Invalid [RbId=%d]
Line 90: Status PDU's raw data is not correct: RbId %d, ReportSize %d
Line 95: Ignore/Inconsitence receiving SUFIs :RbId %d, ReportStatus %d
Line 149: Unsafe to process or IIM failure: urlc_IspRxStatusPdu RbId=%d
Line 155: Receive Status PDU SUFIs: RbId = %d
Line 168: Previous Status PDU is still processing(Discard): RbId %d, SUFI TYPE %d
Line 181: BitOffset of Status PDU is not vaild(Discard): RbId %d, BitOffset %d, ReportSize %d
Line 197:  SUFI_RLIST(End): 
Line 212: BitOffset of Status PDU is not vaild(SUFI_LIST): RbId %d, BitOffset %d, ReportSize %d
Line 220:  SUFI_LIST: Length = %d
Line 224:  Discard STATUS PDU: invalid Length value in LIST SUFI
Line 238: BitOffsetError(SUFI_MRW): RbId %d, ReportSize %d
Line 261:  Unknown SUFI - Discard: Invalid [RbId=%d]
Line 269:  SUFI_NO_MORE
Line 279:  Unknown SUFI: Invalid format [RbId %d]
Line 289: [Detection of HS-SCCH Order missed] Resetting Consecutive poll expiry Counters. Rbid=%d
Line 296: Received only SUFI_NO_MORE [RbId=%d]
Line 312: PDU Segmentation can start II(by StatusReport): RbId %d, VT_A %d, VT_S %d
Line 372: urlc_IspStatusStateInvokedReturnFunc() : RbId %d, DataSize %d, NumTxReq %d, NumRetxReq %d, SDU Buffer(Remaining)%d
Line 710: POLL SUFI Handler: RbId %d, PollSN %d, VR_H %d
Line 714: POLL SUFI updated VR_H: RbId %d, VR_H %d
Line 344: urlc_IspStatusClearPollFlags: Cancelling Poll_Prohibit_Timer(RbId=%d)
Line 411: BitOffset of Status PDU is not vaild(RLIST): RbId %d, BitOffset %d, ReportSize %d
Line 415: RLIST_SUFI:
Line 425: RX SUFI_RLIST: RbId %d, FSN = %d, LENGTH = %d
Line 439: Invalid/Inconsistent
Line 453: BitOffset of Status PDU is not vaild(RLIST): RbId %d, BitOffset %d, ReportSize %d
Line 471: Status PDU is not vaild(RLIST), Error Burst: RbId %d, RListLength %d, RListData %d
Line 483: Status PDU is not vaild(RLIST): RbId %d, RListLength %d, RListData %d
Line 494: Invalid/Inconsistent
Line 735:  CW %d, RListSn %d
Line 753: RLIST_SUFI(Invalid)OutWin: RbId %d, RListSn %d, VT_A %d, VT_S(-1):%d, InvalidStatusPduCnt %d
Line 798: RLIST_SUFI(Invalid)OutWin: RbId %d, RListSn %d, VT_A %d, VT_S(-1):%d, InvalidStatusPduCnt %d
Line 524: BitOffset of Status PDU is not vaild(MRW): RbId %d, BitOffset %d, ReportSize %d
Line 531:  SUFI_MRW: MRW Length = %d
Line 539:  MRW SN = %d
Line 549: BitOffset of Status PDU is not vaild(MRW): RbId %d, BitOffset %d, ReportSize %d
Line 557:  MRW SN = %d
Line 563: BitOffset of Status PDU is not vaild(MRW): RbId %d, BitOffset %d, ReportSize %d
Line 571:  NLength = %d
Line 598: BitOffset of Status PDU is not vaild(MRW_ACK): RbId %d, BitOffset %d, ReportSize %d
Line 611:  SUFI_MRW_ACK: NLength = %d SN_Ack = %d
Line 640: BitOffset of Status PDU is not vaild(POLL): RbId %d, BitOffset %d, ReportSize %d
Line 657: Error detected: RbId %d Poll_pdu_ind_timer is NULL.
Line 665: POLL SUFI: RbId %d, PollSN %d, VR_H %d Timer started for 1 milisecond.
Line 670: POLL SUFI: Event not posted as PollSn %d is same as last received %d 
Line 685: POLL SUFI: RbId %d, PollSN %d, VR_H %d  Message Posted directly 
Line 690: POLL SUFI: Event not posted as PollSn %d is same as last received %d 
Line 847: BitOffset of Status PDU is not vaild(ACK): RbId %d, BitOffset %d, ReportSize %d
Line 854: RX SUFI_ACK: RbId = %d, LSN = %d
Line 869:  ACK_SUFI(In window,Ignored): RbId %d, VT_A %d, VT_S %d, LowerEdge %d, AckLsn %d, InvalidStatusPduCnt %d
Line 883:  ACK_SUFI(out window):RbId %d, VT_A %d, VT_S %d, LowerEdge %d, AckLsn %d 
Line 892:  ACK_SUFI WaitMrwAckSufi is TRUE(Ignore): RbId %d, VT_A %d, VT_S %d, AckLsn %d 
Line 921:  ACK_SUFI(Inconsistent): RbId %d, PduSn %d
Line 962: No Data in PduBuffVars. All PDU recieved ACK: RbId %d
Line 972: BitOffset of Status PDU is not vaild(LIST): RbId %d, BitOffset %d, ReportSize %d
Line 984: RX SUFI_LIST: RbId = %d, SnValue = %d, LValue = %d, ListLength = %d
Line 993:  LIST_SUFI(Invalid)OutWin: RbId %d, PduSn %d, LValue %d, VT_A %d, VT_S(-1):%d, InvalidStatusPduCnt %d
Line 1007:  LIST_SUFI(Inconsistent)_No match SN, Re-Seaching now: RbId %d, PduSn %d, VT_A %d, VT_S %d
Line 1014:  LIST_SUFI(Inconsistent)_No match twice. Invalid NACK: RbId %d, PduSn %d, VT_A %d, VT_S %d
Line 1021:  LIST_SUFI(Inconsistent): RbId %d, PduSn %d
Line 1030: LIST_SUFI(Inconsistent): RbId %d, PduSn %d
Line 1068: BitOffset of Status PDU is not vaild(BITMAP): RbId %d, BitOffset %d, ReportSize %d
Line 1095:  Invalid bitmap Sufi: RbId %d, FSN %d, VT_A %d, VT_S %d
Line 1106: BitOffset of Status PDU is not vaild(BITMAP): RbId %d, BitOffset %d, ReportSize %d
Line 1114: RX SUFI_BITMAP: RbId %d, Length %d, FSN %d, Byte %X, ReportedLastSn %d, VT_A %d, VT_S %d
Line 1127:  SUFI_BITMAP(Invalid)OutWin: RbId %d, PduSn %d, VT_A %d, VT_S:%d, InvalidStatusPduCnt %d
Line 1142:  PDU SN was found: FSN %d, PduSn %d
Line 1146:  PduHandle is NULL: FSN %d
Line 1159:  FSN is in window: FSN %d, PduSn %d
Line 1166: Already deleted: FSN %d
Line 1171:  Ignore(Already deleted): FSN %d
Line 1181: BitOffset of Status PDU is not vaild(BITMAP): RbId %d, BitOffset %d, ReportSize %d
Line 1188: SUFI_BITMAP: RbId %d, Length %d, FSN %d, Byte %X, ReportedLastSn %d, VT_A %d, VT_S %d
Line 1206:  PduHandle is NULL
Line 1215:  Inconsistent: SN %d
Line 1223:  Pdu already deleted(Nack): PduSn %d
Line 1231:  PduHandle is NULL
Line 1240:  Inconsistent, PduSn %d
Line 1248:  Pdu already deleted(Ack): PduSn %d
Line 1283: BitOffset of Status PDU is not vaild(WINDOW): RbId %d, BitOffset %d, ReportSize %d
Line 1291:  SUFI_WINDOW: WSN = %d
Line 1296: urlc_IspInterpretWindowSufi - WSN = 0 [INVALID Case!!]
