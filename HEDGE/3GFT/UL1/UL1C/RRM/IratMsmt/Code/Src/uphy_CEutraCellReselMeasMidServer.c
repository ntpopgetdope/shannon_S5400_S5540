Line 141: [IRAT U2L] EutraCellReselection Init: earfcn=%d
Line 141: [IRAT U2L] EutraCellReselection Init: earfcn=%d
Line 161: [IRAT U2L] EutraCellReselection Init: numOfEutraSearchMeasureManager=%d, numOfEutraFreqs=%d
Line 161: [IRAT U2L] EutraCellReselection Init: numOfEutraSearchMeasureManager=%d, numOfEutraFreqs=%d
Line 166:   [IRAT U2L] EutraCellReselection Init: Unable to create EutraSearchMeasureController
Line 166:   [IRAT U2L] EutraCellReselection Init: Unable to create EutraSearchMeasureController
Line 205: [IRAT U2L] State is DRX, Drxcycle : %d,  eutra_consecutiveRequestCounter : %d,  eutra_initialFastRBMeasThreshold : %d
Line 205: [IRAT U2L] State is DRX, Drxcycle : %d,  eutra_consecutiveRequestCounter : %d,  eutra_initialFastRBMeasThreshold : %d
Line 213: [IRAT U2L] State is not DRX, eutra_consecutiveRequestCounter : %d, eutra_initialFastRBMeasThreshold : %d
Line 213: [IRAT U2L] State is not DRX, eutra_consecutiveRequestCounter : %d, eutra_initialFastRBMeasThreshold : %d
Line 218: [IRAT U2L] EutraCellReselection Init: mid=%d configured. periodicalOrEventTrigger=%d (P:0, EVT:1)
Line 218: [IRAT U2L] EutraCellReselection Init: mid=%d configured. periodicalOrEventTrigger=%d (P:0, EVT:1)
Line 250: [IRAT U2G] uphy_CGsmCellReselMeasurementMidServer_free: outstandingGsmMeasRequests = %d
Line 250: [IRAT U2G] uphy_CGsmCellReselMeasurementMidServer_free: outstandingGsmMeasRequests = %d
Line 272: [IRAT U2L] EutraCellReselection: Preprocessing incoming message
Line 272: [IRAT U2L] EutraCellReselection: Preprocessing incoming message
Line 458:   [IRAT U2L] EutraCellReselection processIndMsg: Ignore Measurement results
Line 458:   [IRAT U2L] EutraCellReselection processIndMsg: Ignore Measurement results
Line 485:   [IRAT U2L] eutraCellReselectionMeasurementMidServer_ptr->outstandingEutraCellReselMeasRequests is negative
Line 485:   [IRAT U2L] eutraCellReselectionMeasurementMidServer_ptr->outstandingEutraCellReselMeasRequests is negative
Line 498:   [IRAT U2L] EutraCellReselection processIndMsg: Non-supported Measurement States
Line 498:   [IRAT U2L] EutraCellReselection processIndMsg: Non-supported Measurement States
Line 505: [IRAT U2L] EutraCellReselection processIndMsg: RSN=%d, MsgId=%d(38:CellSearch, 39:Measure, 40: SearchMeasure), TransactId=%d, SubId=%d, outstandingRequests=%d isFirstTry=%d consecutiveRequestCounter=%d
Line 505: [IRAT U2L] EutraCellReselection processIndMsg: RSN=%d, MsgId=%d(38:CellSearch, 39:Measure, 40: SearchMeasure), TransactId=%d, SubId=%d, outstandingRequests=%d isFirstTry=%d consecutiveRequestCounter=%d
Line 515:   [IRAT U2L] EutraCellReselection processIndMsg: Non-supported Measurement Types 
Line 515:   [IRAT U2L] EutraCellReselection processIndMsg: Non-supported Measurement Types 
Line 551:   uphy_CEutraCellReselectionMeasurementMidServer_createIndMsgAndSetMsgId: indMsg=NULL 
Line 551:   uphy_CEutraCellReselectionMeasurementMidServer_createIndMsgAndSetMsgId: indMsg=NULL 
Line 559:   uphy_CEutraCellReselectionMeasurementMidServer_createIndMsgAndSetMsgId: numOfEutraFreqs = 0
Line 559:   uphy_CEutraCellReselectionMeasurementMidServer_createIndMsgAndSetMsgId: numOfEutraFreqs = 0
Line 568:   indMsg returned from createUrrc_UphyEutraCellReselectionMeasurementIndMsg is NULL in else part
Line 568:   indMsg returned from createUrrc_UphyEutraCellReselectionMeasurementIndMsg is NULL in else part
Line 600:   [IRAT U2L] getMeasurementRequestType: invalid MsgId=%d
Line 600:   [IRAT U2L] getMeasurementRequestType: invalid MsgId=%d
Line 606:   [IRAT U2L] getMeasurementRequestType: message = NULL
Line 606:   [IRAT U2L] getMeasurementRequestType: message = NULL
Line 643:   [IRAT U2L] EutraCellReselection isRequestTypeForTheQuantities: Invalid requestType=%d
Line 643:   [IRAT U2L] EutraCellReselection isRequestTypeForTheQuantities: Invalid requestType=%d
Line 692: [IRAT U2L] measurementModifyReq: SearchMeasMsecPeriod=%d, numOfAddFreqs=%d, numOfRemoveFreqs=%d
Line 692: [IRAT U2L] measurementModifyReq: SearchMeasMsecPeriod=%d, numOfAddFreqs=%d, numOfRemoveFreqs=%d
Line 699:   [IRAT U2L] SpeedUpCounter %d 
Line 699:   [IRAT U2L] SpeedUpCounter %d 
Line 744: [IRAT U2L] EutraCellReselection EutraCellReselection emptyRequestsLists
Line 744: [IRAT U2L] EutraCellReselection EutraCellReselection emptyRequestsLists
Line 780: [IRAT U2L] EutraCellReselection convertMeasuredResultsForURRCFormat: isAllRequestTypes=%d, requestType=%d
Line 780: [IRAT U2L] EutraCellReselection convertMeasuredResultsForURRCFormat: isAllRequestTypes=%d, requestType=%d
Line 790: [DSDS IRAT U2L] Not sending Indication to RRC due to pause received during U2L
Line 790: [DSDS IRAT U2L] Not sending Indication to RRC due to pause received during U2L
Line 835: [IRAT U2L] EutraCellReselection convertMeasuredResultsForURRCFormat: EARFCN=%d, numOfEutraCells=%d
Line 835: [IRAT U2L] EutraCellReselection convertMeasuredResultsForURRCFormat: EARFCN=%d, numOfEutraCells=%d
Line 860:   [IRAT U2L] areAllMeasurementsComitted: Reporting Cancelled. initialReportStartCounter=%d
Line 860:   [IRAT U2L] areAllMeasurementsComitted: Reporting Cancelled. initialReportStartCounter=%d
Line 875: [IRAT U2L] EutraCellReselection areAllMeasurementsComitted: %d(0: SearchMeasure) isIndPending=%d
Line 875: [IRAT U2L] EutraCellReselection areAllMeasurementsComitted: %d(0: SearchMeasure) isIndPending=%d
Line 996:   [IRAT U2L] EutraCellReselection getEutraSearchMeasureMsecPeriod: drxCycleLength=%d might be too short for U2L SearchMeasure !!!
Line 996:   [IRAT U2L] EutraCellReselection getEutraSearchMeasureMsecPeriod: drxCycleLength=%d might be too short for U2L SearchMeasure !!!
Line 1055:   [IRAT U2L] EutraCellReselection getEutraSearchMeasureMsecPeriod: Unknown drxCycleLength=%d
Line 1055:   [IRAT U2L] EutraCellReselection getEutraSearchMeasureMsecPeriod: Unknown drxCycleLength=%d
Line 1064:   [IRAT U2L] EutraCellReselection getEutraSearchMeasureMsecPeriod: EUTRA measurement is not supported in CELL_FACH
Line 1064:   [IRAT U2L] EutraCellReselection getEutraSearchMeasureMsecPeriod: EUTRA measurement is not supported in CELL_FACH
Line 1074:   [IRAT U2L] EutraCellReselection getEutraSearchMeasureMsecPeriod: Unexpected measurementState=%d (NoCh/Drx/Fach/Dch/Suspending)
Line 1074:   [IRAT U2L] EutraCellReselection getEutraSearchMeasureMsecPeriod: Unexpected measurementState=%d (NoCh/Drx/Fach/Dch/Suspending)
Line 1090: [IRAT U2L] EutraCellReselection getEutraSearchMeasureMsecPeriod: measurementState=%d(Drx:2, Fach:3), measurementMsecPeriod=%d, eutraSearchMeasureMsecPeriod=%d
Line 1090: [IRAT U2L] EutraCellReselection getEutraSearchMeasureMsecPeriod: measurementState=%d(Drx:2, Fach:3), measurementMsecPeriod=%d, eutraSearchMeasureMsecPeriod=%d
Line 1128:   [IRAT U2L] EutraCellReselection updateEutraSearchMeasureMsecPeriodForPowerSaving: Unknown drxCycleLength=%d
Line 1128:   [IRAT U2L] EutraCellReselection updateEutraSearchMeasureMsecPeriodForPowerSaving: Unknown drxCycleLength=%d
Line 1172:   [IRAT U2L] EutraCellReselection updateEutraSearchMeasureMsecPeriodForPowerSaving: Unknown drxCycleLength=%d
Line 1172:   [IRAT U2L] EutraCellReselection updateEutraSearchMeasureMsecPeriodForPowerSaving: Unknown drxCycleLength=%d
Line 1182:   [IRAT U2L] EutraCellReselection updateEutraSearchMeasureMsecPeriodForPowerSaving: EUTRA measurement is not supported in CELL_FACH
Line 1182:   [IRAT U2L] EutraCellReselection updateEutraSearchMeasureMsecPeriodForPowerSaving: EUTRA measurement is not supported in CELL_FACH
Line 1188:   [IRAT U2L] EutraCellReselection updateEutraSearchMeasureMsecPeriodForPowerSaving: EUTRA measurement is not supported in NoChannel
Line 1188:   [IRAT U2L] EutraCellReselection updateEutraSearchMeasureMsecPeriodForPowerSaving: EUTRA measurement is not supported in NoChannel
Line 1192:   [IRAT U2L] EutraCellReselection updateEutraSearchMeasureMsecPeriodForPowerSaving: Unexpected measurementState=%d (NoCh/Drx/Fach/Dch/Suspending)
Line 1192:   [IRAT U2L] EutraCellReselection updateEutraSearchMeasureMsecPeriodForPowerSaving: Unexpected measurementState=%d (NoCh/Drx/Fach/Dch/Suspending)
Line 1200: [IRAT U2L] EutraCellReselection updateEutraSearchMeasureMsecPeriodForPowerSaving: measurementState=%d(Drx:2, Fach:3), measurementMsecPeriod=%d
Line 1200: [IRAT U2L] EutraCellReselection updateEutraSearchMeasureMsecPeriodForPowerSaving: measurementState=%d(Drx:2, Fach:3), measurementMsecPeriod=%d
Line 1232: [IRAT U2L] EutraCellReselection requestEutraSearchMeasures: SFN=%d
Line 1232: [IRAT U2L] EutraCellReselection requestEutraSearchMeasures: SFN=%d
Line 1236:   [IRAT U2L] EutraCellReselection requestEutraSearchMeasures: reporting can be periodic
Line 1236:   [IRAT U2L] EutraCellReselection requestEutraSearchMeasures: reporting can be periodic
Line 1273: [IRAT U2L]  availableDuration(Sfn,slot,chip) (%d  %d  %d) diff Rsn %d, retiringTimeoutRsn %d, currentRSN %d
Line 1273: [IRAT U2L]  availableDuration(Sfn,slot,chip) (%d  %d  %d) diff Rsn %d, retiringTimeoutRsn %d, currentRSN %d
Line 1284: [IRAT U2L] requestEutraSearchMeasure is available, isFirstTry=%d, consecutiveRequestCounter=%d 
Line 1284: [IRAT U2L] requestEutraSearchMeasure is available, isFirstTry=%d, consecutiveRequestCounter=%d 
Line 1298: [IRAT U2L] requestEutraSearchMeasure is not available, isFirstTry=%d, consecutiveRequestCounter=%d 
Line 1298: [IRAT U2L] requestEutraSearchMeasure is not available, isFirstTry=%d, consecutiveRequestCounter=%d 
Line 1325:   [IRAT U2L] EutraCellReselection requestEutraSearchMeasures: Unexpected measurementState=%d
Line 1325:   [IRAT U2L] EutraCellReselection requestEutraSearchMeasures: Unexpected measurementState=%d
Line 1332: [IRAT U2L] EutraCellReselection requestEutraSearchMeasures: outstandingRequests=%d, measurementState=%d
Line 1332: [IRAT U2L] EutraCellReselection requestEutraSearchMeasures: outstandingRequests=%d, measurementState=%d
Line 1336:   [IRAT U2L] EutraCellReselection requestEutraSearchMeasures: E-UTRA SearchMeasure not requested
Line 1336:   [IRAT U2L] EutraCellReselection requestEutraSearchMeasures: E-UTRA SearchMeasure not requested
Line 1364: [IRAT U2L] EutraCellReselection outstandingRequests=%d
Line 1364: [IRAT U2L] EutraCellReselection outstandingRequests=%d
Line 360:   [IRAT U2L] SpeedUpCounter %d 
Line 360:   [IRAT U2L] SpeedUpCounter %d 
Line 399: [IRAT U2L]  availableDuration(Sfn,slot,chip) (%d  %d  %d) diff Rsn %d, retiringTimeoutRsn %d, currentRSN %d
Line 399: [IRAT U2L]  availableDuration(Sfn,slot,chip) (%d  %d  %d) diff Rsn %d, retiringTimeoutRsn %d, currentRSN %d
