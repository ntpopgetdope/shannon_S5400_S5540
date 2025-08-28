Line 99: [SMDTINTF_PDNMGR_INTERFACE_CHANGE_REQ_Handler]
Line 108: Received Invalid Cid value.
Line 138: stackId=%d, cid=%d, Result=%d
Line 163: Error in finding unicast address in the interface DB
Line 197: [SMDTINTF_PDNMGR_INTERFACE_CREATE_REQ_Handler]
Line 213: Start Message is NULL, Discard the message!!
Line 216: [SMDT] opMode : %d
Line 217: [SMDT] isRsRaRequested : %d
Line 218: [SMDT] active stack : %d
Line 219: [SMDT] Create request type : %d
Line 220: [SMDT] protoType : %d
Line 221: [SMDT] contextID : %d
Line 223: [SMDT] operType : %d
Line 224: [SMDT] IPv4 : 0x%x
Line 225: [SMDT] IPV6 : 
Line 227: [SMDT] apn length : %d
Line 229: [SMDT] apn name : 
Line 237: SMDTINTF_PDNMGR_INTERFACE_CREATE_REQ_Handler >> Interface is already exist!!
Line 239: SMDTINTF_PDNMGR_INTERFACE_CREATE_REQ_Handler>> CREATE_REQ_TYPE_INITIAL or CREATE_REQ_TYPE_RECOVERY
Line 242: SMDTINTF_PDNMGR_INTERFACE_CREATE_REQ_Handler >> CREATE_REQ_TYPE_PRESERVE
Line 248: pNdpIfx is null!!
Line 256: pNdpAddrParam is null!!
Line 264: SmdtIPInterface is null!!
Line 271: pIpContext is null!!
Line 279: pIpContext is null!!
Line 301: oldLinkLocalAddr : 
Line 302: newLinkLocalAddr : 
Line 304: Update Link Local Address
Line 314: pNdpAddrParam is NULL (ifx=%d)
Line 366: Failed to get ifp pointer
Line 372: Start Recovery Timer
Line 376: pIf->m_pIntfTimers is NULL
Line 390: Create type HO..Send immediate response
Line 415: [SMDTINTF_PDNMGR_INTERFACE_DELETE_REQ_Handler]
Line 429: Failed to get ifp pointer
Line 439: [SMDTINTF_PDNMGR_INTERFACE_DELETE_REQ_Handler] :: Error deleting interface
Line 477: [SMDTINTF_MULTI_INTERFACE_DELETE_REQ_Handler] Delete request
Line 480: [SMDTINTF_MULTI_INTERFACE_DELETE_REQ_Handler] Delete Interface with Cid : %d
Line 494: Failed to get ifp pointer
Line 498: [SMDTINTF_MULTI_INTERFACE_DELETE_REQ_Handler] :: Intf Delete Not allowed
Line 510: [SMDTINTF_MULTI_INTERFACE_DELETE_REQ_Handler] :: Error deleting interface
Line 524: [SMDTINTF_AIMSSH_INTERFACE_DELETE_REQ_Handler]
Line 534: [SMDTINTF_AIMSSH_INTERFACE_DELETE_REQ_Handler] Delete Interface with Cid : %d IfId : %d
Line 539: Failed to get ifp pointer
Line 543: [SMDTINTF_AIMSSH_INTERFACE_DELETE_REQ_Handler] createType : %d
Line 553: [SMDTINTF_AIMSSH_INTERFACE_DELETE_REQ_Handler] :: Error deleting interface
Line 566: [SMDTINTF_AIMSSH_INTERFACE_DELETE_REQ_Handler] :: Intf Delete Not allowed
Line 580: [SMDTCLAT] SMDTINTF_SMDTCLAT_START_CLAT_CNF_Handler
Line 582: [SMDTCLAT] CLAT_CNF_Handler CID : %d
Line 583: [SMDTCLAT] CLAT_CNF_Handler AppID: %d
Line 598: [SMDTINTF_SMDTNDP_START_RSRA_CNF_Handler]
Line 600: [SMDTINTF_SMDTNDP_START_RSRA_CNF_Handler] Interface not present
Line 614: [SMDTINTF_SMDTNDP_START_RSRA_CNF_Handler] Sending INTERFACE_CREATE_CNF
Line 623: [SMDTINTF_SMDTNDP_START_RSRA_CNF_Handler] Sending INTERFACE_CREATE_REJ
Line 632: Fail to delete TCPIP Interface
Line 653: Cnf Message is NULL, Discard the message!!
Line 658: pMsg Message is NULL, Discard the message!!
Line 676: [SMDTINTF_AIMSSH_Interface_Create_Rsp] Result [%d],stackId=%d, cid=%d
Line 688: SMDTINTF_AIMSSH_INTERFACE_CREATE_RSP
Line 763: Cnf Message is NULL, Discard the message!!
Line 780: Sending Message to BIP!! stackId=%d, cid=%d
Line 799: Cnf Message is NULL, Discard the message!!
Line 816: Sending Message to XCAPM!! stackId=%d, cid=%d
Line 830: SMDT_AIMSSH_INTERFACE_CREATE_REQ_Handler
Line 839: Start Message is NULL, Discard the message!!
Line 848: SMDT_AIMSSH_INTERFACE_CREATE_REQ_Handler : For Wifi CID [%d] interface already exists!! Delete and create NEW
Line 867: SMDT_AIMSSH_INTERFACE_CREATE_REQ_Handler : For Wifi CID [%d]
Line 890: [SMDTINTF_BIPUSAT_INTERFACE_CREATE_REQ_Handler]
Line 899: Start Message is NULL, Discard the message!!
Line 932: [SMDTINTF_MULTI_INTERFACE_CREATE_REQ_Handler]
Line 941: Start Message is NULL, Discard the message!!
Line 949: Result [%d]
Line 959: [Smdt_Create_Interface] pMsg->contextID [%d]
Line 962: [SMDTINTF_MULTI_INTERFACE_CREATE_REQ_Handler] IfId [%d] enActiveStack:%d
Line 986: [SMDTINTF_SMDTTIMERS_TIMER_EXPIRY_IND_Handler] >> ContextId : %d
Line 1010: [NDP][SMDTINTF_SMDTNDP_TIMER_EXPIRY_IND_Handler] >> ContextId : %d
Line 1026: [SMDTINTF_XCAPM_INTERFACE_CREATE_REQ_Handler]
Line 1035: Start Message is NULL, Discard the message!!
Line 1040: SMDTINTF_XCAPM_INTERFACE_CREATE_REQ_Handler
Line 1058: SMDTINTF_XCAPM_INTERFACE_CREATE_REQ_Handler : For Wifi CID [%d]
Line 1097: Start Message is NULL, Discard the message!!
Line 1139: Start Message is NULL, Discard the message!!
Line 1168: NatKeepAliveReqInfo, Discard the message!!
Line 1175: [NKA] TCPIP_START_NAT_KEEP_ALIVE_REQ => No interface for Context Id:%d
Line 1180: [NKA] TCPIP_START_NAT_KEEP_ALIVE_REQ received
Line 1181: [NKA] ContextID : %d
Line 1182: [NKA] enActiveStack : %d
Line 1183: [NKA] protoType : %d
Line 1184: [NKA] SrcPort : %d
Line 1185: [NKA] DstPort : %d
Line 1187: [NKA] Src Addr : 0x%x
Line 1188: [NKA] Dst Addr : 0x%x
Line 1190: [NKA] Src Addr : 
Line 1191: [NKA] Dst Addr : 
Line 1193: [NKA] Src Addr : 0x%x
Line 1194: [NKA] Dst Addr : 0x%x
Line 1195: [NKA] Src Addr : 
Line 1196: [NKA] Dst Addr : 
Line 1198: [NKA] NatKeepAliveReqInfo.KeepAliveInterval : %d
Line 1236: [NKA] TCPIP_STOP_NAT_KEEP_ALIVE_REQ received
Line 1239: [NKA] NatKeepAliveReqInfo: Received NULL msg
Line 1245: [NKA] handle_id : 0x%x
Line 1262: [SPL] PM_TCPIP_PORT_LISTENER_READY_REQ received
Line 1279: [SMDTCLAT] SMDTINTF_SMDTCLAT_Start_Function, (cid: %d)
Line 1280: [SMDTCLAT] SMDTINTF_SMDTCLAT_status,  -> %d)
Line 1287: pNetworkInfo is NULL
Line 1300: [SMDTCLAT] pClatMsgBody->localAddr.ipv4 : %d)
Line 1301: [SMDTCLAT] pClatMsgBody->DNSAddr.ipv4 : %d)
Line 1313: [SMDTCLAT] pClatMsgBody->localAddr.ipv6 : 0x%x 
Line 1314: [SMDTCLAT] pClatMsgBody->DNSAddr.ipv6 : 0x%x 
Line 1324: [SMDTCLAT] Called standard host
Line 1346: [SPL] PM_TCPIP_SUPL_NI_MSG_CNF received
Line 1367: [SMDTINTF_SMDTTIMERS_ADDR_STATE_IND_Handler] pIp6Addr
Line 1368: [SMDTINTF_SMDTTIMERS_ADDR_STATE_IND_Handler] if_index=%d, Cid : %d, protoType : %d, addrState=%d
Line 1387: [SMDTINTF_SMDTINTF_TIMER_EXPIRY_Handler]
Line 1389: All SMDT Interfaces Deleted
Line 1399: Failed to get timer class object
