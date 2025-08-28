Line 104: ##[PATH_MNGR] AllocPaths : DomainType %d, NumPath %d
Line 108: ##[PATH_MNGR][E] AllocPaths : DomainType %d, %s
Line 228: ##[PATH_MNGR] ModifyPaths : DomainType %d, %s, NumPath %d
Line 232: ##[PATH_MNGR][E] ModifyPaths : DomainType %d, %s
Line 280: ##[PATH_MNGR] ModifyState : DomainType %d, %s, DemodCoreMap 0x%x
Line 310: ##[PATH_MNGR] DeallocPathAll : DomainType %d
Line 327: ##[PATH_MNGR][E] DeallocPathAll : DomainType %d, NumReq is full
Line 358: ##[PATH_MNGR] DeallocPaths : DomainType %d, NumPath %d
Line 361: ##[PATH_MNGR][E] DeallocPaths : INVALID arg !!! NumPath %d
Line 371: ##[PATH_MNGR][W] DeallocPaths : DomainType %d, PathIdx[%d] %d, pHdlr is null
Line 402: ##[PATH_MNGR] InitMra : DomainType %d, %s, %s, NRDC SGC
Line 417: ##[PATH_MNGR] InitMra : DomainType %d, %s, %s, Other Rat ==> Not Init Mra
Line 431: ##[PATH_MNGR][E] BuildAllocReq : pHdlr is null !!! DomainType %d, PathIdxMain %d
Line 444: ##[PATH_MNGR][E] BuildAllocReq : Hdlr Alloc Fail !!! DomainType %d
Line 464: ##[PATH_MNGR][E] BuildModifyReq : pHdlr is null !!! DomainType %d, PathIdxMain %d
Line 487: ##[PATH_MNGR][E] BuildAllocRlstSuccess : DomainType %d, Invalid m_ReqIdxTb[%d] %d
Line 560: ##[PATH_MNGR] UpdatePathInfo : DomainType %d, PathIdx[%d] %d, %s Already Updated
Line 579: ##[PATH_MNGR] DeallocPaths__ : DomainType %d, PathIdx[%d] %d, SkipRsrcMap(DL,UL)[0x%x,0x%x], ReqMp %s
Line 585: ##[PATH_MNGR][E] DeallocPaths__ : DomainType %d, PathIdx[%d] %d null pHdlr
Line 589: ##[PATH_MNGR] DeallocPaths__ : DomainType %d, PathIdx[%d] %d null pHdlr
Line 602: ##[PATH_MNGR] DeallocPaths__ : DomainType %d, ReqIdx[%d] PathIdx[%d] Set UL Map
Line 610: ##[PATH_MNGR] DeallocPaths__ : valid DomainType %d, ReqIdx[%d] PathIdx[%d]
Line 777: ##[PATH_MNGR][E] VerifyAllocRlstTx : CoreId(%d) MRA_MP_MAIN MRA_UL_ENC idx(%d) is INVALID
Line 784: ##[PATH_MNGR][E] VerifyAllocRlstTx : CoreId(%d) MRA_MP_MAIN MRA_UL_MOD idx(%d) is INVALID
Line 791: ##[PATH_MNGR][E] VerifyAllocRlstTx : CoreId(%d) MRA_MP_MAIN MRA_UL_LMAC idx(%d) is INVALID
Line 799: ##[PATH_MNGR][E] VerifyAllocRlstTx : CoreIdRfIc(%d) MRA_MP_MAIN MRA_UL_SLCA idx(%d) is INVALID
Line 806: ##[PATH_MNGR][E] VerifyAllocRlstTx : CoreIdRfIc(%d) MRA_MP_MAIN MRA_UL_TXPATH idx(%d) is INVALID
Line 815: ##[PATH_MNGR][E] VerifyAllocRlstTx : CoreId(%d) MRA_MP_SUB MRA_UL_MOD idx(%d) is INVALID
Line 822: ##[PATH_MNGR][E] VerifyAllocRlstTx : CoreId(%d) MRA_MP_SUB MRA_UL_LMAC idx(%d) is INVALID
Line 829: ##[PATH_MNGR][E] VerifyAllocRlstTx : CoreIdRfIc(%d) MRA_MP_SUB MRA_UL_SLCA idx(%d) is INVALID
Line 836: ##[PATH_MNGR][E] VerifyAllocRlstTx : CoreIdRfIc(%d) MRA_MP_SUB MRA_UL_TXPATH idx(%d) is INVALID
Line 872: ##[PATH_MNGR] BuildAllocRlstTx : [MAIN] core_idx %d, lmac_cmd %d, enc_idx %d, mod_idx %d, slca_idx %d, txPath_idx %d
Line 877: ##[PATH_MNGR] BuildAllocRlstTx : [SUB] lmac_cmd %d, mod_idx %d, slca_idx %d, txPath_idx %d
Line 70: ##[PATH_MNGR][E] VerifyAllocReq : INVALID arg !!! NumPath %d
Line 76: ##[PATH_MNGR][E] VerifyAllocReq : NumPath %d : %s
Line 85: ##[PATH_MNGR] VerifyAllocReq : [%d] PathIdxMain 0x%x
Line 88: ##[PATH_MNGR] VerifyAllocReq : [%d] Opt[MpMapDl 0x%x, MpMapUl 0x%x, MdlMap 0x%x, DirMap 0x%x]
Line 94: ##[PATH_MNGR][E] VerifyAllocReq : sub alloc case -> INVALID [%d]PathIdxMain %d
Line 198: ##[PATH_MNGR][E] VerifyModifyReq : INVALID arg !!! NumPath %d
Line 203: ##[PATH_MNGR][E] VerifyModifyReq : NumPath %d : %s
Line 212: ##[PATH_MNGR] VerifyModifyReq : [%d] PathIdxMain 0x%x
Line 215: ##[PATH_MNGR] VerifyModifyReq : [%d] Opt[MpMapDl 0x%x, MpMapUl 0x%x, MdlMap 0x%x, DirMap 0x%x]
Line 218: ##[PATH_MNGR][E] VerifyModifyReq : INVALID [%d]PathIdxMain %d !!!
Line 898: ##[PATH_MNGR] BuildDeallocRlstTx : [MAIN] core_idx %d, lmac_cmd %d, enc_idx %d, mod_idx %d, slca_idx %d, txPath_idx %d
Line 910: ##[PATH_MNGR][E] [TX]DeallocTxPath : HdlrIdx[%d] INVALID AllocMap(0x%x) !!!
