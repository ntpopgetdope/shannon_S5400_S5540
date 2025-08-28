Line 46: RrmSubBlkGapConfigConnNr()
Line 52: ~RrmSubBlkGapConfigConnNr()
Line 57: RrmSubBlkGapConfigConnNr::Init
Line 71:    >>PrintGapConfig - GapUESetupReleaseChoice:%d(enum) GapFR1SetupReleaseChoice:%d(enum) GapFR2SetupReleaseChoice:%d(enum)
Line 76:      ::GapUE - GapOffset:%d Mgl:%d(enum) Mgrp:%d(enum) Mgta:%d(enum)
Line 82:      ::GapFr1 - GapOffset:%d Mgl:%d(enum) Mgrp:%d(enum) Mgta:%d(enum)
Line 88:      ::GapFr2 - GapOffset:%d Mgl:%d(enum) Mgrp:%d(enum) Mgta:%d(enum)
Line 103:    >>CheckGapConfig:(bool)%d
Line 173:      ::[GAP]Received Enum : MeasGapInfoFR2 mgl %d, mgrp %d offset %d, mgta %d
Line 175:      ::[GAP]Calculate : MeasGapInfo mgl %s mgrp %d mgta %s offset %d PatternId %d
Line 179:      ::[GAP]Invalid GapPatternId %d. Set default 0;
Line 193:      ::[GAP]Received Enum : MeasGapInfoFR1 mgl %d, mgrp %d offset %d mgta %d
Line 195:      ::[GAP]Calculate : MeasGapInfo mgl %s mgrp %d mgta %s offset %d PatternId %d
Line 199:      ::[GAP]Invalid GapPatternId %d. Set default 0;
Line 213:      ::[GAP]Received Enum : MeasGapInfoUE mgl %d, mgrp %d mgta %d offset %d
Line 215:      ::[GAP]Calculate : MeasGapInfoUE mgl %s, mgrp %d mgta %s offset %d PatternId %d
Line 219:      ::[GAP]Invalid GapPatternId %d. Set default 0;
Line 243:    >>Update MeasGapInfo in RRM_RRC_MEAS_CONFIG_REQ
Line 251:      ::No MeasGapInfo in RRM_RRC_MEAS_CONFIG_REQ
Line 314:    >>GAP Info is not exist. Set default value 20
