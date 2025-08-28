Line 36: RrmSubBlkActDeactMeasObject()
Line 42: ~RrmSubBlkActDeactMeasObject()
Line 47: RrmSubBlkActDeactMeasObject::Init
Line 54:    >>ActMeasObject - Activate MeasObjectId(%d)
Line 68:    >> given pointer is invalid!!! pFreqInfoNr(0x%x)!
Line 81:    >>SsbFreqPresent - INTRA MeasObject:%d for SSB is updated
Line 87:    >>SsbFreqPresent - SCELL MeasObject:%d for SSB is updated
Line 93:    >>SsbFreqPresent - INTER MeasObject:%d for SSB is updated
Line 97:    >>SsbFreqPresent - FreqType is invalid(%d), SSB cannot be updated
Line 125:    >>ActIntraFreqMeasObjectForSsb
Line 131:    >> FatalError: Invalid pointer received
Line 161:    >>Error! pServingCellInfo is NULL
Line 168:    >> FatalError: Invalid pointer received
Line 182:    >> ObjectId info - MeasObjectId(%d) Smtc1Present(%d) Smtc2Present(%d) smtc1.PeriodicityAndOffsetChoice(%d) Smtc2.Periodicity(%d)
Line 188:    >>SsbFreq:%d is FR2 area
Line 242:    >>ActSCellFreqMeasObjectForSsb
Line 250:    >> FatalError: Invalid pointer received
Line 258:    >> FatalError: Invalid pointer received
Line 287:    >> FatalError: Invalid pointer received
Line 302:    >> ObjectId info - MeasObjectId(%d) Smtc1Present(%d) Smtc2Present(%d) smtc1.PeriodicityAndOffsetChoice(%d) Smtc2.Periodicity(%d)
Line 309:    >>SCell SsbFreq:%d is FR2 area set PbchStatus as needed
Line 336:      ::UpdateSCellFreqMeasObjectForSsb - SCellFreq Smtc1 MeasCycle(%d), SrchCycle(%d), MeasRequriement(%d), SrchRequirement(%d)
Line 344:    ::UpdateSCellFreqMeasObjectForSsb - SCellFreq Smtc2 MeasCycle1(%d), MeasRequriement1(%d)
Line 365:      ::UpdateSCellFreqMeasObjectForSsb - SCellFreq Smtc1 MeasCycle(%d), SrchCycle(%d), MeasRequriement(%d), SrchRequirement(%d)
Line 380:      ::UpdateSCellFreqMeasObjectForSsb - SCellFreq Smtc2 MeasCycle1(%d), MeasRequriement1(%d)
Line 399:    >> FatalError: Invalid pointer received
Line 403:    >>ActInterFreqMeasObjectForSsb - firstMoId:%d targetMoId:%d
Line 427:    >> FatalError: Invalid pointer received
Line 441:    >>ObjectId info - MeasObjectId(%d) Smtc1Present(%d) Smtc2Present(%d) smtc1.PeriodicityAndOffsetChoice(%d) Smtc2.Periodicity(%d)
Line 448: 	 >>Inter-F SsbFreq:%d is FR2 area set PbchStatus as needed
Line 501:      ::DeactUtraMeasObject - Deactivate Utra MeasObjectId(%d)
Line 513: 	    ::targetMeasObjId(%d) not found!
Line 533:      ::DeactEutraMeasObject - Deactivate Eutra MeasObjectId(%d)
Line 545: 	   :: targetMeasObjId(%d) not found!
Line 565:      ::DeactMeasObject - Deactivate NR MeasObjectId(%d)
Line 581:      :: targetMeasObjId(%d) not found!
Line 598:        #DeactMeasObject - Destroy CSI-RS MeasObjectId(%d)
Line 617:        #Deact Intra-F MeasObjectId(%d)!
Line 623:        #Deact SCell-F MeasObjectId(%d)!
Line 629:        #Deact Inter-F MeasObjectId(%d)!
Line 634:        #Skip Deact of Eutra MeasObjectID
Line 647:    >>DeactMeasObjectFromAllFrequency - Deactivate MeasObjectId:%d
Line 655:      ::Found from NR - Deact MeasObjectId:%d
Line 663:      ::Found from LTE - Deact MeasObjectId:%d
Line 671:      ::Found from 3G - Deact MeasObjectId:%d
Line 680:        #DeactMeasObjectFromIntraFrequency - targetMeasObjId(%d)
Line 706:        #PCell MeasObjId Changed to (%d) from DeactMeasObjId(%d)
Line 720:        # Cannot find SCell frequency for MeasObjectId(%d)
Line 729:        # Cannot find SCellInfo for MeasObjectId(%d)
Line 739:        # given RemovedMeasObjId(%d) is MockMeasId, Let it be... as MOCK
Line 756:        # SCell MeasObjId Changed to (%d) from DeactMeasObjId(%d)
Line 764:    >>RemoveCliMeasObject - Remove MeasObjectId:%d
Line 768:    >> targetMeasObjId(%d) not found!
