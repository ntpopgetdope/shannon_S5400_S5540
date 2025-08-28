Line 460: NBHAL_InitRfDb
Line 479: HAL_InitRFCommDb
Line 514: The default RF band class is set to %d
Line 542: [RFAPI_FindCurrentRFBandIndex] This model does not support RF band #%d
Line 568: RF Band (%d, %d) is not supported.
Line 584: Current RF Band : %d, Registry Index : %d
Line 710: RFAPI_CalculateDLCarrierFrequency: Invalid DL_EARFCN(0x%X)!!!
Line 732: RFAPI_CalculateDLCarrierFrequency: BAND(%d),DL_FREQ(%d),DL_EARFCN(%d)
Line 740: RFAPI_CalculateDLCarrierFrequency: NOT Supported DL_EARFCN(%d)!!!
Line 796: RFAPI_CalculateULFrequency: BAND(%d),DL_FREQ(%d),UL_FREQ(%d)
Line 801: RFAPI_CalculateULFrequency: BAND(%d),DL_FREQ(%d),UL_FREQ(%d)
Line 805: RFAPI_CalculateULFrequency: NOT Supported BAND(%d),DL_FREQ(%d),UL_FREQ(%d)!!!
Line 852: RFAPI_CalculateDefaultULFrequency(with dl_freq: %d)
Line 906: RFAPI_CalculateULCarrierFrequency: BAND(%d),UL_FREQ(%d),UL_EARFCN(%d)
Line 918: RFAPI_CalculateULCarrierFrequency: BAND(%d),UL_FREQ(%d),UL_EARFCN(%d)
Line 926: RFAPI_CalculateULCarrierFrequency: NOT Supported UL_EARFCN(%d)!!!
Line 984: RFAPI_CalculateULEarfcnScale: NOT Supported BAND(%d),UL_FREQ(%d kHz)!!!
Line 998: RFAPI_CalculateULEarfcnScale: NOT Supported BAND(%d),UL_FREQ(%d kHz)!!!
Line 1120: Current RF Band #%d does not exist in registry!!!
Line 1124: Now reading cal values from NVRAM (RF Band: %d, Reg Index: %d)
Line 1172: [SC] Restore dmxerfreq value(cc: %d)
Line 1284: [RF] SetRXUpdateModeOn(CC%d): rf(%d), dcr(%d)
Line 1323: [RF] SetRXUpdateModeOff(CC%d): rf(%d), dcr(%d), slo(%d)
Line 2004: NBRFAPI_InitRF starts!!! (freq = %d)
Line 2105: NBRFAPI_InitRF is finished!!!
Line 2141: RFAPI_InitFromShade starts!!!
Line 2264: RFAPI_InitFromShade is finished!!! (gNBRF_loaded_RF_band:%d, rf_path:%d, dl_freq:%d)
Line 2325: RFAPI_InitFromSleepIdle UE stat[%d] starts!!!
Line 2577: RFAPI_CalculateULBand: i = %d (%d %d)
Line 2581: RFAPI_CalculateULBand: UL_EARFCN(%d),BAND(%d)
Line 2596: RFAPI_CalculateULBand: NOT Supported UL_EARFCN %d!!!
Line 2644: RFAPI_CalculateDLBand: DL_EARFCN(%d),BAND(%d)
Line 2655: RFAPI_CalculateDLBand: NOT Supported DL_EARFCN %d, DL_BAND(%d)!!!
Line 2700: RFAPI_ConvertDlFreqBandToEarfcn: NOT Supported BAND(%d),DL_FREQ(%d kHz)!!!
Line 2714: RFAPI_ConvertDlFreqBandToEarfcn: BAND(%d),DL_FREQ(%d kHz),DL_EARFCN(%d)
Line 2718: RFAPI_ConvertDlFreqBandToEarfcn: NOT Supported BAND(%d),DL_FREQ(%d kHz)!!!
Line 2741: RFAPI_CheckULEarfcn: UL_EARFCN(MAX_EARFCN:0x%X) --> Need to refer to DL_EARFCN(%d)
Line 2761: RFAPI_CheckULEarfcn: BAND(%d), UL_EARFCN(%d)
Line 2766: RFAPI_CheckULEarfcn: NOT Supported UL_EARFCN(%d)!!!
Line 2788: [RF] >>>>>PowerDownRxPath(CC%d): rf(%d), Rxpath(%d)
Line 2823: [RF] >>>>>PowerOnRxPath(CC%d): rf(%d), Rxpath(%d)
Line 2827: [RF] Failed to get RF grant. Need to check!!!
Line 2941: [RF] GetCalRsrpOffset(CC%d): rf(%d), band(%d), band_idx(%d) earfcn(%d), agc_gain(%d, %d)
Line 2943: [RF] RSSI Offset(%d, %d), RSRP Freq Offset(%d, %d)
Line 2964: [RF] WriteTxGainTableToDspSHM(RF%d): gDrx_ActiveRat(%d)
Line 3252: RFAPI_InitForRFBandSwitch(%d) starts!!! rf_path=%d dac_path=%d
Line 3334: RFAPI_InitForRFBandSwitch is finished!!! (gNBRF_loaded_RF_band:%d, freq:%d)
Line 3365: RFAPI_InitForRFBandSwitch(CC%d) is finished!!! (rf_band:%d, freq:%d)
Line 3396: [SADS] Skip RFAPI_SetChannelFrequency >> trx_mode(%d), ChannelFreq(%d), cc(%d)
Line 3404: [RF] SetChannelFrequency RX(%d)
Line 3410: [RF] SetChannelFrequency TX(%d)
Line 3427: [RF] SetChannelFrequency RX(%d)
Line 3432: [RF] SetChannelFrequency TX(%d)
Line 3471: [RF] CheckRFBandSwitch: RF Band Switch from [%d] to [%d]
Line 3495: [RF] CheckRFBandSwitch: This target is not calibrated for requested band [%d].
Line 3565: [RF] Failed to get RF grant. Need to check!!!
Line 3650: [OL-AIT] NBRFAPI_ControlOpenLoopAit_UpdateAntIndex: Tx(antIndex:%d)
Line 3658: [OL-AIT] NBRFAPI_ControlOpenLoopAit_UpdateAntIndex: Rx(antIndex:%d)
Line 3671: [OL-AIT] NBRFAPI_ControlOpenLoopAit_UpdateAntIndex: Tx(antIndex:%d) Rx(antIndex:%d)
Line 3699: [OL-AIT] NBRFAPI_ControlOpenLoopAit(writeDirection: %d, UeState: %d)
Line 3708: [OL-AIT] NBRFAPI_ControlOpenLoopAit: NonSignaling Mode(%d) Skip
Line 3715: [OL-AIT] NBRFAPI_ControlOpenLoopAit: gRF_OlaitState(%d) Skip
Line 3747: [OL-AIT] NBRFAPI_ControlOpenLoopAit: hsi(NV: %d input: %d) 
Line 3779: [OL-AIT] NBRFAPI_ControlOpenLoopAit: RF band(%d) Ul_Earfcn(%d) ul_freq(%d) hsi(%d) asc([Tx: %d Rx: %d])
Line 3839: [OL-AIT] NBRFAPI_ControlOpenLoopAit_Default: OlAitState(%d) Skip
Line 3873: [OL-AIT] NBRFAPI_ControlOpenLoopAit_Default: RF band(%d) Ul_Earfcn(%d) ul_freq(%d) hsi(%d) asc([Tx: %d Rx: %d])
Line 3901: [NB_HAL] ProcAitUpdateStartCnf
Line 3957: [AS][ST%d] NBRFAPI_ChangeAntennaSwitch (writeDirection:%d Band:%d selectedRxAnt:%d selectedTxAnt:%d)
Line 4011: [MTM] NBMTMCOMM_LteMtmRfPathSet (RF%d -> RF%d)
Line 4028: [MTM] MTMCOMM_LteMtmRfPathSet (RF path(RF%d) is same and it doesn't need to be changed)
Line 4036: [MTM] Check sync status
Line 4064: MTMCOMM_LteMtmTcxoSet: MTM_CC0 dl_freq is 0. don't update DSM/Dmixer
Line 4161: [RF] >>>>>Init4RxPath(CC%d): Invalid RF path (%d)
Line 4209: RFAPI_Check4RxBand: DCR Path is INVALID!!! (dcr_path:%d)
Line 4320: [RF] Invalid RF path !!! Need to check!!!
Line 4323: [RF] RFAPI_FindRfPath(mode=%d(%s))=%02d:finish)
Line 4352: [RF] >>>>>PowerOn4RxPath(CC%d): div(%d), Invalid RF path (%d, %d)
Line 4356: [RF] >>>>>PowerOn4RxPath(CC%d): div(%d), rf(%d, %d), rx_mode(%d)
Line 4360: [RF] Failed to get RF grant. Need to check!!!
