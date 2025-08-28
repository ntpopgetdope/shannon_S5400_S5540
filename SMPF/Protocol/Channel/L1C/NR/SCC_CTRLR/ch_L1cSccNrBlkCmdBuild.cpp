Line 108: ##[NR_SCC] Build_FREQSET_NR_CMD : rf_path(%d), rx_mode(%d), chg_type(%d), ModuleOpState(%d), div_path(%d), TxPathCtrl(%d)
Line 113: ##[NR_SCC][WARNING] Build_FREQSET_NR_CMD : NOT allocated rf path(%d)!!
Line 122: ##[NR_SCC] Build_FREQSET_NR_CMD : always PRX0 enable(%) for RF TX 
Line 185: ##[NR_SCC] Change RfSetMode(RF_WAKEUP_INIT -> RF_MODULE_MONITOR)
Line 211: ##[NR_SCC] MODULE_SWITCH_BOTH
Line 219: ##[NR_SCC] MODULE_CONFIG_MONITOR
Line 226: ##[NR_SCC] Change RfSetMode(RF_MODULE_MONITOR -> RF_WAKEUP_INIT)
Line 235: ##[NR_SCC] MODULE_MONITOR_END
Line 242: ##[NR_SCC] Change RfSetMode(MODULE_MONITOR_END -> RF_OFF)
Line 261: ##[NR_SCC] UL Freq/BW changed. Set FREQSET_CMD mode as RF_FREQ_CHANGE
Line 276: ##[NR_SCC] Change RfSetMode(RF_OFF -> RF_MODULE_MONITOR)
Line 314: ###[NR_RFPROC] InitForRFWakeup in SASA DR: drSimInfo(%d)
Line 332: ###[NR_SCC] InitForRFWakeup : rf_path(%d) rf_mode(%d) UeState(%d) rx_mode(%d) ResumeType(%d) check(%d) wakeup_lv(%d)
Line 342: ##[NR_SCC] FREQSET_NR_CMD path_info_bitmask(0x%x), dl_freq(%d), ul_freq(%d), bw(%06d), vh(0x%x), serv_beam(0x%x), target_beam(0x%x)
Line 349: ##[NR_SCC] Build_FREQSET_NR_CMD : RfSetMode(%s)
Line 367: ##[NR_SCC] Build_FREQSET_NR_CMD : %s in NrNrMode -> band(%d), freq(%d), bw(%d), SASAMode(%d) TargetStack(%d)
Line 387: ##[NR_SCC][WARNING] SendRxfConfigCmd : NOT allocated cell info!!, path_info_idx(%d)
Line 409: ##[NR_SCC] SendRxfConfigCmd : config_type(%d), rx_mode(%d), scell_idx(%d) --> DEACT case
Line 422: ##[NR_SCC] CRDX RESTORE SCELL ACT case, isCdrxRestore(true)
Line 441: ##[NR_SCC] SendRxfConfigCmd : IsModeChangeWith4RxRel case
Line 467: SendRxfConfigCmd::RF done
Line 475: ##[NR_SCC] SendRxfConfigCmd : path(%d), rx_mode(%d), config_type/agc_mode/rxf_mode/scell_idx(0x%08x), rf_bw/0/rx_bw(0x%05x), dmixer(slo:%d afc:%d), agc_gain_p/d(%d)
Line 480: ##[NR_SCC] SendRxfConfigCmd : RXF_CONFIG_PATH_COPY type, OldPcellPathIdx(%d, %d)
Line 516: ##[NR_SCC] SendRxfConfigCmd(div) : path(%d), rx_mode(%d), config_type/agc_mode/rxf_mode/scell_idx(0x%08x), rf_bw/0/rx_bw(0x%05x), dmixer(slo:%d afc:%d), agc_gain_p/d(%d)
Line 535: ##[NR_SCC] Build_ENDC_INTRA_BAND_ENABLE_NR_CMD : enable(%d)
Line 562: ##[NR_SCC] Build_GAP_CONFIG_NR_CMD : scell_idx(%d) mode(%d)
Line 570: ##[NR_SCC] Build_GAP_CONFIG_NR_CMD : abnormal gap mode
Line 579: ##[NR_SCC][TX] Build_TX_MODE_CHANGE_NR_CMD : req_tx_mode(%d), bNeedTxModeChangeCnf(%d), CellIdx(%d)
Line 582: ##[NR_SCC][TX] Build_TX_MODE_CHANGE_NR_CMD : pTxModeChangeCmd is nullptr !!!
Line 604: ##[NR_SCC][TX] Build_TX_MODE_CHANGE_NR_CMD : 1TX configured
Line 607: ##[NR_SCC][TX] Build_TX_MODE_CHANGE_NR_CMD : 1TX configured and 2TX(req_tx_mode : %d) requested
Line 612: ##[NR_SCC][TX] Build_TX_MODE_CHANGE_NR_CMD : 2TX configured
Line 621: ##[NR_SCC][TX] Build_TX_MODE_CHANGE_NR_CMD : [MAIN] core_idx %d, num_ul_layer %d, lmac_cmd %d, enc_idx %d, mod_idx %d, slca_idx %d, txPath_idx %d
Line 626: ##[NR_SCC][TX] NrTxPathAlloc : [SUB] lmac_cmd %d, mod_idx %d, slca_idx %d, txPath_idx %d
Line 629: ##[NR_SCC][TX] Build_TX_MODE_CHANGE_NR_CMD : scell_idx(%d), req_tx_mode(0x%x), mode_chg_type(%d)
Line 636: ##[NR_SCC][TX] NeedTxModeChangeCmd : req_tx_mode(%d), bNeedTxModeChangeCnf(%d), CellIdx(%d)
Line 648: ##[NR_SCC][TX] NeedTxModeChangeCmd : Return false, DRX Sleep or Sleep On-going status
Line 655: ##[NR_SCC][TX][ERROR] NeedTxModeChangeCmd : Return false, Pcell pri_path_idx(0x%x) is INVALID
Line 661: ##[NR_SCC][TX] NeedTxModeChangeCmd : Return false, INVALID scell_idx(%d)
Line 668: ##[NR_SCC][TX] NeedTxModeChangeCmd : Return false, Not alloc tx path
Line 675: ##[NR_SCC][TX] NeedTxModeChangeCmd : Return false, 1TX configured, 2TX_ADD or 2TX_RELEASE
Line 736: ##[NR_SCC][TX] Build_TX_MODE_CHANGE_NR_CMD : mode_chg_type(%d), isConfig(%d), isReleaseAll(%d), pcell_band(%d)
Line 739: ##[NR_SCC][TX] Build_TX_MODE_CHANGE_NR_CMD : pTxModeChangeCmd is nullptr !!!
Line 758: ##[NR_SCC][TX] Build_TX_MODE_CHANGE_NR_CMD : pcell_rf_path(0x%x), chg_type(%d), mode_chg_type(%d), pcell_band(%d)
Line 53: ##[NR_SCC] L1SccSendDemodBufModeIpc : DomainType(%d)
Line 64: ##[NR_SCC] L1SccSendDemodBufModeIpc >> Fail to send RXF_CONFIG_NR_CMD
