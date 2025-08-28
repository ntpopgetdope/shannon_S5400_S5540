Line 100: Initialisation of <MmGmmCoordination>, InitType=%d
Line 121: mm_MsOperationMode = %d
Line 159: Unknown Initialisation Type (%x) in mm_InitialiseGmmCoordination 
Line 226: Network did not send Equivalent Plmn List!!, But, RPLMN is in EHPLMN list.Save EHPLMN list as Equivalent PLMN list
Line 280: Cause = %s 
Line 479: FLAI list is not sent to AS for normal cell selection
Line 664: No ID (%x) used in mm_CoordinateCombinedAttCnf 
Line 706: Network did not send Equivalent Plmn List!!, But, RPLMN is in EHPLMN list.Save EHPLMN list as Equivalent PLMN list
Line 735: Network has accepted the Follow On Req, RR Con will be Kept Alive !!!
Line 779: Combined Attach Confirm Cause = %s in mm_ProcessCombinedAttCnfCause ...[24.008]-4.7.3.2.3.2
Line 846: Combined Attach Reject Cause = %s
Line 854: CoordinateCombinedAttRej, MM Update status = %d
Line 1005: Switching to MM_NETWORK_MODE_2 !
Line 1066: FLAI list is not sent to AS for normal cell selection
Line 1426: mm_GetGmmAttachType = %d
Line 1529: Fast display in-service under specific condtion(NMO II, U1 updated, same LAI), LU Attempt cnt = %d, MM Update status = %d
Line 1581: mm_CoordinateCsOrMode2CsPsAtt
Line 1655: Set mm_UrrcGmmRelReqSentFlag to FALSE, release request will be sent during power off detach
Line 1691: No Need to release existing RR Connection, we can directly trigger IMSI detach
Line 1801: CS Not Enabled, Operatio Aborted in mm_CoordinateNetworkImsiDetReq
Line 1821: Detach Cause = %s 
Line 2219:  Switching to MM_NETWORK_MODE_2
Line 2236:  Switching to MM_NETWORK_MODE_2
Line 2249:  dont perform network fail actions for network initiated detach with cause NETWORK FAILURE
Line 2419:  No Coordination Necessary for this Cause 
Line 2449: %s  in   mm_CoordinateUncombinedRauCnf
Line 2486: Network did not send Equivalent Plmn List!!, But, RPLMN is in EHPLMN list.Save EHPLMN list as Equivalent PLMN list
Line 2546: For T3247,(4.1.1.6)Perform #13 reject action when received is #11 or #14 and the MS is in its HPLMN or in a PLMN that is within the EHPLMN list
Line 2601: Deletion of equivalent PLMN list..
Line 2615: No coordination action required.
Line 2739: No coordination action required for this cause.
Line 2817: Uncombined Attach Reject with Cause #25 but not integrity protected or Not UMTS or Not camped CSG cell
Line 2824: CSG Not supported, Invalid Cause : MM_NOT_AUTHORISED_FOR_CSG
Line 2959: FLAI list is not sent to AS for normal cell selection
Line 3134:  Retrieving the old TMSI : %x %x %x %x, LAI : %x %x %x 
Line 3175: Indicate other stack about stopping of T3246 on Combined RAU accept 
Line 3177:  Stopping CS Congestion Timer in COM RAU ACC 
Line 3197: The Combined RAU proc. was caused by a Call setup req. Now it can be Processed
Line 3205: Network will keep PS connection alive, so should try the pended call immediately
Line 3215: Network will give release. CM service request will fail even it tries to send. Call will be tried when MM gets CELL_IND
Line 3263: Network did not send Equivalent Plmn List!!, But, RPLMN is in EHPLMN list.Save EHPLMN list as Equivalent PLMN list
Line 3298: Cause = %s
Line 3309: RAU Attempt Count >= MAX, Switching to MM_NETWORK_MODE_2 
Line 3397: Cause = %s
Line 3417: For T3247,(4.1.1.6)Perform #13 reject action when received is #11 or #14 and the MS is in its HPLMN or in a PLMN that is within the EHPLMN list
Line 3515: Cause = %s
Line 3588: FLAI list is not sent to AS for normal cell selection
Line 3816: CSG Not supported, Invalid Cause : MM_NOT_AUTHORISED_FOR_CSG
Line 3822: Combined RAU Reject with Cause #25 but not integrity protected 
Line 3906: Deleting sim data
Line 3946: RAU attempt count -> %d
Line 3967: Stored LAI ->
Line 3970: Serving cell LAI ->
Line 4000:  Saving the TMSI : %x %x %x %x, LAI : %x %x %x 
Line 4040: Deletion of equivalent PLMN list..
Line 4150: Cause = %s
Line 4172: For T3247,(4.1.1.6)Perform #13 reject action when received is #11 and the MS is in its HPLMN or in a PLMN that is within the EHPLMN list
Line 4409: No Coordinate Necessary for this Cause
Line 4672: Transition from GMM_SUSPENDED to %s on successful GSM to UMTS RAT change...
Line 4710: Transition from GMM_SUSPENDED to %s on successful GSM to UMTS RAT change...
Line 5140: Final Cause for MM-GMM Cordination : (0x%X)....
Line 5155: mm_CordinateActionsForPsRelease : (0x%X)....
Line 5230: mm_InitRrRelCoordActionParams - Action: %d, Cause: %d
Line 5234: Doesn't need to save action : (0x%X)....
Line 5248: ERROR: Invalid proposed Action (0x%X)....
Line 5271: mm_RrRelCoordAction = %d
Line 5419: Invalid Rr Rel Coord Action (%x) in mm_InitRrRelCoordActionParams !!
Line 5476: Invalid RejCause in mm_GetUrrcCellRejType ...!
Line 5767: Invalid MsOperationMode (%x) in mm_GetCurrentMobileClassMode
Line 5806: GMM state was %s prior to suspension of GPRS
Line 5810: Checking for active GMM procedures in %s.%s
Line 5812: Resetting values in mm_AbortAnyGmmActiveProcedure
Line 5819: ...no action required
Line 5837: ...no action required
Line 5855: GMM state is back to DEREG from REG.INIT , so reset GmmRegistStatusCause
Line 5882: ...no action required
Line 5941: ERROR: Undefined GMM state
Line 5959:  mm_InitExtraMsgInSameRrFailActionParams:
Line 5971: No Actions to perform in mm_InitExtraMsgInSameRrFailActionParams
Line 5982:  mm_ExtraMsgInSameRrFailAction = %d
Line 5987:  mm_GmmExtraMsgInSameRrFailAction = %d
Line 5992: ERROR: Invalid proposed Action (0x%02X)....
Line 5997:  GCF mode is enable or mm_GmmExtraMsgInSameRrFailAction is zero ( %d )
Line 6021:  mm_ExtraMsgInSameRrFailAction -> %s in mm_PerformExtraMsgInSameRrFailAction
Line 6023:  mm_GmmExtraMsgInSameRrFailAction -> %s in mm_PerformExtraMsgInSameRrFailAction
Line 6024: NeedCellInd: %d
Line 6030:  Foreground  PLMN search is going on. Do not perform extra msg in same RR fail actions 
Line 6152: Gmm State is not GMM_SERVICE_REQUEST_INITIATED, in mm_PerformExtraMsgInSameRrFailAction
Line 6160: Ongoing proc on the other Stack: %s, Reject the EST_REQ
Line 6212:  mm_GmmExtraMsgInSameRrFailAction is initialized because RRC Con is released or PS Sig Con Rel comes 2times..
Line 6257: Current Ms Operation Mode: %s
Line 6311: ...GMM procedure shall NOT be progressed on same RRC connection
Line 6320: ...GMM procedure shall NOT be progressed on same RRC connection
Line 6326: ...GMM procedure may be progressed on same RRC connection
Line 6339: ...GMM procedure may be progressed on same RRC connection on %s expiration
Line 6344: ...GMM procedure shall NOT be progressed on same RRC connection
Line 6364:  SameRrConnexFailAction -> %d in mm_CoordinateGmmProcSameRrConn but it will not be executed..
Line 6387: Checking for IMSI/GPRS detach procedure on same RRC connection actions...
Line 6406: IMSI detach procedure has not yet completed.
Line 6423: GPRS detach procedure has not yet completed.
Line 6429: Both IMSI and GPRS detach procedure has not yet completed.
Line 6453: but detach action is not GMM_CS_AND_PS_DET_ACTION.
Line 6485: mm_CordinateActionsForCsPsRelease: MmCause: %d, GmmCause: %d, CordinateCause:%d
Line 2158:  No Coordination Necessary for this Cause 
