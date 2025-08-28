Line 399: No TGPS is running and not first gap so isGapScheduled = FALSE forcely
Line 399: No TGPS is running and not first gap so isGapScheduled = FALSE forcely
Line 403: set gapScheduled %d isFirstGap %d
Line 403: set gapScheduled %d isFirstGap %d
Line 410: set gapScheduled %d
Line 410: set gapScheduled %d
Line 425: No TGPS is running and not first gap so isGsmGapScheduled = FALSE forcely
Line 425: No TGPS is running and not first gap so isGsmGapScheduled = FALSE forcely
Line 429: set isGsmGapScheduled %d isFirstGap %d
Line 429: set isGsmGapScheduled %d isFirstGap %d
Line 436: set isGsmGapScheduled %d
Line 436: set isGsmGapScheduled %d
Line 445: get isGapScheduled = %d isGsmGapScheduled = %d
Line 445: get isGapScheduled = %d isGsmGapScheduled = %d
Line 452: get isGsmGapScheduled %d
Line 452: get isGsmGapScheduled %d
Line 563: Instance created for stackId %d
Line 563: Instance created for stackId %d
Line 709: uphy_CSchedulingManager_init set gapScheduled
Line 709: uphy_CSchedulingManager_init set gapScheduled
Line 891: uphy_CSchedulingManager_releaseMeasurementRequests: FA2_waiting -> FALSE
Line 891: uphy_CSchedulingManager_releaseMeasurementRequests: FA2_waiting -> FALSE
Line 895: uphy_CSchedulingManager_releaseMeasurementRequests: msmtMidServer(midIdentifier %d, mid %d) is NULL
Line 895: uphy_CSchedulingManager_releaseMeasurementRequests: msmtMidServer(midIdentifier %d, mid %d) is NULL
Line 917: uphy_CSchedulingManager_releaseMeasurementRequests: FA2_waiting -> FALSE
Line 917: uphy_CSchedulingManager_releaseMeasurementRequests: FA2_waiting -> FALSE
Line 921: uphy_CSchedulingManager_releaseMeasurementRequests: msmtMidServer(midIdentifier %d, mid %d) is NULL
Line 921: uphy_CSchedulingManager_releaseMeasurementRequests: msmtMidServer(midIdentifier %d, mid %d) is NULL
Line 952: Unexpected Scheduler state - stateId=%d
Line 952: Unexpected Scheduler state - stateId=%d
Line 959: uphy_CSchedulingManager_updateStateInfo: currentStateId=%d, updateStateId=%d(No/ListenArfcn/DrxGap/FachGap/CmFdd/Dcs) stateStartAbsCtr %d stateEndAbsCtr %d
Line 959: uphy_CSchedulingManager_updateStateInfo: currentStateId=%d, updateStateId=%d(No/ListenArfcn/DrxGap/FachGap/CmFdd/Dcs) stateStartAbsCtr %d stateEndAbsCtr %d
Line 1044: uphy_SchedulingManager_fachOccasionGap:schedulingManager_ptr->fachGapToken!NULL
Line 1044: uphy_SchedulingManager_fachOccasionGap:schedulingManager_ptr->fachGapToken!NULL
Line 1903: cleanOutstandingNonCampingUarfcnReqs: clean All except UARFCN %d
Line 1903: cleanOutstandingNonCampingUarfcnReqs: clean All except UARFCN %d
Line 2162: uphy_CSchedulingManager_setIsFA2Waiting: FA2_waiting %d 
Line 2162: uphy_CSchedulingManager_setIsFA2Waiting: FA2_waiting %d 
Line 2168: uphy_CSchedulingManager_getIsFA2Waiting: FA2_waiting %d 
Line 2168: uphy_CSchedulingManager_getIsFA2Waiting: FA2_waiting %d 
Line 2176: uphy_CSchedulingManager_setIsFristU2GReqInCurrentRetiringState: isFristU2GReqInCurrentRetiringState %d 
Line 2176: uphy_CSchedulingManager_setIsFristU2GReqInCurrentRetiringState: isFristU2GReqInCurrentRetiringState %d 
Line 2182: uphy_CSchedulingManager_getIsFristU2GReqInCurrentRetiringState: isFristU2GReqInCurrentRetiringState %d 
Line 2182: uphy_CSchedulingManager_getIsFristU2GReqInCurrentRetiringState: isFristU2GReqInCurrentRetiringState %d 
Line 2190: uphy_CSchedulingManager_setIsGsmMeasurementOnHold: isLteMeasurementRequested %d 
Line 2190: uphy_CSchedulingManager_setIsGsmMeasurementOnHold: isLteMeasurementRequested %d 
Line 2196: uphy_CSchedulingManager_getIsGsmMeasurementOnHold: isLteMeasurementRequested %d 
Line 2196: uphy_CSchedulingManager_getIsGsmMeasurementOnHold: isLteMeasurementRequested %d 
Line 2215: uphy_CSchedulingManager_setIsGsmMeasurementOnHold: isGsmMeasurementOnHold %d 
Line 2215: uphy_CSchedulingManager_setIsGsmMeasurementOnHold: isGsmMeasurementOnHold %d 
Line 2232: uphy_CSchedulingManager_getIsGsmMeasurementOnHold: isGsmMeasurementOnHold %d 
Line 2232: uphy_CSchedulingManager_getIsGsmMeasurementOnHold: isGsmMeasurementOnHold %d 
Line 2240: uphy_CSchedulingManager_setIsGsmMeasurementRequested: isGsmMeasurementRequested %d 
Line 2240: uphy_CSchedulingManager_setIsGsmMeasurementRequested: isGsmMeasurementRequested %d 
Line 2246: uphy_CSchedulingManager_getIsGsmMeasurementRequested: isGsmMeasurementRequested %d 
Line 2246: uphy_CSchedulingManager_getIsGsmMeasurementRequested: isGsmMeasurementRequested %d 
Line 2265: uphy_CSchedulingManager_isRfAvailableForMeasurement: GSM Measurement On Hold! 
Line 2265: uphy_CSchedulingManager_isRfAvailableForMeasurement: GSM Measurement On Hold! 
Line 2272: GSM measuerement not triggered  
Line 2272: GSM measuerement not triggered  
Line 2280: uphy_CSchedulingManager_isRfAvailableForMeasurement: gphy_GetIratGsmOffRequested! 
Line 2280: uphy_CSchedulingManager_isRfAvailableForMeasurement: gphy_GetIratGsmOffRequested! 
Line 2310: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmRssi, timeToAutoPause : %d
Line 2310: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmRssi, timeToAutoPause : %d
Line 2319: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmRssi, timeToAutoPause : %d
Line 2319: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmRssi, timeToAutoPause : %d
Line 2330: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmRssi, timeToAutoPause : %d
Line 2330: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmRssi, timeToAutoPause : %d
Line 2341: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmSch, timeToAutoPause : %d
Line 2341: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmSch, timeToAutoPause : %d
Line 2350: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmSch, timeToAutoPause : %d
Line 2350: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmSch, timeToAutoPause : %d
Line 2361: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmSch, timeToAutoPause : %d
Line 2361: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmSch, timeToAutoPause : %d
Line 2372: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmFch, timeToAutoPause : %d
Line 2372: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmFch, timeToAutoPause : %d
Line 2381: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmFch, timeToAutoPause : %d
Line 2381: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmFch, timeToAutoPause : %d
Line 2392: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmFch, timeToAutoPause : %d
Line 2392: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmFch, timeToAutoPause : %d
Line 2451: uphy_CSchedulingManager_isRfAvailableForMeasurement: Measurement State: %d isRfAvailableForMeasurement: %d
Line 2451: uphy_CSchedulingManager_isRfAvailableForMeasurement: Measurement State: %d isRfAvailableForMeasurement: %d
Line 2500: uphy_CSchedulingManager_isRfAvailableForMeasurement: Measurement State: %d isRfAvailableForMeasurement: %d
Line 2500: uphy_CSchedulingManager_isRfAvailableForMeasurement: Measurement State: %d isRfAvailableForMeasurement: %d
Line 2520: uphy_CSchedulingManager_isRfAvailableForMeasurement: isGsmMeasurementRequested: %d 
Line 2520: uphy_CSchedulingManager_isRfAvailableForMeasurement: isGsmMeasurementRequested: %d 
Line 2549: EUTRA measuerement not triggered  
Line 2549: EUTRA measuerement not triggered  
Line 2561: uphy_CSchedulingManager_isRfAvailableForMeasurement: l1ps_irat_LTE_off_requested! 
Line 2561: uphy_CSchedulingManager_isRfAvailableForMeasurement: l1ps_irat_LTE_off_requested! 
Line 2574: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for Eutra Cellsearch, timeToAutoPause : %d
Line 2574: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for Eutra Cellsearch, timeToAutoPause : %d
Line 2582: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for EutraMeasure, timeToAutoPause : %d
Line 2582: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for EutraMeasure, timeToAutoPause : %d
Line 2590: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for EutraSearchMeasure, timeToAutoPause : %d
Line 2590: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for EutraSearchMeasure, timeToAutoPause : %d
Line 2631: uphy_CSchedulingManager_isRfAvailableForMeasurement: Measurement State: %d isRfAvailableForMeasurement: %d
Line 2631: uphy_CSchedulingManager_isRfAvailableForMeasurement: Measurement State: %d isRfAvailableForMeasurement: %d
Line 2646: uphy_CSchedulingManager_isRfAvailableForMeasurement: isLteMeasurementRequested: %d 
Line 2646: uphy_CSchedulingManager_isRfAvailableForMeasurement: isLteMeasurementRequested: %d 
Line 2665: uphy_CSchedulingManager_ReleaseRf: isGsmMeasurementRequested: %d, isLteMeasurementRequested: %d 
Line 2665: uphy_CSchedulingManager_ReleaseRf: isGsmMeasurementRequested: %d, isLteMeasurementRequested: %d 
Line 2669: uphy_CSchedulingManager_ReleaseRf: No Release required!!
Line 2669: uphy_CSchedulingManager_ReleaseRf: No Release required!!
Line 2678: uphy_CSchedulingManager_ReleaseRf forceRelease: isGapOver: %d !!
Line 2678: uphy_CSchedulingManager_ReleaseRf forceRelease: isGapOver: %d !!
Line 2684:  uphy_CSchedulingManager_ReleaseRf - forceRelease - Non-DCH Meas 
Line 2684:  uphy_CSchedulingManager_ReleaseRf - forceRelease - Non-DCH Meas 
Line 2700: uphy_CSchedulingManager_ReleaseRf: isGapOver: %d !!
Line 2700: uphy_CSchedulingManager_ReleaseRf: isGapOver: %d !!
Line 2764: uphy_CSchedulingManager_storeNextGsmMeasurementStartTime: gsmMeasurementStartTimeInfo: %d !!
Line 2764: uphy_CSchedulingManager_storeNextGsmMeasurementStartTime: gsmMeasurementStartTimeInfo: %d !!
Line 2794: uphy_CSchedulingManager_cleanOutstandingReq: Clean All outstanding requests
Line 2794: uphy_CSchedulingManager_cleanOutstandingReq: Clean All outstanding requests
Line 2852: Invalid transceiver Id =  %d
Line 2852: Invalid transceiver Id =  %d
Line 2875: uphy_CSchedulingManager_cleanSearcherOutstandingReq: Clean All Searcher outstanding requests
Line 2875: uphy_CSchedulingManager_cleanSearcherOutstandingReq: Clean All Searcher outstanding requests
Line 2918: RSN=%d:|__uphy_SchedulingManager_drxGap stateId=%d, numOfCampingListenRequests=%d, run at sfn = %d slot = %d
Line 2918: RSN=%d:|__uphy_SchedulingManager_drxGap stateId=%d, numOfCampingListenRequests=%d, run at sfn = %d slot = %d
Line 2930: postponedGapStateIdPtr == NULL pointer
Line 2930: postponedGapStateIdPtr == NULL pointer
Line 2956: uphy_SchedulingManager_drxGap when numOfCampingListenRequests=0
Line 2956: uphy_SchedulingManager_drxGap when numOfCampingListenRequests=0
Line 2971: RSN=%d:|__uphy_SchedulingManager_edrxGap stateId=%d, numOfCampingListenRequests=%d, run at sfn = %d slot = %d
Line 2971: RSN=%d:|__uphy_SchedulingManager_edrxGap stateId=%d, numOfCampingListenRequests=%d, run at sfn = %d slot = %d
Line 3028: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 3028: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 3078: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3078: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3084: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3084: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3118: [IRAT U2G] Difference between currentSfn=%d and gapStartSfn=%d should be less than %d. Cancel U2G msmt.
Line 3118: [IRAT U2G] Difference between currentSfn=%d and gapStartSfn=%d should be less than %d. Cancel U2G msmt.
Line 3120: [IRAT U2G] GsmRssiGapCommonProcessing: DiffUmtsTime failed
Line 3120: [IRAT U2G] GsmRssiGapCommonProcessing: DiffUmtsTime failed
Line 3127: [IRAT U2G] GsmRssiGapCommonProcessing: DiffUmtsTime failed
Line 3127: [IRAT U2G] GsmRssiGapCommonProcessing: DiffUmtsTime failed
Line 3136: [IRAT U2G] GsmRSSIGapCommonProcessing: Gap start time diff failed, diff = %d chips, sign=%d
Line 3136: [IRAT U2G] GsmRSSIGapCommonProcessing: Gap start time diff failed, diff = %d chips, sign=%d
Line 3147: [IRAT U2G] GsmRssiGapCommonProcessing: DiffUmtsTime failed, (difference between SW and HW) = %d chips sign=%d
Line 3147: [IRAT U2G] GsmRssiGapCommonProcessing: DiffUmtsTime failed, (difference between SW and HW) = %d chips sign=%d
Line 3196: [IRAT U2G] GsmRssiGapCommonProcessing: gphy_GetIratGsmOffRequested=%d, isFristU2GReqInCurrentRetiringState=%d, isDiffUmtsTimeFailed=%d, DiffGsmTime=%d
Line 3196: [IRAT U2G] GsmRssiGapCommonProcessing: gphy_GetIratGsmOffRequested=%d, isFristU2GReqInCurrentRetiringState=%d, isDiffUmtsTimeFailed=%d, DiffGsmTime=%d
Line 3219: [IRAT U2G] GsmRssiGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3219: [IRAT U2G] GsmRssiGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3265: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3265: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3272: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3272: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3297: [IRAT U2G] GsmRssiGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3297: [IRAT U2G] GsmRssiGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3344: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3344: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3351: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3351: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3384: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 3384: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 3434: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3434: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3441: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3441: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3519: compoundMsg->frequencyList is NULL
Line 3519: compoundMsg->frequencyList is NULL
Line 4869: synchroListen should be called from EUphySchedulerStateId_CompModeFddGap
Line 4869: synchroListen should be called from EUphySchedulerStateId_CompModeFddGap
Line 4875: synchroListen: stateId=%d, RSN=%d, Sfn=%d, Slot=%d
Line 4875: synchroListen: stateId=%d, RSN=%d, Sfn=%d, Slot=%d
Line 4882: synchroListen:numOfGapPostponedStateInfoStackElems=%d > : numOfCampingListenRequests=%d
Line 4882: synchroListen:numOfGapPostponedStateInfoStackElems=%d > : numOfCampingListenRequests=%d
Line 4888: |__DISCARDED: synchroListenSTF: a postponed gap state discarded because a channel configuration last more than one DRX cycle
Line 4888: |__DISCARDED: synchroListenSTF: a postponed gap state discarded because a channel configuration last more than one DRX cycle
Line 4897: GetCampingDlUarfcn
Line 4897: GetCampingDlUarfcn
Line 4902: uphy_SchedulingManager_synchroListen : RF use is paused
Line 4902: uphy_SchedulingManager_synchroListen : RF use is paused
Line 4916: uphy_SchedulingManager_synchroListen: interruptedUarfcn=%d should not happen after Fach Gap - in Fach gap operation should be completed
Line 4916: uphy_SchedulingManager_synchroListen: interruptedUarfcn=%d should not happen after Fach Gap - in Fach gap operation should be completed
Line 4942: synchroListen: stateId=%d, RSN=%d, Sfn=%d, Slot=%d
Line 4942: synchroListen: stateId=%d, RSN=%d, Sfn=%d, Slot=%d
Line 4949: synchroListen:numOfGapPostponedStateInfoStackElems=%d > : numOfCampingListenRequests=%d
Line 4949: synchroListen:numOfGapPostponedStateInfoStackElems=%d > : numOfCampingListenRequests=%d
Line 4955: |__DISCARDED: synchroListenSTF: a postponed gap state discarded because a channel configuration last more than one DRX cycle
Line 4955: |__DISCARDED: synchroListenSTF: a postponed gap state discarded because a channel configuration last more than one DRX cycle
Line 4994: fachGapStateInfo == NULL pointer
Line 4994: fachGapStateInfo == NULL pointer
Line 5000: RSN=%d:Fach Occasion Gap requested for start RSN=%d: sfn = %d slot = %d, duration sfn = %d slot = %d
Line 5000: RSN=%d:Fach Occasion Gap requested for start RSN=%d: sfn = %d slot = %d, duration sfn = %d slot = %d
Line 5015: uphy_SchedulingManager_fachOccasionGap:schedulingManager_ptr->fachGapToken!NULL
Line 5015: uphy_SchedulingManager_fachOccasionGap:schedulingManager_ptr->fachGapToken!NULL
Line 5059:  (Fach configured)FachGapSTF cannot be executed as RF is paused ignore 
Line 5059:  (Fach configured)FachGapSTF cannot be executed as RF is paused ignore 
Line 5074: (Fach configured)FachGapSTF cannot be executed as RF isn't available
Line 5074: (Fach configured)FachGapSTF cannot be executed as RF isn't available
Line 5085: (Fach configured)FachGapSTF can be executed as RF is available
Line 5085: (Fach configured)FachGapSTF can be executed as RF is available
Line 5090: (HS configured and fach not configured  )FachGapSTF is getting executed (Rf check bypass)
Line 5090: (HS configured and fach not configured  )FachGapSTF is getting executed (Rf check bypass)
Line 5097: FachGapSTF cannot be executed as RF isn't available
Line 5097: FachGapSTF cannot be executed as RF isn't available
Line 5108: FachGapSTF can be executed as RF is available
Line 5108: FachGapSTF can be executed as RF is available
Line 5337: fddGapStateInfo == NULL pointer
Line 5337: fddGapStateInfo == NULL pointer
Line 5343: :    currentCfn=%d, fddCfn=%d, startSlot=%d, fddRsn=%d, numOfSlotsDuration=%d,tgpsNr=%d,tgNr=%d
Line 5343: :    currentCfn=%d, fddCfn=%d, startSlot=%d, fddRsn=%d, numOfSlotsDuration=%d,tgpsNr=%d,tgNr=%d
Line 5379: gsmGapStateInfo == NULL pointer
Line 5379: gsmGapStateInfo == NULL pointer
Line 5385: :    currentCfn=%d, gsmCfn=%d, startSlot=%d, gsmRsn=%d, numOfSlotsDuration=%d,tgpsNr=%d,tgNr=%d
Line 5385: :    currentCfn=%d, gsmCfn=%d, startSlot=%d, gsmRsn=%d, numOfSlotsDuration=%d,tgpsNr=%d,tgNr=%d
Line 5417: eutraGapStateInfo == NULL pointer
Line 5417: eutraGapStateInfo == NULL pointer
Line 5423: :    currentCfn=%d, eutraCfn=%d, startSlot=%d, eutraRsn=%d, numOfSlotsDuration=%d,tgpsNr=%d,tgNr=%d
Line 5423: :    currentCfn=%d, eutraCfn=%d, startSlot=%d, eutraRsn=%d, numOfSlotsDuration=%d,tgpsNr=%d,tgNr=%d
Line 5927: [IRAT U2G] Out of range MsgId=%d
Line 5927: [IRAT U2G] Out of range MsgId=%d
Line 5933: [IRAT U2G] processGsmMsg for ARFCN=%d, MsgId=%d (RSSI: 15, FCH: 16, SCH: 17), isDCS=%d
Line 5933: [IRAT U2G] processGsmMsg for ARFCN=%d, MsgId=%d (RSSI: 15, FCH: 16, SCH: 17), isDCS=%d
Line 7162: uphy_CSchedulingManager_fbFsmReady: releaseAllMsg
Line 7162: uphy_CSchedulingManager_fbFsmReady: releaseAllMsg
Line 7222: No campinDlUarfcn
Line 7222: No campinDlUarfcn
Line 10099: taskId == NULL pointer
Line 10099: taskId == NULL pointer
Line 10112: :   Fb[%d %d]=busy 
Line 10112: :   Fb[%d %d]=busy 
Line 10157: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeFddGapSetUarfcnToken is canceled !!!
Line 10157: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeFddGapSetUarfcnToken is canceled !!!
Line 10172: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeEutraGapSetUarfcnToken is canceled !!!
Line 10172: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeEutraGapSetUarfcnToken is canceled !!!
Line 10194: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeGsmRssiGapSetUarfcnToken is canceled !!!
Line 10194: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeGsmRssiGapSetUarfcnToken is canceled !!!
Line 10209: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeGsmInitBsicGapSetUarfcnToken is canceled !!!
Line 10209: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeGsmInitBsicGapSetUarfcnToken is canceled !!!
Line 10224: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeGsmBsicRecGapSetUarfcnToken is canceled !!!
Line 10224: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeGsmBsicRecGapSetUarfcnToken is canceled !!!
Line 10240: [IRAT] uphy_cancelOngoingGapSetUarfcnTokensSTF: on-going compModeGapSetUarfcnTokens are canceled !!!
Line 10240: [IRAT] uphy_cancelOngoingGapSetUarfcnTokensSTF: on-going compModeGapSetUarfcnTokens are canceled !!!
Line 10261: [IRAT U2L] uphy_CschedulingManager_sendSearchMeasStopReq
Line 10261: [IRAT U2L] uphy_CschedulingManager_sendSearchMeasStopReq
Line 10283: S %d  ### Critical Error mMsg = NULL (%d)
Line 10283: S %d  ### Critical Error mMsg = NULL (%d)
Line 10354: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 10354: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 10360: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 10360: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 10385: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 10385: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 10391: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 10391: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 10408: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for fchAcquisitionIndMsg
Line 10408: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for fchAcquisitionIndMsg
Line 10425: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for schAcquisitionIndMsg
Line 10425: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for schAcquisitionIndMsg
Line 10458: [IRAT U2L] uphy_CEutraCellSearchStepFsm_processReplyInfo: AGC1 (%d), AGC2 (%d), AFC (%d)
Line 10458: [IRAT U2L] uphy_CEutraCellSearchStepFsm_processReplyInfo: AGC1 (%d), AGC2 (%d), AFC (%d)
Line 10464:   uphy_CEutraCellSearchAbort is called
Line 10464:   uphy_CEutraCellSearchAbort is called
Line 10490: [IRAT U2L] uphy_CEutraMeasureStepFsm_processReplyInfo: AGC1 (%d), AGC2 (%d), AFC (%d)
Line 10490: [IRAT U2L] uphy_CEutraMeasureStepFsm_processReplyInfo: AGC1 (%d), AGC2 (%d), AFC (%d)
Line 10496: uphy_CEutraMeasureAbort is called
Line 10496: uphy_CEutraMeasureAbort is called
Line 10509: [IRAT U2L] SchedulingManager EutraCellSearchMeasureGapCommonProcessing: sending dummy indication
Line 10509: [IRAT U2L] SchedulingManager EutraCellSearchMeasureGapCommonProcessing: sending dummy indication
Line 10531: S  [IRAT U2L] uphy_CEutraSearchMeasureStepFsm_step: Msg is NULL
Line 10531: S  [IRAT U2L] uphy_CEutraSearchMeasureStepFsm_step: Msg is NULL
Line 10946: [IRAT U2L] EutraMeasureGapCommonProcessing: compoundMsg should be made for ONLY ONE EARFCN !!!
Line 10946: [IRAT U2L] EutraMeasureGapCommonProcessing: compoundMsg should be made for ONLY ONE EARFCN !!!
Line 10951: [IRAT U2L] EutraMeasureGapCommonProcessing: listHead is NULL
Line 10951: [IRAT U2L] EutraMeasureGapCommonProcessing: listHead is NULL
Line 10956: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsLatchedTimeInfo= %d  absDeadline = %d eutraLatchedTimeInfo = %d noOfMeasures = %d
Line 10956: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsLatchedTimeInfo= %d  absDeadline = %d eutraLatchedTimeInfo = %d noOfMeasures = %d
Line 12014: [IRAT U2L] msg Id out of range
Line 12014: [IRAT U2L] msg Id out of range
Line 12020: [IRAT U2L] SchedulingManager processEutraMsg for EARFCN=%d, MsgId=%d (CELL SEARCH: 24, MEASURE: 25, SEARCHMEASURE: 26)
Line 12020: [IRAT U2L] SchedulingManager processEutraMsg for EARFCN=%d, MsgId=%d (CELL SEARCH: 24, MEASURE: 25, SEARCHMEASURE: 26)
Line 12041: [IRAT U2L] SchedulingManager processEutraMsg: unknown msg
Line 12041: [IRAT U2L] SchedulingManager processEutraMsg: unknown msg
Line 12102: fbFsmAfterGap: no available fbFsmHandlerArray[%d]->fbFsm
Line 12102: fbFsmAfterGap: no available fbFsmHandlerArray[%d]->fbFsm
Line 12113: fbFsmAfterGap: fbFsmHandlerArray[%d]->fbFsm[%d] 
Line 12113: fbFsmAfterGap: fbFsmHandlerArray[%d]->fbFsm[%d] 
Line 12174: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 12174: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 12202: fbFsmAfterGap: Cmprmode Gap overlap
Line 12202: fbFsmAfterGap: Cmprmode Gap overlap
Line 12208: fbFsmAfterGap: no message in arfcnListCollector
Line 12208: fbFsmAfterGap: no message in arfcnListCollector
Line 12215: camping frequency is not found
Line 12215: camping frequency is not found
Line 12234: GetCampingDlUarfcn: isCampingDlUarfcn=FALSE
Line 12234: GetCampingDlUarfcn: isCampingDlUarfcn=FALSE
Line 12452: Buffering command is ACTIVE. Reset command and its handler.
Line 12452: Buffering command is ACTIVE. Reset command and its handler.
Line 12459: Buffering command is = %x or active for other stack
Line 12459: Buffering command is = %x or active for other stack
Line 12493: Queued RACH_DATA_REQ extracted for processing
Line 12493: Queued RACH_DATA_REQ extracted for processing
Line 12498: uhalCmdprachStart exec() failed errCode %d addErrCode %d
Line 12498: uhalCmdprachStart exec() failed errCode %d addErrCode %d
Line 12512: Invalid transceiver Id =  %d
Line 12512: Invalid transceiver Id =  %d
Line 861: uphy_CSchedulingManager_reinit set gapScheduled
Line 861: uphy_CSchedulingManager_reinit set gapScheduled
Line 1092: message is NULL
Line 1104: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 1104: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 1128: SM: Ignore as RF is in Paused State %d 
Line 1153: CellSfnSfnInd or BchBackgroundConfigCnf or BchBackgroundReleaseCnf received but failed to find message->TransactId=%d
Line 1153: CellSfnSfnInd or BchBackgroundConfigCnf or BchBackgroundReleaseCnf received but failed to find message->TransactId=%d
Line 1283: Buffering command is ACTIVE. Reset command and its handler.
Line 1283: Buffering command is ACTIVE. Reset command and its handler.
Line 1290: Buffering command is = %x or active for other stack
Line 1290: Buffering command is = %x or active for other stack
Line 1299: buffering token cancelled
Line 1299: buffering token cancelled
Line 1319: Reset RfRxUarfcnCmd: cmd_state should be idle but cmd_state=%d
Line 1319: Reset RfRxUarfcnCmd: cmd_state should be idle but cmd_state=%d
Line 1336: RfSynth is ongoing on other stack. activeCmd = %d, dlUarfcnSettledToken = %d
Line 1336: RfSynth is ongoing on other stack. activeCmd = %d, dlUarfcnSettledToken = %d
Line 1497: processCampingListenArfcnTransition: currentStateId=%d, numOfCampingListenRequests=%d, urrcState=%d
Line 1497: processCampingListenArfcnTransition: currentStateId=%d, numOfCampingListenRequests=%d, urrcState=%d
Line 1522: schedulingManager_ptr->numOfCampingListenRequests>0 but getCampingDlUarfcn returns FALSE
Line 1522: schedulingManager_ptr->numOfCampingListenRequests>0 but getCampingDlUarfcn returns FALSE
Line 1533: another controller camping uarfn != of existing camping uarfcn
Line 1533: another controller camping uarfn != of existing camping uarfcn
Line 1537: Configuring BPLMN BCH - on inter freq lets not return
Line 1537: Configuring BPLMN BCH - on inter freq lets not return
Line 1557: processCampingListenArfcnTransition: stateId=%d: campingListenUarfcnTransitionMsgdeadlineInfo.msg == NULL
Line 1557: processCampingListenArfcnTransition: stateId=%d: campingListenUarfcnTransitionMsgdeadlineInfo.msg == NULL
Line 1565: Setting the frequency to BCH frequency - as camp freqquency during BPLMN
Line 1565: Setting the frequency to BCH frequency - as camp freqquency during BPLMN
Line 6046: sendListenArfcnTransitionAck : AckTransitionMsg - unexpected client
Line 6046: sendListenArfcnTransitionAck : AckTransitionMsg - unexpected client
Line 6062: send
Line 6062: send
Line 1619: processCampingControllerReleasedTransitionMsg: campingDlUarfcn not found. currentStateId=%d, MsgId=%d
Line 1619: processCampingControllerReleasedTransitionMsg: campingDlUarfcn not found. currentStateId=%d, MsgId=%d
Line 1629: bplmnStoredCampedDlUarfcn %d isBplmnBchConfigured %d isBplmnFreqRestore %d 
Line 1629: bplmnStoredCampedDlUarfcn %d isBplmnBchConfigured %d isBplmnFreqRestore %d 
Line 1634: Setting BACK schedulingManager_ptr->campingDlUarfcn(%d) to camping frequency before BCH release
Line 1634: Setting BACK schedulingManager_ptr->campingDlUarfcn(%d) to camping frequency before BCH release
Line 1658: processCampingControllerReleasedTransitionMsg: RSN=%d, Cfn=%d, currentStateId=%d, numOfCampingListenRequests=%d
Line 1658: processCampingControllerReleasedTransitionMsg: RSN=%d, Cfn=%d, currentStateId=%d, numOfCampingListenRequests=%d
Line 1690: processCampingControllerReleasedTransitionMsg:numOfCampingListenRequests=%d before schedulingManager_ptr release
Line 1690: processCampingControllerReleasedTransitionMsg:numOfCampingListenRequests=%d before schedulingManager_ptr release
Line 1881: processCampingControllerReleasedTransitionMsg: RSN=%d, Cfn=%d, currentStateId=%d, numOfCampingListenRequests=%d
Line 1881: processCampingControllerReleasedTransitionMsg: RSN=%d, Cfn=%d, currentStateId=%d, numOfCampingListenRequests=%d
Line 1722: processCampingControllerReleasedTransitionMsg:listeMsg transactId=%d does not much to release Msg transactId=%d
Line 1722: processCampingControllerReleasedTransitionMsg:listeMsg transactId=%d does not much to release Msg transactId=%d
Line 6145: send
Line 6145: send
Line 5559: RF use is paused! Ignore MsgId=%d
Line 5559: RF use is paused! Ignore MsgId=%d
Line 5567: Searcher use is paused or not in use! Ignore MsgId=%d
Line 5567: Searcher use is paused or not in use! Ignore MsgId=%d
Line 5576: Out of range MsgId=%d
Line 5576: Out of range MsgId=%d
Line 5582: getFbId returns FALSE
Line 5582: getFbId returns FALSE
Line 5594: processFbMsg msgId=%d: TransactId=%d Deadline=%d missed at: RSN=%d

