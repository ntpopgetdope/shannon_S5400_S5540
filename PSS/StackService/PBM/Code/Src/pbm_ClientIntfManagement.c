Line 87: [PBM_%d] pbm_DecodeGetCurrentStateReqMsg  Entry
Line 107: [PBM_%d] pbm_DecodeGetMaxCapacityReqMsg Entry
Line 122: [PBM_%d] pbm_PbTypeChanged
Line 145: [PBM_%d] pbm_DecodeGetUsedCapacityReqMsg Entry
Line 158: [PBM_%d] pbm_PbTypeChanged
Line 181: [PBM_%d] pbm_DecodeGetSupportedFieldsReqMsg Entry
Line 215: [PBM_%d] pbm_DecodeSelectAdnReqMsg Entry
Line 219: [PBM_%d] Usim ADN type 0x%x
Line 242: [PBM_%d] pbm_ProcessUpdateEntryReqMsg Entry
Line 254: [PBM_%d] Pbtype 0x%x, Index 0x%x, Update type 0x%x, SubParameterLen: %d, Update data
Line 268: [PBM_%d] pbmUpdateEntryReq->SubParameterLen: %d is over SubParameterLen: %d
Line 295: [PBM_%d] memory allocation fail
Line 306: [PBM_%d] In function pbm_ProcessUpdateEntryReqMsg: Wrong Update Type %d Received
Line 334: [PBM_%d] pbm_DecodeSearchEntryReqMsg Entry
Line 340: [PBM_%d] Pbtype   0x%x    Search string.
Line 366: [PBM_%d] pbm_DecodePbmGetSupportedPhonebookReqMsg Entry
Line 396: [PBM_%d] pbm_DecodePbmGetStorageCapaReqMsg Entry
Line 417: [PBM_%d] pbm_PbTypeChanged
Line 442: [PBM_%d] pbm_DecodeSelectStorageReqMsg Entry
Line 481: [PBM_%d] pbm_DecodeGetStoragelistReqMsg Entry
Line 520: [PBM_%d] pbm_DecodeGetEntriesInfoReqMsg Entry
Line 542: [PBM_%d] pbm_PbTypeChanged
Line 567: [PBM_%d] pbm_DecodeGet3gPbCapaReqMsg Entry
Line 603: [PBM_%d] pbm_DecodeReadEntryReqMsg
Line 619: [PBM_%d] pbm_PbTypeChanged
Line 656: [PBM_%d] Reading Entry... From Cache
Line 669: [PBM_%d] pbm_DecodeStartManualCacheReqMsg
Line 679: [PBM_%d] Start PBM initialization
Line 702: [PBM_%d] pbm_DecodeUpdateEntryReqMsg Entry, SubParameterLen: %d
Line 708: [PBM_%d] pbm_PbTypeChanged
Line 733: [PBM_%d] 1. datalen  0x%x 
Line 747: [PBM_%d] 2. datalen  0x%x 
Line 766: [PBM_%d] START PROCESSING NS UPDATE REQUEST
Line 774: [PBM_%d] memory allocation fail
Line 819: [PBM_%d] PBM_OPERATION_FAILED_DIAL_STR_TOO_LONG = %d
Line 822: [PBM_%d] UpdateEntryReqResult = %d
Line 850: [PBM_%d] Sending GetCurrentStatusRsp.....    Current Global State 0x%x
Line 891: [PBM_%d] Sending GetMaxcapacityRsp.....    max Entries 0x%x
Line 929: [PBM_%d] Sending GetUsedcapacityRsp.....    used Entries 0x%x
Line 968: [PBM_%d] Sending GetSupportedFieldsRsp.....   numOfFields 0x%x
Line 994: [PBM_%d] Sending Select AdnRsp.....    Result 0x%x
Line 1021: [PBM_%d] ReadPbEntryRsp.....    DataLen  0x%x    NextIndex 0x%x    data.
Line 1071: [PBM_%d] Sending ReadPbEntryRsp.....    Entry 0x%x
Line 1113: [PBM_%d] Sending UpdatePbEntryRsp.....    Result 0x%x  Update type 0x%x index 0x%x
Line 1152: [PBM_%d] Sending SearchPbEntryRsp.....    No Of seraches 0x%x
Line 1193: [PBM_%d] Sending PB status Ind. to client 0x%x Status  0x%x
Line 1230: [PBM_%d] Sending Pb Cache Status Ind.....    Client 0x%x  status  0x%x PBM state .... %x
Line 1261: [PBM_%d] Sending GetSupportedPhonebookRsp.....    Supp Phonebook 0x%x
Line 1418: [PBM_%d] Sending Get3gPbCapaRsp TO NS.....    Result 0x%x
Line 1483: [PBM_%d] HEX DUMP OF PBM-FIELD
Line 1498: [PBM_%d] HEX DUMP OF Pbm3gPbCapability AFTER COPYING
Line 1502: [PBM_%d] Sending Pb Status Ind to NS.....    Client 0x%x
Line 1688: [PBM_%d] pbm_DecodeStartCachingReqMsg Entry pbm_PbmSupportConfig: 0x%x
Line 1692: [PBM_%d] CachingType: 0x%x
Line 1740: [PBM_%d] PBM state cleared and updated CachingType to [%d]
Line 1762: [PBM_%d] pbm_DecodeStartCachingReqMsg Start cache req already received. So ignoring
Line 1768: [PBM_%d] Start PBM initialization
Line 1776: [PBM_%d] PBM caching disabled.
Line 1780: [PBM_%d] Wrong CachingType received
Line 1785: [PBM_%d] Invalid caching Request
Line 1914: [PBM_%d] Handling Get 3G capability  %d
Line 2034: [PBM_%d] pbmGetIpcSubParamFromPbmEntry : wrong storage type received
Line 2076: [PBM_%d] UCS2 encoding type 0x%x
Line 2083: [PBM_%d] maxlength 0x%x
Line 2087: [PBM_%d] len_count 0x%x, index 0x%x, pbmEntry[index] 0x%x, pbmEntry[index+1] 0x%x
Line 2092: [PBM_%d] IpcSubParamLen 0x%x
Line 2148: [PBM_%d] C7 modified to  0x%x
Line 2202: [PBM_%d] UCS2 encoding is invalid 
Line 2258: [PBM_%d] PBM_NonNameFields:%d EmailField: %d, ANRField: %d
Line 2263: [PBM_%d] Extracting 0x%x
Line 2275: [PBM_%d] IpcSubParamLen 0x%x
Line 2281: [PBM_%d] sizeof(IpcSubParamLen): %d is over (subMaxLeftLen-1): %d
Line 2288: [PBM_%d] pbmGetSubParamFrom3GPbEntry subParam[3]: %d
Line 2328: [PBM_%d] sizeof(IpcSubParamLen): %d is over (subMaxLeftLen-1): %d
Line 2348: [PBM_%d] SKIPPING UN-SUPPORTED FIELD
Line 2385: [PBM_%d] <<< PBMConvertGsm7_to_UCS2 input_u8: 0x%x *output_ucs2_char: 0x%x
Line 2435: [PBM_%d] In PBMConvertUCS2_to_GSM.....result %d output len %x
Line 2471: [PBM_%d] In pbm_IsUCS2ToGSM7Possible..result 0x%x ucs2: 0x%x gsm7 : 0x%x
Line 2509: [PBM_%d] RetVal in pbm_IsByteFieldTag = %d
Line 2592: [PBM_%d] ucs2_type 0x%x
Line 2604: [PBM_%d] Idx is over size of array, ucs2_type: 0x%x, requested idx: %d(subParamLength+1), subMaxLeftLen: %d, data type: %d
Line 2616: [PBM_%d] Idx is over size of array, ucs2_type: 0x%x, subparam_start: %d, subMaxLeftLen: %d, sizeof(sipc_byte): %d
Line 2663: [PBM_%d] C7 modified to  0x%x
Line 2669: [PBM_%d] Idx is over size of array, ucs2_type: 0x%x, subparam_start: %d, subMaxLeftLen: %d, sizeof(sipc_byte): %d
Line 2686: [PBM_%d] Idx is over size of array, ucs2_type: 0x%x, requested idx: %d(subParamLength+1), subMaxLeftLen: %d, data type: %d
Line 2728: [PBM_%d] Idx is over size of array, ucs2_type: 0x%x, subparam_start: %d, subMaxLeftLen: %d, sizeof(sipc_byte): %d
Line 2743: [PBM_%d] Idx is over size of array, ucs2_type: 0x%x, requested idx: %d(subParamLength+1), subMaxLeftLen: %d, data type: %d
Line 2755: [PBM_%d] KSC5601 encoding
Line 2766: [PBM_%d] Idx is over size of array, ucs2_type: 0x%x, requested idx: %d(subParamLength+1), subMaxLeftLen: %d, data type: PBM_TEXT_ENC_UCS2
Line 2785: [PBM_%d] Idx is over size of array, ucs2_type: 0x%x, requested idx: %d(subParamLength+1), subMaxLeftLen: %d, data type: PBM_TEXT_ENC_GSM7BIT
Line 2800: [PBM_%d] Idx is over size of array, ucs2_type: 0x%x, requested idx: %d(subParamLength+1), subMaxLeftLen: %d, data type: %d
Line 2809: [PBM_%d] Copy data ptr Idx is over size of array, ucs2_type: 0x%x, requested idx: %d(subParamLength+1), subMaxLeftLen: %d, data len: %d, data type: %d
Line 2825: [PBM_%d] Idx is over size of array, ucs2_type: 0x%x, requested idx: %d(subParamLength+1), subMaxLeftLen: %d, data type: %d
Line 2834: [PBM_%d] Copy data ptr Idx is over size of array, ucs2_type: 0x%x, requested idx: %d(subParamLength+1), subMaxLeftLen: %d, data len: %d, data type: %d
Line 2850: [PBM_%d] Idx is over size of array, ucs2_type: 0x%x, requested idx: %d(subParamLength+1), subMaxLeftLen: %d, data type: 0xFF(field is absent)
Line 2925: [PBM_%d] Name Tag converted from UCS2 to KSC5601
Line 2944: [PBM_%d] Name Tag converted from UCS2 to GSM7 bit isallGSM
Line 2992: [PBM_%d] field length received from SIPC too large..fieldTag= 0x%x, FieldLength=0x%X !
Line 3040: [PBM_%d] E7 --> 09
Line 3112: [PBM_%d] Wrong Encoding type 0x%x
Line 3130: [PBM_%d] field length received from SIPC too large..fieldTag= 0x%x, FieldLength=0x%X 
Line 3140: [PBM_%d] Wrong Field tag found Tag: 0x%x  parsed dataLen: 0x%x
Line 3181: [PBM_%d] test print alphaId[%d]: 0x%x , alphaId[index+1]:  0x%x 
Line 3213: [PBM_%d] flag81TypeSupport = FALSE
Line 3232: [PBM_%d] flag82TypeSupport = FALSE
Line 3248: alphaCode: 0x%x , minAlphaCode: 0x%x , maxAlphaCode: 0x%x
Line 3258: [PBM_%d] gsm7 : 0x%x
Line 3269: [PBM_%d] Only Capital C present make flag81TypeSupport = FALSE
Line 3285: [PBM_%d] Enc type : 81 , *halfPageBase: 0x%x
Line 3290: [PBM_%d] Specialcase
Line 3296: [PBM_%d] Both Small C and C present,use strict type 81
Line 3303: [PBM_%d] Enc type : 82 , *fullPageBase: 0x%x
Line 3308: [PBM_%d] Base pointers are diff: ENC type selected: 80
Line 3313: [PBM_%d] All data GSM Default data type
Line 3455: [PBM_%d] pbmGet3GPbEntryFromIpcSubParam.....Name Tag converted from UCS2 to KSC5601
Line 3471: [PBM_%d] AddSubParamToPbEntry.....Name Tag converted from UCS2 to GSM7 bit isallGSM
Line 3538: [PBM_%d] E7 --> 09
Line 3599: [PBM_%d] Wrong Encoding type 0x%x
Line 3706: [PBM_%d] pbm_DecodeSubscriberNumGetReqMsg Entry
Line 3790: [PBM_%d] KSC5601 bytes 0x%X 
Line 3808: [PBM_%d] UCS2 char 0x%X 
Line 3814: [PBM_%d] KSC5601 match not found !!!
Line 3847: [PBM_%d] KSC5601 bytes 0x%X 0x%X
Line 3855: [PBM_%d] KSC5601 Extended bytes 0x%X 0x%X 
Line 3879: [PBM_%d] UCSChar bytes 0x%X
Line 3915: [PBM_%d] KSC5601 0x%X 
Line 3922: [PBM_%d] 
 UCS2 match not found !!!
Line 3975: [PBM_%d] pbm_handleConversionUCS2ToKSC5601 srcLen 0x%X *outNoOfChar 0x%X
Line 4022: [PBM_%d] pbm_handleConvertionKSC5601ToUCS2 srcLen 0x%X *outNoOfChar 0x%X
Line 4043: [PBM_%d] src[index] 0x%x
Line 4061: [PBM_%d] chaning ASCII @ char to GSM7bit @ char at index 0x%x
Line 4105: [PBM_%d] src[index] 0x%x
Line 4189: [PBM_%d] pbm_handleIfAsciiAndConvertToGsm7bit dst_index: %d is over dstMaxlen: %d
