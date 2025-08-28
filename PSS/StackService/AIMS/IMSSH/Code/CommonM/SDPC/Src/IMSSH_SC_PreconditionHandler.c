Line 104: SID [%d] not present in DB, return Failure
Line 111: SID [%d] DID [%d]not present in DB, return Failure
Line 121: Local SDP Precondition Disabled for Audio
Line 130: Local SDP Precondition Disabled for Video
Line 139: Local SDP Precondition Disabled for Text
Line 173: [IMSSH_SC_ConfigurePrecond] INVALID INFO !!!
Line 179: [IMSSH_SC_ConfigurePrecond] E2E QoS Precond Status Not Supported
Line 187: CallType=%d
Line 194: [IMSSH_SC_ConfigurePrecond] Active RAT is WIFI: Return Success
Line 204: [Audio]Process SDP return => Play Final Media
Line 210: [Audio]Process SDP return => Wait for Precond
Line 222: [Video]Process SDP return => Play Final Media
Line 228: [Video]Process SDP return => Wait for Precond
Line 240: [Text]Process SDP return => Play Final Media
Line 246: [Text]Process SDP return => Wait for Precond
Line 268: [IMSSH_SC_HandlePrecondEnable] is Precond Enabled [%d]
Line 299: [IMSSH_SC_DerivePrecondMetType] matchedMediaTypes [%d], precondStatus [%d]
Line 329: [IMSSH_SC_DerivePrecondMetType] Derived PrecondMetType [%d]
Line 592: [IMSSH_SC_IsTFTMatchedForMedia] INVALID INFO !!!
Line 598: [IMSSH_SC_IsTFTMatchedForMedia] Active RAT is WIFI: No Need to Match TFT, Check Precondition Status [%d]
Line 601: [IMSSH_SC_IsTFTMatchedForMedia] Precondition is Disabled, Return FALSE
Line 606: [IMSSH_SC_IsTFTMatchedForMedia] Precondition is Enabled, Return TRUE
Line 621: [IMSSH_SC_IsTFTMatchedForMedia] skipQoSPrecondCheck [0x%x]
Line 630: ---TFT ListIndex[%d], Next Protocol [%d] ---
Line 631: [TFT] SingleLocalPort [%d], Local Port Low [%d], Local Port High[%d]
Line 632: [TFT] SingleRemotePort[%d], Remote Port Low [%d], Remote Port High[%d]
Line 633: [TFT] IMS PCSCF PDN IP Address
Line 634: [Media] LocalPort [%d], RemotePort [%d]
Line 638: ALL Matched MATCHED
Line 639: TFT Parameters matched for Index [%d]
Line 648: Skip Local Port Check
Line 655: Single Local Port MATCHED
Line 669: Skip Remote Port Check
Line 676: Single Remote Port MATCHED
Line 692: Local Port Range MATCHED
Line 708: Remote Port Range MATCHED
Line 734: TFT Parameters matched for Index [%d]
Line 764: [IMSSH_SC_CanPrecondMetBeSent] INVALID INFO !!!
Line 770: Active RAT is WIFI: Send Precond_Met_IND
Line 781: Precondition Disabled Case: Send Precond_Met_IND
Line 792: MT case : IMSSH_CC_SS_INVITE_WITHOUT_SDP Remote Direction None Wait for Update
Line 797: MT case : IMSSH_CC_SS_INVITE_WITHOUT_SDP : Send Precond_Met_Ind
Line 811: Send Precond_Met_Ind: QOS Met for all of the MediaTypes present in the Call
Line 819: SDP modified due to change in GBR, sending ind to CC
Line 849: [IMSSH_SC_IsTftMatchingReqd_RCS] QosSupp[%d], IsQosMet[%d], MediaPort[%d], BearerStatus[%d]
Line 887: [IMSSH_SC_IsTftMatchingReqd] INVALID INFO !!!
Line 895: [IMSSH_SC_IsTftMatchingReqd] QosEnable[%d], QosSupp[%d], IsQosMet[%d], MediaPort[%d], BearerStatus[%d]
Line 1303: [IMSSH_SC_MatchTftForDialog] INVALID INFO !!!
Line 1316: [IMSSH_SC_MatchTftForDialog] Dialog Id [%d], ProfileType[%d], Dialog Call Type[%d], Bearer Status [%d]
Line 1416: [IMSSH_SC_MatchTftForSession] INVALID INFO !!!
Line 1420: [IMSSH_SC_MatchTftForSession] Session Id[%d]
Line 1460: [IMSSH_SC_UpdatePrecondStatusToApps] INVALID INFO !!!
Line 1464: [IMSSH_SC_UpdatePrecondStatusToApps] Precond Status [%d]
Line 1503: [IMSSH_SC_IsQosMetForDialog] INVALID INFO !!!
Line 1509: Active RAT is WIFI: No Need to Match TFT, return TRUE
Line 1520: [IMSSH_SC_IsQosMetForDialog] Match TFT for Index [%d]
Line 1528: [IMSSH_SC_IsQosMetForDialog] QOS Met for All Media Types in the Dialog
Line 1560: [IMSSH_SC_IsQosMetForMedia] TFT Param Index [%d]
Line 1566: [IMSSH_SC_IsQosMetForMedia] TFT Param Index MATCH FOUND [%d]
Line 1605: [IMSSH_SC_IsQosMetForMediaType] isDedBearerPresent[%d], MediaType[%d], Sid[%d], Did[%d]
Line 1633: SID [%d] not present in DB, return Failure
Line 1640: DID [%d]not present in SID [%d] DB, return Failure
Line 1668: INVALID Media Type [%d] !!!
Line 1675: [IMSSH_SC_IsDedicatedBearerActivated] isDedBearerPresent[%d], MediaType[%d], Sid[%d], Did[%d]
Line 393: [IMSSH_SC_IsTFTMatchedForMediaType] REMOTE SDP NOT RECVD YET, Can't Compare TFT
Line 413: Audio Media: QCI not matched
Line 452: Media Info Remote IPv4 MATCHED
Line 456: Session Info Remote IPv4 MATCHED
Line 465: Session Info Remote IPv4 MATCHED
Line 518: Media Info Remote IPv6 MATCHED
Line 527: Session Info Remote IPv6 MATCHED
Line 546: Session Info Remote IPv6 MATCHED
Line 1202: [IMSSH_SC_MatchTftForDialog_Media] Remote Audio Precondition Not Met
Line 1223: [IMSSH_SC_MatchTftForDialog_Media] Remote Video Precondition Not Met
Line 1244: [IMSSH_SC_MatchTftForDialog_Media] Remote Text Precondition Not Met
Line 1263: [IMSSH_SC_MatchTftForDialog_Media] Remote Precondition Status [%d] - 0:Not Met, 1:Met
Line 355: [IMSSH_SC_IsContextIdMatched] ContextID of bearer [%d], ContextId of call [%d]
Line 364: [IMSSH_SC_IsContextIdMatched] Invdali TFT Db node
