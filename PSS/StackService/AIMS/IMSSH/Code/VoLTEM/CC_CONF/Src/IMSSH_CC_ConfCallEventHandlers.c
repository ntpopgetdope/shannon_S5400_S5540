Line 124: [CONF_CALL]Invite For Conference Request Received. CallID : [%d]
Line 170: [CONF_CALL] Unhold For CallId[%d] has failed, release the call
Line 205: [CONF_CALL] Invite Response Received. CallID : [%d], Cause : [%d]
Line 223: [CONF_CALL] Updated Originator as CONNECTED
Line 227: [CONF_CALL] Invite Response Received For IMSSH_CC_ENHANCED_CONF_CALL
Line 239: [CONF_CALL] Invite Sent to Conference Server has failed. Unhold Previously active call & Send Conference Fail Ind
Line 287: [CONF_CALL] Hold With 1-1 Is Failure ,Conference has Failed
Line 329: [CONF_CALL] Invite Response Received. CallID : [%d], Cause : [%d]
Line 336: [CONF_CALL] Invite Success from New User being added, Hold the new User
Line 342: [CONF_CALL] Invite Sent to Add User has failed. Send Add User as Failed & Unhold the Conference Session
Line 355: [CONF_CALL] Hold With 1-1 Is Failure ,Conference has Failed
Line 404: [CONF_CALL] UnHold Is Success From Conference Server, New User is on Hold, Send Refer To Add new user to Conference
Line 413: [CONF_CALL] Callid[%d] sent in Invalid, Waiting for Unhold Response for Conf Call
Line 420: [CONF_CALL] Hold With 1-1 Is Failure ,Conference has Failed
Line 430: [CONF_CALL] Destroying Conf DB as Hold Fails
Line 466: [CONF_CALL] Hold Is Success From Conference Server, Send Invite to New User
Line 472: [CONF_CALL] Hold With Conference Server has Failed ,Adding User CallId [%d ] to Conference has Failed
Line 480: [CONF_CALL] Hold is Success for the new User Being Added,Unhold Conference Session
Line 493: [CONF_CALL] Callid[%d] sent in Invalid, Waiting for Hold Response from new user
Line 503: [CONF_CALL] Hold for 1-1 Call Has Failed, Send Add user Fail to AP & Unhold the Conf Server Session
Line 550: [CONF_CALL] Hold Is Success,Send Invite To Conference Server
Line 557: [CONF_CALL] Hold With 1-1 Is Failure ,Conference has Failed
Line 565: [CONF_CALL] State Mismatch, Message Unexpected in Connecting state
Line 590: [CONF_CALL] Refer has Sent Successfully
Line 591: [CONF_CALL] Subscribe Response %d is Received Send Ind to Refer To Refer Active Participants
Line 600: [IMSSH_CC_ConfSubscribeRspInd_EstablishedHdlr] Focus URI is Set Send Subscribe to Conference Event
Line 641: [CONF_CALL]Refer has Sent Successfully
Line 649: [CONF_CALL] Refer Responses are received for all users with 1-1 sessions, Send Refer To all Linked Participants
Line 1143: [CONF_CALL]ReferRsp or Notify to Refer received, SipStatusCode[%d],CallId[%d]
Line 1149: [CONF_CALL]CCM, handle the Notify to Refer:P[%d]CallId[%d]
Line 1253: [CONF_CALL]Ignore the Bye response recevied for the Callid[%d] which is not found in participant list by sending RelInd
Line 1259: [CONF_CALL] Conference Sequence [%d] [0:INVALID][1:SUB,REF][2:REF,SUB]
Line 1266: [CONF_CALL] Subscribe final rsp not received yet. Not triggering REFER
Line 1276: [CONF_CALL] Refer Has Sent to 1-1 Session users wait for its Response
Line 1280: [CONF_CALL] Refer Responses are received for all users with 1-1 sessions, Send Refer To all Linked Participants
Line 1285: [CONF_CALL] Refer Has Sent to Linked users wait for its Response
Line 1289: [CONF_CALL] Refer Responses are received for all Linked Users
Line 1300: [CONF_CALL] Ignore the Bye response recevied for the Callid[%d] which is not found in participant list
Line 1304: [IMSSH_CC_ConfByeRsp_EstablishedHdlr] Remove Participant Call
Line 1323: Registry] CONF_CALL_END_NO_PARTICIPANT : %d (0: FALSE, 1: TRUE)
Line 1726: [CONF_CALL] Index[%d] Matched already, go to next Participant
Line 1738: [CONF_CALL] Noitfy Response Received Status [%d]
Line 1742: [CONF_CALL]Matched Index[%d]
Line 1743: [CONF_CALL]User Enitity
Line 1751: participant_index [%d]
Line 1799: [CONF_CALL] Unmatched disconnected user received, deleteing the user entity to avoid mapping to a valid user
Line 1805: [CONF_CALL] No. of Notify Users[%d], No. of Matched users[%d]
Line 1816: [CONF_CALL] Received Null Notify Body
Line 1899: [CONF_CALL] Conference Sequence [%d] [0:INVALID][1:SUB,REF][2:REF,SUB]
Line 2047: [CONF_CALL] Focus URI is Set Send Subscribe to Conference Event
Line 2056: [CONF_CALL] Focus URI is not Set Send Error, Unable to Subscribe to Conference Event
Line 2067: [CONF_CALL] Conference Sequence [%d] [0:INVALID][1:SUB,REF][2:REF,SUB], Subscribe Support [%d]
Line 2088: [CONF_CALL] Ack Sent To Network Send Subscribe = %d
Line 2100: [CONF_CALL] Focus URI is Set Send Subscribe to Conference Event
Line 2109: [CONF_CALL] Focus URI is not Set Send Error, Unable to Subscribe to Conference Event
Line 2126: [CONF_CALL] Invite Response Received For IMSSH_CC_ENHANCED_CONF_CALL
Line 2133: [CONF_CALL]CMCC PCT Enabled Send Refer, not sending Subscribe
Line 2174: [CONF_CALL] Conf Call is in Connected state & 1-1 User being added is in Hold State, Refer The User Being Added
Line 2182: [CONF_CALL] Conf Call is in Hold state & 1-1 User being added is in Hold State, Unhold The conf Call, then Refer the Participant
Line 2192: [CONF_CALL] Conf Call on Hold, To add user 1-1 Call Hold failed ,Adding User CallId [%d ] to Conference has Failed
Line 2193: [CONF_CALL] Add/Merge User has failed, Unhold Conf Call
Line 2214: [CONF_CALL] Callid[%d] sent in Invalid, Waiting for Hold Response for Conf Call
Line 2303: [CONF_CALL] Callid[%d] sent in Invalid, Waiting for Unhold Response for Conf Call
Line 696: [CONF_CALL]SipStatusCode[%d],CallId[%d],P[%d]:ConfEndPointStat_Connected
Line 700: [CONF_CALL] Invalid participant id [%d]
Line 708: [CONF_CALL] Received 2XX in Notify Release the 1-1 Session Established with the User: callId(%d)State(%d)
Line 713: [CONF_CALL] INVALID Call Id %d !!
Line 720: [CONF_CALL] Received 202 Response For Refer Sent, Refer Other Active Participants
Line 736: [CONF_CALL] Received 202 Response For Refer Sent, Wait for Notify
Line 740: [CONF_CALL] All Active Participants are Referred
Line 749: [CONF_CALL] Refer Responses are received for all users with 1-1 sessions, Send Refer To all Linked Participants
Line 753: [CONF_CALL] Refer Has Sent to Linked users wait for its Response
Line 757: [CONF_CALL] Refer Responses are received for all Linked Users
Line 766: [conf]Received 4XX-6XX in Notify Release the 1-1 Session Established with the User: callId(%d)State(%d)
Line 810: [conf]Received 4XX-6XX in Notify Release the 1-1 Session Established with the User: callId(%d)State(%d)
Line 841: [CONF_CALL] INVALID Call Id %d !!
Line 880: [CONF_CALL] INVALID Call Id %d !!
Line 887: [CONF_CALL] Refer Responses are received for all users with 1-1 sessions, Send Refer To all Linked Participants
Line 891: [CONF_CALL] Refer Has Sent to Linked users wait for its Response
Line 895: [CONF_CALL] Refer Responses are received for all Linked Users
Line 902: [CONF_CALL] Call Id[%d] is already in Connected state
Line 992: [CONF_CALL] Invalid participant id [%d]
Line 1007: [CONF_CALL] Received 202 Response For Refer Sent to Remove User, Wait for Notify 
Line 1013: [CONF_CALL] Received 4xx-6xx Response for REFER sent to Remove User
Line 1022: [CONF_CALL] Received Unknown Response For Refer Sent to Remove User, Wait for Notify 
Line 1045: [CONF_CALL] Invalid participant id [%d]
Line 1052: [CONF_CALL] Refer Response is received for Removing User
Line 1060: [CONF_CALL] Refer Has Sent to Removing user wait for its Response
Line 1065: [CONF_CALL] All Users to Remove are Referred
Line 1076: [CONF_CALL] Received 202 Response For Refer Sent to Remove User, Wait for Notify 
Line 1082: [CONF_CALL] Received 4xx-6xx Response for REFER sent to Remove User
Line 1092: [CONF_CALL] Refer Has Sent to Removing user wait for its Response
Line 1097: [CONF_CALL] All Users to Remove are Referred
Line 1105: [CONF_CALL] Received Unknown Response For Refer Sent to Remove User, Wait for Notify 
Line 1519: [CONF_CALL]Endpoint Entity Received in Notify
Line 1520: [CONF_CALL]User Entity Received in Notify
Line 1521: [CONF_CALL]Participant Number to be matched
Line 1524: [CONF_CALL] Method of detection for matched participant : [%d] (0: Endpoint and User Entity, 1 : Only User Entity)
Line 1393: [CONF_CALL]Extracted Number to be matched
Line 1397: [CONF_CALL] Received Entity List Notify Body is in URI Format & Found
Line 1415: [CONF_CALL] Received Entity List Notify Body is anonymous
Line 1426: [CONF_CALL] Received Entity List Notify Body is in URI Format & Found
Line 1433: [CONF_CALL] Received Entity List Notify Body is in URI Format & Not Found
Line 1467: [CONF_CALL]Extracted Number to be matched
Line 1471: [CONF_CALL] Received Entity List Notify Body is not in URI Format & Found
Line 1478: [CONF_CALL] Received Entity List Notify Body is anonymous
Line 1485: [CONF_CALL] Received Entity List Notify Body is not in URI Format & Not Found
Line 1490: [CONF_CALL] Received Entity List Notify Body is in URI Format & Not Found
