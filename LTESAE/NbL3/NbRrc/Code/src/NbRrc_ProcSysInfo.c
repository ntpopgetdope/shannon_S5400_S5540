Line 113: [%s]GetNotRxedSchedInfo : Avail sched info(0x%X)
Line 177: [%s]pTcellInfo is NULL NOW
Line 183: [%s]pScellInfo is NULL NOW
Line 189: [%s]pPreTcellInfo is NULL NOW
Line 227: [%s]NBRRC_T_WAIT_SI timer stop error
Line 238: [%s]NBRRC_T_WAIT_SIB2 timer stop error
Line 279: [%s]NBRRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 281: [%s]Need to read NbRrcSchedInfoInStartReadReq (0x%X)
Line 285: [%s]>> Check This Empty SIB reading case.. Forced to read all scheduled SIBs(0x%X)
Line 302: [%s][Fill] NbRrcIsFilledInSchedInfo[%d]=%d
Line 326: [%s]NBRRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 379: [%s]SIB2 Timer Value(%d) Last Paging_NB Period(%d) Sib2 Scheduled Period(%d) Min(%d) Max(%d)
Line 407: [%s]Background operation is in progress (M: %d / S: %d)
Line 438: [%s]Head of gpNbRrcCellInfoList is NULL
Line 445: [%s]NOT the last elem of cell info list => Re-start NBRRC_T_SIB_VALIDITY
Line 469: [%s]NOT TAIL elem => Should have next elem
Line 477: [%s]Last elem of cell info list => No need to Re-start NBRRC_T_SIB_VALIDITY
Line 526: [%s]SI Num(%d) Windowlen(%d)
Line 534: [%s]%d) SI period(%d), ReadSiBitmap(%d) 
Line 580: [%s]NULL ptr argument at NbRrcSi_StartReadSi()
Line 599: [%s]SIB1 Read will be triggered
Line 607: [%s]SI_UPDATE_PAGING case => need START_READ_REQ for SIB1
Line 617: [%s]SI_READ_SIB_AFTER_BOUNDARY case => need START_READ_REQ for SIB1
Line 635: [%s]CLEAR OPFLAG :(%s-%s)
Line 635: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 636: [%s]CLEAR OPFLAG :(%s-%s)
Line 636: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 642: [%s]EAB_MOD or CONN state case => need START_READ_REQ for SIB1
Line 680: [%s]Other SIBs Read will be triggered
Line 699: [%s]Invalid SibType argument at NbRrcSi_StartReadSi()
Line 731: [%s]NBRRC_T_WAIT_MIB timer stop error
Line 743: [%s]NBRRC_T_WAIT_SIB1 timer stop error
Line 755: [%s]NBRRC_T_WAIT_SI timer stop error
Line 767: [%s]NBRRC_T_WAIT_SIB2 timer stop error
Line 865: [%s]StopReadSi
Line 873: [%s]pTcellInfo is NULL NOW
Line 913: [%s]SI proc is ON (%d)
Line 924: [%s]Scell != NULL, Clear Ntf Bitmap
Line 926: [%s]pScellInfo is NULL NOW
Line 931: [%s]Scell == NULL
Line 939: [%s]CLEAR OPFLAG :(%s-%s)
Line 943: [%s]CLEAR OPFLAG :(%s-%s)
Line 968: [%s]CLEAR OPFLAG :(%s-%s)
Line 968: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 973: [%s]SI proc is ON (%d)
Line 986: [%s]Scell != NULL, Clear Ntf Bitmap
Line 990: [%s]StopSiProcWhenLeavingCell: SIB2 DB is updated by MFBI here.
Line 994: [%s]pScellInfo is NULL NOW
Line 999: [%s]Scell == NULL
Line 1004: [%s]NOT in Background operation => NbRrcSi_InitCellSibDb
Line 1017: [%s]pTcellInfo is NULL NOW
Line 1043: [%s]pTcellInfo is NULL NOW
Line 1054: [%s]CLEAR OPFLAG :(%s-%s)
Line 1058: [%s]CLEAR OPFLAG :(%s-%s)
Line 1150: [%s]NOT the last elem of cell info list => Re-start NBRRC_T_CELL_BARRING
Line 1159: [%s]NOT HEAD elem => Should have next elem
Line 1167: [%s]Last elem of cell info list => No need to Re-start NBRRC_T_SIB_VALIDITY
Line 1204: [%s]CellCategory = LTE_FREQ_FORBIDDEN but current is source cell(%d %d,%d)
Line 1253: [%s]CellCategory = LTE_FREQ_FORBIDDEN but current is source cell(%d %d,%d)
Line 1292: [%s]Remove Freq Barring Earfcn(%d) Offset(%d) Pci(%d) CellId(%d) Forbidden(%d) Time(%d)
Line 1340: [%s]Remove Barring Earfcn(%d) Offset(%d) Pci(%d) CellId(%d) FreqBarr(%d) Time(%d)
Line 1433: [%s]CurrTime[%u], pListElem->TimeStamp[%u]
Line 1434: [%s]TimeDiff[%u] < pListElem->Tbarred[%u]
Line 1438: [%s]ERROR - T_CELL_BARRING was not elapsed 300s
Line 1444: [%s]Remove timeout RRC barring List Item - Earfcn(%d) Offset(%d) Pci(%d) CellId(%d) Tbarred(%d) FreqBarr(%d)
Line 1462: [%s]RRC barring List is empty!!
Line 1470: [%s][T_CELL_BARRING_ExpiryHdlr] :: T_CELL_BARRING expired. call NbRrcSi_RemoveTimeOutBarringListItem()
Line 1529: [%s]RRC barring List FULL!! Remove oldest Earfcn(%d) Offset(%d) Pci(%d) CellId(%d) Remain(%d) FreqBarr(%d)
Line 1552: [%s]Add RRC barring List Item - Earfcn(%d) Offset(%d) Pci(%d) CellId(%d) Tbarred(%d) FreqBarr(%d)
Line 1558: [%s]NBRRC_T_CELL_BARRING is not running. Start NBRRC_T_CELL_BARRING
Line 1563: [%s]NBRRC_T_CELL_BARRING is already running
Line 1591: [%s]RRC barring List Item Already exists. Remove and Add it to the tail of list - Earfcn(%d) Offset(%d) Pci(%d) CellId(%d) Tbarred(%d) FreqBarr(%d)
Line 1594: [%s]Update RRC barring List Item TimeStamp
Line 1619: [%s]NBRRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 1625: [%s]NO RRM_RRC_SI_INFO_UPDATE_REQ sending cond(ReceivedSib:0x%X, SentNtfToNbRrm:0x%X)
Line 1640: [%s]eDRX(%d) value[%d], paging window[%d]
Line 1766: [%s]SET OPFLAG :(%s-%s)
Line 1766: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1767: [%s]Other SIB3/4/5 set as True but RRC STATE not IDLE so don't send it. After Idle it will send
Line 1783: [%s]Don't send  RRM_RRC_SI_INFO_UPDATE_REQ (0x%X, 0x%X) and MEM free , return
Line 1800: [%s]SEND RRM_RRC_SI_INFO_UPDATE_REQ STMSI VALID : %d si_info_update_req : 0x%X
Line 1801: [%s]MEM ALLOC FAIL!!!
Line 1820: [%s]NBRRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 1878: [%s]NBRRC_T_WAIT_SIB1 Timer Expiry
Line 1882: [%s]NBRRC_SI_READ_BACKGROUND => Return
Line 1886: [%s]No SIB1 till NBRRC_T_WAIT_SIB1 expiry => NBRRC_PLMN_CELL_BARRED via STOP READ REQ with fail
Line 1892: [%s]CLEAR OPFLAG :(%s-%s)
Line 1896: [%s]CLEAR OPFLAG :(%s-%s)
Line 1903: [%s][METRIC] : Sib1ReadTimeoutCount %d
Line 1943: [%s]NBRRC_SI_READ_BACKGROUND => Return
Line 1947: [%s]No SIB1 till NBRRC_T_WAIT_SIB1 expiry => NBRRC_PLMN_CELL_BARRED via STOP READ REQ with fail
Line 1953: [%s]CLEAR OPFLAG :(%s-%s)
Line 1957: [%s]CLEAR OPFLAG :(%s-%s)
Line 1964: [%s][METRIC] : MibReadTimeoutCount %d
Line 1983: [%s]No SIB2 till NBRRC_T_WAIT_SI expiry => NBRRC_PLMN_CELL_BARRED via STOP READ REQ with fail
Line 1991: [%s]CLEAR OPFLAG :(%s-%s)
Line 1995: [%s]CLEAR OPFLAG :(%s-%s)
Line 2027: [%s]CLEAR OPFLAG :(%s-%s)
Line 2031: [%s]CLEAR OPFLAG :(%s-%s)
Line 2039: [%s]ProcSiTimerExpiryAfterSib2 :: need to receive SIB14, if broadcast.
Line 2046: [%s]pTcellInfo is NULL NOW
Line 2068: [%s]NBRRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 2070: [%s]NBRRC_T_WAIT_SI Timer Expiry
Line 2074: [%s]NBRRC_SI_READ_BACKGROUND(Only valid for CSG case) => Stop reading SI & Return
Line 2083: [%s]SIB31 could not read during EST_REQ, send EST_REJ
Line 2088: [%s]SIB31 could not read during RRE, move to IDLE
Line 2093: [%s]SIB31 could not read during resume, send EST_REJ
Line 2158: [%s]SIB Validity Timer Expiry in cell(%d)
Line 2168: [%s]SET OPFLAG :(%s-%s)
Line 2196: [%s]Change pScellInfo to target pTcellInfo
Line 2200: [%s]SET OPFLAG :(%s-%s)
Line 2200: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 2234: [%s][StartConnProcedure] Need to wait SI update. [%d]
Line 2240: [%s][StartConnProcedure] start EST_REQ procedure
Line 2247: [%s][StartConnProcedure] start RRE procedure
Line 2252: [%s][StartConnProcedure] start RESUME procedure
Line 2316: [%s]All requested SIBs have been received
Line 2326: [%s]NBRRC_T_WAIT_SI timer stop error
Line 2339: [%s]NBRRC_T_WAIT_SIB2 timer stop error
Line 2350: [%s]CLEAR OPFLAG :(%s-%s)
Line 2354: [%s]CLEAR OPFLAG :(%s-%s)
Line 2384: [%s]Not all the scheduled SIs have not been received => START READ REQ
Line 2393: [%s]Clear  SameValueTagCampOnNeedNotSIStopReq flag
Line 2423: [%s]NULL ptr argument at NbRrcSi_CheckSiProcStatus()
Line 2428: [%s]NbRrcSchedInfoInStartReadReq(0x%X), NbRrcReceivedSib(0x%X)
Line 2462: [%s]NULL ptr argument at NbRrcSi_CheckHomeCountry()
Line 2476: [%s]Home country MCC (%d %d %d)
Line 2487: [%s]Home country MCC (US)
Line 2491: [%s]Not Home country (%d %d %d)
Line 2497: [%s]Not Home country (%d %d %d)
Line 2520: [%s]NULL ptr argument at NbRrcSi_CheckForbiddenTai()
Line 2530: [%s]Same TAC with one of the Forbidden TAIs => Check PLMN
Line 2534: [%s]PLMN is also same => Forbidden TAI
Line 2541: [%s]Same TAC but Different PLMN => Not Forbidden
Line 2585: [%s]AC 11 or 15 in the HPLMN/EHPLMN => Not barred
Line 2595: [%s]AC 11 or 15, but Not in the HPLMN/EHPLMN => NBRRC_PLMN_CELL_BARRED/NBRRC_PLMN_CELL_FREQ_BARRED
Line 2607: [%s]Neither AC 11 nor 15 support => NBRRC_PLMN_CELL_BARRED/NBRRC_PLMN_CELL_FREQ_BARRED
Line 2632: [%s]Selected or RPLMN(%d) is reserved..Invalidte PLMN Index(%d)
Line 2698: [%s]Mismatch found for Reserved for Operator PLMN Index(%d %d)...
Line 2828: [%s]NbRrcSentNtfToNbRrm(0x%x) NbRrcReceivedSib(0x%x) NbRrcSchedInfoInStartReadReq(0x%x)
Line 2840: [%s]NULL ptr argument at NbRrcSi_CheckIfNtfToL1NeededWithoutOtherSi()
Line 2862: [%s]NbRrcReceivedSib(0x%x) NbRrcSchedInfoInStartReadReq(0x%x)
Line 2873: [%s]NULL ptr argument at NbRrcSi_CheckIfNeedNotOtherSi()
Line 2891: [%s]NBRRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 2892: [%s]NBRRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 2929: [%s]Matched PLMN with SPLMN(%06x)
Line 2933: [%s]CellReservedForOperatorUse in SIB1 for index(%d)
Line 2959: [%s]Treate as the cell status is 'Barred'
Line 3017: [%s]Match PLMN is found in SIB1
Line 3027: [%s]No suitable PLMN with Selected PLMN(%06x)
Line 3060: [%s]CellReservedForOperatorUse in SIB1
Line 3147: [%s]Compare EPLMN NumEplmns(%d) InclEquivPlmnList(%d)
Line 3152: [%s]No matching with EPLMN
Line 3180: [%s]Matched PLMN with EPLMN (%06x)
Line 3184: [%s]CellReservedForOperatorUse in SIB1
Line 3289: [%s]Not CellReservedForOperatorUse in SIB1
Line 3301: [%s]Reserved PLMN found with EPLMN in SIB1
Line 3305: [%s]Forbidden TAI found with EPLMN in SIB1
Line 3310: [%s]No matched PLMN with EPLMN in SIB1
Line 3355: [%s]Ignore Forbidden TAI NetSelMode(%d) IsFTAISearch(%d) UserSelectedSrch(%d) PlmnIndex(%d)
Line 3359: [%s]Forbidden TAI NetSelMode(%d) IsFTAISearch(%d) PlmnIndex(%d)
Line 3387: [%s][CheckPlmnAvailability]. NV-NBRRC_PLMNID_CHECK_DISABLE is TRUE. Skip the PLMN ID check.
Line 3438: [%s]UpdateEarfcnByMfbi: pCellSibDb is NULL.
Line 3484: [%s]MultibandInfoList as well as FreqBandIndicator is disregarded. CheckFreqBandIndicator is True
Line 3494: [%s]FreqBandIndicator(%d) indicates a UE support band
Line 3521: [%s]MFBI[%d] = %d indicates a UE support band
Line 3549: [%s]Don't change band due to invalid NewEarfcn of Freq(%d) in B%d. NET Error Check!
Line 3565: [%s][MFBI] Band Change is required since DL-EARFCN [%d]->[%d]
Line 3578: [%s][Not MFBI] Band Change is required since DL-EARFCN [%d]->[%d]
Line 3591: [%s]FreqBandIndicator(%d) indicates a NOT support band
Line 3620: [%s]Background Scan operation is progressing => No need to check cell availability
Line 3626: [%s]NULL ptr argument at NbRrcSi_CheckCellAvailability()
Line 3664: [%s]Current Cell FreqBandIndicator(%d) for Candidate Band(%d) Earfcn(%d)
Line 3675: [%s]cellBarred in SIB1
Line 3683: [%s]intraFreqResel is not allowed in SIB1 => NBRRC_PLMN_CELL_FREQ_BARRED
Line 3697: [%s]PLMN LIST REQ => return
Line 3732: [%s]Overlapped freq Cell is still barred(%d) Remain(%d) BarrType(%d).. Skip Current Cell..
Line 3770: [%s]CLEAR OPFLAG :(%s-%s)
Line 3770: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3771: [%s]CLEAR OPFLAG :(%s-%s)
Line 3771: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3772: [%s]CLEAR OPFLAG :(%s-%s)
Line 3772: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3821: [%s]gpNbRrcCellInfoList is empty => Init gpNbRrcCellInfoList
Line 3851: [%s]1st element of Cell Info list or NBRRC_T_SIB_VALIDITY is not running => Start NBRRC_T_SIB_VALIDITY
Line 3894: [%s]Move the 1st element of Cell Info list to TAIL
Line 3929: [%s]%d) SI period(%d) 
Line 3934: [%s]pCellSibDb->DbSib1.NumSchedInfo(%d) 
Line 3941: [%s]MEM ALLOC FAIL!!!
Line 3992: [%s]Trigger to send LTE_CPHY_CELL_STATUS_NTF in INIT/IDLE/ACC state(%d)
Line 4009: [%s]CLEAR OPFLAG :(%s-%s)
Line 4009: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4024: [%s]SET OPFLAG :(%s-%s)
Line 4024: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4025: [%s][MUI HO]LTE_RRC_CELL_IND pends till Rx NBRRC_HO_COMPLETE R2ACK
Line 4036: [%s]Trigger to send LTE_CPHY_UE_STATE_NTF in CONN state
Line 4041: [%s]Trigger to send LTE_CPHY_SI_START_READ_REQ in CONN state
Line 4048: [%s]No action in %d state
Line 4069: [%s]NBRRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 4075: [%s]Duplicate SIB, but Same cell revisit case(Need to send NTFs to L1SC w/o reading other SIs) => Process this SIB
Line 4080: [%s]Ignore the duplicate SIB
Line 4088: [%s]SIB1 received while NBRRC_T_WAIT_SIB1 timer is not running
Line 4096: [%s]NBRRC_T_WAIT_SIB1 timer stop error
Line 4103: [%s]Return code from DB is NBRRC_DB_IGNORE_SIB1_IN_NOT_AVAIL_CELL => return
Line 4111: [%s]Process SIB1
Line 4123: [%s]ProcSIB1 : NbRrcReceivedSib(%x) NbRrcSentNtfToNbRrm(%x)
Line 4141: [%s][ProcSib1] SIB31 is configured. Enable NTN.
Line 4151: [%s][ProcSib1] SIB31 is not configured. Disable NTN.
Line 4156: [%s]SiMain received: NbRrcSchedInfoInStartReadReq(0x%X)
Line 4172: [%s][METRIC] : Sib1ReadSuccessCount %d
Line 4194: [%s]NBRRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 4197: [%s]Process SIB2
Line 4207: [%s]Ignore the duplicate SIB2
Line 4224: [%s]Received SIB2 RRM_RRC_SI_INFO_UPDATE_REQ will be sent Received SI (0x%X)
Line 4230: [%s]No action in %d state about SIB2
Line 4237: [%s]Invalid NbRrcCurrentSiProc(%d)
Line 4259: [%s]NBRRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 4262: [%s]Process SIB%d
Line 4269: [%s]NBRRC_SI_READ_BACKGROUND => Return
Line 4281: [%s]LTE_CPHY_UE_STATE_NTF has already been sent to LteRrm
Line 4292: [%s]All the scheduled SIBs for Intra-LTE reselection received => Send LTE_CPHY_SIB_UPDATE_NTF
Line 4300: [%s]Waiting other SIB for Intra-LTE reselection, LTE_CPHY_SIB_UPDATE_NTF will not be sent
Line 4306: [%s]SET OPFLAG :(%s-%s)
Line 4306: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4307: [%s]SIB%d is received in %d state => Not send LTE_CPHY_SIB_UPDATE_NTF
Line 4309: [%s]before recieving Essential SIBs, ignore other SIBs - SibType[%d]
Line 4387: [%s]NULL ptr argument at NbRrcSi_CheckWarningMsgRxStatus()
Line 4416: [%s]CLEAR OPFLAG :(%s-%s)
Line 4416: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4446: [%s]Process SIB14
Line 4451: [%s]Send CELL_IND for previous CELL_IND PENDING
Line 4458: [%s]Send ALLEV_IND for EST_REQ PENDING flag and AB Not barred 
Line 4489: [%s]NbRrcSi_ProcSib15 :: Duplicate SIB15.
Line 4493: [%s]Process SIB15 :: The IE SIB15 contains the MBMS ServiceAreaIdentities(SAI) of the current and/ or neighbouring carrier frequencies.
Line 4635: [%s]ConvertUtcToJulian :: Year(%d) is smaller than 2000. need to check.
Line 4647: [%s]ConvertUtcToJulian :: Could not get the local time from UTC.
Line 4652: [%s]ConvertUtcToJulian :: Year:%d, Mon:%d, Day:%d.
Line 4655: [%s]ConvertUtcToJulian :: Hour:%d, Min:%d, Sec:%d, DayOfWeek:%d
Line 4684: [%s]NbRrcSi_ProcSib16 :: Duplicate SIB16.
Line 4688: [%s]Process SIB16 :: The IE SIB16 contains information related to the Coordinated Universal Time(UTC).
Line 4735: [%s]Ignore the duplicate SIB20
Line 4739: [%s]Process SIB20
Line 4763: [%s]Ignore the duplicate SIB22
Line 4767: [%s]Process SIB22
Line 4785: [%s]Process SIB23
Line 4804: [%s]Process SIB27
Line 4829: [%s]Ignore the duplicate SIB31
Line 4833: [%s]Process SIB31
Line 4865: [%s]Ignore the duplicate SIB32
Line 4869: [%s]Process SIB32
Line 4896: [%s]MIB received while NBRRC_T_WAIT_MIB timer is not running
Line 4904: [%s]NBRRC_T_WAIT_MIB timer stop error
Line 4916: [%s]Send ALLEV_IND for EST_REQ PENDING flag and Ab_Enabled False 
Line 4922: [%s]MEM ALLOC FAIL!!!
Line 4924: [%s]Modified(%d) Sib1ReadRequired(%d)
Line 4932: [%s][ProcMib] pPreTcellInfo is NULL.
Line 5020: [%s][ProcSi] pTcellInfo is NULL.
Line 5028: [%s]Invalid DbUpdateRlt (%d) => return
Line 5032: [%s]Received SIs(0x%X) in this target cell so far (0x%X)
Line 5138: [%s]SET OPFLAG :(%s-%s)
Line 5138: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 5145: [%s]Tcell!=Mcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 5151: [%s]No Tcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 5167: [%s]No Mcell when Boundary Ind comes, ignore Boundary Ind
Line 5229: [%s]SET OPFLAG :(%s-%s)
Line 5229: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 5242: [%s]Scell!=Mcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 5260: [%s]SET OPFLAG :(%s-%s)
Line 5260: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 5272: [%s]Tcell!=Mcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 5290: [%s]No Mcell when Boundary Ind comes, ignore Boundary Ind
Line 5329: [%s]Boundary IND rxed while doing Access.. it will be pending
Line 5364: [%s]SET OPFLAG :(%s-%s)
Line 5364: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 5374: [%s]Scell!=Mcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 5390: [%s]SET OPFLAG :(%s-%s)
Line 5390: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 5397: [%s]Tcell!=Mcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 5417: [%s]No Mcell when Boundary Ind comes, ignore Boundary Ind
Line 5504: [%s]CLEAR OPFLAG :(%s-%s)
Line 5504: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 5537: [%s]Invalid State #d
Line 5560: [%s]NULL ptr argument at NbRrcSi_ProcSiModInd()
Line 5567: [%s]pCellSibDb(PCI:%d) != gNbRrcDbMain.pScellInfo(PCI:%d) in NbRrcSi_ProcSiModInd()
Line 5574: [%s]NbRrcSi_ProcSiModInd :: Paging_NB
Line 5578: [%s]NbRrcSi_ProcSiModInd :: DirectIndicationInformation
Line 5584: [%s]Paging_NB should be pended in ACC state (implementation decision)
Line 5588: [%s]SET OPFLAG :(%s-%s)
Line 5588: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 5591: [%s]CLEAR OPFLAG :(%s-%s)
Line 5603: [%s]NBRRC_MALLOC_FAIL : FILE:%s LINE:%d FUNC:%s
Line 5611: [%s]SIB Modification is indicated again while waiting boundary
Line 5615: [%s]SIB Modification is indicated for different cell before mod boundary
Line 5665: [%s]CLEAR OPFLAG :(%s-%s)
Line 5665: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 5666: [%s]CLEAR OPFLAG :(%s-%s)
Line 5666: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 5730: [%s]Paging_NB Record included
Line 5747: [%s]Paging_NB record received just after release msg
Line 5748: [%s]SET OPFLAG :(%s-%s)
Line 5748: [%s]NBRRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 5752: [%s]Paging_NB record received in CONN state => Check eNB
Line 5761: [%s]Paging_NB record received in invalid state (%d)
Line 5769: [%s]SI Modification Ind included
Line 5774: [%s]Duplicate SI Modification Ind => Ignore
Line 5804: [%s]NbRrcSi_RemoveUnAvailSibCellList() is called
Line 5897: [%s]Unavailable Sib Cell Element (PCI %d) is removed 
Line 5922: [%s]NBRRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 5929: [%s]pCellSibDb(%d)(%d) is Freed Here
Line 5934: [%s]Mcell(%d)(%d) is Freed Here
Line 6115: [%s]pTcellInfo is NULL NOW
Line 6203: [%s][CheckEabStatus :: pScellInfo is NULL.
Line 6211: [%s][CheckEabStatus :: SIB14 was broadcasted but not received yet.
