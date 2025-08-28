Line 175: Fail pal_Malloc and Fail LTE_L2LTX_L2LTX_RACH_HISR_TO_TASK !!! 
Line 200: [L1TX => L1LC] L2LTXMAC_DspCmd_SetRachCmd(ST:%d, ENTITY:%d)
Line 205: [WARN][MACTX] L2LTXMAC_DspCmd_SetRachCmd : Cannot Allocate L2LTX_L1LC_HALDSP_CMD_IND
Line 227: [L1TX => L1LC] L2LTXMAC_DspCmd_SetRNTICmd(ST:%d, ENTITY:%d)
Line 232: [WARN][MACTX] L2LTXMAC_DspCmd_SetRNTICmd : Cannot Allocate L2LTX_L1LC_HALDSP_CMD_IND
Line 289: [MULTICORE] L2LTXMAC_RAReleaseAll: End RACH Procedure. RACause[%d]
Line 437: [Multicore] L2LTXMAC_TriggerRA_RRC: RACause[%d]
Line 443: RRC triggered MAC[%d] HO RACH, RACH[%d] is ended
Line 455: [MULTICORE] L2LTXMAC_TriggerRA_RRC: LTEL2Common_UnSetTaskAffinity. RACause==LTE_RRC_HO_RACH
Line 462: RRC triggered MAC[%d] RACH, but RACH[%d] is on-going
Line 503: [MULTICORE] L2LTXMAC_TriggerRA_RRC: L2LTXMAC_SendL1LCTxReq
Line 550: [MULTICORE] L2LTXMAC_TriggerRA_MAC
Line 555: MAC[%d] triggered RACH, but RACH[%d] is on-going
Line 578: [MULTICORE] L2LTXMAC_TriggerRA_MAC: L2LTXMAC_SendL1LCTxReq
Line 611: [MULTICORE] L2LTXMAC_TriggerRA_MAC: Fail to alloc mem
Line 856: [MULTICORE] L2LTXMAC_SendRApreamble: End RACH procedure
Line 864: MAC Released %d
Line 868: [MULTICORE] L2LTXMAC_SendRApreamble: End RACH procedure
Line 891: RACH Group[%d], ID[%d]
Line 946: RAP on an SCell(sCellIndex:%d) is aborted because the SCell is deactivated.
Line 950: [MULTICORE] L2LTXMAC_SendRApreamble: End RACH procedure
Line 963: |UE -> eNB|  MSG1 : RACH (Entity[%d] Group[%d] ID[%d] Cause[%d])
Line 1039: [LTE_L1TX] Send NRMAC_L2LTX_RACH_START_REQ
Line 1076: LTE_CMAC_RACH_START_CNF malloc fail
Line 1087: RA not triggerd or canceled
Line 1150: Twait timer[%d] expired [%d]
Line 1199: RAP on an SCell(sCellIndex:%d) is aborted because the SCell is deactivated.
Line 1203: [MULTICORE] L2LTXMAC_TwaitTimerExpired_Hisr: End RACH procedure
Line 1213: RACH on SCell(idx:%d) is unsuccessfully completed
Line 1219: [MULTICORE] L2LTXMAC_TwaitTimerExpired_Hisr: End RACH procedure
Line 1232: LTE_CMAC_RACH_STATUS_IND malloc fail
Line 1334: [HAL => L2LTX] Send HAL_L2LTX_CR_TIMER_EXPIRED_IND
Line 1364: CR timer[%d] expired [%d]
Line 1376: Sent CCCH 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 1381: Sent Msg3 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 1396: Malloc Fail LTE_L2LTX_L2LTX_TA_TIMER_IND
Line 1486: The RA procedure on an SCell by PDCCH order is unsuccessfully completed.
Line 1490: [MULTICORE] L2LTXMAC_CRTimerExpired_Hisr: End RACH Procedure
Line 1500: LTE_CMAC_RACH_STATUS_IND malloc fail
Line 1592: CR OK [%d]
Line 1599: [MULTICORE] L2LTXMAC_DSPCRSuccess_Hisr: End RACH Procedure
Line 1611: LTE_CMAC_RACH_STATUS_IND malloc fail
Line 1635: DSP CR Success,,,invalid RA cause[%d]
Line 1642: [MULTICORE] L2LTXMAC_DSPCRSuccess_Hisr: End RACH Procedure
Line 1667: [MACTX] RACH Aborted by bForceMask(DSP), Trigger SR
Line 1773: |UE <- eNB| CR OK, <<< HO Success[%d] >>>
Line 1793: Invalid DRACH_CMD_SUCCESS[%d]
Line 1808: [MULTICORE] LTE_L2LTX_L2LTX_DSP_CROK_IND: Fail to alloc mem
Line 1893: RAP by PDCCH order: Another (Cause:%d) is already on-going.
Line 1927: PDCCH order:RAP on SCell(%d): The SCell is not activated
Line 1933: PDCCH order:RAP on SCell(%d): The SCell belongs to pTAG (invalid).
Line 1939: PDCCH order:RAP on SCell(%d): ra-PreambleIndex is 0x0 (invalid).
Line 1983: RAP by PDCCH order: Another (Cause:%d) is already on-going.
Line 1986: SLAM : ptrL1TxRxCommonDb->RACause == LTE_RACH_DL_DEDI
Line 1992: Repeater RACH Triggered
Line 2080: CR OK
Line 2089: LTE_CMAC_RACH_STATUS_IND malloc fail
Line 2115: LTE_CMAC_RACH_STATUS_IND malloc fail
Line 2135: CR OK (RA on an SCell by PDCCH order)
Line 2139: CR status check,,,invalid RA cause
Line 2150: [MULTICORE] L2LTXMAC_CheckCRStatus: End RACH Procedure
Line 2163: The RA procedure on an SCell by PDCCH order is unsuccessfully completed.
Line 2167: [MULTICORE] L2LTXMAC_CheckCRStatus: End RACH Procedure
Line 2176: LTE_CMAC_RACH_STATUS_IND malloc fail
Line 2224: Invalid LTE_L2LTX_L2LRX_CR_STATUS_IND[%d]
Line 2246: PUCCH-SR -> RA-SR : Stack[%d], MacEntity[%d]
Line 2331: LTE_CMAC_RACH_STATUS_IND malloc fail
Line 2397: LTE_CMAC_RACH_STATUS_IND malloc fail
Line 2444: RA is not going on
Line 2530: DSDS RACH Stop & Resume
Line 704: pTempRBSchedInfo==NULL !!
Line 2033: StackId[%d] BackOff timer[%d] expired
Line 1113: [HAL => L2LTX] Send HAL_L2LTX_T_WAIT_TIMER_EXPIRED_IND
Line 1850: [MULTICORE] L2LTXMAC_DSPRachStart_Hisr: L2LTXMAC_SendL1LCTxReq
Line 1702: LTE_CMAC_PUCCH_SRS_RELEASE_IND malloc fail
Line 1706: DSR MAX FAIL & PUCCH RELEASE
Line 1729: [Multicore] pMsg malloc error
Line 1738: [Multicore] SR Rach request from Hisr to L2LTX Task
