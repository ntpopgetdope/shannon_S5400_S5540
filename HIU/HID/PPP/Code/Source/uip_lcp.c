Line 104: lcp_change_state START New State[%d], GLCP->itsState[%d]
Line 112: lcp_change_state UIP_LCPState_kClosed
Line 123: lcp_change_state END GLCP->itsState[%d]
Line 175: lcp_cleanup()
Line 214: UIP_LCPState_kClosed
Line 218: UIP_LCPState_kStarting
Line 223: UIP_LCPState_kOpened
Line 228: UIP_LCPState_kClosing
Line 243: lcp_starting(): State (%d)
Line 247: lcp_starting(): MAX Total starting frames counter reached 0
Line 257: lcp_starting(): Restart timer expired. Configure counter = %lu
Line 267: lcp_starting(): Configure counter reached 0.
Line 290: lcp_starting(): Requesting MRU: %lu.
Line 300: lcp_starting(): Requesting Receiving ACCM: %lx.
Line 309: lcp_starting(): Requesting PFC In
Line 317: lcp_starting(): Requesting ACFC In
Line 325: lcp_starting(): Requesting MAGIC NUMBER (%lx)
Line 354: lcp_closing(): State (%d)
Line 360: lcp_closing(): Restart timer expired. Terminate counter = %lu
Line 371: lcp_closing(): Terminate counter reached 0.
Line 423: lcp_frame_read(): LCP Frame read: Code [%d], ID [%lu]
Line 429: lcp_frame_read(): Invalid LCP Length (%lu). Frame discarded.
Line 458: lcp_frame_read type[%d]
Line 464: lcp_frame_read(): LCP frame with code [%lu] not managed in LCP state [%d]. Discarded.
Line 472: UIP_LCPCode_kCfRq
Line 484: UIP_LCPCode_kCfAck
Line 488: UIP_LCPCode_kCfAck, IDs match
Line 495: UIP_LCPCode_kCfNak
Line 500: UIP_LCPCode_kCfRj
Line 505: UIP_LCPCode_kTrRq
Line 510: UIP_LCPCode_kTrAck
Line 520: UIP_LCPCode_kEcRq
Line 525: UIP_LCPCode_kEcRp
Line 545:  L_P_H LCP code [%d] ID. [%d]
Line 925: lcp_reply_CfRq(): Invalid option size.
Line 957: lcp_reply_CfRq(): Negative CfReq received while Opened. LCP Closed.
Line 962: lcp_reply_CfRq(): Positive CfReq received while Opened. Replied.
Line 1026: lcp_protocol_reject(): LCP not in Opened state. Discarded.
Line 1129: lcp_manage_CfNakRej(): Invalid option size.
Line 1154: lcp_manage_CfNakRej(): Receiving ACCM suggested: %lx
Line 1159: lcp_manage_CfNakRej(): Bad ACCM Option Len
Line 1165: lcp_manage_CfNakRej(): Bad ACCM Option Len
Line 1178: lcp_manage_CfNakRej(): MRU suggested: (%lu)
Line 1184: lcp_manage_CfNakRej(): MRU rejected. Using default (%lu)
Line 1203: lcp_manage_CfRej(): Bad ACCM Option Len
Line 1212: lcp_manage_CfNakRej(): PFC Naked or Rejected
Line 1215: lcp_manage_CfRej(): Bad PFC Option Len
Line 1223: lcp_manage_CfNakRej(): ACFC Naked or Rejected
Line 1226: lcp_manage_CfRej(): Bad ACFC Option Len
Line 1234: lcp_manage_CfNakRej(): Magic Naked or Rejected
Line 1237: lcp_manage_CfRej(): Bad Magic Option Len
Line 1253: lcp_manage_CfNakRej
Line 667: lcp_reply_CfRq_action(): Too short ACCM option.
Line 676: lcp_reply_CfRq_action(): Peer Requested ACCM: [%lx], Locally requested ACCM [%lx]
Line 679: lcp_reply_CfRq_action(): ACCM not including ours -> NAK.
Line 685: lcp_reply_CfRq_action(): ACCM OK -> ACK.
Line 706: lcp_reply_CfRq_action(): Requested MRU: %lu -> ACK
Line 710: lcp_reply_CfRq_action(): MTU changed from: %lu to: %lu
Line 747: lcp_reply_CfRq_action(): PFC Out requested, Allowed -> ACK.
Line 752: lcp_reply_CfRq_action(): Too short PFC option.
Line 755: lcp_reply_CfRq_action(): PFC Out requested, NOT Allowed -> REJ.
Line 765: lcp_reply_CfRq_action(): ACFC Out requested, Allowed -> ACK.
Line 770: lcp_reply_CfRq_action(): Too short ACFC option.
Line 773: lcp_reply_CfRq_action(): ACFC Out requested, NOT Allowed -> REJ.
Line 785: lcp_reply_CfRq_action(): MAGIC Number (%lx) requested, Allowed -> ACK.
Line 795: lcp_reply_CfRq_action(): Too short MAGIC option.
Line 799: lcp_reply_CfRq_action(): MAGIC Number requested, NOT Allowed -> REJ.
Line 807: lcp_reply_CfRq_action(): Extended LCP opcode 12 is not supported.
Line 813: lcp_reply_CfRq_action(): Extended LCP opcode 13 is not supported.
Line 828: lcp_reply_CfRq_action(): Unknown Conf Opcode [%lu]
Line 880: lcp_reply_CfRq_do_action(): Action NAK but unknown option
Line 891: lcp_reply_CfRq_do_action(): No copy action
