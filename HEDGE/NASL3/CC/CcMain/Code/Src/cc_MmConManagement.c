Line 127: cc_ProcessSyncIndInRatChangeOngoingState
Line 131: VCG Already Informed (VCG EST REQ Sent)
Line 140: VCG Not Informed Yet (VCG EST REQ Not Sent)...
Line 147: MM Sync IND will be saved and processed after CONN ACK
Line 149: Accept Sync Ind, Inform VCG
Line 162: Data Call, Do not inform VCG
Line 167: VCG Already Informed (VCG EST REQ Sent)
Line 170: Traffic channel assigned..Nothing needs to be done here
Line 172: Only Signalling channel assigned, Wait for traffic channel to Arrive
Line 175: VCG Not Informed Yet (VCG EST REQ Not Sent)...Saving the Message For later
Line 183: MM Sync IND will be saved and processed after CONN ACK
Line 185: Traffic channel assigned..Saving the Message For later
Line 194: CC_SYNC_IND_RESOURCE_MODIFIED is ingored in CC_VCG_CALL_IDLE state
Line 196: Only Signalling channel assigned, Wait for traffic channel to Arrive
Line 280: CallType1			 -> 0x%02X
Line 303: MM Sync IND will be saved and processed after CONN ACK
Line 311: MM Sync IND will be saved and processed after CONN ACK
Line 340: VCG Action Needed But CC State is Incorrect in cc_DecodeMmSyncIndMsg...
Line 351: CallType1            -> 0x%02X
Line 360: No Need to Inform VCG
Line 406: Entering cc_DecodeMmSyncIndMsg....
Line 425: MM Sync IND saved as CC state is CC_CALL_WAIT_MM_SRVCC_CNF
Line 449: MM Sync IND saved for MO call due to Ultra-Flash CSFB
Line 454: Current Rat Mode taken to be -> UMTS in cc_DecodeMmSyncIndMsg...
Line 493: Current Rat Mode taken to be -> GSM in cc_DecodeMmSyncIndMsg...
Line 505: Traffic Channel Assigned in cc_DecodeMmSyncIndMsg...
Line 533: Signalling Channel Assigned in cc_DecodeMmSyncIndMsg...
Line 546: Invalid RAT mode received. So MM_SYNC_IND is not processed
Line 548: RAT Mode is   %d
Line 554: CodecInfoPresent -> %s (Meaningless in GSM)
Line 558: NasSyncInd       -> 0x%02X
Line 560: RabId            -> 0x%02X
Line 570:  Old NasSyncInd       -> 0x%02X
Line 571:  New NasSyncInd       -> 0x%02X
Line 585: SyncInd arrived when No Sessions Active Saving message in cc_DecodeMmSyncIndMsg...
Line 590: SyncInd arrived when No Sessions Active Saving message in cc_DecodeMmSyncIndMsg...
Line 618: Entering cc_ProcessCiqCauseIe
Line 626: Memory Allocation Failed
Line 690: Entering cc_DecodeMmEstErrMsg
Line 697: TransactionId -> %d
Line 716: Save CallDrop: Type=%d, Cause=%d
Line 753: New Redial Code logic implementation 
Line 767: Redialing in MMCC_EST_ERR
Line 787: One Active call present, Auto redial will not be done 
Line 800: Redialing in MMCC_EST_ERR for CSVT
Line 836: over-writting Network cause on MM cause 
Line 867: State Error in cc_DecodeMmEstErrMsg
Line 873: CallSession %d is NOT Active,  in cc_DecodeMmEstErrMsg
Line 884: In cc_DecodeMmEstErrMsg - cc_DecodeMmEstErrMsg been set
Line 888: No Session Found to contain the given TI in cc_DecodeMmEstErrMsg, Message Ignored.
Line 1031: Entering cc_DecodeMmErrIndMsg....
Line 1042: TransactionId -> %d
Line 1055: Save CallDrop: Type=%d, Cause=%d
Line 1073: Discarding Saved MmSyncIndMsg
Line 1092: [OSS]: MPTY active in cc_DecodeMmErrIndMsg
Line 1121: CC_RELEASE_REQUESTED : over-writting Network cause on MM cause
Line 1127: MM cause (%d), Saved NetworkCause (%d)
Line 1138: CC_RELEASE_REQUESTED (EMR call) : CC_REL_IND is sent instead of CC_REJ_IND
Line 1178: CallSession %d is NOT Active,  in cc_DecodeMmErrIndMsg
Line 1187: Requesting MM to Re-Establish the MM Connection in cc_DecodeMmErrIndMsg
Line 1199: Requesting MM Not to Re-Establish the MM Connection in cc_DecodeMmErrIndMsg
Line 1205: Neither Active Nor Establishing Calls are found in cc_DecodeMmErrIndMsg
Line 1212: Save CallDrop: Type=%d, Cause=%d
Line 1244: Displaying Message Contents: %s
Line 1248: CallType -> %d
Line 1249: Priority -> %d
Line 1255: Unable to Allocate Memory to Send %s Message in cc_SendMmEstReqMsg
Line 1278: Displaying Message Contents: %s
Line 1284: Unable to Allocate Memory to Send %s Message in cc_SendMmPromptCnfMsg
Line 1306: Displaying Message Contents: %s
Line 1312: Unable to Allocate Memory to Send %s Message in cc_SendMmPromptRejMsg
Line 1340: Displaying Message Contents: %s
Line 1348: Unable to Allocate Memory to Send %s Message in cc_SendCcEstIndMsg
Line 1369: Displaying Message Contents: %s
Line 1377: Unable to Allocate Memory to Send %s Message in cc_SendCcErrIndMsg
Line 1409: Displaying Message Contents: %s
Line 1413: CallTyp -> %d
Line 1419: Unable to Allocate Memory to Send %s Message in cc_SendMmEstOutReqMsg
Line 1451: Displaying Message Contents: %s
Line 1457: RabId            -> 0x%02X
Line 1458: CodecInfoPresent -> %s
Line 1459: NasSyncInd       -> 0x%02X
Line 1464: Unable to Allocate Memory to Send %s Message in cc_SendCcSyncIndMsg
Line 1491: Displaying Message Contents: %s
Line 1492: Silent CC redial Flag    -> 0x%02X
Line 1498: Unable to Allocate Memory to Send %s Message in cc_SendMmNoRestReqMsg
Line 1526: Displaying Message Contents: %s
Line 1528: NumOfConnectionsToReestablish    -> 0x%02X
Line 1534: Unable to Allocate Memory to Send %s Message in cc_SendMmRestReqMsg
Line 1562: Enteirng cc_DecodeMmRestCnfMsg...
Line 1602: Msg ignored in cc_DecodeMmRestCnfMsg
Line 1609: CallSession %d is NOT Active,  in cc_DecodeMmRestCnfMsg
Line 1629: Entering cc_DecodeMmRestErrMsg..
Line 1673: Msg ignored in cc_DecodeMmRestErrMsg
Line 1679: CallSession %d is NOT Active,  in cc_DecodeMmRestErrMsg
Line 1709: Entering cc_DecodeMmRelIndMsg...
Line 1731: Save CallDrop: Type=%d, Cause=%d
Line 1741: Discarding Saved MmSyncIndMsg
Line 1763: [OSS]: MPTY active in cc_DecodeMmRelIndMsg
Line 1778: Redialing in MMCC_REL_IND
Line 1793: No Actions Taken, CC State is CC NULL, Call Session Number %d
Line 1799: No need to send CC_REJECT_IND(Above layers doesn't have MT call ctxt)
Line 1809: over-writting Network cause on MM cause 
Line 1832: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 1847: CallSession %d is NOT Active,  in cc_DecodeMmRelIndMsg
Line 1882: Displaying Message Contents: %s
Line 1886: CallTyp    -> 0x%02X
Line 1892: Unable to Allocate Memory to Send %s Message in cc_SendMmEstInReqMsg
Line 1908: Entering cc_DecodeMmPromptIndMsg...
Line 1961: Entering cc_DecodeMmRatHandoverIndMsg.....
Line 1966: All Sessions with RabId (0x%02X) To be Retained 
Line 1990: Removing Session(%d) as its RabId (0x%02X) does not Match Requested RabId (0x%02X) to Retain 
Line 2016: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 2023: Maintain Session(%d) as its RabId (0x%02X) match Requested RabId (0x%02X) to Retain 
Line 2027: CallSession(%d) maybe invalid OR This CallSession should not be removed in cc_DecodeMmRatHandoverIndMsg
Line 2051: Setting the RabId of All Voice Call Sessions to 1 in GSM
Line 2062: Informing VCG of the New RAT & RabId
Line 2071: VCG Not Informed Yet (VCG EST REQ Not Sent)... Skip
Line 2076: Setting the RabId of All Data Call Sessions to 1 in GSM
Line 2078: No Need to send Alter Codec since VCG has not been informed yet...
Line 2087: No Session Found with the given Seram Id in cc_DecodeMmRatHandoverIndMsg
Line 2090: Rat Mode change Request not successfull in cc_DecodeMmRatHandoverIndMsg
Line 2117: <<<< ALERTING >>>>
Line 2125: <<<< SETUP >>>>
Line 2133: <<<< CC_EST_CONFIRMED >>>>
Line 2147: <<<< CONNECT >>>>
Line 2159: <<<< CALL_CONFIRMED >>>>
Line 2210: <<<< START_CC >>>>
Line 2218: <<<< CONNECT_ACKNOWLEDGE >>>>
Line 2226: <<<< MODIFY_REJECT >>>>
Line 2238: Invalid MsgType (0x%02X) in cc_DecodeMmRetransmitIndMsg 
Line 2249: <<<< MODIFY >>>>
Line 2258: <<<< HOLD >>>>
Line 2266: <<<< RETRIEVE >>>>
Line 2274: <<<< MODIFY_COMPLETE >>>>
Line 2282: Invalid MsgType (0x%02X) in cc_DecodeMmRetransmitIndMsg 
Line 2303: <<<< DISCONNECT >>>>
Line 2315: <<<< RELEASE_COMPLETE >>>>
Line 2327: <<<< RELEASE >>>>
Line 2341: Invalid MsgType (0x%02X) in cc_DecodeMmRetransmitIndMsg 
Line 2355: <<<< STOP_DTMF >>>>
Line 2363: <<<< START_DTMF >>>>
Line 2373: <<<< FACILITY >>>>
Line 2378: <<<< STATUS >>>>
Line 2390: <<<< NOTIFY >>>>
Line 2400: Invalid MsgType (0x%02X) in cc_DecodeMmRetransmitIndMsg 
Line 2425: MM Requesting CC to re-transmit the given messages in cc_DecodeMmRetransmitIndMsg 
Line 2433: %d Messages to be Re-transmitted by CC
Line 2440: Message (%d) -->  %d bytes
Line 2466: No Session Found to contain the given TI in cc_DecodeMmRetransmitIndMsg, Message Ignored.
Line 2503: Entering cc_DecodeFacilityIndMsg.....
Line 2511: TransactionId -> %d
Line 2534: Saving Facility Ind message ...!!!!
Line 2559: [OSS]: MPTY active in cc_DecodeFacilityIndMsg
Line 2581: [OSS]: Invalid SS TAG, in cc_DecodeFacilityIndMsg
Line 2588: [OSS]: ECT were active in cc_DecodeFacilityIndMsg
Line 2611: [OSS]: Invalid SS TAG, in cc_DecodeFacilityIndMsg
Line 2617: [OSS]: MultiParty &ECT were not active in cc_DecodeFacilityIndMsg
Line 2631: FacilityIe Missing in cc_DecodeFacilityIndMsg
Line 2637: CallSession %d is NOT Active,  in cc_DecodeFacilityIndMsg
Line 2640: No Session Found to contain the given TI in cc_DecodeFacilityIndMsg, Message Ignored.
Line 2660: [OSS]: Entering cc_SendCcNotifySsIndMsg...
Line 2741: SsCode = %d
Line 2742: SsNotification = %d
Line 2746: Unable to Allocate Memory to Send %s Message in cc_SendCcNotifySsIndMsg
Line 2765: Entering cc_DecodeNotifyIndMsg.....
Line 2770: TransactionId -> %d
Line 2790: Message ignored in cc_DecodeNotifyIndMsg
Line 2796: CallSession %d is NOT Active,  in cc_DecodeNotifyIndMsg
Line 2799: Mandatory Element Missing in cc_DecodeNotifyIndMsg
Line 2803: No Session Found to contain the given TI in cc_DecodeNotifyIndMsg, Message Ignored.
Line 2832: Displaying Message Contents: %s
Line 2836: NotificationIndicator    -> 0x%02X
Line 2842: Unable to Allocate Memory to Send %s Message in cc_SendCcNotifyIndMsg
Line 2876: [OSS]: cc_SendFacilityReqMsg: OSS encoded Success
Line 2877: [OSS]: Oss Encoded Msg Dump ->
Line 2908: Unable to Allocate Memory for FacilityEctReqPtr in cc_SendEctFacilityReqMsg
Line 2912: Unable to Allocate Memory for FacilityEctReqPtr in cc_SendEctFacilityReqMsg
Line 2915: [OSS]: cc_SendFacilityReqMsg: OSS encoded Failed
Line 2918: [OSS]: cc_SendFacilityReqMsg: OSS encoded Failed
Line 2932: Entering cc_DecodeUserInformationIndMsg...
Line 2967: <cc_redial> CSFB state = %d
Line 2968: <cc_redial> CC get the LTE RAT_MODE_CHANGE during CSFB!!, ignored..
Line 2972: Moved from HEDGE to LTE..status(%d)
Line 3008: No need to send CC_REJECT_IND(Above layers doesn't have MT call ctxt)
Line 3021: LTE / RAT Change Ended
Line 3024: Clearing any saved SRVCC Call Context.
Line 3060: Discarding Saved MmSyncIndMsg
Line 3118: CallType1            -> 0x%02X
Line 3137: RAT Change Failed, Back in UMTS...
Line 3138: Setting the RabId of All Voice Call Sessions to RabId(%d) in UMTS
Line 3155: Handover Failed and resumed back to 3G, Old Nas SyncInd = %d, New Sync Ind = %d
Line 3161: VCG Not Informed Yet (VCG EST REQ Not Sent)... Skip
Line 3165: Setting the RabId of All Data Call Sessions to RabId(%d) & StreamId (%d) in UMTS
Line 3184: No Voice calls OR Data Calls Active...
Line 3196: RAT Change Failed, Back in GSM...
Line 3197: No need to restore VCG since VCG data was not altered...
Line 3204: RAT Mode -> CC_UMTS_RAT_MODE
Line 3206: RAT Mode -> CC_GSM_RAT_MODE
Line 3227: Entering cc_DecodeMmRatModeChangeIndMsg...
Line 3242: RAT Change in Progress
Line 3247: Mis-match between states !!!!
Line 3256: RAT Change Ended
Line 3262: Mis-match between states !!!!
Line 3268: Invalid Status in cc_DecodeMmRatModeChangeIndMsg!!!!
Line 3293: MMCC_SRVCC_HO_CC_INFO is sent for MO call due to Ultra-Flash CSFB
Line 3296: MMCC_SRVCC_HO_CNF is received in wrong state for MO call due to Ultra-Flash CSFB
Line 3300: MMCC_SRVCC_HO_CC_INFO is sent for MT call due to Ultra-Flash CSFB
Line 3305: MMCC_SRVCC_HO_CNF is received without MM_SYNC_IND
Line 3328: Releasing All the calls...!!!
Line 3335: NumberOfVoiceCalls = > %d
Line 3343: R-SRVCC HO Failed Activate the VCG again...!!!
Line 3350: Vcg Data ......
Line 3351: Rat Mode =%d
Line 3352: VcgRefNumber = %d
Line 3353: RabId = %d
Line 3361: Skip VCG action for MT call
Line 3386: Entering cc_SendMmSrvccHoCallInfoMsg..
Line 3388: CallSessionNumber : %d
Line 3415: Displaying Message Contents: %s
Line 3417: CallTyp  -> %d
Line 3421: Unable to Allocate Memory to Send %s Message in cc_SendMmSrvccHoCallInfoMsg
Line 3478: Displaying Message Contents: %s
Line 3479: Srvcc_Ho_Status -> %d
Line 3483: Unable to Allocate Memory to Send %s Message in cc_DecodeMmSrvccHoCnfMsg
Line 3552: Entering cc_DecodeMmSrvccHoCnfMsg cc_SrvccCallCntxtSetupFinished = %d,Srvcc_Ho_Status = %d
Line 3651: Checking Call Status with Network to sync up, as the cc_IMSConnectStatus is FALSE
Line 3659: Start CC_CONNECT_IND_WAIT_TIMER. StatusEnqCountVariable(%d)
Line 3804: Displaying Message Contents: %s
Line 3812: Unable to Allocate Memory to Send %s Message in cc_SendCcImsInfoIndMsg
Line 3825: Entering cc_DecodeMmSrvccHoIndMsg : HandOverType : %d
Line 3837: Releasing VCG for Default Session
Line 3844: Wrong HO Type..!!!
Line 3967: Current RabId                 -> %d
Line 4073: NORMAL Initialisation <MM Management>
Line 4079: GSM to UMTS Initialisation of <MM Management>
Line 4085: UMTS to GSM Initialisation of <MM Management>
Line 4093: Unknown Initialisation Type (%d) in cc_InitialiseMmConManagement
Line 4128: RAT Mode is  %s
Line 4162: Sync Status -> %s
Line 4170: [SRVCC] Result : %d
Line 4182: [SRVCC] DATA[%d]: Type = %d, State=0x%x, CcTid=0x%x, ImsTid=0x%x
Line 4209: cc_SendConfigurateIratToLteReq
Line 4220: Displaying Message Contents: %s
Line 4226: Unable to Allocate Memory to Send %s Message in cc_SendConfigurateIratToLteReq
Line 4243: Entering cc_SendMmSrvccHoCallInfoMsgforDummy..
Line 4259: Displaying Message Contents: %s
Line 4261: CallTyp  -> %d
Line 4265: Unable to Allocate Memory to Send %s Message in cc_SendMmSrvccHoCallInfoMsgforDummy
Line 4342: Displaying Message Contents: %s
Line 4346: CallTyp    -> 0x%02X
Line 4351: Unable to Allocate Memory to Send %s Message in cc_SendMmReleaseReqMsg
Line 937: Redialing in MMCC_ERR_IND
Line 980: No need to send CC_REJECT_IND(Above layers doesn't have MT call ctxt)
Line 987: over-writting Network cause on MM cause 
