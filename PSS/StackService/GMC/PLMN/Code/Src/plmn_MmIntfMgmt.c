Line 352:    Set MmState : %s -> %s
Line 384:    Set MmStateCsCallActiveFlag : %d -> %d
Line 418:    Set EmmState : %s -> %s
Line 456:    Set EmmFuncState : %s -> %s
Line 476:    Set NrmmState : %s -> %s
Line 507:    Set NrmmFuncState : %s -> %s
Line 539:    Set GmmState : %s -> %s
Line 571:    Set GmmFuncState : %s -> %s
Line 603:    Set GmmServiceState : %s -> %s
Line 622:    GMCF::CTX::pPlmnMmStatusDB->Data.MmInitCnfFlag(%d) : %d -> %d 
Line 638:    GMCF::CTX::pPlmnMmStatusDB->Data.EmmInitCnfFlag(%d) : %d -> %d 
Line 654:    GMCF::CTX::pPlmnMmStatusDB->Data.NrInitCnfFlag(%d) : %d -> %d 
Line 673:    GMCF::CTX::pPlmnMmStatusDB->Data.PlmnPdpState(%d) : %d -> %d 
Line 700:    GMCF::CTX::pPlmnMmStatusDB->Data.PlmnEmcPdnStatus(%d) : %d -> %d 
Line 726: [W]Invalid value for status
Line 729:    pPlmnMmStatusDB->Data.LocUpdateRejFlag : %s -> %s
Line 744:    GMCF::CTX::pPlmnMmStatusDB->Data.LauMaxRejDsDSOptNeededFlag(%d) : %d -> %d 
Line 811: [W]%s : mode is not supported  
Line 839:    PLMN Selection cannot be started : %s, %s(%d), LTE Init(%d),  %s(%d)
Line 855:    %s - Cant do Plmn Selection in %s State 
Line 863:    %s - Cant do Plmn Selection in %s State 
Line 878:    %s - PLMN action delayed until PS signaling connection release, except OOS Case 
Line 879:    %s - Perform PLMN action in Idle Mode/Rcvd No Service from RRC  
Line 891:    %s - PLMN action delayed until GMM procedure completion in %s, PdpStatus = %d
Line 906:    %s - PLMN action delayed until RR connection release in %s
Line 938: [W]GSM state- Inappropriate RAT_CHANGE_STATE - %s(%d) 
Line 970:    2G PDP ACTIVE
Line 994: [W]Inappropriate RAT_MODE_CHANGE_STATE 
Line 995: [I]RatChangeState -> %s
Line 2589: %s:: Entry 
Line 2702: %s:: Exit 
Line 2424:    %s : %s
Line 2425:    EmcCallSupport : %d, NwRejCause : %d
Line 2445:    Set EmergencyPlmnAvailableFlag forcefully - Emergency scan retry is going on in LTE !
Line 2488:    Set EmergencyPlmnAvailableFlag forcefully - China NON CTC SIM and ImsVoPSSupportedFlag is TRUE!
Line 2526:    Set EmergencyPlmnAvailableFlag forcefully - China NON CTC SIM and ImsVoPSSupportedFlag is TRUE!
Line 2553:    Set EmergencyPlmnAvailableFlag forcefully - China NON CTC SIM and ImsVoPSSupportedFlag is TRUE!
Line 1892: %s : Sim CScnt %d, PScnt %d, Maxcnt %d
Line 1239:    Pending PLMN SEL REQ is not yet processed, CS call is active , delete the saved message & send response to NS
Line 1262:    %s: %s(%d), MMServiceState(%d) 
Line 1267:    %s(%d), %s(%d), PmmFuncState(%d), GmmFuncState(%d)
Line 1282:    VALID LAC/RAC AVAILABLE
Line 1322: [W]Failed !! Operating Mode = %d , EUTRAN Disabled = %s 
Line 1424:    %s : %s(%d), PdpStatus = %s
Line 1432:      Emergency PDN Status = %s ,
Line 1485:    EUTRA Can be Enabled/Disabled for Rej Cause/Query CNF
Line 1491:    MMC_CSFB_MO_IN_PROGRESS_HEDGE/HEDGE_EUTRA_DISABLE is set, so Restart the Timer 
Line 1573:    %s : %s(%d), NrmmState = %s(%d), PdpStatus = %s, 
Line 1588:      Emergency PDN Status = %s ,
Line 1595: [I]SIM NR TAI : %06x / 0x%06x 
Line 2091:    %s : NR N1 mode = %d, plmnNrCapDisableFlag = %d 
Line 2313:    %s : Blocked Plmn ID = %06x, Block timer value = %d sec, isImsRegFail = %d
Line 2325:    Send NR temp block list to NRMM
Line 2346:    This is crossover scenario for NR search req and addition of NrTempBlockedPlmn
Line 2351:    NR only mode, Suspend ongoing search and perform FG list
Line 2363:    Suspend ongoing search and Move to next RAT
Line 2372: %s:: Exit 
Line 1924:    not need to update PLMN_NR_TEMP_BLOCK_PLMN_L as Blocked Plmn ID, %06x is empty.
Line 1930:    PLMN %06x is already present in PLMN_NR_TEMP_BLOCK_PLMN_L
Line 1933:    Timer %d stopped, to restart with new timer value
Line 1990: [W]PLMN_NR_TEMP_BLOCK_PLMN_L is full. Remove the oldest index from the list.
Line 1193:    HoldPlmnRsp = %d
Line 1048:    %s : SrcRat = %s, isHplmnRemovedFromTempBlock = %d
Line 1056:    Fresh scan is not applicable because %s RAT is not included in %s operating mode.
Line 1060:    EUTRA is not enabled (%d). No actions required to be taken
Line 1061:    NR is not enabled (%d). No actions required to be taken
Line 1082:    Fresh PLMN scan req from MM - Abort on-going BPLMN List & Start New List Req 
Line 1101: [I]Plmn Selection Mode : %s
Line 1109: Already BPLMN List in Progress; Abort this & Start New List Req 
Line 1117:    Restarting HPPLMN timer for short Duration
Line 1124:    We are on VPLMN, Trigger HPLMN search Immediately
Line 1144:    Wait for HPPLMN timer to take actions !
Line 1151:    User req ongoing
Line 1155:    Abort on-going search and start a fresh scan !
Line 1160:    Plmn List / Selection already going on, No need for triggering actions again
