Line 44: [RF MODEM] DUMP (%s) ADDR 0x%x DATA 0x%x
Line 51: [RF MODEM] DUMP >>> START
Line 78: [RF MODEM] DUMP >>> END
Line 146: [RF MODEM] RF_Modem_MIPI_Get_Src_Size: invalid index !! (%d / max %d)
Line 151: [RF MODEM] RF_Modem_MIPI_Get_Src_Size: invalid size !! source %d size %d
Line 167: [RF MODEM] RF_Modem_MIPI_Get_Mem_Wr_Base_Addr: error invalid MEM_WR_NUM (%d)
Line 370: [RF MODEM] RF_Modem_MIPI_Block_TX_CTL_Arbit : invalid! mipi_path[%d] sel[%d]
Line 379: [RF MODEM] RF_Modem_MIPI_Block_TX_CTL_Arbit: mipi_path[%d] sel[%d] block[%d] TX_CTL_ARBIT_SEL0[0x%X] TX_CTL_ARBIT_SEL1[0x%X] 
Line 706: [RF MODEM] RF_Modem_MIPI_Init_Config: done, is_gap(%d)
Line 725: [RF MODEM] RF_Modem_GpRFO_Init_Config: done, is_gap(%d)
Line 760: [RF MODEM] RF_Modem_MIPI_Init_GSM_Config: gprfo_type:0x%x, mipi_type:0x%x done
Line 785: [RF MODEM] RF_Modem_MIPI_Set_TickGen: is_2g[%d]
Line 855: [RF MODEM] RF_Modem_MIPI_Write_MemWr: invalid write size (%d)
Line 879: [RF MODEM] RF_Modem_MIPI_Write_MemWr: FAIL !! mem_wr_rd_state(0x%x) mipi_path(%d) loop(%d) size(%d) mem_wr_idx(%d) MEM_WR_BASE_ADDR(0x%x)
Line 909: [RF MODEM] RF_Modem_MIPI_WriteSW_Trigger: invalid write size (%d)
Line 977: [RF MODEM] RF_Modem_MIPI_Read: FAIL COUNT OVER RETURN [%d]
Line 983: [RF MODEM] RF_Modem_MIPI_Read: invalid mipi_path [%d] support max mipi [%d]
Line 1013: [RF MODEM] RF_Modem_MIPI_Read: FAIL !! mipi_path(%d) SW_CTL_ARBITx_SW3_READ_RD(0x%x) SW_RW_BUFFER_FLG_READ_RD(0x%x)
Line 1036: [RF MODEM] RF_Modem_MIPI_Read: word index mismatch! expected[%d] -> result[%d]
Line 1037: [RF MODEM] RF_Modem_MIPI_Read: mipi_path[%d] mipi_data[0x%x] word_idx[%d] register_data[0x%x]
Line 1041: [RF MODEM] RF_Modem_MIPI_Read: mipi_path[%d] mipi_data[0x%x] word_idx[%d] register_data[0x%x]
Line 1095: [RF Modem] RF_Modem_MIPI_Get_TX_CTL_Mem_Info: Invalid RAT %s
Line 1153: [RF MODEM] RF_Modem_MIPI_Set_LNA_FEMSIF: invalid rat %s
Line 1158: [RF MODEM] RF_Modem_MIPI_Set_LNA_FEMSIF: invalid mipi_path[%d] cc[%d]
Line 1257: [RF MODEM] RF_Modem_MIPI_Set_LNA_FEMSIF: modem_cc[%d] pdrx[%d] mipi_path[%d] path_sel0[0x%x] path_sel1[0x%x] full_rx_gain[0x%x]
Line 1305: [RF MODEM] RF_Modem_MIPI_Disable_LNA_FEMSIF: %s %s pdrx[%d] FULL_RX_GAIN_EN[0x%x] FULL_QS_ON_EN[0x%x] PATH_SEL0[0x%x] PATH_SEL1[0x%x]
Line 1354: [RF MODEM] RF_Modem_MIPI_Init_LNA_Dynamic_Mode: %s modem_cc[%d] SOURCE_CC_LATCH[0x%x] SOURCE_TRX_SW_EN[0x%x] FULL_CC_LATCH_EN[0x%x] FULL_RX_GAIN_EN[0x%x] FULL_QS_ON_EN[0x%x]
Line 1389: [RF Modem] RF_Modem_MIPI_Set_LNA_QuickSleep: %s %s rx_bit_index[%d] >>> %s rf_path_set_fail[%d]
Line 1438: [RF MODEM] RF_Modem_MIPI_Mem_Read_Access: data size overflow!! %d
Line 1460: [RF MODEM] RF_Modem_MIPI_Mem_Write_Access: data size overflow!! %d
Line 1485: [RF MODEM] RF_Modem_MIPI_Set_RFFE_onTickGen: invalid tx_ctrl_source_index[%d]
Line 1493: [RF MODEM] RF_Modem_MIPI_Set_RFFE_onTickGen: invalid mipi path %d
Line 1506: [RF MODEM] RF_Modem_MIPI_Set_RFFE_onTickGen: mipi_path = %d, ARBITx_SEL0_CTL0 = 0x%x, size_n = %d
Line 1513: [RF MODEM] RF_Modem_MIPI_Set_RFFE_offTickGen: invalid mipi path %d
Line 1525: [RF MODEM] RF_Modem_MIPI_Set_RFFE_offTickGen: mipi_path = %d, ARBITx_SEL0_CTL0 = 0x%x
Line 1536: [RF MODEM] RF_Modem_MIPI_Set_3G_RFFE_RACH_Cfg: invalid mipi path %d
Line 1561: 3G_RACH_Cfg : mem_addr_offs = %d, data_rd[%d] = 0x%x
Line 1566: 3G_RACH_Cfg : mem_addr_offs_off = %d, data_rd[%d] = 0x%x
Line 1587: [RF MODEM] RF_Modem_GpRFO_Set: Wrong GpRFO(%d)
Line 1597: [RF MODEM] RF_Modem_GpRFO_Set: GpRFO[%d] value[%d] reg[0x%x]
Line 1606: [RF MODEM] RF_Modem_GpRFO_Set_Mode: invalid parameter, index(%d) mode(%d)
Line 1616: [RF MODEM] RF_Modem_GpRFO_Set_Mode: GpRFO[%d] mode[%d] reg[0x%x]
Line 1634: [RF MODEM] RF_Modem_GpRFO_Set_LNA_QuickSleep: not support gpio_no(%d)
Line 1646: [RF MODEM] RF_Modem_GpRFO_Set_LNA_QuickSleep: modem_cc[%d] gprfo_no[%d] enable[%d] qs_path_onoff[%d] reg[0x%x]
Line 1656: [RF MODEM] RF_Modem_GpRFO_Set_LNA_Reg: not support gpio_no(%d)
Line 1678: [RF MODEM] RF_Modem_GpRFO_Set_LNA_Reg: modem_cc[%d] gpio_no[%d] control_mode[%d] reg[0x%x]
Line 234: [RF MODEM] RF_Modem_MIPI_Set_Clock: done
Line 256: [RF MODEM] RF_Modem_MIPI_Clear_FEMSIF_Memory: MEM_STATE_RD FAIL
Line 273: [RF MODEM] RF_Modem_MIPI_Clear_FEMSIF_Memory: done! DATA0[0x%x] DATA1[0x%x] DATA2[0x%x] DATA3[0x%x] DATA4[0x%x] DATA5[0x%x]
Line 275: [RF MODEM] RF_Modem_MIPI_Clear_FEMSIF_Memory: done! DATA6[0x%x] DATA7[0x%x] DATA8[0x%x] DATA9[0x%x] ARBITER_CTL_RX_CTL_RD[0x%x]
Line 526: [RF MODEM] RF_Modem_MIPI_Set_Arbit_Config: done
Line 319: [RF MODEM] RF_Modem_MIPI_Set_TX_CTL_Arbit: invalid! mipi_path[%d] sel[%d]
Line 327: [RF MODEM] RF_Modem_MIPI_Set_TX_CTL_Arbit: invalid tx_ctrl_source_index[%d]
Line 552: [RF MODEM] RF_Modem_MIPI_Set_Core_Priority: done, tx(%d)/rx(%d)
Line 593: [RF MODEM] RF_Modem_MIPI_Init_Pad_Ctrl: MIPI_CH_%d dosen't need to set
Line 626: [RF MODEM] RF_Modem_MIPI_Init_Pad_Ctrl: MIPI_CH_%d (%s) gpio_mode[%d] mipi_ds[index:%d / %s] (%s, %s)
Line 629: [RF MODEM] RF_Modem_MIPI_Init_Pad_Ctrl: done
Line 812: [RF MODEM] RF_Modem_MIPI_Write_SW_Group3: FAIL !! buffer_check(0x%x) full_buffer_check(0x%x) mipi_path(%d)
Line 830: [RF MODEM] RF_Modem_MIPI_Write_SW_Group3: FAIL !! buffer_check(0x%x) full_buffer_check(0x%x) mipi_path(%d)
Line 89: [RF MODEM] RF_Modem_MIPI_Get_Mem_Map_Addr: invalid source index %d
Line 97: [RF MODEM] RF_Modem_MIPI_Get_Mem_Map_Addr: invalid memory point %d / max(%d) (src: %d)
Line 304: [RF MODEM] RF_Modem_MIPI_Get_TX_CTL_Source_Index: invalid! mipi_path[%d] sel[%d]
