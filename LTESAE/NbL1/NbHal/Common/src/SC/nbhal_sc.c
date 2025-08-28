Line 182: [SC] ConfigRTG: mixer(%d),  time_offset(%d), RTG(%d, %d, %d, %d)
Line 215: timeOffset(%d), rtgOffset(%d), sfnOffset(%d), clkOffset(%d), targetSFN(%d)
Line 222: original time: SFN[%d], TTI[%d], clk[%d]
Line 223: modified time: SFN[%d], TTI[%d], clk[%d]
Line 246: [SC] SetSFN: sfn(%d)
Line 295: [SC] TRF Bypass(%d), Searching with TRF On(TRF Processing Delay 96) is not considered
Line 302: [SC] GetNsssRtg: BufStartRtgOffset(%d), BufferStartPosInRTG(%d), NsssDetectTiming(%d), Index20ms(%d), NsssSymbolStartPos(%d), FramePos80ms(%d), RtgFrameOffset(%d)
Line 468: [SC] NBHALSC_ProcSync10msIntr
Line 704: [SC] HALSC_ProcSync10ms %d
Line 707: [SC] HALSC_ProcSync10ms %d
Line 715: [SC] HALSC_ProcSync10ms %d
Line 768: [SC][DCXO] temperature(%d)
Line 864: [RLM] rlmMetric(%d) rlmThreshold(%d) n310(%d) n311(%d) rMax(%d) strReliabilityCnt_OutOfSync(%d) strReliabilityCnt_InSync(%d)
Line 874: [RLM] (SFN:%d) Out Sync Rate = %d (Metric:%d, Threshold:%d)
Line 881: [RLM] In Sync Rate = %d (Metric:%d, Threshold:%d)
Line 895: [RLM] Out Sync Rate = %d (Metric:%d, Threshold:%d)
Line 1059: [SC] NBHALSC_GetUlBw: type(%d) cc(%d) ul_bw(%d)
Line 1072: [SC] HALSC_GetUlBw: type(%d) cc(%d) slo_pair_num(%d) dl_bw(%d)
Line 1082: [SC] HALSC_GetUlBw: type(%d) cc(%d) dl_bw(%d)
Line 1144: [RXF][DUMP] DumpDoneIntr:Client%d hdr(size:%d, magic_num:%d)
Line 1181: [SC] ProcMtm1msIntr(forEvenSlot): sfn(%d), tti(%d), offset(%d), mode(%d)
Line 1227: [SC] ProcMtm1msIntr(forOddSlot): sfn(%d), tti(%d), offset(%d), mode(%d)
Line 1254: [SC] NBHALSC_EnableIqDump
Line 1274: [SC] NBHALSC_DisableIqDump
Line 1298: NBHALSC_ProcSysTimeCommonIntr %d
Line 1545: [SC] InitCCInfo
Line 1671: [SC] ConfigAntenna: Not supported antenna config(%d)
Line 1751: Change cell ID : %d -> %d
Line 1760: Change Downlink BW : %d -> %d
Line 1763: [SC] SetDlSystemInfo: mode(%d), [CID, BW, CP]([%d, %d, %d] -> [%d, %d, %d])
Line 1834: [SC] InitSync
Line 2250: [SC] ChangeCoreState: on_off(%d)
Line 2353: [SC] NBHALSC_UeState Change (%s) -> (%s)
Line 2389: [SC] CC Info(cc:%d, band:%d, bw:%d, rx_mode:%d, earfcn:%d, freq:%d)
Line 2396: [SC] CC Info(cc:%d, band:%d, bw:%d, rx_mode:%d, earfcn:%d, freq:%d)
Line 2414: [SC] SetSyncMode(%d -> %d)
Line 2582: [SC] SetFePathIdx(CC%d): Not supported path(%d)
Line 2587: [SC] SetFePathIdx(CC%d): path(%d), idx(%d)
Line 2640: [SC] HALSC_SetMifCpuClk: Owner(%d), Scenario(%d)
Line 2682: [SC] HALSC_RemoveMifCpuClk: Owner(%d)
Line 2806: [SC] SetAntennaMode: op_mode(%d), rx_mode(%x -> %x)
Line 2916: [SC] HALSC_GetRxMode: eDV_Active(%d) IsDuringSCGMeas(%d), refer to MCG halsc_cc_info
Line 3488: HALSC_SetDlEarfcn : dl_earfcn(%d), rf_band(%d), dl_freq(%d)
Line 3538: NBHALSC_SetUlEarfcn : ul_earfcn(%d), ul_freq(%d), CarrierFreqOffset(0x%x)
Line 3600: NBHALSC_GetUlEarfcn: type(%d), halsc_cc_info[cc].ul_bw(%d), cc(%d), slo_cc(%d)
Line 3601: halsc_cc_info[slo_cc].ul_bw(%d), halsc_cc_info[cc].ul_earfcn(%d), halsc_cc_info[cc].ul_rf_earfcn(%d)
Line 3611: NBHALSC_GetUlEarfcn: halsc_cc_info[%d].slo_pair_num(%d)
Line 3757: [SC][DCXO] HALSC_SetDcxoCheckPoint : ratId(%d), HALSC_AfcPdmStored(%d), temp(%d)
Line 3853: NBHALSC_GetAfcPdmValue(Modem is power off state(afc_pdm=%d))
Line 3889: [SC] GetAfcPdmValue: afc_pdm(%d)
Line 3988: [SC] GetAfcPdmValueInFlash: AFC CAL DATA(%d)
Line 4016: [SC][DCXO] NBHALSC_SetDcxoAfcPdmValue : NBHALSC_AfcPdmDefault(%d), NBHALSC_AfcPdmCal(%d)
Line 4055: NBHALSC_ResetAfcPdmValue(use cal data due to PowerON)(HALSC_AfcPdmStored:%d)
Line 4061: NBHALSC_ResetAfcPdmValue(return due to Modem PD)(HALSC_AfcPdmStored:%d)
Line 4071: NBHALSC_ResetAfcPdmValue(use NBHALSC_AfcPdmStored)(NBHALSC_AfcPdmStored:%d NBHALSC_AfcPdmDefault:%d NBHALSC_AfcPdmCal:%d(%d))
Line 4101: NBHALSC_ResetAfcPdmValue(use NBHALSC_AfcPdmSrchFO)(NBHALSC_AfcPdmSrchFO:%d(%dHz) NBHALSC_AfcPdmStored:%d NBHALSC_AfcPdmDefault:%d NBHALSC_AfcPdmCal:%d(%d))
Line 4104: NBHALSC_AfcPdmMode(%d))
Line 4112: NBHALSC_ResetAfcPdmValue(use NBHALSC_AfcPdmCal)(NBHALSC_AfcPdmStored:%d NBHALSC_AfcPdmDefault:%d NBHALSC_AfcPdmCal:%d(%d))
Line 4123: NBHALSC_ResetAfcPdmValue(use NBHALSC_AfcPdmDefault)(NBHALSC_AfcPdmStored:%d NBHALSC_AfcPdmDefault:%d NBHALSC_AfcPdmCal:%d(%d))
Line 4133: NBHALSC_ResetAfcPdmValue(use 4G CAL DATA)(4G:%d NBHALSC_AfcPdmStored:%d NBHALSC_AfcPdmDefault:%d NBHALSC_AfcPdmCal:%d(%d))
Line 4143: NBHALSC_ResetAfcPdmValue(use default due to large pdm offset)(NBHALSC_AfcPdmStored:%d NBHALSC_AfcPdmDefault:%d NBHALSC_AfcPdmCal:%d(%d))
Line 4151: NBHALSC_ResetAfcPdmValue(use NBHALSC_AfcPdmStored)(NBHALSC_AfcPdmStored:%d NBHALSC_AfcPdmDefault:%d NBHALSC_AfcPdmCal:%d(%d))
Line 4166: NBHALSC_ResetAfcPdmValue(find Y value)(NBHALSC_AfcPdmStored:%d afc_pdm:%d pdm_offset[%d]:%d)
Line 4170: NBHALSC_ResetAfcPdmValue(find Y value)(NBHALSC_AfcPdmStored:%d afc_pdm:%d pdm_offset[%d]:%d)
Line 4201: [SC][DCXO] HALSC_SetAfcDcxoDiffDrx : Ignored , ModempowerON %d
Line 4216: [SC][DCXO] HALSC_SetAfcDcxoDiffDrx : HALSC_AfcPdmStored(%d), Diff(%d), totalPdm(%d), temp(%d)
Line 4238: [SC] InitforDRX
Line 4278: [SC] SwReset
Line 4314: [SC] NBHALSC_InitFrontEnd : active(%d), IsWakeupOnGoing(%d), HALSC_AfcPdmStored(%d)
Line 4394: [SC] NBHALSC_ReInitSync !!!
Line 4408: [SC] NBHALSC_ReInitSync : HALSC_AfcPdmStored(XoOffset)(%d[ppt]), DmxrPptOffs(%d[ppt]) , ccinfo_dl_freq(%d), ccinfo_dl_earfcn(%d)
Line 4416: [SC] NBHALSC_ReInitSync : dmixer_freq_offset(%d)
Line 4451: [SC] NBHALSC_EnableEvenSlot1msIntr
Line 4474: [SC] NBHALSC_EnableOddSlot1msIntr
Line 4547: [SC] NBHALSC_ConfigAGC:AgcMode(%d), cc_info->path[AGC_SEL_IDX](%d), cc_info->sys_info.dl_bw(%d)
Line 4616: [SC] Not supported CC index(%d)
Line 4648: [RSSISCAN]agc_db_power[0]: %d, agc_gain[0]: %d, cal_rssi_offset_ant[0]: %d, cal_offset[0]: %d, rx_rssi[0]: %d
Line 4649: [RSSISCAN]agc_db_power[1]: %d, agc_gain[1]: %d, cal_rssi_offset_ant[1]: %d, cal_offset[1]: %d, rx_rssi[1]: %d
Line 4689: [SC][DEBUG] DCXO FREQ OFFSET: srch_FO(%d), AfcPdmOffset(%d), HALSC_AfcPdmStored(%d)
Line 4721: [SC] NBHALSC_UpdateAfcPdmBySrchFO srch_freq_offset(%d), rf_freq(%d), gNbHALSC_AfcPdmSrchFO(%d)
Line 4724: [SC] rf_freq is 0.
Line 4736: [SC] control_per_pdm is 0.
Line 4740: [SC] NBHALSC_UpdateAfcPdmBySrchFO: gNBHALSC_AfcPdmSrchFO(%d, %dHz) gNBHALSC_AfcPdmStored(%d) HALSC_AfcPdmCal(%d) freq(%d)
Line 4793: HALSC_StoreAfcPdmValue(force_update)(HALSC_AfcPdmStored:%d )
Line 4794: HALSC_StoreAfcPdmValue(force_update)(HALSC_AfcPdmStored:%d )
Line 4805: HALSC_StoreAfcPdmValue(due to limitation)(afc_pdm:%d HALSC_AfcPdmStored:%d LABS(afc_angle):%d)
Line 4806: HALSC_StoreAfcPdmValue(due to limitation)(afc_pdm:%d HALSC_AfcPdmStored:%d LABS(afc_angle):%d)
Line 4816: Store HALSC_AfcPdmStored(%d)(%d) : %d
Line 4886: [SC] HoldTdpBlock: PDM(%d), AGC(%d, %d)
Line 4909: [SC] ChangeIqDumpPath(%d) : sfn(%d), tti(%d), offset(%d)
Line 4936: [SC] HALSC_Config4RxModeforMTM(CC%d): cmd(%d)
Line 4985: [Config4RxMode]SetTdpState(CC%d):state(%d->%d)
Line 4999: [SC] Config4RxMode: CC(%d) is already paired with CC(%d), type(%d)
Line 5005: [SC] Config4RxMode: Not supported RF band (earfcn: %d) for 4Rx
Line 5021: [SC] Config4RxMode: Not found available CC for 4Rx, cc(%d), div_cc(%d)
Line 5045: [Config4RxMode]SetTdpState(CC%d):state(%d->%d)
Line 5072: [Config4RxMode] div_info RF PATH(%d) PGC_SEL (%d)
Line 5079: [SC] Config4RxMode: Enable 4Rx for CC(%d), RF band(earfcn: %d)
Line 5084: [SC] Config4RxMode(CC%d): Unknown command(%d)
Line 5134: [SC] ChangeUeAntennaConfig: changed cc_info->rx_mode(%x -> %x)
Line 5141: [SC] ChangeUeAntennaConfig: changed cc_info->rx_mode(%x -> %x)
Line 5176: [SC] ChangeUeAntennaConfig: prev_ant(0x%x) cur_ant(0x%x)
Line 5257: [SC] ChangeUeAntennaConfig(CC%d): rx_mode(%x -> %x) after idle DRX wakeup
Line 5292: [SC] ChangeUeAntNum(skip): num_ant(%d), rx_mode(%x)
Line 5312: [SC] ChangeUeAntNum: Not supported UE antenna number(%d)
Line 5397: [SC] ChangeUeAntenna_DiversityCCEnable: div_cc(%d), div_info->rx_mode (%d)
Line 5527: [SC] SaveDcValue(CC%d)(rx0): UDPATE DC(%d,%d)
Line 5535: [SC] SaveDcValue(CC%d)(rx1): UDPATE DC(%d,%d)
Line 5584: [SC] SetPathInfo(failure): demod %d, rtg %d, td_buf %d, output %d
Line 5675: [SC] CheckUeAntennaConfig(skip): cc(%d), rx_mode(%x)
Line 5695: [SC] CheckUeAntennaConfig: SetTdpState(CC%d), state(%d->%d)
Line 5699: [SC] CheckUeAntennaConfig(skip): 4Rx is not supported on CC(%d)
Line 5705: [SC] IsRxPathOff (%d)
Line 5711: [SC] CheckUeAntennaConfig(CC%d): rx_mode(%x -> %x)
Line 5732: [SC] CheckUeAntennaConfig(CC%d): rx_mode(%x) backuped
Line 5805: dmxr %d freqOffset %d fePathIdx %d dl_bw %d
Line 5835: NBHALSC_GetDmixerFreq: dmxr_freq_value %d
Line 5863: [TRF] NbGetBestTrf bestoffset(%u), cnt(%d), checkingCnt(%d)
Line 5869: [TRF] NbGetBestTrf skip first 100ms, bestOffset(%u), cnt(%d)
Line 5877: [TRF] NbGetBestTrf checking every 100ms bestOffset(%u), Cnt(%d), checkingCnt(%d)
Line 5883: [TRF] NbGetBestTrf continue checking bestOffset(%u)
Line 5891: [TRF] Send BEST_TRF_IND bestoffset(%u), cnt(%d), checkingCnt(%d)
Line 5917: [TRF] NBHALSC_SetBestTrf  offset range(%d)
Line 5935: [TRF] NBHALSC_GetTRFBypass  TrfBypass(%d)
Line 5954: [TRF] NBHALSC_SetTRFChecking  gNBHALSC_TrfChecking(%d)
Line 3815: HALSC_ConversionFrom2GCalValue(cal_voltage:%d afcPdmValue:%d Cal_slope:%d Cal_offset:%d range_idx:%d)
Line 3816: HALSC_ConversionFrom2GCalValue(recal_AFC_DAC:%d cal_voltage:%d DAC_slope:%d DAC_offset:%d range2_idx:%d)
Line 3821: HALSC_ConversionFrom2GCalValue(Use 2G cal recal_AFC_DAC:%d)
