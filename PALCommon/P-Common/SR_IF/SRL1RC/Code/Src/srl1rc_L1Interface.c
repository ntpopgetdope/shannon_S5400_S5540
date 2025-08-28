Line 204:  Assert case is occurred %d : file : %s, line : %d
Line 207: %s: SUCCESS - SRL1RC interface module initialized
Line 275:  %s EPT passed: For RAT(%d), nextEventStartTime(%u)
Line 277: SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), OtherClientRequestReason(%d), simInfo(%d), AutoPauseTimerValue(%u) 
Line 283: SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), OtherClientRequestReason(%d), simInfo(%d), AutoPauseTimerValue(%u) 
Line 290: SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), simInfo(%d), AutoPauseTimerValue(%u) 
Line 295: SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), simInfo(%d), No AutoPause Info 
Line 312:  %s: - NULL clientDBObj object
Line 332:  %s: - NULL clientDBObj object
Line 342:  %s: - umtsMsgFuncPtr_t %d
Line 369:  %s: - NULL clientDBObj object
Line 376: %s: [PCA]requestRat=%d, peerRat=%d
Line 382: %s: [PCA]Paging conflict detected with peerRat=%d
Line 387: %s: Stack0 [PCA]firstPagingPagingConflictTime=%u, PagingConflictCnt=%d
Line 392: %s: Stack0 [PCA] New firstPagingPagingConflictTime=%u
Line 401: %s: Stack0 [PCA]Criteria of Conflict duration met (WCDMA). Diff time=%u, pagingGrant=%d, pagingReject=%d
Line 408: %s: FAIL - Failed to send message to URRC - StackId 0
Line 420: %s: Stack0 [PCA]Criteria of Conflict duration met (WCDMA). Diff time=%u, pagingGrant=%d, pagingReject=%d
Line 427: %s: FAIL - Failed to send message to URRC - StackId 0
Line 437: %s: Stack1 [PCA]ds_firstPagingPagingConflictTime=%u, PagingConflictCnt=%d
Line 442: %s: Stack1 [PCA] New firstPagingPagingConflictTime=%u
Line 451: %s: Stack1 [PCA]Criteria of Conflict duration met (DS_WCDMA). Diff=%u, pagingGrant=%d, pagingReject=%d
Line 458: %s: FAIL - Failed to send message to URRC - StackId 1
Line 470: %s: Stack1 [PCA]Criteria of Conflict duration met (DS_WCDMA). Diff=%u, pagingGrant=%d, pagingReject=%d
Line 477: %s: FAIL - Failed to send message to URRC - StackId 1
Line 517: %s: save LTE band successfully
Line 555: %s: Reset SADR Info for clientId(%d)
Line 586:  %s: - NULL timeKeeper object
Line 590:  Assert case is occurred %d : file : %s, line : %d
Line 595: %s: FAIL - NULL Registration message received
Line 600: %s: FAIL - RAT (%d:%s) is not supported by SRL1RC 
Line 611: %s: FAIL - RAT(%d) is already registered with SRL1RC by ClientId(%d)
Line 620: %s: FAIL - Registration request is coming from DSWCDMA before Deregistering the Other client
Line 626: %s: FAIL - Registration request is coming from BPLMN client before Deregistering the Other client
Line 656: %s: clientObj or otherClientObj is NULL
Line 671: %s: SUCCESS - RAT(%d), ClientId(%d), State(%d)
Line 675: %s: FAIL - RAT(%d) ResourceManager failed to register ClientId(%d)
Line 680: DS_WCDMA Client Registration failed
Line 690: %s: Active BPLMN client registered
Line 695: %s: Active BPLMN client registered
Line 710: %s: BackUp Restored ClientId(%d), nextEventStartTime(%u), nextWakeupCause(%d)
Line 720:  %s: - Event Passed nextEventStartTime(%u) currentTime(%u)
Line 727: %s: FAIL - RAT(%d) Registration failed, Max clients registered
Line 731: %s: isSADRBPLMNActive (%d) BPLMNActiveRAT(%d) 
Line 739: %s: No of client registered %u
Line 773:  Assert case is occurred %d : file : %s, line : %d
Line 778: %s: FAIL - NULL DeRegistration message received
Line 783: %s: FAIL - Deregistering Invalid ClientId(%d)
Line 791:  %s: - NULL timeKeeper object
Line 797: %s: FAIL - RAT(%d) Unregistered ClientId(%d), State(%d)
Line 817:  %s:- SADR Info BackUp Not Needed
Line 839: %s: BackUp ClientId(%d), nextEventStartTime(%u), nextWakeupCause(%d)
Line 852: %s: BackUp Restored ClientId(%d), nextEventStartTime(%u), nextWakeupCause(%d)
Line 868:  %s: - Event Passed nextEventStartTime(%u) currentTime(%u)
Line 886: %s: Normal De_Register
Line 890: %s: SUCCESS - RAT(%d), ClientId(%d), State(%d), isDeregForBPLMN(%d)
Line 904: %s: FAIL - RAT(%d) ResourceManager failed to deregister ClientId(%d), State(%d)
Line 963:  Assert case is occurred %d : file : %s, line : %d
Line 968: %s: FAIL - Resource request received with NULL output pointer
Line 974:  %s: - NULL resolverObj object
Line 989: %s: FAIL - Resource request received with NULL input pointer
Line 994: %s: FAIL - Resource request received with Invalid ClientId(%d)
Line 999: %s: FAIL - Resource request received with Invalid request reason(%d)
Line 1005: %s: FAIL - RAT(%d) ResourceRequest received from Unregistered ClientId(%d), State(%d)
Line 1007:  Resource request from unregistered client
Line 1027: Dereferenced NULL pointer : timeKeeperObj
Line 1040: RAT(%d)
Line 1064: SRL1RC REQ -Input  Request Reason (%u) expected RAT(%u) Input RAT (%u)
Line 1065: SRL1RC REQ -Input  isScheduledEvent (%u) Response (%u)
Line 1076: SRL1RC REQ - Reset Scheduled event Info
Line 1100: SRL1RC REQ - SUCCESS - RAT(%d), RequestReason(%d), currentTime(%u) MinResourceUseTime(%u)
Line 1119: srl1rc_l1intfResourceRequest: FAIL - RAT(%d), ResourceManager failed to grant resources for ClientId(%d), RequestReason(%d), MinResourceUseTime(%u) Response(%d), RejectCause(%d), RetryPeriod(%u)
Line 1128: SRL1RC REQ - isPSConnected Not updated because req rejected
Line 1134: SRL1RC -RAT(%d), RequestReason(%d),OtherClientRequestReason(%d),Response(%d) isScheduledEvent(%d)
Line 1175: SRL1RC REJ/WAIT/RETRY - RAT(%d), RequestReason(%d), Response(%d), ActiverClientRequestReason(%d), RejectCause(%d), RetryPeriod(%u) 
Line 1178: ActiveClient Info - ActiveClientRAT(%d), ActiveClientRequestReason(%d), GrantTime(%u), LatestGrantTime(%u), GrantEndTime(%u)
Line 1183: SRL1RC REJ/WAIT/RETRY -RAT(%d), RequestReason(%d), Response(%d), RejectCause(%d), RetryPeriod(%u) 
Line 1202: SRL1RC REJ/WAIT/RETRY - RAT(%d), RequestReason(%d), Response(%d), RejectCause(%d),RetryPeriod(%u) 
Line 1240:  Assert case is occurred %d : file : %s, line : %d
Line 1245: %s: FAIL - Pause Done received with NULL pointer
Line 1250: %s: FAIL - Pause Done received with Invalid ClientId(%d)
Line 1256: %s: FAIL - PauseDone received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 1258: Pause done from unregistered client
Line 1269: %s: FAIL - Pause Done received from non Active Client [%u]
Line 1285: %s: Meas Release Because measure paused client sends RF puase done - client ID(%d)/clientMeasState(%d)
Line 1298: %s: Check DR again, because DB update delayed because of LTE IRAT/inter band measurement
Line 1316: %s: SUCCESS - RAT(%d), State(%d) MsgValid(%d)
Line 1329:  %s Fail to send response as target client already deregistered
Line 1334:  %s EPT passed: For RAT(%d), nextEventStartTime(%u)
Line 1342: %s: SADR active Sending Resume to paused client [%u]
Line 1351: %s: FAIL - ResourceManager failed to process PauseDone for ClientId(%d), RAT(%d), State(%d)
Line 1380:  Assert case is occurred %d : file : %s, line : %d
Line 1385: %s: FAIL - Resource request received with NULL output pointer
Line 1400: %s: FAIL - Resume ready received with NULL pointer
Line 1406: %s: FAIL - Resume ready received with Invalid ClientId(%d)
Line 1412: %s: FAIL - Resume ready received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 1414: Resume ready from unregistered client
Line 1458: SA_DRDS : Sim info [%u]
Line 1460: %s: SUCCESS - RAT(%d), resumeNow(%d), startEarlyPauseTimer(%d), pauseTime(%u) 
Line 1469: %s: FAIL - ResourceManager failed to process ResumeReady for ClientId(%d), RAT(%d), State(%d)
Line 1494:  Assert case is occurred %d : file : %s, line : %d
Line 1499: %s: FAIL - Update Time received with NULL pointer
Line 1504: %s: FAIL - Update Time received with Invalid ClientId(%d)
Line 1510: %s: FAIL - UpdateTime received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 1512: Update time from unregistered client
Line 1520: %s: FAIL - UpdateTime received with Invalid Wakeup Cause(%d)
Line 1526: Dereferenced NULL pointer : timeKeeperObj
Line 1894:  %s Previous paging is granted. Reset PagingRejectCnt (%d) for LTE
Line 1903:  %s GSM RF hogging prevention (TimeUpdate)(Allow 2G Paging): GSM reason(%u), lastPagingGrantTimeInPauseDone(%u), currentTime(%u), nextEventStartTime(%u)
Line 1927: %s: FAIL - ResourceManager failed to process UpdateTime for ClientId(%d), RAT(%d), State(%d)
Line 1933:  %s EPT passed: For RAT(%d), nextEventStartTime(%u)
Line 1937: %s: SUCCESS - RAT(%d), currentTime(%u),nextEventStartTime(%u), nextEventDuration(%u), nextWakeupCause(%d)  
Line 1964:  Assert case is occurred %d : file : %s, line : %d
Line 1969: %s: FAIL - PS Update Time received with NULL pointer
Line 1974: %s: FAIL - PS Update Time received with Invalid ClientId(%d)
Line 1979: %s: FAIL - PS UpdateTime received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 1984: %s: FAIL - PS UpdateTime received with non PS Cause(%d)
Line 1996: Dereferenced NULL pointer : timeKeeperObj
Line 2010: %s: SUCCESS - RAT(%d), currentTime(%u),nextEventStartTime(%u), nextEventDuration(%u), nextWakeupCause(%d)  
Line 2012: %s: FAIL - ResourceManager failed to process UpdateTime for ClientId(%d), RAT(%d), State(%d)
Line 2042: %s: Client/other client object is NULL
Line 2054: %s: return result(%d)  
Line 2085: %s: Nr or DS- Nr registered (%d)
Line 2119:  Assert case is occurred %d : file : %s, line : %d
Line 2124: %s: FAIL - Resource Release received with NULL pointer
Line 2129: %s: FAIL - Resource Release received with Invalid ClientId (%d)
Line 2134: %s: FAIL - ResourceRelease received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 2136: Resource release from unregistered client
Line 2152: Dereferenced NULL pointer : timeKeeperObj
Line 2165: Resource release with nextevent received with Invalid Wakeup Cause(%d)
Line 2184: %s: Meas Release Because Measure client state is NOT idle - client ID(%d)/clientMeasState(%d) requested for Rf release
Line 2197: %s: Tx Release Because Tx client state is NOT idle - client ID(%d)/clientTxState(%d) requested for Rf release
Line 2207: %s: Check DR again, because DB update delayed because of LTE IRAT/inter band measurement
Line 2233: %s: SUCCESS - RAT(%d) AgcDiff(%d)
Line 2236: %s: SUCCESS - RAT(%d), currentTime(%u),nextEventStartTime(%u), nextEventDuration(%u), nextWakeupCause(%u)  
Line 2256: %s: targetClientId %u 
Line 2259:  %s EPT passed: For RAT(%d), nextEventStartTime(%u)
Line 2271:  %s Fail to send response as target client already deregistered
Line 2288: %s: FAIL - RAT(%d), ResourceManager failed to process ResourceRelease
Line 2404:  Assert case is occurred %d : file : %s, line : %d
Line 2409: %s: FAIL - msg is NULL
Line 2421: Dereferenced NULL pointer : timeKeeperObj
Line 2430: %s: SUCCESS (Sent RES_RSP) - RAT(%d), StartEarlyPauseTimer(%d), EarlyPauseTime(%u), currentTime(%u)
Line 2437: %s: SUCCESS (Sent PAUSE) - RAT(%d)
Line 2446: %s: SUCCESS (Sent RESUME) - RAT(%d), StartEarlyPauseTimer(%d), EarlyPauseTime(%u), currentTime(%u), 3GF_DRDSDS - SIM[%d], SA_DRDS - SIM[%d]
Line 2454: %s: SUCCESS (Sent START TIMER) - RAT(%d), EarlyPauseTime(%u), currentTime(%u) 
Line 2460: %s: SUCCESS (Sent RescheduleWakeupToPCH) - RAT(%d), currentTime(%u) 
Line 2466: %s: SUCCESS (Sent PICHNackNotification) - RAT(%d), currentTime(%u) 
Line 2472: %s:[PSPS] SUCCESS (Sent PsPsStatusInd) - RAT(%d), currentTime(%u) 
Line 2478: %s: SUCCESS (Sent SearcherResponse) - RAT(%d), currentTime(%u) 
Line 2484: %s: SUCCESS (Sent SearcherPause) - RAT(%d), currentTime(%u) 
Line 2490: %s: SUCCESS (Sent SearcherResume) - RAT(%d), currentTime(%u) 
Line 2496: %s: SUCCESS (Sent RescheduleMeasurements) - RAT(%d), currentTime(%u) 
Line 2504: %s: SUCCESS (Sent TX_REQ_RSP) - RAT(%d), TxResponse(%d), assignedTX(%x), currentTime(%u)
Line 2512: %s: SUCCESS (Sent Tx Change Request) - RAT(%d), assignedTX(%x) 
Line 2519: %s: SUCCESS (Sent Con-Con Ind) - RAT(%d), isConCon(%d) 
Line 2526: %s: SUCCESS (Sent Measure Response) - RAT(%d), rsp(%d), measType(%d) 
Line 2532: %s: SUCCESS (Sent Gap Measure Pause) - RAT(%d)
Line 2538: %s: SUCCESS (Sent Gap Measure Resume) - RAT(%d)
Line 2544: %s: SUCCESS (Sent DR status ind) - RAT(%d)
Line 2550: %s: FAIL - Invalid msg Type %d
Line 2578:  Assert case is occurred %d : file : %s, line : %d
Line 2583: %s: FAIL - msg is NULL
Line 2588: %s: FAIL - srl1rcToUL1Msg is NULL
Line 2634: %s: FAIL - Invalid msg Type %s
Line 2646: %s: FAIL - Failed to send message to UL1
Line 2672:  Assert case is occurred %d : file : %s, line : %d
Line 2677: %s: FAIL - msg is NULL
Line 2682: %s: FAIL - srl1rcToGL1Msg is NULL
Line 2707: %s : FAIL - Invalid msg Type %s
Line 2717: %s: FAIL - Failed to send message to GL1
Line 2742:  Assert case is occurred %d : file : %s, line : %d
Line 2746: %s: FAIL - msg is NULL
Line 2750: %s: FAIL - srl1rcToUL1Msg is NULL
Line 2789: %s: FAIL - Invalid msg Type %s
Line 2798: %s: FAIL - Failed to send message to DS_UL1
Line 2810:  Assert case is occurred %d : file : %s, line : %d
Line 2815: %s: Stack%d FAIL - srl1rcToUrrcMsg is NULL
Line 2830: %s: FAIL - Wrong Stack Id in Dsl1rc to Urrc msg
Line 2834: %s: FAIL - Stack%d Failed to send message to URRC
Line 2837: %s: [PCA]Send CUPHY_PCH_CONFLICT_IND to URRC (Stack=%d)
Line 2853: %s: FAIL - Stack%d Failed to send message to URRC
Line 2856: %s: [PCA]Send CUPHY_PCH_CONFLICT_IND to URRC (Stack=%d)
Line 2882: %s: FAIL - this Pointer is NULL!!!
Line 2883:  Assert case is occurred %d : file : %s, line : %d
Line 2890: %s: FAIL - msg Pointer is NULL!!!
Line 2895: %s: FAIL - srl1rcToLteL1Msg Pointer is NULL!!!
Line 2949: %s :Invalid msg Type %d
Line 2955: %s: Sending IPC[0x%x] from SRL1RC to RSM...
Line 2960: %s: FAIL - Client RAT information is not LTE(%d)
Line 2971: %s: FAIL - Failed to send message to LTE L1(RSM)(%d)
Line 2975: %s: SUCCESS - sent(%d) RAT(%d)
Line 3174:  Assert case is occurred %d : file : %s, line : %d
Line 3179: %s: FAIL - msg is NULL
Line 3184: %s: FAIL - srl1rcToCDL1Msg is NULL
Line 3209: %s: FAIL - Invalid msg Type %s
Line 3249:  Assert case is occurred %d : file : %s, line : %d
Line 3254: %s: FAIL - msg is NULL
Line 3259: %s: FAIL - srl1rcToCDL1Msg is NULL
Line 3307: %s: FAIL - Invalid msg Type %s
Line 3315: %s: FAIL - Client RAT information is not NR(%d)
Line 3325: %s: FAIL - Failed to send message to NR(%d)
Line 3348:  Assert case is occurred %d : file : %s, line : %d
Line 3353: %s: FAIL - msg is NULL
Line 3366: %s: FAIL - Failed to send message to GL1 - Client Id (%d)
Line 3371: %s: SUCCESS - ClientId(%d), RAT(%d), State(%d), MsgType(%s)
Line 3374: %s: FAIL - RAT(%d) Failed to create message 
Line 3386: %s: FAIL - Failed to send message to UL1 - Client Id (%d)
Line 3394: %s: FAIL - Failed to create UL1 message for clientId (%d) 
Line 3407: %s: FAIL - Failed to send message to DS UL1 - Client Id (%d)
Line 3412: %s: SUCCESS - DS_WCDMA_ClientID(%d), RAT(%d), State(%d), MsgType(%s)
Line 3417: %s: FAIL - DS UL1 RAT Failed to create message 
Line 3436: %s: FAIL - Failed to send message to LTE L1(DS Opt) - Client Id (%d)
Line 3446: %s: FAIL - Failed to create NRL1(DS Opt) message for clientId (%d) 
Line 3514: %s: FAIL - Failed to send message to CDL1 - Client Id (%d)
Line 3522: %s: FAIL - Failed to create CDL1 message for clientId (%d) 
Line 3537: %s: FAIL - Failed to send message to NRL1 - Client Id (%d)
Line 3545: %s: FAIL - Failed to create NRL1 message for clientId (%d) 
Line 3554: %s: FAIL - Invalid RAT(%d) for ClientId (%d) 
Line 3580:  Assert case is occurred %d : file : %s, line : %d
Line 3611:  Assert case is occurred %d : file : %s, line : %d
Line 3616: srl1rc_l1intfGetGrantReasonForRAT: FAIL - Invalid RAT(%d)
Line 3621: srl1rc_l1intfGetGrantReasonForRAT: FAIL - Unregistered RAT(%d)
Line 3629: srl1rc_l1intfGetGrantReasonForRAT: RAT(%d), grantReason(%d)  
Line 3640:  Assert case is occurred %d : file : %s, line : %d
Line 3644: srl1rc_l1intfGetGrantReasonForClient: FAIL - Invalid clientId(%d)
Line 3648: srl1rc_l1intfGetGrantReasonForClient: FAIL - Unregistered Client(%d)
Line 3662:  Assert case is occurred %d : file : %s, line : %d
Line 3666: srl1rc_l1intfGetStateForClient: FAIL - Invalid clientId(%d)
Line 3670: srl1rc_l1intfGetStateForClient: FAIL - Unregistered Client(%d)
Line 3686:  Assert case is occurred %d : file : %s, line : %d
Line 3690: srl1rc_l1intfUpdatePICHRSN: FAIL - Invalid clientId(%d)
Line 3694: srl1rc_l1intfUpdatePICHRSN: FAIL - Unregistered Client(%d)
Line 3698: srl1rc_l1intfUpdatePICHRSN: FAIL - Not a WCDMA client
Line 3703: srl1rc_l1intfUpdatePICHRSN-Conflict resolution algo disabled by L1
Line 3721:  Assert case is occurred %d : file : %s, line : %d
Line 3735:  Assert case is occurred %d : file : %s, line : %d
Line 3739: srl1rc_l1intfGetPICHRSN: FAIL - Invalid clientId(%d)
Line 3743: srl1rc_l1intfGetPICHRSN: FAIL - Unregistered Client(%d)
Line 3747: srl1rc_l1intfGetPICHRSN: FAIL - Not a WCDMA client
Line 3786:  Assert case is occurred %d : file : %s, line : %d
Line 3793:  %s: - clientDB object is NULL
Line 3801: srl1rc_l1intfGetRATModeForAutoPauseClient: ratMode = %d
Line 3858: RF Hogging STAT on PS: TotalRFRequestCnt %u, AvgSkipPercentage %u OverallSkipPercentage %u, ConsecRFSkipCnt %u
Line 3899: srl1rc_rfRejectStatsDMTrace: Rat (%d) RFRequestReason (%d) TotalRFRequest (%d)
Line 3902: srl1rc_rfRejectStatsDMTrace: SignallingRejectCnt (%d) L1HightPriorityRejectCnt (%d) SignallingRejectPerc (%d) L1HightPriorityRejectPerc (%d)
Line 3905: srl1rc_rfRejectStatsDMTrace: PagingRejectCnt (%d) SysInfoRejectCnt (%d)  PagingRejectPerc (%d) SysInfoRejectPerc (%d) 
Line 3908: srl1rc_rfRejectStatsDMTrace: CellSearchRejectCnt (%d) MeasurementRejectCnt (%d) PSCallRejectCnt (%d) CellSearchRejectPerc (%d)  MeasurementRejectPerc (%d) PSCallRejectPerc (%d)
Line 3971: %s: Null ptr detected
Line 3976: %s: FAIL - Invalid clientId(%d)
Line 3983: %s: FAIL - Caller is not SA or LTE(%d)
Line 3995: %s: Legacy RAT detected (%d)
Line 4002: %s: FAIL - # of client is not 2(%d)
Line 4005: %s: return(%d)
Line 4018: [SRL1RC_DRDSDS_StatDbg] %s: PagingCntDrmode and PagingCntAbnormal are initialized. 
Line 4077: SRL1RC_REJ_RECOVERY_CODE - srl1rc_l1ConsecutiveReject_init
Line 4097:  %s: pausedTimer Stopped
Line 4104:  %s: pauseDoneTimer Stopped
Line 4112: %s: Cancel autoPauseResumeTimer 
Line 4127: %s: Tx ChangeDone timer stop 
Line 4130: %s: cleared tx memory 
Line 4139: %s: meas PauseDone timer stop 
Line 4144: %s: meas Paused timer stop 
Line 4147: %s: cleared Meas memory 
Line 4151: %s: SRL1RC cleared All the memory
Line 4169:  Assert case is occurred %d : file : %s, line : %d
Line 4173:  %s: - clientDB object is NULL
Line 4178: %s: Set measurement type to GAP forcibly by NR : %d
Line 4203:  Assert case is occurred %d : file : %s, line : %d
Line 4208: %s: FAIL - Meas Pause Done received with NULL pointer
Line 4213: %s: FAIL - Meas Pause Done received with Invalid ClientId(%d)
Line 4219: %s: FAIL - Meas PauseDone received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 4221: Meas Pause done from unregistered client
Line 4232: %s: FAIL - Meas Pause Done received from non Active Client [%u]
Line 4247: %s: SUCCESS - RAT(%d), State(%d) MsgValid(%d)
Line 4255: %s: FAIL - Meas Manager failed to process meas PauseDone for ClientId(%d), RAT(%d), State(%d)
Line 4285:  Assert case is occurred %d : file : %s, line : %d
Line 4290: %s: FAIL - Meas Release received with NULL pointer
Line 4295: %s: FAIL - Meas Release received with Invalid ClientId (%d)
Line 4301:  %s: - clientDB object is NULL
Line 4308:  %s: - Release coming for meas Idle client
Line 4315: %s: FAIL - MeasManagerObj is NULL
Line 4339: %s: SRL1RC SUCCESS - RAT(%d)
Line 4346: %s: FAIL - RAT(%d), MeasManager failed to process Measure Release
Line 4381: %s: FAIL - Measure request received with NULL pointer
Line 4388: %s: FAIL - Measure request received with Invalid ClientId(%d)
Line 4394: %s: FAIL - clientObj is NULL
Line 4411: %s: Reset ForcedGapMeasurement value : %d
Line 4415: SRL1RC Measure REQ - SUCCESS - RAT(%d), currentTime(%u)
Line 4426: %s: FAIL - RAT(%d), Measure Manager failed to grant resources for ClientId(%d), Response(%d)
Line 4447: %s: Measure Type Query requested
Line 4480:  %s: - NULL pointer detected
Line 4486:  %s: Unexpected RAT called this API
Line 4493:  %s: - only SA is registered 
Line 4501:  %s: - NULL pointer detected
Line 4516:  %s: - SADR transition going on (peer stack not active or measure paused)
Line 4520:  %s: - Request from NR / SADR transition going on /client state(%d), peer state(%d)
Line 4526:  %s: - SADR is not available
Line 4531:  %s: - number of clients (%d)
Line 4534:  %s: - Result : %d
Line 4556: %s: Client Obj is NULL
Line 4561: %s: (%d) 0: idle / 1:wait / 2:active / 3:paused / 4:pausing
Line 4604:  Assert case is occurred %d : file : %s, line : %d
Line 4620: %s: OtherClientObj is NULL
Line 4630: %s: RF pause req and TX req cross-over case detected
Line 4637: %s: Tx not possible due to Resource manager Condition
Line 4647: %s: Tx not possible due to  Measure Condition!!
Line 4694: %s: FAIL - NULL pointer detected
Line 4699: %s: FAIL - Tx request received with Invalid ClientId(%d)
Line 4714:  %s: - clientObj object is NULL
Line 4725:  %s: - OtherclientObj object is NULL
Line 4733: %s: FAIL - Tx Request received from ClientId(%d), RAT(%d), TxState(%d)
Line 4740: %s: FAIL - txManagerObj is NULL
Line 4747: Dereferenced NULL pointer : timeKeeperObj
Line 4807: SRL1RC Tx REQ - SUCCESS - RAT(%d), currentTime(%u)
Line 4813: SRL1RC Tx GRANT - RAT(%d), Response(%d), assignedTX(%x)
Line 4818: SRL1RC Tx REJ/WAIT/RETRY -RAT(%d), Response(%d)
Line 4829: %s: FAIL - RAT(%d), Tx Manager failed to grant resources for ClientId(%d), Response(%d)
Line 4862:  Assert case is occurred %d : file : %s, line : %d
Line 4867: %s: FAIL - Tx Release received with NULL pointer
Line 4872: %s: FAIL - Tx Release received with Invalid ClientId (%d)
Line 4878:  %s: - clientDB object is NULL
Line 4884:  %s: - clientObj object is NULL
Line 4890: %s: FAIL - Tx Release received from Tx Idle ClientId(%d), RAT(%d), TxState(%d)
Line 4897: %s: FAIL - txManagerObj is NULL
Line 4910: %s: SRL1RC SUCCESS - RAT(%d)
Line 4917: %s: FAIL - RAT(%d), TxManager failed to process Tx Release
Line 4946:  Assert case is occurred %d : file : %s, line : %d
Line 4951: %s: FAIL - TxChangeDone received with NULL pointer
Line 4956: %s: FAIL - TxChangeDone received with Invalid ClientId(%d)
Line 4962:  %s: - clientDB object is NULL
Line 4968:  %s: - clientObj object is NULL
Line 4975: %s: FAIL - TxChangeDone received from Tx Idle ClientId(%d), RAT(%d), TxState(%d)
Line 4982: %s: FAIL - TxChangeDone received from Tx Waiting ClientId(%d), RAT(%d), TxState(%d)
Line 4984: TxChangeDone received from Tx Waiting client
Line 4994: %s: FAIL - txManagerObj is NULL
Line 5012: %s: SUCCESS - RAT(%d), TxState(%d) MsgValid(%d), assignedTX(%x)
Line 5020: %s: FAIL - Tx Manager failed to process TxChangeDone for ClientId(%d), RAT(%d), TxState(%d)
Line 5425:  Assert case is occurred %d : file : %s, line : %d
Line 5429: srl1rc_l1intfUpdateSADRDb: FAIL - Invalid clientId(%d)
Line 5433: srl1rc_l1intfUpdateSADRDb: FAIL - Unregistered Client(%d)
Line 5440: srl1rc_l1intfUpdateSADRDb: FAIL - Not a LTE or Nr
Line 5545: %s: SA-LTE/NSA DR - NR only(%d)
Line 5556: %s: SA-LTE/NSA DR to DS transition (%d)
Line 5610:  Assert case is occurred %d : file : %s, line : %d
Line 5734:  Assert case is occurred %d : file : %s, line : %d
Line 5738: srl1rc_l1intfUpdateDRDb: FAIL - Invalid clientId(%d)
Line 5742: srl1rc_l1intfUpdateDRDb: FAIL - Unregistered Client(%d)
Line 5746: srl1rc_l1intfUpdateDRDb: FAIL - Not a WCDMA client
Line 5752:  %s: - clientDB object is NULL
Line 5770:  Assert case is occurred %d : file : %s, line : %d
Line 5774: srl1rc_l1intfIsDRImpossible: FAIL - Invalid clientId(%d)
Line 5778: srl1rc_l1intfIsDRImpossible: FAIL - Unregistered Client(%d)
Line 5782: srl1rc_l1intfIsDRImpossible: FAIL - Not a WCDMA client
Line 5818:  Assert case is occurred %d : file : %s, line : %d
Line 5823: %s: FAIL - Searcher request received with NULL output pointer
Line 5831: %s: FAIL - Searcher request received with NULL input pointer
Line 5836: %s: FAIL - Searcher request received with Invalid ClientId(%d)
Line 5842: %s: FAIL - RAT(%d) Searcher Request received from Unregistered ClientId(%d), State(%d)
Line 5844: Searcher request from unregistered client
Line 5854: %s: FAIL - dRManagerObj is NULL
Line 5861: Dereferenced NULL pointer : timeKeeperObj
Line 5868:  %s: - clientDB object is NULL
Line 5885: SRL1RC SEARCHER REQ - SUCCESS - RAT(%d), RequestReason(%d), currentTime(%u) MinSearcherUseTime(%u),otherDrClientId(%u),otherSADrClientObj(%u)
Line 5889: SRL1RC REQ - Reset Scheduled event Info
Line 5900: SRL1RC SEARCHER GRANT - RAT(%d), RequestReason(%d), Response(%d), OtherDRClientRequestReason(%d)
Line 5910: SRL1RC SEARCHER GRANT - RAT(%d), RequestReason(%d), Response(%d)
Line 5916: SRL1RC SEARCHER REJ/WAIT/RETRY -RAT(%d), RequestReason(%d), Response(%d), RejectCause(%d)
Line 5927: %s: FAIL - RAT(%d), DR-Manager failed to grant resources for ClientId(%d), RequestReason(%d), MinResourceUseTime(%u), Response(%d), RejectCause(%d)
Line 5954:  Assert case is occurred %d : file : %s, line : %d
Line 5959: %s: FAIL - Searcher Pause Done received with NULL pointer
Line 5964: %s: FAIL - Searcher Pause Done received with Invalid ClientId(%d)
Line 5970: %s: FAIL - Searcher PauseDone received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 5972: Searcher Pause done from unregistered client
Line 5982: %s: FAIL - dRManagerObj is NULL
Line 5992: %s: SUCCESS - RAT(%d), State(%d) MsgValid(%d)
Line 6000: %s: FAIL - DR-Manager failed to process PauseDone for ClientId(%d), RAT(%d), State(%d)
Line 6023:  Assert case is occurred %d : file : %s, line : %d
Line 6028: %s: FAIL - Searcher Resume ready received with NULL output pointer
Line 6035: %s: FAIL - Searcher Resume ready received with NULL pointer
Line 6040: %s: FAIL - Searcher Resume ready received with Invalid ClientId(%d)
Line 6046: %s: FAIL - Searcher Resume ready received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 6048: Searcher Resume ready from unregistered client
Line 6058: %s: FAIL - dRManagerObj is NULL
Line 6068: %s: SUCCESS - RAT(%d), resumeNow(%d)
Line 6072: %s: FAIL - DRManager failed to process ResumeReady for ClientId(%d), RAT(%d), State(%d)
Line 6100:  Assert case is occurred %d : file : %s, line : %d
Line 6105: %s: FAIL - Searcher Release received with NULL pointer
Line 6110: %s: FAIL - Searcher Release received with Invalid ClientId (%d)
Line 6115: %s: FAIL - Searcher Release received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 6117: Searcher release from unregistered client
Line 6127: %s: FAIL - dRManagerObj is NULL
Line 6134: Dereferenced NULL pointer : timeKeeperObj
Line 6145: %s: SUCCESS - RAT(%d)
Line 6152: %s: FAIL - RAT(%d), DR-Manager failed to process SearcherRelease
Line 6210: SRL1RC_REJ_RECOVERY_CODE - Resetting RFConsecutiveReject for rat %d, resetting LastOtherClientRFRequestReason to NULL
Line 6226: SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), clientId(%d), clientAITSkipped(%d)
Line 6240: SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), OtherClientRequestReason(%d), 3GFDRsimInfo(%d), isAITSetNeeded(%d) 
Line 6293: SRL1RC_REJ_RECOVERY_CODE - First paging reject for rat %d, set LastOtherClientRFRequestReason to %d
Line 6304: SRL1RC_REJ_RECOVERY_CODE - Incremented RFConsecutiveReject[rat = %d] =  %d 
Line 6307: %s: Continuous paging rejects reached to max 200 
Line 6325: SRL1RC_REJ_RECOVERY_CODE - Resetting RFConsecutiveReject for rat %d, resetting LastOtherClientRFRequestReason to NULL as otherclient reason changed or is not a valid reason
Line 6333: %s: Continuous all reason rejects reached to max 5000 
Line 6377: S3GF_DRDSDS : Sim info [%u]
Line 6420: SA_DRDS : Sim info [%d](1:Main/2:sub)
Line 6428: LTE got 1st RF grant
Line 6435: now SA-LTE DR pre-condition ready, update DRDB!
Line 6514: %s: SADR Info BackUp restored RAt (%d) SAchannelConfigured(%d) SADRsimInfo (%d) isSADRImpossible (%d) Is4RxPath (%d) updateSADRDBClientId(%d)
Line 6515: %s: txNum(%d)
Line 6538: %s: SADR BPLMN started RAt (%d) SAchannelConfigured(%d) SADRsimInfo (%d) isSADRImpossible (%d) Is4RxPath (%d) updateSADRDBClientId(%d)
Line 6539: %s: txNum(%d)
Line 6575:  Assert case is occurred %d : file : %s, line : %d
Line 6649: %s: SUCCESS - Initialization Complete 
Line 6667: %s: scchOrderActThrotStatus getter function registered 
Line 6680: %s: scchOrderActThrotStatus getter function NULL 
Line 6703: %s: RFStackGetDrConfig getter function registered 
Line 6723: %s: RFStackGetDrConfig getter function NULL 
Line 6797: %s: Function ptr is NULL
Line 6814: %s: Function ptr is NULL
Line 6821: %s: LTE stack ID(%d) / MRA SADR available state =(%d) / result (%d)
Line 6834: %s: Function ptr is NULL
Line 6850: %s: Function ptr is NULL
Line 6855: %s: LTE Client SADR available state = %d
Line 6867: %s: Function ptr is NULL
Line 6882: %s: Function ptr is NULL
Line 6887: %s: LTE Client IRAT or interband measure state = %d
Line 1578:  %s LTE MBMS Data ongoing
Line 1582:  %s MBMS RF hogging prevention (TimeUpdate): reason(%u), randValue(%u), TargetPercentage(%u), nextEventStartTime(%u)
Line 1586:  %s (Skip TimeUpdate: Time cause) MBMS RF hogging prevention (Autopause): RAT(%d), reason(%u), NextEventTime (%u)
Line 1588:  %s Skip TimeUpdate: For RAT(%d)
Line 1609:  %s (Skip TimeUpdate: NR BCH schedule) Autopause prevention for NR BCH: LWT reason(%u), NextEventTime (%u)
Line 1610:  %s Skip TimeUpdate: For RAT(%d)
Line 1635:  %s RF hogging prevention (TimeUpdate): Target Percentage changed to %d intentionally for scch order missed issue
Line 1641:  %s RF hogging prevention (TimeUpdate): reason(%u), randValue(%u), TargetPercentage(%u), Last2GRFPreventionTime(%u), nextEventStartTime(%u)
Line 1657:  %s [ARFC_Req] After ARFC start, drxCycleClient (%u), GSMRFPercentage (%u)
Line 1663:  %s [ARFC_Req] highARFCStartFlag (%u), highARFCEndFlag (%u), highARFCPeriod (%u)
Line 1667:  %s Previous paging is granted. Reset RFThrottleRejectCnt (%d) for LTE
Line 1686:  %s Execute TimeUpdate due to previous update time: srl1rcLast4GUpdateTime (%u), nextEventStartTime (%u)
Line 1703:  %s Skip TimeUpdate for duplicated nextEventStartTime event. srl1rcLast2GRFPreventionTime(%u)
Line 1704:  %s Skip TimeUpdate: For RAT(%d)
Line 1712:  %s (Skip TimeUpdate: Random event) RF hogging prevention (Autopause): reason(%u), srl1rcLast2GRFPreventionTime (%u), srl1rcRFThrottleRejectCnt (%u)
Line 1713:  %s Skip TimeUpdate: For RAT(%d)
Line 1732:  %s Skip TimeUpdate for duplicated nextEventStartTime event
Line 1734:  %s (Skip TimeUpdate: Time cause) RF hogging prevention (Autopause): reason(%u), NextEventTime (%u), LastTime (%u)
Line 1735:  %s Skip TimeUpdate: For RAT(%d)
Line 1742:  %s Update srl1rcLast4GUpdateTime: srl1rcLast2GRFPreventionTime (%u), srl1rcLast4GUpdateTime (%u)
Line 1763:  %s LWT RF hogging prevention (Skip TimeUpdate: Time cause): LWT reason(%u), randValue(%u), TargetPercentage(%u)
Line 1769:  %s (Skip TimeUpdate: Time cause) LWT RF hogging prevention (Autopause): LWT reason(%u), NextEventTime (%u)
Line 1770:  %s Skip TimeUpdate: For RAT(%d)
Line 4044: [SRL1RC_DRDSDS_StatDbg] %s: 3G DR-DSDS Available now, PCH-PCH count=%d, DrxCycle1=%d, DrxCycle2=%d
Line 4055: [SRL1RC_DRDSDS_StatDbg] %s: 3G DR-DSDS not Available due to AGC Diff(%d), PCH-PCH count=%d
