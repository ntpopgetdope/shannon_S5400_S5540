Line 58: Invalid Regi state : %d
Line 64: Registration success
Line 69: Registration fail
Line 83: Abnormal state - : grant_State : %d, req_proc: %d
Line 91: Grant not Received -> other RAT is SRNC_CSCALL state
Line 96: Grant not Received -> pending
Line 104: [SRNC] Proc(%d): Grant Received
Line 131: [SRNC] Abnormal state (state:%d,req_proc:%d,msg_proc:%d)
Line 134: [SRNC] Recv grant release ind : ReqProc(%d)
Line 145: [SRNC] Abnormal state (state:%d,req_proc:%d)
Line 148: [SRNC] Cease Sync Request
Line 161: [SRNC] suspend message (cur_proc:%d, state:%d) -> send to GSS
Line 172: [SRNC] resume message (cur_proc:%d, state:%d) -> send to GSS
Line 185: [SRNC] SRNC state : %d
Line 216: Ignore standby request Not in Regi_done state
Line 221: [%s] MSD ===> SRIF_MSD_SRNC_STANDBY_REQ [Proc : %d][Cause : %d][isQuery : %d]
Line 262: Fail to send standby request, Message alloc fail
Line 280: [SRNC] GrantByProc (0), Release Reject Proc(%d) : Initialize Srnc DB
Line 286: [SRNC] GrantByProc (0) : Initialize Srnc DB
Line 293: Ignore Resume request Not in Regi_done state
Line 297: [%s] MSD ===> SRIF_MSD_SRNC_RESUME_REQ [Proc : %d]
Line 329: Fail to send resume request, Message alloc fail
Line 339: Ignore Pending procedure update request, Not in Regi_done state
Line 344: [%s] MSD ===> SRIF_MSD_SRNC_PENDING_PROC_UPDATE_REQ [Proc : %d][Status : %d]
Line 378: Fail to send pending proc update request, Message alloc fail
Line 385: [%s] MSD ===> SRIF_MSD_SRNC_REGISTER_REQ
Line 417: Fail to send SRNC registration request, Message alloc fail
Line 427: Ignore deregister request in Regi_none state
Line 431: [%s] MSD ===> SRIF_MSD_SRNC_DEREGISTER_REQ
Line 465: Fail to send SRNC De-Registration request, Message alloc fail
Line 478: [SRNC] ReleaseProc(%d) is granted by Srnc
Line 483: [SRNC] Trigger ReleaseReq in GrantState(%d)
Line 494: [SRNC] Invalid proc for release : CurProc(%d), ReqProc(%d)
Line 509: [SRNC] Ignore start procedure : SrncProcedure(%d) is already ongoing procedure
Line 517: [SRNC] Grant Rejected Proc(%d) is exist), Send Resume first
Line 523: [SRNC] CurSrncState (%d) : Do Nothing
Line 526: [SRNC] Start procedure (proc:%d, cause:%d)
Line 535: SendMessage : Fail -> Nullptr Message Body
Line 545: [SRNC] SRNC DB init(%d)
