Line 123: [TAS] GetUserTxPowWcdma: StackId(%d) UserTxPowLimit(%d)
Line 132: [TAS] GetTapcModeWcdma: TapcOn(%d)
Line 162: [TAS] GetUserTargetPowWcdma: StackId(%d) band(%d) PLimit(%d)
Line 166: [TAS] GetUserTargetPowWcdma: Invalid Idx(%d)
Line 182: [TAS] SetTapcModeWcdma: StackId(%d) TapcOn(%d)
Line 208: [TAS] SetUserTxPowWcdma: StackId(%d) TapcUserTxPowLimit(%d) UserTxPower(%d) IsUserTxPowLimit(%d)
Line 233: [TAS] SetUserTargetPowWcdma: Invalid Idx(%d)
Line 243: [TAS] SetUserTargetPowWcdma: StackId(%d) band(%d) TargetPow(%d) PlmitConversion(%d)
Line 266: [TAS] SetApprovalModeWcdma: StackId(%d) IsApprovalMode(%d)
Line 288: [TAS] PrintTasRegistry: Mperiod(%d) SarCompliance(%d) PartialSarBudget(%d) SarBudget(%d) Gcurr_x100(%d)
Line 291: [TAS] PrintTasRegistry: Alpha(%d) TAS_INTR_CNT(%d) Sync10msCnt(%d) MaxIntrNum(%d)
Line 294: [TAS] PrintTasRegistry: Sar(%d) powLinearForN(%d) SarPrevTime(%d)RefSar(%d)
Line 297: [TAS] PrintTasRegistry: SarTotalRemain(%d) WCDMA_TAS_ON(%d) SarComplianceOrigin(%d) SarTotalRemainInit(%d)
Line 301: [TAS] PrintTasRegistry: hal_SAR_total_remain(%d) hal_SAR_total_remain2(%d) hal_SAR_remain[%d](%d)	hal_SAR_prev_time(%d) IsTasRunning(%d)
Line 304: [TAS] PrintTasRegistry: ApprovalMode(%d) SpatialTAS_Enable(%d)
Line 314: [TAS] PrintTasRegistry: PLimit[%d] = %d
Line 335: [TAS] Print C-TasInfo: SIM(%d) AG(%d) Mcc(%d) 3G_Band(%d) SarAverage(%d) Plimit(%d)
Line 337: [TAS] Print C-TasInfo: Policy(%d) TasPowDbm(%d) AvgSar(%d) CurrMaxRatio(%d)
Line 678: [TAS] GetTasEventOffset: SensorType(0x%x) SensorFeature(0x%x)
Line 682: [TAS] GetTasEventOffset: currentTxAntNum(%d) Input_PlimitAnt0(%d) Input_PlimitAnt1(%d) Plimit[0](%d) Plimit[1](%d) PlimitCurTxAnt(%d)
Line 718: [TAS] uhal_CHmcpTasUtil_CalRefSar  MAX_POWER(%d) P_Max(%d) P_Limit(%d) Ref_Sar(%d) RefSarScaled(%d)
Line 735: [TAS] GetMccInfo : wcmdaPlmnId Mcc(0x%x), Mnc(0x%x), (Bcd[0]:(0x%x) Bcd[1]:(0x%x) Bcd[2]:(0x%x))
Line 737: [TAS] GetMccInfo : Mcc(%d), TapcMcc[0](%d) TapcMcc[1](%d) TapcMcc[2](%d)
Line 900: [TAS] CheckIfTapcRuns: [MCC TYPE CHANGED] TapcMccType(%d) PrevTasMccType(%d) Mcc(%d)
Line 1069: [TAS] ReadMCC NV Values: [MCC DEFAULT MODE CHECK] MCCDefault(%d)
Line 1095: [TAS] GetSpatialTasNV: AntCouplingEnable(%d) AntSwitch_Enable(%d)
Line 1105: [TAS] GetSpatialTasNV: AntCouplingReg(%lld)
Line 1112: [TAS] GetSpatialTasNV: AntCouplingReg(%lld) BandGroup[%d] %d TxPathType[%d](%d) TxAntIdx[%d](%d)
Line 1115: [TAS] GetSpatialTasNV: AntCouplingdb[%d][%d] %d
Line 1199: [TAS] calculateAntCouplingIdx: curr_BandGroup(%d) curr_Band(%d) curr_Txpath(%d) curr_TxAntIdx(%d) PrevAntGrpIdx(%d) CurrAntGrpIdx(%d) IsChangedAnt(%d)
Line 1261: [TAS] UpdateRmatrix: RegSearch_Idx[%d] %d
Line 1279: [TAS] UpdateRmatrix: SrchGrpBandGrp(%d) SrchGrpPathType(%d) SrchGrpAntIdx(%d) RMatrixOrigin[%d][%d] %d
Line 1294: [TAS] RMatrixOrtho: [RMATRIX]: %d %d %d %d
Line 1296: [TAS] RMatrixOrtho: [RMATRIX]: %d %d %d %d
Line 1338: [TAS] RMatrixOrgin: [RMATRIX]: %d %d %d %d
Line 1340: [TAS] RMatrixOrgin: [RMATRIX]: %d %d %d %d
Line 1391: [TAS] ConvergedRMatrix: [RMATRIX]: %d %d %d %d
Line 1393: [TAS] ConvergedRMatrix: [RMATRIX]: %d %d %d %d
Line 1534: [TAS] CalGain: Tx_active(%d) Gain(%d)
Line 1568: [TAS] GetOppoAntGroupIdx : Opp_AntGrpIdx(%d) Opp_BandGroup(%d) Opp_TxpathType(%d) Opp_TxAntIdx(%d) 
Line 1659: [TAS] CalGainOffModestage: UsedSar_OppRAT(%d) UsedSar_OppRATInc(%d) Gain(%d)
Line 1697: [TAS] CalGainSingleStage: Oppo_UsedSar(%d) Oppo_UsedSar_Ratio(%d) Total_UsedSar(%d) Gain(%d) Tapc_OppMode(%d)
Line 1742: [TAS] ProcessDualStackStage : DS_ENABLE
Line 1798: [TAS] uhal_CHmcpTasUtil_SetOppoStackIdInfo : IsOtherStackOn(%d) IsStackChanged(%d) OppositeStackId(%d)
Line 1837: [TAS] uhal_CHmcpTasUtil_CalculateUsedSar : SarIndex(%d) MyUsedAvgSar60s(%d) MyUsedAvgSar100s(%d) MyAvgUsedSar(%d)
Line 2125: [TAS] InitTimeAvgSar : WCDMA First Time
Line 2167: [TAS] InitTimeAvgSar : IRAT(%d) Is_OppoRATON(%d) Tapc_OppMode(%d) Oppo_SarLimitUpper(%d) Oppo_SarBackOff(%d) IsStackChanged(%d)
Line 2176: [TAS] Abnormal hal_SAR_total_remain(Reset): hal_SAR_total_remain(%d) SarBudget(%d)
Line 2181: [TAS] InitTimeAvgSar : PrevRAT(%d) WCDMA Inital TAS 
Line 2185: [TAS] InitTimeAvgSar : SarTotalRemain(%d) hal_SAR_total_remain(%d) hal_SAR_Mperiod(%d) Mperiod(%d) TapcPrevRatInfo(%d) IsWayOutLimitedTas(%d) Alpha1(%d)
Line 2187: [TAS] InitTimeAvgSar : TasMccType(%d) band(%d) Uhal_Tas->P_Limit(%d) SarRemIdxOffset(%d) IsLimitedTapc(%d) PmaxOrigin(%d)
Line 2189: [TAS] InitTimeAvgSar : isNormalTas(%d) LimitedTapcMode(%d) TapcModeChangeType(%d) amr_configured(%d) MtplPower(%d)
Line 2192: [TAS] CT3/P24 Config : product(%d) platform(%d) oem_rf_hwid(%d) oem_HWinfo(%d) Ct3DevConfig(%d)
Line 2338: [TAS] GetdBmValue: LinearVal(%d) sumPwr(%d) dBmPwr(%d) DbmIdx(%d)
Line 2369: [TAS] GetLinearScale: DbmPwrx10(%d) linearval(%d) LinearScale(%d)
Line 2400: [TAS] GetdBmValueFrac: LinearValFrac(%d) DbmPwrFracX10(%d) LinearScale(%d)
Line 2573: [TAS][Skip][Init] TASarSetBufferForN : SkipIndexNum(%d) >  Mperiod(%d)
Line 2596: [TAS][SKIP] SKIP MaxIntrNum!!!!!!!!
Line 2611: [TAS][SKIP] SkippedIdx(%d) SumSkippedSar(%d) hal_SAR_remain(%d) Cur_SAR_index(%d) IsQFull(%d) ExSarRemaining[ExcludedIdx: %d](%d)
Line 2631: [TAS][SKIP] SarTotalRemain(%d) hal_SAR_total_remain(%d) SumSkippedSar(%d) SkipIndexNum(%d) TimeDiff(%d) MaxIntrNum(%d)
Line 2641: [TAS] TASarSetBufferForN : Sync10msCnt++   Sync10msCnt(%d) TimeDiff(%d)
Line 2645: [TAS] TASarSetBufferForN: Sync10msCnt(%d) SarPrevTime(%d) CurrentTime(%d) UseTimeOfCurN(%d) TimeDiff(%d) SAR_index(%d) (global)hal_SAR_index(%d)
Line 2669: [TAS] CalcCurWinQueueCnt: StrQCnt(%d) NumSkip(%d)
Line 2708: [TAS] ERROR INVALID Cur_band(%d) Pre_band(%d)
Line 2723: [TAS] GetIsChangedBand: PrevBand(%d) ->  CurrentBand(%d) CurrentPLimit(%d) PrevPLimit(%d)
Line 2757: [TAS] GetIsChangedBand: GetTargetPower: [PLIMIT_CHANGE] PrevPLimit(%d) --> PLimitX10(%d)
Line 2758: [TAS] GetIsChangedBand: IsAnyPLimitChandged(%d) IsMccChanged(%d) TasMccType(%d) IsCurPLimitSmaller(%d)
Line 2780: [TAS] WCDMA TAS : GetTargetPower: [PLIMIT_CHANGE] PrevPLimit(%d) --> PLimitX10(%d)
Line 2804: [TAS] WCDMA TAS : GetTargetPower: [PMAXINST_CHANGE] PrevPmaxInst(%d) --> PmaxInst(%d)
Line 2826: [TAS] WCDMA TAS : IsChangedSarLvl: [SARLVL_CHANGE] PrevSarLvl(%d) --> CurrSarLvl(%d)
Line 2892: [TAS] CheckWayOutLimitedTas: TapcModeChangeType(%d) IsLimitedTapc(%d) isNormalTas(%d) SarTestModeNV(%d) amr_configured(%d)
Line 2913: [TAS] GetdBmValue2: DbmIdx(%d) LinearValIntgr(%d) LinearFrac(%d) DbmPwrIntgr(%d) DbmPwrFracX10(%d) 
Line 2946: [TAS] ProcessLimitedTapcStage: PLimitLinVal(%d) Alpha_1(%d) PmaxLimitedTasLinVal(%d) PmaxInstX10(%d) PmaxLimitedTasX10(%d)
Line 2955: [TAS] ProcessLimitedTapcStage: [LIMITED TAPC][MCG][PmaxInstX10 CHANGE]
Line 3008: [TAS] ProcessSetUpStage: SarLimitUpper(%d) SarBackOff(%d) ActualPmax(%d) TasPmaxX10(%d) P_Limit(%d) PmaxInstX10(%d)
Line 3065: [TAS] GetUsedAvgSar: UsedSarAvg100s(%d) UsedSarAvg60s(%d) UsedAvgSarWcdma(%d) SumSarWcdma60s(%d) SumSarWcdma100s(%d) SarIndex(%d)
Line 3179: [TAS] UpdateSarTotalRemain: [OVERFLOW] SarTotalRemain(%d) > SarBudget(%d)
Line 3190: [TAS] UpdateSarTotalRemain: [UNDERFLOW] ReducedSarTotalRemain(%d) < 0
Line 3196: [TAS] UpdateSarTotalRemain: Abnormal ReducedSarTotalRemain(%d)! SarBudget(%d) Reset ReducedSarTotalRemain
Line 3201: [TAS] CalculateRemainingSar: Sar(%d) SarRemaining[%d](%d) SarTotalRemain(%d) ReducedSarTotalRemain(%d) PrevSarRemaining(%d) Remnant(%d)
Line 3218: [TAS] CalculateRemainingSar: RemainPowGauge(%d) UsedAvgTxSar(%d) UsedAvgTxPowDbm(%d) SarCompliance(%d) SarBudget(%d) Gain(%d) IsOppo_RATON(%d)
Line 3220: [TAS] CalculateRemainingSar: LocalUsedAvgTxSar(%d) LocalLinearAvgpwr(%d) LocalUsedAvgTxPowDbm(%d) LinearAvgpwr(%d)
Line 3222: [TAS] CalculateRemainingSar: Band(%d) hal_SAR_total_remain(%d) SumSkippedSar(%d) Remnant(%d) LinearAvgpwr(%d)
Line 3224: [TAS] CalculateRemainingSar: Band(%d) bandClass(%d) IsQFull(%d) SumSkippedSar(%d) SpatialTasEnable(%d) CurrAntCouplingDbIdx(%d) OppAntCouplingDbIdx(%d)
Line 3357: [TAS] CheckSlopeStatus: NewWindowFlag(%d) PrevWinCurSar(%d) SlopeTh2(%d) PrevSlopeCtrlFlag(%d) OffsetEvent(%d)
Line 3362: [TAS] CheckSlopeStatus: SlopeCtrlFlag(%d) CurSlope(%d) StartY100sAvg(%d) StartY60sAvg(%d) SlopeTh(%d) SarBackOff(%d)
Line 3429: [TAS] OppoCheckSlopeStatus: OppoUsedSar(%d) Oppo_SarIndex(%d)
Line 3564: [TAS] Spatial_CheckSlopeStatus: CurrSlopeAvg[%d](%d) UsedAvgSar[%d](%d) CurrSlope_LocalAvg[%d](%d)
Line 3599: [TAS] Spatial_CheckSlopeStatus: MaxCurSlopeAvg(%d) CurrAnt_SlopeAvg(%d) SlopeTh(%d) CurrWinSARIdx(%d) Curr_AntCouplingIdx(%d) CurrSlopeTarget_Avg(%d)
Line 3601: [TAS] Spatial_CheckSlopeStatus: SlopeCtrlFlag(%d) NewWindowFlag(%d) PrevWinCurSar(%d) SlopeTh2(%d) PrevSlopeCtrlFlag(%d) OffsetEvent(%d)
Line 3687: [TAS] Spatial_OppoCheckSlopeStatus: OppoCurr_SlopeAvg(%d) OppoUsedSar(%d) Oppo_SarIndex(%d) OppoCurr_AntCouplingIdx(%d) Oppo_AntGroupIdx(%d)
Line 3760: [TAS] uhal_CHmcpTasUtil_UpdateCurr_SlopeTxAS: CurrAnt_GrpIdx(%d)  SwapAnt_GrpIdx(%d) CurrBandGrp(%d) CurrSlopeTXAS_Thru(%d) CurrSlopeTXAS_Swap(%d) TxAntIdx(%d)
Line 3849: [TAS] ProcessRestoreStage: [RESTORE][MAIN] >= GMulSarBudget(%d), >= BMulSarBudget(%d)
Line 3858: [TAS] ProcessRestoreStage: [RESTORE][SAV_1] >= GMulSarBudget(%d), < BMulSarBudget(%d)
Line 3868: [TAS] ProcessRestoreStage: [RESTORE][MIN] < GMulSarBudget(%d)
Line 3912: [TAS] ProcessWayOutLimitedTas: SarLimit(%d) IsWayOutLimitedTas(%d) {ReducedSarTotalRemain(%d) > LimtedTasTh(%d)}
Line 3963: [TAS] ProcessNormalStage: [SLOPECTRL2] SarLimit(%d) = SarLimitGainx100(%d) * OrgSarLimit(%d)
Line 3968: [TAS] ProcessNormalStage: [NORMAL][PRE_SAV][SLOPECTRL1] >= AMulSarBudget(%d)
Line 3979: [TAS] ProcessNormalStage: [NORMAL][MAX] >= AMulSarBudget(%d)
Line 4039: [TAS] CalTasMaxPowDbm: SarLimit(%d) RefSarScaled(%d) powMaxLimit(%d) TasMaxPowDbmX10(%d) PmaxInstX10(%d) ModeIdx(%d) TASMODE(%d)
Line 4046: [TAS] CalTasMaxPowDbm: TasMaxTxPower(%d) TasFinalPower(%d) MprPower(%d)
Line 4059: [TAS] CalculateSar : activeStackId(%d) powDB(%d) RefSar(%d) ScaleFactor(%d) Sar(%d)
Line 4111: [TAS] InitializeDueToEvent: OffsetEvent(%d) IsCurPLimitSmaller(%d) isChangedAntOrtho(%d) IsLowoffsetMode(%d) IsWayOutLimitedTas(%d)
Line 4187: [TAS_TXAS] uhal_CHmcpTasUtil_TAS_TXAS: [CURR_ANT_BACKOFF] Pmax[0](%d)
Line 4199: [TAS_TXAS] uhal_CHmcpTasUtil_TAS_TXAS: [SWAP_ANT_BACKOFF] Pmax[1](%d)
Line 4225: [TAS_TXAS] uhal_CHmcpTasUtil_TAS_TXAS: [CURR_ANT_BACKOFF] Pmax[0](%d)
Line 4237: [TAS_TXAS] uhal_CHmcpTasUtil_TAS_TXAS: [SWAP_ANT_BACKOFF] Pmax[1](%d)
Line 4245: [TAS_TXAS] uhal_CHmcpTasUtil_TAS_TXAS: activeStackId(%d) Gain_Thru(%d) Gain_Swap(%d) CurrAntGrpIdx(%d) OppoAntGrpIdx(%d) Oppo_UsedSar(%d)
Line 4247: [TAS_TXAS] uhal_CHmcpTasUtil_TAS_TXAS: MtplThru(%d) MtplSwap(%d)  PmaxInst(%d) Mtpl_ThruAvgMax(%d) Mtpl_SwapAvgMax(%d) offsetEvent(%d)
Line 4249: [TAS_TXAS] uhal_CHmcpTasUtil_TAS_TXAS: LinearValue_Thru:%d LinearValue_Swap(%d) SarLimitDefault(%d) SarLimitSwap(%d) powDb(%d) CurrSlopeTXAS_Thru(%d) CurrSlopeTXAS_Swap(%d)
Line 4251: [TAS_TXAS] uhal_CHmcpTasUtil_TAS_TXAS: CurrAnt:%d Pmax[0](%d) Pmax[1](%d) SarLimit(%d) OffsetMtpl(%d) SarMargin(%d) MtplMargin(%d)
Line 4404: [TAS] uhal_CHmcpTasUtil_TAS: activeStackId(%d) IsUserTxPowLimit(%d) TapcUserTxPowLimit(%d) No TAS operation!
Line 4553: [TAS] WCDMA TAS : powDB(%d) = MIN(prevpowDB(%d), PmaxInstX10(%d)) powLinearForN(%d) Pow10ValForSar(%d) Init_PLimit(%d) IsMccPeakMode(%d)
Line 4568: [TAS] WCDMA TAS : IsDualSim(%d)
Line 4597: [TAS] getTasUeState: activeStackId %d tasUeState %d
Line 4659: [TAS] CTasfillRspParams: activeStackId %d ModeSet %d
Line 4662: [TAS] CTasfillRspParams: activeStackId %d State %d Policy %d Average %d Window %d Mode %d
Line 4696: [TAS] CTasfillNtfParams: activeStackId %d ModeSet %d
Line 4699: [TAS] CTasfillNtfParams: activeStackId %d State %d Policy %d Average %d Window %d Mode %d
Line 4794: [TAS] UpdateCTasUsedAvgPwr: activeStackId %d UsedSarUpper %d AvgSarUpperRaw %d cTasSarAvgPwr %d
Line 4835: [TAS] UpdateCTasState: activeStackId %d tasUeState %d cTasStatePrev %d cTasCurState%d
