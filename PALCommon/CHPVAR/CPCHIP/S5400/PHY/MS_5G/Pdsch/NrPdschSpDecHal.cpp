Line 88: [DEBUG][Reconfig.] PdschDecHal , maxIterClock(%d) ldpcWorstProcTime(%d) prev_aslot_idx(%x)
Line 116: [Interval] fr2flag: 0x%x, RntiBitmap: 0x%x m_intGapIdx:0x%x
Line 189: [NR IPC](to LTE)SCH DEC , NrSpCcActive(%d) NrSpScs(%d) NrSpoccuiedRB(%d), SCS_ORG(%d), prbLength(%d) systemBw(%d) maxLayerNum(%d)
Line 217: m_rIntra.llrReadFlag(0x%x), tmpllrReadFlag(0x%x)
Line 223: [CalcRdmOutSize] ndrmValFromHW(%d) is larger than Nsc(%d), infoSize(%d), stPos(%d)
Line 229: [NbDec] ldpcNbDec0(%d), Ndrm0(%d), ldpcNbDec1(%d), Ndrm1ForldpcNbDec1(%d), fillerSize(%d), zMin(%d)
Line 234: [CalcRdmOutSize][override] newTx(%d), harqProcNum(%d), ndrmValFromHW(%d), inputNdrm(%d)
Line 250: [LDPC][CalcMaxDataRateCC] NrActFlag: (0x%X), maxTBS(%d), NrMaxDataRateKbps: CC12(%d), CC11(%d), CC10(%d), CC9(%d), CC8(%d)
Line 262: [LDPC][CalcMaxDataRateCC] NrActFlag: (0x%X), maxTBS(%d), NrMaxDataRateKbps: CC7(%d), CC6(%d), CC5(%d), CC4(%d), CC3(%d), CC2(%d), CC1(%d), CC0(%d)
Line 288: [LDPC][CalcMaxDataRateCcTputRatio] NrCC_TPUT_RATIO_x1000: CC12/CC11(4/4)(%08d), CC10/CC9(4/4)(%08d), CC8(4)(%08d), FrInfo(0x%x), effective_tot_tput_kbps(%d), LteActFlag(%d), LteMaxDataRateKbps(%d), LteCC_TPUT_RATIO_x1000(%d)
Line 299: [LDPC][CalcMaxDataRateCcTputRatio] NrCC_TPUT_RATIO_x1000: CC7/CC6(4/4)(%08d), CC5/CC4(4/4)(%08d), CC3/CC2(4/4)(%08d), CC1/CC0(4/4)(%08d), FrInfo(0x%x), effective_tot_tput_kbps(%d), LteActFlag(%d), LteMaxDataRateKbps(%d), LteCC_TPUT_RATIO_x1000(%d)
Line 324: [LDPC][CalcCcTputRatio] NrActFlag(0x%x), NrCC_TPUT_RATIO_WGT_x1000: CC12(%d), CC11(%d), CC10(%d), CC9(%d), CC8(%d), LteCC_TPUT_RATIO_x1000(%d)
Line 336: [LDPC][CalcCcTputRatio] NrActFlag(0x%x), NrCC_TPUT_RATIO_WGT_x1000: CC7(%d), CC6(%d), CC5(%d), CC4(%d), CC3(%d), CC2(%d), CC1(%d), CC0(%d), LteCC_TPUT_RATIO_x1000(%d)
Line 363: [LDPC][CalcCcTputRatio] givenClock(%d), m_CcIdx(%d), effective_ldpc_decoder_usage_ratio_x1000(%d), NrCC_TPUT_RATIO_WGT_x1000(%d), NrSub6_TPUT_RATIO_x1000(%d), NrAbv6_TPUT_RATIO_x1000(%d), subcarrierSpacing_dl(%d)
Line 398: [NR][NrSpDecHal][TbCrc] (MAIN) CC0~CC6 : address[(%d),(%d),(%d),(%d),(%d),(%d),(%d)], Cbnum/Vaild(3/1) [(%d),(%d),(%d),(%d),(%d),(%d),(%d)]
Line 413: [NR][NrSpDecHal][TbCrc] (SUB) CC7~CC12 : address[(%d),(%d),(%d),(%d),(%d),(%d)], Cbnum/Vaild(3/1) [(%d),(%d),(%d),(%d),(%d),(%d)]
Line 420: [NR][NrSpDecHal][TbCrc] Error, Calc TBCRC address ccIdx: %d, m_tbcrcEndAddress[0]: %d, m_tbcrcEndAddress[1]: %d, offset %d
Line 470: [LDPC] CW CRC Nack(%d), but all CB CRC Ack(%d). Clear AckCbNum
Line 705: ([NR IPC] RVC) PHY_PHY_UPDATE_CC_TPUT_RATIO_IND_CNF, m_CcIdx(%d), m_DemodIdx(%d)
Line 730: [NR IPC] (SendMsg) PHY_PHY_UPDATE_CC_TPUT_RATIO_IND_CNF, BM_SrcCc(0x%X), BM_DstCc(0x%X), m_DemodIdx(%d), SpCell(%d), NrActFlag(0x%x)
Line 759: [NR IPC] (SendMsg) PHY_PHY_UPDATE_CC_TPUT_RATIO_IND, BM_SrcCc(0x%X), BM_DstCc(0x%X), m_DemodIdx(%d)
Line 857: [GetCcRatioCalcGivenClk] cc_tot_tput_ratio(%d), NrCC_TPUT_RATIO_WGT_x1000_temp(%d), NrSub6_TPUT_RATIO_x1000(%d), NrAbv6_TPUT_RATIO_x1000(%d)
Line 892: [LDPC][GivenClk] 650Mhz(%d), 491Mhz(%d), 245Mhz(%d), 122Mhz(%d), ReducedBufferMode: 650Mhz(%d), 491Mhz(%d), 245Mhz(%d), 122Mhz(%d)
Line 896: [LDPC][GivenClk_0p8] 650Mhz(%d), 491Mhz(%d), 245Mhz(%d), 122Mhz(%d)
Line 1003: [LDPC][CalcMaxTBS] maxTBS(%d), maxCodeBlockNum(%d), maxlayer(%d), maxPRBacrossBWPs(%d), Qm_LBRM(%d)
Line 1166: [PdschDecRslt] Recovery Decoding result(Prev), idx(%d), prevSlot(%d), decIntRestoreNum(%d), decIntRestoreCw(%d), current:0x%x, prev:0x%x 
Line 1317: [NR][HARQ_FETCH] NR_HBF_EXT_RD_OP_TIME_CNT_ODD0(0x%x), NR_HBF_EXT_RD_OP_TIME_CNT_ODD1(0x%x), NR_HBF_EXT_RD_OP_TIME_CNT_ODD2(0x%x), NR_HBF_EXT_RD_OP_TIME_CNT_ODD3(0x%x), NR_HBF_EXT_RD_OP_TIME_CNT_ODD4(0x%x), NR_HBF_EXT_RD_OP_TIME_CNT_ODD5(0x%x), NR_HBF_EXT_RD_OP_TIME_CNT_ODD6(0x%x), NR_HBF_EXT_RD_OP_TIME_CNT_ODD7(0x%x), NR_SCHCTRL_DEBUG_CNT(0x%x), HBFEXT_MODENR_CCx[0](0x%x)
Line 1328: [NR][HARQ_FETCH] NR_HBF_EXT_RD_OP_TIME_CNT_EVEN0(0x%x), NR_HBF_EXT_RD_OP_TIME_CNT_EVEN1(0x%x), NR_HBF_EXT_RD_OP_TIME_CNT_EVEN2(0x%x), NR_HBF_EXT_RD_OP_TIME_CNT_EVEN3(0x%x), NR_HBF_EXT_RD_OP_TIME_CNT_EVEN4(0x%x), NR_HBF_EXT_RD_OP_TIME_CNT_EVEN5(0x%x), NR_HBF_EXT_RD_OP_TIME_CNT_EVEN6(0x%x), NR_HBF_EXT_RD_OP_TIME_CNT_EVEN7(0x%x)
Line 1500: [CalcLdpcOffset_table] Invalid mcsTableIdx(%d)
Line 1700: [LDPC] ReducedBufferMode(%d) givenClock(%d), ldpcClkIdx(%d),
Line 1724: [LDPC] ECB isEcbReduced(%d) givenClock(%d), NrCcActNum(%d), numLayer(%d), numDmrsSymbol(%d), dfsLpdcIterLimit(%d)
Line 1973: [DFS_LPM][DCI] LDPC newTx iterNum(%d) reducedBufferMode(%d)
