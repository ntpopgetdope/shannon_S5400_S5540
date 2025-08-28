Line 430: ------------------------- SM TASK ----------------------------
Line 475: [Test Code] ....SsCurrentStackId =%d
Line 496: Recieved Message has an Error
Line 510: NULL pointer in sm_Task
Line 516: Processing the saved SM PDP message
Line 678: sm_V42BisTestMode is %d
Line 705: Scratch Pad Instance -> %d
Line 748: HcommonRegNasRel =>%d/SmNASRelVersion => %d
Line 798: SmCurrentStackId := %d
Line 975: Saving the message in SM
Line 995: Invalid TI value received
Line 1016: ERROR -> Unused Message number: %x !!!
Line 1020: %s
Line 1029: Displaying Received Message Contents:
Line 1042: ERROR -> Unknown Message : %x !!!
Line 1061: Message 0x%x Length is too short. Length =  %d !!!
Line 1114: sm_SendNsDmEventToNS.....SessionNumber= %d, Timer=%d , Event =%d
Line 1152: Sending Message ...... 
Line 1244: Attempting to Write to State Using Invalid State (%x) in sm_SetState
Line 1274: SM Initialisation State -> SM_NOT_INITIALISED -> All Messages except SMREG_INIT_REQ will be Ignored.. 
Line 1378: This is Some other Primary PDP PdpInstance (%x) in sm_MarkAssociateInstsToTearDown
Line 1387: Reserved NSAPI Has used in Primary  (%x) in sm_MarkAssociateInstsToTearDown
Line 1393: Attempting to Read SM Data Using Invalid PdpInstance  (%x) in sm_MarkAssociateInstsToTearDown
Line 1449: This is Some other Primary PDP PdpInstance (%x) in sm_MarkAssociateInstsToTearDown
Line 1458: Reserved NSAPI Has used in Primary  (%x) in sm_MarkAssociateInstsToTearDown
Line 1464: Attempting to Read SM Data Using Invalid PdpInstance  (%x) in sm_MarkAssociateInstsToTearDown
Line 1520: This is Some other Primary PDP PdpInstance (%x) in sm_MarkAssociateInstsToTearDown
Line 1529: Reserved NSAPI Has used in Primary  (%x) in sm_MarkAssociateInstsToTearDown
Line 1535: Attempting to Read SM Data Using Invalid PdpInstance  (%x) in sm_MarkAssociateInstsToTearDown
Line 1583: TiAvailable -> %d, PdpInstance ==%d
Line 1653: Nsapi (%x) Already Used
Line 1661: Nsapi (%x) is Outside Valid Range. 5 <= Nsapi <= 15
Line 1819: Wrong Action =%d 
Line 1855: Received => TiValue(%d),Originator(%d)
Line 1859: Instance(%d) => TiValue(%d),Originator(%d)
Line 1891: [KNY] Instance(%d) => TiValue(%d),Originator(%d) Flag(%d) 
Line 1988:  Cid->  %d
Line 2048: Cid (%x) Already Used
Line 2056: Nsapi (%x) is Outside Valid Range.
Line 2689: SetSyncSessionInfoFlg: %d
Line 2702: GetSyncSessionInfoFlg: %d
Line 3014: Netowk Sent PdpType Organisation as ETSI_ALLOCATED which means that PdpType has to be PPP, but network sent nother Type (%x) in sm_DetermineAndSetPdpType
Line 3035: Unknown IETF PDP type (%x) in sm_DetermineAndSetPdpType
Line 3731: Invalid ApnLength: %d, so returning with out copying APN.
Line 4661: NIDB enabled 
Line 4681: SmNASRelVersion ==> %d 
Line 4734: BuildNSetProtConfigOpts - AuthType:%d DnsIpv4AddrReq:%d DnsIpv6AddrReq:%d
Line 4738: Fail sm_BuildProtConfigOpts() in sm_BuildNSetProtConfigOpts()
Line 4742: ProtConfigOpts Dump size:%d
Line 4747: PCO length is oversize
Line 4799: Enter sm_DecodeProtConfigOpts..
Line 4804: Error: ProtConOpt[0] is invalid - 0x%X
Line 4815: PROTOCOL ID:0x%x LEN:%d
Line 4822: SM_SELECTED_BCM_LEN:%d
Line 5508: Enter sm_DecodeProtConfigOpts..
Line 5513: Error: ProtConOpt[0] is invalid - 0x%X
Line 5524: PROTOCOL ID:0x%x LEN:%d
Line 5584: Error: Unknown Potocol ID (=0x%X)
Line 6332: APN matching with T3396 data. Without APN case ( Length =0)
Line 6342: APN matching with T3396 data
Line 6499: sm_NeedToStopT3396 (Cause =%d, PdpInstance =%d)
Line 6508: sm_NeedToStopT3396 (APN Length =%d)
Line 6526: [RSRA] ApnLength = %d
Line 6836: T3396 : Index=%d,T3396Value=%d,TimerDeactivated=%d,ApnLength=%d,Cause=%d,T3396Type=%d
Line 7017: ....timer deactivated
Line 7027: ....timer duration = %d(seconds)
Line 7037: ....timer duration = %d(seconds)
Line 7046: ....timer duration = %d(seconds)
Line 7055: ....timer duration = %d(seconds)
Line 7065: ....timer duration = %d(decihours)
Line 7076: ....timer duration = %d(seconds)
Line 8907: Checking Qos Parameters in sm_CheckAndStoreNegotiatedQos. Please Wait.....
Line 9129: UE received 0 kbps for  both UL and DL bit rate. NW QoS not accepted
Line 9435: Received unsupported qos_len
Line 9460: DelayClass ..... O.K.
Line 9464: Network's DelayClass > MinQos.DelayClass OR MinQos.DelayClass != 0  OR  Network's DelayClass == 0 !!!, Activation Will be Rejected
Line 9487: ReliabilityClass ..... O.K.
Line 9491: Network's ReliabilityClass > MinQos.ReliabilityClass  OR MinQos.ReliabilityClass != 0  OR  Network's ReliabilityClass == 0 !!!, Activation Will be Rejected
Line 9514: PrecedenceClass ..... O.K.
Line 9518: Network's PrecedenceClass > MinQos.PrecedenceClass  OR MinQos.PrecedenceClass != 0  OR  Network's PrecedenceClass == 0 !!!, Activation Will be Rejected
Line 9542: PeakThroughput ..... O.K.
Line 9546: Network's PeakThroughput < MinQos.PeakThroughput OR MinQos.PeakThroughput != 0  OR  Network's PeakThroughput == 0 !!!, Activation Will be Rejected
Line 9571: MeanThroughput ..... O.K.
Line 9575: Network's MeanThroughput < MinQos.MeanThroughput  OR MinQos.MeanThroughput != 0  OR  Network's MeanThroughput == 0 !!!, Activation Will be Rejected
Line 9598: TrafficClass ..... O.K.
Line 9602: Network's TrafficClass < MinQos.TrafficClass  OR  Network's TrafficClass == 0!!!, Activation Will be Rejected
Line 9627: ResidualBer ..... O.K.
Line 9631: Network's ResidualBer < MinQos.ResidualBer (unless it is 7) OR  Network's ResidualBer is out of Range (0 < x < 0xf) !!!, Activation Will be Rejected
Line 9671: SduErrorRatio ..... O.K.
Line 9675: Network's SduErrorRatio < MinQos.SduErrorRatio  OR  Network's SduErrorRatio is out of Range (0 < x < 0xf) !!!, Activation Will be Rejected
Line 9700: DeliveryOfErrSdu ..... O.K.
Line 9704: Network's DeliveryOfErrSdu < MinQos.DeliveryOfErrSdu  OR  Network's DeliveryOfErrSdu is out of Range (0 < x < 7) !!!, Activation Will be Rejected
Line 9728: MaxBitRateUplink ..... O.K.
Line 9732: Network's MaxBitRateUplink < MinQos.MaxBitRateUplink  OR  Network's MaxBitRateUplink == 0 !!!, Activation Will be Rejected
Line 9756: MaxBitRateDownlink ..... O.K.
Line 9760: Network's MaxBitRateDownlink < MinQos.MaxBitRateDownlink  OR  Network's MaxBitRateDownlink is Out of Range (x > 0) !!!, Activation Will be Rejected
Line 9789: GuaranteedMaxBitRateUplink ..... O.K.
Line 9793: Network's GuaranteedMaxBitRateUplink < MinQos.GuaranteedMaxBitRateUplink , Activation Will be Rejected
Line 9822: GuaranteedBitRateDownlink ..... O.K.
Line 9826: Network's GuaranteedBitRateDownlink < MinQos.GuaranteedBitRateDownlink  OR  Network's GuaranteedBitRateDownlink is Out of Range (x > 0) !!!, Activation Will be Rejected
Line 9852: DeliveryOrder ..... O.K.
Line 9856: Network's DeliveryOrder < MinQos.DeliveryOrder  OR  Network's DeliveryOrder is Out of Range (0 < x < 3) !!!, Activation Will be Rejected
Line 9880: MaxSduSize ..... O.K.
Line 9884: Network's MaxSduSize < MinQos.MaxSduSize  OR  Network's MaxSduSize is Out of Range (0 < x < 0xff) !!!, Activation Will be Rejected
Line 9911: TransferDelay ..... O.K.
Line 9916: TransferDelay Ignored Due to Traffic Class ..... O.K.
Line 9922: Network's TransferDelay > MinQos.TransferDelay  OR  Network's TransferDelay is Out of Range (0 < x < 0x3f) !!!, Activation Will be Rejected
Line 9949: SignallingIndication ..... O.K.
Line 9959: Network's SignallingIndication > MinQos.SignallingIndication  OR  Network's SignallingIndication == 0 !!!, Activation Will be Rejected
Line 9984: SourceServiceDescriptor ..... O.K.
Line 9989: SourceStatisticsDescriptor Ignored Due to Traffic Class ..... O.K.
Line 9995: Network's SourceServiceDescriptor > MinQos.SourceServiceDescriptor  OR  Network's SourceServiceDescriptor == 0 !!!, Activation Will be Rejected
Line 10069: TrafficHandlingPriority ..... O.K.
Line 10074: TrafficHandlingPriority Ignored Due to Traffic Class ..... O.K.
Line 10080: Network's TrafficHandlingPriority > MinQos.TrafficHandlingPriority  OR  Network's TrafficHandlingPriority == 0 !!!, Activation Will be Rejected
Line 10116: Unable To Convert the Unknown Reliability Class (0x%02X) to SduErrorRatio in sm_MapPreRel99ToRel99QosParameters
Line 10150: Unable To Convert the Unknown Reliability Class (0x%02X) to Residual Bit Error Ratio in sm_MapPreRel99ToRel99QosParameters
Line 10184: Unable To Convert the Unknown Reliability Class (0x%02X) to Delivery of erroneous SDUs in sm_MapPreRel99ToRel99QosParameters
Line 10257: Unable To Convert the Unknown PeakThroughput (0x%02X) to MaxBitRateUplink in sm_MapPreRel99ToRel99QosParameters
Line 10301: Converting Pre Rel 99 to Rel 99 Qos Data, 
Line 10329: Unable To Convert the Unknown Delay Class (0x%02X) to Traffic Class in sm_MapPreRel99ToRel99QosParameters
Line 10359: Unable To Convert the Unknown Delay Class (0x%02X) to TrafficHandlingPriority in sm_MapPreRel99ToRel99QosParameters
Line 10467: SM RATMode: %s -> %s
Line 10491: Instance --> %d,sm_EstReqSetRetryCount-> %d
Line 10503: sm_SessionData[Instance].sm_GmmEstReqRetryCount-> %d
Line 10518: RAT Mode -> %s
Line 10554: RAT Mode Status -> SM_RATMODE_CHANGE_IN_PROGRESS
Line 10558: RAT Mode Status -> SM_RATMODE_CHANGE_ENDED
Line 10581: Wrong Timer_catagory!!!!
Line 10612: Wrong Timer_catagory!!!!
Line 10643: Wrong Timer_catagory!!!!
Line 10674: Wrong Timer_catagory!!!!
Line 10935: Pdp Originator -> %s
Line 10973: Cause -> %s
Line 11340: Active Sessions :
Line 11387: PdpInstance = %d, Nsapi = %d , PrimaryNsapiAssociated =%x,Ti = %d,Originator = %s , State = %s
Line 11390:    APN:%c %c %c  ,Apn Length = %d, Sid =%d
Line 11392: Cid=%d
Line 11430: SmNASRelVersion  -> %d
Line 11453: Traffic Flow Template Length   -> %d
Line 11454: Traffic Flow Template Settings ->....
Line 11482: Traffic Flow Template Length   -> %d
Line 11483: Traffic Flow Template Settings ->....
Line 11510: Protocol COnfiguration Options Length   -> %d
Line 11511: Protocol COnfiguration Options ->....
Line 11579: Removing Nsapi %x, Instane %d
Line 11639: sm_SessionData[%d] Nsapi %x State -> %s
Line 11665: No Session Found with the Same PDP Address. Locally Deactivating the current Instance (%x)
Line 11709: sm_SessionData[%d] Nsapi %x State -> %s
Line 11740: No Session Found with the Same PDP Address. Locally Deactivating the current Instance (%x)
Line 11892: Wrong PdpInstance
Line 11947: Reliability Class -> %s
Line 11985: Delay Class -> %s
Line 12023: Precedence Class -> %s
Line 12061: Peak Throughput -> %s
Line 12099: Mean Throughput -> %s
Line 12137: Delviery of Erroneous SDUs -> %s
Line 12175: Delviery Order -> %s
Line 12213: Traffic Class -> %s
Line 12268: Max SDU Size -> %d
Line 12276: Max SDU Size  -> %s
Line 12332: Max Bit Rate For Uplink -> %d KBits / Sec
Line 12340: Max Bit Rate For Uplink  -> %s
Line 12396: Max Bit Rate For Downlink -> %d KBits / Sec
Line 12404: Max Bit Rate For Downlink  -> %s
Line 12423: StaticGlobalSmData[SmCurrentStackId].sm_SessionData[%d].Nsapi -> %d
Line 12452: StaticGlobalSmData[SmCurrentStackId].sm_SessionData[%d].PdpAddressLength -> %d
Line 12456: PdpAddress  -> ...
Line 12458: PdpAddress  -> %s
Line 12489: StaticGlobalSmData[SmCurrentStackId].sm_SessionData[%d].ApnLength -> %d
Line 12493: Apn -> ...
Line 12525: StaticGlobalSmData[SmCurrentStackId].sm_SessionData[%d].ProtConfigOptsLength -> %d
Line 12529: ProtConfigOpts  -> ...
Line 12531: ProtConfigOpts  -> %s
Line 12562: StaticGlobalSmData[SmCurrentStackId].sm_SessionData[%d].TftLength -> %d
Line 12566: TFT  -> ...
Line 12596: StaticGlobalSmData[SmCurrentStackId].sm_SessionData[%d].State -> %s
Line 12643: SDU Error Ratio -> %s
Line 12681: Residual Bit Error Rate -> %s
Line 12719: Traffic Handling Priority -> %s
Line 12773: Transfer Delay -> %d ms
Line 12781: Max Bit Rate For Uplink  -> %s
Line 12836: Guaranteed Bit Rate For Uplink -> %d KBits / Sec
Line 12844: Guaranteed Bit Rate For Uplink  -> %s
Line 12899: Guaranteed Bit Rate For Downlink -> %d KBits / Sec
Line 12907: Guaranteed Bit Rate For Downlink  -> %s
Line 12944: Souce Statistics Descriptor  -> %s
Line 12982: Signalling Indiation   -> %s
Line 13024: MaxBitRateDownlinkExtended -> %d KBits / Sec
Line 13031: MaxBitRateDownlinkExtended -> %d MBits / Sec
Line 13038: MaxBitRateDownlinkExtended -> %d MBits / Sec
Line 13048: MaxBitRateDownlinkExtended -> %s
Line 13089: GuaranteedBitRateDownlinkExtended -> %d KBits / Sec
Line 13096: GuaranteedBitRateDownlinkExtended -> %d MBits / Sec
Line 13103: GuaranteedBitRateDownlinkExtended -> %d MBits / Sec
Line 13113: GuaranteedBitRateDownlinkExtended  -> %s
Line 13156: MaxBitRateUplinkExtended -> %d KBits / Sec
Line 13163: MaxBitRateUplinkExtended -> %d MBits / Sec
Line 13170: MaxBitRateUplinkExtended -> %d MBits / Sec
Line 13180: MaxBitRateUplinkExtended -> %s
Line 13221: GuaranteedBitRateUplinkExtended -> %d KBits / Sec
Line 13228: GuaranteedBitRateUplinkExtended -> %d MBits / Sec
Line 13235: GuaranteedBitRateUplinkExtended-> %d MBits / Sec
Line 13245: GuaranteedBitRateUplinkExtended  -> %s
Line 13349: SM_INSTANCE_ASSIGNED_FLG               -> %s
Line 13366: SM_MOD_ACC_RECEIVED_FLG                -> %s
Line 13383: SM_TEAR_DOWN_REQ_FLG                   -> %s
Line 13400: SM_SECONDARY_ACT_REQ_FLG               -> %s
Line 13473: SM_ACTIVATION_ACC_BY_NTWK_FLG          -> %s
Line 13490: SM_RABM_OR_SNDCP_ACT_RSP_RECEIVED_FLG  -> %s
Line 13507: SM_GAPI_DEACT_CNF_MODE_FLG             -> %s
Line 13524: SM_MS_INITIATED_MOD_REQ_FLG            -> %s
Line 13541: SM_LLC_MODIFIED_FLG                    -> %s
Line 13558: SM_TFT_MODIFIED_FLG                    -> %s
Line 13575: SM_PCO_MODIFIED_FLG                    -> %s
Line 13588: Number Of Pdp Instances -> %d
Line 13605: SM_QOS_MODIFIED_FLG                    -> %s
Line 13623: SM_COVERAGE_REGAINED_FLG               -> %s
Line 13640: SM_PDP_ACT_REJECTED_BY_NETWORK_FLG     -> %s
Line 13662: 
-------------- SM Flags For Session Number (%d), Nsapi (%d) -----

