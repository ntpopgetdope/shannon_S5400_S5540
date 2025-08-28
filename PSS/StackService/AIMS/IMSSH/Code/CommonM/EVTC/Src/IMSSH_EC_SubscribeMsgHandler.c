Line 96: [EC] IMSSH_EC_SUBS_DefaultHandleRegisterInd
Line 125: [EC] No matched pSubscriptionElement!
Line 144: [EC] IMSSH_EC_SUBS_DefaultHandleResubscribeReq
Line 145: INT_RC_EC_RESUBSCRIBE_REQ Ind should come in subscribed state
Line 165: [EC] IMSSH_EC_SUBS_DefaultHandleUnsebscribeReq
Line 166: INT_RC_EC_UNSUBSCRIBE_REQ Ind should come in subscribed state
Line 182: Fail to find corresponding Sid
Line 187: Fail to find corresponding AppId
Line 203: Subscription with this TID and mode already exist
Line 220: IMSSH_EC_SUBS_DefaultHandleGroupChatInd , NO handler
Line 256: Terminated Ind should come in subscribed state
Line 334: Fail to send SUBSCRIBE message
Line 339: Fail to send response to NOTIFY message
Line 420: [EC] IMSSH_EC_SUBS_DefaultHandleNotifyWaitTimerExpiry
Line 441: [EC] IMSSH_EC_SUBS_DefaultHandleMsgWaitingInd - No action
Line 465: [EC] IMSSH_EC_SUBS_InitHandleRegisterInd
Line 500: [EC]IMSSH_EC_SUBS_InitHandleRegisterInd. Status[%d]
Line 555: [EC] No matched pSubscriptionElement!
Line 561: [EC]EC_EVT_REG is not supported!!!
Line 588: [EC]IMSSH_EC_SUBS_InitHandleConferenceCallInd.
Line 700: [EC]IMSSH_EC_SUBS_InitHandleGroupChatReq.
Line 759: [EC]IMSSH_EC_SUBS_InitHandleMsgWaitingInd. Status[%d]
Line 787: [EC] Subscription already exists
Line 807: [EC] No matched pSubscriptionElement!
Line 834: [EC]IMSSH_EC_SUBS_InitHandleCallPullingInd. Status[%d]
Line 886: [EC] No matched pSubscriptionElement!
Line 910: [EC]SubscribingHandleMethodSent(%d)
Line 912:  - Call ID:
Line 960: [EC]SubscribingHandleMethodFail(%d)
Line 1027: [EC] Invalid Request Pointer, Return Error
Line 1034: [EC] Invalid Subscription Pointer, Return Error
Line 1040: [EC] SipStatusCode [%d]
Line 1138: [EC] Invalid Request Pointer, Return Error
Line 1145: [EC] Invalid Subscription Pointer, Return Error
Line 1168: [IMSSH_EC_SUBS_SubscribingHandleMethodRsp] Min Expires Hdr Present ->Value: [%d]
Line 1170: [APP DB Udpate] REG Event Subscribe Expires ->Value: [%d]
Line 1184: Retry resource list SUBSCRIBE for 423 error hadling with AppId [%d]
Line 1188: [IMSSH_EC_SUBS_SubscribingHandleMethodRsp] Min Expires Hdr Present ->Value: [%d]
Line 1210: Don't need to retry SUBSCRIBE
Line 1238: Valid Subscription : Exists -> Not Expected here. Check Flow
Line 1243: APP DB ->Not Found
Line 1275: [EC] Invalid Request Pointer, Return Error
Line 1282: [EC] Invalid Subscription Pointer, Return Error
Line 1307: [EC][state %d] Sid[%d] when we start retry timer
Line 1382: [EC] UE set 0 to expires. But the expiresin NOTIFY is not zero. Ignore this.
Line 1476: [EC][state %d] The value of Expires fieldin 200 OK is 0. So terminate current SUBSCRIBE.
Line 1524: [EC] Invalid Request Pointer, Return Error
Line 1531: [EC] Invalid Subscription Pointer, Return Error
Line 1623: [EC] Invalid Request Pointer, Return Error
Line 1630: [EC] Invalid Subscription Pointer, Return Error
Line 1658: [EC][state %d] pRetryAfter is NULL
Line 1691: [EC] Invalid Request Pointer, Return Error
Line 1698: [EC] Invalid Subscription Pointer, Return Error
Line 1732: Alert>Parser decoding failed.
Line 1779: [EC] Invalid Request Pointer, Return Error
Line 1786: [EC] Invalid Subscription Pointer, Return Error
Line 1797: [EC] SipStatusCode [%d]
Line 1854: [EC][state %d] Auth Calculation is failure. SUBSCRIPTION is terminated!!
Line 1959: [IMSSH_EC_SUBS_SubscribingHandleMethodRsp] GeneralInfoInd Sent to AP for Location, Wait for Location from AP
Line 2117: [EC]IMSSH_EC_SUBS_SubscribingHandleMethodRsp
Line 2121: [EC] Invalid Subscription Pointer, Return Error
Line 2134: [EC] [IMSSH_EC_SUBS_ProcessSubRespRetryActions] Returned Error
Line 2162: [EC] [IMSSH_EC_SUBS_ProcessSubscribeResp] Returned Error
Line 2174: [EC] Mem Allocation for pNewSubscriptionRequired is failure!!

