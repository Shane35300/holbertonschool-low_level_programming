#include "main.h"
/**
 * _strcpy - copy
 * Description : copy src to dest
 *@dest: a pointer/
 *@src: integer
 *
 * Return: return a pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int nb;
	int nombre;

	while (src[nombre] != '\0')
	{
		nombre++;
	}
	for (nb = 0 ; src[nb] != src[nombre + 1] ; nb++)
	{
		dest[nb] = src[nb];
	}
	return (dest);
}
