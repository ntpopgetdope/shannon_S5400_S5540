Line 141: %s
Line 145: SetULPdcpMeasValue DRBID %d, TimeDiif(0x%08x %08x), Cnt(%d)
Line 148: SetULPdcpMeasValue DRB %d
Line 243: SubCheckNodeConditionForAsConfig : Invalid CheckNode(%d)
Line 249: CheckNodeCondition: UserHandler CheckNode(%d) Result(%d)
Line 253: CheckNodeCondition: CurNode(%d) CheckNode(%d) Result(%d)
Line 496: SubCheckNodeAndSendNextMsgForAsConfig : L2 Config Condition(%d)
Line 511: CompNode(%d), ScgL2ConfigUpdated(%d), IsNrdcScgUpdated(%d), NrdcSCgConfigPresent(%d)
Line 515: NRDC MCG L2 CONFIG. SCG L2 CONFIG will be sent
Line 535: SubCheckNodeAndSendNextMsgForAsConfig : Security Config Condition(%d)
Line 550: SubCheckNodeAndSendNextMsgForAsConfig : Phy Config Condition(%d)
Line 566: SubCheckNodeAndSendNextMsgForAsConfig : Meas Config Condition(%d)
Line 582: SubCheckNodeAndSendNextMsgForAsConfig : ProcedureId(%d) Invalid CurNode(%d)
Line 671: TriggerStateChange : RrcState(%s)
Line 680: SubCheckNodeConditionForRandomAccess : Invalid CheckNode(%d)
Line 870: [RRC][NRSTATE] ChangeState : RrcState(%s)
Line 870: [RRC][NRSTATE] ChangeState : RrcState(%s)
Line 927: SubCheckNodeAndSendNextMsgForRandomAccess : ProcedureId(%d) Invalid CurNode(%d)
Line 964: CheckNodeCondition: SubCheckNodeConditionForEssentialSIAcq : Receive CellAcqReq
Line 979: CheckNodeCondition: SubCheckNodeConditionForEssentialSIAcq : BchConfigCnf
Line 991: CheckNodeCondition: SubCheckNodeConditionForEssentialSIAcq : Receive TSib1ExpireyInd
Line 1002: CheckNodeCondition: SubCheckNodeConditionForEssentialSIAcq : Receive SIB1_IND
Line 1030: CheckNodeCondition: SubCheckNodeConditionForEssentialSIAcq : CellStatusReq_Needed
Line 1037: SubCheckNodeConditionForFailureInformationMsg : Invalid CheckNode(%d)
Line 1043: CheckNodeCondition: UserHandler CheckNode(%d) Result(%d)
Line 1047: CheckNodeCondition: CurNode(%d) CheckNode(%d) Result(%d)
Line 1061: SubCheckNodeConditionForEssentialSIAcq : CurNode %d
Line 1068: SubCheckNodeConditionForEssentialSIAcq : BchConfigReq_Needed Condition(%d)
Line 1078: [NR][EssentialSIAcq]-->RRC_SEND_EXTMSG(RRM_RRC_BCH_CONFIG_REQ)
Line 1091: SubCheckNodeConditionForEssentialSIAcq : BchConfigReqCnf_Result Condition(%d)
Line 1106: SubCheckNodeConditionForEssentialSIAcq : OPT NoSIB1 Condition(%d)
Line 1119: SubCheckNodeConditionForEssentialSIAcq : OPT ReceiveSib1 Condition(%d)
Line 1133: SubCheckNodeConditionForEssentialSIAcq : BchReleaseReq_Needed Condition(%d)
Line 1147: SubCheckNodeConditionForEssentialSIAcq : CellStatusReq_Needed Condition(%d)
Line 1150: RRC_SEND_EXTMSG(RRM_RRC_CELL_STATUS_REQ)
Line 1175: CheckNodeCondition: SubCheckNodeConditionForFailureInformationMsg :  failure for an MCG RLC bearer
Line 1180: CheckNodeCondition: SubCheckNodeConditionForFailureInformationMsg :  failure for an SCG RLC bearer
Line 1191: CheckNodeCondition: SubCheckNodeConditionForFailureInformationMsg :  failure for an SCG RLC bearer
Line 1196: CheckNodeCondition: SubCheckNodeConditionForFailureInformationMsg :  failure for an SCG RLC bearer
Line 1208: CheckNodeCondition: SubCheckNodeConditionForFailureInformationMsg : SRB3 is configured
Line 1213: CheckNodeCondition: SubCheckNodeConditionForFailureInformationMsg : SRB3 is NOT configured
Line 1219: SubCheckNodeConditionForFailureInformationMsg : Invalid CheckNode(%d)
Line 1225: CheckNodeCondition: UserHandler CheckNode(%d) Result(%d)
Line 1229: CheckNodeCondition: CurNode(%d) CheckNode(%d) Result(%d)
Line 1246: SubCheckNodeConditionForFailureInformationMsg : MCG_RLC Condition(%d)
Line 1271: ScgFailureReport is in progress
Line 1280: SubCheckNodeConditionForFailureInformationMsg : Failure Information for SCG RLC
Line 1290: SubCheckNodeConditionForFailureInformationMsg : SRB3 Config Condition(%d)
Line 1303: ScgFailureReport is in progress
Line 1314: SubCheckNodeAndSendNextMsgForAsConfig :  Invalid CurNode(%d)
Line 1325: SetFailureInfo : cellGroupID[%d], LcId[%d] , bDupActDeact[%d]
Line 1540: NrRrcProcessNoNeedToDbUpdateInEndc: Set WaitAsCfgStartInd to %d
Line 1591: [LowPwrCtrl] IsEventA2MeasConfigured MsgGrpId %d
Line 1603: [LowPwrCtrl] MeasConfig is not present
Line 1626: [LowPwrCtrl] EventA2 is configured for MeasId(%d) MeasObjId(%d) ReportConfigId(%d)
Line 1681: UpdateNsaCurrentSpCell: CellGrpId(%d) PhysCellId(%d) CarrierFreqDl(%d)
Line 1689: %s
Line 1694: TerminateProcedureOthers Result: Success
Line 1698: TerminateProcedureOthers Result: Failure
Line 1712: RemoveAllDeferMsgByPbd Result: Success
Line 1716: RemoveAllDeferMsgByPbd Result: Failure
Line 1728: ProcessEndcRelease: ReleaseOption(%d) (Rec_Cnt(Req:%d, Suc:%d))
Line 1791: %s
Line 1847: NrRrcReleaseEndcConfigExceptRbConfig: ReleaseOption(%d) (Rec_Cnt(Req:%d, Suc:%d))
Line 1860: %s
Line 1916: ProcessNrdcRelease 
Line 1929: %s
Line 1955: Procedure will be deferred in waiting DB revert ind state.
Line 1976: DbCopyAfterConfigSuc: Copy Shared DB to Revert DB!
Line 1993: DbCopyAfterConfigFail: Copy Revert DB to Shared DB!
Line 1998: Send RB Info to LTE because RB Info was changed after DB revert.
Line 2017: %s
Line 2174: %s
Line 2184: [L2][NWE][FULLCONFIG] fullconfig without ReconfigWithSync
Line 2194: %s
Line 2201:  GetNrRrcOperator Plmn = 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 2210: [L2][NWE] SkipUplinkTxDynamic is true but UE doesn't support it
Line 2224: [RRM][MEASID] RmvdIdx(0x%08x %08x) AddedIdx(0x%08x %08x) ListIdx(0x%08x %08x)
Line 2229: [RRM][MEASOBJ] RmvdIdx(0x%08x %08x) AddedIdx(0x%08x %08x) ListIdx(0x%08x %08x)
Line 2234: [RRM][RPTCFG] RmvdIdx(0x%08x %08x) AddedIdx(0x%08x %08x) ListIdx(0x%08x %08x)
Line 2312: %s
Line 2340: [RRM][NWE] MeasObjId %d %d has same ssbFrequency %d on SSB based measurements
Line 2358: [RRM][NWE] MeasObjId %d %d has same CarrierFreq %d 
Line 2368: [RRM][NWE] MeasObjId %d %d has same CarrierFreqR16 %d 
Line 2400: [RRM][NWE][MEASOBJ] ssbFrequency %d invalid
Line 2406: [RRM][NWE][MEASOBJ] EUTRA is not supported
Line 2417: %s
Line 2438: [RRM][NWE] measObjId %d is not NR, while UE operating mode is NR ONLY MODE
Line 2449: [RRM][NWE] If measObjId %d is not NR, reportCfgId %d should not be NR either
Line 2467: [RRM][NWE] If measObjId %d is NR, reportCfgId %d should also be NR
Line 2482: [RRM][MEASID] RmvdIdx(0x%08x %08x) AddedIdx(0x%08x %08x) ListIdx(0x%08x %08x)
Line 2489: %s
Line 2507: %s
Line 2659: [MultiEndc] Error UL Intra Comb Num(%d)(%d) DL Intra Comb Num(%d)(%d)
Line 2767: [MultiEndc] Band(%d)(%d)(%d)(%d)(%d)(%d)... are belong to supported ENDC Comb
Line 2768: [MultiEndc] ULAvail(%d)(%d)(%d)(%d)(%d)(%d)... are belong to supported ENDC Comb
Line 2790: [MultiEndc] Band(%d)(%d)(%d)(%d)(%d)(%d)... are not belong to supported ENDC Comb
Line 2791: [MultiEndc] ULAvail(%d)(%d)(%d)(%d)(%d)(%d)... are not belong to supported ENDC Comb
Line 2796: [MultiEndc] Input Band(%x) Superset Num(%d)
Line 2803: %s
Line 2895: [MultiEndc] InputBandNum(%d) InputBand(%d)(%d)(%d)(%d)(%d)(%d)...
Line 2897: [MultiEndc] InputBandNum(%d) ULAvail(%d)(%d)(%d)(%d)(%d)(%d)...
Line 2909: %s
Line 2953: %s
Line 2976: %s
Line 2991: %s
Line 3008: [RRC] Set NrOpMode(%s)
Line 3008: [RRC] Set NrOpMode(%s)
Line 3019: [NRRRC][EssentialSIAcq] RRC_TIMER_NR_TSIB1_EXPIRY_IND PBD Pid : %d,  state:%d
Line 3149: [RRC][NWMSG][R] MIB
Line 3149: [RRC][NWMSG][R] MIB
Line 3151: [RRC][NRCELL] CellBarred:%s PdcchConfigSib1:%d systemFrameNum[0]:%d systemFrameNum[1]:%d
Line 3151: [RRC][NRCELL] CellBarred:%s PdcchConfigSib1:%d systemFrameNum[0]:%d systemFrameNum[1]:%d
Line 3152: [NRCELL]IntraFreqResel:%d halfFrameIndex:%d SubCarrierSpacingCommon:%d
Line 3153: [NRCELL]SsbIndexEplicit:%d SsbSubCarrierOffset:%d
Line 3169: Sib1 does not exist. SsbSubCarrierOffset(%d) MibInfo.kSsb(%d) MAX_KSSB_VALUES_FR1(%d)
Line 3183: Sib1 does not exist. SsbSubCarrierOffset(%d) MibInfo.kSsb(%d) MAX_KSSB_VALUES_FR2(%d)
Line 3192: FR1/FR2 check error
Line 3195: Sib1Broadcasting %d
Line 3212: Do not check CellBarred
Line 3225: Cause is not valid
Line 3285: [NRCELL] failCause %d
Line 3296: [NRCELL] BarredFreq: ReselRestriction Arfcn %d
Line 3302: [NRCELL] Arfcn %d Cell %d
Line 3306: [NRCELL] BarredFreq: L2N Irat ReselRestriction Arfcn %d
Line 3359: %s
Line 3370: [NRRRC][Sib1]UpdateCellInfoBySib1Ind : Serving cell information is wrong
Line 3387: [NRRRC][Sib1]UpdateCellInfoBySib1Ind : Result :%d
Line 3395: [NRRRC] Send(-->RRC_RRC_NR_CELL_SEL_START_IND(CellCause:%s))
Line 3406: State is same as before, so do nothing
Line 3411: TriggerStateChange : RrcState(%s)
Line 3423: [RRC][NRSTATE] ChangeState : RrcState(%s)
Line 3423: [RRC][NRSTATE] ChangeState : RrcState(%s)
Line 3447: [VirtualSib24][Metrics] ChangeState : (%s)->(%s)
Line 3447: [VirtualSib24][Metrics] ChangeState : (%s)->(%s)
Line 3455: [VirtualSib24][Metrics] Entering idle state at time: %dms
Line 3455: [VirtualSib24][Metrics] Entering idle state at time: %dms
Line 3467: [VirtualSib24][Metrics] Leaving idle state at time: %dms
Line 3467: [VirtualSib24][Metrics] Leaving idle state at time: %dms
Line 3469: [VirtualSib24][Metrics] Duration of camped on idle: %ds
Line 3469: [VirtualSib24][Metrics] Duration of camped on idle: %ds
Line 3504: [VirtualSib24][Metrics] report succeed, hplmn[%d], serving_plmn[%d], idle duration[%ds]
Line 3504: [VirtualSib24][Metrics] report succeed, hplmn[%d], serving_plmn[%d], idle duration[%ds]
Line 3508: [VirtualSib24][Metrics] report failed
Line 3508: [VirtualSib24][Metrics] report failed
Line 3528: [RrcSteadyState] Enter %s(%d)
Line 3528: [RrcSteadyState] Enter %s(%d)
Line 3531: [RrcSteadyState] Enter %s(%d)
Line 3531: [RrcSteadyState] Enter %s(%d)
Line 3534: [RrcSteadyState] Enter %s(%d)
Line 3534: [RrcSteadyState] Enter %s(%d)
Line 3537: [RrcSteadyState] Wrong value
Line 3537: [RrcSteadyState] Wrong value
Line 3590: [NRCELL] There is no SIB1 info %d
Line 3673: [NETSCAN] Arfcn:%d Pci:%d Nci:%ld Tac:%d Serving:%d PlmnCount:%d
Line 3677: [NETSCAN] plmn[%d] 0x%x 0x%x 0x%x
Line 3688: [NETSCAN] Rsrp:%d Rsrq:%d Sinr:%d
Line 3694: [NETSCAN] Cell status is not OK
Line 3699: [NETSCAN] NETSCAN_NONE
Line 3750: [NRBPLMN][BLIND] Add SaBlkSrchResult[%d] Arfcn:%d Scs:%d Pci:%d Rsrp:%d NumPlmn:%d
Line 3756: [NRBPLMN][BLIND] PlmnList MCC [%d %d %d] MNC [%d %d %d]
Line 3763: [NRBPLMN][BLIND] Not Add : cause %d
Line 3802: [NRCELL] GetRrcAvailStatusFromPlmnInfoList availStatus %d
Line 3862: [NRCELL] AddRaFailList Band %d Arfcn %d Pcid %d TimeStamp %d Duration %d FailCnt %d
Line 3864: [NRCELL] AddRaFailList Plmn %x%x%x %x%x%x
Line 3903: [NRCELL] AddRreFailList Band %d Arfcn %d Pcid %d TimeStamp %d Duration %d FailCnt %d
Line 3905: [NRCELL] AddRreFailList Plmn %x%x%x %x%x%x
Line 3943: [NRCELL] AddConRejectList Band %d Arfcn %d Pcid %d TimeStamp %d Duration %d FailCnt %d
Line 3945: [NRCELL] AddConRejectList Plmn %x%x%x %x%x%x
Line 3999: [NRCELL] AddNotRetryCellList Band %d Arfcn %d CellId %d FailCause %d IsAlwaysBarred %d
Line 4006: [NRCELL] Init ReselFailInfo
Line 4022: [NRCELL] ReselFailInfo, Arfcn:%d, CellId:%d, CellReselFailCnt :%d 
Line 4032: [NRCELL] New ReselFailInfo, Arfcn:%d, CellId:%d
Line 4052: [FEATURE_AP_BASED_EMC] NrRrcCellSelCheckApBasedEmcBarredCellList
Line 4068: [NRCELL] ApEmcBarredCellInfo Arfcn:%d Band:%d CellId:%d is Barred
Line 4088: [FEATURE_AP_BASED_EMC] NrRrcCellSelBarCellForApBasedEmc IsForcedBarring (%d) NrCellSelectionCause (%d) cause (%d)
Line 4108: [FEATURE_AP_BASED_EMC] Add to NrApBasedEmcBarredCellList Band %d Arfcn %d CellId %d FailCause %d
Line 4116: [FEATURE_AP_BASED_EMC] UpdateLastConnectedCellInfo Band (%d) Arfcn (%d) CellId (%d)
Line 4137: SaveServingCellInfo : IsforModifty %d 
Line 4153: [NRCELL] pTcellInfo Dynamic Alloc Error!!!!!
Line 4160: [NRCELL] CopyLatestSib1ToTcellInfo Error!!!!!
Line 4225: [NRCELL] pCellInfo is null, so do nothing
Line 4265: %s
Line 4290: [Qoffsettemp] Band %d, Arfcn %d, CellId %d
Line 4300: [Qoffsettemp] SIB1 include ConnEstFailureControl
Line 4306: [Qoffsettemp] already current cell info is an entry of NrCellQoffsettempInfoList.
Line 4308: [Qoffsettemp] Qoffsettemp in NrCellQoffsettempInfoList (%d)
Line 4314: [Qoffsettemp] count %d
Line 4318: [Qoffsettemp] connEstFailCount %d
Line 4323: [Qoffsettemp] duration %d seconds
Line 4327: [Qoffsettemp] ConnEstFailOffset %d
Line 4337: [Qoffsettemp] ConnEstFailOffset is infinity value
Line 4382: PC1DOT5 Band n(%d) Not support UL-MIMO(%d)
Line 4407: PC1DOT5 available Band n(%d)
Line 4423: PC1DOT5_ENABLE value is %d
Line 4447: SA Nrdc Phase: %d
Line 4461: %s
Line 4471: [NR MRU] (registry update) num : %d
Line 4476: [NR MRU] (from DB) iter->Band %d Arfcn %d, iter->SubCarrierSpacingSSB %d
Line 4487: [NR MRU] (registry update) index %d band %d arfcn %d, scs %d
Line 4497: [RRC][NR NETCTRL] (from registry) size of User Freq info %d
Line 4497: [RRC][NR NETCTRL] (from registry) size of User Freq info %d
Line 4504: %s
Line 4513: [NR MRU] currentBand : %d currentArfcn : %d
Line 4516: [NR MRU] MruFreqInfo.size : %d
Line 4522: [NR MRU] iter->Band %d Arfcn %d
Line 4532: [NR MRU] iter->Band %d Arfcn %d
Line 4546: [NR MRU] MruFreq.Band %d Arfcn %d, MruFreq.SubCarrierSpacingSSB %d
Line 4553: [NR MRU] Force to sync the new MRU in MRU registry
Line 4567: %s
Line 4586: [NR DETECTED] Band %d Arfcn %d Scs %d
Line 4588: [NR DETECTED] Plmn %d%d%d %d%d
Line 4597: [NR DETECTED] ARFCN (%d) SCS (%d) BAND (%d) Already present in list[%d]
Line 4609: [NR DETECTED] PLMN (%d%d%d %d%dF) Already present in plmn[%d]
Line 4622: [NR DETECTED] Add new : arfcn[%d]%d plmnIdx[%d] plmnMap[%d]0x%x
Line 4633: [NR DETECTED] Add arfcn : arfcn[%d]%d plmnIdx[%d] plmnMap[%d]0x%x
Line 4641: [NR DETECTED] Add plmn : arfcn[%d]%d plmnIdx[%d] plmnMap[%d]0x%x
Line 4648: [NR DETECTED] Add map : arfcn[%d]%d plmnIdx[%d] plmnMap[%d]0x%x
Line 4653: [NR DETECTED] max size
Line 4661: [NR DETECTED] regiNumOfArfcn %d RegiNumOfPlmn %d
Line 4670: [NR DETECTED] [%d] ARFCN %d scsBand 0x%x plmnMap 0x%x
Line 4676: [NR DETECTED] [%d] PLMN %d
Line 4688: SIB1 : AddPLMNInfo
Line 4714: PLMN info %x%x%x %x%x%x
Line 4729: [NRBPLMN] AddServingCellPlmnInfo
Line 4754: PLMN info %x%x%x %x%x%x
Line 4774: Update Fail Cause %d
Line 4781: %s
Line 4819: [NETSCAN] UpdateNetScanInfo : SrchMode(%d), Support BandNum is 0
Line 4847: [NETSCAN] UpdateNetScanInfo ScanMode(%d) SrchType(%d)
Line 4872: GetMccSearchPlmnInfo : MCC Info  %x %x %x
Line 4873: GetMccSearchPlmnInfo : MNC Info  %x %x %x
Line 4886: [NRCELL] GetMccInfo : There is no SIB1 info %d
Line 4937: [Registry] BlockBand NumOfMcc %d NumOfBand %d
Line 4979: Freq Range Check %d
Line 4989: [IRAT_FDB] SupportofIratFreqDb %d
Line 4999: EtwsCmasSupport %d
Line 5011: [RRC][UECAPA] (ReadAsReleaseFallackPlmnInfoFromRegistry) numOfPlmn : %d
Line 5011: [RRC][UECAPA] (ReadAsReleaseFallackPlmnInfoFromRegistry) numOfPlmn : %d
Line 5021: [RRC][UECAPA] (ReadAsReleaseFallackPlmnInfoFromRegistry)  Rel Ver[%d] : %x
Line 5021: [RRC][UECAPA] (ReadAsReleaseFallackPlmnInfoFromRegistry)  Rel Ver[%d] : %x
Line 5022: [RRC][UECAPA] (ReadAsReleaseFallackPlmnInfoFromRegistry)  Plmn Id[%d] : %x
Line 5022: [RRC][UECAPA] (ReadAsReleaseFallackPlmnInfoFromRegistry)  Plmn Id[%d] : %x
Line 5053: %s
Line 5078: %s
Line 5086: [RRC][WA] TReordering value is adjusted to ms1000 for SRB1
Line 5118: [NRUECAPA] Registry !NRRRC.NR_CONN_REL_ON_SMC_FAIL (%d)
Line 5136: [RRC][RECOVERY] Set RecoveryMode(%d)
Line 5152: [RRC][RECOVERY] Set LockPrcd(%s)
Line 5334: [RRC][RECOVERY] No Response for NR RAT_RESUME_REQ
Line 5339: [RRC][RECOVERY] No Response for NR %s
Line 5349: [RRC][RECOVERY] NrRrcRecoveryAfterLockTimerExpiry: RecoveryMode(%d)
Line 5378: [RRC][RECOVERY] NrRrcProcessLockTimerExpiry: IsWatchDogCrashMode(%d) NR_RECOVERY_MODE(%d)
Line 5415: Remove the deferred messages(MsgId: 0x%x)
Line 5425: [ClearIratMemAllocInfo] RrcIratInfo(0x%x), HoContainer(0x%x)
Line 5559: IsSrsTxSwitchConfigured: Invalid CellGroupType
Line 5572: IsSrsTxSwitchConfigured: pUplinkConfig is NULL
Line 5597: IsSrsTxSwitchConfigured: SrsResourceSet is configured
Line 5640: IsSrsTxSwitchConfigured: SrsResourceSet is configured
Line 5671: [LowPwrCtrl] Trigger UE capa update because SRS is configured(SelectedCause(0x%x))
Line 5677: [LowPwrCtrl] Trigger UE capa update to restrict UE capa(SelectedCause(0x%x))
Line 5686: [LowPwrCtrl] Trigger UE capa update to restore UE capa(SelectedCause(0x%x))
Line 5713: [LowPwrCtrl] SetNrOverHeatMode(%d)
Line 5755: [NR_SILENCE_MODE] CheckSaSilenceCondition: GetRrcSteadyState(%d) IsSaSilenceOn(%d) ImsServiceType(%d) Operation(%d) CurrentUeMode(%d) S1ModeEnabled(%d)
Line 5778: [NR_SILENCE_MODE] CheckFakeN2lOfSaSilenceCondition: IsSaSilenceOn(%d) ImsServiceType(%d) Operation(%d) CurrentUeMode(%d) S1ModeEnabled(%d)
Line 5801: [NR_SILENCE_MODE] SetSaSilenceState (%d -> %d)
Line 5828: [NR_SILENCE_MODE] force switch not working
Line 5840: [NR_SILENCE_MODE] StartSaSilenceTimer %d ms
Line 5853: [NR_SILENCE_MODE] Start N2L redirection
Line 5900: [LowPwrCtrl] SendLowPwrModeToLowLayer:  NRDC Scg not config ignore LPM IsNRScg(%d) NRDC ScgState(%d)
Line 5926: [LowPwrCtrl] SendLowPwrModeToLowLayer: LowLayerTempCtrl(%d) Cause(0x%x)
Line 5933: [LowPwrCtrl] SendLowPwrModeToLowLayer: SelectedCause(0x%x) RrcLowPwrState(0x%x) L1LowPwrState(0x%x) IsNRDCScg(%d)
Line 6034: [LowPwrCtrl] %d. Cause(0x%x) Action(0x%x)
Line 6091: [SetImsCallStatus] invalid mmOperation(%d)
Line 6101: [SetImsCallStatus] ImsCallStatus changed(%d -> %d)
Line 6108: MsgGrpId(%d) : l2Msg->MsgGrpId(%d)
Line 6126: MsgGrpId(%d) : RRC_RRM_RAT_RESUME_CNF->MsgGrpId(%d)
Line 6139: MsgGrpId(%d) : RRC_RRM_RAT_SUSPEND_CNF->MsgGrpId(%d)
Line 6152: MsgGrpId(%d) : rrmMsg->MsgGrpId(%d)
Line 6170: CheckMsgGroupId() for MsgGrpId(%d). from SrcId(0x%x)
Line 6175: checking MsgGrpId in RRM IF
Line 6179: checking MsgGrpId in L2 IF
Line 6183: There is no MsgGrpId in this IF. bCheckResult is TRUE
Line 6190: MRDC mode (%d) is not NRDC. do not check MsgGrpId to handle this message
Line 6236: [Redirection] RAT mode %d
Line 6239: [Redirection] LTE RAT is enable. trigger IRAT redirection to LTE
Line 6247: [Redirection] SA silence mode is enable. trigger fake IRAT redirection to LTE
Line 6266: [CheckMeasurementBasedIrat] Check Arfcn(%d) MeasIdListIdx(0x%08x %08x) ReportConfigListIdx(0x%08x %08x) MeasObjListIdx(0x%08x %08x)
Line 6305: [CheckMeasurementBasedIrat] measId(%d) reportConfigId(%d) EventB(%d) MeasObjId(%d) Arfcn(%d): LastReportedTime(%d) elapsedTime(%d)
Line 6418: Resolve the deferred RRC_LTERRC_NSA_SCG_CONFIG_REQ messages
Line 6573: [ActSecurityAlgo] masterAlgoUpdated(%d) masterCipheringAlgorithm(%d) masterIntegrityAlgorithm(%d)
Line 6587: [ActSecurityAlgo] secondaryAlgoUpdated(%d) secondaryCipheringAlgorithm(%d) secondaryIntegrityAlgorithm(%d)
Line 6595: %s
Line 6656: [ActSecurityAlgo] isEmergencyServiceOngoing(%d) masterAlgoUpdated(%d) secondaryAlgoUpdated(%d) IsUnprotectedEmergency(%d)
Line 6670: [RSSI] RssiScanOrder : (%d)
Line 6714: [RSSI] RssiScanNonValidSearch : (%d)
Line 6719: [NRCELL][RSSI] Restart Full Search for non-valid subband
Line 6729: %s
Line 6764: %s
Line 6801: CheckToWaitNrdcScgL2Config result : %d
Line 6813: isSubThreadEnable : (%d)
Line 6820: %s
Line 6826: This function is not SubThread. Do not trigger mutex lock
Line 6846: This function is not SubThread. Do not trigger mutex lock
Line 6858: %s
Line 6864: This function is not SubThread. Do not trigger mutex lock
Line 6880: [NRUECAPA] NrUeCapaMain for NR Capa
Line 6888: This function is not SubThread. Do not trigger mutex lock
Line 6900: %s
Line 6906: [NRUECAPA] simStatus = (%d)
Line 6912: [NRUECAPA][RRC_MM_RAT_RESUME_REQ_Hdlr] DB setup FAILED
Line 6971: [N2L] Set N2LHoState %d->%d
Line 6982: [NECELL] BarringConReject : (%d)
Line 7003: [IsHomePlmn] Selected plmn is NULL
Line 7006: [IsHomePlmn] SelectedPlmn PLMN  - mcc:%x%x%x mnc:%x%x%x
Line 7008: [IsHomePlmn] - [%d]
Line 7058: [IsHomePlmn]  - mcc:%x%x%x mnc:%x%x%x
Line 7063: [%d] Home PLMN
Line 7068: [IsHomePlmn] IsHomeplmnVar [%d]
Line 7083: Abort Cell Sel procedure
