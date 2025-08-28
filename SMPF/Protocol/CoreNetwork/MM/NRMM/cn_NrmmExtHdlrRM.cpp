Line 81: [N :MM,%d]  NrmmExtHdlrRM::NrmmExtHdlrRM
Line 101: [N :MM,%d]  MM_RM_REGISTRATION_REQ_Handler
Line 110: [N :MM,%d]  MM_RM_DEPRIORTIZE_IND_Handler
Line 121: [A :MM,%d]  On this state, NRMM does not need to trigger terminate request
Line 121: [MM|%d,CP] On this state, NRMM does not need to trigger terminate request
Line 137: [N :MM,%d]  MM_RM_DEREGISTRATION_REQ_Handler : Type = %d, ReAttachFlag = %d, Reason = %d, InternalDetach = %d
Line 139: [N :MM,%d]  Deregistration Type : %d
Line 154: [A :MM,%d]  Unexpected DEREG_REQ received, perform local deregistration
Line 154: [MM|%d,CP] Unexpected DEREG_REQ received, perform local deregistration
Line 215: [A :MM,%d]  In case of POWER OFF DEREG, Wait for RRC connection release by the network after PDU session released
Line 215: [MM|%d,CP] In case of POWER OFF DEREG, Wait for RRC connection release by the network after PDU session released
Line 231: [N :MM,%d]  MM_RM_EMC_CALL_STATUS_SET_IND_Handler: RegType:%d
Line 240: [N :MM,%d]  Emergency reg will be performed as E-PDU Deact
Line 253: [N :MM,%d]  MM_RM_IMS_CAPA_SET_IND_Handler : UE_IMS_CAPA_STATUS = %d
Line 269: [N :MM,%d]  %%!RE Registration is needed : %x
Line 279: [N :MM,%d]  MM_RM_IMS_REG_STATUS_SET_IND_Handler
Line 283: [N :MM,%d]  IMS REG(%d),Feature(%d),RAT(%d),Error(%d) 
Line 300: [E :MM,%d]  Unexpected MM_RM_IMS_REG_STATUS_SET_IND received!! discard it.
Line 328: [E :MM,%d]  IMS_REJ_EXP_ENABLED enabled.
Line 337: [E :MM,%d]  Skip Received IMS Registration failure
Line 351: [N :MM,%d]  Disable N1 mode due to IMS registration failure, DataOnly(%d), N1DisableDurationCtrl(%d)
Line 407: [N :MM,%d]  MM_RM_START_IMS_TRAFFIC_REQ_Handler
Line 411: [N :MM,%d]  CP UAC feature will be enabled/disabled [%d]
Line 434: [N :MM,%d]  NRMM can not handle IMS client's request on suspend state or plmn search ongoing
Line 446: [N :MM,%d]  MM_RM_STOP_IMS_TRAFFIC_REQ_Handler
Line 462: [N :MM,%d]  MM_RM_IMS_SIGNAL_OPERATION_IND_Handler Operation %d MsgType %d
Line 498: [N :MM,%d]  Perform REG immediately if IMS call initiated during T3511 or T3502 running and T3346 not running
Line 514: [N :MM,%d]  %%!RE Registration is needed : %x
Line 521: [N :MM,%d]  Not Perform REG
Line 588: [N :MM,%d]  MM_RM_IMS_SIP_MSG_REQ_Handler
Line 601: [N :MM,%d]  start SR by VoLTE call SIP(%02x)
Line 607: [N :MM,%d]  start SR by VT call SIP(%02x)
Line 625: [N :MM,%d]  MM_RM_USER_SPECIFIC_DRX_SET_IND_Handler
Line 633: [N :MM,%d]  Stored DRX length : %d
Line 637: [N :MM,%d]  New DRX length : %d
Line 652: [N :MM,%d]  %%!RE Registration is needed : %x
Line 666: [N :MM,%d]  MM_RM_UEUSAGE_SET_IND_Handler
Line 679: [A :MM,%d]  %%!EM Set UE USAGE to DATA_CENTRIC forcedly on VOICE_CENTRIC + CS_VOICE_ONLY + NR_ONLY_MODE
Line 679: [MM|%d,CP] %%!EM Set UE USAGE to DATA_CENTRIC forcedly on VOICE_CENTRIC + CS_VOICE_ONLY + NR_ONLY_MODE
Line 685: [N :MM,%d]  UE Usage change [%d] -> [%d]
Line 700: [N :MM,%d]  %%!RE Registration is needed : %x
Line 715: [N :MM,%d]  %%!RE Registration is needed : %x
Line 724: [N :MM,%d]  MM_RM_PREF_DOMAIN_SET_IND_Handler
Line 732: [N :MM,%d]  Voice Pref change [%d] -> [%d]
Line 738: [N :MM,%d]  UE VOICE PREF : CS ONLY
Line 742: [N :MM,%d]  UE VOICE PREF : not CS ONLY
Line 749: [N :MM,%d]  VONR Support [%d] -> [%d]
Line 773: [N :MM,%d]  MM_RM_SERVICE_DOMAIN_SET_IND_Handler
Line 777: [N :MM,%d]  Domain Changed to (%d)
Line 780: [N :MM,%d]  Disable N1 as domain is changed to CS only
Line 796: [N :MM,%d]  MM_RM_ADD_PREFERRED_CELL_LIST_IND_Handler
Line 811: [N :MM,%d]  MM_RM_NETWORK_TIME_REQ_Handler
Line 821: [N :MM,%d]  MM_RM_REMOVE_PREFERRED_CELL_LIST_IND_Handler
Line 832: [N :MM,%d]  MM_RM_LOW_PWR_MODE_IND_Handler : Cause = %d, TempCtrl = %d
Line 843: [N :MM,%d]  MM_RM_IMS_CALL_STATUS_IND_Handler : CallStatus = %d, CallType = %d, CallEndCause = %d
Line 852: [N :MM,%d]  Unexpected MM_RM_IMS_CALL_STATUS_IND received. Ignore!!
Line 858: [N :MM,%d]  Unexpected Call status received from NS, ignore MM_RM_IMS_CALL_STATUS_IND
Line 870: [N :MM,%d]  MM_RM_CONGESTION_CONTROL_IND_Handler : T3246 Status = %d, T3246 Value = %d, T3346 Status = %d, T3346 Value = %d
Line 894: [N :MM,%d]  %%!RE Registration is needed : %x
Line 906: [N :MM,%d]  %%!RE Registration is needed : %x
Line 926: [N :MM,%d]  MM_RM_FORBIDDANCE_STATUS_IND_Handler : T3245 Status = %d, T3247 Status = %d
Line 979: [N :MM,%d]  NRMM_NON_INTEGRITY_SUPPORT feature not supported
