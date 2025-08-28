Line 50: RrmSubBlkUpdateMeasObject()
Line 55: ~RrmSubBlkUpdateMeasObject()
Line 60: RrmSubBlkUpdateMeasObject::Init
Line 67:    >>UpdateServingCellMO - bPresentServingCellMO:(bool)%d servingCellMO:%d
Line 80:    >>pServFreq:0x%08x or pServCell:0x%08x is nullptr
Line 107:      ::New Serving MO [%d]
Line 132:      ::New servingCellMO:%d / Current servingCellMO:%d MockMeasObject:(bool)%d
Line 166:      ::Cannot Create MeasObjectNR
Line 184:      ::Current Serving MO set as TEMP_MEAS_OBJECT_ID (%d)
Line 188:      ::No ServingCellMo information, uses current servingCellMo:%d
Line 212:      ::ServCellFreq ServingPeriod:%d Smtc1 MeasCycle:%d SrchCycle:%d MeasRequriement:%d SrchRequirement:%d
Line 222: RrmSubBlkUpdateMeasObject::UpdateSsbMeasObjectFromVarMeasConfig
Line 238: 	 >> FatalError: Invalid Ptr Received!!!
Line 273:    >>Configured MeasObjId(%d) for Intra-F is different from ServingCellMO(%d)
Line 292:    >> Fatal Error : Cannot Create RrmFreqInfoNr Object
Line 303:      ::Added FreqType is %d(0:INTRA,1:INTER,2:SCELL,3:IRAT)
Line 315: 	 >> FatalError: Unknown FreqType Created...
Line 334:      ::Freq(SSbFreq %d, SCS %d) MeasObject:%d for SSB is Created
Line 356: RrmSubBlkUpdateMeasObject::MakeNewMeasObjectFromVarMeasConfig - Fatal Error : Cannot Create MeasObjectNR Object
Line 370:      ::SsbFreqPresent - INTRA MeasObject:%d for SSB is updated
Line 376:      ::SsbFreqPresent - SCELL MeasObject:%d for SSB is updated
Line 382:      ::SsbFreqPresent - INTER MeasObject:%d for SSB is updated
Line 386:      ::SsbFreqPresent - FreqType is invalid(%d), SSB cannot be updated
Line 405: RrmSubBlkUpdateMeasObject::UpdateIntraFreqMeasObjectForSsb
Line 409:    >> FatalError: Invalid pointer received
Line 425: 	   ::SsbFreq:%d is FR2 area
Line 445:    >>UpdateIntraFreqMeasObjectForSsb::ObjectId info - MeasObjectId(%d) Smtc1Present(%d) Smtc2Present(%d) smtc1.PeriodicityAndOffsetChoice(%d) Smtc2.Periodicity(%d)
Line 453: 	>>Error! pServingCellInfo is NULL
Line 507: RrmSubBlkMeasObjectConfigConnNr::UpdateSCellFreqMeasObjectForSsb
Line 511:    >> FatalError: Invalid pointer received
Line 533:      ::SCell SsbFreq:%d is FR2 area set PbchStatus as needed
Line 554:      ::UpdateSCellFreqMeasObjectForSsb::ObjectId info - MeasObjectId(%d) Smtc1Present(%d) Smtc2Present(%d) smtc1.PeriodicityAndOffsetChoice(%d) Smtc2.Periodicity(%d)
Line 581:        #UpdateSCellFreqMeasObjectForSsb - SCellFreq Smtc1 MeasCycle(%d), SrchCycle(%d), MeasRequriement(%d), SrchRequirement(%d)
Line 589:        #UpdateSCellFreqMeasObjectForSsb - SCellFreq Smtc2 MeasCycle1(%d), MeasRequriement1(%d)
Line 610:        #UpdateSCellFreqMeasObjectForSsb - SCellFreq Smtc1 MeasCycle(%d), SrchCycle(%d), MeasRequriement(%d), SrchRequirement(%d)
Line 625:        #UpdateSCellFreqMeasObjectForSsb - SCellFreq Smtc2 MeasCycle1(%d), MeasRequriement1(%d)
Line 655:      ::MeasObjId(%d) of SCell CellId %d at (SsbAbsFreq %d SCS %d) set to %d
Line 664:      ::UpdateInterFreqMeasObjectForSsb
Line 668:    >> FatalError: Invalid pointer received
Line 687: 	    ::Inter-F SsbFreq:%d is FR2 area set PbchStatus as needed
Line 700:        #ObjectId info - MeasObjectId(%d) Smtc1Present(%d) Smtc2Present(%d) smtc1.PeriodicityAndOffsetChoice(%d) Smtc2.Periodicity(%d)
Line 757: 	 >>FreqBandIndicatorNRV1530Present:(bool)%d
Line 763:      ::FreqBandIndicatorNRV1530:%d(BandId:%d)
Line 767:      ::FreqBandIndicatorNRV1530:absent(BandId set to NULL:%d)
