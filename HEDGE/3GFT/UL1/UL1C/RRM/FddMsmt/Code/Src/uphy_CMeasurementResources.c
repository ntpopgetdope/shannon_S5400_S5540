Line 444: Instance created for stackId %d
Line 444: Instance created for stackId %d
Line 1123: [U2L TimeInfo] eutraCellSearchDataBase 0x%x eutraMeasureDataBase 0x%x
Line 1123: [U2L TimeInfo] eutraCellSearchDataBase 0x%x eutraMeasureDataBase 0x%x
Line 1130: [U2L TimeInfo] numOfEutraCellSearchManager %d numOfEutraMeasureManager %d
Line 1130: [U2L TimeInfo] numOfEutraCellSearchManager %d numOfEutraMeasureManager %d
Line 1148: [U2L TimeInfo] Cell search manager freqIndex %d cellIndex %d earfcn %d Numfoundcells %d cellId %d earfcn %d frPosition %d
Line 1148: [U2L TimeInfo] Cell search manager freqIndex %d cellIndex %d earfcn %d Numfoundcells %d cellId %d earfcn %d frPosition %d
Line 1161: [U2L TimeInfo] eutraMeasureManager 0x%x numOfEutraMeasureManager %d
Line 1161: [U2L TimeInfo] eutraMeasureManager 0x%x numOfEutraMeasureManager %d
Line 1182: [U2L TimeInfo] Measure manager cellIndex %d frPosition %d cellId %d earfcn %d Umts SFN %d Eutra SFN %d
Line 1182: [U2L TimeInfo] Measure manager cellIndex %d frPosition %d cellId %d earfcn %d Umts SFN %d Eutra SFN %d
Line 1186: Memory Allocation Failed - eutraMeasureDataBase[i].EutraCellManager.cellInfo
Line 1186: Memory Allocation Failed - eutraMeasureDataBase[i].EutraCellManager.cellInfo
Line 1296:   [E-DRX Measurement] uphy_CMeasurementResources_isEdrxState: %d
Line 1296:   [E-DRX Measurement] uphy_CMeasurementResources_isEdrxState: %d
Line 3559:   Measurement state update: from Drx / allMsmtSuspension to NoChannel
Line 3559:   Measurement state update: from Drx / allMsmtSuspension to NoChannel
Line 3601:   Suspend All Measurements
Line 3601:   Suspend All Measurements
Line 3636:   uphy_CMeasurementResources_phyChStateTransition: fach not configured
Line 3636:   uphy_CMeasurementResources_phyChStateTransition: fach not configured
Line 3639:   isHsConfiguredInCellFach = %d
Line 3639:   isHsConfiguredInCellFach = %d
Line 3683:   uphy_CMeasurementResources_phyChStateTransition: fach not configured
Line 3683:   uphy_CMeasurementResources_phyChStateTransition: fach not configured
Line 3771:   No periodic reporting!!!
Line 3771:   No periodic reporting!!!
Line 3784:   WARNING!! midconfig counter (%d) is bigger than the array size (flag)!!
Line 3784:   WARNING!! midconfig counter (%d) is bigger than the array size (flag)!!
Line 3787:   Clear RACH measurement (mid = %d)
Line 3787:   Clear RACH measurement (mid = %d)
Line 3828:   Unknown phyChState=%d
Line 3828:   Unknown phyChState=%d
Line 3899:   compressedModeStatusInfoReq->payload.tgpsStatusInfoArray is NULL
Line 3899:   compressedModeStatusInfoReq->payload.tgpsStatusInfoArray is NULL
Line 3904:    createAndSend_CompressedModeStatusInfoReq: send failed
Line 3904:    createAndSend_CompressedModeStatusInfoReq: send failed
Line 3911:   compressedModeStatusInfoReq is NULL
Line 3911:   compressedModeStatusInfoReq is NULL
Line 3932: notifyControllerPending controllerType=%d
Line 3932: notifyControllerPending controllerType=%d
Line 3968:   notifyControllerPending type=%d
Line 3968:   notifyControllerPending type=%d
Line 3995:   notifyControllerDone controllerType=%d
Line 3995:   notifyControllerDone controllerType=%d
Line 4047:   notifyControllerDone type=%d
Line 4047:   notifyControllerDone type=%d
Line 4072:   IntraFreqCellReselMsmt outstanding request (%d, %d)
Line 4072:   IntraFreqCellReselMsmt outstanding request (%d, %d)
Line 4088:   InterFreqCellReselMsmt outstanding request (%d)
Line 4088:   InterFreqCellReselMsmt outstanding request (%d)
Line 4103:   GsmCellReselMsmt outstanding request (%d)
Line 4103:   GsmCellReselMsmt outstanding request (%d)
Line 4119:   EutraCellReselMsmt outstanding request (%d)
Line 4119:   EutraCellReselMsmt outstanding request (%d)
Line 4133:   Dont use this function in general!!!
Line 4133:   Dont use this function in general!!!
Line 4151: Best cell change: reference cell changed to rlNr=%d, PSC=%d
Line 4151: Best cell change: reference cell changed to rlNr=%d, PSC=%d
Line 4161: RlReferenceConfigCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 4161: RlReferenceConfigCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 4177: Unable to set a new reference cell in MPDB: rlNr=%d, PSC=%d
Line 4177: Unable to set a new reference cell in MPDB: rlNr=%d, PSC=%d
Line 4195: Update Framework SFN: oldSfn=%d, newSfn=%d
Line 4195: Update Framework SFN: oldSfn=%d, newSfn=%d
Line 4227: Unable to find the radio link for the cell %d at MappingDatabase
Line 4227: Unable to find the radio link for the cell %d at MappingDatabase
Line 4232: Unable to find the the cell %d in the activeSet
Line 4232: Unable to find the the cell %d in the activeSet
Line 4300:   [DSDS] rfReqCnts: %d
Line 4300:   [DSDS] rfReqCnts: %d
Line 4303: [DSDS] UMTS Meas. - Sending RF Release Request to DSLRC Interface
Line 4303: [DSDS] UMTS Meas. - Sending RF Release Request to DSLRC Interface
Line 4308:   [DSDS] UMTS Meas. - rfUseRelMsg == NULL pointer
Line 4308:   [DSDS] UMTS Meas. - rfUseRelMsg == NULL pointer
Line 4323:   [DSDS] UMTS Meas. - Failed to send RF Release
Line 4323:   [DSDS] UMTS Meas. - Failed to send RF Release
Line 4328:   uphy_CMeasurementResources_releaseRf: Can't Release RF! RF still in use
Line 4328:   uphy_CMeasurementResources_releaseRf: Can't Release RF! RF still in use
Line 4351: [DSDS] UMTS Meas. - Num. of max. retries exceeded for RfRequest. Freeing Measurement.
Line 4351: [DSDS] UMTS Meas. - Num. of max. retries exceeded for RfRequest. Freeing Measurement.
Line 4365: [DSDS] UMTS Meas. - No midserver found
Line 4365: [DSDS] UMTS Meas. - No midserver found
Line 4384:  [DSDS] UMTS Meas. - No midserver found
Line 4384:  [DSDS] UMTS Meas. - No midserver found
Line 4635:   uphy_CMeasurementResources_sendDirectRfRequest: requestDslrcRfAccess sent to DSLRC interface from %d with cause %d and time %d
Line 4635:   uphy_CMeasurementResources_sendDirectRfRequest: requestDslrcRfAccess sent to DSLRC interface from %d with cause %d and time %d
Line 4644:   [DSDS] rfReqCnts: %d
Line 4644:   [DSDS] rfReqCnts: %d
Line 4657:   [DSDS] Direct RF rel: rfReqCnts: %d
Line 4657:   [DSDS] Direct RF rel: rfReqCnts: %d
Line 4660: [DSDS] UMTS Meas. - Sending Direct RF Release Request to DSLRC Interface
Line 4660: [DSDS] UMTS Meas. - Sending Direct RF Release Request to DSLRC Interface
Line 4665:   [DSDS] UMTS Meas. -Direct rfUseRelMsg == NULL pointer
Line 4665:   [DSDS] UMTS Meas. -Direct rfUseRelMsg == NULL pointer
Line 4679:   uphy_CMeasurementResources_sendDirectRfUseRelReq: RFrelreq sent to DSLRC interface from %d 
Line 4679:   uphy_CMeasurementResources_sendDirectRfUseRelReq: RFrelreq sent to DSLRC interface from %d 
Line 4686:   uphy_CMeasurementResources_sendDirectRfUseRelReq: Can't Release RF! RF still in use
Line 4686:   uphy_CMeasurementResources_sendDirectRfUseRelReq: Can't Release RF! RF still in use
Line 4699: [DR-DSDS] DCH Meas: measSearcherReqMsg == NULL pointer
Line 4699: [DR-DSDS] DCH Meas: measSearcherReqMsg == NULL pointer
Line 4714: [DR-DSDS] DCH Meas:  searcher use req for msmt type %d
Line 4714: [DR-DSDS] DCH Meas:  searcher use req for msmt type %d
Line 4720: [DR-DSDS] DCH Meas: Searcher is already in use, so use directly
Line 4720: [DR-DSDS] DCH Meas: Searcher is already in use, so use directly
Line 4725: [DR-DSDS] DCH Meas: Searcher is in requested state
Line 4725: [DR-DSDS] DCH Meas: Searcher is in requested state
Line 4749: [DR-DSDS] DCH Meas: Failed to send Searcher Request
Line 4749: [DR-DSDS] DCH Meas: Failed to send Searcher Request
Line 4761: [DR-DSDS] DCH Meas:  Searcher rsp received in abnornal searcher state: %d
Line 4761: [DR-DSDS] DCH Meas:  Searcher rsp received in abnornal searcher state: %d
Line 4774: [DR-DSDS] DCH Meas: Searcher Grant
Line 4774: [DR-DSDS] DCH Meas: Searcher Grant
Line 4791: [DR-DSDS] DCH Meas: Searcher Reject
Line 4791: [DR-DSDS] DCH Meas: Searcher Reject
Line 4803: [DR-DSDS] DCH Meas: There are no Objects
Line 4803: [DR-DSDS] DCH Meas: There are no Objects
Line 4809: [DR-DSDS] DCH Meas: There are no messages to be processed 
Line 4809: [DR-DSDS] DCH Meas: There are no messages to be processed 
Line 4815: [DR-DSDS] DCH Meas: Unexpected DR mngr response
Line 4815: [DR-DSDS] DCH Meas: Unexpected DR mngr response
Line 4830: [DR-DSDS] DCH Meas:  Searcher Pause 
Line 4830: [DR-DSDS] DCH Meas:  Searcher Pause 
Line 4843: [DR-DSDS] DCH Meas: mid=%d, requestType=%d pending clear
Line 4843: [DR-DSDS] DCH Meas: mid=%d, requestType=%d pending clear
Line 4857: [DR-DSDS] DCH Meas:  No midserver found
Line 4857: [DR-DSDS] DCH Meas:  No midserver found
Line 4869: [DR-DSDS] DCH Meas: SearcherRelMsg == NULL pointer
Line 4869: [DR-DSDS] DCH Meas: SearcherRelMsg == NULL pointer
Line 4874: [DR-DSDS] DCH Meas:  Searcher state not in Use, so no need to send release
Line 4874: [DR-DSDS] DCH Meas:  Searcher state not in Use, so no need to send release
Line 4878: [DR-DSDS] DCH Meas:   Sending Searcher Use Rel to DR mngr Interface
Line 4878: [DR-DSDS] DCH Meas:   Sending Searcher Use Rel to DR mngr Interface
Line 4892: [DR-DSDS] DCH Meas:  Failed to send searcher Request
Line 4892: [DR-DSDS] DCH Meas:  Failed to send searcher Request
Line 4905: [DR-DSDS] DCH Meas: uphy_CMeasurementResources_queueMessage:msgDeadlineListInfo == NULL pointer
Line 4905: [DR-DSDS] DCH Meas: uphy_CMeasurementResources_queueMessage:msgDeadlineListInfo == NULL pointer
Line 4931: [DR-DSDS] DCH Meas: uphy_CMeasurementResources_queueMessage: Number of Queued Msgs:  %d meastype %d
Line 4931: [DR-DSDS] DCH Meas: uphy_CMeasurementResources_queueMessage: Number of Queued Msgs:  %d meastype %d
Line 4966: [DR-DSDS] DCH Meas: uphy_CMeasurementResources_processQueuedMessage: Number of Queued Msgs:  %d  meastype %d
Line 4966: [DR-DSDS] DCH Meas: uphy_CMeasurementResources_processQueuedMessage: Number of Queued Msgs:  %d  meastype %d
Line 4989: [DR-DSDS] DCH Meas: uphy_CMeasurementResources_resetMessageQueue: Flushes queue msg ScrId: %d MsgId: %d 
Line 4989: [DR-DSDS] DCH Meas: uphy_CMeasurementResources_resetMessageQueue: Flushes queue msg ScrId: %d MsgId: %d 
Line 5021: [DR-DSDS] DCH Meas: Object deleted for meastype %d
Line 5021: [DR-DSDS] DCH Meas: Object deleted for meastype %d
Line 5028: [DR-DSDS] DCH Meas:  No of elements in queue= %d 
Line 5028: [DR-DSDS] DCH Meas:  No of elements in queue= %d 
Line 5049: [DR-DSDS] sendDRtoDSTransition : MeasurementType  %d [Done]
Line 5049: [DR-DSDS] sendDRtoDSTransition : MeasurementType  %d [Done]
Line 5054: [DR-DSDS]: measSearcherReqMsg == NULL pointer
Line 5054: [DR-DSDS]: measSearcherReqMsg == NULL pointer
Line 5068: [DR-DSDS] Failed to send DRToDSTransitionReq
Line 5068: [DR-DSDS] Failed to send DRToDSTransitionReq
Line 5119: SendReplyMessage: dest %d
Line 5119: SendReplyMessage: dest %d
Line 5147: wrong dest %d
Line 5147: wrong dest %d
Line 5266: eutraTimeReference is NULL
Line 5266: eutraTimeReference is NULL
Line 5284: Number of mid servers greater than 1 which is wrong numOfObjects %d
Line 5284: Number of mid servers greater than 1 which is wrong numOfObjects %d
Line 5338: Number of mid servers greater than 1 which is wrong numOfObjects %d
Line 5338: Number of mid servers greater than 1 which is wrong numOfObjects %d
Line 5509: Abort Request by: %d 
Line 5509: Abort Request by: %d 
Line 5517: Cancelling the eutraCellSearchToken 
Line 5517: Cancelling the eutraCellSearchToken 
Line 5523: Cancelling the eutraCellMeasureToken 
Line 5523: Cancelling the eutraCellMeasureToken 
Line 5527: Abort U2L:handle eutra abort
Line 5527: Abort U2L:handle eutra abort
Line 5535: Abort U2G
Line 5535: Abort U2G
Line 5542: Abort Inter If Any
Line 5542: Abort Inter If Any
Line 5547: Cancelling the eutraCellSearchToken 
Line 5547: Cancelling the eutraCellSearchToken 
Line 5553: Cancelling the eutraCellMeasureToken 
Line 5553: Cancelling the eutraCellMeasureToken 
Line 5575: MeasResourceController_Ptr/schedulingManager_ptr is NULL
Line 5575: MeasResourceController_Ptr/schedulingManager_ptr is NULL
Line 5597: Number of mid servers greater than 1 which is wrong numOfObjects %d
Line 5597: Number of mid servers greater than 1 which is wrong numOfObjects %d
Line 5639: Number of mid servers greater than 1 which is wrong numOfObjects %d
Line 5639: Number of mid servers greater than 1 which is wrong numOfObjects %d
Line 5675: Abort Requested in DCH
Line 5675: Abort Requested in DCH
Line 1050: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 1050: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 1100:   Invalid msgIdType=%d
Line 1100:   Invalid msgIdType=%d
Line 751:   RF ResumeAll in Measurement state == No channel
Line 751:   RF ResumeAll in Measurement state == No channel
Line 766:   RfResponse in Measurement state != No channel
Line 766:   RfResponse in Measurement state != No channel
Line 783:   RfPauseReq in Measurement state != No channel
Line 783:   RfPauseReq in Measurement state != No channel
Line 804: Buffering command is ACTIVE. Reset command and its handler.
Line 804: Buffering command is ACTIVE. Reset command and its handler.
Line 811:   Buffering command is = %x or active for other stack
Line 811:   Buffering command is = %x or active for other stack
Line 821:   RfResume in Measurement state != No channel
Line 821:   RfResume in Measurement state != No channel
Line 686:   cancelReportingAndMeasurement [mid=%d, requestType=%d]: RSN=%d - pending clear
Line 686:   cancelReportingAndMeasurement [mid=%d, requestType=%d]: RSN=%d - pending clear
Line 710:   RF Pause in Meas., NumOfObjects == 0 for meas. type = %d
Line 710:   RF Pause in Meas., NumOfObjects == 0 for meas. type = %d
Line 715:   RF SuspendAll in Measurement state == No channel
Line 715:   RF SuspendAll in Measurement state == No channel
Line 4413: [DSDS] UMTS Meas. - RF Granted
Line 4413: [DSDS] UMTS Meas. - RF Granted
Line 4426:   [DSDS] UMTS Meas. - launchAllMeasurementTriggers by config
Line 4426:   [DSDS] UMTS Meas. - launchAllMeasurementTriggers by config
Line 4431:   [DSDS] UMTS Meas. - RF Response granted, NumOfObjects == 0 to launch measurements
Line 4431:   [DSDS] UMTS Meas. - RF Response granted, NumOfObjects == 0 to launch measurements
Line 4435:   [DSDS] rfReqCnts: %d
Line 4435:   [DSDS] rfReqCnts: %d
Line 4444: token submit when modem off
Line 4444: token submit when modem off
Line 4449: [DSDS] UMTS Meas. - RF rejected. Count = %d
Line 4449: [DSDS] UMTS Meas. - RF rejected. Count = %d
Line 4466:   [DSDS] UMTS Meas. - Invalid DSLRC response for RF Request
Line 4466:   [DSDS] UMTS Meas. - Invalid DSLRC response for RF Request
Line 4471:   [DSDS] UMTS Meas. -already released ignore response
Line 4471:   [DSDS] UMTS Meas. -already released ignore response
Line 4267:   [DSDS] UMTS Meas. - rfUseReqMsg == NULL pointer
Line 4267:   [DSDS] UMTS Meas. - rfUseReqMsg == NULL pointer
Line 4271: [DSDS] UMTS Meas. - Sending RF Use Request to DSLRC Interface
Line 4271: [DSDS] UMTS Meas. - Sending RF Use Request to DSLRC Interface
Line 4286:   [DSDS] UMTS Meas. - Failed to send RF Request
Line 4286:   [DSDS] UMTS Meas. - Failed to send RF Request
Line 4494:   [DSDS] UMTS Meas. - No midserver found
Line 4494:   [DSDS] UMTS Meas. - No midserver found
Line 4500:   [DSDS] UMTS Meas. - No midserver found
Line 4500:   [DSDS] UMTS Meas. - No midserver found
Line 4506: [DSDS] UMTS Meas. - Received RF short pause. Suspending measurements.
Line 4506: [DSDS] UMTS Meas. - Received RF short pause. Suspending measurements.
Line 4515: [DSDS] UMTS Meas. - Sending RF use short pause CNF.
Line 4515: [DSDS] UMTS Meas. - Sending RF use short pause CNF.
Line 4528:   [DSDS] UMTS Meas. - Failed to send RF pause CNF.
Line 4528:   [DSDS] UMTS Meas. - Failed to send RF pause CNF.
Line 4535: [DSDS] UMTS Meas. - Received RF long pause. Freeing Measurement.
Line 4535: [DSDS] UMTS Meas. - Received RF long pause. Freeing Measurement.
Line 4544: [DSDS] UMTS Meas. - Sending RF use long pause CNF.
Line 4544: [DSDS] UMTS Meas. - Sending RF use long pause CNF.
Line 4557:   [DSDS] UMTS Meas. - Failed to send RF pause CNF.
Line 4557:   [DSDS] UMTS Meas. - Failed to send RF pause CNF.
Line 4588: [DSDS] UMTS Meas. - RF Resumed.
Line 4588: [DSDS] UMTS Meas. - RF Resumed.
Line 4600: [DSDS] UMTS Meas. - launchAllMeasurementTriggers by resume.
Line 4600: [DSDS] UMTS Meas. - launchAllMeasurementTriggers by resume.
Line 4605:   [DSDS] UMTS Meas. - RF Response, NumOfObjects == 0
Line 4605:   [DSDS] UMTS Meas. - RF Response, NumOfObjects == 0
Line 4610:   [DSDS] UMTS Meas. - Measurement already released. Don't trigger again.
Line 4610:   [DSDS] UMTS Meas. - Measurement already released. Don't trigger again.
Line 875:   DR srch response in wrong state
Line 875:   DR srch response in wrong state
Line 899: [DSDS] UMTS Meas. - Positive DRToDSTransitionCnf Submit any pending measurements.
Line 899: [DSDS] UMTS Meas. - Positive DRToDSTransitionCnf Submit any pending measurements.
Line 921: [DR-DSDS] Handle Inter Freq Measurements-ReqType: %d
Line 921: [DR-DSDS] Handle Inter Freq Measurements-ReqType: %d
Line 941: [DSDS] UMTS Meas. - Negative DRToDSTransitionCnf Suspending measurements.
Line 941: [DSDS] UMTS Meas. - Negative DRToDSTransitionCnf Suspending measurements.
Line 957:   InterFreqCellReselMsmt outstanding request (%d)
Line 957:   InterFreqCellReselMsmt outstanding request (%d)
Line 972:   cancelReportingAndMeasurement [mid=%d, requestType=%d]: RSN=%d - pending clear
Line 972:   cancelReportingAndMeasurement [mid=%d, requestType=%d]: RSN=%d - pending clear
Line 1004: Wrong State!! Send Dummy Abort CNF
Line 1004: Wrong State!! Send Dummy Abort CNF
Line 1716:   measurement release [midConfigCount = %d, measurementType = %d, controllerIndex = %d]
Line 1716:   measurement release [midConfigCount = %d, measurementType = %d, controllerIndex = %d]
Line 1759: (FACH) Inter freq measurement Release : schedulingManager_ptr->fachGapToken set to NULL
Line 1759: (FACH) Inter freq measurement Release : schedulingManager_ptr->fachGapToken set to NULL
Line 1801:   confirmMsg send failure
Line 1801:   confirmMsg send failure
Line 1810:   Resume cell reselection measurements
Line 1810:   Resume cell reselection measurements
Line 1330:   GSM measurement release: isUtranQualityEstimateMeasurement = %d
Line 1330:   GSM measurement release: isUtranQualityEstimateMeasurement = %d
Line 1350:   IRAT UTRAN measurement release [utranMsmtMid=%d, midConfigCount = %d, measurementType = %d, controllerIndex = %d]
Line 1350:   IRAT UTRAN measurement release [utranMsmtMid=%d, midConfigCount = %d, measurementType = %d, controllerIndex = %d]
Line 1364:   WARNING!! midconfig counter (%d) is bigger than the array size (flag)!!
Line 1364:   WARNING!! midconfig counter (%d) is bigger than the array size (flag)!!
Line 1388:   IRAT UTRAN measurement release: utranMsmtMidServer==NULL pointer
Line 1388:   IRAT UTRAN measurement release: utranMsmtMidServer==NULL pointer
Line 1410:   EUTRA measurement release: isUtranQualityEstimateMeasurement = %d
Line 1410:   EUTRA measurement release: isUtranQualityEstimateMeasurement = %d
Line 1429:   IRAT UTRAN measurement release [utranMsmtMid=%d, midConfigCount = %d, measurementType = %d, controllerIndex = %d]
Line 1429:   IRAT UTRAN measurement release [utranMsmtMid=%d, midConfigCount = %d, measurementType = %d, controllerIndex = %d]
Line 1443:   WARNING!! midconfig counter (%d) is bigger than the array size (flag)!!
Line 1443:   WARNING!! midconfig counter (%d) is bigger than the array size (flag)!!
Line 1459:   IRAT UTRAN measurement release: utranMsmtMidServer==NULL pointer
Line 1459:   IRAT UTRAN measurement release: utranMsmtMidServer==NULL pointer
Line 1647:   [IRAT U2G] GsmCellReselectionMsmt[MID %d] has %d outstandingRequests. Postpone release request.
Line 1647:   [IRAT U2G] GsmCellReselectionMsmt[MID %d] has %d outstandingRequests. Postpone release request.
Line 1658:   processMeasurementRelease: isGapOver %d gphy_Getx2GIratMeasureOngoing %d gphy_GetRestrictGsmOff %d 
Line 1658:   processMeasurementRelease: isGapOver %d gphy_Getx2GIratMeasureOngoing %d gphy_GetRestrictGsmOff %d 
Line 1622:   WARNING!! midconfig counter (%d) is bigger than the array size (flag)!!
Line 1622:   WARNING!! midconfig counter (%d) is bigger than the array size (flag)!!
Line 1556:   delete midServer
Line 1556:   delete midServer
Line 492:   [IRAT U2G] GsmCellReselectionMsmt has %d outstandingRequests. Postpone release request.
Line 492:   [IRAT U2G] GsmCellReselectionMsmt has %d outstandingRequests. Postpone release request.
Line 514: [IRAT U2G] GsmCellReselectionMsmt complete. outstandingGsmCellReselMsmtRequests=%d, Emodem_status=%d
Line 514: [IRAT U2G] GsmCellReselectionMsmt complete. outstandingGsmCellReselMsmtRequests=%d, Emodem_status=%d
Line 518:   confirmMsg send failure
Line 518:   confirmMsg send failure
Line 523:   [IRAT U2G] uphyGsmCellReselMeasurementReleaseSTF: How server meanwhile disappeared
Line 523:   [IRAT U2G] uphyGsmCellReselMeasurementReleaseSTF: How server meanwhile disappeared
Line 1234: [U2L TimeInfo] i %d j %d CellId %d earfcn %d cp type %d
Line 1234: [U2L TimeInfo] i %d j %d CellId %d earfcn %d cp type %d
Line 1240:   no intraFreqMeasurementMidServer is configured
Line 1240:   no intraFreqMeasurementMidServer is configured
Line 1255: [U2L TimeInfo] isU2LHHO_TakingPlace %d message 0x%x midServer 0x%x TID 0x%x
Line 1255: [U2L TimeInfo] isU2LHHO_TakingPlace %d message 0x%x midServer 0x%x TID 0x%x
Line 1272: [U2L TimeInfo] eutraCellSearchDataBase 0x%x eutraMeasureDataBase 0x%x
Line 1272: [U2L TimeInfo] eutraCellSearchDataBase 0x%x eutraMeasureDataBase 0x%x
Line 1276: ### Error memory is not allocacted
Line 1276: ### Error memory is not allocacted
Line 1844:   measurement release [midConfigCount = %d, measurementType = %d, controllerIndex = %d]
Line 1844:   measurement release [midConfigCount = %d, measurementType = %d, controllerIndex = %d]
Line 1857:   [IRAT U2G] GsmCellReselectionMsmt has %d outstandingRequests. Postpone release request.
Line 1857:   [IRAT U2G] GsmCellReselectionMsmt has %d outstandingRequests. Postpone release request.
Line 1951:   releaseAllCnfMsg send failure
Line 1951:   releaseAllCnfMsg send failure
Line 1957:   releaseAllCnfMsg is NULL
Line 1957:   releaseAllCnfMsg is NULL
Line 575:   releaseAllCnfMsg is NULL !!!
Line 592:   [IRAT U2G] GsmCellReselectionMsmt has %d outstandingRequests. Postpone release request.
Line 592:   [IRAT U2G] GsmCellReselectionMsmt has %d outstandingRequests. Postpone release request.
Line 612:   [IRAT U2G] GsmCellReselectionMsmt complete. outstandingGsmCellReselMsmtRequests=%d, Emodem_status=%d
Line 612:   [IRAT U2G] GsmCellReselectionMsmt complete. outstandingGsmCellReselMsmtRequests=%d, Emodem_status=%d
Line 629:   releaseAllCnfMsg send failure
Line 629:   releaseAllCnfMsg send failure
Line 2029:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2029:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2042:   More than one midserver with different MIDs for same measurement cannot exist!!! 
Line 2042:   More than one midserver with different MIDs for same measurement cannot exist!!! 
Line 2050:   Unknown measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2050:   Unknown measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2063:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2063:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2079:   Unknown measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2079:   Unknown measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2092:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2092:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2103:   Unknown measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2103:   Unknown measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2115:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2115:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2127:   Unknown measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2127:   Unknown measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2139:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2139:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2159:   Unknown measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2159:   Unknown measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2171:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2171:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2189:   Unknown measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2189:   Unknown measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2201:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2201:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2213:   Unknown measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2213:   Unknown measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2226:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2226:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2241:   Unknown measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2241:   Unknown measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2254:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2254:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2268:   Unknown measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2268:   Unknown measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2280:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2280:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2285:   confirmMsg send failure
Line 2285:   confirmMsg send failure
Line 2301:  [IRAT U2L] midServer [%d] is configured for Evaluation
Line 2301:  [IRAT U2L] midServer [%d] is configured for Evaluation
Line 2306:  More than one midserver with different MIDs for same measurement cannot exist!!! 
Line 2306:  More than one midserver with different MIDs for same measurement cannot exist!!! 
Line 2316:   midServer is NULL !!!
Line 2316:   midServer is NULL !!!
Line 2332:   Unknown measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2332:   Unknown measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2346:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2346:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2359:   Unknown measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2359:   Unknown measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2367:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2367:   Not supported measurementType=%d in measurementState=%d(NoCh/Drx/Fach/Dch/Suspending)
Line 2377:   send confirm Msg
Line 2377:   send confirm Msg
Line 2649:   [midServer %d midConfigCounter %d]
Line 2649:   [midServer %d midConfigCounter %d]
Line 2598:   WARNING!! midconfig counter (%d) is bigger than the array size (flag)!!
Line 2598:   WARNING!! midconfig counter (%d) is bigger than the array size (flag)!!
Line 2601:   [midServer(%d,%d) midConfigCounter %d]
Line 2601:   [midServer(%d,%d) midConfigCounter %d]
Line 2605:   EUphyMeasurementMidType_Config: mServer is NULL
Line 2605:   EUphyMeasurementMidType_Config: mServer is NULL
Line 2676:   confirmMsg send failure
Line 2676:   confirmMsg send failure
Line 2702:   midServer [%d] is configured for Evaluation
Line 2702:   midServer [%d] is configured for Evaluation
Line 2708:   Suspend cell reselection measurements
Line 2708:   Suspend cell reselection measurements
Line 2722:   midServer==0
Line 2722:   midServer==0
Line 2747:   InterFreq measurement but UE did not camp to any frequency
Line 2747:   InterFreq measurement but UE did not camp to any frequency
Line 2777:   EUphyMeasurementMidType_Config: midServer is NULL
Line 2777:   EUphyMeasurementMidType_Config: midServer is NULL
Line 2804:   midServer is NULL !!!
Line 2804:   midServer is NULL !!!
Line 2833:   midServer is NULL !!!
Line 2833:   midServer is NULL !!!
Line 2861:   midServer is NULL !!!
Line 2861:   midServer is NULL !!!
Line 2885:   InterFreq Cell Reselection measurement but UE did not camp to any frequency
Line 2885:   InterFreq Cell Reselection measurement but UE did not camp to any frequency
Line 2942:   uphy_CMeasurementResources_process:InterFreqCellReselection Cellfach - fach not configured
Line 2942:   uphy_CMeasurementResources_process:InterFreqCellReselection Cellfach - fach not configured
Line 2949:   midServer==0
Line 2949:   midServer==0
Line 2975:   midServer==0
Line 2975:   midServer==0
Line 3003:   midServer is NULL !!!
Line 3003:   midServer is NULL !!!
Line 2401:   [IRAT U2G] midServer [%d] is configured for Evaluation
Line 2401:   [IRAT U2G] midServer [%d] is configured for Evaluation
Line 2406:   More than one midserver with different MIDs for same measurement cannot exist!!! 
Line 2406:   More than one midserver with different MIDs for same measurement cannot exist!!! 
Line 2414:   midServer is NULL !!!
Line 2414:   midServer is NULL !!!
Line 3035:   midServer is NULL !!!
Line 3035:   midServer is NULL !!!
Line 3065:   midServer is NULL !!!
Line 3065:   midServer is NULL !!!
Line 3091:  midServer is NULL !!!
Line 3091:  midServer is NULL !!!
Line 2438:   [IRAT U2L] midServer [%d] is configured for Evaluation
Line 2438:   [IRAT U2L] midServer [%d] is configured for Evaluation
Line 2443:   More than one midserver with different MIDs for same measurement cannot exist!!! 
Line 2443:   More than one midserver with different MIDs for same measurement cannot exist!!! 
Line 2450:   midServer is NULL !!!
Line 2450:   midServer is NULL !!!
Line 3121:   midServer is NULL !!!
Line 3121:   midServer is NULL !!!
Line 3146:   midServer is NULL !!!
Line 3146:   midServer is NULL !!!
Line 2482:   launchAllMeasurementTriggers by config
Line 2482:   launchAllMeasurementTriggers by config
Line 3173:   Modify - midServer probaly released for mid=%d
Line 3173:   Modify - midServer probaly released for mid=%d
Line 3180:   confirmMsg send failure
Line 3180:   confirmMsg send failure
Line 3217:   confirmMsg send failure
Line 3217:   confirmMsg send failure
Line 3234: MeasurementResources: Modify isPeriodicalOrEventTriggerIE=%d, isQuantitiesModifiedFlag=%d, isModifyRefRl=%d
Line 3234: MeasurementResources: Modify isPeriodicalOrEventTriggerIE=%d, isQuantitiesModifiedFlag=%d, isModifyRefRl=%d
Line 3427:   MeasurementReq parameterCheck Failed: !Asn_ra vs. Asn_ril0
Line 3427:   MeasurementReq parameterCheck Failed: !Asn_ra vs. Asn_ril0
Line 3433:   send confirm Msg
Line 3433:   send confirm Msg
Line 3466:   UmtsCellSelectionMeasurementReq parameterCheck Failed:
Line 3466:   UmtsCellSelectionMeasurementReq parameterCheck Failed:
Line 3472:   send confirm Msg
Line 3472:   send confirm Msg
Line 3511:   parameterCheck - unexpected message MsgId=%d
Line 3511:   parameterCheck - unexpected message MsgId=%d
Line 3356: Controller index=%d out of range
Line 3356: Controller index=%d out of range
Line 5383: Abort Request by: %d 
Line 5383: Abort Request by: %d 
Line 5387: Abort U2L:handle eutra abort
Line 5387: Abort U2L:handle eutra abort
Line 5394: Abort U2G
Line 5394: Abort U2G
Line 5404: Abort Inter If Any
Line 5404: Abort Inter If Any
Line 5421: Abort LTE procedure
Line 5421: Abort LTE procedure
Line 5456: Turn GSM OFF
Line 5456: Turn GSM OFF
Line 5464: IRAT ABORT CNF is sent
Line 5464: IRAT ABORT CNF is sent
