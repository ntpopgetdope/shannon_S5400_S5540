Line 158: [RSM(MSRC)]: all stacks are deregistered to StackClientTable
Line 191: [RSM(MSRC)]: No Running Rsm Stack
Line 222: [RSM(MSRC)]: No Running Rsm Stack
Line 237: [RSM(MSRC)]: (I) RegisterClient RatType[%s] StId[%u]
Line 243: [RSM(MSRC)]: (I)(F) ST[%u] is already registered
Line 278: [RSM(MSRC)]: NR_SASA_MODE:[%u], m_bIsDrEnabled:[%u]
Line 287: [RSM(MSRC)]: (I) DeregisterClient RatType[%s] StId[%u] bIsForBplmn[%u]
Line 293: [RSM(MSRC)]: (I)(F) ST[%u] is already deregistered
Line 349: [RSM(MSRC)]: CheckPagingConflict1
Line 355: [RSM(MSRC)]: CheckPagingConflict2
Line 368: [RSM(MSRC)]: CheckRoundRobin. ReqStack[%u] LastGrantStack[%u]
Line 400: [RSM(MSRC)]: UpdateTime[%s]. RatType[%s]. EventId[%s] StartTime[%u].
Line 441: [RSM(MSRC)]: (I)(F) UpdateSchedInfoTable. Already Deregister.
Line 453: [RSM(MSRC)]: UpdateSchedInfoTable CurTime:%u, Nr:%u, EventId[%s], DrxCycle[%u]
Line 491: [RSM(MSRC)]: CheckStackSwitch[%s]. StId[%u], EventId[%s], OtherStGrant[%s]
Line 497: [RSM(MSRC)]: Already trigger pause/force release. reject.
Line 508: [RSM(MSRC)]: CheckStackSwitch. Other Stack is running. Paging is rejected.
Line 533: [RSM(MSRC)]: Does not pause peer stack with CDRX wakeup reject in LabTestMode.
Line 538: [RSM(MSRC)]: RequestStPriority[%u], RequestEventPriority[%u], OtherStPriority[%u]
Line 563: [RSM(MSRC)]: (f) OtherStGrant[%s] is wrong
Line 589: [RSM(MSRC)]: paging conflict. round robin reject.
Line 608: [RSM(MSRC)]: CheckStackSwitch. Other Stack GrantState[%u]
Line 616: [RSM(MSRC)]: SendPause to StId(%u), HoldCause[%s]
Line 623: [RSM(MSRC)]: SendPause to StId(%u) failed.
Line 630: [RSM(MSRC)]: ReceivePauseAck[%s]. RatType[%s], HoldCause[%s], PauseAckReason[%u]
Line 695: [RSM(MSRC)]: ChangeMainStack [%u] to [%u]
Line 708: [RSM(MSRC)]: ChangeMainStack [%u] to [%u]
Line 739: [RSM(MSRC)]: (I)(F) ERROR
Line 765: [RSM(MSRC)]: SendResume to StId(%u), DrSimInfo[%u], EptTime[%u]
Line 772: [RSM(MSRC)]: SendResume fail. Change Stack grant state to %s
Line 784: [RSM(MSRC)]: Resume fail but RESOURCE_WAIT and %s. force resume done.
Line 790: [RSM(MSRC)]: need to release after resume fail when peer stack is paused.
Line 798: [RSM(MSRC)]: Resume fail, restor ForcedMainStackFlag
Line 808: [RSM(MSRC)]: ReceiveResumeAck[%s]. RatType[%s]
Line 830: [RSM(MSRC)]: need to update reason. priority mismatch!!
Line 841: [RSM(MSRC)]: ChangeMainStack [%u] to [%u]
Line 846: [RSM(MSRC)]: ChangeMainStack [%u] to [%u]
Line 1016: [RSM(MSRC)]: (I) SetDrBandInfo Same band update, Skip updateSADRDb - Rat[%s] IsDrAvailable[%u]
Line 1023: [RSM(MSRC)]: SetDrBandInfo - Rat[%s] DrBandInfo(%u) (%u) (%u) (%u), NumBand[%u], Is4RxPath[%u]
Line 1032: [RSM(MSRC)]: (I) SetDrBandInfo(UpdateReason) - Rat[%s] IsDrAvailable[%u]->[%u]
Line 1038: [RSM(MSRC)]: (I) Forced DR to DS Change for HO
Line 1068: [RSM(MSRC)]: SetDrChannelState - Rat[%s] ChannelState[%u] Is4RxPath[%u]
Line 1073: [RSM(MSRC)]: Channel State not change no need to check Dr State
Line 1084: [RSM(MSRC)]: (I) SetDrChannelState(UpdateReason) - Rat[%s] IsDrAvailable[%u]->[%u]
Line 1111: [RSM(MSRC)]: SetDrImpossible - Rat[%s] DrImpossibe[%u] NeedRejectSelf[%u]
Line 1121: [RSM(MSRC)]: (I) SetDrImpossible(UpdateReason) - Rat[%s] IsDrAvailable[%u]->[%u]
Line 1127: [RSM(MSRC)]: need to reject though DR available is not changed.
Line 1139: [RSM(MSRC)]: (I) InterBandHandOverDone when SRIF mode.
Line 1147: [RSM(MSRC)]: (I) Forced DS for HO is finished
Line 1156: [RSM(MSRC)]: (I) InterBandHandoverDone(UpdateReason) - Rat[%s] IsDrAvailable[%u]->[%u]
Line 1164: [RSM(MSRC)]: Does not support InterBandHandoverDone in non-SA mode.
Line 1225: [RSM(MSRC)]: Data Stack is same as Paging Stack!!!
Line 1235: [RSM(MSRC)]: Arfc Rand Val is %u, lesser than %u. Arfc Reject!!!
Line 1241: [RSM(MSRC)]: Arfc Continuous Reject Cnt[%u] Max Cnt[%u]. Arfc Pass!!!
Line 1249: [RSM(MSRC)]: Arfc Rand Val is %u, larger than %u. Arfc Pass!!!
Line 1256: [RSM(MSRC)]: Arfc is off. clear Arfc reject.
Line 1303: [RSM(MSRC)]: (I) [RSM_RSRC_MEAS] ReceiveGapMeasureUseResp.
Line 1308: [RSM(MSRC)]: (F) not registered StId(%u)
Line 1337: [RSM(MSRC)]: (F) not registered StId(%u)
Line 1362: [RSM(MSRC)]: (F) not registered StId(%u)
Line 1374: [RSM(MSRC)]: ReceiveGapMeasureResume: already get GRANT
Line 1387: [RSM(MSRC)]: ChangeMainStack [%u] to [%u]
Line 1392: [RSM(MSRC)]: ChangeMainStack [%u] to [%u]
Line 1404: [RSM(MSRC)]: ReceiveGapMeasureResume: is not need. Granted[%s].
Line 1421: [RSM(MSRC)]: (I) [RSM_RSRC_MEAS] GapMeasurePauseDone.
Line 1426: [RSM(MSRC)]: (F) not registered StId(%u)
Line 1432: [RSM(MSRC)]: (I)(F) GapMeasurePauseDone. is not GapMeasPause.
Line 1456: [RSM(MSRC)]: BandComb[%u], RatComb[%u], ChannelComb[%u], ImpossibleComb[%u], m_bIsForcedDsForHO[%u], m_bIsDrAvailable[%u]
Line 1515: [RSM(MSRC)]: DrRxModeChangeDone. MsrcOpMode[%s], RatType[%s], RxMode[%u]
Line 1544: [RSM(MSRC)]: RequestResource:RAT(%s), WakeUpReason(%s), Granted(%s), PausePending(%u)
Line 1599: [RSM(MSRC)]: (F) MSRC does not support reject retry
Line 1636: [RSM(MSRC)]: (I)(DR) DrBreakByOneself[%u]. Do Force release. GrantState is changed to RESOURCE_PAUSE_PENDING
Line 1662: [RSM(MSRC)]: (F) not registered StId(%u)
Line 1668: [RSM(MSRC)]: (I) RequestResourceToResourceController[%s]. RatType[%s], EventId[%s]
Line 1733: [RSM(MSRC)]: (I) ReqRat is Gap Paued state. Reject for OtherStack Gap. Grant[%s].
Line 1752: [RSM(MSRC)]: ChangeMainStack [%u] to [%u]
Line 1770: [RSM(MSRC)]: (I) first wakeup after change to DR when sub stack is running!!!!
Line 1786: [RSM(MSRC)]: ChangeMainStack [%u] to [%u]
Line 1801: [RSM(MSRC)]: ChangeMainStack [%u] to [%u]
Line 1813: [RSM(MSRC)]: (chk) OtherStGrant[%s]. need to chk.
Line 1828: [RSM(MSRC)]: (I) RequestResourceToResourceController[%s]. Grant[%s].
Line 1842: [RSM(MSRC)]: (F) not registered StId(%u)
Line 1848: [RSM(MSRC)]: (I) UpdateWakeUpReasonToResourceController[%s]. RatType[%s], EventId[%s], m_ReassignCnt[%u], m_bIsDrAvailableChanged[%u]
Line 1930: [RSM(MSRC)]: Reassign Cnt : [%u]
Line 1954: [RSM(MSRC)]: (I)(DR) DrBreakByOneself[%u]. Do Force release. GrantState is changed to RESOURCE_PAUSE_PENDING
Line 1992: [RSM(MSRC)]: (I)(DR) DrBreakByOneself[%u]. Do Force release. GrantState is changed to RESOURCE_PAUSE_PENDING
Line 2015: [RSM(MSRC)]: (I) UpdateWakeUpReasonToResourceController[%s]. Grant[%s].
Line 2028: [RSM(MSRC)]: (F) not registered StId(%u)
Line 2034: [RSM(MSRC)]: (I) ReleaseResourceToResourceController[%s]. RatType[%s]
Line 2105: [RSM(MSRC)]: ChangeMainStack [%u] to [%u]
Line 2128: [RSM(MSRC)]: (I)(S) ForceReleaseDelayTmr Expired
Line 2144: [RSM(MSRC)]: (I)(S) ForceReleaseDelayUserCb Called
Line 2160: [RSM(MSRC)]: StartForceRelease, RejectSt[%u]
Line 2191: [RSM(MSRC)]: (I) UpdateMsrcOpMode. PrevOpMode[%s], CurOpMode[%s]
Line 2256: [RSM(MSRC)]: MSRC does not reject retry. change to denied.
Line 2281: [RSM(MSRC)]: Skip RequestResource
Line 2315: [RSM(MSRC)]: ActiveStack[%u] IsHoldDelayRunning[%u] Grant State [%s]
Line 2331: [RSM(MSRC)]: ActiveStack[%u] is held by MSD. Do not resume.
Line 2376: [RSM(MSRC)]: =============== St1 Band Info ===============
Line 2379: [RSM(MSRC)]: [%u] [%u] [%u] [%u] [%u]
Line 2382: [RSM(MSRC)]: [%u] [%u] [%u] [%u] [%u]
Line 2402: [RSM(MSRC)]: =============== St2 Band Info ===============
Line 2405: [RSM(MSRC)]: [%u] [%u] [%u] [%u] [%u]
Line 2408: [RSM(MSRC)]: [%u] [%u] [%u] [%u] [%u]
Line 2416: [RSM(MSRC)]: RF_Get_SASA_DRDS_Support Result: %u
Line 2432: [RSM(MSRC)]: DrdsSupportMode[%u], St1Channel[%u], St2Channel[%u] (0:Null,1:Idle,2:Conn)
Line 2475: [RSM(MSRC)]: IsImpossibleCombinationAllowed.ST1[%u/%u] ST2[%u/%u] Impossible/DrPossible
Line 2515: [RSM(MSRC)]: PspsMode Enabled.
Line 2520: [RSM(MSRC)]: PspsMode Disabled.
Line 2526: [RSM(MSRC)]: LabTest mode is enabled. PspsMode Disabled.
Line 2538: [RSM(MSRC)]: GetEarlyPauseTime. MsrcOpMode[%s], bIsPspsMode[%u], ArfcReject[%u], bIsStartEarlyPause[%u]
Line 2602: [RSM(MSRC)]: RequestStGrant[%s] not need start early pause timer
Line 2715: [RSM(MSRC)]: UpdateNrNrMode. St1 Active[%u] OpMode[%u] St2 Active[%u] OpMode[%u] NrNrMode[%u]
Line 2720: [RSM(MSRC)]: ================================================
Line 2732: [RSM(MSRC)]: StId[%u], GrantState[%s], Priority[%u], DrSimInfo[%u], bIsConn[%s], DrxCycleLen[%u], Reason[%s]
Line 2735: [RSM(MSRC)]: ================================================
Line 2740: [RSM(MSRC)]: ================================================
Line 2749: [RSM(MSRC)]: StId[%u], Start[%u], Duration[%u], Reason[%s]
Line 2752: [RSM(MSRC)]: ================================================
Line 78: [RSM(MSRC)]: (f) need to check why called by RSM_LTE_1
Line 83: [RSM(MSRC)]: (f) need to check why called by RSM_LTE_2
