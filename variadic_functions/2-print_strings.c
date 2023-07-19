#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print
 * Description: print numbers
 * @separator: separateur
 * @n: n
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *str;
	va_list variable;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(variable, n);

	for (i = 0 ; i < ((int)n - 1) ; i++)
	{
		str = va_arg(variable, char*);

		if (str == NULL)
		printf("(nil)");

		else
		printf("%s", str);

		if (separator != NULL)
		printf("%s", separator);
	}
	for (i = ((int)n - 1) ; i < (int)n ; i++)
	{
		printf("%s", va_arg(variable, char*));
	}
	va_end(variable);
	printf("\n");
}
