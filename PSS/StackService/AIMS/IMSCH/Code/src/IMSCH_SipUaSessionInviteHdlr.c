Line 66: START --------  %s  -------
Line 72: Alert>Transaction or METHOD ID already USED
Line 76: Alert>_TRANS_DB_PTR is NULL : IMSCH_RET_FAIL
Line 76: Alert>Invalid TID, Return  IMSCH_RET_FAIL
Line 77: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 78: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 82: Warn>pRegDb is NULL!!
Line 90: Alert>INVALID  DIALOG or  DIALOG ID(%d) already USED
Line 101:  Session ID (%d)
Line 121: Warn>Received From URI is NULL 
Line 129: Warn>Received To URI is NULL 
Line 136: [SIP HDR] Adding SIP Header Field %s 
Line 140: Warn>pSessDb->pSessionCallId is NULL!!
Line 146: [SIP HDR] Adding SIP Header Field %s 
Line 154: Warn>pDialog->pLocalTag is NULL!!
Line 161: [SIP HDR] Adding SIP Header Field %s 
Line 170: Adding Route header
Line 170: [SIP HDR] Adding SIP Header Field %s 
Line 170: Adding Service Route header
Line 170: [SIP HDR] Adding SIP Header Field %s 
Line 182: Adding Security Verify header
Line 182: [SIP HDR] Adding SIP Header Field %s 
Line 186: [SIP HDR] Adding SIP Header Field %s 
Line 198: END --------  %s  ---------
Line 230: START --------  %s  -------
Line 236: Alert>Failed to Create Transaction ID
Line 240: Alert>_TRANS_DB_PTR is NULL : IMSCH_RET_FAIL
Line 240: Alert>Invalid TID, Return  IMSCH_RET_FAIL
Line 241: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 242: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 253:  Invalid Dialog ID = %d
Line 261:  Session ID (%d)
Line 274: Warn>Received From URI is NULL 
Line 282: Warn>Received To URI is NULL 
Line 289: [SIP HDR] Adding SIP Header Field %s 
Line 295: [SIP HDR] Adding SIP Header Field %s 
Line 305: [SIP HDR] Adding SIP Header Field %s 
Line 312: Adding Route header
Line 312: [SIP HDR] Adding SIP Header Field %s 
Line 312: Adding Service Route header
Line 312: [SIP HDR] Adding SIP Header Field %s 
Line 321: Adding Security Verify header
Line 321: [SIP HDR] Adding SIP Header Field %s 
Line 325: [SIP HDR] Adding SIP Header Field %s 
Line 334: END --------  %s  ---------
Line 368: START --------  %s  -------
Line 370: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 375: Re-Invite Response
Line 388:  Invalid Dialog ID = %d
Line 395: MO INVITE Response received, Status Code=%d, DiagId = %d
Line 405: [TCP_IP_RECOVERY] Invite Response received
Line 410: [TCP_IP_RECOVERY] Sending to TCP IP for socket options disable
Line 416: Warn>[TCP_IP_RECOVERY] Failed to SET TCP ERROR NOTI flag => RETVAL [%x]
Line 421: [TCP_IP_RECOVERY] Disabled Socket Options as received Invite response
Line 428:  Session ID (%d)
Line 430:  Sending Pending Cancel Request
Line 430:  Session ID (%d)
Line 439: Warn>Respnse Status Code= %d received in Terminated State
Line 466:  Retransmission of Reliable Response, discard the Response
Line 472:  Received RSeq  from Network = %d
Line 474:  Session ID (%d)
Line 479:  Sending Pending Cancel Request
Line 479:  Session ID (%d)
Line 488: Sending BYE for Early Dialog Case
Line 518: Warn> Invalid To Tag
Line 521:  Session ID (%d)
Line 536: StatusRspCode =%d OK Received again from Network, Sending ACK 
Line 541: ACK Not received from SH, Ignore re-transmitted 200 OK and wait
Line 548: 200OK recevied On Different Dialog,send ACK and clear the Dialog
Line 559: StatusRspCode =%d OK Received again from Network in Terminated State, Sending ACK 
Line 566: Session in Terminated State and ACK not sent from SH, Send received Msg to SH
Line 572:  Destory Method DB , MID= %d
Line 593:  Session ID (%d)
Line 597:  Destory Method DB , MID= %d
Line 606: Save Received Contact hdr as RemoteTarget in Dialog DB
Line 612: Save Received RecordRoute in Dialog DB
Line 612: Dialog State is CONFIRM, No need to Modify RecordRoute in Dialog DB
Line 623: Sending BYE for Early Dialog Case
Line 635: END --------  %s  ---------
Line 673: START --------  %s  -------
Line 677: Alert>Failed to Create Transaction ID
Line 681: Alert>_TRANS_DB_PTR is NULL : IMSCH_RET_FAIL
Line 681: Alert>Invalid TID, Return  IMSCH_RET_FAIL
Line 682: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 683: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 687: Warn>pRegDb is NULL!!
Line 694: Alert>DIALOG DB PTR is NULL : IMSCH_RET_FAIL
Line 698:  Invalid Dialog ID = %d
Line 708: Re-Invite Request: clear previous ACK Msg from the Sessiob DB 
Line 717: [SIP HDR] Adding SIP Header Field %s 
Line 720: Warn>pSessDb->pSessionCallId is NULL!!
Line 727: [SIP HDR] Adding SIP Header Field %s 
Line 736: Warn>pDialog->pLocalTag is NULL!!
Line 744: Warn>pDialog->pRemoteTag is NULL!!
Line 756: 	Free existing Request URI
Line 762: 	Copy RemoteTarget Header in Request URI
Line 767: [SIP HDR] Adding SIP Header Field %s 
Line 770: [SIP HDR] Adding SIP Header Field %s 
Line 778: Adding Route header
Line 778: [SIP HDR] Adding SIP Header Field %s 
Line 789: Adding Security Verify header
Line 789: [SIP HDR] Adding SIP Header Field %s 
Line 802: END --------  %s  ---------
Line 840: START --------  %s  -------
Line 842: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 852:  Invalid Dialog ID = %d
Line 859: MO Re-INVITE Response received, Status Code=%d
Line 865: Call ID, From, To Tag are Matching, Invite Response Received for existing Session
Line 869: Warn>Call ID and From  To Tag NOT Matching for same Session
Line 872:  Destory Method DB , MID= %d
Line 874: Warn>Ignore and Free the Sip msg
Line 882: Re-Invite Response 100 Trying
Line 895:  Retransmission of Reliable Response, discard the Response
Line 901:  Received RSeq  from Network = %d
Line 909:  Destory Method DB , MID= %d
Line 915:  Destory Method DB , MID= %d
Line 928: Save Received Contact hdr as RemoteTarget in Dialog DB
Line 934: Save Received RecordRoute in Dialog DB
Line 934: Dialog State is CONFIRM, No need to Modify RecordRoute in Dialog DB
Line 952: END --------  %s  ---------
Line 993: START --------  %s  -------
Line 999: Alert>Failed to Create Transaction ID
Line 1003: Alert>_TRANS_DB_PTR is NULL : IMSCH_RET_FAIL
Line 1003: Alert>Invalid TID, Return  IMSCH_RET_FAIL
Line 1004: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 1005: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 1009: Warn>pRegDb is NULL!!
Line 1016: Alert>DIALOG DB PTR is NULL : IMSCH_RET_FAIL
Line 1020:  Invalid Dialog ID = %d
Line 1032: [SIP HDR] Adding SIP Header Field %s 
Line 1037: [SIP HDR] Adding SIP Header Field %s 
Line 1044: [SIP HDR] Adding SIP Header Field %s 
Line 1065: 	Free existing Request URI
Line 1076: [SIP HDR] Adding SIP Header Field %s 
Line 1082: [SIP HDR] Adding SIP Header Field %s 
Line 1085: Adding Route header
Line 1085: [SIP HDR] Adding SIP Header Field %s 
Line 1096: Adding Security Verify header
Line 1096: [SIP HDR] Adding SIP Header Field %s 
Line 1103: END --------  %s  ---------
Line 1135: START --------  %s  -------
Line 1138: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 1141: Alert>DIALOG DB PTR is NULL : IMSCH_RET_FAIL
Line 1143: Warn>Received PRACK response,  Status code=%d
Line 1144: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 1148:  Destory Method DB , MID= %d
Line 1155: START --------  %s  -------
Line 1193: START --------  %s  -------
Line 1199: Alert>Failed to Create Transaction ID
Line 1203: Alert>_TRANS_DB_PTR is NULL : IMSCH_RET_FAIL
Line 1203: Alert>Invalid TID, Return  IMSCH_RET_FAIL
Line 1204: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 1205: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 1209: Warn>pRegDb is NULL!!
Line 1220:  Invalid Dialog ID = %d
Line 1234: [SIP HDR] Adding SIP Header Field %s 
Line 1238: [SIP HDR] Adding SIP Header Field %s 
Line 1255: 	Free existing Request URI
Line 1265: [SIP HDR] Adding SIP Header Field %s 
Line 1272: Adding Route header
Line 1272: [SIP HDR] Adding SIP Header Field %s 
Line 1275: [SIP HDR] Adding SIP Header Field %s 
Line 1285: Adding Security Verify header
Line 1285: [SIP HDR] Adding SIP Header Field %s 
Line 1290: END --------  %s  ---------
Line 1325: START --------  %s  -------
Line 1328: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 1337:  Invalid Dialog ID = %d
Line 1341: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 1345: MO Update Response received, Status Code=%d
Line 1359:  Destory Method DB , MID= %d
Line 1361: START --------  %s  -------
Line 1392: START --------  %s  -------
Line 1395: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 1397: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 1400: Alert>DIALOG DB PTR is NULL : IMSCH_RET_FAIL
Line 1404: [SIP HDR] Adding SIP Header Field %s 
Line 1409: [SIP HDR] Adding SIP Header Field %s 
Line 1422: [SIP HDR] Adding SIP Header Field %s 
Line 1425:  Destory Method DB , MID= %d
Line 1427: END --------  %s  ---------
Line 1460: START --------  %s  -------
Line 1463: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 1476:  Invalid Dialog ID = %d
Line 1493: Received remote sequence number is Invalid
Line 1494:  Destory Method DB , MID= %d
Line 1499: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 1505: Save Received RecordRoute in Dialog DB
Line 1505: Dialog State is CONFIRM, No need to Modify RecordRoute in Dialog DB
Line 1511: Save Received Contact hdr as RemoteTarget in Dialog DB
Line 1516: START --------  %s  -------
Line 1556: START --------  %s  -------
Line 1559: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 1560: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 1561: Alert>DIALOG DB PTR is NULL : IMSCH_RET_FAIL
Line 1565: Warn>pRegDb is NULL!!
Line 1578: [SIP HDR] Adding SIP Header Field %s 
Line 1584: [SIP HDR] Adding SIP Header Field %s 
Line 1594: Warn>pDialog->pLocalTag is NULL!!
Line 1608: 	Free existing Request URI
Line 1628: Adding Route header for Re-Invite ACK
Line 1631: Adding Route header
Line 1631: [SIP HDR] Adding SIP Header Field %s 
Line 1637: [SIP HDR] Adding SIP Header Field %s 
Line 1645: Adding Route header
Line 1645: [SIP HDR] Adding SIP Header Field %s 
Line 1648: [SIP HDR] Adding SIP Header Field %s 
Line 1650: [SIP HDR] Adding SIP Header Field %s 
Line 1667: END --------  %s  ---------
Line 1700: START --------  %s  -------
Line 1701: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 1705: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 1719: ACK Status msg contain NULL sip playload
Line 1725:  Destory Method DB , MID= %d
Line 1732:  Destory Method DB , MID= %d
Line 1737: Re-Transmitted ACK
Line 1740: Re-Transmitted ACK Transport ERROR, Sending Session FAIL
Line 1748: END --------  %s  ---------
Line 1785: START --------  %s  -------
Line 1790: Alert>Failed to Create Transaction ID
Line 1794: Alert>_TRANS_DB_PTR is NULL : IMSCH_RET_FAIL
Line 1795: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 1796: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 1802: Warn>pRegDb is NULL!!
Line 1814:  Invalid Dialog ID = %d
Line 1827:  Session ID (%d)
Line 1835: [SIP HDR] Adding SIP Header Field %s 
Line 1839: [SIP HDR] Adding SIP Header Field %s 
Line 1841:  CSEQ Local = %d CSEQ session Cnt = %d
Line 1858: 	Free existing Request URI
Line 1868: [SIP HDR] Adding SIP Header Field %s 
Line 1876: Adding Route header
Line 1876: [SIP HDR] Adding SIP Header Field %s 
Line 1879: Adding Security Verify header
Line 1879: [SIP HDR] Adding SIP Header Field %s 
Line 1882: [SIP HDR] Adding SIP Header Field %s 
Line 1888: END --------  %s  ---------
Line 1918: START --------  %s  -------
Line 1920: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 1921: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 1931: BYE RESPONSE for EARLY DIALOG
Line 1935:  Destory Method DB , MID= %d
Line 1946:  Destory Method DB , MID= %d
Line 1954: Alert>DIALOG DB PTR is NULL : IMSCH_RET_FAIL
Line 1957:  Destory Method DB , MID= %d
Line 1960: START --------  %s  -------
Line 1998: START --------  %s  -------
Line 2011: Warn>pSessDb is NULL!!
Line 2018: Warn>pDialog is NULL!!
Line 2026: Warn>pRegDb is NULL!!
Line 2034: Warn>TID Alloc Fail Tid  = %d, 
Line 2037: Alert>_TRANS_DB_PTR is NULL : IMSCH_RET_FAIL
Line 2037: Alert>Invalid TID, Return  IMSCH_RET_FAIL
Line 2043: Warn>FAIL to Get MID = %d, 
Line 2048: Warn>FAIL to Create Method DB = %d, 
Line 2055: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 2073: [SIP HDR] Adding SIP Header Field %s 
Line 2080: [SIP HDR] Adding SIP Header Field %s 
Line 2084: [SIP HDR] Adding SIP Header Field %s 
Line 2088: pSipSessionCont NULL Cant Fill Mand HDRS New Request
Line 2092: [SIP HDR] Adding SIP Header Field %s 
Line 2097: [SIP HDR] Adding SIP Header Field %s 
Line 2115: 	Free existing Request URI
Line 2125: [SIP HDR] Adding SIP Header Field %s 
Line 2130: Warn>pViaParam is NULL !!
Line 2139: Adding Route header
Line 2139: [SIP HDR] Adding SIP Header Field %s 
Line 2141: Adding Security Verify header
Line 2141: [SIP HDR] Adding SIP Header Field %s 
Line 2145: [SIP HDR] Adding SIP Header Field %s 
Line 2146: [SIP HDR] Adding SIP Header Field %s 
Line 2155: [SIP HDR] Adding SIP Header Field %s 
Line 2161: [SIP HDR] Adding SIP Header Field %s 
Line 2163: Send PANI Header in early BYE request
Line 2171: [SIP HDR] Adding SIP Header Field %s 
Line 2173: [KDDI] Send UA Header in ACK
Line 2178: [SIP HDR] Adding SIP Header Field %s 
Line 2187: [SIP HDR] Adding SIP Header Field %s 
Line 2195: END --------  %s  ---------
Line 2226: START --------  %s  -------
Line 2228: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 2229: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 2238:  BYE RSPONSE For Early Dialog ID=%d
Line 2246: Alert>DIALOG DB PTR is NULL : IMSCH_RET_FAIL
Line 2252:  BYE RSPONSE  code =%d  For Early Dialog , NO Dialog Exist
Line 2253: Ignore and Free the Sip msg
Line 2256:  Destory Method DB , MID= %d
Line 2259: START --------  %s  -------
Line 2288: START --------  %s  -------
Line 2292:  BYE Sent For Early Dialog SUCCESS
Line 2296:  BYE Sent For Early Dialog FAILED, Cause=%d
Line 2299: END --------  %s  ---------
Line 2338: START --------  %s  -------
Line 2340: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 2341: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 2343: Alert>DIALOG DB PTR is NULL : IMSCH_RET_FAIL
Line 2348:  Session ID (%d)
Line 2356: Call ID Not Found
Line 2375: Warn>Received From URI is NULL 
Line 2385: Warn>Received To URI is NULL 
Line 2396: From Tag Not Found
Line 2403: Save Received RecordRoute in Dialog DB
Line 2403: Dialog State is CONFIRM, No need to Modify RecordRoute in Dialog DB
Line 2409: Save Received Contact hdr as RemoteTarget in Dialog DB
Line 2418: 	Invite Socket Id = %d 
Line 2424: 	SIP TU sending 100 Trying to Network 
Line 2433: Warn>pRegDb is NULL!!
Line 2446: ------- IMSCH_INT_SIPUA_SESS_EVENT ==> IMSCH_INT_TRANS_EVENT
Line 2451: END --------  %s  -------
Line 2486: START --------  %s  -------
Line 2488: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 2489: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 2490: Alert>DIALOG DB PTR is NULL : IMSCH_RET_FAIL
Line 2493: MT INVITE Response received, Status Code=%d
Line 2498: [SIP HDR] Adding SIP Header Field %s 
Line 2504: [SIP HDR] Adding SIP Header Field %s 
Line 2519: 	Adding Record Route Header
Line 2521: [SIP HDR] Adding SIP Header Field %s 
Line 2530:  Session ID (%d)
Line 2536: 	Adding RSEQ Header
Line 2537: [SIP HDR] Adding SIP Header Field %s 
Line 2539:  RSeq Before =%d 
Line 2549:  RSeq After =%d 
Line 2579:  Session ID (%d)
Line 2587:  Session ID (%d)
Line 2593: [SIP HDR] Adding SIP Header Field %s 
Line 2608: END --------  %s  ---------
Line 2646: START --------  %s  -------
Line 2650: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 2651: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 2658:  Storing Invite Transport Type,  InvUasTransportType =%d Sock Id= %d 
Line 2675: Warn>Failed to Start timers
Line 2681: Warn>200 OK Status msg contain NULL sip playload
Line 2687: Warn>200 OK Status msg contain NULL sip playload
Line 2696: 100 Rel is set in UAS 1xx Rsp, Start timer to receive the PRACK
Line 2701: Warn>Failed to Start timers
Line 2707: 100 Rel is Not set in UAS 1xx Rsp, Timer Not started
Line 2712: TransportType is TCP, Re-transmit timer Not Started
Line 2717:  Failed to Send the UL Msg, Send IMSCH_SH_METHOD_FAIL , Cause=%d
Line 2731:  Destory Method DB , MID= %d
Line 2736: Re-Transmitted Msg
Line 2739: Re-Transmitted Transport ERROR, Sending Method FAIL
Line 2746: 100 Rel is set in UAS 1xx Rsp, Start timer to receive the PRACK
Line 2750: Warn>Failed to Start timers
Line 2757: server retransmits the 2xx response till ACK received, Start timer for 2xx  to receive the ACK
Line 2761: Warn>Failed to Start timers
Line 2766: 100 Rel is Not set in UAS 1xx Rsp, Timer Not started
Line 2769: END --------  %s  ---------
Line 2802: START --------  %s  -------
Line 2804: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 2805: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 2808: Alert>DIALOG DB PTR is NULL : IMSCH_RET_FAIL
Line 2817: Warn>INVALID MID =%d
Line 2819: MT Re-INVITE Request received
Line 2823: Call ID, From, To Tag are Matching, Re-Invite Received for existing Session
Line 2830: CSEQ Matching,its Re-transmitted RE-INIVITE Case, 200 OK send RSP
Line 2835:  Destory Method DB , MID= %d
Line 2843: Received remote sequence number is Invalid
Line 2846:  Destory Method DB , MID= %d
Line 2859: Received CSEQ[%d],  Remote CSEQ[%d] in DB
Line 2880: Re-Invite Request: clear previous 200 OK Msg from the Sessiob DB 
Line 2887: Warn>Call ID and From, To, Tag Not Matching for same Session
Line 2890:  Destory Method DB , MID= %d
Line 2903: Re-Invite Case: Dialog State is CONFIRM, No need to Modify RecordRoute in Dialog DB
Line 2911: Save Received Contact hdr as RemoteTarget in Dialog DB
Line 2915: 	SIP TU sending 100 Trying to Network 
Line 2925: Warn>pRegDb is NULL!!
Line 2941: 	Invite Socket Id = %d 
Line 2949: START --------  %s  -------
Line 2985: START --------  %s  -------
Line 2987: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 2988: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 2989: Alert>DIALOG DB PTR is NULL : IMSCH_RET_FAIL
Line 2992: MT INVITE Response received, Status Code=%d
Line 2997: [SIP HDR] Adding SIP Header Field %s 
Line 3002: [SIP HDR] Adding SIP Header Field %s 
Line 3022: 	Adding Record Route Header From Route set received in Invite Rsp
Line 3024: [SIP HDR] Adding SIP Header Field %s 
Line 3031: 	Adding Record Route Header From Received Rec Route in Invite
Line 3033: [SIP HDR] Adding SIP Header Field %s 
Line 3043: 	Adding RSEQ Header
Line 3044: [SIP HDR] Adding SIP Header Field %s 
Line 3046:  RSeq Before =%d 
Line 3056:  RSeq After =%d 
Line 3085: [SIP HDR] Adding SIP Header Field %s 
Line 3088: END --------  %s  ---------
Line 3123: START --------  %s  -------
Line 3126: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 3127: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 3135: Dialog is not present for the Received BYE Method
Line 3136:  Destory Method DB , MID= %d
Line 3165: mandatory Header Cseq Not Found
Line 3166:  Destory Method DB , MID= %d
Line 3178: RAck Header Mismatch
Line 3179:  Destory Method DB , MID= %d
Line 3188: mandatory Header RACK Not Found
Line 3189:  Destory Method DB , MID= %d
Line 3200: Save Received RecordRoute in Dialog DB
Line 3200: Dialog State is CONFIRM, No need to Modify RecordRoute in Dialog DB
Line 3210: Save Received Contact hdr as RemoteTarget in Dialog DB
Line 3215: START --------  %s  -------
Line 3248: START --------  %s  -------
Line 3250: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 3251: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 3254: Alert>DIALOG DB PTR is NULL : IMSCH_RET_FAIL
Line 3261: [SIP HDR] Adding SIP Header Field %s 
Line 3266: [SIP HDR] Adding SIP Header Field %s 
Line 3282: Adding Record Route Header
Line 3284: [SIP HDR] Adding SIP Header Field %s 
Line 3287: [SIP HDR] Adding SIP Header Field %s 
Line 3291:  Destory Method DB , MID= %d
Line 3293: END --------  %s  ---------
Line 3331: START --------  %s  -------
Line 3337: Alert>Failed to Create Transaction ID
Line 3341: Alert>_TRANS_DB_PTR is NULL : IMSCH_RET_FAIL
Line 3341: Alert>Invalid TID, Return  IMSCH_RET_FAIL
Line 3342: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 3343: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 3348: Warn>pRegDb is NULL!!
Line 3359:  Invalid Dialog ID = %d
Line 3374: Warn>Received From URI is NULL 
Line 3383: Warn>Received To URI is NULL 
Line 3392: [SIP HDR] Adding SIP Header Field %s 
Line 3396: [SIP HDR] Adding SIP Header Field %s 
Line 3420: 	Free existing Request URI
Line 3431: [SIP HDR] Adding SIP Header Field %s 
Line 3438: Adding Route header
Line 3438: [SIP HDR] Adding SIP Header Field %s 
Line 3438: Adding Service Route header
Line 3438: [SIP HDR] Adding SIP Header Field %s 
Line 3449: Adding Security Verify header
Line 3449: [SIP HDR] Adding SIP Header Field %s 
Line 3450: [SIP HDR] Adding SIP Header Field %s 
Line 3455: END --------  %s  ---------
Line 3490: START --------  %s  -------
Line 3493: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 3502:  Invalid Dialog ID = %d
Line 3505: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 3509:  Destory Method DB , MID= %d
Line 3511: START --------  %s  -------
Line 3528: START --------  %s  -------
Line 3531: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 3533: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 3536: Alert>DIALOG DB PTR is NULL : IMSCH_RET_FAIL
Line 3540: [SIP HDR] Adding SIP Header Field %s 
Line 3545: [SIP HDR] Adding SIP Header Field %s 
Line 3559: [SIP HDR] Adding SIP Header Field %s 
Line 3563:  Destory Method DB , MID= %d
Line 3567: END --------  %s  ---------
Line 3600: START --------  %s  -------
Line 3603: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 3610: Alert>DIALOG DB PTR is NULL : IMSCH_RET_FAIL
Line 3624: Received remote sequence number is Invalid
Line 3625:  Destory Method DB , MID= %d
Line 3634: Save Received RecordRoute in Dialog DB
Line 3634: Dialog State is CONFIRM, No need to Modify RecordRoute in Dialog DB
Line 3643: Save Received Contact hdr as RemoteTarget in Dialog DB
Line 3646: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 3658: END --------  %s  -------
Line 3693: START --------  %s  -------
Line 3695: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 3696: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 3705:  Invalid Dialog ID = %d
Line 3726: mandatory Header Cseq Matching
Line 3733: mandatory Header Cseq Not Found
Line 3752: Re-Invite Request: clear previous 200 OK Msg from the Sessiob DB 
Line 3764: Save Received RecordRoute in Dialog DB
Line 3764: Dialog State is CONFIRM, No need to Modify RecordRoute in Dialog DB
Line 3787:  Destory Method DB , MID= %d
Line 3790: START --------  %s  -------
Line 3819: START --------  %s  -------
Line 3821: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 3825: Timer Pointer is Invalid
Line 3836: UAS Ack timer is Running, Re-transmit 2xxRsp to Network 
Line 3842: UAS Ack timer is Stopped, NO Action 
Line 3847: Invalid Timer ID or Sid 
Line 3852: END --------  %s  ---------
Line 3889: START --------  %s  -------
Line 3891: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 3895: Timer Pointer is Invalid
Line 3907: UAS ACK timer Expired
Line 3908:  TODO : Need to Send Method FAIL to SH 
Line 3929: Invalid Timer ID or Sid 
Line 3934: END --------  %s  ---------
Line 3965: START --------  %s  -------
Line 3967: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 3971: Timer Pointer is Invalid
Line 3980: Alert>_TRANS_DB_PTR is NULL : IMSCH_RET_FAIL
Line 3980: Alert>Invalid TID, Return  IMSCH_RET_FAIL
Line 3982:  Re-transmit 1xxRsp to Network, Re-Transmit count=%d 
Line 3989: Alert>_TRANS_DB_PTR is NULL : IMSCH_RET_FAIL
Line 3989: Alert>Invalid TID, Return  IMSCH_RET_FAIL
Line 3992: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 3993: Warn> MAX(%d) Re-transmit 1xxRsp Reach ,Sending Method Fail to SH 
Line 3999: Max Re-transmit of 1xx Rsp, Sending Method Failure 
Line 4006: Alert>Invalid Timer ID(%d) or Sid(%d) 
Line 4018:  Sending IMSCH_SH_METHOD_FAIL  for  1xxRsp MAX Re-transmit reached
Line 4026:  Destory Method DB , MID= %d
Line 4030: END --------  %s  ---------
Line 4053: START --------  %s  -------
Line 4055: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 4059: Timer Pointer is Invalid
Line 4066: KEEP ALIVE TIMER Expired send dummy packets 
Line 4074: Alert>Invalid Timer ID(%d) or Sid(%d) 
Line 4079: END --------  %s  ---------
Line 4109: START --------  %s  -------
Line 4111: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 4112: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 4117:  Bye Response has been Sent Out.Destroy the method
Line 4119:  Destory Method DB , MID= %d
Line 4123:  Failed to Send the UL Msg, Send IMSCH_SH_METHOD_FAIL , Cause=%d
Line 4127: END --------  %s  ---------
Line 4157: START --------  %s  -------
Line 4159: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 4160: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 4166: Alert>DIALOG DB PTR is NULL : IMSCH_RET_FAIL
Line 4171: Alert>DIALOG DB PTR is NULL : IMSCH_RET_FAIL
Line 4193: mandatory Header Cseq Matching
Line 4200: mandatory Header Cseq Not Found
Line 4209: Save Received RecordRoute in Dialog DB
Line 4209: Dialog State is CONFIRM, No need to Modify RecordRoute in Dialog DB
Line 4213:  Session ID (%d)
Line 4218: END --------  %s  -------
Line 4253: START --------  %s  -------
Line 4255: Alert>_SESS DB PTR is NULL : IMSCH_RET_FAIL
Line 4256: Alert>MethodID DB PTR is NULL : IMSCH_RET_FAIL
Line 4267: Alert>DIALOG DB PTR is NULL : IMSCH_RET_FAIL
Line 4272: Alert>DIALOG DB PTR is NULL : IMSCH_RET_FAIL
Line 4280: [SIP HDR] Adding SIP Header Field %s 
Line 4285: [SIP HDR] Adding SIP Header Field %s 
Line 4300: END --------  %s  ---------
Line 4330: START --------  %s  -------
Line 4332: Bye collision Case!!!
Line 4337: END --------  %s  -------
Line 4349: START --------  %s   Return IMSCH_RET_INVALID-------
Line 4357: START --------  %s   Return IMSCH_RET_INVALID-------
Line 4365: START --------  %s   Return IMSCH_RET_INVALID-------
Line 4373: START --------  %s   Return IMSCH_RET_INVALID-------
Line 4381: START --------  %s   Return IMSCH_RET_INVALID-------
Line 4388: START --------  %s   Return IMSCH_RET_INVALID-------
Line 4403: START --------  %s   Return IMSCH_RET_INVALID-------
Line 4410: START --------  %s   Return IMSCH_RET_INVALID-------
Line 4417: START --------  %s   Return IMSCH_RET_INVALID-------
Line 4423: START --------  %s   Return IMSCH_RET_INVALID-------
Line 4430: START --------  %s   Return IMSCH_RET_INVALID-------
Line 4436: START --------  %s   Return IMSCH_RET_INVALID-------
Line 4442: START --------  %s   Return IMSCH_RET_INVALID-------
Line 4449: START --------  %s   Return IMSCH_RET_INVALID-------
Line 4455: START --------  %s   Return IMSCH_RET_INVALID-------
Line 4463: START --------  %s   Return IMSCH_RET_INVALID-------
Line 4470: START --------  %s   Return IMSCH_RET_INVALID-------
Line 4477: START --------  %s   Return IMSCH_RET_INVALID-------
Line 4484: START --------  %s   Return IMSCH_RET_INVALID-------
Line 4491: START --------  %s   Return IMSCH_RET_INVALID-------
Line 4498: START --------  %s   Return IMSCH_RET_INVALID-------
Line 4506: START --------  %s   Return IMSCH_RET_INVALID-------
