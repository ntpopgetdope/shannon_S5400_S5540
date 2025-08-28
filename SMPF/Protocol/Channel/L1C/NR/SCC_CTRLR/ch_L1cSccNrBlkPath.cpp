Line 214: ##[NR_SCC] DCXO case xo_freq_offset (%d) : ppm(%d), (%d)khz, (%d)hz
Line 223: ##[NR_SCC] TCXO && SA case xo_freq_offset %d, cal_offset %d
Line 229: ##[NR_SCC] TCXO && NSA case xo_freq_offset %d
Line 240: ##[NR_SCC] xo_freq_offset: ppm(%d), (%d)hz
Line 253: ##[NR_SCC] xo_freq_offset: ppm(%d), (%d)hz, (%d)khz
Line 264: ##[NR_SCC] RXF_LO_SHIFT_UPDATE_BITMASK, total_xo_freq: (%d)hz, xoHzRem : (%d)hz
Line 266: ##[NR_SCC] xoHzRem_ppm (%d)ppm => remain_dmxr_freq_afc(%d), rxf_mode_bitmask (0x%x), rxf_mode_bitmask %d
Line 290: ##[NR_SCC] L1 Dmixer setting case rxf_mode %d, rxf_mode_bitmask 0x%x
Line 295: ##[NR_SCC] InitTcxoOffset : resume_type(%d), path_info_idx(%d), dl_freq(%d), xo_freq_offset(%d), dmxr_freq_afc(%d), rxf_mode(%d), cal_xo_freq_offset(%d)
Line 308: ##[NR_SCC]  path_idx %d, rxf_mode_bitmask 0x%x, rf_lo_update %d
Line 318: ##[NR_SCC]  RF LO is already update,  return true
Line 323: ##[NR_SCC]  RF LO is not updated, return false
Line 342: ##[NR_SCC] forced return , rxf_mode_bitmask 0x%x, rf_chg_type 0x%x
Line 348: ##[NR_SCC] forced return , rxf_mode_bitmask 0x%x
Line 367: ##[NR_SCC] McgDomainType(%d), mxr(%d), (with rf)Current_Pcellxo(%d)
Line 371: ##[NR_SCC] forced return : xo_freq_offset(%d)
Line 384: ##[NR_SCC]  upate status, stored_rf_lo_sfhit_db:(%d)khz,  before(%d), after(%d), rf_lo_update(%d)
Line 399: ##[NR_SCC] forced change dmixer value to 1
Line 408: ##[NR_SCC] RXF_LO_SHIFT_UPDATE_BITMASK, upate RF LO shift db xoHzRem_hz(%d), Change_Rf_Loshift(%d)khz  dmixer_reference(%d), rxf_mode_bitmask(0x%x)
Line 414: ##[NR_SCC]  upate L1 setting bitmask only, dmixer_reference(%d), rxf_mode_bitmask(0x%x)
Line 443: ##[NR_SCC] NrModulePathAlloc: There is no available path for module switch, path_info_idx(%d), m_path_always_enable(%d)
Line 459: ##[NR_SCC] NrModulePathAlloc, CA Config FULL,  module_path_info_idx(%d)
Line 468: ##[NR_SCC] NrModulePathAlloc, CA ACT FULL, Module path forced alloc
Line 473: ##[NR_SCC] NrModulePathAlloc, CA ACT FULL, stop NR path allocation
Line 493: ##[NR_SCC] NR RF INFO : check current total_rfbw (%d), bitmask(0x%x), bw(%d), total_bw (%d)Mhz
Line 499: ##[NR_SCC] NrModulePathAlloc, exception_case, total_bw %d Mhz
Line 504: ##[NR_SCC] NrPathAlloc, Normal case, module_path_info_idx : %d 
Line 531: ##[NR_SCC] just after the GAP CMD trigger path_info_idx %d
Line 542: ##[NR_SCC] NrModulePathAlloc, Module path alloc %d
Line 570: ##[NR_SCC][TX] NrTxPathAlloc : GetConfigNum %d
Line 583: ##[NR_SCC][TX][ERROR] NrTxPathAlloc : INVALID CellInfoIdx(%d)
Line 590: ##[NR_SCC][TX][ERROR] NrTxPathAlloc : INVALID pri_path_idx(%d) of CellInfoIdx(%d)
Line 595: ##[NR_SCC][TX] NrTxPathAlloc : [%d]CellInfoIdx %d, pri_path_idx %d, max_nw_ul_layer %d
Line 642: ##[NR_SCC][TX] NrTxPathAlloc : MRA_MP_MAIN SLO TxPathIdx 0x%x
Line 652: ##[NR_SCC][TX] NrTxPathAlloc : [MAIN] Not Find pHdlrSlo, DomainType %d, TxPathIdx %d
Line 662: ##[NR_SCC][TX] NrTxPathAlloc : MRA_MP_SUB SLO TxPathIdx 0x%x
Line 672: ##[NR_SCC][TX] NrTxPathAlloc : [SUB] Not Find pHdlrSlo, DomainType %d, TxPathIdx %d
Line 693: ##[NR_SCC][TX] RsltIdx(%d) ReqNum(%d) pri_path_idx(%d) rf_path_idx(%d)
Line 711: ##[NR_SCC][TX] core_idx(%d) lmac_cmd(%d) enc_idx(%d) num_ul_layer(%d) pRfInfoPri->TxPathIdx[MRA_MP_MAIN](%d) pRfInfoPri->TxPathIdx[MRA_MP_SUB](%d)
Line 716: ##[NR_SCC][TX] core_idx(%d) lmac_cmd(%d) enc_idx(%d) num_ul_layer(%d) pRfInfoPri->TxPathIdx[MRA_MP_MAIN](%d)
Line 719: ##[NR_SCC][TX] rTxRsrc.mod_idx[0](%d) [1](%d) rTxRsrc.slca_idx[0](%d) [1](%d) rTxRsrc.txPath_idx[0](%d) [1](%d)
Line 733: ##[NR_SCC][TX] NrTxPathDeAlloc : NumCellTxRel %d
Line 739: ##[NR_SCC][TX] NrTxPathDeAlloc : pCellInfo is nullptr
Line 743: ##[NR_SCC][TX] NrTxPathDeAlloc : scell_idx 0x%x, pri_path_idx 0x%x, div_path_idx 0x%x, max_nw_ul_layer %d, max_ue_ul_layer %d
Line 758: ##[NR_SCC][TX] NrTxPathModifyPcell : pri_path_idx 0x%x, div_path_idx 0x%x, max_nw_ul_layer %d, max_ue_ul_layer %d
Line 763: ##[NR_SCC][TX] NrTxPathModifyPcell : pHdlr is null
Line 804: ##[NR_SCC][TX] NrTxPathModifyPcell : %s
Line 818: ##[NR_SCC][TX] %s::Result: lmac_cmd(%d) enc_idx(%d) mod_idx(%d)
Line 823: ##[NR_SCC][TX] NrTxPathModifyPcell : Sub alloc
Line 826: ##[NR_SCC][TX][ERROR] NrTxPathModifyPcell : INVALID div_path_idx
Line 839: ##[NR_SCC][TX][ERROR] NrTxPathModifyPcell : Sub alloc fail
Line 856: ##[NR_SCC][TX] core_idx(%d) lmac_cmd(%d) enc_idx(%d) num_ul_layer(%d) pRfInfoPri->TxPathIdx[MRA_MP_MAIN](%d) pRfInfoPri->TxPathIdx[MRA_MP_SUB](%d)
Line 858: ##[NR_SCC][TX] rTxRsrc.mod_idx[0](%d) [1](%d) rTxRsrc.slca_idx[0](%d) [1](%d) rTxRsrc.txPath_idx[0](%d) [1](%d)
Line 879: ##[NR_SCC_TEST][TX] core_idx(%d) lmac_cmd(%d) enc_idx(%d) num_ul_layer(%d)
Line 881: ##[NR_SCC_TEST][TX] rTxRsrc.mod_idx[0](%d) [1](%d) rTxRsrc.slca_idx[0](%d) [1](%d) rTxRsrc.txPath_idx[0](%d) [1](%d)
Line 889: ##[NR_SCC][TX] NrTxPathModifyPcell : Sub dealloc
Line 911: ##[NR_SCC][TX] NrTxPathModifyPcell : %s
Line 926: ##[NR_SCC][TX] %s::Result: lmac_cmd(%d) enc_idx(%d) mod_idx(%d)
Line 931: ##[NR_SCC][TX] Error: Check CfgPurpose(%d) max_nw_ul_layer(%d)
Line 993: ##[NR_SCC] NrPathAlloc fail: UpdateRxPathAllocRslt fail
Line 1007: ##[NR_SCC] NrPathAlloc fail: PathMngr alloc fail
Line 1020: ##[NR_SCC] NrPathAlloc fail: There is no available path %d
Line 1061: ##[NR_SCC][WARNING] NrPathDealloc : Please check cell_info_idx
Line 1077: ##[NR_SCC] NrPathDealloc : cell_info(%d), div_path(%d), m_PathInfoDb->path_info(%d)
Line 1080: ##[NR_SCC][WARNING] NrPathDealloc : Please check path index
Line 1097: ##[NR_SCC] UpdateDlFreqInfo to MRA, scell_idx(%d)
Line 1209: ##[NR_SCC] DecideRxfConfigType : Invalid modify_status(%d)
Line 1211: ##[NR_SCC] DecideRxfConfigType : modify_status(%d) RxfConfigType(%d)
Line 1226: ##[NR_SCC] DrSwapRfPathIdx : pcell band changed, skip DrSwapRfPathIdx
Line 1232: ##[NR_SCC] DrSwapRfPathIdx : Skip Swap Rf path, FR2 band(%d)
Line 1239: ##[NR_SCC] DrSwapRfPathIdx : cell_idx(%d), Recover RfIdx(%d -> %d)
Line 1266: ##[NR_SCC] Cancel DrSwap due to div path alloc fail : cell_idx(%d), PriPathInfo(%d)
Line 1273: ##[NR_SCC] DrSwapRfPathIdx : cell_idx(%d), Swap RfIdx(%d -> %d)
Line 1292: ##[NR_SCC] DrSwapRfPathIdx : cell_idx(%d), PriPathInfo(%d), DrRxMode(%s), No operation
Line 1325: ##[NR_SCC] SetPathInfo : cell_info_idx(%d), pri_path_idx(%d), modify_status(%d) 
Line 1330: ##[NR_SCC][WARNING] SetPathInfo : Abnormal rf_path_idx(%d)
Line 1367: ##[NR_SCC] RXF_SCELL_ACT_RESUME, UpdateRfInfo
Line 1391: ##[NR_SCC] UL CA Case(0x%x)
Line 1403: ##[NR_SCC] cell_idx(%d), Pcell_BAND(%d), target_BAND(%d), rx_mode(0x%x), isFr1RfOn(%d) --> result(%d)
Line 1416: ##[NR_SCC]  check rf_chg_type %d, rxf_mode_bitmask %d
Line 1535: ##[NR_SCC][WARNING] Abnormal modify_status(%d), path_info[%d].status(%d)
Line 1545: ##[NR_SCC] SetPathInfo : path_info_idx#(%d) => modify_status(%s), rf_chg_type(0x%x), rx_mode(0x%x), agc_mode(%d)
Line 1551: ##[NR_SCC] SetPathInfo : path_info_idx#(%d) => modify_status(%s), rf_chg_type(0x%x), rx_mode(0x%x), agc_mode(%d)
Line 1602: ##[NR_SCC] PrevRfCmdProcess pri_path_idx %d, agc_mode %d, rf_chg_type %d
Line 1611: ##[NR_SCC] check bitmask before(0x%x, 0x%x), rx_mode(%d) modify_status(%d)
Line 1622: ##[NR_SCC] check bitmask after(0x%x, 0x%x), rx_mode(%d)
Line 1639: ##[NR_SCC][DIV] check bitmask before(0x%x, 0x%x), rx_mode(%d)
Line 1643: ##[NR_SCC][DIV] check bitmask after(0x%x, 0x%x), rx_mode(%d)
Line 1649: ##[NR_SCC] pri_path_idx %d, rf_path_idx %d, rf_rx_mode %d, rf_on %d, prev_rx_mode %d, check %d
Line 1667: ##[NR_SCC] PrevRfCmdProcess : skip RF cmd process, rf_chg_type(%d), RfCmdDone(%d), rf_path_idx(%d)
Line 1673: ##[NR_SCC][WARNING] Abnormal cell_info_idx[%d] pri_path_idx(%d)
Line 1691: ##[NR_SCC] backup rx_beam_idx, rf_path_idx %d, rx_beam_idx 0x%x band %d
Line 1710: ##[NR_SCC] PrevRfCmdProcess : rf_path_idx %d rf_rx_mode 0x%x  prx_bitmask 0x%x drx_bitmask 0x%x
Line 1724: ##[NR_SCC] SetPathInfo : cell_info_idx(%d), pri_path_idx(%d) --> No configured cell, skip !!
Line 1744: ##[NR_SCC] PrevRfCmdProcess : cell_info_idx(%d), div_path_idx(%d) allocatied
Line 1754: ##[NR_SCC] PrevRfCmdProcess : DrdsRxMode(%s), mxr_path(%d), OriginalRfPath(%d) --> skip dealloc mxr path
Line 1770: ##[NR_SCC] SetPathInfo: Do not send filter cmd!
Line 1867: ##[NR_SCC] Enable4Rx:: cell_info_idx(%d), path_info_idx(%d, %d)
Line 1879: ##[NR_SCC] Config4Rx : No support 4Rx band, DR_PATH is using in LTE! cell_info_idx(%d), using_dr_path(%d), band(%d)
Line 1884: ##[NR_SCC] Enable4Rx:: NrPathDealloc
Line 1888: ##[NR_SCC][TX] Enable4Rx : TxModeChange to 1TX
Line 1894: ##[NR_SCC] Enable4Rx : check_4rx_path_config(0x%x)
Line 1910: ##[NR_SCC] Disable4Rx:: cell_info_idx(%d), path_info_idx(%d, %d), rf_path(%d, %d)
Line 1915: ##[NR_SCC][TX] Disable4Rx : TxModeChange to 1TX
Line 1975: ##[NR_SCC] Config4Rx : mode(%d), enable(%d), rf_band(%d), using_dr_path(%d)
Line 1989: ##[NR_SCC] cell_info_idx(%d) div_path_idx(%d) max_nw_dl_layer(%d) GetPathIdx(%d)
Line 2001: ##[NR_SCC] PcellInfo : div_path_idx(%d) max_nw_dl_layer(%d)
Line 2120: ##[NR_SCC] /for DBG/ GetDivSloPath : cell_info_idx(%d) pri_rf_path(%d), slo_path[%d](%d, %d)
Line 2127: ##[NR_SCC] /for DBG/ GetDivSloPath : slo_div_rf_path(%d)
Line 2160: ##[NR_SCC] Set4RxPath : Skip to set 4rx Rf path, FR2 band(%d)
Line 2191: ##[NR_SCC] Set4RxPath enable:: cell_info(%d), pri_path(%d) not alloc div_path !!
Line 2202: ##[NR_SCC] Set4RxPath enable:: cell_info_idx(%d), div_slo_path(%d), modify_status(%d), dmxr_freq_slo(%d), pri_slo_path[0](%d), pcell_modify_status(%d), check(%d, %d)
Line 2206: ##[NR_SCC] RF_CH_Set_4RX case 1
Line 2218: ##[NR_SCC] Set4RxPath enable:: cell_info_idx(%d), Backup4RxMode(%d)
Line 2227: ##[NR_SCC] RF_CH_Set_4RX case 2
Line 2231: ##[NR_SCC] RF_CH_Set_4RX case 3
Line 2240: ##[NR_SCC] Set4RxPath: cell_info_idx(%d) Diversity RF path allocation failed. Dealloc Div Path
Line 2248: ##[NR_SCC] Set4RxPath enable:: cell_info_idx(%d), Backup4RxMode(%d)
Line 2255: ##[NR_SCC] RF_CH_Set_4RX else case
Line 2262: ##[NR_SCC][TX] Set4RxPath : TxModeChange to 2TX
Line 2272: ##[NR_SCC][TX] Set4RxPath : TxModeChange to 1TX
Line 2301: ##[NR_SCC] Set4RxPath:: enable(%d) cell_info(%d), path_info(%d, %d), rf_path(%d, %d), dmxr_freq_slo(%d)
Line 2338: ##[NR_SCC] NrAntennaModeChange:: meas_mode(%d), modem_state(%d), UeState(%d), cell.req_status(%d)
Line 2346: ##[NR_SCC] postpone NrAntennaModeChange:: cc(%d) rx_mode(0x%x) measmode(%d) req_status(%d)
Line 2351: ##[NR_SCC] skip NrAntennaModeChange:: cc(%d) rx_mode(0x%x) measmode(%d) req_status(%d)
Line 2359: ##[NR_SCC] skip NrAntennaModeChange, cause: cell_info_idx(%d), req_status(0x%x) --> deactivated cell!
Line 2366: ##[NR_SCC] skip NrAntennaModeChange, cause: cell_info_idx(%d), Requested rx_mode(%d), rsm_grant(%d), pri_path_idx(%d), ConfigNum(%d), req_status(%d)
Line 2375: ##[NR_SCC] Invalid antenna mode change req, Check Scell Act first! current_antenna_mode(%d), Requested rx_mode(%d)
Line 2385: ##[NR_SCC] NrAntennaModeChange - use RXD.TEST_MODE: requested rx_mode(%d -> %d)
Line 2390: ##[NR_SCC] NrAntennaModeChange - Not use RXD.TEST_MODE: requested rx_mode(%d -> %d)
Line 2395: ##[NR_SCC] NrAntennaModeChange - RXD.TEST_MODE: requested rx_mode(%d -> %d)
Line 2422: ##[NR_SCC] NrAntennaModeChange : cell_idx(%d), path_info_idx(%d, %d), rxf_mode(%d), antenna_mode(%d -> %d) 
Line 2446: ##[NR_SCC] before drx1 path on/off: pri_path_idx(%d), rf_path_idx(%d), rx_mode(%d), rf_on(%d), rf_info_bitmaks(0x%x, 0x%x), rf_rx_mode(%d)
Line 2454: ##[NR_SCC] after drx1 path on/off: pri_path_idx(%d), rf_path_idx(%d), rx_mode(%d), rf_on(%d), rf_info_bitmaks(%d, %d), rf_rx_mode(%d)
Line 2466: ##[NR_SCC] check prx2/drx2 path on/off: pri_path_idx(%d), div_path_idx(%d), current_antenna_mode(%d), antenna_mode(%d), check(%d)
Line 2486: ##[NR_SCC] pri_path_idx(%d), rf_path_idx(%d), rx_mode(%d), rf_info_bitmaks(0x%x, 0x%x)
Line 2502: ##[NR_SCC] div_path_idx(%d), DivPathInfo->rx_mode(%d), rf_rx_mode(%d), rf_info_bitmaks(0x%x, 0x%x)
Line 2535: ##[NR_SCC] UpdateDvfs
Line 2573: ##[NR_SCC] GetCellInfoIdxFromDemodCc : path_info_idx(%d) RF_PATH_IDX(%d) MXR_SEL_IDX(%d) DEMOD_SEL_IDX(%d) demod_cc(%d)
Line 2618: ##[NR_SCC] UpdateRfInfo : cell(%d), path(%d), rf(%d), type(%x), path_info_bitmask(0x%x), prx_bitmask(0x%x), drx_bitmask(0x%x)
Line 2666: ##[NR_SCC] UpdateRfInfo : rf(%d), dl_arfcn(%d), dl_bw(%d), ul_arfcn(%d), ul_bw(%d), ant_bitmask(0x%x, 0x%x)
Line 2684: ##[NR_SCC] ConfigModuleCaPath module_op_state %d, serv_module_idx 0x%x target_module_idx 0x%x serv_module %d target_module %d vh_path %d rf_interface %d
Line 2695: ##[NR_SCC] MODULE_CONFIG_MONITOR : pri_rf_path %d measure_rf_path %d
Line 2700: ##[NR_SCC] MODULE_CONFIG_MONITOR : pri_rf_path %d measure_rf_path %d
Line 2734: ##[NR_SCC][ERROR] abnormal module_path_idx!!!
Line 2748: ##[NR_SCC] enable module path (path %d, rf path %d)
Line 2757: MODULE_MONITOR_END : pri_rf_path %d measure_rf_path %d
Line 2761: MODULE_MONITOR_END : already end, return
Line 2782: ##[NR_SCC] just after restore ca path info %d rx_mode 0x%x
Line 2802: ##[NR_SCC] just after GAP config cmd, cell_info_idx %d path_info_idx %d scell_idx %d 
Line 2820: ##[NR_SCC] release module path (path %d, rf path %d)
Line 2829: MODULE_SWITCH_BOTH  pri_rf_path %d measure_rf_path
Line 2846: module switch act path cell_info[%d] scell_idx [0x%x] path_info[%d] switch_rf_path[%d]
Line 2866: module switch act path cell_info[%d] scell_idx [0x%x] path_info[%d] switch_rf_path[%d]
Line 2873: module switch config path cell_info[%d] scell_idx [0x%x] path_info[%d] switch_rf_path[%d]
Line 2885: ##[NR_SCC] switch module (path %d, switch RF path %d => %d) vh_path %d
Line 2928: ##[NR_SCC] change module rf_path %d ===> %d 
Line 2936: ##[NR_SCC] MODULE_ABB_CHECK serv_module %d target_module %d 
Line 2958: ##[NR_SCC] change module : serv_module(%d) ===> target_module(%d), MODULE_ABB_CHECK : pri_rf_path(%d) ===> switch_rf_path(%d)
Line 2988: ##[NR_SCC] MODULE_ABB_CHECK : module is not changed
Line 2994: ##[NR_SCC][WARNING] ConfigModuleCaPath error module_op_state %d 
Line 3003: ##[NR_SCC] SendGapConfigCmd, Send: GAP_CONFIG Command to HAL, mode: %d scell_idx %d
Line 3008: ##[NR_SCC] GAP_CONFIG_CMD is running.
Line 3043: ##[NR_SCC] ConvertPathReqToCellStatus : invalid path_req_type(%d)
Line 3053: ##[NR_SCC] ConvertBw bw_idx %d bandwidth %d 
Line 3126: ##[NR_SCC] GetRxRatio : dl_band(%d) dl_bw(%d) rf_path(%d)
Line 3131: ##[NR_SCC] GetRxRatio : rx_ratio(%d) for FR2
Line 3139: ##[NR_SCC] GetRxRatio : rx_ratio(%d) for FR1 RF support
Line 3144: ##[NR_SCC] GetRxRatio : rx_ratio(%d) for FR1 RF not support
Line 3162: ##[NR_SCC][WARNING] CheckValid4RxPath : 4Rx is not supported!!! Requested rx_mode(B: 0x%x -> A: 0x%x)
Line 3201: ##[NR_SCC] CheckSloRfUpdateOnly : path_idx(%d) -> rx_mode(0x%x), rf_idx(%d) -> prx_bitmask(0x%x)
Line 3204: ##[NR_SCC] CheckSloRfUpdateOnly : turn on state(%d), turn off state(%d)
Line 3232: ##[NR_SCC] GetNumConfigDoneCell : ConfigDoneCell(%d)
Line 3259: ##[NR_SCC][TX] TxModeChangeCb : bNeedTxModeChangeCnf(true), changed_tx_mode(%d), NrDb/Drx_saved_tx_mode(%d)
Line 3265: ##[NR_SCC][TX] TxModeChangeCb : changed_tx_mode(%d), NrDb/Drx_saved_tx_mode(%d)
Line 3336: ##[NR_SCC][%s] ReconfigPriPath, OldMxrPathIdx(%d)
Line 3340: ##[NR_SCC][%s] 1. old mxr path idx backup --> OldMxrPathIdx(%d)
Line 3368: ##[NR_SCC][%s] 3. new mxr path idx alloc (RF path is remained)
Line 3376: ##[NR_SCC][%s] Abnormal NewMxrPathIdx(%d)!!
Line 3383: ##[NR_SCC][%s] 3-1. Copy RF path idx --> RfPathIdx(%d)
Line 3388: ##[NR_SCC][%s] 3-2. Copy PathInfo except PathMap
Line 3420: ##[NR_SCC][%s] pcell path change, OldMxrPathIdx(%d), NewMxrPathIdx(%d)
Line 3605: ##[NR_SCC] NrPathAlloc : cell_info_idx (%d), pri_path_idx (%d), Mp(%d)
Line 3645: ##[NR_SCC] NrPathAlloc : max_nw_dl_layer is 0 ==> force set)
Line 3705: ##[NR_SCC] NrPathAlloc fail: Idx%d[%d] pHdlr null
Line 3723: ##[NR_SCC] NrPathAlloc : Pcell Demod Idx Change: demod_cc(%d) => (%d) 
Line 3747: ##[NR_SCC] NrPathAlloc : MXR(%d), RTG(%d), TDBUF(%d), OUTPUT(%d), DEMOD(%d), RF_RTG(%d)
Line 3750: ##[NR_SCC] NrPathAlloc : path_info(%d), allocated arfcn(%d), freq(%d), band(%d), dl_bw(%d), req_status(%d)
Line 3802: ##[NR_SCC] Pcell_band(%d), target_cell_band(%d), set RXF_L1_RF_LO_TRACKING_MODE_BITMASK
Line 3811: ##[NR_SCC] calc dmxr_freq_afc : scell case , pcell_path_info(%d), pcell_freq(%d), pcell_afc(%d), scell_freq(%d), scell_afc(%d)
Line 3849: PostProcMraReq[%s, %s] : INVALID RAT 
Line 3855: DecidePostProc : ReducedCoreMapNr 0x%x, rReducedCoreMapLte %d
Line 3877: ##[NR_SCC] ModulePathControl:: meas_mode(%d), modem_state(%d), UeState(%d), meas_4rx(%d), cell.req_status(%d)
Line 3884: ##[NR_SCC] Invalid antenna mode change req, Check Scell Act first! current_antenna_mode(%d), Requested rx_mode(%d)
Line 3894: ##[NR_SCC] ModulePathControl - use RXD.TEST_MODE: requested rx_mode(%d -> %d)
Line 3899: ##[NR_SCC] ModulePathControl - Not use RXD.TEST_MODE: requested rx_mode(%d -> %d)
Line 3904: ##[NR_SCC] ModulePathControl - RXD.TEST_MODE: requested rx_mode(%d -> %d)
Line 3929: ##[NR_SCC] ModulePathControl : cell_idx(%d), path_info_idx(%d, %d), rxf_mode(%d), antenna_mode(%d -> %d) 
Line 3956: ##[NR_SCC] drx1 path on/off: pri_path_idx(%d), rx_mode(%d), rf_on(%d)
Line 3997: ##[NR_SCC] div_path_idx(%d), rx_mode(%d)
Line 4023: ##[NR_SCC] UpdateDvfs
Line 4036: PostProcDemodChange: DomainType(%d) Cg(%d) num(%d)
Line 4042: Changed Path Info: Rat(%s) Path(%d) DemodCc(%d->%d)
Line 4066: DemodCc mismatch: DemodIdxBefore(%d) Current(%d)
Line 4099: ##[NR_SCC] ConvertSCStoKhz : invalid scs(%d)
Line 4122: ##[NR_SCC] exception case: ssb_freq(%d), data_freq(%d), ssb_scs(%d)khz, difference_freq(%d), difference_freq_abs(%d), remainder(%d)
Line 4132: ##[NR_SCC] Decide_difference_multiple_of_scs: Wrong FR, ssb_freq(%d) data_freq(%d) - only for FR2
Line 4159: ##[NR_SCC] difference_multiple_of_scs,  exception case remainder %d
Line 4170: PostProcDemodChangeAfterDeact: num(%d) IsPcell(%d)
Line 4177: Changed Path Info: Path(%d) DemodCc(%d->%d) CellInfoIdx(%d)
Line 4189: ##[NR_SCC] NrPathAlloc fail: Idx%d[%d] pHdlr null
Line 4200: ##[NR_SCC] NrPathAlloc fail: Idx%d[%d] pHdlr null
Line 4208: DemodCc mismatch: DemodIdxAfter(%d) Current(%d)
Line 4216: DemodCc mismatch: DemodIdxBefore(%d) Current(%d)
Line 4231: ##[NR_SCC][DEBUG] CheckTxPathControl: pcell case, skip
Line 4251: ##[NR_SCC] CheckTxPathControl: bIsUlFreq(%d) -> Result(%d)
Line 84: ##[NR_SCC] SetRxPathMap : MXR(0x%02X) RTG(0x%02X) TDBUF(0x%02X) OUTPUT(0x%02X) DEMOD(0x%02X) SSB(0x%02X)
Line 101: ##[NR_SCC] pRsrcIdxs : MXR(0x%02X) RTG(0x%02X) TDBUF(0x%02X) OUTPUT(0x%02X) DEMOD(0x%02X) SSB(0x%02X)
Line 108: ##[NR_SCC] SetRxPathMap : MXR(0x%02X) RTG(0x%02X) TDBUF(0x%02X) OUTPUT(0x%02X) DEMOD(0x%02X) SSB(0x%02X)
