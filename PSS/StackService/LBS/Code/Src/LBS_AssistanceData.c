Line 90: lcsm_ResetRrcDediAssisData() - Reset RRC Assistance Data
Line 97: lcsm_ResetRrDediAssisData() - Reset RR Assistance Data
Line 125: lcsm_InitAsstData() - Initialized Assistance data
Line 362: LPP_ProcessRequestAssistanceData() - sessionTableIndex(%d) transactionNumber(%d) requestAssistanceDataBitMask(0x%x)
Line 367: LPP_ProcessRequestAssistanceData() - MALLOC FAIL!!!
Line 389: LPP_ProcessRequestAssistanceData() - errorBitMask(0x%x) requestAssistanceDataBitMask(0x%x) requestAck(%d)
Line 698: LPP_ProcessProvideAssistanceData() - pAsnProvideAssistanceData->criticalExtensions.choice(%d)
Line 701: LPP_ProcessProvideAssistanceData() - DO NOT send Assist Data to AP. lppIsGpsAvailable(%d)
Line 709: LPP_ProcessProvideAssistanceData() - pAsnProvideAssistanceData->criticalExtensions.u.c1.choice(%d)
Line 744: lcsm_ProcessRrcAssistanceData()
Line 773: Acqui Assist Present
Line 784: PREVIUOSLY NO ACQUI DATA PRESENT
Line 795: Ephemeris Data Present
Line 815: Real Time Integrity Present
Line 835: DGPS Data Present
Line 855: IONO data Present
Line 865: Almanac Present
Line 885: Ref Location Present
Line 895: UTC Data Present
Line 903: Assist Data Extracted and stored
Line 907: DataType = %d
Line 961: lcsm_ProcessRrcGnssAssistanceData()
Line 969: Processing RRC_GANSS_COMMON_ASSIST_DATA
Line 976: Rxed BM_GANSS_REF_TIME
Line 990: Rxed BM_GANSS_REF_LOCATION
Line 1004: Rxed BM_GANSS_IONO_MODEL
Line 1018: Rxed BM_GANSS_ADD_IONO_MODEL
Line 1031: Rxed BM_GANSS_EARTH_ORIENT_PARAM
Line 1055: Processing RRC_GANSS_GENERIC_ASSIST_DATA
Line 1056: rrc_dedi_asst_data[gLBSCurrentStackId].num_ganss_genericData = %d
Line 1064: Rxed BM_GANSS_ID
Line 1070: Offset = %d, Ganss Id = %d
Line 1075: Rxed BM_GANSS_TIME_MODEL
Line 1088: Rxed BM_GANSS_DIFF_CORRECT
Line 1098: dganss_correct present
Line 1103: Rxed BM_GANSS_NAV_MODEL
Line 1125: Add nav_model present
Line 1129: Add nav_model not present
Line 1138: Rxed BM_GANSS_REAL_TIME_INTEGRITY
Line 1148: real_time_int present
Line 1153: Rxed BM_GANSS_REF_MEAS_ASSIST
Line 1163: ref_meas_info present
Line 1168: Rxed BM_GANSS_UTC_MODEL
Line 1178: utc_model present
Line 1204: lcsm_ProcessRrAssistanceData() - Bitmas 0x%X
Line 1219: Ref Time Present
Line 1231: Ref Location Present
Line 1247: DGPS Present
Line 1264: Navigation Data Present
Line 1281: IONO Data Present
Line 1298: UTC Model Present
Line 1316: AlmanacData Present
Line 1334: Acqui Assist Data
Line 1351: Real Time Integrity (RTI) Present
Line 1354: RR Asst data extracted and stored
Line 1380: lcsm_FillRRLPGSMTime() - BCCH_Carrier: %d, bit_number: %d, Bsic: %d, frame_no: %d, time_slot: %d
Line 1394: lcsm_FillUtranTime()
Line 1407: FDD Chosen, ScramblingCode: %d
Line 1419: TDD Chosen, ParamID: %d
Line 1427: SFN: %d
Line 1447: lcsm_SendRrAlmanacAssist()
Line 1472: Almanac Assistance Data, SatID : %d, almanac_af0: %d ,almanac_af1: %d, almanac_a_power_half: %d
Line 1473: almanac_e: %d, almanac_ksii: %d, almanac_m0: %d, almanac_omega0: %d, almanac_omega_dot: %d
Line 1474: lmanac_svhealth: %d ,almanac_toa: %d, almanac_w: %d
Line 1496: lcsm_SendRrNavigationAssist()
Line 1523: Invalid Choice %d
Line 1564: SatID: %d, ephem_af0: %d, ephem_af1: %d, ephem_af2: %d
Line 1565: ephemAPowrHalf: %d, ephemCuc: %d, ephemDeltaN: %d, ephemE: %d, ephemI0: %d, ephemIDot : %d, ephemIODC: %d
Line 1566: ephemM0: %d, ephemOmegaA0: %d, ephemOmegaADot: %d, ephemSVhealth: %d ,ephemTgd: %d, ephemToc: %d
Line 1567: Rsvd1: %d, Rsv2: %d, Rsvd3: %d, Rsvd 4: %d
Line 1570: No of satallites: %d
Line 1629: lcsm_SendRrAcquiAssist()
Line 1640: Filling GSM Time from  RRLP Time Relation
Line 1662: azimuth: %d, elevation: %d
Line 1669: CodePhase: %d, codePhaseSearchWindow: %d, doppler0: %d
Line 1676: Doppler1: %d, dopplerUncertainty: %d
Line 1684: SatID: %d, GPSTOW: %d, GPSBit: %d, CodePhase: %d
Line 1770: lcsm_SendRrcNavigationAssist()
Line 1843: RSV1:%d, [0]:%d, [1]:%d,[2]:%d 
Line 1845: RSV2:%d, [3]:%d, [4]:%d,[5]:%d
Line 1847: RSV3:%d, [6]:%d, [7]:%d,[8]:%d
Line 1849: RSV4:%d, [9]:%d, [10]:%d 
Line 1851: Satellite ID: %d, ephem_af0: %d, ephem_af1: %d, ephem_af2: %d
Line 1853: PowerHalf: %d,  ephemCic: %d, ephemCis: %d, ephemCodeOnL2: %d, ephemCrc: %d , ephemCrs : %d
Line 1855: ephemCuc: %d, ephemDeltaN: %d, ephemE: %d, ephemI0: %d, ephemIDot : %d, ephemIODC: %d
Line 1857: ephemM0: %d, ephemOmegaA0: %d, ephemOmegaADot: %d, ephemSVhealth: %d ,ephemTgd : %d, ephemToc : %d
Line 1921: lcsm_SendRrcAcquiAssist()
Line 1956: CP:%d, CodePhase: %d, codePhaseSearchWindow: %d, doppler0: %d,DOPPLER0:%d
Line 1963: Doppler1: %d, , DopplerUncertainty: %d, doppler1stOrder : %d
Line 1969: Acqui Assistance
Line 1984: lcsm_FillAcqUtranTime()
Line 1998: FDD Chosen, ScramblingCode : %d
Line 2010: TDD Chosen, ParamID: %d
Line 2017: SFN: %d
Line 2033: lcsm_SendRrRefLocAssist()
Line 2066: default lcsm_SendRrRefLocAssist Shape = %d 
Line 2083: lcsm_FillRefLocPoint()
Line 2098: sign extension Longitude = %d 
Line 2103: Shape Type = %d, Latitude = %d, Longitude = %d
Line 2121: lcsm_FillRefLocUncertainityCircle()
Line 2136: sign extension Longitude = %d 
Line 2146: Shape Type = %d, Latitude = %d, Longitude = %d, uncertainty_code = %d
Line 2162: lcsm_FillRefLocUncertainityEllipse()
Line 2177: sign extension Longitude = %d 
Line 2201: Shape Type = %d, Latitude = %d, Longitude = %d
Line 2202: semi_major = %d, semi_minor = %d, major_axis = %d,confidence = %d
Line 2217: lcsm_FillRefLocPointWithAltitude()
Line 2232: sign extension Longitude = %d 
Line 2249: Shape Type = %d, Latitude = %d, Longitude = %d, Altitude = %d, Dir of Altitude = %d
Line 2266: lcsm_FillRefLocUncertainityAltitude()
Line 2281: sign extension Longitude = %d 
Line 2321: Shape Type = %d, Latitude = %d, Longitude = %d, Altitude = %d, Dir of Altitude = %d
Line 2322: semi_major = %d, semi_minor = %d, major_axis = %d, unc_alt = %d, confidence = %d
Line 162: LPP_RequestAssistanceData_r9() - requestAssistanceDataBitMask(0x%x)
Line 169: LPP_RequestAssistanceData_r9() - LPP_commonIEsRequestAssistanceData_present
Line 178: commonIEsRequestAssistanceData.primaryCellID.cellidentity.value(0x%02x %02x %02x %02x)
Line 184: LPP_RequestAssistanceData_r9() - LPP_a_gnss_RequestAssistanceData_present
Line 188: LPP_RequestAssistanceData_r9() - NULL Pointer!!!
Line 198: LPP_RequestAssistanceData_r9() - LPP_otdoa_RequestAssistanceData_present
Line 203: otdoa_RequestAssistanceData.physCellId(%d)
Line 220: LPP_RequestAssistanceData_r9() - EPDU flag present
Line 238: LPP_RequestAssistanceData_r9() - nr_Multi_RTT_RequestAssistanceData_present
Line 243: nr_Multi_RTT_RequestAssistanceData.physCellId(%d)
Line 255: LPP_RequestAssistanceData_r9() - MALLOC FAIL!!!
Line 266: LPP_RequestAssistanceData_r9() - nr_DL_AoD_RequestAssistanceData_present
Line 271: nr_DL_AoD_RequestAssistanceData.physCellId(%d)
Line 283: LPP_RequestAssistanceData_r9() - MALLOC FAIL!!!
Line 294: LPP_RequestAssistanceData_r9() - nr_DL_TDOA_RequestAssistanceData_present
Line 299: nr_DL_TDOA_RequestAssistanceData.physCellId(%d)
Line 311: LPP_RequestAssistanceData_r9() - MALLOC FAIL!!!
Line 430: LPP_ProvideAssistanceData_r9() - pAsnProvideAssistanceData_r9->bit_mask(0x%x)
Line 442: LPP_ProvideAssistanceData_r9() - LPP_a_gnss_ProvideAssistanceData_present
Line 449: LPP_ProvideAssistanceData_r9() - MALLOC FAIL!!!
Line 472: LPP_ProvideAssistanceData_r9() - MALLOC FAIL!!!
Line 496: LPP_ProvideAssistanceData_r9() - LPP_otdoa_ProvideAssistanceData_present
Line 519: LPP_ProvideAssistanceData_r9() - OTDOA RequestLocationInformation w/ transactionNumber(%d) currentTime(%d) timeDiff(%d)
Line 552: LPP_ProvideAssistanceData_r9() - LPP_epdu_Provide_Assistance_Data_present
Line 564: LPP_ProvideAssistanceData_r9() - 'epduID: %d, epduSize: %d
Line 576: LPP_ProvideAssistanceData_r9() - 'ePDU_Body.value' pointer is NULL
Line 583: LPP_ProvideAssistanceData_r9() - 'epdu_RequestCapabilities' pointer is NULL
Line 594: LPP_ProvideAssistanceData_r9() - LPP_Multi_RTT_ProvideAssistanceData_present
Line 604: LPP_ProvideAssistanceData_r9() - LPP_DL_AoD_ProvideAssistanceData_present
Line 614: LPP_ProvideAssistanceData_r9() - LPP_DL_TDOA_ProvideAssistanceData_present
Line 646: LPP_ProvideAssistanceData_r9() - NR Positioning RequestLocationInformation w/ transactionNumber(%d) currentTime(%d) timeDiff(%d)
