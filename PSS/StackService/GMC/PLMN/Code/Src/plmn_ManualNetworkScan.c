Line 203:    GMCF::CTX::pPlmn_ManualNetworkScanDB->ListReqFromNsFlag(%d) : %d -> %d 
Line 221:    GMCF::CTX::pPlmn_ManualNetworkScanDB->ForcedListReqFromNsFlag(%d) : %d -> %d 
Line 240:    GMCF::CTX::pPlmn_ManualNetworkScanDB->UserReqType(%d) : 0x%x -> 0x%x 
Line 257:    GMCF::CTX::pPlmn_ManualNetworkScanDB->UserSelectedPlmnFlag(%d) : %d -> %d 
Line 273:    GMCF::CTX::pPlmn_ManualNetworkScanDB->ManualPlmnSelRspNeededFlag(%d) : %d -> %d 
Line 289:    GMCF::CTX::pPlmn_ManualNetworkScanDB->AP_band(%d) : %d -> %d 
Line 305:    GMCF::CTX::pPlmn_ManualNetworkScanDB->ListReqAllowedFlag(%d) : %d -> %d 
Line 364:    ManualSearchState : %d 
Line 387:    Sending forced manual PLMN selection response
Line 546:    %s 
Line 571:    Replace RPLMN with saved PLMN
Line 572: [I]Saved Plmn : %06x (%s)
Line 576: [W]savedPlmnRat (%s) not supported !
Line 583: Start deepSleep timer to release grant and try recovery later
Line 589:    Rejecting GAPI PLMN Selection due to cause : %d
Line 625:    SIM is invalid. No need to take any action.
Line 632:    Plmn_ChkSavedMsgStatus: PLMN_USERACTION_MSG == TRUE
Line 639:    CS Call Procedure in Progress, reject user request
Line 647:    IS_DEVICE_MAKETYPE_2_F DEVICE AND plmn_DsOtherStackManualListStatusFlag == TRUE
Line 1642: %s:: Entry 
Line 1646: PLMN::MANSCAN: Step1. MANUAL PLMN search start 
Line 1672: PLMN::MANSCAN: Step1.b MANUAL PLMN search abort 
Line 1679: PLMN::MANSCAN: Step3. USER PLMN selection 
Line 1689: PLMN::MANSCAN: Step4. USER PLMN selection rsp
Line 1699: PLMN::MANSCAN: Step0. AUTO/MANUAL Mode change 
Line 1726: %s:: Exit 
Line 867:    %s :
Line 893:    Start PLMN list req. timer and send PLMN list request
Line 937:    BPLMN List in Progress; Abort this & Start New List Req 
Line 980:    Initiating Req to RR(C) for a Complete Scan
Line 1001:    Search shall be performed when PLMN  is in IDLE.
Line 1056:    Search is ongoing. Suspend - Resume current RAT to send LIST_REQ
Line 700:    SimPresent = %d, SimRspStatus = %d 
Line 701:    %s : deferred -> Power up Routines in progress. NS_MMC_PLMN_LIST_REQ Msg Saved Until Later.
Line 727:    PLMN list request on %s only is invalid in current operating mode.
Line 741:    IMS Call Procedure in Progress, reject user request
Line 766:    plmnListReqAllowed = %d, PlmnSelStartedFlag= %d 
Line 767:    %s : deferred -> PLMN status is busy. NS_MMC_PLMN_LIST_REQ Msg Saved Until Later.
Line 781:    GAPI PLMN list request already in progress
Line 1148:    %s : 
Line 1159: [!]PLMN LIST REQ is not yet processed so, delete the saved message
Line 1181:    PLMN has actions Cleared! Resetting PLMN List Data
Line 1203:    Recovery Actions will be taken after receiving abort cnf
Line 1212:    PlmnState != PLMN_WAIT_FOR_PLMN_LIST, So No need of sending abort
Line 1235:    On Any PLMN, actions will be taken after OOS expiry
Line 1243:    PLMN selection already in progress !
Line 1264:    Auto Mode : Start PLMN Recovery Action
Line 1280:    Manual Mode : Trying to Go back to RPLMN
Line 1287:    Manual Mode : Start PLMN selection or OOS Recovery Timer
Line 1321:    %s : 
Line 1372:    Triggering Search for User Selected Plmn.
Line 1393:    User Selected Plmn is -> %06x  Requested Rat Mode -> %s
Line 509:    %s is: %06x
Line 510: [I]Plmn Selection Mode : %s
Line 520:    Write UserSelected PLMN Id to flash : %06x(0x%x)
Line 460:    %s : %06x, %s
Line 466:    User Requesting a Plmn UE already attached to
Line 1422:    %s : Cause(%s), HoldPlmnRsp (%d)
Line 1450: [W]Manual User Selected PLMN Response expected, but camped on diff PLMN
Line 1458: [W]%s: Requested RAT %s is not selected for Scan
Line 1485:     Temporary Reject cause received in Manual mode PLMN selection. MM will retry Registration 
Line 1493:    UE rejected for PS in #14, Try CS registration and only then update user
Line 1502:    UE rejected for PS in #7, Try CS registration and only then update user
Line 1521:    Inform GAPI that RR(C) has camped on a Cell in Requested Plmn
Line 1570:    LGU RoamingInitialize: %s
Line 1612:    LGU, PLMN sel mode change in PLMN_NOT_INITIALISED state
Line 1545:    LGU, RoamingInitialize  -> TRUE
