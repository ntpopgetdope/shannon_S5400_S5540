Line 174:    %s : 
Line 187:    SimPresent : %d
Line 237: [I]%s : NrNsaOnlyConfig - %d
Line 268:    %s : 
Line 290:    %s : 
Line 341:    %s : currVoLTESupport (%d) NsVolteCapaSetReq (%d) 
Line 353:    %s : No actions as plmn_GlobalModeReinitializedFlag (%d) 
Line 359:    %s : CTC VoLTE precondition is not matched, ignore ILM 
Line 413:    %s : NrSilentMode from NS - %d 
Line 418:    %s : NrSilent feature not ENABLED, Ignore NrSilentModeInd from NS
Line 443:    %s : DualSimStatus from NS - %d 
Line 453:    Same DualSimStaus reported by NS, no action taken
Line 458:    3G dual SIM is not supported
Line 492:    %s : SameSimStatus from NS - %d 
Line 520:    %s : DDSChange from NS - %d 
Line 534:    PS Stack Number From Registry - %d, OldDdsValue = %d, New DDS Value : %d 
Line 553:    IMS Stack value From Registry - %d, Old IMS DDS Value: %d, New Value : %d 
Line 582: [!]%s : stack in suspended state
Line 614:    %s : opMode(0x%x) fullscan(0x%x)
Line 632:    %s : 
Line 667:    %s : blackList(0x%x) prefMode(0x%x) prefSvc(0x%x) targetMode(0x%x)
Line 672: [!]Invalid blacklist
Line 682: [!]Invalid preferred RAT
Line 690:    Invalid preferred RAT, It is not inluded in targetOpMode.
Line 691:    Changed preferred RAT to NONE.
Line 712:    %s : 
Line 714:    SRNC grant is requested with EMC cause
Line 752:    %s : 
Line 857: [!]%s : stack in suspended state
Line 923:    %s : CallStatus %d, MmcActRat 0x%x, MmcPrefRat 0x%x 
Line 938:    Recieived CALL_FAIL/CALL_END without CALL_START, Just send EMC_RAT_INFO and avoid further actions !
Line 945:    Setting MMC EMC RAT to FailedRat !
Line 953:    Recieived CALL_FAIL after Exhausted All Plmn Lists, NONE EMC_RAT_INFO has been sent, Just send EMC_RAT_INFO again and avoid further actions !
Line 966:    Test SIM card and MMC_EMERGENCY_CALL_FAIL in UMTS, Treat as Call END 
Line 967:    EMC Call Status %d -> %d
Line 1013:    %s : CB Mode = %d
Line 1044:    %s : Mmc_ConfigureIratToLteReq.enable: %s
Line 1065:    No action required in MMC_LTE_HEDGE_EMC_MODE
Line 1091: [!]%s : CSFB already ongoing on other stack, Est Req Not Expected
Line 1130: [!]%s : Plmn in 2G/3G Block List, Est Req Not Expected
Line 1137: [!]%s : Operating Mode(%s) is Not LTE-3G(2G) MultiMode. Est Req Not Expected
Line 1146: [W]%s : Initialization not yet done. Respond with CsfbSigEstRej
Line 1160:    %s : CallType = %d, PrefRat = %s 
Line 1181: [!]%s : CSFB already ongoing on other stack, Query Req Not Expected
Line 1221: [W]%s : Initialization not yet done. Respond with CsfbSigEstRej
Line 1259: [W]%s : MCC is progress. After MCC scan is done perform any plmn camping for EMC call
Line 1270: [!]%s : Query Req Not Expected in Operating Mode(%s)
Line 1286:    %s : CallType = %d, PrefRat = %s 
Line 1330:    %s : 
Line 1356: [!]%s : CSFB already ongoing on other stack, Sending default abort cnf
Line 1382: [!]%s : Not Expected in this Operating Mode(%s) -> discard received msg
Line 1392:    %s : 
Line 1414: [!]%s : 
Line 1465:     %s: callType (%d)
Line 1472:    Send EPS FB RSP with result = FALSE directly.
Line 1483:    Send EPS FB RSP with result = TRUE directly when N2L IRAT in progress.
Line 1512: [!]%s : 
Line 1532:     %s: 
Line 1566:     %s: 
Line 1574:    VoNR MT CS Call Retry Ind Msg is invalid. SingleDualModeOperation=%s, RatMode=%s
Line 1578:    VoNR MT Call Fail: Move to Hedge for MT call retry
Line 1611:    %s : Mbms State: %d
Line 1714:    %s : Invalid State
Line 1747:    %s : 
Line 1952:    %s : 
Line 1955:    Ims Feature=%x, ImsPsRatType = %d, VolteErrCause = 0x%x, StatusCode = 0x%x
Line 2007:    IMS reg success, reset DataOnlyReg context
Line 2023:    IMS reg successful on tempBlockedPlmn(IMS rejected)
Line 2060:    %s : SelectedMode=%d
Line 2084:    %s : 
Line 2150:    %s : SafeMode(%d), NoSvcScanTime(%d min) 
Line 2179:    %s : SafeMode(%d), NoSvcScanTime(%d sec) 
Line 2228:    %s: isActivated (%d), listType (%d)
Line 2253:    %s 
Line 2285: UE is not Camped on SAT PLMN/Camped PLMN is present in SAT Allowed List/Search is not ongoing on SAT Allowed PLMN
