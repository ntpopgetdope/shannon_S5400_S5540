Line 116: Unknown Initialisation Type (%x) in mm_InitGmmRabmIntfManagement
Line 157: 
 RABM REEST REQ REJ Cause: %d
Line 166: 
 RABM REEST REQ Saved
Line 189: Already GMMRABM Message Saved so remove that from Queue
Line 194: PrevUlDataStatus = %d
Line 196: RB =%d , PendingUlData =%d, NSAPI FROM RABM = %d
Line 203: 
 Alredy Data Req sent again not needed
Line 213: Reestablishment requested by RABM will be performed following RAU procedure
Line 232: RAU procedure on request to establish RABs following intersystem change between cells belonging to same RA....[24.008]-4.7.1.7.b.
Line 262: Rb is already set in PMM_CONNECTED!!!Sending USER DATA REQ Message to RRC to indicate User Uplink Data Pending 
Line 268: mm_GmmFunctionalState == %d, bRbExistence = %d
Line 385: mm_SendGmmUserDataReqMsg:Cause %d Data Size = %d
Line 405: No need to wait establing RAB on this case.
Line 428: RABM Error Cause: %s
Line 451: CompiledProvider : %d in mm_DecodeGmmRabmFdReqMsg
Line 506: mm_DecodeGmmRabmFdReqMsg ...FD REQ Not Sent
Line 539: domain = %d, AnyRbExistence = %d, Nsapi = %d, RbId = %d, domain =%d in mm_DecodeGmmRabmRbStatusIndMsg
Line 543:  STOP T3340 when RB was setup 
Line 595: mm_DecodeGmmRabmRbStatusIndMsg: mm_GmmRbStatus = %d, PDPContextStatus[0] = %d, PDPContextStatus[0] = %d
Line 615: GMM_PS_CONN_REL_TIMER when RB was setup 
Line 639: FOP = TRUE but RB changed and GMM_CM_EST_CNF_FLG is set as TRUE, so stop T3340 and do pended GmmCm procedure
Line 650: FOP = TRUE but RB changed, so stop T3340 and reset GmmRelInd
Line 708: mm_DecodeGmmRabmDataActivityStatusIndMsg : %d
Line 718: ERROR: GMMRABM_DATA_ACTIVITY_STATUS_IND can't be processed..in %s
Line 735: mm_SendGmmDataStatusIndMsg : %d
Line 822: Don't need to send in Non-UMTS
Line 911: Ongoing proc on the other Stack:%s, Reject the EST_REQ
Line 921: Current Cell/Plmn are in forbidden list. so Service Request cannot be sent
Line 936: Access to PS Domain is barred so Service Request cannot be sent
Line 957: IN THIS STATE SHOULD NOT SEND THIS MESSAGE FROM RABM, PDP is not active
Line 964:  RAT change in progress, so discarding RABM's request.
Line 997: 
 SR is blocked by running T3346
Line 1053: GMM State - %d, ServiceState - %d, Urrc Rel Req Sent - %d 
Line 1058: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 1069: MM CONN FOR LOC UPD/CALL In Progress Saving Msg for later or mm_GetNeedCellIndAfterRelInd is TRUE
Line 1075: GMM service request will be pended until CS RB setup is done
Line 1096: Rabm Reest  will be pended until PS move to Normal service
Line 1103: Other CM EST REQ was pended so RABM REEST REQ should be saved until CM EST REQ is done
