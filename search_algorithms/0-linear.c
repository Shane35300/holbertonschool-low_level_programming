#include "search_algos.h"
/**
 * linear_search - name of the function
 * Description: search for a value with linear search algorithm
 * @array: the array to search in
 * @size: the size of the array
 * @value: the value to search for
 * Return: return the index if it's found or -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0 ; index < size ; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);

		if (array[index] == value)
		{
			return ((int)index);
		}
	}
	return (-1);

}
