Line 205: sms_SendForcedCbListUpdReqMsg in %s state
Line 209: ETWS Activated along with CBS
Line 217: GAPI Requesting to Activate All or Some Cell Broadcast Messages in sms_DecodeSmsCbListUpdReqMsg
Line 253: ETWS Activated along with CBS
Line 270: ETWS Activated along with CBS
Line 305: No Active RAT during CB Activation
Line 417: All ETWS is activated
Line 426: ETWS Message received in ETWS DB
Line 437: ETWS Message Configured in Range DB
Line 458: CBS is disabled based on registry value
Line 506: ETWS Activated along with CBS
Line 514: Need to keep CBS as enabled
Line 526: ETWS Activated along with CBS
Line 550: No Active RAT during CB Deactivation
Line 668: ETWS Message Configured in CB_MIR Range DB
Line 720: DecodeSmsCbListUpdReqMsg : sms_CbOperator : %d
Line 725: SMS is not-initialised. Update internal SMS CB Database alone
Line 732: DecodeSmsCbListUpdReqMsg in %s state, ListReqType->0x%x, Cell Broadcast List Size -> %d
Line 746: Cell Broadcast List Data  -> ...
Line 762: Cell Broadcast Range List Data  -> ...
Line 800: Unknown ListReqType: %d
Line 807: Rejecting GAPI's MO Req in sms_DecodeSmsCbListUpdReqMsg ! RAT Change in progress !!
Line 830: ListPtr is freed
Line 836: RangeListPtr is freed
Line 888: CBS is enabled in non-commerial plmn
Line 908: CB disabled from AP,don't activate for EF_CBMID
Line 914: CBS is enabled in NO SIM state
Line 919: sms_CbRegVals: %d
Line 920: hfcn result: %d
Line 948: There is no pending activation request
Line 969: sms_HandleEtwsConfigReq ENTRY nReqType =%d nRatmode = %d
Line 970: sms_EtwsUserEnable =%d sms_EtwsActiveMode = %d sms_EtwsActivateAll = %d
Line 1036: sms_EtwsActiveMode = %d
Line 1045: nReqType = %d
Line 1061: sms_SendSmsCbListUpdRspMsg in state %s, SmsCbListUpdRsp.Result -> %02x
Line 1118: sms_PtrBodySnd->SmsCbListUpdRsp.CBListSize -> %d, sms_PtrBodySnd->SmsCbListUpdRsp.CBServiceState -> %d 
Line 1142: Ignore CB list trigger in Not-Init State
Line 1158: Displaying Message Contents: %s Activate Status -> %s
Line 1182: Ignore CB list trigger in Not-Init State
Line 1201: Displaying Message Contents: %s Activate Status -> %s
Line 1224: Ignore CB list trigger in Not-Init State
Line 1235: Displaying Message Contents: %s Activate Status -> %s
Line 1255: sms_DecodePhDataIndBlockMsg in %s state
Line 1258: sms_DecodePhDataIndBlockMsg LteDataActiveStatus %d, SMS_CB_DYNAMIC_DISABLR_FLAG = %d
Line 1278: LastBlock indicator = %d,BlockType = %d
Line 1327: Received FILL block, which means NULL message. Discarding CBS message
Line 1388: Incorrect Channel Number. IT should be CHN_CBCH
Line 1407: sms_DecodeGrrETWSDataIndMsg sms_EtwsActiveMode = %d GrrSmsEtwsInd = %d
Line 1416: sms_DecodeGrrETWSDataIndMsg nMsgID = %d
Line 1444: sms_DecodeGrrETWSDataIndMsg ETWS Message without Security
Line 1446: sms_DecodeGrrETWSDataIndMsg SerialNumber = %d warningType = %d
Line 1474: sms_DecodeRrcETWSDataIndMsg sms_EtwsActiveMode = %d
Line 1484: sms_DecodeRrcETWSDataIndMsg nMsgID = %d
Line 1494: UrrcSmsEtwsInd.Payload.etwsInfo.warningType
Line 1496: UrrcSmsEtwsInd.Payload.etwsInfo.slNo
Line 1501: UrrcSmsEtwsInd.etwsSecurityInfo
Line 1536: sms_DecodeRrcETWSDataIndMsg ETWS Message without Security
Line 1538: sms_DecodeRrcETWSDataIndMsg SerialNumber = %d sms_DecodeRrcETWSDataIndMsg warningType = %d
Line 1543: 
Unable To Send %s in sms_DecodeRrcETWSDataIndMsg
Line 1594: Duplicate CBS received, returning, sms_CbBlock1Type %d
Line 1602: New CBS is received..Add to DB and send CB_IND
Line 1608: Length Error,can't send CB Msg
Line 1629: Duplicate CBS received, returning
Line 1636: New CBS is received..Add to DB and send CB_IND
Line 1639: Length = %d
Line 1646: New CBS is received..Add to DB and sed CB_IND
Line 1655: Data Type -> SMS_CB_UBMC_DATA_MODE
Line 1656: MessageIdentifer -> %04d, SerialNumber -> %02d, DataCodingScheme -> %02d 
Line 1657: sms_ProcessUbmcDataIndMsg in %s state, CbStr -> 
Line 1683: Wrong RAT in sms_SendCbInd
Line 1718: sms_DecodePhDataIndSchedBlock1Msg in %s state
Line 1726: Msg Received in Wrong State in sms_DecodePhDataIndSchedBlock1Msg
Line 1769: sms_DecodePhDataIndMsgBlock1Msg in %s state
Line 1776: All zeros received in First block
Line 1818: Memory of scheduled MsgId is FREED
Line 1825: New Message ID %d Not Matched with schedule message
Line 1835: First Block Received, Correct Language and Msg Identifier
Line 1857: First Block Does Not indicate that it is Block 1, Ignoring Message
Line 1879: sms_DecodePhDataIndBlock2Msg in %s state
Line 1894: Time elapsed: %llu 
Line 1897: Receiving Block 2 in sms_DecodePhDataIndSchedBlock2Msg
Line 1917: Receiving Block 2 in Incorrect State in sms_DecodePhDataIndSchedBlock2Msg...Requesting L1 to Stop Sending Any More Data on this Channel till Next Time Round....
Line 1936: sms_DecodePhDataIndBlock3Msg in %s state
Line 1951: Time elapsed: %llu 
Line 1954: Receiving Block 3 in sms_DecodePhDataIndSchedBlock3Msg
Line 1974: Receiving Block 3 in Incorrect State in sms_DecodePhDataIndSchedBlock3Msg...Requesting L1 to Stop Sending Any More Data on this Channel till Next Time Round....
Line 1997: sms_ProcessPhDataIndLastBlockMsg in %s state
Line 2015: Time elapsed: %llu 
Line 2018: CBS reception time Elapsed. Discarding CBS msg
Line 2024: Receiving last block in sms_ProcessPhDataIndLastBlockMsg
Line 2031: PageNumber =TotalPages,Re-Seting the TotalPages
Line 2053: CB: Schedule (%d,%d)
Line 2063: Receiving Block 3 in Incorrect State in sms_ProcessPhDataIndLastBlockMsg...Requesting L1 to Stop Sending Any More Data on this Channel till Next Time Round....
Line 2083: Bad Block Received in sms_DecodePhDataIndBadBlockMsg in %s state
Line 2088: Receiving Bad Block in Incorrect State in sms_ProcessPhDataIndBadBlockMsg...Requesting L1 to Stop Sending Any More Data on this Channel till Next Time Round....
Line 2095: Receiving Bad Block in sms_ProcessPhDataIndBadBlockMsg...Requesting L1 to Stop Sending Any More Data on this Channel till Next Time Round....
Line 2119: sms_SendGsmSmsCbInd in %s state
Line 2145:  Length of Broadcast Data Sent : %d
Line 2158: Memory allocation fails for sms_PtrBodySnd->SmsLcsmAsstdata.buf_ptr 
Line 2201: - MsgRatMode -> %02x
Line 2202: - MsgCode -> %02x
Line 2203: - MsgId -> %02x
Line 2204: - GeographicalArea -> %02x
Line 2205: - UpdateNumber -> %02x
Line 2206: - DataCodingScheme -> %02x
Line 2207: - TotalPages -> %02x
Line 2208: - PageNumber -> %02x
Line 2209: - CbStrLength -> %02x
Line 2210: - Language -> %02x
Line 2211: - CbMsgType -> %02x
Line 2247: Ignore CB list trigger in Not-Init State
Line 2271: smsCbMsgLen=%d, smsCmasMsgLen=%d, smsCbmsdIdMsgLen=%d, smsCbmiIdMsgLen=%d, smsEtwsMsgLen=%d smsCbRangeMsgLen=%d
Line 2272: smsCbmiRangeMsgLen=%d, SmsAllCbMsgLen=%d
Line 2293: Either ETWS Msg Ids are configured or All CBS Msgs are activated
Line 2334: Cell Broadcast List Size -> %d
Line 2338: Cell Broadcast List Data  -> ...
Line 2371: Cell Broadcast List Size -> %d
Line 2375: Cell Broadcast List Data  -> ...
Line 2409: SMS MsgId: 0x%x is ignored
Line 2462: DecodeUbmcData41IndMsg in %s state, Cell Broadcast Address ->....
Line 2470: Data Type -> SMS_CB_UBMC_DATA_MODE
Line 2472: MessageIdentifer -> %04d
Line 2473: SerialNumber -> %02d
Line 2474: DataCodingScheme -> %02d
Line 2475: DataSize -> %d
Line 2477: CbStr -> .....
Line 2528: CB: SetB %d
Line 2539: CB: SetE %d
Line 2559: CB: SetNew %d, %d
Line 2567: CB: SetRepeatReadingAdv %d
Line 2572: CB: Skip InvalidSlot %d
Line 2586: CB: Set for ATT %d
Line 2599: CB: Skip OptionalFreeSlot %d
Line 2603: CB: Skip UndefinedFreeSlot %d
Line 2638: SendL1cPhCbChStopReq in %s state, Displaying Message Contents: %s STOP Status -> %s
Line 2644: 
Unable To Send %s in sms_SendL1cPhCbChStopReq, malloc failed
Line 2649: 
Unexpected RAT %d
Line 2677: sms_ProcessSmsCbLangReqMsg in %s state, ReqType -> %d, List Size -> %d
Line 2680: Language list  -> ...
Line 2704: sms_ProcessSmsCbLangReqMsg - Language Out of Bounds
Line 2726: Language ID (%x) not found in List sms_ProcessSmsCbLangReqMsg - Language Out of Bounds
Line 2736: Rejecting GAPI's MO Req in sms_ProcessSmsCbLangReqMsg ! RAT Change in progress !!
Line 2814: pCbsData=%x, CbsTotalPages=%d
Line 2816: MessageIdentifer=%d, SerialNumber=%d, DataCodingScheme=%d, DataSize=%d, Data addr=%d NotiType=%d
Line 2820: Unexpected RAT info.
Line 2831: Number Of Page is Zero. Making it One.
Line 2837: Unexpected Number Of Pages received.
Line 2844: Unexpected CBS Data Size received.
Line 2862: Unexpected Number Of Pages received.
Line 2869: expectedPages=%d does not match with CbsTotalPages=%d
Line 2890: Memory Allocation Failure
Line 2898: Warning Area Co-Ordinates Not Recevied
Line 2929: CbsDataSize is %d
Line 2933:  Message NOT found in List or Incorrect Language/MsgId, Ignoring Message.
Line 3009: FOR KDDI Operator in PLMN ID 440 50/51, always forward all broadcast messages to AP
Line 3020: Unknown OperatorType: %d
Line 3121: Non-requested ETWS will be discarded for UQM / JCO Operator as per Operator's requirement
Line 3136: Not found MsgId in single DB!!
Line 3149: Not found MsgId in Range DB!!
Line 3154: Find Message ID from SMS_DB_CBMI
Line 3209: DecodeSmsCbListUpdReqMsg : sms_CbOperator : %d
Line 3219: For UQM/JCO Operator, do not apply KDDI Specific CB Requirements
Line 3235: DecodeSmsCbListUpdReqMsg : sms_CbOperator : %d
Line 3239: FOR Czech in PLMN ID 230 03/99, ignore all broadcast messages
Line 3247: ApMsgType = %d, UsatMsgType = %d
Line 3299: sms_SendUmtsSmsCbInd in %s state
Line 3363: Data Type -> SMS_CB_UBMC_DATA_MODE
Line 3365: MessageIdentifer -> %04d, SerialNumber -> %02d, DataCodingScheme -> %02d, GeographicalArea -> %d
Line 3367: TotalPages -> %d, PageNumber -> %d, DataSize -> %d WACLen -> %d
Line 3368: CbStr -> .....
Line 3370: WACInfo -> .....
Line 3389: CbStr -> .....
Line 3392: CbStr -> .....
Line 3393: BroadcastAddress Size -> %d
Line 3394: DataSize -> %d
Line 3396: BroadcastAddress -> .....
Line 4464: CB: sched messageID = %d
Line 4479: CB: scheduled item stored at location = %d
Line 4578: Page Number->%d, TotalPages->%d, Message ID->%d, Coding Scheme->%d
Line 4581: SerialNumber->%d, Message Code->%d, Update Number->%d, Message Class->%d
Line 4602: Invalid BlockNumber (%02x) in sms_SaveCbMsgBlock.
Line 4703: Cell Broadcast Msg Block (%02x) -> 
Line 4711: Array index exceed in sms_DisplayCbMsgBlockTable
Line 4746: sms_CellBroadcast InitType:%d
Line 4809: Need to keep CBS as disabled
Line 4890: Unknown Initialisation Type (%x) in sms_InitialiseCellBroadcast
Line 4905: sms_CellBroadcast InitType:%d ActiveMode: %d
Line 4993: Unknown Initialisation Type (%x) in sms_InitialiseEtws
Line 5053: Geaographical Area Info -> %s
Line 5065: Network Language -> %s
Line 5213: Saved info: PLMN ID=%x:%x:%x, TAC = %x:%x, CELL ID=0x%x
Line 5214: new PLMN ID=%x:%x:%x, TAC = %x:%x, CELL ID=0x%x
Line 5215: WarningMsgLen=%d WACLen=%d
Line 5227: SMS MsgId: 0x%x is ignored
Line 5262: EMM CMAS list update Rx counter = %d
Line 5269: Ignore CB list trigger in Not-Init State
Line 5277: No change in LTE CBS Activation state. Ignore CBS list trigger
Line 5358:  MsgId not found in List or Incorrect MsgId. Ignoring Message.
Line 5363: Duplicate CBS received, returning
Line 5371: sms_DecodeEtwsPrimaryInd MsgID = 0x%04X
Line 5395: sms_DecodeEtwsPrimaryInd ETWS Message without Security
Line 5397: sms_DecodeEtwsPrimaryInd SerialNumber = %d warningType = %d
Line 5421: sms_DecodeEtwsSecondaryInd MsgID = 0x%04X
Line 5454: Saved info: PLMN ID=%x:%x:%x, TACNR = %x:%x:%x, CELL ID=0x%x
Line 5455: new PLMN ID=%x:%x:%x, TAC = %x:%x:%x, CELL ID=0x%x
Line 5469: CB SMS MsgId: 0x%x is ignored
Line 5502: Ignore CB list trigger in Not-Init State
Line 5577: Duplicate CBS received, returning
Line 5585: sms_DecodeNrmmEtwsPrimaryInd MsgID = 0x%04X
Line 5609: sms_DecodeEtwsPrimaryInd ETWS Message without Security
Line 5611: sms_DecodeEtwsPrimaryInd SerialNumber = %d warningType = %d
Line 5630: sms_DecodeNrmmEtwsSecondaryInd MsgID = 0x%04X
Line 5639: ETWS SMS MsgId: 0x%x is ignored
Line 5654: TimerId %d is expired
Line 5679: 
------------------------- SMS CB Flags ----------------------------

