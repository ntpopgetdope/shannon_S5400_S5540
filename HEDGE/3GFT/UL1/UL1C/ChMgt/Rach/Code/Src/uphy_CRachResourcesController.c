Line 289: Instance created for stackId %d
Line 289: Instance created for stackId %d
Line 344: >>>>>> RACH_MESSAGE CNT %d
Line 344: >>>>>> RACH_MESSAGE CNT %d
Line 436: uphy_CRachResourcesController_calculateGainFactors: rachInfo == NULL
Line 436: uphy_CRachResourcesController_calculateGainFactors: rachInfo == NULL
Line 512: uphy_CRachResourcesController_triggerStartRACH: EUphyRachResourcesControllerMsgIdEnumMsgId_RachDataReq on SFN %d
Line 512: uphy_CRachResourcesController_triggerStartRACH: EUphyRachResourcesControllerMsgIdEnumMsgId_RachDataReq on SFN %d
Line 524: uphy_CRachResourcesController_startRACH:Submit myTimer=%d
Line 524: uphy_CRachResourcesController_startRACH:Submit myTimer=%d
Line 539: >>>>>> RACH_MESSAGE CNT %d
Line 539: >>>>>> RACH_MESSAGE CNT %d
Line 543: DSDS: RACH deleted data since RF Pause is set by DSLRC
Line 543: DSDS: RACH deleted data since RF Pause is set by DSLRC
Line 559: cctrchToEncode == 0
Line 559: cctrchToEncode == 0
Line 569: cctrchToEncode exec() failed errCode %d addErrCode %d
Line 569: cctrchToEncode exec() failed errCode %d addErrCode %d
Line 607: >>>>>> RACH_MESSAGE CNT %d
Line 607: >>>>>> RACH_MESSAGE CNT %d
Line 645: uphy_CRachResourcesController_startRACH: campingDlUarfcn does not exist
Line 645: uphy_CRachResourcesController_startRACH: campingDlUarfcn does not exist
Line 651: uphy_CRachResourcesController_startRACH: but prach already active
Line 651: uphy_CRachResourcesController_startRACH: but prach already active
Line 660: token = 0
Line 660: token = 0
Line 671: uphy_CRachResourcesController_startRACH:Submit myTimer=%d
Line 671: uphy_CRachResourcesController_startRACH:Submit myTimer=%d
Line 684: Rach power calc: %d + %d + %d = %d
Line 684: Rach power calc: %d + %d + %d = %d
Line 704: TrChId not found
Line 704: TrChId not found
Line 769: RACH_DATA_REQ queued due to ongoing Inter-Freq/IRAT resel meas under FMO
Line 769: RACH_DATA_REQ queued due to ongoing Inter-Freq/IRAT resel meas under FMO
Line 772: RSN=%d: Rach with initial power minus RSCP=%d ; maxPreambleRetransission=%d aichTransmitTiming=%d, powerOffsetPpm=%d
Line 772: RSN=%d: Rach with initial power minus RSCP=%d ; maxPreambleRetransission=%d aichTransmitTiming=%d, powerOffsetPpm=%d
Line 777: RSN=%d: Rach with initial power minus RSCP=%d; Rach Start at SFN=%d;  maxPreambleRetransission=%d aichTransmitTiming=%d powerOffsetPpm=%d
Line 777: RSN=%d: Rach with initial power minus RSCP=%d; Rach Start at SFN=%d;  maxPreambleRetransission=%d aichTransmitTiming=%d powerOffsetPpm=%d
Line 786: uhalCmdprachStart exec() failed errCode %d addErrCode %d
Line 786: uhalCmdprachStart exec() failed errCode %d addErrCode %d
Line 806: prachStartCmd == 0
Line 806: prachStartCmd == 0
Line 823: [TAS-RACH] StartRach is triggered by TAS
Line 823: [TAS-RACH] StartRach is triggered by TAS
Line 844: >>>>>> RACH_MESSAGE CNT %d
Line 844: >>>>>> RACH_MESSAGE CNT %d
Line 848: DSDS: RACH deleted data since RF Pause is set by DSLRC
Line 848: DSDS: RACH deleted data since RF Pause is set by DSLRC
Line 876: DSDS: uphy_CRachResourcesController_stopRACH Sent indication to mac after PRACH stop
Line 876: DSDS: uphy_CRachResourcesController_stopRACH Sent indication to mac after PRACH stop
Line 891: prachReleaseCmd exec() failed errCode %d addErrCode %d
Line 891: prachReleaseCmd exec() failed errCode %d addErrCode %d
Line 923: uphy_CRachResourcesController_sendDirectRfRequest: requestDslrcRfAccess sent to DSLRC interface from %d with cause %d and time %d; Result: %d
Line 923: uphy_CRachResourcesController_sendDirectRfRequest: requestDslrcRfAccess sent to DSLRC interface from %d with cause %d and time %d; Result: %d
Line 957: uphy_CUphyUrrcMessageInterface_scheduleRfReasonUpdate:
Line 957: uphy_CUphyUrrcMessageInterface_scheduleRfReasonUpdate:
Line 962: uphy_CUphyUrrcMessageInterface_cancelScheduledRfReasonUpdate:
Line 962: uphy_CUphyUrrcMessageInterface_cancelScheduledRfReasonUpdate:
Line 993: uphy_CRachResourcesController_handleTimeout
Line 993: uphy_CRachResourcesController_handleTimeout
Line 1002: >>>>>> RACH_MESSAGE CNT %d
Line 1002: >>>>>> RACH_MESSAGE CNT %d
Line 1007: Start RACH timed out
Line 1007: Start RACH timed out
Line 1044: uphy_CRachResourcesController_handleAICH
Line 1044: uphy_CRachResourcesController_handleAICH
Line 1073: PrachStart command exec() failed errCode %d addErrCode %d
Line 1073: PrachStart command exec() failed errCode %d addErrCode %d
Line 1079: uphy_CRachResourcesController_handleAICH:Cancel myTimer=%d
Line 1079: uphy_CRachResourcesController_handleAICH:Cancel myTimer=%d
Line 1085: uphy_CRachResourcesController_handleAICH:rachResourcesController_ptr->rachDataMsg=0 - Rach probably already released
Line 1085: uphy_CRachResourcesController_handleAICH:rachResourcesController_ptr->rachDataMsg=0 - Rach probably already released
Line 1096: >>>>>> RACH_MESSAGE CNT %d
Line 1096: >>>>>> RACH_MESSAGE CNT %d
Line 1105: prachStartCmd == 0
Line 1105: prachStartCmd == 0
Line 1112: uphy_CRachResourcesController_handleAICH:Cancel myTimer=%d
Line 1112: uphy_CRachResourcesController_handleAICH:Cancel myTimer=%d
Line 1120: uphy_CRachResourcesController_handleAICH:rachResourcesController_ptr->rachDataMsg=0 - Rach probably already released
Line 1120: uphy_CRachResourcesController_handleAICH:rachResourcesController_ptr->rachDataMsg=0 - Rach probably already released
Line 1129: aichIndicatorInfo exec() failed errCode %d addErrCode %d
Line 1129: aichIndicatorInfo exec() failed errCode %d addErrCode %d
Line 1141: Rach received POS from AICH
Line 1141: Rach received POS from AICH
Line 1148: Rach received NEG from AICH
Line 1148: Rach received NEG from AICH
Line 1155: Rach received NOS from AICH
Line 1155: Rach received NOS from AICH
Line 1170: >>>>>> RACH_MESSAGE CNT %d
Line 1170: >>>>>> RACH_MESSAGE CNT %d
Line 1199: uphy_CRachResourcesController_SendIndicationToMac: AICHInd=0
Line 1199: uphy_CRachResourcesController_SendIndicationToMac: AICHInd=0
Line 1213: [uphy_CRachResourcesController_SendIndicationToMac] Send Indication To MAC with Indication = %d
Line 1213: [uphy_CRachResourcesController_SendIndicationToMac] Send Indication To MAC with Indication = %d
Line 1217: cannot send
Line 1217: cannot send
Line 1235: uphy_CRachResourcesController_SendIndicationToMac: rachDataMsg==NULL
Line 1235: uphy_CRachResourcesController_SendIndicationToMac: rachDataMsg==NULL
Line 1425: Configuring Rach at SFN = %d
Line 1425: Configuring Rach at SFN = %d
Line 1434: DSDS:RACH controller receives Rf Use Response from DSLRC Message interface
Line 1434: DSDS:RACH controller receives Rf Use Response from DSLRC Message interface
Line 1445: DSDS: uphy_CRachResourcesController_process: Reset RACH configuration to init
Line 1445: DSDS: uphy_CRachResourcesController_process: Reset RACH configuration to init
Line 1454: 3G3G DSDS: uphy_CRachResourcesController_process: PauseReq Received
Line 1454: 3G3G DSDS: uphy_CRachResourcesController_process: PauseReq Received
Line 1463: DSDS:uphy_CRachResourcesController_process: RF not in use
Line 1463: DSDS:uphy_CRachResourcesController_process: RF not in use
Line 1475: DSDS:EUphyRachResourcesControllerMsgId_RfUseResumeReq: Rf Pause not enable, probably released from URRC
Line 1475: DSDS:EUphyRachResourcesControllerMsgId_RfUseResumeReq: Rf Pause not enable, probably released from URRC
Line 1507: >>>>>> RACH_MESSAGE CNT %d
Line 1507: >>>>>> RACH_MESSAGE CNT %d
Line 1509: uphy_CRachResourcesController_startRACH: but prach already active
Line 1509: uphy_CRachResourcesController_startRACH: but prach already active
Line 1523: [TAS-RACH] RX Div Enabled
Line 1523: [TAS-RACH] RX Div Enabled
Line 1534: [TAS-RACH]uphy_CRachResourcesController_StartTxASRachStf:Submit StartTxASRachStf=%d
Line 1534: [TAS-RACH]uphy_CRachResourcesController_StartTxASRachStf:Submit StartTxASRachStf=%d
Line 1539: [TAS-RACH] TAS not triggered, CurrentTxAntNum: %d 
Line 1539: [TAS-RACH] TAS not triggered, CurrentTxAntNum: %d 
Line 1548: >>>>>> RACH_MESSAGE CNT %d
Line 1548: >>>>>> RACH_MESSAGE CNT %d
Line 1550: RachDataReq process is running without RACH configuration
Line 1550: RachDataReq process is running without RACH configuration
Line 1579: >>>>>> RACH_MESSAGE CNT %d
Line 1579: >>>>>> RACH_MESSAGE CNT %d
Line 2583: RACH calculateAvailableSignatures: availableSignatures %d, aHighIndex %d, aLowIndex %d
Line 2583: RACH calculateAvailableSignatures: availableSignatures %d, aHighIndex %d, aLowIndex %d
Line 2610: Invalid Access Service Class %d, numOfAsc=%d
Line 2610: Invalid Access Service Class %d, numOfAsc=%d
Line 2639: RACH availableSubChannel configuration failed
Line 2639: RACH availableSubChannel configuration failed
Line 2755: >>>>>> RACH_MESSAGE CNT %d
Line 2755: >>>>>> RACH_MESSAGE CNT %d
Line 2772: prachReleaseCmd == 0
Line 2772: prachReleaseCmd == 0
Line 2780: prachReleaseCmd exec() failed errCode %d addErrCode %d
Line 2780: prachReleaseCmd exec() failed errCode %d addErrCode %d
Line 2811: UL trChReleaseCmd exec() failed errCode %d addErrCode %d
Line 2811: UL trChReleaseCmd exec() failed errCode %d addErrCode %d
Line 2876: RL not found in database
Line 2876: RL not found in database
Line 2881: RachResourcesController cleanDlUhalInstances: rlNr=%d, PhychNr=%d
Line 2881: RachResourcesController cleanDlUhalInstances: rlNr=%d, PhychNr=%d
Line 2887: EHalDlPhychReleaseCmd command exec() failed errCode %d addErrCode %d
Line 2887: EHalDlPhychReleaseCmd command exec() failed errCode %d addErrCode %d
Line 2915: EHalDlRlReleaseCmd command exec() failed errCode %d addErrCode %d
Line 2915: EHalDlRlReleaseCmd command exec() failed errCode %d addErrCode %d
Line 2921: RachResourcesController: SFN reset due to RlRelease. Be careful of SFN reset
Line 2921: RachResourcesController: SFN reset due to RlRelease. Be careful of SFN reset
Line 2946: EHalDlRlReleaseCmd command exec() failed errCode %d addErrCode %d
Line 2946: EHalDlRlReleaseCmd command exec() failed errCode %d addErrCode %d
Line 2952: RachResourcesController: SFN reset due to RlRelease. Be careful of SFN reset
Line 2952: RachResourcesController: SFN reset due to RlRelease. Be careful of SFN reset
Line 2966: RachResourcesController: Unexpected Msg
Line 2966: RachResourcesController: Unexpected Msg
Line 3091: [Rach Release] SendRachReleaseAfterIratMeas
Line 3091: [Rach Release] SendRachReleaseAfterIratMeas
Line 3124: uphy_CRachResourcesController_cancelPendingTokens: myTimer token cancelled 
Line 3124: uphy_CRachResourcesController_cancelPendingTokens: myTimer token cancelled 
Line 3132: uphy_CRachResourcesController_cancelPendingTokens: StartRachStf token cancelled 
Line 3132: uphy_CRachResourcesController_cancelPendingTokens: StartRachStf token cancelled 
Line 3139: uphy_CRachResourcesController_cancelPendingTokens: Previous RF update token cancelled 
Line 3139: uphy_CRachResourcesController_cancelPendingTokens: Previous RF update token cancelled 
Line 3146: uphy_CRachResourcesController_cancelPendingTokens: StartTxASRachStf token cancelled 
Line 3146: uphy_CRachResourcesController_cancelPendingTokens: StartTxASRachStf token cancelled 
Line 3169: SendInternalRfReject: sending internal Rf Reject to RACH when FACH is already rejected for Rf
Line 3169: SendInternalRfReject: sending internal Rf Reject to RACH when FACH is already rejected for Rf
Line 3181: uphy_CRachResourcesController_SendInternalRfReject: Msg sending failed
Line 3181: uphy_CRachResourcesController_SendInternalRfReject: Msg sending failed
Line 936: uphy_CUphyUrrcMessageInterface_scheduleRfReasonUpdateStf: 
Line 936: uphy_CUphyUrrcMessageInterface_scheduleRfReasonUpdateStf: 
Line 1259: DSDS:uphy_CRachResourcesController_process: RF resume received from DSLRC interface
Line 1259: DSDS:uphy_CRachResourcesController_process: RF resume received from DSLRC interface
Line 1262: DSDS:RACHResourcesController_ptr: Restart RACH configuration
Line 1262: DSDS:RACHResourcesController_ptr: Restart RACH configuration
Line 1270: DSDS:RACHResourcesController_ptr: EnableRACH decoding
Line 1270: DSDS:RACHResourcesController_ptr: EnableRACH decoding
Line 1274: 3G3G DSDS:RACHResourcesController_ptr: EnableRACH decoding
Line 1274: 3G3G DSDS:RACHResourcesController_ptr: EnableRACH decoding
Line 1279: DSDS:RACHResourcesController_ptr: EnableRACH decoding
Line 1279: DSDS:RACHResourcesController_ptr: EnableRACH decoding
Line 1293: 3G3G DSDS:RACHResourcesController_ptr: EnableRACH decoding
Line 1293: 3G3G DSDS:RACHResourcesController_ptr: EnableRACH decoding
Line 1327: uphy_CRachResourcesController_process: Previous RF update token cancelled 
Line 1327: uphy_CRachResourcesController_process: Previous RF update token cancelled 
Line 1330: uphy_CRachResourcesController_process: reserved RF for Signalling!
Line 1330: uphy_CRachResourcesController_process: reserved RF for Signalling!
Line 1335: uphy_CRachResourcesController_process: RACH deleted data since RF couldn't be reserved for signaling!!
Line 1335: uphy_CRachResourcesController_process: RACH deleted data since RF couldn't be reserved for signaling!!
Line 1342: >>>>>> RACH_MESSAGE CNT %d
Line 1342: >>>>>> RACH_MESSAGE CNT %d
Line 1357: uphy_CRachResourcesController_process: Previous RF update token cancelled 
Line 1357: uphy_CRachResourcesController_process: Previous RF update token cancelled 
Line 1362: uphy_CRachResourcesController_process: Low priority RACH data 
Line 1362: uphy_CRachResourcesController_process: Low priority RACH data 
Line 1367: uphy_CRachResourcesController_process: RACH deleted data since RF request rejected by DSLRC!
Line 1367: uphy_CRachResourcesController_process: RACH deleted data since RF request rejected by DSLRC!
Line 1372: >>>>>> RACH_MESSAGE CNT %d
Line 1372: >>>>>> RACH_MESSAGE CNT %d
Line 161: uphy_CRachResourcesController_RequestCellSfnServerRelease: msg=0
Line 161: uphy_CRachResourcesController_RequestCellSfnServerRelease: msg=0
Line 1687: uphy_CRachResourcesController_requestCellTracking: cellSfnReqMsg=0
Line 1687: uphy_CRachResourcesController_requestCellTracking: cellSfnReqMsg=0
Line 1709: cellSfnReqMsg send failure
Line 1709: cellSfnReqMsg send failure
Line 1816: uphy_CRachResourcesController_cancelCellTracking: cellSfnCancelMsg=0
Line 1816: uphy_CRachResourcesController_cancelCellTracking: cellSfnCancelMsg=0
Line 1833: send
Line 1833: send
Line 2186: UhalConfig in DsSuspend State: Returning Token
Line 2186: UhalConfig in DsSuspend State: Returning Token
Line 2201: engagedRlPhychLinksArray == NULL pointer
Line 2201: engagedRlPhychLinksArray == NULL pointer
Line 2246: rlPhyCh config failed
Line 2246: rlPhyCh config failed
Line 2277: uphy_configUhalInstancesStf: uphy_CMaxUlTxPowerController=0
Line 2277: uphy_configUhalInstancesStf: uphy_CMaxUlTxPowerController=0
Line 2290: uphy_configUhalInstancesStf: uphy_CMaxUlTxPowerController=0
Line 2290: uphy_configUhalInstancesStf: uphy_CMaxUlTxPowerController=0
Line 2340: ulTrch config faileds
Line 2340: ulTrch config faileds
Line 2373: Rach UhalCfg Failed
Line 2373: Rach UhalCfg Failed
Line 1929: No more free RL-s
Line 1929: No more free RL-s
Line 1950: rakeRl config failed
Line 1950: rakeRl config failed
Line 2026: Insufficient Phychs
Line 2026: Insufficient Phychs
Line 2044: rakePhyCh config failed
Line 2044: rakePhyCh config failed
Line 2103: Unable to set MaxUlTxPower
Line 2103: Unable to set MaxUlTxPower
Line 2125: No MaxUlTxPower available
Line 2125: No MaxUlTxPower available
Line 2073: prachConfigCmd exec() failed errCode %d addErrCode %d
Line 2073: prachConfigCmd exec() failed errCode %d addErrCode %d
Line 1986: UL trChReleaseCmd exec() failed errCode %d addErrCode %d
Line 1986: UL trChReleaseCmd exec() failed errCode %d addErrCode %d
Line 2452: RSN=%d:RachController Send success: Sfn=%d, Uarfcn=%d, scrCode=%d
Line 2452: RSN=%d:RachController Send success: Sfn=%d, Uarfcn=%d, scrCode=%d
Line 2458: RSN=%d:RachController SendFail: Sfn=%d
Line 2458: RSN=%d:RachController SendFail: Sfn=%d
Line 2470: RSN=%d:RachController Released: Sfn=%d, Uarfcn=%d, scrCode=%d
Line 2470: RSN=%d:RachController Released: Sfn=%d, Uarfcn=%d, scrCode=%d
Line 2482: uphy_CRachResourcesController_sendConfirmationMsg: cnfMsg=0
Line 2482: uphy_CRachResourcesController_sendConfirmationMsg: cnfMsg=0
Line 2517: uphy_CRachResourcesController_sendConfirmationMsg: confirmMsg=0
Line 2517: uphy_CRachResourcesController_sendConfirmationMsg: confirmMsg=0
Line 3049: UhalDlRlTimingResetCommand exec() failed errCode %d addErrCode %d
Line 3049: UhalDlRlTimingResetCommand exec() failed errCode %d addErrCode %d
