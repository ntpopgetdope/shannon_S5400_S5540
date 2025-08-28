Line 183: [CONTROLCHANNEL] rabm_SetState: New Rabm State %01X
Line 282: [CONTROLCHANNEL] rabm_DataInitialise: rabm_State = %d, Received_AS_EST_IND = %d
Line 320: [CONTROLCHANNEL] rabm_RbReset: RbId = %d, RabId = %d, DomainType = %d, SubFlowId = %d
Line 360: [CONTROLCHANNEL] rabm_PsSetState(%01X,%d)
Line 366: [ERROR_CHANNEL] rabm_PsSetState: invalid State %d(Rab:%01X)
Line 372: [ERROR_CHANNEL] rabm_PsSetState: Invalid(RabId:%01X)
Line 387: [ERROR_CHANNEL] rabm_PsSetActivationParameters: pRcvMsg is NULL pointer
Line 423: [CONTROLCHANNEL]  Nsapi : %d,  Dual PDP : CID   %d has 1st  SID active %d 2nd SID inactive %d 
Line 443: [CONTROLCHANNEL]  Nsapi : %d,  Dual PDP : CID  has 2 SIDs active SID 1 %d SID 2 %d 
Line 448: [CONTROLCHANNEL] rabm_PsSetActivationParameters: Nsapi : %d, Primary PDP : %d , IP Type : %d SID : %d, TFT num : %d
Line 462: [CONTROLCHANNEL] ==========================================================
Line 463: [CONTROLCHANNEL] TFT INFO(%X) : FilterDirection %d, FilterIdentifier %d
Line 464: [CONTROLCHANNEL] TOS : %X, %X, %X
Line 465: [CONTROLCHANNEL] Protocol : %X, %X, Next : %X, %X
Line 466: [CONTROLCHANNEL] Flow Label: %X, %X
Line 467: [CONTROLCHANNEL] RemoteAddr : %X, %X, %X
Line 468: [CONTROLCHANNEL] RemoteAddrV6 : %X,
Line 469: IPv6 Addr
Line 470: IPv6 Mask
Line 471: [CONTROLCHANNEL] Single Local port : %X, %X
Line 472: [CONTROLCHANNEL] Local port range : %X, %d ~ %d
Line 473: [CONTROLCHANNEL] Single Remote port : %X, %X
Line 474: [CONTROLCHANNEL] Remote port range : %X, %d ~ %d
Line 475: [CONTROLCHANNEL] Security : %X,
Line 476: [CONTROLCHANNEL] Evaluation : %X,
Line 477: [CONTROLCHANNEL] TftType : %X,
Line 478: [CONTROLCHANNEL] ==========================================================
Line 489: [ERROR_CHANNEL] rabm_PsSetActivationParameters: Invalid RabId: %01X
Line 545: [ERROR_CHANNEL] rabm_PsSetDeactivateCause: Invalid RabId: %01X
Line 562: [CONTROLCHANNEL] rabm_DeactivateAllPsData
Line 633: [CONTROLCHANNEL] Reset the state of RABM to SUSPENDED if PDP %d for which REEST_REQ is sent  , is deactivated before Response is received. 
Line 650: [PS_UPLINK] rabm_DeactivatePsData : RAB(%d) buffer freed!
Line 656: [ERROR_CHANNEL] rabm_DeactivatePsData: Invalid RabId: %01X
Line 678: [FLOWCONTROL] rabm_PsQueueData : Queuing Buffer %08X for Rab %01X
Line 685: [ERROR_CHANNEL] rabm_PsQueueData : PsData->BufferQueue is NULL
Line 691: [ERROR_CHANNEL] rabm_PsQueueData : Invalid Buffer for RabId: %01X - buffer &08X
Line 696: [ERROR_CHANNEL] rabm_PsQueueData : Invalid RabId: %01X for buffer &08X
Line 727: [FLOWCONTROL] rabm_PsDeQueueData : (%01X) = %08X
Line 738: [ERROR_CHANNEL] rabm_PsDeQueueData : PsData->BufferQueue is NULL
Line 744: [ERROR_CHANNEL] rabm_PsDeQueueData : Invalid RabId: %d
Line 762: [CONTROLCHANNEL] rabm_PsSetRbId: RabId = %d, RbId = %d
Line 774: [CONTROLCHANNEL] rabm_PsSetRbId: [OLD] DomainType = %d, RabId = %d, SubFlowId
Line 787: [CONTROLCHANNEL] rabm_PsSetRbId: [NEW] DomainType = %d, RabId = %d, SubFlowId
Line 794: [ERROR_CHANNEL] rabm_PsSetRb: Invalid RabId %01X
Line 825: [ERROR_CHANNEL] Not a PS Rb %02X, type %d for RabId %01X
Line 832: [ERROR_CHANNEL] Invalid RabId: %X
Line 840: [INTERNAL_CHANNEL] rabm_GetTimerId, Domain %d, Rab %01X
Line 854: [ERROR_CHANNEL] Invalid PS RabId: %01X
Line 869: [ERROR_CHANNEL] Invalid CS RabId: %01X
Line 875: [ERROR_CHANNEL] Invalid Domain: %d
Line 883: [INTERNAL_CHANNEL] rabm_SetTimerId, Domain %d, Rab %01X, Timer %08X
Line 897: [ERROR_CHANNEL] Invalid PS RabId: %01X
Line 913: [ERROR_CHANNEL] Invalid CS RabId: %01X
Line 920: [ERROR_CHANNEL] Invalid Domain: %d
Line 944: [ERROR_CHANNEL] Not a PS Rb %02X
Line 949: [ERROR_CHANNEL] Not a valid Rb %X
Line 968: [ERROR_CHANNEL] rabm_CsGetState: Invalid RabId: %01X
Line 1045: [CONTROLCHANNEL] rabm_CsSetState (%d, %d)
Line 1049: [ERROR_CHANNEL] Invalid Rab: %01X
Line 1055: [ERROR_CHANNEL] Invalid State: %d
Line 1088: [ERROR_CHANNEL] Invalid SubFlowId: %01X for Rab %01X
Line 1093: [ERROR_CHANNEL] Invalid Rab: %01X
Line 1110: [ERROR_CHANNEL] rabm_CsGetTotalUiBits: Invalid Rab: %01X
Line 1126: [ERROR_CHANNEL] rabm_CsGetTotalUiBits: Invalid Rab: %01X
Line 1134: [CONTROLCHANNEL] rabm_DeactivateAllCsData
Line 1231: [ERROR_CHANNEL] rabm_DeactivateCsData: Invalid SI: %01X
Line 1240: [CONTROLCHANNEL] rabm_CsSetDataType() : RabId %01X, CallSessionNumber %d, SyncStatus %d, DataType : %d)
Line 1244: [ERROR_CHANNEL] Invalid DataType: %d
Line 1250: [ERROR_CHANNEL] Invalid Rab: %01X
Line 1264: [CONTROLCHANNEL] rabm_CsSetDataType  CDH Current RAT  != UMTS .. Forcefully SET
Line 1286: [ERROR_CHANNEL] rabm_CsGetDataType: Invalid Rab: %01X
Line 1306: [ERROR_CHANNEL] rabm_CsDataType: Invalid Rab: %01X
Line 1322: [ERROR_CHANNEL] rabm_CsGetRabId: Invalid RbId: %X
Line 1338: [ERROR_CHANNEL] rabm_CsGetRabId: Invalid RbId: %X
Line 1349: [CONTROLCHANNEL] rabm_CsAddRbId: Rab %01X, Rb %02X, SubFlow %d
Line 1353: [ERROR_CHANNEL] Invalid SI: %01X
Line 1359: [ERROR_CHANNEL] Invalid Rb: %X
Line 1365: [ERROR_CHANNEL] Invalid SubFlowId: %d
Line 1375: [CONTROLCHANNEL] rabm_CsAddRbId: [CsData] RbId %d, SubFlowId %d
Line 1376: [CONTROLCHANNEL] rabm_CsAddRbId: [RbData] RabId %d, SubFlowId %d, DomainType %d
Line 1388: [INTERNAL_CHANNEL] rabm_CsReleaseRbId (%d)
Line 1392: [ERROR_CHANNEL] Invalid Rb: %02X
Line 1404: [ERROR_CHANNEL] Invalid Rab: %01X for Rb %02X
Line 1412: [CONTROLCHANNEL] [CsData] RbId %d
Line 1413: [CONTROLCHANNEL] [RbData] RabId %d, SubFlowId %d, DomainType %d
Line 1427: [ERROR_CHANNEL] Invalid type %d for Rb: %02X
Line 1439: [FLOWCONTROL] rabm_CsUlQueueData
Line 1455: [ERROR_CHANNEL] rabm_CsUlQueueData : CsData->BufferQueue is NULL
Line 1461: [CS_UPLINK] rabm_CsQueueUlData: Rab %01X, Empty buffer received
Line 1467: [ERROR_CHANNEL] RabId: %01X Not ACTIVE: %d
Line 1472: [ERROR_CHANNEL] Invalid RabId: %01X for buffer &08X
Line 1656: [CS_UPLINK] rabm_CsUlSendData: queuedBits: %d, DlDataSent: %d, SubFlowID : %d, RabId %d RbId %d
Line 1660: [ERROR_CHANNEL] Invalid SubFlowID %d, HardCode for Defence
Line 1690: [ERROR_CHANNEL] rabm_CsUlGetPacket failed
Line 1761: [ERROR_CHANNEL] rabm_CsSetPadding(): CsData is NULL
Line 1795: [ERROR_CHANNEL] Rabm_CsUlTimer_STF() RABM_CSData_Struct = NULL,  RabId = %d, CSData = %x
Line 1839: [CONTROLCHANNEL] ========== RABM Status ==========
Line 1840: [CONTROLCHANNEL] ========== Configured PS Rabs ==========
Line 1841: [CONTROLCHANNEL] isUtranCommercialPlmnId : %d
Line 1842: [CONTROLCHANNEL] SimInstance : %d
Line 1849: [CONTROLCHANNEL]  PS Rab: %01X, State: %01X, Rb: %01X, Timer %08X, UplinkQ: %08X
Line 1855: [CONTROLCHANNEL] ========== Configured CS Rabs ==========
Line 1863: [ERROR_CHANNEL]  CS Rab: %01X, State: %01X, Type: %01X, Timer: %08X, SubFlowID : %d
Line 1865: [ERROR_CHANNEL]  -- Rbs: %01X %01X %01X %01X
Line 1871: [CONTROLCHANNEL] ========== Configured Rbs ==========
Line 1879: [CONTROLCHANNEL] Rb: %01X, Domain: %01X, Rab: %01X, SubFlow: %01X
Line 1894: [INTERNAL_CHANNEL] Rabm_FindNsapi : IPversion(%d) [1:IPV4. 2:IPV6] Received SID (%d) CID %d
Line 1898: [INTERNAL_CHANNEL] Rabm_FindNsapi : SID(%d) is same as first SID(%d)
Line 1902: [INTERNAL_CHANNEL] Rabm_FindNsapi : SID (%d) is not same as first SID(%d) Hence set SID to second SID(%d)
Line 1916: [ERROR_CHANNEL] Rabm_FindNsapi : Invalid FilterDirection %d
Line 1924: [INTERNAL_CHANNEL] TOS : %x, %x, %x
Line 1933: [INTERNAL_CHANNEL] Protocol : %x, %x
Line 1942: [INTERNAL_CHANNEL] RemoteAddr : %X, %X, %X
Line 1951: [INTERNAL_CHANNEL] Remote port : %X, %X
Line 1961: [INTERNAL_CHANNEL] Local port range: %X, %X, %X
Line 1971: [INTERNAL_CHANNEL] Dst port range: %X, %X, %X
Line 1980: [INTERNAL_CHANNEL] Skip Local port : %X, %X
Line 2010: [INTERNAL_CHANNEL] Rabm_FindNsapi : NSAPI : %d, Invalid IP Type : %d
Line 2026: [INTERNAL_CHANNEL] Rabm_FindNsapi : Primary Nsapi (%01X),  SID (%d)
Line 2050: [INTERNAL_CHANNEL] Rabm_FindNsapi : NSAPI %d, TFT idx %d, iFind %d, higer_precedence_value %d, precedence_value %d
Line 2054: [ERROR_CHANNEL] Rabm_FindNsapi : Invalid FilterDirection %d, %d
Line 2072: [INTERNAL_CHANNEL] check precedence: higer %d, cur %d,  Find %d
Line 2084: [INTERNAL_CHANNEL] TFT MATCH : Keep nsapi %d
Line 2089: [INTERNAL_CHANNEL] TFT MATCH : Find, temp nsapi %d
Line 2094: [INTERNAL_CHANNEL] TFT MATCH : Current Nsapi (%01X), Primary is %01X, %d
Line 2098: [INTERNAL_CHANNEL] need to check another pdp context %d %d
Line 2122: [INTERNAL_CHANNEL] Rabm_FindNsapi : %01X, %d
Line 2132: [INTERNAL_CHANNEL] Rabm_FindNsapi : %01X, %d
Line 2143: [INTERNAL_CHANNEL] Rabm_FindNsapi : %01X
Line 2157: [INTERNAL_CHANNEL] Rabm_FindNsapiIPv6 : NSAPI : %d, Invalid IP Type : %d
Line 2175: [INTERNAL_CHANNEL] Next Header: %X, %X
Line 2193: [INTERNAL_CHANNEL] Flow label: %X%X%X, %X, %X
Line 2206: [INTERNAL_CHANNEL] Remote IPv6: 
Line 2207: IPv6 Addr
Line 2217: [INTERNAL_CHANNEL] Local port : %X, %X
Line 2224: [INTERNAL_CHANNEL] Remote port : %X, %X
Line 2231: [INTERNAL_CHANNEL] Local port range: %X, %X, %X
Line 2238: [INTERNAL_CHANNEL] Dst port range: %X, %X, %X
Line 2264: [INTERNAL_CHANNEL] Rabm_FindNsapiIPv6: %01X, %d
Line 2272: [INTERNAL_CHANNEL] Rabm_FindNsapiIPv6: %01X, %d
Line 2313: [INTERNAL_CHANNEL] Rabm_FindNsapiIPv6 : Primary Nsapi (%01X),  SID (%d) TFT (%d) 
Line 2320: [INTERNAL_CHANNEL] Rabm_FindNsapiIPv6 : Primary Nsapi (%01X),  SID (%d)  TFT (%d) 
Line 2346: [INTERNAL_CHANNEL] Rabm_FindNsapiIPv6 : NSAPI %d, TFT idx %d, iFind %d, higer_precedence_value %d, precedence_value %d
Line 2370: [INTERNAL_CHANNEL] check precedence: higer %d, cur %d,  Find %d
Line 2380: [INTERNAL_CHANNEL] TFT MATCH : Keep nsapi %d
Line 2385: [INTERNAL_CHANNEL] TFT MATCH : Find, temp nsapi %d
Line 2390: [INTERNAL_CHANNEL] TFT MATCH : Current Nsapi (%01X), Primary is %01X, %d
Line 2394: [INTERNAL_CHANNEL] need to check another pdp context %d %d
Line 2419: [INTERNAL_CHANNEL] Rabm_FindNsapiIPv6 : %01X
Line 2434: [ERROR_CHANNEL] Rabm_PsGetSIDFromNsapi : Invalid Nsapi : %d
Line 2497: [CONTROLCHANNEL] rabmGetVCPState : GCF MODE!!!, VCP : %d
Line 2526: [CONTROLCHANNEL] UE is not in 3G.RabmAsNonUmtsRatMode  %d Get_NASU_Common()->isMounted %d
Line 2551: [CONTROLCHANNEL] rabm_SetSupportLocalPdpReset : Set Local Pdp reset %d
Line 2563: [CONTROLCHANNEL] rabm_SetMultiRbExistence : Current Value %d
Line 2569: [CONTROLCHANNEL] rabm_GetMultiRbExistence : Current Value %d
Line 2584: [CONTROLCHANNEL] rabm_CheckCSRabPresent: TRUE  CS Rab %01X is Active 
Line 2617: [CONTROLCHANNEL] rabm_PsQueueFlush: pBuffer(0x%X) free  (NSAPI %d)
Line 2667: [CONTROLCHANNEL] rabm_CalcCurPdpCnt: Active Pdp %d, %d, %d
Line 2675: [CONTROLCHANNEL] rabm_CalcCurPdpCnt: cnt %d
Line 2688: [ERROR_CHANNEL] rabm_GetAllocatedRabId: Idx is out of range %d
Line 2720: [CONTROLCHANNEL] ======== NSAPI %d UL/DL statistic (SID %d, State %d, SIM Type %d) ==========
Line 2721: [CONTROLCHANNEL]  DL data counts : %d
Line 2722: [CONTROLCHANNEL] =========================================================
Line 2742: [INTERNAL_CHANNEL] rabm_GetDomesticSimCardType : %d
Line 2755: [INTERNAL_CHANNEL] rabm_SetIsFDTriggered : %d
Line 2769: [CONTROLCHANNEL] rabm_SetDl_counts : %d, %d
Line 2786: [CONTROLCHANNEL] rabm_KeepFD_Req : %d
Line 2805: [CONTROLCHANNEL] rabm_CheckActiveRabAndMultiplePdp(): NSAPI = %d, ntPdp = %d, RAB RAB_ACTIVE
Line 2813: [CONTROLCHANNEL] rabm_CheckActiveRabAndMultiplePdp(): RAB state = %d, CntPdp = %d  
Line 2827: [CONTROLCHANNEL] DeactivationInProgress for NSAPI %d 

