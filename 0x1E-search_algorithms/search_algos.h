#ifndef search_algos
#define search_algos

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t n, int value);
int jump_search(int *array, size_t n, int value);

#endif
