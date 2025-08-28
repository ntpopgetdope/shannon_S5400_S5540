Line 117: allocate l1x_data_controller->l1x_HAL_RxTx
Line 147: [GL1 Error] No Memory Allocated bank_index:%d ts_index:%d
Line 182: free l1x_data_controller->l1x_HAL_RxTx
Line 229: [GL1 Error] mfrm_period is 0
Line 288: DSC incremented: DSC=%d DSCmax=%d
Line 297: DSC decremented by 4: DSC=%d DSCmax=%d
Line 302: DSC reached zero value; DSC=%d DSCmax=%d 
Line 323: Requesting SIM ID wrong. Check!
Line 328: MPH_ERROR_IND(PCCCH)
Line 400: Invaild BI(%d)
Line 422: PH_PACKET_DATA_IND to %d
Line 427: PH_PACKET_DATA_IND to %d 
Line 432: Requesting SIM ID wrong. Check!
Line 436: GOOD PCCCH %d
Line 450: mac_TriggerAdd to Sim %d
Line 462: mac_TriggerAdd to Sim %d
Line 467: Requesting SIM ID wrong. Check!
Line 480: PH_DATA_TRIGGER_IND to Sim %d
Line 485: PH_DATA_TRIGGER_IND to Sim %d
Line 490: Requesting SIM ID wrong. Check!
Line 506: L1C => MAC :: PH_DATA_TRIGGER_IND Sending Fail
Line 513: GOOD PDTCH
Line 521: [DEBUG-AS] l1x_gprs_rx_handler AvgPrx [%d] AvgDrx [%d] AS_PDTCH_COUNT [%d]
Line 547: [GL1 Error] No Memory Allocated bank_index:%d timeslot_no:%d
Line 587: Rx TA %d
Line 611: 1x_handler_ptcch(). chan:%d, TAI:%d. NewTAVal:0x%x
Line 628: GOOD TA(%d) IDX:%d ATV:%d  {%d}
Line 643: BAD TA FN:%d
Line 702: [GL1 Error] Invaild BI(%d)
Line 723: [GL1 Error] Invaild BI(%d)
Line 746: Requesting SIM ID wrong. Check!
Line 764: [GL1 Error] No Memory Allocated bank_index:%d timeslot_no:%d
Line 801: %s%s(%d) {%d,%i}
Line 867: Invaild TS(%d)
Line 873: Invaild BI(%d)
Line 895: *** Aborting gprs rx hdlr due to error on previous invocation, FN %2i, TS %i
Line 932: *** ERROR BRH Inv state, Bank %1i, Inv State %1i, FN %2i
Line 948: *** ERROR %1i:NULL data bufer
Line 955: *** ERROR %1i:NULL exit handler	mFN%2i
Line 966: %1ith bad%1i TS%1i FN%8lu F%4i
Line 971: %1ith bad+good%1i TS%1i mFN%2i F%4i
Line 979: BIG BER err%2d
Line 985: TOI[%3d%3d%3d%3d]
Line 991: FOI[%4d%4d%4d%4d]
Line 997: m[%5d%5d%5d%5d]
Line 1003: E[%5d%5d%5d%5d]
Line 1009: P[%5d%5d%5d%5d]
Line 1024: l1x_gprs_rx_handler invalid simno check
Line 1179: BAD PDTCH TS:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 1240: PTCH RX END FN_416:%d 
Line 1306: PTCCH state machine DEACTIVATED for receiving CCH
Line 1380: ERROR - Prep PCCCH, no dl ts allocated, aborting.
Line 1417: ** WARNING ppg.mfrm_period = 0
Line 1450: [GL1 Error] Invaild BI(%d)
Line 1459: *** ERROR BRH not invoked for bank index %1i, prep FN %2i, curr FN %2i
Line 1475: PREP_PCCCH BCCH ARFCN %d Blk Type %d, Chn Type %d
Line 1524: Invaild BI(%d)
Line 1535: *** ERROR BRH not invoked for bank index %1i, pre FN %2i, curr FN %2i
Line 1553: PDTCH/D d_mask 0x%2x, FN52 %2i, ARFCN %4i, FNABS %8ld
Line 1645: ERROR - Invalid mask - Base %i, Class %i, d_mask 0x%2x
Line 1650: GPRS Burst Alloc Base %i, Class %i, d_mask 0x%2x
Line 1721: PTCCH SKIP for DTM
Line 1766: PREP_TA {%7d} PTCCH TS-%d
Line 1774: *** E TS M:%X A:%d UT:%d DT:%d
Line 1802: l1x_gprs_enter_serve_cbch_seq
Line 1880: PTCH TX IDX:%d FN_416:%d
Line 1895: PTCH RX IDX:%d FN_416:%d 
Line 1905: PTCCH RX IDX:%d FN_416:%d - RESEND
Line 1965: Invaild BI(%d)
Line 1993: Requesting SIM ID wrong. Check!
Line 1996: GOOD PCCCH %d
Line 2025: Requesting SIM ID wrong. Check!
Line 2047: Requesting SIM ID wrong. Check!
Line 2063: L1C => MAC :: PH_DATA_TRIGGER_IND Sending Fail
Line 2070: GOOD PDTCH
Line 2077: [DEBUG-AS] l1x_gprs_rx_handler_pdtch_InEGPRS AvgPrx [%d] AvgDrx [%d] AS_PDTCH_COUNT [%d]
Line 2133: BFI in UNACK_MODE for EGPRS is not set.
Line 2150: mac_TriggerAddEgprs to Sim %d
Line 2164: mac_TriggerAddEgprs to Sim %d
Line 2168: Requesting SIM ID wrong. Check!
Line 2185: Requesting SIM ID wrong. Check!
Line 2195: L1C => MAC :: PH_DATA_TRIGGER_IND Sending Fail
Line 2238: Invaild TS(%d)
Line 2244: Invaild BI(%d)
Line 2269: *** Aborting gprs rx hdlr due to error on previous invocation, FN %2i, TS %i
Line 2325: *** ERROR BRH Inv state, Bank %1i, Inv State %1i, FN %2i
Line 2369: Decoding fail in RLC Unack Mode. Free data memory
Line 2422: SDS ALLOC. %d
Line 2427: SDS FREE. %d
Line 2436: read SD1 %x
Line 2439: schedule SD1 %x
Line 2442: read SD2 %x
Line 2445: schedule SD2 %x
Line 2459: SDS  FREE RLC ERROR
Line 2473: IsSdBufferPtr: Dynamic memory
Line 2477: IsSdBufferPtr: Stationary memory
