#ifndef	SEARCH_ALGOS_H
#define SEARCH_ALGOS_H


/*________ Library Includes ________*/
#include <stdlib.h>
#include <stdio.h>




/*________ Function Prototypes ________*/

/********* Linear Search *********/
int linear_search(int *array, size_t size, int value);

/********* Binary Search *********/
int binary_search(int *array, size_t size, int value);
void printing(int *array, size_t lo, size_t hi);

/********* Jump Search **********/
int jump_search(int *array, size_t size, int value);
int linear_search_j(int *array, int prev, int curr, int value, int size);


/********* Interpolation Search **********/
int interpolation_search(int *array, size_t size, int value);

#endif
