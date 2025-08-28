Line 171: No need to set MM_NULL state Detach will be triggered
Line 206: T3246 low running ingored as low priority is not set
Line 210: Location Update Type -> %s Cannot be performed due to T3246 Running
Line 221: Postpoing the Location Update Attempt as Emergency call is pending. LAU Type: %d 
 in mm_PerformLocUpd
Line 229: We are waiting for REL CNF from RR/RRC
Line 258: Location Update Type -> %s Cannot be performed, Since MM_ALLOW_CS_REGISTRATION is set to FALSE
Line 266: Ongoing proc on the other stack: %s, Don't start another CS/PS sig
Line 272: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 282: Location Update Type -> %s Cannot be performed due to Forbidden location areas for Non GRPS service 
Line 319: Attempting to Perform Location Update.....[24.008]-4.4.1
Line 356: Sending CSFB Status indication to NS, to indicate to SIPC
Line 865: Mobile ID is Present in Loc Upd Acc
Line 873: Network sent IMSI as Mobile ID!!, so delete TMSI
Line 890: Network sent TMSI as Mobile ID.....
Line 891: Old 
Line 894: New 
Line 905: Network Sent NO_ID_TYPE Mobile ID !!!
Line 916: Mobile ID is NOT Present in Loc Upd Acc
Line 1074: Received LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 1125: The Loc-upd proc. was caused by a Call setup req. Now it can be Processed
Line 1130: Network has accepted the Follow On Req, RR Con will be Kept Alive !!!
Line 1148: Network has NOT Accepted the Follow On Req, CM Req has to bs Sent After RR Con is Released
Line 1195: Network Sent Equivalent Plmn List !!!
Line 1205: Network did not send Equivalent Plmn List!!, But, RPLMN is in EHPLMN list.Save EHPLMN list as Equivalent PLMN list
Line 1212: EPLMN list of LU Accept is different from one of ATTACH/RAU accept.. Don't remove Equivalent PLMN list
Line 1237: Starting T3212 with the value given in Per MS T3212 IE: %d secs
Line 1243: Starting T3212 with the value received from broadcast
Line 1300: %s  in  mm_DecodeLocUpdAccMsg ...[24.008]-4.4.4.6
Line 1303: mm_SimDb[MmStackId].mm_UpdateStatus = %s
Line 1309: Resetting values in mm_DecodeLocUpdAccMsg
Line 1360: Loc Upd Acc should not be received in this state !!??
Line 1369: Loc Upd Acc should not be received in this state !!??
Line 1398: %s  in  mm_DecodeLocUpdRejMsg....[24.008]-4.4.4.7
Line 1401: mm_UpdateStatus = %s
Line 1467: Loc Upd Reject Cause -> %s
Line 1534: For T3247,(4.1.1.6) No Need to increment the Plmn specific counter the MS is in its HPLMN or in a PLMN that is within the EHPLMN list
Line 1551: For T3247,(4.1.1.6) No Need to increment the Sim Invalid counter over same RRC connection
Line 1558: T3245 and T3247 are not supported
Line 1670: Entering mm_CheckAndPerformLocUpdForCmReq...
Line 1728: Entering mm_DetermineLocUpdActionForCmReq...
Line 1806: Sending IMSI Detach Message, Establishing RR Connection
Line 1814: Sending IMSI Detach Message, Not Establishing RR Connection
Line 1832: 
Displaying Message Contents: %s
Line 1844: Sending IMSI Detach Message, Establishing URRC Connection
Line 1874: 
Displaying Message Contents: %s
Line 1880: 
 IsCSFB: %d
