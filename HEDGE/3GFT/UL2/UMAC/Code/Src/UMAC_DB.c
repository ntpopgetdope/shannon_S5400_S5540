Line 487: Remove Measurement Request Pointer on Init Request if pending
Line 2330: UMAC RB Config Setup
Line 2788: [PS] Config DCH. RbId: %d, Data Size: %dbits
Line 2821: [AMR] Config. Rate Change. previous: %dbits -> current: %dbits
Line 2859: [AMR] Config. NumOfAmrDataRate= %d, Selected Tfci= %d, Size= %d
Line 2875: [AMR] Config. Rate Change. previous: %dbits -> current: %dbits
Line 2910: [AMR] Set classARbId (%d)
Line 2921: [AMR][Special] Config. Rate Change with new RbId. classARbId (%d) previous: %dbits -> current: %dbits
Line 2994: [CSPS]   IncrementedCountCsForMissedWrapAround: TRUE. (LastCfnForIncrementCountC: %d, Cfn: %d)
Line 3046: Not resetting UlEdchConfig flag: %d
Line 3052: RbChange %d, RbChange_Dl %d, UlDchConfig %d, UlEdchConfig %d, AdjacentActTime %d
Line 3071: ConfigCipherKey. CsCipherKey[0]:%d, [1]:%d, [2]:%d, [3]:%d
Line 3082: ConfigCipherKey. PsCipherKey[0]:%d, [1]:%d, [2]:%d, [3]:%d
Line 3118: Resetting RACH procedure
Line 3497: InTfci > UMAC_MAX_TFC in umac_db_MGetTfc
Line 3775: RABM asked for details of a CSD connection on a non-existent DCHInfo.
Line 3811: RABM asked for details of a CSD connection mapped to RACH - not implemented.
Line 3815: No such transport channel type.
Line 3821: RABM asked for details of a CSD connection mapped on a non-TM bearer - not implemented.
Line 3826: RABM asked for details of a CSD connection on a non-existent RB.
Line 3922: [AMR] ulTotalBitSize=%d, classARbId=%d, rbId=%d, tbBitSize=%d, tbBlockNum=%d, Tfci[%d].TotalBitSize=%d
Line 6044: InMessagePtr == NULL
Line 6051: Store BlockCtrPtr[%d]: 0x%x , BlockCtrVal(%u)
Line 6106: InMessagePtr == NULL
Line 6115: WARNING: BlockCtrPos is out of bounds
Line 6126: Attempted to free %x is  already freed MOB.
Line 6132: Ctr is out of bounds
Line 6137: BlockCtrVal(%u) BlockCtrPos(%u)
Line 6142: Free BlockCtrPtr[%d]: 0x%x
Line 6150: BlockCtrPos out of bound 
Line 6367: NULL CompBcBdIndPtr from UPHY NumTFCI:%d
Line 6377: Computed NumOfTFCI:%d, TFCI:%d, BetaC:%d, BetaD:%d
Line 6644: Unknown Case in Timer TokenCancel
Line 6753: Unknown Sim Instance %d
Line 6765: Missed frame count while waiting for L2DL_CFG_CNF  :%d
Line 6776: Unknown Sim Instance %d
Line 6800: umac_db_SelectTfcDchRachUsch DCH : SIM Instance:%d
Line 6820: umac_db_SelectTfcDchRachUsch RACH : SIM Instance:%d
Line 1712: umac_db_UpdateStoredDlHsdschMappingEhs: QueueId %d out of Range!!!
Line 1745: umac_db_UpdateStoredDlHsdschMapping: MacDFlowId %d out of Range!!!
Line 2240: WARNING: Message Type not recognized
Line 3941: InDchInfo == NULL
Line 6179: InSHandle == NULL
Line 6188: WARNING: BlockCtrPos is out of bounds
Line 6202: Ctr is out of bounds
Line 6216: DirectBlockCtrPos out of bound 
Line 6081: InSHandle == NULL
Line 4005: InDchInfo == NULL
Line 4992: InRemovalInfo == NULL
Line 5001: <Configuration Info> CUMAC_REMOVE_RB_REQ. RbId: %d, RbInfo[%d]
Line 5012: No RB info to remove
Line 4917: InRbInfo == NULL
Line 4923: InMessagePtr == NULL
Line 4946: umac_db_StoreWaitingRbInfo: RbInfo != Null
Line 4951: umac_db_StoreWaitingRbInfo: RbInfo == Null
Line 4957: umac_db_StoreWaitingRbInfo: UlInfoConfig %d
Line 4973: RB DL info doesn't present, It has the potential risk to process RB info
Line 6557: EdchReq == NULL
Line 6602: <Configuration Info> CUMAC_CHANGE_EDCH_CELL_REQ 
Line 6638: <Configuration Info> CUMAC_RESET_MAC-E/ES_REQ 
Line 6505: [ERROR] SIMInstance(%u) is out of bound!
Line 6524: <Configuration Info> CUMAC_REMOVE_EDCH_REQ is skipped because EdchReq is NULL
Line 6537: <Configuration Info> CUMAC_REMOVE_EDCH_REQ 
Line 6721: <Configuration Info> CUMAC_RELEASE_EDCH_RES_REQ 
Line 1082: No HSDSCH(MAC-ehs) info to remove
Line 1097: No HSDSCH(MAC-hs) info to remove
Line 1048: InRemoveHsdschInfo == NULL
Line 4038: InTfcs == NULL
Line 4069: Unknown TFCS action in configuration
Line 4183: WARNING: StorePoint is out of bounds
Line 4193: WARNING: StorePoint is out of bounds
Line 4237: Unknown CTFC size in configuration
Line 4284: *******Signalled Gain Factors******* NumOfCTFC:%d
Line 4291: *******Computed Gain Factors******* NumOfCTFC:%d
Line 6425: InEdchInfo == NULL
Line 6454: <Configuration Info> CUMAC_RECONFIG_EDCH_REQ 
Line 6466: <Configuration Info> CUMAC_CONFIG_EDCH_REQ 
Line 4399: InTfcss == NULL
Line 4451: Unknown TFCSS action in configuration
Line 4728: U-RRC tried to restrict non-existent Transport Channel
Line 974: InCpcReleaseInfo == NULL
Line 982: <CPC> CUMAC_CPC_RELEASE_REQ.
Line 820: Unknown Case in MacItTimer TokenCancel
Line 831: Unknown Case in ItUeDtxCycle2Timer TokenCancel
Line 842: Unknown Case in EnablingDelayTimer TokenCancel
Line 854: Unknown Case in ItUEGrantMonitoringTimer TokenCancel
Line 999: InCpcDeactivateInfo == NULL
Line 1011: <CPC> CUMAC_CPC_DEACTIVATE_REQ. HSSCCHless: %d, DTXDRX: %d
Line 876: InCpcInfo == NULL
Line 883: <CPC> EdchTti Mismatch between gEdchInfo and CpcInfo
Line 959: <CPC> CUMAC_CPC_CONFIG_REQ. DTX: %d, DRX: %d, DefaultSG: %d, EnablingDelay: %d
Line 758: InHsdschTsnExtInfo == NULL
Line 783: InHsdschInfo == NULL
Line 1027: InHsdschInfo == NULL
Line 4108: InTfcs == NULL
Line 4847: No RACH info to remove
Line 5409: InConfigCiphering == NULL
Line 5434: [CipherModeComm Change] RbId:%d, RbMuxInfoUl[%d] RlcMode:%d, CipherModeComm:0->%d
Line 5446: [CipherModeComm Change] RbId:%d, RbMuxInfoDl[%d] RlcMode:%d, CipherModeComm:0->%d
Line 5470: [CsDomainFrozen Change] CsDomainMacdHfnFrozen %d, CsRxDomainMacdHfnFrozen %d, RxCsCountC %d
Line 5478: [CsCountC reset] CountC will be reset. Because InitCsMacdHfn field is TRUE
Line 5486: ConfigHFN. ActTime:%d, CsCountC[0]:%d, [1]:%d, [2]:%d
Line 5489: ConfigHFN. ActTime:%d, CsRxCountC[0]:%d, [1]:%d, [2]:%d
Line 5513: ConfigCipherKey. ActTime:%d, CsCipherKey[0]:%d, [1]:%d, [2]:%d, [3]:%d
Line 5538: [PsCountC reset] CountC will be reset. Because InitPsMacdHfn field is TRUE
Line 5565: ConfigCipherKey. ActTime:%d, PsCipherKey[0]:%d, [1]:%d, [2]:%d, [3]:%d
Line 5603: ConfigHFN. previous CUMAC_CONFIG_HFN_REQ is deleted due to new SMC policy. (InQueue->NextStore: %d)
Line 5369: ConfigCipherKey. CipherKey is changed in Domain:%d
Line 4766: InRachInfo == NULL
Line 4814: InAscInfo == NULL
Line 4879: InUeId == NULL
Line 5675: WARNING: BlockCtrPos is out of bounds
Line 5822: InMeasConfig == NULL
Line 6341: ****CANNOT Free BdBcTable NULL*****
Line 6345: Freeing BdBcTable!!
Line 5030: InConfigHfn == NULL
Line 5045: ConfigHFN. ActTime:%d, CsCountC[0]:%d, [1]:%d, [2]:%d
Line 5058: ConfigHFN. ActTime:%d, PsCountC[0]:%d, [1]:%d, [2]:%d
Line 5078: InConfigHfn == NULL
Line 5100: ConfigHFN. ActTime:%d, CsRxCountC[0]:%d, [1]:%d, [2]:%d
Line 5120: ConfigHFN. ActTime:%d, PsRxCountC[0]:%d, [1]:%d, [2]:%d
Line 1523: FrameTick: Before DlHsDschConfig. InCfn %d, ActTime %d
Line 1536: FrameTick: After DlHsDschConfig. RBId %d, DlTrChType %d, InCfn %d
Line 1502: [Warning] FrameTick: Re-update because RbInfo[RbId:%d] is NULL
Line 1607: FrameTick: Before DlDCHConfig. InCfn %d, ActTime %d
Line 1626: FrameTick: After DlDCHConfig. RBId %d, DlTrChType %d, InCfn %d, minTTI %d, Offset %d
Line 1652: StoredDlHsdschMappingEhs Table Clear!!!
Line 1658: StoredDlHsdschMapping Table Clear!!!
Line 1835: [Warning] Corrupted RbId: %d, RbInfo[%d]
Line 1890: HSDPA Loopback. RBId: %d, HsDschConfigWithoutULConfig: 1
Line 1907: gStoredRbListEdch, Loop5 %d
Line 3269: WARNING: ChanTypeTfInfo not recognized
Line 3310: WARNING: Rb is out of bounds
Line 3235: LogCh %d LogChBitmap[LogCh] %d 
Line 3377: WARNING: Rb is out of bounds
Line 3633: WARNING: RbLoop is out of bounds
Line 3663: TFS expected but none available
Line 3678: RbInfo for Rbid=%d is NULL
Line 3715: WARNING: RbLoop is out of bounds
Line 5153: [CSPS]   IncrementCountC. Cs/PsCountC[0]:%d, [1]:%d, [2]:%d, countC:0x%x
Line 6246: [ERROR] SIMInstance(%u) is out of bound!
Line 6294: Allocating Mem for BdBcTbl Size:%d, NumberCTFC:%d
Line 6300: WARNING: BdBcTable is NULL
