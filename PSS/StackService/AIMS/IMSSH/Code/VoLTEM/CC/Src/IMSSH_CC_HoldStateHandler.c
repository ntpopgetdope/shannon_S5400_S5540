Line 73: In function IMSSH_CC_ModifyReq_HoldHdlr
Line 81: CC Param is Null!!
Line 89: Media Direction received from AP: [0x%x]
Line 97: Invalid Modify Call Type received
Line 105: CallEndCondition [0x%x], rttCallEndCondition [0x%x]
Line 109: ModifyCallType [%d]
Line 116: Rejecting upgrade req in hold state
Line 129: Already one Invite transaction is going on. Wait for Procedure to complete
Line 156: Modify request received in HOLD state. Sending direct response to AP
Line 169: Setting CC call type to audio
Line 174: Setting CC call type to audio video
Line 179: Setting CC call type to text audio
Line 189: Invalid CallId. Sending Rejct rsp
Line 221: In function IMSSH_CC_AckReq_HoldHdlr
Line 228: [ERR] 
Line 233: SIP msg is NULL
Line 246: ACK is received for the 491 sent from MO, wait for the other transaction to complete
Line 289: SDP return result = %s
Line 326: Alert>Donot Consider as Unhold,  Local Call HOLD
Line 408: In function IMSSH_CC_CallTransferReq_HoldHdlr
Line 413: [ECT] Received TransferType [%d], CallId [%d], TargetCallId [%d], CalledPartyNumberLen[%d]
Line 417: Call ID[%d] is INVALID
Line 446: [ECT] Called Party Num / Target call ID invalid from AP
Line 452: [ECT] Received Called Party Number: %s
Line 484: In function IMSSH_INT_CC_CC_RetrieveReq_Hdlr
Line 494: Already one Invite transaction is going on. Wait for Procedure to complete
Line 534: In function IMSSH_CC_CallRetrieveReq_HoldHdlr
Line 544: Already one Invite/Update transaction is going on. Wait for Procedure to complete
Line 593: In function IMSSH_CC_CallDisConnReq_HoldHdlr
Line 605: IMS Is not Registered,Clear the call locally
Line 614: IMSSH_CC_CallDisConnReq_HoldHdlr Not able to create the methodId
Line 635: Header Preparation Fail
Line 1115: In function IMSSH_CC_InviteReq_HoldHdlr
Line 1125: CC Param is Null!!
Line 1135: IMS Is not Registered,Clear the call locally
Line 1145: CallEndCondition [0x%x], rttCallEndCondition [0x%x]
Line 1155: Implicit ACK processing is failed
Line 1163: Invalid INVITE REQ in Substate %d
Line 1204: [IMSSH_CC_InviteReq_HoldHdlr] P-Media-Authorization header received
Line 1211: [IMSSH_CC_InviteReq_HoldHdlr] Content Length:[%d]
Line 1216: [IMSSH_CC_InviteReq_HoldHdlr] Handling Multipart SDP body Not success: Ignore and continue
Line 1220: [IMSSH_CC_InviteReq_HoldHdlr] Handling Multipart SDP body Success!
Line 1232: CONTENT LENGTH = 0
Line 1261: Header Preparation Fail
Line 1269: Header Preparation Fail
Line 1285: Alert>Don't Consider as Unhold,  Local Call HOLD
Line 1318: In function IMSSH_CC_InviteRsp_1xx_HoldHdlr
Line 1327: IMS Is not Registered,Clear the call locally
Line 1631: In function IMSSH_CC_InviteRsp_2xx_HoldHdlr
Line 1650: IMS Is not Registered,Clear the call locally
Line 1658: Invalid INVITE RSP in Substate %d
Line 1662: CallHeldBy = %d
Line 1687: 200OK doesnt contain the Session Expire header, turned-off the refresh timer
Line 1724: SDP negotition did not happen, Continue call with previous SDP
Line 1733: Block Sending ACK, ACK after media Start confirm from AP
Line 1738: Sending ACK for Audio
Line 1781: ReinviteCause [%d]
Line 1798: Invalid ReinviteCause
Line 1898: In function IMSSH_CC_InviteRsp_3to6xx_HoldHdlr
Line 1915: Invalid CalllParam %d
Line 1921: Invalid INVITE RSP in Substate %d
Line 1964: Received error response %d for Invite
Line 2052: Response is 481 or 408 for the re-INVITE. Send BYE and Clear the Call
Line 2105: In function IMSSH_CC_PrackReq_HoldHdlr
Line 2116: IMS Is not Registered,Clear the call locally
Line 2153: Error in SDP processing, Send BYE
Line 2174: Header Preparation Fail
Line 2205: In function IMSSH_CC_PrackRsp_2xx_HoldHdlr
Line 2213: Received response %d for PRACK
Line 2249: In function IMSSH_CC_PrackRsp_3to6xx_HoldHdlr
Line 2257: Received Error response %d for PRACK
Line 2327: In function IMSSH_CC_UpdateReq_HoldHdlr
Line 2341: IMS Is not Registered,Clear the call locally
Line 2363: UPDATE Response Pending -> %d
Line 2364: Not Processing UPDATE as UE is waiting for UPDATE Response : Sending Error Response 491
Line 2373: [IMSSH_CC_UpdateReq_HoldHdlr] P-Media-Authorization header received
Line 2458: Alert>Donot Consider as Unhold,  Local Call HOLD
Line 2511: Error in SDP processing, Send BYE
Line 2526: Header Preparation Fail
Line 2558: In function IMSSH_CC_UpdateRsp_2xx_HoldHdlr
Line 2568: Received response %d for Update
Line 2574: UPDATE Response Pending Status -> %d, 200 OK for UPDATE Rxd
Line 2597: 200OK doesnt contain the Session Expire header, turned-off the refresh timer
Line 2643: In function IMSSH_CC_UpdateRsp_3to6xx_HoldHdlr
Line 2659: Received Error response %d for Update
Line 2663: UPDATE Response Pending Status -> %d, 3xxto6xx for UPDATE Rxd
Line 2758: In function IMSSH_CC_ByeReq_HoldHdlr
Line 2772: Bye is received for 1-1 Call Conference Partiticpant, VCE Stop will be sent after Swapping of Call Ids
Line 2783: IMS Is not Registered,Clear the call locally
Line 2807: Header Preparation Fail
Line 2822: [CONF_CALL] Conference Sequence [%d] [0:INVALID][1:SUB,REF][2:REF,SUB]
Line 2844: EMC call terminated by NW within 5 sec, retrying in CS
Line 2859: RTP time out when call Hold!
Line 2883: In function IMSSH_CC_RefreshTmrExpiry_HoldHdlr
Line 2908: In function IMSSH_CC_RtpTimeout_HoldHdlr
Line 2927: RTP Timeout. UE should not terminate call until user ends call.
Line 2946: Ignoring RTP timeout in hold state
Line 2971: In function IMSSH_CC_RtcpTimeout_HoldHdlr
Line 2993: RTT Call end condition [%d]
Line 2998: Call end condition [%d]
Line 3019: Wait for 200OK & ACK
Line 3044: In function IMSSH_CC_UpgradeRetryTimerExpiry_HoldHdlr
Line 3076: In function IMSSH_CC_HoldUnholdRetryTimerExpiry_HoldHdlr
Line 3088: Already one Invite transaction is going on. Wait for Procedure to complete
Line 3124: Invalid reinvite cause [%d]
Line 3152: In function IMSSH_CC_InviteReqFail_HoldHdlr
Line 3167: Transport/Timeout error .Clear the Call
Line 3177: Indicate Hold Response Failure to CCM : callId %d
Line 3183: IMSSH_CC_SendCallRellnd to CCM : callId %d
Line 3193: Reinvite sent failed. Hold Failed
Line 3198: Reinvite sent failed. Unhold Failed
Line 3251: [IMSSH_INT_CC_InviteReq_Hdlr] CallType:[%d], CallId:[%d]
Line 3264: IMS Is not Registered
Line 3272: pCcDb is NULL
Line 3278: IMS Is not Registered
Line 3301: All active calls are not on hold
Line 3309: [IMSSH_INT_CC_InviteReq_Hdlr] Not able to create the session
Line 3317: [IMSSH_INT_CC_InviteReq_Hdlr] Not able to create the methodId
Line 3335: Unable to Create session
Line 3346: [ERR] 
Line 3355: [CONF_CALL] To Send Invite To Conference Server
Line 3358: [ERR] 
Line 3394: [CONF_CALL]To Send Invite To the New User Being Added in Conference Established State
Line 3405: [CONF_CALL]Setting Source As CCM To send the Invite Response to CCM
Line 3447: Header Preparation Fail
Line 3462: Triggered audio AP RTP Stack create
Line 3468: Triggered text AP RTP Stack create
Line 3510: In function IMSSH_CC_INT_RetrieveReq_HoldHdlr
Line 3520: Already one Invite transaction is going on. Reject the request
Line 3529: IMS Is not Registered,Clear the call locally
Line 3537: [IMSSH_CC_CallRetrieveReq_HoldHdlr] Not able to create the methodId
Line 3558: Header Preparation Fail
Line 3608: In function IMSSH_INT_CCM_CC_ReleaseReq_Hdlr
Line 3619: IMS Is not Registered,Clear the call locally
Line 3629: [IMSSH_INT_CCM_CC_ReleaseReq_Hdlr] Not able to create the methodId
Line 3654: Header Preparation Fail
Line 695: IMSSH_CC_DecodeFeatSupp: PrevIsFocus : [%d]
Line 702: IMSSH_CC_InviteReq_HoldHdlr_UpdateContactHeader: CallId : [%d]
Line 901: CONTENT LENGTH != 0
Line 986: Header Preparation Fail
Line 1018: Header Preparation Fail
Line 1044: Alert>Donot Consider as Unhold,  Local Call HOLD
Line 1067:  Received Remote upgrade request In HOLD state
Line 1073:  Received Remote upgrade request In HOLD state
Line 1079: Error in SDP processing, Send BYE
Line 742:  Received Remote upgrade request With Remote HOLD, Send HOLD_IND to AP and Reject the Upgrade
Line 751:  Received Remote upgrade request With Remote UNHOLD, Send UNHOLD_IND to AP
Line 761:  Received MT upgrade request
Line 779: Alert>Call still Held by Local, Reject remote Upgrade
Line 787: Alert>Call still Held by Local/Remote, Reject remote Upgrade
Line 813:  Received Remote upgrade request In HOLD state
Line 820:  Received Remote upgrade request With Remote HOLD, Send HOLD_IND to AP and Reject the Upgrade
Line 828:  Received Remote upgrade request With Remote UNHOLD, Send UNHOLD_IND to AP
Line 838:  Received MT upgrade request waiting for precondition
Line 854: Alert>Call still Held by Local, Reject remote Upgrade
Line 861: Alert>Call still Held by Local/Remote, Reject remote Upgrade
Line 1394: IMSSH_CC_DecodeFeatSupp: PrevIsFocus : [%d]
Line 1487: Precondition did not meet.Sending BYE
Line 1494: SDP negotition fail.Sending BYE
Line 1501: SDP parsing fail.Sending BYE
Line 1566: Alert>Donot Consider as Unhold,  Local Call HOLD
Line 1583:  Received MT Show request
Line 1589: Alert>Donot Consider as Unhold,  Local Call HOLD
