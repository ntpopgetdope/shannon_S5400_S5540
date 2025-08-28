Line 74: [UAC] Get AccessIdentity : %d
Line 80: [UAC] Get AccessIdentityFromNAS : %d
Line 87: [UAC] CurBarredAccessCategories: (0x%08x %08x)
Line 93: [UAC] SetBarredAccessCategory: %d
Line 99: [UAC] SetBarredAccessCategoryForT302start
Line 105: [UAC] ClearBarredAccessCategory: %d
Line 118: [UAC] GetAccessCategory (0x%08x %08x), %d
Line 122: [UAC] wrong AccessCategory (0x%08x %08x)
Line 128: %s
Line 162: [RRC][UAC] Set AccessIdentity: %d, AccessCategory: %d
Line 162: [RRC][UAC] Set AccessIdentity: %d, AccessCategory: %d
Line 168: %s
Line 174: SIB1 is null.
Line 206: UAC Barring Timer value is invalid! Set to max value(512s).
Line 211: [UAC] uacBarringTime : %d
Line 217: %s
Line 223: SIB1 is null.
Line 280: [UAC] wrong BarringFactor
Line 284: [UAC] uac_BarringFactor : %d
Line 291: %s
Line 301: [UAC] randValue(%d) is lower than uacBarringFactor. The access attempt is allowed
Line 306: [UAC] randValue(%d) is not lower than uacBarringFactor. The access attempt is barred
Line 318: %s
Line 325: CheckBarringAccessIdentity: m_accessIdBitmap= (%d)
Line 343: [UAC] uac-BarringForAccessIdentity = (%d)
Line 346: [UAC] uac-BarringForAccessIdentity bit(%d) is not zero.
Line 350: [UAC] uac-BarringForAccessIdentity bit(%d) is zero. The access attempt is allowed. 
Line 360: [UAC] By MpsPriorityIndicationR16, access attempt is allowed
Line 370: %s
Line 384: %s
Line 393: [UAC] accessCategory is matched uacBarringPerCatList index(%d)
Line 405: %s
Line 415: [UAC] plmn_IdentityIndex is matched uac_BarringPerPLMNList index(%d)
Line 427: %s
Line 447: [UAC] will be performed access barring check for Given Access Category
Line 451: [UAC] no matched uac_BarringInfoSetList. The access attempt is allowed
Line 457: [UAC] no matched UAC-BarringPerCatList. The access attempt is allowed
Line 470: [UAC] Unexpected AccessCategory
Line 477: [UAC] will be performed access barring check for Given Access Category
Line 481: [UAC] no matched uac_BarringInfoSetList. The access attempt is allowed
Line 488: [UAC] No uacACBarringListType for specific PLMN
Line 501: [UAC] will be performed access barring check for Given Access Category
Line 505: [UAC] no matched uac_BarringInfoSetList. The access attempt is allowed
Line 511: [UAC] no matched UAC-BarringPerCatList. The access attempt is allowed
Line 517: [UAC] no matched uac-BarringPerPLMN-List and uac-BarringForCommon is not present. The access attempt is allowed
Line 526: %s
Line 532: [UAC] T390 for AccessCategory(%d) is running. The access attempt is barred
Line 544: [UAC] T302 is running. The access attempt is barred
Line 554: %s
Line 560: [UAC] Access attempt barred
Line 568: [UAC] AccessCategory 0 is 'MT access'. The access attempt is allowed
Line 573: [UAC] Access attempt allowed
Line 573: [UAC] Access attempt barred
Line 576: [UAC] Access attempt allowed
Line 576: [UAC] Access attempt barred
Line 588: pScellInfo or DbSib1 is null.
Line 595: [NrBarringInfo] RRC_UAC_CATEGORY_DELAY_TOLERANT : uacBarringFactor(%d), uacBarringTime(%d), uacBarringAccessIdentity(%d), isBarred(%d)
Line 599: [NrBarringInfo] RRC_UAC_CATEGORY_EMERGENCY : uacBarringFactor(%d), uacBarringTime(%d), uacBarringAccessIdentity(%d), isBarred(%d)
Line 603: [NrBarringInfo] RRC_UAC_CATEGORY_MO_SIG : uacBarringFactor(%d), uacBarringTime(%d), uacBarringAccessIdentity(%d), isBarred(%d)
Line 607: [NrBarringInfo] RRC_UAC_CATEGORY_MMTEL_VOICE : uacBarringFactor(%d), uacBarringTime(%d), uacBarringAccessIdentity(%d), isBarred(%d)
Line 611: [NrBarringInfo] RRC_UAC_CATEGORY_MMTEL_VIDEO : uacBarringFactor(%d), uacBarringTime(%d), uacBarringAccessIdentity(%d), isBarred(%d)
Line 615: [NrBarringInfo] RRC_UAC_CATEGORY_SMS_IP : uacBarringFactor(%d), uacBarringTime(%d), uacBarringAccessIdentity(%d), isBarred(%d)
Line 619: [NrBarringInfo] RRC_UAC_CATEGORY_MO_DATA : uacBarringFactor(%d), uacBarringTime(%d), uacBarringAccessIdentity(%d), isBarred(%d)
Line 623: [NrBarringInfo] RRC_UAC_CATEGOTY_IMS_REGISTRATION : uacBarringFactor(%d), uacBarringTime(%d), uacBarringAccessIdentity(%d), isBarred(%d)
Line 632: [NrBarringInfo] pScellInfo or DbSib1 is null.
Line 664: [NrBarringInfo] Unexpected Access Category value %d
Line 669: [NrBarringInfo] Remove NrBarringInfo accessCategory(%d)
Line 678: [NrBarringInfo] pScellInfo or DbSib1 is null.
Line 697: [NrBarringInfo] Set NrBarringInfo for T302
Line 712: [NrBarringInfo] pScellInfo or DbSib1 is null.
Line 736: [NrBarringInfo] Unexpected Access Category value %d
Line 760: [NrBarringInfo] Set NrBarringInfo accessCategory(%d), uacBarringFactor(%d), uacBarringTime(%d), uacBarringAccessIdentity(%d)
Line 765: %s
Line 772: SIB1 is null.
Line 786: SetNrBarringInfoForAllCat category %d
Line 795: %s
Line 801: [NrBarringInfo] Init NrBarringInfo