Line 5594: processFbMsg msgId=%d: TransactId=%d Deadline=%d missed at: RSN=%d

Line 5618: processFbMsg[%d] - don't kick scheduling in when reqHeader.arfcn %d == campingDlUarfcn %d and gap channels are configured
Line 5618: processFbMsg[%d] - don't kick scheduling in when reqHeader.arfcn %d == campingDlUarfcn %d and gap channels are configured
Line 5626: [FA%d] processFbMsg: msgFbId=%d campingRequest stored to the list - no available FbFsm
Line 5626: [FA%d] processFbMsg: msgFbId=%d campingRequest stored to the list - no available FbFsm
Line 5637: [FA%d] processFbMsg: msgFbId=%d 
Line 5637: [FA%d] processFbMsg: msgFbId=%d 
Line 5653: [FA] FA2_waiting = %d numOfMsgs=%d msgFbId=%d processFbMsg[%d] in FA2 working:::uphy_CArfcnListsCollector(uarfcn=%d)
Line 5653: [FA] FA2_waiting = %d numOfMsgs=%d msgFbId=%d processFbMsg[%d] in FA2 working:::uphy_CArfcnListsCollector(uarfcn=%d)
Line 5669: Impending processFbMsg[%d] in active GSM compressed gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5669: Impending processFbMsg[%d] in active GSM compressed gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5689: Impending processFbMsg[%d] in active Eutra compressed gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5689: Impending processFbMsg[%d] in active Eutra compressed gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5709: Impending processFbMsg[%d] in active compressed gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5709: Impending processFbMsg[%d] in active compressed gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5726: processFbMsg[%d] in active fach gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5726: processFbMsg[%d] in active fach gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5778: no schedule for campingUarfcn (isGapScheduled = %d)
Line 5778: no schedule for campingUarfcn (isGapScheduled = %d)
Line 5804: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 5804: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 5857: fbFsm %d
Line 5857: fbFsm %d
Line 5883: Offline: buffering not finished. uarfcn = %d
Line 5883: Offline: buffering not finished. uarfcn = %d
Line 9579: [FA%d] Unexpected MsgId=%d
Line 9579: [FA%d] Unexpected MsgId=%d
Line 9590: [FA%d] Unexpected MsgId=%d
Line 9590: [FA%d] Unexpected MsgId=%d
Line 9598: Unexpected MsgId=%d
Line 9598: Unexpected MsgId=%d
Line 1992: Buffering command is ACTIVE. Reset command and its handler
Line 1992: Buffering command is ACTIVE. Reset command and its handler
Line 1999: Buffering command is = %x or active for other stack
Line 1999: Buffering command is = %x or active for other stack
Line 3582: [IRAT U2G] GsmRssiGapCommonProcessing called for %d (Gsm:0, Dcs:), noOfRssiMeasurements=%d
Line 3582: [IRAT U2G] GsmRssiGapCommonProcessing called for %d (Gsm:0, Dcs:), noOfRssiMeasurements=%d
Line 3586: compoundMsg is NULL
Line 3586: compoundMsg is NULL
Line 3639: uphy_CSchedulingManager_GsmRssiGapCommonProcessing: isGsmMeasurementOnHold %d , send dummy indication 
Line 3639: uphy_CSchedulingManager_GsmRssiGapCommonProcessing: isGsmMeasurementOnHold %d , send dummy indication 
Line 3658: [IRAT U2G] GsmRssiGapCommonProcessing: AddGsmTime failed
Line 3658: [IRAT U2G] GsmRssiGapCommonProcessing: AddGsmTime failed
Line 3664: [IRAT U2G] GsmRssiGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmLatchedTimeInfo (fn, Qb)=(%d, %d)
Line 3664: [IRAT U2G] GsmRssiGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmLatchedTimeInfo (fn, Qb)=(%d, %d)
Line 3667: [IRAT U2G] GsmRssiGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDeltaTimeInfo (fn, Qb)=(%d, %d)
Line 3667: [IRAT U2G] GsmRssiGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDeltaTimeInfo (fn, Qb)=(%d, %d)
Line 3670: [IRAT U2G] GsmRssiGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmStartTimeInfo (fn, Qb)=(%d, %d)
Line 3670: [IRAT U2G] GsmRssiGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmStartTimeInfo (fn, Qb)=(%d, %d)
Line 3673: [IRAT U2G] GsmRssiGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 3673: [IRAT U2G] GsmRssiGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 3732: [IRAT U2G] GsmOrDcs - illegal value
Line 3743: [IRAT U2G] GsmRssiGapCommonProcessing: failed to find any jobs
Line 3743: [IRAT U2G] GsmRssiGapCommonProcessing: failed to find any jobs
Line 3750: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3750: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 4017: [IRAT U2G] GsmFchGapCommonProcessing: gsmScheduleTimingOffset=%d, gsmBurstTimingOffset=%d
Line 4017: [IRAT U2G] GsmFchGapCommonProcessing: gsmScheduleTimingOffset=%d, gsmBurstTimingOffset=%d
Line 4020: [IRAT U2G] GsmFchGapCommonProcessing called for %d (GsmFch:2, DcsFch:3), ARFCN=%d
Line 4020: [IRAT U2G] GsmFchGapCommonProcessing called for %d (GsmFch:2, DcsFch:3), ARFCN=%d
Line 4103: [IRAT U2G] GsmFchGapCommonProcessing: Gap start time diff failed, diff = %d chips, sign=%d
Line 4103: [IRAT U2G] GsmFchGapCommonProcessing: Gap start time diff failed, diff = %d chips, sign=%d
Line 4113: [IRAT U2G] GsmFchGapCommonProcessing: DiffUmtsTime failed, (difference between SW and HW) = %d chips sign=%d
Line 4113: [IRAT U2G] GsmFchGapCommonProcessing: DiffUmtsTime failed, (difference between SW and HW) = %d chips sign=%d
Line 4120: [IRAT U2G] GsmFchGapCommonProcessing: AddGsmTime failed
Line 4120: [IRAT U2G] GsmFchGapCommonProcessing: AddGsmTime failed
Line 4128: [IRAT U2G] GsmFchGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmLatchedTimeInfo (fn, Qb)=(%d, %d)
Line 4128: [IRAT U2G] GsmFchGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmLatchedTimeInfo (fn, Qb)=(%d, %d)
Line 4131: [IRAT U2G] GsmFchGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDeltaTimeInfo (fn, Qb)=(%d, %d)
Line 4131: [IRAT U2G] GsmFchGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDeltaTimeInfo (fn, Qb)=(%d, %d)
Line 4134: [IRAT U2G] GsmFchGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmStartTimeInfo (fn, Qb)=(%d, %d)
Line 4134: [IRAT U2G] GsmFchGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmStartTimeInfo (fn, Qb)=(%d, %d)
Line 4137: [IRAT U2G] GsmFchGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 4137: [IRAT U2G] GsmFchGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 4168: [IRAT U2G] GsmFchGapCommonProcessing: gphy_GetIratGsmOffRequested=%d, isFristU2GReqInCurrentRetiringState=%d, isDiffUmtsTimeFailed=%d, DiffGsmTime=%d
Line 4168: [IRAT U2G] GsmFchGapCommonProcessing: gphy_GetIratGsmOffRequested=%d, isFristU2GReqInCurrentRetiringState=%d, isDiffUmtsTimeFailed=%d, DiffGsmTime=%d
Line 4200: [IRAT U2G] GsmFchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 4200: [IRAT U2G] GsmFchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 4214: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 4214: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 4275: [IRAT U2G] GsmOrDcs - illegal value
Line 4275: [IRAT U2G] GsmOrDcs - illegal value
Line 4283: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for GsmFchAcquisitionReq
Line 4283: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for GsmFchAcquisitionReq
Line 4289: [IRAT U2G] GsmFchGapCommonProcessing: failed to find any jobs on ARFCN %d
Line 4289: [IRAT U2G] GsmFchGapCommonProcessing: failed to find any jobs on ARFCN %d
Line 3805: uphy_CSchedulingManager_GsmFchGapCommonProcessing: isGsmMeasurementOnHold %d , send dummy indication 
Line 3805: uphy_CSchedulingManager_GsmFchGapCommonProcessing: isGsmMeasurementOnHold %d , send dummy indication 
Line 3806: [IRAT U2G] GsmFchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3806: [IRAT U2G] GsmFchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3848: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for fchAcquisitionIndMsg
Line 3848: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for fchAcquisitionIndMsg
Line 3923: [IRAT U2G] Difference between currentSfn=%d and gapStartSfn=%d should be less than %d. Cancel U2G msmt.
Line 3923: [IRAT U2G] Difference between currentSfn=%d and gapStartSfn=%d should be less than %d. Cancel U2G msmt.
Line 3925: [IRAT U2G] GsmFchGapCommonProcessing: DiffUmtsTime failed
Line 3925: [IRAT U2G] GsmFchGapCommonProcessing: DiffUmtsTime failed
Line 3933: [IRAT U2G] GsmFchGapCommonProcessing: DiffUmtsTime failed
Line 3933: [IRAT U2G] GsmFchGapCommonProcessing: DiffUmtsTime failed
Line 3962: [IRAT U2G] GsmFchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3962: [IRAT U2G] GsmFchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3904: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for fchAcquisitionIndMsg
Line 3904: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for fchAcquisitionIndMsg
Line 4545: [IRAT U2G] GsmSchGapCommonProcessing called for %d (GsmSch:4, DcsSch:5), ARFCN=%d
Line 4545: [IRAT U2G] GsmSchGapCommonProcessing called for %d (GsmSch:4, DcsSch:5), ARFCN=%d
Line 4622: [IRAT U2G] GsmSchGapCommonProcessing: Gap start time diff failed, diff = %d chips, sign=%d
Line 4622: [IRAT U2G] GsmSchGapCommonProcessing: Gap start time diff failed, diff = %d chips, sign=%d
Line 4633: [IRAT U2G] GsmSchGapCommonProcessing: DiffUmtsTime failed, (difference between SW and HW) = %d chips, sign=%d
Line 4633: [IRAT U2G] GsmSchGapCommonProcessing: DiffUmtsTime failed, (difference between SW and HW) = %d chips, sign=%d
Line 4641:  
Line 4641:  
Line 4648: [IRAT U2G] GsmSchGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmLatchedTimeInfo (fn, Qb)=(%d, %d)
Line 4648: [IRAT U2G] GsmSchGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmLatchedTimeInfo (fn, Qb)=(%d, %d)
Line 4651: [IRAT U2G] GsmSchGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDeltaTimeInfo (fn, Qb)=(%d, %d)
Line 4651: [IRAT U2G] GsmSchGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDeltaTimeInfo (fn, Qb)=(%d, %d)
Line 4654: [IRAT U2G] GsmSchGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmStartTimeInfo (fn, Qb)=(%d, %d)
Line 4654: [IRAT U2G] GsmSchGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmStartTimeInfo (fn, Qb)=(%d, %d)
Line 4657: [IRAT U2G] GsmSchGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 4657: [IRAT U2G] GsmSchGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 4689: [IRAT U2G] GsmSchGapCommonProcessing: gphy_GetIratGsmOffRequested=%d, isFristU2GReqInCurrentRetiringState=%d, isDiffUmtsTimeFailed=%d, DiffGsmTime=%d
Line 4689: [IRAT U2G] GsmSchGapCommonProcessing: gphy_GetIratGsmOffRequested=%d, isFristU2GReqInCurrentRetiringState=%d, isDiffUmtsTimeFailed=%d, DiffGsmTime=%d
Line 4712: [IRAT U2G] GsmSchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 4712: [IRAT U2G] GsmSchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 4740: [IRAT U2G] GsmSchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 4740: [IRAT U2G] GsmSchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 4755: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 4755: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 4794: [IRAT U2G] GsmOrDcs - illegal value
Line 4794: [IRAT U2G] GsmOrDcs - illegal value
Line 4803: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for GsmSchAcquisitionReq
Line 4803: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for GsmSchAcquisitionReq
Line 4810: [IRAT U2G] GsmSchGapCommonProcessing failed to find any jobs on ARFCN=%d
Line 4810: [IRAT U2G] GsmSchGapCommonProcessing failed to find any jobs on ARFCN=%d
Line 4334: [IRAT U2G] GsmSchGapCommonProcessing: isGsmMeasurementOnHold %d , send dummy indication 
Line 4334: [IRAT U2G] GsmSchGapCommonProcessing: isGsmMeasurementOnHold %d , send dummy indication 
Line 4335: [IRAT U2G] GsmSchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 4335: [IRAT U2G] GsmSchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 4379: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for schAcquisitionIndMsg
Line 4379: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for schAcquisitionIndMsg
Line 4482: [IRAT U2G] Difference between currentSfn=%d and gapStartSfn=%d should be less than %d. Cancel U2G msmt.
Line 4482: [IRAT U2G] Difference between currentSfn=%d and gapStartSfn=%d should be less than %d. Cancel U2G msmt.
Line 4486: [IRAT U2G] GsmSchGapCommonProcessing: DiffUmtsTime failed
Line 4486: [IRAT U2G] GsmSchGapCommonProcessing: DiffUmtsTime failed
Line 4495: [IRAT U2G] GsmSchGapCommonProcessing: DiffUmtsTime failed
Line 4495: [IRAT U2G] GsmSchGapCommonProcessing: DiffUmtsTime failed
Line 4434: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for schAcquisitionIndMsg
Line 4434: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for schAcquisitionIndMsg
Line 5153: fachGapSTF: Unexpected measurementState=%d (should be 3)
Line 5153: fachGapSTF: Unexpected measurementState=%d (should be 3)
Line 5165: uphy_SchedulingManager_fachGapSTF: fachGapStateInfoPtr == NULL pointer
Line 5165: uphy_SchedulingManager_fachGapSTF: fachGapStateInfoPtr == NULL pointer
Line 5173: uphy_SchedulingManager_fachGapSTF - Uarfcn token delays - FACH GAP MISSED
Line 5173: uphy_SchedulingManager_fachGapSTF - Uarfcn token delays - FACH GAP MISSED
Line 5183: uphy_SchedulingManager_fachGapSTF but campingDlUarfcn did not found - probably release took place but outstanding token
Line 5183: uphy_SchedulingManager_fachGapSTF but campingDlUarfcn did not found - probably release took place but outstanding token
Line 5192: RSN=%d:|__ :uphy_SchedulingManager_fachGapSTF stateId=%d sfn = %d slot = %d
Line 5192: RSN=%d:|__ :uphy_SchedulingManager_fachGapSTF stateId=%d sfn = %d slot = %d
Line 5196: :   FachGap IGNORED - PRACH START CMD ACTIVE
Line 5196: :   FachGap IGNORED - PRACH START CMD ACTIVE
Line 5208: :   FachGap IGNORED - BCH configuration is active
Line 5208: :   FachGap IGNORED - BCH configuration is active
Line 5272: uphy_SchedulingManager_fachGapSTF: changed uarfcn during BCH decoding
Line 5272: uphy_SchedulingManager_fachGapSTF: changed uarfcn during BCH decoding
Line 5291: uphy_SchedulingManager_fachGapSTF:setImmediateDlUarfcn did not called: uarfcn=campingUarfcn=%d
Line 5291: uphy_SchedulingManager_fachGapSTF:setImmediateDlUarfcn did not called: uarfcn=campingUarfcn=%d
Line 5298: uphy_SchedulingManager_fachGap when numOfCampingListenRequests=0
Line 5298: uphy_SchedulingManager_fachGap when numOfCampingListenRequests=0
Line 6261: checkAndLaunchDoScheduling: RSN=%d, currentStateId=%d
Line 6261: checkAndLaunchDoScheduling: RSN=%d, currentStateId=%d
Line 6313: doSchedulingCalled[%d] currentStateId=%d
Line 6313: doSchedulingCalled[%d] currentStateId=%d
Line 6320: Listen state but campingDlUarfcn did not found - probably release took place but outstanding doScheduligToken
Line 6320: Listen state but campingDlUarfcn did not found - probably release took place but outstanding doScheduligToken
Line 6337: doScheduling: currentStateId=%d(0:None/2:DrxGap), isStateChangeTriggered=%d
Line 6337: doScheduling: currentStateId=%d(0:None/2:DrxGap), isStateChangeTriggered=%d
Line 6348: uarfcnToServ = %d
Line 6348: uarfcnToServ = %d
Line 6354: interruptedDlUarfcn = %d
Line 6354: interruptedDlUarfcn = %d
Line 6364: doScheduling: currentStateId=%d(0:None/2:DrxGap), isStateChangeTriggered=%d
Line 6364: doScheduling: currentStateId=%d(0:None/2:DrxGap), isStateChangeTriggered=%d
Line 6382: doScheduling is not used for Compressed Mode Gap or Fach Gap states:  currentStateId=%d
Line 6382: doScheduling is not used for Compressed Mode Gap or Fach Gap states:  currentStateId=%d
Line 6387: doScheduling: Unknown stateId=%d
Line 6387: doScheduling: Unknown stateId=%d
Line 9634: Unknown stateId=%d
Line 9634: Unknown stateId=%d
Line 7540: isUarfcnCompleted: Active CmdHandlers and return FALSE
Line 7540: isUarfcnCompleted: Active CmdHandlers and return FALSE
Line 7551: isUarfcnCompleted: currentDlUarfcn=%d, uarfcnNotSettledYet=%d, interruptedDlUarfcn=%d, returnValue=%d
Line 7551: isUarfcnCompleted: currentDlUarfcn=%d, uarfcnNotSettledYet=%d, interruptedDlUarfcn=%d, returnValue=%d
Line 9538: getArfcnPriorityInfo: isFound=FALSE - isRestrictedUarfcn=%d, restrictedUarfcn=%d
Line 9538: getArfcnPriorityInfo: isFound=FALSE - isRestrictedUarfcn=%d, restrictedUarfcn=%d
Line 6171: fbFilterMap == NULL
Line 6171: fbFilterMap == NULL
Line 6180: areAllCollectorsEmpty i=%d
Line 7590: ### launchSetFddGapDlUarfcn RSN=%d:launchSetFddGapDlUarfcn: ***targetRSNTimeStamp=%d
Line 7590: ### launchSetFddGapDlUarfcn RSN=%d:launchSetFddGapDlUarfcn: ***targetRSNTimeStamp=%d
Line 7595: RSN=%d:launchSetFddGapDlUarfcn: gapPeriodRSNTimeStamp=%d
Line 7595: RSN=%d:launchSetFddGapDlUarfcn: gapPeriodRSNTimeStamp=%d
Line 7732:  Scheduling manager NULL
Line 7732:  Scheduling manager NULL
Line 7752: setFddGapDlUarfcnSTF: retrun due to no channel state!
Line 7752: setFddGapDlUarfcnSTF: retrun due to no channel state!
Line 7781: FddGapDlUarfcnSTF in Pause state
Line 7781: FddGapDlUarfcnSTF in Pause state
Line 8517: setFddGapDlUarfcn is called
Line 8517: setFddGapDlUarfcn is called
Line 8543: RSN=%d: uarfcn=%d uarfcnCmdType=%d NOT SET - SFN(BCH decoding) activity in progress
Line 8543: RSN=%d: uarfcn=%d uarfcnCmdType=%d NOT SET - SFN(BCH decoding) activity in progress
Line 8556: Critical: uarfcnCmd is NULL
Line 8556: Critical: uarfcnCmd is NULL
Line 8566: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s

