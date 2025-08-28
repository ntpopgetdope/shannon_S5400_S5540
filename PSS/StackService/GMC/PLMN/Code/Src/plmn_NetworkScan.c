Line 944:    Both of same priority
Line 945:    Give priority to higher AccTech
Line 946:    New PLMN AccTech is of higher priority
Line 947:    Sorted PLMN AccTech is of higher priority
Line 948:    New PLMN is of higher priority
Line 949:    Sorted PLMN is of higher priority
Line 2935: %s:: Entry 
Line 2954: PLMN::NETSCAN: Step1. NETSCAN START %s(%d) 
Line 2955: [!]previous network scan routine is on going.
Line 2963: PLMN::NETSCAN: Step0. NETSCAN STOP 
Line 2973: [!]Invalid scan type[%d].
Line 2984: PLMN::NETSCAN: Step2.d NETSCAN BPLMN ABORT Rsp from %s
Line 3020: PLMN::NETSCAN: Step2.x NETSCAN ABORT - LOC happened
Line 3027: PLMN::NETSCAN: Step2.y NETSCAN ABORT - LOC happened
Line 3039: PLMN::NETSCAN: Step2.b NETSCAN Timer %s(%d) expired  
Line 3064: [W]Rejecting Plmn List Ind, Wrong plmn_PlmnState !
Line 3070: PLMN::NETSCAN: Step2.e NETSCAN done in %s 
Line 3077: PLMN::NETSCAN: Step2.f NETSCAN fail in %s 
Line 3087: [!]%s: Invalid data size[%d].
Line 3094: PLMN::NETSCAN: Step2.c NETSCAN RAT change wait done 
Line 3104: PLMN::NETSCAN: Step2.a NETSCAN ind from %s 
Line 3113: %s:: Exit 
Line 2631:    %s : debug1 %d, debug2 %d 
Line 2631: %%%%GMC CORTN%%%% In_ %s %s <= %s
Line 2632:    %s : debug1 %d -> %d 
Line 2635: %%%%GMC CORTN%%%% Out %s
Line 2645: %%%%GMC CORTN%%%% Out %s
Line 2656: PLMN::NETSCAN:SCHEDULE 1. begin of net scan
Line 2657:    %s : debug1 %d -> %d 
Line 2664:    %s : debug1 %d -> %d 
Line 2665: %%%%GMC CORTN%%%% Out %s - wait for %s
Line 2674: %%%%GMC CORTN%%%% Out %s - wait for %s
Line 2679: PLMN::NETSCAN:SCHEDULE 2. Rcvd Step: %s
Line 2698:    %s : debug1 %d -> %d 
Line 2699: %%%%GMC CORTN%%%% Out %s - wait for %s
Line 2780:    %s : debug1 %d -> %d 
Line 2789: [!]Invalid sub-step for net scan schedule[%d].
Line 2797:    %s : debug1 %d -> %d 
Line 2800:    %s : debug1 %d -> %d 
Line 2801: %%%%GMC CORTN%%%% Out %s - wait for %s
Line 2808: PLMN::NETSCAN:SCHEDULE 3. final of net scan
Line 2849:    %s : debug1 %d -> %d 
Line 2850: %%%%GMC CORTN%%%% Out %s - wait for %s
Line 2866: %%%%GMC CORTN%%%% Out %s
Line 2580: %s : deferred -> after INITIALISATION
Line 2589:    %s : deferred -> after NEW_RAT_INITIAL_PLMN_ACTION
Line 2605: %s : Aborted Ongoing User PLMN Search Request
Line 2421:    NETWORK_SCAN_REQ: %d (recs), ScanType: %s, Option: %d(%s)
Line 2422:    MaxSearchTime: %d(s)
Line 2423:    IncrementalTime: %d(s)
Line 2424:    IntervallTime: %d(s)
Line 2428:    	candidates[%d]: %x%x%x%x%x%x
Line 2454:    [%d] radio_access_network: 0x%x, band num: %d, channel num: %d
Line 2480: [!]%s: Failed to allocate memory.
Line 2491:    %s : debug2 %d -> %d 
Line 2492:    %s : debug2 %d -> %d 
Line 2493:    %s : debug2 %d -> %d 
Line 2494:    %s : debug2 %d -> %d 
Line 2495:    %s : debug2 %d -> %d 
Line 1959: %%%%GMC CORTN%%%% In_ %s %s <= %s
Line 1976: [!]Emergency call is in progress
Line 1981: [!]Mode update procedure is in progress
Line 2024:    BPLMN List in Progress; Abort this & Start New List Req 
Line 2032: %%%%GMC CORTN%%%% Out %s - wait for %s => %s
Line 2062:    Search shall be performed when PLMN is in IDLE.
Line 2068:    Starting BPLMN.
Line 2078: [!]bplmn(%d) is not enabled, or not on plmn(%s).
Line 2087: AP indicate selected RAT => Try to sort them
Line 2108: [!]Plmn_CheckManualNetworkScanStart() failed.
Line 2109: PLMN::NETSCAN: Step1.b NETSCAN START fail
Line 2119: %%%%GMC CORTN%%%% Out %s => %s
Line 577:    %s(): %s
Line 518: [W]MCC Band DB disabled or Wrong PLMN state (%d) for Netscan band config 
Line 531: [W]Invalid Last camped MCC (%d) for Netscan band config 
Line 554:    Fill bands(%d) for %s
Line 2143: %%%%GMC CORTN%%%% In_ %s %s <= %s
Line 2154:    %s: cause - %s(%d)
Line 2199: %%%%GMC CORTN%%%% Out %s - wait for %s => %s
Line 2229: %%%%GMC CORTN%%%% Out %s => %s
Line 2234: [W]Unexpected BPLMN Failure indcation
Line 2240: %%%%GMC CORTN%%%% Out %s => %s
Line 1906:    TimerMask: 0x%X
Line 2257: %%%%GMC CORTN%%%% In_ %s %s <= %s
Line 2286: PLMN::NETSCAN: Step2.c NETSCAN RAT change %s -> %s 
Line 2301: PLMN::NETSCAN: Step2.c NETSCAN RAT change %s -> %s 
Line 2311: %%%%GMC CORTN%%%% Out %s - wait for %s => %s
Line 2322: PLMN::NETSCAN:SCANREQ Step2.a NETSCAN req to %s 
Line 2355: Phase 1 stored freq scan END. Set g_storedSearchMode to false
Line 2363: PLMN::NETSCAN: Step2.a NETSCAN req to %s 
Line 2381: %%%%GMC CORTN%%%% Out %s => %s
Line 1510:    Record[%d]: %s(# of band: %d, # of channel: %d)
Line 1517: [!]LTE Disabled due to reject cause #7 !
Line 1556: [!]NR Disabled in international roaming!
Line 1560: [!]NR Disabled due to reject cause #7 !
Line 1568: [!]%s: Not supported RAT[%s]
Line 419:    Reconfig PLMN Selection Context 
Line 427:    %s : Continue search on the User Selected PLMN (%06x), RAT : %s
Line 2536:    %s : debug1 %d -> %d 
Line 2537:    %s : debug2 %d -> %d 
Line 1674:    %s : debug1 %d, debug2 %d 
Line 1674: %%%%GMC CORTN%%%% In_ %s %s <= %s
Line 1696: [!]%s: Failed to allocate memory.
Line 1697: %%%%GMC CORTN%%%% Out %s
Line 1717: [!]%s: Failed to allocate memory.
Line 1719: %%%%GMC CORTN%%%% Out %s
Line 1734: %%%%GMC CORTN%%%% Out %s - wait for %s
Line 1739: %s: Rcvd Step: %s
Line 1779: PLMN::NETSCAN: Step2.a NETSCAN ind - %s Added: %d 
Line 1787: PLMN::NETSCAN: Step2.d NETSCAN Partial Report - Reported: %d, Rcvd: %d
Line 1812: PLMN::NETSCAN: Step2.d NETSCAN Final Report - Final Rcvd: %d
Line 1826:    %s : debug1 %d -> %d 
Line 1829:    [%3d]plmn:%0x, lac:%5d, availStatus:%d, rat:%s
Line 1851: %%%%GMC CORTN%%%% Out %s
Line 1228:    [%3d]plmn: %06x, lac: 0x%x, availStatus: %d
Line 1229:    [%3d]cid:%d ,serving: %d
Line 1238:    Overwrte %d > %d
Line 1276:    [%3d]plmn: %06x, lac: 0x%x, availStatus: %d
Line 1284:    [%3d]cid:%d, psc: %d, uarfcn: %d, serving: %d
Line 1293:    Overwrte %d > %d
Line 1343:    [%3d]plmn: %06x, lac: 0x%x, availStatus: %d
Line 1353:    [%3d]ci: %d, pci:%d, tac: %d, earfcn: %d, cqitable: %d, serving: %d
Line 1362:    Overwrte %d > %d
Line 1420:    [%3d]plmn: %06x, lac: 0x%x, availStatus: %d
Line 1428:    [%3d]nci: %x, pci:%d, narfcn: %d, serving: %d 
Line 1439:    Overwrte %d > %d
Line 1459: [!]%s: Invalid RAT(%d)
Line 1094:    Inserted at index %d in list of %d entries (%s)
Line 1123:    [%3d]plmn: %06x, lac: 0x%x, availStatus: %d
Line 1143:    [%3d]plmn: %06x, lac: 0x%x, availStatus: %d
Line 1162:    [%3d]plmn: %06x, lac: 0x%x, availStatus: %d
Line 1181:    [%3d]plmn: %06x, lac: 0x%x, availStatus: %d
Line 1189: [!]%s: Invalid RAT(%d)
Line 996: Duplicated with %d
Line 1031: Inserted at index %d in list of %d entries (%s)
Line 737:    [%3d] availStatus(Updated): %d -> %d, rat:%s
Line 745:    [%3d] availStatus(Updated): %d -> %d, rat:%s
Line 669: [!]%s: Invalid Access Network(%d)
