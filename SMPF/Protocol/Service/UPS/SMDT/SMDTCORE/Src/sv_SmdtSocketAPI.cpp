Line 95: [SmdtCreateSocket] dom : %d, type : %d, proto : %d, context_id : %d
Line 102: SMDT SOCKET Create: FAILED-> No interface with cid [%d]
Line 113: [SmdtCreateSocket] Socket with id(%d) created
Line 120: Invalid Domain : %d
Line 136: [SmdtBind] sock_id : %d
Line 141: SMDT SOCKET BIND: FAILED-> No Socket attached with sock_id [%d]
Line 147: SMDT SOCKET BIND: FAILED-> Error Code : %d
Line 151: [SmdtBind] ProtocolType : %d
Line 163: [SmdtBind] Bind Success for Socket Id : %d
Line 179: [SmdtConnect] sock_id : %d
Line 185: SMDT SOCKET CONNECT: FAILED-> No Socket attached with sock_id [%d]
Line 203: pNetworkInfo is NULL
Line 210: SMDT SOCKET CONNECT: Called SMDTCLAT module
Line 218: SMDT SOCKET CONNECT ret value [%d]
Line 220: [SmdtConnect] Smdt Connect Sent for Socket Id : %d
Line 241: [SmdtSendTo] sock_id : %d, buflen : %d
Line 244: SMDT SOCKET SENDTO: FAILED-> Received Invalid parameters
Line 250: SMDT SOCKET SENDTO: FAILED-> No Socket attached with sock_id [%d]
Line 255: SMDT SOCKET SENDTO: Return Val : %d
Line 275: SMDT SOCKET SEND: FAILED-> Received Invalid parameters
Line 281: SMDT SOCKET SEND: FAILED-> No Socket attached with sock_id [%d]
Line 287: SMDT SOCKET SEND: Return Val : %d
Line 303: [SmdtRecvFrom] sock_id : %d, buflen : %d
Line 307: SMDT RECV FROM : FAILED-> No Socket attached with sock_id [%d]
Line 311: SMDT SOCKET RECVFROM: Copied Data Len : %d
Line 332: SMDT SOCKET RECVFROM: FAILED-> Error Code : %d
Line 349: [SmdtSetSockOpt] sock_id : %d, level : %d, optname : %d
Line 354: SMDT SET SOCK OPT : FAILED-> No Socket attached with sock_id [%d]
Line 366: SMDT SOCKET SETSOCKOPT: FAILED-> Error Code : %d
Line 384: [SmdtGetSockOpt] sock_id : %d, level : %d, optname : %d
Line 433: %s(): Entry - sock_id:%d log:%d
Line 438: SMDT SOCKET LISTEN: FAILED-> No Socket attached with sock_id [%d]
Line 443: SMDT SOCKET LISTEN: FAILED-> Invalid socket type [%d]
Line 459: SMDT SOCKET LISTEN: FAILED-> Error Code : %d
Line 462: [SmdtListen] Smdt Listen success for Socket Id : %d
Line 477: [SmdtAccept] sock_id : %d
Line 503: [SmdtClose] sock_id : %d
Line 508: SMDT CLOSE : FAILED-> No Socket attached with sock_id [%d]
Line 513: [SMDT] Closing SmdtSocket Id : %d
Line 517: SMDT SOCKET CLOSE: FAILED-> Error Code : %d
Line 541: SMDT CLOSE : FAILED-> invalid contextid
Line 546: SMDT SOCKET CLOSE: FAILED-> Error Code : %d
Line 566: [SMDT] Shutdown SmdtSocket Id : %d
Line 581: SmdtDisableUDPChecksum:: No socket with Id [%d]
Line 607:  In timer expirty handler
Line 621: [SmdtAsyncSelect] sock_id : %d, callBack : %p
Line 625: SMDT ASYNC SELECT : FAILED-> No Socket attached with sock_id [%d]
Line 649: [SmdtRecvWithOptions] sock_id : %d, buflen : %d, flags : %d
Line 653: SMDT RECV WITH OPTS : FAILED-> No Socket attached with sock_id [%d]
Line 658: SMDT RECV WITH OPTS : Copied Data Len : %d
Line 700: [SmdtCopyOptToBuffer] optType : %d, optLen = %d, optVal = %d
Line 716: [SmdtUpdateOption] sock_id : %d, flags : %d, pOpts : %p
Line 718: [SmdtUpdateOption] FAILED-> Received NULL pOpts
Line 723: [SmdtUpdateOption] FAILED-> No Socket attached with sock_id [%d]
Line 728: [SmdtUpdateOption] Failed to get packet header
Line 755: [SmdtUpdateOption] pOpts : 
Line 768: [SmdtDecodeOptions] Received NULL parameters
Line 771: [SmdtDecodeOptions] pFlags : %d
Line 775: [SmdtDecodeOptions] pOpts : 
Line 777: [SmdtDecodeOptions] No option or end of option
Line 784: [SmdtDecodeOptions] opt_cnt [%d] option [%d] total_len [%d]
Line 787: [SmdtDecodeOptions] opt_cnt [%d] option [%d] total_len [%d]
Line 803: [SmdtDeleteRouterPacketRule] Received NULL pSock
Line 813: [SmdtDeleteRouterPacketRule] pSockCb or pSockCb->ip_info is NULL
