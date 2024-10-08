#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stddef.h> 
#include <math.h>
#include <stdlib.h>

int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int find_middle(int *array, int low, int high, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/* Function prototypes */
listint_t *jump_list(listint_t *list, size_t size, int value);

typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
