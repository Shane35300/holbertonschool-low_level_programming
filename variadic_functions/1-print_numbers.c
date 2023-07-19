#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print
 * Description: print numbers
 * @separator: separateur
 * @n: n
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list variable;

	va_start(variable, n);

	if (n == 0)
	return;

	for (i = 0 ; i < (int)n ; i++)
	{
		printf("%s\n", va_arg(variable, int);

		if (separator != NULL)
		printf("%s\n", separator);
	}
	va_end(variable);
}
