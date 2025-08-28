Line 90: rrc_CUPHY_UMTS_RATMode_REQ_setParams : AgapCgiMode set to %d
Line 164:  Number of Freqs set to %d in Blind Freq Scan Req ILM
Line 187:  Adding Freq %d to Blind Ferq Scan Req ILM
Line 191: TheFreqInfoIndx[0x%x] >= numOfFreqToAdd[0x%x]
Line 270: [URRC BCH in DCH]  rrc_CUPHY_BCHResConf_REQ_setParams: IsDCH = %d
Line 281: rrc_CUPHY_BCHResConf_REQ_setParams: isDBchEnabled = %d
Line 338: ~~[Tx]CUPHY_SIG_START_IND: SignalingPriority = %s __ ActivationCfn = %d~~
Line 536: [URRC BCH in DCH]  rrc_CUPHY_BCHResRel_REQ_setParams: IsDCH = %d
Line 644: [URRC_FREQ_AID] rrc_CUPHY_LCS_Freq_Aid_REQ_Create Sending req->start(%d), rat(%d),tcxo_type(%d),reserved(%d)
Line 748: [U2L DEBUG] req->isU2LHO(%d), req->numOfEutraFreqs(%d)
Line 755: [U2L DEBUG] req->lteCellInfo[%d].earfcn = %d
Line 756: [U2L DEBUG] req->lteCellInfo[%d].numOfEutraCells = %d
Line 770: [U2L DEBUG] req->lteCellInfo[%d].eutraCellList[%d].earfcn = %d
Line 772: [U2L DEBUG] req->lteCellInfo[%d].eutraCellList[%d].cellId = %d
Line 774: [U2L DEBUG] req->lteCellInfo[%d].eutraCellList[%d].cpType = %d
Line 776: [U2L DEBUG] req->lteCellInfo[%d].eutraCellList[%d].framePosition = %d
Line 786: [U2L DEBUG] SERIOUS ERROR !!! There is no LocalAccumlater available for EutraMeasInd
Line 796: There is no EutraMeas configured or no EutraRepInst left
Line 1024:  [ECELL_FACH] [CV] SIB5_p = NULL 
Line 1093: ---------------------------------------------------------------
Line 1094: START Urrc_UphyHsdschCommonModifyReqMsg_t
Line 1095: 	  isActivationTime = %d

Line 1098: 	  activationTime = %d

Line 1100: 	  isDelayRestrictionFlag = %d

Line 1101: 	  isHrnti = %d

Line 1104: 	  hrnti = %d

Line 1106: 	  isHsscchInfo = %d

Line 1109: 	  dlScramblingCode = %d

Line 1110: 	  numOfHsscchCodes = %d

Line 1113: 	 chanCodeList[%d] = %d

Line 1116: 	  harqFlushIndicator = %d

Line 1117: 	  isDl64QAMConfigured = %d

Line 1118: 	  isMACEhsConfigured = %d

Line 1119: 	  hsdschTableSize = %d

Line 1120: 	  hsdschL1CategoryExt = %d

Line 1121: 	  isFachOccasion = %d

Line 1124: 	  fachOccasionCycleLengthCoef = %d

Line 1127: 	  isHsDschDrxInCellFach = %d
Line 1130: 	  t321ms = %d
Line 1131: 	  hs_dsch_DrxCycleFach = %d
Line 1132: 	  hs_dsch_RxBurstFach = %d
Line 1133: 	  drxInterruption_by_hs_dsch = %d
Line 1136:  END Urrc_UphyHsdschCommonModifyReqMsg_t

Line 1137: ---------------------------------------------------------------

