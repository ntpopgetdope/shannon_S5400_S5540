Line 88: [NCCH] StopNpdcch
Line 121: SetHarqInfo-nrmStPos:HFN%d SFN%d sf%d Slot%d
Line 158: [NCCH][InitNpdcchCandBank] refPos HFN%d SFN%d sf%d Slot%d
Line 160: [NCCH][InitNpdcchCandBank] srchSpcEnd HFN%d SFN%d sf%d Slot%d
Line 162: [NCCH][InitNpdcchCandBank] NextK0_minus5 HFN%d SFN%d sf%d Slot%d
Line 230: [NCCH][UpdateNpdcchInfo] ProcType(%d) Rmax(%d) G(%d) a(%d) RntiType(%d) carr(%d) maxHarq(%d) doubleMonitor(%d)
Line 260: [NCCH][CalcSrchSpace] HFN(%d) SFN(%d) sf(%d) Slot(%d)
Line 303: [NCCH][CalcSrchSpace] NextK0:HFN%d SFN%d sf%d Slot%d
Line 330: [NCCH][CalcSrchSpace] PastK0:HFN%d SFN%d sf%d Slot%d
Line 352: [NCCH][SchedNpdcch] ignore C-RNTI schedNpdcch by unsync
Line 372: [NCCH][SchedNpdcch]sched-pos HFN(%d) SFN(%d) sf(%d) Slot(%d), mode(%d), isResched(%d)
Line 376: CurrHarqProcnum:%d,mTwoHarqMonitoringFlag:%d
Line 399: [NCCH][SchedNpdcch] Step2 select valid search space FAIL
Line 423: [NCCH][SchedNpdcch] forwardRefPos:HFN%d SFN%d sf%d Slot%d, backwardRefPos:HFN%d SFN%d sf%d Slot%d
Line 429: [NCCH][SchedNpdcch] Step3 FAIL find remain NPDCCH subframe between (curr+offset or pastk0) and (nextk0-5) continue
Line 523: [NCCH][compareLastOutBuffer] PassNum:%d, R:%d, RemainNum:%d, MaxHarq:%d, ProcType:%d, mLastObuf:0x%08X, Obuf:0x%08X
Line 588: [NCCH][SchedNpdcch] 2 harq
Line 608: |-> Overwrite Pos for harq 1: %d-%d-%d
Line 648: [NCCH][NpdcchDone] oBuf:0x%X
Line 650: [RX_ERROR] Invalid DCI format oBuf:0x%X
Line 657: [NCCH][NpdcchDone] Invalid values in DCI (%d).
Line 682: [NCCH][NpdcchDone] out of compareLastOutBuffer: %u
Line 684: [NCCH][NpdcchDone] Fail Guarantee.
Line 693: [NCCH][NpdcchDone] Extra Dci ValueCheck Fail.
Line 710: [JHL_TMP] StopNpdcch
Line 779: [NCCH][NpdcchDone] Subframe is elapsed, so UE can stop monitoring for NPDCCH.
Line 790: [NCCH][NpdcchDone] Update new decInfo prevDecInfoId:%d currDecInfoId:%d
Line 864: HandleNpdcchResult - Duplicated decoding done LISR!!
Line 878: [NCCH] NPDCCH FA exist before the last BAD!!
Line 969: [NCCH][findTheLastPositionForTwoHarq] Subframes To be Monitored for 2 HARQ is from SFN %d SF %d onwards and current SFN %d and SF %d.
Line 974: [NCCH][findTheLastPositionForTwoHarq] No Valid DL Candidate for TwoHARQ left for monitoring!
Line 980: [NCCH][findTheLastPositionForTwoHarq] Wrong Condition! npdcchEndPos is later than mLastPosForTwoHarq.
