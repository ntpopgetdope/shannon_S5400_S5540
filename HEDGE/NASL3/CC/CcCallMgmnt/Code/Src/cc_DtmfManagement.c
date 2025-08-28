Line 63: Initiating DTMF Sequence..in cc_DecodeCcStartDtmfReqMsg
Line 80: TransactionId -> %d
Line 122: Waiting for STOP_DTMF from AP
Line 142: LastDtmfIndex = %d, CurrentDtmfIndex = %d
Line 149: cc_IncLastDtmfIndex = %d, Key = %d
Line 163: LastDtmfIndex = %d, has crossed the DTMF index range
Line 185: DTMF can not be sent in this CC State !...  in cc_DecodeCcStartDtmfReqMsg
Line 206: CallSession %d is NOT Active,  in cc_DecodeCcStartDtmfReqMsg
Line 214: DTMF can not be sent in this CC State (%d) !...  in cc_DecodeCcStartDtmfReqMsg
Line 231: Wrong Key pad entered in cc_DecodeCcStartDtmfReqMsg
Line 237: No Session Found to contain the given TI in cc_DecodeCcStartDtmfReqMsg, Message Ignored.
Line 242: Rejecting User's Req in cc_DecodeCcStartDtmfReqMsg ! RAT Change in progress !!
Line 295: Displaying Start Dtmf Req Message Contents: %s
Line 304: Unable to Allocate Memory to Send %s Message in cc_SendStartDtmfReqMsg
Line 332: Entering cc_DecodeStartDtmfAckIndMsg
Line 340: TransactionId -> %d
Line 369: KEY PAD Type Dtmf -> Send Rsp to GAPI Immediately in cc_DecodeStartDtmfAckIndMsg
Line 375: Duration Type Dtmf -> Do NOT Send Rsp to GAPI in cc_DecodeStartDtmfAckIndMsg
Line 382: Stop Req Has Already Arrived -> Send Stop Dtmf Req to Network in cc_DecodeStartDtmfAckIndMsg
Line 392: Stop Req Has Not Arrived Yet (or TImer Not Run Out Yet) -> Wait Longer in cc_DecodeStartDtmfAckIndMsg
Line 405: Msg received in Incorrect DTMF State  in cc_DecodeStartDtmfAckIndMsg
Line 432: CallSession %d is NOT Active,  in cc_DecodeStartDtmfAckIndMsg
Line 438: No Session Found to contain the given TI in cc_DecodeStartDtmfAckIndMsg, Message Ignored.
Line 468: Entering cc_DecodeStartDtmfRejIndMsg
Line 476: TransactionId -> %d
Line 532: CallSession %d is NOT Active,  in cc_DecodeStartDtmfRejIndMsg
Line 538: No Session Found to contain the given TI in cc_DecodeStartDtmfRejIndMsg, Message Ignored.
Line 564: Initiating DTMF Stop Procedure in cc_DecodeCcStopDtmfReqMsg
Line 569: TransactionId -> %d
Line 609: There is no START DTMF initiated earlier. Rejecting DTMF Stop Req arrived in wrong DTMF State
Line 624: DTMF Stop Req arrived in wrong DTMF State, Sopt Req buffered in cc_DecodeCcStopDtmfReqMsg
Line 645: Rejecting User's Req in cc_DecodeCcStopDtmfReqMsg ! Incorrect CC State (%d)
Line 663: Incorrect CC State, Msg Ignored
Line 674: CallSession %d is NOT Active,  in cc_DecodeCcStopDtmfReqMsg
Line 680: No Session Found to contain the given TI in cc_DecodeCcStopDtmfReqMsg, Message Ignored.
Line 685: Rejecting User's Req in cc_DecodeCcStopDtmfReqMsg ! RAT Change in progress !!
Line 732: Entering cc_DecodeStopDtmfAckIndMsg
Line 740: TransactionId -> %d
Line 758: CurrentDtmfIndex -> %d in cc_DecodeStopDtmfAckIndMsg
Line 779: LastDtmfIndex    -> %d in cc_DecodeStopDtmfAckIndMsg
Line 783: KEY PAD Type Dtmf -> Send Rsp to GAPI Immediately in cc_DecodeStopDtmfAckIndMsg
Line 789: Checking For More Duration Type Dtmfs in cc_DecodeStopDtmfAckIndMsg
Line 802:  More to Send, Start Sending Value in DTMF Index (%d)..
Line 843: No More DTMF Values to Send..
Line 855: Msg received in Incorrect DTMF State. Deleting All DTMF Datad
Line 880: CallSession %d is NOT Active,  in cc_DecodeStopDtmfAckIndMsg
Line 888: CallSession %d is NOT Active,  in cc_DecodeStopDtmfAckIndMsg
Line 894: No Session Found to contain the given TI in cc_DecodeStopDtmfAckIndMsg, Message Ignored.
Line 925: Unable to Allocate Memory to Send %s Message in cc_SendStopDtmfReqMsg
Line 972: Displaying Cc Start Dtmf RspMessage Contents: %s
Line 976: Result -> %d
Line 979: DataPresent  -> %s
Line 992: Unable to Allocate Memory to Send %s Message in cc_SendCcStartDtmfRspMsg
Line 1040: Displaying Cc Stop dtmf Rsp Message Contents: %s
Line 1044: Result -> %d
Line 1047: DataPresent  -> %s
Line 1060: Unable to Allocate Memory to Send %s Message in cc_SendCcStopDtmfRspMsg
Line 1090: Entering cc_DecodeCcDtmfAndDurationReqMsg
Line 1099: TransactionId -> %d
Line 1123: CurrentDtmfIndex -> %d in cc_DecodeCcDtmfAndDurationReqMsg
Line 1125: LastDtmfIndex    -> %d in cc_DecodeCcDtmfAndDurationReqMsg
Line 1147: CurrentDtmfIndex == LastDtmfIndex -> Set Next DTMF Duration in cc_DecodeCcDtmfAndDurationReqMsg
Line 1160: CurrentDtmfIndex != LastDtmfIndex -> Get Next DTMF Duration in cc_DecodeCcDtmfAndDurationReqMsg
Line 1192: Saving This Duration For Later Use in cc_DecodeCcDtmfAndDurationReqMsg
Line 1206: Insufficient Memory -> Can NOT Saving This Duration For Later Use in cc_DecodeCcDtmfAndDurationReqMsg
Line 1225: DTMF can not be sent in this CC State (%s) !...  in cc_DecodeCcDtmfAndDurationReqMsg
Line 1249: DTMF can not be sent in this CC State (%s) !...  in cc_DecodeCcDtmfAndDurationReqMsg
Line 1265: Wrong Key pad entered in cc_DecodeCcDtmfAndDurationReqMsg
Line 1271: No Session Found to contain the given TI in cc_DecodeCcDtmfAndDurationReqMsg, Message Ignored.
Line 1276: Rejecting User's Req in cc_DecodeCcDtmfAndDurationReqMsg ! RAT Change in progress !!
Line 1338: Displaying Send DTMF and Duration Rsp Message Contents: %s
Line 1342: Result -> %d
Line 1344: DataPresent  -> %s
Line 1357: Unable to Allocate Memory to Send %s Message in cc_SendDtmfAndDurationRspMsg
Line 1419: CC DTMF Buffer is Full ! No More can be added...in cc_CheckDtmfBufferStatusForAddition.
Line 1462: NORMAL Initialisation of <DTMF Management>
Line 1474: GSM to UMTS Initialisation of <DTMF Management>
Line 1480: UMTS to GSM Initialisation of <DTMF Management>
Line 1488: Unknown Initialisation Type (%d) in cc_InitialiseDtmfManagement
