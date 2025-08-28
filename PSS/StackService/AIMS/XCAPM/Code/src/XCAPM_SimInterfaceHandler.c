Line 93: Derived Username from IMSI
Line 111: [X]Home PLMN: 0x%x 0x%x 0x%x
Line 122: [Updated] Home PLMN: 0x%x 0x%x 0x%x
Line 162: Derived HomeDomain
Line 211: START  --------  <%s>  -------
Line 221: [XCAPM_ExtractImpiFromUsim] Derived Private URI
Line 245: START  --------  <%s>  -------
Line 260: BSF Domain -> 
Line 263: Default BSF Domain -> 
Line 278: BsfDomainName --> NULL
Line 294: BSF Domain -> 
Line 297: Default BSF Domain -> 
Line 318: BsfDomainName --> NULL
Line 331: BsfDomainName --> NULL
Line 338: BSF Server Domain -> 
Line 367: START  --------  <%s>  -------
Line 374: Domain -> 
Line 377: Default Domain -> 
Line 392: DomainName --> NULL
Line 408: Domain -> 
Line 411: Default Domain -> 
Line 426: DomainName --> NULL
Line 439: DomainName --> NULL
Line 447: AS Server Domain -> 
Line 458: AS Server Domain -> 
Line 469: Root URI to be excluded for this operator
Line 539: START  --------  <%s>  -------
Line 544: [XCAPM_SetCnonceValue] Cnonce -> 
Line 561: START  --------  <%s>  -------
Line 571: [UPDATE] AS NC : [%d] 
Line 576: [UPDATE] BSF NC : [%d] 
Line 579: NonceCount -> 
Line 594: START  --------  <%s>  -------
Line 601: Qop -> 
Line 617: START  --------  <%s>  -------
Line 630: Method Type -> 
Line 647: START  --------  <%s>  -------
Line 662: Algorithm -> 
Line 704: START  --------  <%s>  -------
Line 712: Response-> 
Line 715: **Response-> 
Line 739: START  --------  <%s>  -------
Line 740: GBA Auth Proc State = %d
Line 741: Server Type : [%d] [1-BSF, 2-AS]
Line 752: AlgoPtr -> 
Line 753: Username -> 
Line 754: PassWord -> 
Line 755: Cnonce -> 
Line 756: NonceCount -> 
Line 775: Value of HA1 -> 
Line 783: Content Len = %d
Line 787: Content Ptr -> 
Line 794: Content Ptr -> 
Line 798: Method -> 
Line 799: pSzQop -> 
Line 800: HENTITY -> 
Line 829: START  --------  <%s>  -------
Line 830: [X] No Action ! 
Line 849: START  --------  <%s>  -------
Line 853: [X]Sending SIM Read Request for XCAP Param
Line 873: START  --------  <%s>  -------
Line 884: SIM Absent Indication - Clear all Pending Response
Line 891: SIM Absent Indication - Clear Request and Send Error Response
Line 905: SIM Absent Indication received for Non-Initialised Stack : No Action
Line 929: START  --------  <%s>  -------
Line 936: [X] UICC Application Type -> [%d] [4-usim, 7-isim]
Line 960: [X]SIM Application Type -> %d
Line 964: [X]SIM Read ALL Param Command Rsp Status -> %d
Line 968: [X]SIM Read ALl Param Command Rsp Ptr -> NULL !!
Line 999: EF IST Length -> [%d]
Line 1003: EF IST -> 
Line 1008: GBA Services is supported as per IST Service Table
Line 1013: GBA Services is NOT supported as per IST Service Table
Line 1019: EF IST Length is Zero
Line 1039: [X] SIM Auth result : [%d]
Line 1047: Process Auth response 
Line 1053: Invalid AUTH Response result, Abnormal procedure 
Line 1081: START  --------  <%s>  -------
Line 1082: [X] XCAPM Authentication Response Status -> %d 
Line 1091: [X] CK Len -> %d 
Line 1092: CK -> 
Line 1094: [X] IK Len -> %d 
Line 1095: IK -> 
Line 1097: [X] Authentication Response Len -> %d 
Line 1098: Auth Rsp -> 
Line 1102: CK -> 
Line 1103: IK -> 
Line 1108: KS -> 
Line 1112: [X] XCAPM Authentication Response Password Len -> %d 
Line 1113: passWord -> 
Line 1134: [X] Authentication Failure -> SYNC Failure (%d) 
Line 1135: [X] Authentication Response Len -> %d 
Line 1136: Auth Rsp -> 
Line 1156:  HTTP Method Sent Success!
Line 1160: Alert> HTTP Method request -> FAIL 
Line 1167: Incorrect SIM Status, Retry on any other available Servers
Line 1169: Sid [%d] for retry 
Line 1173: Retrying SS Pending Transaction on Different IP
Line 1244: START  --------  <%s>  -------
Line 1270: [X] IMPI for P2 => 
Line 1271: [X] IMPI Len: %d 
Line 1277: Alert>[X] NO valid IMPI OR Operator is ENTEL_CL.. using Derived IMPI 
Line 1282: [X] Derivced IMPI for P2 => 
Line 1283: [X] Derived IMPI Len: %d 
Line 1295: [X] Derivced IMPI for P2 => 
Line 1296: [X] Derived IMPI Len: %d 
Line 1302: Alert>[X] Invalid SIM application type 
Line 1312: P3 : Extract from AS Realm, Extracting FQDN from Realm
Line 1318: FQDN of NAF => 
Line 1325: Alert>[X] AS Realm -> INVALID Format, No Domain Present !!
Line 1330: Alert>[X] AS Realm -> NULL !!
Line 1335: [X] FQDN of NAF => 
Line 1336: [X] FQDN NAF Len: %d 
Line 1341: P3 Len: [%d] 
Line 1342: P3 => 
Line 1347: P3 : Extract from FQDN of NAF
Line 1348: [X] FQDN of NAF => 
Line 1349: [X] FQDN NAF Len: %d 
Line 1355: [X] UA Protocol Id => 
Line 1372: [X] S => 
Line 1375: [X] KsNaf => 
Line 1393: START  --------  <%s>  -------
Line 1405: Alert>[X] NO valid IMPI/Derived IMPI 
Line 1410: [X] BTID => 
Line 1420: [X]Ks Life Time Validity period : [%d: %d: %d] [%d: %d :%d]
Line 1422: [X]Ks Life Time Zone: [%d: %d: %d] 
Line 1426: [X]BTID Lifetime Validty time  => 
Line 1431: [X] KS => 
Line 1449: START  --------  <%s>  -------
Line 1471: START  --------  <%s>  -------
Line 1480: GBA-ME mode : Deleting all GBA ME mode parameters
Line 1508: GBA-U mode is not supported
Line 1527: START  --------  <%s>  -------
Line 1538: [XCAPM_SendSimUpdateReq] SimFile  => [0x%x] 
Line 1543: [XCAPM_SendSimUpdateReq] Updating RAND => 
Line 1557: [XCAPM_SendSimUpdateReq] BTID  Len =>[%d] 
Line 1566: [XCAPM_SendSimUpdateReq] Lifetime  Len => [%d] 
Line 1574: EF Data -> 
Line 1600: START  --------  <%s>  -------
Line 1601: [X] SimAppType -> %d [4-USIM, 7-ISIM]
Line 1602: [X] GBA Security Context Type -> %d [1-Bootstrapping, 2-NAF-Derivation]
Line 1613: SIM Auth Param Info -> 
Line 1620: [X] [XCAPM_SIMCONTXT_BOOTSTRAPPING] Tag [%d] 
Line 1633: [X] RAND ==> 
Line 1634: [X] AUTN ==> 
Line 1641: [X] [XCAPM_SIMCONTXT_NAFDERIVATIONMODE_TAG] Tag [%d] 
Line 1646: [X] FQDN of NAF => 
Line 1647: [X] FQDN NAF Len: %d 
Line 1654: [X] Ua Protocol Id => 
Line 1662: [X] NAF ID ==> 
Line 1665: [X] AS Server Domain Name NULL 
Line 1670: [X] Sending GBA Context Request to UICC
Line 1671: [X] Auth Type -> [%d] [0-USIM, 1-ISIM]
Line 1672: [X] GBA Type : [%d] [0-Bootstrapping, 1-NAF-Derivation]
Line 1673: [X] Data Len : [%d]
Line 1674: [X] GBA Tag : [0x%X] [BOOTSTRAPPINGMODE-0xDD, NAFDERIVATIONMODE- 0xEE]
Line 1681: [X] pSimGBAContxtReq -> Malloc Failure 
Line 1701: START  --------  <%s>  -------
Line 1705: Error : SIM Response is NULL / DB NULL
Line 1709: [x] Security Context Rsp received from UICC
Line 1710: [x] Security Context Rsp Result -> [%d] 
Line 1711: [x] Security Context Rsp Auth Type -> [%d] 
Line 1713: [x] Security Context Rsp GBA Type -> [%d] [0-Bootstrapping, 1-NAF-Derivation]
Line 1714: [x] Security Context Rsp GBA Tag -> [%d] 
Line 1718: [X] Authentication Response Len -> %d 
Line 1719: [X] Authentication Response -> 
Line 1724: Response is for BootStrapping Mode
Line 1741:  HTTP Method Sent Success!
Line 1743: Alert> HTTP Method request -> FAIL 
Line 1749: Response is for NAF Derivation Mode
Line 1752: [X] KsNaf => 
Line 1776: [XCAPM_SimGbaSecContextRspHandler] Security Context Response Failed -> [%d] 
Line 1797: START  --------  <%s>  -------
Line 1814: [X] SimAppType -> %d [4-USIM, 7-ISIM]
Line 1815: [X] AuthType -> %d [0-Isim, 1-2g, 2-3G]
Line 1816: [X] RAND ==> 
Line 1817: [X] AUTN ==> 
Line 1828: [X] Auth Param -> NULL 
Line 1841: START  --------  <%s>  -------
Line 1852: [X] pXcapmSimRegisterReq -> NULL 