Line 8566: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s

Line 8580: RSN=%d:setFddGapDlUarfcn: uarfcn=%d uarfcnCmdType=%d DECIDED
Line 8580: RSN=%d:setFddGapDlUarfcn: uarfcn=%d uarfcnCmdType=%d DECIDED
Line 8589: setFddGapDlUarfcn NOT DECIDED we should not reach here where we are about to set: uarfcn=%d uarfcnType=%d
Line 8589: setFddGapDlUarfcn NOT DECIDED we should not reach here where we are about to set: uarfcn=%d uarfcnType=%d
Line 8611: RSN=%d:setFddGapDlUarfcn: TOO LATE: stateStartAbsCtr=%d
Line 8611: RSN=%d:setFddGapDlUarfcn: TOO LATE: stateStartAbsCtr=%d
Line 8621: setFddGapDlUarfcn uphy_SetIsGapScheduled
Line 8621: setFddGapDlUarfcn uphy_SetIsGapScheduled
Line 8002: setFddGapDlUarfcn: synchStateInfoPtr == NULL pointer
Line 8002: setFddGapDlUarfcn: synchStateInfoPtr == NULL pointer
Line 8015: RSN=%d: setFddGapDlUarfcn: uarfcnCmd busy- uarfcn is an instant cmd
Line 8015: RSN=%d: setFddGapDlUarfcn: uarfcnCmd busy- uarfcn is an instant cmd
Line 8025: setFddGapDlUarfcn: GapActive!!!!!!!
Line 8025: setFddGapDlUarfcn: GapActive!!!!!!!
Line 8035: setFDDGapDlUarfcn: no running FDD TGPS !!!
Line 8035: setFDDGapDlUarfcn: no running FDD TGPS !!!
Line 6479: compModeFddGapDoScheduling: campingDlUarfcn did not found
Line 6479: compModeFddGapDoScheduling: campingDlUarfcn did not found
Line 6524: areAllCollectorsEmpty=TRUE
Line 8077: RSN=%d:setFddGapDlUarfcn: UARFCN NOT DECIDED yet at time: scheduling token did not get time to run
Line 8077: RSN=%d:setFddGapDlUarfcn: UARFCN NOT DECIDED yet at time: scheduling token did not get time to run
Line 8092: RSN=%d:setFddGapDlUarfcn: STEP BUSY - UARFCN not set
Line 8092: RSN=%d:setFddGapDlUarfcn: STEP BUSY - UARFCN not set
Line 8098: RSN=%d: setFddGapDlUarfcn:BUFFERING CMD BUSY - uarfcn not set this time
Line 8098: RSN=%d: setFddGapDlUarfcn:BUFFERING CMD BUSY - uarfcn not set this time
Line 8108: setFddGapDlUarfcn: uarfcn=%d, uarfcnCmdType=%d
Line 8108: setFddGapDlUarfcn: uarfcn=%d, uarfcnCmdType=%d
Line 8120: RSN=%d: uarfcn=%d uarfcnCmdType=%d NOT SET - SFN(BCH decoding) activity in progress
Line 8120: RSN=%d: uarfcn=%d uarfcnCmdType=%d NOT SET - SFN(BCH decoding) activity in progress
Line 8140: setFddGapDlUarfcn(): isOfflineUarfcn=%d, offlineUarfcn=%d, synchroGapUarfcnInfo.uarfcn=%d
Line 8140: setFddGapDlUarfcn(): isOfflineUarfcn=%d, offlineUarfcn=%d, synchroGapUarfcnInfo.uarfcn=%d
Line 8162: uarfcnCmd exec failure
Line 8162: uarfcnCmd exec failure
Line 8196: Buffering command is ACTIVE. Reset command and its handler
Line 8196: Buffering command is ACTIVE. Reset command and its handler
Line 8203: Buffering command is = %x or active for other stack
Line 8203: Buffering command is = %x or active for other stack
Line 8243:    :Offline Uarfcn still VAILID - UARFCN NOT SET
Line 8243:    :Offline Uarfcn still VAILID - UARFCN NOT SET
Line 8264: Buffering command is ACTIVE. Reset command and its handler
Line 8264: Buffering command is ACTIVE. Reset command and its handler
Line 8271: Buffering command is = %x or active for other stack
Line 8271: Buffering command is = %x or active for other stack
Line 7951: uphy_CScheduling_FDDGapBufferingSTF: isOfflineUarfcn = %d, offlineUarfcn = %d
Line 7951: uphy_CScheduling_FDDGapBufferingSTF: isOfflineUarfcn = %d, offlineUarfcn = %d
Line 7957: bufferingCmd->generic_cmd_attributes.state != EHalCmdStateIdle
Line 7957: bufferingCmd->generic_cmd_attributes.state != EHalCmdStateIdle
Line 7975: bufferingCmd exec failure
Line 7975: bufferingCmd exec failure
Line 6546: offlineUarfcnTooOld
Line 6546: offlineUarfcnTooOld
Line 8294: provision Step Fsms: fbFsm=0 - return
Line 8294: provision Step Fsms: fbFsm=0 - return
Line 8352: uarfcnCmd exec failure
Line 8352: uarfcnCmd exec failure
Line 8385: Buffering command is ACTIVE. Reset command and its handler
Line 8385: Buffering command is ACTIVE. Reset command and its handler
Line 8392: Buffering command is = %x or active for other stack
Line 8392: Buffering command is = %x or active for other stack
Line 8420: CFN=%d, RSN=%d: STEP1 of HWSignalSynch type requested, uarfcn=%d
Line 8420: CFN=%d, RSN=%d: STEP1 of HWSignalSynch type requested, uarfcn=%d
Line 8452: In setFddGapDlUarfcn, no msg available in arfcnlistcollector: uarfcn=%d
Line 8452: In setFddGapDlUarfcn, no msg available in arfcnlistcollector: uarfcn=%d
Line 8483: uarfcnCmd exec failure
Line 8483: uarfcnCmd exec failure
Line 7627: launchSetGsmGapDlUarfcn: GSM RSSI
Line 7627: launchSetGsmGapDlUarfcn: GSM RSSI
Line 7632: launchSetGsmGapDlUarfcn: GSM INIT BSIC
Line 7632: launchSetGsmGapDlUarfcn: GSM INIT BSIC
Line 7637: launchSetGsmGapDlUarfcn: GSM BSIC RECONFIRMATION
Line 7637: launchSetGsmGapDlUarfcn: GSM BSIC RECONFIRMATION
Line 7642: tgmp unknown
Line 7642: tgmp unknown
Line 7657: RSN=%d:launchSetGsmGapDlUarfcn: gapPeriodRSNTimeStamp=%d
Line 7657: RSN=%d:launchSetGsmGapDlUarfcn: gapPeriodRSNTimeStamp=%d
Line 7813:  Scheduling manager NULL
Line 7813:  Scheduling manager NULL
Line 7829: setGsmGapDlUarfcnSTF: GSM RSSI token expire
Line 7829: setGsmGapDlUarfcnSTF: GSM RSSI token expire
Line 7833: setGsmGapDlUarfcnSTF: GSM INIT BSIC token expire
Line 7833: setGsmGapDlUarfcnSTF: GSM INIT BSIC token expire
Line 7837: setGsmGapDlUarfcnSTF: GSM BSIC RECONFIRMATION token expire
Line 7837: setGsmGapDlUarfcnSTF: GSM BSIC RECONFIRMATION token expire
Line 7841: tgmp unknown
Line 7841: tgmp unknown
Line 7847: setGsmGapDlUarfcnSTF: retrun due to no channel state!
Line 7847: setGsmGapDlUarfcnSTF: retrun due to no channel state!
Line 8673: setGsmGapDlUarfcn is called
Line 8673: setGsmGapDlUarfcn is called
Line 8693: RSN=%d: setGsmGapDlUarfcn: uarfcnCmd busy- uarfcn is an instant cmd
Line 8693: RSN=%d: setGsmGapDlUarfcn: uarfcnCmd busy- uarfcn is an instant cmd
Line 8718: Critical: uarfcnCmd is NULL
Line 8718: Critical: uarfcnCmd is NULL
Line 8728: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s

