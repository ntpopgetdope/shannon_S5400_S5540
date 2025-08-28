Line 116: Current UEMODE : %d
Line 132: Current UEMODE : %d
Line 164: [UEID] %s ->
Line 164: [UEID] %s ->
Line 164: [UEID] %s : INVALID
Line 183: TRANSIT TO  - %s
Line 227: [UEID] %s ->
Line 227: [UEID] %s ->
Line 227: [UEID] %s : INVALID
Line 244: TRANSIT TO  - %s
Line 280: ++Set Tau Type With Imsi (TAU Reject)
Line 294: ++Set Tau Type With Imsi (TAU Reject)
Line 350: Current UEMODE : %d
Line 412: SET Type from HedgeRat Combined(%d)/Proc(%d)
Line 425: ++Set Tau Type With Imsi (HEDGE UPDATE)
Line 429: ++Set Tau Type With Imsi (HEDGE UPDATE)
Line 444: ++Set Tau Type With Imsi (HEDGE UPDATE)
Line 446: ++ Update Regi Result (%s)
Line 453: ++ Update Regi Result (%s)
Line 461: ++Set Tau Type With Imsi (HEDGE UPDATE)
Line 465: ++Set Tau Type With Imsi (HEDGE UPDATE)
Line 495: ++Current PLMN is not in EPLMN list. So enabling EUTRA.
Line 496: TRANSIT TO  - %s
Line 667: [UEID] %s ->
Line 667: [UEID] %s ->
Line 667: [UEID] %s : INVALID
Line 667: RAI is not valid - Fail to Update
Line 669: [UEID] %s ->
Line 669: [UEID] %s ->
Line 669: [UEID] %s : INVALID
Line 669: PTMSI is not valid - Fail to Update
Line 672: [UEID] %s ->
Line 672: [UEID] %s ->
Line 672: [UEID] %s : INVALID
Line 675: [UEID] %s ->
Line 675: [UEID] %s ->
Line 675: [UEID] %s : INVALID
Line 679: Attach failure - Flush PS to NOT updated state
Line 683: RAU failure - NOT updated state
Line 720: incrase UL count as SRVCC CS 
Line 730: MM UPDATE STATUS = SAE_MM_UPDATED So Set CS Supported Flags
Line 737: Current UEMODE : %d
Line 742: CsSrvRejCause = %x
Line 745: CS SERV DISABLED NEED POWER OFF AND ON
Line 748: Current UEMODE : %d
Line 790: GmmState = 0x%x
Line 791: GmmServiceState = 0x%x
Line 792: GmmProcedure = 0x%x
Line 793: GmmCause = 0x%x
Line 794: cellId = 0x%x
Line 795: PlmnId = 0x%x 0x%x 0x%x
Line 796: NumberOfEplmn = %x
Line 797: TIN = %x
Line 798: PlmnAttribute = %d
Line 799: PTMSI ==> 
Line 801: GMM KSI ==> %x
Line 802: GMM CK ==> 
Line 804: GMM IK ==> 
Line 806: LastRegRatMode = %d
Line 807: LastRegCsRatMode = %d
Line 808: EmmCombinedProc = %d
Line 809: ISR Status = %x
Line 810: isDcnUpdated ==> %d
Line 818: HandoverType = %d
Line 819: RAI ==> 
Line 821: SIM TMSI ==>
Line 823:  MM UPDATE STATUS = %x
Line 862: Warn>Conflict DDS in INIT_REQ: IntDDS=%d(%d), u8ImsDDS=%d(%d)
Line 871: Warn>Set wrong DDS : DualSimStatus=%d, iCurStack=%d, u8IntDDS=%d(%d)
Line 888: Current UEMODE : %d
Line 891: Current UEMODE : %d
Line 902: TRANSIT TO  - %s
Line 992: Ignore NS_EMM_IMS_REG_STATUS_SET, EMM_TMP_BLOCK_PLMN running
Line 1022: ++Transit RegiStatus (%d, %d) to (%d, %d)
Line 1047: ++ PsOnly service and IMS registered, so unblock the PLMN
Line 1097: T_PLMN_BARRING check: VoiceCentric=%d, CsSupport=%d, AddUpdateResult=%d, Cause=%d, PsOnlySearch=%d
Line 1104: _SET_RCVD_IMS_REG_PERM_FAILURE
Line 1109: Manual mode is enabled for TEST, Stay E-UTRAN
Line 1118: KDDI: IMS reg failed, don't disable EUTRA
Line 1143: Ignore IMS failure cuase in LTE mode
Line 1148: Ignore IMS failure cuase
Line 1152: Ignore IMS failure cuase
Line 1207: [IMS SVC] SSAC(%d), Rel12(%d)
Line 1223: [IMS SVC] Set establishment cause for IMS(%d)
Line 1230: [IMS SVC] No Impact
Line 1258: [IMS SVC] Set establishment cause for IMS(%d)
Line 1266: [IMS SVC] No Impact
Line 1267: [IMS SVC] IMSPROC FAIL_REASON : %s
Line 1324: Warn>++ IMS Sig is forcely released due to continuous restarting without END.
Line 1328: Warn>++ IMS Sig is restarted without END.
Line 1371: [DSDS] Hanging End due to ongoing SAEMM or SAEQM signalling procedure.
Line 1408: [DSDS] SENDING LTERRC_NAS_SIGNALING_END_IND
Line 1424: Warn>++ IMS Sig is not started.
Line 1442: [IMS SVC] Signal(%d) AccessNw(%d) Direction(%d)
Line 1448: [IMS SVC] %s(%d) %s(%d) %s(%d)
Line 1455: [IMS SVC] IMSPROC OPERATION : %s
Line 1459: [IMS SVC] IMSPROC SIGNAL_BITMAP : 0x%X
Line 1460: [IMS SVC] IMSPROC RSP : %d
Line 1464: Warn>[IMS SVC] Ignore in SUSPEND state
Line 1488: [IMS SVC] Signal(%d) AccessNw(%d) Direction(%d)
Line 1490: [IMS SVC] Fail reason(%d), Cause(%d), WaitTime(%d)
Line 1513: [IMS SVC] Fail reason(%d), Cause(%d), WaitTime(%d)
Line 1532: [DSDS]>> SAEMM_PerformActivateTimeoutActions
Line 1679: Warn>Set wrong DDS in Sigle SIM : IntDDS=%d, u8ImsDDS=%d
Line 1699: TRANSIT TO  - %s
Line 1737: MultiMode (%d)->(%d)
Line 1742: UECAP_INFO_UPD_NEEDED (%d)
Line 1779: IsModechanged: %d
Line 1817: Multi mode is the same but NR NSA or SA is changed
Line 1851: Reset Proc Context %s
Line 1871: Set Detach Reason %d
Line 1879: Set PowerOff Detach
Line 1889: ++FakeType to For Detach (ModeSelect & Special Restart Feature)
Line 1907: Warn>++Ignore Internal Detach for RJIO
Line 1943: ++ Transit To Active NAS: %s
Line 1945: ++EQM RELEASE TYPE: %s
Line 1967: ++ Transit To Active NAS: %s
Line 1968: Reset Proc Context %s
Line 1969: Reset Proc Context %s
Line 1970: Reset Proc Context %s
Line 1971: Reset Proc Context %s
Line 1972: Reset Proc Context %s
Line 1998: ++EQM RELEASE TYPE: %s
Line 1998: ++DetachType: %s
Line 1999: ++EQM RELEASE TYPE: %s
Line 1999: ++DetachType: %s
Line 2000: ++EQM RELEASE TYPE: %s
Line 2000: ++DetachType: %s
Line 2002: Warn>Type Mismatch(%d)
Line 2025: ++ SMS FAIL CAUSE : %s
Line 2029: ++ SMS FAIL CAUSE : %s
Line 2033: ++ SMS FAIL CAUSE : %s
Line 2037: ++ SMS FAIL CAUSE : %s
Line 2041: ++ SMS FAIL CAUSE : %s
Line 2074: ++ DATA STATE NOTI : %s
Line 2080: ++ DATA STATE NOTI : %s
Line 2089: ++ DATA STATE NOTI : %s
Line 2094: Warn>++Not EMC Attached State - NonAvailable
Line 2095: ++ DATA STATE NOTI : %s
Line 2110: ++ DATA STATE NOTI : %s
Line 2111: ++ SMS STATUS NOTI : %s
Line 2114: ++ LBS STATUS NOTI : %s
Line 2119: ++ DATA STATE NOTI : %s
Line 2120: ++ SMS STATUS NOTI : %s
Line 2123: ++ LBS STATUS NOTI : %s
Line 2163: ++Pti(%d), EpsBearerId(%d), Type(%d), Cause(%d)
Line 2177: ++Pti(%d), EpsBearerId(%d), Type(%d)
Line 2220: ++Pti(%d), EpsBearerId(%d), Type(%d)
Line 2236: ++Pti(%d), EpsBearerId(%d), Type(%d), Cause(%d)
Line 2250: ++Pti(%d), EpsBearerId(%d), Type(%d)
Line 2350: Warn>N/A Paging ID
Line 2356: Warn>++PagingId: %d, LenOfCli: %d
Line 2398: ++ SMS STATUS NOTI : %s
Line 2404: ++ SMS STATUS NOTI : %s
Line 2415: ++ SMS STATUS NOTI : %s
Line 2421: ++ SMS STATUS NOTI : %s
Line 2426: Do not send Sms State Noti (PS off is ongoing)
Line 2455: Sms State Noti :%d
Line 2457: Reset Proc Context %s
Line 2467: EstCnf (SMS TI : %d)
Line 2469: Reset Proc Context %s
Line 2481: EstProc (SMS TI : %d)
Line 2484: Reset Proc Context %s
Line 2496: DataCnf : %d (SMS TI : %d)
Line 2499: Reset Proc Context %s
Line 2585: DO_NOT_SEARCH_CURRENT_RAT: %d
Line 2646: ++ No Cell Info : NoCell List (%d)

