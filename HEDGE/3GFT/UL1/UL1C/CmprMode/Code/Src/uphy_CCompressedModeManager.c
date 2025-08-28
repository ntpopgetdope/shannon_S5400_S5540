Line 266: S0 Adjust targetRsn %d chsCfn=%d chsSlot=%d CurrentBoundaryCfn=%d CurrentRsn=%d targetCfn = %d
Line 266: S0 Adjust targetRsn %d chsCfn=%d chsSlot=%d CurrentBoundaryCfn=%d CurrentRsn=%d targetCfn = %d
Line 294: S0 boundaryRsn= %d
Line 294: S0 boundaryRsn= %d
Line 299: S0 boundaryRsn= %d
Line 299: S0 boundaryRsn= %d
Line 305: S0 Adjust targetRsn %d chsCfn=%d chsSlot=%d CurrentBoundaryCfn=%d CurrentRsn=%d numberofCfn = %d
Line 305: S0 Adjust targetRsn %d chsCfn=%d chsSlot=%d CurrentBoundaryCfn=%d CurrentRsn=%d numberofCfn = %d
Line 405: S0  Error: Can not cancel this token = %d
Line 405: S0  Error: Can not cancel this token = %d
Line 419: S0  Error: Can not cancel this token = %d
Line 419: S0  Error: Can not cancel this token = %d
Line 432: S0  Error: Can not cancel this token = %d
Line 432: S0  Error: Can not cancel this token = %d
Line 445: S0  Error: Can not cancel this token = %d
Line 445: S0  Error: Can not cancel this token = %d
Line 496: Instance created for stackId %d
Line 496: Instance created for stackId %d
Line 524: CFN = %d, AddGapToTgpsSynchroBuffer: at gapCFN %d, gapNr %d, gapType %d, tgpsNr %d
Line 524: CFN = %d, AddGapToTgpsSynchroBuffer: at gapCFN %d, gapNr %d, gapType %d, tgpsNr %d
Line 534: S0  TgpsSynchroBuffer already updated at CFN %d
Line 534: S0  TgpsSynchroBuffer already updated at CFN %d
Line 546: S0  tgpsNr=%d Array Index Out of bound
Line 546: S0  tgpsNr=%d Array Index Out of bound
Line 733: Resetting the Compressed Mode Manager and freeing all memory at CFN=%d
Line 733: Resetting the Compressed Mode Manager and freeing all memory at CFN=%d
Line 749: CFN=%d: Reset UhalSequences tgpsi=%d -> inactive
Line 749: CFN=%d: Reset UhalSequences tgpsi=%d -> inactive
Line 814: S0  Set tpgsEnabledCnt : realCount = %d, uhalTgpsEnabledCount = %d
Line 814: S0  Set tpgsEnabledCnt : realCount = %d, uhalTgpsEnabledCount = %d
Line 876: S0  ReconfigRsn=%d, cfndiff=%d, rfPauseTimeRsn=%d 
Line 876: S0  ReconfigRsn=%d, cfndiff=%d, rfPauseTimeRsn=%d 
Line 882: S0  CM Que Full
Line 882: S0  CM Que Full
Line 906: uphy_CCompressedModeManager_processPendingMsg
Line 906: uphy_CCompressedModeManager_processPendingMsg
Line 926: CM Manager: Rollback. Config time 0x%x Config CFN %d
Line 926: CM Manager: Rollback. Config time 0x%x Config CFN %d
Line 939: tgpsi=%d, index in CM info=%d
Line 939: tgpsi=%d, index in CM info=%d
Line 945: CM Manager:Erorr Case tgpsi=%d not seen in compressedModeInfo
Line 945: CM Manager:Erorr Case tgpsi=%d not seen in compressedModeInfo
Line 1037: CM Manager: Adjust status info after resume tgpsi %d tgpl_len %d last_gap1_tgpl1_cfn %d elapsedGaps %d
Line 1037: CM Manager: Adjust status info after resume tgpsi %d tgpl_len %d last_gap1_tgpl1_cfn %d elapsedGaps %d
Line 1039: CM Manager: Adjust status info after resume cfn_rel_diff %d num_full_tgpl %d new_tgcfn %d
Line 1039: CM Manager: Adjust status info after resume cfn_rel_diff %d num_full_tgpl %d new_tgcfn %d
Line 1042: CM Manager: Adjust status info updatedReconfigCfn =%d least_Diff =%d current_rsn_val=%d startRsn=%d 
Line 1042: CM Manager: Adjust status info updatedReconfigCfn =%d least_Diff =%d current_rsn_val=%d startRsn=%d 
Line 1067: CM Manager: Adjust status info updatedReconfigCfn =%d least_Diff =%d,current_rsn=%d,startrsn=%d
Line 1067: CM Manager: Adjust status info updatedReconfigCfn =%d least_Diff =%d,current_rsn=%d,startrsn=%d
Line 1101: updateIRATstopstf compressedModeInfoReq NULL
Line 1101: updateIRATstopstf compressedModeInfoReq NULL
Line 1110: updateIRATstopstf
Line 1110: updateIRATstopstf
Line 1144: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 1144: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 1259: CM Activation delayed set to TRUE
Line 1259: CM Activation delayed set to TRUE
Line 1279: CM Manager: Rollback indicated from RRC. Number of tgps %d
Line 1279: CM Manager: Rollback indicated from RRC. Number of tgps %d
Line 1314: S0  UpdateUphySequeces and UdateUhalSequences are delayed due to non-released TGPS
Line 1314: S0  UpdateUphySequeces and UdateUhalSequences are delayed due to non-released TGPS
Line 1315: S0  UpdateUphySequeces and UdateUhalSequences will be called in T4 HISR
Line 1315: S0  UpdateUphySequeces and UdateUhalSequences will be called in T4 HISR
Line 1320: S0  This should not happen !!!
Line 1320: S0  This should not happen !!!
Line 1433:  updateIRAT_ScheduleStop set TRUE
Line 1433:  updateIRAT_ScheduleStop set TRUE
Line 1476:  updateIRAT_ScheduleStop set TRUE
Line 1476:  updateIRAT_ScheduleStop set TRUE
Line 1507: To process IRAT abort for immediate deactivation of tgpsi at updateIratStopUpdateTimestamp: %d 
Line 1507: To process IRAT abort for immediate deactivation of tgpsi at updateIratStopUpdateTimestamp: %d 
Line 1541: compressedModeStatusInfo1 is NULL in uphy_CCompressedModeManager_process
Line 1541: compressedModeStatusInfo1 is NULL in uphy_CCompressedModeManager_process
Line 1555: S0  Compressed mode check tgpsi=%d,tgpsi2=%d,reconfigCfnCurrentCfnDiff=%d,reconfigCfnCurrentCfnDiff=%d
Line 1555: S0  Compressed mode check tgpsi=%d,tgpsi2=%d,reconfigCfnCurrentCfnDiff=%d,reconfigCfnCurrentCfnDiff=%d
Line 1616: S0 CM RF pause enabled,return
Line 1616: S0 CM RF pause enabled,return
Line 1623: S0 compressedModeInfoReq NULL,return
Line 1623: S0 compressedModeInfoReq NULL,return
Line 1636: S0  ADVANCE_FRAME_TO_CFG %d with MAXTTI %d 
Line 1636: S0  ADVANCE_FRAME_TO_CFG %d with MAXTTI %d 
Line 1672: S0  Compressed mode modification: ADVANCE_FRAME_TO_CFG is same as currentCfn=%d, uhalModifyCfn=%d, uphyModifyCfn=%d 
Line 1672: S0  Compressed mode modification: ADVANCE_FRAME_TO_CFG is same as currentCfn=%d, uhalModifyCfn=%d, uphyModifyCfn=%d 
Line 1704: S0  Compressed mode modification:Update tgpsi=%d  tgpl_len =%d new tgcfn =%d 
Line 1704: S0  Compressed mode modification:Update tgpsi=%d  tgpl_len =%d new tgcfn =%d 
Line 1718: S0  Compressed mode modification for immediate deactivate:currentCfn=%d Update uhalModifyCfn=%d  uphyModifyCfn =%d 
Line 1718: S0  Compressed mode modification for immediate deactivate:currentCfn=%d Update uhalModifyCfn=%d  uphyModifyCfn =%d 
Line 1730: S0  Compressed mode status info:uhalModifyTimeStamp=%d  uphyModifyTimeStamp %d 
Line 1730: S0  Compressed mode status info:uhalModifyTimeStamp=%d  uphyModifyTimeStamp %d 
Line 1758: S0  Compressed mode UHAL modification: Reconfig CFN %d, uhalModifyCfn %d, uhalModifyTimeStamp %d token %d
Line 1758: S0  Compressed mode UHAL modification: Reconfig CFN %d, uhalModifyCfn %d, uhalModifyTimeStamp %d token %d
Line 1764: S0 Compressed mode UHAL modification: isSubmitOk %d
Line 1764: S0 Compressed mode UHAL modification: isSubmitOk %d
Line 1797: S0  Compressed mode UPHY modification: Reconfig CFN %d, uphyModifyCfn %d, uphyModifyTimeStamp %d token %d
Line 1797: S0  Compressed mode UPHY modification: Reconfig CFN %d, uphyModifyCfn %d, uphyModifyTimeStamp %d token %d
Line 1830: compressedModeStatusInfo is NULL in uphy_CCompressedModeManager_process
Line 1830: compressedModeStatusInfo is NULL in uphy_CCompressedModeManager_process
Line 1883: EUphyCompressedModeManagerMsgId_AbortCnf received
Line 1883: EUphyCompressedModeManagerMsgId_AbortCnf received
Line 1905: EUphyCompressedModeManagerMsgId_RollBackDoneInd received, isWaitingforRollback %d
Line 1905: EUphyCompressedModeManagerMsgId_RollBackDoneInd received, isWaitingforRollback %d
Line 1924: S0  compressedModeInfoReq NULL
Line 1924: S0  compressedModeInfoReq NULL
Line 1952: S0 Compressed Mode not configured
Line 1952: S0 Compressed Mode not configured
Line 1992: S0  reqMsg send failure
Line 1992: S0  reqMsg send failure
Line 2048: uphy_CCompressedModeManager_ClearResumeBackupInfo delete CM que
Line 2048: uphy_CCompressedModeManager_ClearResumeBackupInfo delete CM que
Line 2090: Using Backup numOfCompressedModeInfo=%d should be equal or greater than numOfActiveTgps=%d
Line 2090: Using Backup numOfCompressedModeInfo=%d should be equal or greater than numOfActiveTgps=%d
Line 2114: S0  numOfCompressedModeInfo=%d should be equal or greater than numOfActiveTgps=%d
Line 2114: S0  numOfCompressedModeInfo=%d should be equal or greater than numOfActiveTgps=%d
Line 2203: S0  Invalid TGMP=%d
Line 2203: S0  Invalid TGMP=%d
Line 2292: S0  modifyUhalToken == NULL
Line 2292: S0  modifyUhalToken == NULL
Line 2336: TGPSI %d TGMP %d
Line 2336: TGPSI %d TGMP %d
Line 2347: CFN=%d: UpdateUphySequences tgpsi=%d -> active
Line 2347: CFN=%d: UpdateUphySequences tgpsi=%d -> active
Line 2372: CM Manager: Store Rollback info.tgpsi=%d startRsn=%d  tgcfn=%d tgpsNr =%d
Line 2372: CM Manager: Store Rollback info.tgpsi=%d startRsn=%d  tgcfn=%d tgpsNr =%d
Line 2381: CFN=%d: UpdateUphySequences tgpsi=%d -> active. It's was already active
Line 2381: CFN=%d: UpdateUphySequences tgpsi=%d -> active. It's was already active
Line 2385: Cancel updateUphyTgpsToken
Line 2385: Cancel updateUphyTgpsToken
Line 2394: S0  Error: Can not cancel this token = %d
Line 2394: S0  Error: Can not cancel this token = %d
Line 2416: CM Manager: Store Rollback info.tgpsi=%d startRsn=%d  tgcfn=%d
Line 2416: CM Manager: Store Rollback info.tgpsi=%d startRsn=%d  tgcfn=%d
Line 2429: S0 currentCfnActCfnDiff %d 
Line 2429: S0 currentCfnActCfnDiff %d 
Line 2432: S0  ADVANCE_FRAME_TO_CFG %d with MAXTTI %d 
Line 2432: S0  ADVANCE_FRAME_TO_CFG %d with MAXTTI %d 
Line 2447: S0  ADVANCE_FRAME_TO_CFG %d with MAXTTI %d currentCfnActCfnDiff =%d ActCfnTgCfnDiff=%d
Line 2447: S0  ADVANCE_FRAME_TO_CFG %d with MAXTTI %d currentCfnActCfnDiff =%d ActCfnTgCfnDiff=%d
Line 2464: S0  ADVANCE_FRAME_TO_CFG %d with MAXTTI %d 
Line 2464: S0  ADVANCE_FRAME_TO_CFG %d with MAXTTI %d 
Line 2496:  compressedModeStop TRUE, TGPSI %d TGMP %d
Line 2496:  compressedModeStop TRUE, TGPSI %d TGMP %d
Line 2510: CFN=%d: UpdateUphySequences tgpsi=%d -> inactive. reconfigCfn is not given
Line 2510: CFN=%d: UpdateUphySequences tgpsi=%d -> inactive. reconfigCfn is not given
Line 2515: CFN=%d: UpdateUphySequences tgpsi=%d -> inactive. reconfigCfn is given
Line 2515: CFN=%d: UpdateUphySequences tgpsi=%d -> inactive. reconfigCfn is given
Line 2536: S0  Error: Can not cancel this token = %d
Line 2536: S0  Error: Can not cancel this token = %d
Line 2569: S0  tgpsNr=%d Array Index Out of bound
Line 2569: S0  tgpsNr=%d Array Index Out of bound
Line 2571: tgpsNr = %d active = %d
Line 2571: tgpsNr = %d active = %d
Line 2585: tgpsNr = %d  isCfnSynhroBufUpdated = %d
Line 2585: tgpsNr = %d  isCfnSynhroBufUpdated = %d
Line 2595: Cancel updateUphyTgpsToken
Line 2595: Cancel updateUphyTgpsToken
Line 2604: S0  Error: Can not cancel this token = %d
Line 2604: S0  Error: Can not cancel this token = %d
Line 2649: DSDS: uphy_CCompressedModeManager_updateIsDRImpossible Unable to send IsDRImpossible message to DSL1RC
Line 2649: DSDS: uphy_CCompressedModeManager_updateIsDRImpossible Unable to send IsDRImpossible message to DSL1RC
Line 2653: uphy_CCompressedModeManager_updateIsDRImpossible: isDRImpossible %d
Line 2653: uphy_CCompressedModeManager_updateIsDRImpossible: isDRImpossible %d
Line 2675: CFN=%d: UpdateUphySequencesSTF tgpsi=%d -> active
Line 2675: CFN=%d: UpdateUphySequencesSTF tgpsi=%d -> active
Line 2686: S0  Error: Can not cancel this token = %d
Line 2686: S0  Error: Can not cancel this token = %d
Line 2689: S0  Cancel nextGapToken[%d]
Line 2689: S0  Cancel nextGapToken[%d]
Line 2694: Cancel updateUphyTgpsToken
Line 2694: Cancel updateUphyTgpsToken
Line 2703: S0  Error: Can not cancel this token = %d
Line 2703: S0  Error: Can not cancel this token = %d
Line 2760: Mapping tgpsi = %d to tgpsNr = %d
Line 2760: Mapping tgpsi = %d to tgpsNr = %d
Line 2781: Reassigning tgpsNr = %d from tgpsi = %d to tgpsi = %d
Line 2781: Reassigning tgpsNr = %d from tgpsi = %d to tgpsi = %d
Line 2796: S0  Insufficient TGPS available in U-HAL
Line 2796: S0  Insufficient TGPS available in U-HAL
Line 2801: Reassigning tgpsNr = %d from tgpsi = %d to tgpsi = %d
Line 2801: Reassigning tgpsNr = %d from tgpsi = %d to tgpsi = %d
Line 2850: CFN=%d: UpdateUhalSequences tgpsi=%d -> inactive
Line 2850: CFN=%d: UpdateUhalSequences tgpsi=%d -> inactive
Line 2855: Cancel updateUhalTgpsToken
Line 2855: Cancel updateUhalTgpsToken
Line 2864: S0  Error: Can not cancel this token = %d
Line 2864: S0  Error: Can not cancel this token = %d
Line 2875: CFN=%d: UpdateUhalSequences compressedModeStop FALSE
Line 2875: CFN=%d: UpdateUhalSequences compressedModeStop FALSE
Line 2890: CFN=%d: UpdateUhalSequences tgpsi=%d -> active
Line 2890: CFN=%d: UpdateUhalSequences tgpsi=%d -> active
Line 2899: Cancel updateUhalTgpsToken
Line 2899: Cancel updateUhalTgpsToken
Line 2908: S0  Error: Can not cancel this token = %d
Line 2908: S0  Error: Can not cancel this token = %d
Line 2924: S0 currentCfnActCfnDiff %d 
Line 2924: S0 currentCfnActCfnDiff %d 
Line 2927: S0  ADVANCE_FRAME_TO_CFG %d with MAXTTI %d 
Line 2927: S0  ADVANCE_FRAME_TO_CFG %d with MAXTTI %d 
Line 2943: S0  ADVANCE_FRAME_TO_CFG %d with MAXTTI %d currentCfnActCfnDiff =%d ActCfnTgCfnDiff=%d
Line 2943: S0  ADVANCE_FRAME_TO_CFG %d with MAXTTI %d currentCfnActCfnDiff =%d ActCfnTgCfnDiff=%d
Line 2960: S0  ADVANCE_FRAME_TO_CFG %d with MAXTTI %d 
Line 2960: S0  ADVANCE_FRAME_TO_CFG %d with MAXTTI %d 
Line 2980: CFN=%d: UpdateUhalSequences tgpsi=%d -> active. It's already configured.
Line 2980: CFN=%d: UpdateUhalSequences tgpsi=%d -> active. It's already configured.
Line 3007: Cancel updateUhalTgpsToken
Line 3007: Cancel updateUhalTgpsToken
Line 3016: S0  Error: Can not cancel this token = %d
Line 3016: S0  Error: Can not cancel this token = %d
Line 3022: CFN=%d: UpdateUhalSequencesSTF tgpsi=%d -> active
Line 3022: CFN=%d: UpdateUhalSequencesSTF tgpsi=%d -> active
Line 3068: S0  modifyUphyToken == NULL
Line 3068: S0  modifyUphyToken == NULL
Line 3123: StartUphySequences[%d] isTgprsInfinity=%d tgprs=%d elapsedGaps=%d
Line 3123: StartUphySequences[%d] isTgprsInfinity=%d tgprs=%d elapsedGaps=%d
Line 3144: S0 currentCfnActCfnDiff %d 
Line 3144: S0 currentCfnActCfnDiff %d 
Line 3148: S0  ADVANCE_FRAME_TO_CFG %d with MAXTTI %d 
Line 3148: S0  ADVANCE_FRAME_TO_CFG %d with MAXTTI %d 
Line 3164: S0  ADVANCE_FRAME_TO_CFG %d with MAXTTI %d currentCfnActCfnDiff =%d ActCfnTgCfnDiff=%d
Line 3164: S0  ADVANCE_FRAME_TO_CFG %d with MAXTTI %d currentCfnActCfnDiff =%d ActCfnTgCfnDiff=%d
Line 3182: S0  ADVANCE_FRAME_TO_CFG %d with MAXTTI %d 
Line 3182: S0  ADVANCE_FRAME_TO_CFG %d with MAXTTI %d 
Line 3202: StartUphySequences[%d] isTgprsInfinity=%d tgprs=%d
Line 3202: StartUphySequences[%d] isTgprsInfinity=%d tgprs=%d
Line 3243: S0  Error: Can not cancel this token = %d
Line 3243: S0  Error: Can not cancel this token = %d
Line 3250: S0  unable to get compressedModeInfo
Line 3250: S0  unable to get compressedModeInfo
Line 3273: CFN=%d :uphy_CCompressedModeManager_EnableTgps tgpsi=%d
Line 3273: CFN=%d :uphy_CCompressedModeManager_EnableTgps tgpsi=%d
Line 3300: HW CFN %d, SW CFN %d, TGCFN %d
Line 3300: HW CFN %d, SW CFN %d, TGCFN %d
Line 3301: CFN=%d :uphy_CCompressedModeManager_EnableTgps tgpsi=%d
Line 3301: CFN=%d :uphy_CCompressedModeManager_EnableTgps tgpsi=%d
Line 3312: S0  Enabling tgpsNr %d should be enabled at CFN %d but now CFN %d slot %d
Line 3312: S0  Enabling tgpsNr %d should be enabled at CFN %d but now CFN %d slot %d
Line 3396: S0  Compressed mode gap is still active - resubmit deactivate token
Line 3396: S0  Compressed mode gap is still active - resubmit deactivate token
Line 3432: Adding Gap for tgpsNr %d at %d. TGPSRC = %d
Line 3432: Adding Gap for tgpsNr %d at %d. TGPSRC = %d
Line 3469: Next Gap for tgpsNr %d at %d
Line 3469: Next Gap for tgpsNr %d at %d
Line 3577: S0  [IRAT U2G] AddGapInfo RssiMsmt: TGCFN=%d, TGSN=%d, gapStart (sfn, slot, chip)=(%d, %d, %d)
Line 3577: S0  [IRAT U2G] AddGapInfo RssiMsmt: TGCFN=%d, TGSN=%d, gapStart (sfn, slot, chip)=(%d, %d, %d)
Line 3608: S0 tgpsCfnSynchroBuffer is NULL in uphy_CCompressedModeManager_AddGapInfo
Line 3608: S0 tgpsCfnSynchroBuffer is NULL in uphy_CCompressedModeManager_AddGapInfo
Line 3636: skip RssiMsmt	CFN=%d, 
Line 3636: skip RssiMsmt	CFN=%d, 
Line 3695: S0  [IRAT U2G] AddGapInfo BsicIdentify: TGCFN=%d, TGSN=%d, gapStart (sfn, slot, chip)=(%d, %d, %d)
Line 3695: S0  [IRAT U2G] AddGapInfo BsicIdentify: TGCFN=%d, TGSN=%d, gapStart (sfn, slot, chip)=(%d, %d, %d)
Line 3725: S0 tgpsCfnSynchroBuffer is NULL in uphy_CCompressedModeManager_AddGapInfo
Line 3725: S0 tgpsCfnSynchroBuffer is NULL in uphy_CCompressedModeManager_AddGapInfo
Line 3753: Skip BSICreq  CFN=%d, 
Line 3753: Skip BSICreq  CFN=%d, 
Line 3811: S0  [IRAT U2G] AddGapInfo BsicRconfirm: TGCFN=%d, TGSN=%d, gapStart (sfn, slot, chip)=(%d, %d, %d)
Line 3811: S0  [IRAT U2G] AddGapInfo BsicRconfirm: TGCFN=%d, TGSN=%d, gapStart (sfn, slot, chip)=(%d, %d, %d)
Line 3841: S0 tgpsCfnSynchroBuffer is NULL in uphy_CCompressedModeManager_AddGapInfo
Line 3841: S0 tgpsCfnSynchroBuffer is NULL in uphy_CCompressedModeManager_AddGapInfo
Line 3869: Skip BSICConfirmreq  CFN=%d, 
Line 3869: Skip BSICConfirmreq  CFN=%d, 
Line 3926: S0  [IRAT U2L] AddGapInfo EutraMsmt: TGCFN=%d, TGSN=%d, gapStart (sfn, slot, chip)=(%d, %d, %d)
Line 3926: S0  [IRAT U2L] AddGapInfo EutraMsmt: TGCFN=%d, TGSN=%d, gapStart (sfn, slot, chip)=(%d, %d, %d)
Line 3955: S0 tgpsCfnSynchroBuffer is NULL in uphy_CCompressedModeManager_AddGapInfo
Line 3955: S0 tgpsCfnSynchroBuffer is NULL in uphy_CCompressedModeManager_AddGapInfo
Line 3983: Skip EutraReq	CFN=%d, 
Line 3983: Skip EutraReq	CFN=%d, 
Line 4035: S0  rlInfoCommand exec failed
Line 4035: S0  rlInfoCommand exec failed
Line 4059: Neither Gap nor Gap2
Line 4059: Neither Gap nor Gap2
Line 4114: S0  [IRAT U2G] AddGapInfo RssiMsmt: Hw (sfn, slot, chip)=(%d, %d, %d), (chsCfn, chsSlot, chsChip)=(%d, %d, %d)
Line 4114: S0  [IRAT U2G] AddGapInfo RssiMsmt: Hw (sfn, slot, chip)=(%d, %d, %d), (chsCfn, chsSlot, chsChip)=(%d, %d, %d)
Line 4136: S0  [IRAT U2G] AddGapInfo BsicIdentify: Hw (sfn, slot, chip)=(%d, %d, %d), (chsCfn, chsSlot, chsChip)=(%d, %d, %d)
Line 4136: S0  [IRAT U2G] AddGapInfo BsicIdentify: Hw (sfn, slot, chip)=(%d, %d, %d), (chsCfn, chsSlot, chsChip)=(%d, %d, %d)
Line 4157: S0  [IRAT U2G] AddGapInfo BsicRconfirm: Hw (sfn, slot, chip)=(%d, %d, %d), (chsCfn, chsSlot, chsChip)=(%d, %d, %d)
Line 4157: S0  [IRAT U2G] AddGapInfo BsicRconfirm: Hw (sfn, slot, chip)=(%d, %d, %d), (chsCfn, chsSlot, chsChip)=(%d, %d, %d)
Line 4178: S0  [IRAT U2L] AddGapInfo EutraMsmt: Hw (sfn, slot, chip)=(%d, %d, %d), (chsCfn, chsSlot, chsChip)=(%d, %d, %d)
Line 4178: S0  [IRAT U2L] AddGapInfo EutraMsmt: Hw (sfn, slot, chip)=(%d, %d, %d), (chsCfn, chsSlot, chsChip)=(%d, %d, %d)
Line 4197: S0 tgpsConfigParams.tgmp unknown
Line 4197: S0 tgpsConfigParams.tgmp unknown
Line 4248: S0  SetAlarmClock: Cancel compressed mode activation in case urrcState(%d) is not in CELL_DCH, isHHOTakingPlace=%d(0), rollbackFlag=%d(0)
Line 4248: S0  SetAlarmClock: Cancel compressed mode activation in case urrcState(%d) is not in CELL_DCH, isHHOTakingPlace=%d(0), rollbackFlag=%d(0)
Line 4264: SetAlarmClock: tgpsi = %d, sleeping until %d ,tgprcCounter %d, tgprc %d 
Line 4264: SetAlarmClock: tgpsi = %d, sleeping until %d ,tgprcCounter %d, tgprc %d 
Line 4320: S0  Error: Can not cancel this token = %d
Line 4320: S0  Error: Can not cancel this token = %d
Line 4326: EnableTgpsSTF: tgpsi = %d sleeping until %d
Line 4326: EnableTgpsSTF: tgpsi = %d sleeping until %d
Line 4359: ReleaseTgpsSTF: tgpsi = %d sleeping until %d
Line 4359: ReleaseTgpsSTF: tgpsi = %d sleeping until %d
Line 4364: CM releaseTriggered
Line 4364: CM releaseTriggered
Line 4588: uphy_CCompressedModeManager_getFddGapsTimePercentage
Line 4588: uphy_CCompressedModeManager_getFddGapsTimePercentage
Line 4622: Tgps running %d, isTgpsConfigParams %d, tgpsStatusFlag %d
Line 4622: Tgps running %d, isTgpsConfigParams %d, tgpsStatusFlag %d
Line 4664: Tgps configured at %d, isTgpsConfigParams %d, tgpsStatusFlag %d
Line 4664: Tgps configured at %d, isTgpsConfigParams %d, tgpsStatusFlag %d
Line 4676: S0  No compressedMode Request
Line 4676: S0  No compressedMode Request
Line 4694: UhalTgpsConfigured index=%d state=%d
Line 4694: UhalTgpsConfigured index=%d state=%d
Line 4941: CM Manager: Store Rollback info. tgpsi %d uhalTgpsNr %d gap1Cnt %d lastGap1Cfn %d
Line 4941: CM Manager: Store Rollback info. tgpsi %d uhalTgpsNr %d gap1Cnt %d lastGap1Cfn %d
Line 4950: CM Manager: Store Rollback info. Release time 0x%x Release CFN %d
Line 4950: CM Manager: Store Rollback info. Release time 0x%x Release CFN %d
Line 5040: CM Manager: Store Rollback info. tgpsi %d tgpl_len %d last_gap1_tgpl1_cfn %d cfndiff %d  currentRSN %d start rsn %d 
Line 5040: CM Manager: Store Rollback info. tgpsi %d tgpl_len %d last_gap1_tgpl1_cfn %d cfndiff %d  currentRSN %d start rsn %d 
Line 5042: CM Manager: Store Rollback info. elapsedGaps %d gap1Cnt %d tgprc %d
Line 5042: CM Manager: Store Rollback info. elapsedGaps %d gap1Cnt %d tgprc %d
Line 5532: S0  updateUhalUphySequencesSTF : this should not happend !!!
Line 5532: S0  updateUhalUphySequencesSTF : this should not happend !!!
Line 5545: S0  updateUhalUphySequencesSTF : all the TGPS are not idle
Line 5545: S0  updateUhalUphySequencesSTF : all the TGPS are not idle
Line 5668: findMaxTGPSLengthSlots tgpsi %d, isTgpsConfigParams %d, tgpsStatusFlag %d tgl1 %d tgl2 %d
Line 5668: findMaxTGPSLengthSlots tgpsi %d, isTgpsConfigParams %d, tgpsStatusFlag %d tgl1 %d tgl2 %d
Line 5693: uphy_CCompressedModeManager_findMaxTGPSLengthSlots ::  MaxTGPSLengthSlots %d
Line 5693: uphy_CCompressedModeManager_findMaxTGPSLengthSlots ::  MaxTGPSLengthSlots %d
Line 5711: Message NULL
Line 5711: Message NULL
Line 5723: Message sending failed
Line 5723: Message sending failed
Line 5729: uphy_CCompressedModeManager_IssueAbortReq
Line 5729: uphy_CCompressedModeManager_IssueAbortReq
Line 5753: CompressedModeManager: Triggering UhalUphyModifySequences
Line 5753: CompressedModeManager: Triggering UhalUphyModifySequences
Line 5768: S0  Compressed mode modification: ADVANCE_FRAME_TO_CFG is same as currentCfn=%d, uhalModifyCfn=%d, uphyModifyCfn=%d 
Line 5768: S0  Compressed mode modification: ADVANCE_FRAME_TO_CFG is same as currentCfn=%d, uhalModifyCfn=%d, uphyModifyCfn=%d 
Line 5798: S0  Compressed mode modification:Update tgpsi=%d  tgpl_len =%d new tgcfn =%d 
Line 5798: S0  Compressed mode modification:Update tgpsi=%d  tgpl_len =%d new tgcfn =%d 
Line 5810: S0  Compressed mode status info:uhalModifyTimeStamp=%d  uphyModifyTimeStamp %d 
Line 5810: S0  Compressed mode status info:uhalModifyTimeStamp=%d  uphyModifyTimeStamp %d 
Line 5832: compressedModeStatusInfo1 is NULL in uphy_CCompressedModeManager_process
Line 5832: compressedModeStatusInfo1 is NULL in uphy_CCompressedModeManager_process
Line 5846: S0  Compressed mode check tgpsi=%d,tgpsi2=%d,reconfigCfnCurrentCfnDiff=%d,reconfigCfnCurrentCfnDiff=%d
Line 5846: S0  Compressed mode check tgpsi=%d,tgpsi2=%d,reconfigCfnCurrentCfnDiff=%d,reconfigCfnCurrentCfnDiff=%d
Line 5870: S0  Compressed mode UHAL modification: Reconfig CFN %d, uhalModifyCfn %d, uhalModifyTimeStamp %d token %d
Line 5870: S0  Compressed mode UHAL modification: Reconfig CFN %d, uhalModifyCfn %d, uhalModifyTimeStamp %d token %d
Line 5876: S0 Compressed mode UHAL modification: isSubmitOk %d
Line 5876: S0 Compressed mode UHAL modification: isSubmitOk %d
Line 5903: S0  Compressed mode UPHY modification: Reconfig CFN %d, uphyModifyCfn %d, uphyModifyTimeStamp %d token %d
Line 5903: S0  Compressed mode UPHY modification: Reconfig CFN %d, uphyModifyCfn %d, uphyModifyTimeStamp %d token %d
Line 334: S0  token has been returned
Line 334: S0  token has been returned
Line 588: S0  Error: Can not cancel this token = %d
Line 588: S0  Error: Can not cancel this token = %d
Line 602: S0  Error: Can not cancel this token = %d
Line 602: S0  Error: Can not cancel this token = %d
Line 615: S0  Error: Can not cancel this token = %d
Line 615: S0  Error: Can not cancel this token = %d
Line 628: S0  Error: Can not cancel this token = %d
Line 628: S0  Error: Can not cancel this token = %d
Line 680: S0  tgpsNr=%d Array Index Out of bound
Line 680: S0  tgpsNr=%d Array Index Out of bound
Line 708: S0  tgpsNr=%d Array Index Out of bound
Line 708: S0  tgpsNr=%d Array Index Out of bound
Line 3513: S0  CFN = %d, AddGapInfo: reconfigCFN = %d should be later than the prescheduled old gap CFN = %d
Line 3513: S0  CFN = %d, AddGapInfo: reconfigCFN = %d should be later than the prescheduled old gap CFN = %d
Line 4832: S0  cnfMsg == NULL pointer
Line 4832: S0  cnfMsg == NULL pointer
Line 4857: S0 send
Line 4857: S0 send
Line 5064: 3G3G:  RSN is in Past RSN = %d
Line 5093: CM Manager: Rollback. Config time 0x%x Config CFN %d
Line 5093: CM Manager: Rollback. Config time 0x%x Config CFN %d
Line 5104: CM Manager: Rollback adjust info after resume tgpsi %d inactive
Line 5104: CM Manager: Rollback adjust info after resume tgpsi %d inactive
Line 5147: CM Manager: Rollback. TGPSI %d completed elapsedgaps=%d 
Line 5147: CM Manager: Rollback. TGPSI %d completed elapsedgaps=%d 
Line 5176: CM Manager: Rollback adjust info after resume tgpsi %d tgpl_len %d last_gap1_tgpl1_cfn %d cfn_rel_diff %d num_full_tgpl %d new_tgcfn %d
Line 5176: CM Manager: Rollback adjust info after resume tgpsi %d tgpl_len %d last_gap1_tgpl1_cfn %d cfn_rel_diff %d num_full_tgpl %d new_tgcfn %d
Line 5200: CM Manager: Rollback. Config time 0x%x Config CFN %d Cfg-Rel frame diff %d
Line 5200: CM Manager: Rollback. Config time 0x%x Config CFN %d Cfg-Rel frame diff %d
Line 5241: CM Manager: Rollback adjust info. tgpsi %d tgpl_len %d last_gap1_tgpl1_cfn %d cfn_rel_diff %d num_full_tgpl %d new_tgcfn %d
Line 5241: CM Manager: Rollback adjust info. tgpsi %d tgpl_len %d last_gap1_tgpl1_cfn %d cfn_rel_diff %d num_full_tgpl %d new_tgcfn %d
Line 5286: CM Manager: Rollback. Config time 0x%x Config CFN %d
Line 5286: CM Manager: Rollback. Config time 0x%x Config CFN %d
Line 5297: CM Manager: Rollback adjust info after resume tgpsi %d inactive
Line 5297: CM Manager: Rollback adjust info after resume tgpsi %d inactive
Line 5332: CM Manager: Rollback. TGPSI %d completed elapsedgaps=%d 
Line 5332: CM Manager: Rollback. TGPSI %d completed elapsedgaps=%d 
Line 5360: CM Manager: Rollback adjust info after resume tgpsi %d tgpl_len %d last_gap1_tgpl1_cfn %d cfn_rel_diff %d num_full_tgpl %d new_tgcfn %d
Line 5360: CM Manager: Rollback adjust info after resume tgpsi %d tgpl_len %d last_gap1_tgpl1_cfn %d cfn_rel_diff %d num_full_tgpl %d new_tgcfn %d
Line 5443: S0  tgpsStatusInfoArray == NULL pointer
Line 5443: S0  tgpsStatusInfoArray == NULL pointer
Line 5457: S0  numOfTgps = Zero
Line 5457: S0  numOfTgps = Zero
Line 5464: S0  newStatusInfo == NULL pointer
Line 5464: S0  newStatusInfo == NULL pointer
Line 5483: S0  tgpsStatusInfoArray == NULL pointer
Line 5483: S0  tgpsStatusInfoArray == NULL pointer
Line 5497: S0  newStatusInfo == NULL pointer
Line 5497: S0  newStatusInfo == NULL pointer
Line 5560: [Compressed Mode] updateSchedulingManagerStateStf runs at RSN %d
Line 5560: [Compressed Mode] updateSchedulingManagerStateStf runs at RSN %d
Line 5609: S0  [CM] isRolloverConditionMet %d, rollOverCounter1 %d, rollOverCounter2 %d
Line 5609: S0  [CM] isRolloverConditionMet %d, rollOverCounter1 %d, rollOverCounter2 %d
Line 5639: S0  Compressed mode UHAL modification: ReconfigCFN (%d) is later than TGCFN. firstTgcfnIndex %d
Line 5639: S0  Compressed mode UHAL modification: ReconfigCFN (%d) is later than TGCFN. firstTgcfnIndex %d
