Line 115: [NrPhyTxPuschScheduler] Coufngred GRANT replaced dynamic GRANT
Line 118: [NrPhyTxPuschScheduler] Discard UL GRANT when doubly scheduled in same slot, targetSlot:%d, rPuschSchedSlotBitmap:0x%x
Line 131: [NrPhyTxPuschScheduler] Cancel ConfiguredGrant due to New activation DCI
Line 136: [NrPhyTxPuschScheduler] Discard UL GRANT when doubly scheduled in same Harq ID,  targetHarqId:%d, pPuschSchedHarqBitmap:0x%x
Line 169: [NrPhyTxPuschScheduler] Discard UL GRANT when symbol start is not valid, targetSlot:%d, symStart:%d, slotCfg.flexStSymbol:%d
Line 199: [NrPhyTxPuschScheduler] Reset Schedule after sending to HAL, targetSlot:%d, rPuschSchedSlotBitmap:0x%x, targetHarq:%d, rPuschSchedHarqBitmap:0x%x
Line 306: [BWP_SWITCH] bwpSwitching_candidate(%d)
Line 394: [NrPhyTxPuschScheduler] PDCCH FORMAT:0_%d BS/FA/NewReCsi/mcsR/mcsN(1/2/1/2/2):%d, BG/JID/K2/SchedSlot(1/3/2/2):%3d, tpmi/numLayer/numAntPort/TxType/CsiReq(3/2/2/1/2):%02d, TimeMap/Symoffset/Leng(1/3/3):%09d, dataScr:0x%x, dmrsCfg/numSym/cdmGr(3/3/3):%09d, RbAllocType/offset/leng(3/3/3):%09d, harq/Rv/Tbs(2/2/6):%11d ptrsRBref/L/K/Assoc(2/2/2/2):%09d
Line 404: [NrPhyTxPuschScheduler] frequency hopping firsthopSymbol_S/L(3/3): %d, firsthopRb_S/L(3/3): %d, secondhopSymbol_S/L(3/3): %d, secondhopRb_S/L(3/3): %d
Line 766: [NtmScheduler] puschPower:%d, maxPwr:%d, TotalMpr:%d (mpr:%d, ampr:%d, isNeedPc1p5:%d)
Line 885: [NtmUpdateParam] puschPower:%d, maxPwr:%d, TotalMpr:%d (mpr:%d, ampr:%d, isNeedPc1p5:%d)
Line 1163: [NrPhyTxPuschScheduler] PuschCalcTargetTime: dci rx time (sfn : %d, subframe : %d, slot : %d), tx scheduled time (sfn : %d, slot : %d)
Line 1374: [NrPhyTxPuschScheduler][PuschCalcPower] prachSsbIdx: %d, mibSsbIdx: %d, referenceSignalPower: %d, sriField %d pathLossRefRsIdx %d rsrp prach %d rsrp mib %d rsrp sel %d rsrpType %d
Line 1440: [NrPhyTxPuschScheduler::CC#%d][PuschCalcPower] Po_nominal_pusch/Po_ue_pusch(16/16):%08x, alpha/pathLoss(2/2/4):%d, AMPR/MPR(4/4):%d, deltaTFC:%d, tpc:%d, deltaPrampupReq:%d, initPwrCtrlAdjState/pwrCtrlAdjState[l](16/16):%08x, calcPower:%d, txPower:%d
Line 1543: [NrPhyTxPuschScheduler][PuschCalcRefPower] Po_nominal_pusch: %d, Po_ue_pusch: %d, alpha: %d, passLoss %d, rsrp %d, rsIndex %d, rsrpType %d, pwrCtrlAdjState[0] %d, txPower %d
Line 1747: [PuschCalcDeltaTf] N_RE is invalid
Line 1904: [PuschCalcPowerRsrp] invliad REF SIG 
Line 1979: [NR IPC] L2_PHY_UL_GRANT_IND, CC_Idx(%d), type: %d, hid:%d, token: %d, grantInd: %d, tbSize: %d, puschLen: %d, apCsi: %d, scs: %d, configuredGrantAct: %d
Line 2124: [NrPhyTxPuschScheduler] Invalid PUSCH MIMO Config: numLayer 0x%X, tpmi 0x%X
Line 2221: [NrPhyTxPuschScheduler] DCI0_1 config Table PUSCH time domain alloc index: %d
Line 2251: [NrPhyTxPuschScheduler] DCI0_2 config Table PUSCH time domain alloc index: %d
Line 2275: [NrPhyTxPuschScheduler] Invalid PUSCH time domain alloc index: %d, cause: %d
Line 2284: [NrPhyTxPuschScheduler] config Table PUSCH time domain alloc index: %d, select: %d
Line 2292: [NrPhyTxPuschScheduler] commonConfig Table PUSCH time domain alloc index: %d, select: %d
Line 2302: [NrPhyTxPuschScheduler] Default Table PUSCH time domain alloc index: %d, select: %d
Line 2374: [NrPhyTxPuschScheduler] activeBWP does not includes all RBs of initial BWP. activeBWP(%d/%d), initialBWP(%d/%d)
Line 2434: Invalid RA type!!!  transformPrecoder: %d, rbAllocationType: %d 
Line 2475: [NrPhyTxPuschScheduler] BWP change!!! ID: %d, NbwpStart: %d, NbwpSize: %d, SLIV: %d
Line 2500: Invalid BWP RB size: %d
Line 2507: Invalid BWP RB size: %d
Line 2510: [NrPhyTxPuschScheduler] RBG change!!! RBG SIZE: %d, CONFIG: %d
Line 2538: Invalid FDRA(Type0) value : %d
Line 2578: ra_type0_map[0]:%08x,[1]:%08x, [2]:%08x, [3]:%08x, [4]:%08x, [5]:%08x, [6]:%08x, [7]:%08x, [8]:%08x
Line 2589: PUSCH RB allocation type0, rbgNum:%d, rbgSize[msb/lsb/others]:%d, vrbLength:%d, freqDomainRa:0x%x, bwpRbSize:%d, bwpRbStart:%d, shiftSize:%d
Line 2598: Invalid type0 RB allocation, rbgNum:%d, rbgSize[msb/lsb/others]:%d, vrbLength:%d, freqDomainRa:0x%x, bwpRbSize:%d, bwpRbStart:%d, shiftSize:%d
Line 2632: [NrPhyTxPuschScheduler] Frequency Hopping / Invalid totalRbSizeBwp Config: totalRbSizeBwp 0x%X
Line 2664: [NrPhyTxPuschScheduler] rbOffsetIndicator: %d, totalRbSizeBwp: %d, tempBitSize: %d, fdra: %d, rbOffset: %d
Line 2693: Invalid FDRA(Type1) value : %d
Line 2699: Invalid UL BWP RB size: %d
Line 2729: Invalid intra FH second hop RB allocation, RB start: %d, RB offset: %d, total RB: %d 
Line 2744: Invalid type1 RB allocation, vrbLength: %d, riv_value: %d, vrbOffset: %d 
Line 2808: (F) Invalid PUSCH MCS index: %d
Line 2984: [NrPhyTxPuschScheduler] Invalid PUSCH modOrder:%d, codeRate:%d, nrCtrl:%d, mcs:%d, reTxMcs:%d
Line 3091: [NrPhyTxPuschScheduler] calc Tb size:%d, Nsymbol:%d, N_PRB_oh:%d, N_info:%d, N_PRB_DMRS:%d
Line 3160: [NrPhyTxPuschScheduler] Discard DCI, Invalid K2(%d) in DCI: NrBWPSwitchDelay(%d),scs(%d),BWPDelayType(%d)
Line 3187: [NR IPC][NR_BWPSWITCH_EVT_DCI_0_1] PHY_PHY_BWP_SWITCHING_CTRL_IND, Dst(%d)/Src(%d)/BwpInd(%d)
Line 3262: [NrPhyTxPuschScheduler] PUSCH transmission is canceled, False Alarm, targetCodeRate: %d
Line 3265: [NrPhyTxPuschScheduler] PUSCH transmission is canceled, CG is replaced DG
Line 3274: [NrPhyTxPuschScheduler] Calculated NewTxTbs:%d, currTbs:%d, MCS:%d, RIV:%d
Line 3321: [NrPhyTxPuschScheduler] DSP2RFD, isTransmit:%d, enable:%d
Line 3349: [NrPhyTxPuschScheduler] L1C_PHY_DSP2RFD_COMMON_IND, ccIdx:%d, msgId:%d, targetSlotIdx:%d
Line 3361: [NrPhyTxPuschScheduler] DSP2RFD, targetTime(%d, %d, %d), targetSlotBitmap:0x%X(%d)
Line 3440: [NrPhyTxPuschScheduler] AIT_Dump_Ind, timeToSlotBoundary:%d, subframeIdx/slotIdx:%d, startSymbol/symbolLen:%d, scs:%d, rbStart:/rbSize:%d, txPwr:%d, refPwr:%d, failFlag/clAitEn(1/1):%d, PriodStartTime:%d, periodIdx:%d
Line 3462: [F][NrPhyTxPuschScheduler] Already virtual PHR (JobId %d) had been scheduled, it would be cancelled
Line 3470: [NrPhyTxPuschScheduler] PuschPhReportSchedule - jobId %d [Target Time: %d/%d/%d/%d/%d]
Line 3579: [Type1PhReport], real ph report ph[%d], grantRx[%d], targetTime[%d], mu[%d]
Line 3681: [NrPhyTxDb] UpdateTxPathMap - Invalid paramter: numLayer:%d, tpmi:%d
Line 3708: [OHC] L1C_PHY_OHC_MAX_TX_ANT_CNF, cc_Idx(%d) result(%d)
Line 4240: Invalid PUSCH time domain double symbol confiuration mapType:%d, duration: %d, dmrsAddPos: %d
Line 4261: Invalid PUSCH time domain configuration mapType:%d, duration: %d
Line 4561: Invalid PTRS mcs_idx: %d
Line 4620: Invalid PTRS L_PT_RS: %d
Line 4857: Invalid ptrsDmrsAssociation : %d
Line 4860: Invalid numLayer : %d
Line 4863: [NrPhyTxPuschScheduler] PuschPtrsGetChCfg, gain[0]:%d, gain[1]:%d, ptrsDmrsAssociation:%d
Line 5168: [NrPuschScheduler][MSGA] cdmgrp: %d %d, precoder: %d
Line 5233: [NrPhyTxPuschScheduler] MsgB info - MSGB-RNTI:0x%04x, MsgB timer start sfn:%d, slot:%d, mu:%d
Line 5273: [NrPhyTxPuschScheduler::CgPuschScheduler] ConfiguredGrant state is already activation(isActivated %d)
Line 5310: [NrPhyTxPuschScheduler::CgPuschScheduler] freqHoppingFlag forced set to 0 in grantInfo as freqHopping was not configured in CGconfig
Line 5318: [NrPhyTxPuschScheduler::CgPuschScheduler] CG activation not done due to failed UL grant scheduling
Line 5322: [NrPhyTxPuschScheduler::CgPuschScheduler] CG activation discarded. Periodicity = %d, HARQ ID = %d
Line 5338: [NR IPC] L2_PHY_UL_GRANT_IND, ConfiguredGrant Deactivation
Line 5361: [NrPhyTxPuschScheduler::CgPuschScheduler] ConfiguredGrant(CS-RNTI) state is invalid
Line 5375: [NrPhyTxPuschScheduler::CgPuschScheduler] CG re-tx discarded. HARQ ID = %d, NUM HARQ = %d
Line 5380: [NrPhyTxPuschScheduler::CgPuschScheduler] ndi is invalid
Line 5388: [NrPhyTxPuschScheduler::CgPuschScheduler] ConfiguredGrant INFO, RNTI_ID : %d, NDI : %d, STATE(SP/TX) : %d/%d
Line 5428: [NrPhyTxPuschScheduler::CgWakeup] HARQ_ID = %d, currentTime (SFN:%d, slot:%d), targetTime (SFN:%d, slot:%d), offset = %d
Line 5474: [NrPhyTxPuschConfiguredGrant::checkProcess] ConfiguredGrant Timer is running, cancel current CG
Line 5480: [NrPhyTxPuschConfiguredGrant::checkProcess] last ConfiguredGrant for deactivation
Line 5484: [NrPhyTxPuschConfiguredGrant::checkProcess] ConfiguredGrant has been deactivation already
Line 5489: [NrPhyTxPuschConfiguredGrant::checkProcess] invalid state: %d
Line 5552: [NrPhyTxPuschConfiguredGrant::cgEntityUpdate] HARQ_ID = %d, rxTime (SFN:%d, subFrams:%d, slot:%d), txTime (SFN:%d, slot:%d)
Line 5609: [NrPhyTxPuschConfiguredGrant::timerUpdate] sizeOfTimer = %d, periodicity = %d
Line 5617: [NrPhyTxPuschConfiguredGrant::timerUpdate] HARQ_ID = %d, TimerStart : %d/%d, TimerEnd : %d/%d
Line 5651: [NrPhyTxPuschConfiguredGrant::checkTimerState] TIMER RUN : %d, HARQ_ID = %d, TimerStart : %d/%d, TimerEnd : %d/%d, TargetTime : %d/%d
Line 5723: [NrPhyTxPuschConfiguredGrant::calcHarqId] invalid numHardID: %d
Line 5844: [NrPhyTxPuschScheduler] Msg3 info - Msg3 timer start sfn:%d, slot:%d, mu:%d
