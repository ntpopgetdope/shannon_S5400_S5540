Line 128: Adding SIP header
Line 144: Adding SIP header
Line 154: [RCSSH_SessMgr_PrepareInviteHeader] PPREFERREDID is NULL..Temp recalculating again from REGDB
Line 159: Adding SIP header
Line 161: Adding SIP header
Line 164: Adding SIP header
Line 166: Adding SIP header
Line 170: Adding SIP header
Line 188: Adding SIP header
Line 190: Adding SIP header
Line 195: Adding SIP header
Line 250: Adding SIP header
Line 257: Adding SIP header
Line 271: Adding SIP header
Line 283: Adding SIP header
Line 285: Adding SIP header
Line 288: Adding SIP header
Line 290: Adding SIP header
Line 293: Adding SIP header
Line 304: Alert>[RCSSH_SessMgr_PrepareInviteRSPHeader] Memory allocation failed for MIME SDPBDY PTR
Line 313: Alert>[RCSSH_SessMgr_PrepareInviteRSPHeader] pSipMsgBody is invalid..
Line 322: Alert>[RCSSH_SessMgr_PrepareInviteRSPHeader] Memory allocation failed for sdpBdyPtr->pContentType PTR
Line 351: [RCSSH_SessMgr_PrepareInviteRSPHeader] Content length:%d
Line 353: Adding SIP header
Line 401: Adding SIP header
Line 402: Adding SIP header
Line 406: Adding SIP header
Line 408: Adding SIP header
Line 412: Adding SIP header
Line 415: Adding SIP header
Line 426: Alert>[RCSSH_SessMgr_PrepareNonInviteRSPHeader] Memory allocation failed for MIME SDPBDY PTR
Line 435: Alert>[RCSSH_SessMgr_PrepareNonInviteRSPHeader] pSipMsgBody is invalid..
Line 443: Alert>[RCSSH_SessMgr_PrepareNonInviteRSPHeader] Memory allocation failed for sdpBdyPtr->pContentType PTR
Line 474: Adding SIP header
Line 546: Adding SIP header
Line 547: Adding SIP header
Line 554: Adding SIP header
Line 557: Adding SIP header
Line 611: Adding SIP header
Line 622: Adding SIP header
Line 627: Adding SIP header
Line 628: Adding SIP header
Line 636: Error in Updating CNI Info
Line 642: Adding SIP header
Line 647: Adding SIP header
Line 649: Adding SIP header
Line 651: Adding SIP header
Line 681: Alert>INVALID SESSION RECEIVED
Line 694: Alert>INVALID SESSION State for MT INVITE
Line 734: Alert>[RCSSH_SessMgr_InviteRsp_Hdlr] SessionDB is empy...
Line 741: [RCSSH_SessMgr_InviteRsp_Hdlr] Received SIP RSP:%d for INVITE SessionID:[%d] SessionType:[%d] DialogId:[%d]
Line 760: INVALID Response code recived : %d
Line 799: Alert>RCSSH_SessMgr_MOInviteReqHdlr Not able to create the methodId
Line 822: Alert>RCSSH_SessMgr_MOInviteReqHdlr Not able to Allocate memory for SIPMSG BODY
Line 833: [RCSSH_SessMgr_MOInviteReqHdlr] sdpProfile: %d and localSetupVal: %d 
Line 838: Alert>RCSSH_SessMgr_MOInviteReqHdlr Generating SDP failed for Invite Request
Line 847: Alert>RCSSH_SessMgr_MOInviteReqHdlr Updating Invite Header failed.
Line 861: Alert>[RCSSH_SessMgr_MOInviteReqHdlr] Memory allocation failed for MIME SDPBDY PTR
Line 870: Alert>[RCSSH_SessMgr_MOInviteReqHdlr] pSipMsgBody is invalid..
Line 878: Alert>[RCSSH_SessMgr_MOInviteReqHdlr] Failed to allocate memory for sdpBdyPtr->contentType
Line 891: [RCSSH_SessMgr_MOInviteReqHdlr] RCSSH_SessMgr_Build_MIME_Body() didn't return IMSSH_SUCCESS
Line 908: [RCSSH_SessMgr_MOInviteReqHdlr] Content Length:%d
Line 910: Adding SIP header
Line 935: RCS SESSMGR STATE CHANGE, Old State:[%d], New State:[%d]
Line 943: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 946: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 995: MSGTMR-STOP: %s SessId = %d, Status = %d [0:NULL, 2:RUNNING] -> NULL
Line 1003: [RCSSH_SessMgr_MOSession_RecvdInvite2XX_Rsp] Start Session Expiry timer
Line 1010: MSGTMR-STOP: %s SessId = %d, Status = %d [0:NULL, 2:RUNNING] -> NULL
Line 1011: [RCSSH_SessMgr_MOSession_RecvdInvite2XX_Rsp] Start Session Expiry timer
Line 1018: [RCSSH_SessMgr_MOSession_RecvdInvite2XX_Rsp] NO Session Expire header Present, There is no need to send UPDATE 
Line 1046: [RCSSH_SessMgr_MOSession_RecvdInvite2XX_Rsp] Process SDP Output :%d for SessionID:%d
Line 1050: Alert>INVALID SDP CODE
Line 1056: Alert>[RCSSH_SessMgr_MOSession_RecvdInvite2XX_Rsp] No SDP contents present...Indicate to Controller
Line 1064: Alert>Received Invalid RSP code??? 
Line 1075: Alert>Sending INV RSP to Controller Failed
Line 1086: RCS SESSMGR STATE CHANGE, Old State:[%d], New State:[%d]
Line 1099: Alert>Sending SDP FAIL IND to Controller Failed
Line 1137: MOSESSION RX INV ERROR RSP Code:[%d] Sid[%d]
Line 1144: Alert>IMSSH_SendChSessionClose Failed
Line 1160: MSGTMR-STOP: %s SessId = %d, Status = %d [0:NULL, 2:RUNNING] -> NULL
Line 1161: MSGTMR-STOP: %s SessId = %d, Status = %d [0:NULL, 2:RUNNING] -> NULL
Line 1170: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1177: [RCS SESSMGR INVITE/NonINVITE RSP] Sending INTMSG:[%d] to INTQ Failed
Line 1177: [RCS SESSMGR INVITE RSP] MSG Allocation for INTQ Failed
Line 1219: Profile Type = %d
Line 1228: Alert>[RCSSH_SessMgr_PrepareSDPInfo] SDP Generation Fail
Line 1274: Alert>[RCSSH_SessMgr_ProcessSDPBody] Received Large  Mode for MultiMedia Message..Changing SessionType to FT & ProfileType to FILE PROFILE
Line 1282: Alert>[RCSSH_SessMgr_PrepareSDPInfo] SDP Generation Fail
Line 1299: Alert>[RCSSH_SessMgr_ProcessSDPBody] SDP Profile Pointer is NULL...Return Failure
Line 1311: Alert>[RCSSH_SessMgr_ProcessSDPBody] Received Invalid Media Direction..based on request chaning.
Line 1318: Alert>[RCSSH_SessMgr_ProcessSDPBody] Changing Default media direction to %d
Line 1324: Alert>[RCSSH_SessMgr_ProcessSDPBody] Changing Default media direction to %d
Line 1330: Alert>[RCSSH_SessMgr_ProcessSDPBody] SDP Profile Pointer is NULL...Return Failure
Line 1343: Alert>[RCSSH_SessMgr_ProcessSDPBody] SDP Profile Pointer is NULL...Return Failure
Line 1362: Alert>[RCSSH_SessMgr_PrepareSDPInfo] INVALID Media Direction received :%d
Line 1453: Alert>pSipMsg is NULL!!
Line 1462: Alert>Memory Alocation failed for pMediaParameters
Line 1476: [RCSSH_SessMgr_Build_MIME_Body] Encode MIME failed
Line 1482: [RCSSH_SessMgr_Build_MIME_Body]Strlen Of Body  : %d
Line 1483: [RCSSH_SessMgr_Build_MIME_Body]Length of Body  : %d
Line 1568: [RCSSH_SessMgr_GetSDPBody_FromMIME] SDP length:%d
Line 1600: Alert>[RCSSH_SessMgr_AddToMIMEList] Invalid pSipInviteReq PTR
Line 1606: Alert>[RCSSH_SessMgr_AddToMIMEList] Invalid bodyPtr PTR
Line 1617: Alert>[RCSSH_SessMgr_AddToMIMEList]Multiple body Pointers present in bodyPtr..only one at a time is allowerd
Line 1743: MSGTMR-STOP: %s SessId = %d, Status = %d [0:NULL, 2:RUNNING] -> NULL
Line 1756: [RCS SESSMGR Precond Met Status] Sending INTMSG:[%d] to INTQ Failed
Line 1767: [RCS SESSMGR SESSION CFM] Sending INTMSG:[%d] to INTQ Failed
Line 1767: [RCS SESSMGR SESSION STATUS CFM] MSG Allocation for INTQ Failed
Line 1781: Alert>[RCSSH_SessMgr_HandlePrCondStatusInd] Dedicated Bearer Opened, and ACK Already Received so Send Event now,
Line 1782: [RCS SESSMGR SESSION CFM] Sending INTMSG:[%d] to INTQ Failed
Line 1782: [RCS SESSMGR SESSION STATUS CFM] MSG Allocation for INTQ Failed
Line 1792: Alert>[RCSSH_SessMgr_HandlePrCondStatusInd] Dedicated Bearer Opened, but still ACK is not Received so wait till ACK,
Line 1797: Alert>[RCSSH_SessMgr_HandlePrCondStatusInd]  Failed to get Handler for ACK REQ
Line 1828: Refresh duration %d sec
Line 1836: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1840: Alert>[IMSSH_SessMgr_Start_SessionRefreshTmr] Not start SessionRefreshTimer
Line 1892: pAppDb is NULL!!!
Line 1944: Mem alloc failed!!
Line 1956: Mem alloc failed!!
Line 1968: Mem alloc failed!!
Line 1985: Build External Msg Failed.
Line 2000: Add to DSDS List Failed
Line 2046: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
