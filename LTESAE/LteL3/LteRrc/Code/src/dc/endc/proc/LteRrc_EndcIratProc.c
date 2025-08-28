Line 265: [%s][NrSaBkgSrch] ProcNrSaBkgSrchTimeForSusp: ReturnToNr(%d)
Line 275: [%s][NrSaBkgSrch] ProcNrSaBkgSrchTimeForSusp: RemainingTime(%d) StopTime(%d)
Line 426: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 427: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 441: [%s]CLEAR OPFLAG :(%s-%s)
Line 441: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 446: [%s]Prepare Nr Meas for Cell Id(%d)
Line 507: [%s]Waiting for NRSA_L2N_PREPARE_CGI_DONE_IND
Line 508: [%s]SET OPFLAG :(%s-%s)
Line 508: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 521: [%s]Purpose is not CGI Report!! cannot start CGI Meas(M:%d O:%d R:%d)
Line 526: [%s]Meas ID(%d) is no mapped Rpt ID
Line 558: [%s]MEM ALLOC FAIL!!!
Line 582: [%s]SET OPFLAG :(%s-%s)
Line 582: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 642: [%s]Error!! Cannot Get CGI!! TCell is NULL
Line 666: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 691: [%s]ANR result fail RxCellId(%d)
Line 707: [%s]SET OPFLAG :(%s-%s)
Line 707: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 715: [%s]IsCgiConfigured(%d) CofiguredCellId(%d) RxCellId(%d)
Line 756: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 763: [%s][Prepare CGI Done Ind] EndcConfigured : %d
Line 771: [%s]No L2N CGI Meas is running, Ignore the msg
Line 818: [%s]CLEAR OPFLAG :(%s-%s)
Line 818: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 863: [%s]NumUmtsNeighbor(%d) NumGsmNeighbor(%d) SchedInfo(%x)
Line 872: [%s]Process pending QRB when cell ind
Line 888: [%s][NrSaBkgSrch] NrSaSearchResult: NumResult(%d), ReturnToNr(%d) SavedSaFreq(%d) IsStoredSearch(%d)
Line 913: [%s][NrSaBkgSrch] NrSaSearchResult: (%d) ARFCN(%d) SCS(%d) added
Line 919: [%s][NrSaBkgSrch] NrSaSearchResult: (%d) ARFCN(%d) SCS(%d) is not added due to list full
Line 926: [%s][NrSaBkgSrch] NrSaSearchResult: No Result
Line 937: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 942: [%s][NrSaBkgSrch] NrSaSearchRsp: Grant(%d) result(%d), ReturnToNr(%d), IsStoredSearch(%d)
Line 958: [%s][NrSaBkgSrch] NrSaSearchRsp: Save LastBkgSrchTime(%d), Current(Earfcn %d / Pci %d)
Line 993: [%s][NrSaBkgSrch] NrSaSearchRsp: discard rsp
Line 1008: [%s][NrSaBkgSrch] Timer expiry ignored. ReturnToNr(%d)
Line 1022: [%s][NrSaBkgSrch] ReturnToNrTimerExpiry: BkgSrchSkipCnt(%d), Last(Earfcn %d / Pci %d), Current(Earfcn %d / Pci %d)
Line 1029: [%s][NrSaBkgSrch] ReturnToNrTimerExpiry: Skip SA BPLMN. BkgSrchSkipCnt(%d)
Line 1058: [%s][NrSaBkgSrch] InitLastNrSearchTime: LastBkgSrchTime(%d) StopTime(%d) RemainingTime(%d) CurTime(%d)
Line 1092: [%s]NR NOT supported => No need to read SIB24
Line 1117: [%s][DEDI_PRIORITY] NR %d : arfcn(%d) pri(%d) sub_prio(%d)
Line 1131: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 1141: [%s]Skip LTE_CPHY_SIB_24_UPDATE_NTF in non NR SA mode
Line 1147: [%s]Skip LTE_CPHY_SIB_24_UPDATE_NTF, no valid nr freq.
Line 1169: [%s]MEM ALLOC FAIL!!!
Line 1187: [%s]Send LTE_CPHY_SIB_24_UPDATE_NTF after enabling NR SA
Line 1202: [%s]LTE_CPHY_UE_STATE_NTF sent & SIB24 received => Send LTE_CPHY_SIB_24_UPDATE_NTF
Line 366: [%s][NrSaBkgSrch] already LTERRC_T_RETURN_TO_NR started
Line 329: [%s][NrSaBkgSrch] FistWaitTime(%d) exist
Line 345: [%s][NrSaBkgSrch] GetWaitTimeForReturnToNr: LastBkgSrchTime(%d) IsStoredBkgSrch(%d) ResultTime(%d) StoredSearchCnt1(%d) StoredSearchCnt2(%d) EnableBkgSrchSkip(%d)
Line 108: [%s][NrSaBkgSrch] Uemode %d, SaSupp %d, ReturnN %d, EnableNrBkgSrch %d
Line 112: [%s][NrSaBkgSrch] Disable NR SA background search
Line 118: [%s][NrSaBkgSrch] Limited camping
Line 124: [%s][NrSaBkgSrch] Do not start LTERRC_T_RETURN_TO_NR for VZW test USIM
Line 140: [%s][NrSaBkgSrch] volte(%d) or emc(%d) call is ongoing
Line 148: [%s][NrSaBkgSrch] SIB24 is included in SchedulingInfo
Line 155: [%s][NrSaBkgSrch] NR SA is disable state
Line 161: [%s][NrSaBkgSrch] NR SA is silence mode on
Line 167: [%s][NrSaBkgSrch] TestMode: L2N BPLMN is not triggered
Line 174: [%s][NrSaBkgSrch] Disabling SA bplmn for (0x%x) operator 
Line 181: [%s][NrSaBkgSrch] Disabling SA bplmn for (0x%x) operator 
Line 187: [%s][NrSaBkgSrch] Disabling SA bplmn for RTK.
Line 193: [%s][NrSaBkgSrch] BPLMN procedure ongoing.
Line 199: [%s][NrSaBkgSrch] VOWIFI Ongoing NR Block
Line 228: [%s][NrSaBkgSrch] SendNrSaBkgSrchReq: StoreSearchReqCnt(%d) => Perform forced full band Search
Line 244: [%s][NrSaBkgSrch] SendNrSaBkgSrchReq: IsStoredSearch(%d) LastBkgSrchTime(%d) StoreSearchReqCnt(%d)
