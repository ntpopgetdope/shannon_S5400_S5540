Line 158: {Check] Abnormal ST ID (%d) - not update
Line 181: initialize stored RRC message(num:%d)
Line 218: StoredRrcMsgNum:%d)
Line 224: RRM already sent Forced Wakeup and wait L1 response
Line 234: Execute StoredRrcMsg(%d)(idx:%d, RamainingNum:%d)
Line 252: Stored RRC message(idx:%d, RamainingNum:%d) is NULL
Line 279: StoreRrcMsg - stored max num RRC msg
Line 289: StoreRrcMsg1(%d)(inpos:%d->%d, Num:%d->%d)
Line 313: Received DSDS Pause/Resume ind from RRC(%d) in RRM %s State
Line 340: Defer received RRC message(ID:%d) until CGI return - CgiState:%s
Line 378: Received Pause_Ind/Resume_Ind(%d)
Line 399: Received new RRC message(%d)(num:%d)
Line 409: Received LTE_CPHY_SCELL_MBSFN_GRANT_REQ in Power down state. Wait for resume operation. No need to store this message
Line 423: Received the stored RRC message(current:%d)
Line 429: There is no stored RRC message(%d)
Line 441: RRC request SUSPEND or MODEM_STOP to RRM in power down, %s State, Msg(0x%x)
Line 470: No resume for LTERRC_RRM_INIT_IND in %s State
Line 475: abnormal State(%s) for LTERRC_RRM_INIT_IND
Line 489: No resume for req_id(%d)
Line 495: No resume for LTE_FPLMN_SCAN_IRAT
Line 499: No resume for LTERRC_RRM_OTHER_RAT_BPLMN_START_NTF
Line 503: No resume for LTE_CPHY_UPDATE_SUPPORTED_BAND_LIST_REQ
Line 508: No resume for LTERRC_RRM_UPDATE_CURR_MODE_IND in Suspend State
Line 516: No resume for LTERRC_RRM_SIGNALLING_IND in %s State
Line 522: No resume for LTE_CPHY_LOW_PWR_MODE_NTF in %s State
Line 526: No resume for LTERRC_RRM_ENDC_STATUS_IND in %s State
Line 530: No resume for LTE_CPHY_MEAS_CGI_REQ(X2L ANR) in %s State
Line 534: No resume for LTE_CPHY_STOP_MEAS_CGI_REQ(X2L ANR) in %s State
Line 539: No resume for LTERRC_RRM_DROP_MEAS_REPORT_IND in %s State
Line 545: No resume for LTE_CPHY_LOGGED_MEAS_REQ in %s State
Line 550: No resume for LTE_CPHY_SET_TIME_PULSE_REQ in %s State
Line 556: Ignore for LTE_CPHY_TIME_AIDING_REQ in %s State
Line 562: Ignore for LTE_CPHY_VOLTE_STATUS_NTF in %s State
Line 594: RRC sent some MSG without RESUME or MODEM_START in LTERRM_SUSPEND_STATE, save LteRrm_ProcRrcMsg(0x%x)
Line 608: No resume for LTERRC_RRM_SIGNALLING_IND in power down State
Line 612: no resume for LTERRC_RRM_IDLE_STATE_IND in power down state
Line 618: No resume for LTE_CPHY_LOW_PWR_MODE_NTF in power down State
Line 622: No resume for LTERRC_RRM_ENDC_STATUS_IND in power down State
Line 627: No resume for LTE_CPHY_LOGGED_MEAS_REQ in power down State
Line 633: No resume for LTE_CPHY_SET_TIME_PULSE_REQ in power down State
Line 649: no resume for LTERRC_RRM_OTHER_RAT_BPLMN_START_NTF(0) in power down state
Line 655: Received LTE_CPHY_SCELL_MBSFN_GRANT_REQ in Power down state. Wait for resume operation. No need to store this message
Line 661: power down state, save RrcMsg(0x%x)
Line 666: RRM already sent Forced Wakeup Request (not trigger to send)
Line 702: RRM received NULL RRC message
Line 719: [RRC => RRM][%s] ST(%d), Msg(%d)
Line 1824: [RRM => RRC with SYNC][%s] ST(%d), Msg(%d)
Line 1884: > CellBarringTime: ST1 = %d, ST2 = %d
Line 1911: > Fast MR Enable/Disable = %d
Line 1912: > Fast MR_Cinr Threshold = %d
Line 1915: > Stationary Enable/Disable = %d, M(%d)/L(%d)
Line 1917: > CellBarringTime: ST1 = %d, ST2 = %d
Line 1920: > Prioritized FR2 MR Enable/Disable = %d
Line 1921: > L2NReselMarginEnable_DS = %d
Line 1924: > GSM Forced Event B2 Enable/Disable = %d
Line 1926: > RSSI SCAN Enable/Disable(%d), BW(%d, %d), InvMode(%x)
Line 1928: > IDLE scheduling Opt = %d, %d
Line 1930: > Serving Low Offset = %d, %d
Line 1932: > IDLE DRX 320ms Opt = %d
Line 1934: > CONN DRX L1 Offset = %d
Line 1936: > CDRX skip for SCell Cfg = %d
Line 1938: > L2NReselMarginEnable = %d
Line 2407: Handling index: %d
Line 1663: LteRrm Timer expiry (TmrId:%d)
Line 1668: LTERRM_SI_UPDATE_TIMER expiry
Line 1672: LTERRM_CR_MAX_TIMER expiry
Line 1676: LTERRM_CR_MAX_HYST_TIMER expiry
Line 1680: LTERRM_UNSUITABLE_TIMER expiry
Line 1684: LTERRM_CELLBARRED_TIMER expiry
Line 1688: LTERRM_FREQBARRED_TIMER expiry
Line 1692: LTERRM_T320_TIMER expiry
Line 1696: LTERRM_T325_TIMER expiry
Line 1706: LTERRM_DRX_SPARE_TIMER expiry
Line 1710: LTERRM_MTM_DELAY_TIMER expiry
Line 1714: LTERRM_REPORT_UPDATE_TIMER expiry
Line 1718: LTERRM_CONN_DRX_MEAS_CONF_TIMER expiry
Line 1722: LTERRM_LPP_ECID_MEAS_TIMER expiry
Line 1726: LTERRM_LPP_OTDOA_MEAS_TIMER expiry
Line 1730: LTERRM_MOB_HIST_REP_MAX_TIMER expiry
Line 1734: LTERRM_TEMP_Q_OFFSET_TIMER expiry
Line 1738: LTERRM_CONN_DRX_DISABLE_TIMER expiry
Line 1742: LTERRM_CSFB_UTRA_MEAS_TIMER expiry
Line 1746: LTERRM_PPP_TIMER expiry
Line 1763: Unexpected TmrId(%d)
Line 1171: Illegal Modem Access on POWER OFF[%d]
Line 1207: RRM received NULL L1RX message
Line 1224: [L1RX => RRM][%s] ST(%d), Msg(%d)
Line 1230: Illegal Modem Access on POWER OFF[%d]
Line 1281: RRM received NULL L1LC message
Line 1300: [L1LC => RRM][%s] ST(%d), Msg(%d)
Line 1330: Ignore L1LC_RRM_SEARCH_CNF (bIgnoreL1LCMsgBeforeAllStopCnf = %d)
Line 1343: Ignore L1LC_RRM_MEASURE_CNF (bIgnoreL1LCMsgBeforeAllStopCnf = %d)
Line 1358: Ignore L1LC_RRM_PBCH_DECODE_CNF (AllStopCnf:%d, Enable:%d)
Line 1390: Ignore L1LC_RRM_MEAS_SCHEDULE_IND in %s State
Line 1399: Ignore L1LC_RRM_MEAS_SCHEDULE_IND in %s State
Line 2283: RRM received NULL ASTUNNEL message
Line 2291: [Framework => RRM], Msg(%d) StackID(%d)
Line 2260: LteRrm Timer called!
