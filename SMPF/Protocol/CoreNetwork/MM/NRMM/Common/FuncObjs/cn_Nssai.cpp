Line 93: [N :MM,%d]  Nssai::AddAllowedSnssai - SST = %x, SD = %x%x%x
Line 96: [N :MM,%d]  Requested Snssai is already listed in allowed NSSAI
Line 116: [N :MM,%d]  Allowed NSSAI list is full!!
Line 122: [N :MM,%d]  Nssai::AddPendingSnssai - SST = %x, SD = %x%x%x
Line 125: [N :MM,%d]  Pending Snssai is already listed in allowed NSSAI
Line 142: [N :MM,%d]  Pending NSSAI list is full!!
Line 166: [N :MM,%d]  Nssai::CheckInAllowedNssai - SST = %x, SD = %x%x%x
Line 215: [N :MM,%d]  Nssai::RemoveFromAllowedNssai : Index = %d, NumOfRejNssai = %d
Line 232: [A :MM,%d]  Index : out of range !!
Line 232: [MM|%d,CP] Index : out of range !!
Line 282: [N :MM,%d]  Nssai::RemoveFromPendingNssai : Index = %d
Line 340: [N :MM,%d]  Nssai::Check ConfiguredNssai : SST = %x, SD = %x%x%x
Line 371: [N :MM,%d]  Nssai::Check RequestNssai - SST = %x, SD = %x%x%x
Line 391: [N :MM,%d]  Nssai::CheckInRejectedNssai - SST = %x, SD = %x%x%x
Line 419: [N :MM,%d]  Nssai::Check PendingNssai : SST = %x, SD = %x%x%x
Line 437: [N :MM,%d]  Nssai::CheckPendingNssai - SST = %x, SD = %x%x%x
Line 499: [N :MM,%d]  Nssai::RemoveFromRejectedNssai : Index = %d, NumOfRejNssai = %d
Line 516: [A :MM,%d]  Index : out of range !!
Line 516: [MM|%d,CP] Index : out of range !!
Line 549: [N :MM,%d]  Delete all rejected NSSAIs for current registration areas (whole RTAI list) : 0x%02X 0x%02X 0x%02X
Line 594: [N :MM,%d]  Remove rejected NSSAI related with PLMN : 0x%02X 0x%02X 0x%02X
Line 618: [D :MM,%d]  Nssai::CheckAndAddRejectedNssai - SST = %x, SD = %x%x%x
Line 678: [N :MM,%d]  Reset NssaiContext
Line 684: [N :MM,%d]  Reset ConfiguredNssai
Line 704: [N :MM,%d]  Reset AllowedNssai
Line 713: [N :MM,%d]  Reset PendingNssai
Line 722: [N :MM,%d]  Reset RejectedNssai
Line 729: [N :MM,%d]  Reset RequestNssai
Line 786: [N :MM,%d]  Delete NSSAI : Reset Default Configured NSSAI
Line 801: [N :MM,%d]  Delete NSSAI : Reset Configured NSSAI : PLMN ID = 0x%02X %02X %02X
Line 813: [N :MM,%d]  Delete NSSAI : Reset Allowed NSSAI : PLMN ID = 0x%02X %02X %02X
Line 831: [N :MM,%d]  Delete NSSAI : Reset Configured NSSAI For All PLMN : PLMN ID = 0x%02X %02X %02X
Line 851: [N :MM,%d]  Delete NSSAI : Reset Allowed NSSAI For All PLMN : PLMN ID =  0x%02X %02X %02X
Line 879: [DumpHex] NSSAI::AllowedNSSAIList(Rcvd)
Line 883: [A :MM,%d]  %%!EM Exceeded limited length of NSSAI!!
Line 883: [MM|%d,CP] %%!EM Exceeded limited length of NSSAI!!
Line 923: [DumpHex] NSSAI::ConfiguredNSSAIList(Rcvd) : 
Line 927: [A :MM,%d]  %%!EM Exceeded limited length of NSSAI!!
Line 927: [MM|%d,CP] %%!EM Exceeded limited length of NSSAI!!
Line 963: [DumpHex] NSSAI::PendingNSSAIList(Rcvd) : 
Line 967: [A :MM,%d]  %%!EM Exceeded limited length of NSSAI!!
Line 967: [MM|%d,CP] %%!EM Exceeded limited length of NSSAI!!
Line 987: [N :MM,%d]  Reset previous Allowed NSSAI
Line 1009: [DumpHex] Receive preferred Nssai : 
Line 1019: [W :MM,%d]  NrmmNssaiContext is nullptr
Line 1019: [MM|%d,CP] NrmmNssaiContext is nullptr
Line 1030: [DumpHex] NSSAI::DefaultConfiguredNSSAIList(Rcvd) : 
Line 1034: [A :MM,%d]  %%!EM Exceeded limited length of NSSAI!!
Line 1034: [MM|%d,CP] %%!EM Exceeded limited length of NSSAI!!
Line 1107: [E :MM,%d]  %%!DC (dIE) SetRejectedNssai Exception(%d)
Line 1181: [A :MM,%d]  %%!EM length 0 of snssai is not expected
Line 1181: [MM|%d,CP] %%!EM length 0 of snssai is not expected
Line 1206: [D :MM,%d]  %%!EM Partial extended rejected Nssai %d 
Line 1209: [D :MM,%d]  %%!EM Partial extended rejected Nssai type %d is not expected
Line 1216: [A :MM,%d]  %%!EM Unexpected value of numOfElement received(%d), Set numOfElement as 8 
Line 1216: [MM|%d,CP] %%!EM Unexpected value of numOfElement received(%d), Set numOfElement as 8 
Line 1261: [E :MM,%d]  %%!DC (dIE) SetExtendedRejectedNssai Exception(%d)
Line 1271: [D :MM,%d]  SET NSSAI from UPM, %d Plmns
Line 1292: [D :MM,%d]  Received NSSAI : PLMN ID = 0x%02X %02X %02X
Line 1293: [DumpHex]  - Configured NSSAI : 
Line 1294: [DumpHex]  - Allowed    NSSAI : 
Line 1295: [DumpHex]  - Rejected   NSSAI : 
Line 1356: [D :MM,%d]  Add Allowed Nssai To RequestNssai
Line 1363: [D :MM,%d]  Nssai::AddConfiguredNssaiToRequestNssai
Line 1369: [D :MM,%d]  Configured nssai[%d] was not added to requested nssai because it's alreday included in allowed nssai
Line 1373: [D :MM,%d]  Configured nssai[%d] was not added to requested nssai because it's in rejected nssai
Line 1377: [D :MM,%d]  Configured nssai[%d] was not added to requested nssai because it's in pending nssai
Line 1381: [D :MM,%d]  Configured nssai[%d] was not added to requested nssai due to nssrg
Line 1385: [D :MM,%d]  Configured nssai[%d] added to requested nssai
Line 1399: [D :MM,%d]  Default configured nssai[%d] was not added to requested nssai because it's in rejected nssai
Line 1403: [D :MM,%d]  Default configured nssai[%d] added to requested nssai
Line 1410: [D :MM,%d]  Use default configured NSSAI for requested NSSAI !!
Line 1552: [N :MM,%d]  Nssai::CheckShareAtLeast1CommonNssrg
Line 1562: [N :MM,%d]   : Has Common Nssrg value %d
Line 1567: [N :MM,%d]   : Doesn't have Common Nssrg value
Line 1573: [N :MM,%d]  Nssai::GetCommonNssrgFromCurrentRequestNssai
Line 1588: [N :MM,%d]  reqNssai[%d] not in nssrgMap
Line 1607: [N :MM,%d]  All request nssai doesn't have nssrg info
Line 1629: [N :MM,%d]  Nssai::CheckNssaiShareAtLeast1CommonNssrgWithRequestNssai
Line 1632: [N :MM,%d]   commonNssrg size(%d)
Line 1639: [N :MM,%d]   nssai not found in nssrgMap. Accepted
Line 1653: [N :MM,%d]  Nssai::DeriveRequestNssai
Line 1710: [N :MM,%d]  Nssai::CheckAvailableNssaiExistInAllowedOrConfigured
Line 1731: [N :MM,%d]   :: AllowedNssai is available
Line 1758: [N :MM,%d]   :: ConfiguredNssai[%d] is available
Line 1784: [N :MM,%d]  UE received Network Slicing Indication as true
Line 1798: [N :MM,%d]  ** NSSRG INFO **
Line 1799: [N :MM,%d]  |-------------------------------------------------------------------------------------------|
Line 1804: [DumpHex] |- NSSRGs : 
Line 1807: [N :MM,%d]  |-------------------------------------------------------------------------------------------|
Line 1812: [N :MM,%d]  ** NSSRG INFO **
Line 1813: [N :MM,%d]  |-------------------------------------------------------------------------------------------|
Line 1822: [N :MM,%d]  |-------------------------------------------------------------------------------------------|
Line 1832: [N :MM,%d]  |- %s NSSRGs : 
Line 1833: [DumpHex] |- 
Line 1850: [N :MM,%d]  ** REJECTED NSSAI [%d] **
Line 1851: [N :MM,%d]  |-------------------------------------------------------------------------------------------|
Line 1858: [N :MM,%d]  |   - Cause : %d
Line 1859: [DumpHex] |   - Tai : 
Line 1862: [N :MM,%d]  |-------------------------------------------------------------------------------------------|
Line 1886: [N :MM,%d]  ** %s NSSAI [%d] **
Line 1887: [N :MM,%d]  |-------------------------------------------------------------------------------------------|
Line 1894: [N :MM,%d]  |-------------------------------------------------------------------------------------------|
Line 1910: [N :MM,%d]  | %s SST : %x, SD : %x%x%x
Line 1912: [N :MM,%d]  | %s SST : %x
Line 1918: [N :MM,%d]  Number of NSSAI : ConfNssai = %d, AlwdNssai = %d, RejNssai = %d PendingNssai = %d
Line 1935: [N :MM,%d]  Print NSSAI : PLMN ID =	0x%02X %02X %02X
