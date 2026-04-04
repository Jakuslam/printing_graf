#include "graf.h"


int main() {
    //Priklad pouziti gkce printGraph

    int data[20] = { 5,4,7,8,9,11,3,8,9,11,20,8,9,11,15 }; // list vstupnich hodnot 
    int lenData = 15; //pocet vstupnich hodnot


    printGraph(lenData, data); //tisk grafu s poctem radku, jako hodnot

    //dodaatecny tisk legendy
    printf("\n\n");
    printf("01 - pocet DVD\n");
    printf("02 - pocet CD\n");
    printf("atd .. ");

    return 0;
}