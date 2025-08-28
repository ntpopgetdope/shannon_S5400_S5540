Line 99: ati_FwHandlers_HandleUnsolicitedMessage: UNKNOWN [%04X]
Line 150: ns_RegisterClient() from ATI
Line 227: ati_FwHandlers_HandleUnsolicitedMessage: Signal [%04X] NOT IMPLEMENTED.
Line 366: Received NS_NETWORK_SELECT_MENU : NS_STOP_NETWORK_RSP - clearing all PS and CS contexts !!
Line 448: isSimInserted %d, bSimOnePresent %d, bSimTwoPresent %d
Line 465: ePinType =%d, PIN1Status = %d, UNBLKPIN1Status = %d, PIN2Status = %d, UNBLKPIN2Status = %d
Line 468: PIN1RemainCnt = %d, PIN2RemainCnt = %d, UNBLKPIN1RemainCnt = %d, UNBLKPIN2RemainCnt = %d, SimPresent = %d
Line 473: [ATI] NS Init. PCT enabled. atiInternalAttachValid = TRUE
Line 478: [ATI] NS Init. PCT disabled. atiInternalAttachValid = FALSE
Line 483: NO SIM
Line 486: Command Timer Stopped [%s] [%d]
Line 499: Command Timer Stopped [%s] [%d]
Line 509: Command Timer Stopped [%s] [%d]
Line 518: Invalid UNBLKPIN1Status =%d
Line 529: Command Timer Stopped [%s] [%d]
Line 538: Command Timer Stopped [%s] [%d]
Line 559: [GCF_AUTO] NsInitCnf in ATI_HANDLERS : Start Network
Line 566: Invalid PIN1Status =%d
Line 596: NS_POWER_OFF_CNF
Line 612: NS_REJ_CAUSE_IND
Line 820: NS_REGISTRATION_STATUS_IND, Rat %d, GprsStatus = %d, ImsiStatus = %d,MmServiceState = %d, GmmServiceState = %d
Line 823: EmmStatus (ATTACH/DETACH) = %d, RegStatus = %d,EmmCause = %d, cell_id = %d
Line 827: NrmmStatus (ATTACH/DETACH) = %d, NrmmRegStatus = %d,NrmmCause = %d, cell_id = %d
Line 859: Unknown GPRS status (%d)
Line 945: ATI_NRMM_Registration_Status:%d
Line 949: ImsiStatus:%d ,GPRSStatus:%d ,EpsAttacthStatus : %d
Line 951: ATI_MM_Registration_Status:%d
Line 953: ATI_GMM_Registration_Status:%d
Line 965: ATI_EMM_Registration_Status:%d
Line 1019: [ATI] LinkDown, Attatch = %d
Line 1052: pstNsMsg->Body.NsRegistrationStatusInd.SmsOverNasSupport = %d
Line 1414: AtiHandleNsInformationInd
Line 1428: FullNetworkName 
Line 1429: ShortNetworkName 
Line 1446: Time Zone = %d : %d
Line 1447: UAL Time = %d : %d
Line 1448: Time Zone Sign = %d
Line 1492: Default case : No local date conversion is needed
Line 1498: LocalDay= %d/%d/%d
Line 1505: LocalTime = %d : %d
Line 1538: %d-%d-
Line 1539: Local Date %d-%d-
Line 1540: LocalTimeHStr
Line 1541: LocalTimeMStr
Line 1542: TimeType
Line 1543: GMT : TimeZoneHourStr
Line 1544: GMT : TimeZoneMinStr
Line 1548: CDT : cdtHStr
Line 1549: cdtMStr
Line 1550: TimeTypecdt
Line 1554: TimeZoneHourStr
Line 1555: TimeZoneMinStr
Line 1556: TimeType
Line 1593: AtiHandleAutoStartRsp: pstNsMsg->Body.NsPlmnSelectionModeChangeRsp.Result: %d
Line 1613: Auto mode PLMN selection fail
Line 1672: NS_NETWORK_REGISTRATION_NTF received: EpsAttacthStatus [%d]
Line 1881: Delegating NS_EPS_PDP_ACTIVATE_IND to generic handler
Line 1890: [AtiHandleNsEGPRSPDPType SId=%d, TempSid=%d
Line 1909: CID context 1 is not used, so allocating
Line 1921: FreeCid = %d found for allocating
Line 1926: Could not allocate CID for TempSID = %d. No free CID available
Line 1951:  Wrong TempSId[%d]
Line 1962:  Wrong TempSId[%d]
Line 2176: FAILED to Send PDP Context!
Line 2208: CGEREPMode value %d
Line 2217: +CGEV: ME PDN ACT %d
Line 2225: +CGEV: NW ACT %d, %d, %d
Line 2231: +CGEV: NW DEACT %d, %d, %d
Line 2238: +CGEV: NW PDN DEACT %d
Line 2243: +CGEV: NW MODIFY %d, %d, %d
Line 2248: +CGEV: ME PDN DEACT %d
Line 2326: NS_EPS_PDP_ACTIVATE_CNF
Line 2340: Cannot find out cidIndex Sid[%d]
Line 2344: pAtiCB->cid_idx:%d, Sid:%d
Line 2350: CID table NsSID:%d Rcvd From NS SID:%d
Line 2355: Rcvd Eps Bearer Id:%d Cid:%d, Sid:%d
Line 2415: Cid_idx Out of Bound [%d]
Line 2469: Invalid bearer Type=%d
Line 2479: NS_PDP_UPDATE_SID_IND
Line 2481: AtiHandleNsPdpUpdateSidInd secondary index %d , Tempsid %d 
Line 2495: NS_PDN_DISCONNECT_IND
Line 2534: NS_RRC_STATE_IND
Line 2549: NS_USB_CABLE_DISCONNECT_IND
Line 2553: AtiHandleNsUSBCableDisconnectInd: Hang up the current PPP connection!
Line 2579: CGEREPMode value %d
Line 2581: +CGEV: ME DETACH
Line 2606: AtiHandleNsServiceInd(): MmServiceState %d, GmmServiceState %d, EmmServiceState %d, EmmState %d
Line 2766: AtiHandleNetworkNameChangeInd: Network Name is changed
Line 2794: Forcefully setting Rx operating mode=%d as LTE only, for LTE only UE
Line 2814: NS_MODE_SELECT_IND:Mode %d
Line 2824: ImsRegistrationStatus : %d ImsFeature : %d
Line 2891: NS_ACTIVE_RAT_IND:Rat %d
Line 2925: NS_RAT_MODE_CHANGE_IND: Status %d, RatMode %d
Line 2988: NS_MM_PS_TYPE_IND, MmPsType %d, eActRatMode %d
Line 3016: Command Timer Executed [%s] [%d]
Line 3022: nAtiState %d
Line 3033: TransferMode %d, InfoTransferCapabilty %d
Line 3097: Calling Party length = %d out of range
Line 3103: telNumber length = %d toa=%d
Line 3117: Already call present
Line 3121: First Call
Line 3198: Wanted : AtiExtError( pAtiCB, E_ME_UNKNOWN, AT_ERROR )
Line 3236: MO call type: pAtiCB->Ims_CallPresent: %d
Line 3242: Disconnect received with Progress Indicator set to in-band info
Line 3304: NS_REL_IND,SId=%u, Cause=%u
Line 3325: NS_ECT_RSP
Line 3343: [NS_CBST_PARAMS_SET_IND]bearer type %d, Speed %d, Name %d, Ce %d
Line 3388:  - CodingScheme = %d, CodingGroup = %d
Line 3416:  - Coding Group = %d - NOT SUPPORTED
Line 3436: NS_USSD_TERMINATE_IND(%d)
Line 3446: NS_NOTIFY_SS_IND
Line 3600: Command Timer Stopped [%s] [%d]
Line 3616: SimPresentMode=%d
Line 3659: TrayInsert=%d
Line 3678: isSimInserted %d, bSimOnePresent %d, bSimTwoPresent %d
Line 3695: ePinType =%d, PIN1Status = %d, UNBLKPIN1Status = %d, PIN2Status = %d, UNBLKPIN2Status = %d
Line 3698: PIN1RemainCnt = %d, PIN2RemainCnt = %d, UNBLKPIN1RemainCnt = %d, UNBLKPIN2RemainCnt = %d, SimPresent = %d
Line 3703: [ATI] NS Init. PCT enabled. atiInternalAttachValid = TRUE
Line 3708: [ATI] NS Init. PCT disabled. atiInternalAttachValid = FALSE
Line 3713: NO SIM
Line 3716: Command Timer Stopped [%s] [%d]
Line 3729: Command Timer Stopped [%s] [%d]
Line 3739: Command Timer Stopped [%s] [%d]
Line 3748: Invalid UNBLKPIN1Status =%d
Line 3759: Command Timer Stopped [%s] [%d]
Line 3768: Command Timer Stopped [%s] [%d]
Line 3788: [GCF_AUTO] NsSimInsertInd in ATI_HANDLERS : Start Network
Line 3795: Invalid PIN1Status =%d
Line 3831:  NS_AT_NC_NET_DEPERSON_IND,ePinType %d, NCK count %d
Line 3849: [ATI] Rcv AtiHandleNsNcMisMatchInd:Result %d, NCKType %d, NCKLockByDiffCard %d
Line 3922: ePinType %d
Line 3946: NS_NETWORK_SELECT_MENU : %d
Line 4009: NS_SIM_IO_CONTROL_RSP
Line 4016: AT+SIMPOWER NS_SIM_IO_CONTROL_RSP cmdType=%d, subType=%d
Line 4033: AT+SIMPOWER NS_SIM_IO_CONTROL_RSP Result %d
Line 4056: NS_SIM_ALL_SLOT_INFO_IND
Line 4066: slot%d 's slotId %d, state %d, eSimPresent %d, bActivated %d, bEnabled %d, stackId %d
Line 4068: ATRLength %d, EidLength %d
Line 4090: NS_SIM_ESIM_STATE_IND : Pin1Status = %d
Line 4109: Invalid PIN1Status received
Line 4134: NS_SIM_PIN_VERIFY_IND : PinCmdStatus = %d, RemAttpNum = %d
Line 4163: ePinType = %d
Line 4184: NS_AS_TYPE_IND, AsType %d
Line 4191: pAtiCB->eActRatMode, [%d]
Line 4210: AtiHandleNsServingCellInfoCnf: loc = %4X, cellid = %4X pAtiCB->PSC=%d
Line 4222: AtiHandleUpgradeCTMInd Type:%d
Line 4243: Command Timer Stopped [%s] [%d]
Line 4246: AtiRspPlusCTMEDIT: SUCCESS CTM
Line 4318: SCG_Status is %d
Line 272: unknown ActiveRat %d
Line 275: NS-> ATI Received ActiveRat %d ->Changed ActiveRat %d
Line 732: PlmnAttribute = %d,EmmStatus = %d
Line 738: setEmmStatus = %d
Line 760: PlmnAttribute = %d ,set EmmStatus = %d
Line 765: set EmmStatus = %d
Line 783: PlmnAttribute = %d,set EmmStatus = %d
Line 789: Unknown PlmnAttribute = %d ,Current EmmStatus = %d
Line 1123: AtiSubtractDate
Line 1180: AtiAddDate
Line 1694: LTE ATTACHED in PCT Case Base Ns SID:%d!!!!
Line 1729: Length = %d Invalid IP Address Range received
Line 1747: AtiHandleNsEGPRSPDPType: pAtiCB->CID_table[%d].PDP_Params.cid=%d
Line 1748: PdpType=%d, ApnLength=%d, AccessPointName
Line 1757: Cid_idx Out of Bound [%d]
Line 1796: Dedicated Bearer CID = %d, Linked CID = %d 
Line 1799: NS_EPS_PDP_ACTIVATE_IND Msg, ApnLength=%d, PdpAddressInfoLength=%d,tftlen=%d
Line 1835: [AtiHandleNsEGPRSPDPType:  pAtiCB->CID_sec_table[%d].PDP_Sec_Params.cid=%d
Line 1848: cid_sec_idx Out of Bound[%d]
Line 2074: Send the PDP context to PPP
Line 2123: dwDNS1 %d dwDNS2 %d
Line 2126: 0: %d, 1: %d, 2: %d, 3: %d
Line 2139: PdpAddressInfoLength  =%d, PdpAddressInformation =%d, Nsapi =%d, bDnsOption %d
Line 2852: ucActiveRat %d
Line 332: unknown ActiveRat mode (%d)
Line 335: Received ActiveRat %d ->Changed ActiveRat %d
