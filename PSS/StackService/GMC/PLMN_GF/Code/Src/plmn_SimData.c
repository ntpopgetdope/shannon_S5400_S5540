Line 514: [I]Displaying All MM SIM Data
Line 516: [I]SIM Type : %s
Line 525: [I]SimData MCC/MNC : %06x
Line 535: [I]--------------------------
Line 542: [I]SIM Type : %s
Line 550: [I]SimData MCC/MNC : %06x
Line 588:    GMCF::CTX::pPlmnSimData_DB->plmn_SimDataLocal.SimPresent(%d) : %d -> %d 
Line 623:    SimProvider : %d -> %d
Line 652:    Not valid PAL PLMN INFO EVENT
Line 1615:    %s
Line 1616:    ACSGListPtr is NULL
Line 1617:    OCSGListPtr is NULL
Line 2119:    Received %s[%d] : %06x , AccTech: %s (0x%04x), %c
Line 2127:    # EF_OPLMNwACT/EF_UPLMNwACT - Received %d %s, %d Added : 
Line 2153:    No HPLMN Search; Stopping Search Timer
Line 2174:    # Received HPPlmnPeriod (SIM): 0x%02X, Fast First HPPLMN Enabled(%d)
Line 2243:    # Received Forbidden Plmn List[%d] : %06x , %c 
Line 2260:    Received T3245 Forbidden Plmn List[%d] : %06x
Line 2318:    Received Plmn Selector List[%d] : 0x%06x , %c
Line 2323:    # EF_PLMNsel - Received %d PLMNSelectorList, %d Added : 
Line 2743:    %s : EHplmnListPtr - 0x%x, EHplmnCount - %d, HplmnListPtr - 0x%x, HPLMNCount - %d 
Line 2748:    EHPLMN list is supported. Trying to read EF_EHPLMN
Line 2749:    EHPLMN list is not supported. Not reading EF_EHPLMN
Line 2757:    HPLMN Count after reading EHPLMN: %d 
Line 2769:    HPLMN Count after processing EHPLMN and HPLMN Selector: %d 
Line 2840:    %s : MNCLength(%d)
Line 2887:    SIM MCC(%x) Indicates U.S.A subscription
Line 2895:    3rd Digit of MNC in SIM is 0, Copy 3rd digit of SIM MNC in HPlmn for now, check later
Line 2916:    3rd Digit of MNC in SIM is F !
Line 2920:    IMSI indicates that We have a 3 Digit MNC
Line 2933:    HPlmn Does Not Belong to U.S.A (%x) -> Use F as the 3rd Digit of MNC, Check later
Line 2948:    MNCLength not supported by SIM. Check later with Plmns that RR sends
Line 2986:    EF_ActHPLMN is Present
Line 2987:    EF_ActHPLMN is Not Present
Line 3045:    EF_HPLMN - Received HPlmnPeriod -> 0x%02X
Line 3126:    Received Forbidden Plmn List[%d] : %06x , %c
Line 3132:    EF_FPLMN - Received %d FPLMNList, %d Added : 
Line 3226:    EF_ActHPLMN - Received File Change Notification for ActHplmn 
Line 3258:    EF_RAT - EF_RAT(%d), SimData.RatMode(%d)
Line 3267:    =========================NOTICE======================
Line 3268:    =====================================================
Line 3269:    EF_RAT - Received REFRESH for EF_RAT. New EF_RAT: %s 
Line 3270:    =====================================================
Line 3272: [W]EF_RAT is not TRI MODE. Change SIM card or SIM profile to retest in TRI MODE
Line 3280:    EF_RAT - RAT mode is not changed -> Clear RefreshRatMode 
Line 3283: [W]%s : plmn_SimDataLocal.RefreshRatMode : %s -> %s 
Line 3307:    %s : mem. free - %s[0x%x],Count[%d]
Line 3307: [W]%s : skip mem. free - DataPtr[0x%x],Count[%d]
Line 3308:    %s : mem. free - %s[0x%x],Count[%d]
Line 3308: [W]%s : skip mem. free - DataPtr[0x%x],Count[%d]
Line 3309:    %s : mem. free - %s[0x%x],Count[%d]
Line 3309: [W]%s : skip mem. free - DataPtr[0x%x],Count[%d]
Line 3310:    %s : mem. free - %s[0x%x],Count[%d]
Line 3310: [W]%s : skip mem. free - DataPtr[0x%x],Count[%d]
Line 3311:    %s : mem. free - %s[0x%x],Count[%d]
Line 3311: [W]%s : skip mem. free - DataPtr[0x%x],Count[%d]
Line 3321:    SIM TMSI value: %08x 
Line 3367:    %s : AttCommercialSimCard(%d)
Line 3410:    %s : VzWCommercialSimCard(%d)
Line 3447:    %s : NttCommercialSimCard(%d)
Line 3490:    %s : CmccCommercialSimCard(%d)
Line 3538:    %s : CtcCommercialSimCard(%d)
Line 3563:    Provider name: %d in Plmn_SetSimProvNameFromAHPLMN 
Line 3582:    %s : mem. alloc - %s[0x%x],Count[%d]
Line 3593:    %s : mem. alloc - %s[0x%x],Count[%d]
Line 3601:    %s : mem. alloc - %s[0x%x],Count[%d]
Line 3609:    %s : mem. alloc - %s[0x%x],Count[%d]
Line 3619:    %s : mem. alloc - %s[0x%x],Count[%d]
Line 3639:    #1. Compare Sim card ID with previous one : %d (1:SameID, 2:SameType 3:Diff)
Line 3640:    #2. Is IMSI changed : %d
Line 3641:    #3. Is CSIM present : %d
Line 3654: [W]%s : plmn_SimData.RatMode : %s -> %s 
Line 3656: [W]%s : plmn_SimDataLocal.RefreshRatMode : %s -> %s 
Line 3674:    %s : Type = %d
Line 3735: [W]%s : Unknown Initialisation Type (%x)
Line 3777:    %s : received OPLMN count = %d
Line 3781: [W]Invalid preferred list received. Fail to replace OPLMN list in PLMN database for 5G SOR 
Line 3787:    Current OPLMN list not present. Create OPLMN list with received SOR list.
Line 3796:    Current OPLMN list is smaller than received OPLMN list. Replace entire OPLMN list with received SOR list.
Line 3806:    Overwrite received SOR list to highest priority entities in OPLMN list.
Line 461: [I]MM SIM State -> %s
Line 475: [I]GMM SIM State -> %s
Line 486: [I]LocUpdateStatus : %s / %s / %s / %s 
Line 493: [I]LocUpdateStatus : %s / %s / %s 
Line 398: [I]SIM LAI : %06x / 0x%04x 
Line 413: [I]SIM RAI : %06x / 0x%04x / 0x%02x
Line 428: [I]SIM TAI : %06x / 0x%04x 
Line 447: [I]SIM NR TAI : %06x / 0x%06x 
Line 892:    Return CsimAvailable
Line 1003: [W]Sim State set fail! - Invalid new Sim State (%x)
Line 1004: [I]SIM State : %s -> %s
Line 1068: [W]Gmm Sim State set fail! - Invalid new GmmSimState (%x)
Line 1069: [I]GMM SIM State : %s -> %s
Line 1137: [W]NR Sim State set fail! - Invalid new NrSimState (%x)
Line 1138: [I]NR SIM State : %s -> %s
Line 1173:    pPlmnSimData_DB->plmn_SimDataStatus.UsatRegisteredFlag : %d -> %d 
Line 1230:    pPlmnSimData_DB->plmn_SimDataStatus.HplmnCheckNeeded : %d -> %d 
Line 1268: [W]Accessing Invalid EPS update status (%x)
Line 1269:    EPSUpdateStatus : %s -> %s 
Line 1308: [W]Accessing Invalid Loc update status (%x)
Line 1309:    LocUpdateStatus : %s -> %s 
Line 1349: [W]Accessing Invalid RAU update status (%x)
Line 1350:    RAUUpdateStatus : %s -> %s 
Line 1390: [W]Accessing Invalid NR update status (%x)
Line 1391:    NrUpdateStatus : %s -> %s 
Line 1470:    plmn_NumOfEfChanged : %d -> %d 
Line 1542:    %s : ListType %d
Line 1543:    SIM CSG DATA :: CsgType (%d), CsgCount (%d)
Line 1553:    PLMN ID :: %06x, CsgDisplayInd = %d
Line 1565:    CSG Info :: %08X (CSG ID), CsgTypeInd : %d HnbNameInd: %d
Line 2546:    Start updating Home-PLMN-LIst with ef_HPLMNwAcT
Line 2568: [W]EHPLMN entry addition failed, current count of EHPLMN entries = %d
Line 2581:    Start updating Home-PLMN-LIst without ef_HPLMNwAcT
Line 2599: [W]EHPLMN entry addition failed, current count of EHPLMN entries = %d
Line 2615:    # EF_EHPLMN - Received %d EHplmnList, %d Added : 
Line 2465:    HPLMN code present in EF_HPLMNwAcT file, Copy the Access Technology into HPLMN list
Line 2477:    Received HPLMNwAcT List[%d] : %06x , AccTech: %s (0x%04x), %c
Line 2482:    # EF_HPLMNwACT - Received %d HPlmnList, %d Added : 
Line 2357:    %s : HomePlmnCount(%d)
Line 2374:    found  %06x (%d) times in the Home PLMN List
Line 2375:    %06x is not in the HOME_PLMN_L
Line 2383:    %06x is already in top of HOME_PLMN_L - No re-ordering 
Line 2392: [W]%06x index error(%d) / give up the re-ordering
Line 2409:    %06x index(%d) is re-ordered to (%d) in HOME_PLMN_L
