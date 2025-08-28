Line 352: remove the same SCellSysInfo (Uarfcn = %d, Cpich = %d)
Line 360: remove SIB in the SCellSysInfoCache (%d)
Line 435: succeed in removing the oldest SCellSysInfoCache (NumSCellInfo = %d)
Line 445: copy SCellSysInfo[Index = %d] (Uarfcn = %d, Cpich = %d)
Line 464: copy SIB in the SCellSysInfoCache (%d)
Line 474: Fatal Error: SCellSysInfoCache is full(%d)
Line 491: rrc_ServingCellSysInfoCache_CopyLastUsedNeighborFreq : Sib11Ptr is NULL
Line 500: rrc_ServingCellSysInfoCache_CopyLastUsedNeighborFreq : Sib12Ptr is NULL
Line 509: rrc_ServingCellSysInfoCache_CopyLastUsedNeighborFreq : Sib11bisPtr is NULL
Line 529: rrc_ServingCellSysInfoCache_AddNewFreqToLastUsedNeighborFreq : UARFCN(%d), Current NumLastUsedNFreqInfo(%d) 
Line 547: Old freq: Sort
Line 555: Old freq: Skip
Line 561: New freq
Line 574: First freq
Line 578: Added %d freq, ServingCellSysInfoCache_p->NumLastUsedNFreqInfo(%d)
Line 594: copy SibType(%d) to SCellSysInfo[Index = %d] (Uarfcn = %d, Cpich = %d)
Line 601: remove SIB in the SCellSysInfoCache (%d)
Line 617: copied SibType(%d) to the SCellSysInfoCache (%d)
Line 625: Fatal Error: SameCellInfo is not found at SCellSysInfoCache(%d) from ServingCellSysInfoCache_p->NumSCellInfo(%d)
Line 626: Fatal Error: SibType(%d) cannot be copied to SCellSysInfoCache
Line 674: PeerSimCache[%d] : Found LastServingCellInfo[%d] for UARFCN%i/PSC%i (NumSCellInfo %i)
Line 726: Found LastServingCellInfo[%d] for UARFCN%i/PSC%i (NumSCellInfo %i)
Line 732: Deleting LastServingCellInfo[%d] entry for UARFCN%i/PSC%i, as it does not contain complete SIBs
Line 739: No LastServingCellInfo Found for UARFCN%i/PSC%i (NumSCellInfo %i)
Line 743: No LastServingCellInfo Available(%d)
Line 776: Finding SibId[%i] for (UARFCN%i/PSC%i) from LastSCellInfo (Total %i Cell Info Saved)
Line 784: Finding SibId[%i] for (UARFCN%i/PSC%i) from LastSCellInfo (Total %i Cell Info Saved)
Line 792: Fatal Error: SCellSysInfoIndex[%d] is overflowed(%d)
Line 845: rrc_ServingCellSysInfoCache_GetScellInfoIdxForHcsPriorityInfo : HcsPrioInfo found at Idx(%d) ServUarfcn(%d) ServCpich(%d) ServHcsPrio(%d)
Line 862: rrc_ServingCellSysInfoCache_GetScellInfoIdxForHcsPriorityInfo : HcsPrioInfo found at Idx(%d) NeibUarfcn(%d) NeibCpich(%d) NeibHcsPrio(%d)
Line 887: rrc_ServingCellSysInfoCache_GetScellInfoIdxForHcsPriorityInfo : HcsPrioInfo found at Idx(%d) NeibUarfcn(%d) NeibCpich(%d) NeibHcsPrio(%d)
Line 898: rrc_ServingCellSysInfoCache_CopyHcsPriorityInfo : SCellInfoIdx(%d) Not in Use HcsPriorityInfo
Line 904: rrc_ServingCellSysInfoCache_CopyHcsPriorityInfo : Uarfcn(%d)
Line 933: rrc_ServingCellSysInfoCache_GetScellInfoIdxForHcsPriorityInfo : HcsPrioInfo found at Idx(%d) ServUarfcn(%d) ServCpich(%d) ServHcsPrio(%d)
Line 949: rrc_ServingCellSysInfoCache_GetScellInfoIdxForHcsPriorityInfo : HcsPrioInfo found at Idx(%d) NeibUarfcn(%d) NeibCpich(%d) NeibHcsPrio(%d)
Line 970: rrc_ServingCellSysInfoCache_GetScellInfoIdxForHcsPriorityInfo : HcsPrioInfo found at Idx(%d) NeibUarfcn(%d) NeibCpich(%d) NeibHcsPrio(%d)
Line 978: rrc_ServingCellSysInfoCache_CopyHcsPriorityInfo : SCellInfoIdx(%d) Not in Use HcsPriorityInfo
Line 983: rrc_ServingCellSysInfoCache_CopyHcsPriorityInfo : Uarfcn(%d)
Line 1005: rrc_ServingCellSysInfoCache_CopyHcsPriorityInfo: IsHcsInUse(%d) ServHcsPrio(%d) 
Line 1016: rrc_ServingCellSysInfoCache_CopyHcsPriorityInfo : ServUarfcn(%d) ServCpich(%d) set to ServHcsPrio(%d)
Line 1025: rrc_ServingCellSysInfoCache_CopyHcsPriorityInfo : IsHcsInUse(%d) ServUarfcn(%d)
Line 1041: rrc_ServingCellSysInfoCache_CopyHcsPriorityInfo : Sib11Ptr is NULL
Line 1070: rrc_ServingCellSysInfoCache_CopyHcsPriorityInfo : ServHcsPrioUpdated(%d)
Line 1079: rrc_ServingCellSysInfoCache_AddIntraFNeighborHcsPrioInfoToSysInfoCache : ServUarfcn(%d) ServCpich(%d) NumNeibPrioInfoList(%d)
Line 1091: ServingCell Found at index(%d) Uarfcn(%d) Cpich(%d) IsServingHcsPrio(%d) HcsPrio(%d)
Line 1112: Add IntraNeighbor HCellPrioInfoIdx(%d) - Uarfcn(%d) Cpich(%d) HcsPrio(%d)
Line 1118: Invalid Info HCellPrioInfoIdx(%d) Uarfcn(%d) Cpich(%d) HcsPrio(%d)
Line 1125: Invalid Info NumNeibPrioInfoList(%d) NeibPrioInfoList(0X%x)
Line 1132: rrc_ServingCellSysInfoCache_AddIntraFNeighborHcsPrioInfoToSysInfoCache : ServUarfcn(%d) is not supported
Line 1141: rrc_ServingCellSysInfoCache_AddInterFNeighborHcsPrioInfoToSysInfoCache : ServUarfcn(%d) ServCpich(%d) NumNeibPrioInfoList(%d)
Line 1169: Add InterNeighbor HCellPrioInfoIdx(%d) - Uarfcn(%d) Cpich(%d) HcsPrio(%d)
Line 1175: Invalid Info HCellPrioInfoIdx(%d) Uarfcn(%d) Cpich(%d) HcsPrio(%d)
Line 1184: rrc_ServingCellSysInfoCache_AddInterFNeighborHcsPrioInfoToSysInfoCache : ServUarfcn(%d) is not supported
Line 1607: Clear SysInfoContainer (num = %d)
Line 1684: [CheckIsSysInfoContainerAvailabe] SysInfoContainerList is available (Idx %d, Uarfcn %d, Cpich %d)
Line 1691: [CheckIsSysInfoContainerAvailabe]Critical :: Uarfcn and Cpich match up but Data is not available (Idx %d, Uarfcn %d, Cpich %d)
Line 1710: CampedSysInfoContainer is available (Uarfcn %d, Cpich %d)
Line 1723: SysInfoContainerList is available (Idx %d, Uarfcn %d, Cpich %d)
Line 1731: Critical :: Uarfcn and Cpich match up but Data is not available (Idx %d, Uarfcn %d, Cpich %d)
Line 1766: Critial : failed to create SIBs from CampedSysInfoContainer
Line 1787: Critial : failed to decode SysInfoContainer
Line 1803: SysInfoContainer is not available
Line 1819: CampedSysInfoContainer is available
Line 1826: Cell Info is different (SysInfoContainer: uarfcn %d, cpich %d, ServingCell: uarfcn %d, cpich %d
Line 1833: CampedSysInfoContainer is not available
Line 1888: ServCellPrio = %d, EutraReselPrio = %d
Line 1900: NW configure UTRA with highest priority
Line 1910: Get Bandwidth = %d, Priority = %d, QrxlevminEutra = %d, ThresXhigh = %d, ThresXlow = %d
Line 1916: Set Priority = %d
Line 1922: Set QrxlevminEutra = %d
Line 1928: Set ThreshXhigh = %d
Line 1934: Set ThreshXlow = %d
Line 1940: Set QqualminEutra = %d
Line 1946: Set ThreshXhigh2 = %d
Line 1952: Set ThreshXlow2 = %d
Line 1971: rrc_ServingCellSysInfoCache_GetNeighborFreqFromSIBcache
Line 1989: rrc_ServingCellSysInfoCache_GetNeighborFreqFromSIBcache Based on PeerStack NumberNeighBourInfo(%d)
Line 2005: rrc_ServingCellSysInfoCache_GetNeighborFreqFromSIBcacheForCurrentStack  NumNFreqInfo(%d)
Line 2009: NeighborFreq UARFCN(%d)
Line 2034: rrc_ServingCellSysInfoCache_AddNewFreqToNeighborFreq : UARFCN(%d), Current NumNFreqInfo(%d) 
Line 2049: New freq
Line 2063: First freq
Line 2066: Added %d freq, ServingCellSysInfoCache_p->NumNFreqInfo(%d)
Line 282: rrc_ServingCellSysInfoCache_InitLastNeighborFreq: (Uarfcn = %d) Restored to LastUsedNeighborFreq[%d]
Line 290: rrc_ServingCellSysInfoCache_InitLastNeighborFreq: %d freq restored
Line 306: remove the oldest SCellSysInfo (Uarfcn = %d, Cpich = %d)
Line 313: remove SIB in the SCellSysInfoCache (%d)
Line 813: rrc_ServingCellSysInfoCache_InitPriorityInfo: LastPriorityInfo initialized
Line 1270: succeeded in creating a MIB
Line 1276: Failed to create a MIB
Line 1282: Failed to create MIB in SysInfoContainer: decoded MIB is NULL
Line 1297: succeeded in creating a SB1
Line 1303: Failed to create a SB1
Line 1311: Failed to create SB1 in SysInfoContainer
Line 1315: SB1 Not Included in SysInfoContainer
Line 1331: succeeded in creating a SB2
Line 1337: Failed to create a SB2
Line 1345: Failed to create SB2 in SysInfoContainer
Line 1349: SB2 Not Included in SysInfoContainer
Line 1365: succeeded in creating a SIB1
Line 1371: Failed to create a SIB1
Line 1377: can not use the decoded data for SIB1 in SysInfoContainer
Line 1392: succeeded in creating a SIB3
Line 1398: Failed to create a SIB3
Line 1404: can not use the decoded data for SIB3 in SysInfoContainer
Line 1420: succeeded in creating a SIB5
Line 1425: succeeded in creating a SIB5bis
Line 1430: succeeded in creating a SIB5
Line 1431: Cause of lack of scheduling info from MIB, Creating SIB5
Line 1438: Failed to create a SIB5
Line 1444: can not use the decoded data for SIB5 in SysInfoContainer
Line 1459: succeeded in creating a SIB7
Line 1465: Failed to create a SIB7
Line 1471: can not use the encoded data for SIB7 in SysInfoContainer
Line 1486: succeeded in creating a SIB11
Line 1492: Failed to create a SIB11
Line 1500: Failed to create SIB11 in SysInfoContainer
Line 1504: SIB11 Not Included in SysInfoContainer
Line 1520: succeeded in creating a SIB11bis
Line 1526: Failed to create a SIB11bis
Line 1534: Failed to create SIB11bis in SysInfoContainer
Line 1538: SIB11bis Not Included in SysInfoContainer
Line 1554: succeeded in creating a SIB12
Line 1560: Failed to create a SIB12
Line 1568: Failed to create SIB12 in SysInfoContainer
Line 1572: SIB12 Not Included in SysInfoContainer
Line 1579: DecodedSysInfo is NULL
Line 1585: IsCampedSysInfoContainer == FALSE
Line 1216: Clear SysInfoContainerList
Line 1878: rrc_ServingCellSysInfoCache_InitPrioBaseReselEutraParamInfo: PrioBaseReselEutraParam initialized
Line 2095: rrc_ServingCellSysInfoCache_PopulateNeighborFreqFromSIBcache : Sib11Ptr is NULL
Line 2104: rrc_ServingCellSysInfoCache_PopulateNeighborFreqFromSIBcache : Sib12Ptr is NULL
Line 2113: rrc_ServingCellSysInfoCache_PopulateNeighborFreqFromSIBcache : Sib11bisPtr is NULL
