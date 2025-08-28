Line 371: Instance created for stackId %d
Line 371: Instance created for stackId %d
Line 602: uphy_CPchAndDrxResourcesController_init2 using warmup_time=%d, min_catnap_length=%d
Line 602: uphy_CPchAndDrxResourcesController_init2 using warmup_time=%d, min_catnap_length=%d
Line 679: S0  registeredInfo == NULL pointer
Line 679: S0  registeredInfo == NULL pointer
Line 686: PchAndDrx registerServer: serverId=%d
Line 686: PchAndDrx registerServer: serverId=%d
Line 690: PchAndDrx registerServer: serverId=%d listed already
Line 690: PchAndDrx registerServer: serverId=%d listed already
Line 715: PchAndDrx deregisterServer: serverId=%d
Line 715: PchAndDrx deregisterServer: serverId=%d
Line 719: PchAndDrx deregisterServer: serverId=%d not found
Line 719: PchAndDrx deregisterServer: serverId=%d not found
Line 746: Send GSM resel meas done indication delayCount %d
Line 746: Send GSM resel meas done indication delayCount %d
Line 821: S0  RfbackProcessing: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 821: S0  RfbackProcessing: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 827: RfbackProcessing: Antenna switched from EUTRA to UMTS
Line 827: RfbackProcessing: Antenna switched from EUTRA to UMTS
Line 836: Reset Retiring timeout
Line 836: Reset Retiring timeout
Line 851: S0  RfbackProcessingg: AfcEnableCmd failed. errCode=%d, addErrCode=%d
Line 851: S0  RfbackProcessingg: AfcEnableCmd failed. errCode=%d, addErrCode=%d
Line 863: S0  RfbackProcessing : UE did not camp to any frequency
Line 863: S0  RfbackProcessing : UE did not camp to any frequency
Line 873: [InterFreqDR] Trigger RfBackProcessing on uarfcn %d
Line 873: [InterFreqDR] Trigger RfBackProcessing on uarfcn %d
Line 889: S0  RfbackProcessing: RF Rx ON command exec failure Error %d, Additional Error %d
Line 889: S0  RfbackProcessing: RF Rx ON command exec failure Error %d, Additional Error %d
Line 896: RfbackProcessing: RfRxOn
Line 896: RfbackProcessing: RfRxOn
Line 910: S0  RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s

Line 910: S0  RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s

Line 914: S0  RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command

Line 914: S0  RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command

Line 919: S0  RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s

Line 919: S0  RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s

