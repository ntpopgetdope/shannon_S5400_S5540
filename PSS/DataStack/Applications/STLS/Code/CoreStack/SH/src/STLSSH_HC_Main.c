Line 108: STLS_ID:%x INCOMING HS MSG <== STSHSH_HSTYPE_HELLO_REQUEST
Line 111: STLS_ID:%x INCOMING HS MSG <== STLSSH_HSTYPE_SERVER_HELLO
Line 114: STLS_ID:%x INCOMING HS MSG <== STLSSH_HSTYPE_CERTIFICATE
Line 117: STLS_ID:%x INCOMING HS MSG <== STLSSH_HSTYPE_SERVER_KEY_EXCHANGE
Line 120: STLS_ID:%x INCOMING HS MSG <== STLSSH_HSTYPE_SERVER_HELLO_DONE
Line 123: STLS_ID:%x INCOMING HS MSG <== STLSSH_HSTYPE_CERTIFICATE_REQUEST
Line 126: STLS_ID:%x INCOMING HS MSG <== STLSSH_HSTYPE_FINISHED
Line 129: STLS_ID:%x INCOMING HS MSG <== STLSSH_HSTYPE_SESS_TICKET
Line 132: STLS_ID:%x INCOMING HS MSG <== INVALID MESSAGE TYPE
Line 141: STLS_ID:%x OUTGOING HS MSG ==> STLSSH_HSTYPE_CLIENT_HELLO 
Line 144: STLS_ID:%x OUTGOING HS MSG ==> STLSSH_HSTYPE_CLIENT_KEY_EXCHANGE 
Line 147: STLS_ID:%x OUTGOING HS MSG ==> STLSSH_HSTYPE_CERTIFICATE_VERIFY 
Line 150: STLS_ID:%x OUTGOING HS MSG ==> STLSSH_HSTYPE_CERTIFICATE 
Line 153: STLS_ID:%x OUTGOING HS MSG ==> STLSSH_HSTYPE_FINISHED 
Line 156: STLS_ID:%x OUTGOING HS MSG ==> INVALID MESSAGE TYPE
Line 179: %s(): Received NULL pSessDb
Line 184: %s(): Entry stlsId:%x
Line 191: %s(): Exit - ret:%d
Line 221: %s(): Invalid input parameter !!
Line 225: %s(): Entry - stlsId:%x pBuff:%p len:%d
Line 232: %s(): Error - pBuff is NULL !!
Line 241: %s(): ERROR - Mem alloc fail for pHsMsg !!
Line 251: %s(): Error - pBuff decode error!!
Line 260: %s(): Server resumed the session.
Line 261: STLS SET RESUME FLAG, Value[%d]
Line 269: %s(): Error - Negotiated Protocol Version not accepted !!
Line 278: %s(): Error - Negotiated Cipher Suite not Vailid !!
Line 288: %s(): Error - Negotiated Extensions not Vailid !!
Line 296: %s(): Error - Failed to set the negotiated protocol version !!
Line 304: %s(): Error -Failed to set the enabled extensions !!
Line 340: %s(): Error - CAL Ctxt is NULL for stlsId:%x!!
Line 353: %s(): Error - setting negotiated cipher to CAL failed!!
Line 366: %s(): Error - setting negotiated cipher to CAL failed!!
Line 379: %s(): Received NULL Session Id in Server Hello!!
Line 388: %s(): Exit - reasonCode:%d
Line 423: %s(): Invalid input parameter !!
Line 427: %s(): Entry - stlsId:%x, pBuff:%p, len:%d
Line 436: %s(): Error - pBuff is NULL !!
Line 443: %s(): Error - Invalid len for server certificate:%d!!
Line 454: STLS SET SRV CERT RCVD FLAG, Value[%d]
Line 460: %s(): Certificate decoding failed !!
Line 473: %s(): Certificate Validation required but fail !!
Line 486: %s(): Error - Allocate memory for pMsg failed !!
Line 504: %s(): Error - sending client certificate !!
Line 515: %s(): Certificate validation skipped for current client
Line 520: %s(): Error - Failed to Get Key Exchange Type!!
Line 539: %s(): setting RSA public key failed !!
Line 551: %s(): Computing RSA common secret failed !!
Line 559: %s(): TODO
Line 565: %s(): TODO
Line 569: %s(): Certificate is decoded but not set - TODO
Line 577: %s(): Exit - reasonCode:%d
Line 657: %s(): Currently client certificate support is not present - Need to send NULL certificate only
Line 660: %s(): Exit - reasonCode:%d
Line 696: %s(): Entry - stlsId:%x, pBuff:%p, len:%d
Line 705: %s(): ERROR - Mem alloc fail for pHsMsg !!
Line 714: %s(): ERROR - could not get protocol version
Line 722: %s(): ERROR - CAL context pointer is NULL !!
Line 729: %s(): Error - Failed to Get Key Exchange Type!!
Line 741: %s(): Error - pBuff decode error!!
Line 757: %s(): Error - pBuff decode error!!
Line 774: %s(): Error - SetEcdhServerKeyParams error!!
Line 795: %s(): Error - pBuff decode error!!
Line 822: %s(): Error - SetDhServerKeyParams error!!
Line 831: %s(): Incompatible key exchange type (0x%s) for handling server key exchange message !!
Line 837: %s(): ERROR - Un sppported algo for server key exchange type !!
Line 842: %s(): isPsk:%d, pServerKeyExchg:%p
Line 846: %s(): PSK Hint Len:%d
Line 851: %s(): Exit - reasonCode:%d
Line 880: %s(): Invalid input parameter !!
Line 884: %s(): Entry - stlsId:%x, pBuff:%p, len:%d
Line 891: %s(): ERROR - Getting Cal ptr fail
Line 898: %s(): keyExchangeBitmask : %d
Line 919: %s(): ERROR - computing premaster key Failed !!
Line 933: %s(): Exit - reasonCode:%d
Line 957: %s(): Invalid input parameter !!
Line 961: %s(): Entry - stlsId:%x pBuff:%p len:%d
Line 968: %s(): Error - pBuff is NULL !!
Line 977: %s(): ERROR - Mem alloc fail for pHsMsg !!
Line 987: %s(): Error - pBuff decode error!!
Line 996: %s(): SESS TICKET Hint Len:%d
Line 1003: %s(): :SESSTKT:  ERROR - Getting target validity time fail for sess tickect !!
Line 1010: %s(): :SESSTKT: SessionTicket Validity:%d seconds - Valid till:%d seconds
Line 1017: %s(): Error - Received Session Ticket is not Valid, pSessTicket->sessTicket.Len[%d]!!
Line 1025: %s(): Exit - reasonCode:%d
Line 1055: %s(): Invalid input parameter !!
Line 1059: %s(): Entry - stlsId:%x, pBuff:%p, len:%d
Line 1066: %s(): Error - pBuff is NULL !!
Line 1077: [SESS_RESUME] [ERROR] Failed to get resume DB
Line 1081: [SESS_RESUME] [SUCCESS] Got resume DB by Session Hash Key
Line 1084: [SESS_RESUME] [ERROR] Failed to Set session master key
Line 1089: [SESS_RESUME] [SUCCESS] Set session master key
Line 1092: [SESS_RESUME] [ERROR] Failed to get Compute new expanded key
Line 1096: [SESS_RESUME] [SUCCESS] Computed new expanded keys
Line 1105: 
[STLS_SH] [ERROR]  'STLS_DB_GetCalCtxtPtr' pCalCtx:%x
Line 1110: 
[STLS_SH] [SUCCESS]  Set keys for read direction
Line 1119: %s(): Exit - reasonCode:%d
Line 1151: %s(): Invalid input parameter !!
Line 1155: %s(): Entry - stlsId:%x, pBuff:%p, len:%d
Line 1163: %s(): ERROR - Mem alloc fail for pHsMsg !!
Line 1173: %s(): Error - pBuff decode error!!
Line 1188: [STLS_SH] [ERROR]  'STLS_DB_GetCalCtxtPtr' pCalCtx:%x
Line 1196: [STLS_SH] [ERROR] Server verify Data computation failed
Line 1207: [STLS_SH] [ERROR] Server verify Data computation failed
Line 1218: %s(): Exit - reasonCode:%d
Line 1248: %s(): Invalid input parameter !!
Line 1252: %s(): Entry - stlsId:%x, pBuff:%p, len:%d
Line 1262: %s(): Error - pBuff is NULL !!
Line 1282: %s(): Error - Handler not found for handshake message type :%d
Line 1305: %s(): Exit - reasonCode:%d
Line 1339: %s(): Error - mem alloc fail for CSS struct !!
Line 1353: %s(): ERROR - sending CCS Fail !!
Line 1361: %s(): ERROR - Getting Cal ptr fail!!
Line 1368: %s(): ERROR - Setting Write Key Fail !!
Line 1378: %s(): ERROR - performing computations failed !!!
Line 1385: [SESS_RESUME] CAL computations already done!
Line 1391: %s(): ERROR - Setting Write Key Fail !!
Line 1398: %s(): Exit - reasonCode:%d
Line 1432: %s(): Invalid input parameter !!
Line 1436: %s(): Entry stlsId:%x, hsType : %d
Line 1446: %s(): Error - Could not get struct for sending handshakemsg:%d
Line 1455: %s(): Error -Handshake message encoder is NULL !!
Line 1500: %s(): Exit - reasonCode:%d
Line 1539: %s(): Entry pCalCtx:%p, pSrvDhParam:%p, pSign:%p, pMsgBuff:%p, msgBuffLen:%d
Line 1543: %s() ERROR - Invalid parameters !!
Line 1554: %s(): ERROR - Invalid Hash Algo !!
Line 1572: %s(): ERROR - validiation of the server key exchange signature failure !!
Line 1594: %s(): ERROR - setting curver attributes to CAL failure !!
Line 1598: %s(): Exit - ret:%d
Line 1629: %s(): Entry pCalCtx:%p, pSrvEcDhParam:%p, pMsgBuff:%p, msgBuffLen:%d
Line 1633: %s() ERROR - Invalid parameters !!
Line 1642: %s(): ERROR - Invalid Hash Algo !!
Line 1660: %s(): ERROR - validiation of the server key exchange signature failure !!
Line 1667: %s(): Signature verification not applicable
Line 1682: %s(): ERROR - setting curver attributes to CAL failure !!
Line 1686: %s(): Exit - ret:%d
Line 1705: %s(): Entry hash:%d
Line 1722: %s() Exit - retHashType:%d
