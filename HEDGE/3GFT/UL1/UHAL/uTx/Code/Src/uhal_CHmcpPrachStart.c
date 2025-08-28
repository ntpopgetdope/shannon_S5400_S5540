Line 388:  Prach cmd is NULL
Line 394:  Prach cmdPtr is NULL
Line 400: activeStackId %d DSDS:uhal_CScomPrachStart_response  %d
Line 418: uhal_CScomPrachStart_response: uhal_HmcpHpcm_GetModemOnStatus(activeStackId) %d
Line 432: uhal_CScomPrachStart_response: checkUarfcnAfterCommit
Line 439: uhal_CScomPrachStart_response:[%d,%d] failed after checkAfter- to be run 1 frame later...
Line 467:  Prach cmdPtr is NULL
Line 477: activeStackId %d DSDS:uhal_CScomPrachStart_undo kill SubsequentPreambleToken
Line 487: activeStackId %d DSDS:uhal_CScomPrachStart_undo kill FirstPreambleToken
Line 497: activeStackId %d DSDS:uhal_CScomPrachStart_undo kill ReleasePrachToken
Line 506: activeStackId %d DSDS: uhal_CScomPrachStart_undo kill AichSyncToken
Line 514: activeStackId %d DSDS:uhal_CScomPrachStart_undo Aich Int pending
Line 520: activeStackId %d DSDS: uhal_CScomPrachStart_undo Encode Int pending
Line 533: 3G3G: uhal_CHmcpPrachStart_undo, disable TX interrupt
Line 537: activeStackId %d DSDS: uhal_CScomPrachStart_undo EHalDlAich_NoSignal
Line 544: uhal_CPrach_SetState:EPrachConfigured (uhal_CPrachStart_undo) %d
Line 613: activeStackId %d rachTxPowerMax %d maxTxPower %d txPrachOffset[3] %d txPowerTempOffset %d
Line 625: activeStackId %d Prach override: retries %d
Line 655: [Quadra WA] Set CellType to DCH instead of FACH
Line 725: activeStackId %d [TAS-RACH] currentTxAntNum: %d, rscp: %d, uhalCmdPrachStart->preambleInitPower: %d, init_power: %d 
Line 737: activeStackId %d init_power %d is limited to %d
Line 748: activeStackId %d PrachStart init=%d, rscp=%d outpower=%d dBm
Line 762: uhal_CHmcpPrachStart_request: sfn %6d slot %3d chip %5d
Line 796: uhal_CHmcpPrachStart_request: FirstRachProcess %d AddOffset %d
Line 1123: activeStackId %d Impossible case[current_aich_slots %d, sfnMod8 %d, selectedAS %d]
Line 1130: activeStackId %d uhal_CHmcpPrachStart_subsequentPreamble: submit SubsequentPreamble token
Line 1182: activeStackId %d [uhal_CHmcpPrachStart_firstPreamble] ulPhyProcInstance %x, prach %x
Line 1217: activeStackId %d [uhal_CHmcpPrachStart_firstPreamble] numberOfAvailAsAtNextSfn %d, current_aich_slots %d, 
Line 1224: activeStackId %d uhal_CHmcpPrachStart_firstPreamble: selectedAS %d
Line 1241: activeStackId %d uhal_CHmcpPrachStart_firstPreamble: submit FirstPreamble token by selectedAS %d < current_aich_slots %d
Line 1274: activeStackId %d     Access slot No %d 		 preambleSignature %d
Line 1293: activeStackId %d     EHalDlAich_ReleasePrach by overtime on selection of available number
Line 1317: activeStackId %d uhal_CHmcpPrachStart_firstPreamble: submit FirstPreamble token
Line 1340: activeStackId %d uhal_CHmcpPrachStart_request: FirstPreamble with numOf1stPreambleFailure %d
Line 1370: activeStackId %d uhal_CHmcpPrachStart_request: RachChannelSetup
Line 1410: activeStackId %d PRACH_EN [UL_CH_INFO] 0x%x
Line 1438: AichSync: sfn %6d slot %3d chip %5d
Line 1456: activeStackId %d AichSync:(aichslot<13)&&(aichsfn&1) token modify: FirstPreamble
Line 1477: AichSync token late: resubmit noOfTries %d aichsfn %d aichslot %d noOfFrames %d
Line 1495: activeStackId %d uhal_CPrach_SetState:EPrachConfigured (AichSync) %d
Line 1526: DSDS:uhal_CPrach_SetCmdAborted:EPrachAborted %d
Line 1717: Hmcp_TXSlot3_LISR
Line 1747: [Quadra WA] Set CellType to FACH
Line 1754: [TXSlot3] RACH_RFDURTG_SYNC_ON
Line 1765: [TXSlot3]: sfn %d slot %d chip %d
Line 1802: Hmcp_TXGEN_LISR
Line 1838: DSDS iscmdAborted=%d
Line 1847: AICH Intr is disabled
Line 1865: Hmcp_TXGEN_HISR activeStackId %d rachTxPower %d pdPower %d rfTxSPI 0x%x rfTx2SPI 0x%x rfTxPll 0x%x rfTxmode 0x%x
Line 1919: activeStackId %d Re lock
Line 1944: activeStackId %d Hmcp_Aich_Rf_Lisr
Line 1990: activeStackId %d [NEW AICH DETECTION SCHEME] phychNr %d, phychType %d, ai po %d
Line 2000: activeStackId %d [NEW AICH DETECTION SCHEME] ai po is incorrect. realRakeEnergy : %d Skip NEW AICH DETECTION SCHEME 
Line 2009: activeStackId %d ai sym %d, realRakeEnergy %d, aichPO %d, sqrt_gamma %d, aich_ack_th %d
Line 2092: activeStackId %d [R:%d][EAICH_ACK]	 AI SIG = %d, 	 EdchRscIdx = %d
Line 2126: activeStackId %d Enable Slot interrupt at %d slot (AS Timing %d, AS %d)
Line 2139: activeStackId %d msgCurrentPower %d is limited to %d
Line 2146: msgCurrentPower %d = preambleCurrentPower %d +  msgStepPower %d + dpcchPowerOffset %d 
Line 2151: activeStackId %d Hmcp_Aich_Rf_Lisr: PrachAck TxPowerSet failed %d
Line 2185: [R:%d][EAICH_NACK]	  EAI SYM = %d 	, EAI SIG = %d
Line 2195: [R:%d][EAICH_ACK]	  EAI SYM = %d 	, 	 AI SIG = %d, 	 EAI SIG = %d, 	 EdchRscIdx = %d
Line 2268: WARNING: In uhal_HmcpAICH_HISR, cmdPtr is NULL
Line 2283: DSDS iscmdAborted=%d
Line 2297: activeStackId %d [R:%d] 	  AI SYM = %d 	, 	 ISCP = %d
Line 2320: activeStackId %d [AICH monitoring] frameCounter=%d, slotCounter = %d, chipCounter = %d
Line 2356: activeStackId %d AICH result POS
Line 2366: activeStackId %d     EHalDlAich_PosAck Asn_tti10 ReleasePrach
Line 2393: activeStackId %d Hmcp_Aich_Rf_HISR: Absurd AICH result from chipset
Line 2406: activeStackId %d AICH NACK [UL_CH_INFO] 0x%x
Line 2413: activeStackId %d ## Warning!! uhal_HmcpIpcGetDstStatus is False##
Line 2436: activeStackId %d AICH result NACK
Line 2455: Preamble remains: %d out of %d [ul_ch_info : %d] DAC_POWER_DEBUG_CNT(%d)
Line 2467: txtm_sfn : %d, txtm_chip : %d, htx_urtg : %d, cur_slot : %d, cur_chip : %d, dbg_ul_slot : %d, dbg_ul_chipx8 : %d,
Line 2469: cur_fing_pos : %d, DL_AS : %d, DL_AS_Chip : %d, ref_cnt_chip38400 : %d, urtg_chip38400 : %d, tx_tm_pos : %d, urtg_pos : %d,
Line 2471:  frameCounter_0=%d, slotCounter_0 = %d, chipCounter_0 = %d  frameCounter_1=%d, slotCounter_1 = %d, chipCounter_1 = %d rlNr = %d
Line 2478: activeStackId %d uhal_CScomPrachStart_abort command received 
Line 2567: [uhal_CHmcpPrachStart_timeout] INT_MASK 0x%x, AICH(slot %d, chip %d) htx_ch_info 0x%x, htx_ch_mon 0x%x, ai_ctrl_0 0x%x 
Line 2594: actStkId %d [uhal_CHmcpPrachStart_MeasureMsgPwr] RACH message power = %d
Line 2626: [rlNr %d] finger cumulative value %d, converted value %d
Line 341: WARNING:uhal_CHmcpPrachStart_setAichStatus EHalDlAichIndicatorInfoCmd exec() failed errCode %d addErrCode %d
Line 225: setPrachTimingDelay : currentTxAntNum(%d) demodProcDelay(%d) demodProcDelayOffset(%d)
Line 228: [DBG]currentTxAntNum %d, scrflt_fb : %d
Line 298: activeStackId %d uhal_CHmcpPrachStart_enableAICH EHalDlAichIndicatorInfoCmd errCode=%d addErrCode=%d
Line 304: activeStackId %d     enableAICH phychNr=%d
Line 312: activeStackId %d uhal_CHmcpPrachStart_enableAICH EHalDlPhychStartCmd exec() failed errCode %d addErrCode %d
Line 267: ERROR Invalid numAvailablePreambleSignatures! 
Line 277: signatureIndex=%d, numAvailablePreambleSignatures=%d, randomSeed=%d
Line 902: [uhal_CHmcpPrachStart_getRefRLFramePosition] sfn_p %x, slot_p %x, chip_p %x 
Line 918: getRefRLFramePosition : currentTxAntNum(%d) demodProcDelay(%d) demodProcDelayOffset(%d)
Line 1027: numAvailableASPerSfn is out of bound
Line 1029:     searchASSet: not found
Line 1601: activeStackId %d preambleCurrentPower %d is limited to %d
Line 1608: activeStackId %d Additional PrachNoSig MsgPower=%d dBm
Line 1617: activeStackId %d PrachNoSig TxPowerSet failed %d
Line 1655: activeStackId %d Next Preamble Signature: %d, Next Access Slot: %d
Line 1669: activeStackId %d preambleCurrentPower %d is limited to %d
Line 1682: activeStackId %d PrachNoSig TxPowerSet failed %d