Line 1443: [DedModeModifyRlCommonReq] TxDivMode(%d) is configured
Line 1548: DB PopILM: No RL Exists in the message DB
Line 1615: GlobalCellId(0x%x) was set in DedicatedModeModifyRlReq
Line 1724: [ASU] msgPopulateIlms: no addCount or delCount 
Line 1811: [RbControlMsg] msgPopulateIlms: no addedDlRlCount
Line 2809: DB contains valid NumOfTgps[%d] more than the actual numOfCompressedModeSequences[%d]
Line 2857: [DedModeConfigRlCommonReq] TxDivMode(%d) is configured
Line 2926: GlobalCellId(0x%x) was set in DedicatedModeConfigReq
Line 3062: DB PopILM(before): trchToAddBitmask 0x%x
Line 3069: DB PopILM(After): trchToAddBitmask 0x%x, dlDchIdPresentBitMask 0x%x, availableDlDchInMuxOptBitMask 0x%x
Line 3106: DB PopILM: dlDchActuallyConfiguredInPhyBitMask 0x%x
Line 3200: DB PopILM: ulDchActuallyConfiguredInPhyBitMask 0x%x
Line 3323: Information of DlSecondaryCellId %d
Line 3324: DL Uarfcn = %d
Line 3325: HRNTI = 0x%x
Line 3326: SecHsdschRlPsc = 0x%x
Line 3327: DlScramblingCode = %d
Line 3328: 	 numOfHsscchCodes = %d
Line 3331: chanCodeList[%d] = %d
Line 3333: 	 measPowerOffset = %d
Line 3334: isDl64QAMConfigured = %d
Line 3335: isMACEhsConfigured = %d
Line 3336: 	 numOfHarqProcesses = %d
Line 3339: 	 processMemorySize[%d] = %d
Line 3341: hsdschtablesize = %d
Line 3342: HarqFlushIndicator = %d
Line 3343: diffTxDivFromServHsdschCell = %d
Line 3351: No DlSecondaryCell to be configured!!!
Line 3432: Information of DlSecondaryCellId %d
Line 3433: DL Uarfcn = %d
Line 3434: HRNTI = 0x%x
Line 3435: SecHsdschRlPsc = 0x%x
Line 3436: DlScramblingCode = %d
Line 3437: 	 numOfHsscchCodes = %d
Line 3440: chanCodeList[%d] = %d
Line 3442: 	 measPowerOffset = %d
Line 3443: isDl64QAMConfigured = %d
Line 3444: isMACEhsConfigured = %d
Line 3445: 	 numOfHarqProcesses = %d
Line 3448: 	 processMemorySize[%d] = %d
Line 3450: hsdschtablesize = %d
Line 3451: HarqFlushIndicator = %d
Line 3452: diffTxDivFromServHsdschCell = %d
Line 3458: First DlSecondaryCell reception is not OK!!!
Line 3584: ACTIVATION TIME %d
Line 3588: DELAY RESTRICTION FLAG present
Line 3590: DlSecondaryCellInfo of CellId %d
Line 3593: 	  hrnti = 0x%x
Line 3595: 	  dlScramblingCode = %d
Line 3596: 	  numOfHsscchCodes = %d
Line 3599: 	  chanCodeList[%d] = %d
Line 3601: 	  measPowerOffset = %d
Line 3602: isDl64QAMConfigured = %d
Line 3603: isSecHsdschRlPsc = %d
Line 3604: hsdschtablesize = %d
Line 3605: diffTxDivFromServHsdschCell = %d
Line 3613: No DlSecondaryCell to be modified!!!
Line 3693: ACTIVATION TIME %d
Line 3697: DELAY RESTRICTION FLAG present
Line 3699: DlSecondaryCellInfo of CellId %d
Line 3702: 	  hrnti = 0x%x
Line 3704: 	  dlScramblingCode = %d
Line 3705: 	  numOfHsscchCodes = %d
Line 3708: 	  chanCodeList[%d] = %d
Line 3710: 	  measPowerOffset = %d
Line 3711: isDl64QAMConfigured = %d
Line 3712: isSecHsdschRlPsc = %d
Line 3713: hsdschtablesize = %d
Line 3714: diffTxDivFromServHsdschCell = %d
Line 3720: First DlSecondaryCell reception is not OK!!!
Line 3752: DlSecHsdschCellsReleaseBitmask: 0x%X
Line 3756: No DlSecondaryCell to be released!!!
Line 3792: numOfHarqProcesses = %d
Line 3796: processMemorySize[%d] = %d
Line 3847: Err in HS-SCCH Info, numOfHsscch(%d)! Set to max(%d)
Line 4024: Err in HS-SCCH Info, numOfHsscch(%d)! Set to max(%d)
Line 4200: [CV] [Populate ILM] E-DPCCH Config (pwrOffset (%d)), interpolation (%d)
Line 4334: [CV] [Populate ILM] CUPHY_EDCH_UL_MODIFY_REQ
Line 4342: [CV] [Populate ILM] E-DCH TTI (%d)
Line 4349: [CV] [Populate ILM] E-DCH HARQ (%d)
Line 4358: [CV] [Populate ILM] E-DPCCH (pwrOffset (%d)), interpolation (%d)
Line 4367: [CV] [Populate ILM] E-DPDCH
Line 4368: [CV] [Populate ILM] E-DPDCH (numRefEtfci (%d))
Line 4375: [CV] [Populate ILM] E-DPDCH (refEtfci (%d), refEtfciPo (%d))
Line 4394: [CV] [Populate ILM] E-DPDCH (etfciTableIndex (%d), maxChCode (%d), plNonMax (%d), minReducedGainFactor (%d))
Line 4418: [CV] [Populate ILM] CUPHY_EDCH_DL_MODIFY_REQ
Line 4431: [CV] [Populate ILM] Primary E-RNTI (0x%x)
Line 4441: [CV] [Populate ILM] Secondary E-RNTI(0x%x)
Line 4449: [CV] [Populate ILM] E-DCH TTI (%d)
Line 4459: [CV] [Populate ILM] Serving E-DCH RL (priCpich (0x%x), agch (%d))
Line 4474: [CV] [Populate ILM] Serving E-DCH RL (add hich (%d, %d))
Line 4480: [CV] [Populate ILM] Serving E-DCH RL (release hich)
Line 4485: [CV] [Populate ILM] Serving E-DCH RL (we need HICH action type)
Line 4496: [CV] [Populate ILM] Serving E-DCH RL (add rgch (%d, %d))
Line 4502: [CV] [Populate ILM] Serving E-DCH RL (release rgch)
Line 4507: [CV] [Populate ILM] Serving E-DCH RL (we need RGCH action type)
Line 4534: [CV] [Populate ILM] Non-serving E-DCH RL (priCpich (0x%x))
Line 4545: [CV] [Populate ILM] Non-serving E-DCH RL (add hich (%d, %d))
Line 4552: [CV] [Populate ILM] Non-serving E-DCH RL (release hich)
Line 4563: [CV] [Populate ILM] Non-serving E-DCH RL (add rgch (%d, %d))
Line 4569: [CV] [Populate ILM] Non-serving E-DCH RL (release rgch)
Line 4576: [CV] [Populate ILM] Non-serving E-DCH RL (num (%d))
Line 4685: rrc_CUPHY_CPC_Config_REQ_setHSScchLessConfig: ILM under population
Line 4699: rrc_CUPHY_CPC_Config_REQ_setHSScchLessConfig: ILM under population
Line 5215: TheASCIndx >= numOfAsc
Line 5378: imsiLengthis %d	and it is > 21
Line 5851: [URRC BCH in DCH] Uarfcn %d, PSC %d, CellId (0x%x) was set in GlobalCellIdUpdateReq
Line 298: ==============CUPHY_BCH_RESOURCES_CONFIG_REQ=================
Line 299: dlUarfcn = %d
Line 300: primaryScrCode = %d
Line 301: bchId = %d
Line 302: IsBPLMN = %d
Line 303: MibRepFactor = %d
Line 304: isDBchEnabled = %d
Line 307: ==============CUPHY_BCH_RESOURCES_CONFIG_REQ=================
Line 319: NoOfSIBsToAdd = %d
Line 322: SIBAddInfo[%d].SIBType = %d
Line 323: SIBAddInfo[%d].SegCount = %d
Line 325: SIBAddInfo[%d].SibPos[%d] = %d
Line 326: SIBAddInfo[%d].SibRep = %d
Line 328: NoOfSIBsToCancel = %d
Line 331: SIBToCancel[%d].SIBType = %d
Line 311: ==============CUPHY_BCH_RESOURCES_MODIFY_REQ=================
Line 312: MibRepFactor = %d
Line 314: ==============CUPHY_BCH_RESOURCES_MODIFY_REQ=================
Line 353: ==============CUPHY_PS_SUPPORT_IND=================
Line 354: PsSupport = %d
Line 368: ==============CUPHY_CGI_ACQUISITION_CONFIG_REQ=================
Line 369: dlUarfcn = %d
Line 370: primaryScrCode = %d
Line 371: UtraSiAcquisitionForHoMode = %d
Line 372: UmtsCellTimingOffset.sfn = %d
Line 373: UmtsCellTimingOffset.slot = %d
Line 374: UmtsCellTimingOffset.chip = %d
Line 375: UmtsCellTimingOffset.refCounterFrame = %d
Line 376: UmtsCellTimingOffset.refCounterSlot = %d
Line 377: UmtsCellTimingOffset.refCounterChip = %d
Line 378: ==============CUPHY_CGI_ACQUISITION_CONFIG_REQ=================
Line 383: ==============CUPHY_SFN_ACQUISITION_CONFIG_REQ=================
Line 384: dlUarfcn = %d
Line 385: primaryScrCode = %d
Line 386: bchId = %d
Line 387: IsBPLMN = %d
Line 388: isDBchEnabled = %d
Line 391: ==============CUPHY_SFN_ACQUISITION_CONFIG_REQ=================
Line 396: ==============CUPHY_SFN_ACQUISITION_RELEASE_REQ=================
Line 397: bchId = %d
Line 398: IsBPLMN = %d
Line 399: ==============CUPHY_SFN_ACQUISITION_RELEASE_REQ=================
Line 5827: GlobalCellId(0x%x) was set in DedicatedModeReplaceRlReq
