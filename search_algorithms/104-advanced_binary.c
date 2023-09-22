#include "search_algos.h"
/**
 * recursive_binary_search_bis - name of the function
 * Description: search recursively
 * @array: the array to search in
 * @value: the value to search
 * @left: the smallest index of the array
 * @right: the bigest index of the array
 * Return: return the index if its founded or -1
 */
int recursive_binary_search_bis(int *array, int value, int left, int right)
{
	int middle, i, trap = 0;

	if (left > right)
		return (-1);

	printf("Searching in array: ");

	for (i = left; i <= right; i++)
	{
		if (trap == 1)
			printf(", ");

		printf("%d", array[i]);
		trap = 1;
	}
	printf("\n");

	middle = left + (right - left) / 2;

	if (array[middle] == value)
	{
		if (array[middle - 1] == array[middle])
			return (recursive_binary_search_bis(array, value, left, middle));
		else
			return (middle);
	}
	if (array[middle] > value)
		return (recursive_binary_search_bis(array, value, left, middle - 1));
	if (array[middle] < value)
		return (recursive_binary_search_bis(array, value, middle + 1, right));
	return (-1);
}
/**
 * advanced_binary - name of the function
 * Description: search for a value with binary advanced algorithm
 * @array: the array to search in
 * @size: the size of the array
 * @value: the value to search for
 * Return: return the index if it's found or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_binary_search_bis(array, value, 0, (int)size - 1));
}
