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

#endif
