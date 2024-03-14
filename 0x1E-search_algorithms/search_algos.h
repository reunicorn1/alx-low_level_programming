#ifndef	SEARCH_ALGOS_H
#define SEARCH_ALGOS_H


/*________ Library Includes ________*/
#include <stdlib.h>
#include <stdio.h>

/*________ Data Structures ________*/

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

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

/********* Exponential Search **********/
int exponential_search(int *array, size_t size, int value);
int binary_search_e(int *array, size_t size, int start, int end, int value);

/********* Advanced binary search **********/
int advanced_binary(int *array, size_t size, int value);
int advanced_binary_split(int *array, size_t lo, size_t hi, int value,
		size_t size);

/********* Jump search in a singly linked list **********/
void print_list(const listint_t *list);
void free_list(listint_t *list);
listint_t *create_list(int *array, size_t size);
listint_t *jump_list(listint_t *list, size_t size, int value);
listint_t *stepping(listint_t *node, size_t step);
listint_t *linear_search_list(listint_t *prev, listint_t *curr,
		int value);

/********* Linear search in a skip list **********/
void free_skiplist(skiplist_t *list);
void init_express(skiplist_t *list, size_t size);
skiplist_t *create_skiplist(int *array, size_t size);
void print_skiplist(const skiplist_t *list);
skiplist_t *linear_skip(skiplist_t *list, int value);
skiplist_t *linear_search_skip(skiplist_t *prev, skiplist_t *curr,
		int value);
#endif
