#include "main.h"
/**
* _memset - memset
* Description : fills memory with a constant byte.
* @s: a pointer/
* @b: var
* @n: int
* Return: return
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int nb = 0;

	while (nb < n)
	{
		s[nb] = b;
		nb++;
	}
	return (s);
}
