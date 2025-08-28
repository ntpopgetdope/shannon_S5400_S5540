Line 81: In function IMSSH_CC_ModifyReq_ConnectedHdlr
Line 88: CC Param is Null!!
Line 92: Media Direction received from AP  :[%x]
Line 98: Invalid Modify Call Type received
Line 108: CallEndCondition [0x%x], rttCallEndCondition [0x%x]
Line 119: Before ACK or while timer is running, Upgrade Request triggered. Wait For ACK or timer expiry to process Upgrade Request
Line 141: Already one Invite/Update transaction is going on. Wait for Procedure to complete
Line 189: In function IMSSH_CC_CallRetrieveReq_ConnectedHdlr
Line 199: Invalid UNHOLD request in CONNECTED state
Line 233: In function IMSSH_CC_CallHoldReq_Hdlr
Line 243: Before ACK, Hold Request triggered. Wait For ACK to process Upgrade Request
Line 252: Add Hold Request to Pending Q Failed. Reject HOLD Request
Line 262: Already one Invite/Update transaction is going on. Wait for Procedure to complete
Line 305: In function IMSSH_CC_CallDisConnReq_ConnectedHdlr
Line 393: Header Preparation Fail
Line 483: Received MT upgrade request
Line 505: Received MT upgrade request, but UE doesn't support video or in Hold State, Reject the Upgrade
Line 559: Received MT upgrade request
Line 576: Received MT upgrade request, but UE doesn't support video or in HOLD State, Reject the Upgrade
Line 632: Received MT upgrade request waiting for precondition
Line 647: Received MT upgrade request, but UE doesn't support video or in HOLD State, Reject the Upgrade
Line 710: Received MT Downgrade request
Line 723: Header Preparation Fail
Line 771: Received MT Hide request
Line 779: Header Preparation Fail
Line 832: Received MT upgrade request, but HOLD Command received with Video Upgrade, Reject the Upgrade
Line 839: Header Preparation Fail
Line 844: Received MT Show request
Line 857: Header Preparation Fail
Line 862: Received MT Show request
Line 936: Received MT Show request
Line 955: Received MT upgrade request, but UE doesn't support video or HOLD State, Reject the Upgrade
Line 984: Received MT Video pause request
Line 991: Header Preparation Fail
Line 1026: Received MT Video resume request
Line 1048: Header Preparation Fail
Line 1166: Header Preparation Fail
Line 1181: Error in SDP processing, Send BYE
Line 1190: IMSSH_SDP_NEG_FAIL, Send Error response and revert to previous state
Line 1211: Header Preparation Fail
Line 1256: [ERR] 
Line 1260: pCallParam is NULL
Line 1276: Re Invite received for the 491 sent from MO before ACK, wait for the other transaction to complete
Line 1290: Call Accepted as Audio, Call type changed to Audio
Line 1297: pCallParam->SubCallType %d
Line 1337: Modify req for rtt upgrade was received before ACK. Once timer expired, it will be processed.
Line 1354: [ECT] Target Call Connected with Call ID[%d], releasing the call with Transferor
Line 1396: In function IMSSH_CC_InviteReq_ConnectedHdlr
Line 1410: CC Param is Null!!
Line 1417: IMS Is not Registered,Clear the call locally
Line 1427: CallEndCondition [0x%x], rttCallEndCondition [0x%x]
Line 1452: Implicit ACK processing is failed
Line 1459: Invalid INVITE REQ in Substate %d
Line 1511: IMSSH_CC_DecodeFeatSupp: PrevIsFocus : [%d]
Line 1527: IsFocus request When on RTT Call should be reject
Line 1537: [IMSSH_CC_InviteReq_ConnectedHdlr] P-Media-Authorization header received
Line 1549: [IMSSH_CC_InviteReq_ConnectedHdlr] Handling Multipart SDP body Not success: Ignore and continue
Line 1553: [IMSSH_CC_InviteReq_ConnectedHdlr] Handling Multipart SDP body Success!
Line 1598: HOLD with New SDP Type, Operate as Per Hold Status
Line 1616: Header Preparation Fail
Line 1657: In function IMSSH_CC_InviteRsp_2xx_ConnectedHdlr
Line 1674: IMS Is not Registered,Clear the call locally
Line 1691: IMSSH_CC_DecodeFeatSupp: PrevIsFocus : [%d]
Line 1706: Invalid INVITE RSP in Substate %d
Line 1743: 200OK doesnt contain the Session Expire header, turned-off the refresh timer
Line 1827: Remote hold received. Changing media direction
Line 1835: Remote hide received
Line 1842: Remote pause received
Line 1859: Precondition did not meet.Sending BYE
Line 1865: SDP negotition fail.Sending BYE
Line 1871: SDP parsing fail.Sending BYE
Line 1877: Processing/Media engine Failure. Sending BYE
Line 1917: SDP negotition did not happen, Continue call with previous SDP
Line 1927: Block Sending ACK, ACK after media Start confirm from AP
Line 1932: Sending ACK for Audio
Line 2077: In function IMSSH_CC_InviteRsp_3to6xx_ConnectedHdlr
Line 2099: Invalid INVITE RSP in Substate %d
Line 2110: Invalid CalllParam %d
Line 2114: Received error response %d for Invite
Line 2265: In function IMSSH_CC_PrackReq_ConnectedHdlr
Line 2269: [ERR] 
Line 2289: In function IMSSH_CC_PrackRsp_2xx_ConnectedHdlr -Not possible in Connected State
Line 2307: In function IMSSH_CC_PrackRsp_3to6xx_ConnectedHdlr -Not possible in Connected State
Line 2344: Header Preparation Fail
Line 2395: Remote Hold and Downgrade received together, SEND HOLD_IND to AP
Line 2401: Received MT Downgrade request
Line 2411: Header Preparation Fail
Line 2441: Received MT Hide request
Line 2447: Header Preparation Fail
Line 2466: Header Preparation Fail
Line 2488: Header Preparation Fail
Line 2573: In function IMSSH_CC_UpdateReq_ConnectedHdlr
Line 2584: IMS Is not Registered,Clear the call locally
Line 2605: UPDATE Response Pending -> %d
Line 2606: Not Processing UPDATE as UE is waiting for UPDATE Response : Sending Error Response 491
Line 2632: 200OK doesn't contain the Session Expire header, turned-off the refresh timer
Line 2637: [IMSSH_CC_UpdateReq_ConnectedHdlr] P-Media-Authorization header received
Line 2678: [SHSC]Exst&NorSession:SID(%d),CallID(%d),DiagID(%d),%s,%s
Line 2728: In function IMSSH_CC_UpdateRsp_2xx_ConnectedHdlr
Line 2737: Received response %d for Update
Line 2746: UPDATE Response Pending Status -> %d, 200 OK for UPDATE Rxd
Line 2768: 200OK doesnt contain the Session Expire header, turned-off the refresh timer
Line 2814: In function IMSSH_CC_UpdateRsp_3to6xx_ConnectedHdlr
Line 2826: Received Error response [%d], DialogId [%d], Confirmed DialogId [%d], Reinvite cause [%d]
Line 2837: UPDATE error response received in connected state. Ignoring the failure.
Line 2847: UPDATE Response Pending Status -> 0x%x, 3xxto6xx for UPDATE Rxd
Line 2931: In function IMSSH_CC_CancelReq_ConnectedHdlr
Line 2943: IMS Is not Registered,Clear the call locally
Line 2994: In function IMSSH_CC_AckReq_ConnectedHdlr
Line 3006: [ERR] 
Line 3011: SIP msg is NULL
Line 3029: ACK is received for the 491 sent from MO, wait for the other transaction to complete
Line 3061: INVITE_WITHOUT_SDP  Set SessionType to CC_CONNECT_SESSION;
Line 3086: SDP return result = %s
Line 3124: SubCallType= %d
Line 3145: Call Accepted as Audio, Call type changed to Audio
Line 3152: pCallParam->SubCallType %d
Line 3218: Modify req for rtt upgrade was received before ACK. Once timer expired, it will be processed.
Line 3235: [ECT] Target Call Connected with Call ID[%d], releasing the call with Transferor
Line 3278: In function IMSSH_CC_ByeReq_ConnectedHdlr
Line 3296: Already one Invite transaction is going on. Reject the request
Line 3336: Invalid sessio type [%d]
Line 3349: IMS Is not Registered,Clear the call locally
Line 3378: Header Preparation Fail
Line 3404: EMC call terminated by NW within 5 sec, retrying in CS
Line 3420: RTP time out when call conencted!
Line 3448: [TMO] NW sent USSD BYE Response without any Content, Retry Req over CSFB
Line 3503: In function IMSSH_CC_SessRefreshTmrExpiry_Hdlr
Line 3526: [IMSSH_CC_SessRefreshTmrExpiry_Hdlr] Refresh Method[%d]
Line 3542: UE is Refresher, sending UPDATE
Line 3547: [IMSSH_CC_SessRefreshTmrExpiry_Hdlr] Not able to create the methodId
Line 3559: Header Preparation Fail
Line 3592: SDP Not included in UPDATE REQ, no need to move to INIT Substate, setting reinvite cause to avoid further MO requests
Line 3606: UE is Refresher, sending INVITE
Line 3611: [IMSSH_CC_SessRefreshTmrExpiry_Hdlr] Not able to create the methodId
Line 3623: Header Preparation Fail
Line 3661: SDP Not included in UPDATE REQ, no need to move to INIT Substate, setting reinvite cause to avoid further MO requests
Line 3679: Refresher is UAS and no UPDATE Received. Send BYE
Line 3699: In function IMSSH_CC_RefreshTmrExpiry_ConnectedHdlr
Line 3724: In function IMSSH_CC_RtpTimeout_ConnectedHdlr
Line 3732: Failed to Fetch Call Param Db!!!
Line 3741: RTT Call end condition [%d]
Line 3746: Call end condition [%d]
Line 3755: RTCP is being received. Not terminating the call
Line 3765: Not terminating the call for RTP timeout as per operator requirement
Line 3778: Text RTCP is being received. Not terminating the call
Line 3795: Not terminating the call for RTP timeout as per operator requirement
Line 3817: pCallParam->ReasonEnum: %d
Line 3850: In function IMSSH_CC_RtpTimeoutClear_ConnectedHdlr
Line 3858: Alert>Failed to fetch call param db
Line 3866: Alert>Failed to fetch CC DB for App id [%d]
Line 3881: Call Type [%d]
Line 3922: In function IMSSH_CC_RtcpTimeoutClear_ConnectedHdlr
Line 3930: Alert>Failed to fetch CC DB for App id [%d]
Line 3987: In function IMSSH_CC_RtcpTimeout_ConnectedHdlr
Line 3998: RTT Call end condition [%d]
Line 4003: Call end condition [%d]
Line 4012: RTP is being received. Not terminating the call
Line 4022: Not terminating the call for RTCP timeout as per operator requirement
Line 4036: Text RTP is being received. Not terminating the call
Line 4058: Not terminating the call for RTCP timeout as per operator requirement
Line 4079: In function IMSSH_CC_PrackWaitTmrExpiry_ConnectedHdlr
Line 4109: In function IMSSH_CC_InviteReqFail_ConnectedHdlr
Line 4123: INVITE method fail. Clear the Call locally 
Line 4127: Indicate to CCM that Resume With the Conf Server Has Failed, callId %d
Line 4167: Reinvite sent failed. Un Hold Failed
Line 4194: In function IMSSH_CC_InviteRespFail_ConnectedHdlr
Line 4219: IMSSH_MC_ConfigureVceReq Fail
Line 4229: IMSSH_MC_ConfigureVceReq Fail
Line 4238: Got Transport error Clear the Call locally
Line 4266: In function IMSSH_CC_AckFail_ConnectedHdlr
Line 4272: pCallParam->ReqResInfo : 0x%x
Line 4277: Got Transport error Clear the Call locally  
Line 4287: pCallParam->ReasonEnum: %d
Line 4315: In function IMSSH_CC_UpdateFail_ConnectedHdlr
Line 4327: Got Transport error Clear the Call locally  
Line 4332: UPDATE Response Pending Status -> 0x%x
Line 4336: Method fail received for UPDATE sent in proceeding state. Ignoring the failure
Line 4343: Method fail received for UPDATE sent in connected state. Terminating the call
Line 4388: [CONF_CALL]CCM STATE : %d
Line 4405: [CONF_CALL]Conf Call TID : %d
Line 4408: [conf]CallID(%d)IMSSH_CC_ADD_USER_TO_MULTI_PARTY_CALL
Line 4423: Return Fail, Conf not possible
Line 4502: [CONF_CALL]Conf Call TID : %d
Line 4517: Failed to create Conf Call
Line 4523: Invalid CCM State
Line 4541: As Part of Phase 1C this feature is not handled
Line 4579: In function IMSSH_CC_CallTransferReq_ConnectedHdlr
Line 4583: [ECT] Received Transferor Callid[%d], Target Callid[%d], Transfer Type[%d]
Line 4587: Call ID[%d] is INVALID
Line 4594: Transfer Type [%d] is not expected in this state
Line 4612: Called Party Num invalid from AP
Line 4617: [ECT] Received Called Party Number: %s
Line 4645: In function IMSSH_INT_CC_CC_ReleaseReq_Hdlr
Line 4676: In function IMSSH_INT_CCM_CC_HoldReq_ConnectedHdlr
Line 4686: Already one Invite transaction is going on. Reject the request
Line 4694: IMSSH_CC_CallHoldReq_ConnectedHdlr Not able to create the methodId
Line 4708: Header Preparation Fail
Line 4778: In Function IMSSH_INT_CC_ReferReq_ConnectedHdlr
Line 4779: [ERR] 
Line 4784: IMSSH_INT_CC_ReferReq_ConnectedHdlr Not able to create the methodId
Line 4802: Header Preparation Fail
Line 4813: Invalid Participant Index
Line 4861: In function IMSSH_CC_ReferRsp_2xx_RespHdlr
Line 4866: [CONF_CALL]Sending Refer Response 202 to CCM Callid[%d]
Line 4899: In function IMSSH_CC_ReferRsp_3to6xx_RespHdlr
Line 4945: In function IMSSH_CC_ReferFail_Hdlr
Line 5005: In function IMSSH_CC_ReferReq_ConnectHoldTransferHdlr
Line 5077: Target session is already established or not present. Rejecting the Transfer Cancel REFER
Line 5103: SessionId : %x
Line 5118: [ECT] Transferee Action: %d
Line 5189: temp memalloc fail
Line 5197: Notify to Refer:sipfrag:(%d)
Line 5213: pSubscriptionState memalloc fail
Line 5223: IMSSH_CC_NotifyReq_MsgHdlr Failed sending Method Response
Line 5228: [CONF_CALL] Cseq Received[%d]
Line 5251: [CONF_CALL]Wait Subscription to Terminate from Conference Server
Line 5256: [CONF_CALL]Participant Info is not found for the Notify Received
Line 5313: IMSSH_CC_NotifyReq_MsgHdlr Failed sending Method Response
Line 5351: In function IMSSH_CC_NotifyReq_MsgHdlr
Line 5376: [IMSSH_CC_NotifyReq_MsgHdlr] Event type is other than conference/refer .Hence returning error
Line 5571: [ERR] 
Line 5644: Error in CallID sent by SIPC
Line 5706: Location Info : 
Line 5723: [IMSSH_CC_DecodeInfoLocationReq] Starting IMSSH_CC_LOCATION_WAIT_TIMER :[%d]
Line 5784: [IMSSH_CC_InfoReq_ConnectedHdlr] Failed sending Method Response
Line 5863: XML : 
Line 5873: USSD String 
Line 5906: [IMSSH_CC_InfoReq_ConnectedHdlr] Failed sending Method Response
Line 5917: [IMSSH_CC_InfoReq_ConnectedHdlr] Failed sending Method Response
Line 5946: In function IMSSH_CC_MediaStateInd_Hdlr
Line 5952: [NEWAUDIOPATH]	Action[%d] Recevied from AP[%s]
Line 5972: MediaState is success
Line 5999: Wait for Precondtion met to send Update
Line 6005: Ignore Media Status Indication
Line 6010: MediaState is Failed
Line 6035: In function IMSSH_CC_HoldUnholdRetryTimerExpiry_ConnectedHdlr
Line 6049: Already one Invite transaction is going on. Wait for Procedure to complete
Line 6073: Invalid reinvite cause [%d]
Line 6096: In function IMSSH_CC_HoReinviteRetryTimerExpiry_ConnectedHdlr
Line 6108: Invalid reinvite cause [%d]
Line 6132: In function IMSSH_CC_UpgradeRetryTimerExpiry_ConnHdlr
Line 6147: Already one Invite transaction is going on. Wait for Procedure to complete
Line 6195: In function IMSSH_CC_DowngradeRetryTimerExpiry_ConnHdlr
Line 6210: Already one Invite transaction is going on. Wait for Procedure to complete
Line 6269: In function IMSSH_CC_LocalPreCondStatus_ConnectedStateHdlr
Line 6275: [ERR] 
Line 6285: [CMCC] Ignore the Dedicated Bearer Deactivation
Line 6291: [IMSSH_CC_LocalPreCondStatus_ConnectedStateHdlr] Sending BYE due Dedicated Bearer Lost in Mid-Session
Line 6366: In function IMSSH_CC_RemoteDisconnectWaitTmrExpiry_ConnectedHdlr
Line 6368: [ERR] 
