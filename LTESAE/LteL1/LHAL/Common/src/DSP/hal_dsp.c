Line 702: [AS] Don't HALDSP_SET_PMAXLIMIT_CMD_AS in case of FEATURE_STAS_D_2_0 or FEATURE_TX_AS_OPT_M
Line 855: [DSP] HALDSP_FindMxrPath mxr(%d), foundDemodCC(%d), foundCcType(%d), allocated_path(%d), stackid(%d)
Line 878: [DSP] HALDSP_FindMxrPath mxr(%d), foundDemodCC(%d), foundCcType(%d), allocated_path(%d), stackid(%d)
Line 1000: [DSP] endc_check(%d), Sadr_check(%d), nedc_check(%d), fedv_check(%d)
Line 1015: [DSP] IPC_ACTION_ID_LTE_DEMOD_REL_REQ: flag(%d), wait(%d)
Line 1018: [SADS] L1LC_GetSadrAvailable(%d)
Line 1056: [DSP] ST%d: IPC_SysInfoUpdate.system_information change (%x->%x)
Line 1090: [DSP] Modem Status: %d  RF available: %d, SKIP IPC_ACTION_ID_SI_UPDATE 
Line 1139: [DSP] IPC_ACTION_ID_SI_UPDATE: cc(%d), td_buf_idx(%x) td_buf_idx_div(%x), td_buf_size(%d)
Line 1145: [DSP] IPC_ACTION_ID_SI_UPDATE: cell_group[MCG], mode(%d)
Line 1182: [SADS] Skip IPC_ACTION_ID_UL_BW due to IDLE state
Line 1202: [DSP] Modem Status: % d	RF available: %d
Line 1210: [DSP] command PENDING:[%d]IPC_ACTION_ID_UL_BW
Line 1214: [DSP] command PENDING Q FULL!!:[%d]IPC_ACTION_ID_UL_BW
Line 1267: [DSP] IPC_ACTION_ID_UL_BW: cell_group(%d), cc(%d), bw(%d), cp_type(%d)
Line 1304: [DSP] Modem Status: % d  RF available: %d
Line 1309: [DSP] command PENDING:[%d]IPC_ACTION_ID_RXMODE_CHANGE
Line 1313: [DSP] command PENDING Q FULL!!:[%d]IPC_ACTION_ID_RXMODE_CHANGE
Line 1356: [DSP] IPC_ACTION_ID_RXMODE_CHANGE: cc(%d), div_cc(%d), td_buf_idx(%x) td_buf_idx_div(%x), td_buf_size(%d), rfd_div_cc(%d)
Line 1360: [DSP] IPC_ACTION_ID_RXMODE_CHANGE: cc(0x%04x), rx_mode(%x)
Line 1398: [DSP] HALDSP_ControlIdleDtxOnOff: cc(%d) onoff(%d)
Line 1402: [DSP] HALDSP_ControlIdleDtxOnOff: Invalid input cc(%d)
Line 1408: [DSP] Modem Status: % d  RF available: %d
Line 1445: [DSP] PHYP_C2P_LTE_IDLE_DTX (CC%d): wait 1ms and idle_dtx_status not changed(%d)
Line 1452: [DSP] PHYP_C2P_LTE_IDLE_DTX: IPC operation done but tick clear was not happened. CC%d on(%d) status(%d) wait_time[%d]
Line 1456: [DSP] PHYP_C2P_LTE_IDLE_DTX: CC%d on(%d) status(%d)
Line 1481: stackID[%d] LTE_SHM_Address[0x%x], DS_LTE_SHM_Address[0x%x], L1Dsp_SHM[0x%x]
Line 1490: [RACH] CarrierInd(%x) RachCnt(%d) TransTTI(%d) Power(%d) GpadcVal(%d)
Line 1514: [DSP] HALDSP_ReconfigMacMain: For RACH, MACMain Config should be sent!
Line 1563: [L%d: rachdata :cmd(%d), rt(%d), p_cnt+type+id(%d), r_sr(%d), cause(%d), p_m(%d), c_ind(%d)
Line 1571: HALDSP_SetRACHCmd: gRACHflag is SET!preamble_cnt(%d)
Line 1589: memcpy::Fr(pRachData(%x)) To(msg_mac_rach(%x))
Line 1602: During 4G_DRDS ativated, RACH can't be triggered
Line 1603: IsRfAvailable is changed to FALSE!!, HALDRX_DisablePagingRcvIntr
Line 1623: [DSP] RF unavailable
Line 1624: [SADS] L1LC_GetSadrAvailable(%d),  HALSC_GetUeState(%d), GetChannelConfigure()
Line 1630: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MAC_RACH
Line 1634: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MAC_RACH
Line 1649: [DRX, 4GDS] RACH is triggered in CDRX MeasConfig with gHALSC_PrepareGapMeas
Line 1654: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MAC_RACH
Line 1658: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MAC_RACH
Line 1671: SleepProcOngoing @L2::%s(%d)
Line 1680: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MAC_RACH
Line 1684: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MAC_RACH
Line 1748: [DSP] Force 2RX mode registry [%d]
Line 1794: [DSP] IPC_ACTION_ID_MAC_RACH: cell_group(%d), cmd(%d)
Line 1829: (CONN State) SONANR: Pending SRI
Line 1879: SleepProcOngoing @L2::%s(%d)
Line 1888: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SRI_ON
Line 1892: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SRI_ON
Line 1902: [DSP] RF unavailable, IPC_ACTION_ID_SRI_ON
Line 1947: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SRI_ON
Line 1951: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SRI_ON
Line 1962: [DRX, 4GDS] SR is triggered in CDRX MeasConfig with gHALSC_PrepareGapMeas
Line 1967: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SRI_ON
Line 1971: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SRI_ON
Line 1990: [DSP] For SRI_ON, C_RNTI Config should be sent!
Line 2005: [DSP] IPC_ACTION_ID_SRI_ON: cell_group(%d),  sri_count(%d)
Line 2063: assert condition : Wrong MacCE command ID
Line 2070: [DSP] Modem Status: % d  RF available: %d
Line 2076: [DSP] Command PENDING:[%d]IPC_ACTION_ID_DRX_CMD
Line 2080: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_DRX_CMD
Line 2091: [DSP] IPC_ACTION_ID_DRX_CMD [MacCE:%d]
Line 2149: [DSP] Modem Status: %d, RF available: %d, semi: %d
Line 2157: [DSP] Command PENDING:[%d]IPC_ACTION_ID_GAP_CONTROL
Line 2161: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_GAP_CONTROL
Line 2195: [DSP] IPC_ACTION_ID_GAP_CONTROL [0x%x,semi(%d)]
Line 2235: [DSP] Modem Status: % d  RF available: %d
Line 2240: [DSP] Command PENDING:[%d]IPC_ACTION_ID_GAP_INFO
Line 2244: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_GAP_INFO
Line 2261: [DSP] IPC_ACTION_ID_GAP_INFO (gap_en:%d, gap_pattern:%d, gapinfo_offset:%d)
Line 2368: [DSP] Modem Status: % d  RF available: %d
Line 2373: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PMAX
Line 2377: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PMAX
Line 2411: [DSP] SetPmaxBackoffCmd: Sensor(%x), NumTxAnt(%d) Max Power(%d, %d)
Line 2438: [DSP] UlCaStatus(%d): Set ulca_backoff to 0 for Inter-Band ULCA case(B%d/B%d)/TasEnabled(%d)
Line 2441: [DSP] SetPmaxBackoffCmd: ulca_backoff(%d) UlCaStatus(%d) Pmax(%d) PMaxLimit(%d) gHal_maxPower(%d) IsTasEnabled(%d)
Line 2516: [DSP] IPC_ACTION_ID_PMAX: SarLimit[%d/%d] PEMAX[%d/%d] num_CC[%d] SLO_CC[%d] UlCaStatus[%d]
Line 2682: [DSP] SetPmaxCmd Backoff(%d)
Line 2855: [DSP] No Max Tx Pwr Limit on MTM/FCC! : %ddBm
Line 2862: [DSP] Invalid Tx Power level cfg : %ddBm
Line 2883: [DSP] Modem Status: % d  RF available: %d
Line 2888: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PMAX(LimitPmaxCmd)
Line 2892: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PMAX(LimitPmaxCmd)
Line 2913: [DSP] IPC_ACTION_ID_PMAX: cell_group(%d), cc(%d), Max Tx Pwr Limit = %ddBm
Line 2954: [DSP] Modem Status: % d  RF available: %d
Line 2960: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_RX_SIB_TDD_CFG
Line 2964: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_RX_SIB_TDD_CFG
Line 3092: [DSP] IPC_ACTION_ID_PHY_RX_SIB_TDD_CFG [%d, %d, %d]
Line 3182: [DSP] SI is decoded, hence deactivate 4G_DRDS
Line 3187: [DSP] do nothing, because pagingrcvintr timer will be expired
Line 3201: [DSP] Modem Status: % d  RF available: %d
Line 3206: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SI_SCHED
Line 3210: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SI_SCHED
Line 3249: [DSP] IPC_ACTION_ID_SI_SCHED: cell_group(%d), withSIB1(%d),CC(%d),Sib_drx(%d)
Line 3250: [DSP] SI WindowLength[%d], Number of SI [%d], sib_drx[%d]
Line 3253: [DSP] SI valid[%d], Periodicity[%d]
Line 3282: [DSP] Modem Status: % d  RF available: %d , SKIP IPC_ACTION_ID_CONFIG_PCH
Line 3295: [DSP] PCH Config drx_T[%d], PF[%d], PO[%d], nB[%d], valid[%d], ue_state[%d]
Line 3296: [DSP] PCH Config drx_T[%d], PF[%d], PO[%d], nB[%d], valid[%d], ue_state[%d]
Line 3299: [DSP] PCH Config : gDrx_IsPagingDoneIndProcessed %d
Line 3339: [DSP] Modem Status: % d  RF available: %d , SKIP IPC_ACTION_ID_CONFIG_PCH
Line 3368: [DSP] IPC_ACTION_ID_CONFIG_PCH
Line 3370: [DSP] PCH Config drx_T[%d], PF[%d], PO[%d], nB[%d]
Line 3411: [DSP] Modem Status: % d  RF available: %d , SKIP IPC_ACTION_ID_CONFIG_SCELL_PCH
Line 3461: [DRX][SCG] current_pf(%d), current_po(%d), diffPo(%d)
Line 3475: [DRX] UpdateBigDataPMLI
Line 3495: [DSP] IPC_ACTION_ID_CONFIG_SCELL_PCH cc[%d] command[%d] drx_T[%d PF[%d] PO[%d]
Line 3553: [DSP] RF unavailable, skip HALDSP_SetRNTICmd(SI_RNTI case)
Line 3562: [DSP] No need of pending IPC_ACTION_ID_RNTI_MANAGE for SI decode, value=0x%x
Line 3570: [DSP] Command PENDING:[%d]IPC_ACTION_ID_RNTI_MANAGE
Line 3574: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_RNTI_MANAGE
Line 3580: [DSP] SI is completely decoded, deactivate 4G_DRDS, set eDV_pend_SIRNTI = TRUE
Line 3634: [DSP] No need of pending IPC_ACTION_ID_RNTI_MANAGE for SI decode, value=0x%x
Line 3667: [FEDV] cell_group should be 1
Line 3670: [DRX] Extend gL1LC_DrdsAbnormalCheckTmr + 100ms for SCG SIB DRX
Line 3676: [DSP] IPC_ACTION_ID_RNTI_MANAGE: cell_group(%d), RNTI[%d] = 0x%04X
Line 3716: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SCELL_RNTI_MANAGE
Line 3720: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SCELL_RNTI_MANAGE
Line 3753: [DSP] IPC_ACTION_ID_SCELL_RNTI_MANAGE: CC[%d] RNTI[%d] = 0x%04X
Line 3871: During 4G_DRDS ativated, state can't be changed
Line 3872: IsRfAvailable is changed to FALSE!! DisablePagingRcvIntr
Line 3884: [DSP] Modem Status: % d, RF available: %d
Line 3890: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MAC_MAIN_CFG
Line 3894: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MAC_MAIN_CFG
Line 3972: [DSP] Max HARQ TX Nun(%d), SPS C-RNTI(0x%x), TTI bundling(%d)
Line 3975: [DSP] sr_ProhibitTimer(%d)
Line 3978: [DSP] sCellDeactivationTimer(%d)
Line 3999: [DSP] pPRACHCfg(%d):(rs:%d)(Config:%d)(hs_f:%d)(zcor:%d)(fo:%d)
Line 4000: [DSP] pPRACHCfg(init_p:%d)(p_step:%d)(delta:%d)
Line 4005: pHARQCfg(%d) cr_timer(%d)
Line 4030: [DSP] IPC_ACTION_ID_MAC_MAIN_CFG: cell_group(%d)
Line 4075: [DSP] Modem Status: % d
Line 4081: [DSP] Command PENDING:[%d]IPC_ACTION_ID_DRX_CONFIG
Line 4085: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_DRX_CONFIG
Line 4093: [DSP] RF unavailable, IPC_ACTION_ID_DRX_CONFIG
Line 4112: [DSP] ConnDrx On: on_dur(%d) inact(%d) retx(%d) long cycle(%d) offset(%d)
Line 4125: [DSP] Short drx On: short cycle(%d) timer(%d)
Line 4140: [DSP] skip_IAT (%d)
Line 4150: [DSP] skip_Paging (%d)
Line 4155: [DSP] ConnDrx Off
Line 4170: [DSP] IPC_ACTION_ID_DRX_CONFIG: cell_group(%d)
Line 4231: [DSP] Modem Status: % d  RF available: %d
Line 4236: [DSP] Command PENDING:[%d]IPC_ACTION_ID_M3_GRANT
Line 4240: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_M3_GRANT
Line 4257: [DSP] IPC_ACTION_ID_M3_GRANT [RAR TTI:%d]
Line 4260: [DSP] M3_GRANT : hop_flag[%d], rb_asn[%d], trun_mcs[%d], tpc[%d], ul_delay[%d], cqi_req[%d], temp_crnti[%X]
Line 4301: [DSP] Modem Status: % d, RF available: %d
Line 4307: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBSFN_SF_ASSIGN
Line 4311: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBSFN_SF_ASSIGN
Line 4317: [DSP] SFA pt0(0x%x) pt1(0x%x) pt2(0x%x) pt3(0x%x) 
Line 4318: [DSP] SFA  pt4 (0x%x) pt5(0x%x) pt6(0x%x) pt7(0x%x)
Line 4320: [DSP] SFA pt8(0x%x) pt9(0x%x) pt10(0x%x) pt11(0x%x) 
Line 4321: [DSP] SFA pt12(0x%x) pt13(0x%x) pt14(0x%x) pt15(0x%x)
Line 4334: [DSP] IPC_ACTION_ID_MBSFN_SF_ASSIGN
Line 4373: [DSP] Modem Status: % d, RF available: %d
Line 4379: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_MCCH_SCHED
Line 4383: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_MCCH_SCHED
Line 4392: [DSP] IPC_ACTION_ID_MBMS_MCCH_SCHED
Line 4429: [DSP]Modem/Rf Status: % d, RF available: %d
Line 4435: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_NOTIFICATION_CONFIG
Line 4439: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_NOTIFICATION_CONFIG
Line 4448: [DSP] IPC_ACTION_ID_MBMS_NOTIFICATION_CONFIG
Line 4485: [DSP] Modem Status: % d, RF available: %d
Line 4490: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_AREA_SCHED
Line 4494: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_AREA_SCHED
Line 4503: [DSP] IPC_ACTION_ID_MBMS_AREA_SCHED
Line 4541: [DSP] Modem Status: % d, RF available: %d
Line 4546: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_PMCH_SCHED
Line 4550: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_PMCH_SCHED
Line 4568: [DSP] IPC_ACTION_ID_MBMS_PMCH_SCHED: %d, %d, %d, %d, %d, %d, %d
Line 4605: [DSP] Modem Status: % d, RF available: %d
Line 4610: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_MSI_SCHED
Line 4614: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_MSI_SCHED
Line 4623: [DSP] IPC_ACTION_ID_MBMS_MSI_SCHED
Line 4651: [DSP] Modem Status: % d, RF available: %d
Line 4656: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_MCCH_SCHED
Line 4660: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_MCCH_SCHED
Line 4683: [DSP] IPC_ACTION_ID_MBMS_MCCH_SCHED
Line 4689: [DSP] RestoreMbmsMcchSched: Addr(0x%x), SF CC[%d]:PT0(%x)
Line 4690: [DSP] n_MCCH[%d] n_AreaSched[%d] n_PMCH[%d] n_Msi[%d]
Line 4730: [DSP] Modem Status: % d, RF available: %d
Line 4736: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBSFN_CONFIG
Line 4740: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBSFN_CONFIG
Line 4748: [DSP] num_mbsfn_cfg >= LTE_RRC_MAX_MBSFN_CONFIG (%d)
Line 4768: [DSP] IPC_ACTION_ID_MBSFN_CONFIG
Line 4803: [DSP] Modem Status: % d, RF available: %d
Line 4808: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PRS_INFO_INIT
Line 4812: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PRS_INFO_INIT
Line 4821: [DSP] IPC_ACTION_ID_PRS_INFO_INIT
Line 4930: [DSP] Modem Status: % d, RF available: %d
Line 4944: [DSP] SetPATHLOSS: cc(%d), value(%d)
Line 4971: [DSP] HALDSP_SetRPDetect: slam_en(%d), time_diff(%d)
Line 5024: [DSP] Modem Status: % d, RF available: %d
Line 5037: [DSP] Command PENDING:[%d]IPC_ACTION_ID_TA_TIMER
Line 5041: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_TA_TIMER
Line 5063: [DSP] IPC_ACTION_ID_TA_TIMER [cell_group : %d][state : %d][CCs_bitmap: %d][input_CCs_bitmap: %d]
Line 5115: [DSP] Modem Status: % d, RF available: %d
Line 5120: [DSP] Command PENDING:[%d]IPC_ACTION_ID_HO_TSFN
Line 5124: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_HO_TSFN
Line 5146: [DSP] IPC_ACTION_ID_HO_TSFN: cell_group(%d), ho_tsfn.tsfn = 0
Line 5152: [DSP] IPC_ACTION_ID_HO_TSFN: cell_group(%d), ho_tsfn.tsfn = 1
Line 5184: [DSP]Modem/Rf Status: % d, RF available: %d
Line 5190: [DSP] Command PENDING:[%d]IPC_ACTION_ID_RLF_SIGNAL
Line 5194: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_RLF_SIGNAL
Line 5208: [DSP] IPC_ACTION_ID_RLF_SIGNAL: cell_group(%d)
Line 5261: [DSP] Modem Status: % d, RF available: %d
Line 5267: [DSP] Command PENDING:[%d]IPC_ACTION_ID_TA_AD
Line 5271: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_TA_AD
Line 5298: [DSP] IPC_ACTION_ID_TA_AD [TA : %d](mode:%d)(CCs_bitmap: %d)(input_CCs_bitmap: %d)
Line 5701: (HAL)SCELL cqi_report_config_v1310_setup:%d, cqi_report_aperiodic_v1310_setup:%d
Line 5716: [DSP](C) Pucch_r13 copyng .r10_valid:%d, format3 setup:%d
Line 5868: [DSP]Pucch_r13 spatial bundling : % d,r13 valid : %d format3 setup: %d, codebook_size_determination_r13_setup: %d, max_payload_coderate_r13_setup: %d
Line 5891: [DSP]Pucch_v1370  dsp_pucch_v1370->valid = %d
Line 5896: hal_tx : dsp_pucch_v1370->valid = %d
Line 6158: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 6161: [DSP] SKIP IPC_ACTION_ID_SCELL_TX_CONFIG
Line 6169: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SCELL_TX_CONFIG
Line 6173: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SCELL_TX_CONFIG
Line 6203: ScellTx Index [%d] is Invalid
Line 6227: [DSP] IPC_ACTION_ID_SCELL_TX_CONFIG: cell_group(%d), Cmd[%d]
Line 6248: HALDSP_GetActivatedCCfromMACCE:  *max_layers_mimo(%d)
Line 6301: HALDSP_GetActivatedCCfromMACCE >> ActivatedCC(%d) DlMaxLayer(%d)
Line 6335: HALDSP_GetActivatedCCfromHal >> ActivatedCC(%d)
Line 6689: [ERROR] HALDSP_SetDLScellConfig_Epdcch_r11: index3 is reaching max limit (index3 (%d) > %d)
Line 6931: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 6934: [DSP] SKIP IPC_ACTION_ID_SCELL_RX_CONFIG
Line 6942: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SCELL_RX_CONFIG
Line 6946: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SCELL_RX_CONFIG
Line 7055: [DSP] IPC_ACTION_ID_SCELL_RX_CONFIG: cell_group(%d), Cmd[%d]
Line 7092: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 7098: [DSP] Command SKIP: IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_PCELL
Line 7107: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_PCELL
Line 7111: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_PCELL
Line 7147: [DSP] IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_PCELL: Type[%d]
Line 7186: [DSP] Modem Status: % d, RF available: %d 
Line 7191: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_NEIGH
Line 7195: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_NEIGH
Line 7229: [DSP] IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_NEIGH: Type[%x]
Line 7293: [DSP][NonSig] HALDSP_GetMaxLayersMimo %d for CC index %d
Line 7418: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 7423: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_DEDI_UL_SRS
Line 7427: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_DEDI_UL_SRS
Line 7465: [DSP] IPC_ACTION_ID_PHY_DEDI_UL_SRS: cell_group(%d)
Line 7636: [DSP](C) Pucch_r10 copyng .r10_valid:%d, format3 setup:%d
Line 7693: [DSP](C) Pucch_r10 invalid .
Line 7966: [DSP](C) Pucch_r13 copying .r10_valid:%d, format3 setup:%d
Line 7992: [DSP](C) pucch_format3_setup:%d, list_cnt:%d
Line 8018: [DSP](C) pucch_an_cs_setup:%d, list_cnt:%d
Line 8037: [DSP](C) pucch_an_cs_setup:%d, list_cnt:%d
Line 8056: [DSP](C) pucch_an_cs_setup:%d, list_cnt:%d
Line 8126: [DSP]Pucch_r13 spatial bundling : % d,r13 valid : %d format3 setup: %d, codebook_size_determination_r13_setup: %d, max_payload_coderate_r13_setup: %d
Line 8150: [DSP]Pucch_v1370  dsp_pucch_v1370->valid = %d
Line 8155: hal_tx : dsp_pucch_v1370->valid = %d
Line 8353: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 8358: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_CONFIGURE
Line 8362: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_CONFIGURE
Line 8390: [SADS] Skip IPC_ACTION_ID_PHY_CONFIGURE due to IDLE state
Line 8438: [DSP][DEBUG] IPC_ACTION_ID_PHY_CONFIGURE: MIMOsetup(%d), maxLayer(%d)
Line 8453: [DSP] IPC_ACTION_ID_PHY_CONFIGURE: cell_group(%d)
Line 8515: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 8520: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_DEDI_CQI
Line 8524: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_DEDI_CQI
Line 8570: [DSP] IPC_ACTION_ID_PHY_DEDI_CQI: cell_group(%d)
Line 8631: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 8636: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_DEDI_UL_SR
Line 8640: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_DEDI_UL_SR
Line 8651: [DSP] DSR_Config.valid(TRUE), DSR_PUCCH_ResourceIndex(%d), DSR_Configuration_Index(%d), DSR_Trans_max(%d)
Line 8675: [DSP] IPC_ACTION_ID_PHY_DEDI_UL_SR: cell_group(%d)
Line 8774: [SADS] Skip IPC_ACTION_ID_PHY_SIB due to IDLE state
Line 8784: [DSP] Modem Status: % d, RF available: %d, SKIP IPC_ACTION_ID_PHY_SIB
Line 8796: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_SIB
Line 8800: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_SIB
Line 8810: [DSP] RF unavailable, IPC_ACTION_ID_PHY_SIB
Line 8985: [DSP] IPC_ACTION_ID_PHY_SIB: cell_group(%d)
Line 9031: [DSP] Modem Status: % d, RF available: %d, SKIP IPC_ACTION_ID_PHY_RX_SIB_PDSCH 
Line 9043: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_RX_SIB_PDSCH
Line 9047: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_RX_SIB_PDSCH
Line 9076: [DSP] RF unavailable, IPC_ACTION_ID_PHY_RX_SIB_PDSCH
Line 9105: [DSP] IPC_ACTION_ID_PHY_RX_SIB_PDSCH: cell_group(%d)
Line 9412: [ERROR - 1] HALDSP_SetDlDediConfig_csi_rs_r11: index is reaching max limit (index (%d) > %d)
Line 9422: [ERROR - 2] HALDSP_SetDlDediConfig_csi_rs_r11: index is reaching max limit (index (%d) > %d)
Line 9715: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 9721: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_RX_CONFIG
Line 9725: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_RX_CONFIG
Line 9779: [DSP] IPC_ACTION_ID_PHY_RX_CONFIG: cell_group(%d)
Line 9841: [DSP] Modem Status: % d, RF available: %d 
Line 9847: [DSP] Don't restore pending event during GAP
Line 9851: [DSP] SetRestorePendingEvent(num:%d)
Line 9999: [DSP] 1ms delay for DSP scheduling
Line 10004: [DSP] 1ms delay for DSP scheduling
Line 10100: [DSP] Invalid PendingEvent
Line 10135: [DSP] GetHWVersion: gDrx_ActiveRat(%d)
Line 10153: [DSP] IPC_ACTION_ID_HW_VERSION
Line 10183: [DSP] GetULFrequency: gDrx_ActiveRat(%d)
Line 10225: [DSP] IPC_ACTION_ID_RF_FREQ: CC(%d), ul_freq(%dMhz)
Line 10300: [DSP] power : wrong state(%d), Ready(0x%x)
Line 10302: [DSP] power : HALDSP_SetPowerReady(0x%x)
Line 10383: [DSP] IPC_ACTION_ID_LTE_DSP_INIT Reset N2L Flag if its set
Line 10422: [DSP] IPC_ACTION_ID_LTE_DSP_INIT(%d) WakeupInitType(%d)
Line 10431: Check PowerOnModemSub status ActivePS0 0x%x, OwnerMaskPS0 0x%x
Line 10514: [DSP] IPC_ACTION_ID_LTE_DSP_MEAS_INIT: cc(%d), div_cc(%d), td_buf_idx(%x) td_buf_idx_div(%x), td_buf_size(%d), n2l_Flag(%d)
Line 10520: [DSP] IPC_ACTION_ID_LTE_DSP_MEAS_INIT(%d)
Line 10555: [DSP] IPC_ACTION_ID_LTE_RELEASE_DONE for N2L Measure >> Full release
Line 10562: [SADS] Set Prev Rat to NR
Line 10570: [DSP] IPC_ACTION_ID_LTE_RELEASE_DONE for L2N cell timing HO >> partial release
Line 10605: [DSP] IPC_ACTION_ID_LTE_RELEASE_DONE. WakeupInitType(%d) releaseType(%d)
Line 10639: [DSP] DSP RELEASE DONE. Check LVD status.
Line 10691: [4G_DRDS] restore Dynamic QS (4G_DRDS deact)
Line 10698: [4G_DRDS] RF_Update_DR_Band_info(clear)
Line 10715: [DSP] SetActiveRatInfo: rat(%d)
Line 10735: [DSP] IPC_ACTION_ID_SUBCORE_CTRL_IND(%d) 
Line 10773: GetSleepTime Invalid UeState
Line 10920: GetSleepTime_SCG Invalid UeState
Line 10999: [DSP] GetConnSleepSCT(SCT:%d)
Line 11018: [DSP] SetConnSleepSCT(SCT:%d)
Line 11045: [DSP] Modem Status: % d, RF available: %d
Line 11046: [DSP] IPC_ACTION_ID_RELEASE Pending(gHALSC_IdleGapOnGoing(%d))
Line 11051: [DSP] Command PENDING:[%d]IPC_ACTION_ID_RELEASE
Line 11055: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_RELEASE
Line 11085: Skip Sending IPC_ACTION_ID_RELEASE(RF not available)
Line 11094: [DSP] IPC_ACTION_ID_RELEASE
Line 11134: [DSP] Modem Status: % d, RF available: %d
Line 11135: [DSP] IPC_ACTION_ID_RESET Pending(gHALSC_IdleGapOnGoing(%d),gapstartremaintime:%d)
Line 11153: [DSP] Command PENDING:[%d]IPC_ACTION_ID_RESET
Line 11157: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_RESET
Line 11184: [DSP] IPC_ACTION_ID_RESET: cell_group(%d), cause(%d)
Line 11218: [DSP] Modem Status: % d, RF available: %d
Line 11224: DSP Command PENDING:[%d]IPC_ACTION_ID_SCELL_SRS_RELEASE
Line 11228: DSP Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SCELL_SRS_RELEASE
Line 11242: [DSP] IPC_ACTION_ID_SCELL_SRS_RELEASE: cell_group(%d), carrier_bitmap(%x)
Line 11294: [DSP] Modem Status: % d, RF available: %d
Line 11307: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PUCCH_SRS_CQI_RELEASE
Line 11311: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PUCCH_SRS_CQI_RELEASE
Line 11343: [DSP] IPC_ACTION_ID_PUCCH_SRS_CQI_RELEASE: cell_group(%d)
Line 11375: [DSP] Modem Status: % d, RF available: %d
Line 11380: [DSP] Command PENDING:[%d]IPC_ACTION_ID_LOOPBACK_CONTROL
Line 11384: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_LOOPBACK_CONTROL
Line 11394: [DSP] IPC_ACTION_ID_LOOPBACK_CONTROL
Line 11421: [DSP] Modem Status: % d, RF available: %d
Line 11426: [DSP] Command PENDING:[%d]IPC_ACTION_ID_ULSPS_IMPLICIT_RELEASE
Line 11430: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_ULSPS_IMPLICIT_RELEASE
Line 11438: [DSP] IPC_ACTION_ID_ULSPS_IMPLICIT_RELEASE
Line 11533: [DSP] IPC_ACTION_ID_SI_UPDATE: cell_group[SCG], cc(%d), td_buf_idx(%d), td_buf_idx_div(%d), pathMap.size(%d) 
Line 11548: [DSP] IPC_ACTION_ID_RELEASE(%d)
Line 11590: [DSP] RF unavailable
Line 11595: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SCELL_ACT_DEACT
Line 11599: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SCELL_ACT_DEACT
Line 11639: [DSP] IPC_ACTION_ID_SCELL_ACT_DEACT: Case detection for SCC move
Line 11649: [DSP] IPC_ACTION_ID_SCELL_ACT_DEACT: cc(%d), td_buf_idx(%x) td_buf_idx_div(%x), td_buf_size(%d)
Line 11663: [DSP] IPC_ACTION_ID_SCELL_ACT_DEACT: cc(%d) cmd(%d), earfcn(%d), tti(%d)
Line 11667: [DSP] IPC_ACTION_ID_SCELL_ACT_DEACT: Send TDP config for CC(%d), demodCC(%d) after act/deact(%d)
Line 11678: [DSP] IPC_ACTION_ID_SCELL_ACT_DEACT: Invalid CMD
Line 11704: [DSP] IPC_ACTION_ID_SCELL_ONOFF: cc(%d), cmd(%d), earfcn(%d)
Line 11875: [DSP] Modem Status: % d, RF available: %d, SKIP IPC_ACTION_ID_ACTIVATE_EICIC
Line 11900: [DSP] IPC_ACTION_ID_ACTIVATE_EICIC: mode(%d), num(%d, %d)
Line 11960: [QS_DEBUG] wait_cnt(%d), HALDSP_GetQsOffReady(0x%x)
Line 11962: [QS_DEBUG] HALDSP_GetQsOffReady(0x%x)
Line 12012: [DSP] HALDSP_SetInactivityStatus(skip), RF unavailable
Line 12024: [DSP] IPC_ACTION_ID_QSLEEP_CONTROL: dynamicDisable(%d) gVolteStatus(%d) scellBitmap(0x%x)
Line 12050: [DSP] QSleepStatus (%d -> %d)[%d, %d]
Line 12108: [DSP] HALDSP_SetDynamicQsDisable(QS disabled with registry), skip sending IPC 
Line 12117: [DSP] HALDSP_SetDynamicQsDisable(skip): TdpState(%d)
Line 12132: [DSP] HALDSP_SetDynamicQsDisable(skip):SCG(eDV_Active(%d))
Line 12169: [DSP] HALDSP_SetDynamicQsDisable(%d -> %d) scell_start(%d) scell_status(%d)
Line 12193: funcName = %s, QS Disable(%d us delay) for scell_start(%d)
Line 12228: [FEDV] cell_group should be 1
Line 12237: [DSP] IPC_ACTION_ID_REDEMAP_CONTROL: cc(%d), cmd(%d)
Line 12279: [DSP] Modem Status: % d, RF available: %d
Line 12280: [DSP] Skip sending IPC: IPC_ACTION_ID_TDP_CONFIG
Line 12352: [DSP] IPC_ACTION_ID_TDP_CONFIG - Ca_Act(%d), Cc_Idx(%d)
Line 12369: [DSP] IPC_ACTION_ID_TDP_CONFIG: cell_group(%d)
Line 12373: [DSP] IPC_ACTION_ID_TDP_CONFIG: cc(%d), tdp_enable(%06x), lastTdpConfig(%06x)
Line 12374: [DSP] IPC_ACTION_ID_TDP_CONFIG: cc(%d), tdp_enable(%06x), lastTdpConfig(%06x)
Line 12411: [DSP] Modem Status: % d, RF available: %d
Line 12416: [DSP] Command PENDING:[%d]IPC_ACTION_ID_TIMING_UPDATE
Line 12420: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_TIMING_UPDATE
Line 12433: [DSP] IPC_ACTION_ID_TIMING_UPDATE: cc(%d), cp(%d), time_diff(%d)
Line 12464: [DSP] Modem Status: %d
Line 12481: [DSP] RF unavailable
Line 12487: [DSP] Command PENDING:[%d]IPC_ACTION_ID_CQI_INT_CONTROL: on(%d)
Line 12491: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_CQI_INT_CONTROL: on(%d)
Line 12509: [DSP] IPC_ACTION_ID_CQI_INT_CONTROL: on(%d)
Line 12534: [DSP] Modem Status: % d, RF available: %d, SKIP IPC_ACTION_ID_WAKEUP_DRX
Line 12543: [DSP] IPC_ACTION_ID_WAKEUP_DRX, han_ta_acc[0](%d)
Line 12568: [DSP] Modem Status: % d, RF available: %d
Line 12573: [DSP] Command PENDING:[%d]IPC_ACTION_ID_TXBACKUP_DRX
Line 12577: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_TXBACKUP_DRX
Line 12584: [DSP] IPC_ACTION_ID_TXBACKUP_DRX
Line 12740: [DSP][DEBUG] GetMeasResult: NOT SAME!! gHal_DrsPositionIdx(%d), max_idx(%d)
Line 12833: [HALDSP_GetSinr] cc index(%d), sinr0 %d, sinr1 %d
Line 12978: [DSP] SetRsrpValue(CC%d): srv(%d,%d), nbr(%d)
Line 13103: [DSP] DRDS ongoing and McgStack. not return here.
Line 13107: [DSP] BASE case. not return here
Line 13111: [DSP] ongoing to sleep case. not return here
Line 13115: [DSP] Check UeState(%d)
Line 13129: CPU CLK change to QOS_LTE_L1_HALDSP_SCELL_FEDV
Line 13134: CPU clk, MIF clk unlock. To base
Line 13151: [DSP] SCellActDeactClkChange: ActivatedCC(%d -> %d), DlMaxLayer(%d -> %d)
Line 13172: [Debug] Thermal Restriction Debug: Restriction: %d, Level: %d OneByOne: %d OneByOneCount: %d ThCpuDvfs_nv: %d
Line 13178: [DSP] Thermal Restriction for CQI-0 is ON, decrease CPU and MIF frequency one level down
Line 13184: [DSP] SCellActDeactClkChangeReq DlMaxLayer(%d), ActivatedCC(%d)
Line 13565: [DSP] RX mode enabling status Change for ST%d (%d -> %d)
Line 14068: [DSP] ConfigurePhyTest
Line 14099: [DSP] Modem Status: % d  RF available: %d
Line 14105: [DSP] Command PENDING:[%d]IPC_ACTION_ID_CQI_LIMIT
Line 14109: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_CQI_LIMIT
Line 14128: [DSP] IPC_ACTION_ID_CQI_LIMIT: cell_group(%d)
Line 14145: HALDSP_Set_LT12, Start [%d] Timer
Line 14175: [DSP] IPC_ACTION_ID_LTE_BLK_ENABLE
Line 14197: [DSP] IPC_ACTION_ID_LTE_BLK_RELEASE(%d)
Line 14256: DSP_RELEASE(%d, %d)
Line 14259: [4G_DRDS] IsDuringScellConfig (%d)
Line 14268: HALDSP_SetDSPInitRelease: [DSDS]Do not release DSP again as it is already released
Line 14273: DSP_INIT
Line 14305: [DSP] IPC_ACTION_ID_REDUCED_MODE_IND(0x%x) 
Line 14338: [DSP] Skip IPC_ACTION_ID_LTE_DSP_UL_INIT
Line 14344: [DSP] IPC_ACTION_ID_LTE_DSP_UL_INIT
Line 14366: [DSP] Skip IPC_ACTION_ID_LTE_DSP_UL_RELEASE >> gDrx_ActiveRat (%d)
Line 14372: [DSP] IPC_ACTION_ID_LTE_DSP_UL_RELEASE
Line 14412: [4RxD] HALDSP_Set4RxEnable: MTM running... so skip!!!
Line 14488: [DSP] Set4RxEnable: enable(%d), thres(%d,%d,%d), hys(%d,%d)
Line 14496: [DSP] Set4RxEnable: Mid enable(%d), thres(%d,%d,%d,%d)
Line 14506: [DSP] Set4RxEnable: DCI rate(%d,%d,%d,%d), DCR period(%d), Monitor thres(%d, %d)
Line 14528: [DSP] Set4RxEnable: Agg4Rx thres(%d,%d,%d,%d)
Line 14538: [DSP] Set4RxEnable: Agg4Rx DCI rate(%d,%d,%d,%d,%d,%d)
Line 14546: [DSP] Set4RxEnable: cc(%d), enable(%d), bitmap(%x), 4Rx_RB_SIZE(%d)
Line 14600: [DSP] HALDSP_Set4RxEnableBitmap: cc(%d), demod_cc(%d), enable(%d), bitmap(%x)
Line 14634: TxBlindSwitchEnabled on B%d
Line 14668: TxBlindSwitch Sfns to Wait:%d, Last TxBlindSwitchSfn:%d numSfnFromLastMeas:%d PRx_RSRP:%d MTPL(%d)Reached(%d)
Line 14702: TxBlindSwitchSfn:%d, AsStatus:%d
Line 14750: TxBlindSwitch preRSRP(%d) C[preANT%d][TX](%d) preMTPL(%d), postRSRP(%d) C[postANT%d][RX](%d) postMTPL(%d)
Line 14821: TxBlindSwitch Diff_D_Algo(%d) H[ANT_preswitch](%d) BlindSwitchBlockPeriod(%d), Blocked for %d Sfns (AsStatus:%d)
Line 14865: TxAntPeriodic Switch Enabled
Line 15281: [AS] SetAsEnable: Fixed rx_mode (0x%X) and AS TEST RxMode (NO), Disable AS
Line 15293: [AS] SetAsEnable: MTM mode. Disable AS
Line 15306: [AS] SetAsEnable: mcc(0x%x) Disable AS
Line 15314: [AS] SetAsEnable: TxPeriodicSwitch Enabled, Disable AS (%d)
Line 15322: [AS] SetAsEnable: UE state(%d)/gRACHflag(%d) not AS enabled state. Disable AS
Line 15329: [AS] SetAsEnable: TxBlindSwitchEnabled, Disable AS (%d)
Line 15407: [AS] SetAntSwStop: Return with TAS_Enb(%d -> %d) due to gHal_AsStatus(%d)
Line 15417: [AS] Command PENDING:[%d]IPC_ACTION_ID_ANTSW_STOP
Line 15421: [AS] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_ANTSW_STOP
Line 15432: [AS][ST%d] Select TxAnt(%d -> %d): Due to IPC_ACTION_ID_ANTSW_STOP
Line 15435: [AS] IPC_ACTION_ID_ANTSW_STOP
Line 15466: [AS] HALDSP_SetAntSwControl (Changing TAS_Enb: %d -> %d)
Line 15492: [AS] HALDSP_SetAsEnableForSIT SelectedANT[%d]
Line 15511: [AS] HALDSP_SetAsEnableForSIT : RAT is Not Active , Switch will be done after RAT becomes Active
Line 15543: [AS] COMMON.TAS.ALGORITHM(DefaultASMode): [%d]
Line 15590: [AS] CA.SW_RESTICT_TABLE[%d]: FixedAnt[%d] /Reg_NumCaBand[%d]
Line 15596: [AS] Check RegCaBand[%d] = %d in CA.SW_RESTICT_TABLE[%d]
Line 15600: [AS] CA.SW_RESTICT_TABLE[%d]: FixedAnt[%d] is not allowed: skip the current row of the table
Line 15610: [AS] MATCH(%d): RegCaBand[%d] = LteBandList[%d] in CA.SW_RESTICT_TABLE
Line 15618: [AS] Reg_NumCaBand[%d] == num_matchedCA[%d]: Follow CA.SW_RESTICT_TABLE[%d]: AS to FIXED_ANT[%d]
Line 15676: [AS][ST%d] HALDSP_GetPhysicalAntNum: NumRegAntConfigTable(%d), Band(%d/BG:%d), TxPathType(%d, 0:MAIN/1:SUB,2:INVALID)
Line 15682: [AS] HALDSP_GetPhysicalAntNum: ant_config_table_idx(%d), BandInfo(%d), IsSubAnt(%d), AntNum(%d %d %d %d)
Line 15707: [AS][ST%d] HALDSP_GetPhysicalAntNum: BandIndex(%d) PhysicalAntNum(%d)
Line 15745: [AS] Current Band and BandGroup: LTE[%d/%d] / NR[%d/%d]
Line 15758: [AS] No more element in COMMON.TAS.ENDC_RESTICT_TABLE[%d] -> No TX AS Restriction for ENDC
Line 15763: [AS] ENDC.SW_RESTICT_TABLE[%d]: RegLteInfo[%d] AntSelection_LTE[%d] / RegNrInfo[%d] AntSelection_NR[%d]
Line 15769: [AS] LTE[%d/B%d/BG%d] / NR[%d/N%d/NG%d] MATCHED!! LteTxAnt(%d)
Line 15773: [AS] Follow SW Restriction for LteTxAnt(%d) in ENDC_RESTICT_TABLE
Line 15778: [AS] LteTxAnt(%d) is Default! No Restriction on LTE TX Ant(Current:%d)
Line 15787: [AS] LTE[%d/%d/%d] / NR[%d/%d/%d] NOT MATCHED!! Try Next one(%d)
Line 15820: [AS] OpenCloseMode For ASINFO(%d)
Line 15860: [AS] ASINFO1 values updated OpenCloseMode(%d)
Line 15899: [AS] ENDCLteBandList[%d]
Line 15914: [AS] NumLTEBand[%d] NumNrBand[%d]
Line 15930: [AS] ConfiguredENDCASInfo1(0x%x)(0x%x) after rsi(0x%x)(0x%x) shift in hex 
Line 15941: [AS] ENDC index after conditional check(%d) 
Line 15951: [AS] ENDC index after conditional check when RegENDCRsi is 0xFF(%d) 
Line 15992: [AS] LteCABand[%d] 
Line 16000: [AS] ConfiguredLteCaAsInfo1[%lld] 
Line 16009: [AS] ConfiguredLteCaAsInfo1(0x%x)(0x%x) after rsi(0x%x)(0x%x) shift in hex 
Line 16019: [AS] RegCaRsi(%d) 
Line 16029: [AS] RSI dont care , RegCaRsi(%d)
Line 16165: [AS] HALDSP_CheckAsOption: AsRestrictionForCA(%d) / AsMode(%d) / AsInfo.ASAlgo(%d)
Line 16178: [AS] HALDSP_CheckAsOption: AsRestrictionForENDC(%d): AS and send 4GInfo / gSendAsInfoToENDC(%d), AsMode(%d), AsInfo.ASAlgo(%d)
Line 16187: [AS] HALDSP_CheckAsOption: AsRestrictionForENDC(%d): Send 4GInfo then AS / gSendAsInfoToENDC(%d)
Line 16193: [AS] HALDSP_CheckAsOption: ENDC's not configured: AS without restriction / gSendAsInfoToENDC(%d)
Line 16199: [AS] DefaultAsOption(%d)>D_ALGO: AS_MODE_FIXED_ANT -> Not required to decide AS parameters
Line 16226: [AS] TasTableIndex(%d)
Line 16235: [AS] Use C and H vectors for CA
Line 16252: [AS] Use C and H vectors for ENDC
Line 16268: [AS] Use C and H vectors for SA 
Line 16321: [AS] Error! Invalid AsAlgorithm(%d) in !LTEL1.ASINFO1 -> Check the NV again
Line 16352: [AS] D_ALGO TAS INFO: H_V[0]=(%d), H_V[1]=(%d), C_V[0][0]=(%d), C_V[0][1]=(%d), C_V[1][0]=(%d), C_V[1][1]=(%d)
Line 16355: [AS] HALDSP_CheckAsOption: AsMode(%d) / AsInfo.ASAlgo(%d)
Line 16520: [AS] SetAsEnable: Immediate switch is not done. Switch will done later 
Line 16532: [AS] SetAsEnable(by FixedAntMode(%d)): Fixed Antenna Mode (%d) / gHal_AsStatus(%d)
Line 16547: [AS] RFAPI_ChangeAntennaSwitch to Fixed Antenna(%d) was failed!
Line 16565: [AS] SetAsEnable: Invalid AS setting!! (AsOption(%d)/AsInfo.ASAlgo(%d))
Line 16571: [AS] SetAsEnable: Immediate switch is not done. Switch will done later 
Line 16576: [AS] SetAsEnable(by AsOption(%d)): Fixed Antenna Mode (%d) / gHal_AsStatus(%d)
Line 16596: [AS] RFAPI_ChangeAntennaSwitch to Fixed Antenna(%d) was failed!
Line 16615: [AS] SetAsEnable: Immediate switch is not done. Switch will done later 
Line 16618: [AS] SetAsEnable: Fixed Antenna Mode (%d) by gHal_AntennaConfig
Line 16636: [AS] RFAPI_ChangeAntennaSwitch to Fixed Antenna(%d) was failed!
Line 16648: [AS] SetAsEnable: Not support AS (Band:%d, AsMode(%d) or AsSupportByRF(%d) is 0)
Line 16660: [AS] SetAsEnable: AS Test Mode OFF for current band (%d)
Line 16667: [AS] SetAsEnable: TestMode ON (Band:%d, Operation:%d)
Line 16671: [AS] SetAsEnable: TX ANT switch Test Operation Mode(%d)
Line 16737: [AS] SetAsEnable: TPC Max Time(%d), RxCal RSRP offset(%d %d %d %d) HardSW(Enb/time)(%d,%d)
Line 16747: [AS] SetAsEnable: AS Period(%d) RSRP Threshold(%d %d), Tx Power Threshold(%d %d), RSRP Offset(%d %d)
Line 16776: [AS] DPDT: Antenna(%d) TRP(%d), TIS(%d)
Line 16780: [AS] DPDT: Main_RxRsrpOffset(%d), Sub_RxRsrpOffset(%d)
Line 16853: [AS] SetAsEnable: Enabled, AsMode(%d)
Line 16883: [AS] H and C values: C[TX]: %d %d, C[RX]: %d %d, H: %d %d
Line 16891: [AS] SetAsEnable: Disabled
Line 16912: [AS] SetAsEnable: State is not changed (%d)
Line 16945: [AS] HALDSP_SetAsEnable_EXP: Proximity Backoff Enabled
Line 16953: [AS] HALDSP_SetAsEnable_EXP: Proximity detected -> No change AS
Line 16958: [AS] HALDSP_SetAsEnable_EXP: No Proximity detected -> Enable AS
Line 17032: [AS] HALDSP_GetCurrentAsStatus (%d)
Line 17051: [AS] Don't HALDSP_SetPmaxLimitCmd_AS in case of FEATURE_SAR_MTPL
Line 17199: [B8B7] Command PENDING:[%d]IPC_ACTION_ID_PMAX
Line 17203: [B8B7] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PMAX
Line 17209: [B8B7] HALDSP_SetPmaxLimitCmd_AS: Switch Status(%d), Max Power(%d)
Line 17215: [B8B7] IPC_ACTION_ID_PMAX: cell_group(%d), maxPower(%d)
Line 17240: [CL-AIT] HALDSP_GetClAitEnable: status (%d)
Line 17314: [CL-AIT] SetAitEnable: Not supported RF band
Line 17319: [CL-AIT] SetAitEnable: Disabled under ENDC operation
Line 17325: [CL-AIT] SetAitEnable: Disabled due to AitEn2 and no VoLTE
Line 17331: [CL-AIT] SetAitEnable: Disabled under CA configuration
Line 17380: [CL-AIT] AitEnable(%d) but Setting OL-AIT due to RFAPI_AIT_GET_OLCL_Flag(%d)(0:CL/1:OL)
Line 17386: [CL-AIT] AitEnable(%d),  but Setting OL-AIT due to ClaitNewFeature(%d)
Line 17408: [CL-AIT] Trigger OL-AIT tunecode: cause(%s)
Line 17433: [CL-AIT] SetAitEnable: enable(%d -> %d)
Line 17536: [CL-AIT] SetAitMipiWord: x_gnd_ctrl_type(%d), xgnd(0x%x, 0x%x, 0x%x)
Line 17572: [TxTime] power_index(%d %d %d %d %d)
Line 17733: [DSP] IPC_ACTION_ID_SET_DMXR_FREQ_INIT: ul_slo(%d), cmd(%d), cc(%d, %d), time(%d, %d, %d)
Line 17760: [DSP] Modem Status: % d  RF available: %d
Line 17765: [DSP] Command PENDING:[%d]IPC_ACTION_ID_LTE_BLOCK_TRX_SW
Line 17769: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_LTE_BLOCK_TRX_SW
Line 17779: [DSP] IPC_ACTION_ID_BLOCK_TRX_SW (cell_group:%d)
Line 18059: [DSP] [AS] IPC_ACTION_ID_ANT_SWITCH not processed as UE is operating in fixed AS mode : (%d / %d) or TxBlindSwitch (%d) mode
Line 18190: [DSP] IpcHndlr_SWReset !!!
Line 18199: [DSP] IPC_ACTION_ID_RECOVERY_SWRESET: ID(%d), cnt(%d) !!!
Line 18222: [DSP] IPC_ACTION_ID_RECOVERY_SWRESET: cnt(%d) !!!
Line 18255: [DSP] UL SPS grant release(by PDCCH or parameter reconfiguration)
Line 18288: [DSP] UL SPS grant activated
Line 18328: [DSP] CC:%d: cmd(%d), SCellActCmd(%d) skip handling SCellActDeactCnf!
Line 18351: [DSP] Invalid cmd type (CC%d, %d)
Line 18362: [DSP] SCellActDeactCnf(CC%d): cmd(%d), SCellActCmd(%d)
Line 18407: [DSP] SlinkDeactCnf
Line 18456: [DSP] Skip IpcHndlr_RxModeReqInd due to a fixed Rx (0x%x) or TxBlindSwitch (%d) mode
Line 18478: [DSP] IpcHndlr_LteDemodRelCnf
Line 18493: HeNB SIB Decoding ACK(%d)
Line 18712: RF_DUMP received
Line 18751: ABNORMAL_PWR is detected
Line 18755: False Alram case (ABNORMAL_PWR)
Line 18796: [DSP] Don't try AIT_ProcDumpInd (Modem available:%d)
Line 18823: [DSP] Don't try AIT_ProcDumpInd in case of ENDC(%d)
Line 18829: [DSP] Don't try AIT_ProcDumpInd in case of AS Not support(%d)
Line 18840: [DSP] AIT_DumpInd: dump_state(%d),tx_ch_info(%d), tx_ch_power(%d), pusch_comp_pwr(%d)
Line 18842: [DSP] AIT_DumpInd: set1_start_rb(%d), set1_rb_size(%d), set2_start_rb(%d), set2_rb_size(%d)
Line 18845: [DSP] AIT_DumpInd: clait_indicate_config: antenna_index(%d), ClaitInfoInd(%d)
Line 18884: [DSP] COMM_DUMP: msg_id(%d), cc_idx(%d), tti_index(%d)
Line 18983: [DSP] PHYDM Error report(0x%x), data[5:0]:0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 19023: [DSP] IPC_ACTION_ID_STORE_DSPPARAM, backup_han_ta_acc[0](%d)
Line 19076: [AS] gSendAsInfoToENDC(%d): Pending SetAntSwitch(to ant%d) and waiting the tunneling msg from NR
Line 19085: [AS] gHal_PendingAntSwitchInENDC(%d): pending Antenna Switching(to ant%d) till the tunneling msg from NR
Line 19093: [AS] IpcHndlr_AntSwitch (%d)
Line 19211: [DSP] HALDSP_SetAgcGainAvg(%d): agc_gain(%d, %d), SHM(0x%x,0x%x)
Line 19252: [DSP] Demod:%d skip handling PSCellDeActCnf!
Line 19284: [DSP] PSCellDeActCnf(Demod:%d, Mxr:%d)
Line 19335: [DSP] IpcHndlr_PscellActCnf
Line 19360: [DSP] Do not send IPC as Modem Status: %d, RF available: %d gDrx_ActiveRat: %d
Line 19365: [DSP] Command PENDING:[%d]IPC_ACTION_ID_WIFI_COEXIST_INFO
Line 19369: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_WIFI_COEXIST_INFO
Line 19378: [DSP] IPC_ACTION_ID_WIFI_COEXIST_INFO
Line 19406: [DSP] IPC_ACTION_ID_LTE_ATI_CMD : %d %d
Line 19434: [AS] TAS_status(%d) is reset due to TXSwap.
Line 19456: [DSP] IPC_ACTION_ID_TX_SWAP [0x%x] at(%d) Tx-BlackOff(%d)us
Line 19461: [DSP] IPC_ACTION_ID_TX_SWAP [0x%x]
Line 19473: ###[TSIC][TMM] HALDSP_SetTxfMcwMode:: IPC_ACTION_ID_TX_SWAP tmm(%d)
Line 19503: [DSP] Update DRS Position(CC%d): TTI(%d)
Line 19567: [DSP] Update LAA DCI STATUS: cc(%d) status(%d) 
Line 19590: [DSP] IPC_ACTION_ID_TX_BLOCK(cause:PHY:0x%x/L1:0x%x) at(%d)
Line 19636: [DSP] IPC_ACTION_ID_TX_BLOCK_DONE(cause:0x%x/PHY:0x%x), Suspended Task in RF(%d) PendingNrInfoReq(%d) at(%d) TimeDiff(%d)
Line 19665: [DSP] Don't proceed IPC_ACTION_ID_TX_BLOCK_DONE(TxStatus:%d) due to gDrx_ActiveRat(%d)
Line 19688: [SAR] [ST:%d] GetUserTxPowLte : %d
Line 19713: [SAR] [ST:%d]User Tx Power(dBm) is set : %d
Line 19718: [SAR] [ST:%d] User Tx Power(dBm) is 0(%d)! IsUserTxPowLimit is FALSE
Line 19741: [SAR] [ST:%d] GetTapcModeLte: TapcEnable(%d)!!
Line 19767: [SAR] [ST:%d] SetTapcModeLte: TapcEnable(%d)
Line 19793: [SAR] [ST:%d] GetUserTargetPowLte: The Band[%d](%d) is not valid(band_idx(%d))
Line 19808: [SAR] [ST:%d] GetUserTargetPowLte: Band[%d](%d) PlimitType(%d) => UserTargetPow:%d
Line 19845: [SAR] [ST:%d] SetUserTargetPowLte: The Band[%d](%d) is not valid(band_idx(%d))
Line 19861: [SAR] [ST:%d] SetUserTargetPowLte: Band[%d](%d) => UserTargetPow:%d, PlimitType(%d)
Line 19893: [SAR] [ST:%d] GetTasControlModeLte: ControlByPlimit(%d)!!
Line 19918: [SAR] [ST:%d] SetTasControlModeLte: ControlByPlimit(%d)
Line 19940: [SAR] [ST:%d] GetApprovalModeLte: ApprovalMode(%d)!!
Line 19965: [SAR] [ST:%d] SetApprovalModeLte: ApprovalMode(%d)
Line 20017: [PS_MENU] [ST:%d] GetTxPathSwitchModeLte: PathSwitchMode(%d)!!
Line 20069: [AS_MENU] [ST:%d] GetTxSwitchOtaTestModeLte: OtaTestMode(%d)!!
Line 20122: [AS_MENU] [ST:%d] GetTxAntennaSwitchModeLte: AntennaSwitchMode(%d)!!
Line 20146: [SAR] [ST:%d] GetAsEnableLte: AsEnable(%d)!!
Line 20169: [SAR] [ST:%d] SetTapcModeLte: TapcEnable(%d)
Line 20590: [SAR] SAR_IsApproval(%d): Set PlimitType(0), Select SAR_PlimitX10[%d)[%d] for Band[%d]
Line 20768: [SAR][ST%d][CC%d] HALDSP_GetTxDutyRatio:FDD(%d)
Line 20776: [SAR][ST%d][CC%d] HALDSP_GetTxDutyRatio:TDD(%d)
Line 20812: [SAR][ST%d] MPeriod in NV is %d, Set gSARperiodM(%d) and gSarRemIdxOffset(%d)
Line 20884: [Spatial TAS][ST%d] GetCurBandGroup: [INVALID BAND GROUP] BandGroup(%d)
Line 20888: [Spatial TAS][ST%d] GetCurBandGroup: Current Band: RFBandGroup[%d] L1BandGroup[%d]
Line 20928: [Spatial TAS]MakeRMatrix: [SEARCH_IDX] 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X
Line 20947: [Spatial TAS]MakeRMatrix: i(%d) j(%d) BandGrp(%d) PathType(%d) ThruSwap(%d)
Line 20948: [Spatial TAS]MakeRMatrix: [R MATRIX ORIGIN] %d %d %d %d %d %d %d %d
Line 20962: [Spatial TAS]MakeRMatrix: [O MATRIX] %d %d %d %d %d %d %d %d
Line 21015: [Spatial TAS][ST%d]GetAntCouplingInfo:[DEBUG] Start Searching CurBand(%d) CurBandGrp(%d) CurPathType(%d) CurThruSwap(%d) CurSwitchAntIdx(%d)
Line 21067: [Spatial TAS][ST%d]GetAntCouplingInfo:[Error] CouplingDb Idx (%d/%d/%d/%d) Not Found!!!
Line 21077: [Spatial TAS]GetAntCouplingInfo: Band[%d], TxPathType[%d], TxThruSwap[%d] CurAntGrpIdx[%d] SwitchCurAntGrpIdx[%d] AntCouplingDbIdx(%d -> %d) SemiDrds(%d)
Line 21082: [Spatial TAS]GetAntCouplingInfo: BandGrp[%d], TxPathType[%d], TxThruSwap[%d] CurAntGrpIdx[%d] SwitchCurAntGrpIdx[%d] AntCouplingDbIdx(%d -> %d) SemiDrds(%d)
Line 21397: [Spatial TAS][ST%d]CalcConvergedRMatrix: [R MATRIX] %d %d %d %d %d %d %d %d
Line 21702: [SAR][ST%d] HALDSP_InitSAR! periodM(%d) gSARCompliance(%d) gSARsumLimit(%d) IsSpatialTASEnable(%d)
Line 21724: [Spatial TAS][ST%d] HALDSP_InitTASPLimitforTxAS
Line 21752: [Spatial TAS][ST%d] InitAntPowLimitX10
Line 22021: [TAS][ST%d] HALDSP_InitTAS: AntSwitchingEnNV(%d)
Line 22092: [SAR][ST%d] InitSAR() instead of ReInitSAR() due to Abnormal condition(hal_SAR_total_remain(%d):out of range)
Line 22103: [SAR][ST%d] HALDSP_ReInitSAR(IRAT or Resume)! hal_SAR_total_remain(%d) start index(%d)
Line 22148: [SAR] [ST%d] InitializeDueToEvent: [ANT IDX ARRAY INIT] CurAntCouplingDbIdx(%d) CurAntGrpIdx(%d)
Line 22188: [SAR][ST%d] InitializeDueToEvent: [OffsetEvent CHANGED] OffsetCalcX100(%d) OffsetCalcX1000(%d) PrevSarLimitUpper(%d) gSARCompliance(%d)
Line 22194: [SAR][ST%d] InitializeDueToEvent: [OffsetEvent CHANGED] [Limited TAS WayOut]
Line 22198: [SAR][ST%d] InitializeDueToEvent: OffsetEvent(%d) IsCurPLimitSmaller(%d) IsOrthoAntGrpChanged(%d) IsLowOffsetMode(%d)
Line 22290: [Spatial TAS][ST%d] CalculateSpatialRatio: [EXCEPTION] MyPowAllocRatioOrigin(%d)
Line 22295: [Spatial TAS][ST%d] CalculateSpatialRatio: [EXCEPTION] OppositePowAllocRatioOrigin(%d)
Line 22306: [Spatial TAS][ST%d] CalculateSpatialRatio:CurRatioSpatial(%d) OppoRatioSpatial(%d) IsBothAntMaxSar(%d) IsCurAntMaxSar(%d) IsOppoCurAntMaxSar(%d) PowAllocRatioScaleUp(%d) IsMaxSarUsedInOppoCurAntGrp(%d)
Line 22349: [Spatial TAS][ST%d] CalcOppoRatSpatialAvgSarFR2: OppoUsedAvgSar(%d) OppositeRatSlope(%d) OppositeSum3TapSar(%d) HalSarIdx(%d)
Line 22524: [Spatial TAS][ST%d] CalcOppoRatSpatialAvgSar: OppoCurSlopeAvg60s(%d) OppoUsedAvgSar60s(%d) OppoSarLimitUpper(%d) OppoSarBackOff(%d) HalSarIdx(%d) MPeriodForNR(%d) 
Line 22527: [Spatial TAS][ST%d] CalcOppoRatSpatialAvgSar:OppoCurSlopeAvg(%d) MaxOppoCurSlope(%d) OppoUsedAvgSar(%d) MaxOppoUsedAvgSar(%d) OppoRm(%d) OppoCurAntGrpIdx(%d) OppositeSum3TapSar(%d) 
Line 22532: [Spatial TAS][ST%d] CalcOppoRatSpatialAvgSar:FinalOppoUsedAvgSar(%d) OrthoCnt(%d) NonOrthoCnt(%d) 
Line 22679: [Spatial TAS][ST%d] CalculateCurSlope: i(%d) CurSlopeAvg60s(%d) CurSlopeLocalAvg60s(%d) UsedAvgSar60s(%d) Rmatrix(%d) UlcaRmatrix(%d) SarBackOff(%d) SwitchCurSlopeAvg(%d)
Line 22681: [Spatial TAS][ST%d] CalculateCurSlope: i(%d) CurUsedAvgSar(%d) CurSlopeAvg(%d) CurSlopeLocalAvg(%d)
Line 22718: [Spatial TAS][ST%d] CalculateCurSlope: MaxCurSlopeAvg(%d) MaxUsedAvgSar(%d) MaxUsedAvgSarIdx(%d) MaxCurSlope(%d) MaxCurSlopeIdx(%d)
Line 22720: [Spatial TAS][ST%d] CalculateCurSlope: MyCurSlopeLocalAvg(%d) MyUlcaCurSlopeLocalAvg(%d) MaxCurSlopeAvgTx0(%d) MaxCurSlopeAvgTx1(%d)
Line 22780: [Spatial TAS][ST%d] CheckSpatialSlopeStatus: MyCurSlopeAvg(%d) MaxCurSlopeTh(%d) SlopeTh(%d) SlopeTh2(%d)
Line 22783: [Spatial TAS][ST%d] CheckSpatialSlopeStatus: SlopeCtrlFlag(%d) PrevSlopeCtrlFlag(%d) NewWindowFlag(%d) OffsetEvent(%d)
Line 22844: [SAR][ST%d] CheckSlopeStatus:: NewWindowFlag(%d) PrevSlopeCtrlFlag(%d) SlopeTh2(%d) OffsetEvent(%d)
Line 22852: [SAR][ST%d] CheckSlopeStatus: SlopeCtrlFlag(%d) CurSlope(%d) StartY60sAvg(%d) CurSlope_Th(%d) SarBackOff(%d)
Line 22891: [SAR][ST%d][NORMAL][PRE_SAV][SLOPECTRL2] SarLimit(%d) SarLimitGainx100(%d)
Line 22897: [SAR][ST%d][NORMAL][PRE_SAV][SLOPECTRL1] SarLimit(%d) due to gReducedSarTotalRemain(%d) >= AMulSarBudget(%d), but gSARSlopeCtrlFlag(%d)
Line 22911: [SAR][ST%d][NORMAL][SUPPRESS] SarLimit(%d) due to gReducedSarTotalRemain(%d) >= AMulSarBudget(%d)
Line 22916: [SAR][ST%d][NORMAL][MAX] SarLimit(%d) (=RefSarScaled) due to gReducedSarTotalRemain(%d) >= AMulSarBudget(%d)
Line 22992: [SAR][ST%d][LIMITED-TAPC] SarMaxInst(%d) CurSlope(%d) OppositeCurSlope(%d) SarLimitedTas(%d) HalfSarLimitedTas(%d) MaxCurSlopeAvgTh(%d) 
Line 22995: [SAR][ST%d][LIMITED-TAPC] gHal_TapcMode(%d) G1ExpSar(%d) gSARSupressLTE(%d) PrevG1ExpSar(%d) FixedPowRatio(%d) PLimitTASX10(%d) 
Line 23015: [SAR][ST%d][LIMITED-TAPC] [LTE is VoiceRAT] SarMaxInstTh(%d) SarMaxInst(%d) OppositeCurSlopeTh(%d) LimitedTasMode(%d)
Line 23041: [SAR][ST%d][LIMITED-TAPC] [NR is VoiceRAT] LimitedTasMode(%d) SarMaxInst(%d) QuadrapleSarLimitedTas(%d) OppositeCurSlopeTh(%d)
Line 23053: [SAR][ST%d][LIMITED-TAPC][GAIN CHANGED] gain(%d) G1ExpSar(%d) MaxCurSlopeAvgGainTh(%d) MaxCurSlopeAvgRatio(%d) ReducedMyGx100(%d)
Line 23063: [SAR][ST%d][LIMITED-TAPC] FixedPowRatio(%d) TasLinear(%d) LimitedTapcPmaxInst(%d) PLimitTASX10(%d)
Line 23108: [SAR][ST%d][RESTORE][SAV_1] SarLimit(%d) due to gReducedSarTotalRemain(%d) >= GMulSarBudget(%d), < BMulSarBudget(%d)
Line 23118: [SAR][ST%d][RESTORE][MIN] SarLimit(%d) due to gReducedSarTotalRemain(%d) < GMulSarBudget(%d)
Line 23175: [SAR] [ST%d] Skip(%d) Remain(%d) ActualSkip(%d) prevtime(%d) curtime(%d) time_diff(%d)
Line 23256: [SAR][ST%d] RecordOppositeAvgSarBuffer: RecordType(%d) OppositeSarBuffIdx(%d)
Line 23259: [SAR][ST%d]RecordOppositeAvgSarBuffer: OppositeAvgSarBuffer[0~5](%d %d %d %d %d %d)
Line 23284: [SAR][ST%d] HALDSP_CheckIsOppositeIncreased:: IsOppositeIncreased(%d) = (DiffAvgSar(%d) > MinAvgSarTh(%d)), FirstIdx(%d) LastIdx(%d) OppositeMperiod(%d)
Line 23435: [SAR][ST%d] HALDSP_AdjustPowAllocRatio: RatioBitmap(0x%X) OppositeCurSlope(%d) PowAllocRatio(%d) IsSaturatedLte(%d) IsFR2(%d) OppositeGx1000(%d) OppoGxOrigin(%d) RToOppo(%d)
Line 23536: [SAR][ST%d][DYNAMIC] OppoUsedSarRatioInc(%d) G1ExpSar(%d)
Line 23543: [SAR][ST%d][DYNAMIC] IsLTEOn(%d) IsNROn(%d) UsedAvgSarLTE(%d) UsedAvgSarNR(%d) RawTotalUsedSar(%d) LtePowRatioForAlgo(%d), NR_Plimit(%d)
Line 23545: [SAR][ST%d][DYNAMIC] EN-DC(%d) G1ExpSar(%d) gSARSupressLTE(%d) PrevG1ExpSar(%d) GainMode(%d) OppoCurAntGrpIdx(%d)
Line 23586: [SAR][ST%d][HALDSP_ImportTapcParam:INIT] SARperiodM(%d) gSARIsQFull(%d) gSARStrQCnt(%d) PowAllocRatioPrev(%d) G1ExpSar(%d) IsNewWindowStarted(%d)
Line 23607: [SAR][ST%d][HALDSP_ImportTapcParam:IRAT] SARperiodM(%d) gSARIsQFull(%d) gSARStrQCnt(%d) PowAllocRatioPrev(%d) G1ExpSar(%d) IsNewWindowStarted(%d)
Line 23622: [SAR][ST%d][HALDSP_ImportTapcParam:MPeriodChange] SARperiodM(%d -> %d) gSARIsQFull(%d) gSARStrQCnt(%d) IsNewWindowStarted(%d)
Line 23626: [SAR][ST%d][HALDSP_ImportTapcParam] TapcPrevRatInfoCurST(%d) TapcPrevRatInfoOppoST(%d) PrevStack(%d)
Line 23661: [Spatial TAS][ST%d] SendPowerLimitToTxAS: AsStatus(%d) gRF_selectTxAnt(%d) gRF_selectTxAnt_Ulca(%d) Pmax_inst[0](%d) Pmax_inst[1](%d)
Line 23682: [Spatial TAS][ST%d] SendPowerLimitToTxAS: [CUR ANT BACK OFF] CurAntPowLimitX10(%d) CurAntSarLimit(%d) CurAntPowLinear(%d) PresetTASMODE(%d)
Line 23703: [Spatial TAS][ST%d] SendPowerLimitToTxAS: [SW ANT BACK OFF] SwAntPowLimitX10(%d) PresetTASMODE(%d)
Line 23706: [Spatial TAS][ST%d] SendPowerLimitToTxAS: DefaultAntR(%d) SwapAntR(%d) SwapAntOppositeAvgSar(%d) SwapAntGx100(%d) SwapAntSarLimit(%d) SwitchRefSarScaled(%d)
Line 23716: [Spatial TAS][ST%d] SendPowerLimitToTxAS: AntPowLimitX10[0](%d) AntPowLimitX10[1](%d) CurAntPowLimitX10(%d),SwAntPowLimitX10(%d), SwitchCurAntGrpIdx[0](%d)
Line 23719: [Spatial TAS][ST%d] SendPowerLimitToTxAS: MaxPowLinear(%d) SwAntTxAsCurSlopeMax(%d) TxAsSlopeTh(%d) PresetTASMODE(%d)
Line 23855: [DSP] HALDSP_AntThresholdQuery_LteAtiCmd: %d %d
Line 24048: [SAR][ST%d] TAS ULCA Status: PLIMIT(%d,%d) Offset_backoff(%d), Offset_Pdiff(%d) gSarLimit(%d)
Line 24051: [SAR][ST%d] TAS ULCA Status: UsedSAR/IsUsed Pcc(%d/%d) Scc(%d/%d) IsSpatialTasEnable(%d) IsOrthogonal(%d)
Line 24114: [SAR][ST%d] TAS ULCA Status: SAR LIMIT:(%d, %d) Sum(%d), PMAX:[%d/%d], ulca_case(%d) SccMaxSlopeTh(%d)
Line 24152: [SAR][ST%d][PostProcessStage] ENDC(%d) MPeriodForNR(%d) IsNROn(%d) IsFR2(%d)
Line 24154: [SAR][ST%d][PostProcessStage] UsedAvgTxSar(%d) AvgPwrdBmX10(%d) gSarLimit(%d) gSARMaxLimitdB(%d)
Line 24156: [SAR][ST%d] LTE TAS Status: LTE Remain TX Pwr(%d)/Max SAR Limit(%d)*100 = RemainPowGauge(%d%%) AvgPwrdBmX10(%d)
Line 24160: [SAR][ST%d][PostProcessStage] gSarLimit(%d) SARSupressLTE(%d) gSARPLimitX10(%d) UsedAvgSarLTE(%d) TxDutyRatioX100(%d) -> CalcMaxPowDbmx10(%d) isUnlimitedPow(%d)
Line 24166: [SAR][ST%d][NORMAL-TAPC] Pmax_inst(%d) is set (gHal_TapcMode:%d, gHal_AsStatus(%d)
Line 24177: [SAR][ST%d][LIMITED-TAPC] Pmax_inst(%d) is set (FixedPowRatio:%d, gHal_TapcMode:%d)
Line 24184: [SAR] gSARMaxLimitdB is changed to (%d) due to ULCA 1dB additioanal backoff, num_cc(%d)
Line 24189: [SAR][ST%d] gSARMaxLimitdB(%d) is changed as Pmax_inst(%d)
Line 24214: [SAR][ST%d] reset hal_SAR_total_remain(%d)  -> (%d)
Line 24219: [SAR][ST%d] reset SarTotRemainTx0(%d)  -> (%d)
Line 24224: [SAR][ST%d] reset SarTotRemainTx1(%d) -> (%d)
Line 24232: [SAR][ST%d] reset hal_SAR_total_remain(%d)  -> (%d)
Line 24237: [SAR][ST%d] reset SarTotRemainTx0(%d)  -> (%d)
Line 24242: [SAR][ST%d] reset SarTotRemainTx1(%d) -> (%d)
Line 24309: [SAR][ST%d][%d] hal_SAR_index(%d) SumSkippedSar(%d/%d), exSarRemain(%d/%d)
Line 24311: [SAR][ST%d][%d] SAR_remain[exIndex(%d)] (%d/%d) SAR_remain[skipIndex(%d)](%d/%d)
Line 24323: [SAR][ST%d] UpdateSarRemain(Before): SAR_index(%d) SAR_Remain(%d) remainPartial[Tx0/Tx1]: (%d/%d) Remnant[Tx0/Tx1]: (%d/%d)
Line 24333: [SAR][ST%d] GetSarRemaining: PrevSarRemaining[Tx0/Tx1]:(%d/%d) index_ToBeDeleted(%d) hal_SAR_remain(%d) hal_SAR_remain_aux(%d)
Line 24355: [SAR][ST%d] UpdateSarRemain: gSARIsQFull(%d) gSARStrQCnt(%d) hal_SAR_ant_idx[%d]%d hal_SAR_ant_idx_aux[%d]%d
Line 24363: [SAR][ST%d] UpdateSarRemain(After): SAR_index(%d) SarTotRemain[Tx0/Tx1](%d/%d) SumSkippedSar[Tx0/Tx1](%d/%d), 
Line 24365: [SAR][ST%d] UpdateSarRemain(After): SAR_remain(%d) hal_SAR_remain2(%d) isCouplingExit(%d)
Line 24428: [SAR][DYNAMIC][ST%d] UsedAvgSarLTE_60s(%d) UsedAvgSarLTE(%d) / MPeriodForNR(%d) UsedAvgSarNR(%d)
Line 24480: [SAR][ST%d] reset gReducedSarTotalRemain(%d) -> (%d)
Line 24485: [SAR][ST%d] ENDC(%d) G1ExpSarForLTE(%d) gSARCompliance_AfterGain(%d) gSARsumLimit_AfterGain(%d) gReducedSarTotalRemain(%d)
Line 24492: [SAR][ST%d] M_index(%u) RefSarScaled(%d/%d) X_Used_SAR[Tx0/Tx1] (%d/%d) C_Used_SAR[Tx0/Tx1] (%d/%d) 
Line 24562: [SAR][ST%d] Pmax_inst(%d) PMaxLimit(%d) PeMaxByNetwork(%d) gSARPLimitX10[0](%d) Pow10ValForPmaxInst(%d) SarLimitUpperOrigin(%d) TasPMaxUeLimit(%d) TasMaxPowLinear(%d)
Line 24579: [SAR] [CHANGE SarLimitUpper]
Line 24598: [SAR] [CHANGE SarSuppress]
Line 24617: [SAR] [CHANGE SarBackOff]
Line 24632: [SAR][ST%d][Setup Stage] SarLimitUpper(%d) SarSuppress(%d) gSARCompliance_AfterGain(%d) SarBackOff(%d) IsDecoupledPingPongCase(%d)
Line 24661: [SAR][ST%d] [SarSuppress APPLIED]
Line 24667: [SAR][ST%d] [SarLimitUpper APPLIED]
Line 24692: [SAR][ST%d] LTE TasMode changed(%d -> %d): UpdateMTPLInfo(%d) is required
Line 24742: [TAS][ST%d] TapcSetTapcRatFlagOff: LTE Gain was reset!(1000)
Line 24756: [SAR] [ST%d] HALDSP_UpdateTapcLteFlag: remainPatialM(%d) IsTxed(%d)
Line 24778: [Spatial TAS]PrintRMatrix: [R MATRIX ORIGIN] %d %d %d %d %d %d %d %d
Line 24783: [Spatial TAS]PrintRMatrix: [R MATRIX] %d %d %d %d %d %d %d %d
Line 24824: [SAR] [ST%d] HALDSP_CheckIfOppositeLowPowMode(%d): IsNROn(%d) OppositeSum3TapSar(%d) lowPowTh1(%d) OppositeAvgSar(%d) lowPowTh2(%d)
Line 24850: [SAR][ST%d] HALDSP_ProcessDualStackStack: G1ExpSar(%d)
Line 24878: TAPC Mode is changed (%d -> %d)
Line 25020: [SAR][ST%d] [Event Occurrence] PLimitX10(%d -> %d) NumTxAnt(%d -> %d) AntGrpIdx(%d -> %d) IsWayOutLimitedTAS(%d)
Line 25183: [SAR][ST%d] TestMode disabled / EMC(%d)
Line 25209: [SAR][ST%d] Check UeState(%d)
Line 25255: [SAR][ST%d] [BAND_CHANGE] BAND(%d -> %d) --> Updating TxDutyRatioX100(%d/%d) is required
Line 25375: [SAR-PHY][ST%d][CC%d] PowDbmX10(0~4 TTI):(%d %d %d %d %d), NumTxAnt(%d) slo_cc(%d)
Line 25376: [SAR-PHY][ST%d][CC%d] PowDbmX10(5~9 TTI):(%d %d %d %d %d), AvgSAR_(PerCC)_10ms(%d)
Line 25427: [SAR][ST%d] CurrentMCC(%d) TapcMCCType(%d) gHal_TapcMode(%d) TxDutyRatioX100(%d/%d) IsPlimitBoosted(%d) IsMccPeakMode(%d) IsSpatialTasEnable(%d) SARperiodM(%d)
Line 25429: [SAR][ST%d] PMaxLimit(%d) gSARPLimitX10(%d/%d) InstSAR[0/1]: (%d/%d), SAR_Total[0/1]: (%d/%d) remain_ret[Tx0/Tx1]: (%d/%d)
Line 25432: [SAR][ST%d] PlimitInNV(%d/%d) SAR_IsApproval(%d) SwitchSARPLimitX10(%d) SwitchRefSarScaled(%d) RefSarScaled(%d/%d) AsStatus(%d) RValue(%d)
Line 25530: [SAR] Abnormal state! No Primary Tx used for N(250ms): M[ST%d](hal_SAR_index:%d) 
Line 25534: [SAR] Abnormal state! No Secondary Tx used for N(250ms): M[ST%d](hal_SAR_index:%d) 
Line 25542: [SAR] [ST%d] HALDSP_InitSAR: Skip(%d) exceeds Mperiod(%d)
Line 25640: [SAR] [Setup Stage][For MCD] G1ExpSar is (%d)
Line 25660: [SAR][ST%d] Current Max Limit is %d.%d dBm. SarLimitUpper(%d) SarSuppress(%d) SarBackOff(%d) AntSwitchingEn(%d) AntSwitchingEnNV(%d)
Line 25663: [SAR][ST%d] (M:%d) TAPC status: tapc_case(%d) TAPC Pmax(%d) gSarLimit(%d) LteDbmComplianceX10(%d) LTEAvgSar(%d) TasMode(%d)
Line 25668: [SAR][ST%d] TAPC ULCA status: SarLimit(%d/%d) PMAX(%d) Pcc(%d)/Scc(%d) AvgTxPwr(Dbm)(%d)
Line 25809: [DSP] HALDSP_SetMccforAS: MCC(%x -> %x) or MNC(%x -> %x) change
Line 25819: [SAR] PLMN Change: MCC(%x %x %x)/MNC(%x %x %x)
Line 25824: [SAR] PLMN Change: Change gHal_TapcMCCchange Flag to %d 
Line 25853: [DSP] SetVolteStatus Current(%d -> %d), Other(%d)
Line 25854: [DSP] fbrxMeasRate(%d)
Line 25901: [DSP] GetVolteStatus (%d)
Line 25920: [DSP] GetOtherStackVolteStatus (%d)
Line 25950: [DSP] GetCurrentPmax (%d, %d, %d, %d ,%d)
Line 25984: [SPR] HALDSP_EnableB41Ns04Op: Stack#%d, NS04 enable(%d), band(%d), MCC-MNC(%d-%d)
Line 26015: [DSP] IPC_ACTION_ID_EDUAL_VOLTE_STATUS(%s) :: Mcg/Scg(St%d/St%d)
Line 26068: Not found available CC for earfcn(%d)
Line 26078: [DSP] IPC_ACTION_ID_SCG_START_IND: cc(%d), dl_earfcn(%d)
Line 26342: [DSP] Received TX_WAKEUP IPC from DSP
Line 26574: [AS] Command PENDING:[%d]IPC_ACTION_ID_THERMAL_RESTRICT_CTRL
Line 26578: [AS] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_THERMAL_RESTRICT_CTRL
Line 26593: [DSP] IPC_ACTION_ID_THERMAL_RESTRICT_CTRL
Line 26626: [DSP] IPC_ACTION_ID_THERMAL_RESTRICT_CNF: result(%d), level(%d) release(%d)
Line 26882: [L2 DATA] SetDataInactivityShm[%d ==> %d] StackId[%d]
Line 26907: [DSP] IpcHndlr_WciSyncInfo
Line 26936: [DSP] IpcHndlr_VolteLclkReq
Line 26961: [DSP] IpcHndlr_VolteLclkReq: Changing to LCPU 400MHz
Line 26965: [DSP] IpcHndlr_VolteLclkReq: Changing to LCPU 200MHz
Line 26988: [DSP] IPC_PDCCH_ONLY_STATE: state(%d)
Line 26997: [DSP]  Do not activate PdcchOnlyClkChangeHISR due to NV is disabled  
Line 27200: [DSP] (ST%d) HALDSP_SetMTPL : input_rsi(%d), input_mos(%d) CurUeState(%d), AsStatus(%d)
Line 27217: [MTPL] HALDSP_SetMTPL(TAS:%d / PmaxAveByMTPL) -> gHal_PmaxAveX10[%d]:%d, gHal_PmaxInstX10[%d]:%d, gHal_InactivePmaxAveX10[%d]:%d, gHal_InactivePmaxInstX10[%d]:%d
Line 27222: [MTPL] HALDSP_SetMTPL(TAS:%d / PmaxAveByNV) -> gHal_PmaxAveX10[%d]:%d, gHal_InactivePmaxAveX10[%d]:%d 
Line 27229: [MTPL] HALDSP_SetMTPL: Failed to Apply MTPL: Applying gHal_PmaxAveX10[%d, %d] to set Pmax
Line 27240: [MTPL] (ST%d) Current MTPL (%d, %d), Current Ant(%d)
Line 27251: [MTPL] (ST%d) UE state is in IDLE state, Send Max TxPower
Line 27307: [MTPL] (ST%d) No Pre-emptive power reduction for TAS refSarScaled(%d) sarLimit(%d) TxDutyRatioX100(%d).
Line 27316: [MTPL] (ST%d) No Pre-emptive power reduction for TAS gHal_PrevPmaxAveX10(%d) gHal_PmaxAveX10(%d) Antenna(%d) CurUeState(%d) Flag(%d)
Line 27337: [MTPL] (ST%d) Pre-emptive cuts PmaxInst from(%d) to(%d)(%d) with sarLimit(%d) refSarScaled(%d) TxDutyRatio(%d)
Line 27342: [MTPL] (ST%d) No Pre-emptive power reduction for TAS from(%d) to(%d)(%d) with sarLimit(%d) refSarScaled(%d) TxDutyRatio(%d)
Line 27347: [MTPL] (ST%d) No Pre-emptive power reduction for TAS PrevPLimit(%d) PmaxAveX10(%d).
Line 27378: [DSP][ST%d] Don't monitor BlerInfo due to gHal_BlerInfoInd(%d) or BandChange(%d)
Line 27405: [DSP][ST%d] Send BlerInfoInd to MMC-IF: UL BLER(Prev:%d/Cur:%d/Threhold:%d) DL BLER(Prev:%d/Cur:%d/Threhold:%d)
Line 27416: [DSP] RfInfo in BlerInfoInd: Direction(%d) GrantRatio(DL:%d/UL:%d) RbRatio(%d) AvgMCS(%d), AvgRank(%d), AvgRrbk(%d)
Line 27423: [DSP][ST%d] Don't send BlerInfoInd : UL BLER(Prev:%d/Cur:%d/Threhold:%d) DL BLER(Prev:%d/Cur:%d/Threhold:%d)
Line 27457: [DSP][ST%d] Don't monitor TxRbInfo due to gHal_TxRbInfoInd(%d)
Line 27480: [DSP][ST%d] SendTxRbInfo: TxRbSize(Prev:%d/Curr:%d) TxRbThreshold(%d) ant_num(%d) SFN(%d) subframe(%d)
Line 27487: [DSP][ST%d] Don't send TxRbInfoInd due to Tx RBInfo(Prev:%d/Cur:%d/Threhold:%d)
Line 27519: [DSP][TX_API] IPC_ACTION_ID_LTE_TXPC_API_PARAM_UPDATE Sent to DSP(band:%d/ulFreq:%d/nsVal:%d/pCMax:%d/dps:%d)
Line 27537: [DSP][TX_API] IPC_ACTION_ID_LTE_TXPC_API_REQ Sent to DSP
Line 27561: [DSP][TX_API] IPC_ACTION_ID_LTE_TXPC_API_INIT Sent to DSP(mode:%d/ST:%d)
Line 27605: [TX_API] HALDSP_LteTxSetForTxPcAPI: START, band(%d) freq(%d) bw(%d) rbSize(%d) rbStart(%d) modOrder(%d) nsval(%d) pCMax(%d)
Line 27646: [TX_API] HALDSP_LteTxSetForTxPcAPI: FINISH
Line 27669: [TX_API_TEST] HALDSP_LoadTestParamFromNV
Line 27688: [TX_API_TEST] TargetRAT(%d) StackId(%d)
Line 27699: [TX_API_TEST] module_control: mtpl(%d) tas(%d) temperature(%d) mulmimo(%d) sulmimo(%d) nw_ctrl(%d)
Line 27707: [TX_API_TEST] band_info(MCG): band(%d) bw(%d) scs(%d) arfcn(%d)
Line 27716: [TX_API_TEST] band_info(SCG): band(%d) bw(%d) scs(%d) arfcn(%d)
Line 27733: [TX_API_TEST] mcg_protocol_l1_info: pc(%d) channel_type(%d) rbsize(%d) rb_offset(%d) modulation(%d) tx_type(%d)
Line 27735: [TX_API_TEST] mcg_protocol_l1_info: num_layer(%d) ul_grant_ratio(%d) cbrsBackoff(%d) PC1dot5[%d]
Line 27745: [TX_API_TEST] scg_protocol_l1_info: pc(%d) channel_type(%d) rbsize(%d) rb_offset(%d) modulation(%d) tx_type(%d) num_layer(%d)
Line 27759: [TX_API_TEST] network_info: p_Max(%d) p_MaxUE_FR1_r15(%d) p_NR_FR1(%d) Cell_Info[0](Rank %d, AMPR %d) Cell_Info[1](Rank %d, AMPR %d)
Line 27767: [TX_API_TEST] mtpl_info: rsi(%d) mos(%d) mos_fr1(%d) mos_fr2(%d)
Line 27776: [TX_API_TEST] tas_info: tas_mode(%d) mcg_duty_cycle(%d) scg_duty_cycle(%d) tdd_ul_dl_configuration(%d) remaining_sar_ratio(%d)
Line 27783: [TX_API_TEST] device_info: temperature(%d) fake_mcg_power(%d) mcc(%d)
Line 27985: [DSP][TX_API] Received TX_PC_API IPC from DSP(tx_pwr:%d)
Line 28001: [DSP][TX_API_TEST] HALDSP_MtmTestMaxTxPwrReq Started (Load test input from NV:%d)
Line 28098: [CL-AIT] HALDSP_UpdateCLAITInfo: gHal_ClaitInfoInd(%d) ait_type(%d) num_of_ant(%d) Info[ant_num(%d) band(%d) sbi(%d) index(%d)]
Line 28114: [CL-AIT] Don't HALDSP_UpdateCLAITInfo due to gHal_ClaitInfoInd(%d)
Line 28139: Meas is already aborted,no need to send meas complete
Line 28174: [DSP] IPC_ACTION_ID_PHY_L1_MEAS_COMPLETE
Line 28215: [DSP] IPC_ACTION_ID_PHY_MEAS_REQ_QS_CTRL (type:NORMAL) dur_start(%d), dur_end(%d), demod_cc(%d)
Line 28259: [AS] UE is not in 2RX mode, so AS for RACH is not possible (TAS_status:L1(%d)/PHY(%d))
Line 28285: [AS] HALDSP_ControlASForRach(L_ALGO) (RSRP: %d,%d Diff: %d)
Line 28305: [AS] HALDSP_ControlASForRach(D_ALGO) (RSRP: %d, %d, %d, %d Current TX ANT max value: %d)
Line 28395: [DSP] IPC_ACTION_ID_PHY_MEAS_REQ_QS_CTRL (type:DMTC): dmtc_sfn_tti(%d), demod_cc(%d)
Line 28432: [DSP] IPC_ACTION_ID_PHY_MEAS_REQ_QS_CTRL (type:RSTD): dur_start (%d) , dur_end (%d) , demod_cc(%d) , prs_gain(%d)
Line 28454: [DSP] IPC_ACTION_ID_PHY_MEAS_REQ_QS_CTRL (type:STOP)
Line 29130: [MonitorSubcore] SCELL Status[0x%x] @ MCG stack %d
Line 29172: [AS] Command PENDING:[%d]IPC_ACTION_ID_LTE_SAT_MODE_IND
Line 29176: [AS] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_LTE_SAT_MODE_IND
Line 29188: [DSP] IPC_ACTION_ID_LTE_SAT_MODE_IND
Line 604: [DSP] IPC_ACTION_ID_LTE_%s(%d: ST%d) WakeupInitType(%d), releaseType(%d) @ %s()
Line 631: [DSP] %s (ev:%d)(mxr cc:%d)@ %s()
Line 13628: TxSwap(%d) is ongoing. Don't change RX_MODE
Line 13636: Due to Pause flag. Don't change RX_MODE
Line 13644: Wakeup is ongoing. Don't change RX_MODE
Line 13655: Don't change RX_MODE. disable_1rx_mode(%d)
Line 13664: [DSP] RxModeReqIndHisr : Demod_cc(%d), Mxr_cc(%d), Reqed Rx mode(%d)
Line 13678: [DSP] RxModeReqIndHisr : Seems to be a temporary SINR degradation. Don't change RX_MODE
Line 13680: [DSP] RxModeReqIndHisr : full stationary %d, data inactivity %d, prev sinr %d, current sinr %d
Line 13693: [DSP] RxModeReqIndHisr : Reqed Rxmode is the same as it is now (cc:%d, rxmode:%d)
Line 13989: HeNB SIB Decoding Size[%d] Error
Line 14000: Send HeNB SIB to RRC
Line 14234: HALDSP_PdcchOnlyStateCtrl (%d)
Line 26391: [DSP] No action due to Tx wakeup IPC during CDRX sleep state!!!
Line 26485: [DSP] HALDSP_ChangeDspClock : change[%d] cpuOwnerMask[%d] - Cannot make cpuOwnerMaks
Line 26497: [DSP] HALDSP_ChangeDspClock : CPU CLK change to SVC_NO_SVC OwnerMask[%d].
Line 26500: [DSP] HALDSP_ChangeDspClock : change[%d] cpuOwnerMask[%d] - DSP LOG OFF
Line 26505: [DSP] HALDSP_ChangeDspClock : change[%d] cpuOwnerMask[%d]
Line 26520: [DSP] HALDSP_ChangeDspClock : CPU CLK change to SVC_4G_REL13 OwnerMask[%d]
Line 26530: [DSP] HALDSP_ChangeDspClock : CPU CLK change to SVC_NO_SVC OwnerMask[%d].
Line 26535: [DSP] HALDSP_ChangeDspClock : Wrong command(%d)
Line 27067: [DSP] Do not activate PdcchOnlyClkChangeHISR due to NV is disabled 
Line 27081: [DSP] HALDSP_ProcPdcchOnlyClkChangeHisr
Line 27089: [DSP] HALDSP_ProcPdcchOnlyClkChangeHisr: CPU(%d) MIF(%d)
