#include "main.h"
/**
 * reverse_array - reverse
 * Description : reverses the content of an array of integers
 *@a: a pointer/
 *@n: number of ele*/
void reverse_array(int *a, int n)
{
	int ni = 0;
	int end = n - 1;
	int temp;

	while (ni <= end)
	{
		temp = a[ni];
		a[ni] = a[end];
		a[end] = temp;
		ni++;
		end--;
	}
}
