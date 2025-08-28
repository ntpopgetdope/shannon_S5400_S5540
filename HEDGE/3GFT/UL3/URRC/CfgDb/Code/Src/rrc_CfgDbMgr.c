Line 100: rrc_ns_GetCPCConfiguredStatus: SIM ID(%d) Status(%d) 
Line 142: [DB] [ERROR]: File Name = %s : Line No =[%u]
Line 144: [DB] [ERROR]: DbIndex[%u] >= MAX_DB_INDEX
Line 150: [DB] [ERROR]: File Name = %s : Line No =[%u]
Line 152: [DB] [ERROR]: configDb_p[%u] is NULL 
Line 158: [DB] [ERROR]: File Name = %s : Line No =[%u]
Line 160: [DB] [ERROR]: DlSecondaryCellId[%u] >= MAX_SUPPORTED_DL_SECONDARY_CELLS
Line 250: [DB Mgr] rrc_DbMgr_CreateT314ReleaseMsgs
Line 258: [DB Mgr] [FAILURE] ILMSet not created
Line 299: [DB Mgr] rrc_DbMgr_CreateT315ReleaseMsgs
Line 307: [DB Mgr] [FAILURE] ILMSet not created
Line 350: [DB Mgr] rrc_DbMgr_CreateRollbackForConfigFailureMsgs
Line 358: [DB Mgr]   RollBackRabm, RollBackUmac & RollBackUphy are all FALSE
Line 362: [DB Mgr] [FAILURE] ILMSet not created
Line 369: [DB Mgr]   could not create ILMs for rollback ILM set
Line 419: [DB Mgr] rrc_DbMgr_CreateRestoreDedicatedResources
Line 424: [DB Mgr] [FAILURE] ILMSet not created
Line 497: [DB Mgr] Cannot Create ILM Set for Rollback Fach
Line 534: [DB Mgr] Cuamc RB Config ILM not sent as Num RB is Zero from DB
Line 912: [DB Mgr] MsgDb ulDchToModifyBitmask: 0x%x, MsgDb ulPhyTrchToReleaseBitMask: 0x%x,  MsgDb ulDchToAddBitmask: 0x%x
Line 955: [DB Mgr] MsgDb macConfRbReqBitMask: 0x%x, CfgDb rbIdPresentBitMask: 0x%x, MsgDb deletedRbIdBitMask: 0x%x 
Line 1023: [DB Mgr] cant be sending CPC Deactivate Req as CPC was not configured before
Line 1039: [DB Mgr] cant be sending CPC Rel Req as CPC was not configured before
Line 1141: [DB Mgr] HSUPA was not configured before 
Line 1433: [DB Mgr] DlSecondary Cell HSDPA (%d) was not configured before 
Line 1571: [DB Mgr] cant be sending CPC Deactivate Req as CPC was not configured before
Line 1591: [DB Mgr] cant be sending CPC Rel Req as CPC was not configured before
Line 1670: [DB Mgr] HSUPA was not configured before 
Line 1692: [DB Mgr]  HSUPA was not configured before
Line 2033: [DB Mgr] RollbackDb: ulDchToAddBitmask: 0x%x
Line 2038: [DB Mgr] RollbackDb: macConfRbReqBitMask: 0x%x
Line 2360: [DB Mgr] Create&RelDedRes
Line 2950: [DB Mgr]  Config Db RLCount : [%u] , Type : [%u] and DlUarfcn : [%u] 
Line 2955: [DB Mgr] Config Db  PSC : [%u]
Line 2958: [DB Mgr] dpchFrameOffset 0x%x
Line 2962: [DB Mgr] fdpchFrameOffset 0x%x
Line 3675: [DB Mgr] [R6] EDCH & HSDSCH
Line 3681: [DB Mgr] [R6] EDCH Only
Line 3688: [DB Mgr] [R5] HSDSCH
Line 3694: [DB Mgr] [R99] DCH
Line 3755: [DM Update]  PSC(%d)
Line 3774: [DM Update] BandId(%d), Uarfcn(%d), PSC(%d), LAC(%d), RAC(%d)
Line 3825: [DM Update] cycle1(%d), cycle2(%d), InactivityThForCycle2(%d), cycle(%d), InactivityThForCycle(%d)
Line 3829: [DM Update] EDCH TTI is not valid so skip the DM update
Line 3844: [DM Update] UtranDrxCycleLengthCoef(%d)
Line 4372: [DB Mgr] Config DB Created
Line 4451: [DB Mgr] Message DB Freed at Index [%d]
Line 4509: [DB Mgr] Message DB Created at Index [%d] for msgType [%d]
Line 4825: [DB Mgr] Stored Network Pointer is NULL
Line 5016: [DB Mgr] rrc_DbMgr_RemoveCompressedMode(%d)
Line 5106: [DB Mgr] rrc_DbprepareRABCIQMetricGS6D: - RAB count is 0
Line 5124: [DB Mgr] rrc_DbprepareRABCIQMetricGS6D:csRbInfo[%d].ucRadioBearerId = %d,csRbInfo[%d].ucRabId =%d 
Line 5140: [DB Mgr] rrc_DbprepareRABCIQMetricGS6D:psRbInfo[%d].ucRadioBearerId = %d,psRbInfo[%d].ucRabId =%d 
Line 5159: [DB Mgr] RAB::rrc_DbprepareCIQMetricGS6D: Srb[%d] & Rbid [%d]
Line 5205: [DB Mgr] rrc_DbGetCIQInfoForAllRls: [success] - DlRadioLinkCount = 0
Line 5226: [DB Mgr] RadioLinkSet::GetCIQInfoForAllRls: [success]
Line 5251: Not available configDb existed
Line 5258: CollectAndSendCIQMetricRF64: ResMgrPHY_p==NULL
Line 5274: [DB Mgr] ciqSendMetricRF64
Line 5275: [DB Mgr] ucNumRlSyncStatus = %d
Line 5276: [DB Mgr] ucPad = %d
Line 5279: [DB Mgr] wScramblingCode[%d] = %d
Line 5280: [DB Mgr] ucTpcCombinationIndex[%d] = %d
Line 5281: [DB Mgr] ucT313Status[%d] = %d
Line 5536: [DB][ECELL_FACH] Clear C_RNTI_INFO_OK
Line 5549: [DB][ECELL_FACH] Restore C_RNTI_INFO_OK
Line 5596: [DB][ECELL_FACH] Clear H_RNTI_INFO_OK
Line 617: [DB Mgr] rrc_DbMgr_AddIlmsForRelTimerIlmSet
Line 621: [DB Mgr]  ILM set not created
Line 723: [DB Mgr] rrc_DbMgr_popMsgDbforReleaseT314orT315Msgs
Line 1833: [DB Mgr] rrc_DbMgr_AddIlmsForRollback
Line 1867: [DB Mgr] no ILMs to actually release, RollbackFlags RollbackRabm[%d],  RollbackCumac[%d], RollbackCuphy[%d] 
Line 798: [DB Mgr] rrc_DbMgr_Check4RollbackIlms
Line 807: [DB Mgr]  no RABM ILMs to rollback
Line 829: [DB Mgr]  no CUPHY ILMs to rollback
Line 850: [DB Mgr]  no CUMAC ILMs to rollback
Line 1202: [DB Mgr]  Rollback ILM: CUMAC_REMOVE_TFCS_REQ is added
Line 1271: [DB Mgr] HSDPA was not configured before 
Line 1789: [DB Mgr] HSDPA was not configured before 
Line 2088: [DB Mgr] RollbackDb: macConfRbReqBitMask: 0x%x
Line 2119: [DB Mgr] RollbackDb: macConfRbReqBitMask: 0x%x
Line 2650: [DB Mgr] DB Commit: ulDchActuallyConfiguredInPhyBitMask 0x%x
Line 2711: [DB Mgr] DB Commit: dlDchActuallyConfiguredInPhyBitMask 0x%x
Line 2995: [DB Mgr] ===========Before DB Commit:===============
Line 3024: [DB Mgr] Db Commit: RL with psc: [%u], removed from config Db
Line 3032: [ERROR] PrimaryCpich: [%d] not present in ConfigDb
Line 3043: [ERROR] PrimaryCpich: [%d] not present in ConfigDb
Line 3065: [DB Mgr] Db Commit: HHO : All Rls to be replaced. Config Db RLCount Before: [%u], Config Db RLCount After: [%u]
Line 3086: [DB Mgr] RadioLinkPriv::AddToFddNetwork - No FddNetwork instance available
Line 3105: [DB Mgr] Db Commit: RL with psc: [%u], removed from config Db
Line 3108: [ERROR] PrimaryCpich: [%d] not present in Config Db
Line 3126: [DB Mgr] RadioLinkPriv::AddToFddNetwork - No FddNetwork instance available
Line 3129: [DB Mgr] Db Commit: RL with psc: [%u], added in config Db
Line 3137: [ERROR] No RL Info present at RL Index[%d] Config Db
Line 3147: [DB Mgr] ===========After DB Commit:===============
Line 3185: [DB Mgr] Db Commit: Reconfigured RAB: [%u] updated in Config Db at Index: [%u]
Line 3196: [ERROR] Reconfig Rab [%d] not present in Config Db
Line 3226: [DB Mgr] Db Commit: RAB: [%u] deleted from Config Db at Index: [%u]
Line 3262: [DB Mgr] Db Commit: RAB: [%u] Added in Config Db at Index: [%u]
Line 3278: [DB Mgr] rrc_DbMgr_commitRabInfo
Line 3287: [DM Update] No RAB(0) - Initiated from reception of RRC Connection Setup
Line 3296: [DM Update] CS RAB + PS RAB(3)
Line 3301: [DM Update] CS RAB only(1)
Line 3306: [DM Update] PS RAB only(2)
Line 3311: [DM Update] No RAB(0)
Line 4951: [DM Update] BandId(%d), Uarfcn(%d), PSC(%d), RAC(%d)
Line 4955: [DM Update] PLMN(%x%x%x%x%x%x)
Line 4959: Wrong BandId 0(Dluarfcn: %d) was detected so it won't be updated to SIPC
Line 4964: Wrong UARFCN(%d) was detected so it won't be updated to SIPC
