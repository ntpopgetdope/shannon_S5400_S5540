Line 102: [NrPdschDciDev] Invalid Parsing Format!!
Line 122: [NrPdschDciDev] Invalid Parsing Format!!
Line 146: [NrPdschDciDev] Invalid Parsing Format!!
Line 225: [NrPdschDev] DC was not prepared Yet! nrDCState(%d),discardDCIFlag(%d)
Line 229: Force NACK for DCI! StoredDCIIdx: %d
Line 336: [CheckDCI] storeIdx(%d), curraslotIdx(%d), pdschscs(%d), pdcchscs(%d),K0(%d), storedaslot(%d), targetaslot(%d), StoredDCIIdx(%d)
Line 489: (f) [ParseFormat0_0]coresetId(%d), UE SS is not possible to detect from NR_DCI_FORMAT_IDX3 !!
Line 523: (f) [ParseFormat0_0]coresetId(%d), this phyCH is already detected!!
Line 618: [ParseFormat0_0] False Alram paddingbits(0x%x), dci_fmt_idx(%d) dciLengthofthisFMT(%d), bitsizeofthisfield(%d), ShiftSize(%d), DciRawTemp(0x%x)
Line 658: [ParseFormat0_0]FDRA(0x%x),CcIdx/TDRA/FreqHF(1/4/1)(%d),mcs1/ndi1/rv1/harqId(2/1/1/2)(%d),TPC/ULSUL_Indi(1/1)(%d),CoresetId/RntiId(1/2)(%d),SS(%d)
Line 853: [CopyParsingFormat0_1]obuf[0](0x%x) obuf[1](0x%x) obuf[2](0x%x) obuf[3](0x%x)
Line 896: (f) [ParseFormat0_1]coresetId(%d), this phyCH is already detected!!
Line 904: [CCH_ParseFormat0_1]False Alarm RNTIIdx(%d) All 0 of UL_SCH_indicator/Dci.dci0_x.CSIrequest
Line 910: [CCH_ParseFormat0_1]False Alarm CSIrequest(%d) exceeds aperiodicCSITriggerNum(%d)
Line 974: [ParseFormat0_1] Wrong BandwidhtPart Indicator(%d) numOfBWP(%d)
Line 983: [ParseFormat0_1] DCI format with a BWP indicator field is not within the first 3 symbols of a slot..sym(%d)
Line 990: [F][ParseFormat0_1] cc(%d), DCI Based BWP Switch Candidate but false Alarm
Line 1026: [ParseFormat0_1]FDRA(0x%x),CcIdx/BWPIndi/TDRA/freqhop(1/2/2/1)(%d),mcs1/ndi1/rv1/harqId(2/1/1/2)(%d),DLassignIdx1/2/TPC/SRSrsrc/CSI(1/1/1/1/2)(%d),PrecodInfo/antPorts/SRSrequest/cbg/PTRS(2/2/1/1/1)(%d),beta/Dmrs/indiULSCH/dormancyInd(1/1/1/2)(%d)
Line 1143: [ParseFormat1_0][RA][f30]FDRA(0x%x),TDRA(%d),vrb2prb(%d), mcs1(%d), TBscaling(%d), CoresetId/RntiId(1/2)(%d), dci_fmt_idx(%d), coreset0RbSize/coresetStartRb(3/3)(%d)
Line 1167: [NOTICE] Invalid detected Coreset ID(%d)
Line 1306: [ParseFormat1_0][SI] HARQ: sibNDI(%d), sibHarqState(%d), sibxCalcIdx(%d), SibxWindowLength(%d)
Line 1313: [ParseFormat1_0][SI] Stop parsing SIB (missmatch SysInfoId(%d), sib1_on(%d))
Line 1328: [ParseFormat1_0][SI] FDRA(0x%x),TDRA(%d),vrb2prb(%d),mcs1(%d),rv1(%d),SysInfoId/sibNDI(1/1)(%d):CoresetId/RntiId(1/2)(%d),dci_fmt_idx/pdcchSearchSpace(1/1)(%d),coreset0RbSize/coresetStartRb(3/3)(%d)
Line 1442: [ParseFormat1_0][P] SMI/SM(1/3)(%d), FDRA(0x%x),TDRA(%d),vrb2prb(%d), mcs1(%d),TBS(%d) CoresetId/RntiId(1/2)(%d), dci_fmt_idx(%d), coreset0RbSize/coresetStartRb(3/3)(%d)
Line 1478: [ParseFormat1_0][PDCCH_RACH] DISCARD DCI. SS_PBCH Index(%) is exceed in FR1
Line 1508: [ParseFormat1_0][PDCCH_RACH] FDRA(0x%x), RAPI/ULI/SSI/PRAMI/CAI(2/1/2/2/1)(%d)
Line 1676: [ParseFormat1_0] FDRA(0x%x),CcIdx/TDRA/vrb2prb(1/4/1)(%d),mcs1/ndi1/rv1/harqId(2/1/1/2)(%d) DAI/TPC/PUCCHRI/HARQFBTI(1/1/1/1)(%d), CoresetId/RntiId/firstCCEIdx/numCCE(1/2/3/2)(%d), MaxMoi(%d), monitoringOccasionIdx(%d), SS(%d), coreset0RbSize/coresetStartRb(3/3)(%d)
Line 1716: [FDM] invalid fdmStartArrayIdx(%d), fdmStartCceInArray(%d), fdmStartCceAggreLevel(%d)
Line 1733: [FDM] invalid symbolLength
Line 1746: [ParseFormat1_0][FDM] PDSCH FDM(m_CcIdx:%d) : fdmCoresetIdx(%d), fdmStartSymbolIdx(%d), fdmSymbolLength(%d), fdmDciStartPrb(%d), fdmStartCce(%d), fdmAggregationLevel(agg_%d) : fdmDciStartPrb(%d), fdmDciLegnth(%d), detectedSearchSpace(%d)
Line 1751: [ParseFormat1_0][FDM] fdmCceBitmap[0~4]:[0x%x][0x%x][0x%x][0x%x][0x%x], fdmStartArrayIdx(%d), fdmStartCceInArray(%d)
Line 1835: [CopyParsingFormat1_1]obuf[0](0x%x) obuf[1](0x%x) obuf[2](0x%x) obuf[3](0x%x)
Line 1898: (f) [ParseFormat1_1]coresetId(%d), this phyCH is already detected!!
Line 1963: [ParseFormat1_1] Wrong BandwidhtPart Indicator(%d) numOfBWP(%d)
Line 1972: [ParseFormat1_1] DCI format with a BWP indicator field is not within the first 3 symbols of a slot..sym(%d)
Line 1979: [F][ParseFormat1_1] cc(%d) DCI Based BWP Switch Candidate but false Alarm
Line 2020: [ParseFormat1_1]FDRA(0x%x),CcIdx/BWPInd/TDRA/vrb2prb/prbBundSize(1/1/2/1/1)(%d),mcs1/ndi1/rv1/mcs2/ndi2/rv2(2/1/1/2/1/1)(%d), rateMatch/zpCsiRsTrig/DLAIdx/harqid(1/2/2/2)(%d), TPC/PucchResInd/HarqFbTiming/antPorts(1/1/1/2)(%d),formats/carrierInd/transCfgInd/SRSreq/DmrsSeq/dormancyInd(1/1/1/1/1/2)(%d),size cbgTransInfo/cbgFlushoutInfo(1/1)(%d), MaxMoi:%d, monitoringOccasionIdx:%d, NrCaState(%d)
Line 2063: [FDM] invalid fdmStartArrayIdx(%d), fdmStartCceInArray(%d), fdmStartCceAggreLevel(%d)
Line 2080: [FDM] invalid symbolLength
Line 2092: [ParseFormat1_1][FDM] PDSCH FDM(m_CcIdx:%d) : fdmCoresetIdx(%d), fdmStartSymbolIdx(%d), fdmSymbolLength(%d), fdmDciStartPrb(%d), fdmStartCce(%d), fdmAggregationLevel(agg_%d) : fdmDciStartPrb(%d), fdmDciLegnth(%d)
Line 2097: [ParseFormat1_1][FDM] fdmCceBitmap[0~4]:[0x%x][0x%x][0x%x][0x%x][0x%x], fdmStartArrayIdx(%d), fdmStartCceInArray(%d)
Line 2203: [ParseFormat2_1]coresetIdx(%d), RntiIdx(%d), dcisize(%d), PreemptionInd[0](%d), PreemptionInd[1](%d), PreemptionInd[2](%d), PreemptionInd[3](%d)
Line 2401: [ParseFormat2_6] scellDormancyIndication length(%d) is bigger then maximum bitmap length(5)
Line 2425: [ParseFormat2_6] dcisize(%d), wakeup(%d), DormancyIndication(%d), DormancyIndication Length(%d), obuf(0x%08x/0x%08x/0x%08x/0x%08x/0x%08x)
Line 2487: [NR_IPC]L2_PHY_DCI_INFO_IND : ShortMsg(0x%x), currentSfn(%d)
Line 2588: [BWP_SWITCH]IsDL(%d),bwpSwitchDelay_scs_UL(%d),bwpSwitching_candidate_UL(%d), bwpSwitchDelay_scs_DL(%d),bwpSwitching_candidate_DL(%d), mprevIndicatedBwpIdxUL/DL(%d/%d), mDiffBwpIdxCntUL/DL(2/2)(%d)
Line 2638: [DCI DEV] Invalid Convert type(%d)
Line 2715: (I)Do not handle HW ISR(%d) in case of slot type is UL
Line 2724: (I)Do not handle HW ISR(%d) in case of slot type is MTM & Flexible
Line 2787: [Update_0_1_fdraWithTargetBWP] originalBWP: FDRAbitwidth(%d), FDRA(0x%X), Dci.ratype(%d) targetBWP: FDRA(0x%X), dci0_x.raType(%d), dci0_x.fdra(0x%X), RATypeLen(%d), RA0Len(%d), RA1Len(%d), RA2Len(%d)
Line 2850: [Update_1_1_fdraWithTargetBWP] originalBWP: FDRAbitwidth(%d), FDRA(0x%X), Dci.ratype(%d) targetBWP: FDRA(0x%X), dci1_x.raType(%d), dci1_x.fdra(0x%X), RATypeLen(%d), RA0Len(%d), RA1Len(%d), RA2Len(%d)
