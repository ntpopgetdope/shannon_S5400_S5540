Line 239: [IMSSH MC]IMSSH_MC_InitaliseGlobalDb: Enter
Line 338: EVSConfig[%d] : PLType[%d], Bw[%d], BrMin[%d], BrMax[%d], ChAwRecv[%d]
Line 378: [IMSSH MC]IMSSH_MC_UpdateAMRWBInfo
Line 382: - AudioCodecModeVal= %d
Line 416: [Carrier Config] AMR-WB[0] => CodecMode[%d], ModeSet[%x]
Line 454: Payload Type[%d], AmrMode[%d], Clock Frequency[%d], IsOctetAlign[%d]
Line 474: [Carrier Config] AMR-WB[1] => CodecMode[%d], ModeSet[%x]
Line 512: Payload Type[%d], AmrMode[%d], Clock Frequency[%d], IsOctetAlign[%d]
Line 548: [IMSSH MC]IMSSH_MC_UpdateAMRNBInfo
Line 552: - AudioCodecModeVal= %d
Line 586: [Carrier Config] AMR-NB[0] => CodecMode[%d], ModeSet[%x]
Line 625: Payload Type[%d], AmrMode[%d], Clock Frequency[%d], IsOctetAlign[%d]
Line 645: [Carrier Config] AMR-NB[1] => CodecMode[%d], ModeSet[%x]
Line 684: Payload Type[%d], AmrMode[%d], Clock Frequency[%d], IsOctetAlign[%d]
Line 711: [IMSSH MC]IMSSH_MC_UpdateAMRNBOpenOfferInfo
Line 735: Payload Type[%d], AmrMode[%d], Clock Frequency[%d], IsOctetAlign[%d]
Line 759: [IMSSH MC]IMSSH_MC_UpdateDTMFInfo
Line 770:   DTMF KEY
Line 775: Payload Type[%d], AmrMode[%d], Clock Frequency[%d]
Line 795: [IMSSH MC]IMSSH_MC_UpdateDTMFWBInfo
Line 806:   DTMF KEY
Line 811: Payload Type[%d], AmrMode[%d], Clock Frequency[%d]
Line 820: - Codec Name is = %s
Line 861: Invalid Codec Mode : ADD Default as vga Codec
Line 872: - Codec Name is = %s
Line 888: - Codec Name is = %s
Line 902: [IMSSH-MC] Get Profile Level ID for profile index [%d]
Line 951: - Profile ID [d] is not suported
Line 967: - [Registry] FRAME MODE[%d], BASELINE_PROFILE Index[%d]
Line 974: - Codec Name[%s], Derived BASELINE_PROFILE Level[%x]
Line 1015: Invalid Codec Mode : ADD Default as vga Codec
Line 1051: - [Registry] FRAME MODE[%d], BASELINE_PROFILE Index[%d]
Line 1063: - Codec Name[%s], Derived BASELINE_PROFILE Level[%x]
Line 1105: Invalid Codec Mode : ADD Default as vga Codec
Line 1135: - Codec Name is = %s
Line 1189: Invalid Codec Mode : ADD Default as HD Codec
Line 1200: - Codec Name is = %s
Line 1216: - Codec Name is = %s
Line 1232: - Codec Name is = %s
Line 1264: [IMSSH_MC_CheckIsAudioCodecAllowed] Codec[%d], Supported Codecs [%d]
Line 1373: Invalid Preferred Audio Codec Received :
Line 1397: [IMSSH_MC_CheckIsVideoCodecAllowed] Codec[%d], Supported Codecs [%d]
Line 1445: Video Codec Not Supported
Line 1468: [IMSSH_MC_GetMaxVidProfile] Codec[%d], Level[0x%x]
Line 1494: [IMSSH_MC_SetMaxVidProfile] Codec[%d], Level[0x%x]
Line 1517: Codec Profile to be found[%d]
Line 1521: Invalid Argument, return !!!
Line 1527: [IMSSH_MC_GetHighestSuppVidProfile] Codec Not Supported, return
Line 1572: Valid H264 Profile Found: Profile-Level-Id[0x%x]
Line 1576: Valid H265 Profile Found: Profile[%d], Level[%d]
Line 1607: [IMSSH_MC_GetSuppVidProfile] Invalid Arguments !!!
Line 1628: [IMSSH_MC_GetSuppVidProfile] H264 Codec: Framesize matched
Line 1637: [IMSSH_MC_GetSuppVidProfile] H264 Codec: ImageAttr matched
Line 1647: [IMSSH_MC_GetSuppVidProfile] H265 Codec: Level matched
Line 1673: [SRTP] IMSSH_MC_CheckIsCryptoAllowed : CryptoType[%d], PrefAudioCryptoType[%d]
Line 1709: [SRTP] Invalid SRTP_PREF_CRYPTO Received :
Line 1734: [IMSSH_MC_GetPrefAudioCodec] Invalid Arguments
Line 1813: [IMSSH_MC_GetPrefAudioCodec] Preferred Codec List: 
Line 1833: [IMSSH_MC_UpdateCodecIndexRange] Invalid Arguments
Line 1843: [EVS] Start[0x%x] End[0x%x], [AMR_WB] Start[0x%x] End[0x%x], [AMR] Start[0x%x] End[0x%x]
Line 1848: [DTMF_WB] Start[0x%x] End[0x%x], [DTMF] Start[0x%x] End[0x%x]
Line 1868: [IMSSH_MC_UpdateCodecIndexRange] Invalid Arguments
Line 1921: [IMSSH MC]IMSSH_MC_InitialiseMediaController : Enter
Line 1962: Audio Info: RecvPort[%d] Bitrate[%d] MaxPtime[%d] MinPtime[%d] Max-Red[%d] AS[%d] RR[%d] RS[%d]
Line 1967: Video Info: RecvPort[%d] Bitrate[%d] AS[%d] RR[%d] RS[%d]
Line 1969: CPBasedSpropDerivation[%d]
Line 1970: [IMSSH_MC_InitialiseMediaController] Mediaport Dynamic(%d): audio/video/text[0x%X/0x%X/0x%X]
Line 1978: AMR-WB Mode-Set[0x%.2X] AMR-NB Mode-Set[0x%.2X] NB DTX Enabled[%d] WB DTX Enabled[%d]
Line 1997: Preferred Video Codec read from Registry %d
Line 2088: Invalid Preferred Video Codec Received : Set NumVideoMediaCodecs 0
Line 2094: [SRTP] Preferred Audio Crypto Value: %d
Line 2141: [SRTP] Wrong PrefAudioCryptoVal value.
Line 2175: [IMSSH MC] Audio engine initialisation failed
Line 2183: [IMSSH MC] SDP controller initilaisation failed initialisation failed
Line 2210: [IMSSH MC] IMSSH_MC_InitialiseMediaControllerFromReg : CurrDispForamt[%d]
Line 2219: - PrefAudioCodec[%d], PrefVideoCodec[%d], FrameRate[%d], BitRate[%d], DynamicBitRate[%d], AudioCodecMode[%d]
Line 2228: - MinAudioPort[%d], MaxAudioPort[%d], MinVideoPort[%d], MaxVideoPort[%d]
Line 2240: - CodecBandwidth[%d], AudioBitRate[%d], AmrBundlingRate[%d], AudioVideoTx[%d], JitterBufferSetting[%d], PrefAudioCrypto[%d]
Line 2267: - IMS PDN IP Address = %d.%d.%d.%d
Line 2273: - IMS PDN IPv6 Address = 
Line 2277: ImsPdnIpVer Invalid or not supported currently
Line 2304: [IMSSH MC] Received IMSSH_MC_PdnUpInd for Context ID [%d] Service Type [%d]
Line 2312: PdnInfoDb or NetworkDb is NULL , return 
Line 2326: Active Call Count [%d] 
Line 2330: Only IMS or EMC PDN Active, INIT SRM
Line 2344: [%d] Active Calls are present in CC Context, BLOCK SRM RE-INIT
Line 2350: - IMS PCSCF PDN IPv6 Address
Line 2419: [IMSSH_MC_UpdateNetworkService] Update contextId from Old [%d] to New [%d]
Line 2454: [IMSSH_MC_GetTftParamIndex] TFT Param Index [%d] for contextId[%d] & epsBearerID [%d]
Line 2478: [IMSSH_MC_GetTftParamFreeIndex] FreeIndex [%d]
Line 2509: [IMSSH_MC_DedBearerActNotification] Received with Context Id[%d] and EpsBearer Id[%d]
Line 2518: ACTIVATE_DEDICATED_BEARER: New Bearer: Allocate New TFT Param
Line 2524: [IMSSH_MC_DedBearerActNotification] Invalid TFT Param Index !!!
Line 2530: MODIFY_EPS_BEARER_CONTEXT: TFT Param already exists, Overwrite with New TFT values 
Line 2539: TFT parameter received for %d index
Line 2563: [IMSSH MC]Dedicated Bearer not present for Context ID[%d]
Line 2597: [IMSSH_MC_DedBearerDeActNotification] Received with Context Id[%d] and EpsBearer Id[%d]
Line 2603: [IMSSH_MC_DedBearerDeActNotification] Related TFT Param Index NOT Found !!!
Line 2607: [IMSSH_MC_DedBearerDeActNotification] Dedicated bearer is deactivated for Index [%d]
Line 2651: [IMSSH_MC_WlanHoDedBearerDeActNotification] Received with Context Id[%d] and EpsBearer Id[%d]
Line 2656: [IMSSH_MC_WlanHoDedBearerDeActNotification] Related TFT Param Index NOT Found !!!
Line 2660: [IMSSH MC] Dedicated bearer is deactivated for TFT Param Index [%d]
Line 164: [IMSSH MC]IMSSH_MC_SetPreconditionsQosConfig : Hidden Menu Precondition Parameters 
Line 179: [RTT_CALL] [QOS] IsTextPrecondQosEnable:%d
Line 187: [AUDIO]Preconditions Status  = [%d] Local Receive Strength = [%d] Local Send Strength = [%d] 
Line 188: Remote Receive Strength = [%d] Remote Send Strength = [%d]
Line 190: [VIDEO]Preconditions Status = [%d] Local Receive Strength = [%d] Local Send Strength = [%d] 
Line 191: Remote Receive Strength = [%d] Remote Send Strength = [%d]
Line 198: [VIDEO]Precond enable = [%d] 
