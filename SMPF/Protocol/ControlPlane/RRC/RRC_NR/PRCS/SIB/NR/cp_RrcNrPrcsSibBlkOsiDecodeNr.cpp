Line 54: [NRSIB][PrintAllAboutSi] SchedulingSiBitMap(%x), SchedulingOndemandSiBitMap (%x), CurrentRcvSibs (%x), AccumulatedSiBitMap(%x)
Line 131: [NRSIB] Valid SIB%d is filled to SibUpdateReq from CurrentReceived Sibs
Line 151: [NRSIB] ERROR. SIB1 is only CellSpecific. No AreaInfoList
Line 167: [NRCELL] CopySib2 Error!!!!!
Line 177: [NRCELL] CopySib2forTempSib2 Error!!!!!
Line 200: [NRCELL] CopySib3 Error!!!!!
Line 222: [NRCELL] CopySib4 Error!!!!!
Line 244: [NRCELL] CopySib5 Error!!!!!
Line 267: [NRCELL] CopySib9 Error!!!!!
Line 279: [NRSIB] SIB%d isn't defined not yet. It should be added
Line 289: [NRSIB] Valid SIB%d is filled to SibUpdateReq from AreaInfoDb
Line 348: [QTM]pDbSib5->Sib5PresentBitmask - %d  
Line 351: [QTM]CarrierFreqEUTRAPresentBitmask - %d  
Line 356: [QTM]Save target arfcn from SIB5: arfcn is %d 
Line 362: [QTM]pDbSib5 is NULL! 
Line 379: [NRSIB] SIB%d isn't defined not yet. It should be added
Line 389: [NRSIB] Valid SIB%d is filled to SibUpdateReq from CellInfoDb
Line 443: [NRSIB] SIB%d isn't defined not yet. It should be added
Line 509: [NRSIB] SIB%d isn't defined not yet. It should be added
Line 520: %s
Line 538: [NRSIB] Invalid SourceCellInfo(%d), It should be checked !!!!!!!!!!!!
Line 548: [NRSIB] SIB1 : OTHER SIBs acquire procedure is triggerd
Line 560: [NRSIB] NO SIB2 schedulingInfo in SIB1, previous SIB2 will be transferred to RRM
Line 570: %s
Line 580: [NRSIB] pScellInfo is null!!!!
Line 625: [NRSIB] No SchedulingInfoList, not satisfied with the UE CAPA(%x)
Line 631: [NRSIB] There is stored SIBs, No need to acquire SIBs
Line 639: [NRSIB] No SchedulingInfoList(%x)
Line 651: [NRSIB] pScellInfo is NULL
Line 662: [RRC][NRSIB] There are remained SIbs(%x), remaied ondemand Sib(%x)
Line 662: [RRC][NRSIB] There are remained SIbs(%x), remaied ondemand Sib(%x)
Line 668: [NRSIB] All SIBs are acquired
Line 680: [NRSIB] pScellInfo is NULL
Line 687: [NRSIB] SchedulingPosSiBitMap(%x), SchedulingOndemandPosSiBitMap(%x)
Line 695: [NRSIB] All PosSIBs are acquired
Line 714: [NRSIB] RAT mode %d
Line 717: [NRSIB] discard SIB5 (LTE RAT is disable
Line 746: [NRSIB] Valid Time is remained
Line 772: Error:: No SIB2 in DB
Line 784: Error:: No SIB3 in DB
Line 796: Error:: No SIB4 in DB
Line 808: Error:: No SIB5 in DB
Line 820: Error:: No SIB9 in DB
Line 826: Error:: Invalid case
Line 830: SibType%d : ValueTag(%d)
Line 851: Error:: No SIB2 in DB
Line 863: Error:: No SIB3 in DB
Line 875: Error:: No SIB4 in DB
Line 887: Error:: No SIB5 in DB
Line 899: Error:: No SIB9 in DB
Line 905: Error:: Invalid case
Line 909: SibType%d : ValueTag(%d)
Line 925: [NRSIB] Check stored Sib validity for CellId(%d%d), AreaId(%d)
Line 959: [NRSIB] Stored SIB%d is valid, No needed to read for AreaID(%d)
Line 971: [NRSIB] Stored SIB%d is valid, No needed to read for CellId(%d%d)
Line 975: [NRSIB] Stored SIB%d is not valid anymore, re-acq procedure is needed for CellId(%d%d)
Line 986: [SIB] SIB%d is duplicate decoded, No need to update
Line 999: [NRSIB] BitmapSchedulingInfoList %d, BitmapOnDemandSchdInfoList %d
Line 1020: [SIB][ETWS] : receive NRRRCDB_SibType6
Line 1028: [SIB][ETWS] : receive NRRRCDB_SibType7 and receive All segment message
Line 1035: [SIB][ETWS] : not received the NRRRCDB_SibType7 RxLastSegment message. Clear SIB7 in CurrentRcvSibs
Line 1043: [SIB][CMAS] : receive NRRRCDB_SibType8 and receive All segment message
Line 1048: [SIB][CMAS] : Clear SIB8 in CurrentRcvSibs
Line 1061: [NRSIB][ETWS]Secondary : CheckRxAllEtwsSegment invalid number of last segment[%d].
Line 1069: [NRSIB][ETWS]Secondary : CheckRxAllEtwsSegment LastSegmentNumber[%d] but segment[%d] msg is not received.
Line 1074: [NRSIB][ETWS]Secondary : CheckRxAllEtwsSegment LastSegmentNumber[%d] All segment msg is received.
Line 1085: [NRSIB][CMAS]CheckRxAllCmasSegment :: invalid number of last segment[%d].
Line 1093: [NRSIB][CMAS]CheckRxAllCmasSegment :: LastSegmentNumber[%d] but segment[%d] msg is not received.
Line 1102: [NRSIB][CMAS]CheckRxAllCmasSegment :: WACSegCount[%d] but segment[%d] WAC is not received.
Line 1108: [NRSIB][CMAS]CheckRxAllCmasSegment :: LastSegmentNumber[%d] All segment msg is received.
Line 1119: %s
Line 1125: [NRSIB] pAssembledEtwsMsg alloc FAIL
Line 1134: [NRSIB][ETWS]Need to check segment length. total[%d], current[%d]
Line 1146: [NRSIB][ETWS]AssembleEtwsSecondaryMsg LastSegmentNumber[%d] Cnt[%d] memPos[%d] 
Line 1159: %s
Line 1165: [NRSIB] pAssembledCmasMsg alloc FAIL
Line 1173: [NRSIB][CMAS]Need to check segment length. total[%d], current[%d]
Line 1185: [NRSIB][CMAS]pAssembledCmasMsg LastSegmentNumber[%d] Cnt[%d] memPos[%d] 
Line 1194: [NRSIB] pAssembledAreaCoordinates alloc FAIL
Line 1202: [NRSIB][CMAS]Need to check WAC length. total[%d], current[%d]
Line 1214: [NRSIB][CMAS]pAssembledAreaCoordinates WACSegCount[%d] Cnt[%d] memPos[%d] 
Line 1223: [SIB][PWS] : ClearPwsInForCellChanged
Line 1306: [RRC][NRSIB]Unused SIBs in Connected state is removed. Do not send to RRM
Line 1330: [NRSIB] SchedulingSiBitMap is set only for SIB5, SIB5 is cleared from CurrentRcvSibs
Line 1420: %s
Line 1439: %s
Line 1461: [RRC][NRSIB]AccumulateSibBit SI.AccumulatedSiBitMap = %d
Line 1467: [RRC][NRSIB]AccumulatedSiBitMap PosSI.AccumulatedSiBitMap = %d
Line 1472: [RRC][NRSIB]CheckSibTypeFromCurrentRcvSibs SI.CurrentRcvSibs = %d
Line 1480: [SIB][ETWS] : receive NRRRCDB_SibType6. RRC ==> MM_RRC_ETWS_PRIMARY_IND
Line 1485: [SIB][ETWS] : receive NRRRCDB_SibType7. RRC ==> MM_RRC_ETWS_SECONDARY_IND
Line 1490: [SIB][ETWS] : receive NRRRCDB_SibType8. RRC ==> MM_RRC_CMAS_IND
Line 1527: [SIB] pScellInfo or DbSib1 is NULL, Need to check! 
Line 1536: [SIB] SIB%d ValidityCheckInfo[%d].ValueTag(%d)/AreaScope(%d)
