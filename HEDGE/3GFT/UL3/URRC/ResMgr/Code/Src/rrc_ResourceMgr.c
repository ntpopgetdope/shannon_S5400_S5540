Line 357: [ResMgr][init] Timer 314 creation FAIL
Line 363: [ResMgr][init] Timer 315 creation FAIL
Line 369: [ResMgr][init] Timer for SRB Delay creation FAIL
Line 449: [ResMgr][free] T314 Delete FAIL
Line 455: [ResMgr][free] T315 Delete FAIL
Line 461: [ResMgr][free] SRBDelayTimer Delete FAIL
Line 512: [ResMgr][MapExtMsgIdToIntMsgId] procedure started 
Line 562: [ResMgr] CUPHY_FACH_RESOURCE_FOR_CTCH_CONFIG_CNF Msg Rxed
Line 567: [ResMgr] CUPHY_FACH_RESOURCE_FOR_CTCH_RELEASE_CNF Msg Rxed 
Line 594: [ResMgr] External Message to Internal Message mapping failed
Line 616: [ResMgr][PdcpRelocCnfGetSNforRBId] procedure started 
Line 750: [ResMgr][getCurrentCrnti] CRNTI IE Is Not Present
Line 17885: AsType = AS_TYPE_HSPADCPLUS
Line 17890: AsType = AS_TYPE_HSPAPLUS
Line 17895: AsType = AS_TYPE_HSUPA
Line 17900: AsType = AS_TYPE_HSDPA
Line 17905: AsType = AS_TYPE_UMTS
Line 17909: No need to update for Cell_FACH / PCH / IDLE state
Line 21143: TimerExpiryStatus = %d
Line 21152: TimerExpiryStatus = %d
Line 21167: TimerExpiryStatus = %d
Line 21178: TimerExpiryStatus = %d
Line 21190: TimerExpiryStatus = %d
Line 21545: PCH channel Currently configured
Line 21550: FACH channel Currently configured
Line 21555: HS-Common channel Currently configured
Line 21560: No Common channel Currently configured
Line 1120: rrc_PostNewState FAIL
Line 1128: ProcessRLFailure FAIL
Line 1137: ProcessRLFailureAfterRelease FAIL
Line 1144: ILMMsgBufPtr is NULL
Line 1149: SendInternalMsgSingleton FAIL
Line 11717: ProcessRLFailure() started
Line 11726: TimerExpiryStatus = %d
Line 11737: ProcessRelDedRes FAIL
Line 11744: Error going to WAITDCHRESRELCNF
Line 11752: DCH resources Not Configured
Line 14406: DCH Resources Flag = FALSE
Line 14415: rrc_BoundUphy_RemoveAllTids() FAIL
Line 14430: rrc_BoundUmac_RemoveAllTids() FAIL
Line 14444: ConfigDBMgr: CreateReleaseDedicatedResources FAIL
Line 14457: IlmPtr is NULL
Line 14488: CPC IlmPtr is NULL
Line 14505: HS-DSCH IlmPtr is NULL
Line 14512: E-DCH IlmPtr is NULL
Line 12405: ProcessRLFailureAfterRelease() started
Line 12414: TimerExpiryStatus = %d
Line 11802: T314: %d, T315: %d 
Line 11804: T314RBAssociation: %d, T315RBAssociation: %d
Line 11815: rrc_PostNewState FAIL
Line 11843: Inform to CnxMgr abt T314 expiry since T314 = 0: CS
Line 11850: Inform to CnxMgr abt T314 expiry since T314 = 0: PS
Line 11866: T315 Start Failed
Line 11871: T315 started (TmId=%d)
Line 11877: T315ExpiryMsg is NULL
Line 11897: T314 Start Failed
Line 11902: T314 started (TmId=%d)
Line 11908: T314ExpiryMsg is NULL
Line 11937: Inform to CnxMgr abt T315 expiry since T315 = 0: CS
Line 11944: Inform to CnxMgr abt T315 expiry since T315 = 0: PS
Line 11964: T315 Start Failed
Line 11969: T315 started (TmId=%d)
Line 11975: T315ExpiryMsg is NULL
Line 11989: CreateAndSendRollbackMsgsForFach FAIL
Line 11996:  T314 & T315 are non ZERO. But no RBMultiplexOptPresent
Line 11998:  T314Active : %d  T315Active: %d  RBMultiplexOptPresent : %d 
Line 12006: Error posting T314ANDT315RUNNING
Line 12014: Error posting T314RUNNING
Line 12022: Error posting T315RUNNING
Line 12028: T314 & T315 Not started
Line 12036: Error posting READYFORCONFIGREQ
Line 12039: TimerExpiryStatus = %d
Line 14880: CnxMgr sent Dedicated Release when FACH Configured
Line 14892: CnxMgr sent Dedicated Release when HSDSCH/RACH Configured in CELL_FACH state
Line 14904: No FACH or HSDSCH Commoon or DCH Resources for UPHY Configured
Line 14922: SendInternalMsgSingleton FAIL
Line 14937: Error going to WAITPHYDEDICATEDRESRELCNF
Line 14945: Error going to WAITPHYSHAREDRESRELCNF
Line 19387: rrc_DbMgr_CreateT314ReleaseMsgs FAIL
Line 19395: IlmMsgBufPtr is NULL
Line 19405: IlmMsgBufPtr is NULL
Line 19415: IlmMsgBufPtr is NULL
Line 19428: PDCP ILMs Not Needed
Line 19436: IlmMsgBufPtr is NULL
Line 19497: rrc_DbMgr_CreateT315ReleaseMsgs FAIL
Line 19505: IlmMsgBufPtr is NULL
Line 19515: IlmMsgBufPtr is NULL
Line 19525: IlmMsgBufPtr is NULL
Line 19538: PDCP ILMs Not Needed
Line 19546: IlmMsgBufPtr is NULL
Line 16929: RollbackInst returnd NULL
Line 12076: T314: %d, T315: %d 
Line 12078: T314RBAssociation: %d, T315RBAssociation: %d
Line 12080: Process RL failure & NO RABS configured
Line 12094: Signalling connection going to release: So Going to IDLE
Line 12106: No Rabs configured: ONLY CS DOMAIN SIGNALLING EXIST so starting T314
Line 12115: T314 Start Failed
Line 12120: T314 started (TmId=%d)
Line 12126: T314ExpiryMsg is NULL
Line 12140: No Rabs configured: CS & PS DOMAIN SIGNALLING EXIST so starting T314 & T315
Line 12149: T314 Start Failed
Line 12154: T314 started (TmId=%d)
Line 12160: T314ExpiryMsg is NULL
Line 12172: T315 Start Failed
Line 12177: T315 started (TmId=%d)
Line 12183: T315ExpiryMsg is NULL
Line 12196: No Rabs configured: ONLY PS DOMAIN SIGNALLING EXIST so starting T315
Line 12205: T315 Start Failed
Line 12210: T315 started (TmId=%d)
Line 12216: T315ExpiryMsg is NULL
Line 12232: No Rabs configured: NO Signalling connection existes: Going to IDLE
Line 12246: No Rabs configured: CS domain SIGNLLING EXIST and T315 is Zero, so starting only T314
Line 12256: T314 Start Failed
Line 12261: T314 started (TmId=%d)
Line 12267: T314ExpiryMsg is NULL
Line 12273: Only T314 is Valid so Started only T314
Line 12278: No Rabs configured but Only T314 is Valid but no CS Signalling connection
Line 12286: PS domain SIGNLLING EXIST and T314 value is Zero, so starting only T315 
Line 12295: T315 Start Failed
Line 12300: T315 started (TmId=%d)
Line 12306: T315ExpiryMsg is NULL
Line 12312: No Rabs configured but Only T315 is Valid so Started only T315
Line 12317: No Rabs configured but Only T315 is Valid but no PS Signalling connection
Line 12324: No Rabs configured: T314 & T315 are ZERO. So not started any TIMER - Go to IDLE
Line 12334: CreateAndSendRollbackMsgsForFach FAIL
Line 12341:  T314 & T315 are non ZERO. But no RBMultiplexOptPresent
Line 12343:  T314Active : %d  T315Active: %d  RBMultiplexOptPresent : %d 
Line 12351: Error posting T314ANDT315RUNNING
Line 12359: Error posting T314RUNNING
Line 12367: Error posting T315RUNNING
Line 12373: T314 & T315 Not started
Line 12381: Error posting READYFORCONFIGREQ
Line 12384: TimerExpiryStatus = %d
Line 1179: ProcessRcvdConfigMsg FAIL
Line 12492: CommonHandleLayersMsg FAIL
Line 12526: RecalcStartMsg is NULL
Line 12532: SendInternalMsgSingleton FAIL
Line 12538: rrc_PostNewState FAIL
Line 12545: CreateAndProcessIlmSetForLayersMsg FAIL
Line 12570: CheckForSecurityAndRelocation FAIL
Line 12572: IlmSet Pointer is NULL
Line 12589: Backup for Rollback : DOFF(%d), RefCell(%d)
Line 12613: Backup for Rollback (L1C) : PSC(%d), FrameOffset(%d)
Line 12632: Backup for Rollback (RRC) : PSC(%d), FrameOffset(%d)
Line 12643: InitialIlmCountCheck FAIL
Line 17389: Procedure SendConftoCnxMngr FAIL
Line 17400: SecurityMgr GenFunction FAIL
Line 17405: SendInternalMsgSingleton FAIL
Line 17410: Post WAITFORSECURITYCONFIGCNF FAIL
Line 17418: CheckAndProcessSrnsInfo FAIL
Line 17948: GenerateAndSendRabActivateInd FAIL
Line 17954: SIB11_READ_DCHSPA_YES
Line 17959: SIB11_READ_DCHSPA_NO
Line 17977: AS_TYPE(%d) 3: UMTS, 4: HSDPA, 5: HSUPA, 6: HSPA+
Line 17986: CreateAndSendMacConfigHfnReq FAIL
Line 18014: SRBDelayTimer FAIL
Line 18018: SRBDelay Timer started (TmId=%d)
Line 18023: Post WAITFORSRBDELAYTIMEREXPIRY FAIL
Line 18043: Post WAITCOMPLETECONFIGHANDOVER FAIL
Line 18051: Post WAITCOMPLETECONFIG FAIL
Line 18059: Post READYFORCONFIGREQ FAIL
Line 18083: ProcessRelDedRes FAIL
Line 18087: Error going to WAITDCHRESRELCNF
Line 18108: Error going to WAITPHYSHAREDRESRELCNF
Line 18125: [ECELL_FACH] Error going to WAITHSDSCHCOMMONRACHRELCNF
Line 18135: Error going to READYFORCONFIGREQ
Line 18149: ProcessRLFailure FAIL
Line 18168: Error going to READYFORCONFIGREQ
Line 18177: CommonGenerateAndSendConfs FAIL
Line 16428: stateInd is NULL
Line 17621: [ERROR] TM RBs are Not present
Line 17680:  HFN Incremented : State(FachToDCH)
Line 17751: MsgProcHelpers: GetMacCipheringActivationTime FAIL
Line 17776: [WARNING] RAB Setup Info is Not present
Line 17863: MsgProcHelpers: GetMacCipheringActivationTime FAIL
Line 14692: FACH Resources Flag = FALSE
Line 14694: [ECELL_FACH] FACH Resources Flag = %d HsDschCmnResPresentFlag = %d
Line 18225: ERR: Message out of Bounds 
Line 18233: Failure sending msg to CnxMgr
Line 18239: CnfMsgHeaderPtr is NULL
Line 17452: Invalid RlcContinueReqPtr
Line 17496: Post WAITFORRELOCCONFIGCNF Fail
Line 17505: SendConftoCnxMngr FAIL
Line 17516: SendConftoCnxMngr FAIL
Line 12672: GenerateAndSendRabSetupMsg FAIL
Line 12679: IlmCountCheckAfterPhy FAIL
Line 16457: ILMMsgBufPtr is NULL
Line 16467: Post WAITFORRABMSETUPCNF FAIL
Line 16474: SendInternalMsgSingleton FAIL
Line 12703: GenerateAndSendPhyConfigMsg FAIL
Line 12716: IlmCountCheckAfterPhy FAIL
Line 16503: PHY IlmPtr is NULL
Line 16509: Error sending msg to ResMgrPHY
Line 16527: Error posting WAITFORPHYMSGCONFIGUREDCNF
Line 12741: GenerateAndSendMacConfigMsg FAIL
Line 12754: ProcessPhyMacConfigComplete FAIL
Line 16554: MAC GenFunction FAIL
Line 16560: SendInternalMsgSeingleton FAIL
Line 16566: Post WAITFORPHYMACCONFIGCNF FAIL
Line 16969: SendConftoCnxMngr() FAIL
Line 17005: CreateAndSendRabRollbackMessage FAIL
Line 17012: ProcessRelDedRes FAIL
Line 17018: Error going to READYFORCONFIGREQ
Line 17037: CreateAndSendRabRollbackMessage FAIL
Line 17046: SendConftoCnxMngr FAIL
Line 17081: IlmCountCheckAfterMac FAIL
Line 17103: Post WAITFORPHYMACCONFIGCNF FAIL
Line 17265: ProcessPhyNegativeCnf: Serious ERR
Line 17277: CreateAndSendRabRollbackMessage FAIL
Line 17291: ProcessRLFailure FAIL
Line 17304: CommonGenerateAndSendConfs() FAIL
Line 17315: GenerateRabRollbackMsgDch FAIL
Line 17319: SendConftoCnxMngr FAIL
Line 17325: Post NEWCONFIGL1SYNCFAIL_WAITFORROLLBACKCNF FAIL
Line 17342: ProcessRelDedRes FAIL
Line 17348: Error going to WAITDCHRESRELCNF
Line 17357: CreateAndSendRollbackMsgsForFach FAIL
Line 17362: SendConftoCnxMngr FAIL
Line 16776: ResourceMgr_p->dlMsgInst is NULL
Line 16784: IlmSetPtr is NULL
Line 16798: RollbackInst is NULL
Line 16837: [Rollback] Gen PHY Config Failed
Line 16842: [Rollback] Failed to send PHY Config
Line 16852: [Rollback] Gen MAC Config Failed
Line 16857: [Rollback] Failed to send MAC Config
Line 21446: No DlRlInfo ILE (%d) 
Line 21460: No DlRlInfo ILE (%d) 
Line 16888: RollbackInst returnd NULL
Line 16711: ResourceMgr_p->dlMsgInst is NULL
Line 16736: Invalid RollbackIlmSet
Line 20012: FATAL ERROR: Flag wrongly set
Line 20052: HS-DSCH is configured(Restore)
Line 20065: HS-DSCH is configured
Line 20075: HS-DSCH is configured
Line 20099: HS-DSCH is released
Line 20135: E-DCH is configured(Restore)
Line 20144: E-DCH is configured
Line 20160: E-DCH is released
Line 19962: ResourceMgr_p->dlMsgInst = NULL
Line 19890: DTX-DRX is configured(Restore)
Line 19899: DTX-DRX is configured
Line 19923: E-DCH is released
Line 19802: DTX-DRX is configured(Restore)
Line 19811: DTX-DRX is configured
Line 19835: E-DCH is released
Line 21253: Secondary HS-DSCH is configured(Restore)
Line 21265: dlMsgInst is NULL
Line 21267: Secondary HS-DSCH is configured
Line 21279: Secondary HS-DSCH is released
Line 21283: dlMsgInst is NULL
Line 17241: Current CFN, %d
Line 12783: GenerateAndSendRlcConfigMsg FAIL
Line 12792: IlmCountCheckAfterRlc FAIL
Line 16593: RLC GenFunction FAIL
Line 16599: SendInternalMsgSeingleton FAIL
Line 16605: Post WAITFORRLCCONFIGCNF FAIL
Line 12817: GenerateAndSendPdcpConfigMsg FAIL
Line 12826: IlmCountCheckAfterPdcp FAIL
Line 16632: PDCP GenFunction FAIL
Line 16638: SendInternalMsgSingleton FAIL
Line 16644: Post WAITFORPDCPCONFIGCNFF FAIL
Line 12851: GenerateAndSendRabConfigMsg FAIL
Line 12860: CheckForSecurityAndRelocation FAIL
Line 16671: RABM GenFunction FAIL
Line 16677: SendInternalMsgSingleton FAIL
Line 16683: Post WAITFORRABMCONFIGCNF FAIL
Line 1205: ProcessRcvdConfigMsg FAIL
Line 1225: ProcessFachLayersFromFachMsg FAIL
Line 13947: ILMInstId is NULL
Line 13982: Sib5Instance = NULL
Line 13989: SUCCESS to get FachMeasOccasionInfoPtr[%u]
Line 14001: Error Creating ILMs
Line 14019: CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
Line 14034: Error Creating ILMs
Line 14048: CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
Line 14058: FAIL to get FachMeasOccasionInfoPtr
Line 14065: Error Creating ILMs
Line 14079: CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
Line 14092: ProcessRcvdConfigMsg FAIL
Line 1246: ProcessRcvdConfigMsg FAIL
Line 1276: rrc_PostNewState FAIL
Line 1283: ProcessRcvdConfigMsg FAIL
Line 1327: Error going to WAITPHYSHAREDRESRELCNF
Line 1335: ProcessRcvdConfigMsg FAIL
Line 1341: DCH Resources Flag = TRUE
Line 1366: ProcessRcvdConfigMsg FAIL
Line 1372: DCH Resources Flag = TRUE
Line 1418: PCH Resources Flag = FALSE
Line 1432: ERR: Dedicated Resource is not yet released
Line 1449: Error going to WAITPHYSHAREDRESRELCNF
Line 1457: ProcessPchResourcesMsg FAIL
Line 14377: CTCH Resources Flag = FALSE
Line 12909: Sib5Instance = NULL
Line 12916: Error Creating ILMs
Line 12932: Error Creating ILMs
Line 12944: Sib5Instance = NULL
Line 12950: Error Creating ILMs
Line 12958: Unknown RRC State(%d)
Line 12976: CUPHY_PCH_RESOURCES_CONFIG_REQ = NULL
Line 12987: CUMAC_CONFIG_RB_REQ = NULL
Line 12998: CURLC_CONFIG_REQ = NULL
Line 13007: Error going to WAITCOMMONCHANNELSCONFIGCNF
Line 3839: PhyPchResConfig FAIL
Line 3846: PCH Resources Flag = TRUE
Line 3865: Failure sending msg to CnxMgr
Line 3871: Error going to READYFORCONFIGREQ
Line 1651: ProcessInitialAccessFachResourcesMsg FAIL
Line 1662: Removing SysInfo of [UARFCN:%d, PSC:%d] from ServingCellSysInfoCache because SIB 5/6 has wrong configuration
Line 1670: CnfMsg is NULL
Line 1676: ProcessFachResourcesReleaseMsg FAIL
Line 13183: Sib5Instance = NULL
Line 13191: Error Creating ILMs
Line 13204: CnxMgrIdleInstId is NULL
Line 13230: Error Creating BG_PCH ILMs
Line 13241: FACH & RACH ILM population successful
Line 13244: PCH Configured Flag 
Line 13316: [ECELL_FACH] CUPHY_HSDSCH_COMMON_CONFIG_REQ = NULL
Line 13327: CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
Line 13338: CUPHY_RACH_RESOURCES_CONFIG_REQ = NULL
Line 13357: CUPHY_BG_PCH_RESOURCES_CONFIG_REQ = NULL
Line 13363: IsBgPchResourcesNeeded = %d, ResourceMgr_p->BgPchResourcesPresentFlag= %d
Line 13371: Error going to WAITCOMMONCHANNELSCONFIGCNF
Line 13383: Error going to WAITPCHRESRELCNF
Line 14353: PCH Resources Flag = FALSE
Line 1733: ProcessFachResourcesReleaseMsg FAIL
Line 1740: CnfMsg is NULL
Line 1747: ProcessFachResourcesReleaseMsg FAIL
Line 1752: TimerExpiryStatus = %d
Line 13616: FachResourcesPresentFlag %d
Line 13618: [ECELL_FACH] HsDschCmnResPresentFlag %d
Line 13720: SibInstance = NULL
Line 13728: Error Creating ILMs
Line 13742: CnxMgrInstId = NULL
Line 13764: BgPchResource is needed
Line 13769: Error Creating BG_PCH ILMs
Line 13779: BgPchResource is not needed
Line 13793: Error going to WAITPCHRESRELCNF
Line 13808: Error going to WAITPCHRESRELCNF
Line 13821: [ECELL_FACH] Error going to WAITHSDSCHCOMMONRACHRELCNF
Line 13836: CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
Line 13848: [ECELL_FACH] CUPHY_HSDSCH_COMMON_CONFIG_REQ = NULL
Line 13859: CUPHY_RACH_RESOURCES_CONFIG_REQ = NULL
Line 13877: CUPHY_BG_PCH_RESOURCES_CONFIG_REQ = NULL
Line 13887: Error going to READYFORCONFIGREQ
Line 13896: Error going to READYFORCONFIGREQ
Line 1803: ProcessFachResourcesAndLayersMsg FAIL
Line 1814: Removing SysInfo of [UARFCN:%d, PSC:%d] from ServingCellSysInfoCache because SIB 5/6 has wrong configuration
Line 1822: SendConftoCnxMngr FAIL
Line 1826: TimerExpiryStatus = %d
Line 14146: ILMInstId is NULL
Line 14169: Sib5Instance = NULL
Line 14177: Error Creating ILMs
Line 14204: BgPchResource is needed
Line 14209: Error Creating BG_PCH ILMs
Line 14218: BgPchResource is not needed
Line 14235: CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
Line 14248: [ECELL_FACH] CUPHY_HSDSCH_COMMON_CONFIG_REQ = NULL
Line 14259: CUPHY_RACH_RESOURCES_CONFIG_REQ = NULL
Line 14276: CUPHY_BG_PCH_RESOURCES_CONFIG_REQ = NULL
Line 14300: Error going to WAITRESANDLYRSRACHFACHCNF
Line 15188: CTCH Resources Flag = FALSE
Line 15196: PCH Resources Flag = FALSE
Line 15221: Error going to WAITPHYSHAREDRESRELCNF
Line 15230: CnfMsgHeaderPtr is NULL
Line 15235: Failure sending msg to CnxMgr
Line 15243: Error going to READYFORCONFIGREQ
Line 2221: RecalcStartMsg is NULL
Line 2227: SendInternalMsgSingleton FAIL
Line 2233: rrc_PostNewState FAIL
Line 2248: Releasing CTCH
Line 2259: Error going to WAITPHYSHAREDRESRELCNF
Line 2271: Error going to WAITFORPHYINITCNF
Line 2278: FACH Resources Flag = FALSE
Line 2282: [ECELL_FACH] HsDschCmnResPresentFlag = FALSE
Line 2286: PCH Resources Flag = FALSE
Line 2291: BG_PCH Resources Flag = FALSE
Line 2295: CTCH Resources Flag = FALSE
Line 2398: rrc_PostNewState FAIL
Line 2405: ProcessCompleteRelDedRes FAIL
Line 14994: CnfMsgHeaderPtr is NULL
Line 14998: Failure sending msg to CnxMgr
Line 15005: DCH Resources Flag = FALSE
Line 15015: ConfigDBMgr: CreateReleaseDedicatedResources FAIL
Line 15028: IlmPtr is NULL
Line 15057: CPC IlmPtr is NULL
Line 15069: HS-DSCH IlmPtr is NULL
Line 15076: E-DCH IlmPtr is NULL
Line 15131: Error going to WAITPHYDEDICATEDRESRELCNF
Line 2444: RecalcStartMsg is NULL
Line 2450: SendInternalMsgSingleton FAIL
Line 2456: Error going to WAITFORSTARTRECALCINTERRAT
Line 2463: DCH Resources Flag = FALSE
Line 2480: ProcessCompleteRelConnAndSharedRes FAIL
Line 15513: CTCH Resources Flag = FALSE
Line 15539: CnfMsgHeaderPtr = NULL
Line 15545: Failure sending msg to CnxMgr
Line 15553: Error going to READYFORCONFIGREQ
Line 15565: Error going to WAITPHYSHAREDRESRELCNF
Line 20191: SendInternalMsgSingleton FAIL
Line 2509: rrc_PostNewState FAIL
Line 2516: ProcessCompleteRelConnAndDedRes FAIL
Line 15747: CnxMgr sent Dedicated Release when FACH Configured
Line 15766: CnxMgr sent Dedicated Release when HSDSCH COMMON Configured
Line 15783: No FACH or DCH Resources for UPHY Configured
Line 15801: SendInternalMsgSingleton FAIL
Line 15823: Error going to WAITPHYDEDICATEDRESRELCNF
Line 15836: CnfMsgHeaderPtr = NULL
Line 15841: Failure sending msg to CnxMgr
Line 15848: Error going to READYFORCONFIGREQ
Line 15859: Error going to WAITPHYSHAREDRESRELCNF
Line 2596: DCH Resources Flag = TRUE
Line 2604: Error sending msg to ResMgrPHY
Line 2610: Error going to WAITFORRESTOREPHYMACCONFIGCNF
Line 2639: Sib5Instance = NULL
Line 2647: Error Creating ILMs
Line 2655: IlmSetPtr is NULL
Line 2668: CUPHY_PCH_RESOURCES_CONFIG_REQ = NULL
Line 2676: Error going to WAITCOMMONCHANNELSCONFIGCNF
Line 2717: Sib5Instance = NULL
Line 2726: Error Creating ILMs
Line 2745: CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
Line 2757: [ECELL_FACH] CUPHY_HSDSCH_COMMON_CONFIG_REQ = NULL
Line 2768: CUPHY_RACH_RESOURCES_CONFIG_REQ = NULL
Line 2780: Error going to WAITRESUMEFACHRESCNF
Line 2814: IntMsgInstPtr is NULL
Line 2847: IntMsgInstPtr is NULL
Line 2879: IntMsgInstPtr is NULL
Line 2905: ProcessInitialSib7message FAIL
Line 2914: ProcessSubsequentSib7message FAIL
Line 15898: rrc_SIB7_getUlInterference FAIL
Line 15910: rrc_SIB7_getPersistanceLevelType6 FAIL
Line 15922: Sib5InstanceId is NULL
Line 15929: rrc_SIB7_getPersistanceLevelType5 FAIL
Line 15940: CreateAndSendSib7Ilms FAIL
Line 17543: rrc_SIB7_createIlms FAIL
Line 17569: IlmSetInst is NULL
Line 15979: rrc_SIB7_getUlInterference FAIL
Line 15997: rrc_SIB7_getPersistanceLevelType6 FAIL
Line 16009: Sib5InstanceId is NULL
Line 16015: rrc_SIB7_getPersistanceLevelType5 FAIL
Line 16032: rrc_SIB7_createIlms FAIL
Line 3306: Wait for Signaling Grant to do Rollback
Line 3359: WAITFORPHYUMTSRATMODECNF transition FAIL
Line 3451: NonUmtsRatReq Called in Connected & NonUmtsRatReq already Sent in Presuspend Sate
Line 3484: CnfMsgHeaderPtr is NULL
Line 3488: SendInternalMsgSingleton FAIL
Line 3495: Post READYFORCONFIGREQ FAIL
Line 3504: SendInternalMsgSingleton FAIL
Line 3517: WAITFORPHYNONUMTSRATMODECNF transition FAIL
Line 20820: CnfMsgHeaderPtr is NULL
Line 20825: Failure sending msg to CnxMgr
Line 20832: CnfMsgHeaderPtr is NULL
Line 20837: Failure sending msg to CbsMgr
Line 3645: Failure sending msg to SysInfoMgr
Line 20220: Unrecoverable Reset Not Handled in PCH/Pending PCH State
Line 20242: rrc_PostNewState FAIL
Line 20250: ProcessUnRecoverableError FAIL
Line 20264: ILMMsgBufPtr is NULL
Line 20269: SendInternalMsgSingleton FAIL
Line 20274: Unrecoverable Error sent to CnxMgrConn
Line 20287: ILMMsgBufPtr is NULL
Line 20292: SendInternalMsgSingleton FAIL
Line 20297: Unrecoverable Error sent to CnxMgrConn
Line 20471: ProcessUnRecoverableError() procedure started
Line 20490: Error going to WAITDCHRESRELCNF
Line 20531: ProcessUnRecoverableErrorAfterRelease() started
Line 20540: TimerExpiryStatus = %d
Line 20544: Signalling connection going to release: So Going to IDLE
Line 20554: Error posting READYFORCONFIGREQ
Line 20570: T314: %d,  T315: %d 
Line 20572: T314RBAssociation: %d,  T315RBAssociation: %d
Line 20584: rrc_PostNewState FAIL
Line 20613: Inform to CnxMgr abt T314 expiry since T314 = 0: CS
Line 20620: Inform to CnxMgr abt T314 expiry: PS
Line 20636: T315 Start Failed
Line 20641: T315 started (TmId=%d)
Line 20659: T314 Start Failed
Line 20664: T314 started (TmId=%d)
Line 20690: Inform to CnxMgr abt T315 expiry since T315 = 0: CS
Line 20697: Inform to CnxMgr abt T315 expiry since T315 = 0: PS
Line 20717: T315 Start Failed
Line 20722: T315 started (TmId=%d)
Line 20737: CreateAndSendRollbackMsgsForFach FAIL
Line 20746: Error posting T314ANDT315RUNNING
Line 20751: Transition to T314ANDT315RUNNING
Line 20759: Error posting T314RUNNING
Line 20764: Transition to T314RUNNING
Line 20772: Error posting T315RUNNING
Line 20777: Transition to T315RUNNING
Line 20783: T314 & T315 Not started
Line 20791: Error posting READYFORCONFIGREQ
Line 20796: Transition to READYFORCONFIGREQ
Line 20801: TimerExpiryStatus = %d
Line 20445: DefaultState_ReleaseConnecteModeDuringSelectingCell() procedure started
Line 20450: ProcessRelConnDuringSelectingCell FAIL
Line 15280: BCH will be maintained
Line 15376: SendInternalMsgSingleton FAIL
Line 15390: CnfMsgHeaderPtr = NULL
Line 15396: Failure sending msg to CnxMgr
Line 15404: Error going to READYFORCONFIGREQ
Line 15416: Error going to WAITPHYSHAREDRESRELCNF
Line 3390: Wait for Signaling Grant to do Rollback
Line 3416: WAITFORPHYNONUMTSRATMODECNF transition FAIL
Line 3617: WAITFORPHYNONUMTSRATMODECNF transition FAIL
Line 2324: Releasing CTCH
Line 2335: Error going to WAITPHYSHAREDRESRELCNF
Line 2351: Error going to WAITFORPHYINITCNF
Line 2357: FACH Resources Flag = FALSE
Line 2361: [ECELL_FACH] HsDschCmnResPresentFlag = FALSE
Line 2365: PCH Resources Flag = FALSE
Line 2370: BG_PCH Resources Flag = FALSE
Line 21224: SendInternalMsgSingleton FAIL
Line 2546: Error going to WAITPHYSHAREDRESRELCNF
Line 1497: CTCH Resources Flag already  = TRUE
Line 1508: Dedicated Resource is not yet released
Line 1515: Failure sending msg to CbsMgr
Line 1529: Failure sending msg to CbsMgr
Line 1534: Error going to WAITPHYSHAREDRESRELCNF
Line 1543: ProcessCtchResourcesMsg FAIL
Line 1552: Failure sending msg to CnxMgr
Line 1566: PCH not Configured: Failure sending msg to CbsMgr
Line 1573: Failure sending msg to CbsMgr
Line 13055: Sib5Instance = NULL
Line 13062: Error Creating ILMs
Line 13069: Incompatible RRC State(%d) with CTCH
Line 13087: CUPHY_PCH_RESOURCES_CONFIG_REQ = NULL
Line 13098: CUMAC_CONFIG_RB_REQ = NULL
Line 13109: CURLC_CONFIG_REQ = NULL
Line 13118: Error going to WAITCOMMONCHANNELSCONFIGCNF
Line 1603: Error going to WAITPHYSHAREDRESRELCNF
Line 1614: CTCH already released
Line 1619: Failure sending msg to CnxMgr
Line 3688: WAITFORPHYNONUMTSRATMODECNF transition FAIL
Line 18499: [ECELL_FACH] ResourceMgr_p->BgPchResConfRequested = %d
Line 18510: [ECELL_FACH] Set HsDschCmnResPresentFlag = TRUE
Line 18522: [ECELL_FACH] CUMAC_CONFIG_UEID_REQ = NULL
Line 18532: [ECELL_FACH] CUMAC_CONFIG_MACEHS_HSDSCH_REQ = NULL
Line 18542: [ECELL_FACH] CUMAC_CONFIG_RACH_REQ = NULL
Line 18552: [ECELL_FACH] CUMAC_CONFIG_RB_REQ = NULL
Line 18562: [ECELL_FACH] CURLC_CONFIG_REQ = NULL
Line 18571: [ECELL_FACH] IlmSetPtr is NULL
Line 18661: [ECELL_FACH] Failure sending msg to CnxMgr
Line 18667: [ECELL_FACH] Unconditional NonUmtsRatReq
Line 18677: [ECELL_FACH] Error going to READYFORCONFIGREQ
Line 18685: [ECELL_FACH] CnfMsgHeaderPtr is NULL
Line 18694: [ECELL_FACH] Error going to READYFORCONFIGREQ
Line 18702: [ECELL_FACH] Error going to WAITCOMPLETECONFIG
Line 18266: Need to wait for BgPchResConfCnf
Line 18276: FACH Resources Flag = TRUE
Line 18288: CUMAC_CONFIG_RACH_REQ = NULL
Line 18299: CUMAC_CONFIG_RB_REQ = NULL
Line 18310: CURLC_CONFIG_REQ = NULL
Line 18320: IlmSetPtr is NULL
Line 18414: Failure sending msg to CnxMgr
Line 18421: Unconditional NonUmtsRatReq
Line 18432: Error going to READYFORCONFIGREQ
Line 18441: CnfMsgHeaderPtr is NULL
Line 18451: Error going to READYFORCONFIGREQ
Line 18460: Error going to WAITCOMPLETECONFIG
Line 18732: ResourceMgr_p->BgPchResRelRequested = %d
Line 18755: CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
Line 18767: [ECELL_FACH] CUPHY_HSDSCH_COMMON_CONFIG_REQ = NULL
Line 18778: CUPHY_RACH_RESOURCES_CONFIG_REQ = NULL
Line 18795: CUPHY_BG_PCH_RESOURCES_CONFIG_REQ = NULL
Line 18807: CnfMsgHeaderPtr is NULL
Line 18812: Failure sending msg to CnxMgr
Line 18821: Error going to READYFORCONFIGREQ
Line 21328: BgPchResReleaseCnf: Negative Cnf
Line 21387: BgPchResConfigCnf: Negative Cnf
Line 3893: PhyCTCHResConfig FAIL
Line 3900: CTCH Resources Flag = TRUE
Line 3912: Failure sending msg to CnxMgr
Line 3918: Error going to READYFORCONFIGREQ
Line 3962: WAITFORPHYNONUMTSRATMODECNF transition FAIL
Line 19238: Need to wait for BgPchResConfigCnf or BgPchResReleaseCnf
Line 19265: SendConftoCnxMngr FAIL
Line 19310: Error going to WAITPHYSHAREDRESRELCNF
Line 19331: FACH Resources Flag = TRUE
Line 19335:  [ECELL_FACH] HsDschCmnResCfgRequested = TRUE
Line 19347: ProcessRcvdConfigMsg FAIL
Line 19353: IlmSetPtr == NULL
Line 19160: [ECELL_FACH] CUMAC_CONFIG_UEID_REQ = NULL
Line 19170: [ECELL_FACH] CUMAC_CONFIG_MACEHS_HSDSCH_REQ = NULL
Line 19182: CUMAC_CONFIG_RACH_REQ = NULL
Line 19193: CUMAC_CONFIG_RB_REQ = NULL
Line 19204: CURLC_CONFIG_REQ = NULL
Line 4113: BgPchResConfigCnf: Negative Cnf
Line 4089: BgPchResConfigCnf: Negative Cnf
Line 4148: ProcessRLFailure FAIL
Line 4156: ProcessRLFailureAfterRelease FAIL
Line 4163: ILMMsgBufPtr is NULL
Line 4168: SendInternalMsgSingleton FAIL
Line 4186: ProcessCompleteRelConnAndSharedRes FAIL
Line 4204: ProcessCompleteRelConnAndDedRes FAIL
Line 4224: CreateAndProcessIlmSetForLayersMsg FAIL
Line 4254: CreateAndSendRabRollbackMessage FAIL
Line 4262: ProcessRLFailure FAIL
Line 4270: ProcessRLFailureAfterRelease FAIL
Line 4277: ILMMsgBufPtr is NULL
Line 4282: SendInternalMsgSingleton FAIL
Line 4305: rrc_BoundRabm_RemoveAllTids FAIL
Line 4313: SendInternalMsgSingleton FAIL
Line 4321: ProcessCompleteRelConnAndSharedRes FAIL
Line 4343: rrc_BoundRabm_RemoveAllTids FAIL
Line 4351: SendInternalMsgSingleton FAIL
Line 4359: ProcessCompleteRelConnAndDedRes FAIL
Line 4395: SendConftoCnxMngr FAIL
Line 4403: IlmCountCheckAfterRabm FAIL
Line 4426: rrc_BoundUphy_RemoveAllTids FAIL
Line 4434: SendInternalMsgSingleton FAIL
Line 4442: ProcessCompleteRelConnAndSharedRes FAIL
Line 4465: rrc_BoundUphy_RemoveAllTids FAIL
Line 4474: SendInternalMsgSingleton FAIL
Line 4482: ProcessCompleteRelConnAndDedRes FAIL
Line 4506: IlmCountCheckAfterPhy FAIL
Line 4549: CreateAndSendRabRollbackMessage FAIL
Line 4558: ProcessRLFailure FAIL
Line 4566: ProcessRLFailureAfterRelease FAIL
Line 4573: ILMMsgBufPtr is NULL
Line 4578: SendInternalMsgSingleton FAIL
Line 4786: rrc_BoundUphy_RemoveAllTids FAIL
Line 4793: SendInternalMsgSingleton FAIL
Line 4804: rrc_BoundUmac_RemoveAllTids FAIL
Line 4811: SendInternalMsgSingleton FAIL
Line 4821: rrc_PostNewState FAIL
Line 4827: FACH Resources Flag = FALSE
Line 4831: [ECELL_FACH] HsDschCmnResPresentFlag = FALSE
Line 4835: PCH Resources Flag = FALSE
Line 4840: BG_PCH Resources Flag = FALSE
Line 4606: rrc_BoundUphy_RemoveAllTids FAIL
Line 4613: SendInternalMsgSingleton FAIL
Line 4624: rrc_BoundUmac_RemoveAllTids FAIL
Line 4631: SendInternalMsgSingleton FAIL
Line 4640: ProcessCompleteRelConnAndSharedRes FAIL
Line 4668: rrc_BoundUphy_RemoveAllTids FAIL
Line 4675: SendInternalMsgSingleton FAIL
Line 4686: rrc_BoundUmac_RemoveAllTids FAIL
Line 4693: SendInternalMsgSingleton FAIL
Line 4702: ProcessCompleteRelConnAndDedRes FAIL
Line 4006: WAITFORPHYNONUMTSRATMODECNF transition FAIL
Line 4731: ProcessPhyMacConfigComplete FAIL
Line 4759: ProcessPhyMacConfigComplete FAIL
Line 4860: rrc_BoundUrlc_RemoveAllTids FAIL
Line 4868: SendInternalMsgSingleton FAIL
Line 4876: ProcessCompleteRelConnAndSharedRes FAIL
Line 4897: rrc_BoundUrlc_RemoveAllTids FAIL
Line 4904: SendInternalMsgSingleton FAIL
Line 4911: ProcessCompleteRelConnAndDedRes FAIL
Line 4940: SendConftoCnxMngr FAIL
Line 4949: IlmCountCheckAfterRlc FAIL
Line 4958: SendConftoCnxMngr FAIL
Line 20332: Modify /ReEst ILM is Present 
Line 20338: RBID %d Match Found in Modify/ReEst ILM : Ignore UnrecoverableReset 
Line 20348: RBID %d Match Found in Modify/ReEst ILM : Ignore UnrecoverableReset 
Line 20355: No Modify/ReEst ILM is Present 
Line 4991: rrc_BoundUrlc_RemoveAllTids FAIL
Line 4998: SendInternalMsgSingleton FAIL
Line 5005: ProcessCompleteRelConnAndSharedRes FAIL
Line 5026: rrc_BoundUrlc_RemoveAllTids FAIL
Line 5033: SendInternalMsgSingleton FAIL
Line 5040: ProcessCompleteRelConnAndDedRes FAIL
Line 5075: IlmCountCheckAfterPdcp FAIL
Line 5084: SendConftoCnxMngr FAIL
Line 5104: rrc_BoundRabm_RemoveAllTids FAIL
Line 5111: SendInternalMsgSingleton FAIL
Line 5118: ProcessCompleteRelConnAndSharedRes FAIL
Line 5138: rrc_BoundRabm_RemoveAllTids FAIL
Line 5145: SendInternalMsgSingleton FAIL
Line 5152: ProcessCompleteRelConnAndDedRes FAIL
Line 5171: CheckForSecurityAndRelocation FAIL
Line 5192: CheckAndProcessSrnsInfo FAIL
Line 5222: CheckAndProcessSrnsInfo FAIL
Line 19589: ProcessCompleteRelConnAndSharedRes FAIL
Line 19626: ProcessCompleteRelConnAndDedRes FAIL
Line 5321: Generate MAC Config FAIL
Line 5325: Send Config message to MAC FAIL
Line 5336: SendConftoCnxMngr FAIL
Line 5371: SendConftoCnxMngr FAIL
Line 5392:  LastReceivedEvent %d, DchResRelRequested = %d, HsdschResRelRequested %d 
Line 5393: EdchResRelRequested = %d, CpcResRelRequested %d 
Line 5403: All Cnf are received
Line 5413: ILMMsgBufPtr is NULL
Line 5418: SendInternalMsgSingleton FAIL
Line 5427: CnfMsgHeaderPtr = NULL
Line 5432: Failure sending msg to CnxMgr
Line 5442: Error going to READYFORCONFIGREQ
Line 5457: All Cnf are received
Line 5474: CnfMsgHeaderPtr = NULL
Line 5479: Failure sending msg to CnxMgr
Line 5486: Error going to READYFORCONFIGREQ
Line 5497: All Cnf are received
Line 5503: ILMMsgBufPtr is NULL
Line 5508: SendInternalMsgSingleton FAIL
Line 5515: rrc_PostNewState FAIL
Line 5524: Invalid LastReceivedEvent(%d)
Line 5541: PhyHsdschResRelCnf is received
Line 5558: All Cnf are received
Line 5567: ILMMsgBufPtr is NULL
Line 5571: SendInternalMsgSingleton FAIL
Line 5579: CnfMsgHeaderPtr = NULL
Line 5583: Failure sending msg to Connection Manager
Line 5590: Error going to READYFORCONFIGREQ
Line 5606: All Cnf are received
Line 5623: CnfMsgHeaderPtr = NULL
Line 5628: Failure sending msg to CnxMgr
Line 5635: Error going to READYFORCONFIGREQ
Line 5648: All Cnf are received
Line 5654: ILMMsgBufPtr is NULL
Line 5659: SendInternalMsgSingleton FAIL
Line 5666: rrc_PostNewState FAIL
Line 5675: Invalid LastReceivedEvent(%d)
Line 5705: All Cnf are received
Line 5715: ILMMsgBufPtr is NULL
Line 5720: SendInternalMsgSingleton FAIL
Line 5729: CnfMsgHeaderPtr = NULL
Line 5734: Failure sending msg to CnxMgr
Line 5742: Error going to READYFORCONFIGREQ
Line 5758: All Cnf are received
Line 5772: CnfMsgHeaderPtr = NULL
Line 5777: Failure sending msg to CnxMgr
Line 5784: Error going to READYFORCONFIGREQ
Line 5795: All Cnf are received
Line 5802: ILMMsgBufPtr is NULL
Line 5807: SendInternalMsgSingleton FAIL
Line 5814: rrc_PostNewState FAIL
Line 5824: Invalid LastReceivedEvent(%d)
Line 5854: All Cnf are received
Line 5863: ILMMsgBufPtr is NULL
Line 5867: SendInternalMsgSingleton FAIL
Line 5875: CnfMsgHeaderPtr = NULL
Line 5880: Failure sending msg to CnxMgr
Line 5887: Error going to READYFORCONFIGREQ
Line 5901: All Cnf are received
Line 5915: CnfMsgHeaderPtr = NULL
Line 5919: Failure sending msg to CnxMgr
Line 5925: Error going to READYFORCONFIGREQ
Line 5936: All Cnf are received
Line 5941: ILMMsgBufPtr is NULL
Line 5945: SendInternalMsgSingleton FAIL
Line 5951: rrc_PostNewState FAIL
Line 5960: Invalid LastReceivedEvent(%d)
Line 3563: WAITFORPHYNONUMTSRATMODECNF transition FAIL
Line 820: Error going to READYFORCONFIGREQ
Line 826: Invalid LastReceivedEvent(%d)
Line 835: All Cnf are received
Line 848: Failure sending msg to CnxMgr
Line 854: Error going to READYFORCONFIGREQ
Line 864: All Cnf are received
Line 880: All Cnf are received
Line 889: Error going to READYFORCONFIGREQ
Line 894: ProcessRcvdConfigMsg FAIL
Line 900: DCH Resources Flag = TRUE
Line 909: All Cnf are received
Line 919: Error going to READYFORCONFIGREQ
Line 925: ProcessPchResourcesMsg FAIL
Line 944: All Cnf are received
Line 955: CnfMsgHeaderPtr = NULL
Line 960: Failure sending msg to CnxMgr
Line 965: Error going to state READYFORCONFIGREQ
Line 978: All Cnf are received
Line 989: ILMMsgBufPtr is NULL
Line 994: SendInternalMsgSingleton FAIL
Line 1001: rrc_PostNewState FAIL
Line 1017: All Cnf are received
Line 1028: CnfMsgHeaderPtr = NULL
Line 1034: Failure sending msg to CnxMgr
Line 1040: Failure sending msg to CnxMgr
Line 1047: Error going to READYFORCONFIGREQ
Line 1059: All Cnf are received
Line 1067: CommonGenerateAndSendConfs FAIL
Line 1072: Error going to READYFORCONFIGREQ
Line 1080: Invalid LastReceivedEvent(%d)
Line 13417: FachResourcesPresentFlag %d
Line 13419: [ECELL_FACH] HsDschCmnResPresentFlag %d
Line 13498: SibInstance = NULL
Line 13506: Error Creating ILMs
Line 13522: Error going to WAITPCHRESRELCNF
Line 13538: CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
Line 13552: [ECELL_FACH] CUPHY_HSDSCH_COMMON_CONFIG_REQ = NULL
Line 13563: CUPHY_RACH_RESOURCES_CONFIG_REQ = NULL
Line 13571: Error going to READYFORCONFIGREQ
Line 13580: Error going to READYFORCONFIGREQ
Line 6516:  [ECELL_FACH] HsDschCmnResRelRequested TRUE
Line 6527: All Cnf are received
Line 6539: Failure sending msg to CnxMgr
Line 6544: Error going to READYFORCONFIGREQ
Line 6554: All Cnf are received
Line 6570: All Cnf are received
Line 6579: Error going to READYFORCONFIGREQ
Line 6584: ProcessRcvdConfigMsg FAIL
Line 6590: DCH Resources Flag = TRUE
Line 6599: All Cnf are received
Line 6609: Error going to READYFORCONFIGREQ
Line 6614: ProcessPchResourcesMsg() FAIL
Line 6635: All Cnf are received
Line 6645: CnfMsgHeaderPtr is NULL
Line 6649: Failure sending msg to CnxMgr
Line 6654: Error going to READYFORCONFIGREQ
Line 6669: All Cnf are received
Line 6679: ILMMsgBufPtr is NULL
Line 6683: SendInternalMsgSingleton FAIL
Line 6689: rrc_PostNewState FAIL
Line 6703: All Cnf are received
Line 6713: CnfMsgHeaderPtr = NULL
Line 6717: Failure sending msg to CnxMgr
Line 6723: Error going to READYFORCONFIGREQ
Line 6736: All Cnf are received
Line 6744: CommonGenerateAndSendConfs FAIL
Line 6749: Error going to READYFORCONFIGREQ
Line 6757: Invalid LastReceivedEvent(%d)
Line 6249: All Cnf are received
Line 6262: Failure sending msg to CnxMgr
Line 6267: Error going to READYFORCONFIGREQ
Line 6272: CnfMsgHeaderPtr is NULL
Line 6276: Failure sending msg to CbsMgr
Line 6284: All Cnf are received
Line 6298: All Cnf are received
Line 6307: Error going to READYFORCONFIGREQ
Line 6312: ProcessRcvdConfigMsg FAIL
Line 6318: DCH Resources Flag = TRUE
Line 6326: All Cnf are received
Line 6336: CnfMsgHeaderPtr is NULL
Line 6340: Failure sending msg to CbsMgr
Line 6344: Error going to READYFORCONFIGREQ
Line 6349: ProcessPchResourcesMsg FAIL
Line 6368: All Cnf are received
Line 6378: CnfMsgHeaderPtr = NULL
Line 6382: Failure sending msg to CnxMgr
Line 6387: Error going to READYFORCONFIGREQ
Line 6402: All Cnf are received
Line 6412: ILMMsgBufPtr is NULL
Line 6416: SendInternalMsgSingleton FAIL
Line 6422: rrc_PostNewState FAIL
Line 6434: All Cnf are received
Line 6444: CnfMsgHeaderPtr = NULL
Line 6448: Failure sending msg to CnxMgr
Line 6454: Error going toREADYFORCONFIGREQ
Line 6464: Invalid LastReceivedEvent(%d)
Line 21364: BgPchResReleaseCnf: Negative Cnf
Line 6795: [ECELL_FACH] All Cnf are received
Line 6805: Failure sending msg to CnxMgr
Line 6810: [ECELL_FACH] Error going to READYFORCONFIGREQ
Line 6821: [ECELL_FACH] All Cnf are received
Line 6861: [ECELL_FACH] All Cnf are received
Line 6869: [ECELL_FACH] Error going to READYFORCONFIGREQ
Line 6874: [ECELL_FACH] ProcessPchResourcesMsg() FAIL
Line 6896: [ECELL_FACH] All Cnf are received
Line 6905: [ECELL_FACH] CnfMsgHeaderPtr is NULL
Line 6909: [ECELL_FACH] Failure sending msg to CnxMgr
Line 6914: [ECELL_FACH] Error going to READYFORCONFIGREQ
Line 6929: [ECELL_FACH] All Cnf are received
Line 6938: [ECELL_FACH] ILMMsgBufPtr is NULL
Line 6942: [ECELL_FACH] SendInternalMsgSingleton FAIL
Line 6948: [ECELL_FACH] rrc_PostNewState FAIL
Line 6963: [ECELL_FACH] All Cnf are received
Line 6972: [ECELL_FACH] CnfMsgHeaderPtr = NULL
Line 6976: [ECELL_FACH] Failure sending msg to CnxMgr
Line 6982: [ECELL_FACH] Error going to READYFORCONFIGREQ
Line 6995: All Cnf are received
Line 7003: CommonGenerateAndSendConfs FAIL
Line 7008: Error going to READYFORCONFIGREQ
Line 6177: Failure sending msg to CnxMgr
Line 6189: rrc_PostNewState FAIL
Line 6196: PCH Resources Flag = FALSE
Line 6212: Error going to READYFORCONFIGREQ
Line 7051: [ECELL_FACH] CUPHY_HSDSCH_COMMON_CONFIG_REQ = NULL
Line 7062: CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
Line 7073: CUPHY_RACH_RESOURCES_CONFIG_REQ = NULL
Line 7090: CUPHY_BG_PCH_RESOURCES_CONFIG_REQ = NULL
Line 7096: ResourceMgr_p->BgPchResourcesPresentFlag= %d
Line 7101: Error going to WAITCOMMONCHANNELSCONFIGCNF
Line 7106: CnfMsgHeaderPtr is NULL
Line 7110: Failure sending msg to CbsMgr
Line 7146: Failure sending msg to CxnMgr
Line 7156: PCH Resources Flag = FALSE
Line 7172: CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
Line 7185: CUPHY_RACH_RESOURCES_CONFIG_REQ = NULL
Line 7203: CUPHY_BG_PCH_RESOURCES_CONFIG_REQ = NULL
Line 7208: Error going to WAITCOMMONCHANNELSCONFIGCNF
Line 7567: TimerExpiryStatus = %d
Line 7581: ILMMsgBufPtr is NULL
Line 7586: SendInternalMsgSingleton FAIL
Line 7592: rrc_PostNewState FAIL
Line 7625: ProcessFachResourcesReleaseMsg FAIL
Line 7641: ProcessCompleteRelConnAndSharedRes FAIL
Line 7658: ProcessCompleteRelConnAndDedRes FAIL
Line 7673: CompleteDchFachPchConfig FAIL
Line 16351: Post READYFORCONFIGREQ FAIL
Line 16360: ConfigRLCEntitiesAndInformSecMgr FAIL
Line 16375: ReEstablishAllAmUmRBsExceptRB2 FAIL
Line 16096: CnfMsgHeaderPtr is NULL
Line 16102: SendInternalMsgSingleton FAIL
Line 16136: RlcReestablishReq is NULL
Line 16149: SrnsRelocated = %d
Line 16194: ReEstablishAllAmUmRBsExceptRB2: CountSRB = %d , CountCsDRB = %d
Line 16205: ReEstablishAllAmUmRBsExceptRB2: NumofRbs > RRC_MAX_RBs
Line 16253: Post WAITFORRLCREESTABLISHCNF FAIL
Line 7689: CompleteDchFachPchConfig FAIL
Line 7705: CompleteDchFachPchConfig FAIL
Line 7727: ProcessInitialSib7message FAIL
Line 7736: ProcessSubsequentSib7message FAIL
Line 20390: ILMMsgBufPtr is NULL
Line 20395: SendInternalMsgSingleton FAIL
Line 20400: Unrecoverable Error sent to CnxMgrConn
Line 20422: ILMMsgBufPtr is NULL
Line 20427: SendInternalMsgSingleton FAIL
Line 20432: Unrecoverable Error sent to CnxMgrConn
Line 7754: ProcessCompleteRelConnAndDedRes FAIL
Line 7778: rrc_PostNewState FAIL
Line 7793: ProcessCompleteRelConnAndSharedRes FAIL
Line 7810: ProcessCompleteRelConnAndDedRes FAIL
Line 7844: IntMsgInstPtr is NULL
Line 7848: SendInternalMsgSingleton FAIL
Line 7852: rrc_PostNewState FAIL
Line 16290: Required RB ID is not present
Line 7906: Backup for Rollback : DOFF(%d), RefCell(%d)
Line 7925: Backup for Rollback (L1C) : PSC(%d), FrameOffset(%d)
Line 7944: Backup for Rollback (RRC) : PSC(%d), FrameOffset(%d)
Line 7968: ConvertActTmToPhy = %d
Line 8044: SendInternalMsgSingleton FAIL
Line 8058: rrc_PostNewState FAIL
Line 8077: NonUmtsRatReq received while waiting for PhyInitCnf => Set IsNonUmtsRatReqPending to TRUE
Line 8199: CnfMsgHdrPtr = NULL
Line 8203: Failure sending msg to CnxMgr
Line 8208: Error going to READYFORCONFIGREQ
Line 8213: WaitForPhyInitCnf_PhyUmtsInitCNF: IsNonUmtsRatReqPending is TRUE => Trigger NonUmtsRatReq
Line 21301: [ResMgr] WaitForPhyInitCnf_PhySecondaryHsdschResRelCnf() procedure started
Line 17132: DCH Not Configured
Line 17142: ProcessRelDedRes FAIL
Line 17147: Error going to WAITDCHRESRELCNF
Line 17157: ProcessRLFailure FAIL
Line 17178: DCH Resources Flag = TRUE
Line 17196: Error going to READYFORCONFIGREQ
Line 17215: SendInternalMsgSingleton FAIL
Line 8287: T314 Stop Failed.
Line 8296: ProcessRcvdConfigMsg FAIL
Line 8317: T314 Stop Failed.
Line 8326: ProcessRcvdConfigMsg FAIL
Line 8346: T314 Stop Failed.
Line 8351: ProcessFachLayersFromFachMsg FAIL
Line 8372: T314 Stop Failed.
Line 8377: ProcessRcvdConfigMsg FAIL
Line 8403: T314 Stop Failed.
Line 8420: Error going to WAITPHYSHAREDRESRELCNF
Line 8427: ProcessRcvdConfigMsg FAIL
Line 8433: DCH Resources Flag = TRUE
Line 8454: ProcessFachResourcesReleaseMsg FAIL
Line 8473: ProcessFachResourcesAndLayersMsg FAIL
Line 1972: rrc_PostNewState FAIL
Line 1978: FACH Resources Flag = FALSE
Line 1982: [ECELL_FACH] HsDschCmnResPresentFlag = FALSE
Line 1986: PCH Resources Flag = FALSE
Line 1991: BG_PCH Resources Flag = FALSE
Line 8492: T314 Stop Failed.
Line 8497: ProcessCompleteRelConnAndSharedRes FAIL
Line 8515: T314 Stop Failed.
Line 8520: ProcessCompleteRelConnAndDedRes FAIL
Line 2940: ProcessInitialSib7message FAIL
Line 2949: ProcessSubsequentSib7message FAIL
Line 2995: Wait for Signaling Grant to do Rollback
Line 3018: CnfMsgHeaderPtr is NULL
Line 3023: SendInternalMsgSingleton FAIL
Line 8660: CnfMsgHeaderPtr is NULL
Line 8664: SendInternalMsgSingleton FAIL
Line 20891: CnfMsgHeaderPtr is NULL
Line 20896: Failure sending msg to CnxMgr
Line 20902: CnfMsgHeaderPtr is NULL
Line 20907: Failure sending msg to CbsMgr
Line 11270: CnfMsgHeaderPtr is NULL
Line 11274: SendInternalMsgSingleton FAIL
Line 8573: PreSuspendedState = TRUE
Line 8592: GenMsg is NULL
Line 8601: CnxMgrMobility in WAITINGFORCOMPLETETOBUILDMSG
Line 8609: Failure to post T314ANDT315EXPIRED
Line 8620: TimerExpiryStatus = %d
Line 19456: T314/T315 expired, Transition to IDLE
Line 19469: Terminate Request not handled in %d state
Line 8936: T315 Stop Failed
Line 8945: ProcessRcvdConfigMsg FAIL
Line 8967: T315 Stop Failed
Line 8976: ProcessRcvdConfigMsg FAIL
Line 8997: T315 Stop Failed
Line 9002: ProcessFachLayersFromFachMsg FAIL
Line 9024: T315 Stop Failed
Line 9029: ProcessRcvdConfigMsg FAIL
Line 9054: T315 Stop Failed
Line 9071: Error going to WAITPHYSHAREDRESRELCNF
Line 9078: ProcessRcvdConfigMsg FAIL
Line 9084: DCH Resources Flag = TRUE
Line 9106: ProcessFachResourcesReleaseMsg FAIL
Line 9125: ProcessFachResourcesAndLayersMsg FAIL
Line 1910: rrc_PostNewState FAIL
Line 1916: FACH Resources Flag = FALSE
Line 1920: [ECELL_FACH] HsDschCmnResPresentFlag = FALSE
Line 1924: PCH Resources Flag = FALSE
Line 1929: BG_PCH Resources Flag = FALSE
Line 9145: T315 Stop Failed
Line 9150: ProcessCompleteRelConnAndSharedRes FAIL
Line 9169: T315 Stop Failed
Line 9174: ProcessCompleteRelConnAndDedRes FAIL
Line 3067: Wait for Signaling Grant to do Rollback
Line 3090: CnfMsgHeaderPtr is NULL
Line 3095: SendInternalMsgSingleton FAIL
Line 8722: CnfMsgHeaderPtr is NULL
Line 8726: SendInternalMsgSingleton FAIL
Line 20858: CnfMsgHeaderPtr is NULL
Line 20862: Failure sending msg to CnxMgr
Line 20867: CnfMsgHeaderPtr is NULL
Line 20871: Failure sending msg to CbsMgr
Line 11297: CnfMsgHeaderPtr is NULL
Line 11301: SendInternalMsgSingleton FAIL
Line 9226: PreSuspendedState = TRUE
Line 9244: GenMsg is NULL
Line 9252: CnxMgrMobility in WAITINGFORCOMPLETETOBUILDMSG
Line 9259: Failure to post T314ANDT315EXPIRED
Line 9271: TimerExpiryStatus = %d
Line 9291: T314 Stop Failed
Line 9296: T315 Stop Failed
Line 9305: ProcessRcvdConfigMsg FAIL
Line 9326: T314 Stop Failed
Line 9331: T315 Stop Failed
Line 9340: ProcessRcvdConfigMsg FAIL
Line 9362: T314 Stop Failed
Line 9367: T315 Stop Failed
Line 9372: ProcessFachLayersFromFachMsg FAIL
Line 9394: T314 Stop Failed
Line 9399: T315 Stop Failed
Line 9404: ProcessRcvdConfigMsg FAIL
Line 9429: T314 Stop Failed
Line 9434: T315 Stop Failed
Line 9453: Error going to WAITPHYSHAREDRESRELCNF
Line 9460: ProcessRcvdConfigMsg FAIL
Line 9466: DCH Resources Flag = TRUE
Line 9486: ProcessFachResourcesReleaseMsg FAIL
Line 9505: ProcessFachResourcesAndLayersMsg FAIL
Line 2052: rrc_PostNewState FAIL
Line 2058: FACH Resources Flag = FALSE
Line 2062: [ECELL_FACH] HsDschCmnResPresentFlag = FALSE
Line 2066: PCH Resources Flag = FALSE
Line 2071: BG_PCH Resources Flag = FALSE
Line 9524: T314 Stop Failed
Line 9529: T315 Stop Failed
Line 9534: ProcessCompleteRelConnAndSharedRes FAIL
Line 9553: T314 Stop Failed
Line 9558: T315 Stop Failed
Line 9563: ProcessCompleteRelConnAndDedRes FAIL
Line 3243: Wait for Signaling Grant to do Rollback
Line 3267: CnfMsgHeaderPtr is NULL
Line 3272: SendInternalMsgSingleton FAIL
Line 8898: CnfMsgHeaderPtr is NULL
Line 8902: SendInternalMsgSingleton FAIL
Line 21034: CnfMsgHeaderPtr is NULL
Line 21039: Failure sending msg to CnxMgr
Line 21045: CnfMsgHeaderPtr is NULL
Line 21050: Failure sending msg to CbsMgr
Line 11378: CnfMsgHeaderPtr is NULL
Line 11383: SendInternalMsgSingleton FAIL
Line 9634: Inform to CnxMgr abt T314 expiry: CS
Line 9641: Inform to CnxMgr abt T314 expiry: PS
Line 9651: Failure to post T315RUNNINGT314EXPIRED
Line 9660: TimerExpiryStatus = %d
Line 9717: Inform to CnxMgr abt T315 expiry
Line 9723: Inform to CnxMgr abt T315 expiry
Line 9732: Failure to post T314RUNNINGT315EXPIRED
Line 9741: TimerExpiryStatus = %d
Line 9761: T314 Stop Failed
Line 9770: ProcessRcvdConfigMsg FAIL
Line 9792: T314 Stop Failed
Line 9802: ProcessRcvdConfigMsg FAIL
Line 9822: T314 Stop Failed
Line 9827: ProcessFachLayersFromFachMsg FAIL
Line 9848: T314 Stop Failed
Line 9853: ProcessRcvdConfigMsg FAIL
Line 9877: T314 Stop Failed
Line 9894: Error going to WAITPHYSHAREDRESRELCNF
Line 9901: ProcessRcvdConfigMsg FAIL
Line 9907: DCH Resources Flag = TRUE
Line 9928: ProcessFachResourcesReleaseMsg FAIL
Line 9947: ProcessFachResourcesAndLayersMsg FAIL
Line 2114: rrc_PostNewState FAIL
Line 2120: FACH Resources Flag = FALSE
Line 2124: [ECELL_FACH] HsDschCmnResPresentFlag = FALSE
Line 2128: PCH Resources Flag = FALSE
Line 2133: BG_PCH Resources Flag = FALSE
Line 9967: T314 Stop Failed
Line 9972: ProcessCompleteRelConnAndSharedRes FAIL
Line 9991: T314 Stop Failed
Line 9996: ProcessCompleteRelConnAndDedRes FAIL
Line 3125: Wait for Signaling Grant to do Rollback
Line 3149: CnfMsgHeaderPtr is NULL
Line 3154: SendInternalMsgSingleton FAIL
Line 8847: CnfMsgHeaderPtr is NULL
Line 8851: SendInternalMsgSingleton FAIL
Line 21070: CnfMsgHeaderPtr is NULL
Line 21074: Failure sending msg to CnxMgr
Line 21080: CnfMsgHeaderPtr is NULL
Line 21084: Failure sending msg to CbsMgr
Line 11324: CnfMsgHeaderPtr is NULL
Line 11328: SendInternalMsgSingleton FAIL
Line 10038: Inform to CnxMgr abt T315 expiry
Line 10044: Inform to CnxMgr abt T315 expiry
Line 10051: Post T314RUNNING FAIL
Line 10108: GenMsg is NULL
Line 10116: CnxMgrMobility in WAITINGFORCOMPLETETOBUILDMSG
Line 10123: Failure to post T314ANDT315EXPIRED
Line 10137: TimerExpiryStatus = %d
Line 10148: PreSuspendedState = TRUE
Line 10168: T315 Stop Failed
Line 10177: ProcessRcvdConfigMsg FAIL
Line 10199: T315 Stop Failed
Line 10208: ProcessRcvdConfigMsg FAIL
Line 10229: T315 Stop Failed
Line 10234: ProcessFachLayersFromFachMsg FAIL
Line 10256: T315 Stop Failed
Line 10261: ProcessRcvdConfigMsg FAIL
Line 10286: T315 Stop Failed
Line 10305: Error going to WAITPHYSHAREDRESRELCNF
Line 10312: ProcessRcvdConfigMsg FAIL
Line 10318: DCH Resources Flag = TRUE
Line 10340: ProcessFachResourcesReleaseMsg FAIL
Line 10359: ProcessFachResourcesAndLayersMsg FAIL
Line 2177: rrc_PostNewState FAIL
Line 2183: FACH Resources Flag = FALSE
Line 2187: [ECELL_FACH] HsDschCmnResPresentFlag = FALSE
Line 2191: PCH Resources Flag = FALSE
Line 2196: BG_PCH Resources Flag = FALSE
Line 10379: T315 Stop Failed
Line 10384: ProcessCompleteRelConnAndSharedRes FAIL
Line 10402: T315 Stop Failed
Line 10407: ProcessCompleteRelConnAndDedRes FAIL
Line 3184: Wait for Signaling Grant to do Rollback
Line 3208: CnfMsgHeaderPtr is NULL
Line 3213: SendInternalMsgSingleton FAIL
Line 8785: CnfMsgHeaderPtr is NULL
Line 8789: SendInternalMsgSingleton FAIL
Line 21105: CnfMsgHeaderPtr is NULL
Line 21110: Failure sending msg to CnxMgr
Line 21116: CnfMsgHeaderPtr is NULL
Line 21121: Failure sending msg to CbsMgr
Line 11350: CnfMsgHeaderPtr is NULL
Line 11354: SendInternalMsgSingleton FAIL
Line 10450: Inform to CnxMgr abt T314 expiry: CS
Line 10456: Inform to CnxMgr abt T314 expiry: PS
Line 10463: Post T315RUNNING FAIL
Line 10518: GenMsg is NULL
Line 10526: CnxMgrMobility in WAITINGFORCOMPLETETOBUILDMSG state
Line 10533: Failure to post T314ANDT315EXPIRED
Line 10546: TimerExpiryStatus = %d
Line 10557: PreSuspendedState = TRUE
Line 10581: ProcessRcvdConfigMsg FAIL
Line 10606: ProcessRcvdConfigMsg FAIL
Line 10626: ProcessFachLayersFromFachMsg FAIL
Line 10647: ProcessRcvdConfigMsg FAIL
Line 10684: Error going to WAITPHYSHAREDRESRELCNF
Line 10691: ProcessRcvdConfigMsg FAIL
Line 10697: DCH Resources Flag = TRUE
Line 10719: ProcessFachResourcesReleaseMsg FAIL
Line 10738: ProcessFachResourcesAndLayersMsg FAIL
Line 10797: RecalcStartMsg is NULL
Line 10802: SendInternalMsgSingleton FAIL
Line 10807: rrc_PostNewState FAIL
Line 10818: rrc_PostNewState() FAIL
Line 10825: FACH Resources Flag = FALSE
Line 10829: [ECELL_FACH] HsDschCmnResPresentFlag = FALSE
Line 10833: PCH Resources Flag = FALSE
Line 10838: BG_PCH Resources Flag = FALSE
Line 10757: ProcessCompleteRelConnAndSharedRes FAIL
Line 10775: ProcessCompleteRelConnAndDedRes FAIL
Line 20928: CnfMsgHeaderPtr is NULL
Line 20932: Failure sending msg to CnxMgr
Line 20938: CnfMsgHeaderPtr is NULL
Line 20942: Failure sending msg to CbsMgr
Line 20992: GenMsg is NULL
Line 21000: CnxMgrMobility in WAITINGFORCOMPLETETOBUILDMSG
Line 21007: CnfMsgHeaderPtr is NULL
Line 21011: SendInternalMsgSingleton FAIL
Line 10879: CnxMgrMsgPtr is NULL
Line 10883: send message to CnxMgr Failed
Line 10887: Post State READYFORCONFIGREQ FAIL
Line 10946: WAITFORPHYNONUMTSRATMODECNF transition FAIL
Line 10966: PHY Returned FAIL = %d
Line 18845: Need to wait for BgPchResConfigCnf
Line 18864: [ECELL_FACH] Set HsDschCmnResPresentFlag = TRUE
Line 18872: FACH Resources Flag = TRUE
Line 18884: [ECELL_FACH] CUMAC_CONFIG_UEID_REQ = NULL
Line 18894: [ECELL_FACH] CUMAC_CONFIG_MACEHS_HSDSCH_REQ = NULL
Line 18906: CUMAC_CONFIG_RACH_REQ = NULL
Line 18917: CUMAC_CONFIG_RB_REQ = NULL
Line 18928: CURLC_CONFIG_REQ = NULL
Line 18938: IlmSetPtr is NULL
Line 19005: Failure sending msg to CnxMgr
Line 19012: Unconditional NonUmtsRatReq
Line 19017: Error going to READYFORCONFIGREQ
Line 19026: CnfMsgHeaderPtr is NULL
Line 10988: PHY Returned FAIL = %d
Line 11029: BgPchResConfigCnf: Negative Cnf
Line 11010: PHY Returned FAIL = %d
Line 19117: [ECELL_FACH] HsDschCmnResPresentFlag = TRUE
Line 19125: SendInternalMsgSingleton FAIL
Line 19131: READYFORCONFIGREQ transition FAIL
Line 19079: FACH Resources Flag = TRUE
Line 19087: SendInternalMsgSingleton FAIL
Line 19093: READYFORCONFIGREQ transition FAIL
Line 11138: CnfMsgHeaderPtr is NULL
Line 11142: SendInternalMsgSingleton FAIL
Line 11148: Post READYFORCONFIGREQ FAIL
Line 11156: SendInternalMsgSingleton FAIL
Line 21492: Timer SRBDelayTimerId stopped
Line 21496: Error in stopping timer SRBDelayTimerId
Line 21501: Error in stopping timer SRBDelayTimerId
Line 21507: Error going to READYFORCONFIGREQ
Line 11407: CommonGenerateAndSendConfs FAIL
Line 11415: Error going to WAITCOMPLETECONFIGHANDOVER
Line 11423: Error going to WAITCOMPLETECONFIG
Line 11431: Error going to READYFORCONFIGREQ
Line 11186: CnfMsgHeaderPtr is NULL
Line 11190: SendInternalMsgSingleton FAIL
Line 11194: Post READYFORCONFIGREQ FAIL
Line 11205: CnfMsgHeaderPtr is NULL
Line 11209: SendInternalMsgSingleton FAIL
Line 11215: Post READYFORCONFIGREQ FAIL
Line 11223: SendInternalMsgSingleton FAIL
Line 11232: CnfMsgHeaderPtr is NULL
Line 11236: SendInternalMsgSingleton FAIL
Line 11240: Post READYFORCONFIGREQ FAIL
Line 11246: Dest Module is NONE
Line 7234: Need to wait for BgPchResReleaseCnf
Line 7261: CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
Line 7272: [ECELL_FACH] CUPHY_HSDSCH_COMMON_CONFIG_REQ = NULL
Line 7281: CUPHY_RACH_RESOURCES_CONFIG_REQ = NULL
Line 7298: CUPHY_BG_PCH_RESOURCES_CONFIG_REQ = NULL
Line 7306: Error going to READYFORCONFIGREQ
Line 7313: Error going to READYFORCONFIGREQ
Line 7327: CommonGenerateAndSendConfs FAIL
Line 7333: Error going to READYFORCONFIGREQ
Line 7377: BgPchResReleaseCnf is not expected
Line 5976: DCH Resources Flag = FALSE
Line 5978: HSDSCH Resources Flag = FALSE
Line 5983: EDCH Resources Flag = FALSE
Line 5995: No RelDedResHandler
Line 6008: ILMMsgBufPtr is NULL
Line 6012: SendInternalMsgSingleton FAIL
Line 6025: SendInternalMsgSingleton FAIL
Line 6035: SendConftoCnxMngr FAIL
Line 6052: Error going to READYFORCONFIGREQ
Line 6059: CommonGenerateAndSendConfs FAIL
Line 6076: ILMMsgBufPtr is NULL
Line 6080: SendInternalMsgSingleton FAIL
Line 6084: Unrecoverable Error Message sent to CnxMgrConn
Line 6089: Invalid RbId for Unrecoverable Error
Line 6107: CommonGenerateAndSendConfs FAIL
Line 6112: ProcessPhyNegativeCnf : No handler Function
Line 6120: SendConftoCnxMngr FAIL
Line 6127: CreateAndSendRollbackMsgsForFach FAIL
Line 6132: SendConftoCnxMngr FAIL
Line 6139: Invalid RelDedResHandler(%d)
Line 7411: BgPchResReleaseCnf is not expected
Line 7437: Need to wait for BgPchResReleaseCnf
Line 7467: [ECELL_FACH] CUPHY_FACH_RESOURCES_CONFIG_REQ = NULL
Line 7478: [ECELL_FACH] CUPHY_HSDSCH_COMMON_CONFIG_REQ = NULL
Line 7488: [ECELL_FACH] CUPHY_RACH_RESOURCES_CONFIG_REQ = NULL
Line 7505: [ECELL_FACH] CUPHY_BG_PCH_RESOURCES_CONFIG_REQ = NULL
Line 7513: [ECELL_FACH] Error going to READYFORCONFIGREQ
Line 7520: [ECELL_FACH] Error going to READYFORCONFIGREQ
Line 7534: CommonGenerateAndSendConfs FAIL
Line 7540: Error going to READYFORCONFIGREQ
Line 11453: LastReceivedMessage:(%d)
Line 11457: Error going to RESOURCEMGR_READYFORCONFIGREQ
Line 11465: ProcessRLFailure FAIL
Line 11473: ProcessRcvdConfigMsg FAIL
Line 11480: ProcessCompleteRelDedRes FAIL
Line 11487: ProcessCompleteRelConnAndDedRes FAIL
Line 11494: ProcessUnRecoverableError FAIL
Line 11530: T314 Stop Failed
Line 11539: T315 Stop Failed
Line 11693: Invalid DB Index
Line 19761: All ResMgr Resource Flags Cleared
