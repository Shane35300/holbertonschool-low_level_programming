#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int recursive_binary_search(int *array, int value, int left, int right);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int find_index(int *array, int left, int right, int value);
int advanced_binary(int *array, size_t size, int value);
int recursive_binary_search_bis(int *array, int value, int left, int right);
#endif /* SEARCH_ALGOS_H */
