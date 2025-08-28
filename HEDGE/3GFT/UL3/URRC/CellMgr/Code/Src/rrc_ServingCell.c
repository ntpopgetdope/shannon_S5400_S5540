Line 330: ERROR creating TPeriodicInterFReselMeas Timer
Line 353: ERROR unable to register for CnxMgr state change notification!
Line 365: ERROR creating TBcchModification Timer
Line 406: ERROR deleting TBcchModification timer
Line 411: ERROR deleting TPeriodicInterFReselMeas timer
Line 500: ERROR stopping TBcchModification Timer
Line 650: ServingCell_CommonChannelChange Barred=%d S5=%d S6=%d S11=%d S12=%d
Line 2604: Invalid BandId of ServingCell (%d)
Line 2620: ServingFreq %d: SirMeasured %d (SirStored %d - BandOffset(%d))
Line 2631: PeriodicInterFreqCellResel is disabled for CS
Line 2646: TPeriodicInterFReselMeasExpired & ImmediateInterFReselRequired ->  Delay PeriodicInterFResel
Line 2667: ERROR starting TPeriodicInterFReselMeas timer
Line 2672: TPeriodicInterFReselMeas timer started (TmId=%d) : %i sec
Line 2681: ERROR starting TPeriodicInterFReselMeas timer
Line 2686: TPeriodicInterFReselMeas timer started (TmId=%d) : %i sec
Line 2857: Cannot find Mib. Maybe CSFB case where Serving cell is empty. Ignore SysInfoChange
Line 2861: Notified of SysInfoChange, CurrentMibTag: %i, NewMibValueTag: %i 
Line 2880: BCCH Modfication Info present: CurrentSFN: %d, SFNDiff: %d, BcchModificationTime: %d
Line 2895: ERROR stopping TBcchModification Timer
Line 2904: ERROR starting TBcchModification timer
Line 2911: TBcchModification timer started (TmId=%d) : %i ms for (UARFCN%i/PSC%i)
Line 6242: Class:ServingCell: Unrequested SibId (%i) received
Line 6257: Class:ServingCell: Unrequested SibId (%i) received
Line 6778: SendServCellInfoInd : Serv_BandId(%d), Serving_Uarfcn(%d), PSC(%d), RAC(%d), LAC(%d)
Line 6782: Wrong UARFCN(%d), BandId(%d) were detected so it won't be updated to SIPC
Line 7212: ERROR Illegal State
Line 7222: ERROR Illegal State
Line 7230: BchReleased at Status %d
Line 7238: ServingCell: ERROR Illegal State
Line 7245: ServingCell: ERROR Illegal State
Line 7855: SIB 15 present
Line 7859: SIB 15 not present
Line 7869: SIB 15.1 present
Line 7877: SIB 15.2 present
Line 7885: SIB 15.3 present
Line 7926: Clear PeriodicInterFReselMeas
Line 7969: PeriodicInterFReselMeasCount is already zero
Line 8005: Ignore SIB19 read request during CellSelection in Progress
Line 8023: SIB19 Subscription Not Required (SIB19 Sched %d, SIB19 %d)
Line 8028: UpdateSib19 Not Available (state %d)
Line 8081: neighbourBandIds = %d
Line 8110: [PConflict] PchConflictInd
Line 2324: PeriodicInterFreqCellResel is disabled for CS
Line 2354: ERROR stopping TPeriodicInterFReselMeas Timer
Line 2364: ERROR starting TPeriodicInterFReselMeas timer
Line 2369: TPeriodicInterFReselMeas timer started (TmId=%d) : %i sec
Line 2378: ERROR starting TPeriodicInterFReselMeas timer
Line 2383: TPeriodicInterFReselMeas timer started (TmId=%d) : %i sec
Line 2403: CellToAssim is NULL
Line 2413: Reselected to new Serving Cell (%i,%i)
Line 2415: Reselected to new Serving Cell DL UARFCN %i, CPICH %i
Line 2425: Selected new Serving Cell (%i,%i)
Line 2427: Selected new Serving Cell DL UARFCN %i, CPICH %i
Line 2460: CellToAssim->CellSelReselInfoPtr  is NULL
Line 2515: ERROR : Cannot register CallBack to CellReselecter_p->CellReselNotificnSubsr for ServingCell
Line 2556: ERROR Illegal State
Line 1825: rrc_ServingCell_AssimilateCandidate: We don't need to update VisitedCsgList for same cell
Line 1867: LastSourCellInfo present: RatType(%d) Arfcn(%d) PhyCellId(%d) CellId(%d)
Line 1896: LastSourCellInfo from OtherRat is present: RatType(%d) Arfcn(%d) PhyCellId(%d) CellId(%d)
Line 1952: AssimilatedCell is already stored ActiveCsgList in VisitedCsgList
Line 1969: Cannot get SourceCellInfo
Line 2218: AssimilateCandidate => Old (Uarfcn %d, Cpich%d), Current (Uarfcn %d, Cpich %d)
Line 2256: Not use the sys info container to update the ServingCellSysInfoCache
Line 2269: OOS in RRC Cnx Establishing : only need Idle mode SIBs
Line 1640: CellReselection parameters: IsHcsInUse (%s)
Line 1670: Null pointer: Sib11bis
Line 1677: HOLD ON SIB11bis as SIB 11 is not present
Line 2062: SIB19 Scheduled %d
Line 2066: ERROR MibPtr is NULL
Line 2070: No SIB19Ptr W2L_Threshold Reset
Line 2103: [DM Update] SIB3 CellId(0x%X)
Line 2152: [DM Update] CN DrxCycleLengthCoef(%d)
Line 910: LTE Supported
Line 917: ProcessLTERatInfo: No LTE Rat Info(SIB19) in ServingCell_p 3G Cell -> IsLTERatInfoIncluded(%d)
Line 704: Processing SIB 1
Line 788: SIB 1 process constants/timers.
Line 796: PrivProcessSib1: IdleModeIE is NULL
Line 805: PrivProcessSib1: IdleModeIE is NULL
Line 1148: ProcessCellSelReselInfo: ASN.1 Value - Non HCS Mode - Ncr(%d) TcrMax(%d) TcrMaxHyst(%d) 
Line 1191: ProcessCellSelReselInfo: ASN.1 Value TReselectionSPch(%d) TReselSFach(%d)
Line 1206: CellReselection parameters: QualityMeasure (%s), TReselection (%i)
Line 1240: >>> access control class : %d
Line 1255: SelPlmnId PLMN Id: MCC(%d%d%d) MNC(%d%d) 
Line 1259: MIBPlmnId PLMN Id: MCC(%d%d%d) MNC(%d%d) 
Line 1263: rrc_MIB_IsMultiplePLMNPresent is FALSE
Line 1283: rrc_MIB_IsMultiplePLMNPresent is TRUE
Line 1288: [DSAC]Selected PLMN id is equal to PLMN id in MIB (with multi PLMN list)
Line 1312: [DSAC]Selected PLMN id is equal to PLMN id in Multiple PLMN list
Line 1364: [DSAC]ProcessCellSelReselInfoCurrent Dsac SIB VAlue %d,Previous Dsac SIB value is %d
Line 1369: [DSAC]ProcessCellSelReselInfoDomain Access Class is present %d
Line 1371: [DSAC]ProcessCellSelReselInfoPsDomainAccessRestriction %d CsDomainAccessRestriction = %d
Line 1378: [DSAC]ProcessCellSelReselInfoDomain Access Class is NOT present %d
Line 1392: [PPAC]ProcessCellSelReselInfoLoc/Reg barred for Domain %d
Line 1397: [PPAC]ProcessCellSelReselInfoPagingPermission barred for Domain %d
Line 1403: [PPAC]ProcessCellSelReselInfoNo Domain barred for Loc/Reg or Paging
Line 1408: [PPAC]ProcessCellSelReselInfoCurrent PPAC Value %d,Previous PPAC value is %d
Line 977: ProcessCellSelReselInfo:ServingCell Qrxlevmin(%d) = Qrxlevmin(%d) + DeltaQrxlevmin(%d)
Line 990: ServingCell parameters: MaxAllowedUlTxPower (%i) dBm, Qrxlevmin (%i) dBm, Qqualmin (%i) dB
Line 1042: ProcessCellSelReselInfo:ServingCell Qhcs(%d) = Qhcs(%d) + DeltaQhcs(%d)
Line 1045: ServingCell HcsPrio set to %d
Line 7150: ServingCell: ERROR Illegal State
Line 6901: ServingCell: Clear ForcedSib11Sib12Skipping
Line 6928: NumSysInfoContainer == 0
Line 3275: GenMsg(GenerateEstablishingRrcCnx) is NULL
Line 3292: GenMsg(GenerateSIB7Received) is NULL
Line 3297: ERROR Illegal State
Line 3313: ServingCell: RRC CNX in progress, SIB7 requested & EarlySIbReading in progress => Abort Early SIB Reading
Line 3321: ServingCell::ReadSib: GenMsg is NULL
Line 3340: SIB 12 read from SCellSysInfoCache
Line 3349: SIB12 present in SCellSysInfoCache
Line 3355: SIB12 not present in SCellSysInfoCache
Line 3378: copy SIB12 from the SCellSysInfoCache
Line 3385: ERROR Illegal State
Line 3401: GenMsg is NULL
Line 3217: copy in the SCellSysInfoCache :  %d
Line 3225: Critical : No sib in CampedSysInfoContainer : %d
Line 6316: Class:ServingCell: SibId (%i) for unknown  Freq: %i, Cpich: %i
Line 3445: copy SIB7 in the SCellSysInfoCache
Line 3455: GenMsg(GenerateSIB7Received) is NULL
Line 3460: Critical : No SIB7 in CampedSysInfoContainer
Line 3476: ServingCell: RRC CNX in progress, SIB7 requested & EarlySIbReading in progress => Abort Early SIB Reading
Line 3484: ServingCell::ReadSib: GenMsg is NULL
Line 3495: Ignore SIB19 reading in Cnx Establishing
Line 3501: Ignore SIB18 reading in Cnx Establishing
Line 3522: ERROR Illegal State
Line 3536: WARNING: ReadSib request Sib: %s not actioned as it is not valid in the current state
Line 3541: WARNING: ReadSib request Sib: %s not actioned as it is not valid in the current state
Line 3568: AwaitingSibReadRequest_NotifySysInfoChange: Ignore this during RRC Connection Req in Progress
Line 3585: AwaitingSibReadRequest_NotifySysInfoChange: Ignore this cause of mismatchbetween TBcchModification_Uarfcn%i PSC%i <-> Current Uarfcn%i Psc%i
Line 3597: AwaitingSibReadRequest_NotifySysInfoChange: Ignore this during CellSelection in Progress
Line 3608: AwaitingSibReadRequest_NotifySysInfoChange: Ignore this in Cell_DCH
Line 7334: PrivSubscribeToSibs: Unable to Generate AgpsSibReadStatus Message
Line 7345: PrivSubscribeToSibs: his->UpdateAgpsSibsRecvd is not Set
Line 7354: ServingCell: ERROR Illegal State
Line 3673: set Deferred Meas. Status in Serving Cell
Line 3691: Clear subordinated SIB with SIB%d
Line 3728: ERROR Illegal State
Line 3748: ServingCell: ERROR Illegal State
Line 4077: ReadingValidSibs_BchReadError: GenMsg is NULL
Line 4091: [ReadingValidSibs] CancelSibSubscription already in progress (WaitingForUpdatedSibs flag %d)
Line 4098: ERROR Illegal State
Line 3923: Connected Mode SIBs are taken from SCellSysInfoCache
Line 3938: No outstanding SIB subscription
Line 3946: ERROR Illegal State
Line 3788: copy SIB11 from the SCellSysInfoCache
Line 3794: SIB11 not present in SCellSysInfoCache
Line 3804: copy SIB12 from the SCellSysInfoCache
Line 3810: SIB12 not present in SCellSysInfoCache
Line 3820: copy SIB11bis from the SCellSysInfoCache
Line 3826: SIB11bis not present in SCellSysInfoCache
Line 3836: copy SIB4 from the SCellSysInfoCache
Line 3842: SIB4 not present in SCellSysInfoCache
Line 3852: copy SIB6 from the SCellSysInfoCache
Line 3857: SIB6 not present in SCellSysInfoCache
Line 7532: ReadingValidSibs_ReadAgpsSibs
Line 7549: SIB15 Not Scheduled
Line 7558: SIB15.1 Scheduled
Line 7570: SIB15.1 Not Scheduled
Line 7580: SIB15.2 Scheduled
Line 7593: SIB15.2 Not Scheduled
Line 7604: SIB15.3 Scheduled
Line 7616: SIB15.2 Not Scheduled
Line 7638: No outstanding SIB subscription
Line 7646: ERROR Illegal State
Line 7652: AGPS Sibs not scheduled. Inform MeasController
Line 7658: Error creating AgpsSibReadStatus Message
Line 5237: GenMsg(GenerateEstablishingRrcCnx) is NULL
Line 5248: copy SIB7 in the SCellSysInfoCache
Line 5256: Critical : No SIB7 in CampedSysInfoContainer
Line 5266: copy SIB12 in the SCellSysInfoCache
Line 5274: No SIB12 in CampedSysInfoContainer. Maybe not scheduled
Line 5284: GenMsg(GenerateSIB7Received) is NULL
Line 5291: Cancel Current Subscription & Wait in Same State for release
Line 4182: [ReadingValidSibs] CancelSibSubscription already in progress (WaitingForUpdatedSibs flag %d)
Line 4193: ERROR Illegal State
Line 5007: ServingCell: RRC CNX in progress, SIB7 requested & EarlySIbReading in progress => Abort Early SIB Reading
Line 5015: ServingCell::ReadSib: GenMsg is NULL
Line 5026: Ignore SIB19 reading in Cnx Establishing
Line 5034: Ignore SIB7 reading that is already requested
Line 5048: isResubscribReq = %d
Line 5322: ReadingValidSibs_NotifySysInfoChange: Ignore this during RRC Connection Req in Progress
Line 5337: ReadingValidSibs_NotifySysInfoChange: Ignore this cause of mismatchbetween TBcchModification_Uarfcn%i PSC%i <-> Current Uarfcn%i Psc%i
Line 4230: ServingCell_p->common.NewMibPtr is NULL
Line 4234: MIB value tag=%d
Line 4258: Received new Mib tag <%i> which matches that received in SysInfo Change notification. Current Mib tag <%i>
Line 4283: Received new Mib tag <%i> which not matches that received in SysInfo Change notification(%d). Current Mib tag <%i>
Line 4305: Received new Mib tag <%i>different to SysInfo Change notification <%i>. Current Mib tag <%i>
Line 4314: Received new Mib tag <%i>. Current Mib tag <%i>
Line 4372: Old PLMN Id is part of the Shared Network
Line 4399: Shared PLMN rejected due to PlmnId not matching Target PlmnId
Line 4417: None of the new PLMNs in the Shared list are selectable, triggering PLMN Search internally
Line 4437: New PLMN Id from New MIB is Different from Old PLMN Id
Line 4456: New PLMNs in MIB is not selectable, triggering PLMN Search internally
Line 4477: ServingCell_p->common.NewMibPtr is NULL
Line 4490: Resubscribing to Mib. Resubscripton number: %i Maximum number of resubscriptions: %i
Line 4528: Maximum number of Mib resubscriptions: %i has been reached - stopping Mib resubscriptions
Line 4548: Ptr: ServingCell_p->common.NewMibPtr == NULL
Line 7029: ServingCell: ERROR Illegal State
Line 7055: Creating entry and saving SIBs after VT Change successful
Line 7062: ServingCell: ERROR Illegal State
Line 7082: Creating entry and saving SIBs after VT Change successful
Line 7092: All Agps Sibs received. Send AgpsSibReadStatus to Meascontroller
Line 7098: PrivSubscribeToSibs: Unable to Generate AgpsSibReadStatus Message
Line 7124: NumMibResubscriptions %d
Line 7128: ServingCell: ERROR Illegal State
Line 4740: GenMsg is NULL
Line 4821: Sib Received is %d and Ignored
Line 4828: Sib Received is %d
Line 4855: Sib Received is %d
Line 4863: Class:ServingCell: Unexpected Extension SibId (%i)
Line 4892: Class:ServingCell: Unexpected SibId (%i)
Line 4938: GenMsg is NULL
Line 4941: Change in SIB5/SIB6 so new PCH configuration should be done
Line 4967: GenMsg is NULL
Line 1534: ProcessCellSelReselInfoCurrent Dsac SIB VAlue %d,Previous Dsac SIB value is %d
Line 1539: PrivProcessSib3or4Current PPAC Value %d,Previous PPAC value is %d
Line 1704: Null pointer: Sib11bis
Line 1709: HOLD ON SIB11bis as SIB 11 is not present
Line 5115: ReadingValidSibs_BchReadError: GenMsg is NULL
Line 5119: ServingCell received Bch Read Error  whilst waiting for Sib7 - informing CnxMgr
Line 5129: ServingCell received Bch Read Error  and not waiting for Sib7 so starting Out Of Service processing
Line 5148: PrivSubscribeToSibs: Unable to Generate AgpsSibReadStatus Message
Line 5159: PrivSubscribeToSibs: his->UpdateAgpsSibsRecvd is not Set
Line 5184: ERROR Illegal State
Line 5390: [ReadingValidSibs] CancelSibSubscription already in progress (WaitingForUpdatedSibs flag %d)
Line 5408: Clear subordinated SIB with SIB%d
Line 5426: ServingCell: ERROR Illegal State
Line 5484: GenMsg is NULL
Line 5496: [ReadingValidSibs] CancelSibSubscription already in progress (WaitingForUpdatedSibs flag %d)
Line 5503: ServingCell: ERROR Illegal State
Line 5981: ServingCell: ERROR Illegal State
Line 5993: Subscription Cancelled while Waiting in Same State for release
Line 6005: SIB 12 read from SCellSysInfoCache
Line 6014: SIB12 present in SCellSysInfoCache
Line 6020: SIB12 not present in SCellSysInfoCache
Line 6044: copy SIB12 from the SCellSysInfoCache
Line 6053: ERROR Illegal State
Line 4121: [ReadingValidSibs] CancelSibSubscription already in progress (WaitingForUpdatedSibs flag %d)
Line 4128: ERROR Illegal State
Line 4022: Connected Mode SIBs are taken from SCellSysInfoCache
Line 4037: No outstanding SIB subscription
Line 4153: [ReadingValidSibs] CancelSibSubscription already in progress (WaitingForUpdatedSibs flag %d)
Line 4160: ERROR Illegal State
Line 7693: ReadingValidSibs_ReadAgpsSibs
Line 7699: SIB15 Scheduled
Line 7712: SIB15 Not Scheduled
Line 7721: SIB15.1 Scheduled
Line 7734: SIB15.1 Not Scheduled
Line 7744: SIB15.2 Scheduled
Line 7757: SIB15.2 Not Scheduled
Line 7768: SIB15.3 Scheduled
Line 7781: SIB15.2 Not Scheduled
Line 7804: No outstanding SIB subscription
Line 7812: ERROR Illegal State
Line 7818: AGPS Sibs not scheduled. Inform MeasController
Line 7824: Error creating AgpsSibReadStatus Message
Line 5621:  >> Clear subordinated SIB with SIB%d
Line 5631: ServingCell: ERROR Illegal State
Line 5558: ServingCell: ERROR Illegal State
Line 3079: Class:ServingCell: %s, Id(%i)  is no longer scheduled
Line 3085: Class:ServingCell: %s, Id(%i) tag has changed
Line 7183: ServingCell: ERROR Illegal State
Line 7190: ServingCell: ERROR Illegal State
Line 7165: ServingCell: ERROR Illegal State
Line 5730: ERROR Illegal State
Line 188: Invalid CnxMgr Pending state: CellDch - using CellFach as the pending state instead
Line 850: [ProcessUtraPrioInfo] Error : SCSelInfoInstId is NULL..!!
Line 857: [ProcessUtraPrioInfo] SYS_INFO_PRIORITY selected. ServPriority(%d) was from SIB19
Line 872: [ProcessUtraPrioInfo] DEDICATED_PRIORITY / ServPriority(%d) was from PriorityInfoList
Line 878: DEDICATED_PRIORITY / Error to get Priority from UARFCN(%d) of PriorityInfoList. So Clearing the ServingPriority(%d)
Line 6200: ERROR stopping TBcchModification Timer
Line 6410: PeriodicInterFreqCellResel is disabled for CS
Line 6444: Class:ServingCell:Unexpected State Change Notification
Line 6494: ERROR stopping TPeriodicInterFReselMeas Timer
Line 6504: ERROR starting TPeriodicInterFReselMeas timer
Line 6509: TPeriodicInterFReselMeas timer started (TmId=%d) : %i sec
Line 6518: ERROR starting TPeriodicInterFReselMeas timer
Line 6523: TPeriodicInterFReselMeas timer started (TmId=%d) : %i sec
Line 8102: CellReselection parameters: IsHcsInUse (%s)
Line 6671: [NotifyCellReselInProgress] ERROR: GenMsg is returned as NULL
Line 7439: FTM IntraFreqCells uarfcn = %d,  cpich = %d, rscp = %d, ecNo = %d
Line 7492: FTM IntraFreqCells uarfcn = %d,  cpich = %d, rscp = %d, ecNo = %d
Line 7503: FTM :: NeighbCellINfo NON_DCH state numIntraFreqCells %d numInterFreqCells %d
Line 7506: FTM :: neighCellArrIter %d 
