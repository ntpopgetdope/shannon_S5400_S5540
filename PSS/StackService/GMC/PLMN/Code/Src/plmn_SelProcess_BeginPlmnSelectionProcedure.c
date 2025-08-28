Line 3190: %s:: Entry 
Line 3191:    %s : %s, %s 
Line 3204: [I]Reset smart band state due to new PLMN selection procedure(%s).
Line 3212: [I]Reset smart band state due to new PLMN selection procedure(FailureType: %d).
Line 3222: Serving RAT: %s
Line 3231: %s:: Exit 
Line 3248:    #1.a Try Any PLMN Camping - LTE HEDGE EMC Mode and HPLMN is in temp Blocked PLMN List 
Line 3261:    CsgSelectionInProg: TRUE 
Line 3277: [W]#2 %s and HPLMN is blocked try Any PLMN Camping
Line 3384: [W]Unknown Plmn Selection State, Getting both Lists
Line 3417: %s:: Exit 
Line 3450: [W]Unexpected PlmnSelectionState: %s
Line 3468:    ===SmartBand=== Update Initial plmnSelectionState: %s -> %s
Line 1297:    %s : 
Line 1298: [I]Plmn Selection State : %s
Line 1301:    #1. %s 
Line 1317:    #1.b PLMN search on %s RAT, followed by LIST request 
Line 1318:    RPlmn %s
Line 1342:    #1.c Request List From All RATs 
Line 1356:    #2. Manual PLMN list procedure pending!
Line 1371:    #2.a Resuming RAT to Request the Plmn List
Line 1372: PLMN::LISTREQ: FG PLMN scan deferred after RAT change to %s 
Line 1387:    #2.b Proceed with the saved message
Line 1395:    #3. No Manual PLMN list procedure pending!
Line 1396:    #3.a RPlmn Exists
Line 1397:    #3.b RPlmn Does NOT Exist
Line 961:    RPLMN in Temp blocked list, Start PS only search
Line 965:    RPLMN Exists but is in Forbidden List
Line 969:    RPLMN Doesnot Exists but HPLMN is in Forbidden List
Line 996:    %s
Line 997:    ForcedRatSearch - %d, StoredFreqScan - %d 
Line 999:    PlmnCoverageLost - %d, TotalLossOfCoverage-%d, PowerUpPlmnSelectionFlag - %d 
Line 1059:    Prefrat : %s 
Line 1063:    EMC call start with LTE search priority received, start search on LTE first 
Line 1086:    #1.a plmn_PowerUpPlmnSelection  -> PLMN search after RAT resume 
Line 1105:    #1.b plmn_PowerUpPlmnSelection  -> Start PLMN search on RPLMN, Active RAT 
Line 1114:    2G NRP Opt. - PLMN %06x -> %06x
Line 1137:    #2. No plmn_PowerUpPlmnSelection -> Start PLMN search on RPLMN, RPLMN RAT 
Line 1164:    %s : 
Line 1173:    #1. Last Selected Plmn != HPlmn,  -> Try HPlmn
Line 1182:    #2. Last Selected Plmn == HPlmn
Line 1192:    #2.a Multi Mode -> Requesting List From Current RAT 
Line 1208:    #2.b Single Mode -> No Next Rat -> Requesting List From Current RAT 
Line 1232:    %s : 
Line 1250:    #1. In Manual Mode, restarted for mode update, trigger anyPlmn search
Line 1263:    #2. Start Home Plmn Search
Line 2275:    %s : FailureType : %d
Line 2281:    plmn SearchFailReceived 
Line 2297: [W]CSFB Emergency MO Call is pending, must have come here after RPLMN Search. Return and perform ANY PLMN Search
Line 2202:    %s : FailureType : %d
Line 2207:    CsgSelectionInProg: TRUE
Line 2212:    CurrentSelectedCSG: NULL 
Line 2217:    CsgListReqCause is MANUAL, Send SEL_RSP to NS
Line 2246: [I]Plmn State : %s (%s)
Line 2247: [I]Plmn Selection State : %s
Line 2248: [I]Selected Plmn  : %06x (%s)
Line 2249: [I]NextAvailablePlmn : %06x (%s , %s)
Line 2256:    %s : CSGSelStatus : %d
Line 2339:    %s : %s 
Line 2350:    NRSA Deprioritization, start search on LTE first
Line 2359:    EMC call start with LTE search priority received, start search on LTE first 
Line 2371:    #1 Selected RAT for HPLMN - %s 
Line 2417: [W]#2b HPLMN is blocked in %s during %s. Perform from PLMN List Request on %s RAT.
Line 2430: [W]#2c HPLMN is blocked in %s during %s. Stored scan to be done by plausible check.
Line 2437: [W]#2d HPLMN is blocked in %s during %s.
Line 2451: [I]RatMode -> %s
Line 2466:    #3a RAT Change for HPLMN search
Line 2467: PLMN::LISTREQ: FG PLMN scan deferred after RAT change to %s 
Line 2498:    #3b Try HPLMN search
Line 2916:    %s : %s 
Line 2921:    Changing RAT(%s) - Try HPlmn on Highest Priority HPlmn RAT Mode
Line 2922:    Trying HPlmn on Current RAT(%s) - Highest Priority HPlmn RAT Mode
Line 2820:    %s : %s 
Line 2838:    %s : %d th RAT, cause - %s
Line 2839:    Last Rat : %s 
Line 2855:    Plmn Not Found, Requesting List From Current RAT, Look For Higher Priority Plmns 
Line 517:    Plmn Not Found, Requesting List From Current RAT, Trying HPlmn onOther RAT
Line 579:    HigherPriorityEhplmnSearch Excluded !
Line 606:    OriginalPlmnId : %06x, ModifiedPlmnId : %06x
Line 618:    HPLMN MNC 3rd digit is modified. Trying modified PLMN on same RAT
Line 263:    %s : AvailablePlmnListExist - %d 
Line 322:    %s : nextRatMode(%s) 
Line 326: [!]case 3. BPLMN Enabled ? 
Line 2695:    %s : %s 
Line 2714:    RPlmn Deleted or in Forbidden List, Get List from Current RAT, Try HPlmn on Other RAT
Line 2715:     Get List from Current RAT, Try RPlmn + Equivalent Plmn on Other RAT
Line 2752:    List Already exists 
Line 2552:    %s : %s 
Line 2582:    Plmn Rejected, Get List from current RAT
Line 2583:    Plmn Not Found, Reading List Sent From Current RAT
Line 2587:    %s : %d th RAT, cause - %s
Line 2594:    Last Rat : %s 
Line 1736:    %s : %s 
Line 1753:    Plmn Failure was for Equivalent Plmn, Try RPlmn in the Same RAT excluding EPLMN
Line 1763:    Plmn Failure was for the RPlmn, RPlmn != HPlmn -> Try HPlmn On Current RAT
Line 1527:    %s: newPlmnSelectionState = %d, FailureType = %d,CurrRatOrder = %d  
Line 1535:    Network Rejected RPlmn, RPlmn == HPlmn
Line 1545:     Get List from Current RAT, Try RPlmn + Equivalent Plmn on Other RAT
Line 1567:    Plmn Not Found
Line 1591:    %s: %s, NewPlmnSelectionState = %d 
Line 1601:    HPlmn != RPlmn, but HPlmn is invalid due to blocked in %s
Line 1602:    HPlmn != RPlmn, Checking to see if HPlmn is in RR(C) List
Line 1630:    Selected PLMN is HPLMN. Detected EHPLMN is of lower priority
Line 1634:    RPlmn != HPlmn & HPlmn Exists in List Given By RR -> Try HPlmn On Current RAT
Line 2067:    %s:: Entry 
Line 2069:    PLMN Sel. using Stored Freq Scan : %s, %s, PlmnFromLocInfo = %06x 
Line 2091:    Plmn Failure was for Equivalent Plmn, Try RPlmn in the Same RAT excluding EPLMN 
Line 2104:    Plmn Failure was for the RPlmn, RPlmn != HPlmn -> Try HPlmn On Current RAT
Line 2121:    Plmn Failure was for the RPlmn
Line 2123:    Network Rejected RPlmn, RPlmn == HPlmn
Line 2133:    Plmn Not Found
Line 2179:    PLMN Sel. using Stored Freq Scan : PlmnSelectionState %s -> %s
Line 2180:    %s:: Exit (0x%x)
Line 1863:    %s : %s 
Line 1872:     Get List from Current RAT, Try RPlmn + Equivalent Plmn on Other RAT
Line 1889:     Get List from Current RAT, Try RPlmn + Equivalent Plmn on Other RAT
Line 1940:    RPlmn != HPlmn & HPlmn Exists in List Given By RR, Try HPlmn On Current RAT
Line 1802:    HPlmn != RPlmn, Checking to see if HPlmn is in RR(C) List
Line 1829:    HPlmn != RPlmn, Checking to see if HPlmn is in RR(C) List
Line 1840:    %s : %d th RAT HPLMN in RrList = %d
Line 1688:    %s : %s 
Line 1701:    Network Rejected RPlmn, RPlmn != HPlmn -> Try HPlmn On Current RAT
Line 1976:    %s : %s 
Line 1990:    Network Rejected RPlmn, RPlmn != HPlmn -> Try HPlmn On Current RAT
Line 2003:    Network Rejected RPlmn, RPlmn == HPlmn
Line 2013:    Plmn Not Found
Line 3001:    %s : %s 
Line 3035:    Plmn Not Found in Manual mode.
Line 3038:    Plmn Not Found, Reading List from current RAT
Line 3048:    Rejected Plmn Not Found in Curent RAT, TryingOtherRat
Line 3060: Trigger List request as PLMN is blocked in %s
Line 773:    %s : %s 
Line 795:    %s : %d th RAT
Line 854:    HPLMN is blocked, After list move to blind scan on other RAT's
Line 866: [W]Unexpected case
Line 918:    Checking to see if HPlmn is in RR(C) List
Line 924:    For CMCC, HPlmn Exists in List Given By RR, Try HPlmn On Current RAT
Line 3113:    %s : %s 
Line 3127: [W]Release RR connection forcefully ! 
Line 3139:    Normal scan failed on all rats, start AnyPlmn search
Line 3150:    LTE is skipped due to selectedPlmn is present in TempBlocked/FPLMN list
Line 3152:     Plmn Not Found in Curent RAT, TryingOtherRat
