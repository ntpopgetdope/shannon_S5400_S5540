Line 190: rrc_UeCapMngr.c: rrc_UeCapMngr_init: Timer T304 creation failed
Line 240: rrc_UeCapMngr.c: rrc_UeCapMngr_init: T304 Delete Failed
Line 367:  : Support for SIB 11 bis removed for TDD 
Line 424: disable EUTRA in RatMode = %d
Line 2476: [DEFAULT] UeCapMngr_p->SuppEutraBands[%d] = %d
Line 2491: [CERTIFIED] UeCapMngr_p->SuppEutraBands[%d] = %d
Line 2549: [DEFAULT] UeCapMngr_p->RegEutraBands[%d] = %d
Line 2563: [CERTIFIED] UeCapMngr_p->RegEutraBands[%d] = %d
Line 2584: [rrc_UeCapMngr_isValidEutraBand] BAND %d is not a Valid EUTRA BAND
Line 2644: [rrc_UeCapMngr_getEutraBandRange] Invalid Band Range
Line 2656: Eutra bandId greater than 64 found
Line 2689: Max(64) Eutra bands are supported so the rest of them will be ignored
Line 2695: %d is not a valid LTE BAND so it will be ignored
Line 2698: Total NumValidEutraBand(%d)
Line 2721: SuppValidEutraBand[%d], %d
Line 2740: Eutra BandId[%d] cannot be taken, as it already exceed the limit of max
Line 2755: Eutra BandId[%d] cannot be taken, as it already exceed the limit of max
Line 2762: Eutra BandId[64] is reserved.. LTE should not give this
Line 2777: Eutra BandId[%d] cannot be taken, as it already exceed the limit of max
Line 2783: BandId not supported
Line 2795: NumValidEutraBandList1(%d), NumValidEutraBandList2(%d), NumValidEutraBandList3(%d)
Line 2847: NASU_DIV_DUPLEX_MODE 0x%x
Line 2868: BAND%d is not in a valid range
Line 2908: rrc_UeCapMngr_isRegisteredEutraBand : UeCapMngr_p->RegEutraBands[%d] = %d
Line 2912: rrc_UeCapMngr_isRegisteredEutraBand : BandId(%d) is supported EUTRA Band
Line 2919: rrc_UeCapMngr_isRegisteredEutraBand : BandId(%d) is not supported EUTRA Band
Line 2932: BAND %d is EUTRA TDD BAND
Line 2937: BAND %d is EUTRA FDD BAND
Line 2943: BAND %d is an invalid BAND
Line 3064: rrc_UeCapMngr_RecvIratStatusInd - EutraDisabled set to %d
Line 3065: rrc_UeCapMngr_RecvIratStatusInd - BlockU2LMeas set to %d
Line 3066: rrc_UeCapMngr_RecvIratStatusInd - GsmDisabled set to %d
Line 3070: rrc_UeCapMngr_RecvIratStatusInd - UmtsDisabled set to %d
Line 1163: rrc_UeCapMngr.c: Idle_UECapabilityEnq: rrc_DlMsgInitialProcess_postProcess() returned FALSE
Line 1194: rrc_UeCapMngr.c: Idle_UECapabilityEnq: Failure to post state AWAITACK
Line 2890: Fatal Error: Messsage Freed abnormally @ [State : %d] [Event : %d] 
Line 1091: UMTS RAT RESUMED, so LTE supporting frequency bands are being updated
Line 544: rrc_UeCapMngr.c: AwaitAck_UECapabilityEnq: Timer T304 Stop Failed.
Line 561: rrc_UeCapMngr.c: AwaitAck_UECapabilityEnq: Post state to UECAPENQAWAITACK failed.
Line 604: rrc_UeCapMngr.c: AwaitAck_UECapInfoAck: Post state to IDLE failed.
Line 616: rrc_UeCapMngr.c: AwaitAck_UECapInfoAck: Post state to AWAITCAPINFOCNF failed.
Line 631: rrc_UeCapMngr.c: AwaitAck_UECapInfoAck: rrc_ss_StartTimer() not Successful
Line 637: AwaitAck_UECapInfoAck: failed to send UECapInfo (cause %d)
Line 643: rrc_UeCapMngr.c: AwaitAck_UECapInfoAck: Timer T304 Stop Failed.
Line 654: rrc_UeCapMngr.c: AwaitAck_UECapInfoAck: Post state to IDLE failed.
Line 988: ERROR stopping T313 timer
Line 997: rrc_UeCapMngr.c: DefaultState_T304Expiry: SendInternalMsgSingleton FAIL
Line 1003: rrc_UeCapMngr.c: DefaultState_T304Expiry: Failure to post state IDLE
Line 693: rrc_UeCapMngr.c: AwaitAck_UECapabilityInfoCnf: Timer T304 Stop Failed.
Line 712: rrc_UeCapMngr.c: AwaitAck_UECapabilityInfoCnf: Failure to post state IDLE
Line 746: rrc_UeCapMngr.c: AwaitAck_UECapabilityInfoCnf: rrc_ss_StartTimer() not Successful
Line 752: rrc_UeCapMngr.c: AwaitAck_UECapabilityInfoCnf: Failure to post state AWAITACK
Line 1043: Failed to stop T304
Line 1047: Running T304 is stopped successfully
Line 1070: Failed to transit to IDLE state
Line 806: rrc_UeCapMngr.c: AwaitCapInfoCnf_UECapabilityEnq: Timer T304 Stop Failed.
Line 860: rrc_UeCapMngr.c: AwaitCapInfoCnf_UECapabilityInfoCnf: Timer T304 Stop Failed.
Line 881: rrc_UeCapMngr.c: AwaitCapInfoCnf_UECapabilityInfoCnf: Failure to post state IDLE
Line 915: rrc_UeCapMngr.c: AwaitCapInfoCnf_UECapabilityInfoCnf: rrc_ss_StartTimer() not Successful
Line 922: rrc_UeCapMngr.c: AwaitCapInfoCnf_UECapabilityInfoCnf: Failure to post state AWAITACK
Line 1382: SetUlRFCapability, UePowerClass = %d TxRxFrequencySeparation = %d
Line 2997: MaxBand = %d
Line 3006: GetRfFddBandListsFromStoredBands: BandId retrieved = %d
Line 3015: GetRfFddBandListsFromStoredBands: FDD2 BandId retrieved = %d
Line 3020: GetRfFddBandListsFromStoredBands: usupported band = %d
Line 3029: FDDBandList[%d]=%x
Line 3035: FDDBand2List[%d]=%x
Line 1451: >> MultiModeCapability: Supported %d
Line 1457: >> MultiModeCapability: Invalid Request (Fdd %d, Tdd %d)
Line 1462: >> MultiModeCapability: Requested %d
Line 1468: >> MultiModeCapability: Requested %d
Line 1476: >> MultiModeCapability: Requested %d, RequestOverwritten %d
Line 1482: >> MultiModeCapability: Invalid Request %d
Line 1486: >> MultiModeCapability: Requested %d
Line 1494: >> MultiModeCapability: Requested %d, RequestOverwritten %d
Line 1500: >> MultiModeCapability: Invalid Request %d
Line 1504: >> MultiModeCapability: Requested %d
Line 1509: [SetUlMsgMultiModeRatCapability] GSMSupport %d, MultiCarrierSupport %d, MultiModeCapability = %d
Line 1659: pal_UserRegInitItem_NMO_2G_band (0x%x) configured
Line 1676: Supported_2G_band(0x%x), gsm900E configured
Line 1687: Supported_2G_band(0x%x), gsm1800 configured
Line 1698: Supported_2G_band(0x%x), gsm1900 configured
Line 1709: Supported_2G_band(0x%x), gsm850 configured
Line 1760: SetUlMsgMeasCapability, Fill the MeasCapability in asnRacBufferPtr
Line 1794: [GSMCAP] No saved Classmark 2/3
Line 2149: RacRelLaterExtBitMask was set
Line 2960: GANSS Not Supported (UtranAgnss %d, ganss_supportInd %d)
Line 2974: GANSS Not Supported (UtranAgnss %d, ganss_supportInd %d)
