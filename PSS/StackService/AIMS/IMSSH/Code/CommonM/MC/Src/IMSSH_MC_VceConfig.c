Line 161: [IMSSH MC] IMSSH_MC_InitialiseVceCapabilites : Enter
Line 179: [IMSSH MC] Do not Clear the MCDB as SessionId[%d] doesnot belongs to the recevied StackId[%d]
Line 219: [IMSSH MC] Channel Db Not found for Channel ID[%d]
Line 225: [IMSSH MC] SessionId[%d] DialogueID[%d] Direction[%d] ChannelValueMaskFromAP[%0x] received in IMSSH_MC_VceStartReq
Line 233: [IMSSH MC] ALLOC FAILED !!!
Line 277: IMSSH_MC_VceStartReq : presetTxSequenceNumber[%0x], presetTxTimestamp[%0x], presetTxSsrc[%0x], presetTxMask[%0x]
Line 294: [IMSSH=>SRM] Sending IMS_SRM_START_SVE_REQ for SRM ChannelId=%d
Line 316: [IMSSH MC]IMSSH_MC_VceChangeStatusReq : Enter
Line 320: [IMSSH MC] Channel Db Not found for Channel ID[%d]
Line 328: [IMSSH MC] ALLOC FAILED !!!
Line 351: [IMSSH=>SRM] Sending IMS_SRM_CHANGE_SVE_REQ for SRM Channel Id=%d
Line 370: IMSSH_MC_VceStopReq : Enter
Line 376: [IMSSH MC] ALLOC FAILED !!!
Line 401: [SRVCC]IMS_SRM_STOP_SVE_REQ for SRVCC
Line 404: [IMSSH=>SRM] Sending IMS_SRM_STOP_SVE_REQ for SRM Channel Id=%d
Line 712: [SRM] [AUDIO] [ERROR] IMSSH_MC_VceRevokeChannel ReturnCode:%d
Line 724: [IMSSH MC] Channel Db Not found for Audio Channel ID[%d]
Line 734: Audio: ChannelId_sh[%d], RcvPort[%d], SendPort[%d], RtcpRcvPort[%d], RtcpSendPort[%d]
Line 738: [SRM] Port is Invalid, Return Error
Line 745: [SRM] [AUDIO] SRM_InterfaceSetReceivePort     :%d
Line 749: [SRM] [AUDIO] [ERROR] SRM_InterfaceSetReceivePort ReturnCode = %d
Line 756: [SRM] [AUDIO] SRM_InterfaceSetSendPort        :%d
Line 760: [SRM] [AUDIO] [ERROR] SRM_InterfaceSetSendPort ReturnCode = %d
Line 767: [SRM] [AUDIO] SRM_InterfaceSetRtcpReceivePort :%d
Line 771: [SRM] [AUDIO] [ERROR] SRM_InterfaceSetRtcpReceivePort ReturnCode = %d
Line 778: [SRM] [AUDIO] SRM_InterfaceSetRtcpSendPort    :%d
Line 782: [SRM] [AUDIO] [ERROR] SRM_InterfaceSetRtcpSendPort ReturnCode = %d
Line 791: [SRM] SRM_InterfaceSetSendIp: IPType[%d]
Line 799: [SRM] LocalIp :%d.%d.%d.%d RemoteIp :%d.%d.%d.%d
Line 808: [SRM] LocalIp  :%02X%02X:%02X%02X
Line 815: [SRM] RemoteIp :%02X%02X:%02X%02X
Line 821: [SRM] [AUDIO] [ERROR] SRM_InterfaceSetSendIp ReturnCode=%d
Line 833: [SRM] [TEXT] [ERROR] IMSSH_MC_VceRevokeChannel ReturnCode:%d
Line 845: [IMSSH MC] Channel Db Not found for Text Channel ID[%d]
Line 855: [RTT_CALL] Text: TextChannelID_sh [%d] RcvPort[%d], SendPort[%d], RtcpRcvPort[%d], RtcpSendPort[%d]
Line 860: [RTT_CALL] [ERROR] Text: RcvPort[%d], SendPort[%d], RtcpRcvPort[%d], RtcpSendPort[%d]
Line 864: [RTT_CALL] [SRM] TextEngineChannelId :%d 
Line 869: [RTT_CALL] [SRM] SRM_InterfaceSetReceivePort	 :%d
Line 873: [RTT_CALL] [ERROR] SRM_InterfaceSetReceivePort ReturnCode = %d
Line 880: [RTT_CALL] [SRM] SRM_InterfaceSetSendPort		 :%d
Line 884: [RTT_CALL] [ERROR] SRM_InterfaceSetSendPort  ReturnCode = %d
Line 892: [RTT_CALL] [SRM] SRM_InterfaceSetRtcpReceivePort :%d
Line 896: [RTT_CALL] [ERROR] SRM_InterfaceSetRtcpReceivePort ReturnCode = %d
Line 904: [RTT_CALL] [SRM] SRM_InterfaceSetRtcpSendPort	 :%d
Line 908: [RTT_CALL] [ERROR] SRM_InterfaceSetRtcpSendPort ReturnCode = %d
Line 914: [RTT_CALL] [SRM] SRM_InterfaceSetSendIp: IPType[%d]
Line 922: [RTT_CALL] [SRM] LocalIp :%d.%d.%d.%d RemoteIp :%d.%d.%d.%d
Line 931: [RTT_CALL] [SRM] LocalIp  :%02X%02X:%02X%02X
Line 938: [RTT_CALL] [SRM] RemoteIp :%02X%02X:%02X%02X
Line 944: [RTT_CALL] [ERROR] SRM_InterfaceSetSendIp ReturnCode = %d
Line 988: [SRM] SRM_InterfaceDeleteChannel ChannelId= %d
Line 992:  [SRM] SRM_InterfaceDeleteChannel success
Line 997: [ERROR] SRM_InterfaceDeleteChannel errorCode[%d], DeleteChannelDb
Line 1038: [IMSSH MC] Channel Db Not found for Audio Channel ID[%d]
Line 1043: [SRM] [AUDIO] SRM_InterfaceDeleteChannel AudioEngine ChannelId= %d
Line 1048: [SRM] [AUDIO]  Deleted AudioEngineChannelId :%d
Line 1053: [SRM] [AUDIO] [ERROR] IMSSH_MC_DeleteChannelDb, Delete channel failed, Error Code=%d
Line 1058: -      Reset the VoLTE parameters, All Packets except SIP will be forwarded to AP Now
Line 1070: [IMSSH MC] Channel Db Not found for Text Channel ID[%d]
Line 1075: [RTT_CALL] [SRM] SRM_InterfaceDeleteChannel TextEngineChannelId= %d
Line 1080: [RTT_CALL] [SRM] SRM_InterfaceDeleteChannel success
Line 1085: [RTT_CALL] [ERROR] IMSSH_MC_DeleteChannelDb, SRM_InterfaceDeleteChannel errorCode=%d
Line 1094: [ERROR] channelDeleted:%d
Line 1137: [SRM] [AUDIO] [ERROR] IMSSH_MC_GetFreeChannelId 
Line 1140: AudioChannelId_sh : [%d]
Line 1152: [SRM] [AUDIO] [ERROR] SRM_InterfaceCreateChannel ReturnCode = %d
Line 1165: [SRM] [AUDIO] [ERROR] IMSSH_SC_GetMediaParamContent ReturnCode : %d
Line 1176: Audio: ChannelId_sh[%d], RcvPort[%d], SendPort[%d], RtcpRcvPort[%d], RtcpSendPort[%d]
Line 1181: [SRM] [AUDIO] [ERROR] Port is Invalid, Return Error
Line 1188: [SRM] [AUDIO] SRM_InterfaceSetReceivePort     :%d
Line 1193: [SRM] [AUDIO] [ERROR] SRM_InterfaceSetReceivePort ReturnCode = %d
Line 1200: [SRM] [AUDIO] SRM_InterfaceSetSendPort        :%d
Line 1205: [SRM] [AUDIO] [ERROR] SRM_InterfaceSetSendPort ReturnCode = %d
Line 1212: [SRM] [AUDIO] SRM_InterfaceSetRtcpReceivePort :%d
Line 1217: [SRM] [AUDIO] [ERROR] SRM_InterfaceSetRtcpReceivePort ReturnCode = %d
Line 1224: [SRM] [AUDIO] SRM_InterfaceSetRtcpSendPort    :%d
Line 1229: [SRM] [AUDIO] [ERROR] SRM_InterfaceSetRtcpSendPort ReturnCode = %d
Line 1238: [SRM] SRM_InterfaceSetSendIp: IPType[%d]
Line 1246: [SRM] LocalIp :%d.%d.%d.%d RemoteIp :%d.%d.%d.%d
Line 1255: [SRM] LocalIp  :%02X%02X:%02X%02X
Line 1262: [SRM] RemoteIp :%02X%02X:%02X%02X
Line 1268: [SRM] [AUDIO] [ERROR] SRM_InterfaceSetSendIp ReturnCode = %d
Line 1315: Operation Mode= %s 
Line 1323: IMSSH_MC_VceCreateChannel : FAILED
Line 1333: IMSSH_MC_VceRevokeChannel : FAILED
Line 1343: IMSSH_MC_VceDeleteChannel : FAILED
Line 1351: [SRM] Invalid Operation: [%d]
Line 1419: IMSSH_MC_SendAudioCodecInfo
Line 1422: [IMSSH MC] audioQuality(%d)currentBitrate(%d)minBitrate(%d)maxBitrate(%d)
Line 1423: [IMSSH MC] currentBandwidth(%d)bwSendRange(0x%x)limitVoiceBand(%d)
Line 1431: [IMSSH MC] ALLOC FAILED !!!
Line 1489: IMSSH_NS_CODEC_INFO_NTF (%d) to NS
Line 1491: [MC=>CC_SAP] IMSSH_NS_CODEC_INFO_NTF
Line 1523: [IMSSH MC] Channel Db Not found for Channel ID[%d]
Line 1531: MemAlloc Failed inside IMSSH_MC_ConfigVceCodec
Line 1535: -      Codec type received from SDP = %d
Line 1541: -      Codec Name is =
Line 1546: -      Codec Name is =
Line 1551: -      Invalid codec type received.
Line 1556: -      Codec Info: Type = %d, CodecTypeRemote = %d, Freq = %d, BitRate = %d, Ptime = %d
Line 1560: -      Codec Info: EnableDTX = %d, MaxRxPtime = %d, NChannel = %d, FixedRate = %d
Line 1581: MMTEL Not Supported by Remote, Set limitVoiceBand to TRUE
Line 1672: -      SRM_InterfaceSetSendCodecInfo Returned ERROR %d
Line 1681: -      SRM_InterfaceSetPacketizationMode Returned ERROR %d
Line 1738: [IMSSH MC] Channel Db Not found for Channel ID[%d]
Line 1746: IMSSH_MC_ConfigVceDTMF received for Session ID[%d] Dialogue Id[%d], Mode[%d] DtmfPayload[%d] DtmfPayloadRemote[%d]
Line 1755: -      Setting DTMF Mode failed, Error Code = %d
Line 1765: -      IMSSH_MC_ConfigVceDTMF: SetDTMFPayloadType failed ; %d
Line 1772: -      IMSSH_MC_ConfigVceDTMF: SRM_InterfaceSetDtmfClockrate failed ; %d
Line 1811: [IMSSH MC] Channel Db Not found for Channel ID[%d]
Line 1816: IMSSH_MC_ConfigVceOptions for Sid (%d) and Dialgue ID(%d)
Line 1825: - RTCP On Call[%d], RTP Pinhole[%d], RTP Timeout[%d], RTCP RS[%d], RTCP RR[%d], RTCP Timeout[%d], RtcpXRAttrCount[%d]
Line 1830: [IMSSH MC] ALLOC FAILED !!!
Line 1869: - [Modified] pSrmOptionSetReq->rtcpOnCall = %d
Line 1941: - m_Value [%d] not supported
Line 1945: - [RTCP-XR] xrEnable [0x%x]
Line 1948: - [ECN] isEcnValid [%d]
Line 1959: - [ECN] Values to AP, InitMethod[0x%x], Local-Ect[%d], Remote-Ect[%d], Mode[%d]
Line 2027: [IMSSH MC] Channel Db Not found for Channel ID[%d]
Line 2031: IMSSH_MC_ConfigVceOptionsForSrtp for Sid (%d) and Dialgue ID(%d)
Line 2039: [IMSSH MC] SRTP Profile Type Mapping FAILED !!!
Line 2046: [IMSSH MC] ALLOC FAILED !!!
Line 2075: [IMSSH MC][SRTP] ----------- Local Crtpyo => SRM -----------
Line 2078: [IMSSH MC][SRTP] srtpProfile[%d], srtpDirection[%d], srtpKdr[%d], Local KeyParamsCount[%d]
Line 2088: [IMSSH MC][SRTP] - srtpKey = 
Line 2089: [IMSSH MC][SRTP] - Mki = 
Line 2090: [IMSSH MC][SRTP] - srtpMkiLength = [%d]
Line 2100: [IMSSH MC][SRTP] ----------- Remote Crtpyo => SRM -----------
Line 2103: [IMSSH MC][SRTP] srtpProfile[%d], srtpDirection[%d], srtpKdr[%d], Remote KeyParamsCount[%d]
Line 2113: [IMSSH MC][SRTP] - srtpKey = 
Line 2114: [IMSSH MC][SRTP] - Mki = 
Line 2115: [IMSSH MC][SRTP] - srtpMkiLength = [%d]
Line 2159: No Active channel Present for Sid (%d) Dialogue ID(%d)
Line 2183: Error in receiving Codec Info from SC
Line 2191: [RTT_CALL] VCE codec configuration failed
Line 2201: [IMSSH MC] ALLOC FAILED !!!
Line 2254: -      RTCP Timeout[%d], RTP Timeout[%d], pSrmOptionSetReq->rtcpOnCall[%d]
Line 2269: MO HOLD Case: Configure Media Engine with NO SEND NO RECV Media Direction
Line 2277: Received invalid string
Line 2321: No Active channel Present for Sid (%d) Dialogue ID(%d)
Line 2333: Audio channel Present for Sid (%d) Dialogue ID(%d),IsChangeCodec[%d]
Line 2337: Change Codec scenario for channelId (%d)
Line 2355: Error in receiving Codec Info from SC
Line 2363: VCE codec configuration failed
Line 2371: VCE DTMF configuration failed
Line 2379: VCE Options configuration failed
Line 2390: [IMSSH MC] ALLOC FAILED !!!
Line 2442: -      RTCP Timeout[%d], RTP Timeout[%d], pSrmOptionSetReq->rtcpOnCall[%d]
Line 2457: MO HOLD Case: Configure Media Engine with NO SEND NO RECV Media Direction
Line 2465: Received invalid string
Line 2514: VCE channel configuration failed
Line 2538: No Valid audio channel Present. Failed
Line 2548: VCE codec configuration failed
Line 2556: VCE DTMF configuration failed
Line 2561: IMSSH_MC_CreateMediaSession : Direction [%d] 
Line 2572: VCE Options configuration failed
Line 2582: VCE Options configuration failed
Line 2594: [RTT_CALL] [ERROR] TextChannelID_sh: [%d]
Line 2597: [RTT_CALL] [SUCCESS] TextChannelID_sh: %d
Line 2600: [RTT_CALL] [ERROR] IMSSH_MC_ConfigVceTextCodec 
Line 2603: [RTT_CALL] [SUCCESS] IMSSH_MC_ConfigVceTextCodec 
Line 2614: [RTT_CALL] [ERROR] IMSSH_MC_ConfigVceOptionsText
Line 2617: [RTT_CALL] [SUCCESS] IMSSH_MC_ConfigVceOptionsText 
Line 2628: [IMSSH MC] ALLOC FAILED !!!
Line 2645: [MC=>CC] INT_MC_CC_RTP_MEDIA_START_RSP : Session ID [%d]  Dialogie ID [%d] Result [%s] 
Line 2678: VCE channel configuration failed
Line 2685: No Valid channel Present. Failed
Line 2691: VCE codec configuration failed
Line 2699: VCE DTMF configuration failed
Line 2704: IMSSH_MC_RevokeMediaSession : Direction [%d] 
Line 2710: VCE Options configuration failed
Line 2719: VCE Options configuration failed
Line 2731: [RTT_CALL] [ERROR] TextChannelId: [%d]
Line 2734: [RTT_CALL] [SRM]  TextChannelID_sh: [%d] 
Line 2737: [RTT_CALL] [ERROR] IMSSH_MC_ConfigVceTextCodec
Line 2740: [RTT_CALL] [SRM] [SUCCESS] IMSSH_MC_ConfigVceTextCodec 
Line 2744: [RTT_CALL] [ERROR] IMSSH_MC_ConfigVceOptionsText
Line 2749: [RTT_CALL] [SRM] [SUCCESS] IMSSH_MC_ConfigVceOptionsText 
Line 2760: [IMSSH MC] ALLOC FAILED !!!
Line 2777: [MC=>CC] INT_MC_CC_RTP_MEDIA_START_RSP : Session ID [%d]  Dialogie ID [%d] Result [%s] 
Line 2814: [IMSSH MC] Channel Db not found for Text Channel ID [%d]
Line 2818: [RTT_CALL] STOPPING text channel!! TextChannelID_sh: [%d] 
Line 2827: [RTT_CALL] [SUCCESS] DeleteMediaSession TextChannelID_sh: [%d]
Line 2868: INVALID VCE Audio Channel ID [%d]
Line 2872: Audio channel Present for Sid (%d) Dialogue ID(%d)
Line 2875: [SUCCESS] DeleteMediaSession  AudioChannelId_sh: [%d]
Line 2891: INVALID VCE Text Channel ID [%d]
Line 2895: [RTT_CALL] STOPPING text channel!! TextChannelID_sh: [%d] 
Line 2903: [RTT_CALL] [SUCCESS] DeleteMediaSession TextChannelID_sh: [%d]
Line 3007: Invalid Direction received
Line 3038: Current AP RTP state [%d]
Line 3051: Since audio & text Channel is already created before AP RTP is stopped, just revoke the Channel
Line 3057: Since audio Channel is already created before AP RTP is stopped, just revoke the Channel
Line 3091: Current AP RTP state [%d], VceStatus [%d]
Line 3110: Since CP VCE is not running, trigger delete directly without triggering stop
Line 3145: IMSSH_MC_ConfigureVceReq: SID[%d] DialogueId[%d]
Line 3146: - Direction:%s, Action:%s
Line 3149: - Current Direction: %s
Line 3158: For CMCC Set RTCP Timeout  0
Line 3171: Channel is deleted successfully
Line 3203: Invalid Direction received for Media Start Action
Line 3217: Change VE Status to nosendnorecv in case of recv pause, direction: [%d]
Line 3223: Invalid Direction received for Media Start Action
Line 3259: Invalid Direction received for Media Start Action
Line 3266: Invalid Direction received
Line 3344: MC <= SRM_IMS_START_SVE_RSP
Line 3346: [SHMC]VCH(%d):SRM_IMS_START_SVE_RSP Result:%s
Line 3352: [IMSSH MC] ALLOC FAILED !!!
Line 3368: INVALID VCE Channel ID
Line 3382: [MC=>CC] INT_MC_CC_RTP_MEDIA_START_RSP : Session ID [%d]  Dialogie ID [%d] Result [%s] 
Line 3431: MC <= SRM_IMS_STOP_SVE_RSP
Line 3433: [SHMC]VCH(%d):SRM_IMS_STOP_SVE_RSP Result:%s
Line 3453: INVALID VCE Channel ID
Line 3463: [IMSSH MC] ALLOC FAILED !!!
Line 3469: INVALID VCE Channel ID [%d]
Line 3485: [IMSSH_MC_HandleVceStopRsp]Call Id[%d], Call State[%s]
Line 3487: [RTT_CALL] [MEDIA_STOP_RSP] for channel: [%d]
Line 3492: [NEWAUDIOPATH] Audio ApRtpState -> %s
Line 3500: [NEWAUDIOPATH] Text ApRtpState -> %s
Line 3516: Invalid Call ID
Line 3528: [MC=>CC] INT_MC_CC_RTP_MEDIA_STOP_RSP : Session ID [%d]  Dialogie ID [%d] Result [%s] 
Line 3537: VCE Stop response received !! -> Wait for del. or to revoke
Line 3544: VCE channel delete
Line 3588: [IMSSH MC] Channel Db not found for SRM Channel ID [%d]
Line 3593: [IMSSH MC] Channel Db found for SRM Channel ID [%d]
Line 3601: [IMSSH MC] Channel Db not found for Channel ID [%d]
Line 3605: [MEDIA_CHANGE_RSP] Channe lId: [%d]
Line 3606: [MEDIA_CHANGE_RSP] Channel Action: [%d]
Line 3619: [IMSSH MC] ALLOC FAILED !!!
Line 3659: [MC=>CC] IMSSH_MC_RTP_MEDIA_CHANGE_RSP : Session ID [%d]  Dialogie ID [%d] Result [%s] 
Line 3688: MC <= SRM_IMS_RECEIVE_DTMF
Line 3690: [IMSSH MC] AUDIO CHANNEL ID [%d] received 
Line 3694: [IMSSH MC] INVALID channelId !!
Line 3702: Invalid Session ID [%x] OR Dialogie ID [%x]
Line 3712: [IMSSH MC] ALLOC FAILED !!!
Line 3732: IMSSH_NS_DTMF_EVENT_IND (%d) to NS
Line 3735: -      Tid[%d], event[%d], volume[%d], duration[%d], endbit[%d(0x%X)]
Line 3737: [MC=>CC_SAP] IMSSH_NS_DTMF_EVENT_IND 
Line 3770: Invalid Channel Id [%d]!!!
Line 3776: Invalid Session ID [%x] OR Dialogie ID [%x]
Line 3818: Invalid Channel Id [%d]!!!
Line 3824: Invalid Session ID [%x] OR Dialogie ID [%x]
Line 3866: Invalid Channel Id [%d]!!!
Line 3872: Invalid Session ID [%x] OR Dialogie ID [%x]
Line 3914: Invalid Channel Id [%d]!!!
Line 3920: Invalid Session ID [%x] OR Dialogie ID [%x]
Line 3976: MC <=  NS_IMSSH_START_DTMF_REQ
Line 3982: IMSSH_MC_HandleDtmfStartReq DTMF Key [%d] , Session ID [%d] , Audio Channel Id[%d]
Line 3986: -		INVALID CHANNEL ID
Line 3997: IMSSH_MC_HandleDtmfStartReq DTMF Key [%d] , Session ID [%d] , Audio Channel Id[%d]
Line 4008: -		SRM_InterfaceSendDtmf failed, Error code = %d
Line 4017: [IMSSH MC] ALLOC FAILED !!!
Line 4034: [MC=>CC_SAP]IMSSH_START_DTMF_RSP (%d) to NS, Result= %s
Line 4054: Sending Frame Time Notification to NS
Line 4060: [IMSSH MC] ALLOC FAILED !!!
Line 4079: IMSSH_NS_FRAME_TIME_NTF (%d) to NS
Line 4080: -      Operation[%d], RtpTime[%d]
Line 4081: -      NTP LS Timestamp of RTCP[%u(0x%x)]
Line 4082: -      NTP MS Timestamp of RTCP[%u(0x%x)]
Line 4084: [MC=>CC_SAP]IMSSH_NS_FRAME_TIME_NTF 
Line 4117: MC <=  NS_IMSSH_FRAME_TIME_GET_REQ
Line 4118: IMSSH_MC_HandleFrameTimeGetReq Operation: %d, Channel: %d 
Line 4125: [IMSSH MC] ALLOC FAILED !!!
Line 4150: No active channel Id found, send dummy response
Line 4157: -      SRM_InterfaceGetRxVoiceTime failed, Error code = %d
Line 4161: IMSSH_MC_HandleFrameTimeGetReq LastPlayedRTPtimestamp[%d] LastPlayedSysTime[%d] JbmDelay[%d] LastRoundTripTime[%d]
Line 4177: IMSSH_MC_HandleFrameTimeGetReq SystemTime:%d
Line 4181: [MC=>CC_SAP]IMSSH_NS_FRAME_TIME_GET_RSP 
Line 4187: Invalid Operation received [%d] 
Line 4208: IMSSH_MC_HandleVoiceDelaySetReq Operation: %d, Channel: %d 
Line 4210: MC <=  NS_IMSSH_FRAMETIME_SET_REQ
Line 4216: No active channel Id found
Line 4222: -      Delay = %d
Line 4226: Invalid Operation received [%d] 
Line 4256: No active channel Id found
Line 4263: [IMSSH MC] ALLOC FAILED !!!
Line 4285: [IMSSH=>SRM] Sending IMS_SRM_RECOMMENDED_BIT_RATE_IND for SRM Channel Id=%d
Line 4292: Recommended Bit Rate for Video
Line 4296: Unknown Type(%d)
Line 4326: [IMSSH MC] ALLOC FAILED !!!
Line 4340: [IMSSH=>L2TX] Sending IMS_L2LTX_RECOMMENDED_BIT_RATE_IND, direction(%d) bitRate(%d)
Line 4359: [IMSSH MC] ALLOC FAILED !!!
Line 4384: [IMSSH=>NRMAC] Sending NRMAC_IMSSH_RECOMMENDED_BIT_RATE_IND, direction(%d) bitRate(%d)
Line 4413: MC <= SRM_IMS_CODEC_INFO_IND
Line 4414: [IMSSH MC] AUDIO CHANNEL ID [%d] received 
Line 4419: Invalid Session ID [%x] OR Dialogie ID [%x]
Line 4433: MMTEL Not Supported by Remote, Set limitVoiceBand to TRUE
Line 4468: MC <= NS_IMSSH_RTP_RX_STATISTICS_SET_REQ
Line 4472: [IMSSH_MC_HandleRtpRxStatisticsSetReq] Call Id is invalid.
Line 4480: Invalid Audio Channel ID from SessionId: %d
Line 4487: [IMSSH MC] ALLOC FAILED !!!
Line 4498: IMSSH_MC_HandleRtpRxStatisticsSetReq CallId: %d, JitterThr: %d, JitterThrDelay : %d, PktLossThr: %d, Interval: %d, RxStatisticIntervalTime %d, StandingNoRtp %d
Line 4543: [IMSSH=>SRM] Sending IMS_SRM_RTP_RX_STATISTICS_SET_REQ for SRM Channel Id=%d
Line 4572: MC <= SRM_IMS_RTP_RX_STATISTICS_IND
Line 4573: [IMSSH MC] AUDIO CHANNEL ID [%d] received 
Line 4579: Invalid Session ID [%x] OR Dialogie ID [%x]
Line 4593: [IMSSH MC] ALLOC FAILED !!!
Line 4612: IMSSH_NS_RTP_RX_STATICSTICS_IND (%d) to NS
Line 4615: -      event[%d], jitter[%d], packetLossRate[%d], inactivityTime[%d]
Line 4617: [MC=>CC_SAP] EXT_SND_IMSSH_NS_RTP_RX_STATISTICS_IND 
Line 4709: %s
Line 4718: RTP packets received for Early Media, stop LRBT
Line 4748: %s
Line 4754: Invalid Session ID [%x] OR Dialogie ID [%x]
Line 4765: SessionDb Ptr Null!!
Line 4791: RTP packets received for Early Media, stop LRBT
Line 4822: In function IMSSH_MC_HandleFirstRtpWaitTimeoutInd
Line 4834: IMSSH_MC_HandleFirstRtpWaitTimeoutInd: First Rtp ind Wait Timer expiry not handled in current state.
Line 4863: MC <= SRM_IMS_VOICE_RTP_QUALITY_IND
Line 4868: Invalid Session ID [%x] OR Dialogie ID [%x]
Line 4879: [IMSSH MC] ALLOC FAILED !!!
Line 4912: IMSSH_NS_VOICE_RTP_QUALITY_IND (%d) to NS
Line 4916: - Duration[%d] NumRtpPacketsTx[%d] NumRtpPacketsRx[%d] NumRtpPacketsTxLost[%d] NumRtpPacketsNotReceived[%d]
Line 4920: - AvgRelativeJitter[%d] MaxRelativeJitter[%d] AvgRoundTripTime[%d]
Line 4923: - RtpInactivityDetected[%d] RxSilenceDetected[%d] TxSilenceDetected[%d]
Line 4926: - NumOfVoiceFrames(%d), NumOfNoDataFrames(%d), NumOfDroppedRtpPackets(%d), NumOfSidPackets(%d), NumOfDupPackets(%d)
Line 4928: - MinPlayoutDelay(%d), MaxPlayoutDelay(%d)
Line 4930: [MC=>CC_SAP] EXT_SND_IMSSH_NS_VOICE_RTP_QUALITY_IND
Line 5034: imsCallBearerId :%d
Line 5044: [RTT_CALL] ___START___ IMSSH_MC_ConfigVceTextCodec
Line 5048: Invalid Channel Id [%d]!!!
Line 5055: [RTT_CALL] [FAIL] IMSSH_MC_ConfigVceTextCodec
Line 5060: [RTT_CALL] [SRM] codecInfo.name : 
Line 5069: [RTT_CALL] [SRM] codecInfo: type[%d], freq[%d], bitrate[%d], ptime[%d], max_rx_ptime[%d]
Line 5072: [RTT_CALL] [SRM] codecInfo: RedLevel[%d], RedPt[%d], cps[%d], CodecTypeRemote[%d]
Line 5077: [RTT_CALL] [ERROR] SRM_InterfaceSetSendCodecInfo errorCode: %d
Line 5081: [RTT_CALL] [SRM] [SUCCESS] SRM_InterfaceSetSendCodecInfo
Line 5083: [RTT_CALL] ____END____ IMSSH_MC_ConfigVceTextCodec
Line 5114: [RTT_CALL] ___START___ IMSSH_MC_ConfigVceOptionsText
Line 5118: Invalid Channel Id [%d]!!!
Line 5126: [RTT_CALL] Channel Db not found for TextChannelID_sh: [%d] 
Line 5133: [RTT_CALL] ALLOC FAILED !!!
Line 5171: [RTT_CALL] [SRM] Text: RtcpTimeout[%d], rtcpOnCall[%d], rtpTimeout[%d], CodecBwRS[%d], CodecBwRR[%d]
Line 5172: [RTT_CALL] [SRM] OPTION_SET_REQ ==> SRM_TextChannelID  = %d 
Line 5176: [RTT_CALL] ____END____ IMSSH_MC_ConfigVceOptionsText
Line 5206: [RTT_CALL] ___START___ SRM_InterfaceSendText
Line 5222: [RTT_CALL] ALLOC FAILED !!!
Line 5238: [RTT_CALL] FAIL ==> EXT_SND_IMSSH_SRM_START_TEXT_REQ
Line 5241: [RTT_CALL] SUCESS ==> EXT_SND_IMSSH_SRM_START_TEXT_REQ
Line 5245: [RTT_CALL] ____END____ SRM_InterfaceSendText
Line 5276: [RTT_CALL] ___START___ IMSSH_MC_HandleTextStartReq
Line 5283: [RTT_CALL] [RTT_UL] [WARN] Channel is not active now => Might be deleted !
Line 5288: [RTT_CALL] [RTT_UL] SID: [%d], TextChannelID: [%d]
Line 5293: [RTT_CALL] [RTT_UL] [ERROR] textDataLength:%d
Line 5302: [RTT_CALL] ALLOC FAILED !!!
Line 5312: [RTT_CALL] [RTT_UL] [ERROR] SRM_InterfaceSendText ErrorCode = %d
Line 5316: [RTT_CALL] [RTT_UL] Length :%d Data : [%s]
Line 5325: [RTT_CALL] [RTT_UL] [DROP] THE Packet
Line 5330: [RTT_CALL] ALLOC FAILED !!!
Line 5343: [RTT_CALL] ==> EXT_SND_IMSSH_NS_START_TEXT_RSP [ Result = %s]
Line 5348: [RTT_CALL] ____END____ IMSSH_MC_HandleTextStartReq
Line 5391: [RTT_CALL] [RTT_UL] SID: [%d], TextChannelID [%d]
Line 5395: [RTT_CALL] [RTT_UL] [WARN] Channel is not active now => Might be deleted !
Line 5405: [RTT_CALL] [RTT_UL] [ERROR] SRM_InterfaceSendText ErrorCode = %d
Line 5409: [RTT_CALL] [RTT_UL] Text 
Line 5418: [RTT_CALL] [RTT_UL] [DROP] THE Packet
Line 5423: [RTT_CALL] ALLOC FAILED !!!
Line 5436: [RTT_CALL] ==> EXT_SND_IMSSH_NS_SEND_TEXT_FAIL_IND [ Result = %s]
Line 5441: [RTT_CALL] ____END____ IMSSH_MC_SendRTTBomPacket
Line 5468: [RTT_CALL] ___START___ IMSSH_MC_HandleReceiveText
Line 5473: [RTT_CALL] [RTT_DL] [DROP] Length :%d Data : [%s]
Line 5474: [RTT_CALL] [RTT_DL] [WARN] Channel is not active now => Might be deleted !
Line 5480: [RTT_CALL] [ERROR]  ALLOC FAILED
Line 5494: [RTT_CALL] [ERROR] Session ID [%x] Dialogie ID [%x]
Line 5498: [RTT_CALL] [RTT_DL] SID: [%d], TextChannelID_sh: [%d], TextEngineChannelId: [%d]
Line 5505: [RTT_CALL] ALLOC FAILED !!!
Line 5509: [RTT_CALL] [RTT_DL] Length :%d Data : [%s]
Line 5510: [RTT_CALL] ==> EXT_SND_IMSSH_NS_TEXT_EVENT_IND 
Line 5513: [RTT_CALL] ____END____ IMSSH_MC_HandleReceiveText
Line 5539: IMSSH_MC_HandleTxVoiceRtpDropInd SeqNum [%d] , Reason [%d]
Line 5544: [RTT_CALL] ALLOC FAILED !!!
Line 5592: IMSSH_MC_HandleRtpExtensionSendReq - callId[%d]
Line 5601: Invalid Audio Channel ID from SessionId: %d
Line 5634: [IMSSH=>SRM] Sending IMS_SRM_RTP_HEADER_EXTENSION_SEND_REQ for SRM ChannelId=%d, Id[%d] / Length[%d]
Line 5644: [IMSSH MC] TxMsg ALLOC FAILED !!!
Line 5676: MC <= SRM_IMS_RTP_HEADER_EXTENSTION_RECV_IND
Line 5681: Invalid Session ID [%x] OR Dialogie ID [%x]
Line 5691: [IMSSH MC] ALLOC FAILED !!!
Line 5712: [IMSSH MC] ALLOC FAILED !!!
Line 5719: IMSSH_NS_RTP_HEADER_EXTENSION_IND - CallId[%d] to NS, Count[%d] Id[%d] Length[%d]
Line 5767: [IMSSH_MC_GetChannelDb] ChannelDb[%d] Sid[%d] Did[%d] found
Line 5835: [IMSSH_MC_CreateChannelDb] channelId[%d], sessionId[%d], DialogueId[%d]
Line 5867: [IMSSH_MC_DeleteChannelDb] channelId[%d]
Line 5899: [APRTP] Error Scenario in Media state Ind[%d]
Line 5906: [APRTP] channel Active => Updating the RTpSeqNum[%0x], RTPTS[%0x] , RTPSSRC[%0x]
Line 5921: Alert>pIMSSH_MC_ChannelDb is NULL
Line 6132: [RTT_CALL] Text channel Active => No Need to create
Line 6137: [RTT_CALL] Text channel Not Active => Need to create
Line 6163:  Audio channel Active => No Need to create
Line 6168:  Audio channel Not Active => Need to create
Line 547: [RTT_CALL] [ERROR] [RETURN] No Free slot for TextChannelId
Line 551: [RTT_CALL] [SRM] TextChannelId :%d
Line 556: [SRM] [AUDIO] [ERROR] IMSSH_SC_GetTextMediaParam ReturnCode : %d
Line 570: [RTT_CALL] [ERROR] SRM_InterfaceCreateChannel error= %d
Line 586: [RTT_CALL] [ERROR] Text: RcvPort[%d], SendPort[%d], RtcpRcvPort[%d], RtcpSendPort[%d]
Line 596: [RTT_CALL] [SRM] SRM_InterfaceSetReceivePort     :%d
Line 600: [RTT_CALL] [ERROR] SRM_InterfaceSetReceivePort =%d
Line 608: [RTT_CALL] [SRM] SRM_InterfaceSetSendPort        :%d
Line 612: [RTT_CALL] [ERROR] SRM_InterfaceSetSendPort  Error =%d
Line 620: [RTT_CALL] [SRM] SRM_InterfaceSetRtcpReceivePort :%d
Line 624: [RTT_CALL] [ERROR] SRM_InterfaceSetRtcpReceivePort Error =%d
Line 632: [RTT_CALL] [SRM] SRM_InterfaceSetRtcpSendPort    :%d
Line 636: [RTT_CALL] [ERROR]  SRM_InterfaceSetRtcpSendPort Error =%d
Line 644: [RTT_CALL] [SRM] SRM_InterfaceSetSendIp: IPType[%d]
Line 651: [RTT_CALL] [SRM] LocalIp :%d.%d.%d.%d RemoteIp :%d.%d.%d.%d
Line 660: [RTT_CALL] [SRM] LocalIp  :%02X%02X:%02X%02X
Line 667: [RTT_CALL] [SRM] RemoteIp :%02X%02X:%02X%02X
Line 673: [RTT_CALL] [ERROR] Set Remote and Local IP Failed, Error Code=%d
Line 2942: -      Received invalid Direction
Line 2966: -Received invalid Action
Line 2923: -      Received invalid VE status
