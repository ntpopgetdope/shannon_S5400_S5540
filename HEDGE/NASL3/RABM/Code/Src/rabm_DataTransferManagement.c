Line 168: [CONTROLCHANNEL] NASU common  Mounted
Line 192: [CONTROLCHANNEL] NASU common not Mounted yet
Line 237: [RABM_FD] rabm_DecodeRabm_ApDataDormantInd() : Rcv RABM_APDATA_DORMANT_REQ (%d/%d/%d)
Line 238: [RABM_FD] FastDormancy_T323NotPresent = %d , AS_Release8_Supp_Ind = %d 
Line 243: [RABM_FD] PDP Activation CNF, Not sending FD_REQ to GMM
Line 250: [RABM_FD] Support FD(AS_R8_Ind)
Line 254: [RABM_FD] Support FD(FD_T323Not)
Line 259: [RABM_FD] FD Disabled(%d/%d)
Line 291: [RABM_FD] Save FD Information 
Line 307: [RABM_FD] FD_REQ is not triggered by RABM (%d, %d) 
Line 323: [RABM_FD] FD_REQ is not triggered by RABM (%d, %d) 
Line 331: [RABM_FD] Current RABM state(RABM_ACTIVATE_PENDING), Not sending FD_REQ 
Line 335: [RABM_FD] Current RABM state(Unexpected), Not sending FD_REQ 
Line 343: [RABM_FD] Rvd GMMRABM_FD_REJ from GMM, KeepFD_req set TRUE 
Line 349: [RABM_FD] Rvd GMMRABM_FD_AVAILABLE_IND from GMM, 
Line 364: [VCP] rabm_DecodeVCPSetReq(%d/%d/%d/%d)
Line 421: [VCP] VCP enabled(%d/%d/%d)
Line 426: [VCP] VCP disabled(%d/%d/%d)
Line 432: [VCP] VCP disabled(%d/%d/%d)
Line 442: [CONTROLCHANNEL] rabm_DecodeRabmGmmCallNtf: GMMRABM_GMM_CSCALL_NTF is ignored
Line 472: [VCP] VCP enabled (%d/%d, %d)

Line 480: [VCP] rabm_DecodeUserDataReqMsg() : VCP disabled (%d/%d, %d)

Line 485: [VCP] rabm_DecodeUserDataReqMsg() : VCP disabled (%d/%d, %d)

Line 528: [ERROR_CHANNEL] rabm_DecodeUserDataReqMsg: Dereferencing a Null Pointer (%08X, 0x%X)
Line 534: [CONTROLCHANNEL] DeactivationInProgress for NSAPI %d .... dumping UL Pkt. 

Line 585: [CONTROLCHANNEL] rabm_Timer(ul_packets:%d/dl_packets:%d) 
Line 595: [ERROR_CHANNEL] No Rb for Nsapi %01X
Line 601: [CONTROLCHANNEL] Uplink Buffer queued for (%01X/%d)
Line 605: [CONTROLCHANNEL] Uplink Buffer queued for Rab %01X and reestablish sent (%d)
Line 606: [CONTROLCHANNEL] Received_AS_EST_IND Flag = %d
Line 610: [ERROR_CHANNEL] [RABM] Not received RABMAS_RAB_ESTABLISH_IND msg
Line 618: [VCP] VCP enabled (%d), SIM Type %d

Line 632: [ERROR_CHANNEL] Invalid State, Uplink Data discard for Rab %01X(%d)
Line 639: [CONTROLCHANNEL] RABM suspended, Reestablish sent, Uplink Buffer queued, Rab %01X
Line 640: [CONTROLCHANNEL] Current RAB state is %d (%d)
Line 646: [VCP] VCP enabled (%d)

