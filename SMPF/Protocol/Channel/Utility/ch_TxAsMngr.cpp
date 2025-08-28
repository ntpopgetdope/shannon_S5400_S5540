Line 132: %s is already full.
Line 156: ###[NR_TX][RF] GetAsProc: Invalid DomainType(%d)
Line 228: %s is already full.
Line 229: %s is already full.
Line 243: %s is already full.
Line 244: %s is already full.
Line 245: %s is already full.
Line 284: %s is already nullptr.
Line 285: %s is already nullptr.
Line 291: %s is already nullptr.
Line 292: %s is already nullptr.
Line 293: %s is already nullptr.
Line 316: ###[AS] IsUlMimoTxAs:: IsUlMimoTxAs band_idx Error: rf_band(%d) band_idx(%d) max_ul_layer(%d)
Line 326: ###[AS] IsUlMimoTxAs::  rf_band(%d) band_idx(%d) max_ul_layer(%d)
Line 347: ###[AS] IsUlCaTxAs:: RegUlCaSupport(%d), UlCaActive(%d)
Line 372: ###[AS] Tx AS: AsBitmap(0x%x) RfBand(%d) TxPwrdBm/RegTxThresh(%d/%d)
Line 381: ###[AS] SelectTxAnt: Current CurAsEvent(%d: %s, %s), Rsrp(%d/%d/%d/%d)
Line 382: ###[AS] SelectTxAnt: Current CurAsEvent(%d) - %s, Rsrp(%d/%d/%d/%d)
Line 396: ###[AS] SelectTxAnt: Current Search - TxPathIdx(%d), BestAntIdx(%d) AsValidBitMap(0x%x) TxPwrdBm(%d)
Line 407: ###[AS] SelectTxAnt: Update Best antenna: (TxPathIdx:%d, BestAnt:%s), Rsrp[%d] >= Rsrp[%d]+RxThresh,(%d >= %d + %d)
Line 408: ###[AS] SelectTxAnt: Update Best antenna: Rsrp[%d] >= Rsrp[%d]+RxThresh,(%d >= %d + %d)
Line 419: ###[AS] SelectTxAnt: Update Best antenna: Rsrp[%d] >= Rsrp[%d]+(RxThresh[%d]-RxThresh[%d]),(%d >= %d + %d)
Line 434: ###[AS] unavaiable Tx AS: invalid AS combination index, PathMaxIdx(Main/Sub)(%d/%d) CombIdx(0x%x)
Line 441: ###[AS] Select Antenna. Prev(%d), New(%d), NumTxPath(%d) BestAnt:Main/Sub(2/2)(%04d) AsMode/domain_type(2/2)(%04d) RfBand(%d)
Line 467: ###[AS] IsAsSupportBand:: Tx AS BandIdx Error: rf_band(%d), band_idx(%d)
Line 473: ###[AS] IsAsSupportBand:: Tx AS is not support this Band: RegBandEnable(%d), band_idx(%d)
Line 488: ###[AS] IsAsSupportBand:: Disable Tx AS due to ENDC restrict LteBand(%d), NrBand(%d)
Line 533: ###[AS][MEAS] ReorderMeasResult:: CurAsEvent(%d), TxAS(0x%02X, UlMimo1/UlCa1), demod_cc(0x%04X, ulca.scell2/meas2), Order idx(%d/%d/%d/%d)
Line 570: ###[AS] SetCurAsEvent(%d):: CurAsEvent(%d), IsUlMimoTxAs(%d), {IsUlCaTxAs(%d): pcell(%d), scell(%d)}, isMtm(%d)
Line 604: ###[AS] SetPairTargetSwitchTxAnt:: ant_path(%d, 0:PCC, 1:SCC), {pcell(%d), scell(%d)}, TargetSwitchTxAnt(%d)
Line 628: ###[AS] SetPairCurTxAnt:: ant_idx(%d),  ant_path(%d, 0:PCC, 1:SCC), {pcell(%d), scell(%d)}, CurAsEvent(%d -> %d)
Line 645: ###[AS] GetPairCurTxAnt:: CurAsEvent(%d) {PCellTxAnt(%d), SCellTxAnt(%d)}
Line 713: ###[AS] SetRegTestMode:: RegTestMode(%d)
Line 828: ###[AS] CheckAntSwitchEnable: AsEnable(%d) RegTestMode(%d - 0:Adaptive 1:AS0 2:AS1 ...) CurAsEvent/TargetSwitchTxAnt(%d/%d)
Line 854: ###[AS] ProcAntSwitch:: ModemState(%d), rf_paty(0x%x)
Line 871: ###[AS] ProcAntSwitch:: SsbIndex(%d/%d/%d/%d), CurTxAnt(%d)
Line 884: ###[AS] ProcAntSwitch:: Scell RSRP(%d/%d/%d/%d)
Line 920: ###[AS] Select Antenna. AsEvent{Prev(%d), New(%d)}, TargetSwitchTxAnt(%d), RfBand(%d)
Line 931: ###[AS][FixedAnt][SCell] Select Antenna. Prev{pcell(%d), scell(%d)}, Target Ant{pcell(%d), scell(%d)}, IsUlCaTxAs(%d), IsUlMimoTxAs(%d)
Line 950: ###[AS] StopAsMode
Line 960: ###[AS] StopAsMode: CurAsEvent(%d), rf_path(%d), domain_type(%d)
Line 999: ###[AS] Can't found AsMode(%d)
Line 1003: ###[AS][DomainType:%d] RunAsMode : Request Mode(%d: %s)
Line 1056: ###[AS] SendL1AsDmInfo AsStatus(%d) SelectedAnt(%d) domain_type(%d)
Line 1133: ###[AS] GetCurrMainTxAntIdx: CurAsEvent(%d), MainAntIdx(%d)
Line 1164: ###[AS] GetTxAntForPathLossUpdate: CurAsEvent(%d), MainAntIdx(%d), demod_cc(%d)
Line 1184: ###[AS] GetTxSwitchType: rf_band(%d), band_idx(%d), RegBandEnable(%d, 0:DISABLE/1:AS/2:PS)
Line 1274: ###[AS] UpdatePathLoss::AntennaSwitch CurTxAnt(%d), SsbIndex(%d), ValidRsrp(%d)
Line 1314: ###[AS] ConvertRxMode: CurAsEvent(%d), CurrMainTxAntIdx(%d), rx_mode(0x%x -> 0x%x)
Line 1334: ###[AS] InitTxAntSwitchVars
Line 1370: ###[AS] RecordAsInfoUpdateHistory : arrayIndex(%d) txAsEvent(%d) eventTime(%d) eventCounter(%d)
Line 1389: ###[AS] SetResolveConflictRequired:: is_required(%d), target_state(%d)}
Line 1405: ###[AS] GetResolveConflictRequired:: is_required(%d), target_state(%d)}
