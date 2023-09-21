#include "search_algos.h"
/**
 * jump_search - name of the function
 * Description: search with the jum search algorithm
 * @array: the array to search in
 * @value: the value to search
 * @size: size of the array
 * Return: return the index if its founded or -1
*/
int jump_search(int *array, size_t size, int value)
{
	int jump, low, i;

	if (array == NULL || size < 2)
		return (-1);

	jump = (int)sqrt((float)size);

	for (low = 0; low < (int)size + jump - 1; low += jump)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);

		if (array[low + jump] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", low, (low + jump));
			for (i = low; i <= low + jump; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);

				if (array[i] == value)
				{
					return (i);
				}
			}
		}
		if (value > array[low] && low >= (int)size - 1)
		{
			printf("Value found between indexes [%d] and [%d]\n", low, (low + jump));
			printf("Value checked array[%d] = [%d]\n", low, array[low]);
		}
	}
	return (-1);
}
