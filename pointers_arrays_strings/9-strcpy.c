#include "main.h"
/**
 * _strcpy - copy
 * Description : copy src to dest
 *@dest: a pointer/
 *@src: integer
 */
char *_strcpy(char *dest, char *src)
{
	int nb;

	for (nb = 0 ; src[nb] != '\0' ; nb++)
	{
		dest[nb] = src[nb];
	}
	return (dest)
}
