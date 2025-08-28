Line 136: [ERROR_CHANNEL] rabm_SendRabmAsRabEstblResMsg(): NULL pointer, Don't send message to RRC
Line 140: [CONTROLCHANNEL] rabm_SendRabmAsRabEstblResMsg(): Send RABMAS_RAB_ESTABLISH_RES msg to URRC
Line 156: [CONTROLCHANNEL] rabm_SendRabmAsRabEstblRejMsg(): NULL Pointer, Don't send message to RRC
Line 168: [ERROR_CHANNEL] rabm_SendRabmAsRabEstblRejMsg(): NULL pointer, Message->Payload.RabList
Line 176: [CONTROLCHANNEL] rabm_SendRabmAsRabEstblRejMsg(): Send RABMAS_RAB_ESTABLISH_REJ msg to URRC
Line 195: [CONTROLCHANNEL] rabm_SendRabmSmActivateRspMsg(): Send RABMSM_ACTIVATE_RSP msg to SM
Line 221: [CONTROLCHANNEL] rabm_SendRabmSmDeactivateRspMsg(): Send RABMSM_DEACTIVATE_RSP msg to SM
Line 246: [CONTROLCHANNEL] RABMSM_DEACTIVATE_RSP: PDP Cnt: %d ActiveStack %d
Line 250: [CONTROLCHANNEL] RABMSM_DEACTIVATE_RSP: PDP Cnt: %d ActiveStack %d
Line 262: [CONTROLCHANNEL] rabm_SendRabmSmModifyRspMsg(): Send RABMSM_MODIFY_RSP msg to SM
Line 288: [ERROR_CHANNEL] rabm_SendRabmSmStatusReqMsg: isUtranCommercialPlmnId %d, don't send msg to sm
Line 293: [CONTROLCHANNEL] rabm_SendRabmSmStatusReqMsg: Send RABMSM_STATUS_REQ msg to SM %d 
Line 326: [CONTROLCHANNEL] rabm_SendGmmRabmRestblReqMsg() : NSAPI = %d.  Data Pending = %d  Not Sending GMMRABM_REEST_REQ
Line 346: [CONTROLCHANNEL] rabm_SendGmmRabmRestblReqMsg() : Send GMMRABM_REEST_REQ to GMM, NSAPI = %d. RB existence = %d Data Pending = %d
Line 380: [CONTROLCHANNEL] rabm_SendGmmRabmRbStatusIndMsg() : Send GMMRABM_RB_STATUS_IND to GMM, RB existence = %d, Nsapi = %d, RbId = %d, domain=%d
Line 401: [RABM_FD] rabm_SendGmmRabmFdReqMsg : Send GMMRABM_FD_REQ to GMM (%d)
Line 422: [RABM_FD] rabm_SendGmmRabmFdReqMsg : Send rabm_SendGmmRabmUlDlTriggeredMsg to GMM (%d)
Line 443: [CONTROLCHANNEL] rabm_SendMmCloseLoopCnf : Send GMMRABM_CLOSE_UE_TEST_LOOP_CNF to Stack%d
Line 464: [CONTROLCHANNEL] rabm_SendMmOpenLoopCnf : Send GMMRABM_OPEN_UE_TEST_LOOP_CNF to Stack%d
Line 488: [CONTROLCHANNEL] rabm_SendGmmRabmDataActivitiyStatusIndMsg : Send GMMRABM_DATA_ACTIVITY_STATUS_IND
Line 511: [ERROR_CHANNEL] CreateUmtsMessage: Null Pointer, as_CreateUmtsMsg_SMC
Line 552: [CONTROLCHANNEL] rabm_SendLoopbackMode1StartReq: DcchDummy %d, LBSetupPresent %d
Line 565: [ERROR_CHANNEL] LbCount %d Too large, set to 4
Line 575: [ERROR_CHANNEL] rabm_SendLoopbackMode1StartReq: Null pointer, OutMessage->Payload.RbInfo 
Line 589: [CONTROLCHANNEL] LbSetup [0..2] %02X %02X %02X, RbId %01X, PduSize %d
Line 601: [ERROR_CHANNEL] OutMessage in rabm_SendLoopbackMode1StartReq is NULL
Line 617: [CONTROLCHANNEL] rabm_SendL2ActivateRbTestModeReq : Send message to UMAC (Mode : %d)
Line 641: [ERROR_CHANNEL] rabm_SendVcgDataInd: Null pointer
Line 666: [ERROR_CHANNEL] rabm_SendVcgSyncInd: Null pointer
Line 688: [ERROR_CHANNEL] rabm_SendVcgUlTfInd: Null pointer 
Line 709: [CONTROLCHANNEL] rabm_SendSavedFD_Req uiCntPdp %d, ucDeactInprogress %d(ul %d %d), (dl %d, %d)
Line 714: [CONTROLCHANNEL] rabm_SendSavedFD_Req(): Send the saved FD_REQ 
Line 103: [ERROR_CHANNEL] rabm_SendUmtsMessage failed, %08X
Line 74: [ERROR_CHANNEL] rabm_AllocateMessageBuffer, Get Memory failed
Line 122: [ERROR_CHANNEL] rabm_SendRtkMessage failed, %08X
