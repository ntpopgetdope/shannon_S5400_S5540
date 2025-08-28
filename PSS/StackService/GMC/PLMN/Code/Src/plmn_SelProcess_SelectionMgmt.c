Line 454:    PlmnSelectionDB is_update_needed : %d -> %d 
Line 474: [W]%s: NULL PLMN ID pointer
Line 586:    ===SmartBand=== set smart band state: %s -> %s
Line 673:    ===SmartBand=== Initial isPlmnBandSkip: %d -> %d
Line 723:    ===SmartBand=== isSmartBandSearchDone: %d -> %d
Line 778:    ===SmartBand=== Initial plmnSelectionState: %s -> %s
Line 828:    ===SmartBand=== Initial RAT: %s -> %s
Line 891:    ===SmartBand=== Selected plmn 0x%06x -> 0x%06x
Line 928:    Remove Selected plmn 0x%06x in NR available PLMN list
Line 935:    Remove Selected plmn 0x%06x in LTE available PLMN list
Line 942:    Remove Selected plmn 0x%06x in UMTS available PLMN list
Line 949:    Remove Selected plmn 0x%06x in GSM available PLMN list
Line 1015:    ===SmartBand=== searchRat: %s -> %s
Line 1114:    ===SmartBand=== selected MCC[%d] %d
Line 1152:    ===SmartBand=== selected MCC[%d] %d
Line 1254:    ===SmartBand=== scanned MCC[%d] %d
Line 1293:    ===SmartBand=== scanned MCC[%d] %d
Line 1343:    ===SmartBand=== Complete PLMN band scan
Line 1346:    ===SmartBand=== Start MCC band scan
Line 1355:    ===SmartBand=== Complete MCC band scan
Line 1367:    === Smart OOS === Skip REMAIN band scan
Line 1375:    ===SmartBand=== Start REMAIN band scan
Line 1384:    ===SmartBand=== Start MCC DELTA band scan
Line 1392:    ===SmartBand=== Skip REMAIN band scan
Line 1401:    ===SmartBand=== Complete MCC DELTA band scan
Line 1411:    ===SmartBand=== Start REMAIN band scan
Line 1418:    ===SmartBand=== Skip REMAIN band scan
Line 1426:    ===SmartBand=== Complete REMAIN band scan
Line 1433: [W]%s : ===SmartBand=== Invalid state
Line 1461:    Changing RAT to Request Search for HPLMN/RPLMN
Line 1478: [I]SmartBand search complete.
Line 1623: [W]Reset MCC list due to invalid smart band state: %s
Line 1760:    GMCF::CTX::pPlmnSelectionDB->Data.FirstPlmnInitFlag(%d) : %d -> %d 
Line 1775:    GMCF::CTX::pPlmnSelectionDB->PlmnState.PrevPlmnState(%d) : 0x%x -> 0x%x 
Line 1798:    pPlmnSelectionDB->Data.PlmnState : %s -> %s (%d)
Line 1808:    SmartOOS: start in service
Line 1832:    SmartOOS: stop in service timer
Line 1894:    pPlmnSelectionDB->Data.PlmnSelectionState : %s -> %s (%d)
Line 1923:    GMCF::CTX::pPlmnSelectionDB->PlmnState.PlmnSelStartedFlag(%d) : %d -> %d 
Line 1939:    GMCF::CTX::pPlmnSelectionDB->PlmnState.FirstPlmnSelFlag(%d) : %d -> %d 
Line 1955:    GMCF::CTX::pPlmnSelectionDB->PlmnState.PowerUpPlmnSelFlag(%d) : %d -> %d 
Line 1973:    GMCF::CTX::pPlmnSelectionDB->StoredFrqnSrchFlag(%d) : %d -> %d 
Line 1991:    GMCF::CTX::pPlmnSelectionDB->Data.LOCFlag(%d) : %d -> %d 
Line 2008:    GMCF::CTX::pPlmnSelectionDB->Data.TotalLOCFlag(%d) : %d -> %d 
Line 2039:    GMCF::CTX::pPlmnSelectionDB->Data.ListReqCause(%d) : 0x%x -> 0x%x 
Line 2056:    GMCF::CTX::pPlmnSelectionDB->Data.KeepAllListsFlag(%d) : %d -> %d 
Line 2074:    GMCF::CTX::pPlmnSelectionDB->Data.RatChangeNeededForRPlmnFlag(%d) : %d -> %d 
Line 2079:    GMCF::CTX::pPlmnSelectionDB->Data.PreventSendingLastPlmnFlag(%d) : %d -> %d 
Line 2084:    GMCF::CTX::pPlmnSelectionDB->Data.PreventSendingLastPlmnEitherRatFlag(%d) : %d -> %d 
Line 2089:    GMCF::CTX::pPlmnSelectionDB->Data.CheckHPlmnInAvailablePlmnListFlag(%d) : %d -> %d 
Line 2094:    GMCF::CTX::pPlmnSelectionDB->Data.RPlmnInForbiddenListOrDeletedFlag(%d) : %d -> %d 
Line 2102:    GMCF::CTX::pPlmnSelectionDB->Data.SkipSearchRatMode(%d) : 0x%x -> 0x%x 
Line 2109:    GMCF::CTX::pPlmnSelectionDB->Data.SorReselection(%d) : %d -> %d 
Line 2127:    GMCF::CTX::pPlmnSelectionDB->Data.DemoteFailedLteRplmnDuringEmcAnyPLMNSearch(%d) : %d -> %d 
Line 2156:    GMCF::CTX::pPlmnSelectionDB->Data.ContinuePlmnSelection(%d) : 0x%x -> 0x%x 
Line 2162:    GMCF::CTX::pPlmnSelectionDB->Data.checkHplmnSearchFlag(%d) : %d -> %d 
Line 2179:    GMCF::CTX::pPlmnSelectionDB->Data.AwaitingCellIndAfterPlmnSearchReqFlag(%d) : %d -> %d 
Line 2198:    GMCF::CTX::pPlmnSelectionDB->TryHPlmnAfterRPlmnSearchFailFlag(%d) : %d -> %d 
Line 2247:    PLMN Selection in progress !
Line 2451:    Stored Search is not ongoing....
Line 2553:    Unexpected Non LTE supported SingleDualMode
Line 2557:    Last RAT Order : %d 
Line 2630: [W]Invalid PLMN Selection state : %s (%d)
Line 2683: [W]Invalid PLMN Selection state : %s (%d)
Line 2735: [W]Invalid PLMN Selection state : %s (%d)
Line 2854:    %s : %s
Line 2873:    %s : %s
Line 2914:    %s : ManualPlmnSelRspNeeded (%d) powerUpSelection(%d) StopByModeSelChanged (%d)
Line 2926:    Done with All RATs for Reg PLMN, Selecting ANY Plmn -- Manual Mode
Line 2985:    HPLMN not found on all RATs, Selecting Any PLMN -- Manual Mode 
Line 3001:    ManualPlmnSelRspNeeded (%d) powerUpSelection(%d)
Line 3024:     User selected PLMN not found on all RATs, Selecting Any PLMN -- Manual Mode
Line 3090:    %s : EHPLMN found in available PLMN -> Start Fresh Home Plmn Search
Line 3333:    %s : Result = %s
Line 3351:    %s : TargetRat = %s, forcedSearch = %d 
Line 3354: [W]Plmn Selection is in Progress in %s. So Wait for Search to Complete
Line 3361: [W]Resume RAT directly to start search action
Line 3369: [W]Plmn Selection is in Progress in %s but not on RPLMN. Suspend ongoing search and start RPLMN search
Line 3387: [W]Mode changed or CSFB Call End in Manual Mode, No RPLMN available
Line 3573:    %s
Line 3591:    a. Invalid SIM. Trying for any PLMN 
Line 3601:    b. Automatic mode
Line 3605:    Trying to Go back to Previous PLMN in Automatic Mode
Line 3613:    Trying to Go back to Previous PLMN in Automatic Mode
Line 3623:    Initiate HPLMN Search
Line 3629:    Lists Already Exists. Start selection using List
Line 3640:    c. Manual Mode
Line 3646:    Trying to Go back to RPLMN in Manual Mode
Line 3654:    Dont Have Any registered PLMN So Camp on to Limited Service
Line 3664:    RecoveryAbandoned: TRUE
Line 3709:    Current Procedure(%d). Start New Procedure After short deep sleep : %d 
Line 3728:    Current Procedure(%d). Start New Procedure After short deep sleep : %d 
Line 3754:    UE START fresh PLMN selection
Line 3791: [W]It Should Not come here
Line 3795:    %s : %06x 
Line 3907:    %s : needBlindSearch - %d 
Line 3939:    %s : nextRat - %s, %06x
Line 3940:    %s, RPlmnInForbiddenListOrDeletedFlag = %d
Line 4070: [W]%s : Unexpected result(0x%x) from Plmn_CheckGlobalRoaming 
Line 4075:    %s - PLMN : %06x -> %06x, RAT : %s -> %s 
Line 4103:    %s : PlmnListSearch Started as %06x is blocked in %s.
Line 4164:    Stored RPLMN/HomePLMN scan failed after LAU Max Failure, trigger PLMN List request on all RATs
Line 4182:    Share grant with other stack after stored scan on all RATs
Line 4204:    %s : PlmnListSearch Started as %06x is blocked in %s.
Line 4255: %s:: Entry 
Line 4267:    SIM Absent. Try emergency
Line 4272: [W]SIM READ RSP not received yet.
Line 4277:    SIM INVALID. Try emergency
Line 4316:    %s : plmnSelectionCause %d,(MccProcedureNeeded: %d)
Line 4322: [W]Plmn Selection is not triggered -> Wrong plmnSelectionCause (%d) or Stack is not Initialized yet 
Line 4360:    [DSDS]: EUTRA Status: %d 
Line 4361:    [DSDS]: ServiceDomain: %d 
Line 4382:    Perform NR disable action for IMS not supported.
Line 4433: %s:: Exit 
Line 4459: [W]Process deferred mode update for new_mode %s which is same with current_mode.(NSA only supported = %d)
Line 4478:    Is5gpmSaDeprioritizationEnabled: %d
Line 3137: [I]Plmn Selection Mode : %s
Line 3151:    %s :
Line 3152:    Special Check for H3G Fast Camping/Recovery
Line 3245:    H3G and 2G NRP Condition satisfied. Changing from 2G NRP (%06x) --> H3G PLMN (%06x) 
Line 3264:    H3G Condition satisfied. Changing from H3G PLMN (%06x) --> 2G NRP (%06x)
Line 3504: [W]%s - No PLMN recovery - NoSavedPlmnOption = %d
Line 2408:    %s : Do power on optimization by releasing grant 
