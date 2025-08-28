Line 127: ###[NR_HPCM] %s: Skip HpcmModemPowerControl: OnOff(%d), ModemNrOn(%d)
Line 179: ###[NR_HPCM] %s: unexpected routine for HPCM: SleepReason(%d)
Line 184: ###[NR_HPCM] %s: OnOff(%d), OnReason(%d) SleepReason(%d), freq_range(%d, HpcmMaskFR1/FR2(%d/%d))
Line 221: ch_PS_HPCMHandler_NR_RF done
Line 223: ch_PS_HPCMHandler_NR_MODEM done
Line 247: ###[NR_HPCM][WARNING] CheckNrHpcmClient:: %s|PS0
Line 248: ###[NR_HPCM][WARNING] CheckNrHpcmClient:: %s|PS0
Line 253: ###[NR_HPCM][WARNING] CheckNrHpcmClient:: %s|PS1
Line 254: ###[NR_HPCM][WARNING] CheckNrHpcmClient:: %s|PS1
Line 302: ##[NR_SLEEP] HpcmPreModemOnOffRequest: OnOffType(%d), m_PreModemOn(%d), m_ModemNrOn(%d) LTEPD(%d) LsleepState(%d) GsmSleepState(%d) freq_range(%d)
Line 304: ##[NR_SLEEP] HpcmPreModemOnOffRequest: OnOffType(%d), m_PreModemOn(%d), m_ModemNrOn(%d) LTEPD(%d) LsleepState(%d) GsmSleepState(%d) freq_range(%d)
Line 326: ###[NR_SLEEP][WARNING] HpcmPreModemOnOffRequest:: Invalid freq_range(%d)
Line 359: ##[NR_SLEEP] PreModemOffHisrHandler: Modem off done. m_PreModemOn(%d->%d)
Line 360: ##[NR_SLEEP] PreModemOffHisrHandler: Modem off done. m_PreModemOn(%d->%d)
Line 368: ###[NR_SLEEP][WARNING] HpcmPreModemOnOffRequest:: Invalid type(%d)
Line 405: ##[NR_SLEEP] PreFr1ModemOnHisrHandler:: Modem On Done. m_PreModemOn(%d), domain_type(%d)
Line 406: ##[NR_SLEEP] PreFr1ModemOnHisrHandler:: Modem On Done. m_PreModemOn(%d), domain_type(%d)
Line 443: ##[NR_SLEEP] PreFr2ModemOnHisrHandler:: Modem On Done. m_PreModemOn(%d), domain_type(%d)
Line 444: ##[NR_SLEEP] PreFr2ModemOnHisrHandler:: Modem On Done. m_PreModemOn(%d), domain_type(%d)
Line 458: ##[NR_SLEEP] PreModemOffHisrHandler:: Modem Off Done. m_PreModemOn(%d) domain_type(%d)
Line 459: ##[NR_SLEEP] PreModemOffHisrHandler:: Modem Off Done. m_PreModemOn(%d) domain_type(%d)
Line 488: ###[NR_HPCM] HpcmModemPowerControlForNrDemod:: OnOff(%d)
Line 507: ###[NR_HPCM] GetModemDemodSubStatus:: OnOff(%d)
Line 535: ###[NR_HPCM] HpcmRfPowerControlForFreqRange : curFreqRange(0x%x) targetFreqRange(0x%x) (OwnerMask FR1:%d, FR2:%d) domain_type(%d) NrDcStatus(%d)
Line 672: ###[NR_SLEEP_DEV] NR MODEM POWER ON [ %02d:%02d:%02d.%03d ] ------------------------------------------------------
Line 674: ###[NR_SLEEP_DEV] NR MODEM POWER ON [ %02d:%02d:%02d.%03d ] ------------------------------------------------------
Line 695: ###[NR_SLEEP_DEV] NR MODEM POWER OFF [ %02d:%02d:%02d.%03d ] ------------------------------------------------------
Line 697: ###[NR_SLEEP_DEV] NR MODEM POWER OFF [ %02d:%02d:%02d.%03d ] ------------------------------------------------------
Line 716: ###[NR_SLEEP] Fr1RfPartialInit:: LteOwnMask(%d)
Line 741: ###[NR_POWERON] %s: InitType(%d), InitMethodType(%d)
Line 779: ###[NR_SLEEP] ModemPowerActivate(): OnReason(%d - 0:RESUME/1:NORMAL/2:EARLY/3:IRAT/4:SKIP)
Line 794: ###[NR_WAKEUP][ProcTime] HPCM ON
Line 795: ###[NR_WAKEUP][ProcTime] HPCM ON
Line 808: ###[NR_DRX][WARNING] AbortSleep but WakeupIntr isn't generated
Line 822: ###[NR_SLEEP][WARNING] ModemPowerActivate(): Invalid OnReason(%d)
Line 844: ###[NR_SLEEP] ModemPowerOnOffDeactivate(): SleepReason(%d)
Line 885: ###[NR_SLEEP] ModemPowerOnOffDeactivate(): ClkGatingMode(domain: %d) is changed from %d to 0
Line 922: ###[NR_SLEEP][WARNING] ModemPowerOnOffDeactivate(): Invalid SleepReason(%d)
Line 930: ###[NR_SLEEP] ModemPowerOffRequest:: OnReason(%d) SleepReason(%d) domain_type(%d)
Line 1009: ###[NR_SLEEP][ProcTime] %s:: OnOff(%d) OnReason(%d) SleepReason(%d) ResumeType(%d) domain_type(%d)
Line 1041: ###[NR_SLEEP] %s:: SleepReason is changed to SW_SLEEP (PeerStackState : %d, ResumeState: %d, ReqSleepReason: %d)
Line 1085: ##[NR_SLEEP] ModemDemodSetup : DemodState for NRDC/DR (Domain%d DemodState %d, Peer DemodState %d -> State %d)
Line 1109: ###[NR_SLEEP] No need to send LCPU INIT IPC: domain(%d), demod_cc(%d), lcpu_state(%d)
Line 1136: ##[NR_SLEEP] ModemDemodSetup: demod_cc(%d), config_release(%d), demod_core(%d), lcpu_core(%d), cc_state(%x)[4bit][ccstate/lcpucore/demodcore/lcpustate/demodstate/cccnt], domain_type(%d)
Line 1187: ###[NR_HPCM] %s: unexpected OnReason: OnOff(%d), OnReason(%d)
Line 1212: ###[NR_SLEEP] WaitLcpuReleaseDone: SleepReason(%d), domain_type(%d)
Line 1230: ###[NR_SLEEP][WARNING] Lcpu is not released yet, duration = 10ms
Line 1235: ###[NR_SLEEP][ProcTime] LCPU release Done
Line 1236: ###[NR_SLEEP][ProcTime] LCPU release Done
Line 1245: ###[NR_SLEEP] LCPU state: demod_cc(%d), state(%d)
Line 1269: ###[NR_SLEEP][WARNING] WaitModemPreOnDone:: PRE MODEM ON is not finished (%d)us
Line 1270: ###[NR_SLEEP] WaitModemPreOnDone:: Wait for PRE MODEM ON (%d)us
Line 1338: ###[NR_SLEEP] SetClkGatingMode:: Domain(%d), ActDomainCnt(%d), ReqClkGatingMode(%d), mode(%d), DemodSubStatus(%d), TxSubCoreAlloc(%d)
