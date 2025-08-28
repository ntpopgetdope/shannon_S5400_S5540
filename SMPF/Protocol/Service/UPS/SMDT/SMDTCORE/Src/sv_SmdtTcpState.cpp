Line 97: Timer : %d Started
Line 113: Timer : %d Stopped
Line 128: ResetBackoff : Done
Line 150: Timer : %d Restarted, Duration : %d ms
Line 323: [TCP Error] TIME WAIT TIME OUT, enter into Closed State
Line 370: [TCP] preprocess  recv Window size : %d, packet length : %d 
Line 384: [TCP IN SEGMENT] Accepted ACK, RST, URG
Line 386: [TCP IN SEGMENT] Not Accepted : %d
Line 393: [TCP IN SEGMENT] No Ack for RST, ignore segment (1)
Line 399: [TCP IN SEGMENT] Sending ACK : Cond(1) Droped
Line 407: [TCP IN SEGMENT] No Ack for RST, ignore segment (2)
Line 415: [TCP IN SEGMENT] pSock is NULL
Line 419: [TCP IN SEGMENT] Connection pending :: Send Syn/Ack
Line 422: [TCP IN SEGMENT] Sending ACK : Cond(2)
Line 434: [TCP IN SEGMENT] Acceptable packet : received size : 0
Line 437: [TCP][SEQ NUM] Seq. No : %u, expected SeqNo ==: (%u, %u)
Line 441: [TCP IN SEGMENT] pSock is NULL
Line 445: [TCP IN SEGMENT] Connection pending :: Send Syn/Ack
Line 448: [TCP] Sending Ack to get the expected Seq from remote : received size : 0
Line 452: [TCP] zero window: dropping the packet
Line 463: [TCP IN SEGMENT] Acceptable packet [with in the window]
Line 471: [TCP][SEQ NUM] Seq. No : %u, expected SeqNo ==: (%u, %u) or
Line 473: [TCP][SEQ NUM] Seq. No : %u, expected SeqNo ==: (%u, %u)
Line 474: [TCP] Sending Ack to get the expected Seq from remote
Line 522: [TCP] Reset not allowed to send
Line 556: [TCP] Sending RST to port : %d from port : %d
Line 626: [TCP] Sending SYN-ACK to port : %d
Line 721: [TCP] Sending SYN-ACK to port : %d
Line 788: [TCP] Sending ACK to port : %d from : %d
Line 808: [TCP] Sending [Seq: %u, ACK : %u, WIN : %u]
Line 849: [TCP] Sending ACK to port : %d from %d
Line 851: [SendFastAck] SocketId : %d
Line 875: [TCP] Sending [Seq: %u, ACK : %u, WIN: %u]
Line 894: Fast Recovery: Sending addtional data
Line 944: Retransmitiing from Seq: %u
Line 960: [fast retransmit] CWND : %d , SS THR : %d
Line 997: [FastRecovery] Retransmitiing from Seq: %u
Line 1011: [FastRecovery] New CWND : %d , Old CWD : %d
Line 1046: [TCP] pListenSock is NULL
Line 1051: [TCP] pSockCb is NULL
Line 1071: [TCP] Invalid IP version 
Line 1080: [TCP] invalid instance or proto interface
Line 1085: [TCP] invalid socket pair
Line 1091: [TCP] New Syncache Entry 
Line 1097: [TCP] unable to create syn socket
Line 1141: [TCP] Syncache socket id [%d]
Line 1177: Failed to get pSock
Line 1214: [TCP State] Create SYN to port : %d
Line 1286: [SmdtTcpStateClosed]TimeOutHandler [Timer Id : %d]
Line 1298: [SmdtTcpStateClosed]Sending TCP SYN
Line 1305: [SmdtTcpStateClosed]==>[SmdtTcpStateSynSent] 

Line 1308: SYN Sent Count(%d), Retransmit Timer Duration(%d)
Line 1311: [SmdtTcpStateClosed] failed to transmit SYN

