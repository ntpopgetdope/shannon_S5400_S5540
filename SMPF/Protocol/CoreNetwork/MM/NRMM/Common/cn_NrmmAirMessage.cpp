Line 64: [N :MM,%d]  %%!EM NrmmAirMessage::DeferAirMsg() MSG : %s
Line 82: [N :MM,%d]  NrmmAirMessage::MakeNasMessage msgLen : %d, secHdrType : %d
Line 152: [N :MM,%d]  %%!EC (eIE) NrmmAirMessage::Initial Nas Message Msg Id = %d, IsSecurityActivated = %d, NonClearIeIncluded = %d
Line 192: [N :MM,%d]  NrmmAirMessage::SendAirMessage() Msg Id = %s
Line 199: [N :MM,%d]  RPLMN changed, reset current NSC of null ciphering algorithm 
Line 212: [A :MM,%d]  %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
Line 212: [MM|%d,CP] %%!EM ERROR : m_pNrmmContext->m_pRecvExtMsgHdr = nullptr
Line 228: [N :MM,%d]  NrmmAirMessage::pMsgBody Length : %d
Line 230: [DumpHex] Send TLP Msg to RRC : 
Line 236: [N :MM,%d]  SR triggered as per QM DATA RESUME
Line 252: [N :MM,%d]  Send Response radioMsgId : %d
Line 253: [DumpHex] Send Response : 
Line 257: [N :MM,%d]  NRMM_RADIO_MSG_UAC_BARRING_CHECK_REQ for Dummy msg
Line 265: [N :MM,%d]  Encode ERROR : %d
Line 281: [N :MM,%d]  Skip encode message
Line 295: [N :MM,%d]  SourceTask = %s, Mui = %x, RRC EST CAUSE = %d
Line 367: [A :MM,%d]  %%!EM Error: Replay protection check is failed
Line 367: [MM|%d,CP] %%!EM Error: Replay protection check is failed
Line 374: [A :MM,%d]  %%!EM Error: Integrity check is failed
Line 374: [MM|%d,CP] %%!EM Error: Integrity check is failed
Line 400: [A :MM,%d]  %%!EM Error: Decryption is failed
Line 400: [MM|%d,CP] %%!EM Error: Decryption is failed
Line 435: [A :MM,%d]  %%!EM SMC after authentication was ignored due to context mismatch. ngksi [%d] sequenceNum [%d]
Line 435: [MM|%d,CP] %%!EM SMC after authentication was ignored due to context mismatch. ngksi [%d] sequenceNum [%d]
Line 447: [A :MM,%d]  %%!EM SMC for mapped security was ignored due to wrong sequence number. ngksi [%d] sequenceNum [%d]
Line 447: [MM|%d,CP] %%!EM SMC for mapped security was ignored due to wrong sequence number. ngksi [%d] sequenceNum [%d]
Line 457: [A :MM,%d]  %%!EM SMC was ignored due to replay check
Line 457: [MM|%d,CP] %%!EM SMC was ignored due to replay check
Line 462: [A :MM,%d]  %%!EM SMC was ignored due to invalid ngksi [%d]
Line 462: [MM|%d,CP] %%!EM SMC was ignored due to invalid ngksi [%d]
Line 472: [A :MM,%d]  %%!EM SMC was ignored due to replay check
Line 472: [MM|%d,CP] %%!EM SMC was ignored due to replay check
Line 498: [A :MM,%d]  %%!EM Error: Setting the message failed
Line 498: [MM|%d,CP] %%!EM Error: Setting the message failed
Line 523: [A :MM,%d]  %%!EM Unexpected security header type : %d
Line 523: [MM|%d,CP] %%!EM Unexpected security header type : %d
Line 531: [A :MM,%d]  %%!EM Invalid message length for Protected Nas Message : %d
Line 531: [MM|%d,CP] %%!EM Invalid message length for Protected Nas Message : %d
Line 540: [A :MM,%d]  %%!EM Current Nas Security Context is not established
Line 540: [MM|%d,CP] %%!EM Current Nas Security Context is not established
Line 550: [A :MM,%d]  %%!EM message [%s] with security header type3 can not be accepted
Line 550: [MM|%d,CP] %%!EM message [%s] with security header type3 can not be accepted
Line 561: [A :MM,%d]  %%!EM Once the NSC has established, plain message [%s] can not be accepted
Line 561: [MM|%d,CP] %%!EM Once the NSC has established, plain message [%s] can not be accepted
Line 571: [A :MM,%d]  %%!EM Message [%s] discarded due to invalid length : %d
Line 571: [MM|%d,CP] %%!EM Message [%s] discarded due to invalid length : %d
Line 588: [A :MM,%d]  %%!EM Identity request for id type[%d] with Plain message shall not be accepted
Line 588: [MM|%d,CP] %%!EM Identity request for id type[%d] with Plain message shall not be accepted
Line 598: [A :MM,%d]  %%!EM Discard non-integrity protected AUTH REJECT msg when T3516 or T3520 is not running
Line 598: [MM|%d,CP] %%!EM Discard non-integrity protected AUTH REJECT msg when T3516 or T3520 is not running
Line 610: [A :MM,%d]  %%!EM Deregi accept(switch off) with Plain message shall not be accepted
Line 610: [MM|%d,CP] %%!EM Deregi accept(switch off) with Plain message shall not be accepted
Line 619: [A :MM,%d]  %%!EM Message [%s] discarded due to invalid length : %d
Line 619: [MM|%d,CP] %%!EM Message [%s] discarded due to invalid length : %d
Line 626: [A :MM,%d]  %%!EM Message [%s] discarded since #76 is received without integrity protection
Line 626: [MM|%d,CP] %%!EM Message [%s] discarded since #76 is received without integrity protection
Line 636: [A :MM,%d]  %%!EM Message [%s] discarded due to invalid length : %d
Line 636: [MM|%d,CP] %%!EM Message [%s] discarded due to invalid length : %d
Line 642: [A :MM,%d]  %%!EM Message [%s] discarded since #76 is received without integrity protection
Line 642: [MM|%d,CP] %%!EM Message [%s] discarded since #76 is received without integrity protection
Line 649: [A :MM,%d]  %%!EM Message [%s] discarded since #31 is received without integrity protection
Line 649: [MM|%d,CP] %%!EM Message [%s] discarded since #31 is received without integrity protection
Line 665: [A :MM,%d]  %%!EM message [%s] with Plain message type can not be accepted
Line 665: [MM|%d,CP] %%!EM message [%s] with Plain message type can not be accepted
Line 671: [N :MM,%d]  Allowed Plain Nas message rcvd
Line 720: [A :MM,%d]  %%!EM Invalid message length for NRMM Message : %d
Line 720: [MM|%d,CP] %%!EM Invalid message length for NRMM Message : %d
Line 762: [A :MM,%d]  %%!EM GetPlainNasMsgType : msgLen too short : %d
Line 762: [MM|%d,CP] %%!EM GetPlainNasMsgType : msgLen too short : %d
Line 773: [A :MM,%d]  %%!EM GetProtectedNasMsgType : msgLen too short : %d
Line 773: [MM|%d,CP] %%!EM GetProtectedNasMsgType : msgLen too short : %d
Line 832: [A :MM,%d]  %%!EM GetProtectedNasMsgType : msgLen too short : %d
Line 832: [MM|%d,CP] %%!EM GetProtectedNasMsgType : msgLen too short : %d
