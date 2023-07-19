#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * sum_them_all - sum
 * Description: return sum of the parameters
 * @n: n
 * Return: return the sum of all its parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	return (0);

	int total = 0;
	va_list variable;
	va_start(variable, n);
	int i, nombre;

	for (i = 0 ; i < n ; i++)
	{
		nombre = va_arg(variable, int);
		total += nombre;
	}
	va_end(variable);

	return (total);
}
