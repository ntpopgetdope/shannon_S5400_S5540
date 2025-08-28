Line 91:    >>RrmNrSprcd_RRM_RRC_IDLE_MEAS_CONFIG_REQ::RRM_RRC_IDLE_MEAS_CONFIG_REQ_Hdlr
Line 138:    >>RrmNrSprcd_RRM_RRC_FEDV_STATE_IND::RRM_RRC_FEDV_STATE_IND_Hdlr
Line 142:      ::IsFeDvOn:%d
Line 224:    >>RRM_RRC_LOW_PWR_MODE_IND_Hdlr
Line 240:      ::IdleTempCtrl:%d ConnTempCtrl:%d Fr2TempCtrl:%d LowLayerTempCtrl:%d Cause:%d
Line 242:      ::MeasReportStatus:%d (0:possible 1:impossible)
Line 259:      #ERROR during SMPF_NEW for L1C_RRM_LOW_PWR_MODE_IND_T
Line 290:      ::MeasId(%d) ObjId(%d) for NRRRCDB_EventId_A2 Found at MeasInfoList!!!!
Line 312:        #Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_rsrp
Line 321:        #Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_rsrq
Line 330:        #Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_sinr
Line 339:         #Evaluation Quantity is Unknown!!!! Use NRRRCDB_MeasTriggerQuantityOffset_rsrp as default Quantity
Line 351: Fake A2 Evnet on LOW PWR
Line 364:        #Memory Alloc Error!!!!
Line 370:        #MeasId(%d) ObjId(%d) is not for SERVINGCELL EVENT_A2
Line 371:        #ReportConfigNR.Choice(%d) (0:Periodic, 1: EventTriggered)
Line 375:        #ReportConfig.ReportConfigNR.ReportType.EventTriggered.EventIdChoice(%d) (NRRRCDB_EventId_A2: 2)
Line 385:      ::invalid pServingCellInfo
Line 427:    >>RrmNrSprcd_RRM_L1C_BPLMN_HOLD_IND::RRM_L1C_BPLMN_HOLD_IND_Hdlr
Line 437:      ::BplmnRunState is BPLMNRUNSTATE_NONE. Do not send RRC_RRM_BPLMN_HOLD_IND
Line 482:    >>RrmNrSprcd_RRM_RRC_MEAS_RESULT_REQ::RRM_RRC_MEAS_RESULT_REQ_Hdlr MeasReqType (enum)%d
Line 539:    >>RrmNrSprcd_RRM_RRC_RESEL_INFO_IND::RRM_RRC_RESEL_INFO_IND_Hdlr
Line 584:    >>RrmNrSprcd_RRM_RRC_SIB_UPDATE_REQ::RRM_RRC_SIB_UPDATE_REQ_Hdlr
Line 636:    >>RrmNrSprcd_RRM_RRC_UPDATE_MEAS_REPORT_STATUS_IND_Hdlr - MeasReportStatus:%d LowPwrMode:%d
Line 646:      ::CanNot AllocMsg about RRM_RRC_LOW_PWR_MODE_IND
Line 704:    >>RRM_L1C_CGI_HOLD_IND_Hdlr - AnrRunState(%d)
Line 753:    >>RRM_RRC_RRM_CONFIG_IND_Hdlr : NE-DC setup(%d) earfcn(%d) cell ID(%d)
Line 837: 		#Intra freq:%d CSI IDListed CellId:%d MO:%d index:%d 
Line 853: 		#Intra freq:%d SSB IDDetected CellId:%d MO:%d index:%d 
Line 886: 		#Inter freq:%d CSI IDListed CellId:%d MO:%d index:%d 
Line 902: 		#Inter freq:%d SSB IDDetected CellId:%d MO:%d index:%d 
Line 940: 		#Scell freq:%d CSI IDListed CellId:%d MO:%d index:%d 
Line 979:        #Intra freq:%d IDListed CellId:%d MO:%d index:%d 
Line 992:        #Intra freq:%d IDDetected CellId:%d MO:%d index:%d 
Line 1012:        #Inter freq:%d IDListed CellId:%d MO:%d index:%d 
Line 1025:        #Inter freq:%d IDDetected CellId:%d MO:%d index:%d 
Line 1054:        #Scell freq:%d IDListed CellId:%d MO:%d index:%d 
Line 1068:        #Scell freq:%d IDDetected CellId:%d MO:%d index:%d 
Line 1110:        #Intra freq:%d CSI IDListed CellId:%d MO:%d index:%d 
Line 1130:        #Inter freq:%d CSI IDListed CellId:%d MO:%d index:%d 
Line 1157:        #Scell freq:%d CSI IDListed CellId:%d MO:%d index:%d 
Line 1174: 	>>RRM_L1C_POS_MEAS_RESULT_IND_Hdlr
Line 1180: 	  ::MSG TranId:%d bit_mask:%d
Line 1201:    >>ABORT_IND for transactionNumber:%d reportingAmount:%d will come
Line 1210: 	>>pServingCell is NULL
Line 1220: 	  ::Pcell:%d meas result input 
Line 1238: 	  ::No ECID config
Line 1243: 	>>Update ECID NcellCnt:%d
Line 1277: RRM_RRC_IMS_SERVICE_STATUS_IND_Handler - NrImsStatus(%d), VoNR(%d)
Line 1353: RrmNrProcPrcd_RRM_L1C_POS_MEAS_RESULT_IND::RRM_RRC_POS_MEAS_ABORT_IND_Hdlr
Line 1400: RrmNrProcPrcd_RRM_L1C_POS_MEAS_STOP_IND::RRM_RRC_POS_MEAS_STOP_IND_Hdlr
Line 1448:    >>RRM_RRC_POS_MEAS_RESULT_IND_Hdlr
