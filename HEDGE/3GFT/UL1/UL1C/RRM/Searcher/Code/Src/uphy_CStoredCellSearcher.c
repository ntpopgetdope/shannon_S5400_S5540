Line 177: uphy_CStoredCellSearcher_free : additionalPathInfo freed
Line 177: uphy_CStoredCellSearcher_free : additionalPathInfo freed
Line 184: uphy_CStoredCellSearcher_free : pschReplyMessage freed
Line 184: uphy_CStoredCellSearcher_free : pschReplyMessage freed
Line 250:   uphy_CStoredCellSearcher_processPauseRequest : isOtherStackUsingRFForSignaling %d
Line 250:   uphy_CStoredCellSearcher_processPauseRequest : isOtherStackUsingRFForSignaling %d
Line 259: uphy_CStoredCellSearcher_free : additionalPathInfo freed
Line 259: uphy_CStoredCellSearcher_free : additionalPathInfo freed
Line 270: uphy_CStoredCellSearcher_processPauseRequest : pschReplyMessage freed
Line 270: uphy_CStoredCellSearcher_processPauseRequest : pschReplyMessage freed
Line 280: uphy_CStoredCellSearcher_processPauseRequest : pschReplyMessage freed
Line 280: uphy_CStoredCellSearcher_processPauseRequest : pschReplyMessage freed
Line 311: uphy_CStoredCellSearcher_processPauseRequest : Search parameters reset
Line 311: uphy_CStoredCellSearcher_processPauseRequest : Search parameters reset
Line 323: uphy_CStoredCellSearcher_processPauseRequest : Search parameters reset
Line 323: uphy_CStoredCellSearcher_processPauseRequest : Search parameters reset
Line 378:   uphy_CStoredCellSearcher_processSearcherPauseRequest:Neg Indication for Stored cell search
Line 378:   uphy_CStoredCellSearcher_processSearcherPauseRequest:Neg Indication for Stored cell search
Line 389:   uphy_CStoredCellSearcher_processResumeRequest
Line 389:   uphy_CStoredCellSearcher_processResumeRequest
Line 408: ## DCXO Freq Hypothesis Request is submitted
Line 408: ## DCXO Freq Hypothesis Request is submitted
Line 443:   confirmMsg == NULL pointer
Line 443:   confirmMsg == NULL pointer
Line 467:   Cant send Cnf Msg
Line 467:   Cant send Cnf Msg
Line 472: sent Cnf Msg
Line 472: sent Cnf Msg
Line 497:   pschReqMessage == NULL pointer
Line 497:   pschReqMessage == NULL pointer
Line 551: Invalid carrierInfo=%d
Line 551: Invalid carrierInfo=%d
Line 563:   Cant send PSCH Request
Line 563:   Cant send PSCH Request
Line 650:   BPLMN : RF is not settled yet. => StoredCellSearch is defered !!!
Line 650:   BPLMN : RF is not settled yet. => StoredCellSearch is defered !!!
Line 668:   BPLMN timeout during before rssi msmt
Line 668:   BPLMN timeout during before rssi msmt
Line 725:   BPLMN timeout before psch msmt
Line 725:   BPLMN timeout before psch msmt
Line 832: sschReqMessage [%d]
Line 832: sschReqMessage [%d]
Line 836:   Cant send SSCH Request
Line 836:   Cant send SSCH Request
Line 879:   pschReqMessage == NULL pointer
Line 879:   pschReqMessage == NULL pointer
Line 933:   Cant send PSCH Request
Line 933:   Cant send PSCH Request
Line 972:   uphy_CStoredCellSearcher_processRssiMeasurementReport: Ignore Rssi Rsp
Line 972:   uphy_CStoredCellSearcher_processRssiMeasurementReport: Ignore Rssi Rsp
Line 982:   uphy_CStoredCellSearcher_processRssiMeasurementReport: Ignore Rssi Rsp as searcher is not in use
Line 982:   uphy_CStoredCellSearcher_processRssiMeasurementReport: Ignore Rssi Rsp as searcher is not in use
Line 994:   Rx Failed Rssi Msmt
Line 994:   Rx Failed Rssi Msmt
Line 999: Stored Cell Searcher: Rx Rssi Msmt %d

