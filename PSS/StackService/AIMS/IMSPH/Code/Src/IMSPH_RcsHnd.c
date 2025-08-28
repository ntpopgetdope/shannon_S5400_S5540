Line 220: [IMSPH_StoreAppSessId]: AppSessId : %d, Stored for StackId : %d, at index : %d
Line 227: [IMSPH_StoreAppSessId]: AppSessId : %d, Stored for StackId : %d, at index : %d
Line 347: IMSPH_InitiliaseFuncRsmArray() is called.
Line 358: [IMSPH_RxUnknownCmd] Undefined RSM command
Line 366: [RCS_TX PACKET] 
Line 370: [RCS_TX PACKET] 
Line 371: [RCS_TX PACKET] 
Line 375: [RCS_TX PACKET] 
Line 376: [RCS_TX PACKET] 
Line 377: [RCS_TX PACKET] 
Line 381: [RCS_TX PACKET] 
Line 382: [RCS_TX PACKET] 
Line 383: [RCS_TX PACKET] 
Line 384: [RCS_TX PACKET] 
Line 389: [RCS_TX PACKET] : usMsgLen=%d
Line 399: [RCS_RX PACKET] 
Line 403: [RCS_RX PACKET] 
Line 404: [RCS_RX PACKET] 
Line 408: [RCS_RX PACKET] 
Line 409: [RCS_RX PACKET] 
Line 410: [RCS_RX PACKET] 
Line 414: [RCS_RX PACKET] 
Line 415: [RCS_RX PACKET] 
Line 416: [RCS_RX PACKET] 
Line 417: [RCS_RX PACKET] 
Line 422: [RCS_RX PACKET] : usMsgLen=%d
Line 461: @!@<<[RCS_MULTI_FRAME][%d]: %s
Line 465: @!@<<[RCS_CHAT][%d]IM: %s
Line 468: @!@<<[RCS_GROUP_CHAT][%d]: %s
Line 474: @!@<<[RCS_FILE_TRANSFER][%d]: %s
Line 477: @!@<<[RCS_COMMON_MESSAGE][%d]: %s
Line 483: @!@<<[RCS_XCAP_MANAGE]{%d]: %s
Line 486: @!@<<[RCS_ERC][%d]: %s
Line 490: @!@<<[RCS_PRESENCE][%d]: %s
Line 493: @!@<<[RCS_CONFIG_MANAGE][%d]: %s
Line 499: @!@<<[RCS_RANGE_OUTSIDE][%d]: _SIT_AIMS_RCS_GROUP_NONE, so cannot specify RsmID
Line 535: [IMSPH_SendRsmMsg2NS] _MsgId = %d, _gID = %d, _usParamLen = %d, _pParam = %p
Line 598: [IMSPH_SendRsmCmd2] dropped, Invalid usParamLen : %d, _pParam = %p
Line 607: [IMSPH_SendRsmCmd2] dropped, UNKNOWN RSM TYPE : %d
Line 612: IMSPH_SendRsmCmd2: ucType=%d, usRsmId=%x, AppSessionID=%d, usParamLen=%d
Line 619: Multi Frame processing ...
Line 653: [IMSPH_SendRsmCmd2] PalMemAlloc(pMsgBuf) failure
Line 723: [IMSPH_SendRsmCmd2] Host I/F isn't Ready
Line 751: Single Frame processing
Line 786: [IMSPH_SendRsmCmd2] Host I/F isn't Ready
Line 919: [IMSPH_TxGenericResponse] dropped, malloc Failed
Line 928: [IMSPH_TxGenericResponse] pSendMsg null, Failed
Line 961: [IMSPH_SendRsmErr] dropped, malloc Failed
Line 999: [IMSPH_SendRsmErrInd] dropped, malloc Failed
Line 1038: [IMSPH_SendRsmErrGrpId] dropped, malloc Failed
Line 1052: [IMSPH_SetIMSPH_CId] Invalid %d->%d (%s, %d)
Line 1058: [IMSPH_SetIMSPH_CId] Set IMSPH_CId %d->%d (%s, %d)
Line 1190: @!@>>[RCS_MULTI_FRAME][%d]: %s
Line 1215: @!@>>[RCS_CHAT][%d]: %s
Line 1229: [IMSPH_HandleRsm] NULL fnPtr
Line 1235: @!@>>[RCS_GROUP_CHAT][%d]: %s
Line 1250: [IMSPH_HandleRsm2] NULL fnPtr
Line 1256: @!@>>[RCS_FILE_TRANSFER][%d]: %s
Line 1271: [IMSPH_HandleRsm] NULL fnPtr
Line 1277: @!@>>[RCS_COMMON_MESSAGE][%d]: %s
Line 1292: [IMSPH_HandleRsm] NULL fnPtr
Line 1314: @!@>>[RCS_XCAP_MANAGE][%d]: %s
Line 1329: [IMSPH_HandleRsm2] NULL fnPtr
Line 1334: IMSPH_HandleRsm2() - SIT_AIMS_ENRICHED_CALLING
Line 1336: @!@>>[RCS_CHAT][%d]: %s
Line 1350: [IMSPH_HandleRsm] NULL fnPtr
Line 1356: @!@>>[RCS_PRESENCE][%d]: %s
Line 1371: [IMSPH_HandleRsm2] NULL fnPtr
Line 1377: @!@>>[RCS_CONFIG_MANAGE][%d]: %s
Line 1392: [IMSPH_HandleRsm2] NULL fnPtr
Line 1436: @!@>>[RCS_RANGE_OUTSIDE][%d]: %s
Line 1585: [IMSPH_ProcHdlcFrame2] NULL PTR ERROR !!!! so SKIP... pFrame = %p, pTotal_length = %p
Line 1591: [IMSPH_ProcHdlcFrame2] Len:%d TotalPacketNum:%d CurrentPackeIdx:%d LastPacketFlag:%d
Line 1620: [IMSPH_ProcHdlcFrame2] pTempAMFPtr->TotalLength:%d pTempAMFPtr->AccumulatedLength:%d LastPacketFlag:%d
Line 1633: [IMSPH_ProcHdlcFrame2] pTempAMFPtr NULL
Line 1664: FAIL to Send RTK Msg 
Line 1671: [IMSSH -> IMSPH: %s ]
Line 1697: [IMSPH->IMSSH-Direct: %s ]
Line 1736: [IMSPH->IMSSH EXT MSG: %s ]
Line 1776: [IMSPH->XCAPM: %s ]
Line 1892: IMSPH_CheckAndProcRcs, IMSPH_SIGNAL_PACKET Default MsgLenTotal = %d
Line 1907: IMSPH_CheckAndProcRcs, AMF_MODE_MULTI_FRAGMENTATION MsgLenTotal = %d
Line 1911: IMSPH_CheckAndProcRcs2, #Error Wrong PacketType=0x%x, Packet Dropped
Line 2034: IMSPH_SitInfHandler, pMsgBody NULL - invalid
Line 2040: IMSPH_SitInfHandler:: extMsgId=%d,Rcm_Group_Id=%d,length=%d
Line 2046: IMSPH_SitInfHandler, extMsgId=%d - invalid
Line 2060: IMSPH_SitInfHandler, pRcsMsg %p, findlength %d - invalid
Line 2140: [IMSSH->PKTHND] Invalid Msg Type
