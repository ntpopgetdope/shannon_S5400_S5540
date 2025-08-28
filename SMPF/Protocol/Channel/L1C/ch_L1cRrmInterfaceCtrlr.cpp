Line 287: [L1C] RRM_L1C_WAKEUP_DONE_IND Result(%d) TimingOffset(%d)
Line 336: [L1C] RRM_L1C_RAT_RESUME_CNF Result(%d) isPtm(%d)
Line 357: [L1C] L1C_L1C_BCHCTRLR_SCG_SUSPEND_CNF_Handler : SCG delete, CurDomain(%d) -> Delete FT domain(%d)
Line 363: [L1C] L1C_L1C_BCHCTRLR_SCG_SUSPEND_CNF : RatType(%d) Type(%d) MsgGrpId(%d) Result(%d)
Line 385: RrmInterfaceCtrlr::L1C_L1C_IRATCFGCTRLR_SUSPEND_CNF_Handler::Rat(%d), Type(%d) MsgGrpId(%d) isPtm(%d)
Line 405: [L1C] SCG case, domain(%d) state(%d/%d/%d/%d)
Line 414: [L1C] SCG delete case, Fwd to MCG domain(%d)
Line 422: [L1C] SCG delete ready, send BCHCTRLR_SCG_SUSPEND_REQ
Line 473: [L1C] RRM_L1C_INIT_MEAS_CNF Result(%d) Band(%d) Arfcn(%d) NumMeasCell(%d)
Line 495: [L1C]	   INIT_MEAS_CNF Ant:0 CellId(%d) SsbIndex(%d) Rsrp(%d/100)dBm Sinr(%d/100)dB TimingOffset(%d)
Line 545: [L1C] RRM_L1C_MEAS_CNF Result(%d) Band(%d) Arfcn(%d) NumMeasCell(%d) RsType(%d)
Line 699: [L1C] RRM_L1C_MEAS_CNF Result(%d) Band(%d) Arfcn(%d) NumSsbSrchResult(%d) RsType(%d)
Line 700: [L1C] Gain at ObjectId=%d: %d, %d
Line 805: ##[NR_MEAS] IRAT MEAS CNF Result(%d) MeasRatType(%d) MeasType(%d) NumResult(%d) AgcGain[0](%d) NrResultFailCause(%d) ObjectId(%d)
Line 818: ##[NR_MEAS] IRAT MEAS CNF IsValid(%d) CellId(%d) CpType(%d) Rsrp(%d) Rsrq(%d) Sinr(%d) TimingOffset(%d)
Line 838: ##[NR_MEAS] IRAT MEAS CNF Result(%d) MeasRatType(%d) MeasType(%d) ObjectId(%d) CarrierFreq(%d) NumResult(%d)
Line 850: ##[NR_MEAS] IRAT MEAS CNF IsValid(%d) CellId(%d) Rssi(%d) Rsrp(%d) EcNo(%d) TimingOffset(%d)
Line 879: ##[NR_MEAS] MeasRatType(%d) MeasMode(%d) ctrlr_state(%d)
Line 923: ##[NR_MEAS] Abnormal MeasMode(%d)
Line 932: !!!! Undefined Rat Type (%d)
Line 969: [L1C] RRM_L1C_MEAS_SCHEDULE_IND RoutingInfo(%d) ModemStatus(%d) DrxRemainTime(%d) ServingSinr(%d, %d)
Line 974: [NR_MEAS] Disabled RRM_L1C_MEAS_SCHEDULE_IND. domain(%d) nrCtrlrState(%d/%d/%d/%d)
Line 1007: Undefined Rat Type
Line 1032: Undefined Rat Type
Line 1084: !!!! Undefined Rat Type (%d)
Line 1107: !!!! Undefined Rat Type (%d)
Line 1130: !!!! Undefined Rat Type (%d)
Line 1185: RAT Type is not NR, Rcvd RAT = %d
Line 1209: RAT Type is not NR, Rcvd RAT = %d
Line 1236: [L1C] RRM_L1C_INIT_SEARCH_CNF CgiConfigNr(%d)
Line 1273: RrmInterfaceCtrlr::L1C_L1C_RLSYNCCTRLR_RLM_STOP_CNF_Handler
Line 1285: [L1C] L1C_RRM_ALL_STOP_REQ RoutingInfo(%d) L1DomainType(%d) MsgGrpId(%d) nrCtrlrState(%d/%d/%d/%d)
Line 1304: [L1C] RRM_L1C_ALL_STOP_CNF RoutingInfo(%d)
Line 1321: [L1C] L1C_L1C_RRMINTERFACECTRLR_ALL_STOP_CNF_Handler L1DomainType(%d) MsgGrpId(%d)
Line 1392: [L1C] L1C_RRM_AS_STATE_IND AS state(%d) MsgGrpId(%d) domainType(%d) nrCtrlrState(%d/%d/%d/%d)
Line 1410: ##[NR_RLSYNC] Finish RLM...
Line 1425: ##[NR_RLSYNC] Stop RLM if any...
Line 1440: ##[NR_RLSYNC] Stop RLM if any...
Line 1455: ##[NR_RLSYNC] Stop RLM if any...
Line 1478: ##[NR_RRMINTERFACE] Unexpected AS state(RRML1C_STATE_NUM)
Line 1493: [WARNING] Unhandled RatType(%d)
Line 1527: RrmInterfaceCtrlr:: L1C_RRM_BCH_CONFIG_REQ_Handler:: RAT Info. Error (%d)
Line 1564: RrmInterfaceCtrlr::L1C_RRM_BCH_RELEASE_REQ_Handler, RAT Info. Error(%d)
Line 1572: RrmInterfaceCtrlr::L1C_L1C_RLSYNCCTRLR_BWP_CHANGE_CNF_Handler
Line 1579: RrmInterfaceCtrlr::L1C_RRM_BWP_CHANGE_REQ_Handler
Line 1593: [L1C] L1C_RRM_FREQ_SCAN_REQ_Handler failureCause(%d) pMsg(0x%x)
Line 1608: !!!! Rat Type is not NR, Rcvd RAT = (%d)
Line 1618: RrmInterfaceCtrlr::%s (RAT = %d)
Line 1625: [L1C] L1C_RRM_FREQ_SCAN_STOP_REQ RoutingInfo(%d)
Line 1638: !!!! Rat Type is not NR, Rcvd RAT = (%d)
Line 1664: Undefined Rat Type
Line 1675: RAT(%d)
Line 1690: Undefined Rat Type
Line 1707: [L1C] MsgGrpId(%d) domain(%d) nrCtrlrState(%d/%d/%d/%d)
Line 1727: RrmInterfaceCtrlr::Param of INIT_SRCH_REQ ERROR!!!
Line 1746: [L1C] L1C_RRM_INIT_SEARCH_REQ CgiConfigNr(%d)
Line 1762: Undefined Rat Type
Line 1783: [L1C] L1C_RRM_LOW_PWR_MODE_IND Cause(%d)
Line 1791: !!!! Undefined Rat Type (%d)
Line 1809: [L1C] MsgGrpId(%d) domain(%d) nrCtrlrState(%d/%d/%d/%d)
Line 1817: !!!! Undefined Rat Type (%d)
Line 1837: [L1C] L1C_RRM_MEAS_STOP_REQ GetRoutingInfo(%d)
Line 1843: Undefined Rat Type
Line 1866: !!!! Undefined Rat Type (%d)
Line 1903: [L1C] L1C_L1C_BCHCTRLR_SCG_RESUME_CNF_Handler : TargetRat(%d) MsgGrpId(%d) Type(%d)
Line 1930: [L1C] L1C_RRM_RAT_RESUME_REQ DomainType(%d) Type(%d %d) IsFeDvOn(%d) SASAMode(%d) BplmnAvailTime(%d) BplmnStartTime(%d)
Line 2005: [L1C] L1C_RRM_RAT_RESUME_REQ DomainType(%d) Type(%d %d) IsFeDvOn(%d) SASAMode(%d) BplmnAvailTime(%d) BplmnStartTime(%d)
Line 2023: RrmInterfaceCtrlr::L1C_RRM_RAT_SUSPEND_REQ_Handler TargetRat(%d) MsgGrpId(%d) SuspendResumeType(%d)
Line 2053: [L1C] L1C_RRM_RAT_SUSPEND_REQ Type(%d) domain(%d) state(%d/%d/%d/%d)
Line 2087: [L1C] L1C_RRM_SERVING_CELL_CHANGE_REQ domain_type(%d)
Line 2169: [L1C] RRM_L1C_SERVING_CELL_CHANGE_CNF Result(0x%x) Band(%d) ssbArfcn(%d) SubcarrierSpacing(%d) CellId(%d) CenterArfcn(%d) SibBandwitdh(%d)
Line 2220: !!!! Undefined Rat Type (%d)
Line 2243: RrmInterfaceCtrlr::L1C_L1C_BCHCTRLR_PBCH_DECODE_CNF_Handler, Rat(%d)
Line 2274: [L1C] L1TUNNEL_L1C_NR_4G_MEAS_CNF Band %d Arfcn %d CellId %d SsbIndex %d SCS %d sfn %d frameBoundaryOffset %d
Line 2301: [L1C] RRM_L1C_PBCH_DECODE_CNF Band %d SsbFreq %d SCS %d CellId %d BeamIndex %d RatType %d
Line 2316: !!!! Undefined Rat Type (%d)
Line 2354: RrmInterfaceCtrlr::L1C_RRM_PBCH_DECODE_REQ_Handler, Rat(%d)
Line 2360: !!!! Undefined Rat Type (%d)
Line 2396: [L1C] L1C_RRM_PHY_CONFIG_REQ MsgGrpId(%d), rnti(0x%x)
Line 2425: RrmInterfaceCtrlr::L1C_RRM_PHY_CONFIG_REQ_Handler:: MsgGrpId(%d), SCellBitmask(0x%x), AddModSCellBitmask(0x%x), ReleaseSCellBitmask(0x%x), Sib1ConfigFlag(%d), ReqType(%d), ReportTxDcList(%d)
Line 2429: [GAP_INFO] L1C_RRM_PHY_CONFIG_REQ_Handler:: GapInfoRequired(%d) NumRequestTargetBandFilterNR(%d)
Line 2438: RrmInterfaceCtrlr:: NrUeCapaInfo(Band = %d, MaxUlLayer = %d, IsBwpSwitchEnable = %d), GapInfoRequired = %d, isVoNrEnabled = %d
Line 2460: RrmInterfaceCtrlr:: Error not sending L1C_L1C_RLSYNCCTRLR_RLM_START_REQ as pSpcell NULL
Line 2476: RrmInterfaceCtrlr:: Error not sending L1C_L1C_RLSYNCCTRLR_RLM_START_REQ as pSib1 NULL
Line 2489: !!!! Undefined Rat Type (%d)
Line 2514: ##[NR_XPHY] PHY_CONFIG is done
Line 2535: [L1C] RRM_L1C_PHY_CONFIG_CNF Result(%d), reportUplinkTxDirectCurrentV1530(%d), NumNeedForGapsIntra(%d), NeedForGapsInter(%d)
Line 2561: [L1C] PHY_CHANGE_INFO_CNF_Handler Result(%d)
Line 2587: [L1C] PHY_CHANGE_INFO_CNF_Handler Result(%d)
Line 2636: [L1C] L1C_RRM_RESTRICTION_CONFIG_REQ_Handler Rat(%d), Level(%d), OneByOne(%d)
Line 2639: [L1C] L1C_RRM_RESTRICTION_CONFIG_REQ_Handler L1_OverHeatAs(%d), L2_MaxTxPwr(%d), L3_MaxTxAnt(%d), L4_NumRedMimo(%d), L5_NumRedCc(%d), L7_NumRedCc(%d)
Line 2666: [L1C] L1C_RRM_RESTRICTION_RELEASE_REQ_Handler Rat(%d), Level(%d)
Line 2708: RrmInterfaceCtrlr::L1C_L1TUNNEL_NR_4G_MEAS_REQ_Handler - MeasMode(%d)
Line 2716: Band(%d), SsbArfcn(%d), NumOfCell(%d), SubCarrierSpacing(%d), Periodicity(%d), IsGap?(%d)
Line 2725: CellId(%d), TimingOffset(%d), SsbIndex(%d) RxBeamIndex(%d), NumSsbToMeasure(%d), SsbToMeasure(0x%x, 0x%x)
Line 2734: SsbConfig => SmtcIncluded(%d), smtc.offset(%d), smtc.duration(%d), gap_start_time(%d), gap_length(%d)
Line 2769: SsbPattern(%d)
Line 2813: RrmInterfaceCtrlr::L1C_L1TUNNEL_NR_CDRX_CMD_IND_Handler
Line 2814: CmdType(%d), MacEntity(%d)
Line 2825: RrmInterfaceCtrlr::L1C_L1TUNNEL_NR_MEASSTOP_IND_Handler
Line 2858: [L1C] L1C_RRM_DRX_STATUS_IND DrxAvailable(%d) PendingCause(%d) RemainTime(%d) nrCtrlrState(%d/%d/%d/%d)
Line 2885: [WARNING] Unhandled RatType(%d)
Line 2916: [L1C] L1C_RRM_PRE_DRX_STATUS_IND HandShakeSkip(%d) MeasReserved(%d)
Line 2931: [WARNING] Unhandled RatType(%d)
Line 2998: [L1C] L1C_RRM_PREPARE_IRAT_CHANGE_REQ
Line 3034: [L1C] L1C_RRM_PREPARE_IRAT_CHANGE_STOP_REQ
Line 3051: [L1C] L1C_RRM_PREPARE_IRAT_CHANGE_CNF
Line 3077: [L1C] L1C_RRM_PREPARE_IRAT_CHANGE_STOP_CNF
Line 3113: [L1C] L1C_RRM_FEDV_STATE_IND_Handler (IsFeDvOn(%d))
Line 3125: RrmInterfaceCtrlr::L1C_RRM_FEDV_STATE_IND_Handler, Rat(%d)
Line 3131: !!!! Undefined Rat Type (%d)
Line 3155: [L1C] L1C_RRM_PHY_CHANGE_INFO_REQ_Handler mofi_flag(%d), ue_id(%d), ohc_modi(%d), ohc_enable(%d), tx_rsc_reset(%d)
Line 3200: [L1C] L1C_RRM_IMS_SERVICE_STATUS_IND_Handler:: NrImsStatus(%d), RxModeCtrl(%d)
