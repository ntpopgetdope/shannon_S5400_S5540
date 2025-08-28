Line 240: [MDFS]IpcHndlr_Dfs_Set: [DUMMY]
Line 386: IPC: IpcHndlr_LTE_Init 
Line 388: Activate LTE: LteStatus(%d), StackId(%d), noReset(%d), noBlindMbsfn(%d)
Line 428: ERROR!!. noReset(%d) , NrOnStatus:%d 
Line 488: [MIF][TTI] Release QOS_LTE_PHY_TP_HIGH, CC0 Dlgrant ratio: %d, MIF flag: 0x%08x
Line 496: n2l_flag: %d
Line 515: LTE release done
Line 536: LTE_Release_Interrupt_Done (Status:%d)
Line 551: IPC: LTE demod release req
Line 579: IPC: IPC_ACTION_ID_LTE_DSP_UL_RELEASE: noReset(%d)
Line 620: IPC: LTE release done: noReset(%d), n2l_flag:%d 
Line 624: ERROR!!. noReset(%d) , NrOnStatus:%d 
Line 643: IPC: Deactivate LTE (Urgent) (Status:%d)
Line 692: IPC:IpcHndlr_LTE_Meas_Init(LteStatus %d), StackId(%d)
Line 710: PathMap, tdbuf_idx: 0x%x, td_buf_idx_div: 0x%x, N2L_IRAT: %d
Line 722: N2L IRAT flag set
Line 743: IPC: IpcHndlr_LTE_SubCore_Ctrl_Ind PowerOnOff:%d 
Line 810: LTE_KillSelf(1) : LVD_STATUS_MON(%x), infra_gen_symbproc_sw_clk_on(%x, %x), pINFRA_MBUS_SW_CLK_ON(%x), SYMBPROC_SCH4G_DYN_CLK_ON_EN (%x), EHARQ_CTRL_STATE (%x), HM0_HW_REQ_BLOCK (%x), HM1_HW_REQ_BLOCK (%x)
Line 812: LTE_KillSelf DEBUG(1)
Line 932: LTE_KillSelf(2) : LVD_STATUS_MON(%x), infra_gen_symbproc_sw_clk_on(%x, %x), pINFRA_MBUS_SW_CLK_ON(%x), SYMBPROC_SCH4G_DYN_CLK_ON_EN (%x), EHARQ_CTRL_STATE (%x), HM0_HW_REQ_BLOCK (%x), HM1_HW_REQ_BLOCK (%x) 
Line 935: LTE_KillSelf DEBUG(2) 
Line 1046: Data mover defualt frunction
Line 1052: Dmov int func %d
Line 1169: LTE DataMover mapping(base[0x%X], size(bytes)[%d/%d/%d]): pLteSymbprocD2d(0x%X), pLteDci(0x%X), pLteSinr(0x%X), pLteSinrD2d(0x%X), pLteSinrCsi(0x%X), pLteSinrStti(0x%X)
Line 1173: pLteDenoiserDseStrQs(0x%X), pLteDenoiserDsePr(0x%X), pLteDenoiserDseStrCrsMrs(0x%X), pLteDenoiserDnLfo(0x%X), pLteTcMain(0x%X)
Line 1178: pLteTcSub(0x%X), pLteTcSL(0x%X), pLteDmrsStti(0x%X), pLteSinrCsiStti(0x%X), pLteSinrQs(0x%X), pLteSinrCsiQs(0x%X), pLteDemodCsi(0x%X)
Line 1208: LTE_initialize
Line 1252: Activate 3G DSP
Line 1280: Deactivate 3G DSP
Line 1403: (I)already NR initialized, skip initializing: coreID(%d)
Line 1412: Nr Initialize, LteOnStatus: %d, NrOnStatus: %d, NrMeasInt_status: %d
Line 1513: Nr Release, LteOnStatus: %d, NrOnStatus: %d, NrMeasInt_status: %d
Line 1554: LTENB_initialize
Line 1589: IPC: IpcHndlr_NBIOT_Initialize 
Line 1706: (F) Invalid SimContext(%d) comes from L1, force to set as SIM#1
Line 1731: (F)Invalid cell_group(%d) or StackId(%d)
Line 1836: LTE ONLY::Skip Sending PHY_PHY_LTE_EVENT_REPORT_REQ (NR OFF) LTE Reset Trigger
Line 1845: Wrong Stack ID comes L: MCG Stack:%d  stack1 valid:%d NR PCell CPU coreId:%d Pcell bitmap:0x%x stack2 valid:%d NR PCell CPU coreId:%d Pcell bitmap:0x%x
Line 1866: IPC not sended CPU CoreID not valid:%d NR PCell CPU coreId:%d Pcell bitmap:0x%x stack2 valid:%d NR PCell CPU coreId:%d Pcell bitmap:0x%x
Line 1873: [LTE IPC] PHY_PHY_LTE_EVENT_REPORT_REQ: Type(%d), Cmd(%d) satckId:%d, CoreID:%d Bitmap:%x
