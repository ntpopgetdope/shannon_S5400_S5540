Line 45:  Assert case is occurred %d : file : %s, line : %d
Line 77:  SRL1RC_Dbg %s:
Line 182: Logging Invalid Message Type
Line 198:  %s: Changed State: OldState - %s, NewState - %s
Line 214:  %s: Changed State: OldState - %d, NewState - %d
Line 232:  %s: - clientDB object is NULL
Line 240:  SRL1RC_Dbg %s: Measure state(%d) MeasureClientId [%d]
Line 246:  SRL1RC_Dbg %s: Measure state(%d) No such Measure ClientId [%d]
Line 271:  %s: Invalid State(%s) event(%s) combination
Line 303: *****%s: idx[%d] Invalid Event (%s) received in state (%s) from ClientId (%d), RAT(%d)*****
Line 311:  %s: - NULL timeKeeper object
Line 318: *****: srl1rc_MeasProcess:  idx[%d] EXECUTING STATE(%s) EVENT(%s) ClientId (%d) RAT(%d) currentTime (%u)*****
Line 354:  %s: - NULL pointer detected
Line 365:  %s
Line 393:  %s: - NULL pointer detected
Line 408:  %s: - request client is NULL / measureType %d
Line 416:  %s: - only NR(Sub) + N2L IRAT measure / measureType %x
Line 422:  %s: - only SA or LTE(SCG) is registered measureType %x
Line 427:  %s: - only non-SA,LTE(SCG) client registered measureType %x
Line 438:  %s: - request or peer client object is NULL / measureType %x
Line 459:  %s: - Measure from NR / SADR transition going on (peer stack not active or measure paused)/ measureType %d
Line 465:  %s: - Measure from NR / SADR transition going on / measureType %d / client state(%d), peer state(%d)
Line 472:  %s: - Measure from LTE / SADR transition going on / measureType %d
Line 478:  %s: - Unexpected Measure request RAT %d
Line 484:  %s: - measurement using by other RAT 
Line 489:  %s: - SADR is not available measureType! %x
Line 498:  %s: - N2L measure / measureType %x
Line 507:  %s: - L2N measure / measureType %x
Line 513:  %s: - Measure RAT is not LTE or NR measureType %x / measure RAT(%d)
Line 518:  %s: Set measurement type to GAP forcefully : %d
Line 534:  %s: - Unexpected Source RAT %d
Line 549:  %s: - Unexpected Measure RAT %d
Line 553:  %s: - Request Rat(%d), Measure RAT(%d), Measure band(%d) 
Line 558:  %s: - measure band is NR FR2 band, handle this as CA type
Line 567:  %s: - Get_CA_Support result from RF %d 
Line 588:  %s: - CA type measure? (%d) 
Line 595:  %s: - number of clients (%d) is/are not matched with SA-LTE DR return %x
Line 617:  %s: - Measure Rat(%d), Measure band(%d)
Line 625:  %s: - NULL pointer detected
Line 678:  %s: - unexpected measure type(%d)
Line 682:  %s: - return measure type(%d)
Line 721:  %s: - NULL ptr detected
Line 732:  %s: - otherSADRClientObj object is NULL
Line 748:  %s: measType is non CA (%d)
Line 757:  %s: - Other SADR client is having paging nearBy (reject&retry) / MeasureEndTime(%u), next event time(%u)
Line 780:  %s: - Measure Grant / measureType %d 
Line 787:  %s: reject&retry because request is coming from RAT(%d) within %d ms from release
Line 795:  %s: - Other SADR client is active with higher reason or paging(reject&retry)!! / peer stack RF cause(%d)
Line 819:  %s: - Peer stack is already paused / Measure Grant / measureType %d 
Line 827:  %s: - Meas Pause sent to Rat(%d)
Line 849: %s: Meas pausedone Timer set Failed.
Line 855: %s: Meas pauseDoneTimer Set. Expiry Time(%u), CurrentTime(%u)
Line 857:  %s: - Measure Wait (%d) Rat(%d)
Line 1035:  %s: - NULL pinter detected
Line 1045:  %s: ClientId(%d) - Measure Rat(%d), Measure band(%d), minMeasResourceUseTime(%u), GapFromNw(%d)
Line 1080:  %s: - Measure Grant / measureType %d 
Line 1089:  %s: - Measure Reject / SADR transition going on / measureType %d
Line 1103:  %s: - Measure Grant / SADR transition going on (only NR, NR grant case) / measureType %d 
Line 1112:  %s: - Measure Reject and retry/ measurement using by other RAT 
Line 1138:  %s: - Measure Reject / Error case
Line 1150:  %s: - Measure Grant / NR(Sub) only + N2L measure case / measureType %x 
Line 1157:  %s: - number of clients (%d) is/are not matched with SA-LTE DR return %x
Line 1168:  %s: - Measure Reject / non-NR client only registered measureType %x
Line 1181:  %s: - Measure Grant / NR only registered case / measureType %x 
Line 1194:  %s: - Measure Grant / SADR is not available and LTE requested!! measureType %d
Line 1199:  %s: - Measure Grant / SADR is not available measureType %d
Line 1207:  %s: - Measure Reject / Unexpected measure type detected %d
Line 1220:  %s: - saved measureType(%d), measure RAT(%d), band(%d) 
Line 1261:  %s: - NULL pointer detected
Line 1283:  %s: ClientId(%d)
Line 1285:  %s: - Measure Rat(%d), Measure band(%d), minMeasResourceUseTime(%u)
Line 1289:  %s: - Measure Grant / Measure Active client requesting again for Measure / measureType(%d)
Line 1296:  %s: reject&retry because request is coming from RAT(%d) within %d ms from release
Line 1302:  %s: - Measure Reject / Measure is being used by peer stack
Line 1347:  %s: - NULL pointer detected
Line 1365:  %s: - SADR DB update was pended
Line 1378:  %s: - Skip Measure release will be handled when RF release DR(%d) RFnMeasRel(%d) SkipMeasResume(%d)
Line 1392:  %s: - Resume sent to client Id!(%d)
Line 1405:  %s: - Rel came from Measure paused client
Line 1413:  %s: Meas pausedoneTimer Stopped
Line 1450:  %s: - Null pointer detected
Line 1464:  %s: - Measure pausing client request Measure / Measure Reject&Retry
Line 1470:  %s: - client request Measure again while Measure pause / Measure Reject
Line 1508:  %s: - NULL pointer detected
Line 1516:  %s: Pause Done Came from Rat(%d)
Line 1522:  %s: - waitingSADRClientObj pointer is NULL
Line 1527:  %s: - Measure PauseDone in SADR not available state
Line 1537:  %s: - Measure Grant / Meas Reponse sent to Rat(%d) / measureType(%d)
Line 1546:  %s: Meas pausedoneTimer Stopped
Line 1551: %s: Meas paused Timer set Failed.
Line 1557: %s: Meas pausedTimer Set. Expiry Time(%u), CurrentTime(%u)
Line 1597:  %s: - NULL pointer detected
Line 1605:  %s: - relClientObj is NULL
Line 1608:  %s: Release Came from client RAT(%d)
Line 1615:  %s: Release came from waiting client moved to awaiting pausedone
Line 1624:  %s: - waitingClientObj is NULL
Line 1628:  %s: - Measure release in SADR not available state
Line 1638:  %s: - Measure Grant / Meas Reponse sent to clientId / measureType(%d)
Line 1649:  %s: Meas pausedoneTimer Stopped
Line 1688:  %s: - NULL pointer detected
Line 1706:  %s: Cross over detected - measure paused client is under RF pause / skip measure resume
Line 1715:  %s: - Resume sent to client Id(%d)
Line 1726:  %s: Meas pausedoneTimer Stopped
Line 1757:  %s: - NULL pointer detected
Line 1764:  %s: - Measure Reject / Meas Request came in unexpected state
Line 1800:  %s: - NULL pointer detected
Line 1806:  %s: - Measure release came from clientId(%d)
Line 1818:  %s: - Unexpected Measure release
Line 1826:  %s: Meas pausedoneTimer Stopped
Line 1854:  %s: - NULL pointer detected
Line 1864: %s: Meas PausedTimer Expired at currentTime = %u
Line 1865: %s: Meas Active stack Id = %u
Line 1892:  %s: - NULL pointer detected
Line 1902: %s: Meas PauseDoneTimer Expired at currentTime = %u
Line 1903: %s: Meas Pausing stack Id = %u
Line 1917:  %s: SRL1RC Meas Manager Initialization
Line 1927:  %s: SRL1RC Meas Manager Initialization
