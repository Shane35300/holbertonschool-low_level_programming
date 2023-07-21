#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct print - Struct print
 *
 * @str: string
 * @f: function pointer
 * Definition: definition
 */
typedef struct print
{
char *str;
void (*f)(va_list args);
} op_t;

void print_all(const char * const format, ...);
#endif /* VARIADIC_FUNCTIONS_H */
