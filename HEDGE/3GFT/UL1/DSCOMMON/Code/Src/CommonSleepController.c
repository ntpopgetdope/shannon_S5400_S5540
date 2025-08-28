Line 127: 3G3G: CommonSleepControllerRequestSleep: Invalid ClientID = %d
Line 133: 3G3G: CommonSleepControllerRequestSleep: Raw Wakeup = %d, clientId = %d
Line 149: 3G3G: CommonSleepControllerRequestSleep: SW Sleep Requested By ClientID = %d, HWStatus = 0x%x, CurrentRSN=%d, WakeupRSN=%d
Line 156: 3G3G: CommonSleepControllerRequestSleep: HW Sleep Requested By ClientID = %d, HWStatus = 0x%x, CurrentRSN=%d, WakeupRSN=%d
Line 197: 3G3G: CommonSleepControllerRequestSleep: WARNING!Wrong HW Status
Line 239: 3G3G: CommonSleepControllerRequestWakeup: ClientID = %d, HWStatus = 0x%x, isSw=%d isEarly = %d isForced = %d
Line 303: 3G3G: FEE start: iteration=%d. FEE running at rsn=%d
Line 313: 3G3G: FEE start: igoreFeeDrag =%d, clientID=%d
Line 320: 3G3G: EHalSleepFeeEnableCmd exec failure
Line 342: 3G3G: CommonSleepControllerStopFee Client ID= %d
Line 346: 3G3G: EHalSleepFeeDisableCmd exec failure
Line 364: 3G3G: setHWusage Client ID= %d
Line 375: 3G3G: clearHWusage Client ID= %d
Line 385: 3G3G: RegisterClient Client ID= %d
Line 400: 3G3G: DeregisterClient Client ID= %d
Line 423: 3G3G:  Client ID= %d isClientRegistered = %d
Line 446: 3G3G:isModemSleeping= %d
Line 452: 3G3G:CommonSleepControllerGetWakeupRSN= %d
Line 458: 3G3G:CommonSleepControllerGetHWUsageStatus= %d
Line 469: 3G3G:CommonSleepControllerIsSleepIssued issueSleepToken = %d result = %d
Line 475: 3G3G:CommonSleepControllerGetRegisteredClientStatus= %d
Line 481: 3G3G:CommonSleepControllerSetRescheduleStatus status= %d pichRSN = %d, clientId = %d
Line 491: 3G3G:CommonSleepControllerGetRescheduleStatus status= %d clientId = %d
Line 497: 3G3G:CommonSleepControllerSetPICHSkipStatus status= %d  clientId = %d
Line 518: 3G3G:CommonSleepControllerSetPICHSkipStatus status= %d  clientId = %d
Line 524: 3G3G:CommonSleepControllerGetPICHSkipStatus status= %d clientId = %d
Line 530: 3G3G:CommonSleepControllerSetEarlyWakeupTimeInSlots slots= %d  clientId = %d
Line 536: 3G3G:CommonSleepControllerGetEarlyWakeupTimeInSlots slots= %d clientId = %d
Line 542: 3G3G:CommonSleepControllerGetPichRSN status= %d clientId = %d
Line 549: 3G3G:CommonSleepControllerSetPichRSN pichRSN= %d clientId = %d
Line 554: 3G3G:CommonSleepControllerGetCollisionStatus isCollisionStatus %d
Line 599: CommonSleepController: All stacks not in sleep, StackSleepReqStatus %d
Line 623: 3G3G: CommonSleepControllerRequestSleep: Shifting WakeupRSn of other client by -PREPOND_WAKEUP_IN_SLOTS slots wakeupRSN %d
Line 639: 3G3G: CommonSleepControllerRequestSleep: Shifting WakeupRSn by %d slots pichRSN %d wakeupRSN %d
Line 646: 3G3G: CommonSleepControllerRequestSleep: Shifting WakeupRSn of other client by +PREPOND_WAKEUP_IN_SLOTS slots wakeupRSN %d
Line 657: 3G3G: CommonSleepControllerRequestSleep: Shifting WakeupRSn of other client by -PREPOND_WAKEUP_IN_SLOTS slots wakeupRSN %d
Line 670: 3G3G: CommonSleepControllerHWAdjustSleepSlotCorrection: I/P  RSN %d
Line 693: 3G3G: CommonSleepControllerHWAdjustSleepSlotCorrection: O/P  RSN %d
Line 724: CommonSleepController: All stacks not in sleep, StackSleepReqStatus %d
Line 737: 3G3G: CommonSleepControllerRequestSleep: Conflict identified reset optimization %d
Line 777: 3G3G: CommonSleepControllerRequestSleep: Conflict identified reset optimization %d
Line 861: 3G3G: scheduleSwWakeup: ClientID = %d, wakeupRSN = %d, currentRSN = %d
Line 946: 3G3G: checkNearestWakeup Collision Detected and WakeupTiming Adjusted: targetRSN = %d, targetClient = %d
Line 958: 3G3G: checkNearestWakeup Collision Detected and WakeupTiming Adjusted: targetRSN = %d, targetClient = %d
Line 968: 3G3G: checkNearestWakeup: targetRSN = %d, targetClient = %d
Line 983: 3G3G: IssueSleepCmd Client ID= %d, WakeUpRSN = %d
Line 1000: sleepStart - uhal_Cmd_exec
Line 1013: 3G3G: CancelAllSwWakeupTokens Client ID= %d
Line 1143: 3G3G: CFEE_EnableCallBack
Line 1156: 3G3G: CommonSleepController_CPchAndDrxResourcesController_InitDone
Line 1173: 3G3G: CommonSleepControllerProcessUrrcQueue
Line 1192: 3G3G:CommonSleepControllerSetIsDRImpossible isDRImpossible= %d clientId = %d bitMask %d
Line 1207: 3G3G:CommonSleepControllerSetRescheduleStatusforDR status= %d  clientId = %d
Line 1213: 3G3G:CommonSleepControllerGetRescheduleStatusforDR status= %d clientId = %d
Line 1241: 3G3G:CommonSleepControllerCheckOverlappedWakingDuration: Other Client not Registered
Line 1249: 3G3G:CommonSleepControllerCheckOverlappedWakingDuration: Other Client Not Updated Yet
Line 1255: 3G3G:CommonSleepControllerCheckOverlappedWakingDuration: Client registered although wakeuptime not updated yet
Line 1282: firstClient %d firstWakeRsn %d secondClient %d secondWakeRsn %d
Line 1292: CommonSleepControllerCheckOverlappedWakingDuration: Insufficient Margin to prepond, Setting isDrImpossible
Line 1330: 3G3G:CommonSleepControllerSetDrNotAvailableDuringScheduling isDRImpossible= %d clientId = %d
Line 1335: 3G3G:CommonSleepControllerGetDrNotAvailableDuringScheduling isDRImpossible= %d clientId = %d
Line 1348: 3G3G:CommonSleepControllerCheckandReturnPichRsnDifference: Client not Registered
Line 1356: 3G3G:CommonSleepControllerCheckandReturnPichRsnDifference: Other Client PICH Rsn Not Updated Yet
Line 1362: 3G3G:CommonSleepControllerCheckandReturnPichRsnDifference: PichRsn other client is second
Line 1367: 3G3G:CommonSleepControllerCheckandReturnPichRsnDifference: ClientId %d WakeRsn is first although PICH Rsn is second, retval = %d
Line 1376: 3G3G:CommonSleepControllerSetDrPichRsn: ClientId %d PichRsn %d
Line 1392: 3G3G:CommonSleepControllerCheckandClearRescheduleStatusforDR: Postpone other client (%d) wakeup, OtherClientWakeupRSN %d
Line 1423: 3G3G:CommonSleepControllerCheckandClearRescheduleStatus: Postpone other client (%d) wakeup, OtherClientWakeupRSN %d
Line 440: 3G3G: IsGreaterRsn Rsn1 %d Rsn2 %d returnval %d diff %d
Line 1039: 3G3G: WakeUpCallBack: isPCHConfiguredForWakeupClient= %d
Line 1068: SMC Correction for client = %d,HwSfn = %d SwSfn = %d
Line 1069: SMC Correction for client = %d,HwSlot = %d PreviousSwSlot = %d
Line 1076: SMC Correction for client = %d,NewSwSlot = %d
Line 1102: 3G3G: SleepStartCallBack: isPCHConfiguredForWakeupClient= %d
Line 1135: 3G3G: EHalSleepStartCmd exec failed: errCode=%d addErrCode=%d
