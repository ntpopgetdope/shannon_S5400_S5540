Line 389: %s
Line 396: [THERMAL] RRC_L2_RESTRICTION_CTRL_CNF_Hdlr: MsgGrpId(%d) Rat(%d) Result(%d) Level(%d)
Line 421: [THERMAL] Updated ThermalConfig: Rat(%d) LevelBitmap(%d)
Line 461: %s
Line 468: [THERMAL] RRC_L2_RESTRICTION_REL_CNF_Hdlr: MsgGrpId(%d) Rat(%d) Result(%d) Level(%d)
Line 493: [THERMAL] Updated ThermalConfig: Rat(%d) LevelBitmap(%d)
Line 535: %s
Line 541: RRC_L2_CONFIG_CNF_Hdlr is called in single step procedure(Result:%d))
Line 546: Reset SendL2CfgReqForRbInfo to false.
Line 572: %s
Line 582: Rcvd L2DataCnf: RbId(%d) pdu_ack_id(%d) Result(%s) Reason(%d)
Line 587: [MUI] Mui matched! nasCnfNeed: %d, msgType: %d, nasMui: %d
Line 681: [MUI] Mui matched! msgType: %d
Line 763: [MUI] Mui mismatch! rRxMsg.pdu_ack_id: %d
Line 864: RRC received indication of DataInactivityTimer expiry. Going to RRC_IDLE Pbd will be triggered
Line 900: Ignore RRC_L2_DATA_IND in RRM suspend state
Line 933: %s
Line 955: Data Ind : RbID(%d) Length(%d)
Line 958: Data : 
Line 962: Data Ind : No Data
Line 971: Data Ind : Wrong RbID(%d)
Line 981: [NRSIB][IGNORE] SI received by the RRC between BCH RELEASE REQ and CNF is ignored
Line 986: [NRSIB][IGNORE] SI additionally received before BCH channel RELEASE is ignored
Line 1048: Data Ind : RbID(%d) Length(%d)
Line 1051: Data : 
Line 1055: Data Ind : No Data
Line 1063: Data Ind : Wrong RbID(%d)
Line 1086: ASN.1 Decode ErrorCode(%d) : NrScgConfig String len(%d))
Line 1098: Ignore Wrong DL DCCH Msg : choice(%d)
Line 1108: Ignore DL DCCH Msg : c1 choice(%d)
Line 1139: AsnCodecResult.CodecReturnCode - (%d)
Line 1176: ASN Decode fail
Line 1229: [QTM]RRC_L2_DATA_IND_T AllocMsg fail!
Line 1253: [QTM]RRC_L2_DATA_IND_T AllocMsgBodyElem fail!
Line 1262: [QTM][ERROR] SendMsg RRC_L2_DATA_IND fail!
Line 1273: [QTM] GetTargetLteArfcn() return LTE arfcn is %d
Line 1281: [QTM]RRC_L2_QOS_IND triggered action is N2L redirection!
Line 1287: [QTM]Ignore RRC_L2_QOS_IND since action is N2L but not in 5GSA mode!
Line 1303: [QTM]Ignore N2L redirection due to other procedures ongoing! Susp:%d,Reconf:%d,GotoIdle:%d,RRCRelease :%d,N2LHO: %d,N2LRedir:%d
Line 1315: Ignore RRC_L2_QOS_IND in RRM suspend state
Line 1333: %s
Line 1340: [QTM] RRC_L2_QOS_IND received with Domain Type %d
Line 1341: [QTM] QosEvent %d, QosAction %d, CellRat %d, CellGroupId %d
Line 1348: [QTM] RRC_L2_QOS_IND ignored due to feature disabled!
Line 1355: [QTM] RRC_L2_QOS_IND ignored due to IMS service ongoing! 
Line 1362: [QTM] State is %d, RRC_L2_QOS_IND ignored due to state not ready!
Line 1371: [QTM] Current RRC State is %d, not in RRC_STATE_CONN so RRC_L2_QOS_IND ignored!
Line 1378: [QTM] LTE RAT not supported: IsEutraModeEnabled() is %d, RRC_L2_QOS_IND ignored!
Line 1412: [QTM]QosAction: %d  not recognized- ignore the current indication
Line 1419: [QTM]CellInfo has invalid information:arfcn %d  PhyCellId %d band %d - ignore the current indication
Line 1426: [QTM]Event not ready to handle- QtmEventReadyToHandle return false!
Line 1434: [QTM] Event Offset is %d 
Line 1483: [QTM] Rsrp is %d, Rsrq is %d, PoorSig is %d
Line 1490: [QTM] Current Timestamp is %d
Line 1512: [QTM] EventExpireTimestamp is %d , ActionIntervalTimestamp is %d
Line 1531: [QTM] No LTE target available, skip N2L Redir!
Line 1590: Integrity check failure MsgGroupType %d
Line 1598: Integrity check failure! SRB ID %d
Line 1612: [NRRRC][RRE] RRC connection re-establishment Cause: %s(%d)
Line 1612: [NRRRC][RRE] RRC connection re-establishment Cause: %s(%d)
Line 1623: Integrity check failure! DRB ID %d
Line 1627: Integrity check failure! but unexpected RB ID
Line 1634: Integrity check failure! MsgGrpId ID SCG
Line 1639: Invalid SRBId In NRDC SCG. servedRb(%d), RbId(%d)
Line 1693: RLC max retransmission! MsgGroupType %d
Line 1702: [RLF] Local release has been requested!
Line 1712: [RRC][RLF] RLC max retransmission! bDupActDeact: %d, LcId: %d, bLocalRelease: %d
Line 1712: [RRC][RLF] RLC max retransmission! bDupActDeact: %d, LcId: %d, bLocalRelease: %d
Line 1741: [RLF] Failure Information prcd failure
Line 1755: [NRRRC][RRE] RRC connection re-establishment Cause: %s(%d)
Line 1755: [NRRRC][RRE] RRC connection re-establishment Cause: %s(%d)
Line 1760: [NRRRC][RRE] RRC connection re-establishment Cause: %s(%d)
Line 1760: [NRRRC][RRE] RRC connection re-establishment Cause: %s(%d)
Line 1777: [RRC][RLF] RLC max retransmission! bDupActDeact: %d, LcId: %d, bLocalRelease: %d
Line 1777: [RRC][RLF] RLC max retransmission! bDupActDeact: %d, LcId: %d, bLocalRelease: %d
Line 1806: [RLF] Failure Information prcd failure
Line 1817:  RLC max retransmission! failure!
Line 1873: Rach Status IND MsgGroupType %d
Line 1885: [RRC][RLF] Ignore the RLF while T300, T301, T304, T311 or T319 are running
Line 1896: [NRRRC][RRE] RRC connection re-establishment Cause: %s(%d)
Line 1896: [NRRRC][RRE] RRC connection re-establishment Cause: %s(%d)
Line 1902: [NRRRC][RRE] RRC connection re-establishment Cause: %s(%d)
Line 1902: [NRRRC][RRE] RRC connection re-establishment Cause: %s(%d)
Line 1913: [NRRRC][RRE] RRC connection re-establishment Cause: %s(%d)
Line 1913: [NRRRC][RRE] RRC connection re-establishment Cause: %s(%d)
Line 1916: [RRC][RLF] RACH_STATUS_IND with fail result
Line 1916: [RRC][RLF] RACH_STATUS_IND with fail result
Line 1925: ScgFailure will be triggered in NRDC SCG reconfig procedure
Line 1929: Rach Status IND failure from SCG!
Line 1937: RACH_STATUS_IND with RRC_INITIAL_RACH
Line 1941: RACH_STATUS_IND with RRC_HO_RACH
Line 1945: RACH_STATUS_IND with RRC_RLF_RACH
Line 1949: RACH_STATUS_IND with RRC_SI_REQ_RACH
Line 1953: wrong rach cause value!
Line 2037: Ignore RRC_L2_SECURITY_DATA_IND in RAT suspend state
Line 2045: RRC_NR_PRCD_SA_SMC PBD is running. So this triggered message is ignored.
Line 2054: %s
Line 2208: %s
Line 2257: %s
Line 2262: Abort MEAS_CGI procedure
Line 2326: Rcvd DbRevertNeeded(%d) in current state(%d)
Line 2365: DB copy will not be done.
Line 2387: DB copy will not be done.
Line 2426: %s
Line 2437: [L2N_DEPRIORY] present_bit_mask[%d] nr_num_list[%d] lte_num_list[%d] start_timestamp[%d] duration[%d]
Line 2457: [L2N_DEPRIORY] NrArfcn index %d: DeprioritizedArfcn[%d]
Line 2475: [L2N_DEPRIORY] LteArfcn index %d: DeprioritizedLteArfcn[%d]
Line 2487: [CellResel]CellReselPriorityPresent(%d) DeprioritisationReqPresent(%d). send RRM_RRC_RESEL_INFO_IND
Line 2492: [CellResel]CellReselPriorityPresent and DeprioritisationReqPresent false
Line 2494: [CellResel] deprioritisationInfo.start_timestamp[%d]
Line 2533: %s
Line 2651: nrModeDefault : (0x%x)
Line 2715: Reset WaitAsCfgStartInd to %d
Line 2731: [IratCellTiming] SsbMeasInfoFromIratCnt: %d
Line 2739: LteHoPresent: %d
Line 2744: RRC_LTERRC_AS_CFG_START_IND is received when WaitAsCfgStartInd is false.
Line 2782: %s
Line 2794: [ENDC BlackList] Rcvd BarredCellCnt(%d) BlackListTimeStamp(%d) MaxBarredCellTime(%d)
Line 2799: [ENDC BlackList] Add arfcn(%d) pci(%d) duration(%d)
Line 2805: [NrCellBlock] The neigbhoring NR cell(Barred Count: %d) in the bloklist will be blocked while the SCG session is active
Line 2812: [ENDC BlackList] Cleared blacklist
Line 2846: %s
Line 2853: RRC_L2_PUCCH_SRS_RELEASE_IND MsgGrpId(%d)
Line 2862: Ignore RrcNrPrcd_RRC_L2_PUCCH_SRS_RELEASE_IND!
Line 2869: Ignore RrcNrPrcd_RRC_L2_PUCCH_SRS_RELEASE_IND!
Line 2882: Ignore RrcNrPrcd_RRC_L2_PUCCH_SRS_RELEASE_IND!
Line 2889: Ignore RrcNrPrcd_RRC_L2_PUCCH_SRS_RELEASE_IND!
Line 2903: Ignore RrcNrPrcd_RRC_L2_PUCCH_SRS_RELEASE_IND!
Line 2910: Ignore RrcNrPrcd_RRC_L2_PUCCH_SRS_RELEASE_IND!
Line 2916: Ignore RrcNrPrcd_RRC_L2_PUCCH_SRS_RELEASE_IND!
Line 2925: %s
Line 2948: Unexpected OpMode %d. Ignore RrcNrPrcd_RRC_L2_PUCCH_SRS_RELEASE_IND!
Line 2953: CellGrpConfig null pointer! Ignore RrcNrPrcd_RRC_L2_PUCCH_SRS_RELEASE_IND!
Line 2956: [RRC][PUCCH/SRS REL] Rcvd MsgGrpId(%d) TagId(%d) Cause(%d)
Line 2956: [RRC][PUCCH/SRS REL] Rcvd MsgGrpId(%d) TagId(%d) Cause(%d)
Line 2970: PUCCH/SRS released for SPCell
Line 2982: PUCCH/SRS released for SCell (ScellIndex %d)
Line 3001: PUCCH/SRS released for SCell (ScellIndex %d)
Line 3053: Received RRC_LTERRC_NSA_LTE_SERVING_INFO_IND
Line 3110: RRC_LTERRC_NSA_MEAS_GAP_IND_Hdlr: MacResetRequest(%d)
Line 3174: SCG release via SRB1 will be deferred till SCG failure in SRB3
Line 3179: Current procedure(%d) is Aborted by SCG release request.
Line 3185: Resolve the deferred RRC_LTERRC_DB_REVERT_IND messages
Line 3196: %s
Line 3213: SCG config request will be deferred in waiting for a confirm msg(WaitCnfMsg(%d)).
Line 3228: Init DbRevertNeeded(%d) before triggering SCG release procedure.
Line 3235: SCG release request will be deferred while SUSPEND_RAT prcd running
Line 3240: SCG release request will be deferred while MEAS_CGI prcd aborting
Line 3255: [N2L] Trigger SCG config request to release LTE/NR PDCP during N2L HO
Line 3260: Other procedures are terminated by SCG release request.
Line 3287: Abort RRC_NR_PRCD_MEAS_CGI procedure
Line 3298: [N2L] Trigger SCG config request to configure LTE/NR PDCP during N2L HO
Line 3309: SCG config request will be deferred because current procedure(%d) is running.
Line 3317: SCG config request will be deferred in waiting AS start ind state.
Line 3336: NrRrc_FreeEndcContainer: NrConfig(0x%x))
Line 3343: NrRrc_FreeEndcContainer: NrRadioBearerConf1(0x%x))
Line 3350: NrRrc_FreeEndcContainer: NrRadioBearerConf2(0x%x))
Line 3367: Remove deferred RRC_LTERRC_NSA_SCG_CONFIG_REQ before SCG release
Line 3374: [RBCTRL] Set EndcReleaseTriggered(%d)
Line 3375: [DB] ScgConfig DB release will be delayed
Line 3429: [EndcConfig] NrConfigPresent(%d) RadioBearerConfig1Present(%d) RadioBearerConfig2Present(%d)
Line 3432: [EndcConfig] ScgConfigReleaseNR(%d) ScgDbDoNotRelease(%d) PreScgRelease(%d) NsaModeDisabled(%d)
Line 3437: [EndcConfig] SecCellGrpConfigPresent(%d) Endc_ReleaseAdd(%d)
Line 3438: [EndcConfig] PmaxEutraPresent(%d) Pmax(%d)
Line 3441: [EndcConfig] SkCountPresent(%d) SkCounter(%d)
Line 3442: [EndcConfig] KeNB: 
Line 3443: [EndcConfig] SKgNB: 
Line 3445: [EndcConfig] ModifiedT304(%d)
Line 3448: [EndcConfig] TdmPatternSingleTxPresent(%d) SubframeAssignment(%d) HarqOffset(%d)
Line 3450: [EndcConfig] PmaxUeFr1Present(%d) PmaxUeFr1(%d)
Line 3452: [EndcConfig] NsaToSaHoPresent(%d)
Line 3454: [EndcConfig] ScgReleaseByFedv(%d)
Line 3456: [EndcConfig] IsRecoveryMode(%d)
Line 3458: [EndcConfig] LtePcellScellChanged(%d)
Line 3461: [EndcConfig] LtePdcpConfigPresent(%d) LteDrbRelease(%d) LteFullConfigPresent(%d)
Line 3465: [EndcConfig] RelReqByN2LHoFail(%d)
Line 3531: NrSecCellGrpConf: 
Line 3541: ASN.1 Decode ErrorCode(%d) ErrorStruct(%s): NrScgConfig String len(%d))
Line 3561: NrRadioBearerConf1: 
Line 3571: ASN.1 Decode ErrorCode(%d) ErrorStruct(%s): NrRadioBearerConf1 String len(%d))
Line 3591: NrRadioBearerConf2: 
Line 3600: ASN.1 Decode ErrorCode(%d) : NrRadioBearerConf2 ErrorStruct(%s) String len(%d))
Line 3606: AsnCodecResult.CodecReturnCode - (%d)
Line 3692: [RRC][CLK] High Clock for Reconfiguration
Line 3696: RRC_LTERRC_NSA_SCG_CONFIG_REQ_Hdlr: EndcDbUpdateBitMask(0x%x)
Line 3762: ScgConfigReleaseNR: %d, TransactionId: %d
Line 3782: SCG addition is triggered (Rec_Cnt(Req:%d, Suc:%d))
Line 3800: [NRDSDS] MS Domain info update to NSA
Line 4004: [NRUECAPA] NrUeCapaSyncWithEutraBandComb no EUTRA sync check is needed.
Line 4007: [NRUECAPA] NrUeCapaSyncWithEutraBandComb EUTRA sync check BandCombNum (%d)
Line 4087: [NRUECAPA] NrUeCapaSyncWithEutraBandComb not matched MRDC BandComb: BcIdx(%d), BandCnt(%d)
Line 4095: [NRUECAPA] NrUeCapaSyncWithEutraBandComb REMOVE %d-%d-%d-%d-%d-%d-%d
Line 4143: [NRUECAPA] SupportedEutraBands(Pcell) = (%d)
Line 4206: [NRUECAPA] InsertSuperSetBandCombtoNsaCapaCnf: Abnormal BcIdx (%d). Do not send SuperSetBandCombList to LTE
Line 4267: [NRUECAPA] BandCombInx(%d) Band(%d) DLFSID(%d) ULFSID(%d) CaBwcUl(%d)
Line 4287: [NRUECAPA] InsertSuperSetBandCombtoNsaCapaCnf: SuperSetBandCombListNum  (%d).  prints only max 50 bc and max 6 bands per bc.
Line 4297: [NRUECAPA] InsertSuperSetBandCombtoNsaCapaCnf: SuperSetBc : %d-%d-%d-%d-%d-%d
Line 4298: [NRUECAPA] InsertSuperSetBandCombtoNsaCapaCnf: ULAvail : %d-%d-%d-%d-%d-%d
Line 4310: [NRUECAPA] SetNsaUecapaReqMrdcParamsRohcProfile
Line 4434: [NRUECAPA] Get new Applied SuperSetBandComb 
Line 4444: [NRUECAPA] Get previous Applied SuperSetBandComb 
Line 4451: [NRUECAPA] Get Default SuperSetBandComb 
Line 4522: [NRUECAPA] MRDC REQ received.
Line 4526: [NRUECAPA] NR REQ received.
Line 4533: [NRUECAPA] GENERAL REQ received.
Line 4538: [NRUECAPA] EUTRA-NR ONLY FLAG received.
Line 4597: [NRUECAPA] 
Line 4609: [NRUECAPA] ASN.1 Decode ErrorCode(%d) ErrorStruct(%s): NrScgConfig String len(%d))
Line 4849: [NRUECAPA] Num of NR ManualBands (!NRRRC.NUM_MANUAL_NR_BAND_LIST) : %d
Line 4856: [NRUECAPA] Ignore !LTE.NR Manual Band List registry
Line 4866: [NRUECAPA] From !NRRRC.MANUAL_NR_BAND_LIST[%d] = ManualBand NR (%d)
Line 4890: [NRUECAPA][SIB][MRDC] LteServingCellNum(%d) exceeds MaxNum(%d)
Line 4901: [NRUECAPA][SIB][MRDC] SERV CELL LIST EUTRA b(%d)
Line 4911: [NRUECAPA][SIB][MRDC] SIB5 CELL LIST EUTRA b(%d)
Line 4926: [NRUECAPA][SIB][MRDC] SIB24 CELL LIST NR n(%d)
Line 4934: %s
Line 4940: [NRUECAPA] MFREE Received ReqFreqBand String
Line 4954: [NRUECAPA] MFREE Received pBandCombinationParameters (Cnt:%d)
Line 4959: %s
Line 5000: %s
Line 5045: [NRUECAPA] NSA_UECAPA_REQ (%d) PROCESS FAILED
Line 5063: [NRUECAPA] DuplexMode  (%d)
Line 5064: [NRUECAPA] Fr1Fr2Mode  (%d)
Line 5072: [NRUECAPA] R16_FEATURE_WUS updated
Line 5126: [NRUECAPA] ManualBand NR (%d) / BWC (%d)
Line 5148: [NRUECAPA] Current MCC is null, certiBands checking is skipped
Line 5153: [NRUECAPA] ManualBand NR is enabled, certiBands checking is skipped
Line 5168: [NRUECAPA] Current MCC(%d), NrSaBandListGet(%d), numOfCertiBands(%d) 
Line 5177: [NRUECAPA] Current MCC(%d) certiBands[%d] = %d
Line 5183: [NRUECAPA] Current MCC is null, certiBands checking is skipped
Line 5188: [NRUECAPA] ManualBand NR is enabled, certiBands checking is skipped
Line 5198: [NRUECAPA] ManualBand  EUTRA  (%d)
Line 5219: Start NrUeCapaMain in SubThread
Line 5267: [NRUECAPA] pDecodedNrFreqBandList NOT NULL
Line 5271: [NRUECAPA] ReqBandInfoList isValid
Line 5295: [NRUECAPA] NSA_UECAPA_REQ (%d) PROCESS FAILED
Line 5307: %s
Line 5320: [NRUECAPA] 
Line 5330: [NRUECAPA] ASN.1 Decode ErrorCode(%d) ErrorStruct(%s): NrScgConfig String len(%d))
Line 5355: %s
Line 5362: [NRUECAPA] pDecodedUE_CapabilityRequestFilterCommon NOT NULL
Line 5364: [NRUECAPA][Debug] capabilityRequestFilterCommon Bitmask (%x) 
Line 5367: [NRUECAPA][Debug] mrdc_Request Bitmask (%x) 
Line 5371: [NRUECAPA][SetUE_CapabilityRequestFilterCommon] MRDC omitEN_DC ReqFilterCommon received.
Line 5376: [NRUECAPA][SetUE_CapabilityRequestFilterCommon] MRDC includeNR_DC ReqFilterCommon received.
Line 5381: [NRUECAPA][SetUE_CapabilityRequestFilterCommon] MRDC includeNE_DC ReqFilterCommon received.
Line 5389: %s
Line 5412: [NRUECAPA] interRAT-Parameters -> eutra -> supportedBandListEUTRA (%d)
Line 5417: [NRUECAPA] Empry interRAT-Parameters -> eutra -> supportedBandListEUTRA
Line 5425: [NRUECAPA] DSS Registry (%d), OmcPlmn (%d), Default (%d), Original Values (0x%X)
Line 5439: Plmn Changed FeatureControl PLMN countryCode(%x%x%x) networkCode(%x%x%x)
Line 5454: [NRUECAPA] simStatus = (%d)
Line 5464: [NRUECAPA] NSA_UECAPA_REQ (%d) PROCESS FAILED
Line 5515: [NRUECAPA] NSA_UECAPA_REQ (%d) PROCESS FAILED
Line 5533: [NRUECAPA] DuplexMode  (%d)
Line 5534: [NRUECAPA] Fr1Fr2Mode  (%d)
Line 5542: [NRUECAPA] R16_FEATURE_WUS updated
Line 5593: [NRUECAPA] NSA_UECAPA_REQ (%d) PROCESS FAILED
Line 5618: [PCOMBO] NsaUeCapBytesLeft [%d], NsaUeCapSize [%d]
Line 5646: [NRUECAPA] NSA_UECAPA_REQ firstReq(%d)
Line 5658: [NRUECAPA] CompliantType(%d) Drx(%d) MfbiEUTRA(%d)
Line 5661: [NRUECAPA] Srb3(%d)
Line 5672: [NRUECAPA] NSA_UECAPA_REQ (%d) dfcType(0x%X) spType(0x%X) simType(%d) fciInfo(%d) TransId(%d)
Line 5676: [NRUECAPA] plmn MCC(%x %x %x) MNC(%x %x %x)
Line 5708: [NRUECAPA] DbUpdateNeeded(%d)
Line 5719: [NRUECAPA] Current PLMN Usage=(0x%08lx %08lx %08lx %08lx)
Line 5771: [NRUECAPA] requestedFreqBandsNR_MRDC Length = (%d)
Line 5783: [NRUECAPA] Probably this is the first of two step query, only LTE RAT
Line 5842: [NRUECAPA] NSA_UECAPA_REQ (%d) PROCESS FAILED
Line 5854: [PCOMBO] SubseqGetNrUeCapaInfo error at loop [%d]
Line 5868: [PCOMBO] Softmax loop index [%d]
Line 5876: [PCOMBO] NR cap size [%d]
Line 5887: [PCOMBO] Skip Softmax due to NR cap encoding failed [%d]
Line 5900: [PCOMBO] Skip Softmax due to no left bytes for ENDC combo after NR cap is counted
Line 5925: [PCOMBO] ASN.1 encode error [%d] for ENDC combo
Line 5937: [PCOMBO] Skip Softmax due to ENDC cap encoding failure
Line 5952: [PCOMBO] Skip Softmax due to unreasonable ENDC cap encoding result
Line 5955: [PCOMBO] Current combo num [%d], new soft max combo num [%d]
Line 5960: [PCOMBO] NsaUeCapBytesLeft [%d], NsaUeCapSize [%d], NsaUeCapSizePrev [%d], ComboNumDiff [%d]
Line 5979: [PCOMBO] BytesPerCombo [%d]
Line 5986: [PCOMBO] Invalid BytesPerCombo, new soft max combo num set to CurrentComboNum
Line 5992: [PCOMBO] BytesPerCombo is 0, new soft max combo num set to CurrentComboNum
Line 5998: [PCOMBO] Backoff starts
Line 6003: [PCOMBO] New soft max combo num set to 0, iteration result
Line 6012: [PCOMBO] Current combo num [%d], new soft max combo num [%d]
Line 6033: [PCOMBO] BytesPerCombo [%d]
Line 6040: [PCOMBO] BytesPerCombo is 0, add [%d] combos to new soft max combo num
Line 6048: [PCOMBO] Current combo num [%d], new soft max combo num [%d]
Line 6060: [PCOMBO] Break Softmax loop due to 0 superset combo
Line 6073: [PCOMBO] NsaUeCapBytesLeft [%d] >= NsaUeCapSize [%d], Softmax finished.
Line 6152: [ANR] RRC_LTERRC_PREPARE_CGI_IND : band (%d) arfcn (%d) physCellId(%d) subcarrierSpacingSSB(%d)
Line 6155: [ANR] RRC_LTERRC_PREPARE_CGI_IND : useAutonomousGapsNR(%d)
Line 6205: RRC_LTERRC_RB_INFO_TO_NSA_IND_Hdlr !! 
Line 6247: [THERMAL] RRC_LTERRC_RESTRICTION_CONFIG_REQ_Hdlr: Rat(%d) Level(%d) OneByOne(%d)
Line 6249: [THERMAL] RRC_LTERRC_RESTRICTION_CONFIG_REQ_Hdlr: L1_OverHeatAs(%d) L2_MaxTxPwr(%d) L3_MaxTxAnt(%d) L4_NumRedMimo(%d) L5_NumRedCc(%d) L7_NumRedCc(%d) L7_Method(%d)
Line 6253: [THERMAL] Fail to Restriction config in RrcState(%s)
Line 6305: [THERMAL] RRC_LTERRC_RESTRICTION_RELEASE_REQ_Hdlr: Rat(%d) Level(%d)
Line 6344: Remove Deferred(RRC_LTERRC_LOW_PWR_MODE_IND)
Line 6353: %s
Line 6360: [LowPwrCtrl] Rcvd TempCtrl(0x%x) SilenceModeUsed(%d)
Line 6369: [LowPwrCtrl] Rcvd NsaSilenceMode(%d) SaSilenceMode(%d)
Line 6376: [LowPwrCtrl] Ignore RRC_LTERRC_LOW_PWR_MODE_IND! ScgCellGrpPresent(%d)
Line 6398: [LowPwrCtrl] Ignore RRC_LTERRC_LOW_PWR_MODE_IND! NrOpMode(%s)
Line 6440: [LowPwrCtrl] Low Power Mode OFF!
Line 6447: [LowPwrCtrl] Low Power Mode ON! (TempCtrl:0x%x)
Line 6453: [LowPwrCtrl] NR_T_LOW_PWR_MODE is already running.
Line 6524: %s
Line 6530: Send L2_RRC_DATA_REQ : MsgType(%d)
Line 6535: [ENDC] Protocol Version is under v16. 
Line 6574: %s
Line 6585: invalid RRC_LTERRC_MEAS_REPORT_IND nrOpMode(%d)
Line 6624: [ENDC][OHA]  Requester - %d
Line 6635: [ENDC][OHA]  Tid %d Bitmask %0x ReducedCCs(DL/UL):%d,%d
Line 6638: [ENDC][OHA]  ReducedMaxBW_FR1(DL/UL):%d,%d  ReducedMaxBW_FR2(DL/UL):%d,%d
Line 6641: [ENDC][OHA]  ReducedMaxMIMO_Layers_FR1(DL/UL):%d,%d  ReducedMaxMIMO_Layers_FR2(DL/UL):%d,%d
Line 6662: [RRC_UAI] RRC_LTERRC_NSA_OVERHEAT_REQ UaiCause %d, NrRrcGetRbStateForSRB %d,NrRrcGetRbTypeForSRB %d
Line 6684: [RRC_UAI] EDNC NR exist Otherconfig Info Trigger UAIPrcd for LPM_IND
Line 6731: [ENDC][PDCP_DATA]  Result - %d
Line 7003: %s
Line 7035: Reset WaitAsCfgStartInd to %d
Line 7118: RRC_RRC_SUB_THREAD_MSG_IND_Hdlr
Line 7123: Result(%d), UserFunctionId(%d)
Line 7177: [SUBTHREAD] RRC_RRC_SUB_THREAD_MSG_IND_Hdlr CurDomainType(%d)
Line 7250: [FEDV] Start forced suspend/resume by FeDV (OosIndTriggeredbyFeDV(%d))
Line 7325: %s
Line 7371: %s
Line 7426: CurrentUeMode(%d->%d) S1ModeEnabled(%d->%d) N1ModeEnabled(%d->%d) VoicOverNr(%d)
Line 7495: Error: Data Request from upper layer in RRC_IDLE
Line 7514: IGNORE: RRC_MM_DATA_REQ from upper layer during HO
Line 7519: DEFER: RRC_MM_DATA_REQ from upper layer during RRC_NR_PRCD_SA_RRC_RECONFIG(except HO)
Line 7542: RRC_MM_DATA_REQ_Hdlr: nasMsgLength: (%d), nasMui: (%d)
Line 7543: RRC_MM_DATA_REQ_Hdlr: pNasMsg: 
Line 7545: RRC_MM_DATA_REQ_Hdlr: AccessCategory: %d SkipBarringCheck: %d cause: %d from MM
Line 7556: [UAC] Barring check already done
Line 7565: [RRC][UAC] No SIB1 Db. Access attempt is allowed.
Line 7565: [RRC][UAC] No SIB1 Db. Access attempt is allowed.
Line 7607: UsedOnlyForBarringCheck set true. Data will not be sent
Line 7625: [FEATURE_AP_BASED_EMC] isApBasedEMCOngoing (%d)
Line 7678: No Nas msg in RRC_MM_DATA_REQ
Line 7772: RRC_MM_EST_REQ_Hdlr: AccessCategory: %d SkipBarringCheck: %d cause: %d from MM
Line 7777: [UAC] Barring check already done
Line 7782: AccessCategory: %d from MM
Line 7787: [RRC][UAC] No SIB1 Db. Access attempt is allowed.
Line 7787: [RRC][UAC] No SIB1 Db. Access attempt is allowed.
Line 7802: Send(-->RRC_RRC_NR_SETUP_START_IND)
Line 7817: Send(-->MM_RRC_EST_REJ)
Line 7853: [NRBPLMN] BPLMN Resumed by DRX_SHARE_STOP_IND
Line 7866: BPLMN Abort
Line 7871: Remove Defer(RRC_MM_DRX_SHARE_START_IND)
Line 7921: [FEATURE_AP_BASED_EMC] isApBasedEMCOngoing (%d)
Line 7936: isEmergencyServiceOngoing: %d
Line 8036: [IMS SERVICE] ImsServiceType(%d) Operation(%d) CallDirection(%d), applyUACBarring(%d)
Line 8084: [IMS SERVICE] ImsCallStatus(%d) SelectedCause(%d) L1LowPwrState(%d) NeedToRestoreUeCapa(%d)
Line 8130: [IMS SERVICE] Do not send RRM_RRC_IMS_SERVICE_STATUS_IND! NrOpMode(%s) RRC RAT state(%d) RRM RAT state(%d)
Line 8184: [NRUECAPA] RRC_MM_INIT_REQ - INIT CapaDB
Line 8195: [NRUECAPA] simStatus = (%d)
Line 8243: CurrentUeMode : (%d) nrModeDefault : (0x%x)
Line 8246: RRC_MM_INIT_REQ_Hdlr !! 
Line 8289: Update N2LHoState(%d)
Line 8334: [IRAT] SourceRat %d
Line 8343: [RRC][IRAT] Type is Reselection to NR
Line 8343: [RRC][IRAT] Type is Reselection to NR
Line 8351: [RRC][IRAT] Type is Redirection to NR
Line 8351: [RRC][IRAT] Type is Redirection to NR
Line 8359: [RRC][IRAT] Type is Handover to NR
Line 8359: [RRC][IRAT] Type is Handover to NR
Line 8365: Warning!!! received handoverToNr.length is 0
Line 8381: Lte_nh: 
Line 8382: Lte_ncc: %d
Line 8385: [IratCellTiming] SsbMeasInfoFromIratCnt: %d
Line 8396: HoContainer: 
Line 8429: ASN.1 Decode ErrorCode(%d) ErrorStruct(%s): NrScgConfig String len(%d))
Line 8441: [IRAT] Type %d is invalid value
Line 8481: Remove Deferred(RRC_MM_LOW_PWR_MODE_IND)
Line 8498: [LowPwrCtrl] RRC_MM_LOW_PWR_MODE_IND: TempCtrl(%d) Cause(0x%x) IsNRDCScg(%d), ExtendedCause(0x%x)
Line 8526: [LowPwrCtrl] GetNrOverHeatMode(%d) LowPwrCause(0x%x) SelectedCause(0x%x->0x%x) RrcLowPwrState(0x%x) L1LowPwrState(0x%x) NoNeedOverheatUpdate(%d)
Line 8531: [LowPwrCtrl] SA not resume state. NrOpMode(%s) RRC RAT state(%d) RRM RAT state(%d)
Line 8536: [LowPwrCtrl] IMS call is in progress (%d)
Line 8545: [RRC_UAI] Lpm action from Cause (%d)
Line 8562: [RRC_UAI] Trigger UAIPrcd for LPM_IND
Line 8606: RRC_MM_NETWORK_TIME_REQ_Hdlr
Line 8617: Registry NrNetworktimeinfo : (%d)
Line 8626: RRC_MM_NETWORK_TIME_REQ_Hdlr SIB-9 SchedulingInfo present in SIB-1
Line 8634: NetworkTimeReq(%d) 
Line 8643: RRC_MM_NETWORK_TIME_REQ_Hdlr SIB-9 SchedulingInfo not present in SIB-1
Line 8649: pScellInfo or sib1 is NULL
Line 8655: RRC_MM_NETWORK_TIME_REQ_Hdlr:NRCOMMON.NrNetworktimeinfo Registry disabled
Line 8711: MPLMN Status Ind(%d)
Line 8825: RNA update is triggered in RRC state %d. RNA update will be ignored
Line 8909: [NRBPLMN] BPLMN Resumed by PLMN_LIST_ABORT_REQ
Line 8914: [NRBPLMN] SA_CELL_SEL(BPLMN) Resumed by PLMN_LIST_ABORT_REQ
Line 8931: [NRBPLMN] BplmnPrcdState %d CellSelPrcdState %d cellSelCause %d
Line 8939: [NRBPLMN] BplmnPrcdState Aleady Aborting
Line 8955: [NRBPLMN] CellSelPrcdState Aleady Aborting
Line 9004: RRC_MM_PLMN_LIST_REQ can't be handled in state : %d
Line 9023: RRC_MM_PLMN_LIST_REQ BackGnd %d SrchFromOtherRat %d ForOldList %d BkgSrchFromLte %d CandiPlmnSrch %d SearchType%d
Line 9024: RRC_MM_PLMN_LIST_REQ countryCode %d%d%d
Line 9025: RRC_MM_PLMN_LIST_REQ [NETSCAN]IsNetworkScan(%d) BandNum %d ChNum %d
Line 9107: [RRC][NRCELL] RRC_MM_PLMN_SEARCH_REQ_Hdlr SrchCause:%d
Line 9107: [RRC][NRCELL] RRC_MM_PLMN_SEARCH_REQ_Hdlr SrchCause:%d
Line 9110: [RRC][NRCELL] Selected PLMN ID : MCC [%d %d %d] MNC [%d %d %d]
Line 9110: [RRC][NRCELL] Selected PLMN ID : MCC [%d %d %d] MNC [%d %d %d]
Line 9112: [NRCELL] IsHigherPrioSearch:%d, IsEmergencyCallCamping:%d, EquivListReqd:%d, CellSelRequired:%d, SearchOnlyForImsSupportingCell:%d, LastRPLMNSelInd:%d, IsEmcCallPending:%d
Line 9113: [NRCELL] countryCode %d%d%d
Line 9115: [RRC][NRCELL][MultiSIM OOS] PlmnSearchConfig:%d
Line 9115: [RRC][NRCELL][MultiSIM OOS] PlmnSearchConfig:%d
Line 9139: Send(-->MM_RRC_PLMN_SEARCH_CNF(FAIL:Invalid State)
Line 9170: [RRC][NRCELL] isMainPsStack(%d) IgnoreDiscreteGrant(%d)
Line 9170: [RRC][NRCELL] isMainPsStack(%d) IgnoreDiscreteGrant(%d)
Line 9180: [RRC][NRCELL] (from registry)DISCRETE_PWRON_SEARCH_TIME(%d)
Line 9180: [RRC][NRCELL] (from registry)DISCRETE_PWRON_SEARCH_TIME(%d)
Line 9203: [DbCellSel] Any PLMN search is requested for limited service in INACTIVE state
Line 9225: Send(-->RRC_RRC_GOING_TO_IDLE_START_IND(Cause:PLMN_SEARCH))
Line 9290: RRC_MM_PROC_STATUS_IND Type: %d RegiResult %d - Band %d Arfcn %d Pcid %d
Line 9312: [NRCELL] AddLowPriorCellList Band %d Arfcn %d Pcid %d TimeStamp %d Duration %d FailCnt %d
Line 9314: [NRCELL] AddLowPriorCellList Plmn %x%x%x %x%x%x
Line 9415: %s
Line 9427: [RRC_UAI][RrcNrPrcd_RRC_MM_UAI_OHA_REQ] Not Support UAI %d
Line 9434: [RRC_UAI] OverheatinCondition %d, TriggerCause %d, IsOhaPresent %d, IsUaiPresent %d
Line 9439: [NRRRC][RrcNrPrcd_RRC_MM_UAI_OHA_REQ] NR MCG not Con state Trigger Ignore
Line 9445: [NRRRC][RrcNrPrcd_RRC_MM_UAI_OHA_REQ] NR SCG not Con state Trigger Ignore
Line 9454: [NRRRC][RrcNrPrcd_RRC_MM_UAI_OHA_REQ] NW Not support OtherConfig for Overheat
Line 9467: [NRRRC][RrcNrPrcd_RRC_MM_UAI_OHA_REQ] NW Not support OtherConfig for UAI
Line 9479: [NRRRC][RrcNrPrcd_RRC_MM_UAI_OHA_REQ] Wrong UAI_OHA_REQ Info
Line 9489: [NRRRC][RrcNrPrcd_RRC_MM_UAI_OHA_REQ] NW Not support OtherConfig for UAI
Line 9505: %s
Line 9516: [RRC_UAI] UAI Prohibit Timer running
Line 9524: [RRC_UAI] Tid(%d) Trigger UAIPrcd Cause %d
Line 9551: [NRRRC][RRC_MM_TEST_CMD_IND DecideTriggerProcedure] TestReleasePreference %d
Line 9571: [NRRRC][RRC_MM_TEST_CMD_IND_Hdlr] OtherConfigV1610TriggerBitMask(%d)
Line 9579: [NRRRC][RRC_MM_TEST_CMD_IND_Hdlr] L2_RRC_DATA_REQ.
Line 9598: [NRRRC][RRC_MM_TEST_CMD_IND DecideTriggerProcedure] Trigger Ignore
Line 9602: [NRRRC][RRC_MM_TEST_CMD_IND DecideTriggerProcedure] numBytes %d
Line 9608: %s
Line 9610: [NRRRC][RRC_MM_TEST_CMD_IND_Hdlr] CMD Type %d
Line 9615: [NRRRC][RRC_MM_TEST_CMD_IND DecideTriggerProcedure] UAI Not Support
Line 9661: %s
Line 9665: RRC_RRC_BPLMN_REJECT_IND :: Trigger PbdId(%d). 
Line 9717: [NRCELL] PBD SA_CELL_SEL will be resumed by RRC_RRC_NR_CELL_SEL_STOP_IND
Line 9808: Local release triggered in steady state %d
Line 9814: Check NR State RrcRatState(%d)
Line 9921: RRC_MM_SPECIFIC_DRX_IND : drx_legnth(%d)
Line 9929: NRRRCDB_PagingCycle_rf32
Line 9935: NRRRCDB_PagingCycle_rf64
Line 9941: NRRRCDB_PagingCycle_rf128
Line 9947: NRRRCDB_PagingCycle_rf256
Line 9953: Invalid Specific DRX Cycle!
Line 9958: [PAGING] DrxCycleBitmask (0x%08x %08x), defaultPagingCycle(%d), specificDrxCycle(%d), ranPagingCycle(%d)
Line 10006: Nr_5G_Stmsi: 
Line 10012: Nr_5G_Stmsi is invalid: 
Line 10093: SPlmn is not in EQ list
Line 10106: No selected & current Plmn in EQ list
Line 10117: Update SPlmn to %d%d%d %d%d%d
Line 10170: Camped on FTAI, Send(-->RRC_RRC_NR_CELL_SEL_START_IND(CellCause:IDLE_OOS))
Line 10215: [FEATURE_AP_BASED_EMC] EmcState (%d)
Line 10325: %s
Line 10330: [NR_SILENCE_MODE] RRC_RM_NR_SILENCE_MODE_SET_IND_Hdlr: NSA_SilenceMode(%d) SA_SilenceMode(%d)
Line 10370: [THERMAL] Fail to Restriction config in RrcState(%s)
Line 10378: [THERMAL] NRDC IsNrdcScgSetup(%d) MacAvail(%d)
Line 10395: [THERMAL] RRC_RM_RESTRICTION_CONFIG_REQ_Hdlr: MsgGrpId(%d) Rat(%d) Level(%d) OneByOne(%d)
Line 10397: [THERMAL] RRC_RM_RESTRICTION_CONFIG_REQ_Hdlr: L1_OverHeatAs(%d) L2_MaxTxPwr(%d) L3_MaxTxAnt(%d) L4_NumRedMimo(%d) L5_NumRedCc(%d) L7_NumRedCc(%d) L7_Method(%d)
Line 10414: [THERMAL] RRC_RM_RESTRICTION_CONFIG_REQ_Hdlr: LV8 SCG_DISABLE NRDC Case- Cause(%d) SelectedCause(%d) RrcLowPwrState(%d) L1LowPwrState(%d)
Line 10449: [LowPwrCtrl] NR_T_LOW_PWR_MODE is already running.
Line 10515: [THERMAL] RRC_RM_RESTRICTION_RELEASE_REQ_Hdlr: MsgGrpId(%d) Rat(%d) Level(%d)
Line 10532: [THERMAL] RRC_RM_RESTRICTION_RELEASE_REQ_Hdlr: RrcLowPwrState(%d)
Line 10610: [NRDSDS] MSU_MSD_RESUME_IND_Hdlr: Service(%s) CurState(%s) Cause(%s)
Line 10803: [NRDSDS] RRC_RRC_MSD_RUN_ABORT_IND_Hdlr: Service(%s) CurState(%s) Cause(%s)
Line 10807: [NRDSDS] Do not abort the running procedure at guard timer expiry
Line 10819: [NRDSDS] Reset m_CurService of REEST prcd
Line 11023: [NRDSDS] MSU_MSD_RUN_HOLD_IND_Hdlr: Service(%s) CurState(%s) Cause(%s)
Line 11026: [NRDSDS] Service(%s) is not active!
Line 11261: %s
Line 11267: RRC_RRC_DL_DEDI_SEGMENT_IND_Hdlr: All segment received
Line 11456: GetNrUeCapaInfo Result (%d)
Line 11462: [NRUECAPA] DB setup FAILED
Line 11469: [NRUECAPA] RRC RAT state : %d
Line 11512: [NRRRC][RRC_RRC_UE_INFO_REQUEST_IND_Hdlr] L2_RRC_DATA_REQ.
Line 11603: %s
Line 11642: RRC_RRC_NR_PAGE_IND: Trigger Ignore
Line 11650: %s
Line 11701: [RRC][NRPAGE] S_TMSI is matched. Valid Paging in Inactive state. MM_RRC_PAGE_IND will be sent after REL_IND
Line 11701: [RRC][NRPAGE] S_TMSI is matched. Valid Paging in Inactive state. MM_RRC_PAGE_IND will be sent after REL_IND
Line 11741: [RRC][NRPAGE] S_TMSI is matched. Valid Paging in Idle state
Line 11741: [RRC][NRPAGE] S_TMSI is matched. Valid Paging in Idle state
Line 11748: [RRC][NRPAGE] UEID is not matched
Line 11748: [RRC][NRPAGE] UEID is not matched
Line 11753: [NRPAGE] : UE Identity type in Paging msg is not nrStmsi, it can't be handled at IDLE state 
Line 11785: [RRC][NRPAGE] S_TMSI is matched. Valid Paging in Conn state
Line 11785: [RRC][NRPAGE] S_TMSI is matched. Valid Paging in Conn state
Line 11792: [RRC][NRPAGE] UEID is not matched
Line 11792: [RRC][NRPAGE] UEID is not matched
Line 11797: [NRPAGE] : UE Identity type in Paging msg is not nrStmsi, it can't be handled at Conn state 
Line 11804: [NRPAGE] : PAGING IS NOT HANDLEDED IN THIS STATE(%s)
Line 11909: RRC_RRM_OOS_IND_Hdlr: OosMsgType(%d) RrcState(%s)
Line 11920: [RRC][NRDC] SCG RRC_RRM_OOS_IND is ignored in this state(%d)
Line 11924: ScgFailureReport is in progress. Don't start T310 SCG timer
Line 11942: After ANR operation, failed return to serving cell
Line 11952: T310_SCG is started
Line 11968: RRC_RRM_OOS_IND is ignored in INIT state
Line 12048: [RLF] Trach timer is running. T310 will not be stared
Line 12055: [RLF] T311 is running. T310 will not be stared
Line 12061: [RRC][RLF] T316 is running. T310 will not be stared
Line 12074: [NRRRC][RRE] RRC connection re-establishment Cause: %s(%d)
Line 12074: [NRRRC][RRE] RRC connection re-establishment Cause: %s(%d)
Line 12079: [NRRRC][RRE] RRC connection re-establishment Cause: %s(%d)
Line 12079: [NRRRC][RRE] RRC connection re-establishment Cause: %s(%d)
Line 12082: [RRC][RLF] After ANR operation, failed return to serving cell
Line 12082: [RRC][RLF] After ANR operation, failed return to serving cell
Line 12113: After ANR operation, failed return to serving cell
Line 12123: T310_SCG is started
Line 12169: %s
Line 12176: [THERMAL] RRC_RRM_RESTRICTION_CONFIG_CNF_Hdlr: MsgGrpId(%d) Rat(%d) Result(%d) Level(%d)
Line 12201: [THERMAL] Updated ThermalConfig: Rat(%d) LevelBitmap(%d)
Line 12238: %s
Line 12245: [THERMAL] RRC_RRM_RESTRICTION_RELEASE_CNF_Hdlr: MsgGrpId(%d) Rat(%d) Result(%d) Level(%d)
Line 12270: [THERMAL] Updated ThermalConfig: Rat(%d) LevelBitmap(%d)
Line 12295: %s
Line 12337: [NRRRC][RRC_MM_OTHER_CONFIG_CHANGE_IND_Hdlr] OtherConfigV1540TriggerBitMask 0x%08x %08x]
Line 12338: [NRRRC][RRC_MM_OTHER_CONFIG_CHANGE_IND_Hdlr] OtherConfigV1610TriggerBitMask 0x%08x %08x]
Line 12348: [NRRRC][RRC_MM_OTHER_CONFIG_CHANGE_IND_Hdlr] LTERRC_RRC_PDCP_DATA_REQ.
Line 12353: [NRRRC][RRC_MM_OTHER_CONFIG_CHANGE_IND_Hdlr] L2_RRC_DATA_REQ.
Line 12374: %s
Line 12416: [NRRRC][RRC_MM_OTHER_CONFIG_CHANGE_IND_Hdlr] OtherConfigV1540TriggerBitMask 0x%08x %08x]
Line 12417: [NRRRC][RRC_MM_OTHER_CONFIG_CHANGE_IND_Hdlr] OtherConfigV1610TriggerBitMask 0x%08x %08x]
Line 12435: [NRRRC][RRC_MM_OTHER_CONFIG_CHANGE_IND_SCG_Hdlr] L2_RRC_DATA_REQ.
Line 12480: [NRRRC][RRC_MM_OTHER_CONFIG_CHANGE_IND_Hdlr] Not Support UAI %d
Line 12488: [NRRRC][RRC_MM_OTHER_CONFIG_CHANGE_IND_Hdlr] UE not conn state Trigger Ignore
Line 12495: [NRRRC][RRC_MM_OTHER_CONFIG_CHANGE_IND_Hdlr] NRDC UAI not config NRDC SCG Trigger Ignore
Line 12509: [ENDC] NR UAI shall not be triggerend in NR side.
Line 12558: ReestPrcdState(%d)
Line 12559: IdlePrcdState(%d)
Line 12562: NMR Trigger
Line 12566: NMR Ignore
Line 12572: NMR hdlr
Line 12584: ServMoCnt(%d)
Line 12587: NeighCellsCnt(%d)
Line 12590: NeighCellsChoice(%d)
Line 12591: FreqMeasType(%d)
Line 12614: Invalid freq meas type(%d)
