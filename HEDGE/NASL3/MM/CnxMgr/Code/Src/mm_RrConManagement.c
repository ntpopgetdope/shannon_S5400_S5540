Line 296: Clearing Cell Congestion flag
Line 500: Timer MM_WFNWC is not started, Since GCF Mode is enabled 
Line 534: in case of 2G GSM only cell to 3G CS+PS cell, PS cell data should be processed
Line 894: URRC_MM_REL_IND came after REL_CNF while MM_WAIT_FOR_SCR_BEFORE_LAU time is running, perform LAU
Line 923: CS procedure is not CS CALL, not expected
Line 962: G2L redirection will be initiated.
Line 968: G2U redirection will be initiated.
Line 978: PS resumption failure in GSM, so ISR status change to deactivate & TIN to P-TMSI
Line 987: URRC_MM_REL_IND came faster than CC Release complete.. NW issue but we handle call release.. 
Line 1005: LAU is tried on MT CSFB procedure, but SETUP_IND didn't come. So, canceling QRB and wait for paging from 3G NW 
Line 1014: Message crossover: RR_MM_REL_IND ignored as MM has already requested release, await RR_MM_REL_CNF
Line 1131: LAU will be triggered on next cell indication
Line 1184: Cause Received RR_CELL_CONGEST 
Line 1190: Paging Rsp will be pended until CELL_IND
Line 1260: WARNING : REL_IND comes abnormally. MM triggers SMS's retrial by Setting cause as MM_EST_REQ_REJ_CAUSE_UNSPECIFIED
Line 1310: GRR indicated as No cell, so regard the previous CELL_IND as a new one and not waiting for CELL_IND
Line 1380:  CallDropCauseForDBGSCR = %d, CallDropTypeForDBGSCR = %d
Line 1393: MM Connection Lost due to No service
Line 1407: CS procedure is not CS CALL, not expected
Line 1428: LAU is tried on MT CSFB procedure, but SETUP_IND didn't come. So, canceling QRB and wait for paging from 3G NW 
Line 1476: Sending PagingResponse due to URRC_MM_REL_IND
Line 1520: Invalid Message in this Protocol State 
Line 1869: FD will be delayed until RAU completed
Line 1881: mm State = %d ; mm_GetDsDelayCsIdleEntry = %d
Line 1896: QRB New Design: mm_IsCsfb is set to FALSE
Line 1919: LAU is tried on MT CSFB procedure, but SETUP_IND didn't come. So, canceling QRB and wait for paging from 3G NW 
Line 1942: Unexpected event that MM connection exists and REL_CNF comes. Synchronizing MM/CC state
Line 1971: WARNING : this REL_CNF is duplicated one, so ignoring it
Line 2025: QRB State:%s
Line 2053: cRAU will be pended until GMM_REL_CNF + CELL_IND comes
Line 2114: mm_GetRrMmRelReqSentFlag = %d, so ingoring DATA_IND
Line 2213: Paging will be pended unitl SCR or CELL_IND
Line 2228: MT paging is received during PS detach, invoke local detach to avoid delay
Line 2268: SIM is opening status and MT cause is not SMS, so discard the PAGE_IND (cause :%d)
Line 2310: Paging with same type of ID comes -Waiting for call, but NW is still paging, so extend T3240 and wait for NW's response
Line 2316: Paging with different type of ID comes -Waiting for call, but NW is still paging, so extend T3240 and wait for NW's response
Line 2340: Current Paging is  for MT call , so ignoring previous paging for Low priority Signalling !!
Line 2519: NMO1 and GMM was attempting to update case.
Line 2530: Mobile Id is Valid -> O.K.....
Line 2544: TMSI is NOT Valid -> Paging Response Not Allowed.
Line 2549: Mobile Id is NOT Valid  -> Paging Response Not Allowed.
Line 2555: RAT suspension has been requested -> ...paging request ignored
Line 2560: SIM State is NOT Valid -> Paging Response Not Allowed.
Line 2565: UpdateStatus != MM_UPDATED && ServiceState() != MM_ATTEMPTING_TO_UPDATE -> Paging Response Not Allowed.
Line 2570: UpdateStatus == MM_NO_IMSI -> Paging Response Not Allowed.
Line 2575: Incorrect Plmn State, != MM_ON_PLMN -> Paging Response Not Allowed.
Line 2580: Current Mobile Operation Mode == MM_MOBILE_CLASS_C_PS -> Paging Response Not Allowed
Line 2585: Access Class Barred -> Paging Response Not Allowed.
Line 2590: CS Domain is Supported by Current Cell -> Paging Response Not Allowed.
Line 2595: Not Attached to CS Domain Yet -> Paging Response Not Allowed.
Line 2600: CS and PS detach procedure is in progress
Line 2605: MM State != MM_IDLE (Or) mm_RrMmRelReqSentFlag is TRUE -> Paging Response Not Allowed.
Line 2779: 
 IsCSFB: %d
