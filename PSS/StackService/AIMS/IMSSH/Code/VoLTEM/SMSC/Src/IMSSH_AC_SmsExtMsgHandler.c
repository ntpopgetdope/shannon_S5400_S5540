Line 255: [AC]Received METHOD_REQ from CH
Line 260: [AC] Get AppId for EMC SMS service
Line 273: [AC]Sip Body is NULL / IMS Is not Registered for SMS !!
Line 300: [AC]ERR:Fail to get message type from RP Data!!
Line 310: [AC][SMS MT] pPAssertedId is NULL!!!
Line 330: [AC][SMS MT] verStat : %d
Line 334: [AC][SMS MT]Calling Party num is not supported
Line 339: [AC][SMS MT] pAppDb is NULL!!!
Line 342: [AC][SMS MT]Step1 : RP-DATA from NW.
Line 353: [AC] Get appId for EMC SMS service
Line 364: [AC]ERR:Device has not included the +3.gpp.smsip feature tag in the SIP Register. Send 488 Error.
Line 374: [AC] AIMS_FLASH_SMS_ON_PSONLY_SUPPORT: (%d)
Line 379: [AC]ERR: SMS over PS domain is not supported on active RAT(%d). Send 415 Error.
Line 384: [AC][AIMS_FLASH_SMS_ON_PSONLY_SUPPORT] SMS over PS domain is supported on active RAT(%d).
Line 392: [AC][SMS MO]Step4 : RP-ACK from NW
Line 401: [AC][SMS MO]Step4 : RP-ERROR from NW
Line 417: [AC]ERR:Invalid RP-Data Type. Send 488 Error.
Line 426: [AC][CDMA SMS MT]Step1 : Incoming MESSAGE from NW.
Line 545: [AC]ERR:not supported content type.
Line 558: [AC]ERR:Content Type is NULL. Send 488 Error.
Line 568: [AC]ERR:Invalid MethodType[%d]. Send 488 Error.
Line 588: [AC]Received METHOD_SENT from CH
Line 617: [AC]Received METHOD_FAIL from CH
Line 677: [AC]ERR:pSmsDbEntry is NULL!
Line 811: [IMSSH_AC_CheckAndTriggerRefreshReq]
Line 960: [AC]Received METHOD_RSP from CH
Line 985: [AC]%d is handled like 200 Accept
Line 1037: [AC]ERR:pSmsDbEntry is NULL!
Line 1056: [AC]Received METHOD_CLEAR from CH
Line 1092: SMS to be send on APP [%d], 0:EMC, 1:IMS
Line 1104: [ERROR]APP ID Is not Found, Error scenario
Line 1110: [SMS MO] SMS over IMS is available
Line 1113: [ERROR]CDMA call in progress...send error!!!
Line 1127: [ERROR]IMS Is not Registered
Line 1132: Network Reg Status : [%d]
Line 1138: Incompatible Network State to proess SMS Request, Send SMS failure notification
Line 1148: [AC] AIMS_FLASH_SMS_ON_PSONLY_SUPPORT: (%d)
Line 1151: [AC]ERR: SMS over PS domain is not supported on active RAT(%d). , Send SMS failure notification
Line 1157: [AC][AIMS_FLASH_SMS_ON_PSONLY_SUPPORT] SMS over PS domain is supported on active RAT(%d).
Line 1163: [ERROR]AppDB is NULL
Line 1221: [IMSSH_AC_SMSHandleEstReqFromSMS] MoDataBarred SMS cant be sent to NW, Sending Rej, so that SMS can be retried over SMS over NAS
Line 1227: [AC][SMS MO]Step1 : EST REQ from SMS
Line 1234: [ERROR]AppDB is NULL
Line 1355: [AC][IMSSH_AC_SMSHandleDataReqFromSMS] Received pMsg is NULL
Line 1383: [AC][IMSSH_AC_SMSHandleDataReqFromSMS] isTPDApresent = %d, smsType = %d, includeGeoloc = %d
Line 1401: [AC]Received SmsType:%d
Line 1421: [AC]ERR: Received No SMS Type from SMS module !!
Line 1435: [IMSSH_AC_SMSHandleDataReqFromSMS]  ERR:Mem Allocation for pDestinationAddr is failure!!
Line 1456: [AC][IMSSH_AC_SMSHandleDataReqFromSMS] TPDAlength = %d, Ton = %d, PduLength = %d, tempLen = %d
Line 1476: [AC]ERR:Fail to get message type from CP Data!!
Line 1493: [AC]ERR:Invalid CP-DATA Length!! 

Line 1498: [AC] CpMsgType = %d
Line 1507: [AC] Get AppId for EMC SMS service
Line 1512: [AC] Get AppId for SMS service
Line 1518: [ERROR]IMS Is not Registered
Line 1538: [ERROR]IMS Is not Registered
Line 1554: [ERROR]AppDB is NULL
Line 1568: [AC] Tid = %d
Line 1583: [AC][IMSSH_AC_SMSHandleDataReqFromSMS] Memory allocation FAILED for pSmsDbEntry->pDataReq
Line 1588: [AC][IMSSH_AC_SMSHandleDataReqFromSMS] SmsDB includeGeoloc = %d
Line 1617: [AC]ERR:Fail to get message type from RP Data!!
Line 1625: [AC][SMS MO]Step2 : RP-DATA from SMS
Line 1631: [AC]Received SmsType:%d
Line 1638: [AC]ERR: INVALID SmsType:%d
Line 1650: [AC] Received Dest Address length 
Line 1658: [AC]ERR:Fail to update SmsType!!
Line 1670: [AC]ERR: Received No SMS Type from SMS module !!
Line 1713: [AC][SMS MT]Step3 : RP-ACK from SMS.
Line 1722: [AC]ERR:Fail to get RP ACK from SMS Module!!
Line 1730: [AC] RP Error from SMS
Line 1739: [AC]ERR:Fail to process RP Error from SMS Module!!
Line 1747: [AC] RP SMMA from SMS
Line 1756: [AC]ERR:Fail to process RP Error from SMS Module!!
Line 1764: [AC]ERR:Invalid RP Message type!!
Line 1780: [AC][SMS MT] 200 OK(CP Ack to RP-DATA) is sent to N/W.
Line 1784: [AC][SMS MO] Step6 : 200 OK(CP Ack to RP-ACK). SMS MO procedure is over successfully
Line 1789: [AC][SMS MO] EMC SMS for VZW: Checking for Re-Reg
Line 1799: SessionId(%d) or RcvdMethodId(%d) is NULL!!!
Line 1811: [AC][SMS MO]488 response(CP ERROR) is sent to N/W
Line 1816: SessionId(%d) or RcvdMethodId(%d) is NULL!!!
Line 1841: [AC]ERR:Fail to get TID!! 

Line 1942: [AC][CDMA SMS MT] 200 OK(Ack to 3GPP2 format SMS) is sent to N/W.
Line 1957: SessionId(%d) or RcvdMethodId(%d) is NULL!!!
Line 1965: [AC]ERR:Fail to find pSmsDbEntry with Tid[%d]!! 

Line 2046: pAppDb is NULL!!!
Line 2060: Current Stack is already having Grant, Process Message Directly
Line 2073: Allocation for sessionDetails Failed
Line 2082: Allocation for pExtMsg Failed
Line 2098: Add to DSDS List Failed
Line 894: [IMSSH_AC_CheckAndSendNotiRefresh] Sending Reg Notification for IMS bearer release
Line 728: RetryAfter[%d], TimerF[%d] in Millisec 
Line 779: RetryAfter[%d] is greater than TimerF[%d] in Millisec 
