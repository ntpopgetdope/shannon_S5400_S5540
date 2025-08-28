Line 114: [WARNING] Wrong DomainType(%d). Reset to default 0 !!!
Line 126: [LcId:0x%02x] Init gRlcRxEntityPtrTable !!!
Line 138: [CG:%d][LcId:0x%02x] RbId is changed when Modification(%d -> %d)
Line 146: [CG:%d][LcId:0x%02x][ERROR] Pdcp Rbid=%d, Srb=%d
Line 160: [CG:%d][LcId:0x%02x] RbId is changed when Modification(%d -> %d)
Line 168: [CG:%d][LcId:0x%02x][ERROR] Pdcp Rbid=%d, Srb=%d
Line 202: [CG:%d][LcId:0x%02x][ERROR] Not Support RLC Mode(%d)
Line 219: [CG:%d][LcId:0x%02x] [ERROR] Failed to Configure t-Reassembly !!!
Line 225: [CG:%d][LcId:0x%02x] [ERROR] Failed to Configure t-StatusProhibit !!!
Line 231: [CG:%d][LcId:0x%02x] [ERROR] Failed to Configure NR2CTimer !!!
Line 238: [CG:%d][LcId:0x%02x] L2HRXRLC_Config: RbId(%d), RlcMode(%d), SnFieldLength(%d), ReassemblyTimer(%d), StatusProhibitTimer(%d) 
Line 253: ERROR!!!! nullptr pConfigParam in UsOpenChannel:%d
Line 280: [CG:%d][LcId:0x%02x] Not Support RLC Mode(%d)
Line 299: [LcId:0x%02x] [ERROR] Open fail not enough RlcRxQueue
Line 306: [LcId:0x%02x] [ERROR] Open fail not enough TmpRxNackTriggerQueue
Line 319: UsCloseChannel:%d
Line 392: [ERROR] SpscQueue is null! 
Line 463: [CG:%d][LcId:0x%02x] Discard!!! StartSn:%d ~ LastSn:%d
Line 472: UsResetChannel:%d
Line 524: UsModifyChannel:%d
Line 527: [ERROR]!!!! nullptr pConfigParam in UsModifyChannel:%d
Line 537: [CG:%d][LcId:0x%02x][ERROR] RLC Entity is not deleted after triggering
Line 548: [CG:%d][LcId:0x%02x][WARNING] Modify SnFieldLength(%d->%d)
Line 566: [CG:%d][LcId:0x%02x] [ERROR] Not Support RLC Mode(%d)
Line 597: [CG:%d][LcId:0x%02x][WARNING] m_SubState(%d) is not RLC_ACTIVE!
Line 611: [CG:%d][LcId:0x%02x] m_PollSet:%d m_bStatusTrigger:%d Ongoing:%d Expired:%d @L2_NR_TRIG_TIME_HANDLE_STATUS_PROHIBIT_EVENT
Line 700: [ERROR] SpscQueue is null! 
Line 723: [ERROR] pCurPdu is null[%d]!
Line 734: [CG:%d][LcId:0x%02x][WARNING] pCurPdu is same to previous CurPdu(0x%x)!
Line 861: [CG:%d][LcId:0x%02x][flag:%d/%d] t-ReassemblyTimer expired while processing data
Line 888: [CG:%d][LcId:0x%02x][flag:%d/%d][m_PollSet:%d/m_bStatusTrigger:%d] t-StatusProhibit expired while processing data
Line 912: [ERROR] CtrlPdu nullptr! 
Line 928: [CG:%d][LcId:0x%02x][%d] Send AMD Status PDU Len:%d
Line 939: [CG:%d][LcId:0x%02x]:RLC_NOT_ACTIVE State 
Line 1042: [CG:%d][LcId:0x%02x] Complete UMD Len:%d (PdcpSn:0x%02x)
Line 1046: [CG:%d][LcId:0x%02x] Complete UMD Len:%d
Line 1064: [CG:%d][LcId:0x%02x] Segment UMD SN:%d SI:%s SO:%d Len:%d (PdcpSn:0x%02x)
Line 1069: [CG:%d][LcId:0x%02x] Segment UMD SN:%d SI:%s SO:%d Len:%d
Line 1112: [CG:%d][LcId:0x%02x][WARNING] PduSn:%d >= m_RxSnSize:%d
Line 1166: [CG:%d][LcId:0x%02x] AMD SN:%d SI:%s SO:%d, P:%d Len:%d
Line 1188: [CG:%d][LcId:0x%02x][DISCARD] AMD SN:%d SI:%s SO:%d, P:%d Len:%d (PdcpSn:0x%02x)
Line 1193: [CG:%d][LcId:0x%02x][DISCARD] AMD SN:%d SI:%s SO:%d, P:%d Len:%d
Line 1225: [CG:%d][LcId:0x%02x][ERROR]!!! ReassemblyRlt:%d
Line 1338: [CG:%d][LcId:0x%02x][ERROR] MAX Status PDU in one TB:%d
Line 1352: [CG:%d][LcId:0x%02x] AMD Status PDU DC:%d Len:%d MultiStatus:%d DescAddr:0x%x
Line 1371: [CG:%d][LcId:0x%02x] [ERROR]!!! PduSn:%d >= m_RxSnSize:%d @L2HRXRLC_ProcSegmentUMD
Line 1447: [CG:%d][LcId:0x%02x] [ERROR]!!! nullptr pNackElem
Line 1482: [CG:%d][LcId:0x%02x] Stop ReassemblyTimer!!!, m_RxTrigger:%d, m_RxNext:%d, m_RxNextHighest:%d
Line 1505: [CG:%d][LcId:0x%02x] Update RX_Next: %d, Discard all Segment SN < updated RX_Next_Reassembly: %d ~ %d
Line 1537: [CG:%d][LcId:0x%02x][PDCP_PARSER] Set HdrSeg flag! SN(%d) PayloadLen(%d) m_PdcpHeaderSize(%d)
Line 1558: [CG:%d][LcId:0x%02x][ERROR] Discard PDCP SDU!!!
Line 1630: [CG:%d][LcId:0x%02x] Stop ReassemblyTimer!!!, m_RxTrigger:%d, m_RxNext:%d, m_RxNextHighest:%d, RxHighestStatus:%d PollSn:%d, bStatusTrigger:%d
Line 1664: [CG:%d][LcId:0x%02x] Start t-Reassembly!, RxNextReassembly:%d, RxNextHighest:%d, RxTimerTrigger:%d
Line 1669: [CG:%d][LcId:0x%02x] Start t-Reassembly!, RxNext:%d, RxNextHighest:%d, RxHighestStatus:%d, RxNextStatusTrigger:%d
Line 1711: [CG:%d][LcId:0x%02x]:RLC_NOT_ACTIVE State 
Line 1717: [CG:%d][LcId:0x%02x] The LcId is not set in MAC Entity.
Line 1726: [CG:%d][LcId:0x%02x] [ERROR] No StatusInfo!!! RxNext:%d RxHighestStatus:%d RxHighest:%d m_bWaitReleaseStatusInfo:%d m_PrevMacTbIndex:%d
Line 1736: [CG:%d][LcId:0x%02x] Send STATUS_FULL_IND
Line 1743: [CG:%d][LcId:0x%02x] [ERROR] Fail to send L2LMACTX_L2HRLCRX_STATUS_FULL_IND_T
Line 1748: [CG:%d][LcId:0x%02x] [ERROR] Set flag m_bWaitReleaseStatusInfo(%d)
Line 1789: [CG:%d][LcId:0x%02x][ERROR] gTmpRxNackTriggerQueue Full !!!
Line 1809: [CG:%d][LcId:0x%02x] Send STATUS_FULL_IND
Line 1816: [CG:%d][LcId:0x%02x] [ERROR] Fail to send L2LMACTX_L2HRLCRX_STATUS_FULL_IND_T
Line 1821: [CG:%d][LcId:0x%02x] [ERROR] Set flag m_bWaitReleaseStatusInfo(%d)
Line 1853: [CG:%d][LcId:0x%02x][WARNING]RxNakElemPool Buffer Full!!! SN:%d NumNack:%d
Line 1899: [CG:%d][LcId:0x%02x][WARNING] RxNack is already FULL:%d!!!
Line 1961: [CG:%d][LcId:0x%02x][WARNING] StatusBuffer Full 1 [%d/%d/%d]!!
Line 2001: [CG:%d][LcId:0x%02x] Change ACK_SN:%d
Line 2012: [CG:%d][LcId:0x%02x] ACK_SN:%d FirstNackSn:%d NumNak:%d RxNext:%d RxHighestStatus:%d RxHighest:%d StatusInfo:0x%x
Line 2032: [CG:%d][LcId:0x%02x][WARNING] RLC DL nack is not recoverd during %d ms
Line 2085: [CG:%d][LcId:0x%02x] Fail to Start t-Reassembly
Line 2125: [CG:%d][LcId:0x%02x] t-ReassemblyTimer SetEvent Fail !!!
Line 2138: [CG:%d][LcId:0x%02x] Process t-Reassembly !!!
Line 2143: [CG:%d][LcId:0x%02x] Do not need to Process t-Reassembly !!!
Line 2192: [CG:%d][LcId:0x%02x] Update RX_Next: %d, Discard all Segment SN < updated RX_Next_Reassembly: %d ~ %d
Line 2212: [CG:%d][LcId:0x%02x] Start t-Reassembly!, RxNextReassembly:%d, RxNextHighest:%d, RxTimerTrigger:%d
Line 2217: [CG:%d][LcId:0x%02x] Start t-Reassembly!, RxNext:%d, RxNextHighest:%d, RxHighestStatus:%d, RxNextStatusTrigger:%d
Line 2250: [CG:%d][LcId:0x%02x] Start Req t-StatusProhibit [Timer:%d][State:%d]
Line 2262: [CG:%d][LcId:0x%02x] Fail to Start t-StatusProhibit 
Line 2306: [CG:%d][LcId:0x%02x] [ERROR] t-StatusProhibit SetEvent Fail !!!
Line 2322: [CG:%d][LcId:0x%02x][ERROR] Invaild RlcSn(%d/%d)!
Line 2329: [CG:%d][LcId:0x%02x] No RxNack when ReorderingTimer expiry!
Line 2341: [CG:%d][LcId:0x%02x] No RxNack when ReorderingTimer expiry(%d/%d)!
Line 2360: [CG:%d][LcId:0x%02x] Update RX_Next: %d, Discard all Segment SN < updated RX_Next: %d ~ %d
Line 2373: [CG:%d][LcId:0x%02x] Update RX_Next: %d, Discard all Segment SN < updated RX_Next: %d ~ %d UpdateSn:%d
Line 2386: [CG:%d][LcId:0x%02x] Start t-Reassembly!, RxNext:%d, RxNextHighest:%d, RxHighestStatus:%d, RxNextStatusTrigger:%d
Line 2406: [CG:%d][LcId:0x%02x] SetPdcpCfgInfo!, PdcpSnFormat:%d, SdapHdrUse:%d, m_PdcpHeaderSize:%d
Line 2434: [CG:%d][LcId:0x%02x][WARNING][LMAC_BUFFER] No Nack @L2HRXRLC_RemoveAllNackDuringTP[RxNext: %d, RxNextHighest:%d]
Line 2463: [CG:%d][LcId:0x%02x][WARNING][LMAC_BUFFER] Remove All Nack and Update RxNext:%d->%d, RxNextHighest:%d
Line 2476: [CG:%d][LcId:0x%02x][LMAC_RESET] LcId:%d, SN:%d, SI:%d, SO:%d, P:%d Len:%d (PdcpSn:0x%02x) 
Line 2481: [CG:%d][LcId:0x%02x][LMAC_RESET] LcId:%d, SN:%d, SI:%d, SO:%d, P:%d Len:%d 
Line 2493: [CG:%d][LcId:0x%02x][LMAC_RESET] No RxNack (RxNext:%d RxNextHighest:%d ConnSn:%d)!
Line 2497: [CG:%d][LcId:0x%02x][LMAC_RESET] RxNext:%d RxNextHighest:%d ConnSn:%d!
Line 2500: [CG:%d][LcId:0x%02x][LMAC_RESET] No RxNack (%d/%d)!
Line 2508: [CG:%d][LcId:0x%02x][LMAC_RESET] RxNack StartSn:%d StartOffset:%d EndSn:%d EndOffset:%d)!
Line 2512: [CG:%d][LcId:0x%02x][LMAC_RESET] No RxNack for SN:%d (FirstNack:%d)!
Line 2564: [CG:%d][LcId:0x%02x][NR2C_RX] New data after bNR2CSubmit
Line 2590: [CG:%d][LcId:0x%02x][ERROR] Fail!! Start NR2CTimer [Timer:%d]
Line 2605: [CG:%d][LcId:0x%02x][NR2C_RX] No data after bNR2CSubmit
Line 2650: [CG:%d][LcId:0x%02x][NR2C_RX] UpdateNR2CMetric2 (%u/%u/%u)
Line 2684: [CG:%d][LcId:0x%02x][PDCP_PARSER] SN(%d) PdcpHeaderSize(%d) First SEG(L:%d)  Second SEG(SO:%d, L:%d)
Line 2696: [CG:%d][LcId:0x%02x][Warning][PDCP_PARSER] SN(%d) PdcpHeaderSize(%d) First SEG(L:%d) Second SEG(L:%d). RemovePdcpHeader(%d)
Line 2709: [CG:%d][LcId:0x%02x][Warning][PDCP_PARSER] CheckPayloadLen:PayloadLen(%d) SN(%d) SI(%d) PdcpSn(%d) PdcpDc(%d) PdcpHeaderSize(%d)
