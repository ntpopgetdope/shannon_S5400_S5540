Line 114: [A :MM,%d]  %%!EM ERROR: CheckEapReplayAttack Fail. Current Counter : %d, Received Counter %d
Line 114: [MM|%d,CP] %%!EM ERROR: CheckEapReplayAttack Fail. Current Counter : %d, Received Counter %d
Line 118: [A :MM,%d]  %%!EM ERROR: CheckEapReplayAttack Success. Update Counter %d -> %d
Line 118: [MM|%d,CP] %%!EM ERROR: CheckEapReplayAttack Success. Update Counter %d -> %d
Line 167: [N :MM,%d]  MakeSnssaiSessionId : sessionId[%d], Snssai[%02X]
Line 184: [N :MM,%d]  FindSnssaiSessionId : sessionId[%d], Snssai[%02X]
Line 206: [D :MM,%d]  NSSAA Command
Line 207: [MM|%d,CP] NSSAA Command
Line 211: [A :MM,%d]  %%!EM ERROR : Invalid S-NSSAI. Ignore
Line 211: [MM|%d,CP] %%!EM ERROR : Invalid S-NSSAI. Ignore
Line 217: [A :MM,%d]  %%!EM ERROR : Already SIM auth waiting for S-NSSAI. Ignore
Line 217: [MM|%d,CP] %%!EM ERROR : Already SIM auth waiting for S-NSSAI. Ignore
Line 229: [A :MM,%d]  %%!EM ERROR : EAP Decode fail
Line 229: [MM|%d,CP] %%!EM ERROR : EAP Decode fail
Line 236: [A :MM,%d]  %%!EM ERROR : Invalid Sim. Cannot handle AUTHENTICATION REQUEST
Line 236: [MM|%d,CP] %%!EM ERROR : Invalid Sim. Cannot handle AUTHENTICATION REQUEST
Line 251: [A :MM,%d]  %%!EM ERROR : Invalid S-NSSAI
Line 251: [MM|%d,CP] %%!EM ERROR : Invalid S-NSSAI
Line 256: [A :MM,%d]  %%!EM ERROR : Not valid EAP message
Line 256: [MM|%d,CP] %%!EM ERROR : Not valid EAP message
Line 265: [N :MM,%d]  EAP Success from Snssai(%d)
Line 269: [N :MM,%d]  EAP Fail from Snssai(%d)
Line 273: [A :MM,%d]  %%!EM ERROR : EAP-AKA' failed for the security context from Snssai(%d)
Line 273: [MM|%d,CP] %%!EM ERROR : EAP-AKA' failed for the security context from Snssai(%d)
Line 292: [W :MM,%d]  Warning: Cannot find a RAND in the procedure context
Line 292: [MM|%d,CP] Warning: Cannot find a RAND in the procedure context
Line 299: [N :MM,%d]  Rand and ResAsterisk not ready
Line 307: [N :MM,%d]  Duplicated rand
Line 393: [DumpHex] Plmn for auth from CAMPED_TAI : 
Line 414: [DumpStr] DeriveSNNForAuth : 
Line 446: [N :MM,%d]  DeriveNasKeysEapakaReauth : Start
Line 453: [A :MM,%d]  %%!EM ERROR : IMSI ASCII information is required
Line 453: [MM|%d,CP] %%!EM ERROR : IMSI ASCII information is required
Line 458: [A :MM,%d]  %%!EM ERROR : KSI is not specified
Line 458: [MM|%d,CP] %%!EM ERROR : KSI is not specified
Line 480: [DumpHex] EAP-AKA' Fast Re-auth MSK   : 
Line 481: [DumpHex] EAP-AKA' Fast Re-auth EMSK  : 
Line 495: [DumpPriv] SUPI ASCII : 
Line 503: [D :MM,%d]  Delete NonCurrent NSC using same ksi %d
Line 552: [N :MM,%d]  DeriveNasKeys : Start
Line 559: [A :MM,%d]  %%!EM ERROR : IMSI ASCII information is required
Line 559: [MM|%d,CP] %%!EM ERROR : IMSI ASCII information is required
Line 563: [A :MM,%d]  %%!EM ERROR : KSI is not specified
Line 563: [MM|%d,CP] %%!EM ERROR : KSI is not specified
Line 577: [A :MM,%d]  %%!EM ERROR : Required information is not enough. RAND: %p, AUTN: %p
Line 577: [MM|%d,CP] %%!EM ERROR : Required information is not enough. RAND: %p, AUTN: %p
Line 610: [DumpHex] EAP-AKA' KEncr : 
Line 611: [DumpHex] EAP-AKA' KAut  : 
Line 612: [DumpHex] EAP-AKA' KRe   : 
Line 613: [DumpHex] EAP-AKA' MSK   : 
Line 614: [DumpHex] EAP-AKA' EMSK  : 
Line 617: [D :MM,%d]  %%!EM ERROR : EAP_AKA_Challenge - AT_MAC Valdiation error
Line 618: [MM|%d,CP] %%!EM ERROR : EAP_AKA_Challenge - AT_MAC Valdiation error
Line 642: [DumpPriv] SUPI ASCII : 
Line 649: [D :MM,%d]  Delete NonCurrent NSC using same ksi %d
Line 656: [N :MM,%d]  DeriveNasKeys : Done
Line 665: [A :MM,%d]  DeriveNasKeys : Failure
Line 665: [MM|%d,CP] DeriveNasKeys : Failure
Line 678: [D :MM,%d]  SaveRandResAsterisk
Line 685: [D :MM,%d]  LoadRandResAsterisk
Line 697: [D :MM,%d]  DeleteRandResAsterisk
Line 711: [A :MM,%d]  %%!EM ERROR: UE security capability mismatch: Support: 0x%02X 0x%02X 0x%02X 0x%02X
Line 711: [MM|%d,CP] %%!EM ERROR: UE security capability mismatch: Support: 0x%02X 0x%02X 0x%02X 0x%02X
Line 713: [A :MM,%d]  %%!EM Replayed: 0x%02X 0x%02X 0x%02X 0x%02X
Line 713: [MM|%d,CP] %%!EM Replayed: 0x%02X 0x%02X 0x%02X 0x%02X
Line 726: [A :MM,%d]  %%!EM ERROR: Sor Count check failure Rcvd[%d] Current[%d]
Line 726: [MM|%d,CP] %%!EM ERROR: Sor Count check failure Rcvd[%d] Current[%d]
Line 745: [A :MM,%d]  %%!EM ERROR: UPU Count check failure Rcvd[%d] Current[%d]
Line 745: [MM|%d,CP] %%!EM ERROR: UPU Count check failure Rcvd[%d] Current[%d]
Line 760: [D :MM,%d]  UpdateEpsSecInfo
Line 761: [D :MM,%d]  eKSI[%d] UlNasCount[%d]
Line 762: [DumpPriv] K_ASME 
Line 782: [D :MM,%d]  DeleteCurrentContext
Line 790: [D :MM,%d]  DeleteNonCurrentContext
Line 798: [D :MM,%d]  DeletePartialNativeContext
Line 806: [D :MM,%d]  DeleteMappedContext
Line 852: [D :MM,%d]  DeleteCurrentContextWithNullCipheringAlgo type : %d, EncAlgo : %d
Line 862: [D :MM,%d]  MoveNSC : [%s] -> [%s]
Line 921: [DumpHex] NasMsgPtr 
Line 922: [DumpHex] K_Intgrity 
Line 944: [D :MM,%d]  Integrity check: algo: %d, nasMsgLen: %d, DLNasCount: %d
Line 947: [D :MM,%d]  MAC Verification Success
Line 951: [D :MM,%d]  %%!EM MAC Verification Fail. Calculated Mac: 0x%02X 0x%02X 0x%02X 0x%02X
Line 952: [D :MM,%d]  %%!EM Received Mac: 0x%02X 0x%02X 0x%02X 0x%02X
Line 953: [DumpHex] %%!EM Calculated mac 
Line 954: [DumpHex] %%!EM Received mac 
Line 987: [A :MM,%d]  %%!EM ERROR : Cannot find MAC from the radio message
Line 987: [MM|%d,CP] %%!EM ERROR : Cannot find MAC from the radio message
Line 997: [A :MM,%d]  %%!EM ERROR : Invalid DL NAS count
Line 997: [MM|%d,CP] %%!EM ERROR : Invalid DL NAS count
Line 1028: [A :MM,%d]  %%!EM Replay Protection Check Failure sequence[%d], DLCount[%d], diff[%d]
Line 1028: [MM|%d,CP] %%!EM Replay Protection Check Failure sequence[%d], DLCount[%d], diff[%d]
Line 1056: [D :MM,%d]  EncryptNasMessage : Algo : %d, ULNasCount : %d, DIrection : %d
Line 1057: [DumpHex] KNasEnc: 
Line 1058: [DumpHex] Original Msg : 
Line 1080: [DumpHex] Encrypted Msg : 
Line 1090: [A :MM,%d]  %%!EM ERROR : No full security context
Line 1090: [MM|%d,CP] %%!EM ERROR : No full security context
Line 1152: [D :MM,%d]  Procedure Context NONCE_UE: %08X
Line 1175: [D :MM,%d]  GetReceivedDlNasCount : Overflowed curSeqNumber : %d, msgSeqNum : %d
Line 1189: [D :MM,%d]  GetReceivedDlNasCount : Overflowed curSeqNumber : %d, msgSeqNum : %d
Line 1201: [N :MM,%d]  Currently HasNoSecurityContextAvailable : ngKsi : %d, NSC type : %d
Line 1229: [D :MM,%d]  %%!EM ERROR : Cannot find AUTN in the procedure data
Line 1230: [MM|%d,CP] %%!EM ERROR : Cannot find AUTN in the procedure data
Line 1250: [D :MM,%d]  ANS_X9_63_KDF_SHA256
Line 1260: [DumpHex]  : After _Sha256
Line 1269: [D :MM,%d]  ECIES_SSP_AES_CTR128
Line 1270: [DumpHex]  : plainText  
Line 1277: [DumpHex]  : cipherText 
Line 1283: [D :MM,%d]  ECIES_SSP_MAC_GENERATION
Line 1290: [DumpHex]  : MAC 
Line 1334: [E :MM,%d]  SSP_X25519
Line 1335: [DumpHex]  : NW pubKey  
Line 1340: [E :MM,%d]  %%!EM generate keypair error
Line 1344: [DumpHex]  : UE privKey 
Line 1345: [DumpHex]  : UE pubKey  
Line 1359: [E :MM,%d]  %%!EM generate keypair error
Line 1362: [DumpHex]  : sharedVal  
Line 1401: [D :MM,%d]  SSP_SECP256R1
Line 1402: [DumpHex]  : Compressed NW pubKey 
Line 1413: [E :MM,%d]  %%!EM NW pubkey decompress failure : %d
Line 1416: [DumpHex]  : NW pubKey_x 
Line 1417: [DumpHex]  : NW pubKey_y 
Line 1436: [E :MM,%d]  %%!EM generate keypair error
Line 1440: [DumpHex]  : UE privKey 
Line 1441: [DumpHex]  : UE pubKey_x 
Line 1442: [DumpHex]  : UE pubKey_y 
Line 1456: [E :MM,%d]  %%!EM generate keypair error
Line 1463: [E :MM,%d]  %%!EM pubkey compress failure : %d
Line 1466: [DumpHex]  : Compressed UE pubKey 
Line 1467: [DumpHex]  : sharedVal  
Line 1512: [E :MM,%d]  ECIES_SSP algo[%d]
Line 1546: [E :MM,%d]  Unsupported Algorithms
Line 1555: [DumpHex]  : secretKey 
Line 1556: [DumpHex]  : enc Key   
Line 1557: [DumpHex]  : iv        
Line 1558: [DumpHex]  : macKey    
Line 1567: [DumpHex]  : MAC TAG 
Line 1571: [DumpHex]  : Final Output 
Line 1577: [E :MM,%d]  ECIES_SSP end
Line 1597: [D :MM,%d]   : Calculate SUCI by UE
Line 1609: [N :MM,%d]   : Cannot Make SUCI with IMSI because SIM is not present
Line 1614: [N :MM,%d]  CalculateSuci : NW Publickey was not provisioned
Line 1637: [N :MM,%d]  CalculateSuci : invalid scheme
Line 1646: [DumpPriv]  : Mobile id SUCI(SUCI) ready : 
Line 1647: [DumpHex]  : Mobile id SUCI(SUCI) ready : 
Line 1657: [N :MM,%d]   : Make SUCI with IMSI
Line 1668: [N :MM,%d]   : Cannot Make SUCI with IMSI because SIM is not present
Line 1677: [DumpHex]  : PLMN ID - 
Line 1678: [DumpHex]  : PLMN ID - 
Line 1692: [DumpPriv]  : Mobile id SUCI(IMSI) ready 
Line 1693: [DumpHex]  : Mobile id SUCI(IMSI) ready 
Line 1729: [DumpHex] Invalid GetId Data :
Line 1740: [DumpPriv] Mobile id SUCI(SUCI) ready :
Line 1764: [A :MM,%d]  %%!EM ERROR : T3519 is running, but SUCI is inavlid. Rerun T3519 and caclucate SUCI
Line 1764: [MM|%d,CP] %%!EM ERROR : T3519 is running, but SUCI is inavlid. Rerun T3519 and caclucate SUCI
Line 1801: [N :MM,%d]  Mobile id wait for Sim to Calculate SUCI (USIM)
Line 1901: [D :MM,%d]  IncreaseEPSULNasCount
Line 1909: [D :MM,%d]  Current invalid eKSI. Do not increase EPSULNasCount
Line 1923: [D :MM,%d]  Current mapped NSC is removed. replace as non-current full natvie security context
Line 1926: [D :MM,%d]  Replace as non-current full natvie security context
Line 1968: [D :MM,%d]  DeriveL2NIdleMappedNSC : round[%d]
Line 1971: [D :MM,%d]  DeriveL2NIdleMappedNSC : round[%d], EPS NgSKI[%d], SMC NgKSI[%d]
Line 1975: [D :MM,%d]  %%!EM DeriveL2NIdleMappedNSC : ksi not matching
Line 1983: [D :MM,%d]  Use ULCount %d, same value as used in TAU request message
Line 1987: [D :MM,%d]  Use ULCount %d, 1 incrased value from used in TAU request message
Line 1993: [DumpPriv] L2N Idle Kamf'
Line 2007: [A :MM,%d]  %%!EM ERROR : pSecuModeCmdMsg is nullptr
Line 2007: [MM|%d,CP] %%!EM ERROR : pSecuModeCmdMsg is nullptr
Line 2040: [D :MM,%d]  KamfDerivationRequired
Line 2051: [DumpHex] NAS Message for mac 
Line 2083: [A :MM,%d]  %%!EM ERROR : Mismatched MAC
Line 2083: [MM|%d,CP] %%!EM ERROR : Mismatched MAC
