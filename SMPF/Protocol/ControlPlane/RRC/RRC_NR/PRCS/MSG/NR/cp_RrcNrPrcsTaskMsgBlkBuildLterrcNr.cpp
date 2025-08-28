Line 299: %s
Line 344: SCellConfig[%d]: CellId(%d) Arfcn(%d) Band(%d)
Line 361: %s
Line 403: NrConfigInfoPresentBitMask(0x%02x) CellConfigPresent(0x%02x) SCellConfigBitmask(0x%08x) ReconfigWithSyncUpdated(%d)
Line 745: %s
Line 1008: Build_LTERRC_RRC_PDCP_DATA_REQ : Convey NR Signaling Message through LTE signaling Bearer
Line 1021: Build_LTERRC_RRC_NSA_OVERHEAT_CNF: Failed to Encoding NR_UL_DCCH_Message_PDU
Line 1032: [ENDC_UAI] RRC_LTERRC_NSA_OVERHEAT_REQ: Overheat Info req is requested. 
Line 1057: Build_LTERRC_RRC_NSA_OVERHEAT_CNF: Failed to Encoding OverHeatingAssistance
Line 1061: Build_LTERRC_RRC_NSA_OVERHEAT_CNF:  Tid(%d) Length(%d) 
Line 1092: %s
Line 1113: MeasPcid(%d), SpCell pcid(%d)
Line 1122: MeasFreq(%d), SpCell Freq(%d)
Line 1150: MeasPcid(%d), SCell pcid(%d)
Line 1159: MeasFreq(%d), SCell Freq(%d)
Line 1518: Build_LTERRC_RRC_PREPARE_CGI_DONE_IND: EndcConfigured(%d)
Line 97: [THERMAL] Build_LTERRC_RRC_ABNORMAL_REL_IND: Rat(%d) Cause(%d)
Line 118: %s
Line 132: [ANR] ARN result -> NR CGI info
Line 172: [ANR] PLMN ID index(%d) : MCC (%d %d %d) MNC (%d %d %d)
Line 181: [ANR] TAC (%d)
Line 189: [ANR] RAC (%d)
Line 193: [ANR] CellId (%d)
Line 203: [ANR] PLMN ID count (%d)
Line 220: Sib1PresentBitmask(0x%x%08x), ServingCellConfigCommonSIBPresentBitmask(0x%x%08x), FrequencyInfoDlSibPresentBitmask(0x%x%08x)
Line 229: [ANR] Frequency Band List : index(%d) band(%d)
Line 239: [ANR] Frequency Band List count (%d)
Line 245: [ANR] ARN result -> NoSIB1 info
Line 255: [ANR] SsbSubCarrierOffset(%d), PdcchConfigSib1(%d)
Line 260: [ANR] ARN result -> Invalid config info : Result(%d)
Line 285: [CounterCheck] Build_LTERRC_RRC_COUNT_VALUE_CNF: numOfDrbCountInfo(%d)
Line 287: [CounterCheck] DrbCountInfo[%d]: DrbId(%d) count_Uplink(%d) count_Downlink(%d)
Line 494: Build_LTERRC_RRC_DB_UPDATE_COMPLETE_IND: Result(%d) NrConfigInfoPresentBitMask(0x%02x) CellConfigPresent(0x%02x) SCellConfigBitmask(0x%08x) RrcReconfigComplete.Length(%d), transactionId(%d)
Line 606: [Build_LTERRC_RRC_DEDI_PRIO_INFO_CNF]freqPriorityListNr[%d]. SubPriority is wrong (%d)
Line 700: [NeighEutraInfo] earfcn(%d) time(%d)
Line 707: Build_LTERRC_RRC_DEDI_PRIO_INFO_CNF present_bit_mask:[%d], duration:[%d], nr.num_list:[%d], eutra.num_list:[%d]
Line 709: Build_LTERRC_RRC_DEDI_PRIO_INFO_CNF deprio : present_bit_mask:[%d], duration:[%d], nr.num_list:[%d], eutra.num_list:[%d]
Line 711: Build_LTERRC_RRC_DEDI_PRIO_INFO_CNF CellReselPriorityStartTime[%d], deprioritisationInfo.start_timestamp[%d]
Line 772: Current Plmn get from RPLMN
Line 784: Current Plmn(%x)
Line 1000: Current Var Pci(%d) Arfcn(%d)
Line 1003: Build_LTERRC_RRC_NSA_RACH_STATUS_IND: RachResult(%d), SrbId(%d)
Line 1081: Build_LTERRC_RRC_NSA_SCG_CONFIG_CNF: Result(%s), TransactionId(%d)
Line 1276: meas pci is not matched with current pcid
Line 1440: Build_LTERRC_RRC_NSA_SCG_FAIL_IND : INAVLID NumMoList count(%d)
Line 1444: Build_LTERRC_RRC_NSA_SCG_FAIL_IND : FailType(%d) MeasResultSCGPresent(%d) MeasResultFreqListNRNum(%d)
Line 1464: [NRUECAPA] Build_LTERRC_RRC_NSA_UECAPA_CNF : PROCESS FAILED. Initialize NRUECAPA DB.
Line 1477: [NRUECAPA] Build_LTERRC_RRC_NSA_UECAPA_CNF
Line 1488: [NRUECAPA] Build_LTERRC_RRC_NSA_UECAPA_CNF : NR_UE_MRDC_Capability length(%d)
Line 1500: [NRUECAPA] Build_LTERRC_RRC_NSA_UECAPA_CNF : NR_UE_NR_Capability length(%d)
Line 2040: [RBCTRL] Malloc Error
Line 2059: [RBCTRL] Print RbInfo to be sent to LTERRC.
Line 2141: [THERMAL] Build_LTERRC_RRC_RESTRICTION_CONFIG_CNF: Rat(%d) Result(%d) Level(%d)
Line 2153: [THERMAL] Build_LTERRC_RRC_RESTRICTION_RELEASE_CNF: Rat(%d) Result(%d) Level(%d)
Line 2164: [NRBPLMN][BLIND] LTERRC_RRC_SA_BKG_SRCH_RESULT_IND(NumResult %d)
Line 2239: [NEDC][SCG] ScgConfigCause (%s)
Line 2245: [NEDC][SCG] enterRrcInactive
Line 2250: [NEDC][SCG] restoreSCG
Line 2264: [NEDCSCG] SCG release
Line 2274: [NEDC][SCG] restoreSCG
Line 2300: [NEDC][SCG] Build_LTERRC_RRC_SCG_CONFIG_REQ: enterRrcInactive(%d) restoreSCG(%d) NedcScgConfigPresent(%d) NedcScgConfigChoice(%d) NedcReleaseAndAdd(%d) eutraSCG Length(%d)
Line 2195: Build_LTERRC_RRC_SCG_CONFIG_RESULT_IND: TransactionId(%d)
Line 2322: RRC_ASSERT %s , %d
Line 2323: [NR RADIO MSG][Error] Too Big size Ch(%d) Length(%d) Dir(%d))
Line 2338: [NR RADIO MSG] Ch(%d) Length(%d) Dir(%d) Data(%x %x %x)
Line 2352: [SerialMsg] Ch(%d) Length(%d) Dir(%d) Data(%x %x %x)
