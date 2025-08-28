Line 66: Call Param is NULL
Line 70: [IMSSH_CC_HandleModifyError] ReinviteCause[%d], RetryCallType[%d]
Line 137: Invalid ReinviteCause [%d]
Line 179: [ERR] 
Line 185: Received Error response [%d]
Line 215: Upgrade Failed
Line 229: Downgrade Failed
Line 242: Invalid ReinviteCause [%d]
Line 278: Response is 481 or 408 for the re-INVITE. Send BYE and Clear the Call
Line 315: In function IMSSH_CC_InviteRsp_3to6xx_ModifyStateHdlr
Line 323: [ERR] 
Line 329: Received Error response %d for INVITE, pCallParam->ReqResInfo: %d
Line 365: [IMSSH_CC_InviteRsp_3to6xx_ModifyStateHdlr] Returning in case of 408/481
Line 375: [IMSSH_CC_InviteRsp_3to6xx_ModifyStateHdlr] ConfirmedDialogId: %d
Line 404: In function IMSSH_CC_InviteRsp_1xx_ModifyStateHdlr
Line 412: [ERR] 
Line 425: Received 100 trying
Line 467: [IMSSH_CC_InviteRsp_1xx_ModifyStateHdlr] SDP Parsing Failed
Line 472: Upgrade Failed
Line 478: Downgrade Failed
Line 482: Invalid ReinviteCause
Line 494: Remote Downgrade received, send CANCEL after PRACK 200OK
Line 502: Upgrade Failed
Line 510: Downgrade Failed
Line 515: Invalid ReinviteCause
Line 867: In function IMSSH_CC_InviteRsp_2xx_ModifyHdlr
Line 885: IMS Is not Registered,Clear the call locally
Line 898: Invalid INVITE RSP in Substate %d
Line 930: IMSSH_CC_DecodeFeatSupp: PrevIsFocus : [%d]
Line 995: INVITE 2xx PRECONDITION REQUIRED/NOT MET BUT CALL CONNECTED
Line 1028: SDP negotiation fail.Sending BYE
Line 1059: Invalid ReinviteCause
Line 1088: 200OK doesnt contain the Session Expire header, turned-off the refresh timer
Line 1096: Block Sending ACK, ACK after media Start confirm from AP
Line 1101: Sending ACK for Audio
Line 1110: MO Session upgrade send RTT BOM
Line 1160: In function IMSSH_CC_TQosTmrExpiry_ModifyHdlr
Line 1174: pCallParam->SubCallType[%d], pModifyRej->SessionId[%d]
Line 1226: In function IMSSH_CC_UpgradeWaitTimerExpiry_ModifyHdlr
Line 1238: pCallParam->SubCallType[%d], pModifyRej->SessionId[%d]
Line 1281: Header Preparation Fail
Line 1301: Header Preparation Fail
Line 1341: In function IMSSH_CC_ModifyReq_ModifyHdlr
Line 1355: CallEndCondition [0x%x], rttCallEndCondition [0x%x]
Line 1381: In function IMSSH_CC_HoldUnholdRetryTimerExpiry_ModifyHdlr
Line 1419: In function IMSSH_CC_ModifyRej_ModifyHdlr
Line 1427: pCallParam->SubCallType[%d], pModifyRej->CallId[%d]
Line 1456: Header Preparation Fail
Line 1480: Header Preparation Fail
Line 1549: In function IMSSH_CC_ModifyAcc_ModifyHdlr
Line 1561: Modify accept not expected for MO Upgrade request, ignoring the response
Line 1565: Media Direction received from AP: [0x%x], Current Media Direction: [0x%x]
Line 1623: pCallParam->IsTimerSupported  = %d, pCallParam->SipSessionExpires.deltaSeconds =%d
Line 1632: Header Preparation Fail
Line 1647: MT Session upgrade send RTT BOM
Line 1680: In function IMSSH_CC_LocalPreCondMet_ModifyStateHdlr
Line 1694: [CMCC] Ignore the Dedicated Bearer Deactivation
Line 1700: Video bearer deactivated. No need to send update
Line 1725: 200OK for PRACK is not received - DELAY sending UPDATE
Line 1743: Local and Remote Precond MET : Trigger 180
Line 1755: Waiting for PRACK
Line 1762: Remote precondition did not meet
Line 1796: In function IMSSH_CC_UpdateRsp_2xx_ModifyStateHdlr
Line 1805: [ERR] 
Line 1817: UPDATE Response Pending Status -> 0x%x, 200 OK for UPDATE Rxd
Line 1936: 200OK doesnt contain the Session Expire header, turned-off the refresh timer
Line 1968: In function IMSSH_CC_PrackReq_ModifyStateHdlr
Line 1977: [ERR] 
Line 2009: SDP return result = %s
Line 2050: Sending PRACK 200 OK failed
Line 2103: In function IMSSH_CC_InviteReqFail_ModifyStateHdlr
Line 2169: In function IMSSH_CC_RefreshTmrExpiry_ModifyHdlr
Line 2210: Invite Response is Pending, not processing INVITE as UE is waiting for INVITE Response : Sending Error Response 491
Line 2249: In function IMSSH_CC_UpdateReq_ModifyHdlr
Line 2258: [ERR] 
Line 2265: UPDATE Response Pending -> %d, not Processing UPDATE as UE is waiting for UPDATE Response : Sending Error Response 491
Line 2316: SDP return result = %s
Line 2333:  Received MT upgrade request waiting for precondition
Line 2347: Upgrade Failed
Line 2354: Downgrade successful
Line 2368: Remote hide received
Line 2439: In function IMSSH_CC_LocalRemotPreCondMet_ModifyStateHdlr
Line 2451: Local and Remote Precond MET
Line 2455: Local and Remote Precond MET
Line 2466: Waiting for PRACK
Line 2502: In function IMSSH_CC_CallDisConnReq_ModifyHdlr
Line 2515: IMS Is not Registered,Clear the call locally
Line 2524: [IMSSH_CC_CallDisConnReq_ModifyHdlr] Not able to create the methodId
Line 2541: Cause = %d
Line 2544: RTP time out happned in AP
Line 2549: Header Preparation Fail
Line 2564: Header Preparation Fail
Line 2617: In function IMSSH_CC_UpdateRsp_3to6xx_ModifyHdlr
Line 2625: [ERR] 
Line 2631: Received Error response %d for INVITE, pCallParam->ReqResInfo: %d
Line 2663: [IMSSH_CC_UpdateRsp_3to6xx_ModifyHdlr] Returning in case of 408/481
Line 2673: [IMSSH_CC_UpdateRsp_3to6xx_ModifyHdlr] ConfirmedDialogId: %d
Line 2698: In function IMSSH_CC_CancelReq_ModifyHdlr
Line 2705: No Valid Tid for this session Id
Line 2741: In function IMSSH_CC_CancelRsp_2xx_ModifyHdlr
Line 2763: In function IMSSH_CC_CancelRsp_3to6xx_ModifyHdlr
Line 2798: In function IMSSH_CC_PrackRsp_2xx_ModifyHdlr
Line 2809: [ERR] 
Line 2858: Upgrade Failed
Line 2865: Downgrade successful
Line 2880: 200OK for PRACK received - Send pending CANCEL
Line 2888: 200OK for PRACK received - Send pending UPDATE
Line 616: Invalid ReinviteCause
Line 639: Upgrade Failed
Line 645: Downgrade successful
Line 672: Upgrade Failed
Line 680: Downgrade Failed
Line 686: Invalid ReinviteCause
Line 705: INVITE 2xx PRECONDITION STATE INVALID
Line 723: Invalid ReinviteCause
Line 761:  Received MT Video pause request
Line 818: SDP parsing fail.Sending BYE
Line 832: Invalid ReinviteCause
