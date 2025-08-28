Line 194: PS_qbit_offset %d is_qbit_offset_exceed %d
Line 244: [PSCal] ghal_cal_banchmark_scale [%d]
Line 274: CAL PARAMETER: qBitsDuration[%d], snap1[%d,%d], snap2[%d,%d]
Line 287: [2G] [38M] CAL Parameters: duration_65QBIT[%d], rem_duration_65QBIT[%d], fclk_rem_duration_65QBIT[%d],  mul[%d]
Line 308: tcxo initcal drift(%d) OffsetPpb(%d) qBit(%d)
Line 327: [PSCal]  slowDiff[%d], mul[%d]
Line 329: [PSCal]  cal->denom[%d], cal->accurateScale[%d], cal->precisionScale[%d], cal->maxScale[%d], cal->maxRem[%d]
Line 331: [PSCal]  cal->maxScalePrime[%d], cal->maxRemPrime[%d]
Line 344: [PSCal] Init Cal Done
Line 345: [Init Cal] slowDiff[%d], mul[%d]
Line 358: RECAL REF from CAL[%d]: reCalRefMaxScale[%d], reCalRefMaxRem[%d], reCalRefDenom[%d]
Line 370: CAL RESULT: dataIsValid[%d], accurateScale[%d], maxScale[%d], maxRem[%d]
Line 388: DlSlReCalStoreReset Cause %d Frame %d
Line 428: [GL1 Error] ScaledRem_TO= %d l1ps_cal32k->reCalRefMaxRem = %d 
Line 431: [PSCal] reCalRefDenom_TO %d ScaledDenomDiff_TO %d ScaledDemon_TO %d reCalRefMaxRem_TO %d ScaledRemDiff_TO %d ScaledRem_TO %d
Line 484: RefFrame %d StoreFrameNum %d ReCalStoreRem %d ScaledRem %d reCalRefMaxRem %d ScaledRemDiff %d
Line 486: [PSCal] reCalRefMaxScale %d reCalRefMaxRem %d reCalRefDenom %d Denon_TO %d Rem_TO %d 
Line 513: [PSCal] Recalibration Done  
Line 558: Error ReCalStore 
Line 564: Need to check Frame!! Cnt %d qBits %d 
Line 576: [Pamir PS] DlSlReCalStoreManage: duration_65QBIT[%d], rem_duration_65QBIT[%d], fclk_rem_duration_65QBIT[%d],  mul[%d]
Line 586: Before reCalBuf->SumreCalStoreFrameNum %d  index %d  delete candidate %d
Line 600: After reCalBuf->SumreCalStoreFrameNum %d  index %d  delete candidate %d
Line 611: [PSCal] StoreMul %d %d SumMul %d slowdiff %d StoreFrameNum %d SumFrameNum %d
Line 613: ReCalFrameCnt %d  l1ps_cal32k->subbuf_needReCalAccumulation %d  reCalBuf->reCalStore_idx  %d  reCalBuf->reCalStoreDone %d
Line 670: [Pamir PS] RE-CAL Parameters: duration_65QBIT[%d], rem_duration_65QBIT[%d], fclk_rem_duration_65QBIT[%d],  mul[%d]
Line 694: [PSCal] Slow Clock ReCal [Accumulation] ReCalFrameCnt %d
Line 696: [PSCal] mul %d fcnt1 %d fcnt2 %d Scnt1 %d Scnt2 %d
Line 699: RECAL ACCUMULATION: qBitsDuration %d ReCalTotCnt %d slowDiff %d mul %d mul2 %d
Line 711: tcxo recal drift(%d) OffsetPpb(%d) MulPrime(%d) Denom(%d)
Line 712: MulPrime(%d) Denom(%d)
Line 727: [PSCal] Slow Clock ReCal [Update] cal->reCalMulPrime(%d) reCalRefDenom (%d)
Line 728: [PSCal] reCalScaleDiff %d =reCalRefMaxScale %d -reCalMaxRem %d
Line 729: [PSCal] reCalRemDiff %d =(reCalScaleDiff %d *reCalDenom %d )+reCalRefMaxRem %d -reCalMaxRem %d
Line 735: [PSCal] Recalibration Fail
Line 749: RECALIBRATION : validCal(%d) reCalRemDiff(%d) reCalMaxDenom(%d) reCalMaxScale(%d) reCalMaxRem(%d)
Line 839: [PSCal]lastSck:%d,currentSck:%d,lastFastCnt%d,RefScale:%d
Line 852: [PSCal] reCalRefMaxRem %d reCalRefDenom %d reCalRefMaxRem_TO %d reCalRefDenom_TO %d
Line 854: [PSCal] sleepTimeEdges %d holdingValue %d CalculatedMaxRem %d CalculatedDenom %d
Line 855: [PSCal] Prev_ReCal : cal->reCalRemDiff %d cal->reCalMaxDenom %d
Line 877: [2G] [TCXO] [38M] Compensation Parameters: holdingValue %d duration_65QBIT %d remFastClk %d total_qbit_num %d
Line 878: [2G] [TCXO] [38M] holdingValue %d
Line 920: dlScShortWait(%d)
Line 926: CALC SLEEPTIME: qBits[%d], dlScShortWait[%d], lastSnap[%d,%d], wakeUpEdge[%d]
Line 968: [2G] [DCXO] [38M] holdingValue[%d] dlScLastFastCnt[%d]
Line 973: [2G] [DCXO] [26M] holdingValue[%d] dlScLastFastCnt[%d]
Line 983: [PSCal] reCalRefMaxRem %d reCalRefDenom %d reCalRefMaxRem_TO %d reCalRefDenom_TO %d
Line 985: [PSCal] sleepTimeEdges %d holdingValue %d CalculatedMaxRem %d CalculatedDenom %d
Line 986: [PSCal] Prev_ReCal : cal->reCalRemDiff %d cal->reCalMaxDenom %d
Line 1008: [2G] [DCXO] [38M] Compensation Parameters: holdingValue %d duration_65QBIT %d remFastClk %d total_qbit_num %d
Line 1050: dlScShortWait(%d)
Line 1056: CALC SLEEPTIME: qBits[%d], dlScShortWait[%d], lastSnap[%d,%d], wakeUpEdge[%d]
Line 1074: [PSCal] DlSlCal_ps_update_refvalue K %d W %d paging_decode_fail %d
Line 1098: cal->reCalRefMaxRem[%d]  cal->reCalRefDenom[%d]  slowDiff[%d]
Line 1100: k[%d] weight[%d] mod_diff_offset[%d]  qbit_offset_diff_2[%d]
Line 1106: [PSCal]reCalRefMaxRem_TO %d reCalRefDenom_TO %d modifyvalue %d PS_qbit_offset %d PS_qbit_offset_prev %d
Line 1165: GSM DSP Init IPC
Line 1188: ############################ GSM DSP init fail,WaitCnt: %d
Line 1193: GSM DSP Init IPC done
Line 1203: GSM DSP Init IPC - passed.
Line 1224: frPelPoolIndex = %d,  frPelNumPending = %d
Line 1246: SNAP: time TCU_SNAP_CODE %d
Line 1325: DlSlHandleWakeupInterrupt  nextFrame = %d,  hasSlept = %d readCtrl 0x%x, HWSorterInitFlag = %d
Line 1359: frPelPoolIndex = %d,  frPelNumPending = %d
Line 1389: SNAP: time TCU_SNAP_CODE %d
Line 1483: WakeupScheduleHwSorter  nextFrame = %d,  hasSlept = %d readCtrl 0x%x, HWSorterInitFlag = %d
Line 799: [PSCal] decode fail %d TO threshold exceed %d
