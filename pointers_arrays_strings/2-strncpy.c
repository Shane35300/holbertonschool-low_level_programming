#include "main.h"
/**
 * _strncpy - strncpy
 * Description: work exactly like strncpy

 @dest: dest
 *@src: src
 *@n: n
 * Return:
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *ptr = src;
	char **pptr = ptr;

	while ( *ptr != '\0' && n > 0)
	{
		*dest = **pptr;
		dest++;
		src++;
		n--;
	}
}
