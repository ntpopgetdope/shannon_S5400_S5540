Line 2179: [HISPD] Buffer_Check: Buffer check FAIL !!! cnt: %d
Line 1391: [HISPD] Debug_Log: TICKGEN_TX0~3_MAIN_CTL [0x%X / 0x%X / 0x%X / 0x%X]
Line 1396: [HISPD] Debug_Log: BLK_EN[0x%X] MASK_ENABLE 0~4 [0x%X / 0x%X / 0x%X / 0x%X / 0x%X]
Line 1402: [HISPD] Debug_Log: MASK_ENABLE 5~11 [0x%X / 0x%X / 0x%X / 0x%X / 0x%X / 0x%X / 0x%X]
Line 1407: [HISPD] Debug_Log: MASK_MON 0~5 [0x%X / 0x%X / 0x%X / 0x%X / 0x%X / 0x%X]
Line 1415: [HISPD] Debug_Log: REQ_STATUS[0x%X / 0x%X / 0x%X] SELECT_STATUS[0x%X / 0x%X / 0x%X]
Line 1418: [HISPD] Debug_Log: ARB_ENABLE 0~2 [0x%X / 0x%X / 0x%X]
Line 1426: [HISPD] Debug_Log: FORMATGEN => CTRL[0x%X] WR[0x%X] RD[0x%X] CLK_RATE[0x%X] SIG_CTRL[0x%X] MASK[0x%X]
Line 1433: [HISPD] Debug_Log: FORMATGEN => READ0_DATA_DATA[0x%X] READ0_DATA_FRAME[0x%X] SW_CLK_ON0[0x%X] DYN_CLK_ON_EN0[0x%X] SW_RESETN0[0x%X]
Line 1439: [HISPD] Debug_Log: FORMATGEN => BOOT_MODE_EN[0x%X] RESPONSE[0x%X] FORMATGEN_MON[0x%X] SWx_DONE[0x%X]
Line 1442: [HISPD] Debug_Log: CP_PMU_SFR [0x%X]
Line 1449: [HISPD] Debug_Log: FORMATGEN => Speedy_Access_Num Core0[%d] Core1[%d] Core2[%d] Core3[%d] Core4[%d] Core5[%d] Core6[%d] Core7[%d]
Line 774: [HISPD] Clear_TrigMask and FORMATGEN_MASK
Line 752: [HISPD] HALHISPD_Set_Initialization_Flag set[%d]
Line 816: [HISPD] Initialization [START] skip[%d]
Line 871: [HISPD] Init gpio_mcw_gpmcwf1hs_drv init fail mcw_retention(0x%x)
Line 881: [HISPD] Init hispeedy clock_ds[0x%x] data_ds[0x%x]
Line 918: [HISPD] Initialization [END]
Line 1979: [HISPD] MEM_Clear Time out : FR1_HISPD_BLK_EN[0x%x] MEM_INIT_CLR_MODE_EN[0x%x] MEM_INIT_CLR_START[0x%x] SW_CLK_ON0[0x%x]
Line 1988: [HISPD] MEM_Clear: done! cnt[%d]
Line 660: [HISPD] Init : Rewrite RFD_SPEEDY_CONF_DATA_VAL value[0x%x]
Line 669: [HISPD] Init : Rewrite RFD_PCLK_CNT_CTRL value[0x%x]
Line 681: [HISPD] Init: Abnormal HI_SPEEDY DATA VALUE!!
Line 688: [HISPD] Init : Rewrite RFD_SPEEDY_APB_TO value[0x%x]
Line 694: [HISPD] Init : Rewrite RFD_SYS_APB_ASYNC_BDG_CFG value[0x%x]
Line 632: [HISPD] HALHISPD_SPD_Reset Dump only TXCO Clock EN Done
Line 649: [HISPD] HALHISPD_SPD_Reset Done
Line 610: [HISPD][Warning] HALHISPD_Rfd_Dump_Info: Start rfd dump
Line 616: [HISPD] Analog Dump: CHIP_ID[0x%x] PLL_TOP1(0x1A)[0x%08X] CLKREF4(0x5C3)[0x%08X] CHIP_ID[0x%x]
Line 620: [HISPD][Warning] HALHISPD_Rfd_Dump_Info: End rfd dump
Line 939: [HISPD] HALHISPD_Backup_Enable_Mask [Done]
Line 947: [HISPD] Deinitialization [START]
Line 968: [HISPD] Deinitialization [END]
Line 589: [HISPD] FormatgenMask is_mask[%d]
Line 997: [HISPD] Set_Priority init : done SET[%d]
Line 1050: [HISPD] Set_RAT: rat(%d)
Line 1125: [HISPD] Set_Mask invalid index : index[%d] enable_mask_bit[0x%x] mask_reg [%d]
Line 1321: [HISPD] Set_TxMask: rat[%d] tx_num[%d] is_disable[%d] set_mask_value[0x%08X / 0x%08X]
Line 1337: [HISPD] Set_QS_Mask invalid cc[%d]
Line 1349: [HISPD] Set_QS_Mask: cc[%d] QS_Word[%d] enable[%d]
Line 1367: [HISPD] Hold: hold[%d] ARB ENABLE 0/1/2 [0x%08X / 0x%08X/ 0x%08X]
Line 1507: [HISPD] SW_Write_One: address error !! 0x%X
Line 1561: [HISPD] SW_Write: SW WR READY FAIL !!! SwChNum: %d, step: %d cnt: %d, wr_status:%d
Line 1476: [HISPD][WARNING] %s: Wrong %s(%d)
Line 1478: [HISPD][WARNING] %s: Wrong %s(%d)
Line 1480: [HISPD][WARNING] %s: Wrong %s(%d)
Line 1630: [HISPD] SW_Read: SwChNum[%d], [addr: 0x%X] : READ0 DONE FAIL !!! step: %d cnt: %d, rd_status:%d
Line 1657: [HISPD] SW_Read: SwChNum[%d], [addr: 0x%X] : read wait time out
Line 1691: addr: [0x%x] data: [0x%x] READ ERROR!! count[%d]
Line 1720: addr: [0x%x] HI_SPEEDY_TIME_OUT
Line 2133: [HISPD] CRASH! : swRead_dump CNT reached MAX number !!
Line 2150: [HISPD] RFIF_HI_SPEEDY_SW_Read_Print_Error_Dump INVALID DUMP COUNT [%d]
Line 2154: [HISPD] RFIF_HI_SPEEDY_SW_Read_Print_Error_Dump START! [LATEST ~ OLDEST]
Line 2165: [HISPD] RFIF_HI_SPEEDY_SW_Read_Print_Error_Dump : addr[0x%x] error_type[%d] error_time[%d]
Line 1733: [HISPD] Buffer_Write: nBuffer[%d] of spi_cnt exceeded the limit !!!!!!!
Line 1760: [HISPD] Flush_Write: nbuffer[%d] long_delay[%d] duration_time[%d]
Line 1803: [HISPD] Flush_Write: nbuffer[%d], start[%d] stop[%d] size[%d]
Line 2016: [HISPD] MEM_Write: Out of range!! [%d < %d < %d]
Line 2032: [HSPD_DEBUG] RFIF_HI_SPEEDY_MEM_Write: [RFD_SYS] mem[%d] 0x%X(0x%X) = 0x%X SwChNum = %d
Line 2037: [HSPD_DEBUG] RFIF_HI_SPEEDY_MEM_Write: [RFD_MCMU] mem[%d] 0x%X(0x%X) = 0x%X SwChNum = %d
Line 2049: [HSPD_DEBUG] RFIF_HI_SPEEDY_MEM_Write: [RFD_DIF] mem[%d] 0x%X(0x%X) = 0x%X SwChNum = %d
Line 2062: [HISPD] MEM_Read: Out of range!! [%d < %d < %d]
Line 490: [HISPD] SetRfQuickSleepCmd: not support !!! rf_path(%d)
Line 536: [HISPD] SetRfQuickSleepCmd: rat(%d) rf_path (%d) - 4rx (%d) rfd_onoff(0x%X)
Line 546: [HISPD] SetRfQuickSleepCmd: rf(%d), on_addr(%d, %d), rfic_on_cmd(0x%X:0x%X, 0x%X:0x%X) 
Line 552: [HISPD] SetRfQuickSleepCmd: rf(%d), off_addr(%d, %d), rfic_off_cmd(0x%X:0x%X, 0x%X:0x%X)
Line 561: [HISPD] ClearRfQuickSleepCmd: not support !!! rf_path(%d)
Line 579: [HISPD] ClearRfQuickSleepCmd: rf path(%d) on_addr(%d) off_addr(%d)
