Line 87: [N :MM,%d]  Nrmm::Nrmm
Line 268: [A :MM,%d]  %%!EM m_pMmContext is null
Line 268: [MM|%d,CP] %%!EM m_pMmContext is null
Line 323: [W :MM,%d]  %%!EM No message handler found!! (Name: %s, result:%u)
Line 323: [MM|%d,CP] %%!EM No message handler found!! (Name: %s, result:%u)
Line 334: [D :MM,%d]  

Line 335: [D :MM,%d]  

Line 335: [N :MM,%d]  |  NRMM ....  |
Line 336: [N :MM,%d]  |=========================================================|
Line 337: [N :MM,%d]  |- NRMM DEBUG INFORMATION -|
Line 338: [N :MM,%d]  |=========================================================|
Line 339: [N :MM,%d]  | OPERATOR - SIM: [%s],  SVC: [%s]
Line 340: [N :MM,%d]  | PLMN SEL MODE: [%s]
Line 344: [N :MM,%d]  | UE_USAGE: [%s],  VoNR: [%d],  IMS: [%d]
Line 345: [N :MM,%d]  | REG STATUS: [%s]
Line 346: [N :MM,%d]  | UPDATE STATUS: [%s]
Line 347: [N :MM,%d]  | EUTRA CAPA STATUS: [%s],  NR CAPA STATUS: [%s]
Line 348: [DumpHex] | IMSI: 
Line 349: [DumpHex] | GUTI: 
Line 350: [DumpHex] | HPLMN: 
Line 351: [DumpHex] | RPLMN: 
Line 353: [N :MM,%d]  | VOPS: [%d],  EMC: [%d],  EMF: [%d],  IWK_N26: [%d]
Line 355: [N :MM,%d]  | REG_TYPE: [%d],  REG_NEEDED: [%d]
Line 357: [N :MM,%d]  | SR_NEEDED: [%s],  REL_NEEDED: [%d]
Line 359: [N :MM,%d]  | MM_DATA_STATE: [%d],  PDU STATUS: [0x%x],  ACT_DRB_STATUS: [0x%x]
Line 361: [N :MM,%d]  | REG REJ CAUSE: [%d],  SVC REJ CAUSE: [%d]
Line 365: [N :MM,%d]  | UAC_ID: [%d],  UAC_BARRING: [0x%x %x],  UAC_CONNECTED: [0x%x %x]
Line 366: [N :MM,%d]  | DDS STATUS: [%d], PAGING_ON_CDRX: [%d]
Line 367: [N :MM,%d]  | N1 Re-Enabled: [%d]
Line 368: [DumpHex] | RE_ENABLED_PLMNID: 
Line 370: [DumpHex] | SupportCodec : 
Line 372: [N :MM,%d]  |-------------------------------------------------------------------------------------------|
Line 373: [N :MM,%d]  |- NRMM STATES -|
Line 374: [N :MM,%d]  |-------------------------------------------------------------------------------------------|
Line 375: [N :MM,%d]  | [NRMM STATE] NRMM Main State : %s
Line 376: [N :MM,%d]  | [NRMM STATE] NRMM Sub  State : %s
Line 377: [N :MM,%d]  | [AS     STATE] AS State : %s
Line 378: [N :MM,%d]  | [PROC STATE] Current Procedure : %s
Line 379: [N :MM,%d]  |-------------------------------------------------------------------------------------------|
Line 395: [N :MM,%d]  |-------------------------------------------------------------------------------------------|
Line 405: [DumpHex] %%!DC (dIE) current pApplicableRacsID : 
Line 411: [N :MM,%d]  |-------------------------------------------------------------------------------------------|
Line 414: [D :MM,%d]  |=========================================================|
Line 415: [D :MM,%d]  

Line 436: [N :MM,%d]   Nrmm::PostNrmmProcessMsg()
Line 452: [A :MM,%d]  %%!EM ERROR : State creation failed: (%s:%s). No Transition!
Line 452: [MM|%d,CP] %%!EM ERROR : State creation failed: (%s:%s). No Transition!
Line 469: [D :MM,%d]  [POST ACTION] NRMM STATE: ( %s, %s ) -> ( %s, %s )
Line 486: [D :MM,%d]  [POST ACTION] AS STATE: ( %d ) -> ( %d )
Line 494: [N :MM,%d]  %%!EM Skip post procedure : NR RAT SUSPENDED or STATE_NULL
Line 535: [D :MM,%d]  

Line 536: [D :MM,%d]  |- POST ACTION : Reg Status Changed -|
Line 545: [N :MM,%d]  NrOpMode (%d), DEREG_REASON (%d)
Line 550: [D :MM,%d]  

Line 551: [D :MM,%d]  |- POST ACTION : NRMM State Changed -|
Line 557: [N :MM,%d]  Skip sending SMT_MM_STATUS_IND while REG is in progress
Line 575: [D :MM,%d]  

Line 576: [D :MM,%d]  |- POST ACTION : AS state Changed -|
Line 584: [D :MM,%d]  

Line 585: [D :MM,%d]  |- POST ACTION : RRC Term Need -|
Line 592: [D :MM,%d]  

