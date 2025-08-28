Line 134: Initialisation of <GapiIntfManagement>, InitType=%d
Line 193:  %s  in  mm_DecodeGapiMmAttachReqMsg 
Line 198:   Gapi Attach Request Type -> %s 
Line 202:  GAPI ReadyTimerValue is %d 
Line 388: Discard PS detach in Hedge as UE moved to Hedge as part of CSFB call Or Duplex Mode CHange..
Line 399: Detach Request saved OR Local Detach is performed because of ongoing Rat Resumption/Suspension.
Line 415: Detach Message with type %d will be processed
Line 429: MM_EMER_CALL_PENDING_DURING_NORMAL_SEARCH_FLAG is cleared.
Line 443:   Gapi Detach Request Type -> %s, IsThisInternalDetach -> %d, DelayedForDetach  -> %d 
Line 494: PS_DET_PSOFF is delayed, set it to internal detach for further processing 
Line 505: MM_DSNC - Ongoing proc on the other Stack: %s, Don't start another CS/PS sig
Line 512: MM_DSNC - Saving Detach Msg : DSDS proc ongoing on the other stack: %s
Line 518: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 527: MM state is NULL process detach request internally 
Line 535: On-going redirection from 3G so process detach request internally
Line 549: Saving Detach Msg Until CELL_IND comes
Line 626: U2L is disabled due to silent redial
Line 630: U2L is enabled due to silent redial
Line 643: Clearing CSFB Flags
Line 672: Putting Saved Cell Ind Msg to Message Queue..
Line 684: QRB New Design: mm_IsCsfb is set to FALSE
Line 753: Perform RAU when CSFB call is aborted before starting
Line 794: mm_DecodeGapiVtCallIndMsg: %d
Line 799: VT call started, so stop the QRB start timer
Line 815: mm_DecodeGapiHDVoiceSettingReqMsg: %d
Line 817: HDVoice on:%d
Line 845: Status = %d in mm_SendGapiMmU2LReselectionInd
Line 1014: mm_DecodeGapiMplmnInd: %d
Line 1086: Pended Attach during manual plmn searching will be performed on GSM RAT
Line 1091: Manual PLMN search is finished but not ready to do Attach, set mm_GmmNeedAttachflag to TRUE
Line 1104: Pended RAU during manual plmn searching will be performed on GSM RAT
Line 1109: Manual PLMN search is finished but not ready to do RAU, set RauNeededFlag to TRUE
Line 1201: IsConnected = %d mm_GetCellBandInfo = %d
Line 1202: PsConActiveState = %d FrequencyInfo = %d in mm_SendGapiScellAsInfoInd()
Line 1268: EmergListLen = %d
Line 1285: Emergency Number Type = %d
Line 1286: Emergency Number Length = %d
Line 1287: Emergency Number
Line 1339: NW RESET REJECT IND for %s.(cause = %d)
Line 1380: CMCC NW RESET ACCEPT IND for %s.
Line 1412: mm_GetNWRejTypeForNS Unhandled Procedure (#d) REJ cause (%d) .
Line 1469: mm_GetNWRejTypeForNS Undefined Reject type %d .
Line 1497: Sent REJECT IND to NS Procedure = %d.(cause = %d)
Line 1517: Sent CSFB Status indication message(Currently this is only for MT Call)
Line 1577: [SRVCC] GAPI HANDOVER STATUS IND ->  Status = %s.
Line 1605: [SRVCC] GAPI HANDOVER STATUS IND ->  HandoverType = %s.
Line 1640: PS Support Info : %s.
Line 1656: 
Displaying Message Contents: %s
Line 1671: Received Int DDS %d  IMS DDS %d
Line 1702: Current Stack Internet Available %d  IMS Available %d
Line 1737: Operating mode is %d
Line 1749: UE is not in GSM RAT
Line 1766:  %s in  mm_DecodeNsMmVoicePriorityReqMsg 
Line 1784: ATT voice priority, send PS SCRI under specific condition(CS+PS mRAB, ANT BAR 1, SCR off 1s~)
Line 1789: Discard NS_MM_VOICE_PRIORITY_REQ
Line 1806: VoiceDomainPreferenece old: %d, new: %d 
Line 1857: Sensor State Req(Feature = %d, Sensor state = %d)
Line 1900: 
Unable to send message due to wrong RAT
Line 1920: mm_DecodeNsMmDrxSetReqMsg changed Drxlength - %d
Line 1949: Emc RAT is invalid(%d) and EMC fail is not updated to URRC or GRR
Line 1961: mm_SendUrrcDrxCoefficentValue specific Drx coefficent - %d
Line 2008: Frequency Aiding Req (Start = %d, Rat = %d, Tcxo_Type = %d)
Line 2017: Because active RAT is neither 3G nor 2G so Frequency Aiding fails.
Line 2212: Ongoing proc on the other Stack: %s, IMS Signaling started will be pended 
Line 2216: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 2250: IMS Grant is not taken now, as it was taken already, IMS Procedure is %d
Line 2263: SIG Start triggered for IMS Domain as IMS procedure is signaling already 
Line 2278: IMS Signaling is released already IMS Proc is %d
Line 2298: mm_DecodeMmImsSignalOperationReqMsg : Signal %d
Line 2313: UE is not in UMTS or GSM Rat modes 
Line 2348: MT CALL END Cause %d
Line 2434: NeedCellInd is TRUE while power off detach initiated, start GMM_DETACH_RESET_NEED_CELL_TIMER
Line 2478: MM_DELAY_DETACH_ON_DUPLEX_MODE_CHANGE_ON_NON_DDS_STACK_FLAG = %d
Line 2495: Multimode;%d
Line 2496: Pssupport;%d
Line 2497: Old;%d New;%d
Line 2498: Duplex:%d
Line 2499: rat:%d
Line 2508: Setting Delay det flag for Duplex Mode Change
Line 2513: Resetting Delay det flag for Duplex Mode Change
Line 2524: Detach is initiated by %d
Line 2535: UE Initiated Detach Cause %d
Line 2568: mm_DecodeMmImsSignalOperationReqMsg : Operation[%d] BearerType[%d] SigType[%d]
Line 2574: BearType Not match, MM will not keep RF GRANT [%d] 
Line 2668: SigType Not match 
Line 2675: UE is not in UMTS or GSM Rat modes 
Line 2682: BearType Not match, MM will not clear RF GRANT [%d] 
Line 2720: SigType Not match 
Line 2752: Ongoing proc on the other Stack: %s, IMS Signaling started will be pended 
Line 2756: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 2782: IMS Grant is not taken now, as it was taken already, IMS Procedure is %d
Line 2785: SIG Start triggered for IMS Domain as IMS procedure is signaling already 
Line 2799: IMS Signaling is released already IMS Proc is %d
Line 2868: Network Initiated Detach Cause %d
Line 2918: INIT request cause: %d
Line 2925: Received EMC MODE from GMC: %d
Line 2937: IMEI from LTE
Line 2944: IMEI constructed in HEDGE
Line 2963: UEMode = %d , CsServicesSupport = %d
Line 2981: mm_UeNwCapRegData.uea0 -> %d, mm_UeNwCapRegData.uea1 -> %d, mm_UeNwCapRegData.uea2 -> %d
Line 2982: gMmUeNetworkCapability[3] -> %02X, gMmUeNetworkCapability[4]  -> %02X
Line 3015: MmInitReq.SimStatus -> %d, MmInitReq.StartFullService -> %d
Line 3059: UserSelectedMode: %d 
Line 3081: Network Lock Status - %d
Line 3089: Stack had been aleady initialized. But MM responds to INIT CNF without any action to avoid stuck
Line 3112: 3G  mode URRC_MM_STOP_CNF received
Line 3121: 2G  mode GRR_MM_STOP_CNF received
Line 3332: Current HPLMN -> 0x%02X 0x%02X 0x%02X
Line 3335: LastInsertedPLMN -> 0x%02X 0x%02X 0x%02X
Line 3339: writing HPLMN
Line 3385: (PREVENTION) EF_LOCI Update during Power off  (20131231)
Line 3419: Sending MM Stop Req to AS
Line 3473: Saving Stop Nw Req Msg on Failed response so that MM handles it internally
Line 3555: mm_SendNsActiveCipherIntegrityInfoInd :: Active(%d) RadioTech(%d) ConnectionEvent(%d) Source(%d)
Line 3557: mm_SendNsActiveCipherIntegrityInfoInd :: CipherAlgo(%d) IntegrityAlgo(%d) IsUnprotectedEmergency(%d)
Line 3596: mm_TriggerNsActiveCipherIntegrityInfoInd not Support Rat
 
Line 3621: mm_SendNsDisclosedNasMsgInd :: PlmnId (%x %x %x)
Line 3624: mm_SendNsDisclosedNasMsgInd :: CellularIdType(%d) NasMessageType(%d) IsEmergency(%d)
Line 3643: mm_DecodeNsMmStartImsTrafficReq : BearerType[%d] SigType[%d]
Line 3741: SigType Not match 
Line 3748: UE is not in UMTS or GSM Rat modes 
Line 3768: mm_DecodeMmImsSignalOperationReqMsg :SigType[%d]
Line 3807: SigType Not match 
Line 3857: Chub WakeUp State Req(Status = %d)
Line 3879: 
Unable to send message due to wrong RAT
Line 329: TIN value -> %d
Line 347: No Need to process detach, So performing Local detach 
Line 3530: ConvertAlgorithmsEnum :: RadioTech(%d) ConnectionEvent(%d) Algorithm(%d)->ConvertedAlgorithm(%d)
