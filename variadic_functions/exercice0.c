#include <stdio.h>
#include "ex.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum = 0;

	va_list liste;

	if (n == 0)
	return (0);

	va_start(liste, n);

	for (i = 0 ; i < (int)n ; i++)
	{
		sum += va_arg(liste, unsigned int);
	}
	va_end(liste);

	return (sum);
}
