Line 143: [rrc_RepEvent1b_init] ERROR - unable to create periodical Timer
Line 171: [rrc_RepEvent1b_free] ERROR - unable to delete periodical Timer
Line 386: Block MR during RBS/RBR/TCR/PCR etc
Line 390: In Out-of-sync, Ignore E1B Periodic Report
Line 395: [rrc_RepEvent1b_CallbackPeriodicTimerExpired] ERROR - unable to start Timer
Line 399: PeriodicalReportTimer started (TmId=%d)
Line 436: ActiveSetCellsCount <= 1. Hold Periodic Report
Line 467: [rrc_RepEvent1b_CallbackPeriodicTimerExpired] ERROR - unable to start Timer
Line 471: PeriodicalReportTimer started (TmId=%d)
Line 495: Not able to stop Periodical Timer
Line 736: [rrc_RepEvent1b_StopReport] [NON FATAL ERROR] Not able to stop Periodical Timer
Line 754: RepEvent1b_p->common.TriggerVarInstId is NULL in rrc_RepEvent1b_StopReport
Line 759: [rrc_RepEvent1b_StopReport] INFO
Line 776: [rrc_RepEvent1b_SuspendReport] INFO
Line 793: [E1B TTTExpired] INFO
Line 804: Re-EvaluateE1B(IsStillGood %d)
Line 814: [E1B] blocked due to HsdschServingCell(%d)
Line 1098: [Event 1B] ASET (NumASET %d vs Threshold %d), E1fConfigured %d
Line 1102: [Event 1B] Total EcNo ( >= -13dB)
Line 1109: [Event 1B] TTT extension (PSC %d, %d ms): NumASET %d ( < Max. ASET %d)
Line 1113: [Event 1B] ASET full, TTT Count %d
Line 1121: [Event 1B] TTT extension (PSC %d, %d ms): TTT count %d ( > 0) 
Line 1131: [Event 1B] TTT extension (PSC %d, %d ms): TTT count %d ( > 0) 
Line 1199: It's already in the CellRecentlyTriggered List
Line 1760: [rrc_RepEvent1b_TriggerAllOtherQty] ERROR Not able to get InterFRepInstId 
Line 1776: [rrc_RepEvent1b_TriggerAllOtherQty] localThreshold(%d), E1A DeactThreshold(%d)
Line 1798: [rrc_RepEvent1b_TriggerAllOtherQty] ERROR PhyMeasInstId = NULL
Line 1807: [rrc_RepEvent1b_TriggerAllOtherQty] MID(%d) is InterFreq Measurement. NumOfFreq(%d)
Line 2083: [rrc_RepEvent1b_TriggerPathloss] ERROR PhyMeasInstId = NULL
Line 2169: [rrc_RepEvent1c_TriggerPathloss] ERROR Not able to get InterFRepInstId 
Line 2212: Ignore CIO (PSC %d, CIO %d)
Line 2227: [rrc_RepEvent1b_TriggerPathloss][VAS] Eq1 satisfied ; MID %i; Cpich %i; Uarfcn %i; lhsdB*1000(%i) >= rhsPathlossdB*1000(%i)
Line 2232: [rrc_RepEvent1b_TriggerPathloss] Eq1 satisfied; PSC %i; lhsdB(%i) >= rhsPathlossdB(%i)
Line 2240: [rrc_RepEvent1b_TriggerPathloss] Eq3 satisfied; PSC %i; lhsdB(%i) < rhsdB(%i)
Line 2311: rrc_RepEvent1b_TriggerPathloss-TriggeringConditionedMeasResults is NULL
Line 2630: ERROR TriggeringCondition1 out of range [%i]
Line 2690: [E1B]: PSC %d : Det Set -> Mon Set: TTT Retained
Line 2699: ERROR TriggeringCondition1 out of range [%i]
Line 3013: [ReEvaluateMRPathloss] Act+Mon(%d) has exceeded the Maximum(32)
Line 3020: [ReEvaluateMRPathloss] Dset(%d) has exceeded the Max(%d)
Line 222: [rrc_RepEvent1b::SendMeasReport] ERROR MeasInstId = NULL
Line 237: Alloc Failed!!
Line 257: Ignore CIO (PSC %d, CIO %d)
Line 278: [rrc_RepEvent1b::SendMeasReport] Set EventResult for Cpich %i
Line 295: Ignore CIO (PSC %d, CIO %d)
Line 307: [rrc_RepEvent1b::SendMeasReport] ERROR MeasQuantity = NULL
Line 319: SendMeasReport: NumCellsToAdd(%d) out of range
Line 345: [rrc_RepEvent1b::SendMeasReport] [ET Periodic] Set EventResult for Cpich %i
Line 688: [rrc_RepEvent1b::EvaluateReportingDeactivationsThreshold] Warning - Remove the best powered PSC%d from MR(e1b) to prevent #AsetCell:0
Line 698: [rrc_RepEvent1b::EvaluateReportingDeactivationsThreshold] ERROR - unable to start Timer
Line 890: rrc_RepEvent1b_TriggerAllOtherQty-MeasResults is NULL
Line 923: [rrc_RepEvent1b_TriggerAllOtherQty] ERROR Not able to get InterFRepInstId 
Line 944: [rrc_RepEvent1b_TriggerAllOtherQty] Act+Mon(%d) has exceeded the Maximum(32)
Line 953: [rrc_RepEvent1b_TriggerAllOtherQty] DetectedSet(%d) has exceeded the Maximum(%d)
Line 1376: rrc_RepEvent1b_TriggerAllOtherQty-TriggeringConditionedMeasResults is NULL
Line 1403: [rrc_RepEvent1b_TriggerAllOtherQty] ERROR Not able to get InterFRepInstId 
Line 1449: [rrc_RepEvent1b_TriggerAllOtherQty] Aset is full. Bound RHS_trig*100(%i) and RHS_leav*100(%i)
Line 1483: [rrc_RepEvent1b_TriggerAllOtherQty][VAS] Eq2 satisfied - Triggering. MID %i; Cpich %i; Uarfcn %i; lhsdB*1000(%i) <= rhsdB*1000(%i)
Line 1488: [rrc_RepEvent1b_TriggerAllOtherQty] Eq2 satisfied; PSC %i; lhsdB(%i) <= rhsdB(%i)
Line 1493: [rrc_RepEvent1b_TriggerAllOtherQty] AsetInfo(#:1, PSC:%d), TriggeredPSC:%d -> ignored
Line 1510: [rrc_RepEvent1b_TriggerAllOtherQty] Eq4 satisfied; PSC %i; lhsdB(%i) > rhsdB(%i)
Line 1517: [Event 1B] ASET (NumASET %d vs Threshold %d), E1fConfigured %d
Line 1526: [Event 1B] Total EcNo ( > -13dB)
Line 1530: [Event 1B] ASET full, TTT Count %d
Line 1557: [rrc_RepEvent1b_TriggerAllOtherQty] NumActiveRl(%d). Stop TTT
Line 1563: [rrc_RepEvent1b_TriggerAllOtherQty] NumActiveRl(%d). Update TTT List
Line 1661: [rrc_RepEvent1b_TriggerAllOtherQty] ERROR Not able to get InterFRepInstId 
Line 1677: [rrc_RepEvent1b_TriggerAllOtherQty] localThreshold(%d), E1A DeactThreshold(%d)
Line 1309: [rrc_RepEvent1b_TriggerAllOtherQty] Evaluating E1B for MID(%d) PSC(%d) Ec/N0(%d) CIO(%d)
Line 1320: [rrc_RepEvent1b_TriggerAllOtherQty] Evaluating E1B for MID(%d) PSC(%d) RSCP(%d) CIO(%d)
Line 1894: rrc_RepEvent1b_TriggerPathloss-MeasResults is NULL
Line 1920: [rrc_RepEvent1c_TriggerPathloss] ERROR Not able to get InterFRepInstId 
Line 1940: [rrc_RepEvent1b_TriggerPathloss] Act+Mon(%d) has exceeded the Maximum(32)
Line 1949: [rrc_RepEvent1b_TriggerPathloss] DetectedSet(%d) has exceeded the Maximum(%d)
Line 571: [GetTriggeringConditionedMeasResults] #MsetCells(%i)>32, bound to %i
Line 599: [GetTriggeringConditionedMeasResults] Copy MsetCells which were in RR: PSC(%d)
Line 622: [GetTriggeringConditionedMeasResults] #A+MsetCells(%i)>32, bound to %i
Line 628: [rrc_RepEvent1b::GetTriggeringConditionedMeasResults] ERROR - TriggeringCondition1 out of range [%i].
Line 2358: [CheckSentReports] [NON FATAL ERROR] Not able to stop Periodical Timer
Line 2463: INVALID NewActiveSetCpichCount 
Line 2516: [rrc_RepEvent1b_UpdateTriggeredList] ERROR TriggeringCondition1 out of range [%i].
Line 3291: [ReEvaluateMR] ERROR MeasInstId = NULL
Line 3309: [ReEvaluateMR] Wrong MeasQuantity
Line 2759: [ReEvaluateMRAllOtherQty] AccumulatingReportInd is NULL
Line 2766: Null ReEvalResults
Line 2794: [ReEvaluateMRAllOtherQty] CandiCell is already removed from ActSet (%d)
Line 2833: [ReEvaluateMRAllOtherQty] MeasResults is NULL!
Line 2902: >>> WARNING: Na is 0
Line 2952: Ignore CIO (PSC %d, CIO %d)
Line 2966: [ReEvaluateMRAllOtherQty] Evaluating E1B for MID(%d) PSC(%d) Ec/N0(%d) CIO(%d)
Line 2978: [ReEvaluateMRAllOtherQty] Evaluating E1B for MID(%d) PSC(%d) Ec/N0(%d) CIO(%d)
Line 2984: [ReEvaluateMRAllOtherQty] GoodToSend (PSC %d)
Line 2989: [ReEvaluateMRAllOtherQty] No GoodToSend (PSC %d)
Line 3057: [ReEvaluateMRPathloss] AccumulatingReportInd is NULL
Line 3064: Null ReEvalResults
Line 3092: [ReEvaluateMRPathloss] CandiCell is already removed ActSet (%d)
Line 3106: [ReEvaluateMRAllOtherQty] MeasResults is NULL!
Line 3124: [ReEvaluateMRPathloss] Act+Mon(%d) has exceeded the Maximum(32)
Line 3131: [ReEvaluateMRPathloss] Dset(%d) has exceeded the Max(%d)
Line 3249: Ignore CIO (PSC %d, CIO %d)
Line 3262: [ReEvaluateMRPathloss] GoodToSend (PSC %d)
Line 3267: [ReEvaluateMRPathloss] No GoodToSend (PSC %d)
Line 3273: >>> WARNING: Na is 0
Line 3349: ERROR Not able to get InterFRepInstId 
Line 3391: ERROR Not able to get InterFRepInstId 
Line 3408: localThreshold(%d), E1A DeactThreshold(%d)
