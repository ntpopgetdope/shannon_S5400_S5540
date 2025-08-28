Line 45: RrmSubBlkConnEvalNr::RrmSubBlkConnEvalNr()
Line 51: RrmSubBlkConnEvalNr::~RrmSubBlkConnEvalNr()
Line 81: NULL ptr
Line 85:    >>NrRrm_CheckNeighborCellEventTrigger::MeasID(%d)
Line 97:      ::Checking Neighbor EventId_A3 A3Offset.Choice(%d)-::_eval_
Line 106:      ::Checking Neighbor EventId_A4 A4Threshold.Choice(%d)-::_eval_
Line 117:      ::Checking Neighbor EventId_A5 A5Threshold1.Choice(%d), A5Threshold2.Choice(%d)-::_eval_
Line 125: 	  ::Event6A Evaluation (Neighbour becomes offset better than SCell)-::_eval_
Line 132:    >>NrRrm_CheckNeighborCellEventTrigger::empty EventIdChoice::_eval_
Line 139:    >>After CheckNeighborCellEventTrigger::NR_RRM_EVENT_ENTER::MeasID(%d), NCellID(%d), SpCellID(%d)-::_eval_
Line 143:    >>After CheckNeighborCellEventTrigger::NR_RRM_EVENT_STAY::MeasID(%d), NCellID(%d), SpCellID(%d)-::_eval_
Line 147:    >>After CheckNeighborCellEventTrigger::NR_RRM_EVENT_LEAVE::MeasID(%d), NCellID(%d), SpCellID(%d)-::_eval_
Line 151:    >>After::CheckNeighborCellEventTrigger::NR_RRM_EVENT_NONE::EventStatus(%d)-::_eval_
Line 159: 	>> Force to set to EVENT_NONE(%d) for unreliable SCell(Arfcn:%d, Pcid:%d) as neighbor cell from PCell
Line 166: 	>> Force to set to EVENT_NONE(%d) due to low rssinr(%d) - threshold(%d)
Line 177:    >>NrRrm_EvaluatePCellMeasureResult._eval_ m_MsgGrpId %d
Line 194:    >>NrRrm_EvaluatePCellMeasureResult - PCellClsPtr of CellGroup(%d) is NULL::_eval_
Line 203:    >>NrRrm_EvaluatePCellMeasureResult - MeasInfo for ObjId(%d) is not found::_eval_
Line 260:    >>ProcMeasResult - reportType has unknown choice value (%d)::_eval_
Line 272:    >>NrRrm_EvaluateIntraNCellMeasureResult::_eval_ m_MsgGrpId %d
Line 295:    >>NrRrm_EvaluateIntraNCellMeasureResult - PCellClsPtr of CellGroup(%d) is NULL::_eval_
Line 304:    >>NrRrm_EvaluateIntraNCellMeasureResult - PCellFreqPtr of MasterCellGroupId is invalid::_eval_
Line 308:    >>IntraFreq Arfcn(%d)::_eval_
Line 314:    >>IntraFreq objid(%d)::_eval_
Line 326:      ::MeasId(%d) EventId(%d) skip neighborcell
Line 335:    >>IntraFreq IDLISTEDCELLSET::_eval_
Line 339:    >>IntraFreq IDLISTEDCELLSET is NULL::_eval_
Line 369:    >>IntraFreq IDDETECTEDCELLSET::_eval_
Line 373:    >>IntraFreq IDDETECTEDCELLSET is NULL::_eval_
Line 413:    >>NrRrm_EvaluateInterNCellMeasureResult::_eval_ m_MsgGrpId %d
Line 438:    >>NrRrm_EvaluateInterNCellMeasureResult::ServingCell is not::_eval_
Line 445:      ::IntraFreq Arfcn(%d)::_eval_
Line 459:      ::InterFreq Arfcn(%d)::_eval_
Line 474: RrmSubBlkConnEvalNr::NrRrm_EvaluateSCellServingMeasureResult::_eval_ FixedPoint(%d) m_MsgGrpId(%d)
Line 505:      ::SCell (Arfcn %d SCS %d PhyCellId %d) Evaluation 
Line 514:      ::MeadId[%d] MeasObjId[%d]
Line 532: RrmSubBlkConnEvalNr::ProcMeasResult - FixedPoint(%d) -> skip EventTriggered(A1,A2) Evaluation ::_eval_
Line 553: 	>> Force to set A1 EVENT_NONE(%d) for unreliable SCell(Arfcn:%d, Pcid:%d)
Line 580:      ::ProcMeasResult - reportType has unknown choice value (%d)::_eval_
Line 597:      ::ProcMeasResult - pServCellGroupInfoNr is NULL::_eval_
Line 604:    >>NrRrm_EvaluateSCellEventTrigger::_eval_
Line 624:      ::NRRRCDB_EventId_A3 Evaluation::_scell_eval_
Line 636:      ::NRRRCDB_EventId_A4 Evaluation::_scell_eval_
Line 637:      ::IDLISTEDCELLSET::_scell_eval_
Line 649:      ::NRRRCDB_EventId_A5 Evaluation::_scell_eval_
Line 661:      ::NRRRCDB_EventId_A6 Evaluation::_scell_eval_
Line 696:    >>NrRrm_EvaluateSCellMeasInfo::_scell_eval_ m_MsgGrpId %d
Line 716:    >>Error: Invalid(NULL) pointer
Line 725: 	>>No valid SCell found at this frequency(Freq%d,SCS%d)!::_scell_eval_
Line 737: 	>>Start Evaluation for SCell with IDLISTEDCELLSET of SCell-F NCell
Line 749: 	>>Start Evaluation for SCell with IDDETECTEDCELLSET of SCell-F NCell
Line 764:    >>NrRrm_EvaluatePSCellNeighborEvent::_scell_eval_ m_MsgGrpId %d
Line 781:    >>Error: Invalid(NULL) pointer
Line 802:    >>No valid SCell found at this frequency(Freq%d,SCS%d)!::_scell_eval_
Line 811:    >>Start Evaluation for SCell as Neighbor of PCell first
Line 819:      ::Skip evaluation of Scell(%d, %d) in case of A4 MR
Line 823:    >>Start Evaluation for SCell with IDLISTEDCELLSET of SCell-F NCell
Line 835:    >>Start Evaluation for SCell with IDDETECTEDCELLSET of SCell-F NCell
Line 850: RrmSubBlkConnEvalNr::NrRrm_EvaluateSCellNCellMeasureResult::_eval_ FixedPoint(%d) m_MsgGrpId %d
Line 878:    >>SCellFreq list is empty!!!! Nothing to do evaluate, just return in this function!::_scell_eval_
Line 884:    >>GetFirstSCellFreqPtr return NULL!!!! There are no SCellFreq::_scell_eval_
Line 888:    >>SCellFreq Arfcn(%d)::_scell_eval_
Line 896:      ::objid(%d)::_scell_eval_
Line 902:      ::MeasId(%d)::_scell_eval_
Line 936:    >>ProcMeasResult m_MsgGrpId %d
Line 957:      ::ProcMeasResult - rArfcn(%d) Intra Arfcn(%d)
Line 963:      ::ProcMeasResult - FixedPointFreq is setting
Line 969:      ::ProcMeasResult - PCellFreqPtr of MasterCellGroupId is invalid::_eval_
Line 977:      ::ProcMeasResult - RegFIXEDCellId(%d) ServingCellId(%d)
Line 980:      ::ProcMeasResult - rArfcn(%d) ServCellInfoArfcn(%d)
Line 989:      ::ProcMeasResult - FixedPoint(%d) is setting
Line 998:      ::ProcMeasResult - FixedPoint(%d) is setting
Line 1005:      ::ProcMeasResult - PCellClsPtr of CellGroup(%d) is NULL::_eval_
Line 1010: 	  ::ProcMeasResult - rSkipScellMR(%d)
Line 1017:      ::ProcMeasResult - FixedPointFreq(%d) FixedPointPcid(%d) FixedPointSkipScellMR(%d)
Line 1030:    ::ProcMeasResult - Skip evaluation cause MeasReportStatus(%d) or FakeMR Triggered(%d)
Line 1056: RrmSubBlkConnEvalNr::ProcMeasResult - FixedPointPcid(%d) SMeasureCondition(%d), ModemStatus(%d) ue can not perform measurements on non-serving cells
Line 1071: RrmSubBlkConnEvalNr::ProcMeasResult -  SMeasureCondition(%d), ModemStatus(%d) ue can not perform measurements on non-serving cells
Line 1093:    >>[N2L] Skip EvaluateEutra due to no EUTRA Frequency
Line 1107:    >>[N2L]Start Evaluation EUTRA Freq Arfcn(%d)
Line 1110:    >>[N2L]EUTRA Freq objid(%d)
Line 1117:      ::[N2L] MeasID[%d] Check EUTRA FREQ IDLISTED CELLSET
Line 1122:        #[N2L]EutraCellInfo IDLISTED CELLSET is empty
Line 1130:        #[N2L] MeasId[%d] Check EUTRA IDDETECTED CELLSET, CunTime %d
Line 1135:        #[N2L] EUTRA IDDETECTED CELLSET is empty
Line 1153:        #periodical NR_RRM_EVENT_ENTER::reportTriggered(%d)::MeasID(%d) ReportAmount(%d)-::_eval_
Line 1166:      ::[N2L][INITSM_C] Remove CellListTimeToTrigger except Best
Line 1189:      ::[N2U] Skip EvaluateUtra due to no UTRA Frequency
Line 1205:      ::[N2U]Start Evaluation UTRA Freq Arfcn(%d) objid(%d)
Line 1211:        #[N2U] MeasID[%d] Check UTRA FREQ IDLISTED CELLSET
Line 1216:        #[N2U]pUtraCellInfo IDLISTED CELLSET is NULL
Line 1251:      ::[N2U] Unexpected value for pMeasInfo->ReportConfig.ReportConfigInterRAT.Choice (%d)
Line 1270:        #periodical NR_RRM_EVENT_ENTER::reportTriggered(%d)::MeasID(%d) ReportAmount(%d)-::_eval_
Line 1347: RrmSubBlkConnEvalNr::MakeNrMeasResultCnfMsg - 
Line 1372: Intra + Inter NumMoList Count %d , NumScgMoList count %d 
Line 1373: Eutra NumMoList Count %d , NumScgMoList count %d 
Line 1381:    >>CheckMrTriggered::_eval_ m_MsgGrpId %d
Line 1394:      ::InterFreq objid(%d)::_eval_
Line 1406:      ::NrRrm_EvaluateIntraNCellMeasureResult - MeasId(%d) EventId(%d) skip neighborcell
Line 1415:      ::InterFreq IDLISTEDCELLSET::_eval_
Line 1420:      ::InterFreq IDLISTEDCELLSET is NULL::_eval_
Line 1451:      ::InterFreq IDDETECTEDCELLSET::_eval_
Line 1455:      ::InterFreq IDDETECTEDCELLSET is NULL::_eval_
Line 1492: 	  ::Skip UlDelay MR periodical MeasID(%d) ReportAmount(%d)
Line 1500:      ::periodical NR_RRM_EVENT_ENTER::reportTriggered(%d)::MeasID(%d) ReportAmount(%d)-::_eval_
Line 1511:    >>UpdateSmeasureConditionFlag m_MsgGrpId %d
Line 1536:      ::CellMeasureResult Rsrp:%d[/100dBm] sMeasureConfig.sMeasureRsrp:%d[/100dBm]
Line 1540:        #In Smeasure condition
Line 1545:        #No Smeasure condition
Line 1647:    >>CheckStateForReport
Line 1668:    ::CheckStateForReport - MeasID(%d) VarMeasReportList.reportTriggered(%d)
Line 1677:      ::reportTriggered is True::MeasID(%d), numberOfReportsSent(0)::_eval_
Line 1680:      ::First send::MeasID(%d), PeriodicalReportInterval(%d)::_eval_
Line 1685: PeriodicalReportInterval::reportTriggered is True::MeasID(%d)::_eval_
Line 1687: Report on Leave is true send event for MeasID(%d), PeriodicalReportInterval(%d)::_eval_
Line 1691:      ::reportTriggered is True::MeasID(%d), TimeDiff(%d)::_eval_
Line 1694:      ::PeriodicalReportInterval(%d)::_eval_
Line 1698:      ::reportTriggered is false::MeasID(%d), TimeDiff(%d)::_eval_
Line 1702:      ::RemainTime(%d)::_eval_
Line 1721:    >>RemoveCellInVarMeasReportList m_MsgGrpId %d
Line 1725: pTargetCell is NULL
Line 1744:    >> MeasId:%d is not related with SSB or CSI-RS
Line 1760:    >>Remove Arfcn(%d) CellId(%d) in TimeToTriggerList MeasId(%d)
Line 1775:    >>RemoveEutraCellInVarMeasReportList m_MsgGrpId %d
Line 1779: pTargetCell is NULL
Line 1798:    >> MeasId:%d is not related with EUTRA
Line 1812:    >>Remove EUTRA Arfcn(%d) CellId(%d) in TimeToTriggerList MeasId(%d)
Line 1826:    >>RemoveUtraCellInVarMeasReportList m_MsgGrpId %d
Line 1830: pTargetCell is NULL
Line 1849:    >> MeasId:%d is not related with UTRA
Line 1863:    ::Remove UTRA Arfcn(%d) CellId(%d) in TimeToTriggerList MeasId(%d)
Line 1881: NULL ptr
Line 1885:    >>NrRrm_CheckEventTriggerCondHo::MeasID(%d)
Line 1891:    >>Checking Neighbor CondEventA3 A3Offset.Choice(%d)-::_eval_
Line 1902:    >>Checking Neighbor CondEventA5 a5Threshold1.Choice(%d), a5Threshold2.Choice(%d)-::_eval_
Line 1909:    >>NrRrm_CheckEventTriggerCondHo::empty EventIdChoice::_eval_
Line 1916:    >>After CheckNeighborCellEventTrigger::NR_RRM_EVENT_ENTER::MeasID(%d), NCellID(%d), SpCellID(%d)-::_eval_
Line 1920:    >>After CheckNeighborCellEventTrigger::NR_RRM_EVENT_STAY::MeasID(%d), NCellID(%d), SpCellID(%d)-::_eval_
Line 1924:    >>After CheckNeighborCellEventTrigger::NR_RRM_EVENT_LEAVE::MeasID(%d), NCellID(%d), SpCellID(%d)-::_eval_
Line 1928:    >>After::CheckNeighborCellEventTrigger::NR_RRM_EVENT_NONE::EventStatus(%d)-::_eval_
Line 1970:    >>[N2L] Unexpected value for pMeasInfo->ReportConfig.ReportConfigInterRAT.Choice (%d)
