Line 77: [RRM_MSG](PROCESS)[RRM_ASTUNNEL_NR_RESUME_REQ]
Line 82:    >>CanNot AllocMsg about RRM_RRC_RAT_RESUME_REQ
Line 88: [RRM_MSG](BUILD)[RRM_RRC_RAT_RESUME_REQ]
Line 97: [RRM_MSG](PROCESS)[RRM_ASTUNNEL_NR_SUSPEND_REQ]
Line 102:    >>CanNot AllocMsg about RRM_RRC_RAT_SUSPEND_REQ
Line 106: [RRM_MSG](BUILD)[RRM_RRC_RAT_SUSPEND_REQ]
Line 120: [RRM_MSG](PROCESS)[RRM_RRC_RAT_RESUME_REQ] - DomainType(%d), routingInfo(0x%x)
Line 124: [RRM_MSG](PROCESS)[RRM_RRC_RAT_RESUME_REQ](MsgGrpId:%d)
Line 125:    >>TargetRat:%d, Type:%d, IdleTempCtrl:%d, ConnTempCtrl:%d, isFeDvOn:%d
Line 131: [RRM_MSG](BUILD)[RRM_RRM_RAT_RESUME_REQ](MsgGrpId:%d)
Line 157:    >>CanNot CreateDynamicSmAndChildren
Line 161: [RRM_MSG](BUILD)[RRC_RRM_RAT_RESUME_CNF](MsgGrpId:%d)
Line 171:    >>Invalid RoutingInfo(%d)
Line 185: [RRM_MSG](PROCESS)[RRM_RRC_RAT_SUSPEND_REQ] - DomainType:(%d), routingInfo(0x%x)
Line 189: [RRM_MSG](PROCESS)[RRM_RRC_RAT_SUSPEND_REQ](MsgGrpId:%d)
Line 190:    >>TargetRat:%d, Type:%d, ScgDbDoNotRelease:%d
Line 194:    >>nullptr == pRrmNrSm (DomainType:%d, routingInfo:0x%x)
Line 196: [RRM_MSG](BUILD)[RRC_RRM_RAT_SUSPEND_CNF](MsgGrpId:%d)
Line 204: [RRM_MSG](BUILD)[RRM_RRM_RAT_SUSPEND_REQ](MsgGrpId:%d)
Line 214:    >>Invalid RoutingInfo(%d)
Line 225: [RRM_MSG](PROCESS)[RRM_RRM_RAT_RESUME_CNF] - routingInfo(0x%x)
Line 229: [RRM_MSG](PROCESS)[RRM_RRM_RAT_RESUME_CNF](MsgGrpId:%d) - Result:%d
Line 230: [RRM_MSG](BUILD)[RRC_RRM_RAT_RESUME_CNF](MsgGrpId:%d)
Line 238:    >>Invalid RoutingInfo(%d)
Line 251: [RRM_MSG](PROCESS)[RRM_RRM_RAT_SUSPEND_CNF] - DomainType(%d) routingInfo(0x%x)
Line 255: (RRM_RRM_RAT_SUSPEND_CNF_Handler)>>MsgGrpId:%d, Result:%d, IsAsTunnel:%d
Line 259: [RRM_MSG](BUILD)[RRC_RRM_RAT_SUSPEND_CNF](MsgGrpId:%d]
Line 268:    >>CanNot send RRC_RRM_RAT_SUSPEND_CNF. Because F_USING_ASTUNNEL was Enable
Line 275:    >>call DeleteDynamicSm
