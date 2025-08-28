Line 486: XCAPM: Main DB Initialisation
Line 510: Registry Config Db Initialising
Line 575: SIM Config Db Initialising
Line 595: SS Config Db Initialising
Line 738: GBA Config Data Initialising
Line 761: HTTP Config Data Initialising
Line 794: Ip Config Data Initialising
Line 824: XCAP Services Config Db Initialising
Line 901: START  --------  <%s>  -------
Line 932: XCAPM: Config DB Initialisation
Line 959: START  --------  <%s>  -------
Line 961: XCAPM: Data Base Initialisation
Line 1068: START  --------  <%s>  -------
Line 1074: HTTP Transport Ports -> [AS : %d] [BSF : %d]
Line 1149: START  --------  <%s>  -------
Line 1164: Alert>XCAPM_ReadStoredGbaInfo: MemAlloc Fail
Line 1170: Alert>XCAPM_ReadStoredGbaInfo: MemAlloc Fail
Line 1177: Alert>XCAPM_ReadStoredGbaInfo: MemAlloc Fail
Line 1185: Alert>XCAPM_ReadStoredGbaInfo: MemAlloc Fail
Line 1194: Alert>XCAPM_ReadStoredGbaInfo: MemAlloc Fail
Line 1204: Alert>XCAPM_ReadStoredGbaInfo: MemAlloc Fail
Line 1226: XCAPM_REGISTRY_READ BTID Lifetime Validty time  taking
Line 1227: XCAPM_REGISTRY_READ BTID Lifetime Validty time -> 
Line 1231: XCAPM_REGISTRY_READ IMPI
Line 1232: XCAPM_REGISTRY_READ IMPI -> 
Line 1236: XCAPM_REGISTRY_READ Btid
Line 1237: XCAPM_REGISTRY_READ Btid -> 
Line 1241: XCAPM_REGISTRY_READ KsNaf
Line 1242: XCAPM_REGISTRY_READ KsNaf -> 
Line 1245: XCAPM_REGISTRY_READ AS NC : [%d] 
Line 1246: XCAPM_REGISTRY_READ Qop  [%d] [1: auth, 2: auth-int, 3: auth & auth-int]
Line 1247: XCAPM_REGISTRY_READ Algorithm Id  -> [%d] [0 : NULL, 1:MD5, 2:AKA_V1_MD5]
Line 1251: XCAPM_REGISTRY_READ Realm
Line 1252: XCAPM_REGISTRY_READ Realm -> 
Line 1256: XCAPM_REGISTRY_READ Nonce
Line 1257: XCAPM_REGISTRY_READ Nonce -> 
Line 1261: XCAPM_REGISTRY_READ Opaque
Line 1262: XCAPM_REGISTRY_READ Opaque -> 
Line 1315: XCAPM_IsBsfImsDomainRequired [%d]
Line 1333: XCAPM_REGISTRY_CONFIG_UPDATE GbaUbType [%d]
Line 1349: XCAPM_REGISTRY_CONFIG_READ GbaUbType [%d]
Line 1368: XCAPM_REGISTRY_CONFIG_UPDATE GbaUbMode [%d]
Line 1384: XCAPM_REGISTRY_CONFIG_READ GbaUbMode [%d]
Line 1455: Root URI : [%d]
Line 1737: XCAPM_REGISTRY_CONFIG_UPDATE Verification Type -> [%d] [0- Live,  1-NVIOT, 2 - NSIOT]
Line 1959: XCAPM_REGISTRY_CONFIG_READ Pref IP Type -> [%d]
Line 1985: XCAPM_REGISTRY_CONFIG_READ P3 Config Val -> [%d] [0-REALM, 1-FQDN_XCAP_SERVER]
Line 2035: XCAPM_REGISTRY_CONFIG_READ CW Config -> [%d] [0- Terminal,  1-External]
Line 2072: XCAPM_REGISTRY_CONFIG_UPDATE CW Config -> [%d] [0- Terminal,  1-External]
Line 2133: START  --------  <%s>  -------
Line 2156: XCAPM_REGISTRY_READ DS Proc Enable Status [%d]
Line 2208: XCAPM_REGISTRY_READ Registry Config ->   [%d]
Line 2209: XCAPM_REGISTRY_READ Verification Type -> [%d]
Line 2210: XCAPM_REGISTRY_READ DNS Support -> 	     [%d]
Line 2211: XCAPM_REGISTRY_READ GBA ME support ->  [%d]
Line 2212: XCAPM_REGISTRY_READ HTTP Transport Type -> [AS : %d] [BSF : %d] [0-TCP, 1-TLS] 
Line 2213: XCAPM_REGISTRY_READ HTTP Transport AS Local Ports Range ->  : (%d - %d)
Line 2214: XCAPM_REGISTRY_READ HTTP Transport BSF Local Ports Range -> : (%d - %d)
Line 2215: XCAPM_REGISTRY_READ HTTP Transport Remote Ports -> [AS : %d] [BSF : %d]
Line 2216: XCAPM_REGISTRY_READ CW Config -> [%d] [0- Terminal,  1-External]
Line 2217: XCAPM_REGISTRY_READ CS Retry -> [%d]
Line 2218: XCAPM_REGISTRY_READ Media Tag Config -> [%d]
Line 2219: XCAPM_REGISTRY_READ IR92 Rule Info Handling Version -> [%d]
Line 2220: XCAPM_REGISTRY_READ Target URI Type -> [%d]
Line 2221: XCAPM_REGISTRY_READ CFNL Config -> [%d]
Line 2222: XCAPM_REGISTRY_READ SS Cache Status Support -> [%d]
Line 2223: XCAPM_REGISTRY_READ CFNR NoReply Node Requirement -> [%d]
Line 2224: XCAPM_REGISTRY_READ Pref Ip Type -> [%d][1-IPV4, 2-IPV6]
Line 2225: XCAPM_REGISTRY_READ P3 Config Val -> [%d][0-REALM, 1-FQDN_AS_SERVER]
Line 2229: XCAPM_REGISTRY_READ Last Registered Operator -> [%d]
Line 2230: XCAPM_REGISTRY_READ Last Registered User Id -> 
Line 2408: No Predefined Domain names for Operator [%d],Expecting Correct value to be set in Registry for testing
Line 2439: Alert>Flow Should not come here, Operator Specific Domain Set to be done for defined Operators.
Line 2446: AS Server Domain -> 
Line 2452: BSF Server Domain -> 
Line 2532: AS SERVER DOMAIN -> Taken from Registry
Line 2546: AS SERVER DOMAIN -> FAILED to read from REGISTRY 
Line 2552: BSF SERVER DOMAIN -> Taken from Registry
Line 2557: BSF SERVER DOMAIN -> FAILED to read from REGISTRY 
Line 2584: START  --------  <%s>  -------
Line 2590: SIM Application Type -> %d [4-usim, 7-isim]
Line 2604: IMPI -> 
Line 2615:  Derived IMPI -> 
Line 2621: Alert>Derived IMPI -> NULL!
Line 2648: Alert>Derived IMPI -> NULL!
Line 2656: Alert>SIM Status -> FALSE!
Line 2672: START  --------  <%s>  -------
Line 2715: XCAPM configured IP Info: IP Type -> %d , Sid -> %d
Line 2716: IP Address -> 
Line 2717: Primary DNS Address -> 
Line 2718: Secondary DNS Address -> 
Line 2730: IP Type -> %d
Line 2759: START  --------  <%s>  -------
Line 2767: XCAP URI -> 
Line 2777: XCAP URI -> 
Line 2787: Auth Digest -> 
Line 2815: GBA Proc State -> [%d] [0-INIT, 1-BSF_AUTH, 2-AS_AUTH] 
Line 2830: GBA Proc Trigger -> [%d][0-Internal, 1-External] 
Line 2843: GBA Proc Trigger -> [%d][0-Internal, 1-External] 
Line 2858: GBA Proc State -> [%d] 
Line 2902: IMS PCT status -> [%d] 
Line 2920: PLMN: [0x%x 0x%x 0x%x]
Line 2949: [SET] StackId : [%d] IMSI Len : [%d]
Line 2994: [SET] StackId : [%d] IMSI MNC Len : [%d]
Line 3078: START  --------  <%s>  -------
Line 3081: Home PLMN: [0x%x 0x%x 0x%x]
Line 3101:  PalPlmnProvider[%d] mapped to AIMS OperVal[%d]
Line 3111: Alert>Matching Network Operator : [Not Found]
Line 3141: START  --------  <%s>  -------
Line 3153: Home PLMN: [0x%x 0x%x 0x%x]
Line 3174:  PalPlmnProvider[%d] mapped to AIMS OperVal[%d]
Line 3183: Alert>Matching Network Operator : [Not Found]
Line 3204: Network Operator [%d]:[%s]
Line 3212: Alert>Matching Network Operator : [Not Found]
Line 3272: Alert>Wrong SS Mode -> [%d] 
Line 3293: START  --------  <%s>  -------
Line 3311: Starting BTID Validity Timer for Seconds -> [%d]
Line 3316: TotalRegTime < TotalApTime, return XCAPM_INVALID_SECOND as BTID validity check
Line 3335: Starting BTID Validity Timer for Seconds -> [%d]
Line 3339: Alert>Should not fall in this case, TotalRegTime: [%d], TotalApTime: [%d]
Line 3345: APTime (D) and RegTime (D+1) has difference of more than 1 hr, return XCAPM_INVALID_SECOND as BTID validity check
Line 3352: ApTime and RegTime have difference of more than 1 day, return XCAPM_INVALID_SECOND as BTID validity check
Line 3357: Start/End Time NULL, return XCAPM_INVALID_SECOND as BTID validity check
Line 3376: START  --------  <%s>  -------
Line 3384: XCAPM_REGISTRY_CONFIG_READ BTID => 
Line 3385: XCAPM_REGISTRY_CONFIG_READ BTID => 
Line 3388: XCAPM_REGISTRY_CONFIG_READ KsNaf => 
Line 3391: XCAPM_REGISTRY_CONFIG_READ AS NC : [%d] 
Line 3394: XCAPM_REGISTRY_CONFIG_READ Qop  [%d] [1: auth, 2: auth-int, 3: auth & auth-int]
Line 3397: XCAPM_REGISTRY_CONFIG_READ Algorithm Id -> [%d] [0 : NULL, 1:MD5, 2:AKA_V1_MD5]
Line 3401: XCAPM_REGISTRY_CONFIG_READ Realm => 
Line 3402: XCAPM_REGISTRY_CONFIG_READ Realm -> 
Line 3406: XCAPM_REGISTRY_CONFIG_READ Nonce => 
Line 3407: XCAPM_REGISTRY_CONFIG_READ Nonce -> 
Line 3411: XCAPM_REGISTRY_CONFIG_READ Opaque => 
Line 3412: XCAPM_REGISTRY_CONFIG_READ Opaque -> 
Line 3417: XCAPM_RestoreGbaAuthInfo GBA Restoration - Failed, Incorrect GBA information in Registry
Line 3440: START  --------  <%s>  -------
Line 3458: Incorrect TLS Session State [%d] to Restore GBA Auth info from Registry
Line 3463: Incorrect Transport Type [%d] to Restore GBA Auth info from Registry
Line 3468: Incorrect GBA Procedure State to Restore GBA Auth info from Registry
Line 3471: GBA Auth Info restore status [%d]
Line 3491: START  --------  <%s>  -------
Line 3495: BTID Param len -> [%d] 
Line 3505: XCAPM_REGISTRY_CONFIG_READ BtidValidityTimeinfo -> 
Line 3506: XCAPM_REGISTRY_CONFIG_READ IMPI -> 
Line 3509: SIM IMPI -> 
Line 3513: Dervied IMPI -> 
Line 3526: Alert>XCAPM_CheckGbaBtidValidity: MemAlloc Fail
Line 3535: Alert>XCAPM_CheckGbaBtidValidity: MemAlloc Fail
Line 3541: Alert>XCAPM_CheckGbaBtidValidity: error extracting date time info from Registry lifetime
Line 3546: Reg Date/time : 
Line 3566: AP Date/time : 
Line 3576: Starting BTID Validity Timer for Seconds -> [%d]
Line 3592: AP time is greater than Regtime, beyond lifetime
Line 3596: Invalid  AP or REG Date/time 
Line 3602: Invalid REG BTID or Mismatched IMPI 
Line 3607: Incorrect State to fetch GBA Restore from Registry
Line 3628: [SET] StackId : [%d] NW GBA Status : [%d]
Line 3680: [SET] StackId : [%d] SIM GBA Status : [%d]
Line 3730: [SET] StackId : [%d] SIM Application Type : [%d]
Line 3750: [GET] StackId : [%d] SIM Application Type : [%d]
Line 3776: [SET] StackId : [%d] SIM Status : [%d]
Line 3796: [GET] StackId : [%d] SIM Status : [%d]
Line 3826: IMSI Len -> %d
Line 3827: IMSI -> 
Line 3887: IMPI -> 
Line 3954: Received IMPU Records No -> %d
Line 3973: Valid IMPU Records No -> %d
Line 3981: Alert>[XCAPM_SetSimImpu] MemAlloc Fail
Line 3992: IMPU Tag Value -> 0x%x
Line 3995: IMPU Record Length -> 0x%x
Line 3998: IMPU Ptr -> 
Line 4006: IMPU No -> [%d]
Line 4007: IMPU -> 
Line 4123: IMSI Len -> %d
Line 4158: IMPU NULL !!!
Line 4181: SIM IMPI PTR Len -> %d
Line 4184: SIM IMPI Ptr -> 
Line 4196: IMPI Value -> NULL
Line 4205: [Updated] UICC Application Type -> [%d] [4-usim, 7-isim]
Line 4210: Alert>Invalid IMPI Info, IMPI Tag -> [0x80], IMPI Len -> [0]
Line 4212: [Updated] UICC Application Type -> [%d] [4-usim, 7-isim]
Line 4217: Alert>IMPI Len -> 0
Line 4219: [Updated] UICC Application Type -> [%d] [4-usim, 7-isim]
Line 4252: GBABP-RAND -> 
Line 4256: Alert>GBABP-RAND Len is 0
Line 4265: GBA-BTID -> 
Line 4266: GBA-BTID -> 
Line 4270: Alert>GBA-BTID Len is 0
Line 4279: GBA-KeyLifeTime -> 
Line 4283: Alert>GBA-KeyLifeTime Len is 0
Line 4288: Alert>GBABP -> INVALID INFO !!!
Line 4295: Alert>GBABP is NULL!!!
Line 4330: GBANF Records No -> %d
Line 4342: GBANL Record No -> %d
Line 4343: NAF Address -> 
Line 4351: GBA_U mode not supported, Not Copying GBANL EF Data
Line 4356: Alert>GBANL -> INVALID INFO !!!
Line 4361: Alert>GBANL NULL !!!
Line 4377: SS Command -> [%d] 
Line 4391: SS Server -> [%d] 
Line 4466: Ut Error Phrase -> 
Line 4540: [XCAPM_GetErrorCode] Error Code : [%d]
Line 4558: SS Document Node Change Status -> [%d]
Line 4574: SS Document Node Change Status -> [%d]
Line 4607: Incorrect Command value : [%d]
Line 4609: SS Command Rule Info Status -> [%d] for Command [%d] 
Line 4641: [XCAPM_MapServiceCodeFromAP] Req from AP [%d] , Set Service Code [%d][0:Voice, 1:Video] 
Line 4657: [XCAPM_GetMediaServCode] -> [%d][0:Voice, 1:Video] 
Line 4696: [XCAPM_GetServiceCodeFromMedia] -> Media Type[%d],  Service Code [%d] 
Line 4716: START  --------  <%s>  -------
Line 4732: SS Command [%d] is not for CF
Line 4755: START  --------  <%s>  -------
Line 4771: SS Command [%d] is not for CB
Line 4808: Incorrect Command value : [%d]
Line 4810: SS Command Rule Info Status -> [%d] 
Line 4838: Incorrect media class index
Line 4866: Incorrect SS Command [%d]
Line 4941: SS Command Media Tag Status -> [%d]
Line 4958: SS Retry cause -> [%d] 
Line 4971: SS Retry cause -> [%d] 
Line 4986: SS Retry Value -> [%d] 
Line 4999: SS Retry Value -> [%d] 
Line 5069: [RESET] AS NC : [%d] 
Line 5074: [RESET] BSF NC : [%d] 
Line 5260: START  --------  <%s>  -------
Line 5262: Day of Week  	[%02d]
Line 5263: DD-MM-YYYY 	[%02d][%02d][%04d]
Line 5264: HH-MM-SS 		[%02d][%02d][%02d]
Line 5265: Timezone 		[%02d]
Line 5323: START  --------  <%s>  -------
Line 5327: DD-MM-YYYY 	[%02d][%02d][%04d]
Line 5328: HH-MM-SS 	[%02d][%02d][%02d]
Line 5345: START  --------  <%s>  -------
Line 5349: DD-MM-YYYY 	[%02d][%02d][%04d]
Line 5350: HH-MM-SS 	[%02d][%02d][%02d]
Line 5351: Timezone 		[%02d]
Line 5367: START  --------  <%s>  -------
Line 5392: Rxd Date -> 
Line 5410: START  --------  <%s>  -------
Line 5421: Alert>Invalid Date Information Recieved - Exclude DateTime Header in Request
Line 5439: START	--------  <%s>	-------
Line 5441: Updated SS Namespace Config [%d]
Line 5457: START  --------  <%s>  -------
Line 5463: [X] No Reply Timer Duration -> [%d]
Line 5467: No Reply Timer Duration -> 0
Line 5479: START  --------  <%s>  -------
Line 5486: CFU Number -> 
Line 5538: START  --------  <%s>  -------
Line 5540: Telephone Num Len -> %d
Line 5553: CF/CB Num -> 
Line 5554: CF/CB Num -> 
Line 5558: Alert>Telephone Num Alloc Fail
Line 5561: Alert>Telephone Num = 0
Line 5581: CFU Specific Time Period Extraction 
Line 5614: CFU : Extracted Specific Time Period value [%d:%d] -> [%d : %d] 
Line 5617:  Specific Time Period : NULL 
Line 5629: START  --------  <%s>  -------
Line 5635: CFU : Specific Time Period Setting [%d:%d] -> [%d : %d] 
Line 5643: CFU : Specific Time Period Setting [%d:%d] -> [%d : %d] 
Line 5667:  Specific Time Period Check [%d]
Line 5737: START  --------  <%s>  -------
Line 5743: XCAP PCT Case
Line 5748: Root URI taking from Registry
Line 5749: Root Uri(Registry) -> 
Line 5817: Alert>Root Uri -> NULL
Line 5820: Alert>Root Uri -> NULL
Line 5822: XCAP Root Uri -> 
Line 5839: START  --------  <%s>  -------
Line 5845: ATT NVIOT Case : Ericsson Lab
Line 5865: Realm -> NULL
Line 5868: XCAP Realm -> 
Line 5880: START  --------  <%s>  -------
Line 5881: Digest Calc Stored Ptr Len -> %d
Line 5889: Digest Calc Stored Ptr Len -> %d
Line 5901: START  --------  <%s>  -------
Line 5939: SS Cmd Pending Procedure : [%d] [0-No, 1-Yes] 
Line 5987: Alert>Wrong Sid : [%d]
Line 5988:  Sid : [%d], Server IP Count :[%d]
Line 6048: Alert>Invalid Server Type [%d]
Line 6069: Alert>Invalid Server Type [%d]
Line 6092: Alert>Invalid Server Type [%d]
Line 6107: Resetting SS Config Info
Line 6199: Default Public URI : 
Line 6269: XUI : INVALID PTR
Line 6284: Xcap User Id -> 
Line 6458: Alert>INVALID RAT : [%d]
Line 6478: Pending Status procedure -> [%d] 
Line 6494: Pending Status procedure -> [%d] 
Line 6518: XCAPM_REGISTRY_CONFIG_READ SS Cache Status Support -> [%d]
Line 6563: [SET] Current XCAP Txn Stack -> [%d] [1: SIM1, 2 : SIM2] 
Line 6580: [GET] Current XCAP Txn Stack  -> [%d] [1: SIM1, 2 : SIM2] 
Line 6649: [SET] Dual SIM State -> [%d] [1: SIM1, 2 : SIM2, 3-Dual Sim] 
Line 6669: [CLEAR] Dual SIM State -> [%d] [1: SIM1, 2 : SIM2, 3-Dual Sim] 
Line 6682: [GET] Dual SIM State -> [%d] [1: SIM1, 2 : SIM2, 3-Dual Sim] 
Line 6706: IMPU Count in Stack [%d]: [%d]
Line 6826: [SET] Mapped Client [%d]
Line 6842: [GET] Mapped Client [%d]
Line 6861: [SET] SS PROC RETRY PENDING [%d]
Line 6877: [GET] SS PROC RETRY PENDING [%d]
Line 6891: [SET] DsDsProcStatus [%d]
Line 6923: [XCAPM_IsPdnInfoSettingPending] IsStored [%d]
Line 6965: [SET] GrantReqState : [%d] for StackId [%d]
Line 6979: [GET] GrantReqState : [%d] for Stack [%d]
Line 6998: Grant Status Value : [0x%x]
Line 7016: CSPSSIG Grant is available
Line 7022: CSPSSIG Grant is not available
Line 7086: RAT : [%d][1-GSM, 2-UMTS, 4-LTE, 5-CDMA, 6-NR]
Line 7116: START  --------  <%s>  -------
Line 7191: AS Server Domain(From Reg) -> 
Line 7198: Alert>INVALID AS DOMAIN NAME from REGISTRY
Line 7203: AS Server Domain -> 
Line 7208: Alert>Memory Allocation Fail for AS Domain 
Line 7232: BSF Server Domain(From Reg) -> 
Line 7239: Alert>INVALID BSF DOMAIN NAME from REGISTRY
Line 7244: BSF Server Domain -> 
Line 7249: Alert>Memory Allocation Fail for BSF Domain  
Line 7308: Alert>Incorrect Instance Value [%d] 
Line 7327: GBA-ME mode : Deleting all GBA ME mode parameters
Line 7373: START  --------  <%s>  -------
Line 7398: START  --------  <%s>  -------
Line 7432: Alert>Incorrect Server Type [%d] 
Line 7446: [XCAPM_GetAbnormalCloseRetryCount] [%d] 
Line 7460: [XCAPM_IncrementAbnormalCloseRetryCount] [%d] 
Line 7476: [XCAPM_ResetAbnormalCloseRetryCount] [%d] 
Line 7587: START  --------  <%s>  -------
Line 7588: ServerType: [%d]  SessId: [%d]
Line 7599: Alert>Incorrect Server - [%d]
Line 7627: IMEI INFO -> 
Line 7634: IMEI -> 
Line 7679: START  --------  <%s>  -------
Line 7684: [X] KsNaf => 

