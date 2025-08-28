Line 159:  No EMM connection after trying 3 times Rejecting SMS
Line 168:  State :   EMMSMS_WAITING_FOR_MO_CP_ACK
Line 182: EMM connection may not be possible, clear session and give fail
Line 194: EMM connection may not be possible, clear session and give fail
Line 202: Not handled in this state
Line 232:  Sending est request after SAEMM state is READY
Line 246:  RP DATA has not recived to the Network , Retranmiting
Line 256: RP DATA has  recived to the Network but RRC connection released before CP ACK 
Line 274: DCM requests to retransmit SMS directly.
Line 279: TR1MO Running & DatCbf Success; Delay till TR1MO expiry 
Line 286: Sent the EST REQ after expire of TR1MO timer to send CP ERROR 
Line 295: Trying EST_REQ for re-sending MT RP_ACK
Line 317: Trying EST_REQ for sending RP_ERROR
Line 322: Waiting for MT RP-Ack, SMS_TR2MT running, ignore this.
Line 329:  No SMS transaction is going on
Line 358: EMM connection is not possible, clear session and give fail
Line 373: EMM connection is not possible, clear session and give fail
Line 380: EMM connection is not possible, clear session and give fail
Line 388: No SMS transaction is going on 
Line 423: SessionNumber=%d, Status in EMM_DATA_STATE_NOTI =%d
Line 447: Unknown SMS state 
Line 476: Transaction Id -> %x
Line 480: Exception: Stop handler function
Line 492: Current State %d
Line 495: SAEMM_SMS_DATA_FAILURE Received from EMM. Retrying Rp Ack
Line 545: Retry when Channel Release received in SMS_WAITING_FOR_MO_CP_ACK state
Line 555:  Re-Transmit the SMS Message: RetryCount=%d, smsMaxRetry=%d
Line 587:  Retry Not allowed during GCF mode
Line 639:  No State match in sms_DecodeMmRelIndMsg
Line 658: Saved PLMN ID=%x:%x:%x
Line 659: Received PLMN ID=%x:%x:%x
Line 683: Displaying Message Contents: %s
Line 703: PLMN ID=%x:%x:%x, LAC = %x:%x, CELL ID=0x%x
Line 711: MmCellInfoRsp ignored
Line 731: sms_DecodeMmErrIndMsg 
Line 926:  messages in wrong state
Line 955:  sms_SendMmCpErrMsg
Line 993:  sms_SendLlcCpErrMsg 
Line 1044:  sms_SendPmmCpErrMsg
Line 1126: currentRatChangeStatus:%d, Received Status:%d
Line 1142: Mis-match between states 
Line 1162: Transaction Id -> %x
Line 1166: IMS SMS ongoing. Avoid Clearing Session 
Line 1171:  Stop TR1 and indicated Failure to AP 
Line 1179:  TR1 Timer is not running So Change the State accordingly 
Line 1189: Mis-match between states 
Line 1196: Invalid Status in sm_DecodeSmRegRatModeChangeReqMsg 
Line 1233: Rejecting GAPI's MO Req. RAT Change in progress !!
Line 1249: Sms.sms_ActiveRat: %s -> %s
Line 1306: ActiveRat(%s) AdditionRatInfo(%d)
Line 1342: Unknown Initialisation Type (%x) in mm_InitTestModeManagement 
Line 1380: CM Service Rej Cause Value-> %x and Cause String -> %s 
Line 1415:  RAT Mode Status -> %s
Line 1434: Current active RAT = %d
Line 1489: Unknown Rat Mode in sms_ProcessRatModeMsg
Line 1529: Avoid clearing IMS Session %d during RAT change
Line 1589: Unknown Initialisation Type (%x) in sms_Main
Line 2125: %s
Line 2156: Sms received in wrong state
Line 2177: %s
Line 2214: NR_MUI=0x%x
Line 2216: Transaction Id -> %x
Line 2220: Exception: Stop handler function
Line 2232: Current State %d
Line 2235: NRMM_SMS_DATA_FAILURE Received from NRMM. Retrying Rp Ack
Line 2276:  No NRMM connection after trying 3 times Rejecting SMS
Line 2285:  State :   NRMMSMS_WAITING_FOR_MO_CP_ACK
Line 2299: NRMM connection may not be possible, clear session and give fail
Line 2311: NRMM connection may not be possible, clear session and give fail
Line 2319: Not handled in this state
Line 2350:  Sending est request after NRMM state is READY
Line 2364:  RP DATA has not recived to the Network , Retranmiting
Line 2371: RP DATA has  recived to the Network but RRC connection released before CP ACK 
Line 2387: TR1MO Running & DatCbf Success; Delay till TR1MO expiry 
Line 2393: Sent the EST REQ after expire of TR1MO timer to send CP ERROR 
Line 2402: Trying EST_REQ for re-sending MT RP_ACK
Line 2424: Trying EST_REQ for sending RP_ERROR
Line 2429: Waiting for MT RP-Ack, SMS_TR2MT running, ignore this.
Line 2436:  No SMS transaction is going on
Line 2465: NRMM connection is not possible, clear session and give fail
Line 2473: NRMM connection is not possible, clear session and give fail
Line 2480: NRMM connection is not possible, clear session and give fail
Line 2488: No SMS transaction is going on 
Line 2527: SessionNumber=%d, Status in NRMM_DATA_STATE_NOTI =%d
Line 2551: Unknown SMS state 
Line 2565: Sms.Set.sms_RatChange_cause: %d -> %d
Line 2572: Sms.Get.sms_RatChange_cause: %d 