Line 658: [CONTROLCHANNEL] RABM awaiting ACTIVATE, Uplink Buffer queued  %01X 
Line 659: [CONTROLCHANNEL] Current RAB state is %d (%d, %d)
Line 663: [ERROR_CHANNEL] RABM UL Data received in unknown RABM state %08X
Line 826: [ERROR_CHANNEL] SendPsDownlinkLoopbackBackData: Mob is NULL !!(Nsapi : %d)
Line 835: [ERROR_CHANNEL] SendPsDownlinkLoopbackBackData: DataPtr is NULL (Nsapi : %d)
Line 845: [PS_DOWNLINK] SendPsDownlinkLoopbackBackData(%01X)
Line 849: [ERROR_CHANNEL] SendPsDownlinkLoopbackBackData: Nsapi not mapped for RB %01X
Line 864: [FREEING_NASU_BUFF] SendPsDownlinkLoopbackBackData: Freeing SMC Buffer: 0x%X (Nsapi : %d)
Line 865: [RABM_DOWNLINK] SendPsDownlinkLoopbackBackData: Rb %d, DL IP-ID: %02X %02X, Size %d, Nsapi %d
Line 870: [INTERNAL_CHANNEL] Single, Rel, Sizse : %d
Line 871: [LoopBack]
Line 875: [CONTROLCHANNEL] SimInstance : 0x%X (0x%8X) ret : %d
Line 887: [ERROR_CHANNEL] SendPsDownlinkLoopbackBackData() : NULL return
Line 895: [CONTROLCHANNEL] SimInstance : 0x%X (0x%8X) ret : %d
Line 909: [ERROR_CHANNEL] SduMsgQ is NULL
Line 914: [ERROR_CHANNEL] SduMsgQ is NULL
Line 927: [ERROR_CHANNEL] SduMsgQ->DlSduDataInfo[%d].Data is NULL
Line 937: [ERROR_CHANNEL] SendPsDownlinkLoopbackBackData: DataPtr is NULL !!(Nsapi : %d)
Line 944: [RABM_DOWNLINK] SendPsDownlinkLoopbackBackData: Rb %d, DL IP-ID: %02X %02X, Size %d, nIP %d, nth %d, Nsapi %d
Line 951: [ERROR_CHANNEL] SendPsDownlinkLoopbackBackData() : NULL return
Line 960: [CONTROLCHANNEL] SimInstance : 0x%X (0x%8X) ret : %d
Line 986: [ERROR_CHANNEL] SendPsDownlinkData: Send Error : %d
Line 991: [ERROR_CHANNEL] SendPsDownlinkData: No Nasu_buff Buffer : %d
Line 1032: [ERROR_CHANNEL] pal_memAllocateList() : NULL return
Line 1057: [ERROR_CHANNEL] SendPsDownlinkData() : hostifSendDataPacket IPv4 send error
Line 1090: [ERROR_CHANNEL] Lack of List : %d
Line 1114: [ERROR_CHANNEL] pal_memAllocateList() : NULL return: %d
Line 1148: [ERROR_CHANNEL] uiIPVersion is wrong : 
Line 1152: [ERROR_CHANNEL] SendPsDownlinkData() : Send MultiList error
Line 1173: [ERROR_CHANNEL] SendPsDownlinkData: Mob is NULL !!(Nsapi : %d)
Line 1179: [ERROR_CHANNEL] SendPsDownlinkData() : unknown Release Type
Line 1188: [ERROR_CHANNEL] SendPsDownlinkData: DataPtr is NULL or more than 1534Bytes (Nsapi : %d, size : %d)
Line 1198: [PS_DOWNLINK] SendPsDownlinkData(%01X)
Line 1205: [ERROR_CHANNEL] SendPsDownlinkData: Nsapi not mapped for RB %01X
Line 1250: [ERROR_CHANNEL] SendPsDownlinkData:sid %d not valid for RB %01X
Line 1265: [FREEING_NASU_BUFF] SendPsDownlinkData: Freeing SMC Buffer: 0x%X (Nsapi : %d)
Line 1266: [RABM_DOWNLINK] SendPsDownlinkData: Rb %d, DL IP-ID: %02X %02X, SID %d, Size %d, Nsapi %d
Line 1268: [RABM_DOWNLINK] SendPsDownlinkData: MultipleIpData : FALSE Rb %d, DL IP-ID: %02X %02X, SID %d, Size %d, Nsapi %d
Line 1269: [TCP DUMP:DL]
Line 1329: [ERROR_CHANNEL] SendPsDownlinkData: DataPtr is NULL or more than 1534 bytes(Nsapi : %d, size : %d)
Line 1340: [RABM_DOWNLINK] FirstIPversion:	%d
Line 1345: [RABM_DOWNLINK] SendPsDownlinkData: MultipleIpData : TRUE Rb %d, DL IP-ID: %02X %02X, SID %d, Size %d, nth %d, Nsapi %d
Line 1346: [TCP DUMP:DL]
Line 1353: [RABM_DOWNLINK] SendPsDownlinkData: MultipleIpData : TRUE Rb %d, DL IP-ID: %02X %02X, SID %d, Size %d,nth %d, Nsapi %d
Line 1354: [TCP DUMP:DL]
Line 1382: [ERROR_CHANNEL] SendPsDownlinkData: Send Error : %d
Line 1387: [ERROR_CHANNEL] SendPsDownlinkData: No Nasu_buff Buffer : %d
Line 1395: [ERROR_CHANNEL] Invalid Release Type : %d
Line 1421: [ERROR_CHANNEL] SendPsDownlinkData() : Send MultiList error
Line 1427: [ERROR_CHANNEL] SendPsDownlinkData() : pStaticMacHeader is NULL
Line 1438: [ERROR_CHANNEL] SendPsDownlinkData() : pFirstList is NULL
Line 1488: [ERROR_CHANNEL] SduMsgQ->DlSduDataInfo[%d].Data is NULL
Line 1514: [ERROR_CHANNEL] Lack of List: %d, nIP %d, nth %d
Line 1545: [ERROR_CHANNEL] pal_memAllocateList() : NULL return: %d, nth %d
Line 1603: [ERROR_CHANNEL] [RABM] Error!!! prevlastLink is NULL
Line 1646: [ERROR_CHANNEL] SduMsgQ->DlSduDataInfo[%d].Data is NULL
Line 1670: [ERROR_CHANNEL] Lack of List : %d
Line 1693: [ERROR_CHANNEL] pal_memAllocateList() : NULL Process next IP packet: %d
Line 1734: [ERROR_CHANNEL] Send MultiList error: cause %d
Line 1756: [ERROR_CHANNEL] SendPsDownlinkData:sid %d not valid for RB %d, nIP %d
Line 1762: [ERROR_CHANNEL] SduMsgQ->DlSduDataInfo[%d].Data is NULL
Line 1796: [ERROR_CHANNEL] SduMsgQ is NULL
Line 1835: [ERROR_CHANNEL] SendCsDirectData: pListData is NULL
Line 1842: [ERROR_CHANNEL] SendCsDirectData: No HostIfMem for Rab %01X, data discarded
Line 1856: [CS_DOWNLINK] SendCsDirectData: Send to HostIf (SID : %d, RabId : %d, Size : %d)
Line 1867: [ERROR_CHANNEL] SendPsDownlinkData() : hostifSendListData VT send error
Line 1876: [ERROR_CHANNEL] SendCsDirectData: Rab %01X not in use
Line 1936: [ERROR_CHANNEL] SendCsDownlinkData: Rb %01X Not mapped to a Rab
Line 1986: [ERROR_CHANNEL] SendCsDownlinkData: Rb %01X Datatype not configured
Line 1991: [ERROR_CHANNEL] SendCsDownlinkData: Unknown Datatype %d for Rb %01X
Line 2034: [ERROR_CHANNEL] SendUplinkVoice: No RbId for Subflow %d for Rab %d
Line 2044: [CS_DOWNLINK] rabm_DecodeVcgDataReq
Line 2098: [ERROR_CHANNEL] rabm_MMPortDoControl: Unhandled Control Code: %04X
Line 2142: [CONTROLCHANNEL] rabmUmac_TickSubscribe %x
Line 2161: [CONTROLCHANNEL] rabmUmac_TickUnsubscribe %x
Line 2166: [CONTROLCHANNEL] rabmUmac_TickUnsubscribe: UlTimerId is NULL
Line 2217: [CONTROLCHANNEL] CS_DATA_TICK_SUBSCRIBE %x
Line 2224: [CONTROLCHANNEL] CS_DATA_TICK_UNSUBSCRIBEed %x
Line 2230: [CONTROLCHANNEL] rabmUmacPortHandler: Unknown message
Line 2277: [CONTROLCHANNEL] Invalid Nsapi:  %d 
Line 2301: [CONTROLCHANNEL] Invalid Nsapi:  %d 
Line 2074: [FREEING_NASU_BUFF] UL: Detach Segment handle iReferenceP: %08X
Line 2078: [FREEING_NASU_BUFF] UL: Handover Segment handle iReferenceP: %08X
Line 2082: [ERROR_CHANNEL] rabm_NasuMMPortURQF: Unhandled Service: %04X
Line 2058: [ERROR_CHANNEL] rabm_NasuMMPort: Unexpected call, Token %08X
