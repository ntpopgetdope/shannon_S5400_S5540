Line 257: cmdptr is NULL
Line 344: activeStackId %d Window size(%d) is less than %d!!!
Line 352: activeStackId %d Window size(%d) is less than %d!!!
Line 432: activeStackId %d MP: FrameBoundary(%d) uhal_CHmcpCpichMultiPath->frameOffset(%d) SYNC_FB(%d) MemRdInx(%d) OffRefSlot(%d)
Line 441: activeStackId %d MP: itg_time(%d), post_acc_initial(%d) [NV] rxDivEnable(%d)
Line 453: RSN=%d: uhal_CHmcpCpichMultiPath_request[%d,%d] txDiv=%d rxDiv=%d fachMode=%d CellSetType=%d
Line 456: :   scrCode=%d frameOffset=%d [Qchip] isOffline=%d: bufferOffset=%d [Qchip], MemRdInx=%d [chip], OffRefSlot=%d, OffRefChip=%d [Qchip]
Line 459: :   mp_num=%d WindowSize=%d [chip] CoInt=%d NonCoInt=%d MpGain=%d MpAccGain=%d FrameBoundary=%d
Line 462: :   uhal_CHmcpCpichMultiPath->searchWinSize=%d
Line 1031: activeStackId %d uhal_CScomCpichMultiPath_response, Multipath command = NULL
Line 1047: activeStackId %d uhal_CHmcpCpichMultiPath_response: uhal_HmcpHpcm_GetModemOnStatus(activeStackId) = %d uhal_HmcpHpcm_GetFrontPowStatus() = %d
Line 1062: uhal_CHmcpCpichMultiPath_response():state(%d) *mpSrchCount_ptr(%d),MCD1(%d),MCD2(%d)
Line 1106: activeStackId %d MP: frame_offset(%d), win_offset(%d), win_pos(%d)
Line 1120: RSN=%d:uhal_CHmcpCpichMultiPath [%d %d] scrCode=%d, uhal_MpSrch_DataMover_enabled(%d)
Line 1275: PRV Path found isStrongestCond %d frameOffsetDiff = %d PrvFrameoffset %d offset %d mp_thresh %d uhal_srch_mp_threshold %d
Line 1280: PRV Path found but energy %d is not bigger than threshold %d uhal_srch_mp_threshold %d
Line 1286: PRV Path not found frameOffsetDiff = %d PrvFrameoffset %d offset %d mp_thresh %d uhal_srch_mp_threshold %d
Line 1778: cmdptr is NULL
Line 1788: activeStackId %d uhal_CHmcpCpichMultiPath_undo
Line 1872: U_L1_MPItgTimeInitial = %d
Line 1873: U_L1_MPPostAccInitial = %d
Line 1874: U_L1_MPEcNoInitialThreshold = %d
Line 1875: U_L1_MPEcNoNeighbourThreshold = %d
Line 1876: U_L1_MPNumOfPaths = %d
Line 1877: U_L1_MPWindowSize = %d
Line 1880: U_L1_MPOfflineItgTimeInitial = %d
Line 1881: U_L1_MPOfflinePostAccInitial = %d
Line 1884: U_L1_MPFachGapWindowSize = %d
Line 1895: MP Offline: Possibly running for more time than available buffer duration allows
Line 2086: uhal_HmcpSearcherMPLisr: cmd==NULL
Line 2092: activeStackId %d uhal_HmcpSearcherMPLisr: uhal_HmcpHpcm_GetModemOnStatus(activeStackId) = %d uhal_HmcpHpcm_GetFrontPowStatus() = %d
Line 2116: activeStackId %d MP LISR IRAT: uhal_HmcpHpcm_GetModemOnStatus(activeStackId) = %d uhal_HmcpHpcm_GetFrontPowStatus() = %d
Line 2136: activeStackId %d uhal_HmcpSearcherMPLISR: srch_status(0x%x)
Line 2187: uhal_HmcpSearcherMPLISR mess-up: s3_request=%d, mp_request=%d
Line 2288: activeStackId %d MP HISR: uhal_HmcpHpcm_GetModemOnStatus(activeStackId) = %d uhal_HmcpHpcm_GetFrontPowStatus() = %d
Line 2295: uhal_HmcpSearcherMPISR: cmd_ptr==0
Line 2317: activeStackId %d MP HISR IRAT: uhal_HmcpHpcm_GetModemOnStatus(activeStackId) = %d uhal_HmcpHpcm_GetFrontPowStatus() = %d
Line 2326: uhal_HmcpSearcherMPISR: cmd_ptr==0
Line 2366: uhal_HmcpSearcherMPISR: wrong fbId=%d
Line 2397: uhal_HmcpSearcherMPISR: mp_abort = %d
Line 4265: Drag : %d, Chips(Drag/4) : %d
Line 4271: fingerPosition: %d, PrvFrameBoundary:%d, uhal_srch_drx_mp_window_size x 4 : %d
Line 4724: activeStackId %d Weak Signal & change MP param
Line 4745: activeStackId %d Uhal:cellSetType[%d] is not initialised!!!
Line 4831: isFreqHypo is TRUE
Line 4849:  IsTxDivSupportedNw is TRUE: Set itgTime to 255
Line 473: activeStackId %d uhal_CHmcpCpichMultiPath_response():GroupSrch
Line 489: activeStackId %d uhal_CHmcpCpichMultiPath_response():sendResponseToUphy
Line 3210: activeStackId %d Invalid U_L1_MPNumOfPaths=%d must be >1
Line 3334: MP Offline:	 ScrCode=%d pathIndex=%d frameOffset=%d energy=%d Ec/Io=%d
Line 3450: PRV Path found frameOffsetDiff = %d PrvFrameoffset %d sPathOffset[0] %d StrongestEng %d mp_thresh %d uhal_srch_mp_threshold %d
Line 3456: PRV Path found but energy %d is not bigger than threshold %d uhal_srch_mp_threshold %d
Line 3462: PRV Path not found frameOffsetDiff = %d PrvFrameoffset %d sPathOffset[0] %d mp_thresh %d uhal_srch_mp_threshold %d
Line 3495:  isCommercialPlmnId = %d, cell type = %d, Fach = %d, arfcn = %d
Line 3500:  SaveEcIo = %d
Line 3882: [FH] Update 2nd PhaseIdx: prvFhEng %d currentFhEng[%d] %d
Line 3886: [FH] Stay 1st PhaseIdx: prvFhEng %d currentFhEng[%d] %d
Line 5009: [FH] uhal_CHmcpCpichMultiPath_getPhaseIndex: sorted phaseIndex = %d, uhal_CHmcpCpichMultiPath->phaseIndex = %d, isChangePhaseIdx=%d, mp_thresh = %d, EngAboveThresh = %d, EcIo =%d sumEcIo = %d
Line 3936: MP ANT0_ENG(%d) ANT1_ENG(%d)
Line 3607: Skip Update for MP result during FH
Line 2751: [FH] phaseIndex = %d
Line 2754: [Gs_Done] ant0_eng(%d) ant1_eng(%d) MpCorrBitSel(%d) MpEcBitSel(%d) itg_time(%d) mp_thresh(%d) uhal_srch_mp_threshold(%d)
Line 3995: [False Alarm] GS MP Offline:	 pathIndex=%d frameOffset=%d offset=%d energy=%d
Line 4002: [Debug] pathIndex=%d
Line 3548: [FA1][CellType %d] MP Online: arfcn=%d ScrCode=%d pathIndex=%d frameOffset=%d energy=%d Ec/Io=%d
Line 3568: [RakeDbg]RefCnt:refFrameCnt %d, refSlotCnt %d, refChipCnt %d, refChipX8Cnt %d , TIME_REF_CNT %d
Line 3578: numOfDrx %d numOfDrxFail %d 
Line 3584: [FA2][CellType %d] MP Online: arfcn=%d ScrCode=%d pathIndex=%d frameOffset=%d energy=%d Ec/Io=%d
Line 3589: [FA3][CellType %d] MP Online: arfcn=%d ScrCode=%d pathIndex=%d frameOffset=%d energy=%d Ec/Io=%d
Line 3594: [FAX][CellType %d] MP Online: arfcn=%d ScrCode=%d pathIndex=%d frameOffset=%d energy=%d Ec/Io=%d
Line 2893: activeStackId %d [MCD] mcdFrameBoundary: %d, refFrameBoundary: %d, isDominantPath %d, lastGoodMcd = %d
Line 3679: MP Online: Arfcn: %d, campingUarfcn:%d, Drag : %d, Chips(Drag/4) : %d, DeltaCorrection:%d
Line 3684: MP Offline: Arfcn: %d, campingUarfcn:%d, Drag : %d, Chips(Drag/4) : %d, DeltaCorrection:%d
Line 2928: activeStackId %d [MCD] mcdFrameBoundary: %d, refFrameBoundary: %d, isDominantPath %d, lastGoodMcd = %d
Line 4165: [GS MP Side-lobe removal]:	previous pathNum=%d side-lobe removed pathNum=%d
Line 4083: [FA%d] [MP Online] scrCode=%d EcNo=%d[dB] Rscp=%d[dBm] Rssi=%d[dBm] NumPathAboveThresh=%d EngAboveThresh=%d
Line 4123: [MP Offline] scrCode=%d EcNo=%d[dB] Rscp=%d[dBm] Rssi=%d[dBm] NumPathAboveThresh=%d EngAboveThresh=%d, mp_thresh=%d
Line 3760: activeStackId %d [IRAT U2G] Replace multipath info with old one
Line 3766: :   scrCode=%d EcNo=%d[dB] Rscp=%d[dBm] Rssi=%d[dBm] NumPathAboveThresh=%d EngAboveThresh=%d
Line 728: activeStackId %d MP EcIo MpCorrBitSel(%d) MpEcBitSel:(%d) itg_time(%d) mp_thresh(%d) uhal_srch_mp_threshold(%d)
Line 729: activeStackId %d ant0_eng(%d), ant1_eng(%d) MP EcIo srchEcIo[-uhal_srch_mp_threshold - 3](%d) total_mp_gain_dB(%d)
Line 859: Strongest path energy should be higher than Weakest path energy * (%d/%d)
Line 544: [MP Side-lobe removal]:	previous pathNum=%d side-lobe removed pathNum=%d
Line 1642: Ec/Io %d is lowered 2dB
Line 1647: Ec/Io %d is lowered 1dB
Line 1384: activeStackId %d uhal_CHmcpCpichMultiPath_response[%d,%d] Invalid U_L1_MPNumOfPaths=%d must be >1
Line 1418: pathIndex=%d frameOffset=%d offset=%d energy=%d  win_pos %d
Line 1428: [False Alarm] MP Offline:	 pathIndex=%d frameOffset=%d offset=%d energy=%d win_pos %d
Line 1500: [FA%d] MP Online: ScrCode=%d pathIndex=%d frameOffset=%d index=%d energy=%d Ec/Io=%d
Line 1514: MP Offline: ScrCode=%d pathIndex=%d frameOffset=%d index=%d energy=%d Ec/Io=%d
Line 1550: activeStackId %d [MCD] mcdFrameBoundary: %d, refFrameBoundary: %d, isDominantPath %d
Line 1598: Arfcn: %d, campingUarfcn:%d, Drag : %d, Chips(Drag/4) : %d, DeltaCorrection:%d
Line 1603: Arfcn: %d, campingUarfcn:%d, Drag : %d, Chips(Drag/4) : %d, DeltaCorrection:%d
Line 1699: [MP online] scrCode=%d EcNo=%d[dB]: Rscp=%d[dBm] Rssi=%d[dBm] num_paths_above_threshold=%d energy_above_threshold=%d, total_energy=%d
Line 1722: [MP offline]   scrCode=%d EcNo=%d[dB]: Rscp=%d[dBm] Rssi=%d[dBm] num_paths_above_threshold=%d energy_above_threshold=%d, total_energy=%d
Line 1745: activeStackId %d [IRAT U2G] Replace multipath info with old one
Line 1752: MP online: scrCode=%d EcNo=%d[dB] Rscp=%d[dBm] Rssi=%d[dBm] num_paths_above_threshold=%d energy_above_threshold=%d
Line 2538: activeStackId %d [FH][%d] idx=%d, phase_offset = %d
Line 2543: activeStackId %d [FH][%d] idx=%d, phase_offset = %d
Line 2548: activeStackId %d wrong freq count %d
Line 2567: MP ScrCode=%d FrameOffset=%d MemRdInx=%d OffRefSlot=%d SyncFbSlot=%d SyncSlot=%d Ovsf=%d
Line 2571: MP : txDiversity=%d rxDiversity=%d(NV: %d) uarfcn=%d isOffline=%d
Line 2588: activeStackId %d Window size(%d) is less than %d!!!
Line 2596: activeStackId %d Window size(%d) is less than %d!!!
Line 2614: MP[GS Offline] :	 WindowSize=%d [half chip] ItgTime=%d AccPass=%d CellSetType=%d MpCellCnt=%d
Line 2618: MP[GS Offline] :	 txDiv=%d rxDiv=%d EngBitSel=%d CorrBitSel=%d
Line 2624: MP[GS Online] :	 WindowSize=%d [chip] ItgTime=%d AccPass=%d CellSetType=%d MpCellCnt=%d
Line 2628: MP[GS Online] :	 txDiv=%d rxDiv=%d EngBitSel=%d CorrBitSel=%d
Line 4943: [MCD] isRolloverConditionMet %d, rollOverCounter1 %d, rollOverCounter2 %d
Line 5042: Frame Offset (%d) more than 5Tc away from peak Offset (%d). Exclude from MCD calc
Line 5057: %d th: pmf %d, pathEnergy %d, sumPathEnergy %d, frameOffset %d, MCD(non-scaled) %d
Line 5062: Final MCD Value (scaled) : %d
