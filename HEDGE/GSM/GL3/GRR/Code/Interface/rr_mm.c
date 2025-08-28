Line 505: Dtm: Indicate CellUpdateRequired %d 
Line 523: DTM: PacketServiceType %d
Line 533: GRR_MM_DEDI_CELL_IND LAI(%x %x %x %x %x)
Line 564: GRR_MM_INITIAL_PLMN_CNF:Fail
Line 608: INITIAL_PLMN_CNF:Success -> Scell Lai(%x,%x,%x,%x,%x)
Line 663: GRR_MM_NO_CELL_IND
Line 762: Release to MM (Cause:%x)
Line 772: GRR=>GRR_MM_REL_CNF
Line 818: GRR=>GRR_MM_REL_IND
Line 829: GRR=>GRR_MM_ABORT_IND (Cause:%d)
Line 1296: GRR_MM_PAGE_IND (Cause:%d Identity:%d)
Line 1426: rr_HandlePagingReq: Paging for Serv Cell PseudoLength(%d) 
Line 1443: Skipped P1 Rest Octets:  pktPagingInd1:%d,  pktPagingInd2:%d
Line 1459: Handling PCK_NOTI
Line 1502: rr_HandlePagingReq: IMSI matched 
Line 1526: CS paging for us - send Paging Indication to GMM 
Line 1580:   P-TMSI matched
Line 1685:  Decoder error, msg_type(0x%x)
Line 1770:  Error Possible with MobId[0] :%d 
Line 1911: Dummy PACKET PAGING REQUEST MSG for PRIVACY at BT
Line 1983: EST_REQ RecSysInfo = 0x%x/  rr_SI1_needed = 0x%x
Line 1988: Store EST_REQ - Waiting for Idle Cnf
Line 2174:  Clear  rr_BcchReadArfcn in EST REQ (%d)
Line 2224: GRR_MM_EST_REQ(TypReq %x) - rr_State : 0x%x
Line 2231: Check DSRC state to know if CS EST is possible 
Line 2236: WAIT for SRRC gran to proceed with NAS signaling 
Line 2250: rr_NewIdleToL1 & Store EST_REQ - Delayed for REEST, rr_IdleReqState:%d
Line 2257: Stop Old Reselection and start Reselection due to Re-estb
Line 2279: Store EST_REQ - Waiting for Idle Cnf
Line 2291: Store EST_REQ - Waiting for Cell Cnf
Line 2302: Store EST_REQ - PostReselFailReadNBCCH  is set %d
Line 2315: Store EST_REQ - Cell Reselection in progress (Reason %d)
Line 2330: EST_REQ - CCO (%d) or IRAT (%d) in progress:Type (%d) 
Line 2334:  Go EST_REQ - though PCCO not cleared
Line 2352: Store EST_REQ - Delayed for REEST
Line 2363: EST_REQ RecSysInfo = 0x%x rr_SI1_needed = 0x%x
Line 2372: Store EST_REQ - Need SI
Line 2498: No LAU
Line 2518: CellSelec: SRCH CMPLTD
Line 2560: REORG Mode Avoid DSRC to go to IDLE after CELL RSP
Line 2859: Dedi: Bar the ARFCN received from NAS: %d
Line 2895: Bar the ARFCN received from NAS: %d
Line 3046: GRR_MM_UPD_FLAI_LIST_REQ : %d
Line 3130: MPH_STOP_NC_MEAS_REQ
Line 3191: [CandSrch] rr_RecGmmAssignReq: TlliType(%d) 
Line 3244: GRR_GMM_START_DRX_REQ
Line 3268: Partial Search will be performed in PTM
Line 3271: rr_AttachCompleted -- UARFCN_SCAN_TRIGGERED
Line 3281: UARFCN_SCAN_TRIGGERED SKIPPED % %
Line 3309: GRR_GMM_STOP_DRX_REQ
Line 3316: Suspend Acquisition Guard Timer
Line 3323: Start SysGuardTimer
Line 3361: GRR_MM_INIT_REQ Src:%x
Line 3458: BPLMN: GRR_MM_BACKGND_TIMER_IND. Sleep_Time=%ld ms, Start_Time = %ld 
Line 3492: BPLMN:Error:NonDrx CsNonDrx (%d) PsNonDrx(%d) rr_NonDrxTimInProg(%d) AttachInProg(%d)
Line 3512: BPLMN:Error: BPLMN State Mismatch!
Line 3564: GRR_MM_DRX_UPD_REQ in invalid state, IdleReqState:%d
Line 3573: BPLMN:Error:NonDrx CsNonDrx (%d) PsNonDrx(%d) rr_NonDrxTimInProg(%d) GmmAttachInProg(%d) AccInProg(%d) DlTbfProc(%d)
Line 3580: rr_WaitIdleCnfForImmResel is TRUE, Donot handle UPD DRX REQ
Line 3593: WAIT for SRRC response
Line 3630: BPLMN: Wait for IDLE_CNF
Line 3641: rr_NewIdleToL1 rr_IdleReqState:%d
Line 3686: BPLMN: Unexpected BACKGND_START_IND from MM
Line 3705: BPLMN: GRR_MM_BACKGND_START_IND: Sleep_Time:%ld, Start_Time=%ld
Line 3711: BPLMN:Error: RR state is NOT RR_RAT_SUSPEND_NULL!
Line 3719: BPLMN:Error:! Waiting for SUSPEND_CNF!
Line 3732: BPLMN:Error: Unexpected Error!
Line 3755: BPLMN:Error:!Invalid BPLMN State
Line 3807: BPLMN: RR_BPLMN_DRX_TIMER Sleep_Time (%d)ms
Line 3826: BPLMN: Sleep_Time (%ld)ms
Line 3911: BPLMN: RR_BPLMN_DRX_TIMER Sleep_Time (%d)ms
Line 3930: BPLMN: Sleep_Time (%ld)ms
Line 3953: BPLMN:Error: Unexpected Error! 
Line 3977: BPLMN: GRR_MM_BACKGND_STOP_REQ
Line 4019: SI2qInd: %d <-Org %d
Line 4025: SI2qInd: NeededSI
Line 4033: SI2qInd: %d
Line 4067: GRR_MM_MODE_UPDATE_IND: EPD_Mode Changed from %d to %d
Line 4071: EDP mode is Hedge or Multimode:%d
Line 4077: LTE Support is  set by EPD, rr_EutranMeasCtrlFromLte:%d made TRUE
Line 4082: LTE Support is reset by EPD, rr_EutranMeasCtrlFromLte:%d made FALSE
Line 4117: Warning! rr_ServCell=NULL
Line 4147: Warning! rr_ServCell=NULL
Line 4182: GRR_MM_LCS_FREQ_AID_REQ start =%d
Line 4226: GRR_MM_SRVCC_HO_CNF cause (%d)
Line 4557: SRVCC Req TO GSM %d
Line 4562: Save IRAT Param and Wait for SRRC grant
Line 4615:  IR HO Cell creation error
Line 4625:  IR HO Message type not valid
Line 4637:  IR HO Empty GSM message
Line 4641:  IR HO GSM message pointer is NULL
Line 4668: GRR_MM_HANDOVER_TYPE_IND (%d)
Line 4690: Send MM GRR_MM_CGI_HOLD_IND
Line 4717: Send MM GRR_MM_CGI_STOP_CNF ANR Rxlev %d
Line 4740: MM_GRR_CGI_STOP_REQ: STOP ANR : ANR Ongoing (%d) 
Line 4746: Anr: ANR procedure was already stopped. Send confim now
Line 4762: MPH_SUSPEND_RAT_REQ 
Line 4767: MPH_SUSPEND_RAT_REQ already sent. Avoid sending another Req
Line 4794: Anr: MM_GRR_START_CGI_IND: Sleep_Time:%d Start_Time:%ld
Line 4798: Anr: RR state is NOT RR_RAT_SUSPEND_NULL!
Line 4813: Anr Error  Waiting for SUSPEND_CNF
Line 4823: BckGrndMode Anr/BPLMN:Error: Unexpected Error!
Line 4834: BckGrndMode Anr/BPLMN:Error:!Invalid BPLMN State
Line 4843: Anr Sleep_Time (%d)
Line 4849: BckGrndMode Anr/BPLMN: Sleep_Time Less than %d: Not enough
Line 4883: BckGrndMode Anr/BPLMN:Error: Unexpected Error! 
Line 4921: CS Signalling Start, This ILM is not used
Line 4926: rr_GrrStartDsSignaling: Signaling Type %d, rr_DsdsNasSignalingOngoing[StackId] : %x
Line 4930: PS/IMS NAS SIG is triggered from MM
Line 4943: PS Signalling start, Resume RLC
Line 4993: CS Signalling Start, This ILM is not used
Line 4998: rr_GrrStopDsSignaling: typeofproc %d, rr_DsdsNasSignalingOngoing : %x
Line 5005: CS Signalling Stop, ILM is not used
Line 5024: Moving SRRC state to PS DATA  after PS NAS SIG Completion
Line 5029: SIG STOP received in rr_State(%d)
Line 5034: Suspend RLC/MAC, NAS signaling is ended
Line 5039: SIG END received in Idle State
Line 5082: rr_GrrHandlePsSupportInd: PsSupported: %d
Line 5098: rr_GrrHandlePsSupportInd: PsSupported: %d
Line 5111: PS Service Disabled, Suspend RLC/MAC
Line 5116: Invalid Case: PS Support True came when GRR already on C-Tran mode
Line 5123: PS Service (%d) received in RR State (%d) rr_RlcSuspensionState (%d)
Line 5128: Resume RLC after DSDS Suspend 
Line 5281: rr_StopQrbProcedure
Line 5290: QRB: QRB STOP recieved in invalid state %d
Line 5317: QRB: GRR_MM_QRB_MODE_IND [Mode(%d)/0:STOP,1:START,2:FORCED], [QrbState(%d)/0:STOP,1:START,else:PENDING], [TargetRat: %d]
Line 5328: QRB: Start!
Line 5334: QRB: Start! Forced!
Line 5340: QRB: Unexpected QrbMode(%d)
Line 5345: QRB: Ignore! QRB procedure is ongoing
Line 5353: QRB: Ignore! QRB procedure is pending
Line 5358: QRB: Unexpected QrbState(%d)
Line 5369: QRB: Ignore! QRB procedure is not running
Line 5373: QRB: Stop!
Line 5382: QRB: Stop! QRB procedure is pending
Line 5387: QRB: Unexpected QrbState(%d)
Line 5395: QRB: Unexpected QrbMode(%d)
Line 5436: QRB: Send GRR_MM_QRB_ABORT_IND(QrbState %d)
Line 5525: GRR_MM_UPDATE_DUPLEX_MODE_IND(%d->%d)
Line 5545: GRR_MM_POWER_OFF_IND
Line 5643: Invalid Band in function: rr_SendMmSupportBandListInd
Line 5666: Send GRR_MM_SUPPORT_BAND_LIST_IND(%d %d)
Line 5677: [CandSrch] rr_SemRecCandRplmnScanRsp: Result(%d)
Line 5692: [CandSrch] rr_SendCandRplmnScanReq rr_State(%d)
Line 5788: GRR_MM_BATT_CAPACITY_SET_REQ battCapacity = %d
Line 5814: GRR_MM_DOMAIN_AVAILABILITY_IND Domain = %d
Line 5840: GRR_MM_RR_STATE_IND BandId = %d, RrState = %d
Line 5903: EutranMeasCtrlFromLte:%d rr_UtranCapaCtrlFromNas:%d GsmDisabled:%d 
Line 5931: [AP_BASED_EMC] rr_ApBasedEmcMode(%d) 
Line 5947: [AP_BASED_EMC] LastCallFreq(%d)
Line 153: NoSvc variable is reset
Line 177: rr_CellInd->Lai %d %d %d %d %d
Line 185: RxLev(%d) rxev_min(%d) plmnState(%d)
Line 257: rr_ResumedForCsfbCall:%d NetworkMode:%d
Line 287: NwExtUtbf:%d
Line 290: DataResumption:%d
Line 367: GRR_MM_CELL_IND Type(%d) T3212(%d) Attach (%d) NMO(%d) AccessClassBarred(%d) EMC Barred(%d) FreshScanCellInd(%d)
Line 394: Band is changed... Stored EST REQ is freed
Line 398: Band is changed during ReEst... Stored EST REQ is freed
Line 428: rr_MMPlmnFreqSearchMode to RR_FULL_SCAN_SEARCH
Line 4266: candidateCellInfo afcPdm(%d)
Line 4275: candidateCellInfo[%d] band(%d) arfcn(%d) bsic(%d) fn(%d) qb(%d) net_fn(%d)
Line 4281: HO cell found in candidateCellInfo[%d], put it in MPH_MULTICTX_REQ
Line 4292: SRVCC HO from LTE  Arfcn:%d, rr_BandInd:%d, rr_band_type:%s
Line 4308:  IR HO Inconsistant BANDs
Line 4391: AfterTimeHopStatus(0x%x)/ BeforeTimeHopStatus(0x%x)
Line 4410: Ciphering Change on new channel
Line 4440: Non Synch Handover
Line 4446: Synch Handover
Line 4452: Pseudo Synch Handover
Line 4453: RTD = %d
Line 4459: Pre Synch Handover
Line 4483: SYNC with VCG
Line 4496:  IR HO Message error
Line 4518:  IR HO Hopping list error
Line 4528:  IR HO Cell creation error
Line 5159: rr_StartQrbProcedure (bForced(%d))
Line 5170: QRB: Pending! IRAT measurement is ongoing in L1
Line 5178: QRB: Pending! RLC suspension is ongoing
Line 5185: QRB: Pending! RLC suspension is triggered
Line 5190: QRB: Reject! RLC suspension is failed
Line 5201: QRB: Reject! IRAT measurement is ongoing in L1
Line 5248: QRB: Dtm release is ongoing %d
Line 5261: QRB: Reject! QRB START recieved in invalid state %d
Line 5469: QRB: rr_QrbEutranSacnStatus (%d)
Line 5503: QRB: Not initiated
Line 5707: [CandSrch] GuardT(%d), PeriodicT(%d), NAS Reg(%d) rr_state(%d)
Line 5710: [CandSrch] NeedSI2Q(%d), RxSI2Q(%d), EPD(%d) Earfcn cnt(%d)
Line 5715: [CandSrch] Abort: EPD:%d
Line 5720: [CandSrch] Abort: GRR_MM_DRX_UPD_REQ in invalid state, IdleReqState:%d
Line 5726: [CandSrch] Abort: PLMN:Error:NonDrx CsNonDrx (%d) PsNonDrx(%d) rr_NonDrxTimInProg(%d) GmmAttachInProg(%d) AccInProg(%d) DlTbfProc(%d)
Line 5738: [CandSrch] Abort: rr_InterRatStatus = %d
Line 5744: rr_ResumedForCsfbCall set, RPLMN SCAN not required
Line 5749: [CandSrch] No 4G Info in Si2Q Complete Set.. 
Line 5756: [CandSrch]  4G Info Present in Si2Q Complete Set.. Reset timers 
