Line 74: [N :SM,%d]     (fn) %s
Line 82: [W :SM,%d]  %%@EM rMsgBody.pAirMsg == nullptr
Line 87: [W :SM,%d]  %%@EM rMsgBody.AirMsgLength== 0
Line 96: [N :SM,%d]     (fn) %s
Line 113: [N :SM,%d]     (fn) %s
Line 118: [W :SM,%d]  %%@EM Can't found session instance
Line 121: [W :SM,%d]  %%@EM Error : %s(0x%X) is not nullptr. Memmory leakage case
Line 121: [W :SM,%d]  %%@EM So DELETE %s and NEW again
Line 121: [W :SM,%d]  %%@EM %s is already nullptr. So can't _DELETE_ in %s
Line 121: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 121: [W :SM,%d]  %%@EM (_new_) %s=0x%X in %s
Line 127: [D :SM,%d]       _NEW_ m_pSessionForDecoding 0x%x
Line 135: [W :SM,%d]  %%@EM (pTempContext == nullptr)
Line 143: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 147: [W :SM,%d]  %%@EM (pTempSession == nullptr)
Line 157: [N :SM,%d]     (fn) %s
Line 182: [N :SM,%d]     (fn) %s
Line 188: [W :SM,%d]  %%@EM Waiting for EST CNF => EstState : %d !!!!
Line 195: [W :SM,%d]  %%@EM PendingSize : %d !!!!
Line 196: [W :SM,%d]  %%@EM (_delete_arr_) %s=0x%X in %s
Line 199: [W :SM,%d]  %%@EM Waiting for EST CNF of PDU Release. So, Ignore Modification Command !!!!
Line 204: [W :SM,%d]  %%@EM pPendedIdList is NULL !!!!
Line 208: [W :SM,%d]  %%@EM Not watiting for EST CNF of PDU Release !!!!
Line 273: [N :SM,%d]     <<SMT_MM_DATA_IND>> (P=%d L=%d C=%d(0x%X))
Line 278: [D :SM,%d]       Option Length %d 
Line 289: [W :SM,%d]  %%@EM If the PSI (%d) is a reserved or unassigned value, the UE shall ignore the message 
Line 357: [W :SM,%d]  %%@EM MandatoryIe is not matched!!!!
Line 370: [N :SM,%d]     (set) %s = %d(0x%X)->%d(0x%X) (Changed) in %s
Line 370: [N :SM,%d]     (set) %s = %d(0x%X) (Already) in %s
Line 381: [W :SM,%d]  %%@EM Stop DATA_IND!!!!
Line 405: [D :SM,%d]       Already processed DATA_CNF
Line 409: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 414: [N :SM,%d]     <<SMT_MM_DATA_CNF>> (T=%d C=%d(0x%X) DataCnfMsgId(%s))
Line 431: [N :SM,%d]     SMT_MM_DATA_CNF_Handler : [SSC] OperationCode(%s)
Line 449: [N :SM,%d]     <<SMT_MM_EST_CNF>> (T=%d)
Line 452: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 453: [D :SM,%d]       Extract PendedMsg(%s)
Line 458: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 468: [D :SM,%d]       SMT_PM_CONNECT_REQ msg has already been processed
Line 486: [N :SM,%d]     <<SMT_MM_DATA_REJ>> (T=%d R=%d)
Line 498: [W :SM,%d]  %%@EM pPendedMsg = nullptr in %s
Line 516: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 519: [N :SM,%d]     <<SMT_MM_EST_REJ>> (T=%d C=%d(%s))
Line 528: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 582: [W :SM,%d]  %%@EM Ignore rxCause=%d(OUTSIDE_LADN_AREA|EMC_FALLBACK) due to RejMsgId=0x%X pSession=%d
Line 600: [W :SM,%d]  %%@EM Ignore rxCause=%d(TEMP_NOT_READY) due to RejMsgId=0x%X pSession=%d
Line 617: [N :SM,%d]     <<MM_REL_IND>> RelType=%d if 2 needs to send REL_REQ to NW, reregi = %d
Line 620: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 658: [N :SM,%d]     <<MM_NW_SESSION_INFO_IND>>  Cause=%d SessionStatus=0x%X NumOfRejSessId=%d
Line 668: [D :SM,%d]       EPS status 0x%x
Line 684: [D :SM,%d]       No changed NSSAI
Line 713: [N :SM,%d]     [%02d] No.ofRejCause %s
Line 759: [N :SM,%d]     <<MM_STATUS_IND>> Status=%d-->%d(%s) IwkN26=%d AsState=%d RegType=%d
Line 761: [SM|%d,CP] Status=%d-->%d(%s) IwkN26=%d,AsState=%d
Line 765: [D :SM,%d]       <<MM_STATUS_IND>> Status=%d(%s) IwkN26=%d AsState= %d RegType=%d
Line 780: [N :SM,%d]     Update SM Codec: [%s] -> [%s]
Line 825: [D :SM,%d]       Skip smt_ProcessPendingMsg due to pPendingIdList=nullptr
Line 833: [D :SM,%d]       PendingId=%d is invalid. RejectedSize=%d. Skip further indices!!!
Line 836: [D :SM,%d]       PendingId=%d RejectedSize=%d
Line 863: [W :SM,%d]  %%@EM (_delete_arr_) %s=0x%X in %s
Line 863: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 869: [W :SM,%d]  %%@EM (_delete_arr_) %s=0x%X in %s
Line 903: [E :SM,%d]   *** %s ***
Line 911: [N :SM,%d]     AuthType %d 
Line 915: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 922: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 956: [D :SM,%d]       SM task already initialized
Line 972: [D :SM,%d]       <<SMT_MM_INIT_IND>> NrSM : Core init
Line 988: [W :SM,%d]  %%@EM SMT_MM_INIT_IND_Handler //rMsgBody.pCnCommonDb == nullptr
Line 1001: [D :SM,%d]       DB addr 0x%x
Line 1015: [N :SM,%d]     (fn) %s
Line 1017: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 1061: [D :SM,%d]       NAS_TX_MSG_SUCCESS
Line 1071: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 1079: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 1094: [D :SM,%d]       Tcnf start opCode=0x%X sessionId (%d)
Line 1099: [D :SM,%d]       Skip %s due to unexpected opCode=0x%X
Line 1109: [D :SM,%d]       DataCnf Fail %s due to cause=0x%X
Line 1126: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 1156: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 1186: [D :SM,%d]       Tcnf start opCode=0x%X sessionId (%d)
Line 1192: [D :SM,%d]       Skip %s due to unexpected opCode=0x%X
Line 1214: [D :SM,%d]       result_ProcessDataCnfRejCause=%d (%s)
Line 1220: [N :SM,%d]     (fn) %s
Line 1224: [W :SM,%d]  %%@EM NULL : This is temporay session. m_pSession=null
Line 1253: [W :SM,%d]  %%@EM return (void) %s = nullptr in %s
Line 1275: [W :SM,%d]  %%@EM return (void) %s = nullptr in %s
Line 1279: [W :SM,%d]  %%@EM return (void) %s = nullptr in %s
Line 1287: [N :SM,%d]     (fn) smt_ProcessAirMessage : Rqos Setting(%d) State (%s)
Line 1390: [W :SM,%d]  %%@EM Secondary Authentication (request)  SM State (%d)
Line 1406: [W :SM,%d]  %%@EM Don't auth on emergency PDU session so ignore PDU SESSION AUTHENTICATION COMMAND message
Line 1414: [W :SM,%d]  %%@EM Secondary Authentication (response)
Line 1420: [W :SM,%d]  %%@EM PDU Release is in progress, ignore Auth Result from NW
Line 1467: [W :SM,%d]  %%@EM Unknown Air message received
