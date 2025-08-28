Line 139: [DNS] : Transaction ID [%d]
Line 294: [DNS] Message Posting Failed 
Line 360: [DNS] Freeing DNS DB for ifx: %d, AppID : 0x%x
Line 385: [DNS] : SDS_DNS_FreeDbByHostname called for ContextId [%d], hostname : %s
Line 388: [DNS] : SDS_DNS_FreeDbByHostname : Received Invalid cntxtId or hostname
Line 433: [DNS] : SDS_DNS_ResetDnsDb called for ContextId [%d], hostname : %s
Line 436: [DNS] : SDS_DNS_ResetDnsDb : Received Invalid cntxtId or hostname
Line 475: [DNS] : SDS_FreeDnsDb called with ifx [%d]!
Line 484: [DNS]Clearing DNS DB- First passing fail status to Application!
Line 502: [DNS] : SDS_DNS_FreeDb; ifx: %d
Line 506: [DNS]Clearing DNS DB- First passing fail status to Application!
Line 524: [DNS] :  All DB for Context Id[%d] freed. Close the socket with sockId[%d].
Line 527: [DNS] :  Some DB for Context Id[%d] present.Don't close the socket.
Line 531: [DNS] : All DNS DBs Freed
Line 1015:  [DNS] Sent alternative SRV Query! 
Line 1031:  [DNS] Error sending another SRV query, not enough SRV records!
Line 1032:  [DNS] Sending repeat query from first SRV record 
Line 1037:  [DNS] Sent A Query from first SRV record again! 
Line 1057:  [DNS] Sent alternative NAPTR Query! 
Line 1065:  [DNS] Error sending another NAPTR Query, not enough NAPTR record responses! 
Line 1066:  [DNS] Sending repeat query from first NAPTR record 
Line 1071:  [DNS] Sent NAPTR-SRV Query again! 
Line 1081:  [DNS] No NAPTR response recieved, sending first query again! 
Line 1083:  [DNS] Send Failure 
Line 1085:  [DNS] Send Success 
Line 1107: [DNS] : Retrans timer expiry: %d 
Line 1128:  [DNS] Sending query on secondary server! 
Line 1143:  [DNS] Send Failure 
Line 1149:  [DNS] Send Success 
Line 1164: [DNS] Retrans Expiry>>:	Failed to fetch DNS DB from timer ID
Line 1515: [DNS_Module] :SDS_DNS_DeleteByHostname entry! 
Line 1517: [DNS_Module] :SDS_DNS_DeleteByHostname, tempDNSdbPtr: %x! 
Line 1525: [DNS_Module] : SDS_DNS_DeleteByHostname failed!
Line 1529: [DNS_Module] :No DB with this hostname found! 
Line 1880: [DNS] : Failed to allocate memory!
Line 1901: DNSRR->type: %d
Line 1913: [DNS] : Failed to allocate memory!
Line 1959: [DNS] Succesfully processed SRV Query
Line 1961: [DNS] SRV Query not processsed succesfully
Line 1999: [DNS] Succesfully processed NAPTR Query
Line 2001: [DNS] NAPTR Query not processsed succesfully
Line 2032: [DNS]Type AAAA Query Response Recieved
Line 2038: [DNS] AppResponse memory allocation failed
Line 2059: [DNS][AAAA-Response ]
Line 2060: Query type [%d]
Line 2065: [DNS] DnsAnswer memory allocation failed
Line 2088: Query type [%d]
Line 2123: Type A Query Response Recieved
Line 2129: [DNS] : Failed to allocate memory!
Line 2150: [DNS][A-Response ]
Line 2151: Query type [%d]
Line 2156: [DNS] DnsAnswer memory allocation failed
Line 2179: Query type [%d]
Line 2262: [DNS] Process DNS Response 
Line 2265: Received Invalid response..return
Line 2272: Invalid Transaction ID >> 
Line 2277: [DNS] Recieved a duplicate response for a retransmitted query; discarding packet!
Line 2282: [DNS]Received invalid msg 
Line 2288: [DNS] Error condition recieved!
Line 2305: pDNSDb_ProcessDNSResp: %x 
Line 2306: Received valid msg! 
Line 2311: [DNS] : Invalid number of question received. Expected: [%d], Received: [%d]
Line 2323: [DNS] : Invalid number of answer received. Received Answer Count: [%d]
Line 2336: [DNS] : Received buffer is not properly null terminated!
Line 2348: [DNS] : Failed to allocate memory!
Line 2356: [DNS] : Failed to get Query name!
Line 2365: [DNS] : Invalid buffer Received!
Line 2393: [DNS] : Received Invalid Buffer!
Line 2403: [DNS] : Received buffer is not properly null terminated!
Line 2414: [DNS] : Failed to get Query name!
Line 2427: [DNS] : Invalid Buffer!
Line 2435: [DNS] : Failed to allocate memory!
Line 2445: [DNS] : Received buffer is not properly null terminated!
Line 2454: [DNS] : Failed to get Query name!
Line 2463: [DNS] : Received buffer is not properly null terminated!
Line 2472: [DNS] : Failed to get Query name!
Line 2484: [DNS] : Received invalid Buffer!
Line 2496: [DNS] : Invalid Query Type Received 
Line 2504: DNSRR->type: %d
Line 2520: [DNS] : Invalid Buffer, Error occured while parsing address!
Line 2531: [DNS] : Failed to allocate memory!
Line 2546: curr= pDNSDb->RecordRspList: %x
Line 2547: curr != NULL, processing query type!
Line 2565: [DNS] Recieved unknown query type; not stopping retransmission timer!
Line 2982: [DNS] :  New Query 
Line 2988: [DNS] : Same PDN, different Applications
Line 2994: [DNS] : Forming DNS Query failed 
Line 2999: [DNS] : Forming DNS Query failed 
Line 3003: [DNS] : DNS Query formed succesfully! 
Line 3008: [DNS] : Domain_Type= AF_INET! 
Line 3012: [DNS] : Socket send Failed with error [%d]
Line 3030: [DNS] : Same PDN, different Applications
Line 3036: [DNS] : Forming DNS Query failed 
Line 3041: [DNS] : Forming DNS Query failed 
Line 3045: [DNS] : DNS Query formed succesfully! 
Line 3050: [DNS] : Domain_Type= AF_INET6! 
Line 3054: [DNS] : Socket send Failed with error [%d]
Line 3083: [DNS] :	DNS Query Status True >> Response already in DB for the query
Line 3088: [DNS] : pDNSDb->RecordRspList->RecordRsp is a valid ptr: %x 
Line 3091: [DNS] :	Failed to allocate memory
Line 3099: [DNS] :	pDNSRsp->Result: %d
Line 3105: [DNS] DnsAnswer memory allocation failed
Line 3116: [DNS] : AF_INET query
Line 3120: [DNS] : AF_INET6 query
Line 3148: [DNS] : No DNS Db ReqParams->Domain_Type [%d] 
Line 3166: [DNS] : IPv4 Socket creation failed 
Line 3171: [DNS] : DNS Query formed succesfully, SocketID: %d! 
Line 3176: [DNS] : Forming DNS Query failed 
Line 3181: [DNS] : Forming DNS Query failed 
Line 3185: [DNS] : DNS Query formed succesfully! 
Line 3194: [DNS] : Socket send Failed with error [%d]
Line 3205: [DNS] : DNS Query Sent to Server
Line 3215: [DNS] : IPv6 Socket creation failed 
Line 3224: [DNS] : Forming DNS Query failed 
Line 3229: [DNS] : Forming DNS Query failed 
Line 3233: [DNS] : DNS Query formed succesfully, SocketID: %d! 
Line 3239: [DNS] : SockID [%d]
Line 3243: [DNS] : Socket send Failed with error [%d]
Line 3254: [DNS] : DNS Query Sent to Server
Line 3279: [DNS]  ReqParams is NULL!
Line 3285: [DNS] Message Posting Failed 
Line 3339: [DNS] :		SDS_DNS_SendRequest >> 
Line 3341: [DNS] :	NULL Pointer received.
Line 3346: [DNS] : Fetching DNSDb by Hostname
Line 3349: [DNS] : Intermediate Query, Fetching DNSDb by AppID: %d
Line 3354: Getting DNS DB by CID!
Line 3358: [DNS] : pDNSDb %x 
Line 3364: Stopping DNS Flush timer!
Line 3372: [DNS] : Response for AppID : %d present in DNS DB
Line 3385: [DNS] :	New Query/ QueryStatus is False - Possible that we have not received response for a previous query - Resend again 
Line 3392: [DNS] : Same PDN, different Applications
Line 3401: [DNS] : Forming DNS Query failed 
Line 3406: [DNS] : Forming DNS Query failed 
Line 3410: [DNS] : DNS Query formed succesfully! 
Line 3415: [DNS] : Domain_Type= AF_INET! 
Line 3420: [DNS] : Socket send Failed with error [%d]
Line 3425: [DNS] : Starting retrans timer with time: %d
Line 3431: [DNS] : Starting retrans timer with time: %d
Line 3445: [DNS] : Same PDN, different Applications
Line 3454: [DNS] : Forming DNS Query failed 
Line 3459: [DNS] : Forming DNS Query failed 
Line 3463: [DNS] : DNS Query formed succesfully! 
Line 3468: [DNS] : Domain_Type= AF_INET6! 
Line 3472: [DNS] : Socket send Failed with error [%d]
Line 3481: [DNS] : Starting retrans timer with time: %d
Line 3498: [DNS] : DNS Query Sent to Server
Line 3553: DNS delete_timer: STOPPED APP TIMER ID => %d STOPPED
Line 266: [DNS] PAL message send failed
Line 79: [DNS] : SDS_DNS_Mutex_Acquire [%d] 
Line 95: [DNS] : SDS_DNS_Mutex_Release [%d] 
Line 555: [DNS] : Start SDS_DNS_DeleteDb !
Line 558: [DNS] : Start SDS_DNS_DeleteDb >> head NULL
Line 1232: [DNS] Stop TTLTimer Expiry>>: %d
Line 1236: [DNS] Deleting Timer: %d
Line 684: [DNS] : Clearing the remaining resource records!
Line 689: [DNS] :currRR!= NULL; SDS_DNS_ClearRecResp!
Line 699: [DNS] :Cleared all the RResps in the DB!
Line 1206: [DNS] Stop Retrans Timer Expiry>>: %d
Line 1211: [DNS] Deleting Timer: %d
Line 1276: [DNS] :  head->ReqParams valid! 
Line 1277: [DNS] :  head->ReqParams CID: %d 
Line 1280: [DNS] :  DB with CID: %d exists! 
Line 1377: [DNS] :Get DB by timer ID: %d
Line 1378: [DNS] :gMainDNSDb_timerid: %x
Line 1309: [DNS] :  SDS_DNS_GetDnsDbByHostname >> 
Line 1310: [DNS] :  gMainDNSDb_hostname: %x 
Line 613: [DNS] : Start DB flush!
Line 619: [DNS] : Not the last DB to be flushed!
Line 626: [DNS] : DB->ReqParams: %x!
Line 628: [DNS] :temp->ReqParams: %x !
Line 643: [DNS] : DB to be flushed is the last DB
Line 644: [DNS] : pTempDb: %x
Line 647: [DNS] : pTempDb->nextDB == NULL
Line 1551: [DNS_Module] : Message Compression 
Line 1560: bsd_malloc failed >> 
Line 1749: [DNS] SDS_DNS_AddRespToDnsDb entry!
Line 1752: [DNS] SDS_DNS_AddRespToDnsDb>>:  Failed to fetch DNS DB
Line 1759: [DNS] SDS_DNS_AddRespToDnsDb>>:  Failed to allocate memory
Line 1764: [DNS]Resetting the retry count to 1!
Line 1773: [DNS] Time to live_1: %d
Line 1774: [DNS] IntermediateQuery_1:  %d
Line 1784: [DNS] tmpRespList: %x
Line 1787: [DNS] tmpRespList->nextRRList
Line 1792: [DNS] Query Type: %d
Line 1793: [DNS] Time to live: %d
Line 1794: [DNS] TTL_tmrID: %d
Line 1795: [DNS] IntermediateQuery:  %d
Line 973: [DNS] : Start RR ttl timer: %d 
Line 761: [DNS] : TTL timer expiry: %d
Line 772: [DNS] SDD_AddResptoDNSDb>>:  Failed to fetch RRespList
Line 1410: [DNS] : Failed to allocate memory!
Line 1415: [DNS] : Getting RR list by Timer ID: %d 
Line 1418: [DNS] :RRList_by_timerID, temp: %x 
Line 1424: [DNS] : returning valid RR that timed out!
Line 1433: [DNS] Moving to next RR
Line 1437: [DNS] Moving to next DB: %x 
Line 1440: [DNS] : returning NULL from Get RR from Timer ID
Line 1609: [DNS] Start of RecRespList to be sorted is NULL
Line 1620: No Record Response exists in the list !
Line 1626: [DNS] SDS_DNS_SortRecRespList: NAPTR
Line 1631: [DNS] SDS_DNS_SortRecRespList: NAPTR, Entering while loop
Line 1634: [DNS] SDS_DNS_SortRecRespList: NAPTR, NaptrRR_first order: %d
Line 1635: [DNS] SDS_DNS_SortRecRespList: NAPTR, NaptrRR_second order: %d
Line 1656: [DNS] SDS_DNS_SortRecRespList: SRV
Line 1661: [DNS] SDS_DNS_SortRecRespList: SRV, Entering while loop
Line 1664: [DNS] SDS_DNS_SortRecRespList: SRV, SrvRR_first priority: %d
Line 1665: [DNS] SDS_DNS_SortRecRespList: SRV, SrvRR_second priority: %d
Line 1580: [DNS] Entering SDS_DNS_Swap!
Line 1581: [DNS]First: %x!
Line 1582: [DNS]Second: %x!
Line 795: [DNS]  Response type: %d
Line 796: [DNS]RRespList found!
Line 800: [DNS] : Deleting RR!
Line 810: [DNS]  Response type: %d
Line 818: [DNS] : tmr_ttl: %x!
Line 821: [DNS] : RRespList->TTL_tmrID: %d!
Line 822: [DNS] : RRespList->type: %d!
Line 828: [DNS] Last RResp in the DB Chain
Line 833: [DNS] Last response type: %d
Line 834: [DNS] Only remaining response!
Line 835: [DNS] Starting DB Flush timer!
Line 839: [DNS] Last response!
Line 850: [DNS] Last response type: %d
Line 853: [DNS] Starting DB Flush timer!
Line 995: [DNS] : Start DB flush timer!
Line 998: [DNS] : &(dnsDBptr->tmr_rxmt): %x 
Line 999: [DNS] : &(dnsDBptr->tmr_DbFlush): %x 
Line 1002: [DNS] : Start DB flush timer created: %d!
Line 1004: [DNS] : Start DB flush timer started!
Line 716: [DNS] : DB Flush timer expiry: %d
Line 722: [DNS] : DB found for flush timer!
Line 730: [DNS] : DB Flush success
Line 734: [DNS] : DB Flush fail
Line 737: [DNS] : DB not found for flush timer
Line 885: [DNS] : Type of Intermediate RR: %d
Line 888: [DNS] : Not an intermediate query : %d
Line 1190: [DNS] Message Posting Failed 
Line 2590:  [DNS] index[%d] 
Line 2594:  [DNS] tempRR[%x] 
Line 2598: [DNS] SDS_DNS_ProcessNaptrRecResp entry
Line 2602: [DNS] RR is NULL
Line 2609: [DNS][NAPTR -Response ]
Line 2610: [DNS][NAPTR -Response ]
Line 2613:  [DNS] NAPTR response service length[%d] 
Line 2616: bsd_malloc failed
Line 2622:  [DNS] NAPTR response RegExp length[%d] 
Line 2624:  [DNS] offset[%d] 
Line 2625: [DNS][NAPTR Service String ]
Line 2627: [DNS][NAPTR Replacement String ]
Line 2634:  [DNS] NAPTR response Replacement Length[%d] 
Line 2639: [DNS] NAPTR Response 's' flag encountered.
Line 2651: bsd_malloc failed
Line 2657: [DNS][NAPTR-SRV-Hostname ]
Line 2658: [DNS] Sending SRV query-SDS_DNS_SendRequest entry!
Line 2661: [DNS] Success sending SRV query!
Line 2665: [DNS]SRV Request send failure!
Line 2669: [DNS] NAPTR Response 'a' flag encountered.
Line 2680: bsd_malloc failed
Line 2686: [DNS][NAPTR-RR- AReqParams.hostname ]
Line 2687: [DNS] Sending Type A query after NAPTR-SDS_DNS_SendRequest entry!
Line 2690: [DNS] Success sending Type_A query(After NAPTR RR)!
Line 2694: [DNS]Request Type_A(After NAPTR RR) send failure!
Line 2700: [DNS] NAPTR Response empty flag encountered.
Line 2711: [DNS] Failed to allocate memory
Line 2717: [DNS][NAPTR-RR- NAPTR.hostname ]
Line 2718: [DNS] Sending NAPTR query after NAPTR-SDS_DNS_SendRequest entry!
Line 2721: [DNS] Success sending NAPTR query(After NAPTR RR)!
Line 2725: Request NAPTR(After NAPTR RR) send failure!
Line 2756:  [DNS] tempSRVRR is null; No SRV Record exists in DNS DB!
Line 2760:  [DNS]SRV Index: %d 
Line 2767:  [DNS] tempSRVRR is null!
Line 2773:  [DNS]SDS_DNS_ProcessSrvRecResp: priority [%d] 
Line 2774:  [DNS]SDS_DNS_ProcessSrvRecResp: weight [%d] 
Line 2775:  [DNS]SDS_DNS_ProcessSrvRecResp: port [%d] 
Line 2778: [DNS] SDS_DNS_ProcessSrvRecResp: port_converted [%d] 
Line 2780: [DNS][pTemp ]
Line 2788:  [DNS]SRV Target Len: [%d] 
Line 2792: [DNS] Failed to allocate memory!
Line 2798: [DNS][SRV-RR ] SrvRR->target: 
Line 2801:   SDS_DNS_ProcessSrvRecResp: Service Unavailable 
Line 2817: bsd_malloc failed
Line 2824: [DNS][SRV-RR- AReqParams.hostname ]
Line 2825: [DNS] Sending Type A query after SRV-SDS_DNS_SendRequest entry!
Line 2828: [DNS] Success sending Type A(SRV) query!
Line 2830: [DNS]SRV Request Type A(SRV) failure!
Line 2857: [DNS] SDS_SendDNSQuery>>:  Failed to allocate memory
Line 2876: [DNS] SDS_SendDNSQuery>>:  dnsHdr->ID [%d] 
Line 2877: [DNS] SDS_SendDNSQuery>>:  dnsHdr->Opcode [%d] 
Line 2878: [DNS] SDS_SendDNSQuery>>:  dnsHdr->qdcount [%d] 
Line 2886: [DNS] :  Updated HostName is NULL. Returning..
Line 2893: [DNS] :  Updated HostName is NULL. Returning..
Line 2904: [DNS] :  bsd_malloc failed. Returning..
Line 2912: [DNS] SDS_SendDNSQuery>>:  pDNSQuestion->qtype  [%d] 
Line 2913: [DNS] SDS_SendDNSQuery>>:  pDNSQuestion->qclass  [%d] 
Line 2917: [DNS] :  bsd_malloc failed. Returning..
Line 2923: [DNS] offset [%d] 
Line 2926: [DNS] offset [%d] 
Line 2929: [DNS] offset [%d] 
Line 2931: [DNS] offset-final [%d] 
Line 2932: [dnsHdr ]
Line 2936: [DNS] SDS_SendDNSQuery>>:  Failed to allocate memory
Line 1705: [DNS] SDS_DNS_HostnameConversion>>:  Failed to allocate memory
Line 1713: [DNS] SDS_DNS_HostnameConversion>>:  Failed to allocate memory
Line 1733: [DNS] UpdatedHostNameLen: %d 
Line 1734: [DNS][uHostname ]
Line 1818: [DNS] SDS_DNS_AddReqToDnsDb entry!
Line 1819: [DNS] gMainDNSDb_1.1: %x
Line 1821: [DNS] newDNSDbEntry: %x
Line 1824: [DNS] SDS_DNS_AddReqToDnsDb>>:  Failed to allocate memory
Line 1838: [DNS] gMainDNSDb not valid ptr!
Line 1841: [DNS] gMainDNSDb valid ptr!
Line 1852: [DNS] gMainDNSDb_1: %x
Line 209: [DNS] : Socket Creation Failed
Line 222: [DNS] : Socket bind Failed with error [%d]
Line 228: [DNS_Module] : ASYNC Select failed
Line 317: [DNS TPC] CALLBACK Event TYPE :%d , SockID = %d 
Line 333: [DNS TPC] Invalid IP Type
Line 337: [DNS TPC] DNS_TPC_READ_EVENT PayLoadLen = %d 
Line 345: [DNS TPC] Memory Alloc failed[%d]

Line 163: [DNS] : Socket Creation Failed
Line 176: [DNS] : Socket bind Failed with error [%d]
Line 182: [DNS_Module] : ASYNC Select failed
Line 1460: [DNS] :   SDS_DNS_GetDnsDbByAppId >> %d 
Line 1461: [DNS] : gMainDNSDb_AppID : %x 
Line 1348: [DNS] :Get DB by context ID: %d
Line 1252: [DNS] Stop DB Flush Timer >>: %d
Line 945: [DNS] : Start retrans timer: %d 
Line 946: [DNS] : &(dnsDBptr->tmr_rxmt): %x 
Line 947: [DNS] : &(dnsDBptr->tmr_DbFlush): %x 
