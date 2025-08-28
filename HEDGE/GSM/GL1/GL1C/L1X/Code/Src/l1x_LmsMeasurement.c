Line 123: LMS: l1x_LmsPtm() !!
Line 130: LMS: lte_meas_in_ptm flag is disabled!! G2L in PTM will not run
Line 142: LMS: measIndex (%d) LteMeasState (%d) MeasFlag (%d)
Line 146: LMS: LTE measurement generation - DENIED(busy for:%d, enabled:%d)
Line 153: LMS: PTM mode measurement manager called occassion length(%d)
Line 180: l1x_LmsFillCommon()
Line 226: DUR (%d %d) START (%d %d)
Line 249: l1x_LmsBuildSrchMeasReq()
Line 257: LMS: srch&meas request made on EARFCN(%d), priority(%d)
Line 276: LMS: no available resource for priority object
Line 301: LMS: l1x_LmsBuildSrchReq()
Line 317: LMS: START(F %d, QB %d) DUR (F %d, QB %d)
Line 321: LMS: l1x_LmsBuildSrchReq on EARFCN(%d), priority(%d), Type (%d) Start(%d,%d) Dur(%d,%d)
Line 328: LMS: no available resource for priority object
Line 354: l1x_LmsBuildMeasReq()
Line 370: ERROR!!! OUT OF BOUND in CELL MEAS CNT. Need to check the Functino Again!
Line 393: ### [%d] LTE CELL (%d) FrPos (%d) cpType (%d)
Line 400: LMS: l1x_LmsBuildMeasReq on EARFCN(%d), priority(%d), numOfCells(%d), Type(%d)
Line 407: LMS: no available resource for priority object
Line 419: LMS:Avoid IRAT during BG pwr Scan
Line 425: Skip Ums Measurement build-PCH/BCH in PTM ongoing
Line 431: LMS: IRAT Meas Disabled
Line 439: LMS: IRAT Reselection triggered avoid Meas
Line 447: LMS:Avoid IRAT in 2nd Window of SYNC NCELL Job
Line 453: Skip Lms Measurement build-DSL1RC Pause nearby
Line 482: LMS: found ARFCN
Line 485:  +++ 1) LMS: EARFCN (%d) deltaTime = %d
Line 512: LMS: LTE Search and Measure Svc is generated
Line 518: LMS: Warning - measNeeded is FALSE!!
Line 523: [GL1 Error] EARFCN object is not found in l1x_LmmGetEarfcnInfo
Line 561:  ++ 1-1) LMS_PTM_SRCH: deltaTime (%d) lastSrch(%d) EARFCN(%d)
Line 565: [GL1 Error] wrong state index for building measurement
Line 588:  ++ 1-2) LMS_PTM_SRCH:  Giving Boost Priority (%d)
Line 593: ++ 1-2) LMS_PTM_SRCH: delta is not enough to target time!!
Line 600: ++ 1-3) LMS_PTM_SRCH: deltaTime (%d) lastSrch(%d) EARFCN(%d) priority(%d) simno(%d)
Line 618:  ++ 2-1) LMS_PTM_MEAS: deltaTime (%d) lastMeas(%d) Cell[%d, %d] / totalCell (%d)
Line 622: [GL1 Error] Cell is not found
Line 635:  ++ 2-2) LMS_PTM_MEAS: targetTime(%d) priority(%d)
Line 640: ++ 2-2) LMS_PTM_MEAS: delta is not enough to target time!!
Line 650: ++ 2-3) LMS_PTM_MEAS: LTE Measure Svc is Stored (%d)
Line 655: ++ 2-4) LMS_PTM_MEAS: LTE Measure Svc is Generated for 4 Cells
Line 658: ++ 2-4) LMS_PTM_MEAS: MeasReq[%d] - %d
Line 669: ++ 2-5) LMS_PTM_MEAS: LTE Measure Svc is Generated for %d Cells 
Line 672: ++ 2-4) LMS_PTM_MEAS: MeasReq[%d] - %d
Line 679: ++ 2-0) LMS_PTM_MEAS: Do Nothin => NumOfCell is (%d) in EARFCN (%d) ptmSrchDone(%d)
Line 703: LMS: L1X_BuildMeasurements - %d (0:Idle, 1: PTM, 2: TCH, 3:SDCCH)
Line 724: LMS: Skip the measurement generation due to delay from TBF timer !!
Line 740: LMS: wrong state index for building measurement !!
Line 768: LMS: l1x_LmsIdle() !!
Line 778: LMS: LTE measurement generation - DENIED(busy for:%d, enabled:%d)
Line 779: LMS: LTE measurement generation - DENIED(busy for:%d, enabled:%d)
Line 784: LMS: idle mode measurement manager called occassion length(%d)
Line 812: LMS: l1x_LmmMeasPending() !!
Line 826: LMS: found ARFCN on simno:%d
Line 831:  +++ 1) LMS: EARFCN (%d) deltaTime = %d
Line 847: [GL1 Error] EARFCN object is not found in l1x_LmmGetEarfcnInfo
Line 872: LMS: l1x_LmmMeasurementReport() !!
Line 922: GsmLatchTime - gFrameCount=%d, gQbit=%d 
