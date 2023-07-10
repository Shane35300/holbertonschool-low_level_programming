#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function
 * Description: creates an array of char
 * @grid: double pointer
 * @height: hauteur
 * Return: retourne
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
