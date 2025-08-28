Line 372: Invalid Stack_id!
Line 392: Invalid Stack_id!
Line 412: Invalid Stack_id!
Line 451: <<< LTE DM Command List >>>
Line 452: [01] ltedm help
Line 453: [02] ltedm on
Line 454: [03] ltedm off
Line 455: [04] ltedm default
Line 456: [05] ltedm vu     [RATE]
Line 457:        ex) ltedm vu 1000
Line 458:             -> LTEDM_VU update rate is 1000ms
Line 459: [06] ltedm phy    [RATE]
Line 460: [07] ltedm l1     [RATE]
Line 461: [08] ltedm mac    [RATE]
Line 462: [09] ltedm rlc    [RATE]
Line 463: [10] ltedm pdcp   [RATE]
Line 464: [11] ltedm rrc    [RATE]
Line 465: [12] ltedm nas    [RATE]
Line 466: [15] ltedm pal    [RATE]
Line 467: [16] ltedm status
Line 480: LTE DM : ON
Line 761: <<< LTE DM Status >>>
Line 765: LTE DM : ON
Line 769: LTE DM : OFF
Line 1570: DEBUG HIU STAT PUSCH diff CC0 %d PUSCH CC1 diff %d SHM ul_trans_tot_cnt %d L1 ul_total_trans %d
Line 2626: [Malloc couldnot able to allocate memory: ] event=%d
Line 2647: [LTEDM_Send_NS_Event: Sending Error] event=%d
Line 2651: [Lte_ProtocolPostEvent: pal Mem Free Fail]
Line 2660: [LTEDM_Send_NS_Event: Sending Error] event=%d
Line 2664: [Lte_ProtocolPostEvent: pal Mem Free Fail]
Line 3180: LTEDM_Send_NS_SignalQuality [Malloc couldnot able to allocate memory]
Line 3217: [LTEDM_Send_NS_SignalQuality: Sending Error]
Line 3221: [LTEDM_Send_NS_SignalQuality: pal Mem Free Fail]
Line 3237: Update SAEMM SignalQuality DB failed
Line 3658: LTEDM_UpdateRxReadInfo Start
Line 3695: LTEDM_UpdateRxReadInfo CC0 RSRP : %d %d %d %d
Line 3698: LTEDM_UpdateRxReadInfo CC0 SINR : %d %d %d %d
Line 3711: LTEDM_UpdateRxReadInfo CC%d ScellIdx - %d div_cc %d
Line 3737: LTEDM_UpdateRxReadInfo Scell RSRP : %d %d %d %d
Line 3740: LTEDM_UpdateRxReadInfo Scell SINR : %d %d %d %d
Line 3748: LTEDM_UpdateRxReadInfo End
Line 5243: LTEDMTaskPoll : %s
Line 5309: The input cc_idx (%d) EXCEEDs the maximum (3)!!!
Line 6091: MCS reported[%d]
Line 6342: Reported Layer[%d]
Line 7154: cc_idx (%d) of the given sCellIndex (%d) EXCEEDs the maximum (3)!!!
Line 7496: [GNSS-PULSE] LTEDM_GetGnssPulseInfo
Line 7522: [GNSS-PULSE] LTEDM_SetGnssPulseInfo: TimeofLastPulseOnCell1(%u) TimeofFirstPulseOnCell2(%u) TimeBaseShift(%u) TimeShiftEventNum(%d) WrapAround(%d)
Line 7530: [GNSS-PULSE] LTEDM_InitGnssDb: WrapAround(%d) TimeShiftEventNum(%d)
Line 8327: Intra Freq. Neighbor(%d): EARFCN[%4d], PCID[%3d], RSRP_N[%4d (%4d, %4d)], RSRQ_N[%3d]
Line 8364: SCell Freq. Neighbor(%d): EARFCN[%4d], PCID[%3d], RSRP_N[%4d (%4d, %4d)], RSRQ_N[%3d]
Line 8407: Inter Freq. Neighbor(%d): EARFCN[%4d], PCID[%3d], RSRP_N[%4d (%4d, %4d)], RSRQ_N[%3d]
Line 8447: Utran. Neighbor(%d): UARFCN[%5d], PSC[%3d], RSCP[%4d], EcNo[%3d]
Line 8486: Geran. Neighbor(%d): ARFCN[%5d], BSIC[%3d], RSSI[%3d]
Line 8544: [PDCP][ENTITY:%d][DRBID:%d][EPSID:%d][CID:%08x][IMS:%d][Periodic:1] Tx_PDU[%d] Rx_PDU[%d]
Line 8556: [PDCP][ENTITY:%d][DRBID:%d][EPSID:%d][CID:%08x][IMS:%d][Periodic:0] Tx_PDU[%d] Rx_PDU[%d]
Line 8568: [WARN][PDCP][ENTITY:%d][DRBID:%d][EPSID:%d][CID:%08x][IMS:%d] : [RX_ENTITY:%d]!=TX_ENTITY
Line 8583: [MAC] Tx : PDU[%d] Rx : PDU[%d] [ST:%d](per 960ms)
Line 8593: [RLC] Tx : RB_ID[%d] SDU[%d] SDU[%d Bytes] PDU[%d] ReTx PDU[%d]
Line 8602: [RLC] Rx : RB_ID[%d] SDU[%d] SDU[%d Bytes] PDU[%d] ReRx PDU[%d]
Line 8624: [MAC] Tx : PDU[%d] Rx : PDU[%d] [ST:%d](Reset/Release case)
Line 8642: [RLC] Tx : RB_ID[%d] SDU[%d] SDU[%d Bytes] PDU[%d] ReTx PDU[%d]
Line 8654: [RLC] Rx : RB_ID[%d] SDU[%d] SDU[%d Bytes] PDU[%d] ReRx PDU[%d]
Line 8747: Meas Cycles updated for IDLE in DM
Line 8768: Meas Cycles updated for CONN in DM
Line 8782: Meas Cycles now invalid since not in IDLE or CONN
Line 8794: Invalid stackNum:%d
Line 8823: Invalid stackNum:%d
Line 8835: Invalid stackNum:%d
Line 8854: Invalid stackNum:%d
Line 8932: Invalid sCellIndex:%d
Line 9753: LTE dsl1rc State: %d
Line 9779: RF Black-out Start time %d us
Line 9787: [%s] LTE Sleep Duration %d (ms)
Line 9792: [%s] LTE RF Black-out during %d (ms)
Line 9906: [LCE UL] LTEDM_GetLCE_ULTP : cellIndex[%d] POWER[%d] = p0_NominalPUSCH[%d] + (alpha[%d/10] * pathloss[%d/100] + tpc[%d])
Line 9920: [LCE UL] LTEDM_GetLCE_ULTP : cellIndex[%d] P_RA[%d] = P_CMAX[%d] - POWER[%d]
Line 9938: [LCE UL][Error] Calculation error for power_linear. P_CMAX[%d], POWER_TEMP[%d]
Line 9971: [LCE UL] LTEDM_GetLCE_ULTP : cellIndex[%d] LCE_CC[%d] = LCE_REF[%d] * L_MIMO[1] * S_BW[%d/100] * S_CP[%d/1000] * R_UL[%d/10]
Line 9979: [LCE UL][CONN] LCE_ULTP[%d] (Kbps)
Line 9983: [LCE UL][IDLE] LCE_ULTP[%d] (Kbps)
Line 10025: [LCE DL][CONN] PHYTP[%d], CSITP[%d] (Kbps)
Line 10038: [LCE DL][IDLE] PHYTP[%d], CSITP[%d] (Kbps)
Line 10070: [LCE_IDLE] Conf_Level[%d]
Line 10172: LTE ProAsnVersion : %d.%d.%d 20%02d-%02d
Line 2534: pCellInfo made Null with cc_idx : %d
Line 2538: LTE_DM_VU: mxr_cc(%d), demod_cc(%d), earfcn(%d, %d), cell_ID(%d), RSRP(%d,%d), SINR(%3d,%3d)
Line 2539: LTE_DM_VU: mxr_cc(%d), pCellInfo is NULL
Line 1172: LTEDM_L1_SINR: mxr_cc(%d), dmod_cc(%d), earfcn(%d, %d), cell_ID(%d): abnormal dmod cc index !!!,  
Line 1259: LTEDM_L1_SINR: mxr_cc(%d), div_mxr_cc(%d), dmod_cc(%d), earfcn(%d, %d), cell_ID(%d), SINR( %d, %d, %d, %d)
Line 1264: LTEDM_L1_SINR: mxr_cc(%d), div_mxr_cc(-), dmod_cc(%d), earfcn(%d, %d), cell_ID(%d), SINR( %d, %d)
Line 4525: PCell STR  %7d  %4d  %7d %7d  |  RTG [ %6d]
Line 4528: GP ADC  %4d, %4d degrees Celsius
Line 3550: LTEDM_UpdateTPInfo: Skip UpdateTPInfo diff_time < 500ms
Line 3556: Unusual case: Total Padding(%d) > Total PHY data(%d) during diff time(%d)ms
Line 3568: LTEDM_UpdateTPInfo: dmod_cc(%d), earfcn(%d, %d), cell_ID(%d), DL_PHY_TP(%d), DL_TP(%d)
Line 3576: LTEDM_UpdateTPInfo: dmod_cc(%d), earfcn(%d, %d), cell_ID(%d), DL_PHY_TP(%d), DL_TP(%d)
Line 3596: LTEDM_UpdateTPInfo: ulp_cc(%d), ul_earfcn(%d, %d), cell_ID(%d), UL_PHY_TP(%d), UL_TP(%d)
Line 3771: | %s_S |CC0 Mx%d Sc%d| PCell SFN [ %d,%d ], DL EARFCN [%2d, %4d], PCell ID [%3d], DL Bandwidth [ %s]
Line 3781: | CONN_S |CC%d Mx%d Sc%d| SCell SFN [ %d,%d ], DL EARFCN [%2d, %4d], SCell ID [%3d], DL Bandwidth [ %s]
Line 3816: |CC0 Mx%d Sc%d| PCell RSRP [%4d (%4d)], RSSI [%3d (%3d)],TimeDifference [ %6d]
Line 3821: |CC0 Mx%d Sc%d| PCell SINR [ -%01d.%02d (%3d)], RSRQ [%4d (%4d)]
Line 3823: |CC0 Mx%d Sc%d| PCell SINR [ %01d.%02d (%3d)], RSRQ [%4d (%4d)]
Line 3837: |CC0 Mx%d Sc%d| PCell RSRP [%4d (%4d)], RSSI [%3d (%3d)],TimeDifference [ %6d]
Line 3842: |CC0 Mx%d Sc%d| PCell SINR [ -%01d.%02d (%3d)], RSRQ [%4d (%4d)]
Line 3844: |CC0 Mx%d Sc%d| PCell SINR [ %01d.%02d (%3d)], RSRQ [%4d (%4d)]
Line 3857: |CC0 Mx%d Sc%d| PCell RSRP [%4d (%4d)], RSSI [%3d (%3d)],TimeDifference [ %6d]
Line 3862: |CC0 Mx%d Sc%d| PCell SINR [ -%01d.%02d (%3d)], RSRQ [%4d (%4d)]
Line 3864: |CC0 Mx%d Sc%d| PCell SINR [ %01d.%02d (%3d)], RSRQ [%4d (%4d)]
Line 3877: |CC0 Mx%d Sc%d| PCell RSRP [%4d (%4d)], RSSI [%3d (%3d)],TimeDifference [ %6d]
Line 3882: |CC0 Mx%d Sc%d| PCell SINR [ -%01d.%02d (%3d)], RSRQ [%4d (%4d)]
Line 3884: |CC0 Mx%d Sc%d| PCell SINR [ %01d.%02d (%3d)], RSRQ [%4d (%4d)]
Line 3899: |CC0 Mx%d Sc%d| PCell RSRP [%4d (%4d, %4d)], RSSI [%3d (%3d, %3d)],TimeDifference [ %6d]
Line 3904: |CC0 Mx%d Sc%d| PCell SINR [ -%01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 3906: |CC0 Mx%d Sc%d| PCell SINR [ %01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 3919: |CC0 Mx%d Sc%d| PCell RSRP [%4d (%4d, %4d)], RSSI [%4d (%4d, %4d)], TimeDifference [ %6d]
Line 3924: |CC0 Mx%d Sc%d| PCell SINR [ -%01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 3926: |CC0 Mx%d Sc%d| PCell SINR [ %01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 3939: |CC0 Mx%d Sc%d| PCell RSRP [%4d (%4d, %4d)], RSSI [%4d (%4d, %4d)], TimeDifference [ %6d]
Line 3944: |CC0 Mx%d Sc%d| PCell SINR [ -%01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 3946: |CC0 Mx%d Sc%d| PCell SINR [ %01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 3959: |CC0 Mx%d Sc%d| PCell RSRP [%4d (%4d, %4d, %4d, %4d)], TimeDifference [ %6d]
Line 3963: |CC0 Mx%d Sc%d| PCell RSRQ [%4d (%4d, %4d, %4d, %4d)]
Line 3964: |CC0 Mx%d Sc%d| PCell RSSI [%4d (%4d, %4d, %4d, %4d)]
Line 3966: |CC0 Mx%d Sc%d| PCell SINR [ -%01d.%02d (%3d, %3d, %3d, %3d)]
Line 3968: |CC0 Mx%d Sc%d| PCell SINR [ %01d.%02d (%3d, %3d, %3d, %3d)]
Line 3989: |CC%d Mx%d Sc%d| SCell RSRP [%4d (%4d, %4d)], RSSI [%3d (%3d, %3d)]
Line 3993: |CC%d Mx%d Sc%d| SCell SINR [%3d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 4000: |CC%d Mx%d Sc%d| SCell RSRP [%4d (%4d, %4d)], RSSI [%4d (%4d, %4d)]
Line 4004: |CC%d Mx%d Sc%d| SCell SINR [%3d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 4011: |CC%d Mx%d Sc%d| SCell RSRP [%4d (%4d, %4d)], RSSI [%4d (%4d, %4d)]
Line 4015: |CC%d Mx%d Sc%d| SCell SINR [%3d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 4022: |CC%d Mx%d Sc%d| SCell RSRP [%4d (%4d, %4d, %4d, %4d)], SearchTimeOffset [ %6d]
Line 4026: |CC%d Mx%d Sc%d| SCell RSRQ [%4d (%4d, %4d, %4d, %4d)]
Line 4027: |CC%d Mx%d Sc%d| SCell RSSI [%4d (%4d, %4d, %4d, %4d)]
Line 4028: |CC%d Mx%d Sc%d| SCell SINR [%3d (%3d, %3d, %3d, %3d)]
Line 4083: |CC0 Mx%d Sc%d| PCell TransMode [%d], CFI [%d], PDCCH [%5d/%5d], UCI [%5d], DCI [%5d]
Line 4091: |CC0 Mx%d Sc%d| PCell UCI_FORMAT [%d], MCS [%2d], NRB [%2d], RNTI [0x%04X]
Line 4103: |CC0 Mx%d Sc%d| PCell DCI_FORMAT [%X], MCS [%2d,%2d], NRB [%2d], RNTI [0x%04X]
Line 4110: |CC0 Mx%d Sc%d| PCell DCI_FORMAT [%X], MCS [%2d], NRB [%2d], RNTI [0x%04X]
Line 4118: |CC0 Mx%d Sc%d| PCell DL BLER [%3d%%][%5d(%d)/%5d](ack:%5d), DataRate [DL:%7d(%d) (kbps)]
Line 4122: |CC0 Mx%d Sc%d| PCell UL BLER [%3d%%][%5d(%d)/%5d], DataRate [UL:%7d(%d) (kbps)]
Line 4132: |CC0 Mx%d Sc%d| PCell eMBMS DataRate [DL:%7d(%d) (kbps)]
Line 4138: |CC0 Mx%d Sc%d| PCell eMBMS PMCH BLER[(ID:%d) %5d/%5d], MRS_SNR_RX0[%3d], MRS_SNR_RX1[%3d]
Line 4139: |CC0 Mx%d Sc%d| PCell eMBMS RSRP_RX0[%3d], RSRP_RX1[%3d], RSSI_RX0[%3d], RSSI_RX1[%3d],
Line 4148: |CC%d Mx%d Sc%d| SCell TransMode [%d], CFI [%d], PDCCH [%5d/%5d], UCI [%5d], DCI [%5d]
Line 4155: |CC%d Mx%d Sc%d| SCell UCI_FORMAT [%d], MCS [%2d], NRB [%2d], RNTI [0x%04X]
Line 4167: |CC%d Mx%d Sc%d| SCell DCI_FORMAT [%X], MCS [%2d,%2d], NRB [%2d], RNTI [0x%04X]
Line 4174: |CC%d Mx%d Sc%d| SCell DCI_FORMAT [%X], MCS [%2d], NRB [%2d], RNTI [0x%04X]
Line 4182: |CC%d Mx%d Sc%d| SCell DL BLER [%3d%%][%5d(%d)/%5d](ack:%5d)], DataRate [DL:%7d(%d) (kbps)]
Line 4189: |CC%d Mx%d Sc%d| SCell UL BLER [%3d%%][%5d(%d)/%5d], DataRate [UL:%7d(%d) (kbps)]
Line 4200: |CC%d Mx%d Sc%d| SCell eMBMS DataRate [DL:%7d(%d) (kbps)]
Line 4206: |CC%d Mx%d Sc%d| SCell eMBMS PMCH BLER [(ID:%d) %5d/%5d]
Line 4207: |CC%d Mx%d Sc%d| SCell eMBMS RSRP_RX0[%3d], RSRP_RX1[%3d], RSSI_RX0[%3d], RSSI_RX1[%3d],
Line 4234: CA DL DataRate [P:%7d(%d) (kbps), S:%7d(%d) (kbps), T:%7d(%d) (kbps)]
Line 4235: CA UL DataRate [P:%7d(%d) (kbps), S:%7d(%d) (kbps), T:%7d(%d) (kbps)]
Line 4274: |CC0 Mx%d Sc%d| PCell/SCell UL Power : PRACH [%d], PUCCH [%d], PUSCH [%d, CC%d:%d], SRS [%d], Max PUSCH Power Flag [%d]
Line 4281: |CC0 Mx%d Sc%d| PCell UL Power : PRACH [%d], PUCCH [%d], PUSCH [%d], SRS [%d], Max PUSCH Power Flag [%d]
Line 4314: |CC0 Mx%d Sc%d| PCell CQI [%2d,%2d], RI [%2d], NormTP [ %5d (bits/10RB)], CQItable[%d]
Line 4321: |CC0 Mx%d Sc%d| PCell CQI [%2d,%2d], RI [%2d], PMI[%2d,%2d], NormTP [ %5d (bits/10RB)], CQItable[%d]
Line 4328: |CC0 Mx%d Sc%d| PCell CQI [%2d], PMI[%2d,%2d], NormTP [ %5d (bits/10RB)], CQItable[%d]
Line 4335: |CC0 Mx%d Sc%d| PCell CQI [%2d], NormTP [ %5d (bits/10RB)], CQItable[%d]
Line 4347: |CC%d Mx%d Sc%d| SCell CQI [%2d,%2d], RI [%2d], CQItable[%d]
Line 4354: |CC%d Mx%d Sc%d| SCell CQI [%2d,%2d], RI [%2d], PMI[%2d,%2d], CQItable[%d]
Line 4361: |CC%d Mx%d Sc%d| SCell CQI [%2d], PMI[%2d,%2d], CQItable[%d]
Line 4368: |CC%d Mx%d Sc%d| SCell CQI [%2d], CQItable[%d]
Line 4376: |CC0 Mx%d Sc%d| PCell TXC [%8d,%8d,%8d], RXC [%8d,%8d,%8d]
Line 4382: |CC%d Mx%d Sc%d| SCell TXC [%8d,%8d,%8d], RXC [%8d,%8d,%8d]
Line 4386: |CC0 Mx%d Sc%d| PCell STR  %7d %4d %7d %7d  | RTG [ %6d]
Line 4392: |CC%d Mx%d Sc%d| SCell STR  %5d %4d %7d %7d  | RTG [ %6d]
Line 4417: |CC0 Mx%d Sc%d| PCell Frequency [DL: %dkHz, UL: %dkHz], Bandwidth [DL: %s, UL: %s], Antenna No. [eNB: %d, UE: %d]
Line 4425: |CC%d Mx%d Sc%d| SCell Frequency [DL: %dkHz, UL: %dkHz], Bandwidth [DL: %s, UL: %s], Antenna No. [eNB: %d, UE: %d]
Line 4429: |CC%d Mx%d Sc%d| SCell Frequency [DL: %dkHz], Bandwidth [DL: %s], Antenna No. [eNB: %d, UE: %d]
Line 4434: |CC0 Mx%d Sc%d| PCell AGC %3d %3d (%3d %3d) (%4d %4d) , RMS Cntl : %2d dB
Line 4440: |CC%d Mx%d Sc%d| SCell AGC %3d %3d (%3d %3d) (%4d %4d)
Line 4453: |CC0 Mx%d Sc%d| PCell AFC PDM: %4d, ANGLE: %4d  |  DCmV  %4d %4d, %4d %4d
Line 4458: |CC%d Mx%d Sc%d| SCell AFC ANGLE: %4d  |  DCmV  %4d %4d, %4d %4d
Line 3520: LTEDMTaskPoll_LTE_DM_NULL
Line 3368: PDCCH C/U:0x%02x 0x%02x, CFI:0x%02x ..PDCCH_FER:(%d/%d), (%d/%d)
Line 3379: PDCCH FORMAT:%X, HOPPING:%d, RA:0x%x, MCS:%d, NDI/TPC:%03d, CQI/SHIFT:%03d, RNTI:0x%X
Line 3394: PDCCH FORMAT:%X, RA:0x%x, MCS:%04d, ACID:%d, SWAP/PCI/RV/NDI:0x%08x, TYPE/TPC/NRB:%07d, RNTI:0x%X
Line 3403: PDCCH FORMAT:%X, RA:0x%x, MCS:%d, ACID:%d, TPMI/PMI/RV/NDI:0x%08x, LD/TPC/NRB:%05d, RNTI:0x%X
Line 3411: PDCCH FORMAT:%X, RA:0x%x, MCS:%d, GAP:%d, NRB:%d, RNTI:0x%X
Line 3420: PDCCH FORMAT:%X, RA:0x%x, MCS:%d, ACID:%d, POff/TPMI/RV/NDI:0x%08x, LD/TPC/NRB:%05d, RNTI:0x%X
Line 3429: PDCCH FORMAT:%X, RA:0x%x, MCS:%d, ACID:%d, RV/NDI:0x%04x, LD/TPC/NRB:%05d, RNTI:0x%X
Line 3438: PDCCH FORMAT:%X, RA:0x%x, MCS:%d, ACID:%d, RV/NDI:0x%04x, TYPE/TPC/NRB:%05d, RNTI:0x%X
Line 3448: PDCCH FORMAT:%X RNTI:0x%x
Line 3454: FREQUENCY HOPPING:%d
Line 3461: BCCH_FER:(%d/%d), (%d/%d)
Line 3469: PDSCH ... PDSCH_FER:(%d/%d), (%d/%d)
Line 3475: DL RB_CNT(CC0:%d, CC1:%d, CC2:%d)
Line 3476: UL RB_CNT(CC0:%d, CC1:%d, CC2:%d)
Line 3482: [IC_INFO_MAX3] Mode(%d) State(%d) Num_activated(%d) ITF2_CCMapping(%d) ITF1_CCMapping(%d) ITF0_CCMapping(%d)
Line 3483: [IC_INFO_MAX3] ITF0_cellID(%d) ITF1_cellID(%d) ITF2_cellID(%d)
Line 3487: [IC_INFO_MAX2] Mode(%d) State(%d) Num_activated(%d) ITF1_CCMapping(%d) ITF0_CCMapping(%d)
Line 3488: [IC_INFO_MAX2] ITF0_cellID(%d) ITF1_cellID(%d)
Line 4950: | U-CPU Idle = [0x%x 0x%x], %d MHz | L-CPU Idle = %2d.%d%% | MIF = %d MHz | HARQ stuck = %d
Line 4984: SystemDynamic Usage : %2d%% (%2d%%) [ %dk total, %dk used, %dk free ]  |  PMD Usage: %2d%% (%2d%%) [ %dk total, %dk used, %dk free ]
Line 4625: RACH : INIT [%3d], HO_DEDI [%3d], HO_RAND [%3d], RACH_RLF [%3d], UL_RAND [%3d], DL_DEDI [%3d], DL_RAND [%3d]
Line 4626: SR [%5d, %5d], TA Timer Expired [%3d], ReTx BSR Timer Expired [%3d], DSR MAX FAIL [%3d][%3d]
Line 4765: Cell Reselection : Start [%3d], Complete [%3d]
Line 4772: Meas Report [%3d] | Handover : Start [%3d], Complete[%3d], Latency [%3dms] | RRE : Start [%3d], Reject [%3d]
Line 4776: RRE Cause : T304HoFail[%3d], RachFail[%3d], RlcMaxRetrans[%3d], T310OutOfSync[%3d], ReconfigFail[%3d]
Line 4779: RRE Cause : IntegrityCheckFail[%3d], MobCmdFail[%3d], IratConfigFail[%3d], MuiListFail[%3d], Other[%3d]
Line 4784: Protocol Error Detect : lte_ul_oos[%3d], lte_rach_rar_mismatch[%3d], lte_rach_access_fail[%3d], lte_rrc_oos[%3d], lte_rrc_rlf[%3d], lte_rrc_resel_fail[%3d]
Line 4786: Protocol Error Detect : lte_rrc_ho_fail[%3d], lte_rrc_irat_ho_fail[%3d], lte_rrc_irat_resel_fail[%3d], lte_rrc_irat_redirect_fail[%3d], lte_rrc_sib_read_fail[%3d], lte_rrc_endc_no_rsp[%3d]
