Line 93: This PBD can't be run in ENDC mode
Line 98: This PBD can't be run in RRC_STATE_INIT.
Line 103: Remove Defer(RRC_RRM_RESEL_EVAL_IND)
Line 143: m_CurService == MSService_INVALID
Line 149: %s
Line 155: [NRCELL][RESEL] m_ConfiguredStatus 0x%x 
Line 162: [NRCELL][RESEL] m_WaitCnfMsg RESEL_STATUS_RAT_SUSPEND
Line 166: [NRCELL][RESEL] m_WaitCnfMsg RESEL_STATUS_IRAT_CHANGE
Line 170: [NRCELL][RESEL] m_WaitCnfMsg RESEL_STATUS_L2_CONFIG
Line 174: [NRCELL][RESEL] m_WaitCnfMsg RESEL_STATUS_PHY_CONFIG
Line 178: [NRCELL] No waiting message. terminate current procedure 
Line 221: CheckNodeCondition:  Receive RESEL_EVAL_IND
Line 245: CheckNodeCondition:  Have To IRAT reselection
Line 251: CheckNodeCondition:  NR reselection
Line 272: CheckNodeCondition: HaveToEssentialSiAcq
Line 288: CheckNodeCondition: Node_CELL_RESEL_LOOP_RetryCellConfigReq : DO LOOP!!
Line 303: CheckNodeCondition: CELL_RESEL_OPT_CellConfigCnf_Result : Success
Line 310: CheckNodeCondition : Invalid CheckNode(%d)
Line 316: CheckNodeCondition: UserHandler CheckNode(%d) Result(%d)
Line 320: CheckNodeCondition: CurNode(%d) CheckNode(%d) Result(%d)
Line 343: CheckNodeAndSendNextMsg : Node_CELL_RESEL_OPT_ReceiveRESEL_EVAL_IND Condition(%d)
Line 358: CheckNodeAndSendNextMsg : Node_CELL_RESEL_OPT_IsIRATreselection Condition(%d)
Line 372: [RRC][RESEL] TargetRat %d
Line 372: [RRC][RESEL] TargetRat %d
Line 402: CheckNodeAndSendNextMsg : Node_CELL_RESEL_OPT_HaveToEssentialSiAcq Condition(%d)
Line 407: [NRCELL][RESEL]There is no Cell!!!
Line 419: CheckNodeAndSendNextMsg : Node_CELL_RESEL_LOOP_RetryCellConfigReq Condition(%d)
Line 434: CheckNodeAndSendNextMsg : Node_CELL_RESEL_OPT_CellConfigCnf_Result Condition(%d)
Line 446: CheckNodeAndSendNextMsg : Resel fail, Termanate procedrue
Line 457: %s
Line 463: [RRC][IRAT] Irat RESEL result %d
Line 463: [RRC][IRAT] Irat RESEL result %d
Line 469: [NRCELL][RESEL] PbdState is PBD_STATE_ABORTING 
Line 478: CheckNodeAndSendNextMsg : RRC_MM_IRAT_CHANGE_CNF SUCCESS!!, Termanate Cell resel procedure
Line 504: %s
Line 509: [NRCELL][RESEL] RRM RAT state : %d
Line 516: [NRCELL][RESEL] RRC RAT state : %d
Line 520: CheckNodeAndSendNextMsg : N2L Resel fail, Terminate procedrue
Line 531: %s
Line 542: %s
Line 547: [NRCELL][RESEL] RRM RAT state : %d
Line 550: [NRCELL][RESEL] RRC RAT state : %d
Line 555: [NRCELL][RESEL] PbdState is PBD_STATE_ABORTING 
Line 572: Resolve the deferred messages
Line 593: [NRCELL][RESEL] CELL_ACQ_REQ_Hdlr Band:%d Arfcn:%d CellID:%d RSRP:%d RSRQ:%d
Line 602: [NRCELL][RESEL]CurentCellConfigInfo update by Cell_Acq_Req!! Band:%d Arfcn:%d SCS:%d
Line 615: [NRCELL][RESEL] RRC_RRM_BCH_CONFIG_CNF result:%d
Line 629: [NRCELL][RESEL] RRC_RRC_SIB1_IND
Line 638: [NRCELL][RESEL] RRC_TIMER_NR_TSIB1_EXPIRY_IND
Line 656: [NRCELL][RESEL] RRC_RRM_BCH_RELEASE_CNF result:%d m_ConfiguredStatus :%d
Line 670: [RRC][NRCELL][RESEL] RRC_RRM_CELL_STATUS_CNF result:%d
Line 670: [RRC][NRCELL][RESEL] RRC_RRM_CELL_STATUS_CNF result:%d
Line 677: [NRCELL][RESEL] RRC_RRM_CELL_STATUS_CNF CellSelection Result :%d
Line 701: [RRC][NRCELL][RESEL] RRC_RRM_CELL_CONFIG_CNF_Hdlr Result[%d]
Line 701: [RRC][NRCELL][RESEL] RRC_RRM_CELL_CONFIG_CNF_Hdlr Result[%d]
Line 708: [NRCELL][RESEL]There is no Cell!!!
Line 729: [NRCELL][RESEL]RRC_RRM_CELL_CONFIG_CNF SUCCESS!!
Line 736: [NRCELL][RESEL] PBD_STATE_ABORTING : no action
Line 777: [NRCELL][RESEL] SERVINGCELL_CONFIG_COMMON_SIB is included in new received SIB1, L2 Config is needed
Line 781: [NRCELL][RESEL] Don't need to send L2/PHY configuration. Just send result msg to MM
Line 794: [NRCELL][RESEL] PbdState is PBD_STATE_ABORTING 
Line 808: %s
Line 816: [NRCELL][RESEL] PbdState is PBD_STATE_ABORTING 
Line 843: [NRCELL][RESEL] PBD_STATE_RUNNING : abnormal case 
Line 847: [NRCELL][RESEL] PbdState is PBD_STATE_ABORTING 
Line 862: %s
Line 871: [NRCELL][RESEL] Do Loop for cell config
Line 879: [NRCELL][RESEL] Return To Source Cell
Line 890: [NRCELL][RESEL] RRC_RRM_CELL_CONFIG_CNF result:%d CellStatus:%d
Line 897: [NRCELL][RESEL] Need to check why cell selection failed !!!
Line 915: [NRCELL][RESEL]IsCellIndRequired %d
Line 941: %s
Line 967: %s
Line 971: [NRCELL][RESEL]-->RRC_SEND_EXTMSG(RRM_RRC_RAT_SUSPEND_REQ)
Line 977: %s
Line 979: [NRCELL][RESEL]-->RRC_SEND_EXTMSG(MM_RRC_IRAT_CHANGE_REQ)
Line 993: %s
Line 1004: [NRCELL][RESEL]Cell Resel fail -> ReturnToSourceCell
Line 1013: [NRCELL][RESEL]Cell selection list has been completed so do not send message
Line 1020: [NRCELL][RESEL]-->RRC_SEND_EXTMSG(RRM_RRC_CELL_CONFIG_REQ), Cause : [%d]
Line 1032: %s
Line 1044: [NRCELL][RESEL] There is no SIB1 for SCell. It is abnormal case. Need to check
Line 1052: %s
Line 1060: %s
Line 1072: [RRC][NRCELL][RESEL] ProcessCellReselStartMsg NumReselFreq : %d
Line 1072: [RRC][NRCELL][RESEL] ProcessCellReselStartMsg NumReselFreq : %d
Line 1089: [NRCELL][RESEL]ProcessCellReselFinish %d
Line 1115: %s
Line 1122: CheckNodeCondition:  NR reselection
Line 1127: CheckNodeCondition:  NR reselection
Line 1129: N2L resel ignored during FeDv On
Line 1134: %s
Line 1153: [NRCELL][RESEL] AddLteBarredCell
Line 1157: [NRCELL][RESEL] AddLteBarredFreq Earfcn %d
Line 1172: NumReselFreq == 0. Need to send REJECT_IND
Line 1196: Send RESEL_REJECT_IND
