#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_char - char
 * Description: description
 * @args: arguments
*/
void print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}
/**
 * print_integer - integer
 * Description: description
 * @args: arguments
*/
void print_integer(va_list args)
{
	int i = va_arg(args, int);

	printf("%d", i);
}
/**
 * print_float - float
 * Description: description
 * @args: arguments
*/
void print_float(va_list args)
{
	double f = va_arg(args, double);

	printf("%f", f);
}
/**
 * print_string - string
 * Description: description
 * @args: arguments
*/
void print_string(va_list args)
{
	char *s = va_arg(args, char*);

	if (s != NULL)
	printf("%s", s);

	else
	printf("(nil)");
}
/**
 * print_all - print
 * Description: print numbers
 * @format: n
*/
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *ptr = "";

	op_t print[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
	};
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == *(print[j].str))
			{
				printf("%s", ptr);
				print[j].f(args);
				ptr = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

