Line 278: [RXF] LTE RFD RXF init
Line 397: [WA] ADC SW RESET: RFD_RSNGEN_MODE_CC%d registers change (0x55->011->0x55->0x0)
Line 3151: [SC] InitRxfilterIqDump(%d)
Line 3309: [RXF][DUMP][%4d] I;%d; Q;%d;
Line 3589: [RXF][OOB] DcrIqcControlForDiv invalid DCR CC(%d)
Line 3611: [RXF] DcrIqcControlForDiv RF_CC(%d), ENABLE(%d), 
Line 2160: [RXF] SetAgcGainIdx: mxr(%d), gain(%d, %d), ovr(%d, %d)
Line 860: [RXF] ChangeRfPath(CC%d): rf(%d), mxr(%d), rtg(%d), pgc(%d), mode(%x), bw(%d)
Line 1842: [RXF] SetRxFilterInput: rf(%d), dcr(%d), mode(%x), bw(%d)
Line 369: [WA] ADC SW RESET: RFD_RSNGEN_MODE_CC%d registers set (0x0)
Line 951: [RXF] ChangeMxrSel(CC%d): rf(%d), mxr(%d), rtg(%d), pgc(%d), mode(%x), bw(%d)
Line 1075: [RXF] ChangeRxMode(CC%d): rf(%d), mxr(%d), rtg(%d), pgc(%d), mode(%x), bw(%d)
Line 1186: [RXF] ChangeDlBw(CC%d): rf(%d), mxr(%d), rtg(%d), pgc(%d), mode(%x), bw(%d)
Line 3224: [SC] EnableRxfltDump(forEvenSlot): sfn(%d), tti(%d), offset(%d), next tti(%d), RXF_DM_DATA_RX_PATH_SEL(%d)
Line 3286: [SC] EnableRxfltDump(forOddSlot): sfn(%d), tti(%d), offset(%d), next tti(%d), RXF_DM_DATA_TX_PATH_SEL(%d) 
Line 1324: [RXF] Unknown DCR mode(%d)
Line 1334: [RXF] ConfigDCR: dcr(%d), mode(%d)
Line 1399: [RXF] Unknown IQC mode(%d)
Line 1409: [RXF] ConfigIQC: iqc(%d), mode(%d)
Line 2051: [RXF][OOB] SetAgcRmsValue invalid MXR CC(%d)
Line 2072: [RXF] SetAgcRmsValue: mxr(%d), rms(%d)
Line 2094: [RXF][OOB] GetAgcRmsValue invalid MXR CC(%d)
Line 2106: [RXF] GetAgcRmsValue: mxr(%d), rms(%d)
Line 2636: [SetAgcDataDump] Set RXF_4G_AGC_DATA_DUMP(0x%X) reset
Line 2641: [SetAgcDataDump] Set RXF_4G_AGC_DATA_DUMP(0x%X) enable
Line 2650: [SetAgcDataDump] Set RXF_4G_AGC_DATA_DUMP(0x%X) disable
Line 2710: [RXF] GetAgcDataDump: tti(%d), length(%d)
Line 2711: [RXF] DUMP0[0-4]: %08x %08x %08x %08x %08x
Line 2712: [RXF] DUMP1[0-4]: %08x %08x %08x %08x %08x
Line 2713: [RXF] DUMP0[5-9]: %08x %08x %08x %08x %08x
Line 2714: [RXF] DUMP1[5-9]: %08x %08x %08x %08x %08x
Line 2788: [RXF] GetRxDelay: tsic_config(%d), tsic_cc(%d), mxr_sel(%d), tsic_delay(%d)
Line 2794: [RXF] GetRxDelay: mxr(%d), delay(%d), 3m_slo(%d)
Line 2737: [RXF] ConfigTsic: cc(%d) tsicConf(%d)
Line 2852: [RXF] [MAR] DCR: ANT%d(%d, %d), ANT%d(%d, %d), PWR_DB(%06d)
Line 2861: [RXF] [MAR] [RFD] DCR: ANT%d[0x%X], ANT%d[0x%X]
Line 2889: [RXF] IQC: TAP%d ANT%d COEF(%d, %d) I^2+Q^2(%d) Normal Range[0,630]
Line 2898: [RXF] IQC: TAP%d ANT%d COEF(%d, %d) I^2+Q^2(%d) Normal Range[0,630]
Line 3556: [RXF] GetScellAgcValue(RXF_AGCx_VALUE): CC0(%x, %x) CC%d(%x, %x)
Line 3655: [RXF] SetRxfTddClockGating(%d)
Line 716: [RXF] ConfigRxFilter(CC%d): rf(%d), mxr(%d), rtg(%d), pgc(%d), mode(%x), bw(%d)
Line 1485: [RXF] Disable RXF_EXT_LNA_MODE for dcr_sel %d
Line 1576: [RXF] Not supported CC path(%d) for D2D
Line 1600: [RXF] Not supported CC path(%d) for D2D
Line 1639: [RXF] Unknown AGC mode(%d)
Line 1681: [RXF] ConfigAGC: rf(%d), dcr(%d), mxr(%d), bw(%d), mode(%d)
Line 2207: [RXF][OOB] GetAgcGainIdx invalid MXR CC(%d)
Line 2214: [RXF] Get AgcGainIdx(%x, %x)
Line 2403: [RXF] SetRxDmixerFreq for SCG: mxr(%d), mode(%d), freq(%d, %d), dmxr(%d, %d), bw(%d)
Line 2408: [RXF] SetRxDmixerFreq: mxr(%d), mode(%d), freq(%d, %d), dmxr(%d, %d), bw(%d)
Line 2454: [RXF] SetRxDmixerFreq: mxr(%d), dmxr_freq_init(%d->%d)
Line 2460: [RXF] SetRxDmixerFreq: mxr(%d), dmxr_freq_offset(%d->%d)
Line 2524: [SC] HALRXF_4G_GetRxDmixerFreq for SCG during DRDS (%d)
Line 2529: [SC] HALRXF_4G_GetRxDmixerFreq (mode: %d), mxr_sel: %d, freq: %d, bw: %d
Line 2544: [SC] HALRXF_4G_GetRxDmixerFreq for SCG during DRDS (%d)
Line 2556: [SC] HALRXF_4G_GetRxDmixerFreq (mode: %d), mxr_sel: %d, freq: %d, bw: %d, freq_value: %d, dmxr_freq_init: %d
Line 2599: [RXF] SetDmDataDump: Invalid DM DUMP MODE(%d)
Line 2611: [RXF] SetDmDataDump: mode(%d), dump(0x%x), max_size(%d)
Line 3811: [RXF][OOB] GetLnaStatus invalid DCR CC(%d)
Line 3825: [RXF] GetLnaStatus: dcr(%d), LnaStatus(%x), EXT_LNA_OUT(%x)
Line 3763: [RXF][OOB] ConfigGainSplitterForEDV invalid DCR CC(%d)
Line 3788: [RXF] ConfigGainSplitter: mode(%x), dcr(%d), reg32data(%x)
Line 3689: [4G_DRDS] SetAgcAntInputForEdvSpecialCase : RXF_AGC_ANT_INPUT_AVG_SEL_x.reg , input (%x)
Line 3703: [4G_DRDS] SetAgcAntInputForEdvSpecialCase : RXF_GAIN_AVG_INPUT , input (%x)
Line 3717: [4G_DRDS] SetAgcAntInputForEdvSpecialCase : RXF_AGC_ANT_INPUT, input (%x)
Line 3737: [RXF] SetAgcAntInputForEdvSpecialCase: avg_sel(%08x, %08x) avg_input(%08x, %08x) input(%08x, %08x)
Line 3863: [RXF][PWR_OPT] HALRXF_4G_ControlRxFilterClk (Hold:%d, RXF_TDD_CLK_GATE_ON:0x%X, RFD_QS_ON_TICK:0x%X, RFD_QS_OFF_TICK:0x%X)
Line 3877: [RXF][PWR_OPT] HALRXF_4G_ControlRxFilterClk (Hold:%d, RXF_TDD_CLK_GATE_ON:0x%X, RFD_QS_OFF_TICK:0x%X, RFD_QS_ON_TICK:0x%X)
Line 346: [HAL] RfdDataBlock: rfd_path(%d) OUT_DATA_SEL(0x%X)
Line 3054: [RXF] AGC: ANT%d, PWR_DB(%d), GAIN(%d, %06d, %3d), HYS(%d), PGC(0x%x)
Line 3085: [RXF] PM: ANT%d, DB_PWR(%8d), Linear_PWR(%d, %d, %d), DVGA offset(%d, 0x%x)
Line 3112: [RXF] PATH CC%d: DCR_SEL(0x%x), MIXER_NEXT(0x%x), FFT_INPUT_SEL[%d](0x%x), DMIXER(%d)
Line 2972: [RXF] DR AGC GAIN(DrType%d): MCG(%d, %d), SCG(%d, %d)
Line 1903: [RXF] SetRxFilterSysTime MXR_SEL(0x%X), MXR_list[0](0x%X) slo_num(0x%X)
Line 1914: [RXF] SetRxFilterSysTime RXF_DCR_SYSTIME4G_%d (0x%x -> 0x%X)
Line 1965: [RXF] SetRxFilterSysTime: rf(%d), dcr(%d), mxr(%d), rtg(%d)
Line 2235: [RXF] Do not read AGC value as RF is not available
Line 2241: [RXF][OOB] GetAgcGainIdx_DRX_backup invalid MXR CC(%d)
Line 2025: [RXF] GetSloSelList: rf(%d), mxr(%d, %d, %d, %d), mode(%d)
Line 4050: [RXF][OOB] ConfigMIXER_INIT invalid MXR CC(%d)
Line 4068: [HALRXF_4G] HALRXF_4G_ConfigMIXER_INIT: mxr(%d)
Line 4033: [RXF][OOB] ConfigDCR_INIT_INPUT invalid DCR CC(%d)
Line 4042: [HALRXF_4G] HALRXF_4G_ConfigDCR_INIT_INPUT: dcr_sel(%d)
Line 4009: [RXF][OOB] ConfigIQD invalid DCR CC(%d)
Line 4025: [HALRXF_4G] HALRXF_4G_ConfigIQD: rf_path(%d), reg32data(%d)
Line 3999: [HALRXF_4G] HALRXF_4G_ConfigSRRCF_INIT: mxr(%d)
Line 3977: [RXF][OOB] ConfigDvga invalid MXR CC(%d)
Line 3989: [HALRXF_4G] HALRXF_4G_ConfigDvga: mxr(%d), enable(%d)
Line 3958: [RXF][OOB] ConfigOPERATION invalid DCR CC(%d)
Line 3966: [HALRXF_4G] HALRXF_4G_ConfigOPERATION: dcr_sel(%d)
Line 4114: [HALRXF_4G] HALRXF_4G_set3mBwSlo: enable(%d), mxr_sel(%d), RXF_RATE_OV_x(0x%x), RXF_DCF_SLO_OV_x(0x%x) RXF_DCF_2ND_OV_x(0x%x) RXF_DCF_3RD_OV_x(0x%x), RXF_DCF_4TH_OV_x(0x%x), RXF_SRRC_OV_x(0x%x)
Line 4075: [HALRXF_4G] HALRXF_4G_Set3mBwSloVariable: enable(%d), mxr_sel(%d)
