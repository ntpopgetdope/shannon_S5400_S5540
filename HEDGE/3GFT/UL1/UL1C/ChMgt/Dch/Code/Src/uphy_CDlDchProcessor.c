Line 544: Dch decoding started, reconfigurationType=%d
Line 544: Dch decoding started, reconfigurationType=%d
Line 573: generateSyncInd: CFN=%d, isFdpchConfigured=%d
Line 573: generateSyncInd: CFN=%d, isFdpchConfigured=%d
Line 606: Abnormal token!, releasing the token now.
Line 606: Abnormal token!, releasing the token now.
Line 637: Sync phase setting - uhal_Cmd_exec
Line 637: Sync phase setting - uhal_Cmd_exec
Line 682: S0 uphy_CDlDchProcessor_processTrBlkCrcInfo: Don't process as DCH is paused
Line 682: S0 uphy_CDlDchProcessor_processTrBlkCrcInfo: Don't process as DCH is paused
Line 705: S0  trchCrcListInfo did not found in the list: probably processTrBlkCrcInfo called when dedicated mode was released already

Line 705: S0  trchCrcListInfo did not found in the list: probably processTrBlkCrcInfo called when dedicated mode was released already

Line 721: S0  trchCrcListInfo for trcChId=%d did not found in the list: probably processTrBlkCrcInfo called when given trch was released already

Line 721: S0  trchCrcListInfo for trcChId=%d did not found in the list: probably processTrBlkCrcInfo called when given trch was released already

Line 758: S0  trchCrcListInfo == NULL pointer
Line 758: S0  trchCrcListInfo == NULL pointer
Line 787: S0  trchCrcListInfo for trcChId=%d did not found in the list: probably already released during modifications

Line 787: S0  trchCrcListInfo for trcChId=%d did not found in the list: probably already released during modifications