Line 2649: Warn>++ NO Cell Info : Current Band is not in the LTE supported band list; SearchCurrentRAT:%d (%d)
Line 2664: Warn>++ NO Cell Info : Re-search EUTRA; _SEARCH_CURRENT_RAT TRUE
Line 2677: Warn>++ NO Cell Info : Re-search EUTRA; SearchCurrentRAT: %d
Line 2738: ++HoldPlmnRsp[%d] sends to MMC
Line 2765: ++EmcSupport(%d) : SIB1(%d), SIB2(%d), MME(%d), EMC Call Status(%d), IMS VOLTEEnable(%d), IMS REG(%d)
Line 2777: ++Request Plmn Action[%d][%d] Forbiddance Timer Cause[%d] Count[%d]
Line 2817: ++ Block PLMN Actions

Line 2866: ++NeedPlmnSel(%d), IsNormalService(%d)
Line 2867: ++ImsVoiceSupport(%d), MME_EmcSupport(%d) 
Line 2903: SetReattachOngoing Flag for Implicit Cause
Line 2910: ClearOngoingProc()
Line 3020: Warn>++ HPLMN->EPLMN list in Visted Campon, HOME
Line 3030: Used the previous regi status = %d
Line 3248: NsEmmProcType (%d)
Line 3277: ++SYNC_DONE(%d)|REGI_NOTI(%d)|CELLINFO(%d)|CAUSE(%d)|REFLAG(%d)
Line 3279: ++Swap Reject Cause (%d) not to blink ServiceIcon in the case of Reattach
Line 3309: AttachRejCount(%d), IsAttachRej4Times = %d
Line 3422: ++RegiStatus(%d), Cause(%d/%d), CELLINFO(%d), Domain(%d)
Line 3426: ++RegiStatus(%d), Cause(%d), CELLINFO(%d), Domain(%d), AttachFailureFlg(%d)
Line 3468: Current TauUpdateType(%d)
Line 3473: Current AddUpdateResult(%d)
Line 3510: isUeInitiatedDet: %d
Line 3511: isNwInitiatedDet: %d
Line 3521: EmcAttachAuthState: %d
Line 3631: ++ send EMC List 0 to AP in case of Roaming
Line 3647: ++ EmergencyCallType[%d]
Line 3659: ++ ExtEmcNumListValidity[%d], ExtEmergencyCallListNum[%d]
Line 3665: ++ ExtEmcNumLength[%d]
Line 3670: ++ SubServiceLength[%d]
Line 3779: ++ TimerType (%x) TimerStatus (%x) TimerValue (%d)
Line 3821: ++Fetch preserved Attach context status(%d)
Line 3825: ++SyncDone to PDNMGR
Line 3845: ++Store Attach PDN Context to PDNMGR [%d]
Line 3918: ++Update Block PLMN (%d)
Line 4022: ++EmcSupport(%d) : SIB1(%d), SIB2(%d), MME(%d)
Line 4023: IMS_VOLTEEnable(%d) IMS_REG(%d), EutranCapDisableFlag(%d), Ims_Reg_RAT(%d)
Line 4060: ++ MmcStateInd : EmmState[%d] FuncState[%d] Pdn[%d] Tai[0x%x0x%x0x%x]
Line 4063: EMC_PDN_Status to MMC = 0x%x
Line 4545: SET TIN : %s
Line 4701: ++ LBS STATUS NOTI : %s
Line 4711: ++ LBS STATUS NOTI : %s
Line 4722: ++ LBS STATUS NOTI : %s
Line 4726: ++ LBS STATUS NOTI : %s
Line 4755: ++ LBS State Noti :%d
Line 4757: Reset Proc Context %s
Line 4767: ++ EstCnf (LBS TI : %d)
Line 4769: Reset Proc Context %s
Line 4783: ++ DataCnf : %d (LBS TI : %d)
Line 4787: Reset Proc Context %s
Line 4804: ++ LCS Status Ind - EpcLcsStatus:%d CsLcsStatus %d
Line 4834: T3245Status=%d, T3247Status=%d 
Line 4854: RejectTimerState=%d NwRejCause=%d T3247Counters=%d
Line 4896: CongestionControlInd->T3246Status = 0x%x
Line 4897: CongestionControlInd->T3246Value = 0x%x
Line 4898: CongestionControlInd->T3346Status = 0x%x
Line 4899: CongestionControlInd->T3346Value = 0x%x
Line 4900: CongestionControlInd->T3346Type = 0x%x
Line 4949: Emc call already ended, trigger QRB after normal volte call end
Line 4987: ++ _DETACH_PENDING_TO_WAIT_IMS_DEREGI(%d)
Line 4990: Start pending Detach Procedure after VoLTE call end
Line 4999: ++ Don't need to wait for deactivating Dedicated bearer.
Line 5031: Multi mode was updated during ogoing call, so after local release TAU will be performed
Line 5152: ++ DATA STATE NOTI : %s
Line 5177: ++ Suspended VoLTE Call is cleared.
Line 5188: ++ Dedicated bearer is not released yet.
Line 5221: ++ Dedicated bearer has already been released.
Line 5254: _WAIT_FOR_VOLTE_CALL_END flag(%d)
Line 5275: Warn>VOLTE CALL is ended after #17 fail
Line 5284: Check for IB NC : VC=%d, CsSupport=%d, IB=%d, 
Line 5628: Proc=0x%X, Cause=0x%X
Line 5670: Not valid PAL PLMN INFO EVENT
Line 5694: ++ TUNNELING STATE NOTI : %s
Line 5698: ++ TUNNELING STATE NOTI : %s
Line 5702: ++ TUNNELING STATE NOTI : %s
Line 5708: ++ TUNNELING STATE NOTI : %s
Line 5713: ++ TUNNELING STATE NOTI : %s
Line 5866: ++TauAttemptCnt : [%d]
Line 5867: ++CsoFailuretCnt : [%d]
Line 5873: SAEMM_CSO - Failure due to reject cause #%d observed is not consecutive in the current stack
Line 5878: SAEMM_CSO - Failure due to reject cause #%d not observed in the current stack
Line 5895: ++LTE PS BARRING - %s
Line 5941: SAEMM_CSO - SAEMM_SendDsdsPerformActionsReq %d
Line 5945: Single SIM is present or Same operator SIM cards are not present so PerformCause -> %d cannot be handled
Line 5984: Single SIM is present or Same operator SIM cards are not present so PerformCause -> %d cannot be handled
Line 5995: SAEMM_CSO - Perform Cause %d
Line 5996: SAEMM_CSO - Received TAI
Line 5998: SAEMM_CSO - Received Active RAT %d
Line 6003: SAEMM_CSO Cross Stack Optimization conditions not satisfied -> Ignoring %d operations
Line 6028: SAEMM_CSO - %d operations not performed 
Line 6050: No defined action in SAEMM_DsdsPerformActionsReq_DefaultHdlr
Line 6072: %s, SERVICE_STATE(%d)
Line 6097: UECAP_INFO_UPD_NEEDED (%d)
Line 6150: State=%d
Line 6170: PlmnId=0x%X 0x%X 0x%X, Cellular=%d, NasMsg=%d, Emergency=%d
Line 374: ++Set Tau Type With Imsi (HEDGE UPDATE)
Line 376: ++ Update Regi Result (%s)
Line 382: ++ Update Regi Result (%s)
Line 386: ++ Update Regi Result (%s)
Line 549: UECAP_INFO_UPD_NEEDED (%d)
Line 559: Reset Proc Context %s
Line 589: Warn>++SAE_GMM_NO_IMSI of GMM -> Forcely Trigger TAU
Line 598: ++Disable Temp -> Enable State
Line 599: TRANSIT TO  - %s
Line 527: ++ Transit To Active NAS: %s
Line 529: ++EQM RELEASE TYPE: %s
Line 535: Warn>No Rat Mode (from HEDGE)
Line 4239: NrQrbNeeded = 0x%x
Line 4250: ++T3412 (%d)
Line 4266: ++T3423 (%d)
Line 4310: Uplink NasCount = 0x%x
Line 4311: Downlink NasCount = 0x%x
Line 4324: IRAT Type %d
Line 4328: Idle Mode IRAT -> Increase Nas UL Count
Line 4396: GmmState = 0x%x
Line 4397: GmmServiceState = 0x%x
Line 4398: GmmProcedure = 0x%x
Line 4399: GmmCause = 0x%x
Line 4400: cellId = 0x%x
Line 4401: PlmnId = 0x%x 0x%x 0x%x
Line 4402: PTMSI ==> 
Line 4404: PTMSI Signature ==> 
Line 4406: GMM KSI = %x
Line 4407: GMM CK ==> 
Line 4409: GMM IK ==> 
Line 4411: EmmCombinedProc = 0x%x
Line 4412: ImsiAttachState = %x
Line 4413: CsSrvRejCause = 0x%x
Line 4414: MmUpdateStatus = 0x%x
Line 4415: EutranDisabled = 0x%x
Line 4416: LastRegRatMode = 0x%x
Line 4417: LAI ==> 
Line 4419: TMSI ==> 
Line 4424: ISR Status on LTE = 0x%x
Line 4427: Tin = %d
Line 4431: SRVCC CK ==> 
Line 4433: SRVCC IK ==> 
Line 4435: GMM CK Without PSHO==> 
Line 4437: GMM IK Without PSHO ==> 
Line 4443: EMC_PDN_Status to MMC = 0x%x
Line 4445: ImsVoiceSupport to MMC = 0x%x
Line 4447: NonIntegrityProtectedNasMessage = 0x%x
Line 4449: NrQrbNeeded = 0x%x
Line 4450: isDcnUpdated = %d
