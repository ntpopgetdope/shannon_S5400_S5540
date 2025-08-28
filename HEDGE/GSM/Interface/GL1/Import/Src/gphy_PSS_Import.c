Line 112: pal_MemAlloc() failure
Line 135: GL1 => MMC :: HEDGEL1_MMC_GSM_TIMING_LATCH_CNF Sending Fail
Line 139: Failed to free the memory
Line 143: GL1 => MMC :: HEDGEL1_MMC_GSM_TIMING_LATCH_CNF [SIM &D] 
Line 156: Mux Change to 2G will happen in %d frames / l1ps_min_wakeup_preserve %d
Line 160: Skip Mux Change because 2G is turned off.:  TCU off %d / l1ps_min_wakeup_preserve %d
Line 187: [GL1 Error] No Memory Allocated
Line 206: GL1 => MMC :: HEDGEL1_MMC_LTE_SEARCHMEASURE_STOP_REQ (PWR DOWN) simno:%d
Line 211: GL1 => MMC :: HEDGEL1_MMC_LTE_SEARCHMEASURE_STOP_REQ (PWR DOWN) Sending Fail
Line 215: pal_MemFree failure
Line 245: LMM: LTE_CELL_SEARCH/MEASURE canceled due to LTE measurement disabled / Invalid Latch State[simno %d] :%d
Line 256: LMM: LTE_CELL_SEARCH/MEASURE canceled due to BCCH/PCH Read in PTM
Line 285: [G2L] Warning! Latch Diff 1FN!, Meas Length is reduced as 1 FN.
Line 291: [G2L] Warning! Latch TIme Diff too long, ignore measurement! ReqFn(%d) CnfFn(%d)
Line 352: [G2L] LMM: l1x_LmmCellSearch_Adapter (FN %d) simno:%d
Line 361: [GL1 Error] No Memory Allocated
Line 378: [G2L] LMS_PTM_INDEX => Cell Search
Line 391: [G2L] EARFCN %d not in List
Line 407: [G2L] Adapt TIme :: DUR (%d %d) START (%d %d)
Line 415: Target EARFCN not found
Line 429: Target EARFCN not found
Line 438: [G2L] 2G DELTA Latch Time Qb(%d) - mod 614400 x 6 (60ms) will be set.
Line 448: [G2L] L Offset = (%d)
Line 450: [G2L] == LTE TIME CALCULATION for Frame Position
Line 455: [G2L] Result (%d)L_Offset  = B-(A+a) 
Line 457: [G2L] Result (%d)L_Offset = mod 614400
Line 468: [G2L] cellPtr->framePos(%d) LteDeltaFramePos(%d)
Line 474: Cell ptr not found
Line 488: [G2L] == LTE TIME CALCULATION for GAP Start Position
Line 495: [G2L] 2G DELTA GAP (%d)Qb (%d)us LatchedSrchTime(%d) added_compensation (%d)
Line 515: [G2L] LTE 1st Offset before Checking Roll-Back for Max Num (%d, %d, %d)
Line 563: [G2L] CONVERTED TIME LTE START <SFN(%d) TTI(%d) Offset(%d)> DUR <TTI (%d) Offset(%d)> 
Line 578: LMS: LTE_CELL_SEARCH - DEFAULT AGC/AFC is updated
Line 583: [G2L] LTE_CELL_SEARCH [%d] AGC1/2 (%d, %d) AFC (%d)
Line 627: GL1 => MMC :: HEDGE_MMC_LTE_CELL_SEARCH_REQ Sending Fail
Line 631: pal_MemFree failure
Line 643: pal_MemFree failure
Line 683: LMM: l1x_LmmCellMeasure_Adapter for Earfcn[%d] simno:%d
Line 693: [GL1 Error] No Memory Allocated
Line 709: [G2L] LMS_PTM_INDEX => Cell Measure
Line 721: [G2L] Adapt TIme :: DUR (%d %d) START (%d %d)
Line 728: [G2L] EARFCN %d not in List
Line 743: [GL1 Error] EARFCN object is not found
Line 752: ########## GSM TIME CALCULATION for Frame Position
Line 758: [G2L] 2G DELTA Latch Time Qb(%d) - mod 614400 x 6 (60ms) will be set.
Line 767: [G2L] QB -> MicroSec(%d)
Line 769: [G2L] mod 10ms = (%d)
Line 772: [G2L] L Offset = (%d)
Line 774: ########## LTE TIME CALCULATION for Frame Position
Line 777: [G2L] LTE Original Diff OFFSET (%d)  = A+a 
Line 779: [G2L] LTE Original Diff (%d)L_Offset = mod 614400
Line 782: [G2L] Result (%d)L_Offset = B-(A+a) 
Line 784: [G2L] Result (%d)L_Offset = mod 614400
Line 805: [G2L] 2G DELTA GAP (%d)Qb (%d)us
Line 815: [G2L] LTE_CELL_MEAS : Searching Frame Position Information numOfCells %d
Line 821: [G2L] LTE_CELL_MEAS : Target Cell ID (%d)
Line 830: [G2L] LTE_CELL_MEAS : cellCounterMMC (%d)
Line 837: [G2L] LTE_CELL_MEAS : Only Updating FrPos, not Meas Req element
Line 843: [G2L] LTE_CELL_MEAS : Updating all values to to be included in MEAS REQ
Line 849: [G2L] LTE_CELL_MEAS(lastTime %d) CellId (%d) FramePos Ori (%d) => New (%d) measBW(%d)
Line 856: [GL1 Error] Cell object is not found
Line 873: pal_MemFree failure
Line 879: [GL1 Error] LTE_CELL_SEARCH/MEASURE canceled due to 0 num of cells
Line 907: [G2L] LTE 1st Offset before Checking Roll-Back for Max Num (%d, %d, %d)
Line 935: [G2L] CONVERTED TIME Delta to START Pos (G->L)  SFN(%d) TTI(%d) Offset(%d) 			-> [Result Start Pos TTI(%d) Offset(%d)]
Line 952: [G2L] CONVERTED TIME LTE START <SFN(%d) TTI(%d) Offset(%d)> DUR <TTI (%d) Offset(%d)> 
Line 955: [G2L] LTE_CELL_MEASURE EARFCN [%d] numOfCell (%d)
Line 990: GL1 => MMC :: HEDGE_MMC_LTE_CELL_MEASURE_REQ Sending Fail
Line 994: pal_MemFree failure
Line 1006: pal_MemFree failure
Line 1037: LMS: Earfcn(%d) is not found in DB so TimingLatch not build
Line 1041: LMS: l1x_LmmBuildTimingLatchReq  TYPE (%d -<11:SRCH 12: MEAS>) LatchSim:%d
Line 1054: [GL1 Error] No Memory Allocated
Line 1075: GL1 => MMC :: HEDGE_MMC_LTE_TIMING_LATCH_REQ (CUR_FN %d)
Line 1083: GL1 => MMC :: HEDGE_MMC_LTE_TIMING_LATCH_REQ Sending Fail
Line 1087: pal_MemFree failure
Line 1118: LMS: l1x_LmmCellSrchMeas_Adapter for Earfcn[%d] simno:%d
Line 1128: LMS: LTE_CELL_SEARCH_MEASURE canceled as No EARFCN or LTE measurement disabled or L1C_WAIT l1x_toggle_pending %d
Line 1138: [GL1 Error] No Memory Allocated
Line 1154: GL1 => MMC :: HEDGE_MMC_LTE_TIMING_LATCH_REQ
Line 1162: GL1 => MMC :: HEDGE_MMC_LTE_TIMING_LATCH_REQ Sending Fail
Line 1166: pal_MemFree failure
Line 1183: LMS: [SIM1] last search&meas time is %d for EARFCN(%d)
Line 1191: LMS:[SIM2] last search&meas time is %d for EARFCN(%d)
Line 1203: Reset gMuxChangeAfterMeasStop %d
Line 1240: LMS: Abort meas as Latch cnf %u is delayed, diff %u currTime %u
Line 1248: [GL1 Error] No Memory Allocated
Line 1257: [G2L] TimingLatchCnf -  LMS_IDLE_INDEX => Cell Search Measure
Line 1288: GL1 => MMC :: HEDGE_MMC_LTE_SEARCHMEASURE_REQ
Line 1290: GL1 => MMC / G2L Measurement:: EARFCN (%d), MeasBandwidth (%d)
Line 1302: GL1 => MMC :: HEDGE_MMC_LTE_SEARCHMEASURE_REQ Sending Fail
Line 1306: pal_MemFree failure
Line 1312: LMS: last search&meas time is %d for EARFCN(%d)
Line 1319: LMS: EARFCN (%d) Not in Lmm DB
Line 1324: pal_MemFree failure
Line 1343: [G2L] Need to check SEARCHMEASURE scheduling
