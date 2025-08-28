Line 146: [N :MM,%d]  numOfFiles[%d]
Line 158: [N :MM,%d]  UpdateUsatRefreshEfFiles: FileList[%X]
Line 161: [N :MM,%d]  UpdateUsatRefreshEfFiles: FileList[%X]
Line 207: [A :MM,%d]  %%!EM ERROR: Can not handle EF file(0x%02X)
Line 207: [MM|%d,CP] %%!EM ERROR: Can not handle EF file(0x%02X)
Line 213: [D :MM,%d]  ProcessReadRsp SIM Ef[%s][%x] : Length[%d] Success
Line 219: [D :MM,%d]  ProcessReadRsp SIM Ef[%s][%x] : Result[%d]. Read from NV
Line 220: [MM|%d,CP] ProcessReadRsp SIM Ef[%s] : Result[%d]. Read from NV
Line 239: [D :MM,%d]  UpdateReq SIM Ef[%s], SimSupport[%d]
Line 248: [A :MM,%d]  %%!EM ERROR : EF SIM update failed from the MM context
Line 248: [MM|%d,CP] %%!EM ERROR : EF SIM update failed from the MM context
Line 262: [A :MM,%d]  %%!EM ERROR : EF Flash update failed from the MM context
Line 262: [MM|%d,CP] %%!EM ERROR : EF Flash update failed from the MM context
Line 278: [A :MM,%d]  %%!EM Warning: Indicated the response as failed for the request(%d): %d
Line 278: [MM|%d,CP] %%!EM Warning: Indicated the response as failed for the request(%d): %d
Line 283: [D :MM,%d]  SIM Update Success (%d): %d
Line 368: [D :MM,%d]  MakeAuthReqTransactionId : authType[%d], sessionId[%d]
Line 375: [D :MM,%d]  Auth Req transaction status is invalid. Need to ClearAuthReqTransactions
Line 380: [D :MM,%d]  Already has same pending transaction
Line 389: [D :MM,%d]  MakeAuthReqTransactionId : transactionId[%d]
Line 399: [D :MM,%d]  GetAuthReqTransactionInfo : transactionId[%d]
Line 406: [D :MM,%d]  GetAuthReqTransactionInfo : authType[%d] sessionId[%d]
Line 410: [D :MM,%d]  GetAuthReqTransactionInfo : fail to find matching transactionInfo
Line 416: [D :MM,%d]  RemoveAuthReqTransactionInfo : transactionId[%d]
Line 429: [D :MM,%d]  ClearAuthReqTransactions
Line 479: [A :MM,%d]  %%!EM ERROR : Can not find the request data by the sim ef(%d)
Line 479: [MM|%d,CP] %%!EM ERROR : Can not find the request data by the sim ef(%d)
Line 497: [A :MM,%d]  %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
Line 497: [MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
Line 506: [D :MM,%d]  mncLength is %d, changed to 2
Line 510: [D :MM,%d]  Mnc Length : %d
Line 563: [D :MM,%d]  Ignore : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
Line 569: [D :MM,%d]  USIM_SUPPORT_AUTH_KEY : 1
Line 574: [D :MM,%d]  USIM_SUPPORT_AUTH_KEY : 0
Line 580: [D :MM,%d]  USIM_SUPPORT_SUCI : 1
Line 584: [D :MM,%d]  SUCI_CALC_BY_USIM : 1
Line 588: [D :MM,%d]  SUCI_CALC_BY_USIM : 0
Line 594: [D :MM,%d]  USIM_SUPPORT_SUCI : 0
Line 600: [D :MM,%d]  USIM_DATA_OFF : 1
Line 604: [D :MM,%d]  USIM_DATA_OFF : 0
Line 610: [D :MM,%d]  USIM_SUPPORT_SOR : 1
Line 614: [D :MM,%d]  USIM_SUPPORT_SOR : 0
Line 620: [D :MM,%d]  USIM_SUPPORT_NSI : 1
Line 624: [D :MM,%d]  USIM_SUPPORT_NSI : 0
Line 631: [D :MM,%d]  UsimSupportPsDataOffHomeAndRoam : 1
Line 635: [D :MM,%d]  UsimSupportPsDataOffHomeAndRoam : 0
Line 642: [D :MM,%d]  USIM_SUPPORT_5G_SEC_PARAM_EXT : 1
Line 647: [D :MM,%d]  USIM_SUPPORT_5G_SEC_PARAM_EXT : 0
Line 688: [DumpHex] EF_5GSLOCI : 
Line 707: [A :MM,%d]  %%!EM ERROR : ReadEf(%d) failure. Invalid ef length(%d)
Line 707: [MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. Invalid ef length(%d)
Line 713: [A :MM,%d]  %%!EM ERROR : ReadEf(%d) update guti failure. gutiLength(%d)
Line 713: [MM|%d,CP] %%!EM ERROR : ReadEf(%d) update guti failure. gutiLength(%d)
Line 718: [DumpHex] GUTI : 
Line 727: [DumpHex] Last visited Registered TAI : 
Line 732: [D :MM,%d]  5GS UPDATE STATUS : %d
Line 759: [A :MM,%d]  %%!EM ERROR : Invalid efLength(%d)
Line 759: [MM|%d,CP] %%!EM ERROR : Invalid efLength(%d)
Line 791: [DumpHex] GUTI : 
Line 794: [D :MM,%d]  Current guti is invalid identity type
Line 804: [DumpHex] Last visited Registered TAI : 
Line 807: [D :MM,%d]  Current TAI is invalid
Line 813: [D :MM,%d]  5GS UPDATE STATUS : %d
Line 835: [DumpHex] Update Flash GUTI 
Line 839: [DumpHex] Update Flash GUTI with NO-Identity(0xF0---)
Line 842: [DumpHex] Update Flash LastVisitedRegTai 
Line 843: [D :MM,%d]  Update Flash 5gsUpdateStatus : %d
Line 882: [A :MM,%d]  If NSC is active, ignore NSC update
Line 882: [MM|%d,CP] If NSC is active, ignore NSC update
Line 886: [DumpHex] EF_5GSNSC : 
Line 890: [A :MM,%d]  %%!EM ERROR : Do not update NSC, GUTI is invalid
Line 890: [MM|%d,CP] %%!EM ERROR : Do not update NSC, GUTI is invalid
Line 896: [A :MM,%d]  %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
Line 896: [MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
Line 902: [A :MM,%d]  %%!EM ERROR : Invalid 5GS NSC Tag(%02X)
Line 902: [MM|%d,CP] %%!EM ERROR : Invalid 5GS NSC Tag(%02X)
Line 907: [A :MM,%d]  (EF_5GSNSC) Consists of %d bytes
Line 907: [MM|%d,CP] (EF_5GSNSC) Consists of %d bytes
Line 909: [A :MM,%d]  KSI is %x
Line 909: [MM|%d,CP] KSI is %x
Line 911: [A :MM,%d]  Kamf Length is %d bytes
Line 911: [MM|%d,CP] Kamf Length is %d bytes
Line 917: [A :MM,%d]  %%!EM ERROR : Invalid KamfLen(%d)
Line 917: [MM|%d,CP] %%!EM ERROR : Invalid KamfLen(%d)
Line 921: [DumpHex] K_AMF= 
Line 928: [A :MM,%d]  Uplink Nas Count is %d
Line 928: [MM|%d,CP] Uplink Nas Count is %d
Line 936: [A :MM,%d]  Downlink Nas Count is %d
Line 936: [MM|%d,CP] Downlink Nas Count is %d
Line 942: [A :MM,%d]  Encryption algo %x, Integrity algo %x
Line 942: [MM|%d,CP] Encryption algo %x, Integrity algo %x
Line 947: [A :MM,%d]  EPS Encryption algo %x, EPS Integrity algo %x
Line 947: [MM|%d,CP] EPS Encryption algo %x, EPS Integrity algo %x
Line 972: [A :MM,%d]  Updated Current NSC from SIM
Line 972: [MM|%d,CP] Updated Current NSC from SIM
Line 975: [A :MM,%d]  NSC is insufficient. Ignore. NgKsi(%d), KamfLen(%d)
Line 975: [MM|%d,CP] NSC is insufficient. Ignore. NgKsi(%d), KamfLen(%d)
Line 1017: [A :MM,%d]  Invalidate ngKSI
Line 1017: [MM|%d,CP] Invalidate ngKSI
Line 1022: [A :MM,%d]  KSI is %d
Line 1022: [MM|%d,CP] KSI is %d
Line 1024: [DumpHex] K_AMF= 
Line 1030: [A :MM,%d]  Uplink Nas Count is %d
Line 1030: [MM|%d,CP] Uplink Nas Count is %d
Line 1036: [A :MM,%d]  Downlink Nas Count is %d
Line 1036: [MM|%d,CP] Downlink Nas Count is %d
Line 1059: [A :MM,%d]  If NSC is active, ignore NSC update
Line 1059: [MM|%d,CP] If NSC is active, ignore NSC update
Line 1082: [A :MM,%d]  Updated Current NSC from NV
Line 1082: [MM|%d,CP] Updated Current NSC from NV
Line 1087: [A :MM,%d]  NSC is insufficient. Reset NSC(Nas Security Context) in NV
Line 1087: [MM|%d,CP] NSC is insufficient. Reset NSC(Nas Security Context) in NV
Line 1101: [A :MM,%d]  Update Flash 5GNSC. isActivated %d isEMC %d
Line 1101: [MM|%d,CP] Update Flash 5GNSC. isActivated %d isEMC %d
Line 1102: [A :MM,%d]   : ngKsi %d, ULcount %d DLcount %d EncAlgo %d IntAlgo %d
Line 1102: [MM|%d,CP]  : ngKsi %d, ULcount %d DLcount %d EncAlgo %d IntAlgo %d
Line 1103: [A :MM,%d]   : epsIntAlgo %d, epsEncAlgo %d
Line 1103: [MM|%d,CP]  : epsIntAlgo %d, epsEncAlgo %d
Line 1104: [DumpHex]  : K_AMF 
Line 1110: [A :MM,%d]  Invalidate ngKSI
Line 1110: [MM|%d,CP] Invalidate ngKSI
Line 1122: [A :MM,%d]  NSC is insufficient. Reset NSC in NV
Line 1122: [MM|%d,CP] NSC is insufficient. Reset NSC in NV
Line 1125: [N :MM,%d]  Update Flash 5GSNSC : Done
Line 1139: [A :MM,%d]  WriteNV 5GNSC :: ngKsi %d, ULcount %d DLcount %d IntAlgo %d EncAlgo %d
Line 1139: [MM|%d,CP] WriteNV 5GNSC :: ngKsi %d, ULcount %d DLcount %d IntAlgo %d EncAlgo %d
Line 1140: [A :MM,%d]  WriteNV 5GNSC :: epsIntAlgo %d, epsEncAlgo %d
Line 1140: [MM|%d,CP] WriteNV 5GNSC :: epsIntAlgo %d, epsEncAlgo %d
Line 1141: [DumpHex] WriteNV 5GNSC :: K_AMF 
Line 1163: [A :MM,%d]  ReadNV 5GNSC :: ngKsi %d, ULcount %d DLcount %d IntAlgo %d EncAlgo %d
Line 1163: [MM|%d,CP] ReadNV 5GNSC :: ngKsi %d, ULcount %d DLcount %d IntAlgo %d EncAlgo %d
Line 1164: [A :MM,%d]  ReadNV 5GNSC :: epsEncAlgo %d, epsIntAlgo %d
Line 1164: [MM|%d,CP] ReadNV 5GNSC :: epsEncAlgo %d, epsIntAlgo %d
Line 1165: [DumpHex] ReadNV 5GNSC :: K_AMF 
Line 1177: [A :MM,%d]  %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
Line 1177: [MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
Line 1190: [A :MM,%d]  %%!EM ERROR : Not enough information for HPLMN from IMSI, MNC Length invalid
Line 1190: [MM|%d,CP] %%!EM ERROR : Not enough information for HPLMN from IMSI, MNC Length invalid
Line 1198: [N :MM,%d]  SIM changed : %d
Line 1242: [DumpHex] Read IMSI from SIM failure Read IMSI from Registry:
Line 1243: [DumpHex] Read IMSI from SIM failure Read IMSI from Registry:
Line 1244: [N :MM,%d]  MNC Length = %d
Line 1253: [A :MM,%d]  %%!EM ERROR : Not enough information for HPLMN from IMSI, MNC Length invalid
Line 1253: [MM|%d,CP] %%!EM ERROR : Not enough information for HPLMN from IMSI, MNC Length invalid
Line 1272: [A :MM,%d]  %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
Line 1272: [MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
Line 1302: [A :MM,%d]  %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
Line 1302: [MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
Line 1361: [DumpHex] EF_SUCICalcInfo : 
Line 1365: [A :MM,%d]  %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
Line 1365: [MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
Line 1372: [A :MM,%d]  %%!EM ERROR : ReadEf(%d) failure. Invalid object Tag(%X)
Line 1372: [MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. Invalid object Tag(%X)
Line 1378: [A :MM,%d]  NrmmSimOperationSUCICalcInfo :: objectLen(%d), numOfPUbkey(%d)
Line 1378: [MM|%d,CP] NrmmSimOperationSUCICalcInfo :: objectLen(%d), numOfPUbkey(%d)
Line 1380: [A :MM,%d]  %%!EM ERROR : ReadEf(%d) failure. NumOfKey(%d), Object Len(%d)
Line 1380: [MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. NumOfKey(%d), Object Len(%d)
Line 1390: [A :MM,%d]  NrmmSimOperationSUCICalcInfo :: Protection Scheme [%d] : keyIndex[%d], schemeId[%d]
Line 1390: [MM|%d,CP] NrmmSimOperationSUCICalcInfo :: Protection Scheme [%d] : keyIndex[%d], schemeId[%d]
Line 1396: [A :MM,%d]  %%!EM ERROR : ReadEf(%d) failure. Invalid object Tag(%X)
Line 1396: [MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. Invalid object Tag(%X)
Line 1405: [A :MM,%d]  %%!EM ERROR : ReadEf(%d) failure. Object Len(%d)
Line 1405: [MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. Object Len(%d)
Line 1424: [A :MM,%d]  %%!EM ERROR : ReadEf(%d) failure. Invalid object Tag(%X)
Line 1424: [MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. Invalid object Tag(%X)
Line 1430: [A :MM,%d]  %%!EM ERROR : ReadEf(%d) failure. Invalid object Tag(%X)
Line 1430: [MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. Invalid object Tag(%X)
Line 1435: [A :MM,%d]  %%!EM ERROR : ReadEf(%d) failure. Invalid Pubkey size(%d)
Line 1435: [MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. Invalid Pubkey size(%d)
Line 1441: [A :MM,%d]  %%!EM ERROR : could find public key for Key Index(%d). Ignore this
Line 1441: [MM|%d,CP] %%!EM ERROR : could find public key for Key Index(%d). Ignore this
Line 1449: [A :MM,%d]  NrmmSimOperationSUCICalcInfo :: pubKeyId : %d
Line 1449: [MM|%d,CP] NrmmSimOperationSUCICalcInfo :: pubKeyId : %d
Line 1450: [DumpHex] NrmmSimOperationSUCICalcInfo :: pubKey : 
Line 1479: [A :MM,%d]  NrmmSimOperationSUCICalcInfo :: HandleReadFailure : Clear SUCI_CALL_INFO
Line 1479: [MM|%d,CP] NrmmSimOperationSUCICalcInfo :: HandleReadFailure : Clear SUCI_CALL_INFO
Line 1502: [DumpHex] EF_NSI : 
Line 1509: [A :MM,%d]  %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
Line 1509: [MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
Line 1520: [DumpHex] Nsi Data : 
Line 1552: [DumpHex] EF_NAS_CONFIG : 
Line 1560: [A :MM,%d]  %%!EM ERROR : _T3245_BEHAVIOUR value unexpected length %d
Line 1560: [MM|%d,CP] %%!EM ERROR : _T3245_BEHAVIOUR value unexpected length %d
Line 1572: [A :MM,%d]  Not integrity feature not support so T3245 will be disabled
Line 1572: [MM|%d,CP] Not integrity feature not support so T3245 will be disabled
Line 1604: [DumpHex] EF_RoutingInd : 
Line 1613: [DumpHex] NrmmSimOperationRoutingIndicator : 
Line 1645: [DumpHex] EF_AuthKeys : 
Line 1649: [A :MM,%d]  %%!EM ERROR : Do not update NSC, GUTI is invalid
Line 1649: [MM|%d,CP] %%!EM ERROR : Do not update NSC, GUTI is invalid
Line 1658: [A :MM,%d]  %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
Line 1658: [MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
Line 1703: [A :MM,%d]  NrmmSimOperationAuthKeys :: SOR counter : %d
Line 1703: [MM|%d,CP] NrmmSimOperationAuthKeys :: SOR counter : %d
Line 1715: [A :MM,%d]  NrmmSimOperationAuthKeys :: UPU counter : %d
Line 1715: [MM|%d,CP] NrmmSimOperationAuthKeys :: UPU counter : %d
Line 1757: [A :MM,%d]  NrmmSimOperationAuthKeys :: SOR counter : %d
Line 1757: [MM|%d,CP] NrmmSimOperationAuthKeys :: SOR counter : %d
Line 1763: [A :MM,%d]  NrmmSimOperationAuthKeys :: UPU counter : %d
Line 1763: [MM|%d,CP] NrmmSimOperationAuthKeys :: UPU counter : %d
Line 1769: [DumpHex] dataPtr Auth Keys : 
Line 1773: [A :MM,%d]  %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
Line 1773: [MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
Line 1787: [DumpHex] CurNsc AUSF : 
Line 1788: [DumpHex] CurNsc SEAF : 
Line 1789: [DumpHex] SOR COunt : 
Line 1790: [DumpHex] UPU COunt : 
Line 1806: [DumpHex] AuthKeys K_AUSF : 
Line 1807: [DumpHex] AuthKeys K_SEAF : 
Line 1808: [A :MM,%d]  SOR counter : %d
Line 1808: [MM|%d,CP] SOR counter : %d
Line 1809: [A :MM,%d]  UPU counter : %d
Line 1809: [MM|%d,CP] UPU counter : %d
Line 1817: [A :MM,%d]  NSC is insufficient. Reset AuthKeys in NV
Line 1817: [MM|%d,CP] NSC is insufficient. Reset AuthKeys in NV
Line 1838: [A :MM,%d]  UAC AIC (%X)
Line 1838: [MM|%d,CP] UAC AIC (%X)
Line 1865: [DumpHex] SIM ACC Info : 
Line 1901: [A :MM,%d]  %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
Line 1901: [MM|%d,CP] %%!EM ERROR : ReadEf(%d) failure. dataPtr(%x) dataLength(%d)
Line 1908: [A :MM,%d]  DataPtr(%X)(%X), Support Home&Roam (%d)
Line 1908: [MM|%d,CP] DataPtr(%X)(%X), Support Home&Roam (%d)
Line 1928: [DumpHex] HomeService Exempt : 
Line 1929: [DumpHex] RoamingService Exempt : 
