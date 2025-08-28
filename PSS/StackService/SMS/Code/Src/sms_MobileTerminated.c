Line 140: Unexpected Domain: %d
Line 145: SMS Data Length -> %d SMS Data  -> ...
Line 177: IMS SMS CROSS OVER HANDLING: %d
Line 190: Session No: %d Current State: %d
Line 201: Another MT session on-going , Clear Previous Session[%d]!
Line 207: Send SERV RSP to clear NS, SIT state for CDMA SMSoIMS
Line 217: Another MT session on-going but Not Wating RP-ACK, ignore this(Ti=%d)!
Line 224: Another MT session on-going, ignore this(Ti=%d)!
Line 257: New MT is not acceptable, send CP-Error
Line 264: RP ACK was already retried during HO but network doesn't have context,Clear session
Line 279: Session No: %d Current State: %d
Line 296: No operation required for the current state
Line 434: Transaction Id -> %x
Line 446: SessionNumber -> %x
Line 469: Rejecting Network's MT Req in sms_DecodeSmsDeliverMsg ! No more resource Available !!
Line 475: Sent CP Error and Rejecting MT Req in sms_DecodeSmsDeliverMsg !TI requested, Already Used !!
Line 498: Domain_State: %d
Line 510: MT SMS with Same Ti (%d) received 5 times, so clearing ongoing session
Line 517: Ti  Already is assigned to existing session, so ignoring the received MT SMS
Line 563: Transaction Id -> %x
Line 574: Received Ti is Valid
Line 584: No Session Avalilable !!!
Line 589: Seesion is invalid or Ti not avalilable !!!
Line 631: SmsMtInd.smsFlag %d
Line 633: SmsMtInd.verStat %d
Line 651: Displaying Message Contents: %s
Line 653: SMS Data Length -> %d, SMS Data  -> ...
Line 687: Transaction Id -> %x
Line 701: Rejecting GAPI's MO Req in sms_DecodeSmsMtRspMsg ! RAT Change in progress !!
Line 721: GAPI Processed SMS Message Successfully ? -> %s, Cause:%d
Line 874: Msg Received in Wrong State in sms_DecodeSmsMtRspMsg
Line 898: Displaying Message Contents: %s, Call Type -> MM_SMS_REQ
Line 899: TI-> %d
Line 945: 
MT Rsp Pointer NULL: Sending Error for Tid = %d 
Line 997: Destination Domain->%d
Line 1038: Radio Priority -> %02d
Line 1088: 
Unable To Send %s in sms_SendRpAck
Line 1116: pSmsNsMtRsp->TpduLen:%d, Received: Delivery Report
Line 1137: Received: Null Pointer PointerTo, RP - ACK not sent
Line 1145: Displaying Message Contents: %s, CPLen -> %02d RPMT  -> %02d RPMR  -> %02d
Line 1209: MT Rsp Pointer NULL: Sending Error for Tid = %d 
Line 1231: Destination Domain->%d
Line 1343: pSmsNsMtRsp->TpduLen = %d, Received: Delivery Report
Line 1367: Received: Null Pointer PointerTo
Line 1368: RP - Err not sent
Line 1376: CPLen    -> %02d RPMT     -> %02d RPMR     -> %02d RPCause   -> %02d
Line 1383: Radio Priority -> %02d
Line 1485: Received Cp Data which Counts as a Cp Ack according to [24.011]-5.4 
Line 1621: Radio Priority -> %02d
Line 1681: Exception: Unknown State: %d. Don't send RP ERROR
Line 1696: RP - Err not sent
Line 1701: RP ERROR: CPLen=%02d, RPMT=%02d, RPMR=%02d, Cause=%02d
Line 1817: 
Invalid DestMsgPr
Line 1831: Received: Null Pointer PointerTo
Line 1836: CPLen->%02d RPMT->%02d RPMR->%02d RPCauL->%02d Cause->%02d
Line 1898: Destination Domain->%d
Line 2001: Received: Null Pointer PointerTo
Line 2002: RP - Err not sent
Line 2007: RP ERROR: CPLen    -> %02d RPMT     -> %02d RPMR     -> %02d RPCause   -> %02d
Line 2033: Domain_State: %d
Line 2039: Another MT session on-going, ignore this(Ti=%d)!
Line 2045: Ti  Already is assigned to existing session, so ignoring the received MT SMS
Line 2051: New MT is not acceptable, send Error to IMS
Line 2057: Transaction Id -> %x
Line 2067: SessionNumber -> %x
Line 2082: Rejecting Network's MT Req in sms_DecodeImsSmsCdmaDataReq ! No more resource Available !!
Line 2087: Sent Error and Rejecting MT Req in sms_DecodeImsSmsCdmaDataReq !TI requested, Already Used !!
Line 2103: %s
Line 2132: Mem Alloc Failure
Line 2156: Displaying Message Contents: %s
Line 2157: Ti -> %d
Line 2158: SMS Data Length -> %d
Line 2184: Transaction Id -> %x
Line 2188: Rejecting GAPI's MO Req in sms_DecodeCdmaSmsMtRspMsg ! Ti is not match !!
Line 2193: Rejecting GAPI's MO Req in sms_DecodeCdmaSmsMtRspMsg ! RAT Change in progress !!
Line 2198: MtRspErrorclass -> %d
Line 2199: MtRspcausecode -> %d
Line 2209: CDMA SMS MT is completed without BRO
Line 2211: MtRspErrorclass is not 0. Sent Nack to IMS 
Line 2215: MtRspErrorclass is  0. Sent Ack to IMS 
Line 2239: sms_DecodeSmsImsCdmaDataRsp ! Ti doesnot match !!
Line 2241: CDMA SMS MT is completed with BRO
Line 2270: sms_SendSmsImsCdmaDataReq ! Ti does not match !!
Line 2324: Displaying Message Contents: %s
Line 2325: SMS Data Length -> %d, SMS Data  -> ...
