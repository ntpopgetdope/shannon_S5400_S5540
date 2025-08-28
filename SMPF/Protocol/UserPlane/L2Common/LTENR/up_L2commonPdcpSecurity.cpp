Line 195: [PDCPSECU:0x%03x][%cRB:%02d][%cL] Create
Line 208: [PDCPSECU:0x%03x][%cRB:%02d][%cL] UpdateSecurity
Line 213: [WARNING][PDCPSECU:0x%03x][%cRB:%02d][%cL] No CommonSecurity Data for DataPathRat(%d)
Line 218: [PDCPSECU:0x%03x][%cRB:%02d][%cL] Update DataPathRat(%d->%d)
Line 233: [PDCPSECU:0x%03x][%cRB:%02d][%cL] Update HeadLen(%d->%d)
Line 238: [PDCPSECU:0x%03x][%cRB:%02d][%cL] Update SnBitLen(%d->%d)
Line 243: [PDCPSECU:0x%03x][%cRB:%02d][%cL] Update LteNrOpMode(%d->%d)
Line 248: [PDCPSECU:0x%03x][%cRB:%02d][%cL] Update RbType(%d->%d)
Line 256: [PDCPSECU:0x%03x][%cRB:%02d][%cL] Update CipherDisabled(%d->%d)
Line 262: [ERROR][PDCPSECU:0x%03x][%cRB:%02d][%cL] Skip invalid Config of SRB (IntegrityProtection=0)
Line 265: [PDCPSECU:0x%03x][%cRB:%02d][%cL] Update IntegrityProtection(%d->%d)
Line 271: [PDCPSECU:0x%03x][%cRB:%02d][%cL] Update KeyToUse(%d->%d)
Line 276: [PDCPSECU:0x%03x][%cRB:%02d][%cL] Update bSwCip(%d->%d)
Line 281: [PDCPSECU:0x%03x][%cRB:%02d][%cL] Update bSwDcp(%d->%d)
Line 287: [ERROR][PDCPSECU:0x%03x][%cRB:%02d][%cL] Skip invalid Config of SRB (RohcUsed=%d)
Line 290: [PDCPSECU:0x%03x][%cRB:%02d][%cL] Update RohcUsed(%d->%d)
Line 296: [PDCPSECU:0x%03x][%cRB:%02d][%cL] Update LcId(%d,%d->%d,%d)
Line 307: [PDCPSECU:0x%03x][%cRB:%02d][%cL] Update CipAlgo(%d->%d)
Line 308: [PDCPSECU]   KeyOld :
Line 309: [PDCPSECU]   KeyNew :
Line 316: [PDCPSECU:0x%03x][%cRB:%02d][%cL] Update ItgAlgo(%d->%d)
Line 317: [PDCPSECU]   KeyOld :
Line 318: [PDCPSECU]   KeyNew :
Line 331: [ERROR][PDCPSECU:0x%03x][%cRB:%02d][%cL] Skip invalid Config of SRB (sdapHeaderUl=0)
Line 334: [PDCPSECU:0x%03x][%cRB:%02d][%cL] Update sdapHeaderUl(%d->%d)
Line 341: [ERROR][PDCPSECU:0x%03x][%cRB:%02d][%cL] Skip invalid Config of SRB (sdapHeaderDl=0)
Line 344: [PDCPSECU:0x%03x][%cRB:%02d][%cL] Update sdapHeaderDl(%d->%d)
Line 351: [PDCPSECU:0x%03x][%cRB:%02d][%cL] AppendNewKey(%d)
Line 369: [PDCPSECU] UpdateLteCommonSecurityConfig DomainType(%d) pSecuConfig(0x%08x)
Line 380: [PDCPSECU:0x%03x][%cRB:%02d][%cL] UpdateFromLteCommonSecurityConfig
Line 393: [PDCPSECU:0x%03x][%cRB:%02d][%cL] UpdateFromLteCommonSecurityConfig - MCG PDCP
Line 499: [PDCPSECU] SwCipher Algo(%d) Length(%d) RbId(%d) Count(%d) Dir(%d)
Line 508: [PDCPSECU] Before :
Line 509: [PDCPSECU] After :
Line 546: [PDCPSECU] SwItg Algo(%d) Length(%d) RbId(%d) Count(%d) Dir(%d)
Line 548: [PDCPSECU] MAC-I Calc :
Line 556: [PDCPSECU] MAC-I Rcv :
Line 558: [PDCPSECU] Integrity verification pass
Line 563: [PDCPSECU] pData(head+payload+maci) 
Line 573: [PDCPSECU:0x%03x][%cRB:%02d][%cL] Registered Rat(%s) DataPathRat(%s) DomainType(%d) RohcUsed(%d) LcId(%d,%d)
Line 577: [PDCPSECU]     HeadLen(%d) SnBitLen(%d) LteNrOpMode(%d) sdapHeaderUl(%d) sdapHeaderDl(%d) CipherDisabled(%d) IntegrityProtection(%d)
Line 580: [PDCPSECU]     CipAlgo(%d) ItgAlgo(%d) KeyToUse(%d) bSwCip(%d) bSwDcp(%d)
Line 581: [PDCPSECU]     CipKey 
Line 582: [PDCPSECU]     ItgKey 
Line 594: [PDCPSECU:0x%03x][%cRB:%02d][%cL] Create PdcpSecurity
Line 599: [PDCPSECU:0x%03x][%cRB:%02d][%cL] Delete PdcpSecurity
Line 673: [WARN][PDCPSECU][%cL] RemovePendingSecurity SecuIdx(0x%x) empty
Line 682: [WARN][PDCPSECU][%cL] RemovePendingSecurity unexpected SecuIdx(Front:0x%x,Req:0x%x) Num(%d)
Line 713: [PDCPSECU:0x%03x][%cRB:%02d][%cL] Free RemainData QIdx(%d) Num(%d) pHead(0x%08x) pTail(0x%08x)
Line 744: [PDCPSECU][UL] RegisterSecurity
Line 759: [PDCPSECU] UnregisterSecurity nullptr
Line 766: [PDCPSECU:0x%03x][%cRB:%02d][%cL] UnregisterSecurity
Line 772: [PDCPSECU:0x%03x][%cRB:%02d][%cL] UnregisterSecurity Pending CipQueue(%d,%d)
Line 823: [PDCPSECU:0x%03x][%cRB:%02d][%cL] DequeueCipherPendingAll pHead(0x%08x) pTail(0x%08x) Num(%d)
Line 831: [PDCPSECU:0x%03x][%cRB:%02d][%cL] DequeueCipherPendingAll fail pHead(0x%08x) pTail(0x%08x) Num(%d) RemainBO(%d)
Line 865: [ERROR][PDCPSECU:0x%03x][%cRB:%02d][%cL] GetPdcpSecurityBO CipQueueNum(0) invalid !
Line 876: [PDCPSECU:0x%03x][%cRB:%02d][UL] GetPdcpSecurityBO HwOngoingQ(%d) CipQ(%d) RevertQ(%d) CipDoneQ(%d) RevertDoneQ(%d)
Line 919: [PDCPSECU:0x%03x][%cRB:%02d][%cL] CIP_SW Num(%d) QId(%d)
Line 925: [OEM][PKTTa] [Event] triggering SW Cipher, trackNum: %u
Line 973: [PDCPSECU:0x%03x][%cRB:%02d][UL] CIP_SW partially done. Num(%d/%d) Count(%d - %d/%d)
Line 989: [ERROR][PDCPSECU:0x%03x][%cRB:%02d][UL] MoveCipQueue failed. pHead(0x%08x) pTail(0x%08x) Num(%d)
Line 998: [PDCPSECU:0x%03x][%cRB:%02d][UL] MoveCipQueue pTail(0x%08x->0x%08x) TotalNum(%d->%d)
Line 1004: [ERROR][PDCPSECU:0x%03x][%cRB:%02d][UL] MoveCipQueue failed. pHead(0x%08x) pTail(0x%08x) Num(%d)
Line 1090: [PDCPSECU:0x%03x][%cRB:%02d][%cL] CIP_HW Modem is not available
Line 1098: [PDCPSECU:0x%03x][%cRB:%02d][%cL] CIP_SW Num(%d) CurQ(%d) while Modem off
Line 1138: [PDCPSECU][UL] payload(p) 
Line 1151: [ERROR][PDCPSECU:0x%03x][%cRB:%02d][%cL] StartCipherEnqueued CipQueueNum(0) invalid !
Line 1166: [PDCPSECU:0x%03x][%cRB:%02d][UL] CIP_HW PktNum(%d) bRevert(%d) AutoCountcMode(%d) AutoGenLlmMode(%d) Cip(%d) Itg(%d) HdrLen(%d)
Line 1192: [OEM][PKTTa] [Event] triggering HW Cipher (LMAC_CIPHER_START_NR_CMD), trackNum: %u
Line 1198: [WARNING][PDCPSECU:0x%03x][%cRB:%02d][%cL] CIP PENDING by L2ExtCmd fail
Line 1243: [WARN][PDCPSECU:] [UL] CIP_HW Retry [totalPduNum] [%d] CipQIdx: [%d]
Line 1254: [PDCPSECU:0x%03x][%cRB:%02d][UL] CIP_HW Retry
Line 1257: [WARN][PDCPSECU:0x%03x][%cRB:%02d][UL] CIP_HW Retry failed.
Line 1273: [ERROR][PDCPSECU] Set L2_PDCP_SW_CIP_EVENT Fail!
Line 1294: [PDCPSECU:0x%03x][%cRB:%02d][%cL] ManualCipherDoneCallback
Line 1300: [WARN][PDCPSECU:0x%03x][%cRB:%02d][%cL] ManualCipherDoneCallback failed. No cmd
Line 1345: [ERROR][PDCPSECU:0x%03x][%cRB:%02d][%cL] Invalid Rat(%d)
Line 1357: [PDCPSECU:0x%03x][%cRB:%02d][%cL] CIP_HW LTE Modem is off. cip_pend_flag(%d)
Line 1367: [PDCPSECU:0x%03x][%cRB:%02d][%cL] CIP_HW NR Modem is off
Line 1374: [PDCPSECU:0x%03x][%cRB:%02d][%cL] CIP_HW TX_REQ Already triggerred
Line 1378: [PDCPSECU:0x%03x][%cRB:%02d][UL] CIP_HW TX_REQ failed. RAT(%d) RetryCnt(%d/%d)
Line 1383: [PDCPSECU:0x%03x][%cRB:%02d][%cL] CIP_HW TX_REQ Rat(NR)
Line 1391: [ERROR][PDCPSECU:0x%03x][%cRB:%02d][%cL] L2_L2HPDCPTX_TX_REQ Fail
Line 1415: [PDCPSECU][UL] payload(c) 
Line 1424: [PDCPSECU:0x%03x][%cRB:%02d][%cL] CIP_SW_CB Num(%d) Result(%d) Count(%d - %d)
Line 1435: [PDCPSECU:0x%03x][%cRB:%02d][%cL] CIP_HW_CB GuardTimer expire !
Line 1464: [PDCPSECU:0x%03x][%cRB:%02d][%cL] CIP_HW partially done. Num(%d/%d) Count(%d - %d/%d)
Line 1467: [PDCPSECU:0x%03x][%cRB:%02d][%cL] CIP_HW_CB Num(%d) Result(%d) Count(%d - %d)
Line 1476: [WARN][PDCPSECU:0x%03x][%cRB:%02d][UL] CIP_HW_CB PDCPTX entity is not valid
Line 1481: [ERROR][PDCPSECU] CIP_HW_CB Security is null
Line 1507: [WARN][PDCPSECU:0x%03x][%cRB:%02d][UL] PDCPTX entity is not valid. CipDoneHandler(null)
Line 1519: [PDCPSECU:0x%03x][%cRB:%02d][%cL] CIP_HW_CB Start pended DomainType(%d)
Line 1522: [WARN][PDCPSECU:0x%03x][%cRB:%02d][UL] CIP_HW is not started. Cause(%d)
Line 1538: [PDCPSECU] Resume CIP DomainType(%d) RAT(%d)
Line 1554: [PDCPSECU:0x%03x][%cRB:%02d][%cL] CheckCipherOnGoing CipQ(%d) CipQRevert(%d) Ciphering(%d)
Line 1569: [WARN][PDCPSECU:0x%03x][%cRB:%02d][UL] FreeCipQueue Num(%d/%d)
Line 1575: [PDCPSECU:0x%03x][%cRB:%02d][UL] CIP_SW Cancelled (ResumeHw)
Line 1585: [WARN][PDCPSECU:0x%03x][%cRB:%02d][UL] SW_CIP is not available EnqueuedNum(0)
Line 1622: [PDCPSECU:0x%03x][%cRB:%02d][%cL] MaxPktRouteSize(%d) MaxTrigNum(%d)
Line 1659: [PDCPSECU] UnregisterSecurity nullptr
Line 1666: [PDCPSECU:0x%03x][%cRB:%02d][%cL] UnregisterSecurity (0x%08x)
Line 1671: [PDCPSECU:0x%03x][%cRB:%02d][%cL] UnregisterSecurity Pending DcpQueue(%d)
Line 1697: [PDCPSECU:0x%03x][%cRB:%02d][DL] RemovePdcpSeccurity remove(0x%08x) keepCur(0x%08x)
Line 1705: [PDCPSECU:0x%03x][%cRB:%02d][DL] DetachPdcpSecurity (0x%08x)
Line 1708: [PDCPSECU:0x%03x][%cRB:%02d][DL] DetachPdcpSecurity Skip (0x%08x,0x%08x)
Line 1713: [PDCPSECU:0x%03x][%cRB:%02d][%cL] SetDecipherDoneCallback pHandler(0x%08x)
Line 1731: [ERROR][PDCPSECU:0x%03x][%cRB:%02d][%cL] DecipherAsync Invalid link pDesc(0x%08x) pPrev(0x%08x)
Line 1738: [WARN][PDCPSECU:0x%03x][%cRB:%02d][%cL] DecipherAsync no previous descriptor (last descriptor) link
Line 1745: [ERROR][PDCPSECU:0x%03x][%cRB:%02d][%cL] DecipherAsync invalid link
Line 1796: [PDCPSECU][DL] ReleaseDcpQueueAllRb! Num(%d)
Line 1809: [DEBUG][PDCPSECU:0x%03x][%cRB:%02d][DL] Find data DcpQueueNum(%d) ISDcpOnGoing(%d)
Line 1817: [DEBUG][PDCPSECU:0x%03x][%cRB:%02d][DL] Find data DcpQueueNum(%d) ISDcpOnGoing(%d)
Line 1915: [ERROR][PDCPSECU:0x%03x][%cRB:%02d][%cL] Invalid size of PDU Count(%d) Length(%d)
Line 1970: [WARN][PDCPSECU:0x%03x][%cRB:%02d][%cL] DCP_SW failed PktNum(%d)
Line 1981: [PDCPSECU:0x%03x][%cRB:%02d][%cL] DCP_SW TrigMode(%d) PktNum(%d)
Line 1998: [WARN][PDCPSECU:0x%03x][%cRB:%02d][DL] Update Cid(%d->%d) invalid !
Line 2000: [PDCPSECU:0x%03x][%cRB:%02d][DL] Update Cid(%d->%d)
Line 2050: [PDCPSECU:0x%03x][%cRB:%02d][DL][HFN RCVRY] AdjustDecipherCount - Start checking DecpQ Count(%d~)
Line 2081: [PDCPSECU:0x%03x][%cRB:%02d][DL][HFN RCVRY] AdjustDecipherCount - Stored Count Changed(%d->%d) AdjustNum(%d) TotalNum(%d)
Line 2098: [PDCPSECU:0x%03x][%cRB:%02d][%cL] DCP_HW DSDS-PAUSE, Waiting RESUME
Line 2107: [PDCPSECU:0x%03x][%cRB:%02d][%cL][L2OD] restore TogglePpIdx
Line 2115: [PDCPSECU:0x%03x][%cRB:%02d][%cL][L2OD] restore
Line 2125: [WARN][PDCPSECU:0x%03x][%cRB:%02d][%cL] DCP_HW failed DescNum(%d) PktNum(%d)
Line 2135: [PDCPSECU:0x%03x][%cRB:%02d][%cL][L2OD] Enable PrePpDesc! DcpQueueNum(%d) PpToggleIdx(%d)
Line 2163: [PDCPSECU:0x%03x][DRB:%02d][DL] DCP_HW TrigMode(%d) PktProcOpMode(%d) Chid(%d) DescNum(%d) PktNum(%d) TotalLength(%d) Retry(%d) SwTrig(%d) DIT
Line 2166: [ERROR][PDCPSECU] hostifSendPktProcData Fail cause(%d)
Line 2174: [PDCPSECU:0x%03x][%cRB:%02d][DL] DCP_HW TrigMode(%d) PktProcOpMode(%d) Chid(%d) DescNum(%d) PktNum(%d) TotalLength(%d) Retry(%d) 
Line 2217: [PDCPSECU] GenPktProcTrigInfo failed SecuNum(%d)
Line 2224: [PDCPSECU] GenPktProcTrigInfo failed KeySetNum(%d) Dcp(%d) Itg(%d)
Line 2232: [PDCPSECU] GenPktProcTrigInfo failed OpMode(%d->%d)
Line 2236: [PDCPSECU] GenPktProcTrigInfo failed PdcpHdrLen(%d->%d) Itg(1)
Line 2250: [PDCPSECU] GenPktProcTrigInfo Chid(%d->%d) DescNum(%d)
Line 2289: [WARN][PDCPSECU][DL] GenPktProcDesc MergeSegment(%d) MergePduSize(%d)
Line 2326: [WARNING][PDCPSECU:0x%03x][%cRB:%02d][%cL] SDAP Header only descriptor pDesc(0x%08x) Count(%d) LastSeg(%d) Payload(0x%02x) Length(%d)
Line 2336: [ERROR][PDCPSECU:0x%03x][%cRB:%02d][%cL] Invalid size of PDU pDesc(0x%08x) Count(%d) LastSeg(%d) Payload(0x%02x) Length(%d)
Line 2386: [WARN][PDCPSECU:0x%03x][%cRB:%02d][%cL] Invalid size of PDU pDesc(0x%08x) Count(%d) LastSeg(%d) Payload(0x%02x) Length(%d)
Line 2397: [PDCPSECU] Payload 
Line 2403: [PDCPSECU] Payload 
Line 2446: [WARN][PDCPSECU:0x%03x][%cRB:%02d][%cL] CP_RT Big size PDU pDesc(0x%08x) Count(%d) Length(%d)
Line 2553: [PDCPSECU:0x%03x][%cRB:%02d][%cL][CG:%d] GenPktProcTrigInfo DescNum(%d) PktNum(%d) SecNum(%d) Remain(%d) PpToggleIdx(%d)
Line 2607: [ERROR][PDCPSECU:0x%03x][%cRB:%02d][%cL] TrigInfo.DescNum(%d) is out of range!
Line 2685: [PDCPSECU:0x%03x][%cRB:%02d][%cL] RemainData PduNum(%d) Count(%d~)
Line 2713: [PDCPSECU:0x%03x][%cRB:%02d][%cL] DCP_HW Retry set
Line 2717: [ERROR][PDCPSECU] Set PdcpRx Event Fail!
Line 2748: [WARN][PDCPSECU:0x%03x][%cRB:%02d][%cL] DCP_HW_CB DecipherDoneHandler is null
Line 2791: [ERROR][PDCPSECU:0x%03x][%cRB:%02d][DL] DCP_HW_CB failed !
Line 2799: [ERROR][PDCPSECU:0x%03x][%cRB:%02d][DL] Invalid CP_RT for Cid(%d) !
Line 2830: [WARN][PDCPSECU:0x%03x][%cRB:%02d][DL] DCP_HW_CB DCPRX entity is not valid
Line 2839: [ERROR][PDCPSECU] DCP_HW_CB Security is null
Line 2854: [WARN][PDCPSECU:0x%03x][%cRB:%02d][DL] PDCPRX entity is not valid. DcpDoneHandler(null)
Line 2865: [PDCPSECU:0x%03x][%cRB:%02d][DL] DCP_HW_CB Start pended request
Line 2868: [WARN][PDCPSECU:0x%03x][%cRB:%02d][DL] DCP_HW is not started. Cause(%d)
Line 2884: [PDCPSECU:0x%03x][%cRB:%02d][DL] DCP_HW Retry set
Line 2894: [ERROR] pSecurityDl is null during NrStartPktProc!
Line 2898: [L2OD] SECU_PRE_PKTPROC_EVENT!
Line 2901: [WARNING] Can not trigger PrePktProc! IsNeedGenPpDesc(%d) GetDcpEnqueuedNum(%d)
Line 2909: [PDCPSECU] Invalid Rx Event! (%d)
Line 2938: [PDCPSECU:0x%03x][%cRB:%02d][DL] DCP_HW revert set DcpQueueNum(%d->%d) DcpQueueRelease(0x%08x-0x%08x) Count(%d)
Line 2965: [ERROR][PDCPSECU:0x%03x][%cRB:%02d][%cL] Invalid size of PDU Count(%d) Length(%d)
Line 3086: [ERROR][PDCPSECU:0x%03x][%cRB:%02d][%cL] DCP_HW_CB(CP_RT) Cannot find valid CellGroupType Type(%d) StartIdx(%d) Num(%d) Count(%d)
Line 3103: [ERROR][PDCPSECU:0x%03x][%cRB:%02d][%cL] DCP_HW_CB(CP_RT) Too much Error Log. Skip remain errors Type(%d) StartIdx(%d) Num(%d) InvalidPktCnt(%d~)
Line 3122: [WARNING][PDCPSECU:0x%03x][%cRB:%02d][%cL] DCP_HW_CB(CP_RT) Error log Skipped InvalidPktCnt(~%d)
Line 3133: [WARN][PDCPSECU:0x%03x][%cRB:%02d][%cL] DCP_HW_CB Skip! (Unreg)
Line 3342: [WARN][PDCPSECU][DL] MakeLbPDU is not allowed or Length(%d) is not valid
Line 3351: [WARNING][PDCPSECU] Cid=0 and Rohc Used. Deliver to Hostif !
Line 3356: [ERROR][PDCPSECU] Failed to alloc HostifBuffer !
Line 3363: [PDCPSECU] SW Deciphered :
Line 3384: [ERROR][PDCPSECU] Invalid packet! pData[0~1] = %02x %02x, Length(%d) Count(%d) Cid(%d)
Line 3423: [PDCPSECU:0x%03x][DRB:%02d][DL] DCP_HW_CB Num(%d) Result(%d) PDU(Count(%d - %d) pData(0x%08x - 0x%08x) Length(%d - %d))
Line 3427: [PDCPSECU:0x%03x][SRB:%02d][DL] DCP_SW_CB Num(%d) Result(%d) PDU(Count(%d - %d) pData(0x%08x - 0x%08x) Length(%d - %d))
Line 3428: [PDCPSECU] Payload :
Line 3459: [PDCPSECU] PktProcDesc RbId(%d) Count(%d) Len(%d) lastSeg(%d) Cip/CipAlgo/CipKeyIdx(%d) Itg/ItgAlgo/ItgKeyIdx(%d) PdcpHdr(0x%08x)
Line 3460: [PDCPSECU]     SDUPayload 
Line 3463: [PDCPSECU]     Key(upenc) 
Line 3466: [PDCPSECU]     Key(upint) 
Line 3483: [ERROR][PDCPSECU:0x%03x][%cRB:%02d][DL] DCP_HW_CB GuardTimer expire ! PpStatus(0x%08x) ComIndicate(0x%08x) PfResult(0x%08x)
Line 3512: [ERROR] pSecurityDl is null!
Line 3529: [PDCPSECU] ReleasePktProcDescDynAlloc ReleaseNum(%d)
Line 3552: [PDCPSECU] PdcpHostIfList empty after MUX !!
Line 3562: [ERROR][PDCPSECU] DeliverHostif Fail pHostData(0x%08x) pHostEndData(0x%08x)
Line 3574: [PDCPSECU:0x%03x][%cRB:%02d][%cL] DeliverHostif Cid(%d) PktNum(%d) TotalLen(%d)
Line 3588: [ERROR][PDCPSECU] hostifSendListData Fail (cause=%d)
Line 3611: [PDCPSECU] RunSwIntegrityVerificationStoredPdu! SmcCount(%d) SmcLength(%d) SmcPayload(First 4bytes : 0x%x 0x%x 0x%x 0x%x)
Line 3626: [PDCP RX][ERROR] MonitorTimer : Create Fail !!!
Line 3648: [PDCP RX] PollingTimer expire (%dms)
Line 3654: [PDCPSECU] Resume DCP
Line 3718: [IcmpDetection][%cRB:%02d][%cL] Icmp Period %dms, RTT : %dms
Line 3722: [IcmpDetection][%cRB:%02d][%cL] GetIcmpTxCount[%d]
