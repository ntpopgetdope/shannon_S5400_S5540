Line 59: [INFO] [Entry] rpRawData = 0x%X, pEnd = 0x%X, Len = %d
Line 63: [WARNING] [Entry] Error to parse length data! Selection Criteria Entity Len(%d) > Selection Criteria Len(%d)
Line 64: [Entry] Parse next Selection Criteria
Line 79: [INFO] [Entry] Len = %d, priority and Indication = 0x%x, Max BSS load value = 0x%x(%d)
Line 84: --- Selection Criteria Set[%d]---
Line 94: [WARNING] [Entry] Mismatching Length %d vs %d
Line 112: [INFO] [Set] rpRawData = 0x%X, pEnd = 0x%X, Len = %d
Line 116: [WARNING] [Set] Error to parse length data! Selection Criteria Set Len(%d) > Selection Criteria Entry Len(%d)
Line 117: [Set] Parse next Selection Criteria Entry
Line 127: [INFO] [Set] Type = %d, Sub Entry Num = %d
Line 135: [INFO] [Sub Entry][%d] : Type = %s(%d) 
Line 166: [INFO] [Sub Entry] Invalid Type = %d
Line 194: [WARNING] [Sub Entry] Error to parse length data! Sub Entry Length(%d) > Selection Criteria Set Len(%d)
Line 204: [INFO] [Sub Entry] WlanPriority = %d, IdInd = 0x%X
Line 208: [WARNING] [Sub Entry] ID Indication = %d
Line 217: [INFO] [Sub Entry] SsidLen = %d
Line 218: [INFO] [Sub Entry] Ssid = 
Line 225: [INFO] [Sub Entry] HeSsid = 
Line 232: [WARNING] [Sub Entry] Mismatching Length
Line 251: [WARNING] [Sub Entry] Error to parse length data! Sub Entry Length(%d) > Selection Criteria Set Len(%d)
Line 261: [INFO] [Sub Entry] Priority = %d
Line 262: [INFO] [Sub Entry] FqdnMatchLen = %d
Line 263: [INFO] [Sub Entry] FqdnMatch = 
Line 270: [INFO] [Sub Entry] CountryLen = %d
Line 271: [INFO] [Sub Entry] Country = 
Line 277: [WARNING] [Sub Entry] Mismatching Length
Line 297: [WARNING] [Sub Entry] Error to parse length data! Sub Entry Length(%d) > Selection Criteria Set Len(%d)
Line 307: [INFO] [Sub Entry] PortNumLen = %d
Line 308: [INFO] [Sub Entry] PortNum = 
Line 312: [INFO] [Sub Entry] Ip Protocol = %d
Line 315: [WARNING] [Sub Entry] Mismatching Length
Line 335: [WARNING] [Sub Entry] Error to parse length data! Sub Entry Length(%d) > Selection Criteria Set Len(%d)
Line 339: [INFO] [Sub Entry] SsidLen = %d
Line 340: [INFO] [Sub Entry] Ssid = 
Line 346: [WARNING] [Sub Entry] Mismatching Length
Line 361: [INFO] [Sub Entry] Nw Type & Ind = 0x%x
Line 364: [INFO] [Sub Entry] Downlink Band width = 
Line 371: [INFO] [Sub Entry] Upllink Band width = 
Line 403: [INFO] [Entry] Len = %d, Entry Type = %d, Sub Entry Number : %d
Line 406: [INFO] [Entry] rpRawData = 0x%X, pEnd = 0x%X, Len = %d
Line 410: [WARNING] [Entry] Error to parse length data! Location Entry Len(%d) > Validiy Area Len(%d)
Line 416: [WARNING] [Entry] Error to mismatch Entry Type! EntryType(%d) != RuleInd(%d)
Line 423: --- Location Sub Entry[%d]---
Line 434: [WARNING] [Entry] Mismatching Length %d vs %d
Line 455: [INFO] [Sub Entry] PlmnId : 0x%02X 0x%02X 0x%02X
Line 462: [INFO] [Sub Entry] Location Field Cnt = %d
Line 465: [INFO] [Sub Entry] rpRawData = 0x%X, pEnd = 0x%X, Len = %d
Line 469: [WARNING] [Sub Entry] Error to parse length data! Location Sub Entry Len(%d) >Location Entry Len(%d)
Line 487: [WARNING] [Field] Error to parse length data! Location Field Entry Len(%d) >Location Sub Entry Len(%d)
Line 494: [INFO] [Field][%d] Decode Success(3GPP or Wlan) - Field Type : 0x%x
Line 497: [INFO] [Field] 3GPP or Wlan Location Field= 
Line 504: [INFO] [Field][%d] Decode Success(GEO)
Line 506: [INFO] [Field] GEO - Anchor Latitude = 
Line 510: [INFO] [Field] GEO - Anchor Longitude = 
Line 517: [INFO] [Field] GEO - Radius : 0x%x
Line 522: [WARNING] [Field] Invalid Entry Type : 0x%x
Line 538: [INFO] [Entry] Entry Type : 3GPP Location
Line 543: [INFO] [Entry] Entry Type : WLAN Location
Line 548: [INFO] [Entry] Entry Type : GEO Location
Line 581: [INFO] [Entry] Entry Len = %d, Entry Number : %d
Line 584: [INFO] [Entry] rpRawData = 0x%X, pEnd = 0x%X, Len = %d
Line 588: [WARNING] [Entry] Error to parse length data! Location Entry Len(%d) > Validiy Area Len(%d)
Line 595: --- Time Of Day Sub Field[%d]---
Line 603: [INFO] [Sub Field] Field Type %d
Line 613: [INFO] [Sub Field] ToD sub field contents = 
Line 622: [INFO] [Sub Field] day of the week %d
Line 627: [WARNING] [Sub Field] Error ToD sub Field Type(%d)!
Line 635: [WARNING] [Entry] Mismatching Length %d vs %d
Line 656: [WLANSP Rule] rpRawData = 0x%X, pEnd = 0x%X, Len = %d
Line 666: [WLANSP Rule] Len = %d
Line 670: [WARNING] [WLANSP Rule] Error to parse length data! WLANSP RULE Len(%d) > ANDSP Len(%d)
Line 671: [WLANSP Rule] Parse next WLANSP RULE
Line 683: [WLANSP Rule] Identifier = %d, Priority = %d, Config = 0x%x
Line 688: [WARNING] [WLANSP Rule] Selection Criteria Decoding failure!
Line 697: [WARNING] [WLANSP Rule] Validity Area Decoding failure!
Line 707: [WARNING] [WLANSP Rule] Time of Day Decoding failure!
Line 714: [WARNING] [WLANSP Rule] Decoded length of Wlansp Rule(%d) != length in data(%d), need to check
Line 718: [WLANSP Rule] Current Decoded Len = %d
Line 726: [WARNING] [WLANSP Rule] Decoded length of Wlansp(%d) != length in data(%d), need to check
Line 750: [Selection Criteria] Selection Criteria Num = %d
Line 754: [Selection Criteria] rpRawData = 0x%X, pEnd = 0x%X, Len = %d
Line 758: [WARNING] [Selection Criteria] Error to parse length data! Selection Criteria Len(%d) > Wlansp Rule Len(%d)
Line 764: === Selection Criteria Entry[%d] ===
Line 768: [WARNING] [Selection Criteria] Selection Criteria Decoding failure!
Line 775: [WARNING] [Selection Criteria] Number of Selection Criteria entries are not correct! %d vs %d
Line 778: === Selection Criteria Entry End ===
Line 800: [Validity Area] Num = %d
Line 803: [Validity Area] rpRawData = 0x%X, pEnd = 0x%X, Len = %d
Line 807: [WARNING] [Validity Area] Error to parse length data! Validity Area Len(%d) > Wlansp Rule Len(%d)
Line 813: === Location Entry[%d] ===
Line 817: [WARNING] [Validity Area] Validity Area Decoding failure!
Line 824: [WARNING] [Validity Area] Number of Location entries are not correct! %d vs %d
Line 826: === Location Entry End ===
Line 847: [Time of Day] Num = %d
Line 850: [Time of Day] rpRawData = 0x%X, pEnd = 0x%X, Len = %d
Line 854: [WARNING] [Time of Day] Error to parse length data! Time of Day Len(%d) > Wlansp Rule Len(%d)
Line 860: === Time of Day Entry[%d] ===
Line 864: [WARNING] [Time of Day] Time of Day Decoding failure!
Line 871: [WARNING] [Time of Day] Number of time of day entries are not correct! %d vs %d
Line 873: === Time of Day Entry End ===
