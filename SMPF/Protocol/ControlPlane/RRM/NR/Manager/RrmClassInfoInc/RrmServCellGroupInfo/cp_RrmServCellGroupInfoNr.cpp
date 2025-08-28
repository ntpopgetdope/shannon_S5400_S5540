Line 54: RrmMngrSetUpdateNr::RrmMngrSetUpdate
Line 61: RrmServCellGroupInfoNr::~RrmServCellGroupInfoNr
Line 67:    >>m_SCell_vt.size:%d
Line 71:    >>m_SCellFreq_vt.size:%d
Line 77: RrmServCellGroupInfoNr::Init
Line 97: RrmServCellGroupInfoNr::ReInit - init servfreq before servcell
Line 136: RrmServCellGroupInfoNr::ReInit - Current size of m_SCellFreq_vt is %d
Line 143: RrmServCellGroupInfoNr::ReInit - MsgGrpId(%d) Destroy Done
Line 172:    >>ReInitSCellDB - Current size of m_SCell_vt is %d
Line 196:      ::SetPCellClsPtr - PCell set to SsbAbsFreq(%d) SubCarrierSpacing(%d), PhyCellId(%d)
Line 208:      ::SetCellGroupId - CellGroupId set to %d
Line 237:      ::SetPCellFreqPtr - m_PCellFreq set to SsbAbsFreq(%d) SubCarrierSpacing(%d)
Line 253:    >>ShowMeTheSCellList
Line 257:      ::Current size of m_Scell_vt is %d
Line 269:        #ScellIdx(%d) SsbAbsFreq(%d) SCS(%d)
Line 278:    >> m_Scell_vt is empty(%d)
Line 286:    >>ShowMeTheSCellFreqList
Line 290:      ::Current size of m_SCellFreq_vt is %d
Line 302:      ::SsbAbsFreq(%d) SCS(%d)
Line 310:      ::m_ScellFrq_vt is empty(%d)
Line 330:      ::SetCurrentSCellConfigStatus:: SCellIdx(%d) Status Update Cmd(%d - %s)
Line 332:      ::Currrent m_SCellConfigBitMask (0x%x)
Line 344:      :: eSCellConfigStatusType is Unknown(%d)
Line 348:      :: After SCellConfigStatus Update, m_SCellConfigBitMask(0x%x)
Line 355:      :::::::::::::::::::::::::::::SetCurrentSCellStatus:::::::::::::::::::::::::::::
Line 357:      :: Currrent m_SCellStatusBitMask (0x%x)
Line 358:      :: For SCellIdx(%d) Status Update Cmd(%s)
Line 371:      :: eSCellStatusType is Unknown(%d)
Line 375:      :: After SCellStatus Update, m_SCellStatusBitMask(0x%x)
Line 385:      :: SCell(scellidx %d, Arfcn %d, SCS %d, PhyCellId %d) status set to %d(%s)
Line 389:      :: SCellInfo not found for SCellIdx(%d)
Line 392:      :: m_SCellStatusBitMask(0x%x)
Line 394:      ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
Line 403:      ::SetDirectSCellStatus - SCellIdx(%d), ScellStatus(%d-%s)
Line 415:      ::eSCellStatusType is Unknown(%d)
Line 418:      ::m_DirectSCellStatusBitMask(0x%x) after SCellState update
Line 425:      ::m_IsDirectSCell is already TRUE
Line 437:      ::ClearDirectSCellStatus
Line 443:      ::UpdateSCellMO
Line 462:      ::Fatal Error!!! pSCellFreqInfo:0x%08x or pSCellInfo:0x%08x is nullptr
Line 468:      ::received ScellConfigToAdd is NULL, just return!!!!
Line 478:        #SCell MO set as ServingCellMO %d
Line 484:        #SCell MO set as (%d) Temporaly => TEMP_MEAS_OBJECT_ID(%d) + SCellIdx(%d)
Line 505:      ::Added SCell Info : Known cell
Line 531:      ::Added SCell Info : Unknown cell
Line 540:        #received ScellConfigToAdd include SMTC for SCell!!!!
Line 564:        #ServCellFreq ServingPeriod:%d Smtc1 MeasCycle:%d SrchCycle:%d MeasRequriement:%d SrchRequirement:%d
Line 576:      ::UpdateScellInfo
Line 577:        #SCellBitmask_Current(0x%x) SCellBitmask_New(0x%x)
Line 578:        #AddModSCellBitmask(0x%x) ReleaseSCellBitmask(0x%x)
Line 599:        #Delta found for bitShift(%d)
Line 603:        #SCellConfigType(%s) for bitShift(%d)
Line 636:        #SCellFreq(Arfcn %d, Scs %d) MeasObjectId(%d)
Line 641:      ::FatalError : Cannot add SCellInfoNr(bitShift %d) to SCell List!!!!
Line 646:        #ScellToAddModList->ScellToAddMod[%d] is NULL
Line 655:      :: Nothing to be done for Config Type of SCELL_CONFIG_TYPE_MODIFY(Only for changes of Dedicated Config)
Line 668:          *(%d) SCellFreq(%d), SCellIndex(%d)
Line 671:          *SCELL_CONFIG_DEDI(0x%08x) ScellConfigPresentBitmask(0x%08x %08x)
Line 677:          *SERVINGCELLMO_MASK(0x%08x) ServingCellConfigPresentBitMask(0x%08x %08x)
Line 682:          *Update SCellMO (%d -> %d)
Line 710:  >> CSI Meas Schedule info found 
Line 717:  >> No CSI Meas Schedule info 
Line 726:          *pSCellFreqInfo is null
Line 733:          *No update SCellMO (%d -> %d)
Line 738:          *No SCell Info
Line 747:      ::Unknown eSCellConfigType %d, Nothing To Do !!!
Line 764:      ::CheckSCellConfigType - bitShift(%d) SCellBitMask_Current(%d) SCellBitmask_New(%d)
Line 768:        #bitShift(%d) SCELL_CONFIG_TYPE_CONFIG
Line 773:        #bitShift(%d) SCELL_CONFIG_TYPE_RELEASE
Line 778:        #bitShift(%d) SCELL_CONFIG_TYPE_MODIFY
Line 783:        #bitShift(%d) Invalid SCellConfigType!!!!!!
Line 791:      ::isSameSCellInfo
Line 795:        #pCurrSCellInfo is NULL(0x%x)! return FALSE!!!!
Line 801:        #Received ScellConfigToAdd is NULL(0x%x), return TRUE!!!!
Line 809: 	     #ScellIndex is different! Curr:%d New:%d
Line 819:      ::AddSCellInfo
Line 825:        #received ScellConfigToAdd is NULL, just return!!!!
Line 852:        #AddSCellInfo::If same ScellIndex(%d) is already exist, remove old one first!
Line 858:          *AddSCellInfo:: No same SCell was configured before
Line 871:        #ScellConfigToAdd->ScellConfigPresentBitmask is not present, return!
Line 892:      ::::::::::Added SCell Info:::::::::::::::::::::::::::::
Line 893:      :: Added SCell Info : ServCellType_e(%d) SCellIndex(%d)
Line 894:      :: Added SCell Info : SsbAbsFreq(%d) SubCarrierSpacing(%d)
Line 895:      :: Added SCell Info : PhyCellId(%d) MeasObjectId(%d)
Line 896:      :: Added SCell Info : Current size of m_Scell_vt is %d
Line 897:      :::::::::::::::::::::::::::::::::::::::::::::::::::::::
Line 907:      ::AddSCellFreqInfo
Line 914:        #SsbAbsFreq (%d), SubCarrierSpacing (%d) Frequency Added to SCellFreqInfo List
Line 920:        #SsbAbsFreq (%d), SubCarrierSpacing (%d) Frequency already exist in the SCellFreqInfo List. So keep it and reuse it.
Line 927:      ::AddSCellFreqInfo
Line 933:      ::received pScellConfig is NULL!!!
Line 955:        #SCELL_CONFIG_COMMON_MASK(0x%08x %08x) ScellConfigPresentBitmask(0x%08x %08x)
Line 961:        #DOWNLINK_CONFIG_COMMON_MASK(0x%08x %08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
Line 968:        #ABSOLUTE_FREQUENCY_SSB_MASK(0x%08x %08x) FrequencyInfoDlPresentBitmask(0x%08x %08x)
Line 977:          * Arfcn(%d), SsbAbsFreq(%d)
Line 981:          * absoluteFrequencySsb(Optional) IE is absent! Do Not Make Frequency for this SCell !!!
Line 991:        #FREQUENCY_BAND_LIST_MASK(0x%08x %08x) FrequencyInfoDlPresentBitmask(0x%08x %08x)
Line 1000:          * BandId(%d), SubCarrierSpacing(%d)
Line 1005:        #SCS_SPECIFIC_CARRIER_LIST_MASK(0x%08x %08x) FrequencyInfoDlPresentBitmask(0x%08x %08x)
Line 1013:          * ScsSpecificCarrier(%d)
Line 1021:        #SSBSUBCARRIER_SPACING_MASK(0x%08x %08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
Line 1030:          * ssbSubcarrierSpacing(%d)
Line 1050:        #SSB_PERIODICITY_SERVINGCELL_MASK(0x%08x %08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
Line 1058:      :: SsbAbsFreq (%d), SubCarrierSpacing (%d) Frequency Added to SCellFreqInfo List
Line 1063:      :: SsbAbsFreq (%d), SubCarrierSpacing (%d) Frequency already exist. Destroy it and Add new one!
Line 1073:      ::ReleaseSCellInfo
Line 1081:        #received ScellToReleaseList is NULL, just return!!!
Line 1088:        #ScellToReleaseList->ScellToRelease[%d].isValid(%d) is invalid!!!
Line 1098:        #ScellToReleaseList->ScellToRelease[%d].isValid(%d) ScellIndex(%d) physCellId(%d)!!!
Line 1129:      :: Removed ScellInfo(ScellIndex %d) Info from m_SCell_vt!
Line 1157:      ::isSameFreqCellExist - Same Frequency exist at m_ScellFreq_vt
Line 1173:      ::RemoveSCellInfo - ScellIdx(%d)
Line 1186: 	    # Remove SCell Info : ServCellType_e(%d) SCellIndex(%d)
Line 1187: 	    #				  	   SsbAbsFreq(%d) SubCarrierSpacing(%d)
Line 1188: 	    #					   PhyCellId(%d) MeasObjectId(%d)
Line 1203:        # Current size of m_Scell_vt is %d
Line 1228:      ::GetSCellFreqInfo - SsbFreq(%d) SubcarrierSpacing(%d) is foud at m_SCellFreq_vt
Line 1269:        #GetNextSCellPtr -can't find the next cell of this SCell(band : %d, arfcn : %d, SubCarrierSpacing %d)
Line 1292:        #GetFirstSCellPtr - SCell Found at Same Frequency! SCellIdx %d SsbAbsFreq %d SCS %d PhyCellId %d
Line 1335:        #GetNextSCellFreqPtr -can't find the next freq of this SCellFreq(band : %d, arfcn : %d, SubCarrierSpacing %d)
Line 1356:        #GetSCellInfo - ScellIdx(%d) is found at m_Scell_vt
Line 1398:      ::UpdateMeasCycle
Line 1408:      ::ScellIdx[%d] Configuration Not Found from SCell List
Line 1412: 	    #ActivationCmd for ScellIdx[%d] is eSCellStatusType(%d)
Line 1427: 	    #ActivationCmd for ScellIdx[%d] is RRM_SCELL_STATUS_TYPE_ACT, update MeasSchedule for this freq as activated SCell requirement
Line 1441:        #SsbAbsFrequency[%d] SubCarrierSpacing[%d] Not Found from SCellFreqList !!!
Line 1453: 	    #DeActivationCmd for ScellIdx[%d] is RRM_SCELL_STATUS_TYPE_DEACT, update MeasSchedule for this freq as Deactivated SCell requirement
Line 1467:        #SsbAbsFrequency[%d] SubCarrierSpacing[%d] Not Found from SCellFreqList !!!
Line 1473:      ::Configuration keeped same as before
Line 1488:      ::CheckSCellActDeactType - %d(%s) - ScellIdx(%d) SCellBitMask_Current(%d) SCellBitmask_New(%d)
Line 1494:      ::CheckSCellActDeactType - %d(%s) - ScellIdx(%d) SCellBitMask_Current(%d) SCellBitmask_New(%d)
Line 1498:      ::CheckSCellActDeactType - ScellIdx(%d) RRM_SCELL_STATUS_TYPE_UNKNOWN
Line 1506:      ::UpdateSCellActDeactStatus
Line 1567:      ::RemoveSCellFreqInfo - Current size of m_SCellFreq_vt is %d
Line 1608:        #RemoveSCellFreqInfo - Current size of m_SCellFreq_vt is %d
Line 1614:      ::MoveAllSCellFreqToInterFreq - Current size of m_SCellFreq_vt is %d
Line 1644:      ::UpdateInterFreqMeasObjectForSsb
Line 1648:      ::FatalError: Invalid pointer received
Line 1668: 	     #Inter-F SsbFreq:%d is FR2 area set PbchStatus as needed
Line 1751:      ::pTargetCell is nullptr and fail to allocate or pScellPtr is NULL
Line 1755:      ::pTargetCell - CellPtr:0x%08x
Line 1791:      ::Last ScellInfo - BandId:%d Arfcn:%d CellId:%d SsbRsIndex:%d SsbTimingOffset:%d SubCarrierSpacing:%d MeasObjectId:%d
Line 1795:        #ADDED : last Scell to ID DETECTED CELL SET.
Line 1800:        #FAILED : last Scell to ID DETECTED CELL SET.
Line 1804:        #SCellFreq(%d) measObjectId(%d) 
Line 1809:        #converted measObjectId(%d)
Line 1816: GetScellFreqList(GrpId:%d m_SCellFreq_vt.size:%d)
Line 1827:    >>ScellFreqPtr:0x%x - Arfcn:%d
Line 1837: SetScellFreqList(GrpId:%d m_SCellFreq_vt.size:%d rFreqListNr.size:%d)
Line 1848:    >>ScellFreqPtr:0x%x - Arfcn:%d
