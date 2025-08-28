Line 118: ##[NR_MEAS][SWEEP] StartModuleSweep : Cur_RxBeamIdx(0x%03x) BeamSweeping(%d) rxbeam_map(0x%x) module_map(%d) plane_map(%d) beamsweep_mode(%d)
Line 129: ##[NR_MEAS][SWEEP] StartModuleSweep : Start with Current_module(%d) module_map(%d)
Line 148: ##[NR_MEAS][SWEEP] StartModuleSweep : Start with ActivePlane(%d) plane_map(%d)
Line 179: ##[NR_MEAS][9BS] StartModuleSweep : RxBeamIdx(0x%x) requestedBeam(0x%x) RxbeaMap(0x%x)
Line 205: ##[NR_MEAS][SWEEP] StartModuleSweep : Setting Done! Module(%d) Plane(%d) TargetRxBeam(0x%x) CurrentRxBeamIdx(0x%03x) // module_map(%d) plane_map(%d) rxbeam_map(0x%x)
Line 247: ======================================================================
Line 252: ##[NR_MEAS] Set & Update Information MeasMode[%d] MeasCellNum:(%d) RxBeamSweepStatus(%d) Updated_rxbeamidx(0x%03x)
Line 267: ##[NR_MEAS] Index[%d] CellId[%d] SsbIndex[%d] RxBeamIdx[0x%03x] TimingOffset[%d]
Line 273: ======================================================================
Line 312: ##[NR_MEAS] Ongoing Measurement was already stopped!
Line 321: ##[NR_MEAS] ModuleSweepCnfCb: MEAS_ISR_DONE
Line 328: ##[NR_MEAS] NrMeasCnfCb : Meas Schedule was delayed. Path/Resource Release!
Line 370: ##[NR_MEAS][SWEEP] Measured_RxBeam(0x%x), Updated RxBeamMap(0x%x) rxBeamSweepStatus(%d)
Line 384: ##[NR_MEAS][SWEEP] Measured_Beam(%d), BeamSweep is ongoing Current RxBeam_Map(0x%x)
Line 406: ##[NR_MEAS][SWEEP] BeamSweep Done! Updated_RfModule_Map(%d) Updated_Plane_Map(%d)
Line 425: ##[NR_MEAS][SWEEP] Target_Module(%d) RfModule_Map(%d)  ->  StartModuleSweep()!
Line 442: ##[NR_MEAS][SWEEP] Start Plane-Sweep to Plane(%d) Plane_map(%d) RxBeam_Map(0x%x)
Line 451: ##[NR_MEAS][SWEEP] Module Sweep was Done! Best_Module(%d) Cur_Module(%d)
Line 455: ##[NR_MEAS][SWEEP] Need to Switch RxBeamIdx (0x%03x) -> (0x%03x)
Line 466: ##[NR_MEAS][SWEEP] ModuleSweep Done! But Current is the Best Module! // Cur_RxBeamIdx(0x%03x)
Line 476: ##[NR_MEAS][SWEEP] PlaneSweep was Done! Best_RxBeam(%d) Best_Plane(%d) Current_Active_Plane(%d)
Line 481: ##[NR_MEAS][SWEEP] Select Active_Plane(%d)
Line 485: ##[NR_MEAS][SWEEP] PlaneSweep Done! Acitve Plane(%d) is the Best
Line 521: ##[NR_MEAS][SWEEP] Sweep_Result is Updated! Best_RxbeamIdx(0x%03x) RSRP(%d, %d) SINR(%d, %d) // Current_RxBeamIdx(0x%03x)
Line 529: ##[NR_MEAS][SWEEP] STORED(0x%03x) : AVG_SINR(%d) AVG_RSRP(%d), MEASURED(0x%03x) : AVG_SINR(%d) AVG_RSRP(%d)
Line 540: ##[NR_MEAS][SWEEP] Sweep_Result is Updated! Best_RxbeamIdx(0x%03x) RSRP(%d, %d) SINR(%d, %d) // Current_RxBeamIdx(0x%03x)
Line 545: ##[NR_MEAS][SWEEP] Sweep_Result is not Updated! Best_RxbeamIdx(0x%03x) RSRP(%d, %d) SINR(%d, %d) // Current_RxBeamIdx(0x%03x)
Line 608: ##[NR_MEAS] best RxBeam determined with module sweeping(0x%x)
Line 658: ##[NR_MEAS][MS] NrMeasCnfCb : [%6d] (%4d) M%04d %6d %6d %6d %6d
Line 704: ##[NR_MEAS][MS] NrMeasCnfCb : [%6d] (%4d) M%04d %6d %6d %6d %6d
Line 724: ##[NR_MEAS] NrMeasCnfCb : Ssb_index#0 TimingOffset[%d]
Line 737: ##[NR_MEAS] NrMeasCnfCb : [%6d] MEAS GAIN UPDATE: (%d, %d) -> (%d, %d)
Line 768: ##[NR_MEAS][SWEEP][ERROR] Invalid Meas List with SweepCnfCb!!!
Line 788: ##[NR_MEAS][MS] RFmodule_map was already set to (%d)
Line 815: ##[NR_MEAS] UpdateModuleMonitorInfo : module_type(%d) active_Plane(%d) module_map(%d) rxbeam_map(0x%x) vh_pathmap(%d)
Line 817: ##[NR_MEAS][MS] Set Module Monitor rfmodule_map(%d), Module_Num(%d) RunningModule(%d)
Line 863: ##[NR_MEAS] UpdateModuleMonitorPeriod : Current(%d)_RSRP(%d) Monitoring(%d)_RSRP(%d) STABLE_THR(%d) RSRP_DIFF(%d) MONITORING_PERIOD(%d)
Line 887: ##[NR_MEAS] CheckModuleMonitorState(#1) : Ca_Info(%d) module_monitor_on(%d) beamlock_cause(%d)
Line 917: ##[NR_MEAS] CheckModuleMonitorState(#2) : Ca_Info(%d) module_monitor_on(%d) beamlock_cause(%d)
Line 951: ##[NR_MEAS][MS] active[%d]_valid(%d) pended_monitor_schedule(%d) rbs_status(%d) - return_valid(%d)
Line 974: ##[NR_MEAS] Need to Monitor RF Module! Last(%d) Cur(%d) Period_timer_done(%d)
Line 998: ##[NR_MEAS] ClearModuleSwitchInfo : ModuleMonitor Procedure was abnormal! Result was Cleared!
Line 1027: ##[NR_MEAS] RxBeamIdx is Updated! Last_rxbeamidx(0x%03x) rf_rxbeamidx(0x%03x) Updated_ModuleMap(%d)
Line 1068: ##[NR_MEAS] FilterRsrp : RxBeamIdx(0x%03x) Prev_Rsrp(%d) Measured_Rsrp(%d) Filtered_Rsrp(%d)
Line 1123: ##[NR_MEAS][MS] (ConfigModuleSwitchGap) : Target_module(%d) RxBeam(%d)
Line 1183: ##[NR_MEAS] MS_Event_condition : CurrModule(%d)RSRP(%d) BestModule(%d)RSRP(%d) Enable(%d) Sw_Thr(%d)
Line 1189: ##[NR_MEAS] MS_Event_condition : CurrModule(%d)RSRP(%d) BestModule(%d)RSRP(%d) Enable(%d) Sw_Thr(%d)
Line 1193: ##[NR_MEAS] Monitor_Best_Result : Module#0(%d) Module#1(%d) Module#2(%d) Switch_Count(%d/%d/%d)
Line 1208: ##[NR_MEAS][MS] Current Module is Best Rf module!
Line 1214: ##[NR_MEAS][MS] Stay Active Module!
Line 1219: ##[NR_MEAS][MS] RF Module Switch! (%d) -> (%d)
Line 1245: ##[NR_MEAS][Plane_SW] Plane Switch Case! monitor_type(%d) beamlock_state(%d) Updated Active Plane(%d)
Line 1264: ##[NR_MEAS][Plane_SW] Plane Switch Case! monitor_type(%d) beamlock_state(%d)
Line 1267: ##[NR_MEAS][MS] TX_BEAM_LOCK CASE! RX/TX_MODULE (%d/%d)
Line 1274: ##[NR_MEAS][MS] Fail to Send MODULE_SWITCH_NR_CMD
Line 1291: ##[NR_MEAS][MS] No Action for MS!
Line 1330: ##[NR_MEAS][MS] (%d)module monitor was done! rfmodule_map(%d)
Line 1332: ##[NR_MEAS][MS] Updated rfmodule_map(%d)
Line 1336: ##[NR_MEAS][Plane_SW] Plane(%d) Sweep Done!!  rfmodule_map(%d)
Line 1338: ##[NR_MEAS][Plane_SW] Updated rfmodule_map(%d)
Line 1400: ##[NR_MEAS][Plane_SW] Sorting[1] : plane(%d) beam(%d) RSRP(%d) plane_best_rsrp(%d)
Line 1408: ##[NR_MEAS][Plane_SW] Sorting[2] :(Update!) plane(%d) beam(%d) RSRP(%d) plane_best_rsrp(%d)
Line 1497: ##[NR_MEAS][SWEEP] StartInitSweep : Module(%d), TargetRxBeam(0x%x), CurrentRxBeamIdx(0x%03x), module_map(%d), rxbeam_map(%d)
Line 1539: ======================================================================
Line 1544: ##[NR_MEAS] Set & Update Information MeasMode[%d] MeasCellNum:(%d) RxBeamSweepStatus(%d) Updated_rxbeamidx(0x%03x)
Line 1559: ##[NR_MEAS] Index[%d] CellId[%d] SsbIndex[%d] RxBeamIdx[0x%03x] TimingOffset[%d]
Line 1565: ======================================================================
Line 1606: ##[NR_MEAS] InitSweepCallback, Ongoing Measurement was already stopped!
Line 1615: ##[NR_MEAS] InitSweepCallback: MEAS_ISR_DONE
Line 1622: ##[NR_MEAS] InitSweepCallback : Meas Schedule was failed
Line 1665: ##[NR_MEAS][SWEEP] InitSweepCnfCb : Measured_RxBeam(0x%04x), Updated RxBeamMap(%d) rxBeamSweepStatus(%d)
Line 1679: ##[NR_MEAS][SWEEP] InitSweepCnfCb : Measured_Beam(%d), BeamSweep is ongoing Current RxBeam_Map(%d)
Line 1690: ##[NR_MEAS][SWEEP] InitSweepCnfCb : Beam sweep was done, bestBeam_H(%d)
Line 1743: ##[NR_MEAS][SWEEP][ERROR] Invalid Meas List with SweepCnfCb!!!
Line 1746: ##[NR_MEAS][SWEEP] SendInitSweepCnf
