Line 64: [DB] ConfigDB is not Present
Line 284: [DB] Invalid URNTI at DbIndex[%d]
Line 305: [DB] Invalid CRNTI at DbIndex[%d]
Line 326: [DB][CV][ECELL_FACH] Clear C_RNTI_INFO_OK
Line 338: [DB][CV][ECELL_FACH] Clear H_RNTI_INFO_OK
Line 427: [ERROR] [DB] : RbId %d is NULL
Line 456: [ERROR] [DB] : RbId %d is NULL
Line 461: Update DetectedRlcSize : RbId %d, RlcSz %d
Line 732: [ERROR][DB] sameAsRbIdCount reached to maximum
Line 1070: [ERROR][DB] Wrong Trch Type: [%d] Received
Line 1129: [ERROR][DB] Wrong Trch Type: [%d] Received
Line 1325: [DB] Invalid TrchId at DbIndex[%d]
Line 1713: [ERROR][DB] RbId [%d] not present in config db
Line 1747: [ERROR][DB] Dl TrchId [%d] not present in config db
Line 1782: [ERROR][DB] Ul TrchId [%d] not present in config db
Line 1807: rrc_DbprepareRlInfoFromConfigDb: There is no DL RL Info in HHO so the previous RL info will be reused
Line 1885: [DB] Can't Calc UL RLC: Rbid %d
Line 2008: DLMsgDebug: UlTrchId %d, UlTrchType %d, RbId %d, UlRlcSize %d, UlMinWsn %d
Line 2149: [DB] DLMsgDebug: MsgDB UmRbId %d, UlRlcSize %d, DlRlcSize %d vs ConfigDB UmRbId %d, UlRlcSize %d, DlRlcSize %d
Line 2158: [DB] UmRlcAnalysis: DlUmRlcSzModRbBitmask=0x%x, UlUmRlcSzModRbBitmask=0x%x
Line 2303: DLMsgDebug: RbId %d, DLSizeChanged %d
Line 2319: DLMsgDebug: [MsgDB] AmRbId %d, UlRlcSize %d, UlMinWsn %d vs [ConfigDB] AmRbId %d, UlRlcSize %d, UlMinWsn %d
Line 2329: AmRlcAnalysis: DlAmRlcSzModRbBitmask=0x%x, UlAmRlcSzModRbBitmask=0x%x, AmUlMinWsnModRbBitmask=0x%x
Line 2364: [DB] calcStartValueNeed: RbIdBitMask=0x%x
Line 2436: DlMsgDebug: StartValueCalcRequiredForRlcSizeChange, *csNeeded = %d, *psNeeded = %d
Line 2514: [ERROR] Wrong ChnlType: [%d] Received
Line 2548: [ERROR] Wrong ChnlType: [%d] Received
Line 2587: tfciCounter=%d, ChnlType = %d, IETR_TFCS_UL_DCH = %d 
Line 2600: rrc_DbsetCtfcCountAndSizeByChType: numOfDlCtfcToAdd  = %d
Line 2750: [ERROR] Wrong ChnlType: [%d] Received
Line 2943: dlCtfcTfciArray[%d] = %d
Line 2955: TFCS for DL same as UL, But UL parameters areNOT received in this msg. this->ie_tfcsPtr is NULL
Line 3088: [DB] [ERROR] Mapping not selected for RB[%d]
Line 3125: [DB] [ERROR] Mapping not selected for RB[%d]
Line 3164: [DB] [ERROR] Mapping not selected for RB[%d]
Line 3283: [DB] 10.3.6.24 Dl Rl Common Info [Not Present]
Line 3288: [DB] 10.3.6.88 Uplink DPCH Info [Not Present]
Line 3293: [DB] 10.3.6.27 Dl Info For Each Rl [Not Present]
Line 3400: [FAIL] dlTrchCount(%d) > capMaxDl(%d) or ulTrchCount(%d) > capMaxUl(%d)
Line 3730: [DB]  E-RNTI
Line 3735: [DB]  E-RNTI (Status : Changed)
Line 3750: [DB]  E-RNTI (Status : Unchanged, PriErnti(0x%x))
Line 3760: [DB]  E-RNTI (Status : Unchanged, SecErnti(0x%x))
Line 3766: [DB]  E-RNTI is OK
Line 3796: [DB]  E-DCH TTI
Line 3808: [DB]  E-DCH TTI (Status : Unchanged)
Line 3815: [DB]  E-DCH TTI (Status : Changed)
Line 3824: [DB]  E-DCH TTI (Status : Unchanged, TTI(%dmsec))
Line 3827: [DB]  E-DCH TTI is OK
Line 3833: [DB]  E-DPDCH (Convert periodForSchedInfoNoGrant)
Line 3839: [DB]  E-DPDCH (periodForSchedInfoNoGrant(%d))
Line 3843: [DB]  E-DPDCH (Convert periodForSchedInfoGrant)
Line 3849: [DB]  E-DPDCH (periodForSchedInfoGrant(%d))
Line 3856: [DB]  E-DCH TTI : edchInst is NULL
Line 3883: [DB]  E-DCH HARQ
Line 3892: [DB]  E-DCH HARQ (Status : Unchanged)
Line 3897: [DB]  E-DCH HARQ (Status : Changed)
Line 3906: [DB]  E-DCH HARQ (Status : Unchanged, HARQ(%d))
Line 3909: [DB]  E-DCH HARQ is OK
Line 3914: [DB]  E-DCH HARQ : edchInst is NULL
Line 3941: [DB]  E-DPCCH
Line 3950: [DB]  E-DPCCH (by ASU)
Line 3956: [DB]  E-DPCCH (Status : Unchanged)
Line 3971: [DB]  E-DPCCH (Status : Changed (PwrOffset Only))
Line 3975: [DB]  E-DPCCH ( happyBitDelay(%d))
Line 3979: [DB]  E-DPCCH is OK
Line 3983: [DB]  E-DPCCH (by no ASU)
Line 3990: [DB]  E-DPCCH (Status : Unchanged)
Line 3998: [DB]  E-DPCCH (Status : Changed, PwrOffset)
Line 4003: [DB]  E-DPCCH (Status : Changed, HappyBitDelay)
Line 4008: [DB]  E-DPCCH (Status : Changed, PwrInterpolation)
Line 4022: [DB]  E-DPCCH (Status : Unchanged, PwrOffset(%d), happyBitDelay(%d), PwrInterpolation(%d))
Line 4025: [DB]  E-DPCCH is OK
Line 4030: [DB]  E-DPCCH : edpcchInst is NULL
Line 4060: [DB]  E-DPDCH
Line 4079: [DB] [CV]	 [Prepare from DB] E-DPDCH (etfciTableIndex(%d), edchMinSetEtfci(%d), minReducedGainFactor(%d))
Line 4081: [DB] [CV]	 [Prepare from DB] E-DPDCH (maxChCode(%d), plNonMax(%d))
Line 4132: [DB]  E-DPDCH (RefEtfciInfo(num:%d))
Line 4138: [DB] 						RefEtfci : %d, refEtfciPo : %d
Line 4142: [DB]  E-DPDCH (reportNoGrant(%d), reportGrant(%d))
Line 4144: [DB]  E-DPDCH (periodForSchedInfoNoGrant(%d), periodForSchedInfoGrant(%d))
Line 4150: [DB]  E-DPDCH (pwrOffsetSchedInfo(%d))
Line 4155: [DB]  E-DPDCH (use pwrOffsetSchedInfo(%d) from IE)
Line 4162: [DB]  E-DPDCH (threeIndexStepThreshold(%d))
Line 4167: [DB]  E-DPDCH (use threeIndexStepThreshold(%d) from IE)
Line 4174: [DB]  E-DPDCH (twoIndexStepThreshold(%d))
Line 4179: [DB]  E-DPDCH (use twoIndexStepThreshold(%d) from IE)
Line 4187: [DB]  E-DPDCH (Status : Changed)
Line 4195: [DB]  E-DPDCH (Status : Unchanged)
Line 4205: [DB]  E-DPDCH (etfciTableIndex(%d), edchMinSetEtfci(%d), minReducedGainFactor(%d))
Line 4207: [DB]  E-DPDCH (maxChCode(%d), plNonMax(%d))
Line 4211: [DB]  E-DPDCH (RefEtfciInfo(num:%d))
Line 4217: [DB] RefEtfci : %d, refEtfciPo : %d
Line 4259: [DB]  E-DPDCH (reportNoGrant(%d), reportGrant(%d))
Line 4261: [DB]  E-DPDCH (periodForSchedInfoNoGrant(%d), periodForSchedInfoGrant(%d))
Line 4263: [DB]  E-DPDCH (pwrOffsetSchedInfo(%d))
Line 4265: [DB]  E-DPDCH (threeIndexStepThreshold(%d), twoIndexStepThreshold(%d))
Line 4268: [DB]  E-DPDCH is OK
Line 4273: [DB]  E-DPDCH : edpdchInst is NULL
Line 4304: [DB]  Serving E-DCH RL
Line 4309: [DB]  Serving E-DCH RL (old servingCpich (%d))
Line 4316: [DB]  Serving E-DCH RL : new & old priCpich are same
Line 4322: [DB]  Serving E-DCH RL (Status : Unchanged)
Line 4327: [DB]  Serving E-DCH RL (Status : Changed)
Line 4333: [DB]  Serving E-DCH RL (prev agchAct (%d), prev hichAct (%d), prev rgchAct (%d))
Line 4339: [DB]  Serving E-DCH RL (eagchChCode (%d))
Line 4347: [DB]  Serving E-DCH RL (ehichChCode (%d), ehichSignSeq (%d))
Line 4355: [DB]  Serving E-DCH RL (ergchSignSeq (%d), ergchCombIndex (%d))
Line 4358: [DB]  Serving E-DCH RL (post agchAct (%d), post hichAct (%d), post rgchAct (%d))
Line 4368: [DB]  Serving E-DCH RL (Status : Changed, priCpich(0x%x)))
Line 4372: [DB]  Serving E-DCH RL (by ASU)
Line 4383: [DB]  Serving E-DCH RL (non-serving RL to Serving E-DCH RL)
Line 4392: [DB]  Serving E-DCH RL (get HICH info from RL Addition Info)
Line 4402: [DB]  Serving E-DCH RL (get RGCH info from RL Addition Info)
Line 4417: [DB]  Serving E-DCH RL (get HICH info from DB)
Line 4419: [DB]  Serving E-DCH RL (ehichChCode (%d), ehichSignSeq (%d))
Line 4426: [DB]  Serving E-DCH RL (get RGCH info from DB)
Line 4428: [DB]  Serving E-DCH RL (ergchSignSeq (%d), ergchCombIndex (%d))
Line 4438: [DB]  Serving E-DCH RL (Status : Unchanged)
Line 4446: [DB]  Serving E-DCH RL (eagchChCode (%d))
Line 4448: [DB]  Serving E-DCH RL (ehichChCode (%d), ehichSignSeq (%d))
Line 4455: [DB]  Serving E-DCH RL (ergchSignSeq (%d), ergchCombIndex (%d))
Line 4462: [DB]  Serving E-DCH RL (agchAct (%d), hichAct (%d), rgchAct (%d))
Line 4466: [DB]  Serving E-DCH RL is OK
Line 4636: [DB]  remove Serving E-DCH RL
Line 4860: [DB]  Non-Serving E-DCH RL (Old servingCpich (0x%x))
Line 4870: [DB]  Non-Serving E-DCH RL (Old serving eagchChCode (%d), hichChCode (%d), hichSignSeq (%d))
Line 4876: [DB]  Non-Serving E-DCH RL (Old serving ergchSignSeq (%d), ergchCombIndex (%d))
Line 4894: [DB]  Non-Serving E-DCH RL (Old Non-serving count (%d))
Line 4907: [DB]  Non-Serving E-DCH RL (Old non-servingCpich (0x%x))
Line 4909: [DB]  Non-Serving E-DCH RL (Old non-serving hichChCode (%d), hichSignSeq (%d))
Line 4915: [DB]  Non-Serving E-DCH RL (Old non-serving ergchSignSeq (%d), ergchCombIndex (%d))
Line 4943: [DB]  Non-Serving E-DCH RL (New Non-serving cell is equal to Old Non-serving cell (priCpich(0x%x)))
Line 4985: [DB]  Non-Serving E-DCH RL (Status : Changed, priCpich (0x%X))
Line 4990: [DB]  Non-Serving E-DCH RL (ehichChCode (%d), ehichSignSeq (%d))
Line 4998: [DB]   Non-Serving E-DCH RL (ergchSignSeq (%d), ergchCombIndex (%d))
Line 5005: [DB]  Non-Serving E-DCH RL (hichAct (%d), rgchAct (%d))
Line 5012: [DB]  Non-Serving E-DCH RL : All RLs are replaced (HHO)
Line 5082: [DB] invalid Periodicity for Scheduling Info = %d
Line 5113: [DB] Set E-RNTI (isPriErnti(%d), PriErnti( 0x%x), isSecErnti(%d), SecErnti(0x%x))
Line 5635: [DB] GetRemainingEdchActiveSet: [fail] - PcpichScrCode > 511
Line 5644: [DB] GetRemainingEdchActiveSet: [success] - found P-CPICH scrambling code = %d
Line 5658: [DB] GetRemainingEdchActiveSetCount
Line 5676: [DB] Class_GetRemainingEdchActiveSetInst: [fail] - Index > Asn_maxEDCHRL+2
Line 5683: [DB] Class_GetRemainingEdchActiveSetInst: [success] - found RemainingEdchActiveSetInst [Index(%d), Cpich(0x%x)]
Line 5722: [DB] DLMsgDebug: Hsupa Rbid %d, UlRlcSize %d
Line 5748: [DB][CV][ECELL_FACH] H_RNTI_INFO_OK
Line 5838: [DB][CV][ECELL_FACH] CELL_FACH_OK
Line 5842: [DB][CV][ECELL_FACH] No CELL_FACH
Line 5850: [DB]  currently not implemented
Line 5944: [DB][CV][ECELL_FACH] DB H_RNTI_INFO_OK
Line 6205: [DB][CV][ECELL_FACH] MAC_EHS_Q_INFO_OK
Line 6362: [DB][CV][ECELL_FACH] HARQ_OK
Line 6376: [DB][CV][ECELL_FACH] HARQ_FROM_SIB5_OK
Line 6933: >> Start preparing HSDPA info from ConfigDB <<
Line 6964: >> End preparing HSDPA info from ConfigDB <<
Line 7512: Checking HSDSCH reception 
Line 7519: [DB] HS_DSCH_RECEPTION is OK (%x)
Line 7524: [DB] HS_DSCH_RECEPTION is not OK (%x)
Line 7563: [DB] E_DCH_TRANSMISSION is OK (%x)
Line 7568: [DB] E_DCH_TRANSMISSION is not OK (%x)
Line 7632: [DB] DL_SECONDARY_HS_DSCH_RECEPTION is OK (%x) for cell %d
Line 7639: [DB] DL_SECONDARY_HS_DSCH_RECEPTION is not OK (%x), CellConfigStatus (%d) for cell %d
Line 7698: [DB] DL_SECONDARY_CELL_DCH_OK
Line 7877: [DB] DL_SECONDARY_HARQ_INFO_OK as memPartitioningType is IMPLICIT 
Line 7881: [DB] DL_SECONDARY_HARQ_INFO_OK as memPartitioningType is EXPLICIT 
Line 8169: [DB] DL_SECONDARY_HS_DSCH_CELL_OK for cell %d
Line 8179: [DB] DL_SECONDARY_HS_DSCH_CELL_OK for cell %d
Line 8281: [DB] DlSecTsnFieldExtConfigStatus OK
Line 8286: [DB] DlSecTsnFieldExtConfigStatus NOT OK
Line 8611: [DB] RL count reached to max for DB: [%u]
Line 8616: [DB] Invalid Rl Type: [%u] Received for DB: [%u]
Line 8645: [DB] No of RLs: [%u] in DB: [%u], yet no free Index
Line 8720: [DB] Pcpich: [%u], not present in Config DB
Line 8755: [DB] New RL is added with PSC : [%u], in DB: [%u], at RlIndex: [%u], TotalRLs: [%d]
Line 8783: [DB] New RL is added with PSC : [%u], in DB: [%u], at RlIndex: [%u], TotalRLs: [%d]
Line 8832: [DB] There is no DL RL Info list from N/W so Old RLs were used
Line 8970: [DB] RL count reached to max for DB: [%u]
Line 8996: [DB] New RL is added From Source DB: [%u] in Target DB:[%u] with PSC : [%u], at RlIndex: [%u], TotalRLs in Target DB: [%d]
Line 9030: [DB] New RL is added From Source DB: [%u] in Target DB:[%u] with PSC : [%u], at RlIndex: [%u], TotalRLs in Target DB: [%d]
Line 9046: [DB] Invalid RL type received for PSC: [%u], DB: [%u]
Line 9084: [DB] [CV] DL_SECONDARY_H_RNTI_OK for cell %d
Line 9102: [DB] dl64QAMConfigured= %d for cell %d
Line 9120: [DB] [CV] DL_SECONDARY_HS_DSCH_CELL_OK for cell %d
Line 9121: [DB] SecondaryHsdschCellStatus->primaryCpich = %u 
Line 9156: [DB] [CV] DL_SECONDARY_HS_SCCH_INFO_OK for cell %d
Line 9173: [DB] dlTxDivFromServHsdschCellConfiguredStatus = %d 
Line 9191: [DB] [CV] DlSecCellInfo_addIeSecCellDlUarfcn = %d of cell %d
Line 9208: [DB] measurementPowerOffset = %d 
Line 9210: [DB] [CV] DL_SECONDARY_MEAS_POWER_OFFSET_INFO_OK for cell %d
Line 9302: [DB] invalid E-DCH TTI
Line 9331: [DB]  E-DPDCH (Convert periodForSchedInfoNoGrant)
Line 9337: [DB]  E-DPDCH (periodForSchedInfoNoGrant(%d))
Line 9341: [DB]  E-DPDCH (Convert periodForSchedInfoGrant)
Line 9347: [DB]  E-DPDCH (periodForSchedInfoGrant(%d))
Line 9400: [DB]  Serving E-DCH RL
Line 9403: [DB]  Serving E-DCH RL (priCpich (0x%x))
Line 9405: [DB]  Serving E-DCH RL (isAgch (%d), hichAct (%d), rgchAct (%d))
Line 9412: [DB]  Serving E-DCH RL (eagchChCode (%d))
Line 9420: [DB]  Serving E-DCH RL (ehichChCode (%d), ehichSignSeq (%d))
Line 9428: [DB]  Serving E-DCH RL (ergchSignSeq (%d), ergchCombIndex (%d))
Line 9435: [DB]  Serving E-DCH RL is OK
Line 9491: [DB]  Serving E-DCH RL is OK and All Information Taken from ConfigDb
Line 9496: [DB] Received Serving E-DCH RL Cpich is different from ConfigDb
Line 9570: [DB] invalid Happy Bit Delay Condition
Line 9589: [DB]  E-DPCCH
Line 9604: [DB]  E-DPCCH (PwrOffset(%d), happyBitDelay(%d))
Line 9618: [DB]  E-DPCCH (by ASU, PwrOffset(%d) Only)
Line 9624: [DB]  E-DPCCH is OK
Line 9649: [DB]  E-DPDCH (partial : by ASU)
Line 9656: [DB]  E-DPDCH (RefEtfciInfo(num:%d))
Line 9662: [DB] RefEtfci : %d, refEtfciPo : %d
Line 9673: [DB]  E-DPDCH (pwrOffsetSchedInfo(%d))
Line 9681: [DB]  E-DPDCH (threeIndexStepThreshold(%d))
Line 9689: [DB]  E-DPDCH (twoIndexStepThreshold(%d))
Line 9723: [DB]  Non-Serving E-DCH RL
Line 9733: [DB]  Non-Serving E-DCH RL (priCpich (0x%x))
Line 9735: [DB]  Non-Serving E-DCH RL (hichAct (%d), rgchAct (%d))
Line 9742: [DB]  Non-Serving E-DCH RL (ehichChCode (%d), ehichSignSeq (%d))
Line 9750: [DB]  Non-Serving E-DCH RL (ergchSignSeq (%d), ergchCombIndex (%d))
Line 9766: [DB]  E-DPDCH
Line 9777: [DB]  E-DPDCH (etfciTableIndex(%d), edchMinSetEtfci(%d), (RefEtfciInfo(num:%d))
Line 9784: [DB] 						RefEtfci : %d, refEtfciPo : %d
Line 9791: [DB]  E-DPDCH (maxChCode(%d), plNonMax(%d), reportNoGrant(%d), reportGrant(%d))
Line 9797: [DB]  E-DPDCH (asnPeriodicityNoGrant(%d))
Line 9804: [DB]  E-DPDCH (asnPeriodicityGrant(%d))
Line 9817: [DB]  E-DPDCH (pwrOffsetSchedInfo(%d), threeIndexStepThreshold(%d), twoIndexStepThreshold(%d), minReducedGainFactor(%d))
Line 9822: [DB]  E-DPDCH is OK
Line 9945: [BAND changed] OLD(%d) -> NEW(%d)
Line 9952: SendUrrcMmScellAsInfoInd : BandId(%d), Uarfcn(%d), RrcState(%d)
Line 9956: Wrong UARFCN(%d), BandId(%d) were detected so it won't be updated to SIPC
Line 10173: Number of UL DPDCHs is ZERO, and UL DCH [%d] has NonZero data rate
Line 10179: Number of UL DPDCHs is ZERO, and UL DCH [%d] has Zero data rate
Line 10695: [DB] Invalid ArrIndx %d
Line 10820: [DB] set compModeInfoArrayIdx[%d], Tgpsi[%d]
Line 10824: [DB] Invalid ArrayIndex %d
Line 11205: [DB][CV][ECELL_FACH] MAC_EHS_Q_INFO_OK
Line 11283: [DB] DL_SECONDARY_HARQ_INFO_OK as memPartitioningType is IMPLICIT 
Line 11287: [DB] DL_SECONDARY_HARQ_INFO_OK as memPartitioningType is EXPLICIT 
Line 11346: [DB][CV][ECELL_FACH] HARQ_INFO_OK
Line 11440: [ERROR][DB] All Rab Index Occupied, Db Index: [%u]
Line 11443: [ERROR][DB] Total Rab count: [%u], But No Free RAB Index Db Index: [%u]
Line 11590: [DB] msgAsn1Check: signalling connection doesnt exist for RAB
Line 11598: [DB] msgAsn1Check: RAB [%d] CN domain discrepancy
Line 11640: [ERROR][DB] Invalid RL-Type [%d] in config Db
Line 11655: [DB] PSC(%d) is included in MsgDB instead of ConfigDB
Line 11666: [DB] IgnorableCellIncluded: PSC(%d) is not included in ActiveSet
Line 11714: [ERROR][DB] Invalid RL-Type [%d] in config Db
Line 11787: [DB] msgProcess: 8.3.5.1.2 - Default DPCH Offset Value missing
Line 11805: [DB] msgProcess: 8.3.5.1.2 - relation failure
Line 11814: [DB] msgProcess: 8.3.5.1.2 - relation failure
Line 11820: [DB] msgProcess: 8.3.5.1.2 - DPCH instance missing
Line 11826: [DB] msgProcess: 8.3.5.1.2 - Per RL instance missing
Line 11853: [DB] msgProcess: 8.3.5.1.2 - Default DPCH Offset Value missing
Line 11926: DlMsgDebug: IsCipheringAndTmActive, *csDomain = %d, *psDomain = %d
Line 11950: DlMsgDebug: StartValueCalcRequiredForRbSetup, cnDom = %d
Line 11962: DlMsgDebug: StartValueCalcRequiredForRbSetup, cnDom = %d
Line 11980: DlMsgDebug: StartValueCalcRequiredForRbSetup, cnDom = %d
Line 12022: DlMsgDebug: DetermineAffectedCnDomains, *csDomain = %d, *psDomain = %d
Line 12321: [DB] RB::GetRlcCipheredSrbList
Line 12326: [DB] RB::GetRlcCipheredSrbList: [fail] - no security manager
Line 12331: [DB] RB::GetRlcCipheredSrbList: [fail] - different domain types
Line 12357: [DB] RB::GetRlcCipheredSrbList: [success]
Line 12370: [DB] RB::GetRlcCipheredRbList
Line 12374: [DB] RB::GetRlcCipheredRbList: [success] - TM only
Line 12404: [DB] RB::GetRlcCipheredRbList: [success] - AM or UM
Line 12411: [DB] RB::GetRlcCipheredRbList: [fail] - wrong CnDomainId
Line 12435: [DB] Db Commit, RL Context Moved From Index: [%u], to Index: [%u]
Line 12453: [ERROR][DB] No RL Info present at RL Index [%d] in config Db
Line 12459: [ERROR][DB] Invalid RL Type [%d] present in Db
Line 12478: [DB] Db Commit, RAB Context Moved From Index: [%u], to Index: [%u]
Line 12487: [ERROR][DB] No RAB Info present at Rab Index [%d] in config Db
Line 12843: getHarqMemSize=%d
Line 13192: [DB] L2uCandiCellInfo: WARNING - No matching PSC, Target (%d) vs. L2U (%d)
Line 13198: [DB] L2uCandiCellInfo: WARNING - No matching UARFCN, Target (%d) vs. L2U (%d)
Line 13206: [DB] Number of candidate cells from LTE info is zero (%d) or invalid UARCN (%d)
Line 13217: [DB] L2uCandiCellInfo: [Country Info %d, HO type %d] Set IgnoreSttd to TRUE
Line 13223: [DB] L2uCandiCellInfo: [Country Info %d, HO type %d] Set IgnoreSttd to FALSE
Line 13283: rrc_DbphEdchInfo_ProcessOptionality called
Line 13318: rrc_DbphDlRlInfo_ProcessOptionality called
Line 13338: [ERROR][DB] PrimaryCpich: [%d] not present in Msg Db
Line 13359: rrc_DbphDlSecondaryCellInfo_ProcessOptionality called
Line 13404: rrc_DbphFreqInfo_ProcessOptionality called
Line 13420: rrc_DbphRLAdditionInfo_ProcessOptionality called
Line 13456: rrc_DbphDlDpchInfoCmnRl_ProcessOptionality called
Line 13468: rrc_DbphDlRlCmnInfo_ProcessOptionality called
Line 13490: rrc_DbphServingHsdschInfo_ProcessOptionality called
Line 13540: rrc_DbrbMapInfo_ProcessOptionality called
Line 13570: RB[%d] Mapping from ConfigDB
Line 13592: rrc_DbrbPdcpInfo_ProcessOptionality called
Line 13613: rrc_DbrbRlcInfo_ProcessOptionality called
Line 13633: rrc_DbrbSigSetInfoList_ProcessOptionality called
Line 13654: rrc_DbrbSetInfoList_ProcessOptionality called
Line 13677: rrc_DbrbInfoAffList_ProcessOptionality called
Line 13697: rrc_DbrbRabInfo_ProcessOptionality called
Line 13704: rrc_DbtrChUlAddOrReconInfo_ProcessOptionality called
Line 13730: rrc_DbtrChDlAddOrReconInfo_ProcessOptionality called
Line 13745: rrc_DbtrTfcs_ProcessOptionality called
Line 14138: [DB] getAllActiveAmUmDrbs: [fail] - DrbIdAr is NULL
Line 14161: [DB] getAllActiveAmUmDrbs: [fail] - DRB Id = %d has been stopped
Line 14173: [DB] getAllActiveAmUmDrbs: [success] - DrbId = %d inserted
Line 14269: [DB] rrc_DbgetAllActiveAmUmDrbsForCsDomain
Line 14273: [DB] DB::getAllActiveAmUmDrbsForCsDomain: [fail] - DrbIdArr is NULL
Line 14299: [DB] rrc_DbgetAllActiveAmUmDrbsForPsDomain
Line 14303: [DB] DB::getAllActiveAmUmDrbsForPsDomain: [fail] - DrbIdArr is NULL
Line 14376: [DB] rrc_DbIsT315Rab
Line 14394: [DB] rrc_DbIsT314Rab
Line 14418: [DB] rrc_DbCalcUlDCHMaxUplinkTti
Line 14425: [DB] CalcUlDCHMaxUplinkTti: [not available] - UlTrChCount is 0
Line 14447: [DB] CalcUlDCHMaxUplinkTti: [success] - max UL TTI = %d
Line 14473: [DB] rrc_DbCalcDlDCHMaxUplinkTti
Line 14480: [DB] CalcDlDCHMaxUplinkTti: [not available] - UlTrChCount is 0
Line 14502: [DB] CalcDlDCHMaxUplinkTti: [success] - max UL TTI = %d
Line 14527: [DB] rrc_DbCalcTrChMaxUpLinkDownLinkTti
Line 14534: [DB] CalcTrChMaxUpLinkDownLink HS-DSCH TTI: [success]  = %d
Line 14539: [DB] CalcTrChMaxUpLinkDownLink: [fail] - could not get max DL TTI
Line 14547: [DB] CalcTrChMaxUpLinkDownLink E-DCH TTI: [success]  = %d
Line 14552: [DB] CalcTrChMaxUpLinkDownLink: [fail] - could not get max UL TTI
Line 14565: [DB] CalcTrChMaxUpLinkDownLink: [success] - max TTI = %d
Line 14608: [DB] rrc_DbgetCpichsForAllFdpchRls
Line 14619: [DB] rrc_DbgetCpichsForAllFdpchRls: [success] - DlFdpchRadioLinkCount = 0
Line 14634: [DB] rrc_DbgetCpichsForAllFdpchRls: [success]
Line 14666: [DB] rrc_DbgetIsDlFdpchRlExistforPSC: [fail] - PcpichScrCode > 511
Line 14679: [DB] rrc_DbgetIsDlFdpchRlExistforPSC: [success] - found P-CPICH scrambling code = %d
Line 14734: [DB] rrc_DbgetCpichsForAllRls: [success] - DlRadioLinkCount = 0
Line 14749: [DB] rrc_DbgetCpichsForAllRls: [success]
Line 14781: [DB] rrc_DbgetIsDlRlExistforPSC: [fail] - PcpichScrCode > 511
Line 14794: [DB] rrc_DbgetIsDlRlExistforPSC: [success] - found P-CPICH scrambling code = %d
Line 14934: [DB]  [ECELL_FACH] [CV] prepareCommonHsdschIeFromConfigDb
Line 14940: [DB][CV][ECELL_FACH] HSDSCH_COMMON_SYSINFO_IE_OK
Line 14941: [DB][CV][ECELL_FACH] HARQ_FROM_SIB5_OK
Line 14948: [DB][CV][ECELL_FACH] HsDschCmnSysInfo Not present
Line 14953: [DB][CV][ECELL_FACH] SIB5 Not present
Line 14970: [DB][CV][ECELL_FACH] C_RNTI_INFO_OK
Line 14974: [DB][CV][ECELL_FACH] No C_RNTI_INFO
Line 15006: [DB][CV][ECELL_FACH] HS_DSCH_RECEPTION_CELL_FACH_STATE is OK (0x%X)
Line 15013: [DB][CV][ECELL_FACH] HS_DSCH_RECEPTION_CELL_FACH_STATE is not OK (0x%X), IsECellFachSupported %d
Line 15082: [DB] [ECELL_FACH_DRX] [CV] HS_DSCH_DRX_CELL_FACH_STATUS is OK
Line 15087: [DB] [ECELL_FACH_DRX] [CV] HS_DSCH_DRX_CELL_FACH_STATUS is not OK 
Line 15089: [DB] [ECELL_FACH_DRX] [CV] IsECellFachDrxSupportedByUE[%d], IsTargetStateCellFach[%d],IsDedicatedHrntiConfigured[%d]
Line 15091: [DB] [ECELL_FACH_DRX] [CV] IsECellFachDrxSupportedOnServCell[%d], IsDrxInterruptionbyhsdsch[%d]
Line 15226: [DB][CV][ECELL_FACH] requestMachsReset
Line 15230: [DB][CV][ECELL_FACH] No requestMachsCommonReset
Line 15246: rrc_DbtrChHarqInfo_ProcessOptionality called
Line 15285: [DB][CV][ECELL_FACH] Clear HARQ_OK
Line 15321: SameAsRbId %d is not found in MsgDB or ConfigDB
Line 15351: Rlc Mode Not correct for RbId: [%d]
Line 15360: Rlc Mode Not correct for RbId: [%d]
Line 15369: Rlc Mode Not correct for RbId: [%d]
Line 15378: Rlc Mode Not correct for RbId: [%d]
Line 15414: No Mapping info in IE for Ul for Rb [%d]
Line 15419: No Mapping info in IE for Ul for Rb [%d]
Line 15424: No of UL logical channel is 2 for Rb [%d]
Line 15429: No of DL logical channel is 2 for Rb [%d]
Line 15434: No of DL logical channel is 2/Ul RLC Modeis UM for Rb [%d]
Line 15450: rrc_DbrbRbInfoReconList_ProcessOptionality called
Line 15478: [DB] error in Old HS-DSCH Configuration Status
Line 15496: [DB] error in Old E-DCH Configuration Status
Line 15515: [DB] error in Old MAC-EHS HS-DSCH Configuration Status
Line 15533: [DB] error in Old MAC-HS HS-DSCH Configuration Status
Line 15582: [DB] No RL exists in Config DB
Line 15591: [DB] primaryCpich %d, globalCellId 0x%x
Line 15610: [DB] Invalid RL Type %d
Line 15627: [DB] No RL exists in Config DB
Line 15653: [DB] Invalid RL Type %d
Line 15658: [DB] primaryCpich %d, globalCellId 0x%x
Line 2186: DLMsgDebug: AmRbId %d, DlRlcSzWasKnownToRrc %d
Line 2189: DLMsgDebug: [MsgDB] DlRlcType %d, DlRlcSize %d, DlRlcLI %d vs [ConfigDB] DlRlcType %d, DlRlcSize %d, DlRlcLI %d
Line 4664: [DB]  Non-Serving E-DCH RL (Status : Changed, priCpich (0x%X))
Line 4673: [DB]  Non-Serving E-DCH RL (set Old hichChCode (%d), hichSignSeq (%d) to New Info)
Line 4686: [DB]  Non-Serving E-DCH RL (release Non-serving cell (priCpich (0x%x) by ehich release))
Line 4697: [DB]  Non-Serving E-DCH RL (Status : Changed, priCpich (0x%X))
Line 4699: [DB]  Non-Serving E-DCH RL (New Non-serving cell is equal to Old serving cell (priCpich(0x%x)))
Line 4709: [DB]  Non-Serving E-DCH RL (release Non-serving cell (priCpich (0x%x) by ehich release))
Line 4717: [DB]  Non-Serving E-DCH RL (use old serving cell info (ehichChCode (%d), ehichSignSeq (%d)))
Line 4727: [DB]  Non-Serving E-DCH RL (use old serving cell info (ergchSignSeq (%d), ergchCombIndex (%d)))
Line 4739: [DB]  Non-Serving E-DCH RL (Invalid Non-serving cell configuration (priCpich (0x%x)))
Line 4797: [DB]  Non-Serving E-DCH RL (Status : Unchanged, priCpich (0x%X))
Line 4802: [DB]  Non-Serving E-DCH RL (ehichChCode (%d), ehichSignSeq (%d))
Line 4810: [DB] 	Non-Serving E-DCH RL (ergchSignSeq (%d), ergchCombIndex (%d))
Line 4817: [DB]  Non-Serving E-DCH RL (hichAct (%d), rgchAct (%d))
Line 10505: [DB] invalid CQI Feedback Cycle=%d
Line 11107: [DB] invalid T1=%d
Line 11148: [DB] invalid MAC-hs window size=%d
Line 11171: [DB] invalid Treset=%d
Line 14233: [DB] rrc_DbgetAllActiveAmUmDrbsForDomain: [fail] - DRB Id = %d has been stopped
Line 14245: [DB] rrc_DbgetAllActiveAmUmDrbsForDomain: [success] - DrbId = %d inserted
