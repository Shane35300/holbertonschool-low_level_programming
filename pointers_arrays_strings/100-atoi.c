#include "main.h"
/**
 * _atoi - fonction
 * Description: function that convert a string to an integer.
 * @s: variable
 * Return: return
*/
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s != '-' && (*s < '0' && *s > '9'))
	{
		s++;
	}
	if (*s == '-')
	{
		sign = sign * -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{

		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}
