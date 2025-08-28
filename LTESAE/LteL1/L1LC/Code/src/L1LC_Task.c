Line 772: %s(SaveMsg(%08x), msg(%08x)).id(%d).Cnt(%u)-[debug]HalSaveMsg(%08x(%d))
Line 780: %s(msg(%08x), SaveMsg(%08x)).id(%d).Cnt(%u)-[debug]HalSaveMsg(%08x(%d))
Line 785: Early return - Cnt(%d)@Exception(pMsg==NULL):%s()
Line 879: Free[pMsg(%08x)]
Line 879: pMsg(%08x) after.pal_Free@%s
Line 883: This message is already freed!!!
Line 886: Early return - Cnt(%d)@Exception(DRX_SPARE_EXPIRY)-id(%d)/RF(%d):%s()
Line 912: gL1LC_DsdsCheckReleaseFeasibilityTmr Timer stop
Line 921: RESET DsdsDB_[%d].IsSuspend
Line 925: [LTE_DSDS] ]RRM request [%d] in Suspend state (%d)!!
Line 932: HalSaveMsg(%08x) after.pal_Free@IsSuspend !!
Line 937: HalSaveMsg is already freed!!!
Line 942: [LTE_DSDS] Different RrmSaveMsg(id=%d) is freed!!
Line 945: RrmSaveMsg(%08x) after.pal_Free @IsSuspend !!
Line 952: This message is already freed!!!
Line 971: Free[pMsg(%08x)]
Line 971: pMsg(%08x) after.pal_Free@%s
Line 975: This message is already freed!!!
Line 978: Early return - Cnt(%d)@Exception(IsSuspend):%s()
Line 1026: Early return -Cnt(%d)[RrmSaveMsg(%08x)/HoldRrmMsgFlag(%d)]@Exception(No RF):%s()
Line 1341: %s(): NR band might be already released during CDRX
Line 1546: Free[pMsg(%08x)]
Line 1546: pMsg(%08x) after.pal_Free@%s
Line 1550: This message is already freed!!!
Line 1552: Early return -Cnt(%d)@Default Rrm ILM:%s()
Line 1566: Free[pMsg(%08x)]
Line 1566: pMsg(%08x) after.pal_Free@%s
Line 1571: This message is already freed @End of %s!!!
Line 1576: Normal return -Cnt(%d)[RrmSaveMsg(%08x), HoldRrmMsgFlag(%d)]@%s()
Line 2936: assert condition : Null Message
Line 2960: assert condition : Invalid Message Id
Line 2966: assert condition : Message Sending failed
Line 2997: assert condition : Null Message
Line 3012: assert condition : Invalid Message Id
Line 3018: assert condition : Message Sending failed
Line 3049: assert condition : Null Message
Line 3064: assert condition : Invalid Message Id
Line 3070: assert condition : Message Sending failed
Line 3107: assert condition : Null Message
Line 3249: assert condition : Invalid Message Id
Line 3255: assert condition : Message Sending failed
Line 3279: assert condition : Null Message
Line 3283: assert condition : Message Sending failed
Line 3314: assert condition : Null Message
Line 3402: assert condition : Invalid Message Id 
Line 3406: assert condition : Message Sending failed
Line 3437: assert condition : Null Message
Line 3513: assert condition : Invalid Message Id
Line 3526: Msg %d to DS_MMC_IF
Line 3532: Msg %d to DS_MMC
Line 3547: assert condition : Message sending failed
Line 3699: assert condition : Null Message 
Line 3722: assert condition : Invalid Message Id
Line 3743: assert condition : Message Sending Failed
Line 3785: assert condition : Null Message
Line 3828: [FeDV] IsEndc(%d), MCG stack(ST%d), Endc_Stack(ST%d), MCG(%s)
Line 3879: Send NR_AIT_INFO Msg
Line 3925: Warning unexpected msgId(%d)
Line 3942: assert condition : Message Sending Failed
Line 4407: CurrentStackID(%d)@%s
Line 4429: LTE_InitL1LC(use cal data due to PowerON)(HALSC_AfcPdmStored:%d)
Line 4445: RESET DsdsDB_[%d].IsSuspend
Line 4643: !!Assert condition: Event group creation failed
Line 4652: !!Assert condition: Event retrieval failure L1LC Offload
Line 4662: !!Assert condition: Unrecongnized event in L1LC Offload
Line 4688: !!Assert condition: Event set to offload went wrong !
Line 4781: Event Set [0x%x] [0x%x] [%d]
Line 4822: SET DsdsDB_[%d].IsSuspend
Line 4846: Handle event[%s] / gL1lc_CurrEvent [0x%x]
Line 4915: [LTE L1LC DSL1RC] L1LC_CheckRrmStoredMsg :: Proc RRM Result[%d], req_id(%d)
Line 4945: [LTE L1LC] %s(Any Saved Message[%d])
Line 4964: %s()[req_id(%d)]::IsHighPriority(%d)
Line 4967: [LTE L1LC] %s() :: Proc RRM Result[%d], req_id(%d), gCurProc(%d)
Line 5003: [LTE L1LC] %s(Any Saved Message[%d])
Line 5011: %s()[req_id(%d)]::IsHighPriority(%d)
Line 5020: [DRX] HALDRX_InitRF is finished
Line 5023: [LTE L1LC] %s() :: Proc HAL Result[%d], req_id(%d), gCurProc(%d)
Line 5055: [LTE L1LC] %s(Any Saved Message[%d])
Line 5063: %s()[req_id(%d)]::IsHighPriority(%d)
Line 5065: [LTE L1LC] %s() :: Proc MMC Result[%d], req_id(%d), gCurProc(%d)
Line 5083: [SADS] Tx| %s(Any Saved L1TxSaveMsg[0x%x] L2TxSaveMsg[0x%x])
Line 5096: [SADS] Tx| %s() :: Proc L1TX Result[%d], req_id(0xx%x), gCurProc(%d)
Line 5110: [SADS] Tx| %s() :: Proc L2TX Result[%d], req_id(0xx%x), gCurProc(%d)
Line 5141: [4G_DSDS] funcName = %s, L1LC No Preempt start[%d]
Line 5146: [4G_DSDS] funcName = %s, L1LC No Preempt end[%d]
Line 318: assert condition : Message is NULL
Line 325: clear L1TX queued message in SUSPEND state
Line 331: [SADS] Tx Skip L1LC_DecodeL1txTxReq
Line 350: assert condition : Wrong Message Id 
Line 378: assert condition : Message Null
Line 424: assert condition : Wrong Message Id
Line 459: assert condition : Message Null
Line 466: [SADS] Tx Skip L1LC_DecodeL2txTxReq
Line 478: assert condition : Wrong Message Id
Line 504: assert condition : Message Null
Line 519: assert condition : Wrong Message Id
Line 549: [4G DRDS] DRDS was not deactivated correctly!
Line 554: [LTE L1LC DSL1RC] Hold RRM Message[%d]. Skipping L1LC<-RRM Queue Read... 
Line 641: RESET DsdsDB_[%d].IsSuspend
Line 698: L1LC_ProcMeasureReq during power down state
Line 705: Free[pMsg(%08x)]
Line 705: pMsg(%08x) after.pal_Free@%s
Line 709: This message is already freed!!!
Line 711: Early return - Cnt(%d)@Exception(LTE_MODEM_OFF):%s()
Line 1718: assert condition : Invalid Message Id
Line 1619: %s(): SI message was released[%d]
Line 1638: %s(): message count did't match [%d:%d]
Line 1656: %s(): stopped sib messages were removed[%d:%d:%d]
Line 1663: assert condition : Message sending failed
Line 1752: [DEBUG] HalSaveMsg = %d
Line 1869: assert condition : Invalid Message Id
Line 1916: %s(SaveMsg(%08x)).id(%d).Cnt(%u)
Line 1930: %s(msg(%08x),SaveMsg(%08x)).id(%d).Cnt(%u)
Line 1935: Early return - Cnt(%d)@Exception(pMsg==NULL):%s()
Line 1960: Free[pMsg(%08x)]
Line 1960: pMsg(%08x) after.pal_Free@%s
Line 1966: Early return - Cnt(%d)@LTE_MODEM_OFF- id(%d):%s()
Line 2003: [Debug] Is_Drx_Wakeup_ongoing = %d
Line 2053: Free[pMsg(%08x)]
Line 2053: pMsg(%08x) after.pal_Free@%s
Line 2059: Early return - Cnt(%d)@DRDS_ACT_DURING_RSRC_REQ_IND:%s()
Line 2089: Early return -Cnt(%d)[HalSaveMsg(%08x)]@Exception(No RF):%s()
Line 2097: L1LC_ProcHalMsg is called for processing of dsds_db->HalParamSaved
Line 2265: [LTE L1LC DSL1RC] PagingRequestTimer Stopped!
Line 2278: [LTE L1LC DSL1RC] HAL_L1LC_WAKEUP_START_IND is not processed due to insufficient time (%u) !!!
Line 2284: pMsg == HalSaveMsg @HAL_L1LC_WAKEUP_START_IND
Line 2291: release HalSaveMsg first to avoid HAL ILM dangle (pMsg (%08x)/HalSaveMsg(%08x)
Line 2297: [LTE_DSDS] HAL saved message [%d]
Line 2303: Early return - Cnt(%d)[HalSaveMsg(%08x)]@WAKEUP_START_IND:%s()
Line 2376: Free[pMsg(%08x)]
Line 2376: pMsg(%08x) after.pal_Free@%s
Line 2382: Early return - Cnt(%d)@Default Hal ILM:%s()
Line 2390: Memory is already freed. Avoid Dual Free of HalSaveMsg(%08x)
Line 2395: Free[pMsg(%08x)]
Line 2395: pMsg(%08x) after.pal_Free@%s
Line 2417: Normal return -Cnt(%d)[HalSaveMsg(%08x) pMsg(%08x)msg(%08x)]@%s()
Line 2451: msg NULL
Line 2459: Ignore MMC_IF msg(%d) due to MTM mode.
Line 2472: [SADS] N2L measure
Line 2484: [SADS] N2L measure during SADR >> send TIMING_LATCH_CNF
Line 2492: [SADS] N2L measure during SADR >> send MEAS_STOP_CNF
Line 2502: X2L [%d] TimingLatchReq or IratMeasStop while RF is with other stack LTE.
Line 2540: DRX spare timer has already elapsed. elapsedTime=%d avail_time=%d
Line 2550: gL1LC_DsdsBplmnDurationTmr is started for duration = %d ms
Line 2565: IsN2LSrchMeasRrscPending:%d 
Line 2681: MMC_LTEL1_CDMA_MISC_IND (GlobalMode : %d, BlockMobility : %d, IsMpsr : %d)
Line 2826: assert condition : Invalid Message Id(0x%x) 
Line 2830: Invalid SRI-IF response received while L1 is waiting for response, pointer(0x%x), Source(%d), Destination(%d), Length(%d)
Line 2852: [LTE L1LC]msg_id(%d) was freed in L1LC_ProcMmcIfMsg
Line 3574: [DEBUG] HalSaveMsg = %d
Line 3580: [LTE L1LC DSL1RC] Received Request [%d] when LTE is De-register[%d]
Line 3585: [LTE L1LC DSL1RC] L1LC_ProcMmcIfMsg :: Incoming Msg ID[0x%x]
Line 3672: assert condition : Invalid Message Id 
Line 3981: [L1LC] gHALSC_L1tunnelStackId:%d
Line 4102: assert condition : Message Sending Failed
Line 4139: @%s - cmd received (0x%x)
Line 4541: assert condition : Error in creating Event group
Line 4577: assert condition: Wrong event
Line 4584: assert condition
