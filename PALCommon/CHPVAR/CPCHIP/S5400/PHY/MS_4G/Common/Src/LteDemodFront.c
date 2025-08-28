Line 178: DemodFront_CoreInitialize: FDBUF initialized. corek(%d)
Line 359: RxSampleBuf : All of cc are disabled. (%d) td_buf_idx(0x%x)
Line 427: RxSampleBuf reconfig error : invalid td_buf_cc 0x%0x
Line 467: No FD buf Set in GAP, cell_group: %d
Line 514: RxSampleBuf(RxSBuf_MemInit): DemodCc(%d), tdBufCcIdx(%d), fftInputCC(%d), isEnabled(%d), bw(%d), td_buf_ccX_band(0x%x), td_buf_antX_meminit(cc/div_cc)(0x%x/0x%x), td_buf_opconf(0x%x), ttiNum(%d)
Line 569: RxSampleBuf(RxSBuf_MemDeinit): DemodCc(%d), tdBufCcIdx(%d), fftInputCC(%d/%d), isEnabled(%d), bw(%d), td_buf_ccX_band(0x%x), td_buf_antX_meminit(cc/div_cc)(0x%x/0x%x), ttiNum(%d)
Line 644: RxSampleBuf(FdBufSet): coreIdx(%d), fd_buf_frontcc0_info(0x%x), fd_buf_frontcc0_usedsc_idx(0x%x), fd_buf_frontcc0_dc_ctrl(0x%x), fd_buf_opconfmcginfo0.reg(0x%x)
Line 696: [LTE](F)RxSampleBuf: Path(fft/rxf/dcr)(%d/%d/%d) has occupied by CC(%d), it's overwritten by CC(%d)
Line 701: [LTE](I)RxSampleBuf: Path(fft/rxf/dcr)(%d/%d/%d) has allocated to CC(%d)
Line 711: [LTE](I)RxSampleBuf: fftPath(%d) being disabled by CC(%d), previous CC index(%d)
Line 764: RxSampleBuf(RxPathUpdated): targetCC(%d), pathInfo Path0-7(0x%06x) Path8-Path15(0x%06x), Path16-Path23(0x%06x), Path24-Path31(0x%06x), Path32-Path33(0x%06x), TD_BUF_INPUT_CC_SEL0/1/2/3(0x%x/0x%x/0x%x/0x%x)
Line 766: RxSampleBuf(RxPathUpdated): param(celltype/num/cp/enabled) CC0(0x%06x) CC1(0x%06x) CC2(0x%06x) CC3(0x%06x) CC4(0x%06x), CC5(0x%06x), CC6(0x%06x), CC7(0x%06x)
Line 768: RxSampleBuf(RxPathUpdated): param(td_buf_idx/td_buf_idx_div) CC0(0x%08x) CC1(0x%08x) CC2(0x%08x) CC3(0x%08x) CC4(0x%08x), CC5(0x%08x), CC6(0x%08x), CC7(0x%08x)
Line 791: (F)FFT path %d is allocated to multiple CC, current CC:%d, new CC(ignored):%d
Line 865: RxSampleBuf reconfig error : invalid td_buf_cc 0x%0x
Line 870: RxSampleBuf: targetCC(%d), isEnabled(%d), cellType(%d), cpType(%d), targetTti(%d), rxPathBitmap(0x%x), td_buf_idx(0x%x), td_buf_idx_div(0x%x)
Line 1099: RxSampleBuf(Scell param): CC(%d),div_cc(%d),RxMode(%d),tti(%d),cell_group(%d),cptype(%d), dl_bw(%d), dcrPathIdx(%d)
Line 1132: RxSampleBuf: CC(%d),div_cc(%d),RxMode(%d),tti(%d),cell_group(%d),cptype(%d), dl_bw(%d)
Line 1169: DemodFront: CC(%d), ReconfigMsg(0x%x) -> ReconfigStatus(0x%x)
Line 1311: SKIP MEMDEINIT CC(%d) TTI(%d)
Line 1321: DemodFront: CC(%d) has reconfigured %x -> %x
Line 1360: [DemodFront][Crash prevent]cell group : %d,DC_Get_ScgState :%d, Get_sw_reset_state:%d, FdagcResetCheckFlag : 0x%x hit_condition : %d
Line 1372: Skip the meminit of demod cc(%d) for the RTG CC(%d) RTG(0x%x)
Line 1403: [Debug] LTE DemodFront_status_DebugLog DemodCc:%d TD_BUF_DEBUG_STATUS0:0x%x, TD_BUF_DEBUG_STATUS1:0x%x, TD_BUF_DEBUG_STATUS2:0x%x
Line 1421: [Debug] LTE_TdbufDebugReg : TD_BUF_EN(0x%x), FFT_EN(0x%x), FFT1_EN(0x%x), FFT2_EN(0x%x), FFT3_EN(0x%x), TD_BUF_NRT_EN(0x%x), FFT_NRT_EN(0x%x), FFT_NRT_RX1EN(0x%x), FFT1_NRT_EN(0x%x), FFT1_NRT_RX1EN(0x%x)
Line 1431: [Debug] LTE_TdbufDebugReg : TD_BUF_NRT_EN(0x%x), FFT_NRT_EN(0x%x), FFT_NRT_RX1EN(0x%x), FFT1_NRT_EN(0x%x), FFT1_NRT_RX1EN(0x%x), FD_BUF_OPCONFCGx_MCG(0x%x), FD_BUF_OPCONFCGx_SCG(0x%x)
Line 1443: [LTE_debug] TD_BUF_ANT0/1/2/3CONF(0x%x), TD_BUF_ANT4/5/6/7CONF(0x%x), TD_BUF_ANT8/9/10/11CONF(0x%x), TD_BUF_ANT12/13/14/15CONF(0x%x), TD_BUF_ANT16/17/18/19CONF(0x%x), TD_BUF_ANT20/21/22/23CONF(0x%x), TD_BUF_ANT24/25/26/27CONF(0x%x), TD_BUF_ANT28/29/30/31CONF(0x%x), TD_BUF_ANT32/33CONF(0x%x)
Line 1453: [Debug] LTE_TdbufDebugReg : TD_BUF_CC0/1CONF(0x%x), TD_BUF_CC2/3CONF(0x%x), TD_BUF_CC4/5CONF(0x%x), TD_BUF_CC6/7CONF(0x%x), TD_BUF_CC8/9CONF(0x%x), TD_BUF_CC10/11CONF(0x%x), TD_BUF_CC12CONF(0x%x)
Line 1463: [Debug] LTE_TdbufDebugReg : TD_BUF_CC0/1SCELLCONF(0x%x), TD_BUF_CC2/3SCELLCONF(0x%x), TD_BUF_CC4/5SCELLCONF(0x%x), TD_BUF_CC6/7SCELLCONF(0x%x), TD_BUF_CC8/9SCELLCONF(0x%x), TD_BUF_CC10/11SCELLCONF(0x%x), TD_BUF_CC12SCELLCONF(0x%x)
Line 1473: [Debug] LTE_TdbufDebugReg : TD_BUF_CC0SCELLMAP(0x%x), TD_BUF_CC1SCELLMAP(0x%x), TD_BUF_CC2SCELLMAP(0x%x), TD_BUF_CC3SCELLMAP(0x%x), TD_BUF_CC4SCELLMAP(0x%x), TD_BUF_CC5SCELLMAP(0x%x), TD_BUF_CC6SCELLMAP(0x%x)
Line 1482: [Debug] LTE_TdbufDebugReg : TD_BUF_CC7SCELLMAP(0x%x), TD_BUF_CC8SCELLMAP(0x%x), TD_BUF_CC9SCELLMAP(0x%x), TD_BUF_CC10SCELLMAP(0x%x), TD_BUF_CC11SCELLMAP(0x%x), TD_BUF_CC12SCELLMAP(0x%x)
Line 1492: [Debug] LTE_TdbufDebugReg : TD_BUF_CC0/1BAND(0x%x), TD_BUF_CC2/3BAND(0x%x), TD_BUF_CC4/5BAND(0x%x), TD_BUF_CC6/7BAND(0x%x), TD_BUF_CC8/9BAND(0x%x), TD_BUF_CC10/11BAND(0x%x), TD_BUF_CC12BAND(0x%x)
Line 1500: [LTE_debug] TD_BUF_ANT0/1/2/3MEMINIT(0x%x), TD_BUF_ANT4/5/6/7MEMINIT(0x%x), TD_BUF_ANT8/9/10/11MEMINIT(0x%x), TD_BUF_ANT12/13/14/15MEMINIT(0x%x), TD_BUF_ANT16/17/18/19MEMINIT(0x%x)
Line 1513: [Debug] LTE DemodFront_tdbufcc_DebugLog TD_BUF_NRCC0_SERVCELLCONF:0x%x, TD_BUF_NRCC1_SERVCELLCONF:0x%x, TD_BUF_NRCC2_SERVCELLCONF:0x%x, TD_BUF_NRCC3_SERVCELLCONF:0x%x, TD_BUF_NRCC4_SERVCELLCONF:0x%x, TD_BUF_NRCC5_SERVCELLCONF:0x%x, TD_BUF_NRCC6_SERVCELLCONF:0x%x, TD_BUF_NRCC7_SERVCELLCONF:0x%x, TD_BUF_NRCC8_SERVCELLCONF:0x%x, TD_BUF_NRCC9_SERVCELLCONF:0x%x
Line 1518: [Debug] LTE DemodFront_tdbufcc_DebugLog TD_BUF_NRCC10_SERVCELLCONF:0x%x, TD_BUF_NRCC11_SERVCELLCONF:0x%x, TD_BUF_NRCC12_SERVCELLCONF:0x%x
Line 1525: [Debug] LTE DemodFront_tdbufcc_DebugLog TD_BUF_CCxDISABLE_0123:0x%x, TD_BUF_CCxDISABLE_4567:0x%x, TD_BUF_CCxDISABLE_89AB:0x%x, TD_BUF_CCxDISABLE_C:0x%x
Line 1538: [Debug] LTE DemodFront_tdbufcc_DebugLog TD_BUF_CC0FFTOFFSET:0x%x, TD_BUF_CC1FFTOFFSET:0x%x, TD_BUF_CC2FFTOFFSET:0x%x, TD_BUF_CC3FFTOFFSET:0x%x, TD_BUF_CC4FFTOFFSET:0x%x, TD_BUF_CC5FFTOFFSET:0x%x, TD_BUF_CC6FFTOFFSET:0x%x, TD_BUF_CC7FFTOFFSET:0x%x, TD_BUF_CC8FFTOFFSET:0x%x, TD_BUF_CC9FFTOFFSET:0x%x
Line 1543: [Debug] LTE DemodFront_tdbufcc_DebugLog TD_BUF_CC10FFTOFFSET:0x%x, TD_BUF_CC11FFTOFFSET:0x%x, TD_BUF_CC12FFTOFFSET:0x%x
Line 1549: [Debug] LTE DemodFront_tdbufcc_DebugLog TD_BUF_CC10FFTOFFSET:0x%x, TD_BUF_CC11FFTOFFSET:0x%x, TD_BUF_CC12FFTOFFSET:0x%x
Line 1562: [Debug] LTE DemodFront_tdbufcc_DebugLog NRPATHSSBINTIND:0x%x, FDAGCPATH0CFG:0x%x, FDAGCPATH1CFG:0x%x, FDAGCPATH2CFG:0x%x, FDAGCPATH3CFG:0x%x, FDAGCPATH4CFG:0x%x, FDAGCPATH5CFG:0x%x, FDAGCPATH6CFG:0x%x, FDAGCPATH7CFG:0x%x, FDAGCPATH8CFG:0x%x
Line 1575: [Debug] LTE DemodFront_tdbufcc_DebugLog LTEPATHINTIND:0x%x, FDAGCNRPATH0CFG:0x%x, FDAGCNRPATH1CFG:0x%x, FDAGCNRPATH2CFG:0x%x, FDAGCNRPATH3CFG:0x%x, FDAGCNRPATH4CFG:0x%x, FDAGCNRPATH5CFG:0x%x, FDAGCNRPATH6CFG:0x%x, FDAGCNRPATH7CFG:0x%x, FDAGCNRPATH8CFG:0x%x
