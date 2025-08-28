Line 152: [I][SRIF] Mmc_Dsl1rc_RsrcReq_Pending : %d -> %d 
Line 187: [I][SRIF] Mmc_Dsl1rc_LTE_Client_ID : %d -> %d 
Line 225: [I][SRIF] Mmc_Dsl1rc_Reference_ID : %d -> %d 
Line 263: [I][SRIF] SrIf_SrL1rcReqCount : %d -> %d 
Line 449:    [Timer Expiry] DSL1RC_ResumeReadyInd - Stk1 
Line 495:    [Timer Expiry] DSL1RC_ResumeReadyInd - Stk2 
Line 588:    [Timer Expiry] DSL1RC_RetryTimerExpiry - Stk1 
Line 634:    [Timer Expiry] DSL1RC_RetryTimerExpiry - Stk2 
Line 1840: [MMCIF_DSRC] %s : Msg Id = 0x%x 
Line 1885: [W][MMCIF_DSRC] %s Unexpected Message ID 
Line 326:    [MMCIF_DSL1RC] Invoking DSL1RC Resume Ready Functionality
Line 362:    [SRIF_SRL1RC] ResumeReady RequestReason [%d] DutyCycle [%d] 
Line 380:    [SRIF_PSPS_DB] PSPS Scheme Stopped !! Reset SRIF PSPS Parameters 
Line 391:    [SRIF_SRL1RC] ResumeReady RequestReason [%d] IsResumeRejected [%d] 
Line 396:    [SRIF_SRL1RC] Resume Received from DSL1RC with Indication to wait (%d) and NOT RESUME NOW!!!! 
Line 404:    [SRIF_PSPS_DB] IsPsPsEnabled [%u], DutyCycle [%u], OtherClientDutyCycle [%u], IsResumeRejected [%u] 
Line 412: [W][SRIF_SRL1RC] Resume fail! LTE Client ID [%d]
Line 681:    [SRIF_SRL1RC] Invoking SRL1RC Registration Functionality
Line 704: [W][SRIF_SRL1RC] Invalid Stack ID!!
Line 724:    [SRIF_SRL1RC] Registered Successfully, LTE Client ID [%d]
Line 734:    [SRIF_SRL1RC] Invoking SRL1RC DeRegistration Functionality. IsDeregForBPLMN [%u] !
Line 751:    [SRIF_SRL1RC] If LTE L1LC is already in deregistered state, do not send deregister again
Line 766:    [SRIF_SRL1RC] Deregistered Successfully, LTE Client ID [%d]
Line 771: [W][SRIF_SRL1RC] Deregistration FAILED!!!! LTE Client ID [%d]
Line 800:    [SRIF_SRL1RC] Invoking SRL1RC Resource Request Functionality
Line 803:    [SRIF_SRL1RC] Resource Req Proc ID[%d] MinimumReqTime [%d] IsInConnected [%u] DutyCycle [%d]
Line 819: [W][SRIF_SRL1RC] LTE SRL1RC Client ID Invalid!!!! Exiting without requesting for RF!!!
Line 854:    [SRIF_SRL1RC] Parsing Resource Response from SRL1RC
Line 863:    [SRIF_SRL1RC] PSPS Scheme Started
Line 870:    [SRIF_PSPS_DB] IsPsPsEnabled [%u], DutyCycle [%u], OtherClientDutyCycle [%u], IsResumeRejected [%u] 
Line 873:    [SRIF_SRL1RC] RsrcRsp.isNextPagingConflict [%d] 
Line 892: [W][SRIF_SRL1RC] resourceRequest fail! LTE Client ID [%d]
Line 1614:    [SRIF_SRL1RC] %s : Msg Id = 0x%x 
Line 1626: [W][MMCIF_DSL1RC] Resume Recieved from DSL1RC with Indication to wait and NOT RESUME NOW!!!! 
Line 1636:    [SRIF_SRL1RC] PSPS Scheme Stopped !! Reset SRIF PSPS Parameters
Line 1645:    [SRIF_PSPS_DB] IsPsPsEnabled [%u], DutyCycle [%u], OtherClientDutyCycle [%u], IsResumeRejected [%u] 
Line 1655:    [MMCIF_DSL1RC] Renew Reference ID with LtePauseReq [%d]  
Line 1677:    [SRIF_PSPS_DB] IsPsPsEnabled [%u], DutyCycle [%u], OtherClientDutyCycle [%u], IsResumeRejected [%u], Cnt[%d] 
Line 1717:    [MMCIF_DSL1RC] LTE Measure Response
Line 1724:    [MMCIF_DSL1RC] LTE Measure pause request   
Line 1732:    [MMCIF_DSL1RC] LTE Measure Resume request   
Line 283:    [SRIF_SRL1RC] PSPS STATUS IND !! IsPSPSEnabled[%u] OtherClientDutyCycle[%d]
Line 291:    [SRIF_SRL1RC] PSPS Scheme Started. Resume Ready Timer Started with value [%d]
Line 297:    [SRIF_SRL1RC] PSPS Scheme Stopped !! Reset SRIF PSPS Parameters
Line 307:    [SRIF_PSPS_DB] IsPsPsEnabled [%u], DutyCycle [%u], OtherClientDutyCycle [%u], IsResumeRejected [%u] 
Line 1757:    [SRIF_SRL1RC] %s Msg Id: 0x%x 
Line 919:    [SRIF_SRL1RC] Invoking SRL1RC Pause Done Functionality
Line 922:    [SRIF_SRL1RC] Entry Point :: %s Pause Done With Rel[%d] DutyCycle[%d]
Line 946:    [SRIF_SRL1RC] PSPS Scheme Stopped !! Reset SRIF PSPS Parameters
Line 970:    [SRIF_SRL1RC] Resume Ready Timer Started with %u ms !! in PSPS Scheme
Line 976:    [SRIF_SRL1RC] Resume Ready Timer Started with %u ms !! due to Early Pause Timer Expiry
Line 1011:    [SRIF_SRL1RC] Invoking SRL1RC Release Ind Functionality. IsInConnected[%u] nextEventPresent[%u] nextWakeupCause[%u] nextEventStartTime[%u] nextEventDuration[%u]
Line 1039:    [SRIF_SRL1RC] PSPS Scheme Stopped !! Reset SRIF PSPS Parameters
Line 1081:    [SRIF_SRL1RC] Invoking SRL1RC Update Time Ind Functionality
Line 1139:    [SRIF_SRL1RC] Invoking SRL1RC PS Update Time Ind Functionality
Line 1198:    [SRIF_SRL1RC] Invoking SRL1RC DR Update Ind Functionality
Line 1323:    [SRIF_SRL1RC] Invoking SRL1RC Meas Request Functionality
Line 1340: [W][SRIF_SRL1RC] LTE SRL1RC Client ID Invalid!!!! Exiting without requesting for RF!!!
Line 1371: [W][SRIF_SRL1RC] resourceRequest fail! LTE Client ID [%d]
Line 1289:    [SRIF_SRL1RC] Invoking SRL1RC Meas Release Functionality
Line 1263:    [SRIF_SRL1RC] Invoking SRL1RC Pause Done Functionality
Line 1387:    [SRIF_SRL1RC] is2TxRequest[%d]
Line 1403: [W][SRIF_SRL1RC] LTE SRL1RC Client ID Invalid!!!! Exiting without requesting for RF!!!
Line 1430:    [SRIF_SRL1RC] Parsing Tx Response from SRL1RC
Line 1435: [W][SRIF_SRL1RC] resourceRequest fail! LTE Client ID [%d]
Line 1448:    [SRIF_SRL1RC] Invoking SRL1RC DR Update Ind Functionality
Line 1482:    [SRIF_SRL1RC] Invoking SRL1RC DR Update Ind Functionality
Line 1583:    [SRIF_SRL1RC] Invoking NS Unrecover Ind Functionality
