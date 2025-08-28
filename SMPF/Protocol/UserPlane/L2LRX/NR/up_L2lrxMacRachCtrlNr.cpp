Line 104: L2LRXMAC_DeferRA : DomainType[%d], MacEntity[%d], UlMode[%d], BwpId[UL:%d/DL:%d], Cause[%d], IsDSDS[%d]
Line 155: [SI-RACH] Cannot trigger MSG1-based SI-REQ RACH
Line 170: [ERROR] Undefined RACH cause triggered by RRC
Line 192: Stop Previous RACH : DomainType[%d], MacEntity[%d], Cause[%d]
Line 205: Skip RRC trigger RACH, on-going RACH : DomainType[%d], MacEntity[%d], Cause[%d]
Line 220: L2_L2LMACRACH_RACH_START_CNF send fail
Line 236: L2_L2LMACRACH_RACH_START_CNF send fail
Line 313: [ERROR] Wrong OndemandSiType[%d]
Line 318: [ERROR] Undefined RACH cause triggered by RRC
Line 359: TriggerRA_RRC : DomainType[%d], MacEntity[%d], UlMode[%d], SevCellIndex[%d], BwpId[UL:%d/DL:%d], Cause[%d]
Line 393: Skip MAC trigger RACH, MacEntity[%d] MacRxState[%d]
Line 401: Skip MAC trigger RACH, on-going RACH : DomainType[%d], MacEntity[%d], Cause[%d]
Line 448: TriggerRA_MAC : DomainType[%d], MacEntity[%d], UlMode[%d], ServCellIndex[%d], BwpId[UL:%d/DL:%d], Cause[%d]
Line 471: Skip DSP trigger RACH, MacEntity[%d] MacRxState[%d]
Line 479: Skip DSP trigger RACH, on-going RACH : DomainType[%d], MacEntity[%d], Cause[%d]
Line 512: Stop DSP trigger RACH : Invalid CCIndex[%d]
Line 523: Stop DSP trigger RACH (Dormant BWP) : DomainType[%d], MacEntity[%d], ServCellIndex[%d], BwpId[UL:%d/DL:%d]
Line 577: TriggerRA_DSP : DomainType[%d], MacEntity[%d], UlMode[%d], ServCellIndex[%d], BwpId[UL:%d/DL:%d], Cause[%d]
Line 610: Skip BFR trigger RACH, MacEntity[%d] MacRxState[%d]
Line 618: Skip BFR trigger RACH, on-going RACH : DomainType[%d], MacEntity[%d], Cause[%d]
Line 623: Stop Previous RACH : DomainType[%d], MacEntity[%d], Cause[%d]
Line 689: TriggerRA_BFR : DomainType[%d], MacEntity[%d], UlMode[%d], ServCellIndex[%d], BwpId[UL:%d/DL:%d], Cause[%d]
Line 729: L2LRXMAC_PauseRA : DomainType[%d], MacEntity[%d], Cause[%d], Task[%d], RachTriggered[%d]
Line 771: L2LRXMAC_ResumeRA : DomainType[%d], MacEntity[%d], Cause[%d], Task[%d], RachTriggered[Pend:%d/DSDS:%d], IsDSDS[%d]
Line 826: Re-start RACH on new BWP
Line 871: [ERROR] Both m_pRachCfgCommon and m_pMsgACfgCommon are nullptr !!
Line 930: Reference signal RSRP[%d], msgA-RSRP-Threshold[%d], RA type[%d]
Line 935: [ERROR] Not supported RACH casue [%d]
Line 938: Select RA type: %d-step RA
Line 951: StartRA : DomainType[%d], MacEntity[%d], UlMode[%d], BwpId[UL:%d/DL:%d], Cause[%d]
Line 967: [ERROR] Wrong PreambleTransCnt !! not initialize
Line 1005: StartSR : DomainType[%d], MacEntity[%d]
Line 1036: [L2->PHY] IpcSriOn : cmd(%d), schedulingRequestId(%d), srProhibitTimer(%d), srTransMax(%d), priority(%d)
Line 1045: Trigger SR-RACH : DomainType[%d], MacEntity[%d] SrId[%d] DsrConfig[%d] UlSync[%d]
Line 1045: Trigger SR-RACH : DomainType[%d], MacEntity[%d] SrId[%d] DsrConfig[%d] UlSync[%d]
Line 1053: PUCCH-SR not triggered or cancelled : DomainType[%d], MacEntity[%d]
Line 1066: Cancel PUCCH-SR : DomainType[%d], MacEntity[%d], SrId[%d]
Line 1093: [L2->PHY] IpcSriOn : cmd(%d), schedulingRequestId(%d), srProhibitTimer(%d), srTransMax(%d), priority(%d), pause(%d)
Line 1102: PUCCH-SR cancelled already !! : DomainType[%d], MacEntity[%d], SrId[%d], DsrConfig[%d], UlSync[%d] SrTriggered[%d], gSRIpcTrigger[%d]
Line 1110: EndRA : DomainType[%d], MacEntity[%d], Source[%d], Cause[%d]
Line 1126: [L2->PHY] IpcMacRachCtrl : cmd(%d)
Line 1135: No RACH on-going
Line 1142: [WARNING] NR Attach state is false! switch to NR attach
Line 1297: [L2->PHY] IpcMacRachCtrl : cmd(%d), cellGroup(%d), rachType(%d), rachCause(%d), retryCause(%d), cr_type(%d)
Line 1303: [L2->PHY] IpcMacRachCtrl : rar_timer(%d), msgb_timer(%d), preamble_trans_cnt(%d), preamble_pwr_ramp_cnt(%d), preamble_id(%d)
Line 1310: [L2->PHY] IpcMacRachCtrl : resource_type(%d), resource_ssb_id(%d), resource_csirs_id(%d), carrier_index(%d), ra_ssb_occasion_mask_id(%d), recoverySearchSpaceId(%d)
Line 1318: |UE -> gNB| MSG%c : RACH (DomainType[%d], MacEntity[%d], SSB[%d], Group[%d], PreambleId[%d], Cause[%d])
Line 1318: |UE -> gNB| MSG%c : RACH (DomainType[%d], MacEntity[%d], SSB[%d], Group[%d], PreambleId[%d], Cause[%d])
Line 1322: |UE -> gNB| MSG%c : RACH (DomainType[%d], MacEntity[%d], CSI-RS[%d], Group[%d], PreambleId[%d], Cause[%d])
Line 1322: |UE -> gNB| MSG%c : RACH (DomainType[%d], MacEntity[%d], CSI-RS[%d], Group[%d], PreambleId[%d], Cause[%d])
Line 1326: |UE -> gNB| MSG%c : RACH (DomainType[%d], MacEntity[%d], NO_SSB/CSI-RS, Group[%d], PreambleId[%d], Cause[%d])
Line 1326: |UE -> gNB| MSG%c : RACH (DomainType[%d], MacEntity[%d], NO_SSB/CSI-RS, Group[%d], PreambleId[%d], Cause[%d])
Line 1386: [ERROR] Both pRachCfgCommon and pMsgACfgCommon are nullptr !!
Line 1426: Switching gL2BwpId[DomainType:%d],[MacEntity:%d][CellIndex:%d].UlBwpId [%d] -> [%d]
Line 1439: Switching gL2BwpId[DomainType:%d][MacEntity:%d][CellIndex:%d].DlBwpId [%d] -> [%d]
Line 1456: Switching gL2BwpId[DomainType:%d][MacEntity:%d][CellIndex:%d].DlBwpId [%d] -> [%d]
Line 1491: [L2->PHY] IpcPucchSrsRel : cmd(%d)
Line 1528: BFI_COUNTER(%d) START, MaxCount(%d)
Line 1533: BFI_COUNTER(%d) >= beamFailureInstanceMaxCount(%d)
Line 1548: gSrCtrlInfo[%d] gSrConfig[%d] gCurrentMACStatusNr[%d]
Line 1552: Ignore triggered SR, MAC State[%d] is not RX_MAC_STATE_CONN_NR
Line 1558: [OEM][PKTTa_WARN] [Event] NR MAC State(%d) is not RX_MAC_STATE_CONN_NR. Skip SR! trackNum: %u
Line 1571: Skip PUCCH-SR, on-going RACH : DomainType[%d], MacEntity[%d] CellId[%d] BwpId[%d] SrId[%d]
Line 1576: [OEM][PKTTa_WARN] [Event] NR RA is ongoing. Skip SR! trackNum: %u
Line 1584: Trigger PUCCH-SR : DomainType[%d], MacEntity[%d] CellId[%d] BwpId[%d] SrId[%d]
Line 1592: Defer PUCCH-SR : DomainType[%d], MacEntity[%d] CellId[%d] BwpId[%d] SrId[%d]
Line 1597: [OEM][PKTTa_WARN] [Event] NR L2DSDSPause. Defer SR! trackNum: %u
Line 1610: [OEM][PKTTa] [Event] NR SR TX_REQ is sent by MAC. trackNum: %u
Line 1625: [OEM][PKTTa_WARN] [Event] NR SR is waiting for TX confirm. trackNum: %u
Line 1633: Trigger SR-RACH : DomainType[%d], MacEntity[%d] CellId[%d] BwpId[%d] SrId[%d] DsrConfig[%d] UlSync[%d]
Line 1633: Trigger SR-RACH : DomainType[%d], MacEntity[%d] CellId[%d] BwpId[%d] SrId[%d] DsrConfig[%d] UlSync[%d]
Line 1639: [OEM][PKTTa_WARN] [Event] NR SR cannot be triggered. No SR resource or UL unsync. RA is triggered! trackNum: %u
Line 1649: PUCCH-SR triggered already !! : DomainType[%d], MacEntity[%d] CellId[%d] BwpId[%d] SrId[%d] DsrConfig[%d] UlSync[%d]
Line 1654: [OEM][PKTTa] [Event] Pending NR SR, NR SR REQ not sent. trackNum: %u
Line 1669: RACH TX_REQ was already sent, skip TX_REQ
Line 1691: [L2->L1C] MsgTxReq : MacEntity(%d), TxReqType(%d), BwpIdx(%d), SpCellIdx(%d)
Line 1694: L2_L2LMACRACH_TX_REQ send fail
Line 1717: [L2->L1C] MsgTxReq : MacEntity(%d), TxReqType(%d), BwpIdx(%d), SpCellIdx(%d)
Line 1720: L2_L2LMACRACH_TX_REQ send fail
Line 1743: [L2->L1C] MsgTxReq : TxReqType(%d), BwpIdx(%d), SpCellIdx(%d)
Line 1746: L2_L2LMACRACH_TX_REQ send fail
Line 1773: [L2->L1C] MsgBwpChgReq : MacEntity(%d), CellIndex(%d), UlBwpIndex(%d), DlBwpIndex(%d)
Line 1777: L2_L2LMACRACH_BWP_CHANGE_REQ send fail
