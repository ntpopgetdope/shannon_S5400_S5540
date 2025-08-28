Line 128: NORMAL Initialisation of <GmmPduCodec> 
Line 951: Mbx: 0x%d 
Line 1110: 
 mm_GmmPtrDscMsgSnd is NULL
Line 1143: 
Sending %s
Line 1286:  GMM EDGE support flag = %d 
Line 1291:   GMM GPRS MS class = %d ,  GMM EGPRS MS class = %d  
Line 1333: GMM PDU codec init, DTM_GPRS_MSC:%d DTM_EGPRS_MSC:%d SingleSlot:%d
Line 1334:  SRVCC Support = %d 
Line 1401: Is2GDisabled: %d and Is3GDisabled: %d 
Line 1530: SRVCC Supported feature = %d, Srvcc Regi  = %d
Line 1581: Need to display DCNR bit for NR !
Line 1651: GMM Device Property is set with value: %d.
Line 1689: Extended T3312 is supported
Line 1707: Encode Old LAI IE
Line 2597: 
-------------Displaying Information Elements....-------------
Line 2623: ----------------------------------
Line 2627: Incorrect Base Address -> %02X
Line 2834: mm_NsUpdateCommonSignalingInfo MsgType = %d / PD = %d 
Line 2837: HidePersonalInfo: Original Dump received is : 
Line 2849: mm_NsUpdateCommonSignalingInfo TypeOfId = %d 
Line 2890: mm_NsUpdateCommonSignalingInfo TypeOfId = %d 
Line 2915: mm_NsUpdateCommonSignalingInfo TypeOfId = %d 
Line 2932: Don't send UpdateCommonSignalingInfo for privacy MobilIdIndex = %d
Line 2940: HidePersonalInfo: Modified Dump is : 
Line 2950: Don't need to send UpdateCommonSignalingInfo for privacy
Line 2979: No need update Isr Support bit
Line 2987: mm_UpdateGmmIeDatafromRegistry Update data from Registty
Line 3018: mcc : %2x
Line 3027: Certified Number of Bands %d
Line 3034: certifiedBands[%d] %d
Line 3051: Updating Classmark3 with certified bands 
Line 3182: DCN Current Index:%d
Line 3193: Updating Existing DCN entry
Line 3206: Updating DCN Current Index:%d
Line 3207: Updating DCN Id:%2x %2x
Line 3231: Deleted DCN List
Line 3246: Reading DCN List
Line 3247: Curr DCN Index:%d
Line 494: mm_SendGmmMessage send UNITDATA_REQ to LLC
Line 715: 
Sending %s
Line 593: 
Sending %s
Line 620: GS31(GMM): ucTransactionID = 0x%02X, ucProtocol =%s, ucSendSeqNum =0x%02X
Line 621: GS31(GMM): ucMessageType =0x%02X, ucChannel =0x%02X
Line 622: GS31(GMM): Raw data length =%d
Line 1039: 
Sending %s
Line 2278: 
Received GMM_AUTH_AND_CIPH_REQ From Network..4 Mandatory IEs ->...[24.008]-9.4.9
Line 2285: Received GMM_AUTH_AND_CIPH_REJ From Network..Contains No Mandatory or Optional IEs...[24.008]-9.4.11
Line 2291: 
Received GMM_IDENTITY_REQ From Network...2 Mandatory IEs ->...[24.008]-9.4.12
Line 2303: Contains No Optional IEs.
Line 2310: Received GMM_RAU_REJECT From Network, 2 Mandatory IEs ->...[24.008]-9.4.17
Line 2327: Optional IEs Include ->...T3212 Value -> 0x%02X...
Line 2336: Received GMM_RAU_ACCEPT From Network...4 Mandatory IEs ->...[24.008]-9.4.15
Line 2398: 
Received GMM_P_TMSI_REALL_COMMAND From Network
Line 2399: 2 Mandatory IEs ->...[24.008]-9.4.7
Line 2407: Received GMM_STATUS From Network... 1 Mandatory IE ->...[24.008]-9.4.18
Line 2414: Contains No Optional IEs.
Line 2421: Received GMM_INFORMATION From Network...No Mandatory IEs.
Line 2429: Received GMM_SERVICE_REJECT From Network...1 Mandatory IE ->...[24.008]-9.4.22
Line 2436: Contains No Optional IEs.
Line 2443: Received GMM_DETACH_REQUEST From Network...2 Mandatory IEs ->...[24.008]-9.4.5
Line 2465: Received GMM_SERVICE_ACCEPT From Networ...1 Mandatory IE ->...[24.008]-9.4.21
Line 2482: Received GMM_ATTACH_ACCEPT From Network		   6 Mandatory IEs ->...Periodic RAU Update Timer Value -> %02X...			SMS Radio Priority -> 0x%02X...
Line 2536: Received GMM_ATTACH_REJECT From Network...1 Mandatory IE ->...[24.008]-9.4.4
Line 2553: Received GMM_DETACH_ACCEPT From Network No Mandatory IEs ->...[24.008]-9.4.6..Contains No Optional IEs.
Line 2559: 
 Received Unknown GMM Radio Message From Network !!!!
