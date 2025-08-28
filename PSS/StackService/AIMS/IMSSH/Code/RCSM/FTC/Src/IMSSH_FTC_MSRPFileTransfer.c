Line 254: START --------  %s  --------
Line 258: [RCSSH_FTC_FileSendReq_MSRPHandler] NULL pointer Received !!
Line 269: [MO FT PARAMS FROM AP] AppSID(%d), Operation (%d) OperationType (%d)
Line 270: [MO FT PARAMS FROM AP] File Name Length(%d), File Size (%d)
Line 271: [MO FT PARAMS FROM AP] File Type :
Line 272: [MO FT PARAMS FROM AP] Thumbnail Length(%d), File Range Start (%d) RangeEnd (%d)
Line 273: [MO FT PARAMS FROM AP] TimeInfo Presence
Line 275: [MO FT PARAMS FROM AP] File Name:
Line 276: [MO FT PARAMS FROM AP] File HASH:
Line 277: [MO FT PARAMS FROM AP] Create File Display
Line 279: [MO FT PARAMS FROM AP] Modify File Display
Line 281: [MO FT PARAMS FROM AP] Contribution Id=
Line 282: [MO FT PARAMS FROM AP] Conversation Id=
Line 283: [MO FT PARAMS FROM AP]  Contribution Id Length(%d)
Line 284: [MO FT PARAMS FROM AP] Conversation Id Length(%d)
Line 285: [MO FT PARAMS FROM AP] Session Type(%d)
Line 286: [MO FT PARAMS FROM AP] Number of Participants(%d)
Line 294: Alert>AppSession ID already USED
Line 303: Alert>MAX FILE SIZE reached..Send Failure RSP to AP
Line 312: [RCS-FTC] Error in IMSCM_OpenSession
Line 319:  Created Session ID=%d
Line 325: Alert>Failed to create FT Session DB
Line 332:  Created Session ID=%d  for AppSessId=%d
Line 344: Alert>In Reply to Contribution ID not exist
Line 352: pMsg->SessionType = %d -> pFTSessIdPtr->SessionType = %d, pFTSessIdPtr->Num_of_Participant = %d
Line 360: [IMSSH FTC] Received BURN-AFTER-READ CycleValue;%d
Line 364: pFTSessIdPtr->SessionType = %d for AppSessId= %d
Line 367:  User Number
Line 367:  Invalid User number
Line 373: GROUP SESSION TYPE = %d  for AppSessId= %d
Line 378:  User Number
Line 378:  Invalid User number
Line 381: [MO Group FT PARAMS FROM AP] Successfully Decoded SIP Focus Server URI
Line 385: [MO Group FT PARAMS FROM AP] Error in Decoding SIP URI
Line 391: [MO Group FT PARAMS FROM AP] ContributionID Length:%s, ContributionID ID Length(%d)
Line 405: Conference factory URI =
Line 407:  User Number
Line 407:  Invalid User number
Line 407:  Invalid number of Users %d
Line 412: Conference factory URI =
Line 414:  User Number
Line 414:  Invalid User number
Line 414:  Invalid number of Users %d
Line 418: NO Subject Received in File Transfer request
Line 454: [RCSSH_FTC_FileSendReq_MSRPHandler] CPIM Presence (%d) in INVITE
Line 456: [RCS SM] Error in Getting Handler for CREATE SESSION REQ, RCSSH_GetSessMgrOutgoing_EvtHandler
Line 459: Alert> RCS Session Manager Failed to Session
Line 470: Alert> Failed to Send Session mode Msg
Line 476:  MO File Transfer Sent to Session Manager
Line 531: Alert>[RCSSH_FTC_UACFileTransfer_Rsp] Failed to find the matching FTsessionDB from SessionID:%d
Line 536: Invite Response Code =%d received for UAC FILE TRANFER REQUEST APPSessID(%d)
Line 540: Alert>NEEDS TO IMPLEMENT HANDLING IN CASE 183 has SDP profile
Line 555: Alert>[RCSSH_FTC_UACFileTransfer_Rsp] Validation of File Attributes failed
Line 568: Alert>[RCSSH_FTC_UACFileTransfer_Rsp] During From URI Extraction Error Encountered...
Line 581: Alert>[RCSSH_FTC_UACFileTransfer_Rsp] During To URI Extraction Error Encountered...
Line 591: Alert>[RCSSH_FTC_UACFileTransfer_Rsp] Sending RSP to AP failed
Line 626:  Send Refresh to REGC
Line 638: Alert> 2xx Response not Received from NW
Line 654: Alert>[RCSSH_FTC_UACFileTransfer_Rsp] Failed File Transfer Request for SessionID:%d
Line 869: START --------  %s  --------
Line 873: [RCSSH_FTC_UAS_FileTransferReq_Hdlr] Received Message is NULL !!!!!
Line 883: Alert>Not registered for IM/FT services!!!
Line 892:  CP Generated APP Session ID=%d
Line 897: Alert> FTC Failed to create the FTC Session DB
Line 905: Alert> File Transfer Feature Tags are Missing, Currently not returning failure..will do later
Line 921: pFTSessIdPtr->Num_of_Participant = %d
Line 936: [RCS SM] Error in Getting Handler for CREATE SESSION REQ, RCSSH_GetSessMgrOutgoing_EvtHandler
Line 939: Alert>Create Session Failed:  RetValue=%d
Line 950: Alert>Multipart body Decoding Failed
Line 956: Multipart decoding Success 
Line 966: Alert>Invalid SDP Profile
Line 976: RCSSH_FTC_UAS_FileTransferReq_Hdlr] Updated SessionType to Large Group FT as Resource List is present
Line 990: Alert>ContributionId ID not exist
Line 991: Alert>Conversation ID not exist
Line 992: Alert>In Reply to Contribution ID not exist
Line 1002: Alert>Failed to Send Incoming FileTransfer request to AP
Line 1008:  RCSSH_FTC_UAS_CreateFTReq_Hdlr, UAS FileTransfer Req Sent to AP
Line 1012: Alert> FTC- Failed to Send 180 Response to Session Manager
Line 1027: Alert>[RCSSH_FTC_UAS_CreateFTReq_Hdlr] AUTO ACCEPT IS ENABLED....Trigger RSP from HERE
Line 1030: END --------  %s  ---------
Line 1036: Alert>Sending FT Failure Rsp with= %d to SessionManager
Line 1045: END --------  %s  ---------
Line 1074: START --------  %s  --------
Line 1078: Alert>[RCSSH_FTC_UAS_FileTransferRsp_Hdlr] NULL message received in response !!!!!
Line 1090: [MT FT RESP FROM AP] AppSID(%d), MsrpConnId (%d)
Line 1092: [MT FT RESP FROM AP] Status(%d)
Line 1093: [MT FT RESP FROM AP] AbortCause(%d)
Line 1094: [MT FT RESP FROM AP] reason.ReasonLen(%d)
Line 1099: [MT FT RESP FROM AP] ftAcceptReq->reason.ReasonText=
Line 1104: [MT FT RESP FROM AP] ftAcceptReq->p_MsrpInfo->MSRPPathUriLen(%d)
Line 1110: [MT FT RESP FROM AP] PathUri =
Line 1114: [MT FT RESP FROM AP] MSRP_Port u16(%d)
Line 1115: [MT FT RESP FROM AP] SetupValue u8(%d)
Line 1116: [MT FT RESP FROM AP] TransportType u8(%d)
Line 1117: [MT FT RESP FROM AP] MSRPIPType(%d)
Line 1118: [MT FT RESP FROM AP] IPAddress =
Line 1119: [MT FT RESP FROM AP] CPIMFROM URILength(%d)
Line 1123: [MT FT RESP FROM AP] CPIMTO URI=
Line 1127: [MT FT RESP FROM AP] CPIMTO URILength(%d)
Line 1131: [MT FT RESP FROM AP] CPIMTO URI=
Line 1141: Alert> FTC- Failed to get the Session ID from AppSession Id
Line 1149: Alert> FTC- Failed to get the Session ID from AppSession Id
Line 1158: Alert> FTC- Failed to get the Session ID from AppSession Id
Line 1167: [RCSSH_FTC_UAS_FileTransferRsp_Hdlr] Prepare SDP FILE PROFILE and send RSP to Session Manager
Line 1181: Adding SIP header
Line 1185: Alert>RCSSH_FTC_UAS_FileTransferRsp_Hdlr, Sending INV RSP to Session Manager does not include Contribution ID.
Line 1190: Adding SIP header
Line 1194: Alert>RCSSH_FTC_UAS_FileTransferRsp_Hdlr, Sending INV RSP to Session Manager does not include Conversation ID.
Line 1198: [RCS-SM] Error in Getting Handler for Event:[%d], RCSSH_GetSessMgrOutgoing_EvtHandler
Line 1202: Alert>[RCSSH_FTC_UAS_FileTransferRsp_Hdlr] Sending INV RSP to Session Manager Failed
Line 1210: [RCSSH_FTC_UAS_FileTransferRsp_Hdlr] Invite Rsp Sent to Session Manager
Line 1218: Alert>[RCSSH_FTC_UAS_FileTransferRsp_Hdlr] Generating SDP failed..Return 4XX error to Session Manager
Line 1230: [RCS-SM] Error in Getting Handler for Event:[%d], RCSSH_GetSessMgrOutgoing_EvtHandler
Line 1234: Alert>RCSSH_FTC_UAS_FileTransferRsp_Hdlr, Sending INV RSP to Session Manager Failed
Line 1319: START --------  %s  --------
Line 1325: [RCSSH_FTC_UAC_SendFTReqToSessMgr] Memory Allocation Failed !!!!!
Line 1333: Alert>Failed toGet FT Session DB from SessionID(%d)
Line 1341: Alert>Failed to Build the Invite Request headers
Line 1353: Alert>Failed to Build the CPIM Body
Line 1356: [RCSSH_FTC_UAC_SendFTReqToSessMgr] Encoding of Thumbnail is success for Length:%d
Line 1365: RCSSH_FTC_UAC_SendFTReqToSessMgr, Multi Part Body Allocation
Line 1398: RCSSH_FTC_UAC_SendFTReqToSessMgr: Invalid  ResourceList
Line 1409: Alert>Failed to Build the CPIM Body
Line 1425: [RCS-SM] Error in Getting Handler for Event:[%d], RCSSH_GetSessMgrOutgoing_EvtHandler
Line 1429: Alert>Error in SDP Body
Line 1433: RCSSH_FTC_UAC_SendFTReqToSessMgr, UAC Invite Req Sent
Line 1438: Alert>RCSSH_FTC_UAC_SendFTReqToSessMgr, UAC Invite Req FAIL
Line 1447: END --------  %s  ---------
Line 1474: START --------  %s  --------
Line 1479: Alert>Failed to Allocate memory for pSIPMSg 
Line 1484: [RCS-SM] Error in Getting Handler for Event:[%d], RCSSH_GetSessMgrOutgoing_EvtHandler
Line 1488: Alert>Failed to Send the Eevent 
Line 1492: END --------  %s  ---------
Line 1539: Alert>[RCSSH_FTC_FileStatus_Ind] Sending to AP failed !!!!!
Line 1611: START --------  %s  --------
Line 1615: [RCSSH_FTC_FileStatus_Ind] Null Message Received !!!!!
Line 1626: Invalid SID received from SessionManager!!!
Line 1641: [RCSSH_FTC_FileStatus_Ind] NULL FileTransfer DB !!!!!
Line 1657: Alert>Memory Allocation FAIL
Line 1674: Alert>[RCSSH_FTC_FileStatus_Ind] Memory Allocation Failed !!!!!
Line 1687: Alert>[RCSSH_FTC_FileStatus_Ind] Memory Allocation Failed !!!!!
Line 1695: [RCS-SM] Error in Getting Handler for Event:[%d], RCSSH_GetSessMgrOutgoing_EvtHandler
Line 1700: [RCS-SM] Error in Getting Handler for Event:[%d], RCSSH_GetSessMgrOutgoing_EvtHandler
Line 1705:  RCS Session Manager Failed to Send Terminate REQ
Line 1724:  [RCSSH_FTC_FileStatus_Ind] MO BYE failed
Line 1728: END --------  %s  ---------
Line 1759: [RCSSH_FTC_Incoming_Abort_ind]Null Message Received !!!!!
Line 1770: Alert>[RCSSH_FTC_Incoming_Abort_ind]Failed toGet FT Session DB from SessionID(%d)
Line 1787: Alert>[RCSSH_FTC_Incoming_Abort_ind] Received CANCEL from Network with cause 408 and file available for Fetch Later
Line 1834: START --------  %s  --------
Line 1838: [RCSSH_FTC_Incoming_Terminate_ind]Null Message Received !!!!!
Line 1849: Alert>Failed toGet FT Session DB from SessionID(%d)
Line 1863: [RCSSH_FTC_Incoming_Terminate_ind] Reason code = %d
Line 1866:  ReasonText : 
Line 1872: Sending Remote Termination Indication to AP......
Line 1879: END --------  %s  ---------
Line 1910: [RCSSH_FTC_UACFileTermReq_Handler]Null Message Received !!!!!
Line 1920: [RCSSH_FTC_UACFileTermReq_Handler] AppSessId : %d
Line 1921: [RCSSH_FTC_UACFileTermReq_Handler] Status : %d
Line 1932: Alert>[RCSSH_FTC_UACFileTermReq_Handler] Failed toGet FT Session DB from SessionID(%d)
Line 1939: Alert>Failed toGet FT Session DB from SessionID(%d)
Line 1943: [RCS-SM] Error in Getting Handler for Event:[%d], RCSSH_GetSessMgrOutgoing_EvtHandler
Line 1947: END --------  %s  ---------
Line 1960: END --------  %s  ---------
Line 1983: START --------	%s	--------
Line 1995: Alert> FTC- Failed to get the Session ID from AppSession Id
Line 2010: MSGTMR-STOP: %s SessId = %d, Status = %d [0:NULL, 2:RUNNING] -> NULL
Line 2014: END --------  %s  ---------
Line 2042: START --------  %s  --------
Line 2049: Invalid SID received from SessionManager!!
Line 113: Alert>FT_MSRP_REQ->Thumbnai is not valid
Line 113: Alert>ThumbNail does not exist
Line 117: Alert>[RCSSH_FTC_FileSendReq_MSRPHandler] FTTHUMB is not supported by Network..Don't send Thumbnail in INVITE (FREEING)
Line 140: Alert>ContributionId ID not exist
Line 141:  Contribution Id=
Line 146: Alert>ContributionId ID not exist
Line 147: Generated Contribution Id=
Line 169: Alert>Conversation ID not exist
Line 170:  Conversation Id=
Line 175: Alert>Conversation ID not exist
Line 176: Generated ConversationId Id=
Line 218: Alert>FileType does not exist
Line 689: pFTSessIdPtr->ParticipantsInfo[pFTSessIdPtr->Num_of_Participant-1].CalledLen = %d
Line 698: pPAssertedId->pUri->pUserName:
Line 702: Alert> Invalid pPAssertedIdentity
Line 711: pFTSessIdPtr->ParticipantsInfo[pFTSessIdPtr->Num_of_Participant-1].CalledLen = %d
Line 720: pRxMsg->pSipMessage->From.pUri->pUserName:
Line 724: Alert> Invalid From Header
Line 756: CPIMFromURI from Invite Req
Line 760: Alert>[RCSSH_FTC_UAS_FileTransferReq_Hdlr] During From URI Extraction Error Encountered...
Line 769: CPIMFromURI from Invite Req
Line 773: Alert>[RCSSH_FTC_UAS_FileTransferReq_Hdlr] During From URI Extraction Error Encountered...
Line 803: CPIMToURI from Invite Req
Line 807: Alert>[RCSSH_FTC_UAS_FileTransferReq_Hdlr] During To URI Extraction Error Encountered...
