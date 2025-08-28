Line 80: [ERROR][PROC] DomainType[%d] PdcpChId[%d]
Line 197: [WARNING][PROC][%cRBID:%02d] LTEResetRLC Data is not empty. Keep process LteRlcResetData [%d/%d]
Line 206: [ERROR][PROC][%cRBID:%02d] LTEResetRLC Data is not empty. Revert to LteResetQ
Line 211: [ERROR][%cRBID:%02d] Self L2_PDCPRX_LTE_RESET_PDU_EVENT Fail !!!
Line 308: [PROC][%cRBID:%02d] Restart pending PdcpPdu Lte1Nr2(%d)
Line 315: [PROC][%cRBID:%02d] Restart pending PdcpPdu Lte1Nr2(%d)
Line 326: [PROC][%cRBID:%02d][PDCPVER:%d] Waiting Security Config
Line 335: [PROC][%cRBID:%02d] t_ReorderingTimer : Expired RX_NEXT(%d) RX_DELIV(%d) RX_REORD(%d) !!!
Line 341: [PROC][%cRBID:%02d] Restart Pending Reordering
Line 358: [%cRBID:%02d] TrigRestartProccessor !!!
Line 361: [ERROR][%cRBID:%02d] TrigRestartProccessor : SetEvent Fail !!!
Line 384: [ERROR][PROC][%cRBID:%02d][CG:%d] PDCP HFN Overflow Count(%d) PdcpSn(%d) RX_DELIV(%d,%d,%d) RxNext(%d)
Line 397: [ERROR][PROC][%cRBID:%02d][CG:%d] PDCP HFN Underflow Count(%d) PdcpSn(%d) RX_DELIV(%d,%d,%d) RxNext(%d)
Line 426: [WARNING][PROC][%cRBID:%02d][CG:%d] Discard SN(0x%06x) (HFN=0x%x) RX_DELIV(%d,%d,%d) RX_NEXT(%d)
Line 630: [WARNING][PROC][%cRBID:%02d] Already delivered PDU in ReordTb Count(%u)
Line 633: [ERROR][PROC][%cRBID:%02d] Undefined PDU in ReordTb Count(%u) PduState(%d)
Line 651: [PROC][%cRBID:%02d] Too much Reordering Pdus, stop current event handling RxDeliv(%d) RxNext(%d) bDelivering(%d)
Line 712: [WARNING][PROC][%cRBID:%02d] Already delivered PDU in ReordTb Count(%u)
Line 715: [ERROR][PROC][%cRBID:%02d] Undefined PDU in ReordTb Count(%u) PduState(%d)
Line 757: [PROC][%cRBID:%02d] Start OutOfOrderDelivery RX_DELIV(%d) RX_NEXT(%d) RX_REORD(%d) DELIV_OOD(%d) DELIV_UNTIL(%d) NumReordTb(%d)
Line 812: [WARNING][PROC][%cRBID:%02d] LTE PDCP missing Count without ReorderingFunction !!! RX_DELIV(%d) RX_NEXT(%d) DeliverTo(%d) ResetPdu(%d) PendingReordering(%d)
Line 896: [PROC][%cRBID:%02d] ReleaseReorderingTable! Skip by no Reordering used ReordTbNum(%d)
Line 908: [PROC][%cRBID:%02d] ReleaseReorderingTable! ReordTbNum(%d) (%d~%d)
Line 916: [ERROR][PROC][%cRBID:%02d] Reordering Table missmatch ReordTbNum(%d) Free(%d~%d)
Line 925: [ERROR][PROC][%cRBID:%02d] Reordering Table missmatch ReordTbNum(%d) Free(%d~%d)
Line 939: [PROC][%cRBID:%02d] Release all SpscQueue
Line 965: [PROC][%cRBID:%02d][CG:%d][ControlPdu] Proc PDCP Control PDU! PayloadAddress(0x%x) PayloadLen(%d) LastSeg(%d) firstByte(0x%x) DescTypeId(%d)
Line 968: [ERROR][PROC][%cRBID:%02d][CG:%d][ControlPdu] R field error! PduType(%d) headerLen(%d)
Line 984: [ERROR][PROC][%cRBID:%02d][CG:%d][ControlPdu] PduLen(%d) is too big!
Line 996: [WARNING][PROC][StatusPdu] L2_PDCPTX_CTRL_PDU_EVENT : SetEvent Fail (m_DomainType=%d PdcpChId=%d)!!!
Line 1021: [ERROR][PROC][%cRBID:%02d][CG:%d][ControlPdu] PduLen(%d) is too big! MAX SIZE(%d)
Line 1031: [ERROR][PROC][%cRBID:%02d][CG:%d][ControlPdu] Not supported pduType(%d)
Line 1052: [WARNING][PROC][%cRBID:%02d] t_ReorderingTimer : Start Fail !!! PdcpRxState(%d)
Line 1056: [PROC][%cRBID:%02d] t_ReorderingTimer : Skip start (PAUSE)
Line 1065: [PROC][%cRBID:%02d] t_ReorderingTimer : Start RX_NEXT(%d) RX_DELIV(%d) RX_REORD(%d) ReordTimeMs(INF)
Line 1070: [PROC][%cRBID:%02d] t_ReorderingTimer : Create Fail !!!
Line 1078: [PROC][%cRBID:%02d] t_ReorderingTimer : Restore remain reordTime RemainTimeMs(%d)
Line 1083: [PROC][%cRBID:%02d] t_ReorderingTimer : Start and Expired !!! RX_NEXT(%d) RX_DELIV(%d) RX_REORD(%d) ReordTimeMs(0)
Line 1088: [ERROR][PROC][%cRBID:%02d] t_ReorderingTimer : Start Fail !!!
Line 1093: [PROC][%cRBID:%02d] t_ReorderingTimer : Start RX_NEXT(%d) RX_DELIV(%d) RX_REORD(%d) ReordTimeMs(%d)
Line 1111: [WARNING][PROC][%cRBID:%02d] t_ReorderingTimer : Invalid timer is running
Line 1121: [PROC][%cRBID:%02d] t_ReorderingTimer : Stop RX_NEXT(%d) RX_DELIV(%d) RX_REORD(%d) ElapsedMS(%d)
Line 1127: [PROC][%cRBID:%02d] t_ReorderingTimer : Store remain %dms
Line 1153: [PROC][%cRBID:%02d] t_ReorderingTimer : Expired Callback !!! RX_NEXT(%d) RX_DELIV(%d) RX_REORD(%d)
Line 1160: [WARNING][PROC][%cRBID:%02d] InitReorderingTable : ReorderingSduNum(%d > 0)
Line 1170: [PROC] ProcSmcIntegrityVerification Start!
Line 1207: [ERROR][%cRBID:%02d][StatusPdu] StatusReport (invalid pdcp sn size)
Line 1263: [%cRBID:%02d][WARNING][StatusPdu] StatusReport size mismatch (%dbit != %dbit)
Line 1268: [PROC][%cRBID:%02d][StatusPdu] Send StatusReport FMC(%d) RX_NEXT(%d) PDU Size(%d)! m_PdcpChId(%d) m_DomainType(%d)
Line 1272: [WARNING][PROC][StatusPdu] L2_PDCPTX_CTRL_PDU_EVENT : SetEvent Fail (m_DomainType=%d PdcpChId=%d)!!!
Line 1278: [%cRBID:%02d][PDCPVER:%d][PROC] Reset StateVariable RX_DELIV(%d->0) RX_NEXT(%d->0) RX_REORD(%d->0) 
Line 1289: [%cRBID:%02d][PDCPVER:%d][PROC] Set StateVariable RX_DELIV/RX_NEXT(%d/%d->%d) RX_REORD(%d->0)
Line 1300: [%cRBID:%02d][PDCPVER:%d][PROC] Set StateVariable RX_DELIV/RX_NEXT(%d/%d->%d) RX_REORD(%d->0)
Line 1302: [%cRBID:%02d][PDCPVER:%d][PROC] Set StateVariable Split RX_DELIV_MCG(%d->%d) RX_DELIV_SCG(%d->%d)
Line 1315: [PROC][%cRBID:%02d][SRB] waitSecuConfig : Start  RX_NEXT(%d) RX_DELIV(%d) RX_REORD(%d)
Line 1321: [PROC][%cRBID:%02d][SRB] waitSecuConfig : End  RX_NEXT(%d) RX_DELIV(%d) RX_REORD(%d)
Line 1332: [PROC][DRBID:%02d][ST:%d] Decipher done callback! Result(%d) PktNum(%d) Length(%d) Count(%d) pData(0x%x) RatType(%d)
Line 1335: [ERROR][PROC] Dcp Result is not success!
Line 1416: [PROC][SRBID:%02d][ST:%d] Decipher done callback! Result(%d) PktNum(%d) Length(%d) Count(%d) pData(0x%x) RatType(%d)
Line 1419: [ERROR][PROC][SRB] Dcp Result is not success!
Line 1426: [ERROR][PROC][SRBID:%d] DcpFail CellGrp:%d
Line 1434: [PROC][SRB][Dump] payload : 
Line 1440: [PROC][SRB] Security Config Procedure Start! MAC-I(0x%x 0x%x 0x%x 0x%x)
Line 1492: [DEBUG][PDCPRX] Start Search ReordTb FindCount(%d ~ %d) ReorderingSduNum(%d)
Line 1496: [DEBUG][PDCPRX]   ReordTb(%d) PduState(%d) CgType(%d)
Line 261: [WARNING][PROC][%cRBID:%02d][CG:%d] Discard COUNT(%u) SN(0x%06x) OldDuplicated(%d), RX_DELIV(%d,%d,%d)
Line 267: [WARNING][PROC][%cRBID:%02d][CG:%d] Discard COUNT(%u) SN(0x%06x) RX_DELIV(%d,%d,%d) RX_NEXT(%d)
Line 272: [ERROR][PROC][%cRBID:%02d][DESCTYPE:%d] Invalid ReordResult - ReordResult(%d) pDesc(%p)
Line 279: [PROC][%cRBID:%02d][DESCTYPE:%d] Ctrl Pdu - PduResult(%d) pDesc(%p)
Line 288: [PROC][%cRBID:%02d][DESCTYPE:%d] Other Result - Count(%u) Sn(%d) PduResult(%d) pDesc(%p)
Line 261: [WARNING][PROC][%cRBID:%02d][CG:%d] Discard COUNT(%u) SN(0x%06x) OldDuplicated(%d), RX_DELIV(%d,%d,%d)
Line 267: [WARNING][PROC][%cRBID:%02d][CG:%d] Discard COUNT(%u) SN(0x%06x) RX_DELIV(%d,%d,%d) RX_NEXT(%d)
Line 272: [ERROR][PROC][%cRBID:%02d][DESCTYPE:%d] Invalid ReordResult - ReordResult(%d) pDesc(%p)
Line 279: [PROC][%cRBID:%02d][DESCTYPE:%d] Ctrl Pdu - PduResult(%d) pDesc(%p)
Line 288: [PROC][%cRBID:%02d][DESCTYPE:%d] Other Result - Count(%u) Sn(%d) PduResult(%d) pDesc(%p)
