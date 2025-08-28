Line 195:    GMCF::CTX::pHPPlmnSearchData->HPPlmnTimerActionPendingFlag(%d) : %d -> %d 
Line 211:    GMCF::CTX::pHPPlmnSearchData->HPPlmnSearchFlag(%d) : %d -> %d 
Line 261:    HPlmn Search In Progress
Line 265:    plmn_HPPlmnSearch=TRUE in MANUAL PLMN SELECTION MODE
Line 295:    Received HPPLMN Search STOP Req After PLMN_SEARCH_REQ, Must wait for Cell-Ind and then ReturnToSavedPlmn
Line 395:    HPPLMN search %s not performed.(HplmnSearchCondition=%d) 
Line 412:    %s :
Line 441:    Stopping HPlmn Search : %s(%d) 
Line 491:    Aborting BPLMN completely, Next HPPLMN actions will be taken after HPLMN timer expiry !
Line 547: %s:: Entry 
Line 675:    No Higher Priority Plmn Found..Aborting HPlmn Search Procedure
Line 693:    Initiating Periodic Higher Priority PLMN Search
Line 695:    %s : Set HPPlmnSearchFlag and Send HPPLMN search handoff noti with started.
Line 712: [I]----------------------- Displaying HPPLMN Search -------------------------------------------
Line 712: [I]HPPlmnSearchFlag : %d, UseFastHPlmnSearch : %d, Pending : %d  
Line 712: [I]----------------------------------------------------------------------------------------
Line 716: %s:: Exit (%d)
Line 1116: %s:: Entry 
Line 1117: %s : BPLMN %s 
Line 1129:    HPPlmnSearchConditions %s -> %d
Line 1136:    %s : Set HPPlmnSearchFlag and Send HPPLMN search handoff noti with started.
Line 1138:    UseFastHPlmnSearch - %d 
Line 1144:    H3G Hack, do not send HO end notification
Line 1154:    Abort Higher Priority PLMN search 
Line 1193: [I]----------------------- Displaying HPPLMN Search -------------------------------------------
Line 1193: [I]HPPlmnSearchFlag : %d, UseFastHPlmnSearch : %d, Pending : %d  
Line 1193: [I]----------------------------------------------------------------------------------------
Line 1248:    Defer HPLMN list req action after RR connection release
Line 1268: %s:: Exit (%d)
Line 1302: PLMN::SEL::HPPLMNSearch::START - Cause(0x%0x) 
Line 1303: PLMN::SEL::HPPLMNSearch::NEXT  - Cause(0x%0x) 
Line 1304: PLMN::SEL::HPPLMNSearch::STOP  - Cause(0x%0x) 
Line 1305: PLMN::SEL::HPPLMNSearch::STOP  - Cause(0x%0x) 
Line 1322:    Safety Mode Enabled: Block Higher Priority PLMN search
Line 1366:    HPLMN Timer Not Running, So not Starting it again
Line 1451:    PLMN_START_HPPLMN_SEARCH_RR_REL actions not taken !!
Line 1524:    %s : Reset HPPlmnSearchFlag and Send HPPLMN search handoff noti with ended.
Line 1559:    %s: feature_enabled = %d, is_test_sim = %d
Line 1583:    %s: %d
Line 1588:    ([SmartBand HPPLMN Search] Enabled: %d, MCC band DB supported: %d, HPPLMN search started: %d, PLMN state: %d)
Line 1610:    [SmartBand HPPLMN Search] %s (%x)
Line 1616:    [SmartBand HPPLMN Search] Not executed!
Line 1630:    [SmartBand HPPLMN Search] Current camped on MCC=%03x, # of MCC bands to add=%d
Line 1648:    [Smartband HPPLMN] Continue to add candidate MCC bands.
Line 1650:    [Smartband HPPLMN] Skip candidate MCC bands since it is not in neighbor country.
Line 1677:    [SmartBand HPPLMN Search] Candidate MCC=%03x, # of MCC bands to add=%d
Line 1683:    [SmartBand HPPLMN Search] Too many MCC bands(%d) to add, set request band to 0 and let RRC full scan.
Line 1704:    [SmartBand HPPLMN Search] Current MCC: %03x, Candidate MCC: %03x, # of MCC bands added: %d
Line 227:    GMCF::CTX::pHPPlmnSearchData->UseFastHPlmnSearch(%d) : %d -> %d 
Line 782:    Checking HPlmn Search Conditions
Line 799:    Power off procedured started, do not take HPPLMN action!
Line 804:    #14 Special Case, BPLMN scan is ongoing for IMS rat scan. Restart HPLMN Timer for short duration
Line 811:    > ProSe direct communication is ongoing
Line 823:    #1 Emergency PDN is connected
Line 829:    #2 Search Delay After Power Up not Elapsed Yet
Line 834:    #3 Can only be done in PLMN_AUTO_PLMN_SEL_MODE !!
Line 840:    #4 BPLMN due to EARFCN Ongoing, Restart HPLMN Timer for short duration
Line 852:    #5 Special Case, HPPLMN need to be done for enabling CS service
Line 862:    #6 Special case, Restart HPLMN Timer for short duration
Line 870:    #7 H3G HPLMN Timer expired when Action is already ongoing
Line 878: [W]#8 Incorrect PlmnState/Loss of Cov: plmn_PlmnCoverageLost = %s
Line 879: [I]Plmn State : %s (%s)
Line 880: [I]RatChangeState -> %s
Line 903:    #8 Camped on HPLMN but not yet registered.
Line 910:    #9 Already High Priority Plmn(Home/Equivalent/Pref/OPref PLMN !!
Line 918:    #10 Refresh_RatMode change pending, Start HPLMN Short Timer
Line 924:    #11 RR Release action is already set to PLMN_START_HPPLMN_SEARCH_RR_REL.
Line 929:    #12 Can only be done in PLMN_IDLE
Line 930: [I]RatChangeState -> %s
Line 946:    #13 HPLMN Timer expired when Action is already ongoing
Line 955:    Periodic HP-PLMN search Not Initiated.
Line 734:    #13 ATT Manual CSG Search in progress!
Line 740:    #14 CSG Mode is CSG Manual !
Line 749:    #15 BPLMN Procedure for CSG is on -going, abort and process HPLMN actions 
Line 975:    %s: HPPlmnSearchConditions -> %d
Line 1027: [W]PDP context is activated.
Line 1035:    Defer HPLMN list req action after RR connection release
Line 1038:    HPPLMN_SEARCH_START_MM_STATE_NOT_OK - Restart for short duration
Line 1053:    Special case, Restart for short duration
