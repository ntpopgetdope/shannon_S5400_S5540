Line 157: ------------------------- CC TASK ----------------------------
Line 185: [OSS]: Oss Init Success
Line 189: [OSS]: Oss Init Failed
Line 197: ------------------------- CC TASK ----------------------------
Line 220: pal_MsgReceiveMbx Retruned Un-Supported Class - %d
Line 228: pal_MsgReceiveMbx Retruned %d instead of PAL_SUCCESS
Line 289: cc_UpdStackId :CcCurrentStackId: %d
Line 389: cc_ParseMsg aborted - cc_PtrMsgRec is NULL
Line 399: cc_ParseMsg - Msg received before CC_INIT_REQ message
Line 428: cc_ParseMsg in Unknown Msg Received :MsgGroup = 0x%x, MsgNum = 0x%x
Line 437: cc_ParseMsg in Unknown group : 0x%x
Line 448: [CurrentStackId] %d
Line 453: cc_ParseMsg - short - cc_Header.Length = %i < cc_PtrDscMsgRec->BodySize = %i
Line 460: cc_ParseMsg - cc_PtrBodyRecBase->CcVariable.Length = %d
Line 467: %s
Line 551: cc_ParseMsg - Wrong TI Value received OR CC_INIT_REQ not received OR Wrong MsgType Received
Line 554: Displaying Received Message Contents
Line 609: cc_DetermineMmBaseMsgType - Wrong Ti Received and ignor the message
Line 623: cc_DetermineMmBaseMsgType - CC_MESSAGE_TYPE_NOT_IMPLEMENTED
Line 687: Initialising CC ...in cc_Initialise.
Line 771: CSVT_FEATURE(Enable=1/Disable=0) = %d
Line 781: [CC_INIT]CBST Defaults = { %d,%d,%d }
Line 801: BearerType %d
Line 807: Unable to Allocate Memory to Send %s Message in cc_Initialise
Line 823: Re-Initialising CC ....
Line 890: cc_DecodeCcStopReqMsg : [StackNo] %d
Line 914: Entering cc_DecodeCcSysInfoUpdateReqMsg - Received GAPI message
Line 926: AocSupportedIndication   -> %s
Line 930: AoC not supported by UE, not processing cc_SysInfoUpdateReq
Line 935: No data in cc_DecodeCcSysInfoUpdateReqMsg!!!
Line 955: cc_DecodeCcHDVoiceSettingReqMsg : HDVoiceCallSetting = %d
Line 960: cc_DecodeCcHDVoiceSettingReqMsg : INVALID HDVoiceCallSetting = %d
Line 970: MtCallBlockStatus = %d
Line 983: CC Message Count -> %d
Line 1011: Processing CC Saved Message....
Line 1053: Msg not expected in this direction:  ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1067: Storage table too short:  ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1068: When a message is received that is too short to contain a complete message type information element, that message shall be ignored,
Line 1075: Mandatory param Absent:  ERROR -> Msg %d[%d] cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1101: TLV param not expected:  ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1118: TLV Parameter out of sequence:  ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1125: IE unknown in msg:  ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1126: When a message is received that IE unknown element, that message shall be ignored,
Line 1133: cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1137: TLV parameter unknown in msg:  ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1183: Receive Error -> (CTLVOUTS | CTLVREP) in cc_DetermineErrorPrimitiveMsg
Line 1208: Unable to Save READ ALL MMCC_DATA_IND(Connect_Ind) Msg in cc_SaveConnectIndMsg, cc_PtrMsgRec NULL Or cc_PtrConnectIndCopy Non-Zero
Line 1284: Unable to Save READ ALL MM_SYNC_IND Msg in cc_SaveMmSyncIndMsg, cc_PtrMsgRec NULL Or cc_PtrMmSyncIndCopy Non-Zero
Line 1300: saved after discard....cc_SaveMmSyncIndMsg
Line 1378: Msg saved in MMCC_SRVCC_HO_CNF in cc_SaveMmSrvccHoCnfMsg
Line 1382: Unable to Save Msg MMCC_SRVCC_HO_CNF in cc_SaveMmSrvccHoCnfMsg, cc_PtrMsgRec NULL Or cc_PtrMmSrvccHoCnfCopy Non-Zero
Line 1460: Unable to Save READ ALL MMCC_DATA_IND(Facility) Msg in cc_SaveFacilityIndMsg, cc_PtrMsgRec NULL Or cc_PtrCcFacilityIndCopy Non-Zero
Line 1518: Unable to Save READ ALL MMCC_DATA_REQ(Disconnect) Msg in cc_SaveDiscReqMsg, cc_PtrMsgRec NULL Or cc_PtrDisconnectReqCopy Non-Zero
Line 1667: cc_SendNsDmEventToNS.....SessionNumber= %d, Timer=%d , Event =%d
Line 1706: Sending Message ...... 
Line 1950: CC Initialisation State -> CC_NOT_INITIALISED -> All Messages except CC_INIT_REQ will be Ignored.in cc_CheckInitialisationState. 
Line 1970: Entering cc_CheckEarlyUserConnectionStatus()
Line 1980: Early Connection Requested -> TRUE
Line 1984: This is a Voice Call -> TRUE
Line 1988: VCG has not been activated -> Begin VCG activation...
Line 2018: Early User Connection Check Aborted -> VCG has been activated
Line 2023: Early User Connection Check Aborted -> This is not a Voice Call
Line 2028: Early User Connection Check Aborted -> Early User Connection NOT requested
Line 2173: 
---------------- Displaying Message Log ---------------
Line 2184: %d. %s
Line 2194: %d. %s
Line 2270: Unable to Save READ ALL MMCC_DATA_REQ(Setup) Msg in cc_SaveSetupReqMsg, cc_PtrMsgRec NULL Or cc_PtrCcSetupReqCopy Non-Zero
Line 2303: cc_DecodeCcCallBlockSetReqMsg : Call Block Status = TRUE
Line 2308: cc_DecodeCcCallBlockSetReqMsg : Call Block Status = FALSE
Line 2343: CHINA : matched for ONESKU
Line 2349: DOCOMO : matched for ONESKU
Line 2355: CANADA : matched for ONESKU
Line 2361: CMCC : matched for ONESKU
Line 2367: INDIA : matched for ONESKU
Line 2373: ATT : matched for ONESKU
Line 2376: cc_SetOptCarrier : cc_CurrentOptCarrier(%d)
Line 2408: cc_CheckOptCarrier : Stack ID(%d) OptCarrier(0x%x)
Line 2417: cc_CheckOptCarrier : Stack ID(%d) OptCarrier(0x%x)
Line 2441: cc_CheckOptColorForONESKU : Stack ID(%d) OptColor(0x%x)
Line 2450: cc_CheckOptColorForONESKU : Stack ID(%d) OptColor(0x%x)
Line 2474: cc_API_CheckIndiaCarrier : CC_OP_INDIA
Line 2497: cc_API_CheckAttCarrier : CC_OP_ATT
Line 313: PRIVACY! MT message : SETUP
Line 320: PRIVACY! MT message : CC-ESTABLISHMENT
Line 328: PRIVACY! MT message : START DTMF ACKNOWLEDGE
Line 341: Displaying Received Message Contents
Line 349: Displaying Received Message Contents
