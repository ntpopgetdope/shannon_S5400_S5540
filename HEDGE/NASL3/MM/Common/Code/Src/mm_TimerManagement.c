Line 363: mm_PlmnFailedActionForETWS = %d
Line 366: PlmnId = %d
Line 462: In mm_CheckRatChgOngoingAndDelayTimerExpiryActions Rat change Req : %d, Rat mode Change state %s
Line 475: %d TimeOuts During Rat Change. Action Delayed ...
Line 483: %d TimeOuts During Rat Change. RAT Change Crashed !!!!! Timer Expiry Ignored....
Line 521: (%s) Expired
Line 527: DSDS proc in progress Delay Location Update Untill resume indication from other stack
Line 546: TimeOuts During DSDS proc ongoing on the other Stack Action Delayed
Line 592: mm_DecodeTimerExpiryMsg -> %s,%d
Line 611: (%s) Expired
Line 640: (%s) Expired, Actions are delayed
Line 647:  Timer Object ID -> %d
Line 653: Current Stack -> %d, Timer ID -> %d
Line 688: %s  in  mm_PerformT3210ExpiryActions [24.008]-4.4.4.9 
Line 692: Resetting in mm_PerformT3210ExpiryActions
Line 699: Location Update Timed Out, RR Connection shall be released and Abnormal Cases D-H in [24.008]-4.4.4.9 Run
Line 717: Unexpected event that MM connection exists and REL_REQ comes. Synchronizing MM/CC state
Line 769: %s  in  mm_PerformT3211ExpiryActions
Line 773: T3211 Timed Out but can not perform Loc Upd due to Loss of Coverage
Line 810: T3211 Timed Out but can not perform Loc Upd due to Loss of Coverage
Line 833: T3211 Timed Out, Performing Loc Upd...
Line 908: %s  in  mm_PerformT3212ExpiryActions
Line 912: MM_CLEAR_TEMP_BLOCKED_PLMN_TIMER stopped onm T3212 expiry
Line 929: Due to Access Barred or No Service or LTE RAT, Delay Location Update Untill a Good Cell is Found !
Line 979: UpdateStatus Does Not Allow Location Update to Take Place
Line 986: Due to UpdateStatus, Delay Location Update Untill a Good Plmn is Found... !
Line 993: Improper Update Status for T3212 Expiry !
Line 1003: Saving Timer Msg Until Later......
Line 1022: T3212 Expired But Network Requested for No Location Update to be Done.
Line 1051: %s  in  mm_PerformT3213ExpiryActions
Line 1068: T3213 Timed Out but can not perform Loc Upd due PLMN Search Handle it after Cell Ind
Line 1125: %s  in  mm_PerformT3214ExpiryActions
Line 1129: T3214 expired during EMC call , Actions are ignored to avoid EMC call drop
Line 1159: %s  in  mm_PerformT3216ExpiryActions
Line 1162: T3216 expired during EMC call , Actions are ignored, to avoid Emergency call drop
Line 1196: %s  in  mm_PerformT3218ExpiryActions
Line 1226: %s  in  mm_PerformT3220ExpiryActions
Line 1409: CMCC: CS RB's are not released even after call disconnect
Line 1415: T3240 expired in PMM_IDLE & QRB_STANBY state : REL_REQ cause to REL_REQ_ALL_RESOURCES
Line 1531: %s  in  mm_PerformPlmnListsTimExpAction
Line 1551: mm_PerformMmLauBlockTimerExpiryActions
Line 1570: PAL Error : %x
Line 1606: PAL Error : %x
Line 1622: PAL Error : %x - %d
Line 1629: QRB is diabled.. MM_START_QRB_TIMER is not available
Line 1663: PAL Error : %x - %d
Line 1697: Set MM_T3210 timer value to 10s as per LTE DATA activated of other stack
Line 1751: Timer Duration: %d, mm_GetT3240DurationInSeconds: %d
Line 1781: Timer Duration: %d, mm_GetT3340DurationInSeconds: %d
Line 1796: Set ABORT_QRB timer value to 12 secs for DSDS case
Line 1809: Set MM_LAU_BLOCK_TIMER value to 1 sec for DSDS case
Line 1835: Timer ID Error : %d
Line 1846: PAL Error : %x
Line 1854: timer_duration == ZERO in mm_StartGmmTimer not started
Line 1867: PAL Error : %x - %d 
Line 1898: Request to Start a Timer (%s) that is Already Started !
Line 1908:  %s  ->  RUNNING 
Line 1920:  %s  ->  RUNNING 
Line 1922:  %s   -> Status -  %d
Line 1957: PAL Error : %x
Line 2064: Request to Start a Timer (%s) that is Already Started !
Line 2075:  %s  ->  RUNNING 
Line 2077:  %s   -> Status -	 %d
Line 2139:  %s  ->  MM_TIMER_STOPPED 
Line 2192:  %s  ->  MM_TIMER_STOPPED 
Line 2226: T3212 already expired, do not start T3212 again
Line 2236: T3212 value received in broadcast: %d seconds, Timer will be started after LAU ACCEPT
Line 2243: Attempt to Start T3212 Failed in mm_CheckCellDataAndStartT3212 since CellData.T3212 == 0
Line 2248: Attempt to Start T3212 Failed in mm_CheckCellDataAndStartT3212 since UpdateStatus is Not Suitable
Line 2253: Attempt to Start T3212 Failed in mm_CheckCellDataAndStartT3212 since T3212 is Already Running !!!!
Line 2258: Attempt to Start T3212 Failed in mm_CheckCellDataAndStartT3212 since T3211 or T3213 or T3210 is Already Running !!!!
Line 2263: Attempt to Start T3212 Failed in mm_CheckCellDataAndStartT3212 since MM is not IDLE or SIM is invalid !!!!
Line 2568: Request to Start a Timer (%s) that is Already Started !
Line 2574: No need to start because timer (%s) duration is zero !
Line 2602: Request to Start a Timer (%s) that is Already Stopped !
Line 2645: PAL Error : %x
Line 2652: timer_duration == ZERO in mm_StartGmmTimer -> GMM_T3302 not started
Line 2668: PAL Error : %x
Line 2695: Abnormal Failure - Ending PS DOMAIN SIG HERE
Line 2712: Request to Start a Timer (%s) that is Already Started !
Line 2726:  %s  ->  RUNNING
Line 2783:  %s  -->  STOPPED
Line 2786: Send Congestion Timer status indication !
Line 2961: 
------------------------- MM Timers ----------------------------

