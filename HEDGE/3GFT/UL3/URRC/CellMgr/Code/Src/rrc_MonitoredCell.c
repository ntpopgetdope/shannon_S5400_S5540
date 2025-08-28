Line 328: Cell barred due to %s [and its peer] not being scheduled
Line 374: Cell barred due to %s [and its peer] not being scheduled
Line 406: Cell barred due to %s [and its peer SIB5/SIB 5 bis] not being scheduled
Line 414: Cell barred due to %s [and its peer] not being scheduled
Line 529: Before assimilation: thisCell(%d,%d), CellToAssim(%d,%d)
Line 569: [rrc_MonitoredCell_AssimilateCell] CellToAssim->NumStoredCells(%d)> FREQUENCY_MAXCELLS(%d)
Line 577: Before assimilation: thisCell(%d,%d), CellToAssim(%d,%d)
Line 598: [rrc_MonitoredCell_AssimilateCell] CellToAssim->NumStoredCells(%d)> FREQUENCY_MAXCELLS(%d)
Line 625: copy MIB/SIB from SCellSysInfoCache (%d)
Line 636: wrong SCellSysInfoIndex (%d)
Line 664: Invalid SibIdExt(%i)
Line 676: Invalid SibId(%i)
Line 695: copy %d from SCellSysInfoCache (%d)
Line 715: ValueTag Changed (ServingCell vs SCellSysInfoCache)
Line 720: wrong SCellSysInfoIndex (%d)
Line 778: copy MIB/SB/SIB from CampedSysInfoContainer (%d)
Line 797: Number of Shared PLMNs: %d
Line 814: Candidate rejected due to PlmnId not matching Target PlmnId
Line 821: Candidate Accepcted due to PlmnId matching Target PlmnId
Line 826: Candidate Accepcted due to PlmnId matching Equiv PlmnId
Line 839: Fatal Error: MIB is not availabe in CampedSysInfoContainer
Line 850: Fatal Error: CampedSysInfoContainer is not available (Uarfcn %d, Cpich %d)
Line 885: Waiting for the NecessarySibsRecved Sibs %d to be received
Line 913: Waiting for the Idle Mode Sibs to be received
Line 924: Checking if any other SIB is subscribed other than %s, Id(%i)
Line 932: Checking Subscription: %s, Id(%i) is subscribed
Line 950: Ignore assimilating from ServingCell Instance as %s, Id(%i) is not latest
Line 971: Waiting for the Common Channel Sibs to be received
Line 1031: SIB11/12 recved or requested
Line 1036: need to read Scheduling Info
Line 1041: need to read MIB
Line 1081: SIB4/6 recved or requested
Line 1086: need to read Scheduling Info
Line 1091: need to read MIB
Line 1145: NumStoredCells > FREQUENCY_MAXCELLS
Line 1160: [rrc_MonitoredCell_GetStoredCellSearchCells] MonitoredCell_p->NumStoredCells(%d) >FREQUENCY_MAXCELLS(%d)
Line 1277: %s indicates that %s is barred for %i seconds
Line 1298: %s indicates that %s is reserved for operator use
Line 1314: %s indicates that %s is reserved for operator use
Line 1333: %s indicates that %s is reserved for extension (future use)
Line 1359: Candidate rejected due to CsgId not matching Target CsgId
Line 1371: Candidate rejected due to CsgId not found in SIB3
Line 1393: Cannot Find MibPtr in ServincCell's SysInfo and NewMibPtr in CandidateCell
Line 1396: ProcessSib3 CSG ID : %x
Line 1406: ProcessSib3 CSG ID : %x is not in WhiteList, this CSG cell is not suitable. (CsgIndicator %d)
Line 1411: ProcessSib3 CSG ID : %x is in WhiteList, this cell is suitable (CsgIndicator %d)
Line 1426: ProcessSib3 CSG ID : %x is not in WhiteList, this cell is not suitable
Line 1434: ProcessSib3 CSG ID : %x
Line 1442: %s: Frequency barred due to %s AccessRestriction IE Processing
Line 1522: ProcessSib5or6: Result of the func call rrc_CellSelecter_IsHHOToDifferentBandInProgress is %d
Line 1604: %s Processing : %s not rejected Band Ind (%d) in SIB5 and the PrimaryBandId (%d)
Line 1613: %s Processing : %s barred due to Band Indicated not supported by UE (supported : %x, BandInd %x)
Line 1625: %s Processing : %s not rejected Band Ind (%d) in SIB5 and the PrimaryBandId (%d)
Line 1630: %s Processing : %s not rejected Band Ind (%d) in SIB5 and the PrimaryBandId (%d)
Line 1635: %s Processing : %s rejected due to Band Ind (%d) in SIB5 and the PrimaryBandId (%d) doesn't match.
Line 1653: %s Processing : %s barred due to SIB5 is received in between 2110MHz-2170MHz without Band Ind during Band IV searching
Line 1663: %s Processing : %s barred due to SIB5bis is received in between 2110MHz-2170MHz during Band I searching
Line 1724: Setting the receipt of %s to be necessary since its peer does not have both AICH and PICH info
Line 1736: For %s, PeerSibInfoPtr->IsCurrent is FALSE, return FAIL
Line 1750: %s Processing : %s barred due to missing AICH/PICH info
Line 1788: %s, Id(%i)  stored in %s DB
Line 1806: %s, Id(%i)  stored in %s DB
Line 1835: %s, Id(%i)  deleted from %s DB
Line 1874: %s: Invalid SibIdExt(%i)
Line 1895: %s: Invalid SibId(%i)
Line 1949: OOS in RRC Cnx Establishing : overwrite the Pending state to Idle
Line 2000: LTE not supported: skip SIB19 reading
Line 2008: Cnx Establishing & no QRB: skip SIB19 reading
Line 2027: No deferred SIB11/12 reading (target state = CellFach, rrc cnx setup received
Line 2041: [Cnx Req] deferred SIB11/12 reading (%d)
Line 2047: [Cnx Req] Skip SIB18 reading (%d)
Line 2068: No deferred SIB(%d) reading (target state = CellFach, rrc cnx setup received
Line 2076: [Cnx Req]Deffered SIB(%d) Reading during RRC_Cnx_Setup from Idle
Line 2106: Force to skip SIB11/12 reading (%d)
Line 2135: Force to skip SIB11/12 reading (%d)
Line 2154: %s: Prepare subscription to %s, Id(%i)
Line 2204: CreateSibCancelSubscription : No MIB 
Line 2236: No deferred SIB11/12 reading (target state = CellFach, rrc cnx setup received
Line 2251: [Cnx Req] deferred SIB11/12 reading::cancel it (%d)
Line 2271: deferred SIB11/12 reading::cancel it (%d)
Line 2297: Force to cancel SIB11/12 reading (%d)
Line 2353: %s: Cancel subscription to %s, Id(%i)
Line 2391: Setting Pending State to Ura Pch to Identify Required Sib 2 in Ura Pch state
Line 2398: OOS in Cnx Establishing : overwrite Pending state to Idle
Line 2405: [CandidateCell] Cnx Establishing : overwrite Pending state to Idle
Line 2416: IdentifyRequiredSibs : No MIB 
Line 2471: %s is  necessary
Line 2611: %s: Prepare subscription to %s, Id(%i)
Line 2638: %s: Cancelling subscription to %s, Id(%i)
Line 3103: ERROR Sib: %s already has a requester registered for it!
Line 3111: Registered a requester entry for Sib: %s
Line 3121: ERROR Sib: %s already has a requester registered for it!
Line 3129: Registered a requester entry for Sib: %s
Line 3291: Cell(%i,%i): Checking Value Tags in last received MIB against those in the just received MIB
Line 3314: Class:CandidateCell: %s, Id(%i)  is no longer scheduled - deleting Sib
Line 3322: Class:CandiateCell: %s, Id(%i) tag has changed
Line 3350: Cell(%i,%i): Checking Value Tags in last received MIB against those in the just received MIB
Line 3375: Class:CandidateCell: %s, Id(%i)  is no longer scheduled - deleting Sib
Line 3390: Class:CandiateCell: %s, Id(%i) tag has changed
Line 112: Invalid CnxMgr Pending state: CellDch - using CellFach as the pending state instead
Line 122: CnxMgr CnxState = Rrc_Cnx_Establishing
Line 128: CnxMgr CnxState = Rrc_Cnx_Releasing
Line 134: CnxMgr CnxState = Rrc_Cnx_Established
Line 136: CnxMgr PendingState = %i
Line 142: CnxMgr CnxState = Rrc_Cnx_Released
Line 144: CnxMgr PendingState = %i
Line 1213: IsDCMTestOpModeConditionMet is TRUE
