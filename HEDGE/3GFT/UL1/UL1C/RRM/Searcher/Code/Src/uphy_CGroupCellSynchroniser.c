Line 221:  uphy_CGroupCellSynchroniser_free (groupCellSynchroniser_ptr=NULL)
Line 229:  uphy_CSchedulingManager_GetCampingDlUarfcn returns FALSE
Line 229:  uphy_CSchedulingManager_GetCampingDlUarfcn returns FALSE
Line 237: uphy_CGroupCellSynchroniser_free set gapScheduled
Line 237: uphy_CGroupCellSynchroniser_free set gapScheduled
Line 639: GroupCellSynchroniser[%d %d]  isTxDivValid=%d, txDivStatus=%d UptodateMpAgeThreshold %d
Line 639: GroupCellSynchroniser[%d %d]  isTxDivValid=%d, txDivStatus=%d UptodateMpAgeThreshold %d
Line 653: GroupCellSynchroniser[%d] %d %d Succeeded: Up to date info found
Line 653: GroupCellSynchroniser[%d] %d %d Succeeded: Up to date info found
Line 662: GroupCellSynchroniser[%d] %d %d: MPDB reads %d paths of Age %d in subState(%d)
Line 662: GroupCellSynchroniser[%d] %d %d: MPDB reads %d paths of Age %d in subState(%d)
Line 677:  GroupCellSynchroniser[%d %d] - oldFrameOffset=%d (age %d)
Line 677:  GroupCellSynchroniser[%d %d] - oldFrameOffset=%d (age %d)
Line 685:  OLD multipath information [%d %d] Not found
Line 685:  OLD multipath information [%d %d] Not found
Line 705:  OldMultiPathInfo found but it's too old. %d[ms]
Line 705:  OldMultiPathInfo found but it's too old. %d[ms]
Line 728:  Multipath information Not found (EUHalCellSetType_NonIdentified_Cpich)
Line 728:  Multipath information Not found (EUHalCellSetType_NonIdentified_Cpich)
Line 741: GroupCellSynchroniser[%d] %d %d: Begins guided search isDeadline=%d deadline=%d
Line 741: GroupCellSynchroniser[%d] %d %d: Begins guided search isDeadline=%d deadline=%d
Line 760: [FA2] GroupCellSynchroniser[%d] %d %d: MPDB reads %d paths of Age %d in subState(%d)
Line 760: [FA2] GroupCellSynchroniser[%d] %d %d: MPDB reads %d paths of Age %d in subState(%d)
Line 775: [FA2] GroupCellSynchroniser[%d %d] - oldFrameOffset=%d (age %d)
Line 775: [FA2] GroupCellSynchroniser[%d %d] - oldFrameOffset=%d (age %d)
Line 782: [FA2] OLD multipath information [%d %d] Not found
Line 782: [FA2] OLD multipath information [%d %d] Not found
Line 805: [FA3] GroupCellSynchroniser[%d] %d %d: MPDB reads %d paths of Age %d in subState(%d)
Line 805: [FA3] GroupCellSynchroniser[%d] %d %d: MPDB reads %d paths of Age %d in subState(%d)
Line 820: [FA3] GroupCellSynchroniser[%d %d] - oldFrameOffset=%d (age %d)
Line 820: [FA3] GroupCellSynchroniser[%d %d] - oldFrameOffset=%d (age %d)
Line 827: [FA3] OLD multipath information [%d %d] Not found
Line 827: [FA3] OLD multipath information [%d %d] Not found
Line 844:  Wrong cellSetType:Uarfcn(%d),Psc(%d): PrimaryId=%d,SubId=%d,OldCellType %d
Line 844:  Wrong cellSetType:Uarfcn(%d),Psc(%d): PrimaryId=%d,SubId=%d,OldCellType %d
Line 851: GroupCellSync Cell %d CellSetType = %d CellSyncType = %d
Line 851: GroupCellSync Cell %d CellSetType = %d CellSyncType = %d
Line 950:  uphy_CGroupCellSynchroniser_processPschMeasurementReport is NULL
Line 960:   uphy_CGroupCellSynchroniser_processPschMeasurementReport: Ignore Psch Rsp
Line 960:   uphy_CGroupCellSynchroniser_processPschMeasurementReport: Ignore Psch Rsp
Line 971: Request Psch[pschAccSlotCnt=%d, postAccLen=%d, RetCode=%d]
Line 971: Request Psch[pschAccSlotCnt=%d, postAccLen=%d, RetCode=%d]
Line 990:  pschReqMessage == NULL pointer
Line 990:  pschReqMessage == NULL pointer
Line 1022: Group CellSynchroniser %d: Request Psch: isDeadline=%d, absDeadline=%d
Line 1022: Group CellSynchroniser %d: Request Psch: isDeadline=%d, absDeadline=%d
Line 1026: GroupCellSynchroniser %d: uphy_CSchedulingManager_GetCampingDlUarfcn = FALSE
Line 1026: GroupCellSynchroniser %d: uphy_CSchedulingManager_GetCampingDlUarfcn = FALSE
Line 1039: uphy_CGroupCellSynchroniser_processPschMeasurementReport set gapScheduled
Line 1039: uphy_CGroupCellSynchroniser_processPschMeasurementReport set gapScheduled
Line 1049:  GroupCellSynchroniser Error: Cant send Psch Req Message

