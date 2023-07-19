#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum
 * Description: return sum of the parameters
 * @n: n
 * Return: return the sum of all its parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int nombre;
	int total = 0;
	va_list variable;

	va_start(variable, n);

	if (n == 0)
	return (0);





	for (i = 0 ; i < (int)n ; i++)
	{
		nombre = va_arg(variable, int);
		total += nombre;
	}
	va_end(variable);

	return (total);
}
