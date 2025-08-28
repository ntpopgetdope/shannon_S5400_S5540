Line 122: START --------  %s  --------
Line 127: Alert>[RCSSH_FTC_PrepareFileSDPProfile] pFTSessIdPtr is NULL !!!!!
Line 195: DEBUG: [RCSSH_FTC_PrepareFileSDPProfile] FileReq->bitmask = %d
Line 204: DEBUG: [RCSSH_FTC_PrepareFileSDPProfile] dispositionType = %d
Line 219: Alert>[RCSSH_FTC_PrepareFileSDPProfile] Skipping sending of CreateDate in SDP
Line 227: [RCSSH_FTC_PrepareFileSDPProfile]  Skipping sending of ModifyDate in SDP
Line 276: [RCSSH_FTC_PrepareFileSDPProfile] StartOffset(%d)  EndOffset(%d) 
Line 282: [RCSSH_FTC_PrepareFileSDPProfile] StartOffset(%d)  EndOffset(%d) 
Line 296: RCSSH_FTC_PrepareSDPBody: SdpMediaType=%d, MediaPort=%d, TransportProto =%d, MediaDirection =%d , setupVal =%d
Line 298: END --------  %s  ---------
Line 324: START --------  %s  --------
Line 328: [MT FT GenerateFile ProfileFROM AP] ftAcceptReq->p_MsrpInfo (%d) so return IMSSH_ERROR
Line 332: [MT FT GenerateFile ProfileFROM AP] Disposition Type(%d)
Line 334: [MT FT GenerateFileProfile FROM AP] MSRPIPType(%d)
Line 336: [MT FT GenerateFileProfile FROM AP] ftAcceptReq->p_MsrpInfo->MSRPPathUriLen (%d)
Line 341: [MT FT RESP FROM AP] PathUri =
Line 345: [MT FT GenerateFileProfile FROM AP] MSRPPort(%d)
Line 346: [MT FT GenerateFileProfile FROM AP in Hex] IPAddress =
Line 347: [MT FT GenerateFileProfile FROM AP] MSRPPort(%d)
Line 348: [MT FT GenerateFileProfile FROM AP] SetUp Value(%d)
Line 393: [RCSSH_FTC_GenerateFileProfile] : Memory Allocation failed....
Line 399: Received/Updated Path URI : 
Line 426: RCSSH_FTC_PrepareSDPBody: SdpMediaType=%d, MediaPort=%d, TransportProto =%d, MediaDirection =%d , setupVal =%d
Line 458: START --------  %s  --------
Line 462: Alert>[RCSSH_FTC_PrepareThumbNailBody] Null Message Received (or) pFTSessIdPtr is NULL !!!!!
Line 469: Alert>[RCSSH_FTC_PrepareThumbNailBody] Failed to allocate memory for Thumbnail
Line 476: Alert>[RCSSH_FTC_PrepareThumbNailBody] Failed to allocate memory for Thumbnail->contentType
Line 485: Alert>[RCSSH_FTC_PrepareThumbNailBody] Failed to allocate memory for Thumbnail->pContentDispostion
Line 495: Alert>[RCSSH_FTC_PrepareThumbNailBody] Failed to allocate memory for Thumbnail->pMsgbody
Line 511: Alert>[RCSSH_FTC_PrepareThumbNailBody]Failed to retrieve CID URL information from pRcsAPPDb
Line 527: [RCSSH_FTC_PrepareThumbNailBody]CID URL:
Line 538: Alert>[RCSSH_FTC_PrepareThumbNailBody]Failed to allocate memory for Thumbnail->pMsgbody->pdata
Line 552: Alert>[RCSSH_FTC_PrepareThumbNailBody]Failed to allocate memory for Thumbnail->pMsgbody->pdata
Line 560: END --------  %s  ---------
Line 596: START --------  %s  --------
Line 600: Alert>[RCSSH_FTC_PrepareCPIMBody] Received SIP Message/AppDb is NULL !!!!!
Line 613: Alert>[RCSSH_FTC_PrepareCPIMBody] No valid FROM URI present from RCS APPDB..Returning Failure
Line 621: Alert>[RCSSH_FTC_PrepareCPIMBody] Failed to allocate memory for From.pUri
Line 639: Alert>[RCSSH_FTC_PrepareCPIMBody] Failed to allocate memory for From.pUri
Line 659: Alert>[RCSSH_FTC_PrepareCPIMBody] Failed to allocate memory for pWrapBodies 
Line 679: Alert>[RCSSH_FTC_PrepareCPIMBody] Failed to allocate memory for IMDN Info
Line 689: Alert>[RCSSH_FTC_PrepareCPIMBody] Failed to allocate memory for IMDN->pMessageID 
Line 702: Alert>[RCSSH_FTC_PrepareCPIMBody] Failed to allocate memory for pCpimBody
Line 708: Alert>[RCSSH_FTC_PrepareCPIMBody] Failed to allocate memory for pCpimBody
Line 716: Alert>[RCSSH_FTC_PrepareCPIMBody] Failed to Encode CPIM Body..Skip sending CPIM
Line 724: Alert>[RCSSH_FTC_PrepareCPIMBody] Failed to allocate memory for pCpimBody->pContentType
Line 733: [RCSSH_FTC_PrepareCPIMBody] Inserting CPIM to MIME Contents
Line 737: [RCSSH_FTC_PrepareCPIMBody] Inserting CPIM to MIME Contents FAILED!!!!!
Line 741: END --------  %s  ---------
Line 774: START --------  %s  --------
Line 820:  Called No=
Line 837: [RCSSH_FTC_Prepare_Resource_List_Body] Null Payload Received !!!!!
Line 873: START --------  %s  --------
Line 877: [RCSSH_FTC_PrepareInviteReqHeader] Null SIP Message Received !!!!!
Line 885: Alert>[RCSSH_FTC_PrepareInviteReqHeader] Failed to get SessionDBPTR from SessionID
Line 891: [RCSSH_FTC_PrepareInviteReqHeader] pFTSessIdPtr->SessionType = %d
Line 900: Alert>[RCSSH_FTC_PrepareInviteReqHeader] Failed to Build T0-HDR
Line 903: Adding SIP header
Line 908: Adding SIP header
Line 909: 	UserName
Line 914: Adding SIP header
Line 915: 	UserName
Line 925: Alert>[RCSSH_FTC_PrepareInviteReqHeader] Failed to Build T0-HDR from PAUsername
Line 929: Adding SIP header
Line 930: 	UserName
Line 972: Adding SIP header
Line 976: Adding SIP header
Line 1002: Adding SIP header
Line 1006: Adding SIP header
Line 1014: Adding SIP header
Line 1018: Alert>  Contribution Id Not exist
Line 1024: Adding SIP header
Line 1028: Alert>  pConversationId Id Not exist
Line 1039: Adding SIP header
Line 1047: END --------  %s  ---------
Line 1078: Alert>Content type is not Multipart
Line 1094: [RCSSH_FTC_ProcessMsgBody] Thumbnail Body Length is %d
Line 1104: [RCSSH_FTC_ProcessMsgBody] Thumbnail Body Length is %d
Line 1121: [RCSSH_FTC_ProcessMsgBody] CRLF_Count is %d
Line 1132: Alert>CPIM Decoding FAIL, Cause%d
Line 1146: Alert>[RCSSH_FTC_ProcessMsgBody] There is no Thumbnail Contens present in SIP MSG BODY
Line 1176: Alert>FILE NAME is mismatched with sending FILE NAME...Report FAILURE to APPL and send FAIL to Session Manager.
Line 1177: [RCSSH_FTC_Validate_FileAttributes] SENT FILE NAME VALUE:
Line 1178: [RCSSH_FTC_Validate_FileAttributes] RECEIVED FILE NAME VALUE:
Line 1185: Alert>[RCSSH_FTC_Validate_FileAttributes]  File Types Mismatch with sent(%d) and received(%d)
Line 1193: Alert>FILE NAME Is missing from SDP Profile...Report FAILURE to APPL and send FAIL to Session Manager.
Line 1202: Alert>FILE TransferID is mismatched with sending ID...Report FAILURE to APPL and send FAIL to Session Manager.
Line 1203: [RCSSH_FTC_Validate_FileAttributes] SENT FILE TRANSFERID VALUE:
Line 1204: [RCSSH_FTC_Validate_FileAttributes] RECEIVED FILE TRANSFERID VALUE:
Line 1213: Alert>TRANSFERID is not present in RSP from Peer...Report FAILURE to APPL and send FAIL to Session Manager.
Line 1257: Alert>RCSSH_FTC_VALIDATE_FILEATTRBUTES] by getting default value from NV, maxSize %d
Line 1262: Alert>RCSSH_FTC_VALIDATE_FILEATTRBUTES] Received size(%d) is more than default value(%d)
Line 1298: Alert> Received InvReqMsg Method with AcceptContact NULL
Line 1309: [RCSSH_FTC_CheckFeatureTag] Received OMA CPM Based FILE Transfer Request for SessionId(%d)
Line 1316: [RCSSH_FTC_CheckFeatureTag] Received BAR for SessionId(%d)
Line 1326: [RCSSH_FTC_CheckFeatureTag] Received OMA CPM Based Multimedia msg in CHAT for SessionId(%d)
Line 1333: [RCSSH_FTC_CheckFeatureTag] Received OMA SIMPLE Based FILE Transfer Request for SessionId(%d)
Line 1338: [RCSSH_FTC_CheckFeatureTag] Received BAR for SessionId(%d)
Line 1345: Alert>[RCSSH_FTC_CheckFeatureTag]Not found any matching FILE Transfer Feature tags for SessionId(%d)
Line 1371: START --------  %s  --------
Line 1376: Alert> FTC- Failed to get the Session ID from AppSession Id
Line 1383: Alert> FTC- Failed to get the Session ID from AppSession Id
Line 1398: Adding SIP header
Line 1402: Alert>RCSSH_FTC_UAS_FileTransferRsp_Hdlr, Sending INV RSP to Session Manager does not include Contribution ID.
Line 1407: Adding SIP header
Line 1411: Alert>RCSSH_FTC_UAS_FileTransferRsp_Hdlr, Sending INV RSP to Session Manager does not include Conversation ID.
Line 1422: Alert>RCSSH_FTC_Send180RspToSessMgr, Sending INV  180 RSP to Session Manager Failed.
Line 1453: START --------  %s  --------
Line 1458: Alert> Received Message Method with AcceptContact NULL
Line 1466: Alert> Received Message Method with AcceptContact NULL
Line 1502: END --------  %s  ---------
