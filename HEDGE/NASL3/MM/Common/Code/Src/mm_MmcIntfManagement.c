Line 755: GmmServiceState = %d, GmmUpdateStatus = %d
Line 757: GmmCause = %d, GmmProcedure = %d
Line 759: PLMN Id = 0x%x 0x%x 0x%x 
Line 769: RAI -> 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x
Line 777: PTMSI Value = %x   %x   %x    %x
Line 784: PTMSI Signature = %x   %x   %x
Line 790: TMSI -> 0x%x 0x%x 0x%x 0x%x
Line 799: LAI -> 0x%x 0x%x 0x%x 0x%x 0x%x
Line 801: GmmKsi = %d
Line 804: Tin from LTE = %d, PlmnAttribute = %d
Line 806: LastRegRatMode = %d, EutranDisabled = %d
Line 808: MmCksn = %d, MmUpdateStatus = %d
Line 810: ImsiAttachState = %d, EmmCombinedProc = %d
Line 812: CsSrvRejCause = %d, ForcedRegInfo = %d
Line 814: EMC_PDN_Status = %d, ImsVoiceSupport = %d
Line 816: Is ISR feature Supported = %d, ISR Status From LTE = %d
Line 818: T3412Status = %d, T3423Status = %d
Line 821: NonIntegrityProtectedNasMessage = %d
Line 1024: in mm_ProcessRegInfo, GmmProcedure-> %d
Line 1052: TIN =%d...
Line 1057: MM status is =%d...
Line 1273: GmmProcedure-> %d
Line 1301: NR MM EqPlmnCount = %d
Line 1306: NR MM Eq PLMN List Empty So delete the List
Line 1368: MultiMode Flag is %d, Eutran Disable Flag is %d 
Line 1383: Resetting TIN, EUTRAN PTMSI and EUTRAN PTMSI Signature since in NON LTE MODE
Line 1441: HandoverType= %d
Line 1448: ForcedRegInfo is True..
Line 1511: Tin= %d
Line 1590: NonIntegrityProtectedNasMessage = %d
Line 1593: isDcnUpdated = %d
Line 1742: Congestion PLMN Id  %x	%x	%x 
Line 1743: T3246 Action (%d) 	T3246 Value(%x) 
Line 1744: T3346 Action (%d) 	T3346 Value(%x) 
Line 1745: T3246 type   (%d) 	T3346 Type (%x) 
Line 1827: mm_DecodeNrMmRegInfoUpdIndMsg GmmProcess [%d], LastRegRatMode [%d]
Line 1828: NrRegistered Flag [%d]
Line 1835: EqPlmnCount = %d
Line 1841: Eq PLMN List Empty So delete the List
Line 1874: UE received REJECT on NR. Cause[%d]
Line 2028: T3245_T3247_TIMER_SUPPORTED is FALSE, so discard ForbiddanceControlInd message
Line 2035: T3245 behaviour enabled and T3345 Action is %d, 
Line 2051: T3247 behaviour enabled and T3347 Action is %d, 
Line 2071: T3245 is disabled and T3247 also disabled
Line 2120: mm_PerformEutraEnableActions: %d
Line 2160: mm_CheckAndProcessEutranEnableAction: %d
Line 2179: PS detach will be triggered after REL_CNF comes..
Line 2186: Eutra is enabled in CELL PCH state, break the RR connection.
Line 2199: Resetting Eutra enable actions if any
Line 622: GMM_REL_REQ_SENT is abnormally set, so it will be reset.
Line 628: MM_REL_REQ_SENT is abnormally set, so it will be reset.
Line 635: NEED_GMM_REL_IND is abnormally set, so it will be reset.
Line 645: IMSI is attached.
Line 662: Resetting GMM AUTH fail count if it is registered in LTE
Line 685: IMSI is attached.
Line 696: IMSI is detached!!
Line 553: GMM status is GMM_UPDATED
Line 561: Sync Plmn State to MM_ON_PLMN as per LTE is attached
Line 372:  SIM RAI : %x %x %x %x %x %x 
Line 386:  Retrieving the old TMSI : %x %x %x %x, LAI : %x %x %x 
Line 426: NonIntegrityprotected :%d GmmProcedure:%d Cause:%d
Line 433: MM_NOT_UPDATED and LTE TAU or Attach Accepted with cause = %d
Line 448: MmStackId = %d, Skip reject cause = %d.
Line 464: Non Integrity protected reject cause no need to handle MM parameters
Line 483: Non Integrity protected reject cause no need to handle MM parameters
Line 491: MM_NOT_UPDATED and LTE TAU or Attach Rejected with cause = %d
Line 499: GMM status is GMM_NOT_UPDATED
Line 504: NonIntegrityprotected :%d GmmProcedure:%d Cause:%d
Line 507: NonIntegrity Protected Reject Messages Handling in RegInfoUpdInd
Line 571: RejCause-> %d
Line 235: Discarding Saved Cell Ind Msg ..
Line 241: REG INFO IND only for camping done process on LTE RAT
Line 253: GmmState is DEREGISTERED
Line 258: GmmState is DEREGISTERED, PDP STATUS IS ALL  ZERO's...
Line 262: GmmState is DEREGISTERED, PDP STATUS is not ZERO's, Resetting PDP Status.
Line 1183: T3412 expires and T3423 starts with ISR enabled %d
Line 1193: In case of invalid Tin update Only mapped RAI and PTMSI will be updated for RoutingParam..
Line 849: No Rat Change in Progress
Line 857: In case of invalid Tin update Only mapped RAI and PTMSI will be updated for RoutingParam..
Line 897: service state.%s and %s in mm_ProcessGmmCellInfoNull
Line 930: No CS atttach in LTE and T3212 is running => no need to overwrite cell data LAI with LAI received from LTE.
Line 942: CELL was once lost, so clearing the coverage lost flag.
Line 964: delete FPLMN
Line 988: LastRegRatMode = %d
Line 318: EqPlmnCount = %d
Line 323: Eq PLMN List Empty So delete the List
Line 603: NR RejCause-> %d
