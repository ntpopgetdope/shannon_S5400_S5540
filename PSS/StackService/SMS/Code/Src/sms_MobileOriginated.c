Line 142: SmsMoReq.smsFlag %d
Line 183: SMS Data Length -> %d, SMS Data  -> ...
Line 246: GAPI's request rejected due to Invalid State in sms_DecodeSmsMoReqMsg
Line 298: Invalid Data Bearer Type (%x) in sms_SetStateAccordingToDataBearer 
Line 330: Transaction Id -> %x
Line 335: sms_TCS_Get_info  = %d
Line 354: Another Session Already exists,
Line 382: ReleaseReqFlag of Active Session = %s
Line 389: RelConReceived for prev SMS is not received. Send fail response.
Line 402: Rejecting GAPI's Req  Msg received in invalid state
Line 494: Transaction Id -> %x
Line 498: Exception
Line 520: Aborted. Active Sms Mo Sessions
Line 536: Aborted. Previous MO session is active, but RELEASE_CONN is not set
Line 548: Not sending Cp-Ack for previous session (accord to 36_523_11_1_5)
Line 573: Unknown ReqType: %d.
Line 631: TR1MO expired, sending CP-Error
Line 649: Message Received in Invalid State, Message Ignored
Line 672: %s
Line 703: Transaction Id -> %x
Line 706: session not found for received TI
Line 721: Aborted. Active Sms Mo Sessions
Line 734: Aborted. Previous MO session is active, but RELEASE_CONN is not set
Line 741: Not sending Cp-Ack for previous session (accord to 36_523_11_1_5)
Line 765: Unknown ReqType: %d.
Line 776: TR1MO expired, sending CP-Error
Line 786: Message Received in Invalid State, Message Ignored
Line 798: %s
Line 829: Transaction Id -> %x
Line 832: session not found for received TI
Line 847: Aborted. Active Sms Mo Sessions
Line 860: Aborted. Previous MO session is active, but RELEASE_CONN is not set
Line 867: Not sending Cp-Ack for previous session (accord to 36_523_11_1_5)
Line 888: Unknown ReqType: %d.
Line 901: TR1MO expired, sending CP-Error
Line 953: Message Received in Invalid State, Message Ignored
Line 979: Transaction Id -> %x
Line 984: Exception: Stop handler function
Line 1005: Operation Aborted. Number of Active MO Sessions over 1
Line 1022: Previous MO session is active, but RELEASE_CONN is not set
Line 1056: Unknown ReqType: %d. Stop handling event
Line 1073: Message Received in Invalid State, Message Ignored
Line 1099: Transaction Id -> %x
Line 1108: Exception: Stop handler function
Line 1162:  Re-Transmit the SMS Message: RetryCount=%d, smsMaxRetry=%d
Line 1190:  SMS Messages Not Allowed To be Sent Over the PS Domain 
Line 1214: Unexpected RAT(%d) in retry case
Line 1221:  Retry Not allowed during GCF mode
Line 1226: SMS Failed,
Line 1251:  Message Received in Invalid State 
Line 1276: Transaction Id -> %x
Line 1280: Exception: Stop handler function
Line 1289: PSEnabled State = %s, CSEnabled State = %s
Line 1313: Operation Aborted. Number of Active MO Sessions over 1
Line 1325: Release Req Already Received -> %s
Line 1366: Not Able to Establish a Connection Via PS Domain, Trying CS Domain 
Line 1374:  Not Able to Establish a Connection Via PS Domain, And Not Allowed to Try the CS Domain., Rejecting GAPI's MO Req 
Line 1384:  Message Received in Invalid State
Line 1407: Transaction Id -> %x
Line 1411: Exception: Stop handler function
Line 1430:  Number of Sessions > 1. Aborting Procedure 
Line 1447:  There is already another Active MO Conneciton But No Rel Req Was Received For the Last one. Aborting Procedure 
Line 1479:  Msg Received in Incorrect State. Message Ignored  
Line 1520: Transaction Id -> %x
Line 1525: Exception: Stop handler function
Line 1545:  Messages Not Allowed To be Sent Over the CS Domain 
Line 1553:  Message Received in Invalid State, Message Ignored in sms_DecodePmmSmsEstErrorIndMsg
Line 1641: Retrying RP ACK immediately without waiting for TC1MT to expire
Line 1651: Max Retry done!!Wait for Timer expiry.
Line 1688: Wrong EstReqDomain(%d)
Line 1707: Session Not found. Not sending Release
Line 1739: Unexpected state: %d
Line 1793: Transaction Id -> %x
Line 1838: Wrong EstReqDomain(%d)
Line 1852: Session Not found. Not sending Release
Line 1872: Transaction Id -> %x
Line 1996: SMS Data  -> ...
Line 2123: SMS Data  -> ...
Line 2220:   sms_SendPmmRpDataMemAvailMsg
Line 2306: Displaying SessionNumber %d
Line 2307: sms_flag=%d, CurrentState=%d, IMS_REG=%d, Rat=%d
Line 2417: TPDA length %d TON %d
Line 2463: Displaying Message Contents: %s
Line 2465: SMS Data  -> ...
Line 2490: Transaction Id -> %x
Line 2494: Lost CP-ACK received for previous MT SMS Session (Ti:%d). No CP-ERROR needed to be sent
Line 2593: Message Received in Invalid State 
Line 2660: Transaction Id -> %x
Line 2666: Exception: Stop handler function
Line 2676: Received MessageRef=%x 
Line 2681: MsgRef=%d, RecvMsgRef=%d
Line 2735: Unexpected Domain : %d
Line 2779: Message Received in Invalid State(%d) 
Line 2814: %s
Line 2848: %s
Line 2887: Transaction Id -> %x
Line 2888: MoreMessagesToFollow=%s 
Line 2894: Rejecting GAPI's MO Req  RAT Change in progress
Line 3100: Incorrect State
Line 3194: Wrong EstReqDomain(%d)
Line 3207: Session Not found. Not sending Release
Line 3223: Transaction Id -> %x
Line 3256: Transaction Id -> %x
Line 3257: Cause(%d)
Line 3263: Exception: Stop handler function
Line 3299: EMM Connection rejected
Line 3317: Maximum try reached  Rejecting request
Line 3357: Waiting for DATA_STATE_NOTI from EMM
Line 3362: Unable to send RP-Ack/RP-Error due to Max retries, deactivating session
Line 3371: Unable to send RP-Ack/RP-Error, deactivating session
Line 3386:  Message Received in Invalid State 
Line 3402: Transaction Id -> %x
Line 3406: %s
Line 3410: Wrong EstReqDomain(%d)
Line 3423: Session Not found. Not sending Release
Line 3443: Transaction Id -> %x
Line 3448: %s
Line 3467: Transaction Id -> %x
Line 3468: Cause(%d)
Line 3472: Exception: Stop handler function
Line 3500: Transaction Id -> %x
Line 3501: [IMS_SENT_FAIL] Cause = %d
Line 3506: Exception: Stop handler function
Line 3522: RetryCount : %d
Line 3536: Retried maximum Times. Clear SMS session
Line 3552: RetryCount : %d
Line 3561: Retried maximum Times. Clear SMS session
Line 3569: IMS_SENT_FAIL received for SMS_MEMORY_AVAILABLE_REQ in IMSSMS_WAITING_FOR_MO_CP_ACK 
Line 3597: RP-ACK sent fail, Abandon Message 
Line 3606: IMS_SENT_FAIL received in state IMSSMS_WAITING_FOR_MT_CP_ACK. Wait for TC1MT to expire
Line 3626: Transaction Id -> %x
Line 3630: %s
Line 3634: Wrong EstReqDomain(%d)
Line 3661: Transaction Id -> %x
Line 3666: %s
Line 3697: Transaction Id -> %x
Line 3698: Cause(%d)
Line 3704: Exception: Stop handler function
Line 3740: NRMM Connection rejected
Line 3758: Maximum try reached  Rejecting request
Line 3798: Waiting for DATA_STATE_NOTI from NRMM
Line 3803: Unable to send RP-Ack/RP-Error due to Max retries, deactivating session
Line 3812: Unable to send RP-Ack/RP-Error, deactivating session
Line 3827:  Message Received in Invalid State 
Line 3856: Transaction Id -> %x
Line 3860: Exception: Stop handler function
Line 3932: Retry needed as network returns CP-ERROR cause 97 SMS over the PS Domain 
Line 3936: Initiating SMS Over the CS Domain 
Line 3954: SMS retry not required 
Line 4019: Transaction Id -> %x
Line 4025: Exception: Stop handler function
Line 4049: Message Received in Invalid State
Line 4060: Missing Cause value in RP ERROR... Response sent to upper layers
Line 4074: MM has sent is Wrong.Message Ignored: RecvdMsgRef=%d
Line 4153: Initiating SMS Over the CS Domain 
Line 4166: Initiating SMS Over the PS Domain
Line 4182: SMS Messages Not Allowed To be Sent Over the PS Domain 
Line 4191:  Network Does Not Support SMS over the PS Domain 
Line 4194:  Initiating SMS Over the CS Domain 
Line 4212: SMS Messages Not Allowed To be Sent Over the CS Domain. 
Line 4248: sms_DeactivatePendingActiveSessions NumberOfActiveSessions = %d 
Line 4296: Transaction Id -> %x
Line 4300: Exception: Stop handler function
Line 4452:   Invalid State in sms_DecodeSmsAbortReqMsg 
Line 4496: Transaction Id -> %x
Line 4610:   GAPI's request rejected due to Invalid State in sms_DecodeSmsMemAvailReqMsg 
Line 4717: sms_MobileOriginated   InitType:%d
Line 4752: Unknown State: smsState=%d
Line 4786: Unknown Domain: smsDomain=%d
Line 4823: Unknown State: smsState=%d
Line 4857: Unknown Domain: smsDomain=%d
Line 4897: Transaction Id -> %x
Line 4919: Another Session Already exists,
Line 4947: ReleaseReqFlag of Active Session = %s
Line 4954: RelConReceived for prev SMS is not received. Send fail response.
Line 4967: Rejecting GAPI's Req  Msg received in invalid state
Line 5018: Cdma SMS Data Length -> %d, SMS Data  -> ...
Line 5076: sms_SendSmsImsCdmaDataReq ! Ti does not match !!
Line 5100: TPDA length %d
Line 5105: num_fields is empty!!
Line 5128: Displaying Message Contents: %s
Line 5129: SMS Data Length -> %d, SMS Data  -> ...
Line 5132: TransactionIdentifier -> %d
Line 5161: sms_IsSupportNrImsRetry : %d
