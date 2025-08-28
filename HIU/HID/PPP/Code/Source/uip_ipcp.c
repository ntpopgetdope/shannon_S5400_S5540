Line 112: ipcp_up(): Bad local IP address [%d:%d:%d:%d].
Line 144: ipcp_up GIPCP->itsLastID[%x]
Line 154: ipcp_cleanup()
Line 189: ipcp_down
Line 227: ipcp_starting[%d]
Line 232: UIP_IPCPState_kOpened
Line 242: ipcp_starting(): MAX Total starting frames counter reached 0, UIP_IPCPState_kClosed
Line 253: ipcp_starting(): IPCP Restart timer expired
Line 262: ipcp_starting(): Configure counter reached 0, UIP_IPCPState_kClosed
Line 285: IP Addr: %lu.%lu.%lu.%lu
Line 314: UIP_IPCPState_kCRSent
Line 342: ipcp_frame_read(): Invalid IPCP Length (%lu). Frame discarded.
Line 349: ipcp_frame_read(): LCP is not Opened. Frame discarded.
Line 387: ipcp_frame_read()  Code [%d], ID [%d] GIPCP->itsState %d
Line 392: ipcp_frame_read - code [%d] not managed in IPCP state (%d). Discarded.
Line 408: ipcp_frame_read(): UIP_IPCPCode_kCfRq received.
Line 413: ipcp_frame_read(): UIP_IPCPCode_kCfNak received.
Line 418: ipcp_frame_read(): UIP_IPCPCode_kCfRj received.
Line 423: ipcp_frame_read(): UIP_IPCPCode_kCfAck received.
Line 428: new state = UIP_IPCPState_kAckRecv
Line 435: ipcp_frame_read(): UIP_IPCPCode_kTrRq received.
Line 454:  IPCP_P_H IPCP code [%d] ID. [%d]
Line 753: ipcp_reply_CfRq(): Invalid option size.
Line 792: ipcp_reply_CfRq(): Negative CfReq received while Opened. Discarded
Line 796: ipcp_reply_CfRq(): Positive CfReq received while Opened. Replying.
Line 828: new state = UIP_IPCPState_kAckSent
Line 879: ipcp_manage_CfNakRej(): Invalid option size.
Line 901: ipcp_manage_CfNakRej(): Local IP Addr suggested: %lu.%lu.%lu.%lu
Line 916: ipcp_manage_CfNakRej(): Bad ACCM Option Len
Line 938: ipcp_manage_CfNakRej(): Primary DNS IP Addr suggested: %lu.%lu.%lu.%lu
Line 941: ipcp_manage_CfNakRej(): Secondary DNS IP Addr suggested: %lu.%lu.%lu.%lu
Line 947: ipcp_manage_CfNakRej(): Primary DNS IP Addr rejected
Line 949: ipcp_manage_CfNakRej(): Secondary DNS IP Addr rejected
Line 956: ipcp_manage_CfNakRej(): Bad Primary DNS Option Len
Line 958: ipcp_manage_CfNakRej(): Bad Secondary DNS Option Len
Line 489: ipcp_reply_CfRq_action(): Peer Requested IP Address [%d:%d:%d:%d].
Line 495: ipcp_reply_CfRq_action(): Peer IP address rejected.
Line 505: ipcp_reply_CfRq_action(): Peer IP address NAKed with  [%d:%d:%d:%d].
Line 510: ipcp_reply_CfRq_action(): Peer IP Address accepted.
Line 530: UIP_IPCPCfRqAction_kNAK1
Line 535: UIP_IPCPCfRqAction_kACK1
Line 555: UIP_IPCPCfRqAction_kNAK2
Line 560: UIP_IPCPCfRqAction_kACK2
Line 623: UIP_IPCPCfRqAction_kREJ by default
Line 687: IPCP NAK IP: %lu.%lu.%lu.%lu
Line 707: IPCP NAK DNS1: %lu.%lu.%lu.%lu
Line 727: IPCP NAK DNS2: %lu.%lu.%lu.%lu
