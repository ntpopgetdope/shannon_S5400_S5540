Line 329: [IMSSH_SetInitState] Prev initState = %d, Curr initState = %d
Line 333: [IMSSH_GetInitState] Wrong StackId= %d
Line 352: [IMSSH_GetInitState] Wrong StackId= %d
Line 503: IMS Block Status<Power Cycle> :[%d]
Line 517: IMS Block Status<Power Cycle> :[%d]
Line 542: [SHDB]ERR:IMSSH_CreateSessDbNode:pAppDb is NULL
Line 549: [SHDB]ERR:IMSSH_CreateSessDbNode:pSessionDb mem alloc fail
Line 555: [SHDB]pSessionDb:[0x%x] Node created for APPID:[%d]
Line 582: [SHDB]ERR:IMSSH_FreeSessionDbNode: pThisSessionDB is NULL
Line 588: [SHDB]ERR:IMSSH_FreeSessionDbNode:pAppDb(%d) is NULL
Line 592: [IMSSH_FreeSessionDbNode] Freeing SessionDB:[0x%x] from appId:[%d]
Line 611: [SHDB]IMSSH_FreeSessionDbNode: pThisSessionDB(0x%x) is freed from the List
Line 617: [SHDB]ERR:IMSSH_FreeSessionDbNode: pThisSessionDB is not in the List
Line 643: [IMSSH_GetAppIdFromSessId] NO Matching APPID Found for SessID:[%d]
Line 671: [IMSSH_GetAppDbFromSessId] Matching pAppDb:[0x%x] for SessID:[%d]
Line 676: [IMSSH_GetAppDbFromSessId] NO Matching APPDB Found for SessID:[%d]
Line 701: [IMSSH_GetSessionDb_LinkedController] sid[%d], controller[%x]
Line 730: [IMSSH_ResetSessionDb_LinkedController] sid[%d], controller[%x]
Line 756: [IMSSH_SetSessionDb_LinkedController] sid[%d], controller[0x%x]
Line 776: [ERR] 
Line 806: [IMSSH_SetSessionDbToId] Invalid SessionId:[%d]
Line 829: [IMSSH_GetSessTypeFromSession] No valid sessionType present in SessionId:[%d]
Line 853: [IMSSH_GetStatusCodeFromRsp] pSipMsg is NULL. Return INVALID STATUS CODE
Line 872: [IMSSH_MultiStack_SetImsBlockStatus] Status -> [%d]
Line 896: [IMSSH_MultiStack_GetImsBlockStatus] Status -> [%d]
Line 918: [IMSSH_SetVoMobileStatus] %s, Status -> [%d]
Line 944: [IMSSH_GetVoMobileStatus] Status [%d] - %s, RatType %d [1:3GPP, 2:WiFi]
Line 975: [IMSSH_MultiStack_SetRejectCallStatus] %s, Status -> [%d]
Line 996: [IMSSH_MultiStack_GetRejectCallStatus] %s, Status -> [%d]
Line 1061: [IMSSH_GetMethodFromReq] pSipMsg is NULL. Return INVALID METHOD
Line 1085: [IMSSH_GetMethodFromRsp pSipMsg is NULL. Return INVALID METHOD
Line 1108: [IMSSH_GetAppDbFromCtxtId] pAppDb->contextId: %d
Line 1113: [SHDB]ERR:IMSSH_GetAppDbFromCtxtId: pAppDb not found!
Line 1138: [SHDB]ERR: [IMSSH_GetAppDbFromAppId] INVALID APP ID
Line 1150: [SHDB]ERR: [IMSSH_GetAppDbFromAppId] pAppDb not found!
Line 1198: [IMSSH_MultiStack_GetAppIdFromPdnService] AppId : [%d] , APPServiceType : [0x%x] PdnserviceType : [0x%x] serviceType : [0x%x]
Line 1207: [SHDB] [IMSSH_MultiStack_GetAppIdFromPdnService] Its Emergency PDN Matched APPID:[%d] Found for services:[0x%x]
Line 1216: [SHDB] [IMSSH_GetAppIdFromPdnService] Matching APPID:[%d] Found for services:[0x%x]
Line 1223: [SHDB]ERR: [IMSSH_MultiStack_GetAppIdFromPdnService] pAppDb not found! for servicetype:[0x%x]
Line 1252: [IMSSH_MultiStack_GetAppCount] -Count:%d, StackId:%d
Line 1280: [IMSSH_MultiStack_GetAppIdFromService] AppId : [%d] , APPServiceType : [0x%x] PdnserviceType : [0x%x] serviceType : [0x%x]
Line 1291: [SHDB] [IMSSH_MultiStack_GetAppIdFromService] Its Emergency PDN Matched APPID:[%d] Found for services:[0x%x]
Line 1300: [SHDB] [IMSSH_MultiStack_GetAppIdFromService] Matching APPID:[%d] Found for services:[0x%x]
Line 1308: [SHDB]ERR: [IMSSH_MultiStack_GetAppIdFromService] pAppDb not found! for servicetype:[0x%x]
Line 1396: [IMSSH_GetContextIdFromAppId] Found matching CONTEXTID:[%d] for APPID:[%d]
Line 1401: [SHDB]ERR:IMSSH_GetContextIdFromAppId: ContextId not found!
Line 1425: [IMSSH_GetAppIdFromContextId] Found matching APPID:[%d] for Cid:[%d]
Line 1430: [SHDB]ERR:IMSSH_GetAppIdFromContextId: pAppDb not found!
Line 1455: [IMSSH_GetRegDbFromAppId] No matching APPDB found for APPID:[%d]
Line 1486: [SHDB]ERR:IMSSH_CreateAppDbNode: mem alloc fail
Line 1496: [SHDB]ERR:IMSSH_MultiStack_CreateAppDbNode: MAX AppId reached
Line 1499: Failed to free APPDB from APP List
Line 1524: [IMSSH_CreateAppDbNode] Current RAT[%d], Created APPDB:[0x%x] with AppId [%d] for StackId : [%d]
Line 1547: [SHDB]ERR:IMSSH_FreeAppDbNode: pThisAppDb is NULL
Line 1586: [SHDB]IMSSH_FreeAppDbNode: pThisAppDb(0x%x)of AppId(%d) is freed from the List
Line 1593: [SHDB]ERR:IMSSH_FreeAppDbNode: pThisAppDb is not in the List
Line 1677: [SET] RatChange Status -> [%s]
Line 1693: [GET] RatChange Status -> [%s]
Line 1733: [SET] RatChange Type -> [%s]
Line 1749: [GET] RatChange Type -> [%s]
Line 1785: RegState[%d]
Line 1815: Mapped RegState[%d]
Line 1869: [IMSSH_MultiStack_CreatePdnInfoDbNode] Created pdnInfoDB
Line 1874: [SHDB]ERR:IMSSH_MultiStack_CreatePdnInfoDbNode:pPdnInfoDb mem alloc fail
Line 1898: [IMSSH_RemoveAllPdnInfoDbNode] Free pdnInfoDB
Line 1909: [SHDB]IMSSH_RemoveAllPdnInfoDbNode: pPdnInfoDb(0x%x)is freed from the List
Line 1946: IMSSH_MultiStack_CheckAndRemoveInvalidAppDb:PdnIndoDB empty, check if invalid AppDB is present
Line 1952: IMSSH_MultiStack_CheckAndRemoveInvalidAppDb: Freeing AppId [%d], Context ID [%d], StackID [%d] 
Line 1956: Failed to free invalid AppDB from APP List
Line 1963: IMSSH_MultiStack_CheckAndRemoveInvalidAppDb:Check if invalid AppDB is present
Line 1984: IMSSH_MultiStack_CheckAndRemoveInvalidAppDb: Freeing AppId [%d], Context ID [%d], StackID [%d] 
Line 1988: Failed to free invalid AppDB from APP List
Line 2017: [IMSSH_MultiStack_FreePdnInfoDbNode] Free pdnInfoDB
Line 2021: [SHDB]ERR:IMSSH_MultiStack_FreePdnInfoDbNode: pThisPdnInfoDb is NULL
Line 2055: [SHDB]IMSSH_MultiStack_FreePdnInfoDbNode: pThisPdnInfoDb(0x%x)is freed from the List
Line 2066: [SHDB]ERR:IMSSH_MultiStack_FreePdnInfoDbNode: pThisPdnInfoDb is not in the List
Line 2100: [IMSSH_MultiStack_IsDefaultBearerExists] Default bearer exists in pPdnInfoDb and Bearer Type [%d]
Line 2125: IMSSH_MultiStack_GetPdnInfoDbfromCid: StackId = %d
Line 2129: IMSSH_MultiStack_GetPdnInfoDbfromCid: pPdnInfoDb->m_contextId = %d ContextId = %d m_BearerType = %d
Line 2157: IMSSH_MultiStack_GetPdnInfoForPendingReg
Line 2164: IMSSH_MultiStack_GetPdnInfoForPendingReg: pPdnInfoDb->m_contextId [%d]
Line 2333: [IMSSH_MultiStack_GetDsTimerId] Returning TimerId [%d] for Stack Id [%d]
Line 2359: [IMSSH_MultiStack_GetCidFromStackId] Context Id [%d], Bearer Type [%d], RegType [%d], PCSCFs [%d]
Line 2363: [IMSSH_MultiStack_GetCidFromStackId] Returning Context Id : [%d]
Line 2368: [IMSSH_MultiStack_GetCidFromStackId] ERROR : Returning Context Id : [%d]
Line 2443: Server Header Registry = %d
Line 2453: Include UA Header
Line 2454: Adding SIP header
Line 2458: Include Server Header
Line 2459: Adding SIP header
Line 2511: RTP Timeout is disabled for PCT
Line 2522: [IMSSH_MultiStack_GetRtpTimeOutValue] RTP TimeoutVal[%d] for Media Type[%d]
Line 2553: [IMSSH_MultiStack_GetRtcpTimeOutValue] RTCP TimeoutVal[%d] for Media Type[%d]
Line 2609: [IMSSH_MultiStack_IsRatAllowedForVoLTESession] m_StackActRAT: %d m_ActRAT: %d
Line 2617: [IMSSH_MultiStack_IsRatAllowedForVoLTESession]: FALSE 
Line 2648: [SIM INFO] [IMSSH_MultiStack_GetPcscfFromSimCfg] PCSCF IPV4 addr:[0x%x] from SIM Index:[%d]
Line 2655: [SIM INFO] [IMSSH_MultiStack_GetPcscfFromSimCfg] PCSCF IPV6 addr
Line 2660: Alert>[SIM INFO] [IMSSH_MultiStack_GetPcscfFromSimCfg] FQDN is not supported yet, Derive from Registry for timebeing
Line 2667: [IMSSH_MultiStack_GetPcscfFromSimCfg]: Index %d Pcscf Count %d 
Line 2953: [IMSSH_MultiStack_GetMccMnc] 3GPPRegistered
Line 3095: [IMSSH_GetTacLac] TAC = 0x%X
Line 3103: [IMSSH_GetTacLac] LAC = 0x%X
Line 3111: [IMSSH_GetTacLac] TAC = 0x%X
Line 3115: [IMSSH_GetTacLac] Invalid RAT -> TACLAC = 0x%X
Line 3141: [IMSSH_MultiStack_GetCellIdentity] Cell ID = 0x%x %x
Line 3160: [IMSSH_MultiStack_GetCurrentRfBand] Current Band = %d for StackID =%d
Line 3300: [IMSSH_MultiStack_GetPaniInfo] MccMnc
Line 3301: [IMSSH_MultiStack_GetPaniInfo] TacLac: 0x%x, CellId: 0x%x %x
Line 3302: [IMSSH_MultiStack_GetPaniInfo] Active RAT = 0x%x
Line 3359: [IMSSH_GetPaniInfo] WLAN SubType : [%d]
Line 3387: [IMSSH_MultiStack_GetPaniInfo] Country code from AIMS_OperatorNameList
Line 3400: [IMSSH_MultiStack_GetPaniInfo] Country code from AP :%c%c
Line 3406: [IMSSH_MultiStack_GetPaniInfo] Country code from AIMS_OperatorNameList
Line 3413: [IMSSH_MultiStack_GetPaniInfo] Country code from AP :%c%c
Line 3420: [IMSSH_MultiStack_GetPaniInfo] Country code from AIMS_OperatorNameList
Line 3432: [IMSSH_MultiStack_GetPaniInfo] ACTIVE RAT -> UNKNOWN
Line 3458: No valid APPID present for the sessId[%d]
Line 3465: [IMSSH_GetHomeDomainName] pAppDb is NULL!!!
Line 3504: [IMSSH_MultiStack_UpdateCNIInfo] CNI not supoprted by Operator
Line 3511: [IMSSH_MultiStack_UpdateCNIInfo] pPdnInfoNode is NULL!!!
Line 3532: [IMSSH_MultiStack_UpdateCNIInfo] Unable to derive CNI Info
Line 3536: [IMSSH_MultiStack_UpdateCNIInfo] MccMnc
Line 3537: [IMSSH_MultiStack_UpdateCNIInfo] TacLac: 0x%x, CellId: 0x%x %x Active RAT: 0x%x
Line 3541: [IMSSH_MultiStack_UpdateCNIInfo] mcc mnc not valid Dont send CNI
Line 3604: [IMSSH_MultiStack_UpdateCNIInfo] ACTIVE RAT -> UNKNOWN
Line 3606: [IMSSH_MultiStack_UpdateCNIInfo] Derived pCnciInfo->AccessType [%d]
Line 3637: [IMSSH_MultiStack_GetCNIInfo] AccessType : %d
Line 3686: CellularNwInfo [%d] [1:CNI, 2:PCNI] 
Line 3707: Adding SIP header
Line 3712: Adding SIP header
Line 3804: [IMSSH_GetPEIInfo] Memory allocation failed.
Line 3810: [IMSSH_MultiStack_GetPEIInfo] activeRAT is not Wifi.
Line 3839: [IMSSH_UpdatePaniInfo] Context ID : %d, PANI Length : %d
Line 3843: [IMSSH_UpdatePaniInfo] PANI Header
Line 3898: [IMSSH_MultiStack_UpdatePlaniInfo] OPER is NOT TMO, PLANI NOT REQUIRED
Line 3904: [IMSSH_MultiStack_UpdatePlaniInfo] PDN Info DB is NULL for Context ID [%d]
Line 3912: [IMSSH_MultiStack_UpdatePlaniInfo] P-LANI Length : %d
Line 3919: [IMSSH_MultiStack_UpdatePlaniInfo] P-LANI Header
Line 3920: [IMSSH_MultiStack_UpdatePlaniInfo] P-LANI Length : %d
Line 3926: [IMSSH_MultiStack_UpdatePlaniInfo] P-LANI Header
Line 3951: [ERR] 
Line 3955: [IMSSH_GetHomeDomainFromIsim] Derived Home Domain
Line 3978: MncLen [%d]
Line 4019: Home PLMN not valid Derive from IMS IMSI
Line 4023: Home PLMN: 0x%x 0x%x 0x%x
Line 4063: [IMSSH_MultiStack_GetHomeDomainFromUsim] Derived HomeDomain
Line 4082: [ERR] 
Line 4088: [IMSSH_MultiStack_GetHomeDomainFromHiddenMenu] Derived Home Domain
Line 4111: [ERR] 
Line 4113: [IMSSH_MultiStack_GetPrivateUriFromIsim] pSimCfgDb->m_Impi :
Line 4120: [IMSSH_MultiStack_GetPrivateUriFromIsim] Derived Private URI
Line 4148: [IMSSH_MultiStack_GetPrivateUriFromUsim] UserName = 
Line 4154: [IMSSH_MultiStack_GetPrivateUriFromUsim] homeDomain = 
Line 4162: [IMSSH_MultiStack_GetPrivateUriFromUsim] Derived Private URI
Line 4184: [ERR] 
Line 4209: [IMSSH_MultiStack_GetPrivateUriFromHiddenMenu] Derived Public URI
Line 4252: [IMSSH_MultiStack_DeriveAuthUserNameURIFromIMSI] Derived Auth Name URI
Line 4292: [IMSSH_MultiStack_GetImsiBasedUriFromIMPU] UserName
Line 4305: [IMSSH_MultiStack_GetImsiBasedUriFromIMPU] Derived Public URI
Line 4344: [IMSSH_MultiStack_DerivePublicURIFromIMSI] Derived Public URI
Line 4369: [ERR] 
Line 4377: [IMSSH_MultiStack_GetPublicUriFromIsim] VZW: MSISDN based SIP URI
Line 4386: [IMSSH_MultiStack_GetPublicUriFromIsim] UserName
Line 4390: [IMSSH_MultiStack_GetPublicUriFromIsim] Derived Public URI
Line 4399: [IMSSH_MultiStack_GetPublicUriFromIsim] using IMPU list for public URI
Line 4407: [IMSSH_MultiStack_GetPublicUriFromIsim] UserName
Line 4408: [IMSSH_MultiStack_GetPublicUriFromIsim] [LGU] SOS is Present in IMPU, Check for next entry
Line 4413: [IMSSH_MultiStack_GetPublicUriFromIsim] UserName
Line 4419: [IMSSH_MultiStack_GetPublicUriFromIsim] Derived Public URI From IMSI
Line 4423: [IMSSH_MultiStack_GetPublicUriFromIsim] Derived Public URI
Line 4427: [IMSSH_GetPublicUriFromIsim] Derived Public URI
Line 4475: [IMSSH_MultiStack_GetPublicUriFromUsim] Derived Public URI
Line 4498: [ERR] 
Line 4525: [IMSSH_MultiStack_GetPublicUriFromHiddenMenu] Derived Public URI
Line 4721: [IMSSH_MultiStack_GetUserNameFromImsi] Derived Username from IMSI
Line 4777: [IMSSH_MultiStack_DeriveDefaultPrivateUri] Derived Public URI
Line 4787: ValidUriFound [%d]
Line 4794: [IMSSH_MultiStack_DeriveDefaultPrivateUri] Not SKT/TMO operator
Line 4804: [Reg Config Read Setting] [%d]
Line 4823: [Reg Config Read Setting] [%d]
Line 4891: Alert>[IMSSH_DeriveImpuFromPassocURI] P-Associatd-URI of UriType[%d] not present
Line 4902: Alert>[IMSSH_DeriveImpuFromPassocURI] username / hostname is NULL
Line 4912: Alert>[IMSSH_DeriveImpuFromPassocURI] username is NULL
Line 4920: Alert>[IMSSH_DeriveImpuFromPassocURI] Invalid URI Type:%d
Line 4926: [IMSSH_DeriveImpuFromPassocURI] Derived Public URI
Line 4986: [IMSSH_MultiStack_DeriveDefaultPublicUri] Derived Public URI
Line 4996: ValidUriFound [%d]
Line 5011: [Reg Config Read Setting] [%d]
Line 5030: [Reg Config Read Setting] [%d]
Line 5141: [IMSSH_MultiStack_DeriveDefaultAuthParams] UserName
Line 5152: [IMSSH_MultiStack_DeriveDefaultAuthParams] UserName
Line 5159: [IMSSH_MultiStack_DeriveDefaultAuthParams] Realm
Line 5167: Home PLMN not valid Derive from IMS IMSI
Line 5171: Home PLMN: 0x%x 0x%x 0x%x
Line 5179: UserName Domain Name
Line 5182: Alert>UserName Domain, Realm is not matching, Deriving Username from IMSI
Line 5187: [IMSSH_DeriveDefaultAuthParams] Updated UserName
Line 5228: [IMSSH_MultiStack_DeriveDefaultAuthParams] DigestURI
Line 5231: [IMSSH_MultiStack_DeriveDefaultAuthParams] Response
Line 5234: [IMSSH_MultiStack_DeriveDefaultAuthParams] Nonce
Line 5265: [IMSSH_DeriveSupportedHdr]GRUU supported [%d]
Line 5623: [IMSSH_MultiStack_UpdateContactHdrFeature] consolidatedCapa = 0x%llx
Line 5646: Inserting Feature Tag : 
Line 5646: Inserting Feature Tag : 
Line 5646: Inserting Feature Tag : 
Line 5646: Inserting Feature Tag : 
Line 5646: Inserting Feature Tag : 
Line 5649: [IMSSH_MultiStack_DeriveRcsFeatureTag] [Debug]myCapa.FEATURE_64BIT_EXTENDED = %d
Line 5664: [IMSSH_MultiStack_DeriveRcsFeatureTag] Inserting BURN-AFTER-READ support Feature Tag
Line 5678: [IMSSH_MultiStack_DeriveRcsFeatureTag] Inserting sip.mobility feature tag
Line 5685: [IMSSH_MultiStack_DeriveRcsFeatureTag] Inserting RCS Offline Support Tag
Line 5694: [IMSSH_MultiStack_UpdateContactHdrFeature] Inserting RCS SIMPLE-IM feature tags
Line 5708: [IMSSH_MultiStack_DeriveRcsFeatureTag] Inserting ChatBot Session Tag
Line 5709: Inserting Feature Tag : 
Line 5715: [IMSSH_MultiStack_DeriveRcsFeatureTag] Inserting ChatBot StandAlone Tag
Line 5716: Inserting Feature Tag : 
Line 5722: [IMSSH_MultiStack_DeriveRcsFeatureTag] Inserting RCS FT SMS
Line 5723: Inserting Feature Tag : 
Line 5811: [IMSSH_MultiStack_UpdateContactHdrFeature] Inserting feature tags for APP ID:[%d]
Line 5814: Failed to fetch App DB
Line 5821: [IMSSH_MultiStack_UpdateContactHdrFeature] Inserting MMTEL support Feature Tag
Line 5829: [IMSSH_MultiStack_UpdateContactHdrFeature] Inserting PS DATA OFF inactive Feature Tag
Line 5834: [IMSSH_MultiStack_UpdateContactHdrFeature] Inserting PS DATA OFF active Feature Tag
Line 5851: [IMSSH_MultiStack_UpdateContactHdrFeature] KT/SKT HD Icon Disabled
Line 5855: [IMSSH_MultiStack_UpdateContactHdrFeature] KT/SKT HD Icon Enabled
Line 5866: [IMSSH_MultiStack_UpdateContactHdrFeature] Inserting VIDEO support Feature Tag
Line 5871: [RTT_CALL] [REG] [IMSSH_MultiStack_UpdateContactHdrFeature] Inserting TEXT support Feature Tag
Line 5886: [IMSSH_MultiStack_UpdateContactHdrFeature] AIMS_FLASH_ADD_B2C_FEATURE_TAG_IN_CONTACT value =%d
Line 5889: [IMSSH_MultiStack_UpdateContactHdrFeature] Inserting MMTEL COMPOSER Feature Tag
Line 5901: [IMSSH_MultiStack_UpdateContactHdrFeature] Inserting wlan1 into accesstype support Feature Tag
Line 5907: [IMSSH_MultiStack_UpdateContactHdrFeature] Inserting cellular2 into accesstype support Feature Tag
Line 5930: [IMSSH_MultiStack_UpdateContactHdrFeature] Inserting Video Conference Support
Line 5935: [IMSSH_MultiStack_UpdateContactHdrFeature] Inserting SMS support Feature Tag
Line 5958: [IMSSH_MultiStack_UpdateContactHdrFeature] MultiRegSupport[%d]
Line 5962: [IMSSH_MultiStack_UpdateContactHdrFeature] Inserting REGID Feature Tag
Line 5968: [IMSSH_MultiStack_UpdateContactHdrFeature] IncludeSipInstance[%x]
Line 5982: [IMSSH_MultiStack_UpdateContactHdrFeature] Inserting SIP Instance Feature Tag
Line 6037: [IMSSH_MultiStackInsertSipInstanceFeatureTag] IncludeSipInstance[%x]
Line 6060: [IMSSH_MultiStackInsertSipInstanceFeatureTag] Inserting SIP Instance Feature Tag
Line 6087: In function IMSSH_MultiStack_DeriveContactHdrUri
Line 6165: Alert>[IMSSH_MultiStack_DeriveContactHdrUri] Invalid IP Address
Line 6178: [IMSSH_MultiStack_DeriveContactHdrUri] Adding SOS tag to contact Header
Line 6210: In function IMSSH_MultiStack_DeriveVideoContactHdr
Line 6214: Alert>[IMSSH_MultiStack_DeriveVideoContactHdr]pContactHdr is NULL
Line 6222: [ERR] 
Line 6230: Alert>[IMSSH_MultiStack_DeriveVideoContactHdr]pContactHdr->pUri is NULL
Line 6271: [IMSSH_MultiStack_DeriveVideoContactHdr] Inserting wlan1 into accesstype support Feature Tag
Line 6277: [IMSSH_MultiStack_DeriveVideoContactHdr] Inserting cellular2 into accesstype support Feature Tag
Line 6361: In function IMSSH_MultiStack_DeriveAudioContactHdr
Line 6365: Alert>[IMSSH_MultiStack_DeriveAudioContactHdr]pContactHdr is NULL
Line 6373: [ERR] 
Line 6381: Alert>[IMSSH_MultiStack_DeriveAudioContactHdr]pContactHdr->pUri is NULL
Line 6404: [IMSSH_MultiStack_DeriveAudioContactHdr] Inserting wlan1 into accesstype support Feature Tag
Line 6410: [IMSSH_MultiStack_DeriveAudioContactHdr] Inserting cellular2 into accesstype support Feature Tag
Line 6427: [IMSSH_MultiStack_DeriveAudioContactHdr] Inserting AUDIO support Feature Tag
Line 6466: Alert>[IMSSH_DeriveNonInviteCallContactHdr]pContactHdr is NULL
Line 6478: [IMSSH_DeriveNonInviteCallContactHdr] pRegDb is NULL!!!
Line 6486: Alert>[IMSSH_DeriveNonInviteCallContactHdr]pContactHdr->pUri is NULL
Line 6626: [RefresherParam][UAS-0,UAC-1] [%d]
Line 6693: No valid APPID present [%d]
Line 6708: [IMSSH_GetRegisteredSipDomain]:: 
Line 6732: [Reg Config Read Setting] [%d]
Line 6771: [IMSSH_MultiStack_DeriveDefaultHomeDomain] Updated pHomeDomain : 
Line 6835: No valid APPID present for the sessId[%d]
Line 6842: [IMSSH_GetHomeDomainNameFromSessionId] pAppDb is NULL!!!
Line 6865: [IMSSH_GetHomeDomainNameFromAppId] pAppDb is NULL!!!
Line 6913: Alert>Invalid PDNInfo from Context Id
Line 6918: [Reg Config Read Setting] [%d]
Line 6921: [VOLTE] Fetching PCSCF Information from REGISTRY
Line 6928: [REGISTRY] P-CSCF Address (IPv4):0x%x
Line 6934: [REGISTRY] P-CSCF Address (IPv6)
Line 6947: [VOLTE] Fetching PCSCF Information from PDN/SIM Config DB 
Line 6952: Available P-CSCFs:[%d]
Line 6956: P-CSCF Selector:[%d]
Line 6960: MAX P-CSCF retries over, Retrying again from First P-CSCF
Line 6964: P-CSCF Selector:[%d]
Line 6977: MAX P-CSCF retries over IPv4, Retrying again from First P-CSCF of IPv6
Line 6988: MAX P-CSCF retries over IPv6, Retrying again from First P-CSCF of IPv4
Line 7002: [PDN INFO] P-CSCF Address (IPv4):0x%x
Line 7008: [PDN INFO] P-CSCF Address (IPv6)
Line 7033: [PDN INFO]P-CSCF Port:[0x%x]
Line 7075: Alert>[IMSSH_MultiStack_DeriveUeIpInfo] No PDNINFO DB found for contextID(%d)
Line 7085: [IMSSH_MultiStack_DeriveUeIpInfo] UE IP Address (IPv4):0x%x
Line 7092: [IMSSH_MultiStack_DeriveUeIpInfo] UE IP Address (IPv6)
Line 7096: [IMSSH_MultiStack_DeriveUeIpInfo] UE Port:[0x%x]
Line 7125: Alert>[IMSSH_DeriveSmsContactHdr]pContactHdr is NULL
Line 7133: [ERR] 
Line 7139: Alert>[IMSSH_DeriveVideoContactHdr]pContactHdr->pUri is NULL
Line 7175: Alert>INvalid IPType
Line 7182: [ERR] 
Line 7189: [IMSSH_UpdateContactHdrFeature] Inserting CSVOLTE support Feature Tag
Line 7195: [IMSSH_UpdateContactHdrFeature] Inserting CS support Feature Tag
Line 7487: Operator Value [%d]
Line 7763: Alert>INVALID StackId : [%d]
Line 7819: PCT Status : [%d]
Line 7843: IsPreconditionSupported = %d, IsPrackSupported = %d
Line 7847: Is199Supported = %d, IsReplacesSupported = %d
Line 8005: [IMSSH_MultiStack_UpdateHiddenMenu] pConfigInfo->lenVideoMediaInfo[%d]
Line 8009: [IMSSH_MultiStack_UpdateHiddenMenu] pVideoMediainfo[%d] RtpmapVideoMediaAttrCount[%d]
Line 8011: [IMSSH_MultiStack_UpdateHiddenMenu] RtpmapVideoMediaAttrCount[%d]
Line 8012: [IMSSH_MultiStack_UpdateHiddenMenu] BwAS[%d]
Line 8013: [IMSSH_MultiStack_UpdateHiddenMenu] BwRS[%d]
Line 8014: [IMSSH_MultiStack_UpdateHiddenMenu] BwRR[%d]
Line 8015: [IMSSH_MultiStack_UpdateHiddenMenu] isValid[%d]
Line 8016: [IMSSH_MultiStack_UpdateHiddenMenu] map_entry[%d]
Line 8017: [IMSSH_MultiStack_UpdateHiddenMenu] video_orientation[%d]
Line 8023: [IMSSH_MultiStack_UpdateHiddenMenu] pConfigInfo->lenAmrNbMediaInfo[%d]
Line 8031: [IMSSH_MultiStack_UpdateHiddenMenu] NbCount[%d]
Line 8037: [IMSSH_MultiStack_UpdateHiddenMenu] Updating pAmrnbMediainfo->amrnbCodecCount to max
Line 8061: amrnbCodecCount [%d]
Line 8065: [IMSSH_MultiStack_UpdateHiddenMenu] pConfigInfo->lenAmrWbMediaInfo[%d]
Line 8071: [IMSSH_MultiStack_UpdateHiddenMenu] pAmrwbMediainfo->amrwbCodecCount[%d]
Line 8084: [IMSSH_MultiStack_UpdateHiddenMenu] pConfigInfo->lenEvsMediaInfo[%d]
Line 8090: [IMSSH_MultiStack_UpdateHiddenMenu] pEvsMediainfo->evsCodecCount[%d]
Line 8103: [IMSSH_MultiStack_UpdateHiddenMenu] pConfigInfo->lenRttMediaInfo[%d]
Line 8112: [IMSSH_MultiStack_UpdateHiddenMenu] pConfigInfo->lenDtmfMediaInfo[%d]
Line 8136: [IMSSH_MultiStack_UpdateHiddenMenu] reliable18x[%d] localNumType[%d] calledNumSource[%d] enableEmcTimer[%d]
Line 8137: [IMSSH_MultiStack_UpdateHiddenMenu] rtpOverDefaultBearer[%d] serverHeaderRequired [%d]
Line 8138: [IMSSH_MultiStack_UpdateHiddenMenu] epsfbOffsetDuration [%d] RatChangeOffsetTmr [%d]
Line 8139: [IMSSH_MultiStack_UpdateHiddenMenu] sipMsgMtuCheck [%d]
Line 8173: Derived AIMS_UA_MANAFACTURE_VALUE
Line 8187: Derived AIMS_FLASH_UA_MODEL_VALUE
Line 8201: Derived AIMS_FLASH_UA_SWRELVER_VALUE
Line 8215: Derived AIMS_FLASH_UA_PRODRELVER_VALUE
Line 8228: Derived AIMS_FLASH_UA_APOSVER_VALUE
Line 8263: [IMSSH_MultiStack_UpdateHiddenMenu] Timer Values SessExp[%u]
Line 8285: [IMSSH_MultiStack_UpdateHiddenMenu] smsAddrLen, array limit exceeded [%d]
Line 8315: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] Session Refresh Method [%d]
Line 8321: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] Session Refresh Type [%d]
Line 8328: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] Privacy Header Field Type[%d]
Line 8335: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] Reliable18xSupport [%d]
Line 8341: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] ConfSubscribeType [%d]
Line 8346: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] MediaAllowedOnDefaultBearer Bitmask[0x%x]
Line 8354: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] MO Dedicated Bearer Wait Timer value [%d] msec
Line 8360: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] MT Dedicated Bearer Wait Timer value [%d] msec
Line 8367: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] RingbackTimerVal [%d] sec
Line 8375: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] RingingTimerVal [%d] sec
Line 8382: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] TCall Timer value [%d]msec
Line 8389: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] OipSourceFromHdr value [%d]
Line 8396: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] RTT RTP Timeout Timer value [%d]sec
Line 8404: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] RTT RTCP Timeout Timer value [%d]sec
Line 8411: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] RTT/Video MO Upgrade Timer value [%d]msec
Line 8418: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] RTT/Video MT Upgrade Timer value [%d]msec
Line 8427: Alert>[IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] XcapAsServerDomain Len is more than expected
Line 8430: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfigv] XcapAsServerDomain
Line 8436: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] XcapAsRemoteport [%d]
Line 8442: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] XcapAsTransportType [%d]
Line 8450: Alert>[IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] XcapAsServerDomain Len is more than expected
Line 8453: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] XcapBsfServerDomain
Line 8459: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] XcapBsfRemoteport [%d]
Line 8465: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] XcapBsfTransportType [%d]
Line 8470: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] QoSPrecondEnableForMedia Bitmask[0x%x]
Line 8478: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] epsfbRetryErrorCode [%d]
Line 8484: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] lteWiFiRetryErrorCode [%d]
Line 8490: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] VoLTEVoWiFiSilentRetry [%d]
Line 8493: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] ConfServerUriLength: %d
Line 8497: [IMSSH_MultiStack_UpdateRegistryRuntimeFromCarrierConfig] ConfServerUri: 
Line 8517: ================= [IMSSH_MultiStack_CheckForOngoingSession] =================
Line 8521: [IMSSH_MultiStack_CheckForOngoingSession] APP ID[%p], Service Type[%d], PDN Service Type[%d]
Line 8524: [IMSSH_MultiStack_CheckForOngoingSession] Call Session Ongoing
Line 8604: [IMSSH_MultiStack_UpdateRegistryFromCodecCarrierConfig] AmrNbPLType[0]= %d, AmrNbPLType[1] = %d
Line 8611: [IMSSH_MultiStack_UpdateRegistryFromCodecCarrierConfig] AmrNbOpenOfferPLType[0]= %d
Line 8624: [IMSSH_MultiStack_UpdateRegistryFromCodecCarrierConfig] AmrWbPLType[0]= %d, AmrWbPLType[1] = %d
Line 8630: [IMSSH_MultiStack_UpdateRegistryFromCodecCarrierConfig] redPayloadType = %d
Line 8636: [IMSSH_MultiStack_UpdateRegistryFromCodecCarrierConfig] t140PayloadType = %d
Line 8642: [IMSSH_MultiStack_UpdateRegistryFromCodecCarrierConfig] DtmfWbPayloadType = %d
Line 8648: [IMSSH_MultiStack_UpdateRegistryFromCodecCarrierConfig] DtmfNbPayloadType = %d
Line 8694: [IMSSH_MultiStack_UpdateRegistryFromCodecCarrierConfig] EvsPLType[%d] = %d, evsBrMin[%d] = %d, evsBrMax[%d] = %d, evsChAwRecv[%d] = %d, evsBWInfo[%d] = %d,
Line 8767: [IMSSH_UpdateRegistryFromRegCarrierConfig] EVSArray[%d]: 
Line 8768: EVS Hex Data: 
Line 8803: [IMSSH_MultiStack_UpdateServiceConfigInfo] ConfigUpdateType[%u]
Line 8813: [IMSSH_MultiStack_UpdateServiceConfigInfo] DomainName
Line 8819: [IMSSH_MultiStack_UpdateServiceConfigInfo] TimerT1[%u]
Line 8825: [IMSSH_MultiStack_UpdateServiceConfigInfo] TimerF[%u]
Line 8831: [IMSSH_MultiStack_UpdateServiceConfigInfo] TimerT2[%u]
Line 8838: [IMSSH_MultiStack_UpdateServiceConfigInfo] AmrNbModeSet
Line 8845: [IMSSH_MultiStack_UpdateServiceConfigInfo] AmrWbModeSet
Line 8851: [IMSSH_MultiStack_UpdateServiceConfigInfo] SessionExpires[%u]
Line 8857: [IMSSH_MultiStack_UpdateServiceConfigInfo] MinSe[%u]
Line 8863: [IMSSH_MultiStack_UpdateServiceConfigInfo] InviteTimeoutVal[%u]
Line 8869: [IMSSH_MultiStack_UpdateServiceConfigInfo] TdelayVal[%u]
Line 8875: [IMSSH_MultiStack_UpdateServiceConfigInfo] SilentRedial[%u]
Line 8896: [IMSSH_MultiStack_UpdateRegistryFromServiceConfigInfo] ConfigUpdateType[%u]
Line 8980: [IMSSH_MultiStack_FreeHiddenMenuDb] Free HiddenMenuDB
Line 9109: IMSSH_MultiStack_SetMediaInitStateForAPRTP: Status [%d] StackId [%d]
Line 9113: IMSSH_MultiStack_SetMediaInitStateForAPRTP: Wrong StackId [%d]
Line 9132: IMSSH_MultiStack_GetMediaInitStateForAPRTP: Status [%d], StackId [%d]
Line 9137: [IMSSH_MultiStack_GetMediaInitStateForAPRTP] Wrong StackId= %d
Line 9184: IMSSH_MultiStack_SetCallStatusfor3GPPOnPeerStack: Status [%d], StackId [%d]
Line 9203: IMSSH_MultiStack_GetCallStatusfor3GPPOnPeerStack: Status [%d], StackId [%d]
Line 9208: [IMSSH_MultiStack_GetCallStatusfor3GPPOnPeerStack] Wrong StackId= %d
Line 9252: [IMSSH_SimStringConvertUri] URI TYPE:[%d]
Line 9262: [IMSSH_SimStringConvertUri] UserName
Line 9279: [IMSSH_SimStringConvertUri] UserName
Line 9293: [IMSSH_SimStringConvertUri] HostName
Line 9315: In function IMSSH_SipCompareUri
Line 9325: IP type mismatch in uril compare
Line 9332: Hostname is  matching
Line 9337: Hostname is not matching
Line 9396: [IMSSH_IsPAssertMatchedRouteHdr] No Matching Record Route found for P-AssrtedId
Line 9460: [IMSSH_MultiStack_UpdateTaskDbFromReg] Derived UserName
Line 9468: [IMSSH_MultiStack_UpdateTaskDbFromReg] Derived Pwd
Line 9476: [IMSSH_MultiStack_UpdateTaskDbFromReg] Derived AuthName
Line 9484: [IMSSH_MultiStack_UpdateTaskDbFromReg] Derived PrefId
Line 9492: [IMSSH_MultiStack_UpdateTaskDbFromReg] Derived Domain
Line 9500: [IMSSH_MultiStack_UpdateTaskDbFromReg] Derived Realm
Line 9513: [IMSSH_MultiStack_UpdateTaskDbFromReg] Derived PrivateURI
Line 9518: [IMSSH_MultiStack_UpdateTaskDbFromReg] Truncating as :PrivateURI  Len [%d] > pShOperDb->SH_PRIVATE_USER_ID_VAL [%d]
Line 9523: [IMSSH_MultiStack_UpdateTaskDbFromReg] Derived PrivateUserIdentityVal
Line 9534: [IMSSH_MultiStack_UpdateTaskDbFromReg] Truncating as :PublicURI  Len [%d] > pShOperDb->SH_PUBLIC_USER_ID_VAL [%d]
Line 9539: [IMSSH_MultiStack_UpdateTaskDbFromReg] Derived PublicUserIdentityVal
Line 9552: [IMSSH_MultiStack_UpdateTaskDbFromReg] GRUU supported [%d]
Line 9561: [IMSSH_MultiStack_UpdateTaskDbFromReg] Derived SelfPort [%d] m_Pcsfport[%d] m_Regexp[%u]
Line 9578: [IMSSH_MultiStack_UpdateTaskDbFromReg] Truncating as :UA Len [%d] > pShOperDb->SH_USER_AGENT_VAL [%d]
Line 9583: [IMSSH_MultiStack_UpdateTaskDbFromReg] Derived UserAgentVal
Line 9591: [IMSSH_MultiStack_UpdateTaskDbFromReg] Timer Values SipTimerT1Val[%u], SipTimerT2Val[%u], SipTimerT4Val[%u]
Line 9599: [IMSSH_MultiStack_UpdateTaskDbFromReg] Timer Values A[%u], B[%u], C[%u], D[%u]
Line 9607: [IMSSH_MultiStack_UpdateTaskDbFromReg] Timer Values E[%u], F[%u], G[%u], H[%u]
Line 9613: [IMSSH_MultiStack_UpdateTaskDbFromReg] Timer Values I[%u], J[%u], K[%u]
Line 9627: [IMSSH_MultiStack_UpdateTaskDbFromReg] Timer Values SessExp[%u],MinSe[%u],RingBackTmr[%u],RingingTmr[%u]
Line 9630: [IMSSH_MultiStack_UpdateTaskDbFromReg] RtpTimeout[%u], TextRtpTimeout[%u]
Line 9633: [IMSSH_MultiStack_UpdateTaskDbFromReg] TextRtcpTimeout[%u], NeedCheckingPAI[%u]
Line 9637: [IMSSH_MultiStack_UpdateTaskDbFromReg] ForceIncSdpSessVer[0x%x]
Line 9641: [IMSSH_MultiStack_UpdateTaskDbFromReg] IsDelayDediBearerActivation [%d]
Line 9649: IsTimerSupported = %d
Line 9659: IsIPSecSupported = %d
Line 9688: [IMSSH_MultiStack_UpdateTaskDbFromReg] PortS[%u], PortC[%u]
Line 9714: [IMSSH_MultiStack_UpdateTaskDbFromReg] Derived SMS ADDR
Line 9718: [IMSSH_MultiStack_UpdateTaskDbFromReg] smsAddrLen, array limit exceeded [%d]
Line 10077: In function IMSSH_MultiStack_UpdateMyCapaInfo
Line 10079: [ERR] 
Line 10134: MO Data ACB status [%d], appId[%d]
Line 10135: ImsRegBarred status [%d],SMSBarred Status [%d], Barring_Type [%d]
Line 10153: VoLTE ServiceType for AccessBarring : 0x%x, %d
Line 10164: VIDEO ServiceType for AccessBarring : 0x%x, %d
Line 10428: Alert>[IMSSH_DeriveContactURI]pContactHdr is NULL
Line 10440: [ERR] 
Line 10448: Alert>[IMSSH_DeriveContactURI]pContactHdr->pUri is NULL
Line 10489: Alert>INvalid IPType
Line 10516: Alert>[IMSSH_DeriveContactURI] MEM ALLOC FAILED
Line 10522: Alert>[IMSSH_DeriveContactURI] Other params are NULL for GRUU enabled scenario
Line 10545: Alert>[IMSSH_DeriveUeInfoFrmRegDB] Invalid IP type
Line 10549: Alert>[IMSSH_DeriveUeInfoFrmRegDB] Reg DB is NULL
Line 10578: ---------------IMS REG Context Data ----------------------
Line 10579: App ID -> %d
Line 10580: REG STATE -> IMSSH_REGC_STATE_%d
Line 10581: Service -> 0x%x
Line 10608: pAppDb is NULL!
Line 10633: ---------------Network Context Data ----------------------
Line 10635: Stack ID -> %d Active Rat -> %s Reg Status -> %s
Line 10636: PLMN Info -> [0x%X 0x%X 0x%X]
Line 10638: PlmnAttribute [%d] [3: VPLMN_HOME_COUNTRY_PS_DISABLE, 5: VPLMN_HOME_COUNTRY_PS_ENABLE]
Line 10645: TAC Info -> [0x%X 0x%X] IMS Voice Support -> %d IMS Emergency Support -> %d
Line 10649: Curr Operator -> %s_%s
Line 10771: User Agent -> 
Line 11012: [Debug] (Capability & IMSSH_CAP_MASK64BIT_EXTENDED) = 0x%x
Line 11016: [Debug] CapabilityExt = 0x%x
Line 11065: INVALID PCSCF IP Address, Check the IP DB
Line 11124: Prev Operator:[%d]--> NewOperator [%d]
Line 11157: Dynamic Operator Flag : [%d] 
Line 11178: Home PLMN not valid Derive from IMS IMSI
Line 11189: Home PLMN not valid in NW Info DB
Line 11194: Home PLMN: 0x%x 0x%x 0x%x
Line 11231:  PalPlmnProvider[%d] mapped to AIMS OperVal[%d]
Line 11239: [IMSSH_CheckAndUpdateOperator] Set PCT flag to TRUE 
Line 11248:  Mismatch in Operator Value [%d]
Line 11261:  Dynamic Operator Value change : Not supported, No Change in Operator value, Current Operator [%d][%s]
Line 11277: IMSSH_SetStopReqPending: [%d]
Line 11293: IMSSH_GetStopReqPending: [%d]
Line 11354: [IMSSH_UpdateActiveStackId] Old: [%d] / New: [%d]
Line 11369: Active StackId : [%d]
Line 11405: [IMSSH_GetSrncState] Stack id [%d] SRNC State %d (%s)
Line 11409: [IMSSH_GetSrncState] Wrong stack id: [%d]
Line 11438: [IMSSH_UpdateSrncState] for peer Stack:[%s]
Line 11442: [IMSSH_UpdateSrncState] [%s], SRNC State %d (%s)
Line 11443: [IMSSH_UpdateSrncState] [%s], SRNC State %d
Line 11446: [IMSSH_UpdateSrncState] Wrong stack id: [%d]
Line 11465: [IMSSH_SetGrantedStack] peer [%s]
Line 11468: [IMSSH_SetGrantedStack] Current Granted [%s]
Line 11473: [IMSSH_SetGrantedStack] StackId Value Invalid %d
Line 11496: [IMSSH_GetGrantedStack] Current Granted Stack : [%d]   [0: Stack1, 1: Stack2, 2:NONE]
Line 11535: [IMSSH_MapGrantIndex] Requested Proc %d is unknown
Line 11571: [IMSSH_DeMapGrantProc] Requested Index %d is unknown
Line 11622: [SRNC] No Action, Continue
Line 11631: [SRNC] RAT for Current AppId is WiFi, Skip Grant Requesting
Line 11639: [IMSSH_GetGrantRequestStatus] Grant Type %d (%s) for [%s]
Line 11651: Replace IMSSH StackId = from %d to %d [%s]
Line 11656: [IMSSH_GetGrantRequestStatus] [%s] IsGrantRequested [%d] GrantType %d (%s)
Line 11670: [IMSSH_GetGrantRequestStatus] Stack %d (%s) return %d
Line 11700: [IMSSH_SetGrantRequestStatus] peer [%s]
Line 11708: [IMSSH_SetGrantRequestStatus] [%d].IsGrantRequested for %s set to [%d]
Line 11713: [IMSSH_SetGrantRequestStatus] Clear [%d].GrantType to SRNC_IDLE
Line 11718: [IMSSH_SetGrantRequestStatus] Set [%d].GrantType to %d (%s)
Line 11723: [IMSSH_SetGrantRequestStatus] Mapping Failed, Index [%d]
Line 11743: ============== [IMSSH_DisplayGrantRequestStatus] ============== 
Line 11744: WAS GRANTED: [%s]
Line 11750:      [%s], SRNC State %d (%s)
Line 11755:   - Grant Index %d (%s), Requested Status [%d], Grant Requested Type %d (%s)
Line 11777: [IMSSH_ProcessSRNCGrantDuringHoToNon3GPP] [%s]
Line 11783:        [IMSSH_ProcessSRNCGrantDuringHoToNon3GPP] SRNC State %d (%s)
Line 11788:     - Grant Index [%d] %s
Line 11789: 				 . Requested Status [%d]
Line 11929: [IMSSH_CheckCurrentStackGrant] Srnc State : Not IMS Processed State
Line 11952: [IMSSH_ValidateSrncProcType] %d (%s)
Line 11964: [IMSSH_ValidateSrncProcType] Grant Result : [%d]
Line 11970: Grants : NA
Line 11976: [IMSSH_ValidateSrncProcType] SrncProcType Invalid %d
Line 12002: IMSSH_CheckGrantStatus Invalid StackId %d or SrncProcType %d, return FALSE
Line 12012: [IMSSH_CheckGrantStatus] Grant Value %d [0:FALSE,1:TRUE]
Line 12022: [IMSSH_CheckGrantStatus] VoMobile enabled, Grant Value %d [0:FALSE,1:TRUE]
Line 12061: [IMSSH_CheckGrantStatus] PLMNSEARCH Observed in Grant Rsp:, Release and Re-Req [%d]
Line 12068: MSGTMR-START: %s SessId = %d, TmrDuation(ms) = %d, pArg=%p
Line 12076: [IMSSH_CheckGrantStatus] Plmn Search Ongoing-False, Process SRNC Response
Line 12083: [IMSSH_CheckGrantStatus] Grant Value %d [0:FALSE,1:TRUE]
Line 12106: ================= [IMSSH_CheckForPendingProcPerAppSess] =================
Line 12113: ================= [IMSSH_CheckForPendingProcPerAppSess] =================
Line 12114: [IMSSH_CheckForPendingProcPerAppSess] [%s], Proc Type [%d], Appid [%d]
Line 12123: [IMSSH_CheckForPendingProcPerAppSess] Session Id %d / App Id %d / Session Type %d (%s)
Line 12132: [IMSSH_CheckForPendingProcPerAppSess] SMS Or Reg Session Ongoing
Line 12146: [IMSSH_CheckForPendingProcPerAppSess] Internal Silent Retry Ongoing : Treat as NO Call Session Ongoing
Line 12151: [IMSSH_CheckForPendingProcPerAppSess] Call Session Ongoing
Line 12159: [IMSSH_CheckForPendingProcPerAppSess] No Ongoing Procedure matched, Return as ERROR
Line 12184: ================= [IMSSH_CheckForPendingProc] =================
Line 12185: [IMSSH_CheckForPendingProc] [%s], Proc Type [%d]
Line 12189: [IMSSH_CheckForPendingProc] pAppDb[%p],service[0x%x],Pdnservice[0x%x]
Line 12225: [IMSSH_CheckForPendingProc] No Pending Process, Return FALSE
Line 12249: ================= [IMSSH_ValidateRatForSrncPendingProc] =================
Line 12250: [IMSSH_ValidateRatForSrncPendingProc] [%s], Proc Type [%d]
Line 12254: [IMSSH_ValidateRatForSrncPendingProc] pAppDb[%p],service[0x%x],Pdnservice[0x%x]
Line 12275: [IMSSH_ValidateRatForSrncPendingProc] No Pending Process, Return [%d]
Line 12304: For [%s], Reg State : [%d], Prev Reg State [%d]
Line 12325: [IMSSH_HandleGrantRequestFailForCall] Resetting CSCALL Grant Request Status
Line 12372: [IMSSH_ProcessPendingMsgByEvent] DSDS Pending List is Empty
Line 12391: [IMSSH_ProcessPendingMsgByEvent] Internal Event Received for [%s], Internal Event %d (%s)
Line 12394: [IMSSH_ProcessPendingMsgByEvent] Message posting failed
Line 12404: [IMSSH_ProcessPendingMsgByEvent] IMSSH_AC_HandleSMSRetryExpiryHdlr returned with ERROR
Line 12413: [IMSSH_ProcessPendingMsgByEvent] IMSSH_EC_SUBS_HandleSubscribeRetryAfterExpiryHdlr returned with ERROR
Line 12433: [IMSSH_ProcessPendingMsgByEvent] Processing for [%s], Internal Event %d (%s)
Line 12474: [IMSSH_ProcessPendingMsgByEvent] Internal Event %d (%s) not found in [%s]
Line 12487: [IMSSH_GetPendingNodeByStack] For [%s]
Line 12491: Error : Pending List is Empty
Line 12520: [IMSSH_DisplayDsDsList] DSDS Pending List is Empty
Line 12527: ============== [IMSSH_DisplayDsDsList] ==============
Line 12534: [ [%s] || Internal Event - %d (%s) || ProcType - %d (%s) ]
Line 12556: [IMSSH_SendDeregFailIndtoAP] Failure Indication for Event %d (%s) - [%s]
Line 12581: [IMSSH_RemovePendingList] DSDS Pending List is Empty
Line 12589: [IMSSH_RemovePendingList] Removing Node for [%s] for Internal Event %d (%s)
Line 12606: [IMSSH_RemovePendingList] SRNC Grant was released already. 
Line 12676: [IMSSH_CC_RejectCallSetupReqFromDsNode] Reject MO Call, Cause: %d
Line 12701: [IMSSH_RemovePendingMsgByIntEvent] Reset for [%s]
Line 12705: [IMSSH_RemovePendingMsgByIntEvent] DSDS Pending List is Empty
Line 12715: [IMSSH_RemovePendingMsgByIntEvent] Removing Node for [%s] for Internal Event %d (%s)
Line 12787: [IMSSH_RemovePendingMsgByStackId] Reset for [%s]
Line 12791: [IMSSH_RemovePendingMsgByStackId] DSDS Pending List is Empty
Line 12801: [IMSSH_RemovePendingMsgByStackId] Removing Node for [%s] for Internal Event %d (%s)
Line 12817: [IMSSH_RemovePendingMsgByStackId] SRNC Grant was released already. 
Line 12879: [IMSSH_RC_ImsStackRelUpdate] Grant was not Requested, Dont send Resume Req
Line 12897: [IMSSH_ResetDsDsProcInfo] Reset for [%s]
Line 12984: [SET] Dual SIM State -> [%d] [1: SIM1, 2 : SIM2, 3-Dual Sim]
Line 13003: [CLEAR] Dual SIM State -> [%d] [1: SIM1, 2 : SIM2, 3-Dual Sim]
Line 13017: [GET] Dual SIM State -> [%d] [1: SIM1, 2 : SIM2, 3-Dual Sim]
Line 13039: [ERR] 
Line 13123:  [GET] IsEmptyPublish : [%d] StackId [%d]
Line 13143:  [SET] IsEmptyPublish : [%d] StackId [%d]
Line 13159:  [GET] IsLocForEmcPending : [%d] StackId [%d]
Line 13179:  [SET] IsLocForEmcPending : [%d] StackId [%d]
Line 13199:      [GET] 424RetryBitmask : [0x%X] for OperType [%d][1-INVITE, 2-REGISTER, 4-SUBS]
Line 13226:      [SET] 424RetryBitmask : [0x%X] -> [0x%X]        OperType [%d][1-INVITE, 2-REGISTER, 4-SUBS]
Line 13242:  [GET] Is424RetryPending : [%d] StackId [%d]
Line 13262:  [SET] Is424RetryPending : [%d] StackId [%d]
Line 13309: [SHDB]ERR: [IMSSH_GetAppDbFromAppId] INVALID APP ID
Line 13317: [IMSSH_GetAppDbFromAppId]APPDB:[0x%x] for APPID:[%d] CurrentRan[%d]
Line 13321: [SHDB]ERR: [IMSSH_GetAppDbFromAppId] pAppDb not found!
Line 13409: IMSSH_SetImsSigRatInfo: SI %d,bk %d,St %d,Rat %d
Line 13410: IMSSH_SetImsSigRatInfo: st %d
Line 13512: [IMSSH_MapRatValueFromPDNMgr] Received: [%d]
Line 13561: [IMSSH_GetScreenStatus] gIMSSH_MainDb.screenStatus = %d
Line 13640: [IMSSH_IsGeoLocReceivedFromAP] Is_Configured [%d]
Line 13668:  IMSSH_GetGeoLocConfigured Is_Configured [%d], IsnewLoc[%d] sessionId[%d]
Line 13705:  IMSSH_GetGeoLocContentPtr #debug
Line 13728:  IMSSH_GetGeoLocReceivedContentPtr #debug
Line 13757: IMSSH_UpdateGeoLocContent data:
Line 13775:  [SET] SetGeoLocConfigured : [%d] StackId [%d]
Line 13800: [IMSSH_MultiStack_UpdateActRatToAppDb]APPDB:[0x%x] for APPID:[%d] CurrentRan[%d]
Line 13852: DSDS Pending List is Empty
Line 13859:  SRNC Internal Event [%d][1-REG, 2-SMS, 3-DEREG, 4-REREG] is pending in Stack [%d]
Line 5328: [IMSSH_MultiStack_DeriveRcsFeatureTag] Inserting ERC Tag
Line 5330: [IMSSH_MultiStack_DeriveRcsFeatureTag] [Debug]myCapa.FEATURE_ERICH_COMPOSESESSION = %d
Line 5331: [IMSSH_MultiStack_DeriveRcsFeatureTag] [Debug]myCapa.FEATURE_ERICH_COMPOSEMMTEL = %d
Line 5332: [IMSSH_MultiStack_DeriveRcsFeatureTag] [Debug]myCapa.FEATURE_ERICH_POSTCALL = %d
Line 5333: [IMSSH_MultiStack_DeriveRcsFeatureTag] [Debug]myCapa.FEATURE_ERICH_SHAREDMAP = %d
Line 5334: [IMSSH_MultiStack_DeriveRcsFeatureTag] [Debug]myCapa.FEATURE_ERICH_SHAREDSKETCH = %d
Line 5335: [IMSSH_MultiStack_DeriveRcsFeatureTag] [Debug]myCapa.FEATURE_ERICH_COMPOSEMMTEL_B2C = %d
Line 5352: Inserting Feature Tag : 
Line 5365: Inserting Feature Tag : 
Line 5371: Inserting Feature Tag : 
Line 5377: Inserting Feature Tag : 
Line 5436: Inserting Feature Tag : 
Line 5441: Inserting Feature Tag : 
Line 5446: Inserting Feature Tag : 
Line 5451: Inserting Feature Tag : 
Line 5456: Inserting Feature Tag : 
Line 5461: Inserting Feature Tag : 
Line 5466: Inserting Feature Tag : 
Line 5471: Inserting Feature Tag : 
Line 5476: Inserting Feature Tag : 
Line 5505: Inserting Feature Tag : 
Line 5510: [IMSSH_MultiStack_DeriveRcsFeatureTag] Inserting RCS Geopush
Line 5511: Inserting Feature Tag : 
Line 5516: [IMSSH_MultiStack_DeriveRcsFeatureTag] Inserting RCS Geopush Fallback support via SMS
Line 5517: Inserting Feature Tag : 
Line 5522: [IMSSH_MultiStack_DeriveRcsFeatureTag] Inserting RCS FT ThumbNail
Line 5523: Inserting Feature Tag : 
Line 5408: Inserting Feature Tag : 
Line 5592: [IMSSH_MultiStack_DeriveRcsFeatureTag] Inserting ChatBot version Tag
Line 5760: [IMSSH_MultiStack_UpdateContactHdrFeature] Inserting CSVOLTE support Feature Tag
Line 5766: [IMSSH_MultiStack_UpdateContactHdrFeature] Inserting CS support Feature Tag
Line 5771: [IMSSH_MultiStack_UpdateContactHdrFeature] Inserting MMTEL support Feature Tag
Line 5778: [IMSSH_MultiStack_UpdateContactHdrFeature] Inserting CDMA-Less support Feature Tag
Line 7933: Conferce Factory URI Read from Hidden Menu:
Line 11852: [IMSSH_CheckGrantCondition] Srnc State is Not a IMS Processed State
Line 11855: [IMSSH_CheckGrantCondition] Return SrncState [%d]
