Line 404: messageListArray[i]=0
Line 404: messageListArray[i]=0
Line 458: Instance created for stackId %d
Line 458: Instance created for stackId %d
Line 1554: S0 Set HHO mode as %d
Line 1554: S0 Set HHO mode as %d
Line 1582: S0  UE did not camp to any frequency - ?DCH released
Line 1582: S0  UE did not camp to any frequency - ?DCH released
Line 1590: S0  cannot found psc for rl %d
Line 1590: S0  cannot found psc for rl %d
Line 1611: S0  txTimingCommand uhal command exec failed: Err Code %d Add Err Code %d
Line 1611: S0  txTimingCommand uhal command exec failed: Err Code %d Add Err Code %d
Line 1627: S0  FingerInfoCmd failed
Line 1627: S0  FingerInfoCmd failed
Line 1644: S0  Invalid finger position (-) is read
Line 1644: S0  Invalid finger position (-) is read
Line 1661: S0  no multipath information [%d %d]
Line 1661: S0  no multipath information [%d %d]
Line 1668: S0  no cell information [%d %d]
Line 1668: S0  no cell information [%d %d]
Line 1701: S0  [TM ADJ] Boundary condition 4: targetChipCnt=%d chs_tm_chip=%d chCfn=%d
Line 1701: S0  [TM ADJ] Boundary condition 4: targetChipCnt=%d chs_tm_chip=%d chCfn=%d
Line 1712: S0 CFN-SFN DIFF(%d):chs_tm_chip(%d) txTiming(%d) targetCpichChips(%d) cfn(%d)	targetSfn(%d) targetchipCnt(%d)
Line 1712: S0 CFN-SFN DIFF(%d):chs_tm_chip(%d) txTiming(%d) targetCpichChips(%d) cfn(%d)	targetSfn(%d) targetchipCnt(%d)
Line 1735: S0 [OFF Adjust] OFF(before %d, after %d), tm %d, phyChOffset %d
Line 1735: S0 [OFF Adjust] OFF(before %d, after %d), tm %d, phyChOffset %d
Line 1760: S0  cannot find off for [%d %d]
Line 1760: S0  cannot find off for [%d %d]
Line 1769: S0  cannot find old off for [%d %d]
Line 1769: S0  cannot find old off for [%d %d]
Line 1788: S0 CFN-SFN DIFF(%d): off(%d)
Line 1788: S0 CFN-SFN DIFF(%d): off(%d)
Line 1793: S0  NO dedicated mode config msg !!!
Line 1793: S0  NO dedicated mode config msg !!!
Line 3349: S0  Unexpected msg queued
Line 3349: S0  Unexpected msg queued
Line 3371: S0  BCH Release received from URRC, cancel restoring BCH : storedBchReleasePendToken 0x%x
Line 3371: S0  BCH Release received from URRC, cancel restoring BCH : storedBchReleasePendToken 0x%x
Line 4144: uphy_CCellSfnServer_SendReleaseAllCnfMessage: Send ReleaseAll Cnf handling for %d
Line 4144: uphy_CCellSfnServer_SendReleaseAllCnfMessage: Send ReleaseAll Cnf handling for %d
Line 4155: S0  cnfMsg == NULL pointer
Line 4155: S0  cnfMsg == NULL pointer
Line 4170: S0  Unable to send Sfn ReleaseAll Req
Line 4170: S0  Unable to send Sfn ReleaseAll Req
Line 4172: S0 Send ReleaseAll Cnf Message
Line 4172: S0 Send ReleaseAll Cnf Message
Line 4176: Do noting
Line 4176: Do noting
Line 4182: S0 Request Resubmit advanceCellSynchroRequests
Line 4182: S0 Request Resubmit advanceCellSynchroRequests
Line 3415: S0  uphy_CCellSfnServer_sfnReadWait_Entry
Line 3415: S0  uphy_CCellSfnServer_sfnReadWait_Entry
Line 3544: S0  uphy_CCellSfnServer_sfnReadWait_Exit
Line 3544: S0  uphy_CCellSfnServer_sfnReadWait_Exit
Line 632: S0  uphy_CCellSfnServer_init_processEventFn : event=0
Line 632: S0  uphy_CCellSfnServer_init_processEventFn : event=0
Line 651: CellSfnServer[%d,%d] init processEventFn: eventId %d isDeadline %d absDeadline %d boundaryRsn %d
Line 651: CellSfnServer[%d,%d] init processEventFn: eventId %d isDeadline %d absDeadline %d boundaryRsn %d
Line 673: S0  Rl=%d exist but refCellInformation=0
Line 673: S0  Rl=%d exist but refCellInformation=0
Line 714: S0 CellSfnServer[%d,%d] begins servicing request at CFN=%d Rl %d already exists . Mpdb thinks activeSet RL pScr Code %d which is using isActiveRl %d phychStr %d
Line 714: S0 CellSfnServer[%d,%d] begins servicing request at CFN=%d Rl %d already exists . Mpdb thinks activeSet RL pScr Code %d which is using isActiveRl %d phychStr %d
Line 727: S0 CellSfnServer[%d,%d] begins servicing request at CFN %d Rl doesnt already exist - no ref cell in mpdb
Line 727: S0 CellSfnServer[%d,%d] begins servicing request at CFN %d Rl doesnt already exist - no ref cell in mpdb
Line 738: S0 CellSfnServer[%d,%d] begins servicing request at CFN %d Rl doesnt already exist - ref cell in mpdb uarfcn %d pSrcCode %d
Line 738: S0 CellSfnServer[%d,%d] begins servicing request at CFN %d Rl doesnt already exist - ref cell in mpdb uarfcn %d pSrcCode %d
Line 747: S0  Invalid event Timeout in init state!
Line 747: S0  Invalid event Timeout in init state!
Line 759: S0  BchReleaseDone received in Init state!
Line 759: S0  BchReleaseDone received in Init state!
Line 765: S0  Invalid event! has there been a ReleaseAll ?
Line 765: S0  Invalid event! has there been a ReleaseAll ?
Line 777: S0  EUphyCellSFNServerEventId_BchReleaseDone in Init state 								- must be BCHReleaseCnf of the previous message - timeout happened for previous configuration in BCHConfigurationRequested state - just swallow it 								: transactionId=%d cellSFNServer_ptr->bchReleaseRequestTransactId=%d
Line 777: S0  EUphyCellSFNServerEventId_BchReleaseDone in Init state 								- must be BCHReleaseCnf of the previous message - timeout happened for previous configuration in BCHConfigurationRequested state - just swallow it 								: transactionId=%d cellSFNServer_ptr->bchReleaseRequestTransactId=%d
Line 808: S0  Invalid event! 
Line 808: S0  Invalid event! 
Line 818: S0  Unknown Event %d in init state
Line 818: S0  Unknown Event %d in init state
Line 882: S0  Rl=%d exist but refCellInformation=0
Line 882: S0  Rl=%d exist but refCellInformation=0
Line 892: S0  Rl=%d exists but refRl==UPHY_MAPPING_DATABASE_VALUE_NOT_FOUND
Line 892: S0  Rl=%d exists but refRl==UPHY_MAPPING_DATABASE_VALUE_NOT_FOUND
Line 919: CellSfnServer[%d,%d] begins servicing request at CFN=%d Rl %d already exists . Mpdb thinks ref RL pScr Code %d which is using Rl %d phychStr %d
Line 919: CellSfnServer[%d,%d] begins servicing request at CFN=%d Rl %d already exists . Mpdb thinks ref RL pScr Code %d which is using Rl %d phychStr %d
Line 921: CellSfnServer: isReferenceRlTrackingSfn %d 
Line 921: CellSfnServer: isReferenceRlTrackingSfn %d 
Line 961: CellSfnServer: No SFN tracking for this RL : Sent Release to BCH controller to Release URRC BCH config 
Line 961: CellSfnServer: No SFN tracking for this RL : Sent Release to BCH controller to Release URRC BCH config 
Line 973: CellSfnServer: CellSFNRequest skipped due to no mapped RL at RACH controller  
Line 973: CellSfnServer: CellSFNRequest skipped due to no mapped RL at RACH controller  
Line 985: CellSfnServer[%d,%d] begins servicing request at CFN %d Rl doesnt already exist - no ref cell in mpdb
Line 985: CellSfnServer[%d,%d] begins servicing request at CFN %d Rl doesnt already exist - no ref cell in mpdb
Line 996: CellSfnServer[%d,%d] begins servicing request at CFN %d Rl doesnt already exist - ref cell in mpdb uarfcn %d pSrcCode %d
Line 996: CellSfnServer[%d,%d] begins servicing request at CFN %d Rl doesnt already exist - ref cell in mpdb uarfcn %d pSrcCode %d
Line 1002: CellSfnServer: RlMapping not found : Sent Release to BCH controller to Release URRC BCH config 
Line 1002: CellSfnServer: RlMapping not found : Sent Release to BCH controller to Release URRC BCH config 
Line 2147: S0  msgDeadlineListInfo == NULL pointer
Line 2147: S0  msgDeadlineListInfo == NULL pointer
Line 4251: S0 SfnUpdateCallback TrCH ID %d SFN %d referenceRlSfn %d crc %d
Line 4251: S0 SfnUpdateCallback TrCH ID %d SFN %d referenceRlSfn %d crc %d
Line 4439: S0  CellSFNServer cant Request Bch Release for controller %d bchid %d
Line 4439: S0  CellSFNServer cant Request Bch Release for controller %d bchid %d
Line 4450: S0  cellSFNServer bchRelease msg is NULL
Line 4450: S0  cellSFNServer bchRelease msg is NULL
Line 3613: S0 CellSfnServer[%d,%d]: Send Negative CNF msg 
Line 3613: S0 CellSfnServer[%d,%d]: Send Negative CNF msg 
Line 3632: S0  activationTimeTokenPtr is not NULL
Line 3640: S0  message == NULL pointer
Line 3640: S0  message == NULL pointer
Line 3660: S0  Unable to send SFN Nack Msg
Line 3660: S0  Unable to send SFN Nack Msg
Line 3737: S0 Unknown SFN Requester
Line 1498: S0  uphy_CCellSfnServer_bchConfigurationRequest: bchReqMsg==NULL 
Line 1498: S0  uphy_CCellSfnServer_bchConfigurationRequest: bchReqMsg==NULL 
Line 1527: S0  uphy_CCellSfnServer_bchConfigurationRequest: unexpected eventId=%d
Line 1527: S0  uphy_CCellSfnServer_bchConfigurationRequest: unexpected eventId=%d
Line 1543: S0  Unable to send Bch Req Msg
Line 1543: S0  Unable to send Bch Req Msg
Line 1819: S0 CellSfnServer isReqMsgForMsmt %d
Line 1819: S0 CellSfnServer isReqMsgForMsmt %d
Line 1824: S0 CellSfnServer setCfnInFramework %d
Line 1824: S0 CellSfnServer setCfnInFramework %d
Line 1871: S0  txTimingCommand uhal command exec failed: Err Code %d Add Err Code %d
Line 1871: S0  txTimingCommand uhal command exec failed: Err Code %d Add Err Code %d
Line 1908: S0  FingerInfoCmd failed
Line 1908: S0  FingerInfoCmd failed
Line 1925: S0  Invalid finger position (-) is read
Line 1925: S0  Invalid finger position (-) is read
Line 1942: S0  no multipath information [%d %d]
Line 1942: S0  no multipath information [%d %d]
Line 1949: S0  no cell information [%d %d]
Line 1949: S0  no cell information [%d %d]
Line 1968: S0 CFN-SFN DIFF: tm(%d)
Line 1968: S0 CFN-SFN DIFF: tm(%d)
Line 1986: S0 CFN-SFN DIFF(%d):chs_tm_chip(%d) txTiming(%d) targetCpichChips(%d) cfn(%d)  targetSfn(%d) targetchipCnt(%d)
Line 1986: S0 CFN-SFN DIFF(%d):chs_tm_chip(%d) txTiming(%d) targetCpichChips(%d) cfn(%d)  targetSfn(%d) targetchipCnt(%d)
Line 2007: S0  txTimingCommand exec failed in uphy_CCellSfnServer_GetSfnOfReferenceRlTrackingSfnSendAckAndDeleteCfgMsg
Line 2007: S0  txTimingCommand exec failed in uphy_CCellSfnServer_GetSfnOfReferenceRlTrackingSfnSendAckAndDeleteCfgMsg
Line 2040: S0 CellSfnServer[%d,%d] GetSfnOfReferenceRlTrackingSfnSendAckAndDeleteCfgMsg: Framework sfn %d cfn %d slot %d, Chipset [radio link 0] sfn %d slot %d
Line 2040: S0 CellSfnServer[%d,%d] GetSfnOfReferenceRlTrackingSfnSendAckAndDeleteCfgMsg: Framework sfn %d cfn %d slot %d, Chipset [radio link 0] sfn %d slot %d
Line 2048: S0 CellSfnServer[%d,%d] GetSfnOfReferenceRlTrackingSfnSendAckAndDeleteCfgMsg
Line 2048: S0 CellSfnServer[%d,%d] GetSfnOfReferenceRlTrackingSfnSendAckAndDeleteCfgMsg
Line 3980: S0  msg == NULL pointer
Line 3980: S0  msg == NULL pointer
Line 4006: S0  activationTimeTokenPtr is not NULL
Line 4026: S0 CellSfnServer[%d,%d]SendSfnIndMessage isReqMsgForMsmt=FALSE: targetSfn %d refSfn %d refCfn %d
Line 4026: S0 CellSfnServer[%d,%d]SendSfnIndMessage isReqMsgForMsmt=FALSE: targetSfn %d refSfn %d refCfn %d
Line 4063: S0 CellSfnServer[%d,%d] SendSfnIndMessage isReqMsgForMsmt=TRUE, CELL_DCH: isReferenceCell=%d  targetSfn %d targetCpichChips %d
Line 4063: S0 CellSfnServer[%d,%d] SendSfnIndMessage isReqMsgForMsmt=TRUE, CELL_DCH: isReferenceCell=%d  targetSfn %d targetCpichChips %d
Line 4072: :S0     cfn %d txTimingChips %d rxTxTimeDiffChips %d dpchFrameOffsetChips %d referenceSfn %d
Line 4072: :S0     cfn %d txTimingChips %d rxTxTimeDiffChips %d dpchFrameOffsetChips %d referenceSfn %d
Line 4091: S0 CellSfnServer[uarfcn=%d,primaryScrCode=%d] GetSfnAndSendReleaseRequest isReqMsgForMsmt=TRUE, CELL_DCH: isReferenceCell=%d targetSfn %d targetCpichChips %d referenceSfn: %d, refCpichChips %d
Line 4091: S0 CellSfnServer[uarfcn=%d,primaryScrCode=%d] GetSfnAndSendReleaseRequest isReqMsgForMsmt=TRUE, CELL_DCH: isReferenceCell=%d targetSfn %d targetCpichChips %d referenceSfn: %d, refCpichChips %d
Line 4105: S0  CellSfn negative ind msg: DestId=%d, TransactId=%d
Line 4105: S0  CellSfn negative ind msg: DestId=%d, TransactId=%d
Line 4111: S0  Unable to send Sfn Ind Msg
Line 4111: S0  Unable to send Sfn Ind Msg
Line 3208: S0  Release Rl - uhal_Cmd_exec
Line 3208: S0  Release Rl - uhal_Cmd_exec
Line 3219: S0  Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 3219: S0  Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 3223: S0  Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 3223: S0  Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 3229: S0  Unable to locate Rl
Line 3229: S0  Unable to locate Rl
Line 1038: S0  uphy_CCellSfnServer_bchConfigurationRequested_processEventFn : event=0
Line 1038: S0  uphy_CCellSfnServer_bchConfigurationRequested_processEventFn : event=0
Line 1042: S0 Received event %d in state bchConfigurationRequested
Line 1042: S0 Received event %d in state bchConfigurationRequested
Line 1055: S0  Timeout in bchConfigurationRequested state
Line 1055: S0  Timeout in bchConfigurationRequested state
Line 1096: S0  EUphyCellSFNServerEventId_BchReleaseDone in BchReleaseRequested state 								- must be BCHConfigCnf of the previous message - timeout happened for previous configuration in BCHConfigurationRequested state - just swallow it 								: transactionId=%d cellSFNServer_ptr->bchConfigRequestTransactId=%d
Line 1096: S0  EUphyCellSFNServerEventId_BchReleaseDone in BchReleaseRequested state 								- must be BCHConfigCnf of the previous message - timeout happened for previous configuration in BCHConfigurationRequested state - just swallow it 								: transactionId=%d cellSFNServer_ptr->bchConfigRequestTransactId=%d
Line 1104: S0  Invalid event! Has there been a releaseAll ?
Line 1104: S0  Invalid event! Has there been a releaseAll ?
Line 1115: S0  EUphyCellSFNServerEventId_BchReleaseDone in bchConfigurationRequested state 								- must be BCHReleaseCnf of the previous message - timeout happened for previous configuration in BCHConfigurationRequested state - just swallow it 								: transactionId=%d cellSFNServer_ptr->bchReleaseRequestTransactId=%d
Line 1115: S0  EUphyCellSFNServerEventId_BchReleaseDone in bchConfigurationRequested state 								- must be BCHReleaseCnf of the previous message - timeout happened for previous configuration in BCHConfigurationRequested state - just swallow it 								: transactionId=%d cellSFNServer_ptr->bchReleaseRequestTransactId=%d
Line 1128: S0  Invalid event! 
Line 1128: S0  Invalid event! 
Line 1134: S0  Unknown Event %d in bchConfigurationRequested state
Line 1134: S0  Unknown Event %d in bchConfigurationRequested state
Line 2233: S0  msg == NULL pointer
Line 2233: S0  msg == NULL pointer
Line 2250: S0  Unable to send Bch Release Msg
Line 2250: S0  Unable to send Bch Release Msg
Line 2279: S0  Removing queued msg for transceiver id=%d
Line 2279: S0  Removing queued msg for transceiver id=%d
Line 2120: S0  bchResources is Null
Line 2120: S0  bchResources is Null
Line 4223: S0 UserPlaneCallback TrCH ID %d SFN %d referenceRlSfn %d crc %d
Line 4223: S0 UserPlaneCallback TrCH ID %d SFN %d referenceRlSfn %d crc %d
Line 2190: uphy_CCellSfnServer_QueueCellSfnReleaseAll: msgDeadlineListInfo == NULL pointer
Line 2190: uphy_CCellSfnServer_QueueCellSfnReleaseAll: msgDeadlineListInfo == NULL pointer
Line 2206: uphy_CCellSfnServer_QueueCellSfnReleaseAll: Queued ReleaseAll from %d
Line 2206: uphy_CCellSfnServer_QueueCellSfnReleaseAll: Queued ReleaseAll from %d
Line 1169: S0  uphy_CCellSfnServer_bchConfigDone_processEventFn : event=0
Line 1169: S0  uphy_CCellSfnServer_bchConfigDone_processEventFn : event=0
Line 1173: S0 Received event %d in state bchConfigDone
Line 1173: S0 Received event %d in state bchConfigDone
Line 1200: S0  CellSfnServer [%d %d] - Timeout in bchConfigDone state: cellSFNServer_ptr->currentSfnReqMsg->header.TransactId=%d
Line 1200: S0  CellSfnServer [%d %d] - Timeout in bchConfigDone state: cellSFNServer_ptr->currentSfnReqMsg->header.TransactId=%d
Line 1220: S0  Invalid event! has there been a releaseAll ?
Line 1220: S0  Invalid event! has there been a releaseAll ?
Line 1243: S0  EUphyCellSFNServerEventId_BchReleaseDone in bchConfigDone state 								- must be BCHReleaseCnf of the previous message - timeout happened for previous configuration in BCHConfigurationRequested state - just swallow it 								: transactionId=%d bchReleaseRequestTransactId=%d
Line 1243: S0  EUphyCellSFNServerEventId_BchReleaseDone in bchConfigDone state 								- must be BCHReleaseCnf of the previous message - timeout happened for previous configuration in BCHConfigurationRequested state - just swallow it 								: transactionId=%d bchReleaseRequestTransactId=%d
Line 1256: S0  Invalid event! 
Line 1256: S0  Invalid event! 
Line 1262: S0  Unknown Event %d in bchConfigDone state
Line 1262: S0  Unknown Event %d in bchConfigDone state
Line 3801: S0  Rl Info rlNr=%d- uhal cmd exec
Line 3801: S0  Rl Info rlNr=%d- uhal cmd exec
Line 3829: S0 CellSfnServer[%d,%d] Cell Sfn Server receives data for rl=%d when REFERENCE RL DOES NOT EXIST: framework CFN %d, trChinfo->cfn=%d
Line 3829: S0 CellSfnServer[%d,%d] Cell Sfn Server receives data for rl=%d when REFERENCE RL DOES NOT EXIST: framework CFN %d, trChinfo->cfn=%d
Line 3852: S0 CellSfnServer[%d,%d] Cell Sfn Server rejects dud data at framework SFN %d, chipset [radio link %d] refRlChipsetSfn %d refRlChipsetSlot %d  - chipsetRefRl=%d
Line 3852: S0 CellSfnServer[%d,%d] Cell Sfn Server rejects dud data at framework SFN %d, chipset [radio link %d] refRlChipsetSfn %d refRlChipsetSlot %d  - chipsetRefRl=%d
Line 3862: S0 CellSfnServer[%d,%d] Cell Sfn Server rejects dud data at framework SFN %d, chipset [radio link %d]
Line 3862: S0 CellSfnServer[%d,%d] Cell Sfn Server rejects dud data at framework SFN %d, chipset [radio link %d]
Line 3878: S0 CellSfnServer[%d,%d] Cell Sfn Server rejects dud data at framework CFN %d, rl=%d refRl=%d trChinfo->cfn=%d
Line 3878: S0 CellSfnServer[%d,%d] Cell Sfn Server rejects dud data at framework CFN %d, rl=%d refRl=%d trChinfo->cfn=%d
Line 3890: S0 CellSfnServer[%d,%d] Cell Sfn Server rejects dud data at framework CFN %d, rl=%d trChinfo->cfn=%d
Line 3890: S0 CellSfnServer[%d,%d] Cell Sfn Server rejects dud data at framework CFN %d, rl=%d trChinfo->cfn=%d
Line 3910: S0 CellSfnServer[%d,%d] Cell Sfn Server accepts good data with sfn %d at framework SFN %d, chipset [radio link %d] sfn %d
Line 3910: S0 CellSfnServer[%d,%d] Cell Sfn Server accepts good data with sfn %d at framework SFN %d, chipset [radio link %d] sfn %d
Line 3922: S0 CellSfnServer[%d,%d] Cell Sfn Server accepts good data cont- refRlChipsetSfn %d refRlChipsetSlot %d refRl=%d trChinfo->chipOffset %d
Line 3922: S0 CellSfnServer[%d,%d] Cell Sfn Server accepts good data cont- refRlChipsetSfn %d refRlChipsetSlot %d refRl=%d trChinfo->chipOffset %d
Line 3931: S0 CellSfnServer[%d,%d] Cell Sfn Server accepts good data cont- trChinfo->chipOffset %d
Line 3931: S0 CellSfnServer[%d,%d] Cell Sfn Server accepts good data cont- trChinfo->chipOffset %d
Line 3944: S0 CellSfnServer[%d,%d] Cell Sfn Server accepts good data with sfn %d at framework CFN %d, radio link %d trChinfo->cfn %d
Line 3944: S0 CellSfnServer[%d,%d] Cell Sfn Server accepts good data with sfn %d at framework CFN %d, radio link %d trChinfo->cfn %d
Line 2418: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d] MultipathInfo=0
Line 2418: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d] MultipathInfo=0
Line 2443: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d] No multipath Info
Line 2443: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d] No multipath Info
Line 2461: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Reference Cell [%d %d] No multipath Info
Line 2461: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Reference Cell [%d %d] No multipath Info
Line 2498: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d] MultipathInfo=0
Line 2498: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d] MultipathInfo=0
Line 2523: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d] No multipath Info
Line 2523: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d] No multipath Info
Line 2543: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: RefCell not found
Line 2543: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: RefCell not found
Line 2582: S0 CellSfnServer[%d,%d]: Allowed for possibility of reference cell sfn changing by time CellSfn server processes data- sfnChange=%d, quaterChipsTOff %d, quaterChipsIntoFrame %d, sfn=%d
Line 2582: S0 CellSfnServer[%d,%d]: Allowed for possibility of reference cell sfn changing by time CellSfn server processes data- sfnChange=%d, quaterChipsTOff %d, quaterChipsIntoFrame %d, sfn=%d
Line 2592: S0 CellSfnServer[%d,%d]: Allowed for possibility of reference cell sfn changing by time CellSfn server processes data cont- chipsetSfn %d, trChInfo->sfn %d, boundaryFrameworkSfn %d, boundaryFrameworkCfn %d
Line 2592: S0 CellSfnServer[%d,%d]: Allowed for possibility of reference cell sfn changing by time CellSfn server processes data cont- chipsetSfn %d, trChInfo->sfn %d, boundaryFrameworkSfn %d, boundaryFrameworkCfn %d
Line 2622: S0 CellSfnServer[%d,%d] sets up framework Sfn and Cfn: OldSfn %d New Sfn %d NewCfn %d
Line 2622: S0 CellSfnServer[%d,%d] sets up framework Sfn and Cfn: OldSfn %d New Sfn %d NewCfn %d
Line 2632: S0 CellSfnServer[%d,%d] updates framework Sfn: OldSfn %d New Sfn %d
Line 2632: S0 CellSfnServer[%d,%d] updates framework Sfn: OldSfn %d New Sfn %d
Line 2648: S0 uphy_CCellSfnServer[%d,%d] GetSfnAndSendReleaseRequest: isReqMsgForMsmt=FALSE: referenceSfn: %d, referenceCfn: %d, targetSfn %d
Line 2648: S0 uphy_CCellSfnServer[%d,%d] GetSfnAndSendReleaseRequest: isReqMsgForMsmt=FALSE: referenceSfn: %d, referenceCfn: %d, targetSfn %d
Line 2691: S0  FingerInfoCmd failed
Line 2691: S0  FingerInfoCmd failed
Line 2708: S0  Invalid finger position (-) is read
Line 2708: S0  Invalid finger position (-) is read
Line 2726: uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d] MultipathInfo=0
Line 2726: uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d] MultipathInfo=0
Line 2734: S0  uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d]: No multipath Info
Line 2734: S0  uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d]: No multipath Info
Line 2754: S0  txTimingCommand uhal command exec failed: Err Code %d Add Err Code %d
Line 2754: S0  txTimingCommand uhal command exec failed: Err Code %d Add Err Code %d
Line 2778: S0  FingerInfoCmd failed
Line 2778: S0  FingerInfoCmd failed
Line 2792: S0  CFN-SFN DIFF rxTxTimeDiffChips %d, dpchFrameOffsetChips %d, referenceRlDpchPosition %d
Line 2792: S0  CFN-SFN DIFF rxTxTimeDiffChips %d, dpchFrameOffsetChips %d, referenceRlDpchPosition %d
Line 2808: S0 rlNr %d hwSfn %d sfn(trChinfo) %d
Line 2808: S0 rlNr %d hwSfn %d sfn(trChinfo) %d
Line 2823: S0  [TM ADJ] Boundary condition 4 : targetChipCnt=%d chs_tm_chip=%d cfn=%d
Line 2823: S0  [TM ADJ] Boundary condition 4 : targetChipCnt=%d chs_tm_chip=%d cfn=%d
Line 2834: S0 CFN-SFN DIFF(%d):chs_tm_chip(%d) txTiming(%d) targetCpichChips(%d) cfn(%d)  targetSfn(%d) targetchipCnt(%d)
Line 2834: S0 CFN-SFN DIFF(%d):chs_tm_chip(%d) txTiming(%d) targetCpichChips(%d) cfn(%d)  targetSfn(%d) targetchipCnt(%d)
Line 2871: S0 SFN-SFN DIFF:targetSfn(%d), referenceSfn(%d), chipsTOff(%d), tm(%d), targetChipCnt(%d), referenceCpichChips(%d), targetCpichChips(%d)
Line 2871: S0 SFN-SFN DIFF:targetSfn(%d), referenceSfn(%d), chipsTOff(%d), tm(%d), targetChipCnt(%d), referenceCpichChips(%d), targetCpichChips(%d)
Line 2914: S0 uphy_CCellSfnServer [%d %d] getSfnAndSendReleaseRequest FACH: for Msmt - refCellInfo->multiPathInfo=0
Line 2914: S0 uphy_CCellSfnServer [%d %d] getSfnAndSendReleaseRequest FACH: for Msmt - refCellInfo->multiPathInfo=0
Line 2923: S0 uphy_CCellSfnServer [%d %d] getSfnAndSendReleaseRequest FACH: for Msmt - refCellInfo=0
Line 2923: S0 uphy_CCellSfnServer [%d %d] getSfnAndSendReleaseRequest FACH: for Msmt - refCellInfo=0
Line 2936: S0 CellSfnServer[%d,%d] GetSfnAndSendReleaseRequest isReqMsgForMsmt=TRUE, DPCH or SCCPCH meanwhile released
Line 2936: S0 CellSfnServer[%d,%d] GetSfnAndSendReleaseRequest isReqMsgForMsmt=TRUE, DPCH or SCCPCH meanwhile released
Line 3682: S0  message == NULL pointer
Line 3682: S0  message == NULL pointer
Line 3698: S0  Unable to send Bch Release Leaving Rl Msg
Line 3698: S0  Unable to send Bch Release Leaving Rl Msg
Line 3029: countCSFNHigh refSfn %d refCfn %d valid %d countC %d countCCfn %d
Line 3029: countCSFNHigh refSfn %d refCfn %d valid %d countC %d countCCfn %d
Line 3070: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - no adjustemnt: targetCpichChips-referenceCpichChips<=UMTS_HALF_FRAME_CHIPS : cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 3070: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - no adjustemnt: targetCpichChips-referenceCpichChips<=UMTS_HALF_FRAME_CHIPS : cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 3085: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - ADJUSTMENT: targetCpichChips-referenceCpichChips>UMTS_HALF_FRAME_CHIPS: cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 3085: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - ADJUSTMENT: targetCpichChips-referenceCpichChips>UMTS_HALF_FRAME_CHIPS: cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 3097: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - no adjustemnt: targetCpichChips-referenceCpichChips>UMTS_HALF_FRAME_CHIPS: cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 3097: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - no adjustemnt: targetCpichChips-referenceCpichChips>UMTS_HALF_FRAME_CHIPS: cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 3113: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - no adjustement: referenceCpichChips-targetCpichChips>=UMTS_HALF_FRAME_CHIPS: cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 3113: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - no adjustement: referenceCpichChips-targetCpichChips>=UMTS_HALF_FRAME_CHIPS: cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 3128: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - ADJUSTMENT: referenceCpichChips-targetCpichChips<UMTS_HALF_FRAME_CHIPS: cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 3128: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - ADJUSTMENT: referenceCpichChips-targetCpichChips<UMTS_HALF_FRAME_CHIPS: cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 3140: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - no adjustemnt: referenceCpichChips-targetCpichChips<UMTS_HALF_FRAME_CHIPS: cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 3140: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - no adjustemnt: referenceCpichChips-targetCpichChips<UMTS_HALF_FRAME_CHIPS: cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 1296: S0  uphy_CCellSfnServer_bchReleaseRequested_processEventFn : event=0
Line 1296: S0  uphy_CCellSfnServer_bchReleaseRequested_processEventFn : event=0
Line 1300: S0 Received event %d in state bchReleaseRequested
Line 1300: S0 Received event %d in state bchReleaseRequested
Line 1312: S0  Timeout in bchReleaseRequested state
Line 1312: S0  Timeout in bchReleaseRequested state
Line 1337: S0  Invalid event cctrchInterrupt in BchReleaseRequested State
Line 1337: S0  Invalid event cctrchInterrupt in BchReleaseRequested State
Line 1355: S0  EUphyCellSFNServerEventId_BchReleaseDone in BchReleaseRequested state 								- must be BCHReleaseCnf of the previous message - timeout happened for previous configuration in BCHConfigurationRequested state - just swallow it 								: transactionId=%d cellSFNServer_ptr->bchReleaseRequestTransactId=%d
Line 1355: S0  EUphyCellSFNServerEventId_BchReleaseDone in BchReleaseRequested state 								- must be BCHReleaseCnf of the previous message - timeout happened for previous configuration in BCHConfigurationRequested state - just swallow it 								: transactionId=%d cellSFNServer_ptr->bchReleaseRequestTransactId=%d
Line 1369: S0  Invalid event! 
Line 1369: S0  Invalid event! 
Line 1375: S0  Unknown Event %d in bchReleaseRequested state
Line 1375: S0  Unknown Event %d in bchReleaseRequested state
Line 3265: S0 CellSfnServer not sending Indication message as releaseAll has been requested
Line 3265: S0 CellSfnServer not sending Indication message as releaseAll has been requested
Line 1410: S0  uphy_CCellSfnServer_wait_processEventFn : event=0
Line 1410: S0  uphy_CCellSfnServer_wait_processEventFn : event=0
Line 1414: S0 Received event %d in state Wait
Line 1414: S0 Received event %d in state Wait
Line 1427: S0  Timeout event! %d in wait state
Line 1427: S0  Timeout event! %d in wait state
Line 1440: S0  Invalid event! %d in wait state
Line 1440: S0  Invalid event! %d in wait state
Line 1448: S0  Invalid event! 
Line 1448: S0  Invalid event! 
Line 1454: S0  Invalid event! %d in wait state
Line 1454: S0  Invalid event! %d in wait state
Line 1475: S0  Unknown Event %d in bchConfigurationRequested state
Line 1475: S0  Unknown Event %d in bchConfigurationRequested state
Line 498: CellSFNServer Ptr is NULL
Line 498: CellSFNServer Ptr is NULL
Line 514: Received ECellSfnServerMsgId_SfnRequest from %d
Line 514: Received ECellSfnServerMsgId_SfnRequest from %d
Line 522: S0  FSM should be idle before FACH CFG (source ID %d). Reset CellSfnServer FSM
Line 522: S0  FSM should be idle before FACH CFG (source ID %d). Reset CellSfnServer FSM
Line 530: Received ECellSfnServerMsgId_SfnForMsmtRequest from %d
Line 530: Received ECellSfnServerMsgId_SfnForMsmtRequest from %d
Line 534: Received ECellSfnServerMsgId_Cancel from %d
Line 534: Received ECellSfnServerMsgId_Cancel from %d
Line 538: Received ECellSfnServerMsgId_BchConfigCnf from %d
Line 538: Received ECellSfnServerMsgId_BchConfigCnf from %d
Line 542: Received ECellSfnServerMsgId_BchReleaseCnf from %d
Line 542: Received ECellSfnServerMsgId_BchReleaseCnf from %d
Line 546: Received ECellSfnServerMsgId_ReleaseAll from %d
Line 546: Received ECellSfnServerMsgId_ReleaseAll from %d
Line 551: S0  Reset CellSfnServer FSM.
Line 551: S0  Reset CellSfnServer FSM.
Line 558: Received EUphyCellSFNServerEventId_SfnReadCompleteorBchReleased from %d
Line 558: Received EUphyCellSFNServerEventId_SfnReadCompleteorBchReleased from %d
Line 563: process - unknown msgId
Line 563: process - unknown msgId
