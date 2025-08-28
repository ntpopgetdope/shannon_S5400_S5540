Line 77: %s : DIR : %d, MASK : %d
Line 107: [WARNING] no write procedure for PDNINFO
Line 127: [WARNING] no reset procedure for All Policy
Line 139: [WARNING] no reset procedure for Sig URSP
Line 151: [WARNING] no reset procedure for NSSAI
Line 163: [WARNING] no write procedure for Local Ursp
Line 175: [WARNING] no write procedure for SYNC_OSID
Line 201: [WARNING] UPM_UPM_NV_SYNC_IND_Hdlr::pSigNssaiList is nullptr
Line 219: [WARNING] UPM_UPM_NV_SYNC_IND_Hdlr::pDefNssai is nullptr
Line 237:  GetUpmStackId()=%d, UpsiNvFlag=%d
Line 262: NV Sync Done (READ / POLICY), (loc:%d/sig:%d)
Line 286: NV Sync Done (READ / ANDSP), (WLANSP:%d/N3AN:%d)
Line 320: NV Sync Done (SRC:%d) (READ / NSSAI), (LEN:%d)
Line 336: NV Sync Done (READ / PDUCINFO), (LEN : %d)
Line 348: NV Sync Done (READ / POLICY), (loc:%d)
Line 360: [WARNING] NV Sync error:NO_URSP (WRITE / URSP)
Line 364: URSP ENC size : %d
Line 365: [HEX] URSP ENC Result : 
Line 365: [HEX] URSP ENC Result : 
Line 373: [HEX] SUPI Rawdata : 
Line 385: NV Sync Done error (excceed max size) (WRITE / URSP)
Line 390: NV Sync Done (WRITE / URSP)
Line 402: [WARNING] NV Sync error:NO_URSP (WRITE / URSP)
Line 406: URSP ENC size : %d
Line 407: [HEX] URSP ENC Result : 
Line 407: [HEX] URSP ENC Result : 
Line 422: NV Sync Done error (excceed max size) (WRITE / URSP)
Line 427: NV Sync Done (WRITE / URSP)
Line 451: [WARNING] NV Sync error:NO_ANDSP (WRITE / ANDSP) - 0x%x
Line 455: ANDSP ENC size : %d
Line 456: [HEX] ANDSP ENC Result : 
Line 464: [HEX] SUPI Rawdata : 
Line 476: [WARNING] Wrong Andsp Type = %d
Line 490: NV Sync Done error (excceed max size) (WRITE / ANDSP)
Line 495: NV Sync Done (WRITE / ANDSP)
Line 508: NSSAI ENC size: %d
Line 509: [HEX] NSSAI ENC Result: 
Line 527: [HEX] SUPI Rawdata: 
Line 542: NV Sync Done error (excceed max size) (WRITE / NSSAI)
Line 547: NV Sync Done (WRITE / NSSAI)
Line 551: [WARNING] NV Sync error:NO_URSP (WRITE / NSSAI)
Line 572: Reset NV (WRITE / SIG URSP)
Line 582: Reset NV (WRITE / LOCAL URSP)
Line 594: Reset NV (WRITE / Andsp)
Line 621: Reset NV (WRITE / NSSAI)
Line 637: [HEX] OsId : 
Line 644: OsIdFlag is not enable
Line 687: NV URSP size=%d
Line 694: [WARNING] UpdatePolicyFromRegistry : POLICY_SRC_SIG invalid length(%d)
Line 699: [WARNING] UpdatePolicyFromRegistry : POLICY_SRC_LOC invalid length(%d)
Line 704: %s : no stored policy : invalid length(%d)
Line 713: [HEX] SUPI Rawdata: 
Line 714: [HEX] NvStoredSupi Rawdata: 
Line 718: SUPI mismatched!, Clear previous signaled URSP
Line 719: [HEX] NV SUPI Rawdata: 
Line 722: SUPI mismatched!, Clear previous Local URSP
Line 729: SUPI matched!, Read previous signaled URSP
Line 756: [WARNING] UpdateNssaiFromRegistry : invalid length(%d)
Line 761: no stored NSSAI : invalid length(%d)
Line 771: [HEX] SUPI Rawdata: 
Line 775: SUPI matched!, Read previous signaled URSP
Line 781: SUPI mismatched!, Clear previous signaled URSP
Line 782: [HEX] NV SUPI Rawdata: 
Line 804: [WARNING] UpdatePudInfoFromRegistry : invalid length(%d)
Line 809: no stored PDUINFO
Line 828: NV ANDSP size=%d
Line 835: [WARNING] UpdateAndspFromRegistry : invalid length(%d)
Line 840: %s : no stored ANDSP : invalid length(%d)
Line 847: [HEX] SUPI Rawdata: 
Line 851: SUPI mismatched!, Clear previous signaled URSP
Line 852: [HEX] NV SUPI Rawdata: 
Line 859: SUPI matched!, Read previous signaled URSP
Line 876: [WARNING] (%s) Invalid NULL param : %s/%s
Line 897: [WARNING] (%s) Invalid NULL param : %s/%s
Line 921: [WARNING] total length of policy exceed limit, size = %d, max = %d
Line 936: [INFO] ** POLICY ENCODE DONE(%d) >>
Line 937: [HEX] ENCODED POLICY: 
Line 937: [HEX] ENCODED POLICY: 
Line 958: [WARNING] EncodeLocalUrsp : PLMN ID is not the same as HPLMN
Line 965: [HEX] URSP ENC Ongoing: 
Line 965: [HEX] URSP ENC Ongoing: 
Line 990: EncodeLocalUrsp::Encode UrspCnt(%d)
Line 1002: Instruction: Length(%d), UE policy part: Length(%d)
Line 1008: UE policy section sublist: Length(%d), PLMN(%d)
Line 1009: [HEX] URSP ENC Ongoing: 
Line 1009: [HEX] URSP ENC Ongoing: 
Line 1014: [ENC] [UpmPrcsNVSYNC::EncodeLocalRsd]URSP ENC Ongoing: 
Line 1037: [UpmUrspDe::EncodeUrspRule] RuleBeginIdx(%d) RulePriority(%d) 
Line 1062: SSC Mode : %d
Line 1079: Snssai SST : %d
Line 1086: Snssai SD : [0x%X][0x%X][0x%X]
Line 1093: Mapped Snssai SST : %d
Line 1100: Mapped Snssai SD : [0x%X][0x%X][0x%X]
Line 1106: SnssaiDe Encoded Length : %d, Snssai Len : %d
Line 1107: [ENC] Encoded S-NSSAI: 
Line 1111: [WARNING] EncodeLocalRsd : Failure to encode Snssai Cnt : %d
Line 1125: [HEX] DNN : 
Line 1129: [WARNING] EncodeLocalRsd : Failure to encode Dnn Cnt : %d
Line 1138: PDU Sess Type : %d
Line 1144: RSD Len Size(%d), RSD Cont End Size(%d)
Line 1149: [ENC] ENCODED RouteSelDesc: 
Line 1151: EncodeLocalRsd::Encode RsdCnt(%d)
Line 1157: RSD Enc Size(%d)
Line 1162: Rule Enc Size(%d)
