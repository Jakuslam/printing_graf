/******************************************************************************
    Tisk gragu hodnot

        04.04.2026
       Jakub Slama

*******************************************************************************/
#include "graf.h"


size_t printGraph(TYPE_OF_GRAF iLenData, TYPE_OF_GRAF iData[]) { //Tisk grafu hodnot + legendy

    //najde maximální hodnotu v grafu
    TYPE_OF_GRAF iRange = iData[0];

    for (TYPE_OF_GRAF i = 0; i < iLenData; i++) {
        if (iRange < iData[i]) {
            iRange = iData[i];
        }
    }

    //vytiskne graf hodnot
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

    //Tisk legendy

    //Tisk čísel pod grafem 
    printf("      ");
    for (TYPE_OF_GRAF y = 1; y <= iLenData; y++) {

        printf(PRINT_OF_GRAF_BUTTOM, y);

    }

    return 1;
}


