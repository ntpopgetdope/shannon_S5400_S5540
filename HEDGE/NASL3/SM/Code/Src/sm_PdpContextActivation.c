Line 115: sm_ExtractMCC(0x%x)
Line 172: DualPdpReq -> %d
Line 176: V42 Bis Test Mode is Enabled
Line 177: Received  Data Comp type -> %d
Line 179: Modified Data Comp type -> %d
Line 183: V42 Bis Test Mode is NOT Enabled Or Rat is not GSM
Line 184: Received  Data Comp type -> %d
Line 199: Selected PdpInstance -> %d
Line 217: ReqType -> %d
Line 253: Rejecting GAPI's PDP Activation in sm_DecodeSmRegPdpActivationReqMsg! IMS PDP reject because of MCC(0x505)!!
Line 271: Rejecting GAPI's PDP Activation in sm_DecodeSmRegPdpActivationReqMsg ! No more resource Available !!
Line 283: Rejecting GAPI's PDP Activation in sm_DecodeSmRegPdpActivationReqMsg !
Line 297: PDP Activation for this NSAPI already Exists, Sending CNF back to CNS State %d
Line 316: PDP Activation for this TID  already Exists, Sending CNF back to CNS sm_CheckForExistingSession...
Line 324: sm_CheckForExistingSession... False...
Line 354: Rejecting GAPI's PDP Activation in sm_DecodeSmRegPdpActivationReqMsg ! Invalid TI requested, Already Used !!
Line 361: Rejecting GAPI's PDP Activation in sm_DecodeSmRegPdpActivationReqMsg !
Line 476: Sending GS19 - PDP Context Request
Line 477: GS19.dwContextId -> %d
Line 478: GS19.dwAssocContextId -> 0x%x
Line 479: GS19.ucNSAPI -> %d
Line 480: GS19.ucSAPI -> %d
Line 481: GS19.ucOrdinal -> %d
Line 482: GS19.ucInitiator -> %d
Line 483: GS19.szApn (size:%d) -> 
Line 515: Rat(%d) AgbLuFlag(%d)
Line 533: Invalid LLCSapi....so do local deactivation.
Line 547: Wrong cause in GMMSM_TRIGGER_IND (%d)
Line 633: Invalid EstablismentReqInitiator (%x) in sm_SendGmmSmEstablishReqMsg. Aborting Operations.!!
Line 746: SM_DEACTIVATION_ESTAB received but already sent NETWORK_PDP_DEACTIVATION_ACC, ignore sending PdpDeactivationReq!!
Line 752: SM_DEACTIVATION_ESTAB received in wrong state in sm_DecodeGmmSmEstablishCnfMsg,  Message Ignored!!
Line 760: Invalid EstablismentReqInitiator,  Message Ignored!!
Line 768: SM Could not find a Pdp Instance Matching the Nsapi (%x) that GMM has sent. Rejecting GAPI's PDP Activation in sm_DecodeGmmSmEstablishCnfMsg. Message Ignored !!!
Line 823: Primary Sid -> %d 
Line 831: SM Could not find a Pdp Instance Matching the Nsapi (%x)
Line 835: 2nd Sid -> %d PrimaryInstance = %d Nsapi = %d
Line 875: ClientMailBoxId -> 0x%02X
Line 876: HeaderCompType -> 0x%02X, DataCompType -> 0x%02X
Line 877: BufferStartOffset -> 0x%02X, BufferOverheadLength -> 0x%02X
Line 878:  IP Version -> 0x%02X
Line 879:  PDP Type -> 0x%02X
Line 883:  Dual Sid -> 0x%02X
Line 962: SmNASRelVersion  -> %d
Line 1009: Invalid PdpInstance (%x); Apn Pointer not found. sm_SendPdpActivationReqMsg
Line 1028: Invalid PdpInstance (%x); ProtCfgOpts Pointer not found. sm_SendPdpActivationReqMsg
Line 1069:  LlcSapi -> %d
Line 1071: Neogtiated Qos Data  -> ...
Line 1134: HeaderCompType -> 0x%02X, DataCompType -> 0x%02X
Line 1135: RABM Confirmed Resource Allocation, Sending Confirmation to GAPI in sm_DecodeRabmSmPdpActivationRspMsg
Line 1147: No Action
Line 1153: Mesage Received in sm_DecodeRabmSmPdpActivationRspMsg for Rat change. No Need to do anything
Line 1160: Mesage Receivedin Wrong SM State, Ignoring Message in sm_DecodeRabmSmPdpActivationRspMsg
Line 1165: Unknown NSAPI Given By RABM in sm_DecodeRabmSmPdpActivationRspMsg, Ignoring Message
Line 1254: Sending Cnf to AP as well as MMC
Line 1265: Deactivating PDP due to Cause:- %s in sm_DecodePdpActivationAcceptMsg
Line 1297: Sending Status MSG due to Cause:- %s in sm_DecodePdpActivationAcceptMsg
Line 1307: Incorrect SM State in sm_DecodePdpActivationAcceptMsg, Sending STATUS MSG, Cause = (%s)
Line 1314: Unknown PdTi (%x)  in sm_DecodePdpActivationAcceptMsg
Line 1389: Instance AgbLuFlag = 0x%x
Line 1394: Instance is initiated at HEDGE.. 
Line 1455:  LlcSapi -> %x,ClientMailBoxId -> %x
Line 1458: HeaderCompType -> 0x%02X, DataCompType -> 0x%02X
Line 1459: BufferStartOffset -> 0x%02X, BufferOverheadLength -> 0x%02X
Line 1521: SNDCP Confirmed Resource Allocation, Sending Confirmation to GAPI in sm_DecodeSnSmPdpActivationRspMsg
Line 1524: HeaderCompType -> 0x%02X, DataCompType -> 0x%02X
Line 1547: Mesage Received in sm_DecodeRabmSmPdpActivationRspMsg for Rat change. Nothing needs to be done
Line 1553: Rejecting SNDCP Response Due to Incorrect SM State in sm_DecodeSnSmPdpActivationRspMsg
Line 1558: Unknown NSAPI (%x) Given By SNDCP in sm_DecodeSnSmPdpActivationRspMsg
Line 1655: Unexpected PdpType : %d
Line 1660: PdpAddressLength is zero
Line 1669: [SM Cause2] Cause2 =0x%x 
Line 1717: LlcSapi -> %d
Line 1718: Protocol Config. Options Length -> %d
Line 1722: Protocol Config. Options -> ...
Line 1726: PdpAddress Length -> %d
Line 1730: PdpAddress  -> ...
Line 1740: Sending GS15 - PDP Context Activation
Line 1741: GS15.dwContextId -> %d
Line 1824: GMM Requesting SM to Try Other RAT. Nothing needs to be done by SM, GMM will re-try....
Line 1835: Retrying for GMM Est Req.....
Line 1841: Rejecting GAPI's Req for PDP Activaiton in sm_DecodeGmmSmEstablishRejMsg
Line 1859: SM Trying to Modify PDP in sm_DecodeGmmSmEstablishRejMsg.
Line 1906: Starting either SM_REC_PDPINST or SM_DEACT_REC_PDPINST Timer (Instance:%d, Retrial Count:%d)
Line 1914: SM Trying to Deactivate PDP in sm_DecodeGmmSmEstablishRejMsg.
Line 1942: LTE RAT !!! Send Cnf to Gapi This is the Case we does not send PDP DEACT REQ to Network (%d) 
Line 1955: GMM_EST_REJ Arrived in Incorrect SM State in sm_DecodeGmmSmEstablishRejMsg. Ignoring Message...
Line 1963: SM Could not find a Pdp Instance Matching the Nsapi that GMM has sent. Rejecting GAPI's PDP Activation in sm_DecodeGmmSmEstablishRejMsg. Ignoring Message!!!
Line 2026: Protocol Config. Options Length -> %d
Line 2030: Protocol Config. Options -> ...
Line 2048: Sending GS18 - PDP Context End
Line 2049: GS18.dwContextId -> %d
Line 2050: GS18.wTermCode -> %d
Line 2051: GS18.ucInitiator -> %d
Line 2146: PdpType %d 
Line 2185: Stack = %d.
Line 2196: Orange Requirement
Line 2225: NW sending Reject for Activated PDP.. need to deactivate locally....
Line 2259: Sending STATUS MSG, Cause = (%s) , Incorrect SM State, in sm_DecodePdpActivationRejMsg
Line 2268: Unknown PdTi (%x)  in sm_DecodePdpActivationRejMsg, Sending Status Message
Line 2319: Selected PdpInstance -> %d
Line 2323: Primary NSAPI State = %s  in  sm_DecodeSmRegSecPdpActivationReqMsg
Line 2341: BCM Violation
Line 2369: Seconday PDP Activation Rejected . Incorrect Primary NSAPI SM State in sm_DecodeSmRegSecPdpActivationReqMsg
Line 2376: Rejecting GAPI's Secondary PDP Activation Req. GAPI Has Used Up All Allowed Instances in sm_DecodeSmRegSecPdpActivationReqMsg
Line 2388: Rejecting GAPI's Secondary PDP Activation. Ti Already Used in sm_DecodeSmRegSecPdpActivationReqMsg
Line 2394: Rejecting GAPI's Secondary PDP Activation Req Rat Mode Change in  Progress: sm_DecodeSmRegSecPdpActivationReqMsg
Line 2401: Seconday PDP Activation Rejected. Unrecognised Primary NSAPI (%x) in sm_DecodeSmRegSecPdpActivationReqMsg
Line 2475:  PrimaryNsapi %d ,LinkedTi -> 0x%x
Line 2493: Invalid PdpInstance (%x); Tft Pointer not found. sm_SendSecPdpActivationReqMsg
Line 2512:  LlcSapi -> %d ,LinkedTi -> %d
Line 2514: Neogtiated Qos Data  -> ...
Line 2584: Displaying Qos Sent by Network in sm_DecodePdpActivationAcceptMsg
Line 2590: sm_CheckQosIe Err
Line 2596: Qos Accepted in sm_DecodeSecPdpActivationAccMsg
Line 2611: 
------------------ Displaying Accepted Qos Settings Sent By the Network & Modified values of Qos Due to Conversion -----------------
Line 2623: LlcSapi -> %d
Line 2635: sm_CheckRadioPriorityIe Err
Line 2706: RABM has already Confirmed, so inform GAPI
Line 2722: Deactivating PDP due to Cause:- %s in sm_DecodePdpActivationAcceptMsg
Line 2732: Sending Status MSG due to Cause:- %s in sm_DecodePdpActivationAcceptMsg
Line 2740: Incorrect SM State in sm_DecodePdpActivationAcceptMsg, Sending STATUS MSG, Cause = (%s)
Line 2747: Unknown PdTi (%x)  in sm_DecodeSecPdpActivationAccMsg
Line 2844: Primary Nsapi -> %d, Nsapi -> %d,  LlcSapi -> %d 
Line 2845: Nsapi -> %d
Line 2846: TiValue -> %d
Line 2847: LlcSapi -> %d
Line 2848: Neogtiated Qos Data  -> ...
Line 2850: Protocol Config. Options Length -> %d
Line 2854: Protocol Config. Options -> ...
Line 2864: Sending GS15 - PDP Context Activation
Line 2865: GS15.dwContextId -> %d
Line 2952: sm_CheckCauseIe Err
Line 2971: SM got Reattempt IE :%d
Line 3003: Sending STATUS MSG, Cause = (%s),  Incorrect SM State, in sm_DecodeSecPdpActivationRejMsg
Line 3009: Unknown PdTi (%x)  in sm_DecodeSecPdpActivationRejMsg
Line 3084: Protocol Config. Options Length -> %d
Line 3088: Protocol Config. Options -> ...
Line 3101: Sending GS18 - PDP Context End
Line 3102: GS18.dwContextId -> %d
Line 3103: GS18.wTermCode -> %d
Line 3104: GS18.ucInitiator -> %d
Line 3192: APN size is over  100 so it will be max value to SM_APN_LENGTH 
Line 3214: PCO size is over  100 so it will be max value to SM_PROT_CFG_OPTS_LENGTH 
Line 3230: Checking For Collision Scenarios in sm_DecodeNetworkPdpActivationReqMsg..... [24.008]-6.1.3.1.5
Line 3240: Checking for Network Initiated PDP Activations for Already Activated PDPs (Matching APN, PDP Address & Pdp Type) in sm_DecodeNetworkPdpActivationReqMsg...... [24.008]-6.1.3.1.5
Line 3255: Rejecting Network's PDP Activation Due to a Collision in sm_DecodeNetworkPdpActivationReqMsg...... [24.008]-6.1.3.1.5!
Line 3273: All Instances Are Used Up in sm_DecodeNetworkPdpActivationReqMsg
Line 3279: NetworkPdpActivationReqMsg ignored as per TC 45.2.4.2-1
Line 3286: Incorrect TI sent by the Network, Message Ignored...... [24.008]-8.3.2
Line 3386: LinkedTiLength-> %d
Line 3397: LinkedTi after shift -> %d
Line 3428: SM Could not find a Pdp Instance Matching the Nsapi (%x)
Line 3479: All Instances Are Used Up in sm_DecodeNetworkSecPdpActivationReqMsg
Line 3486: Incorrect TI = %d sent by the Network, Message Ignored...... [24.008]-8.3.2 
Line 3863: SEC PDP Primary PdpInstance -> %d /InstanceFound -> %d/
Line 3871: SEC PDP Instance -> %d/ Cid %d
Line 3910: TiValue -> %d
Line 3912: PrimaryNsapi -> %d
Line 3913: TftLength -> %d
Line 3914: Tft-> ...
Line 3916: QoS from NW -> ...
Line 3921: PCO Length -> %d
Line 3925: PCO  -> ...
Line 3945: Sending GS15 - PDP Context Activation
Line 3946: GS15.dwContextId -> %d
Line 4014: Ti -> %d, TiOriginator -> %d 
Line 4022: ProtConfigOptLen is greater than max length. Setting it to 0 to prevent out of bounds issue. 
Line 4039: Rejecting GAPI's request, RAT Change in progress in sm_DecodeSmRegNetworkPdpActivationRejMsg !
Line 4074: Ti -> %d, TiOriginator -> %d 
Line 4082: ProtConfigOptLen is greater than max length. Setting it to 0 to prevent out of bounds issue. 
Line 4099: Rejecting GAPI's request, RAT Change in progress in sm_DecodeSmRegNetworkSecPdpActivationRejMsg !
Line 4476: State = %d
Line 4477: AgbLuFlag = 0x%x
Line 4488: IU_MODE_VALID_CONTEXT CONTEXT Valid For UMTS.
Line 4496: LlcSapi = %d
Line 4502: AGB_MODE_VALID_CONTEXT  Valid For GPRS.
Line 4553: S1 Mode supported. Setting Traffic class to Interactive or Background ..
Line 4572: PDP Length %d NotIncludeIpAdd %d
Line 4587: No Ip Address Requested 
Line 4595: PDP address field should be empty from REL-10. ReqType =%d
Line 4599: ONESKU. ReqType =%d
Line 4604: No Ip Address Requested 
Line 4614: AP IP Len =%d/CP IP Len =%d
Line 4670: sm_StoreSecReqDetails PcoLength %d
Line 4743: Error in Lengths of Data which should be in the following range:  0 < PdpAddrLen <= 16, 0 <= ApnLength <= 100, 0 <= ProtCnfOptionsLen <= 251
Line 4786: GAPI requested 0 kbps for  both UL and DL bit rate .. rejecting GAPI request
Line 4829: Checking Instance -> %d
Line 4879: Checking for a Match Between Any Pending PDP Activation By MS <Pdp Address and APN> and Network's ones......
Line 4886: Checking Instance -> %d
Line 4895: PDP Addresses Match...
Line 4904: APns Match...
Line 4909: APns Do NOT Match...
Line 4914: APns Do NOT Match...
Line 4919: PDP Addresses Do NOT Match...
Line 4924: PDP Addresses Do NOT Match...
Line 4930: There were no Instances of Pending PDP Activations By MS
Line 5074: Establish Request Initiator -> %s
Line 5113: GMM Establish Request Cause -> %s
Line 5151: GAPI Requested PDP Type -> %s
Line 5206: Network PDP Type -> %s
Line 5249: Radio Priority -> %s
Line 5295: Invalid Packet Flow Id (%x) used in sm_DisplayPacketFlowId
Line 5300: Packet Flow Id -> %x
Line 5309: Max Bit Rate For Uplink  -> %s
Line 5348: Activation Cause -> %s
Line 5367:  TI -> %x,  TI Originator -> %s 
Line 5370:   LlcSapi -> %x, Client MailBox Id -> %x
Line 5372: Given PdpAddress Length -> %x
Line 5373: Given PdpAddress  -> ...
Line 5375: 
------------------------ Displaying Given Qos Data -----------------
Line 5377: 
------------------------ Displaying Given MinQos Data -----------------
Line 5395:  TI -> %x, TI Originator -> %s,PrimaryNsapi -> %x
Line 5398: Given Traffic Flow Template Length -> %x
Line 5399: Given Traffic Flow Template  -> ...
Line 5401: Sndcp Buffer Overhead Length -> %x
Line 5402: Sndcp Buffer Start Offset -> %x
Line 5403: 
Displaying Given Qos Data  -> ...
Line 5405: 
Displaying Given MinQos Data  -> ...
Line 5460: GS15.dwIpAddress -> %d.%d.%d.%d
Line 5465: GS15.strIpV6Address ->
Line 5472: GS15.dwIpAddress -> %d.%d.%d.%d
Line 5475: GS15.strIpV6Address ->
Line 5483: GS15.dwDns1 -> %d.%d.%d.%d
Line 5490: GS15.dwDns2 -> %d.%d.%d.%d
Line 5496: GS15.strIpV6Dns1 ->
Line 5503: GS15.strIpV6Dns2 ->
Line 5537: sm_CheckCauseIe Err
Line 5564: Protocol Config. Options Length -> %d
Line 5565: Protocol Config. Options -> ...
Line 5576: SM got Reattempt IE :%d
Line 5632: PDP Address size is over  MAX so it will be max value to MAX 
Line 5647: All Pending MS Requested Activations are of the Same PDP Type.. [24.008]-6.1.3.1.5
Line 5652: Collision Detected ! Network PDP Activation Received Before Reception of PDP Activation Resposne From the Network for the Previous MS Request..... [24.008]-6.1.3.1.5
Line 5653: Checking Ability to Match MS Requested PDP Address and APNs With Networks'..... [24.008]-6.1.3.1.5
Line 5657: MS is Able to Check Whether MS Requested PDP Address and APNs Match Networks' Requested Ones....... [24.008]-6.1.3.1.5
Line 5663: MS Requested PDP Address and APNs Match Networks' Requested Ones. Ignoring Message...... [24.008]-6.1.3.1.5
Line 5668: MS Requested PDP Address and APNs Do NOT Match Networks' Requested Ones. Rejecting Network Activation...... [24.008]-6.1.3.1.5
Line 5678: PtrApn is NULL or  PrtPdpAddr is NULL
Line 5689: MS is Unable to Check Whether MS Requested PDP Address and APNs Match Networks' Requested Ones. Rejecting Network's PDP Activation...... [24.008]-6.1.3.1.5
Line 5691: Rejecting Network's PDP Activation Due to a Collision in sm_DecodeNetworkPdpActivationReqMsg...... [24.008]-6.1.3.1.5!
Line 5705: All Instances Are Used Up in sm_DecodeNetworkPdpActivationReqMsg
Line 5714: For Dynamic Addressing, No Collision is Detected. Upto Network Implementation, ...... [24.008]-6.1.3.1.5
Line 5720: Pending MS Requested Activations are of both types: Static and Dynamic. Implementation is to Reject Network's PDP Activation...... [24.008]-6.1.3.1.5
Line 5725: Error: No Pending MS Requested Activations should be in ACTIVE State..... [24.008]-6.1.3.1.5
Line 5730: No Collisions Detected...... [24.008]-6.1.3.1.5
Line 5875: PDP Address size is over  MAX so it will be max value to MAX 
Line 5897: Found a Match, Instance -> %d, Locally Deactivating it
Line 5951: Sending GS19 - PDP Context Request
Line 5952: GS19.dwContextId -> %d
Line 5953: GS19.dwAssocContextId -> 0x%x
Line 5954: GS19.ucNSAPI -> %d
Line 5955: GS19.ucSAPI -> %d
Line 5956: GS19.ucOrdinal -> %d
Line 5957: GS19.ucInitiator -> %d
Line 5958: GS19.szApn (size:%d) -> 
Line 5971: PtrPCO or PtrApn or PtrPdpAddr is NULL
Line 5982: Checking for Duplicated Ti
Line 5990: Found Matching Ti already in Use
Line 5992: Matching TIs means that SM has to Locally De-activate this Session and Activate Again when Deactivate CNF is received...... [24.008]-8.3.2
Line 6188: sm_CheckQosIe Err
Line 6194: Qos Accepted in sm_DecodePdpActivationAcceptMsg
Line 6224: LlcSapi -> %d
Line 6237: sm_CheckRadioPriorityIe Err
Line 6279: Memory allocation failed... returning
Line 6289: Modified Pdp Address -> ...
Line 6299: changed Pdp Address -> ...
Line 6310: Unknown Pdp Address Length %d 
Line 6315: Pdp Address -> ...Len %d
Line 6332: User Requested Dynamic PDP, but Network Sent No PDP Address -> Rejecting PDP Activation
Line 3527: Unexpected PdpType : %d
Line 3561: TiValue -> %d
Line 3563: PdpAddress Length -> %d
Line 3567: PdpAddress -> ...
Line 3571: Apn Length -> %d
Line 3575: Apn -> ...
Line 3579: PCO Length -> %d
Line 3583: PCO -> ...
Line 3624: Sending GS15 - PDP Context Activation
Line 3625: GS15.dwContextId -> %d
Line 5794: All Instances Are Used Up (1); in sm_DecodeNetworkPdpActivationReqMsg
Line 5815: PdpAddressLength ,ApnLength values are out of bounds 
Line 6054: Prot Cfg Opts Length -> %d
Line 6063: BcmParameter -> %d
Line 6069: Protocol Config. Options -> ...
Line 6112: Cause = 0x%x, PDPtype =0x%x SendPdpType 0x%x
Line 6123: Setting SIPC Dual PDP support 
Line 6131: Stopping SIPC Dual PDP support 
