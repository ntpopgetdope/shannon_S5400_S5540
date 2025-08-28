Line 102: pDialogueDb is NULL
Line 118: Dialog State : %s --> %s
Line 123: Invalid value for Status(%d)
Line 135: pDialogueDb is NULL
Line 151: Dialog State : %s --> %s
Line 156: Invalid value for Status(%d)
Line 170: [IMSSH_CC_StartVceForReestablishSrvccSession] Dialog State [%s]
Line 175: VCE Need not be started in this state!!
Line 188: IMSSH_MC_ConfigureVceReq Fail.
Line 228: Honor received real SDP [%d]
Line 243: [IMSSH_SC_IsRecvdSDPRealAnswer] Invalid Arguments!!!
Line 250: [IMSSH_SC_IsRecvdSDPRealAnswer] Invalid Request/Response!!!
Line 279: SDP Answer already received in reliable INV 1xx response, ignore the SDP Answer
Line 285: Partial SDP Answer received already, ignore the received SDP
Line 292: SDP Answer received in unreliable INV response, Wait for Real SDP Answer
Line 302: Partial SDP Answer received already, ignore the received SDP
Line 312: Real SDP Answer already received in reliable INV 1xx response, ignore the INV 200OK SDP Answer
Line 322: Received SDP is real Answer, since partial Answer is already received, ignore the SDP
Line 327: Reset local SDP & honor real SDP
Line 348: Not an Invite response
Line 353: SDP not received, ignore
Line 361: [IMSSH_SC_IsRecvdSDPRealAnswer] ignoreRecvdSDP [%d]
Line 364: [IMSSH_SC_IsRecvdSDPRealAnswer] isRecvdSDPRealAnswer[%d]
Line 386: SDP Flags: 0x%X
Line 402: Not expected in this state!!
Line 405: FSM: OAM State %s --> %s
Line 427: [IMSSH_SC_AddInitialMediaMuxFilter] Invalid Arguments !!!
Line 432: [IMSSH_SC_AddInitialMediaMuxFilter] Add Filter to block unexpected DL RTP, IPType: [%d]
Line 483: Ring tone State [%d]
Line 600: [IMSSH_SC_Check_Update_PreconditionStatus_Audio] No SDP Contents!!
Line 606: Audio Precondition Status: Local Precondition Enable[%d], Remote precondition Enable[%d]
Line 611: [IMSSH_SC_Check_Update_PreconditionStatus_Audio] Error Response, Do not validate precondition !!
Line 639: ----Process SDP For Existing Call while exiting---- Direction[%d] CallType[%d]
Line 805: IMSSH_SC_ConfigureLocalRemoteSDP_Video, Invalid arguments !!!
Line 819: Sdp Negotiation failed !!
Line 826: Sdp Negotiation failed !!
Line 836: Sdp Negotiation failed !!
Line 873: IMSSH_SC_ConfigureLocalRemoteSDP_Audio, Invalid Arguments !!!
Line 907: Sdp Negotiation failed !!
Line 917: Sdp Negotiation failed !!
Line 925: Remote Media Port 0 so send Local Video port as 0 and mLine!!
Line 932: Remote Media Port 0 so send Local Text port as 0 and mLine!!
Line 962: %s
Line 1054: IMSSH_SC_GetPlayingDialogId : pSessionDb is NULL!!!
Line 1066: IMSSH_SC_GetPlayingDialogId : Dialog Id [%d]!!
Line 1096: CallId [%d], SessionId [%d] DialogId [%d], EarlyMediaOnNewDialogue [%d]
Line 1104: ApRtpDialogId [%d]
Line 1109: Channel is deleted successfully
Line 1117: VCE channel configuration failed
Line 1123: DialogDb is Null / RemotePort is 0, Create Channel is not required
Line 1128: Same DialogId, No Need to Stop and Start
Line 1170: [NEWAUDIOPATH] AP RTP Stack is playing the Text Media,Delete the RTP Stack as call is downgraded
Line 1181: [NEWAUDIOPATH] AP RTP Stack is playing the Early Media, send modify to reconfigure
Line 1189: [NEWAUDIOPATH] AP RTP Stack is playing the Audio, Create Text as this is Upgrade sceanrio
Line 1201: Text Downgrade Case always do Stop and Start
Line 1207: IMSSH_MC_ConfigureVceReq Fail for media stop Send Bye
Line 1223: IMSSH_MC_ConfigureVceReq Fail for media stop Send Bye
Line 1238: SDP Flags: 0x%X
Line 1242: Change in Media direction. Trigger media change
Line 1243: DialogueId [%d] IsWaitingForVceStopResp [%d]
Line 1248: IMSSH_MC_ConfigureVceReq Fail.Sending BYE
Line 1254: Vce Stop Response is not received, Do not trigger Change
Line 1259: No change in IP address/Port/Media direction. Not reconfiguring audio engine
Line 1267: [RTT_CALL] [SRM] START TEXT media session
Line 1270: IMSSH_MC_ConfigureVceReq Fail.
Line 1280: [RTT_CALL] [SRM] STOP TEXT media session
Line 1285: IMSSH_MC_DeleteTextMediaSession Fail.
Line 1296: IMSSH_MC_ConfigureVceReq Fail.
Line 1306: IMSSH_MC_ConfigureVceReq Fail for media stop Send Bye
Line 1321: [RTT_CALL] [FAIL] IMSSH_MC_ConfigureVceReq [SEND BYE]
Line 1331: [RTT_CALL] [SRM] No Need to Start Text Engine After Media Stop!!
Line 1338: [RTT_CALL] SDP Flags: 0x%X
Line 1341: [RTT_CALL] Change in Media direction. Trigger media change
Line 1344: [RTT_CALL] [FAIL] IMSSH_MC_ConfigureVceReq [SEND BYE]
Line 1350: [RTT_CALL] No change in IP address/Port/Media direction. Not reconfiguring audio engine
Line 1357: [RTT_CALL] Create VCE channel for Text during the Audio voice engine Creation
Line 1417: IMSSH_MC_ConfigureVceReq Fail for media stop Send Bye
Line 1424: Recevied audio Media Port: 0x%X
Line 1432: [Special] Audio Port Recevied with Value - 0
Line 1476: PlayingDialogueId [%d] DialogueId [%d] IsIpPortChanged [%d]
Line 1489: IMSSH_MC_ConfigureVceReq Fail for media stop Send Bye
Line 1502: [Special] Audio Port Recevied with Value - 0
Line 1510: [NEWAUDIOPATH] AP RTP Stack is playing the Early Media, send modify to reconfigure
Line 1530: [NEWAUDIOPATH] CP RTP is stopped, waiting for stop response to start AP RTP. Skip configuring CP RTP.
Line 1536: [NEWAUDIOPATH] AP RTP is stopped, waiting for media state ind to revoke CP RTP. Skip configuring CP RTP.
Line 1540: Media is not playing start it
Line 1542: Recevied audio Media Port: 0x%X
Line 1547: IMSSH_MC_ConfigureVceReq Fail.
Line 1555: SDP Flags: 0x%X
Line 1560: [NEWAUDIOPATH] AP RTP Stack is playing the Media, send modify to reconfigure
Line 1565: [NEWAUDIOPATH] AP RTP is stopped, waiting for media state ind
Line 1569: Change in Media direction. Trigger media change
Line 1575: IMSSH_MC_ConfigureVceReq Fail.Sending BYE
Line 1583: No change in Media direction. Not reconfiguring audio engine
Line 1620: %s
Line 1624: DB Value Invalid
Line 1635: Process SDP return => Play Early Media, Direction => %d
Line 1646: New Direction => %d
Line 1649: IsEarlyMediaPlaying => %d
Line 1666: [NEWAUDIOPATH] AP RTP Stack is playing the Early Media, send modify. AP will take care of doing stop and start
Line 1700: Waiting for Channel Id Stop RSP [%d]
Line 1711: Waiting for media stop response to start VCE
Line 1715: Early media is not playing start it
Line 1723: IMSSH_MC_ConfigureVceReq Fail.
Line 1731: Early media is playing need to do stop and start
Line 1754: Stop LRBT, Ring tone State is FALSE
Line 1762: Early media is playing for Dialog Id = %d.Stop it
Line 1765: IMSSH_MC_ConfigureVceReq Fail for media stop
Line 1787: [NEWAUDIOPATH] AP RTP Stack is playing the Early Media, send modify. AP will take care of doing stop and start
Line 1807: Invalid dialog Id
Line 1814: CurrRecvdEarlyMedia=%d
Line 1827: Early media is playing need to do stop
Line 1831: Early media is playing for Dialog Id = %d.Stop it
Line 1834: IMSSH_MC_ConfigureVceReq Fail for media stop
Line 1862: [NEWAUDIOPATH] AP RTP Stack is playing the Early Media,Stop and play LRBT
Line 1874: Invalid dialog Id
Line 1907: %s
Line 1922: Early media is playing, Reconfigure Audio Engine
Line 1932: Reconfig Failure return error
Line 1937: Invalid Code is returned, media restart/media change has not triggered
Line 1938: Trigger media change due to connect event
Line 1941: IMSSH_MC_ConfigureVceReq Fail.Sending BYE
Line 1948: Invalid dialog Id
Line 1959: [NEWAUDIOPATH] AP RTP Stack is playing the Early Media,Stop and play LRBT
Line 1992: Waiting for Channel Id Stop RSP [%d]
Line 1999: Waiting for media stop response to start VCE
Line 2004: [NEWAUDIOPATH] AP RTP Stack is playing the Early Media,Stop and play LRBT
Line 2023: Starting actual media
Line 2027: IMSSH_MC_ConfigureVceReq Fail.
Line 2057: %s
Line 2072: IMSSH_MC_ConfigureVceReq Fail for media stop Send Bye
Line 2085: [Special] Audio Port Recevied with Value - 0
Line 2095: [NEWAUDIOPATH] AP RTP Stack is playing, need to reconfigure with new SDP
Line 2104: IMSSH_MC_ConfigureVceReq Fail.Sending BYE
Line 2122: Waiting for Channel Id Stop RSP [%d], to start VCE
Line 2129: Starting actual media
Line 2133: IMSSH_MC_ConfigureVceReq Fail.
Line 2165: %s
Line 2171: Process SDP return => Play Early Media, Direction => %d
Line 2173: CurrRecvdEarlyMedia[%d], isFirstRtpIndAlreadyRecvd[%d]
Line 2186: Invalid Code is returned, media restart/media change has not triggered
Line 2187: Trigger media change due to Alerting event
Line 2190: IMSSH_MC_ConfigureVceReq Fail.Sending BYE
Line 2210: Recevied audio Media Port: %d
Line 2235: Waiting for Channel Id Stop RSP [%d]
Line 2246: Waiting for media stop response to start VCE
Line 2250: Early media is not playing start it
Line 2254: IMSSH_MC_ConfigureVceReq Fail.
Line 2271: Early media is playing need to do stop and play local ringtone
Line 2286: [NEWAUDIOPATH] AP RTP Stack is playing the Early Media,Stop and play LRBT
Line 2300: IMSSH_MC_ConfigureVceReq Fail for media stop
Line 2314: Invalid dialog Id
Line 2365: Updated EarlyMedia For Session[%d]
Line 2403: IMSSH_SC_HandleMediaRsp Fail for Media Change, Return
Line 2416: Wait for Text Channel Stop
Line 2420: [IMSSH_SC_HandleMediaRsp] Media direction[%d]
Line 2431: Media Start after Medisa stop
Line 2434: [IMSSH_SC_HandleMediaRsp] Fail.Sending BYE
Line 2440: Media Start for E-Media
Line 2518: Voice Engine is started but not yet stopped.Stopping
Line 2521: IMSSH_MC_ConfigureVceReq Fail for media stop
Line 2581: Already Media Stop is completed, directly Delete can be called, Not required to send the Media Stop again.
Line 2585: IMSSH_MC_ConfigureVceReq stop request not sent
Line 2595: IsChanStopped[%d],IsWaitingForVceStopResp[%d]
Line 2622: 100rel is present in Require
Line 2626: 100rel is not present in Require
Line 2660: %s
Line 2676:  Audio media port 0 in TMO call case.
Line 2742: [VZW 180 case] Early media is playing need to do stop and play local ringtone; EarlyMediaPlayingDialogId=%d,DialogueId
Line 2749: IMSSH_MC_ConfigureVceReq Fail for media stop
Line 2762: [VZW 180 case] Early media is playing but not able to find dialog related to early media
Line 2767: [VZW 180 case]Waiting For VCG reconfig for Early media; Reset early media params & start local ringtone
Line 2821: %s
Line 2856: There is no SDP in 180
Line 2903: [IMSSH_SC_HandleAudioMoInitTerminateSession] Last Dialog Id [%d], ConfirmedDialgId [%d]
Line 2920: %s
Line 2954: Memory Allocation Failed
Line 2972: Modify Local SDP FAILED
Line 2982: [ERR] 
Line 2989: Waiting for media stop response to start VCE
Line 2993: Early media is not playing start it
Line 3000: IMSSH_MC_ConfigureVceReq Fail.
Line 3043: %s
Line 3058: FSM: OAM State set to %s
Line 3096: Preconditions not met!! call Connected, check dedi present or not
Line 3101: Preconditions not met!! cannot proceed the call
Line 3139: %s
Line 3183: %s
Line 3187:  NULL pointer 
Line 3202: Modify Local SDP FAILED
Line 3238: Upgrade Request, Audio MediaPort[%d] and Video MediaPort[%d]
Line 3242: IGNORE => UPGRADE REQ received in NON-INVITE METHOD
Line 3258: Upgrade Request, Audio MediaPort[%d] and Video MediaPort[%d]
Line 3263: Remote Video Precond[%d], Local Audio Precond[%d]
Line 3306: ----Process SDP For Existing Call while exiting---- Precondition enabled, Direction[%d], CallType[%d]
Line 3332: %s
Line 3377:  Audio media port 0 in TMO call case.
Line 3385: Modify Local SDP FAILED
Line 3415: There is no SDP in 180
Line 3446: %s
Line 3484: IMSSH_SC_HandleAudioMtInitRemoteUpgradeReject SdpCode = %s
Line 3519: %s
Line 3523:  NULL pointer 
Line 3542: Upgrade Request, Local Audio MediaPort[%d] and Video MediaPort[%d]
Line 3546: IGNORE => UPGRADE REQ received in NON-INVITE METHOD
Line 3562: Upgrade Request, Local Audio MediaPort[%d] and Video MediaPort[%d]
Line 3566: Remote Video Precond[%d], Local Audio Precond[%d]
Line 3615: ----Process SDP For Existing Call while exiting---- Precondition enabled, Direction[%d] CallType[%d]
Line 3641: %s
Line 3664: %s
Line 3693: Early Media Playing at AP RTP, For ApRtpDialogId [%d] 199 Received for Did [%d]
Line 3718: Last Dialog Id [%d], ConfirmedDialgId [%d]
Line 3735: %s
Line 3770: %s
Line 3774:  NULL pointer 
Line 3794: Modify Local SDP FAILED
Line 3820: Upgrade Request, Local Audio MediaPort[%d] and Video MediaPort[%d]
Line 3824: IGNORE => UPGRADE REQ received in NON-INVITE METHOD
Line 3840: Upgrade Request, Local Audio MediaPort[%d] and Video MediaPort[%d]
Line 3844: Remote Video Precond[%d], Local Audio Precond[%d]
Line 3874: RtpmapVideoMediaAttrCount: Remote[%d] Local[%d]
Line 3892: ----Process SDP For Existing Call while exiting---- Precondition enabled, Direction[%d] CallType[%d]
Line 3920: %s
Line 3929: %s
Line 3953: %s
Line 3959: %s
Line 3965: %s
Line 3971: %s
Line 3977: %s
Line 3983: %s
Line 3989: %s
Line 3995: %s
Line 4001: %s
Line 4017: %s
Line 4021: NULL Session Db received
Line 4028: NULL Dialog Info received
Line 4072: Video Media direction is changed to recvonly, Indicate To User - MT side accepted as Hide me
Line 4103: %s
Line 4118: Modify Local SDP FAILED
Line 4143: There is no SDP in 180
Line 4164: %s
Line 4170: %s
Line 4180: %s
Line 4187: %s
Line 4199: %s
Line 4219: %s
Line 4255: %s
Line 4259: [IMSSH_SC_HandleAudioMtNullProcessOffer] Invalid ContextId Found..
Line 4287: [IMSSH SC] SUPPORTED PRECOND => FALSE in SDP OFFER
Line 4312: OwnerInfo Local IP Type [%d] <=> Remote IP Type [%d] mismatch
Line 4315: ConnectionInfo Local IP Type [%d] <=> Remote IP Type [%d] mismatch
Line 4320: SdpSessionInfo.ConnectionInfo Local IP Type [%d] <=> RemoteSDP.AudioProfile.ConnectionInfo.Remote IP Type [%d] mismatch
Line 4328: Connection info received at media level not session level; Copying to session level connection info
Line 4342: IP Type [%d] not supported
Line 4365: Media Port in SDP is 0
Line 4371: Media Port in not even
Line 4383: Audio Precondition are enabled
Line 4395: Skip Checking precondition when Initial offer received from network
Line 4417: Waiting for precondition locally
Line 4436: ----Process SDP For New Call while exiting---- Direction[%d] CallType[%d]
Line 4445: %s
Line 4468: %s
Line 4472: Starting actual media
Line 4507: %s
Line 4513: %s
Line 4541: %s
Line 4590: %s
Line 4605: %s
Line 4610: Memory Allocation Failed
Line 4657: %s
Line 4686: %s
Line 4713: %s
Line 4740: %s
Line 4744: Failed to fetch call param DB / dialog DB
Line 4785: %s
Line 4804: %s
Line 4809: Memory Allocation Failed
Line 4851: %s
Line 4856: Memory Allocation Failed
Line 4904: %s
Line 4947: %s
Line 4997: %s
Line 5041: %s
Line 5095: %s
Line 5099:  NULL pointer 
Line 5119: Upgrade Request, Local Audio MediaPort[%d] and Video MediaPort[%d]
Line 5123: IGNORE => UPGRADE REQ received in NON-INVITE METHOD
Line 5141: Upgrade Request, Local Audio MediaPort[%d] and Video MediaPort[%d]
Line 5145: Remote Video Precond[%d], Local Audio Precond[%d]
Line 5167: Remote Video Precond[%d], Local VideoProfile Precond[%d]
Line 5182: Precondition during Upgrade:[%d]
Line 5224: ----Process SDP For Existing Call while exiting---- Precondition enabled, Direction[%d] CallType[%d]
Line 5236: LocalSDP Video MediaAttr Count is Zero, Video Codec Negotiation Failed
Line 5264: %s
Line 5268:  NULL pointer 
Line 5289: Upgrade Request, Audio MediaPort[%d] and Video MediaPort[%d]
Line 5293: IGNORE => UPGRADE REQ received in NON-INVITE METHOD
Line 5311: Upgrade Request, Local Audio MediaPort[%d] and Video MediaPort[%d]
Line 5315: Remote Video Precond[%d], Local Audio Precond[%d]
Line 5336: Remote Video Precond[%d], Local VideoProfile Precond[%d]
Line 5366: ----Process SDP For Existing Call while exiting---- Precondition enabled, Direction[%d] CallType[%d]
Line 5399: %s
Line 5445: %s
Line 5617: %s
Line 5663: %s
Line 5700: %s
Line 5717: %s
Line 5734: %s
Line 5751: %s
Line 5783: %s
Line 5800:  Audio media port 0 in TMO call case.
Line 5858: LocalSDP Video MediaAttr Count is Zero, Video Codec Negotiation Failed
Line 5896: %s
Line 5925: There is no SDP in 180
Line 5932: VZW: Not downgrading as 183 received for early media
Line 5989: %s
Line 6016: %s
Line 6028: Memory Allocation Failed
Line 6046: Modify Local SDP FAILED
Line 6054: Modify Local Video SDP FAILED
Line 6059: [ERR] 
Line 6066: Waiting for media stop response to start VCE
Line 6070: Early media is not playing start it
Line 6077: IMSSH_MC_ConfigureVceReq Fail.
Line 6245: Video Media direction is changed to recvonly, Indicate To User - MT side accepted as Hide me
Line 6281: %s
Line 6302: FSM: OAM State set to %s
Line 6341: Preconditions not met!! call Connected, check dedi present or not
Line 6347: Preconditions not met!! cannot proceed the call
Line 6379: Remote Video port is 0. Downgrading the call
Line 6411: %s
Line 6439: Preconditions not met!! cannot proceed the call
Line 6488: %s
Line 6494:  NULL pointer 
Line 6510: Upgrade Request, Local Audio MediaPort[%d] and Video MediaPort[%d]
Line 6514: Remote Video Precond[%d], Local Audio Precond[%d]
Line 6521: Preconditions not met!! cannot proceed the call
Line 6577: %s
Line 6627:  Audio media port 0 in TMO call case.
Line 6665: There is no SDP in Recvd Msg
Line 6688: LocalSDP Video MediaAttr Count is Zero, Video Codec Negotiation Failed
Line 6712: %s
Line 6773: VZW: Not downgrading as 183 received for early media
Line 6802: There is no SDP in Rcvd Msg
Line 6838: %s
Line 6864: %s
Line 6887: There is no SDP
Line 6947: %s
Line 6953: %s
Line 6959: %s
Line 6965: %s
Line 6972: %s
Line 6984: %s
Line 7004: %s
Line 7041: %s
Line 7045: [IMSSH_SC_HandleVideoMtNullProcessOffer] Invalid ContextId Found..
Line 7073: [IMSSH SC] SUPPORTED PRECOND => FALSE in SDP OFFER
Line 7111: VIDEO MEDIA PORT => 0 in REMOTE VIDEO PROFILE, CHANGE TO AUDIO CALL
Line 7119: VIDEO MEDIA PORT => 0 in DEFAULT VIDEO PROFILE, ACCEPT as AUDIO ONLY
Line 7134: Audio MediaPort[%d], Video MediaPort[%d]
Line 7152: OwnerInfo Local IP Type [%d] <=> Remote IP Type [%d] mismatch
Line 7155: ConnectionInfo Local IP Type [%d] <=> Remote IP Type [%d] mismatch
Line 7160: SdpSessionInfo.ConnectionInfo Local IP Type [%d] <=> RemoteSDP.AudioProfile.ConnectionInfo.Remote IP Type [%d] mismatch
Line 7168: Connection info received at media level not session level; Copying to session level connection info
Line 7182: IP Type [%d] not supported
Line 7206: Audio Media Port in SDP is 0
Line 7212: Audio Media Port in not even
Line 7231: Video Media Port in not even
Line 7242: Audio and Vedio Precondition are enabled
Line 7256: Skip Checking precondition when Initial offer received from network
Line 7273: ----Process SDP For New Call while exiting-------
Line 7275: Is Local SDP Modified[%d], Direction[%d], CallType[%d]
Line 7281: Waiting for precondition locally
Line 7301: LocalSDP Video MediaAttr Count is Zero, Video Codec Negotiation Failed
Line 7313: %s
Line 7336: %s
Line 7340: Starting actual media
Line 7375: %s
Line 7381: %s
Line 7407: %s
Line 7479: %s
Line 7561: %s
Line 7589: %s
Line 7662: %s
Line 7718: %s
Line 7736: --MT VIDEO HOLD REQUEST--
Line 7739: DB Local SDP Video Direction[%d], Global Video port[%d], DB SDP Video port[%d]
Line 7778: %s
Line 7796: --MT VIDEO UNHOLD REQUEST--
Line 7799: DB Local SDP Video Direction[%d], Global Video port[%d], DB SDP Video port[%d]
Line 7841: %s
Line 7855: %s
Line 7876: There is no SDP
Line 7915: %s
Line 7947: Precondition is enabled
Line 7971: %s
Line 8011: %s
Line 8041: Precondition is enabled
Line 8057: %s
Line 8076: %s
Line 8085: Early media is playing need to do stop and play local ringtone
Line 8091: IMSSH_MC_ConfigureVceReq Fail for media stop
Line 8103: [NEWAUDIOPATH] AP RTP Stack is playing the Early Media,Stop and play LRBT
Line 8129: %s
Line 8148: [RTT_CALL] ___START___ IMSSH_SC_Check_Update_PreconditionStatus_Text
Line 8152: [RTT_CALL] [RETURN] No SDP Contents
Line 8156: [RTT_CALL] [QOS] [L_SDP] PrecondEnable [%d], [R_SDP] PrecondEnable [%d]
Line 8161: [RTT_CALL] [QOS] IsQoSPrecondMet :%d
Line 8195: [RTT_CALL] Direction[%d], CallType[%d]
Line 8196: [RTT_CALL] ____END____ IMSSH_SC_Check_Update_PreconditionStatus_Text
Line 8201: [RTT_CALL] ____END____ IMSSH_SC_Check_Update_PreconditionStatus_Text
Line 8230: %s
Line 8236: Precondition during Upgrade:[%d]
Line 8323: %s
Line 8359: [RTT_CALL] %s
Line 8374: [RTT_CALL] [QOS] Precondition not yet met
Line 8384: [RTT_CALL] [QOS] [DEFAULT] PrecondEnable : %d
Line 8391: [RTT_CALL] [SUCCESS] IMSSH_SC_CopyDefaultMedia Text
Line 8401: [RTT_CALL] [SUCCESS] IMSSH_SC_CopyDefaultMedia Audio
Line 8411: [RTT_CALL] [SUCCESS] IMSSH_SC_CopyDefaultMedia Video
Line 8436: %s
Line 8440: [RTT_CALL] NO Remote SDP Received Return SUCCESS
Line 8456: [RTT_CALL] [ERROR] IMSSH_SC_ModifyLocalTextSdpMedia
Line 8459: [RTT_CALL] [SUCCESS] IMSSH_SC_ModifyLocalTextSdpMedia 
Line 8467: [RTT_CALL] [ERROR] IMSSH_SC_ModifyLocalAudioSdpMedia 
Line 8470: [RTT_CALL] [SUCCESS] IMSSH_SC_ModifyLocalAudioSdpMedia 
Line 8478: [RTT_CALL] [ERROR] IMSSH_SC_ModifyLocalVideoSdpMedia
Line 8481: [RTT_CALL] [SUCCESS] IMSSH_SC_ModifyLocalVideoSdpMedia
Line 8500: %s
Line 8504:  NULL pointer 
Line 8508: [RTT_CALL] AUDIO_VIDEO => TEXT_AUDIO_VIDEO
Line 8560: %s
Line 8564:  NULL pointer 
Line 8570: Text Upgrade Request
Line 8596: Preconditions not met!! cannot proceed the call
Line 8662: %s
Line 8666:  NULL pointer 
Line 8670: [RTT_CALL] AUDIO => TEXT_AUDIO
Line 8730: %s
Line 8734:  NULL pointer 
Line 8738: [RTT_CALL] AUDIO => TEXT_AUDIO_VIDEO
Line 8786: %s
Line 8790:  NULL pointer 
Line 8794: [RTT_CALL] AUDIO => TEXT_AUDIO
Line 8843: %s
Line 8847:  NULL pointer 
Line 8851: [RTT_CALL] AUDIO => TEXT_AUDIO_VIDEO
Line 8893: %s
Line 8895: [RTT_CALL] AUDIO_VIDEO => TEXT_AUDIO_VIDEO
Line 679: [IMSSH_SC_Check_Update_PreconditionStatus_Video] No SDP Contents!!
Line 685: Video Precondition Status: Local Precondition Enable[%d], Remote precondition Enable[%d]
Line 690: [IMSSH_SC_Check_Update_PreconditionStatus_Video] Error Response, Do not validate precondition !!
Line 745: ----Process SDP For Existing Call while exiting---- Direction[%d] CallType[%d]
