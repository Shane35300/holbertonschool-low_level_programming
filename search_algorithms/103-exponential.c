#include "search_algos.h"
/**
 * find_index - name of the function
 * Description: search with the jum search algorithm
 * @array: the array to search in
 * @value: the value to search
 * @left: size of the array
 * @right: jijij
 * Return: return the index if its founded or -1
*/
int find_index(int *array, int left, int right, int value)
{
	int trap = 0, i;
	int middle = (right + left) / 2;

	if (array == NULL || right < left)
	return (-1);

	printf("Searching in array: ");

	for (i = left ; i <= right ; i++)
	{
		if (trap == 1)
		printf(", ");

		printf("%d", array[i]);
		trap = 1;
	}
	printf("\n");

	if (value > array[middle])
		return (find_index(array, middle + 1, right, value));
	else if (value < array[middle])
		return (find_index(array, left, middle - 1, value));
	else if (value == array[middle])
		return (middle);
	return (-1);
}
/**
 * exponential_search - name of the function
 * Description: search with the jum search algorithm
 * @array: the array to search in
 * @value: the value to search
 * @size: size of the array
 * Return: return the index if its founded or -1
*/
int exponential_search(int *array, size_t size, int value)
{
	int last_idx = (int)size - 1, low, exp;

	if (array == NULL)
		return (-1);

	for (low = 1; low <= last_idx ; low *= 2)
	{
		exp = low * 2;

		printf("Value checked array[%d] = [%d]\n", low, array[low]);

		if (exp <= last_idx && array[exp] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", low, exp);
			return (find_index(array, low, exp, value));
		}
		else if (exp >= last_idx)
		{
			printf("Value found between indexes [%d] and [%d]\n", low, last_idx);
			return (find_index(array, low, last_idx, value));
		}
	}
	return (-1);
}
