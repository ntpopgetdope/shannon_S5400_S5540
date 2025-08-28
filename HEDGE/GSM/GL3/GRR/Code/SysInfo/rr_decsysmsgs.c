Line 199: rr_StoreScellPageMode: rr_ServSupp.page_mode(%d)
Line 211: ### IDLE CNF not received Ignore change is page mode
Line 265: rr_PostCsNonDrxPeriod(%d), WAITING_FOR_SERV_SI1(StackId)(%d)
Line 277: (Reorg) SYS3 & 13 --> CCCH_IDLE_REQ
Line 285: (Reorg) Wait for end of PS non-DRX period
Line 301: SI13 not received, but for DSDS case send CCCH_IDLE_REQ
Line 312: (Reorg) SYS3 --> CCCH_IDLE_REQ
Line 701: GRR:IMM_ASS ccch
Line 704: GRR not proper state to handle DL TBF
Line 718: SCELL Misc MsgType 0x%x Ignored!!
Line 730: !***WARNING***!NCELL Misc MsgType 0x%x rxd when waiting for SI 7,8!!
Line 782: BPLMN: Foreground NO_BCCH %d RXVD. BPLMN BCCH Can be resumed
Line 788: BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
Line 802: BPLMN: Foreground NO_BCCH %d RXVD. BPLMN RXLEV Can be resumed
Line 812: !!NCELL Misc MsgType 0x%x Ignored!!
Line 855: Rcvsd SI (%d) Send BCCH Read again 
Line 1244: Cell or ServCell pointer observed to be NULL
Line 1367: FrgrndBcchOngoing=FALSE ARFCN %d No Pending SIs %x 
Line 1373: FrgrndBcchOngoing=TRUE 
Line 1402: SBCCH_READ_PTM
Line 1406: NO PTM SBCCH/NBCCH sched
Line 1413: NBCCH_READ_PTM
Line 1427: FrgrndBcchOngoing=FALSE ARFCN %d No Pending SIs %x 
Line 1433: FrgrndBcchOngoing=TRUE 
Line 1676: MPH_DATA_IND for arfcn %d, Bsic %x, BackGnd = %d, curr page_mode %d, msg_type %x, TC %d
Line 1682: BPLMN: FG MPH_DATA_IND comes on inactive rat
Line 1701: BPLMN: rr_BPowerMsg is NULL!
Line 1711: Background data indication not handled in RR_WBPOWER state
Line 1726: ### Serious Error rr_ServCell  is NULL
Line 1739: rr_ServCell P(0x%02X) arfcn(%d)
Line 1775: Bsic %x got changed for Arfcn %d, during Cell Selection. Start SI reading fresh
Line 1781: Wrong SI cell being read Arfcn %d, Bsic %x
Line 1801: Foreground BCCH %d RXVD
Line 1807: BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
Line 1820: BPLMN: Foreground BCCH %d RXVD. BPLMN RXLEV Can be resumed
Line 1861:  Message type(0x%x)
Line 2066: PACKET_CELL_CHANGE_ORDER
Line 2072: PACKET_MEASUREMENT_ORDER
Line 2078: PACKET_CELL_CHANGE_CONTINUE
Line 2084: PACKET_NEIGHBOUR_CELL_DATA
Line 2090: PACKET_SERVING_CELL_DATA
Line 2143: # MISC Msg on SCELL Ignored #
Line 2149: # MISC Msg on NCELL Ignored!! -> msg_type(0x%x) #
Line 2176: Handle MAC_GRR_DATA_IND
Line 2191: unexpected ARFCN(%d) for MAC_GRR_DATA_IND
Line 2216: (CIQ)##DL Message - In HandleMacGrrDataInd, TID : 0x%x, PD : %d, MSG_Type : 0x%x, CHANNEL : %d, Message : %d
Line 2314:  MAC_GRR_DATA_IND Ignored!! Msg:0x%x, ChnType:%d
Line 2339:  MAC_GRR_DATA_IND during RACH (Msg:0x%x, ChnType:%d)
Line 2345:  MAC_GRR_DATA_IND Ignored - Wrong Channel!! Msg:0x%x, ChnType:%d
Line 2350:  MAC_GRR_DATA_IND Ignored - Not the Serving Cell!
Line 2358:  MAC_GRR_DATA_IND Wrong Arfcn(%d)
Line 2364:  MAC_GRR_DATA_IND Wrong L1_Cause(%d)
Line 2453: rr_UpdateBplmnArfcnListToMM
Line 2480: Count:%d Arfcn:%d BandType:%s
Line 2506: BPLMN: Ignored MPH_DATA_IND with arfcn %d! rr_CheckSysInfLength, msg_type(0x%x)
Line 2535: BPLMN: BcellCid(%x,%x)
Line 2539: BPLMN: BcellLai(%x,%x,%x,%x,%x)
Line 2545: BPLMN: SI 3/4 acquired, MaxArfcnTry(%d)
Line 2549: BPLMN:Error: Unnecessary SI with msg_type %d acquired
Line 2567: BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
Line 2616: BPLMN: +Jumping! Skip FirstIndex %d
Line 2630: BPLMN: +Jumping! For Selection Index %d Arfcn %d Rxlev %d
Line 2642: BPLMN: +Jumping! AddRetryList Last %d Current %d - SelIndex %d MaxRxlev %d
Line 2648: BPLMN: +Jumping! Skip Last %d Current %d
Line 2656: BPLMN: +Jumping! Skip DbComplete %d CurBandBCCHAttemptNum %d
Line 2695: BPLMN: State: rr_State: %x rr_BActiveState: %s: rr_BInactiveState: %s: 
Line 2701: BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
Line 2760: BPLMN: BPlmnResultToMmPending, ignoring Msg
Line 2767: BPLMN:Error: Rxd MPH_DATA_IND in not IDLE state, stop BPlmn procedure
Line 2803: BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
Line 2815: BPLMN:Error!Expected Arfcn %d, Received %d
Line 2833: BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
Line 2849: BPLMN:Error! MPH_DATA_IND with arfcn %d received wrong BPLMN sub state
Line 2867: BPLMN: Ignored MPH_DATA_IND with arfcn %d! rr_CheckSysInfLength, msg_type(0x%x)
Line 2906: BPLMN: BcellCid(%x,%x)
Line 2910: BPLMN: BcellLai(%x,%x,%x,%x,%x)
Line 3071: ANR MPH_DATA_IND
Line 3080: ANR: Ignored MPH_DATA_IND after timer expiry
Line 3092: ANR: Rxlev %d
Line 3101: ANR: Ignored MPH_DATA_IND with arfcn %d! rr_CheckSysInfLength, msg_type(0x%x)
Line 3123: GRR: SI 3(%d)
Line 3130: GRR: SI 4(%d)
Line 3137: GRR: SI 13(%d)
Line 3146: ANR: Ignored MPH_DATA_IND with arfcn %d! Decoder error, msg_type(0x%x)
Line 3152: ANR: Error: Ignored MPH_DATA_IND with arfcn %d! L1 error - cause(%d)
Line 3159: BPLMN:Error!Expected Arfcn %d, Received %d
Line 3166: ANR:Error! MPH_DATA_IND with arfcn %d received wrong BPLMN sub state
Line 3188: MPH_SUSPEND_RAT_REQ already sent. Avoid sending another Req
Line 498: SI Msg Ignored rr_State(%d)
Line 546: Near Ccch:Resel Reason(%d)
Line 552: Use SIs saved in SI-DB
Line 570: [GRR][FAKE] HandicapCell reason: FAKE_CELL
Line 590: Pick Next Best Cell
Line 600: # SI Msg on NCELL Ignored: State(%d) #
Line 635: Remove Mobile Identity including IMSI, Paging Request Type 1 
Line 643: Remove Mobile Identity including IMSI, Paging Request Type 2 
Line 1156: Rcvsd SI (%d) Send BCCH Read again 
Line 1200: Try BCCH_READ for (%d) Rxlev (%d)
Line 1212: Ongoing BCCH_READ for (%d) 
Line 1217: Ongoing BCCH_READ for (%d) 
Line 1008:  1 Target Cell (%d) Softsum (%d) CI(%d)  SCell Softsum (%d) CI(%d): Go for Resel 
Line 1020: 1  rr_TargetCellForBcchRead (%d) Softsum (%d) < 900 
Line 1027: 2.1 Check for BCCH read on Suitable Cell (%d) (%d)
Line 1060:  2 Target Cell (%d) Softsum (%d) CI(%d)  SCell Softsum (%d) CI(%d): Go for Resel 
Line 1071:  2  (%d) rr_TargetCellForBcchRead : Softsum (%d) < 900
Line 1092:  No Cell with Valid C1 C2 so Find one
Line 1101: 1.3 Found N Cell ,Add rr_TargetCellForBcchRead CellToSIQHead (%d) Rxlev (%d)
Line 1118: rr_TargetCellForBcchRead Done on (%d) Softsum (%d) 
Line 929: Page blocks received on logical channel BCCH(10 times) during rr_InterRatStatus (%d)
Line 1478: Cell ARFCN[%d]BSIC[0x%x] not suitable to camp
Line 1512: (CIQ)## DL Message - In HandleMphDataInd, TID : 0x%x, PD : %d, MSG_Type : 0x%x, CHANNEL : %d, Message : %d
Line 1529: Unexpected MPH_DATA_IND with MSG TYPE:%x, ignored
Line 1596: Not storing Page mode Chn_Type %d
Line 1602:  Decoder error, msg_type(0x%x)
Line 1608:  Ignored!!! L1 error - cause(%d)
Line 1643:  Ignored - Wrong Channel!! Msg:0x%x, ChnType:%d
Line 1942: Unexpected PSI while on CCCH
Line 1951: During Resel Discard PBCCH
Line 1982: PSI Read Un-Successfull
Line 2005: PSI13 Recv on TrCcch:
Line 2020: PSI Ignored on TrCcch: MsgID(0x%x)
Line 2025: PSI Msg Ignored rr_State(%d)
Line 2040: Unexpected PSI on NCELL
Line 2435: OngoingBandScan:%s Arfcn%d Band:%s
Line 2980: MaxArfcnTry(%d) -> %d, Retry scan from beginning for this band
Line 3041: DCS1800 BAND_SCAN_NOT_REQUIRED, ServCellBand %s CellBand %s
Line 3047: PCS1900 BAND_SCAN_NOT_REQUIRED, ServCellBand %s CellBand %s
