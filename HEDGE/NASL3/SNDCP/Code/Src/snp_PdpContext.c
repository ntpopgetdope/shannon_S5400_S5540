Line 470: ActivateInd NSAPI=%d, SAPI=%d, Pfi= %d, Mailbox: %d, BufOvrhd = %d, BufOfst=%d, RelClas=%d
Line 472: ActivateInd HdrCompressProto=%d, DataCompressProto=%d isPrimaryPDPContext= %d  ucTftNum =%d
Line 481: SM_PDNMNGR_CID_UPDATE, ucSID = %d
Line 510: Unknown NSAPI (%x), SAPI (%x) Given By SM in snp_DecodeSmSnpActivIndMsg
Line 551: DeactivationInProgress Set True, NSAPI (%x)
Line 555: SnSmTriggerInd ignored : NSAPI (%x), State (%d), Cause(%d)
Line 560: Unknown NSAPI (%x) Given By SM in snp_DecodeSmSnpTriggerMsg
Line 586: DeactivateInd NSAPI=%d
Line 620: SNP_NSAPI_TX_DISABLED Set
Line 673: Unknown NSAPI (%x) Given By SM in snp_DecodeSmSnpDeactIndMsg
Line 707: Unknown NSAPI (%x)
Line 712: Invalid NSAPI (%x)
Line 721: Saving SNSM_MODIFY_IND MSG
Line 729: Wrong State, ignoring MODIFY_IND
Line 739: pQos Null Pointer, pQos = 0x%X
Line 743: ModifyInd NSAPI=%d, NewSAPI=%d, Pfi= %d, RelClas=%d, RadioPriority=%d, Pfi=%d, Cause=%d
Line 846: SNP_NSAPI_TX_DISABLED Set
Line 901: ModifyIndMoveSapi NSAPI=%d, OldSAPI = %d, NewSAPI=%d, NewRelClas=%d, OldTxMode= %d
Line 963: snp_PdpModifyIndMoveLlcSapi SNP_NSAPI_TX_DISABLED 0 Set Nsapi %d
Line 1028: SNP_NSAPI_TX_DISABLED 1 Set Nsapi %d
Line 1044: SNP_NSAPI_TX_DISABLED 2 Set Nsapi %d
Line 1062: Unknown TxMode (%x) for Nsapi %d in snp_ModifyIndMoveLlcSapi
Line 1082: ModifyAckToUnack NSAPI=%d, OldSAPI= %d, NewSAPI=%d
Line 1131: snp_PdpModifyAckToUnack SNP_NSAPI_ESTAB_PENDING is reset and  NSapi State is ACTIVE
Line 1142: snp_PdpModifyAckToUnack SNP_NSAPI_TX_DISABLED Set
Line 1165: ModifyQosIncompatible NSAPI=%d
Line 1198: GmmSnpSequenceInd received, len %d
Line 1218: GmmSnpSequenceInd Nsapi %d, Sequence %d
Line 1232: GmmSnpSequenceInd Nsapi %d, Sequence %d
Line 1246: GmmSnpSequenceInd Nsapi %d, Sequence %d
Line 1254: SNP_NSAPI_TX_DISABLED Clear for Nsapi %d
Line 1287: New RAT mode = %d, RAT mode status = %d
Line 1340: Unknown RAT mode status from SM!
Line 1346: [SNDCP EXT FN]Calling nasu_DataRatChange
Line 1369: snp_PdpActiveCnt %d
Line 1399: Send ActivateRsp, NSAPI=%d
Line 1403: [SNDCP EXT FN]Calling nasu_UdhSetActiveStack
Line 1442: Send DeActivateRsp, NSAPI=%d
Line 1445: Clearing UDH Active Stack since PDP Count = 0
Line 1447: [SNDCP EXT FN]Calling nasu_UdhSetActiveStack
Line 1480: Send ModifyRsp, NSAPI=%d
Line 1518: Send SmStatusReq, NSAPI=%d Cause=%d
Line 1573: snp_StackIndex %d
Line 1595: Out of Range
Line 1608: Out of Range
Line 1626: Rx seq list build for GMM
Line 339: PDP activated in LTE, Ignore QOS Compatibity Check result;IsPdpActivatedInHedge %d, Set QosStatus %d
Line 342: Check QosStatus = %d, LlcSapi = %d, , Nsapi = %d
Line 371: QOS_INCOMPATIBLE, Send Status req
Line 293: SNP_NSAPI_TX_DISABLED Set
Line 63: Registry Buffer Size %d too big, using default %d
Line 107: Not valid Qos Status in snp_ProcessActivateIndBasedOnQosStatus
Line 118: Number of	TFT_FILTERS %d too big Max : %d
Line 403:  snp_DecodeSmSnpActivIndMsg: Cause(%d) 
Line 422: XID not sent due to ongoing XID, sapi(%d), Nsapi(%d), checkNsapi(%d)
