Line 213: Initialisation of <RatManagement>, InitType=%d
Line 285: State exceeds the limit
Line 293: RAT Change is Happening in Connected Mode from GSM to UMTS So we need to Map Connected Mode to State
Line 303: GMM Functional State set to %d
Line 339: State exceeds the limit
Line 370: RAT Change is Necessary, Initiating RR Suspension / Resumption Procedures..
Line 382: RAT Suspension Requested..
Line 390: RAT Resumption Requested instead of Suspension Requested..
Line 461: Discarding Saved Cell Ind Msg ..
Line 479: SUSPEND_RAT_REQ UnconditionalSuspend = TRUE due to detach
Line 485: SUSPEND_RAT_REQ UnconditionalSuspend = TRUE due to mode selection
Line 509: SUSPEND_RAT_REQ dsdsCallStatus= TRUE due to CS call on other stack
Line 514: SUSPEND_RAT_REQ dsdsCallStatus= FALSE
Line 529: mm_UnconditionalSuspend = %d
Line 532: %d message id
Line 548: Suspending due to CS call on other stack Resetting current stack SRNC states
Line 590: SUSPEND REQ ignored due to RAT CHANGE IN PROGRESS 
Line 759: %s  in  mm_DecodeRrSuspendRatCnfMsg
Line 847: Old 
Line 853: GSM is disabled
Line 860: Not resuming GSM RAT, considering MM is Suspended, NEW RAT init actions are responded back 
Line 874: New 
Line 886: Stack Has Been Suspended...
Line 891: Sending Stop Network Rsp to NS.
Line 898: Sending MM Stop Req to AS
Line 912: SUSPEND_RAT_CNF Not Allowed in this mm_RatModeChageState !!!
Line 1084: SRVCC Kc128 ->
Line 1139: TLLI generation for GPRS suspension procedure
Line 1252: Indiicating GRR as MM_NO_IMS_OR_INTERNET_AVAILABLE 
Line 1262: 
Displaying Message Contents: %s
Line 1270: Lai = %02X %02X %02X %02X %02X 
Line 1277: Tlli = %02X %02X %02X %02X 
Line 1530: Sending CS keys as 0xFF in RESUME_RAT
Line 1546: Sending PS keys as 0xFF in RESUME_RAT
Line 1567: UmtsMode = %d   0:FDD 1:TDD 2:FDD&TDD
Line 1570: isUsimPresent = %d
Line 1577: Indiicating URRC as MM_NO_IMS_OR_INTERNET_AVAILABLE 
Line 1586: PS Support indication = %d, PDP Status %d 
Line 1588: PlmnSelectionMode(Auto) = %d
Line 1627: Entering mm_SendRrResumeRatReqMsg
Line 1641: Handle RR Resume Request after SIM CNF
Line 1653: Handle RR Resume Request after SIM CNF
Line 1668: Sending Reseume Rat Req (U)RRC...in mm_SendRrResumeRatReqMsg
Line 1693: 
Displaying Message Contents
Line 1713: RESUME_RAT_REQ Not Allowed in this mm_RatModeChageState !!!
Line 2341: %s  in  mm_DecodeRrResumeRatCnfMsg
Line 2367: New 
Line 2397: RESUME_RAT_CNF Not Allowed in this mm_RatModeChageState !!!
Line 2427: 
-------------------------mm_DecodeUrrcRatCellChangeToGsmMsg ----------------------------
Line 2452: MM Had already started a Procedure.. Aborting All MM Procedures!!!! 
Line 2619: 
-------------------------mm_DecodeUrrcRatHandoverToGsmMsg ----------------------------
Line 2638: RAT Mode change state is %s, Not processing the HO Request
Line 2719: 
 ---- mm_DecodeUrrcHandoverRabIndMsg ----
