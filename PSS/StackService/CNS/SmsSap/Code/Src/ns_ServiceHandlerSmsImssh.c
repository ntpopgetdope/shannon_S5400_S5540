Line 60: In ns_sendSmsImsSupport, Reg Status:%d, Feature Support:%d
Line 63: Error: Null Pointer
Line 68: Ims support = %d
Line 102: CDMA MT Msg : SMS_POINT_TO_POINT
Line 106: CDMA MT Msg : Not SMS_POINT_TO_POINT
Line 113: paramId : %d, ParamLength :%d 

Line 118: TELESERVICE_IDENTIFIER length is wrong

Line 128: SERVICE_CATEGORY length is wrong

Line 143: Error: Null Pointer
Line 184: Error: Null Pointer
Line 207: BEARER_REPLY_OPTION length is wrong

Line 216: pBDPtr length is 0

Line 222: Displaying CdmaSmsRecInd->Bearerdata in NS. CdmaSmsRecInd->Bearerdata: 
Line 228: Wrong ParaId

Line 324: BEARER_REPLY_OPTION length is wrong
Line 348: Unpacking CDMA Msg
Line 349: CdmaSmsDataLen :: %d
Line 350: CdmaSmsDataPtr ::: 
Line 353: msg type is %d
Line 370: paramId : %d, ParamLength :%d
Line 371: offset : %d, next_offset :%d
Line 399: TELESERVICE_IDENTIFIER length is wrong
Line 404: CdmaSmsData->transport_id_mask : [%d]
Line 406: teleservice ID : [%d]
Line 413: SERVICE_CATEGORY length is wrong
Line 418: CdmaSmsData->transport_id_mask : [%d]
Line 420: category : [%d]
Line 435: BEARER_REPLY_OPTION length is wrong
Line 440: CdmaSmsData->transport_id_mask : [%d]
Line 444: TL ACK Requested, sequence num : [%d]
Line 451: CAUSE_CODES length is wrong
Line 456: CdmaSmsData->transport_id_mask : [%d]
Line 467: Reply Seq : [%d], error class : [%d], cause code : [%d]
Line 473: CdmaSmsData->transport_id_mask : [%d]
Line 476: smsData->BearerdataLnegth = %d
Line 477: smsData->Bearerdata
Line 480: Error. Invalid bearer data
Line 516: CdmaSmsData->transport_id_mask : [%d]
Line 521: CdmaSmsData->transport_id_mask : [%d]
Line 543: Invalid address number.. number is %d
Line 548: ORIGINATING_ADDRESS
Line 549: digit mode is %d, num mode is %d,num type is %d, num plan is %d
Line 550: num field is %d, digit_size is %d
Line 557: ADDRESS ::  
Line 569: CdmaSmsData->transport_id_mask : [%d]
Line 574: CdmaSmsData->transport_id_mask : [%d]
Line 583: Invalid sub address number.. number is %d
Line 591: Sub ADDRESS :: 
Line 629: Msg type : [%d], Msg ID : [%d]
Line 656: User Data, Msg Encoding : [%d]]
Line 661: Msg Type : [%d]
Line 677: USER_DATA Num Fields : [%d] and Digit_Size : [%d]
Line 723:  User Data :: 
Line 757: User Response Code : [%d]
Line 784: MESSAGE_CENTER_TIME_STAMP
Line 795: Error. Invalid Time
Line 824: VALIDITY_PERIOD_ABSOLUTE
Line 835: Error. Invalid Time
Line 869: VALIDITY_PERIOD_RELATIVE : [%d]
Line 895: DEFERRED_DELIVERY_TIME_ABSOLUTE
Line 939: DD_TIME_RELATIVE : [%d]
Line 969: PRIORITY_INDICATOR : [%d]
Line 1000: PRIVACY_INDICATOR : [%d]
Line 1032: REPLY_OPTION
Line 1062: NUMBER_OF_MESSAGES : [%d%d]
Line 1092: ALERT_ON_MESSAGE_DELIVERY : [%d]
Line 1121: LANGUAGE_INDICATOR
Line 1151: CALL_BACK_NUMBER Digit Mode : [%d]
Line 1156: Num Type : [%d]
Line 1158: Num Plan : [%d]
Line 1166: Num Fields : [%d], Digit_Size : [%d]
Line 1171: Error. Invalid address number : [%d]
Line 1174: CALL_BACK_NUMBER : [
Line 1181:  %s
Line 1183: CALL_BACK_NUMBER : ]
Line 1220: DISPLAY_MODE : [%d]
Line 1246: ns_DecodeCdmaBearerData
Line 1247: CdmaBearerDataLen = %d
Line 1248: CdmaBearerDataPtr
Line 1258: subparam_id : [%d], subparam_len : [%d], offset : [%d], next_offset  : [%d]
Line 1365: Error. Invalid Bearer SubParameter ID : [%d]
Line 1397: Error: Null Pointer
Line 1400: [NS_CDMASMS_SEND_REQ] MessageType=%d, TeleserviceId=%d, ServiceCategoryt=%d, TpduLength=%d, bearer_data.MessageId.hMessageId=%d, 
Line 1417: TID is out of range (%d)
Line 1427: TID=%d, Previous info was not cleared 
Line 1436: pGetMsgRef->bearer_data.MessageId.hMessageId(%d)
Line 1483:  Failed to allocate TID resources: result %d
Line 1491: Build SMS_MO_REQ Error!
Line 1576: Error: Null Pointer
Line 1579: [CDMA_SMS_MT_IND] Ti %d, DataLength %d
Line 1585: Error: Null Pointer
Line 1619: Error: Null Pointer
Line 1645: [NS_CDMA_SMS_REC_RSP] Received
Line 1660: Error: Null Pointer
Line 1663: [SMS_SAP] CDMA NS_CDMA_SMS_REC_RSP: (Ti=%d),(errorclass=%d),(causecode=%d)
Line 1688: [SMS_SAP] CDMA SMS_MT_IND: SId=%d (Ti=%d)
Line 1736: ns_SendNsCdmaSmsFailInd
Line 1739: Error: Null Pointer
Line 1784: ns_Get4BitBCD : %d
Line 1866: Inavalid range of length
Line 1926: Inavalid range of length
Line 1949: Error: Null Pointer
Line 1528: Error: Null Pointer
Line 1543:  SMS_MO_REQ: smsFlag = %d
Line 1547: SMS MO REQ[TPDA]: 
Line 1550: SMS MO REQ[TPDU]: 
