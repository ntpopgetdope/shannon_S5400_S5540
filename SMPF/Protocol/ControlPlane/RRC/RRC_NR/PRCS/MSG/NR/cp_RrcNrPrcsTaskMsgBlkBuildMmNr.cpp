Line 194: Paging cycle is invalid ==> received value = %d
Line 110: Build_MM_RRC_ACTIVE_CIPHER_INTEGRITY_INFO_IND: Active(%d) eCipheringSource(%d) eCipheringAlgorithm(%d) eIntegrityAlgorithm(%d) eSecondaryCipheringAlgorithm(%d) eSecondaryIntegrityAlgorithm(%d)
Line 110: Build_MM_RRC_ACTIVE_CIPHER_INTEGRITY_INFO_IND: Active(%d) eCipheringSource(%d) eCipheringAlgorithm(%d) eIntegrityAlgorithm(%d) eSecondaryCipheringAlgorithm(%d) eSecondaryIntegrityAlgorithm(%d)
Line 127: Build_MM_RRC_BARRING_ALLEV_IND allevAccessCategories: (0x%08x %08x), BarredAccessCategories(0x%08x %08x)
Line 141: [NrBarringInfo] Build_MM_RRC_BARRING_CHECK_RESULT_IND: isBarred(%d), BarredTime(%d) AccessCategoryBitmap(0x%08x %08x)
Line 171: Build_MM_RRC_BPLMN_LIST_FAIL_IND: Cause(%d), NumPlmns(%d)
Line 257: [NRCELL] anyplmn
Line 262: [NRCELL] rplmn
Line 310: [Build_MM_RRC_CELL_IND] FeatureControl PLMN countryCode(%x%x%x) networkCode(%x%x%x)
Line 320: [RRC][UECAPA] Selected Plmn : %x
Line 320: [RRC][UECAPA] Selected Plmn : %x
Line 343: [RRC][UECAPA] Plmn Id is matched. Set AS Release Version to NRRRC_REL%d
Line 343: [RRC][UECAPA] Plmn Id is matched. Set AS Release Version to NRRRC_REL%d
Line 353: [NRCELL]Build_MM_RRC_CELL_IND AsRelVer: %d NasRelVer: %d
Line 357: [NRCELL] rSibDb.pScellInfo is nullptr!!
Line 363: [RRC][NRCELL] Build_MM_RRC_CELL_IND numPlmns:%d, cellId:%d, ImsEmergencySupport:%d
Line 363: [RRC][NRCELL] Build_MM_RRC_CELL_IND numPlmns:%d, cellId:%d, ImsEmergencySupport:%d
Line 364: [RRC][NRCELL] Build_MM_RRC_CELL_IND tac[0]:%x tac[1]:%x, tac[2]:%x 
Line 364: [RRC][NRCELL] Build_MM_RRC_CELL_IND tac[0]:%x tac[1]:%x, tac[2]:%x 
Line 366: [NRCELL]Build_MM_RRC_CELL_IND mcc:%x%x%x mnc:%x%x%x
Line 367: [NRCELL]Build_MM_RRC_CELL_IND IsRegiResponseNeed: %d
Line 368: [NRCELL]Build_MM_RRC_CELL_IND FrType %d
Line 370: [NRCELL]Build_MM_RRC_CELL_IND IsSelPlmnValid:%d - Scell Band %d Arfcn %d Pcid %d
Line 383: [NRUECAPA][Build_MM_RRC_CELL_IND] Start of Capa DB Process
Line 390: [NRUECAPA][Build_MM_RRC_CELL_IND] PLMN countryCode(%x%x%x) networkCode(%x%x%x)
Line 400: [NRUECAPA][Build_MM_RRC_CELL_IND] DbUpdateNeeded(%d)
Line 430: [NRUECAPA][Build_MM_RRC_CELL_IND] DB setup FAILED
Line 457: [NRUECAPA][Build_MM_RRC_CELL_IND] simStatus = (%d) IsCapaUpdateNeeded = (%d)
Line 481: [NRUECAPA][Build_MM_RRC_CELL_IND] End of Capa DB Process
Line 506: Build_MM_RRC_CONNECTED_IND BarredAccessCategories(0x%08x %08x) 
Line 525: Build_MM_RRC_DATA_CNF Mui:%d cause:%d BarredAccessCategories(0x%08x %08x), UsedOnlyForBarringCheck:%d
Line 555: Build_MM_RRC_EST_CNF Mui:%d Result:%d 
Line 568: [RRC][NRREJECT] Build_MM_RRC_EST_REJ Mui:%d cause:%d extendedWaitTime:%d, BarredAccessCategories(0x%08x %08x)
Line 568: [RRC][NRREJECT] Build_MM_RRC_EST_REJ Mui:%d cause:%d extendedWaitTime:%d, BarredAccessCategories(0x%08x %08x)
Line 581: Build_MM_RRC_FALLBACK_IND ActiveDataStatus:%d
Line 595: Build_MM_RRC_INACTIVE_IND BarredAccessCategories(0x%08x %08x)
Line 613: [RRC][IRAT] Build_MM_RRC_IRAT_CHANGE_CNF type:%d
Line 613: [RRC][IRAT] Build_MM_RRC_IRAT_CHANGE_CNF type:%d
Line 616: [RRC][IRAT] RESELECTION_TO_NR result:%s (Cause :%d)
Line 616: [RRC][IRAT] RESELECTION_TO_NR result:%s (Cause :%d)
Line 621: [RRC][IRAT] REDIRECT_TO_NR RedirectResult:%s (Cause :%d)
Line 621: [RRC][IRAT] REDIRECT_TO_NR RedirectResult:%s (Cause :%d)
Line 625: [RRC][IRAT] HO_TO_NR HoResult:%s (Cause :%d)
Line 625: [RRC][IRAT] HO_TO_NR HoResult:%s (Cause :%d)
Line 646: [RRC][IRAT] Build_MM_RRC_IRAT_CHANGE_REQ : TargetRat %d, Type %d 
Line 646: [RRC][IRAT] Build_MM_RRC_IRAT_CHANGE_REQ : TargetRat %d, Type %d 
Line 650: [Warning] Target RAT is RAT_UMTS_FDD.
Line 653: SRVCC to UMTS
Line 659: pIratInfo address 0x%x
Line 666: RRC Container : length(%d), data(0x%x%x%x%x)
Line 670: NAS Container : length(%d), data(0x%x%x)
Line 674: [Warning] Type %d is invalid value
Line 681: [Warning] Target RAT is not LTE.
Line 689: pIratInfo address 0x%x
Line 693: Reselection to LTE
Line 698: [NRCELL][RESEL] Build_MM_RRC_IRAT_CHANGE_REQ :  selection list has been completed so do not send message
Line 709: Redirection to LTE
Line 743: [NeighEutraInfo] %d. earfcn %d
Line 755: arfcn %d, redirect_time_ms %d, num_blacklist_pci %d, measurementBased %d
Line 768: arfcn %d, redirect_time_ms %d, num_blacklist_pci %d
Line 772: [Warning] No EUTRA redirection info in DB
Line 781: IsVoiceFallback : (%d)
Line 786: Handover to LTE
Line 795: num_of_eutra_cell_timing(%d)
Line 801: EutraCellList[%d] : Arfcn(%d), CellId(%d), CpType(%d), TimingOffset(%d)
Line 803: RRC Container : length(%d), data(0x%x%x%x%x)
Line 807: NAS Container : length(%d), data(0x%x%x)
Line 815: IsVoiceFallback : (%d)
Line 820: [Warning] Type %d is invalid value
Line 837: Build_MM_RRC_MCC_CNF Fail(%d)
Line 843: Build_MM_RRC_MCC_CNF Success(%d) MCC %d %d %d
Line 844: Build_MM_RRC_MCC_CNF Success(%d) MNC %d %d %d
Line 863: Build_MM_RRC_INIT_CNF totalNumFreq %d SupportedBandMaxTime %d sec
Line 881: Build_MM_RRC_NAS_SEC_UPDATE_REQ: nasContainer: 
Line 909: Build_MM_RRC_NETWORK_TIME_IND
Line 941: AbsoluteTime(0x%08x %08x)
Line 946:  Sib9Acq(%d) TimeZone(%d) DayLightValid(%d) DayLightSavingTime(%d) LeapSecond(%d) TimeInfo(%d)
Line 948:  Year:%d Month:%d Day:%d 
Line 949:  Hour:%d Minute:%d Second:%d DayOfWeek:%d 
Line 951:  MCC %d %d %d
Line 952:  MNC %d %d %d
Line 966: Build_MM_RRC_NETWORK_TIME_RSP
Line 990: AbsoluteTime(0x%08x %08x)
Line 997:  Sib9Acq(%d) TimeZone(%d) DayLightValid(%d) DayLightSavingTime(%d) LeapSecond(%d) TimeInfo(%d)
Line 999:  Year:%d Month:%d Day:%d 
Line 1000:  Hour:%d Minute:%d Second:%d DayOfWeek:%d 
Line 1002:  MCC %d %d %d
Line 1003:  MNC %d %d %d
Line 1016: [NETSCAN] Build_MM_RRC_NET_SCAN_IND: PlmnCnt(%d) Tac(%d)
Line 1038: Build_MM_RRC_OOS_IND: PlmnId invalid
Line 1058: Build_MM_RRC_OOS_IND: reqPlmnId %d%d%d %d%d%d
Line 1059: Build_MM_RRC_OOS_IND: listSize %d full_scanned %d searchCurrentRAT %d
Line 1070: %s
Line 1130: RRC_UAI : Gen_MM_RRC_OTHER_CONFIG_IND : MsgGrpId(%d) OverheatConfigR15(%d) OtherConfigR16SetupBitmask(%d)
Line 1189: Remove Defer(MM PLMN_LIST_REQ|RRC BPLMN_START_IND), Abort BPLMN Prcd
Line 1196: [NRBPLMN] Build_MM_RRC_PLMN_LIST_ABORT_CNF Result %d Cause %d Status %d, NumPlmns %d DetFreqNum %d
Line 1222: [NRCELL]Build_MM_RRC_PLMN_LIST_CNF Result %d Cause %d Status %d, NumPlmns %d DetFreqNum %d
Line 1227: [NRCELL]Build_MM_RRC_PLMN_LIST_CNF band %d arfcn %d rxlev %d
Line 1293: [RRC][NRCELL] Build_MM_RRC_PLMN_SEARCH_CNF listSize:%d, abortflag:%d, result:%d 
Line 1293: [RRC][NRCELL] Build_MM_RRC_PLMN_SEARCH_CNF listSize:%d, abortflag:%d, result:%d 
Line 1295: [RRC][NRCELL] mcc:%x%x%x mnc:%x%x%x
Line 1295: [RRC][NRCELL] mcc:%x%x%x mnc:%x%x%x
Line 1329: Build_MM_RRC_REL_CNF BarredAccessCategories(0x%08x %08x)
Line 1360: Build_MM_RRC_REL_IND cause:%d BarredAccessCategories(0x%08x %08x), ActiveDataStatus:%d
Line 1378: Build_MM_RRC_SERVING_CELL_INFO_IND: current_PCell_band(%d) current_PSCell_band(%d) rrc_state(%d) scg_state(%d)
Line 1392: Build_MM_RRC_TERMINATE_CNF_T BarredAccessCategories(0x%08x %08x)
Line 1421: Build_MM_RRC_ETWS_PRIMARY_IND MsgId(%d), SerialNum(%d), WarningType[0] (%d), WarningType[1] (%d)
Line 1452: Build_MM_RRC_ETWS_SECONDARY_IND MsgId(%d), SerialNum(%d), WarningMsgLen(%d), DataCodingScheme(%d)
Line 1486: [SIB][CMAS] Warning area coordinates present.
Line 1496: Build_MM_RRC_CMAS_IND MsgId(%d), SerialNum(%d), WarningMsgLen(%d), WACLen(%d), DataCodingScheme(%d)
Line 1510: [RRC_UAI] Gen_MM_RRC_UAI_OHA_CNF Tid(%d) Reulst(%d)
Line 1525: Build_MM_RRC_HIGHER_RAT_LOST_IND targetRat %d
