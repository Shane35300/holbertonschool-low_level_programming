#include "main.h"
#include <ctype.h>
/**
* string_toupper - reverse
* Description : reverses the content of an array of integers
* @str: a pointer/
* Return: return
*/
char *string_toupper(char *str)
{
	int nb = 0;

	while (str[nb] != '\0')
	{
		str[nb] = toupper(str[nb]);
		nb++;
	}
	return (str);
}
