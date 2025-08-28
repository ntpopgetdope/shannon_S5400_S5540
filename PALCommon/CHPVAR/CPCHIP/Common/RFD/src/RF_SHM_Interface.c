Line 57: [RF SHM] RF_SHM_LTE_GetActiveDspShmPointer: ABNORMAL STACK%d
Line 73: [RF SHM] %s: dsp_txidx[%d]
Line 87: [RF SHM] %s: dsp_txidx[%d] CC%d %s %s freq[%dkHz] %s
Line 111: [RF SHM] %s: (current) dsp_txidx[%d] CC%d %s %s freq[%dkHz] %s
Line 114: [RF SHM] %s: (target) %s %s %s freq[%dkHz] %s => return[%d]
Line 284: [RF SHM] %s: %s dsp_txidx[%d] latch_mode[%d] addr[0x%x] data[0x%x]
Line 316: [RF SHM] %s: %s SM off Buck Data is 0x%x, sm_channel[%d] sm_path[%d] bw[%d] dtx_sm_ctrl_en[%d]
Line 446: [RF SHM] %s: cc%d is not ready
Line 529: [RF SHM] %s: %s pam_type[%d]
Line 542: [RF SHM] %s: done !
Line 568: [RF SHM] RF_SHM_Clear_LTE_TDD_FEM_TRX_Control Info: band%d dsp_txidx[%d] cal_mode[%d]
Line 582: [RF SHM] RF_SHM_Set_LTE_TDD_FEM_TRX_Control: size overflow !! dl_size=%d ul_size=%d
Line 609: [RF SHM] RF_SHM_Set_LTE_TDD_FEM_TRX_Control: MIPI path rx/tx[%d, %d] word num rx/tx [%d, %d]
Line 618: [RF SHM] RF_SHM_Set_LTE_TDD_FEM_TRX_Control Info : GPIO mask[0x%x] tx_word[0x%x] rx_word[0x%x]
Line 658: [RF SHM] Coupler On MIPI Word Update : AS[%d] MIPI#[%d/%d], MIPI Ch [%d], SW MEM Addr[%d], On Data[0x%x]
Line 675: [RF SHM] Coupler Off MIPI Word Update : AS[%d] MIPI#[%d/%d], MIPI Ch [%d], SW MEM Addr[%d], Off Data[0x%x]
Line 681: [RF SHM] Coupler Off MIPI Word Update : [RF_ONOFF_DEBUG] %s Coupler on/off disable
Line 707: [RF SHM] RF_SHM_Clear_NB_NTN_FEM_TRX_Control Info: band%d cal_mode[%d]
Line 720: [RF SHM] RF_SHM_Set_NB_TDD_FEM_TRX_Control: size overflow !! dl_size=%d ul_size=%d
Line 753: [RF SHM] RF_SHM_Set_NB_TDD_FEM_TRX_Control: ANT_NUM [%d] word_num rx/tx [%d, %d] MIPI_ch rx/tx[%05d_%05d, %05d_%05d]
Line 756: [RF SHM] RF_SHM_Set_NB_TDD_FEM_TRX_Control: dl_data [0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x]
Line 759: [RF SHM] RF_SHM_Set_NB_TDD_FEM_TRX_Control: ul_data [0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x]
Line 768: [RF SHM] RF_SHM_Set_NB_TDD_FEM_TRX_Control: GPIO mask[0x%x] tx_word[0x%x] rx_word[0x%x]
Line 793: [RF SHM] RF_SHM_Clear_NB_AIT_TRX_Control Info: band%d dsp_txidx[%d] cal_mode[%d]
Line 821: [RF SHM] RF_SHM_Set_NB_AIT_TRX_Control: size overflow !! size=%d
Line 834: [RF MIPI] %s: ANT_NUM[%d] TRX[%d] PATH[%d], USID[0x%.2X] ADDR[0x%.2X] DATA[0x%.2X]
Line 849: [RF MIPI] %s: ANT_NUM[%d] TRX[%d] PATH[%d], USID[0x%.2X] ADDR[0x%.2X] DATA[0x%.2X]
Line 979: [RF SHM] RF_SHM_Set_LTE_FBRX_Gain_Control: (gain search, min) stage=%d fbgain_idx=%d target_pwr=%d cal_const=%d offset=%d --> up!
Line 987: [RF SHM] RF_SHM_Set_LTE_FBRX_Gain_Control: gain search fail !!! control disable !!! stage=%d idx=%d (max_size=%d)
Line 999: [RF SHM] RF_SHM_Set_LTE_FBRX_Gain_Control: (gain search, max) stage=%d fbgain_idx=%d target_pwr=%d cal_const=%d offset=%d --> up!
Line 1009: [RF SHM] RF_SHM_Set_LTE_FBRX_Gain_Control: stage=%d fbgain_idx=%d(%d) constant=%d target_th=%d
Line 1020: [RF SHM] RF_SHM_Set_LTE_FBRX_Gain_Control: abnormal gain word size!! stage=%d size=%d
Line 1034: [RF SHM] RF_SHM_Set_LTE_FBRX_Gain_Control: word update index=%d num_word=%d addr=0x%x data=0x%x
Line 1064: [RF SHM] RF_SHM_Set_LTE_FBRX_Gain_Control : type=%s fbrx_gain_ctrl_en=%d FBRX CURRENT SAVING EN =%d
Line 1083: [RF SHM] RF_SHM_Set_LTE_FBRX_Gain_Control : type=%s threshold=%d pd_channel=%d
Line 1115: [RF SHM] %s: gDrx_ActiveRat [%d] failed
Line 1157: [RF SHM] RF_SHM_Set_LTE_PD_Comp_Control: %s %s dsp_txidx[%d] pd_onoff[%d] pd_type[%d]
Line 1242: [RF SHM] RF_SHM_Set_LTE_FBRX_ADC_OnOff_Word: %s %s on[0x%x/0x%x] off[0x%x/0x%x]
Line 1288: [RF SHM] %s: Search SHM CC[%d](+10) [%d / %d]
Line 1293: [RF SHM] %s: Search CC%d(10 added) 
Line 1301: [RF SHM] RF_SHM_Set_LTE_Quick_Sleep_SW_Mode_eLNA_MIPI: (LTE QS) %s %s mipi_path[%d] mem_wr_addr[%d] off[0x%08X]
Line 1364: [RF SHM] QS_SW_Mode_eLNA_MIPI_Intra_Case: (LTE QS) %s onoff[%d] Total Intra#[%d] LTE/NR Intra#[%d] LTE flag[%d] NR flag[%d]
Line 1392: [RF SHM] %s: MC_PUSCH_Backoff [%d]dB
Line 1415: [RF SHM] RF_SHM_Set_LTE_User_MPR: user_mpr_en [%d] patial [%d %d %d %d]
Line 1418: [RF SHM] RF_SHM_Set_LTE_User_MPR: full [%d %d %d %d]
Line 1426: [RF SHM] RF_SHM_Set_LTE_User_MPR: bw offset [%d %d %d %d %d %d]
Line 1440: [RF SHM] RF_SHM_Set_LTE_User_MPR: %s dsp_txidx[%d] conduct_offset %d ca_conduct_offset %d slo_ca_conduct_offset %d conduct_offset_pc2 %d ULBW : %d 
Line 1455: [RF SHM] %s: cc%d user_mpr_intra_ca_en %d , RB index[0:25RB 1:50RB 2:75RB 3:100RB]
Line 1474: [RF SHM] RB Index(%d) QPSK[%d %d %d] 16QAM[%d %d %d]
Line 1477: [RF SHM] RB Index(%d) 64QAM[%d %d] 256QAM[%d] 1RB[%d]
Line 1482: [RF SHM] %s: Disabled
Line 1487: [RF SHM] %s: User mpr value for intca ca was already updated
Line 1499: [RF SHM] %s: User MPR non-contigous ULCA case [%d]
Line 1521: [RF SHM] RF_SHM_Set_LTE_User_AMPR: TxPwr_AMPR_Offset %d [%d, %d]
Line 1536: [RF SHM] RF_SHM_Set_LTE_User_AMPR: User AMPR Intra-band ULCA 1RB Non-contigous allocation NS%02d (%d, %d)
Line 1565: [RF SHM] RF_SHM_Set_LTE_RFFE_Path_Offset: rffe_offset[%d %d %d %d] tx_as_path_loss[%d %d %d %d]
Line 1575: [RF SHM] RF_SHM_Set_LTE_RFFE_Path_Offset: %s dsp_txidx[%d] updated_shm_rffe_offset[%d %d %d %d]
Line 1603: [RF SHM] %s: %d dB
Line 1701: [RF SHM] %s: fail to get SM delay. need to be checked
Line 1732: [RF SHM] RF_SHM_Set_LTE_PA_Delay_Time : PA ON delay [%d], SM ON delay [%d], PA GAIN delay [%d], SM GAIN delay [%d], PA OFF delay [%d], SM OFF delay [%d], SM TRIG delay [%d]
Line 1735: [RF SHM] %s : %s tx_idx[%d] BW[%d] RFIC ON delay [%d] RFIC OFF delay [%d]
Line 1774: [RF SHM] %s: CFR Value[%d, 0x%x]
Line 1794: [RF ET] %s: not supported mode [%d]
Line 1801: [RF SHM] %s: BW[%s] QPSK[0x%x] 16QAM[0x%x] 64QAM[0x%x] 256QAM[0x%x]
Line 1834: [RF SHM] %s : LPM On Off[%d]
Line 1843: [RF SHM] %s (ET): num_word_pa_et_en_reg[%d]  pa_et_en_reg0[0x%x]  pa_et_en_reg1[0x%x]  pa_et_en_reg2[0x%x]
Line 1846: [RF SHM] %s (HPM): num_word_pa_apt_en_reg[%d]  pa_apt_en_reg0[0x%x]  pa_apt_en_reg1[0x%x]  pa_apt_en_reg2[0x%x]
Line 1849: [RF SHM] %s (MPM): num_word_pa_apt_en_reg[%d]  pa_apt_en_reg0[0x%x]  pa_apt_en_reg1[0x%x]  pa_apt_en_reg2[0x%x]
Line 1852: [RF SHM] %s (LPM): num_word_pa_apt_en_reg[%d]  pa_apt_en_reg0[0x%x]  pa_apt_en_reg1[0x%x]  pa_apt_en_reg2[0x%x]
Line 1854: [RF SHM] %s (OFF): num_word_pa_dis_reg[%d]  pa_dis_reg[0x%x]
Line 1856: [RF SHM] %s (TRIG): pa_pm_trigger[0x%x]
Line 1876: [RF SHM] RF_SHM_NR_SUB6_GetActiveDspShmPointer: STACK%d, nr_sa_tx_sub_stack[%d]
Line 1884: [RF SHM] RF_SHM_NR_SUB6_GetActiveDspShmPointer: ABNORMAL STACK%d
Line 1905: [RF SHM] %s: dsp_txidx[%d]
Line 1922: [RF SHM] %s: dsp_txidx[%d] %s %s %s freq[%dkHz] %s
Line 1945: [RF SHM] %s: (current) dsp_txidx[%d] CC%d %s %s freq[%dkHz] %s
Line 1947: [RF SHM] %s: (target) %s %s %s freq[%dkHz] %s => return[%d]
Line 2122: [RF SHM] _RF_SHM_Set_NR_SUB6_TDD_FEM_TRX_Word_UpdateFlag_: CC%d TX%d
Line 2146: [RF SHM] _RF_SHM_Set_NR_SUB6_TDD_FEM_TRX_Word_UpdateFlag_: trx[%d] DL CH[%d] word [0x%x] TrNum[%d]
Line 2167: [RF SHM] RF_SHM_Set_NR_SUB6_TDD_FEM_TRX_Control: size overflow !! dl_size=%d ul_size=%d
Line 2192: [RF SHM] FEM MIPI Word Update : MIPI#[%d/%d], DL Data[0x%x], TrNum[%d]
Line 2227: [RF SHM] FEM MIPI Word Update : MIPI#[%d/%d], UL Data[0x%x], TrNum[%d]
Line 2236: [RF SHM] RF_SHM_Set_NR_SUB6_TDD_FEM_TRX_Control: MIPI path rx/tx[%d, %d] word num rx/tx [%d, %d]
Line 2245: [RF SHM] RF_SHM_Set_NR_SUB6_TDD_FEM_TRX_Control: GPIO mask[0x%x] tx_word[0x%x] rx_word[0x%x]
Line 2274: [RF SHM] RF_SHM_Clear_NR_SUB6_TDD_FEM_TRX_Control Info: band%d dsp_txidx[%d] cal_mode[%d]
Line 2314: [RF SHM] RF_SHM_Set_NR_SUB6_SM_Config : SM APT Hold Disable [%d] Version [%d] MaxDown [%d] MaxBo [APT:%d, SAPT:%d]
Line 2317: [RF SHM] %s: %s SM off Buck Data is 0x%x
Line 2324: [RF SHM] RF_SHM_Set_NR_SUB6_SM_Config : SM_VCC_UP_SLOPE_x10/1us[%d], SM_VCC_DOWN_SLOPE_x10/1us[%d]
Line 2473: [RF SHM] %s: cc%d is not ready
Line 2505: [RF SHM] %s: %s PAM_MASKED_ON done
Line 2561: [RF SHM] %s: %s pam_type[%d]
Line 2574: [RF SHM] %s: done !
Line 2652: [RF SHM] RF_SRS_SW: main_txmode[%s] sub_txmode[%s] Not support 2T4R
Line 2658: [RF DSP] RF_SRS_SW: UL MIMO 2T4R - main_txmode[%s] sub_txmode[%s]
Line 2713: [RF SHM] RF_SRS_SW: cal_mode[%d] SRS_SW_MODE[%s] 
Line 2774: [RF SHM] SRS MIPI Word Update : SRS[%d] MIPI#[%d/%d], Data[0x%x], TrNum[%d]
Line 2797: [RF SHM] RF_SRS_SW: rxidx[%d] rxPortMap[0x%X] TrxSeperateFlag[%d] antPathLoss[%d,%d,%d,%d]
Line 2801: [RF SHM] RF_SRS_SW: srsMode(%d)[%s] maxPowerperPath[%d,%d,%d,%d]
Line 2853: [RF SHM] RF_SHM_NR_SUB6_SRS_SW_Exception_Check: ap_event[0x%x] case_idx[%d] antSwPerPath[%d][%d][%d][%d]
Line 2855: [RF SHM] RF_SHM_NR_SUB6_SRS_SW_Exception_Check: ap_event[0x%x] case_idx[%d] SRS_SW_MAXPower[%d][%d][%d][%d]
Line 2928: [RF SHM] Coupler On MIPI Word Update : AS[%d] MIPI#[%d/%d], MIPI Ch [%d], SW MEM Addr[%d], On Data[0x%x], TrNum[%d]
Line 2968: [RF SHM] Coupler Off MIPI Word Update : AS[%d] MIPI#[%d] MIPI Ch [%d], SW MEM Addr[%d], Off Data[0x%x], TrNum[%d]
Line 2978: [RF SHM] Coupler Off MIPI Word Update : [RF_ONOFF_DEBUG] %s Coupler on/off disable
Line 3011: [RF SHM] %s : CC[%d] onData[%d] : 0x%X 0x%X
Line 3021: [RF SHM] %s : CC[%d] offData[%d] : 0x%X %X
Line 3074: [RF SHM] RF_SHM_Set_NR_SUB6_FBRX_Gain_Control: (gain search, min) stage=%d fbgain_idx=%d target_pwr=%d cal_const=%d offset=%d --> up!
Line 3082: [RF SHM] RF_SHM_Set_NR_SUB6_FBRX_Gain_Control: gain search fail !!! control disable !!! stage=%d idx=%d (max_size=%d)
Line 3094: [RF SHM] RF_SHM_Set_NR_SUB6_FBRX_Gain_Control: (gain search, max) stage=%d fbgain_idx=%d target_pwr=%d cal_const=%d offset=%d --> up!
Line 3104: [RF SHM] RF_SHM_Set_NR_SUB6_FBRX_Gain_Control: stage=%d fbgain_idx=%d(%d) constant=%d target_th=%d
Line 3115: [RF SHM] RF_SHM_Set_NR_SUB6_FBRX_Gain_Control: abnormal gain word size!! stage=%d size=%d
Line 3129: [RF SHM] RF_SHM_Set_NR_SUB6_FBRX_Gain_Control: word update index=%d num_word=%d addr=0x%x data=0x%x
Line 3160: [RF SHM] RF_SHM_Set_NR_SUB6_FBRX_Gain_Control : type=%s fbrx_gain_ctrl_en=%d FBRX CURRENT SAVING EN =%d
Line 3175: [RF SHM] RF_SHM_Set_NR_SUB6_FBRX_Gain_Control : type=%s threshold=%d
Line 3233: [RF SHM] FBRX_DCR Word Update : [RF_ONOFF_DEBUG] %s FBRX_DCR on/off disable
Line 3322: [RF DSP] RF_DSP_NR_SUB6_SRS_SW_Exception_Check: dsp_txidx[%d]trxSwInfoUpdate[%d]
Line 3350: [RF SHM] RF_SHM_Set_NR_SUB6_Quick_Sleep_SW_Mode_RFIC: (NR SUB6 QS) ON update %s => word [0x%03X:0x%08X, 0x%03X:0x%08X]
Line 3354: [RF SHM] RF_SHM_Set_NR_SUB6_Quick_Sleep_SW_Mode_RFIC: (NR SUB6 QS) OFF update %s => word [0x%03X:0x%08X, 0x%03X:0x%08X]
Line 3368: [RF SHM] RF_SHM_Set_NR_SUB6_Quick_Sleep_SW_Mode_RFIC: (NR SUB6 QS) ON update %s => word [0x%03X:0x%08X, 0x%03X:0x%08X]
Line 3372: [RF SHM] RF_SHM_Set_NR_SUB6_Quick_Sleep_SW_Mode_RFIC: (NR SUB6 QS) OFF update %s => word [0x%03X:0x%08X, 0x%03X:0x%08X]
Line 3400: [RF SHM] %s: Search SHM CC[%d](+10) [%d / %d]
Line 3405: [RF SHM] %s: Search CC%d(+10) 
Line 3414: [RF SHM] RF_SHM_Set_NR_SUB6_Quick_Sleep_SW_Mode_eLNA_MIPI: (NR SUB6 QS) %s %s mipi_path[%d] mem_wr_addr[%d] off[0x%08X]
Line 3430: [RF SHM] %s: Search SHM CC[%d](+10) [%d / %d]
Line 3435: [RF SHM] %s: Search CC%d(+10) 
Line 3444: [RF SHM] RF_SHM_Set_NR_SUB6_Quick_Sleep_SW_Mode_eLNA_MIPI: (NR SUB6 QS) %s %s mipi_path[%d] femsif_addr[%d] off[0x%08X]
Line 3507: [RF SHM] QS_SW_Mode_eLNA_MIPI_Intra_Case: (NR SUB6 QS) %s onoff[%d] Total Intra#[%d] LTE/NR Intra#[%d] LTE flag[%d] NR flag[%d]
Line 3523: [RF DSP] %s: APT Tune Mode Return!
Line 3534: [RF SHM] RF_SHM_Set_NR_SUB6_User_MPR: cc%d dsp_txidx %d, user_mpr_en %d, PC2_user_mpr_en %d PC1p5_user_mpr_en %d
Line 3550: [RF SHM] RF_SHM_Set_NR_SUB6_User_MPR: (PC3) NV index %d, DFT-s-OFDM SHM[%d][%d][%d], MPR %ddB(0.1dB scale) 
Line 3558: [RF SHM] RF_SHM_Set_NR_SUB6_User_MPR: (PC3) NV index %d, CP-OFDM SHM[%d][%d][%d], MPR %ddB(0.1dB scale) 
Line 3571: [RF SHM] RF_SHM_Set_NR_SUB6_User_MPR: (PC2) NV index %d, DFT-s-OFDM SHM[%d][%d][%d], MPR %ddB(0.1dB scale) 
Line 3579: [RF SHM] RF_SHM_Set_NR_SUB6_User_MPR: (PC2) NV index %d, CP-OFDM SHM[%d][%d][%d], MPR %ddB(0.1dB scale) 
Line 3592: [RF SHM] RF_SHM_Set_NR_SUB6_User_MPR: (PC1p5) NV index %d, DFT-s-OFDM SHM[%d][%d][%d], MPR %ddB(0.1dB scale) 
Line 3600: [RF SHM] RF_SHM_Set_NR_SUB6_User_MPR: (PC1p5) NV index %d, CP-OFDM SHM[%d][%d][%d], MPR %ddB(0.1dB scale) 
Line 3613: [RF SHM] RF_SHM_Set_NR_SUB6_User_MPR: (PC2 DualTx) NV index %d, DFT-s-OFDM SHM[%d][%d][%d], MPR %ddB(0.1dB scale) 
Line 3621: [RF SHM] RF_SHM_Set_NR_SUB6_User_MPR: (PC2 DualTx) NV index %d, CP-OFDM SHM[%d][%d][%d], MPR %ddB(0.1dB scale) 
Line 3630: [RF SHM] RF_SHM_Set_NR_SUB6_User_MPR: ENDC DPS Power [%d, %d, %d, %d, %d, %d, %d, %d, %d, %d]
Line 3641: [RF SHM] %s: A[%d]
Line 3646: [RF SHM] %s: A[%d] AMPR[Index %d] [%d]
Line 3751: [RF SHM] RF_SHM_Set_NR_SUB6_User_TxDivEn_Threshold: enable %d TxDivEnThreshold %d
Line 3768: [RF SHM] %s: conduct_offset %d conduct_offset_pc2 %d conduct_offset_pc1p5 %d mimo_offset %d
Line 3796: [RF SHM] RF_SHM_Set_NR_SUB6_RFFE_Path_Offset: dsp_txidx: %d, tx_idx: %d, is_ulmimo: %d, rffeOffset[0]: %d rffeOffset[1]: %d rffeOffset[2]: %d rffeOffset[3]: %d
Line 3818: [RF SHM] %s: Band[%s] Enable[%d]
Line 3978: [RF SHM] %s: fail to get SM delay. need to be checked
Line 4011: [RF SHM] RF_SHM_Set_NR_SUB6_PA_Delay_Time : CC_TYPE[%d], SM ON delay [%d], SM OFF delay [%d], SM TRIG delay [%d], PA ON delay [%d], PA OFF delay [%d], PA GAIN delay [%d]
Line 4014: [RF SHM] %s : %s: ON delay [%d] OFF delay [%d]
Line 4039: [RF ET] %s: not supported mode [%d]
Line 4106: [RF SHM] RF_SHM_Set_NR_SUB6_TX_IQ_CAL_Control: tx_idx[%d] rfdb_idx[%d] enable[%d] Coherent ULMIMO[%d]
Line 4108: [RF SHM] RF_SHM_Set_NR_SUB6_TX_IQ_CAL_Control: POINT0 iq_mis[0x%x] iqc_a[0x%x] iqc_b[0x%x] POINT1 iq_mis[0x%x] iqc_a[0x%x] iqc_b[0x%x]
Line 4121: [RF SHM] RF_SHM_Set_NR_SUB6_GSM_ENDC_RAT_GAP_Flag: trxSwInfoUpdate [0x%x]
Line 130: [RF SHM] %s: Can not find model
Line 873: [RF SHM] %s: Modem is not ready yet
Line 883: [RF SHM] %s %s: tx_idx[%d] PD En[%d] On[0x%x] Off[0x%x]
Line 899: [RF SHM] %s: Modem is not ready yet
Line 916: [RF SHM] %s : %s %s tx_idx[%d] onData[%d] : %x, %x
Line 926: [RF SHM] %s : %s %s tx_idx[%d] offData[%d] : %x, %x
Line 186: [RF SHM] %s: Modem is not ready yet
Line 191: [RF SHM] RF_SHM_Set_LTE_TX_Path_Control %s: Stack[%d]
Line 201: [RF SHM] RF_SHM_Set_LTE_TX_Path_Control %s: Path On [0x%x, 0x%x], [0x%x, 0x%x], [0x%x, 0x%x]
Line 209: [RF SHM] RF_SHM_Set_LTE_TX_Path_Control %s: Path Off [0x%x, 0x%x], [0x%x, 0x%x], [0x%x, 0x%x]
Line 342: [RF SHM] %s: %s tx_idx[%d] pa_ctrl_type[0x%x]
Line 384: [RF SHM] %s: check index num[%d]
Line 388: [RF SHM] RF_SHM_Set_LTE_PA_APT: %s dsp_txidx[%d] power_mode[%d] size[%d] data[0x%x/0x%x]
Line 406: [RF SHM] %s: check index num[%d]
Line 421: [RF SHM] RF_SHM_Set_LTE_PA_Off: %s dsp_txidx[%d] disable[0x%x] trigger[0x%x]
Line 2007: [RF SHM] RF_SHM_Set_NR_SUB6_TX_Path_Control %s: Path On [0x%x, 0x%x] [0x%x, 0x%x] [0x%x, 0x%x] 
Line 2015: [RF SHM] RF_SHM_Set_NR_SUB6_TX_Path_Control %s: Path Off [0x%x, 0x%x] [0x%x, 0x%x] [0x%x, 0x%x]
Line 2351: [RF SHM] %s: pa_ctrl_type[0x%x]
Line 2394: [RF SHM] %s: check index num[%d]
Line 2402: [RF SHM] %s: power_mode[%d] num_word_pa_apt_en_reg[0x%x] num_word_pa_apt_en_reg_tr_count[0x%x] pa_apt_en_reg0[0x%x] pa_apt_en_reg1[0x%x]
Line 2418: [RF SHM] RF_SHM_Set_NR_SUB6_PA_Off: num_word_pa_dis_reg[0x%x] num_word_pa_dis_reg_tr_count[0x%x]
Line 2427: [RF SHM] RF_SHM_Set_NR_SUB6_PA_Off: pa_dis_reg[0x%x]
Line 2431: [RF SHM] RF_SHM_Set_NR_SUB6_PA_Off: check index num[%d]
Line 2448: [RF SHM] RF_SHM_Set_NR_SUB6_PA_Off: pa_pm_trigger_en[%d] pa_pm_trigger[0x%x]
Line 3868: [RF SHM] RF_SHM_Set_NR_SUB6_DCXO_Offset_Upload : Target Freq [%d]Hz, DCXO Offet Freq[%d]Hz, CC[%d], Offset data[%d], write pointer[%d], 0x%X 0x%X
Line 3872: [RF SHM] RF_SHM_Set_NR_SUB6_DCXO_Offset_Upload: write pointer will be updated after sub Tx update in UL MIMO scenario
Line 3890: [RF SHM] RF_SHM_Set_NR_SUB6_DCXO_Offset_Upload: Invalid write pointer[%d]
Line 3893: [RF SHM] RF_SHM_Set_NR_SUB6_DCXO_Offset_Upload: write pointer is the same as read pointer. Don't need to update
