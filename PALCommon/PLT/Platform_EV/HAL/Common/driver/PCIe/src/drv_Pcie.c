Line 374: GET int@HISR :%x
Line 389: Wait for EVT_PCIE_PERST_HIGH
Line 406: Wait for EVT_PCIE_PERST_HIGH
Line 413: xdma is not running
Line 425: RX DMA descriptor was made
Line 445: send PCIE_INT_RES_ACK_F@hw_pcieSBHisr
Line 452: send PCIE_INT_REQ_ACK_R@hw_pcieSBHisr
Line 470: DMA is activated
Line 511: DMA is activated already
Line 578: Q is EMPTY
Line 623: Invalid Q ID @enQ
Line 673: [PKTPROC] Q is Empty
Line 686: Invalid Q ID @deQ
Line 697: deQ fail
Line 954: hw_startDLPktProc with HOSTIF_TX_PKTPROC_DECIPHER_CMD
Line 956: HOSTIF_TX_PKTPROC_DECIPHER_CMD is not triggered
Line 963: hw_startDLPktProc with HOSTIF_TX_PKTPROC_DECIPHER_CMD
Line 1004: RFS 0x%x byte
Line 1028: RFS 0x%x byte add Q
Line 1037: no memory @%d
Line 1051: RFS 0x%x byte add Q
Line 1057: no memory @%d
Line 1072: RFS Free
Line 1085: RFS Add to RAW_Q
Line 1194: pcieL2EntryTimerHandler
Line 2038: [PCIE] Offset CAPA:0x%X
Line 2070: PCIe task suspended

Line 2075: PCIe Actual flag : %x

Line 2090: PCIe CP got SB INTR from AP

Line 2095: PCIe Polling Start

Line 2134: Stop PCIE timer and PCIE INT ENA : %d

Line 2144: PCIe Door Bell register is set

Line 2167: PCIe Doorbell interrupt but no data in UL buffer

Line 2190: Get EVT_PCIE_LINK_DN_DONE. LTSSM(0x%x)

Line 2208: PCIe Power down HSI block

Line 2226: PCIe SB Intr get @ Linkdown Ready

Line 2232: PCIe CP has data to send

Line 2238: PCIe VSS has pcm data to send

Line 2243: hw_pcieEnableWakelock return FALSE

Line 2252: PCIe Processing Perst High Event

Line 2259: PCIe Wait Perst High/Low/Linkup(0x%x)

Line 2264: PCIe Processing Perst High Event

Line 2270: Getting PCIe Linkup start Event

Line 2275: Getting PCIe Linkup done Event

Line 2287: Wait PCIe Linkup Status

Line 2313: PCIE OPT: Reset Control Data.
Line 1657: [PCIE OPT]: txInfo is not Null! Operation mode: %d, size:%d
Line 1659: [PCIE OPT]: txInfo is Null! Operation mode: %d
Line 1661: [PCIE OPT]: UL bytes difference: %d, DL bytes difference: %d, gSlotCntForNoIcmpReq: %d, pollCnt: %d
Line 1662: [PCIE OPT]: UL accumulated bytes: %d bytes, DL accmulated bytes: %d bytes. <=== Algo Ends
Line 1687: hw_startDLPktProc at apifPoll
Line 1695: hw_startDLPktProc at apifPoll
Line 1701: [PCIE OPT]: Flush to AP and Reset accumulated bytes and pollCnt. Flush Reason: %d. 

Line 1730: pcieTIMER KICK @pcieTask
Line 1772: No data for %dms
Line 1784: Data in UL buffer. Keep Polling
Line 1825: Start pcieL2EntryTimer:%d
Line 1859: Got doorbell while polling(%d) in L1.2
Line 1871: Got CP2AP data while polling(%d) in L1.2
Line 1875: Got CP2AP data while polling(%d) in L1.2
Line 1891: actualFlag : 0x%x
Line 1901: PCIe L2 Timer expired & Sideband Evt occured : go to polling again
Line 1947: Stop pcieL2EntryTimer
Line 1965: No data %d/%d
Line 1975: No data for %dms -> but ABOX processing does not end
Line 1983: No data for %dms -> but BTL processing does not end
Line 2005: No data for %dms -> Prepare to dislink
Line 2017: PCIe Err_Evt
Line 1255: [PCIE] Event 0x%x received
Line 1315: PCIe Processing Perst High Event

Line 1321: PCIe Wait Perst High/Low/Linkup(0x%x)

Line 1327: PCIe Processing Perst High Event

Line 1333: Getting PCIe Linkup start Event

Line 1338: Getting PCIe Linkup done Event

