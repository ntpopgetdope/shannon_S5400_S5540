Line 98: %s in cc_DecodeVcgCallEstablishCnfMsg
Line 100: CallSessionNumber = %d in cc_DecodeVcgCallEstablishCnfMsg
Line 104: TransactionId -> %d
Line 196: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 205: Status : VCG_CALL_REQ_INVALID - cc_DecodeVcgCallEstablishCnfMsg...
Line 206: Releasing VCG - cc_DecodeVcgCallEstablishCnfMsg...
Line 227: VCG_CALLESTABLISH_REQ not sent - cc_DecodeVcgCallEstablishCnfMsg...
Line 228: Releasing VCG - cc_DecodeVcgCallEstablishCnfMsg...
Line 233: Duplicated VCG_CALLESTABLISH_CNF is ignored - cc_DecodeVcgCallEstablishCnfMsg...
Line 275: Entering cc_DecodeVcgAlterCodecCnfMsg
Line 277: VcgRefNumber = %d in cc_DecodeVcgAlterCodecCnfMsg
Line 327: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 354: VCG_ALTERCODEC_REQ not Send - cc_DecodeVcgAlterCodecCnfMsg...
Line 374: Entering cc_SendVcgCallEstablishReqMsg
Line 403: Displaying Vcg Call Estb Req Message Contents: %s
Line 405: VcgRefNumber            -> %d
Line 406: NasSyncInd              -> 0x%02X
Line 407: RabId                   -> 0x%02X
Line 408: VcgRatMode              -> 0x%02X
Line 409: CC_Stack No             -> 0x%02X
Line 416: Unable to Allocate Memory to Send %s Message in cc_SendVcgCallEstablishReqMsg
Line 436: Entering cc_SendVcgCallActivateIndMsg
Line 452: Displaying VCG Call Activate Ind Message Contents: %s
Line 454: VcgRefNumber -> %d
Line 455: CC Stack No. -> %d
Line 475: Entering cc_SendVcgCallReleaseReqMsg - Releasing VCG
Line 486: Clearing All Global VCG Data 
Line 495: CC Stack No. %d 
Line 516: Entering cc_SendVcgAlterCodecReqMsg
Line 544: Displaying VCG Alter Codec Req Message Contents: %s
Line 546: VcgRefNumber            -> %d
Line 547: NasSyncInd              -> 0x%02X
Line 548: RabId                   -> 0x%02X
Line 549: VcgRatMode              -> 0x%02X
Line 550: CC Stack No             -> 0x%02X
Line 557: Unable to Allocate Memory to Send %s Message in cc_SendVcgAlterCodecReqMsg
Line 574: Entering cc_DecodeVcgCallReleaseIndMsg
Line 582: There is no VCG context. No Action
Line 600: Entering cc_DetermineVcgAction
Line 602: VcgRefNumber -> %d
Line 604: RabId -> %d
Line 613: RatMode -> CC_UMTS_RAT_MODE
Line 629: SyncInd Status -> ASSIGNED
Line 645: SyncInd Status -> ALTERED
Line 653: Duplicated VCG_ALTERCODEC_REQ is not sent
Line 657: VCG_ALTERCODEC_REQ is not sent before VCG_CALLACTIVATE_IND
Line 679: RatMode -> CC_GSM_RAT_MODE
Line 695: SyncInd Status -> ASSIGNED
Line 705: SyncInd Status -> ALTERED
Line 713: Duplicated VCG_ALTERCODEC_REQ is not sent
Line 717: VCG_ALTERCODEC_REQ is not sent before VCG_CALLACTIVATE_IND
Line 738: RatMode -> Unexpected RAT mode
Line 763: cc_DetermineSrvccVcgActivateAction State = %d,RsrvccHoFail =%d
Line 913: VCG Status Response -> %s
Line 981: NORMAL Initialisation of <VCG Management> stack  %d
Line 991: GSM to UMTS Initialisation of <VCG Management>
Line 997: UMTS to GSM Initialisation of <VCG Management>
Line 1005: Unknown Initialisation Type (%d) in cc_InitialiseVcgManagement
Line 1020: Deleting VCG Flags in cc_ResetVcgData
Line 1029: Calling vcg_RemoveCall(%d)
