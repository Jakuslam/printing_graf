/******************************************************************************
    Printing of graph

       05.04.2026
      Jakub Slama

*******************************************************************************/
#include "graf.h"


size_t printGraph(TYPE_OF_GRAF iLenData, TYPE_OF_GRAF iData[]) { //Printing of graph

    //Find max value in array 
    TYPE_OF_GRAF iRange = iData[0];

    for (TYPE_OF_GRAF i = 0; i < iLenData; i++) {
        if (iRange < iData[i]) {
            iRange = iData[i];
        }
    }

    //Print graph and values
    printf("\n\n");
    for (TYPE_OF_GRAF i = iRange; i > 0; i--) {
        printf(PRINT_OF_GRAF, i);

        for (TYPE_OF_GRAF y = 0; y < iLenData; y++) {

            if (iData[y] >= i) {
                printf("##");
            }
            else {
                printf("  ");
            }
            printf(" ");
        }
        printf("\n");
    }

    //Print numbers under the graph
    printf("      ");
    for (TYPE_OF_GRAF y = 1; y <= iLenData; y++) {

        printf(PRINT_OF_GRAF_BUTTOM, y);

    }

    return 1;
}