Line 2721: RabId            -> 0x%02X
Line 2722: CodecInfoPresent -> 0x%02X
Line 2723: NasSyncInd       -> 0x%02X
Line 2761: in  mm_UrrcRetransmitMessages
Line 2812: Unknown Message PD %d
Line 2858: 
Displaying Message Contents: %s
Line 2860: NumOfMessagesToRetransmit -> %d
Line 2864: Message %d    -> ...
Line 2865: Message Size  -> %d
Line 2866: Message       -> ...
Line 2913: Saving UrrcRetransmitInd to be sent to CM Layer later
Line 2924: Protocol Descriminators for Unconfirmned Messages to be Re-transmitted....
Line 2991: RAT Mode change state is %s, Not processing the HO Request
Line 3088: U2G redirection blocked, Saved PLMN selection procedure will be initiated
Line 3097: MM sent CELL_REJ to URRC so Redirection is aborted.
Line 3105: Redirection is discarded during Hedge Rat suspension.
Line 3125: UMTS to GSM cell reselection in %s
Line 3129: MM Had already started a Procedure.. Aborting All MM Procedures!!!! 
Line 3183: URRC_MM_RAT_RESELECTION_TO_GSM_IND Ignored as MM has started a RAT Change !!!! 
Line 3224: G2U IRAT reselection UMTS MODE = %d
Line 3260: Blocking G2U reselection since CELL_REJ was sent and PLMN search will come.
Line 3281: MM Had already started a Procedure.. Aborting All MM Procedures!!!! 
Line 3329: GRR_MM_RAT_RESELECTION_TO_UMTS_IND Ignored as MM has started a RAT Change !!!! 
Line 3369: 
 Ratmode : %d , Multimode Flag: %d
Line 3370: 
 RAT change cause = %d
Line 3383: Block to send MMC_RAT_MODE_CHANGE_IND with forced LTE/NR RAT mode for multimode
Line 3454: 
Displaying Message Contents: %s
Line 3458: mm_SendGapiRatModeChangeIndMsg Cause : %d 
Line 3494: 
Displaying Message Contents: %s
Line 3532: 
Displaying Message Contents: %s
Line 3569: 
Displaying Message Contents: %s
Line 3606: 
Displaying Message Contents: %s
Line 3647: 
Displaying Message Contents: %s
Line 3674: mm_SendRatCellChangeToUmtsRspMsg..Status(%d)
Line 3730: mm_SendRatReselectionToUmtsRspMsg..Status(%d)
Line 3824: mm_SendRatHandoverToUmtsRspMsg..Status(%d)
Line 3889: Rat Mode Change (Initiated by (U)RRC) was Successful 
Line 3941: URRC_MM_RAT_CHANGE_COMPLETE_IND Not Allowed in this mm_RatModeChageState !!!
Line 4023: Setting GMM Service states as %s
Line 4090: Rat Mode Change (Initiated by (U)RRC) Failed ! Reverting Back to Old Rat ..
Line 4101: Discarding Saved Cell Ind Msg ..
Line 4113: Discarding Saved Urrc Retransmit Ind Msg ..
Line 4129: URRC_MM_RAT_CHANGE_COMPLETE_IND Not Allowed in this mm_RatModeChageState !!!
Line 4151: 
Displaying Message Contents: %s
Line 4154: RabId            -> 0x%02X
Line 4155: CodecInfoPresent -> 0x%02X
Line 4156: NasSyncInd       -> 0x%02X
Line 4177: GSM to UMTS Initialisation of <GMM Functional State>
Line 4189: UMTS to GSM Initialisation of <GMM Functional State>
Line 4222: MM RATMode : %s -> %s
Line 4340: serving_access_type = %d
Line 4341: mm_UeSupportRATechType = %d
Line 4390: Result : %d 
Line 4410: mm_NwAndRadioCapsData.AccessTechInfo[%d] = %d
Line 4461: Network sends All Unsupported Bands in PUA MAC Message So send Default RA Type = %s 
Line 4490: Invalid BCCH Access Type  = %s 
Line 4500: Temp_GmmPduCodecDb->mm_NwAndRadioCapsData.AccessTechInfo values are corrupted
Line 4503: mm_RacBandCheckProc:mm_UeSupportRATechType = %d 
Line 4628: Total Size Required for Encoding RA Capabilities  %d
Line 4632: Number of RA Capabilities for Encoding = %d
Line 4687: Num = %d
Line 4690: type[%d] = %d
Line 4693: available_size given by MAC %d
Line 4770: GMSK 900 Registry value of PowerClass is invalid. Check AccessTechInfo in registry
Line 4780: GMSK 1800 Registry value of PowerClass is invalid. Check AccessTechInfo in registry
Line 4790: GMSK 1900 Registry value of PowerClass is invalid. Check AccessTechInfo in registry
Line 4809: 8PSK 900 Registry value of PowerClass is invalid. Check AccessTechInfo in registry
Line 4819: 8PSK 1800 Registry value of PowerClass is invalid. Check AccessTechInfo in registry
Line 4829: 8PSK 1900Registry value of PowerClass is invalid. Check AccessTechInfo in registry
Line 4839: 8PSK 850Registry value of PowerClass is invalid. Check AccessTechInfo in registry
Line 4861: LTE RAT : Our received mode is LTE_HEDGE_EMC_MODE_MM
Line 4902: Mode: Curr(%d) -> New(%d) 
Line 4903: RatMode(%d) EutranDisabled(%d)
Line 4905: NrCapbDisableState: %d
Line 4921: Proceed with Mode Update procedure
Line 4935: NrCapbDisableStateChanged: %d
Line 4950: When mode changes then UE capabilites gets changed, Encode MSRAC due to mode change
Line 4953: EncodedSizeinBits -> %d 
Line 5028: QRB is aborted.
Line 5042: Mode is changed from LTE/NR supported mode to LTE/NR Not Supported mode. Remember to perform LAU/RAU.
Line 5046: Setting LAU Needed Flag.
Line 5088: Entered Funtion mm_DecodeMmcMccReqMsg 
Line 5130: Call triggered on other stack when reselection/redirection/HO / CCO ongoing on current stack. Proceed with suspension.
Line 5148: Suspension is postponed until BPLMN procedure completion.
Line 5295: Entered Funtion mm_DecodeMmcSuspendReqMsg 
Line 5301: mm_SuspendReq_PowerDown = %d
Line 5309: We are already in Suspended state.  

