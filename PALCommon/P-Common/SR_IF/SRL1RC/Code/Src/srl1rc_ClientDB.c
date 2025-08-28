Line 69:  Assert case is occurred %d : file : %s, line : %d
Line 142:  SRL1RC_Dbg %s: Waiting ClientId [%u]
Line 147:  SRL1RC_Dbg %s: Waiting ClientId [%u]
Line 178:  SRL1RC_Dbg %s: Active CID(%u)
Line 206: %s: Meas Paused client Id %d 
Line 236: %s: Paused client Id %d 
Line 258: %s: Auto Paused client Id %d 
Line 291:  SRL1RC_Dbg %s: OtherClientId [%u]
Line 297:  SRL1RC_Dbg %s: OtherClientId [%u]
Line 321:  SRL1RC_Dbg %s: Registered Clientid [%u]
Line 343: %s: [Not Required] , invalid Client Count(%d)
Line 354: %s: [Required] , BPLMNDereg(%d)
Line 363: %s: [Required] , BPLMNDereg(%d)
Line 368: %s: [Not Required]
Line 511:  SRL1RC_Dbg %s:
Line 549:  SRL1RC_Dbg %s:
Line 641: %s: Number of other client in Array [%d]
Line 660: %s: this pointer is NULL
Line 670: %s: No Of other Clients %d
Line 691: %s: this pointer is NULL
Line 704: %s: No of paused clients %d
Line 719: %s: this pointer is NULL
Line 727:  %s: - NULL timeKeeper object
Line 759: %s: Resume client[%u], PauseDuration[%u]
Line 776: =====================Client DB Starts=====================
Line 790: CID[%u], State[%u], RAT[%u], ReqReasn[%u], Drxlen[%u]
Line 792: CID[%u], isConnected[%u], dutyCycle[%u], pSProtectionTime[%u]
Line 796: =====================Client DB Ends  =====================
Line 822: %s: this pointer is NULL
Line 828:  SRL1RC_Dbg %s: less or more than 2 clients registered with SRL1RC [result %d]
Line 856:  SRL1RC_Dbg %s: [result %d][agcDiff %d]
Line 867:  SRL1RC_Dbg %s: [result %d]
Line 873:  SRL1RC_Dbg %s: less or more than 2 clients registered with SRL1RC [result %d]
Line 896:  SRL1RC_Dbg %s: [clientId %d:%d][isBandCombination %d:%d]
Line 903:  SRL1RC_Dbg %s: [result %d]
Line 919:  SRL1RC_Dbg %s: [result %d]
Line 977:  SRL1RC_Dbg %s: DRDS is Disabled [result %d]
Line 983:  SRL1RC_Dbg %s: [result %d]
Line 989:  SRL1RC_Dbg %s: less or more than 2 clients registered with SRL1RC [result %d]
Line 1019:  SRL1RC_Dbg %s: [TempResult %d]
Line 1022:  SRL1RC_Dbg %s: [clientId %d:%d] [isDRImpossible %d:%d] [isRatModeCombinationAllowed %d:%d]
Line 1023:  SRL1RC_Dbg %s: [isBandCombinationAllowed %d:%d] [isChannelCombinationAllowed %d:%d]
Line 1025:  SRL1RC_Dbg %s: [isDRImpossible %d] [isRatModeCombinationAllowed %d] [isBandCombinationAllowed %d] [isChannelCombinationAllowed %d] [isAgcDiffValidForDRMode %d]
Line 1036:  SRL1RC_Dbg %s: [result %d]
Line 1174:  SRL1RC_Dbg %s: OtherClientId [%u]
Line 1181:  SRL1RC_Dbg %s: OtherClientId [%u]
Line 1222:  SRL1RC_Dbg %s: [Is Con-Con : %d]
Line 1249: %s: Input parameter(this) is NULL
Line 1257: %s: updateSADRDBClientObj is NULL
Line 1265: %s: input txNum is not valid one - txNum(%d)
Line 1272: %s: LTE update UL CA in con-con state --> move DSDS
Line 1279: %s: NR update DB in con-con and UL CA case(LTE using 2TX) --> move DSDS
Line 1293: %s targetTxPath is invalid - source(%d) / target(%x)
Line 1324: %s: NULL ptr detected
Line 1331: %s: Saved Lte band info is not valid
Line 1355: %s: Saved LTE source[%d] band(%d)
Line 1365: %s: idx(%d) Skip FR2 band(%d) in target
Line 1374: %s:SA only target[%d] band(%d)
Line 1386: %s:Return from RF(%d) / result[%d]
Line 1392: %s: NR CA configured, Set DR not available / result[%d]
Line 1414:  SRL1RC_Dbg %s: Null ptr detected [result %d]
Line 1420:  SRL1RC_Dbg %s: SA DRDS is disabled [result %d]
Line 1426:  SRL1RC_Dbg %s: more than 2 clients registered with SRL1RC [result %d]
Line 1431:  SRL1RC_Dbg %s: less than 1 clients registered with SRL1RC [result %d]
Line 1459:  SRL1RC_Dbg %s: only NR is registered / Sub SIM already assigned / SADR is available / [result %d]
Line 1465:  SRL1RC_Dbg %s: only NR is registered / forced sub SIM is set / SADR  state [result %d]
Line 1470:  SRL1RC_Dbg %s: only 1 clients registered which is not NR or Main SIM, break DR[result %d]
Line 1474:  SRL1RC_Dbg %s: Client number is '1' but no registered client[result %d]
Line 1540: %s: skip_checking = %d, DR [result %d]
Line 1550: %s : DR broken but Measure is still busy do not update the SADR state : [result %d] / Meas client ID[%d]
Line 1555: %s : DB updated in DSDS condition but LTE IRAT/inter band measurement going on do not update SADR state : [result %d]
Line 1564: %s : Do not update SA-LTE DRDB because pause client updated DB: updateSADRDBClientId(%d) / rmState(%d)
Line 1570: %s : Do not update SA-LTE DRDB because Meas pause client updated DB: updateSADRDBClientId(%d) / rmState(%d)
Line 1579: %s: DR [result %d]
Line 1610: %s: Null ptr detected
Line 1614: %s: RAT_1 [%u] RAT_2 [%u]
Line 1642: %s: Client1 LTE source[%d] band(%d)
Line 1653: %s: Client2 LTE source[%d] band(%d)
Line 1664: %s: Client1 SA FR2 detected band(%d)
Line 1673: %s: Client1 SA target[%d] band(%d)
Line 1683: %s: Client2 SA FR2 detected band(%d)
Line 1692: %s: Client2 SA target[%d] band(%d)
Line 1704: %s: CA type Measure RAT[%d] band(%d)
Line 1723: %s: Error - invalid info Measure RAT(%d) band(%d)
Line 1793: %s: FAIL - Invalid updateSADRDBClientId(%d)
Line 1800: %s: FAIL  targetClient is unregistered
Line 1811:  SRL1RC_Dbg %s: OtherClientObj RAT [%u] updateSADRDBClientObj RAT [%u], TxNum(%d)
Line 1843:  SRL1RC_Dbg %s [result %d] isSADRImpossible1 [%d] isSADRImpossible2 [%d]
Line 1855:  SRL1RC_Dbg %s [result %d] RAT_1 [%u] RAT_2 [%u]
Line 1869:  SRL1RC_Dbg %s: LTE did not get RF grant yet - keep DSDS rat1[%d][%d] rat2[%d][%d]
Line 1893:  SRL1RC_Dbg %s: Source RAT(%d)/ 4Rx of Source RAT(%d)
Line 1901:  SRL1RC_Dbg %s: Target RAT(%d) / 4Rx of Target RAT(%d) / target Band(%d)
Line 1951: %s : NRDC is detected(%d), Break DR
Line 1963:  SRL1RC_Dbg %s : SAchannelConfigured1(%d) / SAchannelConfigured2(%d)
Line 1971:  SRL1RC_Dbg %s : ENDCActivated1(%d) / ENDCActivated2(%d)
Line 1997: %s: LTE is not detected, RAT combination error
Line 2000:  SRL1RC_Dbg %s : LTE Client SADR possible(%d) / MRA DR possible (%d)
Line 2025: %s: con-con & LTE UL CA is set --> move DSDS
Line 2039:  SRL1RC_Dbg %s: [clientId %d:%d] [isSARatModeCombinationAllowed %d:%d] [isENDCActivated %d:%d]
Line 2041:  SRL1RC_Dbg %s: [isRatModeCombinationAllowed %d] [isBandCombinationAllowed %d] [isChannelCombinationAllowed %d] 
Line 2051:  SRL1RC_Dbg %s: [result %d]
Line 2102: %s: clientDBObj object is NULL
Line 2109: %s: SA LTE NSA DRDS MODE registry Value : [%x] 
Line 2113: %s:, SA-LTE Bitmask check value : %x, isSADrdsEnable[%d]
Line 2126: %s: 5G-5G dual SIM is not supported[%x]
Line 2128: %s:, SA-SA Bitmask check value : %x, isSASADREnable[%d]
Line 2163:  SRL1RC_Dbg %s: OtherClientId [%u]
Line 2170:  SRL1RC_Dbg %s: OtherClientId [%u]
Line 2447: %s: this object is NULL
Line 2456: %s: RAT(%d) is registered on otherClient(%d)
Line 2460: %s: RAT(%d) is not registered on otherClient
Line 2491: %s: [PSPS]Auto Paused client Id In PSPS %d 
Line 2510: %s:[PSPS] this object is NULL
Line 2532: %s:No of PS client => %d
Line 2538: %s:[PSPS] Not allowed RAT combination for PS-PS
Line 2543: %s:[PSPS] retVal[%d]
Line 2667: %s:[PSPS] this object is NULL
Line 2685: %s:[PSPS] otherPsClientId[%d]
Line 2703: %s: ClientDB object is NULL
Line 2716:  %s : Clear Saved LTE band info
Line 2742: %s:[PSPS] ClientId[%d]
Line 2769: %s:[DebugARFC] SetARFCActiveStatus[%d], ClientId[%d]
