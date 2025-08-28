Line 253: dlUserPlaneMiniRouter_ptr->bchCctrchInfo is NULL in uphy_CDlUserPlaneMiniRouter_init
Line 253: dlUserPlaneMiniRouter_ptr->bchCctrchInfo is NULL in uphy_CDlUserPlaneMiniRouter_init
Line 386: Instance created for stackId %d
Line 386: Instance created for stackId %d
Line 609: [CGI ACQUISITION] uphy_CDlUserPlaneMinRouter_SFNAcauisitionInd msg 0x%x
Line 609: [CGI ACQUISITION] uphy_CDlUserPlaneMinRouter_SFNAcauisitionInd msg 0x%x
Line 623: [CGI ACQUISITION] ind_msg->header.TransactId 0x%x CgiAcquisition 0x%x CgiAcquisition->sfnAcquisitionReq_TID 0x%x
Line 623: [CGI ACQUISITION] ind_msg->header.TransactId 0x%x CgiAcquisition 0x%x CgiAcquisition->sfnAcquisitionReq_TID 0x%x
Line 626: [CGI ACQUISITION] uphy_CDlUserPlaneMinRouter_SFNAcauisitionInd 0x%x curSfn %d %d %d sfn offset %d %d %d
Line 626: [CGI ACQUISITION] uphy_CDlUserPlaneMinRouter_SFNAcauisitionInd 0x%x curSfn %d %d %d sfn offset %d %d %d
Line 640: EutraCellInfoUpdateInd message is failed
Line 640: EutraCellInfoUpdateInd message is failed
Line 2345: Illegal cctrch number
Line 2345: Illegal cctrch number
Line 2351: BCH config with newDecoding: uarfcn %d, psc %d, rlNr %d, bch10msModeAllowed %d
Line 2351: BCH config with newDecoding: uarfcn %d, psc %d, rlNr %d, bch10msModeAllowed %d
Line 2388: Illegal cctrch number
Line 2388: Illegal cctrch number
Line 2394: BCH config with ReusingRl: uarfcn %d, psc %d, rlNr %d, bch10msModeAllowed %d
Line 2394: BCH config with ReusingRl: uarfcn %d, psc %d, rlNr %d, bch10msModeAllowed %d
Line 2463: nTrch %d,  gTrch[%d].wNumTrBlocks is %d, gTrch[%d].wNumErrTrBlocks is %d, gTrch[%d].ucTrChType is %d
Line 2463: nTrch %d,  gTrch[%d].wNumTrBlocks is %d, gTrch[%d].wNumErrTrBlocks is %d, gTrch[%d].ucTrChType is %d
Line 2472: uphy_CDlUserPlaneMiniRouter_DecodedBchValidityCheck: Data is %x
Line 2472: uphy_CDlUserPlaneMiniRouter_DecodedBchValidityCheck: Data is %x
Line 941: process - NOT SUPPORTED
Line 941: process - NOT SUPPORTED
Line 1023: [CGI ACQUISITION] uphy_CDlUserPlaneMiniRouter_ReadAndProcessTrChInfo CctrchNr 0x%x
Line 1023: [CGI ACQUISITION] uphy_CDlUserPlaneMiniRouter_ReadAndProcessTrChInfo CctrchNr 0x%x
Line 1030: User Plane discards data for Cctrch%d 
Line 1030: User Plane discards data for Cctrch%d 
Line 1043: DataCctrchDecodedInfoCmd Uhal Cmd exec - Error code %d 
Line 1043: DataCctrchDecodedInfoCmd Uhal Cmd exec - Error code %d 
Line 1056: No TrChs reported by HAL 
Line 1056: No TrChs reported by HAL 
Line 1068: S0   Warning!!! trChInfoPtr = NULL 
Line 1075: [CGI ACQUISITION] uphy_CDlUserPlaneMiniRouter_ReadAndProcessTrChInfo numTrChs 0x%x trChInfoPtr->DlTrChType %d equipmentMode %d sfnAcquisitionConfig %d
Line 1075: [CGI ACQUISITION] uphy_CDlUserPlaneMiniRouter_ReadAndProcessTrChInfo numTrChs 0x%x trChInfoPtr->DlTrChType %d equipmentMode %d sfnAcquisitionConfig %d
Line 1092: uphy_CDlUserPlaneMiniRouter_ReadAndProcessTrChInfo() Populated TrCh Nr :%d with TrCh Id:%d for ccTrChNr:%d 
Line 1092: uphy_CDlUserPlaneMiniRouter_ReadAndProcessTrChInfo() Populated TrCh Nr :%d with TrCh Id:%d for ccTrChNr:%d 
Line 1101: Cfn %d :Unable to remap TrChId %d 
Line 1101: Cfn %d :Unable to remap TrChId %d 
Line 1104: Cfn %d :Unable to remap TrChId %d 
Line 1104: Cfn %d :Unable to remap TrChId %d 
Line 1139: Invalid memory allocation: iSegBitSize = %d 
Line 1139: Invalid memory allocation: iSegBitSize = %d 
Line 1152: Cancel send to UMAC 
Line 1152: Cancel send to UMAC 
Line 1180: ****Framework Sfn %d Cfn %d slot %d User Plane writes sfn %d to chipset Rl %d, isBchConfigSfnReadCallback=%d
Line 1180: ****Framework Sfn %d Cfn %d slot %d User Plane writes sfn %d to chipset Rl %d, isBchConfigSfnReadCallback=%d
Line 1189: ****Framework Sfn %d Cfn %d slot %d User Plane writes sfn %d to chipset Rl %d, isBchConfigSfnReadCallback=%d
Line 1189: ****Framework Sfn %d Cfn %d slot %d User Plane writes sfn %d to chipset Rl %d, isBchConfigSfnReadCallback=%d
Line 1195: ****Doesn't send SFN to SFN server: readyToSendSfnToCellSfnServer %d, isDecodedBchValid %d, isBchConfigSfnReadCallback=%d
Line 1195: ****Doesn't send SFN to SFN server: readyToSendSfnToCellSfnServer %d, isDecodedBchValid %d, isBchConfigSfnReadCallback=%d
Line 1205: debug lookModeOn %d, DlTrChType %d, numTrChs %d, NoTbs %d, CrcCheckRes[0] %d, SizeOfTbs %d, Data %x
Line 1205: debug lookModeOn %d, DlTrChType %d, numTrChs %d, NoTbs %d, CrcCheckRes[0] %d, SizeOfTbs %d, Data %x
Line 1224: ****First scheduled MIB is read
Line 1224: ****First scheduled MIB is read
Line 1246: ****First scheduled MIB is read
Line 1246: ****First scheduled MIB is read
Line 1252: ****Don't do SFN Correction: BCH call back fn is Unregistered
Line 1252: ****Don't do SFN Correction: BCH call back fn is Unregistered
Line 1262: Debug SendDataToMac: TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d  Ct_Num %02d, CrcCheckRes %d
Line 1262: Debug SendDataToMac: TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d  Ct_Num %02d, CrcCheckRes %d
Line 1281: ****First scheduled MIB is read
Line 1281: ****First scheduled MIB is read
Line 1287: ****Don't do SFN Correction: BCH call back fn is Unregistered
Line 1287: ****Don't do SFN Correction: BCH call back fn is Unregistered
Line 690: numberOfTrCh>8
Line 690: numberOfTrCh>8
Line 702: msg is NULL in uphy_CDlUserPlaneMiniRouter_ExtractAndSendDchCrcInfo
Line 702: msg is NULL in uphy_CDlUserPlaneMiniRouter_ExtractAndSendDchCrcInfo
Line 750: uphy_CDlUserPlaneMiniRouter_ExtractAndSendDchCrcInfo: trChId=%d, numTrBlks=%d, numTrBlksBad=%d, tbSize=%d,  crcSize=%d
Line 750: uphy_CDlUserPlaneMiniRouter_ExtractAndSendDchCrcInfo: trChId=%d, numTrBlks=%d, numTrBlksBad=%d, tbSize=%d,  crcSize=%d
Line 756: Cant Send Crc Info 
Line 756: Cant Send Crc Info 
Line 776: Framework Cfn %d Urrc Trch id %d has received %d good crcs and %d bad crcs, BLER[%%] = %2d.%04d 
Line 776: Framework Cfn %d Urrc Trch id %d has received %d good crcs and %d bad crcs, BLER[%%] = %2d.%04d 
Line 792: Rl Info uhal cmd exec failed 
Line 792: Rl Info uhal cmd exec failed 
Line 804: Chipset believes Ref Rl %d Nbr Rl %d 
Line 804: Chipset believes Ref Rl %d Nbr Rl %d 
Line 886: numberOfTrCh>8
Line 886: numberOfTrCh>8
Line 1344: [BCH decoding] trChInfoPtr->CrcCheckRes[0]=%d, isDecodedBchBasicCheckPassed=%d
Line 1344: [BCH decoding] trChInfoPtr->CrcCheckRes[0]=%d, isDecodedBchBasicCheckPassed=%d
Line 1362: [BCH decoding] This case is error-prone, since raw decoding result is %d,  thus skip this. hwSfn %d, compensatedCurrentSfn %d
Line 1362: [BCH decoding] This case is error-prone, since raw decoding result is %d,  thus skip this. hwSfn %d, compensatedCurrentSfn %d
Line 1376: [BCH decoding] By chance, hwSfn %d and compensatedCurrentSfn %d are the same
Line 1376: [BCH decoding] By chance, hwSfn %d and compensatedCurrentSfn %d are the same
Line 1395: [BCH decoding] hwSfn %d and compensatedCurrentSfn %d are not the same, If this is 1st decodign result, that's ok
Line 1395: [BCH decoding] hwSfn %d and compensatedCurrentSfn %d are not the same, If this is 1st decodign result, that's ok
Line 1401: SFN Passing for the Segment Received Condition : %d
Line 1401: SFN Passing for the Segment Received Condition : %d
Line 1430: [BCH decoding] HW SFN locked. hwSfnLocked=%d
Line 1430: [BCH decoding] HW SFN locked. hwSfnLocked=%d
Line 1444: [BCH decoding] SFN was set but it was not increased. hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1444: [BCH decoding] SFN was set but it was not increased. hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1450: [BCH decoding] CRC check passed again after receiving 10ms BCH PDU. False Alarm. hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1450: [BCH decoding] CRC check passed again after receiving 10ms BCH PDU. False Alarm. hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1456: [BCH decoding] Evidently either this or previous one is false alarm. hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1456: [BCH decoding] Evidently either this or previous one is false alarm. hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1463: [BCH decoding] There is a false alarm but have no clue which is which, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1463: [BCH decoding] There is a false alarm but have no clue which is which, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1484: [BCH decoding] There is a false alarm but perhaps this PDU, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1484: [BCH decoding] There is a false alarm but perhaps this PDU, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1490: [BCH decoding] hwSfn=%d, compensatedCurrentSfn=%d, isDecodedBchBasicCheckPassed=%d, readyToSendSfnToCellSfnServer=%d, needToWriteSfnOnHw=%d 
Line 1490: [BCH decoding] hwSfn=%d, compensatedCurrentSfn=%d, isDecodedBchBasicCheckPassed=%d, readyToSendSfnToCellSfnServer=%d, needToWriteSfnOnHw=%d 
Line 1494: [BCH decoding] numOfCrcCheckPasses=%d, numOfConsecutiveCrcFailures=%d, bch10msModeAllowed=%d, hwSfnLocked=%d, bchFalseAlarmDetected=%d
Line 1494: [BCH decoding] numOfCrcCheckPasses=%d, numOfConsecutiveCrcFailures=%d, bch10msModeAllowed=%d, hwSfnLocked=%d, bchFalseAlarmDetected=%d
Line 1526: [BCH decoding] hwSfn=%d, compensatedCurrentSfn=%d, isDecodedBchBasicCheckPassed=%d, readyToSendSfnToCellSfnServer=%d, needToWriteSfnOnHw=%d 
Line 1526: [BCH decoding] hwSfn=%d, compensatedCurrentSfn=%d, isDecodedBchBasicCheckPassed=%d, readyToSendSfnToCellSfnServer=%d, needToWriteSfnOnHw=%d 
Line 1529: [BCH decoding] numOfCrcCheckPasses=%d, numOfConsecutiveCrcFailures=%d, bch10msModeAllowed=%d, hwSfnLocked=%d, bchFalseAlarmDetected=%d
Line 1529: [BCH decoding] numOfCrcCheckPasses=%d, numOfConsecutiveCrcFailures=%d, bch10msModeAllowed=%d, hwSfnLocked=%d, bchFalseAlarmDetected=%d
Line 2070: [BCH decoding] There is a false alarm but have no clue which is which, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 2070: [BCH decoding] There is a false alarm but have no clue which is which, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 2074: SFN Passing for the Segment Received Condition : %d
Line 2074: SFN Passing for the Segment Received Condition : %d
Line 2092: [BCH decoding] There is a false alarm but perhaps this PDU, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 2092: [BCH decoding] There is a false alarm but perhaps this PDU, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 2127: [BCH decoding] 10 ms mode just restarted
Line 2127: [BCH decoding] 10 ms mode just restarted
Line 1918: SendDataToMac failure: TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d	Ct_Num %02d, CrcCheckRes %d
Line 1918: SendDataToMac failure: TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d	Ct_Num %02d, CrcCheckRes %d
Line 1938: No memory handle for DCH data
Line 1938: No memory handle for DCH data
Line 1951: Discard BCH data:  TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d  Ct_Num %02d, CrcCheckRes %d
Line 1951: Discard BCH data:  TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d  Ct_Num %02d, CrcCheckRes %d
Line 1969: SendDataToMac failure: TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d  Ct_Num %02d, CrcCheckRes %d
Line 1969: SendDataToMac failure: TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d  Ct_Num %02d, CrcCheckRes %d
Line 1628: UmacMsg is NULL in uphy_CDlUserPlaneMiniRouter_SendDataToMac
Line 1628: UmacMsg is NULL in uphy_CDlUserPlaneMiniRouter_SendDataToMac
Line 1704: Passing to MAC: stackId %d, Trch Id %02d, CFN %04d, Type %02d, nTrBlks %02d, SizeOfTBs %04d, Ct_Num %02d
Line 1704: Passing to MAC: stackId %d, Trch Id %02d, CFN %04d, Type %02d, nTrBlks %02d, SizeOfTBs %04d, Ct_Num %02d
Line 1736: Unable to send Uphy Data Ind
Line 1736: Unable to send Uphy Data Ind
Line 1754: array index out of bounds.nTrChs=%d
Line 1754: array index out of bounds.nTrChs=%d
Line 1840: uphy_CDlUserPlaneMiniRouter_SendDataToMac: UmacMsg=0x%x, destTrChInfoPtr=0x%x,	Data=0x%x, trChId=%d, numTrBlks=%d, tbSize=%d
Line 1840: uphy_CDlUserPlaneMiniRouter_SendDataToMac: UmacMsg=0x%x, destTrChInfoPtr=0x%x,	Data=0x%x, trChId=%d, numTrBlks=%d, tbSize=%d
Line 1841: uphy_CDlUserPlaneMiniRouter_SendDataToMac: sfn=%d, referenceRlSfn=%d, cfn=%d, slot=%d, chipOffset=%d
Line 1841: uphy_CDlUserPlaneMiniRouter_SendDataToMac: sfn=%d, referenceRlSfn=%d, cfn=%d, slot=%d, chipOffset=%d
Line 1876: uphy_CDlUserPlaneMiniRouter_SendDataToMac: destTrChInfoPtr=0x%x,  Data=0x%x,  trChId=%d, numTrBlks=%d, tbSize=%d,  crcSize=%d
Line 1876: uphy_CDlUserPlaneMiniRouter_SendDataToMac: destTrChInfoPtr=0x%x,  Data=0x%x,  trChId=%d, numTrBlks=%d, tbSize=%d,  crcSize=%d
Line 2180: [ 0]0x%x. [ 1]0x%x. [ 2]0x%x. [ 3]0x%x. [ 4]0x%x. [ 5]0x%x. [ 6]0x%x.
Line 2185: [ 7]0x%x. [ 8]0x%x. [ 9]0x%x. [10]0x%x. [11]0x%x. [12]0x%x. [13]0x%x.
Line 2191: [14]0x%x. [15]0x%x. [16]0x%x. [17]0x%x. [18]0x%x. [19]0x%x. [20]0x%x.
Line 2197: [21]0x%x. [22]0x%x. [23]0x%x. [24]0x%x. [25]0x%x. [26]0x%x. [27]0x%x.
Line 2203: [28]0x%x. [29]0x%x. [30]0x%x. [31]0x%x.
Line 1795: ######## Discard all zero data
Line 1795: ######## Discard all zero data
Line 2233: Asn_tti
Line 2233: Asn_tti
