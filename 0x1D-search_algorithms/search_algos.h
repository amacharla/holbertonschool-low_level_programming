#ifndef __SEARCH_ALGOS_H_
#define __SEARCH_ALGOS_H_

#include <stdio.h>
#include <stdlib.h>

/*Mandatory*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/*Advance*/
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif /*__SEARCH_ALGOS_H_*/
