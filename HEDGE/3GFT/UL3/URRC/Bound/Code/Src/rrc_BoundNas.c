Line 333: Tx-URRC_MM_EST_CNF
Line 341: Tx-URRC_GMM_EST_CNF
Line 349: rrc_BoundNas_SendCsPsEstCnf() Invalid domain
Line 354: rrc_BoundNas_SendCsPsEstCnf()-Msg not allowed payload
Line 388: Tx-URRC_MM_EST_REJ
Line 396: Tx-URRC_GMM_EST_REJ
Line 404: rrc_BoundNas_SendCsPsEstRej() Invalid domain
Line 418: Tx-URRC_MM_EST_REJ
Line 426: Tx-URRC_GMM_EST_REJ
Line 434: rrc_BoundNas_SendCsPsEstRej() Invalid domain
Line 476: Tx-URRC_MM_DATA_IND
Line 495: GmmHdrPtr->GmmPduPtr is NULL 
Line 506: Tx-URRC_GMM_DATA_IND
Line 515: rrc_BoundNas_SendCsPsDataInd()-Invalid domain
Line 522: rrc_BoundNas_SendCsPsDataInd()-Msg should always have a payload
Line 551: Tx-URRC_MM_DATA_CNF
Line 559: Tx-URRC_GMM_DATA_CNF
Line 567: rrc_BoundNas_SendCsPsDataCnf()-Invalid domain
Line 580: Tx-URRC_MM_DATA_CNF
Line 588: Tx-URRC_GMM_DATA_CNF
Line 596: rrc_BoundNas_SendCsPsDataCnf()-Invalid domain
Line 627: No CS domain supported
Line 636: Tx-URRC_GMM_USER_DATA_CNF
Line 644: rrc_BoundNas_SendCsPsUserDataCnf()-Invalid DomainType=%d
Line 651: rrc_BoundNas_SendCsPsUserDataCnf()-Msg must have payload
Line 682: Tx-URRC_MM_PAGE_IND
Line 690: Tx-URRC_GMM_PAGE_IND
Line 698: rrc_BoundNas_SendCsPsPageInd()-Invalid DomainType=%d
Line 705: rrc_BoundNas_SendCsPsPageInd()-Msg must have payload
Line 738: Tx-URRC_MM_ABORT_IND
Line 746: Tx-URRC_GMM_ABORT_IND
Line 754: rrc_BoundNas_SendCsPsAbortInd()-Invalid domain
Line 761: rrc_BoundNas_SendCsPsAbortInd()-Message should always have a payload
Line 795: Tx-URRC_MM_REL_IND
Line 803: Tx-URRC_GMM_REL_IND
Line 811: rrc_BoundNas_SendCsPsRelInd()-Invalid domain
Line 818: rrc_BoundNas_SendCsPsRelInd()-Message should always have a payload
Line 849: Tx-URRC_GMM_CNXREL_IND
Line 858: rrc_BoundNas_SendCnxRelInd()-Message should always have a payload
Line 870: Tx-URRC_GMM_QRB_ABORT_IND
Line 879: rrc_BoundNas_SendQRBAbortInd()-Msg not allowed payload
Line 896: Tx-URRC_MM_LTERAT_INFO_IND
Line 905: rrc_BoundNas_SendLteRatInfoInd()-Message should always have a payload
Line 919: Tx-URRC_MM_HANDOVER_TYPE_IND
Line 928: rrc_BoundNas_SendUrrcMmHandoverTypeInd()-Message should always have a payload
Line 962: Tx-URRC_MM_SYNC_IND
Line 970: rrc_BoundNas_SendCsPsSyncInd()-Invalid domain %d
Line 977: rrc_BoundNas_SendCsPsSyncInd()-Message should always have a payload
Line 1016: URRC_MM_SECURITY_IND follows the forced Est Cnf due to a delayed L2 ACK for IDT
Line 1023: Tx-URRC_MM_SECURITY_IND
Line 1037: URRC_GMM_SECURITY_IND follows the forced Est Cnf due to a delayed L2 ACK for IDT
Line 1044: Tx-URRC_GMM_SECURITY_IND
Line 1053: rrc_BoundNas_SendCsPsSecurityInd()-Invalid domain
Line 1060: rrc_BoundNas_SendCsPsSecurityInd()-Message should always have a payload
Line 1088: Tx-URRC_MM_SECURITY_KEY_INVALID_IND
Line 1096: Tx-URRC_GMM_SECURITY_KEY_INVALID_IND
Line 1104: rrc_BoundNas_SendCsPsSecurityKeyInvalidInd()- Invalid domain
Line 1110: rrc_BoundNas_SendCsPsSecurityKeyInvalidInd()-Message should not have a payload
Line 1140: Tx-URRC_MM_CELL_IND
Line 1149: rrc_BoundNas_SendUrrcCellInd()-Msg not allowed payload
Line 1179: Tx-URRC_MM_NET_SCAN_IND
Line 1188: rrc_BoundNas_SendUrrcNWScanInd()-Msg not allowed payload
Line 1218: Tx-URRC_MM_RRC_STATE_IND
Line 1227: rrc_BoundNas_SendUrrcRrcStateInd()-Msg not allowed payload
Line 1249: Tx-URRC_MM_CIPHER_INTEGRITY_INFO_IND
Line 1258: rrc_BoundNas_SendUrrcMmCipherIntegrityInfoInd()-Msg not allowed payload
Line 1286: Tx-URRC_MM_SCELL_AS_INFO_IND
Line 1295: rrc_BoundNas_SendUrrcMmScellAsInfoInd()-Msg not allowed payload
Line 1325: Tx-URRC_MM_RESEL_TO_EUTRAN_REQ
Line 1334: rrc_BoundNas_SendUrrcCellInd()-Msg not allowed payload
Line 1364: Tx-URRC_MM_REDIRECT_TO_EUTRAN_REQ
Line 1373: rrc_BoundNas_SendUrrcCellInd()-Msg not allowed payload
Line 1409: Tx-URRC_MM_REDIRECT_TO_NR_REQ
Line 1418: rrc_BoundNas_SendUrrcRedirectionToNrReq()-Msg Failed
Line 1452: Tx-URRC_MM_RESEL_TO_NR_REQ
Line 1461: rrc_BoundNas_SendUrrcReselToNrReq()-Msg not allowed payload
Line 1476: Tx-URRC_MM_READY_FOR_NAS_REQUEST_IND
Line 1485: rrc_BoundNas_SendUrrcSuspendCnf()-Msg not allowed payload
Line 1531: Tx-URRC_MM_PLMN_LIST_IND
Line 1540: rrc_BoundNas_SendUrrcMmPlmnListInd()-Message should always have a payload
Line 1569: Tx-URRC_MM_CGI_INFO_IND 
Line 1578: rrc_BoundNas_SendUrrcMmCgiInfoInd()-Message should always have a payload
Line 1613: Tx-URRC_MM_CGI_ACQUISITION_CNF 
Line 1622: rrc_BoundNas_SendUrrcMmCgiAcqCnf()-Message should always have a payload
Line 1657: rrc_BoundNas_SendUrrcMmBackgndPlmnListFailInd()-BodyMsgPtr->UMTS_PLMN_list is NULL
Line 1671: rrc_BoundNas_SendUrrcMmBackgndPlmnListFailInd()-BodyMsgPtr->HedgeCsgListPtr is NULL
Line 1681: Tx-URRC_MM_BACKGND_PLMN_LIST_FAIL_IND
Line 1690: rrc_BoundNas_SendUrrcMmBackgndPlmnListFailInd()-Message should always have a payload
Line 1725: rrc_BoundNas_SendUrrcMmBackgndPlmnListFailInd()-BodyMsgPtr->UMTS_PLMN_list is NULL
Line 1739: rrc_BoundNas_SendUrrcMmBackgndPlmnListFailInd()-BodyMsgPtr->HedgeCsgListPtr is NULL
Line 1749: Tx-URRC_MM_ABORT_BACKGND_PLMN_LIST_CNF
Line 1758: rrc_BoundNas_SendUrrcMmBackgndPlmnListFailInd()-Message should always have a payload
Line 1789: Tx-URRC_MM_INITIAL)PLMN_CNF
Line 1798: rrc_BoundNas_SendUrrcMmPlmnListInd()-Message should always have a payload
Line 1830: Tx-URRC_MM_NO_CELL_IND list size %d
Line 1842: Tx-URRC_MM_NO_CELL_IND
Line 1851: rrc_BoundNas_SendUrrcNoCellInd()-Message should always have a payload
Line 1896: Tx-URRC_MM_PLMN_SEARCH_FAIL_IND
Line 1905: rrc_BoundNas_SendUrrcMmPlmnSearchFailInd()-Message should always have a payload
Line 1937: Tx-URRC_MM_UNIT_DATA_IND
Line 1946: rrc_BoundNas_SendUrrcUnitDataInd()-Message should always have a payload
Line 1975: Tx-URRC_MM_SUSPEND_RAT_CNF
Line 1984: rrc_BoundNas_SendUrrcSuspendCnf()-Msg not allowed payload
Line 2008: Tx-URRC_MM_RESUME_RAT_CNF
Line 2017: rrc_BoundNas_SendResumeRatCnf()-Msg not allowed payload
Line 2049: Tx-URRC_MM_RAT_CHANGE_COMPLETE_IND
Line 2058: rrc_BoundNas_SendUrrcMmRatChangeCompleteInd()-Msg not allowed payload
Line 2082: Tx-URRC_MM_RAT_CHANGE_FAILURE_IND
Line 2091: rrc_BoundNas_SendUrrcMmRatChangeFailureInd()-Msg not allowed payload
Line 2115: Tx-URRC_MM_RAT_RESELECTION_TO_GSM_IND
Line 2124: rrc_BoundNas_SendUrrcMmRatReselectionToGsmInd()-Msg not allowed payload
Line 2136: Tx-URRC_MM_RAT_REDIRECTION_TO_GSM_IND
Line 2145: rrc_BoundNas_SendUrrcMmRatRedirectionToGsmInd()-Msg not allowed payload
Line 2171: Tx-URRC_MM_RAT_HANDOVER_TO_GSM_IND
Line 2180: rrc_BoundNas_SendUrrcMmRatHandoverToGsmInd()-Msg not allowed payload
Line 2208: Tx-URRC_MM_HANDOVER_RAB_IND
Line 2217: rrc_BoundNas_SendUrrcMmHandoverRabInd()-Message should always have a payload
Line 2241: Tx-URRC_MM_RAT_CELL_CHANGE_TO_GSM_IND
Line 2250: rrc_BoundNas_SendUrrcMmRatCellChangeToGsmInd()-Msg not allowed payload
Line 2272: Tx-URRC_MM_INIT_CNF
Line 2282: rrc_BoundNas_SendUrrcMmInitCnf()- unable to send message
Line 2288: rrc_BoundNas_SendUrrcMmInitCnf()-Msg not allowed payload
Line 2307: Tx-URRC_MMI_RXLEV_IND
Line 2334: Tx-URRC_MMI_MRU_RESET_CNF
Line 2363: Tx-URRC_MMI_ASTYPE_IND
Line 2391: Tx-URRC_MMI_SERV_CELLINFO_IND
Line 2421: Tx-URRC_MM_STOP_CNF
Line 2429: rrc_BoundNas_SendUrrcMmInitCnf()-Msg not allowed payload
Line 2469: Tx-URRC_MM_RETRANSMIT_IND
Line 2478: rrc_BoundNas_SendUrrcMmRetransmitInd()-<ilmMsg> is NULL
Line 2509: Tx-URRC_MM_LCS_IND
Line 2518: rrc_BoundNas_SendUrrcMmLbsInd()-Message should always have a payload
Line 2537: Tx-URRC_MM_LCS_FREQ_AID_CNF
Line 2548: rrc_BoundNas_SendLCSFreqAidCnf()-Msg not allowed payload
Line 2575: Tx-URRC_MM_REL_CNF
Line 2585: Tx-URRC_GMM_REL_CNF
Line 2593: rrc_BoundNas_SendCsPsRelCnf() Invalid domain
Line 2598: rrc_BoundNas_SendCsPsRelCnf()-Msg not allowed payload
Line 2622: No CS domain supported
Line 2628: Tx-URRC_GMM_SCR_IND
Line 2636: rrc_BoundNas_SendPsScrInd()-Invalid DomainType=%d
Line 2642: rrc_BoundNas_SendPsScrInd()-Msg not allowed payload
Line 2670: Tx-URRC_MM_HANDOVER_RAB_IND
Line 2679: rrc_BoundNas_SendUrrcMmHandoverRabInd()-Message should always have a payload
Line 2706: Tx-URRC_MM_INTER_RAT_HANDOVER_INFO_CNF
Line 2715: rrc_BoundNas_SendUrrcMmInterRatHandoverInfoCnf()-Message should always have a payload
Line 2742: Tx-URRC_MM_HANDOVER_TO_UTRAN_CNF
Line 2751: rrc_BoundNas_SendUrrcMmHandoverToUtranCnf()-Message should always have a payload
Line 2779: Tx-URRC_MM_UE_CAPA_IND
Line 2788: rrc_BoundNAS_SendUrrcMmUeCapaInfoInd()-Message should always have a payload
Line 2816: Tx-URRC_MM_HANDOVER_FROM_UTRAN_IND
Line 2825: rrc_BoundNas_SendUrrcMmHandoverFromUtranInd()-Message should always have a payload
Line 2850: Tx-URRC_MM_U2L_DEDICATED_PRIORITY_IND
Line 2859: rrc_BoundNas_SendUrrcMmU2LDedPriorityInd()-Message should always have a payload
Line 2874: Tx-URRC_MM_FEMTOCELL_UPD_CNF
Line 2883: rrc_BoundNas_SendUpdateFemtoCellCnf()-Msg not allowed payload
Line 2911: Tx-UrrcMMDrxTimerInd
Line 2920: rrc_BoundNas_SendUrrcCellInd()-Msg not allowed payload
Line 2944: Tx-URRC_MM_BPLMN_STOP_CNF
Line 2953: rrc_BoundNas_SendUrrcMMBplmnStopCnf()-Msg not allowed payload
Line 2977: Tx-URRC_MM_DRX_TIMEOUT_IND
Line 2986: rrc_BoundNas_SendUrrcMMDrxTimeOutInd()-Msg not allowed payload
Line 3010: Tx-URRC_MM_CGI_HOLD_IND
Line 3019: rrc_BoundNas_SendUrrcMMCgiHoldInd()-Msg not allowed payload
Line 3043: Tx-URRC_MM_CGI_STOP_CNF
Line 3052: rrc_BoundNas_SendUrrcMMCgiStopCnf()-Msg not allowed payload
Line 3102: rrc_BoundNas_NasToUrrcMsg()-Unexpected Solicited Msg received=%d 
Line 3109:  rrc_BoundNas_NasToUrrcMsg()  InstanceId = %d, MsgId = %d, FuncPtr = %d
Line 3115: rrc_BoundNas_NasToUrrcMsg()-Unregistred Msg received MsgId=%d
Line 3145: BoundNas - Unable to register MessageId=%d
Line 3172: BoundNas - Unable to de-register MessageId=%d
Line 3178: rrc_BoundUphy - RegistryTablePtr is NULL, MessageId=%d
Line 3190: Tx-URRC_MM_PERIODIC_CSG_REQ
Line 3199: rrc_BoundNas_SendPeriodicCsgReq()-Msg not allowed payload
Line 3232: Tx-URRC_MM_CSG_VISITED_LIST_IND
Line 3241: rrc_BoundNas_SendUrrcMmPlmnListInd()-Message should always have a payload
Line 3272: Tx-URRC_MM_REDIRECTION_STATUS_IND
Line 3281: rrc_BoundNas_SendUrrcRedirectionStatusInd()-Msg must have payload
Line 3305: Tx-URRC_MM_UNRECOVERED_IND
Line 3314: rrc_BoundNas_SendUrrcMmUnrecoveredInd()-Msg not allowed payload
Line 3342: Tx-URRC_MM_SECURITY_ERR_IND
Line 3350: Tx-URRC_GMM_SECURITY_ERR_IND
Line 3358: rrc_BoundNas_SendCsPsSecurityErrorInd()- Invalid domain
Line 3364: rrc_BoundNas_SendCsPsSecurityErrorInd()-Message should not have a payload
Line 3748: rrc_BoundNas_UnboundMsgHandler: Rx -URRC_MM_BPLMN_STOP_REQ; Tx-URRC_MM_BPLMN_STOP_CNF
Line 3754: rrc_BoundNas_UnboundMsgHandler: Rx -URRC_MM_BPLMN_LIST_REQ; Tx-URRC_MM_BACKGND_PLMN_LIST_FAIL_IND
Line 3765: rrc_BoundNas_UnboundMsgHandler: Rx -URRC_MM_ABORT_BACKGND_PLMN_LIST_REQ; Tx-URRC_MM_ABORT_BACKGND_PLMN_LIST_CNF
Line 3772: rrc_BoundNas_UnboundMsgHandler: Rx -URRC_MM_SUSPEND_RAT_REQ; Tx-URRC_MM_SUSPEND_RAT_CNF
Line 3778: rrc_BoundNas_UnboundMsgHandler: Rx -MM_URRC_CGI_STOP_REQ; Tx-URRC_MM_CGI_STOP_CNF
Line 3783: rrc_BoundNas_UnboundMsgHandler: Rx -MsgId(%x); NotHandled
Line 3732: Rx-NAS-MESSAGE_UNKNOWN(%X), %d
Line 3737: RX -Msg: [%s], TransactionId: [%d]
