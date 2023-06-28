#include "main.h"
#include <stdio.h>
/**
 * print_array - print
 * Description : print reversed
 *@a: a pointer/
 *@n: integer
 */
void print_array(int *a, int n)
{
	int nb = 0;


	for (nb = 0 ; nb <= (n -1) ; nb++)
	{
		printf("%d, ", a[nb]);
	}
	printf("\n");
}
