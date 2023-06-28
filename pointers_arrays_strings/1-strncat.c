#include "main.h"
/**
 * _strcat - concatenate strings
 * Description : concatenate
 * @dest: a pointer
 * @src: another pointer
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src <= src[n - 1])
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
