#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
void choose(const char * const format, ...)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};
	int i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
		return (ops[i].f);

		i++;
	}
	return (NULL);
}
/**
 * print_strings - print
 * Description: print numbers
 * @separator: separateur
 * @n: n
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char currentChar;
	va_list args;

	va_start(args, format);

	argument arg;

