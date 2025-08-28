Line 203:  Stopping Timers T3311, T3302 in order to do an Attach Immediately ...[24.008]-4.2.4.2.2
Line 243: Saving Msg for later as GMM is due to service a CELL_IND
Line 255: Msg Not Accepted in this Service State, Rejecting CM Req
Line 261: Saving Msg for later
Line 362: 
 SR is blocked by running T3346
Line 366: Initiating GMM Service Req Procedure
Line 378: RAU before uplink signalling/data transmission following intersystem change between cells belonging to same RA
Line 394: Already in PMM_CONNECTED State -> Confirming CM Layer Est Req Immediately
Line 412: Invalid Functional State -> PMM_DETACHED
Line 419: Confirming CM Layer Est Req Immediately
Line 431: GMM_CM_EST_CNF_FLG was already set by (%s) or Nsapi (%d).
Line 492: Saving Msg for later
Line 497: Msg Not Allowed in this State, Rejecting CM Req
Line 579: Unable to Stop HPlmn Search Immediately -> Saving CM Layer Req Msg for Later Use
Line 595: Saving Msg for later
Line 608: Saving Msg for later: SCRI pending
Line 643: Saving Msg for later: Registration ongoing
Line 672: Saving Msg for later: SERVICE_REQ_INIT state
Line 717: URRC_GMM_EST_CNF Not Allowed in PMM_CONNECTED, Ignoring Msg
Line 750: Service_Request here is: %d
Line 754: Service_Request here is: %d
Line 775: EST CNF received in GMM DEREGISTERED State
Line 805: LAU triggered because of CSFB call release
Line 855: Redirection to GSM  is received,
Line 861: Reselection from U2L is received
Line 876: Network redirection to LTE is received, so need not process Same RR connection actions
Line 987: GMM functional state is not matched with URRC, need to release current RRC connection once again
Line 1043: Checking release type : %d
Line 1051: RRC connection is still alive : Will not wait for CELL_IND
Line 1084: T3311 restarted to sync with T3211
Line 1117: Network redirection to LTE is received, so need not process Same RR connection actions
Line 1152: Message crossover: URRC_GMM_REL_IND ignored as GMM has already requested release, await URRC_GMM_REL_CNF
Line 1168: Reset MM_CS_CALL_RESUMED_FLAG
Line 1171: Message crossover: URRC_GMM_REL_IND in while in GSM RAT No Need to do Any Actions Keep it as it is
Line 1427: Network redirection to LTE is received, so need not process Same RR connection actions
Line 1619: Not Expected in This State in mm_DecodeGmmAsRelCnfMsg:
Line 1635: CS and PS both release, so quick rollback to LTE will be done Immediately:
Line 1640: QRB state:%s
Line 1772: Resetting values in mm_PerformGmmRegInitAbnormalRelActions
Line 1778: Power off detach is pending Hence discarding Attach retrails
Line 1820: PLMN action will be performed because of GMM Attach reaches max and UE is in C_PS class
Line 1852: Resetting values in mm_PerformGmmRauInitAbnormalRelActions
Line 1858: Power off detach is pending Hence discarding RAU retrails
Line 2214: 
----------------mm_PerformGmmCommonRelActions ---------------
Line 2226: Reset MM_CS_CALL_RESUMED_FLAG
Line 2269: Fast Return is required to URRC in REL_REQ
Line 2280: Fast Return is required to URRC in REL_REQ
Line 2285: Send GMM REL REQ with REL_REQ_ALL_RESOURCES
Line 2317: REL_REQ sent already, Updating GMM Release Cnf Action.. as no action or low Priority action was set 
Line 2371: Overwriting PrevAction:%d with New Action:%d
Line 2476: Saving Msg for later
Line 2508: 
 SR is blocked by running T3346
