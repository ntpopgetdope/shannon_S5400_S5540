Line 332: Single Sim Inserted So Other stack not having grant !!
Line 339: PS : Requested Proc : %s  other Stacks proc : %s
Line 341:  Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 351: Pending SIGNALLING/PLMN Search on other stack- so saving 
Line 356: SIGNALLING on other stack- so saving 
Line 361: CS Call on other stack- so Discarding 
Line 372: MM_DSNC - GMM DSDS Wrong Call type : %s
Line 404: Single Sim Inserted So Other stack not having grant !!
Line 410: Requested Proc : %s  other Stacks proc : %s
Line 412: Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 416: Call is triggered, treating it with the highest priority !!
Line 432: Saving EST_REQ 
Line 442:  Discarding EST REQ due to Call on other stack 
Line 455: CS SIGNALLING or CS CALL on other stack- saving request
Line 466: MM_DSNC - MM DSDS Signalling Wrong Call type : %s
Line 495: MM_DSNC - MM DSDS Wrong Call type : %s
Line 560: MM_DSNC - PS : DSDS Proc Type : %s Current Proc : %s
Line 562: MM_DSNC - Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 566: MM_DSNC - PS Proc is already updated with requested proc type
Line 621: MM_DSNC - PS : IDLE Entry Proc Type : %s Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 623: MM_DSNC - PS : IDLE Entry Ongoing Ims Proc %s
Line 630: MM_DSNC - PS Proc is already in IDLE
Line 717: MM_DSNC - No PS procedure are running
Line 752: MM_DSNC - IMS : DSDS Proc Type : %s Current Proc : %s
Line 755: MM_DSNC - Ongoing CS Proc : %s Ongoing PS Proc : %s, Ongoing IMS Proc : %s 
Line 759: MM_DSNC - IMS Proc is already updated with requested proc type
Line 776: IMS PROC : Grant requested for %s 
Line 797: IMS PROC : Grant requested for %s 
Line 821: Updated IMS Proc: %s 
Line 834: MM_DSNC - IMS : IDLE Entry Proc Type : %s,  Ongoing IMS Proc : %s
Line 841: MM_DSNC - IMS Proc is already in IDLE
Line 881: MM_DSNC - IMS : IDLE Entry Proc Type : %s Ongoing CS Proc : %s Ongoing PS Proc : %s, Ongoing IMS Proc : %s
Line 966: MM_DSNC - IMS : IDLE Entry Completed :  Proc Type : %s Ongoing CS Proc : %s Ongoing PS Proc : %s, Ongoing IMS Proc : %s
Line 995: MM_DSNC - CS : DSDS Proc Type : %s Current Proc : %s
Line 997: MM_DSNC - Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 1001: MM_DSNC - Here in 2G RAT without DTM support we are aborting an active PS procedure and continuing with CSCALL
Line 1008: MM_DSNC - CS Proc is already updated with requested proc type
Line 1080: MM_DSNC - CS : IDLE Entry Proc Type : %s Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 1082: MM_DSNC - CS : IDLE Entry  Ongong IMS Proc %s
Line 1084: mm_DsDelayCsIdleEntry: %d
Line 1091: MM_DSNC - CS Proc is already in IDLE
Line 1106: MM_DSNC - GmmState = %s
Line 1151: MM_DSNC - No CS procedure are running
Line 1166: MM_DSNC - DSDS CS Resume Not Sent Type of Proc =%s
Line 1203: MM_DSNC - Grant Release for : %s  Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 1205: MM_DSNC - Ongoing IMS Proc : %s
Line 1213: MM_DSNC -NewCsProcStatus : %d, NewPsProcStatus : %d
Line 1216: MM_DSNC -NewImsProcStatus : %d
Line 1228: MM_DSNC - STANDBY is not requested after GRANT_RELASE_IND so send SRNC_RESUME_REQ
Line 1278: MM_DSNC - RESUME_REQ with typeofproc IDLE, No need to send ILM to SR_IF
Line 1284: MM_DSNC - Sending MM Resume Req Type of Proc : %s Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 1286: Ongoing IMS Proc %s
Line 1327: MM_DSNC - Sending Sig Start Ind Type of Proc : %s domain : %s Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 1364: MM_DSNC - Sending Sig Start Ind for %s domain:
Line 1425: MM_DSNC - Sending Sig End Ind Type of Proc : %s domain : %s Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 1427: MM_DSNC - Ongoing IMS Proc : %s
Line 1444: MM_DSNC - No need to Trigger SIG END here, Type of Proc : %s domain : %s
Line 1459: MM_DSNC - No need to Trigger SIG END here, Type of Proc : %s domain : %s
Line 1500: MM_DSNC - Sending Sig End Ind for %s domain:
Line 1660: MM_DSNC - Perform Cause : %d
Line 1667: Single SIM is present or Same operator SIM cards are not present so PerformCause -> %d cannot be handled in mm_SendMmDsdsPerformReq
Line 1695: CELL IND is received on other stack after CS call release, So start resuming this stack
Line 1743: Not handling cause:%d in mm_DecodeMmDsdsPerformReq
Line 1760: Not handling cause:%d in mm_DecodeMmDsdsPerformReq
Line 1779: Not defined action in mm_DecodeMmDsdsPerformReq
Line 1805: MM_DSNC - mm_SendMMDsdsPerformReq %d
Line 1809: Single SIM is present  so PerformCause -> %d cannot be handled in mm_SendMmDsdsPerformReq
Line 1815: Single SIM is present or Same operator SIM cards are not present so PerformCause -> %d cannot be handled in mm_SendMmDsdsPerformReq
Line 1882: Sending Abort to other Stack to reset the variables
Line 1888: Not defined action in mm_SendMmDsdsPerformReq
Line 1917: MM_DSNC - Other Stack init stauts : %d
Line 1967: Update DSDS Stack info type :%d, value : %d
Line 1988: MM_DSNC - STANDBY_REQ with typeofproc IDLE, No need to send ILM to SR_IF
Line 1994: MM_DSNC - Standby Req for Proc : %s Ongoing CS Proc : %s Ongoing PS Proc : %s ProcCause: %d
Line 2093: MM_DSNC - State Update Ind : %d 
Line 2100: MM_DSNC - Standby Rsp Result: %d 
Line 2108: MM_DSNC - Register Rsp : %d 
Line 2211:  MM is already De-Registered in SRNC context 
Line 2384: [Sig+Paging] Current NAS Signalling priority is %d on ST %d
Line 2404: [Sig+Paging] Setting NAS Signalling priority to %d on ST %d
Line 2433: MM_DSNC - PCH State -> NON PCH State, during Signaling, Releasing Grant
Line 2444: MM_DSNC - NON PCH State -> PCH State, Reacquiring Signaling Grant
Line 2453: MM_DSNC - RRC State Moved to PowerOn Or Idle
Line 2477: Current stack has signalling grant.
Line 2480: Current stack doesn't have the signalling grant.
Line 2517:  PerformCause -> %d 
Line 2519:  Plmn Id -> 0x%02X 0x%02X 0x%02X
Line 2521:  LAC -> 0x%02X 0x%02X 
Line 2523:  RAC -> 0x%02X 
Line 2525:  ActiveRat -> %d 
Line 2527:  CellId -> %d 
Line 2529:  PSRegType -> %d 
Line 2531:  RejCause -> %d 
Line 2559:  Plmn Id -> 0x%02X 0x%02X 0x%02X
Line 2560:  LAC -> 0x%02X 0x%02X 
Line 2561:  ActiveRat -> %d 
Line 2562:  RejCause -> %d 
Line 2565:  CellDataLai PLMN Id -> 0x%02X 0x%02X 0x%02X
Line 2566:  CellDataLai LAC -> 0x%02X 0x%02X 
Line 2567:  Current rat -> %d 
Line 2571:  Either Rat/Lac/PlmnId mismatch occured,SO Cross Sim optimization for #17 not possible 
Line 2590:  RejCause -> %d  is not handled
Line 2597:  Condition is not met for applying cross sim optimization for #17 
Line 2633:  Received Plmn Id -> 0x%02X 0x%02X 0x%02X
Line 2634:  Received LAC -> 0x%02X 0x%02X 
Line 2635:  Received ActiveRat -> %d 
Line 2636:  Received Rac -> %d 
Line 2638:  Current Plmn Id -> 0x%02X 0x%02X 0x%02X
Line 2639:  Current LAC -> 0x%02X 0x%02X 
Line 2640:  Current ActiveRat -> %d 
Line 2641:  Current Rac -> %d 
Line 2642:  PsRegType -> %d 
Line 2643:  RejCause -> %d 
Line 2647:  One of these Rat/Rac/Lac/PlmnId not matching,SO Cross Sim optimization for PS reject #17 not applied 
Line 2656:  Current Rau Reg Type -> %d 
Line 2663: Resetting values in mm_PerformMmDsdsPsRejFailureActions
Line 2666:  Abort Cross Sim optimization for PS Rej #17 as there is a mismatch in reg type 
Line 2671:  Current Attach Reg Type -> %d 
Line 2679: Resetting values in mm_PerformMmDsdsPsRejFailureActions
Line 2682:  Abort Cross Sim optimization for PS Rej #17 as there is a mismatch in reg type 
Line 2701:  Condition GMM state or T3311 timer status is not met for applying cross sim optimization for PS Rej #17 
Line 2731:  RejCause -> %d  Not handled
Line 2765:  RejCause -> %d  Not handled
Line 2814: Cell is Barred. RR Connection Released
Line 2847: Cell is Barred. RR Connection Released
Line 1553: MM_DSNC - MM_DS_PERFORM_PSSIG_UNRECOVER
Line 1559: MM_DSNC - PS proc is stuck in CSPSSIG/PS call, Reset it here
Line 1577: MM_DSNC - GMM_REL_REQ triggered already
Line 1625: Not handling cause:%d in mm_DecodeMmDsdsPerformReq as camped cell/arfcn are different
Line 1630: Not handling cause :%d in mm_DecodeMmDsdsPerformReq as Rat match failed
