Line 206: [#MRA][E] %s AllocRsrc : INVALID NumDemod !!! CoreId %d, NumDemod %d
Line 228: [#MRA] %s AllocRsrc
Line 315: [#MRA] %s AllocRsrcMigMode
Line 354: [#MRA] %s Confirm
Line 392: [#MRA][E] %s AllocRsrc : INVALID NumDemod !!! CoreId %d, NumDemod %d
Line 421: [#MRA][E] %s ConfirmMigMode : m_pMigDemodConfig[%d] is null
Line 428: [#MRA][E] %s ConfirmMigMode : Idx %d, HdlrIdx %d, pHdlrMig is null
Line 435: [#MRA][E] %s ConfirmMigMode : Idx %d, HdlrIdx %d, pHdlr is null
Line 472: [#MRA][E] %s UpdateIdx : INVALID NumDemod %d
Line 482: [#MRA] %s LoadDemodCntxt
Line 557: [#MRA][E] %s LoadDemodCntxt : [%s %s %s] CoreId %d, NumDemod %d > MRA_NUM_DEMOD_RSRC_PER_CORE
Line 583: [#MRA] %s SetDemodCur : [%s]
Line 658: [#MRA][E] %s SetDemodCurSub : main path demod not find
Line 671: [#MRA][E] %s SetDemodMigrated : pDemodConfig is null, rReqIter.Idx %d
Line 711: [#MRA] %s JudgeWithPolicy
Line 717: [#MRA][E] %s JudgeWithPolicy : INVALID_CORE_ID !! CoreId %d
Line 740: [#MRA] %s JudgeWithPolicy : Current BufMode => SUCCESS
Line 747: [#MRA] %s JudgeWithPolicy : Not TryReducedMore => FAIL
Line 793: [#MRA] %s JudgeWithPolicy[%s %s] Recalc : [%s] DemodIdx %d %s
Line 796: [#MRA] %s JudgeWithPolicy : SUCCESS
Line 801: [#MRA] %s JudgeWithPolicy : Not TryReducedMore => FAIL
Line 807: [#MRA] %s JudgeWithPolicy : final => FAIL
Line 826: [#MRA] %s CheckTh[%s] %s
Line 833: [#MRA] %s CheckTh[%s] %s
Line 840: [#MRA] %s CheckTh[%s] %s
Line 851: [#MRA] %s CheckTh[%s] %s
Line 864: [#MRA] %s CheckTh[%s] %s
Line 871: [#MRA] %s CheckTh[%s] %s
Line 882: [#MRA] %s CheckTh[%s] %s
Line 889: [#MRA] %s CheckTh[%s] %s
Line 896: [#MRA] %s CheckTh[%s] DemodStat CoreId %d <= After CalcStatTarget
Line 904: [#MRA] %s CheckTh[%s] CoreId %d bDsMode %d bDsModeCur %d StatusMap 0x%x : Rslt %s
Line 957: [#MRA] %s UpdateRslt
Line 990: [#MRA] %s UpdateRslt : bDvfsOd[%d] = false
Line 1065: [#MRA] %s UpdateRslt : [%s, %s, %s] [CoreId %d, DemodIdx %d, DmrsConfig %s]
Line 1069: [#MRA] %s UpdateRslt : [FD, ECB(ReduceMap, HsOpType)][%s, (0x%x, %s)] ==> [%s, (0x%x, %s)]
Line 1147: [#MRA][E] %s UpdateRslt : [%s, %s] HdlrIdx %d, null pHdlr
Line 1326: [#MRA][E] %s UpdateMigRslt : pHdlr(ID %d) is null
Line 1341: [#MRA] %s UpdateMigRslt : %s, %s, HdlrIdx %d, MainMxrIdx %d, DemodIdx(%d -> %d)
Line 1410: [#MRA] %s BackupStat : CoreId %d
Line 1462: [#MRA] %s RevertStat : CoreId %d
Line 1488: [#MRA][E] %s RevertMigState : m_pMigDemodConfig[%d] is null
Line 1508: [#MRA] %s ApplyChangedCntxt
Line 1687: [#MRA] %s DemodPerCg: [%s, %s, %s] CoreId %d, NumDemod %d
Line 1691: [#MRA] %s DemodPerCg : Applied BufMode => %s 
Line 1704: [#MRA][E] %s SortReducingOrder : null pHdlrTaget
Line 1709: [#MRA][E] %s SortReducingOrder : Wrong Arg, Rat %d, CoreId %d
Line 1715: [#MRA][E] %s SortReducingOrder : Num(%d) is too large
Line 1727: [#MRA][E] %s SortReducingOrder : null pDemodConfigBase
Line 1734: [#MRA][E] %s SortReducingOrder : null pHdlrTagetBase
Line 1790: [#MRA] m_DemodStat[%s] CoreId %d
Line 1801: [#MRA] Demod : CoreId %d, Idx %d, HdlrIdx %d, bMpMerged %d, NumLayer %d, ProcessWorkload(Normal/Reduced)[%d, %d]
Line 1803: [#MRA] Demod : FdBufSize %d, BufSize %d, BufMode %s
Line 1916: [#MRA] CheckCcLayer CoreId[%d]: NeedNumLayer %d 
Line 1929: [#MRA] CheckCcLayer CoreId[%d]: rDemodStat.NumCc[%s] %d + NeedNumCc 1 > TH_NUM_CC %d => Fail
Line 1938: [#MRA] CheckCcLayer CoreId[%d]: rDemodStat.NumLayer[%s] %d + NeedNumLayer %d > TH_NUM_LAYER %d => Fail
Line 1953: [#MRA] CheckCcLayer CoreId[%d]: NumCcTotal %d + NeedNumCc 1 > TH_NUM_CC_TOTAL %d => Fail
Line 1960: [#MRA] CheckCcLayer CoreId[%d]: NumLayerTotal %d + NeedNumLayer %d > TH_NUM_LAYER_TOTAL %d => Fail