Line 5326: MM_DSDS_DELAY_STACK_RESUMPTION Timer is still Running and we received a Suspension, So triggering suspend Cnf Back
Line 5335: MMC resume Request Pointer is NULL already 
Line 5373: Discarding MM DATA REQ message due to HEDGE suspension
Line 5489:  gsm_valid_info: %d, umts_valid_info: %d
Line 5491: IsLimitedService: %d
Line 5497: Redirect UMTS RAT: %d
Line 5512:  RAT MODE: %d
Line 5590: Redirection Done So delete the Redirect Info received from MMC.
Line 5601: Sending MMC Redirection  Status = %d
Line 5632: Entered Funtion mm_DecodeMmcLteTo2G3GReselectionReqMsg 
Line 5639: IsLimitedService: %d
Line 5673: Resel UMTS RAT: %d
Line 5688: Number of Cells Given By MMC are Zero
Line 5692: Number of Cells Given By MMC = %d
Line 5693: ARFCN = %d
Line 5694: SC = %d
Line 5741: mm_HandleHedgeIratSuccess: IratType = %d DestRat = %d
Line 5801: Resetting mm_DsIgnoreNewCellInd on moving to non Hedge rat
Line 5842:  IratType = %d is not handled in this function.
Line 5867: Discarding MM DATA REQ message due to NO SERVICE
Line 5881: Warning: RAT Mode is LTE / Reselection Cnf received twice from LTE 
Line 5913: mm_HandleHedgeIratFailure: IratType = %d, ResultCause = %d, t_barred = %d
Line 5971:  IratType = %d is not handled in this function.
Line 5985: Triggering QRB to LTE as QRB to NR has failed.
Line 6073: Discard mm_DecodeMmc2G3GToLteReselectionCnfMsg as there is no context exists
Line 6081: mm_DecodeMmc2G3GToLteReselectionCnfMsg -> Result = %d, t_barred = %d 
Line 6117: Discard mm_DecodeMmc2G3GToLteRedirectionCnfMsg as there is no context exists
Line 6123: Entered Funtion mm_DecodeMmc2G3GToLteRedirectionCnfMsg, Result = %d 
Line 6153: Discard mm_DecodeMmc2G3GToLteCellChgCnfMsg as there is no context exists
Line 6158: Entered Funtion mm_DecodeMmc2G3GToLteCellChgCnfMsg: Result = %d 
Line 6214: MM Had already started a Procedure.. Aborting All MM Procedures!!!! 
Line 6234: Number of Cells Given By MMC are Zero
Line 6259: Stack Resumed After CS CALL, Stack is in GSM rat mode, Delay Resumption for 3 Seconds
Line 6271: 


 *********************	 MMC_2G3G_RESUME_REQ (RAT mode : %d)	**************


