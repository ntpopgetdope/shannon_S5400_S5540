Line 302: urlc_FlushMsgPools:  PoolType %d, curPoolSize %d
Line 310: urlc_FlushMsgPools: Mismatch PoolArrays: PoolType %d, curPoolSize %d
Line 384: urlc_FlushPools: Mismatch PoolArrays: PoolType %d, curPoolSize %d
Line 406: urlc_Constructor: gEnableTCP_Priority %d
Line 418: urlc_InitPools() Start!
Line 459: [PktProc] urlc_FillUpPktProcQueue() Start! 
Line 474: [PktProc] After fill up, g_uRlcPktProcFreeQueNum(%u) uRlcPktProcFreeOffset(%u)
Line 518: urlc_Constructor: Critical SRB reception: SRBRegistrySetting %d, Active clients %d
Line 583: urlc_GetRbPduTxSequenceNumber invalid EIS [RbId=%d]
Line 616: urlc_GetRbPduTxSequenceNumber:SegmentationFlowCntrlFifoCnt=%d, SduCnt=%d,  SegSDUSize=%d, FifoSduSuze=%d
Line 626: urlc_GetRbPduTxSequenceNumber: RbId %d, SduBufferOccupancy %d, Num %d, VT_S %d, NextSegSN %d, RetPduSn %d, UlPduSize %d
Line 634: Error: not supported Mode(%d)
Line 635: WARNING: urlc_GetRbPduTxSequenceNumber invalid mode [RbId=%d]
Line 787: urlc_GetMemBlock: Invalid input parameter
Line 825: urlc_FreeMemBlock: MemRef=0x%X, *MemRef=0x%X
Line 827: urlc_FreeMemBlock: MemRef=0x%X, *MemRef=0x%X
Line 918: Error detected: urlc_FreeMemBlock: Invalid input parameter
Line 947: Empty Pool size
Line 1091: Error detected: NumPdus %d is larger than URLC_MAX_NUM_DL_PDUS
Line 1185: Error detected: InputStruct memory allocation failed.
Line 1207: urlc_LoadForSegCreatePdu: RbId %d, State %d, SduId %d
Line 1223: Error detected: Unsupported mode %d, RbId %d
Line 1255: EUrlcurlc_SegCreatePduA: RbId %d, MODE_AM
Line 1257: urlc_LoadSegSduPopCheck(Call urlc_SegCreateAmPdu): RbId %d
Line 1301: Poll(VT(PDU)) [RbId=%d, VT_PDU = %d]
Line 1331: Poll(VT(SDU)) [RbId=%d, VT_SDU = %d]
Line 1352: Polling triggered [RbId=%d, Settings=%d, TimerPollProhibitToken=%x]
Line 1371: urlc_SetPduPollBitSpecial: Set poll bit [RbId=%d, Settings=%d, TimerPollProhibitToken=%x]
Line 1429: Error: not supported Mode(%d)
Line 1434: CreateSdu(RbId=%d, DataSize=%d)
Line 1436: CreateSdu(RbId=%d, DataSize=%d)
Line 1484: Create SDU Failure; CurrEntry is NULL
Line 1507: Error: not supported Mode(%d)
Line 1524: CreateSDU(Loopback): RbId %d, Mode %d, DataType %d, PduSnBot %d, PduSnTop %d, SduSize %d
Line 1545: Error detected: SduCnt %d exceeds MAX_BURST_SDU_CNT
Line 1580: CreateSDU: RbId %d, Mode %d, Progress %d, PduSnBot %d, PduSnTop %d, SduSize %d, CurrEntry %x
Line 1598: CreateSDU(Delivery): RbId %d, Mode %d, SduCnt %d, Progress %d, DlSduIndex %d, IsDelivery %d, SduData %x
Line 1629: Error detected: Unknown Mode %d
Line 1659: Unsafe to process. Token Data Expired RbId=%d
Line 1693: Unsafe to process. Token Data Expired RbId=%d
Line 1843: Discard DL Data(RbId not correctly configured): RbId %d, Mode %d, Num %d, Param %d
Line 1847: Discard DL Data(PDU Erroneous indicated by U-MAC): RbId %d, Mode %d, SN %d, Param %d
Line 1852: Discard DL Data(Undecodable control PDU): RbId %d, Mode %d, SN %d, Param %d
Line 1857: Discard DL Data(Unsafe to process): RbId %d, Mode %d, F_SN %d, L_SN %d, Num %d, Param %d
Line 1869: Discard DL Data(Outside Rx Window): RbId %d, AM, F_SN %d, L_SN %d, Num %d, VR_R %d, VR_H %d, Param %d
Line 1880: Discard DL Data(Outside Rx Window): RbId %d, UM, F_SN %d, L_SN %d, Num %d, VR_US %d, DlRecvWinSize %d, Param %d
Line 1886: Discard DL Data(HE Bits invalid(bit 6 is set)) : RbId %d, Mode %d, SN %d, Param %d
Line 1893: TraceDlPduDiscard(): CcmVars - Error detected, NULL Pointer RbId %d
Line 1902: Discard DL Data(Invalid LI): RbId %d, Mode %d, SN %d, ActiveHfn %d, ActivePtr %d, Param %d
Line 1907: Discard DL Data(Invalid R2 in piggy status): RbId %d, Mode %d, SN %d, Param %d
Line 1911: Discard DL Data(SDU List Parse Failed): RbId %d, Mode %d, F_SN %d, L_SN %d, Num %d, Param %d
Line 1915: Discard DL Data(Status Report Discarded. In reset procedure): RbId %d, Mode %d, Param %d
Line 1919: Discard DL Data(PDU Discarded. In reset procedure): RbId %d, Mode %d, F_SN %d, L_SN %d, Num %d, Param %d
Line 1923: Discard DL Data(Invalid PDU size): RbId %d, Mode %d, SN %d, Param %d
Line 1927: Discard DL Data(SHandles Over): RbId %d, Mode %d, F_SN %d, L_SN %d, Num %d, Param %d
Line 1939: Discard DL Data(Duplicate): RbId %d, AM, F_SN %d, L_SN %d, Num %d, VR_R %d, VR_H %d, Param %d
Line 1951: Discard DL Data(Duplicate): RbId %d, UM, F_SN %d, L_SN %d, Num %d, VR_US %d, DlRecvWinSize %d, Param %d
Line 1958: Discard DL Data(Unknown): RbId %d, Mode %d, SN %d, Param %d
