Line 191:   umtsCellInfo == NULL pointer
Line 191:   umtsCellInfo == NULL pointer
Line 202:   umtsCellResults == NULL pointer
Line 202:   umtsCellResults == NULL pointer
Line 222: [TX DIV] cell [%d %d] information doesn't exist, txDiversityIndicator=%d
Line 222: [TX DIV] cell [%d %d] information doesn't exist, txDiversityIndicator=%d
Line 248: uphy_CUmtsCellSelectionMeasurementMidServer_initAfterRfGrant
Line 248: uphy_CUmtsCellSelectionMeasurementMidServer_initAfterRfGrant
Line 264:   FreqAdjustCmdd failed. errCode=%d, addErrCode=%d
Line 264:   FreqAdjustCmdd failed. errCode=%d, addErrCode=%d
Line 350: Warning: UmtsCellSelectionMeasurementConfigMsg - numOfFreq configMsg->payload.numOfFreq out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/3GFT/UL1/UL1C/RRM/FddMsmt/Code/Src/uphy_CUmtsCellSelectionMeasMidServer.c Line %d
Line 359: Warning: UmtsCellSelectionMeasurementConfigMsg - numOfCells configMsg->payload.cellSetArray[i].numOfCells out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/3GFT/UL1/UL1C/RRM/FddMsmt/Code/Src/uphy_CUmtsCellSelectionMeasMidServer.c Line %d
Line 399:   numOfCellsPerFreqArray == NULL pointer
Line 399:   numOfCellsPerFreqArray == NULL pointer
Line 419:   indMsg returned from createUrrc_UphyUmtsCellSelectionMeasurementIndMsg is NULL in if part
Line 419:   indMsg returned from createUrrc_UphyUmtsCellSelectionMeasurementIndMsg is NULL in if part
Line 426:   UmtsCellSelectionMeasurementInd: No Frequency
Line 426:   UmtsCellSelectionMeasurementInd: No Frequency
Line 435:   indMsg returned from createUrrc_UphyUmtsCellSelectionMeasurementIndMsg is NULL in else part
Line 435:   indMsg returned from createUrrc_UphyUmtsCellSelectionMeasurementIndMsg is NULL in else part
Line 473:   umtsCellResultsSet == NULL pointer
Line 473:   umtsCellResultsSet == NULL pointer
Line 501:   uphy_CUmtsCellSelectionMeasurementMidServer_init:uarfcn=%d - cellCounter=%d !=numOfcells=%d
Line 501:   uphy_CUmtsCellSelectionMeasurementMidServer_init:uarfcn=%d - cellCounter=%d !=numOfcells=%d
Line 536:   UmtsCellSelection_requestCellsMeasurements: mid=%d uarfcn=%d :Num Of uarfcn=%d>UPHY_MEASUREMENTS_MAX_UARFCN_PER_PLMN=%d
Line 536:   UmtsCellSelection_requestCellsMeasurements: mid=%d uarfcn=%d :Num Of uarfcn=%d>UPHY_MEASUREMENTS_MAX_UARFCN_PER_PLMN=%d
Line 566:   Invalid MsgId=%d
Line 566:   Invalid MsgId=%d
Line 630:   IntraFreqCellreselection processIndMsg: Invalid number of cells received
Line 630:   IntraFreqCellreselection processIndMsg: Invalid number of cells received
Line 633: UmtsCellSelection mid=%d:CellSynchro Ind. received:transactId=%d
Line 633: UmtsCellSelection mid=%d:CellSynchro Ind. received:transactId=%d
Line 640:   uarfcnPrimaryScrCodeTransactIdMapInfo == NULL: mid=%d, TransactId=%d
Line 640:   uarfcnPrimaryScrCodeTransactIdMapInfo == NULL: mid=%d, TransactId=%d
Line 657:   UmtsCellSelectionMeasurement:ProcessIndMsg-No cell info found(or)Invalid Scr code. 
Line 657:   UmtsCellSelectionMeasurement:ProcessIndMsg-No cell info found(or)Invalid Scr code. 
Line 673:   Synchro completed cell=%d  did not found in the database
Line 673:   Synchro completed cell=%d  did not found in the database
Line 681:   umtsCellResultsSet == NULL pointer
Line 681:   umtsCellResultsSet == NULL pointer
Line 690:   umtsCellResults == NULL pointer primaryScrCode=%d
Line 690:   umtsCellResults == NULL pointer primaryScrCode=%d
Line 712:   Measured cell=%d  disappeared

Line 712:   Measured cell=%d  disappeared

Line 721:   Measured cell=%d  disapeared - no any cell at given uarfcn=%d
Line 721:   Measured cell=%d  disapeared - no any cell at given uarfcn=%d
Line 732:   UmtsCellSelectionMeasurement:ProcessIndMsg-Req. cells[%d] and Processed cells[%d] not matching. 
Line 732:   UmtsCellSelectionMeasurement:ProcessIndMsg-Req. cells[%d] and Processed cells[%d] not matching. 
Line 750:   Unexpected MsgId=%d
Line 750:   Unexpected MsgId=%d
Line 754:   Invalid MsgId=%d
Line 754:   Invalid MsgId=%d
Line 909: convertMeasuredResultsForURRCFormat:umtsCellSelectionIndMsg->payload.numOfFreq==0 mid %d
Line 909: convertMeasuredResultsForURRCFormat:umtsCellSelectionIndMsg->payload.numOfFreq==0 mid %d
Line 981:   Umts cell selection measurement( mid %d ) is done
Line 981:   Umts cell selection measurement( mid %d ) is done
