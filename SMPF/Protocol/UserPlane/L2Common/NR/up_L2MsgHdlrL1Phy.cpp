Line 105: [L2 DEBUG] L2MsgHdlrL1Phy gL2DSDSPause(%d) gL2DSDSResume(%d) DomainType(%d) RatType(%d)
Line 123: L2_L1C_TX_CNF_Handler start CellGrpId[%d] DSDS[%d/%d] RSLT[%d]
Line 140: L1C_L2_TX_REQ send fail
Line 143: L1C_L2_TX_REQ retry
Line 148: TX_CNF result is false! Keep TxReq for retry! ReqTask[%d] m_tL2TxReqQ.size(%d)
Line 153: TX_CNF result is false by DSDS pause ReqTask[%d]
Line 159: TX_CNF result is false by ANR ReqTask[%d]
Line 163: [ERROR] TX_CNF result is false! ReqTask[%d]
Line 183: [L2<-L1C] MsgTxCnf : TxReqType(%d), SsbIndex(%d), SsRsrp(%d), CsiRsIndex(%d), CsiRsrp(%d)
Line 191: [L2<-L1C] MsgTxCnf : Pcmax(%d), PcmaxSul(%d), PathLoss(%d) Result(%d) CellGrpId(%d) DSDS(%d/%d)
Line 202: L2HPDCPTX_L2_TX_CNF send fail
Line 205: L2HPDCPTX_L2_TX_CNF send success
Line 215: L2HPDCPRX_L2_TX_CNF send fail
Line 218: L2HPDCPRX_L2_TX_CNF send success
Line 225: L2LMACRACH_L2_TX_CNF send fail
Line 228: L2LMACRACH_L2_TX_CNF send success
Line 238: L2LMACRX_L2_TX_CNF send fail
Line 241: L2LMACRX_L2_TX_CNF send success
Line 250: L2_L1C_TX_CNF Handled already!!!
Line 263: L1C_L2_TX_REQ send fail
Line 276: [L2] L2_L1C_TX_PAUSE_REQ RatType(%d) CellGrpId(%d) PauseReason(%d)
Line 303: [L2][E] DSDS paused m_DomainType[%d] CellGrpId[%d]
Line 310: L1C_L2_TX_PAUSE_CNF send fail
Line 327: L2LMACRACH_L2_TX_PAUSE_REQ send fail
Line 343: default RNTI
Line 365: [L2->PHY] PHY_L2_PUCCH_SRS_RELEASE_IND : cmd[%d], domainType[%d], MacEntity[%d], ServcellIndex[%d], carrierBitmap[%d], ccBitmap[%d]
Line 372: Ignore PHY_L2_PUCCH_SRS_RELEASE_IND, domainType[%d], MacEntity[%d], ServcellIndex[%d], carrierBitmap[%d], ccBitmap[%d]
Line 392: [L2] L2_L1C_TX_RESUME_REQ RatType(%d) CellGrpId(%d)
Line 400: [L2][E] DSDS resumed TxQ[%d]
Line 407: L1C_L2_TX_RESUME_CNF send fail
Line 419: L1C_L2_TX_REQ send fail
Line 422: [L2] m_bL2Release[%d] gL2DSDSPause[%d] L1C_L2_TX_REQ sent after resume
Line 435: L2LMACRACH_L2_TX_RESUME_REQ send fail
Line 457: L2_L1C_DRX_RESTORE_REQ_Handler start. m_DomainType[%d], MacEntity[%d]
Line 472: [ERROR] L1C_L2_DRX_RESTORE_CNF_T send fail
Line 476: [L2] L1C_L2_DRX_RESTORE_CNF m_DomainType[%d] MacEntity[%d]
Line 484: [L2] L2_L1C_CGI_TX_PAUSE_REQ! gL2TxRetryANR(%d) m_DomainType(%d)
Line 493: [ERROR] L1C_L2_CGI_TX_PAUSE_CNF send fail
Line 501: [L2] L2_L1C_CGI_TX_RESUME_REQ! gL2TxRetryANR(%d) m_DomainType(%d)
Line 507: [ERROR] L1C_L2_CGI_TX_RESUME_CNF send fail
Line 519: [ANR] Retry sending L1C_L2_TX_REQ_T! m_tL2TxReqQ.size(%d) task(%d) TxReqType(%d)
Line 523: L1C_L2_TX_REQ send fail
Line 546: [L2] L2_L1C_CGI_STATUS_IND m_DomainType[%d] MacEntity[%d] CgiStatus[%d] gIcmpForceBsrNr[%d] gIcmpForceBsrCnt[%d]
Line 555: [L2] L2_L1C_BPLMNCTRLR_RECOVERY_DONE_IND_Handler start. gL2TxRetryANR(%d) m_DomainType(%d) MsgGrpId(%d)
Line 566: L2_L2HPDCPRX_TX_REQ_Handler start DSDS(%d/%d)
Line 581: L1C_L2_TX_REQ send fail
Line 589: L1C_L2_TX_REQ (PDCPRX : Type:%d, BwpIdx:%d, ScellIdx:%d, cipher[%d] pend[%d]) send success
Line 628: L2_L2HPDCPTX_TX_REQ_Handler start DSDS(%d/%d). m_bPendingTxReqANR(%d) bLazyWakeUp(%d)
Line 639: L1C_L2_TX_REQ send fail
Line 647: L1C_L2_TX_REQ (PDCPTX : Type:%d, BwpIdx:%d, ScellIdx:%d, cipher:%d PhyConfig:%d pend:%d) send success
Line 661: [ANR] Keep TX_REQ(PDCPTX) msg!
Line 672: [L2] L2_L2HPDCPTX_TX_PAUSE_CNF RatType(%d) CellGrpId(%d)
Line 681: [L2] Sending L1C_L2_TX_PAUSE_CNF fail
Line 697: [L2] L2_L2HPDCPTX_TX_RESUME_CNF RatType(%d) CellGrpId(%d)
Line 705: [L2] Sending L1C_L2_TX_RESUME_CNF fail
Line 725: L1C_L2_TX_REQ send fail
Line 743: L2_L2LMACRACH_TX_DONE_IND_Handler start
Line 750: L1C_L2_TX_DONE_IND send fail
Line 753: [L2] L1C_L2_TX_DONE_IND m_DomainType[%d] CellGrpId[%d]
Line 763: L2_L2LMACRACH_TX_REQ_Handler start DSDS(%d/%d). m_bPendingTxReqANR(%d)
Line 773: L1C_L2_TX_REQ send fail
Line 781: L1C_L2_TX_REQ (MACRACH : Type:%d, BwpIdx:%d, ScellIdx:%d, cipher:%d PhyConfig:%d pend:%d) send success
Line 795: [ANR] Keep TX_REQ(MACRACH) msg!
Line 805: L2_L2LMACRACH_RNTI_CONTROL_IND_Handler start
Line 815: L1C_L2_RNTI_CONTROL_IND send fail
Line 819: [L2] L1C_L2_RNTI_CONTROL_IND m_DomainType[%d] CellGrpId[%d]
Line 828: [L2] L2_L2LMACRX_DRX_CMD_IND
Line 838: [L2] Sending L1C_L2_DRX_CMD_IND Fail!
Line 841: [L2] L1C_L2_DRX_CMD_IND m_DomainType[%d] CellGrpId[%d]
Line 850: [L2] L2_L2LMACRX_CLK_CHANGE_IND
Line 861: L2_L2LMACRX_TX_REQ_Handler start DSDS(%d/%d)
Line 871: L1C_L2_TX_REQ send fail
Line 879: L1C_L2_TX_REQ (MACRX : Type:%d, BwpIdx:%d, ScellIdx:%d, cipher[%d] pend[%d]) send success
Line 897: [L2] L2_LTEMAC_TX_PAUSE_REQ RatType(%d) CellGrpId(%d)
Line 902: [L2][E] DSDS paused m_DomainType[%d] CellGrpId[%d]
Line 917: L2HPDCPRX_L2_TX_PAUSE_REQ send fail
Line 927: [L2] L2_LTEMAC_TX_RESUME_REQ RatType(%d) CellGrpId(%d)
Line 935: [L2][E] DSDS resumed m_DomainType[%d] CellGrpId[%d]
Line 948: L2HPDCPRX_L2_TX_RESUME_REQ send fail
Line 975: L2HPDCPRX_L2_TX_RESUME_REQ send fail
Line 1017: Not Send L1C_L2_TX_REQ for CellGrpId[%d] PhyConfig CellGrpId[%d]
Line 1024: L1C_L2_TX_REQ send fail
Line 1046: L1C_L2_TX_CFG_RESET_IND send fail
Line 1049: [L2->L1C] L1C_L2_TX_CFG_RESET_IND : type(%d) CellGrpId(%d)
Line 1058: L2_L2LMACRACH_BWP_CHANGE_REQ_Handler start
Line 1065: L1C_L2_BWP_CHANGE_REQ send fail
Line 1068: [L2] L1C_L2_BWP_CHANGE_REQ m_DomainType[%d] CellGrpId[%d]
Line 1077: [L2][CDRX] L2_PHY_DRX_CONFIRM_IND. CellGrpId(%d)
Line 1086: [CDRX] ignore L2_PHY_DRX_CONFIRM_IND! TX_REQ is running!
Line 1127: L2HPDCPTX_L2_TX_CNF send fail
Line 1131: TxReq Queue flushed, m_DomainType[%d] CellGrpId[%d] L2HPDCPTX_L2_TX_CNF
Line 1146: L2HPDCPRX_L2_TX_CNF send fail
Line 1150: TxReq Queue flushed, m_DomainType[%d] CellGrpId[%d] L2HPDCPRX_L2_TX_CNF
Line 1165: L2LMACRACH_L2_TX_CNF send fail
Line 1169: TxReq Queue flushed, m_DomainType[%d] CellGrpId[%d] L2LMACRACH_L2_TX_CNF
Line 1184: L2LMACRX_L2_TX_CNF send fail
Line 1188: TxReq Queue flushed, m_DomainType[%d] CellGrpId[%d] L2LMACRX_L2_TX_CNF