Line 2203: [EC] Starting IMSSH_EC_SUBSCRIBE_RETRY_AFTER_TIMER for SipStatusCode[%d] with default value
Line 2241: [EC] Waiting Rsp Timer-Sid[%d] is expired
Line 2278: [EC]IMSSH_EC_SUBS_SubscribingHandleIndialogMessageInd(%d)
Line 2356: Invalid EC State
Line 2431: [EC]IMSSH_EC_SUBS_ReSubscribingHandleMethodFail(%d)
Line 2535: SIPStatusCode[%d], EventType[%d] Expires [%d]
Line 2598: [EC][state %d] Sid[%d] when we start retry timer
Line 2667: [EC] UE set 0 to expires. But the expiresin NOTIFY is not zero. Ignore this.
Line 2702: [EC][state %d]The value of Expires field in 200 OK is 0. So don't try to make SUBSCRIPTION
Line 2742: [EC][state %d] Auth Calculation is failure. SUBSCRIPTION is terminated!!
Line 2851: [EC]IMSSH_EC_SUBS_ReSubscribingHandleMethodRsp
Line 3060: [IMSSH_EC_SUBS_ReSubscribingHandleMethodRsp] Min Expires Hdr Present ->Value: [%d]
Line 3062: [APP DB Udpate] REG Event Subscribe Expires ->Value: [%d]
Line 3136: [EC] Mem Allocation for pNewSubscriptionRequired is failure!!

Line 3180: [EC]IMSSH_EC_SUBS_ReSubscribingHandleIndialogMessageInd(%d)
Line 3247: [EC] IMSSH_EC_SUBS_SubscribedHandleRegisterInd
Line 3278: [EC] No matched pSubscriptionElement!
Line 3299: [EC]IMSSH_EC_SUBS_SubscribedHandleTerminateInd.
Line 3338: [EC] The subscription doesn't exit:Sid(%d)
Line 3343: [EC] Fail to find corresponding subscription
Line 3348: [EC] pIMSSH_CCM_EC_TermInd is null
Line 3373: [EC]IMSSH_EC_SUBS_SubscribedHandleImcTerminateInd.
Line 3382: [EC]IMSSH_EC_SUBS_SubscribedHandleImcTerminateInd. Sid = %d and pRCSSH_IMC_EC_TermInd_t->APPId = %d
Line 3405: pReqLineUri or pToHeaderUri is NULL
Line 3425: [EC] The subscription doesn't exit:Sid(%d)
Line 3430: [EC] Fail to find corresponding subscription
Line 3435: [EC] pRCSSH_IMC_EC_TermInd_t is null
Line 3471: [EC] IMSSH_EC_SUBS_SubscribedHandleReSubscribeReq
Line 3475: Fail to find corresponding Sid
Line 3480: Fail to find corresponding AppId
Line 3508: [EC] IMSSH_EC_SUBS_SubscribedHandleUnsebscribeReq
Line 3551: Fail to find corresponding Sid
Line 3556: Fail to find corresponding AppId
Line 3582: [EC][IMSSH_EC_SUBS_SubscribedHandleCallPullingInd] Status[%d]
Line 3586: [EC][IMSSH_EC_SUBS_SubscribedHandleCallPullingInd] Already Subscribed, No Handling Required
Line 3590: [EC][IMSSH_EC_SUBS_SubscribedHandleCallPullingInd] Call Pulling is Disabled, Terminate Subscription Explicitely
Line 3604: [EC] No matched pSubscriptionElement!
Line 3629: [EC] RetryTimer-Sid[%d] is expired
Line 3642: APP DB is removed. Terminate subscription.
Line 3677: [EC] SubscribedHandleExpiresTimerExpiry-Sid[%d] is expired
Line 3745: INVALID SID received
Line 3782: [EC] Timer N-Sid[%d] is expired
Line 3834: [EC] Waiting Rsp Timer-Sid[%d] is expired
Line 3865: [EC] IMSSH_EC_SUBS_SubscribedHandleTimerWaitingNotifyTerminated. Sid[%d]
Line 3889: [EC] Invalid Sid.
Line 3913: [EC] IMSSH_EC_SUBS_SubscribedHandleNotifyWaitTimerExpiry. Sid[%d]
Line 3928: [EC] Invalid session / event type
Line 3934: [EC] Invalid Sid.
Line 4019: [EC]SipStatusCode : [%d]
Line 4084: [EC][state %d] The value of Expires fieldin 200 OK is 0.
Line 4113: [EC][state %d] Susbcription state is updated as part of NOTIFY(As 200 OK of SUBS recieved late than NOTIFY).
Line 4128: [EC][state %d] Expire value is changed. Need to re-start timer.
Line 4161: [EC][state %d] EC sent expires value as 0.ButThe value of Expires field in 200 OK is not 0.
Line 4247: [EC] Mem Allocation for pNewSubscriptionRequired is failure!!

Line 4285: [EC]IMSSH_EC_SUBS_SubscribedHandleIndialogMessageInd(%d)
Line 4384: Allocation for sessionDetails Failed
Line 4392: Allocation for pExtMsg Failed
Line 4408: Add to DSDS List Failed
Line 4419: APP DB is removed. Terminate subscription.
Line 4444: APP DB is removed. Terminate subscription.
Line 4485: [IMSSH_EC_SUBS_CheckAndSendSendRefreshRegReq] Retry Count :[%d]
Line 4563: [EC]IMSSH_EC_SUBS_CheckRetryPossibility Retry Count :[%d]
