Line 1064: [Step1] overwrite mode set !!!
Line 1119: activeStackId %d [FA%d] requestPschMultipath(isFirst=%d, s1_post_acc=%d, readPostAcc=%d, SrchClkScaleDown=%d)
Line 1218: HALSRCH_3G_PschMultiPath_GetBitGain: ScdRxDivBitSel=%d ScdCorrBitSel=%d ScdEcBitSel=%d ScdDataBitSel=%d
Line 1314: [FA%d] HALSRCH_3G_SschScrCodeGroup_StartStep2Searcher: pathOffset=%d, post_acc=%d, CombinedSlot=%d, AccMode=%d, rxDiv=%d, SrchClkScaleDown=%d
Line 1322: [read reg] HALSRCH_3G_SschScrCodeGroup_StartStep2Searcher: pathOffset(halfchip)=%d, Scd3GFS2RefCtnDump (slot, half chip) = (%d, %d), ScdSrchMode=%d(3:step2)
Line 1332: activeStackId %d Step2 DMA: ScdSrchS2Buffer[0]:(%d) ScdSrchS2Buffer[1](%d)
Line 1422: HALSRCH_3G_CpichScrCode_SelectStep3SearcherMode : Please check mode = %d
Line 1450: HALSRCH_3G_CpichScrCode_StartStep3Searcher: itgTime=%d, postAcc=%d, SrchClkScaleDown=%d
Line 1592: ItgTime is invalid.(%d)
Line 1674: HALSRCH_3G_CpichMultiPath_StartMPSearcher: itgTime=%d, postAcc=%d, SrchClkScaleDown=%d
Line 1795: [FH][%d] phaseIdx=%d, idx=%d, offset=%d,  ENG=%d
Line 1950: HALSRCH_3G_SearcherBuffer_CalculateAndSetBufferStartPositionInGap: activeStackId %d MP index start_slot %d start_pos(%d)
Line 1981: HALSRCH_3G_SearcherBuffer_CalculateAndSetBufferStartPositionInGap: activeStackId %d current_slot %d current_chip %d
Line 1982: HALSRCH_3G_SearcherBuffer_CalculateAndSetBufferStartPositionInGap: activeStackId %d meas_start %d meas_end %d size %d bufferStartDelay %d
Line 1998: HALSRCH_3G_SearcherBuffer_CalculateAndSetBufferStartPositionInGap: activeStackId %d RTG index start_slot %d start_pos(%d)
Line 2020: HALSRCH_3G_SearcherBuffer_CalculateAndSetBufferStartPositionInGap: activeStackId %d start_slot %d start_pos(%d)
Line 2031: HALSRCH_3G_SearcherBuffer_CalculateAndSetBufferStartPositionInAmrSlotDecodingMode: activeStackId %d
Line 2061: activeStackId %d HALSRCH_3G_SearcherBuffer_CalculateAndSetBufferStartPositionInCM: meas_start=%d > meas_end=%d
Line 2072: activeStackId %d Size Over *size %d
Line 2075: activeStackId %d size %d
Line 2113:         srchBufStart--> slot=%d chip=%d bufferSize=%d, buf_start_index(%d) FixedBufStart(%d), BufStartSlot(%d)
Line 2170: HALSRCH_3G_SearcherCommon_ResetSrchSCDFuncClk is called
Line 2152: HALSRCH_3G_SearcherCommon_SearcherReset is called reset_l 0x%x
Line 2160: HALSRCH_3G_SearcherCommon_SearcherReset is called reset_h 0x%x
Line 2180: HALSRCH_3G_SearcherCommon_ResetSrchMPFuncClk is called
Line 2190: HALSRCH_3G_SearcherCommon_ResetSrchDMAIFFuncClk is called
Line 2200: HALSRCH_3G_SearcherCommon_ResetSrchMPOFFFuncClk is called
Line 2233: SharedMem clock enable for mp rx1
Line 2259: HALSRCH_3G_SearcherCommon_ClockOn: reg = 0x%x, read_reg = 0x%x
Line 2298: ------------------------------------------------------------- ScdSrchRegDump Start -------------------------------------------------------------
Line 2301: SrchStatus = 0x%x, SrchTestCtrl = 0x%x, SrchClkCtrl = 0x%x, SrchClkCtrl1 = 0x%x
Line 2304: ScdStop = 0x%x, ScdStart = 0x%x, ScdPostAcc = 0x%x, ScdAccCnt = 0x%x, ScdCtrl = 0x%x, ScdBitSelCtrl = 0x%x, ScdSlotCnt = 0x%x
Line 2307: Scd3GFS2Ctrl = 0x%x, Scd3GFS2RefCtnDump = 0x%x, ScdPwrThr = 0x%x, Scd3GFRxDivSelect = 0x%x
Line 2310: SrchMemCtrl = 0x%x, SrchMemStartAddress = 0x%x, SrchMemIO = 0x%x, SrchMemReadyStatus = 0x%x, ExternalMemAddrPss = 0x%x, ExternalMemAddrSss= 0x%x
Line 2313: ExternalMemAddr3GFStep1 = 0x%x, ExternalMemAddr3GFStep2 = 0x%x
Line 2316: ExternalMemAddr3GFMp = 0x%x, ExternalMemAddr3GCMp = 0x%x
Line 2318: ------------------------------------------------------------- ScdSrchRegDump End ---------------------------------------------------------------
Line 2394: ----------------------------------------------------------------------------------------------Start
Line 2397: SrchStatus = 0x%x, SrchTestCtrl = 0x%x, SrchClkCtrl = 0x%x, SrchClkCtrl1 = 0x%x
Line 2400: SrchMemCtrl = 0x%x, SrchMemStartAddress = 0x%x, SrchMemIO = 0x%x, SrchMemReadyStatus = 0x%x, ExternalMemAddrPss = 0x%x, ExternalMemAddrSss= 0x%x
Line 2403: ExternalMemAddr3GFStep1 = 0x%x, ExternalMemAddr3GFStep2 = 0x%x
Line 2406: ExternalMemAddr3GFMp = 0x%x, ExternalMemAddr3GCMp = 0x%x
Line 2409: MpStart = 0x%x, MpStop = 0x%x, MpCtrl1 = 0x%x, MpCtrl2 = 0x%x, MpDataBufStartEn = 0x%x, MpDataBufStart = 0x%x
Line 2412: MpBufCtrl1 = 0x%x, MpBufCtrl2 = 0x%x, MpBitSelCtrl = 0x%x, MpBqCtrl1 = 0x%x, MpCellDoneCnt = 0x%x
Line 2415:  MpIndexDump = 0x%x, MpCurrentIndex = 0x%x, MpCtrl3 = 0x%x, SrchStatus1 = 0x%x
Line 2432: ----------------------------------------------------------------------------------------------End
Line 2487: --------------------------------------------------------------- SrchRegDump Start ---------------------------------------------------------------
Line 2490: SrchStatus = 0x%x, SrchTestCtrl = 0x%x, SrchClkCtrl = 0x%x, SrchClkCtrl1 = 0x%x
Line 2493: ScdStop = 0x%x, ScdStart = 0x%x, ScdPostAcc = 0x%x, ScdAccCnt = 0x%x, ScdCtrl = 0x%x, ScdBitSelCtrl = 0x%x, ScdSlotCnt = 0x%x
Line 2496: Scd3GFS2Ctrl = 0x%x, Scd3GFS2RefCtnDump = 0x%x, ScdPwrThr = 0x%x, Scd3GFRxDivSelect = 0x%x
Line 2499: SrchMemCtrl = 0x%x, SrchMemStartAddress = 0x%x, SrchMemIO = 0x%x, SrchMemReadyStatus = 0x%x, ExternalMemAddrPss = 0x%x, ExternalMemAddrSss= 0x%x
Line 2502: ExternalMemAddr3GFStep1 = 0x%x, ExternalMemAddr3GFStep2 = 0x%x
Line 2505: ExternalMemAddr3GFMp = 0x%x, ExternalMemAddr3GCMp = 0x%x
Line 2508: MpStart = 0x%x, MpStop = 0x%x, MpCtrl1 = 0x%x, MpCtrl2 = 0x%x, MpDataBufStartEn = 0x%x, MpDataBufStart = 0x%x
Line 2511: MpBufCtrl1 = 0x%x, MpBufCtrl2 = 0x%x, MpBitSelCtrl = 0x%x, MpBqCtrl1 = 0x%x, MpCellDoneCnt = 0x%x
Line 2514: MpIndexDump = 0x%x, MpCurrentIndex = 0x%x, MpCtrl3 = 0x%x, SrchStatus1 = 0x%x
Line 2516: --------------------------------------------------------------- SrchRegDump End -----------------------------------------------------------------
