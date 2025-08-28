Line 50: RrmSubBlkEventB2::RrmSubBlkEventB2()
Line 55: RrmSubBlkEventB2::~RrmSubBlkEventB2()
Line 68: NULL ptr
Line 72:    >>NrRrm_CheckEutraCellEventTriggerB2::MeasID(%d)
Line 85: VoNR(%d), ModemStatus(%d), skipIratMr(NV %d)
Line 89: During VONR, Skip B2 evaluation due to ModemStatus(%d)
Line 224:      ::%s - Mp:%d Hys:%d Thresh1:%d - PCell(Arfcn:%d Pcid:%d)
Line 225:      ::%s - Mn:%d Ofn:%d Ocn:%d Hys:%d Thresh2:%d - Eutra(Pcid:%d)
Line 226:      ::entering((Mp+Hys=(%d)<(%d)=Thresh1) && (Mn+Ofn+Ocn-Hys=(%d)>(%d)=Thresh2)) / leaving((Mp-Hys=(%d)>(%d)=Thresh1) && (Mn+Ofn+Ocn+Hys=(%d)<Thresh2)) / staying(else)
Line 231:    >>Unexpected EventIdChoice:(enum)%d
Line 247: NULL ptr
Line 251:    >>NrRrm_CheckUtraCellEventTriggerB2::MeasID(%d)
Line 332:      ::%s - Mp:%d Hys:%d Thresh1:%d - PCell(Arfcn:%d Pcid:%d)
Line 333:      ::%s - Mn:%d Ofn:%d Ocn:%d Hys:%d Thresh2:%d - Utra(Pcid:%d)
Line 334:      ::entering((Mp+Hys=(%d)<(%d)=Thresh1) && (Mn+Ofn+Ocn-Hys=(%d)>(%d)=Thresh2)) / leaving((Mp-Hys=(%d)>(%d)=Thresh1) && (Mn+Ofn+Ocn+Hys=(%d)<Thresh2)) / staying(else)
Line 339:    >>Unexpected EventIdChoice:(enum)%d
