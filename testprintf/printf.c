#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - Print all types
 * @format: first parameter
 * Return: Print all types
*/
int _printf(const char *format, ...)
{
elem_t array[] = {
    {"c", character},
    {"s", strings},
    {"i", integer},
    {"d", decimal},
    {NULL, NULL},
};
va_list list;
int i = 0, j;
int lenght = 0;
va_start(list, format);
while (format[i])
{
	if (format[i] == '%')
	{
		j = 0;
		while (array[j].element != NULL)
		{
			if (format[i + 1] == *(array[j].element))
			{
				array[j].f(list);
				i += 2;
				break;
			}
			j++;
		}
	}
	_putchar(format[i]);
	lenght++;
	i++;
}
va_end(list);
return (lenght);
}
