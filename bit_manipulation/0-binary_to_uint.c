#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - function name
 * Description: convertit a binary number to an unsigned int
 * @b: string
 * Return: an int binary
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		return (0);

		result = result << 1 | (*b - '0');

		b++;
	}
	return (result);
}
