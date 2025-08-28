Line 703: Automatic Plmn Selction Mode Activated in mm_InitialisePlmnManagement
Line 707: Manual Plmn Selction Mode Activated in mm_InitialisePlmnManagement
Line 728: EmerCallPendingDuringNormalSearch (%d)
Line 792: Reset  mm_RetryPlmn
Line 896: MM will send dummy FAIL_IND because WE SHOULD NOT SEARCH 2G RAT
Line 912: 
 Save The Message and Process After REL  Cnf  
Line 997: Ignoring PLMN Search Request. PLMN search is received when Reselection is ongoing
Line 1009: Sending Internal PLMN search fail as both CS and PS are disabled 
Line 1034: MM_EMER_CALL_PENDING_DURING_NORMAL_SEARCH_FLAG is enabled.
Line 1051: Omc5GCapaFlag = %d
Line 1067: mm_GsmCapDisableFlag = %d, IsThisUserSelected = %d,EplmnHasSelectedPlmn= %d
Line 1070: mm_SelectedPLMN 0x%02x 0x%02x 0x%02x  
Line 1071: mm_RetryPlmn 0x%02x 0x%02x 0x%02x  
Line 1072: mm_RetryPlmn.RetryOnSamePlmn = %d
Line 1090: User Selected PLMN so Update FLAI List  to RRC as zero to find the cell 
Line 1124: Reset all attempt counters for retry LAU and PS attach on abnormal failed PLMN as per SoR requirement
Line 1140: 
 Plmn type is 0x%x 
Line 1173: IsThisAutoToAutoResel = %d
Line 1195: 
 Cannot handle ForeGnd LIST_REQ since RAT CHANGE PROGRESS
Line 1206: 
 Save PLMN List Request message until GRR_MM_RESEL_HOLD_CNF
Line 1249: 
 When FGND PLMN Search is triggered, mm_NeedCellIndAfterRelInd is set to FALSE
Line 1255: 
 Save The Message and Process After REL  Cnf  
Line 1266: 
 Cannot handle LIST_REQ since RAT CHANGE PROGRESS
Line 1280: 
 MM Cannot Handle LIST REQ at this Time So sending LOCAL FAIL IND to PLMN 
Line 1299: 
 RRC state is PCH. So, we can send LIST_REQ
Line 1314: 
 MM Cannot Handle LIST REQ at this Time So sending LOCAL FAIL IND to PLMN 
