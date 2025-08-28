Line 81: [A :MM,%d]  MM_GetNrmmNSC : stack[%d]
Line 81: [MM|%d,CP] MM_GetNrmmNSC : stack[%d]
Line 87: [D :MM,%d]  %%!EM NrmmContext not exist
Line 94: [A :MM,%d]  %%!EM ERROR : ConstructEmmSecInfoUpdateInd::currentNSC is not activated
Line 94: [MM|%d,CP] %%!EM ERROR : ConstructEmmSecInfoUpdateInd::currentNSC is not activated
Line 125: [A :MM,%d]  MM_GetNrmmNSC : ngKSI[%d] NrIntAlg[%d] EpsIntAlg[%d] EpsEncAlg[%d]
Line 125: [MM|%d,CP] MM_GetNrmmNSC : ngKSI[%d] NrIntAlg[%d] EpsIntAlg[%d] EpsEncAlg[%d]
Line 126: [A :MM,%d]  MM_GetNrmmNSC : UlCount[%d] DlCount[%d]
Line 126: [MM|%d,CP] MM_GetNrmmNSC : UlCount[%d] DlCount[%d]
Line 127: [DumpHex] MM_GetNrmmNSC : K_AMF
Line 128: [DumpHex] MM_GetNrmmNSC : K_INT_NR
Line 136: [A :MM,%d]  MM_IncreaseNrmmUlcount : stack[%d]
Line 136: [MM|%d,CP] MM_IncreaseNrmmUlcount : stack[%d]
Line 142: [D :MM,%d]  %%!EM NrmmContext not exist
Line 156: [A :MM,%d]  MM_IncreaseNrmmUlcount : UL count[%d]
Line 156: [MM|%d,CP] MM_IncreaseNrmmUlcount : UL count[%d]
Line 161: [D :MM,%d]  MM_ResetUserUniqueID 
Line 168: [A :MM,%d]  %%!EM NrmmContext not exist stack[%d]
Line 168: [MM|%d,CP] %%!EM NrmmContext not exist stack[%d]
Line 184: [D :MM,%d]  MM_ResetUserUniqueID : IMSI and IMEI
Line 189: [N :MM,%d]  MM_HMM_REG_INFO_UPD_IND_Handler
Line 204: [N :MM,%d]  Not set a target object for NRMM
Line 266: [N :MM,%d]  MM_GMC_INIT_REQ_Handler : MultiMode = %d, Domain Type = %d, NrSupportMode %d, EMC_MODE %d
Line 295: [A :MM,%d]  %%!EM Set UE USAGE to DATA_CENTRIC forcedly on NR only mode + CS_VOICE_ONLY
Line 295: [MM|%d,CP] %%!EM Set UE USAGE to DATA_CENTRIC forcedly on NR only mode + CS_VOICE_ONLY
Line 312: [N :MM,%d]  UE_NR_OP_MODE : %d
Line 313: [N :MM,%d]  ECALL_ONLY_MODE : %d
Line 314: [N :MM,%d]  SIM_PRESENT : %d
Line 315: [N :MM,%d]  UE_OP_MODE : %d
Line 316: [N :MM,%d]  UE_CS_SVC_SUPPORTED : %d
Line 317: [N :MM,%d]  UE_VOICE_PREF : %d
Line 318: [N :MM,%d]  SIM_DUAL_STATUS : %d
Line 319: [N :MM,%d]  RAT_CURRENT : %d
Line 320: [N :MM,%d]  UE USAGE : %d
Line 321: [N :MM,%d]  FEDV_SUPPORT : %d
Line 322: [N :MM,%d]  IMS CAPA STATUS : %d
Line 323: [N :MM,%d]  NR_SA_CAPA_STATUS : %d
Line 333: [N :MM,%d]  DSDS_DOMAIN_STACK1 : %d
Line 390: [N :MM,%d]  %%!RE N1 Mode Disabled : UE_USAGE = Voice Centric, VOICE_PREF = %d, UE_IMS_CAPA_STATUS = %d
Line 431: [DumpHex] Received MM_GMC_IRAT_CHANGE_REQ : 
Line 440: [N :MM,%d]   Selected Plmn = 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 466: [N :MM,%d]  MmFt::MM_GMC_MODE_UPDATE_REQ_Handler
Line 467: [N :MM,%d]     MM_GMC_MODE_UPDATE_REQ_T.NewMode : %d
Line 525: [N :MM,%d]  PLMN SEARCH REQ Mode : %d, Attribute : %d
Line 528: [N :MM,%d]  Selected PLMN ID : 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 577: [N :MM,%d]  MM stop in progress or MM state wait for RRC conn
Line 612: [N :MM,%d]  MmFt::MM_GMC_RESUME_REQ_Handler : ActiveRAT = %x
Line 616: [N :MM,%d]  Ignore MM_GMC_RESUME_REQ. Send direct CNF
Line 651: [N :MM,%d]  Ignore MM_GMC_SUSPEND_REQ. Send direct CNF
Line 657: [N :MM,%d]  Ignore MM_GMC_SUSPEND_REQ. Wait until receive RRC_MM_SUSPEND_CNF msg
Line 689: [N :MM,%d]  MmFt::MM_GMC_UPDATE_PLMNINFO_IND_Handler
Line 695: [N :MM,%d]  N1 MODE STATUS : %d, N1 MODE UPDATE NEEDED : %d
Line 700: [N :MM,%d]  EUTRA STATUS : %d -> %d
Line 702: [N :MM,%d]  PLMN SELECTION MODE : %d
Line 705: [N :MM,%d]  PLMN ATTRIBUTE : %d
Line 708: [N :MM,%d]  CSG ENABLED : %d
Line 716: [N :MM,%d]  MmFt::MM_GMC_ABORT_PLMN_LIST_REQ_Handler
Line 726: [N :MM,%d]  MmFt::MM_GMC_MCC_REQ_Handler
Line 739: [N :MM,%d]  MM_GMC_DDS_CHANGE_IND_Handler DDSChange %d IntDDSMode %d
Line 761: [N :MM,%d]  MM_GMC_DUALSIM_STATUS_IND_Handler : Dual SIM Status = %d
Line 771: [N :MM,%d]  MmFt::MM_GMC_FEDV_STATE_IND_Handler IsFeDvOn %d
Line 799: [N :MM,%d]  MM_GMC_STOP_REQ_Handler
Line 811: [N :MM,%d]  MM_GMC_STOP_REQ_Handler : IsRecovery : %d
Line 826: [N :MM,%d]  Ignore MM_GMC_STOP_REQ. Send direct CNF message
Line 831: [N :MM,%d]  Ignore MM_GMC_STOP_REQ. Wait until receive RRC_MM_SUSPEND_CNF msg
Line 834: [N :MM,%d]  Do not route to nrmm
Line 852: [N :MM,%d]  MM_IMSCC_SERVICE_STATUS_IND_Handler
Line 859: [N :MM,%d]  MM_IMSAP_SERVICE_STATUS_IND_Handler
Line 902: [E :MM,%d]  %%!EM Failed to get NrSmSessionDB !!
Line 906: [N :MM,%d]  MmFt::MM_SMT_UE_SESSION_INFO_IND_Handler, PDU Session Status = %x
Line 911: [N :MM,%d]  invalid active RAT : %x
Line 931: [W :MM,%d]  %%!EM Inavlid absent ind, DomainType(%d), SimId(%d)
Line 931: [MM|%d,CP] %%!EM Inavlid absent ind, DomainType(%d), SimId(%d)
Line 959: [N :MM,%d]  MM_SIM_MULTI_READ_ARRAY_CNF Fail! Fail to endter MmIdle state
Line 960: [MM|%d,CP] MM_SIM_MULTI_READ_ARRAY_CNF Fail! Fail to endter MmIdle state
Line 1025: [N :MM,%d]  MmFt::MM_RM_REGISTRATION_REQ_Handler() Attach Type = %d
Line 1033: [N :MM,%d]  Ignore REG_REQ, PowerOnRegRequested = %d, MM State = 0x%x %08x, 
Line 1049: [N :MM,%d]  MmFt::MM_RM_DEREGISTRATION_REQ_Handler() Detach Type = %d
Line 1060: [N :MM,%d]  Emergency call status : [%d]
Line 1075: [N :MM,%d]  IMS CAPA STATUS : %d
Line 1087: [N :MM,%d]  IMS feature[%d], Reg Status[%d]
Line 1129: [DumpHex] Received rMsgBody body: 
Line 1137: [A :MM,%d]  %%!EM Unexpected command(%d)
Line 1137: [MM|%d,CP] %%!EM Unexpected command(%d)
Line 1161: [N :MM,%d]  Received AT+CMICO : RequestedMode[%d], RequestedActiveTime[%d]
Line 1186: [N :MM,%d]  MM_RRC_PREFERRED_CELL_CHECK_IND_Handler
Line 1192: [N :MM,%d]  MM_RM_ADD_PREFERRED_CELL_LIST_IND_Handler
Line 1198: [N :MM,%d]  MM_RM_REMOVE_PREFERRED_CELL_LIST_IND_Handler
Line 1204: [N :MM,%d]  MM_RM_NETWORK_TIME_REQ_Handler
Line 1211: [N :MM,%d]  MM_RM_IMS_CALL_STATUS_IND_Handler
Line 1217: [N :MM,%d]  MM_RM_CONGESTION_CONTROL_IND_Handler
Line 1223: [N :MM,%d]  MM_RM_FORBIDDANCE_STATUS_IND_Handler
Line 1232: [A :MM,%d]  %%!EM CELL_IND received while foreground PLMN search is in progress. skip it!!
Line 1232: [MM|%d,CP] %%!EM CELL_IND received while foreground PLMN search is in progress. skip it!!
Line 1241: [N :MM,%d]  Keep AS_STATE_IN_CONNECT during RRC inactived
Line 1292: [N :MM,%d]   MM_RRC_REL_CNF_Handler - ERROR!! REL_CNF is delivered on NOT MM_STATE_IDLE
Line 1309: [N :MM,%d]   MmFt::MM_RRC_REL_IND_Handler - ERROR!! REL_IND is delivered on NOT MM_STATE_IDLE/WAIT_FOR_DATA_CNF
Line 1317: [N :MM,%d]  MmFt::MM_RRC_DATA_IND_Handler
Line 1326: [N :MM,%d]  MM_RRC_DATA_CNF, Result = %d
Line 1338: [N :MM,%d]  Ignore the message when Suspend in progress
Line 1357: [N :MM,%d]  MM_RRC_INIT_CNF_Handler
Line 1367: [N :MM,%d]  MM_RRC_IRAT_CHANGE_CNF : Type = %d
Line 1391: [DumpHex] Received MM_RRC_IRAT_CHANGE_REQ : 
Line 1417: [N :MM,%d]  MmFt::MM_RRC_MCC_CNF_Handler : Result = %d
Line 1420: [N :MM,%d]  MCC %02X %02X %02X MNC %02X %02X %02X
Line 1454: [N :MM,%d]  MM_RRC_PLMN_SEARCH_CNF, Result = %d
Line 1467: [DumpHex] PLMN List : 
Line 1481: [N :MM,%d]  MM_RRC_PLMN_LIST_ABORT_CNF, Result(%d) NumOfPlmns = %d
Line 1485: [DumpHex] PLMN ID : 
Line 1490: [N :MM,%d]  RRC Plmn List Search Failed : Cause = %d
Line 1509: [N :MM,%d]  MM_RRC_PLMN_LIST_CNF, NumOfPlmns = %d
Line 1513: [DumpHex] PLMN ID : 
Line 1518: [N :MM,%d]  RRC Plmn List Search Failed : Cause = %d
Line 1537: [N :MM,%d]  MmFt::MM_RRC_NAS_SEC_UPDATE_REQ_Handler
Line 1721: [N :MM,%d]  MmFt::MmAirMsgIndProc() : %d
Line 1722: [N :MM,%d]  MM_MM_NRMM_AIR_MSG_IND Mui = %x, SourceTask = %s
Line 1757: [N :MM,%d]  MmFt::MM_MM_NRMM_INIT_CNF_Handler
Line 1823: [N :MM,%d]   MmFt::SendIntMsg ERROR : MmMessage Object is not ready
Line 1833: [N :MM,%d]   MmFt::SendExtMsg ERROR : MmMessage Object is not ready
Line 1843: [N :MM,%d]   MmFt::SendExtMsg ERROR : MmMessage Object is not ready
Line 1853: [N :MM,%d]  |*******************************************************************************************|
Line 1876: [N :MM,%d]  |*******************************************************************************************|
Line 1971: [DumpHex] Imei : 
Line 1972: [DumpHex] Imeisv : 
Line 2256: [N :MM,%d]  DDS = %d, ImsDDS = %d
Line 2263: [N :MM,%d]  DDS %d, ImsDDS %d
Line 2289: [N :MM,%d]  Old DDS %d, New DDS %d, Local release timer = %d
Line 2319: [N :MM,%d]  RegisterMsaUserCallback SRNC_CSPSSIG : %d
Line 2321: [N :MM,%d]  RegisterMsaUserCallback SRNC_PSCALL : %d
Line 2323: [N :MM,%d]  RegisterMsaUserCallback SRNC_CSCALL : %d
Line 2334: [A :MM,%d]  %%!EM Can not find CnCommonDb
Line 2334: [MM|%d,CP] %%!EM Can not find CnCommonDb
Line 2341: [A :MM,%d]  %%!EM Can not find MmContext
Line 2341: [MM|%d,CP] %%!EM Can not find MmContext
