Line 406: Instance created for stackId %d ControllerIndex %d
Line 406: Instance created for stackId %d ControllerIndex %d
Line 466: Token received after Non UMTS rat mode req, so ignored stackId=%d
Line 466: Token received after Non UMTS rat mode req, so ignored stackId=%d
Line 476: S0  Waiting RF settling
Line 476: S0  Waiting RF settling
Line 526: S0  BCH for SIB has beed released already
Line 526: S0  BCH for SIB has beed released already
Line 534: S0  restorePrviousBchConfig: bchReqMsg==NULL
Line 534: S0  restorePrviousBchConfig: bchReqMsg==NULL
Line 556: S0 Restore BCH config :uarfcn =%d ,primaryScrCode = %d
Line 556: S0 Restore BCH config :uarfcn =%d ,primaryScrCode = %d
Line 562: send
Line 562: send
Line 680: DSDS: BCH controller receives Rf Use Response from DSLRC Message interface
Line 680: DSDS: BCH controller receives Rf Use Response from DSLRC Message interface
Line 746: Unexpected MsgId %d
Line 746: Unexpected MsgId %d
Line 2018: uphy_CBchResourcesController_startDecodingSTF: currentSFN: %d currentCFN: %d currentRsn: %d
Line 2018: uphy_CBchResourcesController_startDecodingSTF: currentSFN: %d currentCFN: %d currentRsn: %d
Line 2043: S0  DBCH: uphy_CBchResourcesController_TimeBoundaryRSN: servingCellRsn %d boundaryRsn %d
Line 2043: S0  DBCH: uphy_CBchResourcesController_TimeBoundaryRSN: servingCellRsn %d boundaryRsn %d
Line 2047: S0  DBCH: uphy_CBchResourcesController_TimeBoundaryRSN: Adjusted boundaryRsn %d
Line 2047: S0  DBCH: uphy_CBchResourcesController_TimeBoundaryRSN: Adjusted boundaryRsn %d
Line 2393: bchResourcesController_ptr->rfUseTimebyLegacy is %d
Line 2393: bchResourcesController_ptr->rfUseTimebyLegacy is %d
Line 2395: bchResourcesController_ptr->rfSavingTimebyDBCH is %d
Line 2395: bchResourcesController_ptr->rfSavingTimebyDBCH is %d
Line 2409: total_rfSavingTimebyDBCH_Release is %d
Line 2409: total_rfSavingTimebyDBCH_Release is %d
Line 2411: Diff rfUseTimeWithDBCH is %d
Line 2411: Diff rfUseTimeWithDBCH is %d
Line 2413: bchResourcesController_ptr->rfRejectCount is %d
Line 2413: bchResourcesController_ptr->rfRejectCount is %d
Line 2422: S0  Reset the Startstop State to IDLE and Clear SIB Information
Line 2422: S0  Reset the Startstop State to IDLE and Clear SIB Information
Line 2471: S0  [CGI ACQUISITION] sfnAcquisitionConfig %d, MsgId=%d
Line 2471: S0  [CGI ACQUISITION] sfnAcquisitionConfig %d, MsgId=%d
Line 2492: S0  [CGI ACQUISITION] sfnAcquisitionConfig %d, MsgId=%d, isCGIModeConfigured %d
Line 2492: S0  [CGI ACQUISITION] sfnAcquisitionConfig %d, MsgId=%d, isCGIModeConfigured %d
Line 2505: S0  Unexpected MsgId=%d
Line 2505: S0  Unexpected MsgId=%d
Line 2548: S0  only Config and release and releaseLeavingRl need confirm
Line 2548: S0  only Config and release and releaseLeavingRl need confirm
Line 2564: S0  only Config and release and releaseLeavingRl need confirm
Line 2564: S0  only Config and release and releaseLeavingRl need confirm
Line 2570: S0  only UrrcMessageInterface and CellCfnServer can configure BCH
Line 2570: S0  only UrrcMessageInterface and CellCfnServer can configure BCH
Line 4144: S0  BCH resources uhalBchConfigToken is cleared
Line 4185: S0  BCH resources uhalBchConfigToken is cleared
Line 4223: S0 STTD uarfcn %d primaryScrCode %d
Line 4223: S0 STTD uarfcn %d primaryScrCode %d
Line 4258: S0  Wrong carrierInfo = %d
Line 4258: S0  Wrong carrierInfo = %d
Line 4266: S0  diversityDetectionCmd exec failure: errCode %d addErrCode %d
Line 4266: S0  diversityDetectionCmd exec failure: errCode %d addErrCode %d
Line 4298: S0  diversityDetectionCmd wrong State
Line 4298: S0  diversityDetectionCmd wrong State
Line 4346: S0  Cancel STTD detection
Line 4346: S0  Cancel STTD detection
Line 4373: S0  STTD: diversityDetectionCmd is NULL
Line 4373: S0  STTD: diversityDetectionCmd is NULL
Line 5115: S0  physical channel Release Failed
Line 5115: S0  physical channel Release Failed
Line 5128: S0  RL Release Failed
Line 5128: S0  RL Release Failed
Line 5140: S0  Finger Release Failed
Line 5140: S0  Finger Release Failed
Line 5156: S0  physical channel Release Failed
Line 5156: S0  physical channel Release Failed
Line 5172: S0  Wrong carrierInfo = %d
Line 5172: S0  Wrong carrierInfo = %d
Line 5219: S0  Cant create Bplmn Timeout Ind Message
Line 5219: S0  Cant create Bplmn Timeout Ind Message
Line 5242: S0  Cant send Bplmn Timeout Ind Message
Line 5242: S0  Cant send Bplmn Timeout Ind Message
Line 5346: DSDS: RF released not required as other BCH controller is active 
Line 5346: DSDS: RF released not required as other BCH controller is active 
Line 5368: S0  DSDS: Unable to send RF request message to DSLRC
Line 5368: S0  DSDS: Unable to send RF request message to DSLRC
Line 5378: RFinuse false
Line 5378: RFinuse false
Line 5379: S0  DSDS: sendRfRelease sent to DSLRC interface from BchController
Line 5379: S0  DSDS: sendRfRelease sent to DSLRC interface from BchController
Line 5410: DSDS: RF pause not sent from Controller%d as other BCH controller may not be ready to send pause
Line 5410: DSDS: RF pause not sent from Controller%d as other BCH controller may not be ready to send pause
Line 5422: DSDS: Unable to send RF request message to DSLRC
Line 5422: DSDS: Unable to send RF request message to DSLRC
Line 5426: DSDS: sendRfUsePauseDone sent to DSLRC interface with %d Controller%d
Line 5426: DSDS: sendRfUsePauseDone sent to DSLRC interface with %d Controller%d
Line 5442: S0 DSDS: uphy_CBchResourcesController_isNonCampingConfiguration :: result %d
Line 5442: S0 DSDS: uphy_CBchResourcesController_isNonCampingConfiguration :: result %d
Line 5498: S DSDS: uphy_CBchResourcesController_ignoreAutoPause :: isBPLMN %d wakeUpAfter %d result %d bchResourcesController_ptr->bchautoPauseSkip %d
Line 5498: S DSDS: uphy_CBchResourcesController_ignoreAutoPause :: isBPLMN %d wakeUpAfter %d result %d bchResourcesController_ptr->bchautoPauseSkip %d
Line 5529: S0  CellSfnReqMsg == NULL pointer
Line 5529: S0  CellSfnReqMsg == NULL pointer
Line 5547: S0  Cant Request SFN
Line 5547: S0  Cant Request SFN
Line 5560: S0  uphy_CBchResourcesController_sendInternalPauseReq: sending EUphyBchResourcesControllerMsgId_RfUsePauseReq
Line 5560: S0  uphy_CBchResourcesController_sendInternalPauseReq: sending EUphyBchResourcesControllerMsgId_RfUsePauseReq
Line 5570: S0  DSDS: uphy_CBchResourcesController_process: Reset BCH configuration to init
Line 5570: S0  DSDS: uphy_CBchResourcesController_process: Reset BCH configuration to init
Line 5598: S0  uphy_CBchResourcesController_sendInternalPauseReq: sending EUphyBchResourcesControllerMsgId_RfUsePauseReq
Line 5598: S0  uphy_CBchResourcesController_sendInternalPauseReq: sending EUphyBchResourcesControllerMsgId_RfUsePauseReq
Line 5612: S0  DSDS: uphy_CBchResourcesController_process: Reset BCH configuration to init
Line 5612: S0  DSDS: uphy_CBchResourcesController_process: Reset BCH configuration to init
Line 5631: S0  DSDS: uphy_CBchResourcesController_process: No SFN Restore needed Here
Line 5631: S0  DSDS: uphy_CBchResourcesController_process: No SFN Restore needed Here
Line 5641: S0  uphy_CBchResourcesController_triggerInternalResumeReq: sending EUphyBchResourcesControllerMsgId_RfUseResumeReq
Line 5641: S0  uphy_CBchResourcesController_triggerInternalResumeReq: sending EUphyBchResourcesControllerMsgId_RfUseResumeReq
Line 5649: S0  DSDS: uphy_CBchResourcesController_process: Reset BCH configuration to init
Line 5649: S0  DSDS: uphy_CBchResourcesController_process: Reset BCH configuration to init
Line 5677: S0  DBCH: uphy_CBchResourcesController_TimeBoundarySFN: servingCellSfn %d boundarySfn %d
Line 5677: S0  DBCH: uphy_CBchResourcesController_TimeBoundarySFN: servingCellSfn %d boundarySfn %d
Line 5679: S0  DBCH: uphy_CBchResourcesController_TimeBoundarySFN: smc_TimeCurrentRSN((u8)stackId << 4) | UMTS_FDD_RAT %d smc_TimeBoundaryRSN %d bchResourcesController_ptr->uphy_nbrSlotOffset: %d
Line 5679: S0  DBCH: uphy_CBchResourcesController_TimeBoundarySFN: smc_TimeCurrentRSN((u8)stackId << 4) | UMTS_FDD_RAT %d smc_TimeBoundaryRSN %d bchResourcesController_ptr->uphy_nbrSlotOffset: %d
Line 5683: S0  DBCH: uphy_CBchResourcesController_TimeBoundarySFN: Adjusted boundarySfn %d
Line 5683: S0  DBCH: uphy_CBchResourcesController_TimeBoundarySFN: Adjusted boundarySfn %d
Line 5704: S0  DBCH: uphy_CBchResourcesController_TimeCurrentSFN: servingCellSfn %d currentSfn %d
Line 5704: S0  DBCH: uphy_CBchResourcesController_TimeCurrentSFN: servingCellSfn %d currentSfn %d
Line 5708: S0  DBCH: uphy_CBchResourcesController_TimeCurrentSFN: Adjusted currentSfn %d
Line 5708: S0  DBCH: uphy_CBchResourcesController_TimeCurrentSFN: Adjusted currentSfn %d
Line 5922: S0  DBCH: isNeedtoRestoreSFN = %d
Line 5922: S0  DBCH: isNeedtoRestoreSFN = %d
Line 5956: Decoding SFN [DBCH]: bchResourcesController_ptr->uphy_SIBArray[%d].SibRep: %d
Line 5956: Decoding SFN [DBCH]: bchResourcesController_ptr->uphy_SIBArray[%d].SibRep: %d
Line 5965: Decoding SFN [DBCH]: before calculating bchResourcesController_ptr->uphy_SIBArray[%d].SibPos[%d]: %d
Line 5965: Decoding SFN [DBCH]: before calculating bchResourcesController_ptr->uphy_SIBArray[%d].SibPos[%d]: %d
Line 5992: Decoding SFN [DBCH]: after calculating bchResourcesController_ptr->uphy_SIBArray[%d].SibPos[%d]: %d
Line 5992: Decoding SFN [DBCH]: after calculating bchResourcesController_ptr->uphy_SIBArray[%d].SibPos[%d]: %d
Line 5996: Decoding SFN [DBCH]: Segment Already Decoded. bchResourcesController_ptr->uphy_SIBArray[%d].SibPos[%d]: %d
Line 5996: Decoding SFN [DBCH]: Segment Already Decoded. bchResourcesController_ptr->uphy_SIBArray[%d].SibPos[%d]: %d
Line 6006: Decoding SFN [DBCH]: sibPresentIndex is %d and Sib Segment is %d . DecodingSfn is %d: 
Line 6006: Decoding SFN [DBCH]: sibPresentIndex is %d and Sib Segment is %d . DecodingSfn is %d: 
Line 6011: Decoding SFN [DBCH]: Calculation of DecodingSFN: No SIB segments found
Line 6011: Decoding SFN [DBCH]: Calculation of DecodingSFN: No SIB segments found
Line 6048: Decoding SFN [DBCH]: Segment has already been decoded. bchResourcesController_ptr->uphy_SIBArray[%d].SibPos[%d]: %d
Line 6048: Decoding SFN [DBCH]: Segment has already been decoded. bchResourcesController_ptr->uphy_SIBArray[%d].SibPos[%d]: %d
Line 6054: Decoding SFN [DBCH]: DecodingSFN is %d CurrentSFN is %d SchedulingStartSfn is %d isHighPrioSib is %d
Line 6054: Decoding SFN [DBCH]: DecodingSFN is %d CurrentSFN is %d SchedulingStartSfn is %d isHighPrioSib is %d
Line 6086: Retiring SFN [DBCH]: bchResourcesController_ptr->uphy_SIBArray[%d].SibRep: %d
Line 6086: Retiring SFN [DBCH]: bchResourcesController_ptr->uphy_SIBArray[%d].SibRep: %d
Line 6091: Retiring SFN [DBCH]: before calculating bchResourcesController_ptr->uphy_SIBArray[%d].SibPos[%d]: %d
Line 6091: Retiring SFN [DBCH]: before calculating bchResourcesController_ptr->uphy_SIBArray[%d].SibPos[%d]: %d
Line 6121: Retiring SFN [DBCH]: after calculating bchResourcesController_ptr->uphy_SIBArray[%d].SibPos[%d]: %d
Line 6121: Retiring SFN [DBCH]: after calculating bchResourcesController_ptr->uphy_SIBArray[%d].SibPos[%d]: %d
Line 6126: Retiring SFN [DBCH]: Segment Already Decoded. bchResourcesController_ptr->uphy_SIBArray[%d].SibPos[%d]: %d
Line 6126: Retiring SFN [DBCH]: Segment Already Decoded. bchResourcesController_ptr->uphy_SIBArray[%d].SibPos[%d]: %d
Line 6148: Retiring SFN [DBCH]: bchResourcesController_ptr->uphy_SegArray[%d].SibPos %d
Line 6148: Retiring SFN [DBCH]: bchResourcesController_ptr->uphy_SegArray[%d].SibPos %d
Line 6156: Retiring SFN [DBCH]: segCount is %d
Line 6156: Retiring SFN [DBCH]: segCount is %d
Line 6161: Retiring SFN [DBCH]: No segments are there for decoding CurrentSFN %d retiringSfn=%d
Line 6161: Retiring SFN [DBCH]: No segments are there for decoding CurrentSFN %d retiringSfn=%d
Line 6177: Retiring SFN [DBCH]: Sorted bchResourcesController_ptr->uphy_SegArray[%d].SibPos %d
Line 6177: Retiring SFN [DBCH]: Sorted bchResourcesController_ptr->uphy_SegArray[%d].SibPos %d
Line 6180: Retiring SFN [DBCH]: Sorted bchResourcesController_ptr->uphy_SegArray[%d].SibPos %d
Line 6180: Retiring SFN [DBCH]: Sorted bchResourcesController_ptr->uphy_SegArray[%d].SibPos %d
Line 6186: Retiring SFN [DBCH]: RetiringSFN is %d CurrentSFN is %d
Line 6186: Retiring SFN [DBCH]: RetiringSFN is %d CurrentSFN is %d
Line 6193: Retiring SFN [DBCH]: First segment %d far from CurrentSFN %d retiringSfn=%d
Line 6193: Retiring SFN [DBCH]: First segment %d far from CurrentSFN %d retiringSfn=%d
Line 6206: Retiring SFN [DBCH]: Adjusting retiringSFN is %d
Line 6206: Retiring SFN [DBCH]: Adjusting retiringSFN is %d
Line 6209: Retiring SFN [DBCH]: gapSFN is %d bchResourcesController_ptr->uphy_SegArray[%d].SibPos is %d bchResourcesController_ptr->uphy_SegArray[%d].SibPos is %d
Line 6209: Retiring SFN [DBCH]: gapSFN is %d bchResourcesController_ptr->uphy_SegArray[%d].SibPos is %d bchResourcesController_ptr->uphy_SegArray[%d].SibPos is %d
Line 6217: Retiring SFN [DBCH]: No gap found retire after the last SIB is decoded
Line 6217: Retiring SFN [DBCH]: No gap found retire after the last SIB is decoded
Line 6220: Retiring SFN [DBCH]: RetiringSFN is %d CurrentSFN is %d
Line 6220: Retiring SFN [DBCH]: RetiringSFN is %d CurrentSFN is %d
Line 6514: MIB Received with the Repition of 6 * 80ms 
Line 6514: MIB Received with the Repition of 6 * 80ms 
Line 6522: SIBType=%d,SegCount =%d,sibpos=%d,sibrep=%d,CrcValue=%d 
Line 6522: SIBType=%d,SegCount =%d,sibpos=%d,sibrep=%d,CrcValue=%d 
Line 6554: Check If Ignore Auto Pause SIBType=%d,SegCount =%d,sibpos=%d,sibrep=%d,ignoreAutoPause=%d 
Line 6554: Check If Ignore Auto Pause SIBType=%d,SegCount =%d,sibpos=%d,sibrep=%d,ignoreAutoPause=%d 
Line 6645: S0  uphy_CBchResourcesController_IdleToDecodingSTF: currentSFN: %d currentCFN: %d currentRsn: %d
Line 6645: S0  uphy_CBchResourcesController_IdleToDecodingSTF: currentSFN: %d currentCFN: %d currentRsn: %d
Line 7411: DSDS: decodingSfn %d currentSfn %d startAtTime %d diffSfn %d currentTime %u
Line 7411: DSDS: decodingSfn %d currentSfn %d startAtTime %d diffSfn %d currentTime %u
Line 7419: bchResourcesController_ptr->rfOccupiedbyDBCH is %d
Line 7419: bchResourcesController_ptr->rfOccupiedbyDBCH is %d
Line 7425: bchResourcesController_ptr->totalNoOfGaps is %d
Line 7425: bchResourcesController_ptr->totalNoOfGaps is %d
Line 7431: bchResourcesController_ptr->gapUsedBy2G is %d
Line 7431: bchResourcesController_ptr->gapUsedBy2G is %d
Line 7562: DSDS: requestDsl1rcRfAccess sent to DSL1RC interface from %d with cause %d and time %d currentTime %u
Line 7562: DSDS: requestDsl1rcRfAccess sent to DSL1RC interface from %d with cause %d and time %d currentTime %u
Line 7570: bchResourcesController_ptr->rfSavingTimebyDBCH is %d
Line 7570: bchResourcesController_ptr->rfSavingTimebyDBCH is %d
Line 7574: bchResourcesController_ptr->total_rfSavingTimebyDBCH is %d
Line 7574: bchResourcesController_ptr->total_rfSavingTimebyDBCH is %d
Line 7579: RFinuse true
Line 7579: RFinuse true
Line 7585: DBCH: RF reconfiguration is needed before entering into decoding state
Line 7585: DBCH: RF reconfiguration is needed before entering into decoding state
Line 7616: S0  SMC Correction for client = %d,HwSfn = %d SwSfn = %d
Line 7616: S0  SMC Correction for client = %d,HwSfn = %d SwSfn = %d
Line 7623: S0  SMC Correction for client = %d,NewSwSlot = %d
Line 7623: S0  SMC Correction for client = %d,NewSwSlot = %d
Line 7630: RF was in use before wakeup for PCH, RF config not reqd
Line 7630: RF was in use before wakeup for PCH, RF config not reqd
Line 7649: S0  RfBackProcessing Not required
Line 7649: S0  RfBackProcessing Not required
Line 7671: RFinuse false
Line 7671: RFinuse false
Line 7696: uphy_CBchResourcesController_RfbackProcessing: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 7696: uphy_CBchResourcesController_RfbackProcessing: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 7702: uphy_CBchResourcesController_RfbackProcessing: Antenna switched from EUTRA to UMTS
Line 7702: uphy_CBchResourcesController_RfbackProcessing: Antenna switched from EUTRA to UMTS
Line 7720: uphy_CBchResourcesController_RfbackProcessing: AfcEnableCmd failed. errCode=%d, addErrCode=%d
Line 7720: uphy_CBchResourcesController_RfbackProcessing: AfcEnableCmd failed. errCode=%d, addErrCode=%d
Line 7732: uphy_CBchResourcesController_RfbackProcessing : UE did not camp to any frequency
Line 7732: uphy_CBchResourcesController_RfbackProcessing : UE did not camp to any frequency
Line 7748: uphy_CBchResourcesController_RfbackProcessing: RF Rx ON command exec failure Error %d, Additional Error %d
Line 7748: uphy_CBchResourcesController_RfbackProcessing: RF Rx ON command exec failure Error %d, Additional Error %d
Line 7756: uphy_CBchResourcesController_RfbackProcessing: RfRxOn
Line 7756: uphy_CBchResourcesController_RfbackProcessing: RfRxOn
Line 7769: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s

