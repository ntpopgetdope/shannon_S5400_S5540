Line 70: NASU common  Mounted
Line 77: NASU common not Mounted yet
Line 170: urlc_SbPurgeSduBuffer() : MUI %d, RbId %d
Line 183: urlc_SbPurgePdcpSduBuffer(1) : Null pointer
Line 213: urlc_SbPurgePdcpSduBuffer(2) : Null pointer
Line 271: urlc_SbCancelSdu : RbId=%d, Mode=%d, Mui=%d
Line 278: DEBUG_CODE(SDUBuffVars is NULL): Mode %d
Line 345: urlc_SbCancelSdu: RbId %d, SduId %d
Line 367: SDUBuff_Modif_in_Progress(TM)
Line 377: DEBUG_CODE(SDUBuffVars is NULL): Mode %d
Line 384: urlc_SbGetSdu() - No SDU: Mode %d
Line 412: SduBuffer mismatch with ListRoot: Mode %d, SduBufferSize %d
Line 435: urlc_SbGetSdu (Delete timer): Mode %d, SduBufferSize %d, SduIdentifier %d, DiscardTimerId %x
Line 480: DEBUG_CODE(SDUBuffVars is NULL): Mode %d
Line 489: Discard UL SDU(NewSDUHandle is NULL): RbId %d, Mode %d
Line 520: Error: not supported Mode %d
Line 581: [SEC] Security Mode Complete received in URLC : RbId %d, Mode %d
Line 632: AM Mode: New SDU being submitted for segmentation  New Buffer Occupancy %d, New SDU Size %d, RbId %d, Mui %d, SduIdentifier %d, SIMInstance %d
Line 641: Previously unrecoverrable error happened: RbId %d
Line 645: AM Mode: New SDU being submitted for segmentation  New Buffer Occupancy -%d, New SDU Size - %d, RbId %d, Mui %d, SduIdentifier %d, SIMInstance %d
Line 659: UM Mode: New Buffer Occupancy - %d, New SDU Size - %d, RbId - %d, SduIdentifier - %d
Line 664: UM Mode: New Buffer Occupancy - %d, New SDU Size - %d, RbId - %d, SduIdentifier - %d
Line 716: TM Mode: BufferOccupancy %d, SDU Size %d, RbId %d, SduIdentifier %d, TtiCount %d SIMInstance %d
Line 719: TM Mode: New Buffer Occupancy - %d, New SDU Size - %d, RbId - %d, SduIdentifier - %d, SDU TtiCount - %d SIMInstance %d
Line 724: TM Mode: New Buffer Occupancy - %d, New SDU Size - %d, RbId - %d, SduIdentifier - %d, SDU TtiCount - %d SIMInstance %d
Line 744: TM Mode: New Buffer Occupancy - %d, New SDU Size - %d, RbId - %d, SduIdentifier - %d, SDU TtiCount - %d
Line 749: TM Mode: New Buffer Occupancy - %d, New SDU Size - %d, RbId - %d, SduIdentifier - %d, SDU TtiCount - %d
Line 785: Error: not supported Mode %d
Line 826: DEBUG_CODE (EUrlcurlc_SegCreatePduB): RbId %d, Mui %d
Line 844: urlc_SbMarkPduDelivered() : MUI %d, RbId %d
Line 848: urlc_SbMarkPduDelivered: RbId %d, SduId %d
Line 876: DEBUG_CODE(EUrlcurlc_SegCreatePduB): State %d, Mode %d, SduIdentifier %d
Line 967: DEBUG_CODE(SduHandle is NULL): Mode=%d, SduIdentifier=%d
Line 983: Restore SDU: SduId %d, StartSeg %d, iDataP %x, NasuBuffDesPtr %x
Line 990: Not from Upperlayer SDU : iDataP %x, NasubuffDesPtr %x
Line 1034: urlc_SbSduListDeleteSdu (SduHandle is NULL): Mode %d
Line 1049: urlc_SbSduListDeleteSdu(TM) - Already deleted. SduIdentifier=%d, SduListRoot=0x%X, SduDeleteCnt=%d
Line 1068: Mismatch ListRoot & BO - Mode=%d, SduIdentifier=%d
Line 1092: urlc_SbSduListDeleteSdu (SDU DiscardTimer Stop): RbId=%d, Mode=%d, SduIdentifier=%d, DiscardTimerId=0x%x
Line 1107: Discarded ReTxSrbSdu: Mui %d, ReTxSrbSdu %x
Line 1163: urlc_SbDiscardSdu - SduBuffVars is NULL 
Line 1175: urlc_SbDiscardSdu - Invalid SDU Identifier RbId=%d
Line 1186: AM Mode: SDU being discarded RbId %d, Mui %d, SduIdentifier %d
Line 1191: AM Mode: SDU being discarded RbId %d, Mui %d, SduIdentifier %d
Line 1229: UM Mode: SDU being discarded RbId %d, Mui %d, SduIdentifier %d
Line 1234: UM Mode: SDU being discarded RbId %d, Mui %d, SduIdentifier %d
Line 1263: TM Mode: SDU being discarded RbId %d, Mui %d, SduIdentifier %d
Line 1268: TM Mode: SDU being discarded RbId -%d, Mui -%d, SduIdentifier -%d
Line 1274: Just delete TimerId: RbId %d, SduIdentifier %d, State %d, DiscardTimerId %x
Line 1288: urlc_SbDiscardSdu(): MUI %d, RbId %d
Line 1291: urlc_SbDiscardSdu: RbId %d, SduId %d
Line 1328: Error: not supported Mode %d
Line 1345: urlc_SbDiscardTxedSdus() : MUI %d, RbId %d
Line 1352:  urlc_SbDiscardTxedSdus : RbId=%d, Mui=%d, InstId=%d(Txed=%d, StartSeg=%d)
Line 1383: Restore SRB data: RbId %d, Mui %d, InstanceId %d, SduData %X, ReestInd %d
Line 1396:  urlc_SbDiscardTxedSdus : RbId=%d, Mui=%d, InstId=%d(Txed=%d, StartSeg=%d)
Line 1422: urlc_SbResubmitSdus(Begin): RbId %d, SduListRoot %X, SegmentationFlowCntrlFifo %X, TCPSegmentationFlowCntrlFifo %X, TCPAckSduSegmentationFlowCntrlFifo %X, SduHandleList %X
Line 1448: urlc_SbResubmitSdus() : RbId %d, SduState %d, Mui %d, SduData %X, SduDataCopy %X
Line 1452: urlc_SbResubmitSdus() : RbId %d, SduData %X, SduId %d, Mui %d, SduState %d, StartSeg %d
Line 1479: urlc_SbResubmitSdus() : RbId %d, SduCnt %d, SduBufferOccupancy %d
Line 1512: urlc_SbSduTimerDiscardExpiry: RbId=%d
Line 1535: Unsafe to process or IIM failure: urlc_SbSduTimerDiscardExpiry RbId=%d, sdu_exp_timerId %x
Line 1554: SDU's discard timer not matching with Expired timer RbId=%d, Sdu->DiscardTimer = %x, sdu_exp_timer=%x
Line 1577: Inconsistant state of SDU discard timer RbId=%d, Sdu->DiscardTimer = %x, State=%d
Line 1644: SDU Discard mui=%d, Token= 0x%x
Line 1686: TM Mode: SDU Discard SDU TtiCount - %d, Current TtiCount - %d, RbId - %d, SduIdentifier - %d
Line 1691: TM Mode: SDU Discard SDU TtiCount - %d, Current TtiCount - %d, RbId - %d, SduIdentifier - %d
Line 1703: urlc_SbDiscardSdusTtiCnt Purge all SDUs in the segmentation buffer in TM mode
Line 1831: Error: not supported Mode %d
Line 1852: urlc_SbStartTimerDiscardTimer: RbId %d, SduIdentifier %d, DiscardTimerId %x, TimerDiscardExp %d