Line 1049:  GroupCellSynchroniser Error: Cant send Psch Req Message

Line 1078:  uphy_CCellSynchroniser_processPschMeasurementReport: Wrong CellSetType
Line 1078:  uphy_CCellSynchroniser_processPschMeasurementReport: Wrong CellSetType
Line 1101:  Group Cell Synchro %d %d: Failed in State NoInfo - failed psch measurement report
Line 1101:  Group Cell Synchro %d %d: Failed in State NoInfo - failed psch measurement report
Line 1253:  processGroupCpichScrCodeMsmtReport: Wrong CellSetType
Line 1253:  processGroupCpichScrCodeMsmtReport: Wrong CellSetType
Line 1309: GroupCpichScrCode Success Result cpichScrCode[%d] ScrCode %d frameOffset[%d] %d magnitude[%d] %d
Line 1309: GroupCpichScrCode Success Result cpichScrCode[%d] ScrCode %d frameOffset[%d] %d magnitude[%d] %d
Line 1318: GroupCellSynchroniser %d pathIndex %d
Line 1318: GroupCellSynchroniser %d pathIndex %d
Line 1322: GroupCpichScrCode Fail Result PrimaryScrCode[%d]=%d does not have returned CpichScrCode =%d 
Line 1322: GroupCpichScrCode Fail Result PrimaryScrCode[%d]=%d does not have returned CpichScrCode =%d 
Line 1342:  processGroupCpichScrCodeMeasurementReport [%d %d]: UPHY_MESSAGING_RETURN_CODE_FAILURE 
Line 1342:  processGroupCpichScrCodeMeasurementReport [%d %d]: UPHY_MESSAGING_RETURN_CODE_FAILURE 
Line 1351:  GroupCpichScrCodeFail [%d]: pathIndex %d should be less than numOfCpichRequest %d
Line 1351:  GroupCpichScrCodeFail [%d]: pathIndex %d should be less than numOfCpichRequest %d
Line 1454:  uphy_CGroupCellSynchroniser_CpichMultiPathDoneMessage is NULL
Line 1463:  uphy_CGroupCellSynchroniser_processGroupCpichMultiPathDoneMessage: Ignore CPICH Rscp Rsp
Line 1463:  uphy_CGroupCellSynchroniser_processGroupCpichMultiPathDoneMessage: Ignore CPICH Rscp Rsp
Line 1491: Group CellSynchroniser %d %d: Rx Good Cpich MultiPath Msmt - Succeeded in State NoInfo

Line 1491: Group CellSynchroniser %d %d: Rx Good Cpich MultiPath Msmt - Succeeded in State NoInfo