Line 8728: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s

Line 8746: RSN=%d:setGsmGapDlUarfcn: TOO LATE: stateStartAbsCtr=%d
Line 8746: RSN=%d:setGsmGapDlUarfcn: TOO LATE: stateStartAbsCtr=%d
Line 8875: no outstandingRequest
Line 8875: no outstandingRequest
Line 8887: setGsmGapDlUarfcn cannot be executed as RF isn't available due to Pause
Line 8887: setGsmGapDlUarfcn cannot be executed as RF isn't available due to Pause
Line 8779: setGsmGapDlUarfcn: GapActive!!!!!!!
Line 8779: setGsmGapDlUarfcn: GapActive!!!!!!!
Line 8790: setGsmGapDlUarfcn: no running GSM TGPS !!!
Line 8790: setGsmGapDlUarfcn: no running GSM TGPS !!!
Line 8817: gapsbacktoback, RxUarfcn cmd is queued
Line 8845: uarfcnCmd exec failure
Line 8845: uarfcnCmd exec failure
Line 8850: [IRAT U2G] setGsmGapDlUarfcn: RxUarfcnCmd complete !!!
Line 8850: [IRAT U2G] setGsmGapDlUarfcn: RxUarfcnCmd complete !!!
Line 7706: RSN=%d:launchSetEutraGapDlUarfcn: synchStateInfoPtr->stateStartAbsCtr=%d stop timing %d
Line 7706: RSN=%d:launchSetEutraGapDlUarfcn: synchStateInfoPtr->stateStartAbsCtr=%d stop timing %d
Line 7895:  Scheduling manager NULL
Line 7895:  Scheduling manager NULL
Line 7910: setEutraGapDlUarfcnSTF: retrun due to no channel state!
Line 7910: setEutraGapDlUarfcnSTF: retrun due to no channel state!
Line 8950: setGsmGapDlUarfcn cannot be executed as RF isn't available due to Pause
Line 8950: setGsmGapDlUarfcn cannot be executed as RF isn't available due to Pause
Line 8964: no outstanding EUTRA Request
Line 8964: no outstanding EUTRA Request
Line 8981: setEutraGapDlUarfcn is called
Line 8981: setEutraGapDlUarfcn is called
Line 8984: setEutraGapDlUarfcn: synchStateInfoPtr == NULL pointer
Line 8984: setEutraGapDlUarfcn: synchStateInfoPtr == NULL pointer
Line 8993: RSN=%d: setEutraGapDlUarfcn: uarfcnCmd busy- uarfcn is an instant cmd
Line 8993: RSN=%d: setEutraGapDlUarfcn: uarfcnCmd busy- uarfcn is an instant cmd
Line 9016: Critical: uarfcnCmd is NULL
Line 9016: Critical: uarfcnCmd is NULL
Line 9026: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s