Line 593: [D :MM,%d]  |- POST ACTION : NSSAI Changed -|
Line 601: [N :MM,%d]  [NSSAI INFO] NUM : ConfNssai = %d, AllowedNssai = %d, RejectedNssai = %d
Line 602: [DumpHex] [NSSAI INFO] CONFIGURED NSSAI : 
Line 603: [DumpHex] [NSSAI INFO] ALLOWED NSSAI : 
Line 604: [DumpHex] [NSSAI INFO] REJECTED NSSAI : 
Line 608: [A :MM,%d]  %%!EM NssaiContext is null
Line 608: [MM|%d,CP] %%!EM NssaiContext is null
Line 617: [D :MM,%d]  

Line 618: [D :MM,%d]  |- POST ACTION : Default Configured NSSAI Changed -|
Line 629: [D :MM,%d]  

Line 630: [D :MM,%d]  |- POST ACTION : NSSRG Changed -|
Line 641: [D :MM,%d]  

Line 642: [D :MM,%d]  |- POST ACTION : LADN Changed -|
Line 650: [D :MM,%d]  

Line 651: [D :MM,%d]  |- POST ACTION : FTAI Changed -|
Line 658: [D :MM,%d]  

Line 659: [D :MM,%d]  |- POST ACTION : EPLMN Changed -|
Line 669: [D :MM,%d]  

Line 670: [D :MM,%d]  |- POST ACTION : UE ID Changed -|
Line 676: [D :MM,%d]  

Line 677: [D :MM,%d]  |- POST ACTION : N1 MODE Changed -|
Line 683: [D :MM,%d]  

Line 684: [D :MM,%d]  |- POST ACTION : NR RAT Resumed -|
Line 695: [D :MM,%d]  

Line 696: [D :MM,%d]  |- POST ACTION : SIM UPDATE -|
Line 703: [D :MM,%d]  

Line 704: [D :MM,%d]  |- POST ACTION : SIM INFO Changed -|
Line 707: [N :MM,%d]  SIM INFO is not updated on EMERGECY_SERVICE state
Line 711: [N :MM,%d]  Process PostSimInfoChanged
Line 729: [D :MM,%d]  

Line 730: [D :MM,%d]  |- POST ACTION : REG INFO Changed -|
Line 740: [D :MM,%d]  

Line 745: [D :MM,%d]  %%!ST [POST ACTION] NRMM STATE: ( %s, %s ) -> ( %s, %s )
Line 754: [D :MM,%d]  Delete NRMM Contexts as per state changed to DEREG : DEREG REASON = %d
Line 759: [D :MM,%d]  In case of SA to non-SA (mode update) deregistration, don't reseet RtaiList
Line 794: [D :MM,%d]  STATE TRANSITION WORK : to DEREG
Line 836: [D :MM,%d]  Init procedure is onoging!
Line 862: [D :MM,%d]  USIM REMOVED, NRMM Contexts Initialized!!
Line 863: [MM|%d,CP] USIM REMOVED, NRMM Contexts Initialized!!
Line 874: [D :MM,%d]  STATE TRANSITION WORK : REG_INIT to REG
Line 919: [D :MM,%d]  STATE TRANSITION WORK : REG_INIT to NULL
Line 932: [D :MM,%d]  STATE TRANSITION WORK : to REG_INIT
Line 969: [D :MM,%d]  Error. Can't get IncreaseEmmUlcountFunc!
Line 979: [D :MM,%d]  STATE TRANSITION WORK : from REG_INIT
Line 991: [D :MM,%d]  STATE TRANSITION WORK : to SR_INIT
Line 1000: [N :MM,%d]  %%!CO For considering T3517 for VZW, Not reset ACC_FAIL_CNT
Line 1004: [N :MM,%d]  %%!CO ServiceRequest is NO needed
Line 1010: [D :MM,%d]  STATE TRANSITION WORK : to DEREG_ECALL_INACTIVE
Line 1016: [D :MM,%d]  STATE TRANSITION WORK : to IDLE
Line 1070: [E :MM,%d]  AS Idle during L2N HO! Change LAST IRAT TYPE to [IRAT HANDOVER FAIL TO IDLE]
Line 1080: [N :MM,%d]  Skip sending SMT_MM_STATUS_IND while REG is in progress
Line 1090: [D :MM,%d]  STATE TRANSITION WORK : to WAIT IDLE
Line 1129: [D :MM,%d]  STATE TRANSITION WORK : to CONN
Line 1210: [D :MM,%d]  STATE TRANSITION WORK : to INACTIVE
Line 1227: [D :MM,%d]  STATE TRANSITION WORK : to NO CELL
Line 1239: [D :MM,%d]  STATE TRANSITION WORK : NO CELL to IDLE
Line 1263: [D :MM,%d]  STATE TRANSITION WORK : from CONN
Line 1270: [D :MM,%d]  Update Status : %d
Line 1271: [D :MM,%d]  REG Attempt Count : %d
Line 1323: [N :MM,%d]  N1 disable Required cause %d
Line 1332: [D :MM,%d]  N1 MODE DISABLED after IMS/EMC call termination
Line 1344: [D :MM,%d]  N1 MODE DISABLED after IMS REG fail
Line 1360: [D :MM,%d]  N1 MODE DISABLED due to voice preference change after release
Line 1370: [D :MM,%d]  N1 MODE DISABLED due to IMS capability disable after release
Line 1381: [D :MM,%d]  N1 MODE DISABLED due to no PCSCF allocated/NO IMS
Line 1391: [D :MM,%d]  N1 MODE DISABLED due to no mapped EBID/SMT IRAT no timer case
Line 1399: [D :MM,%d]  N1 MODE DISABLED invalid 
