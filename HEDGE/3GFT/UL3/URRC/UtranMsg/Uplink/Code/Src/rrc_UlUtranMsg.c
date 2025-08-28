Line 230: Need to send event amUlResourcesGranted to CS Scnx
Line 247: GenMsg = NULL
Line 282: Terminate MID %d (MsgIndex %d, RachType %d
Line 287: Invalid MID %d [MsgIndex %d MeasType %d]
Line 292: Invalid Meas Status of UlUtranMsg [MsgIndex %d MeasType %d]
Line 298: Invalid MsgIndex of UlUtranMsg [MsgIndex %d UlUtranMsg_p->CnxRequestMsg 0X%x]
Line 452: rrc_UlUtranMsg_GetEncodingLength: Mode not set
Line 538: rrc_UlUtranMsg_GetEncodingLength: rrc_Asn1_GetPredictedLength returned error
Line 1304: [URRC DSDS L2 ACK]: SDU Tx complete received
Line 1370: MapExtMsgIdToIntMsgId: Uplink message RbId not setup
Line 1454: MapExtMsgIdToIntMsgId: Unhandled external message type=%d
Line 1459: Received an unexpected boundary message
Line 1480: setAmMsgParams: Message already set up
Line 1521: Sending DiscardReq as FALSE as MR is being sent 
Line 1531: rrc_UlUtranMsg_setAmMsgParams: UlUtranMsg_p->rlcDataReq.mode.amData is NULL
Line 1556: setUmMsgParams: Message already set up
Line 1586: rrc_UlUtranMsg_setUmMsgParams: UlUtranMsg_p->rlcDataReq.mode.umData is NULL
Line 1608: setUmMsgParams: Message already set up
Line 1617: rrc_UlUtranMsg_setTmMsgParams: UlUtranMsg_p->rlcDataReq.mode.tmData is NULL
Line 1749: Set AllowEarlySelectingCell (%d)
Line 1857: setStartValue: recalculated for class with no override
Line 1869: getMsgSize: called for class with no override
Line 1890: rrc_priv_UlUtranMsg_LogUplinkMsg: Mode not set
Line 3425: TM padding - absent in Sib6 in connected state, getting from Sib5
Line 3436: TM padding - in Idle state, getting from Sib5
Line 3444: TM padding evaluation - Failed to get sib5Inst
Line 3461: TM padding evaluation - Failed to get rrc_SIB5_getChosenPrach
Line 1931: No Rach Report required, Pending state DCH, cancel out RACH meas req
Line 3288: UlUtranMsg_p is NULL in rrc_priv_Rb2ReEstNeededJunctionPoint
Line 2825: rb2ReEst: Initiating ReEstablish of Rb2 - first get CounterChk details
Line 2864: unexpected call to rrc_priv_startValRecalcImpl
Line 2167: UlUtranMsg_p = NULL
Line 2985: asn1Encode: Attempting Encode...
Line 3020: asn1Encode: Mode not set
Line 3027: asn1Encode: allocated asn1_buffer.buffer is NULL
Line 3038: asn1Encode: ASN.1 buffer is NULL
Line 3124: asn1Encode: Failed - pduType=%d
Line 3137: ASN.1 encode failure is detected!!! (2014_0326)
Line 3151: asn1Encode: rbId:%d
Line 3162: asn1Encode: Message successfully encoded into bits:%d
Line 3174: TM padding - absent in Sib6 in connected state, getting from Sib5
Line 3185: TM padding - in Idle state, getting from Sib5
Line 3193: TM padding evaluation - Failed to get sib5Inst
Line 3212: TM padding evaluation - Failed to get rrc_SIB5_getChosenPrach
Line 3220: Apply TM padding of bits:%d
Line 3221: MsgSize before padding:%d
Line 3235: TM MAC pad error - invalid numPadBits:%d
Line 3245: TM MAC pad error - invalid padResult:%d
Line 3254: asn1Encode: Message successfully encoded into bytes:%d
Line 3267: ciqSendMetricGS35
Line 3268: ucChannel = %d
Line 3269: ucRrcMessageType = %d
Line 3270: ucRrcTransactionId = %d
Line 3271: ucNasProtocolDiscriminator = %d
Line 3272: ucNasTransactionId = %d
Line 765: rrc_priv_UlUtranMsg_LogUplinkMsg: Mode not set
Line 787: Tx-ASN__CELL_UPDATE %d
Line 790: Tx-ASN__CELL_UPDATE with RL FAILURE %d
Line 795: Tx-ASN__CELL_UPDATE with RLC Unrecoverable error %d
Line 803: Tx-ASN__RRC_CONNECTION_REQUEST %d
Line 809: Tx-ASN__URA_UPDATE %d
Line 815: Tx-ASN__UL__CCCH__MESSAGE_TYPE__SPARE
Line 821: rrc_priv_UlUtranMsg_LogUplinkMsg: invalid CCCH choice
Line 865: Tx-ASN__ACTIVE_SET_UPDATE_COMPLETE %d
Line 872: Tx-ASN__ACTIVE_SET_UPDATE_FAILURE %d
Line 879: Tx-ASN__CELL_CHANGE_ORDER_FROM_UTRAN_FAILURE %d
Line 885: Tx-ASN__COUNTER_CHECK_RESPONSE %d
Line 892: Tx-ASN__HANDOVER_TO_UTRAN_COMPLETE %d
Line 898: Tx-ASN__INITIAL_DIRECT_TRANSFER %d
Line 908: Tx-ASN__HANDOVER_FROM_UTRAN_FAILURE %d
Line 915: Tx-ASN__MEASUREMENT_CONTROL_FAILURE %d
Line 936: Tx-ASN__MEASUREMENT_REPORT (Event1a, MID = %i)
Line 939: Tx-ASN__MEASUREMENT_REPORT (Event1b, MID = %i)
Line 942: Tx-ASN__MEASUREMENT_REPORT (Event1c, MID = %i)
Line 945: Tx-ASN__MEASUREMENT_REPORT (Event1d, MID = %i)
Line 948: Tx-ASN__MEASUREMENT_REPORT (Event1e, MID = %i)
Line 951: Tx-ASN__MEASUREMENT_REPORT (Event1f, MID = %i)
Line 954: Tx-ASN__MEASUREMENT_REPORT (Event1g, MID = %i)
Line 957: Tx-ASN__MEASUREMENT_REPORT (Event1h, MID = %i)
Line 958: Tx-ASN__MEASUREMENT_REPORT (Event1h, MID = %i)
Line 961: Tx-ASN__MEASUREMENT_REPORT (Event1i, MID = %i)
Line 964: Tx-ASN__MEASUREMENT_REPORT (Event1j, MID = %i)
Line 967: Tx-ASN__MEASUREMENT_REPORT (Undefined IntraF event, MID = %i)
Line 974: Tx-ASN__MEASUREMENT_REPORT (Event2a, MID = %i)
Line 977: Tx-ASN__MEASUREMENT_REPORT (Event2b, MID = %i)
Line 980: Tx-ASN__MEASUREMENT_REPORT (Event2c, MID = %i)
Line 983: Tx-ASN__MEASUREMENT_REPORT (Event2d, MID = %i)
Line 986: Tx-ASN__MEASUREMENT_REPORT (Event2e, MID = %i)
Line 989: Tx-ASN__MEASUREMENT_REPORT (Event2f, MID = %i)
Line 992: Tx-ASN__MEASUREMENT_REPORT (Undefined InterF event, MID = %i)
Line 999: Tx-ASN__MEASUREMENT_REPORT (Event3a, MID = %i)
Line 1002: Tx-ASN__MEASUREMENT_REPORT (Event3b, MID = %i)
Line 1005: Tx-ASN__MEASUREMENT_REPORT (Event3c, MID = %i)
Line 1008: Tx-ASN__MEASUREMENT_REPORT (Event3d, MID = %i)
Line 1011: Tx-ASN__MEASUREMENT_REPORT (Undefined InterR event, MID = %i)
Line 1018: Tx-ASN__MEASUREMENT_REPORT (Event4a, MID = %i)
Line 1021: Tx-ASN__MEASUREMENT_REPORT (Event4b, MID = %i)
Line 1024: Tx-ASN__MEASUREMENT_REPORT (Undefined TrafficVol event, MID = %i)
Line 1028: Tx-ASN__MEASUREMENT_REPORT (Event5A, MID = %i)
Line 1029: Tx-ASN__MEASUREMENT_REPORT (Event5A, MID = %i)
Line 1035: Tx-ASN__MEASUREMENT_REPORT (Event6a, MID = %i)
Line 1038: Tx-ASN__MEASUREMENT_REPORT (Event6b, MID = %i)
Line 1041: Tx-ASN__MEASUREMENT_REPORT (Event6c, MID = %i)
Line 1044: Tx-ASN__MEASUREMENT_REPORT (Event6d, MID = %i)
Line 1047: Tx-ASN__MEASUREMENT_REPORT (Event6e, MID = %i)
Line 1050: Tx-ASN__MEASUREMENT_REPORT (Event6f, MID = %i)
Line 1053: Tx-ASN__MEASUREMENT_REPORT (Event6g, MID = %i)
Line 1056: Tx-ASN__MEASUREMENT_REPORT (Undefined UE Internal event, MID = %i)
Line 1063: Tx-ASN__MEASUREMENT_REPORT (Event7a, MID = %i)
Line 1066: Tx-ASN__MEASUREMENT_REPORT (Event7b, MID = %i)
Line 1069: Tx-ASN__MEASUREMENT_REPORT (Event7c, MID = %i)
Line 1072: Tx-ASN__MEASUREMENT_REPORT (Undefined UE positioning event, MID = %i)
Line 1077: Tx-ASN__MEASUREMENT_REPORT (Undefined event!, MID = %i)
Line 1083: Tx-ASN__MEASUREMENT_REPORT (Periodic report, MID = %i)
Line 1089: Tx-ASN__PHYSICAL_CHANNEL_RECONFIGURATION_COMPLETE %d
Line 1096: Tx-ASN__PHYSICAL_CHANNEL_RECONFIGURATION_FAILURE %d
Line 1103: Tx-ASN__RADIO_BEARER_RECONFIGURATION_COMPLETE %d
Line 1110: Tx-ASN__RADIO_BEARER_RECONFIGURATION_FAILURE %d
Line 1117: Tx-ASN__RADIO_BEARER_RELEASE_COMPLETE %d
Line 1125: Tx-ASN__RADIO_BEARER_RELEASE_FAILURE %d
Line 1129: rrc_priv_UlUtranMsg_LogUplinkMsg 
Line 1134: Tx-ASN__RADIO_BEARER_SETUP_COMPLETE %d
Line 1141: Tx-ASN_ RADIO_BEARER_SETUP_FAILURE %d
Line 1146: rrc_priv_UlUtranMsg_LogUplinkMsg 
Line 1151: Tx-ASN__RRC_CONNECTION_RELEASE_COMPLETE %d
Line 1155: rrc_priv_UlUtranMsg_LogUplinkMsg 
Line 1169: Tx-ASN__RRC_CONNECTION_SETUP_COMPLETE %d
Line 1173: rrc_priv_UlUtranMsg_LogUplinkMsg 
Line 1179: Tx-ASN__RRC_STATUS %d
Line 1186: Tx-ASN__SECURITY_MODE_COMPLETE %d
Line 1193: Tx-ASN__SECURITY_MODE_FAILURE %d
Line 1200: Tx-ASN__SIGNALLING_CONNECTION_RELEASE_INDICATION %d
Line 1206: Tx-ASN__TRANSPORT_CHANNEL_RECONFIGURATION_COMPLETE %d
Line 1213: Tx-ASN__TRANSPORT_CHANNEL_RECONFIGURATION_FAILURE %d
Line 1220: Tx-ASN__TRANSPORT_FORMAT_COMBINATION_CONTROL_FAILURE %d
Line 1227: Tx-ASN__UE_CAPABILITY_INFORMATION %d
Line 1234: Tx-ASN__UPLINK_DIRECT_TRANSFER %d
Line 1244: Tx-ASN__UTRAN_MOBILITY_INFORMATION_CONFIRM %d
Line 1251: Tx-ASN__UTRAN_MOBILITY_INFORMATION_FAILURE %d
Line 1258: Tx-ASN__UL__DCCH__MESSAGE_TYPE__SPARE_2
Line 1264: Tx-ASN__UL__DCCH__MESSAGE_TYPE__SPARE_1
Line 1270: rrc_priv_UlUtranMsg_LogUplinkMsg: invalid DCCH choice
Line 722: value = %d  
Line 732: NasTransactionId [%d],NasProtocolDiscriminator [%d],NasMessageType [%d]  
Line 559: rrc_priv_UlUtranMsg_LogUplinkMsg: Mode not set
Line 570: TxErr-ASN__CELL_UPDATE
Line 573: TxErr-ASN__RRC_CONNECTION_REQUEST
Line 576: TxErr-ASN__URA_UPDATE
Line 579: TxErr-ASN__UL__CCCH__MESSAGE_TYPE__SPARE
Line 582: rrc_priv_UlUtranMsg_LogUplinkMsg: invalid CCCH choice
Line 593: TxErr-ASN__ACTIVE_SET_UPDATE_COMPLETE
Line 596: TxErr-ASN__ACTIVE_SET_UPDATE_FAILURE
Line 599: TxErr-ASN__CELL_CHANGE_ORDER_FROM_UTRAN_FAILURE
Line 602: TxErr-ASN__COUNTER_CHECK_RESPONSE
Line 605: TxErr-ASN__HANDOVER_TO_UTRAN_COMPLETE
Line 608: TxErr-ASN__INITIAL_DIRECT_TRANSFER
Line 611: TxErr-ASN__HANDOVER_FROM_UTRAN_FAILURE
Line 614: TxErr-ASN__MEASUREMENT_CONTROL_FAILURE
Line 617: TxErr-ASN__MEASUREMENT_REPORT
Line 620: TxErr-ASN__PHYSICAL_CHANNEL_RECONFIGURATION_COMPLETE
Line 623: TxErr-ASN__PHYSICAL_CHANNEL_RECONFIGURATION_FAILURE
Line 626: TxErr-ASN__RADIO_BEARER_RECONFIGURATION_COMPLETE
Line 629: TxErr-ASN__RADIO_BEARER_RECONFIGURATION_FAILURE
Line 632: TxErr-ASN__RADIO_BEARER_RELEASE_COMPLETE
Line 635: TxErr-ASN__RADIO_BEARER_RELEASE_FAILURE
Line 638: TxErr-ASN__RADIO_BEARER_SETUP_COMPLETE
Line 641: TxErr-ASN_ RADIO_BEARER_SETUP_FAILURE
Line 644: TxErr-ASN__RRC_CONNECTION_RELEASE_COMPLETE
Line 647: TxErr-ASN__RRC_CONNECTION_SETUP_COMPLETE
Line 650: TxErr-ASN__RRC_STATUS
Line 653: TxErr-ASN__SECURITY_MODE_COMPLETE
Line 656: TxErr-ASN__SECURITY_MODE_FAILURE
Line 659: TxErr-ASN__SIGNALLING_CONNECTION_RELEASE_INDICATION
Line 662: TxErr-ASN__TRANSPORT_CHANNEL_RECONFIGURATION_COMPLETE
Line 665: TxErr-ASN__TRANSPORT_CHANNEL_RECONFIGURATION_FAILURE
Line 668: TxErr-ASN__TRANSPORT_FORMAT_COMBINATION_CONTROL_FAILURE
Line 671: TxErr-ASN__UE_CAPABILITY_INFORMATION
Line 674: TxErr-ASN__UPLINK_DIRECT_TRANSFER
Line 677: TxErr-ASN__UTRAN_MOBILITY_INFORMATION_CONFIRM
Line 680: TxErr-ASN__UTRAN_MOBILITY_INFORMATION_FAILURE
Line 683: TxErr-ASN__UL__DCCH__MESSAGE_TYPE__SPARE_2
Line 686: TxErr-ASN__UL__DCCH__MESSAGE_TYPE__SPARE_1
Line 689: rrc_priv_UlUtranMsg_LogUplinkMsg: invalid DCCH choice
Line 2935: Security subsystem has no Integrity instance
Line 2944: Security subsystem has no Integrity instance
Line 2951: integrityAddImpl: Error
Line 2690: Private information was detected
Line 2696: Removing Personal information For UlMsg failed
Line 2746: Send: Aborted: Request not initialised
Line 2802: Count-I value rollbacked COUNT-I : %x
Line 2808: Send: dlIntProtInst = NULL
Line 2813: Send: integrityMgrInst = NULL
Line 2005: Failed to get rb2 reestablished (cntr)
Line 2034: self s NULL in waitForCntrChkResp_RecvCntrChkFailure
Line 2052: UlUtranMsg_p = NULL
Line 2122: Failed to get rb2 reestablished.
Line 2150: self s NULL in waitForRb2EstResp_RecvReEstRb2Failure
Line 2234: Failed to get start value
Line 2262: self s NULL in waitForStartValue_NewStartValueFailure
Line 2298: Failed to do integrity
Line 2329: self s NULL in waitForIntegrity_IntegrityFailure
Line 2408: waitForAckNack_RecvL2Ack - delete the object locally 
Line 2434: waitForAckNack_RecvL2Ack - delete the object locally 
Line 2440: self s NULL in waitForAckNack_RecvL2Ack
Line 2458: L2NACK
Line 2468: Pending RABMAS_RAB_ACTIVATE_IND is sending
Line 2504: waitForAckNack_RecvL2Nack - delete the object locally 
Line 2543: self s NULL in waitForAckNack_RecvL2Nack
Line 2589: client or clientGenFn is NULL
