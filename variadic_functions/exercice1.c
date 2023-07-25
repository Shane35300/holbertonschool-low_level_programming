#include <stdio.h>
#include "ex.h"
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = 0;
	char *str;

	va_list liste;

	va_start(liste, n);

	if (n == 0)
	{
		printf("\n");
		return;
	}
	while (i < ((int)n - 1))
	{
		str = va_arg(liste, char*);

		if (separator == NULL)
		printf("%s", str);

		else
		{
			printf("%s", str);
			printf("%s", separator);
		}
		i++;
	}
	while (i < (int)n)
	{
		str = va_arg(liste, char*);
		printf("%s", str);
		i++;
	}
	va_end(liste);
	printf("\n");
}
