Line 172: ##[NR_MEAS] %s
Line 175: ##[NR_MEAS] Type(%d) DRIratMeasState(%d) OngoingSrchInfo.Valid(%d) OngoingSrchInfo.MeasMode(%d) OngoingMeasInfo.Valid(%d) OngoingMeasInfo.MeasMode(%d)
Line 343: ##[NR_MEAS] %s
Line 383: ##[NR_MEAS] GapConfigReq: enable(%d), frGap(%d), gapOffset(%d), mgl(%d), mgrp(%d), mgta(%d), rtgDiff(%d)
Line 411: ##[NR_MEAS] %s, IsEnable(%d), SubFrame(%d), Offset(%d), IsDrxWakeup(%d), RtgDiff(%d)
Line 456: ##[NR_MEAS][DRDS_OPT] MEAS_CONFIG_UPDATE_IND!  mode(%d)
Line 478: ##[NR_MEAS] %s, Receive: MEAS_STOP_REQ _ StopId(%d) DRIratMeasState(%d) SrchMode(%d) MeasMode(%d) EventState(%d) resume_type(%d)
Line 480: ##[NR_MEAS] MEAS_STOP_REQ : msg_src_id(%d) MeasStopType(%d)
Line 575: ##[NR_MEAS] Defer this MEAS_STOP_REQ until the Path config completes
Line 597: ##[NR_MEAS][MEAS_STOP] OngoingSrchStop(%d) MeasStopType(%d)
Line 601: ##[NR_MEAS] MEAS_STOP : Search is ongoing , Defer meas_stop_cnf StopSrcIdBm(%x)
Line 641: ##[NR_MEAS] NR should wait for resume from RSM in HOLD, EventState(%d) N2LGapStopPending(%d) WaitingForResume(%d)
Line 660: ##[NR_MEAS] SCHEDULE_START_IND : RequestedNum(%d) CurSfn(%d) CurSubFrame(%d)
Line 693: ##[NR_MEAS] %s, Receive: MEAS_STOP_CNF from MMCIFCTRLR, MsgSrcIdForStop(%d) Result(%d) ForcedEventEnd(%d) PendingGapCmd(%d)
Line 849: ##[NR_MEAS][MS] MODULE_NUM (%d) MS_MONITOR_SCH_THR(%d) MS_MONITOR_SSB_THR(%d) MODULE_SW_THR(%d|%d) MODULE_MON_PERIOD(%d)
Line 852: ##[NR_MEAS][MS] FILTER_COEF(%d) WEAK_HYS(%d) WEAK_THR(%d) EVENT_TTT(%d) MODE(%d) STABLE_THR(%d)
Line 858: ##[NR_MEAS][MS] Monitoring Timer_Start! Monitor_On(%d) duration(%d)
Line 865: ##[NR_MEAS][MS] RF-Module Switch Monitor(%d) is disabled. cdrx_ssb_thr(%d)
Line 872: ##[NR_MEAS][RX_INVALID] RSSI THR (%d) / RSRP THR (%d) / SINR THR (%d)
Line 896: ##[NR_MEAS] %s, Receive: MEAS_RESULT_IND from RRMIFCTRLR, NumServingCell(%d)
Line 907: ##[NR_MEAS] SSB Measurement result is not present, SsbCnt(%d)
Line 928: ##[NR_MEAS] L1C_L1C_MEASCTRLR_GAP_START_IND_Handler (%d)
Line 932: ##[NR_MEAS] Abnormal Search Operation !!
Line 942: ##[NR_MEAS][INTER_SWEEP] RxBeamMap(0x%x) targetBeam(0x%x)
Line 968: ##[NR_MEAS] %s, RRM_MeasRatType(%d) RRM_MEAS_MODE_NR(%d) RRM_MEAS_MODE_LTE(%d) RRM_MEAS_MODE_UTRA(%d) UeState(%d) CgiConfigNr(%d) PreScheduled(%d)
Line 977: ##[NR_MEAS](W) Unexpected MEAS_REQ : UeState(%d) ModemState(%d) PowerOnFlag(%d) MeasRatType(%d) MeasMode(%d)
Line 994: ##[NR_MEAS] Init measure aborts ongoing MeasMode(%d)
Line 1000: ##[NR_MEAS] Init measure aborts ongoing MeasMode(%d)
Line 1053: ##[NR_MEAS] Intra RxBeamSweep for PreSched: RxBeamNum(%d), BeamMap(0x%x), ModuleMonitorOn(%d)
Line 1070: ##[NR_MEAS] OngoingMeasValid(%d) OngoingMeasStatus(0x%x)
Line 1073: ##[NR_MEAS][Now] InitSchedule(%d) ServingSchedule(%d) NeighborSchedule(%d) IratSchedule(%d) N2XSchedule(%d) EarlyMeasSchedule*100|CliSchedule(%d)
Line 1112: ##[NR_MEAS] PATH_CONFIG_CNF:::: CfgPurpose(%d) is CFG_FOR_IRAT_MEAS
Line 1123: ##[NR_MEAS][SWEEP][ERROR Module Switch Fail Case!!
Line 1134: ##[NR_MEAS][SWEEP] Module is Switched!
Line 1140: ##[NR_MEAS][SWEEP] Module Switch to (0x%03x)!!
Line 1155: ##[NR_MEAS][ERROR] Module Switch Fail Case!!
Line 1160: ##[NR_MEAS] Module Switch is Done! Current_RxBeamIdx(0x%03x)
Line 1195: ##[NR_MEAS] PATH_CONFIG_CNF was delayed!
Line 1202: ##[NR_MEAS][WARN] None Cfg/Rel case. Clear Internal Information.
Line 1210: ##[NR_MEAS][WARN] No PATH_CONFIG INFO in MEAS! CurStatus(%d), [MsgInfo] num_of_cfg_cell(%d) cell_info_idx(%d)
Line 1225: ##[NR_MEAS] Abnormal Path Configuration. Release Path num_of_meas_cfg_cell [%d]
Line 1276: ##[NR_MEAS](F) Path-Configuration is failed! rx_path_result(%d) num_of_meas_cfg_cell(%d)
Line 1315: ##[NR_MEAS] [PATH_CNF_INFO] cell_info_idx(%d), req_scell_idx(0x%x), req_type(%d), num_of_meas_cfg_cell(%d)
Line 1321: ##[NR_MEAS] [PATH_CNF_INFO] rx_path_result(%d), alloc_rx_path(%d), alloc_demod_cc(%d), alloc_bw(%d), alloc_freq(%d), rx_mode(0x%x), center_freq_offset(%d)
Line 1326: ##[NR_MEAS] [PATH_CNF_INFO] alloc_freq is changed to %d due to non-zero center_freq_offset
Line 1334: ##[NR_MEAS][TMS] Enable 4RX Blind Detection for TMS
Line 1342: ##[NR_MEAS] PATH_CONFIG_CNF:::: num_of_meas_cfg_cell(%d), num_of_cfg_cell(%d), num_of_rel_cell(%d), gap_is_needed(%d)
Line 1344: ##[NR_MEAS] path_type from SCC(%d)  gap_is_needed(%d)
Line 1379: ##[NR_MEAS] PATH_CONFIG_CNF:::: configured_rf_path(%d), alloc_demod_cc(%d), is_activated(%d) monitor_type(%d)
Line 1402: ##[NR_MEAS] %s, Receive: SCCCTRLR_RESOURCE_CNF from SCCNR
Line 1406: ##[NR_MEAS] RESOURCE_CNF Ignored!
Line 1412: ##[NR_MEAS] Abnormal MeasResource Configuration.
Line 1417: ##[NR_MEAS] DRIratMeasState(%d), mode(%d), MeasMode(%d), DRIratResource(%d)
Line 1461: ##[NR_MEAS] Wrong ResourceInfo(%d)
Line 1513: ##[NR_MEAS] MEAS_STOP : Processing for deferred Meas_Stop_Cnf, Defer meas_stop_cnf StopSrcIdBm(%x)
Line 1520: ##[NR_MEAS] SEARCH_CNF without Scheduling
Line 1532: ##[NR_MEAS](W) MEAS_SEARCH_CNF : Srch Schedule was delayed! (%d)
Line 1536: ##[NR_MEAS](W) SrchCmdRes(%d) REJECT_RETRY case ->> Reschedule
Line 1593: ##[NR_MEAS] Abnormal case..Please check MeasMode(%d)!!
Line 1614: ##[NR_MEAS](SEARCH) Searched_RxBeam(0x%x, 0x%x), Updated RxBeamMap(0x%x) rxBeamSweepStatus(%d) RbsType(%d)
Line 1628: ##[NR_MEAS](SEARCH) Diable GapMeasStopPending flag
Line 1646: ##[NR_MEAS] %s, NumCell(%d), MeasMode(%d)
Line 1662: ##[NR_MEAS] SrchGain was adjusted (%d, %d) to (%d, %d)
Line 1708: ##[NR_MEAS] Abnormal case..Please check MeasMode(%d)!!
Line 1744: ##[AS] %s, Receive: DYNAMIC_AS_EN_REQ from RLSYNCCTRLR, enable(%d), ul_scell_idx(%d)
Line 1768: ##[NR_MEAS][MSG][BeamLock] TEST_EN(%d) BeamLock_State(%d) Module_Rx(%d)-Tx(%d)
Line 1779: ##[NR_MEAS][MS] Fail to Send MODULE_SWITCH_NR_CMD
Line 1782: ##[NR_MEAS][MS][Release-BeamLock] Sync TxModule(%d) with RxModule(%d)
Line 1828: ##[NR_MEAS][BeamLock] BeamLockInfo(%d) Module_Monitor_On(%d) BeamLock_State(%d) BeamLock_cause(%d)
Line 1838: ##[NR_MEAS] Wrong MeasList(%d) OngoingSrchInfoValid(%d) OngoingMeasInfoValid(%d)
Line 1856: ##[NR_MEAS] %s, Receive: MEAS_CNF from MMCIFCTRLR, MeasRatType(%d) LTEMeasMode(%d) UTRAMeasMode(%d) N2XNumMeasInput(%d) N2XMeasStartIdx(%d) NumLteMeasInput(%d) StopbyDrxStatusInd(%d)
Line 1953: ##[NR_MEAS] %s, Clear N2XMeasList to prevent unintended meas req during NR sleep available period
Line 1989: ##[NR_MEAS] %s during L1C_SUSPEND
Line 1993: ##[NR_MEAS] %s:: EventId(%u), ExceptionCause(%u), MeasMode(%d), DRIratMeasState(%d), MeasInfo_MeasMode(%d), SrchInfo_MeasMode(%d)
Line 1996: ##[NR_MEAS] RSM_MEASURE Exception IND Ignored!
Line 2015: ##[NR_MEAS] Defer this EXCEPTION_IND until the Path config completes
Line 2024: ##[NR_MEAS] RSM_RUNNING_HOLD during N2L IRAT srch/meas
Line 2067: ##[NR_MEAS] Stop Measurement Skipped as RSM_MEASURE is already INIT
Line 2140: ##[NR_MEAS] %s during L1C_SUSPEND
Line 2146: ##[NR_MEAS] %s:: ResourceId(%d), ResourceResponse(%d), MeasMode(%d)
Line 2150: ##[NR_MEAS] %s:: ResourceId(%d), ResourceResponse(%d)
Line 2170: ##[NR_MEAS] DRMeasState(%d) DRIratMeasState(%d)
Line 2194: ##[NR_MEAS] DRMeasState(%d) DRIratMeasState(%d)
Line 2200: ##[NR_MEAS] GO Inter Measure with GAP !!
Line 2206: ##[NR_MEAS] <ERROR> Measure Resource was delayed!  MeasList(%d)
Line 2310: ##[NR_MEAS] LTE_GAP: lte_time(%d), length(%d), rtg_diff(%d), nr_sfn(%d), nr_time(%d)
Line 2317: ##[NR_MEAS] LTE_GAP: lte_time(%d), length(%d), palTime(%d)
Line 2321: ##[NR_MEAS] => %s : type(%d) endc_rtg_diff(%d) modem_state(%d) serv_scs(%d)
Line 2329: ##[NR_MEAS] L1C_L1TUNNEL_NR_4G_INFO_REQ_Handler: resume_type(%d) modem_state(%d) type(%d) target_ant(0x%02X)
Line 2342: ##[NR_MEAS] Invalid NR_4G_INFO_REQ Type(%d)
Line 2378: ##[NR_MEAS][OHC] L1C_HAL_OVERHEATING_IND_Handler Mode(%d), ThermalLevel(%d) Temperature(%d) current_module(%d)
Line 2389: ##[NR_MEAS][OHC] Mode Error : Invalid OHC Mode
Line 2394: ##[NR_MEAS][OHC] OverheatingRfmStatus(%d) RFModuleTemperature(0)(%d), RFModuleTemperature(1)(%d)
Line 2396: ##[NR_MEAS][OHC] serving_rsrp_module(0)(%d)  serving_rsrp_module(1)(%d)
Line 2400: ##[NR_MEAS][OHC] Mode(%d), ThermalLevel(%d) currentRfModule(%d)
Line 2508: ##[NR_MEAS] SendNrXphyMeas NR_ARFCN(%d), mode(%d)
