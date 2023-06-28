#include "main.h"
/**
 * _strcat - concatenate strings
 * Description : concatenate
 * @dest: a pointer
 * @src: another pointer
 * Return: return dest
 */
char *_strcat(char *dest, char *src)
{
	*ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
