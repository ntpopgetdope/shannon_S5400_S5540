Line 448: ERR: initialising to INACTIVE
Line 476: DMM:SetRegistryVars umts_access_mode [%d]
Line 481: SimId is set as Sim2(%d)
Line 486: SimId is set as Sim1(%d)
Line 528: rrc_TaskMain_free 0x%x
Line 559: rrc_TaskMain_init 0x%x
Line 779: ERR: stopping InternalWatcherTimer
Line 784: >> Exception Ind from low layer: TakMain State %d
Line 820: Stack ID %d NasSigStartReceived CS domain: %d, PS domain: %d
Line 824: Exceptional Case: InternalWatcherTimer expired for Stack ID %d
Line 827: Stack ID %d NasSigStartReceived CS domain: %d, PS domain: %d
Line 830: InternalWatcherTimerExpired: No IntraFreqMeas -> Skip WD Operation
Line 837: InternalWatcherTimerExpired: Other SIM CS Connected Established -> Skip WD Operation
Line 842: InternalWatcherTimerExpired: Other SIM is doing BPLMN, USSD, SMS, etc. -> Skip WD Operation
Line 851: RrcRecoveryHandlingEnabled(%d) TaskMain_rrc_DsrcMgr_IsPeerSimAbsent(%d) TaskMain_p->common.StateVar(%d) RecoveryMode(%d)
Line 884: ERR: starting InternalWatcherTimer
Line 889: InternalWatcherTimer started(TmId=%d): %i sec
Line 895: InternalWatcherTimer Not created(TmId=%d, isUtranCommercialPlmnId=%d)
Line 909: ERR: stopping InternalWatcherTimer
Line 917: ERR: starting InternalWatcherTimer
Line 922: InternalWatcherTimer started(TmId=%d): %i sec
Line 928: InternalWatcherTimer Not created(TmId=%d, isUtranCommercialPlmnId=%d)
Line 942: ERR: stopping InternalWatcherTimer
Line 949: InternalWatcherTimer Not created(TmId=%d, isUtranCommercialPlmnId=%d)
Line 968: ERROR stopping TimerKeepBplmnOpIRAT
Line 975: Successfully started TimerKeepBplmnOpIRAT(%d msec)
Line 979: Could not start TimerKeepBplmnOpIRAT(%d msec)
Line 994: ERROR stopping TimerKeepBplmnOpIRAT
Line 1001: Successfully started TimerKeepBplmnOpIRAT(%d sec)
Line 1005: Could not start TimerKeepBplmnOpIRAT(%d sec)
Line 1039: TimerKeepBplmnOpIRAT is still running
Line 1055: [rrc_TaskMain_MoveBplmnHandlerToCellSelecterFromTaskMain] Remaining TimerKeepBplmnOpIRAT (%d) msec
Line 1060: ERROR stopping TimerKeepBplmnOpIRAT
Line 1117: [RrcTaskStatus] %s -> %s
Line 1129: [RrcPlmnSearchStatus] %s -> %s
Line 1141: [RrcXRatTo3GStatus] %s -> %s
Line 1153: [Rrc3GToXRatStatus] %s -> %s
Line 1165: [RrcBplmnStatus] %s -> %s
Line 2129: GenMsg of ErrorStatusIndEvent  is NULL
Line 2138: >>>> Send ERRORSTATUSIND event to TaskMain
Line 2151: GenMsg of RecoveryCompleteInd  is NULL
Line 2159: >>>> Send RECOVERYCOMPLETEIND event to TaskMain
Line 2209: >>>> Send captured URRC_MM_RESUME_RAT_REQ to CNXMGR for Recovery
Line 2213: >>>> Fail to send captured URRC_MM_RESUME_RAT_REQ ( No caputured message)
Line 2228: TimerKeepBplmnOpIRAT is running and bplmn_handler exist
Line 2249: ERROR stopping TimerKeepBplmnOpIRAT
Line 2265: GenMsg of MmPlmnSearchReqForRecovery  is NULL
Line 2281: >>>> Send captured URRC_MM_PLMN_SEARCH_REQ to CELLSELECTER for Recovery
Line 2285: >>>> No captured URRC_MM_PLMN_SEARCH_REQ
Line 2286: >>>> Make a PLMN SEARCH_REQ: PLMN_ID %X, %X, %X 
Line 2330: >>>> Send FORCEDTOIDLEINEXCEPTIONALHANDLING to CNXMGR for Recovery
Line 2340: >>>> Send SUSPENDREQ to CNXMGR for Recovery
Line 2620: ERR: Invalid status response from rrc_ss_Receive
Line 2623: Unexpected message received [MsgId=%i]
Line 2628: ExternalMsg is NULL
Line 6875: Asserted condition : (%s) ==>(%s,%d)
Line 6878: [rrc_Debug_Assert] result of function pal_SmIntDisable = %d
Line 6926: [CPR_URRC] Asserted condition : (%s) ==>(%s,%d)
Line 6927: [CPR_URRC][rrc_Debug_Assert] result of function
Line 6944: Asserted condition : (%s) ==>(%s,%d)
Line 6947: [rrc_Debug_Assert] result of function pal_SmIntDisable = %d
Line 7105: WatcherDetected %d for NasPlmnSeareReq during peer stack NAS_SIGNALLING_ONGOING
Line 7118: [PConflict] StackPsSupport %d, IsPDPActive %d
Line 7125: [PConflict] PagingConflictApplied %d
Line 7132: [PConflict] PagingConflictApplied %d
Line 7168: Initialize Clear MRU Info from Runtime Variable at SIMID %d
Line 7192: Initialize StoredFreqDb SIM2 at Index[%d]: Freq[%d] PLMN[0x%X]
Line 7198: Initialize StoredFreqDb at Index[%d]: Freq[%d] PLMN[0x%X]
Line 7209: pal_ERegId_URRC_last_used_neighbor_freq is being initialized
Line 7236: Adding Msg[%x] to Queue
Line 7273: UL Msg Queue being processed
Line 7282: FreeBuff failed in HandleMsgQ
Line 7284: Removing Ref Msg[%x] from Queue
Line 7303: FreeBuff failed in HandleMsgQ
Line 7305: Removing Ref Msg[%x] from Queue
Line 7324: Freeing Unfreed Msg[%x] from Queue
Line 7329: FreeBuff failed in EnteringIdle
Line 7431: [UnifiedScan]NULL PLMN ID Passed: Freq[%d] not Added
Line 7493: [UnifiedScan]AddDetectedFreqDbEntry: Uarfcn(%d), Plmn(0x%X), TimeInfo(%d) 
Line 7521: GetDetectedFreqForPlmn: NULL PLMN ID Passed:
Line 7579: [UnifiedScan]Combined Detected Db[%d] found for PLMN(0x%X)
Line 7592: [UnifiedScan]Peer Detected Db[%d] found for PLMN(0x%X)
Line 7608: [UnifiedScan]Detected Db[%d] found for PLMN(0x%X)
Line 7655: [UnifiedScan]UARFCN(%d) found in Peer stack Detected Freq DB
Line 7669: [UnifiedScan]UARFCN(%d) found in Detected Freq DB
Line 7763: [MSIM OOS DB] DB is empty
Line 7784: [MSIM OOS DB] PLMN[0x%X] not found in this DB
Line 7808: [MSIM OOS DB] Update BandSearched Band(%d) searched , SearchedBand Bitmask 0x%0.8x 
Line 7834: [MSIM OOS DB] Update Candidate PLMN[0x%X], Freq[%d], Band[%d]
Line 7848: [MSIM OOS DB] DB is full!! Can't add more PLMN to the DB
Line 7864: [MSIM OOS DB] DB is full!! Can't add mode Freq for this existing PLMN to the DB
Line 7869: [MSIM OOS DB] Freq(%d) is already present in DB with this PLMN
Line 7917: [MSIM OOS DB]InitialiseMSIMOOSDb
Line 8029: Uarfcn %d PSC %d found in NonPsSupportedCellDb
Line 8047: InitialiseNonPsSupportedCellDb
Line 8082: Uarfcn %d PSC %d Already present in NonPsSupportedCellDb
Line 8087: Uarfcn %d PSC %d to be added to NonPsSupportedCellDb at Index: %d
Line 8093: NonPsSupportedCellDb is Full Now
Line 8107: Uarfcn %d PSC %d to be added to NonPsSupportedCellDb at Index: %d
Line 5219: UpdateUsimParamsReq msg is NULL
Line 5225: ERR: moving to STOPPING
Line 5184: BPLMN: Deleting BPLMN inst
Line 5900: ERR: moving from SUSPENDED to SUSPENDEDRECOVERY
Line 4415: [TASKMAIN] ACTIVE to SUSPENDING as Uncoditional Suspend Req (IsConnected = %d)
Line 4422: ERR: moving from ACTIVE to SUSPENDING
Line 4437: ERR: moving from ACTIVE to SUSPENDING
Line 4528: ERR: moving from ACTIVE to SUSPENDING
Line 4545: ERR: moving from ACTIVE to SUSPENDING
Line 4557: %s
Line 4561: WatcherDetected (%d) is set to TRUE for MMSuspendReq
Line 4636: UpdateUsimParamsReq msg is NULL
Line 4642: ERR: moving to STOPPING
Line 4858: Poweroff Store StoredFreqDb SIM2 at Index[%d]: Freq[%d] PLMN[0x%X]
Line 4868: Poweroff Store StoredFreqDb at Index[%d]: Freq[%d] PLMN[0x%X]
Line 4894: NumLastusedNeighborFreq %d is being updated to pal_ERegId_URRC_last_used_neighbor_freq
Line 4978: Same as Registry: Registry is updated as StoredBands
Line 4981: StoredBands[%d]=%d, StoredBandsInReg[%d]=%d
Line 4999: Not as same as Registry
Line 5002: StoredBands[%d]=%d, StoredBandsInReg[%d]=%d
Line 5036: MaxBand(%d), Adding BandId(%d)
Line 5040: BandId(%d) is not disabled
Line 5071: Same as Registry: Registry is updated as StoredBands
Line 5082: StoredBands[%d]=%d, StoredBandsInReg[%d]=%d
Line 5087: Not as same as Registry
Line 5090: StoredBands[%d]=%d, StoredBandsInReg[%d]=%d
Line 5101: MaxBand(%d), MaxBandInReg(%d)
Line 5104: StoredBands[%d]=%d, StoredBandsInReg[%d]=%d
Line 4712: Peer Stored BPLMN Search Info %d Uarfcn 
Line 4723: Peer stack Stored BPLMN Search Info %d Uarfcn 
Line 4736: Stored BPLMN Search Info %d Uarfcn 
Line 4746: Current stack Stored BPLMN Search Info %d Uarfcn 
Line 4814: Stored BPLMN Search Info %d Uarfcn 
Line 5150: BPLMN: Deleting BPLMN inst
Line 5158: ERR: moving from SUSPENDING to SUSPENDED
Line 4595: Active_MMResumeDoneGsmInd
Line 4599: ERR: MsgPtr is NULL
Line 6111: ERR: moving from SUSPENDING to SUSPENDED
Line 5338: ERR: moving from ACTIVE to ACTIVERECOVERY
Line 6092: ERR: moving from SUSPENDING to SUSPENDED
Line 6065: UpdateUsimParamsReq msg is NULL
Line 6071: ERR: moving to STOPPING
Line 5972: ERR: moving from SUSPENDING to SUSPENDINGRECOVERY
Line 5298: ERR: wrong SavedState %d
Line 6229: ERR: moving to INACTIVE
Line 6242: ERR: deleting InternalWatcherTimer
Line 6251: ERR: deleting TimerKeepBplmnOpIRAT
Line 6139: ERR: moving to INACTIVE
Line 6152: ERR: deleting InternalWatcherTimer
Line 6161: ERR: deleting TimerKeepBplmnOpIRAT
Line 5930: ERR: moving from SUSPENDEDRECOVERY to SUSPENDED
Line 5483: ERR: moving from ACTIVERECOVERY to SUSPEND
Line 5497: ERR: moving from ACTIVERECOVERY to SUSPEND
Line 5508: ERR: moving from ACTIVERECOVERY to SUSPEND
Line 5519: ERR: moving from ACTIVERECOVERY to SUSPEND
Line 5623: ERR: moving from ACTIVERECOVERY to SUSPENDED
Line 5656: ERR: moving from ACTIVERECOVERY to SUSPENDED
Line 5677: ERR: moving from ACTIVERECOVERY to SUSPENDED
Line 5719: ERR: moving from ACTIVERECOVERY to ACTIVE
Line 5727: ERR: moving from ACTIVERECOVERY to ACTIVE
Line 5734: ERR: moving from ACTIVERECOVERY to ACTIVE
Line 5802: ERR: moving from ACTIVERECOVERY to ACTIVE
Line 5821: ERR: moving from ACTIVERECOVERY to ACTIVE
Line 5999: ERR: moving from SUSPENDINGRECOVERY to SUSPENDED
Line 1019: rrc_TaskMain_KeepBplmnOpIRATTimerExpiry - Free Keeped Bplmn Operation
Line 715: SecMgrInst is NULL
Line 2803: Unspecified error processing internal message
Line 2812: [TASKMAIN] InternalQ transition to INACTIVE - flushing internal queue
Line 2660: *** %s [%s] : EventId %d(%s) from %s %s
Line 2665: *** %s [%s] : EventId %d(%s) %s
Line 2673: *** %s [%s] : EventId %d(%s) from %s %s
Line 2678: *** %s [%s] : EventId %d(%s) %s
Line 1330: >>>> RrcRecoveryCount: %d
Line 3450: ERR: moving from SUSPENDED to ACTIVE
Line 3514: CUPHY_NON_UMTS_RAT_MODE_CNF in SUSPENDED
Line 3530: LBS_URRC_POS_CAP_RSP in SUSPENDED
Line 3536: LCSM_URRC_POS_CAP_IND in SUSPENDED
Line 3547: Unexpected message in SUSPENDED [MsgId=%i]
Line 3303: URRC_MM_STOP_REQ
Line 3330: [URRC_ANR]: MM_URRC_PREPARE_CGI_REQ received
Line 3333: [URRC_ANR]: ERR: moving from SUSPENDED to ACTIVE
Line 3365: URRC_MM_UPDATE_DUPLEX_MODE_IND with Mode %d
Line 3377: MM_URRC_TARGET_RAT_RESTORE_IND in SUSPENDED
Line 3383: URRC_MM_IRAT_STATUS_IND in SUSPENDED
Line 3390: URRC_MM_EMC_MODE_IND in SUSPENDED
Line 3399: Unexpected message in SUSPENDED [MsgId=%i]
Line 2878: USIM is inserted
Line 2882: USIM is not inserted
Line 2907: URRC_MM_RESUME_RAT_REQ with PSSupport %d, PDPActive %d
Line 2912: [GNSS] Initiating Capability Request 
Line 2915: URRC_MM_RESUME_RAT_REQ with Mode %d
Line 2919: URRC_MM_RESUME_RAT_REQ with Current PLMN ID(0x%X, 0x%X, 0x%X)
Line 2925: ERR: moving from SUSPENDED to ACTIVE
Line 2992: TimerKeepBplmnOpIRAT is running and bplmn_handler exist
Line 3013: ERROR stopping TimerKeepBplmnOpIRAT
Line 652: [Feature Control] Installed SP FCI_Name = [%s]  SP_Name = [%s]