Line 1500: uphy_CGroupCellSynchroniser_processGroupCpichMultiPathDoneMessage set gapScheduled
Line 1500: uphy_CGroupCellSynchroniser_processGroupCpichMultiPathDoneMessage set gapScheduled
Line 1535: GroupCellSynchroniser %d %d: uphy_CSchedulingManager_GetCampingDlUarfcn = FALSE
Line 1535: GroupCellSynchroniser %d %d: uphy_CSchedulingManager_GetCampingDlUarfcn = FALSE
Line 1548: uphy_CGroupCellSynchroniser_processGroupCpichMultiPathDoneMessage set gapScheduled
Line 1548: uphy_CGroupCellSynchroniser_processGroupCpichMultiPathDoneMessage set gapScheduled
Line 1551: Group Cpich MultiPath FAILED for U(%d) Psc(%d)
Line 1551: Group Cpich MultiPath FAILED for U(%d) Psc(%d)
Line 1662:  uphy_CGroupCellSynchroniser_Timeout - memory corruption: not Group Cell SynchroniserObject
Line 1662:  uphy_CGroupCellSynchroniser_Timeout - memory corruption: not Group Cell SynchroniserObject
Line 1668: GroupCellSynchroniser %d %d: uphy_CSchedulingManager_GetCampingDlUarfcn = FALSE
Line 1668: GroupCellSynchroniser %d %d: uphy_CSchedulingManager_GetCampingDlUarfcn = FALSE
Line 1685:  GroupCellSynchroniser [%d %d]: Timeout in Substate %d CampingUarfcn %d isOfflineUarfcn=%d offlineUarfcn=%d, numOfCells=%d
Line 1685:  GroupCellSynchroniser [%d %d]: Timeout in Substate %d CampingUarfcn %d isOfflineUarfcn=%d offlineUarfcn=%d, numOfCells=%d
Line 1696:  replyMessage == NULL pointer
Line 1696:  replyMessage == NULL pointer
Line 1749:  GroupCellSynchroniser Problem : Unexpected Requestor %d
Line 1749:  GroupCellSynchroniser Problem : Unexpected Requestor %d
Line 1867: GroupCellSynchroniser Error : Unexpected Requestor

Line 1867: GroupCellSynchroniser Error : Unexpected Requestor

Line 1876:  replyMessage == NULL pointer
Line 1876:  replyMessage == NULL pointer
Line 1896: GroupCellSynchroniser %d : sends positive cnf to controller(Id=%d, msg=%d, SubId=%d, TransactId=%d)
Line 1896: GroupCellSynchroniser %d : sends positive cnf to controller(Id=%d, msg=%d, SubId=%d, TransactId=%d)
Line 1902: GroupCellSynchroniser %d : sends negative cnf
Line 1902: GroupCellSynchroniser %d : sends negative cnf
Line 1934:  GroupCellSynchroniser Error: Cant send Ind Message

Line 1934:  GroupCellSynchroniser Error: Cant send Ind Message

Line 2090:  RF use is paused! Ignore uphy_CGroupCellSynchroniser_SubmitPschRequestSTF
Line 2090:  RF use is paused! Ignore uphy_CGroupCellSynchroniser_SubmitPschRequestSTF
Line 2093: SubmitGroupPschRequestSTF token %d
Line 2093: SubmitGroupPschRequestSTF token %d
Line 315:  multiPathInfo == NULL pointer
Line 315:  multiPathInfo == NULL pointer
Line 572: Wrong initial Group cell Synch State
Line 572: Wrong initial Group cell Synch State
Line 1790:  uphy_CGroupCellSynchroniser_CreateTimeoutToken but previous token exists - cancelling existing timeout
Line 1790:  uphy_CGroupCellSynchroniser_CreateTimeoutToken but previous token exists - cancelling existing timeout
Line 1805: GroupCellSynchroniser %d %d: Timeout started, due to expire at=%d run at rsn = %d
Line 1805: GroupCellSynchroniser %d %d: Timeout started, due to expire at=%d run at rsn = %d
Line 1974:  groupCellSynchroniser_ptr==NULL
Line 1987:  cpichGroupMultiPathReqMessage == NULL pointer
Line 1987:  cpichGroupMultiPathReqMessage == NULL pointer
Line 2023: [FA%d] GroupCpichMultipathRequest [%d] [%d %d] frameOffset=%d absDeadline=%d txDivStatus=%d
Line 2023: [FA%d] GroupCpichMultipathRequest [%d] [%d %d] frameOffset=%d absDeadline=%d txDivStatus=%d
Line 2037: [FA%d] GroupCpichMultipathRequest [%d] [%d %d] frameOffset=%d, absDeadline=%d, txDivStatus=%d
Line 2037: [FA%d] GroupCpichMultipathRequest [%d] [%d %d] frameOffset=%d, absDeadline=%d, txDivStatus=%d
Line 2049:  GroupCellSynchroniser Error: Cant send Cpich GroupMultiPath Req Message

