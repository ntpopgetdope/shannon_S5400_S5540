Line 92: [N :MM,%d]  NrmmEventScheduler::DeletePendingMessage [ Mui : 0x%X ]
Line 105: [N :MM,%d]  MmAirMessageAPI::DeletePendingMessage - Delete message information in pending queue
Line 115: [N :MM,%d]  Message not found matched with MUI[%d]
Line 124: [N :MM,%d]  NrmmEventScheduler::DeletePendingMessage MsgID : %s
Line 157: [A :MM,%d]  %%!EM EXPIRED PENDING MSG LIFE TIMER !! [SourceTask : %s, Msg : %s, Mui : 
Line 157: [MM|%d,CP] %%!EM EXPIRED PENDING MSG LIFE TIMER !! [SourceTask : %s, Msg : %s, Mui : 
Line 189: [A :MM,%d]  %%!EM EXPIRED EST_REQ LIFE TIMER !! [SourceTask : %s, Msg : %s, Mui : 
Line 189: [MM|%d,CP] %%!EM EXPIRED EST_REQ LIFE TIMER !! [SourceTask : %s, Msg : %s, Mui : 
Line 216: [N :MM,%d]  NrmmEventScheduler::IsPendedMessage [ Mui : 0x%X ]
Line 240: [N :MM,%d]  NrmmEventScheduler::IsPendedMessage [ %s ]
Line 269: [N :MM,%d]  NrmmEventScheduler::IsPendedMessage [ %s ]
Line 298: [N :MM,%d]  NrmmEventScheduler::Message to be deleted [ %s ]
Line 311: [N :MM,%d]  MmAirMessageAPI::DeletePendingMessage - Delete message information in pending queue
Line 349: [N :MM,%d]  %%!EM MM_GMC_STOP_REQ for Recovery
Line 394: [N :MM,%d]  NrmmEventScheduler::DEFER MESSAGE = %s
Line 452: [N :MM,%d]  NrmmEventScheduler::SKIP MESSAGE on suspend or NULL state = %s
Line 492: [N :MM,%d]  NrmmEventScheduler::DEFER MESSAGE = %s
Line 524: [N :MM,%d]  NrmmEventScheduler::DISCARD IMS Service status Message if UAC is enabled 
Line 535: [N :MM,%d]  NrmmEventScheduler::PROC TYPE received = %d
Line 548: [N :MM,%d]  NrmmEventScheduler::PROC TYPE in pending queue= %d
Line 551: [N :MM,%d]  DeletePendingMessage - Delete MM_EMM_REG_INFO_UPD_IND information in pending queue
Line 562: [N :MM,%d]  NrmmEventScheduler::DEFER MESSAGE = %s
Line 576: [N :MM,%d]  NrmmEventScheduler::DISCARD MM_RRC_RAT_RESUME_CNF since MM_STATE_RAT_RESUME_IN_PROGRESS is not set/reset
Line 586: [N :MM,%d]  [EVENT SCHEDULER] MSG PROCESS : %s, Result = %d
Line 598: [N :MM,%d]  NrmmEventScheduler::ProcessMmAirMsg() Mui = %x
Line 676: [D :MM,%d]  |- NRMM PENDING QUEUE -|
Line 677: [D :MM,%d]  |-------------------------------------------------------------------------------------------|
Line 691: [N :MM,%d]  [%d]Pending Message : %s (%s)
Line 694: [N :MM,%d]  [%d]Pending Message : %s
Line 699: [N :MM,%d]  | None
Line 704: [N :MM,%d]  NrmmEventScheduler::PushFrontPendingQueue: %s
Line 712: [N :MM,%d]  NrmmEventScheduler::PushBackPendingQueue : %s
Line 720: [N :MM,%d]  NrmmEventScheduler::RegisterCompatibleState()
Line 740: [N :MM,%d]  NrmmEventScheduler::ReleaseDataMsg()
Line 747: [N :MM,%d]  SourceTask:%s, Msg:%s
Line 829: [N :MM,%d]  SourceTask:%s, Msg:%d
Line 886: [N :MM,%d]  [RETRIEVE PENDING MSG] %s, CurrMmState = %x %x, PrevMmState = %x %x
Line 891: [N :MM,%d]  [RETRIEVE PENDING MSG] %s, CurrMmState = %x %x, PrevMmState = %x %x
Line 916: [N :MM,%d]  %%!EM NrmmEventScheduler::RevertPendingEventForErr() Cause = %d
Line 937: [N :MM,%d]  %%!EM Unknown Msg ID!!
Line 954: [N :MM,%d]  NrmmEventScheduler::SendFrontPendingMessage()
Line 959: [N :MM,%d]  MmAirMessageAPI::SendPendingFrontMessage - Pending queue is EMPTY.
Line 981: [N :MM,%d]  NrmmEventScheduler::SendFrontPendingMessage - Invalid pending message
Line 990: [N :MM,%d]  NrmmEventScheduler::SendPendingMessage()
Line 995: [N :MM,%d]  MmAirMessageAPI::SendPendingFrontMessage - Pending queue is EMPTY.
Line 1017: [N :MM,%d]  NrmmEventScheduler::SendFrontPendingMessage - Invalid pending message
Line 1060: [N :MM,%d]  NrmmEventScheduler::ProcessCnfMsg() Mui = %x
Line 1070: [N :MM,%d]  Pending MUI information for comparing with confirm message [Mui : %d, NrmmRadioMsgId : %d]
Line 1084: [N :MM,%d]  Wait for Service Request Accept [SourceTask : %s, LocalMui : %d]
Line 1100: [N :MM,%d]  %%!EM remove duplicated pending AirMessage even Pending AirMessage is nullptr! (Mui: 0x%x)
Line 1123: [N :MM,%d]  %%!EM remove duplicated pending AirMessage! (Mui: 0x%x, MsgId: %d)
Line 1144: [N :MM,%d]  NrmmEventScheduler::FindAndProcessWaitCnfMsg()
Line 1150: [N :MM,%d]  %%!EM Received unexpected Mui! (Mui: 0x%x)
Line 1159: [N :MM,%d]  %%!EM Pending AirMessage is nullptr! (Mui: 0x%x)
Line 1265: [N :MM,%d]  %%!EM NrmmEventScheduler::FindAndRemoveWaitCnfMsgByMsgid() Received Msg : %s => Pending Msg : %s
Line 1278: [N :MM,%d]  %%!EM NrmmEventScheduler::FindAndRemoveWaitCnfMsgByMsgid() : Start SR Grant Timer if SR Accept received before CNF for SR Request
Line 1289: [N :MM,%d]  NrmmEventScheduler::Initiate
Line 1311: [N :MM,%d]  %%!EM NrmmEventScheduler::RevertWaitCnfEventForErr() Cause = %d
Line 1333: [N :MM,%d]  %%!EM FLUSH PENDING QUEUE !!
Line 1382: [N :MM,%d]  RegisterMsaUserCallback SRNC_CSPSSIG : %d
Line 1386: [N :MM,%d]  RegisterMsaUserCallback SRNC_PSCALL : %d
Line 1390: [N :MM,%d]  RegisterMsaUserCallback SRNC_CSCALL : %d
Line 1394: [N :MM,%d]  RegisterMsaUserCallback SRNC_VOLTE : %d
Line 1398: [N :MM,%d]  RegisterMsaUserCallback SRNC_IMS_SIG : %d
Line 1403: [D :MM,%d]  DeRegisterMsaUserCallback: Dereg All SVC
Line 1411: [N :MM,%d]  CheckCSPSSIGSvc_Cb: rCbParam Event[%d]
Line 1538: [A :MM,%d]  IRAT RESULT : Unknown IRAT Type = %d
Line 1538: [MM|%d,CP] IRAT RESULT : Unknown IRAT Type = %d
Line 1639: [N :MM,%d]  Check IMS_SIG_begin Operation: %d
Line 1643: [N :MM,%d]  Check IMS_SIG_begin SvcType: %d
Line 1660: [N :MM,%d]  Check IMS_SIG_begin Operation: %d SvcType : %d
Line 1687: [N :MM,%d]  IMS_SIG_begin MM_RM_START_IMS_TRAFFIC_REQ TrafficType: %d
Line 1703: [N :MM,%d]  Cannot happen
Line 1713: [N :MM,%d]  CheckCSPSSIG_begin msgName %s
Line 1770: [N :MM,%d]  CheckCSPSSIG_begin RRC_MM_EST_REQ RadioMsgId [%d] 
Line 1788: [N :MM,%d]  CheckCSPSSIG_begin for IMS Operation
Line 1872: [N :MM,%d]  ProcImsSigEnd MM_RM_STOP_IMS_TRAFFIC_REQ
Line 1888: [N :MM,%d]  Cannot happen
Line 1907: [N :MM,%d]  CheckCSPSSIG_end: MM_RRC_EST_REJ RadioMsgId[%d]
Line 1931: [N :MM,%d]  DrbBitmap: %d Duration: %d
Line 2018: [N :MM,%d]  CSPSSIG_end for QM SR since NW_PDU_SESS_STATUS is 0
Line 2073: [N :MM,%d]  PerformCSPSSIG_TriggerCnf MSGID %s
Line 2168: [N :MM,%d]  CheckCsCALLSvc_Cb: rCbParam Event[%d]
Line 2225: [N :MM,%d]  CSCALL is already granted !!
Line 2333: [N :MM,%d]  [EventS] Received Service Type : %d, Operation : %d, Dir : %d
Line 2388: [N :MM,%d]  [EventS] STOP_IMS_TRAFFIC_REQ Received Traffic Type : %d 
Line 2411: [N :MM,%d]  MM_RM_EMC_CALL_STATUS_SET_IND %d
Line 2421: [N :MM,%d]  CS call grant will be released after video call end
Line 2432: [N :MM,%d]  CS call grant will be released after call end
Line 2513: [N :MM,%d]  VoLTECALL is already granted !!
Line 2695: [N :MM,%d]  %%!EM Received unexpected Mui! (Mui: 0x%x)
Line 2703: [N :MM,%d]  %%!EM Pending AirMessage is nullptr! (Mui: 0x%x)
Line 2733: [N :MM,%d]  %%!EM Unexpected MsaGroupId Received
Line 2765: [N :MM,%d]  %%!EM Unexpected MsaGroupId Received
Line 2832: [N :MM,%d]  %%!DD %s%s(%s) [%s]
