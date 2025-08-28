Line 132: Initialisation of <RoutingAreaUpdate>, InitType=%d
Line 228: If T3323  is expired and UE comes back to NMO1, RAU type should be set as combined LA/RA updating with IMSI attach(0x02)
Line 233: If T3323  is expired and UE comes back to NMO1, RAU type should be set as normal RAU updating (0x00)
Line 245: After recovery from OOS, RAU type should be set as combined LA/RA updating with IMSI attach(0x02), previousCell no service flag = %d 
Line 257: If ISR is activated  in NMO1, RAU type should be set as combined LA/RA updating with IMSI attach(0x02)
Line 265: Required 'update type' -> Periodic updating
Line 281:  Required 'update type' -> RA updating (%s) 
Line 300: Required 'update type' -> RA updating (MM_MOBILE_CLASS_C_PS)
Line 314: If T3423 starts after T3412expiry, RAU type should be set as combined LA/RA updating with IMSI attach(0x02)
Line 319: If T3423 starts after T3412expiry, RAU type should be set as normal RAU updating (0x00)
Line 372: Network operation mode change from %s to MM_NETWORK_MODE_1... 
Line 375: Required 'update type' -> combined RA/LA updating with IMSI attach
Line 383: Required 'update type' -> combined RA/LA updating
Line 398: MM in MM_LOC_UPD_INITIATED due to previous combined RAU procedure...
Line 413: Required 'update type' -> %s
Line 422: Required 'update type' -> RA updating (CS connection already exists)
Line 468: Periodic RAU procedure to update both LA and RA (i.e. CS and PS domain)
Line 475: Periodic RAU procedure to update RA only (i.e. PS domain)
Line 534: Ongoing proc on the other Stack: %s, Don't start another CS/PS sig
Line 539: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 549: GMM is in Suspended state, So RAU should not be triggered. Setting RAU Needed flag
Line 578: RAU Req cannot be performed during T3346 running..
Line 584: RAU is not processed
Line 637: RAU procedure with combined type last_update_is_not_combined is FALSE
Line 644: RAU procedure with combined type last_update_is_not_combined is TRUE
Line 656: RAU procedure with Update Type of %s not initiated due to %s 
Line 696: GMM_GSM_CELL_UPD_REQD_FOR_DTM   set to FALSE
Line 777: %s shall be used for RAU procedure
Line 1446: RAU_REQUEST message contents:
Line 1451: Update type -> %s
Line 1472: MS Radio Access Capability ->
Line 1491: Requested READY timer value (GPRS Format) -> %02X
Line 1509: DRX parameter ->
Line 1533: TMSI status -> MS performing a combined RAU and no valid TMSI is available
Line 1547: MS Network Capability ->
Line 1589: PtmsiType = %d
Line 1594: HcommonNasRelVersion = %d
Line 1652: RAU_ACCEPT discarded due to semantically incorrect contents:
Line 1655: < 'RA updating' or 'Periodic updating' (for RA updating only) requested >
Line 1658: < but update result of 'RA updated' and GMM cause IE is present >
Line 1661: Processing RAU_ACCEPT to get PS service eventhough it's NW issue
Line 1674: RAU_ACCEPT discarded due to semantically incorrect contents:
Line 1677: < 'combined RA/LA updating' or 'combined RA/LA updating with IMSI attach' requested >
Line 1680: < but update result of 'RA updated' and GMM cause IE not present >
Line 1685: Update result is mismatched but bypass it to cover TE script error
Line 1702: RAU_ACCEPT discarded due to semantically incorrect contents:
Line 1705: < 'combined RA/LA updating' or 'combined RA/LA updating with IMSI attach' requested >
Line 1708: < but update result of 'RA updated' and abnormal GMM cause IE is present >
Line 1743: RAU_ACCEPT discarded due to integrity conditions failure: 4.1.1.1.1 @ 24.008
Line 1774: Force to standby -> Force to standby indicated
Line 1781: Force to standby -> Force to standby not indicated
Line 1807: Periodic RA update timer -> %02X
Line 1820: Periodic RA update timer will be last received value-> %02X
Line 1842: Routing area identification ->
Line 1855: ERROR: RAU_ACCEPT RAI IE does not match RAI of current cell ->
Line 1875: P-TMSI signature ->
Line 1881: P-TMSI signature -> NOT included
Line 1898: Allocated P-TMSI ->
Line 1905: Allocated P-TMSI -> NOT included
Line 1924: MS identity ->
Line 1934: MS identity -> NOT included
Line 1953: Network has Sent NPD-U List. Attempting to Get SNDCP's Version of this List....
Line 1984: List of Receive N-PDU Numbers -> NOT included
Line 2015: Negotiated READY timer value -> %02X
Line 2021: Negotiated READY timer value -> NOT included
Line 2046: GMM cause -> %s
Line 2052: GMM cause -> NOT included
Line 2069: mm_RauAccCheckAndSetMSInfoIe Value(utran-%d)(Eutran-%d)
Line 2109: T3302 value -> %02X
Line 2133: T3302 value -> NOT included; Setting default value 
Line 2160: T3323 value -> %02X
Line 2166: T3323 value -> NOT included
Line 2192: Cell Notification IE (GSM only) included by SGSN to indicate the ability to support Cell Notification
Line 2199: Cell Notification IE (GSM only) NOT included by SGSN
Line 2221: Assigned GMM_T3319...
Line 2246: Equivalent PLMNs ->
Line 2253: Equivalent PLMNs -> NOT included
Line 2281: PDP context status ->
Line 2290: PDP context status -> NOT included
Line 2320: Network Sent Emergency List !!!
Line 2329: Emergency list length is 0 or more than 16, %d
Line 2335: Emergency List ptr is NULL!!!
Line 2343: isMccChanged : %d, isEmerNumberBlank : %d, mm_GetLastSentMcc : 0x%x
Line 2375: Set TbfRelAction to MM_COORD_TBF_REL_ACTION
Line 2380: Perform TBF release action in case of RAU complete is not sent
Line 2441: Resetting values in mm_DecodeRauAccMsg
Line 2526: Update result -> %s
Line 2544: NewMCC : 0x%x, OldMCC : 0x%x
Line 2640: NetworkFeatureSupport IE value received is: %d 
Line 2645: NetworkFeatureSupport IE not  received
Line 2656: T3312 Extended value received is: %d seconds
Line 2663: DCN Id IE Valid: %d 
Line 2816: SendRauCompleteMsg = %s   |||   SendNPduNumbersIe = %s
Line 2850: NwExtUtbf= %d
Line 2923: Re-initiation of the Aborted GRPS Detach Procedure....
Line 2987: skip to send Reg_ind_status at this point, and handle it after LU proc
Line 3034: NwExtUtbf= %d
Line 3058: MM_GPRS_RAU_COMPLETE_TBF_REL_ACTION set
Line 3157: mm_ExtractMCC =%d
Line 3208: SM informed of regained radio coverage....
Line 3267: QRB state:%s
Line 3291: FOP is On so we Can Send SM Data Directly
Line 3339: mm_SendRauCompleteMsg:EutranInterRAtInfo(%d) UTRANInterRatInfo(%d)
Line 3356: List of Receive N-PDU Numbers ->
Line 3357: Length -> %02X
Line 3358: Value  ->
Line 3366: EutranInterRAtInfo set in RAU complete Msg...
Line 3374: Eutran inter RAT handover information length shall not be over 255 octets..
Line 3391: UtranIratInfo set in RAU complete Msg...
Line 3399: Utran inter RAT handover information length shall not be over 248 octets..
Line 3435: LLGMM_UNITDATA_REQ Cipher = %s
Line 3437: PduId -> %04X
Line 3460: PduId -> %04X
Line 3492: Processing RAU Accept Cause
Line 3494: Cause = %s
Line 3596: RAU_REJECT discarded due to semantically incorrect contents:
Line 3599: < 'RA updating' or 'Periodic updating' requested >
Line 3602: < but network responded with RAU_REJECT containing an abnormal GMM cause value >
Line 3613: RAU_REJECT discarded due to semantically incorrect contents:
Line 3616: < 'combined RA/LA updating' or 'combined RA/LA updating with IMSI attach' requested >
Line 3619: < but network responded with RAU_REJECT containing an abnormal GMM cause value >
Line 3660: NetworkFeatureSupport reset on RAU reject From network
Line 3664: Power off detach is pending Hence discarding RAU retrails
Line 3678: Cause #25 received with out integrity protection, descard reject message
Line 3733: GMM cause -> %s
Line 3742: Force to standby -> Force to standby indicated
Line 3747: Force to standby -> Force to standby not indicated
Line 3814: Perform TbfRelAction, MM_COORD_TBF_REL_ACTION
Line 3872: Feature Fatal Reject Recovery is not enabled.
Line 3905: Regi status ind will be sent later
Line 3913: mm_GetLocUpdRejCause =%d
Line 4058: Change the Cause = %s (%x)
Line 4271: Invalid Cause : MM_NOT_AUTHORISED_FOR_CSG, CSG NOT SUPPORTED
Line 4313: RegistrationNeeded =%d
Line 4609: Serving cell RAI : Stored RAI
Line 4614: GPRS update status -> %s
Line 4676: Rau Request Type is Combined but Rau Upd Result is RA Update only. -> Keep GmmUpdateStatus and GPRS_ATTACH_FLG.
Line 4824: pkthndIsUlTrf= %d
Line 4825: Prev: Uldata	NSAPI 5= %d, NSAPI 6=%d
Line 4826: Current: Uldata  NSAPI 5= %d, NSAPI 6=%d
Line 4857: FOR -> Follow-on request pending
Line 4861: We will not set FOR!!!
Line 4911: RAU Req will be delayed during Manual PLMN searching..(for FT TEST)
Line 4926: RAU is already pended, dont send DRX again and Wait for MPLMN completion
Line 4935: RAU REQ is not triggered since MM has sent a RESEL_HOLD to GRR
Line 4959:  Inside mm_PerformRoutingAreaUpdate() function, PrevCSAD = %d, CurrentCSAD = %d
Line 4971: RAU update type -> %s cannot be performed since MM_ALLOW_PS_REGISTRATION is set to FALSE
Line 4975: RAU Type Before Domain Restrictions analysis %d
Line 4989: DSAC for CS and PS are not barred
Line 4992: Previous update is not combined
Line 4997: Previous update is combined
Line 5002: RAU Type After Domain Restrictions analysis %d
Line 833: (PREVENTION) When setting CSMT flag, we will set FOR in RAU (1411591)
Line 867: GPRS Key Set Identifier (KSI) -> %d
Line 877: Invalidating GMM CKSN for CRC Failure in GSM Only Mode
Line 884: GPRS Cipher algo(%d), GmmCksm(%d) .... ALGO NOT PRESENT
Line 889: GPRS ciphering key sequence number -> %d
Line 916: Old routing area identification @ Eutran ->
Line 924: Old routing area identification @ SIM ->
Line 959: Old P-TMSI signature....
Line 971: Old P-TMSI signature....
Line 1001: P-TMSI @ EUtran ->
Line 1015: P-TMSI @ SIM->
Line 1079: Supported Codec Length is 0
Line 1123: UE Network Capability ->
Line 1140: ADD P-TMSI->
Line 1153: ADD RAU->
Line 1175: voice domain Pref->
Line 1223: 
Displaying Message Contents: %s
Line 1274: 
Displaying Message Contents: %s
Line 1318: 
Displaying Message Contents: %s
Line 1319: Cipher State -> %s
Line 1320: PduId -> %04X
