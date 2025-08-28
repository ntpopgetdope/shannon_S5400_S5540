Line 327: [DR Based] rrc_FddCellSelReselInfo_IsDRSelectionCriteriaMet 
Line 331: [DR Based] rrc_FddCellSelReselInfo_IsDRSelectionCriteriaMet not met 
Line 370: [APBCR] FddCellSelReselInfo_IsSelectionCriteriaMet
Line 371: [APBCR] qQualMinFDD (%i), qRxLevMinFDD (%i)
Line 372: [APBCR] SrxlevS (%i), SqualS = (%i)
Line 381: [APBCR][ProcessUtraPrioInfo] DEDICATED_PRIORITY - ServCellPrio(%d) from PriorityInfoList
Line 389: [APBCR] DEDICATED_PRIORITY - Error to get Priority from UARFCN(%d) of PriorityInfoList. So ServCellPrio(%d) from rrc_FddCellSelReselInfo is used
Line 393: [APBCR] SrxlevN (%i), SqualN (%i) 
Line 397: [APBCR] Serving Cell is Suitable so Priority Based Reselection Criteria is Appllied
Line 400: [APBCR] Priority_Utra (%d), ServCellPrio (%d) 
Line 413: [APBCR] UtraPriority > SC Priority: threshXhigh (%i) 
Line 418: [APBCR] Selection Criteria Met for UARFCN (%d), CPICH (%d)
Line 425: [APBCR] SelectionCriteria NOT Met for UARFCN (%d), CPICH (%d)
Line 436: [APBCR] UtraPriority > SC Priority: threshXhigh (%i) 
Line 441: [APBCR] Selection Criteria Met for UARFCN (%d), CPICH (%d)
Line 448: [APBCR] SelectionCriteria NOT Met for UARFCN (%d), CPICH (%d)
Line 463: [APBCR] UtraPriority <= SC Priority: ThreshServLow (%i), ThreshXlow (%i) 
Line 468: [APBCR] Selection Criteria Met for UARFCN (%d), CPICH (%d)
Line 475: [APBCR] IsSelectionCriteriaMet NOT MET for UARFCN (%d), CPICH (%d)
Line 483: [APBCR] IsSelectionCriteriaMet - Serving Cell is not suitable -> Check if interF cell is suitable
Line 488: [APBCR] Found suitable for UARFCN (%d), CPICH (%d)
Line 494: [APBCR] NOT suitable for the UARFCN (%d), CPICH (%d)
Line 739: [NCell] uarfcn %d, psc %d: NCellEcIo %d/10 vs SCellEcIo %d/10, DiffSir %d, Qoffset2 %d
Line 761: >> BiasedQoffset2: Unsupported rrc state %d
Line 776: [uarfcn %d, psc %d] BiasedQoffset2 %d vs Qoffset2 %d
Line 826: Invalid InterFreqCell frequency value (%i)
Line 832: Invalid InterFreqCell frequency value (%i)
Line 968: Starting Tn timer for Fdd Cell:(%i,%i) HcsPrioN(%i) != HcsPrioS(%i) and QMeasn(%i) >= Qhcsn(%i) 
Line 979: Stopping Tn timer for Fdd Cell:(%i,%i) HcsPrioN(%i) != HcsPrioS(%i) and QMeasn(%i) < Qhcsn(%i) 
Line 1004: Starting Tn timer for Fdd Cell:(%i,%i) HcsPrioN(%i) == HcsPrioS(%i) and QMeasn(%i) > QMeasS(%i) + Qoffsetsn(%i)
Line 1014: Stopping Tn timer for Fdd Cell:(%i,%i) HcsPrioN(%i) == HcsPrioS(%i) and QMeasn(%i) <= QMeasS(%i) + Qoffsetsn(%i)
Line 1028: Started Tn timer for Fdd Cell:(%i,%i)
Line 1040: Stopped Tn timer for Fdd Cell:(%i,%i)
Line 1106: {%i} Cell (Freq: %i, Cpich: %i): Rn (Rscp) = -infinity, PENALTY_TIMEn = %i, Tn = %i
Line 1120: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i) dBm - QOffset1(%i) dB - ( TOn(%i) * ( 1 - Ln(0) ) )
Line 1128: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i) dBm - QOffset1(%i) dB - ( TOn(%i) * ( 1 - Ln(1) ) )
Line 1137: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i) dBm - QOffset1(%i) dB
Line 1145: {%i} Cell (Freq: %i, Cpich: %i): Rn (Rscp) = %i
Line 1160: {%i} Cell (Freq: %i, Cpich: %i): Rn (EcN0) = -infinity, PENALTY_TIMEn = %i, Tn = %i
Line 1174: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i ==> %i dB) - QOffset2(%i) dB - ( TOn(%i) * ( 1 - Ln(0) ) )
Line 1182: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i ==> %i dB) - QOffset2(%i) dB - ( TOn(%i) * ( 1 - Ln(1) ) )
Line 1191: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i ==> %i dB) - QOffset2(%i) dB
Line 1199: {%i} Cell (Freq: %i, Cpich: %i): Rn (EcN0) = %i
Line 1247: {%i} Cell (Freq: %i, Cpich: %i): HCS_PRIOn = %i, Hn (Rscp) = -infinity, PENALTY_TIMEn = %i, Tn = %i
Line 1260: {%i} Cell (Freq: %i, Cpich: %i): HCS_PRIOn = %i, Hn (Rscp) = %i
Line 1273: {%i} Cell (Freq: %i, Cpich: %i): HCS_PRIOn = %i, Hn (EcN0) = -infinity, PENALTY_TIMEn = %i, Tn = %i
Line 1286: {%i} Cell (Freq: %i, Cpich: %i): HCS_PRIOn = %i, Hn (EcN0) = %i
Line 1514: Squal Compensation [0.5dB]:: %d -> %d
Line 1544: Cell(%i,%i) : Squal (%i) = Qqualmeas(%i) dB - Qqualmin(%i) dB
Line 1596: [MRU Freq %d] Qrxlevmin Adjustment:: %d -> %d
Line 1630: Cell (Freq: %i,Cpich: %i) : Srxlev (%i) = Qrxlevmeas(%i) dBm - Qrxlevmin(%i) dBm - PCompensation(%i) dB
Line 1635: Cell (Freq: %i,Cpich: %i) : PCompensation (%i) = max( UE_TXPWR_MAX_RACH(%i) - P_MAX(%i), 0 )
Line 1709: ERROR: Already actioning a request
Line 1720: ERROR Illegal State
Line 1740: ERROR: Already actioning a request
Line 1779: %s: Prepare subscription to MIB, Id(%i)
Line 1796: ERROR Illegal State
Line 3153: ERROR : MibPtr is NULL, so MIB is being subscribed with SIB3
Line 3165: ERROR Illegal AnrSubscriptionType(%d), just make it default subscription type
Line 3209: ERROR Illegal State
Line 3766: ERROR: Already actioning a request
Line 3829: ERROR Illegal State
Line 3853: ERROR: Already actioning a request
Line 3913: ERROR Illegal State
Line 3999: ERROR: Already actioning a request
Line 4065: ERROR Illegal State
Line 4092: %s: Prepare subscription to MIB, Id(%i)
Line 4109: ERROR Illegal State
Line 4152: Squal Compensation [0.5dB]:: %d -> %d
Line 4158: SameCellSelection- NewSqual:%d NewSrxlev:%d
Line 2144: ERROR Illegal State
Line 2277: [URRC_ANR]: NotActive_AbortSibRead
Line 1895: MibId is NULL in ReadingMib_RecvMib
Line 1923: ERROR Illegal State
Line 1981: ERROR Illegal State
Line 1998: [rrc_Frequency::AwaitingMeasurementInd_RecvCellSelMeasCnf] INFO - Negative confirmation
Line 2007: [rrc_Frequency::AwaitingMeasurementInd_RecvCellSelMeasCnf] INFO - Positive confirmation
Line 2500: ReadingValidSibs_RecvMib : MIB V-tag changed, give-up this cell
Line 2504: ReadingValidSibs_RecvMib : MIB V-tag changed, Nothing to do
Line 2451: [URRC_ANR]: ReadingValidSibs_BchReadError received
Line 2457: ReadingValidSibs_BchReadError is ignored during SibReadingPause
Line 2835: ReadingValidSibs_RecvSib:Calling SIB subscription Cancellation in ReadingSchedulingBlock_RecvMib after successfull SIB read
Line 2854: ReadingValidSibs_RecvSib - LAC(%d) is FLAI
Line 2861: ReadingValidSibs_RecvSib - All Necessary SIBs received but CellSelCriteria(%d) is not met for this CSG Cell
Line 2867: ReadingValidSibs_RecvSib - All Necessary SIBs received
Line 2872: ReadingValidSibs_RecvSib:Calling SIB subscription Cancellation in ReadingSchedulingBlock_RecvMib after successfull SIB read
Line 2888: ERROR Illegal State in ReadingSchedulingBlock_RecvMib
Line 2906: ERROR Illegal State in ReadingSchedulingBlock_RecvMib
Line 2935: ReadingValidSibs_RecvSib: Cancel SIB(%d)
Line 2752: ReadingValidSibs_RecvSib SIB1 received
Line 2760: ReadingValidSibs_RecvSib SIB3 received
Line 2771: ReadingValidSibs_RecvSib : SibReadingType(%d) CsgId is not valid in this Cell
Line 2778: ReadingValidSibs_RecvSib SIB20 received
Line 2787: ReadingValidSibs_RecvSib Unexpected SibId (%i)
Line 2551: [URRC_ANR]: ProcessSib1 called
Line 2560: [URRC_ANR]: ProcessSib1 CS Domain
Line 2568: [URRC_ANR]: ProcessSib1 PS Domain
Line 2578: [URRC_ANR]: ProcessSib1 IsLacPresent:%d, LacId:%d, IsRacPresent:%d, RacId:%d
Line 2615: ProcessSib3 CSG ID : %x
Line 2622: FddCellSelReselInfo_p->csg_member_status = TRUE
Line 2649: Cell Barred
Line 2654: Cell Is ReservedForOperatorUse
Line 2659: Cell Is ReservedForExtension
Line 2664: Selection Criteria Not Met
Line 2673: ProcessSib3 called CGI:%d
Line 2707: ProcessSib20 HnbNamelength: %d HNB Name : %s
Line 2710: ProcessSib20 called
Line 3666: rrc_FddCellSelReselInfo_NecessarySibsRecved: Waiting for the NecessarySibsRecved Sibs [%d], Remaining SibCount %d
Line 3690: rrc_FddCellSelReselInfo_LeastSibsRecved: Asn_systemInfoType20 is not received, but Anyother SIBs are received
Line 2322: [URRC_ANR]: ReadingValidSibs_AbortSibRead
Line 2331: [URRC_ANR]: ERROR Illegal State in ReadingValidSibs_AbortSibRead
Line 2389: ReadingValidSibs_SibSubscriptionCanceled : SibReadingResult(%d) received
Line 2397: ERROR Illegal State in ReadingValidSibs_SibSubscriptionCanceled
Line 2405: ERROR Illegal State in ReadingValidSibs_SibSubscriptionCanceled
Line 2413: ERROR Illegal State in ReadingValidSibs_SibSubscriptionCanceled
Line 2421: ERROR Illegal State in ReadingValidSibs_SibSubscriptionCanceled
Line 2434: ReadingValidSibs_SibSubscriptionCanceled : unknown SibReadingResult received
Line 3231: ReadingValidSibs_PauseSibRead : 
Line 2349: [URRC_ANR]: AbortingSibRead_SibSubscriptionCanceled received
Line 3273: ReadingSchedulingBlock_RecvMib  Num_SharedPLMNs:%d
Line 3281: ReadingSchedulingBlock_RecvMib entered PlmnId: 0x%02X, 0x%02X, 0x%02X
Line 3295: ReadingSchedulingBlock_RecvMib Cell Not Shared Read PlmnId: 0x%02X, 0x%02X, 0x%02X  to head of the list
Line 3335: [Cross Stack]ReadingSchedulingBlock_RecvMib  Sysinfo available in cache and MIB value tag matches:
Line 3410: ReadingValidSibs_RecvSib - LAC(%d) is FLAI
Line 3425: ReadingSchedulingBlock_RecvMib:Calling SIB subscription Cancellation in ReadingSchedulingBlock_RecvMib after successfull SIB read
Line 3441: ERROR Illegal State in ReadingSchedulingBlock_RecvMib
Line 3474: ReadingSchedulingBlock_RecvMib: Cancel SIB(%d)
Line 3492: ERROR Illegal State in ReadingSchedulingBlock_RecvMib
Line 3500: ERROR Illegal State in ReadingSchedulingBlock_RecvMib
Line 3508: ReadingSchedulingBlock_RecvMib : MibId is NULL in ReadingValidSibs_RecvMib
Line 3534: ReadingSchedulingBlock_PauseSibRead : 
Line 3568: ERROR Illegal State in PausedReadingSib_PauseSibRead
Line 3588: PausedReadingSib_ResumeSibRead : SibReadingResult(%d) initialized
Line 3606: ERROR Illegal State in ReadingSchedulingBlock_RecvMib
Line 1676: UmtsCellSelectionMeasurement: Config message add cell:(%i,%i)
Line 2093: Unexpected Sib with Id (%i)  received
Line 3030: [URRC_ANR]: SysInfoReadCallback MIB received
Line 3040: Msg is NULL. Cannot Signal RecvSib to FddCellSelReselInfo 
Line 3046: [URRC_ANR]: SysInfoReadCallback SIB received
Line 3056: [URRC_ANR]: SysInfoReadCallback SYSINFOMGR_BCHREADERROR received
Line 3064: Msg is NULL. Cannot Signal AbortDetection to FddCellSelReselInfo 
Line 3071: [URRC_ANR]: SysInfoReadCallback SYSINFOMGR_SIBDECODEERROR received
Line 3079: Msg is NULL. Cannot Signal AbortDetection to FddCellSelReselInfo 
