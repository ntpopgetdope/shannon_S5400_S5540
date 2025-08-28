Line 207:    GMCF::CTX::pPlmn_BplmnDb->IsEnabled(%d) : %d -> %d 
Line 235:    GMCF::CTX::pPlmn_BplmnDb->BplmnState(%d) : 0x%x -> 0x%x 
Line 264:    GMCF::CTX::pPlmn_BplmnDb->BplmnProc(%d) : 0x%x -> 0x%x 
Line 288:    GMCF::CTX::pPlmn_BplmnDb->AbortCause(%d) : 0x%x -> 0x%x 
Line 290:    BCKGND List Abort Cause : 0x%x, 0x%x -> 0x%x (%s) 
Line 326:    BCKGND Resume Rat Info : Flag 0x%x, 0x%x -> 0x%x 
Line 346:    GMCF::CTX::pPlmn_BplmnDb->SearchingRat(%d) : 0x%x -> 0x%x 
Line 366:    GMCF::CTX::pPlmn_BplmnDb->BplmnScanMode(%d) : 0x%x -> 0x%x 
Line 386:    GMCF::CTX::pPlmn_BplmnDb->BplmnScanRequestType(%d) : 0x%x -> 0x%x 
Line 405:    GMCF::CTX::pPlmn_BplmnDb->IsBplmnListPartial(%d) : %d -> %d 
Line 424:    GMCF::CTX::pPlmn_BplmnDb->PlmnRecovTimExpActionFlag(%d) : %d -> %d 
Line 440:    GMCF::CTX::pPlmn_BplmnDb->FastScanInProgress(%d) : %d -> %d 
Line 463:    Bplmn procedure is going on !
Line 509:    %s : EMM State: %d , SRTimerType:%d
Line 526:    LTE BPLMN - MO/MT call/Service Request/Detach triggered; abort BPLMN if running on other RATs
Line 548:    LTE BPLMN - No BPLMN Action Taken. Wait for BPLMN_FAIL_IND from L-RRC
Line 551:    LTE BPLMN - TAU or RA proc in progress; Start Recovery timer
Line 552:    LTE BPLMN - Already BPLMN recovery timer running or abort initiated
Line 558:    LTE BPLMN - No Action taken in EMM/MM State: %s
Line 562:    %s : BPlmnState = 0x%x 
Line 583:    %s : NRMM State: %d , SRTimerType:%d
Line 601:    NR BPLMN - MO/MT call/Service Request/Detach triggered; abort BPLMN if running on other RATs
Line 613:    NR BPLMN - No BPLMN Action Taken. Wait for BPLMN_FAIL_IND from NR RRC
Line 617:    NR BPLMN - TAU or RA proc in progress; Start Recovery timer
Line 618:    NR BPLMN - Already BPLMN recovery timer running or abort initiated
Line 624:    NR BPLMN - No Action taken in NRMM State: %s
Line 628:    %s : BPlmnState = 0x%x 
Line 658:    LIST REQ aborted/to be aborted if collision case.
Line 675: [I]Bplmn State: %s, Procedure: %s 
Line 687:    ABORT_REQ sent, Wait for ABORT_CNF to perform Recovery Actions
Line 705:    BPLMN already aborted. BPLMN Timer running /BPLMN operations set for actions after release
Line 714:    CELL LOST & BPLMN_RECOVERY_TMR not running, Send Abort
Line 715:    BPLMN scan was running on Active RAT, AS will perform internal Abort. Do PLMN abort confirm actions
Line 717:    ABORT not sent, perform Recovery Actions immediately
Line 728:    Abort HPLMN --> Trigger Recovery action
Line 752:    %s : %s (%d)
Line 775: [W]STOP HPPLMN search. Reset BPLMN context
Line 785: ATT FAIL: Procedure deferred -> after BPLMN Abort Cnf
Line 936: [W][Warning] Plmn_GetBplmnMccBand() passed in NULL bplmnBandMap, returning BplmnBandNum(0)...
Line 960:    %s : Cause - 0x%x
Line 1235:    %s : nextRatMode(%s) 
Line 1238: [!]%s : Fail - uCase = %d 
Line 1241:    %s : Requesting Plmn List from %s RAT
Line 2585:    %s uCase = %d
Line 3175:    %s -%d
Line 3185:    %s, %s, %s
Line 3199:    Only Stored scan(completed). Found Complete List for %s 
Line 3200:    Both Stored and Blind scan (completed). Found Complete List for %s 
Line 3236:    List Req is sent Passive RAT; Send DRX stop first 
Line 3242:    Start blind BPLMN scan after stored BPLMN is completed
Line 3243:    Recovery actions are taken. No additional actions required!
Line 3250:    Only stored scan performed. Restart OOS Timer
Line 3280: [I]Bplmn State: %s, Procedure: %s 
Line 3313: [W]Search must be in foreground ( BPLMN Enabled : %s, Bplmn Searching: %s ) 
Line 3321:    Complete List not Found so Send List Req for Next Rat 
Line 4039: [W]Unknown Bplmn Init Type (0x%02X)
Line 4062: %s:: Entry 
Line 4064: %s : %d, (%s , %s) 
Line 4072: PLMN::BPLMN:Begin - Cause(%d) 
Line 4101: PLMN::BPLMN:ListAbort Req - Cause(%d) 
Line 4127: PLMN::BPLMN:ListAbort Req - Cause(%d) 
Line 4135: PLMN::BPLMN:Abort Req (LOC) - Cause(0x%x) 
Line 4143: PLMN::BPLMN:Abort Req (CSFB) - Cause(0x%x) 
Line 4160: [W]Bplmn is on-going, ABORT ongoing BPLMN procedure and process CALL_REQ after Abort completion !
Line 4172: PLMN::BPLMN:ListRsp from %s 
Line 4194: PLMN::BPLMN:ListAbort Cnf - %s 
Line 4214: PLMN::BPLMN:ListFail from %s 
Line 4222: PLMN::BPLMN:<Process resumed. Recovery Timer Expired> 
Line 4231: PLMN::BPLMN:RPLMN EARFCN Scan Req - %s 
Line 4238: PLMN::BPLMN:RPLMN EARFCN Scan Abort Ind 
Line 4253:    %s : Result = 0x%x 
Line 4254: %s:: Exit 
Line 4269:    BPLMN DB is_update_needed : %d -> %d 
Line 862:    %s: 
Line 840:    %s :
Line 1255: PLMN::BPLMN:<Process Suspended. Wait Recovery Timer Expiry> 
Line 1290:    %s : CurrentRat : %s , AbortCause - %s (0x%x)
Line 3115:    Candidate PLMN detected. No actions required!
Line 3134:    Stored BPLMN scan failed. Do not start blind BPLMN scan
Line 3874: PLMN::BPLMN:Send PLMN list req - %s 
Line 3800: [I]Plmn State : %s (%s)
Line 3801:    bplmn enabled = %d, ENS enabled = %d
Line 3802:    Starting BPLMN Search on RAT: %s 
Line 3804: PLMN::BPLMN:Send PLMN list req - %s 
Line 3982: PLMN::BPLMN:Send PLMN list req - %s 
Line 3955: PLMN::BPLMN:Send PLMN list req - %s 
Line 3901: Start BPLMN for IMS RAT scan
Line 3907: Wait for release to start IMS RAT scan
Line 2962:    %s : Cause[0x%x] - %s 
Line 3041:    PLMN_BACKGND_ABORT_DUE_TO_RESEL. RatChangeListReqBlock: %d 
Line 3095: [W]Invalid cause
Line 2707: [W]Warning !! CSG BplmnSearchRat : %s
Line 2821:    %s : AbortCause - %s (0x%x), RatChangeListReqBlock - %d
Line 2826: [W]Should not come here BPLMN search is %s
Line 2862:    Invalid RAT mode: %s, Should not come here!!!!
Line 2874:    Active RAT is %s and BPLMN search ongoing on other RAT (%s);
Line 2880:    BPLMN scan was running on Active RAT, AS will perform internal Abort. Do PLMN abort confirm actions
Line 2936:    Abort Cause: %d not handled; Not taking any actions
Line 2772:    Eutra Disabled. Perform EUTRA Disable actions
Line 2773:    NR Disabled. Perform NR Disable actions
Line 1847:    %s : %s - AbortCause[%s][0x%x]
Line 1848:    %s : ListReqCause[0x%x], CsgListProg[%d]
Line 1851:    Invalid state to handle BplmnAbortCnf ! SEARCH_FLAG(%d) BACKGND_PLMN_LIST_REQ_CAUSE(%d)
Line 1918:    NW scan in progress
Line 1927:    lossCov during BPLMN for IMS RAT, treat as perm abort and reset BPLMN context
Line 1975:    Performing Pending ProSe action (resume LTE)
Line 1674:    Invalid cause
Line 1601:    After No Cell Ind & abort procedure without FAIL_IND Start PLMN Search
Line 1610:    Save available List Locally 
Line 1631:    Retreive the locally saved available List and update list 
Line 1715:    BPLMN recovery failed in BPLMN, Ignore Foreground recovery actions.
Line 1719:    GuardTimer expired before List results for IMS RAT search, send AP ind
Line 1343:    %s : AbortDueToPageIndFlag - %d 
Line 1368:    %s : Mode change Pending 
Line 1369:    PLMN_BACKGND_ABORT_PAGE_IND and SavedOperatingMode != NONE 
Line 1387:    %s : SRNC Stand by indication actions pending 
Line 1400:    %s : Stand by indication actions pending. Performing actions
Line 1429:    %s : EMC call pending !
Line 1461:    %s : Periodic HPPLMN actions pending !
Line 1477:    %s : Selection Mode Change pending !
Line 1498:    %s : MMC_CSFB_MO_EST_RCVD flag 
Line 1511:    %s : MMC_CSFB_MO_QUERY_RCVD flag 
Line 1518:    %s : FG Search will be triggered after DeepSleep timer expiry
Line 1529:    %s : HPPLMN search For FplmnSet pending ! 
Line 1743:    PS disabled during BPLMN procedures
Line 1777:    Wait for PLMN_LIST_REQ from GAPI.
Line 1802:    NR Disabled. Perform NR Disable actions
Line 2727:    %s :
Line 2738: [I]Bplmn State: %s, Procedure: %s 
Line 2743:    Ignore PLMN_LIST_IND !! LTE PLMN List Rsp present!
Line 2748:    Ignore PLMN_LIST_IND !! NR PLMN List Rsp present!
Line 3421:    Candidate PLMN not found in any of the RATs
Line 3441:    Backgnd Abort flag value = 0x%X
Line 3482: [W]Not handled Request Type(%d)
Line 3619: [W]Invalid RAT in plmn_RatSearched: %s
Line 3642:    %s - %d PLMNs
Line 3653:    Reading Plmn List Sent from %s 
Line 3729: [W]Ignore Abort Cnf, Wrong plmn_PlmnState !
Line 3731:    Fail Ind from RR : Rat Searched - %d, 3G List size- %d, 2G List size - %d
Line 3534:    Fast scan in progress. Change Cause to PLMN_BACKGND_ABORT_CELL_CHANGE
Line 2296: %s:: Entry 
Line 2297: [I]Bplmn State: %s, Procedure: %s 
Line 2339: [W]STOP HPPLMN search and Trigger HPPLMN timer for short duration. Reset BPLMN context
Line 2371: [W]Restarting PLMN_BPLMN_RECOVERY_TIMER since MM / PLMN states are not yet suitable
Line 2380:    ON_ANY_PLMN, CoverageLost = TRUE Need to Perform BPLMN Rec actions
Line 2391: [W]plmn state / BackGndPlmnListReqCause mismatch Reset BPLMN variables
Line 2402: [W]CsgListInProg == TRUE
Line 2482:    %s : Result=%d, uCase=%d 
Line 2483: %s:: Exit 
Line 2139:    %s
Line 2113: [I]PlmnListReqCause : %s, CSGListReqCause : %d
Line 2114: [!]!!Invalid ListReqCause. For Recovery send List to user in manual mode
Line 2611:    %s :
Line 2612:    SrcRat : %s, RatsToScan : %s, GuardTimer: %d, isFastScan : %d. isStoredSearch : %d
Line 2619:    Preconditions not satisfied. Sending failure response
Line 2669:    %s :
Line 2675:    Abort ongoing BPLMN procedure
Line 2686: [W]No active BPLMN session in progress
Line 3992:    Restarting HPPLMN timer for 2 mins
Line 3999:    Abort BPLMN procedure for user action in peer stack
Line 4005:    Reset BPLMN Context
Line 4014:    Restarting OOS recovery timer