Line 7689: AS NC : [%d] 
Line 7696: Qop as  [%d] [1: auth, 2: auth-int, 3: auth & auth-int]
Line 7699: Algorithm Id -> [%d] [0 : NULL, 1:MD5, 2:AKA_V1_MD5]
Line 7702: AS Realm -> 
Line 7705: Auth Nonce as ->
Line 7708: Opaque as ->
Line 7727: XCAPM_InitTlsInfo
Line 7777: [SET] TLS Session State - [%d]
Line 7782: [AsSessionId] -[%d] [SET] TLS Session State - [%d]
Line 7787: [BsfSessionId] -[%d] [SET] TLS Session State - [%d]
Line 7790: Alert>Incorrect Sid - [%d]
Line 7811: AsSessionId -[%d], [GET] TLS Session State - [%d]
Line 7816: BsfSessionId -[%d], [GET] TLS Session State - [%d]
Line 7819: Incorrect Sid - [%d]
Line 7821: [GET] TLS Session State - [%d]
Line 7848: Incorrect Sid - [%d]
Line 7903: [AS]TCP Session State -> [%d] [%s] 
Line 7905: Alert>[AS]TCP Session State - [%d] 
Line 7912: [BSF]TCP Session State -> [%d] [%s] 
Line 7914: Alert>[BSF]TCP Session State - [%d] 
Line 7917: Incorrect Sid - [%d]
Line 7944: [AS]TCP Session State -> [%s] 
Line 7946: Alert>[AS]TCP Session State - [%d] 
Line 7952: [BSF]TCP Session State -> [%s] 
Line 7954: Alert>[BSF]TCP Session State - [%d] 
Line 7957: Incorrect Sid - [%d]
Line 7976: [XCAPM_UpdateCallWaitingRegVal] Call Waiting Status [%d]
Line 8005: [XCAPM_GetCallWaitingStatusRegVal] Call Waiting Status [%d]
Line 8022: [XCAPM_UpdateTIRRegVal] TIR Status [%d]
Line 8039: [XCAPM_GetTIRStatusRegVal] TIR Status [%d]
Line 8057: Received Sid : [%d], AS Sid : [%d], BSF Sid : [%d]
Line 8068: Incorrect Sid - [%d]
Line 8217: HTTP Transport Type -> [AS : %d] [BSF : %d] [0-TCP, 1-TLS] 
Line 8469: Incorrect Transport Types -> [AS : %d] [BSF : %d]
Line 8472: HTTP Transport Ports -> [AS : %d] [BSF : %d]
Line 8507: SS Cache Status Support -> %d
Line 8545: Preferred Ip Type -> [%d]
Line 8569: START  --------  <%s>  -------
Line 8622: CFNL Procedure Configuration ->[%d] [0-Disable, 1-Enable] 
Line 8625: CFNR No Reply Timer Node Configuration ->[%d] [0-Disable, 1-Seperate Node, 2-Inside CDIV node, 3 - Inside Action Node, 4 - Seperate Node Only for Activation] 
Line 8628: Target Uri Type Configuration ->[%d] [0-Tel, 1-Sip] 
Line 8631: P3 Config Val -> [%d] [0-REALM, 1-FQDN_XCAP_SERVER]
Line 8656: START  --------  <%s>  -------
Line 8682: START  --------	<%s>  -------
