Line 464: gJtQSize is %d
Line 467: gJbmSafetyMargin(%d),gStJmfAllowedLateLoss(%d),gTargetMinCtrl(%d),gScaleThresh(%d),gLtJbmSizeInMs(%d),gStJbmSizeInMs(%d)
Line 469: gExtraDelay(%d),gDtxShrMargin(%d),gLtJmfLateLoss(%d),gStretchTime(%d), safetyMarginOffset(%d)
Line 388: gJtQSize is %d
Line 390: gScaleThresh(0x%x)
Line 392: gJbmSafetyMargin(%d),gStJmfAllowedLateLoss(%d),gScaleThresh(%d),gLtJbmSizeInMs(%d),gStJbmSizeInMs(%d)
Line 394: gExtraDelay(%d),gDtxShrMargin(%d),ltJmfLateLoss(%d),gStretchTime(%d), safetyMarginOffset(%d)
Line 959: lastPlyOffset(%d) changed due to sysT(%d),preT(%d)
Line 965: Jitter(%d),rcvTs(%d),nextExpectedTs(%d),lastPlayoutOffset(%d),ltMinOffset(%d)
Line 663: Discard:Seq(%d),JbmTS(%d),RcvT(%d),gapDelay(%d)
Line 724: PushDataUnit(dataUnit:sid(%d),PF(%d),POFS(%d))
Line 734: too late packet(p:%d)->discarded
Line 744: too late packet(po:%d)->discarded
Line 750: too late packet(po:%d)->discarded
Line 756: too late packet(po:%d)->discarded
Line 774: [PS]PushDataUnit: INPUTBUFFER_Enque(%d) for partial frame
Line 777: [PS]JB4_INPUTBUFFER_Enque failed(%d)!!!
Line 793: too late packet(p:%d)->discarded(pre packet:%d)
Line 812: uFifoSize change
Line 825: [PS]PushDataUnit:delay(%d),offset(%d),rtpTimeDiff(%d),sysTimeDiff(%d),preDelay(%d)
Line 830: [PS]ltJitter: jitter(%d), percentile(%d), min(%d), nElementsToIgnore(%d)
Line 843: [PS]PushDataUnit: INPUTBUFFER_Enque(%d) for non-partial
Line 539: gJtQSize is %d
Line 1133: Low_Jitter_mode
Line 1190: IncMoreTarget_mode
Line 1198: NormalMoreTarget_mode
Line 1208: NormalMoreTarget_mode
Line 1221: IncMostTarget_mode
Line 1229: NormalMostTarget_mode
Line 1239: NormalMostTarget_mode
Line 1145: Normal_Jitter_mode
Line 1169: IncTarget_mode
Line 1178: NormalTarget_mode
Line 1396: JB4_adaptActivePlayout: ltJmf is empty
Line 1430: 1.need to shrink(%d)
Line 1448: adaptActive Shrink: gap(%d),buffered(%d),extBufferedTime(%d),shrinking(%d),sftMOffset(%d)
Line 1453: speech: lateLoss(%d)
Line 1459: speech: dropEarly(%d)
Line 1464: 2.need to shrink(%d)
Line 1478: 1.need to stretch(%d)
Line 1485: adaptActive stretching: delayWithClearedExternalBuffer(%d),targetMaxStretch(%d),rfDelay(%d)
Line 1493: 2.need to stretch(%d), ExtraDelay(%d)
Line 1500: active: CurDelay(%d) target(%d) tMin(%d) tMax(%d) stJitter(%d) ltJitter(%d) delay(%d) 
Line 1522: JB4_adaptDtxPlayout: ltJmf is empty
Line 1565: 2.need to shrink
Line 1577: 2.need to stretch
Line 1583: dtx->sp: CurDelay(%d) target(%d) stJitter(%d) ltJitter(%d) delay(%d) targetDiff(%d) 
Line 1596: 3.need to shrink
Line 1609: 4.need to stretch
Line 1615: dtx: CurDelay(%d) target(%d) stJitter(%d) ltJitter(%d) delay(%d) targetDiff(%d) 
Line 1656: 5.need to stretch(%d)
Line 1311: inputBuffer size(%d)
Line 1312: JitterFifo size(%d)
Line 1313: ltJmf delayFifo size(%d)
Line 1314: stJmf delayFifo size(%d)
Line 1320: JB4_adaptPlayout: FirstPlayout
Line 1322: first: stretch(%d)
Line 1327: JB4_adaptPlayout: DtxPlayout
Line 1329: dtx: stretch(%d)
Line 1334: JB4_adaptPlayout: ActivePlayout
Line 1337: Playout: sysTime(%d),curDelay(%d),tgtDelay(%d), extBufferedTime(%d)
Line 1359: skip popFromBuffer to stretch
Line 1800: DtxDrop not allowed
Line 1803: DtxDrop allowed
Line 1807: DtxDrop due to inputBuf empty
Line 2202: dropFromBuffer is empty
Line 2241: lastTargetTime(%d)
Line 2243: skip dropFromBuffer(ts:%d,expTs:%d)
Line 2279: Jitter loss rate:dropCnt(%d) nTotalActivePacket(%d)
Line 2281: dequeued from dropFromBuffer
Line 2351: lastTargetTime(%d)
Line 2352: drop unit is SID(%d)
Line 1838: [PS]stJitter:jitter(%d),stJmf minOffset(%d),ltJmf minOffset(%d), min(%d), percentile(%d), nElementsToIgnore(%d)
Line 1686: inspectBufferForDropping:0 buffer
Line 1704: inspectBufferForDropping:1 buffer
Line 1712: inspectBufferForDropping:1,2 is not consecutive
Line 1721: CDRX packet drop
Line 1730: inspectBufferForDropping:seqNoDiff=2
Line 1765: inspectBufferForDropping:negative bufferedTS
Line 2363: JB4_playoutDelay: ltJmf is empty
Line 1944: popFromBuffer is empty
Line 1965: popFromBuffer(totWin:%d,FecOffWinLen:%d)
Line 2011: popFromBuffer(optOfs:%d,maxFecOffWin:%d,lost:%d,tRec:%d,netLossRate:%d,last_nLost:%d,last_ntot:%d)
Line 2042: skip popFromBuffer(ts:%d,expTs:%d)
Line 2094: popFromBuffer(prePartial:%d, nextPartial:%d): nCoderType:%d
Line 2097: dequeued from popFromBuffer
Line 2153: rtpTimeDiff,curTS,lastTS(%d,%d,%d)
Line 2167: pop unit is SID(%d)
Line 2170: speech stats. CurDelay(%d),delay(%d)
Line 1084: [PS]targetPlayout: jitter(%d),ltJitter(%d),tMax(%d),tMin(%d),tDtx(%d),tSrtUp(%d)
Line 2378: JB4_updateLastTimingMembers: ltJmf is empty
Line 2386: lastTargetTime(%d)
Line 1888: Est.Jitter: accuJitter(%d)
Line 1260: prevValue(%d),curIdx(%d),nTotActPkt(%d)
Line 1285: dropOrStretched:dropOrStretched(%d) nTotalActivePacket(%d) dropOrStretchedRatio(%d)
Line 860: nActivePacketLoss(%d)
Line 875: bFreqActivePacketLoss(%d)
Line 882: 1.preActivePacketLoss reset
Line 884: nActivePacketLoss,nActivePacket,nActivePeriod(%d,%d,%d)
Line 902: 1.reset_mode
Line 911: 3.reset_mode
Line 917: 2.reset_mode
Line 920: reset_modeCNT(%d,%d)
Line 931: Delay_mode set
