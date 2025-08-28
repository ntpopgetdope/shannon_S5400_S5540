Line 400: activeStackId %d HsupaDlPhyCh start: phyChType =%d PhyChNr = %d TxDiversityMode = STTD
Line 406: activeStackId %d HsupaDlPhyCh start: phyChType =%d PhyChNr = %d TxDiversityMode = CLTD
Line 412: activeStackId %d HsupaDlPhyCh start: phyChType =%d PhyChNr = %d TxDiversityMode = None
Line 460: HsupaDlPhyCh start request fails: originalState of (phychNr, hsupaPhychNr) = (%d, %d) is %d. It's a wrong state
Line 498: Uhal Starts EAGCH phychNr %d (phychType=%d, hsupaRlsStr=%x)
Line 502: Uhal Starts EHICH phychNr %d (phychType=%d, hsupaRlsStr=%x)
Line 506: Uhal Starts EHICH phychNr %d (phychType=%d, hsupaRlsStr=%x)
Line 510: Uhal Starts EHICH phychNr %d (phychType=%d, hsupaRlsStr=%x)
Line 514: Uhal Starts EHICH phychNr %d (phychType=%d, hsupaRlsStr=%x)
Line 518: Uhal Starts ERGCH phychNr %d (phychType=%d, hsupaRlsStr=%x)
Line 522: Uhal Starts ERGCH phychNr %d (phychType=%d, hsupaRlsStr=%x)
Line 526: Uhal Starts ERGCH phychNr %d (phychType=%d, hsupaRlsStr=%x)
Line 530: Uhal Starts ERGCH phychNr %d (phychType=%d, hsupaRlsStr=%x)
Line 534: Uhal Starts unknown phychNr %d (phychType=%d, hsupaRlsStr=%x)
Line 692: uhal HsupaDlPhychStart check fails: phychNr %d is greater than maxPhychNr %d
Line 719: uhal_Agch_LISR
Line 743: uhal_Rgch_LISR
Line 770: uhal_HICH_LISR
Line 817: activeStackId %d AGCH Int triggered
Line 947: activeStackId %d E-HICH: servingRlsStr=0x%x, detector enabledStr=0x%x
Line 968: activeStackId %d rgch_detector_en=0x%x
Line 976: activeStackId %d E-RGCH: detectorServingRlsInx=0x%x, servingRlsStr=0x%x, rgch_detector_en=0x%x
Line 995: activeStackId %d detector enabledStr=0x%x
Line 1003: activeStackId %d E-HICH: detectorServingRlsInx=0x%x, servingRlsStr=0x%x, hich_detector_en=0x%x
Line 1035: activeStackId %d E-DCH serving RL changed
Line 1052: activeStackId %d TokenP = 0x%x  at TokenPool[ idex = %d ], its address = 0x%x
Line 1082: HICH SignalSigned[0] 0x%x, SignalSigned[1] 0x%x, SNR[0] %d, SNR[1] %d, SNR[2] %d, SNR[3] %d, ACK_TTIN 0x%x
Line 1086: RGCH SignalSigned[0] 0x%x, SignalSigned[1] 0x%x, SNR[0] %d, SNR[1] %d, SNR[2] %d, SNR[3] %d, ACK_TTIN 0x%x
Line 1091: activeStackId %d AGCH IntCnt : %d, Sync10_2 IntCnt : %d
Line 1097: activeStackId %d IsFakeConfigured : %d, index : %d
Line 1106: activeStackId %d AGCH servingRlNr %d
Line 834: activeStackId %d Non ServingMask %d type %d
Line 844: ERROR: Invalid number of Non ServingMask [non_servIndex %d]
Line 2566: [DEBUG NS E-RGCH] ChNr %d, MappedChNr %d, hsupaRlNr %d, ref_cell_nr %d, DpchOffset %d
Line 2568: [DEBUG NS E-RGCH] HARQ ID Calculation : current_sfn %d, TimeDiffToCfnSfn %d, s %d, t %d, DpchOffset %d
Line 2339: activeStackId %d Wrong RGCH Serving RL Index
Line 2447: RGCH Non-Serving FA : noise_level(%d),noise_level_for_dec(%d), NONSERV_ERGCH_NOISE_RD_IIR(%d) NONSERV_ERGCH_BIT_RD_DCRemoved(%d)
Line 2161: activeStackId %d Wrong HICH Serving RL Index
Line 2209: [DEBUG NS E-HICH] ChNr %d, MappedChNr %d, hsupaRlNr %d, ref_cell_nr %d, DpchOffset %d
Line 2211: [DEBUG NS E-HICH] HARQ ID Calculation : current_sfn %d, TimeDiffToCfnSfn %d, current_slot %d, DpchOffset %d, tauRgch %d
Line 2218: Skip update Non Serving HICH detection result: gUHAL_RF_PausedandResumed %d, ds_gUHAL_RF_PausedandResumed %d, HICH result before pause %d, HICH result after resume %d 
Line 2235: activeStackId %d False Alarm : SignalPower %d, IirNoisePower*Th %d, Result %d
Line 2249: activeStackId %d False Alarm : SignalPower %d, IirNoisePower*Th %d, Result %d
Line 1159: [DEBUG E-AGCH] ChNr %d, ref_cell_nr %d, DpchOffset %d
Line 1180: [DEBUG E-AGCH] crc_result %d, crc_result_buf %d
Line 1216: [E-AGCH 2ms TTI] AgValue %d, AgScope %d, ErntiIdType %d, current_subfr %d, s %d, t %d,  target_ttin %d
Line 1219: s %d, t %d, TimeDiff %d, DpchOffset %d
Line 1235: [E-AGCH 10ms TTI] Dpch Offset %d, SFN %d, CFN2SFN %d, TTIN %d, AG value %d
Line 1248: [Debug E-AGCH 2ms TTI] AGCH_Int_Skip_flag = %d
Line 1275: AGCH INTT came with slight delay: AGCH_Prev_Subfr %d,  AGCH_Subfr %d, EDCH_Subfr %d
Line 1302: activeStackId %d TokenP = 0x%x is not used at all at [idex = %d]
Line 1322: [AGCH Token Submit] sfn %d, slot %d, chip %d, chsCfn %d, chsSlot %d, chsChip %d
Line 1334: [Submit_Token_AGCH]EDCH_SubSlot %d, EDCH_SubChip %d, [AGCH]AGCH_SubSlot: %d, AGCH_SubChip %d [AGCH_Subfr %d, EDCH_Subfr %d]
Line 1405: activeStackId %d servingRlsStr=0x%x
Line 1412: activeStackId %d servingRl %d not in servingRlsStr=0x%x
Line 1468: activeStackId %d Wrong RGCH Serving RL Index
Line 1501: ERROR: Invalid number of RL [rlNr %d]
Line 1551: activeStackId %d Wrong RGCH Serving RL Index
Line 1620: [DEBUG S E-RGCH] ChNr %d, MappedChNr %d, hsupaRlNr %d, ref_cell_nr %d, DpchOffset %d
Line 1622: [DEBUG S E-RGCH] HARQ ID Calculation : current_sfn %d, TimeDiffToCfnSfn %d, current_slot %d, DpchOffset %d
Line 1770: activeStackId %d RGCH Serving FA : uhal_CHmcpHsupaDlPhychStartData[activeStackId].ERGCH_BIT_RD_DCRemoved %d, uhal_CHmcpHsupaDlPhychStartData[activeStackId].ERGCH_BIT_RD_IIR %d
Line 1775: [1]RGCH IIR debug logging: index=%d,current_tti=%d,uhal_CHmcpHsupaDlPhychStartData[activeStackId].ERGCH_BIT_RD_IIR_state_flag[current_tti][index]=%d,uhal_CHmcpHsupaDlPhychStartData[activeStackId].ERGCH_NOISE_RD_IIR[current_tti][index]=%d
Line 1778: [2]RGCH IIR debug logging: uhal_CHmcpHsupaDlPhychStartData[activeStackId].ERGCH_BIT_RD_IIR_state[current_tti][index]=%d,uhal_CHmcpHsupaDlPhychStartData[activeStackId].ERGCH_BIT_RD_IIR[current_tti][index]=%d,uhal_CHmcpHsupaDlPhychStartData[activeStackId].ERGCH_BIT_RD_DCRemoved[current_tti][index]=%d,detection_result_before_bias_rem=%d,detection_result_after_bias_rem=%d
Line 1875: activeStackId %d servingRlsStr=0x%x
Line 1883: activeStackId %d servingRl %d not in servingRlsStr=0x%x
Line 1927: ERROR: Invalid number of RL [rlNr %d]
Line 2034: [DEBUG S E-HICH] ChNr %d, MappedChNr %d, hsupaRlNr %d, ref_cell_nr %d, DpchOffset %d, hich_int_index 0x%x
Line 2036: [DEBUG S E-HICH] HARQ ID Calculation : current_sfn %d, TimeDiffToCfnSfn %d, current_slot %d, DpchOffset %d, TauRGCH %d
Line 2043: Skip update Serving HICH detection result: gUHAL_RF_PausedandResumed %d, ds_gUHAL_RF_PausedandResumed %d, HICH result before pause %d, HICH result after resume %d 
Line 1816: activeStackId %d Wrong HICH Serving RL Index
