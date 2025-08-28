Line 393: [NrCdrxRestoreSinr] filtered:%d, avgSchSinrDbComb:%d
Line 418: Scell restore sinr = %d
Line 542: NR_DEMOD_SINR_CCH cur, ccIdx/coreset/ss_num/sbufIdx:0x%04x, SINR(Rx0/Rx1):%6d,(Rx2/Rx3):%6d, Psig(Rx0/Rx1/Rx2/Rx3):%8d, WideR (Rx0/Rx1/Rx2/Rx3):%8d, cchSinrPackLog:0x%x,0x%x,0x%x,0x%x,0x%x
Line 687: NR_DEMOD_SINR_SCH cur, PDSCH%d(Rx0/Rx1):%6d,(Rx2/Rx3):%6d, Psig_dB(Rx0/Rx1/Rx2/Rx3):(%8d,%8d,%8d,%8d), WideR_dB(Rx0/Rx1):(%d) (Rx2/Rx3):(%d), magicNumber:(%d)
Line 738: [NR DMRS TO] ccIdx(%d), schIdx/numRx/numTx/fftOdr/bundOn/bundSize/dmrsType/rsDist(0x%x), [TO] Rx0:(%8d,%8d) Rx1:(%8d,%8d), Rx2(%8d,%8d), Rx3(%8d,%8d)
Line 786: [IwSch] DcSinr logIdx/magicNum/cc/schIdx/slot(8/8/4/4/8)(0x%08x) monitor RB R(%d/%d/%d/%d/%d/%d/%d/%d/%d/%d/%d/%d/%d/%d/%d/%d/%d/%d/%d)
Line 921: [NR PTRS PO Rx01], Sym0~6, PDSCH0(Rx0/Rx1):0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x memIdx/txIdx/pdschIdx(1/1/1)(%d), cc(%d)
Line 932: [NR PTRS PO Rx01], Sym7~13, PDSCH0(Rx0/Rx1):0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, |slotIndx|||magicNumber 0x%x, cc(%d)
Line 973: NR_DEMOD_SINR_CSIBM cur CSIRS0(RX0/RX1):%6d, CSIRS0(RX2/RX3):%6d
Line 1169: NR_DEMOD_SINR_TRS(cc(2)/SetN(2)/Idx(2)/Bst(1)):%d, Cur(Rx0/Rx1):%6d,(Rx2/Rx3):%6d, Avg(Rx0/Rx1):%6d,(Rx2/Rx3):%6d, PsigdB(inst/avg):(%8d %8d), PnivdB(inst/avg):(%8d %8d), DnInfo(Gain(2)/Ifft(1)/Iir(Pdp/Niv)(2)/edge(1)/mgcN(2))):0x%x
Line 1290: NR_DEMOD_SINR_SSB (cc/ssb):%d Cur(Rx0/Rx1):%6d,(Rx2/Rx3):%6d, PsigdB(Rx0/Rx1/Rx2/Rx3):%8d, PnivdB(Rx0/Rx1/Rx2/Rx3):%8d, PsigLin(Rx0)%d,(Rx1)%d, Avg(Rx0/Rx1):%6d,(Rx2/Rx3):%6d, (det/magicN):0x%x
Line 1358: NR_DEMOD_SINR_SSB_AGAP (cc/ssb):%d Cur(Rx0/Rx1):%6d,(Rx2/Rx3):%6d, PsigdB(Rx0/Rx1/Rx2/Rx3):%8d, PnivdB(Rx0/Rx1/Rx2/Rx3):%8d, PsigLin(Rx0)%d,(Rx1)%d, magicN:0x%x
Line 1747: [NrCalcSsbAvgSinr] iir.counter = %d avgSchSinrdBComb = %d avgSchSinrLinearComb = %d
Line 1826: NrCalcSsbAvgSinrAll ssbIdx:%d, Current_SINR(dB): (%d,%d,%d,%d) Filtered_SINR(dB): (%d,%d,%d,%d) fltPower: %d
Line 1914: [SSB Ordering] m_TTTCnt : %d, m_TTTIndex:%d, hysteresis_flag:%d, isLowDetSsbSinr:%d, isTooLowDetSsbSinr:%d, max_idx:%d, cur_sinr:%d, max_sinr:%d, DetectedSsbIdx : %d
Line 1940: [SSB Ordering] SSB index change from %d to %d, in aslot:%d
Line 2914: NrDmMonitoring: pIwH %d, pAgcH %d, pDciH %d, pCsiH %d, pDseH %d, pDse_csiH%d
Line 2916: NrDmMonitoring: pTcH %d, pTc_dciH %d, pSinrSsbH %d, pSinr_csiH %d, pDse_prH %d, pDmrs_H %d
Line 3643: [PHY_CSIRS] CSIRS_NIV rx0 %d, rx1 %d, rx2 %d, rx3 %d, status0 %d, status1 %d, rtg_r %x, magicNumber %d
Line 3725: NR_DEMOD_PSIG_CSIBM (cck/dm/txk/idx):%d, Pniv: %d, Psig: %d %d %d %d, magicN: %d
Line 3814: NR_DEMOD_SINR_CSIRS (cck/rxk/txk/idx):%d, SINR(dB,psig,niv):%d, Psig: %d %d %d %d %d %d %d %d
Line 4054: Forced SSB tracking by TRS saturation %d, ccIdx %d
Line 4066: [PHY_CSIRS] RS Sinr(SSB/TRS/CSIRS) : %d/%d/%d, Tracking Info: %02d, StateFlag : 0x%x, ||RxAntBmIsTrsNivMax||ValidNeighbor||||DetSsbRsrpRx0 0x%08X
Line 4476: NrNbceSinrMonitoring SCH, ccIdx:%d, bwpIdx:%d, slotIdx:%d, tag0[1/0]:0x%x,0x%x, sBufIdx:%d, magicNumber:0x%x p_NrNbceSinr 0x%x
Line 4480: (F) NrNbceSinrMonitoring NBCE PDSCH DMRS extractor not done(ccIdx:%d, tag0[1/0]:0x%x,0x%x)
Line 4662: [CCH CE] coresetOn(0x%x), sBufIdx|cs_sw|cs_ce|cs_cch|crc_good(0x%05x), tag0(0x%x,0x%x), raw_data: ss0(%d,%d,%d,%d), ss1(%d,%d)
Line 4685: (F) NrNbceSinrMonitoring NBCE PDCCH DMRS IW invalid flag(%d), wideR(%d,%d,%d,%d)
Line 4694: (F) NrNbceSinrMonitoring NBCE PDCCH DMRS coreset index not match(sBufIdx:%d, config:%d, dm:%d)
Line 4715: (F) NrNbceSinrMonitoring NBCE PDCCH DMRS extractor not done(sBufIdx:%d,tag0[1/0]:0x%x,0x%x)
Line 4743: [sinr debug] sBufIdx(%d), pdschIdx(%d), widebandR(%d,%d,%d,%d), prev_slot_meas_valid(%d), wideR_valid(%d)
Line 4747: (F) abnormal schWideR register value, modify value: from (%d) to (%d)
Line 4847: sBufSlotIdx/rxk/bestTxPwrPort/toPreCompenEnable(1/1/1/1)(%d) DMRS_TO=(%d), nr1stTo(%d) nr2stTo(%d) IIR_CNT=(%d) IIR_DMRS_TO=(%d)
Line 5041: [dmrs type2 sinr bias]factor/antPorts(2/2)(%d)
Line 2666: (F)m_CcIdx(%d) is invalid!
