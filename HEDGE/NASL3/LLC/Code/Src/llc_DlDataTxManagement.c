Line 55: Invalid Protocol Descriptor
Line 62: Invalid Tlli
Line 78: RLC_DATA_IND-Len %d:FrameType 0x%04X:SAPI %d:LlcState %d:LlcHeader 0x%02X 0x%02X 0x%02X
Line 82: Sapi:TLLI_UNASSIGNED
Line 93: RLC_DATA_IND Ignored:SAPI(%d):LlcSuspended(%d):CipherALgo(%d):CipherBit(%d)
Line 134: Invalid FrameType %d
Line 168: RLC_DATA_CNF sapi %d BuffAdd 0x%x buffer_id 0x%4X seq_no %d sent_time %dms
Line 225: RLC_DATA_CNF : free llc_RlcCurrPos
Line 264: RLC_DATA_CNF Invalid BufferId 0x%4X seq_no %d  sapi %d
Line 294: STATUS_IND Rcvd: MsgRec->BuffAd is NULL !!!!
Line 317: STATUS_IND Rcvd: Sending Trig Ind(%d) instead of Status Ind
Line 342: Invalid BufferId 0x%04X Sapi %d
Line 356: RLC_STATUS_IND UFrame , UFrameType %d sapi %d
Line 361: Warning: BuffAdd is NULL
Line 365: ERROR : BuffAdd (0x%08x) is not same as Uptr (0x%08x)
Line 381: UFrame RLC transmission failure. Release U frame. UFrameType %d sapi %d
Line 395: Sapi:TLLI_UNASSIGNED
Line 396: Release U frame. UFrameType %d sapi %d
Line 413: RLC_STATUS_IND : free llc_RlcCurrPos
Line 500: Warning: BuffAdd is NULL
Line 504: ERROR : BuffAdd (0x%08x) is not same as Sptr (0x%08x)
Line 515: Malloc failed Sptr->SFramePtr=NULL
Line 527: Sptr Seq No %d != Msg Seq No %d
Line 604: UFrame Sapi %d CRC Fail
Line 608: Rx U Frame
Line 647: Malloc failed SabmCommand=NULL
Line 665: UFrame not processed. Sapi %d, State %d, Length %d, FreeQ Read %08X
Line 690: Received UA, Fbit 0, Sapi %d, State %d, Length %d
Line 695: Received SABM, Sapi %d, State %d, Length %d
Line 702: Received FRMR, Sapi %d, State %d, Length %d
Line 708: Rcvd FRMR:Sapi %d:State %d:Len %d
Line 711: Rcvd FRMR:N201 exceeded:Sapi %d Set to Default
Line 749: Malloc failed SabmCommand=NULL
Line 766: U FreeQ Full:Sapi %d:State %d
Line 800: Malloc failed DmResPtr=NULL
Line 816: U FreeQ Full
Line 835: Sending UA, Sapi %d, snpXidLength %d
Line 854: Malloc failed UaResponse=NULL
Line 897: U FreeQ Full Sapi %d 
Line 924: DM Resp rcvd in LLE_ADM 
Line 932: DM Resp rcvd( State %d ) while LLC trying to establish ACK link, hence send LL_RELEASE_IND to SNDCP 
Line 936: State for Sapi %d set to %d
Line 952: State for Sapi %d set to %d
Line 1186: SABM+XID Cmd rcvd:ADM_SABM_SENT:Sapi %d 
Line 1191: State for Sapi %d set to %d
Line 1196: State for Sapi %d set to %d
Line 1201: Sabm recvd for invalid Sapi %d
Line 1206: LLE_ADM_SABM_SENT, Sabm recvd w/o xid, hence ignored
Line 1259: Malloc failed UaResPtr=NULL
Line 1283: U FreeQ Full
Line 1299: State for Sapi %d set to %d
Line 1314: Malloc failed UaResPtr=NULL
Line 1339: U FreeQ Full
Line 1345: State for Sapi %d set to %d
Line 1389: DlIFrame Too short:Sapi %d:Header Len %d:Len %d
Line 1396: DlIFrame Free Q empty:Sapi %d
Line 1465: XID Cmd from n/w CurrN201U %d CurrN201I %d 
Line 1484: SNDCP XID Reset trigger from NW
Line 1489: llc_ProcessRcvdXidCmdRes Malloc failed
Line 1505: llc_ProcessRcvdXidCmdRes Malloc failed
Line 1529: [SGSN_COMMAND]Sending kU
Line 1534: [SGSN_COMMAND]Not Sending kU
Line 1552: [SGSN_COMMAND]U FreeQ Full
Line 1572: XID Response received, Sapi %d
Line 1579: Invalid XID_RESP Rcvd:XID_COMMAND ReTx'ed
Line 1582: Invalid XID_RESP Rcvd: XID ReTx'ed N200 times
Line 1667: State for Sapi %d set to %d
Line 1682: State for Sapi %d set to %d
Line 1707: State for Sapi %d set to %d
Line 1748: State for Sapi %d set to %d
Line 1800: Frame Invalid:Sapi %d:Discard
Line 1807: Cannot get DL_FRAME for Sapi %d:Discard
Line 1815: Invalid PDU len %d:Discard
Line 1826: UIFrame:Ciphered %d:Sapi %2d:Len %d:SeqNo %3d:DlOC %d
Line 1835: Hdr indicates ciphering, but no algorithm configured. Discard
Line 1896: DlOCCurr %d Nu %d 
Line 1902: Frame too short:SAPI %d:L3PduLen %d
Line 1907: Frame too long:SAPI %d:L3PduLen %d:N201u %d
Line 1916: Duplicate Frame:Nu %3d:Vur %3d:Duplicate mask 0x%08X:offset %3d:SAPI %d
Line 2000: IFrame Invalid Len %d:N201-I %d
Line 2010: FALSE:llc_CheckValidityForKdMd()
Line 2113: Ns %d:Nr %d:SBits 0x%02X:Invalid SBits
Line 2150: Malloc failed RnrFramePtr=NULL
Line 2211: FALSE:llc_CheckIFrameValidity(PduLen-%d:Headerlen-%d:Ns %d:Nr %d:SBits %d
Line 2237: DlIFrame->DlPduPtr:NULL
Line 2324: SFrame Rcvd:LLE != LLE_ABM:Send DM RSP:State %d:Sapi %d
Line 2347: Sending FRMR, Sapi %d
Line 2366: Malloc failed FrmrPtr=NULL
Line 2404: Sending FRMR:Sapi %d:U Free Q Full
Line 2444: Malloc failed SabmCommand=NULL
Line 2534: RR/ACK/RNR_FRAME_S_BITS:Invalid SFrameLen
Line 2548: SACK_FRAME_S_BITS:Invalid SFrameLen
Line 2554: Invalid SBits
Line 993: SABM+XID Cmd rcvd:ADM:Sapi %d 
Line 998: State for Sapi %d set to %d
Line 1003: State for Sapi %d set to %d
Line 1019: Malloc failed UaResponse=NULL
Line 1036: State for Sapi %d set to %d
Line 1041: U FreeQ Full:Sapi %d
Line 1085: SABM+XID Cmd rcvd:ABM:Sapi %d 
Line 1090: State for Sapi %d set to %d
Line 1095: State for Sapi %d set to %d
Line 1108: Malloc failed UaResPtr=NULL
Line 1128: State for Sapi %d set to %d
Line 1133: U FreeQ Full Sapi %d 
