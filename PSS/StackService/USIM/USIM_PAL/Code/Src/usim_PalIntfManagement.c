Line 130: [USIM_%d] usim_PalInitUicc %d SIM ABSENT: SINGLE STACK
Line 136: [USIM_%d] usim_CardActivation: Device NV is setting both the stack to same physical slot  , Setting SIM ABSENT for deactivated slot
Line 142: [USIM_%d] usim_PalInitUicc %d
Line 148: [USIM_%d] SIM PRESENT
Line 154: [USIM_%d] Skip SIM1 caching in case that USIM is inserted with HOT SWAP disabled
Line 181: [USIM_%d] SIM ABSENT: Activated(%d), Enable(%d)
Line 215: [USIM_%d] SIM ABSENT
Line 225: [USIM_%d] [MEP] Set event so that LSI#1 can start the init process
Line 231: [USIM_%d] pSIM not support 1.8 V
Line 244: [USIM_%d] USIM is not INITIALISED, Update system property on SIM_INIT_REQ
Line 261: [USIM_%d] usim_PalInitUicc : Completed
Line 282: [USIM_%d] usim_PalInitMepEuicc %d
Line 299: [USIM_%d] [MEP] Other stack is in ABSENT state so. other LSI state:%s)
Line 349: [USIM_%d] SIM ABSENT
Line 359: [USIM_%d] usim_PalInitMepEuicc : Completed
Line 425: [USIM_%d] SimId is INVALID!!!
Line 443: [USIM_%d] SimId is INVALID!!!
Line 459: [USIM_%d] USIM Powering UP - START: Socket %d
Line 470: [USIM_%d] USIM Powering UP - COMPLETED: %d
Line 513: [USIM_%d] USIM Powering DOWN: %d
Line 546: [USIM_%d] SlotChange current : PhySlotId = %d muxState = %d(PSIM:0,ESIM:1) socketId = %d
Line 550: [USIM_%d] SlotChange Failed, Mux:%d
Line 566: [USIM_%d] SlotChange Result: %d, switchTo:%d(eSIM:0,rSIM:1)
Line 636: [USIM_%d] current slot : %d, socketId : %d -> GetUnSelSlotID : %d
Line 690: [USIM_%d] InitUnSelSlot : slotID[%d]
Line 695: [USIM_%d] InitUnSelSlot : SIM PRESENT
Line 700: [USIM_%d] Skip SIM1 caching in case that USIM is inserted with HOT SWAP disabled
Line 708: [USIM_%d] InitUnSelSlot : Sim Pre Init Failed
Line 723: [USIM_%d] InitUnSelSlot : SIM ABSENT
Line 726: [USIM_%d] [MEP] Set event so that LSI#1 can start the init process
Line 735: [USIM_%d] InitUnSelSlot : Completed
Line 770: [USIM_%d] InitUnSelSlot Current Slot[%d] has No MUX
Line 777: [USIM_%d] InitUnSelSlot Current Slot[%d] not needed for this mode/stack
Line 788: [USIM_%d] InitUnSelSlot MUX Setting FAIL
Line 794: [USIM_%d] Send REMOVE_IND to clear USAT globals
Line 806: [USIM_%d] Sending FAILED 
Line 811: [USIM_%d] InitUnSelSlot SlotID from NV = %d
Line 817: [USIM_%d] Restore deact slot
Line 825: [USIM_%d] InitUnSelSlot MUX Setting FAIL
Line 851: [USIM_%d] [HOTSWAP] ignoreHotswapInterrupt MUX:%d, ACT:%d
Line 920: [USIM_%d] >> usim_Ignore3rdSlot Result : %d , HwVersion : %d, DFC_TYPE: %d, RICE DFC: %d
Line 950: [USIM_%d] SimId is INVALID!!!
Line 996: [USIM_%d] [MEP]Nad byte reversal : %d
Line 1018: [USIM_%d]  Inside usim_PalDrvSocketReq , NAD: 0x%x send to SIM card
Line 1019: [USIM_%d]  usim_MepRecovery.MepState = %d, usim_MepRecovery.Context = %d, usim_MepRecovery.TypeOfDriverError = %d 
Line 1056: [USIM_%d] ESE recovery start, wait reset complete on peer stack
Line 1067: [USIM_%d] Drv error occur during MEP 
Line 1085: [USIM_%d] NAD: 0x%x received from SIM card
Line 1140: [USIM_%d] >> InitialiseDeviceDrivers SlotId: %d, SocketId: %d
Line 1169: [USIM_%d] SocketId is INVALID!!!
Line 1184: [USIM_%d] [MUXMEP] Stack[%d] switchTo eSIM : Result : %d
Line 1191: [USIM_%d] MUX Setting FAIL or No MUX slot
Line 1251: [USIM_%d] Device Driver Initialisation -> O.K
Line 1256: [USIM_%d] pal_DrvSocketCreate ERROR -> 0x%02X
Line 1266: [USIM_%d] MEMALLOC FAILS
Line 1295: [USIM_%d] MEMALLOC FAILS
Line 1331: [USIM_%d] Device Driver Initialisation -> O.K
Line 1336: [USIM_%d] pal_DrvSocketCreate ERROR -> 0x%02X
Line 1343: [USIM_%d] pSim drv socket ID : 0x%x
Line 1366: [HOTSWAP] HandleSimRemoveInd Tray:%d, Sim1:%d, Sim2:%d
Line 1370: [USIM_%d] [HOTSWAP] MULTIPLE_CHECK_SIM_DETECT_INTERRUPT disabled
Line 1406: [USIM_%d] [HOTSWAP] Ignore remove Interrupt stackId[%d], slotId[%d] 
Line 1421: [USIM_%d] Ignore Hotswap Interrupt:%d, 
Line 1435: [USIM_%d] Ignore Hotswap Interrupt:%d, 
Line 1459: [HOTSWAP] HandleSimInsertInd Tray:%d, Sim1:%d, Sim2:%d
Line 1494: [USIM_%d] [HOTSWAP] Ignore insert Interrupt stackId[%d], slotId[%d] 
Line 1508: [USIM_%d] Ignore Hotswap Interrupt:%d, 
Line 1521: [USIM_%d] Ignore Hotswap Interrupt:%d, 
Line 1543: [USIM_%d] [HOTSWAP] SEND SIM_HOTSWAP_IND (SimId=%d)
Line 1564: [USIM_%d] ONE SIMLOCK: SET SIMLOCK STATUS -SimId = %d, SimLockCheckStatus = %d
Line 1578: [USIM_%d] SimId is INVALID!!!
Line 1605: [USIM_%d] ONE SIMLOCK: GET SIMLOCK STATUS - SimId = %d, SimLockCheckStatus = %d
Line 1660: [USIM_%d] NCKLockByDiffCard- SIM1= %d, SIM2= %d
Line 1710: [USIM_%d] NCKLockByDiffCard(SIM1=%d, SIM2=%d), CombinedDiffUicc(%d)
Line 1739: [USIM_%d] Sim1LockInfo NCKErrCause = %d
Line 1779: [USIM_%d] >> usim_PalInitDetectPIN %d
Line 1962: [USIM_%d] USIM Sem Created: %x
Line 1967: [USIM_%d] APDU CHUNK Sem Created: %x
Line 1972: [USIM_%d] USIM LSI Sem Created: %x
Line 1977: [USIM_%d] USIM State1 Sem Created: %x
Line 1982: [USIM_%d] USIM State2 Sem Created: %x
Line 2035: [USIM_%d] >> USIM sleep to reset UICC: %d 
Line 2037: [USIM_%d] << USIM sleep to reset UICC: %d 
Line 2049: [USIM_%d] [PERSO] >> usim_ResetSimlockInfo
Line 2060: [USIM_%d] [PERSO] >> usim_ResetSimlockInfo wrong simId(%d)!! 
Line 2122: [USIM_%d] [MUXMEP]usim_PalDeactSlotInfo SlotId = %d
Line 2165: [USIM_%d] Init Slot NV : st1=%d, st2=%d
Line 2190: [USIM_%d] Default value Case
Line 2197: [USIM_%d] InvalidNVCheck : st1SimSlotId=%d, st2SimSlopId=%d
Line 2201: [USIM_%d] Invalid Case 1 : MAX Slot ID exceeded
Line 2211: [USIM_%d] Invalid Case 2 : same socket, except MEP case
Line 2218: [USIM_%d] Invalid Case 3 : same slotID
Line 2227: [USIM_%d] [MUXMEP] Invalid Case : Not P1+P2 in MUX mode
Line 2236: [USIM_%d] [MUXMEP] Invalid Case : unexpected pSIM slot in eSIM only device
Line 2295: [USIM_%d] InitSlot SlotNum = %d
Line 2324: [USIM_%d] InitSlot SlotID from NV = %d
Line 2357: [USIM_%d] InitSlot MapedSlot = %d muxState = %d
Line 2389: [USIM_%d] MUX Setting FAIL or No MUX slot
Line 2395: [USIM_%d] Stack[%d] switchTo eSIM : Result : %d
Line 2445: [USIM_%d] [MUXMEP]usim_UpdateSlotInfo usim_IsSlotActivated = %d, slotInfo->bActivated = %d
Line 2471: [USIM_%d] [MUXMEP]usim_SetSlotInfo state = %d, SelectedSlot = %d (0:unsel,1:sel)
Line 2493: [USIM_%d] Null ICCID
Line 2524: [USIM_%d] usim_PortInfo[%d].stackId = %d
Line 2525: [USIM_%d] usim_PortInfo[%d].portState = %d
Line 2526: [USIM_%d] usim_PortInfo[%d].portId = %d
Line 2548: [USIM_%d] [GSIM] eSIM is mute, Mode: %d
Line 2574: [USIM_%d] usim_SetSlotInfo usim_FirstSlotInfoSent = %d
Line 2597: [USIM_%d] usim_SetSlotInfo state = %d, unSelectedSlot = %d
Line 2649: [USIM_%d] usim_SetSlotInfo usim_FirstSlotInfoSent = %d
Line 2665: [USIM_%d] [SLOT_%d] state(%d), active(%d), enable(%d), stack(%d)
Line 2667: [USIM_%d] [SLOT_%d] type(0x%x), support type(0x%x), eSIM(%d)
Line 2690: [USIM_%d] usim_Check_eSIM = %d
Line 2727: [USIM_%d] SetSimSlotType : %d -> %d
Line 2743: [USIM_%d] SetSimSlotType failed : %d -> %d
Line 2798: [USIM_%d] MepMode %d, usim_PhySlotId: %d, Port Id: %d
Line 2818: [USIM_%d] Init all MEP Port with default values
Line 2894: [USIM_%d] [MUXMEP] %s
Line 2917: [USIM_%d] [MUXMEP] Current MODE = %d (0:MUX mode, 1:MEP mode)
Line 2966: [USIM_%d] Invalid NV case : Set Default MUX slot info
Line 3012: [USIM_%d] Set SlotInfo : MEP Socket1
Line 3051: [USIM_%d] Set SlotInfo : MUX
Line 3078: [USIM_%d] Is_class_C_Voltage_not_supported= %d
Line 3106: [USIM_%d] Set MepReadSubSlotState : %d
Line 3123: [USIM_%d] Get MepReadSubSlotState : %d
