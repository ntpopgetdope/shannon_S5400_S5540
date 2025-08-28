Line 83: RrmNrPrcdMeasConfig::PreHdlr
Line 105: ######################PrintVarMeasConfig######################
Line 113:    >>MeasObjAddModedListIdx 0x%x%x MeasObjRemovedListIdx 0x%x%x MeasObjListIdx 0x%x%x
Line 118:    >>ReportConfigAddModedListIdx 0x%x%x ReportConfigRemovedListIdx 0x%x%x ReportConfigListIdx 0x%x%x
Line 123:    >>MeasIdAddModedListIdx 0x%x%x MeasIdRemovedListIdx 0x%x%x MeasIdListIdx 0x%x%x
Line 130: ##########################################################
Line 135:    >>PrintMeasIdAddModedList
Line 150:      ::pVarMeasConfig->MeasIdList[%d] ==> MeasId(%d) MeasObjectId(%d) ReportConfigId(%d)
Line 158:    >>PrintMeasObjAddModedList
Line 172:      ::pVarMeasConfig->MeasObjListIdx[%d].Choice %d (1:NR, 2:EUTRA, 3:CLI, 4:UTRA)
Line 177:        #pVarMeasConfig->MeasObjListIdx[%d].MeasObjId %d
Line 179:        #pVarMeasConfig->MeasObjList[%d]->MeasObj.MeasObjectNR.SsbFreqPresent %d
Line 184:        #pVarMeasConfig->MeasObjList[%d]->MeasObj.MeasObjectNR.SsbFreq %d
Line 189:        #pVarMeasConfig->MeasObjList[%d]->MeasObj.MeasObjectNR.SsbSubcarrierSpacing %d
Line 193:        #FreqBandIndicatorNRV1530Present:(bool)%d
Line 197:        #FreqBandIndicatorNRV1530:%d
Line 201:        #FreqBandIndicatorNRV1530Present:(bool)%d
Line 206:        #PPowerClass:%d
Line 210:        #pVarMeasConfig->MeasObjList[%d]->MeasObj.MeasObjectNR.Smtc1Present %d
Line 213:        #pVarMeasConfig->MeasObjList[%d]->MeasObj.MeasObjectNR.Smtc2Present %d
Line 216:        #pVarMeasConfig->MeasObjList[%d]->MeasObj.MeasObjectNR.RefFreqCsiRsPresent %d
Line 221:        #pVarMeasConfig->MeasObjList[%d]->MeasObj.MeasObjectNR.RefFreqCsiRs %d
Line 228:      ::pVarMeasConfig->MeasObjListIdx[%d].MeasObjId %d
Line 230:        #pVarMeasConfig->MeasObjList[%d]->MeasObj.MeasObjectUTRAFddR16.CarrierFreqR16 %d
Line 232:        #pVarMeasConfig->MeasObjList[%d]->MeasObj.MeasObjectUTRAFddR16.UtraFddQOffsetRangeR16 %d
Line 244:    >>PrintReportConfigAddModedList
Line 263:      ::pVarMeasConfig->ReportConfigList[%d].ReportConfig.ReportConfigInterRAT.Choice %d
Line 264:      ::pVarMeasConfig->ReportConfigList[%d].ReportConfigId %d
Line 268:        #Choice - NRRRCDB_ReportConfigInterRAT_reportType_periodical
Line 272:        #Choice - NRRRCDB_ReportConfigInterRAT_reportType_eventTriggered
Line 276:        #EVENT_B1
Line 280:        #EVENT_B2
Line 284:        #Not Supported EventIdChoice!!!!
Line 290:        #Choice - NRRRCDB_ReportConfigInterRAT_reportType_reportCGI
Line 294:        #Not Supported ReportConfig Choice!!!!
Line 298:      ::pVarMeasConfig->ReportConfigList[%d].ReportConfig.ReportConfigInterRAT.Choice %d
Line 299:      ::pVarMeasConfig->ReportConfigList[%d].ReportConfigId %d
Line 303:        #Choice - NRRRCDB_ReportConfigInterRAT_reportType_periodical
Line 307:        #Choice - NRRRCDB_ReportConfigInterRAT_reportType_eventTriggered
Line 311:        #EVENT_B1
Line 315:        #EVENT_B2
Line 319:        #EVENT_B1 for UTRA
Line 323:        #EVENT_B2 for UTRA
Line 327:        #Not Supported EventIdChoice!!!!
Line 333:        #Choice - NRRRCDB_ReportConfigInterRAT_reportType_reportCGI
Line 337:        #Not Supported ReportConfig Choice!!!!
Line 348:    >>ProcCheckGapConfig
Line 382:    >>ProcSendMeasConfigCnf (%d)
Line 394:    >>CanNot AllocMsg about RRM_RRC_LOW_PWR_MODE_IND
Line 417:    >>RRM_RRC_MEAS_CONFIG_REQ_Hdlr
Line 442:    >>RRM_RRM_MEAS_STATE_CNF_Hdlr
Line 481:      ::InitializeVarMeasConfigPtr
Line 488:      ::SetVarMeasConfigPtr
Line 496:      ::RRM_L1C_GAP_CONFIG_CNF_Hdlr
Line 518:      ::ConfigureGapConfigMsg
Line 529:        #Conn gap configured(UE) - GapOffset:%d Mgl:%d(enum) Mgrp:%d(enum) Mgta:%d(enum) SetupReleaseChoice:%d
Line 539:        #Conn gap configured(FR1) - GapOffset:%d Mgl:%d(enum) Mgrp:%d(enum) Mgta:%d(enum) SetupReleaseChoice:%d
Line 549:        #Conn gap configured(FR2) - GapOffset:%d Mgl:%d(enum) Mgrp:%d(enum) Mgta:%d(enum) SetupReleaseChoice:%d
Line 559:      ::pVarMeasConfig->ReportConfigList[%d].ReportConfig.ReportConfigInterRAT.Choice %d
Line 560:      ::pVarMeasConfig->ReportConfigList[%d].ReportConfigId %d
Line 564:        #Choice - NRRRCDB_ReportConfigInterRAT_reportType_periodical
Line 568:        #Choice - NRRRCDB_ReportConfigInterRAT_reportType_eventTriggered
Line 569:        #EventIdChoice %d
Line 574:          *EVENT_B1
Line 578:          *EVENT_B2
Line 582:        #Not Supported EventIdChoice!!!!
Line 588:        #Choice - NRRRCDB_ReportConfigInterRAT_reportType_reportCGI
Line 592:        #Not Supported ReportConfig Choice!!!!
Line 599:      ::pVarMeasConfig->ReportConfigList[%d].ReportConfig.ReportConfigNR.Choice %d
Line 600:      ::pVarMeasConfig->ReportConfigList[%d].ReportConfigId %d
Line 604:        #Choice - NRRRCDB_ReportConfigNR_reportType_periodical
Line 608:        #Choice - NRRRCDB_ReportConfigNR_reportType_eventTriggered
Line 609:        #EventIdChoice %d
Line 614:        #EventId_A1
Line 618:        #EventId_A2
Line 622:        #EventId_A3
Line 626:        #EventId_A4
Line 630:        #EventId_A5
Line 634:        #EventId_A6
Line 638:        #Not Supported EventIdChoice!!!!
Line 644:        #Choice - NRRRCDB_ReportConfigNR_reportType_condTriggerConfig
Line 645:        #EventIdChoice %d
Line 650:        #CondEvent_A3
Line 654:        #CondEvent_A5
Line 658:        #Not Supported EventIdChoice!!!!
Line 664:        #Choice - NRRRCDB_ReportConfigNR_reportType_reportCGI
Line 668:        #Not Supported ReportConfig Choice!!!!
