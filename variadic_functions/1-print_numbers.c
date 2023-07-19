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

	for (i = 0 ; i < ((int)n - 1) ; i++)
	{
		printf("%d", va_arg(variable, int));

		if (separator != NULL)
		printf("%s", separator);
	}
	for (i = ((int)n - 1) ; i < (int)n ; i++)
	{
		printf("%d", va_arg(variable, int));
	}
	va_end(variable);
	printf("\n");
}
