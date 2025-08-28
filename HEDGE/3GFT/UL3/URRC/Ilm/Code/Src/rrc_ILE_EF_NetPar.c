Line 173: ILE_EF_NetPar_getIntraFreqCellCount: Ile attached to UpdateReqMsg
Line 197: ILE_EF_NetPar_getIntraFreqCellFromIndex: Ile attached to UpdateReqMsg
Line 208: ILE_EF_NetPar_getIntraFreqCellFromIndex: Index out of range
Line 228: ILE_EF_NetPar_getInterFreqCellCount: Ile attached to UpdateReqMsg
Line 252: ILE_EF_NetPar_getInterFreqCellFromIndex: Ile attached to UpdateReqMsg
Line 263: ILE_EF_NetPar_getInterFreqCellFromIndex: Index out of range
Line 285: ILE_EF_NetPar_setIntraFreqCellCount: Ile attached to ReadRspMsg
Line 321: ILE_EF_NetPar_setIntraFreqCellWithIndex: Ile attached to ReadRspMsg
Line 331: ILE_EF_NetPar_setIntraFreqCellWithIndex: IntraFreqCellList is full (index out of range)
Line 352: ILE_EF_NetPar_setInterFreqCellCount: Ile attached to ReadRspMsg
Line 387: ILE_EF_NetPar_setInterFreqCellWithIndex: Ile attached to ReadRspMsg
Line 397: ILE_EF_NetPar_setInterFreqCellWithIndex: InterFreqCellList is full (index out of range)
Line 730: ILE_EF_NetPar_DecodeTLV: Ile attached to UpdateReqMsg
Line 736: ILE_EF_NetPar_DecodeTLV: No Data Records In ILE
Line 762: ILE_EF_NetPar_DecodeTLV: Ile attached to UpdateReqMsg
Line 799: ILE_EF_NetPar_GetEncodeTLVSize: Ile attached to ReadRspMsg
Line 892: ILE_EF_NetPar_EncodeTLV: Ile attached to ReadRspMsg
Line 950: ILE_EF_NetPar_EncodeTLV: No InterFreq frequencies found for InterFreqCElls - has sort been called?
Line 966: ILE_EF_NetPar_EncodeTLV: Did not find expected number of InterFreq cells
Line 993: toRegistry is greater than max size MAX_GSM_FDD_EF_NETPAR_LEN:
Line 1045: ILE_EF_NetPar_EncodeTLV: Ile attached to ReadRspMsg
Line 1098: ILE_EF_NetPar_EncodeTLV: No InterFreq frequencies found for InterFreqCElls - has sort been called?
Line 1114: ILE_EF_NetPar_EncodeTLV: Did not find expected number of InterFreq cells
Line 1141: ILE_EF_NetPar_EncodeTLV: EF_NETPAR truncated in U-SIM by %d bytes.
Line 497: EfNetPar decode failed. Expected tag FDDIntraFreqCellInfo (0x%X) received (0x%X)
Line 505: EfNetPar decode failed. Length value (%i)  is not even
Line 511: EfNetPar decode failed. Length value (%i)  is not between 2 and 66 incl.
Line 519:     IntraFreqCellCount = %d, Freq = %d
Line 539: EfNetPar decode failed. Invalid InterFreqCell frequency value (%i) 
Line 546: EfNetPar decode failed. Invalid IntraFreq cell frequency value (%i) 
Line 576:     IntraFreqCell[%d]: Uarfcn=%d, Cpich=%d
Line 581: Intra Frequency Cpich Out of Range = %u
Line 588: EfNetPar decode failed. Too many IntraFreqCell frequency cells provided (%d) 
Line 605: There are only FrequencyInfo(%d) found from IntraFreqCell info
Line 624: EfNetPar decode failed. Length value (%i)  is not even
Line 630: EfNetPar decode failed. Length value (%i)  is not between 2 and 66 incl.
Line 637: EfNetPar decode failed. Too many InterFreqCell frequency cells provided (%d) 
Line 641:     InterFreqCellCount = %d
Line 673: EfNetPar decode failed. Invalid InterFreqCell frequency value (%i) 
Line 680: EfNetPar decode failed. Invalid InterFreqCell frequency value (%i) 
Line 694:     InterFreqCell[%d]: Uarfcn=%d, Cpich=%d
Line 699: Inter-Frequency Cpich Out of Range = %u
Line 1224: ILE_EFNetPar GetEncodeTLVSize. Too many InterFreq frequencies provided
