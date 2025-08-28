Line 189: activeStackId %d RfConfigAfterSleep : HW destination control(Wake-up)
Line 202: activeStackId %d HWConfigAfterSWWakeup : HW destination control(Wake-up)
Line 225: activeStackId %d [Sleep Wake]Modem Initialize...
Line 281: [Sleep]%s , cancelSleepingVal : %d 
Line 317: [Sleep]%s
Line 348: activeStackId %d [Sleep]%s
Line 395: currentRefCounterSlot=%d, currentRefCounterChip =%d, temSfn %d, newSlot %d, currentSlot %d, currentChipInSlot %d, deltaCellkTm %d
Line 442: [Sleep] uhal_CHmcpSleepStart_WakeUpLisr: MifFreq(%d) CpuFreq(%d) slp_cnt(%d) reqd_sleep_time(%d) Diff(%d) mifTime(%d) socTime(%d)
Line 452: Wrong WakeUp Int
Line 464: [Sleep]%s
Line 468: uhal_CHmcpSleepStart_SysValidLisr
Line 546: rejectByDsl1rc = %d isOtherRatCDMA = %d rejectByCdma = %d
Line 553: activeStackId %d [Sleep]%s, relativeTimeStamp %d
Line 620: activeStackId %d HW destination control(uhal_CHmcpSleepStart_IratMeasurement)
Line 866: activeStackId %d [Sleep]%s
Line 920: [Sleep Wake] refcnt_frame_sleep %d, refcnt_slot_sleep %d, refcnt_chip_sleep %d, refcnt_chipx8_sleep %d refCnt_beforesleep %d, frameRake %d
Line 921: [Sleep Wake] New Time compensation
Line 988: [Sleep Wake]RSN adjustment : boundaryRSN: %d currentRSN= %d currentSlot =%d,newCurrentSlot =%d , framesElapsed= %d
Line 1007: activeStackId %d txTmFrameCnt = %d, txTmChipCnt = %d, txTmChipX8Cnt = %d
Line 1019: activeStackId %d [Sleep Wake]sleepClockCounterDuringSleep: %d 
Line 1020: activeStackId %d [Sleep Wake]elapsedChipx8TimeInSleepWithoutActualSleeping: %d 
Line 1021: activeStackId %d [Sleep Wake]beforeslot: %u
Line 1022: activeStackId %d [Sleep Wake]beforechip: %u
Line 1023: activeStackId %d [Sleep Wake]chipx8ClocksOverSleep: %u
Line 1024: activeStackId %d [Sleep Wake]elapsedChipx8TimeToComputeSfn: %u
Line 1025: activeStackId %d [Sleep Wake]elapsedFrames: %d 
Line 1026: activeStackId %d [Sleep Wake]chipx8ClocksOverSleepRelative	 : %d 
Line 1027: activeStackId %d [Sleep Wake]swSFN	 : %d  ElapsedSlots: %d  ElapsedChips : %d 
Line 1028: activeStackId %d [Sleep Wake]slotRake	 : %d  chipRake: %d  chipx8Rake : %d 
Line 1037: activeStackId %d Do 3G RF initialization
Line 1051: activeStackId %d Reset wakeAfterSleep in sys valid hisr
Line 1059: activeStackId %d [Sleep Wake]Modem Initialize...
Line 1075: activeStackId %d [Sleep Wake]Early wakeup SwSFN : %d , WakeUpTime : %d
Line 1081: activeStackId %d Rf Init not needed during wakeup %d:%d
Line 1087: activeStackId %d [Sleep Wake]normal wakeup SwSFN : %d , WakeUpTime : %d
Line 1224: activeStackId %d [Sleep]%s
Line 1279: activeStackId %d [Sleep Req]No cell in sleeping :RerRl = %d
Line 1290: activeStackId %d [Sleep Req]Uhal return: Invaild state: StartStopState %d 
Line 1303: [Sleep Req]Uhal return: Cancel sleeping: bchUsed %d,  cancelSleeping %d, isCbs %d
Line 1318: activeStackId %d [Sleep Req]Uhal sleep: too long (%d - %d = %d)
Line 1325: activeStackId %d [Sleep Req]adjust (%d - %d = %d)
Line 1348: [Sleep Req]uhal_CHmcpSleepStart using SlotWakeUpEn=%d, SlotsBeforePQ=%d, CPUSleepOverheadChips=%d, CpuModemSleepDiffUsec=%d 
Line 1383: [Sleep Req] currentAdjustSleepSlot(%d) updatedAdjustSleepSlot(%d) isUtranCommercialPlmnId(%d) isFngEcIo(%d) numLockedFingersIIR(%d) rssiBeforeSleep(%d) rssiThreshold(%d)
Line 1403: [Sleep Req]Befor sleep: WakeAndPqSlotDiff = %d,adjustSleepSlot= %d, FingAllocationSlot= %d, isMpInfoExisted  %d
Line 1463: [Sleep Req]Before sleep:  adjustSleepSlot= %d weakSignal = %d
Line 1523: adjustSleepSlot(%d) + POWER.WCDMA.WAKEUPMARGIN_CHIPSET_SLOT(%d)
Line 1530: [Sleep Req]Before sleep: adjustSleepSlot %d minResUseTimeAdjust %d
Line 1545: [Sleep Req]Before sleep: adjustSleepSlot(%d) = adjustSleepSlot - palWakeUpSocTime_slot(%d) PAL WAKE_UP_SOC_TIME(%u)slow
Line 1554: [Sleep Req] SleepDuration = %d
Line 1567: [Sleep Req]uhal_CHmcpSleepStart_request (%d - %d = %d),swSlot %d, hwSlot %d, pichSfn %d 
Line 1570: [Sleep Req]Befor sleep: lastAfcPdm= %d
Line 1609: [Sleep Req] interrupt destroy skipped due to Reject on HW wakeup/ongoing IRAT on other stack
Line 1624: [Sleep Req]Uhal sleep Started normally: start SFN %d wakeup SFN %d sleepDuration %d(sfn) %d(slot) requestedSleepClockLength %d , WAKING_MARGIN %d 
Line 1628: [Sleep Req]beforesfn = %d, beforeslot= %d, beforechip= %d smc_TimeCurrentSFNactiveStackId %d rfReconfigDoneAfterWakeup %d 
Line 1639: activeStackId %d [Sleep Req]uhal_CHmcpSleepStart_request: Cancel WakeUptimer 0x%x
Line 1651: activeStackId %d [Sleep Req]Uhal sleep: not enough reacqire time : beforesfn = %d, wakeupSfn = %d
Line 1902: [Sleep]%s PowerOn %d
Line 1923: [SleepDbg]RefCnt:CELLk_RTG_TIME %d, TIME_REF_CNT %d, TX_TM_CPI_TIMER_R %d
Line 1958: [SleepDbg]PAL Time - palTimeAfterWakeUP %d, palTimeBeforeSleep %d, palTimeDiff %d (us)
Line 1959: [SleepDbg]PAL Time - estPalFrameCnt %d, estPalSlotCnt %d, estPalChipCnt %d
Line 1960: [SleepDbg]PrevRef Time - PrevRefFrameCnt %d, PrevRefSlotCnt %d, PrevRefChipCnt %d
Line 1961: [SleepDbg]Compare Refcnt and Pal - TotalHWChips %d, TotalPFChips %d, Diff(Ref-Pal) %d
Line 1966: [SleepDbg]Warning Diff chips(Ref-Pal) %d
Line 1981: [SleepDbg]Expected WakeUp Time - SFN %d, SLOT %d
Line 1990: [SleepDbg]Ref_cnt - refcnt_frame_sleep %d, refcnt_slot_sleep %d, refcnt_chip_sleep %d, refcnt_chipx8_sleep %d
Line 2021: uhal_CHmcpSleepStart using warmup_time=%d, clocks=%d, min_catnap_length=%d
Line 2038: Remaining cur_slp_time = %d, %d(us)
Line 750: [WDCXOLPM] wakeup: lastAfcPdmByWakeup(%d) lastAfcPdmBySleep(%d)
Line 752: [WDCXOLPM] wakeup: IsLpmCalDone(%d:CalVer/LpmCalDone/NormalCalDone)
Line 756: [WDCXOLPM] wakeup: dcxoCalFoLpm(%d) dcxoCalFoNormal(%d) tune(%d) dcxoCalFo(%d)
Line 758: [WDCXOLPM] wakeup: dcxoPpm_Normal(%d) dcxoPpm_Lpm(%d)
Line 763: [WDCXOLPM] wakeup: lpmRtcDiff(%d) lpmCntDiff(%d)
Line 768: [WDCXOLPM] wakeup: SclkSlpCnt_Normal(%d) SclkSlpCnt_Lpm(%d)
Line 770: [WDCXOLPM] wakeup: dcxoSclkMode(0x%x)
Line 789: [WDCXOLPM] M_normal(%d)u32 M_normal(0x%08X,%08X)u64 
Line 806: [WDCXOLPM] M_lpm(%d)u32 M_lpm(0x%08X,%08X)u64 
Line 808: [WDCXOLPM] M_total(%d)u32 M_total(0x%08X,%08X)u64 
Line 675: %s:
Line 676: ->
Line 296: activeStackId %d Uhal sleep exit: sfn %d slot %d chip %d time by uhal_CHmcpRlInfo_FastSfnSlotChip_RefRl
Line 1745: [Sleep Req]uhal_CHmcpSleepStart_CalcWakeAndPqSlotDiff:  piSymbolLength=%d, piSymbolOffsetToPich=%d, PqSlot=%d,pichSlotOffsetToCpich=%d, WakeAndPqSlotDiff %d, newPqSlot %d
