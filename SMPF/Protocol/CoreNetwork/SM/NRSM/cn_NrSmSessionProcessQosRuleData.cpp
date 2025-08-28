Line 98: [D :SM,%d]       Wrong RuleOPCode while doing Inspection of OQS RULE
Line 100: [D :SM,%d]       expProcLen = %u | ruleLen = %u
Line 107: [D :SM,%d]       Bytes left for QRP+QFI values = (%u) Bytes
Line 119: [D :SM,%d]       Taking existing QFI = (%u) and QRP = (%u) to process QRI = (%u)
Line 123: [D :SM,%d]       This is an Error case, new QRI but no QRP+QFI by NW
Line 135: [D :SM,%d]       Taking existing QFI = (%u) and NW Provided QRP = (%u) to process QRI = (%u)
Line 139: [D :SM,%d]       This is an Error case, new QRI but no QFI by NW
Line 147: [D :SM,%d]       Taking NW provided QFI = (%u) and QRP = (%u) to process QRI = (%u)
Line 154: [N :SM,%d]     (fn) %s
Line 164: [W :SM,%d]  %%@EM return (void) %s = nullptr in %s
Line 194: [D :SM,%d]       startOfQosRuleContents = 0x%02X and byte value at this location = 0x%02X
Line 210: [D :SM,%d]       Detect to semantic or syntactical error in CheckErrorInQosRule()
Line 221: [D :SM,%d]       [OPcode=0x%02X(%s)] QRI=%d IsDefaultQR=%d PFNum=%d
Line 278: [D :SM,%d]       QOS RULE Buf Ptr needToIncrement = 0x%02X
Line 306: [D :SM,%d]       [Qos Error handling - EST proc.] 6.4.1.3.a.2 there is no default QoS rule
Line 322: [N :SM,%d]     (fn) %s
Line 333: [W :SM,%d]  %%@EM return %s = nullptr in %s
Line 343: [D :SM,%d]       Find QFI=%d Duplicated=true
Line 351: [W :SM,%d]  %%@EM (_new_) %s=0x%X in %s
Line 374: [D :SM,%d]       >> RULE_OP_BIT_DELETE_EXIST_QOS
Line 384: [D :SM,%d]       QFI %d / NumOfQRs %d
Line 388: [D :SM,%d]       Can't find Qos Rule QRI(0x%x)
Line 398: [D :SM,%d]       >> RULE_OP_BIT_MODIFY_EXIST_QOS_ADD_FILTER
Line 403: [W :SM,%d]  %%@EM return %s = nullptr in %s
Line 424: [N :SM,%d]     (set) %s = %d(0x%X)->%d(0x%X) (Changed) in %s
Line 430: [W :SM,%d]  %%@EM (pQosRule != nullptr) QFI = %d
Line 440: [D :SM,%d]       >> RULE_OP_BIT_MODIFY_EXIST_QOS_REPLACE_ALL_FILTER
Line 443: [W :SM,%d]  %%@EM return %s = nullptr in %s
Line 451: [N :SM,%d]     (set) %s = %d(0x%X)->%d(0x%X) (Changed) in %s
Line 457: [W :SM,%d]  %%@EM (pQosRule == nullptr)
Line 467: [D :SM,%d]       >> RULE_OP_BIT_MODIFY_EXIST_QOS_DELETE_FILTER
Line 470: [W :SM,%d]  %%@EM return %s = nullptr in %s
Line 477: [N :SM,%d]     (set) %s = %d(0x%X)->%d(0x%X) (Changed) in %s
Line 483: [W :SM,%d]  %%@EM (pQosRule == nullptr)
Line 491: [W :SM,%d]  %%@EM >> %s (0x%02X), Not implementation
Line 492: [W :SM,%d]  %%@EM >> %s (0x%02X), Not implementation
Line 493: [W :SM,%d]  %%@EM >> %s (0x%02X), Not implementation
Line 494: [W :SM,%d]  %%@EM >> %s (0x%02X), Not implementation
Line 496: [A :SM,%d] %%@EM Unknown OPcode[0x%02X]
Line 496: [SM|%d,CP] Unknown OPcode[0x%02X]
Line 506: [N :SM,%d]     (fn) ProcessRQosRule Op(%d) RQFI(%d) bExistPf(%d) TimerInx(%d)
Line 529: [W :SM,%d]  %%@EM - Qos Iter Null ptr
Line 542: [D :SM,%d]       Create RQoS  Can't find PacketFilter then need to add RQos rule and PacketFilter from SDAP
Line 560: [D :SM,%d]       Delete RQoS
Line 572: [D :SM,%d]       Unknown OPcode
Line 595: [W :SM,%d]  %%@EM return (void) %s = nullptr in %s
Line 612: [N :SM,%d]     (( DumpQosRules ))
Line 616: [E :SM,%d]   m_QFIList.empty()
Line 624: [W :SM,%d]  %%@EM return (void) %s = nullptr in %s
Line 629: [E :SM,%d]   - QFI Iter Null ptr
Line 637: [E :SM,%d]        ++ Sessionid [%d] ++ QFI[%d] isDefault(%d) EBID(%d) RBId(%d) CallType(%d)
Line 642: [E :SM,%d]   QRI     | #of PF  | QRP  
Line 648: [E :SM,%d]   %d(0x%02X)    %d       %d(0x%02X)      
Line 657: [E :SM,%d]   ----------------------------------------------------------
Line 661: [E :SM,%d]   SQR     | #of PF  | QRP     | QFI
Line 668: [E :SM,%d]   - SQos Iter Null ptr
Line 673: [E :SM,%d]   %d(0x%02X)    %d       %d(0x%02X)   %d
Line 684: [E :SM,%d]   RefQRI  | #of PF  |  QRP    | QFI
Line 691: [E :SM,%d]   - RQos Iter Null ptr
Line 696: [E :SM,%d]   %d(0x%02X)    %d    %d(0x%02X)   %d
Line 704: [E :SM,%d]   ----------------------------------------------------------
Line 709: [N :SM,%d]     (( DumpQosCALRules ))
Line 713: [E :SM,%d]   m_QFIforDecideNotify.empty()
Line 717: [E :SM,%d]   ----------------------------------------------------------
Line 724: [E :SM,%d]   ----------------------------------------------------------
Line 729: [N :SM,%d]     (( DumpQfiOnQosRules ))
Line 733: [E :SM,%d]   m_QFIList.empty()
Line 737: [E :SM,%d]   ----------------------------------------------------------
Line 744: [E :SM,%d]   ----------------------------------------------------------
Line 751: [E :SM,%d]   - QFI Iter Null ptr
Line 758: [E :SM,%d]   > QFI[%d] isDefault(%d) isModified(%d) QosFlowOp=0x%X CreatedBy(%s)
Line 763: [E :SM,%d]   QRI  |	#ofPF  |	QRP  
Line 769: [E :SM,%d]   %d 	%d 	%d(0x%02X)
Line 780: [E :SM,%d]   -----------------------------------
Line 781: [E :SM,%d]   QRI  |	#ofPF  |	QRP  
Line 787: [E :SM,%d]   %d(0x%02X) 	%d 	%d(0x%02X)
Line 800: [N :SM,%d]     (( DumpOrderedQR ))
Line 804: [E :SM,%d]   m_OrderedQrList.empty()
Line 809: [E :SM,%d]   QRP  |	QRI  |	QFI |	Type 
Line 816: [E :SM,%d]   - OrderedQR Iter Null ptr
Line 820: [E :SM,%d]   0x%x  	0x%x  	0x%x  	%d
Line 823: [E :SM,%d]   -----------------------------------
Line 828: [N :SM,%d]     (fn) %s
Line 835: [D :SM,%d]       SQRI [0x%x]
Line 847: [D :SM,%d]       RQRI [0x%x]
Line 860: [E :SM,%d]   (fn) DeleteQosRuleWithQFI (%d) Size (%d)
Line 882: [N :SM,%d]     (fn) %s
Line 890: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 902: [N :SM,%d]     (fn) DeletePacketFiltersFromQos : QRI=%d NumOfPF=%d
Line 905: [W :SM,%d]  %%@EM return %s = nullptr in %s
Line 913: [W :SM,%d]  %%@EM return %s = nullptr in %s
Line 925: [N :SM,%d]     (fn) %s
Line 927: [W :SM,%d]  %%@EM return (void) %s = nullptr in %s
Line 930: [W :SM,%d]  %%@EM %s is already nullptr. So can't _DELETE_ in %s
Line 930: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 942: [W :SM,%d]  %%@EM return (void) %s = nullptr in %s
Line 945: [N :SM,%d]     (fn) RQosOnDeleteQosRule : pQoSRule[%d] = 0x%X TimerInx=%d bRqos=%d
Line 954: [W :SM,%d]  %%@EM %s is already nullptr. So can't _DELETE_ in %s
Line 954: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 965: [N :SM,%d]     (fn) %s
Line 966: [D :SM,%d]       %s = %d(0x%X) in %s
Line 974: [W :SM,%d]  %%@EM Can't found QRI at current session
Line 980: [D :SM,%d]       QRI [0x%x]
Line 989: [D :SM,%d]       pQoSRule[%d] = 0x%x
Line 993: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 1014: [N :SM,%d]     (fn) %s
Line 1015: [D :SM,%d]       %s = %d(0x%X) in %s
Line 1027: [D :SM,%d]       QRI[%d]=0x%X bRQos=%d
Line 1034: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 1043: [W :SM,%d]  %%@EM (pQosRule == nullptr)
Line 1052: [N :SM,%d]     (fn) %s
Line 1059: [W :SM,%d]  %%@EM - Qos Iter Null ptr
Line 1075: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 1083: [W :SM,%d]  %%@EM SignallingQoS pQfi(%d) %d exist 
Line 1087: [W :SM,%d]  %%@EM SignallingQoS pQfi(%d) is null  
Line 1107: [N :SM,%d]     (fn) RemoveOrderedQR	QFI(%d) QRI(0x%x) QRP(0x%x)
Line 1110: [D :SM,%d]       qosType = %d (%s) in %s
Line 1122: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 1134: [W :SM,%d]  %%@EM RemoveOrderedQR Not find!!
Line 1142: [N :SM,%d]     (fn) MarkForDeleteQosRule : QRI = %d qosType = %d (%s) in %s
Line 1146: [N :SM,%d]     Total number of QRIs in this session = %d
Line 1149: [W :SM,%d]  %%@EM Can't found QRI[0x%x] at current session
Line 1164: [N :SM,%d]     (fn) AddQosRule : QFI=%d, QRI=%d QRP=%d IsDefault(%d)
Line 1165: [W :SM,%d]  %%@EM return %s = nullptr in %s
Line 1172: [W :SM,%d]  %%@EM return %s = nullptr in %s
Line 1178: [W :SM,%d]  %%@EM Error %s alloc failed in %s
Line 1178: [W :SM,%d]  %%@EM (_new_) %s=0x%X in %s
Line 1187: [W :SM,%d]  %%@EM QRI[0x%x] already exist
Line 1189: [W :SM,%d]  %%@EM %s is already nullptr. So can't _DELETE_ in %s
Line 1189: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 1197: [W :SM,%d]  %%@EM (_new_) %s=0x%X in %s
Line 1226: [A :SM,%d] %%@EM AddPacketFilter() fail... 
Line 1226: [SM|%d,CP] AddPacketFilter() fail... 
Line 1228: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 1230: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 1248: [D :SM,%d]       m_bSegregation(%d)
Line 1290: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 1295: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 1304: [N :SM,%d]     (fn) AddReflectiveQos TimerInx=%d IsDefault(%d)
Line 1305: [D :SM,%d]       QFI=%d, QRI=%d QRP=%d IsDefault(%d)
Line 1311: [W :SM,%d]  %%@EM QRI[0x%x] already exist
Line 1318: [W :SM,%d]  %%@EM (_new_) %s=0x%X in %s
Line 1321: [N :SM,%d]     (set) %s = %d(0x%X)->%d(0x%X) (Changed) in %s
Line 1321: [N :SM,%d]     (set) %s = %d(0x%X) (Already) in %s
Line 1322: [N :SM,%d]     (set) %s = %d(0x%X)->%d(0x%X) (Changed) in %s
Line 1322: [N :SM,%d]     (set) %s = %d(0x%X) (Already) in %s
Line 1323: [N :SM,%d]     (set) %s = %d(0x%X)->%d(0x%X) (Changed) in %s
Line 1323: [N :SM,%d]     (set) %s = %d(0x%X) (Already) in %s
Line 1324: [N :SM,%d]     (set) %s = %d(0x%X)->%d(0x%X) (Changed) in %s
Line 1324: [N :SM,%d]     (set) %s = %d(0x%X) (Already) in %s
Line 1349: [D :SM,%d]       (fn) AddPacketFiltersToQos: QRI=%d IsDelAllPF=%d QosRuleLen=%d NumOfPF=%d
Line 1352: [W :SM,%d]  %%@EM return %s = nullptr in %s
Line 1368: [W :SM,%d]  %%@EM return %s = nullptr in %s
Line 1379: [N :SM,%d]     (fn) %s
Line 1399: [W :SM,%d]  %%@EM Error pQosRule=0x%X due to invalid QosType=%d(%s)
Line 1415: [D :SM,%d]       (find) pRQosRule=0x%X by QRI=%d in %s
Line 1432: [D :SM,%d]       (find) pSQosRule=0x%X by QRI=%d in %s
Line 1449: [D :SM,%d]       (find) pSQosRule=0x%X by QFI=%d in %s
Line 1469: [D :SM,%d]       (find) QRI=%d by m_NeedToRemoveAndReport=%d in %s
Line 1470: [N :SM,%d]     (set) %s = %d(0x%X)->%d(0x%X) (Changed) in %s
Line 1470: [N :SM,%d]     (set) %s = %d(0x%X) (Already) in %s
Line 1476: [W :SM,%d]  %%@EM (pQosRule == nullptr)
Line 1485: [N :SM,%d]     (fn) %s
Line 1501: [N :SM,%d]     (fn) %s
Line 1506: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 1516: [D :SM,%d]       pQosFlow is null and QCI is 0xFF)
Line 1521: [W :SM,%d]  %%@EM QRI/QFI is no QoS rule/flow identifier assigned
Line 1524: [W :SM,%d]  %%@EM it's default QoS rule
Line 1530: [W :SM,%d]  %%@EM it's not default QoS rule
Line 1543: [W :SM,%d]  %%@EM [Qos Error handling - EST proc.] 6.4.1.3.a.1 there is already a default QoS rule
Line 1549: [W :SM,%d]  %%@EM [Qos Error handling - EST proc.] 6.4.1.3.a.5 duplicated QRI
Line 1555: [W :SM,%d]  %%@EM [Qos Error handling - EST proc.] 6.4.1.3.a.3 duplicated QRP
Line 1561: [W :SM,%d]  %%@EM [Qos Error handling - EST proc.] 6.4.1.3.b.1 packet filter list is empty
Line 1564: [W :SM,%d]  %%@EM default QoS rule
Line 1570: [W :SM,%d]  %%@EM no default QoS rule
Line 1578: [D :SM,%d]       GBR QoS flow
Line 1585: [W :SM,%d]  %%@EM [Qos Error handling - EST proc.] 6.4.1.3.b.2 default QoS rule and Unstructured PDU session type
Line 1593: [W :SM,%d]  %%@EM [Qos Error handling - EST proc.] 6.4.1.3.a.4 RuleOpCode is not AIR_QOS_RULE_OP_BIT_CREATE_QOS
Line 1596: [W :SM,%d]  %%@EM it's default QoS rule
Line 1602: [W :SM,%d]  %%@EM it's not default QoS rule
Line 1614: [N :SM,%d]     (fn) %s
Line 1617: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 1624: [W :SM,%d]  %%@EM QRI/QFI is no QoS rule/flow identifier assigned
Line 1635: [D :SM,%d]       pQosFlow is null and QCI is 0xFF)
Line 1643: [W :SM,%d]  %%@EM [Qos Error handling - MOD proc.] 6.3.2.4.b.5 QoS rule identifier does not exist
Line 1651: [W :SM,%d]  %%@EM [Qos Error handling - MOD proc.] 6.3.2.4.a.1~2 default QoS rule mismatch
Line 1661: [W :SM,%d]  %%@EM [Qos Error handling - MOD proc.] 6.3.2.4.a.3 default QoS rule mismatch
Line 1670: [W :SM,%d]  %%@EM [Qos Error handling - MOD proc.] 6.3.2.4.a.7 Identical QoS rule identifier values
Line 1673: [W :SM,%d]  %%@EM Existing QoS rule and new QoS are no default QoS rule
Line 1690: [W :SM,%d]  %%@EM Existing QoS rule or new QoS are default QoS rule
Line 1698: [W :SM,%d]  %%@EM [Qos Error handling - MOD proc.] 6.3.2.4.a.10 No default QoS rule and Unstructured PDU session type
Line 1708: [W :SM,%d]  %%@EM [Qos Error handling - MOD proc.] 6.3.2.4.a.4 delete default QoS rule
Line 1718: [W :SM,%d]  %%@EM [Qos Error handling - MOD proc.] 6.3.2.4.a.6 packet filter list is empty
Line 1721: [W :SM,%d]  %%@EM packet filter list is empty and default QoS rule
Line 1727: [W :SM,%d]  %%@EM packet filter list is empty and no default QoS rule
Line 1742: [W :SM,%d]  %%@EM [Qos Error handling - MOD proc.] 6.3.2.4.a.5 duplicated QRP
Line 1745: [W :SM,%d]  %%@EM duplicated QRP and default QoS rule
Line 1751: [W :SM,%d]  %%@EM duplicated QRP and no default QoS rule
Line 1752: [D :SM,%d]       recieving QosRule with duplicated QRP from LTE side, add new QosRule and delete old QosRule
Line 1762: [D :SM,%d]       Total QoS Rule Count %d /QFI %d / NumOfQRs %d
Line 1775: [D :SM,%d]       GBR QoS flow
Line 1787: [W :SM,%d]  %%@EM [Qos Error handling - MOD proc.] 6.3.2.4.b.1 packet filter list is empty
Line 1797: [W :SM,%d]  %%@EM [Qos Error handling - MOD proc.] 6.3.2.4.b.2 packet filter list is non-empty
Line 1808: [W :SM,%d]  %%@EM [Qos Error handling - MOD proc.] 6.3.2.4.b.6 Unstructured PDU session type, default QoS rule and packet filter list is no empty
Line 1837: [N :SM,%d]     (fn) %s
Line 1839: [N :SM,%d]     (fn) CheckErrorInPacketFilters QRI = %d | isDefault? (%d)
Line 1845: [W :SM,%d]  %%@EM it's default QoS rule
Line 1850: [W :SM,%d]  %%@EM it's not default QoS rule
Line 1876: [N :SM,%d]     (fn) %s
Line 1889: [D :SM,%d]       Already found Qos error
Line 1958: [W :SM,%d]  %%@EM In HandleNewQosRuleErrors: PktComMask = %d PktComIpMask = %d
Line 1971: [W :SM,%d]  %%@EM Error in Default QOS Rule | QRI = %d
Line 1972: [W :SM,%d]  %%@EM NumOfPF = %d, PFList: %d
Line 1981: [W :SM,%d]  %%@EM No Error in Default QOS Rule | QRI = %d
Line 1995: [W :SM,%d]  %%@EM Error in Non-Default QOS Rule | QRI = %d
Line 1996: [W :SM,%d]  %%@EM NumOfPF = %d, PFList: %d
Line 2005: [W :SM,%d]  %%@EM No Error in Non-Default QOS Rule | QRI = %d
Line 2022: [W :SM,%d]  %%@EM PDU Session Release Needed ? %d
Line 2030: [W :SM,%d]  %%@EM noOfPfEmptyQRI = %d noOfDelQRI = %d
Line 2041: [W :SM,%d]  %%@EM [MOD proc. 6.3.2.4.a.6] Default Rule  packet filter list is empty
Line 2046: [W :SM,%d]  %%@EM [MOD proc. 6.3.2.4.a.6] non-Default Rule packet filter list is empty
Line 2057: [N :SM,%d]     (fn) %s
Line 2062: [W :SM,%d]  %%@EM reached the maximum Qos rule or packet filter number
Line 2072: [D :SM,%d]       qosType = %d (%s) in %s
Line 2073: [D :SM,%d]       QFI=%d QRI=%d NumOfPF=%d QRP=%d isDefault=%d
Line 2087: [W :SM,%d]  %%@EM Error %s alloc failed in %s
Line 2087: [W :SM,%d]  %%@EM (_new_) %s=0x%X in %s
Line 2089: [N :SM,%d]     Already exist! QRI=%d QRP=%d NumOfPF=%d
Line 2099: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 2118: [W :SM,%d]  %%@EM Error %s alloc failed in %s
Line 2118: [W :SM,%d]  %%@EM (_new_) %s=0x%X in %s
Line 2120: [N :SM,%d]     Already exist! QRI=%d QRP=%d NumOfPF=%d
Line 2130: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 2141: [D :SM,%d]       (get) %s = %d(0x%X) in %s
Line 2148: [N :SM,%d]     (fn) UpdateQRIsOnQFIFlow eQosType %s
Line 2154: [D :SM,%d]       UpdateQRIsOnQFIFlow QFI [%d]
Line 2201: [D :SM,%d]       QFI(%d) QRI(0x%x) QRP (%d)
Line 2206: [W :SM,%d]  %%@EM Error %s alloc failed in %s
Line 2206: [W :SM,%d]  %%@EM (_new_) %s=0x%X in %s
Line 2207: [W :SM,%d]  %%@EM return (void) %s = nullptr in %s
Line 2220: [D :SM,%d]       pOrderedQR->QRI=(%d)  QRI=(%d) pOrderedQR->Type=(%d) Type=(%s)
Line 2224: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 2246: [D :SM,%d]       Precedence(0x%X) S(0x%X) E(0x%X) C(0x%X) in %s
Line 2264: [D :SM,%d]       QrSize=%d
Line 2289: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 2305: [D :SM,%d]       (find) bExistRQosRule=%d on QRI=%d by RQoSTimerId=%d in %s
