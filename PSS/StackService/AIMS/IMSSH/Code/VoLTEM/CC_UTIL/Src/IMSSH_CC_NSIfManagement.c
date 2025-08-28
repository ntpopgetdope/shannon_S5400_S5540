Line 162: IMSSH_CC_UpdateCalledPartyNumber: Call Id : [%d]
Line 166: Invalid CallId in IMSSH_CC_UpdateCalledPartyNumber to CNS: callId %d
Line 173: [IMSSH_CC_UpdateCalledPartyNumber] Call Param DB is NULL
Line 177: pParamLst->CalledLen : %d
Line 190: MT number from P-ASSOURI
Line 200: MT number from TO URI
Line 256: MT call received from Anonymous. Setting display name as 'RESTRICTED'
Line 263: Display name len : %d
Line 266: MT DISPLAY NAME
Line 270: MT CALL NUMBER 
Line 271: CalledPartyNumberLength : %d
Line 342: MT call received from Anonymous. Setting display name as 'RESTRICTED'
Line 349: Display name len : %d
Line 352: MT DISPLAY NAME
Line 356: MT CALL NUMBER 
Line 357: CalledPartyNumberLength : %d
Line 392: [IMSSH_CC_SendCallSetupInd] callId %d
Line 411: VCRT Enabled for the Call, Send Setup_IND after receiving VCRT UPDATE/PDelay Timer Expiry
Line 423: Session DB not created yet!!, will be created later in flow
Line 438: Setup Ind already Sent/Mo Call for CallId %d
Line 458: [IMSSH_CC_SendCallSetupInd] remoteSupportedMedia [%d], RatChangeType [%d]
Line 471: IMSSH_CC_SendCallSetupInd: Call Type %d
Line 477: [DialogueDb Null] IMSSH_CC_SendCallSetupInd: Call Type %d
Line 486: Forwarded Number
Line 487: Forwarded Number Length : [%d]
Line 492: CALL FWD NUMBER 
Line 493: CallFwdNumberLength : %d
Line 529: N/W does not support verstat feature.
Line 532: [IMSSH_CC_SendCallSetupInd] isVCRTEnabled [%d]
Line 538: PQos Timer vale to AP = [%d] msec
Line 546: Call Type to AP [%d]
Line 554: Send Previously Stored SDP to AP
Line 584: Triggered AP RTP Stack create
Line 591: Triggered text AP RTP Stack create
Line 627: [ERR] 
Line 631: Already sent IMSSH_CC_SendCallSetupCnf to CNS: callId %d
Line 643: IMSSH_CC_SendCallSetupCnf: ConfiremdDialgId[count]  %d
Line 653: IMSSH_CC_SendCallSetupCnf to CCM for callId %d Will be sent after Ack is Sent
Line 657: IMSSH_CC_SendCallSetupCnf to CCM: callId %d
Line 670: IMSSH_CC_SendCallSetupCnf to CNS: callId %d
Line 689: [IMSSH_CC_SendCallSetupCnf] Media Direction sent to AP: [0x%x]
Line 698: [IMSSH_CC_SendCallSetupCnf] remoteSupportedMedia [%d], RatChangeType [%d]
Line 714: MT Connected NUMBER 
Line 716: CalledPartyNumberLength : %d
Line 762: IMSSH_CC_SendCallConnectCnf: callId %d
Line 768: Already sent IMSSH_CC_SendCallConnectCnf to CNS: callId %d
Line 774: Already sent IMSSH_CC_SendCallConnectCnf to CNS: callId %d
Line 782: Not sending Call Connect Cnf for Target Call
Line 837: IMSSH_CC_SendCallAlertlnd: Callid %d
Line 848: [CONF_CALL] No Need to Indicate to CCM
Line 852: Transferred call, no need to indicate to CNS
Line 858: AlertInd Already sent
Line 862: Alert Indication to CNS
Line 890: [IMSSH_CC_SendCallAlertlnd] Indicating Call Waiting is TRUE
Line 930: [CONF CALL]For Conf Call donot play the LRBT,return
Line 934: IMSSH_CC_SendLrtslnd to CNS: RingStatus %d
Line 1086: IMSSH_CC_UpdateReasonHdrInRelInd
Line 1090: Null pointer
Line 1106: Reason header numbers to be sent to AP :[%d]
Line 1134: ReasonHdr Protocol
Line 1142: ReasonHdr Idx: %d, CauseCode: %d
Line 1143: ReasonHdr Text
Line 1181: Null pointer
Line 1197: Number of Warning headers to be sent to AP :[%d]
Line 1207: MALLOC FAILURE
Line 1230: Warning hdr Idx: %d, Warning CauseCode: %d
Line 1231: Warning Protocol : 
Line 1232: Warning Text : 
Line 1281: Sending Call Reason Code [%d]
Line 1282: Sending Call Reason Text 
Line 1310: IMSSH_CC_CNS_SendRellndNullState : callId %d cause %d, InternalCauseToAP:%d
Line 1330: pSendMsg is NULL
Line 1373: EMC Call is Active on Other Stack, so donot send CS EMC as release cause
Line 1379: Call is Active on Other Stack, so donot send CSFB as release cause
Line 1422: IMSSH_CC_CNS_SendRellnd : callId %d cause %d
Line 1438: Call Param in Released
Line 1451: pSendMsg is NULL
Line 1467: IMSSH_CC_CNS_SendRellnd : RatChangeType[%d] 
Line 1481: IMSSH_CC_CNS_SendRellnd : CallType[%s] 
Line 1486: IMSSH_CC_CNS_SendRellnd : CallType[%s] 
Line 1493: IMSSH_CC_CNS_SendRellnd : SipRespCode[%d] 
Line 1536: [IMSSH_CC_CNS_SendRellnd]: Valid RRC Error, filling the reason header for it
Line 1545: [IMSSH_CC_CNS_SendRellnd]: Valid TCP Error, filling the reason header for it
Line 1591: IMSSH_CC_SendCallRellnd: callId %d
Line 1610: INVITE to conference (callId %d) failed, send fail response for INVITE only
Line 1623: IMSSH_CC_SendCallRellnd to CCM: callId %d cause %d
Line 1630: IMSSH_CC_SendCallRellnd to CCM : callId %d cause %d
Line 1657: IMSSH_CC_SendCallRellnd to CCM: callId %d cause %d
Line 1670: IMSSH_CC_SendCallRellnd to CCM: callId %d cause %d
Line 1678: [IMSSH_CC_SendCallRellnd] Block sending of rel ind before multiparty rsp
Line 1684: IMSSH_CC_SendCallRellnd to INT_CC: callId %d cause %d
Line 1704: Not sending rel ind for Transfer session
Line 1773: EMC Call is Active on Other Stack, so donot send CS EMC as release cause
Line 1779: Call is Active on Other Stack, so donot send CSFB as release cause
Line 1832: Call Param Released
Line 1839: IMSSH_CC_SendCallRellnd380Rsp to CC: callId %d cause %d
Line 1854: IMSSH_CC_SendCallRellnd380Rsp  to CNS: callId %d cause %d
Line 1873: EMC SubCat 
Line 1891: [IMSSH_CC_SendCallRellnd380Rsp] EmcContactNum 
Line 1892: EmcContactNumLen %d
Line 1897: Contact Num not found in 380 Contact Header
Line 1903: EMC SubCat not received
Line 1912: IMSSH_CC_SendCallRellnd380Rsp : SipRespCode[%d] 
Line 1961: IMSSH_CC_SendCallDisconnectInd: callId %d
Line 1974: [CONF_CALL] No Need to Indicate to CCM
Line 1978: Transferred call, no need to indicate to CNS
Line 2018: IMSSH_CC_SendHoldIndMsg: Callid %d
Line 2085: IMSSH_CC_SendUnHoldIndMsg: callId %d
Line 2151: Invalid CallID In IMSSH_CC_CallModifyInd
Line 2168: Setting the sub call type to IMSSH_CC_CALL_MT_ACCPETED_WITH_VOICEONLY
Line 2175: Call not indicated to AP
Line 2183: MODIFY_IND for Early Session!!!
Line 2187: MT Call VCRT, AP doesn't support VCRT, return !!!
Line 2194: MODIFY_IND for Changing Session from Early to Normal Session!!!
Line 2198: MT Call VCRT, AP doesn't support VCRT, return !!!
Line 2212: IMSSH_NS_CALL_MODIFY_IND  to CNS: callId %d
Line 2225: IsFocus  %d
Line 2229: [IMSSH_CC_CallModifyInd] CallType %d
Line 2280: [IMSSH_CC_CallModifyInd] Video Bearer not established, change Video Media Direction to Inactive
Line 2287: [IMSSH_CC_CallModifyInd] Nego MediaDir [%d]
Line 2294: [IMSSH_CC_CallModifyInd] Media Direction sent to AP: [0x%x]
Line 2332: IMSSH_CC_SendMTCallGuardTmrStatusInd: callId [%d] / status [%d] 
Line 2336: In case of NR, Indicating timer status to NS is not required.
Line 2355: Updating Stack Id from %d (%s)
Line 2357: Updated Stack id = %d (%s), VoMobile TRUE so sending indication to other stack to block MT CS calls
Line 2411: IMSSH_CC_SendGenInfoInd: CallId [%d] / FeatType [%d] / FeatLen [%d]
Line 2458: [IMSSH_CC_SendGenInfoInd] Feature Value :%d
Line 2464: [IMSSH_CC_SendGenInfoInd] GeoLoc Feature Value :
Line 2479:  [NEWAUDIOPATH] Dump Sending to AP : 
Line 2482: [IMSSH_CC_SendGenInfoInd] Feature type is unknown. Value not filled
Line 2488: [IMSSH_CC_SendGenInfoInd] Feature length is 0. Value not filled
Line 2496: [IMSSH_CC_SendGenInfoInd] Pointer or lenght is Invalid
Line 2543: IMSSH_NS_CALL_MODIFY_REJ to CNS: Callid %d
Line 2562: [IMSSH_CC_SendNsCallModifyRej] Media Direction sent to AP: [0x%x]
Line 2598: Already sent IMSSH_CC_CallModifyRej to CNS: callId %d
Line 2609: Already sent IMSSH_CC_CallModifyRej to CNS: callId %d
Line 2650: Invalid Call ID callId %d
Line 2657: pCallParam : Call Param DB NULL
Line 2663: Already sent IMSSH_CC_CallModifyCnf to CNS: callId %d
Line 2677: IMSSH_CC_CallModifyCnf to CNS: callId %d
Line 2710: [IMSSH_CC_CallModifyCnf] CallType: %d, Media Direction sent to AP: [0x%x]
Line 2752: IMSSH_CC_SendHoldRspMsg to CNS: Callid %d
Line 2815: IMSSH_CC_SendNsCallTransferRspMsg to CNS: Callid %d, result %d
Line 2869: IMSSH_CC_SendNsCallTransferCancelRspMsg to CNS: Callid %d
Line 2929: IMSSH_CC_SendNsCallTransferIndMsg to CNS: Callid %d
Line 2945: ECT Actor Type [%d], Status [%d]
Line 2951: Transfer Number
Line 2994: IMSSH_CC_SendUnHoldRspMsg to CNS: Callid %d
Line 3048: IMSSH_CC_SendCallTransferRspMsg Invalid CallID to CNS: callId %d
Line 3093: IMSSH_CC_SendCallTransferCancelRspMsg Invalid CallID to CNS: callId %d
Line 3139: IMSSH_CC_SendHoldRspMsg Invalid CallID to CNS: callId %d
Line 3146: Already sent IMSSH_CC_SendHoldRspMsg to CNS: callId %d
Line 3155: IMSSH_CC_SendHoldRspMsg to CCM: Callid %d
Line 3162: IMSSH_CC_SendHoldRspMsg to CC: Callid %d
Line 3199: IMSSH_CC_SendUnHoldRspMsg Invalid CallId to CNS: callId %d
Line 3206: Already sent IMSSH_CC_SendUnHoldRspMsg to CNS: callId %d
Line 3216: IMSSH_CC_SendUnHoldRspMsg to CCM: Callid %d
Line 3223: IMSSH_CC_SendHoldRspMsg to CC: Callid %d
Line 3261: [SRVCC]IMSSH_CC_SendSrvccCallSetupInd to 3G CC
Line 3303: [SRVCC]List[%d]:ImsCallID(%d)->CcTID(%d),CsCallType(%d),IsAckRcvd(%d)
Line 3304: [SRVCC]CsCallState(%d)[dialing(MO)=1,alerting(MT),connecting(MO),active]
Line 3315: [SRVCC] Number of calls [%d]
Line 3341: pTxMsg is NULL
Line 3660: In function IMSSH_CC_SendDroppedMTCallInd, Call Id [%d], Release Cause [%d], SIP ErrorCode [%d]
Line 3663: Invalid CallId : %d
Line 3670: [IMSSH CC] Call Param NULL
Line 3676: Setup Ind already Sent for Callid %d, Do not consider as Dropped Call
Line 3685: [Error] SC Session Ptr NULL !!!, Sending Default call Type
Line 3692: [Error] Dialogue DB NULL !!!,Sending Default call Type
Line 3703: [IMSSH CC] ALLOC FAILED !!!
Line 3732: Sending Call Type [%d], Call Param ReasonEnum [%d]
Line 3741: Sending Call Reason Text  : 
Line 3763: MT Invite Call Drop Timer not running, Send Default Value as 0
Line 3766: Sending Call Drop Time [%d]
Line 3771: [CC=>CC_SAP] EXT_SND_IMSSH_NS_DROPPED_MTCALL_IND
Line 3793: N/W does not support verstat feature.
Line 3801: ERROR : Updating Called Party Number Changes
Line 3833: IMSSH_CC_SendAcceptedRtpExtmapInd: Callid %d
Line 3841: [Error] Session Ptr NULL !!!
Line 3848: [Error] Dialogue DB NULL !!!
Line 3852: [Extmap] IMSSH_CC_SendAcceptedRtpExtmapInd: attributes count: [%d]
Line 3884: [Extmap] IMSSH_CC_SendAcceptedRtpExtmapInd: Id: [%d],  Uri Len: [%d]
Line 3885: [Extmap] IMSSH_CC_SendAcceptedRtpExtmapInd: Uri
Line 3889: [Extmap] IMSSH_CC_SendAcceptedRtpExtmapInd: Invalid index:[%d] / Id:[%d]
