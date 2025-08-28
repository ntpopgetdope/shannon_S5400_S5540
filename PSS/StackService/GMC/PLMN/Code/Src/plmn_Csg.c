Line 204: [!]Invalid Mode (%d) in %s
Line 208:    GMCF::CTX::pPlmn_CsgDb->CsgSelectionMode(%d) : 0x%x -> 0x%x 
Line 265:    pPlmn_CsgDb->SavedPlmnSelectionMode : %d -> %d 
Line 267:    GMCF::CTX::pPlmn_CsgDb->SavedPlmnSelectionMode(%d) : 0x%x -> 0x%x 
Line 284: [I]%s : CSG Feature Not Supported. Ignore the message
Line 351:    GMCF::CTX::pPlmn_CsgDb->SelectedCsgId(%d) : 0x%x -> 0x%x 
Line 369:    GMCF::CTX::pPlmn_CsgDb->CsgSelectStatus(%d) : %d -> %d 
Line 385:    GMCF::CTX::pPlmn_CsgDb->CsgSelectionInProg(%d) : %d -> %d 
Line 401:    GMCF::CTX::pPlmn_CsgDb->CsgListInProg(%d) : %d -> %d 
Line 417:    GMCF::CTX::pPlmn_CsgDb->CsgDisplayInd(%d) : %d -> %d 
Line 434:    GMCF::CTX::pPlmn_CsgDb->SimCSGlistsUpdated(%d) : %d -> %d 
Line 452:    GMCF::CTX::pPlmn_CsgDb->CsgListReqCause(%d) : 0x%x -> 0x%x 
Line 471:    GMCF::CTX::pPlmn_CsgDb->UeCsgAwareness(%d) : 0x%x -> 0x%x 
Line 491:    GMCF::CTX::pPlmn_CsgDb->UiccCsgAwareness(%d) : 0x%x -> 0x%x 
Line 516:    GMCF::CTX::pPlmn_CsgDb->CsgType(%d) : 0x%x -> 0x%x 
Line 533:    GMCF::CTX::pPlmn_CsgDb->IsLteCsgDisable(%d) : %d -> %d 
Line 550: [I]%s : CSG Feature Not Supported. Do not Clear Selected CSG
Line 615:    GMCF::CTX::pPlmn_CsgDb->CsgCampedStatusForCSG(%d) : %d -> %d 
Line 672: [I]%s : CSG Feature Not Supported. Do not Clear Selected CSG
Line 675:    %s
Line 801:    %s with Result :- %s
Line 806:    pPlmn_CsgDb->CsgListReqCause -> %d 
Line 820:    AvailableCsgLists Before Sorting :: 
Line 825:    AvailableCsgLists After Sorting :: 
Line 865: [W]Invalid pPlmn_CsgDb->CsgListReqCause !!
Line 965:    %s
Line 967: [W]%s : CSG Feature Not Supported
Line 967: [I]CSG Available Lists State : NONE_AVAILABLE
Line 967: [I]CSG Available Lists State : UMTS_DONE
Line 967: [I]CSG Available Lists State : LTE_DONE
Line 967: [I]CSG Available Lists State : BOTH_DONE
Line 967: [I]CSG Available Lists State : INVALID VALUE (%d)
Line 989: [I]Bplmn State: %s, Procedure: %s 
Line 993: [W]Invalid List Req Cause : %d; Not starting List Req on other RAT's; 
Line 1011:    CSG in background - SelectedRat = %s
Line 1021:    CSG in Foreground
Line 1034: [I]RatMode -> %s
Line 1035: [!]Compiled for Single Mode Operation So perform Actions
Line 1126: %s : ACSG Count = %d , OCSG count = %d
Line 1147:    ------Allowed CSG List ------
Line 1162:    PlmnId : %06x
Line 1169:    %d > 0x%08X : ACSGLCount(%d), allowed CsgIdCount(%d)
Line 1178:    ------Operator CSG List ------ (allowed CSG cnt(%d))
Line 1205:    Duplicate Entry not allowed in White List !!
Line 1209:    OCSG found in Forbidden CSG List
Line 1219:    PlmnId : %06x
Line 1225:    %d > 0x%08X 
Line 1427:    %s :: pPlmn_CsgDb->CsgListInProg = (%d),  
Line 1428: [I]Plmn Selection Mode : %s
Line 1429: [W]%s : CSG Feature Not Supported
Line 1429: [I]CSG Available Lists State : NONE_AVAILABLE
Line 1429: [I]CSG Available Lists State : UMTS_DONE
Line 1429: [I]CSG Available Lists State : LTE_DONE
Line 1429: [I]CSG Available Lists State : BOTH_DONE
Line 1429: [I]CSG Available Lists State : INVALID VALUE (%d)
Line 1432:    CSG in background
Line 1439:    SelectedRat = %s
Line 1454:    CSG in Foreground
Line 1482:    %s
Line 1483: [W]%s : CSG Feature Not Supported
Line 1483: [I]CSG Available Lists State : NONE_AVAILABLE
Line 1483: [I]CSG Available Lists State : UMTS_DONE
Line 1483: [I]CSG Available Lists State : LTE_DONE
Line 1483: [I]CSG Available Lists State : BOTH_DONE
Line 1483: [I]CSG Available Lists State : INVALID VALUE (%d)
Line 1493:    ActiveRat -> %s, BplmnListRatMode -> %s
Line 1578:    %s : 
Line 1601: [W]Old PLMN Selection Mode is not saved !!
Line 1628:    %s : 
Line 1635: [I] %s : CSG Not Supported. Ignoring the Msg
Line 1682:    PerformPeriodicCsgScan not Initiated!! Plmn_CsgListDb.OperatorCsgListCount: %d
Line 1683: [I]plmn_CsgSelectionMode : %s
Line 1694:    %s : 
Line 1705:    Saved PLMN in Flash : %06x
Line 1706:    Retrieve Saved PLMN Selection data
Line 1713: [I]Plmn Selection Mode : %s
Line 1715:    Saved PLMN RatMode: %s
Line 1720:    %s : 
Line 1756:    %s
Line 1758: [I]plmn_CsgSelectionMode : %s
Line 1760:    Selected CSG Id : %X , CSG selected : %s, Csg cell Type : %d (none / closed / hybrid)
Line 1775:    CSG Cell Type is not Closed, Not adding in to ACSG list
Line 1805:    Selected CSG ID is already present in the White list
Line 1813: [W]Invalid CSG Selection Mode
Line 1834:    Selected CSG ID is not present in the White list
Line 1854:    %s
Line 1859:    Selected CSG Id : %X , CSG selected : %s, Csg cell Type : %d (none /closed /hybrid)
Line 1894: [I] %s : CSG Not Supported. Ignoring the Msg
Line 1903:    %s : Result = %s, CsgSelectionInProg = %s, CsgSelectStatus: %s 
Line 1914:    Sending CSG User Selection Response to GAPI
Line 1922:    HOLD RSP TRUE. Attach Accept might have received with SMSOnly/CSFB not preferred
Line 2451: [W]%s : CSG Feature Not Supported
Line 2454: %s:: Entry 
Line 2536:    Current Camped CSG details are saved and CSG Selection status is cleared
Line 2546:    GMC_EV_PLMN_CSG_SAVE_CURRENT_CAMPED_CSG not Supported Yet
Line 2556: UE was camped on a LTE CSG before CSFB call was initiated, Triggering Fast return to the LTE CSG
Line 2560:    GMC_EV_PLMN_CSG_RETURN_TO_LAST_CAMPED_CSG not Supported Yet
Line 2568: %s:: Exit 
Line 2591: [W]%s : CSG Feature Not Supported
Line 2602:    CSG ID not found in 3G. Send SEL Response to NS and roll back to RPLMN, Enable EUTRA
Line 2617:    MAnual CSG in progress and EUTRA is disabled. Search same CSG in 3G
Line 883:    %s Found Complete CSG Lists Proceed with Combine Actions 
Line 912:    %s Complete List not Found so Send List Req for Next Rat 
Line 928:    CSG List going on in Active RAT
Line 935:    SendStartDrxInfoShareInd : %s SendBplmnSrchStopInd : %s
Line 940:    CSG was going on Non-Active RAT, Send BplmnSrchStopInd
Line 944:    Sending IND to RRC:Start DrxInfo Ind
Line 1285:    SelectedRat = %s
Line 1317:    %s : ActiveRat - %s 
Line 1375: [W]WARNING : pPlmn_CsgListDb->AvailCsgListDb.RatSearched (%d) is not PLMN_CSG_LTE_DONE  in DUAL mode
Line 1057:    %s 
Line 1058: [W]%s : CSG Feature Not Supported
Line 1058: [I]CSG Available Lists State : NONE_AVAILABLE
Line 1058: [I]CSG Available Lists State : UMTS_DONE
Line 1058: [I]CSG Available Lists State : LTE_DONE
Line 1058: [I]CSG Available Lists State : BOTH_DONE
Line 1058: [I]CSG Available Lists State : INVALID VALUE (%d)
Line 1099: [W]ERROR: Should not come here in %s ; Plmn_CsgListDb.AvailCsgListDb.RatSearched : %d 
Line 1531:    %s : 
Line 1963:    Already camped on same CSG ID / Rat mode combination
Line 1971:    Manual CSG Selection not allowed in this state.
Line 1987:    Manual CSG Selection not allowed in this state.
Line 1997:    PLMN SEARCH is in Progress. GAPI_PLMN_CSG_SEL_REQ Msg Saved Until Later.
Line 2011:    For ATT, CSG mode cannot be changed to MANUAL
Line 2017:    Plmn_CsgListDb.OperatorCsgListCount = 0, Forceful CSG-SEL-REQ accepted
Line 2025:    pPlmn_CsgListDb->OperatorCsgListCount = 0, Not taking any actions
Line 2041:    CSG_SEL_REQ :: PLMN ID : %06x  CSG ID : 0x%X
Line 2069:    Perform CSG search for selected CSG id
Line 2097:    Search is ongoing. Suspend - Suspend RAT to send SEARCH_REQ
Line 306:    Emergency PDN is connected. Reject Manual CSG Selection
Line 311:    Rejecting GAPI CSG Selection due to User Plmn Action Already Saved, Awaiting RR Release
Line 316:    Rejecting GAPI PLMN Selection due to Sim State being PLMN_SIM_INVALID
Line 321:    Manual Selection Not Allowed in AUTO Mode !!!
Line 326:    PLMN LIST REQ is in Progress. No Manual PLMN selection Allowed !!!
Line 2181:    Saved Plmn Selection Mode : %s
Line 2197:    Saved PLMN in Flash : %06x (%s)
Line 2198:    Saved PLMN Selection Mode: %s
Line 2237: [W]Unexpected value received from NS in CsgModeChangeReq
Line 2238: [I]plmn_CsgSelectionMode : %s
Line 2256: [I]plmn_CsgSelectionMode : %s
Line 2293: [W]%s : CSG Feature Not Supported
Line 2293: [I]CSG Available Lists State : NONE_AVAILABLE
Line 2293: [I]CSG Available Lists State : UMTS_DONE
Line 2293: [I]CSG Available Lists State : LTE_DONE
Line 2293: [I]CSG Available Lists State : BOTH_DONE
Line 2293: [I]CSG Available Lists State : INVALID VALUE (%d)
Line 2304: [I]Bplmn State: %s, Procedure: %s 
Line 2312:    Reading Plmn List Sent by %s. Please Wait....
Line 2321:    Ignoring the CSG_LIST_RSP !!!!!! List Req Cause: %d 
Line 2324:    Rejecting CSG_LIST_RSP, Wrong plmn_PlmnState !
Line 2331: [W]%s : CSG Feature Not Supported
Line 2331: [I]CSG Available Lists State : NONE_AVAILABLE
Line 2331: [I]CSG Available Lists State : UMTS_DONE
Line 2331: [I]CSG Available Lists State : LTE_DONE
Line 2331: [I]CSG Available Lists State : BOTH_DONE
Line 2331: [I]CSG Available Lists State : INVALID VALUE (%d)
Line 2389:    User Plmn Selection Mode Change Request processing from Queue Triggered
Line 2412:    %s :: TBD
