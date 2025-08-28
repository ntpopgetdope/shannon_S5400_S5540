Line 190: Init begin
Line 209: Init end
Line 221: Re-mapping init begin init will be called
Line 233: Re-mapping init end
Line 242: Shut down
Line 253: Reset
Line 267: TxInterruptT4a %d, TxInterrupt4a %d, TxInterruptT4b %d, TxInterrupt4b %d
Line 271: RACH can be interrupted
Line 277: RACH cannot be interrupted
Line 299: Retrieve MeasId %i details from DB (TransactId %i)
Line 306: Removing meas
Line 311: Adding new or modifying existing meas
Line 344: All TrChs in meas object
Line 350: Looking for DCHs mapped
Line 361: Looking if RACH mapped
Line 374: Selected TrChs in meas object
Line 1027: Do (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) measurements
Line 1036: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) meas
Line 1040: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Inc PendingTimeT4a %i
Line 1043: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Inc PendingTimeT4b %i
Line 1051: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Inc TxInterruptT4a %i %i
Line 1057: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Inc TxInterruptT4b %i %i
Line 1086: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) TotalBO %i
Line 417: Includes event trigger and applies to specific TrCh
Line 425: Includes event trigger and applies to all TrCh
Line 433: No transport channels listed!
Line 439: Doesn't include event trigger and thus applies to all TrCh
Line 465: Adding meas for DCH (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) %d
Line 530: WARNING: TrChMeasInfoTail->Next is NULL
Line 550: WARNING: TrChMeasInfoTail or TrChMeasInfoHead is NULL
Line 631: Copying MeasParams, Mode %i, ReportingInt %i
Line 684: UpperThreshold set %i
Line 692: LowerThreshold set %i
Line 699: TimeToTrigger4a set %i
Line 712: PendingTime4a set %i, PendingTimeT4a set %i
Line 722: TxInterrupt4a set %i
Line 729: TimeToTrigger4b set %i
Line 742: PendingTime4b set %i, PendingTimeT4b set %i
Line 752: TxInterrupt4b set %i
Line 772: Setting up for E-DCH TVM (NO 0 YES 1: %i) MeasId %i
Line 792: WARNING: Receive RemoveRB(RbId %d) and MeasurementConfig at the same time
Line 808: RB %i LC %i mapped to TrCh (non-TM): Finally storing in RbMeas structure E-DCH TVM: (NO 0 YES 1: %i)
Line 824: MeasId %i, Rb %i, LC %i
Line 825: RlcBuffPlMeas %i, AveOfRlcBuffPlMeas %i, AveTimeInt %i, VarOfRlcBuffPlMeas %i
Line 848: RB %i LC %i mapped to TrCh (non-TM) but no action
Line 911: WARNING: RbMeasDataTail->Next is NULL
Line 929: WARNING: RbMeasDataTail is NULL
Line 483: Reset Meas list
Line 865: Reset RbMeas list
Line 1142: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Timer check for periodical tests: ReportingIntCtr: %d ReportingInt / (gMinTtiIndex * 10): %d
Line 1150: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Do periodical test
Line 1159: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Suppressing periodical test
Line 1169: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Do trigger test
Line 1203: (Periodical 0 or Triggered 1:%d)Test MeasInd, MeasId %i (-1!), UlTrChType %i, UlTrChId %i
Line 1358: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Trigger test
Line 1414: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) %x Test, Bo %i, Thresh %i, Trigger %i, PendingTime %i, TimeToTrigger %i
Line 1416: ..., ThresValid %i, PendingTimeT %i TimeToTriggerT %i
Line 1458: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Trigger %x BuffPl Report %i, RB %i
Line 1467: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Trigger %x AveOfBuffPl Report %i, RB %i
Line 1476: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Trigger %x VarOfBuffPl Report %i, RB %i
Line 1491: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Report %x!
Line 1496: Sending 4a report to U-RRC
Line 1501: Sending 4b report to U-RRC
Line 1535: umac_tv_meas_SendOutReport: Null pointer, PrimHandle
Line 1265: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) Periodical test
Line 1307: (RACH 0 DCH 1 E-DCH 2 USCH 3:%d) MeasId %i, RbId %i, BuffPlPres %i, BuffPl %i, AveBuffPlPres %i, AveBuffPl %i,
Line 1309: ...  VarBuffPlPres %i, VarBuffPl %i
Line 1318: Sending periodical report to U-RRC
Line 1650: (%i) RB %i, LC ?, U-RLC BO = %i
Line 1693: (%i) RB %i, LC ?, U-RLC BO = %i
Line 1712: RB %i, LC %i, Calc AveOfRlcBuffPl %i
Line 1745: RB %i, LC %i, Calc VarOfRlcBuffPl %i
