Line 173: Release Search resource
Line 183: Release measure resource
Line 207: L1LC_getSearchHwResource: ret_val (%d)
Line 233: L1LC_getMeasureHwResource: ret_val (%d)
Line 270: L1LC_checkSrchMeasHwResource: msg_id (%d), ret_val (%d)
Line 331: [L1LC] DR BAND NR(count %d, bingo %d): %5d, %5d, %5d, %5d, %5d
Line 407: DR EVENT(%d)(%s) (%s)(%d) [MCG ST%d, SCG ST%d, AIT ST%d]
Line 411: DR EVENT SCG_CC(%d) at %s()==
Line 658: [L1LC_EnableDsdsMask] -> 0x%x (0x%x)
Line 728: [L1LC_DisableDsdsMask] -> 0x%x (0x%x)
Line 764: [L1LC_SetNrPathConfigPending] %d -> %d
Line 813: [L1LC_IsAnyDsdsMaskSet] DSDS Mask(0x%x)
Line 876: [LTE DSDS] Undefined option for display RFBO
Line 893: funcName = %s, Set ST-%d Is_Drx_Wakeup_ongoing to %d
Line 894: funcName = %s, Set ST-%d Is_Drx_Wakeup_ongoing to %d
Line 913: ST-%d Is_Drx_Wakeup_ongoing = %d
Line 914: ST-%d Is_Drx_Wakeup_ongoing = %d
Line 939: [LTE DSDS] Already IsDrxSleep = TRUE.
Line 946: [LTE DSDS] Already IsDrxSleep = FALSE.
Line 951: [LTE DSDS] gL1lc_DsdsDB.IsDrxSleep = [%d][%d]
Line 975: [LTE DSDS] Already PauseFlag = TRUE.
Line 979: [LTE_DSDS]RF Pause Flag set
Line 984: [LTE DSDS] Start LongPauseCheckTmr.(9 sec)
Line 990: [LTE DSDS] Already PauseFlag = FALSE.
Line 994: [LTE_DSDS]RF Pause Flag reset
Line 999: [LTE DSDS] Stop LongPauseCheckTmr.
Line 1003: [LTE DSDS] gL1lc_DsdsDB.PauseFlag = [%d][%d]
Line 1024: [LTE DSDS] Already PauseIndFlag = TRUE.
Line 1031: [LTE DSDS] Already PauseIndFlag = FALSE.
Line 1037: [LTE DSDS] gL1lc DsdsDB.PauseIndFlag = [%d][%d]
Line 1060: Set ST%d IsMeasReqPending (%d->%d)[%d][%d]
Line 1095: [LTE DSDS] Undefined option for display RFBO
Line 1475: [SADS] Tx Req during SleepAbort, L1tx(%d), L2tx(%d)
Line 1477: IsTxReqSentBeforeReconfig = 1
Line 1509: [SADS] Tx Req before ReconfigL1C (in conn state)
Line 1511: IsTxReqSentBeforeReconfig = 1
Line 1587: [4G_DRDS] Set gEarlyPauseFlag as FALSE
Line 1590: [LTE L1LC DSL1RC] HALSC_GetUeState(%d)@%s IsRfAvailable[%s]
Line 1600: RESET gL1lc_DsdsDB.HalParamSaved = %d
Line 1646: [4G_DRDS] SET NeedResumeCnf
Line 1652: [LTE DSDS] Start Check meas elem timer.(2 sec)
Line 1953: [SADS] Wait Measure GRANT because NR Measure pause ongoing
Line 1959: [SADS] Set SadrMeasureTimer 20ms
Line 1965: [SADS] Wrong response (%d)
Line 1969: [SADS] L1LC_ProcSrIfMeasureRsp (%d)
Line 1973: Can't Start Measure due to RF is unavailable
Line 1983: [SADS] L1LC_ProcSrIfMeasureRsp curMode: (%d), savedMeasElem->mode: (%d)
Line 1988: Can't Start Measure due to other meas is ongoing (curMode: %d, curIratMode: %d)
Line 1994: [SADS] SADR_MEAS_PAUSE or MEAS_PAUSE_DONE >> Do not release the Measure
Line 2018: [SADS] SADRMeasState (%d => %d)
Line 2086: As other stack is under signaling, so RF starvation can be longer
Line 2104: Extend ModemOffAbnormalTmr
Line 2173: [LTE L1LC DSL1RC] Waiting For Resume (%d), Ignore Response (%d) Early Pause Timer stopped!!!
Line 2201: [SADS] isNextPagingConflict(%d)
Line 2233: [LTE L1LC DSL1RC] Not registered!!!
Line 2240: [DRX] IsRfReqReject = TRUE (for delayed RF init)
Line 2280: [LTE L1LC DSL1RC] Response type is wrong!!!
Line 2287: [LTE L1LC DSL1RC] Other Client is holding RF with reason(%d)
Line 2294: [LTE L1LC DSL1RC] Reset IsWaitResponse (%d) and gCurProc, No retry on RSM side for PAGING REJECT.
Line 2301: [SADS] Rf Request for DR REJECTED
Line 2308: [LTE L1LC DSL1RC] retryCntForPSConflict (%d)!!!
Line 2315: [LTE L1LC DSL1RC] retryCntForPS (%d)!!!
Line 2330: [LTE L1LC DSL1RC] Next time, L1LC will request RF with updated RF reason!!!
Line 2340: [LTE L1LC DSL1RC] Continous reject for Reinit DRX. Next time, L1LC will request RF with updated RF reason!!!
Line 2370: [LTE L1LC DSL1RC] OtherStackOHEStatus(%u) OtherStackRFReason(%u) Int_Stack(%d)
Line 2384: [LTE L1LC DSL1RC] SA is using interPDN, Dose not enable retry timer
Line 2403: [LTE L1LC] NextPagingReqTime(%d) 
Line 2438: [LTE L1LC DSL1RC] Retry Timer not started as RF will be requested for Paging/wakeup in %d us !
Line 2490: [LTE L1LC DSL1RC] CurrentTime(%u) PagingPALTime(%u) RemainTimeToPaging(%u)
Line 2499: [LTE L1LC DSL1RC] Paging request timer should start for next paging occasion
Line 2505: [LTE L1LC DSL1RC] Paging request timer should start for current paging occasion
Line 2510: [LTE L1LC DSL1RC] Paging occasion skipped! RemainTimeToNextPaging(%u) UpdateTime(%u)
Line 2520: [LTE L1LC DSL1RC] Set Paging Request Timer (setting: %u us)
Line 2529: [LTE L1LC DSL1RC] PreponePagingRFReqTime(%d) is updated!
Line 2535: [LTE L1LC DSL1RC] Remaining time for next Paging Req Timer expiry is %d us
Line 2573: [DEBUG] gL1LC_DrxControl->state = [%d, %d], gDrxL1_Flag = [%d, %d]
Line 2579: [LTE L1LC DSL1RC] ILM pause received when Wakeup is on hold due to nearby early pause timer expiry!!!
Line 2585: [LTE L1LC DSL1RC] CauseUpdate is Pended!
Line 2600: [LTE L1LC DSL1RC] Pause request received when RF (%s) and DRX Sleep (%s)!!!
Line 2604: [LTE L1LC DSL1RC] Ignore PAUSE_REQ as IsWaitResponse = TRUE!!!
Line 2608: [LTE L1LC DSL1RC] Ignore Pause Req as MBMS is ongoing and RF is already released!!!
Line 2614: [SADS] Tx Rsp Waiting >> delay Pause
Line 2624: IsTxReqSentBeforeReconfig = 0
Line 2632: [LTE L1LC DSL1RC] Pause Request recieved when L1 is already in waiting state for Resume!!!
Line 2642: [4G_DRDS] Pause request received for SCG stack during edv active, ignore it
Line 2650: [LTE L1LC DSL1RC] Pause Request recieved when L1 is doing wakeup procedure!!!
Line 2660: [LTE L1LC DSL1RC] Pause Request recieved when L1 is doing Clk estimation!!!
Line 2675: [LTE L1LC DSL1RC] MBMS is ongoing, delay pause done by time = %d ms
Line 2719: [4G_DRDS] Pause request received for SCG stack during edv active, ignore it
Line 2724: [4G_DRDS] During 4G_DRDS, Pause procedure should be done
Line 2733: [SADS] Tx Rsp Waiting >> delay Pause
Line 2768: [LTE L1LC DSL1RC] Mandatory SIBs are decoded, execute Pause [%d]
Line 2776: [LTE L1LC DSL1RC] CONN-CMAS of the other stack
Line 2786: [LTE L1LC DSL1RC] PAUSE :: Time[%dms] Pause Flag [%s] RF[%s] Current Proc[%s], UE state(%d), DsdsMask(0x%x))
Line 2791: [LTE L1LC DSL1RC] In CONN mode, RF not available... DSDS Timer started for 10s!!!
Line 2821: [LTE L1LC DSL1RC] Resume Recieved while in DRX Sleep!!! Issue Rsrc Release to DSL1C
Line 2833: gL1LC_DsdsReleaseAndReqTmr Timer stop
Line 2840: gL1LC_DsdsTmr Timer stop
Line 2855: [NRDS] IsDrxSleep is TRUE. HalWakeupStartInd is TRUE. Do StartResumeProcedure
Line 2866: [NRDS] (SW sleep case) After DS operation, Dmover release / init is required.
Line 3064: [4G_DRDS] Do not update RF cause, eDV_Active(%d)
Line 3071: [LTE L1LC DSL1RC] Do not update RF cause as Paging Rcv Timer is running 
Line 3096: [LTE L1LC DSL1RC] Do not request RF with lower priority than PAGING due to nearby e.p.t (%d)! 
Line 3145: Measurement ongoing. Hence do not change RF request to PS Data
Line 3153: Measurement/Wakeup is ongoing. Hence do not change RF reason
Line 3158: RACH is ongoing. Hence do not release
Line 3277: [LTE L1LC] Do not pause as Pause Delay timer running due to MBMS
Line 3284: [LTE L1LC] pause_done (%d)
Line 3501: Set IsMandatarySibsReadReq as TRUE.
Line 3528: Set IsMandatarySibsReadReq as FALSE.
Line 3655: [LTE L1LC] IsHoSync(%d)-> FALSE 
Line 3720: [4G_DRDS] During 4G_DRDS, rf is unavailable. So, request RF (RACH)
Line 3726: [4G_DRDS] Receive Intra meas!! result[%d]
Line 3731: [4G_DRDS] RF request for non-intra skipped during SCG wakeup ongoing
Line 3799: [4G_DRDS] RF request for Intra search/meas is skipped as wakeup is ongoing
Line 3921: Reset PauseFlag to ignore early pause timer (Signalling Start)
Line 3926: [LTE L1LC] IsHoSync(%d)-> TRUE 
Line 3942: [LTE L1LC] Signalling for Handover!!!
Line 3953: [LTE L1LC] Start Control MIF for HandOver Timer!!!
Line 3960: [LTE L1LC] Signalling for CSFB!!!
Line 3970: [LTE L1LC] IsHoSync(%d)-> FALSE 
Line 3987: [LTE L1LC] Start Control MIF for HandOver Timer!!!
Line 4004: [LTE L1LC DSL1RC] Updated RF reason!!
Line 4082: [LTE L1LC DSL1RC] Can be PS conflict (4G-HEDGE) situation!!!
Line 4087: [LTE L1LC] High Priority end. Result is MMC_L1LC_REQUESTREASON_NULL!No Action!
Line 4094: [LTE L1LC] Do not request RF as 4G_DRDS is active
Line 4124: [LTE L1LC] Do not update RF case as 4G_DRDS is active
Line 4194: RESET gL1lc DsdsDB.IsSuspend
Line 4227: Do not reset Sysread mask when SIB DRX is configured
Line 4236: RF not released as Measurement ongoing.
Line 4314: [LTE L1LC] IsHoSync(%d)-> TRUE 
Line 4321: Early Pause Timer stop
Line 4345: Set IsMandatarySibsReadReq as FALSE.
Line 4519: (L1LC_DecodeRrmConnSleepReq) (R value no update for long time)
Line 5186: [LTE L1LC DSL1RC] Doesn't request RF! Check Req ID[%d]!!!!)
Line 5222: [LTE L1LC DSL1RC] Pre result[%d])
Line 5305: [L1LC @%s] Final result[%d]: (DsdsMask[0x%x], Pause[%s], Req ID[%d], HO Flag[%s], gCurProc[%d])
Line 5394: [SIB_DRX] Restore SIB_DRX after PBCH_DONE for Reinit DRX (%d -> %d)
Line 5435: [DRX] Paging Rcv Intr is running for actual paging, Do not reset the paging mask
Line 5550: [L1LC @%s] Do not Process HAL_L1LC_RXMODE_REQ_IND otherwise RF will be released. Pause Ind (%d), Pause Flag (%d)
Line 5564: [L1LC @%s]Pre Processing (DsdsMask[0x%x], Pause[%s], Current Proc[%s], Req ID[%d])
Line 5566: [L1LC @%s]Pre Processing (Result[%s], Cause[%s], IsConn(%d))
Line 5574: There is no ongoing Search/Meas !!!!!!!
Line 5592: Don't perform RF Pause/Release,  gL1LC_DrxControl.state: %d, dsds_db->IsWakeupProc: %d, Is_Drx_Wakeup_ongoing: %d, gDrx_CfoEnable: %d
Line 5620: Don't perform RF Pause/Release,  gL1LC_DrxControl.state: %d, Is_Drx_Wakeup_ongoing: %d, gDrx_CfoEnable: %d, RACH ongoing status: (%d, %d), IsForResume:%d
Line 5625: [LTE L1LC] Pause will be performed as part of EPT expiry handling
Line 5639: [L1LC @%s] Post Processing (DsdsMask[0x%x], Pause[%s], Current Proc[%s], Req ID[%d] Result[%s])
Line 5688: [L1LC @%s]Pre Processing (DsdsMask[0x%x], Pause[%s], Current Proc[%s], Req ID[%d])
Line 5696: Wakeup procedure is not completed. Hence do not send pause done yet!
Line 5714: Wakeup procedure is not completed. Hence do not send pause done yet!
Line 5728: [L1LC @%s] Post Processing (DsdsMask[0x%x], Pause[%s], Current Proc[%s], Req ID[%d] Result[%s])
Line 5752: L1LC_DsdsCheckPauseIndAction
Line 5763: [4G_DRDS] 4G_DRDS ongoing, don't do L1LC_DsdsCheckPauseIndAction !!!
Line 5769: L1LC_DsdsCheckPauseIndAction >> Wakeup procedure is not completed. Hence do not send pause done yet!
Line 5775: [LTE L1LC DSL1RC] L1LC_DsdsCheckPauseIndAction >> RF released due to Pause Ind action
Line 5838: [LTE L1LC DSL1RC] Signaling mask already set, request RF with signaling
Line 5869: [LTE DRDS] EDV_ACTIVE_IDLE_IDLE mode will be activated! do not request RF!!
Line 5871: [LTE DRDS] Set HalWakeupStartInd = TRUE to decode wakeup start without RF req !!
Line 5920: [NRDS] RF became available during HAL => L1lC message sending. make HalWakeupStartInd as TRUE for process wakeup procedure. -n.c
Line 5952: [LTE L1LC DSL1RC] 4G_DRDS is activated already
Line 6007: [LTE L1LC DSL1RC] Waiting for resume, hence Release RF before activating 4G_DRDS
Line 6055: [L1LC @%s] (DsdsMask[0x%x] ,Pause[%s], Current Proc[%s], Req ID[%d], Result[%s], Cause[%s])
Line 6107: RF aquired for power on(BPLMN_SRCH_START_IND)
Line 6114: RESET gL1lc DsdsDB_[%d].IsSuspend
Line 6123: RF request triggered before power on(BPLMN_SRCH_START_IND)
Line 6136: Already suspended. So, BPLMN was aborted. So, no need register
Line 6159: [L1LC @%s] Post Processing (DsdsMask[0x%x], Pause[%s], Current Proc[%s], msg_id[%d], Cause[%s])
Line 6183: Do not start SetScellNtf because Bandlist Update was not done yet
Line 6201: [SADS]RRM_L1LC_SET_SCELL_NTF will be pended due to 2TX reuest 
Line 6225: [SADS] pended RRM_L1LC_SET_SCELL_NTF will be cleared due to DEACT
Line 6250: [SADS]L1LC_SadrProcHalSCellDeactCnfInd (isUlCa:%d, earfcn:%d, cc:%d, wait_deactcnf_cc:%d, isTxAvailable:%d, msg_type:%d)
Line 6314: [LTE L1LC DSL1RC] RF Available [%s] Req Reason [%s] IratMeasFlag[%d]
Line 6332: RF will not be requested because RRM_L1LC_SIGNALLING_IND comes in Modem off state
Line 6347: [LTE L1LC DSL1RC] DRDS deactivation is ongoing, hold the force wakeup processing. Saved RRM Msg[%s] Msg ID[%d]
Line 6378: [LTE L1LC DSL1RC] Saved RRM Msg[%s] Msg ID[%d]
Line 6387: [LTE L1LC DSL1RC] RRM Msg Waiting for Pause Done/Resume/Response :: Pause[%s] Resume[%s], PauseIndFlag[%s], RetryTimerRunning[%s]
Line 6431: [LTE L1LC DSL1RC] Saved RRM Msg[%s] Msg ID[%d] IsEDV_Active[%d] for MCG
Line 6469: Pending RRM suspend as eDV deactive operation is ongoing
Line 6496: [LTE L1LC DSL1RC] Do not request RF with lower priority than PAGING due to nearby e.p.t (%d)! 
Line 6526: [LTE L1LC DSL1RC] Do not request RF with lower priority than PAGING due to nearby paging timing of other stack (%d)! 
Line 6533: [LTE L1LC DSL1RC] Do not hold RRM msg because DRDS will be triggered (%d)! 
Line 6542: gL1LC_DrxControl->state: %d, gDrx_CfoEnable: %d
Line 6569: [L1LC @%s] Saved RRM Msg[%s] Msg ID[%d] isProcOngoing [0x%x] isRFUpdate [%d]
Line 6589: [LTE L1LC DSL1RC] Already Saved RRM Msg[%s] Msg ID[%d] IsEDV_Active[%d] for SCG, WakeupOngoing[%d]
Line 6613: [LTE L1LC DSL1RC] Saved RRM Msg[%s] Msg ID[%d] IsEDV_Active[%d] for SCG without MEASURE_REQ
Line 6631: [L1LC @%s] RRM_NOHOLDMSG[%d], NO_PAUSE_RESUME[%d], gL1LC_DsdsRetryTmr [%d], IsRfCauseUpdatePending[%d], CurrMeasFlag[%d], isRFUpdate[%d]
Line 6634: [L1LC @%s] gHALSC_IdleGapOnGoing[%d] gHALSC_PrepareGapMeas[%d] gL1LC_DrxControl->state[%d] gL1LC_DsdsPagingRcvIntrTmr [%d] IsPreponePagingRcvIntrReq[%d] DuringClkest[%d]
Line 6675: [LTE L1LC DSL1RC] Free HAL message [%u] before saving new [%u]
Line 6682: [LTE_DSDS] HAL saved message [%d]
Line 6690: [LTE L1LC DSL1RC] Wakeup Start Indication Recieved from HAL
Line 6705: [NRDS] LTE : sleep -> wakeup, NR : paused, release RF first. -n.c
Line 6717: [LTE L1LC DSL1RC] HOLD PAGING_DONE_IND due to pauseindflag
Line 6735: [LTE L1LC DSL1RC] Stop Retry Timer and Requests for RF
Line 6743: [LTE L1LC DSL1RC] DSDS_RRM_NOHOLDMSG[%d] DSDS_NO_PAUSE_RESUME[%d],IsRfCauseUpdatePending(%d)
Line 6780: [L1LC @%s] Before: dontfree[%d] HalWakeupStartInd[%d] HalSaveMsg[%u] Is_Drx_Wakeup_ongoing[%d]
Line 6787: [L1LC @%s] RRM Saved Msg [%d] is not freed !
Line 6790: [L1LC @%s] RRM Saved Msg [%d] is freed !
Line 6798: [L1LC @%s] HAL Saved Msg [%d] is not freed since msg was HAL_L1LC_WAKEUP_START_IND!
Line 6802: [L1LC @%s] HAL Saved Msg [%d] is freed !
Line 6809: [L1LC @%s] MMC Saved Msg [%d] is freed !
Line 6815: [L1LC @%s] SetScellNtf Saved Msg is freed !
Line 6826: [L1LC @%s] After: dontfree[%d] dsds_db->HalSaveMsg[%u] dsds_db->HalWakeupStartInd[%d] Is_Drx_Wakeup_ongoing[%d]
Line 6845: [LTE DSDS] Stop LongPauseCheckTmr.
Line 6849: [L1LC @%s] L1LC_DsdsDB cleared !
Line 6912: [L1LC PSPS] PS Protection is not valid as no Autopause timer is running!
Line 6922: [L1LC PSPS] Don't Release RF during Sleep! PS Protection is valid. SleepTime[%u], EarlyPauseTime[%u]
Line 6928: [L1LC PSPS] Release RF during Sleep! SleepTime[%u], EarlyPauseTime[%u]
Line 6958: [LTE L1LC DSL1RC] L2LRX_L1LC_IDLE_PAGING_DONE_IND :: eDV_Active[%d] CurrentStack[%d] is MCG STACK
Line 6983: [LTE L1LC DSL1RC] L1LC_ProcWakeUpStart :: RF Available[%s] Wakeup from Sleep[%s]
Line 7011: [NRDS] set ProcWakeupByMsg(1)
Line 7032: [LTE L1LC DSL1RC] L1LC_ProcConfigGapInt :: RF Available[%s]
Line 7141: [LTE L1LC DSL1RC] L1LC_ProcReConfigL1C (prev_rat : %d, IsEndc of current/other STACK: %d/%d, NrFullResetFlag : %d, pre_StackID: St%d, Did_X2L_Irat:[%d, %d]
Line 7159: C1:[LTE L1LC DSL1RC] L1LC_ProcReConfigL1C (gDrx_ActiveRat : %d)
Line 7165: [Debug] Full reset on prev rat 5G case. (NrFullResetFlag : 1)
Line 7169: [Debug] Full reset on prev rat 4G case. (NrFullResetFlag : 1)
Line 7181: [SADS] Skip Modem setting
Line 7210: [LTE L1LC DSL1RC] Cannot Restore L1LC Parameters!!! (Sync Mode[%d] Meas Mode[%d] gDrx_ActiveRat[%d])
Line 7227: [SADS] Sync RFD RTG with BB RTG!
Line 7249: C2:[LTE L1LC DSL1RC] L1LC_ProcReConfigL1C (gDrx_ActiveRat : %d, bNrModemState = %d, bNrDsSleepState = %d)
Line 7338: [4G_DRDS] Already ConnDR_state: DR_ADDED
Line 7362: [4G_DRDS] Already ConnDR_state: DR_ADDED
Line 7396: End of %s
Line 7425: HAL parameters were already saved. Don't save HAL parameters again.(gL1lc_DsdsDB.HalParamSaved = %d)
Line 7433: [LTE L1LC DSL1RC] Cannot Store L1LC Parameters!!! (Sync Mode[%d] Meas Mode[%d])
Line 7438: [LTE L1LC DSL1RC]L1LC_ProcStoreL1CParameters (gDrx_ActiveRat : %d)
Line 7443: SET gL1lc_DsdsDB.HalParamSaved = %d
Line 7479: [LTE L1LC DSL1RC] Cannot Store L1LC Parameters!!! (Sync Mode[%d] Meas Mode[%d])
Line 7484: [LTE L1LC DSL1RC]L1LC_ProcStoreL1CParameters (gDrx_ActiveRat : %d)
Line 7518: Sync Timer running for curMode(%d)
Line 7534: Meas Timer running for curMode(%d)
Line 7645: RTG(ST:%d) is saved: SFN(%d), TTI(%d) RTGoffset(%d), ReleasePalTime(%d)
Line 7686: [DRDS][Prev-mask=0x%x]SCG RF update(try-cause= %d) trial to break DRDS.
Line 8005: [SADS] NR sleep ongoing >> wait NR sleep DONE
Line 8027: L1LC_DsdsPerformRFRelease
Line 8036: [SC] CC%d: earfcn(%d), type(%d), pair_cc(0x%04x), tdp_state(%d), rx_mode(%x), rf_path(%x)
Line 8066: [4G_DRDS] No more procedure is needed to release RF in ScgStackId (%d)
Line 8079: RF is not initialized yet (RfAvailable[%d] WaitResponse[%d]). Dont perform RF Release procedure!
Line 8127: End of %s
Line 8156: [LTE L1LC DSL1RC] Retrigger srch(%d) after DS resume
Line 8170: [LTE L1LC DSL1RC] gHALSC_MeasMode(%d)
Line 8175: [LTE L1LC DSL1RC] Other measurement ongoing. So dont reset meas mode: gHALSC_MeasMode(%d)
Line 8188: [LTE L1LC DSL1RC] Retrigger meas(%d) after DS resume
Line 8549: [SADS] NR sleep/wakeup(%d) ongoing >> wait NR sleep/wakeup DONE
Line 8562: L1LC_DsdsPerformRFPause
Line 8569: [SC] CC%d: earfcn(%d), type(%d), pair_cc(0x%04x), tdp_state(%d), rx_mode(%x), rf_path(%x)
Line 8587: [4G_DRDS] No more procedure is needed to Pause RF in ScgStackId (%d)
Line 8621: [LTE L1LC DSL1RC] During Conn-Conn State, L1LC should release RF!!
Line 8652: End of %s
Line 8672: [LTE L1LC DSL1RC] 10s DSDS TIMER EXPIRED in CONN mode!!!
Line 8684: Release the RF beffore starting Recovery procedure
Line 8691: Extend L1LC_DSDS_TIMER due to NR transition
Line 8732: [LTE L1LC DSL1RC] SUSPEND FLAG is Set!Return....
Line 8770: [LTE L1LC DSL1RC] Updated RF reason!!
Line 8869: [LTE L1LC DSL1RC] Updated RF reason!!
Line 8884: [LTE L1LC DSL1RC] Abnormal case!!
Line 8890: [LTE L1LC DSL1RC] Reinit DRX case. Update result as MEASUREMENT to prevent permanant REJECT
Line 8892: [LTE L1LC DSL1RC] Running Proc[0x%x], RRM Result[%u], Result[%u] !
Line 8909: [LTE L1LC DSL1RC] PAUSE_IND, Wait RESUME_IND from RRM.
Line 8945: [LTE L1LC DSL1RC] DSDS PAGING REQUEST TIMER EXPIRED!!!
Line 8968: ARFC case So, DRDS is unavailable!!
Line 8975: ARFC case So, DRDS is unavailable!!
Line 8999: [LTE L1LC DSL1RC] 4G_DRDS is activated hence free HAL_L1LC_RF_RSRC_REQ_IND for SCG stack!
Line 9003: [4G_DRDS] No need to Update RF reason for SCG stack as 4G_DRDS is activated!
Line 9013: [LTE L1LC DSL1RC] Abnormal Case ! RF is not requested !
Line 9047: current_sfn_tti[%d], gDrxSiRnti[%d] 
Line 9069: [LTE L1LC DSL1RC] Timer started for %d !!!
Line 9077: [LTE L1LC DSL1RC] Timer started for %d !!!
Line 9113: UE state[%d], Rnti[%d], Rf available[%d] 
Line 9121: Don't request RF grant because eDV_Active is TRUE and MCG.
Line 9152: [LTE_DSDS]Wake up ongoing hence not doing pause even Early timer expired
Line 9160: [PG] wakeupintrTmr(%d), Lwakeup_Intr(%d) 
Line 9162: [LTE L1LC DSL1RC] DRX sleep / CLKEST ongoing (State: %d), hence not doing pause even Early timer expired!!!
Line 9175: [LTE_DSDS]Initial Search/ measure hence not doing pause even Early timer expired
Line 9182: [LTE_DSDS]During GAP hence not doing pause even Early timer expired
Line 9189: [LTE_DSDS]Irat measure(%d) hence not doing pause even Early timer expired
Line 9196: [LTE_DSDS]Scell srch/meas(%d) hence not doing pause even Early timer expired
Line 9207: [LTE_DSDS]Inter srch/meas(%d) hence not doing pause even Early timer expired
Line 9213: [LTE_DSDS]Handover(%d)/CSFB(%d) already in progress. Hence not doing pause even Early timer expired
Line 9219: [4G_DRDS] Don't do early pause as pauseFlag is not set ! gL1lc_DsdsDB.PauseFlag [%d]
Line 9225: [LTE DSDS] Don't do early pause because RF was requested with SIGNALLING and waiting RESPONSE
Line 9571: [4G_DRDS] L1LC_CheckEarlyPauseFeasibility is FALSE, return!! PauseFlag(%d)
Line 9610: [LTE_DSDS] Pause(%d), Resume(%d)
Line 9619: [LTE_DSDS] e.p.t expired, pause done not sent. Send RF request as IsRfCauseUpdatePending is TRUE, RF Requet[%s]
Line 9629: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSearchReq!!!
Line 9637: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSetDlFreq!!!
Line 9655: [LTE_DSDS]Wait for Resume[%s] Wait for RF RSRC RSP[%s]
Line 9699: [DSP] Modem Status: % d, gL1LC_DrxControl->state: %d, DSDS_RF_AVAILABLE(): %d
Line 9705: [DSDS] RF cannot be requested again, so do not release RF isAnyMaskSet(%d) IsPagingRcvIntPend(%d)
Line 9731: [LTE L1LC DSL1RC] Request RF for Saved RRM msg
Line 9739: [LTE L1LC DSL1RC] Do not request RF for Reason[%u] as RRC is in Paused state!
Line 9780: [LTE L1LC DSL1RC] IsAnyDsdsMaskSet: %d UE_state: %d
Line 9813: 4G-DRDS LTE stuck: SCG StackId[%d] MeasState[%s] Search-Meas Grant not received
Line 9818: 4G-DRDS LTE stuck: SCG StackId[%d] MeasState[%s] Search-Meas Grant not received
Line 9824: 4G-DRDS LTE stuck: SCG StackId[%d] Search-Meas is not done. DSDSMASK[0x%x], curMode[%d]
Line 9830: 4G-DRDS LTE stuck: SCG StackId[%d] is stuck in wakeup Ongoing state
Line 9835: 4G-DRDS LTE stuck due to LTE-NR sleep/wakeup conflict
Line 9840: 4G-DRDS LTE stuck due to invalid rf band
Line 9845: 4G-DRDS LTE stuck due to invalid demod[%d] allocation
Line 9850: 4G-DRDS LTE stuck: Unknown Reason
Line 9890: LTE%d Long Sleep: Wakeup Intr Received, No RF Response received, SRL1RC to check
Line 9897: LTE%d Long Sleep: Invalid RAT index for other stack %d
Line 9907: LTE%d Long Sleep: Wakeup Intr Received, RF req Rejected, Other RAT[%s], RF Hold Reason[%s], DSDSMASK[0x%x] curMode[%d] curIratMode[%d]
Line 9914: LTE%d Long Sleep: Wakeup Intr Received, RF req Rejected, Other RAT[%s], RF Hold Reason[%s], DSDSMASK[0x%x]
Line 9922: LTE%d Long Sleep: Wakeup Intr Received, RF req Rejected, Other RAT[%s], SRL1RC to check
Line 9929: LTE%d Long Sleep: Wakeup Intr Received, RF Not Requested, L1LC to check
Line 9935: LTE%d Long Sleep-TX Grant Not received TX Rsp[%s], SRL1RC to check
Line 9940: LTE%d Long Sleep-Unknow Reason
Line 9946: LTE%d Long Sleep-No wakeup Intr
Line 9975: L1LC_ProcModemOffAbnormalTimerExpired: isLWakeupEnabled(%d) isLWakeupPended(%d) ReqdSlpTime(%d) RemainSlpCnt(%d) SlpCnt(%d) IsWaitResponse(%d)
Line 9985: ignore ModemOffAbnormalTimerExpired. StackStatus = %d
Line 10141: [LTE L1LC DSL1RC] GetRemainEarlyPauseTime(%d), curTime(%u), epduration(%u)
Line 10178: [LTE L1LC DSL1RC] GetRemainEarlyPauseTime(%u)
Line 10218: [LTE L1LC DSL1RC] L1LC_ProcIsWakeUpPossible() Returned %d
Line 10222: [LTE L1LC DSL1RC] Wake up Possible. Conn-Conn state.
Line 10228: [NRDS] L1LC_ProcIsWakeUpPossible : already eDV_Active == TRUE, return TRUE  -n.c
Line 10288: [LTE L1LC] Wakeup skipped due to nearby Early Pause Time!
Line 10302: [LTE L1LC] Start RetryTimer (Default)
Line 10343: [LTE L1LC] : error Case! BplmnDurationTimer should have expired
Line 10377: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 10424: %s: Irat pending Dont release RF and Dont update RF cause since measure activity is pending(%d) or wakeup procedure(%d)!!!
Line 10487: [LTE L1LC] Signalling End!Paging ongoing. Switch RF cause to Paging
Line 10493: [LTE L1LC] Signalling End!Sys Info Read ongoing. Switch RF cause to SysInfo
Line 10499: [LTE L1LC] Signalling End!Measurement ongoing. Switch RF cause to MEAS
Line 10515: [LTE L1LC] Signalling End!Cell search ongoing. Switch RF cause to CellSearch
Line 10521: [LTE L1LC] Signalling End!MBMS ongoing. Switch RF cause to PSCALL
Line 10587: [LTE L1LC DSL1RC] L1LC_DsdsUpdateRfCause Prev(%d), New (%d), Rf Status(%d),Meas Status (%d)!!!
Line 10591: Retry Timer is running. Stop the timer!!
Line 10597: Procedure with higher priority is ongoing!!
Line 10604: Measurement on going, RETURN!!! RequestReason(%d), CurrMeasFlag(%d), gL1LC_DrxControl->state(%d), IsWakeupOnGoing(%d)
Line 10615: Clkest is ongoing, RETURN!!!
Line 10625: Waiting for RESUME_REQ from RSM, Don't send another request now, RETURN!!!
Line 10639: [4G_DRDS] Don't RF cause update until paging rcv intr !!!
Line 10703: [LTE L1LC DSL1RC] Can be PS conflict (4G-HEDGE) situation!!!
Line 10710: L1LC_DsdsUpdateRfCause: isRFReqSent(%d), Current Procedure(%d)!!!
Line 10770: There is no case
Line 10776: gRspNeeded(0x%x), DSDS_MASK(0x%x), result(0x%x)
Line 10825: L1LC_IsConflictWithBCH: Check SI scheduling for any conflict
Line 10867: There is conflict between BCH(4G) with PCH(other SIM) for index in SIB-1[%d] CurrentSfnTTI(%d) CurrentSfnTTI + EPT windowLength(%d) NextSiSfnTTI(%d) PrevSiSfnTTI(%d), si_WindowLength(%d)
Line 10880: Conflict in SI-Win(%d) and GAP. CurrentSfnTTI(%d) NextSiSfnTTI(%d) + SI windowLength(%d) gap_sfn_tti(%d)
Line 10886: SI-Window ongoing in SI-Win(%d). CurrentSfnTTI(%d) NextSiSfnTTI(%d) + SI windowLength(%d) gap_sfn_tti(%d)
Line 10915: Pre cellboundary is changed from %d to %d
Line 10917: Pre cellboundary is %d
Line 10938: Pre cellboundary of MCG Stack (%d) is changed from %d to %d
Line 10940: Pre cellboundary of MCG Stack (%d) is %d
Line 10962: Pre cellboundary of SCG Stack (%d) is changed from %d to %d
Line 10964: Pre cellboundary of SCG Stack (%d) is %d
Line 11001: [4G_DRDS] SCG (%d) Difference of cellboundary is changed from %d to %d
Line 11003: [4G_DRDS] SCG (%d) Difference of cellboundary is %d
Line 11047: Diff value was changed from %d to %d due to IsUpdatedDuringWakeup case
Line 11061: Difference of cellboundary is changed from %d to %d.(temp_diff %d)
Line 11063: Difference of cellboundary is %d
Line 11089: [OHE] Stack Status (%d to %d) => OHE_StackStatus[0][1] (%d, %d)
Line 11131: [DSDS]%s(stack cellboundary[%d, %d], Diff_cellboundary = %d, [bw,RF_DLY]= [%d, %d]) Start
Line 11136: [DRX] Otherstack's CellBoundary: %d, Diff: %d
Line 11158: [DRX] Cellboundary: %d, Otherstack: %d, Diff: %d
Line 11186: [DSDS] curTimeTti(%d), curTimeOffset(%d)
Line 11187: [DSDS] time_diff(%d) blackout_time_tti(%d) blackout_time_mclk(%d) blackout_tti_mclk(%d) Updated_tti(%d), RFReleasePalTime(%d), RFGrantPalTime(%d)
Line 11191: [DSDS] RTG update Check!!! curTimeTti(%d), curTimeOffset(%d), Updated_tti(%d), Mclk(%d)
Line 11222: [DSDS]%s() End
Line 11267: RF release(ST: %d) in conn - conn state! And STACK(%d) didn't have RF yet!!
Line 11282: Retry Timer is already running. Stop the timer and request again!!
Line 11343: L1LC_DsdsMbmsReset
Line 11428: [DSDS]Dose not need to update ealry_pause_timer
Line 11436: [DSDS]No change:DSDS_CA_count(%d),DSDS_4RX_count(%d)
Line 11463: [DSDS]remaining_time(%d->%d),sCaDeactDelay(%d),s4RxRelDelay(%d),gL1lc_DsdsDB.early_pause_duration(%u->%u)
Line 11465: [DSDS]change:DSDS_CA_count(%d->%d),DSDS_4RX_count(%d->%d)
Line 11471: [DSDS]remaining_time was short(%d)
Line 11475: Early pause duration is zero
Line 11572: [LTE L1LC DSL1RC] (%s DDS) Other stack has saved Rrm message, process that first
Line 11585: [LTE L1LC DSL1RC] (%s DDS) Sends Msg to another RRM stacks, IsMeasReqPending: %d, Is_ResumeReq: %d
Line 11600: Other stack gL1LC_DsdsConnConnRfTmr started for %d 
Line 11601: Avoid sending MEAS_SCHEDULE_IND for current stack %d 
Line 11655: [LTE L1LC DSL1RC] Int_Stack = %d, Ims_Stack = %d,
Line 11675: [LTE L1LC DSL1RC] time diff (%d ms) from RF reconfiguration
Line 11679: [LTE L1LC DSL1RC] There is no Ims_Stack: %d
Line 11685: [LTE L1LC DSL1RC] SINR of Ims_Stack: %d, change_mode: %d
Line 11714: [LTE L1LC DSL1RC] 1. Period of RF change: mode: %d (IMS:INT = %d:%d)!
Line 11720: [LTE L1LC DSL1RC] 2. Period of RF change: mode: %d (IMS:INT = %d:%d)!
Line 11727: [LTE L1LC DSL1RC] Check the scenario!
Line 11729: [LTE L1LC DSL1RC] 3. Period of RF change: mode: %d (IMS:INT = %d:%d)!
Line 11794: Set Scheduled/Requested RAT [%d], srlte_support = %d
Line 11811: Get Scheduled/Requested RAT [%d]
Line 11832: Start of %s(), McgStackId(ST%d), ScgStackId(ST%d)
Line 11852: [NRDS] request NR to change : 2rx -> 4rx
Line 11859: [4G_DRDS] L1LC_ProcEdvRrmHoldMsg - PendingFromSetDlFreq!!!
Line 11868: [4G_DRDS] L1LC_ProcEdvRrmHoldMsg - PendingFromSearchReq!!!
Line 11881: [4G_DRDS] L1LC_ProcEdvRrmHoldMsg -PendingFromMeasReq[%d]!!!
Line 11888: [4G_DRDS] L1LC_ProcEdvRrmHoldMsg -IsDuringMeas[%d]!!!
Line 11894: [4G_DRDS] !!! pNextMeasElem is NULL !!!
Line 11930: [4G_DRDS] DrxConfirmInd: 4G_DRDS end, Reset CdrxRecoveryFlag(%d)
Line 11945: [4G_DRDS] Processing the Saved RRM message after eDV end 
Line 11951: End of %s()
Line 11974: [4G_DRDS] @%s (%d)
Line 12033: [4G_DRDS] DEACTIVATED From DR_State(%d) /SendRrmMeasScheduleInd ===
Line 12037: Stop DrdsAbnormalCheckTmr
Line 12106: [EMCP_dbg(_ProcEdvEnd)]McgSt(ST%d): num_of_scell(%d),scell(%d),scg+inter(%d),ConnDR_State(%d)
Line 12165: [NRDS] request NR to change : 2rx -> 4rx
Line 12206: [FEDV] Change MCG ST (%d -> %d)
Line 12235: [EDRDS] end eDRDS RFAPI_SetRfBandList: (CC%d) rx_mode(%d)
Line 12241: [EDRDS] end eDRDS RFAPI_SetRfBandList: (CC%d) rx_mode(%d)
Line 12302: [LTE L1LC] L1LC_DsdsStartPendedMeas[IsMeasReqPending:%d][RfAvailable: %d][Is_Drx_Wakeup_ongoing: %d]!!!
Line 12314: [LTE L1LC] Pended NR meas element[%d] cannot be picked as NR RF resume is in progress
Line 12328: [LTE L1LC] PendingFromIsDuringMeas[%d]!!!
Line 12334: [LTE L1LC] !!! pNextMeasElem is NULL !!!
Line 12375: [LTE L1LC] Do not grant resource as DR-DS is active
Line 12430: [4G_DRDS] HALDRX_CheckEdvStackOrder : don't eDRDS because SCG is in weak signal area
Line 12434: [EDRDS] Can't eDRDS due to ARFC ( ARFC: %d)
Line 12463: remain time to other stack WakeupIntrTimer (%d)
Line 12476: remain time to other stack PagingReqTimer (%d)
Line 12506: remain time to other stack PagingReqTimer (%d)
Line 12520: [LTE L1LC DSL1RC] [4G_DRDS] Remain time to other stack's paging timing (%d)
Line 12592:  No Pending LMAC operation for L2
Line 12600: L1LC_DsdsPerformRFRelease count(%d), cipher pending(%d) Decipher Pending(%d)
Line 12610: Cipher/Decipher Reach Max Count(%d)
Line 12633: [L1LC] L1LC_ResumePended4RxUpdate
Line 12694: [Debug] L1LC_UpdateL1tunnelStackIdForPendingCase : Set NrInfoReqPath  = %d
Line 12699: [Debug] L1LC_UpdateL1tunnelStackIdForPendingCase : Set NrInfoReqSearch  = %d
Line 12704: [Debug] L1LC_UpdateL1tunnelStackIdForPendingCase : Set NrInfoReqMeasure  = %d
Line 12709: [Debug] L1LC_UpdateL1tunnelStackIdForPendingCase : Set NrInfoReqPathModify  = %d
Line 12716: [Debug] L1LC_UpdateL1tunnelStackIdForPendingCase : Set NrRfGrantReq  = %d
Line 12722: [Debug] L1LC_UpdateL1tunnelStackIdForPendingCase : Set NrRfUpdateReq  = %d
Line 12760: [Debug] L1LC_CheckL1tunnelStackId(INFO_CNF) : Set StackId as NrInfoReqPath  = %d
Line 12766: [Debug] L1LC_CheckL1tunnelStackId(INFO_CNF) : Set StackId as NrInfoReqSearch  = %d
Line 12772: [Debug] L1LC_CheckL1tunnelStackId(INFO_CNF) : Set StackId as NrInfoReqMeasure  = %d
Line 12778: [Debug] L1LC_CheckL1tunnelStackId(INFO_CNF) : Set StackId as NrInfoReqPathModify  = %d
Line 12784: [Debug] L1LC_CheckL1tunnelStackId(INFO_CNF) : Set StackId as gHALSC_L1tunnelStackId  = %d
Line 12793: IsEndcStack(%d)
Line 12802: [Debug] L1LC_CheckL1tunnelStackId(4G_INFO_REQ) : Set StackId as StackId = %d
Line 12809: [Debug] L1LC_CheckL1tunnelStackId(default) : Set StackId as gHALSC_L1tunnelStackId	= %d
Line 12861: [NRDS] NR sleep gets over before LTE paging done, so dont change HAL paging state to INIT
Line 12906: [LTE L1LC DSL1RC] RF release >> Sleep state during Reconfig Pend
Line 12954: [NRDS] L1LC_NrdsProcSleepInd(%d)
Line 12985: [SADS] L1LC_NrdsProcSleepInd - Activating Scell was pended. process Activating Scell
Line 12999: [SADS] No pendedRfBandList due to no LTE/NR Modem ON in %s
Line 13012: [SADS] L1LC_NrdsProcSleepInd - LTE SUSPEND
Line 13033: [NRDS] L1LC_NrdsProcWakeupInd(%d)
Line 13045: [SADS] L1LC_NrdsProcWakeupInd - LTE SUSPEND
Line 13164: [NRDS] L1LC_NrdsRecalcAutoPause - eDV active case. return 0     - n.c
Line 13171: [NRDS] Gap ongoing do not check for DR or eDRDS feasibility to avoid RF band update
Line 13188: [NRDS] Set AutoPauseTime to 0 (DR_ADDED:%d, eDRDS_Avail:%d)
Line 13194: [NRDS] Set AutoPauseTime to 0 (pLTE_OHE->IsNr4RxBlockDrds is TRUE)
Line 13201: [NRDS] Set AutoPauseTime to 0 (pLTE_OHE->SemiDrds_Available is TRUE)
Line 13210: Don't change SemiDrds_Available(%d) value because value was set in EPT expired function.
Line 13217: [NRDS] Set AutoPauseTime to 0 (DR_ADDED:%d, eDRDS_Avail:%d)
Line 13225: [NRDS] Set AutoPauseTime to 0 (DR_ADDED:%d, eDRDS_Avail:%d)
Line 13235: [NRDS] LTE already stopped autopause timer. Set AutoPauseTime to 0 (DR_ADDED:%d)
Line 13240: [NRDS] L1LC_NrdsRecalcAutoPause : %u -> %u
Line 13246: [NRDS] NR EPT time updated (%u->%u)
Line 13293: [SADS] Same EARFCN case on SET_DL_FREQ_REQ.(current:%d, SetDlFreqReq:%d)
Line 13352: [SADS] Should req to SRL1RC for all meas (meas_mode %d)
Line 13360: [SADS] Signaling when DR >> update to DSDS
Line 13390: [SADS] SET RfRequestForDR (%d) -> (%d)
Line 13412: [SADS] SET other stack RfRequestForDR (%d) -> (%d)
Line 13435: [SADS] LTE-LTE >> Do not RfRequestForDR (%d)
Line 13470: [SADS] SET SADRAvailable (%d) -> (%d)
Line 13501: [SADS] SET bandlist (%d,%d)
Line 13525: [SADS] bandlist (0: %d, 1)
Line 13574: [SADS] UPDATE bandlist
Line 13611: [SADS] SET channelConfigured (%d) -> (%d)
Line 13658: [SADS] GetChannelConfigure(%d) 
Line 13684: [SADS] SET ULCA (%d) -> (%d)
Line 13781: [SADS] SET LteReconfigPend %d -> %d
Line 13798: [SADS] Get LteReconfigPend(%d) 
Line 13818: [SADS] SET LteWakeupPend %d -> %d
Line 13835: [SADS] Get LteWakeupPend(%d) 
Line 13854: [SADS] Get OtherStack LteWakeupPend(%d) 
Line 13872: [SADS] SET LteIdleSleepPend %d -> %d
Line 13889: [SADS] Get LteIdleSleepPend(%d) 
Line 13909: [SADS] SET LteConnSleepPend %d -> %d
Line 13926: [SADS] Get LteConnSleepPend(%d) 
Line 13945: [SADS] SET LteSuspendPend %d -> %d
Line 13962: [SADS] Get LteSuspendPend(%d) 
Line 14089: [SADS] Restore Ulconfiguration Start
Line 14092: [SADS] Restore Ulconfiguration >> RFAPI_SetChannelFrequency(ul_freq:%d)
Line 14122: [SADS] Restore RFAPI_PowerOnTxPath
Line 14127: [SADS] Restore Ulconfiguration End
Line 14146: [SADS] RrmSaveMsg is Null
Line 14157: [SADS] RrmSaveMsg is not MEASURE_REQ
Line 14169: [SADS] Inter Band Measure REJECT >> Update Band List to valid, SADRAvailable(%d)
Line 14192: [SADS] During disable (SADR -> DS)
Line 14194: [SADS] SA ONLY
Line 14217: [SADS] Tx Set IsTxWaitResponse(%d -> %d)
Line 14234: [SADS] Tx GetTxRequestResponse(%d)
Line 14253: [SADS] Tx Set TxRequestResponse(%d -> %d)
Line 14274: [SADS] Tx Set pLTE_OHE->IsTxAvailable(%d -> %d)
Line 14297: [SADS] Tx Set NeedTxReconfig (%d->%d)
Line 14320: [SADS] Tx is Available
Line 14326: [SADS] Tx is Unavailable
Line 14354: [SADS] Tx Set IsTxReqSentBeforeSetScell (%d->%d)
Line 14367: [SADS] Tx Get IsTxReqSentBeforeSetScell (%d)
Line 14398: [SADS] Tx Save req_id(0x%x) Message (0x%x) >> [L1TX(0x%x), L2TX(0x%x)] 
Line 14414: [SADS] Set IsNrResumedPended (%d->%d)
Line 14428: [SADS] Get IsNrResumedPended (%d)
Line 14454: [SADS] L1LC_ReConfigL1LCTx
Line 14464: [SADS] Tx Reconfig >> After PAUSE
Line 14469: [SADS] Tx Reconfig >> LTE CONN
Line 14474: [SADS] Tx Reconfig >> Rach REJECTED before
Line 14479: [SADS] Tx Reconfig >> There is L2 msg pedding
Line 14484: [SADS] Tx Reconfig >> There is L1TX req
Line 14496: [SADS] Tx Reconfig >> MTM Mode
Line 14505: [SADS] Tx Reconfig >> Do not need Reconfig
Line 14518: [SADS] Tx Reconfig >> delayed Reconfig1
Line 14523: IsTxReqSentBeforeReconfig = 0
Line 14528: [SADS] Tx Reconfig >> delayed Reconfig2
Line 14554: [SADS] Tx IsSrifTxReqEnable(%d)
Line 14594: [SADS] Tx InitSrifTxReq
Line 14630: [SADS] Tx Not Request to SRIF >> Modem Power OFF(%d), gDrx_ActiveRat(%d)
Line 14637: [SADS] Tx Not Available, req_id(0x%x) TxSaveMsg(0x%x)
Line 14652: [DRDS]L2 TX_REQ(req_id=%d) @SCG stack. SCG needs to get RF_GRANT first after DRDS deact in order to get TX_GRANT.
Line 14693: [SADS] REJECT >> Measurement (%d), or wakeup (%d) ongoing RETURN!!!
Line 14698: [SADS] REJECT >> Clkest is ongoing, RETURN!!!
Line 14703: [SADS] REJECT >> Don't RF cause update until paging rcv intr !!!
Line 14710: [SADS] Set Pause flag >> Can not process REJECT response
Line 14715: [SADS] WAIT >> Wait the SRL1RC grant 
Line 14748: [SADS] RF Req >> No reason so Masking Check(0x%x), result(%d)
Line 14761: [SADS] SADR is broken, Release measure resource
Line 14765: [SADS] RF Req >> RequestReason(%d)
Line 14772: [SADS] RF Req >> RequestReason(%d), skip SendSrIfReq.
Line 14794: [4G_DRDS] Remove RFband of SCG from RFbandlist due to MIMO conflict
Line 14818: [Bandlist] L1LC_CheckRFBandupdateForScellConfig(numCC:%d) start
Line 14835: [Bandlist] Same EARFCN for Scell exist. Skip checking this earfcn(%d)
Line 14864: [Bandlist] L1LC_FindRfPathForDrBand (earfcn : %d)
Line 14871: [Bandlist] DR RF band(%d)
Line 14908: [Bandlist] L1LC_RemoveDrBandList : wrong operation during DRDS!
Line 14912: [Bandlist] L1LC_RemoveDrBandList : release_rf_path(%d).!!!
Line 14914: [Bandlist] L1LC_RemoveDrBandList : wrong RF path(%d). skip!!!
Line 14944: [Bandlist] L1LC_RemoveDrBandList : wrong RF path(%d). skip!!!
Line 14947: [Bandlist] L1LC_RemoveDrBandListAll(%d) : num(%d) / release_rf_path(%d)!!!
Line 14949: [Bandlist] RF_Set_CA_Release : release_rf_num(%d)
Line 14981: [DS_OPT] gL1lc_DsdsDB.MeasState = %d -> %d
Line 14993: [DS_OPT] gL1lc_DsdsDB.SrchState = %d -> %d
Line 15004: [DS_OPT] Stop abnormal timer. Remain time = %dms
Line 15013: [DS_OPT] Start abnormal timer. Remain time = %dms
Line 15055: [NRDS] pend L1LC_DrxProcConnSleepReq - NrdsSleepState(%d)
Line 15148: [NRDS] 4G_NR_INFO_REQ : PCC NR band (%d) added
Line 15164: [NRDS] 4G_NR_INFO_REQ : SCC NR band[%d, N%d] added
Line 15178: [NRDS] 4G_NR_INFO_REQ : add SCC NR band[%d, N%d] to dsds DB[%d, N%d]
Line 15185: [NRDS] 4G_NR_INFO_REQ : find starting point of NR CC (%d)
Line 15223: [Refarming] 4G_NR_INFO_REQ : Path REQ (NrBand[CC:%d] : %d), remove Inter-Freq BAND(same refarming band)
Line 15258: [Refarming] 4G_NR_INFO_REQ : Path REQ (NrBand[CC:%d] : %d), remove Inter-Freq BAND(same refarming band)
Line 15329: [NRDS] 4G_NR_INFO_REQ : Path REQ (NrBand : %d), remove DR BAND(unable ENDC)
Line 15360: [RFFE Debug][NR_INFO_REQ] type(%d) IsEndc(%d) PCellTxOn(%d) cc_occupied(0x%x) AsStatus(%d)
Line 15363: [RF] Consider TX_SWAP in case of ENDC Activation(%d) (Band:B%d/N%d)
Line 15425: [NRDS] 4G_NR_INFO_REQ : ENDC_CGI - RF_Check_CA_Support(DR_BAND) : Source_Band[%d]: rat(%d), band(%d), earfcn(%d)
Line 15430: [NRDS] 4G_NR_INFO_REQ : ENDC_CGI - RF_Check_CA_Support : Source_Band[%d]: rat(%d), band(%d), earfcn(%d)
Line 15456: [NRDS] 4G_NR_INFO_REQ : ENDC_CGI - RF_Check_CA_Support : Target_Band[%d]: rat(%d), band(%d)
Line 15496: [NRDS] 4G_NR_INFO_REQ : ENDC_CGI - RF_Check_CA_Support(without DR_BAND)
Line 15503: [NRDS] 4G_NR_INFO_REQ : ENDC_CGI (NrCgiBand : %d), remove DR BAND(unable NR 4Rx)
Line 15571: [NRDS] 4G_NR_INFO_REQ : DR_PATH (NrBand : %d), remove DR BAND(unable NR 4Rx)
Line 15575: [NRDS] 4G_NR_INFO_REQ : DR_PATH (NrBand : %d), DR BAND already not exist
Line 15716: [4GDS] Conn - Conn >> Update Rf Cause to PSCALL
Line 15836: ----- CC(%d) SCELL_Deact IPC : %d
Line 15858: ----- CC(%d) SCELL_ACT IPC : %d
Line 15885: ----- Demode CC(%d) waiting SCELL_ACT Confirm
Line 15959: ----- Pend:_AddRemoveSCellForSCG >> AddRemoveSCellForSCGPended(%d)->(%d)
Line 15988: SET ST%d RF_Available %d -> %d,[%d][%d]
Line 16063: [4GDS] dsds_db->IsWaitResponse(%d -> %d)
Line 16124: [4G_DRDS] L1LC_UpdatePendedRfBandlistDueToSADR - PendingFromSetScellNtf!!!
Line 16149: [warning] RemainEarlyPasueTime under EPT_PROCESS_MARGIN (remaining_time:%d)
Line 16203: [SADS] bandlist (0: %d, 1), isUlCa(%d)
Line 16212: [SADS] bandlist (%d: %d, %d)
Line 16225: %s: isBandListNotUpdatedDueToSADR [%d -> %d]
Line 16267: [4GDRDS] Extend gL1LC_DrdsAbnormalCheckTmr (CheckFeasibilityTimer)
Line 16270: gL1LC_DsdsCheckReleaseFeasibilityTmr started for %d (ms)
Line 16292: [ST%d] RfReqState (%d -> %d)
Line 1160: [LTE L1LC DSL1RC] IsReConfigL1C(%d)
Line 1229: [LTE L1LC DSL1RC] PagingRequestTimer Stopped!
Line 1246: [LTE L1LC DSL1RC] Retrigger MIB_READ!
Line 1256: [LTE L1LC DSL1RC] MIB_READ will be triggered after processing PbchDecodeReq in RRM Saved Msg!
Line 1260: [LTE L1LC DSL1RC] Retrigger SI_READ!
Line 1290: [LTE L1LC DSL1RC] Pend TX_RF_STATUS_IND
Line 1306: [SADS] Reset SaDrBreakInLteTddIdle
Line 1314: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Pre Meas Processing - Meas Config(%d)!!!
Line 1319: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSetDlFreq!!!
Line 1336: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSearchReq!!!
Line 1371: [SADS] L1LC_StartResumeProcedure >> There is L2 msg pending
Line 1684: gL1LC_DsdsReleaseAndReqTmr Timer stop
Line 1690: [LTE L1LC DSL1RC] gDrx_SocWarmupTimerState = %d
Line 1698: [LTE L1LC DSL1RC] Response Recieved while in DRX Sleep!!! IsWakeupOnGoing: %d, IsWakeupDelayed: %d
Line 1718: [PG] wakeupintrTmr(%d), Lwakeup_Intr(%d) 
Line 1727: [NRDS] IsDrxSleep is TRUE. But HalWakeupStartInd is TRUE. Do StartResumeProcedure
Line 1738: [NRDS] SIGNALLING_IND was processed during LTE sleep and NR active.
Line 1748: [NRDS] (SW sleep case) After DS operation, Dmover release / init is required.
Line 1795: [LTE L1LC DSL1RC] Do not pause RF as some procedure is ongoing Is_Drx_Wakeup_ongoing[%d] DsdsMask[0x%x]
Line 1805: [LTE L1LC DSL1RC] L1LC_ProcMmcIf_RFUnavailableRsp DsdsMask[0x%x]!!!
Line 1833: [4G_DRDS] Skip Edv Deactive for RF waiting
Line 1850: [4G_DRDS] No more procedure is needed to release RF in ScgStackId (%d)
Line 1870: [LTE L1LC DSL1RC] In CONN mode, RF not available... DSDS Timer started for 10s!!!
Line 1877: [LTE DS]Start RetryTimer(%d)!!
Line 2915: [LTE L1LC DSL1RC] ILM pause is not done since measure activity is pending(%d) or wakeup procedure(%d)!!!
Line 2929: [LTE L1LC DSL1RC] In CONN mode, RF not available... DSDS Timer started for 10s!!!
Line 2937: PAUSE in CGI case
Line 2982: [LTE L1LC DSL1RC] Mandatory SIBs are decoded, execute Pause
Line 2992: [LTE L1LC DSL1RC] PauseFlag(%d) + SignalMask(yes) + gCurProc(%d)
Line 3012: [LTE L1LC DSL1RC] PauseFlag(%d) + SignalMask(yes) + gCurProc(%d). Try RF request.
Line 3018: [LTE L1LC DSL1RC] ILM pause is not done since activity (0x%x) is pending!!!
Line 3203: [LTE L1LC] pause_ind action
Line 3222: [4G_DRDS] Deactivate 4G_DRDS as PauseInd is received in SCG stack!
Line 3226: Stop DrdsAbnormalCheckTmr
Line 7739: [LTE L1LC DSL1RC] Release RF during SI_READ!
Line 7750: [LTE L1LC DSL1RC] Paused during Conn SIB READ!
Line 7790: RTG(ST:%d) is saved: SFN(%d), TTI(%d) RTGoffset(%d), ReleasePalTime(%d)
Line 7836: [Debug] ConfigRxFilter - for fix
Line 7853: Early Pause Timer stop
Line 7860: gL1LC_DsdsReleaseAndReqTmr Timer stop
Line 7869: [SADS] Set Prev Rat to NR
Line 7944: Don't update RF cause for otherstack(Is_ResumeReq(%d), IsWaitResponse(%d), remain_time(%d))
Line 7949: Don't update RF cause for otherstack as other stack BPLMN is in progress
Line 7959: [SC] CC%d: earfcn(%d), type(%d), pair_cc(0x%04x), tdp_state(%d), rx_mode(%x), rf_path(%x)
Line 8332: [LTE L1LC DSL1RC] To retrigger pended Meas/Srch(%d), make a curMode NULL
Line 8342: [LTE L1LC DSL1RC] Paused during SI_READ!
Line 8352: [LTE L1LC DSL1RC] Paused during Conn SIB READ!
Line 8399: RTG(ST:%d) is saved: SFN(%d), TTI(%d) RTGoffset(%d), ReleasePalTime(%d)
Line 8446: [Debug] ConfigRxFilter - for fix
Line 8488: [SADS] Set Prev Rat to NR
Line 8511: [SC] CC%d: earfcn(%d), type(%d), pair_cc(0x%04x), tdp_state(%d), rx_mode(%x), rf_path(%x)
Line 8274: gL1LC_DsdsReleaseAndReqTmr started for 500ms
Line 8282: Not early pause case. Check other stack's PagingRequestTimer / PreponePagingRcvIntr
Line 8297: Don't update RF cause for otherstack(Is_ResumeReq(%d), IsWaitResponse(%d), remain_time(%d))
Line 8304: Early pause case. Don't update other stack's RF cause
Line 9257: [4G_DRDS] Do early pause! 4G_DRDS is not activated. RACH is ongoing [%d][%d][%d][%d] 
Line 9261: [4G_DRDS] 4G_DRDS is not possible due on-going PBCH. Hence perform Pause
Line 9265: [4G_DRDS] 4G_DRDS is not activated due to SCG stack is paused. Do early pause! 
Line 9283: [4G_DRDS] Can not enable 4G_DRDS because CC = (%d)
Line 9287: [4G_DRDS] 4G_DRDS is not possible due to RRC flag and hence perform Pause
Line 9293: [4G_DRDS] eDV_AvailableforEPT(%d -> %d)
Line 9295: [4G_DRDS] set EptCheckForARFC(%d)
Line 9311: [4G_DRDS] Can not enable 4G_DRDS because CC = (%d)
Line 9331: [4G_DRDS] pLTE_OHE->SemiDrds_Available (%d)
Line 9341: [4G_DRDS] pLTE_OHE->SemiDrds_Available (%d)
Line 9342: [4G_DRDS] Can't Semi DRDS (%d, %d, %d)
Line 9351: [4G_DRDS] Don't do early pause ! EDV_Active [%u] EDV_State [%d]
Line 9370: [NRDS] request NR to change : 4rx -> 2rx
Line 9402: [LTE_DSDS] LTE Conn-Conn state and MeasPending is TRUE. Stack requesting for early pause is not LTE. Current stack is paused
Line 9408: [LTE_DSDS] LTE Conn-Conn state and MeasPending is TRUE. Current stack was paused before. Hence skip EPT for now !
Line 9413: [LTE_DSDS] LTE Conn-Conn state and MeasPending is TRUE. Current stack is paused this time!
Line 9423: [LTE_DSDS] Other ST is in Conn state, and Stack status is Active! False E.P.T!
Line 9434: [LTE_DSDS] e.p.t expired, pause done not sent. Send RF request as IsRfCauseUpdatePending is TRUE, RF Requet[%s]
Line 9466: gL1LC_PbchMode[%d]
Line 9474: Send Pause done on 4G BCH conflict with Other SIM IsLastRejectOnConflict[%d]
Line 9480: Do not send pause Done as there is 4G BCH conflict with Other SIM IsLastRejectOnConflict[%d]
Line 9488: Send Pause done on 4G BCH conflict with Other SIM IsLastRejectOnConflict[%d]
Line 9494: Do not send pause Done as there is 4G BCH conflict with Other SIM IsLastRejectOnConflict[%d]
Line 9517: [LTE_DSDS] Volte is ongoing [%d]. Hence not doing pause even Early timer expired
Line 9523: [LTE_DSDS] PDCCH Ordered RACH is ongoing, do not perform Pause done
Line 9536: [MBMS RF Throttling] randValue(%u)
Line 9541: [MBMS RF Throttling] Do not send pause done confirm, randValue(%u)
