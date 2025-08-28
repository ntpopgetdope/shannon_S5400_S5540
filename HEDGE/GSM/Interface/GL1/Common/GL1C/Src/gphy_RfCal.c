Line 205: In l1c_rfcal_initialise - L1c state: %s
Line 207: [HWSORT] TESTMODE HWSORT = %d
Line 227: [HWSORT] In tmpRfint : %d
Line 231: [HWSORT] In tmpRfint HWsort
Line 236: [HWSORT] In tmpRfint SWsort
Line 260: [2G_RSSI_SCAN] band from NS (%d)
Line 284: [2G_RSSI_SCAN] Unexpected band from NS. Set to Default(EGSM)
Line 314: l1c_rfcal_initialise
Line 350: Requesting SIM ID wrong. Check!
Line 370: START : l1c_testmode_initialise
Line 391: [HWSORT] In tmpRfint HWsort
Line 396: [HWSORT] In tmpRfint SWsort
Line 444: l1c_testmode_initialise
Line 540: l1c_txdc_self_auto_cal
Line 735: l1c_afc_auto_cal
Line 850: l1c_rf_cal_str (%d)
Line 912: l1c_rf_cal_str: tdma_fn(%d), p_l1_passive_chn_data(%d), p_l1_active_chn_data(%d)
Line 934: l1c_testmode_str
Line 1025: L1C_rx_auto_cal
Line 1073: RxBand(%d), RxMod(%d), RxArfcn(%d), RSSI(%d)
Line 1096: RFCAL_AT : RfCalRpower(%d)
Line 1166: l1c_tx_auto_cal
Line 1244: l1c_rfcal_pam_gain_cal: PAM_gain_mode=%d 
Line 1258: l1c_rfcal_TX_SA_PAM_gain_cal: RfcalSACode(%d)
Line 1284: l1c_rfcal_tx_saallcode: RfcalSACode(%d)
Line 1295: l1c_rfcal_tx_allcorrect: RfcalSAArfcn(%d)
Line 1305: l1c_rfcal_tx_IntPD_Cal: RfcalSACode(%d)
Line 1316: HANS TXPWR : POWERLEVEL(%d)
Line 1372: l1c_rfcal_end (%d)
Line 1408: l1c_rssi_testmode
Line 1412: l1c_rx_testmode
Line 1474: TESTMODE RSSI: band(%d),arfcn(%d),rssi(%d)
Line 1482: TESTMODE RX: band(%d),arfcn(%d),gain_db(%d),gain_code(%d)
Line 1545: l1c_tx_testmode
Line 1581: TESTMODE : band(%d),arfcn(%d),BurstType(%d),DataType(%d)
Line 1613: l1c_pwr_testmode
Line 1649: l1c_pwr_testmode : PowerControl(%d),BurstPower[0](%d),BurstPower[1](%d),BurstPower[2](%d),BurstPower[3](%d)
Line 1702: l1c_reset_testmode Band(%d)
Line 1741: [MTPL Test] Reset (%d)
Line 1761: l1c_test_spi_write SPIWord(0x%08X)
Line 1770: l1c_test_spi_write SPIWord(0x%08X)
Line 1791: l1c_test_spi_read: Addr(0x%04X), Data(0x%08X)
Line 1827: l1c_test_spi_path_swap=%d, testrunning=%d
Line 1840: L1cMessageManager - l1c_as_cal
Line 1849: L1cMessageManager - l1c_ait_fbrproc
Line 1887: l1c_test_LMT_GSM
Line 1919: ATI_MS_GSM_LMT_RSP
Line 1933: l1c_test_TX_PAM_GAIN_MOD
Line 1941: TX_PAM_CAL[0]:%d, TX_PAM_CAL[1]:%d, TX_PAM_CAL[2]:%d, TX_PAM_CAL[3]:%d
Line 1943: TxPamBias[0]:%d, TxPamBias[1]:%d, TxPamBias[2]:%d, TxPamBias[3]:%d
Line 1950: ATI_MS_GSM_PAM_GAIN_MOD_RSP 
Line 1964: l1c_test_TX_PAM_EXT_GAIN_MOD
Line 1979: ATI_MS_GSM_PAM_EXT_GAIN_MOD_RSP 
Line 1990: l1c_test_TX_Pwr_Gap
Line 1999: l1c_test_spi_TX_Pwr_Gap 
Line 2018: l1c_rssi_scan_testmode, Band(%d)
Line 2111: Send NS_GSM_RSSI_SCAN_RSP for error cause
Line 2125: NS_GSM_RSSI_SCAN_RSP: Requesting SIM ID wrong. Check!
Line 2144: l1c_rssi_scan_testmode_sipc
Line 2353:  ARFCN = element_p->freqOffset%d, TestmodeArfcnWrite%d 
Line 2378: l1c_find_sb_testmode
Line 2452: nSynchDoesCellExist - false
Line 2458: HW Testmode : bcch_arfcn(%d),SynchFound(%d)
Line 2511: l1c_testmode_ber_early_det_running
Line 2588: PRASRAO test ber : CS(%d), TS(%d), tch_arfcn(%d), rssi(%d), PCL(%d)
Line 2646: l1c_testmode_ber_running
Line 2720: HANS test ber : CS(%d), TS(%d), tch_arfcn(%d), rssi(%d), PCL(%d)
Line 2902: [2G_RSSI_SCAN] Invalid Band(%d)
Line 2929: [2G_RSSI_SCAN] Invalid Frequency Info: StartFreq(%d) EndFreq(%d)
Line 2943: [2G_RSSI_SCAN] SIL_SetRssiScanParam rssiScanStartArfcn=%d rssiScanEndArfcn=%d rssiScanNum=%d
Line 2957: [2G_RSSI_SCAN] SIL_SetRssiScanParam rssiScanStartArfcn=%d rssiScanEndArfcn=%d rssiScanNum=%d Offset=%d
Line 2963: [2G_RSSI_SCAN] Invalid Offset(%d)
Line 2990: [2G_RSSI_SCAN] Wrong TimeFrame %d
Line 2994: [2G_RSSI_SCAN] TimeFrame %d Requested Scan Num %d
Line 3032: [2G_RSSI_SCAN] SIL_SetRssiScanParam rssiScan3Arfcn=%d,%d,%d rssiScanNum=%d
Line 3039: [2G_RSSI_SCAN] Invalid ScanMode(%d)
Line 3048: [2G_RSSI_SCAN] Invalid Frequency
Line 3082: [2G_RSSI_SCAN] SIL_ArfcnTestmodeForRssiScan ARFCN=%d Index=%d
Line 3175: [2G_RSSI_SCAN] SIL_ArfcnTestmodeForRssiScan ARFCN=%d Index=%d sampleCounterForNextArfcn=%d
Line 3227: [2G_RSSI_SCAN]: Invalid param !!! AntennaSel(%d)
Line 3230: [2G_RSSI_SCAN]: index(%d) prxRssi(%d)->RSSI(%d) drxRssi(%d)->RSSI2(%d)
Line 3234: [2G_RSSI_SCAN]: Rssi update exceed maximum scan number(%d) : %d !!!
Line 3260: [2G_RSSI_SCAN]: Invalid param !!! AntennaSel(%d) and samplingCnt(%d) are not matched.
Line 3263: [2G_RSSI_SCAN]: index(%d) prxRssi(%d)->RSSI(%d) drxRssi(%d)->RSSI2(%d)
Line 3272: [2G_RSSI_SCAN]: New rssiScanPrxMax %d
Line 3278: [2G_RSSI_SCAN]: New rssiScanDrxMax %d
Line 3311: [2G_RSSI_SCAN]: Invalid param !!! AntennaSel(%d) and SamplingCnt(%d) are not matched.
Line 3322: [2G_RSSI_SCAN]: index(%d) prxRssi(%d)->RSSI Max(%d)Avg(%d)  drxRssi(%d)->RSSI2 Max(%d)Avg(%d)
Line 3366: [2G_RSSI_SCAN]: SIL_BandTestmodeForRssiScan band=%d -> %d
Line 3445: [2G_RSSI_SCAN] InitRssiScanInfo: cleared rssiScanPrx, rssiScanDrx
Line 3469: [2G_RSSI_SCAN] RssiScanResult[%d,%d] Index[%d] RSSI[%d] RSSI2[%d]
Line 3477: [2G_RSSI_SCAN] RssiScanResult[%d,%d] Index[%d] RSSI[%d]
Line 3485: [2G_RSSI_SCAN] RssiScanResult[%d,%d] Index[%d] RSSI2[%d]
Line 3496: [2G_RSSI_SCAN] RssiScanResult[%d~%d] Index[%d] RSSI Max[%d]Avg[%d] RSSI2 Max[%d]Avg[%d]
Line 3505: [2G_RSSI_SCAN] RssiScanResult[%d,%d] Index[%d] RSSI Max[%d]Avg[%d] RSSI2 Max[%d]Avg[%d]
Line 3514: [2G_RSSI_SCAN] RssiScanResult[%d,~%d] Index[%d] RSSI Max[%d]Avg[%d] RSSI2 Max[%d]Avg[%d]
Line 3542: [2G_RSSI_SCAN] RssiScanResult Band[0x%x] StartFreq[%d] MidFreq[%d] EndFreq[%d] ScanMode[%d] AntennaSel[%d]
Line 3559: [2G_RSSI_SCAN] MemAlloc failed !!!
Line 3569: [2G_RSSI_SCAN] RssiScanResult Band[0x%x] StartFreq[%d] EndFreq[%d] ScanMode[%d] AntennaSel[%d] samplingCnt[%d]
Line 3590: [2G_RSSI_SCAN] MemAlloc failed !!!
Line 3595: [2G_RSSI_SCAN] RssiScanResult data len:%d
Line 3619: L1cMessageManager - l1c_rfcal_running
Line 3670: SIL_RFcal_TxPwr : arfcn(%d), powerLevel(%d)	powerCode(%d)  BandIndex(%d)  pam_gainmode(%d)	modulation(%d)
Line 3743: SIL_RFcal_TxPwr = arfcn(%d)  band(%d)  modulation(%d)  powerLevel(%d)  TxPwrCode8PSK(0x%x)  
Line 3895: SIL_TestMode_Txpwr = arfcn:%d band:%d RfCalCmd:%d powerLevel:%d TxPwrCode8PSK:%d
Line 3960: ScheduleTestModeTx - %d %d %d %d
Line 3982: BurstType(%d),  txModeIs8psk(%d), oldtxModeIs8psk(%d)
Line 4001: ScheduleTestModeTx - modulation(%d), slotCount(%d), timeslotNumber(%d)
Line 4031: ScheduleTestModeTx - Tx commad(%d), slotCount(%d), timeslotNumber(%d)
Line 4032: ScheduleTestModeTx - 8psk(%d) old8psk(%d) timeslotNumber(%d) slotTransition(%d)
Line 4068: VALUE newRfOutLevel(%x)
Line 4262:  RfCalCmd:%x, txSlotInfo_p->startTxTds_p->RfCalCmd:%x
Line 4274:  timeslotNumber >= 8.  Use NULL HANDLE 

Line 4278:  RfCalCmd:%x, txSlotInfo_p->startTxTds_p->RfCalCmd:%x
Line 4297:  RfCalCmd:%x, txSlotInfo_p->startTxTds_p->RfCalCmd:%x
