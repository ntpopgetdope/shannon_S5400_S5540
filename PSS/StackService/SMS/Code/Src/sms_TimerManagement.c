Line 113: SessionNumber (%x)  Timer_catagory(%x) in sms_StopAllTimers
Line 129: SessionNumber (%x)  Timer_catagory(%x) in smsTimer_Set
Line 142: SessionNumber (%x)  TimerCategory(%x) in smsTimer_Reset
Line 168: sms_UpdTimerId:ENTRY TimerId: %d sms_CurrentStackId: %d
Line 183: sms_UpdTimerId:EXIT TimerId: %d sms_CurrentStackId: %d
Line 210: Wrong Timer: %d is expired. Ignore this event
Line 231: Timer: %s is expired (TI=%d, Session=%d)
Line 238: Timer: Exception - Expired during rat change (TimeoutCount for ratChange=%d / MaxTrial=%d)
Line 247: Timer: Exception - Send Failure Response
Line 343: Timer: Exception-Unknown Category(%d) in %s
Line 411: TC1MO timeout over max trial(%d). Send MM_REL_REQ
Line 416: DCM will not re-try PS domain in case of TC1MO expiry
Line 422: Retry PS domain
Line 436: SMS can't be sent in PS
Line 575: Final Time Out For Sending SMS Message Over the PS Domain
Line 594: SMS Messages Not Allowed To be Sent Over the CS Domain Abandoning GAPI Request
Line 730: SessionNumber -> %x
Line 736: Transaction Id -> %x
Line 738: smsSpecificTransmitScheme:%d
Line 771: There is no  DATA_STATE_NOTY with status READY after EST ERR sending SR with failed cause
Line 786: There is no  DATA_STATE_NOTY with status READY after EST ERR sending SR with failed cause
Line 794: Timed out in Wrong State in sms_ProcessTimerExpiryMmTc1mo1
Line 824: Tr1moRetransmitted == TRUE
Line 866: Initiating SMS Over the PS Domain
Line 883: TR1MO expired but SMS received at MT
Line 939: sms_ProcessTimerExpiryMmTc1mo1 - sms_RetryRegStateCount >= SMS_MAX_GMM_REG_STATE_REQ
Line 940: Final Time Out For Sending SMS Message Over the PS Domain
Line 947: Initiating SMS Message Over the CS Domain
Line 959: SMS Messages Not Allowed To be Sent Over the CS Domain.Abandoning GAPI Request.
Line 1043: Max. Retry done!! Send CP ERROR.
Line 1052: Sending CP-ERROR on TR1MO Expiry
Line 1076: Sending CP-ERROR on TR1MO Expiry
Line 1117: Max. Retry done!!
Line 1153: Transaction Id -> %x
Line 1228: Transaction Id -> %x
Line 1309: Timed out in Wrong State in sms_ProcessTimerExpiryTramo
Line 1336: Transaction Id -> %x
Line 1347: GAPI's Response NOT Received. Abort Operations 
Line 1369: Gapi rsp not rcvd or Validation failed, we will try to send RP-Error
Line 1377:  TR2MT Timed Out in SMS over IMS
Line 1389: Gapi rsp not rcvd or Validation failed, we will try to send RP-Error
Line 1397:  Timed out in Wrong State in smsTimer_PerformTr2MtExpiryActions
Line 1428: Transaction Id -> %x
Line 1438: GapiRspResult:%d
Line 1449: TC1MT Timed Out ! GAPI Response Received, but CpAck from Network Not Received yet
Line 1459: Abandon Message
Line 1476: TC1MT Timed Out   
Line 1481:  GAPI Response Was -ve. Abort Operations.
Line 1508: Max retries reached, Abandon Message
Line 1527: IMS SMS Max retries reached, Abandon Message 
Line 1535:  TC1MT Timed Out in SMS over IMS
Line 1538: GAPI Response Was -ve. Abort Operations 
Line 1556: Max retries reached, Abandon Message
Line 1567:  Timed out in Wrong State in sms_ProcessTimerExpiryGprsSmsTc1mt1
Line 1612:  Error:- Timer expired in Invalid state
Line 1626: GUARDMO Timer Expired while sending SMS over IMS. Sending Release request to IMSSH
Line 1669: Transaction Id -> %x
Line 1685:  Error:- Timer expired in Invalid state
Line 1733: Transaction Id -> %x
Line 1777:  Error:- Timer expired in Invalid state
Line 1799: Wrong Timer: %d is asked. failed to start timer
Line 1908: Timer: Exception-Unknown Category(%d) in %s
Line 1948: Timer: %s is started (TI=%d, Session=%d, Timeout=%d sec)
Line 1971:  pal_TmCreateMsgTimer did not return PAL_SUCCESS in smsTimer_Create
Line 1992: PLMN ID=%x:%x:%x
Line 2047: Timer: AU SIM requirement : Start CB valid timer(%d) for 6 minutes
Line 2052: Timer: Start CB valid timer(%d) is started for 60 minutes
Line 2064: Timer: CB valid timer(%d) is started for Twenty Four Hours
Line 2070: Wrong Timer: %d is asked. failed to start timer
Line 2090: Timer: CB valid timer(%d) is stopped
Line 2095: Wrong Timer: %d is asked. failed to stop timer
Line 2116: Wrong Timer: %d is asked. failed to start timer
Line 2148: Timer: Exception-Unknown Category(%d) in %s
Line 2181: Timer: %s is stopped (TI=%d / Session=%d)
Line 2223: Timer: Exception-Unknown ID=%d
Line 2232: Timer: Exception-Unknown ID=%d
Line 2242: Timer: %s is restarted (TI=%d, Session=%d, Timeout=%d sec)
Line 2287: + Timer : SMS_TR1MO -> RUNNING
Line 2293: + Timer : SMS_TRAMO -> RUNNING  
Line 2299: + Timer : SMS_TC1MO -> RUNNING  
Line 2305: + Timer : SMS_TC1MT -> RUNNING 
Line 2312: + Timer : SMS_TR2MT -> RUNNING 
Line 2318: + Timer : SMS_RETRY_ESTREQ -> RUNNING 
Line 2324: + Timer : SMS_CP_ACK_DELAY -> RUNNING 
Line 2332: + Timer : SMS_GUARDMO -> RUNNING 
Line 2339: + Timer : SMS_RETRY_IMSSMS -> RUNNING 
Line 2344: + Timer : SMS_CDMAMT -> RUNNING 
Line 2349: + Timer : SMS_CDMAACK -> RUNNING 
Line 2357: + No Timers are Running
Line 2363: Attempting to Write Using Invalid SessionNumber (%x) in smsTimer_DisplayAllStates 
Line 2379: Session (%x)  Timer_catagory(%x) in smsTimer_CreateTimers
Line 2394: pal_TmCreateMsgTimer return PAL_NOT_SUCCESS in smsTimer_CreateTimers
Line 2407: smsTimer_Initiailse InitType: %d
Line 2432: Unknown Initialisation Type (%x) in smsTimer_Initiailse 
Line 2493: TC1MO Duration :%d
Line 2543: TC1MT Duration :%d
Line 2603: TR1MO Duration :%d