Line 1329: [SmdtTcpStateClosed] Passive Open
Line 1343:  [TCP ERROR][SEND CALL][CLOSED state] connection not exits
Line 1358:  [TCP ERROR][RECV CALL][CLOSED state] connection not exits
Line 1408:  [TCP ERROR][CLOSE CALL][CLOSED state] Connection does not exist
Line 1420:  [TCP ERROR][ABORT CALL][CLOSED state] Connection does not exist
Line 1438:  [TCP ERROR][IN SEGMENT][CLOSED state] ignore RST
Line 1447:  [TCP ERROR][IN SEGMENT][CLOSED state] sending RST
Line 1480: [SmdtTcpStateSynSent]Sending TCP SYN
Line 1486: [SmdtTcpStateSynSent]==>[SmdtTcpStateSynSent] 

Line 1488: [SmdtTcpStateSynSent] failed to transmit SYN

Line 1551:  [TCP ERROR][RECV CALL][SYN SENT state] connection not exits
Line 1556:  [TCP ERROR][CLOSE CALL][SYN SENT state] deleting
Line 1563:  [TCP ERROR][ABORT CALL][SYN SENT state] connection not exits
Line 1569: [SmdtTcpStateSynSent]TimeOutHandler [Timer Id : %d]
Line 1576: SYN Sent Count(%d), Retransmit Timer Duration(%d)
Line 1578: [SmdtTcpStateSynSent] syn retranmit timer restarted
Line 1580: [SmdtTcpStateSynSent] failed to re-send SYN
Line 1585: [SmdtTcpStateSynSent] MAX SYN Retransmission Reached..Close Connection
Line 1589: [SmdtTcpStateSynSent] unhandled timers
Line 1594: [TCP ][SYN_SENT][In SEGMENT]  Ack No : %u
Line 1604: [TCP Error][SYN_SENT][Sending RST] received invalid Ack No : %u
Line 1617: [TCP][SYN SENT] RST Received , Change to closed state
Line 1657: [TCP SYN SENT] Recevied SYN-ACK, changing to EST and sending ACK
Line 1671: [TCP SYN/ACK RECV] Zero Window Starting Win Probe Timer
Line 1679: [TCP SYN SENT] Urgent Data Pending...
Line 1689: [TCP SYN SENT] changing to SYN RECV and sending SYN ACK
Line 1700: [SmdtTcpStateSynRecv]Sending TCP SYN
Line 1706: [SmdtTcpStateSynRecv]==>[SmdtTcpStateSynSent] 

Line 1708: [SmdtTcpStateSynRecv] failed to transmit SYN

Line 1757:  [TCP ERROR][RECV CALL][SYN RCV state] connection not exits
Line 1762:  [TCP ERROR][CLOSE CALL][SYN RECV state]
Line 1774:  [TCP ERROR][ABORT CALL][SYN RCV state] connection abort
Line 1783: [SmdtTcpStateSynRecv]TimeOutHandler [Timer Id : %d]
Line 1790: SYN Sent Count(%d), Retransmit Timer Duration(%d)
Line 1792: [SmdtTcpStateSynRecv] syn retranmit timer restarted
Line 1794: [SmdtTcpStateSynRecv] failed to re-send SYN|ACK
Line 1798: [SmdtTcpStateSynRecv] MAX SYN|ACK Retransmission Reached..Close Connection
Line 1802: [SmdtTcpStateSynRecv] unhandled timers
Line 1815:  [TCP Error] [SYN RECV] invalid packet, dropped
Line 1872: [TCP SYN RECV] Recevied ACK, changing to EST
Line 1896: ACK handling for passive tcp socket
Line 1906: SmdtTcpStateSynRecv : ACK plus DL Data received 
Line 1912: invalid protocol :
Line 1917: parent socket closed/not present
Line 1978:  Sending TCP SYN
Line 1986: failed to transmit

