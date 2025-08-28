Line 101: SetSecureAlgBearerId(%d)
Line 159: 	++Type: %d (Invalid - It need to check)
Line 163: 	++Type: %s
Line 165: 	++Kasme
Line 170: 	++KnasEnc
Line 172: 	++KnasInt
Line 176: 	++Encrytion (%d) / Integrity (%d) (Invalid - It need to check)
Line 180: 	++Encrytion (%s) / Integrity (%s)
Line 182: 	++UL Cnt (%d) /DL Cnt (%d)
Line 184: ----------------------------------------------------------
Line 198: *Invalid Context
Line 220: >>SECURE EXCHANGE LINK IS ACCOMPLISHED
Line 226: >>SECURE EXCHANGE LINK IS RELEASED
Line 294: Update Partial Security Context
Line 298: ++ Non-Current one exists -> Remove (ksi:%d)
Line 339: Update Parital Security Context - a Same Rand Case
Line 353: Move SecContxt %d -> %d
Line 353: Same Ksi [%d]
Line 357: Warn>++ Overwrite Error because KsiAsme is not valid.
Line 393: ++ CurrentSeq(%d), Ksi(%d)
Line 399: Warn>++ CurrentSeq(%d) > MsgSeq(%d) - Rcvd abnormal DL NAS cnt on CMCC NW
Line 408: Warn>++ CurrentSeq(%d) > MsgSeq(%d), Distance (%d) - Do not update OverFlow
Line 459: ++Irat Connected HO Tried: 4bitCnt(0x%x), EstimatedDLCnt: (0x%x)
Line 547: EEA_0 Algorithm -> Plain to Plain
Line 583: Warn>Do not allow EIA0 when EE0 is not selected
Line 595: MAC Verification Success
Line 599: Warn>MAC Verification Fail
Line 600:  ++ Calculated Mac
Line 602:  ++ Received Mac
Line 625: Warn>++Hard Reset - originated Seqs. DL(%d), UL(%d)
Line 715: Warn>Incorrect msg length for SMC(%d)
Line 720: IntAlg(%d)
Line 727: AUTH KSI(%d) Previous SMC NAS CNT(%d)
Line 766: Warn>Incorrect Msg Header length (%d)
Line 784: Incorrect Msg Header length for ESM msg (%d < 3)
Line 790: Incorrect Msg Header length for security protected msg (%d)
Line 797: Incorrect Msg Header - can't determine Msg PD
Line 804: Incorrect Msg Header length for ESM msg (%d < 3)
Line 867: Warn>++[1]Check Secure State : Not Allowable(Secure, plain message can not be accepted)
Line 885: Warn>++[1]Check InSecure State : Not Allowable Msg in InSecure
Line 891: ++[1]Check InSecure State : Not check security header when emergency call is ongoing
Line 921: Warn>Skip ReplayProtection
Line 921: ReplayProtection %d > %d
Line 921: Warn>Skip ReplayProtection
Line 947: Warn>No Valid SecCntxt (MAC failure) eKSI (%d)
Line 961: Check Radio Msg Validation (Len=%d)
Line 967: Warn>Fail to Check Security Compliance
Line 996: ++SAEMM_SendSimAuthReq -> Transaction ID Increase
Line 1041: Warn>SGSN Key Set is mismatch! %d %d
Line 1110: Warn>++SMC DL Seq 0 - originated Seqs. DL(%d), UL(%d)
Line 1114: Warn>++Hard Reset - originated Seqs. DL(%d), UL(%d)
Line 1128: Native(Non-Current) - Derived Keys successfully
Line 1132: Current - Derived Keys successfully
Line 1136: Current - EMC key is derived successfully
Line 1140: Mapped - Derived Keys successfully
Line 1142: eKSI (%d|%d) KsiAsme (%d|%d)
Line 1142: KsiSgsn (%d|%d) KsiAmf (%d|%d)
Line 1142: ## %s(%d|%d) ##
Line 1142: ## %s(%d|%d) ##
Line 1142: ## %s(%d|%d) ##
Line 1142: ## %s(%d|%d) ##
Line 1152: 	++SecureAlgBearerId (%d)
Line 1193: NonCurrent(%d)<-CurrentNative
Line 1199: Warn>CurrentMapped(%d)<-NewlyUpdatedMapped(%d)
Line 1209: NonCurrent(%d)<-CurrentNative
Line 1214: Warn>CurrentMapped(%d)<-NewlyUpdatedMapped(%d)
Line 1220: NewSMC(0x%x) w/o Auth/PartialMapped
Line 1225: Warn>Override EMC KeySet to the Current
Line 1230: Warn>No Matched KEY Set
Line 1244: Warn>++Fail Checking Replayed Additional Ue Capa in SMC
Line 1256: Warn>++Fail Checking Replayed Ue Capa in SMC
Line 1309: Warn>Invalid IntAlg: %d or EncAlg: %d
Line 1316: SEC_INFO: ngKSI = 0x%x
Line 1317: SEC_INFO: K_AMF ==> 
Line 1319: SEC_INFO: EpsIntAlg = 0x%x
Line 1320: SEC_INFO: EpsEncAlg = 0x%x
Line 1321: SEC_INFO: UlCount = 0x%x
Line 1322: SEC_INFO: DlCount = 0x%x
Line 1323: SEC_INFO: K_INT ==> 
Line 1325: SEC_INFO: NrIntAlg = 0x%x
Line 1342: NrmmSecurityContext is not activated
Line 1370: _KsiAmf(%d) and _KsiAsme(%d) are same value. Since NR security context is used in N2L IDLE mobility, _KsiAsme is removed.
Line 1375: ## %s(%d|%d) ##
Line 1376: 	++SecureAlgBearerId (%d)
Line 1417: ## %s(%d|%d) ##
Line 1418: ++SecureAlgBearerId (%d)
Line 1460: ## %s(%d|%d) ##
Line 1461: 	++SecureAlgBearerId (%d)
Line 1470: ++Inc UL NAS (%d)
