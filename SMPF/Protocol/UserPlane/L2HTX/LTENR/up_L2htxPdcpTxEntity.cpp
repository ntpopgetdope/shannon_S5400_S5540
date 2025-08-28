Line 115: [ERROR][ENTITY][%cRBID:%02d] Wrong DomainType(%d->0)
Line 126: [ENTITY][%cRBID:%02d] Create PDCP Tx Entity
Line 164: [ERROR][ENTITY][%cRBID:%02d] UsOpenChannel Fail (null param)
Line 172: [QTM][%cRBID:%02d] UsOpenChannel
Line 174: [QTM] UsOpenChannel: Num of DRB Before: %d
Line 182: [PCIE OPT][%cRBID:%02d] UsOpenChannel
Line 184: [PCIE OPT] UsOpenChannel: Num of DRB Before: %d
Line 199: [PDCP TX][ERROR][%cRBID:%02d] Invalid PdcpVer(%d)
Line 213: [ERROR][ENTITY][%cRBID:%02d] UsOpenChannel Fail (m_ePdcpTxState=%d) !!! 
Line 267: [ENTITY][%cRBID:%02d][WaitScgConfig] UsOpenChannel : Start WaitScgConfig PdcpVer(%d) RbType(%d)
Line 279: [ENTITY] UsOpenChannel: Num of DRB After: %d
Line 290: [ENTITY] UsOpenChannel: Num of DRB After: %d
Line 319: [OEM][ULPP] UsOpenChannel with m_RbId=%u, m_ServiceType=%u, m_ePdcpVer=%u, NrOpMode=%u, rat=%u
Line 328: [lte-throttling] Set lcid(%d) of RB_ID[%d]
Line 340: [OEM][LAM] [DBG] PDCP Channel open: RB_ID[%d], m_ServiceType(%c), m_ePdcpVer(%d), internet(%d), m_DomainType(%d), m_ChannelId(%d)
Line 350: [OEM][LAM] [DBG] PDCP Channel cfg: RB_ID[%d], OpMode(%d), RbType(%d), cfgRbId(%d), EbId(%d), mLcId(%d), sLcId(%d)
Line 364: [OEM][LAM_EVENT] NR PDCP internet channel open! DomainType(%u), RbId(%u), pdcpOpMode(%u), bDISCARD(%u), bAVG(%u), bTCP(%u), bFIRST(%u), bSend(%u)
Line 401: [QTM] UsCloseChannel : Num of DRB Before: %d
Line 410: [PCIE OPT] UsCloseChannel : Num of DRB Before: %d
Line 419: [ENTITY][%cRBID:%02d][SKIP][NsaDisabled] UsCloseChannel : PdcpVer(%d) RbType(%d) #PDUs(%d)
Line 428: [ENTITY][%cRBID:%02d][SKIP][WaitScgConfig] UsCloseChannel : PdcpVer(%d) RbType(%d) #PDUs(%d)
Line 443: [ENTITY][%cRBID:%02d][SKIP] UsCloseChannel : PdcpVer(%d) RbType(%d) #PDUs(%d)
Line 458: [ERROR][ENTITY][%cRBID:%02d] Discard all stored PDCP SDUs Num(%d)
Line 464: [ENTITY][%cRBID:%02d][SKIP] UsCloseChannel : Full release with FullConfig
Line 471: [ENTITY][%cRBID:%02d] Skip BackupPdcpCount StoredCount(%d)
Line 486: [lte-throttling] Clear lcid(%d) of RB_ID[%d]
Line 498: [OEM][LAM] [DBG] PDCP Channel close: RB_ID[%d], m_ServiceType(%c), m_ePdcpVer(%d), internet(%d), m_DomainType(%d), m_ChannelId(%d)
Line 509: [OEM][LAM] [DBG] PDCP Channel cfg: RB_ID[%d], OpMode(%d), RbType(%d), cfgRbId(%d), EbId(%d), mLcId(%d), sLcId(%d), lam_internetRbId(%d)
Line 518: [OEM][LAM_EVENT] NR PDCP internet channel close! DomainType(%u), RbId(%u), bDISCARD(%u), bAVG(%u), bTCP(%u), bFIRST(%u), bSend(%u)
Line 525: [OEM][LAM_EVENT] Sending metrics... Cause: Channel close, DomainType(%u), RbId(%u), pdcpOpMode(%u), bDISCARD(%u), bAVG(%u), bTCP(%u), bFIRST(%u), bSend(%u)
Line 569: [QTM] L2HPDCPTX_L2_RELEASE_REQ : Num of DRB after: %d
Line 579: [PCIE OPT] L2HPDCPTX_L2_RELEASE_REQ : Num of DRB after: %d
Line 602: [ENTITY][%cRBID:%02d] UsResetChannel
Line 626: [ERROR][ENTITY][%cRBID:%02d] UsModifyChannel Fail (null param)
Line 635: [ENTITY][SKIP] UsModifyChannel State(%s) IsCiphering(%d)
Line 644: [ERROR][ENTITY] UsModifyChannel Fail (PdcpTxState=%d)
Line 647: [ENTITY][%cRBID:%02d] UsModifyChannel State(%s) PdcpVer(%d)
Line 653: [ENTITY][%cRBID:%02d] UsModifyChannel : SkipScgConfig for SRB PdcpVer(%d) RbType(%d)
Line 681: [ENTITY][DRBID:%02d] Ignore RBINFO
Line 689: [ENTITY][DRBID:%02d] PDCP Pending before LTE L2 configuration
Line 730: [ENTITY][%cRBID:%02d][WaitScgConfig] UsModifyChannel : Start WaitScgConfig PdcpVer(%d) RbType(%d)
Line 740: [OEM][LAM] [DBG] PDCP Channel modify: RB_ID[%d], m_ServiceType(%c), m_ePdcpVer(%d), internet(%d), m_DomainType(%d), m_ChannelId(%d)
Line 751: [OEM][LAM] [DBG] PDCP Channel cfg: RB_ID[%d], OpMode(%d), RbType(%d), cfgRbId(%d), EbId(%d), mLcId(%d), sLcId(%d), lam_internetRbId(%d)
Line 763: [OEM][LAM_EVENT] NR PDCP internet channel modify! DomainType(%u), RbId(%u), prev_internetRbId(%u), bDISCARD(%u), bAVG(%u), bTCP(%u), bFIRST(%u), bSend(%u)
Line 770: [OEM][LAM_EVENT] Sending metrics... Cause: internet channel modify, DomainType(%u), RbId(%u), pdcpOpMode(%u), bDISCARD(%u), bAVG(%u), bTCP(%u), bFIRST(%u), bSend(%u)
Line 790: [ENTITY] UsSuppleSrvcChannel
Line 818: [ENTITY][%cRBID:%02d][HandleEvent] Control PDU
Line 830: [ENTITY][%cRBID:%02d] BackupPdcpCount(%d)
Line 839: [ENTITY][%cRBID:%02d] RestorePdcpCount(%d)
Line 850: [ERROR][ENTITY][%cRBID:%02d][REVERT#0] CellGrp(%d) Cnt(%d/%d)
Line 878: [WARN][ENTITY][%cRBID:%02d][REVERT#0][DISCARD] CellGrp(%d) PDCP COUNT(%10d - %10d) Num(%d)
Line 897: [ENTITY][%cRBID:%02d][REVERT#0][RLC => REVERT_MCG_Q]         PDCP COUNT(%10d - %10d) Num(%d)
Line 899: [ENTITY][%cRBID:%02d][REVERT#0][RLC => REVERT_SCG_Q]         PDCP COUNT(%10d - %10d) Num(%d)
Line 911: [I][ENTITY][%cRBID:%02d][REVERT#1] Skip eRevertCause(%d) State(%s)
Line 928: [ENTITY][%cRBID:%02d][REVERT#1] Skip Revert Decipher Count(%d/%d/%d) bSrb(%d)
Line 941: [ENTITY][%cRBID:%02d][REVERT#1][REVERT_MCG_Q => REVERT_Q]    PDCP COUNT(%10d - %10d) Num(%d)
Line 942: [ENTITY][%cRBID:%02d][REVERT#1][REVERT_SCG_Q => REVERT_Q]    PDCP COUNT(%10d - %10d) Num(%d)
Line 952: [ENTITY][%cRBID:%02d][REVERT#1][DONE_Q => REVERT_Q]          PDCP COUNT(%10d - %10d) Num(%d)
Line 961: [ENTITY][%cRBID:%02d][REVERT#1][REVERT_Q => REVERT_CIPHER_Q] PDCP COUNT(%10d - %10d) Num(%d)
Line 972: [ENTITY][%cRBID:%02d][REVERT#1] Skip Revert Decipher Count(%d/%d/%d) PDCP_TX_REVERT_CIPHERING_Q(%d)
Line 994: [ENTITY][%cRBID:%02d][REVERT#2][TX_Q => REVERT_DONE_Q] 	     PDCP COUNT(%10d - %10d) Num(%d)
Line 1019: [ENTITY][%cRBID:%02d][REVERT#2] Discard all stored PDCP SDUs Num(%d)
Line 1039: [ENTITY][%cRBID:%02d][REVERT#2] End Cause(%d)
Line 1063: [ENTITY][%cRBID:%02d][REVERT#2][REVERT_DONE_Q => PktHandler] PDCP COUNT (%10d - %10d) Num(%d) bDiscardCond(%d, %d/%d)
Line 1081: [WARN][ENTITY][%cRBID:%02d][REVERT#2] Num(%d)
Line 1108: [ENTITY][%cRBID:%02d][NsaDisabled][SKIP] Active
Line 1113: [ENTITY][%cRBID:%02d][WaitScgConfig][SKIP] Active
Line 1120: [ENTITY][%cRBID:%02d] Active
Line 1166: [ENTITY][%cRBID:%02d] Pend
Line 1195: [ENTITY][%cRBID:%02x] Suspend
Line 1209: [ENTITY][%cRBID:%02d] Discard all stored PDCP PDUs Num(%d)
Line 1219: [ENTITY][%cRBID:%02d] Reestablish
Line 1236: [ENTITY][%cRBID:%02d][SKIP] Reestablish : Already triggered
Line 1250: [ENTITY][%cRBID:%02d] DataRecovery
Line 1266: [ENTITY][%cRBID:%02d][RECOVERY][REVERT#1][REVERT_MCG_Q => DONE_Q]      PDCP COUNT(%10d - %10d) Num(%d)
Line 1267: [ENTITY][%cRBID:%02d][RECOVERY][REVERT#1][REVERT_SCG_Q => DONE_Q]      PDCP COUNT(%10d - %10d) Num(%d)
Line 1279: [ENTITY][DRBID:%02d] PdcpBO(%d)
Line 1294: [ENTITY][%cRBID:%02d][RLC REEST][REVERT#1][REVERT_MCG_Q => DONE_Q]      PDCP COUNT(%10d - %10d) Num(%d)
Line 1295: [ENTITY][%cRBID:%02d][RLC REEST][REVERT#1][REVERT_SCG_Q => DONE_Q]      PDCP COUNT(%10d - %10d) Num(%d)
Line 1307: [ENTITY][DRBID:%02d] PdcpBO(%d)
Line 1311: [ENTITY][%cRBID:%02d] TxPause
Line 1319: [ENTITY][%cRBID:%02d] TxResume
Line 1343: [ENTITY][%cRBID:%02d] SCG Failure(%d)
Line 1400: [ENTITY][%cRBID:%02d][BEARER] %-25s PdcpVer(%d) RbType(%d->%d) LcId(%d->%d)(%d->%d)
Line 1468: [OEM][ULPP] CheckActiveDrbEntity gets RAT = NSA for RbId: %u, PdcpVer: %u 
Line 1473: [OEM][ULPP] CheckActiveDrbEntity gets RAT = LTE
Line 1478: [ENTITYMGR] UsOpenChannel
Line 1483: [ENTITYMGR] UsCloseChannel
Line 1489: [ENTITYMGR] UsHandleEvent Domain(%d) eMsg(%d)
Line 1518: [ENTITYMGR][PENDING#1] Request eMsg(%d) pMsg(0x%X)
Line 1539: [ENTITYMGR][PENDING#1] RequestDSDS eMsg(%d) eRatType(%d) ePauseCellGrp(%d)
Line 1544: [ENTITYMGR][PENDING#2] PdcpChId(%d) eMsg(%d) RevertChannels(0x%08X) CloseChannels(0x%08X) ModifyChannels(0x%08X)
Line 1547: [ENTITYMGR][PENDING#2] RevertChannels(0x%08X -> 0x%08X)
Line 1556: [ERROR][ENTITYMGR][PENDING#2] SetEventInterDomain PdcpChId(%d) RevertChannels(0x%08X) CloseChannels(0x%08X) ModifyChannels(0x%08X)
Line 1565: [ENTITYMGR][PENDING#2] PdcpChId(%d) PauseChannels(0x%08X -> 0x%08X)
Line 1584: [ENTITYMGR][PENDING#0] RegisterRevert PdcpChId(%d) bClose(%d) RevertChannels(0x%08X) CloseChannels(0x%08X)
Line 1591: [ENTITYMGR][PENDING#0] RegisterModify PdcpChId(%d) pRbConfigMod(0x%X) RevertChannels(0x%08X) CloseChannels(0x%08X) ModifyChannels(0x%08X)
Line 1597: [ENTITYMGR][PENDING#0] RegisterPause PdcpChId(%d) PauseChannels(0x%08X)
Line 1628: [ERROR][ENTITY] currStack(%d) currRat(%d) Rbid(%d) Srb(%d) PdcpChId(%d)
Line 1634: [WARN][ENTITY] currStack(%d) currRat(%d) Rbid(%d) Srb(%d) pPdcpTxEntity(%d)
Line 1639: [ERROR][ENTITY] currStack(%d) currRat(%d) Rbid(%d) Srb(%d) pL2L3If(%d)
Line 1647: [ENTITY][DRBID:%02d] L2L3IfBO(%d) PdcpBO(%d)
Line 1697: [ERROR][ENTITY][DRBID:%02d] Invalid Routing Path(%d)
Line 1750: [ENTITY][%cRBID:%02d][LCID:0x%02x 0x%02x][PdcpDup] Duplicate PDCP COUNT[%d] basePtr[0x%X] pCell[0x%X]
Line 1753: [ERROR][ENTITY][%cRBID:%02d][LCID:0x%02x 0x%02x] Duplicate PDCP COUNT[%d] basePtr[0x%X] pCell[0x%X]
Line 1756: [ENTITY][%cRBID:%02d][LCID:0x%02x 0x%02x][PdcpDup] Skip Duplicate PDCP COUNT[%d] basePtr[0x%X] pCell[0x%X]
