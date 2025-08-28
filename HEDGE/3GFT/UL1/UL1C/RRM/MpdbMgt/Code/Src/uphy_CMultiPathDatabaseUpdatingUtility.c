Line 697:   *******Clear BackUpFingers
Line 697:   *******Clear BackUpFingers
Line 735:   EUphyMultipathMgmtMsgId_StartAgingAndUpdating requested with active token.
Line 735:   EUphyMultipathMgmtMsgId_StartAgingAndUpdating requested with active token.
Line 736:   Are we waking up from snoozing?.
Line 736:   Are we waking up from snoozing?.
Line 760:  EUphyMultipathMgmtMsgId_StopUpdatingAndContinueAging
Line 760:  EUphyMultipathMgmtMsgId_StopUpdatingAndContinueAging
Line 788: uphy_CMultiPathDatabaseUpdatingUtility_process StopUpdating
Line 788: uphy_CMultiPathDatabaseUpdatingUtility_process StopUpdating
Line 811: [E-DRX Measurement] do not  set OutstandingCpichMultipathRequests 0 during Resync procedure
Line 811: [E-DRX Measurement] do not  set OutstandingCpichMultipathRequests 0 during Resync procedure
Line 818: [E-DRX Measurement] isHsDschDrxInCellFach=%d needResync=%d
Line 818: [E-DRX Measurement] isHsDschDrxInCellFach=%d needResync=%d
Line 823:  hsdschResourcesController is NULL
Line 823:  hsdschResourcesController is NULL
Line 833:   *******Clear BackUpFingers
Line 833:   *******Clear BackUpFingers
Line 855: uphy_CMultiPathDatabaseUpdatingUtility_process StartUpdating
Line 855: uphy_CMultiPathDatabaseUpdatingUtility_process StartUpdating
Line 875:   EUphyMultipathMgmtMsgId_StartUpdating requested with active token.
Line 875:   EUphyMultipathMgmtMsgId_StartUpdating requested with active token.
Line 913: uphy_CMultiPathDatabaseUpdatingUtility_process StartSingleUpdate for BPLMN CResourcesConfigurationController 0x%x
Line 913: uphy_CMultiPathDatabaseUpdatingUtility_process StartSingleUpdate for BPLMN CResourcesConfigurationController 0x%x
Line 921: uphy_CMultiPathDatabaseUpdatingUtility_process StartSingleUpdate
Line 921: uphy_CMultiPathDatabaseUpdatingUtility_process StartSingleUpdate
Line 974:  MPDB EUphyMultipathMgmtMsgId_GroupCpichMultipathCompleted; currently %d outstanding requests.
Line 974:  MPDB EUphyMultipathMgmtMsgId_GroupCpichMultipathCompleted; currently %d outstanding requests.
Line 979:  MPDB EUphyMultipathMgmtMsgId_GroupCpichMultipathCompleted; currently %d outstanding requests.
Line 979:  MPDB EUphyMultipathMgmtMsgId_GroupCpichMultipathCompleted; currently %d outstanding requests.
Line 1027: MPDB: Channel configuration is on going at CFN %d, so postpone finger assignment one frame later
Line 1027: MPDB: Channel configuration is on going at CFN %d, so postpone finger assignment one frame later
Line 1080: MPDB singleUpdate [%d]
Line 1080: MPDB singleUpdate [%d]
Line 1097:   MPDB process: no physical channel assigned
Line 1097:   MPDB process: no physical channel assigned
Line 1103:  MPDB Serious Problem : Cant locate cell info for PScrCode %d Uarfcn %d
Line 1103:  MPDB Serious Problem : Cant locate cell info for PScrCode %d Uarfcn %d
Line 1168: MPDB SearcherController returns Group Search Failure: %d outstanding requests
Line 1168: MPDB SearcherController returns Group Search Failure: %d outstanding requests
Line 1215: MultipathUpdating received failed; currently %d outstanding requests.
Line 1215: MultipathUpdating received failed; currently %d outstanding requests.
Line 1280: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 1280: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 1340:  MultipathUpdating received unknown msgid %d
Line 1340:  MultipathUpdating received unknown msgid %d
Line 1354:  Cfn %d Sfn %d: MultipathUpdating received failed response msg id %d
Line 1354:  Cfn %d Sfn %d: MultipathUpdating received failed response msg id %d
Line 1563:   ResyncDoneMessage == NULL pointer
Line 1563:   ResyncDoneMessage == NULL pointer
Line 1578:  unable to send ResyncDoneMessage
Line 1578:  unable to send ResyncDoneMessage
Line 1688: There are no cells in the active list after [%d, %d]
Line 1688: There are no cells in the active list after [%d, %d]
Line 1692: The cell [%d, %d] should not returned; if returned- it will add group cell search.(nonIdentified cell).
Line 1692: The cell [%d, %d] should not returned; if returned- it will add group cell search.(nonIdentified cell).
Line 1732:  Database Updating Utility: Inconsistency in NActiveCells as no first cell
Line 1732:  Database Updating Utility: Inconsistency in NActiveCells as no first cell
Line 1746:  The first active cell [%d, %d] is in the process of being updated
Line 1746:  The first active cell [%d, %d] is in the process of being updated
Line 1757:  The first active cell [%d, %d] is in the process of being updated
Line 1757:  The first active cell [%d, %d] is in the process of being updated
Line 2645: [DR-DSDS] MPDB: MpdbSearcherReqMsg == NULL pointer
Line 2645: [DR-DSDS] MPDB: MpdbSearcherReqMsg == NULL pointer
Line 2650: [DR-DSDS] MPDB: srch req meas type %d
Line 2650: [DR-DSDS] MPDB: srch req meas type %d
Line 2670: [DR-DSDS] MPDB: Searcher is already in use, so use directly
Line 2670: [DR-DSDS] MPDB: Searcher is already in use, so use directly
Line 2675: [DR-DSDS] MPDB: Searcher is in requested state
Line 2675: [DR-DSDS] MPDB: Searcher is in requested state
Line 2699: [DR-DSDS] MPDB: Failed to send RF Request from MPDB
Line 2699: [DR-DSDS] MPDB: Failed to send RF Request from MPDB
Line 2711: [DR-DSDS] MPDB: SearcherRelMsg == NULL pointer
Line 2711: [DR-DSDS] MPDB: SearcherRelMsg == NULL pointer
Line 2716: [DR-DSDS] MPDB:  Searcher state not in Use, so no need to send release 
Line 2716: [DR-DSDS] MPDB:  Searcher state not in Use, so no need to send release 
Line 2720: [DR-DSDS] MPDB:  Sending  Searcher Use Rel to DR mngr Interface from MPDB
Line 2720: [DR-DSDS] MPDB:  Sending  Searcher Use Rel to DR mngr Interface from MPDB
Line 2734: [DR-DSDS] MPDB:  Failed to send Searcher Request from MPDB
Line 2734: [DR-DSDS] MPDB:  Failed to send Searcher Request from MPDB
Line 2746: [DR-DSDS] MPDB: Searcher rsp received in abnornal searcher state: %d
Line 2746: [DR-DSDS] MPDB: Searcher rsp received in abnornal searcher state: %d
Line 2761: [DR-DSDS] MPDB:  MPDB Searcher Grant
Line 2761: [DR-DSDS] MPDB:  MPDB Searcher Grant
Line 2778: [DR-DSDS] MPDB: MPDB Searcher Reject
Line 2778: [DR-DSDS] MPDB: MPDB Searcher Reject
Line 2791: [DR-DSDS] MPDB: There are no messages to be processed 
Line 2791: [DR-DSDS] MPDB: There are no messages to be processed 
Line 2797: [DR-DSDS] MPDB: Unexpected DR mngr response
Line 2797: [DR-DSDS] MPDB: Unexpected DR mngr response
Line 2806: [DR-DSDS] MPDB: MPDB Searcher Pause 
Line 2806: [DR-DSDS] MPDB: MPDB Searcher Pause 
Line 2842: [DR-DSDS] MPDB: MPDB Handle Measurements, meastype %d 
Line 2842: [DR-DSDS] MPDB: MPDB Handle Measurements, meastype %d 
Line 2892:  [DR-DSDS] MPDB:  MPDB UpdateDatabase finds NULL cellData
Line 2892:  [DR-DSDS] MPDB:  MPDB UpdateDatabase finds NULL cellData
Line 2897: [DR-DSDS] MPDB: MPDB UpdateDatabase has NO Active Cells
Line 2897: [DR-DSDS] MPDB: MPDB UpdateDatabase has NO Active Cells
Line 2910: [DR-DSDS] MPDB: MPDB UpdateDatabase has NO Identified Active Cells
Line 2910: [DR-DSDS] MPDB: MPDB UpdateDatabase has NO Identified Active Cells
Line 2924: [DR-DSDS] MPDB: MPDB UpdateDatabase has NO NonIdentified Active Cells
Line 2924: [DR-DSDS] MPDB: MPDB UpdateDatabase has NO NonIdentified Active Cells
Line 2937: [DR-DSDS] MPDB: uphy_CMeasurementResources_queueMessage:msgDeadlineListInfo == NULL pointer
Line 2937: [DR-DSDS] MPDB: uphy_CMeasurementResources_queueMessage:msgDeadlineListInfo == NULL pointer
Line 2963: [DR-DSDS] MPDB: uphy_CMultiPathDB_queueMessage: Number of Queued Msgs:  %d meastype %d
Line 2963: [DR-DSDS] MPDB: uphy_CMultiPathDB_queueMessage: Number of Queued Msgs:  %d meastype %d
Line 3005: [DR-DSDS] MPDB: CMultiPathDB: Number of Queued Msgs:  %d
Line 3005: [DR-DSDS] MPDB: CMultiPathDB: Number of Queued Msgs:  %d
Line 3033: [DR-DSDS] MPDB: uphy_CMeasurementResources_resetMessageQueue: Flushes queue msg ScrId: %d MsgId: %d
Line 3033: [DR-DSDS] MPDB: uphy_CMeasurementResources_resetMessageQueue: Flushes queue msg ScrId: %d MsgId: %d
Line 3062: [DR-DSDS] MPDB:  No of elements in queue: %d, unqueue for meas type %d
Line 3062: [DR-DSDS] MPDB:  No of elements in queue: %d, unqueue for meas type %d
Line 249:   multiPathDatabaseUpdatingUtility_ptr->updatingToken = NULL
Line 249:   multiPathDatabaseUpdatingUtility_ptr->updatingToken = NULL
Line 518:   MPDB UpdateDatabase commencing new refresh cycle with %d outstanding requests
Line 518:   MPDB UpdateDatabase commencing new refresh cycle with %d outstanding requests
Line 570:   MPDB UpdateDatabase finds NULL cellData
Line 570:   MPDB UpdateDatabase finds NULL cellData
Line 575: MPDB UpdateDatabase has NO Active Cells
Line 575: MPDB UpdateDatabase has NO Active Cells
Line 588: MPDB UpdateDatabase has NO Identified Active Cells
Line 588: MPDB UpdateDatabase has NO Identified Active Cells
Line 609: MPDB UpdateDatabase not enabled
Line 609: MPDB UpdateDatabase not enabled
Line 625: MPDB UpdateDatabase single shot token complete
Line 625: MPDB UpdateDatabase single shot token complete
Line 633: MPDB UpdateDatabase CFN %d is compressed. Token will be submitted in the next frame
Line 633: MPDB UpdateDatabase CFN %d is compressed. Token will be submitted in the next frame
Line 638: MPDB UpdateDatabase CFN %d is in FMO. Token will be submitted in the next frame
Line 638: MPDB UpdateDatabase CFN %d is in FMO. Token will be submitted in the next frame
Line 649: MPDB UpdateDatabase single shot token complete
Line 649: MPDB UpdateDatabase single shot token complete
Line 410: uphy_CMultiPathDatabaseUpdatingUtility_GroupCellSynchroniserFree: Free GroupCellSynchroniser[%d] %d groupCellSynchroniserId=%d nGroupCellSynchronisers[0]=%d
Line 410: uphy_CMultiPathDatabaseUpdatingUtility_GroupCellSynchroniserFree: Free GroupCellSynchroniser[%d] %d groupCellSynchroniserId=%d nGroupCellSynchronisers[0]=%d
Line 418:   uphy_CMultiPathDatabaseUpdatingUtility_GroupCellSynchroniserFree: theGroupCellSynchronisers[%d]->requestMsg = NULL
Line 418:   uphy_CMultiPathDatabaseUpdatingUtility_GroupCellSynchroniserFree: theGroupCellSynchronisers[%d]->requestMsg = NULL
Line 1395:  MPDB EUphyMultipathMgmtMsgId_GroupCpichMultipathCompleted Resync is for serving
Line 1395:  MPDB EUphyMultipathMgmtMsgId_GroupCpichMultipathCompleted Resync is for serving
Line 1408:  MPDB EUphyMultipathMgmtMsgId_GroupCellSynchroCompleted Resync is for serving
Line 1408:  MPDB EUphyMultipathMgmtMsgId_GroupCellSynchroCompleted Resync is for serving
Line 1416: uphy_CMultiPathDatabaseUpdatingUtility_IsResyncIndForServing: Config Msg is NULL
Line 1416: uphy_CMultiPathDatabaseUpdatingUtility_IsResyncIndForServing: Config Msg is NULL
Line 1457:   cpichMultiPathReqMessage == NULL pointer
Line 1457:   cpichMultiPathReqMessage == NULL pointer
Line 1520: MPDB SubmitCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 1520: MPDB SubmitCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 1531:   unable to send Cpich MultiPath Req Message
Line 1531:   unable to send Cpich MultiPath Req Message
Line 1538: MPDB multi-path request for [%d, %d]; currently %d outstanding requests.
Line 1538: MPDB multi-path request for [%d, %d]; currently %d outstanding requests.
Line 1616:  MPDB Cfn %d Sfn %d: Timeout on uarfcn %d primary scr code %d; %d outstanding requests
Line 1616:  MPDB Cfn %d Sfn %d: Timeout on uarfcn %d primary scr code %d; %d outstanding requests
Line 1623: S0 MPDB timeOutCnt=%d 
Line 1627: S0 MPDB Clear OutstandingReq  timeOutCnt=%d
Line 1791:   stoppedMsg == NULL pointer
Line 1791:   stoppedMsg == NULL pointer
Line 1805:   startedMsg == NULL pointer
Line 1805:   startedMsg == NULL pointer
Line 1814: uphy_CMultiPathDatabaseUpdatingUtility_SendConfirmationMsg with unrecongniosed MsgId to confirm
Line 1814: uphy_CMultiPathDatabaseUpdatingUtility_SendConfirmationMsg with unrecongniosed MsgId to confirm
Line 1836:   Cant send Cnf
Line 1836:   Cant send Cnf
Line 1987:   cpichGroupMultiPathReqMessage == NULL pointer
Line 1987:   cpichGroupMultiPathReqMessage == NULL pointer
Line 2034: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2034: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2043: MPDB SubmitGroupCellSynchroRequestForBPLMNBchCell : isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d
Line 2043: MPDB SubmitGroupCellSynchroRequestForBPLMNBchCell : isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d
Line 2050:   MPDB UpdateDatabase finds NULL cellInformation
Line 2050:   MPDB UpdateDatabase finds NULL cellInformation
Line 2077:   unable to send Group Cpich MultiPath Req Message
Line 2077:   unable to send Group Cpich MultiPath Req Message
Line 2090: MPDB GroupCpichMultipathRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d, Outstanding requests=%d)
Line 2090: MPDB GroupCpichMultipathRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d, Outstanding requests=%d)
Line 2094:   uphy_CMultiPathDatabaseUpdatingUtility_SubmitGroupCpichMultipathRequest: cellData=NULL
Line 2094:   uphy_CMultiPathDatabaseUpdatingUtility_SubmitGroupCpichMultipathRequest: cellData=NULL
Line 2135:   GroupCellSynchroReqMsg == NULL pointer
Line 2135:   GroupCellSynchroReqMsg == NULL pointer
Line 2169:   MPDB UpdateDatabase finds NULL cellInformation
Line 2169:   MPDB UpdateDatabase finds NULL cellInformation
Line 2193:   Unable to send GroupCellSynchroReqMsg
Line 2193:   Unable to send GroupCellSynchroReqMsg
Line 2203: MPDB SubmitGroupCellSynchroRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d)
Line 2203: MPDB SubmitGroupCellSynchroRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d)
Line 2611: uphy_CMultiPathDatabaseUpdatingUtility_CancelTimeoutToken(UARFCN =%d, primaryScrCode=%d)
Line 2611: uphy_CMultiPathDatabaseUpdatingUtility_CancelTimeoutToken(UARFCN =%d, primaryScrCode=%d)
Line 1878:   uhal command exec failed
Line 1878:   uhal command exec failed
Line 1889: Finger %d(fingersStr 0x%x) is locked for uarfcn=%d, primaryScrCode=%d
Line 1889: Finger %d(fingersStr 0x%x) is locked for uarfcn=%d, primaryScrCode=%d
Line 1896: No finger(fingersStr 0x%x) is locked for uarfcn=%d, primaryScrCode=%d
Line 1896: No finger(fingersStr 0x%x) is locked for uarfcn=%d, primaryScrCode=%d
Line 1902: uphy_CMultiPathDatabaseUpdatingUtility_isLockedFinger cannot locate pScrCode %d in mapping table
Line 1902: uphy_CMultiPathDatabaseUpdatingUtility_isLockedFinger cannot locate pScrCode %d in mapping table
Line 2253:   cpichGroupMultiPathReqMessage == NULL pointer
Line 2253:   cpichGroupMultiPathReqMessage == NULL pointer
Line 2295:   uphy_CMultiPathDatabaseUpdatingUtility_SubmitGroupCpichMultipathRequest: Overriding MP searcher Frame offset(%d) with Finger Table MCD(%d)
Line 2295:   uphy_CMultiPathDatabaseUpdatingUtility_SubmitGroupCpichMultipathRequest: Overriding MP searcher Frame offset(%d) with Finger Table MCD(%d)
Line 2301: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2301: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2311: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2311: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2321: MPDB SubmitGroupCpichMultipathRequest without Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2321: MPDB SubmitGroupCpichMultipathRequest without Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2364: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2364: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2374: MPDB SubmitGroupCpichMultipathRequest without Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2374: MPDB SubmitGroupCpichMultipathRequest without Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2410:   unable to send Group Cpich MultiPath Req Message
Line 2410:   unable to send Group Cpich MultiPath Req Message
Line 2423: MPDB GroupCpichMultipathRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d, Outstanding requests=%d)
Line 2423: MPDB GroupCpichMultipathRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d, Outstanding requests=%d)
Line 2427:   uphy_CMultiPathDatabaseUpdatingUtility_SubmitGroupCpichMultipathRequest: cellData=NULL
Line 2427:   uphy_CMultiPathDatabaseUpdatingUtility_SubmitGroupCpichMultipathRequest: cellData=NULL
Line 2438: MPDB - The number of identified group cells is miscalculated
Line 2438: MPDB - The number of identified group cells is miscalculated
Line 2468:   GroupCellSynchroReqMsg == NULL pointer
Line 2468:   GroupCellSynchroReqMsg == NULL pointer
Line 2520: MPDB no multiPathInfo and locked finger found for uarfcn=%d, primaryScrCode=%d
Line 2520: MPDB no multiPathInfo and locked finger found for uarfcn=%d, primaryScrCode=%d
Line 2527:   MPDB UpdateDatabase finds NULL cellData
Line 2527:   MPDB UpdateDatabase finds NULL cellData
Line 2551:   Unable to send GroupCellSynchroReqMsg
Line 2551:   Unable to send GroupCellSynchroReqMsg
Line 2561: MPDB SubmitGroupCellSynchroRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d)
Line 2561: MPDB SubmitGroupCellSynchroRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d)
Line 2567:  The number of nonidentified group cells is miscalculated (Past=%d, Now=%d)
Line 2567:  The number of nonidentified group cells is miscalculated (Past=%d, Now=%d)
