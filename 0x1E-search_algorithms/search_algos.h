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


#endif
