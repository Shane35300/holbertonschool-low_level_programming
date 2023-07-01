#include "main.h"
#include <stdio.h>
/**
* print_diagsums - fonction
* Description : locate a caracter in a string
* @a: array
* @size: size
*/
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int somme = 0;

	for (i = size ; i >= 0 ; i--)
	{
		for (j = size ; j >= 0 ; j--)
		{
			if (i == j)
			{
				somme = somme + *a[i][j];
			}
		}
	}
	printf("%d", somme);
}
