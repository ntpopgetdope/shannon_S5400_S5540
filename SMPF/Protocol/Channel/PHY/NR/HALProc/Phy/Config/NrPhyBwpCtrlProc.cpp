Line 188: [PROC][BWP][INACT_TIMER] defaultBwpIatFlag(%d), slotSettingTimer(%d), valueDefaultBwpIatTimer(%d)
Line 221: [PROC][BWP][INACT_TIMER] defaultBwpIatFlag(%d), slotSettingTimer(%d), valueDefaultBwpIatTimer(%d)
Line 262: (F)mu(%d) is invalid
Line 323: [PROC][BWP][INACT_TIMER] ccIdx(%d), valid(%d), value(%d), bwpInactTimer_in_slot(%d) isBwpInactTimerSupported(%d), BwpID(Default/Active:%d/%d), defaultBwpIatStoreFlag(%d), NumOfBwpDownlink(%d), scellActState(%d)
Line 653: [BWPPROC] ControlBwpSwitchingByDci for Dormant BWP : LinkType(%d), BwpIndicator(%d) NumOfBwpConfigured(UL/DL)(%d/%d) ActiveBwpId(UL/DL)(%d/%d), DormantBwpCcBitMapSize(%d), DormantBwpDciType(%d), DormantBwpCcBitMap(0x%x)
Line 670: (F)ERROR in ControlBwpSwitch: m_NumOfBwpUplink(%d)
Line 705: (F)ERROR in ControlBwpSwitch: m_NumOfBwpUplink(%d)
Line 729: (F)ERROR in ControlBwpSwitch: LinkType(%d)
Line 827: dormantBWP_Config_r16.present_flag is false
Line 834: (F)Error Wrong DemodCC: demod_cc(%d)
Line 840: [NR BWP] Scell[%d] Staus is %d 
Line 856: Dormant Status received %d
Line 862: Already in Dormant BWP Ignore this DCI
Line 870: Already in Active state Ignore this DCI
Line 888: Dormant BWP Info : dormantScellIdx[%d] = BwpSwitchingType(%d), scell_index(%d), demod_cc(%d), dormantFlag(%d), dormancyGroupId(%d)
Line 897: [NR BWP] Not send BWP SWITCH IPC to L1
Line 934: [NR IPC] L1C_PHY_BWP_ID_UPDATE_IND, BM_SrcCc/StackId(%d/%d) CC(%d) scell_index(%d) UL(status(%d)/id(%d)) DL(status(%d)/id(%d))
Line 951: [NR BWP] Not send BWP SWITCH IPC to L1, m_BwpCtrlProcDb.BwpSwitchingStatus is 0 
Line 1055: [PROC][BWP][INACT_TIMER] Update with sleep time : numSlotOfwakeUp(%d) = numSlotRemainingIatExpiring(%d) - ([aslot_idx(%d) or currentAslot(%d)] - slotNumOfSleep(%d)), 
Line 1060: [PROC][BWP][INACT_TIMER] skip the restore default BWP IAT: flag_valid(%d), restoreIpcFlag(%d), ccIdx(%d)
Line 1083: [NR][BWP] InactivityTimer expired
Line 1229: (I)SetXrsCarrierOwnCfg: isUssFound(2)valid(2)cc(2)(%d)/cif(1)/ss_id(1)/coreset_id(1)(%d)/FDRA(0x%X)/duration(%d)/CAND(%d%d%d%d%d)
Line 1290: (I)Error in CheckXrsCarrierrCfg: incorrect SchedulingCellInfo(%d)
Line 1348: (I)Skip ResetXrsCarrierOwnCfg: CcIdx(%d)/(%d)
Line 1403: [BWPProcBackground] display the valid value in tciTblSsbIdx((tci<<8|ssb)<<16|(tci<<8|ssb)), 0xff == Invalid
Line 1409: [BWPProcBackground] 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x
Line 1613: [BWPPROC][TCI] NumOfTciStates, PREV(CCH:%d,%d,%d)(SCH:%d), CUR(CCH:%d,%d,%d)(SCH:%d)
Line 1696: [BWPPROC][TCI] tciChangeType(%d), tciChangeIndex(%d), coresetId(%d)
Line 1880: (F)Error in Update_ScellStatus: m_CcIdx(%d)
Line 1894: (F)Error in Update_ScellStatus: m_CcIdx(%d)
Line 1899: Dormant BWP state(%d) : ActiveBwpId(%d), ScellArrayIdx(%d)
Line 1991: [BWPPROC][TCI] FindTypeATciIdxForQcledTrs, detectedSsbIdx(%d), ssbTciStateId(%d), csirsId(%d), lowestTrsIdx(%d), tciIdxForQcledTrs(%d)
Line 2010: [BWPPROC] Clear SCell TCI info
Line 2114: [PROC][BWP][INACT_TIMER_CA] cmd(%d), valid(%d), value(%d), bwpInactTimer_in_slot(%d) isBwpInactTimerSupported(%d), BwpID(Default/Active:%d/%d), defaultBwpIatStoreFlag(%d), ccIdx(%d)
Line 2117: (F) Not Scell PcellCc(%d) = m_CcIdx(%d)
