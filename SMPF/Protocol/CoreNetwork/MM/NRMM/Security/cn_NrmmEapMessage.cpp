Line 60: [W :MM,%d]  Warning: The length of data is 0
Line 60: [MM|%d,CP] Warning: The length of data is 0
Line 72: [A :MM,%d]  %%!EM ERROR : remaining EAP-AKA Message length is invalid: %d
Line 72: [MM|%d,CP] %%!EM ERROR : remaining EAP-AKA Message length is invalid: %d
Line 77: [D :MM,%d]   : EAP-AKA Subtype[%d]
Line 92: [D :MM,%d]  Decode Eap Message
Line 96: [A :MM,%d]  %%!EM ERROR : Message length(%d) is invalid
Line 96: [MM|%d,CP] %%!EM ERROR : Message length(%d) is invalid
Line 100: [A :MM,%d]  %%!EM ERROR : Message length(%d) exceeded max size(%d)
Line 100: [MM|%d,CP] %%!EM ERROR : Message length(%d) exceeded max size(%d)
Line 107: [A :MM,%d]  %%!EM ERROR : Invalid Code: %d
Line 107: [MM|%d,CP] %%!EM ERROR : Invalid Code: %d
Line 117: [A :MM,%d]  %%!EM ERROR : Length mismatch! len[%d], eapLen[%d]
Line 117: [MM|%d,CP] %%!EM ERROR : Length mismatch! len[%d], eapLen[%d]
Line 124: [D :MM,%d]   : Code[%d] Identifier[%d]
Line 134: [A :MM,%d]  %%!EM ERROR : Invalid Code: %d
Line 134: [MM|%d,CP] %%!EM ERROR : Invalid Code: %d
Line 138: [D :MM,%d]   : Type[%d]
Line 154: [A :MM,%d]  %%!EM ERROR : Unsupported type : %d
Line 154: [MM|%d,CP] %%!EM ERROR : Unsupported type : %d
Line 163: [D :MM,%d]  Encode Eap Message
Line 171: [D :MM,%d]   : Code[%d] Identifier[%d] Type[%d]
Line 175: [D :MM,%d]   : EAP_TYPE_IDENTITY
Line 178: [DumpHex]  : Identity 
Line 186: [D :MM,%d]   : EAP-AKA Subtype[%d]
Line 191: [D :MM,%d]   : EAP_AKA_SUBTYPE_AKA_CHALLENGE
Line 197: [D :MM,%d]   : EAP_AKA_SUBTYPE_AKA_IDENTITY
Line 203: [D :MM,%d]   : EAP_AKA_SUBTYPE_NOTIFICATION
Line 209: [D :MM,%d]   : EAP_AKA_SUBTYPE_REAUTHENTICATION
Line 215: [D :MM,%d]   : EAP_AKA_SUBTYPE_CLIENT_ERROR
Line 221: [D :MM,%d]   : EAP_AKA_SUBTYPE_AKA_SYNC_FAIL
Line 230: [D :MM,%d]  totalLength : %d
Line 243: [A :MM,%d]  %%!EM ERROR : encryption recipie invalid iv[%d] Kenc[%d]
Line 243: [MM|%d,CP] %%!EM ERROR : encryption recipie invalid iv[%d] Kenc[%d]
Line 248: [A :MM,%d]  %%!EM ERROR : Memory allocation is failed. plainData[%02X], dataLen[%d]
Line 248: [MM|%d,CP] %%!EM ERROR : Memory allocation is failed. plainData[%02X], dataLen[%d]
Line 256: [DumpHex]  : AT_ENCR plain     
Line 257: [DumpHex]  : AT_ENCR encrypted 
Line 267: [DumpHex]  : AT_MAC 
Line 282: [A :MM,%d]  %%!EM ERROR : AT_RES is not set
Line 282: [MM|%d,CP] %%!EM ERROR : AT_RES is not set
Line 295: [DumpHex]  : AT_RES 
Line 308: [D :MM,%d]   : AT_MAC
Line 317: [D :MM,%d]   : AT_RESULT_IND
Line 341: [DumpHex]  : AT_IV 
Line 351: [D :MM,%d]   : AT_ENCR_DATA
Line 361: [D :MM,%d]   : AT_COUNTER : %d
Line 370: [D :MM,%d]   : AT_PADDING Length : %d
Line 386: [D :MM,%d]   : AT_MAC
Line 410: [DumpHex]  : AT_IV 
Line 420: [D :MM,%d]   : AT_ENCR_DATA
Line 430: [D :MM,%d]   : AT_COUNTER : %d
Line 440: [D :MM,%d]   : AT_COUNTER_TOO_SMALL
Line 451: [D :MM,%d]   : AT_PADDING Length : %d
Line 467: [D :MM,%d]   : AT_MAC
Line 477: [D :MM,%d]   : AT_RESULT_IND
Line 491: [A :MM,%d]  %%!EM ERROR : AT_IDENTITY is not set
Line 491: [MM|%d,CP] %%!EM ERROR : AT_IDENTITY is not set
Line 504: [DumpHex]  : AT_IDENTITY 
Line 516: [A :MM,%d]  %%!EM ERROR : CLIENT_ERROR_CODE is not set
Line 516: [MM|%d,CP] %%!EM ERROR : CLIENT_ERROR_CODE is not set
Line 526: [D :MM,%d]   : AT_CLIENT_ERROR : %d
Line 538: [A :MM,%d]  %%!EM ERROR : AUTS is not set
Line 538: [MM|%d,CP] %%!EM ERROR : AUTS is not set
Line 547: [DumpHex]  : AT_AUTS
Line 558: [A :MM,%d]  %%!EM ERROR : Invalid length of attribute: %d ( > remainLength: %d)
Line 558: [MM|%d,CP] %%!EM ERROR : Invalid length of attribute: %d ( > remainLength: %d)
Line 563: [D :MM,%d]   :   Attribute Type : %d
Line 573: [A :MM,%d]  %%!EM ERROR : Invalid length of AT_ID_REQ attribute: %d
Line 573: [MM|%d,CP] %%!EM ERROR : Invalid length of AT_ID_REQ attribute: %d
Line 582: [A :MM,%d]  %%!EM ERROR : Invalid length of AT_RAND attribute: %d
Line 582: [MM|%d,CP] %%!EM ERROR : Invalid length of AT_RAND attribute: %d
Line 586: [DumpHex]  :   AT_RAND 
Line 591: [A :MM,%d]  %%!EM ERROR : Invalid length of AT_AUTN attribute: %d
Line 591: [MM|%d,CP] %%!EM ERROR : Invalid length of AT_AUTN attribute: %d
Line 595: [DumpHex]  :   AT_AUTN 
Line 598: [A :MM,%d]  %%!EM ERROR : Invalid attribute AT_RES on the peer
Line 598: [MM|%d,CP] %%!EM ERROR : Invalid attribute AT_RES on the peer
Line 601: [A :MM,%d]  %%!EM ERROR : Invalid attribute AT_AUTS on the peer
Line 601: [MM|%d,CP] %%!EM ERROR : Invalid attribute AT_AUTS on the peer
Line 606: [A :MM,%d]  %%!EM ERROR : Invalid length of AT_MAC attribute: %d
Line 606: [MM|%d,CP] %%!EM ERROR : Invalid length of AT_MAC attribute: %d
Line 610: [DumpHex]  :   MAC 
Line 614: [DumpHex]  :   AT_KDF_INPUT 
Line 619: [A :MM,%d]  %%!EM ERROR : Invalid length of AT_KDF attribute: %d
Line 619: [MM|%d,CP] %%!EM ERROR : Invalid length of AT_KDF attribute: %d
Line 623: [D :MM,%d]   :   KDF : %d
Line 627: [D :MM,%d]   :   AT_RESULT_IND : %d
Line 632: [A :MM,%d]  %%!EM ERROR : Invalid length of AT_IV attribute: %d
Line 632: [MM|%d,CP] %%!EM ERROR : Invalid length of AT_IV attribute: %d
Line 636: [DumpHex]  :   AT_IV 
Line 641: [A :MM,%d]  %%!EM ERROR : Invalid length of AT_NOTIFICATION attribute: %d
Line 641: [MM|%d,CP] %%!EM ERROR : Invalid length of AT_NOTIFICATION attribute: %d
Line 645: [D :MM,%d]   :   Notification code : %d
Line 649: [D :MM,%d]   :   AT_ENCR_DATA : %d
Line 653: [DumpHex]  :   AT_NEXT_REAUTH_ID 
Line 657: [D :MM,%d]   :   AT_COUNTER : %d
Line 661: [D :MM,%d]   :   AT_COUNTER_TOO_SMALL 
Line 665: [DumpHex]  :   AT_NONCE_S 
Line 670: [DumpHex]  :   ERROR : Invalid at padding
Line 675: [D :MM,%d]   :   AT_TRUST_IND
Line 678: [D :MM,%d]   :   AT_CHECKCODE : Doesn't support AT_CHECKCODE
Line 681: [D :MM,%d]  %%!EM ERROR : Unhandled attribute: %d, length: %d
Line 705: [DumpHex] Received msg: 
Line 707: [DumpHex] Received AT_MAC: 
Line 708: [DumpHex] HmacSha256 mac output : 
Line 710: [E :MM,%d]  ValidateEapAkaMac failed!
Line 714: [E :MM,%d]  ValidateEapAkaMac success!
Line 723: [A :MM,%d]  %%!EM ERROR : DecryptEncData. Can't decrypt enc data double time
Line 723: [MM|%d,CP] %%!EM ERROR : DecryptEncData. Can't decrypt enc data double time
Line 729: [A :MM,%d]  %%!EM ERROR : encryption recipie invalid iv[%d] Kenc[%d]
Line 729: [MM|%d,CP] %%!EM ERROR : encryption recipie invalid iv[%d] Kenc[%d]
