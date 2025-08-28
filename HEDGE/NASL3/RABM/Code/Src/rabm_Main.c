Line 310: [CONTROLCHANNEL] Umts RATMode(from URRC).... RABM timers and buffer creation
Line 318: [ERROR_CHANNEL] rabm_DataInitialise: not Initialise data(Ps Rab: %01X)
Line 337: [ERROR_CHANNEL] rabm_DataInitialise: not Initialise data(Cs Rab: %01X)
Line 353: [ERROR_CHANNEL] Timer Init Fail
Line 367: [CONTROLCHANNEL] rabm_DlWatchTimerInit() :Creation failed %d 
Line 375: [CONTROLCHANNEL] rabm_SesstionTimerInit() :Creation failed %d 
Line 438: [ERROR_CHANNEL] rabm_ParseVcgMessage: Unexpected Message type: %08X
Line 488: [CONTROLCHANNEL] RABMSM_INIT_REQ received! 
Line 499: [CONTROLCHANNEL] RABMSM_ACTIVATE_IND received! RabmAsNonUmtsRatMode set FALSE!
Line 538: [CONTROLCHANNEL] GMMRABM_OPEN_UE_TEST_LOOP_REQ: SimInstance %d 
Line 592: [ERROR_CHANNEL] L2Data_RABM_Control_Event_Handler: RABM_VOICE_CALL_PROTECT_SET_REQ is ignored (SIM type %d
Line 617: [ERROR_CHANNEL] L2Data_RABM_Control_Event_Handler: Unexpected Message type: %04X
Line 662: [CONTROLCHANNEL] rabm_ParseUrrcMessage: Rcv RABMAS_UMTSRATMODE_IND, Init RABM state to RABM_SUSPENDED
Line 675: [ERROR_CHANNEL] L2Data_RABM_Control_Event_Handler: Unexpected Message type: %04X
Line 753: [ERROR_CHANNEL] rabm_ParseMessage: Message from PDCP should not arrive here
Line 764: [ERROR_CHANNEL] rabm_ParseMessage: Message from unexpected source: %04X
Line 806: [ERROR_CHANNEL] Rabm_PDCP_STF: DataPtr is NULL !!(RbId : %d)
Line 816: [ERROR_CHANNEL] Rabm_PDCP_STF: Downlink data for unconfigured Rb %01X
Line 832: [ERROR_CHANNEL] Rabm_PDCP_STF: uiReleaseType %d MultipleIpData %d IpCount %d
Line 842: [ERROR_CHANNEL] Rabm_PDCP_STF: freeing PacketHandler %x
Line 851: [ERROR_CHANNEL] Rabm_PDCP_STF: MultipleIpData==TRUE but SduMsgQ==NULL uiReleaseType %d
Line 868: [ERROR_CHANNEL] Rabm_PDCP_STF: uiReleaseType %d MultipleIpData %d IpCount %d
Line 876: [ERROR_CHANNEL] Rabm_PDCP_STF: freeing PacketHandler %x
Line 885: [ERROR_CHANNEL] Rabm_PDCP_STF: MultipleIpData==TRUE but SduMsgQ==NULL uiReleaseType %d
Line 897: [ERROR_CHANNEL] Rabm_PDCP_STF: DataPtr is NULL !!(RbId : %d)
Line 901: [ERROR_CHANNEL] Rabm_PDCP_STF: Invalid RBtype %d for Rb %01X
Line 929: [CONTROLCHANNEL] rabm_ProcessCumacAvailableBitrateInd: CUMAC_AVAILABLE_BITRATE_IND, RbId %01X, RabId %01X, TotalUiBits %d
Line 932: [ERROR_CHANNEL] CUMAC_AVAILABLE_BITRATE_IND, Unknown RbId %01X, BitRate %d
Line 947: [CONTROLCHANNEL] CUMAC_AVAILABLE_BITRATE_IND for RabId %01X, not Voice
Line 1047: [ERROR_CHANNEL] Rabm_CdhSTF: Unexpected Command %d
Line 160: [CONTROLCHANNEL] rabm_ProcessRatModeChangeInd: Status %02X, Mode %02X
Line 181: [ERROR_CHANNEL] rabm_ProcessNonUmtsRatModeInd : Data returned to pkt handler: %d
Line 186: [ERROR_CHANNEL] rabm_ProcessNonUmtsRatModeInd : Data Not returned to pkt handler: %d FREED
Line 213: [CONTROLCHANNEL] Rat changing, VCP disabled (NS_RAT_GSM)
Line 220: [CONTROLCHANNEL] Rat changing, VCP disabled (NS_RAT_GSM)
Line 278: [CONTROLCHANNEL] Rat changing, VCP disabled (NS_RAT_LTE)
Line 285: [CONTROLCHANNEL] Rat changing, VCP disabled (NS_RAT_LTE)
Line 292: [ERROR_CHANNEL] rabm_ProcessRatModeChangeInd: Unknown Status %d
Line 298: [ERROR_CHANNEL] rabm_ProcessRatModeChangeInd: Unknown Rat %d
Line 395: [ERROR_CHANNEL] rabm_ProcessTriggerInd: Dereferencing a Null Pointer (0x%X, %d)
Line 399: [CONTROLCHANNEL] rabm_ProcessTriggerInd: Cause %02X, Nsapi %02X
Line 131: [CONTROLCHANNEL] GMMRABM_CLOSE_UE_TEST_LOOP_REQ: SimInstance %d 
Line 123: [CONTROLCHANNEL] rabm_ProcessGMMOpenLoopReq
Line 383: [CONTROLCHANNEL] NonUmts RATMode(from GMM)....Deactivating all CS/PS data
Line 146: [CONTROLCHANNEL] rabm_ProcessGMMActivateRbTestModeReq : Received GMMRABM_ACTIVATE_RB_TEST_MODE_REQ
Line 153: [CONTROLCHANNEL] rabm_ProcessGMMActivateRbTestModeReq : Received GMMRABM_DEACTIVATE_RB_TEST_MODE_REQ
Line 982: [ERROR_CHANNEL] rabm_ParseL2LoopbackMessage: Unexpected Message type: %08X
Line 109: [CONTROLCHANNEL] CdhCallSetup: Rab: %01X, Gda %d , ucRabmCallActiveStack %d
Line 116: [CONTROLCHANNEL] CdhCallClearDown: Rab: %01X, Gda %d, ucRabmCallActiveStack %d
