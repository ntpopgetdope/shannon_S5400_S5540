Line 963: (F)CC-RNTI FORMAT 0,1A,3,3A is ignored
Line 1007: (F)TC-RNTI UCI ignore
Line 1012: (F)SPS-RNTI UCI ignore
Line 1043: (F)C-RNTI already arrived, ignore it. 1.SCM(%d),PNUL(%d) 2.SCM(%d),PNUL(%d)
Line 1049: (F)C-RNTI already arrived, update new one. 1.SCM(%d),PNUL(%d) 2.SCM(%d),PNUL(%d)
Line 1055: (F)1A mask return
Line 1065: (F)1A mask return
Line 1108: (F)1C not M-RNTI (0x%04x) return
Line 1114: (F)1C mask return
Line 1122: M_RNTI> buf(0x%x, 0x%x, 0x%x)
Line 1135: (F) DCI_1C exists with C-RNTI
Line 1182: (F)C-RNTI already arrived, ignore it. 1.SCM(%d),PNUL(%d) 2.SCM(%d),PNUL(%d)
Line 1188: (F)C-RNTI already arrived, update new one. 1.SCM(%d),PNUL(%d) 2.SCM(%d),PNUL(%d)
Line 1194: (F)C-RNTI already arrived2, ignore it.
Line 1206: (F)1 mask return
Line 1215: (F)2A mask return
Line 1224: (F)2 mask return
Line 1233: (F)1D mask return
Line 1241: (F)1B mask return
Line 1250: (F)2B mask return
Line 1260: (F)2C mask return
Line 1269: (F)2D mask return
Line 1276: (F)Transmode error!!! (%d)
Line 1308: (F) DCI fmt 4 with UL TM1
Line 1848: (I) dci_info SS/idx(%03d), len(%d), rnti(0x%x), decinfo(%x), data(0x%x,0x%x)
Line 1853: (I) dci_info SS/idx(%03d), len(%d), rnti(0x%x), decinfo(0x%x), SCM(0x%x), PNUL(0x%x), OBUF012(0x%x,0x%x,0x%x)
Line 1862: (F)Please RNTI check meta(0x%x), rnti_buffer(0x%x)
Line 1870: (F)Please RNTI check rnti_id(0x%x), rnti_idx(0x%x), ixOBuf(%d), totalnum(%d)
Line 1885: (F) parse_filter_mask (0x%x)
Line 2087: (F) Cell_GROUP is Invalid, cell_group(%d)
Line 2122: DRX_DCI NO return(%d), cc_idx(%d)
Line 288: (F)DlAsn_meta overlap return(%d)
Line 1375: (F) DCI fmt error (%X)
Line 898: [EPDCCH]Detected! set_idx(%d), cce_agg(%d), dec_cce_idx(%d), ant_port(%d) 
Line 1955: (F)CA ERROR DCI return(%d), cc_idx(%d)
Line 1964: (F) CCH_CalcSlpParameters, local_cg_idx(%d) cell_group(%d)
Line 1744: (I) cc_idx(%d), dci length(0x%x), len0(%d), len1(%d), len2(%d), len3(%d), len4(%d)
Line 1751: dci_det_report(0x%x), cc_idx:%d, DCI_NUM:%d, QS:%d
Line 1634: (F)Not discard pruned DCI cc_idx(%d), pruning_cnt(%d) n_detected(%d), undetected_dci_bmp(%d), cinr_dB(%d)
Line 1652: PDCI Info (ser/agg/ccidx/pdiff) (0x%08x)(0x%08x)(0x%08x)(0x%08x)(0x%08x)(0x%08x)(0x%08x)
Line 1659: (F)candidated dci(%d),undetected_dci_bmp(%d),Pruned by PDiff (ser/agg/ccidx/pdiff)(0/1) (0x%08x)/(0x%08x), obuf0(0/1)(0x%08x)/(0x%08x), obuf1(0/1)(0x%08x)/(0x%08x), obuf2(0/1)(0x%08x)/(0x%08x)
Line 1666: (F)Pruned by PDiff (ser/agg/ccidx/pdiff)(2/3) (0x%08x)/(0x%08x), obuf0(2/3)(0x%08x)/(0x%08x), obuf1(2/3)(0x%08x)/(0x%08x), obuf2(2/3)(0x%08x)/(0x%08x)
Line 1673: (F)Pruned by PDiff (ser/agg/ccidx/pdiff)(4/5) (0x%08x)/(0x%08x), obuf0(4/5)(0x%08x)/(0x%08x), obuf1(4/5)(0x%08x)/(0x%08x), obuf2(4/5)(0x%08x)/(0x%08x)
Line 1441: (I) ccidx/ixidx(%d), det/agg(%d), PDCI(%d), PNUL(%d), obuf0(0x%x), decinfo(0x%x), dci_fmt_idx(%d), dci_s_cce_idx(%d), dci_ser(%d), dci_rnti_idx(%d) 
Line 1450: (F) Pruning DCI CIF error cif(%d), scell_index(%d)
Line 1464: (F) Pruning DCI PDCI/PNULL/DECINFO error, ixOBuf(%d)
Line 1479: (I) index(%d), det(%d), dci_channel(%d), sel_buff_idx(0x%x), start_cce(%d), rnti_index(%d)
Line 1483: (F) ERROR! check start cce buff size(%d)
Line 1503: (F) Pruning DCI, PDCI(%d), PNUL(%d), SER(%d) (0x%x)(0x%x)(0x%x)
Line 1545: (F) Pruning overlap DCI(%d),metric:(%d), prev(%d),metric:(%d), undetected_dci_bmp(0x%x)
Line 340: (F) cell_group = %d is invalid!
Line 353: (W) MBSFN canceled by TM9/10
Line 359: (F)False alarm(MBSFN, No TM9/10)
Line 374: (F) Dup MTCH 
Line 504: (F)[SPS]Two TBs are valid in SPS
Line 509: [SPS]cell group(%d) DL OP: 0x%x, state(%d) 
Line 542: [SPS]DL ActCnt(%d)
Line 552: [SPS]DL ReleaseCnt(%d)
Line 573: (F) TA(%d)>1, RLF(%d), CR(%d)>=6 
Line 622: [SPS]DL, acid:%d
Line 684: (I) RETX on far acked harq_id(%d), rxtti(%d)
Line 699: (F) RETX more than 3 times on harq_id:%d