Line 6277: RESUME with MMC_CPU_POWER_ON
Line 6333: Ignore the saved ATT_REQ during stack suspension
Line 6444: On Hedge Suspenstion, Release the call 
Line 6448: Release CSCALL grant..
Line 6553: Number of UMTS Cells Given By MMC = %d
Line 6557: Number of Cells Given to URRC = %d
Line 6561: ARFCN = %d
Line 6562: SC = %d
Line 6567: ARFCN = %d
Line 6568: SC = %d
Line 6586: CELL_CHANGE_REQ_TO_GSM
Line 6598: NetworkColourCode : %d BaseStaionColourCode : %d
Line 6604: Arfcn : %d BandIndicator : %d
Line 6609: num_of_gsm_si_info : %d
Line 6613: Number of GSM Cells Given By MMC = %d
Line 6623: Number of Cells Given to GRR = %d
Line 6627: BSIC = %d
Line 6628: SC = %d
Line 6633: BSIC  = %d
Line 6634: ARFCN = %d
Line 6640: 
Memory allocation failed
Line 6698: 
Displaying Message Contents: %s
Line 6746: 
Displaying Message Contents: %s
Line 6775: mm_SendRrCellReselToEUtranFailMsg : reason : %d, t_barred : %d 
Line 6794: 
Unable To Allocate memory : RAT is out of service
Line 6800: 
Displaying Message Contents: %s
Line 6807: 
Unable To Allocate memory : RAT is out of service
Line 6813: 
Unable To Send %s in mm_SendRrCellReselToEUtranFailMsg
Line 6823: mm_SendRrCellReselToEUtranFailMsg : reason : %d, t_barred : %d 
Line 6846: 
Displaying Message Contents: %s
Line 6853: 
Unable To Allocate memory : RAT is out of service
Line 6881: U2L Redirection Failed. NeedCellIndAfterRelInd is set to TRUE.
Line 6899: 
Displaying Message Contents: %s
Line 6952: 
Displaying Message Contents: %s
Line 6982: Not sending RrCellChgToEutranFailMsg : it is in 3G RAT
Line 7002: 
Displaying Message Contents: %s
Line 7132: Entered Funtion mm_DecodeRrReselectionTo2G3GCnfMsg 
Line 7147: Received From URRC :: CSG Cell PlmnId -> 0x%x 0x%x 0x%x, CsgId = 0x%x
Line 7151: Received From URRC :: Reselection Status = %d, Btimer : %d, cause : %d
Line 7160: Received From GRR :: Reselection Status = %d, Btimer : %d, cause : %d
Line 7190: CELL_CHANGE_CNF Result: %d Cause : %d
Line 7267: Entered Funtion mm_CheckRrCellReselToEUtranOrNrAllowed 
Line 7280: Power off detach is pending Hence discarding G2N RESELECTION
Line 7286: Power off detach is pending Hence discarding G2L RESELECTION
Line 7302: Hedge to NR inter RAT cell reselection happened while power off detach is in progress, discards it
Line 7308: Hedge to EUTRAN inter RAT cell reselection happened while power off detach is in progress, discards it
Line 7328: RAT Mode change state is %s, Not processing Resel to EUTRA
Line 7378: Discarding G2N since NS required not to go to NR 
Line 7384: Discarding G2L since NS required not to go to LTE 
Line 7396: Discarding G2N since CELL_REJ was sent and PLMN search will come.
Line 7402: Discarding G2L since CELL_REJ was sent and PLMN search will come.
Line 7413: Discarding G2N since PLMN_RAT_CHANGE requested.(already sent GRR_SUSPEND_REQ)
Line 7419: Discarding G2L since PLMN_RAT_CHANGE requested.(already sent GRR_SUSPEND_REQ)
Line 7442: Entered Funtion mm_DecodeRrCellReselToEUtranMsg 
Line 7447: mm_CheckRrCellReselToEUtranOrNrAllowed Retured False as G2L Resel not possible
Line 7453: mm_CheckRrCellReselToEUtranOrNrAllowed Retured False as G2L Resel not possible
Line 7474: Clearing Cell Congestion flag
Line 7486: earfcn from RRC=%d  PcellID = %d 
Line 7497: RR set wrong cause value in redirection info. MM handle it as normal redirection
Line 7523: Entered Funtion mm_DecodeRrCellChgToEUtranMsg 
Line 7530: Power off detach is pending Hence discarding G2L CCO
Line 7551: RAT Mode change state is %s, Not processing CELL Change to EUTRA
Line 7578: earfcn from RRC=%d  PcellID = %d 
Line 7590: Clearing Cell Congestion flag
Line 7617: Entered Funtion mm_DecodeUrrcCellReselToEUtranReqMsg 
Line 7636: Power off detach is pending Hence discarding U2L RESELECTION
Line 7657: RAT Mode change state is %s, Not processing Resel to EUTRA req
Line 7668: MM_BLOCK_IRAT_DURING_CELL_REJECT flag=%d
Line 7685: Discarding U2L since NS required not to go to LTE or MO/MT call is on-progress 
Line 7695: earfcn from RRC=%d  PcellID = %d 
Line 7748: Power off detach is pending Hence discarding U2N
Line 7754: Power off detach is pending Hence discarding U2L
Line 7794: U2N redirection blocked, PLMN selection procedure will be initiated due to LAU or RAU reject
Line 7800: U2L redirection blocked, PLMN selection procedure will be initiated due to LAU or RAU reject
Line 7814: U2N redirection is discarded during Hedge Rat suspendion.
Line 7819: U2L redirection is discarded during Hedge Rat suspendion.
Line 7832: U2N redirection blocked, PLMN selection procedure will be initiated due to abnormal LAU failure
Line 7838: U2L redirection blocked, PLMN selection procedure will be initiated due to abnormal LAU failure
Line 7849: U2N redirection blocked, Saved PLMN selection procedure will be initiated
Line 7855: U2L redirection blocked, Saved PLMN selection procedure will be initiated
Line 7870: Discarding U2N since NS required not to go to NR 
Line 7880: Discarding U2L since NS required not to go to LTE 
Line 7935: Entered Funtion mm_DecodeUrrcCellReDirectToEUtranReqMsg 
Line 7945: Discarding U2L since NS required not to go to LTE 
Line 8057: Invalid Cause : URRC_CR_CSG_CELL_BARRED, CSG NOT SUPPORTED
Line 8088: Sending MMC Reselection Status = %d, bar timer : %d
Line 8107: Sending MMC CSG Cell PlmnId -> 0x%x 0x%x 0x%x, CsgId = 0x%x
Line 8111: No CSG CELL info in Reselecion CNF message
Line 8158: Earfcn=%d   PcellID=%d 
Line 8161: Selected PlmnId = 0x%x 0x%x 0x%x,
Line 8163: Sending MMC Reselection Req for HEDGE to LTE 
Line 8259: Selected PlmnId = 0x%x 0x%x 0x%x, Num of Frequencies %d
Line 8260: IsQRB = %d
Line 8262: Sending MMC Redirection  Req from HEDGE to LTE 
Line 8303: Sending MMC Reselection Req for HEDGE to LTE 
Line 8374: mm_DecodeMmPlmnRatChangeReq
Line 8383: Ignoring RAT change received from GMC, Current resumed Rat is same as Requested Rat 
Line 8394: GSM is Disabled
Line 8404: Converting SUSPEND Current RAT to NO RAT Suspension
Line 8425: 
 Cell Coverage Lost So Rat Change is Allowed  