Line 1324: Save The Message and Process After REL  Cnf  
Line 1523: 
Displaying Message Contents: %s
Line 1546: Received ActHplmn from PLMN
Line 1553: EF_ActHPLMN is not received from PLMN
Line 1610: 
Displaying Message Contents: %s
Line 1613: Updating RR(C) ActHPLMN -> 0x%02X 0x%02X 0x%02X
Line 1713: Triggering Priority PLMN Search 
Line 1736: Priority PLMN Search not needed
Line 1784: SearchCause =%d, 0: normal, 1: EM
Line 1831: %s >> PLMN search type: %s, IsSmartbandPlmnSrch: %d
Line 1864: ===SmartBand=== Selected MCC count: %d
Line 1875: ===SmartBand=== Selected MCC[%d]: %d
Line 1883: ===SmartBand=== Scanned MCC count: %d
Line 1894: ===SmartBand=== Scanned MCC[%d]: %d
Line 1902: 
Displaying Message Contents: %s
Line 1904: Discarding Saved Cell Ind
Line 1907: Requesting RR(C) to Try This PLMN -> 0x%02X 0x%02X 0x%02X
Line 1909: Auto Selection -> %s
Line 1912: Setting mm_PlmnSearchCellIndFlag to PLMN_REQUESTED_SEARCH AbortIfNewCountry : %d
Line 2049: Auto Selection -> %s
Line 2065: mm_BplmnSearchRatMode -> %s
Line 2068: mm_GetBPLMNEnabled -> %d
Line 2086: ListReq for RAT Mode MM_UMTS_RAT_MODE
Line 2107: ListReqBandNum = %d, BandList->
Line 2116: ReqChannelNum = %d, Channel list->
Line 2122: PlmnReqForOldList -> %d
Line 2124: LteRrcDetectFreqInfo.detectFreqNum = %d
Line 2134: ListReq for RAT Mode MM_GSM_RAT_MODE
Line 2161: ListReqBandNum = %d, BandList->
Line 2169: ReqChannelNum = %d, Channel list->
Line 2175: PlmnReqForOldList -> %d
Line 2192: 
Displaying Message Contents: %s
Line 2194: Requesting (U)RRC to Send Available Plmn List ...
Line 2556: MmListPtr->FastHplmnScanRequested = %d
Line 2568: FastHplmnScanRequested -> %d
Line 2569: Back Gnd SearchType -> %s
Line 2571: PlmnReqForOldList -> %d
Line 2578: ServingPlmn -> 
Line 2583: LteRrcDetectFreqInfo.detectFreqNum = %d
Line 2590: ListReqBandNum = %d, BandList->
Line 2594: network_scan request = %d
Line 2600: ReqChannelNum = %d, Channel list->
Line 2605: FreqSearchMode = %d
Line 2616: Back Gnd SearchType -> %s
Line 2620: SingleRatSearch -> %s
Line 2626: FastHplmnScanRequested -> %d
Line 2630: PlmnReqForOldList -> %d
Line 2638: LteRrcDetectFreqInfo.detectFreqNum = %d
Line 2644: ListReqBandNum = %d, BandList->
Line 2649: network_scan request = %d
Line 2655: ReqChannelNum = %d, Channel list->
Line 2661: BplmnListCause = %d
Line 2663: FreqSearchMode = %d
Line 2696: Back Gnd SearchType -> %s
Line 2703: PlmnReqForOldList -> %d
Line 2706: SingleRatSearch -> %s
Line 2711: ListSize -> %d
Line 2726: List -> 
Line 2739: ListReqBandNum = %d, BandList->
Line 2744: BplmnListCause = %d
Line 2750: ReqChannelNum = %d, Channel list->
Line 2755: FreqSearchMode = %d
Line 2804: 
Displaying Message Contents: %s
Line 2806: Requesting RRC to Try PLMN Search For CSCallResume..Try This PLMN -> 0x%02X 0x%02X 0x%02X
Line 2826: mm_GetServiceState = %d
Line 2852: PLMN SEARCH FAIL IND failCause = %d
Line 2870: 
 Redirection Failed Inform to MMC 
Line 2903: 
 Entered to mm_DecodeRrPlmnSearchFailIndMsg 
Line 2905: 
 Entered to mm_DecodeRrPlmnSearchFailIndMsg %s  
Line 2945: mm_GetServiceState = %d
Line 2976: Normal PLMN Search Fail Ind
Line 2988: 
 Entered to mm_DecodeRrPlmnSearchFailIndMsg 
Line 2990: 
 Entered to mm_DecodeRrPlmnSearchFailIndMsg %s  
