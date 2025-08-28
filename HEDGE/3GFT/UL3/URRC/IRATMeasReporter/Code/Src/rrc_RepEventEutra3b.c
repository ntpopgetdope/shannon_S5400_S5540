Line 272: [rrc_RepEventEutra3b_NotifyReport] Triggered
Line 277: [rrc_RepEventEutra3b_NotifyReport] MeasInstId is NULL returned.
Line 283: rrc_RepEventEutra3b::NotifyReport No Cell Reported in RepEventEutra3b_p Instance So RESET all Stored data.and Return
Line 300: [rrc_RepEventEutra3b_NotifyReport] ERROR - EutraMeasurementQuantity is NULL - returning
Line 311: [rrc_RepEventEutra3b_NotifyReport] No Event3C triggered so Event3B process will be skipped
Line 317: rrc_RepEventEutra3b::NotifyReport  - Event 3c is Not configured along with 3b..
Line 326: [Measurement Quantity] is = RSRP
Line 327: [ThresholdOtherSystem*100] is = %d dBm
Line 334: [Measurement Quantity] is = RSRQ
Line 335: [ThresholdOtherSystem*100] is = %d dB
Line 338: [H_3b] is = %d
Line 350: [NotifyReport] EutraMeasInd Earfcn(%d), CellId(%d), RSRP(%d), RSRQ(%d)
Line 672: [rrc_RepEventEutra3b_TimeToTriggerExpired] Triggering the Measurement Report Event 3B
Line 674: [TTT CellResults] For Earfcn = %d
Line 676: [TTT CellResults] For Cell = %d
Line 678: [TTT CellResults] Updated rsrp = %d
Line 680: [TTT CellResults] Updated rsrq = %d
Line 402: [rrc_RepEventEutra3b_NotifyReport] Event3C already triggered on CellId(%d) Earfcn(%d) so Event3B might be evaluated.
Line 411: rrc_RepEventEutra3b::NotifyReport	[NON FATAL ERROR] - NumTriggered > (Asn_maxNumEUTRAFreqs * MaxEutraCellsMeas).
Line 428: [rrc_RepEventEutra3b_NotifyReport] Event3C NOT triggered on CellId(%d) Earfcn(%d) so Event3B won't be evaluated.
Line 440: [rrc_RepEventEutra3b_NotifyReport] Eq1 satisfied [Earfcn: %d CellID: %d] [rsrp] LHS*100(%d) <= RHS*100(%d)
Line 451: [rrc_RepEventEutra3b_NotifyReport] Eq1 satisfied [Earfcn: %d CellID: %d] [rsrq] LHS*100(%d) <= RHS*100(%d)
Line 471: [TTT(%dms) Started] Earfcn(%d), CellId(%d)
Line 478: [rrc_RepEventEutra3bNotifyReport] No of TTT exceeding 32. Needs extension
Line 494: rrc_RepEventEutra3b::NotifyReport Dont Trigger Event 3b for the  Earfcn(%d) Cell (%d) is not already triggerd for 3c.
Line 500: [rrc_RepEventEutra3b_NotifyReport] Cell ID: %d Earfcn %d already present in TRIGGERED 3B EVENT
Line 506: [rrc_RepEventEutra3b_NotifyReport] Dont Trigger Event 3b for the Cell ID: %d Earfcn %d is Barred.
Line 534: [rrc_RepEventEutra3b_NotifyReport] Eq2 satisfied [Earfcn: %d CellID: %d] [rsrp] LHS*100(%d) > RHS*100(%d)
Line 551: [rrc_RepEventEutra3b_NotifyReport] Eq2 satisfied [Earfcn: %d CellID: %d] [rsrq] LHS*100(%d) > RHS*100(%d)
Line 166: [rrc_Class_RepEventEutra3b_SendMeasReport] MeasInstId is NULL returned.
Line 171: [rrc_Class_RepEventEutra3b_SendMeasReport] ERROR - EutraMeasurementQuantity is NULL - returning
Line 201: [FreqResults] For Earfcn = %d
Line 209: [CellResults] For Cell = %d
Line 210: [CellResults] Updated rsrp = %d
Line 211: [CellResults] Updated rsrq = %d
Line 220: [CellResults] For Earfcn = %d
Line 221: [CellResults] For Cell = %d
Line 222: [CellResults] Updated rsrp = %d
Line 223: [CellResults] Updated rsrq = %d
Line 762: [rrc_priv_RepEventEutra3b_getEvent3cRepInst] Event3C RepClientInst is 0x%X
