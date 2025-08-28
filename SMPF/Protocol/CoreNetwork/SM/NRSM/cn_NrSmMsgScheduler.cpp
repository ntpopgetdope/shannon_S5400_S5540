Line 48: [D :SM,%d]       (constructor) NrSmMsgScheduler()
Line 52: [W :SM,%d]  %%@EM Error : %s(0x%X) is not nullptr. Memmory leakage case
Line 52: [W :SM,%d]  %%@EM So DELETE %s and NEW again
Line 52: [W :SM,%d]  %%@EM %s is already nullptr. So can't _DELETE_ in %s
Line 52: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 52: [W :SM,%d]  %%@EM (_new_) %s=0x%X in %s
Line 53: [W :SM,%d]  %%@EM Error : %s(0x%X) is not nullptr. Memmory leakage case
Line 53: [W :SM,%d]  %%@EM So DELETE %s and NEW again
Line 53: [W :SM,%d]  %%@EM %s is already nullptr. So can't _DELETE_ in %s
Line 53: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 53: [W :SM,%d]  %%@EM (_new_) %s=0x%X in %s
Line 54: [W :SM,%d]  %%@EM Error : %s(0x%X) is not nullptr. Memmory leakage case
Line 54: [W :SM,%d]  %%@EM So DELETE %s and NEW again
Line 54: [W :SM,%d]  %%@EM %s is already nullptr. So can't _DELETE_ in %s
Line 54: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 54: [W :SM,%d]  %%@EM (_new_) %s=0x%X in %s
Line 86: [D :SM,%d]       (distructor) ~NrSmMsgScheduler()
Line 88: [W :SM,%d]  %%@EM %s is already nullptr. So can't _DELETE_ in %s
Line 88: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 90: [W :SM,%d]  %%@EM %s is already nullptr. So can't _DELETE_ in %s
Line 90: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 92: [W :SM,%d]  %%@EM %s is already nullptr. So can't _DELETE_ in %s
Line 92: [W :SM,%d]  %%@EM (_delete_) %s=0x%X in %s
Line 97: [N :SM,%d]     (fn) %s
Line 103: [W :SM,%d]  %%@EM Message processing condition not registred
Line 124: [N :SM,%d]     (fn) %s
Line 128: [W :SM,%d]  %%@EM return %s(%d) due to %s = nullptr in %s
Line 134: [N :SM,%d]     Already inserted Msg[%d]=%s Or Session Id is not allocated yet:%d
Line 143: [N :SM,%d]     Pending message queue is full
Line 165: [N :SM,%d]     New inserted Msg[%d] = %s
Line 184: [W :SM,%d]  %%@EM Undefined Option(%d)
Line 195: [N :SM,%d]     (fn) %s
Line 203: [W :SM,%d]  %%@EM can't found pending message
Line 208: [D :SM,%d]       PendingId=%d MsgName(%s)
Line 216: [N :SM,%d]     (fn) %s
Line 221: [W :SM,%d]  %%@EM can't found pending message : PendingId=%d
Line 225: [D :SM,%d]       erase PendingId=%d MsgName(%s)
Line 234: [N :SM,%d]     (fn) %s
Line 240: [W :SM,%d]  %%@EM can't found pending message : PendingId=%d
Line 245: [D :SM,%d]       erase PendingId=%d MsgName(%s)
Line 253: [N :SM,%d]     (fn) %s
Line 258: [W :SM,%d]  %%@EM can't found pending message
Line 263: [D :SM,%d]       erase PendingId=%d FreeMsg MsgName(%s)
Line 271: [N :SM,%d]     (fn) %s
Line 283: [D :SM,%d]       ProcessState on STATUS IND ==> %s
Line 290: [D :SM,%d]       ResultPendingId[%d] = %d
Line 300: [D :SM,%d]       ResultPendingId[%d] = %d
Line 309: [D :SM,%d]       FindInx=%d RetrieveEstRejectedMsg
Line 310: [W :SM,%d]  %%@EM (_new_arr_) %s=0x%X in %s
Line 316: [W :SM,%d]  %%@EM FindInx=%d No RetrieveEstRejectedMsg
Line 327: [N :SM,%d]     (fn) %s
Line 336: [D :SM,%d]       ProcessState on STATUS IND ==> %s
Line 346: [D :SM,%d]       ResultPendingId[%d] = %d
Line 355: [D :SM,%d]       FindInx=%d RetrievePossibleAllMsgWithMsgTypeAndSessionId
Line 356: [W :SM,%d]  %%@EM (_new_arr_) %s=0x%X in %s
Line 362: [D :SM,%d]       FindInx=%d No RetrievePossibleAllMsgWithMsgTypeAndSessionId
Line 381: [D :SM,%d]       (fn) RetrievePossibleMsg : PCurrentPendingId(%d)
Line 387: [D :SM,%d]       ProcessState on STATUS IND ==> %s
Line 401: [N :SM,%d]     PendingId=%d in RetrievePossibleMsg
Line 406: [N :SM,%d]     Already sending EST_REQ msg..
Line 411: [N :SM,%d]     PendingId=%d in RetrievePossibleMsg (session=nullptr)
Line 423: [N :SM,%d]     (fn) %s
Line 428: [N :SM,%d]     ProcessState on STATUS IND ==> %s
Line 432: [N :SM,%d]     PendingId=%d in RetrievePossibleMsgAfterSyncDone
Line 458: [N :SM,%d]     (fn) %s
Line 462: [D :SM,%d]       Init (%d) Sync (%d) Emer (%d)
Line 489: [E :SM,%d]   | SM PENDING QUEUE |
Line 490: [E :SM,%d]   |=========================================================|
Line 500: [E :SM,%d]   [%d] Sid(%d) Pending Message : %s 
Line 505: [E :SM,%d]   |=========================================================|
Line 509: [D :SM,%d]       Empty PendingQueue
Line 516: [N :SM,%d]     (fn) %s
Line 524: [N :SM,%d]     FreeMsg(%s) in %s
Line 538: [N :SM,%d]     (fn) %s
Line 578: [D :SM,%d]       Handle Msg (%s)
Line 586: [D :SM,%d]       Session ID in Msg (%s) is not allocated yet
Line 594: [N :SM,%d]     (fn) %s
Line 608: [D :SM,%d]       Already pended Msg[%d]=%s
Line 612: [D :SM,%d]       (get) %s = %d(0x%X) in %s
Line 618: [N :SM,%d]     (fn) %s
Line 633: [D :SM,%d]       SessionId (%d)
Line 644: [D :SM,%d]       SessionId (%d)
Line 655: [D :SM,%d]       SessionId (%d)
Line 666: [D :SM,%d]       SessionId (%d)
Line 677: [D :SM,%d]       SessionId (%d)
Line 688: [D :SM,%d]       SessionId (%d)
Line 695: [D :SM,%d]       Unexpedted Msg (%s)
Line 708: [N :SM,%d]     (fn) %s
Line 766: [W :SM,%d]  %%@EM Unexpedted Msg (%s)
Line 770: [D :SM,%d]       FindSessionId (%d)
Line 782: [N :SM,%d]     (fn) %s
Line 795: [D :SM,%d]       GetTransIdBasedOnSIdFromPendingQ TransId[%d]=%s
Line 803: [N :SM,%d]     (fn) %s
Line 814: [D :SM,%d]       SessionId (%d) exist on pendingQ
Line 824: [D :SM,%d]       SessionId (%d) exist on pendingQ
Line 834: [D :SM,%d]       SessionId (%d) exist on pendingQ
Line 844: [D :SM,%d]       SessionId (%d) exist on pendingQ
Line 854: [D :SM,%d]       SessionId (%d) exist on pendingQ
Line 864: [D :SM,%d]       SessionId (%d) exist on pendingQ
Line 871: [D :SM,%d]       Unexpedted Msg (%s)
