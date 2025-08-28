Line 148: ##[NR_DRX][NR_TX] L1C_L1C_DRXCTRLR_TX_CAPA_UPD_IND_Handler:: Invalid max_ul_layer(0x%x) is received
Line 185: ##[NR_DRX][NR_TX] L1C_L1C_DRXCTRLR_TX_CAPA_UPD_IND_Handler:: cur_tx_mode(0x%x), support_tx_mode(%d, 0=1TX/1=2TX), freq_range(%d, 0:FR1/1:FR2)
Line 214: ##[NR_DRX] L1C_L1C_DRXCTRLR_CDRX_CONFIG_IND_Handler:: CfgUpdate|1stCfg|DrxConfig(0x%x) DrxCycle(%d) freq_range(%d) num_of_scell(%d) bwp_scs(%d) onDurationTimer(%d)
Line 273: ##[NR_DRX][WARNING] L1C_L1C_DRXCTRLR_PCH_CONFIG_IND_Handler:: Invalid pagingCycle, defaultPagingCycle(%d) selectedPagingCycle(%d)
Line 280: ##[NR_DRX] L1C_L1C_DRXCTRLR_PCH_CONFIG_IND_Handler, UeState(%d), DefaultPagingCycle/SelectedPagingCycle(%d/%d), freq_range(%d), bwp_scs(%d)
Line 318: ##[NR_DRX] pIdleRlmDrxUdpateIndMsg:: Send
Line 342: ##[NR_DRX] L1C_L1C_DRXCTRLR_BCH_CONFIG_IND_Handler: CtrlrState(%d)
Line 387: DrxNr::L1C_L1C_DRXCTRLR_DOMAIN_CHANGE_IND_Handler
Line 413: ##[NR_DRX][WARNING] Skip %s:: modem_state(%d) DrxCondition(0x%x) DomainType(%d)
Line 414: ##[NR_DRX][WARNING] Skip %s:: modem_state(%d) DrxCondition(0x%x) DomainType(%d)
Line 423: ##[NR_DRX] L1C_L1C_DRXCTRLR_DRX_STATUS_IND_Handler:: DrxAvailable[%d] PendingCause[%d] RemainTime[%d] MeasReserved[%d]
Line 425: ##[NR_DRX] L1C_L1C_DRXCTRLR_DRX_STATUS_IND_Handler:: DrxAvailable[%d] PendingCause[%d] RemainTime[%d] MeasReserved[%d]
Line 455: ##[NR_DRX] L1C_L1C_DRXCTRLR_DRX_STATUS_IND_Handler:: wakeupTime(%d -> %d)
Line 456: ##[NR_DRX] L1C_L1C_DRXCTRLR_DRX_STATUS_IND_Handler:: wakeupTime(%d -> %d)
Line 488: ##[NR_DRX][WARNING] L1C_L1C_DRXCTRLR_DRX_STATUS_IND comes to L1 after SchedPagingWakeupCb
Line 512: ##[NR_DRX][WARNING] %s::Unexpected Rat
Line 535: ##[NR_DRX] L1C_L1C_DRXCTRLR_PRE_DRX_STATUS_IND_Handler:: HandShakeSkip(%d), MeasReserved(%d)
Line 561: ##[NR_DRX] L1C_L1C_DRXCTRLR_IMS_SERVICE_STATUS_IND_Handler:: VoNrEn(%d), RxModeCtrl(%d)
Line 585: ##[NR_DRX] L1C_L1C_DRXCTRLR_LPM_INFO_REQ_Handler:: CtrlrState[%d], Cause[%d]
Line 620: ##[NR_DRX][NR_TX] L1C_L1C_DRXCTRLR_TX_ONOFF_REQ_Handler:: Defer the msg, State(%d)
Line 646: ##[NR_DRX] %s, unexpected msgSrcId(%d)
Line 657: ##[NR_DRX][NR_TX] TxOnOffStart:: TX_DONE
Line 693: ##[NR_DRX][NR_TX] %s, Receive: DRX_CMD_IND from L2IFCTRLR
Line 715: ##[NR_DRX] %s:: DomainType(%d)
Line 764: ##[NR_DRX] L1C_L1C_DRXCTRLR_SYSVALID_DONE_IND_Handler:: DiffRtgOffset(%d), DrxMode(%d), restoreType(%d), sim_status(%d->%d), ChangeRxModeSimStatus(%d)
Line 766: ##[NR_DRX] L1C_L1C_DRXCTRLR_SYSVALID_DONE_IND_Handler:: DiffRtgOffset(%d), DrxMode(%d), restoreType(%d), sim_status(%d->%d), ChangeRxModeSimStatus(%d)
Line 778: ##[NR_DRX] L1C_L1C_DRXCTRLR_SYSVALID_DONE_IND_Handler:: Skip restore ReqStack(%d) CurDomainType(%d)
Line 790: ##[NR_DRX] %s:: Skip Restore. restoreType(%d->%d)
Line 838: ##[NR_DRX] L1C_L1C_DRXCTRLR_RESTORE_CNF_Handler:: RestoreStatus(%d) restoreType(%d)
Line 839: ##[NR_DRX] L1C_L1C_DRXCTRLR_RESTORE_CNF_Handler:: RestoreStatus(%d) restoreType(%d)
Line 868: ##[NR_DRX] SendL2RestoreReq
Line 892: ##[NR_DRX] SendL2RestoreReq
Line 911: ##[NR_DRX] WakeupDoneIndHandlerBase WakeupCause(%d)
Line 912: ##[NR_DRX] WakeupDoneIndHandlerBase WakeupCause(%d)
Line 923: ##[NR_DRX] DSDS Restore is done)
Line 932: ##[NR_DRX] Abnormal DRX ctrlr state(%d)
Line 967: ##[NR_DRX] %s, unexpected msgSrcId(%d)
Line 992: ##[NR_DRX] %s, Receive: MEAS_STOP_CNF tx_on_going(%d) module_meas_ongoing(%d) MeasStopType(%d)
Line 1023: ##[NR_DRX][NR_TX] L1C_L1C_SCCCTRLR_TX_MODE_CHANGE_CNF_Handler - tx_mode(before: 0x%x, after: 0x%x)
Line 1059: ##[NR_DRX] L1C_L1TUNNEL_NR_4G_INFO_REQ_Handler - operation_mode(%d) info_type(%d) lte_tx_path(%d) CurTxMode(0x%x) ueState(%d)
Line 1115: ##[NR_DRX] L1C_L1C_EVENTSCHEDINFOCTRLR_EXCEPTION_IND_Handler - EventId: %u, ExceptionCause: %u tx_req(%d)
Line 1195: ##[NR_DRX] L1C_L1C_EVENTSCHEDINFOCTRLR_EXCEPTION_IND::Unexpected RSM_STOP
Line 1218: ##[NR_DRX] L1C_L1C_EVENTSCHEDINFOCTRLR_EXCEPTION_IND_Handler - invalid DR state, retry Request event
Line 1343: ##[NR_DRX] L1C_L1C_EVENTSCHEDINFOCTRLR_RSRC_EXCEPTION_IND_Handler - unexpected IND
Line 1358: ##[NR_DRX] L1C_L1C_EVENTSCHEDINFOCTRLR_RSRC_EXCEPTION_IND_Handler - Ignore RSRC_EXCEPTION_IND in CtrlrState %d
Line 1384: ##[NR_DRX][NR_TX] unexpected RSRC_EXCEPTION_IND - req_tx_mode(0x%x) curTxMode(0x%x) ResourceResponse(%d)
Line 1406: ##[NR_DRX][NR_TX] unexpected RSRC_EXCEPTION_IND - req_tx_mode(0x%x) curTxMode(0x%x) ResourceResponse(%d)
Line 1417: ##[NR_DRX][NR_TX] L1C_L1C_EVENTSCHEDINFOCTRLR_RSRC_EXCEPTION_IND_Handler - ResourceId(%u), ResourceResponse(%d) req_tx_mode(0x%x) support_tx_mode(%d, 0=1TX/1=2TX)
Line 1439: ##[NR_DRX] L1C_L1C_EVENTSCHEDINFOCTRLR_COMMON_INFO_IND_Handler - InfoType: %u, EarlyPauseTime: %u
Line 1457: ##[NR_DRX] Skip L1C_L1C_EVENTSCHEDINFOCTRLR_COMMON_INFO_IND:: ModemStatus is false
Line 1471: ##[NR_DRX] SendCommonInfoInd:: Cur(pal_time(%d), abs_ept_time(%d))/ Cur systime(sfn(%d), sub_frm(%d), offset(%d), scs(%d))
Line 1480: ##[NR_DRX] SendCommonInfoInd:: ept_delta_us(%d), ept_delta_sfn(%d), ept_delta_slot(%d), regroup_slot(%d), ept_sfn(%d), ept_slot(%d), bIsEarlyPause(%d)
Line 1498: >> Fail to send SENSOR_NR_CMD(%d) for CONCON_IND
Line 1519: ##[NR_DRX] L1C_L1C_IRATCFGCTRLR_RELEASE_ALL_REQ_Handler()
Line 1559: ##[NR_DRX] RF TX is already off
Line 1610: ##[NR_DRX] L1C_L1C_IRATCFGCTRLR_ALL_STOP_REQ_Handler()
Line 1652: ##[NR_DRX] RF TX is already off
Line 1698: ##[NR_DRX] skip ProcDrxConfirmInd. SleepState(%d), modem_state(%d)
Line 1711: ##[NR_DRX] skip ProcDrxConfirmInd. sleepAvailRange(%d)
Line 1715: ##[NR_DRX] ProcDrxConfirmInd:: type(%d) ueState(%d) SleepState(%d) sleepTimeUs(%d) SleepAvailTimeUs(%d) DomainType(%d)
Line 1716: ##[NR_DRX] ProcDrxConfirmInd:: type(%d) ueState(%d) SleepState(%d) sleepTimeUs(%d) SleepAvailTimeUs(%d) DomainType(%d)
Line 1730: ##[NR_DRX] ProcDrxConfirmInd:: skip PS event update. DrxConfig(%d), sleepTime(%d), SleepAvailTimeUs(%d) SleepDisableRegiVal(%d)
Line 1766: ##[NR_DRX] ProcDrxConfirmInd:: DrxMeasMode before paging. sleepTimeUs(%d) MeasModeTmrUs(%d)
Line 1774: ##[NR_DRX] ProcDrxConfirmInd:: MIF change before paging. MeasModeTmrUs(%d)
Line 1781: ##[NR_DRX] ProcDrxConfirmInd:: skip Paging event update. RSM_PAGING state(%d), sleepTimeUs(%d), SleepAvailTimeUs(%d), SleepDisableRegiVal(%d)
Line 1789: ##[NR_DRX] pIdleRlmCheckIndMsg:: Send
Line 1807: ##[NR_DRX] ProcDrxConfirmInd:: DrxMeasMode for SSB tracking. MeasModeTmrUs(%d)
Line 1814: ##[NR_DRX] WARNING: UNEXPECTED DRX TYPE
Line 1835: ##[NR_DRX] L1C_L1C_DRXCTRLR_DSDS_PAUSE_IND_Handler
Line 1836: ##[NR_DRX] L1C_L1C_DRXCTRLR_DSDS_PAUSE_IND_Handler
Line 1869: ##[NR_DRX] L1C_L1C_DRXCTRLR_WAKEUP_REJECT_IND_Handler(): WakeupCause(%d)
Line 1892: ##[NR_DRX] L1C_L1C_DRXCTRLR_TX_PAUSE_CNF_Handler
Line 1914: ##[NR_DRX] L1C_L1C_DRXCTRLR_TX_RESUME_CNF_Handler()
Line 1933: ##[NR_DRX] L1C_L1C_DRXCTRLR_SLEEP_CNF_Handler():: req_type(%d)
Line 1934: ##[NR_DRX] L1C_L1C_DRXCTRLR_SLEEP_CNF_Handler():: req_type(%d)
Line 1991: ##[NR_DRX] L1C_L1C_DRXCTRLR_SCELL_STATUS_UPDATE_IND_Handler:: ActScell(%d->%d), ConfigScell(%d->%d)
Line 2019: ##[NR_DRX] L1C_L1C_DRXCTRLR_DRX_MEASMODE_CNF_Handler:: DrxMeasMode(%d) CtrlrState(%d) isParalSleep(%d)
Line 2077: ##[NR_DRX] L1C_L1C_DRXCTRLR_PHY_CHANGE_INFO_REQ_Handler:: tx_rsc_reset(%d), new_ul_rank(%d), ctrlr_state(%d), msgSrcId(%d)
Line 2090: ##[NR_DRX][NR_TX] L1C_L1C_DRXCTRLR_PHY_CHANGE_INFO_REQ_Handler:: Skip Sub Tx off. cur_tx_mode(%d), cur_num_tx(%d), freq_range(%d, 0:FR1/1:FR2), domain_type(%d)
Line 2106: ##[NR_DRX][NR_TX] L1C_L1C_DRXCTRLR_PHY_CHANGE_INFO_REQ_Handler:: tx_mode(cur1/new1)(%d), support_tx_mode(%d, 0=1TX/1=2TX), freq_range(%d, 0:FR1/1:FR2), domain_type(%d)
Line 2115: ##[NR_DRX][NR_TX] L1C_L1C_DRXCTRLR_PHY_CHANGE_INFO_REQ_Handler:: GetEventState(%d), GetTxSysState(%d)
Line 2151: ##[NR_DRX] %s
Line 2152: ##[NR_DRX] %s
Line 2192: ##[NR_DRX] %s
Line 2225: ##[NR_DRX] SchedWakeupRejCb:: WakeUp Event(%d)
Line 2235: ##[NR_DRX] SchedWakeupRejCb:: Invalid EventId(%d)
Line 2259: ##[NR_DRX] %s, CtrlrState(%d) IsL2TxReq(%d) TxSysState(%d) CurTxMode(0x%x)
Line 2277: ##[NR_DRX][NR_TX] No need to send Tx Resource Req
Line 2332: ##[NR_DRX] PreModemOnOffCb()
Line 2348: ##[NR_DRX] SleepConfigCmdCnfCb()
Line 2366: ##[NR_DRX] LcpuStorePhyCfgCb: DrxType(%d), cmd_res(%d)
Line 2391: ##[NR_DRX] SysParamChgCb, Cmd res(%d) DrxType(%d) DrxMode(%d)
Line 2437: ##[NR_DRX][NR_TX] HAL->DrxNr@%s, on_off_type(%d), cur_tx_mode(0x%x)
Line 2459: ##[NR_DRX] DrxMeasModeCb, DrxMeasMode(%d) rx_mode(%d) UeState(%d) CtrlrState(%d)
Line 2470: ##[NR_DRX] Skip DrxMeasMode CtrlrState(%d) IsL2TxReq(%d)
Line 2481: ##[NR_DRX] DrxMeasModeCb::RSM_SYSINFO
Line 2497: ##[NR_DRX] DrxMeasMode::Timer update(%d -> %d)
Line 2501: ##[NR_DRX] DrxMeasMode::RemainTmr(%d < %d) Send resume IPC
Line 2534: ##[NR_DRX] Skip DrxMeasModeCb:: modem_state(%d)
Line 2557: ##[NR_DRX] TxOffWithSwapCb 
Line 2575: ##[AS] %s, receive: AS_EN_NR_CMD Command to HAL
Line 2595: ##[NR_DRX] GetWakeupTime:: Default BWP IAT, wakeupTimeUs(%d->%d), DefaultBwpIatTime(%d) SleepSubFrame(%d)
Line 2597: ##[NR_DRX] GetWakeupTime:: Default BWP IAT, wakeupTimeUs(%d->%d), DefaultBwpIatTime(%d) SleepSubFrame(%d)
Line 2608: ##[NR_DRX] GetWakeupTime:: TX overlap, MinTxSet(%d) TxOverlapUs(%d) wakeupTimeUs(%d->%d)
Line 2609: ##[NR_DRX] GetWakeupTime:: TX overlap, MinTxSet(%d) TxOverlapUs(%d) wakeupTimeUs(%d->%d)
Line 2623: ##[NR_DRX] %s:: sleepTimeInUs(%d) WakeupTime(%d) CurTime(%d/%d/%d)
Line 2625: ##[NR_DRX] %s:: sleepTimeInUs(%d) WakeupTime(%d) CurTime(%d/%d/%d)
Line 2640: ##[NR_DRX] CheckWakeupDoneTimeValidity: diff(%d), margin(%d)
Line 2654: ##[NR_DRX] CheckWakeupDoneTimeValidity: dmUpdateBigDataPMLI(cause(%d), PmliCnt(%d)
Line 2686: ##[NR_DRX] GetWakeupTimeDiff: diff(%d)(curTimeUs(%d) wakeupTimeUs(%d) wakeupTimeOffset(%d))
Line 2687: ##[NR_DRX] GetWakeupTimeDiff: diff(%d)(curTimeUs(%d) wakeupTimeUs(%d) wakeupTimeOffset(%d))
Line 2708: ##[NR_DRX] CompenWakeupTime: Update SleepMarginUs(%d -> %d) diff(%d)
Line 2709: ##[NR_DRX] CompenWakeupTime: Update SleepMarginUs(%d -> %d) diff(%d)
Line 2729: ##[NR_DRX][NR_TX] TxPathSwapCb, on_off_type(%d), cur_tx_mode(0x%x), mode_chg_type(%d)
Line 2760: ##[NR_DRX][NR_TX] TxModeChangeCb, mode_chg_type(%d), on_off_type(%d), cur_tx_mode(0x%x)
Line 2778: ##[NR_DRX][NR_TX] TxModeChangeOff
Line 2805: ##[NR_TX] ProcTxPathOnOff:: ParallelSleep(%d), Event(%d)
Line 2841: ##[NR_DRX][NR_TX] SubTxOnOffCb, mode_chg_type(%d), on_off_type(%d), cur_tx_mode(0x%x)
Line 2991: ##[NR_DRX] ProcDrxConfirmInd:: Skip Handshake. Status(%d)[1:Skip only, 2: MeasReserv]
Line 3030: ##[NR_DRX] ProcSleepInd:: Start Sleep, ParallelSleep(%d)
Line 3031: ##[NR_DRX] ProcSleepInd:: Start Sleep
Line 3064: ##[NR_DRX] ProcSleepInd:: Start BPLMN
Line 3080: ##[NR_DRX] ProcSleepInd:: Skip Sleep
Line 3107: ##[NR_DRX] ProcSleepInd:: Wait for TX_ONOFF_NR_CMD DONE (%d us)
Line 3113: ##[NR_DRX] ProcSleepInd:: SendSleepReq (ParallelSleep is on-going)
Line 3124: ##[NR_DRX][WARNING] ProcSleepInd:: Unexpected Type
Line 3150: ##[NR_DRX] UpdateMeasReservWakeupTime:: wakeupTime(%d -> %d), updateMargin(%d), DrxType(%d) MeasReserved(%d)
Line 3152: ##[NR_DRX] UpdateMeasReservWakeupTime:: wakeupTime(%d -> %d), updateMargin(%d), DrxType(%d) MeasReserved(%d)
Line 3187: ##[NR_DRX][WARNING] UpdateExpectedEvent:: Unexpected DrxType(%d)
Line 3213: ##[NR_DRX] SleepStart: SleepReason is changed to NR_SW_SLEEP. PeerIrat(%d), IratHo(%d)
Line 3221: ##[NR_DRX] SleepStart: DrxMode(%d) HwModemState(%d) SleepTime(%d)
Line 3239: ##[NR_DRX] HoldStart:: DrxMode(%d)
Line 3282: ##[NR_DRX] HwWakeupRejectStart(): WakeupCause(%d)
Line 3305: ##[NR_DRX] SwWakeupRejectStart(): WakeupCause(%d) RejectCause(%d)
Line 3344: ##[NR_DRX][NR_TX] TxOnOffStart:: tx_on_type(%d), target_bwp_idx(%d), scell_idx(%d), hsch_event_state(%d), active_state(%d) CtrlrState(%d)
Line 3399: ##[NR_DRX][NR_TX] State Mismatch between RSM(RUN_HSCH) and TxSysState(TX_OFF)
Line 3406: ##[NR_DRX][NR_TX] TxOnOffStart:: Invalid EventState(%d)
Line 3420: ##[NR_DRX] TxOnOffEvent
Line 3422: ##[NR_DRX] TxOnOffEvent Done
Line 3424: ##[NR_DRX] Skip Tx path on, Tx Resource RSM_WAIT/RSM_STOP
