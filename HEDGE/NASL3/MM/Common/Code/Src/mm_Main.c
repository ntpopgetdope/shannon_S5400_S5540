Line 713: 
 ---------------- Processing MM Saved Message.... ---------------
Line 721: 
 ---------------- Processing GMM Saved Message.... ---------------
Line 787: UNKNOWN DST MSG ENTITY  - %d 
Line 790: STACK ID - %d 
Line 1013: Selected mode is %d
Line 1054: Disabling GEA1.
Line 1151: mm_WatchDogMode = %d
Line 1163: mm_bplmnenabled = %d, mm_ensenabled = %d
Line 1174: mm_PSDetInHedgeRat = %d
Line 1178: %s : CSC is GCF -> Forcefully disable SamsungSOREnable Flag
Line 1272: RETRY_EMC_DUE_TO_WRONG_STATE_ERR_AFTER_TMSI_REALLOC = %d
Line 1355: Re-Initialising MM ..Type: %s
Line 1443: mm_GetSupportedCodecList OperationMode: %d	WB AMR enabled: %d	HDVoice on:%d
Line 1660: MmState: %d
Line 1755: MmState: %d
Line 1880: Receive Error -> CTLVMAND TLV PARAM MANDATORY ERROR
Line 1890: Receive Error -> (CMSGLEN|CTLVLEN|CTLVUNK) ERROR for Auth Req
Line 1920: Receive Error -> CTLVMAND TLV PARAM MANDATORY ERROR
Line 2221: ERROR -> Unknown Msg or Error Case: %x !!! Ignoring Message
Line 2224: 
MM Displaying Received Message Contents
Line 2263: ERROR -> Msg 0x%04X too short, Header.Length = %d, MsgLen = %d, (Length - BodySize) = %d !!!
Line 2286: Ignore Radio Message received when MM Release is requested for cause:%d
Line 2294: Ignore Radio Message received when GMM Release is requested for cause:%d
Line 2329: MSG already displayed!!!!
Line 2341: Message not parsed !!!: 0x%04X
Line 2398: Unknown mm msg type, Sending Status..
Line 2470: Unknown mm msg type, Sending Status..
Line 2477: MM_INTEGRITY_FLG                  -> %s
Line 2478: MsgNum %d not processed....
Line 2479: ....integrity protection not activated in CS domain.
Line 2492: MM_INTEGRITY_FLG   is FALSE , Message receievd with PD %d
Line 2585: Received Pointer-> %p
Line 2635: Unknown Gmm msg type, Sending Gmm Status..
Line 2642: MsgNum %d not processed....
Line 2643: ....integrity protection not activated in PS domain.
Line 2760: GS30: ucTransactionID = 0x%02X,  ucProtocol =%s
Line 2761: GS30: ucMessageType =0x%02X, ucChannel =0x%02X
Line 2762: GS30: Raw data length =%d
Line 2784: Unknown Gmm msg type, Sending Gmm Status..
Line 2962: Received Loc Upd Acc. Integrity Protected Signalling not Started Yet, but for Periodic Loc Upd, this is allowed.
Line 2990: Emergency call was accepted and Integrity Protected Signalling is unncessary until MM Connection is reset..
Line 3126: mm_GetDsDelayCsIdleEntry = %d
Line 3130: SIG Protection Variable was TRUE, Resetting it
Line 3545: LTE HEDGE EMR Mode, skip to send GMMSM_RELEASE_IND in case of HEDGE RAT resumed on emergency state
Line 3551: If Last Reg rat is NR, MM will not send GMMSM_RELEASE_IND during 2G Call
Line 3633: ISR Status: %d
Line 3692: Protocol Discriminator -> %s
Line 3719: ERROR -> RtkQueue %x !!!
Line 3754: GMM READY , GSM RAT MODE and GMM_T3314 Timer is not running..... Starting the timer
Line 3810: In mm_DiscardMmEstReqMsgInQueue(), required TI : %d, Call Type : %d
Line 3827: TI match! deleting..
Line 3840: Warning in mm_DiscardMmEstReqMsgInQueue() : Cannot put the MSG in the original queue (status : %x)!!!
Line 3846: Warning : there is null pointer saved in the queue !!!
Line 3851: Warning : cannot get the msg in estreq queue (status : %x) !!!
Line 3880: In mm_ClearMmEstReqMsgQueue()
Line 3894: Deleting EST Req with TI: %d and Call Type: %d
Line 3900: Warning : there is null pointer saved in the queue !!!
Line 3905: Warning : cannot get the msg in estreq queue (status : %x) !!!
Line 3915: [ERROR]Queue not cleared completely 
Line 3918: Cleared EST_REQ queue Que Size %d 
Line 3944: In mm_DiscardMmEstReqMsgInQueueUsingCallType(), Call Type : %d
Line 3961: CallType match! deleting Ti: %d..
Line 3975: Warning in mm_DiscardMmEstReqMsgInQueueUsingCallType() : Cannot put the MSG in the original queue (status : %x)!!!
Line 3981: Warning : there is null pointer saved in the queue !!!
Line 3986: Warning : cannot get the msg in estreq queue (status : %x) !!!
Line 4016: ERROR -> RtkQueueFirst 0x%x  !!!
Line 4085: Setting GMM_ATTEMPTING_TO_UPDATE state and T3302 is not running. Starting T3302 !
Line 4093: Setting GMM_ATTEMPTING_TO_UPDATE state and T3311 is not running. Starting T3311 !
Line 4105: Setting GMM_ATTEMPTING_TO_ATTACH state and T3302 is not running. Starting T3302 !
Line 4113: Setting GMM_ATTEMPTING_TO_ATTACH state and T3311 is not running. Starting T3311 !
Line 4638: mm_CheckIfTimerExpiryCanbeHandled = %s
Line 4746: Saving MMC resume Request manually
Line 5020: 
--------- UMTS Rat no service State Change --------