Line 2049:  GroupCellSynchroniser Error: Cant send Cpich GroupMultiPath Req Message

Line 2063: Group CellSynchroniser Request Cpich Multipath Failed isDeadline=%d, absDeadline=%d 
Line 2063: Group CellSynchroniser Request Cpich Multipath Failed isDeadline=%d, absDeadline=%d 
Line 1125: GroupCellSynchroniser %d: uphy_CSchedulingManager_GetCampingDlUarfcn = FALSE
Line 1125: GroupCellSynchroniser %d: uphy_CSchedulingManager_GetCampingDlUarfcn = FALSE
Line 1132: uphy_CGroupCellSynchroniser_processPschMeasurementReport set gapScheduled
Line 1132: uphy_CGroupCellSynchroniser_processPschMeasurementReport set gapScheduled
Line 1160: :   groupCellSynchroniser Paths: pathNumber=%d pathOffset %d magnitude %d
Line 1160: :   groupCellSynchroniser Paths: pathNumber=%d pathOffset %d magnitude %d
Line 2470:  cpichGroupScrCodeReqMessage==NULL
Line 2470:  cpichGroupScrCodeReqMessage==NULL
Line 2519: GroupCpichScrCodeRequest: pathOffset %d, numOfCells %d, isDeadline=%d, absDeadline=%d
Line 2519: GroupCpichScrCodeRequest: pathOffset %d, numOfCells %d, isDeadline=%d, absDeadline=%d
Line 2535:  GroupCellSynchroniser Error: Cant Send CpichScrCode Req Message

Line 2535:  GroupCellSynchroniser Error: Cant Send CpichScrCode Req Message

Line 2293: GroupCpichScrCodeRequest: pathOffset %d, numOfCells %d, isDeadline=%d, absDeadline=%d
Line 2293: GroupCpichScrCodeRequest: pathOffset %d, numOfCells %d, isDeadline=%d, absDeadline=%d
Line 2309:  GroupCellSynchroniser Error: Cant Send CpichScrCode Req Message

Line 2309:  GroupCellSynchroniser Error: Cant Send CpichScrCode Req Message

Line 2334:  txDivCpichGroupScrCodeReqMessage == NULL pointer
Line 2334:  txDivCpichGroupScrCodeReqMessage == NULL pointer
Line 2385: txDivCpichGroupScrCodeReqMessage: pathOffset %d, numOfCells %d, isDeadline=%d, absDeadline=%d
Line 2385: txDivCpichGroupScrCodeReqMessage: pathOffset %d, numOfCells %d, isDeadline=%d, absDeadline=%d
Line 2401:  GroupCellSynchroniser Error: Cant Send CpichScrCode Req Message

Line 2401:  GroupCellSynchroniser Error: Cant Send CpichScrCode Req Message

