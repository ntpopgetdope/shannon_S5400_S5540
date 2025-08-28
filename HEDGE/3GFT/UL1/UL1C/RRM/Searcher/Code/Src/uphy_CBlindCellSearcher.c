Line 127: BPLMN Blind Cell Search!!!
Line 127: BPLMN Blind Cell Search!!!
Line 134: Normal Blind Cell Search!!!
Line 134: Normal Blind Cell Search!!!
Line 420:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: %x 
Line 420:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: %x 
Line 423:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: EUphySearcherMsgId_BlindCellSearch
Line 423:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: EUphySearcherMsgId_BlindCellSearch
Line 447:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: next uarfcn: %d
Line 447:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: next uarfcn: %d
Line 452:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: maxUarfcnIndex: %d
Line 452:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: maxUarfcnIndex: %d
Line 453:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: uarfcnIndex: %d
Line 453:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: uarfcnIndex: %d
Line 454:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: blindCellSearcher_ptr->uarfcnToProcess: %d
Line 454:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: blindCellSearcher_ptr->uarfcnToProcess: %d
Line 468:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: sent RSSI request for uarfcn: %d
Line 468:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: sent RSSI request for uarfcn: %d
Line 475:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: EUphySearcherMsgId_BlindFreqScan
Line 475:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: EUphySearcherMsgId_BlindFreqScan
Line 500:   blindFreqResultArray[uarfcnIndex].rssi: %d
Line 500:   blindFreqResultArray[uarfcnIndex].rssi: %d
Line 506:   EUphySearcherMsgId_BlindFreqScan: maxUarfcnIndex: %d
Line 506:   EUphySearcherMsgId_BlindFreqScan: maxUarfcnIndex: %d
Line 507:   EUphySearcherMsgId_BlindFreqScan: uarfcnIndex: %d
Line 507:   EUphySearcherMsgId_BlindFreqScan: uarfcnIndex: %d
Line 508:   EUphySearcherMsgId_BlindFreqScan: blindCellSearcher_ptr->uarfcnToProcess: %d
Line 508:   EUphySearcherMsgId_BlindFreqScan: blindCellSearcher_ptr->uarfcnToProcess: %d
Line 516: send rssiReqMessage FreqList[%d] = %d
Line 516: send rssiReqMessage FreqList[%d] = %d
Line 523:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest:wrong state!!
Line 523:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest:wrong state!!
Line 662: blindCellSearcher_ptr or theSearcherController is null
Line 671: pchAndDrxResources is null
Line 671: pchAndDrxResources is null
Line 691: BlindCellSearcher: Additinal freq BAND for BPLMN request  %d
Line 691: BlindCellSearcher: Additinal freq BAND for BPLMN request  %d
Line 700:   blindCellSearcher_ptr->replyMessage pointer is null
Line 700:   blindCellSearcher_ptr->replyMessage pointer is null
Line 720: NORMAL BPLMN Request for BLIND cell search!!!
Line 720: NORMAL BPLMN Request for BLIND cell search!!!
Line 731:   blindCellSearcher_ptr->replyMessage pointer is null
Line 731:   blindCellSearcher_ptr->replyMessage pointer is null
Line 751: This is normal Blind scan lets determin the BAND !!!
Line 751: This is normal Blind scan lets determin the BAND !!!
Line 797:   FreqAdjustCmdd failed. errCode=%d, addErrCode=%d
Line 797:   FreqAdjustCmdd failed. errCode=%d, addErrCode=%d
Line 825:   rssiReqMessage == NULL pointer
Line 825:   rssiReqMessage == NULL pointer
Line 848: blindCellSearcher_ptr->theSearcherController is NULL
Line 848: blindCellSearcher_ptr->theSearcherController is NULL
Line 858:   Cant send RSSI Request
Line 858:   Cant send RSSI Request
Line 951:   blindCellSearcher_ptr->freqscan_replyMessage is NULL
Line 951:   blindCellSearcher_ptr->freqscan_replyMessage is NULL
Line 980: uphy_CSearcherController_process: Blind Freq Scan list: %d
Line 980: uphy_CSearcherController_process: Blind Freq Scan list: %d
Line 1088:   rssiReqMessage == NULL pointer
Line 1088:   rssiReqMessage == NULL pointer
Line 1112:   Cant send RSSI Request
Line 1112:   Cant send RSSI Request
Line 1123: send rssiReqMessage FreqList[%d] = %d
Line 1123: send rssiReqMessage FreqList[%d] = %d
Line 1204:   uphy_CBlindCellSearcher_processRssiMeasurementReport: Ignore RSSI Rsp
Line 1204:   uphy_CBlindCellSearcher_processRssiMeasurementReport: Ignore RSSI Rsp
Line 1237:   rssiReqMessage == NULL pointer
Line 1237:   rssiReqMessage == NULL pointer
Line 1263:   Cant send RSSI Request
Line 1263:   Cant send RSSI Request
Line 1310: Report Sent successfully after complete BPLMN scan  !!!!
Line 1310: Report Sent successfully after complete BPLMN scan  !!!!
Line 1329:   rssiReqMessage == NULL pointer
Line 1329:   rssiReqMessage == NULL pointer
Line 1354:   Cant send RSSI Request
Line 1354:   Cant send RSSI Request
Line 1393: NORMAL BLIND REPORT SENT  !!!!
Line 1393: NORMAL BLIND REPORT SENT  !!!!
Line 1425: S0  Ignore Freq scan report as rf not availble
Line 1456: uphy_CSearcherController_process: Blind Freq RSSI index Result: %d
Line 1456: uphy_CSearcherController_process: Blind Freq RSSI index Result: %d
Line 1463:   BlindCellSearcherError: Already processed index %d
Line 1463:   BlindCellSearcherError: Already processed index %d
Line 1479:   rssiReqMessage == NULL pointer
Line 1479:   rssiReqMessage == NULL pointer
Line 1504:   Cant send RSSI Request
Line 1504:   Cant send RSSI Request
Line 1556:   StoredCellSearch Ind msg == NULL pointer
Line 1556:   StoredCellSearch Ind msg == NULL pointer
Line 1571:   freqscan_replyMessage == NULL pointer
Line 1571:   freqscan_replyMessage == NULL pointer
Line 1579:   RetCode = %d
Line 1579:   RetCode = %d
Line 1597:   processBlindFreqFullScanReport: freqIndex=%d cellCtr=%d primaryScrCode=%d rscp=%d EcNo=%d deltaRscp=%d
Line 1597:   processBlindFreqFullScanReport: freqIndex=%d cellCtr=%d primaryScrCode=%d rscp=%d EcNo=%d deltaRscp=%d
Line 1601:   processBlindFreqFullScanReport: primaryScrCode=%d rscp=%ddBm EcNo=%ddB
Line 1601:   processBlindFreqFullScanReport: primaryScrCode=%d rscp=%ddBm EcNo=%ddB
Line 1623:   StoredCellSearchReqMsg == NULL pointer
Line 1623:   StoredCellSearchReqMsg == NULL pointer
Line 1648:   StoredCellSearchReqMsg send failure
Line 1648:   StoredCellSearchReqMsg send failure
Line 1662:   processBlindFreqFullScanReport: send to Stored cell search: uarfcnToProcess = %d, uarfcnIndexCtr = %d uarfcnProcessed = %d uarfcn = %d
Line 1662:   processBlindFreqFullScanReport: send to Stored cell search: uarfcnToProcess = %d, uarfcnIndexCtr = %d uarfcnProcessed = %d uarfcn = %d
Line 1672: complete: processBlindFreqFullScanReport: uarfcnToProcess = %d, uarfcnIndexCtr = %d uarfcnProcessed = %d uarfcn = %d
Line 1672: complete: processBlindFreqFullScanReport: uarfcnToProcess = %d, uarfcnIndexCtr = %d uarfcnProcessed = %d uarfcn = %d
Line 1815:   confirmMsg == NULL pointer
Line 1815:   confirmMsg == NULL pointer
Line 1834:   uphy_CBlindCellSearcher_SendNegCnf: sending EUphyUrrcMessageTransceiverMsgId_BlindFreqScanCnf
Line 1834:   uphy_CBlindCellSearcher_SendNegCnf: sending EUphyUrrcMessageTransceiverMsgId_BlindFreqScanCnf
Line 1838:   Cant send Cnf Msg
Line 1838:   Cant send Cnf Msg
Line 1887:   uphy_CBlindCellSearcher_SendNegCnf: no request msg to send cnf!
Line 1887:   uphy_CBlindCellSearcher_SendNegCnf: no request msg to send cnf!
Line 1982:   Blind Cell Searcher Timeout
Line 1982:   Blind Cell Searcher Timeout
Line 2004:   uphy_CSearcherController_process: Neg Indication for Stored Cell Searcher %d
Line 2004:   uphy_CSearcherController_process: Neg Indication for Stored Cell Searcher %d
Line 2016: blindCellSearcher_ptr->freqscan_replyMessage NULL
Line 2016: blindCellSearcher_ptr->freqscan_replyMessage NULL
Line 2096:   BlindCellSearch StopReq
Line 2096:   BlindCellSearch StopReq
Line 2220:   Failed to send timout report !!!!
Line 2220:   Failed to send timout report !!!!
Line 2225: uphy_CBlindCellSearcher_processBplmnStopReq:Sending Negative Indication!
Line 2225: uphy_CBlindCellSearcher_processBplmnStopReq:Sending Negative Indication!
Line 2232: Report Sent successfully after the timout  !!!!
Line 2232: Report Sent successfully after the timout  !!!!
Line 2246: Done processing processBplmnStopReq !!!!
Line 2246: Done processing processBplmnStopReq !!!!
Line 2256: Reset RfRxUarfcnCmd: cmd_state should be idle but cmd_state=%d
Line 2256: Reset RfRxUarfcnCmd: cmd_state should be idle but cmd_state=%d
Line 2273: RfRxUarfcnCmd: cmd is not idle on other stack(cmd_state=%d)
Line 2273: RfRxUarfcnCmd: cmd is not idle on other stack(cmd_state=%d)
Line 2279: Already processing processBplmnStopReq !!!!
Line 2279: Already processing processBplmnStopReq !!!!
Line 319:  uphy_CBlindCellSearcher_processBlindCellSearchPauseRequest: Neg Indication for Blind Cell Searcher as the other stack has requested RF for Signaling
Line 319:  uphy_CBlindCellSearcher_processBlindCellSearchPauseRequest: Neg Indication for Blind Cell Searcher as the other stack has requested RF for Signaling
Line 330: S0  uphy_CSearcherController_process: Neg Indication for Stored Cell Searcher %d
Line 330: S0  uphy_CSearcherController_process: Neg Indication for Stored Cell Searcher %d
Line 353:   rssiReqMessage == NULL pointer
Line 353:   rssiReqMessage == NULL pointer
Line 394:   Cant send RSSI Request
Line 394:   Cant send RSSI Request
Line 405:   Dereferenced NULL pointer : uphy_CBplmnSearchController_GetInstanceID
Line 405:   Dereferenced NULL pointer : uphy_CBplmnSearchController_GetInstanceID
Line 603:   confirmMsg == NULL pointer
Line 603:   confirmMsg == NULL pointer
Line 629:   Cant send Cnf Msg
Line 629:   Cant send Cnf Msg
Line 893:   confirmMsg == NULL pointer
Line 893:   confirmMsg == NULL pointer
Line 911:   Cant send Cnf Msg
Line 911:   Cant send Cnf Msg
Line 1140: Re-Attempting RSSI scan for previously attempted UARFCN
Line 1140: Re-Attempting RSSI scan for previously attempted UARFCN
Line 1174:   BlindCellSearcherError: Already processed index %d
Line 1174:   BlindCellSearcherError: Already processed index %d
Line 1903:   Blind Cell Searcher Timeout
Line 1903:   Blind Cell Searcher Timeout
Line 1929:   blindCellSearcher_ptr->replyMessage NULL
Line 1929:   blindCellSearcher_ptr->replyMessage NULL
Line 2030: Blind Cell Searcher Timeout
Line 2030: Blind Cell Searcher Timeout
Line 2052:   uphy_CSearcherController_process: Neg Indication for Stored Cell Searcher %d
Line 2052:   uphy_CSearcherController_process: Neg Indication for Stored Cell Searcher %d
Line 2064: blindCellSearcher_ptr->freqscan_replyMessage NULL
Line 2064: blindCellSearcher_ptr->freqscan_replyMessage NULL
Line 2075:   uphy_CSearcherController_process: Neg Indication for Stored Cell Searcher %d
Line 2075:   uphy_CSearcherController_process: Neg Indication for Stored Cell Searcher %d
Line 2122:   uphy_CBlindCellSearcher_bTimeout
Line 2122:   uphy_CBlindCellSearcher_bTimeout
Line 1941: Blind Cell Searcher Guard Timeout
Line 1941: Blind Cell Searcher Guard Timeout
Line 1966: blindCellSearcher_ptr->replyMessage NULL
Line 1966: blindCellSearcher_ptr->replyMessage NULL
