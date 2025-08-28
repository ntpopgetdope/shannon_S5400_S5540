Line 238:    GMCF::CTX::pPlmn_SafetyMode->SafetyModeEnabled(%d) : 0x%x -> 0x%x 
Line 258:    GMCF::CTX::pPlmn_SafetyMode->NoSvcScanTime(%d) : 0x%x -> 0x%x 
Line 278:    GMCF::CTX::pPlmn_OOSRecovery->RecoveryAbandonedFlag(%d) : %d -> %d 
Line 297:    GMCF::CTX::pPlmn_OOSRecovery->RecoveryTimerNeededFlag(%d) : %d -> %d 
Line 317:    GMCF::CTX::pPlmn_OOSRecovery->RecoveryCounter(%d) : 0x%x -> 0x%x 
Line 612:    SmartOOS timerDuration = %d)
Line 623:    Safety Mode Enabled, NoSvcScanTime(%d min): Use NoSrvScanTime instead of the OOS time that is higher than 60 sec
Line 643:    Start short deep sleep timer
Line 658:    plmn_PlmnRecoveryTimerDuration = %d, (plmn_recovery_counter =%d)
Line 833:    %s - uCase = %d
Line 834:    #%d In limited camping state -> Start OOS recovery timer : On expiry start PLMN search
Line 835:    #%d EMC PLMN available       -> Start OOS recovery timer : On expiry start PLMN search
Line 836:    #%d ProSe DC start           -> Start OOS recovery timer : On expiry start PLMN search
Line 837:    #%d Start OOS deepsleep timer : RAT is already suspended, start DeepSleep timer only 
Line 838:    #%d Start OOS deepsleep timer : Suspend RAT first, On expiry start PLMN search
Line 863:    Change mode to HEDGE to try normal service recovery
Line 864:    OOS Recovery/OOS Deepsleep loopback counter max reached
Line 996:    %s 
Line 1016: [!]DST Start FAIL
Line 1019:    PLMN_OOS_DEEPSLEEP_TIMER  Next Plmn Selection in %d Seconds ....Please Wait
Line 1034: [!]TMO EMC call pending, dont reset rat init param
Line 1194: [I]MmState -> %s
Line 1205:    Master Stack is performing recovery.. 
Line 1233:    Mmc_HandOffWithOOSIndSentFlag = %d 
Line 1346:    RecoveryCounter=%d (%s), Step index=%d, StoredBlindRatio=%d, total blindAttempts=%d
Line 342:    GMCF::CTX::pPlmn_OOSRecovery->RecoveryMaxIteration(%d) : 0x%x -> 0x%x 
Line 531:    OOS Time pattern for ProSe OOS Recovery[%d]
Line 532:    OOS Time pattern for PLMN_MAKE_TYPE2 OOS optimization
Line 533:    OOS Time pattern for PLMN_MAKE_TYPE1 %s 
Line 534:    OOS Time pattern for LGU %s
Line 537:    OOS Time pattern for %s 
Line 539:    OOS Timer table Idx[%d] : Device Type = 0x%x 
Line 540: [!]OOS Timer table Idx[%d] : Index Max reached! No PLMN_GENERAL element at the end of Timer table? 
Line 1135:    EMC call or Netscan or IRAT is going on. Need to restart OOS recovery timer instead of perform timer expiry action
Line 1139:    Mode update is ongoing and waiting for NR mode update rsp, just restart the timer
