Line 285: [GNSS-IF]Warning: HALDEVMNG_TimeAidingContextReset: TimeAidingRequested
Line 288: [GNSS-IF]Warning: HALDEVMNG_TimeAidingContextReset: TsyncRequested
Line 291: [GNSS-IF]Warning: HALDEVMNG_TimeAidingContextReset: TsyncDeferredCount
Line 294: [GNSS-IF]Warning: HALDEVMNG_TimeAidingContextReset: sleep_blocked[%d,%d]
Line 297: [GNSS-IF]Warning: HALDEVMNG_TimeAidingContextReset: update_state[%d,%d]
Line 363: GnssIf: malloc fail
Line 376: GnssIf Message SendTo failure
Line 421: [GNSS-IF] HALDEVMNG_CdmaFreqAidResponse(): RAT %d. Passing TCXO drift %d to GNSS
Line 431: [GNSS-IF] HALDEVMNG_CdmaFreqAidFailResponse
Line 459: [GNSS-IF] HALDEVMNG_CdmaTimeAidResponse(): RAT-CDMA, week_num %d, TOW(H) %u, TOW(L) %u, gpstime_type %d
Line 469: [GNSS-IF] HALDEVMNG_FreqAidFailResponse
Line 479: [GNSS-IF] HALDEVMNG_TimeAidFailResponse
Line 510: [GNSS-IF] FAResponse: RAT %d, freq drift %d, tcxo type %d
Line 526: [GNSS-IF] FAResponse: service not available[%d]
Line 551: [GNSS-IF] HALDEVMNG_SendGnssStatusUpdateRsp(): Dummy Response already sent from HALDEVMNG_ProcMtplTimerExpired
Line 559: [GNSS-IF] HALDEVMNG_SendGnssStatusUpdateRsp(): mBoxRegister[3](0x%x)
Line 576: [GNSS-IF] HALDEVMNG_SendTimeAidResponse(): service not available[%d]
Line 598: [GNSS-IF] HALDEVMNG_SendTimeAidResponse(): RAT-CDMA, week_num %d, tow(H) %d, tow(L) %d
Line 613: [GNSS-IF] HALDEVMNG_SendTimeAidResponse(): RAT-LTE, SIB%d(%d), utc(H) %d, utc(L) %d, sfn %d
Line 678: [GNSS-IF] HALDEVMNG_BandMonitoringRequestHandler: [%d,%d:%d,%d,%d]
Line 699: [GNSS-IF] HALDEVMNG_BandMonitoringRequestHandler: not support[%d,%d]
Line 770: [GNSS-IF] HALDEVMNG_setMarconiStatus: MarconiState(%d)
Line 790: [GNSS-IF] HALDEVMNG_RficstartStopRequestHandler: req type = 0x%x, MarconiState: %d
Line 800: [GNSS-IF] HALDEVMNG_RficstartStopRequestHandler: Received Reset flag from GNSS, gGNSS_Is_Reset: %d
Line 806: [GNSS-IF] Marconi Request (%d) is invalid!!
Line 821: [GNSS-IF] In MARCONI_OFF state, new req recieved for Marconi On
Line 827: [GNSS-IF] In MARCONI_OFF state, new req recieved for Marconi Off hence dummy confirmation sent to GNSS
Line 838: [GNSS-IF] In MARCONI_ON state, new req recieved for Marconi On hence dummy confirmation sent to GNSS
Line 847: [GNSS-IF] In MARCONI_ON state, new req recieved for Marconi Off
Line 875: [GNSS-IF] HALDEVMNG_MtplRequestHandler: gnss_active = %d, gns_fix: %d
Line 900: [GNSS-IF] HALDEVMNG_ApmRequestHandler: cmd = %d, subcmd = 0x%X, S1 = 0x%X
Line 970: [GNSS-IF] HALDEVMNG_FreqAidingRequestHandler: start=%d
Line 989: [GNSS-IF] HALDEVMNG_FreqAidingRequestHandler: %d
Line 1001: [GNSS-IF] HALDEVMNG_Test_GeneratePaenSig(TxOn %d)
Line 1027: [GNSS-IF] HALDEVMNG_Test_GeneratePaenSig(TxOn %d)
Line 1053: [GNSS-IF] HALDEVMNG_TxBlankingResponse(return code=%d)
Line 1106: [GNSS-IF] HALDEVMNG_TxBlankingRequestHandler: mailbox(%d,%d,%d,%d,%d)
Line 1173: [GNSS-IF] HALDEVMNG_TxBlankingRequestHandler: not support(%d,%d,%d)
Line 1185: [GNSS-IF] HALDEVMNG_TxBlankingRequestHandler: not support[%d,%d]
Line 1193: [GNSS-IF] Shared memory variables setting: mode: %d allBandBlankigType: %d blankindIndexId: %d onOff: %d subBand: %d blankingType: %d)
Line 1205: [GNSS-IF] HALDEVMNG_ProcMtplTimerExpired, GnssMtplStatusInfoDb(%d)
Line 1209: [GNSS-IF] Send Dummy Response
Line 1214: [GNSS-IF] HALDEVMNG_ProcMtplTimerExpired():mBoxRegister[3](0x%x)
Line 1237: [GNSS-IF] HALDEVMNG_MailboxDataProcessing (IPC# %d)
Line 1246: [GNSS-IF] Received GNSS_TIME_AIDING_REQ
Line 1260: [GNSS-IF] Received COMM_CP_GNSS_BAND_MONITOR
Line 1270: [GNSS-IF] Received GNSS_FREQ_AIDING_REQ
Line 1285: [GNSS-IF] Received COMM_CP_GNSS_EXT_TX_BLANK_SIG
Line 1317: [GNSS-IF] Received COMM_CP_GNSS_CP_LOGGING DualSimStatus: 0x%x
Line 1350: [GNSS-IF] Received GNSS_RFIC_START_STOP_REQ
Line 1358: [GNSS-IF] Received GNSS_RFIC_START_STOP_REQ with Sub Command as GNSS Status(%d)
Line 1365: [GNSS-IF] Received GNSS_RFIC_START_STOP_REQ with Sub Command as GNSS NTN State(%d)
Line 1372: [GNSS-IF] Request from RFIC Start Stop (%d) is invalid!!
Line 1380: [GNSS-IF] Received GNSS_APM_REQ
Line 1386: [GNSS-IF] HALDEVMNG_MailboxDataProcessing ID: 0x%x
Line 1422: [GNSS-IF] HALDEVMNG_CpStateLoggingHandler ns_state: %d
Line 1428: [GNSS-IF] In Airplane mode
Line 1433: [GNSS-IF] HALDEVMNG_CpStateLoggingHandler rat: %d
Line 1451: [GNSS-IF] received pwr: %d sent pusch_pwr: %d(0x%x) 
Line 1511: [CPLOG] NS-RAT=%d NSstate=%d
Line 1548: [GNSS-IF] HALDEVMNG_CommCpUpdateModemStatus rat %d prev_modem_status %d status %d interface_init_done %d
Line 1627: [GNSS-IF] HALDEVMNG_TimeAidingContextReset
Line 1654: [GNSS-IF] HALDEVMNG_RfCalCoord error, %d
Line 1728: [CONNIF] IPC subType SS_CONNIF_MISC_NOTIFICATION::%d
Line 1742: [GNSS-IF] Time-aiding parameters initialized
Line 1748: [GNSS-IF] Time-aiding in progress.. wait for re-entrance
Line 1753: [GNSS-IF] pal_Malloc failure
Line 1764: [GNSS-IF] pal_MsgSendTo failure
Line 1778: [GNSS-IF] SIPC2CONNIF_SERVICE_NOT_AVAILABLE::0x%x
Line 1793: [GNSS-IF] SIPC2CONNIF_SERVICE_NOT_AVAILABLE: Error code 0x%x
Line 1812: [CONNIF] ConnIf_NsFeedbackProcessing unknown msg: 0x%x
Line 1902: [CONNIF] IPC Type = SS_GNSS_CP_IPC_REQ(0x%x)
Line 1909: [CONNIF] IPC Type = SS_GNSS_FREQUENCY_AIDING_RSP(0x%x)
Line 1916: [CONNIF] IPC Type = SS_GNSS_PRECISE_TIME_AIDING_RSP(0x%x)
Line 1923: [CONNIF] IPC Type = SS_CONNIF_MISC_NOTIFICATION(0x%x)
Line 1931: [CONNIF] IPC Type = SS_GNSS_STATUS_UPDATE_RSP(0x%x)
Line 1937: [CONNIF] unknown mailbox msg: 0x%x
Line 218: [HALDEVMNG][WARNING] NullFunc GetUmodemStatus()!!
