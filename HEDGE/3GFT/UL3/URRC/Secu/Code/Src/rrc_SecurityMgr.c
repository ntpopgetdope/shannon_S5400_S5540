Line 119: SecMgr    StartUpInit
Line 131: SecMgr    ShutdownDestroy
Line 147: SecMgr    init
Line 184: SecMgr    Unable to register for state change info
Line 212: No Memory allocated for rrc_SecurityMgr_init 
Line 226: [SecMgr] free
Line 265: SecMgr    GetInstanceId creates instance
Line 296: SecMgr    MmSecurityKeyIndication
Line 300: CS-IK :
Line 301: CS-CK :
Line 309: isHandoverToUmts is FALSE Update as new Keys
Line 322: isHandoverToUmts is TRUE Considered as Old Keys
Line 327: SRVCC PS-IK :
Line 328: SRVCC PS-CK :
Line 374: SecMgr    GmmSecurityKeyIndication
Line 378: PS-IK :
Line 379: PS-CK :
Line 387: isHandoverToUmts is FALSE Update as new Keys
Line 400: isHandoverToUmts is TRUE Considered as Old Keys
Line 405: SRVCC PS-IK :
Line 406: SRVCC PS-CK :
Line 486: Latest Integrity keys belong to CS-Domain 
Line 491: Latest Integrity keys belong to PS-Domain 
Line 576: PS-IK tostart :
Line 577: PS-CK tostart :
Line 581: CS-IK tostart :
Line 582: CS-CK tostart :
Line 661: [rrc_SecurityMgr_HandoverToUtran] DlMsgInstId is NULL
Line 666: SecMgr    HandoverToUtran
Line 680: SecMgr    HandoverToUtran invalid
Line 2632: Start of HandleDelayedSMC
Line 2644: msg = NULL
Line 2654: L2U_PS: No need to update keys
Line 2659: L2U_SRVCC: Need to use PS and CS SRVCC keys
Line 2680: L2U_SRVCC: Normal PS keys and SRVCC CS keys will be used
Line 2691: rrc_SecurityMgr_UpdateSrvccKeys: invalid L2UHOType = %d
Line 2703: PendingCSKeyActivation  set to TRUE 
Line 2712: PendingPSKeyActivation  set to TRUE 
Line 2717: Invalid CN Domain %d
Line 739: [SecMgr][NotReconfig] HandleSMI
Line 745: [SecMgr] Wrong SMI during PendingSMC due to DlMsgReconfig
Line 1612: [SecMgr] Priv ProcessSMI IP present
Line 1617: [SecMgr] Priv ProcessSMI Ciph present
Line 1930: SecMgr State moved to SECURITYMGR_AWAITIPRESP
Line 1937: SecMgr State moved to SECURITYMGR_AWAITCIPHRESP as no IntegrityReconfiguring
Line 1942: No IntegrityReconfiguring and CipheringReconfiguring
Line 780: [SecMgr][NotReconfig] HandleSMC
Line 790: [SecMgr] Simultaneous SMC Accept
Line 816: [SecMgr] HandleSMC Reject due to PendingSMC
Line 2053: [SecMgr][CheckSmcValidityWithPendingSmc] SMC Not Available (NewSmc 0x%x, PendingSmc 0x%x)
Line 1662: [SecMgr] DomainId not returned from SecModeCmd DlMsg
Line 1719: The SMC will be processed after finishing RB reconfiguration
Line 1773: SecMgr	ValidateSMC IP present
Line 1778: SecMgr	ValidateSMC Ciph present
Line 1784: SecMgr	ValidateSMC No security IE's
Line 1794: SecMgr	SecCap not returned from SecModeCmd DlMsg
Line 1798: SecMgr CiphAlgUea0 mismatch 
Line 1803: SecMgr CiphAlgUea1 mismatch 
Line 1808: SecMgr IntAlgUia1 mismatch 
Line 1813: SecMgr CiphAlgUea2 mismatch 
Line 1818: SecMgr IntAlgUia2 mismatch 
Line 1831: SecMgr GsmSecCap MisMatch ,RequestedGsmCap is %x , ActualCap is %x 
Line 1836: SecMgr GsmSecCap not present in the SMC 
Line 1846: SecMgr	ValidateSMC invalid SecCap
Line 1864: SecMgr	ValidateSMC DLMP Process failed
Line 1971: SecMgr    SecModeCmd DlMsg failed to create UlFailure
Line 1975: SecMgr    Send SMCFailure to Utran
Line 2018: [SecMgr] SMC failed to create UlFailure
Line 2022: [SecMgr] Send SMCFailure to Utran
Line 879: [SecMgr][NotReconfig] CellUpdate
Line 838: [SecMgr][NotReconfig] HandleDelayedSMC
Line 845: [SecMgr] PendingSMC Mismatch
Line 856: [SecMgr] No PendingSMC (Flag %d)
Line 860: [SecMgr] PendingSMC not yet handled
Line 914: [SecMgr][Config] HandleSMI
Line 918: [SecMgr] HandleSMI Accept
Line 927: [SecMgr] HandleSMI Reject
Line 947: [SecMgr][Config] HandleSMC
Line 952: [SecMgr] HandleSMC Accept
Line 959: [SecMgr] HandleSMC Reject
Line 2076: SecMgr ValidateSimultaneousReconfiguration 
Line 2090: SecMgr Invalid Simultaneous Integrity Reconfig 
Line 2099: SecMgr Invalid Simultaneous Ciphering Reconfig 
Line 977: [SecMgr][Config] ConfigIPCnf
Line 981: [SecMgr] NACK received from IntegrityMgr
Line 990: [SecMgr] Configuring -> AwaitCiphResp
Line 996: [SecMgr] ConfigUnderway
Line 2150: SecMgr    SecModeCmd DlMsg failed to create ULSuccess
Line 1017: [SecMgr][Config] ConfigCiphCnf
Line 1021: [SecMgr] NACK received from CipheringMgr
Line 1029: [SecMgr] Configuring -> AwaitIPResp
Line 1035: [SecMgr] ConfigUnderway
Line 1055: [SecMgr][Config] InitCellUpdate
Line 2364: [SecMgr] abort SMC and return to NotReconfig
Line 2395: [SecMgr] abort SMC and discard pending SMC
Line 2405: [SecMgr] action pending SMI
Line 2518: SecMgr Configuration Aborted 
Line 1518: [SecMgr] CipherErrorInd
Line 1074: [SecMgr][AwaitCiphCnf] HandleSMC
Line 1091: [SecMgr][AwaitCiphCnf] CiphCnf
Line 1094: [SecMgr] NACK received from CipheringMgr
Line 1113: [SecMgr][AwaitCiphCnf] InitCellUpdate
Line 1132: [SecMgr][AwaitIPCnf] HandleSMC
Line 1150: [SecMgr][AwaitIPCnf] IPCnf
Line 1153: [SecMgr] NACK received from IntegrityMgr
Line 1159: [SecMgr] AwaitIpResp -> AwaitCiphResp
Line 1165: [SecMgr] ConfigUnderway
Line 1183: [SecMgr][AwaitIPCnf] InitCellUpdate
Line 1201: [SecMgr][AwaitL2Cnf] HandleSMI
Line 1205: [SecMgr] Simultaneous SMI Accept - Pended
Line 1214: [SecMgr] Simultanous SMI Reject
Line 1235: [SecMgr][AwaitL2Cnf] HandleSMC
Line 1241: [SecMgr] Simultanous SMC Accept - Pended
Line 1249: [SecMgr] Simultanous SMC Reject
Line 1279: [SecMgr] AwaitL2Cnf SMCL2ACK
Line 1290: [SecMgr] AwaitL2Cnf SMCL2NACK
Line 2473: [SecMgr] Handle pending config
Line 2478: [SecMgr] Begin the PendingConfig
Line 1356: [SecMgr] AwaitL2Cnf SMIL2ACK
Line 1361: [SecMgr] AwaitL2Cnf SMIL2NACK
Line 1382: [SecMgr][AwaitL2Cnf] InitCellUpdate
Line 1319: [SecMgr] FirstDLIntCheckedMsgHandled SMCL2ACK
Line 1325: [SecMgr] FirstDLIntCheckedMsgHandled Failed to deregister for Cnf
Line 1538: [SecMgr] Entering NotReconfiguring
Line 1545: [SecMgr][NotReconfiguringEntry] PendingDueToDlMsgReconfig %d, ReconfigMsg 0x%x
Line 1550: [SecMgr][NotReconfiguringEntry] PendingDueToDlMsgReconfig %d, ReconfigMsg 0x%x
Line 1559: SecMgr    SMCDLMsg reference not null on EnteringNotReconf 
Line 1563: SecMgr    PendSMCDLMsg reference not null on EnteringNotReconf 
Line 1582: [SecMgr] AwaitCiphResp_Entry
