Line 246:    GMCF::CTX::pEmcCallStatusData->EmcCallInNoSimFlag(%d) : %d -> %d 
Line 260:    GMCF::CTX::pEmcCallStatusData->EmcCallRcvdBeforeMmInitCnfFlag(%d) : %d -> %d 
Line 281:    GMCF::CTX::pEmcCallStatusData->EmcCallSearchType(%d) : 0x%x -> 0x%x 
Line 287:    GMCF::CTX::pEmcCallStatusData->RetryEmergencyScanonLTEFlag(%d) : %d -> %d 
Line 298:    EmcCallSupport : %d, VoPS : %d
Line 299:    GMCF::CTX::pEmcCallStatusData->EmergencyPlmnAvailableFlag(%d) : %d -> %d 
Line 305:    GMCF::CTX::pEmcCallStatusData->NwEmcSupported(%d) : %d -> %d 
Line 322:    GMCF::CTX::pEmcCallStatusData->N1ReenableTimerStartFlag(%d) : %d -> %d 
Line 332:    GMCF::CTX::pEmcCallStatusData->EmcFallbackSupported(%d) : 0x%x -> 0x%x 
Line 348:    GMCF::CTX::pEmcCallStatusData->ImsVoPSSupportedFlag(%d) : %d -> %d 
Line 395:    GMCF::CTX::pEmcCallStatusData->MOEsfbFlag(%d) : %d -> %d 
Line 416:    PrefRat : %s -> %s
Line 418:    GMCF::CTX::pEmcCallStatusData->AttemptedRat(%d) : 0x%x -> 0x%x 
Line 439:    PrefRat : %s -> %s
Line 441:    GMCF::CTX::pEmcCallStatusData->PrefRat(%d) : 0x%x -> 0x%x 
Line 466:    Emergency call Status : CALL_START (1) in %s, PrefRat : %s 
Line 467:    Emergency call Status : CALL_END (2) in %s
Line 469:    Emergency call Status : CALL_FAIL (4) in %s
Line 470:    Emergency call Status : ECBM Enter (5) in %s 
Line 472: [!]Emergency call Status : INVALID ( %d ) 
Line 485:    No need to apply LTE attach related EMC changes for test SIM
Line 671:    %s : uCase = %d 
Line 672:    #%d Legacy EMC - Search failed, go to next system
Line 673:    #%d Legacy EMC - Search Fail Indication ignored !
Line 674:    #%d Legacy EMC - EMC Call pending but Any plmn search actions not taken
Line 675:    #%d CP_BASED_EMC - NO CSFB ongoing, initiate MMC EMC search  
Line 676:    #%d CP_BASED_EMC - CSFB ongoing , Search failed on one RAT, go to next RAT
Line 691:    %s : EmergencyCallSupport = %d, EmcRatNotified = %s, CellInd RAT = %s 
Line 692:    EmerCallPending = %d, RatModeChangeState = %d , EmcRatPendingForAttach = %d
Line 716: [W]Invalid PlmnRat Mode (%d) for EmergencySupport Actions
Line 766:    %s : uCase = %d 
Line 768:    #%d IRAT going on 
Line 769:    #%d In On PLMN state, CSFB Ongoing.EMC Call being handled through CSFB.
Line 770:    #%d In On PLMN state, ESFB Ongoing. Do not process CELL_IND event
Line 771:    #%d In On PLMN state, EPSFB Ongoing. LTE Cell Ind -> EMC Call being handled through EPSFB.
Line 772:    #%d In On PLMN state, china-EMC Call being handled through IMS normal bearer.
Line 773:    #%d In On PLMN state, Rat notified as 2G/3G, wait for CSFB request
Line 775:    #%d NOT CP_BASED_EMC - E911 : send EMC_RAT_INFO after attach result
Line 776: [W]#%d NOT CP_BASED_EMC - AP is already notified with EMC_RAT_INFO with Rat (%d)
Line 777:    #%d NOT CP_BASED_EMC - E911 : send EMC_RAT_INFO after attach result
Line 778:    #%d NOT CP_BASED_EMC - EmcRatPendingForAttach -> send EMC_RAT_INFO 
Line 781: [W]#%d NOT CP_BASED_EMC - Emergency Call is Pending, but the current Cell does not support Emergency
Line 782:    Continue search on remaining RATs or Send notification to AP
Line 783:    Trigger any PLMN Selection 
Line 806:    %s : uCase = %d 
Line 807:    #%d General case - Continue recovery with anyPlmn scan
Line 808:    #%d Canada Operator ESFB case, if attach fails, start anyplmn search
Line 809:    #%d TMO dev EMC call pending, as attach fail with default cause, go to next system
Line 838:    %s : uCase = %d 
Line 839:    #%d VzW dev EmergencySupported TRUE, send LTE rat
Line 840:    #%d VzW Dev EmergencySupported FALSE, send dummy rat for pending EMC call
Line 841:    #%d General Case, EMC PLMN available 
Line 842:    #%d For china operator, send LTE RAT if VoPS is supported
Line 843:    #%d General Case, NO EMC PLMN availble for NR, Trigger ESFB on LTE
Line 844:    #%d General Case, NO EMC PLMN available, CSFB possible - CSFB RAT 3G 
Line 845:    #%d General Case, NO EMC PLMN available, CSFB possible - CSFB RAT 2G 
Line 846:    #%d TMO EMC call pending, as EMC is not supported after attach cnf, go to next system
Line 1320:    Recovery to be started through deepsleep timer as its running/start/expiry in progress
Line 1337:    Reject received but not processed, change PlmnState so that recovery will be triggered
Line 1352:    Emergency Call END, resetting plmn selection state
Line 1358:    No Action needed as PLMN state is %s !
Line 1383:    Emergency Call END, resetting plmn selection state
Line 1398:    OOS Recovery timer is running, and MM Non-Idle State, perform actions after IDLE and TIMER expiry
Line 1416:    Emergency Call END, starting DeepSleep timer to perform PLMN recovery action after timer expiry
Line 1427:    Emergency Call END during any plmn search, starting DeepSleep timer to perform PLMN recovery action after timer expiry
Line 1437: [W]InValid SIM / Search is already going on so no need to try for Normal service
Line 1439: [I]Plmn State : %s (%s)
Line 1440:    plmn_PlmnSelectionStarted -> %s
Line 1452: [W]Registration is already going on so no need to try for Normal service
Line 1470:    EMC Call ended and MCC procedure is Incomplete. Start MCC procedure 
Line 2487: %s:: Entry
Line 2562: %s:: Exit
Line 1494:    %s : Esfb %s
Line 1502:    Wait the LTE attach result.
Line 1508:    Invalid Esfb FailCause : %d
Line 1520: [W]Invalid Esfb result value : %d
Line 2451:    %s : EMC Call Status = %d, AttemptedRatType: %s, mmcActPrefRat: %s
Line 2461:    Single Mode operation and MMC_EMER_CALL_FAIL in current RAT, Treat as Call END 
Line 2462:    EMC Call Status %d -> %d
Line 2476: [!]Cause not handled in %s 
Line 2261:    %s : EmcRat = %s, ActiveRat = %s, %s
Line 2283:    Emergency Call start (not during power on cases)
Line 2309:    EmergencyPlmnAvailable - %d, isCanadaE911Exception - %d, isLguException - %d 
Line 2333:    Enable EUTRA (and perform LTE search) for NTT device
Line 2350:    EmergencyPlmnAvailable is TRUE. Sending EMC RAT Info
Line 2351: [W]EmcRat == MMC_NONE_MODE !
Line 2366:    NTT device, Set RAT tried with LTE !
Line 2379:    UE registered on LTE with VoPS supported, notify LTE RAT
Line 2402:    EmergencyPlmnAvailable is %s. Sending Dummy EMC RAT Info
Line 2426:    %s : uCase %d handled - StartPlmnSelCause %d 
Line 1865:    AP Already has EMC_RAT_INFO %X !Not Performing any actions.
Line 1882:    Stack initialisation ongoing!
Line 1888:    EMC Call deferred -> after BPLMN Abort 
Line 1894:    Wait for MCC procedure to complete
Line 1906:    AP requested mmcActPrefRat : %s
Line 1938:    Abort Ongoing User PLMN selection request
Line 1950:    powerOn search ongoing, Wait for Response
Line 1957:    CpowerOn attach ongoing, Wait for attach Response
Line 1991:    Emergency Call notification received immediately after powerOn initialization... Start RPLMN search after init is complete
Line 1999:    setting LTE as prefRat for ATT/KT for airplane mode on EMC call case
Line 2018:    EMC Call skip -> PLMN Selection already going on, Wait for Response from the corresponding RAT
Line 2023:    PLMN Search on %s ongoing, suspend and try on UMTS
Line 2029:    Foreground LIST procedure is going on, ABORT and process EMC call
Line 2041:    EMC Call deferred -> after NEW_RAT_INITIAL_PLMN_ACTION
Line 2048:    EMC Call deferred -> after BPLMN Abort 
Line 2057: NETSCAN procedure is ongoing, ABORT NETSCAN and process EMC call 
Line 2064:    Abort ongoing MCC scan and take EMC actions
Line 2070:    setting LTE as prefRat for ATT/KT for airplane mode on EMC call case
Line 1786:    Current camped cell supports EMC, send EMC RAT info
Line 1795:    Stored scan on going, continue the search
Line 1664:    Start anyPlmn search
Line 1696:    RPLMN is present in tempBlockedList. Try normal service on 3G/ 2G
Line 1719:    Start deepSleep timer to suspend the current search and start search on same rat
Line 1546:    EMC Call skip -> PLMN Selection already going on, Wait for Response from the corresponding RAT
Line 1598:    %s : uCase : %d | LteBlocked : %d | NrBlocked : %d
Line 1602:    RPLMN in NR tempBlockedList 
Line 1611:    RPLMN in LTE tempBlockedList 
Line 2170:    VoPS is not supported. Prioritze CS call
Line 2177:    IMS is not registered. Prioritze CS call
Line 2196:    In UK give preference to PS domain for EMC call
Line 2202:    VoNR not supported
Line 1080:    Call fail received... Already next plmn search ongoing
Line 1092:    After EPSFB(N2L), send EMC_RAT_INFO(LTE)
Line 1096:    Call fail received... start next plmn search
Line 1115:    NTT device, Update RAT tried with 3G !
Line 1124:    NTT device, Do not disturb ongoing PLMN search !
Line 1132:    Trigger search for next RAT for TMO
Line 1138:    Any Plmn Search is already going on, wait for result to take further action
Line 1153:    LastEmcRat (%d) is different from the current RAT(%d), use current RAT for EMC 
Line 1176:    NTT device, skip EMC scan !
Line 1218:    Start deepSleep timer to suspend the current RAT and start search on same rat
Line 1226:    %s : uCase %d handled - StartPlmnSelCause %d 
Line 867:    %s : 
Line 877: [W]Cant accept CM Request During a RAT CHANGE
Line 904: [W]RR init Req has been sent, NOT received Confirmation yet
Line 912:    RR init Req has been sent. 
Line 913:    Selecting Any Plmn For Emergency Use Only : EmcCallNoSimPlmnAction flag = %d 
Line 942:    HPPLMN search in progress -> return to saved PLMN or Try Any PLMN 
Line 949:    HPLMN Search is on going & UE moving back to RPLMN -> NS
Line 964:    No HPPLMN search in progress -> normal PLMN selection 
Line 971:    Aborting PLMN_LIST_REQ (or Abandoning Waiting for User), and selecting any Plmn 
Line 989:    Emergency Plmn Available -> %s
Line 1003:    Any PLMN search is already in progress !
Line 1009:    %s
Line 1029:    tryAnyPlmnCause = %d, Result = %d 