Line 9026: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s

Line 9044: RSN=%d:setEutraGapDlUarfcn: TOO LATE: stateStartAbsCtr=%d
Line 9044: RSN=%d:setEutraGapDlUarfcn: TOO LATE: stateStartAbsCtr=%d
Line 9119: setEutraGapDlUarfcn: GapActive!!!!!!!
Line 9119: setEutraGapDlUarfcn: GapActive!!!!!!!
Line 9129: setEutraGapDlUarfcn: no running FDD TGPS !!!
Line 9129: setEutraGapDlUarfcn: no running FDD TGPS !!!
Line 9097: uarfcnCmd exec failure
Line 9097: uarfcnCmd exec failure
Line 9102: [IRAT U2L] setEutraGapDlUarfcn: RxUarfcnCmd complete !!!
Line 9102: [IRAT U2L] setEutraGapDlUarfcn: RxUarfcnCmd complete !!!
Line 6086: schedulingManager_ptr->releaseAllMsg == NULL pointer
Line 6086: schedulingManager_ptr->releaseAllMsg == NULL pointer
Line 6105: send
Line 6105: send
Line 7002: srch_cm_bypass is FALSE
Line 7002: srch_cm_bypass is FALSE
Line 7019: provision FbFsm[%d %d]in CM for campingUarfcn from lists ?not enough instances previosuly
Line 7019: provision FbFsm[%d %d]in CM for campingUarfcn from lists ?not enough instances previosuly
Line 7063: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 7063: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 7115: provision FbFsm[%d %d]in CM for uarfcn %d from lists
Line 7115: provision FbFsm[%d %d]in CM for uarfcn %d from lists
Line 7123: [ProvisionIdleFsms] bufferingCmd is NULL
Line 7123: [ProvisionIdleFsms] bufferingCmd is NULL
Line 7128: [uphy_CSchedulingManager_fbFsmReady] UARFCN MISMATCH - INSERT : buffered_uarfcn = %d, request_uarfcn = %d
Line 7128: [uphy_CSchedulingManager_fbFsmReady] UARFCN MISMATCH - INSERT : buffered_uarfcn = %d, request_uarfcn = %d
Line 7256: RSN=%d:setImmediateDlUarfcn ATEMPT: forced UARFCN=%d isCampingUarfcn=%d
Line 7256: RSN=%d:setImmediateDlUarfcn ATEMPT: forced UARFCN=%d isCampingUarfcn=%d
Line 7293: RSN=%d:setImmediateDlUarfcn ATEMPT: isInterruptedDlUarfcn=%d, INTERRUPTED UARFCN=%d
Line 7293: RSN=%d:setImmediateDlUarfcn ATEMPT: isInterruptedDlUarfcn=%d, INTERRUPTED UARFCN=%d
Line 7316: RSN=%d:setImmediateDlUarfcn ATEMPT: isInterruptedDlUarfcn=%d, not forced UARFCN=%d
Line 7316: RSN=%d:setImmediateDlUarfcn ATEMPT: isInterruptedDlUarfcn=%d, not forced UARFCN=%d
Line 6401: fachGapDoScheduling but campingDlUarfcn did not found - probably release took place but outstanding token
Line 6401: fachGapDoScheduling but campingDlUarfcn did not found - probably release took place but outstanding token
Line 6407: fachGapDoScheduling: previously interrupted uarfcn=%d
Line 6407: fachGapDoScheduling: previously interrupted uarfcn=%d
Line 7362: :   UARFCN=%d SET at stateId=%d(No/ListenArfcn/DrxGap/FachGap/CmFdd/Dcs)
Line 7362: :   UARFCN=%d SET at stateId=%d(No/ListenArfcn/DrxGap/FachGap/CmFdd/Dcs)
Line 7366: Critical: uarfcnCmd is NULL
Line 7366: Critical: uarfcnCmd is NULL
Line 7372: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s