Line 3090: NumberArfcn = %d,ArfcnLength =%d
Line 3147: ArfcnInfo
Line 3221: PLMN LIST IND failCause = %d
Line 3244: NumberArfcn = %d
Line 3305: ArfcnInfo
Line 3439: NumberArfcn = %d,ArfcnLength =%d
Line 3494: ArfcnInfo
Line 3572: NumberArfcn = %d
Line 3632: ArfcnInfo
Line 4001: GRR sent Network scan indication
Line 4019: URRC sent Network scan indication for FDD
Line 4043: URRC sent Network scan indication for TDD
Line 4121: mm_SendMmPlmnLteRplmnEarfcnScanAbortInd 
Line 4274: PLMN action delayed until GMM procedure completion in %s....
Line 4282: We have to Perfomr PLMN action Because we are in Idle Mode or Received No Service from RRC  
Line 4288: PLMN action delayed until PS signaling connection release... except OOS Case 
Line 4294: PLMN action delayed until RR connection release in %s 
Line 4322: GMM states are ready for list request processing 
Line 4326: PLMN action delayed until GMM procedure completion in %s 
Line 4387: UpdateInfo.Lai                 = %02X %02X %02X %02X %02X 
Line 4392: Indicating as CLASS_C_PS always for PS only type devices, ex: VZW TAB 2
Line 4423: If cell data RAI and SIM RAI are different, indicate DEREGISTERED for GMC
Line 4514: Plmn State = %s
Line 4533: HPlmn Search In Progress...
Line 4538: HPLMN search not initiated so proceed
Line 4555:  Deleting Equivalent Plmn List 
Line 4589: Copy EPLMN List : Count=%d
Line 4641: EPLMN List is not changed.. No update in Registry..
Line 4661: Deleting Forbidden LAI Lists...[24.008]-4.4.1
Line 4670: %d Hours Left to (Periodically) Delete the Forbidden LAI Lists...[24.008]-4.4.1 
Line 4732: 
Displaying Message Contents: %s
Line 4866: 
Displaying Message Contents: %s
Line 4940: 
Displaying Message Contents: %s
Line 5046: Removing Plmn 0x%02X 0x%02X 0x%02X From Equivalent Plmn List
Line 5087: PLMN Present in EHPLMN List. Not adding to FPLMN List
Line 5193: Removing Plmn 0x%02X 0x%02X 0x%02X From Forbidden Plmn List
Line 5218: Index is out of bounds, Index: %d, mm_ForbiddenPlmnCount: %d
Line 5255: Manual Forbidden Regional Lai List (%d)
Line 5267: %d > 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 
Line 5272: Manual ForbiddenRegLaiList is Empty !
Line 5279: Forbidden Roaming Lai List (%d)
Line 5291: %d > 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 
Line 5296: ForbiddenRoamingLaiList is Empty !
Line 5443: Removing Lai 0x%02X 0x%02X From Manual Forbidden Regional Lai List
Line 5445: mm_PlmnState(Manual Mode) = %s
Line 5474: Removing Lai 0x%02X 0x%02X From Forbidden Regional Lai List
Line 5476: mm_PlmnState = %s
Line 5532: Removing Plmn 0x%02X 0x%02X 0x%02X From Forbidden Gmm Plmn List
Line 5573: PLMN Present in EHPLMN List. Not adding to FPLMN List
Line 5716: Removing Lai 0x%02X 0x%02X From Forbidden Lai List
Line 5739: Unable to Remove Lai from Temp_MmPlmnCoordinationDb->mm_ForbiddenRoamingLaiList, Invalid Index (0x%02X)
Line 5902: We're in HPLMN
Line 5992: During manual mode we shall send Manual FLAI list to AS
Line 5998: During Auto mode we shall  send Auto FLAI list to AS
Line 6087: 
Displaying Message Contents: %s
Line 6091: Send FLAI list in manual mode.
Line 6144: NeighborBandNumber = %d
Line 6149: In Perform Cell indication actions for PLMN_REQUESTED_SEARCH, Resetting mm_PlmnSearchCellIndFlag to PLMN_AUTONOMOUS_SEARCH
Line 6154: In Perform Cell Indication actions for PLMN_AUTONOMOUS_SEARCH %d
Line 6160: FTaiLaiListFlag %d (0:FALSE, 1:TRUE)
Line 6183: NeighborBandNumber = %d
Line 6211: CS call is not released yet. Ask PLMN to search current RAT
Line 6234: PLMN perform actions: PLMN list size  -> %d, PLMN list pointer -> %d 
Line 6238: 
Memory Allocation failed
Line 6244: 
 mm_Stored_MmNoCellInd.ListPtr is NULL.
Line 6472: No MM/GMM Specifc Procedure is ongoing
Line 6725: Invalid PlmnIndex used in mm_GetEquivalentPlmnListPlmn !
Line 6761: mm_PerformPlmnActions with Actions %s, Cause: %d
 
Line 6772:  SAME LA: CCO/Reselection in PS COnnected  is ongoing, dont trigger LOC_UPD perform action, LOC_UPD will be triggered on receiving RATMode change complete
 
