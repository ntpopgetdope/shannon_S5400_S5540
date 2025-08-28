Line 97: Entering cc_DecodeCcDisconnectReqMsg....[24.008]-5.4.3
Line 114: TransactionId -> %d
Line 117: User triggers disconnection. CallDropType should be reset(old value Type=%d, Cause=%d
Line 365: Disc Req  Received in CC_RELEASE_REQUESTED...!!!
Line 372: Disc Req  Received in CC_DISCON_REQUESTED...!!!
Line 380: Message not expectecd in cc_DecodeCcDisconnectReqMsg. Send Response to upper layers for state Sync
Line 390: CallSession %d is NOT Active in cc_DecodeCcDisconnectReqMsg. Response to Upper layers for state Sync.
Line 399: DataPresent (Must be TRUE) -> %s
Line 405: No Session Found to contain the given TI in cc_DecodeCcDisconnectReqMsg, Response to upper layer for state Sync.
Line 411: Dummy CallSessionNumber in cc_DecodeCcDisconnectReqMsg -> %d
Line 498: Unable to Allocate Memory to Send %s Message in cc_SendDisconnectReqMsg
Line 545: Unable to Allocate Memory for FacilityForwardCugInfoPtr in cc_SendSetupReqMsg
Line 550: [OSS]: Oss Encoding Failed
Line 555: [OSS]: Oss Encoding Failed
Line 586: Entering cc_DecodeReleaseIndMsg....[24.008]-5.4.3
Line 594: TransactionId -> %d
Line 627: ERROR: CauseIePtrLen (%d)is greater than CC_CAUSE_LEN
Line 636: CauseIe not available in cc_DecodeRelCompleteIndMsg, Fetched from Disconnect_Ind message
Line 640: ERROR: CauseIePtrLen (%d)is greater than CC_CAUSE_LEN
Line 668: FacilityIe not available in cc_DecodeReleaseIndMsg
Line 674: CallSession %d is NOT Active Send ReleaseComplete in cc_DecodeReleaseIndMsg
Line 692: [OSS]: MPTY active in cc_DecodeReleaseIndMsg
Line 828: Unable to Allocate Memory to Send %s Message in cc_SendReleaseCompleteReqMsg
Line 854: Unable to Find CallSession %d in cc_SendCcReleaseIndMsg
Line 862: 2nd release_ind for session %d is discared in cc_SendCcReleaseIndMsg
Line 879: This call is rejected so stop retry timer if it is running. 
Line 949: Unexpected SS code -> 0x%x
Line 955: Displaying Message Contents: %s
Line 959: Cause.DataPresent  -> %s
Line 967: CcbsRsp.DataPresent  -> %s
Line 968: CcbsRsp.CcbsIndex                -> %d
Line 969: CcbsRsp.Result                   -> %d
Line 970: CcbsRsp.ErrorCode                -> %d
Line 971: CcbsRsp.BasicServiceCode         -> %d
Line 975: CcbsRsp.CalledPartyNumberLength  -> %d
Line 976: CcbsRsp.CalledPartyNumberPtr  -> 
Line 981: CcbsRsp.CalledPartyNumberLength  -> %d
Line 987: CcbsRsp.DataPresent  -> %s
Line 990: CallBarringInd.DataPresent -> %s
Line 1001: Unable to Allocate Memory to Send %s Message in cc_SendCcReleaseIndMsg
Line 1035: Entering cc_DecodeDisconnectIndMsg....[24.008]-5.4.3
Line 1043: TransactionId -> %d
Line 1082: CauseIe not available in cc_DecodeDisconnectIndMsg
Line 1111: ERROR: CauseIePtrLen (%d)is greater than CC_CAUSE_LEN
Line 1136: CcbsActionsIe = %d 
Line 1145: CC_CCBS_ACTION_POSSIBLE
Line 1152: CcbsActionsIe not available in cc_DecodeDisconnectIndMsg
Line 1158: CallSession %d is NOT Active Send ReleaseComplete in cc_DecodeDisconnectIndMsg
Line 1177: [OSS]: MPTY active in cc_DecodeDisconnectIndMsg
Line 1290: Unable to Allocate Memory for FacilityForwardCugInfoPtr in cc_SendSetupReqMsg
Line 1295: [OSS]: Failed to encode Facility IE message
Line 1300: [OSS]: Failed to encode Facility IE message
Line 1322: Unable to Allocate Memory to Send %s Message in cc_SendReleaseReqMsg
Line 1353: Entering cc_DecodeCcRelReqMsg [24.008]-5.4.4.2.2.1 
Line 1373: TransactionId -> %d
Line 1547: CC_RELEASE_REQUESTED: Message ignored in cc_DecodeCcRelReqMsg
Line 1553: Message ignored in cc_DecodeCcRelReqMsg
Line 1560: CallSession %d is NOT Active in cc_DecodeCcRelReqMsg
Line 1566: No Session Found to contain the given TI in cc_DecodeCcRelReqMsg, Message Ignored.
Line 1608: Entering cc_DecodeRelCompleteIndMsg
Line 1628: TransactionId -> %d
Line 1633: No Session Found to contain the given TI in cc_DecodeRelCompleteIndMsg, Message Ignored.
Line 1667: Memory Allocation Failed
Line 1677: CauseIe not available in cc_DecodeRelCompleteIndMsg, Fetched from Disconnect_Ind message
Line 1724: [OSS]: Oss Decoding got Failed
Line 1730: FacilityIe not available in cc_DecodeRelCompleteIndMsg
Line 1736: CallSession %d is NOT Active, in cc_DecodeRelCompleteIndMsg
Line 1742: [OSS]: MPTY active in cc_DecodeRelCompleteIndMsg
Line 1759: Ignoring cc_DecodeRelCompleteIndMsg received in CC_MM_CON_PEND_WAIT_MM_CMRQ or CC_MM_CONNECTION_PENDING state
Line 1776: DecodeRelCompleteIndMsg in CallState : %s
Line 1835: Unable to Allocate Memory for ProgressIndicator in  %s Message in cc_SendCcDisconnectIndMsg
Line 1972: Displaying Message Contents: %s
Line 1978: Cause.DataPresent  -> %s
Line 1980: Cause.CallDropCause  -> %d
Line 1982: Cause.CallDropType  -> %d
Line 1989: CallBarringInd.DataPresent -> %s
Line 1996: CcbsPossibleInd.DataPresent -> %s
Line 2006: Unable to Allocate Memory to Send %s Message in cc_SendCcDisconnectIndMsg
Line 2044: This call is rejected so stop retry timer if it is running. 
Line 2082: Displaying Message Contents: %s
Line 2087: Cause.DataPresent  -> %s
Line 2099: Unable to Allocate Memory to Send %s Message in cc_SendCcRejectIndMsg
Line 2180: CC Cause Location -> %s
Line 2363: CC Cause  -> %s  0x%x
Line 2457: CC Cause Diagnostics -> %s
Line 2473: NORMAL Initialisation of <Call Clear Management>
Line 2479: GSM to UMTS Initialisation of <Call Clear Management>
Line 2485: UMTS to GSM Initialisation of <Call Clear Management>
Line 2493: Unknown Initialisation Type (%d) in cc_InitialiseCallClear
Line 2544: Unable to Allocate Memory to Send %s Message in cc_SendCcReleaseIndMsg
Line 2582: Function - cc_DecodeCcStopNetworkReq  Active call clearing as a result of Flight mode ON
Line 2627: New CallSessionNumber %d
Line 2638: [OSS]: MPTY active in cc_DecodeCcStopNetworkReq
Line 2655: StopNetworkReq received in CC_NULL state after SETUP REQ is received, sending REL_IND to upper layers
Line 2661: StopNetworkReq received in CC_NULL state
Line 2687:  STOP Network due to SIM error or Power down
Line 2723: STOP Network due to SIM error or Power down
Line 2737: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 2749: Message not expectecd or ignored in cc_DecodeCcStopNetworkReq
Line 2757: CallSession %d is NOT Active,  in cc_DecodeCcStopNetworkReq
Line 2765: Rejecting User's Call Clear Req in cc_DecodeCcStopNetworkReq ! RAT Change in progress !!
Line 2973: RegVal l=%d, cc_CallDiscInMoCallProcState = %d
Line 3128: No Session Found to contain the given TI, send RELEASE COMPLETE to network
Line 3134: Dummy CallSessionNumber -> %d
Line 3142: No Unassigned Session Found
Line 3168: Don't Release VCG: Number of call sessions = %d
Line 3258: Retrying call establishment
Line 3279: Performing normal call clearing, and Auto Re-Dial may be aborted 
Line 3280: due to either AP triggered Call clearing or NW cause may not be matched to Auto redial cause list or Num of auto-redial attempts >1
Line 3336: Ect not Active in cc_DecodeReleaseIndMsg
Line 3341: Releasing Data Call Type in cc_DecodeReleaseIndMsg
Line 3363: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 3382: Detected a Collision. Network releasing a Call at the same time as User in cc_DecodeReleaseIndMsg
Line 3399: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 3455: Reset MPTY state session No.%d State %d
Line 3483: ProgressIndicatorIe not available in cc_DecodeDisconnectIndMsg
Line 3505: [OSS]:  OSS Decodign Failed
Line 3510: FacilityIe not available in cc_DecodeDisconnectIndMsg
Line 3532: MO call establishment fail because of Network Issue: UE will try Redial without notifying to User
Line 3550: No need to send CC_DISCONNECT_IND(Above layers doesn't have MT call ctxt)
Line 3559: Preparing for Redialing
Line 3758: Ect not Active in cc_DecodeRelCompleteIndMsg
Line 3763: Releasing Data Call Type in cc_DecodeRelCompleteIndMsg
Line 3791: Retrying call establishment
Line 3812: Performing normal call clearing, and Auto Re-Dial may be aborted 
Line 3813: due to either AP triggered Call clearing or NW cause may not be matched to Auto redial cause list or Num of auto-redial attempts >1
Line 3822: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 3853: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 3871: Configure CallDrop. Saved: Type=%d, Cause=%d, Recv: Type=%d, Cause=%d
Line 3874: REESTABLISHMENT fail=%d
Line 3942: Unable to Allocate Memory for CalledPartyNumberPtr in %s Message in cc_SendCcReleaseIndMsg
Line 3967: Unable to Allocate Memory for CalledPartySubAddPtr in %s Message in cc_SendCcReleaseIndMsg
