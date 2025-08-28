Line 408: messageListArray[i]=0
Line 408: messageListArray[i]=0
Line 457:  Release storedCellSearcher (max %d, current %d)
Line 457:  Release storedCellSearcher (max %d, current %d)
Line 474:  FREE StoredCellSearcherer[%d] nStoredCellSearchers=%d
Line 474:  FREE StoredCellSearcherer[%d] nStoredCellSearchers=%d
Line 481:  nStoredCellSearchers > 0
Line 481:  nStoredCellSearchers > 0
Line 530: uphy_CSearcherController_releaseMidCellSynchroniser: Free GroupCellSynchroniser[%d] %d groupCellSynchroniserId=%d nGroupCellSynchronisers[0]=%d
Line 530: uphy_CSearcherController_releaseMidCellSynchroniser: Free GroupCellSynchroniser[%d] %d groupCellSynchroniserId=%d nGroupCellSynchronisers[0]=%d
Line 542:  uphy_CSearcherController_releaseMidGroupCellSynchroniser: theGroupCellSynchronisers[%d]->requestMsg = NULL
Line 542:  uphy_CSearcherController_releaseMidGroupCellSynchroniser: theGroupCellSynchronisers[%d]->requestMsg = NULL
Line 571: uphy_CSearcherController_releaseAllGroupCellSynchroniser: BCH or DCH Tranceiver is Active
Line 571: uphy_CSearcherController_releaseAllGroupCellSynchroniser: BCH or DCH Tranceiver is Active
Line 581: uphy_CSearcherController_releaseAllGroupCellSynchroniser: Free GroupCellSynchroniser[%d] %d groupCellSynchroniserId=%d nGroupCellSynchronisers[0]=%d
Line 581: uphy_CSearcherController_releaseAllGroupCellSynchroniser: Free GroupCellSynchroniser[%d] %d groupCellSynchroniserId=%d nGroupCellSynchronisers[0]=%d
Line 589: uphy_CSearcherController_releaseAllGroupCellSynchroniser: Request Msg is NULL
Line 589: uphy_CSearcherController_releaseAllGroupCellSynchroniser: Request Msg is NULL
Line 629:  uarfcn=%d
Line 629:  uarfcn=%d
Line 650: SetPschMultipathInfoState uarfcn=%d state=%d
Line 650: SetPschMultipathInfoState uarfcn=%d state=%d
Line 698: uphy_CSearcherController_GetPschMultipathInfoState UP TO DATE Stored State uarfcn=%d now=%x%x PschStored=%x%x TimeDiff=%x%x
Line 698: uphy_CSearcherController_GetPschMultipathInfoState UP TO DATE Stored State uarfcn=%d now=%x%x PschStored=%x%x TimeDiff=%x%x
Line 705: uphy_CSearcherController_GetPschMultipathInfoState TOO OLD Stored State uarfcn=%d now=%x%x PschStored=%x%x TimeDiff=%x%x
Line 705: uphy_CSearcherController_GetPschMultipathInfoState TOO OLD Stored State uarfcn=%d now=%x%x PschStored=%x%x TimeDiff=%x%x
Line 721: uphy_CSearcherController_GetPschMultipathInfoState  uarfcn=%d state=%d now=%x%x oldState=%d PschStored=%x%x
Line 721: uphy_CSearcherController_GetPschMultipathInfoState  uarfcn=%d state=%d now=%x%x oldState=%d PschStored=%x%x
Line 763: SetPschMultipathInfo uarfcn=%d state=%d now=%x%x
Line 763: SetPschMultipathInfo uarfcn=%d state=%d now=%x%x
Line 857:  uphy_CSearcherController_AllocatePschSignal: No free signals
Line 857:  uphy_CSearcherController_AllocatePschSignal: No free signals
Line 881:  AllocatePschSignal uarfcn=%d signal=%d value=%d
Line 881:  AllocatePschSignal uarfcn=%d signal=%d value=%d
Line 932:  uarfcn=%d
Line 932:  uarfcn=%d
Line 985:  uphy_CSearcherController_ReleasePschSignal none (probably timed out
Line 985:  uphy_CSearcherController_ReleasePschSignal none (probably timed out
Line 989:  uphy_CSearcherController_ReleasePschSignal: Dodgy signal %d
Line 989:  uphy_CSearcherController_ReleasePschSignal: Dodgy signal %d
Line 1000:  uphy_CSearcherController_DoAndReleasePschSignal for uarfcn %d due to timeout finds step  state %d
Line 1000:  uphy_CSearcherController_DoAndReleasePschSignal for uarfcn %d due to timeout finds step  state %d
Line 1006: ReleasePschSignal uarfcn=%d signal=%d
Line 1006: ReleasePschSignal uarfcn=%d signal=%d
Line 1027:  theGroupCellSynchronisers Alloc failed!!
Line 1027:  theGroupCellSynchronisers Alloc failed!!
Line 1041:  theGroupCellSynchronisers already defined
Line 1041:  theGroupCellSynchronisers already defined
Line 1063:  theStoredCellSearchers Alloc failed!!
Line 1063:  theStoredCellSearchers Alloc failed!!
Line 1076:  theStoredCellSearchers already defined
Line 1076:  theStoredCellSearchers already defined
Line 1300:  uphy_CSearcherController_isRfAvailableForUse : searcherController_ptr->rfState: %d
Line 1300:  uphy_CSearcherController_isRfAvailableForUse : searcherController_ptr->rfState: %d
Line 1379: token submit when modem off
Line 1379: token submit when modem off
Line 1392:  uphy_CSearcherController_RequestRfUse: Requesting RF Use. isBlindFreqScan = %d
Line 1392:  uphy_CSearcherController_RequestRfUse: Requesting RF Use. isBlindFreqScan = %d
Line 1396:  uphy_CSearcherController_RequestRfUse: Returning as RF is not currently available!!
Line 1396:  uphy_CSearcherController_RequestRfUse: Returning as RF is not currently available!!
Line 1403:  uphy_CSearcherController_RequestRfUse: Returning as RF is already requested and response is pending!!
Line 1403:  uphy_CSearcherController_RequestRfUse: Returning as RF is already requested and response is pending!!
Line 1410:  uphy_CSearcherController_RequestRfUse: Returning as RF use is currently paused: rfReqCnts : %d
Line 1410:  uphy_CSearcherController_RequestRfUse: Returning as RF use is currently paused: rfReqCnts : %d
Line 1415:  uphy_CSearcherController_RequestRfUse: RF is available for use
Line 1415:  uphy_CSearcherController_RequestRfUse: RF is available for use
Line 1418:  uphy_CSearcherController_RequestRfStf: rfReqCnts : %d
Line 1418:  uphy_CSearcherController_RequestRfStf: rfReqCnts : %d
Line 2078:  sailor: EUphySearcherMsgId_RfUseRsp:uphy_CStoredCellSearcher_processStoredCellSearchRequest
Line 2078:  sailor: EUphySearcherMsgId_RfUseRsp:uphy_CStoredCellSearcher_processStoredCellSearchRequest
Line 2098: ## DCXO Freq Hypothesis Request is submitted
Line 2098: ## DCXO Freq Hypothesis Request is submitted
Line 2519:  blindCellSearcher == 0
Line 2519:  blindCellSearcher == 0
Line 2544: uphy_CSearcherController_notifyStoredCompleted: isDCXOFHConfigured %d
Line 2544: uphy_CSearcherController_notifyStoredCompleted: isDCXOFHConfigured %d
Line 2568:  Unable to resolve StoredCellSearcherId
Line 2568:  Unable to resolve StoredCellSearcherId
Line 2584: uphy_CSearcherController_notifyStoredCompleted: FREE StoredCellSearcherer[%d] StoredCellSearcherId=%d nStoredCellSearchers=%d
Line 2584: uphy_CSearcherController_notifyStoredCompleted: FREE StoredCellSearcherer[%d] StoredCellSearcherId=%d nStoredCellSearchers=%d
Line 2603:  Already FREED: StoredCellSearcherer[%d] nStoredCellSearchers=%d
Line 2603:  Already FREED: StoredCellSearcherer[%d] nStoredCellSearchers=%d
Line 2628:  Unable to resolve groupCellSynchroInstance
Line 2628:  Unable to resolve groupCellSynchroInstance
Line 2639: uphy_CSearcherController_notifyGroupCellSynchroCompleted %d  : FREE GroupCellSynchroniser[%d] GroupCellSynchoniserId=%d nGroupCellSynchronisers=%d
Line 2639: uphy_CSearcherController_notifyGroupCellSynchroCompleted %d  : FREE GroupCellSynchroniser[%d] GroupCellSynchoniserId=%d nGroupCellSynchronisers=%d
Line 2667: Instance created for stackId %d
Line 2667: Instance created for stackId %d
Line 2719:  uphy_CSearcherController_processPauseAllRequest: isOtherStackUsingRFForSignaling: %d
Line 2719:  uphy_CSearcherController_processPauseAllRequest: isOtherStackUsingRFForSignaling: %d
Line 2732: Reset RfRxUarfcnCmd: cmd_state should be idle but cmd_state=%d
Line 2732: Reset RfRxUarfcnCmd: cmd_state should be idle but cmd_state=%d
Line 2749: RfRxUarfcnCmd: cmd is not idle on other stack(cmd_state=%d)
Line 2749: RfRxUarfcnCmd: cmd is not idle on other stack(cmd_state=%d)
Line 4236: [DR-DSDS] Srch Ctrl: SearcherReqMsg == NULL pointer
Line 4236: [DR-DSDS] Srch Ctrl: SearcherReqMsg == NULL pointer
Line 4241: [DR-DSDS] Srch Ctrl: srch request for meas type %d
Line 4241: [DR-DSDS] Srch Ctrl: srch request for meas type %d
Line 4260: [DR-DSDS] Srch Ctrl: Searcher is already in use, so use directly
Line 4260: [DR-DSDS] Srch Ctrl: Searcher is already in use, so use directly
Line 4265: [DR-DSDS] Srch Ctrl: Searcher is in requested state
Line 4265: [DR-DSDS] Srch Ctrl: Searcher is in requested state
Line 4290: [DR-DSDS] Srch Ctrl:  Failed to send searcher Request from searcher controller
Line 4290: [DR-DSDS] Srch Ctrl:  Failed to send searcher Request from searcher controller
Line 4303: [DR-DSDS] Srch Ctrl: SearcherRelMsg == NULL pointer
Line 4303: [DR-DSDS] Srch Ctrl: SearcherRelMsg == NULL pointer
Line 4308: [DR-DSDS] Srch Ctrl: Searcher state not in Use, so no need to send release
Line 4308: [DR-DSDS] Srch Ctrl: Searcher state not in Use, so no need to send release
Line 4312: [DR-DSDS] Srch Ctrl: Sending  Searcher Use Rel to DR mngr Interface
Line 4312: [DR-DSDS] Srch Ctrl: Sending  Searcher Use Rel to DR mngr Interface
Line 4326: [DR-DSDS] Srch Ctrl: Failed to send searcher  Request
Line 4326: [DR-DSDS] Srch Ctrl: Failed to send searcher  Request
Line 4338: [DR-DSDS] Srch Ctrl: Searcher rsp received in abnornal searcher state: %d
Line 4338: [DR-DSDS] Srch Ctrl: Searcher rsp received in abnornal searcher state: %d
Line 4352: [DR-DSDS] Srch Ctrl: Searcher controller Searcher Grant
Line 4352: [DR-DSDS] Srch Ctrl: Searcher controller Searcher Grant
Line 4368: [DR-DSDS] Srch Ctrl: Searcher controller Searcher Reject
Line 4368: [DR-DSDS] Srch Ctrl: Searcher controller Searcher Reject
Line 4384: [DR-DSDS] Srch Ctrl:  uphy_CSearcherController_SearcherResponse: Neg Indication for Stored Cell Searcher %d
Line 4384: [DR-DSDS] Srch Ctrl:  uphy_CSearcherController_SearcherResponse: Neg Indication for Stored Cell Searcher %d
Line 4403: [DR-DSDS] Srch Ctrl: There are no messages to be processed 
Line 4403: [DR-DSDS] Srch Ctrl: There are no messages to be processed 
Line 4409: [DR-DSDS] Srch Ctrl: Unexpected DR mngr response
Line 4409: [DR-DSDS] Srch Ctrl: Unexpected DR mngr response
Line 4424: searcherController_ptr is NULL 
Line 4431: [DR-DSDS] Srch Ctrl: Searcher Pause 
Line 4431: [DR-DSDS] Srch Ctrl: Searcher Pause 
Line 4484: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_queueMessage:msgDeadlineListInfo == NULL pointer
Line 4484: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_queueMessage:msgDeadlineListInfo == NULL pointer
Line 4510: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_queueMessage: Number of Queued Msgs:  %d meastype %d
Line 4510: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_queueMessage: Number of Queued Msgs:  %d meastype %d
Line 4549: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_processQueuedMessage: Number of Queued Msgs:  %d
Line 4549: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_processQueuedMessage: Number of Queued Msgs:  %d
Line 4577: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_resetMessageQueue: Flushes queue msg ScrId: %d MsgId: %d
Line 4577: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_resetMessageQueue: Flushes queue msg ScrId: %d MsgId: %d
Line 4605: [DR-DSDS] Srch Ctrl:  No of elements in queue: %d 
Line 4605: [DR-DSDS] Srch Ctrl:  No of elements in queue: %d 
Line 4618: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_isSearcherInUse: searcher is currently in use or requested state
Line 4618: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_isSearcherInUse: searcher is currently in use or requested state
Line 1329:  rfUseReqMsg == NULL pointer
Line 1329:  rfUseReqMsg == NULL pointer
Line 1351:  Cant send PSCH Request
Line 1351:  Cant send PSCH Request
Line 1354:  uphy_CSearcherController_RequestRfStf : sending RF use request. isBlindFreqScan = %d
Line 1354:  uphy_CSearcherController_RequestRfStf : sending RF use request. isBlindFreqScan = %d
Line 1481:  uphy_CSearcherController_sendRfUseRel: rfReqCnts : %d
Line 1481:  uphy_CSearcherController_sendRfUseRel: rfReqCnts : %d
Line 1484:  uphy_CSearcherController_sendRfUseRel: sending RF Use Rel
Line 1484:  uphy_CSearcherController_sendRfUseRel: sending RF Use Rel
Line 1495:  Failed to send RF Rel 
Line 1495:  Failed to send RF Rel 
Line 1103:  Invalid umts message
Line 1103:  Invalid umts message
Line 3767:  UPHY Problem : No Camping Frequency set
Line 3767:  UPHY Problem : No Camping Frequency set
Line 3777:  UPHY rejects stored cell search : Bad Uarfcn %d when in dedicated mode and camped on %d
Line 3777:  UPHY rejects stored cell search : Bad Uarfcn %d when in dedicated mode and camped on %d
Line 3808: Warning: GroupCellSynchro message->payload.primaryScrCode[i] out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/3GFT/UL1/UL1C/RRM/Searcher/Code/Src/uphy_CSearcherController.c Line %d
Line 3863: Warning: PschReply message->payload.multipathInfo.pathOffset[i] out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/3GFT/UL1/UL1C/RRM/Searcher/Code/Src/uphy_CSearcherController.c Line %d
Line 3872:  Invalid Psch reply msg
Line 3872:  Invalid Psch reply msg
Line 3879:  Invalid Psch reply msg
Line 3879:  Invalid Psch reply msg
Line 3899: Warning: SschReply message->payload.scrCodeGroup out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/3GFT/UL1/UL1C/RRM/Searcher/Code/Src/uphy_CSearcherController.c Line %d
Line 3904: Warning: SschReply message->payload.frameOffset out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/3GFT/UL1/UL1C/RRM/Searcher/Code/Src/uphy_CSearcherController.c Line %d
Line 3924: Warning: GroupCpichScrCodeReply message->payload.primaryScrCode out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/3GFT/UL1/UL1C/RRM/Searcher/Code/Src/uphy_CSearcherController.c Line %d
Line 3945: Warning: CpichRscpReply message->payload.primaryScrCode out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/3GFT/UL1/UL1C/RRM/Searcher/Code/Src/uphy_CSearcherController.c Line %d
Line 3968: Warning: GroupCpichMultipathReply message->payload.primaryScrCode[i] out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/3GFT/UL1/UL1C/RRM/Searcher/Code/Src/uphy_CSearcherController.c Line %d
Line 1530: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 1530: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 1541: uphy_CSearcherController_process: msgId=%d, srcPrimaryId=%d, srcSubId=%d, TransactId=%d
Line 1541: uphy_CSearcherController_process: msgId=%d, srcPrimaryId=%d, srcSubId=%d, TransactId=%d
Line 1573:  MessageId=%d  DestComponent=%d not valid
Line 1573:  MessageId=%d  DestComponent=%d not valid
Line 1812: MessageId=%d received in state=%d when is not expected this message to be received any more
Line 1812: MessageId=%d received in state=%d when is not expected this message to be received any more
Line 1824:  MessageId=%d  received in unexpeted state=%d and freed
Line 1824:  MessageId=%d  received in unexpeted state=%d and freed
Line 1844: MessageId=%d received in state=%d when is not expected this message to be received any more
Line 1844: MessageId=%d received in state=%d when is not expected this message to be received any more
Line 1860:  MessageId=%d  received in unexpeted state=%d and freed
Line 1860:  MessageId=%d  received in unexpeted state=%d and freed
Line 1882:  Unexpected msgId=%d
Line 1882:  Unexpected msgId=%d
Line 3670:  Trying to checking valid dest component when maxStoredCellSearchers isn't set
Line 3670:  Trying to checking valid dest component when maxStoredCellSearchers isn't set
Line 3683:  Trying to checking valid dest component when maxGroupCellSynchronisers isn't set
Line 3683:  Trying to checking valid dest component when maxGroupCellSynchronisers isn't set
Line 3689:  No destination component found.
Line 3689:  No destination component found.
Line 1710:  Searcher Refresh Psch Request received for camping uarfcn 
Line 1710:  Searcher Refresh Psch Request received for camping uarfcn 
Line 1729:  EUphySearcherMsgId_RfUseResumeReq
Line 1729:  EUphySearcherMsgId_RfUseResumeReq
Line 1733:  rfState is uphy_CSearcherController_rfState_paused
Line 1733:  rfState is uphy_CSearcherController_rfState_paused
Line 1741:  rfState with Searcher is %d
Line 1741:  rfState with Searcher is %d
Line 1758: [DR-DSDS] Srch Ctrl:  DR srch response in wrong state
Line 1758: [DR-DSDS] Srch Ctrl:  DR srch response in wrong state
Line 1771: [DR-DSDS] Srch Ctrl:	DR srch pause in wrong state
Line 1771: [DR-DSDS] Srch Ctrl:	DR srch pause in wrong state
Line 1778:  Unexpected msgId=%d
Line 1778:  Unexpected msgId=%d
Line 3179:  uphy_CSearcherController_processBlindCellSearchRequest: Returning as RF is not currently available!!
Line 3179:  uphy_CSearcherController_processBlindCellSearchRequest: Returning as RF is not currently available!!
Line 3226: uphy_CSearcherController_processBlindFreqScanRequest: Returning as RF is not currently available!!
Line 3226: uphy_CSearcherController_processBlindFreqScanRequest: Returning as RF is not currently available!!
Line 3039:  nGroupCellSynchronisers (%d) >= maxGroupCellSynchronisers (%d)
Line 3039:  nGroupCellSynchronisers (%d) >= maxGroupCellSynchronisers (%d)
Line 3046:   : processGroupCellSynchroRequest [%d, %d]
Line 3046:   : processGroupCellSynchroRequest [%d, %d]
Line 3051:  numOfCells is out of bound
Line 3051:  numOfCells is out of bound
Line 3071:  Unable to locate free groupCellSynchro pointer when nGroupCellSynchronisers = %d
Line 3071:  Unable to locate free groupCellSynchro pointer when nGroupCellSynchronisers = %d
Line 3090: processGroupCellSynchroRequest [%d %d] numOfCells %d FA%d
Line 3090: processGroupCellSynchroRequest [%d %d] numOfCells %d FA%d
Line 3100: processGroupCellSynchroRequest [%d %d] isTxDivValid=%d txDivStatus=%d
Line 3100: processGroupCellSynchroRequest [%d %d] isTxDivValid=%d txDivStatus=%d
Line 3106:  numOfCells is out of bound
Line 3106:  numOfCells is out of bound
Line 3110: CREATE: groupcellSynchroniserIndex=%d instanceCounter=%d nGroupCellSynchronisers=%d
Line 3110: CREATE: groupcellSynchroniserIndex=%d instanceCounter=%d nGroupCellSynchronisers=%d
Line 4137:  Failed to send releaseAllCnf
Line 4137:  Failed to send releaseAllCnf
Line 2989:  Searcher Refresh Psch Request received for uarfcn %d in state %d
Line 2989:  Searcher Refresh Psch Request received for uarfcn %d in state %d
Line 3005: Unexpected psch State
Line 3005: Unexpected psch State
Line 2419:  theBlindCellSearcher == NULL
Line 2419:  theBlindCellSearcher == NULL
Line 2426:  Invalid umts message
Line 2426:  Invalid umts message
Line 2149:  EUphySearcherMsgId_RfUseRsp
Line 2149:  EUphySearcherMsgId_RfUseRsp
Line 2159:  uphy_CSearcherController_process: Rf rsp received in abnornal rf state: %d
Line 2159:  uphy_CSearcherController_process: Rf rsp received in abnornal rf state: %d
Line 2167:  uphy_CSearcherController_process: rfReqCnts : %d
Line 2167:  uphy_CSearcherController_process: rfReqCnts : %d
Line 2172:  sailor: EUphySearcherMsgId_RfUseRsp:uphy_CBlindCellSearcher_processBlindFreqScanRequest
Line 2172:  sailor: EUphySearcherMsgId_RfUseRsp:uphy_CBlindCellSearcher_processBlindFreqScanRequest
Line 2182:  sailor: EUphySearcherMsgId_RfUseRsp:uphy_CBlindCellSearcher_processBlindCellSearchRequest
Line 2182:  sailor: EUphySearcherMsgId_RfUseRsp:uphy_CBlindCellSearcher_processBlindCellSearchRequest
Line 2198:  uphy_CSearcherController_process: Rf rsp received in abnornal rf state: %d Possibly timeout happened
Line 2198:  uphy_CSearcherController_process: Rf rsp received in abnornal rf state: %d Possibly timeout happened
Line 2210:  uphy_CSearcherController_process:Rf Re-request triggered! rfReqRetryCnts: %d
Line 2210:  uphy_CSearcherController_process:Rf Re-request triggered! rfReqRetryCnts: %d
Line 2220: token submit when modem off
Line 2220: token submit when modem off
Line 2262:  uphy_CSearcherController_process:Max Retries Over! rfReqRetryCnts: %d
Line 2262:  uphy_CSearcherController_process:Max Retries Over! rfReqRetryCnts: %d
Line 2265:  uphy_CSearcherController_process: Neg Indication for Blind Cell Searcher
Line 2265:  uphy_CSearcherController_process: Neg Indication for Blind Cell Searcher
Line 2275:  uphy_CSearcherController_process: Neg Indication for Stored Cell Searcher %d
Line 2275:  uphy_CSearcherController_process: Neg Indication for Stored Cell Searcher %d
Line 2316:  EUphySearcherMsgId_RfUsePauseReq
Line 2316:  EUphySearcherMsgId_RfUsePauseReq
Line 2331: S0  uphy_CSearcherController_sendRfUseRel: sending RF Use Rel
Line 2344: S0  Failed to send RF Rel 
Line 1439:  uphy_CSearcherController_sendRfUsePauseCnf: sending RF Use Pause Cnf
Line 1439:  uphy_CSearcherController_sendRfUsePauseCnf: sending RF Use Pause Cnf
Line 1450:  Failed to send RF pause cnf
Line 1450:  Failed to send RF pause cnf
Line 2780:  uphy_CSearcherController_processResumeAllRequest
Line 2780:  uphy_CSearcherController_processResumeAllRequest
Line 2379: SrchAbort CnfMsg NULL
Line 2395: SrchAbort send Cnf Msg fail
Line 2927: uphy_CSearcherController_processSearchAbort: SubId=%d, index = %d, bUmtsReq = %d
Line 2939: uphy_CSearcherController_processSearchAbort: bUmtsReq=%d
Line 3363:  Stored cell searcher is running. Discard it!!!
Line 3363:  Stored cell searcher is running. Discard it!!!
Line 3375:  searcherController_ptr->nStoredCellSearchers==searcherController_ptr->maxStoredCellSearchers->increase maxStoredCellSearchers!!
Line 3375:  searcherController_ptr->nStoredCellSearchers==searcherController_ptr->maxStoredCellSearchers->increase maxStoredCellSearchers!!
Line 3392:  Searcher Controller Error: Unable to locate free storedCellSearcher pointer when nStoredCellSearchers = %d
Line 3392:  Searcher Controller Error: Unable to locate free storedCellSearcher pointer when nStoredCellSearchers = %d
Line 3400: nStoredCellSearchers = %d storedCellSearcherCounter=%d
Line 3400: nStoredCellSearchers = %d storedCellSearcherCounter=%d
Line 3403: Gaps is too close. Discard it.
Line 3403: Gaps is too close. Discard it.
Line 3431: BasefreqOffset is updated to LasAfcPdm %d
Line 3431: BasefreqOffset is updated to LasAfcPdm %d
Line 3440: searcherController_ptr->freqOffsetRange  %d searcherController_ptr->BasefreqOffset %d
Line 3440: searcherController_ptr->freqOffsetRange  %d searcherController_ptr->BasefreqOffset %d
Line 3492: required_FHtrails %d
Line 3492: required_FHtrails %d
Line 3499: DCH mode, required_FHtrails %d
Line 3499: DCH mode, required_FHtrails %d
Line 3531:  msgDeadlineListInfo == NULL pointer
Line 3531:  msgDeadlineListInfo == NULL pointer
Line 3294: ## DCXO Freq Hypothesis Request is submitted
Line 3294: ## DCXO Freq Hypothesis Request is submitted
Line 3303: ## Detected cell search is triggered, so don't use FH
Line 3303: ## Detected cell search is triggered, so don't use FH
Line 3314: ## TCXO used
Line 3314: ## TCXO used
Line 3326:  uphy_CSearcherController_processStoredCellSearchRequest: Returning as RF is not currently available!!
Line 3326:  uphy_CSearcherController_processStoredCellSearchRequest: Returning as RF is not currently available!!
Line 3604: :   uphy_CSearcherController_LocateGroupCellSynchroComponent NOT FOUND: destComponent=%d
Line 3604: :   uphy_CSearcherController_LocateGroupCellSynchroComponent NOT FOUND: destComponent=%d
Line 4052:  Unexpected Requestor
Line 4052:  Unexpected Requestor
