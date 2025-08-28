Line 118: Initialisation of <Authentication>, InitType=%s 
Line 130: EncodedSizeinBits -> %d 
Line 158: Skip to send REG_STATUS_IND during Mode Change is progress.
Line 164:  Discard NS_MM_ATT_REQ  
Line 178:  Cell Data Access Barred  
Line 223:  Saving NS_MM_ATT_REQ for later ... 
Line 252: NMO=%d , GAPI Attach Req Type =%d
Line 299:  Request for GPRS Attach Only, mm_ProcessGmmGprsAttachReq 
Line 313:  GMM Attached ! 
Line 319:  GMM NOT Attached ! 
Line 413:  GMM Attached ! 
Line 417:  GMM NOT Attached ! 
Line 1450: NMO II, Reg status ind should be pended under specific conditions(NMO II, U1 Updated, same LAI)
Line 1506: Skip to send REG_STATUS_IND in CS reject and PS accept case or Mode Change is progress.
Line 1532: Postponing Lau..
Line 1605: Attach will not be done, since we are in the process of Power Off
Line 1613: Ongoing proc on the other Stack: %s, Don't start another CS/PS sig
Line 1618: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 1629: GMM is in Suspended state or CS signal establishment is ongoing, So ATTACH should not be triggered. Setting ATTACH Needed flag
Line 1647: Attach cannot be performed since MM_ALLOW_PS_REGISTRATION is set to FALSE
Line 1659: Attach cannot be performed during T3346 running..
Line 1668: Attach Req will be delayed during Manual PLMN searching..
Line 1684: Attach Req is already pended, Waiting for completion of MPLMN
Line 1730: Fast display in-service under specific condtion(NMO I, U1 updated, same LAI)
Line 2166: MS network capability....length = %d, AttachType = %s
Line 2201: DRX parameter....
Line 2218: Old routing area identification @ EUtran  ->
Line 2227: Old RAI @ SIM
Line 2238: MS radio access capability....length = %d
Line 2266: TMSI status = no valid TMSI available
Line 2301: UE Network Capability ->
Line 2318: PtmsiType = %d
Line 2323: HcommonNasRelVersion = %d
Line 2493: PtmsiType = %d
Line 3118: Resetting values in mm_DecodeGmmAttachCnfMsg
Line 3201: GMM_PS_ENABLED_FLG is set
Line 3273: FOP is off so we wait for RR release
Line 3278: NewMCC : 0x%x, OldMCC : 0x%x
Line 3279: isMccChanged : %d, isEmerNumberBlank : %d, mm_GetLastSentMcc : 0x%x
Line 3310: Ignore Attach Accept in already REGISTERED State
Line 3348: NW gives Attach result as combined even thogh NMO 2
Line 3363: Discarding ATTACH_ACCEPT as contains semantically incorrect contents:< combined attach requested but GPRS only accepted and GMM cause IE not present >
Line 3376: Discarding ATTACH_ACCEPT as contains semantically incorrect contents:< combined attach requested but GPRS only accepted and abnormal GMM cause IE present >
Line 3387: Processing ATTACH_ACCEPT to get PS service eventhough it's NW issue:< GPRS attach only requested and GPRS only accepted but GMM cause IE is present >
Line 3430: NetworkFeatureSupport reset on ATTACH reject From network
Line 3439: Cause #25 received with out integrity protection, descard reject message
Line 3475: Power off detach is pending Hence discarding RAU retrails
Line 3549: Perform TbfRelAction, MM_COORD_TBF_REL_ACTION
Line 3616: Cause = %s (%x)
Line 3650: Change the Cause = %s (%x)
Line 3756: CSG Not supported, Invalid Cause : MM_NOT_AUTHORISED_FOR_CSG
Line 3815: Feature Fatal Reject Recovery is not enabled.
Line 4148: ERROR!! LAC or RAC is not matched between cell_ind and accept msg
Line 4205: 
MSG Contents: %s
Line 4222: Eutran inter RAT handover information length shall not be over 255 octets..
Line 4243: Utran inter RAT handover information length shall not be over 248 octets..
Line 4272: 
MSG Contents: %s
Line 4273: Cipher State -> %s, PduId -> %04X
Line 4359: MM_DSNC - Discarding NS_MM_ATT_REQ due to CS CALL on other stack
Line 4366: MM_DSNC - Saving NS_MM_ATT_REQ, Ongoing proc on other stack: %s
Line 4371: MM_DSNC - Check if abnormaly PS proc is stuck in other stack 
Line 4377: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 4386: Msg Saved For later because we have not yet received ACK for detach accept
Line 4421:  MM Svc State: %d, RAT Change- %d, Request Type - %d, Gmm State - %d
Line 4426:  Ignoring NS_MM_ATT_REQ as MM received INVALID Combination of service 
Line 4442:  RatChange: %d, MmcSuspensionOngoing: %d Cell Ind Needed afte Est Rej:%d
Line 4449:  QRB in progress
Line 4478:  Discard NS_MM_ATT_REQ to prevent unexpected PS REG 
Line 4486:  Discard NS_MM_ATT_REQ to prevent unexpected combined RAU during T3311 running 
Line 4531: CurrentTlliType = %s
Line 4573: detach with not re-attach type, So send clear queue to LLC 
Line 4763: Force to Standby indicated = %s
Line 4770: Periodic RAU timer (GMM_T3312)...
Line 4810: ERROR: ATTACH_ACCEPT RAI IE does not match RAI of current cell....
Line 4900: Assigned GMM_T3319...
Line 4914: Assigned GMM_T3323...
Line 4949: Network Feature Support IE value : %d
Line 4954: NetworkFeatureSupport IE not  received
Line 4965: T3312 Extended value received is: %d seconds
Line 735:  GMM Attached ! 
Line 740:  GMM NOT Attached ! 
Line 811: Attch Action : GMM_COMBINED_ATT_ACTION...Abnormal Paging
Line 654: Attch Action : GMM_PS_ATT_ACTION...Abnormal Paging
Line 1201: WARNING : DETACH procedure is on progress, so not sending REGI_STATUS
Line 1209: NMO II, Reg status ind should be pended under specific conditions(NMO II, U1 Updated, same LAI)
Line 1796: KSI = %d
Line 1809: GCKSN = %d
Line 1847: EUTRAN P-TMSI ->
Line 1861: IMSI....
Line 1869: P-TMSI....	0x%x, 0x%x, 0x%x, 0x%x, 0x%x 
Line 1877: P-TMSI....
Line 1922: Old P-TMSI signature....
Line 1931: Old P-TMSI signature....
Line 1942: Old P-TMSI signature....
Line 1954: Old P-TMSI signature....
Line 2021: Supported Codec Length is 0
Line 2066: Additional P-TMSI->
Line 2077: Additional RAU->
Line 2088: Voice_Domain_Pref_ENABLED	= %d,  CsServiceSupport =%d, VoiceDomainPref =%d
Line 2103: voice domain Pref-> %x
Line 2350: 
MSG Contents: %s
Line 2385: MSG Contents: %s
Line 2430: 
MSG Contents: %s
Line 2431: Cipher State -> %s, PduId -> %04X
Line 2983: skip to send Reg_ind_status at this point, and handle it after LU proc
Line 3059: QRB is considered and state:%s
Line 2597: FOP is On so we Can Send SM Data Directly
Line 2795: Network Sent Emergency List !!!
Line 2804: Emergency list length is 0 or more than 16, %d
Line 2810: Emergency List ptr is NULL!!!
Line 2849: Attach Accept is not Ciphered
Line 2855: Attach Accept is Ciphered
Line 3015: mm_SendGmmAttachCompleteMsg
Line 3019: MM_GPRS_ATTACH_COMPLETE_TBF_REL_ACTION set
Line 2906: Detach REQ is sent over REG_INIT state, invoke local detach
Line 2920: State Mismatch occurred and Retry ATTACH procedure..
Line 2953: Perform TBF release action in case of Attach complete is not sent
