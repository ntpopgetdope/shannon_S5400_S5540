Line 418: [NrTxFeDev] NTM Clear fbrxStatus
Line 477: [NrTxFeDev] UpdateSrsLimitPath - not supported srs mode %d)
Line 485: [NrTxFeDev] UpdateSrsLimitPath - totalPortMap:0x%X, srsLimitPath:0x%X, 0x%X, 0x%X, 0x%X / totalPortMap:0x%X, srsLimitPath:0x%X, 0x%X, 0x%X, 0x%X
Line 581: [NrTxFeDev] RequestFeControl - reject chType:%d, rfCtrlEn:%d, rfCtrlInfo:%d
Line 587: [NrTxFeDev] RequestFeControl - Invalid txPathBitmap:0x%X, maxRank:%d, txfPathNum:%d
Line 593: [NrTxFeDev] RequestFeControl - Invalid txPath chType:%d
Line 601: [NrTxFeDev] RequestFeControl - CapaMismatch(srsMode:%d), reject chType:%d, portIdx:%d, portNum:%d
Line 608: [NrTxFeDev] RequestFeControl - reject chType:%d, portIdx:%d, portNum:%d, rxModeBitmap:0x%X, rxPortMap:0x%X
Line 684: [NrTxFeDev] RequestFeControl ulCcIdx:%d, chType:%d, chMu:%d, transform:%d, subframeIdx:%d, sCnt:%d, eCnt:%d, SwitchEn/idx/num(2/1/1):%d, rankNum:%d, txPower:%d
Line 1010: [NrTxFeDev] reject ControlPDetMeasure - chType is invalid
Line 1016: [NrTxFeDev] Debug print BPS MMC flag is disabled
Line 1073: [MCU IPC] RFM_BB_PDET_START_IND - cmd:%d, seq_num:%d, time:0x%08x
Line 1131: [NrTxFeDev] Proximity Detection mcu_fwd_rb = %d, mcu_rev_rb = %d,ratio = %d,  ratio_mean = %d , current_ant_decision = %d final_decision = %d, relative_ant_idx = %d, tx_pol = %d IGNORED
Line 1144: [NrTxFeDev] Proximity Detection  mcu_fwd_rb = %d, mcu_rev_rb = %d,ratio = %d,  ratio_mean = %d , current_ant_decision = %d final_decision = %d, relative_ant_idx = %d, tx_pol = %d
Line 1166: [MCU IPC] PDET measure fail! - serial(%d/%d), status:%d
Line 1244: [NrTxFeDev] PaTemp:%d, PdetPwr.H:%d, PdetPwr.V:%d, phaseArray:%d, m_fr2CompPwr.H:%d, m_fr2CompPwr.V:%d, rbSize:%d, symbollength:%d
Line 1246: [NrTxFeDev] deltaPC[0]:%d, deltaPC[1]:%d, x_value[0]:%d, x_value[1]:%d, txPathBitMap:%d, tempRead:0x%08x, pdetRead:0x%08x
Line 1324: [NrTxFeDev] ControlVgaGainFr2 - currTime(sfn/slot)(4/2):%d, m_vgaGain(h/v)(2/2):%d, fr2CompPwr.H(%d -> %d), fr2CompPwr.V(%d -> %d)
Line 1350: [NrTxFeDev] ResetVgaGainFr2 - m_vgaCtrlEn:%d, m_vgaGain(h/v)(2/2):%d, m_dGainLimit:%d
Line 1865: [MCU IPC] RFM_BB_TX_START_IND - cmd:0x%d, slot/symbol(2/2):%d, path:%d, aGain m/c(2/1):%d, beam flag/h/v(1/1/1):%d, dgain.h:%d, dgain.v:%d, Mod Info %d, time:0x%08x
Line 1935: [NrTxFeDev] ConfigFeFr2 - beamMode %d, beamIdx %d, Beam_h %d, Beam_v %d, NotUpdate %d
Line 1982: [NrTxFeDev] UpdateFbrxMeasure - trigger Invalid RF dump - dacIdx:%d, dumpType:%d
Line 1992: [NrTxFeDev] UpdateFbrxMeasure - fbrxState is off, fbrxReqCnt:%d
Line 2001: [NrTxFeDev] UpdateFbrxMeasure - time limit is over. idx:%d, Wr:%d, Rd:%d, limit:0x%08x, currTick:0x%08x
Line 2092: [NrTxFeDev] UpdateFbrxMeasure - Invalid fbrx path! rank:%d, ttiIdx:%d, sampleCnt:%d, chType:%d, maskBitmap:0x%X, portIdx:%d
Line 2112: [NrTxFeDev] (Warning-RFCTRL) invalid fbrxRank:%d
Line 2143: [NrTxFeDev] Abnormal Power - rank:%d, txPower:%d, fbrxMeasPower:%d, invalidCnt:%d
Line 2145: [NrTxFeDev] UpdateFbrxMeasure - ulCcIdx/rank(1/1):%d, ttiIdx/sampleCnt(1/5):%d, fbrxMeasPower:%d(constant:%d), chType:%d, txPower:%d, digitalPwr:%d, feedback:%d, antPathLoss:%d, rffeOffset:%d
Line 2188: [NrTxFeDev] UpdateFbrxMeasure - Skip Fbrx Update!!, rank:%d, ttiIdx:%d, sampleCnt:%d, fbrxMeasPower:%d, chType:%d, txPower:%d, fbrxStatus:%d, dcI:%d, dcQ:%d, clAitFbrxSkip:%d
Line 2424: [NrTxFeDev] ReadRfCtrler(main) - gpio:0x%X, dtx:0x%X, rficGain:0x%X, femMipiRead:0x%X, pamMipiRead:0x%X, smMipiRead:0x%X
Line 2433: [NrTxFeDev] ReadRfCtrler(sub) - gpio:0x%X, dtx:0x%X, rficGain:0x%X, femMipiRead:0x%X, pamMipiRead:0x%X, smMipiRead:0x%X
Line 2525: [NrTxFeDev] UpdateDpsInfo - m_dspInfo buffer is full
Line 2657: [NrTxFeDev] UpdateFemWord - srs totalSwNum:%d, pathIdx4: 0x%X, 0x%X, 0x%X, 0x%X, 0x%X, 0x%X,
Line 2674: [NrTxFeDev] maxRank:%d, AS[%d, %d] -> txDefaultPathIdx,rxDefaultPathIdx[%d, %d] [%d, %d] prevTx[%02d] Seperate[%02d]
Line 2725: [NrTxFeDev] UpdateTxSharingInfo - targetDacBitMap:0x%X, targetDacIdx:%d, targetTxPath:%d
Line 2744: [NrTxDbDev][IPC_HAL_TXCMD_CLAIT_FBRX_CFG] mode:%d, fbrxState:%d
Line 2770: [NrTxDbDev]UpdateClAitFbrxInfo -  allocBuffIdx:%d, devtime-sfn:%d, slot:%d
Line 2833: [NrTxDbDev][IPC_HAL_TXCMD_CLAIT_FBRX_CFG] retryCnt:%d, ratType/valid/findPusch(1/1/1):%d, clAitFbrxSkip:%d, allocBufIdx:%d, timeToSlotBoundary:%d, subFrame/Slot:%d, startSym/Len:%d, scs:%d, rbStart/Size:%d, txPwr:%d
Line 2941: [NrTxFeDev] (Warning-RFCTRL) invalid actTxfNum:%d !!
Line 3083: [NrTxFeDev] UpdateActPathInfo - m_ActModIdx[0x%x] nonSloCcMap[0x%X] caPwrMngMap[0x%X]
Line 3106: [SLO_DEBUG] UpdateScellPathInfo - scellIdx:%d, coreIdx:%d, modIdx0:%d, modIdx1:%d, rankNum:%d
Line 3151: [NrTxFeDev] ControlTxPath CcIdx[%d], RfdPathIdx[%d], DacIdx0/1(3/3)[%d], EtIdx0/1(3/3)[%d], MaxRank[%d], txfPathNum[%d], rfShmIdx0/1(1/1)[%2d]
Line 3210: [NrTxFeDev] ControlOnOff mode:%d, dacState:%d, fbrxState:%d
Line 3294: [MCU monitor] Count(0x%08x), mprAvgAcc(BB/RFM)(1/1):%d(BB:%d,RFM:%d), trxOn:0x%08x, trxOff:0x%08x, analog:0x%08x, dpdGain0:0x%08x, dpdGain1:0x%08x, marconiStatus(16/16):0x%08x
Line 3370: (Warning-RFCTRL) rfd_fbrx_Status:0x%X
Line 3477: [NrTxFeDev] FBRX ownerFlag overriding!
Line 3538: [NrTxFeDev] CheckFbrxState - ulCcIdx:%d, mode:%2d, fbrxStatus:%3d, prach/clAitFbrxSkip(2/2):%d, Share/LteFlag(1/1):%2d, fbrxResumeReq/ownerFlag(1/1):%d, fbrxDuration(On/Off:2/2):%d, validFlag:%d, fbrxMeasMap:%d, dcrReadVal:0x%X
Line 3781: [NrTxFeDev] spiSrc[%d] spiNum[%d] tickCnt[0x%X] spiAddr[0x%X] [0x%X] [0x%X] [0x%X] [0x%X]
Line 3783: [NrTxFeDev] spiWord[0x%X] [0x%X] [0x%X] [0x%X] [0x%X]
Line 3812: [NrTxFeDev] spiSrc[%d] spiNum[%d] tickCnt[0x%X] spiAddr[0x%X] [0x%X] [0x%X] [0x%X] [0x%X]
Line 3814: [NrTxFeDev] spiWord[0x%X] [0x%X] [0x%X] [0x%X] [0x%X]
Line 3935: [NrTxFeDev] Drop tx channel according to xScale - beforeDps:%d, afterDps:%d, xScale:%d, p_UE_FR1: %d
Line 4146: [NrTxFeDev] ulCcIdx/portIdx/chType(1/1/1):%03d, PwrLimitBmp:0x%X, 0x%X, txPower:%d (%d) -> %d, %d
Line 4394: Exception - Flag:0x%X antIdx:%d, Path:%d, Power:%d
Line 4717: (Warning-RFCTRL) invalid gainWord - numGain:%d, gainCodeIdx:%d, selGainCodeIdx:%d, refRficGain:0x%X
Line 4727: [NrTxFeDev] ulCCidx/rank/chType/txD/txBitmap/paSmCtrlMode/paMode(1/1/1/1/1/1/1):%07d, refPwr:%d, txPwr:%d, TxSchemeType/Idx/PwrIdxShift(1/2/2):%04d, selGainWord:0x%X, totalCompPwr:%d, refDgcGain/decimalCompPwr:0x%08x, PwrLimitBmp:0x%X, txpower[%d -> %d]
Line 4756: (Warning-RFCTRL) EtPwr abnormal Pwr[%d] StartPwr[%d]
Line 4807: (Warning-RFCTRL) invalid gainWord - numGain:%d, gainCodeIdx:%d, selGainCodeIdx:%d, refRficGain:0x%X
Line 4819: [NrTxFeDev] ulCCidx/rank/chType/txD/txBitmap/paSmCtrlMode/paMode(1/1/1/1/1/1/1):%07d, refPwr:%d, txPwr:%d, PwrOffset:%d, selGainWord:0x%X, TempCompIdx:%d, refAmg1:%d, PwrLimitBmp:0x%X, txpower[%d -> %d]
Line 4917: (Warning-RFCTRL) EtPwr abnormal Pwr[%d] StartPwr[%d]
Line 5015: (Warning-RFCTRL) invalid gainWord - numGain:%d, gainCodeIdx:%d, selGainCodeIdx:%d, refRficGain:0x%X
Line 5047: [NrTxFeDev] ulCCidx/rank/chType/txD/txBitmap/paSmCtrlMode/paMode(1/1/1/1/1/1/1):%07d, refPwr:%d, txPwr:%d, TempIdx/PwrOffset/Idx/PwrIdxShift(1/2/2/2):%07d, selGainWord:0x%X, totalCompPwr:%d, refDgcGain/decimalCompPwr:0x%08x, PwrLimitBmp:0x%X, txpower[%d -> %d]
Line 5277: [NrTxFeDev] rank/etSaptActive/TempCompIdx(1/1/1):%03d (etDelaySetEn:%d, etSaptGainSetEn:%d), cfrLimit:0x%X(add:%d), dpdSel:0x%X, dpdInGain:0x%X(add:%d), dpdoutGain:0x%X(add:%d)
Line 5556: (Warning-RFCTRL) abnormal fracDelayIdx[%d]
Line 5876: [NrTxFeDev] RF not update
Line 6050: [NrTxFeDev] FBRX info - Coupler idx:%d, num:%d, Word:0x%X, 0x%X, 0x%X, 0x%X, 0x%X, ch:%05d, trNum:%05d
Line 6560: [NrTxFeDev] IQMC - iqMisVal:0x%X, 0x%X, iqAval:0x%X, 0x%X, iqBval:0x%X, 0x%X
Line 6562: [NrTxFeDev] rffeOffset [%d, %d, %d, %d]
Line 6568: [NrTxFeDev] PA_SM_EXTENSION - numRficGain:%d, rficGainWord0:0x%08x,%d, rficGainWord1:0x%08x,%d, rficGainWord2:0x%08x,%d, rficGainWord3:0x%08x,%d
Line 6578: [NrTxFeDev] FBRX info - Coupler idx:%d, num:%d, Word:0x%X, 0x%X, 0x%X, 0x%X, 0x%X, ch:%05d
Line 6589: [NrTxFeDev] FBRX info - analog/rfdOnOffNum(1/1/1/1):%04d, analogOn(addr/data):0x%X, 0x%X, rfdOnAddr: 0x%X, 0x%X, data:0x%X, 0x%X, fbrxAgcAddr:0x%X, fbrxLinearPowAddr:0x%X, fbrxDcrAccumValAddr:0x%X
Line 6600: [NrTxFeDev] FBRX info - pdType/CplSep/tickMode(1/1/1):%03d, addr:0x%X, data:0x%X, 0x%X fbrxGainCtrlEn/fbrxGainNumStage/fbrxGainNumWord(1/1/1):%d, fbrxConstant(3/3/3):%d, fbrxGainThreshold[0]:%d, fbrxGainThreshold[1]:%d, fbrxGainThreshold[2]:%d
Line 6605: [NrTxFeDev] TxChain info - on:%d, 0x%X, 0x%X, off:%d, 0x%X, 0x%X, txGainTrigMode - En:%d, addr:0x%X, data:0x%X
Line 6610: [NrTxFeDev] UpdateShmValue - rficId:%d, APT en:%d, etSaptActive:%d, 256QamSupport:%d, etSapt256QamSupport:%d, iqmc enable:%d, smHoldDisalbe:%d, mipiFrontEn:%d, gprfoFrontEn:%d, etTotalDelay:%d
Line 6618: [NrTxFeDev] APT info - PA step: %d, txGain Addr:0x%X, rficHighGain: 0x%X, 0x%X, 0x%X, rficMinGain:0x%X, MIPI numCh:%d, PAM ch:%d, SM ch:%d
Line 6628: [NrTxFeDev] SM info - mode/volt/trigEn/trigDis/offNum(1/1/1/1/1):%d, smMode:0x%X, smVoltage:0x%X aptTrig:0x%X, etTrig:0x%X, smOff:0x%X, pam trigger:%d, 0x%X
Line 6633: [NrTxFeDev] PAM info - pam mode:%d,0x%X,0x%X,0x%X, bias:%d,0x%X, off pam mode:%d,0x%X,0x%X
Line 6646: [NrTxFeDev] ET info - threshold/256qam(3/3):%d, etStartPwrIdx:%d(LowestIdx:%d), rficGain:[0x%X, 0x%X], sm:0x%X, smVolt:[0x%X, 0x%X], pam mode word/trnum(1/1):%d,0x%X, bias:%d,0x%X
Line 6649: [NrTxFeDev] ET info - TableOffset, DFTs: %d, %d, %d, %d, %d, CP: %d, %d, %d, %d, %d
Line 6674: [NrTxFeDev] FEM trx cmd Rx:%d,%d,0x%x tx:%d,%d,0x%x FEM 2nd Ctrl gpioMap:0x%X, gpioTxWord:0x%X, gpioRxWord:0x%X, gpioDefVal:0x%X
Line 6682: [NrTxFeDev] SRS SW info, fbrxMaskBitmap:0x%X, maxPower/AntPath: %d %d %d %d
Line 6685: [NrTxFeDev] SRS SW info, not update - rank:%d, srsMode:%d
Line 6703: [NrTxFeDev] SRS SW info, pathIdx:%d(1st), pathWord:0x%08X, 0x%08X, 0x%08X, 0x%08X, 0x%08X, 0x%08X
Line 6706: [NrTxFeDev] SRS SW info, pathIdx:%d(2nd), pathWord:0x%08X, 0x%08X, 0x%08X, 0x%08X, 0x%08X, 0x%08X
Line 6711: [NrTxFeDev] SRS SW info, srsMode:%d(rxPortMap:0x%X), defIdx:0x%X, totalSwNum:%d, trxSeperateFlag:%d, rxPathIdx:%d, matchPort(1/1):%02d
Line 6714: [NrTxFeDev] SRS SW info(1st), swType:%d, %d, %d, %d, %d, %d, gpioMask:0x%X, gpioDefVal:0x%X
Line 6716: [NrTxFeDev] SRS SW info(1st), swChOrMask:0x%X, 0x%X, 0x%X, 0x%X, 0x%X, 0x%X
Line 6719: [NrTxFeDev] SRS SW info(2nd), swType:%d, %d, %d, %d, %d, %d
Line 6721: [NrTxFeDev] SRS SW info(2nd), swChOrMask:0x%X, 0x%X, 0x%X, 0x%X, 0x%X, 0x%X
Line 6724: [NrTxFeDev] SRS SW info, antPathLoss:%d,%d,%d,%d
Line 6744: [NrTxFeDev] Switch info, GpioMask:0x%X, GpioDefValue:0x%X, femCtlMipiBitMap:0x%X
Line 6749: [NrTxFeDev] DPS power info [0]:%d, [1]:%d, [2]:%d, [3]:%d, [4]:%d, [5]:%d, [6]:%d, [7]:%d, [8]:%d, xScale:%d
Line 6754: [NrTxFeDev] spiSrcMemddr, src0:%d, src1:%d, src2:%d, src3:%d, src4:%d, src5:%d, src6:%d
Line 6756: [NrTxFeDev] spiSrcMemddr, src7:%d, src8:%d, src9:%d, src10:%d, src11:%d, src12:%d, src13:%d
Line 6762: [NrTxFeDev] mipiSrcMemddr, ch:%d, [FemCtl] Sel0: %d, Sel1:%d, sizeN:%d, onOff:%d
Line 6771: [NrTxFeDev] mipiSrcMemddr, ch:%d, [TxCtl] Sel0: %d, Sel1: %d, sizeN:%d, onOff:%d
Line 6776: [NrTxFeDev] mipiSrcMemddr, [SwCtl] memAddr:%d, sizeN:%d
Line 6784: [NrTxFeDev] Delay[%d] SpeedyOn[%d] SpeedyOff[%d] SmOn[%d] SmGainOn[%d] SmOff[%d] SmTrig[%d] FemOn[%d] FemOff[%d] RficTrx[%d]
Line 6807: [NrTxFeDev] TrNum Ch:%d, FEM_CTL_ARBIT_SEL1_CTL:0x%X, isFemCtl:%d, isCpl:%d
Line 6831: [NrTxFeDev] TrNum Ch:%d, TX_CTL_ARBIT_SEL1_CTL0:0x%X, TX_CTL_ARBIT_SEL1_CTL1:0x%X
Line 6870: [NrTxFeDev] therm[%d] thermalCompEnable:%d, pdetCompEnable:%d, tableSwEnable:%d, maxDgain:%d, minDgain:%d
Line 6899: [NrTxFeDev] m_thermalMeasDur[%d], TxTickTime[%d %d], max_pwr[%d %d], singlePolarization:%d, levelReportEnable:%d, levelRise[%d %d %d]
Line 6900: [NrTxFeDev] m_fr2CompTh[%d], ChipVer[%d], m_fr2_clpc_const_k[%d], m_fr2_clpc_const_z1[%d], m_fr2_ant_sel[%d]
Line 7155: [NrTxFeDev] DacMonitor - rank:%d, invalidCnt:%d, sendRfDump:0x%X txFilterPath(BB):%d (RFD)txFiltPath:%d
Line 7193: [NrTxDev] DAC input power - mprPeak(%d, %d) urtgPath(%d, %d) BB(urtg:0x%X, txfSlice:0x%X, freeCtl:0x%X), RFD(urtg:0x%X, txfClk:0x%X, txfEn:0x%X)
Line 7202: [NrTxDev] DAC input power - SrchClkEn:0x%X, ShmClkSel:0x%X, srchShmClkSel:0x%X, ifftGain:0x%X, 0x%X
Line 7375: [NrTxFeDev] skipRank:%d, femCtlBitmap:0x%X (total:0x%X, skip:0x%X)
Line 7446: (Warning-RFCTRL) Wrong TxCtlCh:%d, rank:%d, pam:%d, sm:%d
Line 7481: (ConfigMipiFixedMem) invalid updateFlag %d %d
Line 7877: (Warning-RFCTRL) SwMipi Write fail! ch:%d, word:0x%X
Line 7940: (Warning-RFCTRL) SwMemMipi Write fail! ch:%d, word:0x%X
Line 8030: (Warning-RFCTRL) Mipi Read fail#0, mipiCh:%d, word:0x%X
Line 8040: (Warning-RFCTRL) Mipi Read fail#1, ch:%d, word:0x%X, readData:0x%X
Line 8380: (Warning-RFCTRL) WriteSwHiSpd - addr:0x%X, data:0x%X
Line 8402: (Warning-RFCTRL) WriteSwHiSpdBurst - num:%d, addr:0x%X, data:0x%X
Line 8422: (Warning-RFCTRL) ReadSwHiSpd - addr:0x%X
Line 8469: (Warning-RFCTRL) NO_SPI_SOURCE action[%d]
Line 8474: (Warning-RFCTRL) MAX_SPI_NUM overflow. m_spiNum[%d] spiSrcMemSize[%d]
Line 8706: (Warning-RFCTRL) NO_MIPI_SOURCE rank[%d] action[%d]
Line 8725: (Warning-RFCTRL) TxCtlMipi Num Overflow!! action[%d] mipiCh[%d] mipiMaxNum[%d] MipiNum[%d] trNum[%d]
Line 8737: [NrTxFeDev] TxCtlCh[%d] num[%d] mipiWord [0x%X] [0x%X] [0x%X] [0x%X] [0x%X] [0x%X] P_Enable[0x%04X -> 0x%04X]
Line 8752: [NrTxFeDev] FemCtlCh[%d] num[%d] mipiWord [0x%X] [0x%X] [0x%X] [0x%X] [0x%X] mipiNum[%d] TrNum[%d] stNum[%d]
Line 8774: [NrTxFeDev] PaSm(mipiCtl) action[%d] rank[%d] src[%d] gpioSrc[%d] memSel[%d] txCtl[0x%X] femCtl[0x%X] tickCnt[0x%X] srsPathIdx[%d]
Line 8847: (Warning-RFCTRL) NO_MIPI_FEM_SOURCE rank[%d] action[%d]
Line 8862: [NrTxFeDev] PaSm(femCtl) action[%d] rank[%d] src[%d] gpioSrc[%d] memSel[%d] txCtl[0x%X] femCtl[0x%X] tickCnt[0x%X]  srsPathIdx[%d]
Line 9209: [NrTxFeDev] UpdateFemWord - trxSwInfoUpdate:0x%X, rank:%d, FEM trx cmd Rx:%d,0x%x,0x%x,0x%x tx:%d,0x%x,0x%x,0x%x
Line 9709: [NrTxFeDev] ClearFeJob - mipiHeapCnt:%d, spiHeapCnt:%d, femState:%d, smState:%02d, pamState:%02d, rficTrxState:%d, rficState:%02d
Line 9752: (F)[NrTxFeHeap] InsertJob Fail! m_heapCnt %d
