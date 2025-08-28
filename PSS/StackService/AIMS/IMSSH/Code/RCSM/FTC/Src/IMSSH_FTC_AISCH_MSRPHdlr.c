Line 193: PathURI
Line 194: MSRP PATHURILEN = %d
Line 210: [Copied from Req]FileName : 
Line 210: FileName is NULL 
Line 210: _SDPFILEINFO->fileSelectorAttr.fileType = %p, _SDPFILEINFO->fileSelectorAttr.fileType strlen = %d 
Line 210: [Copied from Req]FileType : 
Line 210: FileType is NULL : %p 
Line 292: pFTSessIdPtr = IMSSH_NULL_PTR, so just default value 0 will be sent to AP.
Line 344: START --------  %s  --------
Line 376: Alert>[RCSSH_FTC_UAC_FileTransferRspToAISCH] Received Inactive media direction..Port(%d), FileRangeValid(%d), FileEndRange:(%d)
Line 382: Alert>[RCSSH_FTC_UAC_FileTransferRspToAISCH] File Already present in server, send status as Present Indication to AP
Line 401:  WarningText : 
Line 412:  ReasonText : 
Line 424:  APP Session ID = %d
Line 425:  MSRPConnId = %d
Line 427:  CPIMFromUri Len = %d
Line 428: MsgReq.CPIMFromUri
Line 430:  CPIMToUriLen = %d
Line 431: MsgReq.CPIMToUri
Line 433:  MSRPUriLen = %d
Line 434: MsgReq.MSRPUri
Line 436: MSRP Port = %d
Line 438: Status = %d : (RCSSH_FTC_SUCCESS=1,RCSSH_FTC_FAIL=2,RCSSH_FTC_INPROGRESS=3)
Line 439: AbortCause = %d
Line 441:  MSRPIPType = %d
Line 442: [FTC]IPAdress :
Line 444:  TransportType = %d, SetUpValue = %d
Line 446: Sending to Packet Handler...... 
Line 732: START --------  %s  --------
Line 737: Directed Message received, SESSION_TYPE =%d
Line 753: THUMBNAIL IS PRESENT..Length:%d
Line 757: THUMBNAIL IS NOT PRESENT
Line 793: [IMSSH FTC] CalledURI Length:%d
Line 797: Alert>[IMSSH FTC] Currently no Self URI to AP
Line 861:  APP Session ID=%d
Line 862:  NoOfParticipants=%d
Line 868:  Participant Number [%d],  Len=%d
Line 871: MsgReq.Participant[%d].Participant_Num
Line 875:  MsgIdLen =%d
Line 876: MsgReq.MsgId
Line 878:  ContributionIdLen=%d
Line 879: MsgReq.ContributionId
Line 881:  ConversationIdLen=%d
Line 882: MsgReq.ConversationId
Line 884:  InReplyToContributionIdLen=%d
Line 885: InReplyToContributionId
Line 887:  SubjectLen=%d
Line 888: Subject
Line 890:  CPIMFromUri Len =%d
Line 891: CPIMFromUri
Line 893:  CPIMToUriLen =%d
Line 894: CPIMToUri
Line 896:  FileNameLen = %d FileHashLen = %d
Line 900: FileName 
Line 903:  FileTypeLen =%d
Line 906: FileType 
Line 909:  MSRPIPType=%d
Line 910: IPAddress
Line 911: [FTC]IPAdress :
Line 913:  FIleHashType=%d
Line 916: FIleHash
Line 919:  FileIdLen =%d
Line 922: FileId
Line 925:  TransportType =%d, SetUpValue = %d
Line 932: Sending to Packet Handler...... 
Line 941: END --------  %s  --------
Line 968: START --------  %s  --------
Line 974: Terminate Cause [%d]
Line 979: END --------  %s  --------
Line 1005: START --------  %s  -------
Line 1013: Alert>[RCSSH_FTC_SendTermRsp2AP] Invalid FTSessDb for SID : %d
Line 1017: [RCSSH_FTC_SendTermRsp2AP] AppSessId : %d
Line 1020: [RCSSH_FTC_SendTermRsp2AP] Status : %d
Line 1024: Sending Terminate Response to Packet Handler.....
Line 1026: END --------  %s  --------
Line 1061: START --------  %s  --------
Line 1067: Alert>[RCSSH_FTC_AISCH_FileTransfer_Cfm_Hdlr] Failed to find the matching FTsessionDB from SessionID:%d
Line 1071: [RCSSH_FTC_AISCH_FileTransfer_Cfm_Hdlr] Received Confirm Event for SessID = %d, MSRPSTATUS = %d
Line 1079: END --------  %s  ---------
Line 1107: START --------  %s  --------
Line 1114: END --------  %s  ---------
Line 483: MessageId Length = %d
Line 485: [Copied]MsgReq->MsgId
Line 495: [IMSSH FTC] IMDN Disposition Type = 0x%x
Line 499: [IMSSH FTC] pDecodedImdnInfo->pMessageID = NULL : pMessageID is NULL...CPIM body is not present
Line 505: [IMSSH FTC] pDecodedImdnInfo = NULL : pMessageID is NULL...CPIM body is not present
Line 534:  PPreferred ServiceName
Line 540: [CMS] Preferred Service Length: %d
Line 574: [RCSSH_FTC_UAS_FileTransferInd] SDP Body Length:%d
Line 606: [RCSSH_FTC_UAS_FileTransferInd] CPIM Body Length:%d
Line 614: [RCSSH_FTC_UAS_FileTransferInd] Resouce Body Length:%d
