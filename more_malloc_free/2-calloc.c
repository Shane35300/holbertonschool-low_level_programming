
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function
 * Description: creates an array
 * @nmemb: integer
 * @size: integer
 * @n: integer
 * Return: retourne
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i, j;
unsigned int *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(sizeof(int) * nmemb);

if (ptr == NULL)
return (NULL);

for (i = 0 ; i < nmemb ; i++)
{
	ptr[i] = malloc(sizeof(int) * size);

	if (ptr[i] == NULL)
	return (NULL);
}
for (i = 0 ; i < nmemb ; i++)
{
	for (j = 0 ; j < size ; j++)
	{
		ptr[i][j] = 0;
	}
}
return (ptr);
}
