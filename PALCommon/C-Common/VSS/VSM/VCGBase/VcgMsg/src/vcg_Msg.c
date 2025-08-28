Line 225: VSS voice link down(%d)
Line 233: VSS voice linkup (linkReqCnt:%d) (linksteadstate:0x%d)
Line 592: [VLT] EstablishCall(LRT)
Line 609: [VLT] ReleaseCall(LRT)
Line 698: GetCodecInfo from SRM(%d,%d)
Line 708: vcg_VCEUlCodecModeInd: total UL codecmode:%d, dtx:%d
Line 827: ReleaseCall
Line 830: Voice Call(id:%d) not exists
Line 890: vcg_RemoveCall Successed: StackNo(%d)
Line 894: vcg_RemoveCall Discard: ActiveStack(%d) != RemoveStack(%d)
Line 895: CallRoot: CallID(%d), CodecType(%x)
Line 896: CallRoot: execMode(%d), RATType(%d)
Line 897: CallRoot: StackNo(%d), State(%d)
Line 930: ActivateCall
Line 935: Error!!! [VcgCall is NULL]
Line 941: RATType: %d->%d
Line 942: CodecType: %d->%d
Line 970:  SRVCC progress
Line 1285: [RabmDataInd] Error!!! [VcgCall is NULL]
Line 1290: [RabmDataInd] Error!!! [abnormal VCG state:%d]
Line 1296: [RabmDataInd] Error!!! [abnormal FSM state:%d]
Line 1303: [RabmDataInd] Error!!! [abnormal amrMode:%d]
Line 1314: [RabmDataInd] RXPACKET
Line 1317: [RabmDataInd] discard!!! [RabId:%d]
Line 1715: [VSS] SendRabmDataReq: Null pointer
Line 1724: [VSS] Alloction - Fail
Line 1736: [VSS] RabmDataReq - Success
Line 1833: VCG_VltTtyTxChar(%c)
Line 1838: VCG_VltTtyTxChar Sending Fail
Line 1843: VCG => SRM :: VCG_VltTtyTxChar Sending
Line 1846: VCG => VCE :: VCG_VltTtyTxChar Sending
Line 1857: vcg_VltTtyRxCharNtf(%c)
Line 1863: Send IPC(ENQ_RX_TTYCHAR) fail(Abox not ready)
Line 2064: UmtsSyncRxedChanged
Line 2070: VocCtrlEvent WrongCmd(%d)
Line 2154: [vcg_LoopbackStart] loopbackType(%d) codecType(%d) codecMode(%d) dtx(%d)
Line 2157: !!! Call already exists !!!
Line 2176: [VSS_SHM] Set VSSLoopBackMode(%d)
Line 2187: [vcg_LoopbackStart] Unknown Sampling rate (codecType:%d, codecMode:%d)
Line 2193: [vcg_LoopbackStart] Unknown bitrate (codecType:%d, codecMode:%d)
Line 2205: vcg_VLTCodecModeChange failed (%d)
Line 2218: [VSS_SHM] Set VSSLoopBackMode(%d)
Line 2225: [VSS_SHM] Set VSSLoopBackMode(%d)
Line 2231: VCG_CALL_ENTRY_CREATE_FAIL
Line 2253: [vcg_LoopbackStart] loopback test start
Line 2261: VCG CALL ENTRY NOT FOUND
Line 2277: [VSS_SHM] Set VSSLoopBackMode(%d)
Line 2279: [vcg_LoopbackEnd] loopback test end
Line 2455: default stackNum(No Active Calls!!!)
Line 2469: vcg_GetRATType fail(No Active Calls!!!)
Line 2490: ChAwareModeReq is null
Line 2500: ChAwareMode Call id is not valid(%d)
Line 2512: Unknown ChAwareMode offset(%d)
Line 2516: ChAwareModeChangeReqHandler: callId(%d), hiLow(%d), offset(%d)
Line 2528: VCG_CALL_ENTRY_NOT FOUND
Line 2574: VCG message receiving status is FAIL:  %d
Line 1343: [RabmSyncInd] Error!!! [VcgCall is NULL]
Line 1347: [RabmSyncInd]
Line 1370: vcg_RabmUlTfInd: total UL bits = %d
Line 1390: StartCall [rat:%d]
Line 1392: ActivateRxed: %d, UmtsSyncRxed: %d
Line 1883: VcgCall State(%d -> %d)
Line 1466: PauseCall [state:%d]
Line 2315: New CallRoot: Set stackNo(%d)
Line 2316: New CallRoot: Set CurrentCodec(%d)
Line 2317: New CallRoot: Current Callid(%d)
Line 378: [PS]SVE_JBM_GetSamples
Line 416: VCG_CODECCLKRELEASE_REQ
Line 419: [ServiceAPI] vcgServiceAPI_VolReq(Volume:%d), No Effect!!!
Line 422: [ServiceAPI] vcgServiceAPI_MicMuteReq(micMute:%d), No Effect!!!
Line 425: [ServiceAPI] vcgServiceAPI_VideoCallReq(VTmode:%d), No Effect!!!
Line 733: EstablishCall
Line 737: !!! VCG call already exists !!!
Line 738: EstCallReqPtr: CallId(%d)
Line 740: CallRoot: CallID(%d), CodecType(%x)
Line 741: CallRoot: execMode(%d), RATType(%d)
Line 742: CallRoot: StackNo(%d), State(%d)
Line 758: VCG_CALL_RAT_INVALID
Line 768: VCG_CALL_ENTRY_CREATE_FAIL
Line 775: [VSS_SHM] Set VSSLoopBackMode(%d)
Line 1534: SendEstablishCallCnf
Line 1541: EstablishCallCnf: Null pointer
Line 1556: CallCnf - Fail
Line 1560: VCG CallCnf - Success
Line 1001: AlterCodec
Line 1007: VCG_CALL_ENTRY_NOT_FOUND
Line 1013: vcg_PauseCall - skip
Line 1032: VCG_CODEC_NOT_SUPPORTED
Line 1047: GsmSyncRxedChanged
Line 1585: SendAlterCodecCnf 
Line 1592: SendAlterCodecCnf: Null pointer
Line 1608: AlterCnf - Fail
Line 1612: VCG AlterCnf - Success
Line 1247: VCG_GRR_SYNC_FAIL
Line 1757: SendGrrVcgSyncCnf
Line 1764: VcgSyncCnf: Null pointer
Line 1774: Invalid Source RAT
Line 1784: VcgSynfCnf - Fail
Line 1788: VcgSynfCnf - Success
Line 475: [PS] EstablishCall
Line 479: !!! VoLTE call already exists !!!
Line 480: EstCallReqPtr: CallId(%d)
Line 482: CallRoot: CallID(%d), CodecType(%x)
Line 483: CallRoot: execMode(%d), RATType(%d)
Line 484: CallRoot: StackNo(%d), State(%d)
Line 504: [PS] not defined MsgSrc(%d)
Line 508: [PS] JBM owner(%d)
Line 512: [PS] EST MSG(%d:%d): %d, %d, %d, %d
Line 527: [VLT] VCG_CALL_ENTRY_CREATE_FAIL
Line 534: [VSS_SHM] Set VSSLoopBackMode(%d)
Line 542: GetCodecInfo from SVE(%d,%d)
Line 632: [VLT] SendEstablishCallCnf
Line 639: [VLT] EstablishCallCnf: Null pointer
Line 670: [VLT] CallCnf - Fail
Line 674: [VLT] VCG CallCnf - Success
Line 1097: [VLT][PS] AlterCodec
Line 1108: VCG_CALL_ENTRY_NOT_FOUND
Line 1115: [PS] ALT MSG(%d): %d, %d, %d, %d, %d
Line 1125: [PS] not defined MsgSrc(%d)
Line 1129: [PS] JBM owner(%d)
Line 1133: GetCodecInfo from SVE(%d,%d)
Line 1218: VCG_ACTIVE CALL INVALID
Line 1638: SendAlterCodecCnf 
Line 1645: SendAlterCodecCnf: Null pointer
Line 1680: AlterCnf - Fail
Line 1684: VCG AlterCnf - Success
Line 2130: [vsm_UpdateDmProfile] Error!!! [VcgCall is NULL]
Line 2134: vsm_UpdateDmProfile
