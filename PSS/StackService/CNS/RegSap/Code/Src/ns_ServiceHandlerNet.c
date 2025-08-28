Line 82: EmmRegState=%d, ServiceState(MM=%d, GMM=%d, EMM=%d), Flag(OOSInd=%d, HPlmnSearch=%d)
Line 85: NrmmRegStatus=%d
Line 89: Error: Null Pointer
Line 100: For PS Only device, convert reqService to : %d
Line 135: AccessTech Change by mode change (%d => %d)
Line 141: RegStatus Change by mode change (%d => %d)
Line 153: Airplane Mode Timer running,changed reg Status to No Service
Line 156: NS_SERVING_NETWORK_RSP (Mode Select=0x%X, Reg Status=0x%X, Act=0x%X
Line 157: LAC=%X-%X, RAC=0x%X, TAC=%X-%X, Cell Id=0x%X
Line 158: PLMN Id= 
Line 235: For PS Only device, convert reqService to : %d
Line 254: Notification is blocked during stopping by Mode change (AccTech=%d, RegStatus=%d)
Line 259: Error: Null Pointer
Line 267: NS_SERVING_NETWORK_NTF (Mode Select=0x%X, Reg Status=0x%X, Act=0x%X)
Line 269: LAC=%X-%X, RAC=0x%X, TAC=%X-%X, Cell Id=0x%X
Line 270: PLMN Id= 
Line 330: Convert RegStatus to ROAM
Line 336: Convert RegStatus to HOME
Line 340: Don't convert CS RegStatus for lastRegisteredPlmnAttr %d, Current PlmnAttr %d
Line 370: Convert RegStatus to ROAM
Line 376: Convert RegStatus to HOME
Line 380: Don't convert CS RegStatus for lastRegisteredPlmnAttr %d, Current PlmnAttr %d
Line 385: ns_ConvertRegStatusForRejCause (lastRegEvent=%d, AccessTech=%d, RegStatus=%d, isRoaming=%d)
Line 469: 	TMO MVNO check
Line 486: Keep the CS RegStatus as not-registered for TMO
Line 490: Keep the CS RegStatus as not-registered for KDDI
Line 495: Converted to temp in srvc
Line 510: Keep the PS RegStatus as registered for TMO
Line 515: Convert PS registration status to not-register for TMO
Line 522: Keep the PS RegStatus as registered for KDDI
Line 527: Convert PS registration status to not-register for KDDI
Line 573:  CS RegStatus in LTE  :%d
Line 682: NR MM Reg Status Flag = %d ns_UI_HiddenStatusEnable = %d
Line 685: Saved status is =  %d and NRMM updated Status is = %d
Line 690: NRMM Status is = %d
Line 770: RegStatus Change by mode change (%d => %d)
Line 776: AccessTech Change by mode change (%x => %x)
Line 809: Interal Regi cause is changed to %d
Line 817: Convert RegStatus to %d Access Tech to %d in case of Cause=%d
Line 836: Converted to temp in srvc
Line 865: Converted PS RegStatus to  NOT_REG
Line 904: Convert RegStatus to HOME in case of Cause=%d
Line 908: Don't convert CS RegStatus for Cause %d, lastRegisteredPlmnAttr %d, Current PlmnAttr %d
Line 950: Error: Null Pointer
Line 961: TxInternalRegiEvent 6(EPSFB) is used in NS only for TMO exception case
Line 971: OVERRIDING SavedCellId
Line 986: Disable_2g3g_data: Data to be disabled on current PLMN 0x%x 0x%x 0x%x 
Line 1000: Overriding ACT for complete OOS Case
Line 1006: NS_NETWORK_REGISTRATION_GET_RSP (ACT=0x%X, SVC Domain=0x%X, Reg Status=0x%X, REJ Cause=0x%X, InteranlReg = 0x%X)
Line 1009: LAC=%X-%X, RAC=0x%X, TAC=%X-%X, Cell Id=0x%X
Line 1042: Service domain is not NS_SIPC_SERVICE_DOMAIN_CIRCUIT (value %d)
Line 1077: EmmRegState=%d, ServiceState(MM=%d, GMM=%d, EMM=%d), Flag(OOSInd=%d, HPlmnSearch=%d)
Line 1079: NrmmRegStatus=%d
Line 1143: Airplane Mode Timer running,changed reg Status to No Service
Line 1180: Error: Null Pointer
Line 1309: PLMN ID is updated (%02x:%02x:%02x)
Line 1318: LAC is updated (%02x:%02x)
Line 1327: TAC is updated (%02x:%02x)
Line 1336: NR TAC is updated (%02x:%02x:%02x)
Line 1345: RegStatus is updated (%d)
Line 1354: RRC State is updated (%d)
Line 1441: Wrong Service Domain(%d)
Line 1516: notificaion is blocked during stopping by Mode change (AccTech=%d, RegStatus=%d)
Line 1522: Error: Null Pointer
Line 1538: TxInternalRegiEvent 6(EPSFB) is used in NS only for TMO exception case
Line 1557: NS_NETWORK_REGISTRATION_NTF (ACT=0x%X, SVC Domain=0x%X, Reg Status=0x%X, REJ Cause=0x%X, TauUpdateType %d, AttachFailureFlg=%d, simValid=%d)
Line 1560: LAC=%X-%X, RAC=0x%X, TAC=%X-%X, Cell Id=0x%X, T323=%d
Line 1561: mmNetRejNotiSend=%d, ProcType=%d
Line 1562:  PsServiceType =%d
Line 1606: updated CsInfo.Rat %d in LTE only mode
Line 1614: Updated CsInfo.Rat %d when NR Registered
Line 1630: Overriding ACT for complete OOS Case
Line 1665: - blocked during stopping by mode change
Line 1676: - blocked during starting procedure
Line 1686: - allowed in SYNC_DONE
Line 1691: - blocked during starting procedure
Line 1698: Debugging point in DisableRule
Line 1742:  CS ActiveRat = %d, Cs RegStatus = %d
Line 1777:  PS ActiveRat = %d, Ps RegStatus = %d
Line 1815: DomainInservice(CS=%d, PS=%d)
Line 1830: Hedge RegStatus : %d
Line 1850: EMM Reg Status Flag = %d, ns_UI_HiddenStatusEnable = %d
Line 1853: Saved status is =  %d and EMM updated Status is = %d
Line 1858: EMM Status is = %d
Line 1918: Invalid rat mode=%d
Line 1937: Error: Null Pointer
Line 2003: - Current RequiredDomain=%d
Line 2004: Act %d, ServiceDomain %d
Line 2030: Stack Disabled by AP !!!
Line 2047: Invalid Service domain: %d, Trigger Domain change response
Line 2062: Not allowed in non-initialized/initializing state status
Line 2072: SMS is in progress,Once it ends PS detach will be done ,PsDetachHold %d
Line 2080: SMS is in progress ,But AP sends PS ATT so reset PsDetachHold : %d
Line 2089: - New request comes before finishing previous request (holding event: %d)
Line 2121: DualSimStatus : %d Simcardtype : %d Mcc :%d,VoLteCapa: %d curNsStackState :%d 
Line 2125: isDeviceTypeCtc %d, stack stop is ignored
Line 2139: PS DET when SIM LTE only mode : stop  stack  
Line 2173: DualSimStatus : %d Simcardtype : %d Mcc :%d 
Line 2182: PS attach when SIM is disabled: start  stack  
Line 2201: Error: Null Pointer
Line 2214: Reset PsDetachHold :%d
Line 2232: Error: Null Pointer
Line 2244: PrefNet :  %d
Line 2251: Error: Null Pointer
Line 2282: Disable_2g3g_data: Resetting Plmn list db on %d
Line 2286: Disable_2g3g_data: Error - Invalid StackId %d passed 
Line 2354: ns_ReadDisable2g3gregistry db on stack %d
Line 2358: Error : Invalid StackId %d passed 
Line 2369: Disable_2g3g_data: Plmn Counts in registry %d 
Line 2373: Error Reading Registry on stackId %d 
Line 2387: Disable_2g3g_data: PLMN Id %x %x %x, Disable RatMask %x
Line 2391: Error Reading Registry on stackId %d 
Line 2419: Disable_2g3g_data registry Init
Line 2425: Disable_2g3g_data DB updated from registry for StackId %d 
Line 2429: Disable_2g3g_data: Error in reading the registry on StackId %d
Line 2475: Disable_2g3g_data : is2g3gDisabledonCurrentPlmn updated to %d
Line 2546: ns_Is2g3gDataDisableNeededOnCurrentPlmn db on stack %d
Line 2550: Error : Invalid StackId/PLMN %d passed 
Line 2560: Disable_2g3g_data: Data should be disabled on the current Plmn 
Line 2585: Disable_2g3g_data: 2G data should be disabled on the current Plmn 
Line 2590: Disable_2g3g_data: Invalid RAT Mask Matching
Line 2599: Disable_2g3g_data: 3G data should be disabled on the current Plmn 
Line 2604: Disable_2g3g_data: Invalid RAT Mask Matching
Line 2613: Disable_2g3g_data: Data should not be disabled on the current Plmn 
Line 2635: Error: Null Pointer
Line 2636: Error: Null Pointer
Line 2653: Disable_2g3g_data: Data to be disabled on current PLMN 0x%x 0x%x 0x%x 