Line 927: S0  RfbackProcessing: sendResponseToUphyToken did not get time to run, so clear it
Line 927: S0  RfbackProcessing: sendResponseToUphyToken did not get time to run, so clear it
Line 972: S0  RfbackProcessing: RF UARFCN Error %d, Additional Error %d
Line 972: S0  RfbackProcessing: RF UARFCN Error %d, Additional Error %d
Line 1021: S0  Single Update Requested
Line 1021: S0  Single Update Requested
Line 1057: uphy_CPchAndDrxResourcesController_RfbackFinished: RF back to UMTS: current (sfn, slot)=(%d, %d), target StartStopDecodingFsmEventId=%d
Line 1057: uphy_CPchAndDrxResourcesController_RfbackFinished: RF back to UMTS: current (sfn, slot)=(%d, %d), target StartStopDecodingFsmEventId=%d
Line 1084: [InterFreqDR] PchAndDrx finished RF back to UMTS: current (sfn, slot)=(%d, %d) in Wait for Meas state, searcherGrant=%d
Line 1084: [InterFreqDR] PchAndDrx finished RF back to UMTS: current (sfn, slot)=(%d, %d) in Wait for Meas state, searcherGrant=%d
Line 1121: PchAndDrx eutraCellReselectionMeasDone and finished RF back to UMTS: current (sfn, slot)=(%d, %d), target StartStopDecodingFsmEventId=%d(eutraCellReselectionMeasDone)
Line 1121: PchAndDrx eutraCellReselectionMeasDone and finished RF back to UMTS: current (sfn, slot)=(%d, %d), target StartStopDecodingFsmEventId=%d(eutraCellReselectionMeasDone)
Line 1129: PchAndDrx finished RF back to UMTS: current (sfn, slot)=(%d, %d), target StartStopDecodingFsmEventId=%d(RfBackFinished)
Line 1129: PchAndDrx finished RF back to UMTS: current (sfn, slot)=(%d, %d), target StartStopDecodingFsmEventId=%d(RfBackFinished)
Line 1166: S0  uphy_CSleepManager_InitDone
Line 1166: S0  uphy_CSleepManager_InitDone
Line 1182: S0  uphy_CPchAndDrxResourcesController_InitDone: send failed
Line 1182: S0  uphy_CPchAndDrxResourcesController_InitDone: send failed
Line 1187: uphy_CPchAndDrxResourcesController_InitDone: : send succeeded
Line 1187: uphy_CPchAndDrxResourcesController_InitDone: : send succeeded
Line 1217: S0  StartStopDecodingController handleWaking: SleepingController is not turned ON
Line 1217: S0  StartStopDecodingController handleWaking: SleepingController is not turned ON
Line 1261: StartStopDecodingController handleWaking: target StartStopDecodingFsmEventId=%d(WakeUpReq) run at rsn=%d sfn=%d
Line 1261: StartStopDecodingController handleWaking: target StartStopDecodingFsmEventId=%d(WakeUpReq) run at rsn=%d sfn=%d
Line 1290: uphy_CPchAndDrxResourcesController_ChanReconfig: wasHwSleep = %d
Line 1290: uphy_CPchAndDrxResourcesController_ChanReconfig: wasHwSleep = %d
Line 1295: S0  PchAndDrx startPICH: DlPichEnableCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 1295: S0  PchAndDrx startPICH: DlPichEnableCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 1334: No MP info for serving cell [%d, %d]
Line 1334: No MP info for serving cell [%d, %d]
Line 1345: No Cell Info [%d, %d]
Line 1345: No Cell Info [%d, %d]
Line 1348: Check Serving cell MP info [%d, %d], found = %d
Line 1348: Check Serving cell MP info [%d, %d], found = %d
Line 1389: uphy_CPchAndDrxResourcesController_StartFee: isUtranCommercialPlmnId=%d,HWFeeEnabled=%d refRlEcIo=%d weakSignal=%d
Line 1389: uphy_CPchAndDrxResourcesController_StartFee: isUtranCommercialPlmnId=%d,HWFeeEnabled=%d refRlEcIo=%d weakSignal=%d
Line 1446: PchAndDrx fingerAllocationDone: Sfn=%d, Slot=%d, target StartStopDecodingFsmEventId=%d(fingerAllocationDone)
Line 1446: PchAndDrx fingerAllocationDone: Sfn=%d, Slot=%d, target StartStopDecodingFsmEventId=%d(fingerAllocationDone)
Line 1491: PchAndDrx intraFrequencyCellReselectionMeasDone: current (sfn, slot)=(%d, %d), target StartStopDecodingFsmEventId=%d(intraFrequencyCellReselectionMeasDone)
Line 1491: PchAndDrx intraFrequencyCellReselectionMeasDone: current (sfn, slot)=(%d, %d), target StartStopDecodingFsmEventId=%d(intraFrequencyCellReselectionMeasDone)
Line 1529: PchAndDrx interFrequencyCellReselectionMeasDone: current (sfn, slot)=(%d, %d), target StartStopDecodingFsmEventId=%d(interFrequencyCellReselectionMeasDone)
Line 1529: PchAndDrx interFrequencyCellReselectionMeasDone: current (sfn, slot)=(%d, %d), target StartStopDecodingFsmEventId=%d(interFrequencyCellReselectionMeasDone)
Line 1554: IRAT Abort already requested. Wait for abort CNF 
Line 1554: IRAT Abort already requested. Wait for abort CNF 
Line 1566: S0  uphy_CPchAndDrxResourcesController_gsmCellReselectionMeasDone: Not In Proper state to handle!
Line 1566: S0  uphy_CPchAndDrxResourcesController_gsmCellReselectionMeasDone: Not In Proper state to handle!
Line 1629: IRAT Abort already requested. Wait for abort CNF 
Line 1629: IRAT Abort already requested. Wait for abort CNF 
Line 1647: S0  Call to RfbackProcessing skipped. Rat mode %d 
Line 1647: S0  Call to RfbackProcessing skipped. Rat mode %d 
Line 1654: Send Eutra Meas Done forcely
Line 1654: Send Eutra Meas Done forcely
Line 1669: uphy_CPchAndDrxResourcesController_PowerOnInd is called
Line 1669: uphy_CPchAndDrxResourcesController_PowerOnInd is called
Line 1685: uphy_CPchAndDrxResourcesController_ProcessRelease is called
Line 1685: uphy_CPchAndDrxResourcesController_ProcessRelease is called
Line 1716: Invalid MsgId=%d
Line 1760: PchAndDrx process: Sfn=%d, Slot=%d, MsgId=%d(Cfg/Arfcn/CellTrk/Rel)
Line 1760: PchAndDrx process: Sfn=%d, Slot=%d, MsgId=%d(Cfg/Arfcn/CellTrk/Rel)
Line 1776: PchAndDrx receives MsgId=%d(Config), target StartStopDecodingFsmEventId=Release
Line 1776: PchAndDrx receives MsgId=%d(Config), target StartStopDecodingFsmEventId=Release
Line 1780: S0  PchAndDrx process: Config Msg received not in idle state
Line 1780: S0  PchAndDrx process: Config Msg received not in idle state
Line 1784: PchAndDrx receives MsgId=%d(Config), target ResourcesConfigurationEventId=Config
Line 1784: PchAndDrx receives MsgId=%d(Config), target ResourcesConfigurationEventId=Config
Line 1864: Back PchAndDrx receives MsgId=%d(Config), target StartStopDecodingFsmEventId=Release
Line 1864: Back PchAndDrx receives MsgId=%d(Config), target StartStopDecodingFsmEventId=Release
Line 1869: PchAndDrx receives MsgId=%d(Config), target ResourcesConfigurationEventId=Config
Line 1869: PchAndDrx receives MsgId=%d(Config), target ResourcesConfigurationEventId=Config
Line 1874: [PCH msg] ARFCN %d, PSC %d
Line 1874: [PCH msg] ARFCN %d, PSC %d
Line 1883: S0  PchAndDrx process: Unknown MsgId=%d
Line 1883: S0  PchAndDrx process: Unknown MsgId=%d
Line 1926: PchAndDrx process: Sfn=%d, Slot=%d, MsgId=%d(Cfg/Arfcn/CellTrk/Rel)
Line 1926: PchAndDrx process: Sfn=%d, Slot=%d, MsgId=%d(Cfg/Arfcn/CellTrk/Rel)
Line 1931: DSDS:PCHAndDrx controller receives Rf Use Response from DSLRC Message interface
Line 1931: DSDS:PCHAndDrx controller receives Rf Use Response from DSLRC Message interface
Line 1945: S0  uphy_CPchAndDrxResourcesController_process: RF pause received from DSLRC interface
Line 1945: S0  uphy_CPchAndDrxResourcesController_process: RF pause received from DSLRC interface
Line 1953: S0  DSDS: uphy_CPchAndDrxResourcesController_process: Reset PCH configuration to init
Line 1953: S0  DSDS: uphy_CPchAndDrxResourcesController_process: Reset PCH configuration to init
Line 1959: S0  uphy_CPchAndDrxResourcesController_process: Send RF pause received from DSLRC interface to StartstopFSM
Line 1959: S0  uphy_CPchAndDrxResourcesController_process: Send RF pause received from DSLRC interface to StartstopFSM
Line 1968: S0  DSDS: uphy_CPchAndDrxResourcesController_process: Stop BG-PCH as Pause received
Line 1968: S0  DSDS: uphy_CPchAndDrxResourcesController_process: Stop BG-PCH as Pause received
Line 1979: S0  DSDS:uphy_CPchAndDrxResourcesController_process: RF not in use
Line 1979: S0  DSDS:uphy_CPchAndDrxResourcesController_process: RF not in use
Line 1987: S0  DSDS:uphy_CPchAndDrxResourcesController_process: RF resume received from DSLRC interface
Line 1987: S0  DSDS:uphy_CPchAndDrxResourcesController_process: RF resume received from DSLRC interface
Line 1992: S0  DSDS: uphy_CPchAndDrxResourcesController_process: Restart PCH configuration
Line 1992: S0  DSDS: uphy_CPchAndDrxResourcesController_process: Restart PCH configuration
Line 1999: S0  DSDS: uphy_CPchAndDrxResourcesController_process: Enable PCH decoding
Line 1999: S0  DSDS: uphy_CPchAndDrxResourcesController_process: Enable PCH decoding
Line 2018: S0  DSDS: uphy_CPchAndDrxResourcesController_process: shortCtchPeriod %d Not expected
Line 2018: S0  DSDS: uphy_CPchAndDrxResourcesController_process: shortCtchPeriod %d Not expected
Line 2028: S0  3G3G DSDS: uphy_CPchAndDrxResourcesController_process: Restart BGPCH decoding 
Line 2028: S0  3G3G DSDS: uphy_CPchAndDrxResourcesController_process: Restart BGPCH decoding 
Line 2035: S0  DSDS: EUphyPchAndDrxResourcesControllerMsgId_RfUseResumeReq Rf resumed for BGPCH
Line 2035: S0  DSDS: EUphyPchAndDrxResourcesControllerMsgId_RfUseResumeReq Rf resumed for BGPCH
Line 2042: S0  DSDS: EUphyPchAndDrxResourcesControllerMsgId_RfUseResumeReq Rf not Paused, probably released from URRC
Line 2042: S0  DSDS: EUphyPchAndDrxResourcesControllerMsgId_RfUseResumeReq Rf not Paused, probably released from URRC
Line 2051: [InterFreqDR] PchAndDrx receives MsgId=%d(SearcherUsePauseReq)
Line 2051: [InterFreqDR] PchAndDrx receives MsgId=%d(SearcherUsePauseReq)
Line 2060: [InterFreqDR] SearcherUsePauseReq msg discarded as startstop not in retiring or DR not available
Line 2060: [InterFreqDR] SearcherUsePauseReq msg discarded as startstop not in retiring or DR not available
Line 2067: S0  PchAndDrx process: Unknown MsgId=%d
Line 2067: S0  PchAndDrx process: Unknown MsgId=%d
Line 2116: PchAndDrx process: Sfn=%d, Slot=%d, MsgId=%d(Cfg/Arfcn/CellTrk/Rel)
Line 2116: PchAndDrx process: Sfn=%d, Slot=%d, MsgId=%d(Cfg/Arfcn/CellTrk/Rel)
Line 2129: S%d  [PCA] Reset pagingPagingConflictCnt
Line 2129: S%d  [PCA] Reset pagingPagingConflictCnt
Line 2187: Short margin: currentSfn =%d slots, pchAndDrxResourcesController_ptr->pich_Sfn =%d, diff(SFN)=%d
Line 2187: Short margin: currentSfn =%d slots, pchAndDrxResourcesController_ptr->pich_Sfn =%d, diff(SFN)=%d
Line 2195: Checking PI time: currentSfn =%d, pchAndDrxResourcesController_ptr->pich_Sfn =%d, diff(SFN)=%d PiPosition = %d
Line 2195: Checking PI time: currentSfn =%d, pchAndDrxResourcesController_ptr->pich_Sfn =%d, diff(SFN)=%d PiPosition = %d
Line 2200: PchAndDrx receives at %d(Release) and event is pended
Line 2200: PchAndDrx receives at %d(Release) and event is pended
Line 2211: Released by InterRatCoordinator
Line 2211: Released by InterRatCoordinator
Line 2216: Release in Retiring State
Line 2216: Release in Retiring State
Line 2231: PchAndDrx receives MsgId=%d(Release), target StartStopDecodingFsmEventId=Release
Line 2231: PchAndDrx receives MsgId=%d(Release), target StartStopDecodingFsmEventId=Release
Line 2239: S0  PchAndDrx receives release event during RfbackProcessing
Line 2239: S0  PchAndDrx receives release event during RfbackProcessing
Line 2262: S0  PchAndDrx receives release event but modem is off
Line 2262: S0  PchAndDrx receives release event but modem is off
Line 2278: Back PchAndDrx receives MsgId=%d(Release), target StartStopDecodingFsmEventId=Release
Line 2278: Back PchAndDrx receives MsgId=%d(Release), target StartStopDecodingFsmEventId=Release
Line 2287: Back PchAndDrx receives MsgId=%d(Release), target ResourcesConfigurationEventId=Release
Line 2287: Back PchAndDrx receives MsgId=%d(Release), target ResourcesConfigurationEventId=Release
Line 2295: S0  PchAndDrx receives release event but modem is off
Line 2295: S0  PchAndDrx receives release event but modem is off
Line 2305: S0  PchAndDrx process: Unknown MsgId=%d
Line 2305: S0  PchAndDrx process: Unknown MsgId=%d
Line 2351: PchAndDrx CBS: FACH for CTCH config Req
Line 2351: PchAndDrx CBS: FACH for CTCH config Req
Line 2362: PchAndDrx CBS: change to wakeup SFN  = %d
Line 2362: PchAndDrx CBS: change to wakeup SFN  = %d
Line 2392: S0  PchAndDrx CBS: fachConfigMessage for CBS create failure
Line 2392: S0  PchAndDrx CBS: fachConfigMessage for CBS create failure
Line 2411: S0  fachInfoArray is NULL
Line 2411: S0  fachInfoArray is NULL
Line 2435: S0  PchAndDrx CBS: fachConfigMessage for CBS Send failure
Line 2435: S0  PchAndDrx CBS: fachConfigMessage for CBS Send failure
Line 2465: uphy_CPchAndDrxResourcesController_process: start level-1 scheduling in wakingDuring
Line 2465: uphy_CPchAndDrxResourcesController_process: start level-1 scheduling in wakingDuring
Line 2492: uphy_CPchAndDrxResourcesController_process: No short CTCHPeriod, CTCH decoding token to be scheduled in schedulewakeup
Line 2492: uphy_CPchAndDrxResourcesController_process: No short CTCHPeriod, CTCH decoding token to be scheduled in schedulewakeup
Line 2530: PchAndDrx process: numofCBSblks is greater than nextBlockOffsetFromUBMC
Line 2530: PchAndDrx process: numofCBSblks is greater than nextBlockOffsetFromUBMC
Line 2547: S0  PchAndDrx process: numofCBSblks = %d remSFN = %d nextBlockOffsetFromUBMC = %d numSFNToDecode = %d numofCBSBlocksPerSFNCycle = %d numofSFNCycleToSkip = %d numofDrxCycleToSkip = %d
Line 2547: S0  PchAndDrx process: numofCBSblks = %d remSFN = %d nextBlockOffsetFromUBMC = %d numSFNToDecode = %d numofCBSBlocksPerSFNCycle = %d numofSFNCycleToSkip = %d numofDrxCycleToSkip = %d
Line 2554: S0  PchAndDrx process: numSFNToDecode = %d currentRSN = %d currentSfn = %d
Line 2554: S0  PchAndDrx process: numSFNToDecode = %d currentRSN = %d currentSfn = %d
Line 2596: S0  PchAndDrx process: Gap available within level-2 index = %d numDrxIndices = %d startBsIndex = %d endBsIndex = %d cbsLevel2FrameCount = %d level2CbsSchedulingDecodingIndex = %d
Line 2596: S0  PchAndDrx process: Gap available within level-2 index = %d numDrxIndices = %d startBsIndex = %d endBsIndex = %d cbsLevel2FrameCount = %d level2CbsSchedulingDecodingIndex = %d
Line 2599: S0  PchAndDrx process: Gap available within level-2 BSIndexArray[index] = %d BSIndexArray[index-] = %d bsIndexDiff = %d SFNDiff = %d
Line 2599: S0  PchAndDrx process: Gap available within level-2 BSIndexArray[index] = %d BSIndexArray[index-] = %d bsIndexDiff = %d SFNDiff = %d
Line 2614: S0  PchAndDrx process: No gap available within level-2 index = %d numDrxIndices = %d startBsIndex = %d endBsIndex = %d cbsLevel2FrameCount = %d level2CbsSchedulingDecodingIndex = %d
Line 2614: S0  PchAndDrx process: No gap available within level-2 index = %d numDrxIndices = %d startBsIndex = %d endBsIndex = %d cbsLevel2FrameCount = %d level2CbsSchedulingDecodingIndex = %d
Line 2622: S0  PchAndDrx process : One CTCH block to be read in level-2 cbsLevel2FrameCount = %d
Line 2622: S0  PchAndDrx process : One CTCH block to be read in level-2 cbsLevel2FrameCount = %d
Line 2641: S0  DSDS_CBS: PchAndDrx process pauseSFN %d pausePalTime %x currentPalTime %x sfnDiffPalTime %d newCurrentSFNPalTime %d
Line 2641: S0  DSDS_CBS: PchAndDrx process pauseSFN %d pausePalTime %x currentPalTime %x sfnDiffPalTime %d newCurrentSFNPalTime %d
Line 2655: S0  DSDS_CBS: PchAndDrx process currentSFN %d currentRSN %d relativeTimestampRSN %d pauseSFN %d pauseRSN %d pausePalTime %d
Line 2655: S0  DSDS_CBS: PchAndDrx process currentSFN %d currentRSN %d relativeTimestampRSN %d pauseSFN %d pauseRSN %d pausePalTime %d
Line 2705: S0  DSDS_CBS: PchAndDrx process pauseSFN %d pausePalTime %x currentPalTime %x sfnDiffPalTime %d newCurrentSFNPalTime %d
Line 2705: S0  DSDS_CBS: PchAndDrx process pauseSFN %d pausePalTime %x currentPalTime %x sfnDiffPalTime %d newCurrentSFNPalTime %d
Line 2719: S0  DSDS_CBS: PchAndDrx process pauseSFN %d pauseRSN %d pausePalTime %d
Line 2719: S0  DSDS_CBS: PchAndDrx process pauseSFN %d pauseRSN %d pausePalTime %d
Line 2739: S0  PchAndDrx process: Warning!! This case should not happen
Line 2739: S0  PchAndDrx process: Warning!! This case should not happen
Line 2743: S0  PchAndDrx process: isCBSLevel2CountValid = %d cbsLevel2FrameCount = %d cbsLevel2BlockCount = %d lenCBSschedulePeriod = %d BSIndexArray[%d] = %d CTCHIndexOffset = %d
Line 2743: S0  PchAndDrx process: isCBSLevel2CountValid = %d cbsLevel2FrameCount = %d cbsLevel2BlockCount = %d lenCBSschedulePeriod = %d BSIndexArray[%d] = %d CTCHIndexOffset = %d
Line 2748: S0  PchAndDrx process: Unexpected condition index = %d numDrxIndices = %d
Line 2748: S0  PchAndDrx process: Unexpected condition index = %d numDrxIndices = %d
Line 2802: PchAndDrx CBS: CBS Schedule REQ
Line 2802: PchAndDrx CBS: CBS Schedule REQ
Line 2804: S0  PchAndDrx process: nextBlockOffsetFromUBMC = %d CTCHIndexOffset = %d startSfn = %d currentSfn = %d CTCHPeriod = %d drxCycleLength = %d
Line 2804: S0  PchAndDrx process: nextBlockOffsetFromUBMC = %d CTCHIndexOffset = %d startSfn = %d currentSfn = %d CTCHPeriod = %d drxCycleLength = %d
Line 2808: S0  PchAndDrx process: CTCHIndexOffset != nextBlockOffsetFromUBMC 
Line 2808: S0  PchAndDrx process: CTCHIndexOffset != nextBlockOffsetFromUBMC 
Line 2833: PchAndDrx process: numofCBSblks is greater than nextBlockOffsetFromUBMC
Line 2833: PchAndDrx process: numofCBSblks is greater than nextBlockOffsetFromUBMC
Line 2848: S0  PchAndDrx process: numofCBSblks = %d nextBlockOffsetFromUBMC = %d, numofCBSBlocksPerSFNCycle = %d numofSFNCycleToSkip = %d numofDrxCycleToSkip = %d
Line 2848: S0  PchAndDrx process: numofCBSblks = %d nextBlockOffsetFromUBMC = %d, numofCBSBlocksPerSFNCycle = %d numofSFNCycleToSkip = %d numofDrxCycleToSkip = %d
Line 2862: S0  PchAndDrx process: Warning!! This case should not happen
Line 2862: S0  PchAndDrx process: Warning!! This case should not happen
Line 2866: S0  PchAndDrx process: numofCBSblks = %d level2CbsSchedulingDecodingIndex = %d BSArrayIndex = %d BSIndexOfNextLevel2ReceivedScheduleMsg = %d
Line 2866: S0  PchAndDrx process: numofCBSblks = %d level2CbsSchedulingDecodingIndex = %d BSArrayIndex = %d BSIndexOfNextLevel2ReceivedScheduleMsg = %d
Line 2920: PchAndDrx CBS: FACH for CTCH Release Req
Line 2920: PchAndDrx CBS: FACH for CTCH Release Req
Line 2957: PchAndDrx CBS: ResourceFSM in DsSuspend State
Line 2957: PchAndDrx CBS: ResourceFSM in DsSuspend State
Line 3053: S0  DSDS CBS: Post Dummy Stop Decoding event as no PCH decoding is ongoing
Line 3053: S0  DSDS CBS: Post Dummy Stop Decoding event as no PCH decoding is ongoing
Line 3087: S0  PchAndDrx CBS: fachReleaseMessage for CBS Send failure
Line 3087: S0  PchAndDrx CBS: fachReleaseMessage for CBS Send failure
Line 3119: PchAndDrx process: Sfn=%d, Slot=%d, MsgId=%d(Cfg/Arfcn/CellTrk/Rel)
Line 3119: PchAndDrx process: Sfn=%d, Slot=%d, MsgId=%d(Cfg/Arfcn/CellTrk/Rel)
Line 3136: S0  PchAndDrx process: Unknown MsgId=%d
Line 3136: S0  PchAndDrx process: Unknown MsgId=%d
Line 3179: PchAndDrx process: Sfn=%d, Slot=%d, MsgId=%d(Cfg/Arfcn/CellTrk/Rel)
Line 3179: PchAndDrx process: Sfn=%d, Slot=%d, MsgId=%d(Cfg/Arfcn/CellTrk/Rel)
Line 3187: PchAndDrx receives MsgId=%d(ListenArfcnTransitionAck), target ResourcesConfigurationEventId=ListenArfcnTranAck
Line 3187: PchAndDrx receives MsgId=%d(ListenArfcnTransitionAck), target ResourcesConfigurationEventId=ListenArfcnTranAck
Line 3194: S0  PchAndDrx: ListenArfcnTransitionAck not expected for Gap Pattern Utilities
Line 3194: S0  PchAndDrx: ListenArfcnTransitionAck not expected for Gap Pattern Utilities
Line 3199: PchController receives ResyncDone in startStopstate = %d
Line 3199: PchController receives ResyncDone in startStopstate = %d
Line 3205: [InterFreqDR] PchAndDrx receives MsgId=%d(DRToDSTransitionReq)
Line 3205: [InterFreqDR] PchAndDrx receives MsgId=%d(DRToDSTransitionReq)
Line 3213: [InterFreqDR] DRToDSTransitionReq msg discarded as startstop not in retiring
Line 3213: [InterFreqDR] DRToDSTransitionReq msg discarded as startstop not in retiring
Line 3220: S0  PchAndDrx process: Unknown MsgId=%d
Line 3220: S0  PchAndDrx process: Unknown MsgId=%d
Line 3261: PchAndDrx process: Sfn=%d, Slot=%d, MsgId=%d(Cfg/Arfcn/CellTrk/Rel)
Line 3261: PchAndDrx process: Sfn=%d, Slot=%d, MsgId=%d(Cfg/Arfcn/CellTrk/Rel)
Line 3269: PchAndDrx receives MsgId=%d(CellTrackingInd), target ResourcesConfigurationEventId=CellTrackingInd
Line 3269: PchAndDrx receives MsgId=%d(CellTrackingInd), target ResourcesConfigurationEventId=CellTrackingInd
Line 3277: PchAndDrx receives MsgId=%d(CellTrackingInd), target StartStopDecodingFsmEventId=CellTrackingInd
Line 3277: PchAndDrx receives MsgId=%d(CellTrackingInd), target StartStopDecodingFsmEventId=CellTrackingInd
Line 3285: S0  PchAndDrx process: Unknown MsgId=%d
Line 3285: S0  PchAndDrx process: Unknown MsgId=%d
Line 3328: PchAndDrx process: Sfn=%d, Slot=%d, MsgId=%d(Cfg/Arfcn/CellTrk/Rel)
Line 3328: PchAndDrx process: Sfn=%d, Slot=%d, MsgId=%d(Cfg/Arfcn/CellTrk/Rel)
Line 3335: AbortCnf received, isAbortIssued %d isGsmMsmtDone %d isEutraMsmtDone %d
Line 3335: AbortCnf received, isAbortIssued %d isGsmMsmtDone %d isEutraMsmtDone %d
Line 3358: S0  PchAndDrx process: Unknown MsgId=%d
Line 3358: S0  PchAndDrx process: Unknown MsgId=%d
Line 3501: S0  uphy_CPchAndDrxResourcesController_sendIratBplmnStartInd: Irat BPLMN Ind is sent to DSLRC
Line 3501: S0  uphy_CPchAndDrxResourcesController_sendIratBplmnStartInd: Irat BPLMN Ind is sent to DSLRC
Line 3506: S0  uphy_CPchAndDrxResourcesController_sendIratBplmnStartInd: Unable to send Irat BPLMN Ind to DSLRC !!
Line 3506: S0  uphy_CPchAndDrxResourcesController_sendIratBplmnStartInd: Unable to send Irat BPLMN Ind to DSLRC !!
Line 4388: DSDS:uphy_CPchAndDrxResourcesController_AskToDsLrcStf: currentTime=%u microseconds
Line 4388: DSDS:uphy_CPchAndDrxResourcesController_AskToDsLrcStf: currentTime=%u microseconds
Line 4393: RF Reject by DSL1RC when waking up 3G
Line 4393: RF Reject by DSL1RC when waking up 3G
Line 4398: RF Grant by DSL1RC when waking up 3G
Line 4398: RF Grant by DSL1RC when waking up 3G
Line 4438: Updated ECIO and RsCp to DSRL1C
Line 4438: Updated ECIO and RsCp to DSRL1C
Line 4444: S0  DSDS:PchAndDrx Real wakeup schedule by UHAL: currenttime=%u[us] SleepDuration = %d[slot], nextEventStartTime = %u[us]
Line 4444: S0  DSDS:PchAndDrx Real wakeup schedule by UHAL: currenttime=%u[us] SleepDuration = %d[slot], nextEventStartTime = %u[us]
Line 4498: RF Reject by DSL1RC when waking up 3G, HWUsageStatus = %d
Line 4498: RF Reject by DSL1RC when waking up 3G, HWUsageStatus = %d
Line 4515: RF Grant by DSL1RC when waking up 3G
Line 4515: RF Grant by DSL1RC when waking up 3G
Line 4532: RF was in use before wakeup for PCH, RF config not reqd
Line 4532: RF was in use before wakeup for PCH, RF config not reqd
Line 4550: S0  SMC Correction for client = %d,HwSfn = %d SwSfn = %d
Line 4550: S0  SMC Correction for client = %d,HwSfn = %d SwSfn = %d
Line 4551: S0  SMC Correction for client = %d,HwSlot = %d PreviousSwSlot = %d
Line 4551: S0  SMC Correction for client = %d,HwSlot = %d PreviousSwSlot = %d
Line 4558: S0  SMC Correction for client = %d,NewSwSlot = %d
Line 4558: S0  SMC Correction for client = %d,NewSwSlot = %d
Line 4629: [InterFreqDR] Send Rf Request for remaining measurements
Line 4629: [InterFreqDR] Send Rf Request for remaining measurements
Line 4633: DSDS: Unable to send RF request message to DSLRC
Line 4633: DSDS: Unable to send RF request message to DSLRC
Line 4683: Updated ECIO and RsCp to DSRL1C
Line 4683: Updated ECIO and RsCp to DSRL1C
Line 4725: DRDSDS: PCH-PCH Conflict identified
Line 4725: DRDSDS: PCH-PCH Conflict identified
Line 4729: DRDSDS: DCH-PCH Conflict identified
Line 4729: DRDSDS: DCH-PCH Conflict identified
Line 4748: DSDS: Reject received while updating reason to PS for BG_PCH :: isRfInUseStatus %d
Line 4748: DSDS: Reject received while updating reason to PS for BG_PCH :: isRfInUseStatus %d
Line 4753: DSDS: requestDslrcRfAccess sent to DSLRC interface from %d with cause %d and time %d
Line 4753: DSDS: requestDslrcRfAccess sent to DSLRC interface from %d with cause %d and time %d
Line 4759: DSDS PCHrequeststatus: scheduled time %u requested time %u deviation from scheduled %d Reject/Grant(0/)-(%d), uphydslrcRFState %d
Line 4759: DSDS PCHrequeststatus: scheduled time %u requested time %u deviation from scheduled %d Reject/Grant(0/)-(%d), uphydslrcRFState %d
Line 4788: [InterFreqDR] isInterFMeasOngoingUnderDR=%d isRfRequestedForMeas=%d
Line 4788: [InterFreqDR] isInterFMeasOngoingUnderDR=%d isRfRequestedForMeas=%d
Line 4815: S0  DSDS: requestDslrcRfAccess sent to DSLRC interface from %d with cause %d and time %d
Line 4815: S0  DSDS: requestDslrcRfAccess sent to DSLRC interface from %d with cause %d and time %d
Line 4822: S0  DSDS: uphy_CPchAndDrxResourcesController_sendDirectRfRequestForMeasure : result %d, isRfInUse %d
Line 4822: S0  DSDS: uphy_CPchAndDrxResourcesController_sendDirectRfRequestForMeasure : result %d, isRfInUse %d
Line 4847: S0  DSDS: Unable to send RF pause done message to DSLRC
Line 4847: S0  DSDS: Unable to send RF pause done message to DSLRC
Line 4851: S0  DSDS: sendRfPauseDone sent to DSLRC interface with %d
Line 4851: S0  DSDS: sendRfPauseDone sent to DSLRC interface with %d
Line 5370: S0  engagedRlPhychLinksArray == NULL pointer
Line 5370: S0  engagedRlPhychLinksArray == NULL pointer
Line 5383: S0  PchAndDrx uphy_configUhalInstancesStf: No more free RL-s
Line 5383: S0  PchAndDrx uphy_configUhalInstancesStf: No more free RL-s
Line 5406: S0  PchAndDrx uphy_configUhalInstancesStf: rakeRl config failed
Line 5406: S0  PchAndDrx uphy_configUhalInstancesStf: rakeRl config failed
Line 5414: PchAndDrx uphy_configUhalInstancesStf: sttdEnabled=%d 
Line 5414: PchAndDrx uphy_configUhalInstancesStf: sttdEnabled=%d 
Line 5468: S0  PchAndDrx uphy_configUhalInstancesStf: Pich config failed
Line 5468: S0  PchAndDrx uphy_configUhalInstancesStf: Pich config failed
Line 5492: S0  PchAndDrx uphy_configUhalInstancesStf: rakePhyCh config failed
Line 5492: S0  PchAndDrx uphy_configUhalInstancesStf: rakePhyCh config failed
Line 5505: S0  PchAndDrx uphy_configUhalInstancesStf: sccpchRakeNr = %d
Line 5505: S0  PchAndDrx uphy_configUhalInstancesStf: sccpchRakeNr = %d
Line 5518: S0  PchAndDrx uphy_configUhalInstancesStf: rakePhyCh config failed
Line 5518: S0  PchAndDrx uphy_configUhalInstancesStf: rakePhyCh config failed
Line 5568: S0  PchAndDrx uphy_configUhalInstancesStf: rlPhyCh config failed
Line 5568: S0  PchAndDrx uphy_configUhalInstancesStf: rlPhyCh config failed
Line 5603: S0  PchAndDrx uphy_configUhalInstancesStf: rlPhyCh config failed
Line 5603: S0  PchAndDrx uphy_configUhalInstancesStf: rlPhyCh config failed
Line 5645: S0  PchAndDrx uphy_configUhalInstancesStf: Not enough free Trch-s
Line 5645: S0  PchAndDrx uphy_configUhalInstancesStf: Not enough free Trch-s
Line 5659: S0  PchAndDrx uphy_configUhalInstancesStf: trCh config failed
Line 5659: S0  PchAndDrx uphy_configUhalInstancesStf: trCh config failed
Line 5679: S0  PchAndDrx uphy_configUhalInstancesStf: trCh config failed
Line 5679: S0  PchAndDrx uphy_configUhalInstancesStf: trCh config failed
Line 5725: S0  PchAndDrx uphy_configUhalInstancesStf: Not enough free Cctrch-s
Line 5725: S0  PchAndDrx uphy_configUhalInstancesStf: Not enough free Cctrch-s
Line 5757: S0  PchAndDrx uphy_configUhalInstancesStf: DlCcTrCh config failed
Line 5757: S0  PchAndDrx uphy_configUhalInstancesStf: DlCcTrCh config failed
Line 6125: S0  PchAndDrx getDrxCycleLength: configMsg==NULL
Line 6125: S0  PchAndDrx getDrxCycleLength: configMsg==NULL
Line 6154: S0  PchAndDrx getDrxCycleLength: Unknown enum drxCycleLength=%d
Line 6154: S0  PchAndDrx getDrxCycleLength: Unknown enum drxCycleLength=%d
Line 6412: S0  wakeUpAfter(%d) < availableTimeForSearch(%d)
Line 6412: S0  wakeUpAfter(%d) < availableTimeForSearch(%d)
Line 6463: S0  isAvailableTimeForBplmnStoredCellSearch: wakeUpAfter(%d) < availableTimeForSearch(%d)
Line 6463: S0  isAvailableTimeForBplmnStoredCellSearch: wakeUpAfter(%d) < availableTimeForSearch(%d)
Line 6509: PchAndDrx clearSleepStart: sleepNotAllowed=%d, shortCtchPeriod = %d
Line 6509: PchAndDrx clearSleepStart: sleepNotAllowed=%d, shortCtchPeriod = %d
Line 7244: No MP info for serving cell [%d, %d]
Line 7244: No MP info for serving cell [%d, %d]
Line 7250: No Cell Info [%d, %d]
Line 7250: No Cell Info [%d, %d]
Line 7253: Check Serving cell MP info [%d, %d], found = %d
Line 7253: Check Serving cell MP info [%d, %d], found = %d
Line 7336: Forcing adjustedWakeUpAfter to a frame to avoid DRX overlap/conflict with reconfiguration on other stack
Line 7336: Forcing adjustedWakeUpAfter to a frame to avoid DRX overlap/conflict with reconfiguration on other stack
Line 7339: minResUseTimeAdjust %d adjustedWakeUpAfter %d
Line 7339: minResUseTimeAdjust %d adjustedWakeUpAfter %d
Line 9340: Read(LEVEL 1) cbsScheduleSfn = %d,CTCHperiod = %d, Cbsframeoff %d currentSfn = %d
Line 9340: Read(LEVEL 1) cbsScheduleSfn = %d,CTCHperiod = %d, Cbsframeoff %d currentSfn = %d
Line 9350: S0  ReadLevelCbsScheduling: index = %d cbsScheduleSfn = %d numDrxIndices = %d
Line 9350: S0  ReadLevelCbsScheduling: index = %d cbsScheduleSfn = %d numDrxIndices = %d
Line 9356: S0  ReadLevelCbsScheduling: Warning!! Level-2 table not flushed or updated cbsScheduleSfn = %d
Line 9356: S0  ReadLevelCbsScheduling: Warning!! Level-2 table not flushed or updated cbsScheduleSfn = %d
Line 9406: S0  ReadLevelCbsScheduling: nextBlockOffsetFromUBMC = %d tempCTCHIndexOffset = %d numDrxIndices = %d BSIndexArray[numDrxIndices - ] = %d numofSFNCycleToSkip = %d numofDrxCycleToSkip = %d
Line 9406: S0  ReadLevelCbsScheduling: nextBlockOffsetFromUBMC = %d tempCTCHIndexOffset = %d numDrxIndices = %d BSIndexArray[numDrxIndices - ] = %d numofSFNCycleToSkip = %d numofDrxCycleToSkip = %d
Line 9417: S0  ReadLevelCbsScheduling - after updation: CTCHIndexOffset = %d lenCBSSchedPeriod = %d numDrxIndices = %d level2CbsScheduleLastSfn = %d
Line 9417: S0  ReadLevelCbsScheduling - after updation: CTCHIndexOffset = %d lenCBSSchedPeriod = %d numDrxIndices = %d level2CbsScheduleLastSfn = %d
Line 9430: S0  UpdateLevel2CbsScheduling: level2CbsSchedulingInfo[%d] = %d  BSIndexArray[%d] = %d
Line 9430: S0  UpdateLevel2CbsScheduling: level2CbsSchedulingInfo[%d] = %d  BSIndexArray[%d] = %d
Line 9468: S0  Clear Level 2 info at currentSfn = %d
Line 9468: S0  Clear Level 2 info at currentSfn = %d
Line 9859: S0  uphy_CPchAndDrxResourcesController_triggerInternalPauseReq: sending EUphyPchAndDrxResourcesControllerMsgId_RfUsePauseReq
Line 9859: S0  uphy_CPchAndDrxResourcesController_triggerInternalPauseReq: sending EUphyPchAndDrxResourcesControllerMsgId_RfUsePauseReq
Line 9867: S0  3G3G DSDS: uphy_CPchAndDrxResourcesController_triggerInternalPauseReq: Suspend PCH configuration
Line 9867: S0  3G3G DSDS: uphy_CPchAndDrxResourcesController_triggerInternalPauseReq: Suspend PCH configuration
Line 9883: S0  uphy_CPchAndDrxResourcesController_triggerInternalResumeReq: sending EUphyPchAndDrxResourcesControllerMsgId_RfUsePauseReq
Line 9883: S0  uphy_CPchAndDrxResourcesController_triggerInternalResumeReq: sending EUphyPchAndDrxResourcesControllerMsgId_RfUsePauseReq
Line 9885: S0  3G3G DSDS: uphy_CPchAndDrxResourcesController_triggerInternalResumeReq: Start PCH Reconfiguration
Line 9885: S0  3G3G DSDS: uphy_CPchAndDrxResourcesController_triggerInternalResumeReq: Start PCH Reconfiguration
Line 9952: CalculateEarlyWakeupTimeInSlots : startStopTriggerCount has reached for non-identified, 60 slots added
Line 9952: CalculateEarlyWakeupTimeInSlots : startStopTriggerCount has reached for non-identified, 60 slots added
Line 9957: CalculateEarlyWakeupTimeInSlots : earlyWakeupSlots %d
Line 9957: CalculateEarlyWakeupTimeInSlots : earlyWakeupSlots %d
Line 9962: CalculateEarlyWakeupTimeInSlots :( numOfInraFeqMidServer not present)
Line 9962: CalculateEarlyWakeupTimeInSlots :( numOfInraFeqMidServer not present)
Line 9999: Rescheduling BPLMN Timeout Timer. bplmnUphyTimeoutRSN = %d, currentRSN = %d, earlyWakeupInSlots = %d
Line 9999: Rescheduling BPLMN Timeout Timer. bplmnUphyTimeoutRSN = %d, currentRSN = %d, earlyWakeupInSlots = %d
Line 10019: Rescheduling BPLMN Timeout Timer 5 slots from currentRSN
Line 10019: Rescheduling BPLMN Timeout Timer 5 slots from currentRSN
Line 10034: BPLMN Timeout Timer rescheduled from %d to %d
Line 10034: BPLMN Timeout Timer rescheduled from %d to %d
Line 10043: BPLMN Timer not running
Line 10043: BPLMN Timer not running
Line 10476: PchAndDrx ignoreAutoPause isActive=%d, isConfigured=%d, isBackPch=%d, isInDecoding=%d
Line 10476: PchAndDrx ignoreAutoPause isActive=%d, isConfigured=%d, isBackPch=%d, isInDecoding=%d
Line 10490: S0 DSDS_CBS stopDlPhychAndCctrchForCtch: StartStopState %d
Line 10490: S0 DSDS_CBS stopDlPhychAndCctrchForCtch: StartStopState %d
Line 10498: S0  PchAndDrx releaseSCCPCH: DlPhychReleaseCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 10498: S0  PchAndDrx releaseSCCPCH: DlPhychReleaseCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 10512: S0  Stop CcTrCh - uhal_Cmd_exec
Line 10512: S0  Stop CcTrCh - uhal_Cmd_exec
Line 10533: S0 DSDS_CBS startDlPhychAndCctrchForCtch StartStopState %d
Line 10533: S0 DSDS_CBS startDlPhychAndCctrchForCtch StartStopState %d
Line 10541: S0  PchAndDrx reconfigurePICH: DlPhychStartCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 10541: S0  PchAndDrx reconfigurePICH: DlPhychStartCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 10553: S0  PchAndDrx reconfigurePICH: RL(ScrCodeNr=%d) not found in the PCH MappingDatabase
Line 10553: S0  PchAndDrx reconfigurePICH: RL(ScrCodeNr=%d) not found in the PCH MappingDatabase
Line 10569: RlReferenceConfigCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 10569: RlReferenceConfigCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 10585: S0  confirmMsg == NULL pointer
Line 10585: S0  confirmMsg == NULL pointer
Line 10618: uphy_CPchAndDrxResourcesController_triggerImmediateMeasurements: No processing required since message received at state %d, Rfinuse %d
Line 10618: uphy_CPchAndDrxResourcesController_triggerImmediateMeasurements: No processing required since message received at state %d, Rfinuse %d
Line 10644: [InterFreqDR] External DRDS Transition Req
Line 10644: [InterFreqDR] External DRDS Transition Req
Line 10649: [InterFreqDR] Internal DRDS Transition Req
Line 10649: [InterFreqDR] Internal DRDS Transition Req
Line 10694: [InterFreqDR] Rf Back triggered in Retiring for further Inter Meas
Line 10694: [InterFreqDR] Rf Back triggered in Retiring for further Inter Meas
Line 10715: [InterFreqDR] DRDS transition Cnf sent
Line 10715: [InterFreqDR] DRDS transition Cnf sent
Line 10719: [InterFreqDR] Unable to send DRToDSTransitionCnf msg
Line 10719: [InterFreqDR] Unable to send DRToDSTransitionCnf msg
Line 10733: [InterFreqDR] Trigger InterF Done after DRDS transition Cnf
Line 10733: [InterFreqDR] Trigger InterF Done after DRDS transition Cnf
Line 10736: [InterFreqDR] uphy_CPchAndDrxResourcesController_sendDRToDSTransitionCnf: Internal DRToDSTransition Success %d
Line 10736: [InterFreqDR] uphy_CPchAndDrxResourcesController_sendDRToDSTransitionCnf: Internal DRToDSTransition Success %d
Line 10756: [InterFreqDR] uphy_CPchAndDrxResourcesController_updateDRDBForInterFreqMeasurements
Line 10756: [InterFreqDR] uphy_CPchAndDrxResourcesController_updateDRDBForInterFreqMeasurements
Line 10807: uphy_CPchAndDrxResourcesController_scheduleMeasurements: currentRSN=%d, pichFrameBoundaryRsn=%d, diffRsn=%d, MeasRsn = %d isImmediate %d
Line 10807: uphy_CPchAndDrxResourcesController_scheduleMeasurements: currentRSN=%d, pichFrameBoundaryRsn=%d, diffRsn=%d, MeasRsn = %d isImmediate %d
Line 10819: [InterFreqDR] Update DRDB for InterF meas
Line 10819: [InterFreqDR] Update DRDB for InterF meas
Line 10825: [InterFreqDR] Update DR Impossible for IRAT Meas
Line 10825: [InterFreqDR] Update DR Impossible for IRAT Meas
Line 10843: DSDS:uphy_CPchAndDrxResourcesController_scheduleMeasurements: wakeup indicated to dsl1rc=%d microseconds
Line 10843: DSDS:uphy_CPchAndDrxResourcesController_scheduleMeasurements: wakeup indicated to dsl1rc=%d microseconds
Line 10849: StartMeasToken not required
Line 10849: StartMeasToken not required
Line 10890: S0  uphy_CPchAndDrxResourcesController_startMeasurements: bch used = %d isRetiringMeasScheduled = %d
Line 10890: S0  uphy_CPchAndDrxResourcesController_startMeasurements: bch used = %d isRetiringMeasScheduled = %d
Line 10898: [InterFreqDR] DR available during Meas
Line 10898: [InterFreqDR] DR available during Meas
Line 10925: S0  SMC Correction for client = %d,HwSfn = %d SwSfn = %d
Line 10925: S0  SMC Correction for client = %d,HwSfn = %d SwSfn = %d
Line 10926: S0  SMC Correction for client = %d,HwSlot = %d PreviousSwSlot = %d
Line 10926: S0  SMC Correction for client = %d,HwSlot = %d PreviousSwSlot = %d
Line 10932: S0  SMC Correction for client = %d,NewSwSlot = %d
Line 10932: S0  SMC Correction for client = %d,NewSwSlot = %d
Line 11536: S0  uphy_CPchAndDrxResourcesController_getPqSlot = %d
Line 11536: S0  uphy_CPchAndDrxResourcesController_getPqSlot = %d
Line 11627: Trigger PCH resources release after releasing StartStopFSM
Line 11627: Trigger PCH resources release after releasing StartStopFSM
Line 11650: uphy_CPchAndDrxResourcesController_sendSearcherRequestToDsl1rc: rValue %d
Line 11650: uphy_CPchAndDrxResourcesController_sendSearcherRequestToDsl1rc: rValue %d
Line 11653: Searcher Grant by DSL1RC when waking up 3G
Line 11653: Searcher Grant by DSL1RC when waking up 3G
Line 11688: uphy_CPchAndDrxResourcesController_sendSearcherRequestToDsl1rcForMeas: rValue %d
Line 11688: uphy_CPchAndDrxResourcesController_sendSearcherRequestToDsl1rcForMeas: rValue %d
Line 11691: Searcher Grant by DSL1RC during InterFreqMeas in 3G
Line 11691: Searcher Grant by DSL1RC during InterFreqMeas in 3G
Line 11720: StartStopDecodingController handleWaking: target StartStopDecodingFsmEventId=%d(WakeUpReq) run at rsn=%d sfn=%d,deadline=%d
Line 11720: StartStopDecodingController handleWaking: target StartStopDecodingFsmEventId=%d(WakeUpReq) run at rsn=%d sfn=%d,deadline=%d
Line 11725: uphy_CPchAndDrxResourcesController_SearcherUseResumeReq: Unexpected CurrentStatus %
Line 11725: uphy_CPchAndDrxResourcesController_SearcherUseResumeReq: Unexpected CurrentStatus %
Line 11742: uphy_CPchAndDrxResourcesController_sendSearcherUseReleaseDone
Line 11742: uphy_CPchAndDrxResourcesController_sendSearcherUseReleaseDone
Line 11746: DSDS: CPchAndDrxResourcesController Unable to send searcher release done message to DSL1RC
Line 11746: DSDS: CPchAndDrxResourcesController Unable to send searcher release done message to DSL1RC
Line 11786: Grant for measurements after transition, trigger meas
Line 11786: Grant for measurements after transition, trigger meas
Line 11812: S0  SMC Correction for client = %d,HwSfn = %d SwSfn = %d
Line 11812: S0  SMC Correction for client = %d,HwSfn = %d SwSfn = %d
Line 11813: S0  SMC Correction for client = %d,HwSlot = %d PreviousSwSlot = %d
Line 11813: S0  SMC Correction for client = %d,HwSlot = %d PreviousSwSlot = %d
Line 11819: S0  SMC Correction for client = %d,NewSwSlot = %d
Line 11819: S0  SMC Correction for client = %d,NewSwSlot = %d
Line 11836: Reject received for measurements, schedule sleeping
Line 11836: Reject received for measurements, schedule sleeping
Line 11848: Reject with retry received for measurements, timeSlotsToWait = %d, retryPeriod = %d 
Line 11848: Reject with retry received for measurements, timeSlotsToWait = %d, retryPeriod = %d 
Line 11866: Reject received for measurements, schedule sleeping
Line 11866: Reject received for measurements, schedule sleeping
Line 11921: DR-DSDS: uphy_CPchAndDrxResourcesController_updateIsDRImpossible isDRImpossible %d
Line 11921: DR-DSDS: uphy_CPchAndDrxResourcesController_updateIsDRImpossible isDRImpossible %d
Line 11943: Searcher Reject by DSL1RC when waking up 3G
Line 11943: Searcher Reject by DSL1RC when waking up 3G
Line 12004: tryToSleep not called during RfRelease as current state is %d
Line 12004: tryToSleep not called during RfRelease as current state is %d
Line 12037: Message NULL
Line 12037: Message NULL
Line 12057: Message sending failed
Line 12057: Message sending failed
Line 12064: uphy_CPchAndDrxResourcesController_IssueAbortReq
Line 12064: uphy_CPchAndDrxResourcesController_IssueAbortReq
Line 12070: uphy_CPchAndDrxResourcesController_IssueAbortReq isAbortIssued: %d isAbortDoneInRetiring: %d RfbackProcessingStarted: %d DRToDSTransitionRequestedFromRRM: %d
Line 12070: uphy_CPchAndDrxResourcesController_IssueAbortReq isAbortIssued: %d isAbortDoneInRetiring: %d RfbackProcessingStarted: %d DRToDSTransitionRequestedFromRRM: %d
Line 3465: S0  PchAndDrx requestCellTracking: cellSfnReqMsg send failure
Line 3465: S0  PchAndDrx requestCellTracking: cellSfnReqMsg send failure
Line 3476: PchAndDrx requestCellTracking: Sfn=%d, Slot=%d, TransactId=%d, uarfcn=%d, primaryScrCode=%d
Line 3476: PchAndDrx requestCellTracking: Sfn=%d, Slot=%d, TransactId=%d, uarfcn=%d, primaryScrCode=%d
Line 3481: S0  cellSfnReqMsg is NULL
Line 3481: S0  cellSfnReqMsg is NULL
Line 4217: S0  Dereferenced NULL pointer : bplmnSearchController
Line 4217: S0  Dereferenced NULL pointer : bplmnSearchController
Line 4226: Before SMC Correction for client = %d,HwSfn = %d SwSfn = %d
Line 4226: Before SMC Correction for client = %d,HwSfn = %d SwSfn = %d
Line 4234: SMC Correction for client = %d,HwSfn = %d SwSfn = %d
Line 4234: SMC Correction for client = %d,HwSfn = %d SwSfn = %d
Line 4269: uphy_CPchAndDrxResourcesController_scheduleWakeupfornextSleep: timeToGo is minus and adjust: reSyncTime=%d but timeToGo=%d.pchAndDrxResourcesController_ptr->CStartStopDecodingController.CResourcesConfigurationController.maxTTI =%d
Line 4269: uphy_CPchAndDrxResourcesController_scheduleWakeupfornextSleep: timeToGo is minus and adjust: reSyncTime=%d but timeToGo=%d.pchAndDrxResourcesController_ptr->CStartStopDecodingController.CResourcesConfigurationController.maxTTI =%d
Line 4285: DSDS: uphy_CPchAndDrxResourcesController_scheduleWakeupfornextSleep: this_Sfn = %d timeToGo = %d prevPichSfn = %d, drxCycleLength =  %d
Line 4285: DSDS: uphy_CPchAndDrxResourcesController_scheduleWakeupfornextSleep: this_Sfn = %d timeToGo = %d prevPichSfn = %d, drxCycleLength =  %d
Line 4307: S0  DSDS_CBS: uphy_CPchAndDrxResourcesController_scheduleWakeupfornextSleep: early_wakeup is TRUE
Line 4307: S0  DSDS_CBS: uphy_CPchAndDrxResourcesController_scheduleWakeupfornextSleep: early_wakeup is TRUE
Line 4313: S0  DSDS: uphy_CPchAndDrxResourcesController_scheduleWakeupfornextSleep: Time to go= %d initialPagingOccasionSfn = %d, this_Sfn = %d, drxCycleLength = %d 
Line 4313: S0  DSDS: uphy_CPchAndDrxResourcesController_scheduleWakeupfornextSleep: Time to go= %d initialPagingOccasionSfn = %d, this_Sfn = %d, drxCycleLength = %d 
Line 4316: S0  DSDS: uphy_CPchAndDrxResourcesController_scheduleWakeupfornextSleep: Next paging sfn is= %d 
Line 4316: S0  DSDS: uphy_CPchAndDrxResourcesController_scheduleWakeupfornextSleep: Next paging sfn is= %d 
Line 4347: scheduleWakeup: bchUsed=%d, sleepNotAllowed=%d, AfterIdleExit=%d, CellReselFlag=%d, isBPLMN = %d, wakeuptimeafter = %d
Line 4347: scheduleWakeup: bchUsed=%d, sleepNotAllowed=%d, AfterIdleExit=%d, CellReselFlag=%d, isBPLMN = %d, wakeuptimeafter = %d
Line 3542: S0  uphy_scheduleWakeupfornextCycle: numofDrxCycleToSkip = %d
Line 3542: S0  uphy_scheduleWakeupfornextCycle: numofDrxCycleToSkip = %d
Line 3554: S0  uphy_scheduleWakeupfornextCycle: Reject during RF request for CTCH, increment index = %d
Line 3554: S0  uphy_scheduleWakeupfornextCycle: Reject during RF request for CTCH, increment index = %d
Line 3578: S0  uphy_scheduleWakeupfornextCycle: index = %d BSIndexArray[index] = %d BSIndexArray[index - ] = %d numOfSFNCycleToSkip = %d numofDrxCycleToSkip = %d
Line 3578: S0  uphy_scheduleWakeupfornextCycle: index = %d BSIndexArray[index] = %d BSIndexArray[index - ] = %d numOfSFNCycleToSkip = %d numofDrxCycleToSkip = %d
Line 3912: uphy_scheduleWakeupfornextCycle: wakeSfnCtch: %d, this_Sfn %d, wakeSfnPich: %d, sfnToDecodeFachForCtch %d, isWakeUpSFNForCTCHValid %d
Line 3912: uphy_scheduleWakeupfornextCycle: wakeSfnCtch: %d, this_Sfn %d, wakeSfnPich: %d, sfnToDecodeFachForCtch %d, isWakeUpSFNForCTCHValid %d
Line 3922: uphy_scheduleWakeupfornextCycle: Fach for CTCH SFN in between sleep cycle...Need to wakeup
Line 3922: uphy_scheduleWakeupfornextCycle: Fach for CTCH SFN in between sleep cycle...Need to wakeup
Line 3930: uphy_scheduleWakeupfornextCycle: Fach for CTCH SFN in between sleep cycle...Need to wakeup timeToGo = %d
Line 3930: uphy_scheduleWakeupfornextCycle: Fach for CTCH SFN in between sleep cycle...Need to wakeup timeToGo = %d
Line 3941: uphy_scheduleWakeupfornextCycle: diffCurrentSfnCbs %d min_catnap_length %d
Line 3941: uphy_scheduleWakeupfornextCycle: diffCurrentSfnCbs %d min_catnap_length %d
Line 3961: uphy_scheduleWakeupfornextCycle: diffPichSfnCbs = %d, pich_Sfn =%d, sfnToDecodeFachForCtch = %d isWakeUpSFNForCTCHValid = %d
Line 3961: uphy_scheduleWakeupfornextCycle: diffPichSfnCbs = %d, pich_Sfn =%d, sfnToDecodeFachForCtch = %d isWakeUpSFNForCTCHValid = %d
Line 3974: S0  DSDS: uphy_CPchAndDrxResourcesController_scheduleWakeupfornextSleep: Next wakeup sfn is= %d 
Line 3974: S0  DSDS: uphy_CPchAndDrxResourcesController_scheduleWakeupfornextSleep: Next wakeup sfn is= %d 
Line 3669: S0  uphy_scheduleWakeupfornextCycle: index = %d BSIndexArray[index] = %d BSIndexArray[index - ] = %d numOfSFNCycleToSkip = %d numofDrxCycleToSkip = %d
Line 3669: S0  uphy_scheduleWakeupfornextCycle: index = %d BSIndexArray[index] = %d BSIndexArray[index - ] = %d numOfSFNCycleToSkip = %d numofDrxCycleToSkip = %d
Line 3690: uphy_scheduleWakeupfornextCycle: Taking the next CTCH SFN - %d
Line 3690: uphy_scheduleWakeupfornextCycle: Taking the next CTCH SFN - %d
Line 3738: uphy_scheduleWakeupfornextCycle: wakeSfnCtch: %d, this_Sfn %d, wakeSfnPich: %d, sfnToDecodeFachForCtch %d, isWakeUpSFNForCTCHValid %d
Line 3738: uphy_scheduleWakeupfornextCycle: wakeSfnCtch: %d, this_Sfn %d, wakeSfnPich: %d, sfnToDecodeFachForCtch %d, isWakeUpSFNForCTCHValid %d
Line 3748: uphy_scheduleWakeupfornextCycle: Fach for CTCH SFN in between sleep cycle...Need to wakeup
Line 3748: uphy_scheduleWakeupfornextCycle: Fach for CTCH SFN in between sleep cycle...Need to wakeup
Line 3758: uphy_scheduleWakeupfornextCycle: Fach for CTCH SFN in between sleep cycle...Need to wakeup timeToGo = %d wakeUpAfter = %d
Line 3758: uphy_scheduleWakeupfornextCycle: Fach for CTCH SFN in between sleep cycle...Need to wakeup timeToGo = %d wakeUpAfter = %d
Line 3769: uphy_scheduleWakeupfornextCycle: diffCurrentSfnCbs %d min_catnap_length %d
Line 3769: uphy_scheduleWakeupfornextCycle: diffCurrentSfnCbs %d min_catnap_length %d
Line 3789: uphy_scheduleWakeupfornextCycle: diffPichSfnCbs = %d, pich_Sfn =%d, sfnToDecodeFachForCtch = %d isWakeUpSFNForCTCHValid = %d
Line 3789: uphy_scheduleWakeupfornextCycle: diffPichSfnCbs = %d, pich_Sfn =%d, sfnToDecodeFachForCtch = %d isWakeUpSFNForCTCHValid = %d
Line 3802: uphy_scheduleWakeupfornextCycle: wakeUpAfter = %d
Line 3802: uphy_scheduleWakeupfornextCycle: wakeUpAfter = %d
Line 4069: isBplmn = %d, wakeuptimeafter = %d, Available time (ms)= %d, Start time (Us)= %d
Line 4069: isBplmn = %d, wakeuptimeafter = %d, Available time (ms)= %d, Start time (Us)= %d
Line 4073: S0  BPLMNAvailableTimeIndMsg is NULL
Line 4073: S0  BPLMNAvailableTimeIndMsg is NULL
Line 4088: S0  Submitting BPLMN Timeout Timer
Line 4088: S0  Submitting BPLMN Timeout Timer
Line 4130: S0  send failed
Line 4130: S0  send failed
Line 4158: S0  IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 4158: S0  IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 4889: PchAndDrx isCellTrackingCompleted: cellTrackingTransactId=%d
Line 4889: PchAndDrx isCellTrackingCompleted: cellTrackingTransactId=%d
Line 4923: PchAndDrx isCellTrackingCompleted: Unrecognized cellTrackingTransactId=%d
Line 4923: PchAndDrx isCellTrackingCompleted: Unrecognized cellTrackingTransactId=%d
Line 4969: S0  PchAndDrx cancelCellTracking: cellSfnCancelReqMsg send failure
Line 4969: S0  PchAndDrx cancelCellTracking: cellSfnCancelReqMsg send failure
Line 4975: PchAndDrx cancelCellTracking: TransactId=%d, uarfcn=%d, primaryScrCode=%d
Line 4975: PchAndDrx cancelCellTracking: TransactId=%d, uarfcn=%d, primaryScrCode=%d
Line 4980: S0  cellSfnCancelReqMsg is NULL
Line 4980: S0  cellSfnCancelReqMsg is NULL
Line 5011: DrImpossible set to TRUE due to lower DRX
Line 5011: DrImpossible set to TRUE due to lower DRX
Line 5025: PchAndDrx enableEnDecoding: enters into StartStopDecodingController, target StartStopDecodingFsmEventId=%d(Start)
Line 5025: PchAndDrx enableEnDecoding: enters into StartStopDecodingController, target StartStopDecodingFsmEventId=%d(Start)
Line 5037: S0  PchAndDrx startUhalInstances: DlCctrchEnableCmd exec failed
Line 5037: S0  PchAndDrx startUhalInstances: DlCctrchEnableCmd exec failed
Line 5101: S0  PchAndDrx sendConfirmationMsg for release [isPositive: %d]
Line 5101: S0  PchAndDrx sendConfirmationMsg for release [isPositive: %d]
Line 5160: S0  CTCH release by inter RAT coordinator
Line 5160: S0  CTCH release by inter RAT coordinator
Line 5166: S0  Back PCH is released by inter RAT coordinator
Line 5166: S0  Back PCH is released by inter RAT coordinator
Line 5170: S0  PchAndDrx sendConfirmationMsg: doesn't expect to send anything other than release Cnf to interRatCoordinator
Line 5170: S0  PchAndDrx sendConfirmationMsg: doesn't expect to send anything other than release Cnf to interRatCoordinator
Line 5180: S0  PchAndDrx sendConfirmationMsg: send failed
Line 5180: S0  PchAndDrx sendConfirmationMsg: send failed
Line 5184: PchAndDrx sendConfirmationMsg: send succeeded
Line 5184: PchAndDrx sendConfirmationMsg: send succeeded
Line 5189: S0  cnfMsg is NULL
Line 5189: S0  cnfMsg is NULL
Line 5218: S0  PchAndDrx sendConfirmationMsg: Pch configuration failed so setting Tx Tm mode to false
Line 5218: S0  PchAndDrx sendConfirmationMsg: Pch configuration failed so setting Tx Tm mode to false
Line 5253: S0  PchAndDrx sendConfirmationMsg: Wrong MsgId=%d received. Only config and release need confirm
Line 5253: S0  PchAndDrx sendConfirmationMsg: Wrong MsgId=%d received. Only config and release need confirm
Line 5271: S0  PchAndDrx sendConfirmationMsg: send failed
Line 5271: S0  PchAndDrx sendConfirmationMsg: send failed
Line 5277: PchAndDrx sendConfirmationMsg: send succeeded at RSN=%d, Sfn=%d, Slot=%d
Line 5277: PchAndDrx sendConfirmationMsg: send succeeded at RSN=%d, Sfn=%d, Slot=%d
Line 5282: S0  cnfMsg is NULL
Line 5282: S0  cnfMsg is NULL
Line 8299: S0  message creation failed in uphy_CPchAndDrxResourcesController_RequestMultipathMgmtStopUpdating
Line 8299: S0  message creation failed in uphy_CPchAndDrxResourcesController_RequestMultipathMgmtStopUpdating
Line 8315: S0  PchAndDrx RequestMultipathMgmtStopUpdating: msg send failed
Line 8315: S0  PchAndDrx RequestMultipathMgmtStopUpdating: msg send failed
Line 8329: PchAndDrx RequestMultipathMgmtStopUpdating: msg send succeeded. Sfn=%d, Slot=%d
Line 8329: PchAndDrx RequestMultipathMgmtStopUpdating: msg send succeeded. Sfn=%d, Slot=%d
Line 5306: PchAndDrx configUhalInstances: launch uphy_configUhalInstancesStf
Line 5306: PchAndDrx configUhalInstances: launch uphy_configUhalInstancesStf
Line 5813: S0  UhalConfig in DsSuspend State: Returning Token
Line 5813: S0  UhalConfig in DsSuspend State: Returning Token
Line 5822: PchAndDrx uphy_configUhalInstancesStf: state=%d (StateInit or StateRlConfig)
Line 5822: PchAndDrx uphy_configUhalInstancesStf: state=%d (StateInit or StateRlConfig)
Line 5832: PchAndDrx uphy_configUhalInstancesStf: state=%d (StatePhyChConfig)
Line 5832: PchAndDrx uphy_configUhalInstancesStf: state=%d (StatePhyChConfig)
Line 5842: PchAndDrx uphy_configUhalInstancesStf: state=%d (StateRlPhychConfig)
Line 5842: PchAndDrx uphy_configUhalInstancesStf: state=%d (StateRlPhychConfig)
Line 5852: PchAndDrx uphy_configUhalInstancesStf: state=%d (StateDlTrChConfig)
Line 5852: PchAndDrx uphy_configUhalInstancesStf: state=%d (StateDlTrChConfig)
Line 5862: PchAndDrx uphy_configUhalInstancesStf: state=%d (StateDlCctrchConfig)
Line 5862: PchAndDrx uphy_configUhalInstancesStf: state=%d (StateDlCctrchConfig)
Line 5873: S0  PchAndDrx uphy_configUhalInstancesStf: Invalid state=%d
Line 5873: S0  PchAndDrx uphy_configUhalInstancesStf: Invalid state=%d
Line 5880: PchAndDrx uphy_configUhalInstancesStf: state=%d (StateCompleting)
Line 5880: PchAndDrx uphy_configUhalInstancesStf: state=%d (StateCompleting)
Line 5894: S0  PchAndDrx uphy_configUhalInstancesStf: Unknown state=%d
Line 5894: S0  PchAndDrx uphy_configUhalInstancesStf: Unknown state=%d
Line 5901: S0  PchAndDrx uphy_configUhalInstancesStf: UhalCfg Failed
Line 5901: S0  PchAndDrx uphy_configUhalInstancesStf: UhalCfg Failed
Line 5971: PchAndDrx releasePchAndDrxUhalInstances: RSN=%d, Sfn=%d, Slot=%d
Line 5971: PchAndDrx releasePchAndDrxUhalInstances: RSN=%d, Sfn=%d, Slot=%d
Line 5983: S0  PchAndDrx releasePchAndDrxUhalInstances: DlPhychReleaseCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 5983: S0  PchAndDrx releasePchAndDrxUhalInstances: DlPhychReleaseCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 6001: S0  FEE not completed
Line 6001: S0  FEE not completed
Line 6046: PchAndDrx releasePchAndDrxUhalInstances: pchAndDrxResourcesController_ptr->pich_Status=%d , Change to 'Dormant' to ensure CCtrchEnable at next PCH_CONFIG
Line 6046: PchAndDrx releasePchAndDrxUhalInstances: pchAndDrxResourcesController_ptr->pich_Status=%d , Change to 'Dormant' to ensure CCtrchEnable at next PCH_CONFIG
Line 6065: PchAndDrx registerPichIndInterruptHandler: register ESmcDidUphyUhalPichPort
Line 6065: PchAndDrx registerPichIndInterruptHandler: register ESmcDidUphyUhalPichPort
Line 6088: PchAndDrx initData
Line 6088: PchAndDrx initData
Line 6199: PchAndDrx startUhalInstances: RSN=%d, Sfn=%d, Slot=%d, pichStatus=%d(Dormant/NoSig/Nack/Ack)
Line 6199: PchAndDrx startUhalInstances: RSN=%d, Sfn=%d, Slot=%d, pichStatus=%d(Dormant/NoSig/Nack/Ack)
Line 6216: S0  PchAndDrx startUhalInstances: DlCctrchEnableCmd exec failed
Line 6216: S0  PchAndDrx startUhalInstances: DlCctrchEnableCmd exec failed
Line 6225: S0  PchAndDrx startUhalInstances: CcTrCH%d is already running!!
Line 6225: S0  PchAndDrx startUhalInstances: CcTrCH%d is already running!!
Line 6273: PchAndDrx stopUhalInstances: RSN=%d, stopPchSfn=%d, stopPchRSN=%d
Line 6273: PchAndDrx stopUhalInstances: RSN=%d, stopPchSfn=%d, stopPchRSN=%d
Line 6306: isDsRelease set to TRUE because cctrch %d is running in other stack
Line 6306: isDsRelease set to TRUE because cctrch %d is running in other stack
Line 6313: S0  PchAndDrx stopUhalInstances: DlCctrchStopCmd exec failed
Line 6313: S0  PchAndDrx stopUhalInstances: DlCctrchStopCmd exec failed
Line 6321: PchAndDrx stopUhalInstances: CCTrCH not running
Line 6321: PchAndDrx stopUhalInstances: CCTrCH not running
Line 6327: Don't stop cctrch due to time shortage
Line 6327: Don't stop cctrch due to time shortage
Line 6594: S0  PchAndDrx reconfigurePICH: PICH reconfig failed
Line 6594: S0  PchAndDrx reconfigurePICH: PICH reconfig failed
Line 6603: S0  PchAndDrx reconfigurePICH: RL(ScrCodeNr=%d) not found in the PCH MappingDatabase
Line 6603: S0  PchAndDrx reconfigurePICH: RL(ScrCodeNr=%d) not found in the PCH MappingDatabase
Line 6661: S0  PICH WA: oldPichChipOffsetToCpich=%d, piSymbolOffsetToPich=%d,pichChipOffsetToCpich = %d, newPiSymOffset = %d isTxDivCell = %d
Line 6661: S0  PICH WA: oldPichChipOffsetToCpich=%d, piSymbolOffsetToPich=%d,pichChipOffsetToCpich = %d, newPiSymOffset = %d isTxDivCell = %d
Line 6676: S0  PchAndDrx reconfigurePICH: PICH rlPhyCh config failed. rlNr=%d, pichRakeNr=%d
Line 6676: S0  PchAndDrx reconfigurePICH: PICH rlPhyCh config failed. rlNr=%d, pichRakeNr=%d
Line 6686: S0  confirmMsg == NULL pointer
Line 6686: S0  confirmMsg == NULL pointer
Line 6696: PchAndDrx reconfigurePICH: currentRSN=%d, rlNr=%d, pichRakeNr=%d, NP=%d(18/36/72/144), PI=%d, powerOffset=%d, Ovsf=%d
Line 6696: PchAndDrx reconfigurePICH: currentRSN=%d, rlNr=%d, pichRakeNr=%d, NP=%d(18/36/72/144), PI=%d, powerOffset=%d, Ovsf=%d
Line 6712: S0  PchAndDrx reconfigurePICH: PCH DlPhyCh reconfig failed
Line 6712: S0  PchAndDrx reconfigurePICH: PCH DlPhyCh reconfig failed
Line 6726: S0  PchAndDrx reconfigurePICH: PCH RlPhych reconfig failed
Line 6726: S0  PchAndDrx reconfigurePICH: PCH RlPhych reconfig failed
Line 6735: S0  PchAndDrx reconfigurePICH: DlPhychStartCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 6735: S0  PchAndDrx reconfigurePICH: DlPhychStartCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 6746: PchAndDrx reconfigurePICH: Skip config&starting SCCPCH Phych 0 : already running.
Line 6746: PchAndDrx reconfigurePICH: Skip config&starting SCCPCH Phych 0 : already running.
Line 6758: RlReferenceConfigCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 6758: RlReferenceConfigCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 6784: S  uhal_Cmd_exec
Line 6784: S  uhal_Cmd_exec
Line 6911: Short margin: currentSfn =%d slots, pchAndDrxResourcesController_ptr->pich_Sfn =%d, diff(SFN)=%d
Line 6911: Short margin: currentSfn =%d slots, pchAndDrxResourcesController_ptr->pich_Sfn =%d, diff(SFN)=%d
Line 6982: PchAndDrx :PICH start after=%d slots, currentSfn=%d, currentSlot=%d, pichSfn=%d, pichSlotOffsetToCpich=%d,PqSlot= %d, PiPosition = %d
Line 6982: PchAndDrx :PICH start after=%d slots, currentSfn=%d, currentSlot=%d, pichSfn=%d, pichSlotOffsetToCpich=%d,PqSlot= %d, PiPosition = %d
Line 7007: 3G3G:scheduleDecodingPreparation Skipping PICH Scheduling for 3G3G DSDS
Line 7007: 3G3G:scheduleDecodingPreparation Skipping PICH Scheduling for 3G3G DSDS
Line 7017: 3G3G:scheduleDecodingPreparation Skip PICH scheduling as PI occassion is in past
Line 7017: 3G3G:scheduleDecodingPreparation Skip PICH scheduling as PI occassion is in past
Line 7021: 3G3G:scheduleDecodingPreparation Skip PICH scheduling as Waking Timeout has Occured
Line 7021: 3G3G:scheduleDecodingPreparation Skip PICH scheduling as Waking Timeout has Occured
Line 11580: checkPagingAvailability : FingerStatus %d DsStatus %d waitForSigStop %d MifFreq %d isAvoidngDrxOverlap %d,isAdaptiveWakeup %d
Line 11580: checkPagingAvailability : FingerStatus %d DsStatus %d waitForSigStop %d MifFreq %d isAvoidngDrxOverlap %d,isAdaptiveWakeup %d
Line 11584: checkPagingAvailability : Need to check PICH in past %d
Line 11589: checkPagingAvailability : SS - Need to check PICH in past %d
Line 11589: checkPagingAvailability : SS - Need to check PICH in past %d
Line 11593: checkPagingAvailability : DS - Need to check PICH in past %d
Line 11593: checkPagingAvailability : DS - Need to check PICH in past %d
Line 11598: checkPagingAvailability : Need to check SCCPCH in past
Line 11607: [DR-DS]Need to check - PICH in past
Line 11607: [DR-DS]Need to check - PICH in past
Line 11971: isUpdatedBigDataPMLI(%d)
Line 11971: isUpdatedBigDataPMLI(%d)
Line 11977: isUpdatedBigDataPMLI(%d)
Line 11977: isUpdatedBigDataPMLI(%d)
Line 6356: PchAndDrx startPICH: rsn=%d, sfn=%d, slot=%d, pichStatus=%d(Dormant/NoSig/Nack/Ack)
Line 6356: PchAndDrx startPICH: rsn=%d, sfn=%d, slot=%d, pichStatus=%d(Dormant/NoSig/Nack/Ack)
Line 7120: PchAndDrx scheduleGap: issue stop as waking timeout occured
Line 7120: PchAndDrx scheduleGap: issue stop as waking timeout occured
Line 7138: S0  PchAndDrx scheduleGap: currentRSN %d boundaryRSN %d
Line 7138: S0  PchAndDrx scheduleGap: currentRSN %d boundaryRSN %d
Line 7143: S0  PchAndDrx scheduleGap: currentRSN %d Adjusted boundaryRSN %d
Line 7143: S0  PchAndDrx scheduleGap: currentRSN %d Adjusted boundaryRSN %d
Line 7148: S0  PchAndDrx scheduleGap: pchAndDrxResourcesController_ptr->myTimer!=0 before sumbit new token
Line 7148: S0  PchAndDrx scheduleGap: pchAndDrxResourcesController_ptr->myTimer!=0 before sumbit new token
Line 7186: PchAndDrx scheduleGap: cctrchNr=%d running at gapRsn=%d, currentSfn= %d pchOcassionSfn= %d sfnDiff= %d tti=%d
Line 7186: PchAndDrx scheduleGap: cctrchNr=%d running at gapRsn=%d, currentSfn= %d pchOcassionSfn= %d sfnDiff= %d tti=%d
Line 7192: PchAndDrx scheduleGap(NACK/NoResponse): cctrchNr=%d
Line 7192: PchAndDrx scheduleGap(NACK/NoResponse): cctrchNr=%d
Line 7872: S0  PchAndDrx releaseSCCPCH: DlPhychReleaseCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 7872: S0  PchAndDrx releaseSCCPCH: DlPhychReleaseCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 7903: PchAndDrx drxCycleLength > 128 and resyncTime %d
Line 7903: PchAndDrx drxCycleLength > 128 and resyncTime %d
Line 7929: PchAndDrx scheduleWakeup: late for resync because required reSyncTime=%d but timeToGo=%d
Line 7929: PchAndDrx scheduleWakeup: late for resync because required reSyncTime=%d but timeToGo=%d
Line 7966: S0  PchAndDrx scheduleWakeup: pchAndDrxResourcesController_ptr->CStartStopDecodingController.myTimer!=0 before submit new token
Line 7966: S0  PchAndDrx scheduleWakeup: pchAndDrxResourcesController_ptr->CStartStopDecodingController.myTimer!=0 before submit new token
Line 7994: PchAndDrx scheduleWakeup: clearSleepStartRsn %d diffRsnCtch %d diffRsnClearSleep %d cancelToken %d  
Line 7994: PchAndDrx scheduleWakeup: clearSleepStartRsn %d diffRsnCtch %d diffRsnClearSleep %d cancelToken %d  
Line 8006: PchAndDrx scheduleWakeup: drxCycleLength=%d, NP=%d(18/36/72/144), PI=%d, powerOffset=%d, Ovsf=%d, IMSI(High 32bits)=0x%08x, IMSI(Low 32bits)=0x%08x
Line 8006: PchAndDrx scheduleWakeup: drxCycleLength=%d, NP=%d(18/36/72/144), PI=%d, powerOffset=%d, Ovsf=%d, IMSI(High 32bits)=0x%08x, IMSI(Low 32bits)=0x%08x
Line 8010: PchAndDrx scheduleWakeup: currentSfn=%d, initPoSfn=%d, timeToGo=%d, pichSfn=%d, sleepTime=%d, reSyncTime=%d, wakeSfn=%d
Line 8010: PchAndDrx scheduleWakeup: currentSfn=%d, initPoSfn=%d, timeToGo=%d, pichSfn=%d, sleepTime=%d, reSyncTime=%d, wakeSfn=%d
Line 8019: scheduleWakeup: bchUsed=%d, sleepNotAllowed=%d, AfterIdleExit=%d, CellReselFlag=%d, isCBS=%d
Line 8019: scheduleWakeup: bchUsed=%d, sleepNotAllowed=%d, AfterIdleExit=%d, CellReselFlag=%d, isCBS=%d
Line 8034: scheduleWakeup: bchUsed=%d, sleepNotAllowed=%d, AfterIdleExit=%d, CellReselFlag=%d, isBPLMN = %d, wakeuptimeafter = %d
Line 8034: scheduleWakeup: bchUsed=%d, sleepNotAllowed=%d, AfterIdleExit=%d, CellReselFlag=%d, isBPLMN = %d, wakeuptimeafter = %d
Line 6820: PchAndDrx releasePICH: RSN=%d, Sfn=%d, Slot=%d, pichRakeNr=%d
Line 6820: PchAndDrx releasePICH: RSN=%d, Sfn=%d, Slot=%d, pichRakeNr=%d
Line 6828: S0  PchAndDrx releasePICH: DlPhychReleaseCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 6828: S0  PchAndDrx releasePICH: DlPhychReleaseCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 7403: PchAndDrx scheduleWakeup: timeToGo is minus and adjust: reSyncTime=%d but timeToGo=%d.pchAndDrxResourcesController_ptr->CStartStopDecodingController.CResourcesConfigurationController.maxTTI =%d
Line 7403: PchAndDrx scheduleWakeup: timeToGo is minus and adjust: reSyncTime=%d but timeToGo=%d.pchAndDrxResourcesController_ptr->CStartStopDecodingController.CResourcesConfigurationController.maxTTI =%d
Line 7412: PchAndDrx scheduleWakeup: WakingTimeout scenario, pich_Sfn %d, this_Sfn %d, diffSfn %d, timeToGo %d
Line 7412: PchAndDrx scheduleWakeup: WakingTimeout scenario, pich_Sfn %d, this_Sfn %d, diffSfn %d, timeToGo %d
Line 7456: PchAndDrx scheduleWakeup: timeToGo is readjusted : reSyncTime=%d but timeToGo=%d,initialPagingOccasionSfn =%d,beforePichSfn = %d,startSleepingTime = %d, currentRSN = %d
Line 7456: PchAndDrx scheduleWakeup: timeToGo is readjusted : reSyncTime=%d but timeToGo=%d,initialPagingOccasionSfn =%d,beforePichSfn = %d,startSleepingTime = %d, currentRSN = %d
Line 7479: PchAndDrx scheduleWakeup:Disable cctrch and clear isFirstDrx flag:timeToGo = %d 
Line 7479: PchAndDrx scheduleWakeup:Disable cctrch and clear isFirstDrx flag:timeToGo = %d 
Line 7509: S0  DSDS_CBS PchAndDrx scheduleWakeup:Don't allow sleep till FACH for CTCH configuration completes 
Line 7509: S0  DSDS_CBS PchAndDrx scheduleWakeup:Don't allow sleep till FACH for CTCH configuration completes 
Line 7527: S0  PchAndDrx scheduleWakeup: numofDrxCycleToSkip = %d
Line 7527: S0  PchAndDrx scheduleWakeup: numofDrxCycleToSkip = %d
Line 7565: S0  PchAndDrx scheduleWakeup: prevPichSFN = %d sfnToDecodeFachForCtch = %d this_Sfn = %d pichCTCHSfnDiff = %d pichCurrentSfnDiff = %d
Line 7565: S0  PchAndDrx scheduleWakeup: prevPichSFN = %d sfnToDecodeFachForCtch = %d this_Sfn = %d pichCTCHSfnDiff = %d pichCurrentSfnDiff = %d
Line 7573: S0  PchAndDrx scheduleWakeup: CTCH SFN is in past -Taking next index = %d
Line 7573: S0  PchAndDrx scheduleWakeup: CTCH SFN is in past -Taking next index = %d
Line 7598: S0  PchAndDrx scheduleWakeup: index = %d BSIndexArray[index] = %d BSIndexArray[index - ] = %d numOfSFNCycleToSkip = %d numofDrxCycleToSkip = %d
Line 7598: S0  PchAndDrx scheduleWakeup: index = %d BSIndexArray[index] = %d BSIndexArray[index - ] = %d numOfSFNCycleToSkip = %d numofDrxCycleToSkip = %d
Line 7695: S0  PchAndDrx scheduleWakeup: index = %d BSIndexArray[index] = %d BSIndexArray[index - ] = %d numOfSFNCycleToSkip = %d numofDrxCycleToSkip = %d
Line 7695: S0  PchAndDrx scheduleWakeup: index = %d BSIndexArray[index] = %d BSIndexArray[index - ] = %d numOfSFNCycleToSkip = %d numofDrxCycleToSkip = %d
Line 7716: Taking the next CTCH SFN - %d
Line 7716: Taking the next CTCH SFN - %d
Line 7718: wakeSfnCtch: %d, this_Sfn %d, wakeSfnPich: %d, sfnToDecodeFachForCtch %d, isWakeUpSFNForCTCHValid %d
Line 7718: wakeSfnCtch: %d, this_Sfn %d, wakeSfnPich: %d, sfnToDecodeFachForCtch %d, isWakeUpSFNForCTCHValid %d
Line 7729: PchAndDrx CBS: Fach for CTCH SFN in between sleep cycle...Need to wakeup
Line 7729: PchAndDrx CBS: Fach for CTCH SFN in between sleep cycle...Need to wakeup
Line 7746: diffCurrentSfnCbs %d min_catnap_length %d
Line 7746: diffCurrentSfnCbs %d min_catnap_length %d
Line 7768: Sleep: diffPichSfnCbs = %d, pich_Sfn =%d, sfnToDecodeFachForCtch = %d isWakeUpSFNForCTCHValid = %d
Line 7768: Sleep: diffPichSfnCbs = %d, pich_Sfn =%d, sfnToDecodeFachForCtch = %d isWakeUpSFNForCTCHValid = %d
Line 8078: S0  PchAndDrx scheduleSleeping: pchAndDrxResourcesController_ptr->CStartStopDecodingController.sleepHandlerTimer!=0 before sumbit new token
Line 8078: S0  PchAndDrx scheduleSleeping: pchAndDrxResourcesController_ptr->CStartStopDecodingController.sleepHandlerTimer!=0 before sumbit new token
Line 8088: PchAndDrx scheduleSleeping: RSN=%d, Sfn=%d, Slot=%d, pichStatus=%d(Dormant/NoSig/Nack/Ack)
Line 8088: PchAndDrx scheduleSleeping: RSN=%d, Sfn=%d, Slot=%d, pichStatus=%d(Dormant/NoSig/Nack/Ack)
Line 8165: PchAndDrx resync: RSN=%d, Sfn=%d, Slot=%d
Line 8165: PchAndDrx resync: RSN=%d, Sfn=%d, Slot=%d
Line 8209: S0  uphy_CPchAndDrxResourcesController_getListenRSN, this_Sfn=%d, this_slot = %d, diffSfn=%d, diffRsn=%d  PICH SFN = %d
Line 8209: S0  uphy_CPchAndDrxResourcesController_getListenRSN, this_Sfn=%d, this_slot = %d, diffSfn=%d, diffRsn=%d  PICH SFN = %d
Line 8349: S0  message creation failed in uphy_CPchAndDrxResourcesController_RequestMultipathMgmtStartUpdating
Line 8349: S0  message creation failed in uphy_CPchAndDrxResourcesController_RequestMultipathMgmtStartUpdating
Line 8363: S0  PchAndDrx RequestMultipathMgmtStartUpdating: msg send failed
Line 8363: S0  PchAndDrx RequestMultipathMgmtStartUpdating: msg send failed
Line 8377: PchAndDrx RequestMultipathMgmtStartUpdating: msg send succeeded. Sfn=%d, Slot=%d
Line 8377: PchAndDrx RequestMultipathMgmtStartUpdating: msg send succeeded. Sfn=%d, Slot=%d
Line 8397: S0  message creation failed in uphy_CPchAndDrxResourcesController_RequestMultipathMgmtStartSingleUpdate
Line 8397: S0  message creation failed in uphy_CPchAndDrxResourcesController_RequestMultipathMgmtStartSingleUpdate
Line 8412: S0  PchAndDrx RequestMultipathMgmtStartSingleUpdate: msg send failed
Line 8412: S0  PchAndDrx RequestMultipathMgmtStartSingleUpdate: msg send failed
Line 8426: PchAndDrx RequestMultipathMgmtStartSingleUpdate: msg send succeeded. Sfn=%d, Slot=%d
Line 8426: PchAndDrx RequestMultipathMgmtStartSingleUpdate: msg send succeeded. Sfn=%d, Slot=%d
Line 8445: PchAndDrx resetDbgInfo
Line 8445: PchAndDrx resetDbgInfo
Line 8989: PchAndDrx triggerMeasurements: startStopFsmState=%d, (sfn, slot)=(%d, %d)
Line 8989: PchAndDrx triggerMeasurements: startStopFsmState=%d, (sfn, slot)=(%d, %d)
Line 9021: S0  PchAndDrx triggerMeasurements: Unexpected startStopFsmState=%d(I/D/S/W/R/No)
Line 9021: S0  PchAndDrx triggerMeasurements: Unexpected startStopFsmState=%d(I/D/S/W/R/No)
Line 9027: S0  PchAndDrx triggerMeasurements: isIdleDetectedMsmtTriggered = TRUE
Line 9027: S0  PchAndDrx triggerMeasurements: isIdleDetectedMsmtTriggered = TRUE
Line 8500: PchAndDrx triggerMeasurements: serverId=%d, startStopFsmState=%d(Waking), numOfTotalMidServerInDrx=%d, numOfInraFeqMidServer=%d, mid=%d
Line 8500: PchAndDrx triggerMeasurements: serverId=%d, startStopFsmState=%d(Waking), numOfTotalMidServerInDrx=%d, numOfInraFeqMidServer=%d, mid=%d
Line 8509: S0  PchAndDrx triggerMeasurements: Intrafrequency cell measurement triggering failed. intraFreqMid=%d
Line 8509: S0  PchAndDrx triggerMeasurements: Intrafrequency cell measurement triggering failed. intraFreqMid=%d
Line 8515: S0  PchAndDrx triggerMeasurements: No intrafrequency cell measurement MidServer
Line 8515: S0  PchAndDrx triggerMeasurements: No intrafrequency cell measurement MidServer
Line 8520: S0  PchAndDrx triggerMeasurements: Measurements are already triggered once
Line 8520: S0  PchAndDrx triggerMeasurements: Measurements are already triggered once
Line 8583: PchAndDrx triggerMeasurements: isInterFreqMsmtTriggeringConditionMet=%d
Line 8583: PchAndDrx triggerMeasurements: isInterFreqMsmtTriggeringConditionMet=%d
Line 8587: PchAndDrx triggerMeasurements: serverId=%d, startStopFsmState=%d(Retiring), numOfTotalFddMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 8587: PchAndDrx triggerMeasurements: serverId=%d, startStopFsmState=%d(Retiring), numOfTotalFddMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 8618: PchAndDrx triggerMeasurements: requestType = %d, startStopTriggerCount = %d, startStopTriggerInterval = %d
Line 8618: PchAndDrx triggerMeasurements: requestType = %d, startStopTriggerCount = %d, startStopTriggerInterval = %d
Line 8624: S0  [IRAT U2G] PchAndDrx triggerMeasurements: numOfTriggeredMidServer %d is different from numOfFddMidServer %d
Line 8624: S0  [IRAT U2G] PchAndDrx triggerMeasurements: numOfTriggeredMidServer %d is different from numOfFddMidServer %d
Line 8629: S0  [IRAT U2G] PchAndDrx triggerMeasurements: isInterFreqMsmtTriggeringConditionMet == FALSE
Line 8629: S0  [IRAT U2G] PchAndDrx triggerMeasurements: isInterFreqMsmtTriggeringConditionMet == FALSE
Line 8634: S0  PchAndDrx triggerMeasurements: can't find out registeredInfo with fddMid=%d
Line 8634: S0  PchAndDrx triggerMeasurements: can't find out registeredInfo with fddMid=%d
Line 8727: [IRAT U2G] PchAndDrx triggerMeasurements: serverId=0x%x, startStopFsmState=%d(Retiring), numOfTotalGsmMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 8727: [IRAT U2G] PchAndDrx triggerMeasurements: serverId=0x%x, startStopFsmState=%d(Retiring), numOfTotalGsmMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 8759: PchAndDrx triggerMeasurements: requestType = %d, startStopTriggerCount = %d, startStopTriggerInterval = %d
Line 8759: PchAndDrx triggerMeasurements: requestType = %d, startStopTriggerCount = %d, startStopTriggerInterval = %d
Line 8764: S0  [IRAT U2G] PchAndDrx triggerMeasurements: numOfTriggeredMidServer %d is different from numOfGsmMidServer %d
Line 8764: S0  [IRAT U2G] PchAndDrx triggerMeasurements: numOfTriggeredMidServer %d is different from numOfGsmMidServer %d
Line 8769: S0  [IRAT U2G] PchAndDrx triggerMeasurements: can't find out registeredInfo with gsmMid=%d
Line 8769: S0  [IRAT U2G] PchAndDrx triggerMeasurements: can't find out registeredInfo with gsmMid=%d
Line 8790: S0  [IRAT U2G] PchAndDrx triggerMeasurements: no GSM mid server to trigger
Line 8790: S0  [IRAT U2G] PchAndDrx triggerMeasurements: no GSM mid server to trigger
Line 8796: S0  [IRAT U2G] PchAndDrx triggerMeasurements: don't trigger GSM measurement in case interFreq is on going
Line 8796: S0  [IRAT U2G] PchAndDrx triggerMeasurements: don't trigger GSM measurement in case interFreq is on going
Line 8853: S0  [IRAT U2L] PchAndDrx triggerMeasurements: Already in paused state!! Skip U2L
Line 8853: S0  [IRAT U2L] PchAndDrx triggerMeasurements: Already in paused state!! Skip U2L
Line 8860: S0  [IRAT U2L] PchAndDrx triggerMeasurements: Auto pause is within 95ms timeToAutoPause %d!! Skip U2L
Line 8860: S0  [IRAT U2L] PchAndDrx triggerMeasurements: Auto pause is within 95ms timeToAutoPause %d!! Skip U2L
Line 8866: S0  [IRAT U2L] PchAndDrx triggerMeasurements: MAX_STARVATION_AGE reached, Priority Inversion by allowing U2L
Line 8866: S0  [IRAT U2L] PchAndDrx triggerMeasurements: MAX_STARVATION_AGE reached, Priority Inversion by allowing U2L
Line 8873: S  [IRAT U2L] PchAndDrx triggerMeasurements: Auto pause time is more than 95ms timeToAutoPause %d!! Allow U2L
Line 8873: S  [IRAT U2L] PchAndDrx triggerMeasurements: Auto pause time is more than 95ms timeToAutoPause %d!! Allow U2L
Line 8895: [IRAT U2L] PchAndDrx triggerMeasurements: serverId=0x%x, startStopFsmState=%d(Retiring), numOfTotalEutraMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 8895: [IRAT U2L] PchAndDrx triggerMeasurements: serverId=0x%x, startStopFsmState=%d(Retiring), numOfTotalEutraMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 8923: PchAndDrx triggerMeasurements: requestType = %d, startStopTriggerCount = %d, startStopTriggerInterval = %d
Line 8923: PchAndDrx triggerMeasurements: requestType = %d, startStopTriggerCount = %d, startStopTriggerInterval = %d
Line 8928: S0  [IRAT U2L] PchAndDrx triggerMeasurements: numOfTriggeredMidServer %d is different from numOfEutraMidServer %d
Line 8928: S0  [IRAT U2L] PchAndDrx triggerMeasurements: numOfTriggeredMidServer %d is different from numOfEutraMidServer %d
Line 8933: S0  [IRAT U2L] PchAndDrx triggerMeasurements: can't find out registeredInfo with eutraMid=%d
Line 8933: S0  [IRAT U2L] PchAndDrx triggerMeasurements: can't find out registeredInfo with eutraMid=%d
Line 8947: S0  [IRAT U2L] PchAndDrx triggerMeasurements: no E-UTRA mid server to trigger
Line 8947: S0  [IRAT U2L] PchAndDrx triggerMeasurements: no E-UTRA mid server to trigger
Line 8954: S0  [IRAT U2L] PchAndDrx triggerMeasurements: don't trigger E-UTRA measurement in case interFreq or gsm Meas are on going
Line 8954: S0  [IRAT U2L] PchAndDrx triggerMeasurements: don't trigger E-UTRA measurement in case interFreq or gsm Meas are on going
Line 9094: PchAndDrx vgmDrxGap: RSN=%d, currentSfn=%d, currentSlot=%d, startSfn=%d, startSlot=%d, durationSfn=%d, durationSlot=%d
Line 9094: PchAndDrx vgmDrxGap: RSN=%d, currentSfn=%d, currentSlot=%d, startSfn=%d, startSlot=%d, durationSfn=%d, durationSlot=%d
Line 9126: PchAndDrx FSM State is IDLE Hence Exit from pichIndInterruptHandler
Line 9126: PchAndDrx FSM State is IDLE Hence Exit from pichIndInterruptHandler
Line 9192: PchAndDrx uphy_pichIndInterruptHandler: pichStatus=(NoResponse:1 or NACK:2) in startStopFsmState=Waking - handleStarting called
Line 9192: PchAndDrx uphy_pichIndInterruptHandler: pichStatus=(NoResponse:1 or NACK:2) in startStopFsmState=Waking - handleStarting called
Line 9217: PchAndDrx uphy_pichIndInterruptHandler: pichStatus=(NoResponse:1 or NACK:2) in startStopFsmState=Decoding - handleStopping called
Line 9217: PchAndDrx uphy_pichIndInterruptHandler: pichStatus=(NoResponse:1 or NACK:2) in startStopFsmState=Decoding - handleStopping called
Line 9250: PchAndDrx uphy_pichIndInterruptHandler: pichStatus=(NoResponse:1 or NACK:2) in startStopFsmState=Retiring - handleSleeping called
Line 9250: PchAndDrx uphy_pichIndInterruptHandler: pichStatus=(NoResponse:1 or NACK:2) in startStopFsmState=Retiring - handleSleeping called
Line 9254: S0  PchAndDrx uphy_pichIndInterruptHandler: pichStatus=%d(NoResponse: or NACK:2) in startStopFsmState=%d(I/D/S/W/R)
Line 9254: S0  PchAndDrx uphy_pichIndInterruptHandler: pichStatus=%d(NoResponse: or NACK:2) in startStopFsmState=%d(I/D/S/W/R)
Line 9273: PchAndDrx uphy_pichIndInterruptHandler: pichStatus=%d(ACK:3), in startStopFsmState=%d(I/D/S/W/R)
Line 9273: PchAndDrx uphy_pichIndInterruptHandler: pichStatus=%d(ACK:3), in startStopFsmState=%d(I/D/S/W/R)
Line 9279: S0  PchAndDrx uphy_pichIndInterruptHandler: PICH IRQ handler called when PCHAndDRX not configured
Line 9279: S0  PchAndDrx uphy_pichIndInterruptHandler: PICH IRQ handler called when PCHAndDRX not configured
Line 9498: PchAndDrx CBS Level1 Scheduling info update: Mtti = %d, CTCHperiod = %d, Cbsframeoff = %d, isBMCSchdmsgperiod = %d, BMCSchdmsgperiod = %d numofCBSBlocksPerSFNCycle = %d
Line 9498: PchAndDrx CBS Level1 Scheduling info update: Mtti = %d, CTCHperiod = %d, Cbsframeoff = %d, isBMCSchdmsgperiod = %d, BMCSchdmsgperiod = %d numofCBSBlocksPerSFNCycle = %d
Line 9523: PchAndDrx CBS Level2 Scheduling table
Line 9523: PchAndDrx CBS Level2 Scheduling table
Line 9532: S0  UpdateLevel2CbsScheduling: level2Scheduleupdated = %d currentsfn = %d
Line 9532: S0  UpdateLevel2CbsScheduling: level2Scheduleupdated = %d currentsfn = %d
Line 9549: S0  UpdateLevel2CbsScheduling: CTCHIndexOffset = %d lenCBSSchedPeriod = %d numDrxIndices = %d level2CbsScheduleLastSfn = %d
Line 9549: S0  UpdateLevel2CbsScheduling: CTCHIndexOffset = %d lenCBSSchedPeriod = %d numDrxIndices = %d level2CbsScheduleLastSfn = %d
Line 9559: S0  UpdateLevel2CbsScheduling:  level2CbsSchedulingInfo[%d] = %d  BSIndexArray[%d] = %d
Line 9559: S0  UpdateLevel2CbsScheduling:  level2CbsSchedulingInfo[%d] = %d  BSIndexArray[%d] = %d
Line 9570: S0  UpdateLevel2CbsScheduling: level2Scheduleupdated = %d currentsfn = %d
Line 9570: S0  UpdateLevel2CbsScheduling: level2Scheduleupdated = %d currentsfn = %d
Line 9583: S0  UpdateLevel2CbsScheduling: CTCHIndexOffset = %d lenCBSSchedPeriod = %d numDrxIndices = %d level2CbsScheduleLastSfn = %d
Line 9583: S0  UpdateLevel2CbsScheduling: CTCHIndexOffset = %d lenCBSSchedPeriod = %d numDrxIndices = %d level2CbsScheduleLastSfn = %d
Line 9593: S0  UpdateLevel2CbsScheduling: templevel2CbsSchedulingInfo[%d] = %d  tempBSIndexArray[%d] = %d
Line 9593: S0  UpdateLevel2CbsScheduling: templevel2CbsSchedulingInfo[%d] = %d  tempBSIndexArray[%d] = %d
Line 9634: PchAndDrx CBS Flush Level1 and Level2 Scheduling table
Line 9634: PchAndDrx CBS Flush Level1 and Level2 Scheduling table
Line 9694: PchAndDrx CBS: prepareFachConfigMessage
Line 9694: PchAndDrx CBS: prepareFachConfigMessage
Line 9772: PchAndDrx CBS: CopySccpchInfo
Line 9772: PchAndDrx CBS: CopySccpchInfo
Line 9790: PchAndDrx CBS: CopyFachInfo
Line 9790: PchAndDrx CBS: CopyFachInfo
Line 9831: S0  DSDS: CPchAndDrxResourcesController Unable to send RF release done message to DSLRC
Line 9831: S0  DSDS: CPchAndDrxResourcesController Unable to send RF release done message to DSLRC
Line 9840: S0  DSDS: CPchAndDrxResourcesController sendRfReleaseDone sent to DSLRC interface with %d
Line 9840: S0  DSDS: CPchAndDrxResourcesController sendRfReleaseDone sent to DSLRC interface with %d
Line 10114: PchAndDrx drxCycleLength > 128 and resyncTime %d
Line 10114: PchAndDrx drxCycleLength > 128 and resyncTime %d
Line 10135: rescheduleWakeupForPCHDecoding: timeToGo is minus and adjust: reSyncTime=%d but timeToGo=%d.pchAndDrxResourcesController_ptr->CStartStopDecodingController.CResourcesConfigurationController.maxTTI =%d
Line 10135: rescheduleWakeupForPCHDecoding: timeToGo is minus and adjust: reSyncTime=%d but timeToGo=%d.pchAndDrxResourcesController_ptr->CStartStopDecodingController.CResourcesConfigurationController.maxTTI =%d
Line 10161: rescheduleWakeupForPCHDecoding: late for resync because required reSyncTime=%d but timeToGo=%d
Line 10161: rescheduleWakeupForPCHDecoding: late for resync because required reSyncTime=%d but timeToGo=%d
Line 10210: S0  rescheduleWakeupForPCHDecoding: pchAndDrxResourcesController_ptr->CStartStopDecodingController.myTimer!=0 before submit new token
Line 10210: S0  rescheduleWakeupForPCHDecoding: pchAndDrxResourcesController_ptr->CStartStopDecodingController.myTimer!=0 before submit new token
Line 10222: rescheduleWakeupForPCHDecoding: drxCycleLength=%d, NP=%d(18/36/72/144), PI=%d, powerOffset=%d, Ovsf=%d, IMSI(High 32bits)=0x%08x, IMSI(Low 32bits)=0x%08x
Line 10222: rescheduleWakeupForPCHDecoding: drxCycleLength=%d, NP=%d(18/36/72/144), PI=%d, powerOffset=%d, Ovsf=%d, IMSI(High 32bits)=0x%08x, IMSI(Low 32bits)=0x%08x
Line 10226: rescheduleWakeupForPCHDecoding: currentSfn=%d, initPoSfn=%d, timeToGo=%d, pichSfn=%d, sleepTime=%d, reSyncTime=%d, wakeSfn=%d
Line 10226: rescheduleWakeupForPCHDecoding: currentSfn=%d, initPoSfn=%d, timeToGo=%d, pichSfn=%d, sleepTime=%d, reSyncTime=%d, wakeSfn=%d
Line 10235: rescheduleWakeupForPCHDecoding: bchUsed=%d, sleepNotAllowed=%d, AfterIdleExit=%d, CellReselFlag=%d, isCBS=%d
Line 10235: rescheduleWakeupForPCHDecoding: bchUsed=%d, sleepNotAllowed=%d, AfterIdleExit=%d, CellReselFlag=%d, isCBS=%d
Line 10247: rescheduleWakeupForPCHDecoding: bchUsed=%d, sleepNotAllowed=%d, AfterIdleExit=%d, CellReselFlag=%d, isBPLMN = %d, wakeuptimeafter = %d
Line 10247: rescheduleWakeupForPCHDecoding: bchUsed=%d, sleepNotAllowed=%d, AfterIdleExit=%d, CellReselFlag=%d, isBPLMN = %d, wakeuptimeafter = %d
Line 10333: rescheduleWakeupForPCHDecoding: isBplmn = %d, wakeuptimeafter = %d, Available time (ms)= %d, Start time (Us)= %d
Line 10333: rescheduleWakeupForPCHDecoding: isBplmn = %d, wakeuptimeafter = %d, Available time (ms)= %d, Start time (Us)= %d
Line 10337: S0  rescheduleWakeupForPCHDecoding: BPLMNAvailableTimeIndMsg is NULL
Line 10337: S0  rescheduleWakeupForPCHDecoding: BPLMNAvailableTimeIndMsg is NULL
Line 10350: S0  rescheduleWakeupForPCHDecoding: Submitting BPLMN Timeout Timer
Line 10350: S0  rescheduleWakeupForPCHDecoding: Submitting BPLMN Timeout Timer
Line 10392: S0  rescheduleWakeupForPCHDecoding: send failed
Line 10392: S0  rescheduleWakeupForPCHDecoding: send failed
Line 10422: S0  rescheduleWakeupForPCHDecoding: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 10422: S0  rescheduleWakeupForPCHDecoding: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 11014: [RMS]  isInterFreqMsmtTriggeringConditionMet=%d
Line 11014: [RMS]  isInterFreqMsmtTriggeringConditionMet=%d
Line 11017: [RMS] : serverId=%d, numOfTotalFddMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 11017: [RMS] : serverId=%d, numOfTotalFddMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 11042: [RMS]  requestType = %d, startStopTriggerCount = %d, startStopTriggerInterval = %d
Line 11042: [RMS]  requestType = %d, startStopTriggerCount = %d, startStopTriggerInterval = %d
Line 11047: S0  [RMS]  numOfTriggeredMidServer %d is different from numOfFddMidServer %d
Line 11047: S0  [RMS]  numOfTriggeredMidServer %d is different from numOfFddMidServer %d
Line 11052: S0  [RMS]  isInterFreqMsmtTriggeringConditionMet == FALSE
Line 11052: S0  [RMS]  isInterFreqMsmtTriggeringConditionMet == FALSE
Line 11057: S0  [RMS]  can't find out registeredInfo with fddMid=%d
Line 11057: S0  [RMS]  can't find out registeredInfo with fddMid=%d
Line 11122: [RMS]  serverId=0x%x,  numOfTotalGsmMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 11122: [RMS]  serverId=0x%x,  numOfTotalGsmMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 11142: [RMS] requestType = %d, startStopTriggerCount = %d, startStopTriggerInterval = %d
Line 11142: [RMS] requestType = %d, startStopTriggerCount = %d, startStopTriggerInterval = %d
Line 11147: S0  [RMS]  numOfTriggeredMidServer %d is different from numOfGsmMidServer %d
Line 11147: S0  [RMS]  numOfTriggeredMidServer %d is different from numOfGsmMidServer %d
Line 11152: S0  [RMS]  can't find out registeredInfo with gsmMid=%d
Line 11152: S0  [RMS]  can't find out registeredInfo with gsmMid=%d
Line 11218: [RMS]  serverId=0x%x, numOfTotalEutraMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 11218: [RMS]  serverId=0x%x, numOfTotalEutraMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 11238: [RMS]  requestType = %d, startStopTriggerCount = %d, startStopTriggerInterval = %d
Line 11238: [RMS]  requestType = %d, startStopTriggerCount = %d, startStopTriggerInterval = %d
Line 11243: S0  [RMS]  numOfTriggeredMidServer %d is different from numOfEutraMidServer %d
Line 11243: S0  [RMS]  numOfTriggeredMidServer %d is different from numOfEutraMidServer %d
Line 11248: S0  [RMS]  can't find out registeredInfo with eutraMid=%d
Line 11248: S0  [RMS]  can't find out registeredInfo with eutraMid=%d
