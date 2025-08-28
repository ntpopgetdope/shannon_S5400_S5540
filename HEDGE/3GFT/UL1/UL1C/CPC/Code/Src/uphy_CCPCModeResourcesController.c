Line 132: Instance created for stackId %d
Line 132: Instance created for stackId %d
Line 239: [CPC] Config received: SMC CFN=%d, isActivationTime=%d, activationTime=%d
Line 239: [CPC] Config received: SMC CFN=%d, isActivationTime=%d, activationTime=%d
Line 244: S0 [CPC] Release received: CFN=%d
Line 244: S0 [CPC] Release received: CFN=%d
Line 259: S0 [CPC] Deactivate received: CFN=%d
Line 259: S0 [CPC] Deactivate received: CFN=%d
Line 276: S0 process - unknown msgId
Line 276: S0 process - unknown msgId
Line 305: S0 [CPC] activation time[CFN %d, RSN %d] current[CFN %d, RSN %d]
Line 305: S0 [CPC] activation time[CFN %d, RSN %d] current[CFN %d, RSN %d]
Line 608: S0 [CPC] uphy_CCPCModeResourcesController_TriggerWaitingConfig
Line 608: S0 [CPC] uphy_CCPCModeResourcesController_TriggerWaitingConfig
Line 633: S0 [CPC]Malfunction* uphy_CCPCModeResourcesController_TriggerWaitingConfig called when IsCpcConfigWaiting was false.
Line 633: S0 [CPC]Malfunction* uphy_CCPCModeResourcesController_TriggerWaitingConfig called when IsCpcConfigWaiting was false.
Line 891: S0 S0  ActualDtxMsg pointer is null
Line 891: S0 S0  ActualDtxMsg pointer is null
Line 895: S0 [CPC] CpcDtxAsnToAct: CFN=%d
Line 895: S0 [CPC] CpcDtxAsnToAct: CFN=%d
Line 946: S0 [CPC] processUeDtxInfo: CFN=%d, UrrcState=%d
Line 946: S0 [CPC] processUeDtxInfo: CFN=%d, UrrcState=%d
Line 958: S0  ActualDtxMsg pointer is null
Line 958: S0  ActualDtxMsg pointer is null
Line 1065: S0  EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1065: S0  EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1087: S0 [CPC] DTX MODEM configuration done: CFN:%d, Slot:%d -- ActualActivationCFN:%d, activationTime:%d, EnablingDelay:%d
Line 1087: S0 [CPC] DTX MODEM configuration done: CFN:%d, Slot:%d -- ActualActivationCFN:%d, activationTime:%d, EnablingDelay:%d
Line 1097: S0 [CPC] DTX MODEM configuration Parameters: ueDtxDrxOffset:%d edchTti:%d DtxCycle1:%d DtxCycle2:%d Start1:%d Start2:%d ueDtxCycle2InactivityThreshold:%d
Line 1097: S0 [CPC] DTX MODEM configuration Parameters: ueDtxDrxOffset:%d edchTti:%d DtxCycle1:%d DtxCycle2:%d Start1:%d Start2:%d ueDtxCycle2InactivityThreshold:%d
Line 1106: S0 [CPC] DTX MODEM configuration Parameters: ueDtxLongPreambleLength:%d cqiDtxTimer:%d UeDpcchBurst1:%d UeDpcchBurst2:%d UlDpcchSlotFormatInfo:%d 
Line 1106: S0 [CPC] DTX MODEM configuration Parameters: ueDtxLongPreambleLength:%d cqiDtxTimer:%d UeDpcchBurst1:%d UeDpcchBurst2:%d UlDpcchSlotFormatInfo:%d 
Line 1112: S0  FATAL ERROR: CPCConfigMsg is NULL
Line 1112: S0  FATAL ERROR: CPCConfigMsg is NULL
Line 1265: S0 [CPC] processUeDrxInfo: CFN=%d
Line 1265: S0 [CPC] processUeDrxInfo: CFN=%d
Line 1306: [CPC] ProcessDtxModeRelease: CFN=%d isDsRelease %d
Line 1306: [CPC] ProcessDtxModeRelease: CFN=%d isDsRelease %d
Line 1310: [CPC] ProcessDtxModeRelease: clear TokenDTXDSPConfig
Line 1310: [CPC] ProcessDtxModeRelease: clear TokenDTXDSPConfig
Line 1329: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1329: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1340: [CPC] DTX released: SMC CFN=%d, HW CFN=%d, Slot=%d, SubFr=%d, activationTime=%d, isDsRelease=%d
Line 1340: [CPC] DTX released: SMC CFN=%d, HW CFN=%d, Slot=%d, SubFr=%d, activationTime=%d, isDsRelease=%d
Line 1366: [CPC] ProcessDrxModeRelease: CFN=%d isDsRelease %d
Line 1366: [CPC] ProcessDrxModeRelease: CFN=%d isDsRelease %d
Line 1370: [CPC] ProcessDtxModeRelease: clear TokenDRXEnDelayConfig
Line 1370: [CPC] ProcessDtxModeRelease: clear TokenDRXEnDelayConfig
Line 1380: S0  EHalUeDrxReleaseCmd fail - uhal_Cmd_exec
Line 1380: S0  EHalUeDrxReleaseCmd fail - uhal_Cmd_exec
Line 1389: [CPC] DRX released: SW CFN=%d, HW CFN=%d, Slot=%d, SubFr=%d, activationTime=%d isDsRelease=%d
Line 1389: [CPC] DRX released: SW CFN=%d, HW CFN=%d, Slot=%d, SubFr=%d, activationTime=%d isDsRelease=%d
Line 1410: S0 [CPC] ProcessHsscchLessModeInfo: CFN=%d
Line 1410: S0 [CPC] ProcessHsscchLessModeInfo: CFN=%d
Line 1437: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1437: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1459: S0 [CPC] ProcessHsscchLessModeRelease: CFN=%d isDsRelease %d
Line 1459: S0 [CPC] ProcessHsscchLessModeRelease: CFN=%d isDsRelease %d
Line 1469: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1469: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1476: S0 uphy_CCPCModeResourcesController_CheckandFreeAllTokens to check all the attribute Tokens.
Line 1476: S0 uphy_CCPCModeResourcesController_CheckandFreeAllTokens to check all the attribute Tokens.
Line 1479: S0 Freeing up.TokenactivationTimeSTF
Line 1479: S0 Freeing up.TokenactivationTimeSTF
Line 1485: S0 Freeing up.TokenDTXDSPConfig
Line 1485: S0 Freeing up.TokenDTXDSPConfig
Line 1491: S0 Freeing up.TokenDRXEnDelayConfig
Line 1491: S0 Freeing up.TokenDRXEnDelayConfig
Line 1497: S0 Freeing up.TokenWaitAfterUlEstablished
Line 1497: S0 Freeing up.TokenWaitAfterUlEstablished
Line 1527: uphy_CCPCModeResourcesController_configDuringResume DRXEnabled %d, DTXEnabled %d, LessEnabled %d
Line 1527: uphy_CCPCModeResourcesController_configDuringResume DRXEnabled %d, DTXEnabled %d, LessEnabled %d
Line 1536: EHalHsPdschHarqConfigCmd fail - uhal_Cmd_exec
Line 1536: EHalHsPdschHarqConfigCmd fail - uhal_Cmd_exec
Line 1547: EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1547: EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1570: EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1570: EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1601: EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1601: EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1614: uphy_CCPCModeResourcesController_releaseDuringPause DRXEnabled %d, DTXEnabled %d, LessEnabled %d
Line 1614: uphy_CCPCModeResourcesController_releaseDuringPause DRXEnabled %d, DTXEnabled %d, LessEnabled %d
Line 1618: uphy_CCPCModeResourcesController_releaseDuringPause: Cancel TokenDTXDSPConfig token
Line 1618: uphy_CCPCModeResourcesController_releaseDuringPause: Cancel TokenDTXDSPConfig token
Line 1625: uphy_CCPCModeResourcesController_releaseDuringPause: Cancel TokenDRXEnDelayConfig token
Line 1625: uphy_CCPCModeResourcesController_releaseDuringPause: Cancel TokenDRXEnDelayConfig token
Line 1640: EHalUeDrxReleaseCmd fail - uhal_Cmd_exec
Line 1640: EHalUeDrxReleaseCmd fail - uhal_Cmd_exec
Line 1653: EHalUeDtxReleaseCmd fail - uhal_Cmd_exec
Line 1653: EHalUeDtxReleaseCmd fail - uhal_Cmd_exec
Line 1666: EHalHsPdschHarqReleaseCmd fail - uhal_Cmd_exec
Line 1666: EHalHsPdschHarqReleaseCmd fail - uhal_Cmd_exec
Line 362: Invalid smc_TimeCurrentRSN %d, PrvStfRsn %d
Line 362: Invalid smc_TimeCurrentRSN %d, PrvStfRsn %d
Line 379: S0 [CPC]Negative CNF for CPC config Req RSN seems stuck.
Line 379: S0 [CPC]Negative CNF for CPC config Req RSN seems stuck.
Line 395: S0 [CPC] activationTimeSTF: CFN=%d, Boundary RSN=%d, Current RSN=%d, UrrcState=%d, StfRsnDiff= %d, RsnProbCounter= %d, PrvStfRsn=%d
Line 395: S0 [CPC] activationTimeSTF: CFN=%d, Boundary RSN=%d, Current RSN=%d, UrrcState=%d, StfRsnDiff= %d, RsnProbCounter= %d, PrvStfRsn=%d
Line 458: S0 STF triggered after UL_ESTABLISHEMENT for CPC DTX configuration 
Line 458: S0 STF triggered after UL_ESTABLISHEMENT for CPC DTX configuration 
Line 466: S0 CPC Configured at H/W CFN=%d, S/W CFN=%d
Line 466: S0 CPC Configured at H/W CFN=%d, S/W CFN=%d
Line 486: S0 [CPC] Waiting for UL establishment DTXSync ActEnablingDelay = %d, ActualActivationCFN = %d, ueDtxCycle1_10ms = %d, ueDtxCycle2_10ms= %d, DtxStartSync = %d  
Line 486: S0 [CPC] Waiting for UL establishment DTXSync ActEnablingDelay = %d, ActualActivationCFN = %d, ueDtxCycle1_10ms = %d, ueDtxCycle2_10ms= %d, DtxStartSync = %d  
Line 518: S0 [CPC] Resubmitting activationTimeSTF: DchCellChanging=%d, HsDschCellChanging=%d, isUlEstablished=%d, H/W CFN=%d, S/W CFN=%d, AddDelayCounter=%d
Line 518: S0 [CPC] Resubmitting activationTimeSTF: DchCellChanging=%d, HsDschCellChanging=%d, isUlEstablished=%d, H/W CFN=%d, S/W CFN=%d, AddDelayCounter=%d
Line 528: S0  Negative CNF for CPC config Req as DCH/EDCH/HSDSCH config failed during HHO
Line 528: S0  Negative CNF for CPC config Req as DCH/EDCH/HSDSCH config failed during HHO
Line 568: S0 [CPC] Resubmitting activationTimeSTF: DchCellChanging=%d, HsDschCellChanging=%d, isUlEstablished=%d, H/W CFN=%d, S/W CFN=%d
Line 568: S0 [CPC] Resubmitting activationTimeSTF: DchCellChanging=%d, HsDschCellChanging=%d, isUlEstablished=%d, H/W CFN=%d, S/W CFN=%d
Line 584: S0 process - unknown msgId
Line 584: S0 process - unknown msgId
Line 593: S0 [CPC] Exiting the old STF STFNumber=%d LatestSTFNumber=%d
Line 593: S0 [CPC] Exiting the old STF STFNumber=%d LatestSTFNumber=%d
Line 821: S0 [CPC] sendConfirmationMsg: CFN=%d
Line 821: S0 [CPC] sendConfirmationMsg: CFN=%d
Line 847: S0 only Config,Release and Deactivate need confirm
Line 847: S0 only Config,Release and Deactivate need confirm
Line 852: S0 [CPC] sendConfirmationMsg-Failure[%d] 
Line 852: S0 [CPC] sendConfirmationMsg-Failure[%d] 
Line 858: S0 sendConfirmationMsg-Success[%d] 
Line 858: S0 sendConfirmationMsg-Success[%d] 
Line 865: S0 send
Line 865: S0 send
Line 871: S0 [CPC] CPC ILM mesasge cleared
Line 871: S0 [CPC] CPC ILM mesasge cleared
Line 649: S0 [CPC] WaitAfterUlEstablishedSTF: CFN=%d, RSN=%d 
Line 649: S0 [CPC] WaitAfterUlEstablishedSTF: CFN=%d, RSN=%d 
Line 707: S0 [CPC] CPCModeConfig: CFN=%d
Line 707: S0 [CPC] CPCModeConfig: CFN=%d
Line 715: S0 [CPC] CPC ILM mesasge cleared
Line 715: S0 [CPC] CPC ILM mesasge cleared
Line 728: S0  FATAL ERROR: DTX must be enabled in every CPC DTX/DRX CONFIG REQ
Line 728: S0  FATAL ERROR: DTX must be enabled in every CPC DTX/DRX CONFIG REQ
Line 759: S0 [CPC] CPC ILM mesasge cleared
Line 759: S0 [CPC] CPC ILM mesasge cleared
Line 697: S0 [CPC] uphy_CCPCModeResourcesController_CalcActualActivationCFN: CurrentCFN=%d, EnablingDelayStartCfn=%d CurrentAndActDiff=%d, ActEnablingDelay = %d, ActualActivationCfnDtxDrx = %d
Line 697: S0 [CPC] uphy_CCPCModeResourcesController_CalcActualActivationCFN: CurrentCFN=%d, EnablingDelayStartCfn=%d CurrentAndActDiff=%d, ActEnablingDelay = %d, ActualActivationCfnDtxDrx = %d
Line 773: S0 [CPC] CPCModeDeactivate: CFN=%d
Line 773: S0 [CPC] CPCModeDeactivate: CFN=%d
Line 794: S0 [CPC] CPCModeRelease: CFN=%d
Line 794: S0 [CPC] CPCModeRelease: CFN=%d
Line 1134: S0  FATAL ERROR: EDCH not configured
Line 1134: S0  FATAL ERROR: EDCH not configured
Line 1142: S0  EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1142: S0  EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1150: [CPC] DTX DSP configuration done: SMC CFN=%d, HW CFN=%d, Slot=%d, SubFr=%d
Line 1150: [CPC] DTX DSP configuration done: SMC CFN=%d, HW CFN=%d, Slot=%d, SubFr=%d
Line 1178: S0  FATAL ERROR: HSDSCH not configured.
Line 1178: S0  FATAL ERROR: HSDSCH not configured.
Line 1185: S0 [CPC] DRXEnDelayConfig: CFN=%d, UrrcState=%d
Line 1185: S0 [CPC] DRXEnDelayConfig: CFN=%d, UrrcState=%d
Line 1224: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1224: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1232: S0 CPC DRX configuration done CFN:%d Slot:%d SubFr:%d
Line 1232: S0 CPC DRX configuration done CFN:%d Slot:%d SubFr:%d
Line 1239: S0 [CPC] DRX configuration Paramters: DRX cycle=%d, Inactivity TH=%d, tauDpch=%d, tauDrxReg=%d
Line 1239: S0 [CPC] DRX configuration Paramters: DRX cycle=%d, Inactivity TH=%d, tauDpch=%d, tauDrxReg=%d
Line 1241: S0 [CPC] CPC ILM mesasge cleared
Line 1241: S0 [CPC] CPC ILM mesasge cleared
