Line 190: [IMSSH_SendGrantReleasePerAppId] For pAppDb[%p], AppId [%d], service[0x%x], Pdnservice[0x%x]
Line 221: [IMSSH_SendGrantReleasePerAppId] IMS Stack id [%d] , IMS Proc Status [%d], IMS Event Type [%d] AppId [%d]
Line 227: Error in sending Int Msg
Line 271: IMSSH_SendImsStackReleaseUpdate: Status %d, SrcModule %d, StackId %d, EventType %d, SessionId %d
Line 313: Error pSessDb is null
Line 620: [IMSSH_SendSrncReqAndStartTimer] StackId: %d Invalid OR Invalid DSDS Node
Line 658: Grant is already Requested, Wait to Standby Response
Line 685: [IMSSH_SendSrncResumeReq] StackId: %d Invalid
Line 700: Updating Stack Id from %d to %d [%s]
Line 702: Updated Stack [%s], VoMobile TRUE so taking grant from other stack id;
Line 718: [IMSSH_SendSrncResumeReq] [%s], Proc %d (%s)
Line 730: [IMSSH_SendSrncResumeReq] txMsg -> NULL
Line 735: [IMSSH_SendSrncResumeReq] sendMsgDsc -> NULL
Line 759: [IMSSH_SendSrncStandbyReq] StackId: %d Invalid
Line 774: Updating Stack Id from %d to %d [%s]
Line 776: Updated Stack [%s], VoMobile TRUE so taking grant from other stack id
Line 795: [IMSSH_SendSrncStandbyReq] [%s], Proc %d (%s)
Line 818: [IMSSH_SendSrncStandbyReq] txMsg -> NULL
Line 823: [IMSSH_SendSrncStandbyReq] sendMsgDsc -> NULL
Line 855: [IMSSH_SendSrncDeregisterReq] sendMsgDsc -> NULL
Line 889: [IMSSH_SendSrncRegisterReq] sendMsgDsc -> NULL
Line 906: [IMSSH_ProcessSrncRegRsp] Response : [%d]
Line 977: [IMSSH_ProcessSrncStandbyRsp] StackId: %d Invalid
Line 988: [IMSSH_ProcessSrncStandbyRsp] [%s], SRNC State %d (%s), Current SRNC State %d (%s)
Line 992: [IMSSH_ProcessSrncStandbyRsp] pMsg->SrncState %d, pMsg->CurrSrncState %d
Line 1022: [IMSSH_ProcessSrncStandbyRsp] Requested for CSPS_SIG Grant & its rejected; Resetting the GrantRequest Status for CSPS_SIG
Line 1030: [IMSSH_ProcessSrncStandbyRsp] Resetting SRNC_CSPSSIG Grant Request Status, After DSDS timer expiry, it will be requested again
Line 1093: [IMSSH_ProcessSrncStandbyRsp] [%s] - RF is not ready for Processing IMS Request, Wait for RF Release Indication from SRNC
Line 1114: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1125: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1130: [IMSSH_ProcessSrncStandbyRsp] SRNC State -> CSCALL for IMS, MAX Grant Timer is not started
Line 1160: [IMSSH_ProcessSrncStandbyRsp] CSPSSIG not Granted in Standby Resp
Line 1167: [IMSSH_ProcessSrncStandbyRsp] GrantRequestStatus Resumed Already. so, Do Nothing.
Line 1193: [IMSSH_ProcessSrncGrantRelInd] StackId: %d Invalid
Line 1205: [IMSSH_ProcessSrncGrantRelInd] [%s] - For Procedure %d (%s)
Line 1222: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1227: [IMSSH_ProcessSrncGrantRelInd] SRNC Timer not Running
Line 1233: [IMSSH_ProcessSrncGrantRelInd] Procedure Type Mismatch
Line 1265: [IMSSH_ProcessSrncGrantRelInd] No Pending Msg to be processed, Send SRNC Resume
Line 1296: [IMSSH_ProcessSrncStandbyInd] Call has been triggered local [%s], IsFeDvOn %d
Line 1325: [IMSSH_ProcessSrncStandbyInd] CS Call is avaiable with current stack, release the grant to allow high priorty job on peer stack [%s]
Line 1378: [IMSSH_ProcessSrncActivateInd] XX_Call has been ended on Opposite Stack
Line 1397: [IMSSH_ProcessSrncActivateInd] Getting First Pending Node for Local [%s]
Line 1419: [IMSSH_ProcessSrncActivateInd] In case of Reg/ReReg, DSDS_REG Timer Expiry handler will be callled, No Action here
Line 1427: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1433: [IMSSH_ProcessSrncActivateInd] SRNC Timer not Running
Line 1438: [IMSSH_ProcessSrncActivateInd] No Pending Msg to be processed
Line 1447: [IMSSH_ProcessSrncActivateInd] Resetting CSCALL Grant Request Status
Line 1486: [IMSSH_ProcessSrncActivateInd] Local dereg was done while ongoing call on other stack!! Perform Fresh reg
Line 1487: [IMSSH_ProcessSrncActivateInd] Holding Pending Reg until the stack is completely Resumed, Reg will be performed after Network Registration Notification
Line 1488: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 1517: [IMSSH_Handle_VoMobileEventInd] [%s]
Line 1520: [IMSSH_Handle_VoMobileEventInd]Vomobile not enabled, ignore the received message  
Line 1546: [IMSSH_Handle_VoMobileEventInd] Unexpected event type:%d  
Line 1850: [IMSSH_ProcessCallSetupReqExternally] AppId [%d], Call Triggered on AppIdRAT [%d]
Line 1855: [IMSSH_ProcessCallSetupReqExternally] Call Setup Req is for WIFI, Ignore SRNC Required as FALSE
Line 1867: [IMSSH_ProcessCallSetupReqExternally] : Result : [%d]
Line 1894: [IMSSH_ProcessDeRegReqExternally] AppId [%d], AppIdRAT [%d]
Line 1898: [IMSSH_ProcessDeRegReqExternally] DeRegReq is for WIFI, Ignore SRNC Required as FALSE
Line 1909: [IMSSH_ProcessDeRegReqExternally] : Result : [%d]
Line 2013: [IMSSH_CheckRadioReqMsg] Appid Filled : [%d]
Line 2053: Rxd Stack id :[0x%x] ; Filling Default Stack Values
Line 2201: Not Expected : Check Src Mail Box
Line 2249: [IMSSH_AddtoDsMsgList] Allocation for Node Failed
Line 2254: [IMSSH_AddtoDsMsgList] pRcvdMsg is NULL
Line 426: [IMSSH_SetPreviousSrncState] PrevSrncState: %d Invalid
Line 450: [IMSSH_SetPreviousSrncState] PendingProcType: %d, ProcType: %d, SrncState %d, ResetGrantStatus:%d
Line 525: [IMSSH_SetPreviousSrncState] NeedToUpdate, setting SRNC State to %d for [%s]
Line 530: [IMSSH_SetPreviousSrncState] Skip. as PrevSrncState is %d (%s)
Line 536: [IMSSH_SetPreviousSrncState] No Pending Proc, setting SRNC State to IDLE for [%s]
Line 952: DSDS Pending List is Empty
Line 1697: IMS is over Wi-Fi or VoMobile, this case SVC always send COMMON_SVC_INFO REQ before PDN_SET_REQ
Line 1731: IMS is not on Wi-Fi, this case SVC don't send COMMON_SVC_INFO REQ
Line 1753: Ext Msg Body Ptr -> NULL
Line 1797: Network Reg Status : [%d]
Line 1802: IMS on [Wifi/Incompatible Network State] to process Normal SMS Request
Line 1808: [ERROR] APPDB Is not Found, Error scenario
Line 1812: SMS Request AppId : [%d]
Line 1816: SMS Est Req Ptr -> NULL
Line 1659: --------- [IMSSH_DetermineDsDsEventInfo] Invalid Event [%d] -----------
