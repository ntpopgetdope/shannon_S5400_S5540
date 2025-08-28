Line 221: [MTPL] GetMtplRsiMos_RegId_By_Name: NV Name(%s)
Line 253: [MTPL] (ant:%d) TA_RSI %d 
Line 264: [MTPL] (ant:%d) power_mos %d mosbit %d
Line 267: [MTPL] (ant:%d) TA_MOS %d 
Line 285: [MTPL] (ant:%d) sum_sar_rsi_mos %d pmax_ave %d
Line 294: [MTPL] (ant:%d) sum_rsi_mos(%d) p_max_RSI0(%d) pmax_ave(%d) pmax_inst:%d
Line 334: isTASEnabledUsingMTPL: %d
Line 339: InputRsi: %d
Line 347: [MTPL] incorrect input_rsi[0] %d input_rsi[1] %d input_rsi[2] %d input_rsi[3] %dNB_MAX_NUM_OF_MTPL_RSI %d
Line 350: [MTPL] input_rsi[0] %d input_rsi[1] %d input_rsi[3] %d input_rsi[4] %d RSI_value_NV:%d 
Line 355: [MTPL] invalid mosNv Value %d
Line 361: [MTPL] input_mos[0] %d input_mos[1] %d input_mos[2] %d input_mos[3] %d MOS_value_NV:%d
Line 365: [MTPL] pmax_offset %d pe_max %d
Line 370: [MTPL] RF Band (%d, %d) is not supported.
Line 374: [MTPL] band_index[0] %d rf_band %d
Line 376: [MTPL] Active AntOffset: %d
Line 485: [DSP] (ST%d) NBHALDSP_SetMTPL : input_rsi(%d), input_mos(%d) CurUeState(%d)
Line 504: [MTPL] NBHALDSP_SetMTPL(TAS:%d / PmaxAveByMTPL) -> gHal_PmaxAveX10[%d]:%d, gHal_PmaxInstX10[%d]:%d, gHal_InactivePmaxAveX10[%d]:%d, gHal_InactivePmaxInstX10[%d]:%d
Line 509: [MTPL] NBHALDSP_SetMTPL(TAS:%d / PmaxAveByNV) -> gHal_PmaxAveX10[%d]:%d, gHal_InactivePmaxAveX10[%d]:%d 
Line 516: [MTPL] NBHALDSP_SetMTPL: Failed to Apply MTPL: Applying gHal_PmaxAveX10[%d, %d] to set Pmax
Line 522: [MTPL] NBHALDSP_SetMTPL: UE state is RACH, Applying gHal_PmaxAveX10[%d, %d] to set Pmax
Line 526: [MTPL] (ST%d) Current MTPL (%d, %d, %d, %d), Current Ant(%d)
Line 576: [MTPL] (ST%d) txAnt(%d) mtplPower(%d)
Line 600: [SAR][ST%d] (Before)IsSarBudgetLow(%d) RemainPowGauge(%d) SarBudgetLowTh(%d) SarBudgetHighTh(%d) TotalSarBudgetLowDuration(%d)
Line 609: [SAR][ST%d] IsSarBudgetLow(F->T) because RemainPowGauge(%d) < SarBudgetLowTh. TotalSarBudgetLowDuration(%d)
Line 619: [SAR][ST%d] IsSarBudgetLow(T->F) because RemainPowGauge(%d) < SarBudgetLowTh. TotalSarBudgetLowDuration(%d)
Line 627: [SAR][ST%d] IsSarBudgetLow(T->T). TotalSarBudgetLowDuration(%d) RemainPowGauge(%d)
Line 633: [SAR][ST%d] IsSarBudgetLow(F->F). TotalSarBudgetLowDuration(%d) RemainPowGauge(%d)
Line 675: [MTPL] (ST%d) PMaxLimit(%d) PMaxLast(%d) maxPower(%d)
Line 731: [DSP] RX mode enabling status Change for ST%d (%d -> %d)
Line 783: NBHALDSP_ProcAbnormalPwrHisr
Line 839: [DSP] QSleepStatus (%d -> %d)[%d, %d]
Line 885: [DSP] HALDSP_ChangeDspClock : change[%d] cpuOwnerMask[%d] - Cannot make cpuOwnerMaks
Line 890: [DSP] HALDSP_ChangeDspClock : change[%d] cpuOwnerMask[%d] - DSP LOG OFF
Line 895: [DSP] HALDSP_ChangeDspClock : change[%d] cpuOwnerMask[%d]
Line 908: [DSP] HALDSP_ChangeDspClock : CPU CLK change to SVC_4G_REL13 OwnerMask[%d]
Line 918: [DSP] HALDSP_ChangeDspClock : CPU CLK change to SVC_NO_SVC OwnerMask[%d].
Line 923: [DSP] HALDSP_ChangeDspClock : Wrong command(%d)
Line 946: [DSP] IPC_ACTION_ID_SUBCORE_CTRL_IND(%d) 
Line 964: [DSP] IPC_ACTION_ID_STORE_DSPPARAM, backup_han_ta_acc[0](%d)
Line 1039: [DSP] power : wrong state(%d), Ready(0x%x)
Line 1041: [DSP] power : NBHALDSP_SetPowerReady(0x%x)
Line 1073: [DSP] NBHALDSP_SetDynamicQsDisable(skip): TdpState(%d)
Line 1087: [DSP] NBHALDSP_SetDynamicQsDisable(skip):SCG(eDV_Active(%d))
Line 1103: [DSP] HALDSP_SetDynamicQsDisable(QS disabled with registry), skip sending IPC 
Line 1115: [DSP] HALDSP_SetDynamicQsDisable(%d -> %d) scell_start(%d) scell_status(%d)
Line 1136: funcName = %s, QS Disable(%d us delay) for scell_start(%d)
Line 1157: [DSP] Skip IPC_ACTION_ID_LTE_DSP_UL_INIT
Line 1163: [DSP] IPC_ACTION_ID_LTE_DSP_UL_INIT
Line 1241: [DSP] HALDSP_ChangeDspClock : CPU CLK change to QOS_NBNTN_PHY_MODEM_BASE cpu_freq_mode[%d]
Line 1259: Check PowerOnModemSub @HALDSP_SetActiveRatInfo(ConnDr_S(%d))
Line 1315: [DSP] IPC_ACTION_ID_LTE_DSP_MEAS_INIT: cc(%d), div_cc(%d), td_buf_idx(%x) td_buf_idx_div(%x), td_buf_size(%d), n2l_Flag(%d)
Line 1330: [DSP] IPC_ACTION_ID_LTE_DSP_MEAS_INIT: cc(%d), div_cc(%d), td_buf_idx(%x) td_buf_idx_div(%x), td_buf_size(%d), n2l_Flag(%d)
Line 1335: [DSP] IPC_ACTION_ID_LTE_DSP_MEAS_INIT(%d)
Line 1384: [DSP] DSP RELEASE DONE. Check LVD status.
Line 1421: [4G_DRDS] restore Dynamic QS (4G_DRDS deact)
Line 1427: [4G_DRDS] RF_Update_DR_Band_info(clear)
Line 1466: [DSP] HALDSP_ChangeDspClock : CPU CLK change to SVC_NO_SVC OwnerMask[%d].
Line 1475: [DSP] SetActiveRatInfo: rat(%d)
Line 1524: [DSP] Modem Status: % d, RF available: %d
Line 1525: [DSP] Skip sending IPC: IPC_ACTION_ID_TDP_CONFIG
Line 1580: [DSP] IPC_ACTION_ID_TDP_CONFIG - Ca_Act(%d), Cc_Idx(%d)
Line 1587: [DSP] IPC_ACTION_ID_TDP_CONFIG: cell_group(%d)
Line 1591: [DSP] IPC_ACTION_ID_TDP_CONFIG: cc(%d), tdp_enable(%06x), lastTdpConfig(%06x)
Line 1592: [DSP] IPC_ACTION_ID_TDP_CONFIG: cc(%d), tdp_enable(%06x), lastTdpConfig(%06x)
Line 1629: [TxTime] power_index(%d %d %d %d %d)
Line 1655: [DSP] Modem Status: %d  RF available: %d, SKIP IPC_ACTION_ID_SI_UPDATE 
Line 1695: [DSP] IPC_ACTION_ID_SI_UPDATE: cc(%d), td_buf_idx(%x) td_buf_idx_div(%x), td_buf_size(%d)
Line 1699: [DSP] IPC_ACTION_ID_SI_UPDATE: cell_group[MCG], mode(%d)
Line 1730: [DSP] Modem Status: % d	RF available: %d
Line 1738: [DSP] command PENDING:[%d]IPC_ACTION_ID_UL_BW
Line 1742: [DSP] command PENDING Q FULL!!:[%d]IPC_ACTION_ID_UL_BW
Line 1764: [DSP] IPC_ACTION_ID_UL_BW: cell_group(%d), cc(%d), bw(%d), cp_type(%d)
Line 1862: [DSP] Modem Status: % d, RF available: %d, SKIP IPC_ACTION_ID_PHY_SIB
Line 1874: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_SIB
Line 1878: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_SIB
Line 2017: [DSP] IPC_ACTION_ID_PHY_SIB: cell_group(%d)
Line 2166: [DSP](C) Pucch_r10 copyng .r10_valid:%d, format3 setup:%d
Line 2223: [DSP](C) Pucch_r10 invalid .
Line 2495: [DSP](C) Pucch_r13 copying .r10_valid:%d, format3 setup:%d
Line 2521: [DSP](C) pucch_format3_setup:%d, list_cnt:%d
Line 2547: [DSP](C) pucch_an_cs_setup:%d, list_cnt:%d
Line 2566: [DSP](C) pucch_an_cs_setup:%d, list_cnt:%d
Line 2585: [DSP](C) pucch_an_cs_setup:%d, list_cnt:%d
Line 2655: [DSP]Pucch_r13 spatial bundling : % d,r13 valid : %d format3 setup: %d, codebook_size_determination_r13_setup: %d, max_payload_coderate_r13_setup: %d
Line 2679: [DSP]Pucch_v1370  dsp_pucch_v1370->valid = %d
Line 2684: hal_tx : dsp_pucch_v1370->valid = %d
Line 2914: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 2919: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_CONFIGURE
Line 2923: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_CONFIGURE
Line 2980: [DSP][DEBUG] IPC_ACTION_ID_PHY_CONFIGURE: MIMOsetup(%d), maxLayer(%d)
Line 2986: [DSP] IPC_ACTION_ID_PHY_CONFIGURE: cell_group(%d)
Line 3014: [DSP] HALDSP_ControlIdleDtxOnOff: cc(%d) onoff(%d)
Line 3018: [DSP] HALDSP_ControlIdleDtxOnOff: Invalid input cc(%d)
Line 3074: [DSP] PHYP_C2P_LTE_IDLE_DTX: CC%d on(%d) status(%d)
Line 3104: [DSP] NBHALDSP_SetAntSwitch: ueState = %d currentSelectedAnt [%d %d] selectedAnt [%d %d]
Line 3117: [DSP] NBHALDSP_SetAntSwitch: The current antenna and target antenna are the same.
Line 3270: [NBIoT-DEC]:
Line 3314: [NBDSP] PHY_L2_NBIOT_RACH_MSG3_CONFIG_IND
Line 3337: [NBDSP] IPC_ACTION_ID_RNTI_MANAGE: RNTI[%d] = 0x%04X
Line 3362: [NBDSP] IPC_ACTION_ID_TA_AD [TA : %d](HARQ ID:%d)
Line 3385: [NBDSP] IPC_ACTION_ID_TA_TIMER [state : %d]
Line 3413: [NBDSP] PHY_L2_NBIOT_UL_GRANT_CNF [HID : %d]
Line 3442: [NBDSP] IPC_NBIOT_DIFFERENTIAL_KOFFSET_IND : DiffKoffset[%d]
Line 3484: CQI_NPDCCH : %d
Line 3571: [SAR] HALDSP_GetLinearValue: dBmPwrx10(%d) linearVal(%d) LinearScale(%d)
Line 3610: [SAR] HALDSP_GetdBmValue:: Input(Linear):%d, Output(dBm):%d
Line 3687: [SAR] HALDSP_GetdBmValue2:: LinearVal(%d) = LinearValIntgr(%d) + LinearFrac(%d), DbmIdx(%d) LinearScale(%d)
Line 3724: [MTPL] (ST%d) No Pre-emptive power reduction for TAS refSarScaled(%d) sarLimit(%d) TxDutyRatioX100(%d).
Line 3733: [MTPL] (ST%d) No Pre-emptive power reduction for TAS gHal_PrevPmaxAveX10(%d) gHal_PmaxAveX10(%d) Antenna(%d) CurUeState(%d) Flag(%d)
Line 3754: [MTPL] (ST%d) Pre-emptive cuts PmaxInst from(%d) to(%d)(%d) with sarLimit(%d) refSarScaled(%d) TxDutyRatio(%d)
Line 3759: [MTPL] (ST%d) No Pre-emptive power reduction for TAS from(%d) to(%d)(%d) with sarLimit(%d) refSarScaled(%d) TxDutyRatio(%d)
Line 3764: [MTPL] (ST%d) No Pre-emptive power reduction for TAS PrevPLimit(%d) PmaxAveX10(%d).
Line 3826: [SAR][ST%d]HALDSP_CheckTapcMccType: TAS NV(%d) is not enabled)
Line 3845: [SAR][ST%d] Set gSARperiodM(%d) and gSarRemIdxOffset(%d)
Line 3872: [Spatial TAS][ST%d] InitAntPowLimitX10
Line 3896: [Spatial TAS][ST%d] HALDSP_InitTASPLimitforTxAS
Line 3960: [SAR][ST%d] HALDSP_InitSAR! periodM(%d) gSARCompliance(%d) gSARsumLimit(%d) IsSpatialTASEnable(%d)
Line 4000: [Spatial TAS]MakeRMatrix: [SEARCH_IDX] 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X
Line 4019: [Spatial TAS]MakeRMatrix: i(%d) j(%d) BandGrp(%d) PathType(%d) ThruSwap(%d)
Line 4020: [Spatial TAS]MakeRMatrix: [R MATRIX ORIGIN] %d %d %d %d %d %d %d %d
Line 4034: [Spatial TAS]MakeRMatrix: [O MATRIX] %d %d %d %d %d %d %d %d
Line 4099: [Spatial TAS][ST%d]CalcConvergedRMatrix: [R MATRIX] %d %d %d %d %d %d %d %d
Line 4149: [Spatial TAS] HALDSP_InitTAS: BandGrp(%d) PathType(%d) ThruSwap(%d) AntCouplingInfo(%d)
Line 4248: [SAR] SarBudgetLowTh(%d) SarBudgetHighTh(%d) TotalSarBudgetLowDuration(%d)
Line 4304: [Spatial TAS]PrintRMatrix: [R MATRIX ORIGIN] %d %d %d %d %d %d %d %d
Line 4309: [Spatial TAS]PrintRMatrix: [R MATRIX] %d %d %d %d %d %d %d %d
Line 4341: [SAR][ST%d] InitSAR() instead of ReInitSAR() due to Abnormal condition(hal_SAR_total_remain(%d):out of range)
Line 4348: [SAR][ST%d] HALDSP_ReInitSAR(IRAT or Resume)! hal_SAR_total_remain(%d) start index(%d)
Line 4386: [SAR][ST%d][HALDSP_ImportTapcParam:INIT] SARperiodM(%d) gSARIsQFull(%d) gSARStrQCnt(%d) PowAllocRatioPrev(%d) G1ExpSar(%d) IsNewWindowStarted(%d)
Line 4406: [SAR][ST%d][HALDSP_ImportTapcParam:IRAT] SARperiodM(%d) gSARIsQFull(%d) gSARStrQCnt(%d) PowAllocRatioPrev(%d) G1ExpSar(%d) IsNewWindowStarted(%d)
Line 4419: [SAR][ST%d][HALDSP_ImportTapcParam:MPeriodChange] SARperiodM(%d -> %d) gSARIsQFull(%d) gSARStrQCnt(%d) IsNewWindowStarted(%d)
Line 4423: [SAR][ST%d][HALDSP_ImportTapcParam] TapcPrevRatInfoCurST(%d) TapcPrevRatInfoOppoST(%d) PrevStack(%d)
Line 4520: [SAR][ST%d] [Event Occurrence] PLimitX10(%d -> %d) AntGrpIdx(%d -> %d) IsWayOutLimitedTAS(%d)
Line 4617: [Spatial TAS][ST%d] GetCurBandGroup: [Error] BandGroup is not detected for band[%d] !!!
Line 4627: [Spatial TAS] GetCurBandGroup: Current Band: RFBandGroup[%d] 
Line 4668: [Spatial TAS]GetAntCouplingInfo:[Error] CouplingDb Idx Not Found!!!
Line 4672: [Spatial TAS][ST%d]GetAntCouplingInfo: BandGrp[%d], TxPathType[%d], TxThruSwap[%d] CurAntGrpIdx[%d]
Line 4675: [Spatial TAS][ST%d]GetAntCouplingInfo: SwitchCurAntGrpIdx[%d/%d/%d/%d] AntCouplingDbIdx(%d -> %d)
Line 4700: [Spatial TAS] COMMON.TAS.ANTENNA.COUPLING_EN[%d]
Line 4755: [SAR][ST%d] TestMode disabled
Line 4770: [SAR][ST%d] Check UeState(%d)
Line 4809: [SAR][ST%d] [BAND_CHANGE] BAND(%d -> %d) --> Updating TxDutyRatioX100(%d) is required
Line 4890: [SAR][ST%d] gHal_TapcMode(%d) TxDutyRatioX100(%d) IsSpatialTasEnable(%d) SARperiodM(%d) PMaxLimit(%d) gSARPLimitX10(%d)
Line 4892: [SAR][ST%d] PowSumLinear(%d), AvgTxPowLinear(%d) PowDbmX10(%d) Pow10ValForSar(%d) SarTotalWin(%d) remainTx0(%d)
Line 4894: [SAR][ST%d] PlimitInNV[0/1/2/3](%d/%d/%d/%d) SAR_IsApproval(%d) RefSarScaled(%d) AsStatus(%d)
Line 4896: [SAR][ST%d] SwitchSARPLimitX10[0/1/2/3](%d/%d/%d/%d)
Line 4898: [SAR][ST%d] SwitchRefSarScaled[0/1/2/3](%d/%d/%d/%d)
Line 4922: TAPC Mode is changed (%d -> %d)
Line 4985: [SAR] [ST%d] Skip(%d) Remain(%d) ActualSkip(%d) prevtime(%d) curtime(%d) time_diff(%d)
Line 5029: [SAR] [ST%d] InitializeDueToEvent: [ANT IDX ARRAY INIT] CurAntCouplingDbIdx(%d) CurAntGrpIdx(%d)
Line 5047: [SAR] [ST%d] HALDSP_UpdateTapcFlag: remainPatialM(%d) IsTxed(%d)
Line 5111: [SAR][ST%d] reset gReducedSarTotalRemain(%d) -> (%d)
Line 5116: [SAR][ST%d] G1ExpSar(%d) gSARCompliance_AfterGain(%d) gSARsumLimit_AfterGain(%d) gReducedSarTotalRemain(%d)
Line 5121: [SAR][ST%d] SAR_index(%d) RefSarScaled(%d) X_Used_SAR[Tx0] (%d) C_Used_SAR[Tx0] (%d) 
Line 5163: [SAR][ST%d] InitializeDueToEvent: [OffsetEvent CHANGED] OffsetCalcX100(%d) OffsetCalcX1000(%d) PrevSarLimitUpper(%d) gSARCompliance(%d)
Line 5169: [SAR][ST%d] InitializeDueToEvent: [OffsetEvent CHANGED] [Limited TAS WayOut]
Line 5173: [SAR][ST%d] InitializeDueToEvent: OffsetEvent(%d) IsCurPLimitSmaller(%d) IsOrthoAntGrpChanged(%d) IsLowOffsetMode(%d)
Line 5213: [SAR][ST%d] Pmax_inst(%d) PMaxLimit(%d) PeMaxByNetwork(%d) gSARPLimitX10(%d) Pow10ValForPmaxInst(%d) SarLimitUpperOrigin(%d)
Line 5229: [SAR] [Setup Stage]G1ExpSar is (%d)
Line 5282: [SAR] No Primary Tx used for N(250ms): M[ST%d](hal_SAR_index:%d) 
Line 5290: [SAR] [ST%d] HALDSP_InitSAR: Skip(%d) exceeds Mperiod(%d)
Line 5353: [SAR][ST%d] Current Max Limit is %d.%d dBm. SarLimitUpper(%d) SarSuppress(%d) SarBackOff(%d) AntSwitchingEn(%d) AntSwitchingEnNV(%d)
Line 5356: [SAR][ST%d] (M:%d) TAPC status: tapc_case(%d) TAPC Pmax(%d) gSarLimit(%d) DbmComplianceX10(%d) AvgSar(%d) TasMode(%d)
Line 5451: [SAR][ST%d][%d] hal_SAR_index(%d) SumSkippedSar(%d), exSarRemain(%d)
Line 5453: [SAR][ST%d][%d] SAR_remain[exIndex(%d)] (%d) SAR_remain[skipIndex(%d)](%d)
Line 5463: [SAR][ST%d] UpdateSarRemain(Before): SAR_index(%d) SAR_Remain(%d) remainPartial(%d) Remnant(%d)
Line 5472: [SAR][ST%d] GetSarRemaining: PrevSarRemaining:(%d) index_ToBeDeleted(%d) hal_SAR_remain(%d)
Line 5484: [SAR][ST%d] UpdateSarRemain: gSARIsQFull(%d) gSARStrQCnt(%d) hal_SAR_ant_idx[%d]%d PrevFinalSarRemain(%d)
Line 5487: [SAR][ST%d] UpdateSarRemain(After): SAR_index(%d) SarTotRemain(%d) SumSkippedSar[Tx0](%d)
Line 5489: [SAR][ST%d] UpdateSarRemain(After): SAR_remain(%d)
Line 5524: [SAR][ST%d] reset hal_SAR_total_remain(%d)  -> (%d)
Line 5529: [SAR][ST%d] reset SarTotRemainTx0(%d)  -> (%d)
Line 5538: [SAR][ST%d] reset hal_SAR_total_remain(%d)  -> (%d)
Line 5543: [SAR][ST%d] reset SarTotRemainTx0(%d)  -> (%d)
Line 5582: [SAR][ST%d][NORMAL][PRE_SAV][SLOPECTRL2] SarLimit(%d) SarLimitGainx100(%d)
Line 5588: [SAR][ST%d][NORMAL][PRE_SAV][SLOPECTRL1] SarLimit(%d) due to gReducedSarTotalRemain(%d) >= AMulSarBudget(%d), but gSARSlopeCtrlFlag(%d)
Line 5602: [SAR][ST%d][NORMAL][SUPPRESS] SarLimit(%d) due to gReducedSarTotalRemain(%d) >= AMulSarBudget(%d)
Line 5607: [SAR][ST%d][NORMAL][MAX] SarLimit(%d) (=RefSarScaled) due to gReducedSarTotalRemain(%d) >= AMulSarBudget(%d)
Line 5671: [SAR][ST%d] CheckSlopeStatus:: NewWindowFlag(%d) PrevSlopeCtrlFlag(%d) SlopeTh2(%d) OffsetEvent(%d)
Line 5679: [SAR][ST%d] CheckSlopeStatus: SlopeCtrlFlag(%d) CurSlope(%d) StartY60sAvg(%d) CurSlope_Th(%d) SarBackOff(%d)
Line 5724: [Spatial TAS][ST%d] CheckSpatialSlopeStatus: MyCurSlopeAvg(%d) MaxCurSlopeTh(%d) SlopeTh(%d) SlopeTh2(%d)
Line 5727: [Spatial TAS][ST%d] CheckSpatialSlopeStatus: SlopeCtrlFlag(%d) PrevSlopeCtrlFlag(%d) NewWindowFlag(%d) OffsetEvent(%d)
Line 5785: [SAR][ST%d][RESTORE][SAV_1] SarLimit(%d) due to gReducedSarTotalRemain(%d) >= GMulSarBudget(%d), < BMulSarBudget(%d)
Line 5795: [SAR][ST%d][RESTORE][MIN] SarLimit(%d) due to gReducedSarTotalRemain(%d) < GMulSarBudget(%d)
Line 5828: [SAR][ST%d] [SarSuppress APPLIED]
Line 5834: [SAR][ST%d] [SarLimitUpper APPLIED]
Line 5849: [SAR][ST%d] TasMode changed(%d -> %d): UpdateMTPLInfo(%d) is required
Line 5915: [SAR][ST%d][PostProcessStage] gSarLimit(%d) SARSupress(%d) gSARPLimitX10(%d) UsedAvgSar(%d) TxDutyRatioX100(%d) -> CalcMaxPowDbmx10(%d)
Line 5918: [SAR][ST%d][PostProcessStage] UsedAvgTxSar(%d) AvgPwrdBmX10(%d) gSarLimit(%d) gSARMaxLimitdB(%d)
Line 5921: [SAR][ST%d] TAS Status: Remain TX Pwr(%d)/Max SAR Limit(%d)*100 = RemainPowGauge(%d%%) AvgPwrdBmX10(%d)
Line 5927: [SAR][ST%d][NORMAL-TAPC] Pmax_inst(%d) is set (gHal_TapcMode:%d, SelectedAnt_txAnt(%d)
Line 5932: [SAR][ST%d][LIMITED-TAPC] Pmax_inst(%d) is set (gHal_TapcMode:%d)
Line 5937: [SAR][ST%d] gSARMaxLimitdB(%d) is changed as Pmax_inst(%d)
Line 5943: [SAR][ST%d] NBHALDSP_MonitorSARBudgetRemaining
Line 5991: [Spatial TAS][ST%d] SendPowerLimitToTxAS: AsStatus(%d) Pmax_inst[0](%d) Pmax_inst[1](%d) Pmax_inst[2](%d) Pmax_inst[3](%d)
Line 6000: [Spatial TAS][ST%d] SendPowerLimitToTxAS: [CUR ANT BACK OFF] CurAntPowLimitX10(%d) CurAntSarLimit(%d) CurAntPowLinear(%d)
Line 6020: [Spatial TAS][ST%d] SendPowerLimitToTxAS: [SW ANT BACK OFF] Ant(%d) SwAntPowLimitX10(%d) SwapAntGx100(%d) SwapAntSarLimit(%d) SwitchRefSarScaled(%d)
Line 6032: [Spatial TAS][ST%d] SendPowerLimitToTxAS: CurAntPowLimitX10(%d) SwAntPowLimitX10(%d/%d/%d/%d)
Line 6035: [Spatial TAS][ST%d] SendPowerLimitToTxAS: AntPowLimitX10[0/1/2/3](%d/%d/%d/%d)
Line 6038: [Spatial TAS][ST%d] SendPowerLimitToTxAS: MaxPowLinear(%d) SwAntTxAsCurSlopeMax(%d/%d/%d/%d) TxAsSlopeTh(%d)
Line 6073: [SAR][ST%d] SumSar_60s(%d) UsedAvgSar_60s(%d) UsedAvgSar(%d)
Line 6176: [Spatial TAS][ST%d] CalculateCurSlope: i(%d) CurSlopeAvg60s(%d) CurSlopeLocalAvg60s(%d) UsedAvgSar60s(%d) Rmatrix(%d) SarBackOff(%d)
Line 6178: [Spatial TAS][ST%d] CalculateCurSlope: i(%d) CurUsedAvgSar(%d) CurSlopeAvg(%d) CurSlopeLocalAvg(%d)
Line 6212: [Spatial TAS][ST%d] CalculateCurSlope: MaxCurSlopeAvg(%d) MaxUsedAvgSar(%d) MaxUsedAvgSarIdx(%d) MaxCurSlope(%d) MaxCurSlopeIdx(%d)
Line 6214: [Spatial TAS][ST%d] CalculateCurSlope: MyCurSlopeLocalAvg(%d) MaxCurSlopeAvgTx0(%d) SwitchCurSlopeAvg(%d/%d/%d/%d)
Line 6328: [Spatial TAS][ST%d] GetAntGrpIdx: [Error] BandGroup is not mapped to AntGrp!!!
Line 6332: [Spatial TAS] GetAntGrpIdx: BandGroup(%d) PathType(%d) ThruSwap(%d) - AntGrpIdx(%d)
Line 6383: [SAR][ST%d][LIMITED-TAPC] SarMaxInst(%d) CurSlope(%d) SarLimitedTas(%d) HalfSarLimitedTas(%d) MaxCurSlopeAvgTh(%d) 
Line 6386: [SAR][ST%d][LIMITED-TAPC] gHal_TapcMode(%d) G1ExpSar(%d) gSARSupress(%d) PrevG1ExpSar(%d) PLimitTASX10(%d) 
Line 6401: [SAR][ST%d][LIMITED-TAPC] SarMaxInstTh(%d) SarMaxInst(%d) LimitedTasMode(%d)
Line 6411: [SAR][ST%d][LIMITED-TAPC] TasLinear(%d) LimitedTapcPmaxInst(%d) PLimitTASX10(%d)
Line 6435: NBHALDSP_ProcAbnormalPwr
Line 6456: GetSinr (NSSS avg sinr : %d, NRS avg sinr : %d)
Line 863: [DSP] IPC_ACTION_ID_LTE_%s(%d: ST%d) WakeupInitType(%d), releaseType(%d) @ %s()
