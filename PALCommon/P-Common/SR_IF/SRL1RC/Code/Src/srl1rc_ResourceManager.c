Line 351:  %s: - NULL clientDBobject
Line 369: *****%s: idx[%d] Invalid Event (%d) received in state (%s) from ClientId (%d), RAT(%d)*****
Line 378:  %s: - NULL timeKeeper object
Line 387: *****: srl1rc_rmProcess: idx[%d] EXECUTING STATE(%s) EVENT(%s) ClientId (%d) RAT(%d) currentTime (%u) isPsPsEnabled(%u)*****
Line 393: *****: srl1rc_rmProcess: idx[%d] EXECUTING STATE(%s) EVENT(%s) ClientId (%d) RAT(%d) currentTime (%u) isPsPsEnabled(%u)*****
Line 517:  %s: Invalid State(%s) event(%s) combination
Line 559:  %s: this pointer is NULL
Line 594:  %s: Scheduled event conflict found between clientId's [%d] and [%d]
Line 627:  %s: this pointer is NULL
Line 632:  %s: Invalid client Id %u
Line 638:  %s: str is NULL %p
Line 654:  %s: - conflictArray is initialised, Client [%u], noOfConflicts [%u]
Line 666:  %s: - client [%u] added in conflict array, No of Elements[%u]
Line 671:  %s: - idx[%u]
Line 673:  %s: - No. of Elements in Conflict Array [%u]
Line 708: %s: - this pointer is NULL
Line 714: %s: - resource request  is NULL
Line 722: %s: -Invalid client ID %d
Line 730: %s: -time keeper obj is NULL
Line 738: %s: -clientDB obj is NULL
Line 745:  %s: Received Resource request with invalid request reason %s
Line 751:  %s: Number of scheduled event received %d
Line 783:  %s: Requesting client added to clientEventInfoArr for checking conflict, Req Reason[%s], minResourceUseTime[%u]
Line 787:  %s: Number of elements in Conflict Arr[%u]
Line 798:  %s nextEventStartTime is less than currentTime
Line 805:  Scheduled event within[%u]ms time window. Time Diff[%u] 
Line 812:  %s: client %u, can not be added to autoPauseClintId array, request reason %u, event start time %u, current time %u
Line 818:  %s: client Id %u added to autoPauseCID array, request reason %u, event start time %u, current time %u
Line 822:  %s: Number eligible auto Pause clients %u
Line 828:  %s: No of conflict found[%u], No of eligibleAutoPauseClients[%u], No of Sch Events [%u], retVal[%u]
Line 833:  %s: Req Reason(%u), Conflict(%u) as Auto pause can not be triggered 
Line 853:  %s: Conflict found, as Early pause can not be triggered
Line 858:  %s: latestCid(%u), No conflict detected
Line 864:  %s: latestCid(%u), No conflict detected
Line 870:  %s: Conflict found, as Early pause can not be triggered
Line 876:  %s: Conflict found, as Early pause can not be triggered
Line 887: Early pause can be triggered, scheduledEventTime[%u] currentTime[%u]
Line 892:  %s: Invalid Latest ClientId[%u]
Line 899:  %s: No conflict found
Line 903:  %s: Is scheduled event conflict[%u]
Line 941: %s: client Id %u, nextEventStartTime %u, nextWakeupCause %u
Line 962: %s : this pointer is NULL
Line 968: %s : Invalid client Id %u
Line 977: %s : client Id %u found in eligible autopause client array
Line 981: %s : retVal %u
Line 1001: %s : this pointer is NULL
Line 1007: %s : Invalid client Id %u
Line 1016: %s : client Id %u found in array
Line 1019: %s : retVal %u
Line 1055:  %s: - resolverObj or timeKeeperObj is NULL
Line 1076:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 1081:  %s:ActiveTime Trigger (%d) is less than ActiveTimeTrigger (%d)
Line 1128:  %s: - resolverObj or timeKeeperObj is NULL
Line 1148:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 1154:  latestCid  %d
Line 1163:  Condition for calculating autopause not satisfied
Line 1193:  %s: Start EarlyPause Timer for RAT(%d) duration(%u)  
Line 1200:  %s:[PSPS] -Scheduled RAT(%d) Auto pause time[%u] passed to RAT[%u] with ResumeReadyPeriod[%u]
Line 1206:  %s: Next Event start time(%u) is less than current time(%u)  
Line 1274:  %s: retryPeriod(%d), getGrantTime(%u), getGrantDuration(%u),CurrentTime(%u), GrantEndTime(%u), LatestGrantTime(%u)  
Line 1283:  %s: - Schedule conflict happens for paging and Rejected client (%d)
Line 1316:  %s: - NULL timeKeeperObj
Line 1321:  %s: - NULL intfObj object
Line 1337:  %s RF hogging prevention (ReleaseReq) : Target Percentage changed to %d intentionally for scch order missed issue
Line 1342:  %s RF hogging prevention (ReleaseReq) : reason(%u), randValue(%u), TargetPercentage(%u), Last2GRFPreventionTime(%u), nextEventStartTime(%u)
Line 1350:  %s (Skip ReleaseReq: Random event) RF hogging prevention (Autopause): reason(%u), LastTime (%u)
Line 1352:  %s Skip TimeUpdate: For RAT(%d)
Line 1370:  %s (Skip ReleaseReq: Time cause) RF hogging prevention (Autopause): reason(%u), NextEventTime (%u), LastTime (%u)
Line 1372:  %s Skip TimeUpdate: For RAT(%d)
Line 1415:  %s: - resolverObj or timeKeeperObj is NULL
Line 1448:  %s:[PSPS] Early pause can be triggered scheduledEventTime[%u] currentTime[%u] Diff between currentTime and scheduledEventTime = [%u] PSProtectionTime[%u]
Line 1451:  %s:[PSPS] -Scheduled RAT(%d) Auto pause time[%u] passed to RAT[%u] with ResumeReadyPeriod[%u]
Line 1460: [PSPS] Autopause not triggered due to PausedClient RfUseReason(%d) priority is greater than Active Client's reason(%d)
Line 1466: [PSPS] Autopause not triggered due to less early pause time margin from the protection time[%u]
Line 1472: [PSPS] Autopause not triggered due to less early pause time margin: scheduledEventTime[%u] currentTime[%u]  gPSProtectionTime[%u]
Line 1477:  %s nextEventStartTime is less than currentTime
Line 1513:  %s: - NULL timeKeeperObj
Line 1524: autoPauseResumeTimer set Failed, Resume Paused Client
Line 1550:  %s: pausedTimer Stopped
Line 1563:  %s: pausedTimer Stopped
Line 1574: Scheduled event of CID[%u] is at time Diff of[%u], moving to RelPend1_PauseDone
Line 1584:  %s:[PSPS] Sending PS PS stop indication to client[%u]
Line 1629:  %s: - NULL timeKeeper object
Line 1635:  %s: - resolver object is NULL
Line 1655:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 1670:  Condition for calculating Auto pause 
Line 1681:  %s Early pause can be triggered scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 1690:  %s Auto pause passed = %u scheduledRat(%d)
Line 1698:  %s not valid auto pause cid = %u
Line 1750:  %s: - NULL timeKeeper object
Line 1756:  %s: - resolver object is NULL
Line 1792:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 1797:  %s nextEventStartTime is less than currentTime
Line 1811:  Condition for auto pause calculation not satisfied
Line 1846:  %s Auto pause passed = %u scheduledRat(%d)
Line 1854:  %s Scheduled Conflict was already resolved, so Auto pause not passed
Line 1859:  %s Auto Pause condition for Signalling 3G3G is not passed
Line 1864:  %s: Auto pause not passed, not valid auto pause client Id %u
Line 1895:  %s: - NULL timeKeeper object
Line 1915:  %s: pausedTimer Stopped
Line 1921:  %s:[PSPS] -Sending PSPS stop Ind to Client[%u]
Line 1931:  %s:Started resume ready time
Line 1937:  %s:autoPauseResumeTime time failed
Line 1978:  %s: pausedTimer Stopped
Line 2018:  %s: - this pointer is NULL
Line 2023:  %s: - input pointer is NULL
Line 2040:  %s: Client %u Registered, ret value (%u) 
Line 2067:  %s: - this pointer is NULL
Line 2072:  %s: - input pointer is NULL
Line 2100:  %s: Client %u unregistered, ret value (%u) 
Line 2120:  %s: - this pointer is NULL
Line 2125:  %s: - input pointer is NULL
Line 2131:  %s: - Invalid Request Reason (%u)
Line 2195:  %s: - NULL client object
Line 2203:  %s: - NULL timeKeeper object
Line 2211:  %s: - resolver object is NULL
Line 2244:  TD-SCDMA is in cell search, so update time for SysInfo from GSM is not honoured
Line 2264: Ignore update time because next wakeup near to previous paging request.  nextEventStartTime(%u), pageDuration[%u] = %lu
Line 2269:  Req Reason(%u) not paging, Update Time
Line 2273: Drx len Updated[%u]ms, SchEventReason[%u], isPreviousPagingGranted[%d]
Line 2303:  %s: client %u added in auto pause array
Line 2311:  %s: Ignore autoPuase calculation as resolution was already done. 
Line 2314:  %s: scheduledEventTime %u, currentTime % u, activeTimeTrigger %u
Line 2320:  %s: scheduledEventTime %u, grantTime %u 
Line 2325:  %s: Invalid client ID %u 
Line 2351:  Condition not satisfied for AutoPause calculation
Line 2379: Error: outgoingMsg is NULL: %u
Line 2382:  %s Early pause can be triggered scheduledEventTime %u currentTime %u
Line 2394:  %s scheduledRat(%d)
Line 2397:  %s Autopause passed(%d)
Line 2409:  %s:[PSPS] CDMA next event is falling in active client protection time Auto pause passed for CDMA = %u
Line 2411:  Auto pause passed = %u
Line 2415:  UpdateTime: Condition not satisfied for AutoPause:, requestReason %u, scheduledReason %u
Line 2421:  %s: state %s, clientObj state %u, ret %u, autoPauseClientId %u,  grantTime %u
Line 2427:  %s: state %s, clientObj state %u, ret %u 
Line 2461:  %s: In srl1rc_rmPSUpdateTime
Line 2464:  %s: - this pointer is NULL
Line 2469:  %s: - input pointer is NULL
Line 2476:  %s: - Invalid Request Reason (%d)
Line 2484:  %s: - NULL client object
Line 2490:  %s: - PS update time came from non LTE RAT: %d
Line 2498:  %s: - NULL timeKeeper object
Line 2513: clientRat(%d) otherClientRat(%d)
Line 2546:  %s Early pause for PSdata can be triggerred scheduledEventTime %u currentTime %u scheduledRat(%d)
Line 2547:  Auto pause passed for PSdata = %u
Line 2551: No outgoing Msg
Line 2556: requestReason(%d) scheduledReason(%d)
Line 2561: scheduledEventTime(%u) currentTime(%u) activeTimeTrigger(%u)
Line 2566: scheduledEventTime(%u) currentTime(%u)
Line 2571: scheduledEventTime(%u) grantTime(%u)
Line 2576: srl1rc state(%d) client state(%d) ret(%d)
Line 2743:  %s: pausedTimer Stopped
Line 2747:  %s: pausedTimer Running
Line 2753: %s: pausedTimer set Failed.
Line 2759: %s: pausedTimer Set. Expiry Time(%u), CurrentTime(%u)
Line 2793:  %s: - this pointer is NULL
Line 2798:  %s: - output pointer is NULL
Line 2803:  %s: - input pointer is NULL
Line 2815:  %s: - Invalid Request Reason (%u)
Line 2821:  %s: - clientDB object is NULL
Line 2826:  %s: - resolver object is NULL
Line 2831:  %s: - NULL timeKeeper object
Line 2963: %s: No back to back request, Do normal conflict resolution
Line 2968: %s: Ignore conflict resolution, as request is near to previous request, currentTime(%u), pageDuration[%u] = %lu
Line 2974: %s: Non paging request, Do normal conflict resolution
Line 3003:  %s: To give Reject due to remaining time for paging: (%u) < 5000  
Line 3008:  %s: (PSCall) To give Reject due to remaining time for paging: (%u) < 15000  
Line 3014:  %s: grantRequest %u, isScheduledEventConflict %u 
Line 3091:  %s [PCA]Rejected due to Req Paging (RAT=%u)-Schedule Paging (Reason=%u) conflict
Line 3174:  %s: - this pointer is NULL
Line 3179:  %s: - input pointer is NULL
Line 3190:  %s: -Invalid Client
Line 3196:  %s: - Client is Active
Line 3200:  %s: -client(%u) Unregistered
Line 3268:  %s: - this pointer is NULL
Line 3273:  %s: - output pointer is NULL
Line 3278:  %s: - input pointer is NULL
Line 3285:  %s: - Invalid Request Reason (%u)
Line 3305:  %s: - NULL client object
Line 3316:  %s: - NULL resolverObj object
Line 3324:  %s: - NULL timeKeeper object
Line 3337:  %s: - NULL active client object
Line 3361: %s: Resource request from non active client reject because Measure state is not in Idle [%u] / Measure client ID[%d]
Line 3396: %s: Ignore conflict resolution, as request is near to previous request, currentTime(%u), pageDuration[%u] = %lu
Line 3404:  Reject given to active conflict because of scheduled event conflict
Line 3413:  Reject given to active SUB SIM because of transition to DR not available
Line 3416:  Requesting Rat(%d) sim Info(%d)
Line 3441:  GRANT in REL_PEND1, SADR-DSDS Available 
Line 3477:  Reject given to active SUB SIM because of transition to DR not available
Line 3485:  Reject given to active SUB SIM because of transition to SA DR not available
Line 3490:  %s: grantToActiveClient %u, grantToNewClient %u, rejectToActiveClient %u, rejectDueToProtection %u
Line 3551:  %s: - NULL timeKeeper object
Line 3556:  %s: - this pointer is NULL
Line 3561:  %s: - input pointer is NULL
Line 3572:  %s: - NULL client object
Line 3577:  %s: - Pause done can come only from active clients clientId(%d) clientState(%d)
Line 3602:  %s:[PSPS] Sending PS PS stop indication to client[%u]
Line 3606:  %s:[PSPS] Invalid OtherPsClientId[%d]
Line 3629:  %s:Sending CUPHY reschedule measurements to client[%u]
Line 3633:  %s:No WCDMA or DSWCDMA client registered
Line 3638:  %s:No other client registered
Line 3643:  %s:Condition for CDRX release not met
Line 3686:  %s: - this pointer is NULL
Line 3691:  %s: - input pointer is NULL
Line 3701:  %s: - NULL client object
Line 3709:  %s: - NULL timeKeeper object
Line 3715:  %s: - Release came from idle client, Ignore event
Line 3721:  %s: - RES_REL received from Inactive client(%d)
Line 3727:  %s: - setScheduledEvent Failed
Line 3751:  %s:[PSPS] Sending PS PS stop indication to client[%u]
Line 3755:  %s:[PSPS] Invalid OtherPsClientId[%d]
Line 3778:  %s:Sending CUPHY reschedule measurements to client[%u]
Line 3782:  %s:No WCDMA or DSWCDMA client registered
Line 3787:  %s:No other client registered
Line 3792:  %s:Condition for CDRX release not met
Line 3801:  %s:DR to DS if only SA registered with sub SIM
Line 3912:  %s: - this pointer is NULL
Line 3917:  %s: - output pointer is NULL
Line 3922:  %s: - input pointer is NULL
Line 3952:  %s: - Invalid Request Reason (%d)
Line 3965:  %s: - NULL client object
Line 3970:  %s: - Request should come from the IDLE client clientId (%d)
Line 3978:  %s: - NULL timeKeeper object
Line 3986:  %s: - NULL Resolver object
Line 3992:  %s: autoPauseCID %d, clientId %d, Requesting client requestReason %d, paused client requestReason %d) 
Line 4058:  %s: autoPauseResumeTimer Stopped
Line 4062:  %s: autoPauseResumeTimer is NULL
Line 4081:  %s: - Reject for %d(RAT %d) due to %d(RAT %d) 
Line 4092:  %s: - Resume sent to PausedClientId(%d). Scheduled Event from clientId(%d) delayed by [%u]
Line 4099:  %s: autoPauseResumeTimer Stopped
Line 4104:  %s: autoPauseResumeTimer is NULL
Line 4110:  %s: - outgoingMsg == NULL
Line 4115:  %s: - Wait for scheduled event request from ClientId %d
Line 4152:  %s: - this pointer is NULL
Line 4157:  %s: - input pointer is NULL
Line 4169:  %s: - NULL client object
Line 4175:  %s: - Release came from idle client, Ignore Event
Line 4181:  %s: - NULL timeKeeper object
Line 4187:  %s: - setScheduledEvent Failed
Line 4196:  %s : (Paused client release RF) previously paused client update DRDB, this is not yet udpated, Check DR here
Line 4207:  %s: pausedTimer Stopped
Line 4219:  %s: autoPauseResumeTimer Stopped
Line 4306:  %s: - this pointer is NULL
Line 4311:  %s: - input pointer is NULL
Line 4316:  %s: - output pointer is NULL
Line 4350:  %s: - NULL client object
Line 4357:  %s: - NULL timeKeeper object
Line 4363:  %s: - Resume ready should come from paused client clientId (%d)
Line 4368:  %s: - Resume ready should come After 10 ms from pausedone
Line 4379:  %s: - NULL timeKeeper object
Line 4385:  %s: - resolver object is NULL
Line 4422:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 4437:  Condition for Calculating Auto Pause not satisfied.
Line 4452:  %s Early pause can be triggered scheduledEventTime %u currentTime %u
Line 4472:  %s Auto pause passed = %u scheduledRat(%d)
Line 4490:  %s : (Paused client resume now) previously paused client update DRDB, this is not yet udpated, Check DR here
Line 4501: Assigning Nr as SUB sim To requesting client Nr
Line 4506: Assigning LTE as Main sim
Line 4516:  %s: autoPauseResumeTimer Stopped
Line 4551:  %s: - this pointer is NULL
Line 4556:  %s: - input pointer is NULL
Line 4567:  %s: -Invalid Client
Line 4573:  %s: - Client is Active/Paused
Line 4616:  %s: autoPauseResumeTimer Stopped
Line 4621:  %s: -client(%d) Unregistered
Line 4667:  %s: - this pointer is NULL
Line 4672:  %s: - input pointer is NULL
Line 4681:  %s: -Invalid Client
Line 4687:  %s: - Client is Active
Line 4690:  %s: -client(%d) Unregistered
Line 4719:  %s: - this pointer is NULL
Line 4724:  %s: - output pointer is NULL
Line 4729:  %s: - input pointer is NULL
Line 4743:  %s: - Invalid Client (%d)
Line 4785:  %s: - this pointer is NULL
Line 4790:  %s: - input pointer is NULL
Line 4795:  %s: - outgoingMsg pointer is NULL
Line 4800:  %s: - outgoingMsg pointer is (%x)
Line 4807:  %s: - Invalid clientId(%d)
Line 4819:  %s: - NULL timeKeeper object
Line 4825:  %s: - resolver object is NULL
Line 4831:  %s: - PauseDone is coming from Non Active client
Line 4915: Time taken to pause  = (%u) by RAT (%u)
Line 4954:  %s: clientId[%u] added to eligibleAutoPauseClients, noOfElements[%u]
Line 4969:  %s: - AutoPause Calculation not satisfied
Line 4975:  %s: - Process outgoingMsg
Line 5032:  %s Auto pause passed = %u scheduledRat(%d)
Line 5041:  %s Auto Pause condition for Signalling 3G3G is not passed
Line 5046:  %s: No auto pause info passed, autoPauseClintId %u
Line 5053:  %s nextEventStartTime [%u] PSProtectionTime[%u]
Line 5061:  %s:[PSPS] Auto pause passed for CDMA = %u
Line 5087:  %s:[PSPS] Early pause can be triggered scheduledEventTime[%u] currentTime[%u]. Diff between currentTime and scheduledEventTime[%u], ResumeReadyPeriod[%u]
Line 5088:  %s:[PSPS] Auto pause passed = %u
Line 5095:  %s:[PSPS] -Scheduled RAT(%d) Auto pause time[%u] passed to RAT[%u] with ResumeReadyPeriod[%u]
Line 5100: [PSPS] Autopause not triggered due to PausedClient RfUseReason(%d) priority is greater than Active Client's reason(%d)
Line 5106:  [PSPS] Autopause not triggered due to less early pause time margin: scheduledEventTime[%u] currentTime[%u]. Diff between currentTime and scheduledEventTime[%u]
Line 5111:  %s nextEventStartTime is less than currentTime
Line 5139:  %s: pauseDoneTimer Stopped
Line 5233:  %s: - this pointer is NULL
Line 5238:  %s: - input pointer is NULL
Line 5247:  %s: - Invalid clientId(%d)
Line 5277:  %s: - NULL client object
Line 5285:  %s: - NULL timeKeeper object
Line 5294:  %s: - resolver object is NULL
Line 5300:  %s: - Release came from idle client, Ignore Event
Line 5311:  %s: - RES_REL received from waiting client(%d) -> Go to srl1rc_rmFSMState_AwaitingPauseDone state
Line 5316:  %s: - setScheduledEvent Failed
Line 5357:  %s: clientId[%u] added to eligibleAutoPauseClients, noOfElements[%u]
Line 5428:  %s Auto pause passed = %u scheduledRat(%d)
Line 5436:  %s Auto Pause condition for Signalling 3G3G is not passed
Line 5441:  %s: Auto pause not passed, not valid auto pause client Id[%u]
Line 5452:  %s: - setScheduledEvent Failed
Line 5462:  %s: pauseDoneTimer Stopped
Line 5510:  %s: - this pointer is NULL
Line 5515:  %s: - input pointer is NULL
Line 5524:  %s: -Invalid Client
Line 5530:  %s: - Client is Active/Paused. First Pause_done or release should have been sent from the Active client
Line 5533:  %s: -client(%d) Unregistered
Line 5559:  %s: - this pointer is NULL
Line 5564:  %s: - output pointer is NULL
Line 5569:  %s: - input pointer is NULL
Line 5582:  %s: - Invalid Client (%d)
Line 5591:  %s: - Registered Client resource request in AWAITING_PAUSE_DONE state, retry after %d ms
Line 5598:  %s: - Active Client resource request in AWAITING_PAUSE_DONE state instead of Pause_done/Release. Request rejected
Line 5626:  %s: - this pointer is NULL
Line 5631:  %s: - input pointer is NULL
Line 5639:  %s: - Invalid clientId(%d)
Line 5647:  %s: - Release came from idle client, Ignore Event
Line 5651:  %s: - RES_REL can come only from active clients, Invalid event Multiple RES_REL from client clientId(%d) clientState(%d) Ignore event
Line 5657:  %s: - NULL timeKeeper object
Line 5667:  %s: - setScheduledEvent Failed
Line 5680:  %s: pauseDoneTimer Stopped
Line 5720:  %s: - this pointer is NULL
Line 5725:  %s: - input pointer is NULL
Line 5730:  %s: - outgoingMsg pointer is NULL
Line 5735:  %s: - outgoingMsg pointer is (%x)
Line 5743:  %s: - Invalid clientId(%d)
Line 5749:  %s: - NULL timeKeeper object
Line 5756:  %s: - resolver object is NULL
Line 5763:  %s: - Pause done can come only from active clients, Invalid event from client clientId(%d) clientState(%d)
Line 5801:  %s: pauseDoneTimer Stopped
Line 5808:  %s: - Process outgoingMsg
Line 5845:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 5858:  Condition for calculating auto pause did not satisfied
Line 5870:  %s Early pause can be triggered scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 5879:  %s Auto pause passed = %u scheduledRat(%d)
Line 5886:  %s not valid auto pause cid = %u
Line 5896:  %s: pauseDoneTimer Stopped
Line 5984:  %s: - this pointer is NULL
Line 5989:  %s: - input pointer is NULL
Line 5998:  %s: -Invalid Client
Line 6004:  %s: - Client is Active
Line 6007:  %s: -client(%d) Unregistered
Line 6072:  %s: - this pointer is NULL
Line 6077:  %s: - output pointer is NULL
Line 6082:  %s: - input pointer is NULL
Line 6089:  %s: - Invalid Request Reason (%d)
Line 6100:  %s: - Invalid clientId(%d)
Line 6120:  %s: - NULL timeKeeper object
Line 6125:  %s: - resolver object is NULL
Line 6132: Invalid: Resource request came from paused client (%s)
Line 6183:  %s Reject due to Non DR to DR transition, and Nr making request with main Sim
Line 6208: Reject due to RF hogging prevention in REL_PEND2. ReassignCount = %d
Line 6244:  %s Reject due to too short RF request from release : reason(%u), LastReleaseTime (%u), CurrentTime (%u) rejectDueToProtection %u
Line 6254:  %s: grantToActiveClient[%u], grantToNewClient[%u], rejectDueToProtection[%u]
Line 6314:  %s: - this pointer is NULL
Line 6319:  %s: - input pointer is NULL
Line 6324:  %s: - output pointer is NULL
Line 6329:  %s: - outgoingMsg pointer is NULL
Line 6346:  %s: - NULL client object
Line 6351:  %s: - NULL activeClientObj object
Line 6358:  %s: - NULL resolverObj object
Line 6365:  %s: - NULL timeKeeper object
Line 6370:  %s: - Resume ready should come from paused client clientId (%d)
Line 6383:  %s:[PSPS] ActiveConflictResolution[%u]
Line 6408: %s: PauseRequest Sent to RAT(%d)
Line 6422:  %s:[PSPS] Sending Pause Request to Client[%u]. ResumeReadyPeriod[%u]
Line 6431: pauseDoneTimer set Failed.
Line 6437: %s: pauseDoneTimer Set. Expiry Time(%u), CurrentTime(%u)
Line 6480:  %s: - NULL timeKeeper object
Line 6485:  %s: - this pointer is NULL
Line 6490:  %s: - input pointer is NULL
Line 6495:  %s: - outgoingMsg pointer is NULL
Line 6500:  %s: - resolver object is NULL
Line 6512:  %s: - Invalid paused client[%u]
Line 6518:  %s: - NULL client object
Line 6523:  %s: - Pause done can come only from active clients clientId(%d) clientState(%d)
Line 6620:  %s: - PauseDone for CDMA pausedClientId [%u]
Line 6675:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 6688: Condition for calculation auto pause does not satisfied
Line 6711:  %s: Start EarlyPause Timer for RAT(%u) is (%u)  
Line 6722:  %s: No auto pause info passed, autoPauseClintId %u
Line 6732:  %s nextEventStartTime [%u] PSProtectionTime[%u]
Line 6740:  %s:[PSPS] CDMA next event is falling in active client protection time Auto pause passed for CDMA = %u
Line 6757:  %s:[PSPS] -Resume sent to Client[%u]. resumeReadyPeriod[%u], Auto Pause Time[%u]
Line 6760:  %s:[PSPS] -Scheduled RAT(%d) Auto pause time[%u] passed to RAT[%u] with ResumeReadyPeriod[%u]
Line 6770:  %s:[PSPS] -Resume sent to Client[%u]. AutoPauseTimer not sent because paused client requestReason is of higherPriority
Line 6776:  %s:[PSPS] -Resume sent to Client[%u]. Time Diff not sufficient to trigger Auto Pause[%u]
Line 6839:  %s: - this pointer is NULL
Line 6844:  %s: - input pointer is NULL
Line 6852:  %s: - Invalid Request Reason (%d)
Line 6859:  %s: - Invalid clientId(%d)
Line 6867:  %s: - NULL client object (pausedClientObj)
Line 6896:  %s: - NULL timeKeeper object
Line 6904:  %s: - NULL resolverObj object
Line 6909:  %s: - NULL client object
Line 6915:  %s: - NULL outgoingMsg
Line 6921:  %s: - Release came from idle client, Ignore event
Line 6958:  %s : (Active client release RF) previously paused client update DRDB, this is not yet udpated, Check DR here
Line 6989:  %s: pausedClientId %d, targetClientId %d
Line 6991:  %s Early pause can be triggered scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 7020:  Invalid auto pause client Id %u, auto pause can not be triggered
Line 7031:  %s:[PSPS] Sending PS PS stop indication to client[%u]
Line 7035:  %s Auto pause passed = %u
Line 7047:  %s:[PSPS] scheduledEventTime [%u] PSProtectionTime [%u]
Line 7055:  %s:[PSPS] CDMA next event is falling in active client protection time Auto pause passed for CDMA = %u
Line 7070:  %s: Resource release came from paused client, Paused Client Id[%d], client Id[%d]
Line 7090:  %s : (Paused client release RF) previously paused client update DRDB, this is not yet udpated, Check DR here
Line 7100:  %s: pausedTimer Stopped
Line 7169:  %s: - this pointer is NULL
Line 7174:  %s: - output pointer is NULL
Line 7179:  %s: - input pointer is NULL
Line 7187:  %s: - NULL resolverObj object
Line 7194:  %s: - Invalid Request Reason (%d)
Line 7201:  %s: - Invalid clientId(%d)
Line 7212:  %s: - NULL timeKeeper object
Line 7234:  %s: - NULL otherDRClientObjt
Line 7269:  %s: Start EarlyPause Timer(%u)  
Line 7376:  %s: - this pointer is NULL
Line 7381:  %s: - input pointer is NULL
Line 7388:  %s: - Invalid Request Reason (%d)
Line 7395:  %s: - Invalid clientId(%d)
Line 7405:  %s: - NULL timeKeeper object
Line 7410:  %s: - NULL client object
Line 7416:  %s: - Release came from idle client, Ignore event
Line 7422:  %s: - setScheduledEvent Failed
Line 7448:  %s: - NULL otherDRClient object
Line 7475:  DR Resume sent to ClientId %d
Line 7479: Error: outgoingMsg is NULL: %u
Line 7504:  %s Early pause can be triggered scheduledEventTime %u currentTime %u
Line 7509:  Auto pause passed = %u
Line 7515:  %s Early pause can be triggered scheduledEventTime %u currentTime %u
Line 7526:  Auto pause passed = %u
Line 7530: Error: outgoingMsg is NULL: %u
Line 7536: srl1rc_rmREL_PEND_2_DRDSDS_ResourceRelease: Condition not satisfied for AutoPause:, requestReason %u, scheduledReason %u
Line 7541: srl1rc_rmREL_PEND_2_DRDSDS_ResourceRelease: TimeMargin not sufficient for sending earlyPauseTimer to Active Client
Line 7546:  %s: Next Event start time(%u) is less than current time(%u)  
Line 7933:  %s: - this pointer is NULL
Line 7938:  %s: - output pointer is NULL
Line 7943:  %s: - input pointer is NULL
Line 7951:  %s: - NULL resolverObj object
Line 7958:  %s: - Invalid Request Reason (%d)
Line 7965:  %s: - Invalid clientId(%d)
Line 7976:  %s: - NULL timeKeeper object
Line 7998:  %s: - NULL otherDRClientObjt
Line 8017: Resource request reject because non-CA Measure state is not in Idle [%u] / Measure client ID[%d]
Line 8025: Resource request reject because Measure pausing client request RF / Measure state[%u]
Line 8056:  %s: Start EarlyPause Timer(%u)  
Line 8061:  %s nextEventStartTime is less than currentTime
Line 8105:  %s:SA-LTE DR to DSDS, reject with retry
Line 8116:  %s:SA-LTE DR to DSDS due to ENDC / to protect LTE sig for NSA, send pause req to NR
Line 8209:  %s: - this pointer is NULL
Line 8214:  %s: - input pointer is NULL
Line 8221:  %s: - Invalid Request Reason (%d)
Line 8230:  %s: - Invalid clientId(%d)
Line 8240:  %s: - NULL timeKeeper object
Line 8245:  %s: - NULL client object
Line 8251:  %s: - Release came from idle client, Ignore event
Line 8257:  %s: - setScheduledEvent Failed
Line 8283:  %s: - NULL otherDRClient object
Line 8304:  %s Early pause can be triggered scheduledEventTime %u currentTime %u
Line 8315:  Auto pause passed = %u
Line 8319: Error: outgoingMsg is NULL: %u
Line 8326: srl1rc_rmREL_PEND_2_SADRDSDS_ResourceRelease: Condition not satisfied for AutoPause:, requestReason %u, scheduledReason %u
Line 8331: srl1rc_rmREL_PEND_2_SADRDSDS_ResourceRelease: TimeMargin not sufficient for sending earlyPauseTimer to Active Client
Line 8336:  %s: Next Event start time(%u) is less than current time(%u)  
Line 8349:  %s:[PSPS] Sending PS PS stop indication to client[%u]
Line 8353:  %s:[PSPS] - outgoingMsg pointer is NULL
Line 8380:  %s:[PSPS] Autopause passed (%d)
Line 8384:  %s:[PSPS] - outgoingMsg pointer is NULL #2
Line 8389:  %s:[PSPS] Autopause not passed other SADR client request reason is higher priority
Line 8394:  %s:[PSPS] Autopause not passed nextWakeupCause(%d)
Line 8483:  %s:[PSPS] - this pointer is NULL
Line 8488:  %s:[PSPS] - input pointer is NULL
Line 8497:  %s:[PSPS] -Invalid Client
Line 8503:  %s:[PSPS] - Client is Active
Line 8506:  %s:[PSPS] -client(%d) Unregistered
Line 8533:  %s:[PSPS] - this pointer is NULL
Line 8538:  %s:[PSPS] - output pointer is NULL
Line 8543:  %s:[PSPS] - input pointer is NULL
Line 8560:  %s:[PSPS] - Invalid Client (%d)
Line 8564:  %s:[PSPS] - Request is rejected as SRL1RC is waiting for PauseDone
Line 8600:  %s:[PSPS] - this pointer is NULL
Line 8605:  %s:[PSPS] - input pointer is NULL
Line 8610:  %s:[PSPS] - output pointer is NULL
Line 8625:  %s:[PSPS] - NULL client object
Line 8630:  %s:[PSPS] - Resume ready should come from paused client clientId (%d)
Line 8666:  %s:[PSPS] - this pointer is NULL
Line 8671:  %s:[PSPS] - input pointer is NULL
Line 8676:  %s:[PSPS] - outgoingMsg pointer is NULL
Line 8681:  %s:[PSPS] - outgoingMsg pointer is (%x)
Line 8686:  %s: - resolver object is NULL
Line 8694:  %s:[PSPS] - Invalid clientId(%d)
Line 8702:  %s:[PSPS] - Pause done can come only from active clients, Invalid event from client clientId(%d) clientState(%d)
Line 8708:  %s:[PSPS] - NULL timeKeeper object
Line 8824:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 8837: Condition for calculation auto pause does not satisfied
Line 8852:  %s: Start EarlyPause Timer for RAT(%d), duration(%u)  
Line 8863:  %s: No auto pause info passed, autoPauseClintId %u
Line 8878:  %s:[PSPS] Stop PSPS because SADR Enabled[%u]
Line 8902:  %s:[PSPS] -nextEventStatrtTime [%u] PSProtectionTime[%u]
Line 8909:  %s:[PSPS] Auto pause passed for CDMA = %u
Line 8926:  %s:[PSPS] Early pause can be triggered scheduledEventTime[%u] currentTime[%u]. Diff between currentTime and scheduledEventTime[%u], ResumeReadyPeriod[%u]
Line 8928:  %s:[PSPS] Auto pause passed = %u
Line 8937:  %s:[PSPS] waitingClient Request reason [%u] is greater than scheduledReason[%u]
Line 8943:  [PSPS] Autopause not triggered due to less early pause time margin: scheduledEventTime[%u] currentTime[%u]. Diff between currentTime and scheduledEventTime[%u]
Line 8960:  %s: pauseDoneTimer Stopped
Line 8968:  %s: pausedTimer Stopped
Line 9018:  %s:[PSPS] - this pointer is NULL
Line 9023:  %s:[PSPS] - input pointer is NULL
Line 9028:  %s:[PSPS] - outgoingMsg pointer is NULL
Line 9037:  %s:[PSPS] - Invalid clientId(%d)
Line 9049:  %s:[PSPS] - NULL timeKeeper object
Line 9054:  %s:[PSPS] - NULL client object
Line 9060:  %s:[PSPS] - Release came from idle client, Ignore Event
Line 9083:  %s: pausedTimer Stopped
Line 9088:  %s:[PSPS] - RES_REL received from paused client(%d) -> Go to srl1rc_rmFSMState_AwaitingPauseDone state
Line 9097:  %s:[PSPS] - Process outgoingMsg
Line 9145:  %s: [PSPS] Early pause can be triggered scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 9148:  %s:[PSPS] Auto pause passed = %u
Line 9158:  [PSPS]Autopause not triggered due to less early pause time margin: scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 9163:  %s scheduledEventTime is less than currentTime
Line 9174:  %s: pauseDoneTimer Stopped
Line 9237:  %s: - this pointer is NULL
Line 9242:  %s: - input pointer is NULL
Line 9252:  %s: -Invalid Client
Line 9258:  %s: - Client is Active/Paused
Line 9302:  %s: autoPauseResumeTimer Stopped
Line 9305:  %s: -client(%d) Unregistered
Line 9339:  %s: - this pointer is NULL
Line 9344:  %s: - output pointer is NULL
Line 9349:  %s: - input pointer is NULL
Line 9360:  %s: - Invalid Request Reason (%d)
Line 9375:  %s: - NULL client object
Line 9380:  %s: - Request should come from the IDLE client clientId (%d)
Line 9388:  %s: - NULL timeKeeper object
Line 9396:  %s: - NULL Resolver object
Line 9401:  %s: autoPauseCID %d, clientId %d, Requesting client requestReason %d, paused client requestReason %d) 
Line 9428:  %s: autoPauseResumeTimer Stopped
Line 9432:  %s: autoPauseResumeTimer is NULL
Line 9444:  %s: - Reject for %d(RAT %d) due to %d(RAT %d) 
Line 9489:  %s: - this pointer is NULL
Line 9494:  %s: - input pointer is NULL
Line 9507:  %s: - NULL timeKeeper object
Line 9512:  %s: - NULL client object
Line 9518:  %s: - Release came from idle client, Ignore Event
Line 9524:  %s: - setScheduledEvent Failed
Line 9535:  %s: - Invalid pausedClientId(%u) 
Line 9549:  %s:Started resume ready time
Line 9558: Scheduled event of CID[%u] is at time Diff of[%u], moving to RelPend1_PauseDone
Line 9563:  %s:Resume ready time failed
Line 9607:  %s Auto pause passed = %u scheduledRat(%d)
Line 9618:  %s: pausedTimer Stopped
Line 9660:  %s: pausedTimer Stopped
Line 9665:  %s: - RES_REL should be received from paused client(%d) -> Go to RelPend1 state
Line 9731:  %s: - this pointer is NULL
Line 9736:  %s: - input pointer is NULL
Line 9741:  %s: - output pointer is NULL
Line 9775:  %s: - NULL client object
Line 9781:  %s: - NULL timeKeeper object
Line 9785:  %s: - Resume ready should come from paused client clientId (%d)
Line 9790:  %s: - Resume ready should come After 10 ms from pausedone
Line 9800:  %s: - NULL timeKeeper object
Line 9809:  %s: - resolver object is NULL
Line 9844:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 9859: Condition for calculating Auto pause not satisfied
Line 9874:  %s Early pause can be triggered scheduledEventTime %u currentTime %u
Line 9894:  %s Auto pause passed = %u scheduledRat(%d)
Line 9910: Assigning Nr as SUB sim To requesting client Nr
Line 9915: Assigning LTE as Main sim
Line 9924:  %s: autoPauseResumeTimer Stopped
Line 9957:  SRL1RC_Dbg %s:
Line 9959:  %s: - this pointer is NULL
Line 9964:  %s: - output pointer is NULL
Line 9969:  %s: - input pointer is NULL
Line 9985:  %s: - Invalid Client (%d)
Line 10029:  %s: - this pointer is NULL
Line 10034:  %s: - input pointer is NULL
Line 10039:  %s: - outgoingMsg pointer is NULL
Line 10044:  %s: - outgoingMsg pointer is (%x)
Line 10053:  %s: - Invalid clientId(%d)
Line 10066:  %s: - NULL timeKeeper object
Line 10070: Time taken to pause  = (%u) by RAT (%u)
Line 10073:  %s: - Process outgoingMsg
Line 10174:  %s: - this pointer is NULL
Line 10179:  %s: - input pointer is NULL
Line 10188:  %s: - Invalid clientId(%d)
Line 10200:  %s: - NULL timeKeeper object
Line 10205:  %s: - NULL client object
Line 10211:  %s: - Release came from idle client, Ignore Event
Line 10219:  %s: - setScheduledEvent Failed
Line 10229:  %s: - RES_REL received from waiting client(%d) -> Go to srl1rc_rmFSMState_AwaitingPauseDone2 state
Line 10239:  %s: - RES_REL received from paused client(%d) -> Go to srl1rc_rmFSMState_PausePend state
Line 10247: pauseDoneTimer set Failed.
Line 10253: %s: pauseDoneTimer Set. Expiry Time(%u), CurrentTime(%u)
Line 10330:  %s: - this pointer is NULL
Line 10335:  %s: - input pointer is NULL
Line 10346:  %s: -Invalid Client
Line 10352:  %s: - Client is Active/Paused. First Pause_done or release should have been sent from the Active client
Line 10356:  %s: -client(%d) Unregistered
Line 10403:  %s: - this pointer is NULL
Line 10408:  %s: - output pointer is NULL
Line 10413:  %s: - input pointer is NULL
Line 10429:  %s: - Invalid Client (%d)
Line 10438:  %s: - Registered Client resource request in AWAITING_PAUSE_DONE state, retry after %d ms
Line 10445:  %s: - Active Client resource request in AWAITING_PAUSE_DONE state instead of Pause_done/Release. Request rejected
Line 10494:  %s: - this pointer is NULL
Line 10499:  %s: - input pointer is NULL
Line 10529:  %s: - Invalid clientId(%d), Paused clientId %u
Line 10543:  %s: - NULL client object
Line 10549:  %s: - Release came from idle client, Ignore event
Line 10557:  %s: - NULL timeKeeper object
Line 10565:  %s: - resolver object is NULL
Line 10573:  %s: - setScheduledEvent Failed
Line 10581:  %s: - RES_REL received from paused client(%d) -> Go to srl1rc_rmFSMState_AwaitingPauseDone state
Line 10644:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 10659:  Condition for calculating auto pause not satisfied
Line 10676:  %s Early pause can be triggered scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 10695:  %s: pausedClientId %d, targetClientId %d
Line 10699:  %s Auto pause passed = %u scheduledRat(%d)
Line 10709:  Autopause not triggered due to less early pause time margin in REL_PEND2: scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 10715: %s:  Invalid auto pause client Id %u, auto pause can not be triggered
Line 10768:  %s: - this pointer is NULL
Line 10773:  %s: - input pointer is NULL
Line 10778:  %s: - outgoingMsg pointer is NULL
Line 10783:  %s: - outgoingMsg pointer is (%x)
Line 10793:  %s: - Invalid clientId(%d)
Line 10801:  %s: - Pause done can come only from active clients, Invalid event from client clientId(%d) clientState(%d)
Line 10809:  %s: - NULL timeKeeper object
Line 10817:  %s: - resolver object is NULL
Line 10887:  %s: - Process outgoingMsg
Line 10945:  %s: - this pointer is NULL
Line 10950:  %s: - input pointer is NULL
Line 10961:  %s: -Invalid Client
Line 10967:  %s: - Client is Active
Line 10971:  %s: -client(%d) Unregistered
Line 11025:  %s: - this pointer is NULL
Line 11030:  %s: - output pointer is NULL
Line 11035:  %s: - input pointer is NULL
Line 11043:  %s: - Invalid Request Reason (%d)
Line 11050:  %s: - Invalid clientId(%d)
Line 11066:  %s: - NULL timeKeeper object
Line 11087: Reject due to RF hogging prevention in REL_PEND3. ReassignCount = %d
Line 11095:  %s 2G Measurement request in REL_PEND_3 state ResourceRequestRAT(%u),  ActiveRATReason(%u)
Line 11099:  %s Request came from non active cell in Rel_Pend_3, RAT %u, Reason %u)
Line 11139:  %s: - this pointer is NULL
Line 11144:  %s: - input pointer is NULL
Line 11149:  %s: - output pointer is NULL
Line 11164:  %s: - NULL client object
Line 11169:  %s: - Resume ready should come from paused client clientId (%d)
Line 11215:  %s: - this pointer is NULL
Line 11220:  %s: - input pointer is NULL
Line 11228:  %s: - Invalid Request Reason (%d)
Line 11236:  %s: - Invalid clientId(%d)
Line 11244:  %s: - NULL client object
Line 11249:  %s: - outgoingMsg pointer is NULL
Line 11254:  %s: - NULL timeKeeper object
Line 11262:  %s: - resolver object is NULL
Line 11268:  %s: - Release came from idle client, Ignore event
Line 11291:  %s: - Resume ClientId is Invalid, ResCid[%u]
Line 11314:  %s nextEventStartTime [%u] PSProtectionTime[%u]
Line 11322:  %s:[PSPS] CDMA next event is falling in active client protection time Auto pause passed for CDMA = %u
Line 11340:  %s:[PSPS] -Resume sent to Client[%u]. resumeReadyPeriod[%u], Auto Pause Time[%u]
Line 11342:  %s:[PSPS] -Scheduled RAT(%d) Auto pause time[%u] passed to RAT[%u] with ResumeReadyPeriod[%u]
Line 11351:  %s:[PSPS] -Resume sent to Client[%u]. AutoPauseTimer not sent because resume client requestReason is of higherPriority
Line 11357:  %s:[PSPS] -Resume sent to Client[%u]. Time Diff not sufficient to trigger Auto Pause[%u]
Line 11378:  %s:[PSPS] Sending PS PS stop indication to client[%u]
Line 11382:  %s:[PSPS] Invalid [%d]
Line 11385:  %s: Resource release came from paused client, Paused Client Id %d
Line 11418:  %s: - this pointer is NULL
Line 11449:  %s: - this pointer is NULL
Line 11478:  %s: - this pointer is NULL
Line 11517:  %s: - this pointer is NULL
Line 11525:  %s: - NULL client object
Line 11533:  %s: - NULL timeKeeper object
Line 11538:  %s: - outgoingMsg pointer is NULL
Line 11542:  %s: - rsp pointer is NULL
Line 11553:  Mode is not 3G3G ignore further computation
Line 11564:  3G3G Other client PICH RSN not available. Possible Non-IDLE mode or otherClientPICHRSN is in past
Line 11589:  3G3G diffPICH1PCH2 %d is greater than CT hence FCFS Scheme of resolution is best in this case
Line 11617:  3G3G diffPICH1PCH2 %d is lesser than CT hence RoundRobin Scheme of resolution is best in this case
Line 11643:  %s: - this pointer is NULL
Line 11651:  %s: - resolver object is NULL
Line 11674:  %s: - externalUpdation %d lastExternalUpdation %d ret %d isForced%d
Line 11695:  %s: - this pointer is NULL
Line 11703:  %s: - NULL timeKeeper object
Line 11740:  %s: - NULL clientDBObj object
Line 11746:  %s: - NULL intfObj object
Line 11752:  %s: - NULL resourceMgrObj object
Line 11758:  %s: - Invalid Client Id %u
Line 11762:  %s: timer expired - clientId(%d)
Line 11809: %s: Resume Now (%d)
Line 11813: %s: autopauseresume handler expiry with out start or after stop
Line 11836:  %s: - NULL clientDB object
Line 11840:  %s: - NULL resourceMgrObj object
Line 11847:  %s: - NULL timeKeeper object
Line 11855: %s: PausedTimer Expired at currentTime = %u requestReason %u
Line 11856: %s: Active stack Id = %u
Line 11886:  %s: - NULL clientDB object
Line 11891:  %s: - NULL resourceMgrObj object
Line 11898:  %s: - NULL timeKeeper object
Line 11906: %s: PauseDoneTimer Expired at currentTime = %u requestReason %u
Line 11907: %s: Active stack Id = %u
Line 11928:  %s: - this pointer is NULL
Line 11933:  %s: - input pointer is NULL
Line 11937: %s: - Invalid BandInfo(%d)
Line 11942: %s: - Invalid Channel(%d)
Line 11950:  %s: - NULL clientDB object
Line 11956:  %s: - NULL client object
Line 11962:  %s: clientId(%d) isDRImpossible(%d) bandInfo(%d) channelConfigured(%d)
Line 11976:  %s: - this pointer is NULL
Line 11981:  %s: - input pointer is NULL
Line 11989:  %s: - NULL clientDB object
Line 11995:  %s: - NULL client object
Line 12000:  %s: clientId(%d) isDRImpossible(%d)
Line 12028: SA DR state changed from DS to DR, send early pause timer value with (%u) to stop the auto pause
Line 12049:  %s: Send IsConCon Indication to both clients
Line 12114:  %s: Could not find valid Client object
Line 12124:  %s: could not find NR client
Line 12128:  %s: prevEndcVal(%d), current Endc Val(%d), Target NR clientID(%d)
Line 12163:  %s: unexpected case with SA-LTE DR
Line 12170:  %s: # of client is %d, do not send DR report
Line 12179:  %s: Send DR status Indication to client ID(%d) / return(%d) - (0:SA-LTE, 1:LTE->NSA, 2:SA-NSA, 3:single client)
Line 12206:  %s: - NULL ptr detected
Line 12216:  %s: band change detected!! idx[%d] from(%d) to (%d)
Line 12253:  %s: - NULL ptr detected
Line 12258: %s: - Invalid Channel(%d)
Line 12263: %s: - Invalid BandInfo(%d)
Line 12271:  %s: - NULL client object
Line 12293:  %s: clientId(%d) isSADRImpossible(%d) channelConfigured(%d) Is4RxPath(%d) ForceSubSim(%d)
Line 12319:  %s: bandInfo band(%d)/UL(%d), band(%d)/UL(%d), band(%d)/UL(%d), band(%d)/UL(%d)
Line 12325:  %s: bandInfo band(%d)/UL(%d), band(%d)/UL(%d), band(%d)/UL(%d), band(%d)/UL(%d)
Line 12329:  %s: bandInfo band(%d)/UL(%d), band(%d)/UL(%d)
Line 12332:  %s: band changed(%d) tx num(%d)
Line 12380:  %s: - Null pointer detected
Line 12389:  %s: - NULL client object
Line 12394:  %s: clientId(%d) isDRImpossible(%d)
Line 12410:  %s: - NULL clientDB object
Line 12416:  %s: - NULL client object
Line 12447:  %s : Previously paused client update DRDB, this is not yet udpated, Check DR here
Line 12458:  %s:Resume to Paused client cancelled due to SADR disable by paused client DRDB update
Line 12467:  %s:[PSPS] Stop PSPS because SADR Enabled[%u]
Line 12480:  %s: Resume sent to clientId(%d) RAT(%d)
Line 12486:  %s: pausedTimer Stopped
Line 12491:  %s: client(%u) is in state(%u)
Line 12514:  %s: SRL1RC Resource Manager Initialization
Line 12617: autoPauseResumeTimer Creation
Line 12620: autoPauseResumeTimer Creation Failed
Line 12662:  Assert case is occurred %d : file : %s, line : %d
Line 12722:  SRL1RC_Dbg %s: RAT(%u), delta(%u)
Line 12760:  SRL1RC_Dbg %s: RAT(%u), delta(%u)
Line 12773: 3G3G:  RSN is in Past currentRSN= %d RSN = %d
Line 12790: [DebugARFC] srl1rc_CheckValidRatforSignalingAutopause signalingRat(%d) 
Line 12809: 3G3G:  RSN2 is earlier than RSN1 currentRSN= %d RSN1 = %d RSN2 = %d
Line 12814: 3G3G:  RSN1 is earlier than RSN2 currentRSN= %d RSN1 = %d RSN2 = %d
Line 12826: SRL1RC SignallingUsagePlot(%d) 
Line 12829: SRL1RC L1HighUsagePlot(%d) 
Line 12832: SRL1RC PagingUsagePlot(%d) 
Line 12835: SRL1RC SysInfoUsagePlot(%d) 
Line 12838: SRL1RC MeasurementUsagePlot(%d) 
Line 12841: SRL1RC CellSearchUsagePlot(%d) 
Line 12844: SRL1RC PSUsagePlot(%d) 
Line 12847: Default SRL1RC UsagePlot(%d) 
Line 12849: SRL1RC UsagePlot(%d) 
Line 12855:  SRL1RC_Dbg %s:
Line 12950: %s outgoingILMTargetRat %d:
Line 12984: Logging Invalid Message Type
Line 13034:  %s: - NULL timeKeeper object
Line 13066: Assigning Nr as SUB sim To requesting client Nr
Line 13071: Assigning LTE as Main sim
Line 13129:  %s: - NULL timeKeeper object
Line 13137:  %s RF hogging prevention (RelPend1 ResReq): ResReqRAT(%u), ActiveRATReason(%u), isScheduledEvent(%d)
Line 13147:  %s MBMS RF hogging prevention (RelPend1 ResReq by ILM): RAT(%d), reason(%u), randValue(%u)
Line 13152:  %s MBMS RF hogging prevention: No throttling for 2G cell search RAT(%d), reason(%u)
Line 13160:  %s (Skip RelPend1 ResReq by ILM: Random event) MBMS RF hogging prevention: RAT(%d), reason(%u)
Line 13187:  %s Reset high ARFC mode: period(%u)
Line 13195:  %s RF hogging prevention (RelPend1 ResReq by ILM): reason(%u), randValue(%u), TargetPercentage(%u)
Line 13203:  %s (Skip RelPend1 ResReq by ILM: Random event) RF hogging prevention: reason(%u)
Line 13217:  %s (Skip RelPend1 ResReq: Time cause) RF hogging prevention (Autopause): reason(%u), LastTime (%u), CurrentTime (%u)
Line 13257:  %s: - NULL resolver Obj object
Line 13263:  %s: - NULL timeKeeper object
Line 13298:  %s:[PSPS] PSPS Start Ind set to client[%u], resumeReadyPeriod[%u]
Line 13304:  %s nextEventStartTime [%u] PSProtectionTime[%u]
Line 13313:  %s:[PSPS] CDMA next event is falling in active client protection time Auto pause passed for CDMA = %u
Line 13338:  %s:[PSPS] -Auto pause time[%u] passed to Client[%u] with ResumeReadyPeriod[%u]
Line 13343:  %s:[PSPS] -Auto pase time not passed, as request reason[%u] is of higher priority
Line 13349:  %s:[PSPS] -Time Diff not sufficient to trigger Auto Pause[%u]
Line 13354:  %s nextEventStartTime is less than currentTime
Line 13386: %s: Move To PauseDone State
Line 13389:  %s: - NULL timeKeeper object
Line 13396: Scheduled event start time less than 30 ms from release
Line 13399: autoPauseResumeTimer set Failed, Resume Paused Client
Line 13425:  %s: pausedTimer Stopped
Line 13439:  %s: pausedTimer Stopped
Line 13462:  %s:[PSPS] Sending PS PS stop indication to client[%u]
Line 13466:  %s:[PSPS] Invalid [%d]
Line 13475: Scheduled  is at time Diff of[%u], moving to RelPend2_PauseDone
Line 13502:  %s: - Scheduled Meas request received from 3G Client
Line 13507:  %s: - Reject for Unexpected Request received for Non-scheduled event in REL_PEND_1_PAUSE_DONE state
Line 13549:  %s: - NULL timeKeeper object
Line 13572:  %s:[PSPS] CDRX condition not statisfied and CDMA next event is falling in active client protection time Auto pause passed for CDMA = %u
Line 13579: [PSPS] Autopause not triggered due to PausedClient RfUseReason(%d) priority is greater than scheduled  client reason(%d)
Line 13607:  %s: - NULL intfObj object
Line 13614:  %s: - NULL timeKeeper object
Line 13648:  %s GSM RF hogging prevention (ReleaseReq)(Allow 2G Paging) : GSM reason(%u), lastPagingGrantTimeInPauseDone(%u), currentTime(%u), nextEventStartTime(%u)
Line 13661:  %s MBMS RF hogging prevention (ReleaseReq): RAT(%d), reason(%u), randValue(%u)
Line 13666:  %s (Skip ReleaseReq: Random event) MBMS RF hogging prevention: RAT(%d), reason(%u)
Line 13667:  %s Skip TimeUpdate: For RAT(%d)
Line 13681:  %s: - setScheduledEvent Failed
Line 13720:  %s: - NULL timeKeeper object
Line 13728:  %s: - NULL Resolver object
Line 13756:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 13771:  Condition for Calculating Auto Pause not satisfied.
Line 13787:  %s Early pause can be triggered scheduledEventTime %u currentTime %u
Line 13808:  %s Auto pause passed = %u scheduledRat(%d)
Line 13858:  %s: - NULL timeKeeper object
Line 13868:  %s: - NULL Resolver object
Line 13922: setScheduledEvent Failed
Line 13932: setScheduledEvent Failed
Line 13961:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 13976: Condition for calculating auto pause not satisfied
Line 13978: AutoPauseClientId %d
Line 13993:  %s Early pause can be triggered scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 14012:  %s: pausedClientId %d, targetClientId %d
Line 14017:  %s Auto pause passed = %u scheduledRat(%d)
Line 14036: %s: ScheduledEvent Time is less than current Time
Line 14041: %s:  Invalid auto pause client Id %u, auto pause can not be triggered
Line 14070:  %s: - NULL timeKeeper object
Line 14085:  %s MBMS RF hogging prevention (RelPend2 ResReq): RAT(%d), reason(%u), randValue(%u)
Line 14092:  %s (Skip RelPend2 ResReq) MBMS RF hogging prevention: RAT(%d) reason(%u)
Line 14122:  %s RF hogging prevention (RelPend2 ResReq): Target Percentage changed to %d intentionally for scch order missed issue
Line 14130:  %s RF hogging prevention (RelPend2 ResReq): reason(%u), randValue(%u), TargetPercentage(%u)
Line 14138:  %s (Skip RelPend2 ResReq) RF hogging prevention: reason(%u)
Line 14237:  %s: - NULL timeKeeper object
Line 14275:  %s: Condition for Calculating Auto Pause not satisfied
Line 14325:  %s: Condition for passing Auto Pause not satisfied. Req Res(%u), Sch Res(%u)
Line 14331:  %s: No auto pause info passed, autoPauseClintId %u
Line 14352:  %s: - Schedule conflict happens for Req Reason (%d) and Scheduled Reason (%d)
Line 14397:  %s: - NULL timeKeeper object
Line 14404:  %s: - NULL active client object
Line 14426: Assigning MAIN sim status as Active client is holding SUB Sim status
Line 14454:  %s:[PSPS] Stop PSPS because SADR Enabled[%u]
Line 14458:  %s: Giving grant to LTE paging in DR to DS transition phase
Line 14488: 2G Only Mode %d
Line 14492: G2X measurement request in Auto or HEDGE Mode %d
Line 14499:  %s:[PSPS] Pause Req sent to activeClientId[%u], resumeReadyPeriod[%u]
Line 14521: pauseDoneTimer set Failed.
Line 14527: %s: pauseDoneTimer Set. Expiry Time(%u), CurrentTime(%u)
Line 14549:  Reject given to active SUB SIM because of transition to DR not available
Line 14555:  Reject given to Main SIM, Nr is requesting as a main SIM
Line 14582: REJECT in REL_PEND1, DR-DSDS Available because NbrBCH cannot be supported on SUB SIM
Line 14588: REJECT in REL_PEND1, DR-DSDS Available because only paging is allowed with signaling on other stack
Line 14592:  GRANT in REL_PEND1, DR-DSDS Available 
Line 14693:  %s: - NULL timeKeeper object
Line 14770:  %s:[PSPS] Sending PS PS stop indication to client[%u]
Line 14838:  %s Auto pause passed = %u scheduledRat(%d)
Line 14878:  %s: - NULL Resolver object
Line 14886:  %s: - NULL timeKeeper object
Line 14912:  %s:[PSPS] -Scheduled RAT(%d) Auto pause time[%u] passed to RAT[%u] with ResumeReadyPeriod[%u]
Line 14917:  %s:[PSPS] -Rsp sent to Client[%u]. AutoPauseTimer not sent because paused client requestReason is of higherPriority
Line 14923:  %s:[PSPS] -Rsp sent to Client[%u]. Time Diff not sufficient to trigger Auto Pause[%u]
Line 14947:  %s: - NULL client object
Line 14953:  %s: - NULL client object (pausedClientObj)
Line 14960:  %s Request in REL_PEND_2 state when other client's signaling is paused. ResourceRequestRAT(%u),  ActiveRATReason(%u)
Line 14967:  %s 2G Measurement request in REL_PEND_2 state ResourceRequestRAT(%u),  ActiveRATReason(%u)
Line 14977:  %s (RelPend2 ResReq): Grant for measurement just after Idle paging
Line 15041:  Reject due to no Autopause execution in REL_PEND2
Line 15084:  %s: - NULL timeKeeper object
Line 15120: Condition for calculation auto pause does not satisfied
Line 15149:  %s: No auto pause info passed, autoPauseClintId %u
Line 15158:  %s: SADR Active sending Resume to paused RAT[%u]
Line 15203:  %s: - NULL timeKeeper object
Line 15228:  Reject due to no Autopause execution in REL_PEND1
Line 15231:  %s: - Grant to New Client %d resolution %d scheduledResolution %d
Line 15263:  %s: - NULL timeKeeper object
Line 15277: Client (%d) using RF from (%u) 
Line 15288:  %s Reject due to too short RF request from release : reason(%u), LastReleaseTime (%u), CurrentTime (%u) rejectDueToProtection %u
Line 15297:  %s:[PSPS] Reject due to PS Protection. currentTime[%u], PSProtectionTime[%u]
Line 15332:  Grant to LTE paging forcefully in DR to DS transition