Line 2522: Update Status : GU1 But Cell RAI != SIM RAI
Line 2523: DataReq Not Allowed
Line 2530: RAU procedure 'interupts' service request procedure...
Line 2567: Service State is GMM_REG_ATTEMPTING_TO_UPDATE, SM will send Data after RAU is done
Line 2598: Data Req Received in incorrect State, Aborting Operations 
Line 2628: SR Triggered for Data Pending in PMM_CONNECTED
Line 2643: DataReq Not Allowed in This State, stored
Line 2774: entered mm_DecodeGmmAsDataCnfMsg   in State = %s
Line 2778: Sending Reject to RABM becaue SR has Failed
Line 2842: GMM Functional state is %s, so ignorning upper layer message 
Line 2890: Network Sent FOP False, But received UnitData Ind for SM So make this Flag False
Line 2920: Network Sent FOP False, But received UnitData Ind for SMS So make this Flag False
Line 3020: Ignoring GMM_PAGE_IND because MPLMN search is on-going
Line 3054: If GmmPageInd is received, T3346 shall be stopped.
Line 3065: If GmmPageInd is received with IMSI, T3346 shall be stopped.
Line 3546: RAT suspension has been requested -> ...paging request ignored
Line 3551: Not Attached to PS Domain Yet -> Paging Response Not Allowed.
Line 3673: mm_SendGmmCmEstRejMsg() -> Source: %d, Cause: %d, DiscardStoredRequest: %d
Line 3893: Req Not Allowed ->  GmmServiceState Not Correct 
Line 3933: Req Not Allowed ->  GmmServiceState Not Correct 
Line 4015: Req Not Allowed ->  GmmServiceState Not Correct 
Line 4051: Access Allowed for Registration since MM_ALLOW_PS_REGISTRATION is TRUE 
Line 4057: Access Allowed for Registration since MM_ALLOW_PS_REGISTRATION is TRUE 
Line 4087: RAI NOT Part of Any Forbidden List  -> OK (9 of 9)
Line 4092: Req Not Allowed ->  RAI Part of Forbidden Lists
Line 4105: Req Not Allowed ->  GMM_PS_ACCESS_NOT_ALLOWED !
Line 4111: Req Not Allowed ->  GMM_RAT_CHANGE_IN_PROGRESS_ERR !
Line 4118: Req Not Allowed -> Forbidden location areas for GRPS service 
Line 4125: Req Not Allowed ->  GPRS Not Allowed in HPlmn
Line 4131: Req Not Allowed ->  GMM_NOT_REGISTERED_ERR 
Line 4137: Req Not Allowed ->  GMM_COVERAGE_LOST_ERR !
Line 4143: Req Not Allowed ->  GMM_SIM_CONSIDERED_INVALID_ERR 
Line 4149: Req Not Allowed ->  MM_ACCESS_BARRED 
Line 4155: Req Not Allowed ->  GMM_INCORRECT_STATE_ERR ! 
Line 4166: New Cell Data MM_RR_NO_SERVICE_CELL_FLG   -> %s - PS Domain Access Is Not Allowed
Line 4284: User PLMN will be retrieved after URRC_MM_REL_CNF
Line 4289: User PLMN will be retrieved after GRR_MM_RESEL_HOLD_CNF
Line 4308: SUSPEND REQ will be sent after URRC_MM_REL_CNF
Line 4330: MM is not IDLE handle perform LAU after moving to IDLE
Line 4484: 
 Service Request is blocked by no service state
Line 4498: 
 SR is blocked by running T3346
Line 4542: GMM CM Layer Error Cause -> %s 
Line 4625:  in mm_DecodeGmmAsReleaseIndMsg
Line 4632: QRB state:
Line 4637: WARNING : Fail to turn on FastReturn Status or MM/GMM state is not valid.. (MM state : %d, GMM Functional state : %d) 
Line 4651: RRC requested to stop Quick Rollback! Giving up to rollback to LTE..
Line 4672:  Quick rollback to LTE will be done, so discarding GMM CM request.
Line 5024: mm_PerformExtraMsgInSameRrFailAction should be reset 
Line 5045: mm_PerformExtraMsgInSameRrFailAction should be reset 
Line 5140: Discarding Saved GMM SM EST REQ-PDPD DEACT as PDP context status shows Nsapi is deactivated
Line 1206: QRB state:%s
Line 3142: Access allowed for Paging Since MM_PPAC_ALLOW_PS_PAGING is TRUE
Line 3148: Access NOT allowed for Paging Since MM_PPAC_ALLOW_PS_PAGING is FALSE
Line 3490: We are Already in connected mode, So ignoring Paging indication.
Line 3416: PS Domain is Supported by Current Cell -> Paging Response Not Allowed.
Line 3381: Access Class Barred -> Paging Response Not Allowed.
Line 3350: Current Mobile Operation Mode == MM_MOBILE_CLASS_C_CS -> Paging Response Not Allowed
Line 3321: Incorrect Plmn State, != MM_ON_PLMN -> Paging Response Not Allowed.
Line 3292: UpdateStatus == GMM_NO_IMSI_UPD_STATUS -> Paging Response Not Allowed.
Line 3263: GMM SIM State is NOT Valid -> Paging Response Not Allowed.
Line 3225: ServiceState != GMM_NORMAL_SERVICE && ServiceState != GMM_ATTEMPTING_TO_UPDATE_MM -> Paging Response Not Allowed.
Line 3229: Paging Using IMSI -> ...Paging Response Not Allowed.
Line 3234: Incorrect GMM Service State -> ...Paging Response Not Allowed.
Line 3174: P-TMSI is Valid -> O.K...
Line 3179: P-TMSI is NOT Valid -> Paging Response Not Allowed
Line 3187: Paging Using IMSI  -> Paging Response Not Allowed
Line 3192: Neither P-TMSI Nor IMSI USed -> ...Paging Response Not Allowed
Line 3445: Paging Using IMSI -> ...Paging Response Not Allowed.
Line 3450: Paging During GMM Specific Procedures -> ...Paging Response Not Allowed.
Line 3455: Incorrect GMM State -> ...Paging Response Not Allowed.
