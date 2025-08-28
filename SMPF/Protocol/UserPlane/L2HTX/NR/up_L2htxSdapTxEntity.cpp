Line 79: [ERROR][ENTITY][DRBID:%02d] Wrong DomainType(%d->0)
Line 83: [ENTITY][DRBID:%02d] Create SDAP Tx Entity
Line 124: [ENTITY][DRBID:%02d] DRB Release PduSessionId(%d)
Line 135: [OEM][LAM] [DBG] SDAP Channel close: RB_ID[%d], psi(%d), defaultDrb(%d), internet(%d), m_DomainType(%d), m_ChannelId(%d)
Line 155: [ENTITY][DRBID:%02d] Modify Channel PduSessionId(%d)
Line 203: [ERROR][ENTITY] Null pointer for SDAP SDU QFI(%u) ControlPdu(%u)
Line 242: [ENTITY][DRBID:%02d] Release with null parameter PduSessionId(%d)
Line 255: [ERROR][ENTITY][DRBID:%02d] PdcpTxEntity is nullptr
Line 260: [ERROR][ENTITY][DRBID:%02d] PdcpTxProcessor is nullptr
Line 269: [ENTITY][DRBID:%02d] CnAssociation Config PduSessionId(%d)
Line 271: [ENTITY][DRBID:%02d] bIMS PDN(%d)
Line 274: [ERROR][ENTITY][DRBID:%02d] No PDU_SESSION_ID_MASK
Line 310: [ENTITY][DRBID:%02d] Default Drb is absent PduSessionId(%d)
Line 317: [ENTITY][DRBID:%02d] No QoS Flows Add Mask
Line 324: [ENTITY][DRBID:%02d] No QoS Flows Release Mask
Line 330: [ENTITY][DRBID:%02d] pduSessionId(%d) sdapHeaderDl(%d) sdapHeaderUl(%d) defaultDrb(%d) ImsPdn(%d)
Line 331: [ENTITY] Mapped Qos Flows to Add
Line 332: [ENTITY] Mapped Qos Flows to Release
Line 346: [OEM][LAM] [DBG] SDAP Channel open (null PDCP): RB_ID[%d], psi(%d), defaultDrb(%d), internet(%d), m_DomainType(%d), m_ChannelId(%d)
Line 359: [OEM][LAM] [DBG] SDAP Channel open: RB_ID[%d], ServiceType(%d), psi(%d), defaultDrb(%d), internet(%d), bImsPdn(%d), m_DomainType(%d), m_ChannelId(%d)
Line 375: [OEM][LAM_EVENT] NR SDAP/PDCP internet channel open! IsModify(%u), DomainType(%u), RbId(%u), pdcpOpMode(%u), bDISCARD(%u), bAVG(%u), bTCP(%u), bFIRST(%u), bSend(%u)
Line 429: [ENTITY] SetDefaultDrb - PduSessionId (%d), RbId (%d)
Line 441: [ENTITY][DRBID:%02d] Add QFI to DRB mapping - PduSessionId(%d) RbId(%d) Qfi(%d)
Line 452: [SDAP][RQoS][DRBID:%02d] UpdateQfiListforReflectiveQoS - Qfi(%u) PduSessionId(%u)
Line 461: [ENTITY][DRBID:%02d] Release QFI to DRB mapping - PduSessionId(%d) RbId(%d) Qfi(%d)
Line 517: [ENTITY] Init PduSessionReleaseList
Line 538: [ENTITY] Delayed Release (FullConfig) - PduSessionId(%u)
Line 539: [ENTITY] PduSessionReleaseList
Line 549: [ENTITY] Invalid Qfi(%u) or PduSessionId(%u) value for setting RbId(%u)
Line 551: [ENTITY] Qfi(%u) is mapped on Drb(%u) in PduSessionId(%u)
Line 595: [ENTITY][DRBID:%02d] UpdateQfitoDrbMapping (Establish) Qfi(%d)
Line 603: [ENTITY][DRBID:%02d] UpdateQfitoDrbTable PrevRbId(%d) CurRbId(%d) Qfi(%d)
Line 611: [ENTITY][DRBID:%02d][RQoS] Null pointer for NrSmSessionDb
Line 614: [ENTITY][DRBID:%02d][RQoS] Null pointer for CnCommonDb
Line 635: [ENTITY][QoS] Init EndMarkerTable
Line 648: [ENTITY][DRBID:%02d]  Qfi(%d) End Marker
Line 664: [ERROR][ENTITY] SmSessionDb is nullptr
Line 669: [ERROR][ENTITY] CnCommonDb is nullptr)
Line 702: [ERROR][SDAP][RQoS][DRBID:%02d] ProcessReflectiveQoS - No SDAP entity exist
Line 715: [SDAP][RQoS][DRBID:%02d] ProcessReflectiveQoS - Invalid Sdap Info
Line 729: [SDAP][RQoS][DRBID:%02d] Reflective DRB mapping Qfi(0x%02x) RbId(%u) PrevRbId(%u)
Line 732: [WARNING][SDAP][RQoS] Invalid PdcpChId PrevRbId(%u)
Line 739: [ERROR][SDAP][RQoS][DRBID:%02d] L2_PDCPTX_CTRL_PDU_EVENT : SetEvent Fail (DomainType=%d PdcpChId=%d)!!!
Line 753: [SDAP][RQoS][DRBID:%02d] Null pointer for NrSmSessionDb
Line 756: [SDAP][RQoS][DRBID:%02d] Null pointer for CnCommonDb
Line 769: [DRBID:%02d][SDAP][RQoS] Null pointer for NrSmSessionDb
Line 772: [DRBID:%02d][SDAP][RQoS] Null pointer for CnCommonDb
Line 794: [ERROR][ENTITY] Invalid PDCP Rbid(%d)
Line 802: [ERROR][ENTITY] pPdcpTxEntity(0x%X) pSdapTxEntity(0x%X)
Line 812: [ERROR][DRBID:%02d][ENTITY] Init NR OpMode
Line 830: [ERROR][DRBID:%02d][ENTITY] No Qfi mapping - PduSessionId(%d)
Line 837: [ERROR][DRBID:%02d][ENTITY] Null pointer for NrSmSessionDb
Line 842: [ERROR][DRBID:%02d][ENTITY] Null pointer for NrSmParameter - PduSessionId(%d)
Line 846: [ERROR][DRBID:%02d][ENTITY] Null pointer for CnCommonDb
Line 850: [ERROR][DRBID:%02d][ENTITY] Unspecified NR Operation Mode
Line 884: [ERROR][ENTITY] PdcpTxEntity is nullptr
Line 891: [ERROR][ENTITY] SdapTxEntity is nullptr
Line 934: [ERROR][RBID:%02d][ENTITY] Null pointer for NrSmSessionDb
Line 947: [ERROR][RBID:%02d][ENTITY] Null pointer for CnCommonDb
Line 958: [ERROR][ENTITY] ReleasePduSession - Wrong Stack Id(%u)
Line 973: [ENTITY][Release] PduSession ReleaseList - HOwithFullConfig(%d) numRelease(%d)
Line 978: [ENTITY][Release] PDU Session ReleaseList
