Line 99: RxOnOffCmd: Wrong RAT Type(%d)!!
Line 158: ###[NR_RXFILTER] RxfConfigCmd(CheckRxUpdateMode): result(%d), config_type(%s:%d), rf_path(%d), agc_mode(%d), rxf_mode(%d)
Line 181: ###[NR_RXFILTER] RxfConfigCmd(CheckQuickSleepOnState): result(%d)([0]:Do not send QS IPC,[1]:QS On), config_type(%s:%d)
Line 200: ###[NR_RXFILTER] RxfConfigCmd(UpdateHalDb): pri_path_rf_path/cmdreq_rf_path(0x%x), pri_path_agc_mode/cmdreq_agc_mode(0x%x), IsDirectModeChange(%d), cur_rx_update_mode_flag(%d)
Line 208: ###[NR_RXFILTER] RxfConfigCmd(UpdateHalDb) : config_type(%d), rxf_mode (%d)
Line 324: ###[NR_RXFILTER] GetBestDmixerFreq(Div) : mxr(%d), get_best_div_afc(%d), best_div_dmxr(%d), cmd_afc(%d), hal_afc(%d)
Line 328: ###[NR_RXFILTER] GetBestDmixerFreq(Div) : cmd_div_freq(%d), div_path_freq(%d), rxmode_db_update(%d)
Line 403: ###[NR_RXFILTER]  using Hal_DB, dmxr_reference(%d), dmxr_freq_slo(%d)
Line 431: ###[NR_RXFILTER] GetBestDmixerFreq : path(%d), dmxr_freq(%d), backup_dmxr_freq(%d %d)
Line 473: ###[NR_RXFILTER] SetBestDmixerFreq : cmd_path(%d), pri_path(%d), rxf_mode(%d), dmxr_freq[0](%d), cmd_dl_rf_freq(%d), pcell_dl_rf_freq(%d), (with rf)xo_freq_offset(%d)
Line 527: ###[NR_RXFILTER] BW change scenario, dcxo update is needed, prev_update_time(%d), current_pal_time(%d), elapsedTimeUs(%d)
Line 533: ###[NR_RXFILTER] BW change scenario, dcxo update is not needed, prev_update_time(%d), current_pal_time(%d), elapsedTimeUs(%d)
Line 540: ###[NR_RXFILTER] before GetDifferenceWithSnapshot mxr[%d] : %d
Line 545: ###[NR_RXFILTER] after GetDifferenceWithSnapshot mxr[%d] : %d
Line 551: ###[NR_RXFILTER] check bitmask 0x%x, cmd afc %d, check %d
Line 556: ###[NR_RXFILTER] using L1 dmixer dmixer_reference %d
Line 563: ###[NR_RXFILTER] (without RF) using bestdmixer case: dmixer_reference %d 
Line 573: ###[NR_RXFILTER] print_dmixer_info, mxr[%d]: pcell_xo(with rf)(%d), GetBestDmixer_xo(without RF)(%d), GetBestDmixer(%d), hal_dmixer(%d), cmd_dmixer(%d)
Line 580: ###[NR_RXFILTER] Monitor_xo_offset : cmd_mxr(%d), BestDmixer_xo_offset(without RF)(%d), Tracking_xo_offset(%d), Cmd_xo_offset(%d), Hal_xo_offset(%d)
Line 590: ###[NR_RXFILTER] Skip RxfConfigCmd : hal_db_rx_dl_bw(%d), cmd_info_rx_dl_bw(%d), rxf_mode(%d) - same dl_bw!!!
Line 601: ###[NR_RXFILTER] same dl_bw : set only Dmixer_ref(%d)
Line 615: ###[NR_RXFILTER] RxfConfigCmd(GetBestDmixerFreq(Pri)): config_type(%d), mxr(%d), get_best_afc(%d), best_dmxr(%d), cmd_afc(%d), hal_afc(%d), pri_rxf_bw(%d)
Line 619: ###[NR_RXFILTER] RxfConfigCmd(GetBestDmixerFreq(Pri)): cmd_freq(%d), pri_path_freq(%d), rxf_mode(%d)
Line 626: ###[NR_RXFILTER]	UpdateLoShiftDb : mxr(%d), xo_freq_offset_hz(%d)
Line 630: ###[NR_RXFILTER] using L1 Dmixer setting case, rxf_mode %d, rxf_mode_bitmask (0x%x)
Line 636: ###[NR_RXFILTER] GetBestDmixerFreq : config_type(%d), dmxr_freq[0](%d), best_dmxr(%d), gMtm_NrRfTestMode(%d), rxf_mode_bitmask (0x%x)
Line 645: ###[NR_RXFILTER] RxfConfigCmd(850MHZ NoncontogousConfig): config_type(%d), dcr_sel(%d), rx_mode(%d)
Line 697: ###[NR_RXFILTER] SetBestDmixerFreq : path(%d), dmxr_ref(%d), (with rf)xo_freq_offset(%d)	checkcheck
Line 713: ###[NR_RXFILTER] HandleScellAct config_type %d, rxf_mode %d, rxf_mode_bitmask(0x%x), domain_type %d 
Line 718: ###[NR_RXFILTER] config_type(RXF_CONFIG_ACT_DEACT), recover_flag(%s)
Line 737: ###[NR_RXFILTER] GetScellDmixerFreq : scell wakeup act, config_type(%d), backup_dmxr_freq[0](%d), mxr(%d) agc(%d,%d)
Line 781: ###[NR_RXFILTER] using pcell xo case , pcell_xo(without rf)(%d), pcell dmxr_reference(%d), dmxr_reference[0](%d)
Line 793: ###[NR_RXFILTER] HandleScellAct : scell initial act, Already RxupdateMode LATCH!!!! is_other_cc_activated(%d)
Line 811: ###[NR_RXFILTER] GetScellDmixerFreq : scell wakeup act, config_type(%d), backup_dmxr_freq[0](%d), mxr(%d) agc(%d,%d)
Line 818: ###[NR_RXFILTER] using L1 dmixer setting case, rxf_mode %d, rxf_mode_bitmask 0x%x
Line 822: ###[NR_RXFILTER] using RXF_LO_SHIFT_UPDATE_BITMASK case, rxf_mode %d, rxf_mode_bitmask 0x%x
Line 835: ###[NR_RXFILTER] Scell search/meas using pcell xo case: pcell_xo(without rf)(%d), dmixer_reference(without rf)(%d), dmixer_reference[0](%d)
Line 841: ###[NR_RXFILTER] GetBestDmixerFreq using bestdmixer case: config_type(%d), dmxr_freq[0](%d)
Line 853: ###[NR_RXFILTER] Scell search/meas case 3, config_type(%d), (without rf)best_dmxr(%d), scell_dmxr_freq[0](%d), pcell_mxr(%d) cmd_mxr(%d)
Line 857: ###[NR_RXFILTER] using L1 dmixer setting case, rxf_mode %d, rxf_mode_bitmask 0x%x
Line 882: ###[NR_RXFILTER] ACT/DEACT while Search/Measure. Stop running Srch/Meas
Line 889: ###[NR_RXFILTER] skip temp DCXO compensation during the path off
Line 895: ###[NR_RXFILTER] HO case
Line 901: ###[NR_RXFILTER] after GetDifferenceWithSnapshot mxr[%d] : %d
Line 912: ###[NR_RXFILTER] print_dmixer_info, mxr[%d]: pcell_xo(with rf)(%d), GetBestDmixer_xo(without rf)(%d), GetBestDmixer(without rf)(%d), hal_dmixer(%d), cmd_dmixer(%d)
Line 925: ###[NR_RXFILTER] DCXO_serving_cell_change, normal case : best_dmxr(%d), cmd_afc(%d), check(%d, %d) => (%d)
Line 935: ###[NR_RXFILTER] DCXO_serving_cell_change, exception case : best_dmxr(%d), cmd_afc(%d), check(%d, %d) => (%d)
Line 954: ###[NR_RXFILTER] GetBestDmixerFreq(Pri) : config_type(%d), mxr(%d), get_best_afc(%d), best_dmxr(%d), cmd_afc(%d), hal_afc(%d)
Line 960: ###[NR_RXFILTER] GetBestDmixerFreq(Pri) : cmd_freq(%d), pri_path_freq(%d), pcell_path_freq(%d)), rxf_mode (%d), isHO(%d)
Line 967: ###[NR_RXFILTER] Monitor_xo_offset : cmd_mxr(%d), BestDmixer_xo_offset(%d), Tracking_xo_offset(%d), Cmd_xo_offset(%d), Hal_xo_offset(%d)
Line 993: ###[NR_RXFILTER] check (%d, %d, %d)
Line 1003: ###[NR_RXFILTER] RxfConfigCmd(forced off): path(%d), rx_mode(%d), rxf_bw(%d), rx_dl_bw(%d)
Line 1014: ###[NR_RXFILTER] RXF_CONFIG_COPY_RESTORE case
Line 1028: ###[NR_RXFILTER] RXF_CONFIG_RESUME case
Line 1039: ###[NR_RXFILTER] %s case
Line 1051: ###[NR_RXFILTER] Search/Measure Forced stop
Line 1131: ###[NR_RXFILTER] RxfConfigCmd: module switch case %d
Line 1161: ###[NR_RXFILTER] RxfConfigCmd(Start of ProcessRxfConfigCmd): config_type(%s), path_type(%s), path(0x%08x)(4bit:rf/mxr/rtg/pgc/tdbuf/out/demod/ssb), rx_mode(0x%x), bw(%d), slo(%d), rxf_bw(0x%x)!!
Line 1165: ###[NR_RXFILTER][BWP] ====== Trigger direct PHY_RESUME_OPT for proc delay
Line 1194: ###[NR_RXFILTER] RxfConfigCmd(RXF_MAIN_ANT_MODE_NOT_CHANGE): Update rx_mode value only
Line 1202: ###[NR_RXFILTER] RxfConfigCmd(RXF_MAIN_ANT_MODE_NOT_CHANGE): send RxmodeChangeReq only
Line 1221: ###[NR_RXFILTER] fr1 module setting
Line 1242: ###[NR_RXFILTER]  RXF_CONFIG_RF_ABB_PATH skip rxfilter cmd
Line 1255: ###[NR_RXFILTER]  RXF_CONFIG_RF_ABB_PATH skip rxfilter cmd
Line 1265: ###[NR_RXFILTER] SetBestDmixerFreq : path(%d), dmxr_ref(%d), (with rf)xo_freq_offset(%d)
Line 1273: ###[NR_RXFILTER] RxfConfigCmd(RXF_CONFIG_DMIXER): path(%d), rxf_mode(%d), dmxr_ref(%d), cmd_dl_freq(%d)
Line 1298: ###[NR_RXFILTER] RxfConfigCmd: RXF_CONFIG_BACKUP_MODULE mxr %d rx_mode %d backup_dmxr_freq %d
Line 1323: ###[NR_RXFILTER] skip RF LO SHIFT setting at the measure mode scenario.
Line 1346: ##[NR_SCC] Send_GET_PCELL_DMIXER_CMD, mxr(%d), dl_freq(%d), GetShmPcellXo(%d), (%d)hz, (%d)khz, dmixer_reference(%d), hal_db_afc(%d)
Line 1396: ###[NR_RXFILTER] RxfConfigCmd: DB store, config_type(%d)!!
Line 1438: ###[NR_RXFILTER] RxfConfigCmd: config_type (RXF_CONFIG_TDP_DISABLE)
Line 1452: ###[NR_RXFILTER] RxfConfigCmd: config_type (RXF_CONFIG_TDP_ENABLE)
Line 1469: ###[NR_RXFILTER] RxfConfigCmd: config_type(%s:%d) Start
Line 1474: ###[NR_RXFILTER] RxfConfigCmd: config_type(%s:%d) End
Line 1481: ###[NR_RXFILTER] RxfConfigCmd[WARNING]: Please check config_type(%d)!!
Line 1498: ###[NR_RXFILTER] RXF_CONFIG_NONE
Line 1522: ###[NR_RXFILTER] RxfConfigCmd: REDUCED_INFO send reduced mode ipc
Line 1528: ###[NR_RXFILTER] MODEM POWER OFF!!, RxfConfigCmd: REDUCED_INFO send reduced mode ip skip
Line 1538: ###[NR_RXFILTER] RXF_CONFIG_HAL_DB_SWITCH
Line 1565: ###[NR_RXFILTER] RXF_CONFIG_PATH_COPY
Line 1572: ###[NR_RXFILTER] RXF_CONFIG_PATH_COPY, pri path case
Line 1588: ###[NR_RXFILTER] RXF_CONFIG_PATH_COPY, div path case
Line 1599: ###[NR_RXFILTER] MODEM POWER OFF!!, RxfConfigCmd skip
Line 1622: ###[NR_RXFILTER] RXF_CONFIG_DIV_UPDATE CMD - Div_path add case
Line 1628: ###[NR_RXFILTER] RXF_CONFIG_DIV_UPDATE CMD - Div_path delete case : scell_idx(%d) pri_path_idx(%d)
Line 1639: ###[NR_RXFILTER] check rxf bitmask: rxf_mode(0x%x), rxf_mode_bitmask(0x%x)
Line 1648: ###[NR_RXFILTER] UpdateLoShiftDb : pcell(%d), mxr(%d), xo_freq_offset_hz(%d)
Line 1652: ###[NR_RXFILTER] UpdateLoShiftDb : RX_MODE_OFF, update skip
Line 1666: ###[NR_RXFILTER] RxfConfigCmd(End of ProcessRxfConfigCmd): config_type(%s), path_type(%s), NeedToUpdateHalDb(%d)
Line 1683: ###[NR_RXFILTER] RxfConfigCmd: Wrong RAT Type(%d)!!
Line 1699: ###[NR_RXFILTER][OL-AIT] isScellSrchMeas(%d), path_type(%d), rx_mode(%d)
Line 1729: ###[NR_RXFILTER] CompensateRFLoShift, mxr(%d), freq(%d), input_best_dmxr(%d), rf_lo_hz(%d), update_status(%d)
Line 1734: ###[NR_RXFILTER]  change RF LO, xo_khz => (%d)khz
Line 1752: ###[NR_RXFILTER] xoRem(%d)hz + rf_lo_shift_offset(%d)hz => best_dmxr_xo_freq_offset(%d)hz, xo_freq_offset(%d, %d))
Line 1767: ###[NR_RXFILTER] best_dmxr_xo_freq_offset(%d)hz - rf_lo_shift_offset(%d)hz => xoRem(%d)hz, xoppm(%d, %d))
Line 1775: ###[NR_RXFILTER] forced change dmixer value to 1 
Line 1798: ###[NR_RXFILTER] Compensatessboffset, mxr(%d), rf_freq(%d), center_freq_offset(%d), center_sc_offset(%d), check(%d), input_best_dmxr(%d)ppm
Line 1805: ###[NR_RXFILTER] ssb<->data scs difference  issue hit ==================> (%d)hz+120000hz = (%d)hz
Line 1809: ###[NR_RXFILTER] (%d)prvious_dmixer +(%d)khz data_offset -> (%d)dmixer
Line 1818: ###[NR_RXFILTER] using pcell xo case, (%d)hz+120000hz = (%d)hz
Line 1822: ###[NR_RXFILTER] using pcell xo case, (%d)prvious_dmixer +(%d)khz data_offset -> (%d)dmixer
Line 1847: ###[NR_RXFILTER] monitordmixer : mxr(%d), config_type(%d), dmxr_freq(%d), without rf : xoRem(%d)ppm, xoRem(%d)hz, rf lo shift shm_update(%d)khz
Line 1882: ###[NR_RXFILTER] UpdateSharedMemory domain_type(%d), rx_test_mode(%d), dl_grant_ratio(%d), di_timer(%d %d)
Line 1884: ###[NR_RXFILTER] UpdateSharedMemory sinr( %d, %d, %d, %d) idle_sinr( %d, %d, %d, %d)
Line 1899: ###[NR_RXFILTER] RxfConfigCmd[STOP]: config_type(%s:%d), path(%d)
Line 1932: ###[NR_RXFILTER] GetPcellDmixerCmd : Current_DomainType(%d), Require_DomainType(%d), Require_PcellPath(%d), Require_PcellXo(%d)