Line 1178: S0  uphy_CDlDchProcessor_SendSyncMessage: inSyncMsg=NULL
Line 1178: S0  uphy_CDlDchProcessor_SendSyncMessage: inSyncMsg=NULL
Line 1196: S0 Unable to Send Sync Indication
Line 1196: S0 Unable to Send Sync Indication
Line 1204: uphy_CDlDchProcessor_SendOutOfSyncMessage: outOfSyncMsg=NULL
Line 1204: uphy_CDlDchProcessor_SendOutOfSyncMessage: outOfSyncMsg=NULL
Line 1221: uphy_CDlDchProcessor_SendOutOfSyncMessage: isSirDropDetected	= sent to RRC
Line 1221: uphy_CDlDchProcessor_SendOutOfSyncMessage: isSirDropDetected	= sent to RRC
Line 1227: S0 uphy_CDlDchProcessor_SendSyncMessage: noOfConsecutiveOutOfSyncBitstring=%d
Line 1227: S0 uphy_CDlDchProcessor_SendSyncMessage: noOfConsecutiveOutOfSyncBitstring=%d
Line 1238: Unable to Send OutOfSync Indication
Line 1238: Unable to Send OutOfSync Indication
Line 1337: Invalid State
Line 1337: Invalid State
Line 1343: Rf Tx On/Off - uhal_Cmd_exec
Line 1343: Rf Tx On/Off - uhal_Cmd_exec
Line 1351: Uphy powers up(0)/down(1) : %d
Line 1351: Uphy powers up(0)/down(1) : %d
Line 1438: uphy_CDlDchProcessor_notifyDlTrChInfoChanged start decoding
Line 1438: uphy_CDlDchProcessor_notifyDlTrChInfoChanged start decoding
Line 1447: S0  Invalid nTrch (%d) returned
Line 1447: S0  Invalid nTrch (%d) returned
Line 1517: S0  Cant locate uhal trch instance %d
Line 1517: S0  Cant locate uhal trch instance %d
Line 1524: S0 DCCH urrcTrchId = %d, trchNum = %d
Line 1524: S0 DCCH urrcTrchId = %d, trchNum = %d
Line 1538: S0  Cant locate uhal trch instance %d
Line 1538: S0  Cant locate uhal trch instance %d
Line 1614: S0 prev_sF=%d, sf=%d, delta_sir %d, currentSirTarget %d, isFdpchConfigured %d
Line 1622: S0  DedicatedCommonConfig - uhal_Cmd_exec
Line 1622: S0  DedicatedCommonConfig - uhal_Cmd_exec
Line 1630: S0 ReconfigurationType=%d sf=%d very_init_sir=%d sir_dB_offseted_by_sf=%d
Line 1630: S0 ReconfigurationType=%d sf=%d very_init_sir=%d sir_dB_offseted_by_sf=%d
Line 1720: S0  DlDchProcessor detected a trch with 0 length CRC when btfd is used
Line 1720: S0  DlDchProcessor detected a trch with 0 length CRC when btfd is used
Line 1743: S0  DlDchProcessor detected UHAL inconsistancies in Ctfc table
Line 1743: S0  DlDchProcessor detected UHAL inconsistancies in Ctfc table
Line 1765: S0  DlDchProcessor failed to locate tfis: nTrch %d trchNr %d firstCtfc %d secondCtfc %d copyCtfc %d copyCtfc2 %d
Line 1765: S0  DlDchProcessor failed to locate tfis: nTrch %d trchNr %d firstCtfc %d secondCtfc %d copyCtfc %d copyCtfc2 %d
Line 1773: S0  Clear Power ratio BTFD flag(use CRC BTFD)
Line 1773: S0  Clear Power ratio BTFD flag(use CRC BTFD)
Line 1861: Cant locate uhal trch instance %d
Line 1861: Cant locate uhal trch instance %d
Line 1868: S0 DCCH urrcTrchId = %d, trchNum = %d
Line 1868: S0 DCCH urrcTrchId = %d, trchNum = %d
Line 1869: S0 DCCH urrcTrchId = %d, trchNum = %d
Line 1869: S0 DCCH urrcTrchId = %d, trchNum = %d
Line 1906: S0 In BTFD: Trch[%d] is ignored and nTrChsToIgnore %d
Line 1906: S0 In BTFD: Trch[%d] is ignored and nTrChsToIgnore %d
Line 1910: S0 nTrChsToIgnore exceeds the capacity of the array trChsToIgnore
Line 1910: S0 nTrChsToIgnore exceeds the capacity of the array trChsToIgnore
Line 1922: S0 In BTFD: Trch[%d] is ignored and nTrChsToIgnore %d
Line 1922: S0 In BTFD: Trch[%d] is ignored and nTrChsToIgnore %d
Line 1926: S0 nTrChsToIgnore exceeds the capacity of the array trChsToIgnore
Line 1926: S0 nTrChsToIgnore exceeds the capacity of the array trChsToIgnore
Line 3347: [uphy_CDlDchProcessor_ChangeQualityTarget] cctrchNr %d
Line 3347: [uphy_CDlDchProcessor_ChangeQualityTarget] cctrchNr %d
Line 3382: S0 changeQualityTarget: currentCfn=%d, qualityTargetTrChId=%d, qualityTarget=%d
Line 3382: S0 changeQualityTarget: currentCfn=%d, qualityTargetTrChId=%d, qualityTarget=%d
Line 3397: S0 targetTpcErrorRate Out of Bounds : targetTpcErrorRate=%d
Line 3397: S0 targetTpcErrorRate Out of Bounds : targetTpcErrorRate=%d
Line 3408: S0 targetTpcErrorRate=%d, fdpchSirTarget=%d
Line 3408: S0 targetTpcErrorRate=%d, fdpchSirTarget=%d
Line 3414: S0  Sir Target - uhal_Cmd_exec
Line 3414: S0  Sir Target - uhal_Cmd_exec
Line 859: Cfn %d: No Sync Report generated as less than 40ms since decoding started
Line 859: Cfn %d: No Sync Report generated as less than 40ms since decoding started
Line 871: In/Out Sync - uhal_Cmd_exec
Line 871: In/Out Sync - uhal_Cmd_exec
Line 889: syncPhase %d syncIndRequired %d rlStr %d isInSync %d inSyncStr %d outOfSyncStr %d
Line 889: syncPhase %d syncIndRequired %d rlStr %d isInSync %d inSyncStr %d outOfSyncStr %d
Line 907: EHalPhase0: syncIndRequired %d rlStr %d, dlDchProcessor_ptr->phaseTimeOutCnt %d
Line 907: EHalPhase0: syncIndRequired %d rlStr %d, dlDchProcessor_ptr->phaseTimeOutCnt %d
Line 919: S0  [TX-ON]InSync- uphy_CDlDchProcessor_provideSyncInd
Line 919: S0  [TX-ON]InSync- uphy_CDlDchProcessor_provideSyncInd
Line 933: Phy Out Of Sync based on poor DPCCH dlDchProcessor_ptr->isRfEnabled : %d, fingerRelockCount: %d 
Line 933: Phy Out Of Sync based on poor DPCCH dlDchProcessor_ptr->isRfEnabled : %d, fingerRelockCount: %d 
Line 938: S0  [TX-OFF]OutSync -uphy_CDlDchProcessor_provideSyncInd
Line 938: S0  [TX-OFF]OutSync -uphy_CDlDchProcessor_provideSyncInd
Line 948: Phy Out Of Sync based on poor Crc statistics
Line 948: Phy Out Of Sync based on poor Crc statistics
Line 958: Phy goes back in-sync after out-of-sync. Insync cnt is %d
Line 958: Phy goes back in-sync after out-of-sync. Insync cnt is %d
Line 979: Bad Sync State
Line 979: Bad Sync State
Line 1983: S0  GuidingTfiStatus == NULL pointer
Line 1983: S0  GuidingTfiStatus == NULL pointer
Line 2057: S0  Unable to Locate Guiding and Guided tfi for some ctfc
Line 2057: S0  Unable to Locate Guiding and Guided tfi for some ctfc
Line 2082: S0  nTrChs=%d Array Index Out of bound
Line 2082: S0  nTrChs=%d Array Index Out of bound
Line 2169: adjustSirTarget: currentCfn=%d, currentSlot=%d, trChNr=%d, trChId=%d, numTrBlks=%d, numTrBlksBad=%d, tbSize=%d
Line 2169: adjustSirTarget: currentCfn=%d, currentSlot=%d, trChNr=%d, trChId=%d, numTrBlks=%d, numTrBlksBad=%d, tbSize=%d
Line 2184: Sir Target A - uhal_Cmd_exec
Line 2184: Sir Target A - uhal_Cmd_exec
Line 2258: TrchOfTarget=%d TrchId: %d dlDchProcessor_ptr->trBlkBadTotal %d dlDchProcessor_ptr->trBlkTotal %d BLER %d
Line 2258: TrchOfTarget=%d TrchId: %d dlDchProcessor_ptr->trBlkBadTotal %d dlDchProcessor_ptr->trBlkTotal %d BLER %d
Line 2294: newSirTarget %d (dBx1000x1000) is greater than MaxLimit %d (dBx1000x1000). Force to set MaxLimit
Line 2294: newSirTarget %d (dBx1000x1000) is greater than MaxLimit %d (dBx1000x1000). Force to set MaxLimit
Line 2300: newSirTarget %d (dBx1000x1000) is less than MinLimit %d (dBx1000x1000). Force to set MinLimit
Line 2300: newSirTarget %d (dBx1000x1000) is less than MinLimit %d (dBx1000x1000). Force to set MinLimit
Line 2312: Sir Target - uhal_Cmd_exec
Line 2312: Sir Target - uhal_Cmd_exec
Line 2325: Outerloop skipped : number of trch Block is %d
Line 2325: Outerloop skipped : number of trch Block is %d
Line 2482: S0 Don't set qualityTarget when maxNumOfTrCH=%d and decodedNumOfTrCH=%d are different
Line 2482: S0 Don't set qualityTarget when maxNumOfTrCH=%d and decodedNumOfTrCH=%d are different
Line 2498: S0 During connected prev TargetSir = %d
Line 2498: S0 During connected prev TargetSir = %d
Line 2543: S0 trChNr %d, trChId %d, qualityTarget %d, coding %d, tti %d
Line 2543: S0 trChNr %d, trChId %d, qualityTarget %d, coding %d, tti %d
Line 2571: S0 Selected Target SIR trch = %d qualityTargetTrChId = %d
Line 2571: S0 Selected Target SIR trch = %d qualityTargetTrChId = %d
Line 2585: S0  No BLER Target Specified
Line 2585: S0  No BLER Target Specified
Line 2621: S0  array index out of bounds.qualityTarget=%d
Line 2621: S0  array index out of bounds.qualityTarget=%d
Line 2636: S0  dlDchProcessor_ptr->trBlkBadKeep Memory allocation Failed 
Line 2636: S0  dlDchProcessor_ptr->trBlkBadKeep Memory allocation Failed 
Line 2644: S0  dlDchProcessor_ptr->trBlkKeep Memory allocation Failed 
Line 2644: S0  dlDchProcessor_ptr->trBlkKeep Memory allocation Failed 
Line 2648: S0  dlDchProcessor_ptr->currentBlerWindowMeasureSize %d 
Line 2648: S0  dlDchProcessor_ptr->currentBlerWindowMeasureSize %d 
Line 2672: S0 Outer Loop mode %d, dlpcStepSize %d(dBx1000), MinSir %d (dBx1000), MaxSir %d (dBx1000), insync_upper %d (dBx1000), insync_lower %d (dBx1000)
Line 2672: S0 Outer Loop mode %d, dlpcStepSize %d(dBx1000), MinSir %d (dBx1000), MaxSir %d (dBx1000), insync_upper %d (dBx1000), insync_lower %d (dBx1000)
Line 2675: S0 StepUp for bad CRC %d (dBx1000), StepDown for Good CRC %d (dBx1000), NumOfStep %d
Line 2675: S0 StepUp for bad CRC %d (dBx1000), StepDown for Good CRC %d (dBx1000), NumOfStep %d
Line 2453: Power ratio BTFD: numTrBlksBad %d, totalNumOfBadCrcs %d, numTrBlks %d
Line 2453: Power ratio BTFD: numTrBlksBad %d, totalNumOfBadCrcs %d, numTrBlks %d
Line 2116: S0  uphy_CDlDchProcessor_SRBprotectionMode: SRB protection Mode triggered
Line 2116: S0  uphy_CDlDchProcessor_SRBprotectionMode: SRB protection Mode triggered
Line 3174: Bad CRC: newSirTarget %d (dBx1000), currentSirTarget %d, measuredSir %d, StepDownCnt %d, StepDownLevel %d, numTrBlksBad %d, totalNumOfBadCrcs %d
Line 3174: Bad CRC: newSirTarget %d (dBx1000), currentSirTarget %d, measuredSir %d, StepDownCnt %d, StepDownLevel %d, numTrBlksBad %d, totalNumOfBadCrcs %d
Line 3189: Bad CRC: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000), sirChange %d (dBx1000), measuredSir %d, numTrBlksBad %d, totalNumOfBadCrcs %d
Line 3189: Bad CRC: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000), sirChange %d (dBx1000), measuredSir %d, numTrBlksBad %d, totalNumOfBadCrcs %d
Line 2706: S0 sir_Gap %d, currentSirTarget %d (dBx1000), averageSir %d uphy_dlpc_insync_lower %d
Line 2706: S0 sir_Gap %d, currentSirTarget %d (dBx1000), averageSir %d uphy_dlpc_insync_lower %d
Line 2800: S0 >>>>>>> uhal_CommonData->OLPC_STATE %d: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), IsGood %d uhal_CommonData->Conv_timer %d
Line 2800: S0 >>>>>>> uhal_CommonData->OLPC_STATE %d: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), IsGood %d uhal_CommonData->Conv_timer %d
Line 2885: S0 [Good CRC] Condition Triggered for fast counter update (%d)
Line 2885: S0 [Good CRC] Condition Triggered for fast counter update (%d)
Line 2889: S0 SIR target too high and good BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 2889: S0 SIR target too high and good BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 2932: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 2932: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 2948: S0 SIR target too low and good BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 2948: S0 SIR target too low and good BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 2965: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 2965: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 2993: S0 [Bad CRC] Condition Triggered for fast counter update (%d)
Line 2993: S0 [Bad CRC] Condition Triggered for fast counter update (%d)
Line 2998: S0 SIR target too high and bad BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 2998: S0 SIR target too high and bad BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 3009: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 3009: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 3025: S0 SIR target too low and bad BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 3025: S0 SIR target too low and bad BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 3050: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 3050: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 3244: Good CRC: newSirTarget %d (dBx1000), currentSirTarget %d, sirChange %d, measuredSir %d, StepDownCnt %d, StepDownLevel %d, dlDchProcessor_ptr->uphy_dlpc_mode %d
Line 3244: Good CRC: newSirTarget %d (dBx1000), currentSirTarget %d, sirChange %d, measuredSir %d, StepDownCnt %d, StepDownLevel %d, dlDchProcessor_ptr->uphy_dlpc_mode %d
Line 3274: Good CRC: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000), sirChange %d, measuredSir %d
Line 3274: Good CRC: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000), sirChange %d, measuredSir %d
Line 3283: No CRC: not changing target SIR from %d (dBx1000)
Line 3283: No CRC: not changing target SIR from %d (dBx1000)
Line 3315: uphy_CDlDchProcessor_adjustSirTarget: SRB protection Mode triggered dB Target SIR increase, dlDchProcessor_ptr->newSirTarget(%d)
Line 3315: uphy_CDlDchProcessor_adjustSirTarget: SRB protection Mode triggered dB Target SIR increase, dlDchProcessor_ptr->newSirTarget(%d)
Line 3326: uphy_CDlDchProcessor_adjustSirTarget: SRB protection Mode Ending => dB Target SIR decrease, dlDchProcessor_ptr->newSirTarget(%d)
Line 3326: uphy_CDlDchProcessor_adjustSirTarget: SRB protection Mode Ending => dB Target SIR decrease, dlDchProcessor_ptr->newSirTarget(%d)
