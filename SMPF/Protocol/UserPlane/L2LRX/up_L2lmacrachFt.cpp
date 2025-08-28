Line 154: [ERROR] Invalid GetMacRachCtrl MacEntity[%d]
Line 176: [ERROR] Invalid GetMacRachCfg MacEntity[%d] DomainType[%d]
Line 198: [ERROR] Invalid GetMacRachTimer MacEntity[%d] DomainType[%d]
Line 220: [ERROR] Invalid GetMacRachResc MacEntity[%d] DomainType[%d]
Line 247: [ERROR] Invalid GetMacRachProc MacEntity[%d] DomainType[%d]
Line 256: [E] DomianType [%d]
Line 272: Fail RemoveDataFm
Line 280: L2LMACRACH_L2LMACRX_CR_IND_Handler start
Line 291: L2LMACRACH_L2LMACRX_RAR_IND_Handler start
Line 302: L2LMACRACH_L2LMACRX_SR_CHECK_IND_Handler start
Line 319: Trigger SR-RACH : MacEntity[%d], UlSync[%d]
Line 319: Trigger SR-RACH : MacEntity[%d], UlSync[%d]
Line 331: L2LMACRACH_L2_CONFIG_REQ_Handler start
Line 344: Fail CreateDataFmUni<L2lMacRachFtEvent>
Line 380: L2_L2LMACRACH_CONFIG_CNF send fail
Line 393: L2LMACRACH_L2_PUCCH_SRS_RELEASE_IND_Handler start
Line 402: [ERROR] Invalid CellGrpId[%d], TagId[%d]
Line 414: L2LMACRACH_L2_RACH_START_REQ_Handler start
Line 428: [ERROR] Invalid Cell Group
Line 444: L2_L2LMACRACH_RACH_STOP_CNF send fail
Line 453: Stop Defer RACH : DomainType[%d], MacEntity[%d], Cause[%d]
Line 464: Stop Defer RACH : MacEntity[%d], Cause[%d]
Line 483: L2LMACRACH_L2_RESET_REQ_Handler start : MacEntity[%d] ResetCause[%d]
Line 503: L2_L2LMACRACH_RESET_CNF send fail
Line 507: [TX] L2_L2LMACRACH_RESET_CNF
Line 517: L2LMACRACH_L2_TX_CNF_Handler start result[%d]
Line 534: Clear gL2DSDSRachCtrlInfo[MacEntity:%d].RachTxConfirmWait = false
Line 554: Clear gSrCtrlInfo[DomainType:%d][MacEntity:%d].SrTxConfirmWait = false
Line 564: Ignore TX_CNF, MAC State[%d] is not active
Line 573: TxReqType[%d], PhyRachCause[%d] mismatch, m_DomainType[%d], MacEntity[%d]
Line 581: Ignore TX_CNF, TxReqType[%d] RachTxConfirmWait[%d]
Line 641: L2_L2LMACRACH_TX_PAUSE_CNF send fail
Line 645: L2LMACRACH_L2_TX_PAUSE_REQ_Handler : Defer SR[0x%X]
Line 683: [ERROR] SR Event Fail !!! [MacEntity:%d] [SchedulingRequestId:%d]
Line 690: L2LMACRACH_L2_TX_RESUME_REQ_Handler : Resume SR[0x%X]
Line 699: L2_L2LMACRACH_TX_RESUME_CNF send fail
Line 712: L2LMACRACH_L2_BWP_CHANGE_DONE_IND_Handler start
Line 727: Switching gL2BwpId[DomainType:%d][MacEntity:%d][CellIndex:%d].UlBwpId [%d] -> [%d]
Line 756: Switching gL2BwpId[DomainType:%d][MacEntity:%d][CellIndex:%d].DlBwpId [%d] -> [%d]
Line 771: [L2->RRC] MsgBwpChgDoneInd : CellIndex(%d), ActiveUlBwpId(%d), ActiveDlBwpId(%d)
Line 775: L2_L2LMACRACH_BWP_CHANGE_DONE_IND send fail
Line 795: L2LMACRACH_PHY_UL_MSGA_PUSCH_TBS_Handler start
Line 799: [L2<-PHY]  : present flag(%d), TB size for CFRA config(%d), TB size for GroupB(%d)
Line 810: L2LMACRACH_PHY_RACH_CONTROL_IND_Handler start
Line 817: [L2<-PHY] PhyRachCtrl : cmd(%d), preambleIndex(%d), UL_SUL_indicator(%d), prachMaskIndex(%d), SS_PBCH_index(%d), carrier_index(%d)
Line 821: Ignore L2LMACRACH_PHY_RACH_CONTROL_IND
Line 838: Invalid NR_DRACH_CMD_SUCCESS : RachCause[%d]
Line 854: L2LMACRACH_PHY_TIMER_EXPIRE_IND_Handler start
Line 855: [L2<-PHY] RachTimerExp : timer_type(%d)
Line 859: Ignore L2LMACRACH_PHY_TIMER_EXPIRE_IND
Line 890: L2LMACRACH_PHY_DSR_FAIL_IND_Handler start
Line 891: [L2<-PHY] DsrMaxFail : cmd(%d)
Line 895: Ignore L2LMACRACH_PHY_DSR_FAIL_IND
Line 908: [L2->RRC] MsgPucchSrsRelInd : CellGrpId(%d), TagId(%d), Cause(%d)
Line 912: L2_L2LMACRACH_PUCCH_SRS_RELEASE_IND send fail
Line 946: L2LMACRACH_PHY_BEAM_FAIL_IND_Handler start
Line 947: [L2<-PHY] BeamFailInd : BFIndicationPeriod(%d)
Line 960: L2LMACRACH_L2_PHY_CONFIG_STATUS_IND_Handler start
Line 978: L2LMACRACH_L2_BWP_CHANGE_CNF_Handler start
Line 993: [L2->RRC] MsgBwpChgDoneInd : CellIndex(%d), ActiveUlBwpId(%d), ActiveDlBwpId(%d)
Line 997: L2_L2LMACRACH_BWP_CHANGE_DONE_IND send fail
Line 1006: Re-start RACH on new BWP
Line 1039: [ERROR] no gRachCtrlInfo for Re-Start RACH