Line 999: Stored Cell Searcher: Rx Rssi Msmt %d

Line 1010:   BPLMN timeout before psch msmt
Line 1010:   BPLMN timeout before psch msmt
Line 1115: sschReqMessage [%d]
Line 1115: sschReqMessage [%d]
Line 1119:   Cant send SSCH Request
Line 1119:   Cant send SSCH Request
Line 1186: AFC Shift is done for 0 additional offset : FhStep3_Candidate %d
Line 1186: AFC Shift is done for 0 additional offset : FhStep3_Candidate %d
Line 1193:   pschReqMessage == NULL pointer
Line 1193:   pschReqMessage == NULL pointer
Line 1223: sent Psch req Msg
Line 1223: sent Psch req Msg
Line 1227: Cant send PSCH Request
Line 1227: Cant send PSCH Request
Line 1884: required_FHtrails %d
Line 1884: required_FHtrails %d
Line 1885: FhStep3_Candidate %d source %d
Line 1885: FhStep3_Candidate %d source %d
Line 1902: isDCXOFHConfigured %d FH_trails_End %d required_FHtrails %d FhStep3_Candidate %d
Line 1902: isDCXOFHConfigured %d FH_trails_End %d required_FHtrails %d FhStep3_Candidate %d
Line 1907: Stored Cell Searcher: CpichScrCode Msmt - nPathsCpichRequested[%d] nPathsCpichExamined[%d]
Line 1907: Stored Cell Searcher: CpichScrCode Msmt - nPathsCpichRequested[%d] nPathsCpichExamined[%d]
Line 1927: pschReqMessage == NULL pointer
Line 1927: pschReqMessage == NULL pointer
Line 1936: sent Psch req Msg
Line 1936: sent Psch req Msg
Line 1940: Cant send PSCH Request
Line 1940: Cant send PSCH Request
Line 1953: additionalPathInfo got freed : Reallocate
Line 1953: additionalPathInfo got freed : Reallocate
Line 1959:   additionalPathInfo == NULL pointer
Line 1959:   additionalPathInfo == NULL pointer
Line 1994: NO suitable cell found for FH
Line 1994: NO suitable cell found for FH
Line 2026: FH_s3_reply_msg->payload.magnitude %d
Line 2026: FH_s3_reply_msg->payload.magnitude %d
Line 2027: FH_s3_reply_msg copied for candidate %d
Line 2027: FH_s3_reply_msg copied for candidate %d
Line 2043: FH parameters copied for candidate %d
Line 2043: FH parameters copied for candidate %d
Line 2052: AFC Shift is done : FhStep3_Candidate %d source %d
Line 2052: AFC Shift is done : FhStep3_Candidate %d source %d
Line 2089: storedCellSearcher_ptr->cellScrCodes[0] = %d
Line 2089: storedCellSearcher_ptr->cellScrCodes[0] = %d
Line 2107: Ec/No=%d[dB] FH Best Ec/No=%d[dB]
Line 2107: Ec/No=%d[dB] FH Best Ec/No=%d[dB]
Line 2116: BasefreqOffset %d FhStep3 %d BestAfcPdm %d
Line 2116: BasefreqOffset %d FhStep3 %d BestAfcPdm %d
Line 2120: FH Best Ec/No=%d[dB]
Line 2120: FH Best Ec/No=%d[dB]
Line 2178: FH_reply_msg
Line 2178: FH_reply_msg
Line 2245:   Cant send PSCH Request
Line 2245:   Cant send PSCH Request
Line 2270: Stored Cell Searcher: PSCH Msmt %d paths


