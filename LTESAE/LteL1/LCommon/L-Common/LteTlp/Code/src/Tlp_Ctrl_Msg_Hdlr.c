Line 153: Received length value in Mode A parameter is %d
Line 173: Mode A is received: Number of BIts received is Out of Range by SS, ignoring DRB[%d] and Continuing with nxt DRB
Line 179: Mode A is received: Number of BIts received is not multiple of 8 DRB ID %d received, Value: %d
Line 201: Mode A is received: DRB ID %d received in LBSetup IE is not configured by SS, ignoring DRB and Continuing with nxt DRB
Line 206: Mode A is received: Scaling configured for DRB ID %d,Scaled UL SDU size %d 
Line 278: Mode B received: T Delay timer value changed from %d -> %d 
Line 300: T Delay Timer stopped and re-started in state %d  
Line 304: TDelay Timer cannot be stopped in state %d 
Line 323: TDelay Timer stopped in state %d 
Line 336: TDelay Timer cannot be stopped in state %d 
Line 345: Cannot Delete the T Delay timer in state %d;  
Line 359: Mode B received: T Delay timer got configured with value %d;buffer the received data till timer expiry
Line 371: Mode B received : T Delay Timer got created successfully
Line 378: pal_TmCreateMsgTimer did not return PAL_SUCCESS while creating T Delay Timer
Line 387: Mode B received :T Delay timer not configured; Timer value : 0;fwd the received data directly in UL
Line 425: Mode G received : Timer - %d, Operationmode - %d, Rep_Num - %d 
Line 434: Mode G received: T Delay timer value changed from %d -> %d 
Line 438: Mode G received: GH Delay timer got configured with value %d; buffer the received data till timer expiry
Line 450: Mode G received : GH Delay Timer got created successfully
Line 457: pal_TmCreateMsgTimer did not return PAL_SUCCESS while creating T Delay Timer
Line 587: IsEpsPresentInRelBuff(LBID:%d)) == TRUE: RBID:%d, EPSbearedID:%d, TempEPSBearedID:%d
Line 591: LBID:%d, RBID:%d, EPSbearerID:%d, DrbState of LB ModeB is set to be ENABLED in TLP_ACTIVE.
Line 623: MAX DRB's are already configured in Test Loop Mode, ignore the msg
Line 650: Ignore release DRB for NR DRB. u8LbIndex(%d)
Line 789: LTE_EMM_LB_DATA_REQ malloc error
Line 810: LTE_EMM_LB_DATA_REQ : MBMS_PACKET_COUNTER_RSP malloc error
Line 827: Posting the PKT CNT to EMM as case %d
Line 835: The Packet Counter which is send to EMM equals to %d
Line 948: LTE_EMM_LB_DATA_REQ : ss_complete malloc error
Line 966: LTE_EMM_LB_DATA_REQ : ss_complete malloc error
Line 984: LTE_EMM_LB_DATA_REQ : ss_complete malloc error
Line 997: Posting the message %d to DS_EMM
Line 1001: Posting the message %d to EMM
Line 1010: LTE_EMM_LB_DATA_REQ : Msg Sending error
Line 1022: Send Msg to EMM with Data. MsgType(%d)
Line 1027: LTE_EMM_LB_DATA_REQ malloc error
Line 1047: LTE_EMM_LB_DATA_REQ : ss_complete malloc error
Line 1067: LTE_EMM_LB_DATA_REQ : ss_complete malloc error
Line 1080: Posting the message %d to DS_EMM
Line 1084: Posting the message %d to EMM
Line 1093: LTE_EMM_LB_DATA_REQ : Msg Sending error
Line 1115: Tlp_SendMessageToLBS Malloc error
Line 1131: Posting the message %d to LBS
Line 1136: Tlp_SendMessageToLBS : MsgSendTo Fail
Line 1164: Tlp_SendMessageToRRC Malloc error
Line 1176: Posting the message %d to RRC_DS
Line 1181: Posting the message %d to RRC
Line 1232: [ERROR] pal_Malloc Fail!
Line 1260: Send NRPDCP_LTETLP_CONFIG_SYNC_IND to NR L2
Line 1265: pal_MsgSendToNrL2 fail! rst(%d)
Line 1280: [ERROR] pal_Malloc Fail!
Line 1294: Send NRPDCP_LTETLP_CONFIG_MSG_IND to NR TMC. u32MsgType(%d) u8Data(%d)
Line 1299: pal_MsgSendToNrL2 fail! rst(%d)
Line 1328: Tlp_ProcActivateTestMode : Data is NULL
Line 1349: Received Invalid Mode Value %d in Activate Test Mode Message
Line 1363: Received valid Mode Value %d in Activate Test Mode Message
Line 1371: TLP Configured in Mode %d in Activate Test Mode Message
Line 1372: Posting the message LTE_TLP_ACTIVATE_TEST_MODE_COMPLETE to EMM
Line 1386: Received Invalid SI Value in Activate Test Mode Message
Line 1475: Tlp_ProcModeCPktCountReq : Data is NULL
Line 1481: TLP-MBSFN PCT - Processing MBSFN mode C packet counter request  Message
Line 1485: [ERROR] MODE-C is not active 
Line 1495: TLP-MBSFN PCT - Received Invalid SI Value in MBSFN mode C packet counter request  Message
Line 1526: Tlp_ProcDeActivateTestMode : Data is NULL
Line 1532: Resetting the TLP Context struct: Tlp_ResetTlp() called from De-Activate Test Mode Message
Line 1535: Posting the message LTE_TLP_DEACTIVATE_TEST_MODE_COMPLETE to EMM
Line 1544: Received Invalid SI Value in De-Activate Test Mode Message
Line 1624: Tlp_ProcOpenUeTestLoop : Data is NULL
Line 1630: Resetting the TLP Context struct: Tlp_ResetTlp() called from Open UE Test Loop Message
Line 1633: Posting the message LTE_TLP_OPEN_UE_TEST_LOOP_COMPLETE to EMM
Line 1641: Received Invalid SI Value in Open UE Test Loop Message
Line 1663: Tlp_ProcOpenUeTestLoop : Data is NULL
Line 1669: Posting the message LTE_TLP_OPEN_UE_TEST_LOOP_COMPLETE to EMM
Line 1674: Received Invalid SI Value in Open UE Test Loop Message
Line 1777: Case UNIDIRECTIONAL: Reconfig of DRB ID %d; DRB has got reconfigured from Bi-Directional to UNI-Directional. 
Line 1784: Case UNIDIRECTIONAL: Establishment of DRB ID %d;Ignore the Drb Id,  going to process next DRb. 
Line 1810: Case BIDIRECTIONAL: Establishment of DRB ID %d, EPS ID: %d;
Line 1818: Case BIDIRECTIONAL: Reconfig of DRB ID %d; No need to update, going to process next DRb. 
Line 1830: Case BIDIRECTIONAL: DRB ID %d requested to release, Not found in LB array; Ignoring and going to process next DRB
Line 1838: Case BIDIRECTIONAL: DRB ID %d requested to release,found in LB array; Going to release the DRB
Line 1847: Invalid Case: Received Invalid ReconfigType Value in LTE_RRC_LB_DRB_IND Message
Line 1856: ALL DRB's in LB functional Mode got released
Line 1900: Resetting the TLP Context struct: Tlp_ResetTlp() called from RRC DRB IND Message
Line 1922: There exist EPS bearer in established state, So not resetting the Context Struct.
Line 1929: Total Num of DRB's configured: %d
Line 1931: Num DRB's in LB Mode: %d, Num DRB's Not in LB Mode %d
Line 1977: Loop Back Functon already Active, ignore the msg 
Line 2009: This is an error condition; TLP should be in INIT state 
Line 2016: Loop Back Functon already Active, ignore the msg 
Line 2031: Loop Back Functon already Active, ignore the msg 
Line 2066: Tlp_ProcCloseUeTestLoop : Data is NULL
Line 2086: Mode A is received: Bi-dir DRB est. going to configure Mode A params received
Line 2098: Mode A got configured: LB setup list IE is not included;i.e. No scaling configured
Line 2103: Mode A is received: LB setup list IE included 
Line 2108: Posting the message LTE_TLP_CLOSE_UE_TEST_LOOP_COMPLETE to EMM
Line 2116: Mode A is received: Invalid total Msg Length; Length IE value %d
Line 2124: Mode A is received: No bi-dir DRB est. ignore the msg
Line 2137: Mode B is received: Going to Check whether atleast one EPS bearer is in established state or not
Line 2144: Mode B is received: Going to configure Mode B params received
Line 2148: Posting the message LTE_TLP_CLOSE_UE_TEST_LOOP_COMPLETE to EMM
Line 2156: Mode B is received: No bi-dir EPS Bearer est. ignore the msg
Line 2287: Mode G is received: Going to configure Mode G params received
Line 2289: Posting the message LTE_TLP_CLOSE_UE_TEST_LOOP_COMPLETE to EMM
Line 2300: Received Mode value(%d) in Close Ue Test Loop != Mode value received in Activate Test Loop Message
Line 2308: Received Invalid SI Value in Close UE Test Loop Message
Line 2400: Tlp_ProcResetUePositioingStoredInfo : Data is NULL
Line 2404: Tlp_ProcResetUePositioingStoredInfo in state %d
Line 2405: PI_SI %x, PosTech %x
Line 2425: Received Invalid SI Value inReset UE Positioning Stored Information message 
Line 2458: Tlp_ProcUpdateUeLocationInfo : Data is NULL
Line 2462: Tlp_ProcUpdateUeLocationInfo in state %d
Line 2474: Received Invalid SI Value inReset Tlp_ProcUpdateUeLocationInfo message 
Line 2539: [ERROR] Tlp_ProcActivateBeamLock : Data is NULL
Line 2548: [ERROR] Received Invalid SI Value
Line 2552: [ERROR] UBF is already running!
Line 2556: [ERROR] not support FrType(%d)!
Line 2562: Posting the message LTE_TLP_ACTIVATE_BEAMLOCK_COMPLETE to EMM
Line 2584: [ERROR] Tlp_ProcDeActivateBeamLock : Data is NULL
Line 2593: [ERROR] Received Invalid SI Value
Line 2599: Posting the message LTE_TLP_DEACTIVATE_BEAMLOCK_COMPLETE to EMM
Line 2621: Posting the message LTE_TLP_DEACTIVATE_BEAMLOCK_COMPLETE to EMM
Line 2628: UBF is not running. Ignore LTE_EMM_UBF_FORCE_UNLOCK_IND.
Line 2642: [ERROR] Tlp_ProcRsrpbReq : Data is NULL
Line 2648: Posting the message L2_LTEPDCP_CONFIG_MSG_IND to NR TMC
Line 2660: Posting the message LTE_TLP_SS_RSRPB_RSP to EMM
