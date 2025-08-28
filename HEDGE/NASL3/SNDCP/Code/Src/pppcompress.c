Line 160: sl_compress_init(%d)
Line 484: IP Header (1) In Hex  Ver(%x), HL(%x), ToS(%x), TL(%x) 
Line 485: IP Header (2) In Hex  ID(%x), off(%x) Protocol(%x), ChSum(%x)
Line 494: TYPE_IP----1
Line 498: TCP Header (1) In Hex  SP(%x), DP(%x), SN(%x), AN(%x),off(%x)
Line 499: TCP Header (2) In Hex  x2(%x),flag(%x),window(%x), tcpCS(%x)
Line 502: TYPE_IP th_flag(%x)
Line 535: packet --- Wasn't the first
Line 547: packet ---found a prev connection
Line 552: packet ---Didn't find it
Line 567: TYPE_IP----4
Line 570: packet Uncompressed
Line 750: TYPE_UNCOMPRESSED_TCP
Line 753: !Bad : ip->ip_p (%d)
Line 757: last recv (%d)
Line 758: last recv state (%d)
Line 767: Length-copied-in-rx-state(%d)
Line 772: !!Bad : Default
Line 776: TYPE_COMPRESSED_TCP
Line 780: We've received a compressed packet
Line 790: !!Bad : 1
Line 803: we have to toss the packet.
Line 808: last_recv(%d)
Line 810: last_recv_state(%x)
Line 811: First  part In Hex  Ver(%x), HL(%x), ToS(%x), TL(%x)
Line 812: Second part In Hex  ID(%x), off(%x) Protocol(%x), ChSum(%x)
Line 815: In Hex  SP(%x), DP(%x), SN(%x), AN(%x),off(%x)
Line 816: In Hex  x2(%x),flag(%x),window(%x), tcpCS(%x)
Line 818: In Hex  TH CS(%x)
Line 829: !!!!We are in BAD area, Not expected!!!!
Line 328: TYPE_IP----3
Line 333: TYPE_ERROR
Line 342: go to Uncompressed---1
Line 345: Can be Compressed
Line 360: Before: changes in packet(%d)
Line 382: go to Uncompressed---5
Line 403: Always compress outputchanges %d
Line 409: Change in IPID(%x)
Line 429: length of final change(%d)
Line 433: connection ID present
Line 442: NO connection ID
Line 210: go to Uncompressed---2
Line 215: Change in Window field(%x)
Line 223: go to Uncompressed---3
Line 226: Change in Ack field(%x)
Line 236: Change in Seq field(%x)
Line 636: Decode-Flag(%x), URG(%x)
Line 643: Dec-WIN(%x)
Line 644: S-CP-Val-Before (%x)
Line 644: S-CP-Val-If (%x)
Line 644: S-CP-Val-Else (%x)
Line 648: Dec-ACK(%x)
Line 649: L-CP-Val-Before (%x)
Line 649: L-CP-Val-If (%x)
Line 649: L-CP-Val-Else (%x)
Line 653: Dec-SEQ(%x)
Line 654: L-CP-Val-Before (%x)
Line 654: L-CP-Val-If (%x)
Line 654: L-CP-Val-Else (%x)
Line 660: NEW_I
Line 661: S-CP-Val-Before (%x)
Line 661: S-CP-Val-If (%x)
Line 661: S-CP-Val-Else (%x)
Line 675: Length_one(%d)
Line 680: we must have dropped some characters
Line 693: Length_two(%d),cs_len(%d)
Line 706: Length_END(%d)
Line 710: !!!!We are in BAD area, Not expected!!!!