Line 2006:  [TCP ERROR][RECV CALL][LISTEN state] connection not exits
Line 2011:  [TCP ERROR][CLOSE CALL][SYN RECV state]
Line 2049:  [TCP ERROR][ABORT CALL][LISTEN state] connection not exits
Line 2066:  Listen State
Line 2071:  RST in [TCP Listen state] ==> ignored
Line 2075:  Ack in [TCP Listen state] ==> RST
Line 2105:  [TCP Listen] pSynTcp->m_SeqVar.snd.initial_send_seq_num %u
Line 2113: SYN Sent Count(%d), Retransmit Timer Duration(%d)
Line 2119:  [TCP Listen] ==> SYN RECV
Line 2131:  other in [TCP Listen state] ==> ignored
Line 2139:  [TCP ERROR][OPEN CALL][EST state] connection exits
Line 2176:  [TCP EST][Send Data]
Line 2182:  [TCP EST][Send Data]
Line 2198: Sending Pending ACK in recv
Line 2204: No pending ack to be sent
Line 2210:  [TCP ERROR][CLOSE CALL][EST state]
Line 2222:  [TCP ERROR][ABORT CALL][EST state] connection abort
Line 2236:  [TCP Error] [EST State] invalid packet for further process, dropped packet
Line 2245:  [TCP Error] [EST State] [RST set] close connection 
Line 2255:  [TCP Error] [EST State] [SYN set] close connection 
Line 2313: [TCP Noti][EST State]Ack - Seq.No: %u for some thing not sent
Line 2325: [TCP EST] process the segment further 
Line 2343: FIN received => Close Wait
Line 2349: FIN received : waiting for matching seq.no : %u
Line 2375: Handle Pure ACK
Line 2378: sending pending data
Line 2391: [TimeOutHandler][EST state] timer : %d expired
Line 2438:  [TCP ERROR][TimeOutHandler][EST state] unhandled timer : %d
Line 2442:  [TCP ERROR][OPEN CALL][FIN WAIT-1 state] connection exits
Line 2483:  [TCP][SEND CALL][FIN WAIT-1 state] connection closing
Line 2495:  [TCP ERROR][CLOSE CALL][FIN WAIT-1 state]
Line 2500:  [TCP ERROR][ABORT CALL][FIN WAIT-1 state] connection abort
Line 2512:  [TCP Error] [FIN-WAIT-1 State] invalid packet, dropped
Line 2573: [TCP Noti][FIN-WAIT-1 State]Ack - Seq.No: %u drop the packet
Line 2587: [TCP Noti][FIN-WAIT-1 State]Ack - Seq.No: %u for some thing not sent
Line 2597: [TCP FINWAIT-1] process the segment further 
Line 2615: [TCP FINWAIT-1] FIN Receievd and FIN Acked, ==> TimeWait 
Line 2623: [TCP FINWAIT-1] FIN Receievd ==> Closing 
Line 2639: [TimeOutHandler][FIN WAIT1] timer : %d expired
Line 2653: [FIN WAIT1] [FIN Wait 2 Timer Expired]
Line 2662:  [TCP ERROR][OPEN CALL][FIN WAIT-2 state] connection exits
Line 2697:  [TCP ERROR][SEND CALL][FIN WAIT-2 state] connection closing
Line 2707:  [TCP ERROR][CLOSE CALL][FIN WAIT-2 state]
Line 2712:  [TCP ERROR][ABORT CALL][FIN WAIT-2 state] connection abort
Line 2724:  [TCP Error] [FIN-WAIT-2 State] invalid packet, dropped
Line 2732: [TCP][FIN WAIT-2 State][Rst is set][connection closed] 
Line 2750: [TCP][FIN WAIT-2 State][Syn is set][connection closed] 
Line 2760: [TCP][FIN WAIT-2 State][Ack is not set][droped] 
Line 2776: [TCP Noti][FIN WAIT-2 State][Connection Close Noti] 
Line 2781: [TCP Noti][FIN WAIT-2 State]duplcate Ack - Seq.No: %d
Line 2787: [TCP Noti][FIN WAIT-2 State]Ack - Seq.No: %d for some thing not sent
Line 2795: [FIN-WAIT-2] process further
Line 2808: [TCP][FIN WAIT2] [Fin is set] ==> TimeWait
Line 2829: [TimeOutHandler][FIN WAIT2] timer : %d expired
Line 2842:  [TCP ERROR][OPEN CALL][CLOSING state] connection exits
Line 2878:  [TCP ERROR][SEND CALL][CLOSING state] connection closing
Line 2883:  [TCP ERROR][SEND CALL][CLOSING state] connection closing
Line 2888:  [TCP ERROR][CLOSE CALL][CLOSING state]
Line 2893:  [TCP ERROR][ABORT CALL][CLOSING state] connection not exits
Line 2905:  [TCP Error] [Closing State] invalid packet, dropped
Line 2911:  [TCP] [Closing State] [Rst Set][connection closed]
Line 2922:  [TCP] [Closing State] [Syn Set][connection closed]
Line 2952: [TCP Noti][Closing State]duplcate Ack - Seq.No: %d
Line 2957: [TCP Noti][Closing State]Ack - Seq.No: %d for some thing not sent
Line 2962: [TCP Error][is Some thing else here]
Line 2997:  [TCP ERROR][OPEN CALL][TIME WAIT state] connection exits
Line 3032:  [TCP ERROR][SEND CALL][TIME WAIT state] connection closing
Line 3037:  [TCP ERROR][SEND CALL][TIME WAIT state] connection closing
Line 3042:  [TCP ERROR][CLOSE CALL][TIME WAIT state]
Line 3047:  [TCP ERROR][ABORT CALL][TIME WAIT state] connection not exits
Line 3061:  [TCP Error] [TIME Wait State] invalid packet, dropped
Line 3068:  [TCP Error] [TIME Wait State] [RST set] close connection
Line 3079:  [TCP Error] [TIME Wait State] [SYN set] close connection
Line 3089:  [TCP Error] [TIME Wait State] [Ack not set] dropped
Line 3103:  [TCP Error] [TIME Wait State] [FIN set] restart timer
Line 3111: [TimeOutHandler][TIM WAIT] timer : %d expired
Line 3120:  [TCP ERROR][OPEN CALL][CLOSE WAIT state] connection exits
Line 3156:  [TCP Closewait][Send Data]
Line 3162:  [TCP Closewait][Send Data]
Line 3173:  [TCP ERROR][CLOSE CALL][CLOSE WAIT state]
Line 3187:  [TCP ERROR][ABORT CALL][CLOSE WAIT state][Sending RST]
Line 3200:  [TCP Error] [CLOSE WAIT State] invalid packet, dropped
Line 3208:  [TCP Error] [CLOSE WAIT State][RST set] Close connection
Line 3225:  [TCP Error] [CLOSE WAIT State][SYN set] Close connection
Line 3285: [TCP Noti][Close Wait State]Ack - Seq.No: %d for some thing not sent
Line 3294: [TCP Close Wait] process the segment further 
Line 3303: [TCP Error][CLOSE WAIT state] ignore the URG data
Line 3307: [TCP Error][CLOSE WAIT state] ignore the segment data
Line 3320:  [TCP ERROR][OPEN CALL][LAST ACK state] connection exits
Line 3356:  [TCP ERROR][SEND CALL][LAST ACK state] connection closing
Line 3361:  [TCP ERROR][SEND CALL][LAST ACK state] connection closing
Line 3366:  [TCP ERROR][CLOSE CALL][CLOSING state]
Line 3371:  [TCP ERROR][ABORT CALL][LAST ACK state] connection not exits, change to closed
Line 3384:  [TCP Error] [LAST ACK State] invalid packet, dropped
Line 3390: [TCP Error][LAST ACK state] RST is set
Line 3401: [TCP Error][LAST ACK state] SYN is set
Line 3411: [TCP Error][LAST ACK state][droped] Ack is not set
Line 3422: [LAST ACK state] Ack for FIN received
Line 3427: [TCP Error][LAST ACK state] invalid Ack for FIN
Line 3432: [TCP Error][LAST ACK state] ignore the URG data
Line 3436: [TCP Error][LAST ACK state] ignore the segment data