Line 13778: No Flags are Set in Session %d !
Line 13828: 
-------------- Displaying Session Data For SM Instance -> %d , Nsapi -> %d ---------------------
Line 13835: RetransmissionCount[%s]  -> 0x%x
Line 13837: EstablismentReqInitiator  -> 0x%x
Line 13838: SndcpBufferStartOffset    -> 0x%x
Line 13839: SndcpBufferOverheadLength -> 0x%x
Line 13888: 
-------------- Displaying Context Identifiers For SM Instance -> %d , Nsapi -> %d ---------------------
Line 13889: Ti                 -> %x
Line 13890: TiOriginator       ->%s 
Line 13891: ExtendedTiUsed     -> %s
Line 13892: Nsapi              -> %x
Line 13893: PrimaryNsapi       -> %x
Line 13894: LlcSapi            -> %x
Line 13895: LinkedTi           -> %x
Line 13896: Cid                -> %d
Line 14166: Invalid Associated PdpInstance (%x) in sm_FindAssociatePdps
Line 14175: Invalid Primary PdpInstance (%x) in sm_FindAssociatePdps
Line 14202: 
-------------- Displaying Context Parameters For SM Instance -> %d , Nsapi -> %d ---------------------
Line 14204: PdpAddressLength     -> %x
Line 14208: PdpAddress           -> ....
Line 14212: ProtConfigOptsLength -> %x
Line 14216: ProtConfigOpts      -> ....
Line 14219: ApnLength            -> %x
Line 14223: AccessPointName      -> ....
Line 14227: TftLength            -> %x
Line 14231: TrafficFlowTemplate  -> ....
Line 14235: ModReqTFTLength       -> %x
Line 14239: ModReqTFT         -> ....
Line 14290: 
---------------- Displaying Message Log ---------------
Line 14301: %d. %s
Line 14311: %d. %s
Line 14375: Linked TI-> %d
Line 14381: PrimaryNsapi %d
Line 14385: StaticGlobalSmData[SmCurrentStackId].sm_SessionData[LoopCount].ContextIds.Ti -> %d
Line 14391: Found a matching PDP session for LinkedTi sent by NW with NSAPI-> %d
Line 14414: Qostlv == NULL, Length = %d
Line 14424: Converting QoS from TLV to Normal format. Please Wait.... Length = %d .
Line 14553: Invalid PdpInstance (%x); ProtCfgOpts Pointer not found.
Line 14580: Prot Cfg Opts Length -> %d
Line 14602: Protocol Config. Options -> ...
Line 14691: numOfTft is greater than max length. Setting it to 0 to prevent out of bounds issue. 
Line 14863: ---------------------------------------------
Line 14864:  Display Stored TFT Data Instance:%d
Line 14865: ---------------------------------------------
Line 14876:   Filter Id: %d, Dir:Downlink
Line 14878:   Filter Id: %d, Dir:Uplink
Line 14880:   Filter Id: %d, Dir:Bidirectional
Line 14882:   Filter Id: %d, Dir:pre Rel-7
Line 14886:   Ip type: IPV6
Line 14889:   Ip type: IPV4
Line 14893: ---------------------------------------------
Line 15019: ---------------------------------------------
Line 15020:  Display TFT Data (size:%d)
Line 15021: ---------------------------------------------
Line 15028:   Filter Id: %d, Dir:Downlink
Line 15030:   Filter Id: %d, Dir:Uplink
Line 15032:   Filter Id: %d, Dir:Bidirectional
Line 15034:   Filter Id: %d, Dir:pre Rel-7
Line 15040: ---------------------------------------------
Line 15062: ---------------------------------------------
Line 15063:  sm_CheckTftCreatebyUE  Primary %d
Line 15064: ---------------------------------------------
Line 15071: PrimaryNsapi %d
Line 15075: StaticGlobalSmData[SmCurrentStackId].sm_SessionData[LoopCount].ContextIds.Ti -> %d
Line 15342: 
Unable To Send %s
Line 15348: 
Displaying Msg Contents: %s
Line 15354:  NSAPI->  %d
Line 15360: 
Entering  %s
Line 15368:  NORMAL Initialisation  of %s  
Line 15374:  GSM to UMTS Initialisation of %s 
Line 15380:  UMTS to GSM  Initialisation of %s  
Line 15387:  Unknown  Initialisation Type (%x) in %s  
Line 15395: Invalid PDP instance %x in  %s
Line 15523: This is Some other Primary PDP PdpInstance (%x) in sm_MarkAssociateInstsToTearDown
Line 15532: Reserved NSAPI Has used in Primary  (%x) in sm_MarkAssociateInstsToTearDown
Line 15538: Attempting to Read SM Data Using Invalid PdpInstance  (%x) in sm_MarkAssociateInstsToTearDown
Line 15775: Session (%d) is Now acting as the Primary Nsapi (%d) in sm_FindAssociatePdps
Line 15790: Current Number of associated PDPs -> %d in sm_FindAssociatePdps
Line 16122: Set Deactvate Information = %d
Line 16141: Get Deactvate Information = %d
Line 16156: sm_GetSimProvider Funct ... 
Line 16174: sm_CheckOperatorIdFromImsi ... 
Line 16188: sm_GetDsIsSingleSim - Other Stack init stauts : %d
Line 16367: sm_GetNrSaSupport: %d
Line 853: %s
Line 856: Displaying Received Message Contents:
Line 4174: [CHAP CHALLENGE_RANDOM]chap_len :%d/RAND len= %d ,index =%d
Line 4180: [CHAP CHALLENGE_RANDOM]id =%d /chall_len :%d/index = %d 
Line 4201: [CHAP CHALLENGE_RESP]id =%d /chall_len :%d/index = %d 
Line 4930: Error: Unknown IPCP Code:%d
Line 4961: Error: DNS1 Opt Length(=%d) is invalid
Line 4974: DNS1 ADDR IP = %d.%d.%d.%d
Line 4985: DNS1 ADDR IPv6 Dump (size:%d)
Line 5001: Error: SM_MUST_DISPLAY_LEVEL DNS2 Opt Length(=%d) is invalid
Line 5014: DNS2 ADDR IP = %d.%d.%d.%d
Line 5025: DNS2 ADDR IPv6 Dump (size:%d)
Line 5038: Error: Unknown configuration option type=0x:%X size=%d
Line 4881: Error: IP Opt Length(=%d) is invalid
Line 4897: IP_ADDR Dump (size:%d)
Line 5086: Error: DNS_IPV6_ADDR Length(=%d) is invalid
Line 5126: Error: DNS_IPV4_ADDR Length(=%d) is invalid
Line 5165: Error: PCSCF_IPV6_ADDR Length(=%d) is invalid
Line 5205: Error: PCSCF_IPV4_ADDR Length(=%d) is invalid
Line 5238: Error: MSISDN Length crossed limit (=%d) 
Line 5269: Error: DSMIPV6 HA ADDR Length(=%d) is invalid
Line 5301: Error: DSMIPV6 HN PREFIX Length(=%d) is invalid
Line 5332: Error: DSMIPV6 HA IPV4 ADDR Length(=%d) is invalid
Line 5364: Error: Invalid Policy ctrl rej cause length	(=%d) 
Line 5402: Error: Invalid BCM value length	(=%d) 
Line 5435: Error: Invalid IPv4 MTU length  (=%d) 
Line 5473: Error: Length of protocol id contents is zero
Line 6587: T3396 APN Length 0 = %d
Line 6606: T3396 Val 0 = %d
Line 6607: T3396 Type 0 = %d
Line 6608: T3396 Cause 0 = %d
Line 6622: T3396 APN Length 1 = %d
Line 6641: T3396 Val 1 = %d
Line 6642: T3396 Type 1 = %d
Line 6643: T3396 Cause 1 = %d
Line 8649: QosIeLength = %d
Line 8663: QoS IE Length received is 11
Line 8685: Modified QosIeLength = %d
Line 8729: QosIeLength = %d
Line 8778: QosIeLength = %d
Line 8830: QosIeLength = %d
Line 14789:   Type of service:%d mask:%d
Line 14794:   Next header type:%d
Line 14799:   Protocol number:%d(0x%x)
Line 14805:   IPv4 remote address: %d.%d.%d.%d
Line 14807:   IPv4 address mask: %d.%d.%d.%d
Line 14813:   IPv6 remote address: %X:%X:%X:%X:%X:%X...
Line 14815:   IPv6 address mask: %X:%X:%X:%X:%X:%X...
Line 14820:   Local port range: %d ~ %d
Line 14825:   Remote port range: %d ~ %d
Line 14830:   Single local port: %d
Line 14835:   Single remote port: %d
Line 14840:   Flow label: 0x%X
Line 14845:   Security parameter index: 0x%X
Line 14961: 	Ip type: IPV6
Line 14963: 	Ip type: IPV4
Line 14967:   Type of service:%d mask:%d
Line 14972:   Next header type:%d
Line 14977:   Protocol number:%d(0x%x)
Line 14983:   IPv4 remote address: %d.%d.%d.%d
Line 14985:   IPv4 address mask: %d.%d.%d.%d
Line 14991:   IPv6 remote address: %X:%X:%X:%X:%X:%X...
Line 14993:   IPv6 address mask: %X:%X:%X:%X:%X:%X...
Line 14914:   Local port range: %d ~ %d
Line 14919:   Remote port range: %d ~ %d
Line 14924:   Single local port: %d
Line 14929:   Single remote port: %d
Line 14934:   Flow label: 0x%X
Line 14939:   Security parameter index: 0x%X
