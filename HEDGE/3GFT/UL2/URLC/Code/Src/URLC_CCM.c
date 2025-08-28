Line 171: urlc_CcmInitialiseUl():CcmVars - Error detected, NULL Pointer
Line 195: urlc_CcmInitialiseDl():CcmVars - Error detected
Line 198: Decipher check: TotalNumofRbs %d, head %d, tail %d
Line 218: urlc_CcmPurgeUl() : CcmVars - Error detected, NULL Pointer RbId %d
Line 283: urlc_Flush_CipherConfig  CipherConfigDisposalRoot[%d]=0x%X
Line 287: urlc_Flush_CipherConfig: No Entry was in CipherConfigDisposalRoot[%d]
Line 293:          0x%X is freed
Line 380: urlc_CcmNewCipherConfig Asn_CipheringAlgorithm_r7: %d
Line 385: CipherKey
Line 389: CipherKey is NULL
Line 423: Error detected: urlc_CcmNewCipherConfig: NewCipherConfig memory allocation failed.
Line 439: Create New Ciphering Configuration: Present %d, Algorithm %d, CipherConfigListRoot %x, NewCipherConfig %x
Line 622: urlc_CcmRbGetUlCipherConfig() :CcmVars - Error detected, NULL Pointer RbId %d
Line 631: urlc_CcmRbGetUlCipherConfig: UL Pending Config NULL, returning active %x, RbId=%d, PduSn=%d, HFN=%d
Line 666: UL: RbId %d, PduSn(%d)== UlActivationTime of %d, Pending configuration would be used(HfnTobeUsed = %d)
Line 683: UL Returning active config ConfigPtr=%x, HFN=%d
Line 718:  urlc_CcmRbGetDlAmCipherConfig(): CcmVars - Error detected, NULL Pointer RbId %d
Line 744: DL PendingA activation time meet(I): PduSn %d, DlPendingActivationTime %d, RxWindowSize %d
Line 755: DL PendingA activation time meet(II): PduSn %d, DlPendingActivationTime %d, RxWindowSize %d
Line 791: DL PendingA Config (VR_R == DlPendingActivationTime): RbId %d, PduSn %d, DlPendingActivationTime %d, DlPendingAHfn %d
Line 797: DL PendingA Config is NOT NULL, RbId %d, PduSn %d, DlPendingActivationTime %d, DlPendingAHfn %d
Line 818: DL Pending Activation time meet(I): PduSn %d, DlActivationTime %d, RxWindowSize %d
Line 830: DL Pending Activation time meet(II): PduSn %d, DlActivationTime %d, RxWindowSize %d
Line 842: DL Pending Config is NOT NULL, RbId %d, PduSn %d, VR_R %d, VR_TempR %d, Activation time %d, PendingPtr %x, PendingHfn %d 
Line 850: DL Pending & PendingA are same: RbId %d, PduSn %d, Activation time %d, DlPendingAPtr %x, DlPendingAHfn %d 
Line 874: DL PendingA->Pending, PendingA deleted.(NextActivationTime=%d, NewPendingHfn=%d)
Line 882: Use new cipher config: RbId %d, PduSn %d, ActTime %d, PendingPtr(new)%x, Hfn %d
Line 894: AM MODE: Adjusted active HFN for SN=%d is HFN=%d, VR_R=%d
Line 921: AM MODE: Adjusted active HFN for SN=%d is HFN=%d, VR_R=%d
Line 948: Error detected: urlc_CcmRbGetDlUmCipherConfig: PduSn %d, UmEis is NULL!
Line 960: Error detected: urlc_CcmRbGetDlUmCipherConfig: RbId %d, CcmVars is NULL!
Line 999: DL Pending Config is NOT NULL, RbId %d, PduSn %d, Activation time %d, PendingPtr %x, PendingHfn %d 
Line 1004: DL Pending & PendingA are same: RbId %d, PduSn %d, Activation time %d, DlPendingAPtr %x, DlPendingAHfn %d 
Line 1031: DL PendingA->Pending, PendingA deleted.(NextActivationTime=%d, NewPendingHfn=%d)
Line 1047: UM MODE: SN Wrap Increment HFN(RbId=%d, VR_US=%d, SN=%d, HFN=%d)
Line 1062: ActivationTime met Included &  wrap  Increment HFN (RbId %d, VR_US %d, SN %d, HFN %d, DlActivationTime %d)
Line 1072: ActivationTime met Included &  No HFN Increment(RbId %d, VR_US %d, SN %d, HFN %d, DlActivationTime %d, ReestablishInd %d
Line 1094: urlc_CcmRbPendingCipherConfigMetrics() : CcmVars - Error detected, NULL Pointer RbId %d
Line 1121: urlc_CcmRbReestResetCipherConfig() : CcmVars - Error detected, NULL Pointer RbId %d
Line 1227: urlc_CcmRbAlterHfnCipherConfig UL(Old HFN %d, New HFN %d, UlActivePtr %x)
Line 1244: urlc_CcmRbAlterHfnCipherConfig DL(Old HFN %d, New HFN %d, DlListEntry %d, DlActivePtr %x)
Line 1276: Error detected: urlc_CcmRbAddCipherConfig: RbId=%d, CcmVars/CipherConfig is NULL
Line 1288: Error detected: urlc_CcmRbAddCipherConfig: RbId=%d, AmEis is NULL
Line 1299: urlc_CcmRbAddCipherConfig(): Need to delete DlPendingPtr (DlPendingPtr %X, DlActivationTime=%d, DlPendingHfn=%d)
Line 1317: DL PendingA->Pending, PendingA deleted.(NewDlPendingAPtr %X, NewActivationTime=%d, NewPendingHfn=%d)
Line 1330: Update current cipherConfigInfo at DlPendingPtr(Activation time is same): RbId %d, DlActivationTime %d
Line 1352: urlc_CcmRbAddCipherConfig(DL Pending): RbId=%d, HFN=%d, Activation=%d, RbAccessCnt %d, CipherConfig %x
Line 1363: SMC rollback: RbId %d, VR_R %d, VR_H %d, DlActivationTime %d, RxWindowSize %d
Line 1368: CURLC_CIPHERCONFIGERR_IND (RbId=2)
Line 1386: urlc_CcmRbAddCipherConfig(DL PendingA): RbId=%d, HFN=%d, Activation=%d, RbAccessCnt %d, CipherConfig %x
Line 1403: urlc_CcmRbAddCipherConfig(UL Pending): RbId=%d, HFN=%d, Activation=%d, RbAccessCnt %d, CipherConfig %x
Line 1418: urlc_CcmRbAddCipherConfig(UL PendingA): RbId=%d, HFN=%d, Activation=%d, RbAccessCnt %d, CipherConfig %x
Line 1441: urlc_CcmRbSortDlCipherConfig() : CcmVars - Error detected, NULL Pointer RbId %d
Line 1496: urlc_CcmRbIncrementActiveHfn(): CcmVars - Error detected, NULL Pointer RbId %d
Line 1503: urlc_CcmRbIncrementActiveHfn UL: RbId %d, HFN %d
Line 1513: No Active CipherConfigs: RbId %d
Line 1534: urlc_CcmRbIncrementActiveHfn DL: RbId %d, HFN %d, Config %d, CipherConfig %x
Line 1574: urlc_DecipherPendingTransaction(%d): PendingRbList[%d] %d, head, %d, tail %d, NoOfRbs %d
Line 1586: urlc_DecipherPendingTransaction(%d): IsScheduledDecipherSTF %d
Line 1602: urlc_DecipherPendingTransaction(): Scheduled Deciphering for RbId %d
Line 1608: urlc_DecipherPendingTransaction(%d): IsScheduledDecipherSTF %d
Line 1623: urlc_DecipherPendingTransaction(): Scheduled Deciphering for RbId %d
Line 1628: urlc_DecipherPendingTransaction(): Mode %d for RbId %d, tail %d, head %d, EIS 0x%x
Line 1635: Invalid pending RB idx %d, PendingRbList[Rbindex] %d.
Line 1641: urlc_DecipherPendingTransaction() %d, PendingRbList[Rbindex] %d.
Line 1670: urlc_DecipherTransactionScheduling(RbId %d)Received wrong parameter : Transaction=NULL, Eis=%x
Line 1673: urlc_DecipherTransactionScheduling(RbId %d)Received wrong parameter : Transaction=%x, Eis=%x, Xact'n->Eis=%x
Line 1697: LTE LMAC MODE!!!: RbId %d
Line 1726: urlc_DecipherTransactionScheduling: RbId %d Transaction %x
Line 1758: RxLmacQueueStatus (%u)
Line 1794: urlc_RxDecipherTimerStart: RbId %d, Transaction %x, TotalSizeCipher %d
Line 1804: LMAC BUSY(decipher transaction) RxLmacQueueStatus (%u)
Line 1827: LMAC BUSY(decipher transaction): LMAC busy crash
Line 1834: LMAC BUSY(decipher transaction): RbId %d PollingCnt %d
Line 1949: urlc_CcmUea1AddToTransaction: RbId %d, PduSn %d, UL HFN %d, CipherConfig %x, DataRbCnt %d
Line 1951: CipherKey(Current)
Line 1952: CipherKey(Config)
Line 1962: NgCnt is higher than 2: RbId %d, Ngcnt %d, CipherConfig %x
Line 1970: CipherConfig is different(Ngruop): RbId %d, OldCipherConfig %x, CipherConfig %x
Line 1974: NgCnt Count is BIG %d
Line 1988: UL Transaction->ArrayCnt is out of bound %d
Line 1998: NgCnt Count is BIG %d
Line 2023: CurrPduHandle==NULL: RbId %d
Line 2050: Snow3G : RbId %d, PduSn %d, HFN %d, CkIndex %d
Line 2056: TX Cipher Only Done(SRBs): RbId %d, CipherConfig %x, PduNum %d, PduSn %d, Snow3G %d, HFN %d, PaySize %d
Line 2062: TX Cipher Info(DataRBs): RbId %d, CipherConfig %x, PduNum %d, PduSn %d, Snow3G %d, HFN %d, CKSrcIdx %d
Line 2071: Error detected: RbId %d CipherTransaction ArrayCnt %d exceeds URLC_MAX_CIPHER_REQUESTS
Line 2121: ERROR::urlc_CcmUea1AddToDlTransaction::not supported mode(%)!
Line 2179: NumOfNgroup is higher than max: RbId %d, NumOfNgroup %d
Line 2189: NumOfNgroup value out of bounds : %d(RbId %d)
Line 2197: RX decipher only(New Cipher Config): RbId %d, Algorithm %d, CkIdx %d, NgrCnt %d, NumOfPdu(ForOldConfig)%d, CipherConfig %x, OldCipherConfig %x
Line 2202: NumOfNgroup value out of bounds : %d(RbId %d)
Line 2217: DL Transaction->ArrayCnt is out of bound %d
Line 2237: RX decipher only: RbId %d, PduSn %d, Snow3G %d, HFN %d, CipherConfig %x, PduNum %d, AutoCountc %d
Line 2245: Error detected: RbId %d CipherTransaction ArrayCnt %d exceeds URLC_MAX_CIPHER_REQUESTS
Line 2281: TX urlc_CcmUea1ProcessUlTransaction() : RbId %d, CipheredPdus %d, TransactionTID 0x%x, Snow3G %d, TxGlobalCnt %d
Line 2355: urlc_CcmUea1ProcessDlTransaction(): LMACnotSafe %d , QueuedTransactionNum %d , IsRunningTimer %d , TotalNumOfRbs %d
Line 2362: Start queueing (decipher transaction): RbId %d, Mode %d, TokensTaken %d, TokensTakenMax %d
Line 2385: Push to TransactionInfo: RbId %d, Mode %d, QueuedTransactionNum %d, TotalNumOfRbs stored %d
Line 2413: LTE LMAC MODE!!!: RbId %d, Mode %d, QueuedTransactionNum %d, MaxQCntCipherTransaction %d
Line 2434: urlc_CcmReceiveCipherCnf_UL TID=%d
Line 2442: Remove UL Transaction for inactive RB %d
Line 2500: Remove DL Transaction for inactive RB %d
Line 2505: Resetting IsScheduledDecipherSTF 
Line 2525: LTE LMAC MODE!!!
Line 2530: urlc_CcmReceiveCipherCnf_DL() RbId %d, LMACnotSafe %d
Line 2549: End queueing(decipher transaction): RbId %d, AM, QueuedTransactionNum %d, LMACnotSafe %d
Line 2570: End queueing(decipher transaction): RbId %d, UM, QueuedTransactionNum %d, LMACnotSafe %d
Line 2588: Scheduled next deciphering for RbId %d, PendingQueuedTransNum %d
Line 2601: urlc_CcmReceiveCipherCnf_DL(): head %d, tail %d, TotalNumOfPendingRbs %d
Line 2606: Scheduled Deciphering for Rb Index %d, RBId %d, Pending list head %d
Line 2643: urlc_CcmAbortCiphering(): CcmVars - Error detected, NULL Pointer RbId %d
Line 2648: urlc_CcmAbortCiphering UL RbId=%d
Line 2678: urlc_EmGetUlEis debugging test
Line 2704: urlc_CcmAbortCiphering DL RbId=%d
Line 2933: ........No Active Configs, return NULL: RbId %d, PduSn%d
Line 3005: Error detected: RbId %d, UlCiphernfo memory allocation failed.
Line 3017: Allocate transaction dynamically(UL): RbId %d, iUlDynamicAllocCnt %d
Line 3047: Allocate transaction dynamically(DL): RbId %d, iDlDynamicAllocCnt %d
Line 3085: urlc_CcmRemoveDatabaseTransaction: RbId %d Transaction %x
Line 3092: Already Free for Transaction
Line 3102: stackId : %d is already disabled. do nothing
Line 3113: other stackId : %d is enabled. do nothing
Line 3128: urlc_Destroy_DecpherTime freed complete
Line 3156: Created pal_TmCreateTimer for decipher: RbId %d, UrlcDecipherTimer 0x%x
Line 3161: UrlcDecipherTimer is already exist!! UrlcDecipherTimer 0x%x
Line 3167: Do not initiate pal_TmCreateTimer: RbId %d
Line 3196: urlc_RxDecipherTimerExpiry(Eis is NULL): RbId %d
Line 3204: urlc_RxDecipherTimerExpiry : RxDecipherTimer is not running!
Line 3214: TransactionId->Eis == NULL: RbId %d
Line 3226: TransactionId->Eis == NULL: RbId %d
Line 3234: urlc_RxDecipherTimerExpiry(Invalid Mode): RbId %d, Mode %d
Line 3242: urlc_RxDecipherTimerExpiry: RbId %d, Mode %d, TransactionId %x, QueuedTransactionNum %d
Line 3248: urlc_RxDecipherTimerExpiry: RbId %d, Mode %d, TransactionId %x, QueuedTransactionNum %d
Line 3298: urlc_CcmDeleteCipherTransactionAndPduhandle: RbId =%d, RB In Timer %d, IsScheduledDecipherSTF %d, IsRunningTimer %d 
Line 3303: Decipher flags are reset : RbId %d, IsScheduledDecipherSTF = %d
Line 3336: Free the CipherTransaction: RbId %d, NumOfTransaction %d, Id %d, NumOfPdus %d
Line 3369: Invalid direction: RbId %d
Line 3388: Rearragned Pending Rb List Info, head %d , tail %d 
Line 3403: RbId %d in the pending list removed as transaction is freed, isRbPresent 0x%x
Line 3428: URLC requires Pause delay: IsScheduledDecipherSTF %d, PendingRbs[SIMInstance].TotalNumOfRbs = %d
Line 3528: LMAC Decipher failed, Using SW Deciphering: RbId:%d, Algorithm %d, PduSn %d
Line 3532: SW decipher data: 
Line 3536: PASS through LMAC decipher: 
Line 3542: LMAC Decipher Busy, Using SW Deciphering RbId:%d, Algorithm %d, PduSn %d
Line 3545: SW decipher data: 
Line 3550: Both SIM present: SW decipher: RbId:%d, Algorithm %d, PduSn %d
Line 3553: SW decipher data: 
Line 3560: urlc_CcmExcuteCipherAndCheckLI: Null pointer (RbId =%d)
Line 3639: LI indicates out of PDU range: RbId %d, HFN %d, PduSn %d, %dth, LiSize %d, LiValue 0x%x, payloadSize %d
Line 493:  urlc_CcmSmcRollback(): CcmVars - Error detected, NULL Pointer RbId %d, No Previous Configuration to Roll back!
Line 512: Suspend state (1,3,4) and LI in PDU
Line 527: [SEC] SecModComp pending for Tx, Activation time met(RbId=2), Deciphering failed. Discard PDU : %d
Line 533: [SEC] SecModComp pending for Tx, Activation time met(RbId=2), Deciphering passed. PDU : %d
Line 544: Decipher check: RbId %d, PduSn %d, OldHfn %d, NewHfn %d
Line 547: Decipher check: RbId %d, PduSn %d, OldHfnCipherErr %d, NewHfnCipherErr %d, PaddingLIforOldHfn %d, PaddingLIforNewHfn %d 
Line 554: Decipher failure[New cipher config]: RbId %d, PduSn %d, Activation time %d, OldHfn %d, PendingPtr %d, NewHfn %d 
Line 562: CURLC_CIPHERCONFIGERR_IND (RbId=2)
Line 572: Decipher failure[New cipher config]: RbId %d, PduSn %d, Activation time %d, OldHfn %d, PendingPtr %x, NewHfn %d 
Line 580: CURLC_CIPHERCONFIGERR_IND (RbId=2)
Line 597: urlc_CcmSmcRollback: RB3 Eis is NULL
Line 1857: Data RB Count is BIG, DataRbCnt %d
Line 2779: urlc_CcmRbRemoveCipherConfig: RbId%d, CallerId %d, CkIndex %d, RbAccessCnt %d, CipherConfig %x, PrevEntry %x, NextEntry %x
Line 2807: urlc_CcmRbRemoveCipherConfig(Remove): CkIndex %d, CipherConfig(Remove)%x
Line 2836: Error detected: New Active List Entry memory allocation failed RbId %d.
Line 2885: urlc_CcmAddToDlActiveList: RbId %d, DlActivePtr %x, DlActiveHfn %d, NewEntryListPtr %x, NewEntry->DlActivePtr %x, NewEntry->DlActiveHfn %d
Line 2908: urlc_CcmRemoveFromDlActiveList: RbId %d, CallerId %d, OldEntryPtr %x, OldDlActivePtr %x