Line 7372: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s

Line 7383: setImmediateDlUarfcn - measurementState %d
Line 7383: setImmediateDlUarfcn - measurementState %d
Line 7407: [RX DIV][SRCH] Turn on
Line 7407: [RX DIV][SRCH] Turn on
Line 7412: [RX DIV][SRCH] No Turn on  measurementState=%d schedulerStateId=%d
Line 7412: [RX DIV][SRCH] No Turn on  measurementState=%d schedulerStateId=%d
Line 7431: uarfcnCmd exec failure: errCode=%d, addErrCode=%d
Line 7431: uarfcnCmd exec failure: errCode=%d, addErrCode=%d
Line 7452: AFC disable successfully. campingDlUarfcn %d, newUarfcn %d
Line 7452: AFC disable successfully. campingDlUarfcn %d, newUarfcn %d
Line 7458: AFC disable failed
Line 7458: AFC disable failed
Line 7467: AFC enable successfully. campingDlUarfcn %d, newUarfcn %d
Line 7467: AFC enable successfully. campingDlUarfcn %d, newUarfcn %d
Line 7473: AFC enable failed
Line 7473: AFC enable failed
Line 9446: fbFilterMap == NULL
Line 9446: fbFilterMap == NULL
Line 9880: [IRAT U2G] AFC disable successfully.
Line 9880: [IRAT U2G] AFC disable successfully.
Line 9888: [IRAT U2G] AfcDisableCmd failed. errCode=%d, addErrCode=%d
Line 9888: [IRAT U2G] AfcDisableCmd failed. errCode=%d, addErrCode=%d
Line 9907: [IRAT U2G] u2GAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 9907: [IRAT U2G] u2GAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 9938: [IRAT U2G] gsm2UmtsAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 9938: [IRAT U2G] gsm2UmtsAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 9948: [IRAT U2G] g2UAntennaSwitchSTF: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 9948: [IRAT U2G] g2UAntennaSwitchSTF: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 9967: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: AfcEnableCmd failed. errCode=%d, addErrCode=%d
Line 9967: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: AfcEnableCmd failed. errCode=%d, addErrCode=%d
Line 9979: [IRAT U2G] gsm2UmtsAntennaSwitchSTF : UE did not camp to any frequency
Line 9979: [IRAT U2G] gsm2UmtsAntennaSwitchSTF : UE did not camp to any frequency
Line 9999: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: RF Rx ON command exec failure Error %d, Additional Error %d
Line 9999: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: RF Rx ON command exec failure Error %d, Additional Error %d
Line 10006: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: RfRxOn
Line 10006: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: RfRxOn
Line 10010: Rxuarfcn_Check: In Func = %s  Calling EHalRfRxUarfcnCmd & Setting rxOnlyMode = TRUE To Enable interrupts

