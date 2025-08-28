Line 130: llc_CipherLog[][0].Sapi = %d
Line 205: State for Sapi %d set to %d
Line 233: State for Sapi %d set to %d
Line 237: llc_DeactivateLlc: IsDlDataProcessDuringLLCSuspended(%d) llc_CipheringSuspended(%d)
Line 238: Sapi:%d State:LLE_TLLI_UNASSIGN
Line 488: Tmr Create Failed
Line 579: llc_ActivateAckLle,llc_RlcCurrPos.Sapi = %d; llc_RlcCurrPos.PduSeqNo = %d
Line 747: LlcSapiPtr->URlcQueue Count = %d
Line 776: LlcSapiPtr->UAckPendingQueue Count = %d
Line 856: llc_DeactivateUnackLle, Sapi %d
Line 878:  Resetting llc_PendingRAUComplete
Line 909: LleAckPtr is NULL
Line 913: llc_DeactivateAckLle, Sapi %d
Line 922: LleAckPtr->RlcQueue Count = %d
Line 959: LleAckPtr->AckPendingQueue Count = %d
Line 964: Not freeing llc_RlcCurrPos.PduSeqNo = %d
Line 1003: CurrPosUlIFramePtr is not NULL
Line 1036: llc_RlcCurrPos is reset
Line 1096:  Resetting llc_PendingRAUComplete
Line 1109: free CipherStream 0x%X 
Line 1213: llc_GetUQueue : Queue or Queue->Start is NULL
Line 1218: llc_GetUQueue : Ptr NULL
Line 1222: llc_GetUQueue : Ptr 0x%08X
Line 1263: llc_GetUQueueByCmdType from Q 0x%08X, returns 0x%08X, Start 0x%08X, Last 0x%08X  SeqNo %d, CommandType %02d
Line 1270: Frame %08X, Next %08X, N200 %02d, SeqNo %04d, UFrameType %02d, AckStatus %02d  TimerT200 %3d
Line 1276: llc_GetUQueueByCmdType from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X  CommandType %02d
Line 1348: llc_AddSQueueBySeqNo, Queue 0x%08X, Frame 0x%08X, Start 0x%08X, Last 0x%08x, SeqNo %d
Line 1355:   Start %08X, Last %08X : Frame %08X, Next %08X  Seq %4d  Tim %3d
Line 1394: llc_GetSQueue from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1452: llc_GetUiQueue : Ptr 0x%08X
Line 1456: llc_GetUiQueue : Ptr NULL
Line 1482: llc_GetUiQueueIfCipherNotReq from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1492: llc_GetUiQueueIfCipherNotReq from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1514: llc_GetUiQueueWithCipherStatus %d 
Line 1527: 1. Nu %d found with CipherStatus %d 
Line 1539: 2. Nu %d found with CipherStatus %d 
Line 1546: 3. Nu %d has CipherStatus %d 
Line 1551: 1. Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1555: 2. Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1628:  llc_AddIQueueBySeqNo, Queue 0x%08X, Frame 0x%08X, Start 0x%08X, Last 0x%08x, nS %d
Line 1635:   Start %08X, Last %08X): Frame %08X, Next %08X  nS %4d, Timer %02d
Line 1676: llc_GetIQueue from Q 0x%08X, returns NULL
Line 1681: llc_GetIQueue : Ptr NULL
Line 1685: llc_GetIQueue : Ptr 0x%08X
Line 1712: llc_GetIQueueIfCipherNotReq from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1722: llc_GetIQueueIfCipherNotReq from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1764: [Loop]llc_GetSQueueBySeqNo from 0x%08X, returns 0x%08X, Start 0x%08X, Last 0x&08X  SeqNo %d
Line 1771:  Start %08X, Last %08X : Frame %08X, Next %08X  Seq %4d  Tim %3d
Line 1777: llc_GetSQueueBySeqNo from 0x%08X, returns NULL, Start 0x%08X, Last 0x&08X  SeqNo %d
Line 1818: [LOOP] llc_GetIQueueBySeqNo from Q 0x%08X, returns 0x%08X, Start 0x%08X, Last 0x%08X  nS %d
Line 1825: Start %08X, Last %08X): Frame %08X, Next %08X  nS %4d, Timer %02d
Line 1831: llc_GetIQueueBySeqNo from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X  nS %d
Line 1864: llc_SearchIQueueBySeq LOOP
Line 1939: LOOP llc_AddDlQueueBySeqNo, Queue 0x%08X, Frame 0x%08X, Start 0x%08X, Last 0x%08x, SeqNo %d
Line 1977: llc_GetDlQueue from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1998: Ptr->DeCipherStatus is PDU_CIPHER_PENDING
Line 2046: llc_GetDlQueueBySeqNo from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X, SeqNo %02d
Line 2050: llc_GetDlQueueBySeqNo from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X, SeqNo %02d
Line 2087: llc_GetDlQueueByCipherStream from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X, SeqNo %02d
Line 2091: llc_GetDlQueueByCipherStream from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X, SeqNo %02d
Line 2129: Marking duplicate frame %d
Line 2140: llc_GetUlQueueBySeqNo from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X, nU %02d
Line 2144: llc_GetUlQueueBySeqNo from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X, nU %02d
Line 2201: llc_GetDlQueueIfDeCipherNotReq from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 2211: llc_GetDlQueueIfDeCipherNotReq from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 2292: New TLLI Assigned From GMM:LLC-LLE_ADM
Line 2298: TLLI-Changed:TLLI Old unassigned
Line 2323: TLLI-changed:TLLI Old still valid
Line 2340: TLLI unassigned
Line 2425: llc_FormXidBlock Non-NULL XID parameters %08X
Line 2512: Sapi %d UI Frame->UL CipherQueue
Line 2526: An element is already present in the *start of the free queue
Line 2659: Invalid frameType %d Sapi %d
Line 2663: %d = llc_GetFreeIndexCount( %d, %d )
Line 2700: LLC New Logic hit
Line 2710: LLC Old Logic hit
Line 2727: Kc value :
Line 2780: Invalid TLLI rcvd 0x%02X 0x%02X 0x%02X 0x%02X
Line 2783: Invalid TLLI rcvd, TlliExpctd = 0x%02X 0x%02X 0x%02X 0x%02X
Line 2816: Invalid Sapi(%d)
Line 2985: llc_SetSBitsAndSendFrame(), LLC sending SFrame, SBits 0x%02X Sapi %d, Sequence %d
Line 2990: llc_SetSBitsAndSendFrame No Frame Free Q Full Sapi %d
Line 3215: Invalid Nr %d rcvd, Expected Nr %d
Line 3245: FrameValid=FALSE : LleAckPtr->vR %d, LlcSapiPtr->LleNegXidValues.kD %d, Ns %d
Line 3253: FrameValid=FALSE : LleAckPtr->vR %d, LlcSapiPtr->LleNegXidValues.kD %d, Ns %d
Line 3287: State for Sapi %d set to %d
Line 3301: State for Sapi %d set to %d
Line 3309: State for Sapi %d set to %d
Line 3313: State for Sapi %d set to %d
Line 3366: Invalid mD Field Length %d
Line 3372: mD %d out of range
Line 3383: Invalid mU Field Length %d
Line 3389: mU %d out of range
Line 3400: Invalid kD Field Length %d
Line 3407: kD %d out of range
Line 3418: Invalid kU Field Length %d
Line 3425: kU %d out of range
Line 3440: SNDCP Parameters present for non SNDCP Sapi
Line 3449: Invalid RESET Field Length %d
Line 3459: Reset received not in XID packet
Line 3470: Invalid XID Parameter Type %d received
Line 3500: Invalid Version Field Length %d
Line 3505: Invalid Version %d
Line 3514: Invalid IOV_UI Field Length %d
Line 3523: Invalid IOV_I Field Length %d
Line 3531: IOV_I invalid in XID packet
Line 3545: Invalid T200 Field Length %d
Line 3551: T200 %d out of range
Line 3562: Invalid N200 Field Length %d
Line 3568: N200 %d out of range
Line 3579: Invalid N201U Field Length %d
Line 3585: N201U %d out of range
Line 3596: Invalid N201I Field Length %d
Line 3602: N201I %d out of range
Line 3645: Incorrect XidType Rcvd: %d
Line 3651: Duplicate XidType Rcvd: %d
Line 3673: U FRA HDR LEN(%d) > LEN OF U FRA PDU (%d)!!
Line 3685: Rcvd XID:Sapi %d:len %d:Type %d
Line 3727: U FRA HDR LEN(%d) > LEN OF U FRA PDU (%d)!!
Line 3751: Ver:%d
Line 3759: IOV_UI Old:0x%08X  New:0x%08X
Line 3766: Storing old IOV-UI 0x%08X Current IOV-UI  0x%08X 
Line 3773: IOV_I Old:0x%08X New:0x%08X
Line 3781: T200 Old:%d New:%d
Line 3789: N200 Old:%d New:%d
Line 3798: N201U Old:%d New:%d
Line 3812: N201I Old:%d New:%d
Line 3820: mD Old:%d New:%d
Line 3829: mU Old:%d New:%d
Line 3838: kD Old:%d New:%d
Line 3846: kU Old:%d New:%d
Line 3852: SNDCP Params present,Len:%d
Line 3861: SNDCP Params Malloc fail
Line 3863: SNDCP Params Len set to zero forced
Line 3883: LLC Reset Rcvd
Line 3899: LLC Reset:RLC has SAPI1 PDU:llc_Trig_Ind_Insteadof_Status_Ind is set
Line 3915: Invalid XID Rcvd:Type %d:Length %d
Line 3938: llc_UpdateUFrameBufVar LleUFrameUpinfoPtr is null
Line 3953: NULL FRAME Rcvd:iscellUpdate=FALSE:SeqNoRcvd %d:Sapi %d
Line 3969: SeqNo not matched:SeqNoRcvd %d:SeqNoStrd %d:Sapi %d
Line 4091: llc_SendUFrameToRlc
Line 4119: State for Sapi %d set to %d
Line 4125: UFrame ReTx'ed, Sapi %d, N200 %d, N200Max %d
Line 4131: U Frame(Sapi %d) Invalid ->FreeQ
Line 4192: S Frame(Sapi %d)No ABit->FreeQ
Line 4199: Sapi %d:LLC Suspended
Line 4226: Sapi(%d) not LLC_SAPI_GMM ||LLC: suspend state(%d)
Line 4232: llc_SendUiFrameToRlc: RelClass(%d)
Line 4299: llc_SendIFrameToRlc ( Sapi %d ) can't send. Suspended
Line 4305: llc_SendIFrameToRlc ( Sapi %d ) can't send. LLE_PEER_RECEIVER_BUSY
Line 4380: llc_SendSingleIFrameToRlc( Sapi %d ) can't send  Llc Suspended
Line 4452: FALSE:get_rlc_CheckForFreePDU-Sapi %d
Line 4462: TRUE:get_rlc_CheckForFreePDU-Sapi %d
Line 4649: Malloc failed CipherStream:NULL nS(%d), N200(%d), SnpUlPduLen(%d)
Line 4720: Malloc failed CipherStream:NULL, nS(%d), N200(%d), SnpUlPduLen(%d)
Line 4939: Sapi:TLLI_UNASSIGNED
Line 4940: SeqNo. %d deleted from UL Cipher Queue
Line 4969: PDU size(%d)!=Cipher stream size (%d)
Line 4975: 		CipherStatus(%d) AckStatus(%d) CipherInput(%d)
Line 4979: UI:0x%08X:nU %d:Len %d:Data 0x%08X Ciphered
Line 4993: llc_PendingRAUComplete %d , IsRAUCom_NoExtULTBF %d
Line 4994: Sapi %d , prio %d xidlen %d
Line 4999:  Resetting llc_PendingRAUComplete
Line 5048: DlOCNext %d hold_decipher %d
Line 5050: DlOCCurr = %d  DlOCNext =%d
Line 5065: Deciphering Success with Current Iov UI = 0x%08X in LLMEntity.Iovui
Line 5073: Using Old Iov UI = %d  Pass count =%d
Line 5076: Assigning Old Iov UI = %d  in LLMEntity.Iovui
Line 5085: Assigning Current Iov UI = %d  in LLMEntity.Iovui
Line 5116: hold_decipher set to 1
Line 5133: hold_SeqNo =%d DLOC_attmept= %d DLOC_roll %d DlOCNext %d
Line 5137: PDU size(%d)!=Cipher stream size (%d) 
Line 5156: CRC fails : exceeded DLOC_MAX_RECOVER_ATTEMPTS	IOV_UI : used 0x%08X 
Line 5159: CRC fails : With old IOV_UI  : 0x%08X
Line 5170: CRC fails : TRY with old IOV_UI : 0x%08X
Line 5178: CRC fails : exceeded DLOC_MAX_RECOVER_ATTEMPTS	IOV_UI : used 0x%08X
Line 5181: CRC fails : With old IOV_UI  : 0x%08X
Line 5192: CRC fails : TRY with old IOV_UI : 0x%08X 
Line 5576: L1SM_CipherResponse length %d Data: 
Line 5578: Sapi %d:Sequence %d:Direction %04X:Length %d:Context %08X:CipherStream %08X
Line 5582: CipherComplete: IsDlDataProcessDuringLLCSuspended(%d) llc_CipheringSuspended(%d)
Line 5624: Unexpected Cipher Stream Direction: 0x%04x
Line 5644: llc_DecodeLlcCipherRejectMsg: Sapi %d, Sequence %d, Direction 0x%x, Context %08X, CipherStream %08X
Line 5654: CipherReject: IsDlDataProcessDuringLLCSuspended(%d) llc_CipheringSuspended(%d)
Line 5666: Seq No. %d deleted from DL Cipher Queue
Line 5685: Dir(%d) LleDlUiFramePtr NULL
Line 5707: SAPI1 SeqNo. %d retryCount %d
Line 5722: SeqNo. %d deleted from UL Cipher Queue
Line 5747: Dir(%d) LleUlUiFramePtr NULL
Line 5767: Unexpected Cipher Stream Direction: 0x%04x
Line 5783: CipherResume: IsDlDataProcessDuringLLCSuspended(%d) llc_CipheringSuspended(%d)
Line 5813: CipherResume: LlmEntity.CipherAlgorithm(%d) ... ignoring
Line 5828: SeqNo. %d deleted from UL Cipher Queue
Line 5845: free CipherStream 0x%X 
Line 5855: Resend UL UI CIPH REQ:Sapi %d:Seq %d CipherStatus %d
Line 5925: Duplicate Frame:Nu %3d:Vur %3d:Duplicate mask 0x%08X:offset %3d:SAPI %d
Line 5993: DL(Sapi 1) UI Frame Malloc failed
Line 6012: Malloc failed SmsData:NULL
Line 6032: Malloc failed SnpData:NULL
Line 6079: S Free Q Full:Sapi %d
Line 6117: S Free Q Full:Sapi %d
Line 6153:   llc_DecrementUFrameTimerCtr: Loop found
Line 6160:  Frame %08X, Next %08X, N200 %02d, SeqNo %04d, UFrameType %02d, AckStatus %02d  TimerT200 %3d
Line 6200:   llc_DecrementSFrameTimerCtr: Loop found
Line 6207:   SRlcQueue (%08X, Start %08X, Last %08X): Frame %08X, Next %08X  Seq %4d  Tim %3d
Line 6247:   lllc_DecrementIFrameTimerCtr: Loop found
Line 6254: Start %08X, Last %08X): Frame %08X, Next %08X  nS %4d, Timer %02d
Line 6300:   llc_GetUQueueByTimedOut: Loop found
Line 6307:  Frame %08X, Next %08X, N200 %02d, SeqNo %04d, UFrameType %02d, AckStatus %02d  TimerT200 %3d
Line 6360: S Frame LOOP:Start %08X:Last %08X:Frame %08X:Next %08X:Seq %4d:T200 %3d
Line 6413: I Frame LOOP:Start %08X:Last %08X:Frame %08X:Next %08X:nS %4d:T200 %02d
Line 6458: U free Q Full:Sapi %02d
Line 6524: N200Reached: NO PEER RESP:not sending to SNDCP no L3 XID Param
Line 6540: State for Sapi %d set to %d
Line 6828: CipherRequest: IsDlDataProcessDuringLLCSuspended(%d) llc_CipheringSuspended(%d)
Line 6839: Ciph Algo-%d:Sapi-%d:InputKey-%08X:Dirn-%d:Len-%d
Line 6840: Buffer-%08X:Length-%d:Context-%08X:Seq-%d
Line 6841: Kc value:
Line 6867: llc_SetNumRLCFramesUL : Frame %d
Line 6889: llc_ClearUlCipherQueue - Sapi %d
Line 6933:  invalid Stack ID
Line 6954: Invalid Direction received
Line 5240: LleUlUiFramePtr is NULL
Line 5247: %2d UI UL Frames not on free Queue 0x%08X
Line 5251: LleUnack.UlCipherQueue:Frame %08X:Next %08X:CipherStatus %02d:nU %04d:PduID %02d:UiFrameLength %d
Line 5255: %2d UL UI Frames Missing
Line 5467:  Ciphered I frame received in !ABM, Add to I frame Free Queue:Mode %d 
Line 5495: I frame to be ciphered doesn't exist any more in the buffer/Queue
Line 5295: Using Old IovUI = %d
Line 5300: Using current IovUI = %d
Line 5321: PDU size(%d)!=Cipher stream size (%d) 
Line 5349: [DL CRC Fail] Send STATUS IND to GMM
Line 5360: DL_DATA_IND
Line 5362: L1SM_CipherResponse
Line 5365: [DL CRC Fail ] DLOC_roll(%d) DIOCCurr(%d)  DIOCNext(%d) gStat_llc_Param.Stat_llc_CRCFails (%d)
Line 5398: LleDlUiFramePtr:NULL
Line 5404: %2d UI DL Frames not on free Queue 0x%08X
Line 5407: LleUnack.DlCipherQueue: Frame %08X:Next %08X:DeCipherStatus %02d:SeqNo %04d:DlOCNext %02d:DlPduLength %d
Line 5411: I frame to be Deciphered not any more in Dl buffer
Line 5534: I frame to be Deciphered not any more in Dl buffer
Line 6563: Sapi %02d, %2d U Frames not on free Queue %08X
Line 6572: %2d U Frames Missing for SAPI %d
Line 6596: Sapi %02d, %2d UI UL Frames not on free Queue 0x%08X
Line 6600: 		CipherQueue =>CipherStatus(%d) nU(%d) CipherInput(%d) AckStatus(%d)
Line 6607: %2d UI UL Frames Missing for SAPI %d
Line 6633: Sapi %02d, %2d UI DL Frames not on free Queue 0x%08X
Line 6639: %2d UI DL Frames Missing for SAPI %d
Line 6663: Sapi %02d, %2d S Frames not on free Queue %08X
Line 6672: %2d S Frames Missing for SAPI %d
Line 6732: Sapi %02d, %2d I UL Frames not on free Queue 0x%08X
Line 6744: %2d I UL Frames Missing for SAPI %d
Line 6698: Sapi %02d, %2d I DL Frames not on free Queue 0x%08X
Line 6707: %2d I DL Frames Missing for SAPI %d
