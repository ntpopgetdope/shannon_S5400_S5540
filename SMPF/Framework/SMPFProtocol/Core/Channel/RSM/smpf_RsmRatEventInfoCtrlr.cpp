Line 212: [RSM(REIC),%s] : Dereg for BPLMN
Line 233: [RSM(REIC),%s] : SetIsInitRach. Prev[%u] In[%u]
Line 277: [RSM(REIC),%s] : CheckResourceSched. PeerStackHandOver. EventId[%s:%s]. Result[%s]
Line 318: [RSM(REIC),%s] : (I) IsDrImpossible[%u], Pending RSM_PS_DATA
Line 324: [RSM(REIC),%s] : (I) Change exception RSM_TRIGGER_HOLD to RSM_STOP for FeDV
Line 331: [RSM(REIC),%s] : CheckResourceSched[%s]. ModemState[%s], Result[%s]
Line 425: [RSM(REIC),%s] : REIC ===> L1C, Request %s: %s 
Line 467: [RSM(REIC),%s] : EndOfWaiting. m_EsitPending[%u], m_ModemPending[%u]
Line 545: [RSM(REIC),%s] : (F) Error !!!!!SendExeptionCauseToCtrler ID:%u, result:%u !!!!!!
Line 671: [RSM(REIC),%s] : no restore HoldCauseDuringDelay. this reic is not TriggerMsdHold
Line 743: [RSM(ESIC),%s] : no running hold/trigger hold and rat state is not %s.
Line 778: [RSM(REIC),%s] : Invalid State Transition from %s -> %s
Line 783: [RSM(REIC),%s] : SetModemState(%s(%d), %s): %s -> %s(%d)
Line 967: [RSM(REIC),%s] : (I) Send exception RSM_STOP to trigger hold event for FeDV
Line 1007: [RSM(REIC),%s] : Hold is triggered between BPLMN resume-start or available time expire-suspend
Line 1015: [RSM(REIC),%s] : ForceRelease Fail. Resume Trigger Hold Event.
Line 1037: [RSM(REIC),%s] : (I) Change exception RSM_RUNNING_HOLD to RSM_STOP for FeDV
Line 1087: [RSM(REIC),%s] : CheckHoldDelay Paging[%s], DrImp[%u], InitRach[%u], SleepConfig[%u], DrBreak[%u]
Line 1116: [RSM(REIC),%s] : CancelEarlyPause AUTO_PAUSE_SKIP
Line 1123: [RSM(REIC),%s] : EarlyPause will be cleared after EarlyPauseTimeExpiry
Line 1154: [RSM(REIC),%s] : Already started Hold Procedure. HoldCause:%s
Line 1160: [RSM(REIC),%s] : Skip Hold delay. HoldCause:%s
Line 1164: [RSM(REIC),%s] : Start HoldDelayTimerStart(20ms). HoldCause:%s
Line 1172: [RSM(REIC),%s] : Already started Hold Delay timer. HoldCause:%s
Line 1185: [RSM(REIC),%s] : Stop HoldDelayTimer Rat
Line 1190: [RSM(REIC),%s] : Already stopped Hold Delay timer Rat
Line 1198: [RSM(REIC),%s] : Stop HoldDelayTimer Rat
Line 1202: [RSM(REIC),%s] : ResumeTriggerHoldEvent during HoldDelay HoldCause:%s
Line 1207: [RSM(REIC),%s] : ResumeTriggerHoldEvent during HoldDelay HoldCause:%s
Line 1214: [RSM(REIC),%s] : HoldDelayStop. HoldCause is differ. m_HoldCauseDuringDelay:%s, HoldCause:%s
Line 1218: [RSM(REIC),%s] : Already stopped Hold Delay timer Rat
Line 1224: [RSM(REIC),%s] : Stop HoldDelayTimer Rat
Line 1240: [RSM(REIC),%s] : Start EsicEmptyEventGuardTimer
Line 1245: [RSM(REIC),%s] : Already started Esic Empty Event Guard timer
Line 1256: [RSM(REIC),%s] : Stop EsicEmptyEventGuardTimer
Line 1270: [RSM(REIC),%s] : Start ModemStateWatchDogTimer. ModemState[%s] Duration[%ums]
Line 1279: [RSM(REIC),%s] : Stop ModemStateWatchDogTimer. ModemState[%s] UsedTime[%ums] RemainTime[%ums]
Line 1304: [RSM(REIC),%s] : RequestRatResume. ModemState[%s]
Line 1312: [RSM(REIC),%s] : (F) Any RunningHold event exist in MODEM_ACTIVE
Line 1374: [RSM(REIC),%s] : ModemState[%s] can not resume RAT
Line 1422: [RSM(REIC),%s] : skip SetIsPauseDoneWithRelease. already this reic is TriggerMsdHold
Line 1526: [RSM(REIC),%s] : reic UpdateDrDbInfo - Channel[%u], Band(%u) (%u) (%u) (%u)
Line 1543: [RSM(REIC),%s] : reic SetDrBandInfo - Band(%u) (%u) (%u) (%u)
Line 1549: [RSM(REIC),%s] : UpdateDrChannelState Prev Channel[%u]  ChannelState[%u] IsManualConnForSignaling[%u] isChannelStateChanged[%u]
Line 1554: [RSM(REIC),%s] : Channel Changed Prev Channel[%u]  ChannelState[%u] IsManualConnForSignaling[%u]
Line 1558: [RSM(REIC),%s] : Channel not Changed Prev Channel[%u]  ChannelState[%u] IsManualConnForSignaling[%u]
Line 1561: [RSM(REIC),%s] : reic SetDrChannelState - Channel[%u], ManualConnFlag[%x]
Line 1591: [RSM(REIC),%s] : SetDrImpossible[in:%s,Cur:%u], bIsNeedRejct[%s]
Line 1615: [RSM(REIC),%s] : SetManualConnForSignaling prev_IsManualConnForSignaling[%u], curr_IsManualConnForSignaling[%u]
Line 1633: [RSM(REIC),%s] : ClearManualConnForSignaling prev_IsManualConnForSignaling[%u], curr_IsManualConnForSignaling[%u]
Line 1696: [RSM(REIC),%s] : skip CancelMsdHold. this reic is not TriggerMsdHold
Line 1729: [RSM(REIC),%s] : (I) HoldDelayCbFunc[%s] is called by timer.
Line 1738: [RSM(REIC),%s] : (I) EsicEmptyEventGuardCbFunc is called by timer. Prev Highest Event ID:%s, RatState:%s
Line 1751: [RSM(REIC),%s] : %s L1 %s is not finished for %ums
