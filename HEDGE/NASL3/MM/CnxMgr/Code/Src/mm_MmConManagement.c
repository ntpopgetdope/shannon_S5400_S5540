Line 210: 
MSG Contents: %s
Line 709: MmPlmnstate: %d, mm_callType %d  
Line 743: CM service req is triggered during LU on MM_UPDATED state, FOR set as 1 and CM service req will be pended
Line 912: Saving Msg until the current MM Con is established
Line 959: MmPlmnstate : %d, mm_callType %d  
Line 1271: CallType = %d, mm_UpdateStatus = %s, Ti = %d in  mm_DecodeMmEstReqMsg....[24.008]-4.5
Line 1348: During MO CSFB CM establishment, SMS EST_REQ shall be rejected!!AP shall retry later.
Line 1355: During MT CSFB call MM_EST_REQ can't be processed until MT Paging Response will be sent.
Line 1373: EST_REQ Will handle after MM_WAIT_FOR_UNITDATA_IND_AFTER_L2UPSHO
Line 1377: EST_REQ Saved.
Line 1390: EST_REQ Saved in NMO1.
Line 1399: EST_REQ Will be handled after REL_CNF or Combined Attach/RAU completed 
Line 1406: NO_CELL_IND will come very soon. So cannot handle EST_REQ now
Line 1413: CC redial is now taken care of!
Line 1480: If MM state is MM_IDLE, MM received REL_IND before MM_ESTOUT_REQ
Line 1576: IMSI paging succesful, Clear RAU needed flag
Line 1581: IMSI paging succesful, Clear LAU needed flag
Line 1680: Ultra-CSFB MT call : CC SETUP is received so clear CsfbCallState/Status.
Line 1713: mm_MmConCount = %d  mm_MmConCountForCC = %d
Line 1723: Already one CS_CALL active, can't handle another CALL_REQ
Line 1850: EMC Redial due to Wrong State ERR on TMSI change = %d
Line 1934: Deleting Tmsi, Cksn, Lai due to CM Rej Msg [24.008]-4.5.1.1
Line 1976: T3245 and T3247 are not supported
Line 1982: MM Will Perform Location Update After RR Release...[24.008]-4.5.1.1
Line 2160: Unable to handle REEST_REQ due to either UMTS rat mode or State mismatch
Line 2202: Redial? = %d
Line 2216: CC Redialling is true and there is more than one MM CNX so not setting MM state to IDLE. CM_SERVICE_REQ will go as DATA_REQ
Line 2263: Network Aborting CM Layer Activity, Cause = %s
Line 2307: T3245 and T3247 are not supported
Line 2368: triggering Silent redial
Line 2387: Do not consider QRb and RAU retrying immedialty
Line 2389:  mm_GmmExtraMsgInSameRrFailAction is initialized because RRC Con is released or PS Sig Con Rel comes 2times..
Line 2446: mm_AwaitingCmServiceReqRsp : %d 
Line 2451: CC redial is aborted!!!
Line 2470: WARNING : REL_REQ will be sent to appropriate rat once Rat change is completed.
Line 2487: EMER CALL: MM_CM_SERV_REJ_IMSI_UNK_FLG is cleared
Line 2499: Signaling protection was ON, for CSFB+PSHO case, Releasing CS CALL Grant as part of Call Release from CC
Line 2506: CS procedure is not CS CALL, not expected
Line 2517: Pended MM_EST_REQ was removed, (TI=%d)
Line 2521: Signaling protection was ON, for CSFB+PSHO case, Releasing CS CALL Grant as part of Call Release from CC
Line 2528: CS procedure is not CS CALL, not expected
Line 2535: There was no pended EST_REQ for TI=%d.
Line 2700: DSDS : CC, SS or SMS Session is Active Sig End not Sent 
Line 2980: Other CM Layer Data not allowed during this State
Line 3012: During RAT Change no CM REQ can be proccessed, message saving
Line 3040: Ongoing proc on the other Stack: %s, Don't start another CS/PS sig
Line 3053: Ongoing proc on the other Stack: %s, Reject the EST_REQ
Line 3061: CS call had been attempted, retry now...
Line 3098: CmServReqMsg is not available due to running T3246 or Call Type (%s)
Line 3382: Discarding Saved Cell Ind Msg ..
Line 3477: Mobile Identity as IMEI since IMSI_UNKNOWN_IN_VLR is received before
Line 3482: Mobile Identity as IMSI since IMSI_UNKNOWN_IN_VLR is received before
Line 3486: MM_CM_SERV_REJ_IMSI_UNK_FLG is cleared
Line 3517: Network Lock Status TRUE..
Line 3577: Remove CmReqPriority IE under a condition of TMO LAB Test
Line 3788: 
 IsCSFB: %d
