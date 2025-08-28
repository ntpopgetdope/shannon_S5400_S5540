Line 54: ns_Handle_Xcapm_UtifInd :: XCAPM_NS_UTIF_STATUS_UPD :: isXcapSupport = %d 
Line 58: ns_Handle_Xcapm_UtifInd GENERALDATA set to  ns_GeneralData.ImsData.isXcapSupport = %d 
Line 60: Error: Null Pointer
Line 81: ns_SendXcapNsCallWaitingRsp  TransactionId = %d DataPresent = %d nrecords = %d
Line 102: Error: Null Pointer
Line 129: Cannot find SId from the TId
Line 147: ns_Handle_Xcapm_CallWaitingActivateRsp send NS_AIMS_CALL_WAITING_ACTIVATE_RSP
Line 166: ns_Handle_Xcapm_CallWaitingDeactivateRsp send NS_AIMS_CALL_WAITING_DEACTIVATE_RSP
Line 185: ns_Handle_Xcapm_CallWaitingStatusRsp send NS_AIMS_CALL_WAITING_STATUS_RSP
Line 223: ns_SendXcapNsCallWaitingErr(Errcode %d, SId %d, Tid %d TimerVal %d, Length %d, ErrorRspVal %d)
Line 239: Error: Null Pointer
Line 275: ns_Handle_Xcapm_CallWaitingStatusErr send NS_CALL_WAITING_STATUS_ERR
Line 282: SId not found for TId %d
Line 305: ns_Handle_Xcapm_CallWaitingActErr send NS_CALL_WAITING_ACTIVATE_ERR
Line 312: SId not found for TId %d
Line 335: ns_Handle_Xcapm_CallWaitingDeactErr send NS_CALL_WAITING_DEACTIVATE_ERR
Line 342: SId not found for TId %d
Line 364: ns_Handle_Xcapm_CallingLineServicesRsp :: XCAPM_CALLING_LINE_SERVICES_RSP TransactionId = %d
Line 370: Error: Null Pointer
Line 393: Cannot find SId from the TId
Line 430: ns_SendXcapNsCallingLineServicesErr(Command:%d,Errcode %d, SId %d, Tid %d Timerval %d, Length %d, ErrorRspVal %d)
Line 434: Error: Null Pointer
Line 487: ns_SendXcapNsCallingLineServicesGetErr(Command:%d,Errcode %d, SId %d, Tid %d Timerval %d, Length %d, ErrorRspVal %d)
Line 491: Error: Null Pointer
Line 528: ns_Handle_Xcapm_CallingLineServicesErr send NS_AIMS_CALLING_LINE_SERVICES_ERR
Line 535: SId not found for TId %d
Line 564: ns_SendXcapNsCallForwardingRsp :: SId = %d,  TransactionId = %d,  Command = %d
Line 568: Error: Null Pointer
Line 584: BAIC Status [%d][%d] 
Line 589: BICroam Status [%d][%d] 
Line 597: ARC Status [%d][%d] 
Line 599: BAOC Status [%d][%d] 
Line 604: BOIC Status [%d][%d] 
Line 609: BOICexHC Status [%d][%d] 
Line 618: Cannot find SId from the TId
Line 636: ns_SendXcapNsCallBarringRsp
Line 660: Error: Null Pointer
Line 690: Cannot find SId from the TId
Line 709: ns_Handle_Xcapm_CallBarringActRsp :: XCAPM_CALL_BARRING_ACTIVATE_RSP
Line 729: ns_Handle_Xcapm_CallBarringDeactRsp :: XCAPM_CALL_BARRING_DEACTIVATE_RSP
Line 749: ns_Handle_Xcapm_CallBarringStatusRsp :: XCAPM_CALL_BARRING_STATUS_RSP
Line 768: ns_Handle_Xcapm_CallBarringPwdChgRsp :: XCAPM_CALL_BARRING_PWD_CHANGE_RSP
Line 790: ns_Handle_Xcapm_CallBarringActErr :: XCAPM_CALL_BARRING_ACTIVATE_ERR
Line 797: SId not found for TId %d
Line 820: ns_Handle_Xcapm_CallBarringPwdChgErr :: XCAPM_CALL_BARRING_PWD_CHANGE_ERR
Line 827: SId not found for TId %d
Line 850: ns_Handle_Xcapm_CallBarringDeactErr :: XCAPM_CALL_BARRING_DEACTIVATE_ERR
Line 857: SId not found for TId %d
Line 880: ns_Handle_Xcapm_CallBarringStatusErr :: XCAPM_CALL_BARRING_STATUS_ERR
Line 887: SId not found for TId %d
Line 915: ns_SendXcapNsCallForwardingRsp :: SId = %d,  TransactionId = %d,  Command = %d
Line 926: Wrong MsgType
Line 930: Error: Null Pointer
Line 972: Cannot find SId from the TId
Line 999: ns_SendXcapNsCallForwardingRsp :: SId = %d,  TransactionId = %d,  Command = %d
Line 1003: Error: Null Pointer
Line 1018: ns_SendXcapNsCallForwardingStatusRsp ::CFU Status %d 
Line 1028: Error: Null Pointer
Line 1033: ns_SendXcapNsCallForwardingStatusRsp :: CfuStatus.TelephoneNumberLength is INVALID
Line 1036: CFU : Received start hour = %d, start min = %d, End hour = %d, End min = %d  
Line 1042: CFU : Sent start hour = %d, start min = %d, End hour = %d, End min = %d  
Line 1048: ns_SendXcapNsCallForwardingStatusRsp ::CFB  Status %d 
Line 1058: Error: Null Pointer
Line 1063: ns_SendXcapNsCallForwardingStatusRsp :: CfbStatus.TelephoneNumberLength is INVALID
Line 1074: ns_SendXcapNsCallForwardingStatusRsp ::CFNR  Status %d 
Line 1084: Error: Null Pointer
Line 1089: ns_SendXcapNsCallForwardingStatusRsp :: CfnrStatus.TelephoneNumberLength is INVALID
Line 1100: ns_SendXcapNsCallForwardingStatusRsp ::CFNRC  Status %d 
Line 1110: Error: Null Pointer
Line 1115: ns_SendXcapNsCallForwardingStatusRsp :: CfnrcStatus.TelephoneNumberLength is INVALID
Line 1126: ns_SendXcapNsCallForwardingStatusRsp ::CFNL  Status %d 
Line 1136: Error: Null Pointer
Line 1141: ns_SendXcapNsCallForwardingStatusRsp :: CfnlStatus.TelephoneNumberLength is INVALID
Line 1157: Cannot find SId from the TId
Line 1176: ns_Handle_Xcapm_CallForwardingActRsp :: XCAPM_CALL_FORWARDING_ACTIVATE_RSP
Line 1195: ns_Handle_Xcapm_CallForwardingDeactRsp :: XCAPM_CALL_FORWARDING_DEACTIVATE_RSP
Line 1215: ns_Handle_Xcapm_CallForwardingStatusRsp :: XCAPM_CALL_FORWARDING_STATUS_RSP
Line 1237: ns_Handle_Xcapm_CallForwardingActErr :: XCAPM_CALL_FORWARDING_ACTIVATE_ERR  TransactionId = %d 
Line 1244: SId not found for TId %d
Line 1268: ns_Handle_Xcapm_CallForwardingDeactErr :: XCAPM_CALL_FORWARDING_DEACTIVATE_ERR  TransactionId = %d 
Line 1275: SId not found for TId %d
Line 1299: ns_Handle_Xcapm_CallForwardingStatusErr :: XCAPM_CALL_FORWARDING_STATUS_ERR  TransactionId = %d 
Line 1306: SId not found for TId %d
Line 1331: NS_AIMS_CALL_FORWARDING_ACTIVATE_REQ :: SID=%d, Command=%d, OperationType=%d, BasicServiceCode=%d, NoReplyDuration=%d
Line 1333: CHECK_XCAP_SUPPORT = %d  and CHECK_IMS_REGISTRATION_STATUS = %d
Line 1337: XCAP is enabled. Send Message to XCAP module :: XCAPM_CALL_FORWARDING_ACTIVATE_REQ
Line 1344: Error: Null Pointer
Line 1353: Telephone Number Digits Status -> [%d]
Line 1363: Mem Alloc Fail -> [%d]
Line 1371: Telephone Number Len-> [%d]
Line 1415: NS_AIMS_CALL_FORWARDING_DEACTIVATE_REQ :: SID=%d, Command=%d, OperationType=%d, BasicServiceCode=%d, NoReplyDuration=%d
Line 1418: CHECK_XCAP_SUPPORT = %d  and CHECK_IMS_REGISTRATION_STATUS = %d
Line 1421: XCAP is enabled. Hence send Message to XCAP module :: XCAPM_CALL_FORWARDING_DEACTIVATE_REQ
Line 1428: Error: Null Pointer
Line 1438: Telephone Number Digits Status -> [%d]
Line 1448: Mem Alloc Fail -> [%d]
Line 1456: Telephone Number Len -> [%d]
Line 1497: NS_AIMS_CALL_FORWARDING_STATUS_REQ ::SID=%d, Command=%d, BasicServiceCode=%d
Line 1499: CHECK_XCAP_SUPPORT = %d  and CHECK_IMS_REGISTRATION_STATUS = %d
Line 1503: XCAP is enabled. Hence send Message to XCAP module :: XCAPM_CALL_FORWARDING_STATUS_REQ
Line 1510: Error: Null Pointer
Line 1566: ns_SendNsAimsCallForwardingErr(Errcode %d, SId %d, Tid %d Timerval %d, Length %d, ErrorRspVal %d)
Line 1582: Error: Null Pointer
Line 1620: NS_AIMS_CALL_BARRING_ACTIVATE_REQ :: SID=%d, Command=%d, BasicServiceCode=%d
Line 1622: CHECK_XCAP_SUPPORT = %d  and CHECK_IMS_REGISTRATION_STATUS = %d
Line 1626: XCAP is enabled. Hence send Message to XCAP module :: XCAPM_CALL_BARRING_ACTIVATE_REQ
Line 1634: Error: Null Pointer
Line 1643: CB Num received at NS : 
Line 1659: Mem Alloc Fail -> [%d]
Line 1662: CB Num sent to XCAPM
Line 1700: NS_AIMS_CALL_BARRING_DEACTIVATE_REQ :: SID=%d, Command=%d, BasicServiceCode=%d
Line 1702: CHECK_XCAP_SUPPORT = %d  and CHECK_IMS_REGISTRATION_STATUS = %d
Line 1705: XCAP is enabled. Hence send Message to XCAP module :: XCAPM_CALL_BARRING_DEACTIVATE_REQ
Line 1712: Error: Null Pointer
Line 1722: CB Num received at NS : 
Line 1738: Mem Alloc Fail -> [%d]
Line 1741: CB Num sent to XCAPM
Line 1777: NS_AIMS_CALL_BARRING_STATUS_REQ :: SID=%d, Command=%d, BasicServiceCode=%d
Line 1779: CHECK_XCAP_SUPPORT = %d  and CHECK_IMS_REGISTRATION_STATUS = %d
Line 1782: XCAP is enabled. Hence send Message to XCAP module :: XCAPM_CALL_BARRING_STATUS_REQ
Line 1789: Error: Null Pointer
Line 1831: NS_AIMS_CALL_BARRING_PWD_CHANGE_REQ :: SID=%d
Line 1833: CHECK_XCAP_SUPPORT = %d  and CHECK_IMS_REGISTRATION_STATUS = %d
Line 1836: XCAP is enabled. Hence send Message to XCAP module :: XCAPM_CALL_BARRING_PWD_CHANGE_REQ
Line 1843: Error: Null Pointer
Line 1898: ns_SendNsAimsCallBarringErr(Errcode %d, SId %d, Tid %d TimerVal %d, Length %d, ErrorRspVal %d)
Line 1916: Error: Null Pointer
Line 1953:  NS_AIMS_CALLING_LINE_SERVICES_STATUS_REQ :: SID=%d, Command=%d
Line 1955: CHECK_XCAP_SUPPORT = %d  and CHECK_IMS_REGISTRATION_STATUS = %d
Line 1958: XCAP is enabled. Hence send Message to XCAP module :: XCAPM_CALLING_LINE_SERVICES_STATUS_REQ
Line 1965: Error: Null Pointer
Line 2002: NS_AIMS_CALL_WAITING_ACTIVATE_REQ :: SID=%d, BasicServiceCode=%d, ServiceType=%d
Line 2004: CHECK_XCAP_SUPPORT = %d  and CHECK_IMS_REGISTRATION_STATUS = %d
Line 2012: Error: Null Pointer
Line 2047: NS_AIMS_CALL_WAITING_DEACTIVATE_REQ :: SID=%d, BasicServiceCode=%d
Line 2049: CHECK_XCAP_SUPPORT = %d  and CHECK_IMS_REGISTRATION_STATUS = %d
Line 2057: Error: Null Pointer
Line 2092: NS_AIMS_CALL_WAITING_STATUS_REQ :: SID=%d, BasicServiceCode=%d
Line 2094: CHECK_XCAP_SUPPORT = %d  and CHECK_IMS_REGISTRATION_STATUS = %d
Line 2103: Error: Null Pointer
Line 2121: ns_FillUriNum
Line 2128: Num Type is not URI format
Line 2134:  CFU Specific Timer Period Info : start.hr=%d, start.min=%d, end.hr=%d, end.min=%d,
Line 2144: ns_FillSsTimeInfo
Line 2181: FDN disabled
Line 2187: FDN check ignored first time due to SIM SAT INITIATE EVENT
Line 2372: Error: Null Pointer
Line 2377: - Call control is disabled
Line 2504: - MessageType(%x) is not handled for USAT
Line 2530: Error: Null Pointer
Line 2533: Error: Null Pointer
Line 2535: ns_SendXcapmIpInfoSetReq :: Sid = %d, IpType=%d, PdnType = %d
Line 2580: Invalid IP Version -> %d
Line 2590: Additional Field Len=%d
Line 2591: Additional Field
Line 2609: Error: Null Pointer
Line 2614: Protocol=%d, Profile=%d
Line 2663: Invalid protocol %d
Line 2687:  NS_AIMS_CALLING_LINE_SERVICES_SET_REQ :: SID=%d, Command=%d, Status = %d
Line 2689: CHECK_XCAP_SUPPORT = %d  and CHECK_IMS_REGISTRATION_STATUS = %d
Line 2694: Status is set to DISABLE send Deactivate request
Line 2701: Error: Null Pointer
Line 2718: Status is set to ENABLE send Activate request
Line 2725: Error: Null Pointer
Line 2768: ns_Handle_Xcapm_CallingLineServicesActRsp :: XCAPM_CALLING_LINE_SERVICES_ACT_RSP TransactionId = %d, Command = %d, status = %d
Line 2774: Error: Null Pointer
Line 2795: Cannot find SId from the TId
Line 2818: ns_Handle_Xcapm_CallingLineServicesDeactRsp :: XCAPM_CALLING_LINE_SERVICES_DEACT_RSP TransactionId = %d, Command = %d, status = %d
Line 2824: Error: Null Pointer
Line 2845: Cannot find SId from the TId
Line 2867: XCAPM_CALLING_LINE_SERVICES_ACT_ERR send NS_AIMS_CALLING_LINE_SERVICES_ERR
Line 2874: SId not found for TId %d
Line 2898: XCAPM_CALLING_LINE_SERVICES_DEACT_ERR send NS_AIMS_CALLING_LINE_SERVICES_ERR
Line 2905: SId not found for TId %d
