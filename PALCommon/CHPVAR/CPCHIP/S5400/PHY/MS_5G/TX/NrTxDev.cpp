Line 361: [NrTx Release] DisableModemIrq [m_CoreIdx %d, m_ModIdx %d/%d, m_MaxRank %d]
Line 407: [NrTxDev::CC-demod/ul(2/2):%04d] SetTxHwIndex - needSet %d, m_MaxRank %d, m_UrtgIdx(1/1) %02d, m_ModIdx(1/1) %02d, m_EncIdx %d, m_SlcaIdx(1/1) %02d, m_RfUrtgIdx %d, m_RfdPathIdx(1/1) %02d
Line 458: [NrTxDev::CC-demod/ul(2/2):%04d][setTxPath] m_CoreIdx:%d m_EncIdx:%d m_EncBitmap:0x%x m_ModIdx[0]/[1]:%04d m_MaxRank:%d m_TxfIdx[0]/[1] %04d m_LmacCmdIdx:%d
Line 606: [NrTxDev::CC-demod/ul(2/2):%04d][setTxPath] rfCtrlCcIdx:%d, rfCtrlEnMap:0x%X, m_SlcaIdx(1/1) %02d RfdPathIdx(1/1) %02d, rfUrtgIdx:%d
Line 835: [NrTx Release]
Line 908: [NrTx Release] DisableModemIrq [m_CoreIdx %d, m_ModIdx %d/%d, m_MaxRank %d]
Line 956: [NrTx Release] RfdTxFRscRelease [txSharingEn:%d, SlcaIdx(1/1) %02d, RfdPathIdx(1/1) %02d, marconiLink:0x%X, rfdTxfEn:0x%X]
Line 1076: [NrTxDev is Activated] FR%d mode - dlTime sfn:%d, tti:%d, dlClk245_76:%d
Line 1090: [NrTxDev::CC-demod/ul(2/2):%04d] L2 data is not prepared in tx3 isr ! tx3Tick : %d, mod1Tick %d, m_forceResetCnt %d
Line 1327: [PCAPI] Dev systemInit - pcApiMode:%d
Line 1337: [PCAPI] Dev paramUpdate
Line 1423: (f)[SetModemIrq] Target TxMod Idx exceeds Max Tx modulator Num!! targetIdx %d
Line 1439: [SetModemIrq] DisableModemIrq [m_CoreIdx %d, m_ModIdx %d/%d, m_MaxRank %d, m_StoredModIdx %d]
Line 1470: [NrTxDev] SetModemIrq [m_CcIdx %d, m_CoreIdx %d, m_ModIdx %d/%d, m_MaxRank %d, m_StoredModIdx %d/%d, setNum %d]
Line 1489: (f)[DisableModemIrq] Target TxMod Idx exceeds Max Tx modulator Num!! targetIdx %d
Line 1736: [NrTxDev][LOCTRL] wp:%d, rp:%d, m_loRequestedFreq:%d loFreqShift:%d requestLO:%d, ulFreq:%d, dlFreq:%d 
Line 1767: [NrTxDev][LOCTRL] FreqMismatch FreqCheck[%d, %d]
Line 1839: [NrTxDev] Change Tx3 Position (offset : %d symbol(s) -> %d symbol(s)) tx3IntrTiming 0x%08X 
Line 1892: [TX][HarqAckUpdateResult] txSlotIdx %d harq buffer isn't accessible
Line 1913: [NrTxDev] ControlAddiHarqAckNackReporting - uci 0x%08x, time:0x%08x
Line 2013: [NrTxDev] [GAP] Clear Cfg
Line 2028: [NrTxDev] [MeasMode] Clear Cfg
Line 2043: [NrTxDev] [NR-WIFI Coex] Clear Cfg subframes:%d sfn:%d
Line 2131: [CheckStateChange] stateChange [0x%x], o_flag_event_statechange_done[0x%x], m_TxReleaseState [%d]
Line 2199: [NrTxDev::CC-demod/ul(2/2):%04d] SetTxDevState [m_TxDevState %d->%d] [m_UrtgInitWaitCnt %d]
Line 2494: [NrTxDev] IPC_HAL_TXCMM_BWP_P2_CFG - DL sfn:%d, tti:%d, RTG set sfn:%d, tti:%d
Line 2618: [NrTxDbDev][IPC_HAL_TXCMD_ULCA_CFG] modNum: %d, modIdx0:%d, modIdx1:%d, lmacCmdIdx:%d, m_ActModIdx:0x%X
Line 2635: [NrTxDbDev][IPC_HAL_TXCMD_ULCA_DEACT_CFG] Tx Dev has been De-Activated!! [m_TxDevState %d] DisableModemIrq [m_ModIdx %d/%d, m_MaxRank %d]
Line 2650: [NrTxDbDev][IPC_HAL_TXCMD_RFD_TXFILTER_CFG] txfHold:%d, txfCfg:%d, marconiEn:%d
Line 2656: [NrTxDbDev][IPC_HAL_TXCMD_INIT_TA_CFG] m_taInitVal:%d
Line 2679: [NrTxDbDev][IPC_HAL_TXCMD_URTG_RESYNC_CFG] RTG set sfn:%d, tti:%d
Line 2800: [NrTxDbDev][IPC_HAL_TXCMD_TXDB_UPDATE_CFG] not ready
Line 2960: [NrTxDev::CC-demod/ul(2/2):%04d] sfn/slot(4/2):%06d, ConfigPrach - DlFreqOfs: %d[Hz], prach cfg pos:0x%08x
Line 3190: [NrTxDev] TX diversity is disabled (2T4R SRS antSw): applyTxDiv:%d numAntPort:%d TPMI:%d
Line 3435: [NrTxDev::CC-demod/ul(2/2):%04d] TxClock On - BB(urtg:0x%X, txf:0x%X), RFD(urtg:0x%X)
Line 3474: (F)[NrTxDev] URTG Recovery is triggered!! m_CoreIdx %d, m_UrtgIdx(1/0) %d, nrX_system_info(0x%08X) rx|tx_sample_cnt(%d|%d) ta_fsm_sw_rst(0x%08X) urtg_clk_on(0x%08X) sw_clk_on(0x%08X/0x%08X)
Line 3518: (F)[NrTxDev] RFD URTG Recovery is triggered!! sfn(%d) tti(%d) RfUrtgIdx(%d) taAcc(%d) nrX_ta_abs_rel(0x%X) nrX_system_info(0x%X) rx|tx_sample_cnt(0x%X|0x%X) urtg_clk_on(0x%X) sw_clk_on(0x%08X)
Line 3629: [NrTxDev] SetUrtgPathSel targetCcIndex %d, val %d
Line 3750: [NrTxDev] Set URTG sfn/tti count SFN:%d, TTI:%d
Line 3832: [NrTxDev] ConfigBWP - carrier_freq[%d], systemBw[%d], scsCfg[%d], nr_ulX_bw_config[0x%08x]
Line 4028: [NrTxDev] SetModulatorPath - precodingVal 0x%08x, 0x%08x
Line 4134: [NrTxDev] SetHalfShifter sft_init 0x%08x, sft_delta 0x%08x
Line 4286: [NrTxDev] SetCpLength - Invalid paramter
Line 4369: [NrTxDev] CheckPathCfg skip - txBwpCfg:%d, ulCcIdx:%d, txfPathNum(CC):%d, txfPathNum(Dev):%d,
Line 4377: [NrTxDev::CC-demod/ul(2/2):%04d] CheckPathCfg - pathNum[%d -> %d]
Line 4445: [NrTxDev] CheckRfdTxFilterSatus - rfd_txf_en:0x%X
Line 4449: [NrTxDev] CheckRfdTxFilterSatus - invalid pathNum %d
Line 4568: [NrTxDev] ConfigBbTxfilter - TXF_OUTMUX_COMx:0x%x/0x%x, UL_DIF_OUT_EN:0x%x, TXF_NR_FREQ_RANGE:0x%X, TXF_NR_CP_LEN_MODE:0x%x, UL_DIF_OUT_CTRL:0x%X, ULx_MAR_BIT_COMPR:0x%X, tsicChicken:0x%X
Line 4593: [NrTxDev] ConfigBbTxfilter FR2 - MM_FILT_OUT_SEL:0x%x/0x%x, MM_DIF_OUT_EN:0x%x, TXF_NR_FREQ_RANGE:0x%X, TXF_NR_CP_LEN_MODE:0x%x
Line 4745: [NrTxDev] SetTxFilterDelay rach:%d, normal:%d, cfrMode:%d, intpOnNum:%d
Line 4834: [NrTxDev] SetTxFilterDelay rach:%d, normal:%d
Line 4867: [NrTxDev] SetTxFilterDelay top_ref_adv:%d, rd_ref_adv:%d
Line 4962: (F)[NrTxDev] Wrong RscRank:%d, StoredSlcaIdx:%02d, SlcaIdx:%02d, StoredRfdPathIdx:%02d, RfdPathIdx:%02d
Line 4975: (F)[NrTxDev] marconi is not cleared!! 0x%X
Line 4982: (F)[NrTxDev] txfilter is not cleared!! 0x%X
Line 5032: [NrTxDev] ChangeRscRank - CcIdx:%d, rfdOff:0x%X->0x%X, marconiOff:0x%X->0x%X, StoredSlcaIdx:%02d, StoredRfdPathIdx:%02d
Line 5259: [NrTxDev] configTSIC tsicReg:0x%08x, m_tsicReg:0x%08x, tsicEn:%d, tsicTxfNum:%d, SmallRbSize:%d, PwrThreshold:%d, DmrsFlag:%d
Line 5360: [NrTxDev::CC-demod/ul(2/2):%04d] LO shift - systemBw:%d, rfBw:%d, LO shift:%d
Line 5449: [NrTxDev][CalcMaxRbIfftSize] Unavailable systemBw %d for [Fr/Scs] = [%d/%d]
Line 5455: [NrTxDev][CalcMaxRbIfftSize] Unavailable systemBw %d for [Fr/Scs] = [%d/%d]
Line 5461: [NrTxDev][CalcMaxRbIfftSize] Unavailable systemBw %d for [Fr/Scs] = [%d/%d]
Line 5482: [NrTxDev][CalcMaxRbIfftSize] Unavailable systemBw %d for [Fr/Scs] = [%d/%d]
Line 5488: [NrTxDev][CalcMaxRbIfftSize] Unavailable systemBw %d for [Fr/Scs] = [%d/%d]
Line 5675: [NrTxDev] Init system time. DL sfn:%d, tti:%d, tick:%d, UL tick:%d, taAccum:%d, waitCnt:%d
Line 5755: [NrTxDev] AlignSystemTime - DL sfn:%d, tti:%d, dlTime:0x%08x, UL sfn:%d, tti:%d, tickCnt:%d, m_taAcc:%d
Line 5762: [NrTxDev] AlignSystemTime - DL sfn:%d, tti:%d, UL sfn:%d, tti:%d, tickCnt:%d, m_setSysTime:%d, rfdMismatch:%d
Line 5897: [NrTxDev::CC-demod/ul(2/2):%04d] ResetTaErrorCorrection - m_tecGenSnapPrv:%d
Line 5959: [NrTxDev::CC-demod/ul(2/2):%04d] SetTaErrorCorrection - currGenSnap:%d, strVal:%d, m_tecGenSnapPrv:%d, tecInst245_76:%d, tecPending:%d, tecAcc:%d, wp:%d, rp:%d
Line 6093: [NrTxDev::CC-demod/ul(2/2):%04d] SetTadv mode:%d, tAdv:%d, m_taAcc:%d, taAccum61_44:%d, tagId:%d, RepCellOfTag:%d, RepCellScs:%d, taAccOfTag:%d
Line 6117: [NrTxDev::CC-demod/ul(2/2):%04d] currGenSnap:%d, m_taAcc:%d, strVal:%d, modiRelativeVal:%d
Line 6499: [NrTxDev][error] UCI TargetSlot is not matched [targetSlot %d, currSlot %d]
Line 6521: [NrTxDev][error] txSlotIdx %d's UCI encoder margin is not enough [chType %d, dmrsType %d, targetSymb %d, deadLine %d, currTick %d]
Line 6555: [NrTxDev][GeneratePrMask] offsetToCarrier: %d, nBwpStartRb:%d, start tti:%d, tick:%d, end tti:%d, tick:%d
Line 6578: [NrTxDev] Generate PR sequence start - length:%d
Line 6590: [NrTxDev] Generate PR sequence end
Line 6643: [NrTxDev] NrTx Seq Generation is not completed! (idx:%d)
Line 6810: [NrTxDev] SetMarconiUlFr1 - mode:%d, txfPathNum:%d, actMarconiLink:0x%X, m_marconiOnbmp:0x%X
Line 7009: [NrTxDev] ConfigRfmTxFilter - rfm_txfilter_clk_en:0x%08x, rfm_ul0_cfg:0x%08x, rfm_ul1_cfg:0x%08x
Line 7226: [xPhyTest][HSPEEDY write]
Line 7230: [xPhyTest][HSPEEDY read] addr:0x%08x data:0x%08x
Line 7238: [xPhyTest][MIPI write]
Line 7244: [xPhyTest][MIPI read] ch:%d, addr:0x%08x data:0x%08x
Line 7253: [xPhyTest][register write]
Line 7257: [xPhyTest][register read] addr:0x%08x data:0x%08x
Line 7270: [xPhyTest][USER write]
Line 7308: [NrTxDev::CC-demod/ul(2/2):%04d] sfn/slot(4/2):%06d, uci 0x%08x, TickHwTime - pucch(enc:0x%08x,mod:0x%08x)  pusch(enc:0x%08x,mod:0x%08x)  srs:0x%08x  FE:0x%08x
Line 7318: [DVFS_CPU_LOG] [NrTxDev] Calculated TickHwTime - scs:%d, pucch(enc:%d, mod:%d) pusch(enc:%d, mod:%d) srs:%d FE:%d, Deadline Enc/Mod:%d, FE:%d
Line 7460: [NrTxDev::CC-demod/ul(2/2):%04d] monitoring - TxRxDiff(BB) %d, TxRxDiff(RFD) %d, sfnIdx(BB/RFD)(4/4) %08d, TtiIdx(BB/RFD)(3/3) %09d, nrLdpcMon %d, puschEncStatus %x, puschLdpcEncStatus %x, lmacif_status %x, MarconiLink 0x%08X
Line 7512: [NrTxDev][MARCONI] VALID_CLK:0x%08x, DVALID_CLK:0x%08x, INTR_STS:0x%08x, CH_INTR_STS:0x%08x, CH5_CONFIG:0x%08x, CH6_CONFIG:0x%08x, CH5_STATUS:0x%08x, CH6_STATUS:0x%08x, LINK_CTRL:0x%08x, validMask:0x%X
Line 7850: [NrTxDev::CC-demod/ul(2/2):%04d] prePuschPwr %d, nrMtpl %d, pTxPowerStatus[chType].nrMtpl %d, chType %d
