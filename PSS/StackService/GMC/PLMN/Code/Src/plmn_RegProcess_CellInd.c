Line 170:    GMCF::CTX::pPlmn_CellIndDb->AcceptRrPlmnFlag(%d) : %d -> %d 
Line 189:    GMCF::CTX::pPlmn_CellIndDb->CellIndRcvdAfterPowerOn(%d) : %d -> %d 
Line 214:    Plmn_CellIndDb.NCellRAT : %s -> %s 
Line 1206:    %s : %s(%d)
Line 1207:    CellIndCause : %d
Line 1216:    %s : PLMN State Invalid (%s)
Line 1246:    AwaitingCellIndAfterPlmnSearchReqFlag == TRUE
Line 1256:    LRPLMSI is TRUE; Accept Cell_Ind
Line 1308:    Special Case for TC 26.7.4.5.5.1 -- GRR doesn't detected PLMN on different bands with BPLMN
Line 1381:    skipCellIndAction - %d, silentManToAutoChange - %d 
Line 1407:    IsQrbToNrOngoing : %d
Line 1424:    skipCellIndAction - %d -> %d 
Line 1544:    %s : Reject Cause[%d]
Line 1547:    Plmn Selection already started. Don't take actions for CEll Reject Ind
Line 1566: [I]Plmn State : %s (%s)
Line 1017: [W]%s : Ignore Autonomous CELL_IND during SEARCH_REQ.
Line 1024: [W]%s : Ignore CELL_IND due to invalid PLMN State (%s)
Line 988:    All Rats suspended, Ignore Cell Ind
Line 993:    Ignoring cell ind as it is not received from current RAT(%s)
Line 268: [W]Invalid Action!!!
Line 1052: [I]Selected Plmn  : %06x (%s)
Line 1054: [W]%s : Ignore CELL_IND - Received PLMN ID is not in Eq PLMN list / USA SPEC Eq PLMN List / not equal to the Selected PLMN.
Line 1056:    Accept Cell_Ind - Cell Ind PLMN is Eq PLMN of selected PLMN. 
Line 598:    %s : CSG id = 0x%08X
Line 620:    PerfomActions->CsgSelStatus = FALSE in CSG_MANUAL_MODE, Roll back to saved PLMN
Line 558:    PLMN received in Cell Ind : %06x 
Line 559:    LastCampCountryCode (%x) , CurrPlmnCountryCode (%x)
Line 333:    %s : 
Line 367:    Plmn Given By RR Exists -> Copy to Selected Plmn Id
Line 374: [I]Selected Plmn  : %06x (%s)
Line 382:    RAT Change Cause Not 0 -> Save Plmn Given By RR(C) = %06x
Line 399:    User Plmn Selection Mode Change Requested
Line 452:    No OOS Timer Restart in limited state <- SIM INVALID 
Line 455: [!]No OOS Timer Restart in limited state <- RecoveryTimerNeeded flag is FALSE
Line 482:    UE registered on VPLMN, Restart HPPLMN Search timer with 2 mins
Line 488:    No need to start HPPLMN Scan Timer; HPPLMN Srch Prd is %d
Line 1084:    UE in limited camping state and PLMN in CELL_IND is HPLMN or RPLMN, need to start PLMN search for recovery
Line 837:     PLMN Found is Valid PLMN So try for Normal Service on this PLMN
Line 844:    Found RPLMN when Tried for Limited Service:CurrRatMode - %s , RPlmnRat - %s
Line 873:    Rplmn != HPlmn, Try HPlmn, Found HPLMN when Tried for Limited Service
Line 778:    PLMN(%06x) Valid for %s
Line 283: [W]Invalid Action!!!
Line 532:    CELL IND received in MMC REGISTERED state
Line 534:    CELL IND received -> Change to Registering
Line 1131:    Neighboring Cell Rat Info : %s , SkipRatMode : %s
