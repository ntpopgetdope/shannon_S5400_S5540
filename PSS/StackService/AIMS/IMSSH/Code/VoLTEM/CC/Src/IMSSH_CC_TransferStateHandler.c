Line 152: In function IMSSH_CC_SetTransferReqLineAndToHdr
Line 187: In function IMSSH_CC_HandleTrasfereeActions
Line 194: Called Party Num INVALID
Line 201: pCallParam INVALID
Line 221: Failed to send internal call setup req
Line 297: In function IMSSH_CC_SendTransferReferCancelReq
Line 307: Failed to create the methodId
Line 341: Failed to form Remote URI
Line 350: Header Preparation Fail
Line 358: Unable to send BYE clear the call locally
Line 394: In function IMSSH_CC_GetReferType
Line 398: INVALID CallParam DB
Line 423: [ECT] referType = %d
Line 456: In function IMSSH_CC_HandleCallTransferReq
Line 465: pCalledPartyNumber/pCcDb is NULL
Line 482: IMSSH_CC_HandleCallTransferReq Not able to create the session
Line 499: [IMSSH_CC_HandleCallTransferReq] Not able to create the session
Line 506: [IMSSH_CC_HandleCallTransferReq] Failed to open Session
Line 511: [ECT] Refer Session ID[%d]
Line 516: Failed to create the methodId
Line 564: Failed to form Remote URI
Line 576: [ECT] Displaying Refer-To URI
Line 587: REFER Header Preparation Fail
Line 600: Unable to send BYE clear the call locally
Line 642: In function IMSSH_CC_HandleCallTransferCancelReq
Line 651: No active transfer session present
Line 658: Failed to send REFER Method
Line 695: In function IMSSH_CC_CallTransferCancelReq_Hdlr
Line 701: Call ID is INVALID
Line 732: In function IMSSH_CC_AckReq_TransferHdlr
Line 739: [ERR] 
Line 744: SIP msg is NULL
Line 757: ACK is received for the 491 sent from MO, wait for the other transaction to complete
Line 799: SDP return result = %s
Line 900: In function IMSSH_CC_ReferRsp_2xx_RespTransferHdlr
Line 937: [ECT] CC DB Transfer Sess Info is invalid
Line 956: INVALID Session Type [%d]
Line 987: In function IMSSH_CC_ReferRsp_3to6xx_RespTransferHdlr
Line 1014: INVALID Session Type [%d]
Line 1039: In function IMSSH_CC_ReferFail_TransferHdlr
Line 1065: INVALID Session Type [%d]
Line 1372: In function IMSSH_CC_InviteReq_TransferHdlr
Line 1387: IMS Is not Registered,Clear the call locally
Line 1400: Implicit ACK processing is failed
Line 1409: Invalid INVITE REQ in Substate %d
Line 1450: [IMSSH_CC_InviteReq_TransferHdlr] P-Media-Authorization header received
Line 1457: [IMSSH_CC_InviteReq_TransferHdlr] Content Length:[%d]
Line 1468: CONTENT LENGTH = 0
Line 1496: Header Preparation Fail
Line 1512: Alert>Donot Consider as Unhold,  Local Call HOLD
Line 1554: In function IMSSH_CC_InviteRsp_2xx_TransferHdlr
Line 1567: IMS Is not Registered,Clear the call locally
Line 1575: Invalid INVITE RSP in Substate %d
Line 1579: CallHeldBy = %d
Line 1605: 200OK doesnt contain the Session Expire header, turned-off the refresh timer
Line 1666: SDP Failure
Line 1740: SDP negotition did not happen.Sending BYE
Line 1756: Block Sending ACK, ACK after media Start confirm from AP
Line 1761: Sending ACK for Audio
Line 1854: In function IMSSH_CC_InviteRsp_3to6xx_TransferHdlr
Line 1871: Invalid CalllParam %d
Line 1877: Invalid INVITE RSP in Substate %d
Line 1900: Received error response %d for Invite
Line 2030: In function IMSSH_CC_InviteReqFail_TransferHdlr
Line 2037: Invite Fail: Callid %d cause %d
Line 2065: In function IMSSH_CC_InviteRespFail_TransferHdlr
Line 2077: Got Transport error Clear the Call locally  
Line 2146: In function IMSSH_CC_RtcpTimeout_TransferHdlr
Line 2160: RTCP Timeout. UE should not terminate call until user ends call.
Line 2190:  Not terminating the Target call as it is already established
Line 2206: Wait for 200OK & ACK
Line 2233: In function IMSSH_CC_DisconnectWaitTmrExpiry_Hdlr
Line 2266: In function IMSSH_CC_AssuredTransferWaitTmrExpiry_TransferHdlr
Line 2273: No active transfer session
Line 2287: Target session is already established. Not handling timer expiry
Line 2319: In function IMSSH_INT_CC_CC_HoldReq_Hdlr
Line 2326: [ECT] Hold received for Call ID [%d]
Line 2331: Already one Invite transaction is going on. Wait for Procedure to complete
Line 2339: Failed to add to pending queue. Failed to hold the call
Line 2381: pIMSSHCCDb is NULL
Line 2395: Call with Transferor is active. Session will be replaced after its termination
Line 2412: Target UE had kept the Transferor on hold, maintaining call in MT Hold
Line 2415: Call with Transferor is already terminated. Session will be replaced
Line 2513: pIMSSHCCDb is NULL
Line 2517: [ECT] Call ID[%d], Result[%d]
Line 2529: Failed to send internal call setup req
Line 2541: Internal Hold failed, sending Transfer fail ind to AP
Line 2560: [ECT] Call Param DB is INVALID
Line 2597: pIMSSHCCDb is NULL
Line 2672: [CC>>CC]INT_CC_CC_MOCALL_SETUP_RSP: Transferee CallId[%d], Target CallId[%d], Result[%d]
Line 2718: Failed to generate Call ID
Line 2725: Mem alloc Fail
Line 2742: Mem alloc Fail
Line 2749: [CC>>CC]INT_CC_CC_MOCALL_SETUP_REQ: CallId[%d] Initiate call to Target
Line 2750: INT_CC_CC_MOCALL_SETUP_REQ, CalledNumber 
Line 2792: [CC>>CC]INT_CC_CC_HOLD_RSP: SessionId[%d]
Line 2835: [CC>>CC]INT_CC_CC_RETRIEVE_RSP: SessionId[%d]
Line 2875: [CC>>CC]INT_CC_CC_HOLD_REQ: CallId[%d],SID[%d] Set to Hold
Line 2915: [CC>>CC]INT_CC_CC_RETRIEVE_REQ: CallId[%d],SID[%d] Set to Hold
Line 2960: [CC>>CC]INT_CC_CC_RELEASE_REQ: CallId[%d], Cause[%d], SID[%d]
Line 1169: CONTENT LENGTH != 0
Line 1282: Header Preparation Fail
Line 1308: Alert>Donot Consider as Unhold,  Local Call HOLD
Line 1331:  Received Remote upgrade request In Transfer state
Line 1337: Error in SDP processing, Send BYE
Line 1131:  Received Remote upgrade request With Remote HOLD, Send HOLD_IND to AP and Reject the Upgrade
Line 1137:  Received Remote upgrade request With Remote UNHOLD, Send UNHOLD_IND to AP
Line 1791: ReinviteCause [%d]
Line 1807: Invalid ReinviteCause
