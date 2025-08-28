Line 46: RrmSubBlkMeasResultMsg::RrmSubBlkMeasResultMsg()
Line 52: RrmSubBlkMeasResultMsg::~RrmSubBlkMeasResultMsg()
Line 57: RrmSubBlkMeasResultMsg::Init()
Line 67: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfIntraevalrc - 
Line 89: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfIntraevalrc - PCellClsPtr of CellGroup(%d) is NULL
Line 108:    >>Ignore intra - empty IntraFreqInfo
Line 115:    >>Ignore intra - MeasObjectNR is not configured for Pcell(objid:%d)
Line 120:    >>IntraFreq Arfcn(%d)
Line 125:    >>IntraFreq objid(%d)
Line 135:      ::Periodical_ssb - MeasId(%d) reportConfigId(%d)
Line 140:      ::Periodical_csi_rs MeasId(%d) reportConfigId(%d)
Line 148:      ::eventTriggered_ssb MeasId(%d) reportConfigId(%d)
Line 153:      ::eventTriggered_csi_rs MeasId(%d) reportConfigId(%d)
Line 161:      ::condTriggerConfig MeasId(%d) reportConfigId(%d)
Line 166:      ::condTriggerConfig MeasId(%d) reportConfigId(%d)
Line 178: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfIntraevalrc - ServingCell do not have MeasID. Send cell result only
Line 187:    >>pMsgMeasResultPerMo[%d] is nullptr, MsgGrpId [%d]
Line 213: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfIntraevalrc - MoCount(%d), MeasID(%d), ObjectId(%d), SsbFreqPresent(%d), SsbFreq(%d)
Line 222: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfIntraevalrc - MoCount(%d), MeasID(%d), ObjectId(%d), RefFreqCsiRsPresent(%d), RefFreqCsiRs(%d)
Line 234: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfIntraevalrc - MeasResultServCellPresent %d
Line 243: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfIntraNeighCell
Line 254: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfIntraevalrc - PCellClsPtr of CellGroup(%d) is NULL
Line 277: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfIntraevalrc - continue. pCellInfo is NULL. making NeighCellList
Line 285: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfIntraevalrc - continue. pCellInfo is Sevingcell. Arfcn(%d) CellId(%d) SubCarrierSpacing(%d)
Line 289: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfIntraevalrc - NeighCell PhysCellId(%d)
Line 297: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfIntraevalrc - MeasResultNeighCellCnt(%d)
Line 305: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfNonIntraevalrc - 
Line 333: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfNonIntraevalrc - MoCount is not valid - MoCount(%d) NRRRCDB_MAX_FREQ(%d)
Line 342: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfNonIntraevalrc - PCellClsPtr of CellGroup(%d) is NULL
Line 355: InterFreq Arfcn(%d)
Line 360:    >>InterFreq objid(%d)
Line 363:    >>InterFreq(%d) objid(%d) is not valid. IntraFreq objid(%d)
Line 378:      ::Periodical_ssb - MeasId(%d) reportConfigId(%d)
Line 383:      ::Periodical_csi_rs MeasId(%d) reportConfigId(%d)
Line 391:      ::eventTriggered_ssb MeasId(%d) reportConfigId(%d)
Line 396:      ::eventTriggered_csi_rs MeasId(%d) reportConfigId(%d)
Line 404:      ::condTriggerConfig MeasId(%d) reportConfigId(%d)
Line 409:      ::condTriggerConfig MeasId(%d) reportConfigId(%d)
Line 418: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfNonIntraevalrc - InterFreq(%d) objid(%d) does not have MeasInfo
Line 424:    >>pMsgMeasResultPerMo[%d] is nullptr MsgGrpId [%d]
Line 436: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfNonIntraevalrc - MoCount(%d), MeasID(%d), ObjectId(%d), SsbFreqPresent(%d), SsbFreq(%d)
Line 445: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfNonIntraevalrc - MoCount(%d), MeasID(%d), ObjectId(%d), RefFreqCsiRsPresent(%d), RefFreqCsiRs(%d)
Line 458: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfEutra - 
Line 481:  EutraMoCount is not valid - EutraMoCount(%d) NRRRCDB_MAX_FREQ(%d)
Line 488: Eutra Arfcn(%d) EutraMoCount:%d objid:%d
Line 536: 	 >>measResultNeighCell[%d] - EutraFreq:%d PhysCellId:%d CellResults Rsrp:%d Rsrq:%d Sinr:%d
Line 542:    >>cellMeasResult.isValid == FALSE
Line 557: 	>>Total Cell:%d
Line 577: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfNonIntraNeighCell
Line 588: MoCount is not valid - MoCount(%d) NRRRCDB_MAX_FREQ(%d)
Line 597: PCellClsPtr of CellGroup(%d) is NULL
Line 624: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfNonIntraevalrc - pCellInfoe is NULL
Line 633: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfNonIntraevalrc - pCellInfo is Sevingcell Arfcn(%d) CellId(%d) SubCarrierSpacing(%d)
Line 637: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfNonIntraevalrc - PhysCellId(%d)
Line 646: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfNonIntraevalrc - MeasResultNeighCellCnt(%d)::_evalrc_
Line 651: RrmSubBlkMeasResultMsg::MakeNrMeasResultCnfNonIntraevalrc - Max Freq! MoCount(%d) NRRRCDB_MAX_FREQ(%d)
