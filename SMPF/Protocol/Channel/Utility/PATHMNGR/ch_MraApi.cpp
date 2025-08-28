Line 603: [#MRA][E] [API]MraAlloc : MRA_REQ_NULL
Line 611: [#MRA][E] [API]MraAlloc : MRA_REQ_NUM_ZERO
Line 619: [#MRA][E] [API]MraAlloc : NumReq(%d) > MRA_NUM_REQ
Line 626: [#MRA] [API]MraAlloc : NumReq %d
Line 635: [#MRA][E] [API]MraAlloc : FAIL(%s) ==> Free
Line 674: [#MRA] [API]MraAlloc : Rslt %s
Line 686: [#MRA][E] [API]MraFree : MRA_REQ_NULL
Line 694: [#MRA][E] [API]MraFree : MRA_REQ_NUM_ZERO
Line 701: [#MRA][E] [API]MraFree : NumReq(%d) > MRA_NUM_REQ
Line 707: [#MRA] [API]MraFree : NumReq %d
Line 731: [#MRA] [API]MraFree : Rslt %s
Line 741: [#MRA] [API]MraFree : Rslt %s
Line 750: [#MRA][E] [API]MraModify : MRA_REQ_NULL
Line 764: [#MRA][E] [API]MraModify : MRA_REQ_NUM_ZERO
Line 772: [#MRA][E] [API]MraModify : NumReq(%d) > MRA_NUM_REQ
Line 778: [#MRA] [API]MraModify : NumReq %d
Line 786: [#MRA][E] [API]MraModify : FAIL(%s)
Line 792: [#MRA] [API]MraModify : Rslt %s
Line 803: [#MRA][E] [API]MraApply : MRA_REQ_NULL
Line 810: [#MRA][E] [API]MraApply : MRA_REQ_NUM_ZERO
Line 818: [#MRA][E] [API]MraApply : NumReq(%d) > MRA_NUM_REQ
Line 824: [#MRA] [API]MraApply : NumReq %d, %s
Line 832: [#MRA][E] [API]MraApply : FAIL(%s)
Line 837: [#MRA] [API]MraApply : Rslt %s
Line 847: [#MRA][E] [API]MraRetreive : MRA_REQ_NULL
Line 854: [#MRA][E] [API]MraRetreive : MRA_REQ_NUM_ZERO
Line 861: [#MRA][E] [API]MraRetreive : NumReq(%d) > MRA_NUM_REQ
Line 867: [#MRA] [API]MraRetreive : NumReq %d, %s
Line 875: [#MRA][E] [API]MraRetreive : FAIL(%s)
Line 880: [#MRA] [API]MraRetreive : Rslt %s
Line 903: [#MRA] [API]MraNewHdlr : Idx %d, Client[%s(%d), %s(%d), %s(%d)]
Line 909: [#MRA][E] [API]MraNewHdlr : Fail !!!, Client[%s(%d), %s(%d), %s(%d)]
Line 923: [#MRA] [API]MraDelHdlr : Idx %d, Client[%s(%d), %s(%d), %s(%d)]
Line 947: [#MRA] [API]MraDelHdlr : Resource not free ==> Free
Line 960: [#MRA][E] [API]MraDelHdlr : Fail !!!, Null Hdlr
Line 967: [#MRA] [API]MraDelHdlrAll : Client[%s(%d), %s(%d)]
Line 1002: [#MRA] [API]MraNotifyServRat : Client[%s(%d), %s(%d), %s(%d)]
Line 1021: [#MRA] [API]MraInitAll
Line 1031: [#MRA] [API]MraInit : Client[%s(%d), %s(%d)]
Line 1042: [#MRA] [API]MraFreeRsrv
Line 1045: [#MRA][E] [API]MraFreeRsrv : MRA_REQ_NULL
Line 1055: [#MRA][E] [API] MraFreeRsrv[%d] : Hdlr is null !!!
Line 457: [#MRA][W] [API][%d] : HdlrIdx %d, Wrong %s ChBwIdx %d, BwIdx %d
Line 470: [#MRA][E] [API][%d] : HdlrIdx %d, AllocStatus %s ==> INVALID(AllocStatus is not FREE) !!!
Line 481: [#MRA][E] [API][%d] : Hdlr is null !!!
Line 301: [#MRA][E] [API]VerifyReqOptMdlAlloc :Bb main not alloc!!!
Line 23: [#MRA] ReqRslt : ChangeBufMode Demod Core%d bDvfsOd %d
Line 35: [#MRA] ReqRslt : ChangeBufMode Demod Core%d [%s %s][Idx %d, %s] 
Line 38: [#MRA] ReqRslt : ChangeBufMode Demod ECB(ReduceMap, HsOpType) [0x%x, %s]
Line 352: [#MRA][E] [API]VerifyReqOptFree : [%s] MAIN free without SUB free
Line 224: [#MRA][E] [API]VerifyReqOptMdlFree : Bb[%s] is not allocated !!!
Line 230: [#MRA][E] [API]VerifyReqOptMdlFree : Bb is null !!!
Line 224: [#MRA][E] [API]VerifyReqOptMdlFree : Bb[%s] is not allocated !!!
Line 230: [#MRA][E] [API]VerifyReqOptMdlFree : Bb is null !!!
Line 262: [#MRA][E] [API]VerifyReqOptMdlModify : Bb[%s] is not allocated !!!
Line 268: [#MRA][E] [API]VerifyReqOptMdlModify : Bb is null !!!
Line 262: [#MRA][E] [API]VerifyReqOptMdlModify : Bb[%s] is not allocated !!!
Line 268: [#MRA][E] [API]VerifyReqOptMdlModify : Bb is null !!!
Line 54: [#MRA] ApplyReqCntxt : Opt[MpMapDl 0x%x, MpMapUl 0x%x, MdlMap 0x%x, DirMap 0x%x]
Line 56: [#MRA] ApplyReqCntxt : RsrcIdx[RsrcMapDl 0x%x, RsrcMapUl 0x%x]
Line 70: [#MRA] ApplyReqCntxt : RsrcIdx[[%s][%s]RsrcIdxMap 0x%x]
Line 77: [#MRA] ApplyReqCntxt : Demod[NumDemod %d]
Line 90: [#MRA] MraRetreiveReqCntxt : Opt[MpMapDl 0x%x, MpMapUl 0x%x, MdlMap 0x%x, DirMap 0x%x]
Line 92: [#MRA] MraRetreiveReqCntxt : RsrcIdx[RsrcMapDl 0x%x, RsrcMapUl 0x%x]
Line 96: [#MRA] MraRetreiveReqCntxt : CoreIdMap 0x%x
Line 109: [#MRA] RetreiveRslt[%s][%s][%s]
Line 125: [#MRA] RetreiveRslt : RsrcIdx[[%s][%s]RsrcIdxMap 0x%x
Line 131: [#MRA] RetreiveRslt : NumAvail[[%s][%s] 0x%d
Line 156: [#MRA] [API]VerifyClient : Client[%s, %s, %s]
Line 163: [#MRA][E] [API]VerifyClient : INVALID CLIENT !!! RegistedRat[%s]
