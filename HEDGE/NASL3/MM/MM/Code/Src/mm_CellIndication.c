Line 173: Initialisation of <Cell Indication>, InitType=%d
Line 337: DSAC State = %d in mm_SendGapiDsacStateInd()
Line 1090: mm_UpdateUMTSBarringInfo ChangedBarringInfo [%d], u32 GlobalCellID [%d]
Line 1091: CS_Barred [%d], PS_Barred [%d], EMEMGENCY_Barred [%d]
Line 1186: Unit data Indication received after PSHO, releasing CS CALL Grant
Line 1191: CS CALL grant will be taken soon anyway. No need to release it.
Line 1196: CS procedure is not CS CALL, not expected
Line 1203: Putting MM DATA REQ message in Queue in order to process %s
Line 1261: Since DSAC is signalled, Access class is set to not barred
Line 1285: mm_NwModeChangeDueToAccessBarred == %d
Line 1320: CSFB MO/MT Call still pending So Making NMO as NMO2 again.. (NAS sysinfo PsDomainNasInfo[1] : %d 
Line 1365: URRC_MM_CELL_IND Received :  should ignore in PMM_CONNECTED state...
Line 1369: Discarded Cell Data LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 1391: PagingRestriction %d, AccessClassBarred %d, DSAC_Signalled %d
Line 1485: LocationRegistrationRestriction %d, AccessClassBarred %d, DSAC_Signalled %d
Line 1761: PACKET SERVICE TYPE : [ %d ] 
Line 1772: CellChange is set to FALSE.
Line 1779: CellChange is set to TRUE.
Line 1796:  RrCellInd.CellId -> [0] :%d , RrCellInd.CellId -> [1]:%d
Line 1799:  RrCellInd.Arfcn :%d
Line 1832: RR Cell Ind Rel Version of MSC : [ %d ] 
Line 1834: RR Cell Ind Rel Version of SGSN : [ %d ] 
Line 1868: Cell belongs to forbidden LAI list. So, not suitable for search!! 
Line 1874: ANY PLMN search case. CellNotSuitableForSearch [ %d ] 
Line 1951: mm_UrrcCellInd.BandId = %d
Line 1952: mm_UrrcCellInd.IsGSMRatListIncluded = %d, mm_GsmCapDisableFlag = %d
Line 1954: NasSysInfo.CsDomainNasInfoLen = %d
Line 1955: NasSysInfo.PsDomainNasInfoLen = %d
Line 1969: RAU needed flag is %d
Line 1973: Since DSAC is signalled, Access class is set to not barred
Line 2001: mm_NwModeChangeDueToAccessBarred == %d
Line 2027: mm_UrrcCellInd.CellId : 0x%08X
Line 2056: Cell belongs to forbidden LAI list. So, not suitable for search!! 
Line 2577: GsmCapaDisableState: %d and UmtsCapaDisableState received from GMC: %d 
Line 2597: EncodedSizeinBits -> %d 
Line 2652: Is2GDisabled: %d and Is3GDisabled: %d 
Line 2709: 
 G2U redirection was done and 1st CELL IND came.
Line 2727: Putting MM DATA REQ message in Queue in order to process %s
Line 2742: 
 Saving Cell Ind Msg due to RAT Change Cause.....
Line 2748:  Quick rollback is in progress, so processing MM cell ind further, if Quick rollback is failed 
Line 2749: 
 Saving Cell Ind Msg as QRB ongoing.....
Line 2766: DSDS: MM_DS_PERFORM_PROCEED_STACK_RESUMPTION
Line 2812:  Mesage Cross Over detected, Cell Ind Ignored in mm_DecodeRrCellIndMsg  
Line 2838: Received CELL IND After OOS So Reset All PLMN States In Connected Mode no Need to handle
Line 2866:  CnCommonNasInfo Absent !!!! PLMN Changed without LAC changing?! Msg ignored in  mm_DecodeRrCellIndMsg 
Line 2874:  PS Domain Info Also Present So Fill RAI and Nor For ANYPLMN
Line 2881:  PsDomainNasInfoLen Absent !!!! 
Line 2887:  ExitMmCellInd After mm_PerformCellIndGenPlmnActions %s   
Line 2892:  ExitMmCellInd After mm_CheckRecoveryFromLossOfCoverage %s   
Line 2977: Urrc Unit Data Ind received during Call in progress
Line 2995: No New LAI. Do nothing
Line 3005: Moved to New LAI. Start Location Update. Paging Abandoned
Line 3021: Cell Does not Support CS Domain, Terminating RR Connection.
Line 3040: Set MM service state to NORMAL on CELL_IND after AUTH failure
Line 3050: No New LAI. Do nothing
Line 3058: Moved to New LAI. Start Location Update. MO call was Abandoned
Line 3537:  Copying Cell Data Flags Only Since MM_RR_NO_SERVICE_CELL_FLG is TRUE
Line 3632:  Access Class is Barred in mm_ProcessMmCellIndMsg 
Line 3642:  SameRrConnexFailAction = %d
Line 3651:  Quick rollback is in progress, so processing MM cell ind further, if Quick rollback is failed 
Line 3670:  SameRrConnexFailAction = %d
Line 3767: GMM_FORBIDDEN_PLMN_GPRS_FLG
Line 4128: NO SERVICE in mm_CheckRrCellIndNoServiceState 
Line 4133: Ignoring No cell ind -> Message Crossover 
Line 4175: LOSS_CVG: All contexts other than CC should be released
Line 4202: CallDropCauseForDBGSCR = %d, CallDropTypeForDBGSCR = %d
Line 4234:  SameRrConnexFailAction = %d
Line 4244: Location update failed and PLMN PERFORM ACTIONS not sent before due to PS procedure on same RR connection and got NO_CELL_IND..Sending now.. 
Line 4278: Cell Does Not Support Voice Calls in mm_CheckRrCellIndNoServiceState 
Line 4282: Emergency Call Attempted, Must find a Cell Which supports CS & Emergency Calls...
Line 4311: Emergency Call Was Attempted....
Line 4316:  SameRrConnexFailAction = %d
Line 4322: Cell Supports Voice Calls in mm_CheckRrCellIndNoServiceState 
Line 4328: LGU device has EPS only mode in LTE side. So when UE camps on Hedge cell, it needs to enable CS/PS 
Line 4338: PS only mode in LTE side. If we dont set here, RAU will be sent first
Line 4454: SIM Absent, Ignore the message!!!!!
Line 4485:  In PS only support case, MM should send RESUME done indication to URRC  
Line 4497: On ANY PLMN in mm_CheckRrCellIndEmergCase....
Line 4510: In this case, BackGND PLMN_LIST will come when OOS timer expired
Line 4545: If UE is redirected under UTRAN control any limitation shall be removed...
Line 4549: RR sent a Plmn MM did not ask for and it's not in the Equivalent Plmn List Either....!
Line 4623: MM is in MM_IDLE/NULL during Emerg
Line 4632: Implicitly Detaching
Line 4653:  Moved to Emergency Cell Only 
Line 4667: Different LAI, releasing RR connection
Line 4691: Same LAI but not emergency call so releasing RR connection
Line 4725:  Emeregency Cell Change in Dedicated Mode Not Possibe, FATAL ERROR 
Line 4733:  LU Running Moved to Emergency Cell Wait for Coverage 
Line 4767: Received a Cell Ind in connected Mode Not Allowed 
Line 4806:  SameRrConnexFailAction = %d
Line 4840: Service Available -> Update T3212 (Loc. Upd Period)
Line 4847: T3212 is 0 -> Do Not Run Location Update
Line 4853: T3212 > 0 -> Location Update Shall be Run
Line 4894:  Setting MsOperationMode to MM_MOBILE_CLASS_C on user's request-> %d  
Line 4899: GSM only, Mobile Class C_CS under DSDS configuration, LAU should be performed on NMO I
Line 4904:  GprsServiceAllowed -> %s  
Line 4910: Set GprsServiceAllowed to TRUE
Line 4925:  GprsServiceAllowed -> %s, PS is BARRED  
Line 4955: Changing Network Mode for CS Domain in mm_CheckRrCellIndNetwkMode.... 
Line 5082: Stopping Location Update Timers in Network Mode 1 in mm_CheckRrCellIndNetwkMode.... 
Line 5120:  RR connection for CS only Registration is pending and NMO 1 
Line 5136:  SameRrConnexFailAction = %d
Line 5173: Resetting Loc UPd Attempt Count -> Entering New Cell while in MM_ATTEMPTING_TO_UPDATE....[24.008]-4.4.4.5
Line 5242: mm_lastCsRegRatMode = %d ,mm_lte_Tin = %d
Line 5287:  RESEL_HOLD_REQ Sent to GRR or CELL_REJ to URRC, So not processing GMM Cell Data
Line 5293:  SameRrConnexFailAction = %d
Line 5322: User Has Not Requested To Attach to CS Domain in mm_CheckCellIndCsEnabled... 
Line 5335: User Has Already Requested To Attach to CS Domain in mm_CheckCellIndCsEnabled... 
Line 5340: But Mobile is Not Attached to CS Domain Yet in mm_CheckCellIndCsEnabled... 
Line 5346: Unit Data Ind received, In Attempting to update state when UE is waiting for Cell Ind 
Line 5368: Proceed with other functions because here the available CELL LAI is different than Prev Cell and CS is Allowed
Line 5389: After TAU reject (12,13,15) or (16,17 5times) cell LAI = sim LAI = prev LAI. LAU will be initiated in mm_ProcessMmCellIndMsgAreaReg. 
Line 5421: And Mobile is Already Attached to CS Domain in mm_CheckCellIndCsEnabled... 
Line 5486: Coverage Had Been Lost
Line 5491: We are on Any PLMN or camped for emergency service, So need to Wait for PLMN Search Req Again 
Line 5499: We are Back in the Registered Plmn Area
Line 5509: SIM RAI == Cell Data RAI -> ON_PLMN
Line 5514: SIM RAI != Cell Data RAI -> NOT ON_PLMN
Line 5522: SIM LAI == Cell Data LAI -> ON_PLMN
Line 5527: SIM LAI != Cell Data LAI -> NOT ON_PLMN
Line 5583: We are NOT Back in the Registered Plmn Area
Line 5587: We are in an Equivalent Plmn...Must Perform Registration
Line 5600: CELL_IND came and Service State should be normal service state..
Line 5994: We Are in the Registered Area, i.e. Sim Lai == New Cell Data Lai in mm_ProcessMmCellIndMsgAreaReg 
Line 6008:  T3212 Timeout detected
Line 6043:  T3211 expired on unexpected condition and we are back in REG AREA
Line 6384:  Registered Area NOT detected, i.e. Sim Lai != New Cell Data Lai in mm_ProcessMmCellIndMsgAreaNotReg 
Line 6390:  New cell Detected, Sim Lai != New Cell Lai, != Cell Lai  or first HEDGE cell (IsFromLte : %d)
Line 6411:  LAI Mimatch and after that there is a change of LA or UE was in LTE before, resetting LAI Mismatch Counter
Line 6415:  Start Normal Location Update 
Line 6427: New cell ind with change in parameters received during PS detach, invoke local detach
Line 6439: Do not stop T3311 timer for CU
Line 6454:  No New Cell Detected...Sim Lai != New Cell Lai = Cell Lai 
Line 6469:  T3212 Timeout detected
Line 6533: Authentication Failed or Entered New Area. Iniitate Location Update...
Line 6557: Waiting for RRC EST CNF But cell change Occured,CELL Changed and Moved Back to Prev Cell SIM LAI == CELL LAI
Line 6594: Authentication Failed. RR Connection Already Released, Start Location Update Procedure
Line 6601: RR will throw away the EST REQ, MM Must send location update again
Line 6607: Loc Update After RR Rel Cnf
Line 6629: Authentication Failed. RR Connection Already Released. Nothing to do
Line 6633: Release RR Connection.
Line 6640: mm_GetRrMmRelReqSentFlag - FALSE
Line 6641: mm_GetDsDelayCsIdleEntry = %d
Line 6648: No Change of LAI but authentication failed on same LAI.
Line 6661: No Change of LAI
Line 6668:   New Cell Does not support Loc Upd IMSI Attach -> Abort Procedure
Line 6701: Boom: LAI Not changed ..... 
Line 6717: Even though LAI did not Change, RR will throw away the EST REQ, MM Must send it again
Line 6763: UE had initiated a combined attach procedure to update CS registration in network...and new cell does not operate in network operation mode I
Line 6778: UE had initiated a combined RAU procedure to update CS registration in network...and new cell does not operate in network operation mode I
Line 6812: ...IMSI attach required for registration in the CS domain
Line 6831: ...UE implicitly registered in the CS domain
Line 6845: ...normal LAU required for registration in the CS domain
Line 6878: MSG Contents: %s
Line 6881: LocUp -> %s
Line 6928: Requesting to NS to raise NTF
Line 6941: mm_MmServiceInd.PlmnAttribute -> %d
Line 6960:  mm_GmmNwDetReqFlag = %d
Line 6961:  PSDisableInHedgeReq = %d
Line 7005: MM in MM_PLMN_SEARCH service state, MM_NORMAL_SERVICE indicated to NS because of CSFB call PLMN Search
Line 7116: PLMN ID= %x %x %x, PsType= %x in CellInfo, GsmDtmSupported = %d
Line 7195:  Plmn Id -> 0x%02X 0x%02X 0x%02X
Line 7212: mm_ps_service_type %d
Line 7217: mm_RegistrationStatusInd.CellId(GSM) %0x
Line 7223: mm_RegistrationStatusInd.CellId(UMTS) %0x
Line 7237: PS DETACH is done Locally
Line 7261: At this time, MM could not send RAU message to NW. Thus MM will set VOPS as FALSE
Line 7268: At this time, MM could not send RAU message to NW. Thus MM will set VOPS as FALSE
Line 7276: previous Sent Reg info & current Reginfo are same.Not sending info to NS
Line 7300: MM/GMM attach status = %d / %d
Line 7301: Current RAT = %d, Network mode =%d 
Line 7302: MM/GMM Sim State = %d / %d
Line 7305:  Cell Data LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 7394: mm_ps_service_type %d
Line 7441: At this time, MM could not send RAU message to NW. Thus MM will set VOPS as FALSE
Line 7448: At this time, MM could not send RAU message to NW. Thus MM will set VOPS as FALSE
Line 7477: MM/GMM attach status = %d / %d
Line 7478: Current RAT = %d, Network mode =%d 
Line 7479: RejType /RejCause / NsRejCause = %d / %d / %d 
Line 7480: Attempt count = %d
Line 7481: MM/GMM Sim State = %d / %d
Line 7484:  Cell Data LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 7495: 
Unable To Send %s in mm_SendRegistrationStatusIndMsg
Line 7529: MSG contents: %s
Line 7563: No Cell Indication received after PSHO, releasing CS CALL Grant
Line 7571: CS procedure is not CS CALL, not expected
Line 7582: Operating Mode change is going.. No cell ind shall be ignored!!!
Line 7606: PLMN List Size in NO CELL IND = %d
Line 7774: Cell Data Access Class -> %s 
Line 7788: Cell Data Access Class -> 1. Previous: %s, 2. New: %s 
Line 7808: --------------------- Displaying Cell Data Info. --------------
Line 7826:  mm_CellData.T3212 = %d,          mm_GetT3212TimedOutFlg() : %x  
Line 7834: ----------------------------------
Line 7878: RejCause = %s
Line 8017: Network Release version: M.S.C -> %s,          S.G.S.N -> %s
Line 8123: LAI/RAI Changed so need to perform RAU then send CM SERV REQ
Line 8127: Cell Does not Support Voice, Terminating RR Connection.
Line 8138: Not Supported in this Case/It Can process RAU MM State is Fine
Line 8156: mm_CheckMmStatesForNmo1CellInd in State = %s
Line 8163: CS Dedicated Mode Not Expected CELL IND in this Case
Line 8204: IN case of ATTACH REJECT #2 or TAU REJECT #2, MmCause should be considered as NETWORK FAILURE.
Line 8357: 
Cause value received from LTE :  Cause -- EMM_CS_DOMAIN_NOT_AVAIL_ERR
Line 8381: Cause value received from LTE :  Cause -- NETWORK FAILURE / GmmProcedure : 
Line 8394: Set TIN to P-TMIS when ATTACH/TAU REJECT other than cause #18
Line 8476: mm_AddToForbiddenGmmPlmnList : 0x%x 0x%x 0x%x 
Line 8491: Sync Plmn State to MM_ON_ANY_PLMN as per LTE reject #11/13
Line 8547: Sync Plmn State to MM_ON_ANY_PLMN as per LTE reject #11/13
Line 8605: mm_DecodeCellInfoReqMsg 
Line 8626: MSG Contents: %s
Line 8744:  Cell Band is changed
Line 8751:  Cell Band is changed
Line 8757: The latest CELL MM received is not 2G.
Line 8964: prev Band: %d, Current band: %d
Line 8966:  mm_RrDediCellInd.Arfcn :%d
Line 8992:  mm_RrDediCellInd.CellId -> [0] :%d , mm_RrDediCellInd.CellId -> [1]:%d
Line 9016: Putting MM DATA REQ message in Queue in order to process %s
Line 9055: Do not Send REG_STATUS_IND if LAU/EMC call is ongoing
Line 9066: 2G DediCellInd.Lai -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 9139: Keep in-service display during abnormal LAU failure
Line 9165: GPRS reg status set to FALSE to prevent unexpected Roaming icon issue 
Line 9180: Set GprsStatus to TRUE during temp RAU failure (<=2)
Line 9187: Set GprsStatus to TRUE before triggering attach when LastRegRat is NR
Line 9221:  GMM Registration Status Cause -> %s 
Line 9240: GS46 Metric queried
Line 9253: PrevStatus =%d, CurrentStatus =%d
Line 9279: Reset data 
Line 9377: Information didn't be changed.
Line 9389: ucFieldValidity = 0x%02X
Line 9390: ucRAC = 0x%02X
Line 9391: ucAccessTech = 0x%02X
Line 9392: ucFreqBand =0x%02X
Line 9394: MCC = 0x%04d, MNC =0x%04d, LAC=0x%04X
Line 9396: CellId = 0x%04X, RNCId =0x%04X
Line 9431: Not supported Band
Line 9459: Not supported Band
Line 9479:  URRC_MM_UNIT_DATA_IND was processed.. It doesn't need to change it..
Line 9500:  URRC_MM_CELL_IND was changed into URRC_MM_UNIT_DATA_IND..
Line 9563: %d, %d
Line 9577: %d, %d
Line 9607: CSFB MO/MT Call pending So Making NMO as NMO2 Till we release the CS CALL 
Line 9630: GRR Traffic band ind received, CS connected: %d / PS connected: %d
Line 9680: mm_DecodeRrStateInd not Support Rat
 
Line 9684: mm_DecodeRrStateInd state(%d), BandId(%d) 
 
Line 9777: T323Availability  = %d
Line 9796: LAU triggered because of CSFB call release
Line 9807: Periodic Location Update is triggered since 3312 was already expired
Line 9938: CSFB Emergency call is triggered: Orignial network mode is NMO1, Set combined RAU with IMSI flag 
Line 9946: CSFB Emergency call is triggered on same LAI, mm_SetLauAfterCsFallbackFlag() 
Line 10000: LAU has to be performed after Combined RAU rej #7,14 while manual PLMN selection is in progress
Line 10006: Forbidden Plmn Detected in mm_CheckRrCellIndEmergCase....
Line 10034: Forbidden LAI Detected in mm_CheckRrCellIndEmergCase....
Line 10040: Forbidden LAI Detected in << Forbidden Location Areas for Roaming >> Requesting RR(C) to Select Another Cell...
Line 10076: Forbidden LAI Detected in << Forbidden Location Areas for Roaming >>, We Are in an Area With Limited Service, No Cell Selection Necessary, Just Wait Until RR(C) Finds another Cell.... 
Line 10086:  SameRrConnexFailAction = %d
Line 10103: Emergency Call Waiting...
Line 10136: No New LAI..
Line 10140: MM_REL_REQ is already received so don't retry CM SERVICE REQ again
Line 10181: Moved to New LAI. Start Location Update Procedure After RR Rel Cnf.
Line 10202: Cell Does not Support Voice, Terminating RR Connection.
Line 10238: No New LAI. Do nothing
Line 10256: Moved to New LAI. Start Location Update. Paging Abandoned
Line 10274: Cell Does not Support Voice, Terminating RR Connection.
Line 10305: IMSI detach request will now be processed by MM....
Line 10320:  Moved to a New LAI, or ATT Actions Not Allowed...-> Implicitly Detaching
Line 10353:  Moved to a New Cell, While Attempting to Detach. Proceed with Detach ...
Line 10371: Waiting For MM Connections to be Re-Established
Line 10391: Cell Does not Support Voice, Terminating RR Connection.
Line 10415:  LastRegRatMode[%d], LastCsRegRatMode[%d]
Line 10416:  mm_GetNeedLocalDetach [%d]
Line 10423:  If Last Reg rat is NR, we should send LAU/ATTACH request in stead of RAU
Line 10454:  mm_NeedCellIndAfterRelInd -> %d 
Line 10497: MM_DSNC - In DSDS Resume Req LAU will be performed so ATTACH/RAU should be pended ....
Line 10509: MM_DSNC - In DSDS Resume Req Initiating Attach Procedure ....
Line 10521: MM_DSNC - In DSDS Resume Req Initiating RAU Procedure ....
Line 660: CN Common SI (i.e. LAC) not present - using stored value
Line 664:  CnCommonNasInfo Absent !!!! PLMN Changed without LAC changing?! Msg ignored in  mm_DecodeRrCellIndMsg 
Line 1136: isCommercialCell =%d
Line 543: PsDomainAccess PrevPSDA = %d, CurrentPSDA = %d
Line 554: CsDomainAccess PrevCSDA = %d, CurrentCSDA = %d, last_update_is_not_combined is  = %d
Line 705: CS domain specific SI (i.e. T3212 and ATT) not present - using stored values
Line 766: NetMode = %d
Line 979: Clear MM_NETWORK_MODE_CHANG_FLG
Line 793: Access Class is barred or not NMO1
Line 838: Previous Network mode is  = %s
Line 839: Current Network mode is  = %s
Line 1003: CSFB MO/MT Call pending So Making NMO as NMO2 Till we release the CS CALL 
Line 861: RAU Needed Flag is Not set 
Line 867: RAU Needed Not set - NMO/Access barred not suitable 
Line 874: DSAC for CS and PS are not barred
Line 877: Previous update is not combined
Line 879: RAU Needed Flag is set 
Line 1595: Clear Cell Congestion flag, since there is a change of Cell in the GSM RAT
Line 516: prev Band: %d, Current band: %d
Line 520: Band is changed
Line 1618: Change duplex mode
Line 1628:  SGSN Version updated (Pre99 ->R99+)... Encoding MSRAC!!!!! 
Line 1631: EncodedSizeinBits -> %d 
Line 2353: Indicate Service Ind when Cell ind received after Est rej with Rach failure
Line 2369: Cell Indication received after PSHO, releasing CS CALL Grant
Line 2374: CS CALL grant will be taken soon anyway. No need to release it.
Line 2379: CS procedure is not CS CALL, not expected
Line 2174: Operating Mode change is going.. New cell ind shall be ignored!!!
Line 2187: New cell ind shall be ignored, as there is a pending action from GMC for previous update reject and grant is with other stack!!!
Line 2213: CsCall is resumed when URRC_MM_CELL_IND comes
Line 2125:  %s  in Processing Cell indication message as UNIT DATA indication message since it is received in PMM Connected mode  
Line 3195:  Found in the ForbiddenRoamingLaiList
Line 3201:  Found in the ForbiddenRegLaiList
Line 3210:  Found the Cell for Given Redirect Message 
Line 3372:  CELL IND comes in IDLE state, so abandon quick rollback procedure.
Line 3163:  Copying Cell Data Flags Only Since NO_IMSI or Forbidden Plmn, etc.
Line 3171:  Copying All of Cell Data Information
Line 3114: In roaming case, set CS VOICE Only for KDDI requirement
Line 3124: In roaming case, set CS_VOICE_PREF_IMS_VOICE_SEC
Line 3463:  If CCO, RESUME_DONE_IND will be sent after getting Result from RR
Line 3417:  UE camped on another PLMN in previous, Need to update DCNR bit for camping plmn
Line 3432: RetryOnSamePlmn = FALSE
Line 3251: RAT Change Detected in mm_ProcessMmCellIndMsg
Line 3289: EST REJ TRY OTHER RAT Cause Detected. Changing MM State to %s in mm_ProcessMmCellIndMsg
Line 3302: Entered here because there was a LAI change after EST_REJ reselection during an ongoing call, Call will be done after LAU procedure
Line 3303: Resetting MM_RE_START_PROC_ON_OTHER_RAT_FLG as MM_LOC_UPD_REQ_1ST_MM_CON_FLG-> %d (or) mm_CallWasAttempted -> %d  
Line 3927: If T3213 is stopped due to NO_CELL_IND set LAU needed flag
Line 3958: Discarding MM DATA REQ message due to NO SERVICE
Line 3964: Triggering silent redial ...
Line 3833: MM Connection Lost due to No service
Line 4360: Emergency Call Was Attempted....
Line 4399: But Cell Does NOT Support Voice or Emergency Call!!!!!
Line 5778:  Loc Upd Attempt Count > 0 & T3211 is Running. Wait Until it Expires
Line 5792: Sim Lai == NewCellData Lai = CellData Lai, We have NOT Moved from the Registered Area, T3213 Running -> Random Access Failure -> Must enter a new LAI before doing Loc Upd [24.008]-4.4.4.9 Clause (c)
Line 5803:  (SimData == NewCellData) != CellData, We Have Moved Back into the Registered Area
Line 5808:  LocUpd Done after T3211 -> %s 
Line 5822: Either NOT UPDATED or T3213 Expired without doing Loc Upd, i.e. we have re-gained Coverage -> Perform Loc Upd.
Line 5869:  MM regain coverage on the cell of registered LAI. [24.008]-4.4.4.9 (c)
Line 5954: Update status is PLMN_NOT_ALLOWED or LAI_NOT_ALLOWED
Line 5685: MO/MT Call is Pending	
Line 5692: Cell Congestion flag is SET, Do not Send Paging Response
Line 5711: We Camp to the Same LA Cell Received From LTE , Proceed with Paging Responce 
Line 5721: UE is on HongKong Network 
Line 5747: We Camp to the Same LA Cell Received From LTE ,Mo Call is Pending Wait for MM EST REQ 
Line 6234: T3211 RUNNING, Loc Upd Done After T3211 Expiry
Line 6290: AttemptCount > 0, LowerLayerFailCount > 0
Line 6321: Access Enabled in Same LAI, Do LAU/3122 Not Running
Line 6345: MM_CELL_CONG_WAIT_3122_EXP_FLG == TRUE
Line 6077: No LocUpd Done Until A differnt Cell is Entered or T3212 Expires !
Line 6103: Don't send LOC_UPD_FAIL to GMC during IRAT
Line 6115: Need to exit cell indication Processing, as RESEL_HOLD or CELL_REJ  is triggered
Line 6127: First Cell Change Detected before T3213 Expiry Refer [1]-4.4.4.9 (c)
Line 6170: Access Enabled in Same LAI, Do LAU/3122 Not Running
Line 6197: MM_CELL_CONG_WAIT_3122_EXP_FLG == TRUE
Line 8789: Keep previous mm_ps_service_type, mm_ps_service_type = %d
Line 8798: RR_DEDICELL_IND, DTM supported on new cell = %d, ps type = %d, CellUpdateRequired:%d
Line 8820: RR_DEDICELL_IND, RAU will be initiated.. 
Line 8854: DEDICELL_IND after IRAT HO,  RAI -> %02X %02X %02X %02X %02X %02X
Line 8862: Gmm Service State = %d 
Line 8906: Resetting TBF Release Actions
Line 2305: Delay to send REG_STATUS_IND after LAU completed
Line 2327: NS will trigger ATTACH_REQ later.
Line 2334: Warning : Power-off detach is on-going, so not sending REG_STATUS_IND to NS
Line 2512: Do not Send REG_STATUS_IND if EMC redial is ongoing
Line 2530: Delay to send REG_STATUS_IND after LAU completed