Line 5044: 
------------------------- MM Flags ----------------------------

Line 5060: CS Rejected Rat -> %s, CS Rej Type -> %d, CS Rej Cause -> %s
Line 5063:  LAI -> 0x%x 0x%x 0x%x 0x%x 0x%x
Line 5071: PS Rejected Rat -> %s, PS Rej Type -> %d, PS Rej Cause -> %s 
Line 5074:  RAI  -> 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x
Line 5080: LOC_UPD_ATTEMPT_COUNT 	-> %d
Line 5086: LOW_LAYER_FAIL_COUNT  -> %d
Line 5098: NeedCellAfterEstRej  -> TRUE
Line 5104: ModeUpdateBlockNewCellInd  -> TRUE
Line 5118: No Flags are Set !
Line 5256: 
------------------------- GMM Flags ----------------------------

Line 5279: INTERNAL_LTE_DISABLED		      -> TRUE
Line 5285: No Flags are Set !
Line 5293: GMM_ATTACH_ATTEMPT_COUNT 	      -> %d
Line 5299: GMM_RAU_ATTEMPT_COUNT 	          -> %d
Line 5318: MM_CIPHERING_FLG                  -> %s
Line 5333: MM_INTEGRITY_FLG                  -> %s
Line 5348: MM_IMSI_ATTACH_FLG                -> %s
Line 5363: MM_FOLLOW_ON_REQ_FLG              -> %s
Line 5378: MM_CS_ENABLED_FLG                 -> %s
Line 5394: MM Message Count -> %d
Line 5688: GMM_CIPHERING_FLG                 -> %s
Line 5703: GMM_INTEGRITY_FLG                 -> %s
Line 5718: GMM_FORCE_TO_STANDBY_FLG          -> %s
Line 5742: mm_GetEnsEnabled mm_ensenabled  %d
Line 5784: In mm_SendMmcStopNetworkRspMsg(): Cause = %d, GapiNetworkStopReq = %d
Line 5926: 
---------------- Displaying MM Message Log ---------------
Line 5940: %d. %s
Line 5944: %d. Unknown Timer (TimerID : %d)
Line 5949: %d. %s
Line 6245: Process GMM PENDING MESSAGES
Line 6252: mm_FlightMode -> %d      Is MM Release Req Triggered -> %d 
Line 6364: Memory Allocation Failed
Line 6399: ClassMark2InfoLen  %d
Line 6405: ClassMark3InfoLen  %d
Line 6424: Memory Allocation Failed
Line 6486: mm_Tdscdma_Cal_Done is %d
Line 6489: 
Sending Init Confirmation to MMC %s
Line 6505: MM already sent INIT CNF
Line 6519: PDP is active and RABM request can be processed
Line 6543: mm_HplmnExceptionEnabled is FALSE on other operators except LGU
Line 6556: mm_GetDelayRauDuringCsfbSetup mm_DelayRauDuringCsfbSetup  %d
Line 6569: mm_GetQuickRollbackToLteTimerEnabled mm_QuickRollbackToLteTimerEnabled  %d
Line 6583: mm_GetQuickRollbackToLtePdpEnabled mm_QuickRollbackToLtePdpEnabled  %d
Line 6624: OPT_CARRIER TYPE: %d, mm_CompiledProvider: %d
Line 6644: mm_CompiledSP-> %d
Line 6749: AC 11-15 supported
Line 6853: CS Rejected Rat -> %d,CS Rej Type -> %d, CS Rej Cause -> %d
Line 6873: PS Rejected Rat -> %d, PS Rej Type -> %d, PS Rej Cause -> %d
Line 6887: CS Rejected Rat -> %d,CS Rej Type -> %d, CS Rej Cause -> %d
Line 6897: PS Rejected Rat -> %d, PS Rej Type -> %d, PS Rej Cause -> %d
Line 6927: In mm_SetRejParamForDebug, MappedMmProcedure =%d RatMode =%d
Line 6939: In mm_SetRejParamForDebug, sending NW_REJ_Ind to NS Procedure = %d, RejCause = %d
Line 7078: mm_GetSorFeatureStaus mm_SorFeatureStatus  %d
Line 7099: mm_GetGsmDtmSupported mm_GsmDtmSupported  %d
Line 7113: mm_GetVamosSupported mm_VamosSupported  %d
Line 7144: TCS feature support ->  ISR: %d, SRVCC: %d, CSG: %d, AP_VOLTE_SRVCC: %d
Line 7147: TCS feature support ->  AUTORETRYCALL: %d, RSRVCC: %d, OMC: %d, RPLMN_QRB_CONTROL: %d
Line 7259: mm_CheckOperatorGroup One SKU :Enabled (0x%x)
Line 7264: [OMCv5] mm_CheckOperatorGroup One SKU :Enabled (0x%x)
Line 7281: MM is in NULL state, to avoid memory leaks it frees any pointer contents of a message = %d, when message is not handled
Line 7312: Index %d is Already NULL
Line 7324: mm_SimReadRspPtr is Already NULL
Line 7395: ERROR -> Unknown Stack ID..
Line 7412: Displaying Device Information [Service Provider]: %s [FCI]: %s [MAKE_TYPE]: %d 
Line 7471: QuickRollbackToLteAfterCsfb registry is recovered as (%d).
Line 7475: QRBEnabledBySIMcard registry is initialized.
Line 7529: QRBEnabledBySIMcard[0] = %d,  QRBEnabledBySIMcard[1] = %d 
Line 7539: Provider requirement , so U2L QRB is enabled
Line 7558: Provider requirement , so G2L QRB is enabled
Line 7561: U2L QRB is %d / G2L QRB is %d
Line 7576: mm_GetSrvccRegistryValue mm_SrvccSupport  %d
Line 7597: mm_PowerOffDetInNullStateFlag  %d
Line 7820: GMM_T3302_EXP_IN_SUSPENDED_FLG    -> TRUE
Line 7826: GMM_READY_TIMER_DEACTIVATED_FLG   -> TRUE
Line 7832: GMM_READY_EXPIRY_CONNEX_ACTIVE_FLG -> TRUE
Line 7847: GMM_GSM_CELL_UPD_REQD_FOR_DTM     -> TRUE
Line 7852: GMM_CELL_NOTIFICATION_FLG         -> TRUE
Line 7859: GMM_SIG_CON_REEST_CAUSE_FLG       -> TRUE
Line 7864: GMM_PERFORM_GMM_CELL_IND_FLG      -> TRUE
Line 7870: GMM_NEED_GMM_REL_IND	          -> TRUE
Line 7876: GMM_FOLLOW_ON_REQUESTED	          -> TRUE
Line 7881: GMM_RR_REL_CNF_ACTION	          -> %d
Line 7894: MmStackId %d is not valid!
Line 7906: MmStackId %d is not valid!
Line 8069: MM_INTEGRITY_FLG                  -> TRUE
Line 8076: MM_FOLLOW_ON_REQ_FLG              -> TRUE
Line 8083: MM_NETWORK_MODE_CHANGE_FLG        -> TRUE
Line 8088: MM_CM_SERV_REJ_IMSI_UNK_FLG       -> TRUE
Line 8324: MM_RE_START_PROC_ON_OTHER_RAT_FLG -> TRUE
Line 8329: MM_SAVE_FLASH_DATA_REQ_FLG        -> TRUE
Line 8334: MM_CELL_CONG_WAIT_3122_EXP_FLG     -> TRUE
Line 8343: MM_WAIT_UNTIL_RB_SETUP	          -> TRUE
Line 8427: MM_CALL_WAS_ATTEMPTED_FLG         -> TRUE
Line 8432: MM_EMERG_CALL_WAS_ATTEMPTED_FLG   -> TRUE
Line 8437: MM_CC_CALL_ABORTED_FLG            -> TRUE
Line 8442: MM_CAMPED_FOR_EMERGENCY_SERVICES               -> TRUE
Line 8446: MM_CC_REDIALING		-> TRUE
Line 8450: MM_FORCE_TO_STAY_IN_HEDGE_BY_NS	-> TRUE
Line 8454: MM_MT_CALL_IN_PROGRESS		-> %d
Line 8459: mm_CsConnectedInUmts	-> TRUE
Line 8464: Need Paging Rsp -> TRUE
Line 8476: MM_QRB_STATE:%s
Line 8477: MM_QRB_CAUSE:%s
Line 8478: MM_QRB_ENABLE_CAUSE:%s
Line 8483: MM_MODE_CHANGE_IN_PROGRESS		-> TRUE
Line 8497: GmcInitCnfSent -> FALSE
Line 8503: mm_UmtsMode = %d
Line 8508: Priority PLMN Search Ongoing -> TRUE
Line 8513: PS SIG RELEASED DUE TO PCH MOVEMENT -> TRUE
Line 8522: GRR initialization state: %s,  URRC initialization state: %s
Line 8531: mm_LauNeeded	-> TRUE
Line 8536: mm_T3212TimedOut	-> TRUE
Line 8541: mm_RegistrationStatusCause -> %s
Line 8547: mm_RcvGrrCellInd	-> MM_ReceivedOnlyDediCell
Line 8552: Manual Search is going on -> TRUE
Line 8558: Received NO GPRS IN THIS PLMN IN LTE-> TRUE
Line 8564: LAI Mismatch Counter -- > %d
Line 8569: SequenceBits = %d
Line 8616: Resetting CsRejCauseHandling Flags
Line 8622: Resetting PsRejCauseHandling Flags
Line 8628: Unknown Domain can't be handled:%d
Line 8668: Paging During Signalling Optimization :Invalid Rat Combination
Line 8673: Paging During Signalling Optimization :Disabled
Line 8718: Not valid PAL PLMN INFO EVENT
Line 8762: Resending CSFB LAU or Paging response  is enabled
Line 2132: ERROR -> Unknown group : 0x%x !!!, Ignoring Message
Line 5138: GMM_PTMSI_INVALID				   -> TRUE
Line 5144: GMM_RB_STATUS					   -> TRUE
Line 5151: GMM_SM_ESTABLISHED 			   -> TRUE
Line 5157: GMM_PS_VT_CALL_ON_PROGRESS 	   -> TRUE
Line 5164: mm_GmmRegistrationStatusCause	   -> %s
Line 5170: mm_L2UPSHO_trigger 			   -> %d
Line 5176: mm_PsConnectedInUmts			   -> TRUE
Line 5196: GMM_CIPHERING_FLG 				-> TRUE
Line 5202: GMM_INTEGRITY_FLG 				-> TRUE
Line 5208: GMM_VALID_PTMSI_FLG				-> TRUE
Line 5214: GMM_FORCE_TO_STANDBY_FLG			-> TRUE
Line 5220: GMM_CM_EST_CNF_FLG				-> TRUE
Line 5227: GMM_RE_START_PROC_ON_OTHER_RAT_FLG-> TRUE
Line 5234: GMM_RAT_CHANGE_IN_SAME_RA_FLG 	-> TRUE
Line 7639: GMM_PERIODIC_RAU_REQD_FLG         -> TRUE
Line 7645: GMM_RAI_CHANGED_FLG               -> TRUE
Line 7651: GMM_RETRY_RAU_IN_NEW_CELL_FLG     -> TRUE
Line 7657: GMM_RAU_AFTER_CS_CALL_FLG         -> TRUE
Line 7663: GMM_COMBINED_RAU_WITH_IMSI_ATTACH_FLG -> TRUE
Line 7669: GMM_RAU_NEEDED		              -> TRUE
Line 7695: GMM_GPRS_ATTACH_FLG               -> TRUE
Line 7701: GMM_ATTACH_ON_RELEASE_FLG         -> TRUE
Line 7707: GMM_ATTACH_NEEDED		          -> TRUE
Line 7713: GMM_PS_ENABLED_FLG                -> TRUE
Line 7739: GMM_NORMAL_DETACH_AFTER_RAU_FLG   -> TRUE
Line 7745: GMM_POWER_OFF_FLG                 -> TRUE
Line 7751: GMM_PERFORM_GPRS_DET_FLG -> TRUE
Line 7777: GMM_SEND_REEST_RSP_TO_SNDCP_FLG   -> TRUE
Line 7783: GMM_RABM_REEST_REQ_AFTER_RAU_FLG  -> TRUE
Line 7931: MM_LOC_UPD_REQ_1ST_MM_CON_FLG     -> TRUE
Line 7936: MM_LOC_UPD_REQ_IMSI_UNK_FLG       -> TRUE
Line 7941: MM_RETRY_LAU_IN_NEW_CELL_FLG      -> TRUE
Line 7946: MM_T3211_EXPIRED_NO_LOC_UPD_FLG   -> TRUE
Line 7993: MM_IMSI_ATTACH_FLG                -> TRUE
Line 7998: MM_IMSI_ATT_RETRY_REQ_FLG         -> TRUE
Line 8003: MM_GPRS_ONLY_FLG                  -> TRUE
Line 8008: MM_POWER_ON_CS_ACCESS_FLG         -> TRUE
Line 8029: MM_CELL_REJ_SENT_FLG              -> TRUE
Line 8034: MM_CELL_RSP_NEEDED_FLG            -> TRUE
Line 8039: MM_REG_STATUS_IND_SENT_FLG        -> TRUE
Line 8044: MM_CS_ENABLED_FLG                 -> TRUE
Line 7967: MM_CS_PS_DETACH_AFTER_RR_REL_FLG  -> TRUE
Line 7972: MM_NORMAL_DETACH_AFTER_LAU_FLG    -> TRUE
Line 8111: MM_SIM_PRESENT_FLG                -> TRUE
Line 8116: MM_SIM_REMOVAL_ACTION_FLG         -> TRUE
Line 8249: MM_CIPHERING_FLG                  -> TRUE
Line 8137: MM_ABNORMAL_RR_CON_REL_CASES_D_TO_H_FLG -> TRUE
Line 8143: MM_RR_REL_CNF_ACTION	          -> TRUE (ACTION : %d)
Line 8149: MM_NEED_CELL_IND_AFTER_REL_IND_FLG-> TRUE
Line 8271: MM_RANDOM_ACCESS_FAIL_FLG         -> TRUE
Line 8223: MM_TMSI_INVALID	                  -> TRUE
Line 8228: MM_TMSIOLD_VALID	              -> TRUE
Line 8170: MM_PS_SIGNALING_MSG_FLAG          -> TRUE
Line 8175: MM_CS_SIGNALING_MSG_FLAG          -> TRUE
Line 8293: MM_EUTRAN_DISABLE_FLG             -> TRUE
Line 8196: mm_USER_SELECTED_PLMN               -> TRUE
Line 8201: MM_BACK_GND_SRCH_FLG	          -> TRUE
Line 8364: MM_CSFB_CALL_STATUS_FLG           -> TRUE
Line 8369: MM_CSFB_FOP_FLG                   -> TRUE
Line 8374: MM_LAU_AFTER_CSFB_FLG	          -> TRUE
Line 8379: MM_IS_CSFB_FLG	                  -> TRUE
Line 8396: MM_LAU_AFTER_SRVCC_FLG	          -> TRUE
Line 8400: MM_IS_SRVCC_FLG	                  -> TRUE
Line 8404: MM_CS_RB_STATUS -> TRUE
Line 8408: mm_SrvccCallForSequnceNum-> TRUE
