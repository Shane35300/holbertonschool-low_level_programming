#include "main.h"
/**
* _memcpy - memcpy
* Description : fills memory with a constant byte.
* @dest: destination
* @src: source
* @n: int
* Return: return
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int nb = 0;

	while (nb < n)
	{
		dest[nb] = src[nb];
		nb++;
	}
	return (dest);
}
