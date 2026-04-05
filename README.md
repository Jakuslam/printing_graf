# Printing Graph
This is basic C code that prints a graph using only an array of data (numbers) and the length of the array.

# How to use it?
- Download `graf.c` and `graf.h`
- In `graf.h`, change the type of input data (default type is `size_t`) using:
```c
#define TYPE_OF_GRAF size_t       // defining the type of input data (must be a number)
#define PRINT_OF_GRAF "%03zu | "      // change 'zu' to the correct format specifier
#define PRINT_OF_GRAF_BUTTOM "%02zu " // change 'zu' to the correct format specifier
```
You can use it by:

```c
#include "graf.h"


int main() {
    //How to use it

    int data[20] = { 5,4,7,8,9,11,3,8,9,11,20,8,9,11,15 }; // array of input data
    int lenData = 15; //lenght of input data

    printGraph(lenData, data); //calling a function that print graph

    return 0;
}
```
## How the graph looks:
```
017 |                               ##                
016 |                               ##                
015 |                               ##          ##
014 |                               ##          ##
013 |                               ##          ##
012 |                               ##          ##
011 |                ##          ## ##       ## ##
010 |                ##          ## ##       ## ##
009 |             ## ##       ## ## ##    ## ## ##
008 |          ## ## ##    ## ## ## ## ## ## ## ##
007 |       ## ## ## ##    ## ## ## ## ## ## ## ##
006 |       ## ## ## ##    ## ## ## ## ## ## ## ##
005 | ##    ## ## ## ##    ## ## ## ## ## ## ## ##
004 | ## ## ## ## ## ##    ## ## ## ## ## ## ## ##
003 | ## ## ## ## ## ## ## ## ## ## ## ## ## ## ##
002 | ## ## ## ## ## ## ## ## ## ## ## ## ## ## ##
001 | ## ## ## ## ## ## ## ## ## ## ## ## ## ## ##
      01 02 03 04 05 06 07 08 09 10 11 12 13 14 15
```

If you want to use the code, an example is provided in `main`.