Line 653: [Feature Control] Network SP FCI_Name = [%s]  SP_Name = [%s]

Line 676: [URRC_Recovery_Handling_Enabled] %d
Line 677: [RecoveryMode] %d (0: RecoveryMode, 1: CrashMode)
Line 692: gTCS_SMP_LIB[TCS_FCN_OMC] is not DEFINED
Line 6544: >> [Feature Control] REGISTRY base <<
Line 6569: [CPC][FDPCH] %d
Line 6570: [CPC][E-FDPCH] %d
Line 6571: [CPC][UlDtx] %d
Line 6572: [CPC][SlotFormat4] %d
Line 6575: [U2L HO][IratHoToEutra] %d
Line 6576: [U2L HO][EutraMeasReportInConnected] %d
Line 6577: [U2L HO][EutraMeasureInCellFach] %d
Line 6580: [ECFACH][EC-FACH] %d
Line 6581: [ECFACH][EC-FACH DRX] %d
Line 6586: >> [Feature Control] COMMON <<
Line 6599: [UTRAN APBCR] %d
Line 6602: [MAC-ehs] %d (Reg only)
Line 6605: [MultiCell][MultiCellSupport] %d
Line 6610: [MultiCell] NumSupportedDlHsCells (%d)
Line 6611: [MultiCell][%dC-HSDPA] Supported 
Line 6632: [GNSS] %d
Line 6636: [CSG] %d
Line 6641: [AP VOLTE SRVCC] %d (Tcs only)
Line 6644: [AGPS by AP] %d (Reg only)
Line 6648: [EUTRA MFBI] %d (Reg only)
Line 6651: [CPC][HS-SCCHLess] %d
Line 6655: [TxFailParam Handling] %d
Line 6659: [BlackList Handling] %d
Line 6663: [PConflict] %d (Reg only)
Line 6667: [LteMru] %d (Reg only)
Line 6673: [Rach Fail BlackList] %d (Reg only)
Line 6679: SuppBlackList = %d, so forcely setting SuppRachFailBlackListCell = %d
Line 6684: [Support CertifiedBand] %d (Reg only)
Line 6737: >> [OMC Feature Control Start] <<
Line 6738: After Updating OMC Feature Control Registry value to rrc_Features
Line 6744: [OMC][CPC][FDPCH] %d (tmpFeatureValue %d)
Line 6751: [OMC][CPC][E-FDPCH] %d (tmpFeatureValue %d)
Line 6759: [OMC][CPC][UlDtx] %d (tmpFeatureValue %d)
Line 6761: [OMC][CPC][SlotFormat4] %d (tmpFeatureValue %d)
Line 6768: [OMC][CPC][HS-SCCHLess] %d (tmpFeatureValue %d)
Line 6769: [OMC][CPC][HS-SCCHLess] HS-SCCHLess not supported in UE
Line 6776: [OMC][ECFACH][EC-FACH] %d (tmpFeatureValue %d)
Line 6783: [OMC][ECFACH][EC-FACH DRX] %d (tmpFeatureValue %d)
Line 6790: [OMC][U2L HO][IratHoToEutra] %d (tmpFeatureValue %d)
Line 6797: [OMC][U2L HO][EutraMeasReportInConnected] %d (tmpFeatureValue %d)
Line 6800: >> [OMC Feature Control End] <<
Line 6850: OMC_Registry[%i] %i
Line 7060: Request to LBS for UE positioning Capabilty
Line 4241: Getting MMPLMNUpdateReq to Set Registry Vars
Line 4151: rrc_Recv_PSSupportInd: Message Creation Failed
Line 4157: rrc_Recv_PSSupportInd()-ReleaseCnx MsgNotSent
Line 4164: URRC_MM_PS_SUPPORT_IND with PSSupport %d, PDPActive %d
Line 4061: URRC_MM_DOMAIN_AVAILABILITY_IND with DomainAvailable:%d (0:CS_ONLY 1:PS_ONLY 2:CS_AND_PS_BOTH 3:NONE)
Line 6313: Request to LTE for the EUTRA UE Capabilty with NULL PLMN ID(0x%X, 0x%X, 0x%X)
Line 3074: URRC_MM_PS_SUPPORT_IND with PSSupport %d, PDPActive %d
Line 3116: USIM is not inserted so IratHandover msg will be created without Security Info
Line 3138: URRC_MM_BPLMN_LIST_REQ
Line 3142: ERR: moving from SUSPENDED to ACTIVE
Line 3165: ERROR stopping TimerKeepBplmnOpIRAT
Line 3192: ERROR stopping TimerKeepBplmnOpIRAT
Line 3210: [NW_SCAN] NwScanMode %x
Line 4283: Msg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 4291: TDD and FDD bplmn_handler is NULL. Cannot Signal AbortDetection to Bplmn
Line 6330: UpdateCsgListReq for FddCellSelecter
Line 3239: URRC_MM_INIT_REQ in SUSPENDED
Line 7357: Performing Sim Read Operations
Line 7365: Sending Register Req to USIM and Triggering Reading of SIM Params
Line 7376: USIM instance NULL, Sim Read Request is not performed.
Line 7381: USIM is not inserted, Sim Read Request is not performed.
Line 6407: URRC_MM_QRB_MODE_UPDATE_IND with Mode %d
Line 6417: SupportOfQrbOmcValue %d
Line 6421: QRB is enabled as default
Line 7963: No cell IND for Target RAT LTE
Line 7967: No cell IND for Target RAT NR
Line 7972: Invalid Target PLMN RAT
Line 7975:  RatRestoreInd recieved , No_Cell_IND Created
Line 7983: NoCellIndPtr  cannot be created
Line 7988: RatRestoreInd recieved when RRC is Not in cell selection State hence ignored
Line 7994: CellSelecter_p not present
Line 6451: [AP_EMC]: URRC_MM_EMC_MODE_IND with EmcState = %d
Line 6476: [AP_EMC]: SevingCellCpich: %d SevingCellFreq: %d is updated !!
Line 6479: [AP_EMC]: ServingCell Valid_PLMNid (0x%X 0x%X 0x%X) is updated
Line 6492: [AP_EMC]: SevingCellCpich: %d SevingCellFreq: %d is updated !!
Line 6495: [AP_EMC]: ServingCell Valid_PLMNid (0x%X 0x%X 0x%X) is updated
Line 6528: [AP_EMC]: Unexpected type in  Urrc_MmEmcModeInd_t
Line 6531: [AP_EMC]: rrc_Recv_EMCModeInd: isAPBasedEmcEnabled = %d
Line 6377: SIM_RRC_UPDATE_RSP
Line 6382: SIM_RRC_UPDATE_PARAM_RSP
Line 6386: HandleUsimCnf: unexpected ExternalMsgId %d
Line 6395: HandleUsimCnf: msg is NULL
Line 3587: Defer count reaches Qsize(%d) msgid(%d)
Line 3674: Unspecified error processing internal message FSM_Status(%d) DestInst(0x%x) EventId(%d)
Line 3688: [TASKMAIN] InternalQ transition to SUSPSENDED or INACTIVE - flushing internal queue
Line 3788: GRR_URRC_READ_PRED_CONF_REQ ignored - only supported in SUSPENDED
Line 3838: ERR: Message from undefined layer %d received at URRC
Line 3848: %s
Line 3888: URRC_MM_INIT_REQ
Line 3894: [Funtion Pointer] %x 
Line 3899: PhyInitDone
Line 3904: ERR: moving from INACTIVE to SUSPENDED
Line 3911: DMM:SetRegistryVars umts_access_mode [%d]
Line 3923: ERR: creating InternalWatcherTimer
Line 3930: Failed to create TimerKeepBplmnOpIRAT
Line 3933: E-Call Feature: During MM_INIT_REQ, not reading SIM Params
Line 3935: Getting URRC_MM_INIT_REQ to Set RegistryVars
Line 3938: [GNSS] Initiating Capability Request 
Line 3951: wait for PhyInitDon Ind
Line 3957: PhyInitDone
Line 3968: ERR: moving from INACTIVE to SUSPENDED
Line 3975: DMM:SetRegistryVars umts_access_mode [%d]
Line 3986: ERR: creating InternalWatcherTimer
Line 3993: Failed to create TimerKeepBplmnOpIRAT
Line 3996: E-Call Feature: During MM_INIT_REQ, not reading SIM Params
Line 3998: Getting CUPHY_INITDONE_IND to Set RegistryVars
Line 4001: [GNSS] Initiating Capability Request 
Line 4022: Unexpected message in INACTIVE [MsgId=%i]
Line 7406: Clearing the InitialiseFullScanFreqDb
Line 7703: [UnifiedScan] No of Freq (%d)in Detected Freq DB
Line 7707: [UnifiedScan]Detected Db[%d] present for PLMN(0x%X)
Line 7718: [UnifiedScan] No of Freq (%d)in Peer_Detected Freq DB
Line 7722: [UnifiedScan]Peer_Detected Db[%d] present for PLMN(0x%X)
