Line 54: RrmRelaxedCdrx()
Line 60: ~RrmRelaxedCdrx()
Line 65: RrmRelaxedCdrx::Initialize
Line 71: RrmRelaxedCdrx::InitMsgGrId(MsgGrpId:%d)
Line 97:    >>GetRelaxedMeasCfg - ModemStatus:(enum)%d, LmSsearchDeltaP:%d[/100dBm], LmTsearchDeltaP:%d[ms]
Line 121: RrmRelaxedCdrx::UpdateRelaxedCdrx - StationaryModeNvEnable:(bool)%d, LowMobilityOn:(bool)%d, 
Line 142:      ::pServingCellInfo is invalid.
Line 150:      ::PCellMeasResult is invalid.
Line 164:      ::Update ServCellIdForSSearch as ServingCell:%d m_RelaxedCdrxInfo.SrsrpRef set as Pcell_Rsrp:%d
Line 180:      ::Update SrsrpRef prev:%d new:%d [(Pcell_Rsrp - SrsrpRef) bigger than 0]
Line 185:    >>SrsrpRef:%d[/100dBm], Pcell_Rsrp:%d[/100dBm], LowMobilitySsearchDeltaP:%d[/100dBm], LowMobilityTsearchDeltaP:%d[ms], curTimeInMs:%d[ms], IsLastLowMobilityfulfilled:(bool)%d
Line 190:      ::Staying LowMobility
Line 199:    >>Criterion for low mobility is satisfied.
Line 215:      ::Entering LowMobility
Line 221:      ::Update SrsrpRef prev:%d new:%d 
Line 228:    >>Criterion for low mobility is not satisfied.
Line 244:      ::LowMobilityCondition:(bool)%d, IsLastLowMobilityfulfilled:(bool)%d, TSearchDeltaPDiff:%d[ms], timeStampForTsearchDeltaP:%d[ms]
Line 255:      ::pServingCellInfo is invalid.
Line 264: RrmRelaxedCdrx::CheckLowMobilityLeavingCondition
Line 278:    >>Leaving LowMobility - Init RrmRelaxedCdrx
