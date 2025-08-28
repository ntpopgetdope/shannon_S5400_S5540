Line 167: ###[NR_RFPROC] RfRficInitOnOffProc : rf_path(%d), band(%d), freq(%d), bw(%d), domain_type(%d)
Line 199: ###[NR_RFPROC] Booting setup for RF
Line 223: ###[NR_RFPROC] RfRficOnOffProc: On, rf(%d), band(%d), freq(%d), bw(%d)
Line 255: ###[NR_RFPROC] RfRficOnOffProc: Off, rf(%d), mxr(%d)
Line 371: ###[NR_RFPROC] GetRfPathInfo: find_param(%s), input(%d), domain_type(%d) is not found in RF HAL Info
Line 401: ###[NR_RFPROC] PrintRfPathInfo[%d] bitmask(path3/prx3/drx3)(%9d), dl_freq(%d), ul_freq(%d), bw(ul_bw*100+dl_bw)(%d), beam_idx(rx4/target4)(0x%08x), domain_type(%d)
Line 425: ###[NR_RFPROC] CalculateCenterArfcn Band(%d), NrArfcn(%d), gRF_DlUlArfcn(%d, %d)
Line 431: ###[NR_RFPROC] CalculateCenterArfcn Band(%d), NrArfcn(%d), gRF_MMWAVE_DlUlArfcn(%d, %d)
Line 473: ###[NR_RFPROC] RfProcNr::TuneRfCarrierFreq: rf(%d), band(%d), freq(%d), bw(%d), rx_mode(%d), beam_idx(0x%03x), chg_type(0x%x)
Line 475: ###[NR_RFPROC] RfProcNr::TuneRfCarrierFreq: ul_freq_info(%d, %d, %d), ul_bw(%d), dl_ca_act(%d) rf_mode_bitmask(0x%x)
Line 505: ###[NR_RFPROC][DEBUG] TuneRfCarrierFreq: m_IsPcellRfCmd(%d)
Line 550: ###[NR_RFPROC] cur_tx_mode(%d), rf_path(%d)
Line 562: ###[NR_RFPROC] RF_CHG_BW: freq_info(%d, %d, %d), ul_bw(%d), new_ul_bw(%d)
Line 604: ###[NR_TX][RF] SetTxPathMap: core_idx/domain_type/num_ul_layer(2/2/2)(%06d), lmac_cmd/enc_idx(2/2)(%04d), mod_idx(TX1/TX2)(2/2)(%04d), slca_idx(TX1/TX2)(2/2)(%04d), txPath_idx(TX1/TX2)(2/2)(%04d)
Line 623: ###[NR_TX][RF] GetTxRfPathInfo: Invalid domain_type(%d)
Line 629: ###[NR_TX][RF] GetTxPathMap: core_idx/domain_type/num_ul_layer(2/2/2)(%06d), lmac_cmd/enc_idx(2/2)(%04d), mod_idx(TX1/TX2)(2/2)(%04d), slca_idx(TX1/TX2)(2/2)(%04d), txPath_idx(TX1/TX2)(2/2)(%04d)
Line 652: ###[NR_RFPROC] InitRfForWakeup: resume_type(%d), domain_type(%d)
Line 654: ###[NR_RFPROC] InitRfForWakeup: NrBand(%d), freq(%d), targetBw(%d), rf_path(%d), rx_mode(%d), beam_idx(0x%x) wakeup_lv(%d)
Line 656: ###[NR_RFPROC] InitRfForWakeup: ul_freq_info(%d, %d, %d), ul_bw(%d)
Line 723: ###[NR_TX][RF] SendTxPathInfoIpc: recv_tx_mode(%x), num_ul_layer(%d)
Line 739: ###[NR_TX][RF] SendTxPathInfoIpc: recv_dac_path(0x%x), set_dac_path(0x%x), set_etdac_path(0x%x), max_ul_layer/req_num_tx(2/2)(%04d), lmac_cmd/enc_idx(2/2)(%04d), tx_ant_idx(%d), domain4/path_type4(0x%x)
Line 756: ###[TSIC][TMM] SendTxfMcwInfoIpc:: PHY_L1C_TX_SWAP_REQ tmm(%d), domain_type(%d)
Line 854: ###[NR_TX][RF] SendUlRankUpdate: lmac_cmd/enc_idx(2/2)(%04d), num_tx(RF:%d, txPathMap:%d), domain_type(%d)
Line 874: ###[RF_PROC][NR_TX] GetTxRfPathInfo: Invalid domain_type(%d)
Line 878: ###[RF_PROC][NR_TX] GetTxRfPathInfo(dac_idx(0x%x, M8S8), max_ul_layer(%d), cur_tx_mode(0x%x), domain_type(%d))
Line 897: ###[NR_TX][RF] GetTxDacPath: rf_rx_path(%d), ret(%d)
Line 940: ###[NR_TX][RF] SetSubTxPathOnOff: Invalid rx_path
Line 949: ###[NR_TX][RF] SetSubTxPathOnOff: Invalid rf_path
Line 966: ###[NR_TX][RF] SetSubTxPathOnOff: on(%d), Invalid info - freq/band/bw(%d/%d/%d), div_rf_path(0x%x))
Line 975: ###[NR_TX][RF] SetSubTxPathOnOff: on(%d), cur_tx_mode(0x%x)
Line 1017: ###[NR_TX][RF] SetSubTxPathOnOff: Suspend Cnf Timer Expiry(%d)
Line 1041: ###[NR_TX][RF] SetSubTxPathOnOff: on(%d), scell_idx(%d), tx_mode(0x%x -> 0x%x), ipc_required(%d)
Line 1060: ###[NR_TX] ProcUlScellActDeactDone: rx_path(%d), demod_cc(%d), cnf_type(%d), domain_type(%d)
Line 1070: ###[NR_TX] ProcUlScellActDeactDone: rx_path(%d), ul_band(%d), is_slo_master(%d), demod_cc(%d), cnf_type(%d), domain_type(%d)
Line 1118: ###[NR_TX][RF] ProcUlScellActDeactDone: scell_dac_path(%d), demod_cc_bm(0x%x), demod_cc(%d), cnf_type(%d), tx_ant_idx(%d), domain_type(%d)
Line 1158: ###[NR_TX][ULCA] CheckPcellTxPathChange: Pcell band(%d), Scell band(%d), domain(%d), chg_mode(%d), skip_tx_off(%d)
Line 1165: ###[NR_TX][ULCA] CheckPcellTxPathChange: No neet to run RF_Set_Tx (Off)
Line 1175: ###[NR_TX][ULCA] CheckPcellTxPathChange: Need to Set Pcell Tx path for change. prev_pcell_dac_path(%d)
Line 1188: ###[NR_TX][ULCA] CheckPcellTxPathChange:: Suspend Cnf Timer Expiry(%d)
Line 1220: ###[NR_TX][ULCA] CheckPcellTxPathChange: pcell_dac_path (%d -> %d), cur_tx_mode(0x%x)
Line 1234: ###[NR_TX][RF] SetScellTxPathOnOff : scell_rf_path(%d) --> req(%d), cur(%d), Skip!!
Line 1251: ###[NR_TX][RF] Invalid scell_tx_mode(0x%x)
Line 1266: ###[NR_TX][ULCA] No need to off CA Scell TX path
Line 1286: ###[NR_TX][RF] SetScellTxPathOnOff: ul scell idx error
Line 1303: ###[NR_TX][RF] SetScellTxPathOnOff: on(%d), ul_scell_idx(%d), demod_cc_idx(%d), scell_dac_path(%d), scell_tx_mode(0x%x), pcell_Rf_path(%d), chg_type(0x%x)
Line 1331: ###[NR_TX][RF] SetTxFilterPath:: Is_Mtm_Mode(%d), scell_idx(%d), path_type(%d), rf_path(%d), txPath_idx(%d/%d), domain_type(%d)
Line 1355: ###[NR_TX][RF] Invalid rx_path @ SetTxpathOnOff
Line 1363: ###[NR_TX][RF] Invalid rf_path @ SetTxpathOnOff
Line 1382: ###[NR_TX][RF] Invalid ul_bw(%d), ul_freq(%d), ul_band(%d)
Line 1431: ###[NR_TX][RF] SetTxPathOnOff : current clock mode(%d), max_ul_layer(%d)
Line 1436: ###[NR_TX][RF] SetTxPathOnOff : Change recv_tx_mode (0x%x) to (0x%x)
Line 1500: ###[NR_TX][RF] 2TX cannot be supported since 4RX is disabled
Line 1572: ###[NR_TX][RF] SetTxPathOnOff on(%d), path(0x%04x - rf4/mxr4), tx_rf_path_info(0x%x, cur_tx_mode4/tx_main_path4), ul_freq(%d), ul_bw(%d), recv_tx_mode4/slo4/rank4(0x%x), domain_type(%d)
Line 1574: ###[NR_TX][RF] SetTxPathOnOff on(%d), path(0x%04x - rf4/mxr4), tx_rf_path_info(0x%x, cur_tx_mode4/tx_main_path4), ul_freq(%d), ul_bw(%d), recv_tx_mode4/slo4/rank4(0x%x), domain_type(%d)
Line 1584: ###[NR_TX][WARNING] TxOnOffHisrHandler: TX_ONOFF_NR_CMD isn't running
Line 1592: ###[NR_TX] TxOnOffHisrHandler:: tx_mode(%d), scell_idx(%d), tx_bwp_idx(%d), on_off_type(%d), domain(%d)
Line 1593: ###[NR_TX] TxOnOffHisrHandler Start
Line 1601: ###[NR_TX] TxOnOffHisrHandler Done
Line 1609: ###[NR_TX][RF] ChangeUlFreq: scell_idx(%d), rf_rx_path(%d), ul_freq(%d, %d, %d), domain_type(%d) 
Line 1612: ###[NR_TX][RF] ChangeUlFreq() is not supported for scell_idx(%d)
Line 1626: ###[NR_TX][RF] ChangeUlBw: scell_idx(%d), rf_rx_path(%d), ul_freq(%d, %d, %d), ul_bw(%d), domain_type(%d) 
Line 1629: ###[NR_TX][RF] ChangeUlBw() is not supported for scell_idx(%d)
Line 1634: ###[NR_TX][RF] ChangeUlBw: tx_mode(0x%x), tx_path_type(%d)
Line 1672: ###[NR_RFPROC][WARNING] GetCalRsrpOffset : Abnormal rx_path(%d) !!! 
Line 1706: ###[NR_RFPROC][WARNING] GetCalRsrpOffset_NR : Abnormal rx_path(%d) !!! 
Line 1738: ###[NR_RFPROC] GetCalibrationRsrpOffset check(%d, %d, %d)
Line 1769: ###[NR_RFPROC] ConvertFreqToArfcn: freq(%d) -> arfcn(%d), band(%d)
Line 1799: ###[NR_RFPROC] ConvertArfcnToFreq: arfcn(%d) -> freq(%d), band(%d)
Line 1824: ###[NR_RFPROC][WARNING] SetRxUpdateModeOn : Abnormal rx_path(%d) !!! 
Line 1833: ###[NR_RFPROC] SetRxUpdateModeOn : rf_path(%d) is already set to RxUpdateMode_ON !!
Line 1837: ###[NR_RFPROC] SetRxUpdateModeOn: rx(%d), rf(%d), domain_type(%d)
Line 1875: ###[NR_RFPROC][WARNING] SetRxUpdateModeOff : Abnormal rx_path(%d) !!! 
Line 1884: ###[NR_RFPROC] SetRxUpdateModeOff : rf_path(%d) is already set to RxUpdateMode_OFF !!
Line 1888: ###[NR_RFPROC] SetRxUpdateModeOff: rx(%d), rf(%d), domain_type(%d)
Line 1924: ###[NR_RFPROC] SetRxBeamPattern: rf_path(%d), beam_idx(0x%03x), domain_type(%d)
Line 1942: ###[NR_RFPROC] GetRxBeamPattern: rf_path(%d), beam_idx(0x%03x), domain_type(%d)
Line 1966: ###[NR_RFPROC] GetRxBeamNum: rf_path(%d), module(%d), beam_num(%d), BeamType(%d), domain_type(%d)
Line 1984: ###[NR_RFPROC] ConfigRfModule: servBeamIdx(0x%x), targetBeamIdx(0x%x), mode(%d), vh_path(%d), domain_type(%d)
Line 1990: ###[NR_RFPROC][WARNING] ConfigRfModule error servBeamIdx == targetBeamIdx
Line 2002: ###[NR_RFPROC] PreInitRfModule: rf_path(%d) servBeamIdx(0x%x) targetBeamIdx(0x%x) serv_analog_gain[0] %d serv_analog_gain[1] %d
Line 2008: ###[NR_GAPPROC] EnableRfModule: rf_path(%d),  beam(0x%03x)
Line 2016: ###[NR_GAPPROC] EndRfModule: rf_path(%d) targetBeamIdx(0x%03x), servBeamIdx(0x%03x)
Line 2029: ###[NR_GAPPROC] ModuleSwitch: rf_path(%d) beam(0x%03x -> 0x%03x)
Line 2039: ###[NR_GAPPROC] SwitchRfModule: rf_path(%d) servBeamIdx(0x%x) targetBeamIdx(0x%x)
Line 2047: ###[NR_RFPROC][WARNING] ConfigRfModule error 
Line 2074: ###[CL-AIT] ProcClAitInit:: resume_type(%d) domain_type(%d)
Line 2103: ###[CL-AIT] UpdatePhysicalAnt:: domain_type(%d)
Line 2126: [CL-AIT] UpdateClAitChInfo: Skip CL-AIT: domain_type(%d) rf_path(%d)
Line 2162: ###[CL-AIT] UpdateClAitChInfo: infoIndEnable(%d), curTxAnt(%d)
Line 2183: ###[CL-AIT] GetIsClAitDumpAllowed:: Power domain off[%d]!!!
Line 2232: ###[CL-AIT] ProcClAitStartCnf:: clAitEnable(%d) clAitType(%d - 0:CLAIT_NORMAL 1:SAR_SENSING) retryL1Cnt(%d/%d) domain_type(%d)
Line 2359: ###[CL-AIT] ProcClAitDumpInd: resume_type(%d) ait_dump_allowed(%d) clAitEnable(%d)
Line 2402: [OL-AIT] UpdateOlAitIratInfo: band(%d) asc(%d,0:RxOnly 1:Default 3:Switched) trx(%d,0:Tx+RX 1:Rx) rx_mode(%d,1:2Rx 2:4x4 3:4Rx) hsi(0x%x) ul_freq(%d) ait_status(0x%x,0xff:RF_AIT_GAP)
Line 2546: [OL-AIT] Pcell: SNR[0/1/2/3](%d/%d/%d/%d) combined_snr(%d) Rx_mode(0x%x) band(%d) demod_cc(%d)
Line 2582: [OL-AIT] Scell: SNR[0/1/2/3](%d/%d/%d/%d) combined_snr(%d) Rx_mode(0x%x) band(%d) demod_cc(%d) idx[%d]
Line 2608: [OL-AIT] IsUlMimo(%d) IsUlCa(%d) PHR[0/1](%d/%d) UlCa_demod_cc(%d) CurAsEvent(%d)
Line 2613: [OL-AIT] Update RF path off: band(%d), rf_path(%d)
Line 2675: [OL-AIT] band(%d), asc({%d, %d}, 0:RX, 1:Default 3:Switched, UL-MIMO:ASC1~ASC4), idle_status(%d,0:CONN, 1:IDLE, 2:UL-MIMO, 3:ULCA), (0x%04x, rx_mode/hsi/resume_type/IsConn), ait_status(0x%x,0x0:SA 0xf:ENDC/IRAT/DR_SUB)
Line 2720: ###[CL-AIT] Enable(%d), CLAIT-NV: RfSub6En(%d), ulmimo(%d), ClAitEvtState(%d), TxThres(%d), Period_Evt1(%d), Period_Evt2(%d)
Line 2809: [OL-AIT] GetPcellFilteredRsrp:: maxrsrp(%d), demod_cc(%d), domain_type(%d)
Line 2842: [OL-AIT] GetRxWeightRequired: SNR(%d/%d/%d/%d) demod_cc(%d), rx_mode(0x%x), CurPsEvent/GetCurAsEvent(1/1)(%02d)
Line 2853: [OL-AIT] GetRxWeightRequired: RegAitSinrThreshold(%d), cur_ssb_sinr(%d), RegAitUlBlerThreshold(%d), cur_ul_bler(%d), rxWeightReq(%d), prev(%d), is_update(%d)
Line 3017: [OL-AIT] Skip OL-AIT: domain_type(%d) resume_type(%d) op_mode(%d) rf_path(%d) CL-AIT State(%d) band(%d)
Line 3044: [OL-AIT] SCell Rf_Band(%d/%d/%d/%d)
Line 3049: [OL-AIT] CC(%d) band(%d) resume_type(%d) num_detected_band(%d) domain_type(%d)
Line 3193: ###[NR_RFPROC] UpdateSensorState: feature(0x%x) SensorState(0x%x) HighestApEventIdx(%d) HighestApEventBitMap(0x%x)
Line 3231: ###[NR_RFPROC] GetSelectedUsecaseIdx: ApEventIdx(%d) ApEventBitMap(0x%x) EventBitMap(0x%x) Priority(%d)
Line 3276: ###[AS] TxSuspendSCellForAS mode(%d, 0:AS), targetTxPath(0x%x) demod_cc(%d), domain_type(%d)
Line 3301: ###[AS] Antenna is switched to successfully (Ant %d)
Line 3315: ###[AS] Antenna is not switched (Not supported)
Line 3356: ###[AS] UpdateAntennaSwitchStatus: rf_path(%d), domain_type(%d), CurAsEvent(%d)
Line 3388: ###[AS] UpdateUlScellAntennaSwitchStatus: scell_rf_path(%d), TxAnt(%d), RegTestMode(%d), domain_type(%d)
Line 3456: ###[NR_TX] unexpected tx_mode_chg_type %d
Line 3472: ###[NR_TX]#[AS] SendTxSuspendIpc mode(%d, 0:AS/1:TX_SHARING/2:SWAP/3:RELEASE/4:PATH_SWITCH), remain_tx_path(0x%x) demod_cc(%d) lmac_cmd/enc_idx(2/2)(%04d), domain_type(%d)
Line 3476: ###[NR_TX]#[AS] SendTxSuspendIpc mode(%d, 0:AS/1:TX_SHARING/2:SWAP/3:RELEASE/4:PATH_SWITCH(%d)), remain_tx_path(0x%x) demod_cc(%d), domain_type(%d)
Line 3542: ###[AS][PCell] IPC_NR_TX_RESUME_IND:: TxAnt(%d), RxAnt(%d), demod_cc(%d), CurAsEvent(%d)
Line 3597: ###[AS][SCell] SendScellAsTxResume:: RxAnt Switch is required
Line 3604: ###[AS][SCell] Antenna is switched to successfully (Ant %d)
Line 3609: ###[AS][SCell] Antenna is not switched (Not supported)
Line 3618: ###[AS][SCell] IPC_NR_TX_RESUME_IND:: ScellTxAnt(%d), RxAnt(%d), demod_cc(%d), CurAsEvent(%d)
Line 3667: ###[NR_RFPROC] SendL1ChannelDmInfoRxAnteena:: RxAntenna(%d))
Line 3710: ###[NR_RFPROC] SendL1RfDmInfo:: EnableTxAS(%d), SelectedTxAnt(%d), Enable4RxD(%d), SelectedAIT(%d), cur_tx_mode4/numTxAnt4(0x%4x), stackId(%d)
Line 3760: ###[NR_RFPROC] InitRF: rf_path %d, band %d, freq %d, bw %d, beam_idx 0x%03x
Line 3807: ###[NR_RFPROC] SetChannelFrequency: rf(%d), trx(%d), freq(%d), domain_type(%d)
Line 3846: ###[MMwave_RF] CalculateDLBand : BAND(%d),DL_ARFCN(%d)
Line 3855: ###[NR_RFPROC] CalculateDLBand : BAND(%d),DL_ARFCN(%d)
Line 3861: ###[NR_RFPROC] Invalid_RF_setting BAND(%d) and DL_ARFCN %d
Line 3904: RFAPI_CalculateDLBand: DL_EARFCN(%d),BAND(%d)
Line 3915: RFAPI_CalculateDLBand: NOT Supported DL_EARFCN %d, DL_BAND(%d)!!!
Line 3953: ###[NR_RFPROC] NR_GSCN Gscn(%d),Freq(%d)
Line 3964: ###[NR_RFPROC] Invalid_RF_setting GSCN
Line 3984: ###[NR_RFPROC] SetRfRxBandwidth: rf(%d), bw(%d), domain_type(%d)
Line 4004: ###[NR_RFPROC] SetRfRxMode: rf(%d), rx_mode(%d -> %d)
Line 4031: ###[AS] SetTxPathSwitchMode: not support
Line 4053: ###[AS] GetTxPathSwitchMode: not support
Line 4078: ###[AS] SetTxAntSwitchMode: not support
Line 4100: ###[AS] GetTxAntSwitchMode: not support
Line 4226: ###[AS] Invalid rf_rx_path(%d) @ GetTxAntTxPathNr
Line 4234: ###[AS] Invalid RfBand(%d) @ GetTxAntTxPathNr
Line 4239: ###[AS] GetTxAntTxPathNr: stack_id(%d) is_Main(%d)
Line 4261: ###[AS] Invalid rf_rx_path(%d) @ GetTxAntDacIdxNr
Line 4265: ###[AS] GetTxAntDacIdxNr: stack_id(%d) dac_idx(%d)
Line 4302: ###[NR_RFPROC] GetCcPathIdx rf %d cc %d
Line 4335: ###[NR_RFPROC] GetRtgPathIdx rf %d cc %d
Line 4361: ###[NR_RFPROC] GetFePathIdx: cc(%d), path(%d), idx(%d), domain_type(%d)
Line 4385: ###[NR_RFPROC] RfRficOff: rf_path %d, band %d, freq %d, bw %dMhz, beam_idx 0x%03x
Line 4411: ###[NR_RFPROC] CheckRFBandSwitch: Abnormal rf_path(%d) !!!
Line 4419: ###[NR_RFPROC] CheckRFBandSwitch: mmWave, rf_path %d, band %d, freq %d, bw %d, rx_mode %d, beam_idx 0x%03x
Line 4429: ###[NR_RFPROC] SetPathEnable resume_type %d dcr %d forced set rtg to %d
Line 4434: ###[NR_RFPROC] SetPathEnable resume_type %d dcr %d mxr %d
Line 4446: ###[NR_RFPROC] CheckRFBandSwitch: RF_Init_Band is done. clear RF(#%d) RxUpdateModeFlag (LATCH -> DIRECT)
Line 4450: ##[NR_SCC] RF_Init_Band triggerred, NrNrMode(%d)
Line 4456: ##[NR_SCC] UpdateInitBandFlag to pair domain, DomainType(%d), PairDomainType(%d)
Line 4462: ###[NR_RFPROC] CheckRFBandSwitch: Sub6G, rf_path(%d), band(%d), freq(%d), bw(%d), rx_mode(%d), doamin_type(%d)
Line 4471: ###[NR_RFPROC] SetQuickRfOnOff::rf_path %d, rx_mode %d, onoff(%d)
Line 4502: ###[NR_RFPROC] SetRfPowerWithoutBandInit: Abnormal rf_path(%d) !!!
Line 4509: ###[NR_RFPROC] SetRfPowerWithoutBandInit: rf_path %d, band %d, freq %d, bw %d, rx_mode %d, beam_idx 0x%03x
Line 4543: ###[NR_RFPROC] FindCurrentRFBandIndex: This model does not support RF band #%d
Line 4574: ###[NR_RFPROC] FindDualTxRFBandIndex: DualTxRFband(%d) band_index(%d)
Line 4579: ###[NR_RFPROC] FindDualTxRFBandIndex: This model does not support Dual Tx RF band #%d
Line 4606: ###[NR_RFPROC] FindCurrentMMRFBandIndex: This model does not support RF band #%d
Line 4627: ###[NR_RFPROC] Booting setup for RF
Line 4646: ###[NR_RFPROC] RestoreRfPgcRamTable: rf_path(%d), dl_band(%d)
Line 4667: ###[NR_RFPROC] GetUlCaActive:: band(%d), rf_path(%d), scell_idx(%d), demod_cc(%d)
Line 4725: ###[AS] TASPmax0[%d], TASPmax1[%d] TASPmax2[%d], TASPmax3[%d]
Line 4763: ###[RF_PROC][NR_TX] current rx_mode is not 4RX, no div rf_path info
Line 4779: ###[RF_PROC][NR_TX] ProcTxModeChange: tx_mode(0x%4x, cur4/req4), chg_type(%d), rf_path(0x%x, pri4/div4), main_dac_path(%d), ul_freq(%d), ul_bw(%d), domain_type(%d)
Line 4783: ###[RF_PROC][NR_TX] SetTxPathSwap: need to check param {ul_bw(%d), ul_freq(%d), ul_band(%d), div_rf_path(0x%x)}
Line 4793: ###[RF_PROC][NR_TX] ProcTxModeChange:: Invalid hal_scell_buf_idx (%d)
Line 4804: ###[RF_PROC][NR_TX] ProcTxModeChange:: Invalid scell(%d) ul_info_freq. need to check param {ul_bw(%d), ul_freq(%d), ul_band(%d)}
Line 4834: ###[RF_PROC][NR_TX] SuspendTxPath:: Suspend Cnf Timer Expiry(%d)
Line 4901: ###[RF_PROC][NR_TX] Invalid pair_path(%d), rx_mode(%d) for TX_SHARING
Line 4918: ###[RF_PROC][NR_TX] Invalid cur_tx_mode for TX_SHARING
Line 4931: ###[RF_PROC][NR_TX] Invalid rf_path(%d), cur_tx_mode(0x%x)
Line 4971: ###[RF_PROC][NR_TX] Invalid rf_path(%d), cur_tx_mode(0x%x)
Line 4994: ###[RF_PROC][NR_TX] Invalid pri_rf_path(%d), cur_tx_mode(0x%x)
Line 5007: ###[RF_PROC][NR_TX] ChangeTxMode: Invalid chg_type(%d)
Line 5033: ###[NR_RFPROC] SuspendTxPath: suspend_tx_path(0x%x), chg_type(%d), ul_freq(%d), ul_band(%d), ul_bw(%d), target_rf_path(%d)
Line 5045: ###[NR_TX][RF] SuspendTxPath:: Suspend Cnf Timer Expiry(%d)
Line 5078: ###[NR_RFPROC][AS] RestoreAsStatus: wrong pcell_rf_path(%d)
Line 5094: ###[NR_RFPROC][AS] RestoreAsStatus: restore_req(%d), pcell_rf_path(%d), domain_type(%d), CurAsEvent(%d), RegTestMode(%d)
Line 5119: ###[NR_TX][RF] ResumeTxPath: Not support 2TX, need to check ResumeTxPath procedure
Line 5139: ###[NR_RFPROC] ResumeTxPath: resume_rf_path(%d) scell_idx(0x%x, 0x%x) domain_type(%d)
Line 5150: ###[NR_RFPROC] ResumeSubTxPath: req_tx_mode(0x%x), ul_info(%d, %d, %d), cfg_tx_rf_path(0x%8x, resume[rf4/dac8]/dac[main8/sub8]), ipc_required(%d)
Line 5201: ###[NR_RFPROC] SetTxPathSwap: swapped_tx_mode(0x%x),tx_swap_val(0x%x), ul_freq(%d), ul_band(%d), ul_bw(%d), resume_rf_path4/swapped_dac_path4(0x%x), domain_type(%d)
Line 5241: ###[NR_RFPROC] ResumeTxPathWithOutSwap: swapped_tx_mode(0x%x), ul_freq(%d), ul_band(%d), ul_bw(%d), resume_rf_path4/swapped_dac_path4(0x%x), domain_type(%d)
Line 5301: ###[RF_PROC][NR_TX] ReleasePhyTx:: Suspend Cnf Timer Expiry(%d)
Line 5310: ###[RF_PROC][NR_TX] ReleasePhyTx: scell_idx(%d), cur_tx_mode(%d), tx_mode(%d), max_ul_layer(%d)
Line 5335: ###[NR_TX] ReleaseScellPhyTx: unexpected scell_idx (%d)
Line 5363: ###[NR_TX] ReleaseScellPhyTx: UL SCell info - {rx_path_idx(%d), path_info_bitmask(0x%x), rf_path_idx(%d), ul_band(%d), scell_idx(%d), demod_cc(%d)}, suspend_cnf_flag(%d)
Line 5367: ###[NR_TX] ReleaseScellPhyTx: chg_type(%d), mode(%d), num(%d), scell_idx(%d), domain_type(%d)
Line 5383: ###[NR_TX] SendScgTxSuspendIpc:: Suspend Cnf Timer Expiry(%d)
Line 5453: ###[NR_TX][RF] ResumePhyTx: lmac_cmd/enc_idx(2/2)(%04d), num_tx(RF:%d, txPathMap:%d), main_dac_path(%d), domain_type(%d)
Line 5508: ###[RF_PROC][NR_TX] ProcTxSuspendCnf: suspend_tx_path(%d), mode(%d)
Line 5528: ###[RF_PROC][NR_TX] ProcTxSuspendRelease: suspend_tx_path(%d), mode(%d), domain_type(%d)
Line 5542: ###[RF_PROC][NR_TX] ProcTxSuspendRelease: scell_idx(%d), cur_tx_mode(%d), tx_mode(%d), max_ul_layer(%d)
Line 5551: ###[RF_PROC][NR_TX] ProcTxSuspendRelease: TX_MODE_CHANGE_NR_CMD CNF. tx_mode(%d)
Line 5572: ###[NR_RFPROC] ProcTxSuspendCnf: tx_suspend_cnf_flag(%d)
Line 5602: ###[NR_TX][RF] Invalid ul_band(%d) to call ResetFR2TxfDac()
Line 5608: ###[NR_TX][RF] Invalid ul_bw(%d), rf_tx_path(%d)
Line 5618: ###[NR_RFPROC] ResetFR2TxfDac: rf_rx_path(%d), tx_dac_path(%d), slo_enable(%d), ul_band(%d), ul_bw(%d, 14-100M)
Line 5635: ###[NR_RFPROC] SetEndcIntraBandEnable: change QS control.. prev_stauts(%d), current_status(%d)
Line 5643: ###[NR_RFPROC] SetEndcIntraBandEnable: Do not change QS control.. prev_stauts(%d), current_status(%d)
Line 5663: ###[NR_RFPROC] GetEndcIntraBandEnable : endc_intra_band(%d)
Line 5834: ###[NR_RFPROC][WARNING] pri_path and div_path demod_cc is invalid, skip!!
Line 5886: ###[NR_RFPROC] GetAgcGainFromSHM : Invalid path_type(%d) for rxf_path_idx(%d)
Line 5972: ###[NR_RFPROC] num_matched_cnt(%d) matched_path(rxf) [ %d / %d / %d / %d ])
Line 6038: ###[NR_RFPROC] Abnormal rf_path(%d) !!!
Line 6057: ###[NR_RFPROC] Abnormal rf_path(%d) !!!
Line 6069: ###[NR_RFPROC] UpdateRfMmSharedMemInfo : CurrentSharedMem(%d), TargetSharedMem(%d)
Line 6092: ###[NR_RFPROC] GetTxDacPathFromTxMode: Invalid tx_mode(%d)
Line 6111: ###[CL-AIT] PHY_L1C_CLAIT_START_REQ:: Power domain off[%d]!!!
Line 6126: ###[CL-AIT] PHY_L1C_CLAIT_START_REQ:: demod_cc(%d), abs_time(%d), domain_type(%d), resume_type(%d), retry_cnt(%d/%d)
Line 6150: ###[CL-AIT] PHY_L1C_AIT_FAIL_IND:: demod_cc(%d), abs_time(%d), domain_type(%d)
Line 6167: ###[NR_RFPROC] Abnormal rf_path(%d) !!!
Line 6195: ###[NR_RFPROC] SendRfMipiDump domain_type(%d)
Line 6202: ###[NR_RFPROC][DEBUG] SetIsPcellRfCmd(%d)
Line 6214: ###[NR_RFPROC][WARNING] GetPcellRfOnOffState : Abnormal PcellRfPath(%d)
Line 6219: ###[NR_RFPROC] GetPcellRfOnOffState : DomainType(%d), PcellRfPath(%d) --> path_info_bitmask(0x%x), prx_bitmask(0x%x), drx_bitmask(0x%x)
Line 6230: ###[NR_RFPROC] GetPcellRfOnOffState : DomainType(%d), PcellRfPath(%d) --> rf_on(%d)
Line 6367: ###[NR_TX] CH_SetIPCTxBlcok cell_group(0x%x) suspendmode(0x%x) demod_cc(%d)
Line 6389: ###[NR_TX] CH_SetIPCUpdateTxDBNoti cell_group(0x%x) demod_cc(%d) cause(%d) txctl_update(%d) etdac_update(%d) femctl_update(%d) cpl_update(%d)