Line 8432: 
 No Attach procedure is Running Rat Change is Allowed  
Line 8437: 
 Save The Message and Process After REL  Cnf  
Line 8445: BPLMN procedure is ongoing, so save the RAT change
Line 8463: Cross over of IRAT and MMC_SUSPEND_REQ occured, Ignore IRAT and proceed with SUSPENSION
Line 8482: RatMode = %s
Line 8529: 
 No handling of  mm_DecodeUrrcMmFemtoCellUpdCnfMsg
Line 8545: LAC = 0x  %x %x %x %x %x
Line 8603: Current cell is AT & T network
Line 8606: LAC Belong to AT&T FemtoCell
Line 8639: LTE info present in SIB 19 = %d in mm_DecodeUrrcMmLteRatInfoInd
Line 8646:  No LTE cell in neighbor. Giving up quick rollback to LTE..
Line 8689: In mm_SendUrrcMmIratStatusIndMsg .... Block LTE Measurements %d
Line 8697: Mm_UrrcIratStatusInd.GsmDisabled: %d and Mm_UrrcIratStatusInd.UmtsDisabled: %d 
Line 8739: mm_RrIratStatusInd.GsmDisabled: %d and mm_RrIratStatusInd.UmtsDisabled: %d 
Line 8768: In mm_SendRrMmIratStatusIndMsg .... EutranDisabled : %d, RAT : %d Block LTE Measurements %d,Capability changed: %d
Line 8909: RrcSearchMode = %d
Line 8933: RrcSearchMode = %d
Line 8949: Entered Funtion mm_DecodeUrrcInitialPlmnCnfMsg 
Line 8966: MCC Response status =%d 
Line 8968:  PlmnId = 0x%x 0x%x 0x%x,
Line 8970: Sending MMC UrrcInitialPlmnCnfMsg 
Line 8984: Entered Funtion mm_DecodeRrInitialPlmnCnfMsg 
Line 9002: MCC Response status =%d 
Line 9004:  PlmnId = 0x%x 0x%x 0x%x,
Line 9006: Sending RrInitialPlmnCnfMsg 
Line 9027: Making MM to Ready for Switch Off
Line 9099: 
Entering mm_DecodeRrMmSrvccHoCnf
Line 9109: 
Result : %d, RatInfo : %d
Line 9245: Ultra CSFB was triggered..
Line 9260: 
Unable To Send %s in mm_SendCcSrvccHoCompInd
Line 9271: Convert SRVCC HANDOVER CAUSE from AS to CC..
Line 9309: Unexpected Current RAT...
Line 9348: mm_DetermineCapaUpdate function NrSupportFlag [%d], NrModeChanged [%d]
Line 9349: LastRegRatMode [%d], NrCapaChangedFlag [%d]
Line 9632: MM/GMM will not send any regi message on this case. Need to send Registration indication to NS for MODE_UPDATE
Line 9637: LAU needed flag : %d, Cause : %d:GmmState : %d
Line 9638: RAU needed flag : %d, Cause : %d, NMO: %d
Line 9741: RegType : %d, CapaChange : %d
Line 9746: RegType After CS/PS Enabled Check : %d
Line 9818: [L2U] Dedicated Priority Info to URRC Duration=%d   StartTime=%d
Line 9825: num of GeranList=%d   num of Utra_tdd List=%d   num of Utra_fdd List=%d   num of EutraList=%d
Line 9883: [U2L] Dedicated Priority Info to MMC Duration=%d   StartTime=%d
Line 9889: num of GeranList=%d   num of Utra_tdd List=%d   num of Utra_fdd List=%d   num of EutraList=%d
Line 9910: Status = %d, TargetRat = %d in mm_DecodeUrrcMmRedirectionStatusInd
Line 9915: URRC_MM_REDIRECTION_STATUS_IND Discarded as Mode is 2G/3G/HEDGE only
Line 9977: MM_EmergencyMode : %d
Line 9993: [SRVCC] L2G SRVCC Handover Start!!
Line 9999: [SRVCC] Invalid L2G Handover type!!
Line 10013: [SRVCC] L2U SRVCC Handover Start!!
Line 10019: [SRVCC] L2U SRVCC + PS Handover Start!!
Line 10024: [SRVCC] L2U PS Handover Start!!
Line 10040: [SRVCC] Invalid L2G Handover type!!
Line 10080: MM will not handle AS Info in LTE RAT mode!! in mm_DecodeRrMmSCellAsInfoInd
Line 10093: PreviousBandId = %d, CurrentBandId = %d, NeedToUpdate = %d
Line 10094: PreviousFrequencyInfo = %d, CurrentFrequencyInfo = %d in mm_DecodeRrMmSCellAsInfoInd
Line 10098: Band or Frequency info is changed
Line 10129: Updating CSFB registries in MM 
Line 10166: Disabling EUTRA capability
Line 10183: Error  Case : EutranDisable Flag is False
Line 10190: As part of OPERATING MODE change EUTRA is Enabled
Line 10300: NMO(%d)  CSDomainAllowedLau(%d) PSDomainAllowedrau(%d) PDPInProg(%d) 
Line 10302:  RATChgInProg(%d) SMInProgress(%d) 
Line 10314: ATT SIM and ENS enabled. Do not Perform CS/PS registration
Line 10403: NEW and Old Modes are same
Line 10412: Mode change request is saved
Line 10529: ModeIndex: %d, RatMode: %d
Line 10537: mm_IsCurrentRatSupportedInMode: %d
Line 10594: mm_DecodeRrCandidateRplmnScanReq - %d s
Line 10600: mm_RedirectionStatusFromAS : %d
Line 10633: mm_DecodeUrrcMmReadyForNasRequestInd Saved PlmnAction will be performed 
Line 10638: mm_DecodeUrrcMmReadyForNasRequestInd Saved PlmnAction was empty 
Line 10716: ATT SIM and ENS enabled. Do not Perform CS/PS registration
Line 10772: Target Rat for QRB:%d (0:QRB_UMTS_TO_LTE,1:QRB_UMTS_TO_NR,2:QRB_MODE_UPDATE_UMTS_TO_NR, 3:QRB_NO_QRB)
Line 10788: Target Rat for QRB:%d (0:QRB_UMTS_TO_LTE,1:QRB_UMTS_TO_NR,2:QRB_MODE_UPDATE_UMTS_TO_NR, 3:QRB_NO_QRB)
Line 10878:  Indicate QRB Needed as TRUE to GMC in MMC SUSPEND CNF
Line 10932: 
ISR is Active so Reseting RRC EST cause
Line 10937: 
ISR is deactivated so Set RRC EST cause to Asn_interRAT_CellReselection
Line 10948: 
ISR is Active so Resetting RRC EST cause
Line 10953: 
ISR is deactivated so Sett RRC EST cause to Asn_interRAT_CellReselection
Line 10961: In case of G2U HO, we might don't get UNIT_DATA_IND. So, at this point, MM should let NS and PLMN
Line 11028: In L2U SRVCC and U2G CS Handover case we need to set IsSrvccFlg for G2L QRB here.
Line 11052: RAT MODE CHANGE complete received, Triggering LOC_UPD perform actions
Line 11066: RAT MODE CHANGE complete received, Triggering LOC_UPD perform actions
Line 11077: mm_HedgeRatResumeByMmc is %d, %d in mm_SendRrResumeRatReqMsg 
Line 11163: Stack suspension requested due to CS call on other stack, Ignore REJECT action if waiting for release
Line 11170: Standby Request Not sent GRR
Line 11192: Before performing release actions,Suspend is received due to CSCALL on other stack 
Line 11211: Set mm_PsConnectedInUmts and mm_CellCoverageLost
Line 11222: Changing GMM REL CNF action to LOCAL DETACH 
Line 11239: Changing GMM REL CNF action to LOCAL DETACH 
Line 11309: Clearing Cell Congestion flag
Line 11336: Entered Funtion mm_DecodeRrCellReselToNrMsg 
Line 11341:  mm_CheckRrCellReselToEUtranOrNrAllowed returned False As G2N resel not possible
Line 11349:   G2N resel not possible
Line 11371: Clearing Cell Congestion flag
Line 11403: Discard mm_DecodeMmc2G3GToNrRedirectionCnfMsg as there is no context exists
Line 11409: Entered Funtion mm_DecodeMmc2G3GToNrRedirectionCnfMsg, Result = %d 
Line 11440: Entered Funtion mm_DecodeUrrcCellReDirectToNrReqMsg 
Line 11452: Discarding U2N since NS required not to go to NR 
Line 11501: Entered Funtion mm_DecodeUrrcCellReselToNRReqMsg 
Line 11517: MM_BLOCK_IRAT_DURING_CELL_REJECT flag=%d
Line 11521: Power off detach is pending Hence discarding U2N RESELECTION
Line 11557: Discarding U2L since NS required not to go to LTE or MO/MT call is on-progress 
Line 11609: mm_SendRrCellReDirectToNrFailMsg : reason : %d, t_barred : %d 
Line 11615: U2N Redirection Failed. NeedCellIndAfterRelInd is set to TRUE.
Line 11635: 
Unable To Allocate memory : RAT is out of service
Line 11643: 
Displaying Message Contents: %s
Line 11664: 
Unable To Send %s in mm_SendRrCellReDirectToNrFailMsg
Line 11699: 
Displaying Message Contents: %s
Line 11741: Selected PlmnId = 0x%x 0x%x 0x%x,
Line 11745: Sending MMC Reselection Req for HEDGE to NR 
Line 11810: mm_SetH2NQrbOnModeUpdate : %d
Line 11859: 
Displaying Message Contents: %s
Line 11886: mm_SendUrrcCellReselToNRFailMsg : reason : %d, t_barred : %d 
Line 11908: 
Displaying Message Contents: %s
Line 11915: 
Unable To Allocate memory : RAT is out of service
Line 659: CC redial is now taken care of!
Line 1309: mm_HedgeRatResumeByMmc is %d and %d in mm_PreHandlerUrrcResumeRatReq
Line 2313: mm_ModeSelection_RrInitialised is set as MM_RAT_INITIALIZED	
Line 2106: Current HPLMN -> 0x%02X 0x%02X 0x%02X
Line 2109: Last Inserted HPLMN -> 0x%02X 0x%02X 0x%02X
Line 2116: NOTI what Sim changed to URRC
Line 2124: Last Umts HPLMN -> 0x%02X 0x%02X 0x%02X
Line 2137: mm_ModeSelection_RrcInitialised is set as MM_RAT_INITIALIZED  
Line 2158: Key is not updated, so let URRC use the old key!
Line 1845: Setting GMM_STANDBY 
Line 1743: GmmState(%d)	FunctionalState(%d) 
Line 1751: NW gave different LAI in TAU_ACCEPT
Line 1930: 
ISR is Active so Resetting RRC EST cause
Line 1935: 
ISR is deactivated so Sett RRC EST cause to Asn_interRAT_CellReselection
Line 1953: 
-------------------------mm_DecodeRrResumeRatCnfMsg----------------------------
Line 1893: GmmState(%d)	FunctionalState(%d) 
Line 5199: Reset MM_CS_CALL_RESUMED_FLAG
Line 5212: Resetting mm_DsIgnoreNewCellInd on suspenstion of edge rat
Line 5230: Cross over of IRAT and MMC_SUSPEND_REQ occured, Ignore IRAT and proceed with SUSPENSION
Line 5239: Discarding GMM Service Request due to MMC suspend Request
Line 7052: 
-------------------------mm_ProcessReselectToHedgeCnf ----------------------------
Line 7099: Critical Error: RAT=%d
Line 9711: Set LAU needed
Line 9720: CELL_IND is changed into UNIT_DATA_IND to perform RAU during PMM_Connected.
Line 9657: 1. RAU needed flag : %d
Line 9664: Release PS signalling connection before RAU procedure initiation.
Line 9669: RAU procedure 'interupts' service request procedure...
Line 9680: 2. RAU needed flag : %d
Line 9685: MM/GMM will not send any regi message on this case. Need to send Registration indication to NS for MODE_UPDATE