Line 6812: Power off detach is pending, Further PLMN selection is not expected from PLMN
Line 6821: Waiting for PS release cnf to take LOC_UPD_FAIL action
Line 6830: Resetting HOLD PLMN RSP for MM_NOT_AUTHORISED_FOR_CSG REJECT Cause 
Line 6860: Resetting values in mm_HandlePlmnSelNeededSameSimRejCause
Line 6869: Resetting values in mm_HandlePlmnSelNeededSameSimRejCause
Line 6893: 
Displaying Message Contents: %s
Line 6974: Entered to mm_DecodePlmnActionsRsp %d ,%d	
Line 7022: mm_CheckAndPerformPsRegActionsOnRelease: Attach not done now!! 
Line 7071: mm_PerformPlmnActionsRsp::Cause = %d
Line 7140: mm_PerformPlmnActionsRsp:: PLMN module tried search on both RATs Release the Emergency call if Pending 
Line 7144: mm_PerformPlmnActionsRsp:: Tried on both Rats no Suitable PLMN found and Release the call 
Line 7155: PerformPlmnActions for EMERGENCY CALL has failed (or) emergency call attempt already cleared. Release CSCALL grant..
Line 7183: mm_PerformPlmnActionsRsp:: No Action Taken by GMC so send RESEL OK to GRR 
Line 7193: mm_PerformPlmnActionsRsp:: Case %d , No Actions to be performed 
Line 7238: PLMN mismatch occured, Requesting URRC to hold Cell Selection and Reselection, Since PLMN Search will come from GMC
Line 7243: PLMN mismatch occured, Requesting GRR to hold Cell Selection and Reselection, Since PLMN Search will come from GMC
Line 7260: Entered to mm_DecodePlmnSelectRsp %d ,%d	
Line 7280: [23.122]-4.4.3.1 says that << At switch on, or following recovery from lack of coverage,
Line 7281: the MS selects the registered PLMN or equivalent PLMN...>> 
Line 7282: We are NOT in the Registered Plmn Area -> Must go back to Reg. Plmn.... Please Wait
Line 7296: No Action Taken in Recovery From Loss of Coverage
Line 7309: mm_ProcessPlmnSelectRsp :: UNKNOWN CASE %d ,%d	
Line 7332: Plmn State = %s in mm_PerformCellIndGenPlmnActions
Line 7351: Checking The selected PLMN/EqPLmn and CELL DATA LAI Are Not Matched
Line 7366: If UE is redirected under UTRAN control any limitation shall be removed...
Line 7374: In manual PLMN selection redirection failure will be informed...
Line 7389: Set PLMN State Recover Is Needed from PLMN Task
Line 7418: Checking to See if MM / GMM PRocedures are in Progress - MM_CheckMmGmmProcsInPlmnSelModeChange
Line 7433: Breaking GMM Connections in order to do Manual Plmn Selection...
Line 7466: Initiating RR Connection Release Due to Manual Plmn Selection By User. Selected Plmn Will be Sent to (U)RRC when MM is back in IDLE !!....
Line 7481: RR REL REQ already sent so wait till we get confirm
Line 7565: [GSM REDIRECTION INFO] ====> ARFCN(%d) BandInd(%d) NumOfArfcn(%d)
Line 7573: Foll Arfcn Info also Set
Line 7584: L2G CellInfoList Copied..
Line 7585:  CellInfoList : NumCellInfoList=%d 
Line 7658: ReSet MMC Redirect to 2G3G Info
Line 7725: mm_SendRrRedirectReqMsg  Redirect To -> %s
Line 7728: Auto Selection-> %s
Line 7733: Plmn = 0x%02X 0x%02X 0x%02X  in mm_SendRrRedirectReqMsg.
Line 7751: [3G Redirection]Requesting UArfcn -> %d
Line 7791: [DT Requirement for FastSearch For L2U CSFB is applied.
Line 7798: 2G neighbor cell exist in redirection info so 3G cell search time is within 5 seconds.
Line 7802: IsFastSearchForCSFB = %d 
Line 7856: L2G CellInfoList Sending to RR..
Line 7857:  CellInfoList : NumCellInfoList=%d 
Line 7865: [2G Redirection]Requesting Arfcn -> %d , Band Ind - %d
Line 7877: 
Displaying Message Contents: %s
Line 7880: Requesting RR(C) to Rediret to this PLMN -> 0x%02X 0x%02X 0x%02X
Line 7912: Rat Mode Change state %s, MM Rat : %s, GMC Rat : %s, Rat Mismatch Count : %d
Line 7924: RAT Mismatch Identified for Maximum times MM Rat : %s, GMC Rat : %s
Line 7969: Is2GDisabled: %d and Is3GDisabled: %d 
Line 7971: UpdateInfo.GsmCapaDisableState: %d and UpdateInfo.UmtsCapaDisableState: %d 
Line 7994: mm_UmtsMode: %d and mm_UmtsMode received from GMC: %d 
Line 8015: isCommercialPlmnId? (%d), mm_SimProvider? (%d), Iot? (%d)
Line 8060: PLMN_RECOVERY_TIMER Started So send Indication to CM
Line 8065:  UpdateInfo.EutraCapbDisableState %d, UpdateInfo.NrEutraUpdatedCause: %d, UpdateInfo.NrCapbDisableState: %d
Line 8074: Eutra enabling actions are pending, discard Eutra disable actions as enable is not done
Line 8134: Added New Received EF_ActHPLMN to HPLMN List
Line 8137: Displaying the New Act HPLMN
Line 8212: 
Available time to sleep:%d
Line 8398: IsThisAutoToAutoResel = %d, BplmnSearchRat: %d, BPlmnListCause: %d
Line 8403: 
 Cannot handle mm_DecodeStartBplmnDrxInfoShareInd since RAT CHANGE PROGRESS
Line 8418: 
 Cannot handle mm_DecodeStartBplmnDrxInfoShareInd because of PS session
Line 8426: 
 Cannot handle mm_DecodeStartBplmnDrxInfoShareInd because of on-going signalling
Line 8438: 
 Cannot handle mm_DecodeStartBplmnDrxInfoShareInd because of PS session
Line 8446: 
 Cannot handle mm_DecodeStartBplmnDrxInfoShareInd because of on-going signalling
Line 8482: BplmnListCause = %d
Line 8500: BplmnListCause = %d
Line 8581: 
Received Sleep Time: %d, Sleep Sent to MM: %d
Line 8623: Processing pending suspension which was received from GMC, as BPLMN is completed 
Line 8676: BPLMN_STOP_CNF: Process the saved PLMN_MM_RAT_CHANGE_REQ 
Line 8702: This is Re-try cause until 4 times
Line 8805: Reg status is saved.
Line 8817: Saved state : %d, %d, PLMN matching : %d
Line 8833: On the previous registering PLMN again, GMM reg status is retrieved now!!!
Line 8914: mm_CheckIfSkipGSM => Result =%d
Line 8947: 
 When FGND CSG PLMN Search is triggered, mm_NeedCellIndAfterRelInd is set to FALSE
Line 8952: 
 Save CSG LIST Req Message and Process later  
Line 8963: 
 Cannot handle LIST_REQ since RAT CHANGE PROGRESS
Line 8969: 
 MM Cannot Handle CSG LIST REQ at this Time So sending LOCAL FAIL IND to PLMN 
Line 8993: CSG List Update Request sent ...
Line 9013: CSG Select Request mm_GsmCapDisableFlag = %d, IsThisUserSelected = %d
Line 9019: User Selected PLMN SoDelete and Update FLAI List  to RRC to find the cell 
Line 9038: 
 Plmn type is 0x%x 
Line 9068: 
 Save The CSG Select Message and Process Later
Line 9129: 
Displaying Message Contents: %s
Line 9187: GSM current RAT... CSG List Req not able send ...
Line 9208: GSM current RAT... CSG List Req not able send ...
Line 9259: mm_BplmnSearchRatMode -> %s
Line 9260: mm_GetBPLMNEnabled -> %d
Line 9310: Back Gnd SearchType -> %s
Line 9345: Back Gnd SearchType -> %s
Line 9370: MULTI_ BPLMN_SUPPORT CSG ListReq in MM_GSM_RAT_MODE
Line 9392: ListReq for RAT Mode MM_UMTS_RAT_MODE
Line 9425: No Multimode background CSG ListReq in MM_GSM_RAT_MODE
Line 9434: 
Displaying Message Contents: %s
Line 9436: Requesting (U)RRC to Send Available Plmn List ...
Line 9461: CsgListCount -> %d, UiccCsgAwareness -> %d
Line 9507: 
CgdIdCount is 0..
Line 9593: 
Memory Allocation failed
Line 9694: 
Memory Allocation failed
Line 9746: mm_CsgRegistrationNeeded is %d
Line 9777: 
Wrong CSG selection mode type
Line 9793: 
Displaying Message Contents: %s
Line 9795: Requesting RR(C) to Try This PLMN -> 0x%02X 0x%02X 0x%02X
Line 9797: Setting mm_PlmnSearchCellIndFlag to PLMN_REQUESTED_SEARCH
Line 9806: GSM current RAT... CSG Search Req not able send ...
Line 9887: Memory Allocation failed
Line 9894: Visited CSG List byte size 0...
Line 9937: Wrong MSG type in mm_SendMmPlmnAbortCsgListCnf...
Line 9988: Memory Allocation failed
Line 10053: 
CSG INFO ==> mm_CsgId : %d, mm_CsgSelStatus : %d mm_HnbNameLen : %d, mm_CsgCellType : %d
Line 10108: GSM current RAT... CSG List Req not able send ...
Line 10176: GSM current RAT... CSG Visisted List Ind not able send ...
Line 10195: GMC triggered PLMN search request on LTE RAT Omc5GCapaFlag %d... 
Line 10217: MmSignalPendingInd.Cause: %d
Line 10232: unexpected received during != PMM CONNECTED state
Line 10241: Ps release need to be triggered for cause: %d 
Line 10246: No action is needed as PS is already released
Line 10251: Unexpected cause is received
Line 10293: Prev Rrc State: %d, Rrc_State: %d, in mm_UpdateGmmRrcState() 
Line 10301: State was changed to PCH
Line 10308: RRC State was not changed.
Line 10314: State was changed from PCH
Line 10359: 
Displaying Message Contents: %s
Line 10368: 
Unable to send message due to wrong RAT
Line 10401: Triggering saved PLMN list request after GRR_MM_RESEL_HOLD_CNF
Line 10561: For US product Disabling A5_4
Line 10581: EncodedSizeinBits -> %d 
Line 10634: MCC- - 0x%x 
Line 10671: mm_SendPlmnLteRplmnEarfcnScanReq : Guardtimer-> %d s, SrcRat = %d, isFastScan = %d, RatToScan = %d
Line 10707: DetectFreqNum - %d 
Line 10708: Result - %d 
Line 10709: SrcRat - %d 
Line 10733: arfcn - %d,rxlev - %d 
Line 10764: arfcn - %d,rxlev - %d 
Line 10775: Wrong Src Rat - %d, No Action 
Line 10798: mm_CheckSilentResetCondition ConditionDomain - %d, Cause - %d, Operator - %d 
Line 10846: mm_CheckSilentResetCondition Unwanted REJ cause
Line 10975: mm_GprsNotAllowedInHPlmn = %d
Line 11214: Feature Rej7 to Rej14 is not enabled.
Line 11224: Converting Rej7 to Rej14 on mcc: %x, mnc: %x.
Line 11300: VzWCommercialSimCard(%d)
Line 11362: MmForcedHigherRatSearchReq.status is 0 (STOP).
Line 11372: Qrb is ignored. 
Line 11451: EMC mode to URRC (%d)
Line 11479: EMC mode to GRR (%d)
Line 11529: PS registration not possible as current cell in GMM FPLMN list 
Line 11553: Cause received =%d 
Line 11589: PlmnId:%2x is present at Index:%d  in A5_4_Disable_PlmnList,So disable A5_4 
Line 11627: StackID received:%2x 
Line 11631: Default registry is enabled so new logic of A5/4 Plmn list is disabled 
Line 11637: For US product Disabling A5_4
Line 11641: Camped PLMN is TEST NW ,So enable A5_4
Line 11650: PlmnId:%2x is present at Index:%d  in A5_4_PLMN_LIST,So enable A5_4 
Line 11733: GEA2 Disabled by default . Return
Line 11739: Camped PLMN is TEST NW ,So enable GEA_2
Line 11748: PlmnId:%2x is present at Index:%d  in mm_Gea2DisablePlmnList, So Disable GEA_2 
Line 11797: StackID received:%2x 
Line 11800: Default registry is enabled so new logic of enabling Gea4  based on operator list is not needed 
Line 11807: Camped PLMN is TEST NW ,So enable GEA_4
Line 11816: PlmnId:%2x is present at Index:%d  in mm_Gea4EnablePlmnList,So enable GEA_4 
Line 11918: StackID received:%2x 
Line 11980: StackID received:%2x 
Line 11989: PlmnId received as NULL
Line 12025: StackID received:%2x 
Line 12039: PlmnId received as NULL
Line 12066: Hplmn MCC %d, CountryCode: %d
Line 12071:  Setting Test Network
Line 12169: T3247 PsSimInvalidCount = %d , T3247 CsSimInvalidCount = %d, T3247 SimInvalidMaxCount = %d
Line 12245: T3245 and T3247 are not supported
Line 12272: T3245/T3247 mm_SetForbiddanceConfig ConfigVal(%d), NwCause(%d), T3247Counters(%d)
Line 12372: Forbiddance Result Indication : Timer Action = %d, 
Line 12379: T3245 Expiry Action, set SIM as valid, 
Line 12432: T3247 Expiry Action, CS SimInvalidCount = %d, PS SimInvalidCount = %d 
Line 12437: Forbiddance Result Indication Action (%d) is wrong
Line 12591: mm_HandleRejectCauseFornonIntegrityProtection :: Unwanted REJ cause
Line 12659: Perform TbfRelAction, MM_COORD_TBF_REL_ACTION
Line 12813: Removing Lai 0x%02X 0x%02X From Forbidden Lai List
Line 12836: Unable to Remove Lai from Temp_MmPlmnCoordinationDb->mm_ForbiddenLaiCsList, Invalid Index (0x%02X)
Line 12900: mm_SetNonIntegrityProtectionRejectFlag is Flag = %d
Line 12929: While manual plmn selection is in progress, skip to sync up Plmn Attribute
Line 12933: After combined Attach reject for PS disable LAU is pended..
Line 12975: Setting RAU Needed as QRB pending 
Line 12977: QRB state:%s.
Line 12993: FORCED_HIGHER_RAT_SEARCH will come and QRB will strat.
Line 13027: Setting RAU Needed as QRB pending 
Line 13074: Normal PLMN Search Fail Ind
Line 13193: 
 Fail Cause from URRC:%d  
Line 13275: PlmnSelNeeded is %d, TriggerGmmRelReq %d
Line 13284: Request 2G to stop IRAT reselection if it is on going
Line 13289: Requesting URRC to hold Cell Selection and Reselection, Since PLMN Search will come from GMC
Line 13302: SoR Feature Status in registry == TRUE, SoR #17 reject action will be performed
Line 13307: Toggle RetryOnSamePlmn F -> T
Line 13312: Toggle RetryOnSamePlmn T -> F
Line 13339: Reset  mm_RetryPlmn
Line 13431: PlmnSelNeeded is %d
Line 13447: Request 2G to stop IRAT reselection if it is on going
Line 13451: Set MM state to limted service to block triggering LAU before CELL_IND/PLMN selection
Line 13460: SoR Feature Status in registry == TRUE, SoR #17 reject action will be performed
Line 13465: Toggle RetryOnSamePlmn F -> T
Line 13470: Toggle RetryOnSamePlmn T -> F
Line 13482: PlmnSelNeeded is %d
Line 13495: Reset  mm_RetryPlmn
Line 13510: Blocking PLMN selection for ATT requirement
Line 13516: Requesting URRC to hold Cell Selection and Reselection, Since PLMN Search will come from GMC
Line 13601: CommercialSimCard(%d)
Line 13785: mm_ConvPlmnProvPalToMm Default Case handling
Line 13788: mm_ConvPlmnProvPalToMm Pal Value:%d MM Value:%d
Line 13942: mm_UpdateSimProvider StackID: %d
Line 13972: mm_UpdateNewCampedPlmnInfo StackID: %d
Line 1656: Is CMCC PLMN %d, is User Selected PLMN %d
Line 1657: Is CMCC PLMN Selected by User %d
Line 1965: Arfcn_number = %d
Line 1977: Updated values -> ListBuffIndex = %d, ArfcnBuffIndex = %d 
Line 1993: MmListPtr->RatToSearch==>MM_UMTS_RAT_MODE
Line 2323: ListSize -> %d
Line 2332: List -> 
Line 2369: BPlmnGsmCellDesc
Line 2462: ListSize -> %d
Line 2476: List -> 
Line 6520: Waiting for PS release cnf to take LOC_UPD_FAIL action
Line 6551: Optional plmn selection for verizon PS only devices after max attempts
Line 6593: Optional plmn selection for verizon PS only devices after max attempts
Line 6603: Optional plmn selection for Device operating in Mode A after max attempts
Line 6611: Request 2G to stop IRAT reselection if it is on going
Line 6616: Requesting URRC to hold Cell Selection and Reselection, Since PLMN Search will come from GMC
Line 6653: Optional plmn selection after max attempts
Line 6662: Request 2G to stop IRAT reselection if it is on going
Line 6667: Requesting URRC to hold Cell Selection and Reselection, Since PLMN Search will come from GMC
Line 6686: EMERGENCY CALL, Making DSNC State to CS CALL Direcltly before sending PerformPlmnActions
Line 6700: Incorrect PLMN action %d
Line 6391: Reset  mm_RetryPlmn
Line 6309: PlmnSelNeeded is %d 
Line 6353: ReleaseWithRedirection : %d
