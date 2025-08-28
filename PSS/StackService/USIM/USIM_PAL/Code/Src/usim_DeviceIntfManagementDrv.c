Line 155: [USIM_%d] >> ResetUsim
Line 180: [USIM_%d] Unable to poweron chip
Line 189: [USIM_%d] pal_DrvSocketRequest..UICC_ACTIVATION
Line 190: [USIM_%d] LocHweo = 0x%x
Line 191: [USIM_%d] TxRxDataBlock = 0x%x
Line 197: [USIM_%d] Selecting UICC_ACTIVATION Command -> O.K
Line 203: [USIM_%d] Activation Success -> O.K and Sleep for 10ms due to PPS exchange
Line 219: [USIM_%d] Result -> UICC_DECODE_ATR
Line 227: [USIM_%d] pal_DrvSocketRequest..UICC_DECODE_ATR_CMD
Line 228: [USIM_%d] LocHweo = 0x%x
Line 229: [USIM_%d] TxRxDataBlock = 0x%x
Line 235: [USIM_%d] after pal_DrvSocketRequest >>>
Line 237: [USIM_%d] pal_DrvSocketRequest..UICC_DECODE_ATR_CMD
Line 238: [USIM_%d] LocHweo = 0x%x
Line 239: [USIM_%d] TxRxDataBlock = 0x%x
Line 245: [USIM_%d] Decoding ATR Command -> O.K and Sleep for 10ms due to PPS exchange
Line 256: [USIM_%d] Failed to Decode ATR Command, PAL Error -> 0x%02X
Line 301: [USIM_%d] Failed to Reset UICC!
Line 302: [USIM_%d] TxRxDataBlock->Result = 0x%x
Line 308: [USIM_%d] Result -> UICC_ACC_SUCC
Line 324: [USIM_%d] UICC_PROTOCOL_T0
Line 336: [USIM_%d] UICC_PROTOCOL_T1
Line 348: [USIM_%d] UICC_PROTOCOL_UNDEFINED
Line 364: [USIM_%d] ATR - LengthOfRspData -> %d, RspData -> 
Line 367: [USIM_%d] Reseting UICC -> O.K
Line 377: [USIM_%d] Failed to Reset UICC
Line 383: [USIM_%d] pal_DrvSocketRequest Error %d
Line 413: [USIM_%d] Tech Problem StatusWord Count - 0x%X
Line 421: [USIM_%d] Tech Problem, USIM is not initialized, Skip to send Error Status
Line 440: [USIM_%d] Tech Problem, Set TechProblemStatusWordFlag
Line 445: [USIM_%d] Other StatusWord Received, Clear TechProblemStatusWordFlag
Line 495: [USIM_%d] [MEP]usim_SendDataToDevice currentlySelectedLSI:%d   usim_GetMepPortId():%d   isES10Cmd:%d   isMEPConfigDone:%d
Line 498: [USIM_%d] [MEP]usim_SendDataToDevice  usim_GetMepSupported():%d, usim_GetPhySlotId():%d, usim_GetContextId():%d,  usim_IsNestedCall:%d isProcessingProcByte[%d]:%d
Line 514: [USIM_%d] Enter Critical Section fail event -> %d
Line 565: [USIM_%d] >> SendDataToDevice to Slot:%d
Line 607: [USIM_%d] [UICC APDU CMD]Sending the Following to Device ->
Line 628: [USIM_%d] No Of Bytes Expected -> 0x%02X
Line 638: [USIM_%d] [UICC APDU CMD] Skip SocketReq: removing
Line 643: [USIM_%d] [UICC APDU CMD] Skip SocketReq: Absent
Line 718: [USIM_%d] UICCCmdType (%d) is INVALID!!!
Line 735: [USIM_%d] UICC_CMD_TYPE_SIM
Line 811: [USIM_%d] UICC_CMD_TYPE_USIM
Line 845: [USIM_%d] [T1] Le 0 for CASE 4 command
Line 885: [USIM_%d] CmdExchType changed TYPE4->TYPE2 in case of Lc=0 for GET IDENTITY command
Line 908: [USIM_%d] Length of Response Data 0x%02x
Line 912: [USIM_%d] MEMALLOC FAILS
Line 922: [USIM_%d] Handle Zero Status word RetVal %d
Line 962: [USIM_%d] [UICC APDU RSP]Received the Following From the Device[UsimRxBuff->payload(%d)]
Line 964: [USIM_%d] PayLoad Length 0x%x
Line 975: [USIM_%d] freeing  UsimRxBuff  %x
Line 994: [USIM_%d] SW1: 0x%x SW2: 0x%02x
Line 1022: [USIM_%d] Length of Response Data 0x%02x
Line 1043: [USIM_%d] [UICC APDU RSP]Received the Following From the Device[UsimRxBuff->payload(%d)]
Line 1045: [USIM_%d] PayLoad Length 0x%x
Line 1056: [USIM_%d] freeing  UsimRxBuff  %x
Line 1064: [USIM_%d] SW1: 0x%x SW2: 0x%02x
Line 1088: [USIM_%d] >> usim_ResetMepRecoveryGlobals
Line 1125: [USIM_%d] >> usim_HandleDriverError- TypeOfDriverError: %d
Line 1168: [USIM_%d] Error Type :%d
Line 1180: [USIM_%d] pal_DrvSocketRequest Error 02%02X
Line 1204: [USIM_%d] >> HandleDriverErrorOfRxTimeOut
Line 1215: [USIM_%d] [GSIM] TxRx Error Occurred.SIM type: %d, Port Id: %d, Mode: %d
Line 1223: [USIM_%d] InsCode - %d
Line 1252: [USIM_%d] RX TIMEOUT Not handled
Line 1285: [USIM_%d] >> HandleDriverErrorOfTxRxTimeOut
Line 1290: [USIM_%d] [GSIM] TxRx Error Occurred.SIM type: %d, Port Id: %d, Mode: %d
Line 1331: [USIM_%d] ResetStatus - %d
Line 1355: [USIM_%d] RESET is in progress
Line 1375: [USIM_%d] NO response, Shutdown USIM
Line 1424: [USIM_%d] >> HandleDriverErrorOfChtTimeOut
Line 1434: [USIM_%d] usim_Voltage = 0x%X
Line 1435: [USIM_%d] pCmdRspTpdu->RxBuff[0] = 0x%X
Line 1436: [USIM_%d] pCmdRspTpdu->NoOfRxBytes = 0x%X
Line 1443: [USIM_%d] special case for TC#7.2.1c-3
Line 1478: [USIM_%d] ResetStatus - %d
Line 1498: [USIM_%d] RESET is in progress
Line 1512: [USIM_%d] NO response, Shutdown USIM
Line 1523: [USIM_%d] TC#7.2.1c-3 Less than 2 chars from UICC, Shutdown UICC
Line 1541: [USIM_%d] >> HandleDriverErrorOfNullTimeOut
Line 1581: [USIM_%d] >> HandleZeroStatusWord
Line 1613: [USIM_%d] [HOTSWAP]Removed Done case
Line 1641: [USIM_%d] RESET is in progress
Line 1679: [USIM_%d] SW1: 0x%X, SW2: 0x%X, INS: 0x%X, P3: 0x%X, Le: 0x%X
Line 1696: [USIM_%d] IsGetrspRequired = %d
Line 1857: [USIM_%d] CmdLength > USIM_TXRX_BUF_MAXLEN
Line 1866: [USIM_%d] For STATUS command, P3 is set from 0xFF to 0x00
Line 1876: [USIM_%d] Extend APDU usim_ExtendedCmdSupported:%d
Line 1882: [USIM_%d] Extend APDU Case2: Le=%d
Line 1897: [USIM_%d] extended cmd err lc=%d
Line 1902: [USIM_%d] Extend APDU Case3: Lc=%d
Line 1908: [USIM_%d] Extend APDU Case4: Lc=%d, Le=%d
Line 1918: [USIM_%d] extended cmd err lc=%d
Line 1944: [USIM_%d] Failed to handle extended cmd APDU : Result = %d,  RspStatus = %d
Line 1967: [USIM_%d] extended cmd err
Line 1984: [USIM_%d] extended logical channels calss
Line 1997: [USIM_%d] standard logical channels class
Line 2008: [USIM_%d] LogicalChannel: %d, extClassValue: %d
Line 2020: [USIM_%d] Reset Channel 0: DF/EF
Line 2090: [USIM_%d] CASE 2: Le = 00, Luicc = 256 bytes
Line 2100: [USIM_%d] To support Orange NFC test, force to chage CASE 1 to CASE 2
Line 2234: [USIM_%d] [UICC APDU CMD] Skip SocketReq: removing
Line 2239: [USIM_%d] [UICC APDU CMD] Skip SocketReq: Absent
Line 2291: [USIM_%d] [MEP]usim_SendDirectDataToDevice currentlySelectedLSI:%d   usim_GetMepPortId():%d   isES10Cmd:%d   isMEPConfigDone:%d
Line 2294: [USIM_%d] [MEP]usim_SendDirectDataToDevice  usim_GetMepSupported():%d,  usim_GetPhySlotId():%d,  usim_IsNestedCall:%d
Line 2303: [USIM_%d] Enter Critical Section fail event -> %d
Line 2350: [USIM_%d] >> SendDirectDataToDevice
Line 2375: [USIM_%d] Reset the Further Interindustry bit in class byte 
Line 2381: [USIM_%d] skip class reset-exception handling
Line 2406: [USIM_%d] Displaying Data Contents Sent to Device
Line 2407: [USIM_%d] Class       -> 0x%02X
Line 2408: [USIM_%d] Instruction -> 0x%02X
Line 2409: [USIM_%d] P1          -> 0x%02X
Line 2410: [USIM_%d] P2          -> 0x%02X
Line 2411: [USIM_%d] P3          -> 0x%02X
Line 2412: [USIM_%d] [UICC APDU CMD]Sending the Following to Device ->
Line 2418: [USIM_%d] No Of Bytes Expected -> 0x%02X, UICC_EXCH -> 0x%02X
Line 2442: [USIM_%d] >> usim_SendDirectDataToDevice- TxRxDataBlock->Result: %d
Line 2456: [USIM_%d] pal_DrvSocketRequest success
Line 2473: [USIM_%d] SW1: 0x%X, SW2: 0x%X
Line 2480: [USIM_%d] Skip GET RSP for InsCode 0x09 and SW1 9E/9F as per CMCC
Line 2517: [USIM_%d] LocalSimDataLength = %d
Line 2518: [USIM_%d] LengthOfRspData = %d
Line 2527: [USIM_%d] MemAlloc Fails !!!
Line 2541: [USIM_%d] MemAlloc Fails
Line 2562: [USIM_%d] UICC_CHTIMEOUT_OCCURED
Line 2592: [USIM_%d] To support Orange NFC Appl. test, discard data from SIM card
Line 457: [USIM_%d] Free the RxBuff in case of SIM/Driver error
Line 1728: [USIM_%d] Status - %d
Line 1753: [USIM_%d] RESET is in progress
Line 1760: [USIM_%d] NO response, Shutdown USIM
Line 1772: [USIM_%d] MemAlloc Fails !!!
Line 1816: [USIM_%d] Skip GET RSP for InsCode 0x09 and SW1 9E/9F as per CMCC
Line 1824: [USIM_%d] GET RSP happens again!!!
Line 1835: [USIM_%d] CH TIMEOUT
