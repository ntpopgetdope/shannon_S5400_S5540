Line 1036: lcsm_RrStoreRefTimeData
Line 1054: GPS ToW ASSISTANCE
Line 1072: Overwriting Existing GPS ToW ASSISTANCE
Line 1565: LBS_FillRrcGanssMsbMsrPosRsp()
Line 1571: BM_GPS_MEAS_CFRM
Line 1574: Ganss_present = %d
Line 1596: lcsm_FillRrcGanssMsbMsrPosRsp() - Create UMTS Message Sub Block FAIL!!!
Line 1628: BM_GANSS_MEAS_CFRM: UE based
Line 1629: lcsm_Msg->GnssMeasConf.MeasRspType = %d
Line 1653: GANSS_TOD = %d
Line 1654: Ganss_TimeID = %d
Line 1655: send_msg->Body.mT_LCSM_URRC_MEAS_LOC_INFO_REQ.PositionData  = %d
Line 1659: Ganss_present = %d
Line 1664: lcsm_FillRrcGanssMsbMsrPosRsp() - Create UMTS Message Sub Block FAIL!!!
Line 1672: gnssPositionEstimate_ptr->choice	= %d
Line 1679: gnssPositionEstimate_ptr->u.ellipsoidPointAltitudeEllipse.latitudeSign  = %d
Line 1683: gnssPositionEstimate_ptr->u.ellipsoidPointAltitudeEllipse.latitude  = %d
Line 1686: gnssPositionEstimate_ptr->u.ellipsoidPointAltitudeEllipse.longitude  = %d
Line 1693: gnssPositionEstimate_ptr->u.ellipsoidPointAltitudeEllipse.altitudeDirection  = %d
Line 1696: gnssPositionEstimate_ptr->u.ellipsoidPointAltitudeEllipse.altitude  = %d
Line 1699: gnssPositionEstimate_ptr->u.ellipsoidPointAltitudeEllipse.uncertaintySemiMajor  = %d
Line 1702: gnssPositionEstimate_ptr->u.ellipsoidPointAltitudeEllipse.uncertaintySemiMinor  = %d
Line 1705: gnssPositionEstimate_ptr->u.ellipsoidPointAltitudeEllipse.orientationMajorAxis  = %d
Line 1708: gnssPositionEstimate_ptr->u.ellipsoidPointAltitudeEllipse.uncertaintyAltitude = %d
Line 1711: gnssPositionEstimate_ptr->u.ellipsoidPointAltitudeEllipse.confidence = %d
Line 1713: Ganss_present = %d
Line 1746: Ganss_present = %d
Line 1764: lcsm_FillRrcGanssBmGpsMeasCfrm() - Create UMTS Message Sub Block FAIL!!!
Line 1797: lcsm_FillRrcGanssBmGpsMeasCfrm() - Create UMTS Message Sub Block FAIL!!!
Line 1822: Ganss_present = %d
Line 1853: Start Loop: count = %d
Line 1857: count = %d,offset = %d
Line 1861: Create Head
Line 1865: lcsm_FillRrcGanssBmGanssMeasCfrm() - Create UMTS Message Sub Block FAIL!!!
Line 1870: Head created
Line 1874: Create Node
Line 1878: lcsm_FillRrcGanssBmGanssMeasCfrm() - Create UMTS Message Sub Block FAIL!!!
Line 1883: Node created, gnssptr_node address: %x
Line 1888: gnssptr_node->value.satId = %d
Line 1891: gnssptr_node->value.cSurNzero = %d
Line 1898: Asn_multipathIndicator_nm
Line 1904: Asn_multipathIndicator_low
Line 1910: Asn_multipathIndicator_medium
Line 1916: Asn_multipathIndicator_high
Line 1921: offset %d,mpathDet is out of range :%d
Line 1939: gnssptr_node->value.ganssCodePhase = %d
Line 1946: gnssptr_node->value.ganssIntegerCodePhase = %d
Line 1950: gnssptr_node->value.codePhaseRmsError = %d
Line 1956: gnssptr_node->value.doppler = %d
Line 1964: gnssptr_node->value.adr = %d
Line 2000: BM_GANSS_MEAS_CFRM: UE_Assisted
Line 2001: Ganss_present = %d
Line 2002: lcsm_Msg->GnssMeasConf.MeasRspType = %d
Line 2031: GANSS_TOD = %d
Line 2032: Ganss_TimeID = %d
Line 2033: send_msg->Body.mT_LCSM_URRC_MEAS_LOC_INFO_REQ.PositionData  = %d
Line 2038: lcsm_FillRrcGanssBmGanssMeasCfrm() - Create UMTS Message Sub Block FAIL!!!
Line 2049: GANSS_LOCATION_INFO
Line 2052: BM_GANSS_TIME_ID
Line 2055: send_msg->Body.mT_LCSM_URRC_MEAS_LOC_INFO_REQ.GANSS_Measurement_ptr->referenceTime.u.ganssReferenceTimeOnly.gANSS_timeId = %d
Line 2060: BM_GANSS_TOD_UNCERTAINTY
Line 2063: send_msg->Body.mT_LCSM_URRC_MEAS_LOC_INFO_REQ.GANSS_Measurement_ptr->referenceTime.u.ganssReferenceTimeOnly.gANSS_tod_uncertainty = %d
Line 2068: GANSS_Measurement_ptr created and memset
Line 2073: lcsm_FillRrcGanssBmGanssMeasCfrm() - Create UMTS Message Sub Block FAIL!!!
Line 2078: ganssGenericMeasurementInfo created and memset
Line 2081: ganss_measurement_ptr Assigned
Line 2086: Asn_GANSSGenericMeasurementInfo_ganssId_present
Line 2088: ganss_measurement_ptr->value.ganssId = %d
Line 2092: ganss_measurement_ptr->value.ganssId = %d
Line 2097: lcsm_FillRrcGanssBmGanssMeasCfrm() - Create UMTS Message Sub Block FAIL!!!
Line 2102: ganssMeasurementSignalList Created and memset
Line 2106: ganss_measurement_ptr->value.ganssMeasurementSignalList->value.ganssSignalId = %d
Line 2112: ganss_measurement_ptr->value.ganssMeasurementSignalList->value.ganssCodePhaseAmbiguity = %d
Line 2114: DONE!!
Line 2147: lcsm_FillRrcGanssMsaMsrPosRsp()
Line 2192: lcsm_FillRrcMsbMsrPosRsp()
Line 2212: lcsm_FillRrcMsbMsrPosRsp() - Create UMTS Message Sub Block FAIL!!!
Line 2274: lcsm_FillRrcMsaMsrPosRsp()
Line 2294: lcsm_FillRrcMsaMsrPosRsp() - Create UMTS Message Sub Block FAIL!!!
Line 2326: lcsm_FillRrcMsaMsrPosRsp() - Create UMTS Message Sub Block FAIL!!!
Line 2392: MS Based Location GPS TOW Included in Location Info
Line 2432: lcsm_FillRrMsaMsrPosRsp() - MALLOC FAIL!!!
Line 2472: lcsm_FillRrMsaMsrPosRsp() - MALLOC FAIL!!!
Line 2497: Measure Position Response Filled with GPS Measurement Info
Line 2523: Reference Time Present, No Of sat %d 
Line 2536: lcsm_FillRrlpAssistanceDataReferenceTime() - MALLOC FAIL!!!
Line 2564: Sat%d: satID: %d, tlmWord: %d, antiSpoofFlag: %d,alertFlag: %d, tmlReservedBits %d
Line 2568: Total satellite info sent
Line 2571: lcsm_FillRrlpAssistanceDataReferenceTime() - LBS ==> NS: LBS_NS_LCSM_ASSISTANCE_DATA
Line 2580: lcsm_FillRrlpAssistanceDataReferenceTime() - MALLOC FAIL!!!
Line 2596: Total satellite info sent
Line 2599: lcsm_FillRrlpAssistanceDataReferenceTime() - LBS ==> NS: LBS_NS_LCSM_ASSISTANCE_DATA
Line 2626: Reference Time Present, tow_assist_countt %d
Line 2633: loop = %d
Line 2642: lcsm_FillRrcGanssGpsAsstReferenceTime() - MALLOC FAIL!!!
Line 2683: lcsm_assist1->time_assist.NetTimeInfo.UtranTime.SfnUnc = %d
Line 2694: lcsm_assist1->time_assist.NetTimeInfo.UtranTime.DriftRateType.ValidFlag = %d
Line 2712: Sat%d: Sat_ID: %d, TLM_msg: %d, Anti_Spoof: %d,AlertFlag: %d, TLM_Resv %d
Line 2714: 1.LBS_NS_LCSM_GNSS_ASSISTANCE_DATA
Line 2716: lcsm_FillRrcGanssGpsAsstReferenceTime() - LBS ==> NS: LBS_NS_LCSM_GNSS_ASSISTANCE_DATA
Line 2725: lcsm_FillRrcGanssGpsAsstReferenceTime() - MALLOC FAIL!!!
Line 2775: lcsm_assist1->time_assist.NetTimeInfo.UtranTime.DriftRateType.ValidFlag = %d
Line 2777: 2.LBS_NS_LCSM_GNSS_ASSISTANCE_DATA
Line 2779: lcsm_FillRrcGanssGpsAsstReferenceTime() - LBS ==> NS: LBS_NS_LCSM_GNSS_ASSISTANCE_DATA
Line 2809: CNAV_CLOCK_MODEL
Line 2822: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.clockModelType = %d
Line 2823: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.cnavClockModel.cnavToc = %d
Line 2824: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.cnavClockModel.cnavTop = %d
Line 2825: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.cnavClockModel.cnavURA0 = %d
Line 2826: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.cnavClockModel.cnavURA1 = %d
Line 2827: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.cnavClockModel.cnavURA2 = %d
Line 2828: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.cnavClockModel.cnavAf2 = %d
Line 2829: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.cnavClockModel.cnavAf1 = %d
Line 2830: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.cnavClockModel.cnavAf0 = %d
Line 2831: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.cnavClockModel.cnavTgd = %d
Line 2835: BM_CNAV_ISC_L1CP
Line 2838: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.cnavClockModel.cnavISCl1cp = %d
Line 2843: BM_CNAV_ISC_L1CD
Line 2847: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.cnavClockModel.cnavISCl1cd = %d
Line 2852: BM_CNAV_ISC_L1CA
Line 2856: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.cnavClockModel.cnavISCl1ca = %d
Line 2861: BM_CNAV_ISC_L2C
Line 2865: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.cnavClockModel.cnavISCl2c = %d
Line 2870: BM_CNAV_ISC_L5I5
Line 2874: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.cnavClockModel.cnavISCl5i5 = %d
Line 2879: BM_CNAV_ISC_L5Q5
Line 2883: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.cnavClockModel.cnavISCl5q5 = %d
Line 2912: BM_GANSS_NAV_MODEL
Line 2928: nav_mod_present
Line 2934: add_nav_mod_present
Line 2940: not present
Line 2945: lcsm_assist->navModel.sizeOfGnssSatelliteList = %d
Line 2961: svID = %d, svHealth = %d, iod = %d
Line 2965: NAV_CLOCK_MODEL
Line 2974: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.clockModelType = %d
Line 2975: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.navClockModel.navToc = %d
Line 2976: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.navClockModel.navaf2 = %d
Line 2977: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.navClockModel.navaf1 = %d
Line 2978: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.navClockModel.navaf0 = %d
Line 2979: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.navClockModel.navTgd = %d
Line 2987: GLONASS_CLOCK_MODEL
Line 2992: BM_GANSS_GLO_DELTA_TAU
Line 2996: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.glonassClockModel.gloTau = %d
Line 3001: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.glonassClockModel.gloGamma = %d
Line 3002: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.glonassClockModel.gloDeltaTau = %d
Line 3008: STANDARD_CLOCK_MODEL
Line 3026: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.stdClockModelElement[%d].stanClockAF0 = %d
Line 3027: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.stdClockModelElement[%d].stanClockAF1 = %d
Line 3028: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.stdClockModelElement[%d].stanClockAF2 = %d
Line 3029: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.stdClockModelElement[%d].stanClockTgd = %d
Line 3030: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.stdClockModelElement[%d].stanClockToc = %d
Line 3031: lcsm_assist->navModel.gnssSatelliteList[%d].gnssClockModel.u.stdClockModelElement[%d].stanModelID = %d
Line 3043: NAV_MODEL_NAV_KEPLERIAN_SET
Line 3068: NAV_MODEL_CNAV_KEPLERIAN_SET
Line 3094: NAV_MODEL_GLONASS_ECEF
Line 3116: NAV_MODEL_KEPLERIAN_SET
Line 3159: Reference Time Present, tow_assist_countt %d 
Line 3173: lcsm_FillRrcAssistanceDataReferenceTime() - MALLOC FAIL!!!
Line 3230: Sat%d: Sat_ID: %d, TLM_msg: %d, Anti_Spoof: %d,AlertFlag: %d, TLM_Resv %d
Line 3233: lcsm_FillRrcAssistanceDataReferenceTime() - LBS ==> NS: LBS_NS_LCSM_ASSISTANCE_DATA
Line 3242: lcsm_FillRrcAssistanceDataReferenceTime() - MALLOC FAIL!!!
Line 3281: lcsm_FillRrcAssistanceDataReferenceTime() - LBS ==> NS: LBS_NS_LCSM_ASSISTANCE_DATA
Line 3301: lcsm_FillRrlpShapeDetails() - ShapeType = %d
Line 3308: Type of Shape: Ellipsoid point with altitude and uncertainty ellipsoid
Line 3371: Lat: %x, Long: %x, Alt: %x, SemiMajor: %d, SemiMinor: %d, UncAltitude: %d
Line 3372: OrientationCircle: %d, Confidence: %d
Line 3413: MsrPosRsp-SHAPE_TYPE_DEFAULT
Line 3526: ganssTimeModelGNSS_GNSS length = 0x%x, value = 0x%x
Line 3569: lcsm_FillRrcGanssMissingAsstData_GanssMeas() - Session_RRC for GnssMeasConf(GNSS)
Line 3573: lcsm_gnssMsg->u.GnssAssistDataType.Flag = %d
Line 3591: lcsm_FillRrcGanssMissingAsstData_GanssMeas() - Create UMTS Message Sub Block FAIL!!!
Line 3604: Asn_GanssReqGenericData_ganssId_present
Line 3606: rrc_gnss_genData->value.ganssId  = %d
Line 3616: Asn_ganssNavigationModelAdditionalData_present !!!
Line 3626: lcsm_FillRrcGanssMissingAsstData_GanssMeas() - Create UMTS Message Sub Block FAIL!!!
Line 3643: lcsm_FillRrcGanssMissingAsstData_GanssMeas() - Create UMTS Message Sub Block FAIL!!!
Line 3695: lcsm_FillRrcGanssMissingAsstData_GPSMeas() - Session_RRC for GnssMeasConf(GPS)
Line 3711: MAssisData.flag = %d
Line 3727: No of Satellites = %d, Missing Assistance Data: Flag = %d
Line 3735: lcsm_FillRrcGanssMissingAsstData_GPSMeas() - Create UMTS Message Sub Block FAIL!!!
Line 3752: lcsm_FillRrcGanssMissingAsstData_GPSMeas() - Create UMTS Message Sub Block FAIL!!!
Line 3916: lcsm_FillRrcMissingAsstData() - Session_RRCfor lcsm_MsrPosRsp(GPS)
Line 3935: lcsm_FillRrcMissingAsstData() - No of Satellites = %d, Missing Assistance Data: Flag = %d
Line 3943: lcsm_FillRrcMissingAsstData() - Create UMTS Message Sub Block FAIL!!!
Line 3961: lcsm_FillRrcMissingAsstData() - Create UMTS Message Sub Block FAIL!!!