Line 2859:  T3212 Timeout detected and probably LAU not triggered 	since MM_CELL_CONG_WAIT_3122_EXP_FLG was set, So performing T3212 expiry actions
Line 2944: Ignoring Sequence Number in mm_SendRrDataReqMsg. Current Sequence Number -> %d
Line 3057: WARNING : Not sending REL_REQ, because it is already sent before
Line 3633: FD will be delayed until RAU completed
Line 3676: Delay 2G QRB action under PLMN searching period as per LAU abnormal failure over max attempt count 
Line 3717: Paging will be retrieve
Line 3827: Trigeering LAU after Cs connection release 
Line 3919: EMER CALL: MM_CM_SERV_REJ_IMSI_UNK_FLG will be cleared later
Line 3945: MM_CM_SERV_REJ_IMSI_UNK_FLG: Set LAU_NEEDED flag to TRUE
Line 3977: QRB state:%s
Line 4130: QRB state:%s
Line 4209: Power off detach is pending Hence discarding LAU retrails
Line 4224: Not sending MM_CC_ERR_IND for attempting emer call.
Line 4322: Resetting TBF Release Actions
Line 4411: Not sending EST_ERR to CM, because the resource is already released
Line 4438: Changing RATs Due To RR Est Rej Cause, Please Wait..... !!!
Line 4455: Wait for RR Release Before Requesting a RAT Change ..
Line 4509: Resetting values in mm_PerformLocUpdAbnormalRelActions
Line 4585: LU procedure is failed due to U2L Inter rat reselection and LU should be re-tried on CELL IND..
Line 4597: Rat Change failure happened and LU procedure should be cancled..
Line 4609: Sim: %d, Compile RAT: %d
Line 4627: Location Update Triggered, during D to H handling
Line 4700: RR Rel Cnf Action = %x, CsDomainAccessIsAllowed =%d
Line 4873: No Action for the MM_QRB_FOR_PS_SWITHC_REL_CNF_ACTION RR Rel Cnf Action !! 
Line 4908: Invalid RR Rel Cnf Action (%x) in mm_InitRrRelCoordActionParams !! 
Line 4965: We will do RAU in REL_IND
Line 5084: RR release cause -> %s 
Line 5164: CmCause = %x  
Line 5285: CmCause = %x  
Line 5475: URRC EST REJ cause -> %s 
Line 5542: URRC release cause -> %s 
Line 5668:  Paging ID Type -> IMSI 
Line 5675:  Paging ID Type -> PTMSI 
Line 5682:  Paging ID Type -> IMEI 
Line 5689:  Paging ID Type -> TMSI 
Line 5708:  Paging ID Type -> IMSI 
Line 5715:  Paging ID Type -> PTMSI 
Line 5722:  Paging ID Type -> IMEI 
Line 5729:  Paging ID Type -> IMEISV 
Line 5736:  Paging ID Type -> TMSI 
Line 5743:  Paging ID Type -> NO ID 
Line 5959: QRB is triggered about 3G normal MT voice call. 
Line 6024: UrrcRelReqSentFlag is reset in mm_SendUrrcDataResumeOnGsmInd
Line 6035: 
Before Send %s in mm_SendUrrcDataResumeOnGsmInd
Line 6060: mm_GetEnableIratToLte = %d, mm_GetCcRedialing = %d, mm_GetQrbForCallAbort = %d, ,mm_GetQrbPendingForEutraEnabled = %d
Line 6062: mm_GetQuickRollbackG2LEnabled = %d, mm_GetG2LQrbEnableRPlmn = %d, mm_GetPendingQrbFromAP = %d, mm_GetIsCsfb = %d
Line 6087: Setting IS CSFB to False
Line 6098: QRB_G2L is triggered after L2G CSFB call or due to Eutra enabling after PS switching 
Line 6102: QRB_G2L is not triggered.
Line 6109: QRB_G2L is not enabled.
Line 6126: QRB_G2L is aborted by GRR.. 
Line 6147: QRB_G2L is triggered.  Mode = %d  :: 0 Stop  1 Start 2 QRB triggered by AP
Line 6162: Target Rat for qrb = %d ::0: QRB_RAT_LTE 1: QRB_RAT_NR
Line 6187: U2L QRB mode updated in RPLMN, Mode = %d  :: 0 Disabled  1 Enabled
Line 6289: mm_DecodeRrMmTbfStatusInd: PDP Context Status is %d %d
Line 6314: Tbf Status received: %d
Line 6343: mm_UmtsMode : %d in mm_SendMmRrcUpdateDuplexModeInd
Line 6479: PS Support %d, PDP Active %d 
Line 6516: DomainAvailable = %d 
Line 6562: Invalid RR Rel Ind Action (%d) 
Line 6628: RRC PDU Tx table entry %d has been reserved with PduId %04X...
Line 6633: ...for transmission of %s message
Line 6638: ...for transmission of a non-GMM message
Line 6644: ERROR: Table is already full...
Line 6672: PduId %04X confirmed as entry %d in RRC PDU Tx table
Line 6681: ERROR: PduId %04X does NOT match appropriate table entry...
Line 6687: ERROR: PduId submitted for confirmation has the value NOT_RRC_PDU...
Line 6711: Checking RRC PDU Tx table for PduId match...
Line 6715: PduId 0x%04X matched...
Line 6725: ...corresponding to %s
Line 6729: ...corresponding to a non-GMM RRC PDU
Line 6734: ERROR: PduId 0x%04X does not match that of first active entry...
Line 6740: PduId 0x%04X matched...
Line 6749: ...corresponding to %s
Line 6754: ...corresponding to a non-GMM RRC PDU
Line 6762: PduId -> NOT_RRC_PDU
Line 6784: First active entry removed from the RRC PDU Tx table...
Line 6796: PduId %04X does not match first active entry in the RRC PDU Tx table...
Line 6802:  active entry matched in  the RRC PDU Tx table at %d
Line 6840: Flushing the following %d active entries from the RRC PDU submit table...
Line 6842: -------------
Line 6858: No active entries to flush from the RRC PDU submit table...
Line 6874: Entry number %d corresponds to PduId = %04X
Line 6878:  ==> GMM PDU
Line 6879:  ==> %s
Line 6883:  ==> Non-GMM PDU
Line 6886: -------------
Line 6956: No more CS call exist on Non Internet DDS stack so trigger to release PS sig con. 
Line 6969: 2G DTM : Set GMM state to previous one 
Line 6978: Need to trigger Cell update as UE moved from CS Idle to CS dedi in P.Idle Mode 
Line 7019: mm_IsNrQrbNeeded returns :%d 
Line 7042: Current QRB State:%s,Current QRB Event:%s
Line 7067: Setting state to MM_QRB_IDLE due to check  mm_Check2GQRBForSKTKT()
Line 7079: RPLMN_QRB_CONTROL feature is enabled
Line 7086: G2L QRB enabled in this RPLMN
Line 7097: U2L QRB enabled in this RPLMN
Line 7111: Setting state to MM_QRB_IDLE due to  U2LQrbEnable:%d or  G2LQrbEnable:%d
Line 7123: After RAU accpet during CSFB, Registered PLMN was changed Need to clear QRB flag.
Line 7128: Setting state to MM_QRB_NOT_ALLOWED as QRB based On RPLMN is disbled
Line 7133: Keping  MM_QRB_READY to do ModeUpdate or Ps switch QRB
Line 7157: Keping  MM_QRB_READY to do ModeUpdate or Ps switch QRB
Line 7160: RPLMN_QRB_CONTROL feature is disabled, So setting state to MM_QRB_NOT_ALLOWED 
Line 7169: QRB Feature is already enabled  by registry
Line 7196: QRB Feature is enabled as per registry , Setting QRB state to MM_QRB_IDLE  
Line 7208: QRB Feature is disabled  as per registry , Setting QRB state to MM_QRB_NOT_ALLOWED  
Line 7213: Keping  MM_QRB_READY to do ModeUpdate or Ps switch QRB
Line 7252: QRB Feature is enabled on AP request , Setting QRB state to MM_QRB_IDLE  
Line 7265: QRB Feature is disabled  after completion of AP request , Setting QRB state to MM_QRB_NOT_ALLOWED if needed 
Line 7270: Keping  MM_QRB_READY to do ModeUpdate or Ps switch QRB
Line 7301: Putting back saved cell ind pointer inside mm_HandleNextActionOnQrbStop
Line 7332: QRB_G2L is aborted by G2L redirection. 
Line 7339: QRB not ongoing!! Ignore..
Line 7362: Timer for Quick Rollback is expired! Giving up to rollback to LTE..
Line 7372: QRB not ongoing!! Ignore..
Line 7393: QRB Event is not acccepted in current QRB state ,So Ignoring Event
Line 7548: QRB feature is disabled .
Line 7560: QRB not possible due to ongoing Rat Mode Change Procedure or UE is not camped on cell
Line 7570: mm_IsCsfb is set to %d for emergency call during Limited Camping,QRB not triggered
Line 7580: mm_GetEnableIratToLte = %d, mm_GetCcRedialing = %d, mm_GetQrbForCallAbort = %d, ,mm_GetQrbPendingForEutraEnabled = %d
Line 7581: mm_GetIsCsfb = %d, mm_GetIsSrvcc = %d
Line 7682: QRB Conditions are not met. 
Line 7689: QRB not possible for event received  or QRB is already initated
Line 7711: QRB feature is disabled .
Line 7728: QRB is paused  on new call  trigger. GmmCellInfo will be processed after call release.
Line 7808: Trigger QRB Init Req from mm_TriggerQrbInitReq 
Line 7815: QRB Init Req cannot be triggered in non UMTS rat mode
Line 7839: State Transition from %s==>%s
Line 7979: QRB Rat is :%d
Line 7998: QRB Rat is :%d
Line 574: RRC Connection Released.. Wait for Cell Ind
Line 579: Signaling Connection Released.. No need to Wait for Cell Ind
Line 604: Sending PagingResponse due to URRC_MM_REL_IND
Line 617: [HongKong Network]Clearing QRB, inorder to Trigger LAU in this abnormal scenario, to receive Setup From network
Line 797: WARNING : REL_IND comes abnormally. MM triggers SMS's retrial by Setting cause as MM_EST_REQ_REJ_CAUSE_UNSPECIFIED
Line 1712: Silent re-dial!!! PAGING RSP failed with URRC_EST_REJ Retry Paging Responce 
Line 3518: QRB New Design: mm_IsCsfb is set to FALSE
Line 3530: mm_IsCsfb is kept for silent redialin..
Line 3544: QRB New Design: mm_IsCsfb is set to FALSE
Line 3578: QRB State:%s
Line 3404: Set attachNeeded Flg to TRUE, waiting for CELL_IND
Line 3082: MM_IDLE: LAU will be triggered after timer expired, to avoid a collision of REL_IND
Line 3111: EMER CALL: MM_CM_SERV_REJ_IMSI_UNK_FLG will be cleared later
Line 3231: User PLMN will be retrieved after URRC_GMM_REL_CNF
Line 3236: User PLMN will be retrieved after GRR_MM_RESEL_HOLD_CNF
Line 3254: N/W intiated IMSI detach while CS conn active for class A MS in Network Mode I -> GMM Shall Re-attach to Non-GPRS Service by Performing the Combined Routing Area Updating Procedure with IMSI attach
Line 3265: SUSPEND REQ will be sent after URRC_GMM_REL_CNF
Line 3278: SUSPEND REQ will be sent after URRC_GMM_REL_CNF
Line 7432: AP disabled QRB so event is ingored.
Line 7437: QRB is triggered due to PS enabled in Global mode/ModeUpdate to LTE .
Line 7442: After CSFB release, QRB will be trigered .
Line 7454: After Rel Cnf QRB will be triggered due to PS enabled in Global mode/ModeUpdate to LTE.
Line 7461:  MM not in Idle, QRB will be initiated after moving to Idle
Line 7487:   QRB Due to PS switch/ModeUpdate is not possible as Rat is not 2G/3G
Line 7510:   Previously set Qrb Cause is retained(EitherPSswitch or ModeUpdate 
Line 7517:   QRB not possibe for event received
