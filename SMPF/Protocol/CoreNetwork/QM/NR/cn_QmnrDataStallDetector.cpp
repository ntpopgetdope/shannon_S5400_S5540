Line 120: [W :NR,%d] %%#EM [Check] DataStallDetectorBase::FindStallInfo: Cannot be called for Sid(%u)
Line 126: [W :NR,%d] %%#EM [Check] DataStallDetectorBase::StallTimerExpiry: Cannot be called for Sid(%u)
Line 273: [W :NR,%d] %%#EM [Check] InsertSession: Fail to Insert StallInfo for Sid(%u)
Line 280: [D :NR,%d] %%#ST InsertSession: Succeed to Insert StallInfo for Sid(%u) -> Current Size(%u)
Line 284: [D :NR,%d] %%#ST InsertSession: StallInfo Already Exists for Sid(%u) -> Current Size(%u)
Line 294: [W :NR,%d] %%#EM [Check] EraseSession: No StallInfo for Sid(%u)
Line 305: [D :NR,%d] %%#ST EraseSession: Succeed to Erase StallInfo for Sid(%u) -> Remained Size(%u)
Line 322: [W :NR,%d] %%#EM [Check] GetDnsQueryReqCnt: pStallInfo is nullptr for Sid(%d)
Line 341: [W :NR,%d] %%#EM [Check] IncDnsQueryReqCnt: pStallInfo is nullptr for Sid(%d)
Line 350: [D :NR,%d] %%#ST IncDnsQueryReqCnt: Session[%d]: (%u), Total(%u)
Line 364: [W :NR,%d] %%#EM [Check] DecDnsQueryReqCnt: pStallInfo is nullptr for Sid(%d)
Line 378: [D :NR,%d] %%#ST DecDnsQueryReqCnt: Session[%d]: (%u), Total(%u)
Line 392: [W :NR,%d] %%#EM [Check] GetDnsQueryRspCnt: pStallInfo is nullptr for Sid(%d)
Line 411: [W :NR,%d] %%#EM [Check] IncDnsQueryRspCnt: pStallInfo is nullptr for Sid(%d)
Line 418: [D :NR,%d] %%#ST IncDnsQueryRspCnt: Session[%d]: (%d)
Line 451: [D :NR,%d] %%#ST ResetStallInfo: DnsQueryReqCnt(0), DnsQueryRspCnt(0) for All Session
Line 463: [W :NR,%d] %%#EM [Check] ResetStallInfo: No StallInfo for Sid(%u)
Line 476: [W :NR,%d] %%#EM [Check] ResetStallInfo: Check why Total(%u) < DnsQueryReqCnt(%u) for Sid(%u)
Line 487: [D :NR,%d] %%#ST ResetStallInfo: DnsQueryReqCnt(0), DnsQueryRspCnt(0) for Sid(%u); TotalQueryReqCnt(%u)
Line 527: [D :NR,%d] %%#ST [DataStallStat] DetectorType[%s]: gDataStallRecoveryCount(%u), gDnsQueryDiffMaxCount(%u)
Line 581: [D :NR,%d] %%#ST CheckDnsQueryRsp: DnsQueryRsp, but DATA_STALL_GUARD Timer Running, so Discard!
Line 614: [D :NR,%d] %%#ST ActionToAvoidStall: Just Start DATA_STALL_GUARD Timer, DetectorType[%s], gDataStallRecoveryCount(%d)
Line 642: [D :NR,%d] DetectedDnsQuery: SesId(%u): DnsDiffCnt(%u) > MAX_CNT(%u)
Line 656: [D :NR,%d] DetectedDnsQuery: DATA_STALL_DETECTION Already Started for SesId(%u)
Line 684: [D :NR,%d] %%#ST [Check] HandleRelFail: Data Stall Local Rel Fail for Sid(%u)
Line 698: [D :NR,%d] %%#ST [Check] HandleRelFail: Stop DATA_STALL_GUARD / Restart DATA_STALL_DETECTION Timer for Sid(%u)
Line 702: [D :NR,%d] %%#ST [Check] HandleRelFail: No Action because No Session for Sid(%u)
Line 714: [D :NR,%d] %%#ST [Check] ActionToAvoidStall: No Action because Local Rel Already Triggered for Sid(%u) -> Need to Check Rel Stuck!
Line 721: [D :NR,%d] %%#ST ActionToAvoidStall: Trigger Local Release, gDataStallRecoveryCount(%d)
Line 732: [D :NR,%d] %%#ST SetLocalRelTriggeredSes: (%d) -> (%d)
Line 750: [W :NR,%d] %%#EM [Check] CreateDataStallDetector: StallDetectorMode(%u) Range Error
Line 755: [W :NR,%d] %%#EM [Check] CreateDataStallDetector: DATA_STALL Timer Duration Error
Line 760: [W :NR,%d] %%#EM CreateDataStallDetector: DATA_STALL_DETECTION Timer Disabled
Line 783: [N :NR,%d] %%#ST CreateDataStallDetector: Replace Data Stall Detector (0x%X) -> (0x%X) with Mode[%s]
