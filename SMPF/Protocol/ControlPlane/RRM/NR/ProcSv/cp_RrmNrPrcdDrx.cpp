Line 136:    >>RRM_L1C_DRX_AVAILABLE_IND_Hdlr - duration (%d)
Line 166:      ::FreqInfo is not exist
Line 173:    >>RRM_L1C_DRX_AVAILABLE_IND_Hdlr - Idle 2, Inactive 5 (%d)
Line 177:      ::SRCH/MEAS NOT scheduled. Send DrxStatusInd with TRUE
Line 182:      ::SRCH/MEAS Ongoing. Send DrxStatusInd with FALSE
Line 204:    >>RrmNrPrcdDrx::RRM_L1C_DRX_SLEEP_STATE_IND_Hdlr - RrmState:%d(idle:2/Conn:4) CdrxState:(enum)%d L1-HandShakeSkip:%d 
Line 212:      ::RRM-HandShakeSkip:%d PbdWithHandShake:%d
Line 221:        #CDRX - Prepare reSchedule meas
Line 223:        #Disable Eval/Mr timer
Line 232:        #HandShake mismatched, a race condition problem?
Line 249: 	     #RRM DRX PBD is not running but HandShakeSkip FALSE in L1C
Line 267: 	     #CDRX not happened - Set CdrxStatus as false
Line 276:        #CDRX not happened - Prepare reSchedule meas
Line 283:        #Wrong CDRX state is triggered, disable CDRX flag
Line 317:      ::No candidate candidate freq in ConfigureReselEvalInd
Line 324:      ::No candidate candidate freq in PerformEval
Line 330:      ::SKIP EVAL for RESELECTION. LastHandShakeSkip %d, ReselState %d
Line 336:      ::SKIP PreSchedule. LastHandShakeSkip %d
Line 357:    >>RrmNrPrcdAnrRun::AbortHdlr::Terminate Cur Procedure
Line 361:    >>RrmNrPrcdAnrRun::AbortHdlr::Cur Procedure is not Terminating (%d)
Line 375:    >>RrmNrPrcdDrx::ProcPreSchedule
Line 386:      ::No intrafreq info
Line 415:      ::Pre Scheduling is skipped.
Line 433:    >>RrmNrPrcdDrx::ReleasePrevPreSchedule
Line 440:      ::No intrafreq info
Line 451:      ::Found Previous ongoing PreScheduleMO:%d - set it as NO_PRESCHEDULE