Line 2270: Stored Cell Searcher: PSCH Msmt %d paths


Line 2271: path	pathOffset	magnitude

Line 2271: path	pathOffset	magnitude

Line 2278: %d		%d		%d

Line 2278: %d		%d		%d

Line 2311:   sschReqMessage == NULL pointer
Line 2311:   sschReqMessage == NULL pointer
Line 2316:   multiPathInfo == NULL pointer
Line 2316:   multiPathInfo == NULL pointer
Line 2319:  Freeing sschReqMessage pointer
Line 2319:  Freeing sschReqMessage pointer
Line 2377: uphy_CStoredCellSearcher_free : additionalPathInfo freed
Line 2377: uphy_CStoredCellSearcher_free : additionalPathInfo freed
Line 2387: uphy_CStoredCellSearcher_free : additionalPathInfo freed
Line 2387: uphy_CStoredCellSearcher_free : additionalPathInfo freed
Line 2418: %d		%d		%d

Line 2418: %d		%d		%d

Line 2446: Short Mode:  No of Step-1 paths are restricted
Line 2446: Short Mode:  No of Step-1 paths are restricted
Line 2522:   storedCellSearcher_ptr pointer is NULL
Line 2556:   pschReqMessage == NULL pointer
Line 2556:   pschReqMessage == NULL pointer
Line 2570:   Rx Failed Psch Msmt
Line 2570:   Rx Failed Psch Msmt
Line 2593: *** Final result npaths %d numOfPaths %d postAccLen %d pathoffset %d magnitude %d
Line 2593: *** Final result npaths %d numOfPaths %d postAccLen %d pathoffset %d magnitude %d
Line 2614: Stored Cell Searcher: PSCH Msmt %d paths


Line 2614: Stored Cell Searcher: PSCH Msmt %d paths


Line 2615: path	pathOffset	magnitude

Line 2615: path	pathOffset	magnitude

