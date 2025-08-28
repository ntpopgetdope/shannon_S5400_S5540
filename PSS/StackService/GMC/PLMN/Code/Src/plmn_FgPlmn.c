Line 1072:    Case 1.b In Auto Sel. Mode, RPlmn Deleted or in Forbidden List -> PLMN Search on HPLMN
Line 1077:    Case 1.a In Manual Sel. Mode, RPlmn Deleted or in Forbidden List 
Line 1104:    Case 2.b PLMN Sel. state is HPLMN/RPLMN search and selected PLMN is not Blocked -> PLMN Search on HPLMN/RPLMN
Line 1108:    Case 2.a PLMN Sel. state is HPLMN/RPLMN search and Selected PLMN is blocked in %s -> List request need to be triggered
Line 1123:    Case 3. BPLMN Enabled to Sent List Req to Non_Active RAT without suspending Active RAT 
Line 1133:    Default Case. Changing RAT to Request Plmn List
Line 820: PLMN::FGPLMN:ListReq - FGCause(%d) 
Line 821:    PLMN list req event set from %s
Line 386:    Plmn Rejected, Requesting List From Current RAT, Trying HPlmn on Other RAT
Line 563:    %s: set RAT %s for PLMN list req 
Line 564:    %s: use %s for PLMN list req 
Line 565:    %s: Change RAT from %s to %s for PLMN list req 
Line 566: [!]%s: fail to get RAT for PLMN list req 
Line 628:    %s :
Line 222:    %s : %s
Line 277: PLMN::FGPLMN::ListReq:Wait for RR Release and RAT change Before Sending Plmn list req 
Line 284: PLMN::FGPLMN::ListReq:Wait for RR Release Before Sending Plmn list req 
Line 302: PLMN::FGPLMN::ListReq:Wait for RAT change Before Sending Plmn list req 
Line 191: PLMN::FGPLMN:ListReq to %s 
Line 1223:    %s : %s
Line 1275: PLMN::FGPLMN:Complete PLMN list NOT aquired - Get PLMN list from next RAT  
Line 1282: PLMN::FGPLMN:Complete PLMN list aquired 
Line 1153:    %s : nextRatMode(%s) 
Line 1154: [!]It Should Not come here, some mismatch might happened so error recovery 
Line 1475: PLMN::FGPLMN:ListRsp from %s 
Line 1476:    %s : %s , %s 
Line 1479:    PLMN LIST Ind status = %s
Line 1488: [W]Stack is not Initialized, Ignore the Message!!
Line 1494: [W]Rejecting Plmn List Ind, Wrong plmn_PlmnState !
Line 1502: [W]Cross over of LIST_IND, Ignoring the message
Line 1507: [I]Bplmn State: %s, Procedure: %s 
Line 1584:    EmergencyCallPending , Do not continue further LIST_REQ. Initiating Emergency scan immediately
Line 1597:    Stored Search -> Performs stored freqn actions on next Rat 
Line 1609:    List Procedure done in %s
Line 1628: Enter next SmartBand search phase after PLMN LIST
Line 1376:    %s : List Req Status = %s 
Line 1384:    EUTRAN is already disabled temporarily for TELSTRA/AUSOPEN. No need to enable again
Line 129:    Foreground LIST procedure is going on, ABORT
Line 130:    %s : CurrentRat : %s , AbortCause - %s (0x%x)
