Line 93: [N :MM,%d]  NrmmExtHdlrRRC::NrmmExtHdlrRRC
Line 114: [N :MM,%d]  MM_RRC_INACTIVE_IND_Handler
Line 132: [N :MM,%d]  %%!EM Inactive Ind only as Connected mode 
Line 140: [N :MM,%d]  MM_RRC_BARRING_ALLEV_IND_Handler
Line 146: [N :MM,%d]  %%!CO allevAccessCategories : %X%X, BarredAccessCategories : %X%X
Line 198: [N :MM,%d]  Not supported this AS version
Line 202: [N :MM,%d]  Not supported this AS version
Line 210: [N :MM,%d]  UpdateNasRelVersion : NasRelVersion : %s(%d), AS Release Version : %d
Line 212: [N :MM,%d]  UpdateNasRelVersion : NasRelVersion : %s(%d), AS Release Version : %d
Line 256: [N :MM,%d]  Recovery from OOS or NR RAT resumed
Line 281: [N :MM,%d]  NR TAI Changed
Line 294: [N :MM,%d]  MICO RAAI enabled. Treat current cell in RTAI LIST
Line 313: [N :MM,%d]  Current TAI is not in TAI List
Line 373: [N :MM,%d]  MM_RRC_CELL_IND_Handler
Line 393: [N :MM,%d]  Skip CELL_IND process and perform RRC terminate for msg crossover case processing !!
Line 443: [N :MM,%d]  RPLMN changed
Line 450: [N :MM,%d]  Camped PLMN changed
Line 474: [DumpHex] tmpbuffer for loading UAC ODAC: 
Line 482: [N :MM,%d]  %%!EM ODAC decoding fail, Length = %d
Line 487: [N :MM,%d]  %%!EM Invalid ODAC Length from Registry, Length = %d
Line 492: [N :MM,%d]  %%!EM No valid ODAC from Registry, Length = %d
Line 503: [N :MM,%d]  cur_NumOfOprDefAccCat UAC ODAC  : %d
Line 508: [DumpHex] Current camped PlmnId
Line 523: [DumpHex] S1_UE_NET_CAPA : 
Line 527: [D :MM,%d]  Error. S1_UE_NET_CAPA length is over than MAX value %d
Line 532: [D :MM,%d]  Error. Can't get GetS1UeNWCapbilityId! NRMM will use previous UE S1 capa
Line 547: [N :MM,%d]  Don't need to STOP T3346 on EPLMN case
Line 562: [N :MM,%d]  [CELL INFO] Previous Camped TAI : 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 564: [N :MM,%d]  [CELL INFO] Current Camped TAI : 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 566: [MM|%d,CP] [CELL INFO] Current Camped TAI : 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 567: [N :MM,%d]  [CELL INFO] Cell ID : 0x%X 0x%X
Line 568: [MM|%d,CP] [CELL INFO] Cell ID : 0x%X 0x%X
Line 569: [N :MM,%d]  [CELL INFO] Camped on RTAI  : %d
Line 570: [N :MM,%d]  [CELL INFO] Camped on FPLMN : %d
Line 571: [N :MM,%d]  [CELL INFO] Camped on FTAI  : %d
Line 572: [N :MM,%d]  [CELL INFO] Camped on FTAI for RPS : %d
Line 573: [N :MM,%d]  [CELL INFO] Camped on Non Allowed Service Area : %d
Line 574: [N :MM,%d]  [CELL INFO] Selected PLMN is vaild : %d
Line 575: [N :MM,%d]  [CELL INFO] Plmn Selection Mode : %d
Line 576: [N :MM,%d]  [CELL INFO] N1 Mode Status : %d
Line 577: [N :MM,%d]  [CELL INFO] Cell Service Type  : %d
Line 578: [N :MM,%d]  [CELL INFO] REG Required  : %d
Line 579: [N :MM,%d]  [CELL INFO] SR Required  : %d
Line 580: [N :MM,%d]  [CELL INFO] EMC available : %d
Line 581: [N :MM,%d]  [CELL INFO] FR Type : %d
Line 582: [N :MM,%d]  [CELL INFO] RNA Updated : %d
Line 583: [N :MM,%d]  [CELL INFO] VONR Support : %d
Line 585: [N :MM,%d]  [CELL INFO] AccBarringForEmergency[%d]
Line 586: [DumpHex] [CELL INFO] BarringInfo : 
Line 621: [N :MM,%d]  %%!EM UE camped on service restriction area, set sub state to SUB_NON_ALLOWED_SERV
Line 673: [N :MM,%d]  MM_RRC_DATA_CNF_Handler
Line 677: [N :MM,%d]  Unexpected message. Ignored. Current As State : %d
Line 690: [N :MM,%d]   wait for Rel ind and IRAT change req due to DATA CNF w/ redirection 
Line 721: [N :MM,%d]  NrmmExtHdlrRRC::MM_RRC_DATA_CNF_Handler : %d, Mui = %x, Cause = %x, Barred Cat = %x %x
Line 727: [N :MM,%d]  Unexpected NRMM_RADIO_MSG_REGISTRATION_COMPLETE message. Ignored.
Line 735: [D :MM,%d]  It's CrossOverCase between FALLBACK_IND and DATA_REQ, Cause change to FALLBACK_IND
Line 746: [D :MM,%d]  RRC connection resusme failed on RRC_CONNECTED_INACTIVE state, recovery REG procedure will be initiated
Line 750: [N :MM,%d]  %%!RE Registration is needed(NRMM_MOBILITY_REGSUB_RECOVERY_RRC_CON_FAIL)
Line 765: [N :MM,%d]  Keep current INACTIVE state as per DATA_CNF cause : %d
Line 784: [N :MM,%d]  IMS connection already established and UAC barring check is okay 
Line 803: [N :MM,%d]  MM_RRC_DATA_IND_Handler
Line 821: [A :MM,%d]  %%!EM MM_RRC_DATA_IND pData is NULL, Discard the message!!
Line 821: [MM|%d,CP] %%!EM MM_RRC_DATA_IND pData is NULL, Discard the message!!
Line 825: [N :MM,%d]  MM_RRC_DATA_IND_Handler: dataLength: %d(Dump Max. 600)
Line 826: [DumpHex] pData : 
Line 837: [N :MM,%d]  Discard DATA_IND during POWER OFF DEREG in prgress!!
Line 849: [N :MM,%d]  DATA IND Len = %d
Line 852: [N :MM,%d]  RadioMsg[%s]
Line 862: [A :MM,%d]  %%!EM [Error] Ignore received 5GMM common message while DEREG in progress
Line 862: [MM|%d,CP] %%!EM [Error] Ignore received 5GMM common message while DEREG in progress
Line 872: [A :MM,%d]  %%!EM [Error] Ignore received unexpected MM message !!
Line 872: [MM|%d,CP] %%!EM [Error] Ignore received unexpected MM message !!
Line 895: [N :MM,%d]  PD Delete NSSAI : Type = %d
Line 902: [N :MM,%d]  PD Delete NSSAI : Default Configured NSSAI
Line 910: [N :MM,%d]  PD Delete NSSAI : Configured NSSAI = 0x%x %x %x
Line 918: [N :MM,%d]  PD Delete NSSAI : Allowed NSSAI = 0x%x %x %x
Line 923: [N :MM,%d]  Invalid Delete NSSAI Type.
Line 951: [N :MM,%d]  Loopback case, NRMM will clear IMS registration status also.
Line 962: [A :MM,%d]  %%!EM [Error] MM_RRC_DATA_IND_Handler : EPD Mismatch!! Rcvd EPD = %d
Line 962: [MM|%d,CP] %%!EM [Error] MM_RRC_DATA_IND_Handler : EPD Mismatch!! Rcvd EPD = %d
Line 975: [A :MM,%d]  %%!EM [Error] Nas Message Protection check failed
Line 975: [MM|%d,CP] %%!EM [Error] Nas Message Protection check failed
Line 980: [A :MM,%d]  %%!EM [Error] Skip DATA_IND process not on CONNECTED state
Line 980: [MM|%d,CP] %%!EM [Error] Skip DATA_IND process not on CONNECTED state
Line 1005: [N :MM,%d]  MM_RRC_NAS_CONTAINER_IND_Handler
Line 1050: [N :MM,%d]  MM_RRC_EST_CNF_Handler : %d
Line 1068: [N :MM,%d]  MM_RRC_EST_REJ_Handler : %d
Line 1072: [N :MM,%d]  RRC EST REJ Cause : [%d] [%x %x]
Line 1093: [N :MM,%d]  MM_RRC_FALLBACK_IND_Handler
Line 1098: [W :MM,%d]  %%!EM Fallback indication received NOT in connected state !!
Line 1098: [MM|%d,CP] %%!EM Fallback indication received NOT in connected state !!
Line 1107: [N :MM,%d]  Previously activated RB status saved on FALL BACK ind case = %x
Line 1120: [N :MM,%d]  MM_RRC_INIT_CNF_Handler
Line 1126: [N :MM,%d]  Set N1 mode disable UeUsage : Voice Centric, VOICE_PREF : %d, Volte_permanent_fail : %d
Line 1138: [N :MM,%d]  INVALIDATE_SIM_FOR_SIM_SUCI_NOT_SUPPORTED = %d, USIM_SUPPORT_SUCI = %d NWPUBKEY_AVAILABLE = %d IGNORE_INVALIDATE_SIM_FOR_TEST = %d
Line 1139: [N :MM,%d]  SUCI_CALC_BY_USIM = %d MAKE_TYPE = %d
Line 1148: [N :MM,%d]  Set SIM as invalid : SIM does not support SUCI
Line 1155: [N :MM,%d]  SupportedBandMaxTime : %d
Line 1172: [N :MM,%d]  Set default initial PLMN search time : %d
Line 1183: [N :MM,%d]  MM_RRC_PLMN_SEARCH_CNF_Handler
Line 1210: [N :MM,%d]  MM_RRC_PLMN_LIST_ABORT_CNF_Handler
Line 1218: [N :MM,%d]  MM_RRC_PLMN_LIST_CNF_Handler
Line 1231: [N :MM,%d]  MM_RRC_REL_IND_Handler
Line 1232: [N :MM,%d]  RRC Release cause : [%d]
Line 1250: [N :MM,%d]  RRC connection release during EMC FB in progress, perform forced IRAT change
Line 1264: [N :MM,%d]  MM_RRC_REL_IND is processed on NO_CELL state
Line 1270: [N :MM,%d]  Perform local deregistration if UE is registered as emergency and emergency PDU is released
Line 1277: [N :MM,%d]  MM_RRC_REL_IND is processed on MM_STATE_RRC_INACTIVE
Line 1290: [E :MM,%d]  %%!EM Failed to get NrSmSessionDB !!
Line 1309: [DumpHex] MM_RRC_NAS_SEC_UPDATE_REQ_Handler : 
Line 1310: [DumpHex]  : NasContainer : 
Line 1313: [DumpHex]  : LTE NH : 
Line 1319: [N :MM,%d]  INTRA N1_HO
Line 1324: [N :MM,%d]  S1 TO N1 HO
Line 1329: [N :MM,%d]  MM_RRC_NAS_SEC_UPDATE_REQ_Handler : Can not handle NasContainer with length dataLength
Line 1343: [DumpHex] MM_RRC_OOS_IND_Handler : 
Line 1344: [MM|%d,CP] %%!EM Received MM_RRC_OOS_IND
Line 1363: [N :MM,%d]  MM_RRC_RAT_SUSPEND_CNF_Handler
Line 1378: [N :MM,%d]  %%!RT [ NR SUSPENDED ]
Line 1400: [N :MM,%d]  MM_RRC_RAT_RESUME_CNF_Handler
Line 1403: [N :MM,%d]  %%!DD [END]   SRNC_REGISTER [%s]
Line 1409: [N :MM,%d]  MM_RRC_STOP_CNF_Handler
Line 1415: [N :MM,%d]  %%!RT [ NR STOP ]
Line 1421: [N :MM,%d]  MM_RRC_PAGE_IND_Handler
Line 1430: [E :MM,%d]  ERROR : Voice call on-going
Line 1434: [E :MM,%d]  ERROR : PS on Emergency
Line 1438: [E :MM,%d]  ERROR : IMS REGI on-going
Line 1447: [E :MM,%d]  ERROR : Reg procedure on-going
Line 1451: [E :MM,%d]  ERROR : RRC connection establishment in progress
Line 1455: [E :MM,%d]  ERROR : Ignore paging. already SR done
Line 1479: [N :MM,%d]  %%!EM MM_RRC_TERMINATE_CNF_Handler, Reject cause = %d
Line 1480: [MM|%d,CP] %%!EM MM_RRC_TERMINATE_CNF_Handler, Reject cause = %d
Line 1561: [N :MM,%d]  %%!EM No matched REJ Cause for TERMINATE_CNF
Line 1572: [N :MM,%d]  MM_RRC_CAPA_UPDATE_NEEDED_IND_Handler
Line 1592: [N :MM,%d]  %%!RE Registration is needed : %x
Line 1632: [N :MM,%d]  MM_RRC_CONNECTED_IND_Handler
Line 1655: [N :MM,%d]  MM_RRC_ETWS_PRIMARY_IND_Handler
Line 1666: [N :MM,%d]  MM_RRC_ETWS_SECONDARY_IND_Handler
Line 1674: [N :MM,%d]  MM_RRC_CMAS_IND_Handler
Line 1682: [N :MM,%d]  MM_RRC_SERVING_CELL_INFO_IND_Handler
Line 1691: [N :MM,%d]  MM_RRC_NETWORK_TIME_IND_Handler
Line 1699: [N :MM,%d]  MM_RRC_NETWORK_TIME_IND_Handler
Line 1707: [N :MM,%d]  MM_RRC_REL_CNF_Handler
Line 1712: [N :MM,%d]  BEAM_LOCKON enabled!!
Line 1717: [N :MM,%d]  %%!CO ServiceRequest is needed(NRMM_PENDING_SR_BEAM_LOCKON)
Line 1723: [N :MM,%d]  RRC_REL_CNF while SR in progress, Abort SR procedure and get back to previous state
Line 1736: [N :MM,%d]  RRC_REL_CNF while REG in progress, Abort REG procedure and get back to previous state
Line 1741: [N :MM,%d]  Perform local deregistration if UE is registered as emergency
Line 1755: [N :MM,%d]  NrmmExtHdlrRRC::CheckAndChangeAsState() : %s
Line 1759: [N :MM,%d]  %%!ST Current AS State : %s
Line 1763: [N :MM,%d]  RRC terminate procedure is in progress
Line 1831: [MM|%d,CP] MM_RRC_DATA_CNF NOT SUCCESS AccResult(%d)
Line 1965: [N :MM,%d]  Next AS State : %d
Line 2038: [W :MM,%d]  %%!EM Do nothing on DATA_CNF/EST_CNF
Line 2038: [MM|%d,CP] %%!EM Do nothing on DATA_CNF/EST_CNF
Line 2058: [N :MM,%d]  IRAT RESULT : L2N RESELECTION SUCCESS
Line 2063: [N :MM,%d]  IRAT RESULT : L2N RESELECTION FAIL, %d
Line 2075: [N :MM,%d]  IRAT RESULT : L2N REDIRECTION SUCCESS
Line 2080: [N :MM,%d]  IRAT RESULT : L2N REDIRECTION FAIL, %d
Line 2091: [N :MM,%d]  IRAT RESULT : L2N HANDOVER SUCCESS
Line 2102: [N :MM,%d]  IRAT RESULT : L2N HANDOVER FAIL, %d
Line 2108: [A :MM,%d]  IRAT RESULT : Unknown IRAT Type = %d
Line 2108: [MM|%d,CP] IRAT RESULT : Unknown IRAT Type = %d
Line 2124: [N :MM,%d]  MM_RRC_IRAT_CHANGE_REQ_Handler: Target RAT[%d] IRAT type[%d]
Line 2129: [N :MM,%d]  Power off Detach is triggered. Ignore IRAT request 
Line 2133: [N :MM,%d]  Reject due to NR_RAT_SUSPEND_IN_PROGRESS or STOP_IN_PROGRESS 
Line 2137: [N :MM,%d]  Reject due to Hand over received while REL REQ or TERMINATE REQ in progress 
Line 2141: [A :MM,%d]  %%!EM Invalid IRAT type[%d]
Line 2141: [MM|%d,CP] %%!EM Invalid IRAT type[%d]
Line 2145: [A :MM,%d]  %%!EM IRAT triggered on NR only mode!! send CHANGE_CNF as failure : type = %d
Line 2145: [MM|%d,CP] %%!EM IRAT triggered on NR only mode!! send CHANGE_CNF as failure : type = %d
Line 2187: [A :MM,%d]  Invalid rMsgBody.TargetRat[%d]
Line 2187: [MM|%d,CP] Invalid rMsgBody.TargetRat[%d]
Line 2245: [N :MM,%d]  MM_RRC_BARRING_CHECK_RESULT_IND_Handler: isBarred [%d] BarredTime[%d]
Line 2246: [N :MM,%d]  ACC CAT = 0x%x %x
Line 2285: [N :MM,%d]  remove TAI as per N2N HO.
Line 2355: [W :MM,%d]  %%!EM SIM is invalid!
Line 2355: [MM|%d,CP] %%!EM SIM is invalid!
Line 2360: [N :MM,%d]  Camped on ANY PLMN state!
Line 2366: [N :MM,%d]  %%!EM Camped on not acceptable cell!
Line 2380: [N :MM,%d]  In manual mode, if user selects NR PLMN in N1 mode disable state NR REG can be peformed
Line 2385: [N :MM,%d]  In manual mode, N1 mode is not enabled
Line 2393: [N :MM,%d]  In manual mode, camped PLMN is in EPLMN list
Line 2399: [N :MM,%d]  In manual mode, Camped PLMN ID is mateched with Selected PLMN ID
Line 2404: [N :MM,%d]  In manual mode, Camped PLMN ID is not mateched with Selected PLMN ID
Line 2411: [N :MM,%d]  %%!EM Camped on not acceptable cell!
Line 2417: [N :MM,%d]  %%!EM Camped on T3502 running PLMN ID for VZW!
Line 2425: [N :MM,%d]  %%!EM Selected PLMN ID is not vaild from RRC !
