Line 106: START --------  %s  -------
Line 117: END --------  %s  ---------
Line 148: START --------  %s  -------
Line 150: In RCSSH_ERC_UAC_ErcSessionReq
Line 158: [RCSSH_ERC_UAC_ErcSessionReq] Malloc error
Line 163: Calling RCSSH_ERC_PrepareInviteReqHeader
Line 167: Failed to Build the Invite Request headers
Line 186: [RCS-SM] Error in Getting Handler for Event:[%d], RCSSH_GetSessMgrOutgoing_EvtHandler
Line 190: Error in SDP Body
Line 197: RCSSH_ERC_UAC_ErcSessionReq, UAC Invite Req Sent
Line 202: IMSSH_RCSM_FILL_AND_SEND_INVITE_REQ  Return FAIL
Line 207: RCSSH_ERC_UAC_ErcSessionReq, UAC Invite Req FAIL
Line 210: END --------  %s  ---------
Line 243: START --------  %s  -------
Line 245: In RCSSH_ERC_UAC_CreateMsrpReq_Hdlr
Line 255: Alert>AppSession ID already USED
Line 263: Failed to create New Session ID
Line 264: RCSSH_IMC_UAC_CreateChatReq_Hdlr, UAC Invite Req FAIL
Line 269:  Created Session ID=%d
Line 274: Failed to create ERC Session DB
Line 279:  Created Session ID=%d  for AppSessId=%d
Line 293: ContributionId ID not exist
Line 294: Contribution Id=
Line 298:  Contribution Id Not received from AP
Line 304: Conversation ID not exist
Line 305: Conversation Id=
Line 309:  Conversation Id Not received from AP
Line 313:  ERC DB RemoteUser :  
Line 313: NO RemoteUser Received
Line 336: Session Type = %d
Line 341: [RCS SM] Error in Getting Handler for CREATE SESSION REQ, RCSSH_GetSessMgrOutgoing_EvtHandler
Line 348:  RCS Session Manager Failed to Session: Result =%d 
Line 353: Calling RCSSH_ERC_UAC_ErcSessionReq
Line 366:  Failed to Send ERC Msg
Line 371:  ERC Request Sent to Session Manager
Line 372: END --------  %s  ---------
Line 378: RCSSH_ERC_UAC_CreateMsrpReq_Hdlr, UAC Invite Req FAIL
Line 396: END --------  %s  ---------
Line 424: START --------  %s  -------
Line 429: Terminate the ERC Session ID=%d, Status=%d, SipReasonCode=%d
Line 434: Alert>AppSession ID Not Found
Line 441: [RCSSH_ERC_UAC_TerminateMsrpSessionReq_Hdlr] Malloc error
Line 456: [RCSSH_ERC_UAC_TerminateMsrpSessionReq_Hdlr] Malloc error
Line 465: Adding SIP header
Line 467: [RCS-SM] Error in Getting Handler for Event:[%d], RCSSH_GetSessMgrOutgoing_EvtHandler
Line 470:  RCS Session Manager Failed to Send Terminate REQ
Line 475: END --------  %s  ---------
Line 498: START --------  %s  -------
Line 503: END --------  %s  ---------
Line 536: START --------  %s  -------
Line 542:  [RCSSH_ERC_UAS_CreateMsrpReq_Hdlr] APP Session ID=%d and SID = %d
Line 547:  ERC Failed to create the IMC Session DB
Line 556: RCSSH_ERC_CheckSessionType Error
Line 565:  [RCSSH_ERC_UAS_CreateMsrpReq_Hdlr]  sdpProfileType = %d
Line 570: Invalid SDP Profile
Line 578: RCSSH_ERC_CheckSessionTypeSupport Error
Line 595: [RCS SM] Error in Getting Handler for CREATE SESSION REQ, RCSSH_GetSessMgrOutgoing_EvtHandler
Line 597:  [RCSSH_ERC_UAS_CreateMsrpReq_Hdlr]  MsrpReqConnInfo.dataDirection = %d
Line 617: ContributionId ID not exist
Line 618: Conversation ID not exist
Line 649:  [RCSSH_ERC_UAS_CreateMsrpReq_Hdlr]  Sending Message AppSessionId = %d, EnrichCallSessionType = %d
Line 650:  [RCSSH_ERC_UAS_CreateMsrpReq_Hdlr]  Sending Message IsMsrpInfoPresent = %d, RemoteUser_Len = %d
Line 662:  RemoteUser_Len, UAS ERC Req Sent to AP
Line 674: END --------  %s  ---------
Line 680: Sending Chat Failure Rsp with = %d to SessionManager
Line 693: END --------  %s  ---------
Line 721: START --------  %s  -------
Line 759: Invalid type
Line 762: [RCS-SM] Error in Getting Handler for Event:[%d], RCSSH_GetSessMgrOutgoing_EvtHandler
Line 766: RCSSH_ERC_UAS_CreateERCFailureRsp_Hdlr, Sending INV RSP to Session Manager Failed
Line 771: END --------  %s  ---------
Line 801: START --------  %s  -------
Line 813:  [RCSSH_ERC_UAS_CreateMsrpRsp_Hdlr] Failed to get the Session ID from AppSession Id
Line 843: Failed to Send Incoming Chat Rsponse
Line 853: END --------  %s  ---------
Line 883: START --------  %s  -------
Line 892: Invite Response Code =%d
Line 918:  WarningText : 
Line 929:  ReasonText : 
Line 943:  APP Session ID=%d
Line 944:  Status=%d
Line 945:  SipReasonCode=%d
Line 946:  WarningLen=%d
Line 947: Warning
Line 949:  ReasonLen=%d
Line 950: ReasonText
Line 966: END --------  %s  ---------
Line 994: START --------  %s  -------
Line 1018:  2xx Response not Received from NW
Line 1025: END --------  %s  ---------
Line 1058: START --------  %s  -------
Line 1063: [RCSSH_ERC_UAS_SessionRsp] Malloc error
Line 1078: [RCSSH_ERC_UAS_SessionRsp] SessionType = %d
Line 1109: Invalid type
Line 1206: [RCSSH_ERC_UAS_SessionRsp] setupVal  =%d
Line 1214: [RCS-SM] Error in Getting Handler for Event:[%d], RCSSH_GetSessMgrOutgoing_EvtHandler
Line 1219: [RCS-SM] Error in Getting Handler for Event:[%d], RCSSH_GetSessMgrOutgoing_EvtHandler
Line 1229: RCSSH_ERC_UAS_SessionRsp, Invite Rsp Sent
Line 1230: END --------  %s  ---------
Line 1256: START --------	%s	-------
Line 1273:  ReasonText : 
Line 1282:  ReasonLen=%d
Line 1284: ReasonText
Line 1291: END --------  %s  ---------
Line 1318: START --------	%s	-------
Line 1323: [RCSSH_ERC_Msrp_Sess_CFM_Hdlr] Received Confirm Event for SessID= %d, MSRPSTATUS = %d
Line 1332: END --------  %s  ---------
Line 1359: START --------	%s	-------
Line 1377:  ReasonText : 
Line 1391: END --------  %s  ---------
Line 1419: START --------  %s  -------
Line 1424: [RCSSH_ERC_SessionStatusInd_Hdlr] Received Confirm Event for SessID= %d, MSRPSTATUS = %d
Line 1455: END --------  %s  ---------
Line 1482: START --------  %s  -------
Line 1494:  ReasonLen=%d
Line 1501: [RCSSH_ERC_TerminateErcSessionInd] Malloc error
Line 1509: [RCSSH_ERC_TerminateErcSessionInd] Malloc error
Line 1517: Adding SIP header
Line 1519: [RCS-SM] Error in Getting Handler for Event:[%d], RCSSH_GetSessMgrOutgoing_EvtHandler
Line 1522:  RCS Session Manager Failed to Send Terminate REQ
Line 1529: END --------  %s  ---------
Line 1550: START --------  %s  -------
Line 1553: In function RCSSH_ERC_SessionRefresh_Hdlr: SessionId = %d
Line 1561: Calling RCSSH_ERC_UAC_ErcSessionReq
Line 1585: END --------  %s  ---------
