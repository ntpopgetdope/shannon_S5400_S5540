Line 51: RrmCellInfoNr::RrmCellInfoNr()
Line 65: RrmCellInfoNr::~RrmCellInfoNr() - CellId:%d MeasObjectId:%d
Line 104:      ::InitAllExceptNwParam - RsType:%s(%d)
Line 220:      ::GetSsbTimingOffset Cell[%d,%d] - Invalid RsIndex:%d maxNrOfRsIndex:%d
Line 247: RrmCellInfoNr::SetSsbTimingOffsetArray
Line 283:      ::SetCellCorrEnergy from (%d) to (%d)
Line 289:    >>InitSsbTimingOffset
Line 313:    >>UpdateSsbTimingOffset - NumSsbTimingOffset:%d SsbIndex:%d, (enum)SsbPeriod %d NumHF:%d
Line 319:    >>Invalid NumSsbTimingOffset:%d
Line 338:      ::[%d]:%d - IGNORE TimingOffset of BLIND DETECTION RESULT
Line 342:    >>Invalid SsbIndex:%d
Line 356:    >>UPDATED CELL SsbTimingOffset
Line 372:      ::GetAbsoluteTimingOffsetDelta - SsbTimingOffset:%d m_SsbTimingOffsetArray[%d]:%d ssbSampleMax:%d AbsTmOffDlt:%d
Line 399:      ::FindHfiUsingTimingOffset - NumHF:%d TimingOffset:%d TimingOffsetArray[%d]:%d SampleMax:%d SamplePeriod:(enum)%d
Line 428:      ::FindSsbUsingTimingOffset - SsbTimingOffset:%d diff:%d m_SsbTimingOffsetArray[%d]:%d ssbSampleMax:%d
Line 436:    >>UpdateSsbTimingOffsetDelta - CellId:%d SsbTimingOffset:%d SsbPeriod:(enum)%d eCause:(enum)%d
Line 458:      ::SelectedDiffMax(%d) target_delta(%d)
Line 466:      ::INVALID - Difference:%d exceed SelectedDiffMax:%d
Line 489:      [HFI]::FixHitted! SCellStatus%d(0:DEACT, 1:ACT), PrevSrchDoneCnt(%d), numSsbTimingOffset(%d)
Line 496: Fatal ERROR: pSCellInfo for Arfcn(%d) SCS(%d) is not found
Line 501: Fatal ERROR: pServCellGroupInfoNr is not found
Line 517:      ::UPDATED CELL SsbTimingOffset - NumHF:%d difference:%d and SsbSampleMax:%d(SsbPeriod:(enum)%d numSsbTimingOffset:%d)
Line 526:    >>UpdateSsbTimingOffsetAfterCdrx - CellId:%d SsbTimingOffsetDiff:%d SsbPeriod:(enum)%d numSsbIndex:%d
Line 536:      ::UPDATED CELL m_SsbTimingOffset:%d
Line 549:      ::UPDATED CELL SsbTimingOffset
Line 627:      ::DeriveSsbIndex - fromCell(ARFCN:%d PCID:%d) using SsbTimingOffset:%d Tolerence:%d, (enum)Periodic %d
Line 642:    >>INVALID - Difference:%d exceed Tolerence:%d
Line 665:    >>[0]:%-9d [1]:%-9d [2]:%-9d [3]:%-9d
Line 671:    >>[4]:%-9d [5]:%-9d [6]:%-9d [7]:%-9d
Line 678:    >>[8]:%-9d [9]:%-9d [10]:%-9d [11]:%-9d [12]:%-9d [13]:%-9d [14]:%-9d
Line 682:    >>[15]:%-9d [16]:%-9d [17]:%-9d [18]:%-9d [19]:%-9d [20]:%-9d [21]:%-9d
Line 686:    >>[22]:%-9d [23]:%-9d [24]:%-9d [25]:%-9d [26]:%-9d [27]:%-9d [28]:%-9d
Line 690:    >>[29]:%-9d [30]:%-9d [31]:%-9d [32]:%-9d [33]:%-9d [34]:%-9d [35]:%-9d
Line 694:    >>[36]:%-9d [37]:%-9d [38]:%-9d [39]:%-9d [40]:%-9d [41]:%-9d [42]:%-9d
Line 698:    >>[43]:%-9d [44]:%-9d [45]:%-9d [46]:%-9d [47]:%-9d [48]:%-9d [49]:%-9d
Line 702:    >>[50]:%-9d [51]:%-9d [52]:%-9d [53]:%-9d [54]:%-9d [55]:%-9d [56]:%-9d
Line 706:    >>[57]:%-9d [58]:%-9d [59]:%-9d [60]:%-9d [61]:%-9d [62]:%-9d [63]:%-9d
Line 714:      ::Arfcn:%d CellId:%d m_SsbRsIndex:%d m_SsbTimingOffset:%d
Line 746: 	>>Unexpected TargetSubCarrierSpacing:%d(enum) Set DefaultCpLength
Line 750: GetCpLength - SCS:%d(enum), SelectedCpLength:%d
Line 762:      ::SetRxBeamIndex from:%d to:%d
Line 770:      ::Delete m_SibCellInfo.pNeighCellInfo:0x%08x - NR Arfcn:%d CellId:%d
Line 777:      ::Delete m_SibCellInfo.pTreselCount:0x%08x - NR Arfcn:%d CellId:%d
Line 812:    >>SetSibNeighCellInfo - Arfcn:%d CellId:%d
Line 816:      ::OLD SibNeighCellInfo
Line 822:    >>pNeighCellInfo is allocated - ptr:0x%08x
Line 827:    >>NEW SibNeighCellInfo
Line 857:    >>pTreselCount is allocated - ptr:0x%08x
Line 871: RrmCellInfoNr::InitSibTreselCount - Start:%d, StartMs:%d
Line 879:      ::pFreqInfoNr(Arfcn:%d, SubCarrierSpacing:(enum)%d) is NULL!!!
Line 902:      ::QoffsetCell:%d QrxLevMinOffsetCell:%d QrxLevMinOffsetCellSULPresent:(bool)%d QrxLevMinOffsetCellSUL:%d QqualMinOffsetCell:%d
Line 909: RrmCellInfoNr::DeleteCsiRsCellInfo - free m_pCsiRsCellInfo(0x%x)
Line 917: RrmCellInfoNr::DeleteCsiRsCellInfo - m_pCsiRsCellInfo(0x%x) freed!!!
Line 926: RrmCellInfoNr::GetCsiRsCellInfo - m_pCsiRsCellInfo is NULL!
Line 947: RrmCellInfoNr::UpdateCsiRsCellInfo - fail to alloc m_pCsiRsCellInfo
Line 1067: 	>>Mismatching m_CellId:%d rSsbMeasResult.CellId:%d
Line 1071: SsbMeasResult.TimingOffset
Line 1074: Update SsbTimingOffset - NumSsbIndex:%d bUpdateTO:(bool)%d
Line 1085: IGNORE MeasResult of BLIND DETECTION RESULT
Line 1091: 	>>Invalid rSsbMeasResult.SsbIndex[0]:%d maxNrOfRsIndex:%d
Line 1111: 	>>Invalid NumSsbIndex:%d maxNrOfRsIndex:%d
Line 1122:    >>StoreSsbMeasResult - Arfcn:%d CellId:%d NumSsbIndex:%d bUpdateL3beam:(bool)%d bUpdateL3cell:(bool)%d SsbBitmap:0x%08x %08x
Line 1194:    >>RrmCellInfoNr::CheckFullBeam
Line 1204:    >>TimingOffset is not fully contain for this cell
Line 1225: 	>>SetLowEngCell prev:%d -> new:%d
Line 1233:    >>NR cellID %d, SetIsTReselExpiredCurrentCycle Change to %d
Line 1238:    >>NR cellID %d, GetIsTReselExpiredCurrentCycle %d
