#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * Description: concatenation
 * @s1: string 1
 * @s2: string 2
 * Return: return
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr = 0;
	int i = 0, j = 0, nb1 = 0, nb2 = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[nb1] != '\0')
	{
		nb1++;
	}
	while (s2[nb2] != '\0')
	{
		nb2++;
	}
	ptr = (char *)malloc((nb1 + nb2 + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < nb1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < nb2)
	{
		ptr[i + j] = s2[j];
		j++;
	}
	return (ptr);
}
 