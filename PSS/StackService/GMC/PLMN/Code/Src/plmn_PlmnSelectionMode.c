Line 164:    GMCF::CTX::pPlmnSelectionMode_DB->SavedPlmnSelectionMode(%d) : 0x%x -> 0x%x 
Line 185:    Set PlmnSelectionMode : %s -> %s(%d)
Line 187:    GMCF::CTX::pPlmnSelectionMode_DB->PlmnSelectionMode(%d) : 0x%x -> 0x%x 
Line 204:    GMCF::CTX::pPlmnSelectionMode_DB->ModeChangePendingFlag(%d) : %d -> %d 
Line 224:    Set CopiedPlmnSelectionMode : %s -> %s(%d)
Line 226:    GMCF::CTX::pPlmnSelectionMode_DB->CopiedPlmnSelectionMode(%d) : 0x%x -> 0x%x 
Line 247:    GMCF::CTX::pPlmnSelectionMode_DB->UserReselectionFlag(%d) : %d -> %d 
Line 249:    Set plmn_userReselection flag : %d -> %d
Line 255:    GMCF::CTX::pPlmnSelectionMode_DB->PlmnSavedFlag(%d) : %d -> %d 
Line 305:    %s : Write GMC_FLASH_PLMN_SEL_MODE from %s to %s(%d) (Current PlmnSelectionMode : %s)
Line 354:    Updated PLMN Selection Mode from %s to %s
Line 509:    %s : Cause = %d , LastCampCountryCode(%x)
Line 545: [W]Invalid Action !
Line 553:    UE back in S. Korea. PLMN Selection Mode changed from MANUAL to AUTO
Line 566:    UE Either Already in AUTO Mode or Still in Last Camped Country
Line 1495: %s:: Entry 
Line 1507:    %s : New Mode = %s, Plmn State = %s
Line 1513:    #1. Pre-Processing - Check Pending PLMN_SEL_REQ, PLMN_SE_RSP 
Line 1519:    Pending PLMN SEL REQ is not yet processed, mode changed to auto , delete the saved message
Line 1560:    #3. Reconfig PLMN Selection Context 
Line 1569:    #4. Send PLMN Sel Mode Rsp 
Line 1577:    Mode Change Req is dummy for CSG Search in AT&T 
Line 1614:    #5. PLMN Sel Mode Change : %s -> %s 
Line 1650:    Other stack was using resources due to which Manual PLMN Procedure failed, dont't need to force assert.
Line 1661:    PLMN Sel Mode Change Result - %d 
Line 1672:    #6. Update CSG Sel. Mode, and PLMN Sel. Mode 
Line 1700: %s:: Exit 
Line 403:    PLMN List Size = %d
Line 408:    Checking for PLMN received in Search Fail List[%d] : %06x 
Line 415:    No S. Korean PLMN found in PLMN List
Line 451:    PLMN received in Cell Ind : %06x 
Line 452:    LastCampCountryCode (%x) , CurrPlmnCountryCode (%x)
Line 1343: [W]Mode change request not supported. (SIM is absent)
Line 1358:    Man to Auto: CS Call Procedure in Progress, Proceed with user request
Line 1361:    CS Call Procedure in Progress, reject user request
Line 1391:    #2a. New mode is Auto, set plmn_userReselection flag and start PLMN_AUTO_AUTO_RESEL_TIMER 
Line 1411:    PLMN sel. mode change - Already BPLMN List in Progress; Abort this & Start New List Req 
Line 1424:    #2b. New mode is Manual, Abort BPLMN 
Line 1443:    Already BPLMN List in Progress; Abort this & Start New List Req 
Line 1463:    #2c. New mode is Manual Background mode 
Line 1464:    MANUAL BACKGROUND MODE not expected when BPLMN scan running
Line 846:    Man to Man : %s 
Line 867:    HPLMN Timer Not Running, So not Starting it again
Line 876:    Awaiting User Input
Line 877:    User Manual PLMN Re-Selection, Awaiting User Input
Line 1062:    Man to Man BG : %s 
Line 1090:    Already ON_PLMN or RAT change in progress - Plmn State = %s
Line 696:    %s : %s 
Line 707:    Invalid SIM state - Moved to limited state 
Line 713:    Actions to be taken on  TRANSBOUNDARY timer expiry
Line 736:    Result = %d - Wake from DeepSleep due to mode change Initiate Plmn Search %s
Line 740:    Result = %d - Continue with PLMN actions for mode change %s
Line 763:    Result = %d - After OOS Timer expiry, UE will restart PLMN selection 
Line 774:    Result = %d - User Request is high priority so ignoring old RAT Init Action
Line 802:    Result = %d - MCC procedure is ongoing. Do not take any action
Line 810:    Result = %d - Sim state is invalid, Recovery action not needed!!
Line 813:    Result = %d - Recovery Actions already running using BPLMN
Line 819:    ON_ANY_PLMN state, start recovery after recovery timer expiry
Line 617:    %s : %s 
Line 623:    Invalid SIM state - Moved to limited state 
Line 636:    Result = %d - Continue with PLMN actions for mode change %s
Line 642: Start deepSleep timer to release grant and try recovery later
Line 649:    MCC procedure is ongoing. Do not take any action
Line 658:    On Any PLMN, actions will be taken after OOS expiry
Line 662: [!]RecoveryTimer not Needed
Line 669: [!]ON_PLMN state no actions needed
Line 910:    Man to Auto : %s 
Line 924:    HPLMN Timer Not Running, So not Starting it again
Line 1009:    Already ON_PLMN, Nothing more to do
Line 1018:    PowerUp Routines in Progress. No need to take any action.
Line 1028:    Updaing Saved PLMN with Home PLMNID and the highest priority RAT for saved plmn deleted case
Line 1127:    PowerUp Routines in Progress. No need to take any action.
Line 1131:    SIM is invalid. No need to take any action.
Line 1135:    MCC is going on, mode change to auto action will be ignored.
Line 1139:    Auto 2 Auto pre-condition OK
Line 1145:    Auto(Man BG) to Auto : %s 
Line 1221:    PLMN state: %s, plmn_HPPlmnSearch -> %s
Line 1222: [I]Bplmn State: %s, Procedure: %s 