Line 3854: 
Displaying Message Contents: %s
Line 4016: CallDropCauseForDBGSCR = %d, mm_GetCallDropType() = %d 
Line 4022: 
Displaying Message Contents: %s
Line 4046: 
Displaying Message Contents: %s
Line 4068: 
Displaying Message Contents: %s
Line 4120: 
Displaying Message Contents: %s
Line 4267: All saved Establishment Requests are cleared
Line 4271: QUEUE Not cleared Completely.
Line 4322: CallDropCauseForDBGSCR = %d, CallDropTypeForDBGSCR = %d 
Line 4405: [ErrInd] CallDropCauseForDBGSCR = %d, CallDropTypeForDBGSCR = %d 
Line 4422: ERR_IND to CC is not required.
Line 4444: Invalid Call Type in mm_CheckCallType, %d
Line 4511: PD: %d
Line 4686: Got Lower Layer failure, but currently no retransmission happens
Line 4690: Cannot retrieve MM_DATA_REQ, because there is no saved one
Line 4728: CallType : %d 
Line 5014: Call Type -> %s
Line 5026: CM Service Rej Cause -> %s
Line 5135: Establishment Cause -> %s
Line 5278: Establishment Cause -> %s
Line 5313: Priority -> %s
Line 5358: RR UE ID  -> %s
Line 5410: RRC UE ID Type -> %s
Line 5450: Id scope -> %s
Line 5462: NewLaiRaiVersusOld -> %s
Line 5476: 
------------ Displaying MM Connection Management Data --------------
Line 5525: URRC Data Request Msg Result -> %s
Line 5559: URRC Sync Ind Status -> %s
Line 5607: Converting UMTS only mode to UMTS + GSM, due to Emergency Mode operation
Line 5614: Skip for Checking Cell data
Line 5643: Rat is not GSM
Line 6038: PAL.EPD_MODE Registry (%d) 
Line 6087: UMTS 1.28 TDD value (%d) 
Line 6193: Eutra FDD value is set to 1 becuase EutraDisableFlag is false..
Line 6222: Vamos Registry (%d) 
Line 6303: CSFB Call State -> %d, CSFB Call Type  -> %d, mm_CsfbForCall= %d
Line 6322: Emergency Call was ended before Est Req received and Reposting Cell Ind 
Line 6329: CSFB ID Type -> %d
Line 6360: Call Ended, releasing CS CALL Grant
Line 6368: CS procedure is not CS CALL, not expected
Line 6411: LTE Tin: %d
Line 6434: MM_DELAY_PS_DET_IN_NON_DDS_FLAG = %d
Line 6462: Changing Encoding due to EutranDisabled is changed to %d
Line 6491: EncodedSizeinBits -> %d 
Line 6500: EncodedSizeinBits -> %d 
Line 6551: mm_SetLastRegRatMode %d,  mm_GetNeedLocalDetach %d
Line 6566: Paging Id -
Line 6595: Mapping Paging Id -
Line 6618: WARNING : Cannot store MM_DATA_REQ - already saved one before
Line 6633: WARNING : Cannot store MM_DATA_REQ - memeory not allocated
Line 6659: mm_SRVCC_HO_Cause %d 
Line 6667: SRVCC Handover : IMS CALL Continuation, %d 
Line 6671: CS Procedure is DSDS CS CALL Already
Line 6725: Even CallWasAttempted is TRUE, EST_REQ for a call is sent, so it need be discarded.
Line 6770: Triggering silent redial ...
Line 6842: QRB is triggered about 3G normal voice call. 
Line 6939: Retrieving the pending CS Procedure
Line 6949: CS EST Not Attempted or Not Retrieved
Line 7088: Cs call connection was establihed before T3340 expiry and do pended GmmCm procedure
Line 7158: WARNING : REL_REQ will be sent to appropriate rat once Rat change is completed.
Line 7262: LOSS_CVG during call, REL_REQ from CC, Clear all contexts
Line 7280: Discard if any saved data request
Line 7298: CS procedure grant %d is released 
Line 412: No Calls Allowed During RAT Change...!!
Line 469: GPRS only mode, so normal call cannot be done! ...
Line 603: Check to see if same Reg. LAI before allowing call
Line 625: Trigger IMSI attach and then call
Line 1124: Ongoing proc on the other Stack: %s, Don't start another CS/PS sig
Line 1129: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 1139: Ongoing proc on the other Stack: %s, Reject the EST_REQ : %d
Line 3232: 
 IsCSFB: %d
