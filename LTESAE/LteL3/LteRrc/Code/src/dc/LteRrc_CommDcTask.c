Line 702: [%s][ENDC BlackList] List init
Line 715: [%s][NsaRecovery] DB init
Line 830: [%s][LteRrcCommDcMain_ProcAtCmdDataInd] received AT cmd data length[%d].
Line 851: [%s]EndcConfPresent(%d)
Line 908: [%s][LowPwrModeReq] LTE_CPHY_LOW_PWR_MODE_NTF Conn(%d), Idle(%d)
Line 927: [%s][LowPwrModeReq] ENDC_NSA_LOW_PWR_MODE_IND (TempCtrl 0x%x)
Line 950: [%s][UAI] ENDC_NSA_L2N_OVERHEAT_REQ 
Line 977: [%s][UAI] Cause(0x%x), DB UaiAction(0x%x), UaiAction(0x%x)
Line 981: [%s][UAI] Same UAI cause.
Line 1008: [%s][UAI] DB UaiAction Updated to (0x%x)
Line 1018: [%s][UAI] 0x01 cause add case
Line 1024: [%s][UAI] DB UaiAction Updated to (0x%x)
Line 1079: [%s][LowPwrCtrl] ProcLowPwrModeReq: SelectedCause(0x%x), Action(0x%x)
Line 1096: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 1104: [%s][LowPwrCtrl] Action(0x%x) ExtendedCause(0x%x) DisableNrSetup(%d) ScgState(%d)
Line 1106: [%s][LowPwrCtrl] LowPwrMode req msg received (TempCtrl:%d, Cause:0x%x)
Line 1129: [%s][LowPwrCtrl] >>>> SelectedCause:0x%x
Line 1161: [%s][ENDC BlackList] SetEndcBlackListFeature : Registry(%d) DFC(0x%x) CARRIER_VARIANT(0x%x) TestMode(%d) Test_enable(%d)
Line 1180: [%s][ENDC BlackList] SetEndcBlackListFeature : MaxScgFailCount(%d) ScgFailDuration(%d) NrCellBarringDuration(%d)
Line 1200: [%s][ENDC BlackList] BlackListEnable : %d
Line 1219: [%s][ENDC BlackList] lteIdx is NULL
Line 1266: [%s][ENDC BlackList] New LteIdx(%d) (earfcn:%d pcid:%d)
Line 1278: [%s][ENDC BlackList] Found LteIdx(%d) (earfcn:%d pcid:%d)
Line 1293: [%s][ENDC BlackList] Replace LteIdx(%d) (earfcn:%d pcid %d -> earfcn:%d pcid:%d)
Line 1304: [%s][ENDC BlackList] LteIdx is abnormal (%d)
Line 1311: [%s][ENDC BlackList] nrIdx is null
Line 1348: [%s][ENDC BlackList] New LteIdx(%d) NrIdx(%d) (earfcn:%d pcid:%d / arfcn:%d pcid:%d)
Line 1360: [%s][ENDC BlackList] Replace LteIdx(%d) NrIdx(%d)
Line 1364: [%s][ENDC BlackList] => (earfcn:%d pcid:%d / arfcn:%d pcid:%d -> arfcn:%d pcid:%d)
Line 1376: [%s][ENDC BlackList] nrIdx is abnormal (%d)
Line 1384: [%s][ENDC BlackList] Find result LteIdx(%d) NrIdx(%d) (earfcn:%d pcid:%d / arfcn:%d pcid:%d)
Line 1398: [%s][ENDC BlackList] Idx is abnormal (%d %d)
Line 1404: [%s][ENDC BlackList] black list info error (%d %d)
Line 1412: [%s][ENDC BlackList] update fail count (lteIdx:%d, nrIdx:%d)
Line 1421: [%s][ENDC BlackList] %dth Scg failure (earfcn:%d pcid:%d / arfcn:%d pcid:%d)
Line 1430: [%s][ENDC BlackList] add blacklist (dur:%d)
Line 1440: [%s][ENDC BlackList] %dth Scg failure (earfcn:%d pcid:%d / arfcn:%d pcid:%d). already added
Line 1449: [%s][ENDC BlackList] 1st Scg failure (earfcn:%d pcid:%d / arfcn:%d pci:%d)
Line 1471: [%s][ENDC BlackList] Idx is abnormal (%d)
Line 1477: [%s][ENDC BlackList] black list info error (%d)
Line 1508: [%s]WaitAckMsg Matched WAIT[%s (0x%4x)] TRIGGER[%s (0x%4x)]
Line 1549: [%s]EndcConfPresent is re-enabled
Line 1553: [%s]EndcConfPresent(%d)
Line 1560: [%s]ScgConfigReleaseNR(%d)=>(%d)
Line 1566: [%s]EndcConfPresent(%d) is disabled
Line 1597: [%s]LTE use NR pdcp set(%d) 
Line 1614: [%s][NsaRecovery] DB init. arfcn:%d pci:%d Cnt:%d TimeDiff:%d
Line 1623: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 1624: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 1653: [%s]LteRrcCommDcMain_SyncConfigRbDbsForEndc fail (%s)
Line 1659: [%s]LteRrcCommDcMain_SyncConfigRbDbsForEndc fail (%s)
Line 1708: [%s]Scg state(%d), LowPwrCtrl(Cause:0x%x, SelectedCause:0x%x, Action:0x%x)
Line 1738: [%s]reselection from NR. RrcIratInfo 0x%x, NumOfCell %d
Line 1753: [%s]%d) earfcn(%d), pci(%d)
Line 1771: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 1775: [%s]redirection from NR. RrcIratInfo 0x%x
Line 1777: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 1782: [%s]Process LTE_RRC_MOB_CMD_REDIRECT_FROM_NR; Send LTERRC_INT_TRANSITION_TO_INIT(with IRAT redirect info)
Line 1786: [%s]Ignore Forbidden TAI list(%d)
Line 1827: [%s]Redir Earfcn[%d], redirect_time_ms[%d], BlackCellNum[%d] IsSaSilence[%d] BlindRedirect[%d] EutraFreqNum[%d]
Line 1837: [%s]%d) BlkCell[%d]
Line 1845: [%s]NR PLMN (%x), TAC (%d)
Line 1859: [%s]From Nr : %d. earfcn %d
Line 1939: [%s]Blind QRB to NR
Line 1961: [%s]%d) arfcn(%d) SSB(%d)
Line 1992: [%s]QRB to NR (%s).  Uemode %d SaSupp %d Pending %d
Line 1996: [%s]No Need QRB to NR
Line 2010: [%s]QRB to NR not required
Line 2077: [%s]ignore NR QRB REQ in abnormal state
Line 2096: [%s]LTE_RRC_NR_QRB_REQ : %s
Line 2100: [%s]NR SA is silence mode on
Line 2106: [%s]pending QRB under L2X IRAT
Line 2115: [%s]Pending QRB: EndcNrConfOngoing:%d, UPDATE_ENDC_CONFIG:%d
Line 2119: [%s]pending QRB : BPLMN/Search ongoing 
Line 2133: [%s]QRB started
Line 2152: [%s]pending QRB
Line 2166: [%s]pending QRB
Line 2173: [%s]ignore NR QRB REQ => susp state
Line 2193: [%s][NrSilenceModePostAction] NrSaMode(%d) SaSilenceMode(%d) ReceivedMsg(%d) volteStatus(%d)
Line 2255: [%s][NrSilenceModePostAction] Check NSA recovery. ReconfigWithNrRelease(%d) Last(%d/%d) CurAcq(%d/%d)
Line 2308: [%s]HO from NR. RrcIratInfo 0x%x
Line 2322: [%s]LTERRC_MALLOC_FAIL : FILE:%s LINE:%d FUNC:%s
Line 2332: [%s]LTE Container from NR : 
Line 2338: [%s]targetRAT-MessageContainer is DL-DCCH message
Line 2344: [%s]targetRAT-MessageContainer is RRCConnectionReconfiguration
Line 2349: [%s]Ignore Forbidden TAI list(%d)
Line 2391: [%s]Process pending QRB when first reconfig
Line 2395: [%s]Reconfiguration ignored for QRBtoNR
Line 298: [%s][ENDC BlackList] delete list 1 (lteIdx:%d nrIdx:%d) (%d %d)
Line 300: [%s][ENDC BlackList] => earfcn:%d pcid:%d / arfcn:%d pcid:%d
Line 317: [%s][ENDC BlackList] delete list 2 (lteIdx:%d nrIdx:%d) (%d %d %d)
Line 319: [%s][ENDC BlackList] => earfcn:%d pcid:%d / arfcn:%d pcid:%d
Line 414: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 415: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 424: [%s]DB CONFIRMED : LteRrcCommRbInfo_t  mismatch State:%d Status:%d
Line 424: [%s]DB CONFIRMED : LteRrcCommRbInfo_t  mismatch State:%d Status:%d
Line 424: [%s]DB CONFIRMED : LteRrcCommRbInfo_t Wrong Status %d
Line 441: [%s]DB CONFIRMED : LteRrcSrbCommInfo Wrong Status %d
Line 520: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 521: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 529: [%s]DB CONFIRMED : LteRrcDrbCommInfo  mismatch State:%d Status:%d
Line 529: [%s]DB CONFIRMED : LteRrcDrbCommInfo  mismatch State:%d Status:%d
Line 529: [%s]DB CONFIRMED : LteRrcDrbCommInfo Wrong Status %d
Line 548: [%s]DB CONFIRMED : LteRrcDrbCommInfo Wrong Status %d
Line 630: [%s][UpdateDrb] Drb Index(%d) Pendingflag(%d) is not reverted
Line 373: [%s][UpdateDrb] Hit revert rbid exsit. Drb Index(%d)
Line 399: [%s][UpdateDrb] Drb Index(%d) NrPdcpUsed[%d]!!
