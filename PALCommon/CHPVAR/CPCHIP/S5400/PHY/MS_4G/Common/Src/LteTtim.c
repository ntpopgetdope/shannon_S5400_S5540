Line 696: TimeInfo1: TTIM:%x ULP:%x CCH:%x FDP:%x CSI:%x TDP:%x HARQ:%x
Line 718: [DVFS_CPU_LOG] TimeInfo0: TTIM:%x ULP:%x CCH:%x FDP:%x CSI:%x TDP:%x HARQ:%x
Line 721: TimeInfo0: TTIM:%x ULP:%x CCH:%x FDP:%x CSI:%x TDP:%x HARQ:%x
Line 920: (I) Prior Group in DualC is %d
Line 998: [LAA_DEBUG][CG : %d][CC%d][lte_demod_upt_flag_cur : %d][lte_demod_upt_flag_prv : %d]
Line 1033: SCG: Release @ TTIM, cnt(%d)
Line 1171: SL0TtiBd_Isr:%d
Line 1179: SL1TtiBd_Isr:%d
Line 1207: ==========DSP TTI[%d] CLK61[%d]==========
Line 1230: (F)Ttim_dummyISR (%d)
Line 1256: (F)Ttim_EnableTimer ERROR, NO registration id(%d)
Line 1326: (F) already timer registered id(%d)
Line 1438: Ttim_InitSWTimer
Line 1468: Ttim_DisableSWTimer_init: mode(%d), cell_group(%d)
Line 1521: Ttim_DoOnMIB SFN_all:%d, SFN:%d, tti:%d, rtg:0x%x
Line 1656: HARQ MOVER or SCC State. core:%d HM0_STATUS=0x%x, HM1_STATUS=0x%x, SCC_STATE=0x%x  CBG0_STATUS=0x%x  CBGM1_STATUS=0x%x
Line 1941: SW_RESET BndChk: dly(%d), diff(%d), GS,GC,TTI,CLK(store %d,%d,%d,%d), (sw_reset %d,%d,%d,%d)
Line 1977: [SW_RESET] SW_RESET_ASSERT_WAIT 1 tti !!!
Line 2049: SW_RESET(ASSERT) tti(%d) rtg(%d-%d=%d) mode(%d) state(%d->%d) activeCoreBitmap:0x%x GetNrCcCounterEachCore1  %d
Line 2102: SW_RESET(ASSERT_CORE1) tti(%d) rtg(%d-%d=%d) mode(%d) state(%d->%d)
Line 2107: [warning] CORE0 SW_RESET is not triggered yet!!!!!!
Line 2123: SW_RESET tti(%d) rtg(%d) mode(%d) state(%d->%d)
Line 2152: SW_RESET CCH Clock Gating OFF
Line 2171: SW_RESET CCH Clock Gating ON
Line 2216: ResetCore(%d->%d)
Line 2270: SW_RESET triggered, reset_mode(%d), reset_state(%d) caller(%d)
Line 2347: UW_RESET triggered, corek(%d), uw_reset_state(%d), preVal(%d), newVal(%d), FR1actNum(%d), FR2actNum(%d)
Line 2455: subcore is already on by NR 
Line 2464: Subcore_NoReset_trigger core1 update POSTCE_SW_CLK_ON: 0x%x -> 0x%x
Line 2636: TRPRST: corek(%d), DnStart - regpoe(0x%x), sync(0x%x), crs(0x%x,0x%x,0x%x), mrs(0x%x,0x%x)
Line 2644: TRPRST: cch_wgen_cc_info(0x%x), sch_csi_wgen_cc_info(0x%x), demap_bypass(0x%x), pseudo(0x%x), cc_bitmap(0x%x), drs_dmrs_info(0x%x)
Line 2655: TRPRST: epdcch_set_info(0x%x,0x%x), start_time(0x%x), wm_conf,ow,ccs_en(0x%x,0x%x,0x%x), tc_bitmap(0x%x), ca_on(0x%x)
Line 2858: (I) Update core%d cellGroup%d Timecorr CGx_SC_REGTICK_OFFSET[0x%x]
Line 2924: TRPRST: state - prv(%d), cur(%d)
Line 3009: [TRPRST] TrpRst_Update_State: invalid state(%d)
Line 3060: [TDP][REG]fdagcpathXcfg_bitmap(0x%x), tc_serv_config_ccX(0x%x)
Line 3084: [TRPRST] active_cc(0x%x), prev_ca_on(0x%x), ca_on(0x%x)
Line 3101: IPC: LTE demod release cnf
Line 3110: RxSBuf_PathOn
Line 3403: IPC to L1: PDCCH_ONLY state(%d)
Line 3489: [DI_CHK] activecc force update in ttim: (before) num(%d,%d)
Line 3498: [DI_CHK] ptr(%d/%d)
Line 3505: [DI_CHK] buf(%d), tdbufcc(0x%x), gs(%d, %d, %d, %d, %d, %d, %d, %d)
Line 3513: [DI_CHK] atti(%d), act(%d,0x%x,0x%x), cg(0x%x), ca_on(0x%x), bndtickM(0x%x,0x%x),S(0x%x,0x%x)
Line 3537: [SubCoreState] active_cc_bitmap(0x%x->0x%x), path,info(0x%x,0x%x), reset(%d)
Line 3545: SubcoreState_Reset: invalid onoff(%d)
Line 3711: SpMetric CC(%d) NumPDSCHTTIs(%d) NumPDCCHonlyTTIs(%d)
Line 3729: FdpMetric Total(%d) CC(%d) 1RX(%d) 2RX(%d) 3RX(%d) 4RX(%d)
Line 3745: UlpMetric UL_ANT(%d) PUSCH(%d) PUCCH(%d) TotalTx(%d) MTPL(%d), puschNack(%d)
Line 786: ==========DSP CELL_ID (CC0/CC1/CC2)[%09d](CC3/CC4/CC5)[%09d] (CC6/CC7)[%09d] TTI[%d] CLK61[%d], CA_CFG/CA_ACT#/CELL_GROUP/STACK_ID[%9d] MAX4LAYER/256QAM [0x%x] RED_CTLCH_MON[0x%x][0x%x]CORE1_STATE(0x%x) ==========
Line 800: [Demod] WB_WBCE_STATE_REPORT0:0x%x, WB_WBCE_STATE_REPORT1:0x%x, WB_WBCE_STATE_REPORT2:0x%x, PDCCH_LLR_COUNT:0x%x, LVD_STATUS_MON:0x%x, yCG_DCI_DEC_STATE:0x%x, CCH_DEC_STATE_MON:0x%x, CCH_OBUF_STATE_MON:0x%x SCH_OBUF_CHK[0x%x][0x%x]
Line 807: [MIF][TTI] Release QOS_LTE_PHY_TP_HIGH, CC0 Dlgrant ratio: %d, MIF flag: 0x%08x
Line 2371: Grant_Skip_isr Get_grant_skip_state(%d), grantSkipCnt(%d), GetLteGrantSkipStatus(%d)
Line 2449: UW_RESET corek(%d) state(%d->%d)
Line 1691: core(%d) update POSTCE_SW_CLK_ON: 0x%x -> 0x%x
