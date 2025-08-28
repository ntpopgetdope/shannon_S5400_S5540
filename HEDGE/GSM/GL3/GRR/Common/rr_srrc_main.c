Line 254: [RR_SRRC]rr_InitSrrcContext
Line 300: [RR_SRRC]rr_CheckIfClientIsRegisteredToSrrc: ClinetId(%d)
Line 536: [RR_SRRC]RequestedProcCause(%d)
Line 560: [RR_SRRC]GRR state is already Resumed State
Line 595: [RR_SRRC]rr_MmSuspendRatCnfPending: Ignore start for Cell Selection
Line 618: [RR_SRRC]Peer is Idle/Init, Camping to previous cell(%d)
Line 625: [RR_SRRC]rr_GrrSrrcStartCellSelection: Start Cell Selection
Line 657: [RR_SRRC]rr_MmSuspendRatCnfPending: Ignore resume for Cell Selection
Line 661: [RR_SRRC]rr_GrrSrrcResumeCellSelection: RR is in RR_WPOWER, resume RSSI SCAN procedure
Line 707: [RR_SRRC]rr_GrrSrrcResumeCellSelection: Resume Cell Selection
Line 760: [RR_SRRC]rr_GrrSrrcPauseCellSelection: Abort RSSI SCAN
Line 784: [RR_SRRC]rr_GrrSrrcPauseCellSelection: STOP BCCH READ
Line 799: [RR_SRRC]Cell search already paused due to DSDS Error, Send ACK to SRRC
Line 810: [RR_SRRC] rr_GrrSrrcPauseCellSelection: Pause cell selection is wrong state, rr_State(%d)
Line 835: [RR_SRRC]rr_SrrcStartDiscreteCellSearch: Start Discrete Cell Search
Line 840: [RR_SRRC]RR not proper state to Start Discrete Cell Search
Line 865: [RR_SRRC]rr_SrrcStopDiscreteCellSearch: Start Discrete Cell Search
Line 877: [RR_SRRC]Error Case: Discrete cell search is not on!!!
Line 882: [RR_SRRC]RR not proper state to Start Discrete Cell Search
Line 908: [RR_SRRC]Copy rr_BplmnMsg
Line 936: [RR_SRRC]Release rr_BplmnMsg
Line 944: [RR_SRRC]already released
Line 1099: [RR_SRRC]rr_StartBplmnProcedure: BplmnProcType(%d)
Line 1114: [RR_SRRC]rr_StartBplmnProcedure: Wrong Bplmn Proc(%d)
Line 1141: [RR_SRRC]rr_SaveBplmnRequestForSrrcGrant: Saving Bplmn Msg, rr_BplmnMsg(%d)
Line 1145: ERROR RtkGetMemory returned NULL
Line 1150: [RR_SRRC]rr_BplmnMsg saved
Line 1163: [RR_SRRC]Resel Cause stored(%d)
Line 1179: [RR_SRRC]Wrong Resel Cause stored(%d): REJECT with WAIT
Line 1184: [RR_SRRC] Resel Proc not started, reset to IDLE
Line 1208: [RR_SRRC]Stop BPLMN as Other stack is Busy
Line 1236: [RR_SRRC]rr_GrrAbortIratProcedure: Abort Ongoing Irat Procedure
Line 1265: [RR_SRRC]rr_GrrAbortCellReselProcedure: Abort Ongoing Reselection Procedure
Line 1293: [RR_SRRC]rr_SaveIratRequestForSrrcGrant: Saving IRAT Message, rr_IratMsg
Line 1303: [RR_SRRC] rr_IratMsg already stored
Line 1309: [RR_SRRC] IRAT Req Msg pointer is NULL
Line 1328: ERROR RtkGetMemory returned NULL
Line 1333: [RR_SRRC]rr_IratMsg saved
Line 1349: [RR_SRRC] rr_IratLteMsg already stored
Line 1355: [RR_SRRC] IRAT Req Msg pointer is NULL
Line 1374: ERROR RtkGetMemory returned NULL
Line 1381: [RR_SRRC]rr_IratLteMsg saved
Line 1388: [RR_SRRC]rr_InterRatStatus Not Valid
Line 1415: [RR_SRRC]CopyIratMsg to trigger IRAT: rr_InterRatStatus(%d)
Line 1426: ERROR RtkGetMemory returned NULL
Line 1443: ERROR RtkGetMemory returned NULL
Line 1475: [RR_SRRC] rr_ReleaseIratMsg: rr_InterRatStatus(%d), rr_IratMsg(%x), rr_IratLteMsg(%x)
Line 1489: [RR_SRRC] rr_IratMsg & rr_IratLteMsg already released
Line 1513: [RR_SRRC]rr_StartIratProcedure: rr_InterRatStatus(%d)
Line 1523: [RR_SRRC] IRAT pointer is NULL
Line 1542: [RR_SRRC] IRAT pointer is NULL
Line 1562: [RR_SRRC] IRAT pointer is NULL
Line 1580: [RR_SRRC] IRAT pointer is NULL
Line 1600: [RR_SRRC] IRAT pointer is NULL
Line 1681: [RR_SRRC]rr_SrrcResumePsSignaling: rr_RlcSuspensionState(%d)
Line 1686: Resume RLC after DSDS Suspend 
Line 1712: [RR_SRRC]rr_SrrcStartPsSignaling: Direction(%d)
Line 1727: MemAlloc fail
Line 1735: [RR_SRRC]Resume RLC after DSDS Suspend 
Line 1765: [RR_SRRC]rr_SrrcStopPsSignaling: Direction(%d)
Line 1779: MemAlloc fail
Line 1814: Resel has been already requested
Line 1906: [RR_SRRC]Suspend Rat CNF is pending, Ignore Signaling procedure.
Line 1910: [RR_SRRC]Process pending NAS Signaling
Line 1930: [RR_SRRC]No Saved Signaling message to Process
Line 1950: [RR_SRRC]rr_SrrcSuspendDataRequest
Line 1979: [RR_SRRC]rr_SrrcSuspendDataCnf
Line 2016: [RR_SRRC]rr_CheckSrrcIfClinetRegisteredAsPassiveRat
Line 2036: [RR_SRRC]rr_SrrcActionHandlerForResReq
Line 2051: [RR_SRRC]rr_SrrcActionHandlerForUpdate
Line 2065: NAS SIG already updated to SRRC, Donot update IDLE to SRRC
Line 2087: rr_WaitSiAfterResel is set, Donot Change SRRC state to IDLE, RESEL continue.
Line 2139: ACCESS In Progress or PS NAS SIG ongoing
Line 2150: GRR is in Packet Transfer State
Line 2189: PS NAS SIG -> PS AS SIG possible with SIG_END
Line 2197: EST REQ pending CS NAS SIG -> PS AS SIG Ignored
Line 2244: Not suitable to update state (%d) when Curr state(%d)
Line 2254: [RR_SRRC]rr_SrrcActionHandlerForResReqGrant
Line 2265: NasSigOng, Continue without requesting Srrc for Cell Selection
Line 2270: Requesting Srrc for Cell Selection
Line 2279: Requesting Srrc for Cell Selection
Line 2294: [RR_SRRC]rr_SrrcActionHandlerForResRejWait
Line 2307: Requesting Srrc for Cell Selection
Line 2328: Wait for SRRC grant 
Line 2338: [RR_SRRC]rr_SrrcActionHandlerForResReject: SrrcProc(%d)
Line 2342: [RR_SRRC] BPLMN PROC rejected. Let MM retry again!!!
Line 350: [RR_SRRC]ClientId is Invalid, Resource request to SRIF not allowed!!!
Line 359: [RR_SRRC]ReqProc[%s] CurrProc[%s] CurrProcState[%s]
Line 365: [RR_SRRC]RR_SRRC_REQ_PROC_REJECT
Line 369: [RR_SRRC]ReqProcAction[%s]
Line 424: [RR_SRRC]CurrProc[%s] CurrProcState[%s]
