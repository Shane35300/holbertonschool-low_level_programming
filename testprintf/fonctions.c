#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * strings - Print strings
 * @list: va_list argument
 * Return: Print strings
*/
void strings(va_list list)
{
    char *s = va_arg(list, char*);
    int i = 0;
    while (s[i] != '\0')
    {
        _putchar(s[i]);
        i++;
    }
}
/**
 * character - Print character
 * @list: va_list argument
 * Return: Print character
*/
void character(va_list list)
{
    int c = va_arg(list, int);
    _putchar(c);
}
/**
 * integer - Print integer
 * @list: va_list argument
 * Return: Print integer
*/
void integer(va_list list)
{
    int i = va_arg(list, int);
    print_integer(i);
}
/**
 * decimal - Print decimal
 * @list: va_list argument
 * Return: Print decimal
*/
void decimal(va_list list)
{
    int d = va_arg(list, int);
    print_decimal(d);
}
