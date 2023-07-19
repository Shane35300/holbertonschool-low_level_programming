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

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(variable, n);

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