Line 1744: IMEI_SV ID Type Requested (1 = YES) -> %02X
Line 1748: Mandatory IE , IMEI_SV ID Type Requested NOT PRESENT !!!!.
Line 1766: Optional IEs Include ->...
Line 1769: RAND -> ...
Line 1780: Optional IEs Include ->...
Line 1783: GMM Cksn -> %02X
Line 1793: Optional IEs Include ->...
Line 1797: AUTN -> ...
Line 1821: Mobile Identity ->...
Line 1830: Mandatory IE , Mobile Identity NOT PRESENT !!!!.
Line 1882: RAU Update Result -> %02X (%s)...
Line 1886: Mandatory IE , RAU Update Result NOT PRESENT !!!!.
Line 1894: Periodic RAU Update Timer Value -> 0x%02X...
Line 1899: Mandatory IE , Periodic RAU Update Timer Value NOT PRESENT !!!!.
Line 1931: Optional IEs Include ->...
Line 1935: Mobile Identity ->...
Line 1963: Optional IEs Include ->...
Line 1967: List of N-PDU Numbers ->
Line 1991: Optional IEs Include ->...
Line 1995: Neogtiated Ready Timer Value -> %02X...
Line 2020: Optional IEs Include ->...
Line 2024: T3302 Timer Value -> %02X...
Line 2048: Optional IEs Include ->...
Line 2052: Cell Notification State -> %02X...
Line 2075: Optional IEs Include ->...
Line 2079: List of PDP Contexts -> ...
Line 2106: Allocated PTMSI -> ...
Line 2111: Mandatory IE , Allocated PTMSI NOT PRESENT !!!!.
Line 2124: Optional IEs Include ->...
Line 2127: PTMSI Signature -> ...
Line 2175: Detach Type -> 0x%02X... %s
Line 2179: Mandatory IE , Detach Type NOT PRESENT !!!!.
Line 2200: List of  PDP Contexts -> ...
Line 2207: Mandatory IE , List of  PDP Contexts NOT PRESENT !!!!.
Line 1851: RAI -> ...
Line 1856: Mandatory IE , RAI NOT PRESENT !!!!.
Line 2151: Optional IEs Include ->...
Line 2154: T3212 Value -> %02X...
Line 2731: Activate PDP context accept from NW
Line 2736: PDP ACT ACCEPT from NW %d AddrInx =%d  
Line 2739: Data 0x%x
Line 2744: PDP address IEI not Included
Line 2750: QOS length is greater than max 21
Line 2760: PDP ACT REQ from NW %d AddrInx =%d	
Line 2761: Data 0x%x
Line 2767: MOD REQ from NW
Line 2772: MOD REQ from NW %d AddrInx =%d	
Line 2775: Data 0x%x
Line 2780: PDP address IEI not Included
Line 2786: QOS length is greater than max 21
