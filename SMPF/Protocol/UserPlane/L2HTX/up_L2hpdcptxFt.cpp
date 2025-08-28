Line 134: [ERROR][ENTITY] CloseChannel PdcpChId(%d)
Line 176: [ERROR][ENTITY][MSGQ] Invalid PDCP TX MSG Type(%d)
Line 182: [ENTITY][MSGQ] New PDCP TX MSG Type(%d) CurInd(%d) QSize(%d)
Line 188: [ENTITY][MSGQ] PDCP TX MSG Type(%d)
Line 193: [ENTITY][MSGQ] Start PDCP TX MSG Type(%d)
Line 209: [ERROR][ENTITY][MSGQ] Invalid PDCP TX MSG Type(%d)
Line 225: [ENTITY][MSGQ] Next PDCP TX MSG QSize(%d) Type(%d)
Line 235: [ENTITY] L2HPDCPTX_L2HPDCPRX_PDCP_CTL_PDU_IND! PdcpChId(%d) RatType(%d) Pdutype(%d)
Line 239: [WARNING][ENTITY] No PDCP Tx Entity for sending PDCP Control PDU
Line 250: [ERROR][ENTITY] Unknown Type for PDCP Control PDU IND
Line 275: [DRbId:0x%02x] L2HPDCPTX_L2HRLCTX_PROC_STATUSPDU_CNF
Line 286: [ENTITY] L2HPDCPTX_L2HRLCTX_REVERT_DATA_IND RbId(%d) bSrb(%d) CellGrp(%d) OpMode(%d) RevertCnt(%d)
Line 290: [ERROR][ENTITY] L2HPDCPTX_L2HRLCTX_REVERT_DATA_IND PdcpChId(%d) RbId(%d) RevertCnt(%d)
Line 312: [WARN][ENTITY] L2HPDCPTX_L2_REVERT_DATA_IND RbId(%d) FreeDrtCnt(%d/%d)
Line 381: L2HRLCTX_L2HPDCPTX_PDCP_DUP_DEACT_IND numDrbCnt:[%d]
Line 404: [ENTITY] L2HPDCPTX_L2_CONFIG_REQ RatType(%d)
Line 424: [ERROR][ENTITY] L2HPDCPTX_L2_CONFIG_REQ : pL2Config is not present !!!
Line 428: [ERROR][ENTITY] L2HPDCPTX_L2_CONFIG_REQ : L2HPDCPTX_ProcRbConfigLTE failed !!!
Line 440: [ENTITY] L2HPDCPTX_L2_CONFIG_REQ : NO LTE_PDCP_CONFIG
Line 445: [ENTITY] L2HPDCPTX_L2_CONFIG_REQ : LTE_PDCP_CONFIG
Line 448: [ERROR][ENTITY] L2HPDCPTX_L2_CONFIG_REQ Fail (nullptr == pLteConfig)
Line 454: [ERROR][ENTITY] L2HPDCPTX_L2_CONFIG_REQ Fail (L2HPDCPTX_ProcRbConfigLTE)
Line 460: [ENTITY] L2HPDCPTX_L2_CONFIG_REQ : NO NR_PDCP_CONFIG
Line 463: [ENTITY] L2HPDCPTX_L2_CONFIG_REQ : NR_PDCP_CONFIG NrdcScgReady(%d)
Line 465: [ERROR][ENTITY] L2HPDCPTX_L2_CONFIG_REQ Fail (L2HPDCPTX_ProcRbConfigNR)
Line 474: [ERROR][ENTITY] L2HPDCPTX_L2_CONFIG_REQ Fail, Not support RatType(%d)
Line 485: [ERROR] AllocMsg fail!
Line 505: [ENTITY] L2HPDCPTX_L2_CONFIG_REQ for RESTORE, RatType(%d) RevertUlData(%d)
Line 523: [ENTITY] L2HPDCPTX_L2_COUNT_VALUE_REQ DomainType(%d) RatType(%d)
Line 548: [ENTITY] PdcpChId(%d) RbId(%d) ul_count(%d)
Line 554: [ENTITY] PdcpChId(%d) RbId(%d) ul_count(%d)
Line 561: [ERROR][ENTITY] L2_L2HPDCPTX_COUNT_VALUE_CNF Fail
Line 572: [PDCP TX] L2HPDCPTX_L2_FWD_QM_SCHED_QOS_INFO_IND_IND, pForwardMsg=0x%x
Line 589: [ERROR][ENTITY] Pdcp Rbid=%d, Srb=%d
Line 596: [ERROR][ENTITY] Pdcp Rbid=%d, Srb=%d
Line 610: [ENTITY] L2HPDCPTX_L2_PENDING_NEW_DATA_REQ RatType(%d) CellGrp(%d)
Line 636: [ERROR][ENTITY] Sending L2_L2HPDCPTX_PENDING_NEW_DATA_CNF_T Fail
Line 651: [ENTITY] L2HPDCPTX_L2_RB_CHANGE_IND - DbRevertNeeded(%d) bNrSaHoFail(%d) bLteOnlyActive(%d)
Line 730: [ENTITY] L2HPDCPTX_L2_BEARER_CHANGE_IND
Line 766: [ENTITY] L2HPDCPTX_L2_RELEASE_REQ : DomainType(%d) RatType(%d) CellGrpId(%d) RelReqByN2LHoFail(%d) NsaModeDisabled(%d)
Line 792: [ENTITY][%cRBID:%02d] L2HPDCPTX_L2_RELEASE_REQ : Full release
Line 794: [ENTITY][%cRBID:%02d][SKIP] L2HPDCPTX_L2_RELEASE_REQ : Full release
Line 797: [ENTITY][%cRBID:%02d] SKIP RELEASE PdcpVer(%d) RrcRatType(%d)
Line 813: [ENTITY] L2HPDCPTX_L2_RELEASE_REQ : PdcpVer(%d) ReleaseCause(%d)
Line 830: [ENTITY][%cRBID:%02d] L2HPDCPTX_L2_RELEASE_REQ : Full release
Line 832: [ENTITY][%cRBID:%02d][SKIP] L2HPDCPTX_L2_RELEASE_REQ : Full release
Line 838: [ENTITY][%cRBID:%02d] L2HPDCPTX_L2_RELEASE_REQ : ReleaseFull w/o LtePdcp
Line 840: [ENTITY][%cRBID:%02d][SKIP] L2HPDCPTX_L2_RELEASE_REQ : ReleaseFull w/o LtePdcp
Line 849: [ENTITY][%cRBID:%02d] L2HPDCPTX_L2_RELEASE_REQ : ReleaseFull w/o NrPdcp
Line 851: [ENTITY][%cRBID:%02d][SKIP] L2HPDCPTX_L2_RELEASE_REQ : ReleaseFull w/o NrPdcp
Line 867: [ENTITY][%cRBID:%02d] L2HPDCPTX_L2_RELEASE_REQ : Release w/o Bearer DrbToReleaseList
Line 869: [ENTITY][%cRBID:%02d][SKIP] L2HPDCPTX_L2_RELEASE_REQ : Release w/o Bearer DrbToReleaseList
Line 881: [ENTITY][DRBID:%02d] L2HPDCPTX_L2_RELEASE_REQ : SDAP Release
Line 884: [ERROR][ENTITY][DRBID:%02d] L2HPDCPTX_L2_RELEASE_REQ : SDAP Release fail !!!
Line 888: [ENTITY][%cRBID:%02d] SKIP RELEASE PdcpVer(%d) RrcRatType(%d)
Line 897: [ERROR][ENTITY] SRB3 Full release fail
Line 913: [ERROR][ENTITY] Invalid rWrappedMsg.RatType(%d)
Line 919: [ERROR] AllocMsg fail!
Line 949: [ENTITY] L2HPDCPTX_L2_REVERT_DATA_IND RbId(%d) RevertCnt(%d/%d)
Line 952: [ERROR][ENTITY] L2HPDCPTX_L2_REVERT_DATA_IND PdcpChId(%d) RbId(%d) RevertCnt(%d/%d)
Line 976: [WARN][ENTITY] L2HPDCPTX_L2_REVERT_DATA_IND RbId(%d) FreeDrtCnt(%d/%d)
Line 994: [ENTITY] L2HPDCPTX_L2_REESTABLISH_REQ Cause(%d)
Line 1011: [ENTITY][%cRBID:%02d] SKIP REEST PdcpVer(%d) RrcRatType(%d)
Line 1021: [ERROR][ENTITY] Sending L2_L2HPDCPTX_REESTABLISH_CNF Fail
Line 1030: [ERROR] AllocMsg fail!
Line 1056: [ENTITY] L2HPDCPTX_L2_SECURITY_CONFIG_REQ RatType(%d)
Line 1072: [ERROR][ENTITY] Sending L2_L2HPDCPTX_SECURITY_CONFIG_CNF Fail
Line 1075: [ENTITY] L2_L2HPDCPTX_SECURITY_CONFIG_CNF CellGrpId[%d] RatType[%d]
Line 1088: [ENTITY] L2HPDCPTX_L2_DATA_REQ RatType(%d)
Line 1116: [ENTITY][SRBID:%02d] Len(%d) CnfRequired(%d) pduackId(%d) CellGroup(%d) triggerRach(%d) cipheringDisabled(%d)
Line 1138: [ERROR][ENTITY] Sending L2_L2HPDCPTX_DATA_REQ_RECV_CONF_IND Fail
Line 1182: [ENTITY] L2HPDCPTX_L2_TX_PAUSE_REQ RatType(%d) CellGrpId(%d)
Line 1204: [ENTITY] L2HPDCPTX_L2_TX_RESUME_REQ RatType(%d) CellGrpId(%d)
Line 1228: [ENTITY] L2HPDCPTX_L2_UL_BEARER_RESUME_REQ_Handler CellGrp(%d) resume_rb(%d)
Line 1247: [ENTITY][%cRBID:%02d] SKIP RESUME PdcpVer(%d) RrcRatType(%d)
Line 1253: [ENTITY][%cRBID:%02d] SKIP RESUME PdcpVer(%d) RrcRatType(%d)
Line 1261: [ERROR][ENTITY] Sending L2_L2HPDCPTX_UL_BEARER_RESUME_CNF Fail
Line 1279: [ENTITY] L2HPDCPTX_L2_UL_RESET_REQ_Handler CellGrp(%d) Cause(%d)
Line 1305: [PDCP TX][ENTITY][SKIP][%cRBID:%02d][FULLCFG_WO_HO] Skip SRB Reset, PdcpChId(%d)
Line 1311: [ENTITY][SKIP][%cRBID:%02d] PdcpChId(%d)
Line 1319: [ENTITY][%cRBID:%02d] SKIP RESET PdcpVer(%d) RrcRatType(%d)
Line 1327: [ERROR] AllocMsg fail!
Line 1346: [PDCP TX] L2HPDCPTX_L2_UPDATE_EPSID_VALID_IND, EpsId=%d, Valid=%d
Line 1359: [ENTITY] L2HPDCPTX_SMT_INFORMATION_IND_Handler : CmdType %d
Line 1362: [ENTITY] COMMON DB // Get DB addr from SM 0x%x
Line 1367: L2HPDCPTX_SMT_INFORMATION_IND_Handler //rMsgBody.pCnCommonDb == nullptr
Line 1373: [ENTITY] RQosDisabled or not (%d)
Line 1393: [ENTITY][HwDone] L2HPDCPTX_SendRbChagneInfoToLte DomainType[%d]
Line 1399: [ERROR] AllocMsg fail!
Line 1403: [ERROR][ENTITY] Sending L2_L2HPDCPTX_RB_CHANGE_IND Fail
Line 1413: [ENTITY] L2_L2HPDCPTX_RB_CHANGE_IND DomainType[%d]
Line 1489: [ERROR][ENTITY] Setup RB Pdcp invalid %cRbId=%d
Line 1495: [ENTITY] SECURITY_CONFIG without CONFIG
Line 1536: [WARN][ENTITY] SKIP Release RB (%cRbId=%d) !!!
Line 1541: [ERROR][ENTITY] Release RB fail (No %cRbId=%d) !!!
Line 1555: [ERROR][ENTITY][%cRBID:%02d] Release Fail invalid RbId
Line 1562: [WARN][ENTITY][%cRBID:%02d] Already Released
Line 1571: [WARN][ENTITY][%cRBID:%02d] Release SDAP Fail
Line 1576: [ENTITY][%cRBID:%02d] Release PDCP
Line 1578: [ENTITY][%cRBID:%02d][SKIP] Release PDCP
Line 1582: [ENTITY][%cRBID:%02d] SKIP RELEASE PdcpVer(%d) RrcRatType(%d)
Line 1600: [WARN][ENTITY][%cRBID:%02d] SKIP CONFIG SRB
Line 1604: [WARN][ENTITY][%cRBID:%02d] SKIP CONFIG DRB NRPDCP
Line 1615: [WARN][ENTITY][%cRBID:%02d] SKIP CONFIG DRB
Line 1655: [ENTITY][BEARER][%cRBID:%02d] PdcpVer Change(%d -> %d) by Establish
Line 1660: [ERROR][ENTITY][%cRBID:%02d] ReleaseRb fail LcId(%d) PdcpVerChange!!!
Line 1667: [ERROR][ENTITY][%cRBID:%02d] SetupRbPdcp fail LcId(%d) !!!
Line 1695: [ENTITY][%cRBID:%02d] LTE_PDCP_MODIFY ePdcpVer(%d) bReqReleaseAndAdd(%d) ReestPdcp(%d) RecoverPdcp(%d)
Line 1701: [ENTITY][BEARER][%cRBID:%02d] PdcpVer Change(%d -> %d) by Modify
Line 1710: [WARN][ENTITY][%cRBID:%02d] nullptr == pChannelIf !!!
Line 1715: [ERROR][ENTITY][%cRBID:%02d] ReleaseRb fail LcId(%d) PdcpVerChange!!!
Line 1720: [ERROR][ENTITY][%cRBID:%02d] ReleaseRb fail LcId(%d) !!!
Line 1725: [ENTITY][%cRBID:%02d] ReEstablish by EndcRbChanged(%d) ReestPdcp(%d) bReqReleaseAndAdd(%d)
Line 1739: [ERROR][ENTITY][%cRBID:%02d] nullptr == pChannelIf !!!
Line 1748: [ERROR][ENTITY][%cRBID:%02d] SetupRbPdcp fail LcId(%d) !!!
Line 1752: [ENTITY][%cRBID:%02d] SKIP CONFIG action(%d) PdcpVer(%d) RrcRatType(%d)
Line 1771: [ERROR][ENTITY][%cRBID:%02d] ReleaseRb fail LcId(%d) !!!
Line 1775: [ENTITY][%cRBID:%02d] SKIP CONFIG action(%d) PdcpVer(%d) RrcRatType(%d) pChannelIf(0x%08x)
Line 1814: [ENTITY][DRBID:%02d] ReleaseRb trigger numRelease(%d) rb_cnt(%d)
Line 1820: [WARN][ENTITY] Skip ReleaseRb invalid RbId(%d)
Line 1826: [WARN][ENTITY][DRBID:%02d] ReleaseRb for Split RB Skip!!!
Line 1831: [ERROR][ENTITY][DRBID:%02d] ReleaseRb fail numRelease(%d) rb_cnt(%d) Skip!!!
Line 1838: [ENTITY] L2HPDCPTX_ProcRbConfigLTE MsgRatType(%d) numConfig(%d) transId(%d) numRelease(%d) config_after_rre(%d)
Line 1842: [ERROR][ENTITY] ProcRbConfigLTE fail rb_cnt(%d) !!!
Line 1858: [%cRBID:%02d] RB config[%d] LcId(%d) nr_pdcp_en(%d) usedNrPdcp(%d) bMcgLtepdcpToNrpdcp(%d) -> ePdcpVer(%d) eRrcRatType(%d)
Line 1886: [ERROR][ENTITY][%cRBID:%02d] Invalid action(%d)
Line 1890: [ENTITY][%cRBID:%02d] SKIP CONFIG action(%d) PdcpVer(%d) RrcRatType(%d)
Line 1944: [PDCP TX]ROHC CID exceeds max...ceiling it Pdcp Rbid=%d, Maxcid=%d
Line 1951: [PDCP TX]ROHC CID exceeds max...ceiling it Pdcp Rbid=%d, Maxcid=%d
Line 2024: [ENTITY][BEARER][%cRBID:%02d] PdcpVer Change(%d -> %d)
Line 2034: [ERROR][ENTITY][%cRBID:%02d] ReleaseRb fail !!!
Line 2041: [ENTITY][SKIP][%cRBID:%02d] SetupRbPdcp fail !!!
Line 2046: [ERROR][ENTITY][%cRBID:%02d] SetupRbSdap fail !!!
Line 2062: [ENTITY][%cRBID:%02d] SKIP CONFIG PdcpVer(%d) RrcRatType(%d)
Line 2065: [ERROR][ENTITY][%cRBID:%02d] L2_RB_INFO is absent
Line 2147: [RBID:%02d] Release Pdcp Entity after deciphering - PdcpTxEntity (0x%x)
Line 2149: [RBID:%02d] Release Pdcp Entity after deciphering - NullPdcpTxEntity
Line 2156: [ERROR][RBID:%02d] Fail to release Pdcp Entity after deciphering
Line 2181: [ERROR][ENTITY] L2HPDCPTX_L2_RB_CHANGE_IND : Failed to Release (PdcpChId=%d)
Line 2184: [ERROR][ENTITY] Release fail (No RbId=%d Srb=%d) !!!
Line 2192: [ENTITY] Send RB INFO to QM Type(%d) PduSessionId(%d) RbId(%d) DefaultRbId(%d)
Line 2204: [ENTITY] Sending QM_L2HPDCPTX_RB_INFORM_IND_T Fail
Line 2218: [ENTITY] NrSmSessionDb for SA is nullptr
Line 2223: [ENTITY] CnCommonDb for SA is nullptr
Line 2233: [ENTITY] SDAP Release for PduSessionId(%d)
Line 2236: [ENTITY] SDAP Release for PduSessionId(%d) RbId(%d)
Line 2321: [ENTITY] Sending QM_L2HPDCPTX_RELEASE_IND Fail
Line 2323: [ENTITY] Sending QM_L2HPDCPTX_RELEASE_IND
Line 2331: [ENTITY][Release][PduSessionId:0x%02x][RbId:0x%02x] Valid (%d) or Release (%d)
Line 2356: [WARN][ENTITY] CnCommonDb is only for SA)
Line 2365: [ENTITY] SDAP Delayed Release for (PduSessionId: %d)
Line 2378: [ENTITY] SDAP Release for (PduSessionId: %d, RbId: %d)
Line 2423: [ENTITY] CnCommonDb for SA nullptr)
Line 2430: [ENTITY] SDAP Release for (PduSessionId: %d, RbId: %d)
Line 2461: [ENTITY] NrSmSessionDb for SA is nullptr
Line 2465: [ENTITY] CnCommonDb for SA nullptr)
Line 2470: [ENTITY] Pdu Session ID does not exist - PduSessionId (%d), Available (%d)
Line 2478: [ENTITY] Sending SMT_L2HPDCPTX_UPDATE_INFORMATION_IND Fail
Line 2482: [ENTITY] Sending SMT_L2HPDCPTX_UPDATE_INFORMATION_IND - PduSessionId (%d), Available (%d)
Line 2489: [ENTITY] L2HPDCPTX_HandlePendEvent eMsg(%d) pMsg(0x%X) CloseChannels(0x%X) ModifyChannels(0x%X)
Line 2498: [ERROR][ENTITY] L2HPDCPTX_HandlePendEvent CloseChannel(%d)
Line 2520: [WARN][ENTITY] Revert is ongoing
Line 2527: [ERROR][ENTITY] eMsg(%d)
Line 2554: [ENTITY] Self L2HPDCPTX_L2_RB_CHANGE_IND
Line 2567: [ENTITY] L2HPDCPTX_HandleDSDSMessage eMsg(%d) eRatType(%d) CellGrp(%d)
Line 2575: [ERROR][ENTITY] Sending L2_L2HPDCPTX_TX_PAUSE_CNF_T Fail
Line 2583: [ERROR][ENTITY] Sending L2_L2HPDCPTX_TX_RESUME_CNF_T Fail
Line 2592: [ERROR][ENTITY] OpenChannel PdcpChId(%d)