Line 2833: [CONTROLCHANNEL] more than two Active PDP contexts (%d) 
Line 982: [CONTROLCHANNEL] Rabm_CsUlTimerStart
Line 986: [CONTROLCHANNEL] Rb %02X, Size %d, No %d, TTI %d
Line 993: [ERROR_CHANNEL] OutNoOfPackets --> 1
Line 998: [CONTROLCHANNEL] Rb %02X, TTI Changed to %d, Count to %d
Line 1003: [ERROR_CHANNEL] Invalid OutPacketSize = %d
Line 1009: [ERROR_CHANNEL] Invalid OutNoOfPackets = %d
Line 1015: [ERROR_CHANNEL] Invalid OutTti = %d
Line 1026: [CONTROLCHANNEL] BitsPerPacket %d, PacketsPerTti %d, FramesPerTti %d, TicksPerSecond %d, TicksElapsed %d
Line 1038: [CONTROLCHANNEL] Rabm_CsUlTimerStop: Rb %02X
Line 1552: [CS_UPLINK] rabm_CsUlGetPacket: RbId  %d, Rab %d Rab State %d 
Line 1556: [ERROR_CHANNEL] BitsNeeded == 0
Line 1562: [ERROR_CHANNEL] RbId is UNUSED_RB, RAB released already Ignore CS UL Data
Line 1617: [ERROR_CHANNEL] smc_MemNewMob failed
Line 1629: [ERROR_CHANNEL] Too many loops, needed: %d, added %d
Line 1522: [ERROR_CHANNEL] rabm_CsUlGetNextBuffer: Cannot attach handle
