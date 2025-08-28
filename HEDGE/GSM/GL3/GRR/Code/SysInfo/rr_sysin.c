Line 215: rr_HandleIdleBa
Line 258: Change in BA list
Line 325: SI 2bis Ba is extended (rr_StoreBaList)
Line 331: SI 2bis BA list is not extended for this message
Line 336: SI 2ter Ba Int_BaList extended (rr_StoreBaList)
Line 536: ServCell Arfcn is in BA list no more
Line 626: rr_PrevDediSCellNowOtherBandCell:%d 
Line 631: rr_PrevDediSCellNowOtherBandCell:%d 
Line 643: Changing SYS 5
Line 651: New SYS 5 contents
Line 703: NccPermitted(0x%x)
Line 713: _DPTLV(StackId,ISI6_REST) %x byte %x 
Line 777: Changing SYS 5bis
Line 785: New SYS 5bis contents
Line 829: rr_PrevDediSCellNowOtherBandCell:%d 
Line 839: Changing SYS 5ter
Line 843: Old SYS 5ter contents
Line 858: Old SYS 5 contents
Line 868: Overwriting old SYS 5 with old SYS 5ter
Line 874: Copied SYS 5 contents
Line 886: New SYS 5ter contents
Line 928: GPRS support? %d, SYSINFO 13 REC? %d
Line 931: <Wanted Plmn 0x%x,0x%x,0x%x>-<ServCell PLMN 0x%x,0x%x,0x%x>
Line 942: rr_WaitSiAfterResel(1), If all madatory SIs received then move to IDLE state. NeededSI(%x), RecSysInfo(%x)
Line 1186: BPLMN: Stop RXLEV
Line 1202: AddCellToSIQ %d
Line 1605: Fce:%d NeededSI:0x%x InAction:%x PMode:%x 
Line 1614: Stop SI Fce(%d)
Line 1694: PLMN with  PLMN id (0x%x)
Line 1703: Net Scan Type %d
Line 1788: FastRPLMN: %x %x %x Arfcn:%d RxLev:%d
Line 1812: ERROR RtkGetMemory returned NULL
Line 1827: ERROR RtkGetMemory returned NULL
Line 1866: PLMN 0x%x,0x%x,0x%x found
Line 2410: [GRR][FAKE][ARFCN %d] NOT a FAKE Cell
Line 2436: [GRR][FAKE] CAlist Count(%d)
Line 2444: [GRR][FAKE][ARFCN %d] NOT a FAKE Cell
Line 2450: [GRR][FAKE][ARFCN %d] Cell->Fake = 0x%X
Line 2455: [GRR][FAKE] A FAKE CELL FOUND. AVOID the Cell %d
Line 2517: [GRR][FAKE] A FAKE CELL FOUND. AVOID the Cell %d
Line 2566: ArfcnList: CA
Line 2888: BandInd %d in SI1 doesn't match %d
Line 2893: Ignore BandInd Change during CELL SELECTION: BandInd:%d
Line 2905: BandInd verified as %d
Line 2914: BandInd conflict %d
Line 2921: BandInd conflict %d
Line 2928: BandInd conflict %d
Line 2934: BandInd conflict %d
Line 2942: Change Band for L1 %d
Line 3486: Cell pointer observed to be NULL
Line 3493: GRR: SI 1(%d)
Line 3500: GRR: SI 2(%d)
Line 3507: GRR: SI 2b(%d)
Line 3515: GRR: SI 2TER(%d)
Line 3525: SI2B is needed but only SI2T was received so SI2B is not supported
Line 3530: SI2bisCount(%d)
Line 3546: GRR: SI 2QTER(%d)
Line 3564: GRR: SI 3(%d)
Line 3580: GRR: SI 4(%d)
Line 3587: GRR: SI 7(%d)
Line 3594: GRR: SI 8(%d)
Line 3601: GRR: SI 9(%d)
Line 3608: GRR: SI 13(%d)
Line 3620: FIRST SI 13
Line 3637: Ignore SI13(GPRSSvcNotAllowed) Arfcn(%d) - processing BCCH Change Mark
Line 3665: SI13 contents not valid Arfcn(%d)
Line 3684: !!!Invalid SI(Type:%d)
Line 3689: GRR ## NeedSI(0x%x) RecSI(0x%x) ##
Line 3742: SI6RO
Line 3749: SI6RO: PCH and NCH info
Line 3760: SI6RO: Call priority
Line 3772: SI6RO: VBS/VGCS options
Line 3784: SI6RO: DTM supported in current cell, RegiDtm %d
Line 3799: DTM: rr_SetDTMAccessStatusToRlc(T)
Line 3826: SI6RO: MaxLAPDm %d to %d
Line 3833: SI6RO: Rac %d to %d
Line 3842: SI6RO: DTM not supported in current cell, RegiDtm %d
Line 3858: DTM: rr_SetDTMAccessStatusToRlc(F)
Line 3892: Scell is 1900 due to rr_forceBandInd
Line 3902: BandInd %d in SI6 doesn't match %d. Changing is pended
Line 3908: Error: ServCellBand %s, Cur BandInd %d is wrong. Changing to %d is pended
Line 3913: BandInd %d in SI6 doesn't match %d, but BandInd not changed as ServCellBand:%s
Line 3923: BandInd verified as %d
Line 3937: SI6RO: GPRS_MS_TXPWR_MAX_CCH 
Line 4004: Delete NCells from Old BandInd
Line 4017: Delete NCell:%d
Line 4060: Reset SYS 5ter contents
Line 4069: Reset SYS 2ter contents
Line 4313: NCellToRead (%d) Rxlev (%d)
Line 4319: No NCellToRead
Line 182: Unexpected: rr_NbNear(%d) + rr_NbFar(%d) >= %d, Arfcn:%d
Line 394: ArfcnList: BA
Line 983: FOUND SERVING CELL
Line 988: rr_WaitSiAfterResel %d
Line 1001: Update Previous Cell 3G List
Line 1017: BaFreqList:%d
Line 1426: Process SI Read, In Action = 0x%x, BcchFreq %d
Line 1464:  REJ BcchReadReq(Dedicated)
Line 1471:  REJ BcchReadReq(WSYSINFO)
Line 1478:  REJ BcchReadReq(Access in progress = %d) tbf_state = %d
Line 1485:  REJ BcchReadReq(Idle Confirm pending)
Line 1497:  REJ BcchReadReq CsNonDrx (%d) PsNonDrx(%d) rr_NonDrxTimInProg(%d) 
Line 1504:  REJ BcchReadReq(rr_TryAnotherReselWithSI3_4)
Line 1513: BPLMN: RR_WB_SEND_BCCH. Bplmn resume
Line 1522: BPLMN: RR_WB_SEND_RXLEV. Bplmn resume
Line 1575: BPLMN: No Frg SI to readl! RR_WB_SEND_BCCH. Bplmn resume
Line 1228: SICell not in sync list
Line 1236: ServCell BCCHReadReq not sent during reselection
Line 1241: Ignore NCell BCCH read triggering in full stationary condition
Line 1246: BPlmn: Ongoing, Avoid BCCH_READ of Cell with INVALID_BSIC
Line 1253: No SI to read
Line 1267: No SI to read arfcn %d
Line 1272: BPLMN: No Frg SI to readl! RR_WB_SEND_BCCH. Bplmn resume
Line 1314:  Paging Reorg mode ,rr_PostCsNonDrxPeriod= %d rr_PostPsNonDrxPeriod=%d rr_ServSupp.page_mode=%d
Line 1339:  For Cell  %d BCCHReadReq in idle  bisc %d  need si 0x%x
Line 1355:  REJ BcchReadReq page_mode (%d) rr_ReselectionReason(%d) rr_State(%d), BcchFreq(%d) 
Line 2619: ArfcnList: BA
Line 2629: ArfcnList: BA
Line 2640: ArfcnList: BA
Line 2262: (GSM) Change in CCCH
Line 2760: si4_acs (%d)
Line 3144: PLMN_LIST - Next cell
Line 3148: CELL_SELECTION - Cell not suitable
Line 3179: MCC mismatch Found, Abort PLMN Search procedure
Line 3208: rr_WaitSiAfterResel reset, stop BCCH READ REQ WDT if running
Line 3223: set rr_WaitIdleCnfForImmResel and triggered IDLE REQ to GL1
Line 3230: !!! Immed Resel !!!
Line 3237: Cell is Suitable
Line 3249: !!NCELL diff PLMN(Arfcn:%d)!!
Line 2112: #NW cntrl mode %d#
Line 1902: Store SI 13 RO
Line 1942: PBCCH present: Setting PBCCH as Absent
Line 1946: PBCCH not present 
Line 2012: No Change In SI13 PwrCtrlParam
Line 2068: Don't send New Idle Req for GPRS on CS only stack
Line 2074: SI13 contents Not present: Set SI13 Neededed
Line 4128: rr_CheckAndAddTargetCell
Line 4238: ValidNCellToRead (%d) Rxlev (%d)
Line 4244: No ValidNCellToRead
Line 4381: Found Cell with Valid Bsic but Invalid Resel Param (%d) Rxlev (%d)
Line 4387: No ValidNCellToRead
Line 4431: rr_CountNCellWithBsic:%d rr_NbNear:%d
Line 4451:  SYS 5
Line 4456:  SYS 5Bis 
Line 4461:  SYS 5Ter 
Line 4466:  SYS 6
Line 4471: Error on rx sys 5
