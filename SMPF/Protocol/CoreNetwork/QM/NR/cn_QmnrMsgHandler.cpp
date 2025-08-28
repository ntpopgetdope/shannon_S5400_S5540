Line 73: [N :NR,%d] %%#ST [QM NR] HandleStatusIndToUpdateQmNrMmState
Line 77: [W :NR,%d] %%#EM 	common DB is null
Line 84: [W :NR,%d] %%#EM 	NrSmCtrl is null
Line 107: [D :NR,%d] %%#ST CurrDb ==> SessionId[%d] CpState[%s] Flag[0x%X] RbAssigned[%d] CpState(%s)
Line 116: [N :NR,%d] %%#EM 	 pQmDb = nullptr
Line 123: [W :NR,%d] %%#ST %s is nullptr, so return
Line 126: [W :NR,%d] %%#ST %s is nullptr, so return
Line 179: [N :NR,%d] %%#SM HandleSmInformToUpdateNrDb: Sid(%d), Cid(%d), PduType[%s], QfiSize(%d)
Line 180: [N :NR,%d] %%#SM ------ CpState[%s], OldSid(%d)
Line 184: [N :NR,%d] %%#SM ------ QFI(%d), RbId(%d), OldSid(%d)
Line 188: [W :NR,%d] %%#EM 	 NR QM db is null 
Line 206: [W :NR,%d] %%#EM [Check] HandleSmInformToUpdateNrDb: No QmnrDbObj for OldSid(%d)
Line 214: [W :NR,%d] %%#EM [Check] HandleSmInformToUpdateNrDb: Different Cid(%d) vs. OldCid(%d)
Line 231: [N :NR,%d] HandleSmInformToRemoveNrDb: Sid(%d), QfiSize(%d)
Line 236: [W :NR,%d] %%#EM [Check] No Db for Sid (%d), Check
Line 264: [D :NR,%d] QmnrDbMngr::CreateQmNrObj: SessionId(%d), QFI(%d), RbId(%d), CpState[%s]
Line 290: [N :NR,%d] %%#ST CreateQmNrObj: _NEW_ QmnrDbObj (0x%X)
Line 301: [W :NR,%d] [Check]used Invalid QFI(%d)!!!
Line 322: [N :NR,%d] %%#ST CreateQmNrObj: _NEW_ Create QFI (0x%X)
Line 345: [D :NR,%d] %%#ST [Check] CreateQmNrObj: Why Changed to RB_NOT_ASSIGNED!
Line 363: [W :NR,%d] %%#EM CreateQmNrObjBySdap: pQfiList is nullptr!
Line 376: [D :NR,%d] CreateQmNrObjBySdap: [%d] QFI = (%d)
Line 382: [W :NR,%d] %%#EM [Check] CreateQmNrObjBySdap: Fail to CreateQmNrObj
Line 392: [W :NR,%d] %%#EM [Check]CreateQmNrObjBySdap: pQmDbObj is nullptr
Line 398: [W :NR,%d] %%#EM [Check]CreateQmNrObjBySdap: No Valid QFI in pQfiList
Line 415: [W :NR,%d] %%#EM [Check] DeleteQmNrObjWithSesAndQfi: No Db for Sid(%d)
Line 429: [N :NR,%d] %%#ST DeleteQmNrObjWithSesAndQfi: Not Delete QmnrDbObj due to RemainedQfiSize(%d)
Line 449: [N :NR,%d] QmnrDbMngr::DeleteQmNrObjWithSessionId (%d)
Line 464: [W :NR,%d] [Check] DeleteQmNrObjWithSessionId: pDbObj is nullptr, check!
Line 473: [N :NR,%d] DeleteQmNrObjWithSessionId: Find Session and _DELETE_ pQmDb 0x%X
Line 520: [N :NR,%d] %%#RB HandleInformIndToAssignRbIdWithQfiAndSid: SessionId(%d), RbID(%d), bDefaultRb(%d), FullCfg(%d)
Line 534: [W :NR,%d] %%#EM 	 pQmNrDb = nullptr
Line 551: [N :NR,%d] %%#RB --- Target QFI (%d)
Line 555: [W :NR,%d] %%#RB [Check] Qfi(%d) is Only in SDAP (It means SM didn't get the message but Rb is allocated)
Line 581: [D :NR,%d] %%#RB [Check] HandleInformIndToAssignRbIdWithQfiAndSid: DefaultRB Changed (%u) -> (%u)
Line 595: [N :NR,%d] %%#RB Default RB(%d) will be used for QFI(%d)
Line 610: [D :NR,%d] %%#RB [Check] HandleInformIndToAssignRbIdWithQfiAndSid: DefaultRB (%u) Disabled
Line 656: [W :NR,%d] %%#EM  m_pCnCommonDb = nullptr
Line 663: [W :NR,%d] %%#EM  pNrSmSesCtrl = nullptr
Line 674: [D :NR,%d] SetAssignedRb: Session[%d]: (%d) -> (%d)
Line 717: [N :NR,%d] %%#RB ReleaseDefaultRbWithSessionId: SessionId(%d)
Line 738: [N :NR,%d] %%#RB --- [%d] Target QFI (%d)
Line 756: [D :NR,%d] %%#DP HandleReleaseRbStateAllSession: bFullCfg(%d), gSaUplinkQmQ = %x, QmMainQueue EnqCount = %d
Line 760: [W :NR,%d] %%#EM [Check] HandleReleaseRbStateAllSession: No Valid Session, return!
Line 792: [W :NR,%d] %%#EM [Check] QmNrState[%s] for SesId(%d)
Line 799: [W :NR,%d] %%#EM HandleReleaseRbStateAllSession: m_pCnCommonDb = nullptr
Line 806: [W :NR,%d] %%#EM HandleReleaseRbStateAllSession: pNrSmSesCtrl = nullptr
Line 828: [D :NR,%d] %%#EM BitRemainSes(0x%X) / PendedSesId(%d) => Start BACKOFF_TIMER
Line 839: [W :NR,%d] %%#EM [Check] ReleaseRbWithSession: No QmNrDb for for SesId(%d), Mismatch Check!
Line 863: [W :NR,%d] %%#EM [Check] ReleaseRbWithSession: Why Still RB_ASSIGNED for SesId(%d), QFI(%d)
Line 890: [N :NR,%d] %%#RB HandleInformIndToReleaseRbIdWithQfiAndSid: SessionId(%d), RbID(%d)
Line 895: [W :NR,%d] %%#EM [Check] HandleInformIndToReleaseRbIdWithQfiAndSid: Check Invalid RbID(%d)
Line 908: [N :NR,%d] %%#RB HandleInformIndToReleaseRbIdWithQfiAndSid: DefaultRb(%u) Release Case
Line 941: [N :NR,%d] %%#RB --- [%d] Target QFI (%d) : DefaultRB Exist Case
Line 958: [N :NR,%d] %%#RB --- [%d] Target QFI (%d) : No DefaultRB Case
Line 1000: [N :NR,%d] %%#ST HandleSmInformToUpdateCpState: SessionId (%d) CpState(%s)
Line 1004: [D :NR,%d] %%#EM [Check] HandleSmInformToUpdateCpState: No Valid Session, return!
Line 1068: [W :NR,%d] %%#EM [Check] HandlePduReactResult: No Valid Session, return!
Line 1086: [D :NR,%d] %%#ST HandlePduReactResult: ReqSesId(%d): Cause(%d), RbState(%d), PendingDataSessionState[%s]
Line 1097: [D :NR,%d] %%#ST HandlePduReactResult: Triggered PDU Deact for SesId(%d)
Line 1110: [W :NR,%d] %%#ST HandlePduReactResult: RB Assigned Already for SesId(%d)
Line 1117: [W :NR,%d] %%#ST [Check] HandlePduReactResult: Not Requested but PDU React Error for SesId(%d), Cause(%d), RbState(%d), PendingDataSessionState[%s]
Line 1132: [D :NR,%d] %%#ST HandlePduReactResult: Stop BACKOFF_TIMER, and Start RETRY_TIMER
Line 1139: [D :NR,%d] %%#ST HandlePduReactResult: Success -> Stop RETRY_TIMER and ExtCheckPendingData
Line 1150: [D :NR,%d] %%#ST HandlePduReactResult: Stop RETRY_TIMER, and Start BACKOFF_TIMER
Line 1166: [W :NR,%d] %%#EM [Check] HandleSrErr: No QmnrDb for Sid(%d)
Line 1184: [D :NR,%d] %%#ST HandleSrErr: IMS Call is On-Going for Sid(%d) => Trigger PDU Rel, Not PDU Local Rel
Line 1189: [D :NR,%d] %%#ST HandleSrErr: Trigger PDU Local Release
Line 1205: [D :NR,%d] %%#ST HandleSrErr: IMS Call is On-Going for Sid(%d) => Not Trigger Local Release
Line 1213: [D :NR,%d] %%#ST HandleSrErr: IMS Call Started for Other Sid(%d) => Wait for IMS Call End
Line 1221: [D :NR,%d] %%#ST HandleSrErr: Declare Call Failure for IMS Sid(%d) => Trigger IRAT Change
Line 1239: [D :NR,%d] %%#ST HandleSrErr: Trigger Local Release to Trigger Re-Regi
Line 1244: [D :NR,%d] %%#ST HandleSrErr: Local Release Already Triggered for SesBitMap (0x%X)
Line 1257: [W :NR,%d] %%#EM [Check] HandlePduReactErr: No QmnrDb for Sid(%d)
Line 1266: [D :NR,%d] %%#ST HandlePduReactErr: Flush Queue and Reset PendingDataSession State for Sid(%d), RejectCause(%d)
Line 1276: [D :NR,%d] %%#ST HandlePduReactErr: TestSIM used => Do Nothing!
Line 1282: [D :NR,%d] %%#ST HandlePduReactErr: Error for IMS Sid(%d) => Trigger IRAT Change
Line 1296: [D :NR,%d] %%#ST HandlePduReactErr: Flush Queue and Trigger PDU Local Release for Sid(%d), RejectCause(%d)
Line 1305: [D :NR,%d] %%#ST HandlePduReactErr: Voice Call is On-Going for Sid(%d) => Trigger PDU Rel, Not PDU Local Rel
Line 1324: [W :NR,%d] %%#EM [Check] HandleRelCnfFail: No Valid Session, return!
Line 1332: [D :NR,%d] %%#ST HandleRelCnfFail: WdtRelTriggeredSesBitmap (0x%X)
Line 1341: [D :NR,%d] %%#ST HandleRelCnfFail: Allow SR Re-triggering for Sid(%u)
Line 1364: [W :NR,%d] %%#EM [Check] HandleEstRej: No Valid Session, return!
Line 1374: [W :NR,%d] %%#EM [Check] HandleEstRej: RETRY_TIMER or BACKOFF_TIMER Not Initialized
Line 1387: [D :NR,%d] %%#ST HandleEstRej: Change to QM_NO_UL_PENDED because Not Set UL Data Status for Sid(%u)
Line 1399: [D :NR,%d] %%#ST HandleEstRej: Stop BACKOFF_TIMER, and Start RETRY_TIMER
Line 1406: [D :NR,%d] %%#ST HandleEstRej: Just Start BACKOFF_TIMER because no QM_SR_TRIGGERED/QM_RESUME_TRIGGERED
Line 1413: [D :NR,%d] %%#EM HandleEstRej: Just Wait for MM REG_STATUS Update
Line 1426: [D :NR,%d] %%#ST [Check] HandleEstRej: Flushed UL Packet for Sid(%u), and Start RETRY_TIMER
Line 1435: [W :NR,%d] %%#EM [Check] HandleQfiErr: No QmnrDb for Sid(%d)
Line 1458: [D :NR,%d] %%#EM [Check] HandleQfiErr: Trigger Flush for Sid(%u), Qfi(%u)
