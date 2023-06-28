#include "main.h"
/**
 * _strncat - concatenate strings
 * Description : concatenate
 * @dest: a pointer
 * @src: another pointer
 * @n: variable
 * Return: return dest
 */
char* _strncat(char* dest, const char* src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*ptr++ = *src++;
		n--;
	}
	*ptr = '\0';
	return dest;
}
