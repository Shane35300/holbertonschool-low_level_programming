#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function
 * Description: creates an array of char
 * @width: largeur
 * @height: hauteur
 * Return: retourne
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
	return (NULL);

	ptr = (int **)malloc(height * sizeof(int *));

	if (ptr == NULL)
	return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			for (j = 0 ; j < width ; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
		for (j = 0 ; j < width ; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
