Line 305: ###[NR_RXFILTER] ConfigAGC : please check rxfilter path allocation and DB values, mxr(%d), agc_mode(%d), bw(%d)
Line 332: ###[NR_RXFILTER] ConfigAGC[WARNING] : please check rxfilter path allocation and DB values, mxr(%d), agc_mode(%d), bw(%d), path_type(%d), pair_path(%d)
Line 337: ###[NR_RXFILTER] ConfigAGC[WARNING] : please check domain_type(%d) of rxf DB, mxr(%d)
Line 395: ###[NR_RXFILTER] ConfigDCR[DEBUG] : Qs debug mode on => qs_enable(0x%x), check_cc(%d)
Line 548: ###[NR_RXFILTER][WARNING] ConfigRxFilter : Abnormal mxr path idx(%d), invalid !!
Line 656: ###[NR_RXFILTER] Warning!!! should be check function input, cc(%d), bw(%d), dly(0x%x)
Line 821: ###[NR_RXFILTER] SetRxDmixerFreq setting error, mxr[%d]
Line 850: ###[NR_RXFILTER] GetLoShiftDb full, mxr[%d]
Line 872: ###[NR_RXFILTER] UpdateLoShiftDb domain_type[%d], pcell_mxr_sel[%d], mxr[%d], xo_offset_hz(%d)
Line 876: ###[NR_RXFILTER] check UpdateLoShiftDb full, mxr[%d], xo_offset_hz(%d)
Line 904: ###[NR_RXFILTER] GetPcellXo[WARNING] : please check domain_type(%d), fail to get Pcell xo, return 0 !!!!
Line 915: ###[NR_RXFILTER] GetShmPcellXo[WARNING] : please check domain_type(%d), fail to get Pcell xo, return 0 !!!!
Line 926: ###[NR_RXFILTER] GetShmPcellXo, domain_type %d, updateFlag == 0 forced_return GetPcellXo %d
Line 936: ###[NR_RXFILTER] GetShmPcellXo, domain_type %d, reset_flag %d, updateFlag %d, mxr_path %d, Pcell_Xo_Offset %d
Line 978: ###[NR_RXFILTER] GetBestDmixerFreq[WARNING] : please check domain_type(%d) or mxrpath(%d)
Line 990: ###[NR_RXFILTER] GetBestXoOffset[WARNING] : Wrong index of mxrpath(%d)
Line 1011: ###[NR_RXFILTER] SetBestDmixerFreq[WARNING] : please check domain_type(%d), xo_val(%d)
Line 1025: ###[NR_RXFILTER] SetBestXoOffset[WARNING] : please check domain_type(%d), mxr_path(%d), xo_val(%d)
Line 1044: ###[NR_RXFILTER] SetPcellXoOffset[WARNING] : please check domain_type(%d), afcXoOffsetPpt(%d)
Line 1048: ###[NR_RXFILTER] update Pcell_Xo_Offset %d, domain_type %d
Line 1079: ###[NR_RXFILTER] save pcell xo, mxr_path %d, Pcell_Xo_Offset %d, domain_type %d
Line 1136: ###[NR_RXFILTER] SetBestDmixerFreq_PRI(ind=%d) : |||sfn|rxMode|domain|demCc||mxr(0x%08X), ssb_sinr(%d, %d), sch_sinr(%d, %d), afcXoOffsetPpt(%d)
Line 1172: ###[NR_RXFILTER] ch_pal_DcxoTransmitFrequencyOffsetData : |||sfn|rxMode|domain|demCc||mxr(0x%08X), xo_freq_offset(%d), cell_idx(%d), domain_type(%d), ssb_sinr0(%d), sch_sinr0(%d), is_conn(%d)
Line 1209: ###[NR_RXFILTER] SetBestDmixerFreq_DIV(ind=%d) : |||sfn|rxMode|domain|demCc||mxr(0x%08X), ssb_sinr(%d, %d), sch_sinr(%d, %d), afcXoOffsetPpt(%d)
Line 1236: ###[NR_RXFILTER] InitRxFilter: qs_registry_val(0x%x)
Line 1369: ###[NR_RXFILTER] SetRxfilterOutputCopy: src_mxr(%d), dst_pri_mxr(%d)
Line 1432: ###[NR_RXFILTER] SetSloDigitalGain: mxr_path[%d] pcell_total_gain(%d,%d) pcell_analog_gain(%d,%d) dig_gain(%d,%d)
Line 1488: ###[NR_RXFILTER] SetModuleAgcAntInput: mxr_path[%d] pcell_total_gain(%d,%d) pcell_analog_gain(%d,%d) module_agc_gain(%d,%d)
Line 1594: ###[NR_RXFILTER] GetMxrSelList: rf(input:%d, db:%d), num_of_mxr(%d), mxr_sel(%d, %d), rx_mode(0x%x)
Line 1655: ###[NR_RXFILTER] ChangeRxModeConfig, mode(%d), bw(%d), RxUpdateMode_off(%d)
Line 1659: ###[NR_RXFILTER] ChangeRxModeConfig: The requested RX mode(%d) is already set for path(%d, %d) , RxUpdateMode_off(%d)
Line 1702: ###[NR_RXFILTER] ChangeRxMode(pri) : mode(0x%x -> 0x%x)
Line 1778: ###[NR_RXFILTER] ChangeRxMode(div) : mode(0x%x -> 0x%x)
Line 1800: ###[NR_RXFILTER] SetHalRxfDmixerInfo: pri_path_idx(%d), div_path_idx(%d), dmxr_freq_afc(%d, %d)
Line 1804: ###[NR_RXFILTER] path_idx is invalid value!!!
Line 1860: ###[NR_RXFILTER] SetHalRxfPathInfo[WARNING] : HAL RXF DB update fail, abnormal path index(%d)
Line 1868: ###[NR_RXFILTER] SetHalRxfPcellPathInfo : path_idx(%d), path_type(%d), domain_type(%d)
Line 2022: ###[NR_RXFILTER] GetHalRxfPathInfo: find_param(%s), input(%d), domain_type(%d) is not found in RXF HAL Info
Line 2037: ###[NR_RXFILTER] GetHalSloMasterPathIdx[WARNING] : Please check path_idx(%d) or domain_type(%d)
Line 2044: ###[NR_RXFILTER] GetHalSloMasterPathIdx[WARNING] : Mismatching domain_type (db : %d <-> param : %d)
Line 2055: ###[NR_RXFILTER] GetHalSloMasterPathIdx : path_idx(%d), slo_path(%d, %d, %d, %d, %d, %d)
Line 2064: ###[NR_RXFILTER] GetHalSloPathList[WARNING] : Please check path_idx(%d) or domain_type(%d)
Line 2071: ###[NR_RXFILTER] GetHalSloPathList[WARNING] : Mismatching domain_type (db : %d <-> param : %d)
Line 2083: ###[NR_RXFILTER] GetHalSloPathList : path_idx(%d), slo_path(%d, %d, %d, %d, %d, %d)
Line 2090: ###[NR_RXFILTER] UpdateHalSloMasterPathIdx[WARNING] : Please check master_path_idx(%d) or domain_type(%d)
Line 2097: ###[NR_RXFILTER] UpdateHalSloMasterPathIdx[WARNING] : Mismatching domain_type (db : %d <-> param : %d)
Line 2108: ###[NR_RXFILTER] UpdateHalSloMasterPathIdx : master_path_idx(%d), slo_path(%d, %d, %d, %d, %d, %d)
Line 2115: ###[NR_RXFILTER] UpdateHalSloMasterPathIdx[BEFORE] : SloCCType => path_index(%d) type(%s)
Line 2118: ###[NR_RXFILTER] UpdateHalSloMasterPathIdx[AFTER] : SloCCType => path_index(%d) type(%s)
Line 2127: ###[NR_RXFILTER] SetHalSloCcType[WARNING] : Please check path_index(%d)
Line 2132: ###[NR_RXFILTER] SetHalSloCcType: path_index(%d) is_master(%d)
Line 2139: ###[NR_RXFILTER] GetHalSloCcType[WARNING] : Please check path_index(%d)
Line 2178: ###[NR_RXFILTER] %s: domain_type(%d)
Line 2235: ###[NR_RXFILTER] ProcScellActDeactCnf: demod_cc(%d), mxr(%d), cnf_type(%d))
Line 2288: ###[NR_RXFILTER] PrintRxfPathInfo[%d] : path_type(%s), rf_dl_freq(band:%d, freq:%d, arfcn:%d), rf_bw/0/rx_bw(%d), agc_mode/0/rx_mode(0x%03x)
Line 2297: ###[NR_RXFILTER] PrintRxfPathInfo[%d] : pair_path(%d), scell_idx(%d), act_deact(%d), dmxr_slo/dmxr_afc(%d, %d), domain_type(%d)
Line 2311: ###[NR_RXFILTER] PrintRxfPathInfo[%d] : path8(0x%08x, 0x%08x, 0x%04x)(/rf/mxr/rtg/pgc/,/tdbuf/out/demod/rfdrtg/,/ssb/rfm/) agc_gain(%d / %d)
Line 2319: ###[NR_RXFILTER] PrintRxfPathInfo[%d] : SLO_pair_path => %d(0/1/2), %d(3/4/5), %d(6/7/8), %d(9/10/11), %d(12/13/14), %d(15/16)
Line 2329: ###[NR_RXFILTER] IsCaAvailable true Band1(%d) Band2(%d)
Line 2333: ###[NR_RXFILTER] IsCaAvailable false Band1(%d) Band2(%d)
Line 2366: ##[NR_RXFILTER] matched_path %d %d %d %d %d %d %d
Line 2379: ##[NR_RXFILTER] path_idx(%d) path_info.ca_pair_path[%d] <= matched_path[%d] %d
Line 2393: ##[NR_RXFILTER] CtrlIntraBandCA cnf_type(%d) domain_type(%d)
Line 2434: ##[NR_RXFILTER] path_idx(%d) rx_mode(%d) rf_path(%d) demod_path(%d) rx_dl_freq(%d) dmxr_freq_slo(%d)
Line 2443: ##[NR_RXFILTER] idx(%d) idx_rx_mode(%d) pair_idx(%d) pair_rx_mode(%d) scell_idx(%d)
Line 2446: ##[NR_RXFILTER] Added to 4rx path list : rxf_path_idx(%d) band(%d)
Line 2452: ##[NR_RXFILTER] Path added : temp_path[%d](%d), temp_band[%d](%d)
Line 2458: ##[NR_RXFILTER] temp_path : %d, temp_path_4rx : %d
Line 2479: ##[NR_RXFILTER] CtrlIntraBandCA : NrIntraBandCA enable(%d)
Line 2489: ##[NR_RXFILTER] GetNrIntraBandCaEnable(%d)
Line 2508: ##[NR_RXFILTER] GetNrdcStatus : Invalid domain_type(%d)
Line 2526: ##[NR_RXFILTER] GetNrdcStatus: dc_domain(%d) [%s]
Line 2545: ###[NR_RXFILTER] SetOnlyHalRxfPathInfo, (%s)
Line 2580: ###[NR_RXFILTER] Delete div_path_idx(%d)
Line 2606: ###[NR_RXFILTER] %s: freq_range(%d) mxr(%d), rf(%d), rx_mode(0x%x)
Line 2612: ###[NR_RXFILTER] %s: freq_range(%d) mxr(%d), rf(%d), rx_mode(0x%x)
Line 2663: ###[NR_RXFILTER] SetTRF#1 : dmxr(%d), freqOffset(%d), dmxr_freq_afc(%d)
Line 2701: ###[NR_RXFILTER] SetTRF#6 : rx_dl_freq(%d), dl_bw(%d), dcr(%d)
Line 2707: ###[NR_RXFILTER] SetTRF : TRF skip because mmW(rfpath:%d) or Bw(%d <= 50MHz(7)) are not accepted
Line 2720: ###[NR_RXFILTER] path %d is already used, rx_mode %d 
Line 2729: ###[NR_RXFILTER] Disable_Legacy_PcellPath : rf %d, dcr %d, iqc %d, mxr %d, demod %d, rxf_bw %d mode %d
Line 2752: ###[NR_RXFILTER] Backup mxr PcellPath : rf %d, dcr %d, iqc %d, mxr %d, demod %d, rxf_bw %d mode %d
Line 2761: ###[NR_RXFILTER] InitBackupHalRxfPathInfo[WARNING] : Please check domain_type(%d)
Line 2765: ###[NR_RXFILTER] InitBackupHalRxfPathInfo - domain_type(%d)
Line 2786: ###[NR_RXFILTER] BackupRtgDiff : INVALID path_idx(%d)
Line 2792: ###[NR_RXFILTER] BakupRtg path_idx(%d) Rtgdiff(%d), m_Backup_Rtg(%d)
Line 2799: ###[NR_RXFILTER] GetBackupRtgDiff : INVALID path_idx(%d)
Line 2804: ###[NR_RXFILTER] GetBackupRtgDiff path_idx(%d), m_Backup_Rtg(%d)
Line 2815: ###[NR_RXFILTER] PrintRtgDiff path_idx(%d), m_Backup_Rtg(%d)
Line 2831: ###[NR_RXFILTER] RestoreBackupHalRxfPathInfo: domain_type(%d) ScellIdx(%d) PathIdx(%d) freq(%d) - [backupDB] ScellIdx(%d) PathIdx(%d) freq(%d)
Line 2863: ###[NR_RXFILTER] Restore : iqc_coeff[%d] I_COEF(%d) Q_COEF(%d)
Line 2869: ###[NR_RXFILTER] Restore : dcr_accum[%d] VALUE_I(%d) VALUE_Q(%d)
Line 2881: ###[NR_RXFILTER] RestoreBackupHalRxfPathInfo: ScellIdx(%d) PathIdx(%d) band(%d) freq(%d) pair_path(%d)
Line 2884: ###[NR_RXFILTER] RestoreBackupHalRxfPathInfo: dmxr_freq_slo(%d) dmxr_freq_afc(%d)
Line 2889: ###[NR_RXFILTER][Domain#%d] RestoreBackupHalRxfPathInfo[WANRING]: Abnormal path index(%d), Maximum path index(%d), fail to save Rxf DB info
Line 2906: ###[NR_RXFILTER] SetBackupHalRxfPathInfo: domain_type(%d) ScellIdx(%d) PathIdx(%d) freq(%d) - [HAL] ScellIdx(%d) PathIdx(%d) freq(%d)
Line 2938: ###[NR_RXFILTER] Backup : iqc_coeff[%d] I_COEF(%d) Q_COEF(%d)
Line 2945: ###[NR_RXFILTER] Backup : dcr_accum[%d] VALUE_I(%d) VALUE_Q(%d)
Line 2957: ###[NR_RXFILTER] SetBackupHalRxfPathInfo: NumRxfPathBackup(%d) ScellIdx(%d) PathIdx(%d) band(%d) freq(%d) pair_path(%d)
Line 2960: ###[NR_RXFILTER] SetBackupHalRxfPathInfo: dmxr_freq_slo(%d) dmxr_freq_afc(%d)
Line 2965: ###[NR_RXFILTER][Domain#%d] SetBackupHalRxfPathInfo[WANRING]: Abnormal path index(%d), Maximum path index(%d), fail SetBackupHalRxfPathInfo
Line 2978: ###[NR_RXFILTER][Domain#%d] RestoreConflictHalRxfPathInfo: [BackUp] ScellIdx(%d) PathIdx(%d) freq(%d), domainType(%d)
Line 3005: ###[NR_RXFILTER] Restore : iqc_coeff[%d] I_COEF(%d) Q_COEF(%d)
Line 3011: ###[NR_RXFILTER] Restore : dcr_accum[%d] VALUE_I(%d) VALUE_Q(%d)
Line 3027: ###[NR_RXFILTER][Domain#%d] RestoreConflictHalRxfPathInfo: ScellIdx(%d) PathIdx(%d) band(%d) freq(%d) pair_path(%d)
Line 3031: ###[NR_RXFILTER][Domain#%d] RestoreConflictHalRxfPathInfo: dmxr_freq_slo(%d) dmxr_freq_afc(%d)
Line 3036: ###[NR_RXFILTER][Domain#%d] RestoreConflictHalRxfPathInfo[WANRING]: Abnormal path index(%d), Maximum path index(%d), fail to save Rxf DB info
Line 3044: ###[NR_RXFILTER] BackupConflictHalRxfPathInfo[WARNING] : Please check domain_type(%d), fail to backup Rxf DB info
Line 3057: ###[NR_RXFILTER][Domain#%d] BackupConflictHalRxfPathInfo: [HAL] ScellIdx(%d) PathIdx(%d) freq(%d), domainType(%d)
Line 3084: ###[NR_RXFILTER] Backup : iqc_coeff[%d] I_COEF(%d) Q_COEF(%d)
Line 3091: ###[NR_RXFILTER] Backup : dcr_accum[%d] VALUE_I(%d) VALUE_Q(%d)
Line 3108: ###[NR_RXFILTER][Domain#%d] BackupConflictHalRxfPathInfo: NumRxfPathBackup(%d) ScellIdx(%d) PathIdx(%d) band(%d) freq(%d) pair_path(%d)
Line 3112: ###[NR_RXFILTER][Domain#%d] BackupConflictHalRxfPathInfo: dmxr_freq_slo(%d) dmxr_freq_afc(%d)
Line 3121: ###[NR_RXFILTER] InitConflictHalRxfPathInfo[WARNING] : Please check domain_type(%d)
Line 3125: ###[NR_RXFILTER] InitConflictHalRxfPathInfo: domain_type(%d)
Line 3152: ###[NR_RXFILTER] InitBplmnBackupHalPathInfo[WARNING] : Please check domain_type(%d)
Line 3156: ###[NR_RXFILTER] InitBplmnBackupHalPathInfo: domain_type(%d)
Line 3186: ###[NR_RXFILTER] RestoreBplmnBackupHalPathInfo: domain_type(%d) ScellIdx(%d) PathIdx(%d) freq(%d) - [backupDB] ScellIdx(%d) PathIdx(%d) freq(%d)
Line 3218: ###[NR_RXFILTER] Restore : iqc_coeff[%d] I_COEF(%d) Q_COEF(%d)
Line 3224: ###[NR_RXFILTER] Restore : dcr_accum[%d] VALUE_I(%d) VALUE_Q(%d)
Line 3236: ###[NR_RXFILTER] RestoreBplmnBackupHalPathInfo: ScellIdx(%d) PathIdx(%d) band(%d) freq(%d) pair_path(%d)
Line 3239: ###[NR_RXFILTER] RestoreBplmnBackupHalPathInfo: dmxr_freq_slo(%d) dmxr_freq_afc(%d)
Line 3244: ###[NR_RXFILTER][Domain#%d] RestoreBplmnBackupHalPathInfo[WANRING]: Abnormal path index(%d), Maximum path index(%d), fail to save Rxf DB info
Line 3260: ###[NR_RXFILTER] SetBplmnBackupHalPathInfo: domain_type(%d) ScellIdx(%d) PathIdx(%d) freq(%d) - [HAL] ScellIdx(%d) PathIdx(%d) freq(%d)
Line 3291: ###[NR_RXFILTER] Backup : iqc_coeff[%d] I_COEF(%d) Q_COEF(%d)
Line 3297: ###[NR_RXFILTER] Backup : dcr_accum[%d] VALUE_I(%d) VALUE_Q(%d)
Line 3309: ###[NR_RXFILTER] SetBplmnBackupHalPathInfo: NumRxfPathBackup(%d) ScellIdx(%d) PathIdx(%d) band(%d) freq(%d) pair_path(%d)
Line 3312: ###[NR_RXFILTER] SetBplmnBackupHalPathInfo: dmxr_freq_slo(%d) dmxr_freq_afc(%d)
Line 3317: ###[NR_RXFILTER][Domain#%d] SetBplmnBackupHalPathInfo[WANRING]: Abnormal path index(%d), Maximum path index(%d), fail SetBplmnBackupHalPathInfo
Line 3325: ###[NR_RXFILTER] GetIsBplmnOngoing[WARNING] : Please check domain_type(%d), fail to get m_IsBplmnOngoing
Line 3329: ###[NR_RXFILTER] m_IsBplmnOngoing(domain%d) %d
Line 3337: ###[NR_RXFILTER] SetIsBplmnOngoing[WARNING] : Please check domain_type(%d), fail to set newVal(%d)
Line 3341: ###[NR_RXFILTER] m_IsBplmnOngoing(domain%d) %d -> %d
Line 3373: ###[NR_RXFILTER] SetDcxoDmixerWithDiffForDRX : setVal(%d, %d, %d), mxr_path(%d), domain_type(%d)
Line 3381: ###[NR_RXFILTER] SetDcxoDmixerWithDiffForHO : setVal(%d, %d, %d), mxr_path(%d), domain_type(%d)
Line 3394: ###[NR_RXFILTER] ProcessSetDcxoTransmitData[WARNING] : Please check domain_type(%d) or mxr_path(%d), fail to set DcxoTransmitData
Line 3408: ###[NR_RXFILTER] ProcessSetDcxoTransmitData, domain_type (%d), is_DRX (%d), mxr_path (%d), m_NrDcxoSleepEnable (%d)
Line 3426: ###[NR_RXFILTER] ProcessSetDcxoTransmitData, lo_shfit_fo(%d), m_NrDcxoCurrFo(%d)
Line 3432: ###[NR_RXFILTER] ProcessSetDcxoTransmitData, domain_type (%d), is_DRX (%d), mxr_path (%d) : setVal[1] (%d), m_BestDmixerFreq[%d][%d] (%d) => (%d)
Line 3439: ###[NR_RXFILTER] SetDcxoDmixerWithTemp : temperature(%d)
Line 3453: ###[NR_RXFILTER] SetDcxoCheckPoint: rat_id(%d), temperature(%d), dmxr_ref(%d), domain_type(%d), mxr_path(%d)
Line 3465: ###[NR_RXFILTER] GetDifferenceWithSnapshot for HO: m_PccRxfPathIdx(%d), mxr_path(%d), rat_id(%d)
Line 3470: ###[NR_RXFILTER] GetDifferenceWithSnapshot for DRX: m_PccRxfPathIdx(%d), mxr_path(%d), rat_id(%d)
Line 3482: ###[NR_RXFILTER] SetDcxoUpdateTime(%d)
Line 3491: ###[NR_RXFILTER] ConvertDmixerToFrequencyOffset : dmxr_ref(%d), xo_freq_offset(%d), dl_freq(%d)
Line 3503: ###[NR_RXFILTER] MonitorFrequencyOffset : dmxr_ref(%d), xo_freq_offset(%d), dl_freq(%d)
Line 3515: ###[NR_RXFILTER] ConvertFrequencyOffsetToDmixer : dmxr_ref(%d), xo_freq_offset(%d), dl_freq(%d)
Line 3536: ###[NR_RXFILTER] CompensateRFLoShift, mxr(%d), freq(%d), input_xo(%d)
Line 3549: ###[NR_RXFILTER] xo_freq_offset_hz(%d)hz + rf_lo_shift_offset(%d)hz => total_xo_offset(%d)hz => total_xo_offset(%d)ppm
Line 3559: ###[NR_RXFILTER] SetPllOffset: XO zero!!!
Line 3563: ###[NR_RXFILTER] SetPllOffset: Xo(%d), rx_dl_freq(%d), dmxr_ref(%d), domain_type(%d), mxr_path(%d)
Line 3570: ###[NR_RXFILTER] UpdateInitParamInfo[WANRING] : Invalid RX path(%d) !!!
Line 3593: ###[NR_RXFILTER] UpdateInitParamInfo[START] : rx_path(%d), update_mode(%s:%d), prev_rx_mode(%d) next_rx_mode(%d), cur_db_gain_info(0x%08x), cur_cmd_gain_info(0x%08x)
Line 3600: ###[NR_RXFILTER] UpdateInitParamInfo[START] : db_afc_info => pri_path(%d)(afc:%d, slo:%d), div_path(%d)(afc:%d, slo:%d)
Line 3607: ###[NR_RXFILTER] UpdateInitParamInfo[START] : cmd_afc_info => pri_path(%d)(afc:%d, slo:%d), div_path(%d)(afc:%d, slo:%d)
Line 3673: ###[NR_RXFILTER] UpdateInitParamInfo[END] : rx_path(%d), update_mode(%s:%d), prev_rx_mode(%d) next_rx_mode(%d), cur_db_gain_info(0x%08x)
Line 3680: ###[NR_RXFILTER] UpdateInitParamInfo[END] : db_afc_info => pri_path(%d)(afc:%d, slo:%d), div_path(%d)(afc:%d, slo:%d)
Line 3687: ###[NR_RXFILTER] UpdateRxModeInfo[WARNING] : Invalid RX path(%d) or domain_type(%d)!!!
Line 3692: ###[NR_RXFILTER] UpdateRxModeInfo(pri) : rx_path(%d), rx_mode DB change (%d -> %d), rxmode_db_update(%d), domain_type(%d)
Line 3699: ###[NR_RXFILTER] UpdateRxModeInfo(div) : rx_path(%d), rx_mode DB change (%d -> %d)
Line 3755: ###[NR_RXFILTER] GetHalRxfPathInfoSpcell : spcell path is not found, MsgGrpId(%d), domain_type(%d), L1Domain(%d)
Line 3756: Init Dummy HalRxfPathInfo
Line 3762: ###[NR_RXFILTER] GetHalRxfPathInfoSpcell : spcell_path_idx(%d), MsgGrpId(%d), domain_type(%d), L1Domain(%d)
Line 3971: ###[NR_RXFILTER] GetDemodCcFromScellIdx: domain_type(%d) MsgGrpId(%d) ScellIdx(%d) DemodCcIdx(%d)
Line 3975: ###[NR_RXFILTER] GetDemodCcFromScellIdx: No path found!!! domain_type(%d) MsgGrpId(%d) ScellIdx(%d)
Line 3991: ###[NR_RXFILTER] GetCalibrationRsrpOffset: isScellAct(%d), rf_path(%d)
Line 4004: ###[NR_RXFILTER] UpdateCalRsrpOffset: rx_mode(%d), beam_idx(%d), domain_type(%d), cal_offset(%d,%d,%d,%d)
Line 4011: ###[NR_RXFILTER] UnholdIqImbalanceMonitor::Domain(%d) NumActiveCell(%d) MixSelIdx(%d)
Line 4014: ###[NR_RXFILTER] UnholdIqImbalanceMonitor::all deact scell
Line 4027: ###[NR_RXFILTER] UnholdIqImbalanceMonitor__::IqcSel(%d)
Line 4031: ###[NR_RXFILTER] UnholdIqImbalanceMonitor__::Check_IQC_Increase
Line 4042: ###[NR_RXFILTER] GetFr2ScellRxfDb::Domain(%d), MixSelIdx(%d)
Line 4051: ###[NR_RXFILTER] GetFr2ScellRxfDb::IqcSel(%d)
Line 4054: ###[NR_RXFILTER] GetFr2ScellRxfDb:: find
Line 4060: ###[NR_RXFILTER] GetFr2ScellRxfDb::Not find
Line 4083: ###[NR_RXFILTER] GetNumActiveCell::NumActiveCell(%d)
Line 4091: ###[NR_RXFILTER] CopyPcellPathInfo[WARNING] : Please check input argument isDiv(%d)
Line 4102: ###[NR_RXFILTER] CopyPcellPathInfo[WARNING] : Please check index values, OldPcellPathIdx(%d), NewPcellPathIdx(%d), DomainType(%d)
Line 4107: ###[NR_RXFILTER][%s] CopyPcellPathInfo : OldPcellPathIdx(%d), NewPcellPathIdx(%d)
Line 4108: ###[NR_RXFILTER][%s] CopyPcellPathInfo : before
Line 4163: ###[NR_RXFILTER] CopyPcellPathInfo[%s] : IsConflictPath(%d)
Line 4166: ###[NR_RXFILTER] CopyPcellPathInfo : recover case from other domain, Get backup HAL DB for OldPcellPathIdx(%d)
Line 4171: ###[NR_RXFILTER] CopyPcellPathInfo : clear case, init HAL DB for OldPcellPathIdx(%d)
Line 4176: ###[NR_RXFILTER] CopyPcellPathInfo : After
Line 4213: ###[NR_RXFILTER] GetCaConfigInfo(%d): pcell(rx_mode:%d, rfpath:%d, rxpath:%d), path_check_index(%d), qs_enable(0x%x), domain_type(%d)
Line 4252: ###[NR_RXFILTER] GetQsCcInfo[SLO case]: num_of_slo#%d, slo_path_check_index(%d) slo_path(%d), rx_mode(0x%x)
Line 4279: ###[NR_RXFILTER] GetQsCcInfo#%d: path_type(%s), path_info(0x%06x)(mxr8/rtg8/demod_cc8), demod_cc_bitmap(0x%x), qs_enable(0x%x)
Line 4313: ###[NR_RXFILTER] GetRssiScan: path(%d), bw(%d), band(%d), arfcn(%d), dl_freq(%d)
Line 4347: ###[NR_RXFILTER] GetRssiScan: #%d) bw(%d), sys_bw_compen(%d), subbnd_len_compen(%d), rf_cal_offset(%d, %d)
Line 4371: ###[NR_RXFILTER] GetRssiScan: #%d) rssi(%d[dBm], %d[dBm])
Line 4380: ###[NR_RXFILTER] GetRssiScan: result => max_rssi(%d), sample_index(%d), ant_index(%d)
Line 4387: ###[NR_RXFILTER] GetCalculateRssiResult[WARNING]: Please check bandwith(%d), path_index(%d) !!!
Line 4413: ###[NR_RXFILTER] GetRssiScan: ant#%d=> rssi[dBm](%d), td_pwr(%d), agc_gain(%d), cal_offset(%d)
Line 4421: ###[NR_RXFILTER] GetIsPathOnOff[WARNING]: Please check mxr_sel(%d) !!!
Line 4437: ###[NR_RXFILTER] GetIsPathOnOff: mxr(%d), DomainType(%d), rf_path(%d), rf_rx_mode(0x%x) --> return(%d)
Line 4450: ###[NR_RXFILTER] ConvertDmixerToFoHz : dmxr_ref(%d), freq_offset_hz(%d)
Line 4462: ###[NR_RXFILTER] ConvertFoHzToDmixer : dmxr_ref(%d), freq_offset_hz(%d)
Line 4471: ###[NR_RXFILTER] CH_GetBbPath : input rf(%d), output mxr(%d)
Line 4478: ###[NR_RXFILTER] CH_GetDemodPath : input rf(%d), output demod_cc(%d)