Line 10010: Rxuarfcn_Check: In Func = %s  Calling EHalRfRxUarfcnCmd & Setting rxOnlyMode = TRUE To Enable interrupts

Line 10022: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s

Line 10022: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s

Line 10026: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command

Line 10026: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command

Line 10031: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s

Line 10031: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s

Line 10039: gsm2UmtsAntennaSwitchSTF: sendResponseToUphyToken did not get time to run, so clear it
Line 10039: gsm2UmtsAntennaSwitchSTF: sendResponseToUphyToken did not get time to run, so clear it
Line 10062: RACH going Rx only mode false
Line 10062: RACH going Rx only mode false
Line 10078: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: RF UARFCN Error %d, Additional Error %d
Line 10078: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: RF UARFCN Error %d, Additional Error %d
Line 10579: [IRAT U2L] EutraCellSearchGapCommonProcessing: incorrect noOfCellSearchs=%d, should be %d
Line 10579: [IRAT U2L] EutraCellSearchGapCommonProcessing: incorrect noOfCellSearchs=%d, should be %d
Line 10624: [IRAT U2L] SchedulingManager EutraCellSearchGapCommonProcessing: failed to find any jobs
Line 10624: [IRAT U2L] SchedulingManager EutraCellSearchGapCommonProcessing: failed to find any jobs
Line 10643: [IRAT U2L] SchedulingManager EutraCellSearchGapCommonProcessing: compound message allocation failed:
Line 10643: [IRAT U2L] SchedulingManager EutraCellSearchGapCommonProcessing: compound message allocation failed:
Line 10662: [IRAT U2L] SchedulingManager EutraCellSearchGapCommonProcessing: sending dummy indication
Line 10662: [IRAT U2L] SchedulingManager EutraCellSearchGapCommonProcessing: sending dummy indication
Line 10719: [IRAT U2L] EutraCellSearchGapCommonProcessing: DiffUmtsTime failed
Line 10719: [IRAT U2L] EutraCellSearchGapCommonProcessing: DiffUmtsTime failed
Line 10726: [IRAT U2L] EutraCellSearchGapCommonProcessing: AddEutraTime failed
Line 10726: [IRAT U2L] EutraCellSearchGapCommonProcessing: AddEutraTime failed
Line 10733: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraLatchedTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10733: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraLatchedTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10736: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDeltaTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10736: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDeltaTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10739: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraStartTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10739: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraStartTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10742: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDurationTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10742: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDurationTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11893: [IRAT U2L] umts2EutraAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 11893: [IRAT U2L] umts2EutraAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 11920: [IRAT U2L] U2LAntennaSwitchSTF: AfcDisableCmd failed. errCode=%d, addErrCode=%d
Line 11920: [IRAT U2L] U2LAntennaSwitchSTF: AfcDisableCmd failed. errCode=%d, addErrCode=%d
Line 11721: [IRAT U2G] eutra2UmtsAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 11721: [IRAT U2G] eutra2UmtsAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 11731: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 11731: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 11750: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: AfcEnableCmd failed. errCode=%d, addErrCode=%d
Line 11750: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: AfcEnableCmd failed. errCode=%d, addErrCode=%d
Line 11762: [IRAT U2G] eutra2UmtsAntennaSwitchSTF : UE did not camp to any frequency
Line 11762: [IRAT U2G] eutra2UmtsAntennaSwitchSTF : UE did not camp to any frequency
Line 11783: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: RF Rx ON command exec failure Error %d, Additional Error %d
Line 11783: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: RF Rx ON command exec failure Error %d, Additional Error %d
Line 11790: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: RfRxOn
Line 11790: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: RfRxOn
Line 11794: Rxuarfcn_Check: In Func = %s	Calling EHalRfRxUarfcnCmd & Setting rxOnlyMode = TRUE To Enable interrupts

Line 11794: Rxuarfcn_Check: In Func = %s	Calling EHalRfRxUarfcnCmd & Setting rxOnlyMode = TRUE To Enable interrupts

Line 11806: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s

Line 11806: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s

Line 11810: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command

Line 11810: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command

Line 11815: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s

Line 11815: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s