Line 1888: Sending IMSI Detach Message, Not Establishing URRC Connection
Line 1961: Sending of IMSI Detach Message Not Required
Line 2193: Don't send CELL_REJ message
Line 2207: Sending CELL_REJ message
Line 2334: mm_PerformRejActionForNonIntegrity with various case
Line 2533: copying RAI information, since it might not be saved as part of LAU.
Line 2589: MM will adding this PLMN to FPLMN list
Line 2649: Deleting PS information also
Line 2691: Deleting EPS information also in NON LTE operating mode
Line 2762: FLAI list is not sent to AS for normal cell selection
Line 3015: Performing Location Update Reject Actions...[24.008]-4.4.4.7
Line 3023: Replacing LU reject cause with Network Failure for attempting emer call.
Line 3032: Location Update shall be performed when a New Cell is entered
Line 3120: For T3247,(4.1.1.6A) MS is in its HPLMN or in a PLMN that is within the EHPLMN list
Line 3198: CSG Not supported, Invalid Cause : MM_NOT_AUTHORISED_FOR_CSG
Line 3249: Entering mm_ProcessLocUpdRejAbnCaseAToC
Line 3265: Cause Received RR_CELL_CONGEST 
Line 3305: 2 Consecutive Failures Detected in mm_DetermineLocUpdFailureCause
Line 3369: Processing LocUpdRej Abonrmal Case D To H
Line 3371: Loc Upd Reject Cause -> %s
Line 3385: RrRelCoordActionCause -> %s
Line 3425: Not deleting equivalent list when cell data lai is equivalent plmn but not selected PLMN
Line 3448: No need sync with T3211 due to Orange requirement
Line 3452: T3311 restarted to sync with T3211
Line 3539: No need sync with T3211 due to Orange requirement
Line 3543: T3311 restarted to sync with T3211
Line 3705: LAU_ACCEPT discarded due to integrity conditions failure: 4.1.1.1.1 @ 24.008
Line 3744: 
Displaying Message Contents: %s
Line 3901: REGNOK_NOSEL is sent because PLMN search will be triggered.
Line 3926: %s  in  mm_DecodeLcsIndMsg
Line 3928: mm_UpdateStatus = %s
Line 3930: NewLcsState =%d 
Line 4075: RR Registration Result -> %s
Line 4117: Location Update Action -> 0x%02X
Line 4122: Location Update Action -> %s
Line 4164: Allow CS Registration Access since MM_ALLOW_CS_REGISTRATION is TRUE
Line 4170: Do Not Allow CS Registration Access since MM_ALLOW_CS_REGISTRATION is FALSE
Line 4192: Network Mode is 1 & GMM Not Registered or Network Mode is 2 -> OK (6 of 6)
Line 4197: CS Domain Access Not Allowed ->  Network Mode is 1 & GMM Registered 
Line 4203: Cell in FORBIDDEN list
Line 4210: CS Domain Access Not Allowed ->  Cell Does Not Support CS !
Line 4216: CS Domain Access Not Allowed ->  MM_NOT_REGISTERED_ERR  !
Line 4222: CS Domain Access Not Allowed ->  GMM_COVERAGE_LOST_ERR  !
Line 4228: CS Domain Access Not Allowed ->  MM_SIM_CONSIDERED_INVALID_ERR  !
Line 4234: CS Domain Access Not Allowed ->  MM_ACCESS_BARRED !
Line 4260: Skip for Checking Cell data
Line 4280: Cell Supports CS Domain -> OK (6 of 6)
Line 4285: CS Domain Access Not Allowed ->  Cell Does Not Support CS 
Line 4290: CS Domain Access Not Allowed ->  MM_NOT_REGISTERED_ERR 
Line 4295: CS Domain Access Not Allowed ->  GMM_COVERAGE_LOST_ERR  
Line 4300: CS Domain Access Not Allowed ->  SIM update status is %s 
Line 4305: CS Domain Access Not Allowed ->  MM_SIM_CONSIDERED_INVALID_ERR 
Line 4310: CS Domain Access Not Allowed ->  MM_ACCESS_BARRED  
Line 4330: Reject Cause -> 0x%02X in mm_PerformGprsAttachRejectCauseProcessing()
Line 4375: AttachType -> %d
Line 4413: NewMNC : 0x%x
Line 4416: (PREVENTION) Don't send LAU_REQ when REL_IND if NW gave wrong LAI. ()
Line 4423: (PREVENTION) Don't send LAU_REQ when REL_IND if NW gave wrong LAI. ()
Line 4440: mm_LaiMismatchCounter is %d
Line 4450: SIM LAI and Cell Data LAI Matching
Line 4474: in  mm_ProcessPostPerformLocUpdRejActions
Line 4509: PMM_CONNECTED -> mm_PerformLocUpdFailPlmnActions Delayed 
Line 647: Sending Invalid Cksn (7) as Update Status is MM_NO_IMSI
Line 690: AdditionalUpdateParam = %d
Line 691: HcommonNasRelVersion = %d
Line 709: Extended T3212 is supported
Line 441: mm_SendLocUpdReqMsg  .... Type -> NORMAL
Line 458: mm_SendLocUpdReqMsg .... Type -> PERIODIC
Line 475: mm_SendLocUpdReqMsg .... Type -> IMSI_ATTACH
Line 482: mm_SendLocUpdReqMsg .... Type -> Invalid LocUpdType in rat mode %d 
Line 526: 
Displaying Message Contents: %s
Line 566: 
Displaying Message Contents: %s
Line 572: 
 IsCSFB: %d
Line 950: Starting T3240 timer only for 3 seconds for CMCC Network
Line 953: T3240 duration in seconds %d
Line 996: Network Sent Emergency List !!!
Line 1005: Emergency list length is 0 or more than 16, %d
Line 1011: Emergency List ptr is NULL!!!
Line 1019: NewMCC : 0x%x, OldMCC : 0x%x
Line 1020: isMccChanged : %d, isEmerNumberBlank : %d, mm_GetLastSentMcc : 0x%x
