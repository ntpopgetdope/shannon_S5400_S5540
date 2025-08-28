Line 130: [IMSSH_CC_UpdateCallParamForEmcCall] IMSSH_EMCREG_EMC_REG_NOT_REQUIRED , No Need to update To and From
Line 144: EMC category received from NS: 
Line 150: EMC category received as INIT from NS
Line 187: [ERROR] IMSSH_CC_CheckForMoReject : Call Rejected
Line 194: [ERROR] IMSSH_CC_UpdateMo_CallType_ApppId FAILED
Line 233: [IMSSH_CC_UpdateSessionAndMethodIDForMoCallReqInfo] Not able to create the session
Line 248: [ERROR]Not registered with SIPS, Received Req to Trigger call to SIPS URI
Line 260: [IMSSH_CC_UpdateSessionAndMethodIDForMoCallReqInfo] Not able to create the methodId
Line 290: [IMSSH_CC_UpdateCallTypeForMoCallReq] Received Call is USSD Call, Changing Call type to USSD
Line 330: [ERROR] Unable to Create session
Line 343: [ERROR] Unable to send session open
Line 376: [ERROR] IMSSH_CC_UpdateMoCallReqInfo : Call Rejected
Line 435: pCcDb is Null or Error in Update CC Db, Reject the Call with CSFB
Line 446: [ERR] 
Line 452: pCallParamTmp is Null or Error in CC Db, Reject the Call with CSFB
Line 485: Video MediaPort Received from NS:[%d]
Line 557: In function IMSSH_CC_ProcessMoCallRequest, CallType:[%d], CallId:[%d]
Line 558: CalledNumber 
Line 616: [ERROR]Header Preparation Fail
Line 629: [ERROR]Header Preparation Fail
Line 665: Access Barring Enable Send EPSFB Req
Line 679: [ERROR] Failed adding to PendingQ
Line 685: AS IDLE, buffer the Set Up Request
Line 703: Triggered AP RTP Stack create
Line 710: Triggered text AP RTP Stack create
Line 745: In function IMSSH_CC_MoCallReq_NULLHdlr
Line 779: In function IMSSH_INT_CC_CC_MoCallSetupReq_Hdlr
Line 785: Transferee Call ID [%d]
Line 855: In function IMSSH_CC_CallRejReq_NullStateHdlr (CallId = %d,Cause = %d)
Line 859: [ERR] 
Line 889: [IMSSH_CC_IsVCRTPresent] Invalid Arguments !!!
Line 901: [IMSSH_CC_IsVCRTPresent] VCRT Supported for the Current Call.
Line 909: [IMSSH_CC_IsVCRTPresent] VCRT Not Supported for the Current Call.
Line 957: [ERROR] InviteReq or CallParam NULL
Line 969: [IMSSH_CC_InviteReq_NullHdlr] - Current Operating Mode: [%d]
Line 973: When UE in NR Only mode & VONR is not supported by UE not honoring calls; sending reject
Line 992: [ERROR]VoIP call occurred during a CS call! Ignore the call!
Line 1000: [ERROR]Batttery Low
Line 1017: [IMSSH_CC_InviteReq_NullHdlr] Privacy ID set.
Line 1095: [ERROR] Contact & Req URI are not matching URI Types
Line 1294: [ERR] 
Line 1297: [ERR] 
Line 1300: [ERR] 
Line 1342: [ERROR]Invalid call type received. Sending error response
Line 1352: ERROR : Call is already closed, Return
Line 1375: IsFocus request When on RTT Call should be reject
Line 1422: [ERR] 
Line 1425: [ERR] 
Line 1428: [ERR] 
Line 1438: [ERR] 
Line 1452: [ERROR]Not registered with SIPS, Received Req to Trigger call to SIPS URI
Line 1469: [IMSSH_CC_InviteReq_NullHdlr] Update ALLOW Header, ALLOW_UPDATE[%d]
Line 1495: [ERROR]Not registered with precondition tag, Received Req with require precondition. Send 420 response.
Line 1523: [IMSSH_CC_InviteReq_NullHdlr] P-Media-Authorization header received
Line 1537: [IMSSH_CC_InviteReq_NullHdlr] Alert-Info header received
Line 1590: In function IMSSH_CC_InviteReq_NullHdlr
Line 1593: [Registry]InvRspType = %d
Line 1609: IMS Is not Registered
Line 1648: [ERROR]No Valid Tid for this session Id
Line 1691: [IMSSH_CC_InviteReq_NullHdlr] pPAssertedId is NULL. 
Line 1698: [IMSSH_CC_CheckMtCallCondition_InviteReq_NullHdlr] Failed
Line 1724: [ERROR] IMSSH_CC_ProcessInviteReqHdrs_NullHdlr
Line 1735: [ERROR] IMSSH_CC_ProcessSdpInvNullReq
Line 1742: Invite Without SDP OFFER Send Offer in 180
Line 1748: 100 REL  =	%d
Line 1754: OPTAG_100REL [0] InvRspType [%d] SubCallType [%d]
Line 1759: Invite Without SDP OFFER Send Offer in 183 
Line 1773: OPTAG_PRECOND in INVITE So Sending Offer with Precondition
Line 1797: [IMSSH_CC_CheckVolteBlockStatus] Failed 
Line 1830: If already Video Call Activated or if a New call is a Video call then reject it
Line 1842: PCT is enabled or Precond Not Met, Send 183 with SDP ANSWER
Line 1862: [IMSSH_CC_InviteReq_NullHdlr] decode details for IMSSH_CC_FEAT_SUPP_ENRICH_MMTEL
Line 1871: [IMSSH_CC_InviteReq_NullHdlr] MMTEL_ENRICHED or MMTEL_ENRICHED_B2C Not Enabled
Line 1874: [IMSSH_CC_InviteReq_NullHdlr] pCallParam->EnrichedCallInfo.isEnrichedCall = %d
Line 1931: [IMSSH_CC_ProcessReplaces] Error in Replaces Process
Line 1936: InvRspType = %d
Line 1957: 100 REL and PRECOND Not supported from Network; Send 180 
Line 1962: 100Rel not present in DL INV, Set Force Send SDP
Line 2078: [CONF_CALL] IMSSH_CC_ENHANCED_CONF_CALL Conf CallID[%d] 
Line 2083: [CONF_CALL]Conf Call TID : %d
Line 2087: Invalid Call Type received from NS
Line 2094: [CONF_CALL]Enhanced Conference Call is Not possible to Trigger
Line 2100: Max Limit Exceeded
Line 2105: Return Fail, Conf not possible
Line 2111: Return Fail, Conf not possible
Line 2209: In function IMSSH_CC_ReferReq_NullHdlr
Line 2249: No dialog matches the target-dialog header
Line 2255: Target-dialog header not included in out of dialog REFER, reject the request
Line 2318: SessionId : %x
Line 2393: In function IMSSH_CC_MoRequestTimeoutTmrExpiry_NullHdlr
Line 2397: Alert>pRcvdMsg is null.
Line 2413: Alert>pCallParam is null.
Line 2147: pLinkedContact memalloc fail
Line 2154: pLinkedContact memalloc fail
