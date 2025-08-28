Line 223: Adding SIP header
Line 268: VT is available, so skip VoLTE tuple. fullstr: %s, videoMedia: %d, capatype : %x 
Line 443: START --------  %s  --------
Line 446: Alert>Me is NULL!!
Line 462: END --------  %s  ---------
Line 489: START --------  %s  --------
Line 502: Cannot allocate memory for PPresenceNode
Line 514: Cannot allocate memory for encode Entity
Line 526: END --------  %s  ---------
Line 558: [RCSSH_EABC_CheckAndProcessPublishRefreshPendingReq]PublishRefersh was pending while ongoing call on other stack!! Perform ReFresh Publish
Line 559: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 948: START --------  %s  --------
Line 956: [RCSSH_EABC_ExecuteSipPublication] Restore PrevPidfInfo, publishmode %d
Line 988: Cannot get SessionID
Line 1006: [RCS SM] Error in Getting Handler for CREATE SESSION REQ, RCSSH_GetSessMgrOutgoing_EvtHandler
Line 1009: Cannot get session creation function (SessionId=%d)
Line 1019: [RCSSH_EABC_ExecuteSipPublication] Get Current Profile Etag :
Line 1026: Alert>Failed to Allocate memory for SIP MSG
Line 1081: Adding SIP header
Line 1098: [RCSSH_EABC_ExecuteSipPublication] Stop previous scheduled Publish retry
Line 1106: MSGTMR-STOP: %s SessId = %d, Status = %d [0:NULL, 2:RUNNING] -> NULL
Line 1107: MSGTMR-STOP: %s SessId = %d, Status = %d [0:NULL, 2:RUNNING] -> NULL
Line 1112: [RCS-CSC] Error in Getting Handler for Event:[%d], RCSSH_GetSessMgrOutgoing_EvtHandler
Line 1115: Alert>Failed in Sending SIP PUBLISH TO CH for SessionID:[%d]
Line 1133: END --------  %s  ---------
Line 1167: In function RCSSH_EABC_PidfProfileSetReq_ActiveStateHdlr
Line 1177: Tid = %d
Line 1200: SIP PUBLISH Not allowed
Line 1209: [RCSSH_EABC_PidfProfileSetReq_ActiveStateHdlr] Closing Publish session - Tid[%d]
Line 1220: Publication FAILED in RCSSH_EABC_PidfProfileSetReq_ActiveStateHdlr 
Line 1269: In function RCSSH_EABC_SubscribeRsp_ActiveStateHdlr
Line 1887: In function RCSSH_EABC_SipPublishRsp_ActiveStateHdlr (Tid=%d, CurrMode=%d)
Line 1900: Different PUBLISH Session ID(Stored:%d, Received:%d)
Line 1905: PUBLISH RSP code : %d
Line 1911: RetryAfter code : %d
Line 1953: No SIP-Etag in 200 OK
Line 1963: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1967: No Expires in 200 OK
Line 1976: PUBLISH_RSP (3XX~6XX) of UNPUBLISH : Delete Profile Etag and noting to do.
Line 1990: If the device receives the same error after the immediate retry, it shall wait for the Publish timer expiry to retry Publish
Line 1993: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 2102: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 2108: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 2118: Retry initial Publish according to the initial Publish Schedule requirement.
Line 2120: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 2190: In function RCSSH_EABC_PublishRefreshTmrExpiry_ActiveStateHdlr
Line 2200: Different PUBLISH Session ID(Stored:%d, Received:%d)
Line 2207: App DB is NULL!!!
Line 2214: Pdn Info Node is NULL!!!
Line 2220: Active call is present on other stack, waiting for call end to process publish method
Line 2230: No service, Set m_PdnPublishState = %d
Line 2234: Recovered from OOS (RegStatus = %d)
Line 2238: ATT : Try to excute Normal Publish with RCSSH_EABC_SIP_LATESTINFO_PUBLISH
Line 2298: In function RCSSH_EABC_PublishRetryAfterTmrExpiry_ActiveStateHdlr
Line 2308: Different PUBLISH Session ID(Stored:%d, Received:%d)
Line 2315: Active call is present on other stack, waiting for call end to process publish method
Line 2322: Exit RetryAfterTimer : publishallowed %d, subscribeallowed %d 
Line 2326: For TMO, Send response to AP with RCSSH_EABC_CAUSE_RETRY_INIT_PUBLISH to recieve next uncompressed initiial Publish
Line 2333: Try to excute Publish with RCSSH_EABC_SIP_LATESTINFO_PUBLISH
Line 591: Alert>Failed to Allocate memory for SIP MSG Body
Line 600: Cannot generate XML body
Line 662: P-Associated is not Present use from RegDB
Line 666: Cannot generate To Header AppDb is NULL
Line 670: Adding SIP header
Line 893: [RCSSH_EABC_ExecuteSipPublication] SIP-If-Match with Etag :
Line 719: get Expire from previous publish response : %d
Line 735: get Expire from DB : %d
Line 745: Do not add the Expires-Header of publish except unpublish
Line 779: [RCSSH_EABC_ExecuteSipPublication_AddContactHeader]Add feature tags in contact header for TMO
Line 783: Adding SIP header
Line 836: [RCSSH_EABC_ExecuteSipPublication] Inserting SIP Instance Feature Tag
Line 1299: Retry Publish immediately !!
Line 1308: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1342: PUBLISH_RSP_403 : Forbidden
Line 1354: 403StatusLine->SIPReasonPhrase :
Line 1359: [403StatusLine] found Not authorized for Presence !!
Line 1366: [403StatusLine] found User Not Registered !!
Line 1375: [403StatusLine] No string found related to VZW Req
Line 1380: [403StatusLine] There is no SIPReasonPhrase
Line 1387: [403StatusLine] Perform IMS re-registration followed by initial Publish!!
Line 1426: PUBLISH_RSP_408 : Try to retry Publish after %d ms 
Line 1429: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1434: Retry initial Publish according to the initial Publish Schedule requirement.
Line 1436: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1469: Perform nitial Publish immediately
Line 1483: PUBLISH_RSP_412 : Try to excute Initial Publish with RCSSH_EABC_SIP_LATESTINFO_PUBLISH
Line 1485: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1519: Retry Publish immediately !!
Line 1528: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1578: PUBLISH_RSP_423 : Set the expire value with MinExpires %d 
Line 1579: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1585: PUBLISH_RSP_423 : Set the expire value with MinExpires %d 
Line 1593: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1604: PUBLISH_RSP_423 : There is no MinExpires header
Line 1636: Retry Publish immediately !!
Line 1645: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1692: PUBLISH_RSP_500 : Try to retry Publish after %d ms 
Line 1695: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1709: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1715: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1752: PUBLISH_RSP_503 : Try to retry Publish after %d ms 
Line 1755: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1771: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1777: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1787: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1788: PUBLISH_RSP_503 : No PUBLISH will be allowed for another %d sec 
Line 1792: PUBLISH_RSP_503 : There is no Retry after header
Line 1833: PUBLISH_RSP_603 : Try to retry Publish after %d ms 
Line 1836: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1843: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1849: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
