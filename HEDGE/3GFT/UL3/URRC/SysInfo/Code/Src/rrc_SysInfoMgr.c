Line 280:  init: SysInfoMgr initialization problem - couldn't register with boundary
Line 287:  init: SysInfoMgr initialization problem - couldn't do state initialisation
Line 318:  free: releasing BCH / PCCPCH
Line 359: rrc_Class_SysInfoMgr_GetInstanceId: SysInfoMgr created at address: 0x%0.8x
Line 409: tmp_bch is NULL or msg->payload.bchId != tmp_bch->trChId
Line 521: CallbackBchConfigured: [error] - BCCHPAUSED transition failed
Line 527: CallbackBchConfigured: [error] -NACK received
Line 547:  BcchPaused_Am_ResumeBcch: deleting activeReaderQ->reader 0x%0.8x
Line 560: CallbackBchConfigured: [error] - WAITFORSUBSCRIPTION transition failed
Line 569: CallbackBchConfigured: [success] - ACK received, bcchReleased = FALSE
Line 619:  MapExtMsgIdToIntMsgId: Unknown CUPHY solicited message %i received 
Line 628:  MapExtMsgIdToIntMsgId: Layer %d has sent unexpecting solicited message %i  
Line 4896:  DBCHR : rrc_SysInfoMgr_priv_ModifyMIBSiDb
Line 4950: DBCHR: rrc_SysInfoMgr_priv_GetSegCountfromSiDB (From SchInfo)[%d] 
Line 5288: DBCHR: rrc_SysInfoMgr_PopSchInfoFromSiDb
Line 5402: DBCHR: [%s]: SegCount Mismatch :SegmentCount (From SchInfo)[%d] , SegmentCount (From First Segment)[%d]
Line 5407: DBCHR: [%s]: SegCount:SegmentCount (From SchInfo)[%d] , SegmentCount (From First Segment)[%d]
Line 5417: DBCHR: [%s]: SegCount Mismatch :SegmentCount (From SchInfo)[%d] , SegmentCount (From First Segment)[%d]
Line 5422: DBCHR: [%s]: SegCount Mismatch:SegmentCount (From SchInfo)[%d] , SegmentCount (From First Segment)[%d]
Line 5455: rrc_SysInfoMgr_NotifyClientRemoved ClientId  = %x
Line 655: WaitForSubscription_Am_SubscribeToMibIntraFreq: [received]
Line 2247: Avoiding DSRC update for BCCH read %d
Line 2253: Avoiding DSRC update for BCCH read for ANR/CGI Info
Line 2267: Avoiding DSRC update for BCCH read
Line 2309:  priv_HandleAmMessage: activeReaderQ created @ 0x%0.8x
Line 2318:  priv_HandleAmMessage: sending UphyBchResCfgReadyForSend to ResourceMgr
Line 2326:  priv_HandleAmMessage: error - UphyBchResCfgReadyForSend message not generated
Line 2335:  priv_HandleAmMessage: activeReaderQ freed
Line 2355: priv_HandleAmMessage: Pending Client is same as new request client,Merging
Line 2378: priv_HandleAmMessage: Waiting on DSRC : appending to pending Q
Line 2387:  priv_HandleAmMessage: active reader present, handling IntraFreqSibs
Line 2396:  priv_HandleAmMessage: [error] - unable to subscribe SIBs
Line 3721: priv_addEntryToQ: [SI_SubscribeToSchInfo_IntraFreq]
Line 3744: priv_addEntryToQ: [SI_SubscribeToMib_IntraFreq]
Line 3767: priv_addEntryToQ: [SI_SubscribeToMib_InterFreq]
Line 3799: priv_addEntryToQ: [SI_SubscribeToSibs_IntraFreq]
Line 3836: rrc_SysInfoMgr_priv_addEntryToQ: QEntry->u.sibIntraFreq.sibIds  is NULL
Line 3852: priv_addEntryToQ: [SI_SubscribeToMibSbSib_IntraFreq]
Line 3905: rrc_SysInfoMgr_priv_addEntryToQ: QEntry->u.sibIntraFreq.sibIds  is NULL
Line 3913: priv_addEntryToQ: [fail] - invalid subscription request not added to Q
Line 3921: priv_addEntryToQ: added request to Q with CPICH = %d, DL UARFCN = %d, callback addr: 0x%0.8x
Line 5052:  DBCHR : rrc_SysInfoMgr_priv_PopulateSiDb
Line 5076:  DBCHR : Client Resubscribed for a received SIB %d, ConfigStatus = %d,Send Modify again
Line 5103: DBCHR: VT [%d] 
Line 5111: DBCHR: SiDb[%d] : VT [%d] 
Line 5116: DBCHR: SiDb[%d] : SIBType [%d] 
Line 5128: DBCHR: SiDb[%d] : SegCount [%d] 
Line 5137: DBCHR: SiDb[%d] : SibRep 4
Line 5142: DBCHR: SiDb[%d] : SibRep 8
Line 5147: DBCHR: SiDb[%d] : SibRep 16
Line 5152: DBCHR: SiDb[%d] : SibRep 32
Line 5157: DBCHR: SiDb[%d] : SibRep 64
Line 5162: DBCHR: SiDb[%d] : SibRep 128
Line 5167: DBCHR: SiDb[%d] : SibRep 256
Line 5172: DBCHR: SiDb[%d] : SibRep 512
Line 5177: DBCHR: SiDb[%d] : SibRep 1024
Line 5182: DBCHR: SiDb[%d] : SibRep 2048
Line 5187: DBCHR: SiDb[%d] : SibRep 4096
Line 5191: DBCHR: rrc_SysInfoMgr_priv_PopulateSiDb: Invalid Repetition Factor
Line 5193: DBCHR: SiDb[%d] : SibPos[0] = %d
Line 4967: DBCHR: Ignore the rest of sib_PosOffsetInfo received in Scheduling info for SiDb[%d] as OffsetIndex[%d] is exceeding SegCount[%d]
Line 5023: DBCHR: SiDb[%d] : SibPos[%d] = %d
Line 5035: DBCHR: SiDb[%d] : SibPos[%d] = %d
Line 5040: DBCHR: SiDb[%d] : SibPos[%d] = %d
Line 3952: rrc_SysInfoMgr_priv_appendToPendingQ: newReaderQ is NULL
Line 3975:  priv_appendToPendingQ: subscribe to MIB/SIB request put on Queue by SysInfoMgr
Line 3385: priv_HandleIntraFreqSibsReaderActive: appending Intrafrequency subscription
Line 3390: priv_HandleIntraFreqSibsReaderActive: deleting activeReaderQ->reader @ 0x%0.8x
Line 3404: priv_HandleIntraFreqSibsReaderActive: activeReaderQ->reader deleted
Line 3411: activeReaderQ->reader == NULL, just append entry to Q
Line 3419: priv_HandleIntraFreqSibsReaderActive: appending to pending Q. isResubscribReq[%d]
Line 3675:  DBCHR : Appending Sibs to same Active reader Q: Sending BCH Modify
Line 3114: priv_HandleSubscription: SysInfoReader creation failed
Line 3119: priv_HandleSubscription: activeReaderQ->reader created @ 0x%0.8x
Line 3130: priv_HandleSubscription: [success] - MIB Block requested
Line 3137: priv_HandleSubscription: rrc_SysInfoReader_RequestMib call failed
Line 3148: priv_HandleSubscription: [success] - SchBlock requested
Line 3155: priv_HandleSubscription: rrc_SysInfoReader_RequestSchInfo call failed
Line 3170: priv_HandleSubscription: request IntraFreq SIBs failed
Line 3175: priv_HandleSubscription: [success] - request IntraFreqSIBs successful
Line 3194: priv_HandleSubscription: request MibSbSib_IntraFreq failed
Line 3199: priv_HandleSubscription: [success] - request MibSbSib_IntraFreq successful
Line 3209: priv_HandleSubscription: error in the choice field of ReaderQ
Line 685: WaitForSubscription_Am_SubscribeToSibsIntraFreq: message received
Line 692: WaitForSubscription_Am_SubscribeToSibsIntraFreq: [error] -no scheduling information present for SIBs being subscribed 
Line 4557:  priv_validateIntraFreqSibSubscriptionReq: message is NULL
Line 4564:  priv_validateIntraFreqSibSubscriptionReq: mibPtr is NULL
Line 725: WaitForSubscription_Am_SubscribeToSchInfoIntraFreq: [received]
Line 755: WaitForSubscription_Am_SubscribeToMibInterFreq: message received
Line 786: Am_SubscribeToSystemInfo: message received
Line 815: Am_UnsubscribeAll: [received]
Line 2716: priv_HandleUnsubscribeAll: -internal message structure for "UnsubscribeAll" is NULL
Line 2741: DBCHR: SibId(%d) Cancelled
Line 2766:  priv_HandleUnsubscribeAll: number of active clients = %d
Line 2772:  priv_HandleUnsubscribeAll: activeReaderQ->client @ 0x%0.8x, pMsg->clientId = 0x%0.8x
Line 2801:  priv_HandleUnsubscribeAll: Pending requests for the client is not checked
Line 2806:  priv_HandleUnsubscribeAll: terminating pending requests for client
Line 3447:  priv_HandleClientCallback: [error] -internal message structure for "UnsubscribeAll" is NULL
Line 3454:  priv_HandleClientCallback: [error] -no client for callback function
Line 3461:  priv_handleClientCallback: [%s] has no callback function
Line 3467:  priv_HandleClientCallback: [%s] callback function called
Line 857: UphyBchResourceConfigReady: [received]
Line 867: WaitForSubscription_UphyBchResourceConfigReady Unavailable to config bch resources RetCode(%d)
Line 871: WaitForSubscription_UphyBchResourceConfigReady ReaderQ already NULL
Line 882:  WaitForSubscription_UphyBchResourceConfigReady: [error] -no active client present
Line 927: UphyBchResourceConfigReady: [error] - BCCHPAUSED transition failed
Line 936: UphyBchResourceConfigReady: [error] - WAITFORBCHTOBECONFIGURED transition failed
Line 2493:  priv_HandleUphyBchResourceConfigReady: handling a BackgroundResourceRelease message
Line 2501:  priv_HandleUphyBchResourceConfigReady: [error] - unable to subscribe SIBs
Line 2511:  priv_HandleUphyBchResourceConfigReady: deleting activeReaderQ->reader 0x%0.8x
Line 2418:  priv_HandleBackgroundResourceRelease: [error ]- THIS SHOULD NOT BE USED YET!
Line 2435:  priv_HandleBackgroundResourceRelease: priv_configureBcch() success
Line 2440:  priv_HandleBackgroundResourceRelease: priv_configureBcch() failure
Line 2452:  priv_HandleBackgroundResourceRelease: mibInterFreq.retryCount is zero, hence going to terminate SI Reading
Line 2457:  priv_HandleBackgroundResourceRelease: error - no active Reader present
Line 4359:  priv_configureBcch: call to rrc_Bcch_getBch returns FAILURE
Line 4366:  priv_configureBcch: physical channel configuration successful
Line 4373:  priv_configureBcch: physical channel Configuration Failure
Line 4381:  priv_configureBcch: unable to configure BCCH due to null activeBcch instance
Line 4772:  priv_terminateSIReading: pendingReaderQ = NULL, terminating last subscription
Line 4779:  priv_terminateSIReading: making pending subscription active
Line 4406:  priv_terminateLastSubscription: releasing BCH / PCCPCH
Line 4411:  priv_terminateLastSubscription: [fail] - unable to release physical channel
Line 4419:  priv_terminateLastSubscription: deleting activeReaderQ->reader @ 0x%0.8x
Line 4423:  priv_terminateLastSubscription: activeReaderQ->reader deleted
Line 4427:  priv_terminateLastSubscription: deleting activeReaderQ @ 0x%0.8x
Line 4434:  priv_terminateLastSubscription: activeReaderQ deleted
Line 4443:  priv_terminateLastSubscription: error - state transition to WAITFORSUBSCRIPTION failed
Line 5210: DBCHR: rrc_SysInfoMgr_priv_FreeSiDb
Line 954: Am_UnSubcribeSystemInfo: [received]
Line 978: Am_UnSubcribeSystemInfo: nonactive readerQ not yet implemented 
Line 4852: DBCHR: SibId(%d) Cancelled
Line 4867:  rrc_SysinfoMgr : CancelSubscription for Sib [%d] 
Line 831: Am_UnsubscribeAll: [received]
Line 1825: [Default_Am_PauseBcch] bcchPauseRecvd = TRUE
Line 1846: [Default_Am_PauseBcch] bcchPauseRecvd = FALSE
Line 1004: WaitForBchToBeConfigured_Am_SubscribeToMibIntraFreq: [received]
Line 1029: WaitForBchToBeConfigured_Am_SubscribeToSibsIntraFreq: [received]
Line 1034: WaitForBchToBeConfigured_Am_SubscribeToSibsIntraFreq: [error] - no activeReaderQ present
Line 1043: WaitForBchToBeConfigured_Am_SubscribeToSibsIntraFreq: [error] -no scheduling information present for SIBs being subscribed 
Line 1056: WaitForBchToBeConfigured_Am_SubscribeToSibsIntraFreq: [error] - unable to subscribe SIBs
Line 1081: WaitForBchToBeConfigured_Am_SubscribeToSchInfoIntraFreq: [received]
Line 1106: WaitForBchToBeConfigured_Am_SubscribeToMibInterFreq: [received]
Line 1133: Am_SubscribeToSystemInfo: [received]
Line 1138: Am_SubscribeToSystemInfoSibs: no activeReaderQ present
Line 1153: Am_SubscribeToSystemInfo: unable to subscribe to SIBs
Line 1179: WaitForBchToBeConfigured_Am_BchResourceConfigured: [received]
Line 1190: WaitForActiveReaderToFinish_Am_PauseBcch: [error] - unable to release physical channel
Line 1200: Am_UnsubscribeAll: [error] - BCCHPAUSED transition failed
Line 1216: WaitForBchToBeConfigured_Am_BchResourceConfigured: [error] - WAITFORACTIVEREADERTOFINISH transition failed
Line 2536:  priv_HandleAmBchResourceConfigured: [error] - activeReaderQ == NULL
Line 2545:  priv_HandleAmBchResourceConfigured: [error] - rrc_SysInfoReader_StartReading returns FALSE
Line 2549:  priv_HandleAmBchResourceConfigured: deleting activeReaderQ->reader @ 0x%0.8x
Line 2560:  priv_HandleAmBchResourceConfigured: [success] - rrc_SysInfoReader_StartReading returns TRUE
Line 1253: Am_UnSubcribeSystemInfo: nonactive readerQ not yet implemented 
Line 1282: Am_ForcedUnsubscribeAll: [received]
Line 1294: Am_ForcedUnsubscribeAll: [error] - WAITFORSUBSCRIPTION transition failed
Line 1318: WaitForActiveReaderToFinish_Am_SubscribeToMibIntraFreq: [received]
Line 1343: WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: [received]
Line 1348: WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: [error] - no active reader present
Line 1357: WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: [error] -no scheduling information present for SIBs being subscribed 
Line 1371: WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreqToSibsIntraFreq: [error] - unable to subscribe SIBs
Line 1378: WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: [error] - rrc_SIM_SysInfoReader_StartReading returns FALSE
Line 1382: WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: deleting activeReaderQ->reader @ 0x0%x
Line 1393: WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: [success] - rrc_SIM_SysInfoReader_StartReading returns TRUE
Line 1418: WaitForActiveReaderToFinish_Am_SubscribeToSchInfoIntraFreq: [received]
Line 1443: WaitForActiveReaderToFinish_Am_SubscribeToMibInterFreq: [received]
Line 1469: Am_SubscribeToSystemInfo: [received]
Line 1474: Am_SubscribeToSystemInfo: no active reader present
Line 1489: Am_SubscribeToSystemInfo: unable to subscribe to SIBs
Line 1495: Am_SubscribeToSystemInfo: StartReading error - deleting activeReaderQ->reader
Line 1505: Am_SubscribeToSystemInfo: StartReading returns TRUE
Line 1530: am_FailureInd: [received]
Line 1537: am_FailureInd: releasing BCH / PCCPCH
Line 1542: am_FailureInd: [error] - unable to release physical channel
Line 1551: am_FailureInd: [error] - WAITFORBCHTOBERELEASED transition failed
Line 2584: SIM_priv_TerminateLastSubscription: activeReaderQ already NULL
Line 2593:  priv_HandleSirAmFailureInd: [error] -no active client present
Line 2598:  priv_HandleSirAmFailureInd: number of active clients = %d
Line 2605:  priv_HandleSirAmFailureInd: terminating pending requests for client
Line 2621:  priv_HandleSirAmFailureInd: [%s] callback function called
Line 1574: am_FinishInd: [received]
Line 1601: am_FinishInd: releasing BCH / PCCPCH
Line 1606: am_FinishInd: [error] - unable to release physical channel
Line 1613: am_FinishInd: [error] - WAITFORBCHTOBERELEASED transition failed
Line 1619: am_FinishInd: not releasing the BCH
Line 1643: WaitForActiveReaderToFinish_SIR_am_RecvMibOrSib: [received]
Line 2827:  priv_HandleSirAmRecvMibOrSib: received in state WaitForActiveReaderToFinish
Line 2855:  priv_HandleSirAmRecvMibOrSib: [error] - no active client present
Line 2870: received InfoBlockInstId is NULL 
Line 2883:  DBCHR : First MIB received : rep8 -> rep40
Line 2896:  DBCHR: [%s] : SIB type [%d] Received!!
Line 2908:  DBCHR: [%s] : SIB type [%d] Received!!
Line 2933:  priv_HandleSirAmRecvMibOrSib: [%s] - removed from activeReaderQ
Line 2938:  priv_HandleSirAmRecvMibOrSib: [%s] - passed to client %s
Line 2951:  priv_HandleSirAmRecvMibOrSib: [error] - SIB/MIB decoding failure returned to SysInfoMgr
Line 2955:  priv_HandleSirAmRecvMibOrSib: terminating pending requests for client
Line 2985: pMsg->InfoBlockInstId is NULL
Line 4620: Rx-ASN__MASTER_INFORMATION_BLOCK
Line 4636: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_%d
Line 4640: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_13__1
Line 4644: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_13__2
Line 4648: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_13__3
Line 4652: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_13__4
Line 4656: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_14
Line 4660: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15
Line 4664: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15__1
Line 4668: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15__2
Line 4672: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15__3
Line 4676: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_16
Line 4680: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_17
Line 4684: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15__4
Line 4688: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_18
Line 4692: Rx-ASN__SCHEDULING_BLOCK_1
Line 4696: Rx-ASN__SCHEDULING_BLOCK_2
Line 4700: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15__5
Line 4704: Rx-ASN__MESSAGE_UNKNOWN
Line 1668: Am_UnsubscribeAll: [received]
Line 1684: Am_UnsubscribeAll: releasing BCH / PCCPCH
Line 1689: Am_UnsubscribeAll: [error] - unable to release physical channel
Line 1699: Am_UnsubscribeAll: [error] - WAITFORBCHTOBERELEASED transition failed
Line 1706: Am_UnsubscribeAll: not releasing the BCH
Line 1714: The Active reader has not requested for Unsubscribe All, keeping the BCCH
Line 1724: Am_UnsubscribeAll: BCH / PCCPCH already released
Line 1734: Am_UnsubscribeAll: [error] - WAITFORSUBSCRIPTION transition failed
Line 3495:  priv_HandleClientCallbackForReleaseBch: [error] -internal message structure for "UnsubscribeAll" is NULL
Line 3501:  priv_HandleClientCallbackForReleaseBch: [error] -no client for callback function
Line 3508:  priv_HandleClientCallbackForReleaseBch: [%s] has no callback function
Line 3518:  priv_HandleClientCallbackForReleaseBch: callback function already exists for %s
Line 3528:  priv_HandleClientCallbackForReleaseBch: [error] - can only have 2 callback clients
Line 3536:  priv_HandleClientCallbackForReleaseBch: storing callback function for %s
Line 2040: Am_UnSubcribeSystemInfo: releasing BCH / PCCPCH
Line 2048: Am_UnSubcribeSystemInfo: [error] unable to release physical channel
Line 2054: Am_UnSubcribeSystemInfo: [error] - WAITFORBCHTOBERELEASED transition failed
Line 2064: Am_UnSubscribeSystemInfo: unsubscribe in nonactive readerQ not yet implemented 
Line 1749: Am_ForcedUnsubscribeAll: [received]
Line 1762: Am_ForcedUnsubscribeAll: releasing BCH / PCCPCH
Line 1767: Am_ForcedUnsubscribeAll: [error] - unable to release physical channel
Line 1778: Am_UnsubscribeAll: [error] - WAITWAITFORSUBSCRIPTION transition failed
Line 1785: Am_ForcedUnsubscribeAll: not releasing the BCH
Line 1793: The Active reader has not requested for Unsubscribe All, keeping the BCCH
Line 1800: Am_ForcedUnsubscribeAll: BCH / PCCPCH already released
Line 1809: Am_UnsubscribeAll: [error] - WAITFORSUBSCRIPTION transition failed
Line 1869: WaitForActiveReaderToFinish_Am_PauseBcch: [error] - unable to release physical channel
Line 1883: Am_UnsubscribeAll: [error] - BCCHPAUSED transition failed
Line 2165: WaitForBchToBeReleased_Am_SubscribeToMibIntraFreq: [received]
Line 2176: WaitForBchToBeReleased_Am_SubscribeToSibsIntraFreq: [received]
Line 2185: WaitForBchToBeReleased_Am_SubscribeToSchInfoIntraFreq: [received]
Line 2196: WaitForBchToBeReleased_Am_SubscribeToMibInterFreq: [received]
Line 2207: WaitForBchToBeReleased_Am_SubscribeToSystemInfo: [received]
Line 2091: Am_UnsubscribeAll: [received]
Line 2144: Am_BchResourceReleased: [received]
Line 2153: Am_BchResourceReleased: [error] - WAITFORSUBSCRIPTION transition failed
Line 2666:  priv_HandleBchResourceReleased: [error] -NACK received
Line 2671:  priv_HandleBchResourceReleased: ACK received
Line 2680:  priv_HandleClientCallbackForReleaseBch: %s callback function called
Line 2110: Am_ForcedUnsubscribeAll: [received]
Line 2120: Am_ForcedUnsubscribeAll: [error] - WAITFORSUBSCRIPTION transition failed
Line 1940: Am_SubscribeToSystemInfo: [received]
Line 1945: Am_SubscribeToSystemInfo: no active reader present
Line 1965: Am_SubscribeToSystemInfo: unable to subscribe to SIBs
Line 1970: Am_SubscribeToSystemInfo: HandleSubscription returns TRUE
Line 1904:  BcchPaused_Am_ResumeBcch: deleting activeReaderQ->reader 0x%0.8x
Line 1916: Am_UnsubscribeAll: [error] - BCCHPAUSED transition failed
Line 3011: rrc_SysInfoMgr_priv_HandleNACKBchConfigCnf: [error] -activeReaderQ is NULL
Line 3016:  priv_HandleNACKBchConfigCnf: [error] - no client in activeReaderQ!
Line 3021:  priv_HandleNACKBchConfigCnf: [error] - no callback function in activeReaderQ!
Line 3027:  priv_HandleNACKBchConfigCnf: [%s] callback function called with BCHREADERROR
Line 3036:  priv_HandleNACKBchConfigCnf: terminating pending requests for client
Line 3050:  priv_HandleNACKBchConfigCnf: number of active clients = %d
Line 3235:  priv_HandleBchConfigRequest: [fail] - no activeReaderQ
Line 3245:  priv_HandleBchConfigRequest: monitored and serving cells are same
Line 3257:  priv_HandleBchConfigRequest: [success] - BCCH configured for MIB InterFreq
Line 3263:  priv_HandleBchConfigRequest: [fail] - BCCH not configured for MIB InterFreq
Line 3283:  BPLMN BCH Request: [success] - BCCH configured
Line 3288:  BPLMN : priv_HandleBchConfig Request: [fail] - BCCH not configured
Line 3298:  BPLMN BCH Request for AnrInfoReading : [success] - BCCH configured
Line 3303:  BPLMN : priv_HandleBchConfig Request for AnrInfOReading : [fail] - BCCH not configured
Line 3314:  priv_HandleBchConfigRequest: [success] - BCCH configured
Line 3320:  priv_HandleBchConfigRequest: [fail] - BCCH not configured
Line 4466:  priv_makePendingSubscriptionActive: pendingReaderQ is empty
Line 4473:  priv_makePendingSubscriptionActive: pendingReaderQ is not Empty
Line 4479: rrc_SysInfoMgr_priv_makePendingSubscriptionActive: [SI_SubscribeToSchInfo_IntraFreq]
Line 4487: rrc_SysInfoMgr_priv_makePendingSubscriptionActive: [SI_SubscribeToMib_IntraFreq]
Line 4496: rrc_SysInfoMgr_priv_makePendingSubscriptionActive: [SI_SubscribeToMib_InterFreq]
Line 4505: rrc_SysInfoMgr_priv_makePendingSubscriptionActive: [SI_SubscribeToSibs_IntraFreq]
Line 4514: rrc_SysInfoMgr_priv_makePendingSubscriptionActive: [SI_SubscribeToMibSbSib_IntraFreq]
Line 4524: priv_makePendingSubscription: [fail] - invalid subscription request not added to Q
Line 4727:  priv_ReleaseBchPccpch: [fail] - no active BCCH
Line 4738:  priv_ReleaseBchPccpch: tmp_bch is NULL
Line 4743:  priv_ReleaseBchPccpch: [fail] - unable to release physical channel
Line 4799:  priv_TerminateLastSubscription: activeReaderQ already NULL
Line 4805:  priv_TerminateLastSubscription: deleting activeReaderQ->reader @ 0x%0.8x
Line 4817:  priv_TerminateLastSubscription: deleting activeReaderQ @ 0x%0.8x
Line 4042: Entry not empty since client %s is subscribed to SibId: %d
Line 4054: Invalid subscription type: %d
Line 5232: DBCHR: rrc_SysInfoMgr_priv_RollBackSiDb
Line 5239: DBCHR: SiDb[%d]->ConfigStatus = Configured -> PendingConfig
Line 4090:  priv_removeClientFromPendingQ: trying to remove client %s from pending Q