Line 7769: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s

Line 7774: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command

Line 7774: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command

Line 7779: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s

Line 7779: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s

Line 7801: uphy_CBchResourcesController_RfbackProcessing: RF UARFCN Error %d, Additional Error %d
Line 7801: uphy_CBchResourcesController_RfbackProcessing: RF UARFCN Error %d, Additional Error %d
Line 7828: DBCH: uphy_CBchResourcesController_RfConfigDoneCallBack
Line 7828: DBCH: uphy_CBchResourcesController_RfConfigDoneCallBack
Line 7832: DBCH: uphy_CBchResourcesController_RfConfigDoneCallBack return
Line 7832: DBCH: uphy_CBchResourcesController_RfConfigDoneCallBack return
Line 7849: S0  Start MPDB update,Grant is received
Line 7849: S0  Start MPDB update,Grant is received
Line 7853: S0  MPDB update not started as BPLMN is ongoing.
Line 7853: S0  MPDB update not started as BPLMN is ongoing.
Line 7870: S0  Reject from Searcher: prepare scheduleDecoding token
Line 7870: S0  Reject from Searcher: prepare scheduleDecoding token
Line 7878: S0  sendBchRfUseReleaseDone CPICH Interrupt Stopped:currentSfn: %d current rsn: %d boundary rsn: %d current slot: %d
Line 7878: S0  sendBchRfUseReleaseDone CPICH Interrupt Stopped:currentSfn: %d current rsn: %d boundary rsn: %d current slot: %d
Line 7882: S0  Rollover Case: sendBchRfUseReleaseDone:current rsn: %d boundary rsn: %d current slot: %d
Line 7882: S0  Rollover Case: sendBchRfUseReleaseDone:current rsn: %d boundary rsn: %d current slot: %d
Line 7888: S0  DSDS:uphy_CStartStopDecodingController_handleStarting: BCH wakeup indicated to dslrc=%u microseconds at currentTime =%u
Line 7888: S0  DSDS:uphy_CStartStopDecodingController_handleStarting: BCH wakeup indicated to dslrc=%u microseconds at currentTime =%u
Line 7923: uphy_CBchResourcesController_isActive: BCH[%d] active, bchUsed %d
Line 7923: uphy_CBchResourcesController_isActive: BCH[%d] active, bchUsed %d
Line 8026: S0  DBCH: isSFNBackupNeeded = %d
Line 8026: S0  DBCH: isSFNBackupNeeded = %d
Line 8033: S  Dummy timing reset
Line 8033: S  Dummy timing reset
Line 8065: uphy_CBchResourcesController_sendDirectSearcherRequestToDsl1rc: rValue %d
Line 8065: uphy_CBchResourcesController_sendDirectSearcherRequestToDsl1rc: rValue %d
Line 8074:   [DR-DSDS] rfUseReqMsg == NULL pointer
Line 8074:   [DR-DSDS] rfUseReqMsg == NULL pointer
Line 8077: [DR-DSDS]  Sending RF Use Request to DR mngr Interface
Line 8077: [DR-DSDS]  Sending RF Use Request to DR mngr Interface
Line 8090:   [DR-DSDS]- Failed to send RF Request
Line 8090:   [DR-DSDS]- Failed to send RF Request
Line 8101:   [DR-DSDS] rfUseReqMsg == NULL pointer
Line 8101:   [DR-DSDS] rfUseReqMsg == NULL pointer
Line 8104: [DR-DSDS]  Sending RF Use Release done  to DR mngr Interface
Line 8104: [DR-DSDS]  Sending RF Use Release done  to DR mngr Interface
Line 8115:   [DR-DSDS]- Failed to send RF Request
Line 8115:   [DR-DSDS]- Failed to send RF Request
Line 8126: uphy_CBchResourcesController_SearcherUseResumeReq
Line 8126: uphy_CBchResourcesController_SearcherUseResumeReq
Line 8128: uphy_CResourcesConfigurationController_getDSLRCresponse : configMsg=0
Line 8128: uphy_CResourcesConfigurationController_getDSLRCresponse : configMsg=0
Line 8132: received Searcher response with grant/reject= %d
Line 8132: received Searcher response with grant/reject= %d
Line 8142: Start MPDB update,Grant is received for transceiver %d
Line 8142: Start MPDB update,Grant is received for transceiver %d
Line 8146: MPDB update not started as BPLMN is ongoing.
Line 8146: MPDB update not started as BPLMN is ongoing.
Line 8152: Searcher Request Received Reject.
Line 8152: Searcher Request Received Reject.
Line 8155: Searcher Request Received Wait.
Line 8155: Searcher Request Received Wait.
Line 8163: uphy_CBchResourcesController_SearcherUsePauseReq
Line 8163: uphy_CBchResourcesController_SearcherUsePauseReq
Line 8181: uphy_CBchResourcesController_SearcherUseResumeReq
Line 8181: uphy_CBchResourcesController_SearcherUseResumeReq
Line 8189: S0  Start MPDB update,Grant is received
Line 8189: S0  Start MPDB update,Grant is received
Line 8197: S0  MPDB update not started as BPLMN is ongoing.
Line 8197: S0  MPDB update not started as BPLMN is ongoing.
Line 8220: uphy_CBchResourcesController_evaluateDBCHMode: isDBCHModeActive %d
Line 8220: uphy_CBchResourcesController_evaluateDBCHMode: isDBCHModeActive %d
Line 799: BCH config by URRC for reading sib has been released
Line 799: BCH config by URRC for reading sib has been released
Line 815: BCH config by URRC for reading sib pre-empted by CellSFN server for BCH read so ignore URRC BCH restoration
Line 815: BCH config by URRC for reading sib pre-empted by CellSFN server for BCH read so ignore URRC BCH restoration
Line 827: [CGI ACQUISITION] CgiAcquisition 0x%x CgiAcquisition->sfnAcquisitionReq_TID 0x%x
Line 836: DBCH: URRC Config Message SIB Type %d SIB Pos %d
Line 836: DBCH: URRC Config Message SIB Type %d SIB Pos %d
Line 852: DBCH is disabled
Line 852: DBCH is disabled
Line 862: Parameter check failed
Line 862: Parameter check failed
Line 863: DBCH: Config Message Parameter Check failed, send negative CNF to URRC
Line 863: DBCH: Config Message Parameter Check failed, send negative CNF to URRC
Line 879: DBCH: SIB schedule information has already been updated
Line 879: DBCH: SIB schedule information has already been updated
Line 893: BCH config by URRC (Stored value): uarfcn %d, primaryScrCode %d, bchId %d
Line 893: BCH config by URRC (Stored value): uarfcn %d, primaryScrCode %d, bchId %d
Line 975: DBCH: Config Message SIBType %d received is wrong
Line 975: DBCH: Config Message SIBType %d received is wrong
Line 981: DBCH: Config Message SIBRep %d received is wrong
Line 981: DBCH: Config Message SIBRep %d received is wrong
Line 987: DBCH: Config Message SIBSegCount %d received is wrong
Line 987: DBCH: Config Message SIBSegCount %d received is wrong
Line 995: DBCH: Config Message SIB Type %d SIB Pos %d is wrong
Line 995: DBCH: Config Message SIB Type %d SIB Pos %d is wrong
Line 1034: SibPos already allocated
Line 1034: SibPos already allocated
Line 1045: SibPos already allocated
Line 1045: SibPos already allocated
Line 1052: DBCH: Config Message SIB Type %d SIB Pos %d
Line 1052: DBCH: Config Message SIB Type %d SIB Pos %d
Line 1053: DBCH: Config Message SIB Type %d SIB Pos %d
Line 1053: DBCH: Config Message SIB Type %d SIB Pos %d
Line 1057: Parameter check failed
Line 1057: Parameter check failed
Line 1063: DBCH: %d SIB/SIBs is/are added
Line 1063: DBCH: %d SIB/SIBs is/are added
Line 6622: bchResources is Null
Line 6622: bchResources is Null
Line 6682: S0 UserPlaneCallback TrCH ID %d SFN %d referenceRlSfn %d crc %d
Line 6682: S0 UserPlaneCallback TrCH ID %d SFN %d referenceRlSfn %d crc %d
Line 6688: S0 BchUserPlaneCallback Rf Paused enabled, do not process callback
Line 6688: S0 BchUserPlaneCallback Rf Paused enabled, do not process callback
Line 6696: S0 BchUserPlaneCallback TrBlockErrorOrNotConsistant
Line 6696: S0 BchUserPlaneCallback TrBlockErrorOrNotConsistant
Line 6736: S0  Rollover Case: uphy_CBchResourcesController_scheduleDecodingPreparation:current rsn: %d boundary rsn: %d current slot: %d
Line 6736: S0  Rollover Case: uphy_CBchResourcesController_scheduleDecodingPreparation:current rsn: %d boundary rsn: %d current slot: %d
Line 6758: S) unknown TTI
Line 6758: S) unknown TTI
Line 6766: S0  uphy_CBch_UserPlaneCallback: currentSFN: %d currentCFN: %d currentRsn: %d
Line 6766: S0  uphy_CBch_UserPlaneCallback: currentSFN: %d currentCFN: %d currentRsn: %d
Line 6768: S0  uphy_CBch_UserPlaneCallback: ttiMod = %d currentCfn: %d alignedCfn: %d
Line 6768: S0  uphy_CBch_UserPlaneCallback: ttiMod = %d currentCfn: %d alignedCfn: %d
Line 6776: S0  uphy_CBch_UserPlaneCallback: run Immediately!
Line 6776: S0  uphy_CBch_UserPlaneCallback: run Immediately!
Line 6786: S0  uphy_CBch_UserPlaneCallback: timestamp: %d deadline: %d
Line 6786: S0  uphy_CBch_UserPlaneCallback: timestamp: %d deadline: %d
Line 6813: S0  uphy_CBch_UserPlaneCallback: currentSFN: %d currentCFN: %d currentRsn: %d
Line 6813: S0  uphy_CBch_UserPlaneCallback: currentSFN: %d currentCFN: %d currentRsn: %d
Line 6815: S0  uphy_CBch_UserPlaneCallback: ttiMod = %d boundarySfn: %d bchSfn: %d decodingSfn: %d
Line 6815: S0  uphy_CBch_UserPlaneCallback: ttiMod = %d boundarySfn: %d bchSfn: %d decodingSfn: %d
Line 6823: S0  uphy_CBch_UserPlaneCallback: run Immediately!
Line 6823: S0  uphy_CBch_UserPlaneCallback: run Immediately!
Line 6832: S0  uphy_CBch_UserPlaneCallback: timestamp: %d deadline: %d frameDiff:%d
Line 6832: S0  uphy_CBch_UserPlaneCallback: timestamp: %d deadline: %d frameDiff:%d
Line 6885: S0 Rl Info rlNr=%d- uhal cmd exec
Line 6885: S0 Rl Info rlNr=%d- uhal cmd exec
Line 6912: S0 BCH Resources Controller [%d,%d] BCH Resources Controller receives data for rl=%d when REFERENCE RL DOES NOT EXIST: framework CFN %d, trChinfo->cfn=%d
Line 6912: S0 BCH Resources Controller [%d,%d] BCH Resources Controller receives data for rl=%d when REFERENCE RL DOES NOT EXIST: framework CFN %d, trChinfo->cfn=%d
Line 6935: S0 BCH Resources Controller [%d,%d] BCH Resources Controller rejects dud data at framework SFN %d, chipset [radio link %d] refRlChipsetSfn %d refRlChipsetSlot %d  - chipsetRefRl=%d
Line 6935: S0 BCH Resources Controller [%d,%d] BCH Resources Controller rejects dud data at framework SFN %d, chipset [radio link %d] refRlChipsetSfn %d refRlChipsetSlot %d  - chipsetRefRl=%d
Line 6944: S0 BCH Resources Controller [%d,%d] BCH Resources Controller rejects dud data at framework SFN %d, chipset [radio link %d]
Line 6944: S0 BCH Resources Controller [%d,%d] BCH Resources Controller rejects dud data at framework SFN %d, chipset [radio link %d]
Line 6959: S0 BCH Resources Controller [%d,%d] BCH Resources Controller rejects dud data at framework CFN %d, rl=%d refRl=%d trChinfo->cfn=%d
Line 6959: S0 BCH Resources Controller [%d,%d] BCH Resources Controller rejects dud data at framework CFN %d, rl=%d refRl=%d trChinfo->cfn=%d
Line 6970: S0 BCH Resources Controller [%d,%d] BCH Resources Controller rejects dud data at framework CFN %d, rl=%d trChinfo->cfn=%d
Line 6970: S0 BCH Resources Controller [%d,%d] BCH Resources Controller rejects dud data at framework CFN %d, rl=%d trChinfo->cfn=%d
Line 6990: S0 BCH Resources Controller [%d,%d] BCH Resources Controller accepts good data with sfn %d at framework SFN %d, chipset [radio link %d] sfn %d
Line 6990: S0 BCH Resources Controller [%d,%d] BCH Resources Controller accepts good data with sfn %d at framework SFN %d, chipset [radio link %d] sfn %d
Line 7002: S0 BCH Resources Controller [%d,%d] BCH Resources Controller accepts good data cont- refRlChipsetSfn %d refRlChipsetSlot %d refRl=%d trChinfo->chipOffset %d
Line 7002: S0 BCH Resources Controller [%d,%d] BCH Resources Controller accepts good data cont- refRlChipsetSfn %d refRlChipsetSlot %d refRl=%d trChinfo->chipOffset %d
Line 7010: S0 BCH Resources Controller[%d,%d] BCH Resources Controller accepts good data cont- trChinfo->chipOffset %d
Line 7010: S0 BCH Resources Controller[%d,%d] BCH Resources Controller accepts good data cont- trChinfo->chipOffset %d
Line 7022: S0 BCH Resources Controller[%d,%d] BCH Resources Controller accepts good data with sfn %d at framework CFN %d, radio link %d trChinfo->cfn %d
Line 7022: S0 BCH Resources Controller[%d,%d] BCH Resources Controller accepts good data with sfn %d at framework CFN %d, radio link %d trChinfo->cfn %d
Line 5717: S0  DBCH: uphy_CBchResourcesController_setNbrTimeOffset: slotOffset %d frameOffset %d
Line 5717: S0  DBCH: uphy_CBchResourcesController_setNbrTimeOffset: slotOffset %d frameOffset %d
Line 7144: S0 uphy_CBch_GetSfn: Target Cell [%d %d] MultipathInfo=0
Line 7144: S0 uphy_CBch_GetSfn: Target Cell [%d %d] MultipathInfo=0
Line 7166: S0 uphy_CBch_GetSfn: Target Cell [%d %d] No multipath Info
Line 7166: S0 uphy_CBch_GetSfn: Target Cell [%d %d] No multipath Info
Line 7181: S0 uphy_CBch_GetSfn: Reference Cell [%d %d] No multipath Info
Line 7181: S0 uphy_CBch_GetSfn: Reference Cell [%d %d] No multipath Info
Line 7218: S0 uphy_CBch_GetSfn: Target Cell [%d %d] MultipathInfo=0
Line 7218: S0 uphy_CBch_GetSfn: Target Cell [%d %d] MultipathInfo=0
Line 7240: S0 uphy_CBch_GetSfn: Target Cell [%d %d] No multipath Info
Line 7240: S0 uphy_CBch_GetSfn: Target Cell [%d %d] No multipath Info
Line 7251: S0 uphy_CBch_GetSfn: RefCell not found
Line 7251: S0 uphy_CBch_GetSfn: RefCell not found
Line 7290: S0 uphy_CBch_GetSfn[%d,%d]: Allowed for possibility of reference cell sfn changing by time CellSfn server processes data- sfnChange=%d, quaterChipsTOff %d, quaterChipsIntoFrame %d, sfn=%d
Line 7290: S0 uphy_CBch_GetSfn[%d,%d]: Allowed for possibility of reference cell sfn changing by time CellSfn server processes data- sfnChange=%d, quaterChipsTOff %d, quaterChipsIntoFrame %d, sfn=%d
Line 7300: S0 uphy_CBch_GetSfn[%d,%d]: Allowed for possibility of reference cell sfn changing by time CellSfn server processes data cont- chipsetSfn %d, trChInfo->sfn %d, boundaryFrameworkSfn %d, boundaryFrameworkCfn %d
Line 7300: S0 uphy_CBch_GetSfn[%d,%d]: Allowed for possibility of reference cell sfn changing by time CellSfn server processes data cont- chipsetSfn %d, trChInfo->sfn %d, boundaryFrameworkSfn %d, boundaryFrameworkCfn %d
Line 7320: S0 uphy_CBch_GetSfn[%d,%d] sets up framework Sfn and Cfn: OldSfn %d New Sfn %d NewCfn %d
Line 7320: S0 uphy_CBch_GetSfn[%d,%d] sets up framework Sfn and Cfn: OldSfn %d New Sfn %d NewCfn %d
Line 1109: pchResourceConfigMsg is NULL pointer
Line 1109: pchResourceConfigMsg is NULL pointer
Line 1122: isBplmnBchConfigured %d pch [%d %d] bch [%d %d]
Line 1122: isBplmnBchConfigured %d pch [%d %d] bch [%d %d]
Line 1127: BPLMN: BCH for serving cell, return FALSE
Line 1127: BPLMN: BCH for serving cell, return FALSE
Line 1148: DBCH: Modify Message Received when BCH is released
Line 1148: DBCH: Modify Message Received when BCH is released
Line 1155: DBCH Modify: %d SIB/SIBs cancelled %d SIB/SIBS added 
Line 1155: DBCH Modify: %d SIB/SIBs cancelled %d SIB/SIBS added 
Line 1161: DBCH Modify: MIB is cancelled
Line 1161: DBCH Modify: MIB is cancelled
Line 1163: DBCH Modify: SIB %d is cancelled
Line 1163: DBCH Modify: SIB %d is cancelled
Line 1178: DBCH: URRC Modify Message SIB Type %d SIB Pos %d
Line 1178: DBCH: URRC Modify Message SIB Type %d SIB Pos %d
Line 1187: DBCH: Modify Message SIBType %d received is wrong
Line 1187: DBCH: Modify Message SIBType %d received is wrong
Line 1193: DBCH: Modify Message SIBRep %d received is wrong
Line 1193: DBCH: Modify Message SIBRep %d received is wrong
Line 1199: DBCH: Modify Message SIBSegCount %d received is wrong
Line 1199: DBCH: Modify Message SIBSegCount %d received is wrong
Line 1207: DBCH: Modify Message SIB Type %d SIB Pos %d is wrong
Line 1207: DBCH: Modify Message SIB Type %d SIB Pos %d is wrong
Line 1219: Parameter check failed
Line 1219: Parameter check failed
Line 1220: DBCH: Modify Message Parameter Check failed, send negative CNF to URRC
Line 1220: DBCH: Modify Message Parameter Check failed, send negative CNF to URRC
Line 1227: DBCH Modify: SIB %d is added
Line 1227: DBCH Modify: SIB %d is added
Line 1246: DBCH: Modify Message SIB Type %d SIB Pos %d
Line 1246: DBCH: Modify Message SIB Type %d SIB Pos %d
Line 1260: DBCH: Recaluculate the retiringSFN/Continue the decoding process
Line 1260: DBCH: Recaluculate the retiringSFN/Continue the decoding process
Line 1284: rlInfoCommand uhal cmd exec failed
Line 1284: rlInfoCommand uhal cmd exec failed
Line 1295: gotRefRl %d, currentRefRl %d, gotNeighRl %d, currentNeighbourRl %d
Line 1295: gotRefRl %d, currentRefRl %d, gotNeighRl %d, currentNeighbourRl %d
Line 1313: BCH[%d] [%d %d]Non-Camping Cell Config msg REJECTED for ScrId=%d
Line 1313: BCH[%d] [%d %d]Non-Camping Cell Config msg REJECTED for ScrId=%d
Line 1320: BCH[%d] [%d %d]Non-Camping Cell Config msg received for ScrId=%d
Line 1320: BCH[%d] [%d %d]Non-Camping Cell Config msg received for ScrId=%d
Line 1332: EUphyNonCampingBchResourcesControllerMsgId_Config received in uphy_CBchResourcesController_process
Line 1332: EUphyNonCampingBchResourcesControllerMsgId_Config received in uphy_CBchResourcesController_process
Line 1345: [BCH for RefCell]: EUphyRefCellBchResourcesControllerMsgId_Config received in uphy_CBchResourcesController_process
Line 1345: [BCH for RefCell]: EUphyRefCellBchResourcesControllerMsgId_Config received in uphy_CBchResourcesController_process
Line 1354: DSDS:uphy_CBchResourcesController_process: RF pause received from DSLRC interface
Line 1354: DSDS:uphy_CBchResourcesController_process: RF pause received from DSLRC interface
Line 1358: BCH receives pause event during RfbackProcessing
Line 1358: BCH receives pause event during RfbackProcessing
Line 1378: DSDS: uphy_CBchResourcesController_process: No SFN Restore needed Here
Line 1378: DSDS: uphy_CBchResourcesController_process: No SFN Restore needed Here
Line 1388: DSDS: STTD  timeout token cancelled when RF pause from dslrc
Line 1388: DSDS: STTD  timeout token cancelled when RF pause from dslrc
Line 1393: DSDS: uphy_CBchResourcesController_process: Reset BCH configuration to init
Line 1393: DSDS: uphy_CBchResourcesController_process: Reset BCH configuration to init
Line 1405: uphy_CBchResourcesController_process: Send RF pause received from DSLRC interface to StartstopFSM
Line 1405: uphy_CBchResourcesController_process: Send RF pause received from DSLRC interface to StartstopFSM
Line 1409: 3G3G DSDS: uphy_CBchResourcesController_process: Pause received in endecoding state(EUphyUphyStartStopDecodingFsmStates_Idle)
Line 1409: 3G3G DSDS: uphy_CBchResourcesController_process: Pause received in endecoding state(EUphyUphyStartStopDecodingFsmStates_Idle)
Line 1421: uphy_CBchResourcesController_process: Start event sent to StartstopFSM
Line 1421: uphy_CBchResourcesController_process: Start event sent to StartstopFSM
Line 1438: uphy_CBchResourcesController_process: Auto pause should have been triggered while moving from Retiring to Decoding State, so release RF & Schedule token
Line 1438: uphy_CBchResourcesController_process: Auto pause should have been triggered while moving from Retiring to Decoding State, so release RF & Schedule token
Line 1446: S0  DSDS:uphy_CBchResourcesController_process: RF not in use by Controller%d
Line 1446: S0  DSDS:uphy_CBchResourcesController_process: RF not in use by Controller%d
Line 1449: DSDS:uphy_CBchResourcesController_process: RF not in use
Line 1449: DSDS:uphy_CBchResourcesController_process: RF not in use
Line 1468: DSDS:uphy_CBchResourcesController_process: RF resume received from DSLRC interface
Line 1468: DSDS:uphy_CBchResourcesController_process: RF resume received from DSLRC interface
Line 1473: DSDS:bchResourcesController_ptr: Restart BCH configuration
Line 1473: DSDS:bchResourcesController_ptr: Restart BCH configuration
Line 1482: 3G3G DSDS: bchResourcesController_ptr: Resume received
Line 1482: 3G3G DSDS: bchResourcesController_ptr: Resume received
Line 1487: RFinuse true
Line 1487: RFinuse true
Line 1488: DSDS:bchResourcesController_ptr: Enable BCH decoding
Line 1488: DSDS:bchResourcesController_ptr: Enable BCH decoding
Line 1506: 3G3G DSDS: bchResourcesController_ptr: Restart BCH decoding 
Line 1506: 3G3G DSDS: bchResourcesController_ptr: Restart BCH decoding 
Line 1517: bchResourcesController_ptr: Restart BCH decoding 
Line 1517: bchResourcesController_ptr: Restart BCH decoding 
Line 1521: uphy_CBchResourcesController_process: Not supposed to receive RF resume from UPHY DSLRC interface as we have release released RF when we are paused
Line 1521: uphy_CBchResourcesController_process: Not supposed to receive RF resume from UPHY DSLRC interface as we have release released RF when we are paused
Line 1532: DSDS:EUphyBchResourcesControllerMsgId_RfUseResumeReq: RF pause not enabled ,probably released from URRC
Line 1532: DSDS:EUphyBchResourcesControllerMsgId_RfUseResumeReq: RF pause not enabled ,probably released from URRC
Line 1551: BCH receives release event during RfbackProcessing
Line 1551: BCH receives release event during RfbackProcessing
Line 1580: BCH[%d] Release msg received for ScrId=%d does not match configMsg SrcId=%d - automatic positive release CNF
Line 1580: BCH[%d] Release msg received for ScrId=%d does not match configMsg SrcId=%d - automatic positive release CNF
Line 1586: BCH[%d] Release msg received for ScrId=%d
Line 1586: BCH[%d] Release msg received for ScrId=%d
Line 1605: Internal BCH Release Received, sending Negative Confirmation to URRC for BCH Config
Line 1605: Internal BCH Release Received, sending Negative Confirmation to URRC for BCH Config
Line 1611: Do nothing
Line 1611: Do nothing
Line 1629: BCH[%d] Release msg received for ScrId=%d NOTHING TO RELEASE - automatic positive release CNF
Line 1629: BCH[%d] Release msg received for ScrId=%d NOTHING TO RELEASE - automatic positive release CNF
Line 578: S0  Clear bchConfiguredForSiB flag
Line 578: S0  Clear bchConfiguredForSiB flag
Line 1658: BCH[%d] Release leaving Rl msg received for ScrId=%d does not match configMsg SrcId=%d - automatic positive release CNF
Line 1658: BCH[%d] Release leaving Rl msg received for ScrId=%d does not match configMsg SrcId=%d - automatic positive release CNF
Line 1672: Do nothing
Line 1672: Do nothing
Line 1674: BCH[%d] Release leaving Rl msg received for ScrId=%d
Line 1674: BCH[%d] Release leaving Rl msg received for ScrId=%d
Line 1693: BCH[%d] Release leaving Rl msg received for ScrId=%d NOTHING TO RELEASE - automatic positive release CNF
Line 1693: BCH[%d] Release leaving Rl msg received for ScrId=%d NOTHING TO RELEASE - automatic positive release CNF
Line 1709: [BCH for RefCell]: EUphyRefCellBchResourcesControllerMsgId_Release received in uphy_CBchResourcesController_process
Line 1709: [BCH for RefCell]: EUphyRefCellBchResourcesControllerMsgId_Release received in uphy_CBchResourcesController_process
Line 1716: [BCH for RefCell]: Warning !! EUphyRefCellBchResourcesControllerMsgId_Release received in uphy_CBchResourcesController_process, but already released
Line 1716: [BCH for RefCell]: Warning !! EUphyRefCellBchResourcesControllerMsgId_Release received in uphy_CBchResourcesController_process, but already released
Line 1767: Cell tracking not done, RF state =%d 
Line 1767: Cell tracking not done, RF state =%d 
Line 1776: S0  CellSynchroReqMsg == NULL pointer
Line 1776: S0  CellSynchroReqMsg == NULL pointer
Line 1804: S0 Sending Cell Synchro request failed.
Line 1804: S0 Sending Cell Synchro request failed.
Line 1819: [FH] isFreqHypo is TRUE
Line 1819: [FH] isFreqHypo is TRUE
Line 1830: S0 BCH ResourceesController, uphy_CBchResourcesController_requestCellTracking uarfcn=%d PSC=%d isTxDivValid=%d txDivStatus=%d
Line 1830: S0 BCH ResourceesController, uphy_CBchResourcesController_requestCellTracking uarfcn=%d PSC=%d isTxDivValid=%d txDivStatus=%d
Line 3956:  [SCH-IC] before_filter txDivRscp=%d txDivMetric=%d
Line 3956:  [SCH-IC] before_filter txDivRscp=%d txDivMetric=%d
Line 3975: [SCH-IC] updateSttdDetectionStatus [%d %d]: txDivRscp=%d, txDivMetric=%d, isTxdivRscpandMetricUpdate=%d
Line 3975: [SCH-IC] updateSttdDetectionStatus [%d %d]: txDivRscp=%d, txDivMetric=%d, isTxdivRscpandMetricUpdate=%d
Line 1943: S0  Restore AFC due to all BAD crcs
Line 1943: S0  Restore AFC due to all BAD crcs
Line 1963: S0  rlInfoCommand uhal cmd exec failed
Line 1963: S0  rlInfoCommand uhal cmd exec failed
Line 1979: S0  neighbourRlConfigCmd - uhal_Cmd_exec
Line 1979: S0  neighbourRlConfigCmd - uhal_Cmd_exec
Line 1984: Bch Release Notification : Reassign Nbr=%d Rl to URRC_UPHY_NUM_OF_RL_HIGH
Line 1984: Bch Release Notification : Reassign Nbr=%d Rl to URRC_UPHY_NUM_OF_RL_HIGH
Line 2112: BCH enableEnDecoding: isNeedtoRestoreSFN = %d 
Line 2112: BCH enableEnDecoding: isNeedtoRestoreSFN = %d 
Line 2119: BCH enableEnDecoding: isAdjustsEnabled= %d, PhychStr=0x%x
Line 2119: BCH enableEnDecoding: isAdjustsEnabled= %d, PhychStr=0x%x
Line 2165: BCH enableEnDecoding: isAdjustsEnabled=%d, isDpch= %d, pchConfigured=%d
Line 2165: BCH enableEnDecoding: isAdjustsEnabled=%d, isDpch= %d, pchConfigured=%d
Line 2208: S0  uhal command exec failed
Line 2208: S0  uhal command exec failed
Line 2246: unknown TTI
Line 2246: unknown TTI
Line 2255: uphy_CBchResourcesController_enableEnDecoding: currentSFN: %d currentCFN: %d currentRsn: %d
Line 2255: uphy_CBchResourcesController_enableEnDecoding: currentSFN: %d currentCFN: %d currentRsn: %d
Line 2257: uphy_CBchResourcesController_enableEnDecoding: ttiMod = %d currentCfn: %d alignedCfn: %d
Line 2257: uphy_CBchResourcesController_enableEnDecoding: ttiMod = %d currentCfn: %d alignedCfn: %d
Line 2265: uphy_CBchResourcesController_enableEnDecoding: run Immediately!
Line 2265: uphy_CBchResourcesController_enableEnDecoding: run Immediately!
Line 2286: uphy_CBchResourcesController_enableEnDecoding: timestamp: %d deadline: %d
Line 2286: uphy_CBchResourcesController_enableEnDecoding: timestamp: %d deadline: %d
Line 2313: uphy_CBchResourcesController_enableEnDecoding: currentSFN: %d currentCFN: %d currentRsn: %d
Line 2313: uphy_CBchResourcesController_enableEnDecoding: currentSFN: %d currentCFN: %d currentRsn: %d
Line 2315: uphy_CBchResourcesController_enableEnDecoding: ttiMod = %d boundarySfn: %d bchSfn: %d decodingSfn: %d
Line 2315: uphy_CBchResourcesController_enableEnDecoding: ttiMod = %d boundarySfn: %d bchSfn: %d decodingSfn: %d
Line 2323: uphy_CBchResourcesController_enableEnDecoding: run Immediately!
Line 2323: uphy_CBchResourcesController_enableEnDecoding: run Immediately!
Line 2345: uphy_CBchResourcesController_enableEnDecoding: timestamp: %d deadline: %d frameDiff:%d
Line 2345: uphy_CBchResourcesController_enableEnDecoding: timestamp: %d deadline: %d frameDiff:%d
Line 2608: BCH confirmMsg: isReferenceRl= %d, bchConfiguredForSiB=%d, SrcId = %d, MsgId =%d, isPositive = %d
Line 2608: BCH confirmMsg: isReferenceRl= %d, bchConfiguredForSiB=%d, SrcId = %d, MsgId =%d, isPositive = %d
Line 2626: [FH] isFreqHypo is FALSE
Line 2626: [FH] isFreqHypo is FALSE
Line 2642: BCH Released by SFN Server Keep the SIB Info
Line 2642: BCH Released by SFN Server Keep the SIB Info
Line 2657: S0  BCH resources idleToDecodingToken is cleared
Line 2657: S0  BCH resources idleToDecodingToken is cleared
Line 2664: S0  BCH resources retiringToDecodingToken is cleared
Line 2664: S0  BCH resources retiringToDecodingToken is cleared
Line 2677: bchResourcesController_ptr->rfRejectCount is %d
Line 2677: bchResourcesController_ptr->rfRejectCount is %d
Line 2693: NEG CNF SIB Pos %d is freed
Line 2693: NEG CNF SIB Pos %d is freed
Line 2711: S0  cnfMsg == NULL pointer
Line 2711: S0  cnfMsg == NULL pointer
Line 2728: S0  Bch controller doesn't expect to send anything other than release Cnf to interRatCoordinator
Line 2728: S0  Bch controller doesn't expect to send anything other than release Cnf to interRatCoordinator
Line 2735: S0  cnfMsg send failure
Line 2735: S0  cnfMsg send failure
Line 2770: S0  confirmMsg send failure
Line 2770: S0  confirmMsg send failure
Line 5726: S0  DBCH: uphy_CBchResourcesController_clearNbrTimeOffset:
Line 5726: S0  DBCH: uphy_CBchResourcesController_clearNbrTimeOffset:
Line 2811: S0  cnfMsg == NULL pointer
Line 2811: S0  cnfMsg == NULL pointer
Line 2828: Bch controller doesn't expect MsgId = %d from inter-rat co-ordinator
Line 2828: Bch controller doesn't expect MsgId = %d from inter-rat co-ordinator
Line 2836: S0  cnfMsg send failure
Line 2836: S0  cnfMsg send failure
Line 2860: S0  Unexpected MsgId=%d
Line 2860: S0  Unexpected MsgId=%d
Line 2877: S0  confirmMsg send failure
Line 2877: S0  confirmMsg send failure
Line 2881: S0  [BCH for RefCell]: BCH confirmMsg for Ref. Cell BCH :	MsgId =%d
Line 2881: S0  [BCH for RefCell]: BCH confirmMsg for Ref. Cell BCH :	MsgId =%d
Line 3638: UhalConfig in DsSuspend State: Returning Token
Line 3638: UhalConfig in DsSuspend State: Returning Token
Line 3648: Bch uphy_configUhalInstancesStf: state %d (StateInit or StateRlConfig)
Line 3648: Bch uphy_configUhalInstancesStf: state %d (StateInit or StateRlConfig)
Line 3657: Bch uphy_configUhalInstancesStf: state %d (StatePhyChConfig)
Line 3657: Bch uphy_configUhalInstancesStf: state %d (StatePhyChConfig)
Line 3666: Bch uphy_configUhalInstancesStf: state %d (StateRlPhychConfig)
Line 3666: Bch uphy_configUhalInstancesStf: state %d (StateRlPhychConfig)
Line 3675: Bch uphy_configUhalInstancesStf: state %d (StateDlTrChConfig)
Line 3675: Bch uphy_configUhalInstancesStf: state %d (StateDlTrChConfig)
Line 3684: Bch uphy_configUhalInstancesStf: state %d (StateDlCctrchConfig)
Line 3684: Bch uphy_configUhalInstancesStf: state %d (StateDlCctrchConfig)
Line 3692: Invalid state %d
Line 3692: Invalid state %d
Line 3698: Bch uphy_configUhalInstancesStf: state %d (StateCompleting)
Line 3698: Bch uphy_configUhalInstancesStf: state %d (StateCompleting)
Line 3705: Unknown state %d
Line 3705: Unknown state %d
Line 3711: Bch UhalCfg Failed
Line 3711: Bch UhalCfg Failed
Line 3007: Store AFC before BCH configuration
Line 3007: Store AFC before BCH configuration
Line 3015: engagedRlPhychLinksArray == NULL pointer
Line 3015: engagedRlPhychLinksArray == NULL pointer
Line 3034: rlInfoCmd exec failed: Err Code %d Add Err Code %d
Line 3034: rlInfoCmd exec failed: Err Code %d Add Err Code %d
Line 3051: refRlCellInfo is not NULL
Line 3051: refRlCellInfo is not NULL
Line 3056: Reuse the existing RL %d, reuseExistingRl %d
Line 3056: Reuse the existing RL %d, reuseExistingRl %d
Line 3060: Assign a neighbor BCH to new RL
Line 3060: Assign a neighbor BCH to new RL
Line 3068: Bch Controller decides it cannot use existing Rl %d as gotRefRl=%d reference Rl is %d, didNotMapRl is %d
Line 3068: Bch Controller decides it cannot use existing Rl %d as gotRefRl=%d reference Rl is %d, didNotMapRl is %d
Line 3073: seekReturnValue %d, reuseExistingRl %d
Line 3073: seekReturnValue %d, reuseExistingRl %d
Line 3185: No more free RL-s
Line 3185: No more free RL-s
Line 3217: rakeRl config failed
Line 3217: rakeRl config failed
Line 3254: freeRakesBitStream is 0
Line 3254: freeRakesBitStream is 0
Line 3273:  DlPhyCh config failed
Line 3273:  DlPhyCh config failed
Line 3281: BCH DlPhyCh CFG [%d %d]: rlNr %d, rakeNr %d
Line 3281: BCH DlPhyCh CFG [%d %d]: rlNr %d, rakeNr %d
Line 3313: RlPhych config failed
Line 3313: RlPhych config failed
Line 3321: BCH RlPhych CFG [%d %d]: rlNr %d, rakeNr %d
Line 3321: BCH RlPhych CFG [%d %d]: rlNr %d, rakeNr %d
Line 3338: freeTrchsBitStream 0x%x
Line 3338: freeTrchsBitStream 0x%x
Line 3342: Not enough free Trch-s
Line 3342: Not enough free Trch-s
Line 3363: uphy_CChannelsConfigurationUtility_configureDlCcTrCh: trchNr %d
Line 3363: uphy_CChannelsConfigurationUtility_configureDlCcTrCh: trchNr %d
Line 3372: dlTrCh config failed
Line 3372: dlTrCh config failed
Line 3406: Not enough free Cctrch-s
Line 3406: Not enough free Cctrch-s
Line 3413: uphy_CBchResourcesController_configUhalInstancesStf: myIndex %d,  cctrchNr %d
Line 3413: uphy_CBchResourcesController_configUhalInstancesStf: myIndex %d,  cctrchNr %d
Line 3428: DlCcTrCh config failed
Line 3428: DlCcTrCh config failed
Line 3481: [BCH for RefCell] myIndex %d
Line 3481: [BCH for RefCell] myIndex %d
Line 3497: BCH config: RlsBitStream 0x%x, nRls %d
Line 3497: BCH config: RlsBitStream 0x%x, nRls %d
Line 3504: rlInfoCommand uhal cmd exec failed
Line 3504: rlInfoCommand uhal cmd exec failed
Line 3519: BCH config: nRls %d, gotRefRl %d, gotNeighbourRl %d, refRlCellInfo %d, DB uafrcn %d, uhal prScrCode %d
Line 3519: BCH config: nRls %d, gotRefRl %d, gotNeighbourRl %d, refRlCellInfo %d, DB uafrcn %d, uhal prScrCode %d
Line 3523: No refRlCellInfo
Line 3523: No refRlCellInfo
Line 3575: There is already RefRl %d and neighRl %d - so it is not possible to set new Bch Rl
Line 3575: There is already RefRl %d and neighRl %d - so it is not possible to set new Bch Rl
Line 3803: S0  Cancel STTD Detection in case bchResourcesController_ptr->isInDedicatedMode=%d, isHHOTakingPlace=%d, rollbackFlag=%d, Already Enabled=%d
Line 3803: S0  Cancel STTD Detection in case bchResourcesController_ptr->isInDedicatedMode=%d, isHHOTakingPlace=%d, rollbackFlag=%d, Already Enabled=%d
Line 3867: S0 isSttdDetectionRequested [%d %d]: REQ failed. isTxDivValid=%d, txDivStatus=%d
Line 3867: S0 isSttdDetectionRequested [%d %d]: REQ failed. isTxDivValid=%d, txDivStatus=%d
Line 3874: S0  isSttdDetectionRequested [%d %d]: REQ failed because a target cell is not in MPDB
Line 3874: S0  isSttdDetectionRequested [%d %d]: REQ failed because a target cell is not in MPDB
Line 4399: STTD: timeout token called sttdIntEn(%d) sttdIntPend(%d) 
Line 4399: STTD: timeout token called sttdIntEn(%d) sttdIntPend(%d) 
Line 4450: S0  STTD: timeout token cancelled
Line 4450: S0  STTD: timeout token cancelled
Line 4474: S0  uphy_CBchResourcesController_SttdDetectionCallback , NOT IN EnableEndecoding state ,state =%d
Line 4474: S0  uphy_CBchResourcesController_SttdDetectionCallback , NOT IN EnableEndecoding state ,state =%d
Line 4479: S0  uphy_CBchResourcesController_SttdDetectionCallback ,state =%d
Line 4479: S0  uphy_CBchResourcesController_SttdDetectionCallback ,state =%d
Line 4489: S0  Bch:SttdDetection Cmd Status not Completed!!!!
Line 4489: S0  Bch:SttdDetection Cmd Status not Completed!!!!
Line 4531: S0  STTD: timeout token cancelled
Line 4531: S0  STTD: timeout token cancelled
Line 4550: S0  Bch:SttdDetectionForDC Cmd Status not Completed!!!!
Line 4550: S0  Bch:SttdDetectionForDC Cmd Status not Completed!!!!
Line 4044: [SCH-IC] before_filter_ForDC txDivRscpForDc=%d txDivMetricForDc=%d
Line 4044: [SCH-IC] before_filter_ForDC txDivRscpForDc=%d txDivMetricForDc=%d
Line 4066: [SCH-IC] updateSttdDetectionStatusForDC [%d %d]: txDivRscp=%d, txDivMetric=%d
Line 4066: [SCH-IC] updateSttdDetectionStatusForDC [%d %d]: txDivRscp=%d, txDivMetric=%d
Line 4594: S0  STTD: timeout token cancelled
Line 4594: S0  STTD: timeout token cancelled
Line 4612: S0  Bch:SttdDetectionFor3C Cmd Status not Completed!!!!
Line 4612: S0  Bch:SttdDetectionFor3C Cmd Status not Completed!!!!
Line 4098: [SCH-IC] updateSttdDetectionStatusFor3C [%d %d]: txDivRscp3c=%d, txDivMetric3c=%d
Line 4098: [SCH-IC] updateSttdDetectionStatusFor3C [%d %d]: txDivRscp3c=%d, txDivMetric3c=%d
Line 4704: [SCH-IC] Finger allocation Uarfcn %d scr code %d
Line 4704: [SCH-IC] Finger allocation Uarfcn %d scr code %d
Line 4708: S0  uphy_CCpcResources is NULL.
Line 4708: S0  uphy_CCpcResources is NULL.
Line 4721: [SCH-IC] Finger allocation Uarfcn %d scr code %d
Line 4721: [SCH-IC] Finger allocation Uarfcn %d scr code %d
Line 4726: S0  STTD: uarfcn=%d, primaryScrCode=%d not found in the multipath database
Line 4726: S0  STTD: uarfcn=%d, primaryScrCode=%d not found in the multipath database
Line 4753: S0  Sttd: No FREE RL, max_rl=%d
Line 4753: S0  Sttd: No FREE RL, max_rl=%d
Line 4773: S0  Sttd: No FREE FINGER (cause:%d)
Line 4773: S0  Sttd: No FREE FINGER (cause:%d)
Line 4789: S0  STTD: No free PhyCh. bchResourcesController_ptr->sttd_phy_num=%d, maxPhyChNr=%d
Line 4789: S0  STTD: No free PhyCh. bchResourcesController_ptr->sttd_phy_num=%d, maxPhyChNr=%d
Line 4800: S0 STTD: uarfcn=%d, primaryScrCode=%d not found in the multipath database
Line 4800: S0 STTD: uarfcn=%d, primaryScrCode=%d not found in the multipath database
Line 4818: uarfcn = %d psc = %d isTxDivValid = %d txDivStatus = %d txDiversityMode = %d
Line 4818: uarfcn = %d psc = %d isTxDivValid = %d txDivStatus = %d txDiversityMode = %d
Line 4827: S0  Sttd:RL Config Failed
Line 4827: S0  Sttd:RL Config Failed
Line 4844: S0  Sttd:Ssch config failed
Line 4844: S0  Sttd:Ssch config failed
Line 4871: [SCH-IC] sttd_finger=%x 
Line 4871: [SCH-IC] sttd_finger=%x 
Line 4876: S0  Sttd:Finger Config Failed
Line 4876: S0  Sttd:Finger Config Failed
Line 4883: STTD CFG: set a new RL [%d %d] as a reference RL
Line 4883: STTD CFG: set a new RL [%d %d] as a reference RL
Line 4895: S0  Sttd:RlReferenceConfig uhal cmd exec failed
Line 4895: S0  Sttd:RlReferenceConfig uhal cmd exec failed
Line 4904: STTD CFG: Reuse the existing RL [%d %d] as a reference RL
Line 4904: STTD CFG: Reuse the existing RL [%d %d] as a reference RL
Line 4914: S0  STTD CFG: neighbourRlConfigCmd failed. errCode=%d, addErrCode=%d
Line 4914: S0  STTD CFG: neighbourRlConfigCmd failed. errCode=%d, addErrCode=%d
Line 4923: [SCH-IC] a reference RL [%d %d] exists and set a new neighbor RL [%d %d]
Line 4923: [SCH-IC] a reference RL [%d %d] exists and set a new neighbor RL [%d %d]
Line 4931: STTD CFG: a reference RL [%d %d] exists and set a new neighbor RL [%d %d]
Line 4931: STTD CFG: a reference RL [%d %d] exists and set a new neighbor RL [%d %d]
Line 4938: S0  STTD CFG: neighbourRlConfigCmd failed. errCode=%d, addErrCode=%d
Line 4938: S0  STTD CFG: neighbourRlConfigCmd failed. errCode=%d, addErrCode=%d
Line 4957: S0  Sttd:uhal command exec failed
Line 4957: S0  Sttd:uhal command exec failed
Line 4980: S0  Sttd:RLPHYCH config failed
Line 4980: S0  Sttd:RLPHYCH config failed
Line 4994: S0  Sttd:RL Start Failed
Line 4994: S0  Sttd:RL Start Failed
Line 5007: S0  Sttd:Finger Start Failed
Line 5007: S0  Sttd:Finger Start Failed
Line 5020: S0  Sttd:PCCPCH/SSCH start failed
Line 5020: S0  Sttd:PCCPCH/SSCH start failed
Line 5057: STTD: [FA2] dcSttdFingerNr=%d
Line 5057: STTD: [FA2] dcSttdFingerNr=%d
Line 5062: STTD: [FA2] No Free finger for dcSttdFingerNr=%d
Line 5062: STTD: [FA2] No Free finger for dcSttdFingerNr=%d
Line 5734: S0  DBCH: scheduleWakeup
Line 5734: S0  DBCH: scheduleWakeup
Line 5741: S0  DBCH: scheduleSleeping
Line 5741: S0  DBCH: scheduleSleeping
Line 5746: S0  DBCH: resync
Line 5746: S0  DBCH: resync
Line 5752: S0  DBCH: cancelTokens
Line 5752: S0  DBCH: cancelTokens
Line 5817: S0  DBCH: resetDbgInfo
Line 5817: S0  DBCH: resetDbgInfo
Line 5822: S0  DBCH: triggerMeasurements
Line 5822: S0  DBCH: triggerMeasurements
Line 5827: S0  DBCH: getListenRSN
Line 5827: S0  DBCH: getListenRSN
Line 5836: S0  DBCH: startUhalInstancesdummy
Line 5836: S0  DBCH: startUhalInstancesdummy
Line 5849: uhal command exec failed
Line 5849: uhal command exec failed
Line 5872: S0  DBCH: stopUhalInstancesdummy
Line 5872: S0  DBCH: stopUhalInstancesdummy
Line 5874: S0 Bch stopUhalInstances: RSN=%d, stopPchSfn=%d, stopPchRSN=%d
Line 5874: S0 Bch stopUhalInstances: RSN=%d, stopPchSfn=%d, stopPchRSN=%d
Line 5892: S0  Bch stopUhalInstances: DlCctrchStopCmd exec failed
Line 5892: S0  Bch stopUhalInstances: DlCctrchStopCmd exec failed
Line 5900: Bch stopUhalInstances: CCTrCH not running
Line 5900: Bch stopUhalInstances: CCTrCH not running
Line 5929: S0  DBCH: VGMNotification
Line 5929: S0  DBCH: VGMNotification
Line 6262: Rollover Case: uphy_CBchResourcesController_scheduleDecodingPreparation:current rsn: %d boundary rsn: %d current slot: %d
Line 6262: Rollover Case: uphy_CBchResourcesController_scheduleDecodingPreparation:current rsn: %d boundary rsn: %d current slot: %d
Line 6278: DBCH: Adjusted startAtTime is %d 
Line 6278: DBCH: Adjusted startAtTime is %d 
Line 6303: uphy_CBchResourcesController_scheduleDecodingPreparation:startAtTime = %d timeStampRsn %d current rsn: %d boundary rsn: %d current slot: %d gapRsn: %d
Line 6303: uphy_CBchResourcesController_scheduleDecodingPreparation:startAtTime = %d timeStampRsn %d current rsn: %d boundary rsn: %d current slot: %d gapRsn: %d
Line 6323: S0  uphy_CBchResourcesController_scheduleGap CPICH Interrupt Stopped: bchResourcesController_ptr->rlNr %d chipsetSfn %d, chipsetSlotCounter: %d decodingSfn: %d this_Sfn: %d bchResourcesController_ptr->uphy_nbrSlotOffset: %d
Line 6323: S0  uphy_CBchResourcesController_scheduleGap CPICH Interrupt Stopped: bchResourcesController_ptr->rlNr %d chipsetSfn %d, chipsetSlotCounter: %d decodingSfn: %d this_Sfn: %d bchResourcesController_ptr->uphy_nbrSlotOffset: %d
Line 6333: uphy_CBchResourcesController_scheduleDecodingPreparation CPICH Interrupt Stopped:timeStampRsn %d current rsn: %d decodingSfn: %d this_Sfn: %d ds_nbrSlotOffset: %d
Line 6333: uphy_CBchResourcesController_scheduleDecodingPreparation CPICH Interrupt Stopped:timeStampRsn %d current rsn: %d decodingSfn: %d this_Sfn: %d ds_nbrSlotOffset: %d
Line 6363: DSDS:uphy_CBchResourcesController_UpdateTimeToDsL1rc: BCH wakeup indicated to dsl1rc=%u microseconds at currentTime =%u
Line 6363: DSDS:uphy_CBchResourcesController_UpdateTimeToDsL1rc: BCH wakeup indicated to dsl1rc=%u microseconds at currentTime =%u
Line 6399: S0  Rollover Case: uphy_CBchResourcesController_scheduleGap:current rsn: %d boundary rsn: %d current slot: %d
Line 6399: S0  Rollover Case: uphy_CBchResourcesController_scheduleGap:current rsn: %d boundary rsn: %d current slot: %d
Line 6419: S0  uphy_CBchResourcesController_scheduleGap:current rsn: %d boundary rsn: %d current slot: %d gapRsn: %d
Line 6419: S0  uphy_CBchResourcesController_scheduleGap:current rsn: %d boundary rsn: %d current slot: %d gapRsn: %d
Line 6434: S0  uphy_CBchResourcesController_scheduleGap CPICH Interrupt Stopped: bchResourcesController_ptr->rlNr %d chipsetSfn %d, chipsetSlotCounter: %d retiringSfn: %d this_Sfn: %d bchResourcesController_ptr->isuphyFirstMibRead: %d
Line 6434: S0  uphy_CBchResourcesController_scheduleGap CPICH Interrupt Stopped: bchResourcesController_ptr->rlNr %d chipsetSfn %d, chipsetSlotCounter: %d retiringSfn: %d this_Sfn: %d bchResourcesController_ptr->isuphyFirstMibRead: %d
Line 6442: S0  uphy_CBchResourcesController_scheduleGap CPICH Interrupt Stopped:current rsn: %d boundary rsn: %d current slot: %d gapRsn: %d
Line 6442: S0  uphy_CBchResourcesController_scheduleGap CPICH Interrupt Stopped:current rsn: %d boundary rsn: %d current slot: %d gapRsn: %d
Line 6453: BchController scheduleGap: maxTTI=%d
Line 6453: BchController scheduleGap: maxTTI=%d
Line 6460: BchController scheduleGap: RSN=%d, timeToGo=%d, gapRsn=%d currentSfn = %d retiringSfn = %d
Line 6460: BchController scheduleGap: RSN=%d, timeToGo=%d, gapRsn=%d currentSfn = %d retiringSfn = %d
Line 6466: S0  Skip till MIB is read
Line 6466: S0  Skip till MIB is read
Line 7463: sendBchRfUseReleaseDone CPICH Interrupt Stopped:currentSfn: %d current rsn: %d boundary rsn: %d current slot: %d
Line 7463: sendBchRfUseReleaseDone CPICH Interrupt Stopped:currentSfn: %d current rsn: %d boundary rsn: %d current slot: %d
Line 7468: Rollover Case: sendBchRfUseReleaseDone:current rsn: %d boundary rsn: %d current slot: %d
Line 7468: Rollover Case: sendBchRfUseReleaseDone:current rsn: %d boundary rsn: %d current slot: %d
Line 7478: DSDS:uphy_CBchResourcesController_UpdateTimeToDsL1rc: BCH wakeup indicated to dsl1rc=%u microseconds at currentTime =%u
Line 7478: DSDS:uphy_CBchResourcesController_UpdateTimeToDsL1rc: BCH wakeup indicated to dsl1rc=%u microseconds at currentTime =%u
Line 7491: DSDS: CBchResourcesController Unable to send RF release done message to DSL1RC
Line 7491: DSDS: CBchResourcesController Unable to send RF release done message to DSL1RC
Line 7495: RFinuse false
Line 7495: RFinuse false
Line 7501: DSDS: CBchResourcesController sendRfReleaseDone sent to DSL1RC interface with %d
Line 7501: DSDS: CBchResourcesController sendRfReleaseDone sent to DSL1RC interface with %d
Line 7947: message creation failed in uphy_CPchAndDrxResourcesController_RequestMultipathMgmtStartSingleUpdate
Line 7947: message creation failed in uphy_CPchAndDrxResourcesController_RequestMultipathMgmtStartSingleUpdate
Line 7963: PchAndDrx RequestMultipathMgmtStartSingleUpdate: msg send failed
Line 7963: PchAndDrx RequestMultipathMgmtStartSingleUpdate: msg send failed
Line 7977: Bch RequestMultipathMgmtStartSingleUpdate: msg send succeeded. Sfn=%d, Slot=%d
Line 7977: Bch RequestMultipathMgmtStartSingleUpdate: msg send succeeded. Sfn=%d, Slot=%d
Line 8006: StartStopDecodingController sendTimeoutEvent: target StartStopDecodingFsmEventId=%d(Timeout)
Line 8006: StartStopDecodingController sendTimeoutEvent: target StartStopDecodingFsmEventId=%d(Timeout)
