Line 650: [RSTD] L1LC State Changed [%s --> %s]
Line 770: [RSTD] [SC] RSTD State[%d] prsSfnTti[%d] curSfnTti[%d] - Delay CRS Meas
Line 913: [RSTD] FLAGS :: LPP PROFILE [0x%x] FT[%d] ATT_FT[%d] TMO_FT[%d] LGU_FT[%d] VZW[%d] KDDI[%d]
Line 924: [RSTD] [RRM => L1LC] Enter L1LC_ProcessOtdoaMeasReq :: Inter[%d]
Line 930: [RSTD] ERROR!!! Received NULL L1LC_ProcessOtdoaMeasReq...
Line 936: [RSTD] Recieved OTDOA Measurement Request while already processing another request...
Line 986: [RSTD] [SAME CELL FILTER] Freq Count [%d] Cell Count [%d] - Cell ID [%d] earfcn [%d] Iprs [%d] Nprs [%d] PrsBw [%d]
Line 998: [RSTD] REF antenna configuration is not provided. coping PCell's one. PCell Antenna port num = %d, RefCell Antenna config = %d
Line 1009: [RSTD] NCell PCI [%d] antenna configuration is not provided. copying REF's Antenna config = %d
Line 1017: [RSTD] NCell PCI [%d] antenna configuration is copied from REF = %d
Line 1023: [RSTD] |>>>--------------------------------OTDOA MEASUREMENT REQUEST-------------------------------->>>
Line 1034: [RSTD]  |>>>---OTDOA MEASUREMENT REQUEST Report Interval [%d ms] Report Amount [%d] ResponseTimeEarlyFix [%d ms] ------->>>
Line 1075: [RSTD] Freq Count [%d] :: Cell Count0 [%d] Cell Count1 [%d] Cell Count2[%d] Max Attempt[%d]
Line 1115: [RSTD] IC Count0 [%d][0x%x] IC Count1 [%d][0x%x] IC Count2[%d[0x%x]]
Line 1137: [RSTD] No Serving Cell Found in Assistance Data
Line 1210: [RSTD] :: Send Available OTDOA Measurement response
Line 1239: [RSTD] Process HAL_L1LC_RSTD_MEASURE_DONE_IND
Line 1295: [RSTD] Meas Results are discarded for the Assisted Data Cell[%d][%d] = %d, Cell ID [%d], RstdMeasDone [%d], peak[%d], max_peak[%d]
Line 1329: [RSTD] NCell[%d][%d] PCID[%d] peak[%d] FinalThr[%d] mute_pattern[0x%x] OccIn16bit[0x%x]
Line 1337: [RSTD] Results are discarded for all the N cells, since gL1LC_RstdDB.Now_MeasuringCells_Cnt = %d 
Line 1356: [RSTD] RefCell PCID[%d] Measured[%d] valid[%d] mute_pattern[0x%x] OccIn16bit[0x%x]
Line 1397: [RSTD] Process HAL_L1LC_RSTD_SCHEDULE_IND: State[ %s ]
Line 1733: [RSTD] RstdTimerExpired - MODEM POWER OFF
Line 1774: [RSTD] Sending RSTD Measurement for the measured Neighbours
Line 1796: [RSTD] gL1LC_Report_Count[%d]
Line 1804: [RSTD] Reporting to LPP is completed
Line 1839: [RSTD] State[ %s ] HO Triggered(earfcn:%d, Cell ID:%d) During RSTD Measurement
Line 1844: [RSTD] State[ %s ] Serving Cell(earfcn:%d, Cell ID:%d) Reference Cell(earfcn:%d, Cell ID:%d)
Line 1867: [RSTD] SCell(earfcn:%d, Cell ID:%d) is found, No need of exchanging the Reference cell
Line 1902: [RSTD] --------Reference Exchange Success---------
Line 1909: [RSTD] No Cell found in Assistance Data Cell
Line 2742: [RSTD] Next PRS Occ - prsSfnTti[%d] prsElem[%d] Iprs[%d] Tprs[%d] CurSfnTti[%d]
Line 5496: [RSTD] AT CMD: OTDOA REQ Processing[CMD:%d]
Line 5518: [RSTD] REFERENCE CELL CONFIG : Cell ID[%d] EARFCN[%d] I_PRS[%d] CP/ANT/PRS_BW/NPRS[%04d] 
Line 5547: [RSTD] NEIGHBOUR CELL CONFIG[%d][%d]: Cell ID[%d] EARFCN[%d] I_PRS[%d] CP/ANT/PRS_BW/NPRS[%04d] E RSTD[%d]
Line 5567: [RSTD] AT CMD: OTDOA ACTIVATION[%d]
Line 5576: [RSTD] AT CMD: OTDOA DE-ACTIVATION[%d]
Line 5587: [RSTD] Invalid OTDOA Sub Command[%d]
Line 7587: [RSTD] Skip add GAP Element as InterFreq not supported: %d
Line 7610: [RSTD] ADD GAP Element(%d) : freq layer[%d], cell idx[%d], earfcn[%d], prsOffset[%d]
Line 7641: [RSTD] ADD GAP Element(%d) : freq layer[%d], cell idx[%d], earfcn[%d], prsOffset[%d]
Line 706: [RSTD] L1LC State check for INTER_INTRA_MEAS skipped 
Line 1583: [RSTD] Error: Update OTDOA_UNABLE_TO_MEASURE_SOME_NEIGHBOURS Layer[%d], numMeasuredCells[%d], AssistanceData Cells[%d] !!! 
Line 1589: [RSTD] L1LC_ProcOtdoaMeasureRsp : Layer[%d] Number Of Cells Reporting [%d], Total Measured Cells [%d]
Line 1605: [RSTD] Response Cell ID[%d] - RSTD[%d], Prs Max Peak[%d], MeasQuality[Resolution:%d, ErrorValue:%d, NumSample:%d]
Line 1613: [RSTD] Error: Update OTDOA_UNABLE_TO_MEASURE_ALL_NEIGHBOURS (totalMeasuredCells:%d) !!!
Line 1622: [RSTD] OTDOA AT CMD REQ[%d]: RSP is not sent to RRM
Line 5354: [RSTD] UpdateFap : cell id:%d, fapIdx:%d, max_peak:%d, cellpeak:%d peak2mean:%d
Line 5378: [RSTD] UpdateFap : Cell ID:%d, Fap:%d, Num Samples:%d, Max Peak:%d, Total Peak:%d, Peak2Mean:%d
Line 5380: [RSTD] UpdateFap : error.resolution:%d, error.value:%d, error.num_sample:%d, error.sub_resolution: %d, error.sub_num_sample: %d peakRemovedSampleCnt: %d
Line 5077: [RSTD] ========================== L1LC_RstdRemoveAbruptFapDebugDb: numCells[%d] ==============================
Line 5198: [RSTD] FAP_DB Removing EARFCN:%d PCID:%d's FAP:%d Peak:%d Peak2Mean:%d (numFap:%d)
Line 5221: [RSTD] -----------------------------------Remove Abrupt Fap: PCI[%d] numFap[%d]-------------------------------------
Line 5253: [RSTD] Remove Abrupt Fap: Fap1_Selected[%d], Best Fap1[Fap:%d, num:%d, peak2mean:%d], Best Fap2[Fap:%d, num:%d, peak2mean:%d]
Line 5263: [RSTD] Remove Abrupt Fap: Fap1_Selected[%d], Best Fap1[%d, %d], Best Fap2[%d, %d], fapWin[%d to %d]
Line 4298: [RSTD] FAP_DB : Cell ID[%d] Earfcn[%d] index[%d] total_meas[%d]
Line 4304: [RSTD] FAP_DB : Cell ID[%d] Fap[%d] Peak[%d] meanPwr[%d] peak2mean[%d] rndBit[%d]
Line 4561: [RSTD] STDEV_FAP_DB : Cell ID[%d] Earfcn[%d] index[%d] Fap[%d] DEBUG[%d %d]
Line 4568: [RSTD] STDEV_FAP_DB : numFap < 0
Line 4594: [RSTD] ============= STDEV_FAP_DB: PCID[%d], Resolution[%d], Value[%d], numSample[%d], removedNumSample[%d] =============
Line 4595: [RSTD] ============= STDEV_FAP_DB: error_stdev[%d], avg_square[%d], square_avg[%d] =============
Line 4661: [RSTD] change best_fap1 Best Fap1[Fap:%d, total:%d, cnt:%d]
Line 4426: [RSTD] Remove Abrupt Fap: Fap1_Selected[%d], Best Fap1[Fap:%d, num:%d, 2ndBest peak2mean:%d]
Line 4444: [RSTD] Remove Abrupt Fap: Fap1_Selected[%d], Best Fap2[Fap:%d, num:%d, 2ndBest peak2mean:%d]
Line 4478: [RSTD] Remove Abrupt Fap: Discard Index[%d], Fap[%d]
Line 4515: [RSTD] Remove Abrupt Fap: Discard Index Range[%d to %d], Fap[%d]
Line 4985: [RSTD] [DEBUG]SUB_STDEV_FAP_DB: PCID[%d], avg_square[%d], square_avg[%d], innerSampleCnt[%d], Fap[%d]
Line 5007: [RSTD] [DEBUG]SUB_STDEV_FAP_DB(remove): PCID[%d], numSample[%d] < MeasCnt[%d]*2/10
Line 5014: [RSTD] [DEBUG]SUB_STDEV_FAP_DB(remove): PCID[%d], numSample[%d] < MeasCnt[%d]/4 max_peak(%d) < FinalThr(%d)
Line 5021: [RSTD] [DEBUG]SUB_STDEV_FAP_DB(remove): PCID[%d], numSample[%d] Peak MAX(%d, %d) < RefFinalThr/2(%d)
Line 5027: [RSTD] [DEBUG]SUB_STDEV_FAP_DB(remove): PCID[%d], numSample[%d] < MeasCnt[%d]*45/100
Line 5033: [RSTD] [DEBUG]SUB_STDEV_FAP_DB(remove): PCID[%d], numSample[%d], MeasCnt[%d]
Line 5036: [RSTD] ============= SUB_STDEV_FAP_DB: PCID[%d], Resolution[%d], innerSampleCnt[%d], FapWindow[%d]=============
Line 5037: [RSTD] ============= SUB_STDEV_FAP_DB: error_stdev[%d], avg_square[%d], square_avg[%d]=============
Line 6203: [RSTD] L1LC_RstdFilterOtdoaMeasuredCells : AllCellsMeasCnt[%d]
Line 6230: [RSTD] [DEBUG] Measurement Cnt too few(%d) Cell ID:%d, Num Samples:%d
Line 6236: [RSTD] NumSample Normalize : Cell ID:%d, Num Samples:%d, Normalized Samples:%d, Peak:%d, Fap:%d, resolution:%d, Total Sample:%d
Line 6352: [RSTD] Filtered Response List : Cell ID:%d, Num Samples:%d, Peak:%d, Fap:%d, numCellsReporting:%d, Ts delta offset:%d
Line 6357: [RSTD] Filtered Response List : Cell ID:%d, peakRemovedNumSample(%d), error_sample(%d) peak2mean(%d)
Line 6398: [RSTD] Removed 1: Cell ID:%d, Num Samples:%d, Peak:%d, Fap:%d, numCellsReporting:%d, maxPeakInMeasuredValues:%d, peak2mean:%d
Line 6423: [RSTD] Removed 2: Cell ID:%d, num_meas:%d, ignored:%d, big_fap_diff:%d, num_meas_avgd:%d, num_meas_avgd_max:%d, num_meas_reinit:%d
Line 6466: [RSTD] Reporting 1: Cell ID:%d, Num Samples:%d, Peak:%d, Fap:%d, numCellsReporting:%d, minPeak:%d, peak2mean:%d
Line 6475: [RSTD] Reporting 2: Cell ID:%d, Num Samples:%d, Peak:%d, Fap:%d, numCellsReporting:%d, minPeak:%d, peak2mean:%d
Line 6496: [RSTD] Reporting 3: Cell ID:%d, Num Samples:%d, Peak:%d, Fap:%d, numCellsReporting:%d, minPeak:%d, peak2mean:%d
Line 6503: [RSTD] Reporting 4: Cell ID:%d, Num Samples:%d, Peak:%d, Fap:%d, numCellsReporting:%d, minPeak:%d, peak2mean:%d
Line 6511: [RSTD] Reporting 5: Cell ID:%d, Num Samples:%d, Num Raw SubSamples:%d, Peak:%d, Fap:%d, numCellsReporting:%d, peak2mean:%d
Line 6525: [RSTD] Reporting 6: Cell ID:%d, Num Samples:%d, Peak:%d, Fap:%d, numCellsReporting:%d, minPeak:%d, peak2mean:%d
Line 6530: [RSTD] Removed 3: Cell ID:%d, Num Samples:%d, Peak:%d, Fap:%d, numCellsReporting:%d, minPeak:%d, peak2mean:%d
Line 6556: [RSTD] Filtered Response List : Resolution:%d, expectedRstd:%d, Nw e_rstd:%d, Num Samples:%d, numCellsReporting: %d, numCellThrPass: %d, sub_Resolution:%d
Line 6736: [RSTD] Sort by Peak Value and then by Num Samples: Layer[%d], Measured N Cells [%d]
Line 6740: [RSTD] Sorting Not Required : numCellCount[%d]
Line 6762: [RSTD] Sort by Peak Value : Idx[%d] [Src Cell ID:%d, Num Samples:%d, Peak:%d] --> [Dst Cell ID:%d, Num Samples:%d, Peak:%d]
Line 6793: [RSTD] Sort by Num Samples : Idx[%d] [Src Cell ID:%d, Num Samples:%d, Peak:%d] --> [Dst Cell ID:%d, Num Samples:%d, Peak:%d]
Line 6649: [RSTD] Sort by Num Samples and then by Peak Value : Layer[%d], Measured N Cells [%d]
Line 6653: [RSTD] Sorting Not Required : numCellCount[%d]
Line 6675: [RSTD] Sort by Num Samples : Idx[%d] [Src Cell ID:%d, Num Samples:%d, Peak:%d] --> [Dst Cell ID:%d, Num Samples:%d, Peak:%d]
Line 6706: [RSTD] Sort by Peak Value : Idx[%d] [Src Cell ID:%d, Num Samples:%d, Peak:%d] --> [Dst Cell ID:%d, Num Samples:%d, Peak:%d]
Line 5424: [RSTD] ============= PRS Error: PCID[%d], Peak[%d], serving snr[%d], ref peak[%d][%d] =============
Line 5469: [RSTD] ============= PRS Error: PCID[%d], Resolution[%d], Value[%d], PRS SINR[%d][%d][%d][%d] =============
Line 5918: [RSTD] Response Last Measured SFN : %d
Line 5949: [RSTD] L1LC_RstdUpdateRefRspInfo : Send OTDOA_UNABLE_TO_MEASURE_REFERENCE (NumOfAttempts:%d, numOfValid:%d)
Line 5703: [RSTD] Reference FAP[Avg:%d, Total:%d, numSample:%d, numAttempts:%d]
Line 5781: [RSTD] Discard Cell ID[%d] rstd[%d], max_peak[%d], peak2mean[%d], numMeasuredCells[%d]
Line 5807: [RSTD] Neighbour Cell ID[%d] - RSTD[%d], Prs Max Peak[%d], MeasQuality[Resolution:%d, ErrorValue:%d, NumSample:%d], numMeasuredCells[%d]
Line 5863: [RSTD] Updating nbFarCells[%d] numCellsReporting[%d]
Line 5892: [RSTD] Post-Limiting[%d] Final freq_index[%d] numCellsReporting[%d]
Line 6823: [RSTD] Sort by Peak2Mean Value and then by Num Samples: Layer[%d], Measured N Cells [%d]
Line 6827: [RSTD] Sorting Not Required : numCellCount[%d]
Line 6849: [RSTD] Sort by Peak2Mean Value : Idx[%d] [Src Cell ID:%d, Num Samples:%d, Peak2Mean:%d] --> [Dst Cell ID:%d, Num Samples:%d, Peak2Mean:%d]
Line 6880: [RSTD] Sort by Num Samples : Idx[%d] [Src Cell ID:%d, Num Samples:%d, Peak2Mean:%d] --> [Dst Cell ID:%d, Num Samples:%d, Peak2Mean:%d]
Line 6597: [RSTD] Sort by AssistanceData: Layer[%d], Measured N Cells [%d]
Line 6614: [RSTD] Exchange : Src PCI[%d]: %d <--> Dst PCI[%d]: %d
Line 1964: [RSTD] State[ %s ] RRE/HO/RELEASE Triggered During RSTD Measurement
Line 2017: [RSTD] Error Cause Updated [0x%x]
Line 2037: [RSTD] Entering in L1LC_StartRstdMeasurement
Line 2057: [RSTD] Periodic Timer has started. Timer Expires in (%d) mS
Line 2064: [RSTD] No Response time from LPP. Default Periodic Timer has started. Timer Expires in 1900 mS
Line 2074: [RSTD] Need to early response according to ResponseTimeEarlyFix[%d ms] - AvailablePRSOccForEarlyRsp [%d] 
Line 2088: [RSTD] Current State:DRX(Idle or Connected): Wakeup Modem and Measure RSTD
Line 2779: [RSTD] Available PRS Occassions[%d] Estimated Time for Measurement [%d ms], localPrsOcc[%d]
Line 2119: [RSTD] -----------SCHEDULER ->  Gap Req Ind (%d), Measured Freq Layers (%d) -------------
Line 2169: [RSTD] No Layer has been selected for next PRS Occasion
Line 3129: [RSTD] No Measurement Element
Line 3163: [RSTD] Start Forced Sync: mode(%d) earfcn(%d) bw(%d)
Line 3175: [RSTD] L1LC_RstdGetNextInterFreq: nextGapBoundary > GAP_READY_HW_OFFSET
Line 3185: [RSTD] L1LC_RstdGetNextInterFreq: GapEnable[%d], GapPeriod[%d]
Line 2214: [RSTD] Inter-Frequency Layer[%d]-Neigh freq[%d] Gap freq [%d]  - Measure Layer
Line 2226: [RSTD] Inter-Frequency Layer[%d]-Neigh freq[%d] Gap freq [%d]  - Skip Layer
Line 2394: [RSTD] pal_GetChipName (%x), serving_BW (%d), prs_Info.bandwidth(%d),numDLsubframe(%d)
Line 2402: [RSTD] L1LC_RstdScheduleNeighCells: reducing maxNeighCnt
Line 2408: [RSTD] | STATISTICS - LAYER [%d] CELL COUNT [%d] MEASURED COUNT [%d], isIntraMeasure[%d], measReference[%d] maxNeighCnt[%d]
Line 2432: [RSTD] L1LC_RstdScheduleNeighCells: gL1LC_RstdDB.Now_MeasuringCells_Cnt[%d]
Line 2445: [RSTD] L1LC_RstdScheduleNeighCells: PRS_OCC_IN_16BIT:0x%x prsElem:%d
Line 2487: [RSTD] L1LC_RstdGetNeighCells : Layer [%d] NonMeasuredCells[%d] maxNeighCnt[%d] Measuring Cell Cnt[%d]
Line 2530: [RSTD] CANDIDATE NEIGHBOUR CELL [%d][%d] Cell ID[%d] PRS ELEMENT [%d] PRS OCCASION SFN [%d] I_PRS [%d/%d]
Line 2542: [RSTD] SCHEDULED NEIGHBOUR CELL [%d][%d] Cell ID [%d] for the PRS OCCASION SFN[%d]
Line 2568: [RSTD] CANDIDATE NEIGHBOUR CELL [%d][%d] CELL ID [%d] HAS MUTING IN NEXT PO SFN[%d]  PRS ELEMENT [%d]
Line 7555: [RSTD] CellIndex[%d] Not Scheduled Again
Line 2295: [RSTD] Intra-Frequency Gap Invalid - Layer[%d]-Neigh freq[%d] Ref freq[%d] - Skip Layer
Line 2301: [RSTD] Intra-Frequency Layer[%d]-Neigh freq[%d] Serv freq[%d] - Measure Layer
Line 2313: [RSTD] Layer[%d]-Neigh freq[%d] - Skip this Freq Layer for current Measurement Interation due to Gap Non Availability
Line 2660: [RSTD] L1LC_RstdAllNCellsMeasured : AllCellsMeasCnt[%d], MaxAttempts[%d]
Line 2800: [RSTD] L1LC_RstdCheckPrsOccElapsed: Available PRS Occasions for measurements[%d] Available PRS Occasions for early response[%d]
Line 2814: [RSTD] Available PRS Occasions for measurements have elapsed!!! Sending the Response...
Line 2828: [RSTD] Available PRS Occasions for measurements have elapsed!!! Sending the early Response...
Line 2632: [RSTD] Meas Referece Cell : prsElem[%d], prsSfnTti[%d], muteLen[%d], mutePattern[%d]
Line 1431: [RSTD] Enter L1LC_ProcOtdoaMeasureEarlyRsp
Line 1463: [RSTD] L1LC_ProcOtdoaMeasureEarlyRsp : Layer[%d] Number Of Cells Reporting [%d], Total Measured Cells [%d]
Line 1480: [RSTD] Early Response Cell ID[%d] - RSTD[%d], Prs Max Peak[%d], MeasQuality[Resolution:%d, ErrorValue:%d, NumSample:%d, sub_error_num_sample(prev_num_sample):%d]
Line 1488: [RSTD] Error: Update OTDOA_UNABLE_TO_MEASURE_ALL_NEIGHBOURS (totalMeasuredCells:%d) !!!
Line 1496: [RSTD] OTDOA AT CMD REQ[%d]: RSP is not sent to RRM
Line 2940: [LTE DSDS] assert condition : RSTD nCellCount >= L1LC_RSTD_MAX_NEIGH
Line 2946: [LTE DSDS] assert condition : Input data pRstdCell[%d] is NULL
Line 3060: [RSTD] CONFIGURED CELL :: CELL[%d] : PCID (%d) TS OFFSET(%d) ERSTD(%d) ERSTD UNCER(%d) MUTING(%d) RND(%d)
Line 7285: [LTE DSDS] assert condition
Line 7295: [RSTD] WARNING!!! First PRS TTI ISN'T DL SubFrame!! TD-Config [%d], PRS TTI StartOffset [%d] 
Line 1674: [RSTD] L1LC_RstdSendDspPRSInfo() : CurSfnTti [%d]
Line 1701: [RSTD] CC%d Cell ID(%d) PRS_Elem [%d]: Muted for Next Occasion
Line 3222: [RSTD] CheckRstdInterFreq : Inter-Frequency cells have not been configured
Line 3242: [RSTD] CheckRstdInterFreq : Layer[%d] earfcn[%d] is still being measured, hence no additional request
Line 3281: [RSTD] Gaps are sufficient to measure the Next Layer [%d] Earfcn [%d] 
Line 3289: [RSTD] CheckRstdInterFreq Layer[%d] -Neigh freq[%d] interFreqFound[%d] reqInterGap[%d]
Line 3310: [RSTD] Gaps are sufficient to measure the Next Layer [%d] Earfcn [%d] 
Line 3330: [RSTD] CheckRstdInterFreq Layer[%d] -Neigh freq[%d] reqInterGap[%d] interFreqFound[%d] reqLayers[%d]
Line 3470: [RSTD] Command[%d] Earfcn[%d] GapCheck[%d] PrsInterval[%d to %d] GapInterval[%d to %d]
Line 3578: [RSTD] EARFCN[%d] PCID[%d] raw rstd patched[%d]
Line 3602: [RSTD] EARFCN[%d] PCID[%d] General RstdICOnOff[%d] RefCurMeasured[%d] fap_Results[%d] compensated noIC[%d]
Line 3655: [RSTD] Cell ID [%d] Measured Cell[%d][%d] Update with NEW Results - [Fap_Results = %d, peak_value = %d] reinit=%d
Line 3673: [RSTD] Cell ID [%d] Measured Cell[%d][%d] Keep OLD Results - NEW[Fap_Results = %d, peak_value = %d] ignored=%d bigdiff=%d
Line 3714: [RSTD] Cell ID [%d] Measured Cell[%d][%d] Fap_Results = %d, peak_value = %d, avgd=%d(max=%d)
Line 3782: [RSTD] Cell ID [%d] Measured Cell[%d][%d] Fap_Results = %d, peak_value = %d, cellFound = %d, num_sample/ErrorValue = %06d
Line 3830: [RSTD]  OTDOA REFERENCE CELL Start : Cell ID [%d] earfcn [%d] Iprs[%d] Nprs [%d] PrsBw [%d] Ant Port[%d]
Line 3832: [RSTD] MuteLen [%d] MutePattern [0x%X] ERstd[%d] Erstd_Un [%d] timeOffset [%d]
Line 3853: [RSTD] --------------------------------OTDOA NEIGHBOUR CELLS--------------------------------
Line 3876: [RSTD] Freq Count [%d] Cell Count [%d] - Cell ID [%d] earfcn [%d] Iprs [%d] Nprs [%d] PrsBw [%d]
Line 3878: [RSTD] MuteLen [%d] MutePattern [0x%X] ERstd[%d] Erstd_Un [%d] timeOffset [%d] PrsSfOffset [%d], Ant Port[%d]
Line 3882: [RSTD] Same Cell as Reference has been received in the Neighbour List !!!!!
Line 3899: [RSTD] Removing Cell ID [%d] because ERstd[%d] > 8192 + (%d + CPLEN)Ts/3!!!!!
Line 3941: [RSTD] MuteLen [%d] MutePattern [0x%X] *ERstd[%d] Erstd_Un [%d] timeOffset [%d] PrsSfOffset [%d], Ant Port[%d]
Line 3946: [RSTD] ------------------------------------------------------------------------
Line 861: [RSTD] Found MFBI Earfcn: Layer[%d] AssistanceEarfcn[%d], ServingEarfcn[%d], Frequency[%d]
Line 4018: [RSTD] CA Info: CC%d[found:%d], PRS[Iprs:%d, Nprs:%d, bw:%d]
Line 4154: [RSTD] FAP_DB MAXIUM CELL NUMBER : Cell ID[%d] Earfcn[%d] index[%d]
Line 5618: [RSTD] Validate: Invalid Cell ID[%d]
Line 5624: [RSTD] Validate: Invalid Antenna Config[%d]
Line 5630: [RSTD] Validate: Invalid CP Type[%d]
Line 5636: [RSTD] Validate: Invalid PRS BW[%d]
Line 5642: [RSTD] Validate: Invalid I PRS[%d]
Line 5648: [RSTD] Validate: Invalid N PRS[%d]
Line 5654: [RSTD] Validate: Invalid Muting Size[%d]
Line 6952: [RSTD] L1LC_RstdExchangeReferenceCell: Target earfcn[%d] Cel ID[%d]
Line 6982: [RSTD] Exchange REF: Inter-Frequency. Src earfcn[%d] Target earfcn[%d]
Line 7124: [RSTD] Exchange Measured Results: No Response Cell found : pRstdCell[%d], Cur Serving Num Sample[%d]
Line 7170: [RSTD] L1LC_RstdGetMatchedCell: Cell Found: layer[%d], cell idx[%d]
Line 7364: [RSTD] L1LC_RstdGetPrsElem : Iprs[%d], Dprs[%d], Tprs[%d], CurSfnTti[%d], prsElem[%d], prsSfnTti[%d]