Line 11823: gsm2UmtsAntennaSwitchSTF: sendResponseToUphyToken did not get time to run, so clear it
Line 11823: gsm2UmtsAntennaSwitchSTF: sendResponseToUphyToken did not get time to run, so clear it
Line 11846: RACH going Rx only mode false
Line 11846: RACH going Rx only mode false
Line 11862: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: RF UARFCN Error %d, Additional Error %d
Line 11862: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: RF UARFCN Error %d, Additional Error %d
Line 10847: S0  ### Critical Error eutraCellSearchResultsList  = NULL (%d)
Line 10847: S0  ### Critical Error eutraCellSearchResultsList  = NULL (%d)
Line 10856: [IRAT U2L] uphy_CEutraCellSearchStepFsm_processReplyInfo: AGC1 (%d), AGC2 (%d), AFC (%d)
Line 10856: [IRAT U2L] uphy_CEutraCellSearchStepFsm_processReplyInfo: AGC1 (%d), AGC2 (%d), AFC (%d)
Line 11009: [IRAT U2L] EutraMeasureGapCommonProcessing: incorrect noOfMeasures=%d, Should be equal to or smaller than %d
Line 11009: [IRAT U2L] EutraMeasureGapCommonProcessing: incorrect noOfMeasures=%d, Should be equal to or smaller than %d
Line 11046: [IRAT U2L] EutraMeasureGapCommonProcessing: DiffUmtsTime failed
Line 11046: [IRAT U2L] EutraMeasureGapCommonProcessing: DiffUmtsTime failed
Line 11053: [IRAT U2L] EutraMeasureGapCommonProcessing: AddEutraTime failed
Line 11053: [IRAT U2L] EutraMeasureGapCommonProcessing: AddEutraTime failed
Line 11060: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraLatchedTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11060: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraLatchedTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11063: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDeltaTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11063: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDeltaTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11066: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraStartTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11066: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraStartTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11069: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDurationTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11069: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDurationTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11124: [IRAT U2L] EutraMeasureGapCommonProcessing: failed to find any jobs
Line 11124: [IRAT U2L] EutraMeasureGapCommonProcessing: failed to find any jobs
Line 11133: [IRAT U2L]EutraMeasureGapCommonProcessing: compound message allocation failed:
Line 11133: [IRAT U2L]EutraMeasureGapCommonProcessing: compound message allocation failed:
Line 11152: [IRAT U2L] EutraMeasureGapCommon: sending dummy indication
Line 11152: [IRAT U2L] EutraMeasureGapCommon: sending dummy indication
Line 11224: S0  ### Critical Error eutraCellMeasResultsList = NULL (%d)
Line 11224: S0  ### Critical Error eutraCellMeasResultsList = NULL (%d)
Line 11230: [IRAT U2L] uphy_CEutraMeasureStepFsm_processReplyInfo: AGC1 (%d), AGC2 (%d), AFC (%d)
Line 11230: [IRAT U2L] uphy_CEutraMeasureStepFsm_processReplyInfo: AGC1 (%d), AGC2 (%d), AFC (%d)
Line 11281: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: incorrect noOfSearchMeasures=%d
Line 11281: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: incorrect noOfSearchMeasures=%d
Line 11313: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: earfcn=%d measBandwidth=%d numOfFreqs=%d
Line 11313: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: earfcn=%d measBandwidth=%d numOfFreqs=%d
Line 11341: [IRAT U2L] SchedulingManager EutraSearchMeasureGapCommonProcessing: failed to find any jobs
Line 11341: [IRAT U2L] SchedulingManager EutraSearchMeasureGapCommonProcessing: failed to find any jobs
Line 11349: [IRAT U2L]EutraSearchMeasureGapCommonProcessing: compound message allocation failed:
Line 11349: [IRAT U2L]EutraSearchMeasureGapCommonProcessing: compound message allocation failed:
Line 11362: [IRAT U2L] SchedulingManager EutraCellSearchMeasureGapCommonProcessing: sending dummy indication
Line 11362: [IRAT U2L] SchedulingManager EutraCellSearchMeasureGapCommonProcessing: sending dummy indication
Line 11372: S  [IRAT U2L] uphy_CEutraSearchMeasureStepFsm_step: Msg is NULL
Line 11372: S  [IRAT U2L] uphy_CEutraSearchMeasureStepFsm_step: Msg is NULL
Line 11455: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: DiffUmtsTime failed
Line 11455: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: DiffUmtsTime failed
Line 11461: [IRAT U2L] EutraCellSearchGapCommonProcessing: AddEutraTime failed
Line 11461: [IRAT U2L] EutraCellSearchGapCommonProcessing: AddEutraTime failed
Line 11466: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraLatchedTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11466: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraLatchedTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11467: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDeltaTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11467: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDeltaTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11468: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraStartTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11468: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraStartTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11469: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDurationTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11469: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDurationTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11544: S0  ### Critical Error eutraSearchMeasureResultsList = NULL (%d)
Line 11544: S0  ### Critical Error eutraSearchMeasureResultsList = NULL (%d)
Line 11573: [U2L TimeInfo] eutraCellSearchDataBase 0x%x eutraMeasureDataBase 0x%x
Line 11573: [U2L TimeInfo] eutraCellSearchDataBase 0x%x eutraMeasureDataBase 0x%x
Line 11581: EutraCellInfoUpdateInd message generation is failed
Line 11581: EutraCellInfoUpdateInd message generation is failed
Line 11595: [U2L TimeInfo] EutraCellInfoUpdateInd msg 0x%x
Line 11595: [U2L TimeInfo] EutraCellInfoUpdateInd msg 0x%x
Line 11596: [U2L TimeInfo] message 0x%x message->header.TransactId 0x%x
Line 11596: [U2L TimeInfo] message 0x%x message->header.TransactId 0x%x
Line 11601: [U2L TimeInfo] num_of_freq %d ind_msg 0x%x ind_msg->header.TransactId 0x%x, REQ is freed
Line 11601: [U2L TimeInfo] num_of_freq %d ind_msg 0x%x ind_msg->header.TransactId 0x%x, REQ is freed
Line 11617: [U2L TimeInfo] i %d j %d CellId %d earfcn %d cp type %d
Line 11617: [U2L TimeInfo] i %d j %d CellId %d earfcn %d cp type %d
Line 11621: [U2L TimeInfo] num_of_freq %d ind_msg 0x%x ind_msg->header.TransactId 0x%x, REQ is freed
Line 11621: [U2L TimeInfo] num_of_freq %d ind_msg 0x%x ind_msg->header.TransactId 0x%x, REQ is freed
Line 11627: [IRAT U2L] UMT refCounterFrame %d, refCounterSlot %d, refCounterChip %d
Line 11627: [IRAT U2L] UMT refCounterFrame %d, refCounterSlot %d, refCounterChip %d
Line 11629: [IRAT U2L] LTE sfn %d, tti %d, offset %d
Line 11629: [IRAT U2L] LTE sfn %d, tti %d, offset %d
Line 11638: [U2L TimeInfo] req_earfcn %d num_of_cells %d
Line 11638: [U2L TimeInfo] req_earfcn %d num_of_cells %d
Line 11646: [U2L TimeInfo] lteCellInfo Cell id %d earfcn %d, EutraCellManager cell id %d earfcn %d
Line 11652: [IRAT U2L] Found valid cell info for Handover
Line 11652: [IRAT U2L] Found valid cell info for Handover
Line 11662: [U2L TimeInfo] id %d updated sfn %d slot %d chip %d 
Line 11662: [U2L TimeInfo] id %d updated sfn %d slot %d chip %d 
Line 11664: [U2L TimeInfo] updated sfn %d slot %d chip %d eutraDeltaTimeInOffset %d calculated_framePosition %d
Line 11664: [U2L TimeInfo] updated sfn %d slot %d chip %d eutraDeltaTimeInOffset %d calculated_framePosition %d
Line 11682: EutraCellInfoUpdateInd message is failed
Line 11682: EutraCellInfoUpdateInd message is failed
Line 5503: checkImpendingGap Fach occasion cfn %d pending %d virtualGapManager_ptr->fachCfnBuffer[cfn] %d nonGapDlUarfcn %d arfcn %d
Line 5503: checkImpendingGap Fach occasion cfn %d pending %d virtualGapManager_ptr->fachCfnBuffer[cfn] %d nonGapDlUarfcn %d arfcn %d
Line 5515: isUarfcnAssignedToNextGap = FALSE
Line 5515: isUarfcnAssignedToNextGap = FALSE
Line 5524: checkImpendingGap startCheck %d saftySlots %d endCheck %d safteySlotsGapend %d (startCheck > saftySlots) %d (endCheck > safteySlotsGapend) %d
Line 5524: checkImpendingGap startCheck %d saftySlots %d endCheck %d safteySlotsGapend %d (startCheck > saftySlots) %d (endCheck > safteySlotsGapend) %d
Line 5531: checkImpendingGap(gapStartRSN=%d gapEndRSN=%d currentRSN=%d) stateId %d saftySlots %d safteySlotsGapend %d pending %d
Line 5531: checkImpendingGap(gapStartRSN=%d gapEndRSN=%d currentRSN=%d) stateId %d saftySlots %d safteySlotsGapend %d pending %d
Line 9167: buffering Timer started. isOnlineBufferingOld=%d;
Line 9167: buffering Timer started. isOnlineBufferingOld=%d;
Line 9172: buffering Timer is not started. isOnlineBufferingOld=%d;
Line 9172: buffering Timer is not started. isOnlineBufferingOld=%d;
Line 9185: [AMR decoding] ]isBufferingVaild: isOnlineBufferingOld = %d, BufferOngoing = %d, ret = %d
Line 9185: [AMR decoding] ]isBufferingVaild: isOnlineBufferingOld = %d, BufferOngoing = %d, ret = %d
Line 9207: [DRX Buf reuse] isBufferingVaild: measurementState= %d,(idle:),uarfcn = %d buffered_uarfcn = %d, ret=%d
Line 9207: [DRX Buf reuse] isBufferingVaild: measurementState= %d,(idle:),uarfcn = %d buffered_uarfcn = %d, ret=%d
Line 9218: 		: isBufferingVaild: buffering is required: isOnlineBufferingOld=%d, buffered_carrierInfo=%d, carrierInfo=%d, buffered_uarfcn=%d, uarfcn=%d, 
Line 9218: 		: isBufferingVaild: buffering is required: isOnlineBufferingOld=%d, buffered_carrierInfo=%d, carrierInfo=%d, buffered_uarfcn=%d, uarfcn=%d, 
Line 9422: GetNonGapBufferingAging_period: agingLength = %d
Line 9422: GetNonGapBufferingAging_period: agingLength = %d
Line 9234: onlineBufferingUarfcnTooOld
Line 9234: onlineBufferingUarfcnTooOld
Line 9254:  onlineBufferingUarfcnTooOld: Buffer Cmd execute!! carrierInfo=%d, uarfcn=%d, BufferLock=%d
Line 9254:  onlineBufferingUarfcnTooOld: Buffer Cmd execute!! carrierInfo=%d, uarfcn=%d, BufferLock=%d
Line 9260: setNonGapDlUarfcn: bufferingCmd exec failure
Line 9260: setNonGapDlUarfcn: bufferingCmd exec failure
Line 9269: onlineBufferingUarfcnTooOld: Can't execute bufferingCmd AmrSlotmode =%d, isMpRunning = %d
Line 9269: onlineBufferingUarfcnTooOld: Can't execute bufferingCmd AmrSlotmode =%d, isMpRunning = %d
Line 12329: uphy_CSchedulingManager_process_the_Online_message: currentDlUarfcn(%d), cmdExecStatus = %d (Invalid/Fail/Success)
Line 12329: uphy_CSchedulingManager_process_the_Online_message: currentDlUarfcn(%d), cmdExecStatus = %d (Invalid/Fail/Success)
Line 12383: There is no msg to run searcher!
Line 12383: There is no msg to run searcher!
Line 12400: buffering Timer started. isOnlineBufferingOld=%d;
Line 12400: buffering Timer started. isOnlineBufferingOld=%d;
Line 9317:  setNonGapDlUarfcn: Buffer Cmd execute!! isOfflineUarfcn=%d, offlineUarfcn=%d, synchroGapUarfcnInfo.uarfcn=%d, BufferLock=%d
Line 9317:  setNonGapDlUarfcn: Buffer Cmd execute!! isOfflineUarfcn=%d, offlineUarfcn=%d, synchroGapUarfcnInfo.uarfcn=%d, BufferLock=%d
Line 9328: setNonGapDlUarfcn: bufferingCmd exec failure
Line 9328: setNonGapDlUarfcn: bufferingCmd exec failure
Line 9356: 	setNonGapDlUarfcn : Buffering is active, BufferLock=%d, isOnlineBufferingOld=%d, buffered_uarfcn = %d
Line 9356: 	setNonGapDlUarfcn : Buffering is active, BufferLock=%d, isOnlineBufferingOld=%d, buffered_uarfcn = %d
Line 9368: Buffering command is ACTIVE. Reset command and its handler.
Line 9368: Buffering command is ACTIVE. Reset command and its handler.
Line 9377: Buffering command is = %x or active for other stack
Line 9377: Buffering command is = %x or active for other stack
Line 9392: Buffering command is ACTIVE due to no response.
Line 9392: Buffering command is ACTIVE due to no response.
Line 9408: Step3 or MP is running. Can't have buffer!!!!!
Line 9408: Step3 or MP is running. Can't have buffer!!!!!
Line 6644: fbFilterMap == NULL pointer
Line 6644: fbFilterMap == NULL pointer
Line 6655: schedulingManager_ptr->fbFsmHandlerArray[%d] == NULL pointer
Line 6655: schedulingManager_ptr->fbFsmHandlerArray[%d] == NULL pointer
Line 6693: EUphySchedulerFbId_SearcherSsch - getReplyMsgSize == NULL pointer
Line 6693: EUphySchedulerFbId_SearcherSsch - getReplyMsgSize == NULL pointer
Line 6697: Ssch request - could not flag set
Line 6697: Ssch request - could not flag set
Line 6711: EUphySchedulerFbId_SearcherSsch - replyMsg == NULL pointer
Line 6711: EUphySchedulerFbId_SearcherSsch - replyMsg == NULL pointer
Line 6805: provisionIdleFsms: synchStateInfo but not EUphySchedulerStateId_CompModeFddGap synchStateId=%d
Line 6805: provisionIdleFsms: synchStateInfo but not EUphySchedulerStateId_CompModeFddGap synchStateId=%d
Line 6834: provisionIdleFsms(uarfcn=%d, fbFsm=%d)
Line 6834: provisionIdleFsms(uarfcn=%d, fbFsm=%d)
Line 6899: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 6899: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 6909: [CompressedMode] alreay running, so this request [%d %d] uarfcn=%d should be queueing!!!!
Line 6909: [CompressedMode] alreay running, so this request [%d %d] uarfcn=%d should be queueing!!!!
Line 6940: [ProvisionIdleFsms] bufferingCmd is NULL
Line 6940: [ProvisionIdleFsms] bufferingCmd is NULL
Line 6945: [ProvisionIdleFsms] UARFCN MISMATCH - INSERT : buffered_uarfcn = %d, request uarfcn = %d
Line 6945: [ProvisionIdleFsms] UARFCN MISMATCH - INSERT : buffered_uarfcn = %d, request uarfcn = %d
Line 6969: Command handler is active so cannot execute the command , inserting in ArfcnListCollector
Line 6969: Command handler is active so cannot execute the command , inserting in ArfcnListCollector
