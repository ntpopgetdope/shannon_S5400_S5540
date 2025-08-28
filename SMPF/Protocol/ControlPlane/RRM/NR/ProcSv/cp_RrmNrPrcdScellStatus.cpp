Line 74: RrmNrPrcdScellStatus::PreHdlr
Line 92:    >>RRM_L2_SCELL_STATUS_IND_Hdlr
Line 93:      :: Command Type %d (0: MAC-CE Cmd, 1:sCellDeactivationTimer Expiry)
Line 102: 	>>Error!!! there are no ServCellGroupInfoNr for MasterCellGroup
Line 113:      ::CurrentSCellStatus(%d) is same as received SCellActivationCMD(%d), So Nothing to do update for L1C!
Line 128:      ::pScellStatusInd->Msg.NR.numOfScellInfoList is %d, so do not send L1C_RRM_SCELL_STATUS_IND!
Line 129:      ::This case should be check why L2 MAC-CE command is un-synchronized with RRC Confugured SCell Info!!!!!
Line 134:      ::L1C_RRM_SCELL_STATUS_IND being sent to L1C!!!!!
Line 160:    >>Received SCellDeactivationId is invalid (%d) !
Line 168:      ::RecvMsg.SCellDeactivationID(%d), SCellActivationStatus_Current(0x%x)
Line 177:      ::RecvMsg.SCellActivationCMD set to 0x%x
Line 190:        #pScellStatusInd->Msg.NR.numOfScellInfoList is %d, so do not send L1C_RRM_SCELL_STATUS_IND!
Line 191:        #This case should be check why L2 MAC-CE command is un-synchronized with RRC Confugured SCell Info!!!!!
Line 196:        #L1C_RRM_SCELL_STATUS_IND being sent to L1C!!!!!
Line 214:    >> Error! Unknown Command Type %d
Line 222: RrmNrPrcdScellStatus::RRM_L2_SCELL_STATUS_IND_UsrHandler
Line 234:    >>m_L1C_RRM_SCELL_STATUS_IND_sent is TRUE, so return 0
Line 239:    >>m_L1C_RRM_SCELL_STATUS_IND_sent is FALSE, so return 1
