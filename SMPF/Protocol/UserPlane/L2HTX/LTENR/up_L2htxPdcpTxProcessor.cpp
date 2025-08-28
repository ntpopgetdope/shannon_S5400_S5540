Line 135: [PROC][StatusPdu][Compare] FMC diff(%d/%d)
Line 140: [PROC][StatusPdu][Compare] BitmapLen diff(%d/%d)
Line 249: [INFO][PROC][DRBID:%02d][VOICE_DRX_SYNC] Skipped by DRX cycle
Line 261: [ERROR][PROC][DRBID:%02d] Discard Pdcp SDU for RLC UM UniDirectinonal DL mode NumPkts(%d)
Line 277: [ERROR][PROC][DRBID:%02d] Dequeue result is null
Line 283: [ERROR][PROC][DRBID:%02d] Invalid Packet Length(%d)
Line 290: [ERROR][PROC][DRBID:%02d] UBuffer full
Line 395: [OEM][PKTTa] [Event] LTE/NSA Descriptor change: Cell to Ubuffer. After L2_PDCPTX_NSA_UL_DATA_EVENT
Line 400: [OEM][PKTTa] [Stage:3A][Tag:%08X][dT:%u] PKT in NR pdcpTxQ (LTE|NSA). pdcpTxCount: %u, pdcpPduLen: %u, OpMode: %u, PdcpVer: %u, rbid: %u, rohc: %u, pktid: 0x%x, pdcpTime: %u
Line 406: [ERROR][PROC][%cRBID:%02d] pPdcpSecurity is nullptr
Line 425: [OEM][LAM_EVENT] [DBG][A] NR PDCP receiving drb data! DomainType(%u), RbId(%u), NumDataPdu(%u), bFIRST(%u)
Line 448: [PROC][DRBID:%02d] Discard %d Pdcp SDU before assigning PDCP count
Line 460: [PROC][DRBID:%02d] Not Active State, PDCP COUNT(%d - %d) TotalLen(%d) State(%d)
Line 465: [OEM][PKTTa_WARN] [Stage:3A] Not send to cipher, PDCP state != ACTIVE. trackNum: %u
Line 484: [PROC][DRBID:%02d][PENDING] StatusReportProc Ongoing PDCP COUNT(%d - %d) TotalLen(%d)
Line 487: [PROC][DRBID:%02d] PDCP COUNT(%d - %d) TotalLen(%d)
Line 506: [ERROR][PROC][DRBID:%02d] Discard Pdcp SDU for RLC UM UniDirectinonal DL mode 
Line 510: [ERROR][PROC][DRBID:%02d] PDCP SDU is null
Line 518: [ERROR][PROC][DRBID:%02d] Invalid Packet Length(%d)
Line 525: [ERROR][PROC][DRBID:%02d] UBuffer full
Line 567: [PROC][DRBID:%02d] Discard Pdcp SDU before assigning PDCP count
Line 624: [OEM][PKTTa] [Event] SA Descriptor change: Cell to Ubuffer. Before L2L3IF_SA_UL_DATA_EVENT
Line 629: [OEM][PKTTa] [Stage:3_][Tag:%08X][dT:%u] PKT in NR pdcpTxQ (SA). pdcpTxCount: %u, pdcpPduLen: %u, OpMode: %u, PdcpVer: %u, rbid: %u, sdap: %u, pktid: 0x%x, pdcpTime: %u
Line 635: [ERROR][PROC][%cRBID:%02d] pPdcpSecurity is nullptr
Line 641: [PROC][DRBID:0x%02x] Not Active State, in In PendingQ, State(%d)
Line 658: [OEM][PKTTa] [Event] SA Descriptor change: Cell to Ubuffer. Before L2L3IF_SA_UL_DATA_EVENT
Line 660: [OEM][PKTTa_WARN] PKT in NR PDCP pending Q, PDCP state(%u) != ACTIVE. trackNum: %u
Line 665: [OEM][PKTTa] [Stage:3P][Tag:%08X][dT:%u] PKT in NR pdcpTxPendingQ (SA). pdcpTxCount: %u, pdcpPduLen: %u, OpMode: %u, PdcpVer: %u, rbid: %u, sdap: %u, pktid: 0x%x, pdcpTime: %u
Line 678: [OEM][LAM_EVENT] [DBG][B] NR PDCP receiving drb data! DomainType(%u), RbId(%u), NumDataPdu(%u), bFIRST(%u)
Line 706: [ERROR][PROC][DRBID:%02d] PDCP SDU is null
Line 712: [ERROR][PROC][DRBID:%02d] Invalid Packet Length(%d)
Line 719: [ERROR][PROC][DRBID:%02d] UBuffer full
Line 755: [PROC][DRBID:%02d] Discard Pdcp SDU before assigning PDCP count
Line 782: [ERROR][PROC][%cRBID:%02d] pPdcpSecurity is nullptr
Line 817: [WARN][PROC][DRBID:0x%02x] Not Apply LazyWakeUp in Split bearer in NR-DC
Line 837: [PROC][DRBID:0x%02x] Not Active State, PDCP COUNT(%d - %d) State(%d)
Line 842: [PROC][DRBID:%02d][PENDING] StatusReportProc Ongoing PDCP COUNT(%d - %d)
Line 845: [PROC][DRBID:%02d] PDCP COUNT(%d - %d) TotalLen(%d)
Line 907: [PROC][%cRBID:%02d] RecvRevertData eSrc(%d) count(%d) bSdapHdrAppend(%d) m_IsReEstablish(%d)
Line 963: [PROC][DRBID:%02d][RevertDone] PDCP COUNT(%d - %d) TotalLen(%d)
Line 983: [PROC][SRBID:%02d] RecvSrbData
Line 986: [ERROR][PROC][SRBID:%02d] Mismtached RBID (RRC RBID: 0x%02x)
Line 993: [ERROR][PROC][SRBID:%02d] RRC UbufferDescriptor Alloc Fail - Mui (%u)
Line 1003: [ERROR][PROC][SRBID:%02d] RRC Cell Buffer Alloc Fail - Mui (%u)
Line 1024: [PROC][SRBID:%02d] RRC MSG has MUI (%d)
Line 1043: [PROC][SRBID:%02d] Head[0x%X] Tail[0x%X]
Line 1044: [PROC][SRBID:%02d] PdcpTxQ ippkt_ptr[0x%X] RlcSduLen[%d]
Line 1048: [PROC][%cRBID:%02d] PDCP COUNT(%d) PDU Len(%d)
Line 1056: [PROC][%cRBID:%02d][SwIntgDone] ippkt_ptr(0x%X) RlcSduLen(%d)
Line 1057: [PROC][SwIntgDone] Data : 
Line 1069: [PROC][%cRBID:%02d] Not Active State, PDCP COUNT(%d) TotalLen(%d) State(%d)
Line 1089: [PROC][SRBID:%02d] RecvSrb1bisData
Line 1092: [ERROR][PROC][SRBID:%02d] Mismtached RBID (RRC RBID: 0x%02x)
Line 1099: [ERROR][PROC][SRBID:%02d] RRC UbufferDescriptor Alloc Fail - Mui (%u)
Line 1107: [ERROR][PROC][SRBID:%02d] RRC Cell Buffer Alloc Fail - Mui (%u)
Line 1128: [PROC][SRBID:%02d] RRC MSG has MUI (%d) pollReq (%d)
Line 1138: [PROC][%cRBID:%02d] PDCP COUNT(%d) PDU Len(%d)
Line 1159: [ERROR][PROC][DRBID:%02d][ControlPdu] Discard PDCP Control PDU for RLC UM UniDirectinonal DL mode ! Num of Control PDUs(%d)
Line 1165: [ERROR][PROC][DRBID:%02d][ControlPdu] Not Control PDU
Line 1171: [ERROR][PROC][DRBID:%02d][ControlPdu] Control PDU is nullptr
Line 1177: [ERROR][PROC][DRBID:%02d][ControlPdu] Invalid Packet Length(%d)
Line 1190: [ERROR][PROC][DRBID:%02d][ControlPdu] Memory Allocation Fail for Control PDU
Line 1199: [ERROR][PROC][DRBID:%02d][ControlPdu] UBuffer full
Line 1213: [PROC] SDAP Control PDU : 
Line 1218: [PROC] PDCP PDU : 
Line 1223: [PROC] PDCP CTRL PDU : 
Line 1270: [PROC][DRBID:%02d][ControlPdu] Head(0x%X) Tail(0x%X)
Line 1273: [PROC][DRBID:%02d][ControlPdu] Not Active State, TotalLen(%d) State(%d)
Line 1276: [PROC][DRBID:%02d][ControlPdu] TotalLen(%d)
Line 1283: [PROC][DRBID:%02d][StatusPdu] Processing PDCP Status PDU (Status PDU is null)
Line 1292: [PROC][DRBID:%02d][StatusPdu] Not handle in RlcMode(%d) StatusPduLen(%d)
Line 1303: [PROC][StatusPdu] Received PDCP Status PDU : 
Line 1313: [PROC][DRBID:%02d][StatusPdu] FMC(%u) TX_NEXT(%u) WindowSize(%u) BitmapLen(%d)
Line 1333: [PROC][DRBID:%02d][StatusPdu] Ignore PDCP status PDU - FMC(%u) PdcpCount_LastBitmap(%u) PdcpCount_FirstRetx(%u) TX_NEXT(%u) PdcpCount_NextAck(0x%08x)
Line 1337: [ERROR][PROC][DRBID:%02d][StatusPdu] Ignore Old PDCP status PDU - FMC(%u) PdcpCount_LastBitmap(%u) PdcpCount_FirstRetx(%u) TX_NEXT(%u) PdcpCount_NextAck(0x%08x) TxNextBackup(%u)
Line 1341: [ERROR][PROC][DRBID:%02d][StatusPdu] Out of Range PDCP status PDU - FMC(%u) PdcpCount_LastBitmap(%u) PdcpCount_FirstRetx(%u) TX_NEXT(%u) PdcpCount_NextAck(0x%08x)
Line 1350: [PROC][DRBID:%02d][StatusPdu] Ignore PDCP status PDU - FMC(%u) PdcpCount_LastBitmap(%u) PdcpCount_FirstRetx(%u) TX_NEXT(%u) PdcpCount_NextAck(0x%08x)
Line 1356: [PROC][StatusPdu][Compare] FMC(%d/%d) BitmapLen diff(%d/%d)
Line 1357: [StatusPdu][Stored] Bitmap : 
Line 1358: [StatusPdu][New] Bitmap : 
Line 1367: [PROC][DRBID:%02d][StatusPdu] BitmapLen(%d)
Line 1382: [ERROR][PROC][DRBID:%02d][StatusPdu] Fail to allocate memory for Bitmap Len(%u)
Line 1405: [ERROR][PROC][DRBID:0x%02x][PdcpDup][StatusPdu] Fail to allocate memory for PDCP status PDU - Len (%u)
Line 1411: [PROC][DRBID:0x%02x][PdcpDup]Received PDCP Status report indicated to peer Lcid:0x%02x FMC: (%u)
Line 1479: [PROC][DRBID:%02d][StatusPdu] All PDCP_TX_Q, PDCP_TX_DONE_Q, PDCP_TX_REVERT_DONE_Q are empty
Line 1484: [PROC][StatusPdu] Bitmap : 
Line 1508: [PROC][DRBID:%02d][StatusPdu] PDCP TX Q type(%d) PDCP COUNT(%u) < FMC(%u)
Line 1520: [WARNING][PROC][DRBID:%02d] MAX PDCP COUNT
Line 1527: [PROC][DRBID:%02d][StatusPdu] NACKed PDCP COUNT(%d)
Line 1538: [PROC][DRBID:%02d][StatusPdu] ACKed PDCP COUNT(%d)
Line 1570: [PROC][DRBID:%02d][StatusPdu] pStatusPdu(0x%X) Offset(%d) SnFormat(%d)
Line 1603: [PROC][DRBID:%02d][StatusPdu] GetFMC pStatusPdu(0x%X) Offset(%d) OffsetByte(%d) Fms(%d) Hfn(%d)
Line 1630: [PROC][DRBID:0x%02x] Not Active State, PDCP COUNT(%d - %d) State(%d)
Line 1635: [PROC][%cRBID:%02d] Process PendingData, Head(0x%X) Tail(0x%X) Count(%d).
Line 1669: [PROC][%cRBID:%02d] Process PendingData completed [PDCP_TX_PENDING_Q => PDCP_TX_Q], PDCP COUNT(%10d - %10d) Num(%d).
Line 1707: [ERROR][PROC][%cRBID:%02d] Unknown PDCP SN size PdcpSnFormat(%d)
Line 1781: [PROC][%cRBID:%02d] RemovePdcpHeader eSrc(%d) count(%d) bSdapHdrAppend(%d)
Line 1806: [ERROR][PROC][%cRBID:%02d] RemovePdcpHeader Unknown PDCP SN size PdcpSnFormat(%d)
Line 1829: [ERROR][PROC][%cRBID:%02d] RegisterSecurity pPdcpSecurity[0x%X]
Line 1832: [PROC][%cRBID:%02d] RegisterSecurity pPdcpSecurity(0x%X) SecuIdx(%d)
Line 1839: [ERROR][PROC][%cRBID:%02d] RegisterSecurity pPdcpSecurity[0x%X]
Line 1843: [PROC][%cRBID:%02d] Update SdapHeaderUl(%d) pPdcpSecurity(0x%X) SecuIdx(%d)
Line 1848: [PROC][%cRBID:%02d] PdcpTxProcessor::UnregisterSecurity pPdcpSecurity[0x%X]
Line 1850: [WARN][PROC][%cRBID:%02d] PdcpTxProcessor::UnregisterSecurity pPdcpSecurity[0x%X]
Line 1875: [PROC][%cRBID:%02d][CipherDone] Null pointer TotalPduNum(%d)
Line 1894: [RbId:0x--][DecipherDone] DUMP
Line 1940: [OEM][PKTTa] [Event] Cipher done, applying Diablo routing algo... trackNum: %u
Line 1949: [OEM][PKTTa] [Event] Cipher done, applying Lassen routing algo... trackNum: %u
Line 2057: [WARN][PROC][%cRBID:%02d][Cipher] StartCipherEnqueued [%d]
Line 2071: [PROC][%cRBID:%02d] Process Cancel Ciphering Completed [SECURITY_Q => PDCP_TX_Q], PDCP COUNT(%10d - %10d) Num(%d) bCancelSuccess(%d)
Line 2094: [PROC][%cRBID:%02d][REVERT#1] bSrb(%d) bCipherEnable(%d) bItgEnable(%d) RohcUsed(%d)
Line 2150: [PROC][%cRBID:%02d] ProcRollBackRohc eSrc(%d) count(%d)
Line 2198: [ERROR][PROC][SRBID:%02d] Discard all stored SRB data Num(%d)
Line 2237: [WARNING][PROC][DRBID:%02d][CG:%d] CheckPdcpHfnMismatch - Skip Invalid LastPdcpCount_RlcAcked(%d) PdcpCount_FirstRetx(%d) TX_NEXT(%d)
Line 2246: [PROC][DRBID:%02d] CheckPdcpHfnMismatch LastPdcpCount_RlcAcked(%d/%d/%d) PdcpCount_FirstRetx(%d) TX_NEXT(%d) CountDiff(%d) AllRlcReverted(%d)
Line 2259: [PROC][DRBID:%02d] PDCP TX HFN mismatch detected !!! LastPdcpCount_RlcAcked(%d/%d/%d) TX_NEXT(%d) CountDiff(%d)
Line 2266: [ERROR][PROC][%cRBID:%02d] Trigger Local Release by Hfn mismatch detected !!! RatType(%d)
