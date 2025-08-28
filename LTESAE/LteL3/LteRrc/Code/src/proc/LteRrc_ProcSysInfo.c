Line 181: [%s]UTRA NOT supported => No need to read SIB6
Line 188: [%s]GERAN NOT supported => No need to read SIB7
Line 198: [%s]Rel11 NOT supported => No need to read SIB14
Line 204: [%s]Prose is not supported. => No need to read SIB18/SIB19
Line 215: [%s]Current LteRrcUeCapaSib (0x%X)
Line 236: [%s]Cell Status Ntf category = %d
Line 262: [%s]GetNotRxedSchedInfo : Avail sched info(0x%X)
Line 341: [%s]pTcellInfo is NULL NOW
Line 347: [%s]pScellInfo is NULL NOW
Line 384: [%s]LTERRC_T_WAIT_SI timer stop error
Line 395: [%s]LTERRC_T_WAIT_SIB2 timer stop error
Line 447: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 458: [%s]Sched Info in LteRrcSchedInfoInStartReadReq (0x%X)
Line 462: [%s]>> Check This Empty SIB reading case.. Forced to read all scheduled SIBs(0x%x)
Line 505: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 559: [%s]SIB2 Timer Value(%d) Last Paging Period(%d) Sib2 Scheduled Period(%d) Min(%d) Max(%d)
Line 690: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 709: [%s][DEDI_PRIORITY] LTE %d : earfcn(%d) pri(%d)
Line 919: [%s]Background operation is in progress (M: %d / S: %d)
Line 939: [%s]Background operation is in progress (M: %d / S: %d)
Line 945: [%s]NOT in Background operation (M_state: %d)
Line 975: [%s]Head of gpLteRrcCellInfoList is NULL
Line 982: [%s]NOT the last elem of cell info list => Re-start LTERRC_T_SIB_VALIDITY
Line 1007: [%s]NOT TAIL elem => Should have next elem
Line 1015: [%s]Last elem of cell info list => No need to Re-start LTERRC_T_SIB_VALIDITY
Line 1049: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 1085: [%s]SI Num(%d) Windowlen(%d)
Line 1090: [%s]%d) SI period(%d) Valid(%d) SiToSibMap(0x%x)
Line 1102: [%s]IsRequiredSibRead(%d)
Line 1139: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 1157: [%s]Same as Last SI read. No SIB re-start
Line 1166: [%s]Other SIBs Read will be Re-started
Line 1233: [%s]Cease SYNC requested
Line 1254: [%s]NULL ptr argument at LteRrcSi_StartReadSi()
Line 1273: [%s]SIB1 Read will be triggered
Line 1291: [%s]SI_UPDATE_3HR or ETWS_IND or CMAS_IND or EAB_MOD case => need START_READ_REQ for SIB1
Line 1294: [%s]SI_UPDATE_PAGING case => need START_READ_REQ for SIB1
Line 1308: [%s]SI_READ_SIB_AFTER_BOUNDARY case => need START_READ_REQ for SIB1
Line 1320: [%s]CLEAR OPFLAG :(%s-%s)
Line 1320: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1321: [%s]CLEAR OPFLAG :(%s-%s)
Line 1321: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1325: [%s]CLEAR OPFLAG :(%s-%s)
Line 1325: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1326: [%s]CLEAR OPFLAG :(%s-%s)
Line 1326: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1328: [%s]SET OPFLAG :(%s-%s)
Line 1328: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1338: [%s]SI_UPDATE_3HR or ETWS_IND or CMAS_IND or EAB_MOD or CONN state case => need START_READ_REQ for SIB1
Line 1385: [%s]Other SIBs Read will be triggered
Line 1413: [%s]CSG SIBs Read will be triggered
Line 1448: [%s]Invalid SibType argument at LteRrcSi_StartReadSi()
Line 1485: [%s]LTERRC_T_WAIT_SIB1 timer stop error
Line 1497: [%s]LTERRC_T_WAIT_SI timer stop error
Line 1509: [%s]LTERRC_T_WAIT_SIB2 timer stop error
Line 1645: [%s]STOP READ REQ with %d
Line 1664: [%s]pTcellInfo is NULL NOW
Line 1722: [%s][LTE RRC SRRC] STOP READ REQ
Line 1783: [%s][LTE RRC SRRC] No Tcell Info
Line 1817: [%s]SI proc is ON (%d)
Line 1828: [%s]Scell != NULL, Clear Ntf Bitmap
Line 1830: [%s]pScellInfo is NULL NOW
Line 1835: [%s]Scell == NULL
Line 1843: [%s]CLEAR OPFLAG :(%s-%s)
Line 1847: [%s]CLEAR OPFLAG :(%s-%s)
Line 1878: [%s]CLEAR OPFLAG :(%s-%s)
Line 1878: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1879: [%s]CLEAR OPFLAG :(%s-%s)
Line 1879: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1880: [%s]CLEAR OPFLAG :(%s-%s)
Line 1880: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1881: [%s]CLEAR OPFLAG :(%s-%s)
Line 1881: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1886: [%s]SI proc is ON (%d)
Line 1901: [%s]pScellInfo is NULL
Line 1910: [%s]pTcellInfo is NULL
Line 1915: [%s]Scell != NULL, Clear Ntf Bitmap
Line 1919: [%s]StopSiProcWhenLeavingCell: SIB2 DB is updated by MFBI here.
Line 1923: [%s]pScellInfo is NULL NOW
Line 1928: [%s]Scell == NULL
Line 1933: [%s]NOT in Background operation => LteRrcSi_InitCellSibDb
Line 1946: [%s]pTcellInfo is NULL NOW
Line 1972: [%s]pTcellInfo is NULL NOW
Line 1983: [%s]CLEAR OPFLAG :(%s-%s)
Line 1987: [%s]CLEAR OPFLAG :(%s-%s)
Line 2031: [%s]CellCategory = LTE_FREQ_FORBIDDEN but RRC is not a idle state.
Line 2041: [%s]CellCategory = LTE_FREQ_FORBIDDEN but current is source cell(%d,%d)
Line 2246: [%s]Remove Barring Rat(%d) Earfcn(%d) Pci(%d) CellId(%d) FreqBarr(%d) Time(%d)
Line 2288: [%s]Remove Barring Rat(%d) Earfcn(%d) Pci(%d) CellId(%d) BarredReason(%d) Time(%d)
Line 2343: [%s][LteRrcSi_RemoveAllBarringListExceptBySpecialCus]do not remove the cell barred by user NWEXCL.
Line 2351: [%s]Remove Barring Rat(%d) Earfcn(%d) Pci(%d) CellId(%d) FreqBarr(%d) Time(%d)
Line 2398: [%s]Remove timeout Barring Rat(%d) Earfcn(%d) Pci(%d) CellId(%d) FreqBarr(%d)
Line 2475: [%s]RRC barring List FULL!! Remove oldest Rat(%d) Earfcn(%d) Pci(%d) CellId(%d) Remain(%d) FreqBarr(%d)
Line 2514: [%s]Add RRC barring List Earfcn(%d) Pci(%d) CellId(%d) Tbarred(%d) FreqBarr(%d) BarredReason(%d)
Line 2552: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 2558: [%s]Change category to XXX_ACCEPT_CELL to LTE_ACCEPT_TO_SUIT_CELL
Line 2563: [%s]Current category is NOT XXX_ACCEPT_CELL (category: %d)
Line 2571: [%s]SIB1 bit of LteRrcSentNtfToLteRrm was not set => Should be checked the reason
Line 2617: [%s]MEM ALLOC FAIL!!!
Line 2654: [%s]++ LastPmax[%d] => new Pmax[%d]
Line 2694: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 2701: [%s]CELL status ntf will not be sent
Line 2708: [%s]Invalid LteRrcSib1CellCategory (LTE_MAX_CATEGORY)
Line 2714: [%s]Send LTE_CPHY_CELL_STATUS_NTF (category: %d) PLMN_Avail(%d)
Line 2745: [%s]Sib1Pmax(%d) TempPmax(%d)(%d) TempPmaxNr(%d)(%d)
Line 2758: [%s]++ LastPmax[%d] => new Pmax[%d]
Line 2812: [%s]csg_cell_type to RRM(%d) Membership(%d)
Line 2860: [%s][LteRrcSi_SendCellStatusNtf] plmnindex: %d found in bar cell list.
Line 2881: [%s]LTE_CPHY_CELL_STATUS_NTF Tbarred (%d), TimeDiff (%d) 
Line 2888: [%s]LTE_CPHY_CELL_STATUS_NTF Tbarred to RRM (%d)s
Line 2892: [%s]LTE_CPHY_CELL_STATUS_NTF  Barred expired, should impossible. cell bar duration: %d
Line 3056: [%s]Sib1Pmax(%d) TempPmax(%d) TempPmaxNr(%d)
Line 3107: [%s]BarringParameters :: BarringFactor:[%d], BarringTime:[%d]
Line 3139: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 3158: [%s]SendSib2Ind :: RRC is connected state. set the SSAC factor as 100(Not barred)
Line 3189: [%s]SendSib2Ind :: ACB information is not changed.
Line 3197: [%s]SendSib2Ind :: GlobalCellId[0x%x], PCI[%d], earfcn[%d]
Line 3207: [%s]SendSib2Ind :: Barring parameters for SSAC - Voice
Line 3210: [%s]SendSib2Ind :: Barring parameters for SSAC - Video
Line 3214: [%s]SendSib2Ind :: Barring parameters for converted SSAC - Voice
Line 3217: [%s]SendSib2Ind :: Barring parameters for converted SSAC - Video
Line 3222: [%s]SendSib2Ind :: Barring parameters for Emergency : [%d]
Line 3228: [%s]SendSib2Ind :: Operator-ATT, ACB-SKIP for Voice/Video TRUE. Set MO_DATA as not-barred.
Line 3243: [%s]SendSib2Ind :: Operator-KDDI, ACB-SKIP for Voice/Video/SMS TRUE. Set MO_DATA as not-barred.
Line 3257: [%s]SendSib2Ind :: Barring parameters for MO-DATA
Line 3265: [%s]SendSib2Ind :: Barring parameters for MO-SIGNALLING
Line 3279: [%s]SendSib2Ind :: UE has a valid special AC. Set MO_DATA and emergency as not-barred.
Line 3293: [%s]SendSib2Ind :: UE has a valid special AC. Set MO_SIG as not-barred.
Line 3305: [%s]SendSib2Ind :: drxLength(%d)
Line 3334: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 3336: [%s]Send LTE_RRC_SIB8_IND to EMM, SIB8 info present(%d).
Line 3427: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 3520: [%s][SendUeStateNtf] :: add eutra_deprio_freq(%d)
Line 3538: [%s][SendUeStateNtf] :: add nr_deprio_arfcn(%d)
Line 3544: [%s][SendUeStateNtf] :: T325_value(%d) deprio_type(0x%x)
Line 3560: [%s][SendUeStateNtf] :: Send UE specific DRX(%d)
Line 3586: [%s][SendUeStateNtf] :: Send UE specific DRX(%d) nB(%d)
Line 3608: [%s]No valid IMSI, check SIM status => imsi_for_paging is set to zero as per spec
Line 3663: [%s]CSFB Call Status(%d)
Line 3678: [%s][SendUeStateNtf] The ETWS schedule information is available. Start ETWS procedure.
Line 3679: [%s]SET OPFLAG :(%s-%s)
Line 3679: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3684: [%s][SendUeStateNtf] The CMAS schedule information is available. Start CMAS procedure.
Line 3685: [%s]SET OPFLAG :(%s-%s)
Line 3685: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3709: [%s]LastGlobalCellId : [0x%x].
Line 4075: [%s] IsFDDFreqInSIB5[%d] in LTERRC_EMM_FDD_FREQ_INFO
Line 4114: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 4131: [%s]NO LTE_CPHY_SIB_UPDATE_NTF sending cond(%x, %x)
Line 4151: [%s]LTERRC_MALLOC_FAIL : FILE:%s LINE:%d FUNC:%s
Line 4157: [%s]SIB3 info is included in LTE_CPHY_SIB_UPDATE_NTF
Line 4177: [%s]LTERRC_MALLOC_FAIL : FILE:%s LINE:%d FUNC:%s
Line 4184: [%s]SIB4 info is included in LTE_CPHY_SIB_UPDATE_NTF
Line 4204: [%s]LTERRC_MALLOC_FAIL : FILE:%s LINE:%d FUNC:%s
Line 4225: [%s]SIB5 info is included in LTE_CPHY_SIB_UPDATE_NTF
Line 4246: [%s]MEM ALLOC FAIL!!!
Line 4281: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 4302: [%s]MEM ALLOC FAIL!!!
Line 4330: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 4348: [%s]MEM ALLOC FAIL!!!
Line 4377: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 4390: [%s]SendSib8UpdateNtf - remove the system time info.
Line 4406: [%s]MEM ALLOC FAIL!!!
Line 4439: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 4515: [%s]LTERRC_T_WAIT_SIB1 Timer Expiry
Line 4519: [%s]LTERRC_SI_READ_BACKGROUND => Return
Line 4523: [%s]No SIB1 till LTERRC_T_WAIT_SIB1 expiry => LTE_CELL_BARRED via STOP READ REQ with fail
Line 4529: [%s]CLEAR OPFLAG :(%s-%s)
Line 4533: [%s]CLEAR OPFLAG :(%s-%s)
Line 4536: [%s]CLEAR OPFLAG :(%s-%s)
Line 4537: [%s]CLEAR OPFLAG :(%s-%s)
Line 4538: [%s]CLEAR OPFLAG :(%s-%s)
Line 4564: [%s]No SIB2 till LTERRC_T_WAIT_SI expiry => LTE_CELL_BARRED via STOP READ REQ with fail
Line 4572: [%s]CLEAR OPFLAG :(%s-%s)
Line 4576: [%s]CLEAR OPFLAG :(%s-%s)
Line 4626: [%s]CLEAR OPFLAG :(%s-%s)
Line 4630: [%s]CLEAR OPFLAG :(%s-%s)
Line 4640: [%s]Stop BPLMN and Camp on case => Need to send CELL STATUS NTF
Line 4644: [%s]pTcellInfo is NULL NOW
Line 4656: [%s]ProcSiTimerExpiryAfterSib2 :: need to receive SIB14, if broadcast.
Line 4705: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 4707: [%s]LTERRC_T_WAIT_SI Timer Expiry
Line 4711: [%s]LTERRC_SI_READ_BACKGROUND(Only valid for CSG case) => Stop reading SI & Return
Line 4718: [%s]CLEAR OPFLAG :(%s-%s)
Line 4722: [%s]CLEAR OPFLAG :(%s-%s)
Line 4722: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4723: [%s]CLEAR OPFLAG :(%s-%s)
Line 4723: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4724: [%s]CLEAR OPFLAG :(%s-%s)
Line 4724: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4728: [%s]Timer was expired while waiting warning message(ETWS/CMAS).
Line 4810: [%s]SIB Validity Timer Expiry in cell(%d)
Line 4820: [%s]SET OPFLAG :(%s-%s)
Line 4855: [%s]Change pScellInfo to target pTcellInfo
Line 4864: [%s]SET OPFLAG :(%s-%s)
Line 4864: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4963: [%s]All requested CSG SIBs have been received
Line 4977: [%s]LTERRC_T_WAIT_SI timer stop error
Line 4993: [%s]LTERRC_T_WAIT_SIB2 timer stop error
Line 5036: [%s]LTE_CPHY_UE_STATE_NTF sent & SIB3/4/5 received => Send LTE_CPHY_SIB_UPDATE_NTF
Line 5046: [%s]LTE_CPHY_UE_STATE_NTF sent & SIB6 received => Send LTE_CPHY_SIB_6_UPDATE_NTF
Line 5056: [%s]LTE_CPHY_UE_STATE_NTF sent & SIB7 received => Send LTE_CPHY_SIB_7_UPDATE_NTF
Line 5079: [%s]Current State = %d => NOT send XXX_NTF to LteRrm
Line 5090: [%s]LTE_CPHY_UE_STATE_NTF sent & SIB8 received => Send LTE_CPHY_SIB_8_UPDATE_NTF
Line 5143: [%s]All requested SIBs have been received
Line 5153: [%s]LTERRC_T_WAIT_SI timer stop error
Line 5165: [%s]LTERRC_T_WAIT_SIB2 timer stop error
Line 5173: [%s]Send LTE_CPHY_UE_STATE_NTF
Line 5182: [%s]CLEAR OPFLAG :(%s-%s)
Line 5186: [%s]CLEAR OPFLAG :(%s-%s)
Line 5191: [%s]CLEAR OPFLAG :(%s-%s)
Line 5191: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 5192: [%s]CLEAR OPFLAG :(%s-%s)
Line 5192: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 5193: [%s]CLEAR OPFLAG :(%s-%s)
Line 5193: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 5235: [%s]Revisit cell => Send XXX NTF to LteRrm using previously received SIB info
Line 5249: [%s]Not all the scheduled SIs have not been received => START READ REQ
Line 5257: [%s]Current LteRrcCurrentSiProc (%d) => Set to LTERRC_SI_NO_ACTION and pTcellInfo is set to NULL NOW
Line 5280: [%s]No need re-start; waiting for SIB1 after SI mod
Line 5293: [%s]Not all the scheduled SIs : Sched Info in LteRrcSchedInfoInStartReadReq (0x%X)
Line 5334: [%s]NULL ptr argument at LteRrcSi_CheckSiProcStatus()
Line 5379: [%s]NULL ptr argument at LteRrcSi_CheckHomeCountry()
Line 5403: [%s]Home country MCC (US)
Line 5407: [%s]Not Home country (%d %d %d)
Line 5413: [%s]Not Home country (%d %d %d)
Line 5444: [%s]NULL ptr argument at LteRrcSi_CheckForbiddenTai()
Line 5454: [%s]Same TAC with one of the Forbidden TAIs => Check PLMN
Line 5458: [%s]PLMN is also same => Forbidden TAI
Line 5465: [%s]Same TAC but Different PLMN => Not Forbidden
Line 5500: [%s]NULL ptr argument at LteRrcSi_CheckDisabledPlmn()
Line 5509: [%s]PLMN is also same => Disabled PLMN
Line 5515: [%s]Different PLMN => Not Disabled PLMN
Line 5633: [%s]AC 11 or 15 in the HPLMN/EHPLMN => Not barred
Line 5643: [%s]AC 11 or 15, but Not in the HPLMN/EHPLMN => LTE_CELL_BARRED/LTE_FREQ_BARRED
Line 5655: [%s]Neither AC 11 nor 15 support
Line 5681: [%s]Selected or RPLMN(%d) is reserved..Invalidte PLMN Index(%d)
Line 5759: [%s]Mismatch found for Reserved for Operator PLMN Index(%d %d)...
Line 5843: [%s]LteRrcSentNtfToLteRrm(0x%x) LteRrcReceivedSib(0x%x) LteRrcSchedInfoInStartReadReq(0x%x)
Line 5855: [%s]NULL ptr argument at LteRrcSi_CheckIfNtfToL1NeededWithoutOtherSi()
Line 5898: [%s]UE has the CSG Membership on this cell
Line 5905: [%s]Not Allowed CSG cell
Line 5911: [%s]Not Allowed CSG cell in Connected State
Line 5919: [%s]Hybrid cell with CSG Membership
Line 5924: [%s]Hybrid cell without CSG Membership... Try camp on as normal Cell
Line 5929: [%s]Non-CSG Cell Try camp on
Line 5937: [%s]This UE cannot camp on this CSG Cell because CSG is not suppored
Line 5946: [%s]Not Allowed CSG cell in Connected State
Line 5951: [%s]This UE can camp on this Hybrid Cell
Line 5955: [%s]Non-CSG Cell Try camp on
Line 5962: [%s]Allow Camp on CSG Cell in Any PLMN State
Line 6003: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 6004: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 6067: [%s]PLMN ID of this cell matches with Preferred PLMN ID.
Line 6077: [%s]PLMN ID of this cell does not match with Preferred PLMN ID. Try other cell in Limited Service
Line 6136: [%s]Matched PLMN with SPLMN (%d %d %d %d %d %d)
Line 6140: [%s]CellReservedForOperatorUse in SIB1 for index(%d)
Line 6222: [%s]CellReservedForOperatorUse in SIB1 for plmn index(%d), Check AC avail (%d)
Line 6256: [%s]Match PLMN is found in SIB1
Line 6288: [%s]No suitable PLMN with Selected PLMN(%d %d %d %d %d %d) in SIB1
Line 6331: [%s]CellReservedForOperatorUse in SIB1
Line 6491: [%s]Compare EPLMN NumEplmns(%d) InclEquivPlmnList(%d)
Line 6496: [%s]No matching with EPLMN
Line 6536: [%s]Matched PLMN with EPLMN(%d %d %d %d %d %d)
Line 6540: [%s]CellReservedForOperatorUse in SIB1
Line 6613: [%s]CellReservedForOperatorUse in SIB1 for plmn index(%d), Check AC avail (%d)
Line 6764: [%s]Ignore Forbidden TAI NetSelMode(%d) IsFTAISearch(%d) UserSelectedSrch(%d) PlmnIndex(%d)
Line 6768: [%s]Forbidden TAI NetSelMode(%d) IsFTAISearch(%d) CellCat(%d) PlmnIndex(%d)
Line 6814: [%s]CSG Member PLMN ID(%x) Index(%d)
Line 6819: [%s]NON-CSG Member PLMN ID(%x) Index(%d)
Line 7271: [%s]This cell is in same country as Selected PLMN 
Line 7276: [%s]This cell is in diff country as Selected PLMN, Abort PLMN search ... 
Line 7284: [%s]Country Change detected
Line 7329: [%s]Select RPLMN
Line 7339: [%s]Select IDLE PLMN
Line 7354: [%s]Select HPLMN List
Line 7366: [%s]Select EPLMN PLMN
Line 7375: [%s]Select Last Nas Selected PLMN
Line 7426: [%s]NETWORK ERROR: Select Primary PLMN
Line 7462: [%s]UpdateEarfcnByMfbi: pCellSibDb is NULL.
Line 7528: [%s]MultibandInfoList as well as FreqBandIndicator is disregarded. CheckFreqBandIndicator is True
Line 7542: [%s]FreqBandIndicator(%d) indicates a UE support band
Line 7569: [%s]MFBI[%d] = %d indicates a UE support band
Line 7585: [%s]FreqBandIndicator(%d) indicates a UE support band after search Multiband list
Line 7630: [%s]Don't change band due to invalid NewEarfcn of Freq(%d) in B%d. NET Error Check!
Line 7644: [%s][MFBI] Band Change is required since DL-EARFCN [%d]->[%d]
Line 7648: [%s][Not MFBI] Band Change is required since DL-EARFCN [%d]->[%d]
Line 7661: [%s]FreqBandIndicator(%d) indicates a NOT support band
Line 7700: [%s]NULL ptr to pCellSibDb
Line 7712: [%s]Current Acq Band(%d) BW(%d)
Line 7751: [%s]Background Scan operation is progressing => No need to check cell availability
Line 7757: [%s]NULL ptr argument at LteRrcSi_CheckCellAvailability()
Line 7787: [%s]Do not camp on avoid plmn id
Line 7824: [%s]Current Cell FreqBandIndicator(%d) for Candidate Band(%d) Earfcn(%d)
Line 7868: [%s][LteRrcSi_CheckCellAvailability] Skip checking EMC barred cell list
Line 7874: [%s][LteRrcSi_CheckCellAvailability] Skip checking EMC barred cell list in CONN mode
Line 7879: [%s][LteRrcSi_CheckCellAvailability] AP Based EMC call failed, not camp on
Line 7894: [%s]cellBarred in SIB1
Line 7904: [%s]intraFreqResel is not allowed in SIB1 => LTE_FREQ_BARRED
Line 7944: [%s]Non CSG CELL Found. Try Next Cell
Line 7954: [%s]Selected CSG ID(%d) Found
Line 7960: [%s]CSG ID(%d) Mismatch for Selected CSG ID(%d)
Line 7984: [%s]PLMN LIST REQ => return
Line 8008: [%s] No change in country detected AbortIfNewCountry : %d  
Line 8022: [%s]plmnindex: %d found in bar cell list.
Line 8032: [%s]This cell was barred due to eBarredReason(%d) 
Line 8043: [%s]Highest ranking cell change case..This cell was barred(%d) but remove the limitation
Line 8060: [%s]Overlapped freq Cell is still barred(%d) Remain(%d) BarrType(%d).. Skip Current Cell..
Line 8061: [%s]pSiMain->LteRrcSib1CellCategory (%d).
Line 8077: [%s]CELL_BARRED_BY_NW: should different cell with the one in barred list. AvailCell [%d].
Line 8157: [%s]No action in %d state
Line 8173: [%s]CLEAR OPFLAG :(%s-%s)
Line 8173: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 8174: [%s]CLEAR OPFLAG :(%s-%s)
Line 8174: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 8175: [%s]CLEAR OPFLAG :(%s-%s)
Line 8175: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 8176: [%s]CLEAR OPFLAG :(%s-%s)
Line 8176: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 8177: [%s]CLEAR OPFLAG :(%s-%s)
Line 8177: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 8237: [%s]SIB1 Rxed in case of ETWS_IND
Line 8243: [%s]There is no ETWS schedule info in SIB1: Abort ETWS Procedure.
Line 8246: [%s]CLEAR OPFLAG :(%s-%s)
Line 8246: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 8250: [%s]Not all the scheduled SIs : Sched Info in LteRrcSchedInfoInStartReadReq (0x%X)
Line 8264: [%s]CheckETWS :: pTcellInfo is NULL NOW
Line 8286: [%s]SIB1 Rxed in case of CMAS_IND
Line 8292: [%s]There is no CMAS schedule info in SIB1. : Abort CMAS Procedure.
Line 8295: [%s]CLEAR OPFLAG :(%s-%s)
Line 8295: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 8299: [%s]Not all the scheduled SIs : Sched Info in LteRrcSchedInfoInStartReadReq (0x%X)
Line 8313: [%s]CheckCmas :: pTcellInfo is NULL NOW
Line 8335: [%s]Only Warning msgs are required. Start read SIBs
Line 8367: [%s]gpLteRrcCellInfoList is empty => Init gpLteRrcCellInfoList
Line 8397: [%s]1st element of Cell Info list or LTERRC_T_SIB_VALIDITY is not running => Start LTERRC_T_SIB_VALIDITY
Line 8440: [%s]Move the 1st element of Cell Info list to TAIL
Line 8478: [%s]Trigger to send LTE_CPHY_CELL_STATUS_NTF in INIT/IDLE/ACC state(%d)
Line 8499: [%s]CLEAR OPFLAG :(%s-%s)
Line 8499: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 8514: [%s]SET OPFLAG :(%s-%s)
Line 8514: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 8515: [%s][MUI HO]LTE_RRC_CELL_IND pends till Rx LTERRC_HO_COMPLETE R2ACK
Line 8549: [%s]Trigger to send LTE_CPHY_UE_STATE_NTF in CONN state
Line 8563: [%s]Trigger to send LTE_CPHY_SI_START_READ_REQ in CONN state
Line 8570: [%s]No action in %d state
Line 8601: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 8612: [%s]EndcAvailDuringHo Case : Set ENDC avail
Line 8621: [%s][ENDC Capable Freq] Save Earfcn(%d) CellId(%d). (%d/%d)
Line 8632: [%s]CLEAR OPFLAG :(%s-%s)
Line 8652: [%s]Duplicate SIB, but Same cell revisit case(Need to send NTFs to L1SC w/o reading other SIs) => Process this SIB
Line 8658: [%s]ignore the duplicate SIB  : LteRrcSchedInfoInStartReadReq(%d) LteRrcReceivedSib(%d) LteRrcSentNtfToLteRrm(%d)
Line 8675: [%s]Dedicated SIB1 received, Value Tag changed
Line 8676: [%s]CLEAR OPFLAG :(%s-%s)
Line 8676: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 8680: [%s]SIB1 received while LTERRC_T_WAIT_SIB1 timer is not running
Line 8689: [%s]LTERRC_T_WAIT_SIB1 timer stop error
Line 8704: [%s]SIB1 with HeNB Interrupt Rxed while Non-CGI Meas Proc, Ignore
Line 8720: [%s]Return code from DB is LTERRC_DB_IGNORE_SIB1_IN_NOT_AVAIL_CELL => return
Line 8734: [%s]Process SIB1
Line 8771: [%s]Trigger to send LTE_CPHY_CELL_STATUS_NTF in INIT/IDLE/ACC state(%d)
Line 8803: [%s]ProcSIB1 : MBSFN is not activated. state(%d)
Line 8808: [%s]ProcSIB1 : LteRrcSchedInfoInStartReadReq(%d) LteRrcReceivedSib(%d) LteRrcSentNtfToLteRrm(%d)
Line 8824: [%s]SI_UPDATE_3HR or ETWS_IND or CMAS_IND or CONN state case => need STOP_READ_REQ for SIB1
Line 8842: [%s]CLEAR OPFLAG :(%s-%s)
Line 8911: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 8913: [%s]Process SIB2
Line 8925: [%s]Ignore the duplicate SIB2
Line 8948: [%s]No action in %d state about SIB2
Line 8968: [%s]Invalid LteRrcCurrentSiProc(%d)
Line 8999: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 9002: [%s]Process SIB%d
Line 9026: [%s]LTERRC_SI_READ_BACKGROUND => Return
Line 9039: [%s]LTE_CPHY_UE_STATE_NTF has already been sent to LteRrm
Line 9050: [%s]All the scheduled SIBs for Intra-LTE reselection received => Send LTE_CPHY_SIB_UPDATE_NTF
Line 9058: [%s]Waiting other SIB for Intra-LTE reselection, LTE_CPHY_SIB_UPDATE_NTF will not be sent
Line 9064: [%s]LTE_CPHY_SIB_UPDATE_NTF cannot be sent since LTE_CPHY_UE_STATE_NTF has not been sent to LteRrm
Line 9070: [%s]SIB%d is received in %d state => Not send LTE_CPHY_SIB_UPDATE_NTF
Line 9100: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 9102: [%s]Process SIB%d
Line 9116: [%s]LTE_CPHY_UE_STATE_NTF has already been sent to LteRrm
Line 9151: [%s]Invalid SIB type(SIB%d)
Line 9159: [%s]LTE_CPHY_SIB_6/7/8_UPDATE_NTF cannot be sent since LTE_CPHY_UE_STATE_NTF has not been sent to LteRrm
Line 9165: [%s]SIB%d is received in %d state => Not send LTE_CPHY_SIB_6/7/8_UPDATE_NTF
Line 9398: [%s]LteRrcSi_ProcSib9 :: Ignore duplicated SIB9.
Line 9408: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 9411: [%s]Process SIB9
Line 9427: [%s]LteRrcSi_ProcSib9 :: CSG is not supported.
Line 9458: [%s]NULL ptr argument at LteRrcSi_ProcSib9()
Line 9463: [%s]Process SIB9
Line 9480: [%s]LTERRC_T_WAIT_SI timer stop error
Line 9514: [%s]NULL ptr argument at LteRrcSi_StartReadSiForCsgScan()
Line 9572: [%s]CLEAR OPFLAG :(%s-%s)
Line 9572: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 9599: [%s]LteRrcSi_StartCmasValidityTimer : Invalid CMAS DB Index[%d]
Line 9624: [%s]CMAS :: Stop Validity timer[%d]
Line 9630: [%s]LteRrcSi_StopCmasValidityTimer : Invalid CMAS DB Index[%d]
Line 9653: [%s]FindOldestCmasDbIndex :: CMAS buffer full.
Line 9692: [%s]ETWS :: Clear ETWS Primary data
Line 9724: [%s]LteRrcSi_DiscardBufferedEtwsSegment
Line 9769: [%s]LteRrcSi_DiscardBufferedCmasSegment. index[%d]
Line 9824: [%s]ETWS :: All ETWS messages are received. stop ETWS procedure
Line 9826: [%s]CLEAR OPFLAG :(%s-%s)
Line 9826: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 9854: [%s]NOT all segments have been received
Line 9861: [%s]Last segment is not received
Line 9977: [%s]LteRrcSi_ProcCmasValidityTimerExpiry : Invalid timer ID[%d].
Line 9981: [%s]LTERRC_T_WAIT_CMAS_%d Expired. discard all segment data.
Line 10012: [%s]ETWS : total received segment count is [%d]
Line 10022: [%s]ETWS : Memory alloc fail. try next time
Line 10032: [%s]ETWS : Need to check segment length. total[%d], current[%d]
Line 10072: [%s]CMAS : total received segment count is [%d]
Line 10082: [%s]CMAS : Memory alloc fail. try next time
Line 10092: [%s]CMAS : Need to check segment length. total[%d], current[%d]
Line 10131: [%s]CMAS : total received WAC segment count is [%d], TotalWACInfoLen[%d]
Line 10147: [%s]CMAS : Memory alloc fail. try next time
Line 10157: [%s]CMAS : Need to check segment length. total[%d], current[%d]
Line 10354: [%s]NULL ptr argument at LteRrcSi_CheckWarningMsgRxStatus()
Line 10391: [%s]Discard any buffered ETWS msg segment upon entering a cell.
Line 10405: [%s]Discard any buffered CMAS msg segment upon entering a cell.
Line 10474: [%s]Receive ETWS primary notification. send to upper layer
Line 10527: [%s]ETWS Secondary :: duplicate count reachs the max count[%d]. stop read SIB11
Line 10544: [%s]Receive all ETWS secondary notification. send to upper layer
Line 10605: [%s]CMAS :: duplicate count reachs the max count[%d]. stop read SIB12
Line 10623: [%s]CMAS : send CMAS notification to upper layer
Line 10702: [%s]LteRrcSi_ProcSib14 :: SIB for Extended access class barring feautre.
Line 10707: [%s]LteRrcSi_ProcSib14 :: SIB14 is only applicable for a Rel11 capable device.
Line 10742: [%s]LteRrcSi_ProcSib15 :: Duplicate SIB15.
Line 10746: [%s]LteRrcSi_ProcSib15 :: The IE SIB15 contains the MBMS ServiceAreaIdentities(SAI) of the current and/ or neighbouring carrier frequencies.
Line 10793: [%s]ConvertUtcToJulian :: Year(%d) is smaller than 2000. need to check.
Line 10805: [%s]ConvertUtcToJulian :: Could not get the local time from UTC.
Line 10810: [%s]ConvertUtcToJulian :: Year:%d, Mon:%d, Day:%d.
Line 10813: [%s]ConvertUtcToJulian :: Hour:%d, Min:%d, Sec:%d, DayOfWeek:%d
Line 10841: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 10856: [%s]MEM ALLOC FAIL!!!
Line 10891: [%s]LteRrcSi_ProcSib16 :: Duplicate SIB16.
Line 10895: [%s]LteRrcSi_ProcSib16 :: The IE SIB16 contains information related to the Coordinated Universal Time(UTC).
Line 10903: [%s]CLEAR OPFLAG :(%s-%s)
Line 10920: [%s]CLEAR OPFLAG :(%s-%s)
Line 11671: [%s]pLteRrcDbMain->pTcellInfo == NULL => return
Line 11681: [%s]Invalid DbUpdateRlt (%d) => return
Line 11685: [%s]Received SIs(0x%X) in this target cell so far (0x%X)
Line 11805: [%s]SET OPFLAG :(%s-%s)
Line 11805: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11812: [%s]Tcell!=Mcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 11818: [%s]No Tcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 11833: [%s]No Mcell when Boundary Ind comes, ignore Boundary Ind
Line 11915: [%s]SET OPFLAG :(%s-%s)
Line 11915: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11923: [%s]Scell!=Mcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 11941: [%s]SET OPFLAG :(%s-%s)
Line 11941: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11948: [%s]Tcell!=Mcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 11965: [%s]No Mcell when Boundary Ind comes, ignore Boundary Ind
Line 12008: [%s]Boundary IND rxed while doing Access.. it will be pending
Line 12082: [%s]SET OPFLAG :(%s-%s)
Line 12082: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 12092: [%s]Scell!=Mcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 12110: [%s]SET OPFLAG :(%s-%s)
Line 12110: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 12117: [%s]Tcell!=Mcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 12136: [%s]No Mcell when Boundary Ind comes, ignore Boundary Ind
Line 12237: [%s]CLEAR OPFLAG :(%s-%s)
Line 12237: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 12270: [%s]Invalid State #d
Line 12304: [%s]NULL ptr argument at LteRrcSi_ProcSiModInd()
Line 12311: [%s]pCellSibDb(PCI:%d) != pLteRrcDbMain->pScellInfo(PCI:%d) in LteRrcSi_ProcSiModInd()
Line 12316: [%s]SI Modification IND via Paging
Line 12321: [%s]Paging should be pended in ACC state (implementation decision)
Line 12325: [%s]SET OPFLAG :(%s-%s)
Line 12325: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 12328: [%s]CLEAR OPFLAG :(%s-%s)
Line 12348: [%s]LTERRC_MALLOC_FAIL : FILE:%s LINE:%d FUNC:%s
Line 12356: [%s]SIB Modification is indicated again while waiting boundary
Line 12360: [%s]SIB Modification is indicated for different cell before mod boundary
Line 12420: [%s]CLEAR OPFLAG :(%s-%s)
Line 12420: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 12421: [%s]CLEAR OPFLAG :(%s-%s)
Line 12421: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 12500: [%s]Paging Msg :: ETWS not supported
Line 12504: [%s]Paging Msg :: ETWS Ind included. Start ETWS Procedure
Line 12505: [%s]SET OPFLAG :(%s-%s)
Line 12505: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 12511: [%s]Duplicate ETWS Ind. Ignore this.
Line 12515: [%s]ProcPaging - Restart SI timer.
Line 12527: [%s]Paging Msg :: CMAS not supported
Line 12531: [%s]Paging Msg :: CMAS Ind included. Start CMAS Procedure
Line 12532: [%s]SET OPFLAG :(%s-%s)
Line 12532: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 12538: [%s]Duplicate CMAS Ind. Ignore this.
Line 12542: [%s]ProcPaging - Restart SI timer.
Line 12567: [%s]Paging Msg :: EAB_MOD included. Start read SIB1.
Line 12568: [%s]SET OPFLAG :(%s-%s)
Line 12568: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 12597: [%s]Paging Record included
Line 12606: [%s]Paging should be pended in ACC state (implementation decision)
Line 12616: [%s]Paging record received just after release msg
Line 12617: [%s]SET OPFLAG :(%s-%s)
Line 12617: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 12621: [%s]Paging record received in CONN state => Trigger Force CSFB
Line 12630: [%s]Paging record received just after release msg
Line 12631: [%s]SET OPFLAG :(%s-%s)
Line 12631: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 12639: [%s]Paging record received in CONN state => Check eNB
Line 12649: [%s]Paging record received in invalid state (%d)
Line 12679: [%s]LteRrcSi_RemoveUnAvailSibCellList() is called
Line 12773: [%s]Unavailable Sib Cell Element (PCI %d) is removed 
Line 12805: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 12823: [%s]Mcell(%d)(%d) is Freed Here
Line 12828: [%s]InitMgr->pLastSibSCell is NULL now
Line 12834: [%s]InitMgr->pLastSibTCell is NULL now
Line 12944: [%s]SET OPFLAG :(%s-%s)
Line 12944: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 12950: [%s]pTcellInfo is NULL NOW
Line 13009: [%s]CLEAR OPFLAG :(%s-%s)
Line 13009: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 13101: [%s]pTcellInfo is NULL NOW
Line 13206: [%s][CheckEabStatus :: pScellInfo is NULL.
Line 13214: [%s][CheckEabStatus :: SIB14 was broadcasted but not received yet.
Line 819: [%s][MFBI] Ext(%d) Idx(%d) Update dl_earfcn(%d) instead of (%d)
Line 862: [%s][MFBI_SIB5] Ext(%d) Idx(%d) Add dl_earfcn(%d)
Line 882: [%s][MFBI_SIB5] Ext(%d) Idx(%d) Add dl_earfcn(%d)
Line 3913: [%s]Target cell ptr mismatch
Line 3929: [%s]Target cell ptr mismatch
Line 3995: [%s][DEDI_PRIORITY] BitMask(0x%x) Timestamp(%d) Duration(%d)
Line 3999: [%s][DEDI_PRIORITY] Time(%d)ms elapsed.. Ignore
Line 4016: [%s]LTERRC_TMR_SET_CONFIGVAL(%d,%d)
Line 6439: [%s]Not CellReservedForOperatorUse in SIB1
Line 6447: [%s]Reserved PLMN found with EPLMN in SIB1
Line 6451: [%s]Forbidden TAI found with EPLMN in SIB1
Line 6456: [%s]No matched PLMN with EPLMN in SIB1
Line 6896: [%s]SelectedPlmn: FromMM %x, FromPrevGenCellInd %x
Line 6904: [%s]checking and Trying this cell for CDMA mobility
Line 6916: [%s]This cell does not support CDMA. Try other cell for CDMA mobility
Line 6950: [%s]Hplmn Priority Srch : EHPLMN/HPLMN is selected
Line 6964: [%s]Hplmn Priority Srch : RPLMN is selected
Line 6980: [%s]Hplmn Priority Srch : EPLMN is selected
Line 6990: [%s]Try primary PLMN ID as selected PLMN ID.
Line 7020: [%s]Hplmn Priority Srch : HPLMN found in EPLMN list
Line 7057: [%s]This cell does not support IMS-Emergency. Try other cell for EMC call (%d)(%d)
Line 7108: [%s]plmn_srch_type from MM is LTE_RRC_AVLB_PLMN_SRCH_REQ
Line 7118: [%s]CellReservedForOperatorUse in SIB1
Line 7164: [%s]ImsEmergencySupport(%d) VoiceDomainPref(%d) EMC_Test(%d) 
Line 7185: [%s]This cell does not support IMS-Emergency. Try other cell in Limited Service (%d)(%d)
Line 7201: [%s]Not CellReservedForOperatorUse in SIB1
Line 7208: [%s]LteRrcSi_CheckPlmnAvailability :: MocnPreferred
Line 7219: [%s]MOCN Selected PlmnId (%d %d %d %d %d %d)
Line 12458: [%s]SI Modification Ind included
Line 12463: [%s]Duplicate SI Modification Ind => Ignore
