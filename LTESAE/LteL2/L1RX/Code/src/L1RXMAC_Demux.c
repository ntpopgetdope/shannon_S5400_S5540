Line 370: NULL input parameter!
Line 404: L2LRXMAC_CfgDemux() LTE_LC_SETUP RBID invalid!
Line 420: L2LRXMAC_CfgDemux() LTE_LC_MODIFY RBID invalid!
Line 429: L2LRXMAC_CfgDemux() LTE_LC_RELEASE RBID invalid!
Line 494: [DRX] Receiving Successs: Paging Message : CellId[%d]
Line 498: P-RNTI PDU, Invalid Length[%d]
Line 531: SI-RNTI PDU, Invalid Length[%d]
Line 558: TM PDU, Invalid RNTI
Line 565: [TM]LTE_PDCP_DATA_IND malloc fail
Line 687: RA preamble ID[%d] matched!!! Entity[%d] msg2 ptr:0x%x size:%d
Line 696: RA preamble mis-matched!!! Entity[%d] sent[%d] received[%d]
Line 718: E/T/RR/BI MAC sub-header's RR field is not zero
Line 726: BI [%d]
Line 757: Forced Accept RA preamble !!! sent[%d] by mismatchType[%d]
Line 808: MACPDU DUMP[%x %x %x %x %x %x %x]
Line 809: MACSDU DUMP[%x %x %x %x %x %x %x]
Line 853: LTE_PDCP_DATA_IND malloc fail
Line 861: LTE_PDCP_DATA_IND pData malloc fail
Line 907: CCCH Again[Stack[%d]: UE_CR_OK %d BLOCK CCCH %d]
Line 959: UE_CR_ID Again in state %d, Block CCCH
Line 964: UE_CR_ID Again (0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X) in state %d, Send other UE's CCCH up to RRC(let it perform local release)
Line 981: Mac[%d]: CR FAIL(There's no UE_CR_ID CE)!!!
Line 1013: LTE_L2LTX_L2LRX_CR_STATUS_IND malloc fail
Line 1786: [MACRX%d][ST%d] ProcNormalMacPdu sduCnt=0
Line 1810: [MACRX%d][ST%d] ProcNormalMACPDU : RxPduTableIdx[%x], lcid[%x], pPDU[%x], pMACPDU[%x], PduLen[%x], ccidx[%d], cwidx[%d]
Line 1816: [MACRX%d][ST%d] TTI[%d]/CC[%d]/TB[%d] CCCH [Stack[%d]: UE_CR_OK %d BLOCK CCCH %d]
Line 1817: [MACRX%d][ST%d] CCCH MAC PDU:
Line 1858: Mac[%d]: UE_CR_ID Received
Line 1981: L2LRXMAC_Core0Proc_ProcMacPDU : invalid workid
Line 2039: L2LRXMAC_ProcMACPDU : pMacPduInfo->PduAddr is NULL
Line 2050: All Zero Data received(TB Size:%d, #PDU:%d)!!
Line 2063: RNTI value is default value!!!
Line 2087: [MULTICORE] LTE_ProcForwardMsg_N_Wait
Line 1410: MAC RX Desc Full trigger RRE , CorruptedDataInfo :: Idx(%d) RdIdx(%d) WrIdx(%d) Stack(%d) RBID(%d), SN(%d) SI(%d)
Line 1420: MAC[%d]: sub-header's R not zero
Line 1457: CCCH PDU after RLC PDU
Line 1464: MAC sub-header's f2 not zero; extension is false.
Line 1474: MAC[%d]: tbSize<headerSize+payloadSize
Line 1518:  MAC[%d]: lengthField=0
Line 1560: Discard MAC PDU Inx %d UnProcessedDataInfo :: RdIdx(%d) WrIdx(%d) Stack(%d) RBID(%d), SN(%d) SI(%d)
Line 1571: MAC[%d]: After MAC header parsing, extension is still TRUE
Line 1579: MAC[%d]: MAC CE[0x%x] only received without padding sub-header
Line 1583: MAC[%d]: After MAC header parsing, tbSize is not the same as <headerSize+payloadSize>'
Line 1133: MAC_DL_RECOM_BIT_RATE_ID CE received
Line 1137: Recommended bit rate CE after RLC PDU
Line 1150: MAC_SCPTM_STOP_IND CE received
Line 1154: Recommended bit rate CE after RLC PDU
Line 1172: MAC_ACT_DEACT_4OCT_ID after RLC PDU
Line 1190: MAC[%d]: LONG DRX CMD CE after RLC PDU
Line 1209: MAC[%d]: MAC_ACT_DEACT_ID after RLC PDU
Line 1227: MAC[%d]: UE CR ID CE after RLC PDU
Line 1242: MAC[%d]: TA CE after RLC PDU
Line 1257: MAC[%d]: DRX CMD CE after RLC PDU
Line 1274: MAC[%d]: Dummy padding after MAC CE(%d) or RLC PDU(%d)
Line 1298: L2LRXMAC_ProcNormalMACPDU : MAC_PADDING_ID, clear extension bit
Line 1315: MAC[%d]: lengthField=0
Line 1351: MAC[%d]: Invalid LCID
