Line 69: [TMC] Init!
Line 78: [TMC] m_bModeBTimerCreate!
Line 93: [TMC] ResetTmc!
Line 125: [TMC][ERROR] Invalid ChId RbId(%d)!
Line 135: [TMC][ERROR]Invalid PdcpTxEntity RbId(%d) length(%u) pData(0x%x)!
Line 144: [TMC][ERROR] TmcDataQueue full!
Line 166: [TMC][ERROR] Alloc Failed to get cId(%d) !!!
Line 179: [TMC] push queue! rbId(%u) ebId(%u) cId(%d) length(%u), pData(0x%x) m_uTmcDataCount(%u)
Line 181: [TMC][WARNING] Skip print log start! - push queue
Line 210: [TMC] SyncLteTlpConfig! u32CurrentState(%d) TlpMode(%d) u8NumDrbConfigLb(%d) u8TotalNumDrbConfig(%d)
Line 214: [TMC] LBID(%d) au8TlpEPSbearerId(%d) au8TlpDRbId(%d) aeDrbState(%d)
Line 215: [TMC] MODE A : au8TlpIsUlPdcpSduScalingConfig(%d) au16TlpUlPdcpSduSize(%d)
Line 218: [TMC] MODE B : u8IsBufferIpPdus(%d) u8TlpTDelayTimerValue(%d)
Line 229: [TMC] ProcLteTlpConfigMsg! u32MsgType(%d) u8Data(%d)
Line 259: [TMC][ERROR] unknown msg type!
Line 273: [TMC] ProcLbDrbInd! NumDrbs(%u) Previous u8TotalNumDrbConfig(%u)
Line 288: [TMC] i(%d) : DrbIdForLB(%d) CnIdForLB.choice(%d) u.epsBearerId(%d) u.pduSessionId(%d)
Line 289: [TMC] RbTypeForLB(%d) RbConfStatusForLB(%d) RbDirectionForLB(%d)
Line 298: [TMC] DrbIdForLB(%u) is not BI-DIRECTIONAL. Ignore this RB_SETUP
Line 305: [TMC] lbId(%d) Setup drb(%d), now u8TotalNumDrbConfig(%d)
Line 320: [TMC] Ignore this config state!
Line 334: [TMC] LB setup Result! au8TlpDRbId[%d] = %d, u8NumDrbConfigLb = %d
Line 346: [TMC] ProcDataInd! Length(%u) Data(0x%x 0x%x)
Line 351: [TMC][ERROR] Invalid Length! Ignore this message.
Line 358: [TMC][ERROR] SI is not 0. Ignore this message.
Line 423: [TMC][ERROR] unknown messageType(%d)
Line 436: [TMC] ProcRsrpbReportInd! BestRsIndex(0x%x) Rsrp0(0x%x) Rsrp1(0x%x)
Line 461: [TMC] Proc_CLOSE_UE_TEST_LOOP! testMode(%d)
Line 466: [TMC][ERROR] Tlp mode is not active
Line 473: [TMC][ERROR] No bi-directional DRB
Line 480: [TMC][ERROR] Already UE test loop closed
Line 506: [TMC][ERROR] testMode is invalid!
Line 537: [TMC][MODE_A] LB setup list[%d]! uplinkPdcpSduSize(%u)(bits) drbType(%u)(0:EUTRA 1:NR) drbId(%u)
Line 541: [TMC][MODE_A] skip this DRB scaling config. Because This is E-UTRA DRB
Line 549: [TMC][MODE_A] LbId(%d) Found DRB! Set scaling info!
Line 572: [TMC][MODE_B] ipPduDelayField(%u)
Line 594: [TMC] Proc_OPEN_UE_TEST_LOOP! Current TlpMode(%d) will be MODE_NONE
Line 613: [TMC] Proc_ACTIVATE_TEST_MODE! testMode(%u)
Line 627: [TMC] Proc_DEACTIVATE_TEST_MODE!
Line 638: [TMC] Proc_RESET_UE_POSITIONING_STORED_INFO! UEPositioningTech(%d)
Line 645: [TMC] Sending LBS_L2_RESET_UE_POSI_INFO_IND Fail!
Line 648: [TMC] Send! LBS_L2_RESET_UE_POSI_INFO_IND
Line 655: [TMC] Proc UPDATE_UE_LOCATION_INFO!
Line 665: [TMC] ellipsoid! 0x%x 0x%x 0x%x...
Line 666: [TMC] horizontal! 0x%x 0x%x 0x%x
Line 667: [TMC] gnss! 0x%x 0x%x 0x%x
Line 671: [TMC] Sending LBS_L2_UPDATE_UE_LOCATION_INFO_IND Fail!
Line 674: [TMC] Send! LBS_L2_UPDATE_UE_LOCATION_INFO_IND
Line 684: [TMC] Proc_ACTIVATE_BEAMLOCK! nrMode(%d) ueBeamLockTestFunction(%d) FrType(%d)
Line 690: [TMC][ERROR] Not supported FR!
Line 706: [TMC] Send PHY IPC! (PHY_L2_UE_BEAMLOCK_IND)
Line 717: [TMC] Proc_DEACTIVATE_BEAMLOCK! nrMode(%d)
Line 723: [WARNING][TMC] UBF is already off!
Line 738: [TMC] Send PHY IPC! (PHY_L2_UE_BEAMLOCK_IND)
Line 745: [TMC] Proc SS-RSRPB REQ! ObjectId(%u)
Line 777: [TMC] SendLbDataInd! eMsgType(%d)
Line 781: [TMC][ERROR] Sending MM_L2_LB_DATA_IND is fail!
Line 785: [TMC] Sending MM_L2_LB_DATA_IND is success!
Line 793: [TMC] SendMsgToLteTlp! eMsgType(%d)
Line 808: [TMC] Sending LTETLP_L2_NR_RSRPB_RSP Fail!
Line 811: [TMC] Send! LTETLP_L2_NR_RSRPB_RSP
Line 815: [TMC][ERROR] Not supported eMsgType(%d)
Line 830: [TMC] SendBeamLockInd! ueBeamLockTestFunction(%d)
Line 834: [TMC][ERROR] Sending L1C_L2_BEAMLOCK_IND is fail!
Line 838: [TMC] Sending L1C_L2_BEAMLOCK_IND is success!
Line 853: [TMC][ERROR] Sending RRM_L2_SS_RSRPB_REPORT_CONFIG_IND is fail!
Line 857: [TMC] Sending RRM_L2_SS_RSRPB_REPORT_CONFIG_IND is success!
Line 874: [TMC][ST%d] RunTmc()! SA Mode(%d)
Line 878: [TMC][ERROR] TLP state(%d) is not active!
Line 884: [TMC] ModeB Timer exp case!
Line 914: [TMC] Start m_ModeBTimer! (%d)ms
Line 923: [TMC] ModeB Timer is running! Keep received PDUs.
Line 930: [TMC][ERROR] not supported mode(%u)
Line 943: [TMC] Invoke L2HTXSDAP_SendSaUlDataforLoopback()! ulSduNum(%u)
Line 948: [TMC] Invoke L2NR_SendUlDataforNsa()! ulSduNum(%u)
Line 954: [TMC][ERROR] ulSduNum is 0!
Line 980: [TMC] ProcLoopModeA()! rbId(%d) lbId(%d) queue size(%d)
Line 990: [TMC][ERROR] Can not run LoopBack Mode! CUR_STATE(%d) lbId(%d)
Line 997: [TMC] scaling config on! configSduSize(%d)
Line 1001: [TMC][ERROR] configSduSize is 0. Can't make Loopback PDU
Line 1003: [TMC] Flush TmcDataQueue! size(%d) rbId(%d)
Line 1021: [TMC][ERROR] m_tTmcDataQueue.front() is nullptr!
Line 1030: [TMC][ERROR] rbId(%d) != pTmcData->rbId(%d)
Line 1039: [TMC][WARNING] Skip print log start!
Line 1050: [TMC] Alloc CellBuffer! size(%u)
Line 1057: [TMC][ERROR] pCellData == nullptr
Line 1075: [TMC][ERROR] something is wrong! Please check dump
Line 1087: [TMC] Make Loopback PDU (1:1 case)
Line 1103: [TMC] Make Loopback PDU Segment! curPduLength(%u) PDCP SDU length(%u)
Line 1107: [TMC] Make Loopback PDU(1:N case)! curPduLength(%u)
Line 1118: [TMC] Enque Sdu Descriptor! Length(%u) DomainType(%d)
Line 1150: [TMC] ProcLoopModeB()! rbId(%d) lbId(%d) queue size(%d) bSaMode(%d) bTimerExp(%d)
Line 1162: [TMC] Process this TmcData! TimerExpired case!
Line 1168: [TMC][ERROR] Can not run LoopBack Mode! CUR_STATE(%d) lbId(%d)
Line 1175: [TMC][ERROR] Can not run LoopBack Mode! CUR_STATE(%d)
Line 1184: [TMC][ERROR] m_tTmcDataQueue.front() is nullptr!
Line 1193: [TMC][ERROR] rbId(%d) != pTmcData->rbId(%d)
Line 1200: [TMC] Alloc CellBuffer! size(%u)
Line 1206: [TMC][ERROR] pCellData == nullptr
Line 1217: [TMC] Enqueue PKTHND queue! len(%d) cId(%d) rbId(%d) ebId(%d) DomainType(%d)
Line 1227: [TMC] ModeBTimerExpiredHandler()!
Line 1294: [TMC] FlushTmcDataQueue! rbId(%d) queue size(%d)
Line 1345: [TMC] Turn off Tlp NR SA Mode!
Line 1359: [TMC][ERROR] Not Allow MakeLbPDU! wrong lbId(%d)! rbId(%d)
Line 1365: [TMC][WARNING] Not Allow MakeLbPDU! ConfigSduSize is 0! rbId(%d) lbId(%d)
Line 1419: [ConvertLteTlpF2LMsg] ConvertLteTlpF2LMsg is success. MsgId %d, Length %d
Line 1422: [ConvertLteTlpF2LMsg] ConvertLteTlpF2LMsg is success.
