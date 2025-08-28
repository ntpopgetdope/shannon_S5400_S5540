Line 63: [ENTITY] Create PdcpRxEntity! m_uRbId(%d) ChannelId(%d) DomainType(%d)
Line 69: [ERROR][ENTITY] Wrong DomainType! (%d) set to 0
Line 75: [ENTITY] Destroy PdcpRxEntity! m_uChannelId(%d) m_uRbId(%d) m_uDomainType(%d)
Line 83: [ERROR][ENTITY][%cRBID:%02d] UsOpenChannel fail (null param)
Line 88: [WARN][ENTITY][%cRBID:%02d] UsOpenChannel PdcpVer(%d -> %d)
Line 111: [WARN][ENTITY][%cRBID:%02d] UsOpenChannel : Invalid RatType(%d)
Line 124: [ENTITY][%cRBID:%02d][WaitScgConfig] UsOpenChannel : Start WaitScgConfig PdcpVer(%d) RbType(%d)
Line 128: [%cRBID:%02d][StatusPdu] Revert StatusPdu and PdcpCtrlPdu by PdcpVerChange(%d)
Line 138: [ENTITY][%cRBID:%02d][SKIP] UsCloseChannel : Full release with FullConfig
Line 146: [ENTITY][%cRBID:%02d][SKIP][WaitScgConfig] UsCloseChannel : PdcpVer(%d) RbType(%d)
Line 171: [ERROR][ENTITY][%cRBID:%02d] UsResetChannel fail (null object)
Line 210: [ERROR][ENTITY][%cRBID:%02d] UsModifyChannel fail (null param)
Line 214: [ENTITY][%cRBID:%02d] UsModifyChannel PdcpVer(%d)
Line 241: [ENTITY][SRBID:%02d] UsModifyChannel : SkipScgConfig for SRB PdcpVer(%d) RbType(%d)
Line 263: [ENTITY][%cRBID:%02d][WaitScgConfig] UsModifyChannel : Start WaitScgConfig PdcpVer(%d) RbType(%d)
Line 292: [PROC][%cRBID:%02d] PdcpRx Event! (RESTART_PROC_EVENT)
Line 298: [PROC][%cRBID:%02d] PdcpRx Event! (LTE RESET PDU), RAT_LTE
Line 300: [PROC][%cRBID:%02d] PdcpRx Event! (LTE RESET PDU), RAT_NR
Line 317: [ERROR][PROC][%cRBID:%02d] Not supported Event(%d)
Line 326: [PROC][%cRBID:%02d] PdcpRx Event Done! Event(%d)(3:NR 4:LTE) RX_DELIV(%d/%d/%d) RX_NEXT(%d) RX_REORD(%d) NumReordTb(%d)
Line 359: [PROC][%cRBID:%02d] PdcpRx Self Event! (LTE RESET PDU), RAT_LTE
Line 361: [PROC][%cRBID:%02d] PdcpRx Self Event! (LTE RESET PDU), RAT_NR
Line 367: [ERROR][PROC][%cRBID:%02d] Not supported Event(%d)
Line 375: [PROC][%cRBID:%02d] PdcpRx by REEST done! Event(%d) RX_DELIV(%d/%d/%d) RX_NEXT(%d) RX_REORD(%d) NumReordTb(%d)
Line 419: [PDCP RX][BEARER][%cRBID:%02d] %-25s PdcpVer(%d) RbType(%d->%d) LcId(%d->%d)(%d->%d)
Line 446: [ERROR][ENTITY] Lte Lcid(%d) is out of range!
Line 454: [ERROR][ENTITY] Lte Lcid(%d) is out of range!
Line 485: [ENTITY] Release!
Line 498: [ENTITY][%cRBID:%02d] Skip BackupPdcpCount StoredCount(%d)
Line 522: [ENTITY][%cRBID:%02d] Reestablish : Already triggered (StatusReportRequired=%d RrcRatType=%d PdcpVer=%d) 
Line 526: [ENTITY][%cRBID:%02d] Reestablish
Line 593: [ENTITY][%cRBID:%02d] DataRecovery
Line 598: [ENTITY][%cRBID:%02d] Skip StatusReport (StatusReportRequired=%d RlcMode=%d RbType=%d) 
Line 606: [ENTITY][%cRBID:%02d] BackupPdcpCount(%d)
Line 615: [ENTITY][%cRBID:%02d] RestorePdcpCount(%d)
Line 625: [ENTITY][%cRBID:%02d][WaitScgConfig][SKIP] Active
Line 641: [ENTITY] Suspend