Line 2632:   additionalPathInfo == NULL pointer
Line 2632:   additionalPathInfo == NULL pointer
Line 2645:   BPLMN timeout before psch msmt, returning
Line 2645:   BPLMN timeout before psch msmt, returning
Line 2668:   Cant send SSCH Request
Line 2668:   Cant send SSCH Request
Line 2701: PschMeasurementReport : pschReplyMessage freed
Line 2701: PschMeasurementReport : pschReplyMessage freed
Line 2705: multiPathInfo = NULL
Line 2705: multiPathInfo = NULL
Line 2718: MPInfonPaths [%d]
Line 2718: MPInfonPaths [%d]
Line 2765:   uphy_CStoredCellSearcher_processSschMeasurementReport: Ignore Ssch Rsp
Line 2765:   uphy_CStoredCellSearcher_processSschMeasurementReport: Ignore Ssch Rsp
Line 2775:   uphy_CStoredCellSearcher_processSschMeasurementReport: Ignore Ssch Rsp as searcher is not in use
Line 2775:   uphy_CStoredCellSearcher_processSschMeasurementReport: Ignore Ssch Rsp as searcher is not in use
Line 2790: MPInfonPaths [%d]
Line 2790: MPInfonPaths [%d]
Line 2818: Valid SSCH Msg [%d]
Line 2818: Valid SSCH Msg [%d]
Line 2824:   Stored Cell Searcher: SSCH Msmt FAILED - PschPathIndex[%d]
Line 2824:   Stored Cell Searcher: SSCH Msmt FAILED - PschPathIndex[%d]
Line 2839: DCXO ongoing : Ignoring secScrCodeGroups
Line 2839: DCXO ongoing : Ignoring secScrCodeGroups
Line 2852: Stored Cell Searcher: SSCH Msmt - PschPathIndex[%d] nPathsSschExamined %d FrameOffset %d ScrCodeGroup %d
Line 2852: Stored Cell Searcher: SSCH Msmt - PschPathIndex[%d] nPathsSschExamined %d FrameOffset %d ScrCodeGroup %d
Line 2869: Stored Cell Searcher: SSCH Msmt - PschPathIndex[%d] nPathsSschExamined %d FrameOffset %d ScrCodeGroup %d
Line 2869: Stored Cell Searcher: SSCH Msmt - PschPathIndex[%d] nPathsSschExamined %d FrameOffset %d ScrCodeGroup %d
Line 2883:   BPLMN timeout before cpichscrcode msmt
Line 2883:   BPLMN timeout before cpichscrcode msmt
Line 2895:   cpichScrCodeReqMessage == NULL pointer
Line 2895:   cpichScrCodeReqMessage == NULL pointer
Line 2917: [FA%d] uphy_CStoredCellSearcher_processSschMeasurementReport
Line 2917: [FA%d] uphy_CStoredCellSearcher_processSschMeasurementReport
Line 2930:   Cant send SSCH Request
Line 2930:   Cant send SSCH Request
Line 3025:   uphy_CStoredCellSearcher_processGroupCpichScrCodeMeasurementReport: Ignore CPICH Scr Code Rsp
Line 3025:   uphy_CStoredCellSearcher_processGroupCpichScrCodeMeasurementReport: Ignore CPICH Scr Code Rsp
Line 3035:   uphy_CStoredCellSearcher_processGroupCpichScrCodeMeasurementReport: Ignore CPICH Scr Code Rsp as searcher is not in use
Line 3035:   uphy_CStoredCellSearcher_processGroupCpichScrCodeMeasurementReport: Ignore CPICH Scr Code Rsp as searcher is not in use
Line 3078:   Stored Cell Searcher: CpichScrCode Msmt - Skip PSC(%d) cell belonging to Active Set !!!
Line 3078:   Stored Cell Searcher: CpichScrCode Msmt - Skip PSC(%d) cell belonging to Active Set !!!
Line 3124: MPInfonPaths [%d]
Line 3124: MPInfonPaths [%d]
Line 3153: Valid SCR Code Msg [%d]
Line 3153: Valid SCR Code Msg [%d]
Line 3159:   Stored Cell Searcher: CpichScrCode Msmt FAILED - PschPathIndex[%d] SschPathIndex[%d]
Line 3159:   Stored Cell Searcher: CpichScrCode Msmt FAILED - PschPathIndex[%d] SschPathIndex[%d]
Line 3170: DCXO ongoing : Free this trails additionalPathInfo to prevent memory leakage
Line 3170: DCXO ongoing : Free this trails additionalPathInfo to prevent memory leakage
Line 3210: Stored Cell Searcher: CpichScrCode Msmt - nPathsCpichRequested[%d] nPathsCpichExamined[%d]
Line 3210: Stored Cell Searcher: CpichScrCode Msmt - nPathsCpichRequested[%d] nPathsCpichExamined[%d]
Line 3239: Stored Cell Searcher: CpichScrCode Msmt - PschPathIndex[%d] SschPathIndex[%d] scrCodeIndex[%d] primaryScrCode [%d]
Line 3239: Stored Cell Searcher: CpichScrCode Msmt - PschPathIndex[%d] SschPathIndex[%d] scrCodeIndex[%d] primaryScrCode [%d]
Line 3258:   BPLMN timeout before cpichrscp msmt
Line 3258:   BPLMN timeout before cpichrscp msmt
Line 3274:   cpichRscpReqMessage == NULL pointer
Line 3274:   cpichRscpReqMessage == NULL pointer
Line 3307: Stored Cell Searcher: CpichScrCode NOT FOUND - PschPathIndex[%d] SschPathIndex[%d] scrCodeIndex[%d]
Line 3307: Stored Cell Searcher: CpichScrCode NOT FOUND - PschPathIndex[%d] SschPathIndex[%d] scrCodeIndex[%d]
Line 3350:   uphy_CStoredCellSearcher_processCpichRscpMeasurementReport: Ignore CPICH Rscp Rsp
Line 3350:   uphy_CStoredCellSearcher_processCpichRscpMeasurementReport: Ignore CPICH Rscp Rsp
Line 3360:   uphy_CStoredCellSearcher_processCpichRscpMeasurementReport: Ignore CPICH Rscp Rsp as searcher is not in use
Line 3360:   uphy_CStoredCellSearcher_processCpichRscpMeasurementReport: Ignore CPICH Rscp Rsp as searcher is not in use
Line 3371: MPInfonPaths [%d]
Line 3371: MPInfonPaths [%d]
Line 3374:   Stored Cell Searcher: CpichRscp Msmt - PschPathIndex[%d] SschPathIndex[%d] CpichPathIndex[%d]
Line 3374:   Stored Cell Searcher: CpichRscp Msmt - PschPathIndex[%d] SschPathIndex[%d] CpichPathIndex[%d]
Line 3384:   Stored Cell Searcher: CpichRscp Msmt - PschPathIndex[%d] SschPathIndex[%d] CpichPathIndex[%d]
Line 3384:   Stored Cell Searcher: CpichRscp Msmt - PschPathIndex[%d] SschPathIndex[%d] CpichPathIndex[%d]
Line 3392: ### PathIndex %d PathIndex/group %d num paths %d ValidMsg %d storedCellSearcher_ptr->additionalPathInfo[PathIndex].Status %d
Line 3392: ### PathIndex %d PathIndex/group %d num paths %d ValidMsg %d storedCellSearcher_ptr->additionalPathInfo[PathIndex].Status %d
Line 3398:   Stored Cell Searcher: CpichRscp Msmt - PschPathIndex[%d] SschPathIndex[%d] CpichPathIndex[%d]
Line 3398:   Stored Cell Searcher: CpichRscp Msmt - PschPathIndex[%d] SschPathIndex[%d] CpichPathIndex[%d]
Line 3412:   Stored Cell Searcher: CpichRscp Msmt FAILED - PschPathIndex[%d] SschPathIndex[%d] CpichPathIndex[%d]
Line 3412:   Stored Cell Searcher: CpichRscp Msmt FAILED - PschPathIndex[%d] SschPathIndex[%d] CpichPathIndex[%d]
Line 3419: Stored Cell Searcher: CpichRscp Msmt - PschPathIndex[%d] SschPathIndex[%d] CpichPathIndex[%d] RSCP %d[dBm]
Line 3419: Stored Cell Searcher: CpichRscp Msmt - PschPathIndex[%d] SschPathIndex[%d] CpichPathIndex[%d] RSCP %d[dBm]
Line 3878:   sendStoredCellSearchIndMessage: storedCellSearcher_ptr is NULL
Line 3885:   sendStoredCellSearchIndMessage:  theSearcherController is NULL
Line 3923:   Critical: replyMessage is NULL
Line 3923:   Critical: replyMessage is NULL
Line 3976: Stored Cell Searcher: UARFCN=%d ScrCode=%d RSSI=%d[dBm] RSCP=%d[dBm] Ec/No=%d[dB] deltaRscp=%d[dBm]
Line 3976: Stored Cell Searcher: UARFCN=%d ScrCode=%d RSSI=%d[dBm] RSCP=%d[dBm] Ec/No=%d[dB] deltaRscp=%d[dBm]
Line 3988:   Cant send Ind Message
Line 3988:   Cant send Ind Message
Line 4023:   Critical: replyMessage is NULL
Line 4023:   Critical: replyMessage is NULL
Line 4077: Stored Cell Searcher: UARFCN=%d ScrCode=%d RSSI=%d[dBm] RSCP=%d[dBm] Ec/No=%d[dB] deltaRscp=%d[dBm]
Line 4077: Stored Cell Searcher: UARFCN=%d ScrCode=%d RSSI=%d[dBm] RSCP=%d[dBm] Ec/No=%d[dB] deltaRscp=%d[dBm]
Line 4089:   Cant send Ind Message
Line 4089:   Cant send Ind Message
Line 4168: Stored Cell Searcher: UARFCN=%d ScrCode=%d RSSI=%d[dBm] RSCP=%d[dBm] Ec/No=%d[dB] deltaRscp=%d[dBm]
Line 4168: Stored Cell Searcher: UARFCN=%d ScrCode=%d RSSI=%d[dBm] RSCP=%d[dBm] Ec/No=%d[dB] deltaRscp=%d[dBm]
Line 4178: StoredCellSearcher sent: MsgId=%d SrcId.CompositeId.PrimaryId=%d, SrcId.CompositeId.SubId=%d, DestId.CompositeId.PrimaryId=%d DestId.CompositeId.SubId=%d TransactId=%d
Line 4178: StoredCellSearcher sent: MsgId=%d SrcId.CompositeId.PrimaryId=%d, SrcId.CompositeId.SubId=%d, DestId.CompositeId.PrimaryId=%d DestId.CompositeId.SubId=%d TransactId=%d
Line 4190:   StoredCellSearcher Error: Unexpected Requestor=%d
Line 4190:   StoredCellSearcher Error: Unexpected Requestor=%d
Line 4392:   storedCellSearcher_ptr is NULL
Line 4399:   theSearcherController is NULL
Line 4618:   StoredCellSearcher is Completed, so don't perform bTimeout
Line 4618:   StoredCellSearcher is Completed, so don't perform bTimeout
Line 4701:   Cant send Ind Message
Line 4701:   Cant send Ind Message
Line 4707:   Cant create Bplmn Timeout Ind Message
Line 4707:   Cant create Bplmn Timeout Ind Message
Line 4911: TIMEOUT GAURD INCREASED FOR DCXO SEARCH
Line 4911: TIMEOUT GAURD INCREASED FOR DCXO SEARCH
Line 366: S0  uphy_CStoredCellSearcher_processPauseRequest:Neg Indication for Stored Cell Searcher as the other stack has requested RF for Signaling 
Line 1684:  Unexpected candidate : %d
Line 1684:  Unexpected candidate : %d
Line 1756: Best FhStep3_Candidate %d
Line 1756: Best FhStep3_Candidate %d
Line 1757: FH_s3_reply_msg->payload.magnitude %d
Line 1757: FH_s3_reply_msg->payload.magnitude %d
Line 1758: s1_path [%d] nPathsSschExamined [%d] MPInfonPaths [%d]
Line 1758: s1_path [%d] nPathsSschExamined [%d] MPInfonPaths [%d]
Line 1764: Error step 1 path %d != step 2 path %d
Line 1764: Error step 1 path %d != step 2 path %d
Line 1771: MPInfonPaths [%d]
Line 1771: MPInfonPaths [%d]
Line 1803:   cpichRscpReqMessage == NULL pointer
Line 1803:   cpichRscpReqMessage == NULL pointer
Line 1818: MP request frameOffset %d primaryScrCode %d cellSetType %d storedCellSearcher_ptr->additionalPathInfo[0].Status %d
Line 1818: MP request frameOffset %d primaryScrCode %d cellSetType %d storedCellSearcher_ptr->additionalPathInfo[0].Status %d
Line 1838:  Cant send CPICH RSCP Request
Line 1838:  Cant send CPICH RSCP Request
Line 2132:   uphy_CStoredCellSearcher_processPschMeasurementReport: Ignore Psch Rsp
Line 2132:   uphy_CStoredCellSearcher_processPschMeasurementReport: Ignore Psch Rsp
Line 2142:   uphy_CStoredCellSearcher_processPschMeasurementReport: Ignore Psch Rsp as searcher is not in use
Line 2142:   uphy_CStoredCellSearcher_processPschMeasurementReport: Ignore Psch Rsp as searcher is not in use
Line 2999:   Cant send CPICH RSCP Request
Line 2999:   Cant send CPICH RSCP Request
Line 3458:   theSearcherController is NULL
Line 3470: RF is unavailable, can't preserve bestpdm
Line 3470: RF is unavailable, can't preserve bestpdm
Line 3502:   StoredCellSearcher sendStoredCellSearchIndMessage : TransactId = %d
Line 3502:   StoredCellSearcher sendStoredCellSearchIndMessage : TransactId = %d
Line 3641: >>> Find New %d cells
Line 3641: >>> Find New %d cells
Line 3767: >>> Find New %d cells
Line 3767: >>> Find New %d cells
Line 4215:  storedCellSearcher_ptr is NULL !!! 
Line 4221:   TestAndProcessCompletedSearch:  theSearcherController is NULL
Line 4231: nCellsExamined = %d nCells = %d nPathsSschExamined = %d nPathsCpichExamined = %d nPathsCpichRequested = %d
Line 4231: nCellsExamined = %d nCells = %d nPathsSschExamined = %d nPathsCpichExamined = %d nPathsCpichRequested = %d
Line 4237: MPInfonPaths [%d]
Line 4237: MPInfonPaths [%d]
Line 4279: ## uphy_CStoredCellSearcher_TestAndProcessCompletedSearch nCellsExamined %d nCells %d nPathsSschExamined %d DCXOnumOfPaths %d nPathsCpichExamined %d nPathsCpichRequested %d
Line 4279: ## uphy_CStoredCellSearcher_TestAndProcessCompletedSearch nCellsExamined %d nCells %d nPathsSschExamined %d DCXOnumOfPaths %d nPathsCpichExamined %d nPathsCpichRequested %d
Line 4324: ## uphy_CStoredCellSearcher_TestAndProcessCompletedSearch nCellsExamined %d nCells %d nPathsSschExamined %d numOfPaths %d DCXOnumOfPaths %d nPathsCpichExamined %d nPathsCpichRequested %d
Line 4324: ## uphy_CStoredCellSearcher_TestAndProcessCompletedSearch nCellsExamined %d nCells %d nPathsSschExamined %d numOfPaths %d DCXOnumOfPaths %d nPathsCpichExamined %d nPathsCpichRequested %d
Line 4371: ## uphy_CStoredCellSearcher_TestAndProcessCompletedSearch nCellsExamined %d nCells %d nPathsSschExamined %d numOfPaths %d DCXOnumOfPaths %d nPathsCpichExamined %d nPathsCpichRequested %d
Line 4371: ## uphy_CStoredCellSearcher_TestAndProcessCompletedSearch nCellsExamined %d nCells %d nPathsSschExamined %d numOfPaths %d DCXOnumOfPaths %d nPathsCpichExamined %d nPathsCpichRequested %d
Line 4443:   Timeout
Line 4443:   Timeout
Line 4468: Timeout Guard
Line 4468: Timeout Guard
Line 4580:   uphy_CStoredCellSearcher_bTimeout
Line 4580:   uphy_CStoredCellSearcher_bTimeout
Line 4751:   uphy_CStoredCellSearcher_deferedProcessStoredCellSearchRequest
Line 4751:   uphy_CStoredCellSearcher_deferedProcessStoredCellSearchRequest
Line 4776:   deferedProcessStoredCellSearchRequest: BPLMN timeout during before rssi msmt (isDlUarfcn=%d)
Line 4776:   deferedProcessStoredCellSearchRequest: BPLMN timeout during before rssi msmt (isDlUarfcn=%d)
Line 4810:   pschReqMessage == NULL pointer
Line 4810:   pschReqMessage == NULL pointer
Line 4865: Invalid carrierInfo=%d
Line 4865: Invalid carrierInfo=%d
Line 4877:   Cant send PSCH Request
Line 4877:   Cant send PSCH Request
