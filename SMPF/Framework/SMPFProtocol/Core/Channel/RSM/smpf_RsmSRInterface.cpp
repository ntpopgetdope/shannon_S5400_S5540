Line 87: [RSM(SRIF)] : RegisterClient, ID:%d, RegisteredRat:%u, RegiRatType:%u, Already done!!
Line 93: [RSM(SRIF)] : RegisterClient, ID:%d, RegisteredRat:%u, RegiRatType:%u, OtherRat is registered!!
Line 108: [RSM(SRIF)] : RegisterClient, wrong RatType[%u]
Line 117: [RSM(SRIF)] : (F) ERROR: Register Client Fail
Line 126: [RSM(SRIF)] : (I) RegisterClient, ID:%d
Line 141: [RSM(SRIF)] : (F) ERROR: DeRegisterClient, Already done!!
Line 147: [RSM(SRIF)] : DeRegisterClient RatType:%s
Line 161: [RSM(SRIF)] : (I) DeRegisterClient ID:%d
Line 189: [RSM(SRIF)] : DeRegisterClient after RegisterRetryTmr
Line 196: [RSM(SRIF)] : (F) ERROR: DeRegisterClient deregi fail!!
Line 205: [RSM(SRIF)] : (I)(F) GrantDataUpdate. Already Deregister
Line 229: [RSM(SRIF)] : GrantDataUpdate. Response[%u] startEarlyPauseTimer[%u] Duration[%u] Ppsps[%u] ResumeReadyDuration[%u]
Line 259: [RSM(SRIF)] : (I)(DR) SimInfo(%u), PagingConflict(%u), FakeWakeupMode(%u), FakePeerStackNextWakeupTime(%u)
Line 320: [RSM(SRIF)] : (I)(F) RequestResourceToResourceController. Already Deregister.
Line 334: [RSM(SRIF)] : (F) Null Reason is not supported. return RESOURCE_DENIED
Line 340: [RSM(SRIF)] : (F) client is not registered. return RESOURCE_DENIED
Line 400: [RSM(SRIF)] : Update the reason in PSPS Reject retry.
Line 407: [RSM(SRIF)] : (I) RequestResourceToSRL1RC wait[%d], Rat[%s], Event[%s]
Line 429: [RSM(SRIF)] : (I) RequestResource. Rat[%s] Response[%u] Reason[%u] Cause[%u]
Line 449: [RSM(SRIF)] : (I) RequestResourceToSRL1RC. Rat[%s], Event[%s]
Line 462: [RSM(SRIF)] : (I)(F) UpdateWakeUpReasonToResourceController. Already Deregister
Line 513: [RSM(SRIF)] : (F) client is not registered. do not anything in ReleaseResource
Line 531: [RSM(SRIF)] : (I)(S) ReleaseResourceToSRL1RC
Line 566: [RSM(SRIF)] : (S)ReleaseResourceToSRL1RC: (NO GRANT, %s)
Line 591: [RSM(SRIF)] : UpdateReason Request. Granted:(%s,%s), RatType:%s, WakeUpReason:%s
Line 595: [RSM(SRIF)] : (I)(F) UpdateReason. Already Deregister.
Line 630: [RSM(SRIF)] : (I) [RSM_RSRC_MEAS] UpdateReason during GapMeasurePause, DrBreakByOneself[%u]
Line 648: [RSM(SRIF)] : (I)(DR) DrBreakByOneself[%u]. Do Force release. GrantState is changed to RESOURCE_PAUSE_PENDING
Line 663: [RSM(SRIF)] : no has grant. update is skip.
Line 675: [RSM(SRIF)] : (I)(F) ForceRelease. Already Deregister.
Line 690: [RSM(SRIF)] : (I) Force release mode. force pause pending mode.
Line 695: [RSM(SRIF)] : (I) Force release fail. force granted mode.
Line 716: [RSM(SRIF)] : (I)(S) ReceiveUseRespFromSRL1RC[%s]
Line 720: [RSM(SRIF)] : (I)(F) ReceiveUseResp. Already Deregister.
Line 732: [RSM(SRIF)] : ReceiveResumeFromSRL1RC: already get GRANT
Line 765: [RSM(SRIF)] : (F) need to check Granted[%s].
Line 772: [RSM(SRIF)] : (I)(S) ReceivePauseFromSRL1RC
Line 776: [RSM(SRIF)] : (I)(F) ReceivePause. Already Deregister.
Line 802: [RSM(SRIF)] : (I)(S) ReceiveResumeFromSRL1RC Granted[%s]
Line 806: [RSM(SRIF)] : (I)(F) ReceiveResume. Already Deregister.
Line 818: [RSM(SRIF)] : ReceiveResumeFromSRL1RC: already get GRANT
Line 834: [RSM(SRIF)] : (S)(DP) bIsPsPsConnected(%u), OtherDutyCycle(%u)
Line 861: [RSM(SRIF)] : (F) need to check Granted[%s].
Line 868: [RSM(SRIF)] : (I)(S) ReceiveEarlyPauseTimerStartFromSRL1RC
Line 872: [RSM(SRIF)] : (I)(F) ReceiverEarlyPause. Already Deregister.
Line 914: [RSM(SRIF)] : ReceiveEarlyPauseTimerStartFromSRL1RC didn't get grant[%s]
Line 921: [RSM(SRIF)] : (S)(DP) ReceivePspsStatusIndFromSRL1RC, IsPsPsEnabled(%s), ResumeReadyPeriod(%u)
Line 925: [RSM(SRIF)] : (I)(F) ReceivePspsStatusInd. Already Deregister.
Line 949: [RSM(SRIF)] : IsPeerStackPsCall Result[%u]
Line 961: [RSM(SRIF)] : IsPeerStackHedge[%u]
Line 968: [RSM(SRIF)] : GetDrSimInfo - this[0x%x] Rat[%s] SimInfo[%u](0:none, 1:main, 2:sub)
Line 974: [RSM(SRIF)] : SetDrSimInfo - SimInfo[%u]
Line 1011: [RSM(SRIF)] : SetDrBandInfo - Rat[%s] DrBandInfo(%u) (%u) (%u) (%u), NumBand[%u], Is4RxPath[%u]
Line 1016: [RSM(SRIF)] : (I) SetDrBandInfo Same band update, Skip updateSADRDb - Rat[%s] IsDrAvailable[%u]
Line 1066: [RSM(SRIF)] : (I) SetDrBandInfo(updateSADRDb) - Rat[%s] DrImpossible[%u] DrChannelState[%u] MraDrPossible[%u]
Line 1073: [RSM(SRIF)] : (I) SetDrBandInfo(UpdateReason) - Rat[%s] IsDrAvailable[%u]->[%u]
Line 1096: [RSM(SRIF)] : SetDrChannelState - Rat[%s] ChannelState[%u] Is4RxPath[%u]
Line 1125: [RSM(SRIF)] : (I) SetDrChannelState(updateSADRDb) - Rat[%s] DrImpossible[%u] DrChannelState[%u] MraDrPossible[%u]
Line 1131: [RSM(SRIF)] : (I) SetDrChannelState(UpdateReason) - Rat[%s] IsDrAvailable[%u]->[%u]
Line 1145: [RSM(SRIF)] : SetDrImpossible - Rat[%s] DrImpossibe[%u] NeedRejectSelf[%u]
Line 1174: [RSM(SRIF)] : (I) SetDrChannelState(updateSADRDb) - Rat[%s] DrImpossible[%u] DrChannelState[%u] MraDrPossible[%u]
Line 1180: [RSM(SRIF)] : (I) SetDrChannelState(UpdateReason) - Rat[%s] IsDrAvailable[%u]->[%u]
Line 1193: [RSM(SRIF)] : (I)(DR) Do Force release. GrantState is changed to RESOURCE_PAUSE_PENDING
Line 1203: [RSM(SRIF)] : SetDrInfo - ChannelState[%u], DrBandInfo(%u) (%u), NumBand[%u], Is4RxPath[%u], bForceSubSim[%u]
Line 1240: [RSM(SRIF)] : (I) SetDrInfo(UpdateReason) - Rat[%s] IsDrAvailable[%u]->[%u]
Line 1267: [RSM(SRIF)] : SetDrTxNumber - Rat[%s] TxNum[%u]
Line 1311: [RSM(SRIF)] : GetIsDrAvailable - Rat[%s] IsDrAvailable[%u]
Line 1365: [RSM(SRIF)] : (I) ReleaseTxResourceToSRL1RC. Rat[%s], ResourceId[%u]
Line 1369: [RSM(SRIF)] : (I)(F) ReleaseTxResourceToSRL1RC. Already Deregister.
Line 1396: [RSM(SRIF)] : (I) CommonResourceChangeDoneToSRL1RC. Rat[%s], ResourceId[%u], IsTxChangeRequest[%u]
Line 1400: [RSM(SRIF)] : (I)(F) CommonResourceChangeDone. Already Deregister.
Line 1428: [RSM(SRIF)] : (I) CommonResourceChangeDoneToSRL1RC. Rat[%s], TX_MODE Changedone
Line 1437: [RSM(SRIF)] : (I) MoveCommonResourceToCrm. Rat[%s] SRL1RC tx release, move to CRM
Line 1449: [RSM(SRIF)] : (I)(F) RequestCommonResource. Already Deregister.
Line 1507: [RSM(SRIF)] : (I) RequestCommonResourceToSRL1RC. Rat[%s], ResourceId[%u], ResourceType[%u], txRequestResponse[%u], ResultResponse[%u], AssignedPath[0x%x]
Line 1520: [RSM(SRIF)] : (I)(F) ReceiveTxUseResp. Already Deregister.
Line 1539: [RSM(SRIF)] : (F) ERROR: TxUseResp Fail
Line 1554: [RSM(SRIF)] : (I) ReceiveTxUseRespFromSRL1RC. Rat[%s], txRequestResponse[%u], ResultResponse[%u], AssignedPath[0x%x]
Line 1566: [RSM(SRIF)] : (I)(F) ReceiveTxChange. Already Deregister.
Line 1584: [RSM(SRIF)] : (I) ReceiveTxChangeFromSRL1RC. Rat[%s], TX is already released
Line 1589: [RSM(SRIF)] : (I) ReceiveTxChangeFromSRL1RC. Rat[%s], PrevResponse[%u], ReqResponse[%u], AssignedPath[0x%x]
Line 1601: [RSM(SRIF)] : (I)(F) PathSwitchCheck. Already Deregister.
Line 1610: [RSM(SRIF)] : PathSwitchCheck. PathSwitchAvailable[%u]
Line 1616: [RSM(SRIF)] : PathSwitchDone.
Line 1619: [RSM(SRIF)] : (I)(F) PathSwitchDone. Already Deregister.
Line 1632: [RSM(SRIF)] : TxResourceConfirm.
Line 1635: [RSM(SRIF)] : (I)(F) TxResourceConfirm. Already Deregister.
Line 1646: [RSM(SRIF)] : (I) [RSM_RSRC_MEAS] ReceiveGapMeasureUseRespFromSRL1RC.
Line 1650: [RSM(SRIF)] : (I)(F) ReceiveGapMeasureUseResp. Already Deregister.
Line 1676: [RSM(SRIF)] : (I) [RSM_RSRC_MEAS] ReceiveGapMeasurePauseFromSRL1RC.
Line 1679: [RSM(SRIF)] : (I) [RSM_RSRC_MEAS] Granted[%s] ignore GapMeasurePause
Line 1687: [RSM(SRIF)] : (I)(F) ReceiveGapMeasurePause. Already Deregister.
Line 1705: [RSM(SRIF)] : (I) [RSM_RSRC_MEAS] ReceiveGapMeasureResumeFromSRL1RC.
Line 1709: [RSM(SRIF)] : (I)(F) ReceiveGapMeasureResume. Already Deregister.
Line 1721: [RSM(SRIF)] : ReceiveGapMeasureResumeFromSRL1RC: already get GRANT
Line 1733: [RSM(SRIF)] : (F) need to check Granted[%s].
Line 1740: [RSM(SRIF)] : (I) [RSM_RSRC_MEAS] GapMeasurePauseDoneToSRL1RC.
Line 1744: [RSM(SRIF)] : (I)(F) GapMeasurePauseDone. Already Deregister.
Line 1750: [RSM(SRIF)] : (I)(F) GapMeasurePauseDone. is not GapMeasPause.
Line 1785: [RSM(SRIF)] : (I)(F) PauseDone. Already Deregister.
Line 1800: [RSM(SRIF)] : CurTime:%u,SRL1RCPauseTime:%u
Line 1814: [RSM(SRIF)] : StartPauseTmr CurTime:%u, DurationUs:%u
Line 1820: [RSM(SRIF)] : (I)(S) SRL1RC Pause Timer is not created.
Line 1860: [RSM(SRIF)] : (S)(DP)(F) Other Duty Cycle is zero. resume ready timer starts with default duration
Line 1877: [RSM(SRIF)] : (I)(F) ReceivePauseAck. Already Deregister.
Line 1921: [RSM(SRIF)] : no operate. no need to receive pause ack[%s]
Line 1929: [RSM(SRIF)] : (I)(F) ReceiveResumeAck. Already Deregister.
Line 1957: [RSM(SRIF)] : (I)(F) ResumeReady. Already Deregister.
Line 1961: [RSM(SRIF)] : ResumeReady m_GrantState[%s]
Line 1989: [RSM(SRIF)] : (I) Resume now.
Line 2011: [RSM(SRIF)] : (DP) retry ResumeReady, Other RAT Duty Cycle is %u
Line 2017: [RSM(SRIF)] : ResumeReady can not resume now
Line 2027: [RSM(SRIF)] : (I)(F) UpdateTime. Already Deregister.
Line 2070: [RSM(SRIF)] : (I)(F) UpdateTime. Already Deregister.
Line 2103: [RSM(SRIF)] : (I)(F) SetNextEvent. Already Deregister.
Line 2128: [RSM(SRIF)] : (I)(S) SRL1RCTmrCb Expired
Line 2140: [RSM(SRIF)] : (I)(S) RegisterRetryTmrCb Expired
Line 2148: [RSM(SRIF)] : (I)(S) ResumeReadyTmrCb Expired
Line 2156: [RSM(SRIF)] : (I)(S) ForceReleaseDelayTmr Expired
Line 2162: [RSM(SRIF)] : (I)(S) ForceReleaseDelayUserCb Called
Line 2184: [RSM(SRIF)] : StartResumeReadyTmr CurTime:%u, DurationUs:%u
Line 2206: [RSM(SRIF)] : StartRegisterRetryTmr: Register Client Fail
Line 2215: [RSM(SRIF)] : StopRegisterRetryTmr
Line 2271: [RSM(SRIF)] : m_SasaDrdsSupportMode[%u]
Line 2278: [RSM(SRIF)] : DecideStRxMode[%u], MainSt[%u]:%u, SubSt[%u]:%u
Line 2304: [RSM(SRIF)] : (F) does not support CONN-CONN
Line 2328: [RSM(SRIF)] : St1 DrChannel[%u], St2 DrChannel[%u]
Line 2370: [RSM(SRIF)] : (I)(F) FindNextEvent. Already Deregister.
Line 2386: [RSM(SRIF)] : SetNextEvent CurTime:%u, Nr:%u