Line 2981:  %s ->  RUNNING
Line 2988: No Timers are Running !
Line 3007: 
------------------------- DS Grant Timers ----------------------------

Line 3016:  %s ->  RUNNING
Line 3023: No Timers are Running !
Line 3050: pal_TmCreateMsgTimer did not return PAL_SUCCESS in mm_CreateTimers
Line 3064: pal_TmCreateMsgTimer did not return PAL_SUCCESS in mm_CreateTimers
Line 3088: %s timer Expired during RAT Change, Re-Starting it for a short while ... in %s , %s state
Line 3098: %s timer Expired and triggering RAU now.
Line 3113: Abnormal scenario on MM_WFRAU timer happens. reset the GMM CELL IND states..
Line 3118: RAU cannot be triggered, because state is not valid.
Line 3204: %s  in  mm_PerformWatchDogExpiryActions, cause = %d
Line 3206: Crash on Stuck is %d
Line 3216: MM send GAPI UNRECOVERD IND to restart stack
Line 3244: %s  in  mm_PerformGmmWatchDogExpiryActions, cause = %d
Line 3253: GMM send GAPI UNRECOVERD IND to restart stack
Line 3309: Timer for QrbForG2L is expired!
Line 3340: Timer for Quick Rollback is expired! Starting to rollback to LTE..
Line 3353: QRB State:%s
Line 3360: There is no LTE cell or no PDP context, so restarting timer
Line 3366: WARNING!! timer is invalid, so Ignoring this timer expiry
Line 3378: MM_WAIT_FOR_SCR_BEFORE_LAU timer expired or SCR is sent by NW, Perform LAU
Line 3388: CS domain access is not allowed or MM is not in Idle State, set LAU needed to TRUE for further registration
Line 3401: MM_WAIT_FOR_UNITDATA_IND_AFTER_L2UPSHO timer expired, No UNITDATA_IND after L2U PSHO
Line 3407: Discarding Saved Emergency Call.
Line 3413: Call Ended, releasing CS CALL Grant
Line 3421: CS procedure is not CS CALL, not expected
Line 3434: MM_DSDS_DELAY_STACK_RESUMPTION timer expired, Put MMC resume Request on to Main Queue
Line 3442: ERROR : MMC resume Request pointer is NULL
Line 3467: MM_DSDS_IMS_REGISTRATION_GAURD_TIMER timer expired, Clearing the IMS Signaling grant locally if not released yet
Line 3481: MM_DSDS_IMS_SUBSCRIBE_GAURD_TIMER timer expired, Clearing the IMS Signaling grant locally if not released yet
Line 3495: MM_DSDS_IMS_SMS_GAURD_TIMER timer expired, Clearing the IMS Signaling grant locally if not released yet
Line 3511: MM_DSDS_IMS_MMS_GAURD_TIMER timer expired, Clearing the IMS Signaling grant locally if not released yet
Line 3527: MM_DSDS_IMS_UT_GAURD_TIMER timer expired, Clearing the IMS Signaling grant locally if not released yet
Line 3554: CSFB Paging Response Retry Delay timer expiry
Line 3581:  Check and trigger QRB on 2G 
Line 3590:  GSM RatMode, MM not in Idle, QRB will be initiated after moving to Idle
Line 3600:  QRB not possible as Current Rat is not HEDGE RAT 
Line 3607:  MT CSFB recovery failed. Instead of QrB, UE will try moving to LTE 
Line 3612:  QRB not possible as UE not camped on suitable cell 
Line 3618:  MT CSFB recovery failed. and QRB mot possible, UE will try moving to LTE 
Line 3642: PS DETACH after CSFB call timer expiry
Line 3663: Condition is met, so starting QRB timer.
Line 3688: T3246 Type -> %x  
Line 3703: T3246 Type -> %x  
Line 3723: T3346 Type -> %x  
Line 3738: T3346 Type -> %x  
Line 3778: T3246 value -> %02X
Line 3792: T3246 value -> NOT included; Deactivated 
Line 3830: T3346 value -> %02X
Line 3844: T3346 value -> NOT included; Deactivated 
Line 3869: Due to Access Barred or No Service, Delay Location Update Untill a Good Cell is Found !
Line 3904: ....timer deactivated
Line 3912: ....timer duration = %d(seconds)
Line 3920: ....timer duration = %d(seconds)
Line 3927: ....timer duration = %d(seconds)
Line 3934: ....timer duration = %d(seconds)
Line 3942: ....timer duration = %d(decihours)
Line 3951: ....timer duration = %d(seconds)
Line 3998: T3212 Start Time %d, End Time %d secs.
Line 3999: T3212 will be started with remainng value = %d
Line 4013: T3212 value %d secs.
Line 4020: Timer out!!! MM is tired to wait for MM_REL_CNF. Sending it again!!
Line 4028: No response from URRC for REL_REQ, Suspending RAT due to STOP_NWK_REQ!!
Line 4057: Timer out!!! GMM is tired to wait for MM_REL_CNF. Sending it again!!
Line 4083: Timeout! U2L will be allowed now..
Line 4104: Didn't get DETACH_REQ
Line 4114: PAGING will not be retrieved
Line 4125: RRC Connection release was not received so QRB will be aborted
Line 4176: Fatal Network Recovery Timer is expired
Line 4181: MmStackId %d is not valid!
Line 4188: SIM is not present, ignore Fatal NW Recovery Timer expiration.
Line 4205: MmStackId = %d, Skip reject cause %d.
Line 4232: stack_id (%d) is not valid!
Line 4256: mm_PeformT3245ExpiryActions
Line 4264: T3245 config is disabled.
Line 4285: mm_PeformT3247ExpiryActions
Line 4298: T3245 config is enabled & Entered T3247ExpiryActions!!!
Line 4320: PDP Context deactivated timer expiry handler
