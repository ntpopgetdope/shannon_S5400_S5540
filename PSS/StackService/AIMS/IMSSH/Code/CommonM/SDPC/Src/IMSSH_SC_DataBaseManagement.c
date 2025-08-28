Line 308: RESET => Media Profile, Session Contexts
Line 348: IMSSH_SC_InitialiseAudioDefaultSdpProfile
Line 373: IMSSH_SC_InitialiseVideoDefaultSdpProfile
Line 390: IMSSH_SC_InitialiseTextDefaultSdpProfile
Line 412: Context Type : %d ,Context Id [%d]
Line 441: INVALID CNTX TYPE
Line 462: [HO Case] Current Context Id [%d], New Context Id [%d]
Line 466: Context ID out of Range
Line 501: [RTT_CALL] ___START___ IMSSH_SC_CreateDefaultTextProfile
Line 505: [RTT_CALL] Default Text Profile Already Created, RETURN
Line 545: [RTT_CALL] [DEFAULT] MediaPort[%d], BwAS[%d], BwRR[%d], BwRS[%d], PLType[%d], RedPLType[%d]
Line 548: [RTT_CALL] [DEFAULT] bufferTime[%d], maxbufferTime[%d], clkFreq[%d], qosEnable[%d], textRegistryEnable[%d]
Line 577: [RTT_CALL] [DEFAULT] Codec[%d], PLType[%d], ClkFreq[%d]
Line 589: [RTT_CALL] [DEFAULT] TextMediaDirection[%d], cps[%d], redPayloadType[%d], t140PayloadType[%d]
Line 592: [RTT_CALL] ____END____ IMSSH_SC_CreateDefaultTextProfile
Line 631: Audio Profile Already Created, RETURN
Line 678: Invalid Audio Codec Param
Line 700: Copy EVS Parameters [%d]
Line 717: Codec Type[%d], Audio Profile PL TYPE[%d], Clk Freq[%d]
Line 732: [SC] Audio Profile: RTPMap Media Attribute Count[%d], Bandwidth AS[%d] RS[%d] RR[%d]
Line 762: [SC] isECNValid[%d], InitValue[0x%x], Ect[%d], Mode[%d]
Line 766: [SC] AudioMediaDirection[%d], Port [%d], Max Ptime[%d], Min Ptime[%d], rtcpxrMode[%d]
Line 799: [SC][SRTP] Added default crypto: Index [%d], Tag [%d], CryptoType [%d]
Line 809: [SC][SRTP] UE Supports number(%d) of crypto.
Line 820: [SC][Extmap] Added default extmap: Index [%d], Id [%d]
Line 821: [SC][Extmap] Added default extmap: Uri
Line 827: [SC][Extmap] UE Supports number(%d) of RTP header extension types.
Line 854: CurrSuppCodecs[%d], UpdatedSuppCodecs[%d]
Line 858: Supported Codecs are Updated, Create Deafult Audio Profile Again
Line 894: Default Video Profile updation not required, return
Line 976: Invalid Audio Codec Param
Line 997: Codec Type[%d], [RCS]Audio Profile PL TYPE[%d], Clk Freq[%d]
Line 1039: [SC][RCS] Audio Bandwidth: AS[%d] RS[%d] RR[%d], MediaDirection[%d], MaxPtime[%d], MinPtime[%d]
Line 1075: Invalid Video Codec Param
Line 1089: Candidate FrameRate[%d]
Line 1112: [SC] Video Profile Bandwidth Info, AS[%d] RS[%d] RR[%d] Port[%d]
Line 1143: [IMSSH_SC_UpdateVideoCodecInfo] INVALID ARGUMENTS, RETURN !!!
Line 1152: [IMSSH_SC_UpdateVideoCodecInfo] Index[%d], PackMode[%d], Codec[%d]
Line 1197: - IsDefined[%d], PacketizationMode[%d], FrameSize_Mode[%d], Height[%d], Width[%d], FrameRate[%d]
Line 1204: - PLType[%d], ClkFreq[%d], ProfileLevelID[%x], Level[%d], Profile[%d]
Line 1226: [IMSSH_SC_SetSupportedVidCodec] Invalid Arguments !!! 
Line 1230: [IMSSH_SC_SetSupportedVidCodec] Current Codec [%d]
Line 1250: [IMSSH_SC_SetSupportedVidCodec] Invalid Video Codec
Line 1268: [IMSSH_SC_GetVidProfileRat] Result[%d]
Line 1288: [IMSSH_SC_SetVidProfileRat] Result[%d]
Line 1326: [IMSSH_SC_UpdateCompleteVideoCodec] INVALID ARGUMENTS, RETURN !!!
Line 1339: [IMSSH_SC_UpdateCompleteVideoCodec] INVALID PACKETIZATION MODE from AP [%d], Set to Lowest
Line 1351: [IMSSH_SC_UpdateCompleteVideoCodec] INVALID PACKETIZATION MODE from AP [%d], Set to Lowest
Line 1406: IMSSH_SC_GetDefaultVideoBwInfo: Invalid Argument!!!
Line 1421: [SC] Preferred BwInfo: AS[%d] RS[%d] RR[%d], Default BwInfo: AS[%d] RS[%d] RR[%d]
Line 1427: IMSSH_SC_GetDefaultVideoBwInfo: AS[%d] RS[%d] RR[%d]
Line 1707: Video Profile Already Created, RETURN
Line 1712: [Reg Config Read Setting] [%d]
Line 1726: Don't Update MC_SuppMediaCfgDb, Values to be read as set from registry.
Line 1730: Update MC_SuppMediaCfgDb with APMediaInfo
Line 1736: Alert>Media Attributes setting to 3, as max supported is only 3
Line 1756: [IMSSH_SC_CreateDefaultVideoProfile] Video Codecs Configured by AP [%x]
Line 1758: [IMSSH_SC_CreateDefaultVideoProfile] No. Of Video Media Contacts in IMSSH-MC DB [%d]
Line 1774: Video Codec Profile Not Allowed
Line 1790: Candidate FrameRate[%d]
Line 1820: Max Video Profile Codec is set
Line 1828: [IMSSH_SC_CreateDefaultVideoProfile] Valid Video Codecs Configured by AP [%x]
Line 1833: [SC] Video Profile: RtpmapVideoMediaAttrCount[%d], MediaDirection[%d] Port[%d]
Line 1848: [IMSSH_SC_CreateDefaultVideoProfile] isECNValid[%d], EcnCapRtp, InitValue[0x%x], Ect[%d], Mode[%d]
Line 1905: [IMSSH_SC_CreateDefaultVideoProfile] isValid[%d], map_entry[%d], video_orientation[%d]
Line 1936: Default Profile Found for Codec [%d]
Line 1988: Default Profile Found for Codec [%d]
Line 2039: Received Context type [%d]
Line 2043: INVALID CONTEXT ID [%d]
Line 2073: Existing CONTEXT ID [%d]
Line 2083: IPv4 Address Changed: Prev[0x%x]
Line 2086: IPv4 Address Changed: New[0x%x]
Line 2089: IPv4 Address Matching
Line 2096: IPv6 Address Changed: Prev 
Line 2099: IPv6 Address Changed: New 
Line 2102: IPv6 Address Matching
Line 2106: IP Type [%d] NOT SUPPORTED
Line 2112: IP Type Changed : PREV [%d] 	 NEW [%d]
Line 2120: SERVICE TYPE [VOLTE/EMC] => RE-CREATE AUDIO/VIDEO DEFAULT PROFILES
Line 2142: [SC] IsVideoCRBTSupported [%d], IsVideoCRTSupported [%d], PlayMediaOnLatestDialog [%d], LrtDuringEarlyAlerting [%d]
Line 2143: [SC] IsDifferentRxTxPLType [%d]
Line 2203: [RTT_CALL] [WARN] E2E QoS Status Not supported
Line 2220: [RTT_CALL] [QOS] DISABLED
Line 2223: [RTT_CALL] [QOS] [DEFAULT] Text Precondition supported
Line 2257: [RTT_CALL] [QOS] [DEFAULT] CURR_LOCAL DIRECTION : %s, CURR_REMOTE DIRECTION : %s
Line 2263: [RTT_CALL] [QOS] [DEFAULT] DES_LOCAL DIRECTION : %s, STRENGTH : %s, DES_REMOTE DIRECTION : %s, STRENGTH : %s
Line 2283: [IMSSH_SC_UpdateQosPrecondInfo] E2E QoS Status Not supported
Line 2302: [IMSSH_SC_UpdateQosPrecondInfo] QoS Precond NOT SUPPORTED
Line 2306: [IMSSH_SC_UpdateQosPrecondInfo] QoS Precond IS SUPPORTED
Line 2340:     - Local Direction Tag[%d] and Strength Tag[%d], Remote Direction Tag[%d] and Strength Tag[%d]
Line 2341:     - Confirmation status Direction Tag[%d]
Line 2364: E2E QoS Status Not supported
Line 2382: QoS Precond NOT SUPPORTED
Line 2418: Local Direction Tag[%d] and Strength Tag[%d], Remote Direction Tag[%d] and Strength Tag[%d]
Line 2420: Confirmation status Direction Tag[%d]
Line 2447: IP Type [%x], IP Addr [%x]
Line 2451: Invalid IP Type OR IP Addr
Line 2470: IP Type: %d not Supported
Line 2486: Owner Username :
Line 2489: Session ID [%d] Session Version [%d] Owner Network Type [%d] Owner Address Type[%d]
Line 2641: Sorted Profile: PLType[%d], ClkFreq[%d], Codec[%d], Audio Attr PLType[%d], AMRModeChangeCapability[%d], AMRMaxRed[%d]
Line 2651: EVS codec: br_high[%d], br_low[%d], bw[%d], bw_recv[%d], bw_send[%d]
Line 2693: Starting Codec for sorting Video porfile[%d]
Line 2802: ImageAttr: SendWidth[%d], SendHeight[%d], RecvWidth[%d], RecvHeight[%d]
Line 2856: Sorted Profile: PLType[%d] ClkFreq[%d] Codec[%d], Send: Width[%d] Height[%d], Recv: Width[%d] Height[%d]
Line 2933: [SRTP] Sorted Crypto - tag : %d, CryptoType: %d, KeyParamsCount: %d
Line 2978: [Extmap] Index[%d], Reset duplicated rtpmap. ID: [%d]
Line 2988: [Extmap] Index[%d], Reset unused rtpmap. ID: [%d]
Line 3043: Invalid Pointer Received
Line 3055: Codec EVS/AMRWB/AMRNB/DTMF => Invalid Payload Type [%d]
Line 3066: Codec AMR-WB => Octet Align Mode NOT Supported
Line 3071: Codec AMR-WB => Bandwidth Efficient Mode NOT Supported
Line 3083: Codec AMRWB/EVS => Invalid Clk Freq [%d]
Line 3090: Codec AMR => Invalid Clk Freq [%d]
Line 3103: EVRC Codec Type
Line 3117: IsAudCodecConfigAllowed Failed !!!
Line 3138: [IMSSH_SC_ValidateCrypto] Invalid Pointer Received
Line 3142: [IMSSH_SC_ValidateCrypto] CryptoType[%d]
Line 3181: Invalid Pointer Received
Line 3191: Video Codec [%d] => Invalid Payload Type [%d]
Line 3197: Video Codec [%d] => Invalid Clk Freq [%d]
Line 3219: Video Codec [%d] => Profile-Idc Not Supported [%x]
Line 3252: [IMSSH_SC_IsVidProfileAllowed] Invalid Parameters !!!
Line 3256: [IMSSH_SC_IsVidProfileAllowed] Current Codec[%d]
Line 3286: [IMSSH_SC_IsVidProfileAllowed] Result[%d]
Line 3327: In function IMSSH_SC_CalculateBwInfo
Line 3381: [IMSSH_SC_CalculateBwInfo] Remote Audio Profile BwRS[%d], BwRR[%d]
Line 3391: [IMSSH_SC_CalculateBwInfo] Calculate BW as per HOLD State
Line 3399: [IMSSH_SC_CalculateBwInfo] Calculate BW as per Call State, SessionType [%d], CallHeldBy [%d]
Line 3411: [IMSSH_SC_CalculateBwInfo] Dont set INVALID Values for RS/RR, Keep same as Remote
Line 3417: [IMSSH_SC_CalculateBwInfo] Setting Remote RS/RR as Invalid
Line 3424: [IMSSH_SC_CalculateBwInfo] Remote BwRS[%d], BwRR[%d]
Line 3474: [IMSSH_SC_CalculateBwInfo] IpTypeIdx[%d]
Line 3532: [IMSSH_SC_CalculateBwInfo] CodecTypeIdx[%d] CodecModeIdx[%d] ModeSetIdx[%d]
Line 3541: [IMSSH_SC_CalculateBwInfo] Candidate AS[%d]
Line 3558: LocalBwAs[%d], dediGBR[%d]
Line 3568: IMSSH_SC_CalculateBwInfo AS[%d], RS[%d], RR[%d]
Line 3599: [IMSSH_SC_UpdateAudioBwAs] INVALID ARGUMENTS !!!
Line 3684: [IMSSH_SC_UpdateAudioBwAs] Candidate AS[%d]
Line 3690: Required BwAs[%d], Derived Local BwAS[%d]
Line 3729: [SRTP] Local Tag [%d] / CryptoType [%d] 
Line 3730: [SRTP] Local Key : 
Line 3731: [SRTP] Local KeyBase64 : 
Line 3813: [IMSSH_SC_GetDefaultAudioRS] RS [%d]
Line 3828: [IMSSH_SC_GetDefaultAudioRR] RR [%d]
Line 3848: IMSSH_SC_GetIsSdpProfileCreated [%d]
Line 3870: IMSSH_SC_SetIsSdpProfileCreated NewVal[%d]
Line 3893: [IMSSH_SC_AddMediaToSessDbMediaSeq] Invalid arguments !!!
Line 3907: [IMSSH_SC_AddMediaToSessDbMediaSeq][Media_Seq] Media Type[%d] is found at index [%d]
Line 3913: [IMSSH_SC_AddMediaToSessDbMediaSeq][Media_Seq] index [%d]
Line 3924: [IMSSH_SC_AddMediaToSessDbMediaSeq][Media_Seq] Media Type[%d] added at Index[%d]
