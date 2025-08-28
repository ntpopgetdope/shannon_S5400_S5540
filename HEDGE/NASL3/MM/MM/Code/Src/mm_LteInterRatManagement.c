Line 147: mm_DecodeMmcMobCmdToIratReqMsg: type(%d) srvcc(%d)
Line 149: IsLimitedService: %d
Line 261: mm_DecodeMmcMobCmdToIratReqMsg: invalid CASE (%d)
Line 266: mm_DecodeMmcMobCmdToIratReqMsg: NOT IMPLEMENTED CASE (%d)
Line 277: mm_DecodeMmcMobCmdToIratReqMsg: mm_MmcHedgeRatChangeCause = %d
Line 294: mm_SendMmcMobCmdToIratCnfMs: Result = %d
Line 297: Handover Done So delete the Handover Info received from MMC.
Line 334: Sending MMC Redirection  Result = %d
Line 338: Unable to Allocate memory.
Line 371: mm_SendRrPsHandoverReqMsg  HO  To -> %s
Line 382: handover_to_umts.umts_ho_container.length: %d
Line 448: Uldata  NSAPI 5= %d, NSAPI 6=%d
Line 482: Uldata  NSAPI 5= %d, NSAPI 6=%d
Line 513: Error!!! Unable to allocate memory 
Line 518: [MM] Given afcPdmValue = %d, mm_afcPdmValue = %d
Line 519: [MM] Given numOfCandidateCells = %d, mm_numOfCandidateCells = %d
Line 538: [MM] Given candidateCellInfo[%d].arfcn = 0x%x, bsic = 0x%x, frameNumber = 0x%x, Qb = 0x%x, net_frameNumber = 0x%x
Line 545: Error!!! Unable to allocate memory 
Line 577: 
Entering mm_DecodeUrrcMmHandoverToUtranCnfMsg
Line 581: 
Result : %d, RatInfo : %d
Line 584: 
Result : %d    0 : L2U_PS     1: L2U_SRVCC      2: L2U_SRVCC_PS	3: L2U_SRVCC_CS_VIDEO	4: L2U_SRVCC_CS_VIDEO_PS
Line 585: 
Result : %d    1 : N2U_SRVCC  3: Unknown
Line 640: PSHO+CSFB, Call Status is TRUE, Take CS CALL Grant Locally, since EMM/GMC has aquired the grant already
Line 645: PSHandover+CSFB : Aquire Grant, %d 
Line 649: CS Procedure is DSDS CS CALL Already
Line 708: Set MMC Handover to 2G3G Info
Line 714: ======= SRVCC HO 2G3G ncells information from LTE =======
Line 715: Number of neighbor cells = %d
Line 731: UARFCN = 0x%x, CELL_ID = 0x%x, Time offeset = 0x%x 
Line 748: Error !!!! Unable to  allocate memroy :mm_SetMmcHandover2G3GInfo
Line 775: Error !!!! Unable to  allocate memroy :mm_SetMmcHandover2G3GInfo
Line 802: Error !!!! Unable to  allocate memroy :mm_SetMmcHandover2G3GInfo
Line 810: Copying L2G CCO info: 
Line 834: ReSet MMC Handover to 2G3G Info
Line 919: In  mm_DecodeMmcLteTo2G3GUeCapaReqMsg, RAT : 0x%x
Line 927: Requesting GERAN_CS : No action (TBD)
Line 932: Requesting GERAN_PS : No action (TBD)
Line 952: mm_SendUrrcMmInterRatHandoverInfoReqMsg....
Line 990: mm_DecodeUrrcMmInterRatHandoverInfoCnfMsg....
Line 991: targetRatInfo = %d
Line 992: HandoverInfoLength = %d
Line 997: mm_DecodeUrrcMmInterRatHandoverInfoCnfMsg: requested for HEDGE RAU procedures...
Line 1040: mm_DecodeUrrcMmUeCapaIndMsg.... 
Line 1063: mm_SendMmc2G3GToLteUeCapaReq.... 
Line 1098: mm_DecodeMmc2G3GToLteUeCapaCnfMsg...., Target RAT : %d
Line 1155: mm_SendUrrcMmUeCapaRspMsg.... 
Line 1172: Error !!!! Unable to allocate memory
Line 1214: 
Unable To Send %s in mm_SendCcSrvccHoInd
Line 1232: Entered Funtion mm_DecodeUrrcMmHandoverFromUtranIndMsg... Target RAT : %d
Line 1239: Power off detach is pending. Discarding HO
Line 1247: HO received during power off!! Sending SUCCESS to RRC.
Line 1257: Call is on, so discarding HO request
Line 1287: Wrong Target RAT
Line 1359: Error !!!! Unable to allocate memory
Line 1374: Error !!!! Unable to allocate memory
Line 1376: Warning : Temporarily implemented
Line 1389: Error !!!! Unable to allocate memory
Line 1431: Warning : Unable to allocate memory for String-S and Kasme
Line 1448: Sending MmcHoToLteReqMsg (Encoding length : %d)
Line 1480: Discarding mm_DecodeHoToLteCnfMsg as no context exists.
Line 1485: Entered Funtion mm_DecodeHoToLteCnfMsg... Type : %d, Result : %d
Line 1549: Entered Funtion mm_SendMmcLteTo2G3GUeCapaCnfMsg... TargetRat : %d
Line 1614: Warning : TargetRat is not proper...
Line 1652: SRVCC call was requested but L2U_PS only happened. MM will inform SRVCC failure to CC. 
Line 1672: PSHO+CSFB, Call Status is TRUE, Take CS CALL Grant Locally, since EMM/GMC has aquired the grant already
Line 1677: PSHandover+CSFB : Aquire Grant, %d 
Line 1681: CS Procedure is DSDS CS CALL Already
Line 1710: SRVCC call success. We will do LAU once CS transaction is over in NMO II
Line 1751: KoreaSimProv:%d SpYellow_FCI09_FCI29:%d QrbRegEnableStatus:%d
Line 1758: QRB is triggered about L2U SRVCC HO
Line 1775: SRVCC call success. We will do LAU once CS transaction is over in NMO II
Line 1831: QRB is triggered about L2U SRVCC HO
Line 1848: PSHO+CSFB, Call Status is TRUE, Take CS CALL Grant Locally, since EMM/GMC has aquired the grant already
Line 1853: PSHandover+CSFB : Aquire Grant, %d 
Line 1857: CS Procedure is DSDS CS CALL Already
Line 1901: RSRVCC is supported hence PsHo will be handled in CON_ACTIVE state 
Line 1908: PsHo will be discarded as UE is trying to triggere/receive a call
Line 1933: mm_DecodeMmcNrTo2G3GHandoverReq: type(%d) srvcc(%d)
Line 1964: mm_DecodeMmcNrTo2G3GHandoverReq: NOT IMPLEMENTED CASE (%d)
Line 1971: mm_DecodeMmcNrTo2G3GHandoverReq: mm_MmcLteHedgeRatChangeCause = %d
Line 1982: mm_SendMmcNrTo2G3GHandoverCnf: Result = %d
Line 1999: Sending MMC Redirection  Result = %d
Line 2008: Handover Done So delete the Handover Info received from MMC.
