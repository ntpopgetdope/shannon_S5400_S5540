Line 120: NumPdusRequired=0 : RbId %d, NumPdusRequested %d
Line 161: ReTxed(TX window full): RbId %d, PduSn %d, VT_A %d, TxWindowUpperEdge %d, VT_TempSUnAcked %d, VT_S %d
Line 196: ReTxed(poll bit should be triggered): RbId %d, VT_TempSUnAcked %d, VT_S %d
Line 215: ReTxed(poll bit should be triggered): RbId %d, VT_TempSUnAcked %d, VT_S %d
Line 234: urlc_PbGetPdus:(TotalTxRequests==0, So, UnAcked or VT_S-1(%d), retransmitted)RbId=%d, NumPdusRequired=%d
Line 247: Create RESET PDU: RbId %d
Line 252: Required Pdus in RESET triggering is not matched: RbId %d, NumPdusRequired %d, TotalTxRequests %d
Line 496: PDU RETRANSMITTED [RbId %d, PduSn %d, VT_DAT %d, HFN %d, VT_A %d, VT_S %d]
Line 516: urlc_UshConfirm TRANSMITTED - Mui (%d) InstId(%d) RbId %d
Line 554: CipherTransaction is NULL !: RbId %d, MODE_AM
Line 564: NumPdusReturned(%d)is out of Bound
Line 598: Tx Window full !!(UpperEdge PDU): RbId %d, PduSn %d, TxLowerEdge %d, TxUpperEdge %d, VT_A %d, VT_S %d
Line 609: Poll(Last Retx)) [RbId=%d]
Line 625: Poll flag RESET(Cipher Pend + TimerPollProhibit)RbId=%d, SN=%d, Hfn=%d
Line 637: State Error: urlc_PbGetPdusReturnFunc() PDU not Treated: RbId %d, NumPdusReturned %d, SN %d, RlcH %x, PaySize %d
Line 647: EUrlcurlc_PbGetPdusNumReqInvalid: RbId %d, NumPdusReturned %d, NumPdusRequired %d, NumPdusRequested %d, CurrPduEntry %X
Line 660: [RACH] The PDU is already delivered!, set WaitingForConfirm = FALSE, PersistenceRetry = FALSE
Line 751: MAX LSN Select: RbId %d, ReportedPduSnForAck=%d, VT_A=%d, VT_S=%d
Line 789: PDU Segmentation can start I(by StatusReport): RbId %d, VT_A %d, VT_S %d, SuspendedSegCreatePdu %d, NumRetx %d, NumTx %d
Line 801: Scheduling for STATUS PDU: RbId %d, NextSn %d, ReportedPduNum %d, VT_A %d, VT_S %d, NumRetx %d, NumTx %d
Line 809: PbDataQueueCheck(Status report): RbId %d, PbDataQueuedForTxWindow %d, VT_A %d, VT_S %d
Line 820: PDU Segmentation can start II(by StatusReport): RbId %d, VT_A %d, VT_S %d
Line 874: PDU Segmentation Stop(TxWindUpperEdge): RbId %d, PduSn %d, TxLowerEdge %d, TxUpperEdge %d
Line 881: EUrlcurlc_PbSetStateInvalid: RbId %d, PduSn %d, PduState %d, NewState %d
Line 910: EUrlcurlc_PbSetStateInvalid: RbId %d, PduSn %d, PduState %d, NewState %d
Line 942: EUrlcurlc_PbSetStateInvalid: RbId %d, PduSn %d, PduState %d, NewState %d
Line 971: EUrlcurlc_PbSetStateInvalid: RbId %d, PduSn %d, PduState %d, NewState %d
Line 977: EUrlcurlc_PbSetStateInvalid: RbId %d, PduSn %d, PduState %d
Line 1130: TX window Upper Edge: RbId %d, AM, PduSn %d, VT_A %d, TxUpperEdge %d, PbDataQueuedForTxWindow %d, NumTxRequests %d, NumRetxRequests %d
Line 1143: PbDataQueueCheck: RbId %d, PbDataQueuedForTxWindow %d, NumTxRequests %d, NumRetxRequests %d 
Line 1536: urlc_PbRxCipheredPdus AM RbId=%d
Line 1543: Poll(returns from ciphering)RbId=%d, SN=%d, Hfn=%d
Line 1562: urlc_PbRxCipheredPdus UM RbId=%d
Line 1572: UmacListEntryPtr is NULL: RbId %d, UM mode, InstanceId %d
Line 1589: DB mapping failure: RbId %d, UM mode, RequestsMade %d
Line 1610: iSegBitSize Error II on UM mode 
Line 1688: EUrlcurlc_PbGetPdus
Line 1704: EUrlcurlc_PbGetPdus
Line 1720: EUrlcurlc_PbGetPdus
Line 1726: EUrlcurlc_PbGetPdus
Line 331: [SEC] SMC transmission started from UL2. PDU count:%d
Line 336: [SEC] SMC transmission done from UL2
Line 1029: urlc_PbDeliverPdu: RbId %d, PbDataQueue %d, PduBuffVars.PduSn %d, TxWindowLowerEdge %d, TxWindowUpperEdge %d
Line 1805: Poll(Window based - J)) J = %d, [RbId=%d]
Line 1901: Unrecoverable error [RbId=%d, Pdu=%d]
Line 1921: Initiate Reset MaxDAT no discard [RbId=%d, Pdu=%d]
