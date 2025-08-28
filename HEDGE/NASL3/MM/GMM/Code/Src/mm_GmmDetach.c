Line 108: Initialisation of <GmmAttachDetach>, InitType=%d
Line 313: Abort ATTACH procedure and start Detach Immediately (4.7.3.1.5g)
Line 340: Ignoring Detach Requets message since GMM is in GMM_DEREGISTERED_INITIATED
Line 352: In PMM connected Mode or GSM Rat, Abort RAU Procedure and proceed with detach 
Line 372: ERROR, We should not enter here in GMM_SUSPENDED 
Line 401: Exit Routine is TRUE
Line 559: PS only Local detach is performed
Line 625: Saved Attach message is Freed  
Line 631: New Attach type is updated in Attach message pointer %d  
Line 638: Saved Attach type and Final Attach type are same or FinalAttachType is Invalid  
Line 649: SavedAttachType or Received Detach Type is not valid SavedAttachType %d, ReceivedDetachType %d 
Line 657: Attach Request message pointer is NULL
Line 1245: MM_CON_ACTIVE - Detach saved and will be retrieved later.
Line 1253: PS detach type
Line 1264: Saving Detach Msg For Later... : invalid GMM state
Line 1291: Abort ATTACH or RAU procedure and start Detach Immediately (4.7.3.1.5g/4.7.5.1.5.k)
Line 1312: Saving Detach Msg For Later.. : invalid GMM state.
Line 1622:  Invalid DetachReqAction (%x) in mm_ProcessGmmRegInitGapiDetReq 
Line 1824: CS Call/Sig is ongoing, Release RR Connection Before Sending PS Detach
Line 1867:  Invalid DetachReqAction (%x) in mm_ProcessGmmRegGapiDetReq 
Line 1894: Request for PS Domain Detach Only....
Line 2028: request for CS domain detach only....
Line 2052: GmmDeRegisteredFlg = %s
Line 2071: ATT -> FALSE  OR  Sim LAI != CellData LAI -> No Action
Line 2088: ATT -> FALSE  OR  Sim LAI != CellData LAI -> No Action
Line 2108: MM_MOBILE_CLASS_C_PS -> No Action
Line 2114: MM_MOBILE_CLASS_C_PS -> No Action
Line 2122: GPRS detach procedure will be used to detach IMSI in CS domain
Line 2465: Request for CS and PS Domain Detach....
Line 2487: GmmDeRegisteredFlg = %s
Line 2503: In this case, PDP deactivation will not happen even PDP is activated. GMM should locally deactivate
Line 2514: Power-off case - SM will release PDP contexts after detach finishes
Line 2549: CurrentTlliType = %s
Line 2556: TLLI assignment for GPRS detach procedure....
Line 2565: ERROR: No TLLI for GPRS detach procedure....
Line 2690: 
MSG Contents: %s
Line 2726: MSG Contents: %s
Line 2757: 
MSG Contents: %s
Line 2758: Cipher State -> %s PduId -> %04X
Line 3095: ....Unexpected mm_GmmState or mm_GmmServiceState
Line 3651: NW gave DETACH_REQ in Invaild GMM State
Line 3658: GMM_T3346 is stopped by NtwkDetachReqMsg.
Line 3722: GMM cause is blank when UE received detach message
Line 3775: 
MSG Contents: %s
Line 3798: 
MSG Contents: %s
Line 3799: Cipher State -> %s PduId -> %04X
Line 3958:  Invalid Cause in Detach Message 
Line 3988: Ongoing proc on the other Stack: %s, Don't start another CS/PS sig
Line 3992: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 1023: ExitRoutine = %d 
Line 1031: DSDS: PS is disabled , set Gmm state to DeRegistered, continue with IMSI detach
Line 1040: GMM State is %s
Line 1059: Abort RR connection during LU procedure and initiate Detach proceudre.
Line 1082: Perform IMSI detach first on GMM_SUSPENDED
Line 1086: Abort RR connection during LU procedure and initiate Detach proceudre.
Line 1095: Saving Detach Msg For Later... : invalid GMM state
Line 1106: Previously, it was about to send ATTACH_REQ, so cancelling ATTACH procedure
Line 1123: Previously, it was about to send RAU_REQ, so cancelling RAU procedure
Line 1134: ExitRoutine = %d 
Line 1141: Previously, it was about to send ATTACH_REQ, so cancelling ATTACH procedure
Line 1159: Previously, it was about to send RAU_REQ, so cancelling RAU procedure
Line 1172: Flight mode ON 
Line 839: Saving Detach Msg For Later...
Line 852: PS detach type
Line 866: Saving PS Detach Msg For Later... : invalid MM state
Line 890: GMM State is %s
Line 967: Flight mode OFF 
Line 761:  PLMN Search in Progress But Power Off Detach so need to Respond 
Line 763: Flight mode OFF 
Line 769:  CS+PS detach is received when HEDGE RAT is suspended
Line 775:  CS only detach,  so need to Respond 
Line 783: PLMN SEARCH IN PROGRESS Cant handle it !
Line 795: Msg Saved For later
Line 800:  Cannot Handled in this Case
Line 2207: ATT -> FALSE  OR  Sim LAI != CellData LAI -> No Action
Line 2338: CS REGISTRATION IS PENDING SO So Release RR Connection Before Sending PS Detach
Line 3577: Set GMM_RAU_AFTER_CS_CALL_FLG
Line 3585: Network Mode I -> GMM Shall Re-attach to Non-GPRS Service by Performing the Combined Routing Area Updating Procedure
Line 3334: Aborting RAU Procedures.
Line 3438: GMM_DETACH_REQUEST message received without GMM TYPE IE....
Line 3464: NO ATTACH ACTION ...ATT flag not set, SIM LAI == CellData LAI, Assume Implicitly Attached 
Line 3303: We will not re-attach because we got CAUSE which spec mentioned clearly 
Line 3122: Aborting RAU Procedures.
