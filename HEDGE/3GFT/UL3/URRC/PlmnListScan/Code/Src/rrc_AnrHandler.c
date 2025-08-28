Line 172: [URRC_ANR]: ANRHandler: Init called
Line 208: [URRC_ANR]: init: ANRHandler initialization problem - couldn't register with MM boundary
Line 214: [URRC_ANR]: init: ANRHandler initialization - MM_URRC_PREPARE_CGI_REQ register with MM boundary
Line 222: [URRC_ANR]: init: ANRHandler initialization problem - couldn't register with MM boundary InstanceId = %d, MsgId = %d, FuncPtr = %d
Line 228: [URRC_ANR]: init: ANRHandler initialization - MM_URRC_START_CGI_REQ register with MM boundary InstanceId = %d, MsgId = %d, FuncPtr = %d
Line 236: [URRC_ANR]: init: ANRHandler initialization problem - couldn't register with MM boundary InstanceId = %d, MsgId = %d, FuncPtr = %d
Line 242: [URRC_ANR]: init: ANRHandler initialization - MM_URRC_CGI_STOP_REQ register with MM boundary InstanceId = %d, MsgId = %d, FuncPtr = %d
Line 250: [URRC BCH in DCH]: init: ANRHandler initialization problem - couldn't register with UPHY boundary InstanceId = %d, MsgId = %d, FuncPtr = %d
Line 256: [URRC BCH in DCH]: init: ANRHandler initialization - CUPHY_REFERENCE_CELL_IND register with UPHY boundary InstanceId = %d, MsgId = %d, FuncPtr = %d
Line 266: ERROR registering for State Change notificationwith CnxMgr
Line 274: [URRC_ANR]: init: ANRHandler initialization problem - couldn't register with MM boundary InstanceId = %d, MsgId = %d, FuncPtr = %d
Line 280: [URRC_ANR]: init: ANRHandler initialization - MM_URRC_CGI_ACQUISITION_REQ register with MM boundary InstanceId = %d, MsgId = %d, FuncPtr = %d
Line 287: ANRHandler.c: ANRHandler: Timer TCgiDrxExpiryTimerId creation failed
Line 292: [URRC_ANR]:  ANRHandler: Timer TCgiDrxExpiryTimerId Created
Line 298: [URRC_ANR]: ERROR Illegal State
Line 322: [URRC_ANR]: rrc_AnrHandler : RecvCgiStopReq received 
Line 831: [URRC_ANR]: rrc_AnrHandler_free : AnrHandler_p->TCgiDrxExpiryTimerId couldn't freed
Line 836: [URRC_ANR]: couldn't de-register MM_URRC_PREPARE_CGI_REQ with MM boundary
Line 841: [URRC_ANR]: couldn't de-register MM_URRC_START_CGI_REQ with MM boundary
Line 846: [URRC_ANR]: couldn't de-register MM_URRC_CGI_STOP_REQ with MM boundary
Line 851: [URRC_ANR]: couldn't de-register MM_URRC_CGI_ACQUISITION_REQ with MM boundary
Line 857: [URRC_ANR]: rrc_AnrHandler_free : Freed the Singleton instance
Line 970: [URRC_ANR]: CUPHY_UMTS_RAT_MODE_CNF received from UPHY
Line 977: [URRC_ANR]: CUPHY_NON_UMTS_RAT_MODE_CNF received from UPHY
Line 983: [URRC_ANR]: CUPHY_CGI_ACQUISITION_CONFIG_CNF received from UPHY
Line 989: [URRC_ANR]: CUPHY_CGI_ACQUISITION_RELEASE_CNF received from UPHY
Line 995: [URRC_ANR]: CUPHY_SFN_ACQUISITION_CONFIG_CNF received from UPHY
Line 1001: [URRC_ANR]: CUPHY_SFN_ACQUISITION_RELEASE_CNF received from UPHY
Line 1007: [URRC_ANR]: CUPHY_SFN_ACQUISITION_IND received from UPHY
Line 1014: [URRC_ANR]: Unexpected message in AnrHandler from UPHY
Line 1017: [URRC_ANR]: CUPHY_BPLMN_INIT_CNF message received from UPHY
Line 1025: [URRC_ANR]: Unexpected message in AnrHandler from Other Component
Line 1050: [URRC_ANR]:rrc_AnrHandler : PrepareCgiInd 
Line 1142: [URRC_ANR]: rrc_AnrHandler : MmCgiTimeInd received 
Line 3487: [URRC BCH in DCH]:rrc_AnrHandler : ReferenceCellInd 
Line 3873: ANR : Added currently selected PlmnId: 0x%02X, 0x%02X, 0x%02X  to head of the list
Line 3903: ANR : Added currently selected PlmnId: 0x%02X, 0x%02X, 0x%02X  to head of the list
Line 4591: [URRC BCH in DCH] Uarfcn = %d, PSC = %d, CellId 0x%x, Lac = %d, Rac = %d is added to DB
Line 1093: [URRC_ANR]: NotActive_PrepareCgiInd AnrHandler_p->is_fdd_mode set to (%d)
Line 1101: [URRC_ANR]: ANR is not support for (%d) umts_access_mode 
Line 1108: [URRC_ANR]: NotActive_PrepareCgiInd AnrHandler_p->si_requestForHO set to TRUE(%d)
Line 1116: [URRC_ANR]: ERROR Illegal State in NotActive_PrepareCgiInd
Line 3518: [URRC BCH in DCH] Reference Cell Ind Uarfcn = %d, PSC = %d
Line 3542: [URRC BCH in DCH] BandId(%d) Lac(%d) Rac(%d)
Line 3545: [URRC BCH in DCH] PLMN(%x%x%x%x%x%x)
Line 3557: [URRC BCH in DCH]: ERROR Illegal State in AwaitingBchInfo_AwaitingAnrInfoReadAborted
Line 3590: MsgDataPtr is NULL. 
Line 3599: [URRC BCH in DCH]: ERROR Illegal State in WaitingforConfirmation_ReceivedMsg
Line 939: GenMsg is NULL
Line 3621: [URRC BCH in DCH]: Message Generation Error
Line 1185: [URRC_ANR]: Start Time : %d, Current Time : %d, Diff Time : %d, Sleep Time : %d
Line 1204: [URRC_ANR]: Timer With Value=%d successfully started for TCgiDrxExpiryTimerId
Line 1254: [URRC_ANR]: ERROR Illegal State in Ready_MmCgiTimeInd
Line 1259: [URRC_ANR]: Timer Creation failed of TCgiDrxExpiryTimerId
Line 1264: TCgiDrxExpiryMsg is NULL
Line 1272: [URRC_ANR]: ERROR!!! Timer Value in MM_URRC_START_CGI_REQ is 0
Line 579: [URRC_ANR] SFN ACQUISITION is STOPPED successfully
Line 583: [URRC_ANR]: Error in stopping AnrHandler_p->TCgiDrxExpiryTimerId
Line 588: [URRC_ANR]: AnrHandler_p->TCgiDrxExpiryTimerId already expired or stopped
Line 603: [URRC BCH in DCH]: ERROR Illegal State
Line 339: [URRC_ANR]: Send Suspend message to rrc_TaskMain
Line 344: [URRC_ANR]: msg is NULL
Line 354: [URRC BCH in DCH]: ERROR Illegal State
Line 2081: [URRC_ANR]: AnrHandler_p->UtraSiAcqForHoMode set to UTRAN_CGI_SFN_ACQUISITION(%d)
Line 2082: [URRC_ANR]: AnrHandler_p->SiAcqUphyCnfMode set to CUPHY_CGI_ACQUISITION_CONFIG_MODE_e(%d)
Line 2094: [URRC_ANR]: ERROR Illegal State in Ready_CgiAcqReq
Line 2099: [URRC_ANR]: ERROR rrc_CUPHY_CgiAcqConf_REQ_Create return NULL
Line 2141: [URRC_ANR]: AnrHandler_p->SiAcqUphyCnfMode set to (%d)
Line 2145: [URRC_ANR]: ERROR Illegal State in Ready_MmCgiTimeInd
Line 2191: [URRC_ANR]: ERROR Illegal State in Ready_MmCgiTimeInd
Line 2203: [URRC_ANR] SFN ACQUISITION is STOPPED successfully
Line 2207: [URRC_ANR]: Error in stopping AnrHandler_p->TCgiDrxExpiryTimerId
Line 2216: [URRC_ANR]: Unknown Mode detected MsgPtr->UtraSiAcquisitionForHoMode(%d)
Line 2222: [URRC_ANR]: Wrong AnrHandler_p->UtraSiAcqForHoMode(%d) is given in Ready state with AnrHandler_p->si_requestForHO(%d)
Line 2227: [URRC_ANR]: Timer Creation failed of TCgiDrxExpiryTimerId
Line 2232: [URRC_ANR]: ERROR!!! TCgiDrxExpiryMsg is NULL in Ready_MmCgiTimeInd
Line 2240: [URRC_ANR]: ERROR!!! Timer Value in MM_URRC_START_CGI_REQ is 0
Line 1646: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - Fatal Error AnrHandler_p->UtraSiAcqForHoMode(%d) AnrHandler_p->CgiAcqCnf.UtraSiAcquisitionForHoMode(%d)
Line 1657: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - successful case of AnrHandler_p->UtraSiAcqForHoMode(%d)
Line 1679: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - invalid slot(%d) value
Line 1688: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - invalid chip(%d) value
Line 1697: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - invalid duration_margin(%d) value will be set to 3 (30ms) forcefully
Line 1745: [URRC_ANR]MIB_GAP_INFO AbsoluteModemTiming : (CurrentSfn(%d frame) + CurrAbsoluteAfn(%d frame) + SfnGap(%d frame) - Duration_Margin(%d frame)) mod MAX_SFN(4096) = NextTimeAbsoluteAfn(%d frame)
Line 1750: [URRC_ANR]MIB_GAP_INFO Umtstiming : (CurrentSfn(%d frame) + SfnGap(%d frame) - Duration_Margin(%d frame)) mod MAX_SFN(4096) = CurrrentSFNForNextMode(%d frame)
Line 1753: [URRC_ANR]MIB_GAP_INFO: duration_margin.sfn(%d frame) * 10 + UTRAN_CGI_MIB_DECODING_GAP_DEFAULT_FDD(20ms) = requiredGapDuration(%d ms)
Line 1755: [URRC_ANR]MIB_GAP_INFO: UmtsRepetitionPeriodForNextMode(%d) = FDD_MIB_REPETITION_PERIOD_DEFAULT(8 frame) * 10ms
Line 1776: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - Sib1 SchedInfo SEG_COUNT(%d) SIB_REP(%d) SIB_POS(%d) SIB_OFF(%d)
Line 1782: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - Sib3 SchedInfo SEG_COUNT(%d) SIB_REP(%d) SIB_POS(%d) SIB_OFF(%d)
Line 1788: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - invalid duration_margin(%d) value will be set to 3 (30ms) forcefully
Line 1877: [URRC_ANR]SIB1_GAP_INFO SfnGap = SIB_REP(%d) - (currrent_sfn(%d) mod SIB_REP(%d)) + SIB_POS(%d) = %d
Line 1883: [URRC_ANR]SIB1_GAP_INFO AbsoluteModemTiming : (CurrentSfn(%d frame) + CurrAbsoluteAfn(%d frame) + SfnGap(%d frame) - Duration_Margin(%d frame)) mod MAX_SFN(4096) = NextTimeAbsoluteAfn(%d frame)
Line 1888: [URRC_ANR]SIB1_GAP_INFO Umtstiming : (CurrentSfn(%d frame) + SfnGap(%d frame) - Duration_Margin(%d frame)) mod MAX_SFN(4096) = CurrrentSFNForNextMode(%d frame)
Line 1891: [URRC_ANR]SIB1_GAP_INFO: duration_margin.sfn(%d frame) * 10 + UTRAN_CGI_SIB1_DECODING_GAP_DEFAULT_FDD(20ms) = requiredGapDuration(%d ms)
Line 1894: [URRC_ANR]SIB1_GAP_INFO: UmtsRepetitionPeriodForNextMode(%d) = Sib1_RepPeriod(%d) * 10ms
Line 1902: [URRC_ANR]SIB3_GAP_INFO SfnGap = SIB_REP(%d) - (currrent_sfn(%d) mod SIB_REP(%d)) + SIB_POS(%d) = %d
Line 1908: [URRC_ANR]SIB3_GAP_INFO AbsoluteModemTiming : (CurrentSfn(%d frame) + CurrAbsoluteAfn(%d frame) + SfnGap(%d frame) - Duration_Margin(%d frame)) mod MAX_SFN(4096) = NextTimeAbsoluteAfn(%d frame)
Line 1913: [URRC_ANR]SIB3_GAP_INFO Umtstiming : (CurrentSfn(%d frame) + SfnGap(%d frame) - Duration_Margin(%d frame)) mod MAX_SFN(4096) = CurrrentSFNForNextMode(%d frame)
Line 1916: [URRC_ANR]SIB3_GAP_INFO: duration_margin.sfn(%d frame) * 10 + UTRAN_CGI_SIB3_DECODING_GAP_DEFAULT_FDD(20ms) = requiredGapDuration(%d ms)
Line 1919: [URRC_ANR]SIB3_GAP_INFO: UmtsRepetitionPeriodForNextMode(%d) = Sib3_RepPeriod(%d) * 10ms
Line 1928: [URRC_ANR]: Fatal Error SendCgiAcqCnf - SIB3 scheduling information is not included in this cell
Line 1940: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - SIB3 has been decoded successfully return AnrHandler_p->CgiAcqCnf.isSuccess %d
Line 1948: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - FatalError Unknown UtraSiAcqForHoMode(%d)
Line 1957: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - un-successful case of AnrHandler_p->UtraSiAcqForHoMode(%d)
Line 1983: [URRC_ANR]:rrc_AnrHandler : SendCgiAcqCnf - FatalError Unknown UtraSiAcqForHoMode(%d)
Line 2431: [URRC_ANR]:::::: Current CgiAcqCnf Info START :::::::
Line 2432: [URRC_ANR]: AnrHandler_p->CgiAcqCnf.UtraSiAcquisitionForHoMode (%d)
Line 2433: [URRC_ANR]: AnrHandler_p->CgiAcqCnf.isSuccess (%d)
Line 2437: [URRC_ANR]:::::: %d Sched Info :::::::
Line 2439: [URRC_ANR]: AnrHandler_p->CgiAcqCnf.UmtsTimingForNextMode[%d].sfn (%d)
Line 2441: [URRC_ANR]: AnrHandler_p->CgiAcqCnf.UmtsTimingForNextMode[%d].slot (%d)
Line 2443: [URRC_ANR]: AnrHandler_p->CgiAcqCnf.UmtsTimingForNextMode[%d].chip (%d)
Line 2445: [URRC_ANR]: AnrHandler_p->CgiAcqCnf.UmtsTimingForNextMode[%d].refCounterFrame (%d)
Line 2447: [URRC_ANR]: AnrHandler_p->CgiAcqCnf.UmtsTimingForNextMode[%d].refCounterSlot
Line 2449: [URRC_ANR]: AnrHandler_p->CgiAcqCnf.UmtsTimingForNextMode[%d].refCounterChip (%d)
Line 2451: [URRC_ANR]: AnrHandler_p->CgiAcqCnf.requiredGapDuration[%d] (%d)
Line 2453: [URRC_ANR]: AnrHandler_p->CgiAcqCnf.UmtsRepetitionPeriodForNextMode[%d] (%d)
Line 2456: [URRC_ANR]:::::: Current CgiAcqCnf Info END :::::::
Line 3428: [URRC_ANR]: Received CUPHY_UMTS_RAT_MODE_CNF from UPHY
Line 3434: [URRC_ANR]: Received CUPHY_NON_UMTS_RAT_MODE_CNF_MSG_e from UPHY
Line 3440: [URRC_ANR]: Received CUPHY_CGI_ACQUISITION_CONFIG_CNF_e from UPHY
Line 3449: [URRC_ANR]: CUPHY_CGI_ACQUISITION_RELEASE_CNF received
Line 3454: [URRC_ANR]: Received CUPHY_SFN_ACQUISITION_CONFIG_CNF_e from UPHY
Line 3460: [URRC_ANR]: Fatal Error CUPHY_SFN_ACQUISITION_IND received in wrong state(WAITINGFORCONFIRMATION)
Line 3465: [URRC_ANR]: UNEXPECTED Msg Received in WaitingforConfirmation_ReceivedMsg
Line 2894: [URRC_ANR]: AnrHandler_p->SiAcqUphyCnfMode set to (%d)
Line 2901: [URRC_ANR]: Received CUPHY_UMTS_RAT_MODE_CNF from UPHY when AnrHandler_p->UtraSiAcqForHoMode has %d value
Line 2905: [URRC_ANR]: Received CUPHY_UMTS_RAT_MODE_CNF from UPHY when LastTime Timer NOT PAUSED
Line 2911: [URRC_ANR]: Timer Value left after we received CNF %d
Line 2942: [URRC_ANR]: ANR Resumed but SearchNetworkPtr cannot be NULL as this is the FddNetwork Instance
Line 2953: MsgDataPtr is NULL. 
Line 2959: [URRC_ANR]: ERROR Illegal State in WaitingforConfirmation_ReceivedMsg
Line 2965: [URRC_ANR]: Very less time to start for BCH READ in WaitingforConfirmation_ReceivedMsg
Line 2972: [URRC_ANR]: Received CUPHY_UMTS_RAT_MODE_CNF from UPHY when LastTime Timer PAUSED
Line 2979: [URRC_ANR]: Timer Value left after we received CNF %d
Line 2994: MsgDataPtr is NULL
Line 2997: [URRC_ANR]: AnrResume sent to FddNetwork 
Line 3002: [URRC_ANR]: ERROR Illegal State in WaitingforConfirmation_ReceivedMsg
Line 3007: [URRC_ANR]: ANR Resumed but SearchNetworkPtr cannot be NULL as this is the FddNetwork Instance
Line 3015: [URRC_ANR]: Very less time to start for BCH READ in WaitingforConfirmation_ReceivedMsg
Line 3024: [URRC_ANR]: Received CUPHY_UMTS_RAT_MODE_CNF from UPHY when LastTime Timer NOT PAUSED
Line 3031: [URRC_ANR]: Timer Value left after we received CNF %d
Line 3062: MsgDataPtr is NULL. 
Line 3068: [URRC_ANR]: ERROR Illegal State in WaitingforConfirmation_ReceivedMsg
Line 3074: [URRC_ANR]: Very less time to start for BCH READ in WaitingforConfirmation_ReceivedMsg
Line 3081: [URRC_ANR]: Received CUPHY_UMTS_RAT_MODE_CNF from UPHY when LastTime Timer PAUSED
Line 3089: [URRC_ANR]: Timer Value left after we received CNF %d
Line 3097: [URRC_ANR]: ANR Resumed but SearchNetworkPtr cannot be NULL as this is the FddNetwork Instance
Line 3109: MsgDataPtr is NULL
Line 3112: [URRC_ANR]: AnrResume sent to FddNetwork 
Line 3117: [URRC_ANR]: ERROR Illegal State in WaitingforConfirmation_ReceivedMsg
Line 3123: [URRC_ANR]: Very less time to start for BCH READ in WaitingforConfirmation_ReceivedMsg
Line 1578: [URRC_ANR]: ERROR Illegal State in Ready_SfnAcqReq
Line 1583: [URRC_ANR]: ERROR rrc_CUPHY_SfnAcqConf_REQ_Create return NULL
Line 3160: [URRC_ANR]: Send Suspend message to rrc_TaskMain
Line 3167: [URRC_ANR]: msg is NULL
Line 3172: [URRC_ANR]: AnrHandler_p->SiAcqUphyCnfMode set to (%d)
Line 3179: [URRC_ANR] SFN ACQUISITION is STOPPED successfully
Line 3183: [URRC_ANR]: Error in stopping AnrHandler_p->TCgiDrxExpiryTimerId
Line 3188: [URRC_ANR]: AnrHandler_p->TCgiDrxExpiryTimerId already expired or stopped
Line 3193: [URRC_ANR]: Received CUPHY_NON_UMTS_RAT_MODE_CNF_MSG_e from UPHY and Drx Timer is NOT PAUSED
Line 3198: [URRC_ANR]: CUPHY_NON_UMTS_RAT_MODE_CNF_MSG_e ERROR Illegal State
Line 3203: [URRC_ANR]: Received CUPHY_NON_UMTS_RAT_MODE_CNF_MSG_e from UPHY and Drx Timer is PAUSED
Line 3210: [URRC_ANR]: CUPHY_NON_UMTS_RAT_MODE_CNF_MSG_e ERROR Illegal State
Line 3230: [URRC_ANR]: Send Suspend message to rrc_TaskMain
Line 3240: [URRC_ANR]: msg is NULL
Line 3245: [URRC_ANR]: AnrHandler_p->SiAcqUphyCnfMode set to (%d)
Line 3257: [URRC_ANR]: Send Suspend message to rrc_TaskMain
Line 3264: [URRC_ANR]: msg is NULL
Line 3268: [URRC_ANR]: Received CUPHY_NON_UMTS_RAT_MODE_CNF_MSG_e from UPHY and Drx Timer is NOT PAUSED
Line 3273: [URRC_ANR]: CUPHY_NON_UMTS_RAT_MODE_CNF_MSG_e ERROR Illegal State
Line 3278: [URRC_ANR]: Received CUPHY_NON_UMTS_RAT_MODE_CNF_MSG_e from UPHY and Drx Timer is PAUSED
Line 3285: [URRC_ANR]: CUPHY_NON_UMTS_RAT_MODE_CNF_MSG_e ERROR Illegal State
Line 3346: [URRC_ANR]: AnrHandler_p->SiAcqUphyCnfMode set to (%d)
Line 3350: [URRC_ANR]: ERROR Illegal State in Ready_MmCgiTimeInd
Line 3355: [URRC_ANR]: Fatal Error invalid mode AnrHandler_p->UtraSiAcqForHoMode(%d)
Line 3381: [URRC_ANR]: CUPHY_SFN_ACQUISITION_CONFIG_CNF received moved to AwaitingAnrInfo state for getting CUPHY_SFN_ACQUISTION_IND
Line 3385: [URRC_ANR]: ERROR Illegal State in Ready_MmCgiTimeInd
Line 3391: [URRC_ANR]: Fatal Error invalid mode AnrHandler_p->si_requestForHO(%d) AnrHandler_p->SiAcqUphyCnfMode(%d)
Line 2670: [URRC_ANR]: WaitingforConfirmation_AwaitingAnrInfoReadAborted received
Line 2700: [URRC_ANR]: WaitingforConfirmation_AwaitingAnrInfoReadAborted AnrHandler_p->si_requestForHO(%d)
Line 2704: [URRC BCH in DCH]: AnrHandler_p->BchInDchOngoing
Line 2718: [URRC BCH in DCH] Reference Cell Uarfcn = %d, PSC = %d
Line 2738: [URRC BCH in DCH] BandId(%d) Lac(%d) Rac(%d)
Line 2741: [URRC BCH in DCH] PLMN(%x%x%x%x%x%x)
Line 2753: [URRC BCH in DCH]: ERROR Illegal State in AwaitingBchInfo_AwaitingAnrInfoReadAborted
Line 2780: MsgDataPtr is NULL. 
Line 2790: [URRC BCH in DCH]: ERROR Illegal State in WaitingforConfirmation_AwaitingAnrInfoReadAborted
Line 2804: [URRC BCH in DCH]: ERROR Illegal State in AwaitingBchInfo_AwaitingAnrInfoReadAborted
Line 2819: [URRC BCH in DCH]: Message Generation Error
Line 2828: [URRC BCH in DCH]: ERROR Illegal State in WaitingforConfirmation_AwaitingAnrInfoReadAborted
Line 2838: [URRC_ANR]: WaitingforConfirmation_AwaitingAnrInfoReadAborted CUPHY_BPLMN_STOP_REQ sent
Line 2844: [URRC_ANR]: WaitingforConfirmation_AwaitingAnrInfoReadAborted CUPHY_NON_UMTS_RAT_MODE_REQ sent
Line 367: [URRC_ANR]: SFN(%d) from MIB InfoBlock
Line 522: [URRC_ANR]: Scheduling info at MIB for SIB1(%d) SIB3(%d)
Line 2403: [URRC_ANR]:::::: Current SFN Info START :::::::
Line 2404: [URRC_ANR]: AnrHandler_p->SfnAcquisitionInd.current_sfn.sfn (%d)
Line 2405: [URRC_ANR]: AnrHandler_p->SfnAcquisitionInd.current_sfn.slot (%d)
Line 2406: [URRC_ANR]: AnrHandler_p->SfnAcquisitionInd.current_sfn.chip (%d)
Line 2407: [URRC_ANR]: AnrHandler_p->SfnAcquisitionInd.sfn_offset.sfn (%d)
Line 2408: [URRC_ANR]: AnrHandler_p->SfnAcquisitionInd.sfn_offset.slot (%d)
Line 2409: [URRC_ANR]: AnrHandler_p->SfnAcquisitionInd.sfn_offset.chip (%d)
Line 2410: [URRC_ANR]: AnrHandler_p->SfnAcquisitionInd.duration_margin.sfn (%d)
Line 2411: [URRC_ANR]: AnrHandler_p->SfnAcquisitionInd.duration_margin.slot (%d)
Line 2412: [URRC_ANR]: AnrHandler_p->SfnAcquisitionInd.duration_margin.chip (%d)
Line 2413: [URRC_ANR]:::::: Current SFN Info END :::::::
Line 2557: Msg is NULL
Line 2564: [URRC_ANR]: ERROR Illegal State in AwaitingAnrInfo_TcgiDrxExpiry
Line 2619: Msg is NULL
Line 2626: [URRC_ANR]: ERROR Illegal State in AwaitingAnrInfo_TcgiDrxExpiry
Line 1614: [URRC_ANR]: ERROR rrc_CUPHY_CgiAcqConf_REQ_Create return NULL
Line 1465: [URRC_ANR]: ERROR Illegal State in AwaitingAnrInfo_AwaitingAnrInfoReadSuccesss
Line 1489: [URRC_ANR]: ERROR Illegal State in AwaitingAnrInfo_AwaitingAnrInfoReadSuccesss
Line 1497: [URRC_ANR]: AwaitingAnrInfo_ReceivedMsg unexpected msg (%x) ignored
Line 4093: [URRC_ANR]: Timer TDRX or Scan stopped in AwaitingAnrInfo_AwaitingAnrInfoReadSuccesss
Line 4105: [URRC_ANR]: AwaitingAnrInfo_AwaitingAnrInfoReadSuccesss AnrHandler_p->UtraSiAcqForHoMode(%d)
Line 4114: [URRC_ANR]: AwaitingAnrInfo_AwaitingAnrInfoReadSuccesss CUPHY_BPLMN_STOP_REQ sent
Line 4119: [URRC_ANR]: AwaitingAnrInfo_AwaitingAnrInfoReadSuccesss CUPHY_NON_UMTS_RAT_MODE_REQ sent
Line 4124: [URRC_ANR]: Error in stopping TDrx or Scan in AwaitingAnrInfo_AwaitingAnrInfoReadSuccesss
Line 4129: [URRC_ANR]: TDrx  or Scan already stopped in AwaitingAnrInfo_AwaitingAnrInfoReadSuccesss
Line 4141: [URRC_ANR]: ERROR Illegal State in AwaitingAnrInfo_AwaitingAnrInfoReadSuccesss
Line 4181: [URRC_ANR]: Timer TDRX or Scan stopped in AwaitingAnrInfo_AwaitingAnrInfoReadFailure
Line 4193: [URRC_ANR]: AwaitingAnrInfo_AwaitingAnrInfoReadFailure AnrHandler_p->UtraSiAcqForHoMode(%d)
Line 4198: [URRC_ANR]: AwaitingAnrInfo_AwaitingAnrInfoReadFailure CUPHY_NON_UMTS_RAT_MODE_REQ sent
Line 4204: [URRC_ANR]: AwaitingAnrInfo_AwaitingAnrInfoReadFailure CUPHY_BPLMN_STOP_REQ sent
Line 4207: [URRC_ANR]: AwaitingAnrInfo_AwaitingAnrInfoReadFailure CUPHY_NON_UMTS_RAT_MODE_REQ sent
Line 4212: [URRC_ANR]: Error in stopping TDrx or Scan in AwaitingAnrInfo_AwaitingAnrInfoReadFailure
Line 4217: [URRC_ANR]: TDrx  or Scan already stopped in AwaitingAnrInfo_AwaitingAnrInfoReadFailure
Line 4230: [URRC_ANR]: ERROR Illegal State in AwaitingAnrInfo_AwaitingAnrInfoReadSuccesss
Line 4321: [URRC_ANR]: WaitingforConfirmation_AwaitingAnrInfoReadAborted AnrHandler_p->si_requestForHO(%d)
Line 4325: [URRC_ANR]: ERROR Illegal State in AwaitingAnrInfo_TcgiDrxExpiry
Line 658: [URRC_ANR] SFN ACQUISITION is STOPPED successfully
Line 662: [URRC_ANR]: Error in stopping AnrHandler_p->TCgiDrxExpiryTimerId
Line 667: [URRC_ANR]: AnrHandler_p->TCgiDrxExpiryTimerId already expired or stopped
Line 687: Msg is NULL
Line 692: AnrHandler_p->SearchNetworkPtr is NULL
Line 736: [URRC_ANR]: WaitingforConfirmation_AwaitingAnrInfoReadAborted CUPHY_BPLMN_STOP_REQ sent
Line 742: [URRC_ANR]: WaitingforConfirmation_AwaitingAnrInfoReadAborted CUPHY_NON_UMTS_RAT_MODE_REQ sent
Line 748: [URRC BCH in DCH]: ERROR Illegal State
Line 1310: [URRC_ANR]: Start Time : %d, Current Time : %d, Diff Time : %d, Sleep Time : %d
Line 1324: [URRC_ANR]:Timer With Value=%d successfully started for TCgiDrxExpiryTimerId
Line 1375: [URRC_ANR]: ERROR Illegal State in Ready_MmCgiTimeInd
Line 1380: [URRC_ANR]: Timer Creation failed of TCgiDrxExpiryTimerId
Line 1385: [URRC_ANR]: ERROR!!! TCgiDrxExpiryMsg is NULL in Ready_MmCgiTimeInd
Line 1393: [URRC_ANR]: ERROR!!! Timer Value in MM_URRC_START_CGI_REQ is 0
Line 784: [URRC_ANR]: ERROR Illegal State
Line 2301: [URRC_ANR]: MsgPtr->UtraSiAcquisitionForHoMode(%d) is being sent. Current AnrHandler_p->UtraSiAcqForHoMode is (%d)
Line 2340: [URRC_ANR]: ERROR Illegal State in Ready_MmCgiTimeInd
Line 2352: [URRC_ANR] SFN ACQUISITION is STOPPED successfully
Line 2356: [URRC_ANR]: Error in stopping AnrHandler_p->TCgiDrxExpiryTimerId
Line 2364: [URRC_ANR]: Unknown Mode detected MsgPtr->UtraSiAcquisitionForHoMode(%d)
Line 2369: [URRC_ANR]: Timer Creation failed of TCgiDrxExpiryTimerId
Line 2374: [URRC_ANR]: ERROR!!! TCgiDrxExpiryMsg is NULL in Ready_MmCgiTimeInd
Line 2382: [URRC_ANR]: ERROR!!! Timer Value in MM_URRC_START_CGI_REQ is 0
Line 3667: [URRC BCH in DCH] BandId(%d) Lac(%d) Rac(%d)
Line 3670: [URRC BCH in DCH] PLMN(%x%x%x%x%x%x)
Line 3683: [URRC BCH in DCH]: ERROR Illegal State
Line 3717: [URRC BCH in DCH]: ERROR Illegal State
Line 3737: [URRC BCH in DCH] Reference Cell Ind Uarfcn = %d, PSC = %d
Line 3744: [URRC BCH in DCH] Releasing BCH of current reference cell Uarfcn = %d, PSC = %d
Line 3755: Msg is NULL
Line 3765: [URRC BCH in DCH]: ERROR Illegal State
Line 3772: [URRC BCH in DCH] Reference Cell is not changed
Line 3787: [URRC BCH in DCH] Releasing BCH of current reference cell Uarfcn = %d, PSC = %d
Line 3797: Msg is NULL
Line 3807: [URRC BCH in DCH]: ERROR Illegal State
Line 4424: [URRC_ANR]: Received CUPHY_SFN_ACQUISITION_RELEASE_CNF_e from UPHY
Line 4436: [URRC_ANR]: Received CUPHY_CGI_ACQUISITION_RELEASE_CNF_e from UPHY
Line 4437: [URRC_ANR]: CUPHY_CGI_STOP_AT_PAUSED_MODE_e, FinishCgi() without waiting CUPHY_NON_UMTS_RAT_MODE_CNF_MSG_e from UPHY
Line 4443: [URRC_ANR]: Received CUPHY_CGI_ACQUISITION_RELEASE_CNF_e from UPHY
Line 4450: [URRC_ANR]: Wait for CUPHY_NON_UMTS_RAT_MODE_CNF for CGI STOP
Line 4457: [URRC_ANR]: Received CUPHY_NON_UMTS_RAT_MODE_CNF_MSG_e from UPHY
Line 4466: [URRC_ANR]: AwaitingAnrInfo_ReceivedMsg unexpected msg (%x) ignored
Line 4387: [URRC_ANR]: WaitingforConfirmation_AwaitingAnrInfoReadAborted CUPHY_BPLMN_STOP_REQ sent
Line 4393: [URRC_ANR]: WaitingforConfirmation_AwaitingAnrInfoReadAborted CUPHY_NON_UMTS_RAT_MODE_REQ sent
Line 1526: [URRC_ANR]:rrc_AnrHandler : CgiAcquisitionReq 
Line 4603: [URRC BCH in DCH] Uarfcn = %d, PSC = %d, CellId 0x%x is in DB at %d
Line 4672: ERROR Unexpected State Change Notification
Line 4687: AnrHandler_p is NULL
Line 4696: ERROR Unexpected State Change Notification
Line 4628: [URRC BCH in DCH] ClearGlobalCellIdDb