Line 5683: SMS_RR_ACT_MODE_FLAG -> TRUE
Line 5688: SMS_CB_ACT_ALL_FLAG -> TRUE
Line 5693: SMS_CB_ANY_LANG_FLAG -> TRUE
Line 5698: SMS_CMAS_ACT_ALL_FLAG -> TRUE
Line 5703: SMS_CB_USER_ENABLE_FLAG -> TRUE
Line 5707: SMS_ETWS_USER_ENABLE_FLAG -> TRUE
Line 5712: SMS_ETWS_ACT_ALL_FLAG -> TRUE
Line 5717: SMS_CB_DYNAMIC_ENABLE_FLAG -> TRUE
Line 5722: SMS_CB_DYNAMIC_DISABLR_FLAG -> TRUE
Line 5727: SMS_UBMC_ACTIVE_FLAG -> TRUE
Line 5732: SMS_EMM_ACT_MODE_FLAG -> TRUE
Line 5753: sms_HandleGmmCbsConfigInd: CbConfigType = %s
Line 5777: Don't send Activation/Deactivation due to the state is same with previous one.
Line 5859: Improper CbConfigType, Ignoring Msg
Line 5864: Rejecting Req from MM in sms_HandleGmmCbsConfigInd ! RAT Change in progress !!
Line 5884: Ignore sms_DecodeGmmCbsConfigInd! CbsConfigInd is disabled!!
Line 5890: Ignore sms_DecodeGmmCbsConfigInd! CbConfigType (%d)!!
Line 5894: sms_DecodeGmmCbsConfigInd: CbConfigType = %s
Line 5907: Ignore sms_DecodeGmmCbsConfigInd! EMM is in Sync Wait!!
Line 5932: Ignore sms_DecodeEmmCbsConfigInd! CbsConfigInd is disabled!!
Line 5938: Ignore sms_DecodeEmmCbsConfigInd! CbConfigType (%d)!!
Line 5943: sms_DecodeGmmCbsConfigInd: CbConfigType = %s UpdateOnlyForCurrStack=%d
Line 5947: Don't send Activation/Deactivation 	when the other stack is in SYNC QUEUE.
Line 6007: sms_PlmnTripletToString sms_MccMnc : from (0x%X 0x%X 0x%X)
Line 6008: sms_PlmnTripletToString sms_MccMnc : from (0x%X 0x%X 0x%X)
Line 6009: sms_PlmnTripletToString sms_MccMnc : from (0x%X)
Line 6022: sms_PlmnTripletToString : Invaild PLMN
Line 6047: sms_PlmnTripletToString sms_MccMnc : to (0x%X 0x%X 0x%X)
Line 6048: sms_PlmnTripletToString sms_MccMnc : to (0x%X 0x%X 0x%X)
Line 6049: sms_PlmnTripletToString sms_MccMnc : to (0x%X)
