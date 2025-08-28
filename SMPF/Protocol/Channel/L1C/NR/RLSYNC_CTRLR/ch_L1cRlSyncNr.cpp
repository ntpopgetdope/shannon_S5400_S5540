Line 96: ##[NR_RLSYNC] %s
Line 133: ##[NR_RLSYNC] %s iCg %d
Line 164: ##[NR_RLSYNC] L1C_L1C_RLSYNCCTRLR_RLM_START_REQ_Handler()::Mode=%d
Line 182: ##[NR_RLSYNC][Keep] OnGoing=%d, PrevActiveBwp=%d.
Line 214: ##[NR_RLSYNC] RLM_CONFIG: N310=%d and N311=%d.
Line 221: ##[NR_RLSYNC] RLM_CONFIG: N310=%d and N311=%d from SIB1.
Line 229: ##[NR_RLSYNC] RLM_CONFIG: RlfTimersAndConstants is NULL. Set max for N310=%d and N311=%d.
Line 247: ##[NR_RLSYNC][ERR] Why ActiveBwp==0xFF?
Line 260: ##[NR_RLSYNC] By RlfTimersAndConstants, Validate RLM for iBwp=%d, iRlmRs=%d, iRlm=%d, Purpose=%d, RsType=%d, iRs=%d
Line 296: ##[NR_RLSYNC] By SIB1 or TCI state, Validate RLM for iBwp=%d, iRlmRs=%d, iRlm=%d, Purpose=%d, RsType=%d, iRs=%d
Line 301: ##[NR_RLSYNC] RLM cannot be configured: CurrActiveBwp(0x%x), TciExisting(%d, %d, %d, %d, %d).
Line 360: ##[NR_RLSYNC][FromSIB1] IsUpdated=%d, IsRlfConstGiven=%d, N310=%d and N311=%d.
Line 415: ##[NR_RLSYNC] IsValid is Set %d icg %d iBwp %d iRlmRs  %d
Line 424: ##[NR_RLSYNC] RLM_START only for SSB::iCg=%d, Ongoing=%d, RlmRsBitMap=0x%04x, iSsbPeriod=%d
Line 444: ##[NR_RLSYNC][ERR] Can't start RLM.
Line 449: ##[NR_RLSYNC] RLM_START::No RLM is configured...
Line 463: ##[NR_RLSYNC] ->> send L1C_L1C_RLSYNCCTRLR_RLM_START_CNF...
Line 482: ##[NR_RLSYNC] %s, Description Alert
Line 513: ##[NR_RLSYNC] %s, Description Alert
Line 518: ##[NR_RLSYNC] Skip RLM Check Ind as Sleep State(%d))
Line 532: ##[NR_RLSYNC][ERR] Can't start Idle RLM Check Ind.
Line 553: ##[NR_RLSYNC] %s, Description Alert
Line 593: ##[NR_RLSYNC] HAL->RLSYNCCTRLR@%s
Line 710: ##[NR_RLSYNC] Why this? Debug this status %d...
Line 717: ##[NR_RLSYNC] iCg =%d , SyncStatus=%d, cnt4OutSync=%d, cnt4InSync=%d, Flag(OosSent,NeedOos,NeedInSync,NeedUpdate)=%04d, CurrState=%d
Line 727: ##[NR_RLSYNC] Sending L1C_L1C_RRMINTERFACECTRLR_OUT_OF_SYNC_IND::CgType(Bitmap)=%d
Line 735: ##[NR_RLSYNC] Sending L1C_L1C_RRMINTERFACECTRLR_IN_SYNC_IND::CgType(Bitmap)=%d
Line 841: ##[NR_RLSYNC] HAL->RLSYNCCTRLR@%s
Line 871: ##[NR_RLSYNC] iMetric(Obsolete,Curr,Raw)=(%d, %d, %d), Metric(Raw,Sum)=(%d, %d), Thresh=%d
Line 889: ##[NR_RLSYNC] Sending Idle OOS L1C_L1C_RRMINTERFACECTRLR_OUT_OF_SYNC_IND for iCg=%d
Line 911: ##[NR_RLSYNC] %s()
Line 968: ##[NR_RLSYNC] Validate RLM for iBwp=%d, iRlmRs=%d, iRlm=%d, Purpose=%d, RsType=%d, iRs=%d
Line 975: ##[NR_RLSYNC] RLM_CONFIG: FAILURE_DETECTION_RESOURCES_LIST_MASK(0x%x) is not configured: 0x%x
Line 980: ##[NR_RLSYNC] RLM_CONFIG: RADIOLINK_MONITORING_CONFIG_MASK(0x%x) is not configured: 0x%x
Line 985: ##[NR_RLSYNC] RLM_CONFIG: INITIAL_DOWNLINK_BWP_MASK(0x%x) is not configured: 0x%x
Line 1034: ##[NR_RLSYNC] Validate RLM for iBwp=%d, iRlmRs=%d, iRlm=%d, Purpose=%d, RsType=%d, iRs=%d
Line 1041: ##[NR_RLSYNC] RLM_CONFIG: FAILURE_DETECTION_RESOURCES_LIST_MASK(0x%x) is not configured: 0x%x for iBwp=%d
Line 1047: ##[NR_RLSYNC] RLM_CONFIG: RADIOLINK_MONITORING_CONFIG_MASK(0x%x) is not configured: 0x%x for iBwp=%d
Line 1054: ##[NR_RLSYNC] RLM_CONFIG: BWP_DOWNLINK_DEDICATED_MASK(0x%x) is not configured: 0x%x for iBwp=%d
Line 1061: ##[NR_RLSYNC] RLM_CONFIG: DOWNLINK_BWP_MASK(0x%x) is not configured: 0x%x
Line 1069: ##[NR_RLSYNC] RLM_CONFIG: firstActiveDownlinkBwpId= %d
Line 1075: ##[NR_RLSYNC] RLM_CONFIG: FIRST_ACTIVE_DOWNLINK_BWP_ID_MASK(0x%x) is not configured: 0x%x
Line 1078: ##[NR_RLSYNC] RLM_CONFIG: ScgRlm::N_310=%d, N_311=%d
Line 1082: ##[NR_RLSYNC] RLM_CONFIG: SPECLL_CONFIG_DEDICATED_MASK(0x%x) is not configured: 0x%x 
Line 1105: ##[NR_RLSYNC] RLM_CONFIG: SSB_PERIODICITY_SERVINGCELL_MASK(0x%x) is not configured: 0x%x
Line 1110: ##[NR_RLSYNC] RLM_CONFIG: SERVINGCELL_CONFIG_COMMON_MASK(0x%x) is not configured: 0x%x
Line 1115: ##[NR_RLSYNC] RLM_CONFIG: RECONFIGWITH_SYNC_MASK(0x%x) is not configured: 0x%x
Line 1118: ##[NR_RLSYNC] RLM_CONFIG: iSsbPeriod=%d
Line 1138: ##[NR_RLSYNC] %s()
Line 1158: ##[NR_RLSYNC] iBwp=%d, TciListMax=%d
Line 1163: ##[NR_RLSYNC] iBwp=%d, Existing iTciList=%d
Line 1186: ##[NR_RLSYNC] RLM_CONFIG: qclType1.BWP_ID_MASK(0x%x) is not configured: 0x%x for iBwp=%d, iTciList=%d
Line 1192: ##[NR_RLSYNC] RLM_CONFIG: qclType1.REFERENCE_SIGNAL_MASK(0x%x) is not configured: 0x%x for iBwp=%d, iTciList=%d
Line 1198: ##[NR_RLSYNC] RLM_CONFIG: QCL_TYPE1_MASK(0x%x) is not configured: 0x%x for iBwp=%d, iTciList=%d
Line 1239: ##[NR_RLSYNC] RLM_CONFIG: TCI_STATES_LIST_MASK(0x%x) is not configured: 0x%x for iBwp=%d
Line 1245: ##[NR_RLSYNC] RLM_CONFIG: PDSCH_CONFIG_MASK(0x%x) is not configured: 0x%x for iBwp=%d
Line 1265: ##[NR_RLSYNC] %s for %d
Line 1333: ##[NR_RLSYNC] %s
Line 1362: ##[NR_RLSYNC] %s (%d)
Line 1376: ##[NR_RLSYNC] %s: No ongoing RLM...
Line 1389: ##[NR_RLSYNC] %s: No ongoing RLM...
Line 1404: ##[NR_RLSYNC][DEBUG] Why is RLM_START_NR_CMD running already? Let's stop it first.
Line 1413: ##[NR_RLSYNC][DEBUG] Why is RLM_START_NR_CMD running ? Let's stop and remove it by force.
Line 1432: ##[NR_RLSYNC][ERR] Error in stopping RLM_START_NR_CMD in %s...
Line 1436: ##[NR_RLSYNC] Stop RLM_START_NR_CMD in %s...
