Line 117: [ERROR][FREE] Fail Remove L2hpdcprxFtEvent DataFm!
Line 144: [ENTITY] L2HPDCPRX_L2_CONFIG_REQ RatType(%d)
Line 156: [WARNING][ENTITY] L2HPDCPRX_L2_CONFIG_REQ : pL2Config is not present !!!
Line 160: [ERROR][ENTITY] L2HPDCPRX_L2_CONFIG_REQ : L2HPDCPRX_ProcRbConfigLTE failed !!!
Line 173: [ENTITY] L2HPDCPRX_L2_CONFIG_REQ : NO LTE_PDCP_CONFIG
Line 177: [ENTITY] L2HPDCPRX_L2_CONFIG_REQ : LTE_PDCP_CONFIG
Line 180: [ERROR][ENTITY] L2HPDCPRX_L2_CONFIG_REQ Fail (nullptr == pLteConfig)
Line 186: [ERROR][ENTITY] L2HPDCPRX_L2_CONFIG_REQ Fail (L2HPDCPTX_ProcRbConfigLTE)
Line 193: [WARNING][ENTITY] L2HPDCPRX_L2_CONFIG_REQ : NO NR_PDCP_CONFIG bNrSetup(%d)
Line 199: [ENTITY] L2HPDCPRX_L2_CONFIG_REQ : NR_PDCP_CONFIG NrdcScgReady(%d)
Line 203: [ERROR][ENTITY] L2HPDCPRX_L2_CONFIG_REQ Fail (L2HPDCPRX_ProcRbConfigNR)
Line 209: [ERROR][ENTITY] L2HPDCPRX_L2_CONFIG_REQ Fail, Not support RatType(%d)
Line 218: [ERROR][ENTITY] Sending L2_L2HPDCPRX_CONFIG_CNF Fail
Line 221: [ENTITY] L2_L2HPDCPRX_CONFIG_CNF (RatType=%d)
Line 238: [ENTITY] Self L2HPDCPRX_L2_RB_CHANGE_IND RevertUlData(%d)
Line 254: [ENTITY] L2HPDCPRX_L2_COUNT_VALUE_REQ DomainType(%d) RatType(%d)
Line 278: [ENTITY] PdcpChId(%d) RbId(%d) dl_count(%d)
Line 281: [ERROR][ENTITY] LteCount.drb_identity[%d] != RbId[%d]
Line 286: [ENTITY] PdcpChId(%d) RbId(%d) dl_count(%d)
Line 294: [ERROR][ENTITY] Sending L2_L2HPDCPRX_COUNT_VALUE_CNF Fail
Line 305: [PDCP RX] L2HPDCPRX_L2_DL_BEARER_RESUME_REQ_Handler CellGrp(%d) resume_rb(%d)
Line 322: [PDCP RX][ERROR] Sending L2_L2HPDCPRX_DL_BEARER_RESUME_CNF Fail
Line 335: [PDCP RX] L2HPDCPRX_L2_DL_RESET_REQ_Handler CellGrp(%d) Cause(%d)
Line 358: [PDCP RX][ENTITY][SKIP][%cRBID:%02d][FULLCFG_WO_HO] Skip SRB Reset, PdcpChId(%d)
Line 369: [ENTITY][%cRBID:%02d] SKIP RESET PdcpVer(%d) RrcRatType(%d)
Line 379: [PDCP RX][ERROR] Sending L2_L2HPDCPRX_DL_RESET_CNF Fail
Line 388: [ENTITY] L2HPDCPRX_L2_INTEGRITY_CHECK_REQ
Line 407: [ERROR][ENTITY] No entity exists for SRB(%d)
Line 415: [ERROR][ENTITY] Pdcp Rbid=%d, Srb=%d
Line 421: [ERROR][ENTITY] Sending L2_L2HPDCPRX_INTEGRITY_CHECK_CNF Fail
Line 450: [ENTITY] L2HPDCPRX_L2_RB_CHANGE_IND DbRevertNeeded(%d) bNrSaHoFail(%d) bLteOnlyActive(%d)
Line 501: [ERROR][ENTITY] Sending L2_L2HPDCPRX_RB_CHANGE_IND Fail
Line 541: [ENTITY] L2HPDCPRX_L2_RELEASE_REQ : DomainType(%d) RatType(%d) CellGrpId(%d) RelReqByN2LHoFail(%d)
Line 564: [ENTITY] L2HPDCPRX_L2_RELEASE_REQ : Full release (PdcpChId=0x%02x)
Line 567: [ENTITY][%cRBID:%02d] SKIP RELEASE PdcpVer(%d) RrcRatType(%d)
Line 579: [ENTITY] L2HPDCPRX_L2_RELEASE_REQ : PdcpVer(%d) ReleaseCause(%d)
Line 595: [ENTITY][%cRBID:%02d] L2HPDCPRX_L2_RELEASE_REQ : Full release
Line 597: [ENTITY][%cRBID:%02d][SKIP] L2HPDCPRX_L2_RELEASE_REQ : Full release
Line 602: [ENTITY][%cRBID:%02d] L2HPDCPRX_L2_RELEASE_REQ : ReleaseFull w/o LtePdcp
Line 604: [ENTITY][%cRBID:%02d][SKIP] L2HPDCPRX_L2_RELEASE_REQ : ReleaseFull w/o LtePdcp
Line 612: [ENTITY][%cRBID:%02d] L2HPDCPRX_L2_RELEASE_REQ : ReleaseFull w/o NrPdcp
Line 614: [ENTITY][%cRBID:%02d][SKIP] L2HPDCPRX_L2_RELEASE_REQ : ReleaseFull w/o NrPdcp
Line 630: [ENTITY][DRBID:%02d] L2HPDCPRX_L2_RELEASE_REQ : Release w/o Bearer DrbToReleaseList
Line 632: [ENTITY][DRBID:%02d][SKIP] L2HPDCPRX_L2_RELEASE_REQ : Release w/o Bearer DrbToReleaseList
Line 640: [ENTITY][DRBID:%02d] L2HPDCPRX_L2_RELEASE_REQ : SDAP Release
Line 643: [ERROR][ENTITY][DRBID:%02d] L2HPDCPRX_L2_RELEASE_REQ : SDAP Release fail !!!
Line 647: [ENTITY][%cRBID:%02d] SKIP RELEASE PdcpVer(%d) RrcRatType(%d)
Line 656: [ERROR][ENTITY] SRB3 Full release fail
Line 666: [ERROR][ENTITY] Sending L2_L2HPDCPRX_RELEASE_CNF Fail
Line 698: [ENTITY] L2HPDCPRX_L2_REESTABLISH_REQ CellGrpId[%d]
Line 715: [ERROR][ENTITY] Suspend fail (PdcpChId=%d) !!!
Line 718: [ENTITY][%cRBID:%02d] SKIP REEST PdcpVer(%d) RrcRatType(%d)
Line 727: [PDCP RX][ERROR] Sending L2_L2HPDCPRX_REESTABLISH_CNF Fail
Line 747: [ENTITY] L2HPDCPRX_L2_SECURITY_CONFIG_REQ
Line 760: [ERROR][ENTITY] Sending L2_L2HPDCPRX_SECURITY_CONFIG_CNF Fail
Line 763: [ENTITY] L2_L2HPDCPRX_SECURITY_CONFIG_CNF CellGrpId[%d] RatType[%d]
Line 772: [ENTITY] L2HPDCPRX_L2_SECURITY_DATA_FAIL_IND
Line 785: [ERROR][ENTITY] Config fail (PdcpChId=%d) !!!
Line 795: [ENTITY] L2HPDCPRX_L2_TX_CNF (result=%d)
Line 824: [ENTITY] L2HPDCPRX_L2_TX_PAUSE_REQ RatType(%d) CellGrpId(%d)
Line 848: [ERROR][ENTITY] Sending L2_L2HPDCPRX_TX_PAUSE_CNF Fail
Line 860: [ENTITY] L2HPDCPRX_L2_TX_RESUME_REQ RatType(%d) CellGrpId(%d)
Line 868: [ERROR][ENTITY] Sending L2_L2HPDCPRX_TX_RESUME_CNF Fail
Line 879: [ENTITY] L2HPDCPRX_L2_INSUF_LMACBUF_IND Reset(%d) CoreId(%d) NotFreeDescAddr(0x%08x)
Line 927: [ENTITY] PdcpRx Event! (%d)
Line 932: [ENTITY] Invalid PdcpRx Event! (%d)
Line 994: [PDCP RX]ROHC CID exceeds max...ceiling it Pdcp Rbid=%d, Maxcid=%d
Line 1004: [ERROR][ENTITY] Setup RB Pdcp invalid %cRbId=%d
Line 1010: [ENTITY] SECURITY_CONFIG without CONFIG
Line 1052: [ERROR][ENTITY] Release RB fail (%cRbId=%d) !!!
Line 1057: [ERROR][ENTITY] Release RB fail (No %cRbId=%d) !!!
Line 1071: [ERROR][ENTITY][%cRBID:%02d] Release Fail invalid RbId
Line 1085: [ERROR][ENTITY][%cRBID:%02d] Release SDAP Fail
Line 1093: [ENTITY][%cRBID:%02d] Release PDCP
Line 1095: [ENTITY][%cRBID:%02d][SKIP] Release PDCP
Line 1099: [ENTITY][%cRBID:%02d] SKIP RELEASE PdcpVer(%d) RrcRatType(%d)
Line 1102: [WARN][ENTITY][%cRBID:%02d] Already Released
Line 1123: [WARN][ENTITY][%cRBID:%02d] SKIP CONFIG SRB
Line 1127: [WARN][ENTITY][%cRBID:%02d] SKIP CONFIG DRB NRPDCP
Line 1139: [WARN][ENTITY][%cRBID:%02d] SKIP CONFIG DRB
Line 1193: [ENTITY][DRBID:%02d] ReleaseRb trigger numRelease(%d) rb_cnt(%d)
Line 1199: [WARN][ENTITY] Skip RB config invalid RbId(%d)
Line 1205: [WARN][ENTITY][DRBID:%02d] ReleaseRb by LteConfig Skip
Line 1210: [ERROR][ENTITY][DRBID:%02d] ReleaseRb fail numRelease(%d) rb_cnt(%d) Skip !!!
Line 1217: [ENTITY] L2HPDCPRX_ProcRbConfigLTE MsgRatType(%d) numConfig(%d) transId(%d) numRelease(%d) config_after_rre(%d)
Line 1221: [ERROR][ENTITY] ProcRbConfigLTE fail (rb_cnt=%d) !!!
Line 1237: [ENTITY][%cRBID:%02d] RB config[%d] LcId(%d) nr_pdcp_en(%d) usedNrPdcp(%d) bMcgLtepdcpToNrpdcp(%d) -> ePdcpVer(%d) eRrcRatType(%d)
Line 1258: [PDCP RX][BEARER][%cRBID:%02d] PdcpVer Change(%d -> %d) by Establish
Line 1263: [ERROR][ENTITY][%cRBID:%02d] ReleaseRb fail LcId(%d) PdcpVerChange!!!
Line 1271: [ERROR][ENTITY][%cRBID:%02d] SetupRbPdcp fail LcId(%d) !!!
Line 1292: [PDCP RX][BEARER][%cRBID:%02d] PdcpVer Change(%d -> %d) by Modify
Line 1301: [WARN][ENTITY][%cRBID:%02d] nullptr == pChannelIf !!!
Line 1306: [ERROR][ENTITY][%cRBID:%02d] ReleaseRb fail LcId(%d) PdcpVerChange!!!
Line 1311: [ERROR][ENTITY][%cRBID:%02d] ReleaseRb fail LcId(%d) !!!
Line 1320: [ERROR][ENTITY][%cRBID:%02d] SetupRbPdcp fail LcId(%d) !!!
Line 1324: [ENTITY][%cRBID:%02d] SKIP CONFIG action(%d) PdcpVer(%d) RrcRatType(%d)
Line 1333: [ERROR][ENTITY][%cRBID:%02d] ReleaseRb fail LcId(%d) !!!
Line 1337: [ENTITY][%cRBID:%02d] SKIP CONFIG action(%d) PdcpVer(%d) RrcRatType(%d) pChannelIf(0x%08x)
Line 1342: [ERROR][ENTITY][%cRBID:%02d] Invalid action(%d)
Line 1346: [ENTITY][%cRBID:%02d] SKIP CONFIG action(%d) PdcpVer(%d) RrcRatType(%d)
Line 1474: [PDCP RX][BEARER][%cRBID:%02d] PdcpVer Change(%d -> %d)
Line 1482: [ERROR][ENTITY] ReleaseRb fail (%cRbId=%d) !!!
Line 1490: [ERROR][ENTITY] SetupRbPdcp fail (%cRbId=%d) !!!
Line 1495: [ERROR][ENTITY] SetupRbSdap fail (%cRbId=%d) !!!
Line 1511: [ENTITY][%cRBID:%02d] SKIP CONFIG PdcpVer(%d) RrcRatType(%d)
Line 1514: [ENTITY] L2_RB_INFO is absent (%cRbId=%d)
Line 1610: [ERROR][ENTITY] L2HPDCPRX_L2_RB_CHANGE_IND : Failed to Release (PdcpChId=%d)
Line 1615: [ERROR][ENTITY] Release fail (No RbId=%d Srb=%d) !!!
Line 910: [ERROR][ENTITY] Fail CreateDataFmUni<L2hpdcprxFtEvent> fail GetDataFm
