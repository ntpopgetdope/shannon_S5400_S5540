Line 241: TX-> TX_NULL
Line 244: TX-> TX_GRR_CNF
Line 247: TX-> TX_ESTABLISHED
Line 250: TX-> TX_WAIT_FAI
Line 253: TX-> TX_WAIT_REL
Line 256: TX-> TX_MAC_CNF
Line 267: DL-> RLC_IDLE
Line 270: DL-> RLC_DTBF
Line 281: UL-> RLC_IDLE
Line 284: UL-> RLC_UEST
Line 287: UL-> RLC_UTBF
Line 348: [%s][%s] %s
Line 380: loop back mode,Ignore NASU data 
Line 387: GTTP REQ is sent to GRR 
Line 390: RLC_DATA_REQ grrAccessReqd = %d  
Line 402: Waiting for RETRY TIMER
Line 409: Waiting for T3142 TIMER
Line 447: ** GRR Failed to respond to GRLC **
Line 515: SUSPEND_REQ immrel %d
Line 519: Stop %s
Line 526: SAPI1 sigalling is on-going. Delaying suspension
Line 607: GRR_RLC_RESUME_REQ
Line 643: Gprs Validity =  %d, Ext Ul TBF %d 
Line 649: maxLapdm:1 =  %d 
Line 655: maxLapdm:2 =  %d 
Line 661: maxLapdm:3 =  %d 
Line 671: Update T3168 %d ms
Line 718: EGRPS feature in cell =  %d
Line 744: Transcation Id Mismatch : Rcvd(%d) Last Sent(%d)
Line 754: Waiting for DL to release
Line 860: ACC REJ for PMR.. Clear rlc_meas_rpt
Line 890: tx_pdu %d
Line 945: UL TBF Params: EGPRS TBF, MCS given by MAC is %d: Using default MCS 1
Line 979: RX GRR block %d
Line 993: ERROR:GRR data req %d :not in transfer
Line 1007: ERROR:GRR PMR received (PMR_PTM) %d :not in transfer
Line 1067: *UL TBF Params: Old MCS = %d, New MCS = %d
Line 1069: UL CODING SCHEME %d 
Line 1072: MCS 5-7 is assigned
Line 1076: MCS 6-9 is assigned
Line 1125: UL TBF Params: EGPRS TBF, MCS given by MAC is %d: Using default MCS 1
Line 1142: *UL TBF Params: EGPRS TBF, MCS = %d, WS = %d, resegment = %d
Line 1144: UL CODING SCHEME %d 
Line 1153: UL CODING SCHEME %d 
Line 1156: UL TBF Params: GPRS TBF, CS = %d
Line 1294: NULL Pointer Return
Line 1301: UL TBF Params: Tfi = %d, Arfcn = %d
Line 1349: NULL Pointer Return
Line 1356: UL TBF Params: Tfi = %d, Arfcn = %d
Line 1414: go UTBF for single block
Line 1438: Contention resolution for 2 phase access complete
Line 1469: Chn Req: %d
Line 1486: Release BOTH TBFs
Line 1569: DTM REQUSET 
Line 1685: NULL Pointer Return
Line 1705: Contention resolution for 1 phase access complete
Line 1736: Ignore DL assignment
Line 1775: DL TBF Params: TBF mode = %d, WS = %d, rlc mode= %d, Arfcn = %d
Line 1789: NULL Pointer Return
Line 1820: (unsigned)rlc_recd_Body->mT_MAC_RLC_DATA_IND.bsn : %d rlc_egprs_tbf_mode : %d
Line 1869: rlc_HandleT3180_EXPIRY, EGPRS tbf mode : %d
Line 1884: NULL Pointer Return
Line 1924: rlc_HandlePA_REJECT_WITHOUT_WIF_Error, remove_data : %d
Line 1961: rlc_HandleIMM_ASS_CHANGE_MARK_FAIL, remove_data : %d
Line 1995: rlc_HandleDTM_FAILURE_NO_CHAN_REL, tbf_direction : %d
Line 2011: Start %s
Line 2026: Start %s
Line 2054: rlc_HandleCHN_REJ, rlc->dl.active : %d
Line 2072: Start %s
Line 2288: Start %s
Line 2377: Stop %s
Line 2637: GMM_RLC_GPRS_TEST_MODE_CMD_IND
Line 2641: GPRS Test Mode : (%d) PDU Desc : %x %x %x %x
Line 2665: GPRS Test Mode : (%d)
Line 2796: T3168 Expiry (imm_prr %d delay_prr %d)
Line 2833: T3168 Expiry immediate PRR release %d
Line 2873: T3168 Expiry delayed PRR release %d
Line 2927: DTM REQUSET 
Line 3027: Re-Init PDU Table
Line 3092: DTM REQUSET 
Line 3146: UL-> %s : DL-> %s : TX-> %s
Line 3167: UL-> %s : DL-> %s : TX-> %s
Line 3195: TLLI_ASSIGN %x %x %x %x
Line 3278: TLLI_CHANGE (WAIT) %x %x %x %x
Line 3288: TLLI_CHANGE (NOW) %x %x %x %x
Line 3324: TLLI_UNASSIGN
Line 3330: RLC DL TLLI %x %x %x %x
Line 3336: RLC UL TLLI %x %x %x %x
Line 3374: LLC_RLC_SUSPEND_REQ is ignored in TEST MODE
Line 3402: Pend Pdu Added to TX
Line 3445: Re-Init PDU Table
Line 3458: Flow ON (Trigger)
Line 3530: Start %s
Line 3547: PDU de-allocation table failure
Line 3551: Re-Init PDU Table
Line 3558: Start %s
Line 3628: NULL Pointer Return
Line 3718: NULL Pointer Return
Line 3740: TX_UPDATE: MCS given by MAC is %d: RLC using MCS %d
Line 3784: RLC_ERROR : MSG rlc_recd_signal = %04X
Line 3827: Start %s(%d)
Line 3891: DL Data from MAC -> RLC
Line 4021: GRR_RLC_DTM_GTTP_DATA_IND Len = %d 
Line 4027: NULL Pointer Return
Line 4035: TLLI_GRR %x %x %x %x
Line 4041: TLLI_RLC %x %x %x %x
Line 4050: Invalid TLLI DL %x GRR %x  
Line 4082: GRR_RLC_DTM_GTTP_DATA_CNF SeqNo %d Result %d 
Line 4099: NULL Pointer Return
Line 4150: PDU added to PDU Information table 
Line 4171: rr_SetDTMAccessStatusToRlc %d 
Line 4201:  Setting reverse dependency function pointers
