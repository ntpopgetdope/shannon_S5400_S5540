Line 140: urlc_SegSduPopCheck: SDU from Fifo SUBMitted for segmentation(RbId-%d, Mui-%d, SduId-%d)
Line 151: urlc_SegSduPopCheck: NO SDU from Fifo Submitted, End Event(RbId-%d, FifoCnt=%d, TCPFifoCnt=%d, TCPAckFifoCnt=%d)
Line 205: urlc_SegGetPduUmReturnFunc(NO SDU): RbId=%d, Mode %d PDP PDU set to TRUE
Line 246: SegDiscard -SduBufferOccupancy=%d, 
Line 266: SegDiscard -SduBufferOccupancy=%d, 
Line 284: SegDiscard -SduBufferOccupancy=%d, 
Line 448: urlc_SegmentPurgeBuffer: TCPSegmentationFlowCntrlFifoCnt %d, TCPAckSduSegmentationFlowCntrlFifoCnt %d, SegmentationFlowCntrlFifoCnt %d
Line 535: SduHandle->SduData is NULL : urlc_SegmentReestReset
Line 566: urlc_SegmentBufferOccupancy - SegVars is NULL 
Line 957: Failed to POP SDU : RbId %d, NumBuffPdus %d. SegStopByTxWinUpperEdge %d, lSuspend_Seg %d, SegmentationInProgress %d, Eis->State %d
Line 991: urlc_SegmentTriggerFifoPop (Do not POP SRB2): RbId %d, DataSize(SRB3) %d
Line 1003: SDU POP : RbId %d, InstanceId %d, SduId %d
Line 1010: AM UL PDU size changed, update SegmentSduInput: old size %d, new size %d
Line 1029: SEG(Start): RbId %d, SDU %d, IP %d, SDU Buffer(Remaining)%d, SduId %d
Line 1034: Store SDU : SduData is NULL, RbId %d, SduDataCopy %X, MemRef %X,SduHandle->MemRef %X
Line 1593: PDU Segmentation Stop !! This trace shouldn't be shown : RbId %d, AM, PduSn(VT_S)%d
Line 1610: urlc_SegCreateAmPdu(Check SDU state): RbId %d, State %d, InstanceId %d, SduId %d
Line 1617: segmentation module is now free: RbId %d
Line 1626: urlc_SegSduListAddEntry: RbId %d, InstanceId %d, SduId %d
Line 1643: SduHandleList is NULL: RbId %d
Line 1659: urlc_SegCreateSduEntryInPdu(SduData is NULL): RbId %d,SduId %d, PduSduListBufferEntry %X
Line 1752: urlc_SegCreateAmPdu II: RbId %d, PduSize %d, RemainingPduSpace %d, LiSize %d
Line 1771: urlc_SegCreateAmPdu(SpecialHE SET): RbId %d, SDU ID %d
Line 1779: urlc_SegCreateAmPdu(SDU fits exactly): RbId %d, PduSize %d, LiSize %d
Line 1794: DEBUG_CODE(EUrlcurlc_SegCreatePduA): RbId %d, Mode %d, LiSize %d
Line 1799: urlc_SegCreateAmPdu(One octet short): RbId %d, PduSize %d, LiSize %d
Line 1810: SuspendedSegCreatePdu: RbId %d, NumOfPduReadyForTx %d
Line 1822: Segmentation Stop(TxWinUpperEdge): RbId %d, MODE_AM
Line 1828: urlc_SegCreateAmPdu has to be called to make padding pdu: RbId %d, MODE_AM
Line 1838: SDU segmentation stoped or ended: RbId %d, MODE_AM, SuspendedSegCreatePdu %X, NumOfPduReadyForTx %d
Line 1894: urlc_SegSduListAddEntry: RbId %d, InstanceId %d, SduId %d
Line 2092: urlc_SegSduSegComplete II: RbId %d, PduSize %d, RemainingPduSpace %d, LiSize %d
Line 2116: DEBUG_CODE(EUrlcurlc_SegCreatePduA): RbId %d, LiSize %d
Line 2223: urlc_SegTmSdus: PduSize %d, NumPdusRequired %d, InstanceId %d
Line 2255: urlc_SegTmSdus: %d: SduOffset %d, PduSize %d, NumPdusRequired %d
Line 2260: urlc_SegTmSdus: TM PDU SduEndOffset %d smaller than PduSize %d
Line 2343: Error detected: RbId %d pSegCreatePdu is NULL.
Line 2392: urlc_SegPushFlowControlFifo RbId %d, NextHeader %d: IPv6 - Packet found
Line 2424: urlc_SegPushFlowControlFifo RbId %d, NextHeader %d: IPv6 - ACK packet found
Line 2432: urlc_SegPushFlowControlFifo RbId %d, SduSize %d: Unknown IP version %d
Line 2440: urlc_SegPushFlowControlFifo(Fast TCP ACK) 1: RbId %d, SduIdentifier %d, SduSize %d
Line 2976: SDU urlc_AmSegSduVarsBufferOccupancy: RbId %d, SegSduVarsOccupancy %d, SduCnt=%d
Line 678: DEBUG_CODE(EUrlcurlc_SegSduListDeleteEntry): Mode %d, SegmentVars 0x%x
Line 884: Error detected: SduHandleNewListEntry is NULL.
Line 906: DEBUG_CODE(EUrlcurlc_SegSduListAddEntry): State %d, Mui %d, SduIdentifier %d
Line 1211: Ask for more Pdu to be sent: RbId %d
Line 1248: Creat PDU with padding: RbId %d, PaddingSize %d, FifoCnt %d, TCPFifoCnt %d, TCPAckFifoCnt %d
Line 1254: Segmentation module is now free [MemFree]: RbId %d
Line 1273: Error detected: RbId %d NewPduHandle is NULL.
Line 1347: PDU generation error : RbId %d
Line 1386: Create PDU: RbId %d, PduSn %d, HFN %d, CiphConfig %d
Line 1390: Create PDU: RbId %d, PduSn %d, HFN %d
Line 1165: Piggyback(ACK SUFI): 
Line 1071: Padding [MemFree]: RbId %d
Line 1079: SpecialHE [MemFree]: RbId %d, PduSn(SpecialHE)%d
Line 1086: segmentation module is now free(SpecialHE): RbId %d
Line 1094: ExactFitIncludingLI is TRUE [MemFree]: RbId %d, CreatedPduSize %d
Line 1115: EUrlcurlc_SegCreatePduB: RbId %d, SuspendedSegCreatePdu %x, InputStruct %x
Line 1125: Segmentation Stop(TxWinUpperEdge): RbId %d, NumOfPduReadyForTx %d
Line 1492: Error detected: RbId %d SegOutput is NULL.
Line 2153: urlc_SegSduSegComplete: RbId %d, Mode %d, SduCurrState %d, SduId %d
Line 2160: DEBUG_CODE(EUrlcurlc_SegCreatePduB): RbId %d, Mode %d, State %d, SduIdentifier %d, DebugAssertCnt %d
Line 2174: DEBUG_CODE(EUrlcurlc_SegCreatePduB): RbId %d, Mode %d, State %d, SduIdentifier %d
Line 2181: urlc_SegSduSegComplete(SDU NULL): RbId %d
Line 2597: SDU POP(Invalid State, Search next SDU): RbId %d, State %d, InstanceId %d, SduId %d
Line 2634: SDU POP(Invalid State, Search next SDU): RbId %d, State %d, InstanceId %d, SduId %d
Line 2672: SDU POP(Invalid State, Search next SDU): RbId %d, State %d, InstanceId %d, SduId %d
