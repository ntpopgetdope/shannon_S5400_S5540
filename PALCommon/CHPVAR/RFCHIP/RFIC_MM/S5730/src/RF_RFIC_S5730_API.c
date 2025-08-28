Line 247: RF_RFIC_MM_CTR_StateSwap || TRXMode%d H %d -> %d | V %d -> %d!!
Line 258: RF_RFIC_MM_CTR_Init Preset Start
Line 261: RF_RFIC_MM_CTR_Init Preset Finish
Line 279: RF_RFIC_MM_CTR_Init ret=%d
Line 282: RF_RFIC_MM_CTR_Init || already done!!
Line 309: RF_RFIC_MM_CTR_SleepWakeUp already done
Line 322: RF_RFIC_MM_CTR_SleepWakeUp can't off
Line 337: RF_RFIC_MM_CTR_SleepWakeUp || En : %d [0x%x err]
Line 359: RF_RFIC_MM_CTR_SetBias already done
Line 364: RF_RFIC_MM_CTR_SetBias RFM init start
Line 371: RF_RFIC_MM_CTR_SetBias RFM init already done
Line 375: RF_RFIC_MM_CTR_SetBias already done
Line 388: RF_RFIC_MM_CTR_SetBias can't off
Line 391: RF_RFIC_MM_CTR_SetBias can't off
Line 396: RF_RFIC_MM_CTR_SetBias || En : %d IF Port 0x%x -> 0x%x alloff %d [0x%x err]
Line 427: RF_RFIC_MM_CTR_SetPllInc S5730Ver=0x%x, SetPllFreq=%d, targetFreq=%d tempGap(ppm)=%d
Line 456: RF_RFIC_MM_CTR_SetPll already done
Line 472: RF_RFIC_MM_CTR_SetPll can't off
Line 476: RF_RFIC_MM_CTR_SetPll || En : %d IF Port 0x%x -> 0x%x Freq : %d KHz setPll %d [0x%x err]
Line 478: RF_RFIC_MM_CTR_SetPll || Freq2=%d KHz, pllMode=%d, vcoMode=%d
Line 493: RF_RFIC_MM_CTR_CalDtc [0x%x err]
Line 508: RF_RFIC_MM_CTR_CalRxdc [0x%x err]
Line 559: RF_RFIC_MM_CTR_SetRef already done
Line 593: RF_RFIC_MM_CTR_SetRef || En : %d isModuleSw %d IF Port 0x%x phaInterface 0x%x alloff %d [0x%x err]
Line 633: %s || input IfPort 0x%x allready TxSet 0x%x
Line 640: %s moduleSw%d || input IfPort 0x%x -> 0x%x || TRX_On 0x%x SameState 0x%x failIfPort 0x%x, path:%d
Line 707: %s || En : %d IF Port 0x%x -> 0x%x allOnOff %d [0x%x err], cc=%d
Line 739: RF_RFIC_MM_CTR_SetLoopback || rxPort 0x%x txPort 0x%x
Line 891: RF_RFIC_MM_CTR_SetTxDCCalMode || En : %d abbPath %d startEnd %d [0x%x err] isTxDc %d 
Line 921: %s fail status:%d
Line 951: RF_RFIC_MM_CTR_GetRxPwrOffset
Line 960: RF_RFIC_MM_CTR_GetRxGain
Line 1096: %s RF_INVALID_PARAM_ERR : NULL input
Line 1120: RF_RFIC_MM_CTR_SetLatch En: %d
Line 1131: RF_RFIC_MM_CTR_GetLatch En: %d, Word: 0x%x
Line 1142: RF_RFIC_MM_CTR_GetLatchUpdate isTx: %d, Word: 0x%x
Line 1151: %s not used anymore
Line 1177: RF_RFIC_MM_CTR_SetLoopback || rxPort 0x%x txPort 0x%x
Line 1195: RF_RFIC_MM_CTR_MCUWaitHandshake Preset start
Line 1197: RF_RFIC_MM_CTR_MCUWaitHandshake Preset finish
Line 1228: RF_RFIC_MM_CTR_MCUWaitHandshake Download & Handshake Already Done
Line 1246: RF_RFIC_MM_CTR_MCU_Tx_DC_IQ_Cal complete
Line 1253: %s complete
Line 1320: RF_RFIC_MM_CTR_SetupSpeedy will skip, module:S%d, MODULE_SPEEDY_TYPE : %d
Line 1326: RF_RFIC_MM_CTR_SetupSpeedy already done, status 0x%x sceanario 0x%x.
Line 1352: RF_RFIC_MM_CTR_GetIQCALNVidx was called on P24
Line 1356: RF_RFIC_MM_CTR_GetIQCALNVidx
Line 1365: RF_RFIC_MM_CTR_WriteIQCALNVtoSRAM was called on P24
Line 1369: RF_RFIC_MM_CTR_WriteIQCALNVtoSRAM
Line 1377: RF_RFIC_MM_CTR_ReadIQCALNVfromSRAM was called on P24
Line 1381: RF_RFIC_MM_CTR_ReadIQCALNVfromSRAM
Line 1394: %s started
Line 1399: %s complete
Line 1410: %s complete
Line 1417: %s started
Line 1419: %s complete
Line 111: RF_RFIC_S5730_CTR_SetAbbState || swap Done port H 0x%x -> 0x%x 0x%x V 0x%x -> 0x%x 0x%x
Line 116: RF_RFIC_S5730_CTR_SetAbbState || swap fail origin port is mismatched. H 0x%x/0x%x V 0x%x/0x%x
Line 140: RF_RFIC_S5730_CTR_SetAbbState || all abb set %s
Line 153: RF_RFIC_S5730_CTR_SetAbbState || Ready!! iLo %d iVHpath %d AbbPathState Rx: %s Tx: %s
Line 158: RF_RFIC_S5730_CTR_SetAbbState || Can't find ready state
Line 160: RF_RFIC_S5730_CTR_SetAbbState iLo[%d] H Rx-%s Tx-%s V Rx-%s abb1 Tx-%s
Line 184: RF_RFIC_S5730_CTR_SetAbbState || iLo[%d] iVHpath %d, isTx %d, ifPort is mismatched 0x%x / 0x%x
Line 203: RF_RFIC_S5730_CTR_SetAbbState || iLo[%d] iVHpath %d isTx %d StateErr current : %s expect : %s
Line 218: RF_RFIC_S5730_CTR_SetAbbState iLo[%d] iVHpath %d isTx %d  port %d state %s
Line 222: RF_RFIC_S5730_CTR_SetAbbState iLo[%d] H Rx-%s Tx-%s V Rx-%s abb1 Tx-%s
Line 61: RF_RFIC_S5730_CTR_GetPath || wrong ifPort input 0x%x H(0x%x) / V(0x%x) path is duplicated
Line 77: RF_RFIC_S5730_CTR_GetPath || wrong ifPort input 0x%x H(0x%x) + V(0x%x) are not support combination
Line 293: [RF MODEM] RFMInitRequired : Update Input(%d), Target(%d)
Line 520: [RF MODEM] PSpeedySetupStatus Clear : 0x%x -> 0x%x
Line 525: [RF MODEM] PSpeedySetupStatus : status 0x%x Input 0x%x
Line 530: [RF MODEM] PSpeedySetupStatus : %d
