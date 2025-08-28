Line 214: MacEhsInit Procedure
Line 827: [Warning] MAC-ehs PDU Macehs disassembly is not ready, discard PDU cnt : %d
Line 840: LmacDoneISR Missing : %d, numOfUmacMacEhsPdu: %d
Line 843: Inside Disassembly, MAC-EHS PDU Count %d
Line 983: T1 timer start Q[%d] T1TSN:%d
Line 1003: T1 timer stop Q[%d] T1TSN:%d
Line 1016: Running T1Timer Token although T1 stop
Line 1143: WARNING: QueueId is out of bounds
Line 1177: WARNING: T1 Timer Expiry when queue list is NULL
Line 1184: Inside T1TimerExpire, QueueId: %d
Line 1200: [Error] T1_TSN(%d) == NET(%d) !!!
Line 1218: WARNING: MacehsQueueList is NULL
Line 1351: [ECF] WARNING: QueueId %d is out of bound
Line 1361: [ECF] WARNING: TReset Expiry: QueueId %d, TresetTimerEnable = %d, pTresetTimerSetEhs = %x
Line 1494: Inside TresetStop, QueueId: %d
Line 1504: Warning: Running TresetTimer Token, although Treset stopped
Line 2133: (Umac_MacehsReassembly) More than %d SDU 
Line 2142: WARNING: CombineIndex is out of bound
Line 2147: (Reassembly) SI:%d, SDU Cnt %d TSN %d 
Line 2194: SI Field Invalid TSN %d
Line 2207: (Umac_MacehsReassembly) More than 400 SDU %d
Line 2217: (Umac_MacehsReassembly) too many handle passed: %d
Line 2224: (Umac_MacehsReassembly) SduCount %d is out of bound
Line 2229: (Umac_MacehsReassembly) Giving SDUs to Demux, SduCount: %d
Line 2727: MacehsTsnFieldExt(0:TSN6bit mode)
Line 2729: MacehsWindowMaxnum:%d, MacEhsParam_p->MacehsTsnModulo:%d, MacehsMaxReorderSduPerTTI:%d, RcvWindowUpperEdgeEhs:%d
Line 2745: MacehsTsnFieldExt(1:TSN14bit mode)
Line 2747: MacehsWindowMaxnum:%d, MacEhsParam_p->MacehsTsnModulo:%d, MacehsMaxReorderSduPerTTI:%d, RcvWindowUpperEdgeEhs:%d
Line 3139: Reset isCommonhrntipresent flag.
Line 3151: MacehsTsnFieldExt(0:TSN6bit mode), MacehsWindowMaxnum:%d (Configured:%d), MacEhsParam_p->MacehsTsnModulo:%d, MacehsMaxReorderSduPerTTI:%d
Line 3160: MacehsTsnFieldExt(1:TSN14bit mode), MacehsWindowMaxnum:%d (Configured:%d), MacehsTsnModulo[SIMInstance]:%d, MacehsMaxReorderSduPerTTI:%d
Line 3192: Initial configuration for HS-DSCH , isMacEhsReqForFach %d  
Line 3210: Reconfiguration for HS-DSCH , isMacEhsReqForFach %d
Line 3231: After Add. Configured Mac-ehs QueueID:%d, WindowSize:%d
Line 3244: After delete. Configured Mac-ehs QueueID is zero
Line 3251: After delete. Configured Mac-ehs QueueID:%d
Line 3311: Reconfiguration(shorten) of Receive_Window_Size in Q[%d]
Line 3318: [HS-DPCCH ACK DSDS Opt] gT1Value2DSP = %d, Rcvd new T1 = %d
Line 3362: Reset or Release QueueId mapping to HSDSCH. MacehsResetInfo: %d, MacehsReleaseInfo: %d, MacehsPdu Rcvd: %d, Duplicated: %d, DuplicateRate: %d (x100)
Line 3396: Error: Queue ID:% is out of bound
Line 3459: [HS-DPCCH ACK DSDS Opt] Reset Shared T1 Value to DSP
Line 532: UPHY not ready to process EHS data
Line 704: MacehsPDU_num: %d, Reorder PDU Count is: %d, DataSize = %d
Line 708: Error case MAX no of Reorder PDU can be 3. Currently received %d.
Line 729: Duplicate detected
Line 752: After disassembly: (%d,%d) bytes remaining
Line 780: MacehsPdu Rcvd: %d, Duplicated: %d, DuplicateRate: %d (x100)
Line 320: WARNING: Invalid LCHID
Line 327: WARNING: QueueId is out of bound
Line 335: WARNING: MacehsQueueInfo is NULL
Line 360: Inside Umac_MacehsSetReorderingParams, Stopping Treset for QueueId: %d
Line 965:  New UpperEdge:%d
Line 1285: Starting Treset Timer for Queue Id: %d
Line 440: Error case MAX no of SDU per reorderPDU can be %d. Currently recieved %d.
Line 444: PDU disassembly (SDU count = %d)
Line 500: **Critical Error**: Lch Not valid (LCHID = %d)
Line 513: SDU disassembly (SDU length = %d)
Line 899: Error: Data Recived for a LCH[%d] not configured
Line 572: Inside Disassembly, Stored BCCH HRNTI is: [%d]
Line 580: Error case: H-RNTI for BCCH is not present and Logical Channel Id equals to LCH_ID_ECFACH
Line 594: Error case: QueueID out of bound: %d
Line 606: Inside Disassembly, Handling DXCH or CCCH case, LCH Id: %d, Queue Id: %d
Line 617: Error case: Logical Channel id is not mapped to DXCH or CCCH
Line 284: [Error] DBGetHsdschInfo !!!
Line 1257: T1 timer expiry from SMC : Q[%d] NET:%d, UE:%d, T1TSN:%d
Line 1416: WARNING: MacehsQueueList is NULL
Line 1454: Inside TresetTimerExpire, QueueId: %d
Line 1471: Inside TresetTimerExpire, Queue Id: %d, NET: %d, isUtranCommercialPlmnId: %d, UE: %d
Line 1480: Inside TresetTimerExpire, Queue Id: %d, NET: %d, isUtranCommercialPlmnId: %d, UE: %d
Line 1382: T1 timer stop Q[%d] T1TSN:%d
Line 1395: Running T1Timer Token although T1 stop
Line 3491: Warning: Null pointer
Line 1658: Deleting Segments %d
Line 1738:  Waring: issue in CombineSdu
Line 2291: SegmentCnt is too many: SduCount %d, TotalSduSize %dBytes, LmacModeCheck %d, GetIsRfUsePaused %d
Line 1871:  Waring: issue in CombineSdu
Line 1897: Deleting Segments %d
Line 1957:  Warning: Discarding
Line 2014: WARNING: QueueId is out of bound : %d, LCHID: %d
Line 2025: Inside Reassembly, Lch Id Not valid 
Line 2031: Inside Reassembly, Deleted Mob (LCHid Not valid)
Line 2046: Inside Reassembly, UeId Value received from URRC: %d, UeId Value received from Header for SDU No: %d is: %d
Line 2065: Inside Reassembly, Error case: U-RNTI is invalid for SDU NO: %d
Line 2071: Inside Reassembly, Deleted Mob (Not our UeId)
Line 2077: Inside Reassembly, Mapped to CCCH
Line 2093: Inside Reassembly, Num of SDU's having same UeId as configured by URRC is: %d
Line 2594: RbCount out of bound 
Line 2601: (Umac_MacehsDemultiplexing) One reordering mapped more RB: queueID%d, PrevRbId %d, RbId %d
Line 2494: queue ID or LchId is out of bound
Line 2505: WARNING: RbInfo[%d] is NULL
Line 2512: Rbid for BCCH: %d
Line 2516: Error Case: LchId equals to LCH_ID_ECFACH, but BCCH or PCCH hrnti is not present
Line 2528: queue ID or LchId is out of bound
Line 2429: WARNING: RbId[%d] is NULL or Lchid(%d) is zero
Line 2956: [HS-DPCCH ACK DSDS Opt] gT1Value2DSP = %d, Rcvd new T1 = %d
Line 2970: Error: Queue ID:%d is out of bound
Line 3019: NoAddOrReconfMacehsQueue %d
Line 3034: [HS-DPCCH ACK DSDS Opt] gT1Value2DSP = %d, Rcvd new T1 = %d
Line 3048: WARNING: Queue ID:% is out of bound
Line 3059: Override queue id[%d] 
Line 3072: WARNING: AddCnt is out of bound
Line 3080: [HS-DPCCH ACK DSDS Opt] gT1Value2DSP = %d, Rcvd new T1 = %d
Line 3099: Error: Queue ID:% is out of bound
Line 2811: Invalid indx %d
Line 2818: Invalid queue id %d
Line 2839: Invalid indx %d