Line 1193:  uphy_CGroupCellSynchroniser_processGroupCpichScrCodeMeasurementReport is NULL
Line 1199:  uphy_CGroupCellSynchroniser_processGroupCpichScrCodeMeasurementReport: message is NULL
Line 389:  uphy_CGroupCellSynchroniser_CpichMultiPathDoneMessage is NULL
Line 396: CpichDoneCheck pathIndex=%d numOfCpichRequest=%d numOfCpichReport
Line 396: CpichDoneCheck pathIndex=%d numOfCpichRequest=%d numOfCpichReport
Line 421: CpichDoneCheck Cell %d ScrCode=%d maxCpichIndex %d Magnitude=%d FrameOffset=%d
Line 421: CpichDoneCheck Cell %d ScrCode=%d maxCpichIndex %d Magnitude=%d FrameOffset=%d
Line 442: GroupCellSynchroniser: CpichScrCode=%d MATCHES one we are looking for PathIndex %d FrameOffset %d
Line 442: GroupCellSynchroniser: CpichScrCode=%d MATCHES one we are looking for PathIndex %d FrameOffset %d
Line 454:  maxCpichIndex=%d Array Index Out of bound
Line 454:  maxCpichIndex=%d Array Index Out of bound
Line 476: GroupCellSynchroniser %d: uphy_CSchedulingManager_GetCampingDlUarfcn = FALSE
Line 476: GroupCellSynchroniser %d: uphy_CSchedulingManager_GetCampingDlUarfcn = FALSE
Line 480: GroupCellSynchroniser: uphy_CSchedulingManager_GetCampingDlUarfcn = FALSE
Line 480: GroupCellSynchroniser: uphy_CSchedulingManager_GetCampingDlUarfcn = FALSE
Line 498: uphy_CGroupCellSynchroniser_ProcessCpichDoneCheck set gapScheduled
Line 498: uphy_CGroupCellSynchroniser_ProcessCpichDoneCheck set gapScheduled
Line 1388:   uphy_CGroupCellSynchroniser_processGroupCpichScrCodeMeasurementReport: Ignore CPICH Scr Code Rsp
Line 1388:   uphy_CGroupCellSynchroniser_processGroupCpichScrCodeMeasurementReport: Ignore CPICH Scr Code Rsp
Line 1418:  processGroupCpichScrCodeMeasurementReport [%d]: pathIndex %d outstandingGroupCpichScrCodeReq %d
Line 1418:  processGroupCpichScrCodeMeasurementReport [%d]: pathIndex %d outstandingGroupCpichScrCodeReq %d
Line 1586:  uphy_CGroupCellSynchroniser_CheckCompletionStatus[uarfcn=%d]: RetCode !=UPHY_MESSAGING_RETURN_CODE_SUCCESS
Line 1586:  uphy_CGroupCellSynchroniser_CheckCompletionStatus[uarfcn=%d]: RetCode !=UPHY_MESSAGING_RETURN_CODE_SUCCESS
Line 1607:  When uphy_CMultiPathDatabase_SeekCellMultiPathData [% d %d] does not fail multipathInfo must not be 0
Line 1607:  When uphy_CMultiPathDatabase_SeekCellMultiPathData [% d %d] does not fail multipathInfo must not be 0
Line 2123:  groupCellSynchroniser_ptr==NULL
Line 2161:  GroupCellSynchroniser[0] %d %d: PschState_Pending SubmitPschRequest  submit token %d  to wait for signal %d value %d
Line 2161:  GroupCellSynchroniser[0] %d %d: PschState_Pending SubmitPschRequest  submit token %d  to wait for signal %d value %d
Line 2171:  GroupCellSynchroniser %d %d no PschSignal
Line 2171:  GroupCellSynchroniser %d %d no PschSignal
Line 2193:  pschReqMessage == NULL pointer
Line 2193:  pschReqMessage == NULL pointer
Line 2224: Group CellSynchroniser Request Psch: uarfcn %d isDeadline=%d, absDeadline=%d
Line 2224: Group CellSynchroniser Request Psch: uarfcn %d isDeadline=%d, absDeadline=%d
Line 2232:  GroupCellSynchroniser Error: Cant send Psch Req Message

Line 2232:  GroupCellSynchroniser Error: Cant send Psch Req Message

