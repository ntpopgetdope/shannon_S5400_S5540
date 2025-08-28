Line 240: RB_ID[%d] NOT StatusTrigger L1RLCTX SubState %d L2RlcRx.SubState %d 
Line 245: RB_ID[%d]Status Trigger VR_R : %d, VR_H %d, VR_MS %d, VR_X %d
Line 253: [RLCRX][ENTITY:%d][DRBID:%d] Clear StatusProhibited, prohibit timer is zero
Line 259: RB_ID[%d]Status Prohibited
Line 267: [MULTICORE] RB_ID[%d] ptrRlcBo->rlc_pdu_bo[%d] pL2RlcRxAmInfo->StatusPduSize[%d] dwStatusPduSize[%d]
Line 275: gRLCBO[%d].rlc_pdu_bo[%d] < pL2RlcRxAmInfo->StatusPduSize[%d] 
Line 309: RB_ID[%d] gRLCBO %d SRTriggered %d rBSRTriggered %d
Line 330: [MULTICORE] RB_ID[%d] L2HRXRLC_ProcStatusTrigger
Line 349: [MULTICORE] RB_ID[%d] dwReqIdx[%d] pRlcRxAmInfo[0x%x] pReorderTb[0x%x] dwStatusPduSize[%d] dwVR_MS[%d] uStackId[%d]
Line 356: L2HRXRLC_ProcStatusTrigger : set event fail
Line 360: L2HRXRLC_ProcStatusTrigger : LTE_L2LTX_L2HRX_RLC_STATUS_TRIGGER_EVENT sent
Line 379: [RLCRX][ENTITY:%d][RemovePartialRear] SN[%d], dwCurSduOffset[%d], LI[%d]=%d, SI[%d/%d], LOC[%d]
Line 399: [ERROR][RLCRX][ENTITY:%d]RemovePartialRear] : dwMacSduLength[%d] <= dwRemoveSize[%d]
Line 411: [RLCRX][ENTITY:%d][RemovePartialRear] SN[%d], Offset[%d], FrontDiscardSize[%d], PDU_Length[%d/%d], RemoveSize[%d]
Line 418: [ERROR][RLCRX][ENTITY:%d][RemovePartialRear] dwSduCnt >= dwMaxSduCnt
Line 488: RB_ID[%d]L2HRXRLC_ProcAMD NULL pL2RlcRx !!!
Line 498: RB_ID[%d]L2HRXRLC_ProcAMD Receive wrong var RlcMode %d, pCurPdu->UF %d, PDU_SN %d, VR_R %d, VR_MS %d!!!
Line 523: RB_ID[%d]RX PDU Table PDU_Length Error
Line 544: RB_ID[%d]Poll==>Status
Line 555: RB_ID[%d]Duple Accept[%d /%d]
Line 556: RB_ID[%d]RxSN %d,VR_R : %d, VR_H %d, VR_MS %d, VR_X %d
Line 562: RB_ID[%d]Poll==>Status
Line 602: RB_ID[%d]Duple Discard[%d /%d]
Line 603: RB_ID[%d]RxSN %d,VR_R : %d, VR_H %d, VR_MS %d, VR_X %d
Line 607: RB_ID[%d]Poll==>Status
Line 669: RB_ID[%d]T1 Start %d ms VR_R %d, VR_H %d, VR_MS %d, VR_X %d
Line 700: [NB-IoT] : RB_ID[%d] Skip RLC STATUS at T1==0==>Status!
Line 705: RB_ID[%d]T1==0==>Status
Line 721: RB_ID[%d]T1 Start %d ms VR_R %d, VR_H %d, VR_MS %d, VR_X %d
Line 755: [NB-IoT] : RB_ID[%d] Skip RLC STATUS at T1==0==>Status!
Line 760: RB_ID[%d]T1==0==>Status
Line 791: RB_ID[%d]Poll==>Status
Line 798: RB_ID[%d]Poll==>Status
Line 844: L2HRXRLC_ProcUMD Error Return!!
Line 884: RB_ID[%d] Dupl RLC PDU SN[%d]
Line 899: RB_ID[%d]Out of Win Discard[%d /%d], RxSN %d, VR_R %d, VR_H %d, VR_X %d
Line 918: RB_ID[%d]HARQ Miss:%d RxSN %d, VR_R %d, VR_H %d, VR_X %d
Line 922: RB_ID[%d]HARQ Miss:%d RxSN %d, VR_R %d, VR_H %d, VR_X %d
Line 944: RB_ID[%d]VR_R Out of Win After Reorder:VR_R %d, VR_H %d, VR_X %d
Line 951: RB_ID[%d]T1 0 After Reorder:VR_R %d, VR_H %d, VR_X %d
Line 1001: RB_ID[%d]T1 Start %d ms VR_R %d, VR_H %d, VR_X %d
Line 1005: RB_ID[%d]T1 Start %d ms VR_R %d, VR_H %d, VR_X %d
Line 2289: RB_ID[%d]ReassemFail by PDU_Length Error
Line 2296: RB_ID[%d]ReassemFail by missing1: SN %d, VR_R_Expected: %d, VR_R : %d, VR_H %d, VR_MS %d, VR_X %d
Line 2342: RB_ID[%d] ReassemSDU : pPDUTable->NumSDU[%d] < Cnt[%d]
Line 2378: RB_ID[%d] First L2HRXRLC_GetSDUDescProt fail : Reassem Fail : SN %d, VR_R_Expected: %d, VR_R : %d, VR_H %d, VR_X %d, VR_X %d
Line 2426: RB_ID[%d]ReassemFail by SI 1: SN %d, VR_R_Expected: %d, VR_R : %d, VR_H %d, VR_X %d, VR_X %d
Line 2447: RB_ID[%d] Mid L2HRXRLC_GetSDUDescProt fail : Reassem Fail : SN %d, VR_R_Expected: %d, VR_R : %d, VR_H %d, VR_X %d, VR_X %d
Line 2496: RB_ID[%d] Last L2HRXRLC_GetSDUDescProt fail : Reassem Fail : SN %d, VR_R_Expected: %d, VR_R %d, VR_H %d, VR_X %d, VR_X %d
Line 2565: Error : L2HRXRLC_ReassemList : Link is NULL
Line 2591: Error : pTbEntry->SegList.ResegLink is empty => [%d]
Line 2596: Error : pTbEntry->pReqNackElem!=NULL
Line 2714: RB_ID[%d]Seg Missed[%d /%d]
Line 2715: RB_ID[%d] MissingSN %d,VR_R %d, VR_H %d, VR_MS %d, VR_X %d
Line 2744: RB_ID[%d]Comp Missed[%d /%d]
Line 2745: RB_ID[%d] MissingSN %d,VR_R %d, VR_H %d, VR_MS %d, VR_X %d
Line 2749: RB_ID[%d] pReqNackElem NULL
Line 2800: RB_ID[%d]Rx Chunk release [start: %d] [end: %d]
Line 2812: RB_ID[%d] No Reassem: VR_R %d, VR_H %d, VR_MS %d, VR_X %d
Line 2891: RB_ID[%d]Comp Missed[%d /%d]
Line 2892: RB_ID[%d] SN %d,VR_R : %d, VR_H %d, VR_MS %d, VR_X %d, loopcnt[%d/%d]
Line 3034: [WARN][RLCRX][ENTITY:%d] SEND PENDING DATA (0x%X - 0x%X)
Line 1061: L2HRXRLC_ReorderAMD Error Return!!
Line 1105: RB_ID[%d]HARQ Miss:%d RxSN %d, VR_R %d, VR_H %d, VR_MS %d, VR_X %d
Line 1116: RB_ID[%d]ReqNackElemPool FULL 1 Discard complete SN %d SO %d EO %d reseg %d Last %d
Line 1147: RB_ID[%d]T1==0==>Status
Line 1161: pTbEntry->pReqNackElem==NULL
Line 1170: pTbEntry->pReqNackElem!=NULL
Line 1177: RB_ID[%d]Comp PDU :Previous Reseg Discard RxSN %d, VR_R %d, VR_H %d, VR_MS %d, VR_X %d
Line 1221: [WARN][RLCRX][ENTITY:%d] PDU_SN[%d], (Offset_VR_R[%d] > pCurPdu->PDU_Length[%d])
Line 1226: RB_ID[%d]Comp PDU :Offest_VR_R Discard: %d, SN:%d, VR_R %d, VR_H %d, VR_MS %d, VR_X %d
Line 2137: RB_ID[%d]Insert Req NACK[%d~%d]
Line 2171: RB_ID[%d]ReqNackElemPool FULL !!! Not Insert Complete ReqNACK [%d/%d] SO %d EO %d Reseg %d Last %d
Line 1666: RB_ID[%d]ReqNackElemPool FULL 0 Discard Reseg SN %d SO %d EO %d reseg %d Last %d
Line 1674: RB_ID[%d] L2HRXRLC_ReorderReseg : pReqNackElem==NULL
Line 1266: RB_ID[%d]SN %d RXSO %d RXLEN %d NSO %d NEO %d
Line 1272: RB_ID[%d]L2RXRLC REODER Resg:CASE 1-1
Line 1273: |---------|
Line 1274: |----|
Line 1290: RB_ID[%d]L2RXRLC REODER Resg:CASE 1-2
Line 1291: |---------|
Line 1292: xxxxx|----|
Line 1308: RB_ID[%d]L2RXRLC REODER Resg:CASE 1-3
Line 1309: |---------|
Line 1310: xx|----|
Line 1326: RB_ID[%d]ReqNackElemPool FULL 1 Discard Reseg SN %d SO %d EO %d reseg %d Last %d
Line 2088: RB_ID[%d]ReqNackElemPool FULL !!! Not Insert Seg ReqNACK %d SO %d EO %d Reseg %d Last %d
Line 1362: [RLCRX][ENTITY:%d] pCurPdu->offset+dwMacSduLength == 0 
Line 1390: RB_ID[%d]pCurNackElem[%x] is last pL2RlcRx->L2RlcRxInfo.ReqNackList
Line 1396: RB_ID[%d] pCurNackElem->NACK_PDU_SN == CurNackElem->iNextP->NACK_PDU_SN
Line 1401: RB_ID[%d]SN %d RXSO %d RXLEN %d NSO %d NEO %d
Line 1412: RB_ID[%d]L2RXRLC REODER Resg:CASE 2-1
Line 1413: |---------|
Line 1414: |---------|
Line 1430: RB_ID[%d]L2RXRLC REODER Resg:CASE 2-2-1(Last PDU)
Line 1431: |---------|
Line 1432: |---------|
Line 1444: RB_ID[%d]L2RXRLC REODER Resg:CASE 2-2-2
Line 1445: |---------|
Line 1446: |-----|
Line 1467: RB_ID[%d]L2RXRLC REODER Resg:CASE 2-3
Line 1468: |---------|
Line 1469: |-------------|
Line 1489: RB_ID[%d]L2RXRLC REODER Resg:CASE 2-4
Line 1490: |---------|
Line 1491: xxx|------|
Line 1507: RB_ID[%d]L2RXRLC REODER Resg:CASE 2-5-1(Last PDU)
Line 1508: |---------|
Line 1509: xx|-------|
Line 1522: RB_ID[%d]L2RXRLC REODER Resg:CASE 2-5-2
Line 1523: |---------|
Line 1524: xx|----|
Line 1541: RB_ID[%d]ReqNackElemPool FULL 2 Discard Reseg SN %d SO %d EO %d reseg %d Last %d
Line 1557: RB_ID[%d]ReqNackElemPool FULL 3 Discard Reseg SN %d SO %d EO %d reseg %d Last %d
Line 1567: RB_ID[%d]L2RXRLC REODER Resg:CASE 2-6
Line 1568: |---------|
Line 1569: xxx|----------|
Line 1751: RB_ID[%d]Duple Seg discard1[%d/%d] SN:%d,  StartSO :%d,  EndSO:%d
Line 1760: RB_ID[%d]Seg PartialFront duple discard SN:%d Discard Size:%d,  StartSO :%d,  EndSO:%d
Line 1773: RB_ID[%d]Invalid  last seg 1 PDU SN:%d, StartSO :%d,  EndSO:%d, Elem-> last:%d,EndSO:%d!!!
Line 1783: RB_ID[%d]Invalid  last seg2 PDU SN:%d, StartSO :%d,  EndSO:%d, Elem-> last:%d,EndSO:%d!!!
Line 1797: RB_ID[%d]Duple Seg discard2[%d/%d] SN:%d, Discard StartSO :%d,  EndSO:%d
Line 1805: RB_ID[%d]Invalid  last seg PDU SN:%d, StartSO :%d,  EndSO:%d!!!
Line 1814: RB_ID[%d]Invalid  last seg PDU SN:%d, StartSO :%d,  EndSO:%d, NACK_PDU_SN:%d!!!
Line 1961: [RLCRX][ENTITY:%d] pCurPdu->offset+dwMacSduLength == 0 
Line 1993: RB_ID[%d]Duple Seg Prev discard 1 SN:%d, Discard Size:%d, StartSO :%d,  EndSO:%d
Line 2006: RB_ID[%d]Duple Seg Prev discard 2 SN:%d, Discard Size:%d, StartSO :%d,	EndSO:%d
Line 2020: RB_ID[%d]Duple Seg Prev discard 3 SN:%d, Discard Size:%d, StartSO :%d,	EndSO:%d
Line 1873: RB_ID[%d]Duple Seg Prev discard 5 SN:%d, Discard Size:%d, StartSO :%d,	EndSO:%d
Line 1885: RB_ID[%d]Duple Seg Prev PartialEnd discard SN:%d, Discard Size:%d, StartSO :%d,  EndSO:%d, NACKSN:%d, NackStartSO:%d, NackEndSO:%d
Line 1893: RB_ID[%d]Duple Seg Prev Partial discard Result SN:%d, CurStartSO :%d,  CurEndSO:%d, NACKSN:%d, NackStartSO:%d, NackEndSO:%d
Line 1903: RB_ID[%d]Duple Seg Prev discard 6 SN:%d, Discard Size:%d, StartSO :%d,  EndSO:%d
Line 2948: RB_ID[%d]ReassemFail by SI 2: SN %d, VR_R_Expected: %d, VR_R : %d, VR_H %d, VR_MS %d, VR_X %d
Line 2960: RB_ID[%d]ReassemFail by SI 3: SN %d, VR_R_Expected: %d, VR_R : %d, VR_H %d, VR_MS %d, VR_X %d
Line 2969: RB_ID[%d]ReassemFail by SI 4: SN %d, VR_R_Expected: %d, VR_R : %d, VR_H %d, VR_MS %d, VR_X %d
Line 2986: RB_ID[%d]ReassemFail by SI 5: SN %d, VR_R_Expected: %d, VR_R : %d, VR_H %d, VR_MS %d, VR_X %d
Line 2994: SI[%d] in invalid !!!
