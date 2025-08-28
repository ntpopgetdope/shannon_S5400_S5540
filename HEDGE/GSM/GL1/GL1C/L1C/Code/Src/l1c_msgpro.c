Line 256: L1cMsgProInitialise - Sending Initialise signal to L1C
Line 286: [GL1 Error] No Memory Allocated
Line 291: L1cAllocSignal Pointer %x, size: %d
Line 305: [GL1 Error] No Memory Allocated
Line 310: L1cAllocateTestmodeRspSignal Pointer %x, size: %d
Line 326: [GL1 Error] No Memory Allocated
Line 339: L1cSendSignaltoMTM Pointer %x, size: %d
Line 352: ****** ERROR **** gphy_PalMsgSendAsMsgWithType Failure 
Line 358: L1cSendSignaltoMTM 0x%x to 0x%x, cmdId:%d
Line 370: isAdditionalMsgId:TRUE
Line 374: isAdditionalMsgId:FALSE
Line 399:  [GL1 Debug] L1cSendSignal 1 Msg_Boot_State %d
Line 402:  [GL1 Debug] L1cSendSignal 2 Msg_Boot_State %d
Line 406:  [GL1 Debug] L1cSendSignal 3 Msg_Boot_State %d
Line 529: PAL L1cMessageManager - Setup and Started
Line 540: L1cMessageManager() messageID=%d
Line 568: ####Array size violation!! messageID:%d
Line 605:  SIM %d state: %s
Line 610:  SIM %d state: %s
Line 614:  SIM state setting is skipped for mph_init_req
Line 645:  SIM %d state: %s
Line 716:  is_page_params_valid %d -> 0
Line 756:  Skip 3GT modem force turn OFF
Line 827:  swap_primaryscell BEFORE. PScell %d PScell.Sim=%d SScell %d SScell.Sim=%d Sim1State = %d Sim2State = %d
Line 829:  SWAPPING is_page_params_valid[0] = %d is_page_params_valid[1] = %d
Line 832:  PScell Arfcn %d Fn %d To %d
Line 835:  SScell Arfcn %d Fn %d To %d
Line 854:  SWAPPING is_page_params_valid[0] = %d is_page_params_valid[1] = %d
Line 856:  swap_primaryscell AFTER. PScell %d PScell.Sim=%d SScell %d SScell.Sim=%d Sim1State = %d Sim2State = %d
Line 888:  is_page_params_valid %d l1c_ptm_supported_sim %d
Line 911:  BPLMN ongoing in 3g Stack
Line 951:  Skip 3GT modem force turn OFF
Line 958:  is_page_params_valid %d l1c_ptm_supported_sim %d
Line 1005: L1c state: %s
Line 1058: L1C state (%d) pending(%d) l1c_forced_wait_state_during_u2g_meas(%d)
Line 1069: Change L1C state to L1C_WAIT, pending state %d
Line 1832:  SIM 1 state set to =%s
Line 1850:  SIM 0 state set to =%s
Line 191: ****** ERROR **** Unsupported signal received, signal is rejected 
Line 220: P channel Unsupported signal received, signal is rejected 
Line 1145:  Logging skipped for Signal %s 
Line 1161: Ignore 10228 in messageProcessor when DTM->WAIT->DTM case and DTM->WAIT->DEDI case
Line 1186: Handle PH_CONNECT_REQ in Wait
Line 1204: Handle PH_CONNECT_REQ in Wait
Line 1230:  L1cMessageManager Signal %s discarded beacuse RFCAL is running
Line 1240: Resume rssi scan if paused : IS_cellsearch_PAUSE = FALSE
Line 1253: L1cMessageManager - Signal %s discarded
Line 1267: L1cMessageManager - Signal %s discarded since Signal is handled in P State
Line 1277: L1cMessageManager - Signal %s enqueued
Line 1284: L1cMessageManager - Processing Signal %s in state %d, MSG ID: %d
Line 1330: ****** ERROR **** Invalid L1C Message Processor state:%d
Line 1336: ****** ERROR **** L1C Message Processor received invalid signal id:%d
Line 1638: ****** ERROR **** L1C PAL Enqueue failure
Line 1375: ProcessSavedSignals - Signal %s dequeued
Line 1388:  Logging skipped for Signal %s 
Line 1394: ****** ERROR **** L1C Message Processor received invalid signal id:%d
Line 1425: ProcessSavedSignals - Signal %s discarded
Line 1440: ProcessSavedSignals - Signal %s discarded since Signal is handled in P State
Line 1452: ****** ERROR **** ProcessSavedSignals - Saved signal %s requires save. Error!!
Line 1459: ProcessSavedSignals - Processing saved Signal %s
Line 1481: ****** ERROR **** Invalid L1C Message Processor state:%d
Line 1487: ****** ERROR **** L1C Message Processor received invalid signal id:%d
Line 1678: ****** ERROR **** L1C PAL Dequeue failure
Line 1704: ****** ERROR **** L1C PAL Incorrect message class
Line 1557: MTM_GL1_REQ messageID = %d
Line 1586: ****** ERROR **** L1C PAL Incorrect message class
Line 1596: ****** ERROR **** L1C PAL Receive Message Failed
Line 1773:  [GL1 Debug] l1c_UpdateMsgLogSnd_Booting L1F_GET_SCELL_ABS_FN %d
