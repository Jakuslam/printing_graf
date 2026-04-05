#ifndef GRAF_KUBA_0404
#define GRAF_KUBA_0404

#include <stdio.h>


#define TYPE_OF_GRAF size_t       // defining the type of input data (must be a number)
#define PRINT_OF_GRAF "%03zu | "      // change 'zu' to the correct format specifier
#define PRINT_OF_GRAF_BUTTOM "%02zu " // change 'zu' to the correct format specifier


size_t printGraph(TYPE_OF_GRAF iLenData, TYPE_OF_GRAF iData[]);

#endif
