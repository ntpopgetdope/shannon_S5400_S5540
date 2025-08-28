Line 173: [USAT_%d] StoreRegModuleFileList: MailBoxId 0x%X Client %s
Line 198: [USAT_%d] Received File List NULL
Line 203: [USAT_%d] mem alloc fail
Line 212: [USAT_%d] StoreRegModuleFileList: Error RetVal 0x%02X clientId 0x%02X
Line 318: [USAT_%d] SendRegsitrationRsp: Result = %d
Line 387: [USAT_%d] DisplayRequestorName: %s 
Line 416: [USAT_%d] SearchRegisteredModulesFileList: Entry
Line 442: [USAT_%d] BmcRefresh(hex): %x 
Line 466: [USAT_%d] Skip FILE CHANGE REQ for : %x 
Line 531: [USAT_%d] Explicit DetachAttachRequired: %d 
Line 550: [USAT_%d] Re-attach required, not reading MM/PLMN files with AllFilesChanged.
Line 579: [USAT_%d] SearchRegisteredModulesFileList: No matching files
Line 586: [USAT_%d] SearchRegisteredModulesFileList: No file list
Line 598: [USAT_%d] SearchRegisteredModulesFileList: File match not found
Line 604: [USAT_%d] Rsp required for file change req 
Line 610: [USAT_%d] Error in starting timer %s
Line 661: [USAT_%d] Skip vote, MF only
Line 666: [USAT_%d] SendRefreshVoteRequestToClients: No voting Required, Start Refresh
Line 677: [USAT_%d] Error in starting timer %s
Line 722: [USAT_%d] RefreshMode  = 0x%02X, FileListPresent = %x, NoOfFiles = %x,EnforcementType= %x 
Line 755: [USAT_%d] SendRefreshStatusIndToClients  refreshMode= 0x%x IsStackStopRequired=%d
Line 776: [USAT_%d] No clients are register for REFRESH indication
Line 785: [USAT_%d] Error in starting timer %s
Line 901: [USAT_%d] RequestorId  -> 0x%02X
Line 904: [USAT_%d] IsAllFilesChanged %d, NumberOfFiles %d, NoDummyEsim-%d
Line 906: [USAT_%d] File List is
Line 945: [USAT_%d] RequestorId  -> 0x%02X
Line 968: [USAT_%d] DecodeUsatRefreshFileChangesRsp State: %s
Line 1029: [USAT_%d] ProcessRefreshFileChangeResponse
Line 1033: [USAT_%d] Null Msg
Line 1040: [USAT_%d] MailboxId : %d ClientIndex =%d
Line 1086: [USAT_%d] %d responses not recieved yet
Line 1144: [USAT_%d] ProcessRefreshVoteResponse: MailboxId : %d ClientIndex =%d Voting Status :%d
Line 1157: [USAT_%d] USAT Refresh Voting is received from all registers
Line 1178: [USAT_%d] Voting Status NOT OK-> STOP Refresh Procedure
Line 1212: [USAT_%d] %d responses not recieved yet
Line 1217: [USAT_%d] No request sent to this client
Line 1249: [USAT_%d] DecodeUsatRefreshCompletedReq: Wrong Refresh State
Line 1273: [USAT_%d] ProcessRefreshCompletedReq: mailbox %d Indx %d
Line 1319: [USAT_%d] %d responses not recieved yet
Line 1324: [USAT_%d] No request sent to this client
Line 1340: [USAT_%d] PerformRefreshTimerExpiry: Entry
Line 1375: [USAT_%d] Timer expiry in wrong state
Line 1422: [USAT_%d]  USAT Refresh State --> %s
Line 1469: [USAT_%d] USAT_OPERATION_MODE = %d
Line 1492: [USAT_%d] usat_StoreRefreshCmd
Line 1508: [USAT_%d] Same Refresh Cmd Found, returning without storing
Line 1522: [USAT_%d] Refrsh type 04(UICC Reset) or 09(Profile State change) already stored, no need to store any other refresh
Line 1533: [USAT_%d] Refresh Cmd stored at index = %d
Line 1562: [USAT_%d] usat_StoreRefreshCacheCmd
Line 1569: [USAT_%d] Store Processed Refresh Cmd at index = %d
Line 1585: [USAT_%d] Error in starting timer %s
Line 1590: [USAT_%d] Timer %s is already running
Line 1607: [USAT_%d] ProcessStoredRefreshCmd
Line 1612: [USAT_%d] Other proactive command is ongoing, Don't process the stored refresh
Line 1626: [USAT_%d] cmdLen > USAT_PROACTIVE_CMD_MAX_LENGTH
Line 1676: [USAT_%d] CheckStoredRefreshCmd
Line 1691: [USAT_%d] Same Refresh Cmd Found at index %d, deleting the entry
Line 1736: [USAT_%d] Same Refresh Cmd not Found
Line 1763: [USAT_%d] Same Refresh Cmd Found in stored refresh cache at index %d
Line 1789: [USAT_%d] ClearStoredRefreshCmd in case of eUICC Profile State Change REFRESH Proactive command
Line 1816: [USAT_%d] usat_ClearStoredRefreshCacheCmd
