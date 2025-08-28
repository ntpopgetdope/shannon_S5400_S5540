Line 70: [NBRRM => NBL1LC] NBL1LC_DecodeRrmResumeReq
Line 92: [NBRRM => NBL1LC] NBL1LC_DecodeRrmSuspendReq
Line 111: [NBRRM => NBL1LC] NBL1LC_DecodeRrmFreqScanReq
Line 128: [NBRRM => NBL1LC] NBL1LC_DecodeRrmSearchReq
Line 145: [NBRRM => NBL1LC] NBL1LC_DecodeRrmMeasureReq
Line 162: [NBRRM => NBL1LC] NBL1LC_DecodeRrmMeasResultInd
Line 179: [NBRRM => NBL1LC] NBL1LC_DecodeRrmMeasStopReq
Line 196: [NBRRM => NBL1LC] NBL1LC_DecodeRrmAllStopReq
Line 213: [NBRRM => NBL1LC] NBL1LC_DecodeRrmCellChangeReq
Line 230: [NBRRM => NBL1LC] NBL1LC_DecodeRrmUeStateInd
Line 247: [NBRRM => NBL1LC] NBL1LC_DecodeRrmSetServingInd
Line 264: [NBRRM => NBL1LC] NBL1LC_DecodeRrmConnDrxInfoReq
Line 281: [NBRRM => NBL1LC] NBL1LC_DecodeRrmMibInfoUpdateReq
Line 298: [NBRRM => NBL1LC] NBL1LC_DecodeRrmSib1InfoUpdateReq
Line 315: [NBRRM => NBL1LC] NBL1LC_DecodeRrmSiInfoUpdateReq
Line 332: [NBRRM => NBL1LC] NBL1LC_DecodeRrmMeasScheduleEndInd
Line 349: [NBRRC => NBL1LC] NBL1LC_DecodeRrcPhyConfigReq
Line 366: [NBRRC => NBL1LC] NBL1LC_DecodeRrcDrxStatusInd
Line 383: [NBRRC => NBL1LC] NBL1LC_DecodeRrcStartMibReadInd
Line 400: [NBRRC => NBL1LC] NBL1LC_DecodeRrcStopMibReadInd
Line 417: [NBRRC => NBL1LC] NBL1LC_DecodeRrcStartSiReadInd
Line 434: [NBRRC => NBL1LC] NBL1LC_DecodeRrcStopSiReadInd
Line 451: [NBRRC => NBL1LC] NBL1LC_DecodeRrcSibModInd
Line 468: [NBRRC => NBL1LC] NBL1LC_DecodeRrcAckReq
Line 485: [NBRRC => NBL1LC] NBL1LC_DecodeRrcScmcchStartReadInd
Line 502: [NBRRC => NBL1LC] NBL1LC_DecodeRrcScmcchStopReadInd
Line 519: [NBRRC => NBL1LC] NBL1LC_DecodeRrcScmtchStartReadReq
Line 536: [NBRRC => NBL1LC] NBL1LC_DecodeRrcScmtchStopReadInd
Line 553: [NBRRC => NBL1LC] NBL1LC_DecodeRrcScptmCfgUpdateReq
Line 580: [MMC => NB_L1LC] NBL1LC_DecodeMmcSensorStateReq (Feature: 0x%x, Sensor state: 0x%x)
Line 608: [NB_L1LC] MMC_NBL1_REGISTER_L1_INFO_REQ: request_type(0x%x) tx_pwr_threshold(%d) rb_threshold(%d) ul_bler_threshold(%d) dl_bler_threshold(%d)
Line 637: [NB_L1LC] MMC_NBL1_SET_L1_INFO_REQ: input_rsi(%d) input_mos(%d) input_hsi(%d) antenna_config(%d) CurUeState(%d)
Line 645: [NB_L1LC] MMC_NBL1_SET_L1_INFO_REQ: ignore input_hsi because it is 0xFF
Line 648: [NB_L1LC] MMC_NBL1_SET_L1_INFO_REQ: input_rsi %d
Line 653: [NB_L1LC] MMC_NBL1_SET_L1_INFO_REQ: input_rsi %d, input_mos %d, ReceivedRsiMos %d
Line 659: [NB_L1LC] MMC_NBL1_SET_L1_INFO_REQ: update_MTPL %d
Line 664: (RSI %d) Ignore RSI/MOS from MMC_NBL1_SET_L1_INFO_REQ and apply previous gHal_RsiMos(%x)
Line 669: [NB_L1LC] MMC_NBL1_SET_L1_INFO_REQ: UE PowerOff
Line 721: [NB_L1LC] MMC_NBL1_SET_L1_INFO_REQ: ueState=%d writeDirection=%d currentSelectedRxAnt=%d currentSelectedTxAnt=%d asMode.rxAnt=%d asMode.txAnt=%d txAntTemp=%d
Line 736: Antenna config %d is out of range(0-4)
Line 773: [MTPL][SAR][MMC => NBL1LC] Process MMC_NBL1_REGISTER_L1_INFO_REQ (request_type:%d)
Line 790: [MTPL][NBL1INFO][ST%d] gHal_TxPwrInfoInd(%d) gHal_MtplInfoInd(%d) gHal_TapcMode(%d) gHal_TxPwrThreshold(%d) gHal_ClaitInfoInd(%d)
Line 792: [MTPL][NBL1INFO][ST%d] TxRbInfoInd(%d) TxRbThreshold(%d) BlerInfoInd(%d) UlBlerThreshold(%d) DlBlerThreshold(%d)
Line 820: [SAR][NBL1INFO][ST%d] NBL1LC_SendNtnSarStatusInd->Send_MMC_NL1C_NTN_SAR_STATUS_IND
Line 838: [L2 => NBL1LC] NBL1LC_DecodeL2DrxCmdInd
Line 855: [L2 => NBL1LC] NBL1LC_DecodeL2TxReq
Line 872: [NBRRC => NBL1LC] NBL1LC_DecodeRrcAttachCompInd
