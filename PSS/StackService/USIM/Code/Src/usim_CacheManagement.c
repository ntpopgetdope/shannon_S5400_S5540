Line 93: [USIM_%d] >> usim_ReadEfFromCache
Line 102: [USIM_%d] EF Found ,Index-> 0x%02X
Line 111: [USIM_%d] >> usim_ReadEfFromCache CacheState=%d
Line 131: [USIM_%d] offset or offset Length are invalid
Line 143: [USIM_%d] usim_Cache DataLength(0) is invalid
Line 161: [USIM_%d] Mode is Not Absolute Can't be Read From Cache
Line 192: [USIM_%d] MEMALLOC FAILS !
Line 200: [USIM_%d] NULL buffer addr. received!!! (usim_Cache[Index].EfData- 0x%X
Line 211: [USIM_%d] EfSize is zero!! skip to mem alloc !!
Line 217: [USIM_%d] EF Data Not Assigned
Line 232: [USIM_%d] EF Not Found!! (result=%d)
Line 252: [USIM_%d] >> ReadRecordFromCache,Rec Num -> 0x%02X
Line 265: [USIM_%d] Record found , Index -> 0x%02X
Line 278: [USIM_%d] NULL buffer addr. received!!! (usim_Cache[Index].EfData- 0x%X
Line 289: [USIM_%d] File Found,Record doesnt exist in cache
Line 305: [USIM_%d] EF Not Found !!
Line 328: [USIM_%d] >> ReadParamFromCache,ElementId-> 0x%02X, Record Num-> 0x%02X
Line 342: [USIM_%d] EF found in Cache, Index-> 0x%02X
Line 361: [USIM_%d] File Found but Requested Record Number Does Not Exist in Cache
Line 365: [USIM_%d] Parameter Offset -> 0x%02X
Line 381: [USIM_%d] NULL buffer addr. received!!! (usim_Cache[Index].EfData- 0x%X
Line 391: [USIM_%d] File Found but ElementId Doesnt Exist
Line 397: [USIM_%d] File Found but Record Num Doesnt Exist
Line 412: [USIM_%d] EF Not Found!!
Line 448: [USIM_%d] >> usim_ReadBerTlvObjFromCache,Tag -> 0x%02X 0x%02X 0x%02X
Line 462: [USIM_%d] NULL buffer addr. received!!! (usim_Cache[Index].EfData- 0x%X
Line 470: [USIM_%d] MEMALLOC FAILS !
Line 498: [USIM_%d] NULL buffer addr. received!!! (usim_Cache[Index].EfData- 0x%X
Line 506: [USIM_%d] MEMALLOC FAILS !
Line 518: [USIM_%d] File Found, BER TLV Object doesnt exist in cache
Line 535: [USIM_%d] EF Not Found !!
Line 563: [USIM_%d] >> UpdateAllCacheData
Line 576: [USIM_%d] Found EF_UST ,Index -> %d
Line 585: [USIM_%d] Unable To Write To Cache
Line 594: [USIM_%d] Found EF_SST,Index -> %d
Line 603: [USIM_%d] Unable To Write To Cache
Line 619: [USIM_%d] IMSI Length > 8 bytes, limiting it to 8 Bytes
Line 633: [USIM_%d] IMSI Replacement is enabled so MCC & MNC of all 0XFF changed to 001 01
Line 679: [USIM_%d] isCMCCOperator: Entry!
Line 701: [USIM_%d] MCC/MNC found in CMCC plmn list!
Line 710: [USIM_%d] usim_CustomEhplmnHandling: MCC/MNC not matched with CMCC list!
Line 715: [USIM_%d] usim_CustomEhplmnHandling:usim_GetMccMnc FAILS !
Line 1035: [USIM_%d] >> ReadFromSimAndWriteToCache,CacheFileIndex -> %d
Line 1043: [USIM_%d] Reading IMSIP instead of IMSI
Line 1101: [USIM_%d] BER-TLV Info Object Info not written to cache
Line 1137: [USIM_%d] Unable to Write Ef into cache
Line 1142: [USIM_%d] Unable to Read Ef from SIM 
Line 1170: [USIM_%d] >> UpdateEfInCache
Line 1176: [USIM_%d] Found EF in Cache,Index -> %d
Line 1193: [USIM_%d] Record Can't be updated with this Mode- %d
Line 1221: [USIM_%d] Updated len > Cached len
Line 1234: [USIM_%d] NULL buffer addr. received!!! (usim_Cache[Index].EfData- 0x%X
Line 1249: [USIM_%d] Ef not updated in Cache
Line 1264: [USIM_%d] Ef not found in Cache
Line 1283: [USIM_%d] >> UpdateRecordInCache,FileId-> 0x%02X, Rec Num-> 0x%02X
Line 1292: [USIM_%d] Record Found ,Index-> %d
Line 1307: [USIM_%d] NULL buffer addr. usim_Cache[Index].EfData
Line 1323: [USIM_%d] File Found but Requested Record Number Does Not Exist in Cache
Line 1338: [USIM_%d] Record Not Found In Cache
Line 1360: [USIM_%d] >> UpdateParamInCache. ElementId -> 0x%02X, RecordNumber -> 0x%02X
Line 1372: [USIM_%d] EF found , Index -> 0x%02X
Line 1388: [USIM_%d] File Found but ElementId Doesnt Exist
Line 1393: [USIM_%d] Parameter Offset-> 0x%02X
Line 1400: [USIM_%d] NULL buffer addr. usim_Cache[Index].EfData
Line 1419: [USIM_%d] File Found but ElementId Does Not Exist
Line 1434: [USIM_%d] ElementID Not Found In Cache
Line 1467: [USIM_%d] >> WriteModifiedCahceDataToDevice
Line 1528: [USIM_%d] Using SFID:0x%X 
Line 1573: [USIM_%d] File(0x%X) not updated to UICC,rest of modified files will be skipped due to txrx error
Line 1579: [USIM_%d] File NOT Modified:0x%X
Line 1594: [USIM_%d] Attempting to Write Again,Attempt Count-> %d
Line 1599: [USIM_%d] Exceeded Write Attempt Count, Abroting ,Attempt Count-> %d
Line 1606: [USIM_%d] All Data Written to the UICC
Line 1629: [USIM_%d] >> FindModifiedCacheFiles
Line 1657: [USIM_%d] >> GetParamOffsetInEf
Line 1665: [USIM_%d] ELEMENT_IMSI,
Line 1674: [USIM_%d] ELEMENT_CK(or ELEMENT_CKPS),
Line 1683: [USIM_%d] ELEMENT_IK(or ELEMENT_IKPS),
Line 1692: [USIM_%d] ELEMENT_KSI(or ELEMENT_KSIPS),
Line 1700: [USIM_%d] ELEMENT_HPLMNPERIOD,
Line 1709: [USIM_%d] ELEMENT_ACMMAX ,
Line 1717: [USIM_%d] ELEMENT_SPN, 
Line 1725: [USIM_%d] ELEMENT_CURRCODE, 
Line 1733: [USIM_%d] ELEMENT_PRICEPERUNIT, 
Line 1741: [USIM_%d] ELEMENT_ACC, 
Line 1749: [USIM_%d] ELEMENT_TMSI, 
Line 1757: [USIM_%d] ELEMENT_LAI, 
Line 1765: [USIM_%d] ELEMENT_LAU_STATUS, 
Line 1773: [USIM_%d] ELEMENT_PTMSI, 
Line 1781: [USIM_%d] ELEMENT_PTMSI_SIG, 
Line 1789: [USIM_%d] ELEMENT_RAI, 
Line 1797: [USIM_%d] ELEMENT_RAU_STATUS, 
Line 1805: [USIM_%d] ELEMENT_UE_OPERATION_MODE, 
Line 1813: [USIM_%d] ELEMENT_LEN_OF_MNC_IN_IMSI, 
Line 1821: [USIM_%d] ELEMENT_LEN_OF_MNC_IN_IMSI, 
Line 1829: [USIM_%d] ELEMENT_LAST_USED_TP_MR, 
Line 1837: [USIM_%d] ELEMENT_MEM_CAP_EXCEEDED_NOTF_FLAG, 
Line 1845: [USIM_%d] ELEMENT_eMLPP_PRIORITY_LEVELS, 
Line 1853: [USIM_%d] ELEMENT_eMLPP_FAST_CALL_SETUP_CONDS, 
Line 1861: [USIM_%d] ELEMENT_AUTOMATIC_ANSWER_PRIORITY_LEVELS, 
Line 1869: [USIM_%d] ELEMENT_HIDDEN_KEY, 
Line 1877: [USIM_%d] ELEMENT_START_CS, 
Line 1885: [USIM_%d] ELEMENT_START_PS, 
Line 1893: [USIM_%d] ELEMENT_MAX_START_CS_OR_PS, 
Line 1901: [USIM_%d] ELEMENT_RPLMN_ACT, 
Line 1909: [USIM_%d] ELEMENT_ICCID, 
Line 1918: [USIM_%d] ELEMENT_Kc (or ELEMENT_KcGPRS), 
Line 1928: [USIM_%d] ELEMENT_CIPHER_KEY_SEQ_NUMB(or ELEMENT_CIPHER_KEY_SEQ_NUMB_GPRS), 
Line 1936: [USIM_%d] ELEMENT_BCCH_INFO, 
Line 1944: [USIM_%d] ELEMENT_VBSS_ACT_DEACT_FLAGS, 
Line 1952: [USIM_%d] ELEMENT_PTMSI_ON_SIM, 
Line 1960: [USIM_%d] ELEMENT_PTMSI_SIG_ON_SIM, 
Line 1968: [USIM_%d] ELEMENT_RAI_ON_SIM, 
Line 1976: [USIM_%d] ELEMENT_RAU_STATUS_ON_SIM, 
Line 1982: [USIM_%d] Invalid Element (0x%02X)
Line 1988: [USIM_%d] Offset-> %d,Len-> %d
Line 2057: [USIM_%d] >> CheckUSimST SN-%d, result=%d
Line 2116: [USIM_%d] >> CheckSimST SN-%d, Result=%d
Line 2183: [USIM_%d] Invalid Bit Position
Line 2245: [USIM_%d] File ID-> 0x%x
Line 2258: [USIM_%d] File exists in -> %d
Line 2271: [USIM_%d] File structure -> %d
Line 2289: [USIM_%d] File structure -> %d
Line 2304: [USIM_%d] usim_SetCacheNeedsUpdating (CacheIndex=%d, State=%d)
Line 2390: [USIM_%d] usim_SetUpdateSimOnPowerDownStatus: %d
Line 2398: [USIM_%d] Invalid status!!!
Line 2424: [USIM_%d] Cache Available-> 
Line 2440: [USIM_%d]  Displaying Cache Ef Data 
Line 2448: [USIM_%d] EF_TYPE_TRANSPARENT
Line 2454: [USIM_%d] Cyclic or Linear
Line 2465: [USIM_%d] Needs Updating -> 
Line 2467: [USIM_%d] Num Of Records -> %d,DataLength -> %d,EfSize -> %d
Line 2472: [USIM_%d] EF Not Found 
Line 2525: [USIM_%d] File Exists In -> 
Line 2529: [USIM_%d] EF Not Found 
Line 2618: [USIM_%d] Cache And Save Status -> 
Line 2641: [USIM_%d] NORMAL Initialisation of <Cache>
Line 2659: [USIM_%d] RAT change Initialisation of <Cache>
Line 2675: [USIM_%d] Refresh Initialisation of <Cache>
Line 2697: [USIM_%d] Unknown Init Type (%x) 
Line 2915: [USIM_%d] usim_UpdateCacheState (FileId=0x%X, State=%d)
Line 2972: [USIM_%d] Cache Memory Deleted
Line 2994: [USIM_%d] Cache Memory Deleted
Line 2998: [USIM_%d] Cache index is INVALID!!!
Line 3108: [USIM_%d] >> usim_DoUSimCache
Line 3135: [USIM_%d] Relevant Service NOT Available!
Line 3153: [USIM_%d] Unable To Write To Cache
Line 3161: [USIM_%d] FileID (0x%02X),Not Available in this Application
Line 3189: [USIM_%d] ISim Cache Memory Deleted
Line 857: [USIM_%d] >> usim_EhplmnDataOptimization >>
Line 861: [USIM_%d] Skip usim_EhplmnOptimization for factory VSIM
Line 867: [USIM_%d] >> ReadFromSimAndWriteToCache::EHPLMN Reading from SIM Failed, CacheFileIndex -> %d
Line 873: [USIM_%d] usim_ReadFromSimAndWriteToCache- EF_EHPLMN: RspDataLength is: %d
Line 895: [USIM_%d] All entries in EF_EHPLMN are 0x00/0xFF!
Line 900: [USIM_%d] All entries in EF_EHPLMN are Non-Zero means it has valid entry. No customisation required!
Line 907: [USIM_%d] >> ReadFromSimAndWriteToCache::EHPLMN empty ,CacheFileIndex -> %d
Line 914: [USIM_%d] Customisation required for EF_EHPLMN entry!
Line 740: [USIM_%d] usim_CustomEhplmnHandling: Entry!
Line 754: [USIM_%d] MEMALLOC FAILS !
Line 767: [USIM_%d] CMCC HPLMNs Data copied into RspDataPtr to save into cache %d
Line 768: [USIM_%d] Updated Ehplmn list by EFS success !
Line 949: [USIM_%d] >> usim_HplmnNwActDataOptimization >>
Line 953: [USIM_%d] Skip usim_EhplmnwactOptimization for factory VSIM
Line 959: [USIM_%d] >> ReadFromSimAndWriteToCache::HPLMNwACT Reading from SIM Failed, CacheFileIndex -> %d
Line 965: [USIM_%d] usim_ReadFromSimAndWriteToCache- EF_HPLMNwACT: RspDataLength is: %d
Line 983: [USIM_%d] All entries in EF_HPLMNwACT are Zero!
Line 988: [USIM_%d] All entries in EF_HPLMNwACT are Non-Zero means it has valid entry. No customisation required!
Line 995: [USIM_%d] Customisation required for EF_HPLMNwACT entry!
Line 794: [USIM_%d] usim_CustomHplmnwActHandling: Entry!
Line 812: [USIM_%d] MEMALLOC FAILS !
Line 826: [USIM_%d] CMCC HPLMNwAct Data copied into RspDataPtr to save into cache %d
Line 827: [USIM_%d] Updated hplmnwact list by EFS success !
