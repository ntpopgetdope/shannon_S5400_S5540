Line 191: [W]NO SIM PRESENT
Line 197: [W]CMD_UNSUCCESSFUL_TEMP_ERR !
Line 200: [W]CMD_UNSUCCESSFUL ! (0x%x)
Line 1648: [W]%s : deferred -> RR or RRC not Ready yet, defer SIM messsage proessing
Line 1537: %s:: Entry 
Line 1598: %s:: Exit 
Line 227:    %s : Plmn State = %s, %s  in state of plmn_UsatRegistered
Line 242:    SIM REFRESH PROCEDURE will be triggered. Blocking further Search. 
Line 243:    SIM REFRESH PROCEDURE will not be triggered, so carry on with Search. 
Line 1034:    %s : Plmn State = %s
Line 1045: [W]Errors in Reading SIM Data...Select ANY Plmn
Line 1046: [W]SIM Returned CMD_UNSUCCESSFUL_TEMP_ERR
Line 1074: 
--------------------- Displaying PLMN SIM Data -------------------------------------

Line 598:    [LGU Roaming requirement]Search LTE first, when user enable LTE roaming: write RPlmnAccTech to LTE
Line 622:    Clear RPLMN Access Tech. - IMSI changed 
Line 645:    Original HPlmn extracted from IMSI : %06x
Line 646:    #3. HPlmn extracted from IMSI : %06x
Line 687: [W]Mismatch - SimProvider(%d) != CardType in GmcConfig(%d/0x%x)
Line 697:    #4. SimProvider : %d
Line 767:    Received Ehplmn_Indicator: %d
Line 789:    EF-CSP plmn mode bit = 0, So modify Plmn Selection mode
Line 790:    Flash value is Manual mode, EF-CSP is Auto So setting it to Auto
Line 866:    #6. SimRead EPS Tai received (0x%x) IsEpsLociValid (%d)
Line 877:    #7a. SIM EPS LOCI is Absent, FlashRead EPS Tai %06x and pPlmnSimData_DB->plmn_SimData.LteUpdateStatus: %d
Line 887:    #7b. IMSI/SIM Card is changed or IsEpsLociValid EF is present, Updated pPlmnSimData_DB->plmn_SimData.Tai: %06x and pPlmnSimData_DB->plmn_SimData.LteUpdateStatus: %d
Line 987:    Saved NBLTENTN PLMN in Flash : %06x
Line 991:    NB NTN: Valid PLMN is present
Line 338:    IMSI has changed (plmn_SimData.EfImsiChanged : %d), Deleting Flash CSG information !
Line 360:    CSG Capable UE ( %s ), CSG Services on UICC ( %d ) 
Line 422:    pPlmnSimData_DB->plmn_SimData.LastRPLMNSelInd (EF_LRPLMNSI): %d
Line 433:    Setting the StoredFrequencyFlag in ATT config for EarlyMCC detection procedure. 
Line 444:    Setting HighestRatPrioritySearch for LTE search first
Line 480:    Disable forced RAT search on CMCC SIM
Line 508:    Fast First HPPLMN Enabled = %d
Line 382:    %s : HomePlmnCount(%d)
Line 393:    found  %06x PLMN in SAT LIST, overwrite HPLMN with dummy PLMN
Line 1393:    %s : Plmn State = %s
Line 1419:    OPPLMN files refreshed. Restart HPPLMN timer for smallest duration !
Line 1424:    SIM files refreshed. Restart HPPLMN timer for smallest duration !
Line 1185:    %s : Read %d EF_FILE data in plmn_SimData and update PLMN&PLMN list data
Line 1192: [W]Read Failure for file : 0x%x 
Line 1330: [W]Unknown EF Element (0x%x) Received Ignore
Line 1122:    Valid HPLMN is Present: %06x
Line 1130:    act-HPLMN not present. Sending the highest HPLMN(%0x6X) extracted from Home-PLMN-List
Line 270: [W] %s : CSG Not Supported. Ignoring the Msg
Line 1465:    %s : EF_HPLMNwAct, EF_EHPLMN, EF_PrefPLMNwAcT, EF_OPLMNwAcT
