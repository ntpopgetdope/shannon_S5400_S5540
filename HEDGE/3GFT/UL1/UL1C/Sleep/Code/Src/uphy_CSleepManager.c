Line 118: uphySleepWaitingTimer Created!
Line 118: uphySleepWaitingTimer Created!
Line 122: uphySleepWaitingTimer Timing set OK!
Line 122: uphySleepWaitingTimer Timing set OK!
Line 126: uphySleepWaitingTimer Timing set Failed!
Line 126: uphySleepWaitingTimer Timing set Failed!
Line 131: uphySleepWaitingTimer Creation Failed!
Line 131: uphySleepWaitingTimer Creation Failed!
Line 263: Get_Emodem_Irat_Activity: emodeStatusForIrat : %d
Line 302: Instance created for stackId %d
Line 302: Instance created for stackId %d
Line 381: SleepManager uphySleepStartCallBack run at rsn=%d sfn=%d reason=%d
Line 381: SleepManager uphySleepStartCallBack run at rsn=%d sfn=%d reason=%d
Line 433: Not enough time for sleep: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d
Line 433: Not enough time for sleep: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d
Line 439: Cancel Sleeping: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d
Line 439: Cancel Sleeping: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d
Line 447: uphySleepStartCallBack:Clean for Measurement
Line 447: uphySleepStartCallBack:Clean for Measurement
Line 495: S0  3G3G: uphy_IssueSleep: gapEndSFN=%d
Line 495: S0  3G3G: uphy_IssueSleep: gapEndSFN=%d
Line 499: Relasing PCH so cancel Umts Power off
Line 499: Relasing PCH so cancel Umts Power off
Line 509: uphy_CSleepManager_IssueSleepCmd:Clean for Measurement
Line 509: uphy_CSleepManager_IssueSleepCmd:Clean for Measurement
Line 569: S0  %s: wasHwSleep is TRUE
Line 569: S0  %s: wasHwSleep is TRUE
Line 577: uphy_CSleepManager_startSleepSTF:uphy_CSleepManager_startSleep sleepStopSignalValue=%d
Line 577: uphy_CSleepManager_startSleepSTF:uphy_CSleepManager_startSleep sleepStopSignalValue=%d
Line 581: S0  Sleep NOT allowed -pchReleaseFlag %d
Line 581: S0  Sleep NOT allowed -pchReleaseFlag %d
Line 855: S0  StartStopDecodingController handleWaking: SleepingController is not turned ON
Line 855: S0  StartStopDecodingController handleWaking: SleepingController is not turned ON
Line 862: S0  StartStopDecodingController handleWaking: Waking without Power On
Line 862: S0  StartStopDecodingController handleWaking: Waking without Power On
Line 889: StartStopDecodingController handleWaking: target StartStopDecodingFsmEventId=%d(WakeUpReq) run at rsn=%d sfn=%d,deadline=%d
Line 889: StartStopDecodingController handleWaking: target StartStopDecodingFsmEventId=%d(WakeUpReq) run at rsn=%d sfn=%d,deadline=%d
Line 895: S0  StartStopDecodingController handleWaking: Unexpected transceiverId=%d
Line 895: S0  StartStopDecodingController handleWaking: Unexpected transceiverId=%d
Line 902: DSDS: autopause handler expiry with out start or after stop
Line 902: DSDS: autopause handler expiry with out start or after stop
Line 914: Stack Suspended, Return
Line 914: Stack Suspended, Return
Line 925: During reselection: cellReselection = %d
Line 925: During reselection: cellReselection = %d
Line 949: S0  uphy_CSleepManager_getListenRSN, this_Sfn=%d, this_slot = %d, diffSfn=%d, diffRsn=%d  PICH SFN = %d
Line 949: S0  uphy_CSleepManager_getListenRSN, this_Sfn=%d, this_slot = %d, diffSfn=%d, diffRsn=%d  PICH SFN = %d
Line 983: S0  uphy_CSleepManager_GsmPowerOffInd: gsmPowerOffWaitCnt %d
Line 983: S0  uphy_CSleepManager_GsmPowerOffInd: gsmPowerOffWaitCnt %d
Line 1033: Introduction of registry to enable/disable Sleep from UL. SleepENABLE status - %d
Line 1033: Introduction of registry to enable/disable Sleep from UL. SleepENABLE status - %d
Line 1049: DSDS_CBS uphy_CSleepManager_tryToSleep: Don't allow sleep till FACH for CTCH configuration completes 
Line 1049: DSDS_CBS uphy_CSleepManager_tryToSleep: Don't allow sleep till FACH for CTCH configuration completes 
Line 1084: S0  cancel sleep due to not enough time for sleep (current SFN : %d, wakesfn : %d)
Line 1084: S0  cancel sleep due to not enough time for sleep (current SFN : %d, wakesfn : %d)
Line 1108: SleepManager tryToSleep[1]: Can StartSleep, SleepInProgress=%d(0), measurementPending=%d(0), vgmBusy=%d(0), fingersPending=%d(0), startStopAsleep=%d(1) isGsmOn=%d(0), isBPLMN=%d(0)
Line 1108: SleepManager tryToSleep[1]: Can StartSleep, SleepInProgress=%d(0), measurementPending=%d(0), vgmBusy=%d(0), fingersPending=%d(0), startStopAsleep=%d(1) isGsmOn=%d(0), isBPLMN=%d(0)
Line 1112: SleepManager tryToSleep[2]: Can StartSleep, startStopAsleep=%d(1) bchUsed=%d(0), feeRunning =%d(0), cellReselFlag =%d(0), isBchAcitve =%d(0),cancelSleeping = %d(0)
Line 1112: SleepManager tryToSleep[2]: Can StartSleep, startStopAsleep=%d(1) bchUsed=%d(0), feeRunning =%d(0), cellReselFlag =%d(0), isBchAcitve =%d(0),cancelSleeping = %d(0)
Line 1116: SleepManager tryToSleep[3]: Can StartSleep, cbsReleaseFlag = %d(0),sleepNotAllowed=%d, rfRelByDsL1Rc = %d(0), prevBPLMNStatus=%d(0)
Line 1116: SleepManager tryToSleep[3]: Can StartSleep, cbsReleaseFlag = %d(0),sleepNotAllowed=%d, rfRelByDsL1Rc = %d(0), prevBPLMNStatus=%d(0)
Line 1142: S0  !!!!!!!!!!!!!!!!!!Measurement Pending in sleep state!!!
Line 1142: S0  !!!!!!!!!!!!!!!!!!Measurement Pending in sleep state!!!
Line 1187: Can't StartSleep, SleepInProgress=%d(0), measurementPending=%d(0), vgmBusy=%d(0), fingersPending=%d(0), startStopAsleep=%d(1) isGsmOn=%d(0), isBPLMN=%d(0)
Line 1187: Can't StartSleep, SleepInProgress=%d(0), measurementPending=%d(0), vgmBusy=%d(0), fingersPending=%d(0), startStopAsleep=%d(1) isGsmOn=%d(0), isBPLMN=%d(0)
Line 1190: Can't StartSleep, startStopAsleep=%d(1) isGsmOn=%d(0), feeRunning =%d(0), cellReselFlag =%d(0), isBchAcitve =%d(0)
Line 1190: Can't StartSleep, startStopAsleep=%d(1) isGsmOn=%d(0), feeRunning =%d(0), cellReselFlag =%d(0), isBchAcitve =%d(0)
Line 1193: Can't StartSleep, cancelSleeping = %d(0), sleepNotAllowed=%d,cbsReleaseFlag = %d(0), prevBPLMNStatus=%d(0)
Line 1193: Can't StartSleep, cancelSleeping = %d(0), sleepNotAllowed=%d,cbsReleaseFlag = %d(0), prevBPLMNStatus=%d(0)
Line 1239: Reschedule wake up: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d,isBPLMN =%d ,wakeUpTimer 0x%x wakeUpAfter %d,
Line 1239: Reschedule wake up: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d,isBPLMN =%d ,wakeUpTimer 0x%x wakeUpAfter %d,
Line 1242: Reschedule wake up: prevBPLMNStatus %d isCBS %d, isWakingForCtchDecoding %d shortCtchPeriod %d
Line 1242: Reschedule wake up: prevBPLMNStatus %d isCBS %d, isWakingForCtchDecoding %d shortCtchPeriod %d
Line 1264: uphy_CSleepManager_wakeup run at rsn = %d sfn = %d
Line 1264: uphy_CSleepManager_wakeup run at rsn = %d sfn = %d
Line 1459: S0  uphy_CSleepManager_getCTCHRSN, this_Sfn=%d, this_slot = %d, diffSfn=%d, diffRsn=%d  sfnToDecodeFachForCtch = %d
Line 1459: S0  uphy_CSleepManager_getCTCHRSN, this_Sfn=%d, this_slot = %d, diffSfn=%d, diffRsn=%d  sfnToDecodeFachForCtch = %d
Line 1504: adjustWakeupRSN for CTCH : wakeUpSfn %d, currentRSN %d, DecodeFachForCtchRsn %d, wakeUpAfter %d
Line 1504: adjustWakeupRSN for CTCH : wakeUpSfn %d, currentRSN %d, DecodeFachForCtchRsn %d, wakeUpAfter %d
Line 1518: adjustWakeupRSN for PICH : wakeUpSfn %d, currentRSN %d, pichFrameBoundaryRsn %d, wakeUpAfter %d
Line 1518: adjustWakeupRSN for PICH : wakeUpSfn %d, currentRSN %d, pichFrameBoundaryRsn %d, wakeUpAfter %d
Line 1523: S0  adjustWakeupRSN: adjustWakeupRSN %d after adjustment
Line 1523: S0  adjustWakeupRSN: adjustWakeupRSN %d after adjustment
Line 621: uphySleepWaitingTimer_TimerCallback
Line 621: uphySleepWaitingTimer_TimerCallback
Line 625: Relasing PCH and cancel Umts Power off
Line 625: Relasing PCH and cancel Umts Power off
Line 639: CellReselection wake up: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d
Line 639: CellReselection wake up: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d
Line 653: S0  Sleep NOT allowed -pchReleaseFlag %d
Line 653: S0  Sleep NOT allowed -pchReleaseFlag %d
Line 659: S0  Wrong timer handle expire
Line 659: S0  Wrong timer handle expire
Line 341: SleepManager IsBchActive: BCH[%d] active, bchUsed %d
Line 341: SleepManager IsBchActive: BCH[%d] active, bchUsed %d
Line 760: Cant issue the SleepStart Command to UHAL
Line 760: Cant issue the SleepStart Command to UHAL
Line 770: Cancel sleeping: pchReleaseFlag %d bchUsed %d, cancelSleeping %d, isCBS %d
Line 770: Cancel sleeping: pchReleaseFlag %d bchUsed %d, cancelSleeping %d, isCBS %d
Line 803: Forcing adjustedWakeUpAfter to a frame to avoid DRX overlap
Line 803: Forcing adjustedWakeUpAfter to a frame to avoid DRX overlap
Line 810: Schedule wake up: bchUsed %d, cancelSleeping %d, isCbs %d 
Line 810: Schedule wake up: bchUsed %d, cancelSleeping %d, isCbs %d 
Line 820: uphy_CSleepManager_startSleep(%d) run at rsn = %d sfn = %d slot = %d no gapEnd
Line 820: uphy_CSleepManager_startSleep(%d) run at rsn = %d sfn = %d slot = %d no gapEnd
Line 1375: S0  3G3G: uphy_ScheduleWakeupToken wakeUpAfter %d current time  %d WakeReqPalTime %d
Line 1375: S0  3G3G: uphy_ScheduleWakeupToken wakeUpAfter %d current time  %d WakeReqPalTime %d
Line 1394: wakeUpTimer set Failed!
Line 1394: wakeUpTimer set Failed!
Line 1415: S0  DSDS:uphy_CSleepManager_tryToSleep: wakeup indicated to dslrc=%u microseconds
Line 1415: S0  DSDS:uphy_CSleepManager_tryToSleep: wakeup indicated to dslrc=%u microseconds
Line 1424: Updated ECIO and RsCp to DSRL1C
Line 1424: Updated ECIO and RsCp to DSRL1C
