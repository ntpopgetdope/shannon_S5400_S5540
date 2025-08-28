Line 263: [###[NR_IPC][RECV] NrRcvIpcHndlr_FindDemodCc: Target demod_cc is not found (0x%x)
Line 266: [###[NR_IPC][RECV] NrRcvIpcHndlr_FindDemodCc: found demod_cc(%d)
Line 281: ###[NR_IPC][RECV] NrRcvIpcHndlr_LcpuInitCnf: domain_type(%d), demod_cc(%d)
Line 323: ###[NR_IPC][RECV] NrRcvIpcHndlr_LcpuReleaseCnf: stack_id(%d), cell_group(%d), demod_cc(%d), domain_type(%d)
Line 340: ###[NR_IPC][RECV] NrRcvIpcHndlr_CinrStatusInd: cc(%d)
Line 346: ###[NR_IPC][RECV] NrRcvIpcHndlr_ConfirmDrxInd: cc(%d)
Line 372: ###[NR_IPC] NrRcvIpcHndlr_ScellConfigCnf: Invalid demod_cc(%d)
Line 376: ###[NR_IPC] NrRcvIpcHndlr_ScellConfigCnf: demod_cc(%d), cmd(%d)
Line 469: ###[NR_IPC] abnormal NrRcvIpcHndlr_DrxConfirmInd: demod_cc(%d), stack_id(%d)
Line 496: [CMD LOG] : ###[NR_IPC][RECV] NrRcvIpcHndlr_Sib1AcqCnf - Invalid Cmd Val

Line 528: [CMD LOG] : ###[NR_IPC][RECV] NrRcvIpcHndlr_QsleepCtrlCnf: demod_cc(%d), cmd(%d)

Line 535: [CMD LOG] : ###[NR_IPC][RECV] NrRcvIpcHndlr_GapCtrlCnf

Line 548: ###[NR_IPC][RECV] NrRcvIpcHndlr_ScellActDeactCnf: Invalid demod_cc(%d)
Line 552: ###[NR_IPC][RECV] NrRcvIpcHndlr_ScellActDeactCnf: demod_cc(%d), cmd(%d)
Line 587: ###[NR_IPC] NrRcvIpcHndlr_TxSuspendCnf IPC RD[%d] WD[%d]

Line 596: ###[NR_IPC][RECV] NrEventReportCnf IPC
Line 603: ###[NR_IPC][RECV] NrMeasModeCtrlCnf IPC
Line 610: [CMD LOG] : L1C_PHY_MODEM_STATUS_IND Lisr

Line 619: [CMD LOG] : L2_PHY_MIF_CONTROL_IND Lisr

Line 626: [CMD LOG] : L2_PHY_TIMER_EXPIRE_IND Lisr

Line 633: [CMD LOG] : L2_PHY_UL_MSGA_PUSCH_TBS_IND Lisr

Line 640: [CMD LOG] : L2_PHY_RACH_CONTROL_IND Lisr

Line 651: [CMD LOG] : [E] Full L2_PHY_UL_GRANT_IND Lisr RD[%d] WD[%d]

Line 666: [CMD LOG] : L2_PHY_UL_GRANT_IND Lisr [%d] CC[%d] HID[%d]

Line 675: [CMD LOG] : ###[NR_IPC][RECV] L2_PHY_DSR_FAIL_IND Lisr

Line 682: [CMD LOG] : ###[NR_IPC][RECV] L2_PHY_DCI_INFO_IND Lisr

Line 689: [CMD LOG] : ###[NR_IPC][RECV] L2_PHY_SCELL_DEACT_IND Lisr

Line 696: [CMD LOG] : ###[NR_IPC][RECV] L2_PHY_BEAM_FAIL_IND Lisr

Line 703: [CMD LOG] : ###[NR_IPC][RECV] L2_PHY_SCELL_INFO_IND Lisr

Line 714: [CMD LOG] : L1C_PHY_TEST1_IND Lisr

Line 721: [CMD LOG] : L1C_PHY_TEST2_IND Lisr

Line 745: ###[NR_IPC][HISR] L1C_PHY_LCPU_INIT_CNF Hisr::  stack_id(%d), cell_group(%d), domain_type(%d)
Line 770: ###[NR_IPC][HISR] L1C_PHY_MIB_ACQ_CNF Hisr:: stack_id(%d), cell_group(%d), domain_type(%d)
Line 781: [CMD LOG] : [ERROR] Msg Alloc fail : L1C_PHY_RX_MODE_CHANGE_IND 

Line 796: ###[NR_IPC][HISR] L1C_PHY_RXMODE_CHANGE_IND Hisr: stack_id(%d), cell_group(%d), domain_type(%d)
Line 800: [CMD LOG] : [ERROR] Msg Send fail : L1C_PHY_RXMODE_CHANGE_IND 

Line 812: ###[NR_IPC][HISR] L1C_PHY_BWP_ID_UPDATE_IND Hisr#1 demod_cc(%d), scell_idx(%d), dl(0x%4x), ul(0x%4x), dormant_bwp_flag(%d), num_of_scell_idx(%d), BwpSwitchingType(%d)

Line 817: ###[NR_IPC][HISR] L1C_PHY_BWP_ID_UPDATE_IND Hisr#2 DormantBwpSwitchingInfo(%d) demod_cc(%d), scell_idx(%d), dormantFlag(%d)

Line 823: [CMD LOG] : [ERROR] Msg Alloc fail : L1C_PHY_RX_MODE_CHANGE_IND 

Line 852: ###[NR_IPC][HISR] demod_cc is different(%d, %d)
Line 862: ###[NR_IPC][HISR] L1C_PHY_BWP_ID_UPDATE_IND Hisr: stack_id(%d), cell_group(%d), domain_type(%d)
Line 866: [CMD LOG] : [ERROR] Msg Send fail : L1C_PHY_BWP_ID_UPDATE_IND_T 

Line 874: ###[NR_IPC][HISR] L1C_L1C_CLK_CTRL_IND hisr
Line 902: ###[NR_IPC][HISR] L1C_PHY_SYS_PARAM_CHG_CNF hisr: stack_id(%d), cell_group(%d), domain_type(%d)
Line 913: [CMD LOG] : L1C_PHY_CLAIT_START_CNF Hisr: stack_id(%d), cell_group(%d), domain_type(%d)

Line 939: [CMD LOG] : L1C_PHY_AIT_DUMP_IND Hisr: stack_id(%d), cell_group(%d), domain_type(%d)

Line 1010: [CMD LOG] : [ERROR] Msg Alloc fail : L2_PHY_DRX_CONFIRM_IND 

Line 1024: ###[NR_IPC][HISR] L1C_PHY_DRX_CONFIRM_IND Hisr: domain_type(%d) DrxType(%d) CurTime(%d) SleepDur(%d) CellGrpId(%d)
Line 1028: [CMD LOG] : [ERROR] Msg Send fail : L2_PHY_DRX_CONFIRM_IND

Line 1039: [CMD LOG] : ###[NR_IPC][HISR] L1C_PHY_DRX_WAKEUP_INIT_CNF Hisr

Line 1044: [CMD LOG] : ###[NR_IPC][HISR] L1C_PHY_FER_MEASURE_IND Hisr

Line 1057: ###[NR_IPC][HISR] L1C_PHY_RMS_UPDATE_IND Hisr: stack_id(%d), cell_group(%d), domain_type(%d)
Line 1064: ###[NR_IPC][HISR] L1C_PHY_RMS_UPDATE_IND Hisr:: (PriPath)rf_path(%d) rms(0x%04x), domain_type(%d)
Line 1071: ###[NR_IPC][HISR] L1C_PHY_RMS_UPDATE_IND Hisr:: (DivPath)rf_path(%d) rms(%04x)
Line 1086: ###[NR_IPC][HISR] L1C_PHY_SIB1_ACQ_CNF Hisr: cmd_arr_idx(%d), cmd(0x%x)
Line 1087: ###[NR_IPC][HISR] L1C_PHY_SIB1_ACQ_CNF Hisr: stack_id(%d), cell_group(%d), domain_type(%d)
Line 1101: ###[NR_IPC][HISR] L1C_PHY_SIB1_ACQ_CNF Hisr: stack_id(%d), cell_group(%d), domain_type(%d)
Line 1115: ###[NR_IPC][HISR] L1C_PHY_SIB1_PCELL_CONFIG_CNF Hisr: stack_id(%d), cell_group(%d), domain_type(%d)
Line 1122: [CMD LOG] : L1C_PHY_DSP2RFD_COMMON_IND Hisr

Line 1162: ###[NR_IPC][HISR] L1C_PHY_GAP_CTRL_CNF Hisr: stack_id(%d), cell_group(%d), domain_type(%d), state(%d)
Line 1184: ###[NR_IPC][HISR] L1C_PHY_LCPU_RELEASE_CNF Hisr: stack_id(%d), cell_group(%d), recv_demod_cc(%d), domain_type(%d)
Line 1202: ###[NR_IPC][HISR] L1C_PHY_LCPU_MEASURE_COMPLETE_CNF Hisr: stack_id(%d), cell_group(%d), domain_type(%d)
Line 1223: ###[NR_IPC][HISR] L1C_PHY_CELLGROUP_SCELL_CONFIG_CNF Hisr: demod_cc(%d), stack_id(%d), cell_group(%d), domain_type(%d), cmd(%d)
Line 1242: ###[NR_IPC][HISR] L1C_PHY_CELLGROUP_PCELL_CONFIG_CNF Hisr: stack_id(%d), cell_group(%d), domain_type(%d)
Line 1257: ###[NR_IPC][HISR] L1C_PHY_RXMODE_CHANGE_CNF Hisr: stack_id(%d), cell_group(%d), domain_type(%d)
Line 1274: ###[NR_IPC][HISR] L1C_PHY_SCELL_ACTDEACT_CNF:: stack_id(%d), cell_group(%d), domain_type(%d), demod_cc(%d), cnf_type(%d)
Line 1288: [CMD LOG] : L1C_PHY_OHC_MAX_TX_ANT_CNF Hisr

Line 1292: ###[NR_IPC][HISR] L1C_PHY_OHC_MAX_TX_ANT_CNF Hisr: TARGET_CC_BITMAP.cc_idx(%d), STACKID(0x%x), domain_type(%d)
Line 1322: ###[NR_IPC][HISR] L1C_PHY_RESTORE_PCELL_PHY_CONFIG_CNF Hisr: stack_id(%d), cell_group(%d), domain_type(%d)
Line 1337: ###[NR_IPC][HISR] L1C_PHY_STORE_PHY_CONFIG_CNF Hisr: stack_id(%d), cell_group(%d), domain_type(%d)
Line 1354: ###[NR_IPC] L1C_PHY_TX_SUSPEND_CNF[%d] Hisr: stack_id(%d), demod_cc(%d), domain_type(%d), mode(%d) targetTxPath(0x%X) tx_status(%d)
Line 1397: ###[NR_IPC] L1C_PHY_TX_SUSPEND_CNF Hisr: Invalid mode(%d)
Line 1416: ###[NR_IPC][HISR] L1C_PHY_NR_EVENT_REPORT_CNF Hisr: stack_id(%d), cell_group(%d), domain_type(%d), recv_type(%d)
Line 1438: ###[NR_IPC][HISR] L1C_PHY_NR_EVENT_REPORT_CNF Hisr: Invalid recv_type(%d)
Line 1454: ###[NR_IPC][HISR] gIPC_NR_L1C_PHY_MEAS_MODE_CTRL_CNF Hisr: stack_id(%d), cell_group(%d), domain_type(%d), cmd(%d)
Line 1477: ###[NR_IPC][HISR] gIPC_NR_L1C_PHY_RRM_MEAS_PERIOD_LEVEL_IND Hisr: TARGET_CC_BITMAP.cc_idx(%d), STACKID(0x%x), cell_group(%d) domain_type(%d) rrmMeasPeriodLevel(%d)
Line 1486: [CMD LOG] : ###[NR_IPC][HISR] L2_PHY_TIMER_EXPIRE_IND Hisr

Line 1491: [CMD LOG] : [ERROR] Msg Alloc fail : L2LMACRACH_PHY_TIMER_EXPIRE_IND 

Line 1498: [CMD LOG] : L2LMACRACH_PHY_TIMER_EXPIRE_IND %d 

Line 1503: [CMD LOG] : [ERROR] Msg Send fail : L2LMACRACH_PHY_TIMER_EXPIRE_IND 

Line 1536: [CMD LOG] : L2_PHY_UL_MSGA_PUSCH_TBS_IND Hisr

Line 1541: [CMD LOG] : [ERROR] Msg Alloc fail : L2LMACRACH_PHY_UL_MSGA_PUSCH_TBS_IND 

Line 1548: [CMD LOG] : [DEBUG2] L2LMACRACH_PHY_RACH_CONTROL_IND %d 

Line 1555: [CMD LOG] : [ERROR] Msg Send fail : L2LMACRACH_PHY_UL_MSGA_PUSCH_TBS_IND 

Line 1562: [CMD LOG] : ###[NR_IPC][HISR] L2_PHY_RACH_CONTROL_IND Hisr

Line 1567: [CMD LOG] : [ERROR] Msg Alloc fail : L2LMACRACH_PHY_RACH_CONTROL_IND 

Line 1574: [CMD LOG] : [DEBUG2] L2LMACRACH_PHY_RACH_CONTROL_IND %d 

Line 1579: [CMD LOG] : [ERROR] Msg Send fail : L2LMACRACH_PHY_RACH_CONTROL_IND 

Line 1586: [CMD LOG] : L2_PHY_MIF_CONTROL_IND Hisr

Line 1591: [CMD LOG] : [ERROR] Msg Alloc fail : L2LMACRX_PHY_MIF_CONTROL_IND 

Line 1599: [CMD LOG] : L2_PHY_MIF_CONTROL_IND %d 

Line 1603: [CMD LOG] : [ERROR] Msg Send fail : L2LMACRX_PHY_MIF_CONTROL_IND 

Line 1627: [CMD LOG] : L2_PHY_UL_GRANT_IND Hisr [%d]

Line 1633: [CMD LOG] : [ERROR] Msg Alloc fail : L2LMACTX_PHY_UL_GRANT_IND 

Line 1639: [CMD LOG] : [DEBUG2] L2LMACTX_PHY_UL_GRANT_IND %d %d

Line 1646: [CMD LOG] : [ERROR] Msg Send fail : L2LMACTX_PHY_UL_GRANT_IND 

Line 1652: [CMD LOG] : ###[NR_IPC][HISR] L2_PHY_DSR_FAIL_IND Hisr

Line 1657: [CMD LOG] : [ERROR] Msg Alloc fail : L2LMACRACH_PHY_DSR_FAIL_IND 

Line 1664: [CMD LOG] : [DEBUG2] L2LMACRACH_PHY_DSR_FAIL_IND %d 

Line 1669: [CMD LOG] : [ERROR] Msg Send fail : L2LMACRACH_PHY_DSR_FAIL_IND 

Line 1675: [CMD LOG] : L2_PHY_DCI_INFO_IND Hisr

Line 1680: [CMD LOG] : [ERROR] Msg Alloc fail : RRC_L2_DCI_INFO_IND 

Line 1688: [CMD LOG] : [DEBUG2] RRC_L2_DCI_INFO_IND %d 

Line 1693: [CMD LOG] : [ERROR] Msg Send fail : RRC_L2_DCI_INFO_IND 

Line 1699: [CMD LOG] : ###[NR_IPC][HISR] L2_PHY_SCELL_DEACT_IND Hisr

Line 1704: [CMD LOG] : [ERROR] Msg Alloc fail : RRM_L2_SCELL_STATUS_IND 

Line 1712: [CMD LOG] : [DEBUG2] RRM_L2_SCELL_STATUS_IND %d 

Line 1717: [CMD LOG] : [ERROR] Msg Send fail : RRM_L2_SCELL_STATUS_IND 

Line 1723: [CMD LOG] : ###[NR_IPC][HISR] L2_PHY_BEAM_FAIL_IND Hisr

Line 1728: [CMD LOG] : [ERROR] Msg Alloc fail : L2LMACRACH_PHY_BEAM_FAIL_IND 

Line 1735: [CMD LOG] : [DEBUG2] L2LMACRACH_PHY_BEAM_FAIL_IND %d 

Line 1740: [CMD LOG] : [ERROR] Msg Send fail : L2LMACRACH_PHY_BEAM_FAIL_IND 

Line 1746: [CMD LOG] : ###[NR_IPC][HISR] L2_PHY_SCELL_INFO_IND ServcellDemodCcMap Hisr

Line 1751: [CMD LOG] : [ERROR] Msg Alloc fail : L2LMACRX_L2_SCELL_INFO_IND 

Line 1758: [CMD LOG] : [DEBUG2] L2LMACRX_L2_SCELL_INFO_IND %d 

Line 1763: [CMD LOG] : [ERROR] Msg Send fail : L2LMACRX_L2_SCELL_INFO_IND 

Line 1772: [CMD LOG] : L1C_PHY_TEST1_IND Hisr

Line 1778: [CMD LOG] : L1C_PHY_TEST2_IND Hisr

