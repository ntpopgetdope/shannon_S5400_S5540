Line 86: [W :NR,%d] ~QmnrDbMngr
Line 134: [W :NR,%d] DeleteQmData: pDbObj is nullptr, check!
Line 138: [W :NR,%d] _DELETE_ DeleteDBobj 0x%X
Line 157: [N :NR,%d] [QM NR] commonDB 0x%X
Line 175: [W :NR,%d] [Check] DeleteQfiData: pQf is nullptr, check!
Line 185: [N :NR,%d] DeleteQfiData:Find Proper QFI(%u) then Delete QFI[0x%X]
Line 200: [W :NR,%d] [Check] DeleteQfiData: NOT found QFI(%d)
Line 226: [N :NR,%d] QmnrDbMngr::DumpQmNrDb: Size (%d)============================================
Line 232: [N :NR,%d] QmnrDbMngr::============================================================
Line 250: [D :NR,%d] 	 Session (%d) Not Found!!!!!!!!!
Line 256: [N :NR,%d] QmnrDbMngr::FindQmDbWithCId Find ==> Cid[%d]
Line 272: [N :NR,%d] %%#EM 	 pQmDb = nullptr
Line 275: [D :NR,%d] 	 Not Found!!!!!!!!!
Line 300: [N :NR,%d] %%#EM [Check] FindQfiDbOnQmDbWithQfi: pQfis = nullptr
Line 304: [D :NR,%d] FindQfiDbOnQmDbWithQfi: Qfi (%d) Not Found!!!!!!!!!
Line 310: [D :NR,%d] QmnrDbMngr::CheckQmStateOnDbWithSId[%d]
Line 324: [D :NR,%d] %%#ST   CurrDb ==> SessionId[%d] CId[%d] QmState[%s] Flag[0x%X]
Line 330: [N :NR,%d] %%#EM 	 pQmDb = nullptr
Line 339: [N :NR,%d] %%#RB QmnrDbMngr::IsAvailableRbId
Line 362: [D :NR,%d] %%#RB 	 CurrDb ==> SessionId(%d), QFI(%d), PduType[%s], RbId(%d), Flag(0x%X)
Line 373: [N :NR,%d] %%#EM 	 pQmDb = nullptr
Line 380: [D :NR,%d] %%#RB 	 IsRb Available %d
Line 405: [W :NR,%d] %%#EM FindQfiOnlyOneData: pQfi is nullptr, so return 0
Line 427: [D :NR,%d] %%#EM GetNumOfQfisWithoutDrb: No DRB for Qfi(%u) -> TotalCnt(%u)
Line 437: [N :NR,%d] %%#ST  QmnrDbMngr::ResetPendingDataSession
Line 463: [N :NR,%d]  QmnrDbMngr::SetFlagTypeBySessionId SessionId(%d) Flag(0x%x)
Line 468: [N :NR,%d] %%#EM 	 SetFlagTypeBySessionId pQmDb = nullptr
Line 477: [N :NR,%d]  QmnrDbMngr::ResetFlagTypeBySessionId SessionId(%d) Flag(0x%x)
Line 482: [N :NR,%d] %%#EM 	 ResetFlagTypeBySessionId pQmDb = nullptr
Line 496: [N :NR,%d]  QmnrDbMngr::GetFlagTypeBySid Sid(%d) Flag(0x%x) => result(%d)
Line 501: [N :NR,%d] %%#EM 	 GetFlagTypeBySid pQmDb = nullptr
Line 553: [N :NR,%d] %%#EM 	 GetFlagTypeBySid pQmDb = nullptr
Line 567: [N :NR,%d] %%#EM 	 GetFlagTypeBySid pQmDb = nullptr
Line 594: [D :NR,%d] %%#ST ApplyPendingDataSession: ValidSes(0x%X), QmActiveSes(0x%X), EnqueuedSes(0x%X), RemainedSes(0x%X)
Line 600: [W :NR,%d] %%#ST ApplyPendingDataSession: No Action since (null ValidSession || (null EnqueSession && null RemainSession))
Line 617: [W :NR,%d] %%#EM [Check] ApplyPendingDataSession: Data in Not Valid Session(%d)
Line 661: [D :NR,%d] %%#EM ReceivedId(%d), SetImsSesId to E-PDU: (%d) -> (%d)
Line 681: [D :NR,%d] %%#EM ReceivedId(%d), SetImsSesId: (%d) -> (%d)
Line 692: [D :NR,%d] %%#EM SetImsCallStartSes: (%d) -> (%d)
Line 711: [D :NR,%d] %%#ST ImsCallingSesId: IMS Call is On-Going for SesId(%d)
Line 747: [W :NR,%d] %%#DP [Check] ProcessingPendingQueueWithSesDb: No [SM DRB/QM DefaultRb] even with QM_RB_ASSIGNED for SesId(%d), QFI(%d)
Line 752: [N :NR,%d] %%#ST ProcessingPendingQueueWithSesDb: Start QFI_WDT_TIMER for Sid(%u)
Line 757: [N :NR,%d] %%#ST ProcessingPendingQueueWithSesDb: Keep QFI_WDT_TIMER running for Sid(%u)
Line 763: [W :NR,%d] %%#DP [Check] ProcessingPendingQueueWithSesDb: [No SM DRB] but [QM DefaultRb(%u)] for SesId(%d), QFI(%d) -> Just Wait
Line 785: [W :NR,%d] %%#EM ProcessingPendingQueueWithSes: m_pCnCommonDb = nullptr
Line 792: [W :NR,%d] %%#EM ProcessingPendingQueueWithSes: pNrSmSesCtrl = nullptr
Line 799: [W :NR,%d] %%#EM ProcessingPendingQueueWithSes: No QmnrDb for SesId(%d)
Line 816: [W :NR,%d] %%#EM ProcessingAllPendingQueue: m_pCnCommonDb = nullptr
Line 823: [W :NR,%d] %%#EM ProcessingAllPendingQueue: pNrSmSesCtrl = nullptr
Line 875: [N :NR,%d] %%#DP RevertToUpper: IMS/EMC SesId(%u)
Line 895: [D :NR,%d] %%#DP RevertToUpper: Flush IMS/EMC SesId(%u) Priority Queue
Line 902: [D :NR,%d] %%#DP RevertToUpper: Flush IMS/EMC SesId(%u) Normal Queue
Line 908: [D :NR,%d] %%#DP RevertToUpper: Flush IMS/EMC SesId(%u) Pending Queue
Line 923: [D :NR,%d] %%#DP [Check] RevertToUpper: Revert Internet SesId(%u) Priority Queue
Line 930: [D :NR,%d] %%#DP [Check] RevertToUpper: Revert Internet SesId(%u) Normal Queue
Line 938: [D :NR,%d] %%#DP [Check] RevertToUpper: Revert Internet Pending Queue
Line 953: [W :NR,%d] %%#EM [Check] CheckIfActualPendingData: Sid(%d) Error! Return false
Line 965: [W :NR,%d] %%#EM [Check] CheckIfActualPendingData: No DB for Sid(%d)
Line 1006: [D :NR,%d] %%#DP QM_SendDataToL2TX: Cid(%d), PduType[%s], SesId(%d), QFI(%d), EnqCount(P: %u, N: %u)
Line 1075: [W :NR,%d] %%#EM [Check] SetRemainedCntInNormalQ: Sid(%u) Range Error!
Line 1084: [D :NR,%d] %%#ST SetSimProvider: (%d) -> (%d) : TestSIM[%s]
Line 1105: [D :NR,%d] %%#ST SetStackInitialized: (%d) -> (%d)
Line 1111: [W :NR,%d] %%#ST %s is nullptr, so return
Line 1114: [W :NR,%d] %%#ST %s is nullptr, so return
Line 1152: [W :NR,%d] %%#EM [Check] SetWdtRelTriggeredSesBitmap: Sid(%d) Range Error! -> (0x%X)
Line 1157: [D :NR,%d] %%#ST SetWdtRelTriggeredSesBitmap: Add Sid(%u) -> (0x%X)
Line 1164: [W :NR,%d] %%#EM [Check] ClearWdtRelTriggeredSesBitmap: Sid(%d) Range Error! -> (0x%X)
Line 1177: [D :NR,%d] %%#ST ClearWdtRelTriggeredSesBitmap: Reset BitmapWdtRelTriggeredSes (0x%X) -> (0x%X)
Line 1183: [D :NR,%d] %%#ST ClearWdtRelTriggeredSesBitmap: Clear Sid(%u) -> (0x%X)
Line 1189: [D :NR,%d] %%#ST GetPseudoBidirSes: HIT! m_BitmapInstantBidirSes(0x%X), m_BitmapPseudoBidirSes(0x%X)
Line 1217: [D :NR,%d] %%#ST SetPseudoBidirSes: m_BitmapInstantBidirSes(0x%X), m_BitmapPseudoBidirSes(0x%X)
Line 1239: [D :NR,%d] %%#ST UpdatePseudoBidirSesInfo: m_BitmapPseudoBidirSes(0x%X) -> (0x%X)
