Line 90: %s
Line 190: SetAsConfigNeededByDbUpdate: AsConfigStage(%d) AsConfigNeeded(%d)
Line 197: %s
Line 211: %s
Line 222: %s
Line 232: %s
Line 242: %s
Line 254: %s
Line 264: %s
Line 274: %s
Line 286: %s
Line 287: [MUI] rrcMui : (%d)
Line 293: %s
Line 305: [MUI] SetMuiList nasMui: (%d), sendMui: (%d), nasCnfNeed: (%d), msgType: (%d), 
Line 310: %s
Line 314: [MUI] new MuiList added.
Line 320: %s
Line 331: [MUI] Mui check success sendMui: (%d), receivedMui: (%d), nasCnfNeed: (%d), msgType: (%d), nasMui: (%d)
Line 339: [MUI] Mui check failure receivedMui: (%d)
Line 347: %s
Line 359: [MUI] Send(-->MM_RRC_EST_CNF) in CheckMuiListForEstCnf
Line 375: [MUI] Terminate RRC_NR_PRCD_SA_RRC_SETUP Procedure
Line 385: [MUI] Terminate RRC_NR_PRCD_SA_CONN_FALLBACK Procedure
Line 394: [MUI] No EST_REQ in mui List
Line 401: %s
Line 415: [MUI] Send(-->MM_RRC_DATA_CNF)
Line 439: [MUI] No RESUME_COMPLETE in mui List
Line 446: %s
Line 458: [MUI] Send(-->MM_RRC_DATA_CNF)
Line 467: [MUI] No DATA_REQ in mui List
Line 474: %s
Line 493: %s
Line 513: %s
Line 515: [MUI] Mui remove sendMui: (%d),  nasCnfNeed: (%d), msgType: (%d), nasMui: (%d)
Line 522: %s
Line 523: -----------------------MUI LIST-----------------------
Line 524: [MUI] MuiList Size: %d
Line 528: nasMui: %d   |sendMui: %d   |nasCnfNeed: %d   |msgType: %d
Line 534: %s
Line 542: [MUI] No any info in NrRrcMuiList
Line 555: [MUI] Send(-->MM_RRC_EST_REJ)
Line 564: [MUI] Send(-->MM_RRC_DATA_CNF)
Line 575: %s
Line 605: Unexpected procedure!!
Line 608: GetDataCnfCauseFromCurPbd::DataCnfCause = %d
Line 631: NasDedicatedInfoList: new NasDediInfo added.
Line 642: NasDedicatedInfoList: Get nasMui %d in NasDedicatedInfoList
Line 650: NasDedicatedInfoList: No nasMui %d in NasDedicatedInfoList
Line 667: NasDedicatedInfoList: nasMui %d is removed in NasDedicatedInfoList
Line 674: NasDedicatedInfoList: No nasMui %d in NasDedicatedInfoList
Line 681: %s
Line 687: NasDedicatedInfoList: No any info in NasDedicatedInfoList
Line 698: NasDedicatedInfoList: Send(-->MM_RRC_DATA_CNF) of pending msg
Line 705: NasDedicatedInfoList: nasMui %d is removed in NasDedicatedInfoList
Line 718: NasDedicatedInfoList: Pending nasMui %d in NasDedicatedInfoList
Line 725: NasDedicatedInfoList: No nasMui %d in NasDedicatedInfoList
Line 732: %s
Line 742: NasDedicatedInfoList: No any info in NasDedicatedInfoList
Line 757: [UAC] Barring check already done
Line 766: [RRC][UAC] No SIB1 Db. Access attempt is allowed.
Line 766: [RRC][UAC] No SIB1 Db. Access attempt is allowed.
Line 775: NasDedicatedInfoList: Pending Msg is triggered in RRC_CONNECTED
Line 785: NasDedicatedInfoList: Pending Msg is triggered in RRC_INACTIVE
Line 798: NasDedicatedInfoList: Pending Msg is discarded due to UAC check fail
Line 821: %s
Line 822: -----------------------Nas Dedicated Info LIST-----------------------
Line 823: NasDedicatedInfoList: Size: %d
Line 827: | nasMui: %d  |nasMsgLength: %d |Pending status: %d
Line 833: %s
Line 860: [DrbInfoForLoopBack] EpsBearerId : %d
Line 866: [DrbInfoForLoopBack] pduSessionId : %d
Line 871: [DrbInfoForLoopBack] DrbToAddMod[%d] was released
Line 888: [DrbInfoForLoopBack] DrbIdForLB: %d, RbTypeForLB: %d, RbConfStatusForLB: %d, RbDirectionForLB: %d
Line 897: [DrbInfoForLoopBack] DrbCnt: %d
Line 918: FreeEstablishReqMessage: Free establish Request message successfully
Line 932: CheckDataReqBeforePerforming : Message is pended while RRC_CONNECTED
Line 937: CheckDataReqBeforePerforming : Ulinformation transfer is triggered while RRC_CONNECTED
Line 943: CheckDataReqBeforePerforming : RRC Resume procedure is triggered while RRC_INACTIVE
Line 957: [UEIdentity] : Set C-RNTI : %d
Line 968: [UEIdentity] : Get valid C-RNTI : %d
Line 973: [UEIdentity] : Fail to Get valid C-RNTI
Line 983: [UEIdentity] : Clear C-RNTI
Line 994: [UEIdentity] : Set Full I-RNTI : [0x%x%08x]
Line 1002: [UEIdentity] : Get valid Full I-RNTI : [0x%x%08x]
Line 1007: [UEIdentity] : Fail to Get valid Full I-RNTI
Line 1017: [UEIdentity] : Clear Full I-RNTI
Line 1025: [UEIdentity] : Set Short I-RNTI : %d
Line 1033: [UEIdentity] : Get valid Short_I_RNTI : %d
Line 1038: [UEIdentity] : Fail to Get valid Short_I_RNTI
Line 1048: [UEIdentity] : Clear Short_I_RNTI
Line 1062: TriggeringRnaUpdate : RNA update can't be triggered in %d 
Line 1093: [RRC][UAC] No SIB1 Db. Access attempt is allowed.
Line 1093: [RRC][UAC] No SIB1 Db. Access attempt is allowed.
Line 1099: TriggeringRnaUpdate : RNA update is not triggered by UAC check fail. PendingRnaUpdate set true.
Line 1105: TriggeringRnaUpdate : RNA update is triggered
Line 1127: clear NrDb success!
Line 1136: clear RevertDb success!
Line 1144: commitConfigDbToRevertDb success!
Line 1152: RevertToPreviousDb success!
Line 1163: No configured DRB. ActiveDataStatus: 0
Line 1180: Set ActiveDataStatus pdu session id %d
Line 1185: wrong pdu session Id %d
Line 1190: ActiveDataStatus: %d
Line 1231: SRB2 is established. So UlInfoTransfer message will be sent by SRB2
Line 1236: SRB2 is not established yet. So UlInfoTransfer message will be sent by SRB1
Line 1243: %s
Line 1253: NRDC mode
Line 1259: AvailFastMcgLinkRecovery(%d), CurScgState(%d), T316 State(%d), ScgFailureReporting(%d), SCG T304 State(%d)
Line 1309: [RLF] AS security has not been activated!
Line 1323: [RLF] AS security has been activated, but SRB2 and at least one DRB have not been setup
Line 1364: [RLF] Local release has been requested!
Line 1375: [RRC_MDT] MCG RRE Imm MDT RLF, Trigger IDLE MEAS Procedure
Line 1392: [RLF] AS security has been activated and SRB2 and at least one DRB have been setup
Line 1411: SetservingPhyCellId(%d)
Line 1416: GetservingPhyCellId(%d)
Line 1425: SetSourceArfcn(%d)
Line 1430: GetSourceArfcn(%d)
Line 1441: SRB2 and at least one DRB setup OK
Line 1446: No SRB2 or at least one DRB setup
Line 1447: SrbRbInfoBitmask: %d
Line 1448: DrbRbInfoBitmask: %d
Line 1481: Set to spare1 for cause %d
Line 1493: %s
Line 1509: Assembled data length (%d)
Line 1521: Data : 
Line 1530: %s
Line 1540: Message segment no (%d) is freed
Line 1552: %s
Line 1556: [IDLE_MEAS] MeasIdleReportPresent(%d)
Line 1562: [IDLE_MEAS] IdleModeMeasurementsEutra(%d), IdleModeMeasurementsNr(%d)
Line 1568: [IDLE_MEAS] IdleMeas result is available
Line 1578: %s
Line 1589: [IDLE_MEAS] MeasIdleConfigPresent(%d), MeasIdleState(%d) 
Line 1596: [IDLE_MEAS] IdleModeMeasurementsEutra(%d), IdleModeMeasurementsNr(%d)
Line 1615: [IDLE_MEAS] Do not trigger IDLE_MEAS procedure
Line 1622: %s
Line 1634: [IDLE_MEAS] Current Arfcn(%d), CellId(%d)
Line 1636: [IDLE_MEAS] NumValidityAreaList(%d)
Line 1660: [IDLE_MEAS] Current Cell is not exist in MeasIdleConfig ValidityAreaList. Release Config
Line 1663: [IDLE_MEAS] Trigger IDLE_MEAS Procedure for release Idle Measurement config
Line 1676: Discard UL message segment in RLF case. CurrSegmentNum(%d)
Line 1689: %s
Line 1701: [NRUECAPA] Invaild NR_MAX_PDCP_SDU_SIZE %d!!
Line 1710: [NRUECAPA] UL Message segment number exceeded maximum value(%d)
Line 1720: ULDedicatedMessageSegment: UeCapa message length(%d), LastSegNum(%d), LastSegLength(%d)
Line 1765: IsRetransferUeAssistanceInfo UeAssistantProcTime[%d] (%d) curTime(%d) elapsedTime(%d)
Line 1773: OtherConfigPresentBitMask(0x%x)
Line 1780: OtherConfigV1540PresentBitMask(0x%x)
Line 1787: OtherConfigV1610PresentBitMask(0x%x)
Line 1794: OtherConfigV1610PresentBitMask(0x%x)
Line 1801: OtherConfigV1610PresentBitMask(0x%x)
Line 1808: OtherConfigV1610PresentBitMask(0x%x)
Line 1815: OtherConfigV1610PresentBitMask(0x%x)
Line 1822: OtherConfigV1610PresentBitMask(0x%x)
Line 1829: OtherConfigV1610PresentBitMask(0x%x)
Line 1861: Get PreRatResumeState %d
Line 1868: Set PreRatResumeState %d
Line 1873: Get SkipAllStopInCellConfig %d
Line 1880: Set SkipAllStopInCellConfig %d
Line 1885: Get PreWithSyncState %d
Line 1892: Set PreWithSyncState %d
Line 1922: [DecodeReconfigMsg] msg decode fail. CodecReturnCode(%d) CodecErrorStruct(%s)
Line 1930: decodeBuffer is null
Line 1977: condConfigListIdx(%d) & (%d) rrcReconfiguration.length(%d) choMsgDecodeState(%d)
Line 1984: [GetChoCandidateCell] targetPhyCellId(%d) phyCellId in reconfigWithSync(%d)
Line 1985: [GetChoCandidateCell] targetArfcn(%d) absoluteFrequencySSB in reconfigWithSync(%d)
Line 1996: [GetChoCandidateCell] matched
Line 2008: [CHO] DecodeCHOReconfigMsg fail
Line 2027: [GetChoCandidateCell] There is no CellGroupConfig in message
Line 2048: [GetChoCandidateCell] There is no previous cell info
Line 2061: [GetChoCandidateCell] targetPhyCellId(%d) phyCellId in reconfigWithSync(%d)
Line 2062: [GetChoCandidateCell] targetArfcn(%d) absoluteFrequencySSB in reconfigWithSync(%d)
Line 2074: [GetChoCandidateCell] matched
Line 2084: %s
Line 2105: %s
Line 2128: Target cell is one of the CHO candidate cells. run CHO.
Line 2161: %s
Line 2170: MeasConfigPresent has no value. Invalid meas config.
Line 2180: MeasConfigScgPresent has no value. Invalid meas config.
Line 2188: Invalid CellGroupId
Line 2197: MeasId(%d), targetMeasId(%d)
Line 2198: MeasIdListIdx (0x%x%08x), (u64)1 << measIdListIdx(%d)
Line 2208: pVarMeasConfig->MeasIdList[%d].MeasObjId is invalid.
Line 2224: %s
Line 2230: Support NR positioining
Line 2237: Get EndcPreScellRelState %d
Line 2244: Set EndcPreScellRelState %d
Line 2276: %s
Line 2284: validTimeInfo = %d
Line 2331: %s
Line 2338: Registry NrNetworktimeinfo : (%d)
Line 2340: NetworkTimeReq(%d) 
