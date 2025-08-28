Line 150: RF_RFIC_S5730_Set_TCXO_Clk = %d !!
Line 160: RF_RFIC_S5730_Set_IPLL_Clk = %d !!
Line 170: %s : start %d
Line 176: %s : start %d
Line 326: RF_RFIC_S5730_ABB_Get unsupported RFICAbb : %d !!
Line 342: RF_RFIC_S5730_DACGAIN_Get S5730DacGain is NULL !!
Line 372: RF_RFIC_S5730_DACGAIN_Get unsupported RFICDacGain : %d !
Line 381: RF_RFIC_S5730_RFBW_Get S5730BW is NULL !!
Line 407: RF_RFIC_S5730_RFBW_Get unsupported RFICMMBW : %d !!
Line 451: RF_RFIC_Dump_AllReg [S5730] addr 0x%x data 0x%x
Line 459: %s [S5730] addr 0x%x data 0x%x
Line 519: RF_RFIC_S5730_RXGAINTABLE_FIND wrong rfic : %d !!
Line 521: RF_RFIC_S5730_RXPWROFFSET_Get band %d ifPort %d PhaID %d PhaRev 0x%x rxGainOffset %d
Line 530: RF_RFIC_S5730_RXGAINTABLE_Get rxGainAddr/rxGainTable is NULL!!
Line 584: RF_RFIC_S5730_RXGAINTABLE_Get iRxGain=%d hspeed addr=0x%x, data=0x%x, abbPath=0x%x
Line 587: RF_RFIC_S5730_RXGAINTABLE_Get band %d ifPort %d PhaID %d PhaRev 0x%x addr 0x%x rxGain[1] 0x%x
Line 600: RF_RFIC_S5730_RXGAINTABLE_Set index is NULL!!
Line 610: RF_RFIC_S5730_RXGAINTABLE_Set [Alert] rxGainTable is NULL!!
Line 639: RF_RFIC_S5730_RXGAINTABLE_Set band %d ifPort %d addr 0x%x rxGain 0x%x, index=%d
Line 687: RF_RFIC_S5730_return_freq_index band %d target_freq %d iFreq %d
Line 701: %s TXCTRGAINCAL_ALL_GAIN_STEP_EN: %d
Line 760: %s wrong rfic : %d !!
Line 764: %s iBand %d iGainFreq = %d CtrGainTable_h TxGain [0x%x 0x%x], CtrGainTable_v TxGain [0x%x 0x%x]
Line 783: %s TXCTRGAINCAL_ALL_GAIN_STEP_EN: %d
Line 840: %s iGainTx:%d GainWord 0x%X
Line 848: %s Gain H%d 0x%X V %d 0x%X
Line 861: %s H Gainword %X %X %X %X
Line 862: %s V Gainword %X %X %X %X
Line 879: %s is NULL!!
Line 909: %s ifPort %d ctrGainAddr 0x%x 
Line 947: RF_RFIC_S5730_VGA_TXGAIN_Set wrong rfic : %d !!
Line 1033: RF_RFIC_S5730_IFNUM_Get wrong ifPort : %d !!
Line 1064: RF_RFIC_S5730_IF2ABB_Get wrong ifPort : %d !!
Line 1113: %s: Chip info EVT%x enable=%d, pllMode=%d
Line 1157: %s: Wrong bias Input  pllMode=%d
Line 1188: %s: Wrong bias Input  pllMode=%d
Line 1279: %s: CPU_STATUS: 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 1280: %s: ExitCode : 0x%x, RFM_MWPLL_CON8=0x%x, RFM_IPLL_CON0=0x%x, RFM_CMU_CLK_ON=0x%x
Line 1287: %s: ExitInfo Addr : 0x%x, MCU System Status : 0x%x
Line 1288: %s: ExitLog : 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 1289: %s: ExitLog : MCAUSE:0x%x, MEPC:0x%x, ECODE:0x%x
Line 1290: %s: ExitLog : ExitCycle:0x%x, AccessInfo:0x%x, 0x%x, 0x%x
Line 1306: %s: BuildInfo, Date %u, Version r%dp%x 
Line 1308: %s: BuildInfo, Date %u, Version r%dp%x 
Line 1317: %s[BEFORE]: CPU_STATUS: 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 1338: %s[AFTER]: CPU_STATUS: 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 1444: %s : MWPLL_STAT 0x%x
Line 1484: %s : IPLL_STAT 0x%x
Line 1578: RF_RFIC_S5730_MCUBIN_Write from S5730 MCU Header, arrayIdx:%d, startAddr:0x%x, lastAddr:0x%x, write :0x%x/0x%x, totalCnt:0x%x
Line 1580: RF_RFIC_S5730_MCUBIN_Write from S5730F MCU Header, arrayIdx:%d, startAddr:0x%x, lastAddr:0x%x, write :0x%x/0x%x, totalCnt:0x%x
Line 1600: RF_RFIC_S5730_MCUBIN_Write done
Line 1616: %s: Start [DONE:%d] enable:%d, tcxoClk:%d, reset:%d
Line 1650: %s: [RFMCU] GPIO6 interrupt enable
Line 1654: %s: is already done. [DONE:%d]
Line 1660: %s: [RFMCU] GPIO6 interrupt disable
Line 1672: %s: Finish [DONE:%d]
Line 1946: RF_RFIC_S5730_PLL_On targetFreq error : %d !!
Line 1952: RF_RFIC_S5730_PLL_On targetFreq2 error : %d !!
Line 1962: RF_RFIC_S5730_PLL_INC RF-Freq %d IF-Freq %d Lockbit %d ReadData 0x%x, tcxo=%d
Line 1967: RF_RFIC_S5730_PLL_INC 2nd RF-Freq %d IF-Freq %d Lockbit %d ReadData 0x%x 
Line 2049: RF_RFIC_S5730_PLL_On targetFreq error : %d !!
Line 2055: RF_RFIC_S5730_PLL_On targetFreq2 error : %d !!
Line 2065: RF_RFIC_S5730_PLL_Set Check PLL test : read fail !!
Line 2072: RF_RFIC_S5730_PLL_On RF-Freq %d IF-Freq %d Lock-Time %d Lockbit %d ReadData 0x%x, tcxo=%d
Line 2079: RF_RFIC_S5730_PLL_On 2nd RF-Freq %d IF-Freq %d Lock-Time %d Lockbit %d ReadData 0x%x 
Line 2103: RF_RFIC_S5730_PLL_Off 0xC9=0x%x
Line 2126: %s  MM_RX_DCOC_MODE=%d, isSkip=%d, ifPort=%d
Line 2163: %s: CAL_ID : %d, ABB_Select 0x%x IF_TO_ABB 0x%x, dcocInput:0x%x
Line 2180: %s: [PASS/FAIL:%d]Result:0x%x, ABB01:0x%x, ABB23:0x%x
Line 2187: %s fail: status:0x%x path:%d CC:%d iLo:%d ifPort:%d isModuleSw: %d isSkip:%d
Line 2190: Write Last Success ABB01:0x%x, ABB23:0x%x
Line 2221: %s: [DONE] Check addr : 0x%x value : 0x%x
Line 2224: %s: [Failed] Check addr : 0x%x value : 0x%x
Line 2255: RF_RFIC_S5730_duty_cal_done %d -> %d
Line 2259: RF_RFIC_S5730_duty_cal_done %d
Line 2322: %s: Start! ifHWPath : %d, dutyCalDone : %d, PhaID : S%d
Line 2329: %s: ifPath:%d, 0x824 : 0x%x
Line 2332: %s: ifPath:%d write calibration start
Line 2343: %s: ifPath:%d write saveResult : 0x%x, result : 0x%x, idx : %d
Line 2349: %s: ifPath:%d write calibration end
Line 2356: %s: ifPath:%d read calibration start
Line 2370: %s: ifPath:%d read calibration end
Line 2391: %s: ifPath:%d calibration end, dutyCalDone:%d
Line 2402: %s: ifPath:%d, 0x724 : 0x%x
Line 2410: %s: ifPath:%d write calibration start
Line 2421: %s: ifPath:%d write saveResult : 0x%x, result : 0x%x, idx : %d
Line 2427: %s: ifPath:%d write calibration end
Line 2434: %s: ifPath:%d read calibration start
Line 2448: %s: ifPath:%d read calibration end
Line 2470: %s: ifPath:%d calibration end, dutyCalDone:%d
Line 2474: %s: wrong input phaId:%d
Line 2477: RF_RFIC_S5730_pspeedy_duty_cal End! dutyCalDone : %d
Line 2514: RF_RFIC_S5730_PS_Flag Start : input %d [psFlag %d -> %d],Skip %d
Line 2527: RF_RFIC_S5730_REF_On Start : %d, %d
Line 2633: RF_RFIC_S5730_REF_On : Wrong Input
Line 2640: RF_RFIC_S5730_REF_On Finish
Line 2652: RF_RFIC_S5730_REF_Off Start : %d, scenario : %d
Line 2674: RF_RFIC_S5730_REF_Off Finish
Line 2996: RF_RFIC_S5730_RXPORT_Set : 0x6:0x%x, 0xF:0x%x, moduleChangeMode=0x%x
Line 3016: RF_RFIC_S5730_TXPORT_Set : ifPortState : 0x%x, enable: %d
Line 3106: RF_RFIC_S5730_RXPORT_Set : IF0 / IF1 can't support CC1
Line 3126: RF_RFIC_S5730_RXDC_ABB_Clear path=0x%x, CC=0x%x, ifPort=0x%x
Line 3228: RF_RFIC_S5730_IQMC_LOOPBACK_Set CC %d || rxPort 0x%x txPort 0x%x
Line 3249: RF_RFIC_S5730_LoPhaseShift : [%d %d %d %d]
Line 3341: RF_RFIC_S5730_TRXBW_Set : invalid RF_BW : %d
Line 3403: RF_RFIC_S5730_RXBW_Set : invalid RF_BW : %d
Line 3431: RF_RFIC_S5730_RXBW_Set : skip RF_BW2=%d
Line 3442: RF_RFIC_S5730_RXBW_Set : abbPort=%d, RF_BW=%d, RF_BW2=%d, Cap=%d, changeMode=%d
Line 3482: RF_RFIC_S5700_RXBW_Set : invalid RF_BW : %d
Line 3498: RF_RFIC_S5730_TXBW_Set : invalid ABB port
Line 3502: RF_RFIC_S5730_TXBW_Set : abbPort : %d, RF_BW: %d
Line 3519: RF_RFIC_S5730_TXCALMODE_Set : PHA S%d
Line 3541: RF_RFIC_S5730_TXCALMODE_Set : invalid ABB port
Line 3572: RF_RFIC_S5730_TRXBW_Loopback : ABB port%d
Line 3594: RF_RFIC_S5730_TRXBW_Loopback : invalid ABB port
Line 3642: RF_RFIC_S5730_TXDCDAC_Set : invalid GainDac : %d
Line 3667: RF_RFIC_S5730_TXDCDAC_Set : invalid ABB port
Line 3714: RF_RFIC_S5730_RX_Log rxGain=0x%x,0x%x mcu=0x%x,0x%x latch=0x%x,0x%x
Line 3727: %s read S5730_HSPEEDY1_TX0_GAIN = 0x%x
Line 3729: %s read S5730_HSPEEDY1_TX1_GAIN = 0x%x
Line 3774: [RF Drv MM] %s : ISR input 0x%x fired
Line 3786: %s read output = 0x%x
Line 3790: %s selectedQ =  0x%x, selectedI = 0x%x
Line 3799: %s calibration status = 0x%x
Line 3802: %s sram_magnitude_pre = 0x%d
Line 3805: %s sram_magnitude_post = 0x%d
Line 3822: %s S5730_HSPEEDY1_TX0_GAIN = 0x%x, Current IFMIXER_Gain = 0x%x, IQ CAL NV idx = 0x%x
Line 3833: %s Incorrect sram_RF_CTR_IQ_CAL_DAC_VALUE_GAIN length: %d 
Line 3875: %s Incorrect sram_RF_CTR_IQ_CAL_DAC_VALUE_GAIN length: %d 
Line 3935: [RFMCU_hisr:halt(%d)] WB_PC(0x%x), STANDBY_WFI(0x%08x), MEPC(0x%08x), MCAUSE(0x%08x)
Line 3945: [RFMCU_hisr:error] Read failure due to Exit info address error(0x%x)
Line 3948: [RFMCU_hisr:error]   >> GPIO6 Interrupt disable!
Line 3955: [RFMCU_hisr:excep.] EXIT_INFO(0x%x), addr(0x%08x) = (0x%08x)
Line 3962: [RFMCU_hisr:excep.] ECODE:CODE_FAIL
Line 3966: [RFMCU_hisr:excep.] ECODE:CODE_FATAL
Line 3970: [RFMCU_hisr:excep.] ECODE:HALT
Line 3974: [RFMCU_hisr:excep.] ECODE:REPLACEMENT_CODE_MAX
Line 3978: [RFMCU_hisr:excep.] ECODE:CODE_IPC_WRITE_DTIM_REDIRECTION_FAIL
Line 3982: [RFMCU_hisr:excep.] ECODE:CODE_APB_ERROR
Line 3986: [RFMCU_hisr:excep.] ECODE:CODE_HISPEEDY_ERROR
Line 3990: [RFMCU_hisr:excep.] ECODE:CODE_UNDEFINED_INTERRUPT
Line 3994: [RFMCU_hisr:excep.] ECODE:CODE_USER_DEFINED
Line 3998: [RFMCU_hisr:excep.] ECODE:N/A
Line 4018: [RFMCU_hisr] IPC queue full(WB_PC:0x%x)
Line 4027: [RFMCU_hisr] IPC queue error(ErrAddr:0x%x, ErrData:0x%x, WB_PC:0x%x)
Line 4034: [RFMCU_hisr:halt(%d)] WB_PC(0x%x), STANDBY_WFI(0x%08x), MEPC(0x%08x), MCAUSE(0x%08x)
Line 4055: [RF_MCU] RfmcuIrqHisr Init Fail
Line 4060: [RF_MCU] RFMCU IRQ initialized (status: %d)
Line 4063: [RF_MCU] RFMCU GPIO6 IRQ initialized (status: %d, gRfmcuHisrCnt: %d)
Line 4130: RF_RFIC_S5730_SetPhaHSPowerOff Start
Line 4131: RF_RFIC_S5730_SetPhaHSPowerOff Finish
Line 4280: %s [CTR_Table] length %d, subLength %d, CTR_GAIN length %d
Line 4306: %s Not Support PHA : RFIC_S%d
Line 4317: %s READBACK[CTR][%d] : addr, 0x%x, value, 0x%x
Line 4326: %s [PHA_Table] length %d, subLength %d, PHA_GAIN length S5650/S5651 %d/%d
Line 4351: %s Not Support PHA : RFIC_S%d
Line 4360: %s READBACK[PHA][%d] : addr, 0x%x, value, 0x%x
Line 4391: [RF Drv MM] %s : ISR input 0x%x fired
Line 4404: %s TXCTRGAINCAL_ALL_GAIN_STEP_EN: %d
Line 4484: %s READBACK[TX_CTR_H][%d] : addr, 0x%x, value, 0x%x
Line 4504: %s READBACK[TX_CTR_V][%d] : addr, 0x%x, value, 0x%x
Line 4522: %s [TX_Vcc_Table][ALERT] length %d, TX_GAIN_H length %d does not match. Not Update!
Line 4537: %s READBACK[TX_M_Vcc][%d] : addr, 0x%x, value, 0x%x
Line 4555: %s path_select %d, isr_input_val %X
Line 4556: %s ctr_tx_gain_word_0 0x%X, ctr_tx_gain_word_1 0x%X
Line 4570: %s signal_power_gain_0 %d, signal_power_gain_1 %d
Line 4578: %s gainword_0_dc %d
Line 4580: %s gainword_1_dc %d
Line 4595: %s path_select %d, isr_input_val %X
Line 4608: %s signal_power %d
Line 4640: %s complete 
Line 4649: %s path_select %d, isr_input_val %X
Line 4662: %s adc_input_power_dBm100 %d
Line 4666: %s cinr %d
Line 4670: %s cw_power_dBm100 %d
Line 4674: %s freq_loc_mhz100 %d
Line 4682: %s: Start tcxoClk:%d
Line 4698: %s[AFTER]: CPU_STATUS: 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 4711: %s: RFM_AUX_CMU_CLK_CTRL[0x%08X], RFM_POWER_CTRL_STATUS[0x%08X], RFM_MWPLL_STAT[0x%08X], RFM_IPLL_STAT[0x%08X], RFM_MWPLL_CON8[0x%08X]
Line 4713: %s: Finish
Line 4794: %s: [START] DL_STATUS: 0x%x, DL_CRC_FromHW: 0x%x, RISCV_bS5730_CRC: 0x%x
Line 4803: %s: == SEGMENT CHANGE == sramStart: 0x%05X, SegmentValue: 0x%08X
Line 4809: %s: == CPU_APB_STATUS4_RES [SKIP] targetData:0x%08X== 
Line 4817: %s, [WRITE] subIndex: %2d, sub_cnt: %5d, phyAddr: 0x%08X, Data: 0x%08X
Line 4824: %s: arrayIdx: %2d, startAddr: 0x%05X, lastAddr: 0x%05X, write Cnt: 0x%05X / 0x%05X, totalCnt: 0x%05X
Line 4834: %s: Check DL_STATUS: 0x%x, try index: %d
Line 4843: %s: [SUCCESS] DL_STATUS: 0x%x, DL_CRC_FromHW: 0x%x, RISCV_bS5730_CRC: 0x%x
Line 4861: %s: [Failed] DL_STATUS: 0x%x, DL_CRC_FromHW: 0x%x, RISCV_bS5730_CRC: 0x%x
Line 4865: RF_RFIC_S5730_FastDownload done
Line 4928: %s Tx waveform : addr = %d, value = 0x%x
Line 4940: %s : addr = %d, value = 0x%X
Line 4946: %s : imean = %d, qmean = %d
Line 4958: %s : current rms = %d
Line 4984: %s AMAM : addr = %d, value = %d
Line 4986: %s AMPM : addr = %d, value = %d
Line 4995: %s AMG1 : addr = %d, value = %d
Line 5005: %s AMG1 : addr = %d, value = %d
Line 5021: %s RXMEM COMBINED : addr = %d, real = 0x%X, imag = 0x%X
Line 5049: %s : Input param if_port = %d
Line 5050: %s : Input param trx_mem_load = %d
Line 5051: %s : Input param pha_fbrx_gain_id = %d
Line 5052: %s : Input param ctr_rx_analog_gain_id = %d
Line 5053: %s : Input param nr_band_idx = %d
Line 5054: %s : Input param pha_tx_ant_elem = %d
Line 5055: %s : Input param iPha = %d
Line 5056: %s : Inside 5730 
Line 5061: %s : Inside 5730 mem load %d
Line 5076: %s : IPC ISR fired for input->target_power %d , delta_target_pwr_dB = %d, dpd_pwr_idx %d, num_pwr_dpd_cal = %d %d 
Line 5079: %s : IPC ISR fired for TxMEM reg 10 0X%x reg 30 0x%x reg 31 0x%x
Line 5082: %s : IPC ISR fired for DPD_CAL_LUT_GEN_CONFIG reg 10 0X%x reg 30 0x%x reg 31 0x%x
Line 5099: %s : IPC ISR fired for input->trx_mem_load 
Line 5114: %s : IPC ISR fired for input type %d
Line 5117: %s : Before trigger Input param pha_tx_ant_elem = %d  input->target_power %d DPD_cal_option %d 
Line 5136: %s : IPC ISR fired for DPD_CAL_RXcapture reg 10 0X%x reg 30 0x%x reg 31 0x%x
Line 5149: %s : IPC ISR fired again
Line 5153: %s Group delay sram_grp_delay.addr = 0x%x, group delay %d start count %d path %d path_idx %d
Line 5155: %s Group delay sram_PDET.addr = 0x%x, PDET %d
Line 5157: %s Group delay sram_FE_setting.addr = 0x%x, FE setting 0x%x
Line 5163: %s :sqrt_rms  = %d, rms = %d 
Line 5183: %s Correlation_Coefficient sram_corr_coeff_debug.addr = 0x%x,  coeff_x1000 0x%x 
Line 5184: %s dgain reg1 0xE0E = %x
Line 5187: %s Status isr_completion_status %d complete
Line 5207: %s : Input param if_port = %d
Line 5208: %s : Input param trx_mem_load = %d
Line 5209: %s : Input param pha_fbrx_gain_id = %d
Line 5210: %s : Input param ctr_rx_analog_gain_id = %d
Line 5211: %s : Input param nr_band_idx = %d
Line 5212: %s : Input param pha_tx_ant_elem = %d
Line 5213: %s : Input param iPha = %d
Line 5214: %s : Inside 5730 
Line 5217: %s : Inside 5730 mem load %d
Line 5232: %s : IPC ISR fired for input->target_power %d , delta_target_pwr_dB = %d, dpd_pwr_idx %d, num_pwr_dpd_cal = %d %d 
Line 5238: %s : IPC ISR fired for TxAMG1 table gen reg 10 0X%x reg 30 0x%x reg 31 0x%x
Line 5241: %s : IPC ISR fired for TxMEM reg 10 0X%x reg 30 0x%x reg 31 0x%x
Line 5244: %s : IPC ISR fired for DPD_CAL_LUT_GEN_CONFIG reg 10 0X%x reg 30 0x%x reg 31 0x%x
Line 5265: %s : IPC ISR fired for input->trx_mem_load 
Line 5275: %s Nominal AMG1 value %d
Line 5297: %s : IPC ISR fired for input type %d
Line 5300: %s : Before trigger Input param pha_tx_ant_elem = %d  input->target_power %d DPD_cal_option %d 
Line 5319: %s : IPC ISR fired for DPD_CAL_RXcapture reg 10 0X%x reg 30 0x%x reg 31 0x%x
Line 5332: %s : IPC ISR fired again
Line 5336: %s Group delay sram_grp_delay.addr = 0x%x, group delay %d start count %d path %d path_idx %d
Line 5338: %s Group delay sram_PDET.addr = 0x%x, PDET %d
Line 5340: %s Group delay sram_FE_setting.addr = 0x%x, FE setting 0x%x
Line 5345: %s :sqrt_rms  = %d, rms = %d 
Line 5356: %s Correlation_Coefficient sram_corr_coeff_debug.addr = 0x%x,  coeff_x1000 0x%x 
Line 5357: %s dgain reg1 0xE0E = %x
Line 5360: %s Status isr_completion_status %d complete
Line 5379: %s read CTR 0x44 = 0x%x 0x45 0x%x
Line 5399: %s Setting segment = %d Addr: %X i:%d hspeedy size %d
Line 5409: %s-Setting segment = %d Addr: %X i:%d hspeedy size %d
Line 5426: %s addr= %x data=%x
Line 5434: %s addr= %x data=%x
Line 5438: %s Data already loaded
Line 5441: %s Loading Data
Line 5491: %s started
Line 5511: %s Input Parameters 0x%x 0x%x 0x%x 
Line 5515: %s RxDCOC Done
Line 5532: %s Input Parameters 0x%x 0x%x 0x%x 
Line 5556: %s Input Parameters 0x%x 0x%x 0x%x 
Line 5566: %s EVM_Addr: 0x%X Evm(x10000) %d ACLR_Addr:0x%X aclr(dB100) %d
Line 5592: %s Input Parameters 0x%x 0x%x 0x%x 
Line 5610: %s Group delay %d PDET %d FE setting 0x%x
Line 5613: %s Corr(x1000): %d
Line 507: RF_RFIC_S5730_RXGAINTABLE_FIND wrong rfic : %d !!
Line 435: RF_RFIC_S5730_REFPORTINDEX_Get wrong RefPort : %d !!
Line 1928: RF_RFIC_S5730_PLLINC_Set pllMode=%d onOff=%d incMode=0x%x, 0x%x
Line 1801: RF_RFIC_S5730_PLL_Set targetFreq error : %d !!
Line 1830: RF_RFIC_S5730_PLL_Set targetFreq error !!  N=%d, M=%d, pllMode=%d, pllIncMode=%d 
Line 1835: RF_RFIC_S5730_PLL_Set IF_Freq %d, N %d, M %d, Module: S%d, targetFreq=%d 
Line 1978: RF_RFIC_S5730_PLLMode_Set pllMode=%d, vcoMode=%d
Line 1251: RF_RFIC_S5730_MCUDONE_Check: OK, WFI : 0x%x
Line 1259: RF_RFIC_S5730_MCUDONE_Check: CPU_STATUS: 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 2276: %s: Recovery Sceanario : %d
Line 2292: %s: 0x724 wakeupResult : 0x%x
Line 2297: %s: 0x724 wakeupResult : 0x%x, retry %d/%d
Line 2245: RF_RFIC_S5730_REF_PS_Config : Update Input(%d), Target(%d)
Line 4237: [%s] : Update Input(%d), Target(%d)
Line 4740: %s: == SEGMENT CHANGE == sramStart: 0x%05X, SegmentValue: 0x%08X
Line 4746: %s: == CPU_APB_STATUS4_RES [SKIP] targetData: 0x%08X == 
Line 4756: %s, [VERIFY] arrayIdx: %2d, sub_cnt: %5d, phyAddr: 0x%05X, WRITE: 0x%08X, READ: 0x%08X, TRUE
Line 4760: %s, [VERIFY] arrayIdx: %2d, sub_cnt: %5d, phyAddr: 0x%05X, WRITE: 0x%08X, READ: 0x%08X, FALSE
Line 4767: %s: arrayIdx: %2d, startAddr: 0x%05X, lastAddr: 0x%05X, write Cnt: 0x%05X / 0x%05X, totalCnt: 0x%05X
Line 4769: %s: [VERIFY] Result cntTrue: 0x%x, cntFalse: 0x%x
