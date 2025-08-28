Line 76: ###[TSIC][RSLT] SendTsicTxfInitReq:: demodCcBitmap(%d) TsicEnable(%d) [0:not send, 1:send]
Line 108: ###[TSIC][RSLT] InitLteInfo:: checkFlag(%d) stackId(%d)
Line 124: ###[TSIC][RSLT] InitNrInfo:: checkFlag(%d) stackId(%d)
Line 145: ###[TSIC][RSLT] GetTsicConfigInfo:: Wrong stackId(%d) Rat(%d)
Line 171: ###[TSIC][RSLT] SetNumTsicCell:: stackId(%d) Rat(%d) numTsicCell(%d)
Line 189: ###[TSIC][RSLT] ReleaseLteInfo:: checkFlag(%d) stackId(%d) CC idx(%d)
Line 208: ###[TSIC][RSLT] ReleaseNrInfo:: checkFlag(%d) stackId(%d) CC idx(%d)
Line 225: ###[TSIC][RSLT] ConvBw2TsicBw:: Wrong rat(%d) bwIdx(%d)
Line 293: ###[TSIC][RSLT] CheckTsicCondition:: [CONFIG TSIC] IntfIdx(%d) intfType<%s> LutIdx(%d) Victim(RAT:%d, Band:%d)  Aggr0(RAT:%d, Band:%d) Aggr1(RAT:%d, Band:%d)
Line 303: ###[TSIC][RSLT] CheckTsicCondition:: Unexpected event(%d)
Line 341: ###[TSIC][RSLT] CheckTsicCondition:: [CONFIG TSIC] ##LUT_BYPASS## IntfIdx(%d) intfType<%s> Victim(RAT:%d, Band:%d) Aggr0(RAT:%d, Band:%d) Aggr1(RAT:%d, Band:%d)
Line 362: ###[TSIC][RSLT] CheckTsicCondition:: [RELEASE TSIC] Release before changing TSIC combo
Line 365: ###[TSIC][RSLT] CheckTsicCondition:: [CONFIG TSIC] Config changed TSIC combo
Line 372: ###[TSIC][RSLT] CheckTsicCondition:: [RELEASE TSIC]
Line 376: ###[TSIC][RSLT] CheckTsicCondition:: [NO MATCHED TSIC]
Line 558: ###[TSIC][RSLT] CheckIntfByLUT:: [CONFIG TSIC][2TX] lutIdx(%d) Aggr0[Band/Freq/BW](%d/%d/%d) Aggr1[Band/Freq/BW](%d/%d/%d) Victim[Band/Freq/BW](%d/%d/%d)
Line 565: ###[TSIC][RSLT] CheckIntfByLUT:: [CONFIG TSIC][1TX] lutIdx(%d) Aggr0[Band/Freq/BW](%d/%d/%d) Victim[Band/Freq/BW](%d/%d/%d)
Line 683: ###[TSIC] CalcIntfRatio:: Wrong intfType(%d)
Line 698: ###[TSIC][RSLT] CalcIntfRatio:: intfType(%d) overlap_ratio(%d)
Line 798: ###[TSIC][MGR] TXF:: SmallRbSize(%d) PwrThreshold(%d) DmrsSymCtrlFlag(%d)
Line 806: ###[TSIC][MGR] CMN:: StackId(%d) CellGroup(%d) TsicOption(%d)
Line 857: ###[TSIC][MGR] CONFIG:: victimRat(%d) aggr0Rat(%d) aggr1Rat(%d) victimChBw(%d) aggrChBw0(%d) aggrChBw1(%d) victimFreqkHz(%d) aggr0FreqkHz(%d) aggr1FreqkHz(%d) intfType(%d)
Line 859: ###[TSIC][MGR] CONFIG:: victimDemodCc(%d) aggr0DemodCc(%d) aggr1DemodCc(%d) syncPos(%d) relDelay(%d)
Line 861: ###[TSIC][MGR] CONFIG:: icOnThrSinr(%d) icOffThrSinr(%d) rlsOnThrRsrp(%d) rlsOffThrRsrp(%d) rlsOnThrSinr(%d) rlsOffThrSinr(%d)
Line 863: ###[TSIC][MGR] RLS:: RlsParam0[0x%x, 0x%x, 0x%x, 0x%x] RlsParam1[0x%x, 0x%x, 0x%x, 0x%x]
Line 885: ###[TSIC][MGR] RELEASE:: StackId(%d) CellGroup(%d) TsicOption(%d)
Line 892: ###[TSIC][MGR] ConfigTsic:: Wrong m_TsicIntfType(%d)
Line 914: ###[TSIC][MGR] ReleaseTsic:: Wrong m_TsicIntfType(%d)
Line 954: ###[TSIC][RSLT] %s : victimRat(%d), actRatInfo(0x%x), confType(%d), rtg(%d), victimBw(%d), aggrMaxBw(%d), rfPath(%d, %d)
Line 960: ###[TSIC][RSLT] Fail to send TSIC_CONFIG_CMD
Line 969: ###[TSIC][RSLT] ProcConfigIpcCnf
Line 974: ###[TSIC][RSLT] ProcReleaseIpcCnf
