Line 99: DLIntProt StartUpInit
Line 111: DLIntProt ShutdownDestroy
Line 124: DLIntProt init
Line 161: DLIntProt free
Line 195: DLIntProt Create SRB%d
Line 270: rrc_DLIntegrityProt_UpdatePrevSmcStartValue No in State AWAITINGSMCACTIVATIONTIME
Line 276: StartMgr  PrevCsSmcStartValue CS: %x
Line 281: StartMgr  PrevPsSmcStartValue PS: %x
Line 1217: DLIntProt DoIntChk NotStarted
Line 1236: DlInt IntegrityCheck requested for SRB %d 
Line 1238: DLIntegrityProt_p->CountI and RxMsn in rrc_DLIntegrityProt_PerformDLIntegrityCheck %x %x 
Line 1248: DlInt MSN Wrap Around, Increment HFN for SRB %d 
Line 1260: CountI = %x
Line 1262: Calculating MAC using integrity algorithm f9
Line 1268: DLIntProt	F9 class failed to perform DLIntCheck
Line 1271: IntegrityAlgorithmType = %d
Line 1291: Same as previous message,discarded for duplicate
Line 1335: DSDS: DlInt MSN Wrap Around success ( RxMsn >= Previous MSN), update the COUNTI[SRB %d] = %x 
Line 1358: DLIntProt DoIntChk successful
Line 2108: CountIUpdated = %d, SrbId = %d
Line 2125: CountI of Srb %d before rollback = %x
Line 2128: CountI of Srb %d after rollback = %x
Line 1502: DLIntProt Idle StartSmc
Line 1985: DlInt Keys and Counts activated for  SRB %d 
Line 1992: CnDomain @ ApplyLatestKeysAndCounts%d 
Line 2001: DlInt NoNew Keys nor no Authentication, set 20MSB of HFN to START for SRB  %d 
Line 2004: Latest Startvalues at DLIntegrityProt_p moment are : %d 
Line 1524: DlInt Idle ModifySmc for SRB %d 
Line 1535: DlInt Idle Invalid Activation Time  %d for SRB %d specified
Line 1565: Activation time is wrapped around
Line 1567: DlInt PendingActivation for SRB %d, Current-MSN: %d, Activation-MSN:%d	
Line 1598: Activation time is wrapped around
Line 1600: DlInt PendingActivation for SRB %d, Current-MSN: %d, Activation-MSN:%d	
Line 1617: DlInt Idle StartRelocation for SRB %d 
Line 1851: DlInt DefaultState EnteringIdle  for SRB %d 
Line 1633: DlInt  SmcReconfiguring ConfigurationComplete for SRB %d 
Line 1651: DlInt  SmcReconfiguring Abort for SRB %d 
Line 1669: Latest DlIntegrity configuration is stored
Line 1676: SecMgrInst is NULL
Line 2020: DlInt Keys and Counts backuped for  SRB %d 
Line 2023: Backup CnDomain %d
Line 2029: Backup IK = 
Line 2036: DlInt NoNew Keys nor no Authentication, set 20MSB of HFN to START for SRB	%d
Line 2039: Latest Startvalue at DLIntegrityProt_p moment is: %x 
Line 2043: Backup COUNT-I: %x
Line 1708: DlInt  AwaitingSmcCompleteL2ack ConfigurationComplete for SRB %d 
Line 1728: DlInt  AwaitingSmcCompleteL2ack Abort for SRB %d 
Line 1746: Latest DlIntegrity configuration is stored
Line 1753: SecMgrInst is NULL
Line 1789: DlInt  AwaitingActivationTime ModifySMC for SRB %d 
Line 1808: DlInt  AwaitingActivationTime StartRelocation for SRB %d 
Line 1827: DlInt  AwaitRelocComplete Complete for SRB %d 
Line 334: SecMgrInst is NULL
Line 341: SkipSameMsnCheckForSCR :%d 
Line 350: DLIntProt DoIntChk Rx-Msn:%x , Current Msn :%x 
Line 354: DLIntProt DoIntChk Rx-Msn:%x Invalid , Current Msn :%x 
Line 361: SkipSameMsnCheck = %d
Line 373: SecMgr = NULL
Line 384: SMC has been done for CS domain
Line 396: SMC has been done for PS domain
Line 406: Invalid CN Domain ID = %d
Line 414: [Delayed Msg] DLIntProt DoIntChk Unchk'd msg type While Intergrity Starting 
Line 419: DLIntProt DoIntChk Unchk'd msg type
Line 1011: DlInt IntegrityCheck requested for SRB %d 
Line 1013: DLIntegrityProt_p->CountI and RxMsn in rrc_DLIntegrityProt_PerformDLIntegrityCheck %x %x 
Line 1022: DLIntProt F9 class HfnIncrementSkipped is TRUE
Line 1034: DlInt MSN Wrap Around, Increment HFN for SRB %d 
Line 1050: CountI = %x
Line 1052: Calculating MAC using integrity algorithm f9
Line 1058: DLIntProt	F9 class failed to perform DLIntCheck
Line 1061: IntegrityAlgorithmType = %d
Line 1069: DLIntProt DoIntChk Rx-MAC: %x differs to MAC without HFN increment:%x
Line 1071: CountI = %x, MAC = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 1072: IKUsed = 
Line 1073: MessageBuffer = 
Line 1089: DLIntProt	F9 class failed to perform DLIntCheck
Line 1099: DLIntProt DoIntChk Rx-MAC: %x differs to MAC with HFN increment:%x
Line 1101: CountI = %x, MAC = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 1106: Integrity check failed, Rx-MAC: %x differs to MAC:%x
Line 1108: CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 1109: IKUsed = 
Line 1110: MessageBuffer = 
Line 1122: Retrial (1): Calculating MAC using integrity algorithm f9 without HFN Increment
Line 1128: DLIntProt	F9 class failed to perform DLIntCheck
Line 1140: Integrity check failed, Rx-MAC: %x differs to MAC:%x
Line 1142: CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 1143: IKUsed = 
Line 1144: MessageBuffer = 
Line 463: DLIntProt	F9 class failed to perform DLIntCheck Check for Alternative Start Value
Line 479: DlInt MSN Wrap Around, Increment HFN for SRB %d 
Line 487: Retrial (2): Calculating MAC using integrity algorithm f9 with START value at latest SMC
Line 493: DLIntProt	F9 class failed to perform DLIntCheck
Line 503: Integrity check failed, Rx-MAC: %x differs to MAC:%x
Line 505: CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 520: Retrial (3): Calculating MAC using integrity algorithm f9 without HFN Increment with START value at latest SMC
Line 526: DLIntProt	F9 class failed to perform DLIntCheck
Line 537: Integrity check failed, Rx-MAC: %x differs to MAC:%x
Line 539: CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 545: Latest Startvalues at DLIntegrityProt_p moment are : %d 
Line 556: Retrial (4): Calculating MAC using integrity algorithm f9 without HFN Increment with Latest transmitted START
Line 562: DLIntProt	F9 class failed to perform DLIntCheck
Line 573: Integrity check failed, Rx-MAC: %x differs to MAC:%x
Line 575: CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 591: DlInt MSN Wrap Around, Increment HFN for SRB %d 
Line 598: Retrial (5): Calculating MAC using integrity algorithm f9 with previous start value stored
Line 604: DLIntProt	F9 class failed to perform DLIntCheck
Line 611: Integrity check failed, Rx-MAC: %x differs to MAC:%x
Line 613: CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 631: ReconfigAborted: Retrial with latest configuration
Line 650: DlInt MSN Wrap Around, Increment HFN for SRB %d 
Line 667: DLIntProt	F9 class failed to perform DLIntCheck
Line 674: CountI = %x, MAC = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 675: IKUsed = 
Line 679: ReconfigAborted: Retrial without HFN increment
Line 702: DLIntProt	F9 class failed to perform DLIntCheck
Line 709: CountI = %x, MAC = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 710: IKUsed = 
Line 730: ReconfigAborted: COUNT-I = %x
Line 736: SecMgrInst is NULL
Line 2056: DlInt Keys and Counts activated for  SRB %d 
Line 2059: CnDomain @ ApplyLatestKeysAndCounts%d 
Line 2065: DlInt NoNew Keys nor no Authentication, set 20MSB of HFN to START for SRB  %d 
Line 2068: Latest Startvalues at DLIntegrityProt_p moment are : %d 
Line 2082: DlInt Keys and Counts activated for  SRB %d 
Line 2085: CnDomain @ ApplyLatestKeysAndCounts%d 
Line 2091: DlInt NoNew Keys nor no Authentication, set 20MSB of HFN to START for SRB  %d 
Line 2100: Latest Startvalues at DLIntegrityProt_p moment are : %d 
Line 787: DLIntProt	No DomainId available in SecModeCmd to DlIntCheck
Line 805: DlInt MSN Wrap Around, Increment HFN for SRB %d 
Line 815: Retrial (2): Calculating MAC using integrity algorithm f9 with previous transmitted START value
Line 821: DLIntProt	F9 class failed to perform DLIntCheck
Line 827: Integrity check failed, Rx-MAC: %x differs to MAC:%x
Line 829: CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 839: Retrial (3): Calculating MAC using integrity algorithm f9 without HFN Increment with previous transmitted START value 
Line 845: DLIntProt	F9 class failed to perform DLIntCheck
Line 851: Integrity check failed, Rx-MAC: %x differs to MAC:%x
Line 853: CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 890: DlInt MSN Wrap Around, Increment HFN for SRB %d 
Line 900: Retrial (4): Calculating MAC using integrity algorithm f9 with Latest transmitted START
Line 906: DLIntProt	F9 class failed to perform DLIntCheck
Line 912: Integrity check failed, Rx-MAC: %x differs to MAC:%x
Line 914: CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 924: Retrial (5): Calculating MAC using integrity algorithm f9 without HFN Increment with Latest transmitted START
Line 930: DLIntProt	F9 class failed to perform DLIntCheck
Line 936: Integrity check failed, Rx-MAC: %x differs to MAC:%x
Line 938: CountI = %x, Fresh = %x, EncodedMsgSize = %d, Associated RB-ID = %d
Line 1383: DLIntProt  ,New Fresh value %x  specified 
Line 1397: DLIntProt  No DomainId available in SecModeCmd to DlIntCheck
Line 1403: UpdateCheckParamsFromDlMsg: No Algorithm
Line 1434: SecMgrInst is NULL
Line 1443: DlInt HFN is reset to zero  %x
Line 1451: DlInt HFN to be used  is from StartValues  %x
Line 1460: DlInt HFN to be used  initialised to Zero  
Line 1465: DlInt Increment HFN since MSN Wrap Around Occurred 
Line 1476: DlInt HFN to be used  is from StartValues  %x
Line 1479: DlInt Increment HFN since MSN Wrap Around Occurred 
Line 1902: DLIntProt ActivationTimeExpired for SRB%d
Line 1951: DLIntProt ActivationTimeMissed for SRB%d
