#ifndef _SEARCH_HEADER
#define _SEARCH_HEADER

/** HEADERS FILES */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/** Prototype */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
#endif
